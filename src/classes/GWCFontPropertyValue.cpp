// Decompiled translation unit: src/classes/GWCFontPropertyValue.cpp

// [0x006B4480] GWCFontPropertyValue::vfunc_5 (126 bytes)
extern "C" void ext_006A5C62();
extern "C" int mem_0092A5D4;

extern "C" __declspec(naked) void __fastcall fn_006B4480(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push esi
        mov esi, ecx
        cmp byte ptr [esi + 0x34], 0x1
        jne L_flag_store
        mov eax, dword ptr [esi + 0x4]
        cmp eax, 0x6e
        je L_release
        cmp eax, 0x78
        jne L_flag_store
L_release:
        mov ecx, dword ptr [esi + 0x40]
        test ecx, ecx
        je L_flag_store
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x4]
        push 1
        call edx
L_flag_store:
        mov al, byte ptr [esp + 0xc]
        mov byte ptr [esi + 0x34], al
        test al, al
        mov eax, dword ptr [esi + 0x4]
        jne L_flag_set
        cmp eax, 0x6e
        je L_store_arg
        cmp eax, 0x78
        jne L_done
L_store_arg:
        mov eax, dword ptr [esp + 0x8]
        mov dword ptr [esi + 0x40], eax
        pop esi
        ret 0x8
L_flag_set:
        cmp eax, 0x6e
        je L_alloc
        cmp eax, 0x78
        jne L_done
L_alloc:
        push 0x8
        call ext_006A5C62
        add esp, 0x4
        test eax, eax
        je L_null
        mov dword ptr [eax + 0x4], 0x0
        mov dword ptr [eax], offset mem_0092A5D4
        mov dword ptr [esi + 0x40], eax
        pop esi
        ret 0x8
L_null:
        xor eax, eax
        mov dword ptr [esi + 0x40], eax
L_done:
        pop esi
        ret 0x8
    }
}

// [0x006B4760] GWCFontPropertyValue::vfunc_4 (211 bytes)
extern "C" int mem_0092431C;
extern "C" int mem_00924300;
extern "C" int mem_00924080;
extern "C" int mem_009242F4;

extern "C" __declspec(naked) void __fastcall fn_006B4760(void* self, int edx_unused, void* a1, void* a2, void* a3, void* a4) {
    __asm {
        sub esp, 0x18
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 0x30], 0
        je short L_no_delegate

        mov edx, dword ptr [esp + 0x2c]
        mov ecx, dword ptr [esi + 0x30]
        mov eax, dword ptr [ecx]
        mov esi, dword ptr [esp + 0x20]
        mov eax, dword ptr [eax + 0x8]
        push edx
        mov edx, dword ptr [esp + 0x2c]
        push edx
        mov edx, dword ptr [esp + 0x2c]
        push edx
        push esi
        call eax
        mov eax, esi
        pop esi
        add esp, 0x18
        ret 0x10

L_no_delegate:
        push ebx
        mov ebx, dword ptr [esp + 0x2c]
        test ebx, ebx
        push ebp
        push edi
        mov edi, dword ptr [esp + 0x30]
        je short L_no_font

        mov edx, dword ptr [edi]
        mov eax, dword ptr [edx + 0x30]
        push ebx
        mov ecx, edi
        call eax
        mov ebp, eax
        jmp short L_get_str

L_no_font:
        mov ebp, dword ptr [esp + 0x34]

L_get_str:
        mov edx, dword ptr [esi]
        mov edx, dword ptr [edx + 0x8]
        lea eax, [esp + 0x34]
        push eax
        mov ecx, esi
        call edx
        mov esi, eax
        lea eax, [esp + 0x10]
        push eax
        mov ecx, esi
        call dword ptr [mem_0092431C]
        push eax
        mov ecx, esi
        call dword ptr [mem_00924300]
        mov ecx, dword ptr [edi + 0x8]
        push eax
        push ecx
        call dword ptr [mem_00924080]
        lea ecx, [esp + 0x34]
        call dword ptr [mem_009242F4]
        test ebx, ebx
        je short L_no_restore_font

        mov edx, dword ptr [edi]
        mov eax, dword ptr [edx + 0x30]
        push ebp
        mov ecx, edi
        call eax

L_no_restore_font:
        mov eax, dword ptr [esp + 0x38]
        mov esi, dword ptr [eax + 0x8]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [esp + 0x20], esi
        mov esi, dword ptr [eax + 0xc]
        mov eax, dword ptr [esp + 0x10]
        add ecx, 2
        lea edi, [eax + ecx]
        mov eax, dword ptr [esp + 0x2c]
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 0x4], edx
        mov dword ptr [eax + 0x8], edi
        pop edi
        pop ebp
        pop ebx
        mov dword ptr [eax + 0xc], esi
        pop esi
        add esp, 0x18
        ret 0x10
    }
}

