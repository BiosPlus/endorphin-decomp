// Decompiled translation unit: src/classes/NMMatrixStackManager.cpp

// [0x0054EA30] NMMatrixStackManager::vfunc_1 (77 bytes)
extern "C" int mem_00925134;
extern "C" int mem_009254B8;

extern "C" __declspec(naked) void __fastcall fn_0054EA30(void* self) {
    __asm {
        sub esp, 0x8
        push ebp
        mov ebp, dword ptr [mem_00925134]
        push esi
        lea esi, [ecx + 0x4]
        push edi
        mov edi, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], edi
        jbe L_54EA49
        call ebp
    L_54EA49:
        lea eax, [edi - 0x40]
        cmp eax, dword ptr [esi + 0x8]
        push ebx
        mov ebx, esi
        mov dword ptr [esp + 0x14], edi
        ja L_54EA5D
        cmp eax, dword ptr [esi + 0x4]
        jae L_54EA5F
    L_54EA5D:
        call ebp
    L_54EA5F:
        lea esi, [edi - 0x40]
        cmp esi, dword ptr [ebx + 0x8]
        pop ebx
        jb L_54EA6A
        call ebp
    L_54EA6A:
        push esi
        push 0xba6
        call dword ptr [mem_009254B8]
        pop edi
        pop esi
        pop ebp
        add esp, 0x8
        ret
    }
}

// [0x0054EB50] NMMatrixStackManager::vfunc_5 (83 bytes)
extern "C" int mem_009254B4;

extern "C" __declspec(naked) void __fastcall fn_0054EB50(void* self, int edx_unused, const float* m) {
    __asm {
        sub esp, 0x8
        push ebx
        mov ebx, dword ptr [mem_00925134]
        push esi
        lea esi, [ecx + 0x4]
        push edi
        mov edi, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], edi
        jbe L_54EB69
        call ebx
    L_54EB69:
        lea eax, [edi - 0x40]
        cmp eax, dword ptr [esi + 0x8]
        mov dword ptr [esp + 0x10], edi
        ja L_54EB7A
        cmp eax, dword ptr [esi + 0x4]
        jae L_54EB7C
    L_54EB7A:
        call ebx
    L_54EB7C:
        add edi, -0x40
        cmp edi, dword ptr [esi + 0x8]
        jb L_54EB86
        call ebx
    L_54EB86:
        mov eax, dword ptr [esp + 0x18]
        mov ecx, 0x10
        mov esi, eax
        rep movsd
        pop edi
        pop esi
        pop ebx
        add esp, 0x8
        mov dword ptr [esp + 0x4], eax
        jmp dword ptr [mem_009254B4]
    }
}

// [0x0054ECF0] NMMatrixStackManager::vfunc_3 (96 bytes)
extern "C" __declspec(naked) void __fastcall fn_0054ECF0(void* self) {
    __asm {
        mov eax, dword ptr [ecx + 0x8]
        sub esp, 0x8
        test eax, eax
        push ebp
        push esi
        lea esi, [ecx + 0x4]
        push edi
        je L_54ED12
        mov ecx, dword ptr [esi + 0x8]
        mov edx, ecx
        sub edx, eax
        sar edx, 0x6
        je L_54ED12
        add ecx, -0x40
        mov dword ptr [esi + 0x8], ecx
    L_54ED12:
        mov edi, dword ptr [esi + 0x8]
        cmp eax, edi
        mov ebp, dword ptr [mem_00925134]
        jbe L_54ED21
        call ebp
    L_54ED21:
        lea eax, [edi - 0x40]
        cmp eax, dword ptr [esi + 0x8]
        push ebx
        mov ebx, esi
        mov dword ptr [esp + 0x14], edi
        ja L_54ED35
        cmp eax, dword ptr [esi + 0x4]
        jae L_54ED37
    L_54ED35:
        call ebp
    L_54ED37:
        lea esi, [edi - 0x40]
        cmp esi, dword ptr [ebx + 0x8]
        pop ebx
        jb L_54ED42
        call ebp
    L_54ED42:
        push esi
        call dword ptr [mem_009254B4]
        pop edi
        pop esi
        pop ebp
        add esp, 0x8
        ret
    }
}

