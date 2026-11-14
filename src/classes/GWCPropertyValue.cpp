// Decompiled translation unit: src/classes/GWCPropertyValue.cpp

extern "C" void ext_006A5C5C();
extern "C" void ext_006A5C62();
extern "C" void ext_0049AA40();
extern "C" void ext_0049AD40();
extern "C" void ext_00673C20();
extern "C" void ext_00673DD0();
extern "C" void ext_006ADE30();
extern "C" int mem_00924494;
extern "C" int mem_00924410;
extern "C" int mem_009242F0;
extern "C" int mem_009242F4;
extern "C" int mem_00924FF4;
extern "C" int mem_009242FC;
extern "C" int mem_00924FE8;

// [0x006AD980] GWCPropertyValue::vfunc_5 (617 bytes)
extern "C" __declspec(naked) void __fastcall fn_006AD980(void* self, int edx_unused, void* arg1, int arg2) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8b783b
        push eax
        mov dword ptr fs:[0], esp
        push esi
        mov esi, ecx
        cmp byte ptr [esi + 0x34], 1
        push edi
        jne L_6ada09
        mov eax, dword ptr [esi + 4]
        cmp eax, 1
        jne L_6ad9b9
        mov edi, dword ptr [esi + 8]
        test edi, edi
        je L_6ada09
        mov ecx, edi
        call dword ptr [mem_009242F4]
        push edi
        jmp L_6ada01

    L_6ad9b9:
        cmp eax, 2
        jne L_6ad9d0
        mov edi, dword ptr [esi + 8]
        test edi, edi
        je L_6ada09
        mov ecx, edi
        call dword ptr [mem_00924FF4]
        push edi
        jmp L_6ada01

    L_6ad9d0:
        cmp eax, 3
        je L_6ad9fd
        cmp eax, 4
        je L_6ad9fd
        cmp eax, 5
        je L_6ad9fd
        cmp eax, 6
        je L_6ad9fd
        cmp eax, 7
        je L_6ad9fd
        cmp eax, 8
        je L_6ad9fd
        cmp eax, 9
        je L_6ad9fd
        cmp eax, 0xa
        je L_6ad9fd
        cmp eax, 0xb
        jne L_6ada09

    L_6ad9fd:
        mov eax, dword ptr [esi + 8]
        push eax
    L_6ada01:
        call ext_006A5C5C
        add esp, 4

    L_6ada09:
        mov al, byte ptr [esp + 0x1c]
        mov byte ptr [esi + 0x34], al
        test al, al
        mov eax, dword ptr [esi + 4]
        jne L_6ada8f
        cmp eax, 1
        jne L_6ada25
    L_6ada1c:
        mov eax, dword ptr [esp + 0x18]
        jmp L_6adbd3

    L_6ada25:
        cmp eax, 2
        je L_6ada75
        cmp eax, 3
        je L_6ada4d
        cmp eax, 4
        je L_6ada1c
        cmp eax, 5
        je L_6ada75
        cmp eax, 6
        je L_6ada4d
        cmp eax, 7
        je L_6ada1c
        cmp eax, 8
        je L_6ada75
        cmp eax, 9
        jne L_6ada67

    L_6ada4d:
        mov edx, dword ptr [esp + 0x18]
        mov dword ptr [esi + 8], edx
        mov ecx, dword ptr [esp + 8]
        mov dword ptr fs:[0], ecx
        pop edi
        pop esi
        add esp, 0xc
        ret 8

    L_6ada67:
        cmp eax, 0xa
        je L_6ada1c
        cmp eax, 0xb
        jne L_6adbd6

    L_6ada75:
        mov ecx, dword ptr [esp + 0x18]
        mov dword ptr [esi + 8], ecx
        mov ecx, dword ptr [esp + 8]
        mov dword ptr fs:[0], ecx
        pop edi
        pop esi
        add esp, 0xc
        ret 8

    L_6ada8f:
        cmp eax, 1
        jne L_6adab6
        push 4
        call ext_006A5C62
        add esp, 4
        test eax, eax
        je L_6adaaf
        mov ecx, eax
        call dword ptr [mem_009242FC]
        jmp L_6adbd3

    L_6adaaf:
        xor eax, eax
        jmp L_6adbd3

    L_6adab6:
        cmp eax, 2
        jne L_6adae2
        push 0x1c
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp + 0x1c], eax
        test eax, eax
        mov dword ptr [esp + 0x10], 0
        je L_6adaaf
        mov ecx, eax
        call dword ptr [mem_00924FE8]
        jmp L_6adbd3

    L_6adae2:
        cmp eax, 3
        je L_6adba1
        cmp eax, 4
        je L_6adaf5
        cmp eax, 5
        jne L_6adb1b

    L_6adaf5:
        push 4
        call ext_006A5C62
        mov dword ptr [esi + 8], eax
        add esp, 4
        mov dword ptr [eax], 0
        mov ecx, dword ptr [esp + 8]
        mov dword ptr fs:[0], ecx
        pop edi
        pop esi
        add esp, 0xc
        ret 8

    L_6adb1b:
        cmp eax, 6
        jne L_6adb44
        push 8
        call ext_006A5C62
        fldz
        mov dword ptr [esi + 8], eax
        fstp qword ptr [eax]
        add esp, 4
        mov ecx, dword ptr [esp + 8]
        mov dword ptr fs:[0], ecx
        pop edi
        pop esi
        add esp, 0xc
        ret 8

    L_6adb44:
        cmp eax, 7
        jne L_6adb6d
        push 4
        call ext_006A5C62
        fldz
        mov dword ptr [esi + 8], eax
        fstp dword ptr [eax]
        add esp, 4
        mov ecx, dword ptr [esp + 8]
        mov dword ptr fs:[0], ecx
        pop edi
        pop esi
        add esp, 0xc
        ret 8

    L_6adb6d:
        cmp eax, 8
        je L_6adb77
        cmp eax, 9
        jne L_6adb9c

    L_6adb77:
        push 2
        call ext_006A5C62
        mov dword ptr [esi + 8], eax
        add esp, 4
        mov word ptr [eax], 0
        mov ecx, dword ptr [esp + 8]
        mov dword ptr fs:[0], ecx
        pop edi
        pop esi
        add esp, 0xc
        ret 8

    L_6adb9c:
        cmp eax, 0xa
        jne L_6adbc4
    L_6adba1:
        push 1
        call ext_006A5C62
        mov dword ptr [esi + 8], eax
        add esp, 4
        mov byte ptr [eax], 0
        mov ecx, dword ptr [esp + 8]
        mov dword ptr fs:[0], ecx
        pop edi
        pop esi
        add esp, 0xc
        ret 8

    L_6adbc4:
        cmp eax, 0xb
        jne L_6adbd6
        push 4
        call ext_006A5C62
        add esp, 4

    L_6adbd3:
        mov dword ptr [esi + 8], eax
    L_6adbd6:
        mov ecx, dword ptr [esp + 8]
        pop edi
        mov dword ptr fs:[0], ecx
        pop esi
        add esp, 0xc
        ret 8
    }
}

