// Decompiled translation unit: src/Primitives/Sensor2.cpp

// [0x0053D990] Primitives::Sensor2::vfunc_25 (80 bytes)
extern "C" void __fastcall fn_0053D990(void* self, int edx_unused, int a1, void* a2, int a3) {
    unsigned int* flags = (unsigned int*)((char*)self + 0x1c);
    if (*flags & 0x2) *flags ^= 0x2;
    if (!(*flags & 0x4)) *flags ^= 0x4;
    if (!(*flags & 0x40000)) *flags ^= 0x40000;
    if (*flags & 0x1) *flags ^= 0x1;
    *(float*)((char*)self + 0x60) = *(float*)((char*)a2 + 0xbc);
    *(int*)((char*)self + 0x8) = a3;
}
