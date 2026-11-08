// Decompiled translation unit: src/classes/HandleGraphic.cpp

struct HandleGraphic_5528D0 {
    void** vtbl;   // +0x00
    float f4;      // +0x04
    float f8;      // +0x08
    float fc;      // +0x0c
};

extern "C" void ext_005528A0();

// [0x005528D0] HandleGraphic::vfunc_1 (16 bytes)
extern "C" void __fastcall fn_005528D0(HandleGraphic_5528D0* self) {
    self->f4 = 1.0f;
    self->f8 = 1.0f;
    self->fc = 1.0f;
    ext_005528A0();
}
