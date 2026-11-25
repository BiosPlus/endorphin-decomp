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
#include <cstdint>
#include <cstring>
#include <utility>
#include <cstddef>
#include <stdexcept>

#include <stdexcept>
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
#include <istream>
#include <bit>

#include <bit>
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

// [0x00486BB0] sub_00486BB0 (45 bytes)
namespace lift_00486BB0 {
// Known callee 0x004C0340: SetGlobalObjectFlag4IfPresent (If the global object pointer mem_00AE29D0 is non-null, set the byte at its +0x04 offset to 1.)
extern void ext_004C0340();

// @name Unknown::AssignNameIfNonEmpty
// @class Unknown
// @summary If the source string is non-empty, copy it into the string at +0x180 and notify the global object.
// @field Unknown +0x180 std::string field_0x180
void fn_00486BB0(void* self, const std::string& src) {
    if (src.empty()) {
        return;
    }
    *reinterpret_cast<std::string*>(static_cast<unsigned char*>(self) + 0x180) = src;
    ext_004C0340();
}
} // namespace lift_00486BB0

// [0x00480560] sub_00480560 (46 bytes)
namespace lift_00480560 {
// Indirect virtual call through the object stored at self+0x10 (vtable slot 3, offset 0x0C).
// Returned pointer addresses a container whose begin/end pointers live at +4 and +8.

// @name descriptiveName: isInnerContainerEmptyViaVirtual
// @summary Calls vtable slot 3 of the object at self+0x10 and returns true if the returned container's begin is null or holds fewer than 4 bytes of elements (size 0).
// @field Unknown +0x10 uint32_t field_0x10
bool fn_00480560(void* self) {
    // Read the object pointer stored at self+0x10 (32-bit guest address).
    const uint32_t obj = lift_field<uint32_t>(self, 0x10);

    // Load its vtable and fetch slot 3 (offset 0x0C).
    const uint32_t vtbl = lift_field<uint32_t>(reinterpret_cast<const void*>(static_cast<uintptr_t>(obj)), 0);
    const uint32_t slot = lift_field<uint32_t>(reinterpret_cast<const void*>(static_cast<uintptr_t>(vtbl)), 0x0C);

    // Thiscall: ECX = self + 0x10, returns the container pointer in EAX.
    using VirtFn = uint32_t (*)(uint32_t thisPtr);
    const uint32_t thisPtr = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(self)) + 0x10;
    const uint32_t container = reinterpret_cast<VirtFn>(static_cast<uintptr_t>(slot))(thisPtr);

    // begin = [container+4]
    const uint32_t begin = lift_field<uint32_t>(reinterpret_cast<const void*>(static_cast<uintptr_t>(container)), 0x04);
    if (begin == 0) {
        return true;
    }

    // end = [container+8]; count = (end - begin) >> 2 (arithmetic shift); return count == 0.
    const uint32_t end = lift_field<uint32_t>(reinterpret_cast<const void*>(static_cast<uintptr_t>(container)), 0x08);
    const int32_t diff = static_cast<int32_t>(end - begin);
    return (diff >> 2) == 0;
}
} // namespace lift_00480560

// [0x00481770]
namespace lift_00481770 {
// @name fillStructArray64
// @summary Copies a 64-byte template structure into count consecutive 64-byte slots starting at dst, skipping null dst.


extern uint32_t mem_read32(uint32_t addr);
extern void mem_write32(uint32_t addr, uint32_t val);

void sub_00481770(uint32_t dst, uint32_t count, uint32_t src) {
    if (count == 0) {
        return;
    }

    do {
        if (dst != 0) {
            for (uint32_t i = 0; i < 16; ++i) {
                mem_write32(dst + i * 4, mem_read32(src + i * 4));
            }
        }
        count -= 1;
        dst += 0x40;
    } while (count > 0);
}
} // namespace lift_00481770

// [0x0048A120]
namespace lift_0048A120 {
// @name notifyRangeVtable78
// @summary Iterates over an 8-byte-strided range [begin, end) and invokes vtable+0x78 on each non-null object at +0x04, passing the element address.

uint32_t mem_read32(uint32_t addr);

void sub_0048A120(uint32_t begin, uint32_t end) {
    if (begin == end) {
        return;
    }

    uint32_t cur = begin;
    do {
        uint32_t obj = mem_read32(cur + 4u);
        if (obj != 0u) {
            uint32_t vtable = mem_read32(obj);
            uint32_t vfn = mem_read32(vtable + 0x78u);
            ((void(__thiscall*)(uint32_t, uint32_t))(uintptr_t)vfn)(obj, cur);
        }
        cur += 8u;
    } while (cur != end);
}
} // namespace lift_0048A120

// [0x00480DD0]
namespace lift_00480DD0 {
extern uint32_t mem_read32(uint32_t addr);
extern void mem_write32(uint32_t addr, uint32_t val);

// @name copyRange64
// @summary Copies 64-byte elements from [first, last) to dst (skipping writes if dst is null) and returns the advanced dst pointer.
extern uint32_t sub_00480DD0(uint32_t first, uint32_t last, uint32_t dst) {
    uint32_t eax = dst;
    uint32_t edx = first;
    if (edx == last) {
        return eax;
    }
    do {
        if (eax != 0) {
            for (uint32_t i = 0; i < 16; ++i) {
                mem_write32(eax + i * 4, mem_read32(edx + i * 4));
            }
        }
        edx += 0x40;
        eax += 0x40;
    } while (edx != last);
    return eax;
}
} // namespace lift_00480DD0

// [0x0048C860] sub_0048C860 (49 bytes)
namespace lift_0048C860 {
// Known callee 0x006A5C5C: thunk_MFC80_ord_764 (IAT jump thunk forwarding to MFC80!ord_764.)
extern void __cdecl ext_006A5C5C(void* ptr);
// Known callee 0x00519CE0: std::basic_string<char>::~basic_string (vtable-stamping thunk)
// Takes the object in ecx (thiscall); called here with the string object at self+4.
extern void __cdecl ext_00519CE0(void* self);

// @name resetHandleAndDestroyStringAt4
// @summary If the handle at +0x34 is non-null, release it via ext_006A5C5C, zero +0x34/+0x38/+0x3C, then destroy the string object at +0x04.
// @field  <unknown> +0x34 void* handle
// @field  <unknown> +0x38 uint32_t field_0x38
// @field  <unknown> +0x3C uint32_t field_0x3C
void fn_0048C860(void* self) {
    auto* base = static_cast<unsigned char*>(self);
    auto** handle = reinterpret_cast<void**>(base + 0x34);
    if (*handle != nullptr) {
        ext_006A5C5C(*handle);
    }
    *reinterpret_cast<uint32_t*>(base + 0x34) = 0;
    *reinterpret_cast<uint32_t*>(base + 0x38) = 0;
    *reinterpret_cast<uint32_t*>(base + 0x3C) = 0;
    ext_00519CE0(base + 4);
}
} // namespace lift_0048C860

// [0x004803F0]
namespace lift_004803F0 {
// @name Matrix4x4::SetIdentity
// @class Matrix4x4
// @summary Fills a 4x4 float matrix (16 floats, row-major) with the identity matrix.
// @field Matrix4x4 +0x00 float field_0x00
// @field Matrix4x4 +0x04 float field_0x04
// @field Matrix4x4 +0x08 float field_0x08
// @field Matrix4x4 +0x0C float field_0x0C
// @field Matrix4x4 +0x10 float field_0x10
// @field Matrix4x4 +0x14 float field_0x14
// @field Matrix4x4 +0x18 float field_0x18
// @field Matrix4x4 +0x1C float field_0x1C
// @field Matrix4x4 +0x20 float field_0x20
// @field Matrix4x4 +0x24 float field_0x24
// @field Matrix4x4 +0x28 float field_0x28
// @field Matrix4x4 +0x2C float field_0x2C
// @field Matrix4x4 +0x30 float field_0x30
// @field Matrix4x4 +0x34 float field_0x34
// @field Matrix4x4 +0x38 float field_0x38
// @field Matrix4x4 +0x3C float field_0x3C
void Matrix4x4_SetIdentity(void* self) {
    lift_field<float>(self, 0x00) = 1.0f;
    lift_field<float>(self, 0x04) = 0.0f;
    lift_field<float>(self, 0x08) = 0.0f;
    lift_field<float>(self, 0x0C) = 0.0f;
    lift_field<float>(self, 0x10) = 0.0f;
    lift_field<float>(self, 0x14) = 1.0f;
    lift_field<float>(self, 0x18) = 0.0f;
    lift_field<float>(self, 0x1C) = 0.0f;
    lift_field<float>(self, 0x20) = 0.0f;
    lift_field<float>(self, 0x24) = 0.0f;
    lift_field<float>(self, 0x28) = 1.0f;
    lift_field<float>(self, 0x2C) = 0.0f;
    lift_field<float>(self, 0x30) = 0.0f;
    lift_field<float>(self, 0x34) = 0.0f;
    lift_field<float>(self, 0x38) = 0.0f;
    lift_field<float>(self, 0x3C) = 1.0f;
}
} // namespace lift_004803F0

