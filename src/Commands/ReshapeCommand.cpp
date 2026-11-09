// Decompiled translation unit: src/Commands/ReshapeCommand.cpp

// [0x00486020] Commands::ReshapeCommand::vfunc_2 (21 bytes)
extern "C" void ext_00484CA0();

extern "C" __declspec(naked) void __fastcall fn_00486020(void* self) {
    __asm {
        lea eax, [ecx + 0x90]
        push eax
        lea edx, [ecx + 0x70]
        push edx
        lea eax, [ecx + 0x50]
        push eax
        call ext_00484CA0
        ret
    }
}
