// Lifted C++ translation unit: lifted/leaf/decompiled_550000.cpp
#include "lift_compat.h"
#include <new>
#include <string>

#include <string>
namespace lift_005528E0 {
// Known callee 0x005528D0: HandleGraphic::vfunc_1 (Sets the floats at +0x04 and +0x08 to 1.0f, then tail-calls SubObject::resetScaleAndIndex on the same object.)
extern void __fastcall fn_005528D0(void* self);

// @name SetVtableAndInitGraphic
// @summary Stores constant vtable-like word at +0x00 of self, calls fn_005528D0(self), returns self.
// @field self +0x00 uint32_t field_0x00 (constant 0x00957534 stored here)
void* fn_005528E0(void* self) {
    lift_field<uint32_t>(self, 0x00) = 0x00957534u;
    fn_005528D0(self);
    return self;
}
} // namespace lift_005528E0
#include <bit>
#include <cstring>
#include <cstdint>

#include <cstdint>
namespace lift_00553960 {
// Known callee 0x00584C10: sub_00584C10 (takes the pointer in ecx, returns a bool in al)
extern uint8_t ext_00584C10(void* arg);

// @name descriptiveName_00553960
// @summary Returns 1 if the pointer argument is non-null and ext_00584C10 returns false for it; otherwise 0.
// @field none (no direct field accesses; the argument is only passed through to ext_00584C10)
uint8_t descriptiveName_00553960(void* arg) {
    if (arg == nullptr) {
        return 0;
    }
    if (ext_00584C10(arg) != 0) {
        return 0;
    }
    return 1;
}
} // namespace lift_00553960
#include <cstdio>

// [0x00554CE0] sub_00554CE0 (27 bytes)
namespace lift_00554CE0 {
extern float ext_005530B0(float x);

// @name descriptiveName_00554CE0
// @summary Returns the argument passed through ext_005530B0, scaled by the float at self+0x20.
// @field (unknown) +0x20 float field_0x20
float fn_00554CE0(void* self, float x) {
    const float scale = *reinterpret_cast<float*>(reinterpret_cast<uint8_t*>(self) + 0x20);
    return ext_005530B0(x) * scale;
}
} // namespace lift_00554CE0

// [0x005571E0] sub_005571E0 (27 bytes)
namespace lift_005571E0 {
// @name sub_005571E0
// @summary Auto-lifted identical-shape clone of 0x005694F0 (DestroyRangeForward_005694F0).
namespace lift_005694F0 {
extern void __cdecl ext_005566D0(int a1, int a2, void* self, int a4);

// @name DestroyRangeForward_005694F0
// @class (none)
// @summary Forwards two stack arguments plus the incoming ECX value to ext_005693E0 (range destroy helper).
void fn_005571E0(void* self, int edx_unused, int a1, int a2) {
    // Original: push a2, push ecx, push a2, push a1, call ext_005693E0(a1, a2, self, a2).
    ext_005566D0(a1, a2, self, a2);
}
} // namespace lift_005694F0
} // namespace lift_005571E0

// [0x005572D0] sub_005572D0 (27 bytes)
namespace lift_005572D0 {
// @name sub_005572D0
// @summary Auto-lifted identical-shape clone of 0x005694F0 (DestroyRangeForward_005694F0).
namespace lift_005694F0 {
extern void __cdecl ext_00556740(int a1, int a2, void* self, int a4);

// @name DestroyRangeForward_005694F0
// @class (none)
// @summary Forwards two stack arguments plus the incoming ECX value to ext_005693E0 (range destroy helper).
void fn_005572D0(void* self, int edx_unused, int a1, int a2) {
    // Original: push a2, push ecx, push a2, push a1, call ext_005693E0(a1, a2, self, a2).
    ext_00556740(a1, a2, self, a2);
}
} // namespace lift_005694F0
} // namespace lift_005572D0

// [0x00557360] sub_00557360 (27 bytes)
namespace lift_00557360 {
// @name sub_00557360
// @summary Auto-lifted identical-shape clone of 0x005694F0 (DestroyRangeForward_005694F0).
namespace lift_005694F0 {
extern void __cdecl ext_005567D0(int a1, int a2, void* self, int a4);

// @name DestroyRangeForward_005694F0
// @class (none)
// @summary Forwards two stack arguments plus the incoming ECX value to ext_005693E0 (range destroy helper).
void fn_00557360(void* self, int edx_unused, int a1, int a2) {
    // Original: push a2, push ecx, push a2, push a1, call ext_005693E0(a1, a2, self, a2).
    ext_005567D0(a1, a2, self, a2);
}
} // namespace lift_005694F0
} // namespace lift_00557360

// [0x00559620] sub_00559620 (27 bytes)
namespace lift_00559620 {
// @name sub_00559620
// @summary Auto-lifted identical-shape clone of 0x005694F0 (DestroyRangeForward_005694F0).
namespace lift_005694F0 {
extern void __cdecl ext_00558F20(int a1, int a2, void* self, int a4);

// @name DestroyRangeForward_005694F0
// @class (none)
// @summary Forwards two stack arguments plus the incoming ECX value to ext_005693E0 (range destroy helper).
void fn_00559620(void* self, int edx_unused, int a1, int a2) {
    // Original: push a2, push ecx, push a2, push a1, call ext_005693E0(a1, a2, self, a2).
    ext_00558F20(a1, a2, self, a2);
}
} // namespace lift_005694F0
} // namespace lift_00559620

// [0x00559640] sub_00559640 (27 bytes)
namespace lift_00559640 {
// @name sub_00559640
// @summary Auto-lifted identical-shape clone of 0x005694F0 (DestroyRangeForward_005694F0).
namespace lift_005694F0 {
extern void __cdecl ext_00558F80(int a1, int a2, void* self, int a4);

// @name DestroyRangeForward_005694F0
// @class (none)
// @summary Forwards two stack arguments plus the incoming ECX value to ext_005693E0 (range destroy helper).
void fn_00559640(void* self, int edx_unused, int a1, int a2) {
    // Original: push a2, push ecx, push a2, push a1, call ext_005693E0(a1, a2, self, a2).
    ext_00558F80(a1, a2, self, a2);
}
} // namespace lift_005694F0
} // namespace lift_00559640

// [0x00559660] sub_00559660 (27 bytes)
namespace lift_00559660 {
// @name sub_00559660
// @summary Auto-lifted identical-shape clone of 0x005694F0 (DestroyRangeForward_005694F0).
namespace lift_005694F0 {
extern void __cdecl ext_00558FE0(int a1, int a2, void* self, int a4);

// @name DestroyRangeForward_005694F0
// @class (none)
// @summary Forwards two stack arguments plus the incoming ECX value to ext_005693E0 (range destroy helper).
void fn_00559660(void* self, int edx_unused, int a1, int a2) {
    // Original: push a2, push ecx, push a2, push a1, call ext_005693E0(a1, a2, self, a2).
    ext_00558FE0(a1, a2, self, a2);
}
} // namespace lift_005694F0
} // namespace lift_00559660

