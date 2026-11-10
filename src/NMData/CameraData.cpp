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

// [0x005D06E0] NMData::CameraData::vfunc_57 (44 bytes)
extern "C" void ext_0058A3C0();
extern "C" void ext_005CFD60();

extern "C" __declspec(naked) void* __fastcall fn_005D06E0(void* self, int edx_unused, int a1) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        push edi
        mov esi, ecx
        call ext_005CFD60
        cmp eax, 0x3
        je L_vfunc57
        pop edi
        lea eax, [esi + 8*eax + 0x264]
        pop esi
        ret 0x4
    L_vfunc57:
        push edi
        mov ecx, esi
        call ext_0058A3C0
        pop edi
        pop esi
        ret 0x4
    }
}
