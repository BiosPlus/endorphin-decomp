// Decompiled translation unit: src/Properties/MultiSelectProxy.cpp

// [0x004EF2F0] Properties::MultiSelectProxy::vfunc_6 (18 bytes)
struct VDispatch004EF2F0 {
    virtual unsigned char vfunc_0();
};

extern "C" unsigned char __fastcall fn_004EF2F0(char* self) {
    if (*(VDispatch004EF2F0**)(self + 0x34) == 0) {
        return 0;
    }
    return (*(VDispatch004EF2F0**)(self + 0x34))->vfunc_0();
}

// [0x004F27A0] Properties::MultiSelectProxy::vfunc_0_off_4 (28 bytes)
extern "C" void ext_004F2750();

extern "C" __declspec(naked) void __fastcall fn_004F27A0(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        sub eax, 0x1
        jne L_004F27B9
        mov eax, dword ptr [ecx + 0x44]
        lea edx, [ecx + 0x34]
        push eax
        push edx
        add ecx, -0x4
        call ext_004F2750
L_004F27B9:
        ret 0x4
    }
}
