// Lifted C++ translation unit: lifted/templates/EventDispatcher.cpp
#include "lift_compat.h"

// [0x0046A400] EventDispatcher<EngineEventListener, &[thunk]: __thiscall EngineEventListener::`vcall'{4, {flat}}>::vfunc_3 (111 bytes)
namespace lift_0046A400 {
extern void (__cdecl* mem_00925134)();
void __thiscall ext_00596660(void* self, void* out_iter, void* first_container, uint32_t first_ptr,
                             void* last_container, uint32_t last_ptr);

// @name EventDispatcher<EngineEventListener, &[thunk]: __thiscall EngineEventListener::`vcall'{4, {flat}}>::vfunc_3
// @class EventDispatcher<EngineEventListener, &[thunk]: __thiscall EngineEventListener::`vcall'{4, {flat}}>
// @summary Validates two embedded [begin, end) ranges (begin <= end, else invalid-parameter handler) and erases each range from its vector at +0x04 and +0x14.
// @field EventDispatcher<EngineEventListener, &[thunk]: __thiscall EngineEventListener::`vcall'{4, {flat}}> +0x08 uint32_t field_0x08
// @field EventDispatcher<EngineEventListener, &[thunk]: __thiscall EngineEventListener::`vcall'{4, {flat}}> +0x0C uint32_t field_0x0C
// @field EventDispatcher<EngineEventListener, &[thunk]: __thiscall EngineEventListener::`vcall'{4, {flat}}> +0x18 uint32_t field_0x18
// @field EventDispatcher<EngineEventListener, &[thunk]: __thiscall EngineEventListener::`vcall'{4, {flat}}> +0x1C uint32_t field_0x1C
void __thiscall fn_0046A400(uint8_t* self) {
    // First range: container at self+0x04, begin at +0x08, end at +0x0C.
    uint8_t* vec_a = self + 0x04;
    uint32_t end_a = *reinterpret_cast<uint32_t*>(self + 0x0C);
    if (*reinterpret_cast<uint32_t*>(self + 0x08) > end_a) {
        mem_00925134();
    }
    uint32_t begin_a = *reinterpret_cast<uint32_t*>(self + 0x08);
    if (begin_a > *reinterpret_cast<uint32_t*>(self + 0x0C)) {
        mem_00925134();
    }
    uint32_t out_a[2] = {};
    ext_00596660(vec_a, out_a, vec_a, begin_a, vec_a, end_a);

    // Second range: container at self+0x14, begin at +0x18, end at +0x1C.
    uint8_t* vec_b = self + 0x14;
    uint32_t end_b = *reinterpret_cast<uint32_t*>(self + 0x1C);
    if (*reinterpret_cast<uint32_t*>(self + 0x18) > end_b) {
        mem_00925134();
    }
    uint32_t begin_b = *reinterpret_cast<uint32_t*>(self + 0x18);
    if (begin_b > *reinterpret_cast<uint32_t*>(self + 0x1C)) {
        mem_00925134();
    }
    uint32_t out_b[2] = {};
    ext_00596660(vec_b, out_b, vec_b, begin_b, vec_b, end_b);
}
} // namespace lift_0046A400
