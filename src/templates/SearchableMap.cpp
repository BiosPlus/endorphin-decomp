// Decompiled translation unit: src/templates/SearchableMap.cpp

extern "C" void ext_004280C0();
extern "C" int mem_00925134;

// [0x0042E7B0] SearchableMap<KeyMapping, GetNameFromAttribute<KeyMapping>>::vfunc_0 (110 bytes)
extern "C" __declspec(naked) int __fastcall fn_0042E7B0(void* self, int edx_unused, int a1) {
    __asm {
        sub esp, 8
        cmp dword ptr [ecx + 0xc], 0
        jne L_nonempty
        xor eax, eax
        add esp, 8
        ret 4
    L_nonempty:
        mov eax, dword ptr [esp + 0xc]
        push ebx
        push ebp
        push esi
        push edi
        lea esi, [ecx + 4]
        push eax
        lea ecx, [esp + 0x14]
        push ecx
        mov ecx, esi
        call ext_004280C0
        mov edi, dword ptr [esp + 0x10]
        test edi, edi
        mov ebx, dword ptr [esi + 4]
        mov ebp, dword ptr [mem_00925134]
        je L_inv1
        cmp edi, esi
        je L_ok1
    L_inv1:
        call ebp
    L_ok1:
        mov esi, dword ptr [esp + 0x14]
        cmp esi, ebx
        je L_notfound
        test edi, edi
        jne L_ok2
        call ebp
    L_ok2:
        cmp esi, dword ptr [edi + 4]
        jne L_ok3
        call ebp
    L_ok3:
        pop edi
        lea eax, [esi + 0x28]
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 4
    L_notfound:
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 8
        ret 4
    }
}

// [0x0048BC10] SearchableMap<NM::Matrix4, GetNameFromAttribute<NM::Matrix4>>::vfunc_0 (110 bytes)
extern "C" void ext_0048BBA0();

extern "C" __declspec(naked) int __fastcall fn_0048BC10(void* self, int edx_unused, int a1) {
    __asm {
        sub esp, 8
        cmp dword ptr [ecx + 0xc], 0
        jne L_nonempty
        xor eax, eax
        add esp, 8
        ret 4
    L_nonempty:
        mov eax, dword ptr [esp + 0xc]
        push ebx
        push ebp
        push esi
        push edi
        lea esi, [ecx + 4]
        push eax
        lea ecx, [esp + 0x14]
        push ecx
        mov ecx, esi
        call ext_0048BBA0
        mov edi, dword ptr [esp + 0x10]
        test edi, edi
        mov ebx, dword ptr [esi + 4]
        mov ebp, dword ptr [mem_00925134]
        je L_inv1
        cmp edi, esi
        je L_ok1
    L_inv1:
        call ebp
    L_ok1:
        mov esi, dword ptr [esp + 0x14]
        cmp esi, ebx
        je L_notfound
        test edi, edi
        jne L_ok2
        call ebp
    L_ok2:
        cmp esi, dword ptr [edi + 4]
        jne L_ok3
        call ebp
    L_ok3:
        pop edi
        lea eax, [esi + 0x28]
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 4
    L_notfound:
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 8
        ret 4
    }
}

// [0x004A74B0] SearchableMap<NMData::PoseData, GetNameFromAttribute<NMData::PoseData>>::vfunc_0 (110 bytes)
extern "C" void ext_004A7440();

extern "C" __declspec(naked) int __fastcall fn_004A74B0(void* self, int edx_unused, int a1) {
    __asm {
        sub esp, 8
        cmp dword ptr [ecx + 0xc], 0
        jne L_nonempty
        xor eax, eax
        add esp, 8
        ret 4
    L_nonempty:
        mov eax, dword ptr [esp + 0xc]
        push ebx
        push ebp
        push esi
        push edi
        lea esi, [ecx + 4]
        push eax
        lea ecx, [esp + 0x14]
        push ecx
        mov ecx, esi
        call ext_004A7440
        mov edi, dword ptr [esp + 0x10]
        test edi, edi
        mov ebx, dword ptr [esi + 4]
        mov ebp, dword ptr [mem_00925134]
        je L_inv1
        cmp edi, esi
        je L_ok1
    L_inv1:
        call ebp
    L_ok1:
        mov esi, dword ptr [esp + 0x14]
        cmp esi, ebx
        je L_notfound
        test edi, edi
        jne L_ok2
        call ebp
    L_ok2:
        cmp esi, dword ptr [edi + 4]
        jne L_ok3
        call ebp
    L_ok3:
        pop edi
        lea eax, [esi + 0x28]
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 4
    L_notfound:
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 8
        ret 4
    }
}

