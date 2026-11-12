// Decompiled translation unit: src/classes/NullRelationship.cpp

// [0x00645A80] NullRelationship::vfunc_48 (78 bytes)
extern "C" __declspec(naked) int __fastcall fn_00645A80(void* self, int edx_unused, void* a1, int a2) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 0x8]
        mov dword ptr [esi + 0x68], 0x0
        mov eax, dword ptr [ecx + 0x22c]
        test eax, eax
        push edi
        je skip1
        mov eax, dword ptr [eax + 0x158]
        test eax, eax
        je skip1
        mov eax, dword ptr [eax + 0xac]
        mov dword ptr [esi + 0x68], eax
skip1:
        mov edx, dword ptr [ecx + 0x4]
        mov eax, dword ptr [esp + 0x10]
        mov edx, dword ptr [edx + 0x14]
        mov edi, dword ptr [esi]
        add ecx, 0x4
        push eax
        call edx
        push eax
        mov eax, dword ptr [edi + 0xac]
        mov ecx, esi
        call eax
        pop edi
        pop esi
        ret 0x8
    }
}

// [0x00645940] NullRelationship::vfunc_42 (177 bytes)
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_00645940(void* self, int edx_unused, void* a1) {
    __asm {
        push ecx
        push ebx
        mov ebx, dword ptr [mem_00925134]
        push esi
        push edi
        mov edi, dword ptr [esp + 0x14]
        fld dword ptr [edi]
        mov esi, ecx
        mov eax, dword ptr [esi + 0x10]
        fstp dword ptr [esp + 0x14]
        test eax, eax
        je call1
        mov ecx, dword ptr [esi + 0x14]
        sub ecx, eax
        mov eax, 0x2aaaaaab
        imul ecx
        sar edx, 0x2
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        jne store1
call1:
        call ebx
store1:
        fld dword ptr [esp + 0x14]
        mov ecx, dword ptr [esi + 0x10]
        fstp qword ptr [ecx]
        mov eax, dword ptr [esi + 0x10]
        test eax, eax
        fld dword ptr [edi + 0x4]
        fstp dword ptr [esp + 0x14]
        je call2
        mov ecx, dword ptr [esi + 0x14]
        sub ecx, eax
        mov eax, 0x2aaaaaab
        imul ecx
        sar edx, 0x2
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        cmp eax, 0x1
        ja store2
call2:
        call ebx
store2:
        fld dword ptr [esp + 0x14]
        mov edx, dword ptr [esi + 0x10]
        fstp qword ptr [edx + 0x18]
        mov eax, dword ptr [esi + 0x10]
        test eax, eax
        fld dword ptr [edi + 0x8]
        fstp dword ptr [esp + 0x14]
        je call3
        mov ecx, dword ptr [esi + 0x14]
        sub ecx, eax
        mov eax, 0x2aaaaaab
        imul ecx
        sar edx, 0x2
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        cmp eax, 0x2
        ja store3
call3:
        call ebx
store3:
        mov eax, dword ptr [esi + 0x10]
        fld dword ptr [esp + 0x14]
        pop edi
        fstp qword ptr [eax + 0x30]
        pop esi
        pop ebx
        pop ecx
        ret 0x4
    }
}

// [0x00645880] NullRelationship::vfunc_41 (179 bytes)
extern "C" __declspec(naked) void __fastcall fn_00645880(void* self, int edx_unused, void* a1) {
    __asm {
        push ebx
        mov ebx, dword ptr [mem_00925134]
        push esi
        push edi
        mov edi, dword ptr [esp + 0x10]
        fld dword ptr [edi]
        mov esi, ecx
        mov eax, dword ptr [esi + 0x10]
        fstp dword ptr [esp + 0x10]
        test eax, eax
        je call1
        mov ecx, dword ptr [esi + 0x14]
        sub ecx, eax
        mov eax, 0x2aaaaaab
        imul ecx
        sar edx, 0x2
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        cmp eax, 0x3
        ja store1
call1:
        call ebx
store1:
        fld dword ptr [esp + 0x10]
        mov eax, dword ptr [esi + 0x10]
        fstp qword ptr [eax + 0x48]
        mov eax, dword ptr [esi + 0x10]
        test eax, eax
        fld dword ptr [edi + 0x4]
        fstp dword ptr [esp + 0x10]
        je call2
        mov ecx, dword ptr [esi + 0x14]
        sub ecx, eax
        mov eax, 0x2aaaaaab
        imul ecx
        sar edx, 0x2
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        cmp eax, 0x4
        ja store2
call2:
        call ebx
store2:
        fld dword ptr [esp + 0x10]
        mov ecx, dword ptr [esi + 0x10]
        fstp qword ptr [ecx + 0x60]
        mov eax, dword ptr [esi + 0x10]
        test eax, eax
        fld dword ptr [edi + 0x8]
        fstp dword ptr [esp + 0x10]
        je call3
        mov ecx, dword ptr [esi + 0x14]
        sub ecx, eax
        mov eax, 0x2aaaaaab
        imul ecx
        sar edx, 0x2
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        cmp eax, 0x5
        ja store3
call3:
        call ebx
store3:
        mov edx, dword ptr [esi + 0x10]
        fld dword ptr [esp + 0x10]
        pop edi
        fstp qword ptr [edx + 0x78]
        pop esi
        pop ebx
        ret 0x4
    }
}
