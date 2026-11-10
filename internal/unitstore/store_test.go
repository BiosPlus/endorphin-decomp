package unitstore

import (
	"encoding/json"
	"os"
	"path/filepath"
	"strings"
	"testing"
	"time"
)

// legacy-shaped sample covering every optional-field combination seen in the real ledger.
const sample = `[
  {"va":"0x00401000","size":50,"sha256":"aa","symbol":"sub_00401000","callees":[],"num_callees":0,"is_leaf":true,"is_thunk":false,"relocations":[],"status":"todo"},
  {"va":"0x00401040","size":14,"sha256":"bb","symbol":"sub_00401040","callees":["0x006A5C5C"],"num_callees":1,"is_leaf":false,"is_thunk":false,"relocations":["0x00401046"],"status":"matched","matched_by":"claude-haiku-5.5","matched_at":"2026-11-09T09:33:13Z"},
  {"va":"0x006A04E0","size":9,"sha256":"cc","symbol":"X::vfunc_2","callees":null,"num_callees":0,"is_leaf":true,"is_thunk":false,"relocations":null,"status":"deferred","skip_reason":"nope","future_field":{"a":1}}
]`

func inTempRepo(t *testing.T) {
	t.Helper()
	old, _ := os.Getwd()
	if err := os.Chdir(t.TempDir()); err != nil {
		t.Fatal(err)
	}
	snapMu.Lock()
	snap, snapped = map[string][32]byte{}, false
	snapMu.Unlock()
	t.Cleanup(func() { _ = os.Chdir(old) })
}

func normalize(t *testing.T, b []byte) string {
	t.Helper()
	var v []map[string]any
	if err := json.Unmarshal(b, &v); err != nil {
		t.Fatal(err)
	}
	out, _ := json.Marshal(v) // map keys sorted -> order-insensitive comparison
	return string(out)
}

func TestRoundTripAndLayout(t *testing.T) {
	inTempRepo(t)
	if err := WriteAll([]byte(sample)); err != nil {
		t.Fatal(err)
	}
	if _, err := os.Stat("build/units/0040/00401040.json"); err != nil {
		t.Fatalf("expected sharded file: %v", err)
	}
	if _, err := os.Stat("build/units/006A/006A04E0.json"); err != nil {
		t.Fatalf("expected sharded file: %v", err)
	}
	got, err := ReadAll()
	if err != nil {
		t.Fatal(err)
	}
	if normalize(t, got) != normalize(t, []byte(sample)) {
		t.Fatalf("round trip changed data:\n got  %s\n want %s", got, sample)
	}
	b, _ := os.ReadFile("build/units/0040/00401040.json")
	if !strings.HasPrefix(string(b), "{\n  \"va\": \"0x00401040\",\n  \"size\": 14,") || !strings.HasSuffix(string(b), "}\n") {
		t.Fatalf("unexpected canonical layout:\n%s", b)
	}
	b, _ = os.ReadFile("build/units/006A/006A04E0.json")
	if !strings.Contains(string(b), "\"future_field\"") {
		t.Fatalf("unknown field must be preserved:\n%s", b)
	}
}

func TestOnlyChangedUnitsAreWritten(t *testing.T) {
	inTempRepo(t)
	if err := WriteAll([]byte(sample)); err != nil {
		t.Fatal(err)
	}
	arr, _ := ReadAll()

	old := time.Now().Add(-time.Hour)
	for _, p := range []string{"build/units/0040/00401000.json", "build/units/0040/00401040.json", "build/units/006A/006A04E0.json"} {
		_ = os.Chtimes(p, old, old)
	}

	var units []map[string]any
	_ = json.Unmarshal(arr, &units)
	units[0]["status"] = "matched"
	units[0]["matched_by"] = "tester"
	out, _ := json.Marshal(units)
	if err := WriteAll(out); err != nil {
		t.Fatal(err)
	}

	for p, wantTouched := range map[string]bool{
		"build/units/0040/00401000.json": true,
		"build/units/0040/00401040.json": false,
		"build/units/006A/006A04E0.json": false,
	} {
		st, _ := os.Stat(p)
		if touched := st.ModTime().After(old.Add(time.Minute)); touched != wantTouched {
			t.Errorf("%s: rewritten=%v want %v", p, touched, wantTouched)
		}
	}
}