// [0x004EC3F0] SearchableMap<std::basic_string<char, std::char_traits<char>, std::allocator<char>>, GetNameFromAttribute<std::basic_string<char, std::char_traits<char>, std::allocator<char>>>>::vfunc_0 (110 bytes)
extern "C" void ext_004EC380();

extern "C" __declspec(naked) int __fastcall fn_004EC3F0(void* self, int edx_unused, int a1) {
    __asm {
        sub esp, 8
        cmp dword ptr [ecx + 0xc], 0
        jne L_nonempty
        xor eax, eax
        add esp, 8
        ret 4
    L_nonempty:
        mov eax, dword ptr [esp + 0xc]
        push ebx
        push ebp
        push esi
        push edi
        lea esi, [ecx + 4]
        push eax
        lea ecx, [esp + 0x14]
        push ecx
        mov ecx, esi
        call ext_004EC380
        mov edi, dword ptr [esp + 0x10]
        test edi, edi
        mov ebx, dword ptr [esi + 4]
        mov ebp, dword ptr [mem_00925134]
        je L_inv1
        cmp edi, esi
        je L_ok1
    L_inv1:
        call ebp
    L_ok1:
        mov esi, dword ptr [esp + 0x14]
        cmp esi, ebx
        je L_notfound
        test edi, edi
        jne L_ok2
        call ebp
    L_ok2:
        cmp esi, dword ptr [edi + 4]
        jne L_ok3
        call ebp
    L_ok3:
        pop edi
        lea eax, [esi + 0x28]
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 4
    L_notfound:
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 8
        ret 4
    }
}

// [0x0052EC10] SearchableMap<Material, GetNameFromAttribute<Material>>::vfunc_0 (110 bytes)
extern "C" void ext_0052EBA0();

extern "C" __declspec(naked) int __fastcall fn_0052EC10(void* self, int edx_unused, int a1) {
    __asm {
        sub esp, 8
        cmp dword ptr [ecx + 0xc], 0
        jne L_nonempty
        xor eax, eax
        add esp, 8
        ret 4
    L_nonempty:
        mov eax, dword ptr [esp + 0xc]
        push ebx
        push ebp
        push esi
        push edi
        lea esi, [ecx + 4]
        push eax
        lea ecx, [esp + 0x14]
        push ecx
        mov ecx, esi
        call ext_0052EBA0
        mov edi, dword ptr [esp + 0x10]
        test edi, edi
        mov ebx, dword ptr [esi + 4]
        mov ebp, dword ptr [mem_00925134]
        je L_inv1
        cmp edi, esi
        je L_ok1
    L_inv1:
        call ebp
    L_ok1:
        mov esi, dword ptr [esp + 0x14]
        cmp esi, ebx
        je L_notfound
        test edi, edi
        jne L_ok2
        call ebp
    L_ok2:
        cmp esi, dword ptr [edi + 4]
        jne L_ok3
        call ebp
    L_ok3:
        pop edi
        lea eax, [esi + 0x28]
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 4
    L_notfound:
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 8
        ret 4
    }
}

// [0x0059B070] SearchableMap<NM::Color *, GetNameFromAttribute<NM::Color *>>::vfunc_0 (110 bytes)
extern "C" void ext_005A07A0();

extern "C" __declspec(naked) int __fastcall fn_0059B070(void* self, int edx_unused, int a1) {
    __asm {
        sub esp, 8
        cmp dword ptr [ecx + 0xc], 0
        jne L_nonempty
        xor eax, eax
        add esp, 8
        ret 4
    L_nonempty:
        mov eax, dword ptr [esp + 0xc]
        push ebx
        push ebp
        push esi
        push edi
        lea esi, [ecx + 4]
        push eax
        lea ecx, [esp + 0x14]
        push ecx
        mov ecx, esi
        call ext_005A07A0
        mov edi, dword ptr [esp + 0x10]
        test edi, edi
        mov ebx, dword ptr [esi + 4]
        mov ebp, dword ptr [mem_00925134]
        je L_inv1
        cmp edi, esi
        je L_ok1
    L_inv1:
        call ebp
    L_ok1:
        mov esi, dword ptr [esp + 0x14]
        cmp esi, ebx
        je L_notfound
        test edi, edi
        jne L_ok2
        call ebp
    L_ok2:
        cmp esi, dword ptr [edi + 4]
        jne L_ok3
        call ebp
    L_ok3:
        pop edi
        lea eax, [esi + 0x28]
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 4
    L_notfound:
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 8
        ret 4
    }
}
