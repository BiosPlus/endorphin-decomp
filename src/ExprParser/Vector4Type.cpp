// Decompiled translation unit: src/ExprParser/Vector4Type.cpp

// [0x00671A60] ExprParser::Vector4Type::vfunc_29 (21 bytes)
extern "C" void ext_00671690();

extern "C" void __fastcall fn_00671A60(void* self, int edx_unused, int* out) {
    typedef int (__thiscall *Callee)(void*, int, int);
    *out = reinterpret_cast<Callee>(ext_00671690)(static_cast<char*>(self) + 4, 0, 0);
}

// [0x0066EF70] ExprParser::Vector4Type::vfunc_30 (26 bytes)
extern "C" void ext_0066C030();

extern "C" void __fastcall fn_0066EF70(void* self, int edx_unused, int* out) {
    typedef void (__thiscall *Callee)(void*, int);
    reinterpret_cast<Callee>(ext_0066C030)(static_cast<char*>(self) + 4, *out);
    *out = 0;
}

// [0x00671A80] ExprParser::Vector4Type::vfunc_28 (28 bytes)
extern "C" int* __fastcall fn_00671A80(void* self, int edx_unused, int* out, int* in) {
    typedef int (__thiscall *Callee)(void*, int, int);
    *out = reinterpret_cast<Callee>(ext_00671690)(static_cast<char*>(self) + 4, 1, *in);
    return out;
}