// [0x00559C30] sub_00559C30 (27 bytes)
namespace lift_00559C30 {
// @name sub_00559C30
// @summary Auto-lifted identical-shape clone of 0x005694F0 (DestroyRangeForward_005694F0).
namespace lift_005694F0 {
extern void __cdecl ext_00559840(int a1, int a2, void* self, int a4);

// @name DestroyRangeForward_005694F0
// @class (none)
// @summary Forwards two stack arguments plus the incoming ECX value to ext_005693E0 (range destroy helper).
void fn_00559C30(void* self, int edx_unused, int a1, int a2) {
    // Original: push a2, push ecx, push a2, push a1, call ext_005693E0(a1, a2, self, a2).
    ext_00559840(a1, a2, self, a2);
}
} // namespace lift_005694F0
} // namespace lift_00559C30

// [0x0055B860] sub_0055B860 (27 bytes)
namespace lift_0055B860 {
// @name sub_0055B860
// @summary Auto-lifted identical-shape clone of 0x005694F0 (DestroyRangeForward_005694F0).
namespace lift_005694F0 {
extern void __cdecl ext_0055B780(int a1, int a2, void* self, int a4);

// @name DestroyRangeForward_005694F0
// @class (none)
// @summary Forwards two stack arguments plus the incoming ECX value to ext_005693E0 (range destroy helper).
void fn_0055B860(void* self, int edx_unused, int a1, int a2) {
    // Original: push a2, push ecx, push a2, push a1, call ext_005693E0(a1, a2, self, a2).
    ext_0055B780(a1, a2, self, a2);
}
} // namespace lift_005694F0
} // namespace lift_0055B860

// [0x00553760] sub_00553760 (31 bytes)
namespace lift_00553760 {
// Known callee 0x00661A00: sub_00661A00 (Member forwarding thunk: loads subobject pointer at +0x4 and tail-calls sub_0065D570.)
// Returns the callee's eax value (tail-call passthrough), so it is declared with an int result.
extern int __fastcall ext_00661A00(void* self);
// Callee 0x00553080 (41B): takes `this` in ecx and one stack argument; callee cleans the stack.
extern void __thiscall ext_00553080(void* self, int arg);

// @name Unknown::CallSubobjectThenDecrement
// @class Unknown
// @summary Forwards to the subobject at +0x420 via ext_00661A00, decrements the result, and passes it to ext_00553080 on the member at +0x16C.
// @field Unknown +0x420 void* field_0x420
void fn_00553760(void* self) {
    void* subobject = lift_field<void*>(self, 0x420);
    int result = ext_00661A00(subobject);
    result = result - 1;
    ext_00553080(static_cast<char*>(self) + 0x16C, result);
}
} // namespace lift_00553760

// [0x0055E180] sub_0055E180 (32 bytes)
namespace lift_0055E180 {
extern void ext_0055E150();

// Virtual slot 0 of the object, called with the object in ECX (thiscall) and one stack arg.
typedef void (__thiscall *VirtualSlot0Fn)(void* self, uint32_t arg);

// @name ForwardVirtualSlot0WithOne
// @class Unknown
// @summary Calls ext_0055E150, then if the object pointed to by the argument is non-null, invokes its vtable slot 0 with the object as this and 1 as the argument.
// @field Unknown +0x00 void* field_0x00
extern void __stdcall fn_0055E180(void** objRef) {
    ext_0055E150();

    void* obj = *objRef;
    if (obj == nullptr) {
        return;
    }

    void** vtable = lift_field<void**>(obj, 0x00);
    auto slot0 = reinterpret_cast<VirtualSlot0Fn>(vtable[0]);
    slot0(obj, 1u);
}
} // namespace lift_0055E180

// [0x00552130]
namespace lift_00552130 {
// @name Matrix4::getRow
// @class Matrix4
// @summary Copies a 4-float row/element at the given index from this object into out.
uint32_t __thiscall sub_00552130(uintptr_t this_ptr, uintptr_t out_ptr, uint32_t index) {
    const float* src = reinterpret_cast<const float*>(this_ptr + (static_cast<uintptr_t>(index) << 4));
    float* dst = reinterpret_cast<float*>(out_ptr);
    dst[0] = src[0];
    dst[1] = src[1];
    dst[2] = src[2];
    dst[3] = src[3];
    return static_cast<uint32_t>(out_ptr);
}
} // namespace lift_00552130

// [0x00556AB0] sub_00556AB0 (41 bytes)
namespace lift_00556AB0 {
// @name sub_00556AB0
// @summary Auto-lifted identical-shape clone of 0x0044C4D0 (DWORD_RangeCopy_thiscall).
namespace lift_0044C4D0 {
// @name DWORD_RangeCopy_thiscall
// @summary Copies DWORDs from [first, last) to out via ext_0044C2A0 and returns out + count.

extern DWORD* ext_00402630(const DWORD* first, const DWORD* last, DWORD* out);

DWORD* __thiscall fn_00556AB0(void* self, const DWORD* first, const DWORD* last, DWORD* out) {
    (void)self;
    return ext_00402630(first, last, out);
}
} // namespace lift_0044C4D0
} // namespace lift_00556AB0

// [0x0055F800] sub_0055F800 (41 bytes)
namespace lift_0055F800 {
// @name sub_0055F800
// @summary Auto-lifted identical-shape clone of 0x0044C4D0 (DWORD_RangeCopy_thiscall).
namespace lift_0044C4D0 {
// @name DWORD_RangeCopy_thiscall
// @summary Copies DWORDs from [first, last) to out via ext_0044C2A0 and returns out + count.

extern DWORD* ext_0055E940(const DWORD* first, const DWORD* last, DWORD* out);

DWORD* __thiscall fn_0055F800(void* self, const DWORD* first, const DWORD* last, DWORD* out) {
    (void)self;
    return ext_0055E940(first, last, out);
}
} // namespace lift_0044C4D0
} // namespace lift_0055F800

