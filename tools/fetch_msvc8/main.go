package main

import (
	"archive/zip"
	"encoding/json"
	"flag"
	"fmt"
	"io"
	"io/fs"
	"net/http"
	"os"
	"os/exec"
	"path/filepath"
	"runtime"
	"strings"
	"time"
)

const (
	defaultVaultRepo = "BiosPlus/endorphin-ci-vault"
	defaultVaultTag  = "v1.0"
)

type ghRelease struct {
	TagName string    `json:"tag_name"`
	Assets  []ghAsset `json:"assets"`
}

type ghAsset struct {
	Name string `json:"name"`
	URL  string `json:"url"`
	Size int64  `json:"size"`
}

func clExePath(msvcRoot string) string {
	return filepath.Join(msvcRoot, "bin", "cl.exe")
}

func hasValidToolchain(msvcRoot string) bool {
	st, err := os.Stat(clExePath(msvcRoot))
	return err == nil && st.Size() > 0
}

func main() {
	fromVault := flag.Bool("from-vault", false, "Download pre-packaged msvc8.zip from private GitHub Release vault")
	fromArchive := flag.Bool("from-archive", false, "Bootstrap MSVC 2005 toolchain from local ISO or Archive.org")
	vaultRepo := flag.String("repo", defaultVaultRepo, "GitHub repository storing the private MSVC8 release")
	vaultTag := flag.String("tag", defaultVaultTag, "Release tag in the vault repository")
	force := flag.Bool("force", false, "Force re-download and re-extraction even if .local/msvc8/bin/cl.exe exists")
	keepZip := flag.Bool("keep-zip", false, "Keep .local/msvc8.zip after extraction")
	flag.Parse()

	repoExplicit := false
	flag.Visit(func(f *flag.Flag) {
		if f.Name == "repo" {
			repoExplicit = true
		}
	})

	msvcRoot := filepath.Join(".local", "msvc8")
	if !*force && hasValidToolchain(msvcRoot) {
		fmt.Printf("[fetch_msvc8] Cache hit: %s already exists.\n", clExePath(msvcRoot))
		return
	}

	if err := os.MkdirAll(".local", 0755); err != nil {
		fmt.Fprintf(os.Stderr, "[fetch_msvc8] Failed to create .local directory: %v\n", err)
		os.Exit(1)
	}

	token := strings.TrimSpace(os.Getenv("VAULT_READ_TOKEN"))
	if token == "" {
		token = strings.TrimSpace(os.Getenv("GH_TOKEN"))
	}
	if token == "" {
		token = strings.TrimSpace(os.Getenv("GITHUB_TOKEN"))
	}

	// Determine execution mode
	useVault := *fromVault || repoExplicit || (token != "" && !*fromArchive)
	useArchiveFallback := *fromArchive || !*fromVault

	if useVault {
		fmt.Printf("[fetch_msvc8] Attempting vault download from %s (tag %s)...\n", *vaultRepo, *vaultTag)
		if err := fetchFromVault(*vaultRepo, *vaultTag, token, msvcRoot, *keepZip); err == nil {
			fmt.Printf("[fetch_msvc8] Successfully installed MSVC 2005 toolchain at %s\n", clExePath(msvcRoot))
			return
		} else {
			fmt.Fprintf(os.Stderr, "[fetch_msvc8] Vault download failed: %v\n", err)
			if !useArchiveFallback && !*fromArchive {
				fmt.Fprintln(os.Stderr, "[fetch_msvc8] Falling back to Archive.org / local ISO bootstrap...")
			}
		}
	}

	if err := fetchFromArchiveOrISO(msvcRoot); err != nil {
		fmt.Fprintf(os.Stderr, "[fetch_msvc8] Archive.org / ISO bootstrap failed: %v\n", err)
		os.Exit(1)
	}
	fmt.Printf("[fetch_msvc8] Successfully bootstrapped MSVC 2005 toolchain at %s\n", clExePath(msvcRoot))
}

