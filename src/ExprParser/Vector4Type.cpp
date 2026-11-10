// Decompiled translation unit: src/ExprParser/Vector4Type.cpp

#include <math.h>

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

// [0x0066B7C0] ExprParser::Vector4Type::vfunc_41 (46 bytes)
extern "C" void __fastcall fn_0066B7C0(void* self, int edx_unused, float** dst, char* src) {
    typedef float* (__thiscall *Callee)(void*, void*);
    void* obj = *reinterpret_cast<void**>(src + 4);
    void** vtbl = *reinterpret_cast<void***>(obj);
    float* v = reinterpret_cast<Callee>(vtbl[6])(obj, src);
    float* d = *dst;
    d[0] = v[0];
    d[1] = v[1];
    d[2] = v[2];
    d[3] = v[3];
}

// [0x0066B860] ExprParser::Vector4Type::vfunc_43 (57 bytes)
extern "C" __declspec(naked) void __fastcall fn_0066B860(void* self, int edx_unused, float** dst, char* src) {
    __asm {
        mov eax, dword ptr [esp + 8]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [edx + 18h]
        call eax
        mov ecx, dword ptr [esp + 4]
        mov ecx, dword ptr [ecx]
        fld dword ptr [ecx]
        fadd dword ptr [eax]
        fstp dword ptr [ecx]
        fld dword ptr [eax + 4]
        fadd dword ptr [ecx + 4]
        fstp dword ptr [ecx + 4]
        fld dword ptr [eax + 8]
        fadd dword ptr [ecx + 8]
        fstp dword ptr [ecx + 8]
        fld dword ptr [eax + 0Ch]
        fadd dword ptr [ecx + 0Ch]
        fstp dword ptr [ecx + 0Ch]
        ret 8
    }
}

// [0x0066B8A0] ExprParser::Vector4Type::vfunc_44 (57 bytes)
extern "C" __declspec(naked) void __fastcall fn_0066B8A0(void* self, int edx_unused, float** dst, char* src) {
    __asm {
        mov eax, dword ptr [esp + 8]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [edx + 18h]
        call eax
        mov ecx, dword ptr [esp + 4]
        mov ecx, dword ptr [ecx]
        fld dword ptr [ecx]
        fsub dword ptr [eax]
        fstp dword ptr [ecx]
        fld dword ptr [ecx + 4]
        fsub dword ptr [eax + 4]
        fstp dword ptr [ecx + 4]
        fld dword ptr [ecx + 8]
        fsub dword ptr [eax + 8]
        fstp dword ptr [ecx + 8]
        fld dword ptr [ecx + 0Ch]
        fsub dword ptr [eax + 0Ch]
        fstp dword ptr [ecx + 0Ch]
        ret 8
    }
}

// [0x0066D1D0] ExprParser::Vector4Type::vfunc_47 (86 bytes)
extern "C" void __fastcall fn_0066D1D0(void* self, int edx_unused, void* a1) {
    typedef float* (__thiscall *Get4Fn)(void*, void*);
    typedef void (__thiscall *Sink2Fn)(void*, void*, float);
    void** obj = *(void***)((char*)a1 + 0x4);
    float* v = ((Get4Fn)(*(void***)obj)[6])(obj, a1);
    float sum = v[0] * v[0] + v[1] * v[1] + v[2] * v[2];
    float len = (float)sqrt((double)sum);
    void** obj2 = *(void***)((char*)a1 + 0x4);
    ((Sink2Fn)(*(void***)obj2)[7])(obj2, a1, len);
}