// [0x00480E00]
namespace lift_00480E00 {
extern uint32_t mem_read32(uint32_t addr);
extern void mem_write32(uint32_t addr, uint32_t val);

// @name copyVec4Range
// @summary Copies a range of 16-byte (4-float) elements from [src_begin, src_end) to dst, returning the end destination pointer.
uint32_t sub_00480E00(uint32_t src_begin, uint32_t src_end, uint32_t dst) {
    uint32_t ecx = src_begin;
    uint32_t edx = src_end;
    uint32_t eax = dst;
    if (ecx == edx) {
        return eax;
    }
    do {
        if (eax != 0) {
            mem_write32(eax + 0x0, mem_read32(ecx + 0x0));
            mem_write32(eax + 0x4, mem_read32(ecx + 0x4));
            mem_write32(eax + 0x8, mem_read32(ecx + 0x8));
            mem_write32(eax + 0xc, mem_read32(ecx + 0xc));
        }
        ecx += 0x10;
        eax += 0x10;
    } while (ecx != edx);
    return eax;
}
} // namespace lift_00480E00

// [0x00481DE0] sub_00481DE0 (55 bytes)
namespace lift_00481DE0 {
extern void ext_00481770(uint32_t dst, uint32_t count, uint32_t src);

// @name fillStructArrayAndGetEnd
// @summary Fills count 64-byte slots at dst with the template at src via ext_00481770 and returns dst + count*64.
// Note: the original pushes extra stack words (saved ecx, a flag dword, and a duplicate of src) that the
// callee ignores per its 3-argument signature; they are not reproduced here.
uint32_t __stdcall fn_00481DE0(uint32_t dst, uint32_t count, uint32_t src) {
    ext_00481770(dst, count, src);
    return dst + (count << 6);
}
} // namespace lift_00481DE0

// [0x004817A0]
namespace lift_004817A0 {
float mem_read_f32(uint32_t addr);
void mem_write_f32(uint32_t addr, float val);

// @name fillVec4Array
// @summary Fills an array of 16-byte 4-float vectors with a constant 4-float value.

void sub_004817A0(uint32_t dst, uint32_t count, uint32_t src) {
    if (count == 0) {
        return;
    }
    do {
        if (dst != 0) {
            mem_write_f32(dst + 0x0, mem_read_f32(src + 0x0));
            mem_write_f32(dst + 0x4, mem_read_f32(src + 0x4));
            mem_write_f32(dst + 0x8, mem_read_f32(src + 0x8));
            mem_write_f32(dst + 0xc, mem_read_f32(src + 0xc));
        }
        count -= 1;
        dst += 0x10;
    } while (count > 0);
}
} // namespace lift_004817A0

// [0x00480CA0]
namespace lift_00480CA0 {
// @name copyVec4Loop
// @summary Copies one 4-float vector from src to dst; repeats while dst+0x10 != end (loop index is never advanced in the original).

// Memory accessors used by this function.
float mem_read_f32(uint32_t addr);
void mem_write_f32(uint32_t addr, float value);

// cdecl: arguments are (dst, end, src) on the stack; caller cleans up.
void sub_00480CA0(uint32_t dst, uint32_t end, uint32_t src) {
    if (dst == end) {
        return;
    }
    do {
        mem_write_f32(dst + 0x0, mem_read_f32(src + 0x0));
        mem_write_f32(dst + 0x4, mem_read_f32(src + 0x4));
        mem_write_f32(dst + 0x8, mem_read_f32(src + 0x8));
        mem_write_f32(dst + 0xc, mem_read_f32(src + 0xc));
    } while (dst + 0x10 != end);
}
} // namespace lift_00480CA0

// [0x00489350] sub_00489350 (55 bytes)
namespace lift_00489350 {
// Known callee 0x006A5C62: thunk_MFC80_ord_762 (IAT jump thunk forwarding to MFC80!ord_762.)
extern void* ext_006A5C62(size_t size);

// @name AllocAndInitRecord
// @summary Allocates a 0x6C-byte record, zeroes three dwords at +0x00/+0x04/+0x08, and sets flag bytes +0x68=1 and +0x69=0.
// @field UnknownObject +0x00 DWORD field_0x00
// @field UnknownObject +0x04 DWORD field_0x04
// @field UnknownObject +0x08 DWORD field_0x08
// @field UnknownObject +0x68 BYTE field_0x68
// @field UnknownObject +0x69 BYTE field_0x69
void* fn_00489350() {
    void* const obj = ext_006A5C62(0x6C);
    const uintptr_t base = reinterpret_cast<uintptr_t>(obj);

    if (obj != nullptr) {
        lift_field<uint32_t>(obj, 0x00) = 0;
    }

    const uintptr_t p4 = base + 0x04;
    if (p4 != 0) {
        lift_field<uint32_t>(reinterpret_cast<void*>(p4), 0x00) = 0;
    }

    const uintptr_t p8 = base + 0x08;
    if (p8 != 0) {
        lift_field<uint32_t>(reinterpret_cast<void*>(p8), 0x00) = 0;
    }

    lift_field<uint8_t>(obj, 0x68) = 1;
    lift_field<uint8_t>(obj, 0x69) = 0;
    return obj;
}
} // namespace lift_00489350

// [0x00481E20] sub_00481E20 (55 bytes)
namespace lift_00481E20 {
// @name sub_00481E20
// @summary Auto-lifted identical-shape clone of 0x00481DE0 (fillStructArrayAndGetEnd).
namespace lift_00481DE0 {
extern void ext_004817A0(uint32_t dst, uint32_t count, uint32_t src);

// @name fillStructArrayAndGetEnd
// @summary Fills count 64-byte slots at dst with the template at src via ext_00481770 and returns dst + count*64.
// Note: the original pushes extra stack words (saved ecx, a flag dword, and a duplicate of src) that the
// callee ignores per its 3-argument signature; they are not reproduced here.
uint32_t __stdcall fn_00481E20(uint32_t dst, uint32_t count, uint32_t src) {
    ext_004817A0(dst, count, src);
    return dst + (count << 4);
}
} // namespace lift_00481DE0
} // namespace lift_00481E20

// [0x0048CC30] sub_0048CC30 (55 bytes)
namespace lift_0048CC30 {
// @name sub_0048CC30
// @summary Auto-lifted identical-shape clone of 0x0054F2C0 (ComputeRecordAddress).
namespace lift_0054F2C0 {
extern void ext_0048C9E0(std::uintptr_t a0, std::uint32_t a1, std::uint32_t a2,
                             std::uint32_t a3, std::uint32_t a4, std::uint32_t a5);

// @name ComputeRecordAddress
// @summary Calls helper sub_0054F1E0 with the arguments and a zeroed flag word, then returns base + index * 0x68.
// (no direct struct field accesses in this function)
__stdcall std::uint8_t* fn_0048CC30(std::uint8_t* base, std::uint32_t index, std::uint32_t arg2) {
    // The original stores 0 into the low byte of a stack slot that previously held ECX,
    // so the dword passed on is ECX with its low byte cleared. ECX at entry is not
    // recoverable from the stdcall signature; it is modelled as a placeholder here.
    std::uint32_t ecx_in = 0;
    std::uint32_t flag_slot = ecx_in & 0xFFFFFF00u;

    ext_0048C9E0(reinterpret_cast<std::uintptr_t>(base), index, arg2, ecx_in, arg2, flag_slot);

    return base + static_cast<std::size_t>(index) * 0x68u;
}
} // namespace lift_0054F2C0
} // namespace lift_0048CC30

