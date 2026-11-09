// Decompiled translation unit: src/classes/GWCPropertiesFactory.cpp

extern "C" void ext_006A5C5C(void* p);

// [0x006A7A20] GWCPropertiesFactory::vfunc_0 (31 bytes)
// Scalar deleting destructor: set vtable to 0x0099090C, delete self if arg0 & 1, return self.
extern "C" void* __fastcall fn_006A7A20(void* self, int edx_unused, unsigned int flags) {
    *(unsigned int*)self = 0x0099090C;
    if (flags & 1) {
        ext_006A5C5C(self);
    }
    return self;
}
