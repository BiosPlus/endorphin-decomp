// Decompiled translation unit: src/templates/PrimitiveProxyType.cpp

extern "C" int mem_00924FF0;
extern "C" int mem_009251F0;
extern "C" int mem_0093F958;

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

// [0x004B7B20] ExprParser::PrimitiveProxyType<float>::vfunc_41 (34 bytes)
// Two stack arguments. obj = a2->m_ptr; r = obj->vtbl[1](a2) (thiscall, returns float);
// stores r through the float* held in the first field of a1.
extern "C" void __fastcall fn_004B7B20(void* self, int edx_unused, void* a1, void* a2) {
    void* obj = *(void**)((char*)a2 + 0x4);
    void** vtbl = *(void***)obj;
    typedef float (__thiscall *SlotFn)(void*, void*);
    float r = ((SlotFn)vtbl[1])(obj, a2);
    float* p = *(float**)a1;
    *p = r;
}

// [0x0049AE50] ExprParser::PrimitiveProxyType<bool>::vfunc_1 (37 bytes)
// One stack argument (a1 -> handle -> bool*). Returns 1.0f if the bool is
// true, else 0.0f, in st(0) (ret 4). ecx is not read.
extern "C" float __fastcall fn_0049AE50(void* self, int edx_unused, void** a1) {
    bool* p = *(bool**)a1;
    return *(unsigned char*)p ? 1.0f : 0.0f;
}

// [0x00497620] ExprParser::PrimitiveProxyType<std::basic_string<char, std::char_traits<char>, std::allocator<char>>>::vfunc_4 (37 bytes)
extern "C" void ext_004276B0();

extern "C" __declspec(naked) void __fastcall fn_00497620(void* self) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0xc]
        mov ecx, dword ptr [eax]
        push esi
        mov esi, dword ptr [esp + 0xc]
        push ecx
        push esi
        mov dword ptr [esp + 0xc], 0
        call ext_004276B0
        add esp, 0x8
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    }
}

// [0x0049C010] ExprParser::PrimitiveProxyType<int>::vfunc_0 (37 bytes)
extern "C" void ext_006720C0();
extern "C" __declspec(naked) void* __fastcall fn_0049C010(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0xc]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        push esi
        mov esi, dword ptr [esp + 0xc]
        push edx
        mov ecx, esi
        mov dword ptr [esp + 0x8], 0
        call ext_006720C0
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    }
}

// [0x004B7B50] ExprParser::PrimitiveProxyType<float>::vfunc_43 (38 bytes)
// Two stack arguments. obj = a2->m_ptr; r = obj->vtbl[1](a2) (thiscall, returns float);
// *(float*)a1 += r.
extern "C" __declspec(naked) void __fastcall fn_004B7B50(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        mov esi, dword ptr [eax]
        mov eax, dword ptr [esp + 0xc]
        mov ecx, dword ptr [eax + 0x4]
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [edx + 0x4]
        call eax
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esi]
        fadd dword ptr [esp + 0x8]
        fstp dword ptr [esi]
        pop esi
        ret 0x8
    }
}

extern "C" void ext_006720A0();

// [0x0049B1E0] ExprParser::PrimitiveProxyType<bool>::vfunc_0 (38 bytes)
extern "C" __declspec(naked) void __fastcall fn_0049B1E0(void* self) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0xc]
        mov ecx, dword ptr [eax]
        movzx edx, byte ptr [ecx]
        push esi
        mov esi, dword ptr [esp + 0xc]
        push edx
        mov ecx, esi
        mov dword ptr [esp + 0x8], 0x0
        call ext_006720A0
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    }
}

// [0x0049B260] ExprParser::PrimitiveProxyType<bool>::vfunc_7 (40 bytes)
// Two stack arguments: a1 (object whose first field points at the bool storage)
// and a float value. Stores (value >= K) into *storage, where K is a double constant.
extern "C" __declspec(naked) void __stdcall fn_0049B260(void* a1, float a2) {
    __asm {
        fld dword ptr [esp + 0x8]
        mov ecx, dword ptr [esp + 0x4]
        fcomp qword ptr [mem_0093F958]
        mov edx, dword ptr [ecx]
        fnstsw ax
        test ah, 0x1
        jne L_false
        mov eax, 0x1
        mov byte ptr [edx], al
        ret 0x8
    L_false:
        xor eax, eax
        mov byte ptr [edx], al
        ret 0x8
    }
}

// [0x004B7A10] ExprParser::PrimitiveProxyType<float>::vfunc_0 (40 bytes)
// Two stack arguments (ret 0x8). Loads the float at **a2, then calls
// sub_00672080 thiscall on a1 with (float, 0). Returns a1 in eax.
extern "C" void ext_00672080();

