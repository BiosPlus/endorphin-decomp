// Decompiled translation unit: src/Commands/SetTriggeredEventEnabledCommand.cpp

extern "C" void ext_00665810();
extern "C" void ext_006A5C5C();

// [0x0048F7D0] Commands::SetTriggeredEventEnabledCommand::vfunc_0 (69 bytes)
extern "C" void* __fastcall fn_0048F7D0(void* self, int edx_unused, unsigned int flags) {
    char* s = (char*)self;
    void* p = *(void**)(s + 0x1c);
    if (p != 0) {
        ((void (__cdecl*)(void*))ext_006A5C5C)(p);
    }
    *(void**)(s + 0x1c) = 0;
    *(int*)(s + 0x20) = 0;
    *(int*)(s + 0x24) = 0;
    ((void (__fastcall*)(void*))ext_00665810)(self);
    if (flags & 1) {
        ((void (__cdecl*)(void*))ext_006A5C5C)(self);
    }
    return self;
}