// [0x00553980]
namespace lift_00553980 {
// @name sub_00553980
// @summary Zero-initializes float vector, dword, and byte fields of a 0x1B+ byte object and returns this.
// @field Unknown +0x00 float field_0x00
// @field Unknown +0x04 float field_0x04
// @field Unknown +0x08 float field_0x08
// @field Unknown +0x0c uint32_t field_0x0c
// @field Unknown +0x10 uint32_t field_0x10
// @field Unknown +0x14 uint32_t field_0x14
// @field Unknown +0x18 uint8_t field_0x18
// @field Unknown +0x19 uint8_t field_0x19
// @field Unknown +0x1a uint8_t field_0x1a
void* __thiscall sub_00553980(void* self) {
    uint8_t* p = static_cast<uint8_t*>(self);
    *reinterpret_cast<float*>(p + 0x00) = 0.0f;
    *reinterpret_cast<float*>(p + 0x04) = 0.0f;
    *reinterpret_cast<float*>(p + 0x08) = 0.0f;
    *reinterpret_cast<uint32_t*>(p + 0x0c) = 0;
    *reinterpret_cast<uint32_t*>(p + 0x10) = 0;
    *reinterpret_cast<uint32_t*>(p + 0x14) = 0;
    p[0x18] = 0;
    p[0x19] = 0;
    p[0x1a] = 0;
    return self;
}
} // namespace lift_00553980

// [0x00556610]
namespace lift_00556610 {
extern uint32_t mem_00925124;

// @name std::vector<char>::_Tidy
// @class std::vector<char>
// @summary Deallocates the vector buffer if non-null and resets begin, end, and capacity pointers to zero.
// @field std::vector<char> +0x04 uint32_t _Myfirst
// @field std::vector<char> +0x08 uint32_t _Mylast
// @field std::vector<char> +0x0c uint32_t _Myend
void __thiscall sub_00556610(void* self) {
    uint32_t first = *(uint32_t*)((uint8_t*)self + 0x4);
    if (first != 0) {
        uint32_t end = *(uint32_t*)((uint8_t*)self + 0xc);
        uint32_t count = end - first;
        using DeallocateFn = void(__thiscall*)(void*, uint32_t, uint32_t);
        ((DeallocateFn)(uintptr_t)mem_00925124)(self, first, count);
    }
    *(uint32_t*)((uint8_t*)self + 0x4) = 0;
    *(uint32_t*)((uint8_t*)self + 0x8) = 0;
    *(uint32_t*)((uint8_t*)self + 0xc) = 0;
}
} // namespace lift_00556610

// [0x00556640] sub_00556640 (55 bytes)
namespace lift_00556640 {
// @name sub_00556640
// @summary Auto-lifted identical-shape clone of 0x00481DE0 (fillStructArrayAndGetEnd).
namespace lift_00481DE0 {
extern void ext_005555D0(uint32_t dst, uint32_t count, uint32_t src);

// @name fillStructArrayAndGetEnd
// @summary Fills count 64-byte slots at dst with the template at src via ext_00481770 and returns dst + count*64.
// Note: the original pushes extra stack words (saved ecx, a flag dword, and a duplicate of src) that the
// callee ignores per its 3-argument signature; they are not reproduced here.
uint32_t __stdcall fn_00556640(uint32_t dst, uint32_t count, uint32_t src) {
    ext_005555D0(dst, count, src);
    return dst + (count << 5);
}
} // namespace lift_00481DE0
} // namespace lift_00556640

// [0x0055F670] sub_0055F670 (55 bytes)
namespace lift_0055F670 {
// @name sub_0055F670
// @summary Auto-lifted identical-shape clone of 0x00481DE0 (fillStructArrayAndGetEnd).
namespace lift_00481DE0 {
extern void ext_0055F390(uint32_t dst, uint32_t count, uint32_t src);

// @name fillStructArrayAndGetEnd
// @summary Fills count 64-byte slots at dst with the template at src via ext_00481770 and returns dst + count*64.
// Note: the original pushes extra stack words (saved ecx, a flag dword, and a duplicate of src) that the
// callee ignores per its 3-argument signature; they are not reproduced here.
uint32_t __stdcall fn_0055F670(uint32_t dst, uint32_t count, uint32_t src) {
    ext_0055F390(dst, count, src);
    return dst + (count << 4);
}
} // namespace lift_00481DE0
} // namespace lift_0055F670

// [0x0055F390]
namespace lift_0055F390 {
// @name descriptiveName: fillVec4Array
// @summary Copies a 4-float vector from src into `count` consecutive 16-byte slots starting at dst; no writes if dst is null.
void fillVec4Array(float* dst, uint32_t count, const float* src) {
    if (count == 0) {
        return;
    }
    uint8_t* out = reinterpret_cast<uint8_t*>(dst);
    do {
        if (out != nullptr) {
            float* slot = reinterpret_cast<float*>(out);
            slot[0] = src[0];
            slot[1] = src[1];
            slot[2] = src[2];
            slot[3] = src[3];
        }
        --count;
        out += 16;
    } while (count != 0);
}
} // namespace lift_0055F390

// [0x00552860] sub_00552860 (61 bytes)
namespace lift_00552860 {
// Rodata constant 0x00940690: float 0.3 (u32 0x3E99999A)
extern int mem_00940690;

// @name UnknownClass::SetIndexInRange
// @class UnknownClass
// @summary Accepts an index if it lies within [vfunc_2(), vfunc_3()]; stores 0.3f and the index on success, else stores -1 as the index.
// @field UnknownClass +0x0C float field_0x0C
// @field UnknownClass +0x10 int32 field_0x10
void fn_00552860(void* self, int32_t index) {
    auto* base = static_cast<unsigned char*>(self);

    // Virtual dispatch through the vtable: slot 2 (+0x08) = lower bound, slot 3 (+0x0C) = upper bound.
    void** vtbl = *reinterpret_cast<void***>(self);
    auto lowerFn = reinterpret_cast<int32_t (*)(void*)>(vtbl[2]);
    auto upperFn = reinterpret_cast<int32_t (*)(void*)>(vtbl[3]);

    const int32_t lower = lowerFn(self);
    if (index < lower) {
        *reinterpret_cast<int32_t*>(base + 0x10) = -1;
        return;
    }

    const int32_t upper = upperFn(self);
    if (index > upper) {
        *reinterpret_cast<int32_t*>(base + 0x10) = -1;
        return;
    }

    const float constant = std::bit_cast<float>(static_cast<uint32_t>(mem_00940690));
    *reinterpret_cast<float*>(base + 0x0C) = constant;
    *reinterpret_cast<int32_t*>(base + 0x10) = index;
}
} // namespace lift_00552860

// [0x00553170] sub_00553170 (63 bytes)
namespace lift_00553170 {
// .rdata constants
extern const double mem_00957598; // 0.017453292519943295 (pi / 180)
extern const double mem_009576E8; // 3.1415927410125732 (pi, float-rounded)

// @name AngleScaler::ScaleByUnitMode
// @class AngleScaler
// @summary Scales a float angle by a unit-mode selector: 0 = degrees to radians, 2 = turns to radians (2*pi), otherwise identity.
// @field AngleScaler +0x28 int32_t unitMode
float fn_00553170(void* self, float value) {
    const int32_t unitMode = lift_field<int32_t>(self, 0x28);
    if (unitMode == 0) {
        // Degrees -> radians; intermediate is stored as float before returning.
        return static_cast<float>(static_cast<double>(value) * mem_00957598);
    }
    if (unitMode == 2) {
        // value * pi, then doubled (fadd st0, st0) => value * 2 * pi.
        return static_cast<float>(static_cast<double>(value) * mem_009576E8 * 2.0);
    }
    return value;
}
} // namespace lift_00553170

