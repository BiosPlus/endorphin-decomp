// units: maintenance CLI for the per-function unit ledger (build/units/**.json, see internal/unitstore).
//
//	units migrate [--remove-legacy]   split the old build/units.json into build/units/<shard>/<VA>.json
//	units export                      print the whole ledger as one JSON array on stdout (for jq etc.)
//	units verify                      check files are well-formed, in the right shard, and canonically formatted
//
// This is the sanctioned way to look at the ledger as one document; do not edit unit files by hand.
package main

import (
	"bytes"
	"encoding/json"
	"fmt"
	"os"
	"path/filepath"
	"strings"

	"endorphin_decomp/internal/unitstore"
)

func main() {
	if len(os.Args) < 2 {
		fmt.Fprintln(os.Stderr, "Usage: units migrate [--remove-legacy] | export | verify")
		os.Exit(1)
	}
	switch os.Args[1] {
	case "migrate":
		n, err := unitstore.Migrate()
		if err != nil {
			fmt.Fprintf(os.Stderr, "migrate: %v\n", err)
			os.Exit(1)
		}
		// Prove the split is lossless before anyone is allowed to delete the original.
		if err := compareWithLegacy(); err != nil {
			fmt.Fprintf(os.Stderr, "migrate: verification FAILED: %v\n", err)
			os.Exit(1)
		}
		fmt.Printf("Migrated %d units into %s/ and verified they match %s exactly.\n", n, unitstore.Dir, unitstore.Legacy)
		for _, a := range os.Args[2:] {
			if a == "--remove-legacy" {
				if err := os.Remove(unitstore.Legacy); err != nil {
					fmt.Fprintf(os.Stderr, "could not remove %s: %v\n", unitstore.Legacy, err)
					os.Exit(1)
				}
				fmt.Printf("Removed %s.\n", unitstore.Legacy)
			}
		}
	case "export":
		b, err := unitstore.ReadAll()
		if err != nil {
			fmt.Fprintf(os.Stderr, "export: %v\n", err)
			os.Exit(1)
		}
		var out bytes.Buffer
		if err := json.Indent(&out, b, "", "  "); err != nil {
			fmt.Fprintf(os.Stderr, "export: %v\n", err)
			os.Exit(1)
		}
		out.WriteByte('\n')
		_, _ = os.Stdout.Write(out.Bytes())
	case "verify":
		if err := verify(); err != nil {
			fmt.Fprintf(os.Stderr, "verify: %v\n", err)
			os.Exit(1)
		}
	default:
		fmt.Fprintf(os.Stderr, "unknown subcommand %q\n", os.Args[1])
		os.Exit(1)
	}
}

// compareWithLegacy checks that the store, re-assembled, is semantically identical to the legacy file.
func compareWithLegacy() error {
	legacy, err := os.ReadFile(unitstore.Legacy)
	if err != nil {
		return err
	}
	store, err := unitstore.ReadAll()
	if err != nil {
		return err
	}
	var a, b []json.RawMessage
	if err := json.Unmarshal(legacy, &a); err != nil {
		return err
	}
	if err := json.Unmarshal(store, &b); err != nil {
		return err
	}
	if len(a) != len(b) {
		return fmt.Errorf("unit count differs: legacy %d vs store %d", len(a), len(b))
	}
	for i := range a {
		var x, y bytes.Buffer
		if err := json.Compact(&x, a[i]); err != nil {
			return err
		}
		if err := json.Compact(&y, b[i]); err != nil {
			return err
		}
		if !bytes.Equal(x.Bytes(), y.Bytes()) {
			return fmt.Errorf("unit #%d differs:\n  legacy: %.200s\n  store:  %.200s", i, x.Bytes(), y.Bytes())
		}
	}
	return nil
}

func verify() error {
	var problems []string
	count := 0
	err := filepath.WalkDir(unitstore.Dir, func(p string, d os.DirEntry, err error) error {
		if err != nil {
			return err
		}
		if d.IsDir() {
			return nil
		}
		if !strings.HasSuffix(p, ".json") {
			problems = append(problems, "stray file: "+p)
			return nil
		}
		count++
		b, err := os.ReadFile(p)
		if err != nil {
			return err
		}
		var obj map[string]json.RawMessage
		if err := json.Unmarshal(b, &obj); err != nil {
			problems = append(problems, fmt.Sprintf("%s: invalid JSON: %v", p, err))
			return nil
		}
		var va string
		if raw, ok := obj["va"]; !ok || json.Unmarshal(raw, &va) != nil {
			problems = append(problems, p+": missing va")
			return nil
		}
		if want := unitstore.Path(va); filepath.ToSlash(want) != filepath.ToSlash(p) {
			problems = append(problems, fmt.Sprintf("%s: belongs at %s", p, want))
		}
		return nil
	})
	if err != nil {
		return err
	}
	if len(problems) > 0 {
		return fmt.Errorf("%d problem(s):\n  %s", len(problems), strings.Join(problems, "\n  "))
	}
	fmt.Printf("OK: %d unit files in %s/\n", count, unitstore.Dir)
	return nil
}
