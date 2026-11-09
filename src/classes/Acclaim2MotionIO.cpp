// Decompiled translation unit: src/classes/Acclaim2MotionIO.cpp

// [0x0055BBF0] Acclaim2MotionIO::vfunc_48 (42 bytes)
extern "C" __declspec(naked) unsigned char __fastcall fn_0055BBF0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0e4h]
        call edx
        test al, 1
        je L_false
        mov eax, dword ptr [esi + 584h]
        mov edx, dword ptr [eax + 0c0h]
        lea ecx, [esi + 584h]
        pop esi
        jmp edx
    L_false:
        xor al, al
        pop esi
        ret
    }
}
