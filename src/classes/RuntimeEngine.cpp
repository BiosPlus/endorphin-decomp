// Decompiled translation unit: src/classes/RuntimeEngine.cpp

// [0x0046FA30] RuntimeEngine::vfunc_0_off_C (11 bytes)
extern "C" void ext_0046F930();

extern "C" __declspec(naked) void __fastcall fn_0046FA30(void* self, int edx_unused, int a1) {
    __asm {
        add ecx, -0xc
        call ext_0046F930
        ret 4
    }
}

// [0x0046F9E0] RuntimeEngine::vfunc_14_off_4 (70 bytes)
extern "C" void ext_0046F7D0();
extern "C" void ext_00661650();
extern "C" __declspec(naked) void* __fastcall fn_0046F9E0(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push ecx
        xor eax, eax
        cmp dword ptr [esp + 0xc], 0x21
        push esi
        mov dword ptr [esp + 0x4], eax
        je short L_match
        mov esi, dword ptr [esp + 0xc]
        push esi
        call ext_0046F7D0
        add esp, 0x4
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    L_match:
        lea edx, [ecx + 0x17c]
        test edx, edx
        je short L_null
        lea eax, [ecx + 0x180]
    L_null:
        mov esi, dword ptr [esp + 0xc]
        push eax
        mov ecx, esi
        call ext_00661650
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    }
}

extern "C" void ext_0046F930();
extern "C" void ext_005A6300();

// [0x004757A0] RuntimeEngine::vfunc_0_off_8 (67 bytes)
extern "C" __declspec(naked) void __fastcall fn_004757A0(void* self, int edx_unused, void* a1) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 0x8]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x54]
        call edx
        test eax, eax
        je done
        lea ecx, [esi - 0x8]
        test ecx, ecx
        je is_null
        lea edx, [esi + 0x4]
        mov dword ptr [esp + 0x8], edx
        jmp cont
    is_null:
        mov dword ptr [esp + 0x8], 0x0
    cont:
        lea ecx, [esp + 0x8]
        push ecx
        lea ecx, [eax + 0x4]
        call ext_005A6300
        lea ecx, [esi - 0x8]
        call ext_0046F930
    done:
        pop esi
        ret 0x4
    }
}
