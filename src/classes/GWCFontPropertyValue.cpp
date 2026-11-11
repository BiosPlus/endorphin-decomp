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