// [0x0048C960] sub_0048C960 (56 bytes)
namespace lift_0048C960 {
// Known callee 0x006A5C5C: thunk_MFC80_ord_764 (IAT jump thunk forwarding to MFC80!ord_764.)
extern void ext_006A5C5C(uint32_t arg);
// Known callee 0x00519CE0: std::basic_string<char>::~basic_string (vtable-stamping thunk)
extern void ext_00519CE0(void* self);

// @name Unknown::releaseFieldAndResetSubObject
// @class Unknown
// @summary If field +0x34 is non-null, pass it to MFC80 ord_764; then zero +0x34/+0x38/+0x3C and run the string destructor on the sub-object at +0x04.
// @field Unknown +0x34 uint32_t field_0x34
// @field Unknown +0x38 uint32_t field_0x38
// @field Unknown +0x3C uint32_t field_0x3C
void fn_0048C960(void* self) {
    uint32_t pending = lift_field<uint32_t>(self, 0x34);
    if (pending != 0) {
        ext_006A5C5C(pending);
    }

    lift_field<uint32_t>(self, 0x34) = 0;
    lift_field<uint32_t>(self, 0x38) = 0;
    lift_field<uint32_t>(self, 0x3C) = 0;

    ext_00519CE0(static_cast<uint8_t*>(self) + 0x04);
}
} // namespace lift_0048C960

// [0x00481700] sub_00481700 (62 bytes)
namespace lift_00481700 {
// @name CopyBackwardBlocks64
// @summary Copy-backward [first, last) in 64-byte (16-dword) blocks to a destination ending at d_last; returns d_last minus the 64-byte-rounded span length.
void* fn_00481700(void* first, void* last, void* d_last) {
    const intptr_t a = reinterpret_cast<intptr_t>(first);
    const intptr_t b = reinterpret_cast<intptr_t>(last);
    const intptr_t c = reinterpret_cast<intptr_t>(d_last);

    // sar 6 / shl 6: round the signed span (b - a) down to a multiple of 64.
    const intptr_t rounded = ((b - a) >> 6) * 64;
    const intptr_t result = c - rounded;
    if (a == b) {
        return reinterpret_cast<void*>(result);
    }

    const intptr_t delta = c - b;
    intptr_t cur = b;
    do {
        cur -= 64;
        const uint8_t* src = reinterpret_cast<const uint8_t*>(cur);
        uint8_t* dst = reinterpret_cast<uint8_t*>(cur + delta);
        // Forward dword-by-dword copy (rep movsd, ecx = 16).
        for (int i = 0; i < 16; ++i) {
            std::memcpy(dst + i * 4, src + i * 4, 4);
        }
    } while (cur != a);

    return reinterpret_cast<void*>(result);
}
} // namespace lift_00481700

// [0x0048A0E0]
namespace lift_0048A0E0 {
namespace lift_0048A0E0 {

// IAT jump thunk forwarding to MFC80!ord_764; cdecl, takes one pointer argument.
extern void ext_006A5C5C(void* node);

// IAT slot holding the address of MSVCP80 basic_string<char> destructor (__thiscall).
extern uint32_t mem_00924FF4;

// @name DestroyNodeChain
// @summary Walks a linked node chain from node: recurses into each node's child at +0x08, destroys the node's string at +0x0C and calls ext_006A5C5C on it, following next pointers at +0x00 until a node with flag +0x69 set is reached.
// @field Unknown +0x00 void* field_0x00
// @field Unknown +0x08 void* field_0x08
// @field Unknown +0x0C std::string field_0x0C
// @field Unknown +0x69 uint8_t field_0x69
void fn_0048A0E0(void* self, void* node) {
    using DtorFn = void (*)(void*);

    // edi = node; if (node->flag69 != 0) return;
    void* cur = node;
    if (lift_field<uint8_t>(cur, 0x69) != 0) {
        return;
    }

    // esi = edi = cur
    void* esi = cur;
    do {
        // recurse on child: fn(self, esi->field_0x08)
        void* child = lift_field<void*>(esi, 0x08);
        fn_0048A0E0(self, child);

        // esi = esi->next (+0x00)
        esi = lift_field<void*>(esi, 0x00);

        // destroy std::string at cur+0x0C (thiscall dtor via IAT slot; ecx = this passed as arg)
        auto dtor = reinterpret_cast<DtorFn>(static_cast<uintptr_t>(mem_00924FF4));
        dtor(static_cast<uint8_t*>(cur) + 0x0C);

        // push cur; call ext_006A5C5C; add esp,4
        ext_006A5C5C(cur);

        // edi = esi (cur = next)
        cur = esi;
    } while (lift_field<uint8_t>(esi, 0x69) == 0);
}

} // namespace lift_0048A0E0
} // namespace lift_0048A0E0

// [0x0048D310] sub_0048D310 (63 bytes)
namespace lift_0048D310 {
// @name sub_0048D310
// @summary Auto-lifted identical-shape clone of 0x00569970 (Unknown::ReleaseHandleAndClear).
namespace lift_00569970 {
extern void ext_0048CB80(uint32_t a0, uint32_t a1, void* a2, void* a3);
extern void fn_006A5C5C(uint32_t arg);

// @name Unknown::ReleaseHandleAndClear
// @class Unknown
// @summary If field +0x04 is nonzero, run ext_005693E0 with it and forward it to fn_006A5C5C, then clear fields +0x04, +0x08 and +0x0C.
// @field Unknown +0x04 uint32_t field_0x04
// @field Unknown +0x08 uint32_t field_0x08
// @field Unknown +0x0C uint32_t field_0x0C
void fn_0048D310(void* self) {
    if (lift_field<uint32_t>(self, 0x4) != 0) {
        // Argument order matches the original pushes: a0 = f04, a1 = f08, a2 = self, a3 = ecx (self).
        ext_0048CB80(lift_field<uint32_t>(self, 0x4),
                     lift_field<uint32_t>(self, 0x8),
                     self,
                     self);
        fn_006A5C5C(lift_field<uint32_t>(self, 0x4));
    }
    lift_field<uint32_t>(self, 0x4) = 0;
    lift_field<uint32_t>(self, 0x8) = 0;
    lift_field<uint32_t>(self, 0xC) = 0;
}
} // namespace lift_00569970
} // namespace lift_0048D310

// [0x00486880]
namespace lift_00486880 {
// Format string literal at 0x0093C670 (contents not recovered from .rdata listing).
extern const char mem_0093C670[];

// @name sub_00486880 (formatDoubleToString)
// @summary Formats a double into a 50-byte buffer with snprintf and assigns the result to a std::string via the hidden return pointer.
std::string* fn_00486880(std::string* out, double value) {
    char buf[50] = {};
    std::snprintf(buf, sizeof(buf), mem_0093C670, value);
    *out = std::string(buf);
    return out;
}
} // namespace lift_00486880

// [0x0048CB80] sub_0048CB80 (67 bytes)
namespace lift_0048CB80 {
// Known callee 0x006A5C5C: thunk_MFC80_ord_764 (IAT jump thunk forwarding to MFC80!ord_764.)
extern void ext_006A5C5C(void* arg);
// Known callee 0x00519CE0: std::basic_string<char>::~basic_string (vtable-stamping thunk)
// Takes the object pointer in ecx (thiscall-style); modeled here as a single pointer argument.
extern void ext_00519CE0(void* self);

// @name UnknownElement::destroyRange
// @summary Walks [first, last) in 0x68-byte elements; for each, releases the pointer at +0x34 via ext_006A5C5C when non-null, zeroes +0x34..+0x3C, then destroys the std::string at +0x04 via ext_00519CE0.
// @field UnknownElement +0x34 uint32_t field_0x34
// @field UnknownElement +0x38 uint32_t field_0x38
// @field UnknownElement +0x3C uint32_t field_0x3C
void fn_0048CB80(uint8_t* first, uint8_t* last) {
    if (first == last) {
        return;
    }

    for (uint8_t* elem = first; elem != last; elem += 0x68) {
        uint32_t ptr = lift_field<uint32_t>(elem, 0x34);
        if (ptr != 0) {
            ext_006A5C5C(reinterpret_cast<void*>(static_cast<uintptr_t>(ptr)));
        }

        lift_field<uint32_t>(elem, 0x34) = 0;
        lift_field<uint32_t>(elem, 0x38) = 0;
        lift_field<uint32_t>(elem, 0x3C) = 0;

        ext_00519CE0(elem + 0x04);
    }
}
} // namespace lift_0048CB80

