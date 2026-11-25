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
