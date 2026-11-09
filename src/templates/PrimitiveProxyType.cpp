// Decompiled translation unit: src/templates/PrimitiveProxyType.cpp

extern "C" int mem_00924FF0;
extern "C" int mem_009251F0;

// [0x004975B0] ExprParser::PrimitiveProxyType<std::basic_string<char, std::char_traits<char>, std::allocator<char>>>::vfunc_1 (33 bytes)
// One stack argument (pointer to a string handle). Calls the imported
// std::string::c_str() on *arg, passes the result to atof, and returns the
// double result narrowed to float in st(0) (ret 4).
extern "C" __declspec(naked) void fn_004975B0() {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        mov ecx, dword ptr [eax]
        call dword ptr [mem_00924FF0]
        push eax
        call dword ptr [mem_009251F0]
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x8]
        add esp, 0x4
        ret 0x4
    }
}

// [0x0049AEC0] ExprParser::PrimitiveProxyType<bool>::vfunc_42 (33 bytes)
// Two stack arguments. obj = a2->m_ptr; r = obj->vtbl[3](a2) (thiscall, returns bool);
// returns whether the byte pointed to by the first field of a1 equals r.
extern "C" bool __fastcall fn_0049AEC0(void* self, int edx_unused, void* a1, void* a2) {
    void* obj = *(void**)((char*)a2 + 0x4);
    void** vtbl = *(void***)obj;
    typedef unsigned char (__thiscall *SlotFn)(void*, void*);
    unsigned char r = ((SlotFn)vtbl[3])(obj, a2);
    unsigned char* p = *(unsigned char**)a1;
    return *p == r;
}

// [0x0049B4A0] ExprParser::PrimitiveProxyType<int>::vfunc_42 (33 bytes)
// Two stack arguments. obj = a2->m_ptr; r = obj->vtbl[2](a2) (thiscall, returns int);
// returns whether the int pointed to by the first field of a1 equals r.
extern "C" bool __fastcall fn_0049B4A0(void* self, int edx_unused, void* a1, void* a2) {
    void* obj = *(void**)((char*)a2 + 0x4);
    void** vtbl = *(void***)obj;
    typedef int (__thiscall *SlotFn)(void*, void*);
    int r = ((SlotFn)vtbl[2])(obj, a2);
    int* p = *(int**)a1;
    return *p == r;
}

extern "C" void ext_00671100();

// [0x004A25D0] ExprParser::PrimitiveProxyType<bool>::vfunc_13 (13 bytes)
extern "C" __declspec(naked) void __stdcall fn_004A25D0(void* a1) {
    __asm {
        push 0x2
        call ext_00671100
        add esp, 0x4
        ret 0x4
    }
}

// [0x00511F80] ExprParser::PrimitiveProxyType<std::basic_string<char, std::char_traits<char>, std::allocator<char>>>::vfunc_13 (13 bytes)
extern "C" __declspec(naked) void __stdcall fn_00511F80(void* a1) {
    __asm {
        push 0x3
        call ext_00671100
        add esp, 0x4
        ret 0x4
    }
}

// [0x00594460] ExprParser::PrimitiveProxyType<float>::vfunc_13 (13 bytes)
extern "C" __declspec(naked) void __stdcall fn_00594460(void* a1) {
    __asm {
        push 0x0
        call ext_00671100
        add esp, 0x4
        ret 0x4
    }
}

// [0x00498F80] ExprParser::PrimitiveProxyType<std::basic_string<char, std::char_traits<char>, std::allocator<char>>>::vfunc_37 (15 bytes)
extern "C" void ext_004989F0();

// this in ecx (passed through to callee), one stack arg (a1), ret 4.
extern "C" __declspec(naked) void __fastcall fn_00498F80(void* self, int edx_unused, void* a1) {
    __asm {
        call ext_004989F0
        mov ecx, dword ptr [esp + 0x4]
        mov dword ptr [ecx + 0x4], eax
        ret 0x4
    }
}

