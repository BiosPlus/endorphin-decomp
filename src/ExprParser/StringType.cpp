// Decompiled translation unit: src/ExprParser/StringType.cpp

// [0x0066B510] ExprParser::StringType::vfunc_35 (19 bytes)
extern "C" void ext_00698F80();

typedef void (__thiscall *Callee_00698F80)(void* self, void* arg);

extern "C" void __fastcall fn_0066B510(void* self, int edx_unused, void** a1, void* a2) {
    ((Callee_00698F80)ext_00698F80)(a2, *a1);
}

// [0x00671860] ExprParser::StringType::vfunc_29 (21 bytes)
extern "C" void ext_006714E0();

typedef void* (__thiscall *Callee_006714E0)(void* self, int a, int b);

extern "C" void __fastcall fn_00671860(void* self, int edx_unused, void** a1) {
    *a1 = ((Callee_006714E0)ext_006714E0)((char*)self + 4, 1, 0);
}

// [0x0066EEC0] ExprParser::StringType::vfunc_30 (26 bytes)
extern "C" void ext_0066E050();

typedef void (__thiscall *Callee_0066E050)(void* self, void* arg);

extern "C" void __fastcall fn_0066EEC0(void* self, int edx_unused, void** a1) {
    ((Callee_0066E050)ext_0066E050)((char*)self + 4, *a1);
    *a1 = 0;
}

// [0x0066B270] ExprParser::StringType::vfunc_2 (27 bytes)
extern "C" void ext_0046C490();

typedef void* (__cdecl *Callee_0046C490)(void* a);

extern "C" void* __stdcall fn_0066B270(void** a1) {
    if (*a1) {
        return ((Callee_0046C490)ext_0046C490)(*a1);
    }
    return 0;
}

// [0x00671880] ExprParser::StringType::vfunc_28 (28 bytes)
extern "C" void* __fastcall fn_00671880(void* self, int edx_unused, void** a1, void** a2) {
    *a1 = ((Callee_006714E0)ext_006714E0)((char*)self + 4, 1, (int)*a2);
    return a1;
}

// [0x006718A0] ExprParser::StringType::vfunc_10 (28 bytes)
extern "C" void ext_00671840();
extern "C" int mem_00924FDC;

extern "C" __declspec(naked) void __fastcall fn_006718A0(void* self) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        push esi
        call ext_00671840
        mov eax, dword ptr [esp + 0xc]
        mov ecx, dword ptr [esi]
        push eax
        call dword ptr [mem_00924FDC]
        pop esi
        ret 8
    }
}
