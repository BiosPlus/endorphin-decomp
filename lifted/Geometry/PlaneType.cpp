// Lifted C++ translation unit: lifted/Geometry/PlaneType.cpp
#include "lift_compat.h"
extern "C" uint32_t __thiscall ext_006484E0(uint32_t self, uint32_t arg);

// [0x005B1090] Geometry::PlaneType::vfunc_2 (17 bytes)
// @name Geometry::PlaneType::vfunc_2
// @class Geometry::PlaneType
// @summary Auto-lifted identical-shape clone of 0x0066B0B0 (ExprParser::RealType::vfunc_8).
uint32_t __stdcall fn_005B1090(uint32_t first, uint32_t second) {
    // mov ecx, [esp+4]  -> this for the callee = first stack argument
    // mov eax, [esp+8]  -> second stack argument
    // push eax          -> argument pushed for the callee
    // call ext_006720C0 -> result left in eax
    // ret 8             -> callee-cleans-two-arguments (stdcall)
    return ext_006484E0(first, second);
}

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
