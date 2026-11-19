// Package worklock is the single repository-wide lock that serialises every write to a shared shard .cpp,
// the unit ledger, and the git index. It is a flock(2) lock on .local/work.lock, so the kernel drops it the
// moment the holder exits or is killed: there is no stale-lock guessing and no "steal it after N seconds".
//
// Every tool that writes shared state (work, auto_solve, grind, resplit) takes it through this package.
package worklock

import (
	"fmt"
	"os"
	"os/signal"
	"path/filepath"
	"strconv"
	"syscall"
	"time"
)

// Path is the lock file, relative to the repository root.
var Path = filepath.Join(".local", "work.lock")

// Timeout bounds how long we wait for another holder. Critical sections are a shard compile plus a git
// commit, so waiting this long means something is wedged. On timeout we fail rather than run unlocked.
var Timeout = 10 * time.Minute

var depth int // re-entrancy guard: a second flock on a new fd in the same process would self-deadlock

func acquire() (*os.File, error) {
	_ = os.MkdirAll(filepath.Dir(Path), 0755)
	f, err := os.OpenFile(Path, os.O_RDWR|os.O_CREATE, 0644)
	if err != nil {
		return nil, fmt.Errorf("cannot open work lock %s: %v", Path, err)
	}
	deadline := time.Now().Add(Timeout)
	for {
		busy, lerr := tryLock(f)
		if lerr == nil {
			break
		}
		if !busy {
			err = lerr
			f.Close()
			return nil, fmt.Errorf("flock %s failed: %v", Path, err)
		}
		if time.Now().After(deadline) {
			holder, _ := os.ReadFile(Path)
			f.Close()
			return nil, fmt.Errorf("timed out after %s waiting for %s (holder: %s); not proceeding unlocked", Timeout, Path, string(holder))
		}
		time.Sleep(25 * time.Millisecond)
	}
	// Record the holder for diagnostics only; correctness comes from flock, not this content.
	_ = f.Truncate(0)
	_, _ = f.WriteAt([]byte(strconv.Itoa(os.Getpid())+"\n"), 0)
	return f, nil
}

func releaseFile(f *os.File) {
	unlock(f)
	_ = f.Close()
}

// With runs fn while holding the work lock; it exits the process if the lock cannot be taken.
// Nested calls in the same process run fn directly. SIGTERM/SIGINT/SIGHUP are ignored while the lock is
// held so a half-written merge or commit is never interrupted; SIGKILL still works if it ever hangs.
// Use this in short-lived CLI tools (work, auto_solve, resplit).
func With(fn func()) {
	if depth > 0 {
		depth++
		defer func() { depth-- }()
		fn()
		return
	}
	f, err := acquire()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error: %v\n", err)
		fmt.Fprintln(os.Stderr, "Refusing to modify shared files without the lock (.local/ must be writable).")
		os.Exit(1)
	}
	signal.Ignore(syscall.SIGTERM, syscall.SIGINT, syscall.SIGHUP)
	depth = 1
	defer func() {
		depth = 0
		signal.Reset(syscall.SIGTERM, syscall.SIGINT, syscall.SIGHUP)
		releaseFile(f)
	}()
	fn()
}

// Acquire takes the lock for a long, straight-line critical section and returns the release func. Like
// With, it exits the process on failure and ignores termination signals until released. An os.Exit inside
// the section is safe: the kernel drops the flock with the process.
func Acquire() (release func()) {
	if depth > 0 {
		depth++
		return func() { depth-- }
	}
	f, err := acquire()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error: %v\n", err)
		os.Exit(1)
	}
	signal.Ignore(syscall.SIGTERM, syscall.SIGINT, syscall.SIGHUP)
	depth = 1
	return func() {
		depth = 0
		signal.Reset(syscall.SIGTERM, syscall.SIGINT, syscall.SIGHUP)
		releaseFile(f)
	}
}

// Do runs fn while holding the work lock and returns an error instead of exiting. It leaves signal
// handling alone, for long-running orchestrators (grind) that install their own handlers.
func Do(fn func() error) error {
	f, err := acquire()
	if err != nil {
		return err
	}
	defer releaseFile(f)
	return fn()
}
