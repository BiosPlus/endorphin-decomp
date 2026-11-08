// Decompiled translation unit: src/Commands/MirrorVMUpdateCommand.cpp

// [0x005AC690] Commands::MirrorVMUpdateCommand::vfunc_1 (17 bytes)
typedef void (__fastcall *VFuncFn)(void* self);

extern "C" void __fastcall fn_005AC690(void* self) {
    char* obj = *(char**)((char*)self + 0x10);
    void** vt = *(void***)(obj + 4);
    VFuncFn fn = (VFuncFn)vt[0xB0 / 4];
    fn(obj + 4);
}
