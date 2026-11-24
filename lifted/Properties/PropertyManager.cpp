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
