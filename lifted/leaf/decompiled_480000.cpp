// Lifted C++ translation unit: lifted/leaf/decompiled_480000.cpp
#include "lift_compat.h"
#include <new>
#include <string>

#include <string>
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

// [0x00480280] sub_00480280 (37 bytes)
namespace lift_00480280 {
// @name IsEmptyDwordRange_00480280
// @summary Returns true if the range pointer at +0x04 is null, or the byte span [+0x04, +0x08) has fewer than one 4-byte element (signed (end - begin) >> 2 == 0).
// @field Unknown +0x04 DWORD field_0x04
// @field Unknown +0x08 DWORD field_0x08
BOOLEAN fn_00480280(void* self) {
    const DWORD begin = lift_field<DWORD>(self, 0x04);
    if (begin == 0) {
        return 1;
    }
    const DWORD end = lift_field<DWORD>(self, 0x08);
    const auto diff = static_cast<int32_t>(end - begin);  // signed, like sar
    return (diff >> 2) == 0 ? 1 : 0;
}
} // namespace lift_00480280

// [0x004805A0] sub_004805A0 (40 bytes)
namespace lift_004805A0 {
extern void ext_004AF850(void* self_plus_8, uint32_t arg);

// @name UnknownClass::setValueAndForward_004805A0
// @class UnknownClass
// @summary Stores its argument at this+0x3B8, forwards it to sub_004AF850 on this+8, then copies it into the object at this+0x3B4 (+0x2AC).
// @field UnknownClass +0x3B4 void* field_0x3B4
// @field UnknownClass +0x3B8 uint32_t field_0x3B8
void fn_004805A0(void* self, uint32_t arg) {
    lift_field<uint32_t>(self, 0x3B8) = arg;

    ext_004AF850(static_cast<uint8_t*>(self) + 0x8, arg);

    void* target = lift_field<void*>(self, 0x3B4);
    lift_field<uint32_t>(target, 0x2AC) = arg;
}
} // namespace lift_004805A0

// [0x00489320] sub_00489320 (42 bytes)
namespace lift_00489320 {
extern void ext_invalid_parameter_noinfo(void);

// @name validatedRangeOut
// @class <ClassName> (unknown; ecx-passed object)
// @summary Writes {self, self->+0x04} into the hidden out slot, asserting begin <= end first; returns out.
// @field ThisObject +0x04 uint32_t field_0x04
// @field ThisObject +0x08 uint32_t field_0x08
void* fn_00489320(void* self, void* out) {
    uint32_t begin = lift_field<uint32_t>(self, 0x04);
    uint32_t end = lift_field<uint32_t>(self, 0x08);

    lift_field<uint32_t>(out, 0x00) = 0;
    if (begin > end) {
        ext_invalid_parameter_noinfo();
    }
    lift_field<uint32_t>(out, 0x00) = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(self));
    lift_field<uint32_t>(out, 0x04) = begin;
    return out;
}
} // namespace lift_00489320

// [0x004820D0] sub_004820D0 (41 bytes)
namespace lift_004820D0 {
// @name sub_004820D0
// @summary Auto-lifted identical-shape clone of 0x0044C4D0 (DWORD_RangeCopy_thiscall).
namespace lift_0044C4D0 {
// @name DWORD_RangeCopy_thiscall
// @summary Copies DWORDs from [first, last) to out via ext_0044C2A0 and returns out + count.

extern DWORD* ext_00480E00(const DWORD* first, const DWORD* last, DWORD* out);

DWORD* __thiscall fn_004820D0(void* self, const DWORD* first, const DWORD* last, DWORD* out) {
    (void)self;
    return ext_00480E00(first, last, out);
}
} // namespace lift_0044C4D0
} // namespace lift_004820D0

// [0x0048A9C0] sub_0048A9C0 (41 bytes)
namespace lift_0048A9C0 {
// @name sub_0048A9C0
// @summary Auto-lifted identical-shape clone of 0x0044C4D0 (DWORD_RangeCopy_thiscall).
namespace lift_0044C4D0 {
// @name DWORD_RangeCopy_thiscall
// @summary Copies DWORDs from [first, last) to out via ext_0044C2A0 and returns out + count.

extern DWORD* ext_00489DC0(const DWORD* first, const DWORD* last, DWORD* out);

DWORD* __thiscall fn_0048A9C0(void* self, const DWORD* first, const DWORD* last, DWORD* out) {
    (void)self;
    return ext_00489DC0(first, last, out);
}
} // namespace lift_0044C4D0
} // namespace lift_0048A9C0

