// Decompiled translation unit: src/NMData/BackGroundData.cpp

extern "C" void ext_005A7FA0();

// [0x005A9960] NMData::BackGroundData::vfunc_1 (15 bytes)
// Pushes 0 and arg0 and tail-calls 0x005A7FA0 (callee cleans up), then returns popping arg0.
extern "C" __declspec(naked) void __stdcall fn_005A9960(int a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push 0
        push eax
        call ext_005A7FA0
        ret 4
    }
}
