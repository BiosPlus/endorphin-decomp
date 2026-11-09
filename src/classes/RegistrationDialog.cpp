// Decompiled translation unit: src/classes/RegistrationDialog.cpp

// [0x004499B0] RegistrationDialog::vfunc_87 (25 bytes)
extern "C" void ext_006A5E60();
extern "C" void ext_006A5FB6();

extern "C" __declspec(naked) void __fastcall fn_004499B0(void* self) {
    __asm {
        push esi
        push 0x0
        push 0x0
        push 0x93380c
        mov esi, ecx
        call ext_006A5E60
        mov ecx, esi
        pop esi
        jmp ext_006A5FB6
    }
}

// [0x00449A00] RegistrationDialog::vfunc_7_off_74 (40 bytes)
extern "C" int mem_00AD08E4;
extern "C" int mem_00A2FE90;
extern "C" int mem_00A2FE94;
extern "C" int mem_00A2FE84;

extern "C" __declspec(naked) void* __fastcall fn_00449A00(void* self) {
    __asm {
        mov eax, 0x1
        test byte ptr [mem_00AD08E4], al
        jne short skip_00449A00
        or dword ptr [mem_00AD08E4], eax
        xor eax, eax
        xor ecx, ecx
        mov dword ptr [mem_00A2FE90], eax
        mov dword ptr [mem_00A2FE94], ecx
    skip_00449A00:
        mov eax, offset mem_00A2FE84
        ret
    }
}
