// Decompiled translation unit: src/classes/ChangeSecondarySelectionCommand.cpp

extern "C" void ext_004AF870();

// [0x004AFE10] ChangeSecondarySelectionCommand::vfunc_1 (21 bytes)
extern "C" __declspec(naked) void __fastcall fn_004AFE10(void* self) {
    __asm {
        mov edx, dword ptr [ecx + 0x74]
        lea eax, [ecx + 0x54]
        push eax
        lea eax, [ecx + 0x14]
        mov ecx, dword ptr [ecx + 0x10]
        push edx
        push eax
        call ext_004AF870
        ret
    }
}

// [0x004AFE30] ChangeSecondarySelectionCommand::vfunc_2 (21 bytes)
extern "C" __declspec(naked) void __fastcall fn_004AFE30(void* self) {
    __asm {
        mov edx, dword ptr [ecx + 0x74]
        lea eax, [ecx + 0x34]
        push eax
        lea eax, [ecx + 0x14]
        mov ecx, dword ptr [ecx + 0x10]
        push edx
        push eax
        call ext_004AF870
        ret
    }
}

extern "C" int mem_00924FE4;

// [0x004AFDE0] ChangeSecondarySelectionCommand::vfunc_3 (34 bytes)
extern "C" __declspec(naked) void __fastcall fn_004AFDE0(void* self, int edx_unused, void* out) {
    __asm {
        push ecx
        push esi
        mov esi, dword ptr [esp + 0xc]
        push 0x941f98
        mov ecx, esi
        mov dword ptr [esp + 0x8], 0x0
        call dword ptr [mem_00924FE4]
        mov eax, esi
        pop esi
        pop ecx
        ret 0x4
    }
}
