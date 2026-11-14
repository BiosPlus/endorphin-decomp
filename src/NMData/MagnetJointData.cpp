// Decompiled translation unit: src/NMData/MagnetJointData.cpp

// [0x005F0D20] NMData::MagnetJointData::vfunc_8 (32 bytes)
extern "C" __declspec(naked) int __fastcall fn_005F0D20(void* self, int edx_unused, int a1) {
    __asm {
        push ecx
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0xec]
        push esi
        mov esi, dword ptr [esp + 0xc]
        push esi
        mov dword ptr [esp + 0x8], 0x0
        call edx
        mov eax, esi
        pop esi
        pop ecx
        ret 0x4
    }
}

// [0x005F0D40] NMData::MagnetJointData::vfunc_59 (34 bytes)
extern "C" int mem_00924FE4;
extern "C" __declspec(naked) void* __fastcall fn_005F0D40(void* self, int edx_unused, void* a1) {
    __asm {
        push ecx
        push esi
        mov esi, dword ptr [esp + 0xc]
        push 0x96afe8
        mov ecx, esi
        mov dword ptr [esp + 0x8], 0x0
        call dword ptr [mem_00924FE4]
        mov eax, esi
        pop esi
        pop ecx
        ret 0x4
    }
}

// [0x005EE590] NMData::MagnetJointData::vfunc_33 (104 bytes)
extern "C" void ext_00587920();
extern "C" void ext_005EDFD0();
extern "C" __declspec(naked) void __fastcall fn_005EE590(void* self) {
    __asm {
        push esi
        mov esi, ecx
        call ext_005EDFD0
        mov ecx, dword ptr [esi + 0x17c]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x84]
        call edx
        mov ecx, dword ptr [esi + 0x180]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x84]
        call edx
        mov ecx, dword ptr [esi + 0x184]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x84]
        call edx
        mov dword ptr [esi + 0x2fc], 0x0
        mov eax, dword ptr [esi + 0x180]
        push 0x0
        push eax
        mov ecx, esi
        call ext_00587920
        mov ecx, dword ptr [esi + 0x184]
        push 0x0
        push ecx
        mov ecx, dword ptr [esi + 0x17c]
        call ext_00587920
        pop esi
        ret
    }
}
