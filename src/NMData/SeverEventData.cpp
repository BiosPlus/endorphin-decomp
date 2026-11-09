// Decompiled translation unit: src/NMData/SeverEventData.cpp

extern "C" void ext_00437AD0();
extern "C" void ext_004C7F50();

// [0x004C8160] NMData::SeverEventData::vfunc_87 (29 bytes)
extern "C" __declspec(naked) void __fastcall fn_004C8160(void* self) {
    __asm {
        push esi
        lea esi, [ecx + 0x19c]
        mov ecx, dword ptr [esi]
        test ecx, ecx
        je L_004C817B
        call ext_00437AD0
        push 0x0
        mov ecx, esi
        call ext_004C7F50
L_004C817B:
        pop esi
        ret
    }
}
