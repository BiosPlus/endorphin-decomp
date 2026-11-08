// Decompiled translation unit: src/Properties/PropertySelectionEngine.cpp

// [0x004AECA0] Properties::PropertySelectionEngine::vfunc_3 (20 bytes)
extern "C" void ext_00677FB0();

extern "C" __declspec(naked) void __fastcall fn_004AECA0(void* self) {
    __asm {
        __asm _emit 0x83 __asm _emit 0x7C __asm _emit 0x24 __asm _emit 0x0C __asm _emit 0x00 // cmp dword ptr [esp + 0xc], 0x0
        __asm _emit 0x8B __asm _emit 0x49 __asm _emit 0x08 // mov ecx, dword ptr [ecx + 0x8]
        __asm _emit 0x0F __asm _emit 0x95 __asm _emit 0xC0 // setne al
        __asm _emit 0x89 __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x0C // mov dword ptr [esp + 0xc], eax
        jmp ext_00677FB0
    }
}
