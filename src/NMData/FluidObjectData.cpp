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
