// Lifted C++ translation unit: lifted/leaf/decompiled_4D0000.cpp
#include "lift_compat.h"
#include <new>
#include <string>

// [0x004DE130] sub_004DE130 (35 bytes)
namespace lift_004DE130 {
extern void* mem_00AE29D0;
extern void __thiscall ext_0047C480(void* self, uint32_t arg);
extern void ext_004C1AC0(void* self, const int32_t* range);
extern void __thiscall ext_004C1AC0(void* self, const int32_t* range);
extern void __thiscall ext_0047C480(void* self, uint32_t value);

// @name sub_004DE130
// @summary Auto-lifted identical-shape clone of 0x004A9C90 (NMData::BehaviourData::vfunc_73).
void __thiscall fn_004DE130(void* self, const int32_t* range) {
    ext_004C1AC0(self, range);
    uint32_t field_0x168 = lift_field<uint32_t>(self, 0x168);
    ext_0047C480(mem_00AE29D0, field_0x168);
}
} // namespace lift_004DE130

// [0x004DE440] sub_004DE440 (12 bytes)
namespace lift_004DE440 {
// Known callee 0x004DE160: sub_004DE160 (Returns (this->field_0x15c - this->field_0x9a0) + 1 as a 32-bit signed value.)
extern int32_t __fastcall ext_004DE160(void* self);

// @name ComputeRangeCountWithBias
// @summary Returns ext_004DE160(self) plus this->field_0x9d0 as a 32-bit signed value.
// @field self +0x9D0 int32_t field_0x9d0
int32_t fn_004DE440(void* self) {
    int32_t base = ext_004DE160(self);
    int32_t bias = lift_field<int32_t>(self, 0x9D0);
    return base + bias;
}
} // namespace lift_004DE440

// [0x004D0E00] sub_004D0E00 (16 bytes)
namespace lift_004D0E00 {
// Known callee 0x004D0B60: GetTableEntry28Address (Returns the address of entry `index` in a 28-byte-stride table based at 0x00AE5C10 (0xAE5C10 + index * 28).)
extern void* ext_004D0B60(uint32_t index);

// @name GetTableEntryForSelfIndex
// @class (none)
// @summary Reads the uint32 index stored at self+0x188 and returns the 28-byte-stride table entry address for it.
// @field self +0x188 uint32_t field_0x188
extern void* fn_004D0E00(void* self) {
    uint32_t index = lift_field<uint32_t>(self, 0x188);
    return ext_004D0B60(index);
}
} // namespace lift_004D0E00

// [0x004D2C70] sub_004D2C70 (25 bytes)
namespace lift_004D2C70 {
// @name sub_004D2C70
// @summary Auto-lifted identical-shape clone of 0x00594790 (Unknown::releaseHeldObject (descriptive; owner class not identified)).
namespace lift_00594790 {
// @name Unknown::releaseHeldObject (descriptive; owner class not identified)
// @class Unknown
// @summary Reads a pointer at +0x00 of self; if non-null, invokes ext_00675650 with it as the this-pointer, then passes it to ext_006A5C5C as a single cdecl argument.
// @field Unknown +0x00 void* heldPtr

// Callee: sub_00675650 is a thiscall-style forwarder; ecx carries the object.
extern void ext_004D2B40(void* thisPtr);
// Callee: thunk_MFC80_ord_764 is a cdecl IAT thunk taking one argument (caller cleans up).
extern void ext_006A5C5C(void* arg);

void fn_004D2C70(void* self) {
    void* held = lift_field<void*>(self, 0x00);
    if (held != nullptr) {
        ext_004D2B40(held);
        ext_006A5C5C(held);
    }
}
} // namespace lift_00594790
} // namespace lift_004D2C70

// [0x004DA800] sub_004DA800 (25 bytes)
namespace lift_004DA800 {
// @name sub_004DA800
// @summary Auto-lifted identical-shape clone of 0x00594790 (Unknown::releaseHeldObject (descriptive; owner class not identified)).
namespace lift_00594790 {
// @name Unknown::releaseHeldObject (descriptive; owner class not identified)
// @class Unknown
// @summary Reads a pointer at +0x00 of self; if non-null, invokes ext_00675650 with it as the this-pointer, then passes it to ext_006A5C5C as a single cdecl argument.
// @field Unknown +0x00 void* heldPtr

// Callee: sub_00675650 is a thiscall-style forwarder; ecx carries the object.
extern void ext_004DA2B0(void* thisPtr);
// Callee: thunk_MFC80_ord_764 is a cdecl IAT thunk taking one argument (caller cleans up).
extern void ext_006A5C5C(void* arg);

void fn_004DA800(void* self) {
    void* held = lift_field<void*>(self, 0x00);
    if (held != nullptr) {
        ext_004DA2B0(held);
        ext_006A5C5C(held);
    }
}
} // namespace lift_00594790
} // namespace lift_004DA800

// [0x004DDE10] sub_004DDE10 (33 bytes)
namespace lift_004DDE10 {
// @name Unknown::forwardStringToVtableSlot2
// @class Unknown
// @summary Passes the C string of a std::string argument to virtual slot 2 of this object's vtable (thiscall, ret 4).
// @field Unknown +0x00 void* vtable vtable pointer (dereferenced to fetch slot 2 at +0x08)

// Thiscall on MSVC x86; empty macro elsewhere so this still type-checks on Linux.
using VSlot2Fn = void(__thiscall*)(void* self, const char* text);

void fn_004DDE10(void* self, const std::string& text) {
    void** vtable = lift_field<void**>(self, 0x00);
    VSlot2Fn slot2 = reinterpret_cast<VSlot2Fn>(vtable[2]);
    slot2(self, text.c_str());
}
} // namespace lift_004DDE10
