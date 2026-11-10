// Decompiled translation unit: src/AdvXMLParser/CharRef.cpp

extern "C" void ext_004701E0();

// [0x0063E270] AdvXMLParser::CharRef::vfunc_3 (23 bytes)
// If arg0 == 5, return true (ret 4); otherwise replace arg0 with the value and tail-jump to 0x004701E0.
extern "C" __declspec(naked) unsigned char __stdcall fn_0063E270(int a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        cmp eax, 5
        jne not_five
        mov al, 1
        ret 4
    not_five:
        mov dword ptr [esp + 4], eax
        jmp ext_004701E0
    }
}

// [0x0063E390] AdvXMLParser::CharRef::vfunc_1 (36 bytes)
// Constructs the std::string at a1 as a 1-character string holding the char at this+0x24; returns a1.
extern "C" int mem_0092506C;
extern "C" __declspec(naked) void* __fastcall fn_0063E390(void* self, int edx_unused, void* a1) {
    __asm {
        push ecx
        movzx eax, byte ptr [ecx + 0x24]
        push esi
        mov esi, dword ptr [esp + 0xc]
        push eax
        push 0x1
        mov ecx, esi
        mov dword ptr [esp + 0xc], 0x0
        call dword ptr [mem_0092506C]
        mov eax, esi
        pop esi
        pop ecx
        ret 0x4
    }
}

// [0x006409B0] AdvXMLParser::CharRef::vfunc_5 (86 bytes)
// Builds "&#x<hex(char at this+0x24)>;" into the std::string at a1+0x8 (after clearing a1+0x11); returns that string.
extern "C" void ext_00640960();
extern "C" int mem_00924ED0;
extern "C" int mem_00924EC0;
extern "C" __declspec(naked) void* __fastcall fn_006409B0(void* self, int edx_unused, void* a1) {
    __asm {
        sub esp, 0xc
        push esi
        mov esi, dword ptr [esp + 0x14]
        push edi
        mov edi, ecx
        mov ecx, dword ptr [esi + 0x8]
        push 0x97cd10
        mov byte ptr [esi + 0x11], 0x0
        call dword ptr [mem_00924ED0]
        movsx ecx, byte ptr [edi + 0x24]
        push 0xa
        lea eax, [esp + 0xc]
        push eax
        push ecx
        call ext_00640960
        mov ecx, dword ptr [esi + 0x8]
        add esp, 0xc
        push eax
        mov byte ptr [esi + 0x11], 0x0
        call dword ptr [mem_00924ED0]
        mov ecx, dword ptr [esi + 0x8]
        push 0x3b
        mov byte ptr [esi + 0x11], 0x0
        call dword ptr [mem_00924EC0]
        pop edi
        pop esi
        add esp, 0xc
        ret 0x4
    }
}