func fetchFromVault(repo, tag, token, msvcRoot string, keepZip bool) error {
	zipPath := filepath.Join(".local", "msvc8.zip")
	_ = os.Remove(zipPath)

	downloaded := false

	// Strategy 1: Use GitHub CLI (gh release download) if available
	if ghPath, err := exec.LookPath("gh"); err == nil && token != "" {
		fmt.Printf("[fetch_msvc8] Downloading msvc8.zip via gh CLI from %s@%s...\n", repo, tag)
		cmd := exec.Command(ghPath, "release", "download", tag,
			"--repo", repo,
			"--pattern", "msvc8.zip",
			"--dir", ".local",
			"--clobber",
		)
		env := os.Environ()
		env = append(env, "GH_TOKEN="+token)
		cmd.Env = env
		if out, err := cmd.CombinedOutput(); err == nil {
			if st, statErr := os.Stat(zipPath); statErr == nil && st.Size() > 0 {
				downloaded = true
			}
		} else {
			fmt.Fprintf(os.Stderr, "[fetch_msvc8] gh release download note: %v (%s)\n", err, strings.TrimSpace(string(out)))
		}

		// Best-effort download of endorphin.exe if attached to the vault release
		exeDest := filepath.Join(".local", "bin", "endorphin.exe")
		if _, err := os.Stat(exeDest); err != nil {
			_ = os.MkdirAll(filepath.Join(".local", "bin"), 0755)
			exeCmd := exec.Command(ghPath, "release", "download", tag,
				"--repo", repo,
				"--pattern", "endorphin.exe",
				"--dir", filepath.Join(".local", "bin"),
				"--clobber",
			)
			exeCmd.Env = env
			if err := exeCmd.Run(); err == nil {
				fmt.Println("[fetch_msvc8] Downloaded endorphin.exe into .local/bin/endorphin.exe")
			}
		}
	}

	// Strategy 2: GitHub Releases REST API fallback
	if !downloaded {
		if token == "" {
			return fmt.Errorf("no VAULT_READ_TOKEN or GH_TOKEN available for private vault %s", repo)
		}
		fmt.Printf("[fetch_msvc8] Querying GitHub Releases API for %s (%s)...\n", repo, tag)
		if err := downloadVaultAssetsViaAPI(repo, tag, token, zipPath); err != nil {
			return err
		}
	}

	fmt.Printf("[fetch_msvc8] Extracting %s into %s...\n", zipPath, msvcRoot)
	if err := extractMSVCZip(zipPath, msvcRoot); err != nil {
		return fmt.Errorf("extracting msvc8.zip: %w", err)
	}

	if !hasValidToolchain(msvcRoot) {
		return fmt.Errorf("extracted archive did not produce %s", clExePath(msvcRoot))
	}

	if !keepZip {
		_ = os.Remove(zipPath)
	}
	return nil
}

