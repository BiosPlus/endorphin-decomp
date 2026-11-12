// Decompiled translation unit: src/classes/VideoImporter.cpp

// [0x00403210] VideoImporter::vfunc_0 (57 bytes)
extern "C" void ext_00558920();
extern "C" void ext_006A5C5C();
extern "C" int mem_009242F4;

extern "C" void* __fastcall fn_00403210(void* self, int edx_unused, char flags) {
    char* p = static_cast<char*>(self);
    *reinterpret_cast<int*>(p) = 0x929364;
    *reinterpret_cast<int*>(p + 4) = 0x92935c;
    reinterpret_cast<void (__fastcall*)(void*)>(mem_009242F4)(p + 0x478);
    reinterpret_cast<void (__fastcall*)(void*)>(ext_00558920)(p);
    if (flags & 1) {
        reinterpret_cast<void (__cdecl*)(void*)>(ext_006A5C5C)(p);
    }
    return self;
}
