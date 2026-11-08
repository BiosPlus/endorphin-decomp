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
