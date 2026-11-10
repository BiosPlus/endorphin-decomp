// Decompiled translation unit: src/classes/InvalidXMLException.cpp

extern "C" void ext_00401BB0();
extern "C" void ext_006A5C5C(void* p);

// [0x0065C800] InvalidXMLException::vfunc_0 (36 bytes)
extern "C" void* __fastcall fn_0065C800(void* self, int edx_unused, int flags) {
    void** p = (void**)self;
    *p = (void*)0x009849C8;
    ext_00401BB0();
    if (flags & 1) {
        ext_006A5C5C(self);
    }
    return self;
}
