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

// [0x005B6B90] sub_005B6B90 (33 bytes)
extern "C" void ext_005CE9D0();

extern "C" __declspec(naked) void __fastcall fn_005B6B90(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x158]
        test ecx, ecx
        lea eax, [esi + 0x1c4]
        je L_005B6BAF
        push eax
        call ext_005CE9D0
        lea eax, [esi + 0x1c4]
L_005B6BAF:
        pop esi
        ret
    }
}

// [0x005B6BC0] sub_005B6BC0 (33 bytes)
extern "C" void ext_005CE9E0();

extern "C" __declspec(naked) void* __fastcall fn_005B6BC0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x158]
        test ecx, ecx
        lea eax, [esi + 0x1d0]
        je done
        push eax
        call ext_005CE9E0
        lea eax, [esi + 0x1d0]
done:
        pop esi
        ret
    }
}

// [0x005B6BF0] sub_005B6BF0 (33 bytes)
extern "C" void ext_005CE9F0();

extern "C" __declspec(naked) void* __fastcall fn_005B6BF0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x158]
        test ecx, ecx
        lea eax, [esi + 0x1dc]
        je done_5B6BF0
        push eax
        call ext_005CE9F0
        lea eax, [esi + 0x1dc]
done_5B6BF0:
        pop esi
        ret
    }
}

// [0x005B6C20] sub_005B6C20 (33 bytes)
extern "C" void ext_005CEA00();

extern "C" __declspec(naked) void __fastcall fn_005B6C20(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x158]
        test ecx, ecx
        lea eax, [esi + 0x1e8]
        je done_5B6C20
        push eax
        call ext_005CEA00
        lea eax, [esi + 0x1e8]
done_5B6C20:
        pop esi
        ret
    }
}

// [0x005B6C50] sub_005B6C50 (33 bytes)
extern "C" void ext_005CEA10();

extern "C" __declspec(naked) void __fastcall fn_005B6C50(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x158]
        test ecx, ecx
        lea eax, [esi + 0x1f4]
        je short L_done_5B6C50
        push eax
        call ext_005CEA10
        lea eax, [esi + 0x1f4]
L_done_5B6C50:
        pop esi
        ret
    }
}

// [0x005B1B60] sub_005B1B60 (34 bytes)
extern "C" __declspec(naked) void __fastcall fn_005B1B60(void* self, int edx_unused, const float* src) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        fld dword ptr [eax]
        fstp dword ptr [ecx + 0x10]
        fld dword ptr [eax + 0x4]
        fstp dword ptr [ecx + 0x14]
        fld dword ptr [eax + 0x8]
        fstp dword ptr [ecx + 0x18]
        fld dword ptr [eax + 0xc]
        mov byte ptr [ecx + 0x4], 0x1
        fstp dword ptr [ecx + 0x1c]
        ret 0x4
    }
}

// [0x005B0E60] sub_005B0E60 (40 bytes)
extern "C" int mem_00A88A40;
extern "C" int mem_00924FE4;

extern "C" __declspec(naked) void __fastcall fn_005B0E60(void* self) {
    __asm {
        push ecx
        mov eax, dword ptr [ecx + 0x8]
        mov ecx, dword ptr [4*eax + mem_00A88A40]
        push esi
        mov esi, dword ptr [esp + 0xc]
        push ecx
        mov ecx, esi
        mov dword ptr [esp + 0x8], 0
        call dword ptr [mem_00924FE4]
        mov eax, esi
        pop esi
        pop ecx
        ret 4
    }
}