func downloadVaultAssetsViaAPI(repo, tag, token, zipDest string) error {
	endpoints := []string{
		fmt.Sprintf("https://api.github.com/repos/%s/releases/tags/%s", repo, tag),
		fmt.Sprintf("https://api.github.com/repos/%s/releases/latest", repo),
	}

	var rel ghRelease
	var lastErr error
	client := &http.Client{Timeout: 10 * time.Minute}

	for _, ep := range endpoints {
		req, err := http.NewRequest("GET", ep, nil)
		if err != nil {
			lastErr = err
			continue
		}
		req.Header.Set("Authorization", "token "+token)
		req.Header.Set("Accept", "application/vnd.github+json")
		req.Header.Set("X-GitHub-Api-Version", "2022-11-28")

		resp, err := client.Do(req)
		if err != nil {
			lastErr = err
			continue
		}
		body, _ := io.ReadAll(resp.Body)
		resp.Body.Close()

		if resp.StatusCode == http.StatusOK {
			if err := json.Unmarshal(body, &rel); err == nil && len(rel.Assets) > 0 {
				lastErr = nil
				break
			}
		}
		lastErr = fmt.Errorf("HTTP %d from %s", resp.StatusCode, ep)
	}
	if lastErr != nil {
		return lastErr
	}

	foundZip := false
	for _, asset := range rel.Assets {
		switch strings.ToLower(asset.Name) {
		case "msvc8.zip":
			fmt.Printf("[fetch_msvc8] Downloading asset msvc8.zip (%.2f MiB)...\n", float64(asset.Size)/(1024*1024))
			if err := downloadAssetOctetStream(client, asset.URL, token, zipDest); err != nil {
				return err
			}
			foundZip = true
		case "endorphin.exe":
			exeDest := filepath.Join(".local", "bin", "endorphin.exe")
			if _, err := os.Stat(exeDest); err != nil {
				_ = os.MkdirAll(filepath.Join(".local", "bin"), 0755)
				fmt.Printf("[fetch_msvc8] Downloading asset endorphin.exe (%.2f MiB)...\n", float64(asset.Size)/(1024*1024))
				_ = downloadAssetOctetStream(client, asset.URL, token, exeDest)
			}
		}
	}

	if !foundZip {
		return fmt.Errorf("asset msvc8.zip not found in release %s", rel.TagName)
	}
	return nil
}

func downloadAssetOctetStream(client *http.Client, assetURL, token, destPath string) error {
	req, err := http.NewRequest("GET", assetURL, nil)
	if err != nil {
		return err
	}
	if token != "" {
		req.Header.Set("Authorization", "token "+token)
	}
	req.Header.Set("Accept", "application/octet-stream")

	resp, err := client.Do(req)
	if err != nil {
		return err
	}
	defer resp.Body.Close()

	if resp.StatusCode != http.StatusOK {
		return fmt.Errorf("asset download failed with HTTP %d", resp.StatusCode)
	}

	f, err := os.Create(destPath)
	if err != nil {
		return err
	}
	defer f.Close()

	_, err = io.Copy(f, resp.Body)
	return err
}

func extractMSVCZip(zipPath, msvcRoot string) error {
	r, err := zip.OpenReader(zipPath)
	if err != nil {
		return err
	}
	defer r.Close()

	_ = os.RemoveAll(msvcRoot)
	if err := os.MkdirAll(msvcRoot, 0755); err != nil {
		return err
	}

	absRoot, err := filepath.Abs(msvcRoot)
	if err != nil {
		return err
	}

	for _, f := range r.File {
		relName := strings.ReplaceAll(f.Name, "\\", "/")
		relName = strings.TrimPrefix(relName, "./")
		if strings.HasPrefix(strings.ToLower(relName), "msvc8/") {
			relName = relName[len("msvc8/"):]
		}
		relName = strings.TrimPrefix(relName, "/")
		if relName == "" {
			continue
		}

		targetPath := filepath.Join(absRoot, filepath.FromSlash(relName))
		if !strings.HasPrefix(targetPath, absRoot+string(filepath.Separator)) && targetPath != absRoot {
			return fmt.Errorf("illegal path in zip: %s", f.Name)
		}

		if f.FileInfo().IsDir() || strings.HasSuffix(f.Name, "/") {
			if err := os.MkdirAll(targetPath, 0755); err != nil {
				return err
			}
			continue
		}

		if err := os.MkdirAll(filepath.Dir(targetPath), 0755); err != nil {
			return err
		}

		rc, err := f.Open()
		if err != nil {
			return err
		}
		mode := f.Mode()
		ext := strings.ToLower(filepath.Ext(targetPath))
		if ext == ".exe" || ext == ".dll" {
			mode = 0755
		} else if mode == 0 {
			mode = 0644
		}

		outFile, err := os.OpenFile(targetPath, os.O_WRONLY|os.O_CREATE|os.O_TRUNC, mode)
		if err != nil {
			rc.Close()
			return err
		}
		_, copyErr := io.Copy(outFile, rc)
		outFile.Close()
		rc.Close()
		if copyErr != nil {
			return copyErr
		}
	}
	return nil
}

