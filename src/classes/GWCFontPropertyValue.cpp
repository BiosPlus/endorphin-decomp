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
