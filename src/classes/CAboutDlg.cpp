// Decompiled translation unit: src/classes/CAboutDlg.cpp

// [0x00464670] CAboutDlg::vfunc_7_off_74 (40 bytes)
extern "C" int mem_00AD658C;
extern "C" int mem_00A30A9C;
extern "C" int mem_00A30AA0;

extern "C" __declspec(naked) void* __fastcall fn_00464670(void* self) {
    __asm {
        mov eax, 1
        test byte ptr [mem_00AD658C], al
        jne short done
        or dword ptr [mem_00AD658C], eax
        xor eax, eax
        xor ecx, ecx
        mov dword ptr [mem_00A30A9C], eax
        mov dword ptr [mem_00A30AA0], ecx
    done:
        mov eax, 0xA30A90
        ret
    }
}

// [0x00464D60] CAboutDlg::vfunc_63 (82 bytes)
extern "C" void ext_006A5F44();

extern "C" void __fastcall fn_00464D60(void* self, int edx_unused, int a1) {
    typedef void (__stdcall *DdxFn)(int, int, void*);
    char* p = (char*)self;
    DdxFn ddx = (DdxFn)ext_006A5F44;
    ddx(a1, 0x3fd, p + 0x11c);
    ddx(a1, 0x3fe, p + 0x170);
    ddx(a1, 0x4e7, p + 0x1c4);
    ddx(a1, 1, p + 0x218);
}
