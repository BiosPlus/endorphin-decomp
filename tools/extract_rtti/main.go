package main

import (
	"bytes"
	"crypto/sha256"
	"debug/pe"
	"encoding/binary"
	"encoding/hex"
	"encoding/json"
	"fmt"
	"os"
	"os/exec"
	"path/filepath"
	"sort"
	"strings"
)

type TargetConfig struct {
	BinaryName string `json:"binary_name"`
	Version    string `json:"version"`
	SHA256     string `json:"sha256"`
	ImageBase  string `json:"image_base"`
	Sections   map[string]struct {
		VA          string `json:"va"`
		RVA         string `json:"rva"`
		VirtualSize uint32 `json:"virtual_size"`
		RawSize     uint32 `json:"raw_size"`
	} `json:"sections"`
}

type SectionMem struct {
	Name  string
	VA    uint32
	VSize uint32
	Data  []byte
}

type PEImage struct {
	ImageBase uint32
	Sections  []SectionMem
}

func loadPEImage(path string, expectedSHA256 string) (*PEImage, error) {
	raw, err := os.ReadFile(path)
	if err != nil {
		return nil, err
	}
	sum := sha256.Sum256(raw)
	actualHex := hex.EncodeToString(sum[:])
	if !strings.EqualFold(actualHex, expectedSHA256) {
		return nil, fmt.Errorf("SHA-256 mismatch: got %s, expected %s", actualHex, expectedSHA256)
	}
	fmt.Printf("Verified %s SHA-256: %s\n", path, actualHex)

	f, err := pe.NewFile(bytes.NewReader(raw))
	if err != nil {
		return nil, err
	}
	defer f.Close()

	var imageBase uint32 = 0x00400000
	if opt, ok := f.OptionalHeader.(*pe.OptionalHeader32); ok {
		imageBase = opt.ImageBase
	}

	img := &PEImage{ImageBase: imageBase}
	for _, s := range f.Sections {
		data, err := s.Data()
		if err != nil {
			continue
		}
		img.Sections = append(img.Sections, SectionMem{
			Name:  s.Name,
			VA:    imageBase + s.VirtualAddress,
			VSize: s.VirtualSize,
			Data:  data,
		})
	}
	return img, nil
}

func (img *PEImage) FindSection(name string) *SectionMem {
	for i := range img.Sections {
		if img.Sections[i].Name == name {
			return &img.Sections[i]
		}
	}
	return nil
}

func (img *PEImage) ReadU32(va uint32) (uint32, bool) {
	for i := range img.Sections {
		s := &img.Sections[i]
		limit := uint32(len(s.Data))
		if s.VSize < limit {
			limit = s.VSize
		}
		if va >= s.VA && va < s.VA+limit && (s.VA+limit)-va >= 4 {
			off := va - s.VA
			return binary.LittleEndian.Uint32(s.Data[off : off+4]), true
		}
	}
	return 0, false
}

func (img *PEImage) ReadI32(va uint32) (int32, bool) {
	u, ok := img.ReadU32(va)
	return int32(u), ok
}

func (img *PEImage) ReadCString(va uint32, maxLen int) (string, bool) {
	for i := range img.Sections {
		s := &img.Sections[i]
		limit := uint32(len(s.Data))
		if va >= s.VA && va < s.VA+limit {
			off := va - s.VA
			end := off
			for end < limit && int(end-off) < maxLen && s.Data[end] != 0 {
				end++
			}
			if end < limit && s.Data[end] == 0 {
				return string(s.Data[off:end]), true
			}
		}
	}
	return "", false
}

// cleanUndname strips llvm-undname's RTTI suffix and leading class/struct keywords
func cleanUndname(demangled string) string {
	s := strings.TrimSpace(demangled)
	s = strings.TrimSuffix(s, " `RTTI Type Descriptor Name'")
	if strings.HasPrefix(s, "class ") {
		s = strings.TrimPrefix(s, "class ")
	} else if strings.HasPrefix(s, "struct ") {
		s = strings.TrimPrefix(s, "struct ")
	}
	s = strings.ReplaceAll(s, "<class ", "<")
	s = strings.ReplaceAll(s, "<struct ", "<")
	s = strings.ReplaceAll(s, ", class ", ", ")
	s = strings.ReplaceAll(s, ", struct ", ", ")
	s = strings.ReplaceAll(s, "const class ", "const ")
	s = strings.ReplaceAll(s, "const struct ", "const ")
	return s
}