// [0x0048CDB0] sub_0048CDB0 (41 bytes)
namespace lift_0048CDB0 {
// @name sub_0048CDB0
// @summary Auto-lifted identical-shape clone of 0x0044C4D0 (DWORD_RangeCopy_thiscall).
namespace lift_0044C4D0 {
// @name DWORD_RangeCopy_thiscall
// @summary Copies DWORDs from [first, last) to out via ext_0044C2A0 and returns out + count.

extern DWORD* ext_0048CAE0(const DWORD* first, const DWORD* last, DWORD* out);

DWORD* __thiscall fn_0048CDB0(void* self, const DWORD* first, const DWORD* last, DWORD* out) {
    (void)self;
    return ext_0048CAE0(first, last, out);
}
} // namespace lift_0044C4D0
} // namespace lift_0048CDB0

// [0x00480C70]
namespace lift_00480C70 {
// @name fillRange64
// @summary Fills a range [first, last) of 64-byte elements by copying from a source 64-byte element.


extern uint32_t mem_read32(uint32_t addr);
extern void mem_write32(uint32_t addr, uint32_t val);

void __cdecl sub_00480C70(uint32_t first, uint32_t last, uint32_t value_ptr) {
    if (first == last) {
        return;
    }

    uint32_t cur = first;
    do {
        for (uint32_t i = 0; i < 16; ++i) {
            mem_write32(cur + i * 4, mem_read32(value_ptr + i * 4));
        }
        cur += 0x40;
    } while (cur != last);
}
} // namespace lift_00480C70

// [0x00480130]
namespace lift_00480130 {
// @name sub_00480130
// @summary Queries subobject vtable+0x54 or falls back to field_0x240, then invokes vtable+0x4(1) on the non-null object.
// @field Class +0x10 void* field_0x10
// @field Class +0x240 void* field_0x240
void __thiscall sub_00480130(void* this_) {
    uint8_t* self = reinterpret_cast<uint8_t*>(this_);
    void* subobj = self + 0x10;
    uintptr_t vtable0 = *reinterpret_cast<const uint32_t*>(subobj);
    uintptr_t fn0 = *reinterpret_cast<const uint32_t*>(vtable0 + 0x54);
    using fn0_t = void* (__thiscall*)(void*);
    void* obj = reinterpret_cast<fn0_t>(fn0)(subobj);
    if (!obj) {
        obj = reinterpret_cast<void*>(static_cast<uintptr_t>(*reinterpret_cast<const uint32_t*>(self + 0x240)));
        if (!obj) {
            return;
        }
    }
    uintptr_t vtable1 = *reinterpret_cast<const uint32_t*>(obj);
    uintptr_t fn1 = *reinterpret_cast<const uint32_t*>(vtable1 + 0x4);
    using fn1_t = void (__thiscall*)(void*, uint32_t);
    reinterpret_cast<fn1_t>(fn1)(obj, 1);
}
} // namespace lift_00480130

// [0x00486850]
namespace lift_00486850 {
// @name Vec4::dot
// @class Vec4
// @summary Computes the 4D dot product of two 4-component float vectors.
// @field Vec4 +0x00 float x
// @field Vec4 +0x04 float y
// @field Vec4 +0x08 float z
// @field Vec4 +0x0C float w
float __thiscall sub_00486850(const void* thisPtr, const void* other) {
    const float* a = static_cast<const float*>(thisPtr);
    const float* b = static_cast<const float*>(other);
    return b[1] * a[1] + b[0] * a[0] + b[2] * a[2] + b[3] * a[3];
}
} // namespace lift_00486850

// [0x0048E2E0]
namespace lift_0048E2E0 {
// @name Unknown::InitWithVtblAndFields
// @class Unknown
// @summary Initializes base via ext_006657F0(self, 0), sets vtable to 0x0093E5E8, and stores arg2 at +0x10, 0 at +0x14, and arg1 at +0x18; returns self.
// @field Unknown +0x00 uint32_t vftable
// @field Unknown +0x10 uint32_t field_0x10
// @field Unknown +0x14 uint32_t field_0x14
// @field Unknown +0x18 uint32_t field_0x18


extern void* ext_006657F0(void* self, uint32_t arg);

void* fn_0048E2E0(void* self, uint32_t arg1, uint32_t arg2) {
    ext_006657F0(self, 0);
    uint8_t* p = static_cast<uint8_t*>(self);
    *reinterpret_cast<uint32_t*>(p + 0x10) = arg2;
    *reinterpret_cast<uint32_t*>(p + 0x00) = 0x0093E5E8u;
    *reinterpret_cast<uint32_t*>(p + 0x14) = 0u;
    *reinterpret_cast<uint32_t*>(p + 0x18) = arg1;
    return self;
}
} // namespace lift_0048E2E0
