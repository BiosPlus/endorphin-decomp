// Decompiled translation unit: src/AdvXMLParser/CData.cpp

extern "C" void ext_004701E0();

// [0x0063E870] AdvXMLParser::CData::vfunc_3 (23 bytes)
// If arg0 == 4, return true (ret 4); otherwise replace arg0 with the value and tail-jump to 0x004701E0.
extern "C" __declspec(naked) unsigned char __stdcall fn_0063E870(int a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        cmp eax, 4
        jne not_four
        mov al, 1
        ret 4
    not_four:
        mov dword ptr [esp + 4], eax
        jmp ext_004701E0
    }
}

// [0x0063E670] AdvXMLParser::CData::vfunc_1 (33 bytes)
// Copy-constructs the std::string at a1 from the std::string member at this+0x24; returns a1.
extern "C" int mem_00924FE0;
extern "C" __declspec(naked) void* __fastcall fn_0063E670(void* self, int edx_unused, void* a1) {
    __asm {
        push ecx
        push esi
        mov esi, dword ptr [esp + 0xc]
        add ecx, 0x24
        push ecx
        mov ecx, esi
        mov dword ptr [esp + 0x8], 0x0
        call dword ptr [mem_00924FE0]
        mov eax, esi
        pop esi
        pop ecx
        ret 0x4
    }
}
