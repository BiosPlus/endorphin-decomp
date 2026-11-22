// Lifted C++ translation unit: lifted/Geometry/FileType.cpp
#include "lift_compat.h"
// Known callee 0x005B1140: sub_005B1140 (Stores address of mem_0095F7EC into field at offset +0x0.)
extern "C" void ext_005B1140(void* self);
// Known callee 0x006A5C5C: thunk_MFC80_ord_764 (IAT jump thunk forwarding to MFC80!ord_764.)
extern "C" void ext_006A5C5C(void* p);
// IAT slot holding the MSVCP80 std::basic_string<char> destructor.
extern "C" int mem_00924FF4;

// [0x005B35D0] Geometry::FileType::vfunc_0 (89 bytes)
// @name Geometry::FileType::vfunc_0
// @class Geometry::FileType
// @summary Scalar deleting destructor: destroys the member string at +0x04, runs the GeometryType base destructor, and frees the object when bit 0 of deleteFlag is set.
// @field Geometry::FileType +0x04 std::string field_0x04
void fn_005B35D0(void* self, int deleteFlag) {
    // Destroy the embedded std::string at this+0x04 (indirect call through IAT slot).
    auto strDtor = reinterpret_cast<void (*)(void*)>(
        static_cast<uintptr_t>(static_cast<uint32_t>(mem_00924FF4)));
    strDtor(static_cast<char*>(self) + 0x4);

    // Base-class destructor (GeometryType).
    ext_005B1140(self);

    // Deleting-destructor path: free the object when requested.
    if (deleteFlag & 1) {
        ext_006A5C5C(self);
    }
}
