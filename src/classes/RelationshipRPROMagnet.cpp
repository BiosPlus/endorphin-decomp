// Decompiled translation unit: src/classes/RelationshipRPROMagnet.cpp

extern "C" void ext_007C9260();
extern "C" void ext_007C97F0();
extern "C" void ext_007C9860();
extern "C" void ext_007C9930();
extern "C" void ext_007D8700();

// [0x00648EF0] RelationshipRPROMagnet::vfunc_49 (28 bytes)
extern "C" __declspec(naked) void __fastcall fn_00648EF0(void* self) {
    __asm {
        mov eax, dword ptr [ecx + 0x94]
        push eax
        call ext_007D8700
        push eax
        call ext_007C9260
        add esp, 0x8
        neg eax
        sbb eax, eax
        neg eax
        ret
    }
}

// [0x00648F10] RelationshipRPROMagnet::vfunc_6 (51 bytes)
extern "C" __declspec(naked) void __fastcall fn_00648F10(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x94]
        push eax
        call ext_007D8700
        push eax
        call ext_007C9260
        add esp, 8
        test eax, eax
        jnz loc_648F41
        mov ecx, dword ptr [esi + 0x94]
        push ecx
        call ext_007D8700
        push eax
        call ext_007C97F0
        add esp, 8
loc_648F41:
        pop esi
        ret
    }
}

// [0x00648F50] RelationshipRPROMagnet::vfunc_7 (51 bytes)
extern "C" __declspec(naked) void __fastcall fn_00648F50(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x94]
        push eax
        call ext_007D8700
        push eax
        call ext_007C9260
        add esp, 8
        test eax, eax
        je loc_648F81
        mov ecx, dword ptr [esi + 0x94]
        push ecx
        call ext_007D8700
        push eax
        call ext_007C9860
        add esp, 8
    loc_648F81:
        pop esi
        ret
    }
}

// [0x00648F90] RelationshipRPROMagnet::vfunc_50 (52 bytes)
extern "C" __declspec(naked) void __fastcall fn_00648F90(void* self) {
    __asm {
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 0x94], 0
        je done_648FC2
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x1c]
        call edx
        mov eax, dword ptr [esi + 0x94]
        push eax
        call ext_007D8700
        push eax
        call ext_007C9930
        add esp, 0x8
        mov dword ptr [esi + 0x94], 0
    done_648FC2:
        pop esi
        ret
    }
}
