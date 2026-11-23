// Lifted C++ translation unit: lifted/NMData/State.cpp
#include "lift_compat.h"
#include <new>
#include <string>
extern "C" const char* mem_00AA237C;
#include <cstring>

// [0x0049FA70] NMData::State::vfunc_6 (35 bytes)
// @name NMData::State::vfunc_6
// @class NMData::State
// @summary Constructs a std::string in the caller-supplied buffer from the literal pointer in mem_00AA237C.
void fn_0049FA70(void* self) {
    new (self) std::string(mem_00AA237C);
}

// [0x0049FAC0] NMData::State::vfunc_2_off_8 (42 bytes)
// @name NMData::State::vfunc_2_off_8
// @class NMData::State
// @summary Copies the four dwords at this+0xE0..0xEC into the caller-supplied 16-byte output buffer.
// @field NMData::State +0xE0 float field_0xE0
// @field NMData::State +0xE4 float field_0xE4
// @field NMData::State +0xE8 float field_0xE8
// @field NMData::State +0xEC float field_0xEC
void fn_0049FAC0(void* self, void* out) {
    std::memcpy(out, static_cast<const uint8_t*>(self) + 0xE0, 16);
}

// [0x0049AF70] NMData::State::vfunc_10_off_8 (84 bytes)
// @name NMData::State::vfunc_10_off_8
// @class NMData::State
// @summary Returns true if the 2D point pt[0..1] lies inside the box (e0,e4)-(e8,ec) stored in this.
// @field NMData::State +0xE0 float field_0xE0
// @field NMData::State +0xE4 float field_0xE4
// @field NMData::State +0xE8 float field_0xE8
// @field NMData::State +0xEC float field_0xEC
bool fn_0049AF70(void* self, const float* pt) {
    const float x = pt[0];
    const float y = pt[1];
    const float minX = lift_field<float>(self, 0xE0);
    const float minY = lift_field<float>(self, 0xE4);
    const float maxX = lift_field<float>(self, 0xE8);
    const float maxY = lift_field<float>(self, 0xEC);
    // Ordered comparisons: NaN inputs yield false, matching the original fcom checks.
    return minX <= x && x <= maxX && minY <= y && y <= maxY;
}

// [0x0049FCF0]
namespace lift_0049FCF0 {
extern void __thiscall ext_0040ECB0(void* self, uint32_t value);

// @name NMData::State::vfunc_6_off_10
// @class NMData::State
// @summary Walks the circular intrusive list headed at this+0xD0; for each node whose byte at +0x6D is zero, calls virtual slot 1 on the node's embedded object at +0x10 and passes the result to ext_0040ECB0(arg, result).
// @field NMData::State +0xD0 void* list_sentinel
// @field ListNode +0x00 ListNode* next
// @field ListNode +0x10 void* embedded_obj
// @field ListNode +0x6D uint8_t skip_flag
extern void __thiscall fn_0049FCF0(void* self, void* arg) {
    auto* const sentinel = *reinterpret_cast<uint8_t**>(reinterpret_cast<uint8_t*>(self) + 0xD0);
    auto* node = *reinterpret_cast<uint8_t**>(sentinel);

    while (node != sentinel) {
        if (*(node + 0x6D) == 0) {
            void* obj = node + 0x10;
            void** vtbl = *reinterpret_cast<void***>(obj);
            using SlotFn = uint32_t(__thiscall*)(void*);
            const uint32_t value = reinterpret_cast<SlotFn>(vtbl[1])(obj);
            ext_0040ECB0(arg, value);
        }
        node = *reinterpret_cast<uint8_t**>(node);
    }
}
} // namespace lift_0049FCF0
