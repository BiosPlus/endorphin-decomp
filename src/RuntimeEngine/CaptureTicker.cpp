// Decompiled translation unit: src/RuntimeEngine/CaptureTicker.cpp

extern "C" void ext_00472D80();

// [0x00473C30] RuntimeEngine::CaptureTicker::vfunc_0 (11 bytes)
extern "C" __declspec(naked) bool __fastcall fn_00473C30(void* self) {
    __asm {
        mov ecx, dword ptr [ecx + 0x4]
        call ext_00472D80
        mov al, 0x1
        ret
    }
}
