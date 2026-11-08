// Decompiled translation unit: src/NMData/FixedPathJointData.cpp

// [0x005E09B0] NMData::FixedPathJointData::vfunc_44 (20 bytes)
extern "C" __declspec(naked) void __fastcall fn_005E09B0(void* self) {
    __asm {
        __asm _emit 0x8B __asm _emit 0x89 __asm _emit 0x8C __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 // mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B __asm _emit 0x41 __asm _emit 0x04 // mov eax, dword ptr [ecx + 0x4]
        __asm _emit 0x8B __asm _emit 0x90 __asm _emit 0xB0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov edx, dword ptr [eax + 0xb0]
        __asm _emit 0x83 __asm _emit 0xC1 __asm _emit 0x04 // add ecx, 0x4
        __asm _emit 0xFF __asm _emit 0xE2 // jmp edx
    }
}
