// Decompiled translation unit: src/Commands/SetSaveStartFrameCommand.cpp

extern "C" void ext_0046FDA0();

// [0x0048E0B0] Commands::SetSaveStartFrameCommand::vfunc_1 (13 bytes)
extern "C" __declspec(naked) void __fastcall fn_0048E0B0(void* self) {
    __asm {
        mov eax, dword ptr [ecx + 0x14]
        mov ecx, dword ptr [ecx + 0x10]
        push eax
        call ext_0046FDA0
        ret
    }
}