func fetchFromArchiveOrISO(msvcRoot string) error {
	isoCandidates := []string{
		"en_vs_2005_pro_dvd.iso",
		"Microsoft Visual Studio 2005 Professional Edition - Disc 1.iso",
		filepath.Join(".local", "en_vs_2005_pro_dvd.iso"),
		filepath.Join(".local", "vs2005.iso"),
	}

	var isoPath string
	for _, c := range isoCandidates {
		if st, err := os.Stat(c); err == nil && st.Size() > 100*1024*1024 {
			isoPath = c
			break
		}
	}

	if isoPath == "" {
		isoPath = filepath.Join(".local", "en_vs_2005_pro_dvd.iso")
		urls := []string{
			"https://archive.org/download/microsoft-visual-studio-2005-professional-edition-disc-1/Microsoft%20Visual%20Studio%202005%20Professional%20Edition%20-%20Disc%201.iso",
			"https://archive.org/download/en_vs_2005_pro_dvd/en_vs_2005_pro_dvd.iso",
		}
		var dlErr error
		for _, u := range urls {
			fmt.Printf("[fetch_msvc8] Downloading VS 2005 ISO from %s...\n", u)
			if err := downloadFileWithProgress(u, isoPath); err == nil {
				dlErr = nil
				break
			} else {
				dlErr = err
				fmt.Fprintf(os.Stderr, "[fetch_msvc8] Mirror failed: %v\n", err)
			}
		}
		if dlErr != nil {
			return fmt.Errorf("failed to download VS 2005 ISO from Archive.org: %w", dlErr)
		}
	} else {
		fmt.Printf("[fetch_msvc8] Using local ISO: %s\n", isoPath)
	}

	stageDir, err := os.MkdirTemp("", "msvc8_iso_stage_*")
	if err != nil {
		return err
	}
	defer os.RemoveAll(stageDir)

	isoExtractDir := filepath.Join(stageDir, "iso")
	msiExtractDir := filepath.Join(stageDir, "msi")
	_ = os.MkdirAll(isoExtractDir, 0755)
	_ = os.MkdirAll(msiExtractDir, 0755)

	fmt.Println("[fetch_msvc8] Extracting ISO with 7z...")
	cmd7z := exec.Command("7z", "x", "-y", isoPath, "-o"+isoExtractDir)
	if out, err := cmd7z.CombinedOutput(); err != nil {
		return fmt.Errorf("7z extraction failed: %v\n%s", err, string(out))
	}

	var msiPath string
	_ = filepath.WalkDir(isoExtractDir, func(path string, d fs.DirEntry, err error) error {
		if err == nil && !d.IsDir() && strings.EqualFold(d.Name(), "vs_setup.msi") {
			msiPath = path
		}
		return nil
	})
	if msiPath == "" {
		return fmt.Errorf("vs_setup.msi not found inside ISO %s", isoPath)
	}

	fmt.Printf("[fetch_msvc8] Extracting MSI payload from %s...\n", msiPath)
	if runtime.GOOS == "windows" {
		absMsi, _ := filepath.Abs(msiPath)
		absTarget, _ := filepath.Abs(msiExtractDir)
		cmdMsi := exec.Command("msiexec.exe", "/a", absMsi, "/qn", "TARGETDIR="+absTarget)
		if out, err := cmdMsi.CombinedOutput(); err != nil {
			return fmt.Errorf("msiexec administrative install failed: %v\n%s", err, string(out))
		}
	} else {
		cmdMsi := exec.Command("msiextract", "-C", msiExtractDir, msiPath)
		if out, err := cmdMsi.CombinedOutput(); err != nil {
			return fmt.Errorf("msiextract failed: %v\n%s", err, string(out))
		}
	}

	vsRoot := filepath.Join(msiExtractDir, "Program Files", "Microsoft Visual Studio 8")
	vcRoot := filepath.Join(vsRoot, "VC")
	ideRoot := filepath.Join(vsRoot, "Common7", "IDE")
	crtRoot := filepath.Join(vcRoot, "redist", "x86", "Microsoft.VC80.CRT")

	_ = os.RemoveAll(msvcRoot)
	if err := copyTree(vcRoot, msvcRoot); err != nil {
		return fmt.Errorf("copying VC tree: %w", err)
	}

	binDir := filepath.Join(msvcRoot, "bin")
	for _, dll := range []string{"mspdb80.dll", "mspdbcore.dll", "mspdbsrv.exe", "msobj80.dll"} {
		src := filepath.Join(ideRoot, dll)
		if _, err := os.Stat(src); err == nil {
			_ = copyFileContents(src, filepath.Join(binDir, dll), 0755)
		}
	}
	if entries, err := os.ReadDir(crtRoot); err == nil {
		for _, e := range entries {
			if !e.IsDir() {
				_ = copyFileContents(filepath.Join(crtRoot, e.Name()), filepath.Join(binDir, e.Name()), 0755)
			}
		}
	}

	if !hasValidToolchain(msvcRoot) {
		return fmt.Errorf("cl.exe not found at %s after extraction", clExePath(msvcRoot))
	}

	zipOut := filepath.Join(".local", "msvc8.zip")
	fmt.Printf("[fetch_msvc8] Creating portable archive %s...\n", zipOut)
	if err := createZipFromDir(msvcRoot, zipOut); err != nil {
		return fmt.Errorf("creating msvc8.zip: %w", err)
	}

	return nil
}

