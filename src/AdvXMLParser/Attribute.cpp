// Decompiled translation unit: src/AdvXMLParser/Attribute.cpp

extern "C" void ext_004701E0();

// [0x0063E220] AdvXMLParser::Attribute::vfunc_3 (23 bytes)
// If arg0 == 2, return true (ret 4); otherwise replace arg0 with the value and tail-jump to 0x004701E0.
extern "C" __declspec(naked) unsigned char __stdcall fn_0063E220(int a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        cmp eax, 2
        jne not_two
        mov al, 1
        ret 4
    not_two:
        mov dword ptr [esp + 4], eax
        jmp ext_004701E0
    }
}

extern "C" void ext_00640EE0();
extern "C" int mem_00924FD8;
extern "C" int mem_00924ED0;

// [0x00640F50] AdvXMLParser::Attribute::vfunc_5 (74 bytes)
extern "C" __declspec(naked) void __fastcall fn_00640F50(void* self, int edx_unused, void* a1) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        push edi
        mov edi, ecx
        mov ecx, dword ptr [esi + 0x8]
        lea eax, [edi + 0x4]
        push eax
        mov byte ptr [esi + 0x11], 0x0
        call dword ptr [mem_00924FD8]
        mov ecx, dword ptr [esi + 0x8]
        push 0x97cd4c
        mov byte ptr [esi + 0x11], 0x0
        call dword ptr [mem_00924ED0]
        push esi
        mov ecx, edi
        call ext_00640EE0
        mov ecx, dword ptr [esi + 0x8]
        push 0x92b4a0
        mov byte ptr [esi + 0x11], 0x0
        call dword ptr [mem_00924ED0]
        pop edi
        pop esi
        ret 0x4
    }
}
