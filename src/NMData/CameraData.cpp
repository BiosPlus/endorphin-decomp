// Decompiled translation unit: src/NMData/CameraData.cpp

// [0x005D1000] NMData::CameraData::vfunc_8_off_C (19 bytes)
extern "C" void ext_005CFE10();

struct CameraTailTarget {
    void tail(int a1);
};
typedef void (CameraTailTarget::*CameraTailFn)(int);

extern "C" void __fastcall fn_005D1000(void* self, int edx_unused, int a1) {
    unsigned char* p = (unsigned char*)self;
    *(unsigned char*)(p + 0x5c) = (unsigned char)a1;
    CameraTailTarget* next = (CameraTailTarget*)(p - 0xc);
    CameraTailFn f;
    *(void**)&f = (void*)ext_005CFE10;
    (next->*f)(a1);
}
