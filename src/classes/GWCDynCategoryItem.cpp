// Decompiled translation unit: src/classes/GWCDynCategoryItem.cpp

// [0x006B03D0] GWCDynCategoryItem::vfunc_10 (167 bytes)
extern "C" void ext_006B0770();
extern "C" void ext_006AEC70();
extern "C" int mem_00925628;
extern "C" int mem_00925694;
extern "C" int mem_00B5D218;
extern "C" int mem_00B5D21C;
extern "C" __declspec(naked) void __fastcall fn_006B03D0(void* self, int edx_unused, void* a1) {
    __asm {
        sub esp, 0x20
        push esi
        mov esi, ecx
        lea eax, [esi + 0x90]
        test eax, eax
        je L_end
        cmp dword ptr [eax + 4], 0
        je L_end
        push ebx
        push edi
        lea eax, [esp + 0x1c]
        push eax
        lea ecx, [esp + 0x10]
        push ecx
        mov ecx, esi
        call ext_006B0770
        cmp byte ptr [esi + 0x88], 0
        mov edi, dword ptr [esp + 0x30]
        mov ebx, dword ptr [mem_00925628]
        je L_false
        mov edx, dword ptr [edi + 4]
        mov eax, dword ptr [edi]
        push edx
        push eax
        lea ecx, [esp + 0x14]
        push ecx
        call ebx
        test eax, eax
        je L_false
        push 1
        mov ecx, esi
        call ext_006AEC70
        mov edx, dword ptr [esi + 0xb0]
        mov eax, dword ptr [mem_00B5D218]
        push edx
        jmp L_send
    L_false:
        mov eax, dword ptr [edi + 4]
        mov ecx, dword ptr [edi]
        push eax
        push ecx
        lea edx, [esp + 0x24]
        push edx
        call ebx
        test eax, eax
        je L_df
        mov eax, dword ptr [esi + 0xb0]
        test eax, eax
        je L_df
        push eax
        mov eax, dword ptr [mem_00B5D21C]
    L_send:
        mov ecx, dword ptr [esi + 0x14]
        mov edx, dword ptr [ecx + 0x20]
        push esi
        push eax
        push edx
        call dword ptr [mem_00925694]
    L_df:
        pop edi
        pop ebx
    L_end:
        pop esi
        add esp, 0x20
        ret 4
    }
}

// [0x006B02F0] GWCDynCategoryItem::vfunc_9 (220 bytes)
extern "C" void ext_006A5EDE();
extern "C" void ext_006A63D6();
extern "C" void ext_006A7C00();
extern "C" void ext_006ACFD0();
extern "C" void ext_006B0770();
extern "C" int mem_00925628;
extern "C" int mem_0092571C;
extern "C" int mem_00925704;
extern "C" __declspec(naked) void __fastcall fn_006B02F0(void* self) {
    __asm {
        sub esp, 0x20
        push esi
        mov esi, ecx
        lea eax, [esi + 0x90]
        test eax, eax
        je L_zero
        cmp dword ptr [eax + 4], 0
        jne L_nz
    L_zero:
        xor eax, eax
        pop esi
        add esp, 0x20
        ret 4
    L_nz:
        push edi
        lea eax, [esp + 0x18]
        push eax
        lea ecx, [esp + 0xc]
        push ecx
        mov ecx, esi
        call ext_006B0770
        mov ecx, dword ptr [esi + 0x14]
        mov dword ptr [esi + 0xb0], 0
        call ext_006A7C00
        mov edi, eax
        test edi, edi
        je L_a
        mov ecx, edi
        call ext_006ACFD0
        cmp eax, esi
        je L_store
    L_a:
        cmp edi, esi
        jne L_b
    L_store:
        mov dword ptr [esi + 0xb0], edi
    L_b:
        cmp byte ptr [esi + 0x88], 0
        mov edi, dword ptr [esp + 0x2c]
        push ebx
        mov ebx, dword ptr [mem_00925628]
        je L_else
        mov edx, dword ptr [edi + 4]
        mov eax, dword ptr [edi]
        push edx
        push eax
        lea ecx, [esp + 0x14]
        push ecx
        call ebx
        test eax, eax
        jne L_hit
    L_else:
        mov edx, dword ptr [edi + 4]
        mov eax, dword ptr [edi]
        push edx
        push eax
        lea ecx, [esp + 0x24]
        push ecx
        call ebx
        test eax, eax
        je L_ret0
        cmp dword ptr [esi + 0xb0], 0
        je L_ret0
    L_hit:
        call ext_006A5EDE
        push 0x2af8
        push 0xc
        push 0x2af8
        call ext_006A63D6
        push eax
        call dword ptr [mem_0092571C]
        push eax
        call dword ptr [mem_00925704]
        pop ebx
        pop edi
        mov eax, 1
        pop esi
        add esp, 0x20
        ret 4
    L_ret0:
        pop ebx
        pop edi
        xor eax, eax
        pop esi
        add esp, 0x20
        ret 4
    }
}
