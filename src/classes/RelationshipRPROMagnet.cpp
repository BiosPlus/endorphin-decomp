// Decompiled translation unit: src/classes/RelationshipRPROMagnet.cpp

extern "C" void ext_0064B900();
extern "C" void ext_0067E510();
extern "C" void ext_0067E7B0();
extern "C" void ext_007C9260();
extern "C" void ext_007C9370();
extern "C" void ext_007C97F0();
extern "C" void ext_007C9860();
extern "C" void ext_007C9930();
extern "C" void ext_007C9A60();
extern "C" void ext_007D8700();
extern "C" int mem_00A9BEB0;
extern "C" int mem_00968ED8;

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

// [0x0064C010] RelationshipRPROMagnet::vfunc_47 (141 bytes)
extern "C" __declspec(naked) void __fastcall fn_0064C010(void* self, int edx_unused, void* a1) {
    __asm {
        sub esp, 0x10
        fldz
        push esi
        push edi
        fst dword ptr [esp + 0x14]
        lea eax, [esp + 0x8]
        fst dword ptr [esp + 0x10]
        push eax
        fst dword ptr [esp + 0x10]
        mov edi, ecx
        fstp dword ptr [esp + 0xc]
        mov ecx, dword ptr [edi + 0x94]
        push 0x0
        push ecx
        call ext_007C9A60
        mov esi, dword ptr [esp + 0x28]
        add esp, 0xc
        lea edx, [esp + 0x8]
        push edx
        mov ecx, esi
        call ext_0067E510
        fld qword ptr [mem_00A9BEB0]
        fstp dword ptr [esp + 0x1c]
        push ecx
        fld dword ptr [esp + 0x20]
        mov ecx, esi
        fstp dword ptr [esp]
        call ext_0067E7B0
        fld dword ptr [mem_00968ED8]
        push ecx
        mov ecx, esi
        fstp dword ptr [esp]
        call ext_0064B900
        mov eax, dword ptr [edi + 0x94]
        add esi, 0x30
        push esi
        push eax
        call ext_007D8700
        add esp, 0x4
        push eax
        call ext_007C9370
        add esp, 0x8
        pop edi
        pop esi
        add esp, 0x10
        ret 0x4
    }
}
