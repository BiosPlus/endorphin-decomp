// Decompiled translation unit: src/Commands/ResizeCommand.cpp

extern "C" void ext_00484A70();

// [0x00485ED0] Commands::ResizeCommand::vfunc_2 (28 bytes)
extern "C" __declspec(naked) void __fastcall fn_00485ED0(void* self) {
    __asm {
        lea eax, [ecx + 0xb0]
        push eax
        lea edx, [ecx + 0x90]
        push edx
        lea eax, [ecx + 0x70]
        push eax
        lea edx, [ecx + 0x50]
        push edx
        call ext_00484A70
        ret
    }
}
