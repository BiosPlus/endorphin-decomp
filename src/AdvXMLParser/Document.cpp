// Decompiled translation unit: src/AdvXMLParser/Document.cpp

extern "C" void ext_004701E0();
extern "C" void ext_00640840();

// [0x0063E940] AdvXMLParser::Document::vfunc_3 (23 bytes)
// If arg0 == 9, return true (ret 4); otherwise replace arg0 with the value and tail-jump to 0x004701E0.
extern "C" __declspec(naked) unsigned char __stdcall fn_0063E940(int a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        cmp eax, 9
        jne not_nine
        mov al, 1
        ret 4
    not_nine:
        mov dword ptr [esp + 4], eax
        jmp ext_004701E0
    }
}

// [0x006408B0] AdvXMLParser::Document::vfunc_4 (8 bytes)
extern "C" __declspec(naked) void __fastcall fn_006408B0(void* self, int edx_unused, int a1) {
    __asm {
        call ext_00640840
        ret 4
    }
}

// [0x0065F5E0] AdvXMLParser::Document::vfunc_1 (34 bytes)
// Constructs the std::string at a1 from an empty C string literal; returns a1.
extern "C" int mem_00924FE4;
extern "C" __declspec(naked) void* __fastcall fn_0065F5E0(void* self, int edx_unused, void* a1) {
    __asm {
        push ecx
        push esi
        mov esi, dword ptr [esp + 0xc]
        push 0x928b5d
        mov ecx, esi
        mov dword ptr [esp + 0x8], 0x0
        call dword ptr [mem_00924FE4]
        mov eax, esi
        pop esi
        pop ecx
        ret 0x4
    }
}

extern "C" void ext_00640940();
extern "C" void ext_00640EE0();
extern "C" int mem_00924ED0;
extern "C" int mem_00924FD8;

// [0x006410D0] AdvXMLParser::Document::vfunc_5 (115 bytes)
extern "C" __declspec(naked) void __fastcall fn_006410D0(void* self, int edx_unused, void* a1) {
    __asm {
        push ebx
        push esi
        mov esi, dword ptr [esp + 0xc]
        push edi
        mov edi, ecx
        mov ecx, dword ptr [esi + 0x8]
        xor bl, bl
        push 0x97cd6c
        mov byte ptr [esi + 0x11], bl
        call dword ptr [mem_00924ED0]
        mov ecx, dword ptr [esi + 0x8]
        lea eax, [edi + 0x3c]
        push eax
        mov byte ptr [esi + 0x11], bl
        call dword ptr [mem_00924FD8]
        mov ecx, dword ptr [esi + 0x8]
        push 0x97cd5c
        mov byte ptr [esi + 0x11], bl
        call dword ptr [mem_00924ED0]
        lea ecx, [edi + 0x58]
        push ecx
        mov ecx, dword ptr [esi + 0x8]
        mov byte ptr [esi + 0x11], bl
        call dword ptr [mem_00924FD8]
        mov ecx, dword ptr [esi + 0x8]
        push 0x97cd58
        mov byte ptr [esi + 0x11], bl
        call dword ptr [mem_00924ED0]
        mov ecx, esi
        call ext_00640940
        push esi
        mov ecx, edi
        call ext_00640EE0
        pop edi
        pop esi
        pop ebx
        ret 0x4
    }
}