func downloadFileWithProgress(url, dest string) error {
	resp, err := http.Get(url)
	if err != nil {
		return err
	}
	defer resp.Body.Close()

	if resp.StatusCode != http.StatusOK {
		return fmt.Errorf("HTTP %d", resp.StatusCode)
	}

	f, err := os.Create(dest)
	if err != nil {
		return err
	}
	defer f.Close()

	_, err = io.Copy(f, resp.Body)
	return err
}

func copyTree(srcRoot, dstRoot string) error {
	return filepath.WalkDir(srcRoot, func(path string, d fs.DirEntry, err error) error {
		if err != nil {
			return err
		}
		rel, err := filepath.Rel(srcRoot, path)
		if err != nil {
			return err
		}
		target := filepath.Join(dstRoot, rel)
		if d.IsDir() {
			return os.MkdirAll(target, 0755)
		}
		return copyFileContents(path, target, 0755)
	})
}

func copyFileContents(src, dst string, mode os.FileMode) error {
	if err := os.MkdirAll(filepath.Dir(dst), 0755); err != nil {
		return err
	}
	in, err := os.Open(src)
	if err != nil {
		return err
	}
	defer in.Close()

	out, err := os.OpenFile(dst, os.O_CREATE|os.O_WRONLY|os.O_TRUNC, mode)
	if err != nil {
		return err
	}
	defer out.Close()

	_, err = io.Copy(out, in)
	return err
}

func createZipFromDir(srcDir, zipFile string) error {
	f, err := os.Create(zipFile)
	if err != nil {
		return err
	}
	defer f.Close()

	zw := zip.NewWriter(f)
	defer zw.Close()

	return filepath.WalkDir(srcDir, func(path string, d fs.DirEntry, err error) error {
		if err != nil || d.IsDir() {
			return err
		}
		rel, err := filepath.Rel(srcDir, path)
		if err != nil {
			return err
		}
		info, err := d.Info()
		if err != nil {
			return err
		}
		hdr, err := zip.FileInfoHeader(info)
		if err != nil {
			return err
		}
		hdr.Name = filepath.ToSlash(rel)
		hdr.Method = zip.Deflate

		w, err := zw.CreateHeader(hdr)
		if err != nil {
			return err
		}
		in, err := os.Open(path)
		if err != nil {
			return err
		}
		defer in.Close()
		_, err = io.Copy(w, in)
		return err
	})
}
