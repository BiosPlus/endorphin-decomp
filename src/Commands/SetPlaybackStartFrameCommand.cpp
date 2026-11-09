// Decompiled translation unit: src/Commands/SetPlaybackStartFrameCommand.cpp

extern "C" void ext_00473670();

// [0x0048E070] Commands::SetPlaybackStartFrameCommand::vfunc_1 (13 bytes)
extern "C" __declspec(naked) void __fastcall fn_0048E070(void* self) {
    __asm {
        mov eax, dword ptr [ecx + 0x14]
        mov ecx, dword ptr [ecx + 0x10]
        push eax
        call ext_00473670
        ret
    }
}
