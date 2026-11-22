// Decompiled translation unit: src/classes/NodeView.cpp

extern "C" bool __fastcall ext_00584C00(void* self);

struct NodeViewVt {
    void* v0;
    void* v1;
    bool (__thiscall *v2)(void* self, void* a, bool b);
};

// [0x004444E0] NodeView::vfunc_1_off_150 (49 bytes)
extern "C" bool __fastcall fn_004444E0(void* self, int edx_unused, void* arg) {
    if (!arg) {
        return false;
    }
    NodeViewVt* vt = *(NodeViewVt**)self;
    return vt->v2(self, arg, !ext_00584C00(arg));
}

// [0x00444520] NodeView::vfunc_2_off_150 (307 bytes)
extern "C" void ext_00430310();
extern "C" void ext_006A6E9E();
extern "C" int mem_00ACDB40;

extern "C" __declspec(naked) void __stdcall fn_00444520(void* a1, void* a2) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        test esi, esi
        jne L_nonnull
        xor al, al
        pop esi
        ret 0x8
    L_nonnull:
        mov eax, dword ptr [esi + 0xc]
        mov edx, dword ptr [esp + 0xc]
        mov eax, dword ptr [eax + 0x20]
        lea ecx, [esi + 0xc]
        push edx
        call eax
        push 0x0
        push 0xa2fc50
        push 0xa2e2bc
        push 0x0
        push esi
        call ext_006A6E9E
        add esp, 0x14
        test eax, eax
        je L_c1
        push 0x5
        jmp L_end
    L_c1:
        push 0x0
        push 0xa2fc34
        push 0xa2e2bc
        push 0x0
        push esi
        call ext_006A6E9E
        add esp, 0x14
        test eax, eax
        je L_c2
        push 0x7
        jmp L_end
    L_c2:
        push 0x0
        push 0xa2fc0c
        push 0xa2e2bc
        push 0x0
        push esi
        call ext_006A6E9E
        add esp, 0x14
        test eax, eax
        je L_c3
        push 0x1
        jmp L_end
    L_c3:
        push 0x0
        push 0xa2fbe4
        push 0xa2e2bc
        push 0x0
        push esi
        call ext_006A6E9E
        add esp, 0x14
        test eax, eax
        je L_c4
        push 0x2
        jmp L_end
    L_c4:
        push 0x0
        push 0xa2fbbc
        push 0xa2e2bc
        push 0x0
        push esi
        call ext_006A6E9E
        add esp, 0x14
        test eax, eax
        je L_c5
        push 0x4
        jmp L_end
    L_c5:
        push 0x0
        push 0xa2fb9c
        push 0xa2e2bc
        push 0x0
        push esi
        call ext_006A6E9E
        add esp, 0x14
        test eax, eax
        je L_c6
        push 0xa
        jmp L_end
    L_c6:
        push 0x0
        push 0xa2fb78
        push 0xa2e2bc
        push 0x0
        push esi
        call ext_006A6E9E
        add esp, 0x14
        test eax, eax
        push 0x0
        jne L_end
        push 0xa2fb54
        push 0xa2e2bc
        push eax
        push esi
        call ext_006A6E9E
        add esp, 0x14
        test eax, eax
        je L_c7
        push 0xb
        jmp L_end
    L_c7:
        push 0xf
    L_end:
        mov ecx, dword ptr [mem_00ACDB40]
        call ext_00430310
        mov ecx, esi
        call ext_00584C00
        pop esi
        ret 0x8
    }
}

// [0x00446760] NodeView::vfunc_0_off_144 (41 bytes)
extern "C" void ext_00444480();
extern "C" void ext_00446710();

extern "C" void __fastcall fn_00446760(void* self, int edx_unused, int a1) {
    if (a1 == 1) {
        void* p = (char*)self - 0x144;
        reinterpret_cast<void (__fastcall*)(void*)>(ext_00446710)(p);
    } else if (a1 == 0) {
        void* p = (char*)self - 0x144;
        reinterpret_cast<void (__fastcall*)(void*)>(ext_00444480)(p);
    }
}