func batchDemangleTypeNames(mangledList []string) map[string]string {
	result := make(map[string]string, len(mangledList))
	if len(mangledList) == 0 {
		return result
	}
	cmd := exec.Command("/usr/bin/llvm-undname")
	cmd.Stdin = strings.NewReader(strings.Join(mangledList, "\n") + "\n")
	out, err := cmd.Output()
	if err != nil {
		for _, m := range mangledList {
			result[m] = m
		}
		return result
	}
	lines := strings.Split(strings.ReplaceAll(string(out), "\r\n", "\n"), "\n")
	for i := 0; i+1 < len(lines); i++ {
		line := strings.TrimSpace(lines[i])
		if strings.HasPrefix(line, ".?A") {
			dem := strings.TrimSpace(lines[i+1])
			if dem != "" && !strings.HasPrefix(dem, "Invalid mangled name") {
				result[line] = cleanUndname(dem)
				i++
			}
		}
	}
	for _, m := range mangledList {
		if _, ok := result[m]; !ok {
			result[m] = m
		}
	}
	return result
}

type BaseClassInfo struct {
	DemangledName     string `json:"demangled_name"`
	MangledName       string `json:"mangled_name"`
	TypeDescriptorVA  string `json:"type_descriptor_va"`
	Offset            int32  `json:"offset"`
	VbtableDisp       int32  `json:"vbtable_disp"`
	VbaseDisp         int32  `json:"vbase_disp"`
	NumContainedBases uint32 `json:"num_contained_bases"`
	IsDirect          bool   `json:"is_direct"`
}

type VTableEntry struct {
	COLVA          string   `json:"col_va"`
	VTableVA       string   `json:"vtable_va"`
	Offset         uint32   `json:"offset"`
	CDOffset       uint32   `json:"cd_offset"`
	VirtualMethods []string `json:"virtual_methods"`
}

type ClassEntry struct {
	DemangledName    string          `json:"demangled_name"`
	MangledName      string          `json:"mangled_name"`
	Kind             string          `json:"kind"`
	Namespace        string          `json:"namespace,omitempty"`
	ShortName        string          `json:"short_name"`
	HeaderPath       string          `json:"header_path,omitempty"`
	IsTemplate       bool            `json:"is_template"`
	IsMFCOrStd       bool            `json:"is_mfc_or_std"`
	TypeDescriptorVA string          `json:"type_descriptor_va"`
	COLVA            string          `json:"col_va,omitempty"`
	VTableVA         string          `json:"vtable_va,omitempty"`
	VTableOffset     uint32          `json:"vtable_offset"`
	BaseClasses      []BaseClassInfo `json:"base_classes"`
	VirtualMethods   []string        `json:"virtual_methods"`
	VTables          []VTableEntry   `json:"vtables,omitempty"`
}

var standardMFCClasses = map[string]bool{
	"CArchiveException": true, "CBitmap": true, "CBrush": true, "CButton": true,
	"CByteArray": true, "CCmdTarget": true, "CCmdUI": true, "CColorDialog": true,
	"CComboBox": true, "CCommandLineInfo": true, "CCommonDialog": true, "CControlBar": true,
	"CDateTimeCtrl": true, "CDC": true, "CDHtmlDialog": true, "CDHtmlElementEventSink": true,
	"CDHtmlEventSink": true, "CDHtmlSinkHandler": true, "CDHtmlSinkHandlerBase1": true,
	"CDHtmlSinkHandlerBase2": true, "CDialog": true, "CDialogBar": true, "CDocManager": true,
	"CDocTemplate": true, "CDocument": true, "CEdit": true, "CException": true,
	"CFile": true, "CFileDialog": true, "CFileException": true, "CFont": true,
	"CFontDialog": true, "CFrameWnd": true, "CGdiObject": true, "CHeaderCtrl": true,
	"CHotKeyCtrl": true, "CImageList": true, "CInvalidArgException": true, "CListBox": true,
	"CListCtrl": true, "CMapPtrToWord": true, "CMapStringToPtr": true, "CMemFile": true,
	"CMemoryException": true, "CMenu": true, "CMiniFrameWnd": true, "CNotSupportedException": true,
	"CObArray": true, "CObject": true, "COleBrowserControlSite": true, "COleControlSite": true,
	"COleControlSiteOrWnd": true, "COleDispatchException": true, "COleException": true,
	"CPaintDC": true, "CPalette": true, "CPen": true, "CPreviewDC": true,
	"CPreviewView": true, "CProgressCtrl": true, "CPropertyPage": true, "CPropertySheet": true,
	"CPtrArray": true, "CPtrList": true, "CResourceException": true, "CRgn": true,
	"CRichEditCtrl": true, "CScrollBar": true, "CScrollView": true, "CSharedFile": true,
	"CSimpleException": true, "CSingleDocTemplate": true, "CSliderCtrl": true,
	"CSpinButtonCtrl": true, "CStatic": true, "CStatusBar": true, "CStringArray": true,
	"CTabCtrl": true, "CToolBar": true, "CToolTipCtrl": true, "CTreeCtrl": true,
	"CUIntArray": true, "CUserException": true, "CView": true, "CWinApp": true,
	"CWinThread": true, "CWnd": true, "type_info": true,
}

