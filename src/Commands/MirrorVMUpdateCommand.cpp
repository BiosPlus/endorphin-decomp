// Decompiled translation unit: src/Commands/MirrorVMUpdateCommand.cpp

// [0x005AC690] Commands::MirrorVMUpdateCommand::vfunc_1 (17 bytes)
extern "C" __declspec(naked) void __fastcall fn_005AC690(void* self) {
    __asm {
        __asm _emit 0x8B __asm _emit 0x49 __asm _emit 0x10 // mov ecx, dword ptr [ecx + 0x10]
        __asm _emit 0x8B __asm _emit 0x41 __asm _emit 0x04 // mov eax, dword ptr [ecx + 0x4]
        __asm _emit 0x8B __asm _emit 0x90 __asm _emit 0xB0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // mov edx, dword ptr [eax + 0xb0]
        __asm _emit 0x83 __asm _emit 0xC1 __asm _emit 0x04 // add ecx, 0x4
        __asm _emit 0xFF __asm _emit 0xE2 // jmp edx
    }
}
