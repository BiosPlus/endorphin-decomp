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

// [0x00594440] ExprParser::Function2Type<World, ValuePtr, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, {public: class ValuePtr __thiscall World::getCollisionWithSensor(class std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &), 0}>::vfunc_16 (30 bytes)
extern "C" __declspec(naked) void* __stdcall fn_00594440(void* self) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push 0
        push 0A87014h
        push 0A2E2F8h
        push 0
        push eax
        call ext_006A6E9E
        add esp, 14h
        ret 4
    }
}

// [0x0068BD10] ExprParser::Function2Type<Randomizer, float, float, float, {public: float __thiscall Randomizer::randBounded(float, float), 0}>::vfunc_16 (30 bytes)
extern "C" __declspec(naked) void* __stdcall fn_0068BD10(void* self) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push 0
        push 0AA3000h
        push 0A2E2F8h
        push 0
        push eax
        call ext_006A6E9E
        add esp, 14h
        ret 4
    }
}

extern "C" void ext_0068BDF0();
extern "C" void ext_00672080();

// [0x0068C120] ExprParser::Function2Type<Randomizer, float, float, float, {public: float __thiscall Randomizer::randBounded(float, float), 0}>::vfunc_49 (109 bytes)
extern "C" __declspec(naked) void __fastcall fn_0068C120(void* self) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0xc]
        push esi
        mov esi, dword ptr [eax]
        mov eax, dword ptr [esp + 0x18]
        mov ecx, dword ptr [eax + 0x4]
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [edx + 0x4]
        mov dword ptr [esp + 0x8], 0x0
        call eax
        fstp dword ptr [esp + 0x10]
        mov eax, dword ptr [esp + 0x14]
        mov ecx, dword ptr [eax + 0x4]
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [edx + 0x4]
        call eax
        fstp dword ptr [esp + 0x18]
        fld dword ptr [esp + 0x10]
        sub esp, 0x8
        fstp dword ptr [esp + 0x4]
        mov ecx, esi
        fld dword ptr [esp + 0x20]
        fstp dword ptr [esp]
        call ext_0068BDF0
        mov esi, dword ptr [esp + 0xc]
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x10]
        push ecx
        mov ecx, esi
        fstp dword ptr [esp]
        call ext_00672080
        mov eax, esi
        pop esi
        pop ecx
        ret 0x10
    }
}

// [0x00594AA0] ExprParser::Function2Type<World, ValuePtr, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, {public: class ValuePtr __thiscall World::getCollisionWithSensor(class std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &), 0}>::vfunc_49 (252 bytes)
extern "C" void ext_0046E780();
extern "C" void ext_00593F90();
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00594AA0(void* self) {
    __asm {
        push -1
        push 8a0b93h
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 44h
        push esi
        mov dword ptr [esp + 4], 0
        mov eax, dword ptr [esp + 5ch]
        mov esi, dword ptr [eax]
        mov edx, dword ptr [esp + 5ch]
        mov eax, dword ptr [esp + 64h]
        mov ecx, dword ptr [eax + 4]
        push edi
        push edx
        push eax
        lea eax, [esp + 38h]
        push eax
        call ext_0046E780
        mov edi, eax
        mov edx, dword ptr [esp + 60h]
        mov eax, dword ptr [esp + 64h]
        mov ecx, dword ptr [eax + 4]
        push edx
        push eax
        lea eax, [esp + 1ch]
        push eax
        mov dword ptr [esp + 60h], 1
        call ext_0046E780
        push edi
        push eax
        lea ecx, [esp + 14h]
        push ecx
        mov ecx, esi
        mov byte ptr [esp + 60h], 2
        call ext_00593F90
        mov esi, eax
        cmp dword ptr [esi + 4], 0
        mov byte ptr [esp + 54h], 3
        lea eax, [esp + 60h]
        je skip_call
        mov ecx, dword ptr [esi + 4]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 70h]
        push esi
        push eax
        call edx
        jmp after_call
skip_call:
        mov dword ptr [esp + 60h], 0
after_call:
        mov eax, dword ptr [eax]
        mov edi, dword ptr [esp + 5ch]
        mov dword ptr [edi], eax
        mov ecx, dword ptr [esi + 4]
        mov dword ptr [edi + 4], ecx
        mov ecx, dword ptr [esp + 10h]
        test ecx, ecx
        mov dword ptr [esp + 8], 1
        mov byte ptr [esp + 54h], 2
        je skip_virt
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 78h]
        lea eax, [esp + 0ch]
        push eax
        call edx
skip_virt:
        lea ecx, [esp + 14h]
        mov byte ptr [esp + 54h], 1
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 30h]
        mov byte ptr [esp + 54h], 0
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 4ch]
        mov eax, edi
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 50h
        ret 10h
    }
}
