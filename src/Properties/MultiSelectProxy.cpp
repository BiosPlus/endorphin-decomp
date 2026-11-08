// Decompiled translation unit: src/Properties/MultiSelectProxy.cpp

// [0x004EF2F0] Properties::MultiSelectProxy::vfunc_6 (18 bytes)
struct VDispatch004EF2F0 {
    virtual unsigned char vfunc_0();
};

extern "C" unsigned char __fastcall fn_004EF2F0(char* self) {
    if (*(VDispatch004EF2F0**)(self + 0x34) == 0) {
        return 0;
    }
    return (*(VDispatch004EF2F0**)(self + 0x34))->vfunc_0();
}
