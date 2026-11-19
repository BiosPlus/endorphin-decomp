package main

import (
	"os"
	"path/filepath"

	"endorphin_decomp/internal/worklock"
)

// withWorkLock serialises every write to a shared shard .cpp, the unit ledger, and the git index.
// It is the flock(2) lock in internal/worklock, also taken by auto_solve, resplit and grind.
func withWorkLock(fn func()) { worklock.With(fn) }

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
