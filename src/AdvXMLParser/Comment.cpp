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
