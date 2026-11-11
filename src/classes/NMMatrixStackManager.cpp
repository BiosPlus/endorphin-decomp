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
