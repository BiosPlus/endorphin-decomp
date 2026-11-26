// Lifted C++ translation unit: lifted/AdvXMLParser/InvalidRefException.cpp
#include "lift_compat.h"

// [0x0063EAD0]
namespace lift_0063EAD0 {
// @name AdvXMLParser::InvalidRefException::vfunc_0
// @class AdvXMLParser::InvalidRefException
// @summary Scalar deleting destructor for AdvXMLParser::InvalidRefException.
// @field AdvXMLParser::InvalidRefException +0x4 std::string member


extern void __fastcall ext_0063E970(void* self);
extern void ext_006A5C5C(void);
extern uint32_t mem_00924FF4;

extern void* __thiscall fn_0063EAD0(void* self, uint32_t flags) {
    ((void (__thiscall*)(void*))mem_00924FF4)(reinterpret_cast<char*>(self) + 4);
    ext_0063E970(self);
    if (flags & 1) {
        reinterpret_cast<void (__cdecl*)(void*)>(ext_006A5C5C)(self);
    }
    return self;
}
} // namespace lift_0063EAD0
