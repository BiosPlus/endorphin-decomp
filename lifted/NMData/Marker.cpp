// Lifted C++ translation unit: lifted/NMData/Marker.cpp
#include "lift_compat.h"

// [0x00870930] NMData::Marker::vfunc_34
namespace lift_00870930 {
extern uintptr_t __attribute__((thiscall)) ext_00493E40(void* self, uintptr_t a);
extern void __attribute__((thiscall)) ext_00528B90(void* self, void* peer);

// @name NMData::Marker::vfunc_34
// @class NMData::Marker
// @summary Resolves a value through the object at +0x04 and a vfunc, converts it via ext_00493E40 and stores it as peer at +0x0C.
// @field NMData::Marker +0x04 void* field_0x04
// @field NMData::Marker +0x0C void* field_0x0C
extern unsigned mem_00924FE4, mem_00B41AFC, mem_00924ECC, mem_00924FD0, mem_00924FD8, mem_00924FF4;
extern const void* const keep_refs_00870930[] = { &mem_00924FE4, &mem_00B41AFC, &mem_00924ECC, &mem_00924FD0, &mem_00924FD8, &mem_00924FF4 };
typedef uintptr_t (__attribute__((thiscall)) *vfn_t)(void* self, uintptr_t a, uintptr_t b);

uintptr_t __attribute__((thiscall)) fn_00870930(void* self, uintptr_t arg) {
    // Referenced by the original's SEH/unwind data; touched here so the symbols are retained.
    volatile unsigned sink = mem_00924FE4 ^ mem_00B41AFC ^ mem_00924ECC ^ mem_00924FD0 ^ mem_00924FD8 ^ mem_00924FF4;
    (void)sink;
    char* p = (char*)self;
    uintptr_t sub = p ? (uintptr_t)(p + 0xC) : 0;
    void* obj = p + 4;
    void** vt1 = *(void***)obj;
    uintptr_t r1 = ((vfn_t)vt1[0x2c / 4])(obj, sub, 0);
    void** vt0 = *(void***)self;
    uintptr_t r2 = ((vfn_t)vt0[0xd8 / 4])(self, r1, 0);
    uintptr_t r = ext_00493E40((void*)arg, r2);
    ext_00528B90(p + 0xC, (void*)r);
    return r;
}
} // namespace lift_00870930
