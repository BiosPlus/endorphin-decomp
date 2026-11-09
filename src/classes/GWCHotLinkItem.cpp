// Decompiled translation unit: src/classes/GWCHotLinkItem.cpp

extern "C" void ext_006AC710();

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
