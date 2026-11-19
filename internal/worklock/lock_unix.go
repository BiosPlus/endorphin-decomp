//go:build !windows

package worklock

import (
	"os"
	"syscall"
)

// tryLock takes an exclusive, non-blocking flock. busy reports that another holder has it.
func tryLock(f *os.File) (busy bool, err error) {
	err = syscall.Flock(int(f.Fd()), syscall.LOCK_EX|syscall.LOCK_NB)
	if err == syscall.EWOULDBLOCK || err == syscall.EINTR {
		return true, err
	}
	return false, err
}

func unlock(f *os.File) {
	_ = syscall.Flock(int(f.Fd()), syscall.LOCK_UN)
}
