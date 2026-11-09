// Decompiled translation unit: src/Commands/DestroyTriggeredEventCommand.cpp

extern "C" void ext_0047D7C0();

// [0x0048E3B0] Commands::DestroyTriggeredEventCommand::vfunc_2 (26 bytes)
extern "C" __declspec(naked) void __fastcall fn_0048E3B0(void* self) {
    __asm {
        cmp dword ptr [ecx + 0x18], 0x0
        je L_0048E3C9
        mov eax, dword ptr [ecx + 0x14]
        mov dword ptr [ecx + 0x14], 0x0
        mov ecx, dword ptr [ecx + 0x18]
        push eax
        call ext_0047D7C0
L_0048E3C9:
        ret
    }
}
