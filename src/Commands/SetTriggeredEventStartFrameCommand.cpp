// Decompiled translation unit: src/Commands/SetTriggeredEventStartFrameCommand.cpp

// [0x0048F820] Commands::SetTriggeredEventStartFrameCommand::vfunc_0 (69 bytes)
extern "C" void ext_00665810();
extern "C" void ext_006A5C5C();

extern "C" void* __fastcall fn_0048F820(void* self, int edx_unused, int a1) {
    unsigned char* p = static_cast<unsigned char*>(self);
    void* held = *reinterpret_cast<void**>(p + 0x20);
    if (held != 0) {
        reinterpret_cast<void (__cdecl*)(void*)>(ext_006A5C5C)(held);
    }
    *reinterpret_cast<int*>(p + 0x20) = 0;
    *reinterpret_cast<int*>(p + 0x24) = 0;
    *reinterpret_cast<int*>(p + 0x28) = 0;
    reinterpret_cast<void (__fastcall*)(void*)>(ext_00665810)(self);
    if (a1 & 1) {
        reinterpret_cast<void (__cdecl*)(void*)>(ext_006A5C5C)(self);
    }
    return self;
}