// [0x0054EC30] NMMatrixStackManager::vfunc_6 (121 bytes)
extern "C" int mem_00925134;
extern "C" int mem_009253D4;

extern "C" __declspec(naked) void __fastcall fn_0054EC30(void* self) {
    __asm {
        sub esp, 0x8
        push ebp
        mov ebp, dword ptr [mem_00925134]
        push esi
        lea esi, [ecx + 0x4]
        push edi
        mov edi, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], edi
        jbe L_54EC49
        call ebp
    L_54EC49:
        lea eax, [edi - 0x40]
        cmp eax, dword ptr [esi + 0x8]
        push ebx
        mov ebx, esi
        mov dword ptr [esp + 0x14], edi
        ja L_54EC5D
        cmp eax, dword ptr [esi + 0x4]
        jae L_54EC5F
    L_54EC5D:
        call ebp
    L_54EC5F:
        lea esi, [edi - 0x40]
        cmp esi, dword ptr [ebx + 0x8]
        pop ebx
        jb L_54EC6A
        call ebp
    L_54EC6A:
        fld1
        pop edi
        fst dword ptr [esi]
        fldz
        fst dword ptr [esi + 0x4]
        fst dword ptr [esi + 0x8]
        fst dword ptr [esi + 0xc]
        fst dword ptr [esi + 0x10]
        fst dword ptr [esi + 0x18]
        fst dword ptr [esi + 0x1c]
        fst dword ptr [esi + 0x20]
        fst dword ptr [esi + 0x24]
        fst dword ptr [esi + 0x2c]
        fst dword ptr [esi + 0x30]
        fst dword ptr [esi + 0x34]
        fstp dword ptr [esi + 0x38]
        fst dword ptr [esi + 0x14]
        fst dword ptr [esi + 0x28]
        fstp dword ptr [esi + 0x3c]
        pop esi
        pop ebp
        add esp, 0x8
        jmp dword ptr [mem_009253D4]
    }
}

// [0x0054EBB0] NMMatrixStackManager::vfunc_7 (125 bytes)
extern "C" int mem_00925134;
extern "C" int mem_009253D0;

extern "C" __declspec(naked) void __fastcall fn_0054EBB0(void* self, int edx_unused, const float* m) {
    __asm {
        sub esp, 0x8
        push ebp
        mov ebp, dword ptr [mem_00925134]
        push esi
        lea esi, [ecx + 0x4]
        push edi
        mov edi, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], edi
        jbe L_54EBC9
        call ebp
    L_54EBC9:
        lea eax, [edi - 0x40]
        cmp eax, dword ptr [esi + 0x8]
        push ebx
        mov ebx, esi
        mov dword ptr [esp + 0x14], edi
        ja L_54EBDD
        cmp eax, dword ptr [esi + 0x4]
        jae L_54EBDF
    L_54EBDD:
        call ebp
    L_54EBDF:
        lea esi, [edi - 0x40]
        cmp esi, dword ptr [ebx + 0x8]
        pop ebx
        jb L_54EBEA
        call ebp
    L_54EBEA:
        mov eax, dword ptr [esp + 0x18]
        fld dword ptr [eax]
        sub esp, 0xc
        fadd dword ptr [esi + 0x30]
        fstp dword ptr [esi + 0x30]
        fld dword ptr [esi + 0x34]
        fadd dword ptr [eax + 0x4]
        fstp dword ptr [esi + 0x34]
        fld dword ptr [eax + 0x8]
        fadd dword ptr [esi + 0x38]
        fstp dword ptr [esi + 0x38]
        fld dword ptr [eax + 0x8]
        fstp dword ptr [esp + 0x8]
        fld dword ptr [eax + 0x4]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [eax]
        fstp dword ptr [esp]
        call dword ptr [mem_009253D0]
        pop edi
        pop esi
        pop ebp
        add esp, 0x8
        ret 0x4
    }
}

// [0x0054EA80] NMMatrixStackManager::vfunc_4 (196 bytes)
extern "C" void ext_004875A0();