// [0x00480C30] sub_00480C30 (54 bytes)
namespace lift_00480C30 {
// Known callee 0x0046F930: Unknown::RequestStop (Marks stop-requested flags and signals the event at this+0x160 using index this+0x148 if active.)
extern void ext_0046F930(void* self);
// Known callee 0x006A5C5C: thunk_MFC80_ord_764 (IAT jump thunk forwarding to MFC80!ord_764.)
extern void ext_006A5C5C(void* obj);
extern int mem_00AD89B4;

// @name UnknownHolder::releaseAndDestroy
// @class UnknownHolder
// @summary Releases a held Unknown object (stopping it when the last reference drops), then frees the holder.
// @field UnknownHolder +0x00 void* target
// @field UnknownHolder +0x04 uint8_t stopOnRelease
// @field Unknown +0x153 uint8_t stopRequested
void fn_00480C30(void* self) {
    void* holder = lift_field<void*>(self, 0);
    if (holder == nullptr) {
        return;
    }

    if (lift_field<void*>(holder, 0) != nullptr) {
        mem_00AD89B4 -= 1;
        if (mem_00AD89B4 == 0) {
            void* target = lift_field<void*>(holder, 0);
            lift_field<uint8_t>(target, 0x153) = 0;
            if (lift_field<uint8_t>(holder, 4) != 0) {
                ext_0046F930(target);
            }
        }
    }

    ext_006A5C5C(holder);
}
} // namespace lift_00480C30

// [0x004801C0] sub_004801C0 (44 bytes)
namespace lift_004801C0 {
// Known callee 0x00584B10: findFirstMatchingAncestor (Walks the +0x94 parent/next chain starting at this and returns the first node whose vtable+0x70 predicate returns true.)
extern uint32_t ext_00584B10(uint32_t self);

// @name hasDifferentMatchingAncestor
// @summary Returns true only when both nodes are non-null and their first matching ancestors differ.
bool fn_004801C0(uint32_t a, uint32_t b) {
    if (a == 0 || b == 0) {
        return false;
    }
    const uint32_t fa = ext_00584B10(a);
    const uint32_t fb = ext_00584B10(b);
    return fa != fb;
}
} // namespace lift_004801C0

// [0x00487C00]
namespace lift_00487C00 {
// @name TreeMap::lowerBound (string key, nil flag at node +0x69)
// @class TreeMap
// @summary Lower-bound search in an MSVC-style std::map<std::string, ...> tree: returns the first node whose key is not less than the argument, or the header node if none; header node is returned for an empty tree.
// @field TreeMap +0x04 void* head
// Node layout used (MSVC _Tree node): +0x00 left, +0x04 parent, +0x08 right, +0x0C key (std::string), +0x69 isNil flag.

namespace lift_00487C00 {

// MSVCP80 std::operator<(const std::string&, const std::string&), reached via IAT slot mem_00924EF4.
extern bool ext_std_string_less(const void* lhs, const void* rhs);

void* fn_00487C00(void* self, const void* key) {
    void* head = lift_field<void*>(self, 0x04);
    void* node = lift_field<void*>(head, 0x04);   // root (header parent)
    void* result = head;

    if (lift_field<uint8_t>(node, 0x69) != 0) {
        return head;
    }

    while (lift_field<uint8_t>(node, 0x69) == 0) {
        const void* nodeKey = reinterpret_cast<const uint8_t*>(node) + 0x0C;
        if (ext_std_string_less(nodeKey, key)) {
            node = lift_field<void*>(node, 0x08);     // go right
        } else {
            result = node;                            // candidate
            node = lift_field<void*>(node, 0x00);     // go left
        }
    }
    return result;
}

} // namespace lift_00487C00
} // namespace lift_00487C00

// [0x00481BD0] sub_00481BD0 (71 bytes)
namespace lift_00481BD0 {
// Function pointer loaded from the import slot at 0x00925134; called on range-check failure.
extern void (*mem_00925134)(void);

// @name ZeroMatchingDwordRange
// @class Unknown
// @summary Zeroes every uint32_t in [self->+0x08, self->+0x0C) equal to value; calls the invalid-parameter handler if begin > end.
// @field Unknown +0x08 uint32_t* field_0x08
// @field Unknown +0x0C uint32_t* field_0x0C
void fn_00481BD0(void* self, uint32_t value) {
    uint32_t* const end = lift_field<uint32_t*>(self, 0x0C);
    if (lift_field<uint32_t*>(self, 0x08) > end) {
        mem_00925134();
    }

    uint32_t* cur = lift_field<uint32_t*>(self, 0x08);
    if (cur > lift_field<uint32_t*>(self, 0x0C)) {
        mem_00925134();
    }

    for (; cur != end; ++cur) {
        if (*cur == value) {
            *cur = 0;
        }
    }
}
} // namespace lift_00481BD0

// [0x00489080] sub_00489080 (71 bytes)
namespace lift_00489080 {
// @name CopyFloat5Range
// @summary Copies a range of 20-byte (5 x float) records from [first, last) to out; returns the output end pointer.
// (No @class/@field: the 20-byte element type is not a named struct in the recovered layout, so no field names are guessed.)
void* fn_00489080(const void* first, const void* last, void* out) {
    constexpr size_t kStride = 5 * sizeof(float); // 0x14

    auto src = static_cast<const uint8_t*>(first);
    auto end = static_cast<const uint8_t*>(last);
    auto dst = static_cast<uint8_t*>(out);

    while (src != end) {
        std::memcpy(dst, src, kStride);
        src += kStride;
        dst += kStride;
    }
    return dst;
}
} // namespace lift_00489080

// [0x00489DC0]
namespace lift_00489DC0 {
// @name CopyRecordRange20
// @summary Copies 20-byte records from [src_begin, src_end) to dst, advancing both by 20 bytes per record; the copy is skipped while dst is zero.
// @field Unknown +0x00 float field_0x00
// @field Unknown +0x04 float field_0x04
// @field Unknown +0x08 float field_0x08
// @field Unknown +0x0C float field_0x0C
// @field Unknown +0x10 float field_0x10
void fn_00489DC0(const void* src_begin, const void* src_end, void* dst) {
    uintptr_t src = reinterpret_cast<uintptr_t>(src_begin);
    const uintptr_t end = reinterpret_cast<uintptr_t>(src_end);
    uintptr_t out = reinterpret_cast<uintptr_t>(dst);

    if (src == end) {
        return;
    }

    do {
        // Null test only guards the current iteration; out is advanced
        // afterwards regardless, exactly as the original loop does.
        if (out != 0) {
            std::memcpy(reinterpret_cast<void*>(out),
                        reinterpret_cast<const void*>(src), 20);
        }
        src += 20;
        out += 20;
    } while (src != end);
}
} // namespace lift_00489DC0

// [0x00481C90] sub_00481C90 (74 bytes)
namespace lift_00481C90 {
extern void ext_00480880(uint32_t* first, ptrdiff_t hole, ptrdiff_t count, uint32_t value, uint32_t pred);

// @name SortHeapRange
// @summary Heap-sorts a range of 4-byte elements in place (pop-heap loop); pred is forwarded to the sift-down helper.
void fn_00481C90(uint32_t* first, uint32_t* last, uint32_t pred) {
    ptrdiff_t n = last - first;
    while (n > 1) {
        --last;
        uint32_t value = *last;
        *last = *first;
        ext_00480880(first, 0, last - first, value, pred);
        n = last - first;
    }
}
} // namespace lift_00481C90

// [0x00481740] sub_00481740 (43 bytes)
namespace lift_00481740 {
// @name sub_00481740
// @summary Auto-lifted identical-shape clone of 0x0054F290 (Unknown::RelocateRangeBackwardWrapper_0054F290).
namespace lift_0054F290 {
// Known callee 0x0054F120: Unknown::RelocateRangeBackward_0054F120 (Walks a 104-byte-element range [begin,end) from the back, invoking ext_0054F030 on each element with a destination pointer shifted by (value - end); returns value minus the range size in bytes.)
extern uint32_t ext_00480770(uint32_t begin, uint32_t end, uint32_t value);

// @name Unknown::RelocateRangeBackwardWrapper_0054F290
// @summary Forwards its three stack arguments unchanged to RelocateRangeBackward (0x0054F120) and returns that result; the original stack shuffling only reorders copies of the arguments.
uint32_t fn_00481740(uint32_t begin, uint32_t end, uint32_t value) {
    return ext_00480770(begin, end, value);
}
} // namespace lift_0054F290
} // namespace lift_00481740