// [0x006AE360] GWCPropertyValue::vfunc_2 (913 bytes)
extern "C" __declspec(naked) void __fastcall fn_006AE360(void* self, int edx_unused, int arg1) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -0x40
        push -1
        push 0x8b757c
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x68
        push ebx
        push esi
        xor ebx, ebx
        mov esi, ecx
        mov dword ptr [esp + 0x34], ebx
        mov eax, dword ptr [esi + 4]
        cmp eax, 1
        push edi
        jne L_6ae3a5
        mov eax, dword ptr [esi + 8]
        mov esi, dword ptr [ebp + 8]
        push eax
        mov ecx, esi
        call dword ptr [mem_00924494]
        jmp L_6ae6db

    L_6ae3a5:
        cmp eax, 2
        jne L_6ae3c5
        mov esi, dword ptr [esi + 8]
        cmp dword ptr [esi + 0x18], 0x10
        jb L_6ae3bc
        mov esi, dword ptr [esi + 4]
        push esi
        jmp L_6ae6d0

    L_6ae3bc:
        add esi, 4
        push esi
        jmp L_6ae6d0

    L_6ae3c5:
        cmp eax, 3
        jne L_6ae443
        lea ecx, [esp + 0x30]
        call dword ptr [mem_009242FC]
        mov ecx, dword ptr [esi + 8]
        xor edx, edx
        cmp byte ptr [ecx], bl
        mov ecx, esi
        setne dl
        mov dword ptr [esp + 0x7c], ebx
        push edx
        call ext_006ADE30
        mov edx, dword ptr [eax]
        mov edx, dword ptr [edx + 8]
        lea ecx, [esp + 0x38]
        push ecx
        mov ecx, eax
        call edx
        mov byte ptr [esp + 0x7c], 1

    L_6ae3fd:
        mov eax, dword ptr [eax]
        push eax
        lea ecx, [esp + 0x34]
        push 0x9548e8
        push ecx
        call dword ptr [mem_00924410]
        mov byte ptr [esp + 0x88], bl

    L_6ae417:
        add esp, 0xc
        lea ecx, [esp + 0x38]
        call dword ptr [mem_009242F4]

    L_6ae424:
        lea edx, [esp + 0x30]
        push edx

    L_6ae429:
        mov esi, dword ptr [ebp + 8]
        mov ecx, esi
        call dword ptr [mem_00924494]
        lea ecx, [esp + 0x30]
        call dword ptr [mem_009242F4]
        jmp L_6ae6db

    L_6ae443:
        mov ebx, 4
        cmp eax, ebx
        jne L_6ae4c1
        lea ecx, [esp + 0x30]
        call dword ptr [mem_009242FC]
        mov ecx, esi
        mov dword ptr [esp + 0x7c], 2
        call ext_0049AA40
        test eax, eax
        mov eax, dword ptr [esi + 8]
        mov ecx, dword ptr [eax]
        push ecx
        jne L_6ae484
        lea edx, [esp + 0x34]
        push 0x929f48
        push edx
        call dword ptr [mem_00924410]
        add esp, 0xc
        jmp L_6ae424

    L_6ae484:
        mov ecx, esi
        call ext_006ADE30
        mov edx, dword ptr [eax]
        mov edx, dword ptr [edx + 8]
        lea ecx, [esp + 0x38]
        push ecx
        mov ecx, eax
        call edx
        mov eax, dword ptr [eax]
        push eax
        lea ecx, [esp + 0x34]
        push 0x9548e8
        push ecx
        mov byte ptr [esp + 0x88], 3
        call dword ptr [mem_00924410]
        mov byte ptr [esp + 0x88], 2
        jmp L_6ae417

    L_6ae4c1:
        cmp eax, 5
        jne L_6ae51c
        lea ecx, [esp + 0x30]
        call dword ptr [mem_009242FC]
        mov ecx, esi
        mov dword ptr [esp + 0x7c], ebx
        call ext_0049AA40
        test eax, eax
        mov eax, dword ptr [esi + 8]
        mov ecx, dword ptr [eax]
        push ecx
        jne L_6ae4fd
        lea edx, [esp + 0x34]
        push 0x9720e8
        push edx
        call dword ptr [mem_00924410]
        add esp, 0xc
        jmp L_6ae424

    L_6ae4fd:
        mov ecx, esi
        call ext_006ADE30
        mov edx, dword ptr [eax]
        mov edx, dword ptr [edx + 8]
        lea ecx, [esp + 0x38]
        push ecx
        mov ecx, eax
        call edx
        mov byte ptr [esp + 0x7c], 5
        jmp L_6ae3fd

    L_6ae51c:
        cmp eax, 6
        jne L_6ae559
        lea ecx, [esp + 0x30]
        call dword ptr [mem_009242FC]
        mov eax, dword ptr [esi + 8]
        fld qword ptr [eax]
        sub esp, 8
        fstp qword ptr [esp]
        lea ecx, [esp + 0x38]
        push 0x93c670
        push ecx
        mov dword ptr [esp + 0x8c], 6
        call dword ptr [mem_00924410]
        add esp, 0x10
        jmp L_6ae424

    L_6ae559:
        cmp eax, 7
        jne L_6ae596
        lea ecx, [esp + 0x30]
        call dword ptr [mem_009242FC]
        mov eax, dword ptr [esi + 8]
        fld dword ptr [eax]
        sub esp, 8
        fstp qword ptr [esp]
        lea ecx, [esp + 0x38]
        push 0x9910e0
        push ecx
        mov dword ptr [esp + 0x8c], 7
        call dword ptr [mem_00924410]
        add esp, 0x10
        jmp L_6ae424

    L_6ae596:
        cmp eax, 8
        jne L_6ae5d4
        lea ecx, [esp + 0x30]
        call dword ptr [mem_009242FC]
        mov eax, dword ptr [esi + 8]
        movsx ecx, word ptr [eax]
        push ecx
        lea edx, [esp + 0x34]
        push 0x9910dc
        push edx
        mov dword ptr [esp + 0x88], 8
        call dword ptr [mem_00924410]
        add esp, 0xc
        lea eax, [esp + 0x30]
        push eax
        jmp L_6ae429

    L_6ae5d4:
        cmp eax, 9
        jne L_6ae612
        lea ecx, [esp + 0x30]
        call dword ptr [mem_009242FC]
        mov ecx, dword ptr [esi + 8]
        movzx edx, word ptr [ecx]
        push edx
        lea eax, [esp + 0x34]
        push 0x9910d8
        push eax
        mov dword ptr [esp + 0x88], 9
        call dword ptr [mem_00924410]
        add esp, 0xc
        lea ecx, [esp + 0x30]
        push ecx
        jmp L_6ae429

    L_6ae612:
        cmp eax, 0xa
        jne L_6ae64b
        lea ecx, [esp + 0x30]
        call dword ptr [mem_009242FC]
        mov edx, dword ptr [esi + 8]
        movzx eax, byte ptr [edx]
        push eax
        lea ecx, [esp + 0x34]
        push 0x9910d4
        push ecx
        mov dword ptr [esp + 0x88], 0xa
        call dword ptr [mem_00924410]
        add esp, 0xc
        jmp L_6ae424

    L_6ae64b:
        cmp eax, 0xb
        jne L_6ae6cb
        mov eax, dword ptr [esi + 0x10]
        mov eax, dword ptr [eax]
        lea edi, [esi + 0xc]
        mov dword ptr [esp + 0x3c], eax
        mov dword ptr [esp + 0x38], edi
        mov dword ptr [esp + 0x30], edi

    L_6ae664:
        mov ecx, dword ptr [edi + 4]
        lea edx, [esp + 0x30]
        mov dword ptr [esp + 0x34], ecx
        push edx
        lea ecx, [esp + 0x3c]
        call ext_0049AD40
        test al, al
        je L_6ae6cb
        lea ecx, [esp + 0x38]
        call ext_00673DD0
        mov ecx, dword ptr [esi + 8]
        mov edx, dword ptr [eax + 0x1c]
        cmp edx, dword ptr [ecx]
        lea ecx, [esp + 0x38]
        je L_6ae69b
        call ext_00673C20
        jmp L_6ae664

    L_6ae69b:
        call ext_00673DD0
        cmp dword ptr [eax + 0x18], 0x10
        jb L_6ae6ab
        mov eax, dword ptr [eax + 4]
        jmp L_6ae6ae

    L_6ae6ab:
        add eax, 4

    L_6ae6ae:
        push eax
        lea ecx, [esp + 0x34]
        call dword ptr [mem_009242F0]
        lea eax, [esp + 0x30]
        mov dword ptr [esp + 0x7c], 0xb
        push eax
        jmp L_6ae429

    L_6ae6cb:
        push 0x928b5d

    L_6ae6d0:
        mov esi, dword ptr [ebp + 8]
        mov ecx, esi
        call dword ptr [mem_009242F0]

    L_6ae6db:
        mov ecx, dword ptr [esp + 0x74]
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        pop ebx
        mov esp, ebp
        pop ebp
        ret 4
    }
}
