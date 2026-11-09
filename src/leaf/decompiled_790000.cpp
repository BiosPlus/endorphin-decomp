// Decompiled translation unit: src/leaf/decompiled_790000.cpp

extern "C" unsigned char mem_00B61150;
extern "C" int mem_00B6114C;

// [0x0079EAC0] sub_0079EAC0 (32 bytes)
// Returns table[arg & 0xFF] (4-byte entries at mem_00B6114C) if (unsigned char)arg < mem_00B61150, else 0.
extern "C" __declspec(naked) int __cdecl fn_0079EAC0(int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        mov cl, byte ptr [mem_00B61150]
        cmp al, cl
        jae short L_zero
        mov ecx, dword ptr [mem_00B6114C]
        and eax, 0xff
        mov eax, dword ptr [ecx + 4*eax]
        ret
L_zero:
        xor eax, eax
        ret
    }
}

// [0x0079EEC0] sub_0079EEC0 (16 bytes)
extern "C" void ext_0079EBE0();
extern "C" int mem_00925184;

extern "C" __declspec(naked) int __cdecl fn_0079EEC0() {
    __asm {
        call ext_0079EBE0
        push eax
        call dword ptr [mem_00925184]
        add esp, 0x4
        ret
    }
}
