// Decompiled translation unit: src/classes/GWCHotLinkItem.cpp

extern "C" void ext_006AC710();
extern "C" void ext_006AD940();
extern "C" void ext_006B4440();

// [0x006ACDF0] GWCHotLinkItem::vfunc_5 (41 bytes)
extern "C" __declspec(naked) void __fastcall fn_006ACDF0(void* self, int edx_unused, unsigned char a1, unsigned char a2) {
    __asm {
        mov eax, dword ptr [ecx + 0x4]
        mov edx, dword ptr [esp + 0x4]
        cmp byte ptr [eax + 0x5], dl
        jne write_flag
        cmp byte ptr [esp + 0x8], 0x0
        je done
    write_flag:
        mov byte ptr [eax + 0x5], dl
        mov dword ptr [esp + 0x4], ecx
        mov ecx, dword ptr [ecx + 0x14]
        mov dword ptr [esp + 0x8], edx
        jmp ext_006AC710
    done:
        ret 0x8
    }
}

extern "C" int mem_00B5D200;
extern "C" int mem_00925694;

// [0x006AD810] GWCHotLinkItem::vfunc_6 (95 bytes)
extern "C" __declspec(naked) void __fastcall fn_006AD810(void* self, int edx_unused, unsigned char a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x4]
        mov byte ptr [ecx + 0x4], al
        mov ecx, dword ptr [esi + 0x3c]
        test ecx, ecx
        push eax
        push esi
        je no_ptr
        mov byte ptr [ecx], al
        mov ecx, dword ptr [esi + 0x14]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x13c]
        call eax
        mov ecx, esi
        call ext_006B4440
        mov ecx, eax
        call ext_006AD940
        mov ecx, dword ptr [mem_00B5D200]
        mov edx, dword ptr [esi + 0x14]
        push 0x0
        push eax
        mov eax, dword ptr [edx + 0x20]
        push ecx
        push eax
        call dword ptr [mem_00925694]
        pop esi
        ret 0x4
    no_ptr:
        mov ecx, dword ptr [esi + 0x14]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x13c]
        call eax
        pop esi
        ret 0x4
    }
}

extern "C" void ext_006ACE20();
extern "C" void ext_006A5EDE();
extern "C" void ext_006A63D6();
extern "C" void ext_006B2D70();
extern "C" int mem_00925628;
extern "C" int mem_0092571C;
extern "C" int mem_00925704;

// [0x006B2EE0] GWCHotLinkItem::vfunc_9 (129 bytes)
extern "C" __declspec(naked) int __fastcall fn_006B2EE0(void* self, int edx_unused, void* pt) {
    __asm {
        sub esp, 0x20
        push esi
        mov esi, ecx
        lea eax, [esi + 0x50]
        test eax, eax
        je fail
        cmp dword ptr [eax + 0x4], 0x0
        je fail
        lea eax, [esp + 0x4]
        push eax
        call ext_006ACE20
        lea ecx, [esp + 0x4]
        push ecx
        lea edx, [esp + 0x18]
        push edx
        mov ecx, esi
        call ext_006B2D70
        mov eax, dword ptr [esp + 0x28]
        mov ecx, dword ptr [eax + 0x4]
        mov edx, dword ptr [eax]
        push ecx
        push edx
        lea eax, [esp + 0x1c]
        push eax
        call dword ptr [mem_00925628]
        test eax, eax
        je fail
        call ext_006A5EDE
        push 0x2af8
        push 0xc
        push 0x2af8
        call ext_006A63D6
        push eax
        call dword ptr [mem_0092571C]
        push eax
        call dword ptr [mem_00925704]
        mov eax, 0x1
        pop esi
        add esp, 0x20
        ret 0x4
    fail:
        xor eax, eax
        pop esi
        add esp, 0x20
        ret 0x4
    }
}

extern "C" void ext_006ACFB0();
extern "C" int mem_00925688;
extern "C" int mem_0092568C;
extern "C" int mem_00924248;
extern "C" int mem_00B5D214;
extern "C" int mem_00925618;

// [0x006B2E30] GWCHotLinkItem::vfunc_10 (141 bytes)
extern "C" __declspec(naked) void __fastcall fn_006B2E30(void* self, int edx_unused, void* pt) {
    __asm {
        sub esp, 0x20
        push esi
        lea eax, [esp + 0x4]
        push eax
        mov esi, ecx
        call ext_006ACE20
        lea ecx, [esp + 0x4]
        push ecx
        lea edx, [esp + 0x18]
        push edx
        mov ecx, esi
        call ext_006B2D70
        mov eax, dword ptr [esp + 0x28]
        mov ecx, dword ptr [eax + 0x4]
        mov edx, dword ptr [eax]
        push ecx
        push edx
        lea eax, [esp + 0x1c]
        push eax
        call dword ptr [mem_00925628]
        test eax, eax
        je done
        mov ecx, dword ptr [esi + 0x14]
        push 0x1
        mov byte ptr [esi + 0x58], 0x1
        mov edx, dword ptr [ecx + 0x20]
        push 0x0
        push edx
        call dword ptr [mem_00925688]
        mov eax, dword ptr [esi + 0x14]
        mov ecx, dword ptr [eax + 0x20]
        push ecx
        call dword ptr [mem_0092568C]
        push 0xc8
        call dword ptr [mem_00924248]
        mov ecx, esi
        call ext_006ACFB0
        mov edx, dword ptr [mem_00B5D214]
        push 0x0
        push eax
        mov eax, dword ptr [esi + 0x14]
        mov ecx, dword ptr [eax + 0x20]
        push edx
        push ecx
        call dword ptr [mem_00925618]
    done:
        pop esi
        add esp, 0x20
        ret 0x4
    }
}
