// Lifted C++ translation unit: lifted/AdvXMLParser/NodeContainer.cpp
#include "lift_compat.h"

// [0x00640EE0] AdvXMLParser::NodeContainer::vfunc_5 (104 bytes)
namespace lift_00640EE0 {
extern int mem_00925134;

// @name AdvXMLParser::NodeContainer::vfunc_5
// @class AdvXMLParser::NodeContainer
// @summary Calls virtual slot 5 (vtable +0x14) with one argument on each object in the child-pointer range at +0x28..+0x2C.
// @field AdvXMLParser::NodeContainer +0x28 uint8_t* field_0x28
// @field AdvXMLParser::NodeContainer +0x2C uint8_t* field_0x2C

// Virtual method signature as seen by the caller: __thiscall with one stack argument (ret 4).
typedef void(__thiscall* VFunc5)(void* self, void* arg);

void fn_00640EE0(void* self, void* arg) {
    // Original bounds-check failure paths call _invalid_parameter_noinfo through this IAT slot;
    // the reference is metadata only (the CRT check is omitted in portable code).
    (void)&mem_00925134;

    // Range of object pointers stored in the container at +0x28 (begin) and +0x2C (end).
    // The end bound is re-read every iteration, matching the original loop.
    uint8_t** it = lift_field<uint8_t**>(self, 0x28);
    while (it < lift_field<uint8_t**>(self, 0x2C)) {
        void* obj = *it;
        void** vtbl = *reinterpret_cast<void***>(obj);
        reinterpret_cast<VFunc5>(vtbl[5])(obj, arg);
        ++it;
    }
}
} // namespace lift_00640EE0
