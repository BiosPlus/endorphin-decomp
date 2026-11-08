// Decompiled translation unit: src/leaf/decompiled_660000.cpp

// [0x0066B060] sub_0066B060 (19 bytes)
extern "C" void ext_0065F440();

extern "C" __declspec(naked) void __fastcall fn_0066B060(void* self) {
    __asm {
        __asm _emit 0x85 __asm _emit 0xC9 // test ecx, ecx
        __asm _emit 0x74 __asm _emit 0x08 // je L_0066B06C
        __asm _emit 0x83 __asm _emit 0xC1 __asm _emit 0x04 // add ecx, 0x4
        jmp ext_0065F440
        __asm _emit 0x33 __asm _emit 0xC9 // xor ecx, ecx  (L_0066B06C)
        jmp ext_0065F440
    }
}