// [0x006B4630] GWCFontPropertyValue::vfunc_1 (299 bytes)
extern "C" void ext_006B12F0();
extern "C" int mem_00924094;
extern "C" int mem_009240FC;
extern "C" int mem_00991A60;
extern "C" int mem_009242FC;
extern "C" int mem_00924410;
extern "C" int mem_00991A50;
extern "C" int mem_0092431C;
extern "C" int mem_00924300;
extern "C" int mem_009242F4;

extern "C" __declspec(naked) void __fastcall fn_006B4630(void* self, int edx_unused, int a1, int a2, int a3, int a4, int a5, int a6, int a7) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8b7a29
        push eax
        mov dword ptr fs:[0x0], esp
        add dword ptr [esp + 0x14], 0x2
        sub esp, 0x40
        push edi
        mov edi, ecx
        mov eax, dword ptr [edi + 0x4]
        cmp eax, 0x6e
        je L_body
        cmp eax, 0x78
        jne L_exit
L_body:
        mov eax, dword ptr [edi + 0x40]
        cmp dword ptr [eax + 0x4], 0x0
        je L_exit
        mov edx, dword ptr [eax + 0x4]
        push ebx
        push ebp
        push esi
        lea ecx, [esp + 0x14]
        push ecx
        push 0x3c
        push edx
        call dword ptr [mem_00924094]
        mov esi, dword ptr [esp + 0x60]
        mov eax, dword ptr [esi + 0x8]
        push 0x5a
        push eax
        call dword ptr [mem_009240FC]
        fild dword ptr [esp + 0x14]
        mov dword ptr [esp + 0x60], eax
        fild dword ptr [esp + 0x60]
        sub esp, 0x8
        fdiv qword ptr [mem_00991A60]
        fdivp st(1), st
        fstp qword ptr [esp]
        call ext_006B12F0
        add esp, 0x8
        lea ecx, [esp + 0x10]
        mov ebx, eax
        call dword ptr [mem_009242FC]
        mov eax, ebx
        cdq
        xor eax, edx
        sub eax, edx
        push eax
        lea ecx, [esp + 0x34]
        push ecx
        lea edx, [esp + 0x18]
        push offset mem_00991A50
        push edx
        mov dword ptr [esp + 0x68], 0x0
        call dword ptr [mem_00924410]
        add esp, 0x10
        cmp byte ptr [edi + 0x48], 0x0
        je L_no_flag
        mov ecx, dword ptr [edi + 0x44]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x38]
        push ecx
        mov ecx, esi
        call edx
        mov ebp, eax
        jmp L_after_flag
L_no_flag:
        mov ebp, dword ptr [esp + 0x60]
L_after_flag:
        mov ebx, dword ptr [esi]
        push 0x8024
        lea eax, [esp + 0x68]
        push eax
        lea ecx, [esp + 0x18]
        call dword ptr [mem_0092431C]
        push eax
        lea ecx, [esp + 0x1c]
        call dword ptr [mem_00924300]
        mov edx, dword ptr [ebx + 0x70]
        push eax
        mov ecx, esi
        call edx
        cmp byte ptr [edi + 0x48], 0x0
        je L_skip2
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x38]
        push ebp
        mov ecx, esi
        call edx
L_skip2:
        lea ecx, [esp + 0x10]
        call dword ptr [mem_009242F4]
        pop esi
        pop ebp
        pop ebx
L_exit:
        mov ecx, dword ptr [esp + 0x44]
        pop edi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x4c
        ret 0x1c
    }
}
