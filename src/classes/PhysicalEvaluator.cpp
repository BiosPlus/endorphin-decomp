// Decompiled translation unit: src/classes/PhysicalEvaluator.cpp

extern "C" void ext_0046F7F0();
extern "C" void ext_00472350();

// [0x00517DF0] PhysicalEvaluator::vfunc_1 (26 bytes)
extern "C" __declspec(naked) void __fastcall fn_00517DF0(void* self) {
    __asm {
        fld dword ptr [esp + 4]
        fstp qword ptr [ecx + 0x28]
        mov byte ptr [ecx + 0x20], 1
        call ext_0046F7F0
        mov ecx, eax
        call ext_00472350
        ret 4
    }
}
