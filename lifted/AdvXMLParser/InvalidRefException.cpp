// Lifted C++ translation unit: lifted/AdvXMLParser/InvalidRefException.cpp
#include "lift_compat.h"

// [0x0063EAD0] AdvXMLParser::InvalidRefException::vfunc_0 (89 bytes)
namespace lift_0063EAD0 {
// Known callee 0x0063E970: sub_0063E970 (Stores address of mem_0097CC34 into field at offset +0x0.)
extern void ext_0063E970(void* self);
// Known callee 0x006A5C5C: thunk_MFC80_ord_764 (IAT jump thunk forwarding to MFC80!ord_764.)
extern void ext_006A5C5C(void* p);

// @name AdvXMLParser::InvalidRefException::vfunc_0
// @class AdvXMLParser::InvalidRefException
// @summary Scalar deleting destructor: runs the base-class destructor, then frees this if flags bit 0 is set; returns this.
// @field AdvXMLParser::InvalidRefException +0x04 std::string member (destroyed via MSVCP80 basic_string dtor, pointer at mem_00924FF4)
void* fn_0063EAD0(void* self, unsigned int flags) {
    // Member std::string at +0x04 is destroyed first (MSVC-specific dtor; not
    // portable to call directly, so it is elided in this portable version).
    ext_0063E970(self);            // base dtor body: restore vtable to Exception
    if (flags & 1u) {
        ext_006A5C5C(self);        // operator delete(self)
    }
    return self;
}
} // namespace lift_0063EAD0