// [0x0048CC70] sub_0048CC70 (43 bytes)
namespace lift_0048CC70 {
// @name sub_0048CC70
// @summary Auto-lifted identical-shape clone of 0x0054F290 (Unknown::RelocateRangeBackwardWrapper_0054F290).
namespace lift_0054F290 {
// Known callee 0x0054F120: Unknown::RelocateRangeBackward_0054F120 (Walks a 104-byte-element range [begin,end) from the back, invoking ext_0054F030 on each element with a destination pointer shifted by (value - end); returns value minus the range size in bytes.)
extern uint32_t ext_0048CA80(uint32_t begin, uint32_t end, uint32_t value);

// @name Unknown::RelocateRangeBackwardWrapper_0054F290
// @summary Forwards its three stack arguments unchanged to RelocateRangeBackward (0x0054F120) and returns that result; the original stack shuffling only reorders copies of the arguments.
uint32_t fn_0048CC70(uint32_t begin, uint32_t end, uint32_t value) {
    return ext_0048CA80(begin, end, value);
}
} // namespace lift_0054F290
} // namespace lift_0048CC70

// [0x0048E3D0] sub_0048E3D0 (77 bytes)
namespace lift_0048E3D0 {
// @name CopyRecords12Bytes_0048E3D0
// @summary Copies 12-byte records from [first, last) to dest in forward order and returns dest + count * 12.
void* fn_0048E3D0(const void* first, const void* last, void* dest) {
    const auto* src = static_cast<const unsigned char*>(first);
    const auto* end = static_cast<const unsigned char*>(last);
    auto* out = static_cast<unsigned char*>(dest);

    const std::ptrdiff_t byteCount = end - src;
    const std::ptrdiff_t count = byteCount / 12;
    void* result = out + count * 12;

    for (const unsigned char* p = src; p != end; p += 12) {
        std::memcpy(out + (p - src), p, 12);
    }
    return result;
}
} // namespace lift_0048E3D0

// [0x00480010] sub_00480010 (78 bytes)
namespace lift_00480010 {
extern bool ext_005631C0(double value, double epsilon);
extern double mem_0093C2D8;

// @name Unknown::AllComponentsPassTest_00480010
// @class Unknown
// @summary Returns true only if ext_005631C0 accepts all 16 floats of a 4x4 float block (rows of 4 at 0x10 stride), using epsilon mem_0093C2D8; otherwise false.
// @field Unknown +0x00 float m00
// @field Unknown +0x04 float m01
// @field Unknown +0x08 float m02
// @field Unknown +0x0C float m03
// @field Unknown +0x10 float m10
// @field Unknown +0x14 float m11
// @field Unknown +0x18 float m12
// @field Unknown +0x1C float m13
// @field Unknown +0x20 float m20
// @field Unknown +0x24 float m21
// @field Unknown +0x28 float m22
// @field Unknown +0x2C float m23
// @field Unknown +0x30 float m30
// @field Unknown +0x34 float m31
// @field Unknown +0x38 float m32
// @field Unknown +0x3C float m33
bool fn_00480010(const float* self) {
    const float* row = self;
    for (int i = 0; i < 4; ++i) {
        const float* elem = row;
        for (int j = 0; j < 4; ++j) {
            if (!ext_005631C0(static_cast<double>(*elem), mem_0093C2D8)) {
                return false;
            }
            ++elem;
        }
        row += 4;
    }
    return true;
}
} // namespace lift_00480010

// [0x0048E310] sub_0048E310 (83 bytes)
namespace lift_0048E310 {
// Known callee 0x00665810: sub_00665810 (Stores address of mem_00987A04 into field at offset +0x0.)
extern void ext_00665810(void* self);

// @name Unknown::resetChildAndRefresh_0048E310
// @class Unknown
// @summary Releases the object held at +0x14 (via its vtable slot 0 with flag 1) and then calls ext_00665810 on self.
// @field Unknown +0x14 void* field_0x14
struct Unknown {
    unsigned char _pad_0000[0x14];
    void* field_0x14;
};

void fn_0048E310(void* self) {
    auto* obj = static_cast<Unknown*>(self);
    void* child = obj->field_0x14;
    if (child != nullptr) {
        void** vtbl = *static_cast<void***>(child);
        reinterpret_cast<void (*)(void*, int)>(vtbl[0])(child, 1);
    }
    ext_00665810(self);
}
} // namespace lift_0048E310

// [0x00480770] sub_00480770 (85 bytes)
namespace lift_00480770 {
// @name copyRecordRangeBackward_00480770
// @summary Copies 16-byte (4-float) records in [first, last) backward so they end at dstEnd; returns new begin of the destination.
// @field: none (operates on raw float records, no struct field offsets)
float* fn_00480770(const float* first, const float* last, float* dstEnd) {
    const char* srcFirst = reinterpret_cast<const char*>(first);
    const char* srcLast  = reinterpret_cast<const char*>(last);
    char*       dstLast  = reinterpret_cast<char*>(dstEnd);

    // Whole 16-byte records in [first, last); remainder bytes are ignored.
    const std::ptrdiff_t bytes = srcLast - srcFirst;
    const std::ptrdiff_t count = bytes >> 4;
    const std::ptrdiff_t span  = count << 4;

    if (count > 0) {
        for (std::ptrdiff_t j = 1; j <= count; ++j) {
            const char* src = srcLast - 16 * j;
            char*       dst = dstLast - 16 * j;
            // Copy one record (4 floats) in ascending order within the record.
            for (int f = 0; f < 4; ++f) {
                std::memcpy(dst + 4 * f, src + 4 * f, sizeof(float));
            }
        }
    }

    return reinterpret_cast<float*>(dstLast - span);
}
} // namespace lift_00480770

// [0x0048CBD0] sub_0048CBD0 (85 bytes)
namespace lift_0048CBD0 {
extern void ext_0048C9A0(int32_t a1, int32_t a2, int32_t a3, int32_t a4, uint8_t a5, uint8_t a6);

// @name ComputeStrideOffset_0048CBD0
// @summary Calls ext_0048C9A0 with the stack args, then returns arg3 + ((arg2 - arg1) / 104) * 104 (signed, truncating).
int32_t fn_0048CBD0(int32_t arg1, int32_t arg2, int32_t arg3) {
    // Locals cleared to zero before the call (only the low byte is written).
    const uint8_t flag5 = 0;
    const uint8_t flag6 = 0;
    ext_0048C9A0(arg1, arg2, arg3, arg3, flag5, flag6);

    const int32_t diff = static_cast<int32_t>(static_cast<uint32_t>(arg2) - static_cast<uint32_t>(arg1));
    const int32_t quotient = diff / 104;
    const uint32_t scaled = static_cast<uint32_t>(quotient) * 104u;
    return static_cast<int32_t>(static_cast<uint32_t>(arg3) + scaled);
}
} // namespace lift_0048CBD0

// [0x00489A80] sub_00489A80 (86 bytes)
namespace lift_00489A80 {
// Known callee 0x00489080: CopyFloat5Range (Copies a range of 20-byte (5 x float) records from [first, last) to out; returns the output end pointer.)
extern void* ext_00489080(const void* first, const void* last, void* out);

// @name CopyFloat5RangeAndAdvance
// @summary Copies a [first, last) range of 20-byte records to out and returns out advanced by the record count.
void* fn_00489A80(const void* first, const void* last, void* out) {
    ext_00489080(first, last, out);

    // Record count = byte span / 20 (truncating toward zero, as signed division).
    const std::ptrdiff_t byteSpan =
        reinterpret_cast<const char*>(last) - reinterpret_cast<const char*>(first);
    const std::ptrdiff_t recordCount = byteSpan / 20;

    return static_cast<char*>(out) + recordCount * 20;
}
} // namespace lift_00489A80

// [0x0048B730]
namespace lift_0048B730 {
// @name Unknown::appendRangeToEnd_0048B730
// @class Unknown
// @summary Validates the range bounds at this+0x04 (begin) and this+0x08 (end), then, if non-empty, copies the [old end, begin) records through CopyFloat5RangeAndAdvance and stores the advanced output pointer back into this+0x08.
// @field Unknown +0x04 uint8_t* field_0x04
// @field Unknown +0x08 uint8_t* field_0x08

extern void* ext_00489A80(const void* first, const void* last, void* out);
extern int mem_00925134; // _invalid_parameter_noinfo

namespace {
using InvalidParamFn = void (*)();
}

extern void __fastcall fn_0048B730(void* ecx) {
    InvalidParamFn invalid_param = reinterpret_cast<InvalidParamFn>(static_cast<intptr_t>(mem_00925134));

    uint8_t* const original_end = lift_field<uint8_t*>(ecx, 0x08);
    if (lift_field<uint8_t*>(ecx, 0x04) > original_end) {
        invalid_param();
    }

    uint8_t* const begin = lift_field<uint8_t*>(ecx, 0x04);
    if (begin > lift_field<uint8_t*>(ecx, 0x08)) {
        invalid_param();
    }

    if (begin != original_end) {
        void* out = lift_field<uint8_t*>(ecx, 0x08);
        lift_field<uint8_t*>(ecx, 0x08) = static_cast<uint8_t*>(
            ext_00489A80(original_end, begin, out));
    }
}
} // namespace lift_0048B730

