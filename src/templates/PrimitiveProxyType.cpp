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
