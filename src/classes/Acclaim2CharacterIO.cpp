// Decompiled translation unit: src/classes/Acclaim2CharacterIO.cpp

// [0x0056B8C0] Acclaim2CharacterIO::vfunc_48 (53 bytes)
extern "C" int mem_00955998;
extern "C" int mem_00924FC0;
extern "C" __declspec(naked) void __fastcall fn_0056B8C0(void* self) {
    __asm {
        fld dword ptr [mem_00955998]
        fcomp dword ptr [ecx + 0x46c]
        fnstsw ax
        test ah, 0x41
        jp short ret_zero
        add ecx, 0xac
        push 0x9590c0
        push ecx
        call dword ptr [mem_00924FC0]
        add esp, 8
        test al, al
        je short ret_zero
        mov eax, 1
        ret
ret_zero:
        xor eax, eax
        ret
    }
}
