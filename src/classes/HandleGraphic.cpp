// Decompiled translation unit: src/classes/HandleGraphic.cpp

// [0x005528D0] HandleGraphic::vfunc_1 (16 bytes)
extern "C" void ext_005528A0();

extern "C" __declspec(naked) void __fastcall fn_005528D0(void* self) {
    __asm {
        __asm _emit 0xD9 __asm _emit 0xE8 // fld1
        __asm _emit 0xD9 __asm _emit 0x51 __asm _emit 0x04 // fst dword ptr [ecx + 0x4]
        __asm _emit 0xD9 __asm _emit 0x51 __asm _emit 0x08 // fst dword ptr [ecx + 0x8]
        __asm _emit 0xD9 __asm _emit 0x59 __asm _emit 0x0C // fstp dword ptr [ecx + 0xc]
        jmp ext_005528A0
    }
}
