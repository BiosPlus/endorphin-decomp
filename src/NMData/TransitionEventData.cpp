// Decompiled translation unit: src/NMData/TransitionEventData.cpp

// [0x004D0CF0] NMData::TransitionEventData::vfunc_81 (67 bytes)
extern "C" void ext_00594000();
extern "C" void ext_00594640();
extern "C" void ext_005AA830();
extern "C" void ext_004C0340();

extern "C" __declspec(naked) void __fastcall fn_004D0CF0(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        push eax
        mov esi, ecx
        call ext_00594000
        mov ecx, eax
        call ext_00594640
        test eax, eax
        mov dword ptr [esi + 0x168], eax
        je L_skip
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 0x28]
        call eax
        test al, al
        je L_skip
        push 0x0
        lea ecx, [esi + 0x198]
        call ext_005AA830
    L_skip:
        mov ecx, esi
        call ext_004C0340
        pop esi
        ret 0x4
    }
}
