// Decompiled translation unit: src/templates/MultiSymbolMap.cpp

// [0x005A2D70] MultiSymbolMap<PointainerMap<std::basic_string<char, std::char_traits<char>, std::allocator<char>>, NMData::RelationshipData>>::vfunc_0 (69 bytes)
extern "C" void ext_0065F440();
extern "C" void ext_006A5C5C();

extern "C" void* __fastcall fn_005A2D70(void* self, int edx_unused, int a1) {
    unsigned char* p = static_cast<unsigned char*>(self);
    void* held = *reinterpret_cast<void**>(p + 0x08);
    if (held != 0) {
        reinterpret_cast<void (__cdecl*)(void*)>(ext_006A5C5C)(held);
    }
    *reinterpret_cast<int*>(p + 0x08) = 0;
    *reinterpret_cast<int*>(p + 0x0c) = 0;
    *reinterpret_cast<int*>(p + 0x10) = 0;
    reinterpret_cast<void (__fastcall*)(void*)>(ext_0065F440)(self);
    if (a1 & 1) {
        reinterpret_cast<void (__cdecl*)(void*)>(ext_006A5C5C)(self);
    }
    return self;
}
