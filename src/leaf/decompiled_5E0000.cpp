// Decompiled translation unit: src/leaf/decompiled_5E0000.cpp

extern "C" unsigned int __stdcall ext_005E0770(unsigned int a1);

// [0x005E0E20] sub_005E0E20 (23 bytes)
// __thiscall, ret 4: forwards arg0 to 0x005E0770 and stores the result at this+0x308.
extern "C" void __fastcall fn_005E0E20(void* self, int edx_unused, unsigned int a1) {
    *(unsigned int*)((char*)self + 0x308) = ext_005E0770(a1);
}
