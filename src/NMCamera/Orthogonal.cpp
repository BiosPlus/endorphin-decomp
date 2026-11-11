// Decompiled translation unit: src/NMCamera/Orthogonal.cpp

// [0x00551A10] NMCamera::Orthogonal::vfunc_5 (8 bytes)
// Calls sub_005480D0 and returns, popping one stack argument.
extern "C" void ext_005480D0();

extern "C" __declspec(naked) void __fastcall fn_00551A10(void* self) {
    __asm {
        call ext_005480D0
        ret 4
    }
}

// [0x00551AF0] NMCamera::Orthogonal::vfunc_8 (88 bytes)
extern "C" void ext_00546520();
extern "C" void ext_00551960();

extern "C" __declspec(naked) void __fastcall fn_00551AF0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 0xa0], 0
        jne ok
        lea eax, [esi + 0x58]
        push eax
        lea ecx, [esi + 0x90]
        call ext_00546520
        test al, al
        je fail
        lea ecx, [esi + 0x3c]
        push ecx
        lea ecx, [esi + 0x74]
        call ext_00551960
        test al, al
        je fail
        fld dword ptr [esi + 0x68]
        fld dword ptr [esi + 0x30]
        fucompp
        fnstsw ax
        test ah, 0x44
        jp fail
        fld dword ptr [esi + 0x6c]
        fld dword ptr [esi + 0x34]
        fucompp
        fnstsw ax
        test ah, 0x44
        jnp ok
    fail:
        xor eax, eax
        pop esi
        ret
    ok:
        mov eax, 1
        pop esi
        ret
    }
}
