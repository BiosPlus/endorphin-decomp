// Decompiled translation unit: src/NMData/SecondaryTwistAndSwingConstraint.cpp

// [0x0061F990] NMData::SecondaryTwistAndSwingConstraint::vfunc_15 (102 bytes)
extern "C" void ext_005DF1F0();
extern "C" void ext_0061EFD0();
extern "C" void ext_0061EFF0();
extern "C" void ext_0061F010();

extern "C" __declspec(naked) int __fastcall fn_0061F990(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push ecx
        mov edx, dword ptr [esp + 0xc]
        mov eax, edx
        sub eax, 0x33b
        push esi
        mov esi, dword ptr [esp + 0xc]
        mov dword ptr [esp + 0x4], 0x0
        je L_33b
        sub eax, 0x3
        je L_3
        sub eax, 0x18
        je L_18
        push edx
        push esi
        call ext_005DF1F0
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    L_18:
        push ecx
        push esi
        call ext_0061EFD0
        add esp, 0x8
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    L_3:
        push ecx
        push esi
        call ext_0061F010
        add esp, 0x8
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    L_33b:
        push ecx
        push esi
        call ext_0061EFF0
        add esp, 0x8
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    }
}

// [0x00611830] NMData::SecondaryTwistAndSwingConstraint::vfunc_14 (54 bytes)
extern "C" void ext_0058F6B0();
extern "C" void ext_00661650();

extern "C" __declspec(naked) void* __fastcall fn_00611830(void* self, int edx_unused, void* a1, int a2) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0xc]
        cmp eax, 0x159
        push esi
        mov esi, dword ptr [esp + 0xc]
        mov dword ptr [esp + 0x4], 0x0
        je special
        push eax
        push esi
        call ext_0058F6B0
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    special:
        push ecx
        mov ecx, esi
        call ext_00661650
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    }
}