extern "C" __declspec(naked) void* __fastcall fn_004B7A10(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0xc]
        mov ecx, dword ptr [eax]
        fld dword ptr [ecx]
        push esi
        mov esi, dword ptr [esp + 0xc]
        push ecx
        mov ecx, esi
        fstp dword ptr [esp]
        mov dword ptr [esp + 0x8], 0x0
        call ext_00672080
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    }
}

// [0x0049AE90] ExprParser::PrimitiveProxyType<bool>::vfunc_4 (40 bytes)
extern "C" void ext_0046C460();

extern "C" __declspec(naked) void __fastcall fn_0049AE90(void* self) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0xc]
        mov ecx, dword ptr [eax]
        movzx edx, byte ptr [ecx]
        push esi
        mov esi, dword ptr [esp + 0xc]
        push edx
        push esi
        mov dword ptr [esp + 0xc], 0
        call ext_0046C460
        add esp, 0x8
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    }
}

// [0x0049B220] ExprParser::PrimitiveProxyType<bool>::vfunc_43 (50 bytes)
// Two stack arguments (ret 0x8). p = *(bool**)a1; if *p is already true, set it
// to true. Otherwise r = obj->vtbl[3](a2) (thiscall, returns bool) with obj = a2->m_ptr,
// and *p = r.
extern "C" __declspec(naked) void __fastcall fn_0049B220(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        mov esi, dword ptr [eax]
        cmp byte ptr [esi], 0x0
        jne L_set_true
        mov eax, dword ptr [esp + 0xc]
        mov ecx, dword ptr [eax + 0x4]
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [edx + 0xc]
        call eax
        test al, al
        jne L_set_true
        xor eax, eax
        mov byte ptr [esi], al
        pop esi
        ret 0x8
    L_set_true:
        mov eax, 0x1
        mov byte ptr [esi], al
        pop esi
        ret 0x8
    }
}

// [0x004B78E0] ExprParser::PrimitiveProxyType<float>::vfunc_42 (53 bytes)
// Two stack arguments. obj = a2->m_ptr; r = obj->vtbl[1](a2) (thiscall, returns float);
// returns whether the float pointed to by the first field of a1 equals r (ordered compare).
extern "C" bool __fastcall fn_004B78E0(void* self, int edx_unused, void* a1, void* a2) {
    void* obj = *(void**)((char*)a2 + 0x4);
    void** vtbl = *(void***)obj;
    typedef float (__thiscall *SlotFn)(void*, void*);
    float r = ((SlotFn)vtbl[1])(obj, a2);
    float* p = *(float**)a1;
    return *p == r;
}

// [0x004B7180] ExprParser::PrimitiveProxyType<float>::vfunc_2 (57 bytes)
// One stack argument (pointer to a pointer to a float). Loads the float,
// compares against 0.0; adds (non-negative) or subtracts (negative) the
// double constant at 0x00993828, then tail-calls sub_006A6DE0 with the
// result left on the x87 stack. ret 4.
extern "C" void ext_006A6DE0();
extern "C" int mem_00993828;

extern "C" __declspec(naked) void __fastcall fn_004B7180(void* self) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        mov ecx, dword ptr [eax]
        fld dword ptr [ecx]
        fstp dword ptr [esp + 0x4]
        fldz
        fld dword ptr [esp + 0x4]
        fcom st(1)
        fnstsw ax
        fstp st(1)
        test ah, 0x1
        jne short neg_path
        fadd qword ptr [mem_00993828]
        call ext_006A6DE0
        ret 0x4
neg_path:
        fsub qword ptr [mem_00993828]
        call ext_006A6DE0
        ret 0x4
    }
}

// [0x004975E0] ExprParser::PrimitiveProxyType<std::basic_string<char, std::char_traits<char>, std::allocator<char>>>::vfunc_3 (61 bytes)
extern "C" int mem_00924FC0;

// One stack argument (a1). esi = *a1 (string handle). Compares it against two
// string literals via the imported operator==(const string&, const char*)
// (cdecl, add esp,8); returns 1 if either matches, else 0 (ret 4).
extern "C" __declspec(naked) void __stdcall fn_004975E0(void* a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        mov esi, dword ptr [eax]
        push edi
        mov edi, dword ptr [mem_00924FC0]
        push 0x92f10c
        push esi
        call edi
        add esp, 0x8
        test al, al
        jne match
        push 0x93a810
        push esi
        call edi
        add esp, 0x8
        test al, al
        jne match
        pop edi
        xor eax, eax
        pop esi
        ret 0x4
    match:
        pop edi
        mov eax, 0x1
        pop esi
        ret 0x4
    }
}
