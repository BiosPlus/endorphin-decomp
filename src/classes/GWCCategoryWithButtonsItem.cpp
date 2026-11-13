// Decompiled translation unit: src/classes/GWCCategoryWithButtonsItem.cpp

extern "C" void ext_006A5E00();
extern "C" void ext_006A6010();
extern "C" void ext_006A7C00();
extern "C" void ext_006A7D50();
extern "C" void ext_006A7D70();
extern "C" void ext_006AD010();
extern "C" int mem_00925654;
extern "C" int mem_009256BC;
extern "C" int mem_0092431C;
extern "C" int mem_00924300;
extern "C" int mem_009242F4;

// [0x006B3980] GWCCategoryWithButtonsItem::vfunc_13 (271 bytes)
extern "C" __declspec(naked) void __fastcall fn_006B3980(void* self) {
    __asm {
        push -1
        push 0x8b76a9
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x10
        mov eax, dword ptr [esp + 0x24]
        mov edx, dword ptr [eax + 0x4]
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr [eax]
        mov dword ptr [esp + 0x14], edx
        mov edx, dword ptr [eax + 0x8]
        mov eax, dword ptr [eax + 0xc]
        add ecx, 0x3
        mov dword ptr [esp + 0x10], ecx
        mov ecx, dword ptr [edi + 0x14]
        sub edx, 0x4
        mov dword ptr [esp + 0x1c], eax
        mov dword ptr [esp + 0x18], edx
        call ext_006A7C00
        cmp eax, edi
        jne L_006B3A02
        call dword ptr [mem_00925654]
        push eax
        call ext_006A5E00
        mov ecx, dword ptr [edi + 0x14]
        cmp eax, ecx
        je L_006B39F8
        test eax, eax
        je L_006B39E9
        mov eax, dword ptr [eax + 0x20]
    L_006B39E9:
        mov ecx, dword ptr [ecx + 0x20]
        push eax
        push ecx
        call dword ptr [mem_009256BC]
        test eax, eax
        je L_006B3A02
    L_006B39F8:
        mov ecx, dword ptr [edi + 0x14]
        call ext_006A7D70
        jmp L_006B3A0A
    L_006B3A02:
        mov ecx, dword ptr [edi + 0x14]
        call ext_006A7D50
    L_006B3A0A:
        mov esi, dword ptr [esp + 0x30]
        mov edx, dword ptr [esi]
        push eax
        mov eax, dword ptr [edx + 0x38]
        mov ecx, esi
        call eax
        push 0x1
        mov ecx, esi
        mov ebx, eax
        call ext_006A6010
        lea ecx, [esp + 0x34]
        push ecx
        mov ecx, edi
        call ext_006AD010
        mov edi, eax
        mov ebp, dword ptr [esi]
        push 0x8024
        lea edx, [esp + 0x14]
        push edx
        mov ecx, edi
        mov dword ptr [esp + 0x30], 0
        call dword ptr [mem_0092431C]
        push eax
        mov ecx, edi
        call dword ptr [mem_00924300]
        push eax
        mov eax, dword ptr [ebp + 0x70]
        mov ecx, esi
        call eax
        lea ecx, [esp + 0x34]
        mov dword ptr [esp + 0x28], 0xffffffff
        call dword ptr [mem_009242F4]
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 0x38]
        push ebx
        mov ecx, esi
        call eax
        mov ecx, dword ptr [esp + 0x20]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x1c
        ret 0x8
    }
}

// [0x006B0B60] GWCCategoryWithButtonsItem::vfunc_10 (136 bytes)
extern "C" void ext_006B0770();
extern "C" int mem_00925628;
extern "C" int mem_00925694;
extern "C" __declspec(naked) void __fastcall fn_006B0B60(void* self, int edx_unused, void* a1) {
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
        je L_b6
        mov edx, dword ptr [edi + 4]
        mov eax, dword ptr [edi]
        push edx
        push eax
        lea ecx, [esp + 0x14]
        push ecx
        call ebx
        test eax, eax
        je L_b6
        mov edx, dword ptr [esi + 0xa8]
        jmp L_ce
    L_b6:
        mov edx, dword ptr [edi + 4]
        mov eax, dword ptr [edi]
        push edx
        push eax
        lea ecx, [esp + 0x24]
        push ecx
        call ebx
        test eax, eax
        je L_df
        mov edx, dword ptr [esi + 0xac]
    L_ce:
        mov eax, dword ptr [esi + 0x14]
        mov ecx, dword ptr [eax + 0x20]
        push 0
        push esi
        push edx
        push ecx
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

// [0x006B0AB0] GWCCategoryWithButtonsItem::vfunc_9 (163 bytes)
extern "C" void ext_006A5EDE();
extern "C" void ext_006A63D6();
extern "C" void ext_006B0770();
extern "C" int mem_00925628;
extern "C" int mem_0092571C;
extern "C" int mem_00925704;
extern "C" __declspec(naked) int __fastcall fn_006B0AB0(void* self, int edx_unused, void* a1) {
    __asm {
        sub esp, 0x20
        push esi
        mov esi, ecx
        lea eax, [esi + 0x90]
        test eax, eax
        je l1
        cmp dword ptr [eax + 4], 0
        jne l2
    l1:
        xor eax, eax
        pop esi
        add esp, 0x20
        ret 4
    l2:
        push edi
        lea eax, [esp + 0x18]
        push eax
        lea ecx, [esp + 0xc]
        push ecx
        mov ecx, esi
        call ext_006B0770
        cmp byte ptr [esi + 0x88], 0
        mov esi, dword ptr [esp + 0x2c]
        mov edi, dword ptr [mem_00925628]
        je l3
        mov edx, dword ptr [esi + 4]
        mov eax, dword ptr [esi]
        push edx
        push eax
        lea ecx, [esp + 0x10]
        push ecx
        call edi
        test eax, eax
        jne l4
    l3:
        mov edx, dword ptr [esi + 4]
        mov eax, dword ptr [esi]
        push edx
        push eax
        lea ecx, [esp + 0x20]
        push ecx
        call edi
        test eax, eax
        je l5
    l4:
        call ext_006A5EDE
        push 0x2af8
        push 0xc
        push 0x2af8
        call ext_006A63D6
        push eax
        call dword ptr [mem_0092571C]
        push eax
        call dword ptr [mem_00925704]
        pop edi
        mov eax, 1
        pop esi
        add esp, 0x20
        ret 4
    l5:
        pop edi
        xor eax, eax
        pop esi
        add esp, 0x20
        ret 4
    }
}
