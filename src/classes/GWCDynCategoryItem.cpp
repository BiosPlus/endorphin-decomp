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
