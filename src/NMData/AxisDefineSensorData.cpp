// Decompiled translation unit: src/NMData/AxisDefineSensorData.cpp

// [0x0060F0B0] NMData::AxisDefineSensorData::vfunc_0_off_150 (25 bytes)
extern "C" void ext_00480920();

extern "C" __declspec(naked) void __fastcall fn_0060F0B0(void* self, int edx_unused, void* dst) {
    __asm {
        push esi
        push edi
        call ext_00480920
        mov edi, dword ptr [esp + 0xc]
        mov ecx, 0x10
        mov esi, eax
        rep movsd
        pop edi
        pop esi
        ret 4
    }
}

// [0x0060E690] NMData::AxisDefineSensorData::vfunc_62 (44 bytes)
extern "C" void ext_0060E540();
extern "C" int mem_00924EA8;

extern "C" void __fastcall fn_0060E690(void* self) {
    typedef void (__fastcall *ThisFn)(void* self);
    unsigned char* p = (unsigned char*)self;
    ((ThisFn)ext_0060E540)(self);
    (*(ThisFn*)&mem_00924EA8)(p + 0x180);
    (*(ThisFn*)&mem_00924EA8)(p + 0x19c);
    *(unsigned int*)(p + 0x1b8) = 0;
}
