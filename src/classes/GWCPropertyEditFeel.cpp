// Decompiled translation unit: src/classes/GWCPropertyEditFeel.cpp

extern "C" void ext_006A5C62();
extern "C" void ext_006B0CA0();

// [0x006B28A0] GWCPropertyEditFeel::vfunc_6 (86 bytes)
extern "C" __declspec(naked) void __fastcall fn_006B28A0(void* self) {
    __asm {
        push -1
        push 0x00876A9A
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push 0x6c
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp], eax
        test eax, eax
        mov dword ptr [esp + 0xc], 0
        je L_null
        mov ecx, eax
        call ext_006B0CA0
        mov ecx, dword ptr [esp + 0x4]
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    L_null:
        mov ecx, dword ptr [esp + 0x4]
        xor eax, eax
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}
