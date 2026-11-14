// Decompiled translation unit: src/AdvXMLParser/Text.cpp

extern "C" void ext_004701E0();
extern "C" void ext_00641C50();
extern "C" void ext_00641F10();
extern "C" int mem_00924FE8;
extern "C" int mem_00924FDC;
extern "C" int mem_00924FF4;

// [0x0063E180] AdvXMLParser::Text::vfunc_3 (23 bytes)
// If arg0 == 3, return true (ret 4); otherwise replace arg0 with the value and tail-jump to 0x004701E0.
extern "C" __declspec(naked) unsigned char __stdcall fn_0063E180(int a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        cmp eax, 3
        jne not_three
        mov al, 1
        ret 4
    not_three:
        mov dword ptr [esp + 4], eax
        jmp ext_004701E0
    }
}

// [0x00641DF0] AdvXMLParser::Text::vfunc_5 (147 bytes)
extern "C" __declspec(naked) void __fastcall fn_00641DF0(void* self) {
    __asm {
        push -1
        push 0x8b56f9
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x1c
        push esi
        mov esi, ecx
        push edi
        lea ecx, [esp + 0x8]
        call dword ptr [mem_00924FE8]
        mov edi, dword ptr [esp + 0x34]
        mov eax, dword ptr [edi]
        shr eax, 1
        test al, 1
        mov dword ptr [esp + 0x2c], 0
        jne skip_copy
        lea ecx, [esi + 0x24]
        push ecx
        lea ecx, [esp + 0xc]
        call dword ptr [mem_00924FDC]
        lea edx, [esp + 0x8]
        push edx
        call ext_00641F10
        add esp, 4
    skip_copy:
        mov eax, dword ptr [edi]
        shr eax, 1
        test al, 1
        lea eax, [esi + 0x24]
        jne use_member
        lea eax, [esp + 0x8]
    use_member:
        push eax
        push edi
        call ext_00641C50
        add esp, 8
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x2c], -1
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x24]
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x28
        ret 4
    }
}
