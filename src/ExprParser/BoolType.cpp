// Decompiled translation unit: src/ExprParser/BoolType.cpp

// [0x0046C430] ExprParser::BoolType::vfunc_51 (10 bytes)
extern "C" void ext_006A724A();

extern "C" __declspec(naked) void __fastcall fn_0046C430(void* self) {
    __asm {
        push ecx
        call ext_006A724A
        add esp, 0x4
        ret
    }
}

// [0x0067A6E0] ExprParser::BoolType::vfunc_34 (17 bytes)
extern "C" void ext_0041CF50();

extern "C" __declspec(naked) unsigned char __stdcall fn_0067A6E0(void* self, int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        mov ecx, dword ptr [esp + 0x4]
        push eax
        call ext_0041CF50
        ret 0x8
    }
}

// [0x0067A700] ExprParser::BoolType::vfunc_35 (19 bytes)
extern "C" void ext_00698ED0();

extern "C" __declspec(naked) void __stdcall fn_0067A700(void* a1, void* a2) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        mov ecx, dword ptr [eax]
        push ecx
        mov ecx, dword ptr [esp + 0xc]
        call ext_00698ED0
        ret 0x8
    }
}

// [0x0067A750] ExprParser::BoolType::vfunc_8 (32 bytes)
extern "C" void ext_006720C0();

extern "C" void __stdcall fn_0067A750(void* a1, void* a2) {
    typedef void (__thiscall *VFn)(void* self, void* a);
    char* obj = (char*)a1;
    char* inner = *(char**)(obj + 0x4);
    void** vtbl = *(void***)inner;
    VFn vf = (VFn)vtbl[0x78 / 4];
    vf(inner, a1);
    ((VFn)ext_006720C0)(a1, a2);
}