// [0x004890D0] sub_004890D0 (87 bytes)
namespace lift_004890D0 {
// @name sortThreeStrings_004890D0
// @summary Sorts three std::string references into ascending order in place (3-element bubble network).
void fn_004890D0(std::string& a, std::string& b, std::string& c) {
    // Pass 1: if (b < a) swap(b, a)
    if (b < a) {
        b.swap(a);
    }
    // Pass 2: if (c < b) swap(c, b)
    if (c < b) {
        c.swap(b);
    }
    // Pass 3: if (b < a) swap(b, a)
    if (b < a) {
        b.swap(a);
    }
}
} // namespace lift_004890D0

// [0x0048FB80] sub_0048FB80 (87 bytes)
namespace lift_0048FB80 {
// Known callee 0x006A5C62: thunk_MFC80_ord_762 (IAT jump thunk forwarding to MFC80!ord_762.)
extern void ext_006A5C62();
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk forwarding to MSVCR80!_CxxThrowException.)
extern void ext_006A6DD2();
extern int mem_00925130;

// @name allocArrayOf0x7C
// @summary Allocates count * 0x7C bytes via MFC80 ord_762; throws std::exception("l{b") when the size would overflow.
void* fn_0048FB80(unsigned int count) {
    using AllocFn = void* (*)(std::size_t);

    std::size_t size = 0;
    if (count != 0) {
        // Overflow guard: if UINT_MAX / count < 0x7C, count * 0x7C does not fit.
        const unsigned int limit = 0xFFFFFFFFu / count;
        if (limit < 0x7Cu) {
            throw std::length_error("l{b");
        }
        size = static_cast<std::size_t>(count) * 0x7Cu;
    }
    return reinterpret_cast<AllocFn>(ext_006A5C62)(size);
}
} // namespace lift_0048FB80

// [0x00486EA0] sub_00486EA0 (87 bytes)
namespace lift_00486EA0 {
// Known callee 0x006A5C62: thunk_MFC80_ord_762 (IAT jump thunk forwarding to MFC80!ord_762.)
extern void ext_006A5C62();
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk forwarding to MSVCR80!_CxxThrowException.)
extern void ext_006A6DD2();
// std::exception(const char* const&) constructor IAT slot; the C++ throw below replaces it.
extern int mem_00925130;

// @name allocArrayOf0x68Checked
// @summary Allocates count * 0x68 bytes via the MFC80 allocator; count==0 allocates 0 bytes, and a count whose byte size would overflow throws.
// @field none (free function; no struct member accessed)
void* fn_00486EA0(uint32_t count) {
    using AllocFn = void* (*)(size_t);
    auto alloc = reinterpret_cast<AllocFn>(ext_006A5C62);

    if (count == 0) {
        return alloc(0);
    }
    // Overflow guard: (0xFFFFFFFF / count) < 0x68 means count * 0x68 would not fit in 32 bits.
    if (0xFFFFFFFFu / count < 0x68u) {
        throw std::length_error("allocation size overflow");
    }
    return alloc(static_cast<size_t>(count) * 0x68u);
}
} // namespace lift_00486EA0

// [0x00480310] sub_00480310 (87 bytes)
namespace lift_00480310 {
// Known callee 0x006A5C62: thunk_MFC80_ord_762 (IAT jump thunk forwarding to MFC80!ord_762.)
// Used as an allocator: takes a byte count (cdecl), returns a pointer.
extern void* ext_006A5C62(uint32_t byteCount);

// @name allocArray16ByteElements_00480310
// @summary Allocates count*16 bytes via ext_006A5C62; throws if count*16 would overflow 32 bits.
void* fn_00480310(uint32_t count) {
    // Overflow guard: count * 16 must fit in 32 bits, i.e. count <= 0x0FFFFFFF.
    // (Original computes 0xFFFFFFFF / count and compares against 0x10.)
    if (count > 0x0FFFFFFFu) {
        throw std::length_error("allocation size overflow");
    }
    return ext_006A5C62(count << 4);
}
} // namespace lift_00480310

// [0x004802B0] sub_004802B0 (87 bytes)
namespace lift_004802B0 {
// Known callee 0x006A5C62: thunk_MFC80_ord_762 (IAT jump thunk forwarding to MFC80!ord_762.)
// Used as the allocator: takes the byte count and returns the allocated block.
extern void* ext_006A5C62(uint32_t bytes);

// @name allocateCountTimes64
// @summary Returns a block of count*64 bytes from ext_006A5C62; throws std::length_error when count*64 overflows 32 bits.
void* fn_004802B0(uint32_t count) {
    // Original: count==0 falls through to a zero-size request; count>0 is valid
    // only if count*64 fits in 32 bits (count <= 0x03FFFFFF). The overflow path
    // builds a std::exception with a null message, retags it as a length error,
    // and throws; a portable C++ throw expresses the same control flow.
    if (count > 0x03FFFFFFu) {
        throw std::length_error("allocation size overflow");
    }
    return ext_006A5C62(count << 6);
}
} // namespace lift_004802B0

// [0x00489230]
namespace lift_00489230 {
// @name std_copy_backward_string
// @summary Copies a range of std::string objects backward from [first, last) to [dest_end - (last - first), dest_end)


extern uint32_t mem_00924FDC;

using StringAssignFn = uint32_t(__thiscall*)(uint32_t self, uint32_t src);

uint32_t __cdecl sub_00489230(uint32_t first, uint32_t last, uint32_t dest_end) {
    int32_t count = static_cast<int32_t>(last - first) / 0x1c;
    uint32_t result = dest_end - static_cast<uint32_t>(count * 0x1c);

    if (first != last) {
        uint32_t offset = dest_end - last;
        uint32_t cur = last;
        auto assign_fn = reinterpret_cast<StringAssignFn>(static_cast<uintptr_t>(mem_00924FDC));
        do {
            cur -= 0x1c;
            assign_fn(cur + offset, cur);
        } while (cur != first);
    }

    return result;
}
} // namespace lift_00489230

// [0x0048EF20]
namespace lift_0048EF20 {
void* ext_0048E3D0(const void* first, const void* last, void* dest);
extern void (*mem_00925134)(void);

struct VectorIter_0048EF20 {
    void* cont;
    void* ptr;
};

// @name Vector12::eraseRange
// @class Vector12
// @summary Erases [first, last) from a 12-byte-element vector by shifting trailing elements forward and updating _Mylast.
// @field Vector12 +0x08 void* _Mylast
VectorIter_0048EF20* __thiscall fn_0048EF20(
    void* self,
    VectorIter_0048EF20* out_iter,
    void* first_cont,
    void* first_ptr,
    void* last_cont,
    void* last_ptr) {
    if (first_cont == nullptr || first_cont != last_cont) {
        mem_00925134();
    }

    if (first_ptr != last_ptr) {
        void* mylast = *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(self) + 0x08);
        void* new_last = ext_0048E3D0(last_ptr, mylast, first_ptr);
        *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(self) + 0x08) = new_last;
    }

    out_iter->cont = first_cont;
    out_iter->ptr = first_ptr;
    return out_iter;
}
} // namespace lift_0048EF20

// [0x0048CCC0]
namespace lift_0048CCC0 {
extern void (*mem_00925134)();
extern void ext_0048CB80(uint8_t* first, uint8_t* last);
extern int32_t ext_0048CBD0(int32_t arg1, int32_t arg2, int32_t arg3);

// @name UnknownElementVector::erase
// @class UnknownElementVector
// @summary Erases a checked iterator range [first, last) from a vector of 0x68-byte elements, shifting trailing elements and destroying the vacated tail.
// @field UnknownElementVector +0x08 uint8_t* last
uint32_t* __thiscall fn_0048CCC0(
    uint8_t* self,
    uint32_t* out_iter,
    uint32_t first_container,
    uint32_t first_ptr,
    uint32_t last_container,
    uint32_t last_ptr) {
  if (first_container == 0 || first_container != last_container) {
    mem_00925134();
  }
  if (first_ptr != last_ptr) {
    int32_t old_last = *reinterpret_cast<int32_t*>(self + 0x8);
    int32_t new_last = ext_0048CBD0(
        static_cast<int32_t>(last_ptr),
        old_last,
        static_cast<int32_t>(first_ptr));
    ext_0048CB80(
        reinterpret_cast<uint8_t*>(static_cast<uintptr_t>(new_last)),
        reinterpret_cast<uint8_t*>(static_cast<uintptr_t>(*reinterpret_cast<uint32_t*>(self + 0x8))));
    *reinterpret_cast<int32_t*>(self + 0x8) = new_last;
  }
  out_iter[0] = first_container;
  out_iter[1] = first_ptr;
  return out_iter;
}
} // namespace lift_0048CCC0

