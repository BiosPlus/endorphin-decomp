// Decompiled translation unit: src/AdvXMLParser/Element.cpp

extern "C" void ext_004701E0();

// [0x0063E3C0] AdvXMLParser::Element::vfunc_3 (23 bytes)
// If arg0 == 1, return with al unchanged (ret 4); otherwise replace arg0 with the value and tail-jump to 0x004701E0.
extern "C" __declspec(naked) unsigned char __stdcall fn_0063E3C0(int a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        cmp eax, 1
        jne not_one
        mov al, al
        ret 4
    not_one:
        mov dword ptr [esp + 4], eax
        jmp ext_004701E0
    }
}
