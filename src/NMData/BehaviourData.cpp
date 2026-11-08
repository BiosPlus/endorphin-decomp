// Decompiled translation unit: src/NMData/BehaviourData.cpp

// [0x00486C20] NMData::BehaviourData::vfunc_68 (31 bytes)
extern "C" void ext_0047D300();
extern "C" int mem_00AE29D0;

extern "C" __declspec(naked) void __fastcall fn_00486C20(void* self) {
    __asm {
        mov al, byte ptr [esp + 0x4]
        mov byte ptr [ecx + 0x17c], al
        mov ecx, dword ptr [ecx + 0x168]
        mov dword ptr [esp + 0x4], ecx
        mov ecx, dword ptr [mem_00AE29D0]
        jmp ext_0047D300
    }
}
