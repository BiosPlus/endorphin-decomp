// Decompiled translation unit: src/classes/HelperGraphic.cpp

// [0x005F5750] HelperGraphic::vfunc_8_off_C (32 bytes)
extern "C" void __fastcall fn_005F5750(unsigned char* self, int edx_unused, unsigned char a1) {
    unsigned char v;
    if (self[0x201] != 0 && a1 != 0) {
        v = 1;
    } else {
        v = 0;
    }
    self[0x5c] = v;
}
