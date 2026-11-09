// Decompiled translation unit: src/Primitives/Bone.cpp

// [0x0053C4F0] Primitives::Bone::vfunc_13 (34 bytes)
extern "C" void __fastcall fn_0053C4F0(void* self, int edx_unused, const float* src) {
    unsigned char* p = static_cast<unsigned char*>(self);
    p[0x4] = 1;
    float* dst = reinterpret_cast<float*>(p + 0x3C);
    dst[0] = src[0];
    dst[1] = src[1];
    dst[2] = src[2];
    dst[3] = src[3];
}
