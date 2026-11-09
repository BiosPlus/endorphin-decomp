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

// [0x004C7870] NMData::SeverEventData::vfunc_84 (42 bytes)
extern "C" __declspec(naked) void __fastcall fn_004C7870(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, ecx
        mov ecx, dword ptr [eax + 0x19c]
        test ecx, ecx
        je short L_004C7897
        cmp byte ptr [eax + 0x17c], 0x0
        je short L_004C7897
        mov edx, dword ptr [esp + 0x4]
        cmp edx, dword ptr [eax + 0x15c]
        jne short L_004C7897
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        call edx
L_004C7897:
        ret 0x4
    }
}
