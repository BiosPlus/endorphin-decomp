// Lifted C++ translation unit: lifted/Geometry/PlaneType.cpp
#include "lift_compat.h"
extern "C" uint32_t __thiscall ext_006484E0(uint32_t self, uint32_t arg);

// [0x005B4270] Geometry::PlaneType::vfunc_18 (90 bytes)
namespace lift_005B4270 {
extern void ext_00671F30(void* self);
extern void ext_005B3FF0(void* self, uint32_t arg);
extern void ext_005B4010(void* self, uint32_t arg);

// @name Geometry::PlaneType::vfunc_18
// @class Geometry::PlaneType
// @summary Dispatches on message id (0x271 / 0x37e) to a handler, otherwise to a default handler; always returns self.
void* fn_005B4270(void* self, uint32_t msgId, uint32_t arg) {
    if (msgId == 0x271) {
        ext_005B4010(self, arg);
    } else if (msgId == 0x37E) {
        ext_005B3FF0(self, arg);
    } else {
        ext_00671F30(self);
    }
    return self;
}
} // namespace lift_005B4270
