// Decompiled translation unit: src/classes/VMCActionDoc.cpp

extern "C" void ext_004663A0();
extern "C" void ext_00467380();
extern "C" void ext_006A6AA2();

// [0x004673A0] VMCActionDoc::vfunc_41 (61 bytes)
extern "C" __declspec(naked) int __fastcall fn_004673A0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        call ext_004663A0
        test al, al
        je ret_zero_004673A0
        mov eax, dword ptr [esi + 0x60]
        test eax, eax
        jne state_nonzero_004673A0
        mov ecx, esi
        pop esi
        jmp ext_006A6AA2
state_nonzero_004673A0:
        cmp eax, 1
        jne ret_zero_004673A0
        mov ecx, esi
        call ext_00467380
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x64]
        push 0
        mov ecx, esi
        call edx
        mov eax, 1
        pop esi
        ret
ret_zero_004673A0:
        xor eax, eax
        pop esi
        ret
    }
}