extern "C" void ext_004447E0();
extern "C" void ext_0045C1C0();
extern "C" void ext_0045C980();
extern "C" void ext_0045CA40();
extern "C" void ext_006A6E9E();
extern "C" int mem_009256CC;
extern "C" int mem_00925134;

// [0x00445F80] NodeView::vfunc_0_off_148 (250 bytes)
extern "C" __declspec(naked) void __fastcall fn_00445F80(void* self) {
    __asm {
        sub esp, 0x8
        push edi
        mov edi, ecx
        mov eax, dword ptr [edi - 0x128]
        push eax
        mov dword ptr [esp + 0xc], edi
        call dword ptr [mem_009256CC]
        test eax, eax
        je L_exit

        push ebx
        push ebp
        lea ebp, [edi + 0x14]
        push esi
        mov ecx, ebp
        mov byte ptr [edi + 0x70], 0x0
        call ext_0045C1C0
        mov ebx, dword ptr [esp + 0x1c]
        mov esi, dword ptr [ebx + 0x4]
        test esi, esi
        mov dword ptr [esp + 0x10], 0x0
        je L_empty

        mov eax, dword ptr [ebx + 0x8]
        mov ecx, eax
        sub ecx, esi
        sar ecx, 0x2
        je L_empty

        cmp esi, eax
        jbe L_start_loop
        call dword ptr [mem_00925134]

    L_start_loop:
        mov edi, esi

    L_loop:
        mov esi, dword ptr [ebx + 0x8]
        cmp dword ptr [ebx + 0x4], esi
        jbe L_ok1
        call dword ptr [mem_00925134]

    L_ok1:
        cmp edi, esi
        je L_after_loop

        cmp edi, dword ptr [ebx + 0x8]
        jb L_ok2
        call dword ptr [mem_00925134]

    L_ok2:
        mov edx, dword ptr [edi]
        push 0x0
        push 0xa2e2bc
        push 0xa2e2d8
        push 0x0
        push edx
        call ext_006A6E9E
        mov esi, eax
        add esp, 0x14
        test esi, esi
        je L_skip_call

        push esi
        mov ecx, ebp
        call ext_0045CA40
        mov dword ptr [esp + 0x10], esi

    L_skip_call:
        cmp edi, dword ptr [ebx + 0x8]
        jb L_ok3
        call dword ptr [mem_00925134]

    L_ok3:
        add edi, 0x4
        jmp L_loop

    L_after_loop:
        mov eax, dword ptr [esp + 0x10]
        test eax, eax
        je L_no_match

        push eax
        mov ecx, ebp
        call ext_0045C980
        mov edi, dword ptr [esp + 0x14]
        pop esi
        pop ebp
        pop ebx
        mov byte ptr [edi + 0x70], 0x1
        pop edi
        add esp, 0x8
        ret 0x4

    L_no_match:
        mov edi, dword ptr [esp + 0x14]

    L_empty:
        lea ecx, [edi - 0x148]
        call ext_004447E0
        pop esi
        pop ebp
        mov byte ptr [edi + 0x70], 0x1
        pop ebx

    L_exit:
        pop edi
        add esp, 0x8
        ret 0x4
    }
}

