// Decompiled translation unit: src/leaf/decompiled_450000.cpp

extern "C" void ext_00454BB0();

// [0x00454BE0] sub_00454BE0 (25 bytes)
// Stores arg0 into this->[0x120], replaces stack arg0 with it, then tail-jumps to 0x00454BB0 with ecx = this + 0x10c.
extern "C" __declspec(naked) void __fastcall fn_00454BE0(void* self) {
    __asm {
        mov eax, dword ptr [esp + 4]
        mov dword ptr [ecx + 0x120], eax
        mov dword ptr [esp + 4], eax
        add ecx, 0x10c
        jmp ext_00454BB0
    }
}

// [0x00455CD0] sub_00455CD0 (26 bytes)
extern "C" void ext_004090C0();
extern "C" void ext_00455CB0();

extern "C" __declspec(naked) void __fastcall fn_00455CD0(void* self) {
    __asm {
        mov eax, dword ptr [ecx + 0x98]
        cmp eax, 0xa
        je take_path
        cmp eax, 0xb
        je take_path
        jmp ext_004090C0
    take_path:
        jmp ext_00455CB0
    }
}
