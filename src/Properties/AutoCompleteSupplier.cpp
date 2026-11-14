// Decompiled translation unit: src/Properties/AutoCompleteSupplier.cpp

// [0x0041CBF0] Properties::AutoCompleteSupplier::vfunc_1 (59 bytes)
extern "C" void ext_00660280();
extern "C" int mem_00924FE4;

extern "C" __declspec(naked) void* __fastcall fn_0041CBF0(void* self, int edx_unused, void* a1) {
    __asm {
        push ecx
        push esi
        mov dword ptr [esp + 0x4], 0x0
        call ext_00660280
        test eax, eax
        mov esi, dword ptr [esp + 0xc]
        je null_0041CBF0
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx]
        push esi
        call eax
        mov eax, esi
        pop esi
        pop ecx
        ret 0x4
null_0041CBF0:
        push 0x928b5d
        mov ecx, esi
        call dword ptr [mem_00924FE4]
        mov eax, esi
        pop esi
        pop ecx
        ret 0x4
    }
}

// [0x0041CC30] Properties::AutoCompleteSupplier::vfunc_2 (60 bytes)
extern "C" __declspec(naked) void* __fastcall fn_0041CC30(void* self, int edx_unused, void* a1) {
    __asm {
        push ecx
        push esi
        mov dword ptr [esp + 0x4], 0x0
        call ext_00660280
        test eax, eax
        mov esi, dword ptr [esp + 0xc]
        je null_0041CC30
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 0x4]
        push esi
        call eax
        mov eax, esi
        pop esi
        pop ecx
        ret 0x4
null_0041CC30:
        push 0x928b5d
        mov ecx, esi
        call dword ptr [mem_00924FE4]
        mov eax, esi
        pop esi
        pop ecx
        ret 0x4
    }
}

// [0x0041E210] Properties::AutoCompleteSupplier::vfunc_3 (488 bytes)
extern "C" void ext_0041DA50();
extern "C" void ext_0041E0D0();
extern "C" void ext_00660280();
extern "C" void ext_00660870();
extern "C" void ext_006737B0();
extern "C" void ext_00673830();
extern "C" void ext_006A5C5C();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;
extern "C" int mem_00925134;
extern "C" int mem_00924FE0;

extern "C" __declspec(naked) void __fastcall fn_0041E210(void* self, int edx_unused, void* a1, void* a2, void* a3, void* a4) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -0x1
        push 0x8776c4
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x88
        push ebx
        push edi
        call ext_00660280
        mov edi, eax
        xor ebx, ebx
        cmp edi, ebx
        je end_0041E210
        mov eax, dword ptr [esp + 0xac]
        push esi
        push eax
        lea ecx, [esp + 0x48]
        call dword ptr [mem_00924FE4]
        push ebx
        push ebx
        lea ecx, [esp + 0x4c]
        push ecx
        lea ecx, [esp + 0x6c]
        mov dword ptr [esp + 0xa8], ebx
        call ext_00673830
        lea ecx, [esp + 0x44]
        mov byte ptr [esp + 0x9c], 0x2
        call dword ptr [mem_00924FF4]
        mov dword ptr [esp + 0x10], ebx
        mov dword ptr [esp + 0x14], ebx
        mov dword ptr [esp + 0x18], ebx
        mov esi, dword ptr [edi]
        lea edx, [esp + 0x60]
        push edx
        push ebx
        mov byte ptr [esp + 0xa4], 0x3
        add esi, 0x8
        call ext_0041DA50
        mov ecx, dword ptr [esp + 0xac]
        mov edx, dword ptr [esi]
        push eax
        lea eax, [esp + 0x18]
        push eax
        push ecx
        mov ecx, edi
        call edx
        mov ebx, dword ptr [esp + 0xa8]
        mov esi, dword ptr [ebx + 0x8]
        cmp dword ptr [ebx + 0x4], esi
        mov edi, dword ptr [mem_00925134]
        jbe L_2c9_0041E210
        call edi
L_2c9_0041E210:
        push ebp
        mov ebp, dword ptr [ebx + 0x4]
        cmp ebp, dword ptr [ebx + 0x8]
        jbe L_2d4_0041E210
        call edi
L_2d4_0041E210:
        push esi
        push ebx
        push ebp
        push ebx
        lea eax, [esp + 0x30]
        push eax
        mov ecx, ebx
        call ext_00660870
        mov esi, dword ptr [esp + 0x14]
        cmp esi, dword ptr [esp + 0x18]
        jbe L_2f0_0041E210
        call edi
L_2f0_0041E210:
        lea ebp, [esp + 0x10]
L_2f4_0041E210:
        mov eax, dword ptr [esp + 0x18]
        cmp dword ptr [esp + 0x14], eax
        mov dword ptr [esp + 0x20], eax
        jbe L_304_0041E210
        call edi
L_304_0041E210:
        test ebp, ebp
        je L_310_0041E210
        lea ecx, [esp + 0x10]
        cmp ebp, ecx
        je L_312_0041E210
L_310_0041E210:
        call edi
L_312_0041E210:
        cmp esi, dword ptr [esp + 0x20]
        je L_381_0041E210
        test ebp, ebp
        jne L_31e_0041E210
        call edi
L_31e_0041E210:
        cmp esi, dword ptr [ebp + 0x8]
        jb L_325_0041E210
        call edi
L_325_0041E210:
        cmp esi, dword ptr [ebp + 0x8]
        mov edi, dword ptr [esi + 0x1c]
        jb L_333_0041E210
        call dword ptr [mem_00925134]
L_333_0041E210:
        push esi
        lea ecx, [esp + 0x2c]
        call dword ptr [mem_00924FE0]
        mov dword ptr [esp + 0x44], edi
        lea edx, [esp + 0x28]
        push edx
        mov ecx, ebx
        mov byte ptr [esp + 0xa4], 0x4
        call ext_0041E0D0
        lea ecx, [esp + 0x28]
        mov byte ptr [esp + 0xa0], 0x3
        call dword ptr [mem_00924FF4]
        cmp esi, dword ptr [ebp + 0x8]
        jb L_373_0041E210
        call dword ptr [mem_00925134]
L_373_0041E210:
        mov edi, dword ptr [mem_00925134]
        add esi, 0x20
        jmp L_2f4_0041E210
L_381_0041E210:
        mov esi, dword ptr [esp + 0x14]
        test esi, esi
        mov byte ptr [esp + 0xa0], 0x2
        pop ebp
        je L_3bc_0041E210
        mov ebx, dword ptr [esp + 0x14]
        cmp esi, ebx
        je L_3af_0041E210
        _emit 0x8d
        _emit 0x9b
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
L_3a0_0041E210:
        mov ecx, esi
        call dword ptr [mem_00924FF4]
        add esi, 0x20
        cmp esi, ebx
        jne L_3a0_0041E210
L_3af_0041E210:
        mov eax, dword ptr [esp + 0x10]
        push eax
        call ext_006A5C5C
        add esp, 0x4
L_3bc_0041E210:
        xor eax, eax
        lea ecx, [esp + 0x60]
        mov dword ptr [esp + 0x10], eax
        mov dword ptr [esp + 0x14], eax
        mov dword ptr [esp + 0x18], eax
        mov dword ptr [esp + 0x9c], -0x1
        call ext_006737B0
        pop esi
end_0041E210:
        mov ecx, dword ptr [esp + 0x90]
        pop edi
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0x94
        ret 0x10
    }
}