extern "C" __declspec(naked) void __fastcall fn_0054EA80(void* self, int edx_unused, const void* m) {
    __asm {
        sub esp, 0x48
        push ebx
        push ebp
        lea ebx, [ecx + 0x4]
        push esi
        mov esi, dword ptr [ebx + 0x8]
        cmp dword ptr [ebx + 0x4], esi
        push edi
        jbe L_54EA98
        call dword ptr [mem_00925134]
    L_54EA98:
        lea eax, [esi - 0x40]
        cmp eax, dword ptr [ebx + 0x8]
        mov edi, ebx
        mov dword ptr [esp + 0x14], esi
        ja L_54EAAB
        cmp eax, dword ptr [ebx + 0x4]
        jae L_54EAB1
    L_54EAAB:
        call dword ptr [mem_00925134]
    L_54EAB1:
        lea ebp, [esi - 0x40]
        cmp ebp, dword ptr [edi + 0x8]
        mov edi, dword ptr [mem_00925134]
        jb L_54EAC1
        call edi
    L_54EAC1:
        mov esi, dword ptr [ebx + 0x8]
        cmp dword ptr [ebx + 0x4], esi
        jbe L_54EACB
        call edi
    L_54EACB:
        lea eax, [esi - 0x40]
        cmp eax, dword ptr [ebx + 0x8]
        mov dword ptr [esp + 0x14], esi
        ja L_54EADC
        cmp eax, dword ptr [ebx + 0x4]
        jae L_54EADE
    L_54EADC:
        call edi
    L_54EADE:
        lea edi, [esi - 0x40]
        cmp edi, dword ptr [ebx + 0x8]
        jb L_54EAEC
        call dword ptr [mem_00925134]
    L_54EAEC:
        mov ecx, dword ptr [esp + 0x5c]
        push ebp
        lea eax, [esp + 0x1c]
        push eax
        call ext_004875A0
        mov ebp, dword ptr [mem_00925134]
        mov ecx, 0x10
        mov esi, eax
        rep movsd
        mov esi, dword ptr [ebx + 0x8]
        cmp dword ptr [ebx + 0x4], esi
        jbe L_54EB14
        call ebp
    L_54EB14:
        lea eax, [esi - 0x40]
        cmp eax, dword ptr [ebx + 0x8]
        mov edi, ebx
        mov dword ptr [esp + 0x14], esi
        ja L_54EB27
        cmp eax, dword ptr [ebx + 0x4]
        jae L_54EB29
    L_54EB27:
        call ebp
    L_54EB29:
        add esi, -0x40
        cmp esi, dword ptr [edi + 0x8]
        jb L_54EB33
        call ebp
    L_54EB33:
        push esi
        call dword ptr [mem_009254B4]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x48
        ret 0x4
    }
}

// [0x0054EEF0] NMMatrixStackManager::vfunc_2 (88 bytes)
extern "C" void ext_00484E90();
extern "C" int mem_00925134;
extern "C" __declspec(naked) void __fastcall fn_0054EEF0(void* self) {
    __asm {
        sub     esp, 0x48
        push    ebx
        push    ebp
        mov     ebp, dword ptr [mem_00925134]
        lea     ebx, [ecx + 0x4]
        push    esi
        mov     esi, dword ptr [ebx + 0x8]
        cmp     dword ptr [ebx + 0x4], esi
        push    edi
        jbe     loc_54EF0A
        call    ebp
    loc_54EF0A:
        lea     eax, [esi - 0x40]
        cmp     eax, dword ptr [ebx + 0x8]
        mov     edi, ebx
        mov     dword ptr [esp + 0x14], esi
        ja      loc_54EF1D
        cmp     eax, dword ptr [ebx + 0x4]
        jae     loc_54EF1F
    loc_54EF1D:
        call    ebp
    loc_54EF1F:
        add     esi, -0x40
        cmp     esi, dword ptr [edi + 0x8]
        jb      loc_54EF29
        call    ebp
    loc_54EF29:
        mov     ecx, 0x10
        lea     edi, [esp + 0x18]
        lea     eax, [esp + 0x18]
        rep     movsd
        push    eax
        mov     ecx, ebx
        call    ext_00484E90
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x48
        ret
    }
}
