// Decompiled translation unit: src/Commands/SetPlaybackEndFrameCommand.cpp

extern "C" void ext_004736B0();

// [0x0048E090] Commands::SetPlaybackEndFrameCommand::vfunc_1 (13 bytes)
extern "C" __declspec(naked) void __fastcall fn_0048E090(void* self) {
    __asm {
        mov eax, dword ptr [ecx + 0x14]
        mov ecx, dword ptr [ecx + 0x10]
        push eax
        call ext_004736B0
        ret
    }
}

// [0x0048E0A0] Commands::SetPlaybackEndFrameCommand::vfunc_2 (13 bytes)
extern "C" __declspec(naked) void __fastcall fn_0048E0A0(void* self) {
    __asm {
        mov eax, dword ptr [ecx + 0x18]
        mov ecx, dword ptr [ecx + 0x10]
        push eax
        call ext_004736B0
        ret
    }
}
