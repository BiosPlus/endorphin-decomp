// Decompiled translation unit: src/NMData/CharacterData.cpp

// [0x005A98B0] NMData::CharacterData::vfunc_11 (54 bytes)
extern "C" bool __fastcall ext_00410390(void* self);

extern "C" __declspec(naked) bool __fastcall fn_005A98B0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x28]
        call edx
        test al, al
        jne ret_true
        mov ecx, esi
        call ext_00410390
        test al, al
        jne ret_true
        mov eax, 1
        xor ecx, ecx
        test al, al
        sete cl
        mov al, cl
        pop esi
        ret
ret_true:
        xor eax, eax
        xor ecx, ecx
        test al, al
        sete cl
        mov al, cl
        pop esi
        ret
    }
}
