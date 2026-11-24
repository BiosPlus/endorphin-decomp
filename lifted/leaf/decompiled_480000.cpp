// Lifted C++ translation unit: lifted/leaf/decompiled_480000.cpp
#include "lift_compat.h"

// [0x00480750] sub_00480750 (25 bytes)
namespace lift_00480750 {
// @name sub_00480750
// @summary Auto-lifted identical-shape clone of 0x00594790 (Unknown::releaseHeldObject (descriptive; owner class not identified)).
namespace lift_00594790 {
// @name Unknown::releaseHeldObject (descriptive; owner class not identified)
// @class Unknown
// @summary Reads a pointer at +0x00 of self; if non-null, invokes ext_00675650 with it as the this-pointer, then passes it to ext_006A5C5C as a single cdecl argument.
// @field Unknown +0x00 void* heldPtr

// Callee: sub_00675650 is a thiscall-style forwarder; ecx carries the object.
extern void ext_004A7870(void* thisPtr);
// Callee: thunk_MFC80_ord_764 is a cdecl IAT thunk taking one argument (caller cleans up).
extern void ext_006A5C5C(void* arg);

void fn_00480750(void* self) {
    void* held = lift_field<void*>(self, 0x00);
    if (held != nullptr) {
        ext_004A7870(held);
        ext_006A5C5C(held);
    }
}
} // namespace lift_00594790
} // namespace lift_00480750

// [0x0048CCA0] sub_0048CCA0 (27 bytes)
namespace lift_0048CCA0 {
// @name sub_0048CCA0
// @summary Auto-lifted identical-shape clone of 0x005694F0 (DestroyRangeForward_005694F0).
namespace lift_005694F0 {
extern void __cdecl ext_0048CB80(int a1, int a2, void* self, int a4);

// @name DestroyRangeForward_005694F0
// @class (none)
// @summary Forwards two stack arguments plus the incoming ECX value to ext_005693E0 (range destroy helper).
void fn_0048CCA0(void* self, int edx_unused, int a1, int a2) {
    // Original: push a2, push ecx, push a2, push a1, call ext_005693E0(a1, a2, self, a2).
    ext_0048CB80(a1, a2, self, a2);
}
} // namespace lift_005694F0
} // namespace lift_0048CCA0

// [0x004809B0]
namespace lift_004809B0 {
uint32_t mem_read32(uint32_t addr);
uint8_t mem_read8(uint32_t addr);

// @name sub_004809B0
// @summary Returns 1 if vector at +0x08/+0x0C is null/empty or flag at +0x20 is non-zero, else 0.
// @field Unknown +0x08 uint32_t field_0x08
// @field Unknown +0x0C uint32_t field_0x0C
// @field Unknown +0x20 uint8_t field_0x20

uint32_t __thiscall sub_004809B0(uint32_t self) {
    uint32_t begin = mem_read32(self + 0x08);
    if (begin == 0) {
        return 1;
    }
    uint32_t end = mem_read32(self + 0x0C);
    int32_t count = static_cast<int32_t>(end - begin) >> 2;
    if (count == 0) {
        return 1;
    }
    if (mem_read8(self + 0x20) != 0) {
        return 1;
    }
    return 0;
}
} // namespace lift_004809B0

// [0x00480530] sub_00480530 (37 bytes)
namespace lift_00480530 {
// Known callee 0x00494050: sub_00491FC0 (MSVC scalar deleting destructor: calls sub_00491A90 and frees memory when (flags & 1) is set.)
extern void ext_00494050(void* self);
extern void ext_004A5860(void* self);

// @name ReleaseSubobjectsThenForwardToTail
// @class <Unknown> (owner class not identified)
// @summary Runs the scalar deleting destructor on two embedded subobjects at +0x3DC and +0x3E8, then tail-jumps to 0x004A5860 with the pointer stored at +0x3B4 as ecx.
// @field <Unknown> +0x3B4 void* field_0x3b4
// @field <Unknown> +0x3DC <embedded> field_0x3dc
// @field <Unknown> +0x3E8 <embedded> field_0x3e8
void fn_00480530(void* self) {
    // push esi; mov esi, ecx
    // lea ecx, [esi+0x3dc]; call 0x494050
    ext_00494050(static_cast<unsigned char*>(self) + 0x3DC);
    // lea ecx, [esi+0x3e8]; call 0x494050
    ext_00494050(static_cast<unsigned char*>(self) + 0x3E8);
    // mov ecx, [esi+0x3b4]; pop esi; jmp 0x4A5860
    void* next = *reinterpret_cast<void**>(static_cast<unsigned char*>(self) + 0x3B4);
    ext_004A5860(next);
}
} // namespace lift_00480530
