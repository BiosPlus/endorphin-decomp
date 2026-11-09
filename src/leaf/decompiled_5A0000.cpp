// Decompiled translation unit: src/leaf/decompiled_5A0000.cpp

extern "C" void ext_005A1070();
extern "C" void ext_006657F0();

// [0x005A3610] sub_005A3610 (8 bytes)
extern "C" __declspec(naked) void __cdecl fn_005A3610() {
    __asm {
        push 3
        call ext_005A1070
        ret
    }
}

// [0x005AE4C0] sub_005AE4C0 (21 bytes)
extern "C" void ext_005AD3F0();
extern "C" void __fastcall fn_005AE4C0(void* self) {
    typedef void (__thiscall *Fn)(void*, int);
    ((Fn)ext_005AD3F0)(self, 0);
    ((Fn)ext_005AD3F0)(self, 1);
}

// [0x005AAD10] sub_005AAD10 (25 bytes)
extern "C" void ext_005AA830();
extern "C" void ext_005AAA00();
extern "C" __declspec(naked) void __fastcall fn_005AAD10(void* self) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        push eax
        mov esi, ecx
        call ext_005AAA00
        push eax
        mov ecx, esi
        call ext_005AA830
        pop esi
        ret 0x4
    }
}

// [0x005AC670] sub_005AC670 (29 bytes)
extern "C" void* __fastcall fn_005AC670(void* self, int edx_unused, int a1) {
    typedef void (__thiscall *Callee)(void*, int);
    ((Callee)&ext_006657F0)(self, 0);
    *(int*)((char*)self + 0x10) = a1;
    *(int*)self = 0x95f4e4;
    return self;
}
