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

// [0x0056B770] Acclaim2CharacterIO::vfunc_3 (131 bytes)
extern "C" void ext_00553720();
extern "C" void ext_0063F530();
extern "C" void ext_00640390();
extern "C" int mem_00A9ECE8;

extern "C" __declspec(naked) void __fastcall fn_0056B770(void* self, int edx_unused, void* arg) {
    __asm {
        mov eax, dword ptr [mem_00A9ECE8]
        push esi
        mov esi, dword ptr [esp + 8]
        push edi
        push 1
        push 0
        mov edi, ecx
        push eax
        mov ecx, esi
        call ext_0063F530
        cmp eax, 0xb53a34
        je loc_56b7ac
        cmp eax, 0xb53b30
        je loc_56b7ac
        cmp eax, 0xb53ab0
        je loc_56b7ac
        cmp eax, 0xb53a70
        je loc_56b7ac
        cmp eax, 0xb53af0
        jne loc_56b7b1
loc_56b7ac:
        mov eax, 0xb53b30
loc_56b7b1:
        cmp eax, 0xb53a34
        je loc_56b7d4
        cmp eax, 0xb53b30
        je loc_56b7d4
        cmp eax, 0xb53ab0
        je loc_56b7d4
        cmp eax, 0xb53a70
        je loc_56b7d4
        cmp eax, 0xb53af0
        jne loc_56b7ec
loc_56b7d4:
        mov ecx, dword ptr [mem_00A9ECE8]
        push 0
        push ecx
        mov ecx, esi
        call ext_00640390
        push eax
        mov ecx, edi
        call ext_00553720
loc_56b7ec:
        pop edi
        mov eax, esi
        pop esi
        ret 4
    }
}
