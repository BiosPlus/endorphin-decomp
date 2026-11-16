package main

import (
	"fmt"
	"os"
	"os/signal"
	"path/filepath"
	"strconv"
	"syscall"
	"time"
)

// workLockPath is the single lock that serialises every write to a shared shard .cpp, the unit
// ledger, and the git index. It is a flock(2) lock, so the kernel drops it the moment the holder
// exits or is killed: there is no stale-lock guessing and no "steal it after N seconds".
// grind.sh takes the same lock with flock(1) around its own git commits.
var workLockPath = filepath.Join(".local", "work.lock")

// workLockTimeout bounds how long we wait for another holder. Critical sections are a shard
// compile (~0.2s) plus a git commit, so waiting this long means something is wedged. On timeout
// we exit with an error rather than run the critical section unlocked.
const workLockTimeout = 10 * time.Minute

var workLockDepth int // re-entrancy guard: a second flock on a new fd in the same process would self-deadlock

func withWorkLock(fn func()) {
	if workLockDepth > 0 {
		workLockDepth++
		defer func() { workLockDepth-- }()
		fn()
		return
	}

	_ = os.MkdirAll(filepath.Dir(workLockPath), 0755)
	f, err := os.OpenFile(workLockPath, os.O_RDWR|os.O_CREATE, 0644)
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error: cannot open work lock %s: %v\n", workLockPath, err)
		fmt.Fprintln(os.Stderr, "Refusing to modify shared files without the lock (.local/ must be writable).")
		os.Exit(1)
	}
	defer f.Close()

	deadline := time.Now().Add(workLockTimeout)
	for {
		err = syscall.Flock(int(f.Fd()), syscall.LOCK_EX|syscall.LOCK_NB)
		if err == nil {
			break
		}
		if err != syscall.EWOULDBLOCK && err != syscall.EINTR {
			fmt.Fprintf(os.Stderr, "Error: flock %s failed: %v\n", workLockPath, err)
			os.Exit(1)
		}
		if time.Now().After(deadline) {
			holder, _ := os.ReadFile(workLockPath)
			fmt.Fprintf(os.Stderr, "Error: timed out after %s waiting for %s (holder: %s). Not proceeding unlocked.\n",
				workLockTimeout, workLockPath, string(holder))
			os.Exit(1)
		}
		time.Sleep(25 * time.Millisecond)
	}

	// Record the holder for diagnostics only; correctness comes from flock, not this content.
	_ = f.Truncate(0)
	_, _ = f.WriteAt([]byte(strconv.Itoa(os.Getpid())+"\n"), 0)

	// Don't let a SIGTERM from `timeout` interrupt a half-written merge or commit. The critical
	// section is short; `timeout --kill-after` still delivers SIGKILL if it ever hangs.
	signal.Ignore(syscall.SIGTERM, syscall.SIGINT, syscall.SIGHUP)

	workLockDepth = 1
	defer func() {
		workLockDepth = 0
		signal.Reset(syscall.SIGTERM, syscall.SIGINT, syscall.SIGHUP)
		_ = syscall.Flock(int(f.Fd()), syscall.LOCK_UN)
	}()
	fn()
}

// writeFileAtomic replaces path via a temp file + rename so a crash mid-write never leaves a
// truncated shard behind.
func writeFileAtomic(path string, data []byte, perm os.FileMode) error {
	dir := filepath.Dir(path)
	if err := os.MkdirAll(dir, 0755); err != nil {
		return err
	}
	tmp, err := os.CreateTemp(dir, "."+filepath.Base(path)+".tmp*")
	if err != nil {
		return err
	}
	tmpName := tmp.Name()
	if _, err := tmp.Write(data); err != nil {
		tmp.Close()
		os.Remove(tmpName)
		return err
	}
	if err := tmp.Close(); err != nil {
		os.Remove(tmpName)
		return err
	}
	if err := os.Chmod(tmpName, perm); err != nil {
		os.Remove(tmpName)
		return err
	}
	return os.Rename(tmpName, path)
}
