// Decompiled translation unit: src/classes/TranslateTool.cpp

// [0x005471A0] TranslateTool::vfunc_29 (42 bytes)
extern "C" void __fastcall ext_005528A0(void* self);

extern "C" void __fastcall fn_005471A0(void* self) {
    char* p = (char*)self;
    ext_005528A0(p + 0x98);
    float* f = (float*)p;
    f[0xc0 / 4] = 0.0f;
    f[0xbc / 4] = 0.0f;
    f[0xb8 / 4] = 0.0f;
    f[0xb4 / 4] = 0.0f;
}
