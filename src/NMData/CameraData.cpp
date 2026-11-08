// Decompiled translation unit: src/NMData/CameraData.cpp

// [0x005D1000] NMData::CameraData::vfunc_8_off_C (19 bytes)
extern "C" void ext_005CFE10();

extern "C" __declspec(naked) void __fastcall fn_005D1000(void* self) {
    __asm {
        __asm _emit 0x8B __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 // mov eax, dword ptr [esp + 0x4]
        __asm _emit 0x88 __asm _emit 0x41 __asm _emit 0x5C // mov byte ptr [ecx + 0x5c], al
        __asm _emit 0x89 __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 // mov dword ptr [esp + 0x4], eax
        __asm _emit 0x83 __asm _emit 0xC1 __asm _emit 0xF4 // add ecx, -0xc
        jmp ext_005CFE10
    }
}
