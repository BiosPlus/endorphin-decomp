// Decompiled translation unit: src/NMData/PoseData.cpp

// [0x0048C120] NMData::PoseData::vfunc_6 (35 bytes)
extern "C" int mem_00A9F1A4;
extern "C" int mem_00924FE4;

extern "C" __declspec(naked) void* __fastcall fn_0048C120(void* ecx_unused, int edx_unused, void* a1) {
    __asm {
        push ecx
        mov eax, dword ptr [mem_00A9F1A4]
        push esi
        mov esi, dword ptr [esp + 0xc]
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0x8], 0
        call dword ptr [mem_00924FE4]
        mov eax, esi
        pop esi
        pop ecx
        ret 0x4
    }
}
