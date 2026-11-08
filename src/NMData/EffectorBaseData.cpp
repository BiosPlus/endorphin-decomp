// Decompiled translation unit: src/NMData/EffectorBaseData.cpp

extern "C" int mem_00924EA8;

// [0x0060BB50] NMData::EffectorBaseData::vfunc_19 (22 bytes)
extern "C" __declspec(naked) void __fastcall fn_0060BB50(void* self) {
    __asm {
        push esi
        mov esi, ecx
        lea ecx, [esi + 4]
        call dword ptr [mem_00924EA8]
        lea ecx, [esi + 0x20]
        pop esi
        jmp dword ptr [mem_00924EA8]
    }
}
