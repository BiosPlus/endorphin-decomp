// Decompiled translation unit: src/NMData/SensorData.cpp

extern "C" int mem_00924EA8;
extern "C" int mem_0093F7B8;

// [0x0060E540] NMData::SensorData::vfunc_62 (66 bytes)
extern "C" __declspec(naked) void __fastcall fn_0060E540(void* self) {
    __asm {
        push esi
        mov esi, ecx
        lea ecx, [esi + 0x14]
        call dword ptr [mem_00924EA8]
        lea ecx, [esi + 0x154]
        call dword ptr [mem_00924EA8]
        fld dword ptr [mem_0093F7B8]
        fstp dword ptr [esi + 0x174]
        mov dword ptr [esi + 0xe8], 0xffffffff
        fld1
        mov dword ptr [esi + 0x170], 0
        fstp dword ptr [esi + 0x178]
        pop esi
        ret
    }
}