func splitTopLevelScope(demangled string) (namespace string, shortName string) {
	angleDepth := 0
	parenDepth := 0
	inBacktick := false
	lastSplit := -1
	for i := 0; i < len(demangled); i++ {
		ch := demangled[i]
		if ch == '`' {
			inBacktick = !inBacktick
			continue
		}
		if inBacktick {
			continue
		}
		switch ch {
		case '<':
			angleDepth++
		case '>':
			if angleDepth > 0 {
				angleDepth--
			}
		case '(':
			parenDepth++
		case ')':
			if parenDepth > 0 {
				parenDepth--
			}
		case ':':
			if angleDepth == 0 && parenDepth == 0 && i+1 < len(demangled) && demangled[i+1] == ':' {
				lastSplit = i
				i++
			}
		}
	}
	if lastSplit == -1 {
		return "", demangled
	}
	return demangled[:lastSplit], demangled[lastSplit+2:]
}

func isMFCOrStandardClass(demangled string, ns string, shortName string) bool {
	if ns == "std" || ns == "ATL" || strings.HasPrefix(ns, "std::") || strings.HasPrefix(ns, "ATL::") {
		return true
	}
	if standardMFCClasses[demangled] || standardMFCClasses[shortName] {
		return true
	}
	if strings.HasPrefix(shortName, "CArray<") ||
		strings.HasPrefix(shortName, "CTypedPtrArray<") ||
		strings.HasPrefix(shortName, "CSimpleStringT<") ||
		strings.HasPrefix(shortName, "CStringT<") ||
		strings.HasPrefix(shortName, "CList<") ||
		strings.HasPrefix(shortName, "CMap<") {
		return true
	}
	return false
}

func formatClassStub(cls ClassEntry, nested []ClassEntry, indent string) string {
	var sb strings.Builder
	sb.WriteString(fmt.Sprintf("%s// Mangled: %s\n", indent, cls.MangledName))
	sb.WriteString(fmt.Sprintf("%s// TypeDescriptor: %s", indent, cls.TypeDescriptorVA))
	if cls.COLVA != "" {
		sb.WriteString(fmt.Sprintf(" | COL: %s", cls.COLVA))
	}
	if cls.VTableVA != "" {
		sb.WriteString(fmt.Sprintf(" | Primary VTable: %s (%d methods)", cls.VTableVA, len(cls.VirtualMethods)))
	}
	sb.WriteString("\n")

	if len(cls.BaseClasses) > 0 {
		sb.WriteString(fmt.Sprintf("%s// Hierarchy: ", indent))
		var hParts []string
		for _, b := range cls.BaseClasses {
			dirTag := ""
			if b.IsDirect {
				dirTag = " [direct]"
			}
			hParts = append(hParts, fmt.Sprintf("%s (+0x%X)%s", b.DemangledName, uint32(b.Offset), dirTag))
		}
		sb.WriteString(strings.Join(hParts, " -> ") + "\n")
	}

	var directBases []string
	for _, b := range cls.BaseClasses {
		if b.IsDirect {
			directBases = append(directBases, fmt.Sprintf("public %s", b.DemangledName))
		}
	}

	inhClause := ""
	if len(directBases) > 0 {
		inhClause = " : " + strings.Join(directBases, ", ")
	}

	sb.WriteString(fmt.Sprintf("%s%s %s%s {\n%spublic:\n", indent, cls.Kind, cls.ShortName, inhClause, indent))

	for _, n := range nested {
		sb.WriteString(formatClassStub(n, nil, indent+"    "))
		sb.WriteString("\n")
	}

	if len(cls.VirtualMethods) > 0 {
		sb.WriteString(fmt.Sprintf("%s    // Primary VTable (%s):\n", indent, cls.VTableVA))
		for idx, m := range cls.VirtualMethods {
			sb.WriteString(fmt.Sprintf("%s    //   [%2d] %s\n", indent, idx, m))
		}
	}
	for vIdx := 1; vIdx < len(cls.VTables); vIdx++ {
		vt := cls.VTables[vIdx]
		sb.WriteString(fmt.Sprintf("%s    // Secondary VTable at +0x%X (%s, COL %s):\n", indent, vt.Offset, vt.VTableVA, vt.COLVA))
		for idx, m := range vt.VirtualMethods {
			sb.WriteString(fmt.Sprintf("%s    //   [%2d] %s\n", indent, idx, m))
		}
	}

	sb.WriteString(fmt.Sprintf("%s};\n", indent))
	return sb.String()
}