// A tool must not revert a change another process made to a unit this tool did not modify.
func TestDoesNotClobberConcurrentChange(t *testing.T) {
	inTempRepo(t)
	if err := WriteAll([]byte(sample)); err != nil {
		t.Fatal(err)
	}
	arr, _ := ReadAll() // this "process" loads the store

	// another process matches 0x00401000 meanwhile
	other := `{"va":"0x00401000","size":50,"sha256":"aa","symbol":"sub_00401000","callees":[],"num_callees":0,"is_leaf":true,"is_thunk":false,"relocations":[],"status":"matched","matched_by":"other"}`
	var obj map[string]json.RawMessage
	_ = json.Unmarshal([]byte(other), &obj)
	c, _ := canonical(obj)
	_ = os.WriteFile("build/units/0040/00401000.json", c, 0644)

	// this process only changes a different unit, then saves everything it holds
	var units []map[string]any
	_ = json.Unmarshal(arr, &units)
	units[1]["symbol"] = "renamed"
	out, _ := json.Marshal(units)
	if err := WriteAll(out); err != nil {
		t.Fatal(err)
	}

	b, _ := os.ReadFile("build/units/0040/00401000.json")
	if !strings.Contains(string(b), `"matched_by": "other"`) {
		t.Fatalf("concurrent change was reverted:\n%s", b)
	}
	b, _ = os.ReadFile("build/units/0040/00401040.json")
	if !strings.Contains(string(b), "renamed") {
		t.Fatalf("own change was not written:\n%s", b)
	}
}

func TestDeletesRemovedUnitsAndEmptyShards(t *testing.T) {
	inTempRepo(t)
	if err := WriteAll([]byte(sample)); err != nil {
		t.Fatal(err)
	}
	arr, _ := ReadAll()
	var units []json.RawMessage
	_ = json.Unmarshal(arr, &units)
	out, _ := json.Marshal(units[:2]) // drop 0x006A04E0
	if err := WriteAll(out); err != nil {
		t.Fatal(err)
	}
	if _, err := os.Stat("build/units/006A/006A04E0.json"); !os.IsNotExist(err) {
		t.Fatal("removed unit's file should be deleted")
	}
	if _, err := os.Stat(filepath.Dir("build/units/006A/006A04E0.json")); !os.IsNotExist(err) {
		t.Fatal("empty shard directory should be removed")
	}
}

func TestFreshWriteDeletesStaleDiskFiles(t *testing.T) { // e.g. extract_units regenerating from scratch
	inTempRepo(t)
	if err := WriteAll([]byte(sample)); err != nil {
		t.Fatal(err)
	}
	snapMu.Lock()
	snap, snapped = map[string][32]byte{}, false // new process, never called ReadAll
	snapMu.Unlock()
	var all []json.RawMessage
	_ = json.Unmarshal([]byte(sample), &all)
	out, _ := json.Marshal(all[:1])
	if err := WriteAll(out); err != nil {
		t.Fatal(err)
	}
	if _, err := os.Stat("build/units/0040/00401040.json"); !os.IsNotExist(err) {
		t.Fatal("stale on-disk unit should be deleted by a fresh full write")
	}
}

func TestPathAndNormVA(t *testing.T) {
	if got := Path("0x6a04e0"); filepath.ToSlash(got) != "build/units/006A/006A04E0.json" {
		t.Fatalf("got %s", got)
	}
	if NormVA("6a04e0") != "0x006A04E0" {
		t.Fatal("NormVA")
	}
}

func TestRejectsDuplicatesAndMissingVA(t *testing.T) {
	inTempRepo(t)
	if err := WriteAll([]byte(`[{"va":"0x1"},{"va":"0x00000001"}]`)); err == nil {
		t.Fatal("duplicate VA must be rejected")
	}
	if err := WriteAll([]byte(`[{"size":1}]`)); err == nil {
		t.Fatal("missing va must be rejected")
	}
}
