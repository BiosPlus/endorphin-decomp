// Decompiled translation unit: src/NMData/SkeletalCalibrationVariables.cpp

// [0x00622380] NMData::SkeletalCalibrationVariables::vfunc_28 (34 bytes)
extern "C" int mem_00924FE4;
extern "C" int mem_0097703C;

// Constructs std::string("SkeletalCalibrationVariables") into the sret buffer a1 and returns a1.
extern "C" __declspec(naked) void* __fastcall fn_00622380(void* self, int edx_unused, void* a1, int a2) {
    __asm {
        push ecx
        push esi
        mov esi, dword ptr [esp + 0xc]
        push offset mem_0097703C
        mov ecx, esi
        mov dword ptr [esp + 0x8], 0x0
        call dword ptr [mem_00924FE4]
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    }
}
