// Decompiled translation unit: src/classes/HasBufferedVector.cpp

extern "C" int mem_00B58E98;
extern "C" int mem_00B58E94;
extern "C" int mem_00B58E90;
extern "C" int mem_00B58E8C;

// [0x0065D070] HasBufferedVector::vfunc_1 (45 bytes)
extern "C" int* __cdecl fn_0065D070(void) {
    if (mem_00B58E98 & 1) {
        return &mem_00B58E8C;
    }
    mem_00B58E98 |= 1;
    *(float*)&mem_00B58E94 = 0.0f;
    *(float*)&mem_00B58E90 = 0.0f;
    *(float*)&mem_00B58E8C = 0.0f;
    return &mem_00B58E8C;
}
