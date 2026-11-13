// Decompiled translation unit: src/AdvXMLParser/Comment.cpp

extern "C" void ext_004701E0();

// [0x0063E4E0] AdvXMLParser::Comment::vfunc_3 (23 bytes)
// If arg0 == 8, return true (ret 4); otherwise replace arg0 with the value and tail-jump to 0x004701E0.
extern "C" __declspec(naked) unsigned char __stdcall fn_0063E4E0(int a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        cmp eax, 8
        jne not_eight
        mov al, 1
        ret 4
    not_eight:
        mov dword ptr [esp + 4], eax
        jmp ext_004701E0
    }
}

extern "C" void ext_00640930();
extern "C" void ext_00640940();
extern "C" void ext_00640CB0();
extern "C" int mem_00924ED0;
extern "C" int mem_00924FD8;

// [0x00640D00] AdvXMLParser::Comment::vfunc_5 (87 bytes)
extern "C" __declspec(naked) void __fastcall fn_00640D00(void* self, int edx_unused, void* xmlGen) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        push edi
        mov edi, ecx
        mov ecx, esi
        call ext_00640CB0
        mov ecx, dword ptr [esi + 8]
        push 0x0097CD2C
        mov byte ptr [esi + 0x11], 0
        call dword ptr [mem_00924ED0]
        mov ecx, dword ptr [esi + 8]
        add edi, 0x24
        push edi
        mov byte ptr [esi + 0x11], 0
        call dword ptr [mem_00924FD8]
        mov ecx, dword ptr [esi + 8]
        push 0x0097CD28
        mov byte ptr [esi + 0x11], 0
        call dword ptr [mem_00924ED0]
        mov ecx, esi
        call ext_00640940
        mov ecx, esi
        call ext_00640930
        pop edi
        pop esi
        ret 4
    }
}
