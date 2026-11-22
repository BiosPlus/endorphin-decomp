//go:build !windows

package main

import (
	"os"
	"os/exec"
	"syscall"
	"unsafe"
)

func setProcGroup(cmd *exec.Cmd) {
	cmd.SysProcAttr = &syscall.SysProcAttr{Setpgid: true}
}

func signalProcGroup(pg int, force bool) {
	if force {
		_ = syscall.Kill(-pg, syscall.SIGKILL)
		return
	}
	_ = syscall.Kill(-pg, syscall.SIGTERM)
}

func termCols() int {
	var ws struct{ Row, Col, X, Y uint16 }
	if _, _, e := syscall.Syscall(syscall.SYS_IOCTL, os.Stdout.Fd(), syscall.TIOCGWINSZ, uintptr(unsafe.Pointer(&ws))); e == 0 && ws.Col > 0 {
		return int(ws.Col)
	}
	return defaultTerminalColumns
}
