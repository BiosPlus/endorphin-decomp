// Lifted C++ translation unit: lifted/leaf/decompiled_5F0000.cpp
#include "lift_compat.h"
#include <string>

// [0x005FEFD0] sub_005FEFD0 (45 bytes)
namespace lift_005FEFD0 {
// MSVCP80 std::string::operator= import slot (called through this IAT entry in the original).
extern int mem_00924FDC;

struct LiftElem005FEFD0 {
    std::string field_0x00; // copied via std::string::operator= (MSVCP80 import at mem_00924FDC)
    uint32_t field_0x1c;    // copied as a 4-byte value
};

// @name fillRangeFromElement
// @class (none)
// @summary Assigns every element in [begin, end) from *src (string at +0x00 and dword at +0x1C); no-op when begin == end.
// @field LiftElem005FEFD0 +0x00 std::string field_0x00
// @field LiftElem005FEFD0 +0x1c uint32_t field_0x1c
void fn_005FEFD0(LiftElem005FEFD0* begin, LiftElem005FEFD0* end, const LiftElem005FEFD0* src) {
    for (LiftElem005FEFD0* p = begin; p != end; ++p) {
        p->field_0x00 = src->field_0x00;
        p->field_0x1c = src->field_0x1c;
    }
}
} // namespace lift_005FEFD0

// [0x005FF040]
namespace lift_005FF040 {
// @name ResourceHolder::ReleaseAndReset
// @class ResourceHolder
// @summary Sets the vtable, releases the handle at +0x08 via thunk_MFC80_ord_764 if non-null, zeroes +0x08/+0x0C/+0x10, then tail-calls base cleanup fn_0065F440(this).
// @field ResourceHolder +0x00 uint32_t vtable
// @field ResourceHolder +0x08 uint32_t field_0x08
// @field ResourceHolder +0x0C uint32_t field_0x0C
// @field ResourceHolder +0x10 uint32_t field_0x10

extern void ext_006A5C5C(void* arg);
extern void __fastcall ext_0065F440(void* self);

extern void __fastcall fn_005FF040(void* self) {
    auto* base = static_cast<uint8_t*>(self);

    lift_field<uint32_t>(base, 0x00) = 0x0096EAEC;

    const uint32_t handle = lift_field<uint32_t>(base, 0x08);
    if (handle != 0) {
        ext_006A5C5C(reinterpret_cast<void*>(static_cast<uintptr_t>(handle)));
    }

    lift_field<uint32_t>(base, 0x08) = 0;
    lift_field<uint32_t>(base, 0x0C) = 0;
    lift_field<uint32_t>(base, 0x10) = 0;

    ext_0065F440(self);
}
} // namespace lift_005FF040

// [0x005FD330]
namespace lift_005FD330 {
// @name TreeNode_eraseSubtree
// @summary Recursively erases a red-black tree subtree and frees its nodes.
// @field TreeNode +0x00 uint32_t left
// @field TreeNode +0x08 uint32_t right
// @field TreeNode +0x19 uint8_t isNil


extern void ext_006A5C5C(uint32_t ptr);
extern uint8_t mem_read8(uint32_t addr);
extern uint32_t mem_read32(uint32_t addr);

void __thiscall fn_005FD330(uint32_t self, uint32_t node) {
    while (mem_read8(node + 0x19) == 0) {
        fn_005FD330(self, mem_read32(node + 0x8));
        uint32_t left = mem_read32(node);
        ext_006A5C5C(node);
        node = left;
    }
}
} // namespace lift_005FD330
