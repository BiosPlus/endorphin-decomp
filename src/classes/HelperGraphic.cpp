// Decompiled translation unit: src/classes/HelperGraphic.cpp

// [0x005F5750] HelperGraphic::vfunc_8_off_C (32 bytes)
extern "C" void __fastcall fn_005F5750(unsigned char* self, int edx_unused, unsigned char a1) {
    unsigned char v;
    if (self[0x201] != 0 && a1 != 0) {
        v = 1;
    } else {
        v = 0;
    }
    self[0x5c] = v;
}

// [0x005F5220] HelperGraphic::vfunc_14 (30 bytes)
extern "C" void ext_0046F7D0();
extern "C" __declspec(naked) void* __fastcall fn_005F5220(void* self, int edx_unused, void* a1, int a2) {
    __asm {
        push ecx
        push esi
        mov esi, dword ptr [esp + 0xc]
        push esi
        mov dword ptr [esp + 0x8], 0x0
        call ext_0046F7D0
        add esp, 0x4
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    }
}

// [0x0058F670] HelperGraphic::vfunc_15_off_4 (58 bytes)
extern "C" void ext_00661A70();
extern "C" __declspec(naked) void __fastcall fn_0058F670(void* self, int edx_unused, void* a1) {
    __asm {
        push esi
        mov esi, ecx
        lea eax, [esi - 0x4]
        test eax, eax
        je short L_null_path
        mov ecx, dword ptr [esp + 0x8]
        lea eax, [esi + 0x14c]
        push eax
        call ext_00661A70
        mov dword ptr [esi + 0xe4], eax
        pop esi
        ret 0x4
L_null_path:
        mov ecx, dword ptr [esp + 0x8]
        xor eax, eax
        push eax
        call ext_00661A70
        mov dword ptr [esi + 0xe4], eax
        pop esi
        ret 0x4
    }
}
