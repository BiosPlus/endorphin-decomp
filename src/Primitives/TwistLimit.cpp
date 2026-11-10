// Decompiled translation unit: src/Primitives/TwistLimit.cpp

extern "C" void ext_0053DF00();
extern "C" double mem_00955D28;

// [0x0053DF60] Primitives::TwistLimit::vfunc_25 (46 bytes)
extern "C" void __fastcall fn_0053DF60(void* self, int edx_unused, int a1, void* a2, int a3) {
    ((void (__thiscall*)(void*, int, void*, int))ext_0053DF00)(self, a1, a2, a3);
    unsigned char* s = (unsigned char*)self;
    unsigned char* o = (unsigned char*)a2;
    *(float*)(s + 0x40) = (float)(*(float*)(o + 0xb8) * mem_00955D28);
}
