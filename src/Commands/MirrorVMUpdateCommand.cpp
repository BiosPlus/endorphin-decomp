// Decompiled translation unit: src/Commands/MirrorVMUpdateCommand.cpp

// [0x005AC690] Commands::MirrorVMUpdateCommand::vfunc_1 (17 bytes)
typedef void (__fastcall *VFuncFn)(void* self);

extern "C" void __fastcall fn_005AC690(void* self) {
    char* obj = *(char**)((char*)self + 0x10);
    void** vt = *(void***)(obj + 4);
    VFuncFn fn = (VFuncFn)vt[0xB0 / 4];
    fn(obj + 4);
}

// [0x005AC6B0] Commands::MirrorVMUpdateCommand::vfunc_3 (34 bytes)
extern "C" int mem_00924FE4;
extern "C" __declspec(naked) void __fastcall fn_005AC6B0(void* self, int edx_unused, void* out) {
    __asm {
        push ecx
        push esi
        mov esi, dword ptr [esp + 0xc]
        push 0x95f4f8
        mov ecx, esi
        mov dword ptr [esp + 0x8], 0
        call dword ptr [mem_00924FE4]
        mov eax, esi
        pop esi
        pop ecx
        ret 0x4
    }
}
