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
