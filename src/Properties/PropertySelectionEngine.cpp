// Decompiled translation unit: src/Properties/PropertySelectionEngine.cpp

extern "C" void ext_00677FB0();

// [0x004AECA0] Properties::PropertySelectionEngine::vfunc_3 (20 bytes)
// Tail-call: forwards (self->+0x8, flag != 0) to ext_00677FB0.
extern "C" __declspec(naked) void __fastcall fn_004AECA0(void* self) {
    __asm {
        cmp dword ptr [esp + 0xc], 0
        mov ecx, dword ptr [ecx + 0x8]
        setne al
        mov dword ptr [esp + 0xc], eax
        jmp ext_00677FB0
    }
}
