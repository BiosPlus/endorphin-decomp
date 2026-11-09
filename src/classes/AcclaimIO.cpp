// Decompiled translation unit: src/classes/AcclaimIO.cpp

// [0x00584660] AcclaimIO::vfunc_43 (34 bytes)
extern "C" __declspec(naked) bool __fastcall fn_00584660(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0xe4]
        call edx
        test al, 0x2
        je short L_false
        cmp byte ptr [esi + 0x428], 0
        je short L_false
        mov al, 0x1
        pop esi
        ret
    L_false:
        xor al, al
        pop esi
        ret
    }
}
