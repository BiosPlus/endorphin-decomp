// Decompiled translation unit: src/RuntimeEngine/SimulationAndRendererTicker.cpp

// [0x00473C40] RuntimeEngine::SimulationAndRendererTicker::vfunc_0 (11 bytes)
extern "C" void ext_00472C90();

extern "C" __declspec(naked) bool __fastcall fn_00473C40(void* self) {
    __asm {
        mov ecx, dword ptr [ecx + 0x4]
        call ext_00472C90
        mov al, 0x1
        ret
    }
}
