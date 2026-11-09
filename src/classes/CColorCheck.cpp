// Decompiled translation unit: src/classes/CColorCheck.cpp

extern "C" void ext_006A5EA2();
extern "C" void ext_006A5CE0();

// [0x0040FDA0] CColorCheck::vfunc_22 (22 bytes)
extern "C" __declspec(naked) void __fastcall fn_0040FDA0(void* self) {
    __asm {
        push esi
        push 0x20
        push 0xb
        push 0x1f
        mov esi, ecx
        call ext_006A5EA2
        mov ecx, esi
        pop esi
        jmp ext_006A5CE0
    }
}