// [0x00499190] ExprParser::PrimitiveProxyType<std::basic_string<char, std::char_traits<char>, std::allocator<char>>>::vfunc_38 (15 bytes)
extern "C" void ext_00498F90();

// this in ecx (passed through to callee), one stack arg (a1), ret 4.
extern "C" __declspec(naked) void __fastcall fn_00499190(void* self, int edx_unused, void* a1) {
    __asm {
        call ext_00498F90
        mov ecx, dword ptr [esp + 0x4]
        mov dword ptr [ecx + 0x4], eax
        ret 0x4
    }
}

// [0x0049CFE0] ExprParser::PrimitiveProxyType<bool>::vfunc_37 (15 bytes)
extern "C" void ext_0049B3A0();

// this in ecx (passed through to callee), one stack arg (a1), ret 4.
extern "C" __declspec(naked) void __fastcall fn_0049CFE0(void* self, int edx_unused, void* a1) {
    __asm {
        call ext_0049B3A0
        mov ecx, dword ptr [esp + 0x4]
        mov dword ptr [ecx + 0x4], eax
        ret 0x4
    }
}

extern "C" void ext_0049CC60();

// [0x0049DA30] ExprParser::PrimitiveProxyType<int>::vfunc_37 (15 bytes)
extern "C" __declspec(naked) void __fastcall fn_0049DA30(void* self, int edx_unused, void* a1) {
    __asm {
        call ext_0049CC60
        mov ecx, dword ptr [esp + 0x4]
        mov dword ptr [ecx + 0x4], eax
        ret 0x4
    }
}

extern "C" void ext_0049DA40();

// [0x0049DBE0] ExprParser::PrimitiveProxyType<int>::vfunc_38 (15 bytes)
extern "C" __declspec(naked) void __fastcall fn_0049DBE0(void* self, int edx_unused, void* a1) {
    __asm {
        call ext_0049DA40
        mov ecx, dword ptr [esp + 0x4]
        mov dword ptr [ecx + 0x4], eax
        ret 0x4
    }
}

// [0x0049E2E0] ExprParser::PrimitiveProxyType<bool>::vfunc_38 (15 bytes)
extern "C" void ext_0049CFF0();
extern "C" __declspec(naked) void __fastcall fn_0049E2E0(void* self, int edx_unused, void* a1) {
    __asm {
        call ext_0049CFF0
        mov ecx, dword ptr [esp + 0x4]
        mov dword ptr [ecx + 0x4], eax
        ret 0x4
    }
}

// [0x004BA260] ExprParser::PrimitiveProxyType<float>::vfunc_37 (15 bytes)
extern "C" void ext_004B99B0();

// this in ecx (passed through to callee), one stack arg (a1), ret 4.
extern "C" __declspec(naked) void __fastcall fn_004BA260(void* self, int edx_unused, void* a1) {
    __asm {
        call ext_004B99B0
        mov ecx, dword ptr [esp + 0x4]
        mov dword ptr [ecx + 0x4], eax
        ret 0x4
    }
}

// [0x004BA3A0] ExprParser::PrimitiveProxyType<float>::vfunc_38 (15 bytes)
extern "C" void ext_004BA270();
extern "C" __declspec(naked) void __fastcall fn_004BA3A0(void* self, int edx_unused, void* a1) {
    __asm {
        call ext_004BA270
        mov ecx, dword ptr [esp + 0x4]
        mov dword ptr [ecx + 0x4], eax
        ret 0x4
    }
}

// [0x004B7A50] ExprParser::PrimitiveProxyType<float>::vfunc_3 (34 bytes)
// One stack argument (a1 -> handle -> float*). Loads the float and compares it
// against a double constant at 0x009433D8; returns 1 if value >= constant, else 0.
extern "C" int mem_009433D8;

extern "C" bool __fastcall fn_004B7A50(void* self, int edx_unused, void* a1) {
    float* p = *(float**)a1;
    float v = *p;
    return (double)v >= *(double*)&mem_009433D8;
}