// [0x00481C50] sub_00481C50 (59 bytes)
namespace lift_00481C50 {
// @name sub_00481C50
// @summary Auto-lifted identical-shape clone of 0x005015E0 (Unknown::eraseRangeFromSelf).
namespace lift_005015E0 {
// Known callee 0x005013F0: sub_005013F0 (Auto-lifted identical-shape clone of 0x0057E9E0 (Unknown::eraseStringVectorRange).)
// Thiscall: self in ecx, then five stack args (out_iter, first_container, first_ptr, last_container, last_ptr).
extern void* ext_00596660(void* self, void* out_iter, void* first_container,
                              void* first_ptr, void* last_container, void* last_ptr);

// @name Unknown::eraseRangeFromSelf
// @class Unknown
// @summary Erases the element range bounded by self+0x04 .. self+0x08 by forwarding both bounds to 0x005013F0.
// @field Unknown +0x04 uint32_t field_0x04
// @field Unknown +0x08 uint32_t field_0x08
void fn_00481C50(void* self) {
    auto* base = static_cast<unsigned char*>(self);
    auto load_u32 = [&](std::size_t off) {
        std::uint32_t v;
        std::memcpy(&v, base + off, sizeof v);
        return v;
    };

    // The original asserts first <= last via _invalid_parameter_noinfo (diagnostic only; no
    // observable effect on the erase), so it is omitted here.
    const auto first = static_cast<std::uintptr_t>(load_u32(0x04));
    const auto last = static_cast<std::uintptr_t>(load_u32(0x08));

    // The out iterator is a caller-provided slot; this function never reads it.
    alignas(8) unsigned char out_iter[16] = {};
    ext_00596660(self, out_iter, self, reinterpret_cast<void*>(first),
                 self, reinterpret_cast<void*>(last));
}
} // namespace lift_005015E0
} // namespace lift_00481C50

// [0x0048D350] sub_0048D350 (59 bytes)
namespace lift_0048D350 {
// @name sub_0048D350
// @summary Auto-lifted identical-shape clone of 0x005015E0 (Unknown::eraseRangeFromSelf).
namespace lift_005015E0 {
// Known callee 0x005013F0: sub_005013F0 (Auto-lifted identical-shape clone of 0x0057E9E0 (Unknown::eraseStringVectorRange).)
// Thiscall: self in ecx, then five stack args (out_iter, first_container, first_ptr, last_container, last_ptr).
extern void* ext_0048CCC0(void* self, void* out_iter, void* first_container,
                              void* first_ptr, void* last_container, void* last_ptr);

// @name Unknown::eraseRangeFromSelf
// @class Unknown
// @summary Erases the element range bounded by self+0x04 .. self+0x08 by forwarding both bounds to 0x005013F0.
// @field Unknown +0x04 uint32_t field_0x04
// @field Unknown +0x08 uint32_t field_0x08
void fn_0048D350(void* self) {
    auto* base = static_cast<unsigned char*>(self);
    auto load_u32 = [&](std::size_t off) {
        std::uint32_t v;
        std::memcpy(&v, base + off, sizeof v);
        return v;
    };

    // The original asserts first <= last via _invalid_parameter_noinfo (diagnostic only; no
    // observable effect on the erase), so it is omitted here.
    const auto first = static_cast<std::uintptr_t>(load_u32(0x04));
    const auto last = static_cast<std::uintptr_t>(load_u32(0x08));

    // The out iterator is a caller-provided slot; this function never reads it.
    alignas(8) unsigned char out_iter[16] = {};
    ext_0048CCC0(self, out_iter, self, reinterpret_cast<void*>(first),
                 self, reinterpret_cast<void*>(last));
}
} // namespace lift_005015E0
} // namespace lift_0048D350

// [0x00487F30]
namespace lift_00487F30 {
// @name initStaticOnce_00487F30
// @summary One-time initializer: on first call, runs ext_0067A670 on mem_00AD9DF4 and sets it to 0x93cf14; returns &mem_00AD9DF4.

extern DWORD mem_00AD9DF8;
extern DWORD mem_00AD9DF4;

DWORD ext_0067A670(void* self, DWORD value);

DWORD* initStaticOnce_00487F30() {
    if ((mem_00AD9DF8 & 0xFFu) == 0) {
        mem_00AD9DF8 |= 1u;
        ext_0067A670(&mem_00AD9DF4, 0);
        mem_00AD9DF4 = 0x93CF14u;
    }
    return &mem_00AD9DF4;
}
} // namespace lift_00487F30

// [0x00487ED0]
namespace lift_00487ED0 {
// @name EnsureStaticInit_00487ED0
// @summary One-time guarded init of the global at mem_00AD9DEC; sets an init flag bit, calls ext_0067A670 on it, then stores vtable-like value 0x0093CE3C. Returns the address of the global.

extern DWORD mem_00AD9DF0; // init-flag dword (bit 0 = initialized)
extern DWORD mem_00AD9DEC; // guarded object storage

// __thiscall: ECX = &mem_00AD9DEC, one stack argument (0)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

void* fn_00487ED0()
{
    if ((mem_00AD9DF0 & 1u) == 0)
    {
        mem_00AD9DF0 |= 1u;
        ext_0067A670(&mem_00AD9DEC, 0u);
        mem_00AD9DEC = 0x0093CE3Cu;
    }
    return &mem_00AD9DEC;
}
} // namespace lift_00487ED0

// [0x00487F90] sub_00487F90 (87 bytes)
namespace lift_00487F90 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (Calls ext_00672000 on self (thiscall, ECX = self), then stores the single stack argument into the first DWORD of self; returns that value.)
extern DWORD ext_0067A670(void* self, DWORD value);
extern uint32_t mem_00AD9E00; // init-guard flags (bit 0 = initialized/in-progress)
extern uint32_t mem_00AD9DFC; // guarded global object storage

// @name initOnceGuardedObject_00AD9DFC
// @summary One-time initializer for the global at 0x00AD9DFC: on first call sets guard bit 0 in 0x00AD9E00, runs ext_0067A670 on the object with arg 0, then stores 0x0093CFEC into it; returns the object's address on every call.
void* fn_00487F90() {
    if (!(mem_00AD9E00 & 1u)) {
        mem_00AD9E00 |= 1u;
        ext_0067A670(&mem_00AD9DFC, 0);
        mem_00AD9DFC = 0x0093CFECu;
    }
    return &mem_00AD9DFC;
}
} // namespace lift_00487F90

// [0x00488050] sub_00488050 (87 bytes)
namespace lift_00488050 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (Calls ext_00672000 on self (thiscall, ECX = self), then stores the single stack argument into the first DWORD of self; returns that value.)
extern void ext_0067A670(void* self, uint32_t value);
extern int mem_00AD9E10;
extern int mem_00AD9E0C;

// @name initOnceAndGetStaticObject_00488050
// @summary Function-local static initializer: on first call sets bit 0 of the guard byte at mem_00AD9E10, runs ext_0067A670 on the object at mem_00AD9E0C with argument 0, stores the vtable-like constant 0x0093D19C into it, and returns the object's address.
// (No per-instance @class/@field: the function takes no self and only touches global storage.)
void* fn_00488050() {
    if ((mem_00AD9E10 & 1) == 0) {
        mem_00AD9E10 |= 1;
        ext_0067A670(&mem_00AD9E0C, 0);
        mem_00AD9E0C = 0x0093D19C;
    }
    return &mem_00AD9E0C;
}
} // namespace lift_00488050

// [0x004880B0]
namespace lift_004880B0 {
// @name GetGuardedStaticInstance_004880B0
// @summary One-time guarded initializer for the static object at 0x00AD9E14; returns its address.

extern DWORD mem_00AD9E14;  // object storage; first DWORD holds its vtable/type pointer
extern DWORD mem_00AD9E18;  // init guard; bit 0 set once initialization has begun

// Stores the single stack argument into the first DWORD of self (thiscall, ECX = self).
void __thiscall ext_0067A670(void* self, DWORD value);

void* fn_004880B0() {
    if ((mem_00AD9E18 & 1u) == 0) {
        mem_00AD9E18 |= 1u;
        ext_0067A670(&mem_00AD9E14, 0);
        mem_00AD9E14 = 0x0093D274u;
    }
    return &mem_00AD9E14;
}
} // namespace lift_004880B0

