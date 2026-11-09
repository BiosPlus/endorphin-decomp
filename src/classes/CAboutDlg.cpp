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
