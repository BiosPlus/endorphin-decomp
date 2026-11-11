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
