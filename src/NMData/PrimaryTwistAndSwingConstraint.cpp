// Decompiled translation unit: src/NMData/PrimaryTwistAndSwingConstraint.cpp

// [0x00611EA0] NMData::PrimaryTwistAndSwingConstraint::vfunc_63 (39 bytes)
extern "C" void __fastcall fn_00611EA0(void* self) {
    unsigned char* p = (unsigned char*)self;
    *(unsigned char*)(p + 0x168) = 1;
    *(unsigned char*)(p + 0x169) = 1;
    *(unsigned char*)(p + 0x16a) = 1;
    *(unsigned char*)(p + 0x228) = 1;
    *(unsigned char*)(p + 0x229) = 1;
    *(unsigned char*)(p + 0x22a) = 1;
}

// [0x00611A10] NMData::PrimaryTwistAndSwingConstraint::vfunc_67 (47 bytes)
extern "C" float __fastcall fn_00611A10(void* self, int edx_unused, int idx) {
    if (idx < 4) {
        void** vt = *(void***)self;
        typedef float* (__thiscall *VFn)(void* self, float* out);
        float tmp[3];
        float* p = ((VFn)vt[0x110 / 4])(self, tmp);
        return p[idx];
    }
    return 0.0f;
}
