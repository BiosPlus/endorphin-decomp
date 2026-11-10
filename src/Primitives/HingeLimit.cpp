// Decompiled translation unit: src/Primitives/HingeLimit.cpp

extern "C" void ext_0053A610();
extern "C" double mem_00955D28;

// [0x0053DEA0] Primitives::HingeLimit::vfunc_25 (81 bytes)
extern "C" void __fastcall fn_0053DEA0(void* self, int edx_unused, int a1, void* a2, int a3) {
    ((void (__thiscall*)(void*, int, void*, int))ext_0053A610)(self, a1, a2, a3);
    unsigned char* s = (unsigned char*)self;
    unsigned char* o = (unsigned char*)a2;
    unsigned int f = *(unsigned int*)(s + 0x1c);
    if (f & 0x40) {
        f ^= 0x40;
        *(unsigned int*)(s + 0x1c) = f;
    }
    f = *(unsigned int*)(s + 0x1c);
    if (!(f & 0x4)) {
        f ^= 0x4;
        *(unsigned int*)(s + 0x1c) = f;
    }
    *(int*)(s + 0x3c) = *(int*)(o + 0x94);
    *(float*)(s + 0x40) = (float)(*(float*)(o + 0xb8) * mem_00955D28);
}
