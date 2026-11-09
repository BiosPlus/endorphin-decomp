// Decompiled translation unit: src/leaf/decompiled_5B0000.cpp

// [0x005B6970] sub_005B6970 (9 bytes)
extern "C" void ext_005B6930();

extern "C" __declspec(naked) void __cdecl fn_005B6970() {
    __asm {
        call ext_005B6930
        fld dword ptr [eax + 4]
        ret
    }
}

// [0x005B67C0] sub_005B67C0 (32 bytes)
extern "C" void ext_00647F50();

extern "C" __declspec(naked) void __fastcall fn_005B67C0(void* self, int edx_unused, float a1) {
    __asm {
        mov eax, dword ptr [ecx + 0x158]
        test eax, eax
        je done
        fld dword ptr [esp + 4]
        push ecx
        mov ecx, dword ptr [eax + 0xac]
        fstp dword ptr [esp]
        call ext_00647F50
    done:
        ret 4
    }
}

// [0x005B7000] sub_005B7000 (32 bytes)
extern "C" void ext_00648180();

extern "C" __declspec(naked) void __fastcall fn_005B7000(void* self, int edx_unused, float a1) {
    __asm {
        mov eax, dword ptr [ecx + 0x158]
        test eax, eax
        je done
        fld dword ptr [esp + 4]
        push ecx
        mov ecx, dword ptr [eax + 0xac]
        fstp dword ptr [esp]
        call ext_00648180
    done:
        ret 4
    }
}

// [0x005B7020] sub_005B7020 (32 bytes)
extern "C" void ext_006481A0();

extern "C" __declspec(naked) void __fastcall fn_005B7020(void* self, int edx_unused, float a1) {
    __asm {
        mov eax, dword ptr [ecx + 0x158]
        test eax, eax
        je done
        fld dword ptr [esp + 4]
        push ecx
        mov ecx, dword ptr [eax + 0xac]
        fstp dword ptr [esp]
        call ext_006481A0
    done:
        ret 4
    }
}

// [0x005B6B60] sub_005B6B60 (33 bytes)
extern "C" void ext_005CE9C0();

extern "C" __declspec(naked) void __fastcall fn_005B6B60(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x158]
        test ecx, ecx
        lea eax, [esi + 0x1b8]
        je L_005B6B7F
        push eax
        call ext_005CE9C0
        lea eax, [esi + 0x1b8]
L_005B6B7F:
        pop esi
        ret
    }
}
