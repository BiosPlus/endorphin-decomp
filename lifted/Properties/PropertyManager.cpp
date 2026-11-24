// Lifted C++ translation unit: lifted/Properties/PropertyManager.cpp
#include "lift_compat.h"

// [0x00675D30] Properties::PropertyManager::vfunc_7 (37 bytes)
namespace lift_00675D30 {
// Known callee 0x006616C0: Unknown::ForwardToSubobject7 (Forwards a call to virtual slot 7 of the object stored at +0x00, passing the address of this+0x04 as the single argument.)
extern void ext_006616C0(void* self);

// @name Properties::PropertyManager::vfunc_7
// @class Properties::PropertyManager
// @summary Walks the chain of nodes linked via +0x0C from the argument; at the last node, forwards to the subobject at +0x10 via ext_006616C0.
// @field Properties::PropertyManager +0x0C void* field_0x0C
void fn_00675D30(void* self) {
    unsigned char* node = static_cast<unsigned char*>(self);
    if (!node) {
        return;
    }
    for (;;) {
        void* next = *reinterpret_cast<void**>(node + 0x0C);
        if (!next) {
            ext_006616C0(node + 0x10);
            return;
        }
        node = static_cast<unsigned char*>(next);
    }
}
} // namespace lift_00675D30

// [0x00675D80] Properties::PropertyManager::vfunc_6 (46 bytes)
namespace lift_00675D80 {
// @name Properties::PropertyManager::vfunc_6
// @class Properties::PropertyManager
// @summary Returns true if the object at +0x70 reports ready and the object at +0x6C has its flag byte at +0xB8 clear.
// @field Properties::PropertyManager +0x6C void* field_0x6C
// @field Properties::PropertyManager +0x70 void* field_0x70
// @field Properties::PropertyManager +0xB8 uint8_t field_0xB8

struct LiftPolymorphic {
    virtual bool vfunc_0() = 0;
};

bool fn_00675D80(void* self) {
    void* ctrl = lift_field<void*>(self, 0x70);
    if (ctrl == nullptr) {
        return false;
    }
    if (!static_cast<LiftPolymorphic*>(ctrl)->vfunc_0()) {
        return false;
    }
    void* other = lift_field<void*>(self, 0x6C);
    if (other == nullptr) {
        return false;
    }
    return lift_field<uint8_t>(other, 0xB8) == 0;
}
} // namespace lift_00675D80
