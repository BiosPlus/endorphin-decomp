// Decompiled translation unit: src/classes/GWCPropertyValue.cpp

extern "C" void ext_006A5C5C();
extern "C" void ext_006A5C62();
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
