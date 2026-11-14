// Decompiled translation unit: src/SeverEventTypes/DisableChildren.cpp

extern "C" void ext_00528BF0();
extern "C" void ext_00594000();
extern "C" void ext_0059A140();
extern "C" void ext_005EED30();
extern "C" void ext_006A5C5C();
extern "C" int mem_00925134;

// [0x004C84B0] SeverEventTypes::DisableChildren::vfunc_0 (642 bytes)
extern "C" __declspec(naked) void __fastcall fn_004C84B0(void* self) {
    __asm {
        push -1
        push 0x87ba98
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 2Ch
        push ebx
        push ebp
        lea ebp, [ecx + 4]
        push esi
        mov esi, dword ptr [ebp + 4]
        cmp esi, dword ptr [ebp + 8]
        push edi
        mov dword ptr [esp + 10h], ebp
        jbe L_004C84E1
        call dword ptr [mem_00925134]
    L_004C84E1:
        mov edi, ebp
        mov ebx, esi
    L_004C84E5:
        mov esi, dword ptr [ebp + 8]
        cmp dword ptr [ebp + 4], esi
        mov dword ptr [esp + 20h], ebx
        jbe L_004C84F7
        call dword ptr [mem_00925134]
    L_004C84F7:
        test edi, edi
        je L_004C84FF
        cmp edi, ebp
        je L_004C8505
    L_004C84FF:
        call dword ptr [mem_00925134]
    L_004C8505:
        cmp ebx, esi
        je L_004C871F
        call ext_00594000
        xor ebp, ebp
        cmp edi, ebp
        mov esi, eax
        jne L_004C8520
        call dword ptr [mem_00925134]
    L_004C8520:
        cmp ebx, dword ptr [edi + 8]
        jb L_004C852B
        call dword ptr [mem_00925134]
    L_004C852B:
        mov eax, dword ptr [ebx]
        mov eax, dword ptr [eax + 22Ch]
        add esi, 168h
        push esi
        push 1
        push 2000h
        lea ecx, [eax + 0Ch]
        call ext_00528BF0
        mov dword ptr [esp + 30h], ebp
        mov dword ptr [esp + 34h], ebp
        mov dword ptr [esp + 38h], ebp
        cmp ebx, dword ptr [edi + 8]
        mov dword ptr [esp + 44h], ebp
        jb L_004C8564
        call dword ptr [mem_00925134]
    L_004C8564:
        lea ecx, [esp + 2Ch]
        push ecx
        mov ecx, dword ptr [ebx]
        call ext_005EED30
        cmp ebx, dword ptr [edi + 8]
        jb L_004C857B
        call dword ptr [mem_00925134]
    L_004C857B:
        mov esi, dword ptr [esp + 30h]
        cmp esi, ebp
        mov edx, dword ptr [esp + 34h]
        je L_004C85AA
        mov ecx, dword ptr [esp + 38h]
        mov eax, edx
        sub eax, esi
        sub ecx, esi
        sar eax, 2
        sar ecx, 2
        cmp eax, ecx
        jae L_004C85AA
        mov ecx, dword ptr [ebx]
        mov eax, edx
        add eax, 4
        mov dword ptr [edx], ecx
        mov dword ptr [esp + 34h], eax
        jmp L_004C85CD
    L_004C85AA:
        cmp esi, edx
        mov edi, edx
        jbe L_004C85B6
        call dword ptr [mem_00925134]
    L_004C85B6:
        push ebx
        lea eax, [esp + 30h]
        push edi
        push eax
        lea edx, [esp + 30h]
        push edx
        mov ecx, eax
        call ext_0059A140
        mov eax, dword ptr [esp + 34h]
    L_004C85CD:
        mov esi, dword ptr [esp + 30h]
        cmp esi, eax
        jbe L_004C85DF
        call dword ptr [mem_00925134]
        mov eax, dword ptr [esp + 34h]
    L_004C85DF:
        lea ecx, [esp + 2Ch]
        mov edi, ecx
        mov dword ptr [esp + 14h], edi
        mov ebp, esi
        jmp L_004C85F0
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
    L_004C85F0:
        cmp dword ptr [esp + 30h], eax
        mov esi, eax
        jbe L_004C85FE
        call dword ptr [mem_00925134]
    L_004C85FE:
        test edi, edi
        je L_004C860A
        lea eax, [esp + 2Ch]
        cmp edi, eax
        je L_004C8610
    L_004C860A:
        call dword ptr [mem_00925134]
    L_004C8610:
        cmp ebp, esi
        je L_004C86DF
        mov eax, dword ptr [esp + 10h]
        cmp ebx, dword ptr [eax + 8]
        jb L_004C8627
        call dword ptr [mem_00925134]
    L_004C8627:
        mov ecx, dword ptr [ebx]
        mov edx, dword ptr [ecx + 18Ch]
        mov edi, dword ptr [edx + 5ECh]
        mov esi, dword ptr [edi + 1Ch]
        add edi, 18h
        cmp esi, dword ptr [edi + 8]
        jbe L_004C8646
        call dword ptr [mem_00925134]
    L_004C8646:
        mov ebx, dword ptr [edi + 8]
        cmp dword ptr [edi + 4], ebx
        jbe L_004C8654
        call dword ptr [mem_00925134]
    L_004C8654:
        cmp esi, ebx
        je L_004C86B2
        mov ebx, dword ptr [esp + 14h]
        test ebx, ebx
        jne L_004C8666
        call dword ptr [mem_00925134]
    L_004C8666:
        cmp ebp, dword ptr [ebx + 8]
        jb L_004C8671
        call dword ptr [mem_00925134]
    L_004C8671:
        cmp esi, dword ptr [edi + 8]
        mov eax, dword ptr [ebp]
        mov ebx, dword ptr [eax + 234h]
        jb L_004C8685
        call dword ptr [mem_00925134]
    L_004C8685:
        mov ecx, dword ptr [esi]
        cmp dword ptr [ecx + 4], ebx
        jne L_004C86A2
        cmp esi, dword ptr [edi + 8]
        jb L_004C8697
        call dword ptr [mem_00925134]
    L_004C8697:
        mov ecx, dword ptr [esi]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 44h]
        push 0
        call eax
    L_004C86A2:
        cmp esi, dword ptr [edi + 8]
        jb L_004C86AD
        call dword ptr [mem_00925134]
    L_004C86AD:
        add esi, 4
        jmp L_004C8646
    L_004C86B2:
        mov esi, dword ptr [esp + 14h]
        test esi, esi
        jne L_004C86C0
        call dword ptr [mem_00925134]
    L_004C86C0:
        cmp ebp, dword ptr [esi + 8]
        jb L_004C86CB
        call dword ptr [mem_00925134]
    L_004C86CB:
        mov eax, dword ptr [esp + 34h]
        mov ebx, dword ptr [esp + 20h]
        mov edi, dword ptr [esp + 14h]
        add ebp, 4
        jmp L_004C85F0
    L_004C86DF:
        mov eax, dword ptr [esp + 30h]
        test eax, eax
        mov dword ptr [esp + 44h], -1
        je L_004C86F8
        push eax
        call ext_006A5C5C
        add esp, 4
    L_004C86F8:
        mov edi, dword ptr [esp + 10h]
        xor eax, eax
        cmp ebx, dword ptr [edi + 8]
        mov dword ptr [esp + 30h], eax
        mov dword ptr [esp + 34h], eax
        mov dword ptr [esp + 38h], eax
        jb L_004C8715
        call dword ptr [mem_00925134]
    L_004C8715:
        add ebx, 4
        mov ebp, edi
        jmp L_004C84E5
    L_004C871F:
        mov ecx, dword ptr [esp + 3Ch]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 38h
        ret
    }
}
