// Decompiled translation unit: src/classes/ExportUnavailableDialog.cpp

// [0x00461630] ExportUnavailableDialog::vfunc_63 (22 bytes)
extern "C" void ext_006A5F44();

// [0x00461630] ExportUnavailableDialog::vfunc_63 (22 bytes)
extern "C" __declspec(naked) void __fastcall fn_00461630(void* self) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        add ecx, 0x11c
        push ecx
        push 1
        push eax
        call ext_006A5F44
        ret 0x4
    }
}

extern "C" int mem_00ACB004;
extern "C" int mem_00A2ECDC;
extern "C" int mem_00A2ECE0;

// [0x00419770] ExportUnavailableDialog::vfunc_7_off_74 (40 bytes)
extern "C" __declspec(naked) void* __fastcall fn_00419770(void* self) {
    __asm {
        mov eax, 1
        test byte ptr [mem_00ACB004], al
        jne done
        or dword ptr [mem_00ACB004], eax
        xor eax, eax
        xor ecx, ecx
        mov dword ptr [mem_00A2ECDC], eax
        mov dword ptr [mem_00A2ECE0], ecx
    done:
        mov eax, 0xa2ecd0
        ret
    }
}