// [0x005577A0] sub_005577A0 (63 bytes)
namespace lift_005577A0 {
// @name sub_005577A0
// @summary Auto-lifted identical-shape clone of 0x00569970 (Unknown::ReleaseHandleAndClear).
namespace lift_00569970 {
extern void ext_0041DD40(uint32_t a0, uint32_t a1, void* a2, void* a3);
extern void fn_006A5C5C(uint32_t arg);

// @name Unknown::ReleaseHandleAndClear
// @class Unknown
// @summary If field +0x04 is nonzero, run ext_005693E0 with it and forward it to fn_006A5C5C, then clear fields +0x04, +0x08 and +0x0C.
// @field Unknown +0x04 uint32_t field_0x04
// @field Unknown +0x08 uint32_t field_0x08
// @field Unknown +0x0C uint32_t field_0x0C
void fn_005577A0(void* self) {
    if (lift_field<uint32_t>(self, 0x4) != 0) {
        // Argument order matches the original pushes: a0 = f04, a1 = f08, a2 = self, a3 = ecx (self).
        ext_0041DD40(lift_field<uint32_t>(self, 0x4),
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
} // namespace lift_005577A0

// [0x005577E0] sub_005577E0 (63 bytes)
namespace lift_005577E0 {
// @name sub_005577E0
// @summary Auto-lifted identical-shape clone of 0x00569970 (Unknown::ReleaseHandleAndClear).
namespace lift_00569970 {
extern void ext_00556740(uint32_t a0, uint32_t a1, void* a2, void* a3);
extern void fn_006A5C5C(uint32_t arg);

// @name Unknown::ReleaseHandleAndClear
// @class Unknown
// @summary If field +0x04 is nonzero, run ext_005693E0 with it and forward it to fn_006A5C5C, then clear fields +0x04, +0x08 and +0x0C.
// @field Unknown +0x04 uint32_t field_0x04
// @field Unknown +0x08 uint32_t field_0x08
// @field Unknown +0x0C uint32_t field_0x0C
void fn_005577E0(void* self) {
    if (lift_field<uint32_t>(self, 0x4) != 0) {
        // Argument order matches the original pushes: a0 = f04, a1 = f08, a2 = self, a3 = ecx (self).
        ext_00556740(lift_field<uint32_t>(self, 0x4),
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
} // namespace lift_005577E0

// [0x00557920] sub_00557920 (63 bytes)
namespace lift_00557920 {
// @name sub_00557920
// @summary Auto-lifted identical-shape clone of 0x00569970 (Unknown::ReleaseHandleAndClear).
namespace lift_00569970 {
extern void ext_005567D0(uint32_t a0, uint32_t a1, void* a2, void* a3);
extern void fn_006A5C5C(uint32_t arg);

// @name Unknown::ReleaseHandleAndClear
// @class Unknown
// @summary If field +0x04 is nonzero, run ext_005693E0 with it and forward it to fn_006A5C5C, then clear fields +0x04, +0x08 and +0x0C.
// @field Unknown +0x04 uint32_t field_0x04
// @field Unknown +0x08 uint32_t field_0x08
// @field Unknown +0x0C uint32_t field_0x0C
void fn_00557920(void* self) {
    if (lift_field<uint32_t>(self, 0x4) != 0) {
        // Argument order matches the original pushes: a0 = f04, a1 = f08, a2 = self, a3 = ecx (self).
        ext_005567D0(lift_field<uint32_t>(self, 0x4),
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
} // namespace lift_00557920

// [0x005587E0] sub_005587E0 (63 bytes)
namespace lift_005587E0 {
// @name sub_005587E0
// @summary Auto-lifted identical-shape clone of 0x00569970 (Unknown::ReleaseHandleAndClear).
namespace lift_00569970 {
extern void ext_005566D0(uint32_t a0, uint32_t a1, void* a2, void* a3);
extern void fn_006A5C5C(uint32_t arg);

// @name Unknown::ReleaseHandleAndClear
// @class Unknown
// @summary If field +0x04 is nonzero, run ext_005693E0 with it and forward it to fn_006A5C5C, then clear fields +0x04, +0x08 and +0x0C.
// @field Unknown +0x04 uint32_t field_0x04
// @field Unknown +0x08 uint32_t field_0x08
// @field Unknown +0x0C uint32_t field_0x0C
void fn_005587E0(void* self) {
    if (lift_field<uint32_t>(self, 0x4) != 0) {
        // Argument order matches the original pushes: a0 = f04, a1 = f08, a2 = self, a3 = ecx (self).
        ext_005566D0(lift_field<uint32_t>(self, 0x4),
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
} // namespace lift_005587E0

// [0x005597C0] sub_005597C0 (63 bytes)
namespace lift_005597C0 {
// @name sub_005597C0
// @summary Auto-lifted identical-shape clone of 0x00569970 (Unknown::ReleaseHandleAndClear).
namespace lift_00569970 {
extern void ext_00558F20(uint32_t a0, uint32_t a1, void* a2, void* a3);
extern void fn_006A5C5C(uint32_t arg);

// @name Unknown::ReleaseHandleAndClear
// @class Unknown
// @summary If field +0x04 is nonzero, run ext_005693E0 with it and forward it to fn_006A5C5C, then clear fields +0x04, +0x08 and +0x0C.
// @field Unknown +0x04 uint32_t field_0x04
// @field Unknown +0x08 uint32_t field_0x08
// @field Unknown +0x0C uint32_t field_0x0C
void fn_005597C0(void* self) {
    if (lift_field<uint32_t>(self, 0x4) != 0) {
        // Argument order matches the original pushes: a0 = f04, a1 = f08, a2 = self, a3 = ecx (self).
        ext_00558F20(lift_field<uint32_t>(self, 0x4),
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
} // namespace lift_005597C0

// [0x00559800] sub_00559800 (63 bytes)
namespace lift_00559800 {
// @name sub_00559800
// @summary Auto-lifted identical-shape clone of 0x00569970 (Unknown::ReleaseHandleAndClear).
namespace lift_00569970 {
extern void ext_00558F80(uint32_t a0, uint32_t a1, void* a2, void* a3);
extern void fn_006A5C5C(uint32_t arg);

// @name Unknown::ReleaseHandleAndClear
// @class Unknown
// @summary If field +0x04 is nonzero, run ext_005693E0 with it and forward it to fn_006A5C5C, then clear fields +0x04, +0x08 and +0x0C.
// @field Unknown +0x04 uint32_t field_0x04
// @field Unknown +0x08 uint32_t field_0x08
// @field Unknown +0x0C uint32_t field_0x0C
void fn_00559800(void* self) {
    if (lift_field<uint32_t>(self, 0x4) != 0) {
        // Argument order matches the original pushes: a0 = f04, a1 = f08, a2 = self, a3 = ecx (self).
        ext_00558F80(lift_field<uint32_t>(self, 0x4),
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
} // namespace lift_00559800

// [0x00559B20] sub_00559B20 (63 bytes)
namespace lift_00559B20 {
// @name sub_00559B20
// @summary Auto-lifted identical-shape clone of 0x00569970 (Unknown::ReleaseHandleAndClear).
namespace lift_00569970 {
extern void ext_00558FE0(uint32_t a0, uint32_t a1, void* a2, void* a3);
extern void fn_006A5C5C(uint32_t arg);

// @name Unknown::ReleaseHandleAndClear
// @class Unknown
// @summary If field +0x04 is nonzero, run ext_005693E0 with it and forward it to fn_006A5C5C, then clear fields +0x04, +0x08 and +0x0C.
// @field Unknown +0x04 uint32_t field_0x04
// @field Unknown +0x08 uint32_t field_0x08
// @field Unknown +0x0C uint32_t field_0x0C
void fn_00559B20(void* self) {
    if (lift_field<uint32_t>(self, 0x4) != 0) {
        // Argument order matches the original pushes: a0 = f04, a1 = f08, a2 = self, a3 = ecx (self).
        ext_00558FE0(lift_field<uint32_t>(self, 0x4),
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
} // namespace lift_00559B20

// [0x00559F50] sub_00559F50 (63 bytes)
namespace lift_00559F50 {
// @name sub_00559F50
// @summary Auto-lifted identical-shape clone of 0x00569970 (Unknown::ReleaseHandleAndClear).
namespace lift_00569970 {
extern void ext_00559840(uint32_t a0, uint32_t a1, void* a2, void* a3);
extern void fn_006A5C5C(uint32_t arg);

// @name Unknown::ReleaseHandleAndClear
// @class Unknown
// @summary If field +0x04 is nonzero, run ext_005693E0 with it and forward it to fn_006A5C5C, then clear fields +0x04, +0x08 and +0x0C.
// @field Unknown +0x04 uint32_t field_0x04
// @field Unknown +0x08 uint32_t field_0x08
// @field Unknown +0x0C uint32_t field_0x0C
void fn_00559F50(void* self) {
    if (lift_field<uint32_t>(self, 0x4) != 0) {
        // Argument order matches the original pushes: a0 = f04, a1 = f08, a2 = self, a3 = ecx (self).
        ext_00559840(lift_field<uint32_t>(self, 0x4),
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
} // namespace lift_00559F50

// [0x0055B880] sub_0055B880 (63 bytes)
namespace lift_0055B880 {
// @name sub_0055B880
// @summary Auto-lifted identical-shape clone of 0x00569970 (Unknown::ReleaseHandleAndClear).
namespace lift_00569970 {
extern void ext_0055B780(uint32_t a0, uint32_t a1, void* a2, void* a3);
extern void fn_006A5C5C(uint32_t arg);

// @name Unknown::ReleaseHandleAndClear
// @class Unknown
// @summary If field +0x04 is nonzero, run ext_005693E0 with it and forward it to fn_006A5C5C, then clear fields +0x04, +0x08 and +0x0C.
// @field Unknown +0x04 uint32_t field_0x04
// @field Unknown +0x08 uint32_t field_0x08
// @field Unknown +0x0C uint32_t field_0x0C
void fn_0055B880(void* self) {
    if (lift_field<uint32_t>(self, 0x4) != 0) {
        // Argument order matches the original pushes: a0 = f04, a1 = f08, a2 = self, a3 = ecx (self).
        ext_0055B780(lift_field<uint32_t>(self, 0x4),
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
} // namespace lift_0055B880

// [0x00559B00] sub_00559B00 (17 bytes)
namespace lift_00559B00 {
// Known callee 0x00559B20: sub_00559B20 (Auto-lifted identical-shape clone of 0x00569970 (Unknown::ReleaseHandleAndClear).)
extern void ext_00559B20(void* self);
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk forwarding to MSVCR80!_CxxThrowException.)
extern void ext_006A6DD2(void);

// @name Unknown::ReleaseAndThrowNull
// @summary Releases the handle held in the caller's local (passed in ecx), then raises a null-object exception via CxxThrowException.
// @field none
void fn_00559B00(void* self) {
    // mov ecx, [ebp-0x18]: self is the caller's stack local, supplied as ecx
    ext_00559B20(self);
    // push 0; push 0; call _CxxThrowException(NULL, NULL): raises a null throw.
    ext_006A6DD2();
}
} // namespace lift_00559B00

// [0x00559A30] sub_00559A30 (17 bytes)
namespace lift_00559A30 {
// Known callee 0x00559800: sub_00559800 (Auto-lifted identical-shape clone of 0x00569970 (Unknown::ReleaseHandleAndClear).)
extern void ext_00559800(void* self);
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk forwarding to MSVCR80!_CxxThrowException.)
extern void ext_006A6DD2(void);

// @name Unknown::ReleaseHandleAndClearThenThrow
// @class Unknown
// @summary Releases the handle held in a frame-local slot, then raises a C++ exception with null arguments.
// @field Unknown +0x00 <unknown> (not accessed directly; the frame-local at [ebp-0x18] is passed as the release target)
void fn_00559A30(void* self) {
    // mov ecx, [ebp-0x18]: the release target is a frame-local, not the incoming argument.
    // The incoming `self` is not read by the original code; it is kept for signature uniformity.
    void* ecx = self;
    ext_00559800(ecx);
    // push 0; push 0; call _CxxThrowException (argument block is (nullptr, nullptr))
    ext_006A6DD2();
}
} // namespace lift_00559A30

// [0x0055B970] sub_0055B970 (17 bytes)
namespace lift_0055B970 {
// Known callee 0x0055B880: sub_0055B880 (Auto-lifted identical-shape clone of 0x00569970 (Unknown::ReleaseHandleAndClear).)
extern void ext_0055B880(void* self);
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk forwarding to MSVCR80!_CxxThrowException.)
extern void ext_006A6DD2(void* exceptionObject, void* throwInfo);

// @name ReleaseHandleAndThrowNull
// @summary Releases the handle held in the caller's stack slot, then raises a C++ exception with null arguments.
void fn_0055B970(void* self) {
    ext_0055B880(self);
    ext_006A6DD2(nullptr, nullptr);
}
} // namespace lift_0055B970

// [0x00557A10] sub_00557A10 (17 bytes)
namespace lift_00557A10 {
// Known callee 0x00557920: sub_00557920 (Auto-lifted identical-shape clone of 0x00569970 (Unknown::ReleaseHandleAndClear).)
extern void ext_00557920(void* self);
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk forwarding to MSVCR80!_CxxThrowException.)
// Original pushes two zero arguments (no object, no ThrowInfo), i.e. a null rethrow.
extern void ext_006A6DD2(void* object, const void* throwInfo);

// @name Unknown::ReleaseAndThrowNull
// @class Unknown (optional)
// @summary Releases the handle held by self via ext_00557920, then raises a C++ exception with null object and null ThrowInfo.
// @field (none: self is only forwarded to ext_00557920, no offsets accessed)
void fn_00557A10(void* self) {
    ext_00557920(self);
    ext_006A6DD2(nullptr, nullptr);
}
} // namespace lift_00557A10

// [0x00554D20] sub_00554D20 (27 bytes)
namespace lift_00554D20 {
// Known callee 0x00553170: AngleScaler::ScaleByUnitMode (Scales a float angle by a unit-mode selector: 0 = degrees to radians, 2 = turns to radians (2*pi), otherwise identity.)
extern float ext_00553170(void* self, float value);

// @name ScaleAngleByUnitModeAndDivide
// @class UnknownObject
// @summary Scales a float angle via ext_00553170 (unit-mode conversion), then divides the result by the float at this+0x20.
// @field UnknownObject +0x20 float field_0x20
float fn_00554D20(void* self, float value) {
    const float scaled = ext_00553170(self, value);
    return scaled / lift_field<float>(self, 0x20);
}
} // namespace lift_00554D20

// [0x0055E940] sub_0055E940 (67 bytes)
namespace lift_0055E940 {
// @name copyVec4Range
// @summary Copies a range of 16-byte (4 x float) elements from [srcBegin, srcEnd) to dst; no-op for an empty range, and skips the store when dst is null.
// @field none (free function; no class fields accessed)
void copyVec4Range(const float* srcBegin, const float* srcEnd, float* dst) {
    if (srcBegin == srcEnd) {
        return;
    }
    const float* src = srcBegin;
    float* out = dst;
    do {
        if (out != nullptr) {
            out[0] = src[0];
            out[1] = src[1];
            out[2] = src[2];
            out[3] = src[3];
        }
        src += 4;
        if (out != nullptr) {
            out += 4;
        }
    } while (src != srcEnd);
}
} // namespace lift_0055E940

// [0x00554260] sub_00554260 (68 bytes)
namespace lift_00554260 {
// @name Matrix3x3::transposeInPlace
// @class Matrix3x3
// @summary Transposes a row-major 3x3 float matrix in place (diagonal unchanged) and returns `this`.
// @field Matrix3x3 +0x00 float field_0x00
// @field Matrix3x3 +0x04 float field_0x04
// @field Matrix3x3 +0x08 float field_0x08
// @field Matrix3x3 +0x0c float field_0x0c
// @field Matrix3x3 +0x10 float field_0x10
// @field Matrix3x3 +0x14 float field_0x14
// @field Matrix3x3 +0x18 float field_0x18
// @field Matrix3x3 +0x1c float field_0x1c
// @field Matrix3x3 +0x20 float field_0x20
extern void* __fastcall fn_00554260(void* self, int edx_unused) {
    (void)edx_unused;
    float* m = static_cast<float*>(self);

    // Snapshot all nine elements first, as the original does, so writes cannot alias reads.
    float src[9];
    std::memcpy(src, m, sizeof src);

    // Swap off-diagonal pairs: (0,1)<->(1,0) is idx1<->idx3, (0,2)<->(2,0) is idx2<->idx6,
    // (1,2)<->(2,1) is idx5<->idx7. Diagonal elements idx 0, 4, 8 stay as they are.
    m[1] = src[3];
    m[3] = src[1];
    m[2] = src[6];
    m[6] = src[2];
    m[5] = src[7];
    m[7] = src[5];

    return self;
}
} // namespace lift_00554260

// [0x0055C490] sub_0055C490 (70 bytes)
namespace lift_0055C490 {
// @name sub_0055C490
// @summary Auto-lifted identical-shape clone of 0x004205B0 (TreeMap::lowerBound).
namespace lift_004205B0 {
// MSVCP80 std::operator<(const std::string&, const std::string&), imported via IAT slot mem_00924EF4.
extern bool ext_std_string_less(const void* lhs, const void* rhs);

// @name TreeMap::lowerBound
// @class TreeMap
// @summary Lower-bound search in an MSVC-style std::map tree: returns first node whose key is not less than the argument, or the header node if none.
// @field TreeMap +0x04 void* head
// Node layout used (MSVC _Tree node): +0x00 left, +0x04 parent, +0x08 right, +0x0C key (std::string), +0x59 isNil flag.
void* fn_0055C490(void* self, const void* key) {
    void* head = lift_field<void*>(self, 0x04);
    void* node = lift_field<void*>(head, 0x04);   // root
    void* result = head;

    if (lift_field<uint8_t>(node, 0x2D) != 0) {
        return head;
    }

    while (lift_field<uint8_t>(node, 0x2D) == 0) {
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
} // namespace lift_004205B0
} // namespace lift_0055C490

// [0x00556680] sub_00556680 (73 bytes)
namespace lift_00556680 {
// @name sub_00556680
// @summary Auto-lifted identical-shape clone of 0x00510830 (CopyRangeBackwardAndComputeDestBegin).
namespace lift_00510830 {
// Known callee 0x004C72D0: CopyRangeBackward_004C72D0 (Copies [first,last) of 0x20-byte elements backward so they end at d_last; returns the new begin of the destination range (d_last - count), or d_last when the range is empty.)
extern uint8_t* __cdecl ext_00555160(uint8_t* first, uint8_t* last, uint8_t* d_last);

// @name CopyRangeBackwardAndComputeDestBegin
// @summary Calls ext_004C72D0 to copy [first,last) backward ending at d_last, then returns d_last minus the byte span of [first,last) rounded down to a multiple of 0x20.
void* fn_00556680(uint8_t* first, uint8_t* last, uint8_t* d_last) {
    (void)ext_00555160(first, last, d_last);

    // Byte span of the source range, truncated to 32-bit like the original code.
    int32_t span = static_cast<int32_t>(static_cast<uint32_t>(reinterpret_cast<uintptr_t>(last)) -
                                        static_cast<uint32_t>(reinterpret_cast<uintptr_t>(first)));
    span = (span >> 5) * 32;  // arithmetic shift, then back to 0x20-element granularity

    uint32_t dst = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(d_last)) - static_cast<uint32_t>(span);
    return reinterpret_cast<uint8_t*>(static_cast<uintptr_t>(dst));
}
} // namespace lift_00510830
} // namespace lift_00556680

// [0x0055F620] sub_0055F620 (73 bytes)
namespace lift_0055F620 {
// @name sub_0055F620
// @summary Auto-lifted identical-shape clone of 0x00510830 (CopyRangeBackwardAndComputeDestBegin).
namespace lift_00510830 {
// Known callee 0x004C72D0: CopyRangeBackward_004C72D0 (Copies [first,last) of 0x20-byte elements backward so they end at d_last; returns the new begin of the destination range (d_last - count), or d_last when the range is empty.)
extern uint8_t* __cdecl ext_0055E230(uint8_t* first, uint8_t* last, uint8_t* d_last);

// @name CopyRangeBackwardAndComputeDestBegin
// @summary Calls ext_004C72D0 to copy [first,last) backward ending at d_last, then returns d_last minus the byte span of [first,last) rounded down to a multiple of 0x20.
void* fn_0055F620(uint8_t* first, uint8_t* last, uint8_t* d_last) {
    (void)ext_0055E230(first, last, d_last);

    // Byte span of the source range, truncated to 32-bit like the original code.
    int32_t span = static_cast<int32_t>(static_cast<uint32_t>(reinterpret_cast<uintptr_t>(last)) -
                                        static_cast<uint32_t>(reinterpret_cast<uintptr_t>(first)));
    span = (span >> 4) * 32;  // arithmetic shift, then back to 0x20-element granularity

    uint32_t dst = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(d_last)) - static_cast<uint32_t>(span);
    return reinterpret_cast<uint8_t*>(static_cast<uintptr_t>(dst));
}
} // namespace lift_00510830
} // namespace lift_0055F620

// [0x0055E230] sub_0055E230 (73 bytes)
namespace lift_0055E230 {
// @name CopyFloat4RangeBackward
// @summary Backward (high-to-low) copy of 4-float (16-byte) blocks from [first, last) into the range ending at dst_end, safe for overlapping ranges where dst_end > last.
void fn_0055E230(float* first, float* last, float* dst_end) {
    if (first == last) {
        return;
    }
    float* src = last;
    float* dst = dst_end;
    do {
        src -= 4;
        dst -= 4;
        dst[0] = src[0];
        dst[1] = src[1];
        dst[2] = src[2];
        dst[3] = src[3];
    } while (src != first);
}
} // namespace lift_0055E230

// [0x005565C0] sub_005565C0 (73 bytes)
namespace lift_005565C0 {
// @name sub_005565C0
// @summary Auto-lifted identical-shape clone of 0x00672810 (CopyRangeAndComputeDestEnd).
namespace lift_00672810 {
// Known callee 0x0041CDE0: CopyEntryRangeForward (Copies each 0x20-byte entry in [first,last) to dest by assigning its leading std::string and copying the DWORD at +0x1c; returns dest end, or dest itself when the range is empty.)
extern void* ext_00555550(const void* first, const void* last, void* dest);

// @name CopyRangeAndComputeDestEnd
// @summary Copies the 0x20-byte entry range [first,last) to dest and returns dest advanced by the range size rounded down to a multiple of 0x20.
void* fn_005565C0(const void* first, const void* last, void* dest) {
    ext_00555550(first, last, dest);
    const std::ptrdiff_t bytes =
        reinterpret_cast<const char*>(last) - reinterpret_cast<const char*>(first);
    const std::ptrdiff_t aligned = bytes & ~static_cast<std::ptrdiff_t>(0x1F);
    return static_cast<char*>(dest) + aligned;
}
} // namespace lift_00672810
} // namespace lift_005565C0

// [0x00555420] sub_00555420 (74 bytes)
namespace lift_00555420 {
// @name LowerBound32ByFirstDword_00555420
// @class Element
// @summary std::lower_bound over a [first,last) array of 32-byte elements, comparing each element's first uint32 against *key; returns the first element not less than *key.
// @field Element +0x00 uint32_t firstDword
void* fn_00555420(void* first, void* last, const void* key) {
    uint8_t* cur = static_cast<uint8_t*>(first);
    ptrdiff_t count = (static_cast<uint8_t*>(last) - cur) >> 5;
    const uint32_t value = lift_field<uint32_t>(key, 0);

    while (count > 0) {
        const ptrdiff_t half = count / 2;
        uint8_t* mid = cur + (half << 5);
        if (lift_field<uint32_t>(mid, 0) < value) {
            cur = mid + 32;
            count = count - half - 1;
        } else {
            count = half;
        }
    }
    return cur;
}
} // namespace lift_00555420

// [0x005528F0] sub_005528F0 (76 bytes)
namespace lift_005528F0 {
extern uint8_t mem_00AF7D00[];

// @name FillParityBlendTable_005528F0
// @summary Fills a 256x256 byte table at mem_00AF7D00 (4 bytes per entry, offset by 1) with 0x00/0xFF values derived from bit 3 of (col ^ row), with the fourth byte always 0xFF; returns the input ecx unchanged.
uint32_t fn_005528F0(uint32_t ecx) {
    uint8_t* esi = mem_00AF7D00 + 1;
    for (uint32_t row = 0; row < 256; ++row) {
        for (uint32_t col = 0; col < 256; ++col) {
            uint8_t dl = (((col ^ row) >> 3) & 1) ? 0xFF : 0x00;
            esi[-1] = dl;
            esi[0] = dl;
            esi[1] = dl;
            esi[2] = 0xFF;
            esi += 4;
        }
    }
    return ecx;
}
} // namespace lift_005528F0

// [0x0055F340] sub_0055F340 (77 bytes)
namespace lift_0055F340 {
// @name LowerBoundFloatKey16
// @summary Binary search over 16-byte records keyed by their leading float; returns the first record whose key is not less than *key (std::lower_bound semantics).
void* fn_0055F340(void* begin, void* end, const float* key) {
    uint8_t* first = static_cast<uint8_t*>(begin);
    ptrdiff_t count = (static_cast<uint8_t*>(end) - first) / 16;

    while (count > 0) {
        ptrdiff_t half = count / 2;
        uint8_t* mid = first + half * 16;
        if (*key > *reinterpret_cast<const float*>(mid)) {
            // record key < *key: search the upper half
            first = mid + 16;
            count = count - half - 1;
        } else {
            // record key >= *key (or unordered): search the lower half
            count = half;
        }
    }
    return first;
}
} // namespace lift_0055F340

// [0x00557280] sub_00557280 (78 bytes)
namespace lift_00557280 {
// Known callee 0x004026E0: StringArray::ReleaseElements (Destroys each 28-byte string element in the array, frees its buffer, and nulls the begin/end/capacity pointers.)
extern void ext_004026E0(void* self);
// Import slot 0x00924FF4: MSVCP80 std::basic_string<char>::~basic_string (thiscall, this in ECX).
extern int mem_00924FF4;

// @name Unknown::ReleaseStringMembers_00557280
// @class Unknown
// @summary Releases the StringArray at +0x28 and destroys the std::string at +0x0C of the object.
// @field Unknown +0x0C std::string field_0x0c
// @field Unknown +0x28 StringArray field_0x28
void fn_00557280(void* self) {
    auto* base = static_cast<uint8_t*>(self);

    // Destroy the array of strings embedded at +0x28.
    ext_004026E0(base + 0x28);

    // Destroy the std::string embedded at +0x0C via its imported destructor.
    using DtorFn = void (*)(void*);
    auto dtor = reinterpret_cast<DtorFn>(
        static_cast<uintptr_t>(static_cast<uint32_t>(mem_00924FF4)));
    dtor(base + 0x0C);
}
} // namespace lift_00557280

// [0x00551A20]
namespace lift_00551A20 {
// @name sub_00551A20_dtor
// @summary Destroys a std::string member at +0xf8 and calls base/member destructor ext_005478F0.
// @field Self +0xf8 std::string field_0xf8


extern void ext_005478F0(void* self);
extern uint32_t mem_00924FF4;

void fn_00551A20(void* self) {
    auto* base = static_cast<uint8_t*>(self);
    reinterpret_cast<void (*)(void*)>(static_cast<uintptr_t>(mem_00924FF4))(base + 0xf8);
    ext_005478F0(self);
}
} // namespace lift_00551A20

// [0x005541A0]
namespace lift_005541A0 {
extern void ext_00628FF0(void* self);

// @name destroyStringPair
// @summary Destroys two std::string members at offsets +0x20 and +0x04
// @field Object +0x04 std::string field_0x04
// @field Object +0x20 std::string field_0x20
void __thiscall sub_005541A0(void* self) {
    auto* base = static_cast<uint8_t*>(self);
    ext_00628FF0(base + 0x20);
    ext_00628FF0(base + 0x04);
}
} // namespace lift_005541A0

// [0x00554E50] sub_00554E50 (85 bytes)
namespace lift_00554E50 {
// Callee: thiscall-style, self passed in ecx, dst receives a 3-float vector.
extern void ext_00553340(void* self, float* dst, float x, float y, float z);

// @name Unknown::scaleByReciprocal_00554E50
// @class Unknown
// @summary Calls ext_00553340 to produce a vec3 from (x, y, z), then divides it by self->field_0x20 and writes the result to out.
// @field Unknown +0x20 float field_0x20
float* fn_00554E50(void* self, float* out, float x, float y, float z) {
    float tmp[3];
    ext_00553340(self, tmp, x, y, z);

    const float inv = 1.0f / lift_field<float>(self, 0x20);
    out[0] = tmp[0] * inv;
    out[1] = tmp[1] * inv;
    out[2] = tmp[2] * inv;
    return out;
}
} // namespace lift_00554E50

// [0x00558F80] sub_00558F80 (85 bytes)
namespace lift_00558F80 {
// Known callee 0x006A5C5C: thunk_MFC80_ord_764 (IAT jump thunk forwarding to MFC80!ord_764.)
extern void ext_006A5C5C();
// Slot holding the MSVCP80 basic_string destructor target (0x00628FF0).
extern uint32_t mem_00924FF4;

// @name Unknown::destroyRange_00558F80
// @class DestroyRangeElement
// @summary Destroys each 0x1c-byte element in [begin, end): runs the string destructor over its
//          inner 0x1c-byte item array, frees the array, and zeroes its begin/end/cap pointers.
// @field DestroyRangeElement +0x10 uint32_t innerBegin
// @field DestroyRangeElement +0x14 uint32_t innerEnd
// @field DestroyRangeElement +0x18 uint32_t innerCap
void fn_00558F80(uint32_t begin, uint32_t end) {
    constexpr uint32_t kElemStride = 0x1c;

    for (uint32_t elem = begin; elem != end; elem += kElemStride) {
        uint32_t* vec = reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(elem + 0x10));
        uint32_t innerBegin = vec[0];

        if (innerBegin != 0) {
            uint32_t innerEnd = vec[1];

            // Destroy every inner item (0x1c bytes each) via the string destructor.
            for (uint32_t item = innerBegin; item != innerEnd; item += kElemStride) {
                auto dtor = reinterpret_cast<void (*)(uint32_t)>(
                    static_cast<uintptr_t>(mem_00924FF4));
                dtor(item);
            }

            // Release the inner array.
            auto release = reinterpret_cast<void (*)(uint32_t)>(&ext_006A5C5C);
            release(innerBegin);
        }

        vec[0] = 0;
        vec[1] = 0;
        vec[2] = 0;
    }
}
} // namespace lift_00558F80

// [0x00558F20] sub_00558F20 (85 bytes)
namespace lift_00558F20 {
// Known callee 0x006A5C5C: thunk_MFC80_ord_764 (IAT jump thunk forwarding to MFC80!ord_764.)
extern void ext_006A5C5C(void* ptr);
extern uint32_t mem_00924FF4;

// @name Unknown::clearStringVectorRange
// @class Unknown
// @summary Destroys the 0x1C-byte elements of each 0x14-byte record's buffer in [first, last), frees a non-null buffer, and zeroes its three pointer fields.
// @field Unknown +0x08 void* field_0x08
// @field Unknown +0x0C void* field_0x0C
// @field Unknown +0x10 void* field_0x10
void fn_00558F20(void* first, void* last) {
    // Element destructor is fetched indirectly from the IAT slot at mem_00924FF4 (thiscall).
    using ElementDtor = void(__thiscall*)(void*);
    const auto destroy = reinterpret_cast<ElementDtor>(static_cast<uintptr_t>(mem_00924FF4));

    for (uint8_t* rec = static_cast<uint8_t*>(first); rec != last; rec += 0x14) {
        const uint32_t begin = lift_field<uint32_t>(rec, 0x08);
        const uint32_t end = lift_field<uint32_t>(rec, 0x0C);

        if (begin != 0) {
            for (uint32_t elem = begin; elem != end; elem += 0x1C) {
                destroy(reinterpret_cast<void*>(static_cast<uintptr_t>(elem)));
            }
            ext_006A5C5C(reinterpret_cast<void*>(static_cast<uintptr_t>(begin)));
        }

        lift_field<uint32_t>(rec, 0x08) = 0;
        lift_field<uint32_t>(rec, 0x0C) = 0;
        lift_field<uint32_t>(rec, 0x10) = 0;
    }
}
} // namespace lift_00558F20