func main() {
	cfgBytes, err := os.ReadFile("build/target.json")
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error reading build/target.json: %v\n", err)
		os.Exit(1)
	}
	var cfg TargetConfig
	if err := json.Unmarshal(cfgBytes, &cfg); err != nil {
		fmt.Fprintf(os.Stderr, "Error parsing build/target.json: %v\n", err)
		os.Exit(1)
	}

	img, err := loadPEImage(".local/bin/endorphin.exe", cfg.SHA256)
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error loading PE: %v\n", err)
		os.Exit(1)
	}

	textSec := img.FindSection(".text")
	rdataSec := img.FindSection(".rdata")
	if textSec == nil || rdataSec == nil {
		fmt.Fprintf(os.Stderr, "Missing .text or .rdata section\n")
		os.Exit(1)
	}

	textStart := textSec.VA
	textEnd := textSec.VA + textSec.VSize
	isCodePtr := func(va uint32) bool {
		return va >= textStart && va < textEnd
	}

	// Step 1: Discover all 2,352 TypeDescriptors across all sections (.data and .rdata)
	type TypeDesc struct {
		VA          uint32
		MangledName string
		Demangled   string
		Kind        string
	}
	typeDescs := make(map[uint32]*TypeDesc)
	var mangledList []string

	for _, sec := range img.Sections {
		data := sec.Data
		for i := 8; i+6 < len(data); i++ {
			if data[i] == '.' && data[i+1] == '?' && data[i+2] == 'A' && (data[i+3] == 'V' || data[i+3] == 'U') {
				tdOff := uint32(i - 8)
				tdVA := sec.VA + tdOff
				vftPtr := binary.LittleEndian.Uint32(data[tdOff : tdOff+4])
				spare := binary.LittleEndian.Uint32(data[tdOff+4 : tdOff+8])
				if spare != 0 || vftPtr < rdataSec.VA || vftPtr >= rdataSec.VA+rdataSec.VSize {
					continue
				}
				name, ok := img.ReadCString(tdVA+8, 2048)
				if !ok || !strings.HasSuffix(name, "@@") {
					continue
				}
				kind := "class"
				if strings.HasPrefix(name, ".?AU") {
					kind = "struct"
				}
				typeDescs[tdVA] = &TypeDesc{
					VA:          tdVA,
					MangledName: name,
					Kind:        kind,
				}
				mangledList = append(mangledList, name)
			}
		}
	}

	demangledMap := batchDemangleTypeNames(mangledList)
	for _, td := range typeDescs {
		td.Demangled = demangledMap[td.MangledName]
	}
	fmt.Printf("Found %d valid TypeDescriptors\n", len(typeDescs))

	rdataLimit := uint32(len(rdataSec.Data))
	if rdataSec.VSize < rdataLimit {
		rdataLimit = rdataSec.VSize
	}

	parseHierarchy := func(chdVA uint32, expectedSelfTDVA uint32) ([]BaseClassInfo, bool) {
		if chdVA < rdataSec.VA || chdVA+16 > rdataSec.VA+rdataLimit {
			return nil, false
		}
		chdSig, _ := img.ReadU32(chdVA)
		chdAttr, _ := img.ReadU32(chdVA + 4)
		numBases, _ := img.ReadU32(chdVA + 8)
		bcaVA, _ := img.ReadU32(chdVA + 12)
		if chdSig != 0 || chdAttr > 0x0F || numBases == 0 || numBases > 256 {
			return nil, false
		}
		if bcaVA < rdataSec.VA || bcaVA+numBases*4 > rdataSec.VA+rdataLimit {
			return nil, false
		}

		type rawBCD struct {
			tdVA              uint32
			numContainedBases uint32
			mdisp             int32
			pdisp             int32
			vdisp             int32
		}
		rawList := make([]rawBCD, 0, numBases)
		for bIdx := uint32(0); bIdx < numBases; bIdx++ {
			bcdVA, ok := img.ReadU32(bcaVA + bIdx*4)
			if !ok || bcdVA < rdataSec.VA || bcdVA+24 > rdataSec.VA+rdataLimit {
				return nil, false
			}
			baseTDVA, _ := img.ReadU32(bcdVA)
			if _, ok := typeDescs[baseTDVA]; !ok {
				return nil, false
			}
			numContained, _ := img.ReadU32(bcdVA + 4)
			mdisp, _ := img.ReadI32(bcdVA + 8)
			pdisp, _ := img.ReadI32(bcdVA + 12)
			vdisp, _ := img.ReadI32(bcdVA + 16)
			if bIdx == 0 && expectedSelfTDVA != 0 && baseTDVA != expectedSelfTDVA {
				return nil, false
			}
			rawList = append(rawList, rawBCD{
				tdVA:              baseTDVA,
				numContainedBases: numContained,
				mdisp:             mdisp,
				pdisp:             pdisp,
				vdisp:             vdisp,
			})
		}

		directIndices := make(map[int]bool)
		idx := 1
		for idx < len(rawList) {
			directIndices[idx] = true
			idx += 1 + int(rawList[idx].numContainedBases)
		}

		var bases []BaseClassInfo
		for i := 1; i < len(rawList); i++ {
			r := rawList[i]
			btd := typeDescs[r.tdVA]
			bases = append(bases, BaseClassInfo{
				DemangledName:     btd.Demangled,
				MangledName:       btd.MangledName,
				TypeDescriptorVA:  fmt.Sprintf("0x%08X", r.tdVA),
				Offset:            r.mdisp,
				VbtableDisp:       r.pdisp,
				VbaseDisp:         r.vdisp,
				NumContainedBases: r.numContainedBases,
				IsDirect:          directIndices[i],
			})
		}
		return bases, true
	}

	inferredBases := make(map[uint32][]BaseClassInfo)

	// Step 2: Scan .rdata for CompleteObjectLocators (20 bytes each)
	type COL struct {
		VA              uint32
		Signature       uint32
		Offset          uint32
		CDOffset        uint32
		TypeDescVA      uint32
		ClassHierDescVA uint32
		Bases           []BaseClassInfo
	}
	cols := make(map[uint32]COL)

	for off := uint32(0); off+20 <= rdataLimit; off += 4 {
		colVA := rdataSec.VA + off
		sig := binary.LittleEndian.Uint32(rdataSec.Data[off : off+4])
		vOffset := binary.LittleEndian.Uint32(rdataSec.Data[off+4 : off+8])
		cdOffset := binary.LittleEndian.Uint32(rdataSec.Data[off+8 : off+12])
		tdVA := binary.LittleEndian.Uint32(rdataSec.Data[off+12 : off+16])
		chdVA := binary.LittleEndian.Uint32(rdataSec.Data[off+16 : off+20])

		if sig != 0 {
			continue
		}
		if _, ok := typeDescs[tdVA]; !ok {
			continue
		}
		bases, ok := parseHierarchy(chdVA, tdVA)
		if !ok {
			continue
		}

		cols[colVA] = COL{
			VA:              colVA,
			Signature:       sig,
			Offset:          vOffset,
			CDOffset:        cdOffset,
			TypeDescVA:      tdVA,
			ClassHierDescVA: chdVA,
			Bases:           bases,
		}
	}
	fmt.Printf("Found %d valid CompleteObjectLocators\n", len(cols))

	// Also scan ClassHierarchyDescriptors directly for base classes without standalone COLs
	for off := uint32(0); off+16 <= rdataLimit; off += 4 {
		chdVA := rdataSec.VA + off
		chdSig := binary.LittleEndian.Uint32(rdataSec.Data[off : off+4])
		chdAttr := binary.LittleEndian.Uint32(rdataSec.Data[off+4 : off+8])
		numBases := binary.LittleEndian.Uint32(rdataSec.Data[off+8 : off+12])
		bcaVA := binary.LittleEndian.Uint32(rdataSec.Data[off+12 : off+16])
		if chdSig != 0 || chdAttr > 0x0F || numBases == 0 || numBases > 256 {
			continue
		}
		if bcaVA < rdataSec.VA || bcaVA+numBases*4 > rdataSec.VA+rdataLimit {
			continue
		}
		firstBCD, ok := img.ReadU32(bcaVA)
		if !ok || firstBCD < rdataSec.VA || firstBCD+24 > rdataSec.VA+rdataLimit {
			continue
		}
		selfTDVA, _ := img.ReadU32(firstBCD)
		if _, ok := typeDescs[selfTDVA]; !ok {
			continue
		}
		if bases, ok := parseHierarchy(chdVA, selfTDVA); ok {
			if _, exists := inferredBases[selfTDVA]; !exists {
				inferredBases[selfTDVA] = bases
			}
		}
	}

	// Step 3: Locate vtables in .rdata (4-byte word immediately following pointer to CompleteObjectLocator)
	colPtrOffsets := make(map[uint32]uint32)
	for off := uint32(0); off+8 <= rdataLimit; off += 4 {
		ptr := binary.LittleEndian.Uint32(rdataSec.Data[off : off+4])
		if _, ok := cols[ptr]; ok {
			firstEntry := binary.LittleEndian.Uint32(rdataSec.Data[off+4 : off+8])
			if isCodePtr(firstEntry) {
				colPtrOffsets[off] = ptr
			}
		}
	}

	vtablesByTD := make(map[uint32][]VTableEntry)
	basesByTD := make(map[uint32][]BaseClassInfo)
	for tdVA, b := range inferredBases {
		basesByTD[tdVA] = b
	}
	for _, col := range cols {
		if len(col.Bases) > 0 || len(basesByTD[col.TypeDescVA]) == 0 {
			basesByTD[col.TypeDescVA] = col.Bases
		}
	}

	totalVTables := 0
	for off := uint32(0); off+8 <= rdataLimit; off += 4 {
		colVA, ok := colPtrOffsets[off]
		if !ok {
			continue
		}
		col := cols[colVA]
		vtableOff := off + 4
		vtableVA := rdataSec.VA + vtableOff

		var methods []string
		for mOff := vtableOff; mOff+4 <= rdataLimit; mOff += 4 {
			if mOff > vtableOff {
				if _, isNextCOL := colPtrOffsets[mOff]; isNextCOL {
					break
				}
				if _, isCOLStruct := cols[rdataSec.VA+mOff]; isCOLStruct {
					break
				}
			}
			fnVA := binary.LittleEndian.Uint32(rdataSec.Data[mOff : mOff+4])
			if !isCodePtr(fnVA) {
				break
			}
			methods = append(methods, fmt.Sprintf("0x%08X", fnVA))
		}

		vtablesByTD[col.TypeDescVA] = append(vtablesByTD[col.TypeDescVA], VTableEntry{
			COLVA:          fmt.Sprintf("0x%08X", colVA),
			VTableVA:       fmt.Sprintf("0x%08X", vtableVA),
			Offset:         col.Offset,
			CDOffset:       col.CDOffset,
			VirtualMethods: methods,
		})
		totalVTables++
	}

	// Build set of known class demangled names to detect nested classes vs namespaces
	knownClasses := make(map[string]bool, len(typeDescs))
	for _, td := range typeDescs {
		knownClasses[td.Demangled] = true
	}

	classes := make([]ClassEntry, 0, len(typeDescs))
	withVTable := 0
	withHierarchy := 0
	for tdVA, td := range typeDescs {
		ns, shortName := splitTopLevelScope(td.Demangled)
		isTmpl := strings.Contains(td.Demangled, "<")
		isMFC := isMFCOrStandardClass(td.Demangled, ns, shortName)
		vts := vtablesByTD[tdVA]
		sort.Slice(vts, func(i, j int) bool {
			if vts[i].Offset != vts[j].Offset {
				return vts[i].Offset < vts[j].Offset
			}
			return vts[i].VTableVA < vts[j].VTableVA
		})

		var primaryCOL, primaryVT string
		var primaryOff uint32
		var primaryMethods []string
		if len(vts) > 0 {
			withVTable++
			primaryCOL = vts[0].COLVA
			primaryVT = vts[0].VTableVA
			primaryOff = vts[0].Offset
			primaryMethods = vts[0].VirtualMethods
		}
		bases := basesByTD[tdVA]
		if bases == nil {
			bases = []BaseClassInfo{}
		} else {
			withHierarchy++
		}
		if primaryMethods == nil {
			primaryMethods = []string{}
		}

		headerPath := ""
		if !isMFC {
			if isTmpl {
				// Group template instantiations (including nested classes of template instantiations)
				// by the outermost template name before the first '<' so paths never contain '<' or '>'.
				prefixBeforeAngle := td.Demangled
				if idx := strings.IndexByte(prefixBeforeAngle, '<'); idx != -1 {
					prefixBeforeAngle = prefixBeforeAngle[:idx]
				}
				tmplNS, tmplBase := splitTopLevelScope(prefixBeforeAngle)
				if tmplNS != "" && !knownClasses[tmplNS] {
					headerPath = filepath.ToSlash(filepath.Join("include", "templates", strings.ReplaceAll(tmplNS, "::", "/"), tmplBase+".h"))
				} else {
					headerPath = filepath.ToSlash(filepath.Join("include", "templates", tmplBase+".h"))
				}
			} else if ns != "" && knownClasses[ns] {
				// Nested class inside another class
				parentNS, parentShort := splitTopLevelScope(ns)
				if parentNS != "" {
					headerPath = filepath.ToSlash(filepath.Join("include", strings.ReplaceAll(parentNS, "::", "/"), parentShort+".h"))
				} else {
					headerPath = filepath.ToSlash(filepath.Join("include", parentShort+".h"))
				}
			} else if ns != "" {
				headerPath = filepath.ToSlash(filepath.Join("include", strings.ReplaceAll(ns, "::", "/"), shortName+".h"))
			} else {
				headerPath = filepath.ToSlash(filepath.Join("include", shortName+".h"))
			}
		}

		classes = append(classes, ClassEntry{
			DemangledName:    td.Demangled,
			MangledName:      td.MangledName,
			Kind:             td.Kind,
			Namespace:        ns,
			ShortName:        shortName,
			HeaderPath:       headerPath,
			IsTemplate:       isTmpl,
			IsMFCOrStd:       isMFC,
			TypeDescriptorVA: fmt.Sprintf("0x%08X", tdVA),
			COLVA:            primaryCOL,
			VTableVA:         primaryVT,
			VTableOffset:     primaryOff,
			BaseClasses:      bases,
			VirtualMethods:   primaryMethods,
			VTables:          vts,
		})
	}

	sort.Slice(classes, func(i, j int) bool {
		if classes[i].DemangledName != classes[j].DemangledName {
			return classes[i].DemangledName < classes[j].DemangledName
		}
		return classes[i].TypeDescriptorVA < classes[j].TypeDescriptorVA
	})

	fmt.Printf("Linked %d RTTI classes (%d with vtables [%d total vtables], %d with inheritance hierarchies)\n",
		len(classes), withVTable, totalVTables, withHierarchy)

	// Step 4: Save build/classes.json
	outJSON, err := json.MarshalIndent(classes, "", "  ")
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error marshaling build/classes.json: %v\n", err)
		os.Exit(1)
	}
	if err := os.WriteFile("build/classes.json", append(outJSON, '\n'), 0644); err != nil {
		fmt.Fprintf(os.Stderr, "Error writing build/classes.json: %v\n", err)
		os.Exit(1)
	}
	fmt.Printf("Wrote build/classes.json (%d classes)\n", len(classes))

	// Step 5: Generate C++ header stubs in include/ (skipping standard Microsoft MFC/ATL C* and std:: classes)
	_ = os.RemoveAll("include")
	if err := os.MkdirAll("include", 0755); err != nil {
		fmt.Fprintf(os.Stderr, "Error creating include/: %v\n", err)
		os.Exit(1)
	}
	nestedByParent := make(map[string][]ClassEntry)
	var concreteTopClasses []ClassEntry
	templateGroups := make(map[string][]ClassEntry)

	for _, cls := range classes {
		if cls.IsMFCOrStd {
			continue
		}
		if cls.IsTemplate {
			templateGroups[cls.HeaderPath] = append(templateGroups[cls.HeaderPath], cls)
		} else if cls.Namespace != "" && knownClasses[cls.Namespace] {
			nestedByParent[cls.Namespace] = append(nestedByParent[cls.Namespace], cls)
		} else {
			concreteTopClasses = append(concreteTopClasses, cls)
		}
	}

	headerCount := 0
	for _, cls := range concreteTopClasses {
		if err := os.MkdirAll(filepath.Dir(cls.HeaderPath), 0755); err != nil {
			fmt.Fprintf(os.Stderr, "Error creating dir for %s: %v\n", cls.HeaderPath, err)
			os.Exit(1)
		}
		var sb strings.Builder
		sb.WriteString("#pragma once\n")
		sb.WriteString("// Auto-generated by tools/extract_rtti from endorphin.exe RTTI\n\n")

		var nsParts []string
		if cls.Namespace != "" {
			nsParts = strings.Split(cls.Namespace, "::")
			for _, p := range nsParts {
				sb.WriteString(fmt.Sprintf("namespace %s {\n", p))
			}
			sb.WriteString("\n")
		}

		sb.WriteString(formatClassStub(cls, nestedByParent[cls.DemangledName], ""))

		if len(nsParts) > 0 {
			sb.WriteString("\n")
			for i := len(nsParts) - 1; i >= 0; i-- {
				sb.WriteString(fmt.Sprintf("} // namespace %s\n", nsParts[i]))
			}
		}

		if err := os.WriteFile(cls.HeaderPath, []byte(sb.String()), 0644); err != nil {
			fmt.Fprintf(os.Stderr, "Error writing %s: %v\n", cls.HeaderPath, err)
			os.Exit(1)
		}
		headerCount++
	}

	var tmplPaths []string
	for p := range templateGroups {
		tmplPaths = append(tmplPaths, p)
	}
	sort.Strings(tmplPaths)

	for _, hdrPath := range tmplPaths {
		grp := templateGroups[hdrPath]
		if err := os.MkdirAll(filepath.Dir(hdrPath), 0755); err != nil {
			fmt.Fprintf(os.Stderr, "Error creating dir for %s: %v\n", hdrPath, err)
			os.Exit(1)
		}
		var sb strings.Builder
		sb.WriteString("#pragma once\n")
		sb.WriteString("// Auto-generated template instantiations by tools/extract_rtti from endorphin.exe RTTI\n\n")

		prefixBeforeAngle := grp[0].DemangledName
		if idx := strings.IndexByte(prefixBeforeAngle, '<'); idx != -1 {
			prefixBeforeAngle = prefixBeforeAngle[:idx]
		}
		ns, tmplName := splitTopLevelScope(prefixBeforeAngle)
		var nsParts []string
		if ns != "" && !knownClasses[ns] {
			nsParts = strings.Split(ns, "::")
			for _, p := range nsParts {
				sb.WriteString(fmt.Sprintf("namespace %s {\n", p))
			}
			sb.WriteString("\n")
		}

		sb.WriteString(fmt.Sprintf("template <typename... Args>\n%s %s;\n\n", grp[0].Kind, tmplName))
		sb.WriteString(fmt.Sprintf("// Instantiations (%d):\n", len(grp)))
		for _, inst := range grp {
			sb.WriteString(fmt.Sprintf("// - %s\n", inst.DemangledName))
			sb.WriteString(fmt.Sprintf("//   Mangled: %s | TD: %s", inst.MangledName, inst.TypeDescriptorVA))
			if inst.VTableVA != "" {
				sb.WriteString(fmt.Sprintf(" | VTable: %s (%d methods)", inst.VTableVA, len(inst.VirtualMethods)))
			}
			sb.WriteString("\n")
		}

		if len(nsParts) > 0 {
			sb.WriteString("\n")
			for i := len(nsParts) - 1; i >= 0; i-- {
				sb.WriteString(fmt.Sprintf("} // namespace %s\n", nsParts[i]))
			}
		}

		if err := os.WriteFile(hdrPath, []byte(sb.String()), 0644); err != nil {
			fmt.Fprintf(os.Stderr, "Error writing %s: %v\n", hdrPath, err)
			os.Exit(1)
		}
		headerCount++
	}

	fmt.Printf("Generated %d C++ header files in include/\n", headerCount)
}
