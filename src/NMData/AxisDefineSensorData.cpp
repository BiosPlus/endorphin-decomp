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

// [0x0058F6B0] NMData::AxisDefineSensorData::vfunc_14 (54 bytes)
extern "C" void ext_00661650();
extern "C" void ext_006619B0();

extern "C" __declspec(naked) void* __fastcall fn_0058F6B0(void* self, int edx_unused, void* a1, int a2) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0xc]
        cmp eax, 0x199
        push esi
        mov esi, dword ptr [esp + 0xc]
        mov dword ptr [esp + 0x4], 0x0
        je special
        push eax
        push esi
        call ext_006619B0
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    special:
        push ecx
        mov ecx, esi
        call ext_00661650
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    }
}