// [0x00446990] NodeView::vfunc_0_off_150 (1790 bytes)
extern "C" void ext_00430310();
extern "C" void ext_004444C0();
extern "C" void ext_00446790();
extern "C" void ext_0045C240();
extern "C" void ext_00584A10();
extern "C" void ext_00584C20();
extern "C" void ext_005867A0();
extern "C" void ext_006A6166();
extern "C" void ext_006A616C();
extern "C" void ext_006A65E0();
extern "C" void ext_006A6E9E();
extern "C" int mem_00924FE0;
extern "C" int mem_00924FC0;
extern "C" int mem_00924FDC;
extern "C" int mem_00925630;
extern "C" int mem_00925638;
extern "C" int mem_00924FF0;
extern "C" int mem_00925634;
extern "C" int mem_009256D0;
extern "C" int mem_0092562C;
extern "C" int mem_00ACDB40;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00446990(void* self) {
    __asm {
        push -0x1
        push 0x87bf81
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x38
        push ebx
        push esi
        push edi
        mov edi, dword ptr [esp + 0x54]
        xor ebx, ebx
        cmp edi, ebx
        mov esi, ecx
        mov dword ptr [esp + 0xc], esi
        jne L_4469d1
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        mov ecx, dword ptr [esp + 0x38]
        mov dword ptr fs:[0x0], ecx
        add esp, 0x44
        ret 0x8

    L_4469d1:
        mov ecx, edi
        call ext_00584A10
        push eax
        lea ecx, [esp + 0x2c]
        call dword ptr [mem_00924FE0]
        lea eax, [esp + 0x28]
        push 0x928b5d
        push eax
        mov dword ptr [esp + 0x54], ebx
        call dword ptr [mem_00924FC0]
        add esp, 0x8
        test al, al
        je L_446a12
        mov edx, dword ptr [edi]
        mov eax, dword ptr [edx + 0x24]
        mov ecx, edi
        call eax
        push eax
        lea ecx, [esp + 0x2c]
        call dword ptr [mem_00924FDC]

    L_446a12:
        mov ecx, dword ptr [esp + 0x58]
        mov edx, dword ptr [esi + 0x2c]
        push ebp
        push ecx
        push edx
        call dword ptr [mem_00925630]
        mov ebp, 0x92bd7c
        mov dword ptr [esp + 0x14], ebp
        mov dword ptr [esp + 0x18], ebx
        mov byte ptr [esp + 0x50], 0x1
        call dword ptr [mem_00925638]
        push eax
        lea ecx, [esp + 0x18]
        call ext_006A616C
        lea ecx, [esp + 0x2c]
        call dword ptr [mem_00924FF0]
        mov esi, dword ptr [mem_00925634]
        push eax
        mov eax, dword ptr [esp + 0x1c]
        push -0x1
        push 0x2
        push eax
        call esi
        mov ecx, dword ptr [esp + 0x18]
        push ebx
        push ebx
        push 0x800
        push ecx
        call esi
        mov ecx, edi
        call ext_00584C00
        test al, al
        je L_446a88
        mov edx, dword ptr [esp + 0x18]
        push 0x932b48
        push 0x3
        push ebx
        push edx
        jmp L_446a95

    L_446a88:
        mov eax, dword ptr [esp + 0x18]
        push 0x932b40
        push 0x2
        push ebx
        push eax

    L_446a95:
        call esi
        mov ecx, dword ptr [esp + 0x18]
        push 0x932b34
        push 0x4
        push ebx
        push ecx
        call esi
        mov edx, dword ptr [esp + 0x18]
        push 0x932b28
        push 0x5
        push ebx
        push edx
        call esi
        mov eax, dword ptr [esp + 0x18]
        push ebx
        push ebx
        push 0x800
        push eax
        call esi
        mov dword ptr [esp + 0x24], ebp
        mov dword ptr [esp + 0x28], ebx
        mov ebp, dword ptr [mem_009256D0]
        mov byte ptr [esp + 0x50], 0x2
        call ebp
        push eax
        lea ecx, [esp + 0x28]
        call ext_006A616C
        mov ecx, dword ptr [esp + 0x28]
        push 0x92ff18
        push 0x6
        push ebx
        push ecx
        call esi
        mov edx, dword ptr [esp + 0x28]
        push 0x92ff04
        push 0x9
        push ebx
        push edx
        call esi
        mov eax, dword ptr [esp + 0x28]
        push 0x92fef4
        push 0xa
        push ebx
        push eax
        call esi
        mov ecx, dword ptr [esp + 0x28]
        push 0x92f96c
        push 0xb
        push ebx
        push ecx
        call esi
        mov edx, dword ptr [esp + 0x28]
        push 0x92f95c
        push 0x7
        push ebx
        push edx
        call esi
        mov eax, dword ptr [esp + 0x28]
        push 0x92f94c
        push 0x8
        push ebx
        push eax
        call esi
        mov ecx, dword ptr [esp + 0x28]
        mov edx, dword ptr [esp + 0x18]
        push 0x932b1c
        push ecx
        push 0x10
        push edx
        call esi
        mov dword ptr [esp + 0x1c], 0x92bd7c
        mov dword ptr [esp + 0x20], ebx
        mov byte ptr [esp + 0x50], 0x3
        call ebp
        push eax
        lea ecx, [esp + 0x20]
        call ext_006A616C
        push 0x92ff18
        push 0x11
        mov eax, dword ptr [esp + 0x28]
        push ebx
        push eax
        call esi
        mov ecx, dword ptr [esp + 0x20]
        push 0x92ff04
        push 0x14
        push ebx
        push ecx
        call esi
        mov edx, dword ptr [esp + 0x20]
        push 0x92fef4
        push 0x15
        push ebx
        push edx
        call esi
        mov eax, dword ptr [esp + 0x20]
        push 0x92f96c
        push 0x16
        push ebx
        push eax
        call esi
        mov ecx, dword ptr [esp + 0x20]
        push 0x92f95c
        push 0x12
        push ebx
        push ecx
        call esi
        mov edx, dword ptr [esp + 0x20]
        push 0x92f94c
        push 0x13
        push ebx
        push edx
        call esi
        mov eax, dword ptr [esp + 0x20]
        mov ecx, dword ptr [esp + 0x18]
        push 0x932b10
        push eax
        push 0x10
        push ecx
        call esi
        mov edx, dword ptr [esp + 0x18]
        push 0x1
        push ebx
        push edx
        call dword ptr [mem_0092562C]
        mov eax, dword ptr [edi]
        mov edx, dword ptr [eax + 0x7c]
        mov ecx, edi
        call edx
        test al, al
        je L_446c2b
        mov eax, dword ptr [esp + 0x18]
        push ebx
        push ebx
        push 0x800
        push eax
        call esi
        mov ecx, edi
        call ext_00584C20
        test al, al
        je L_446c1c
        mov ecx, dword ptr [esp + 0x18]
        push 0x932afc
        push 0x1b
        push ebx
        push ecx
        jmp L_446c29

    L_446c1c:
        mov edx, dword ptr [esp + 0x18]
        push 0x932ae8
        push 0x1b
        push ebx
        push edx

    L_446c29:
        call esi

    L_446c2b:
        mov ebp, dword ptr [esp + 0x10]
        mov eax, dword ptr [esp + 0x5c]
        mov ecx, dword ptr [eax + 0x4]
        mov edx, dword ptr [eax]
        push ebx
        lea esi, [ebp - 0x150]
        push esi
        push ecx
        push edx
        push 0x102
        lea ecx, [esp + 0x28]
        call ext_006A65E0
        lea ecx, [eax - 0x2]
        cmp ecx, 0x19
        mov dword ptr [esp + 0x5c], eax
        ja L_447029
        movzx ecx, byte ptr [ecx + 0x4470ac]
        jmp dword ptr [ecx*4 + 0x447090]

        push 0x1
    L_446c70:
        mov edx, dword ptr [ebp]
        mov eax, dword ptr [edx + 0x8]
        push edi
        mov ecx, ebp
        call eax
        lea ecx, [ebp + 0xc]
        call ext_0045C240
        jmp L_447029

        push ebx
        jmp L_446c70

        push ebx
        mov ecx, edi
        call ext_005867A0
        push ebx
        push 0xa2fc50
        push 0xa2e2bc
        push ebx
        push edi
        call ext_006A6E9E
        add esp, 0x14
        test eax, eax
        jne L_446e48
        push ebx
        push 0xa2fc34
        push 0xa2e2bc
        push ebx
        push edi
        call ext_006A6E9E
        add esp, 0x14
        test eax, eax
        je L_446ce3

    L_446cc9:
        mov ecx, dword ptr [mem_00ACDB40]
        push 0x7
        call ext_00430310
        lea ecx, [ebp + 0xc]
        call ext_0045C240
        jmp L_447029

    L_446ce3:
        push ebx
        push 0xa2fc0c
        push 0xa2e2bc
        push ebx
        push edi
        call ext_006A6E9E
        add esp, 0x14
        test eax, eax
        je L_446d16

    L_446cfc:
        mov ecx, dword ptr [mem_00ACDB40]
        push 0x1
        call ext_00430310
        lea ecx, [ebp + 0xc]
        call ext_0045C240
        jmp L_447029

    L_446d16:
        push ebx
        push 0xa2fbe4
        push 0xa2e2bc
        push ebx
        push edi
        call ext_006A6E9E
        add esp, 0x14
        test eax, eax
        je L_446d49

    L_446d2f:
        mov ecx, dword ptr [mem_00ACDB40]
        push 0x2
        call ext_00430310
        lea ecx, [ebp + 0xc]
        call ext_0045C240
        jmp L_447029

    L_446d49:
        push ebx
        push 0xa2fbbc
        push 0xa2e2bc
        push ebx
        push edi
        call ext_006A6E9E
        add esp, 0x14
        test eax, eax
        je L_446dc9

    L_446d62:
        mov ecx, dword ptr [mem_00ACDB40]
        push 0x4
        call ext_00430310
        mov ecx, dword ptr [mem_00ACDB40]
        push 0x1
        call ext_00430310
        mov ecx, dword ptr [mem_00ACDB40]
        push 0x2
        call ext_00430310
        mov ecx, dword ptr [mem_00ACDB40]
        push 0x7
        call ext_00430310
        mov ecx, dword ptr [mem_00ACDB40]
        push 0x5
        call ext_00430310
        mov ecx, dword ptr [mem_00ACDB40]
        push 0xa
        call ext_00430310
        mov ecx, dword ptr [mem_00ACDB40]
        push ebx
        call ext_00430310
        lea ecx, [ebp + 0xc]
        call ext_0045C240
        jmp L_447029

    L_446dc9:
        push ebx
        push 0xa2fb9c
        push 0xa2e2bc
        push ebx
        push edi
        call ext_006A6E9E
        add esp, 0x14
        test eax, eax
        je L_446dfc

    L_446de2:
        mov ecx, dword ptr [mem_00ACDB40]
        push 0xa
        call ext_00430310
        lea ecx, [ebp + 0xc]
        call ext_0045C240
        jmp L_447029

    L_446dfc:
        push ebx
        push 0xa2fb78
        push 0xa2e2bc
        push ebx
        push edi
        call ext_006A6E9E
        add esp, 0x14
        test eax, eax
        push ebx
        je L_446e62
        mov ecx, dword ptr [mem_00ACDB40]
        call ext_00430310
        mov ecx, dword ptr [mem_00ACDB40]
        push 0x1
        call ext_00430310
        mov ecx, dword ptr [mem_00ACDB40]
        push 0x2
        call ext_00430310
        mov ecx, dword ptr [mem_00ACDB40]
        push 0x7
        call ext_00430310

    L_446e48:
        mov ecx, dword ptr [mem_00ACDB40]
        push 0x5
        call ext_00430310
        lea ecx, [ebp + 0xc]
        call ext_0045C240
        jmp L_447029

    L_446e62:
        push 0xa2fb54
        push 0xa2e2bc
        push ebx
        push edi
        call ext_006A6E9E
        add esp, 0x14
        test eax, eax
        je L_446eee
        mov ecx, dword ptr [mem_00ACDB40]
        push 0x4
        call ext_00430310
        mov ecx, dword ptr [mem_00ACDB40]
        push 0x1
        call ext_00430310
        mov ecx, dword ptr [mem_00ACDB40]
        push 0x2
        call ext_00430310
        mov ecx, dword ptr [mem_00ACDB40]
        push 0x7
        call ext_00430310
        mov ecx, dword ptr [mem_00ACDB40]
        push 0x5
        call ext_00430310
        mov ecx, dword ptr [mem_00ACDB40]
        push 0xa
        call ext_00430310
        mov ecx, dword ptr [mem_00ACDB40]
        push ebx
        call ext_00430310
        mov ecx, dword ptr [mem_00ACDB40]
        push 0xb
        call ext_00430310
        lea ecx, [ebp + 0xc]
        call ext_0045C240
        jmp L_447029

    L_446eee:
        mov ecx, dword ptr [mem_00ACDB40]
        push 0xf
        call ext_00430310
        lea ecx, [ebp + 0xc]
        call ext_0045C240
        jmp L_447029

        mov edx, dword ptr [ebp]
        mov eax, dword ptr [edx + 0x8]
        push 0x1
        push edi
        mov ecx, ebp
        call eax
        push 0xe
        push edi
        mov ecx, esi
        call ext_00446790
        push 0x6
        push edi
        mov ecx, esi
        call ext_00446790
        push 0x7
        push edi
        mov ecx, esi
        call ext_00446790
        push 0x9
        push edi
        mov ecx, esi
        call ext_00446790
        push 0xa
        push edi
        mov ecx, esi
        call ext_00446790
        push 0xb
        push edi
        mov ecx, esi
        call ext_00446790
        push 0xe
        push edi
        mov ecx, esi
        call ext_00446790
        push 0xf
        push edi
        mov ecx, esi
        call ext_00446790
        push ebx
        push 0xa2fc50
        push 0xa2e2bc
        push ebx
        push edi
        call ext_006A6E9E
        add esp, 0x14
        test eax, eax
        jne L_446e48
        push ebx
        push 0xa2fc34
        push 0xa2e2bc
        push ebx
        push edi
        call ext_006A6E9E
        add esp, 0x14
        test eax, eax
        jne L_446cc9
        push ebx
        push 0xa2fc0c
        push 0xa2e2bc
        push ebx
        push edi
        call ext_006A6E9E
        add esp, 0x14
        test eax, eax
        jne L_446cfc
        push ebx
        push 0xa2fbe4
        push 0xa2e2bc
        push ebx
        push edi
        call ext_006A6E9E
        add esp, 0x14
        test eax, eax
        jne L_446d2f
        push ebx
        push 0xa2fbbc
        push 0xa2e2bc
        push ebx
        push edi
        call ext_006A6E9E
        add esp, 0x14
        test eax, eax
        jne L_446d62
        push ebx
        push 0xa2fb9c
        push 0xa2e2bc
        push ebx
        push edi
        call ext_006A6E9E
        add esp, 0x14
        test eax, eax
        jne L_446de2
        jmp L_446dfc

        push eax
        push edi
        mov ecx, esi
        call ext_00446790
        push edi
        mov ecx, esi
        call ext_004444C0

    L_447029:
        mov esi, 0x92bd7c
        lea ecx, [esp + 0x1c]
        mov byte ptr [esp + 0x50], 0x2
        mov dword ptr [esp + 0x1c], esi
        call ext_006A6166
        lea ecx, [esp + 0x24]
        mov byte ptr [esp + 0x50], 0x1
        mov dword ptr [esp + 0x24], esi
        call ext_006A6166
        lea ecx, [esp + 0x14]
        mov byte ptr [esp + 0x50], bl
        mov dword ptr [esp + 0x14], esi
        call ext_006A6166
        lea ecx, [esp + 0x2c]
        mov dword ptr [esp + 0x50], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x48]
        mov eax, dword ptr [esp + 0x5c]
        pop ebp
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0x44
        ret 0x8
    }
}
