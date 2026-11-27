// Lifted C++ translation unit: lifted/classes/BaseEventDispatcher.cpp
#include "lift_compat.h"

// [0x00437AD0] BaseEventDispatcher::vfunc_3 (60 bytes)
namespace lift_00437AD0 {
extern void (*mem_00925134)();

// @name BaseEventDispatcher::vfunc_3
// @class BaseEventDispatcher
// @summary Auto-lifted identical-shape clone of 0x0051BF10 (NMData::RealChannel::clear).
// @field BaseEventDispatcher +0x30 uint32_t begin
// @field BaseEventDispatcher +0x34 uint32_t end
namespace lift_0051BF10 {
extern uint32_t mem_00925134;
void __thiscall ext_00596660(void* self, void* out_iter, void* container1, uint32_t begin_it, void* container2, uint32_t end_it);

// @name NMData::RealChannel::clear
// @class NMData::RealChannel
// @summary Clears the RealChannel data vector by erasing from begin to end.
// @field NMData::RealChannel +0x30 uint32_t begin
// @field NMData::RealChannel +0x34 uint32_t end
void __thiscall fn_00437AD0(uint8_t* self) {
    using InvalidParamFn = void(__cdecl*)();
    InvalidParamFn invalid_param = reinterpret_cast<InvalidParamFn>(static_cast<uintptr_t>(mem_00925134));

    uint8_t* vec = self + 0x4;
    uint32_t end_val = *reinterpret_cast<uint32_t*>(vec + 0x08);
    if (*reinterpret_cast<uint32_t*>(vec + 0x04) > end_val) {
        invalid_param();
    }

    uint32_t begin_val = *reinterpret_cast<uint32_t*>(vec + 0x04);
    if (begin_val > *reinterpret_cast<uint32_t*>(vec + 0x08)) {
        invalid_param();
    }

    uint32_t local_iter[2] = {};
    ext_00596660(vec, local_iter, vec, begin_val, vec, end_val);
}
} // namespace lift_0051BF10
} // namespace lift_00437AD0

// [0x00678D70] BaseEventDispatcher::vfunc_1 (103 bytes)
namespace lift_00678D70 {
extern int mem_00925134;

// @name BaseEventDispatcher::vfunc_1
// @class BaseEventDispatcher
// @summary Invokes virtual slot 0 on every object pointer in the dispatcher's [begin, end) list, passing the single argument.
// @field BaseEventDispatcher +0x08 void** begin
// @field BaseEventDispatcher +0x0C void** end

namespace {

using VirtualSlot0 = void (*)(void* self, uint32_t arg);

[[noreturn]] void invalid_parameter_noinfo() {
    (void)&mem_00925134;  // MSVCR80!_invalid_parameter_noinfo (IAT slot)
    std::abort();
}

}  // namespace

void fn_00678D70(void* self, uint32_t arg) {
    // Original: esi = this + 4; the list pointers live at this+0x08 (cursor) and this+0x0C (end).
    void** cur = lift_field<void**>(self, 0x08);
    if (!(cur <= lift_field<void**>(self, 0x0C))) {
        invalid_parameter_noinfo();
    }

    void** const snapshot_end = lift_field<void**>(self, 0x0C);
    for (;;) {
        if (cur == snapshot_end) {
            break;
        }
        if (!(cur < lift_field<void**>(self, 0x0C))) {
            invalid_parameter_noinfo();
        }

        void* obj = *cur;                               // ecx = *edi
        void** vtable = *reinterpret_cast<void***>(obj); // eax = *ecx
        VirtualSlot0 slot0 = reinterpret_cast<VirtualSlot0>(vtable[0]);  // edx = *eax
        slot0(obj, arg);                                // call edx (thiscall, one stack arg)

        if (!(cur < lift_field<void**>(self, 0x0C))) {
            invalid_parameter_noinfo();
        }
        ++cur;                                          // add edi, 4
    }
}
} // namespace lift_00678D70
