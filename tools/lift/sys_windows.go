//go:build windows

package main

import (
	"os"
	"os/exec"
)

func setProcGroup(cmd *exec.Cmd) {
	// Windows does not use POSIX process groups; keep default process attributes.
}

func signalProcGroup(pg int, force bool) {
	if p, err := os.FindProcess(pg); err == nil {
		_ = p.Kill()
	}
}

func termCols() int {
	return defaultTerminalColumns
}
