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
