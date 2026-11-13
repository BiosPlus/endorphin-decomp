// Decompiled translation unit: src/classes/AdvRenderOptions.cpp

extern "C" void __fastcall ext_00401740(void* self);
extern "C" int __fastcall ext_006A5E78(void* self, int edx_unused, void* pMsg);

// [0x00401800] AdvRenderOptions::vfunc_66 (41 bytes)
extern "C" int __fastcall fn_00401800(void* self, int edx_unused, unsigned int* pMsg) {
    if (pMsg[1] == 0x100 && pMsg[2] == 0x1B) {
        ext_00401740(self);
        return 1;
    }
    return ext_006A5E78(self, edx_unused, pMsg);
}
