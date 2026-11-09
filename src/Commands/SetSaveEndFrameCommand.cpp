// Decompiled translation unit: src/Commands/SetSaveEndFrameCommand.cpp

extern "C" void ext_0046FDC0();

// [0x0048E0D0] Commands::SetSaveEndFrameCommand::vfunc_1 (13 bytes)
extern "C" __declspec(naked) void __fastcall fn_0048E0D0(void* self) {
    __asm {
        mov eax, dword ptr [ecx + 0x14]
        mov ecx, dword ptr [ecx + 0x10]
        push eax
        call ext_0046FDC0
        ret
    }
}

// [0x0048E0E0] Commands::SetSaveEndFrameCommand::vfunc_2 (13 bytes)
extern "C" __declspec(naked) void __fastcall fn_0048E0E0(void* self) {
    __asm {
        mov eax, dword ptr [ecx + 0x18]
        mov ecx, dword ptr [ecx + 0x10]
        push eax
        call ext_0046FDC0
        ret
    }
}
