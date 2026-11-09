// Decompiled translation unit: src/classes/NMCMultilineEditDlg.cpp

extern "C" void __stdcall ext_006A5F44(int a1, int a2, void* a3);

// [0x006B7E10] NMCMultilineEditDlg::vfunc_63 (25 bytes)
extern "C" void __fastcall fn_006B7E10(void* self, int edx_unused, int a1) {
    ext_006A5F44(a1, 0x2af8, (char*)self + 0x88);
}

// [0x006B7D60] NMCMultilineEditDlg::vfunc_87 (40 bytes)
extern "C" int mem_009244D4;

extern "C" __declspec(naked) void __fastcall fn_006B7D60(void* self) {
    __asm {
        push esi
        mov esi, ecx
        lea eax, [esi + 0x78]
        push eax
        lea ecx, [esi + 0x74]
        call dword ptr [mem_009244D4]
        cmp dword ptr [esi + 0x1a4], 0
        je done
        mov ecx, dword ptr [esi + 0x1a4]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push esi
        call eax
    done:
        pop esi
        ret
    }
}
