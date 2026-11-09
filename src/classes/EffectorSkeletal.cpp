// Decompiled translation unit: src/classes/EffectorSkeletal.cpp

extern "C" void ext_00630370();
extern "C" void ext_00630DD0();
extern "C" void ext_006944D0();
extern "C" float* __fastcall ext_00630E60(void* self);

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
