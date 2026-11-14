// Decompiled translation unit: src/ExprParser/ObjectType.cpp

extern "C" int mem_00924FE8;

// [0x006990C0] ExprParser::ObjectType::vfunc_4 (62 bytes)
extern "C" __declspec(naked) void* __fastcall fn_006990C0(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        push ecx
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [esp + 0xc]
        mov eax, dword ptr [eax + 0x60]
        push esi
        push edx
        mov dword ptr [esp + 0x8], 0
        call eax
        test eax, eax
        mov esi, dword ptr [esp + 0xc]
        je fail_path
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 0x20]
        push esi
        call eax
        mov eax, esi
        pop esi
        pop ecx
        ret 8
fail_path:
        mov ecx, esi
        call dword ptr [mem_00924FE8]
        mov eax, esi
        pop esi
        pop ecx
        ret 8
    }
}

extern "C" void ext_006992E0();
extern "C" void ext_006993A0();
extern "C" void ext_00671F30();

// [0x00699650] ExprParser::ObjectType::vfunc_23 (110 bytes)
extern "C" __declspec(naked) void* __fastcall fn_00699650(void* self, int edx_unused, void* a1, void* a2, void* a3, void* a4, void* a5) {
    __asm {
        push ecx
        push ebp
        push esi
        push edi
        mov edi, dword ptr [esp + 0x18]
        push 0
        lea eax, [edi + 0x2c]
        push 0
        push eax
        mov ebp, ecx
        mov dword ptr [esp + 0x18], 0
        call ext_006993A0
        mov esi, eax
        add esp, 0xc
        test esi, esi
        je fail_path
        mov ecx, dword ptr [edi + 0x4c]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x60]
        push ebx
        mov ebx, dword ptr [esi]
        add edi, 0x48
        push edi
        call eax
        mov edx, dword ptr [ebx + 0x28]
        push eax
        mov ecx, esi
        call edx
        push esi
        mov esi, dword ptr [esp + 0x1c]
        push esi
        mov ecx, ebp
        call ext_006992E0
        pop ebx
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ecx
        ret 0x14
fail_path:
        mov esi, dword ptr [esp + 0x14]
        push esi
        call ext_00671F30
        add esp, 4
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ecx
        ret 0x14
    }
}
