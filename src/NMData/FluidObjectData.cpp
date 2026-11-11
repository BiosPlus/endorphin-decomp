// Decompiled translation unit: src/NMData/FluidObjectData.cpp

// [0x005C32B0] NMData::FluidObjectData::vfunc_15 (32 bytes)
extern "C" void ext_005C3010();

extern "C" __declspec(naked) void __fastcall fn_005C32B0(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0xc]
        push esi
        mov esi, dword ptr [esp + 0xc]
        push eax
        push esi
        mov dword ptr [esp + 0xc], 0
        call ext_005C3010
        mov eax, esi
        pop esi
        pop ecx
        ret 8
    }
}

// [0x005C3270] NMData::FluidObjectData::vfunc_62 (34 bytes)
extern "C" int mem_00924FE0;

extern "C" __declspec(naked) void __fastcall fn_005C3270(void* self, int edx_unused, int a1) {
    __asm {
        push ecx
        push esi
        mov esi, dword ptr [esp + 0xc]
        push 0xb44944
        mov ecx, esi
        mov dword ptr [esp + 8], 0
        call dword ptr [mem_00924FE0]
        mov eax, esi
        pop esi
        pop ecx
        ret 4
    }
}

// [0x005C44A0] NMData::FluidObjectData::vfunc_33 (118 bytes)
extern "C" void ext_005C3660();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FDC;
extern "C" int mem_00924FF4;
extern "C" __declspec(naked) void __fastcall fn_005C44A0(void* self) {
    __asm {
        push -1
        push 0x8b56f9
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x1c
        push esi
        mov esi, ecx
        push 0x928b5d
        lea ecx, [esp + 0x8]
        call dword ptr [mem_00924FE4]
        lea eax, [esp + 0x4]
        push eax
        lea ecx, [esi + 0x17c]
        mov dword ptr [esp + 0x2c], 0
        call dword ptr [mem_00924FDC]
        lea ecx, [esp + 0x4]
        mov dword ptr [esp + 0x28], -1
        call dword ptr [mem_00924FF4]
        mov ecx, esi
        mov dword ptr [esi + 0x198], 0
        call ext_005C3660
        mov ecx, dword ptr [esp + 0x20]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x28
        ret
    }
}
