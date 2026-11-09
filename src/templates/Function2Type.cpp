// Decompiled translation unit: src/templates/Function2Type.cpp

// [0x004ECA70] ExprParser::Function2Type<SelectionVariable, bool, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, ValuePtr const &, {public: bool __thiscall SelectionVariable::getMethodForEachChild(class std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, ValuePtr const &), 0}>::vfunc_16 (30 bytes)
extern "C" void ext_006A6E9E();

extern "C" __declspec(naked) void* __stdcall fn_004ECA70(void* self) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push 0
        push 0A398B0h
        push 0A2E2F8h
        push 0
        push eax
        call ext_006A6E9E
        add esp, 14h
        ret 4
    }
}
