// Decompiled translation unit: src/VMCSModes/SimulationMode.cpp

// [0x004F28A0] VMCSModes::SimulationMode::vfunc_88 (19 bytes)
extern "C" void ext_0046F890();

typedef unsigned char (__fastcall *Callee_0046F890)(void* self);

extern "C" int __fastcall fn_004F28A0(void* self) {
    void* obj = *(void**)((char*)self + 0x8);
    void* inner = *(void**)((char*)obj + 0x14);
    unsigned char r = ((Callee_0046F890)ext_0046F890)(inner);
    return r ? 0 : 1;
}
