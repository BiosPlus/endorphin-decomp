// Decompiled translation unit: src/NMData/QuatChannel.cpp

extern "C" int mem_00925134;

// [0x0051C7C0] NMData::QuatChannel::vfunc_16 (32 bytes)
extern "C" __declspec(naked) void __fastcall fn_0051C7C0(void* self) {
    __asm {
        push ebx
        push esi
        mov esi, ecx
        mov ebx, dword ptr [esi + 0x30]
        cmp ebx, dword ptr [esi + 0x34]
        push edi
        lea edi, [esi + 0x2c]
        jbe L_ok
        call dword ptr [mem_00925134]
    L_ok:
        mov dword ptr [esi + 0x5c], edi
        pop edi
        mov dword ptr [esi + 0x60], ebx
        pop esi
        pop ebx
        ret
    }
}

extern "C" void ext_00519CE0();
extern "C" void ext_006A5C5C();

// [0x0051C5F0] NMData::QuatChannel::vfunc_0 (69 bytes)
extern "C" void* __fastcall fn_0051C5F0(void* self, int edx_unused, int a1) {
    unsigned char* p = static_cast<unsigned char*>(self);
    void* held = *reinterpret_cast<void**>(p + 0x30);
    if (held != 0) {
        reinterpret_cast<void (__cdecl*)(void*)>(ext_006A5C5C)(held);
    }
    *reinterpret_cast<int*>(p + 0x30) = 0;
    *reinterpret_cast<int*>(p + 0x34) = 0;
    *reinterpret_cast<int*>(p + 0x38) = 0;
    reinterpret_cast<void (__fastcall*)(void*)>(ext_00519CE0)(self);
    if (a1 & 1) {
        reinterpret_cast<void (__cdecl*)(void*)>(ext_006A5C5C)(self);
    }
    return self;
}