// [0x00487FF0] sub_00487FF0 (87 bytes)
namespace lift_00487FF0 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (Calls ext_00672000 on self (thiscall, ECX = self), then stores the single stack argument into the first DWORD of self; returns that value.)
extern void ext_0067A670();
extern int mem_00AD9E08;
extern int mem_00AD9E04;

// @name ensureStaticObjectInitialized_00487FF0
// @summary One-time guarded initializer for the static object at mem_00AD9E04; runs the constructor helper once, installs vtable 0x0093D0C4, and returns the object's address.
// @field UnknownStaticObject +0x00 DWORD field_0x00
void* fn_00487FF0() {
    if ((mem_00AD9E08 & 1) == 0) {
        mem_00AD9E08 |= 1;
        ext_0067A670();
        mem_00AD9E04 = 0x0093D0C4;
    }
    return &mem_00AD9E04;
}
} // namespace lift_00487FF0

// [0x00488170] sub_00488170 (87 bytes)
namespace lift_00488170 {
// Callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall, ECX = self; stores the stack argument into self's first DWORD).
void ext_0067A670(void* self, DWORD value);
extern DWORD mem_00AD9E28;  // init guard; bit 0 set once initialization has begun
extern DWORD mem_00AD9E24;  // static object storage; first DWORD holds its vtable/type pointer

// @name getGuardedStaticObject_00488170
// @summary One-time guarded initializer for the static object at mem_00AD9E24; runs ext_0067A670 on it with argument 0, stores vtable 0x0093D424 into its first DWORD, and returns its address.
// (No @class/@field: the function takes no self and only touches global storage.)
void* fn_00488170() {
    if ((mem_00AD9E28 & 1u) == 0) {
        mem_00AD9E28 |= 1u;
        ext_0067A670(&mem_00AD9E24, 0);
        mem_00AD9E24 = 0x0093D424u;
    }
    return &mem_00AD9E24;
}
} // namespace lift_00488170

// [0x00488110] sub_00488110 (87 bytes)
namespace lift_00488110 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (Calls ext_00672000 on self (thiscall, ECX = self), then stores the single stack argument into the first DWORD of self; returns that value.)
extern DWORD ext_0067A670(void* self, DWORD value);
extern DWORD mem_00AD9E20;
extern DWORD mem_00AD9E1C;

// @name ensureStaticObjectInitialized_00488110
// @summary One-time initializer for the static object at 0x00AD9E1C, guarded by bit 0 of 0x00AD9E20; returns the object's address.
void* fn_00488110() {
    // Guard bit 0 of mem_00AD9E20: construct the static object only on first use.
    if ((mem_00AD9E20 & 1u) == 0) {
        mem_00AD9E20 |= 1u;
        // Base-initialization call on the object (ECX = &mem_00AD9E1C). The stack
        // argument is the SEH try-state slot, written as 0 by the original code.
        // The value stored into the object is overwritten below, so it does not
        // affect the final state.
        ext_0067A670(&mem_00AD9E1C, 0u);
        // Install the object's vtable/identity pointer.
        mem_00AD9E1C = 0x0093D34Cu;
    }
    return &mem_00AD9E1C;
}
} // namespace lift_00488110

// [0x00481D80] sub_00481D80 (90 bytes)
namespace lift_00481D80 {
// Known callee 0x004080C0: destroyPointerVectorRange (Iterates over a checked vector range of object pointers and invokes each non-null object's deleting destructor.)
extern void ext_004080C0(void* container1, uint32_t iterPtr, void* container2, uint32_t endPtr);
// Known callee 0x00596660: Vector_erase_range (Erases a range [first, last) of 4-byte elements from a vector and returns the updated iterator.)
extern void* ext_00596660(void* this_ptr, void* out_iter, void* first_container, uint32_t first_ptr, void* last_container, uint32_t last_ptr);
// MSVCR80!_invalid_parameter_noinfo, loaded through a pointer slot.
extern void (*mem_00925134)();

// @name vectorDestroyAndClear
// @class <unknown>
// @summary Destroys every pointer element in a checked vector range [field_0x04, field_0x08) and erases the range.
// @field <unknown> +0x04 uint32_t field_0x04
// @field <unknown> +0x08 uint32_t field_0x08
void fn_00481D80(void* self) {
    // Range check: field_0x04 must not exceed field_0x08 (invalid-parameter handler otherwise).
    if (lift_field<uint32_t>(self, 0x04) > lift_field<uint32_t>(self, 0x08)) {
        mem_00925134();
    }
    uint32_t begin = lift_field<uint32_t>(self, 0x04);
    if (begin > lift_field<uint32_t>(self, 0x08)) {
        mem_00925134();
    }
    // Destroy the pointed-to objects in [begin, end).
    ext_004080C0(self, begin, self, lift_field<uint32_t>(self, 0x08));

    // Re-read the range (destructors may have changed it) and erase it.
    uint32_t end = lift_field<uint32_t>(self, 0x08);
    if (lift_field<uint32_t>(self, 0x04) > end) {
        mem_00925134();
    }
    begin = lift_field<uint32_t>(self, 0x04);
    if (begin > lift_field<uint32_t>(self, 0x08)) {
        mem_00925134();
    }
    uint32_t out_iter[4] = {};
    ext_00596660(self, out_iter, self, begin, self, end);
}
} // namespace lift_00481D80

// [0x0048DFF0] sub_0048DFF0 (94 bytes)
namespace lift_0048DFF0 {
// Known callee 0x006657F0: InitVtblAndArg (Stores the vtable pointer (0x00987A04), a stack argument at +0x04, and zeroes +0x08/+0x0C; returns self.)
extern void* ext_006657F0(void* self, uint32_t arg);
// Known callee 0x00468180: sub_00468180 (Returns global int32 value from mem_00AD7CD8.)
extern int32_t ext_00468180(void);
// Known callee 0x00469570: getVectorElementAt (Returns the 32-bit element at the given index from a vector.)
extern uint32_t ext_00469570(uint8_t* self, uint32_t index);

// Vtable pointer value stored into self+0x00 (immediate 0x0093E560 in the original code).
static constexpr uint32_t kVtable_0093E560 = 0x0093E560u;

// @name Unknown::InitWithVectorElement
// @class Unknown
// @summary Sets the vtable, stores the argument at +0x10, and stores vector element 5 (from the global int32 source) at +0x08; returns self.
// @field Unknown +0x00 uint32_t vtable
// @field Unknown +0x08 uint32_t element
// @field Unknown +0x10 uint32_t arg
void* fn_0048DFF0(void* self, uint32_t arg) {
    ext_006657F0(self, 1u);

    lift_field<uint32_t>(self, 0x00) = kVtable_0093E560;
    lift_field<uint32_t>(self, 0x10) = arg;

    const int32_t source = ext_00468180();
    const uint32_t element = ext_00469570(
        reinterpret_cast<uint8_t*>(static_cast<uintptr_t>(static_cast<uint32_t>(source))),
        5u);
    lift_field<uint32_t>(self, 0x08) = element;

    return self;
}
} // namespace lift_0048DFF0

// [0x00487C50]
namespace lift_00487C50 {
// @name InitOnceGlobalString_00487C50
// @summary One-time initializer for global string at mem_00AD9DAC; returns its address.
// SEH frame setup/teardown (fs:[0] push/restore, trylevel store) is not modeled; it has no portable equivalent.

extern uint8_t mem_00AD9DC8[];  // init guard byte; bit 0 = initialized
extern uint8_t mem_00AD9DAC[];  // global string object

extern void* ext_0066AD10(void* out_str, const void* arg);
extern void ext_006A6C87(const void* fn);

void* InitOnceGlobalString_00487C50() {
    if ((mem_00AD9DC8[0] & 1u) == 0) {
        mem_00AD9DC8[0] |= 1u;
        ext_0066AD10(mem_00AD9DAC, reinterpret_cast<const void*>(static_cast<uintptr_t>(0x00A33760)));
        ext_006A6C87(reinterpret_cast<const void*>(static_cast<uintptr_t>(0x00917190)));
    }
    return mem_00AD9DAC;
}
} // namespace lift_00487C50
