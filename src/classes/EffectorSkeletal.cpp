// Decompiled translation unit: src/classes/EffectorSkeletal.cpp

extern "C" void ext_00630370();
extern "C" void ext_00630DD0();
extern "C" void ext_006944D0();
extern "C" float* __fastcall ext_00630E60(void* self);
extern "C" void ext_006035D0();
extern "C" void ext_006304B0();
extern "C" void ext_006305A0();
extern "C" void ext_00630CB0();

// [0x006310F0] EffectorSkeletal::vfunc_19 (12 bytes)
extern "C" __declspec(naked) void __cdecl fn_006310F0() {
    __asm {
        push 7
        call ext_00630370
        jmp ext_00630DD0
    }
}

// [0x00630C90] EffectorSkeletal::vfunc_31 (17 bytes)
extern "C" __declspec(naked) void __cdecl fn_00630C90() {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        mov ecx, dword ptr [esp + 0x4]
        push eax
        call ext_006944D0
        ret 0x8
    }
}

// [0x006310C0] EffectorSkeletal::vfunc_14 (36 bytes)
extern "C" float* __fastcall fn_006310C0(void* self, int edx_unused, float* out) {
    float* src = ext_00630E60(self);
    out[0] = src[0];
    out[1] = src[1];
    out[2] = src[2];
    out[3] = src[3];
    return out;
}

// [0x006309E0] EffectorSkeletal::vfunc_28 (131 bytes)
extern "C" __declspec(naked) void __fastcall fn_006309E0(void* self) {
    __asm {
        fld dword ptr [esp + 0x4]
        fld st(0)
        fmul dword ptr [ecx + 0xd0]
        fstp dword ptr [ecx + 0xd0]
        fld dword ptr [ecx + 0xec]
        fmul st, st(1)
        fstp dword ptr [ecx + 0xec]
        fld dword ptr [ecx + 0xcc]
        fmul st, st(1)
        fstp dword ptr [ecx + 0xcc]
        fld dword ptr [ecx + 0xdc]
        fmul st, st(1)
        fstp dword ptr [ecx + 0xdc]
        fld dword ptr [ecx + 0xe4]
        fmul st, st(1)
        fstp dword ptr [ecx + 0xe4]
        fld dword ptr [ecx + 0xd4]
        fmul st, st(1)
        fstp dword ptr [ecx + 0xd4]
        fld dword ptr [ecx + 0xe0]
        fmul st, st(1)
        fstp dword ptr [ecx + 0xe0]
        fld dword ptr [ecx + 0xe8]
        fmul st, st(1)
        fstp dword ptr [ecx + 0xe8]
        fmul dword ptr [ecx + 0xd8]
        fstp dword ptr [ecx + 0xd8]
        ret 0x4
    }
}

// [0x00630D00] EffectorSkeletal::vfunc_18 (58 bytes)
extern "C" __declspec(naked) void __fastcall fn_00630D00(void* self) {
    __asm {
        push esi
        mov esi, ecx
        lea eax, [esi + 0x2c]
        push eax
        lea ecx, [esi + 0x90]
        call ext_006035D0
        fld dword ptr [esi + 0xf0]
        push ecx
        mov ecx, esi
        fstp dword ptr [esp]
        call ext_00630CB0
        mov ecx, esi
        call ext_006305A0
        push eax
        mov ecx, esi
        call ext_006304B0
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 0x74]
        pop esi
        jmp eax
    }
}
