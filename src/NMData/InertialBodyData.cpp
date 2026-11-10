// Decompiled translation unit: src/NMData/InertialBodyData.cpp

// [0x005CE870] NMData::InertialBodyData::vfunc_1_off_4 (58 bytes)
typedef void (__thiscall *Vec4Fn)(void* self, float* v);

extern "C" void __fastcall fn_005CE870(void* self, int edx_unused, const float* src) {
    float tmp[4];
    tmp[0] = src[0];
    void* obj = (char*)*(void**)((char*)self + 0xac) + 0xc;
    tmp[1] = src[1];
    tmp[2] = src[2];
    tmp[3] = 1.0f;
    void** vtbl = *(void***)obj;
    Vec4Fn fn = (Vec4Fn)vtbl[5];
    fn(obj, tmp);
}
