// Lifted C++ translation unit: lifted/AdvXMLParser/NodeContainer.cpp
#include "lift_compat.h"

// [0x00640EE0] AdvXMLParser::NodeContainer::vfunc_5 (104 bytes)
namespace lift_00640EE0 {
// @name AdvXMLParser::NodeContainer::vfunc_5
// @class AdvXMLParser::NodeContainer
// @summary Invokes virtual slot 5 (offset 0x14) on each child node pointer held in the container's range at +0x28..+0x2C, passing the single argument through.
// @field AdvXMLParser::NodeContainer +0x28 uint8_t* field_0x28
// @field AdvXMLParser::NodeContainer +0x2C uint8_t* field_0x2C
void fn_00640EE0(void* self, uint32_t arg) {
    uint8_t* cur = lift_field<uint8_t*>(self, 0x28);
    while (cur < lift_field<uint8_t*>(self, 0x2C)) {
        void* child = *reinterpret_cast<void**>(cur);
        void** vtbl = *reinterpret_cast<void***>(child);
        auto slot5 = reinterpret_cast<void (*)(void*, uint32_t)>(vtbl[5]);
        slot5(child, arg);
        cur += sizeof(void*);
    }
}
} // namespace lift_00640EE0
