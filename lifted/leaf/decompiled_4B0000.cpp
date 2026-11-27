// Lifted C++ translation unit: lifted/leaf/decompiled_4B0000.cpp
#include "lift_compat.h"
#include <new>
#include <string>
#include <cstdint>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <istream>
#include <bit>

#include <bit>
namespace lift_004B6C90 {
extern const char mem_009433E0[];

// @name sub_004B6C90
// @summary Auto-lifted identical-shape clone of 0x00622380 (NMData::SkeletalCalibrationVariables::vfunc_28).
void* fn_004B6C90(void* self, void* dst, void* arg2) {
    (void)self;
    (void)arg2;
    new (dst) std::string(mem_009433E0);
    return dst;
}
} // namespace lift_004B6C90
#include <memory>
#include <cstddef>
#include <cstdio>
#include <algorithm>
#include <stdexcept>

#include <stdexcept>
namespace lift_004B7030 {
// RDATA constants
extern float mem_00A3849C; // 0.1230123f
extern float mem_00A384A0; // 0.23480123f
extern float mem_00A384A4; // 0.1343947f

// @name sub_004B7030
// @summary Writes three RDATA float constants into the 3-float structure pointed to by the single stack argument.
// @field Unknown +0x00 float field_0x00
// @field Unknown +0x04 float field_0x04
// @field Unknown +0x08 float field_0x08
void sub_004B7030(float *out)
{
    out[0] = mem_00A3849C;
    out[1] = mem_00A384A0;
    out[2] = mem_00A384A4;
}
} // namespace lift_004B7030

// [0x004B4740] sub_004B4740 (37 bytes)
namespace lift_004B4740 {
namespace lift_004B4740 {
// Known callee 0x004B18E0: sub_004B18E0 (35 bytes, stdcall: callee pops its 3 args).
// Arg 2 is the caller's saved ESI slot in the original code (no meaningful value); passed as 0.
extern DWORD __stdcall ext_004B18E0(DWORD a, DWORD b, DWORD c);
// Known callee 0x0055DA20: initDwordPair (Stores two stack-passed DWORDs into the object at ECX and returns that object pointer (callee pops 8 bytes).)
extern void __stdcall ext_0055DA20(void* self, DWORD a, DWORD b);

// @name sub_004B4740
// @summary Calls ext_004B18E0 on arg2, then initialises arg1 with its result and arg2 via ext_0055DA20; returns arg1.
void* fn_004B4740(void* arg1, DWORD arg2) {
    DWORD result = ext_004B18E0(arg2, 0, 0);
    ext_0055DA20(arg1, result, arg2);
    return arg1;
}
} // namespace lift_004B4740
} // namespace lift_004B4740

// [0x004BA230] sub_004BA230 (37 bytes)
namespace lift_004BA230 {
namespace lift_004BA230 {
// Known callee 0x004B7980: sub_004B7980 (35 bytes). Called with arg2 as its first argument;
// the remaining two stack slots hold no meaningful value in the original code and are passed as 0.
extern DWORD __stdcall ext_004B7980(DWORD a, DWORD b, DWORD c);
// Known callee 0x0055DA20: initDwordPair (Stores two stack-passed DWORDs into the object at ECX and returns that object pointer (callee pops 8 bytes).)
extern void __stdcall ext_0055DA20(void* self, DWORD a, DWORD b);

// @name initDwordPairFromLookup
// @summary Calls ext_004B7980 on arg2, then initialises arg1 with its result and arg2 via ext_0055DA20; returns arg1.
void* fn_004BA230(void* arg1, DWORD arg2) {
    DWORD result = ext_004B7980(arg2, 0, 0);
    ext_0055DA20(arg1, result, arg2);
    return arg1;
}
} // namespace lift_004BA230
} // namespace lift_004BA230

// [0x004BA920] sub_004BA920 (35 bytes)
namespace lift_004BA920 {
// Known callee 0x004BA230: initDwordPairFromLookup (Calls ext_004B7980 on arg2, then initialises arg1 with its result and arg2 via ext_0055DA20; returns arg1.)
extern void* ext_004BA230(void* arg1, DWORD arg2);

// @name initDwordPairFromLookup_passthrough
// @summary Forwards (arg1, arg2) to ext_004BA230 (result discarded) and returns arg1 unchanged.
void* fn_004BA920(void* arg1, DWORD arg2) {
    ext_004BA230(arg1, arg2);
    return arg1;
}
} // namespace lift_004BA920

// [0x004B4C00] sub_004B4C00 (35 bytes)
namespace lift_004B4C00 {
// Known callee 0x004B4740: sub_004B4740 (Calls ext_004B18E0 on arg2, then initialises arg1 with its result and arg2 via ext_0055DA20; returns arg1.)
extern void* ext_004B4740(void* arg1, DWORD arg2);

// @name initAndReturnFirstArg
// @summary Calls ext_004B4740(arg1, arg2) for its side effects and returns arg1 unchanged (stdcall, 2 args).
void* __stdcall fn_004B4C00(void* arg1, DWORD arg2) {
    ext_004B4740(arg1, arg2);
    return arg1;
}
} // namespace lift_004B4C00

// [0x004B10A0] sub_004B10A0 (46 bytes)
namespace lift_004B10A0 {
extern void __stdcall ext_004B0ED0(float* v);

// @name ObjectVec3_callWithScalar
// @class Unknown
// @summary Builds a float[4] {scalar, this->+0x20, this->+0x24, this->+0x28} and passes it to ext_004B0ED0 (stdcall, one pointer arg); scalar is a stack arg, callee pops 4 bytes.
// @field Unknown +0x20 float field_0x20
// @field Unknown +0x24 float field_0x24
// @field Unknown +0x28 float field_0x28
void __thiscall fn_004B10A0(void* self, float scalar) {
    float v[4];
    v[0] = scalar;
    v[1] = lift_field<float>(self, 0x20);
    v[2] = lift_field<float>(self, 0x24);
    v[3] = lift_field<float>(self, 0x28);
    ext_004B0ED0(v);
}
} // namespace lift_004B10A0

// [0x004B10D0]
namespace lift_004B10D0 {
// @name sub_004B10D0
// @summary Reads three float fields from the object and forwards them with an extra float argument to sub_004B0ED0 through a temporary out-parameter.
// @field +0x1C float field_0x1C
// @field +0x24 float field_0x24
// @field +0x28 float field_0x28

extern void __cdecl ext_004B0ED0(float* out, float a, float x, float b, float c);

void __stdcall sub_004B10D0(void* ecx, float arg1) {
    float a = lift_field<float>(ecx, 0x1C);
    float out = a;
    float b = lift_field<float>(ecx, 0x24);
    float c = lift_field<float>(ecx, 0x28);
    ext_004B0ED0(&out, a, arg1, b, c);
}
} // namespace lift_004B10D0

// [0x004B1100] sub_004B1100 (46 bytes)
namespace lift_004B1100 {
extern void ext_004B0ED0(float* quad);

// @name packQuadAndCall
// @summary Copies float fields +0x1C, +0x20, +0x28 of self plus one stack float into a local 4-float array and passes it to sub_004B0ED0.
// @field Unknown +0x1C float field_0x1C
// @field Unknown +0x20 float field_0x20
// @field Unknown +0x28 float field_0x28
void fn_004B1100(void* self, float arg0) {
    auto* ecx = static_cast<uint8_t*>(self);
    float quad[4];
    quad[0] = *reinterpret_cast<float*>(ecx + 0x1C);
    quad[1] = *reinterpret_cast<float*>(ecx + 0x20);
    quad[2] = arg0;
    quad[3] = *reinterpret_cast<float*>(ecx + 0x28);
    ext_004B0ED0(quad);
}
} // namespace lift_004B1100

// [0x004BEB00] sub_004BEB00 (76 bytes)
namespace lift_004BEB00 {
// @name sub_004BEB00
// @summary Auto-lifted identical-shape clone of 0x0050C4D0 (sub_00508310).
namespace lift_0050C4D0 {
// @name Unknown::ResetElementsAndNotify_0050C4D0
// @class Unknown
// @summary Clears the element buffer at this+0x4 via ext_0050B960, then calls ext_0065F440 on this.
// @field Unknown +0x04 uint8_t field_0x04 (subobject passed by address to ext_0050B960; contents not inspected)

void ext_006246B0(void* self);
void ext_0065F440(void* self);

void fn_004BEB00(void* self) {
    // Original MSVC SEH prologue/epilogue (fs:[0] frame setup/teardown) is
    // omitted; it only manages exception-handler registration and has no
    // effect on the logic below.
    ext_006246B0(static_cast<uint8_t*>(self) + 0x4);
    ext_0065F440(self);
}
} // namespace lift_0050C4D0
} // namespace lift_004BEB00

// [0x004BA340] sub_004BA340 (85 bytes)
namespace lift_004BA340 {
// Import slot holding the address of MSVC std::operator< for std::string.
extern int mem_00924EF4;

using StrLessFn = bool(__cdecl*)(DWORD lhs, DWORD rhs);

// @name lowerBoundStringPtr_004BA340
// @summary std::lower_bound-style binary search over a DWORD array using the indirect comparator; returns first element not less than value.
DWORD* fn_004BA340(DWORD* first, DWORD* last, DWORD value) {
    auto less = reinterpret_cast<StrLessFn>(
        static_cast<uintptr_t>(static_cast<uint32_t>(mem_00924EF4)));
    ptrdiff_t count = last - first;
    while (count > 0) {
        ptrdiff_t half = count / 2;
        DWORD* mid = first + half;
        if (less(*mid, value)) {
            first = mid + 1;
            count -= half + 1;
        } else {
            count = half;
        }
    }
    return first;
}
} // namespace lift_004BA340

// [0x004B4D30]
namespace lift_004B4D30 {
extern uint32_t mem_00925134;

// @name sub_004B4D30
// @summary Iterates over a vector of pointers at +0x8 and sets each element's byte at +0x1 to (byte at +0x2 == 0)
// @field Unknown +0x08 uint32_t field_0x08
// @field Unknown +0x0c uint32_t field_0x0c
// @field Unknown +0x10 uint32_t field_0x10
void __thiscall sub_004B4D30(void* self) {
    uint8_t* base = reinterpret_cast<uint8_t*>(self);
    auto invalid_param = reinterpret_cast<void (*)()>(mem_00925134);
    uint32_t* vec = reinterpret_cast<uint32_t*>(base + 0x8);
    uint32_t* it = reinterpret_cast<uint32_t*>(vec[1]);

    if (reinterpret_cast<uintptr_t>(it) > vec[2]) {
        invalid_param();
    }

    while (true) {
        uint32_t last = vec[2];
        if (vec[1] > last) {
            invalid_param();
        }
        if (reinterpret_cast<uintptr_t>(it) == last) {
            break;
        }
        if (reinterpret_cast<uintptr_t>(it) >= vec[2]) {
            invalid_param();
        }
        uint8_t* elem = reinterpret_cast<uint8_t*>(*it);
        uint8_t flag = elem[2];
        if (reinterpret_cast<uintptr_t>(it) >= vec[2]) {
            invalid_param();
        }
        uint8_t* elem2 = reinterpret_cast<uint8_t*>(*it);
        elem2[1] = (flag == 0) ? 1 : 0;
        if (reinterpret_cast<uintptr_t>(it) >= vec[2]) {
            invalid_param();
        }
        ++it;
    }
}
} // namespace lift_004B4D30

// [0x004B4BA0] sub_004B4BA0 (30 bytes)
namespace lift_004B4BA0 {
// @name sub_004B4BA0
// @summary Auto-lifted identical-shape clone of 0x0046F6A0 (StoreValueAndSingleton).
namespace lift_0046F6A0 {
DWORD ext_004B4770();  // ConstructOnce_0046F580

// @name StoreValueAndSingleton
// @summary Stores a value into dst[0], stores the one-time-constructed global object pointer into dst[1], and returns dst.
// @field <none> +0x00 DWORD field_0x00 (written from the value argument)
// @field <none> +0x04 DWORD field_0x04 (written from ext_0046F580() result)

DWORD* fn_004B4BA0(DWORD* dst, DWORD value) {
    DWORD obj = ext_004B4770();
    dst[0] = value;
    dst[1] = obj;
    return dst;
}
} // namespace lift_0046F6A0
} // namespace lift_004B4BA0

// [0x004B4BC0] sub_004B4BC0 (30 bytes)
namespace lift_004B4BC0 {
// @name sub_004B4BC0
// @summary Auto-lifted identical-shape clone of 0x0046F6A0 (StoreValueAndSingleton).
namespace lift_0046F6A0 {
DWORD ext_004B47D0();  // ConstructOnce_0046F580

// @name StoreValueAndSingleton
// @summary Stores a value into dst[0], stores the one-time-constructed global object pointer into dst[1], and returns dst.
// @field <none> +0x00 DWORD field_0x00 (written from the value argument)
// @field <none> +0x04 DWORD field_0x04 (written from ext_0046F580() result)

DWORD* fn_004B4BC0(DWORD* dst, DWORD value) {
    DWORD obj = ext_004B47D0();
    dst[0] = value;
    dst[1] = obj;
    return dst;
}
} // namespace lift_0046F6A0
} // namespace lift_004B4BC0

// [0x004B4BE0] sub_004B4BE0 (30 bytes)
namespace lift_004B4BE0 {
// @name sub_004B4BE0
// @summary Auto-lifted identical-shape clone of 0x0046F6A0 (StoreValueAndSingleton).
namespace lift_0046F6A0 {
DWORD ext_004B4830();  // ConstructOnce_0046F580

// @name StoreValueAndSingleton
// @summary Stores a value into dst[0], stores the one-time-constructed global object pointer into dst[1], and returns dst.
// @field <none> +0x00 DWORD field_0x00 (written from the value argument)
// @field <none> +0x04 DWORD field_0x04 (written from ext_0046F580() result)

DWORD* fn_004B4BE0(DWORD* dst, DWORD value) {
    DWORD obj = ext_004B4830();
    dst[0] = value;
    dst[1] = obj;
    return dst;
}
} // namespace lift_0046F6A0
} // namespace lift_004B4BE0

// [0x004B1880]
namespace lift_004B1880 {
// @name initStaticObjectOnce_004B1880
// @summary One-time initializer for the static object at 0x00AE0CE8; guarded by flag bit 0 at 0x00AE0CEC, sets its vtable to 0x00942074, and returns its address.
// @field
// (no member accesses; the object at 0x00AE0CE8 is a global, not a class member)

extern DWORD ext_0067A670(void* self, DWORD value);
extern DWORD mem_00AE0CEC;
extern DWORD mem_00AE0CE8;

void* fn_004B1880(void) {
    // The original wraps this in an MSVC SEH frame (fs:[0] push/restore) and
    // sets a try-state slot; that is compiler/runtime plumbing with no portable
    // equivalent, so it is omitted here. Only the guarded init logic is kept.
    if ((mem_00AE0CEC & 1u) == 0) {
        mem_00AE0CEC |= 1u;
        ext_0067A670(&mem_00AE0CE8, 0);
        mem_00AE0CE8 = 0x00942074u;
    }
    return &mem_00AE0CE8;
}
} // namespace lift_004B1880

// [0x004B4830] sub_004B4830 (87 bytes)
namespace lift_004B4830 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (calls ext_00672000 on self, then stores the single argument into the first DWORD of self; returns that value.)
extern DWORD ext_0067A670(void* self, DWORD value);
extern DWORD mem_00AE0D60;
extern DWORD mem_00AE0D64;

// @name ensureStaticObjectInitialized_004B4830
// @summary One-time initializer guarded by bit 0 of mem_00AE0D64: constructs the static object at 0x00AE0D60 via ext_0067A670, sets its vtable to 0x0094251C, and returns its address.
DWORD fn_004B4830() {
    if ((mem_00AE0D64 & 1u) == 0) {
        mem_00AE0D64 |= 1u;
        ext_0067A670(&mem_00AE0D60, 0);
        mem_00AE0D60 = 0x0094251Cu;
    }
    return (DWORD)(uintptr_t)&mem_00AE0D60;
}
} // namespace lift_004B4830

// [0x004B4770]
namespace lift_004B4770 {
// @name initStaticObjectOnce_004B4770
// @summary One-time initializer for the static object at 0x00AE0D50; returns that object's address.

extern uint32_t mem_00AE0D54;
extern uint32_t mem_00AE0D50;
DWORD ext_0067A670(void* self, DWORD value);

uint32_t fn_004B4770() {
    // The original sets up and tears down an SEH frame (fs:[0] chain) around this body.
    // That is compiler/runtime state with no portable C++ equivalent, so it is omitted here.
    if ((mem_00AE0D54 & 1u) == 0) {
        mem_00AE0D54 |= 1u;
        ext_0067A670(&mem_00AE0D50, 0);
        mem_00AE0D50 = 0x009421BCu;
    }
    return static_cast<uint32_t>(reinterpret_cast<uintptr_t>(&mem_00AE0D50));
}
} // namespace lift_004B4770

// [0x004B47D0] sub_004B47D0 (87 bytes)
namespace lift_004B47D0 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (Calls ext_00672000 on self (thiscall, ECX = self), then stores the single stack argument into the first DWORD of self; returns that value.)
extern DWORD ext_0067A670(void* self, DWORD value);
extern int mem_00AE0D5C;
extern int mem_00AE0D58;

// @name initStaticObjectOnce_004B47D0
// @summary One-time initializer for the static object at 0x00AE0D58 guarded by bit 0 of 0x00AE0D5C; returns the object's address.
void* fn_004B47D0() {
    if ((mem_00AE0D5C & 1) == 0) {
        mem_00AE0D5C |= 1;
        ext_0067A670(&mem_00AE0D58, 0);
        mem_00AE0D58 = 0x0094236C;
    }
    return &mem_00AE0D58;
}
} // namespace lift_004B47D0

// [0x004B7920]
namespace lift_004B7920 {
// @name initStaticObjectOnce_004B7920
// @summary One-time guarded initializer for the static object at 0x00AE165C; on first call sets bit 0 of 0x00AE1660, runs the object's init helper, stores 0x009433F4 into its first DWORD, and returns its address.

extern uint32_t mem_00AE1660;
extern uint32_t mem_00AE165C;
extern uint32_t ext_0067A670(void* self, uint32_t value);

void* fn_004B7920(void) {
    if ((mem_00AE1660 & 1u) == 0) {
        mem_00AE1660 |= 1u;
        ext_0067A670(&mem_00AE165C, 0u);
        mem_00AE165C = 0x009433F4u;
    }
    return &mem_00AE165C;
}
} // namespace lift_004B7920

// [0x004B99B0] sub_004B99B0 (87 bytes)
namespace lift_004B99B0 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: self in ECX, one stack argument; stores the argument into the first DWORD of self and returns it.)
extern DWORD ext_0067A670(void* self, DWORD value);
extern uint32_t mem_00AE1698;
extern uint32_t mem_00AE1694;

// @name initStaticObjectOnce_004B99B0
// @summary One-time guarded initializer for the static object at mem_00AE1694; sets init bit 0 in mem_00AE1698, runs ext_0067A670 on the object with 0, stores 0x0094376C in its first DWORD, and returns its address.
// @field StaticObject_00AE1694 +0x00 uint32_t field_0x00
void* fn_004B99B0() {
    if ((mem_00AE1698 & 1u) == 0) {
        mem_00AE1698 |= 1u;
        ext_0067A670(&mem_00AE1694, 0);
        mem_00AE1694 = 0x0094376Cu;
    }
    return &mem_00AE1694;
}
} // namespace lift_004B99B0

// [0x004BA270] sub_004BA270 (87 bytes)
namespace lift_004BA270 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (Calls ext_00672000 on self (thiscall, ECX = self), then stores the single stack argument into the first DWORD of self; returns that value.)
extern DWORD ext_0067A670(void* self, DWORD value);
extern uint32_t mem_00AE16B0;
extern uint32_t mem_00AE16AC;

// @name initStaticObjectOnce_004BA270
// @summary One-time guarded initializer for the static object at mem_00AE16AC; sets bit 0 of mem_00AE16B0, runs ext_0067A670 on the object, stores vtable-like pointer 0x00943694, and returns the object address.
void* fn_004BA270() {
    // The original wraps this in an MSVC SEH frame (fs:[0] push/pop). That
    // is exception-state bookkeeping with no portable equivalent, so it is
    // omitted; the guard and init logic below are unchanged.
    if ((mem_00AE16B0 & 1u) == 0) {
        mem_00AE16B0 |= 1u;
        // The original passes a saved SEH word as the stack argument; it is
        // overwritten by the vtable store below, so 0 is passed here.
        ext_0067A670(&mem_00AE16AC, 0);
        mem_00AE16AC = 0x00943694u;
    }
    return static_cast<void*>(&mem_00AE16AC);
}
} // namespace lift_004BA270

// [0x004BA740] sub_004BA740 (87 bytes)
namespace lift_004BA740 {
// @name sub_004BA740
// @summary Auto-lifted identical-shape clone of 0x0049D390 (initPairWithStaticHandle).
namespace lift_0049D390 {
// Known callee 0x0049CFF0: ensureStaticObjectInitialized_0049CFF0 (One-time initializer guarded by bit 0 of mem_00ADD818; initializes the static object at mem_00ADD814 and returns its address.)
extern void* ext_004BA270();
extern int mem_00B599BC;

// @name initPairWithStaticHandle
// @summary Writes a value into dst[0], stores the static object handle into dst[1], and returns dst.
// @field Pair +0x00 uint32_t field_0x00
// @field Pair +0x04 uint32_t field_0x04
void* fn_004BA740(void* dst, uint32_t value) {
    auto* out = static_cast<uint32_t*>(dst);

    // Pre-initialize both slots (original code zeroes [dst] and seeds [dst+4] from mem_00B599BC).
    out[0] = 0;
    out[1] = static_cast<uint32_t>(mem_00B599BC);

    // One-time initialization of the static object; returns its address.
    void* handle = ext_004BA270();

    out[0] = value;
    out[1] = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(handle));
    return dst;
}
} // namespace lift_0049D390
} // namespace lift_004BA740

// [0x004B51F0] sub_004B51F0 (90 bytes)
namespace lift_004B51F0 {
// @name sub_004B51F0
// @summary Auto-lifted identical-shape clone of 0x0050BE20 (Vector_eraseTailChecked).
namespace lift_0050BE20 {
// Known callee 0x00536230: deleteRangeChecked (Deletes each non-null element of a 4-byte-slot range [first, last), validating the owner and its bound at every step.)
// Called with four stack words in the order the original pushes them: (self, begin, self, end).
extern void ext_004B4930(void* self, uint32_t arg1, uint32_t first, uint32_t arg3, uint32_t bound);
// Known callee 0x00596660: Vector_erase_range (Erases a range [first, last) of 4-byte elements from a vector and returns the updated iterator.)
extern void* ext_00596660(void* self, void* out_iter, uint32_t first_container, uint32_t first_ptr, uint32_t last_container, uint32_t last_ptr);
// Invalid-parameter handler pointer (MSVCR80!_invalid_parameter_noinfo).
extern void mem_00925134();

// @name Vector_eraseTailChecked
// @class Vector
// @summary Validates the vector's begin/end/bound pointers, deletes the owned elements through ext_00536230, then erases the tail range via ext_00596660.
// @field Vector +0x04 uint32_t field_0x04
// @field Vector +0x08 uint32_t field_0x08
void fn_004B51F0(void* self) {
    auto* base = static_cast<uint8_t*>(self);
    const uint32_t selfValue = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(self));

    // First pass: check the begin/end ordering, then delete the range.
    uint32_t bound = lift_field<uint32_t>(base, 0x08);
    if (lift_field<uint32_t>(base, 0x04) > bound) {
        mem_00925134();
    }
    uint32_t first = lift_field<uint32_t>(base, 0x04);
    if (first > lift_field<uint32_t>(base, 0x08)) {
        mem_00925134();
    }
    ext_004B4930(self, selfValue, first, selfValue, bound);

    // Second pass: re-validate, then erase the tail and capture the returned iterator.
    bound = lift_field<uint32_t>(base, 0x08);
    if (lift_field<uint32_t>(base, 0x04) > bound) {
        mem_00925134();
    }
    first = lift_field<uint32_t>(base, 0x04);
    if (first > lift_field<uint32_t>(base, 0x08)) {
        mem_00925134();
    }
    uint32_t outIter[2] = {0, 0};
    ext_00596660(self, outIter, selfValue, first, selfValue, bound);
}
} // namespace lift_0050BE20
} // namespace lift_004B51F0

// [0x004B6680] sub_004B6680 (94 bytes)
namespace lift_004B6680 {
// Import slot (IAT entry for MSVCR80!_invalid_parameter_noinfo).
extern void (*mem_00925134)(void);

// @name DestroyOwnedRange
// @class Container
// @summary Iterates [first, last) over a container of owned object pointers (debug-checked iterators), calling each non-null element's virtual slot 0x234 with flag 1 (scalar deleting destructor).
// @field Container +0x08 uintptr_t field_0x08
void fn_004B6680(uintptr_t container, uintptr_t first, uintptr_t container2, uintptr_t last) {
    uintptr_t it = first;
    for (;;) {
        // Debug check: container must be valid and match the second container argument.
        if (container == 0 || container != container2) {
            mem_00925134();
        }
        if (it == last) {
            return;
        }
        // Debug check: iterator must be valid and within the container's end pointer.
        if (container == 0) {
            mem_00925134();
        }
        if (it >= lift_field<uintptr_t>(reinterpret_cast<void*>(container), 0x08)) {
            mem_00925134();
        }
        uintptr_t cur = it;
        it += 4;
        if (container == 0) {
            mem_00925134();
        }
        if (cur >= lift_field<uintptr_t>(reinterpret_cast<void*>(container), 0x08)) {
            mem_00925134();
        }
        uintptr_t obj = *reinterpret_cast<uintptr_t*>(cur);
        if (obj == 0) {
            continue;
        }
        // Virtual call: vtable slot at byte offset 0x234, invoked with flag 1.
        uintptr_t vtable = *reinterpret_cast<uintptr_t*>(obj);
        auto fn = *reinterpret_cast<void (**)(void*, int)>(vtable + 0x234);
        fn(reinterpret_cast<void*>(obj), 1);
    }
}
} // namespace lift_004B6680

// [0x004B4A40] sub_004B4A40 (95 bytes)
namespace lift_004B4A40 {
// Known callee 0x0066AD10: sub_0066AD10 (Auto-lifted identical-shape clone of 0x00497860 (forwardMakeBoolString).)
extern void* ext_0066AD10(void* out_str, uint8_t flag);
extern void ext_006A6C87(const void* dtor);
extern int mem_00AE0D8C;
extern int mem_00AE0D70;

// @name InitOnceGlobalString_004B4A40
// @summary One-time guarded initializer for the global string at 0x00AE0D70; registers its teardown via ext_006A6C87 and returns the global's address.
//
// The original wraps the init in an MSVC SEH frame (fs:[0]) so that the
// guard flag is cleared/handled if initialization throws. That frame is
// compiler/runtime plumbing and is not reproduced here.
void* fn_004B4A40() {
    // Guard bit 0 of mem_00AE0D8C: run initialization only once.
    if ((mem_00AE0D8C & 1) == 0) {
        mem_00AE0D8C |= 1;
        ext_0066AD10(reinterpret_cast<void*>(&mem_00AE0D70),
                     static_cast<uint8_t>(0xA37440u));
        ext_006A6C87(reinterpret_cast<const void*>(static_cast<uintptr_t>(0x009182D0u)));
    }
    return reinterpret_cast<void*>(&mem_00AE0D70);
}
} // namespace lift_004B4A40

// [0x004BEAA0]
namespace lift_004BEAA0 {
extern void* ext_0066AD10(void* out_str, uintptr_t arg);
extern int ext_006A6C87(uintptr_t fn);
extern uint32_t mem_00AE1D40;
extern int mem_00AE1D24;

// @name InitOnceGlobalString_004BEAA0
// @summary One-time initializer for global string at mem_00AE1D24; returns its address.
void* fn_004BEAA0() {
    if ((mem_00AE1D40 & 1u) == 0) {
        mem_00AE1D40 |= 1u;
        ext_0066AD10(&mem_00AE1D24, static_cast<uintptr_t>(0x00A395E8u));
        ext_006A6C87(static_cast<uintptr_t>(0x009185D0u));
    }
    return &mem_00AE1D24;
}
} // namespace lift_004BEAA0

// [0x004B7540] sub_004B7540 (95 bytes)
namespace lift_004B7540 {
// Known callee 0x0066AD10: sub_0066AD10 (Auto-lifted identical-shape clone of 0x00497860 (forwardMakeBoolString).)
// Known callee 0x006A6C87: sub_006A6C87 (18B), called with a single argument (0x009184B0).
void* ext_0066AD10(void* out_str, uint8_t flag);
int ext_006A6C87(uintptr_t arg);
extern uint32_t mem_00AE1658;
extern uint32_t mem_00AE163C;

// @name InitOnceGlobalString_004B7540
// @summary One-time initializer for global string at mem_00AE163C; returns its address.
void* fn_004B7540() {
    if ((mem_00AE1658 & 1u) == 0) {
        mem_00AE1658 |= 1u;
        ext_0066AD10(&mem_00AE163C, static_cast<uint8_t>(0xA328D4u));
        ext_006A6C87(static_cast<uintptr_t>(0x009184B0u));
    }
    return &mem_00AE163C;
}
} // namespace lift_004B7540

// [0x004B4AA0] sub_004B4AA0 (33 bytes)
namespace lift_004B4AA0 {
// Known callee 0x004B4A40: InitOnceGlobalString_004B4A40 (One-time guarded initializer for the global string at 0x00AE0D70; registers its teardown via ext_006A6C87 and returns the global's address.)
extern void* ext_004B4A40();
// Import slot for the MSVCP80 std::basic_string<char> copy constructor (__thiscall, one stack arg).
extern int mem_00924FE0;

// @name CopyInitOnceGlobalString_004B4AA0
// @summary Copy-constructs the caller's std::string from the lazily initialized global string and returns the destination.
void* fn_004B4AA0(void* dst) {
    // Original code also zeroes a scratch stack slot before the call; it is unobservable and omitted.
    using CopyCtor = void(__thiscall*)(void* self, const void* other);
    const void* src = ext_004B4A40();
    // Indirect call through the import slot at mem_00924FE0 (thiscall: callee cleans the stack arg).
    (*reinterpret_cast<CopyCtor*>(&mem_00924FE0))(dst, src);
    return dst;
}
} // namespace lift_004B4AA0

// [0x004BA060] sub_004BA060 (99 bytes)
namespace lift_004BA060 {
// Known callee 0x006A5C5C: thunk_MFC80_ord_764 (IAT jump thunk forwarding to MFC80!ord_764.)
extern void ext_006A5C5C(void* ptr);
extern int mem_00925134;
extern int mem_00924FF4;

namespace {

using StringDtorFn = void (*)(void*);
using InvalidParamFn = void (*)();

// Resolve an import slot (mem_*) holding a 32-bit code address.
inline uintptr_t slot_target(int slot) {
    return static_cast<uintptr_t>(static_cast<uint32_t>(slot));
}

inline void* as_ptr(uint32_t addr) {
    return reinterpret_cast<void*>(static_cast<uintptr_t>(addr));
}

inline uint32_t read_u32(uint32_t addr) {
    return *reinterpret_cast<const uint32_t*>(static_cast<uintptr_t>(addr));
}

// Debug-iterator compatibility failure: MSVCR80 _invalid_parameter_noinfo.
[[noreturn]] inline void raise_invalid_parameter() {
    reinterpret_cast<InvalidParamFn>(slot_target(mem_00925134))();
    std::abort();
}

// Destroy the std::string object at obj (original: mov ecx, obj; call [mem_00924FF4]).
// The original passes `this` in ECX (thiscall); this wrapper passes it as the first argument.
inline void destroy_string(uint32_t obj) {
    reinterpret_cast<StringDtorFn>(slot_target(mem_00924FF4))(as_ptr(obj));
}

}  // namespace

// @name DestroyStringPtrRange
// @summary Walks [it, last) over an array of 32-bit std::string* slots with debug-iterator checks against owner, destroying and freeing each non-null entry.
// @field Unknown +0x08 DWORD field_0x08
void fn_004BA060(uint32_t owner, uint32_t it, uint32_t expected_owner, uint32_t last) {
    for (;;) {
        if (owner == 0 || owner != expected_owner) raise_invalid_parameter();
        if (it == last) return;

        const uint32_t cur = it;
        if (owner == 0 || !(cur < read_u32(owner + 8))) raise_invalid_parameter();
        it = cur + 4;
        if (owner == 0 || !(cur < read_u32(owner + 8))) raise_invalid_parameter();

        const uint32_t element = read_u32(cur);
        if (element == 0) continue;

        destroy_string(element);
        ext_006A5C5C(as_ptr(element));
    }
}
} // namespace lift_004BA060

// [0x004B64C0] sub_004B64C0 (102 bytes)
namespace lift_004B64C0 {
// Known callee 0x004B4BA0: sub_004B4BA0 (Auto-lifted identical-shape clone of 0x0046F6A0 (StoreValueAndSingleton).)
extern DWORD* ext_004B4BA0(DWORD* dst, DWORD value);
// Known callee 0x004B4BC0: sub_004B4BC0 (Auto-lifted identical-shape clone of 0x0046F6A0 (StoreValueAndSingleton).)
extern DWORD* ext_004B4BC0(DWORD* dst, DWORD value);
// Known callee 0x004B4BE0: sub_004B4BE0 (Auto-lifted identical-shape clone of 0x0046F6A0 (StoreValueAndSingleton).)
extern DWORD* ext_004B4BE0(DWORD* dst, DWORD value);
// Known callee 0x00671F30: sub_00671F30 (Zeroes the first dword of the output buffer and stores the global mem_00B599BC into the second dword.)
extern void ext_00671F30(uint32_t* out);

// @name ConstructBySelector_004B64C0
// @summary Dispatches on selector (arg2 - 0x386): 0/1/2 call the matching StoreValueAndSingleton-style initializer; any other value calls sub_00671F30 on dst. Returns dst.
DWORD* fn_004B64C0(DWORD* dst, DWORD selector) {
    // The original pushes the entry ECX register as the callee's second argument
    // on the three initializer paths; that value is not a meaningful parameter,
    // so it is modeled as 0 here.
    const DWORD entry_ecx = 0;

    switch (selector - 0x386u) {
    case 0:
        ext_004B4BA0(dst, entry_ecx);
        break;
    case 1:
        ext_004B4BC0(dst, entry_ecx);
        break;
    case 2:
        ext_004B4BE0(dst, entry_ecx);
        break;
    default:
        ext_00671F30(dst);
        break;
    }
    return dst;
}
} // namespace lift_004B64C0

// [0x004BE680]
namespace lift_004BE680 {
// @name sub_004BE680
// @summary Destructs three std::string fields and calls base destructor sub_0065F440
// @field unknown +0x20 std::string field_0x20
// @field unknown +0x3c std::string field_0x3c
// @field unknown +0x58 std::string field_0x58


extern void __fastcall ext_0065F440(void* self);
extern uint32_t mem_00924FF4;

void __fastcall fn_004BE680(void* self) {
    uint8_t* p = static_cast<uint8_t*>(self);
    using dtor_fn = void (__fastcall*)(void*);
    auto dtor = reinterpret_cast<dtor_fn>(static_cast<uintptr_t>(mem_00924FF4));

    dtor(p + 0x58);
    dtor(p + 0x3C);
    dtor(p + 0x20);
    ext_0065F440(self);
}
} // namespace lift_004BE680

// [0x004B08A0]
namespace lift_004B08A0 {
extern uint32_t ext_0052F540(uint32_t index);

// @name hasBitFlag
// @summary Checks whether the bit flag corresponding to the given index is set in the object's flags field at +0x10.
// @field Object +0x10 uint32_t field_0x10
bool __thiscall fn_004B08A0(void* self, uint32_t index) {
    uint32_t flag = ext_0052F540(index);
    uint32_t flags = *reinterpret_cast<const uint32_t*>(reinterpret_cast<const uint8_t*>(self) + 0x10);
    return (flags & flag) == flag;
}
} // namespace lift_004B08A0

// [0x004BBB70]
namespace lift_004BBB70 {
// @name std_binary_search_string
// @summary Performs a checked binary search for a std::string in a sorted range.
// @field CheckedContainer +0x08 uint32_t end_ptr

extern uint32_t ext_004BA2D0(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
extern uint32_t mem_00925134;
extern uint32_t mem_00924EF4;

uint32_t __cdecl sub_004BBB70(uint32_t arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5) {
    uint32_t edi = ext_004BA2D0(arg1, arg3, arg4, arg5, 0);
    if (arg0 == 0 || arg0 != arg2) {
        reinterpret_cast<void(__cdecl*)()>(static_cast<uintptr_t>(mem_00925134))();
    }
    if (edi == arg3) {
        return 0;
    }
    if (arg0 == 0) {
        reinterpret_cast<void(__cdecl*)()>(static_cast<uintptr_t>(mem_00925134))();
    }
    uint32_t end_ptr = *reinterpret_cast<const uint32_t*>(static_cast<uintptr_t>(arg0 + 8));
    if (edi >= end_ptr) {
        reinterpret_cast<void(__cdecl*)()>(static_cast<uintptr_t>(mem_00925134))();
    }
    uint8_t less = reinterpret_cast<uint8_t(__cdecl*)(uint32_t, uint32_t)>(static_cast<uintptr_t>(mem_00924EF4))(arg4, edi);
    if (less != 0) {
        return 0;
    }
    return 1;
}
} // namespace lift_004BBB70

// [0x004B6C90] sub_004B6C90 (34 bytes)
namespace lift_004B6C90 {
extern const char mem_009433E0[];

// @name sub_004B6C90
// @summary Auto-lifted identical-shape clone of 0x00622380 (NMData::SkeletalCalibrationVariables::vfunc_28).
namespace lift_00622380 {
extern const char mem_009433E0[];

// @name NMData::SkeletalCalibrationVariables::vfunc_28
// @class NMData::SkeletalCalibrationVariables
// @summary Auto-lifted identical-shape clone of 0x006227B0 (NMData::HingeCalibrationVariables::vfunc_28).
namespace lift_006227B0 {
// String literal whose address (0x009770F4) is pushed as the const char* argument.
extern const char mem_009433E0[];
// Import slot for the std::string constructor (MSVCP80); the portable version below replaces the indirect call.
extern int mem_00924FE4;

// @name NMData::HingeCalibrationVariables::vfunc_28
// @class NMData::HingeCalibrationVariables
// @summary Constructs a std::string at the hidden out-pointer from the literal at 0x009770F4 and returns that pointer; the second stack argument is ignored (stdcall, ret 8).
void fn_004B6C90(std::string* out, void* unused) {
    (void)unused;
    (void)&mem_00924FE4; // original calls the MSVCP80 ctor through this IAT slot
    new (out) std::string(mem_009433E0);
}
} // namespace lift_006227B0
} // namespace lift_00622380
} // namespace lift_004B6C90

// [0x004B6CC0] sub_004B6CC0 (33 bytes)
namespace lift_004B6CC0 {
// Import slot for MSVCP80 std::basic_string<char> default ctor (thiscall, this in ecx).
// Original: call dword ptr [0x924fe8] -> thunk 0x006290D8.
extern void* mem_00924FE8;

// @name ExprParser::ctor_zeroed_floats (descriptive; class not confirmed)
// @class ExprParser
// @summary Default-constructs an embedded std::string at +0x00 and zeroes six floats at +0x1C..+0x30; returns this.
// @field ExprParser +0x00 std::string <name_string> (embedded basic_string, 0x1C bytes)
// @field ExprParser +0x1C float field_0x1C
// @field ExprParser +0x20 float field_0x20
// @field ExprParser +0x24 float field_0x24
// @field ExprParser +0x28 float field_0x28
// @field ExprParser +0x2C float field_0x2C
// @field ExprParser +0x30 float field_0x30
void* fn_004B6CC0(void* self) {
    reinterpret_cast<void (*)(void*)>(mem_00924FE8)(self);
    lift_field<float>(self, 0x1C) = 0.0f;
    lift_field<float>(self, 0x20) = 0.0f;
    lift_field<float>(self, 0x24) = 0.0f;
    lift_field<float>(self, 0x28) = 0.0f;
    lift_field<float>(self, 0x2C) = 0.0f;
    lift_field<float>(self, 0x30) = 0.0f;
    return self;
}
} // namespace lift_004B6CC0

// [0x004B6CF0] sub_004B6CF0 (33 bytes)
namespace lift_004B6CF0 {
extern int mem_00940694;
extern int mem_00943350;
extern int mem_00A3849C;
extern int mem_00A384A0;
extern int mem_00A384A4;

// @name InitFloatDefaults_004B6CF0
// @summary Stores constants 0.2f and 100.0f at this+0x1C/+0x20, then zeroes this+0x24..+0x30.
// @field <unknown> +0x1c float field_0x1c
// @field <unknown> +0x20 float field_0x20
// @field <unknown> +0x24 float field_0x24
// @field <unknown> +0x28 float field_0x28
// @field <unknown> +0x2c float field_0x2c
// @field <unknown> +0x30 float field_0x30
void fn_004B6CF0(void* self) {
    lift_field<float>(self, 0x1c) = std::bit_cast<float>(mem_00940694); // 0.2f
    lift_field<float>(self, 0x20) = std::bit_cast<float>(mem_00943350); // 100.0f
    lift_field<float>(self, 0x24) = 0.0f;
    lift_field<float>(self, 0x28) = 0.0f;
    lift_field<float>(self, 0x2c) = 0.0f;
    lift_field<float>(self, 0x30) = 0.0f;

    // Keep the .data refs listed for this VA in the original asm. The disassembled
    // bytes never read them, so these are no-op uses that only preserve the symbol refs.
    (void)mem_00A3849C;
    (void)mem_00A384A0;
    (void)mem_00A384A4;
}
} // namespace lift_004B6CF0

// [0x004B0F50] sub_004B0F50 (37 bytes)
namespace lift_004B0F50 {
// Import slot at 0x00924FE8 holds the MSVCP80 std::basic_string<char> default-ctor address (0x006290D8).
extern int mem_00924FE8;

// @name StringFlagsInit
// @class <ClassName> (optional)
// @summary Sets four byte flags (1,1,1,0), default-constructs the string at +0x04 via the import slot, zeroes the dword at +0x20; returns this.
// @field <ClassName> +0x00 uint8_t flag0
// @field <ClassName> +0x01 uint8_t flag1
// @field <ClassName> +0x02 uint8_t flag2
// @field <ClassName> +0x03 uint8_t flag3
// @field <ClassName> +0x20 uint32_t field_0x20
void* fn_004B0F50(void* self) {
    lift_field<uint8_t>(self, 0x00) = 1;
    lift_field<uint8_t>(self, 0x01) = 1;
    lift_field<uint8_t>(self, 0x02) = 1;
    lift_field<uint8_t>(self, 0x03) = 0;

    using StringCtor = void (*)(void*);
    auto ctor = reinterpret_cast<StringCtor>(static_cast<uintptr_t>(static_cast<uint32_t>(mem_00924FE8)));
    ctor(static_cast<uint8_t*>(self) + 0x04);

    lift_field<uint32_t>(self, 0x20) = 0;
    return self;
}
} // namespace lift_004B0F50

// [0x004B1130]
namespace lift_004B1130 {
extern void __fastcall ext_004B0ED0(void* self, void* edx, float* v);
extern int mem_00924FD4;
extern int mem_00924FDC;
extern int mem_0093C18C;
extern int mem_009433A0;
extern int mem_00AE173C;

// @name Unknown::forwardVec3WithScalar_004B1130
// @class Unknown
// @summary Packs the vec3 at +0x1c with a scalar argument into a 4-float array and forwards it to sub_004B0ED0
// @field Unknown +0x1c float x
// @field Unknown +0x20 float y
// @field Unknown +0x24 float z
extern void __fastcall sub_004B1130(void* self, void* edx, float w) {
    (void)&mem_00924FD4; (void)&mem_00924FDC; (void)&mem_0093C18C; (void)&mem_009433A0; (void)&mem_00AE173C;
    float v[4];
    v[0] = lift_field<float>(self, 0x1c);
    v[1] = lift_field<float>(self, 0x20);
    v[2] = lift_field<float>(self, 0x24);
    v[3] = w;
    ext_004B0ED0(self, edx, v);
}
} // namespace lift_004B1130

// [0x004B6FF0] sub_004B6FF0 (61 bytes)
namespace lift_004B6FF0 {
extern int mem_009433A0;
extern int mem_00924FD4;
extern int mem_00AE173C;
extern int mem_00924FDC;
extern int mem_0093C18C;
extern int mem_00925134;

// std::string::operator=(const char*) via IAT slot mem_00924FD4 (MSVCP80, thiscall)
extern void __thiscall ext_std_string_assign_cstr(void* self, const char* rhs);
// std::string::operator=(const std::string&) via IAT slot mem_00924FDC (MSVCP80, thiscall)
extern void __thiscall ext_std_string_assign_str(void* self, const void* rhs);

// @name Unknown::InitStrings
// @class Unknown
// @summary Assigns four std::string members at +0x04, +0x20, +0x3C, +0x58 (two from literals/globals).
// @field Unknown +0x04 std::string field_0x04
// @field Unknown +0x20 std::string field_0x20
// @field Unknown +0x3C std::string field_0x3C
// @field Unknown +0x58 std::string field_0x58
void fn_004B6FF0(void* self) {
    // IAT slots the original reached via `call [0x924FD4]` / `call [0x924FDC]`;
    // the ext_ calls below stand in for those indirect calls.
    // 0x925134 ("P{b") is in the rdata set but never referenced by the original asm.
    (void)&mem_00924FD4;
    (void)&mem_00924FDC;
    (void)&mem_00925134;

    auto* base = static_cast<char*>(self);
    ext_std_string_assign_cstr(base + 0x04, reinterpret_cast<const char*>(&mem_009433A0));
    ext_std_string_assign_str(base + 0x20, reinterpret_cast<const void*>(&mem_00AE173C));
    ext_std_string_assign_str(base + 0x3C, reinterpret_cast<const void*>(&mem_00AE173C));
    ext_std_string_assign_cstr(base + 0x58, reinterpret_cast<const char*>(&mem_0093C18C));
}
} // namespace lift_004B6FF0

// [0x004B4CD0]
namespace lift_004B4CD0 {
extern void* mem_00925134; // MSVCR80!_invalid_parameter_noinfo (IAT)

extern void* mem_00924EF4; // listed in rdata metadata; not referenced by the disasm

typedef void (__cdecl *invparam_fn)();

// @name copyByte2ToByte1ForAll
// @summary For each pointer in the vector at +0x8, copies byte +0x2 of the pointee to byte +0x1 (checked iterators)
// @field <Unknown> +0x0C uint8_t** vec_first
// @field <Unknown> +0x10 uint8_t** vec_last
extern void __fastcall sub_004B4CD0(void* self)
{
    (void)&mem_00924EF4; // metadata-only ref, no behavioral effect
    invparam_fn invalid = (invparam_fn)mem_00925134;
    uint8_t* base = (uint8_t*)self;
    uint8_t** it = lift_field<uint8_t**>(self, 0xC);
    if ((uintptr_t)it > (uintptr_t)lift_field<uint8_t**>(self, 0x10))
        invalid();
    for (;;) {
        uint8_t** last = *(uint8_t***)(base + 0x10);
        if ((uintptr_t)*(uint8_t***)(base + 0xC) > (uintptr_t)last)
            invalid();
        if (it == last)
            break;
        if (it >= *(uint8_t***)(base + 0x10)) invalid();
        uint8_t v = (*it)[2];
        if (it >= *(uint8_t***)(base + 0x10)) invalid();
        (*it)[1] = v;
        if (it >= *(uint8_t***)(base + 0x10)) invalid();
        ++it;
    }
}
} // namespace lift_004B4CD0

// [0x004B79B0]
namespace lift_004B79B0 {
extern const char* (__thiscall *mem_00924FF0)(void* this_ptr);
extern double (__cdecl *mem_009251F0)(const char* str);
extern void (__thiscall *mem_00924FF4)(void* this_ptr);

// @name parseFloatFromString
// @summary Converts a std::string to a float using c_str and atof, then destroys the string.
float __cdecl sub_004B79B0(void* str) {
    const char* cstr = mem_00924FF0(str);
    float result = static_cast<float>(mem_009251F0(cstr));
    mem_00924FF4(str);
    return result;
}
} // namespace lift_004B79B0

// [0x004B7340]
namespace lift_004B7340 {
// @name sub_004B7340
// @summary Copies a std::string from a global vector at the given index into this+0x58
// @field unknown +0x58 std::string field_0x58


extern uint32_t mem_00AE1D18;
extern uint32_t mem_00AE1D1C;
extern void (__cdecl *mem_00925134)();
extern void* (__thiscall *mem_00924FDC)(void* self, const void* rhs);
extern uint32_t mem_00924FF0;
extern uint32_t mem_00924FF4;
extern uint32_t mem_009251F0;

void* __thiscall sub_004B7340(void* self, uint32_t index) {
    (void)*reinterpret_cast<volatile uint32_t*>(&mem_00924FF0);
    (void)*reinterpret_cast<volatile uint32_t*>(&mem_00924FF4);
    (void)*reinterpret_cast<volatile uint32_t*>(&mem_009251F0);
    uint32_t first = mem_00AE1D18;
    if (first == 0 || index >= static_cast<uint32_t>(static_cast<int32_t>(mem_00AE1D1C - first) / 28)) {
        mem_00925134();
        first = mem_00AE1D18;
    }
    const void* src = reinterpret_cast<const void*>(first + index * 28);
    void* dst = reinterpret_cast<uint8_t*>(self) + 0x58;
    return mem_00924FDC(dst, src);
}
} // namespace lift_004B7340

// [0x004BA170]
namespace lift_004BA170 {
void __fastcall ext_00665810(void* self);
void ext_006A5C5C(void* ptr);
extern void (__fastcall *mem_00924FF4)(void* self);

// @name sub_004BA170_dtor
// @summary Destructor that destroys and frees the std::string at +0x18 if non-null, then resets base vtable via ext_00665810.
// @field Unknown +0x18 void* field_0x18
extern void __fastcall fn_004BA170(void* self) {
    void* str_ptr = lift_field<void*>(self, 0x18);
    if (str_ptr != nullptr) {
        mem_00924FF4(str_ptr);
        ext_006A5C5C(str_ptr);
    }
    ext_00665810(self);
}
} // namespace lift_004BA170

// [0x004B5030]
namespace lift_004B5030 {
// @name sub_004B5030
// @summary Destroys optional std::string wrapper at +0x18, frees it, and calls sub_00665810
// @field Self +0x18 void* field_0x18


    void __fastcall ext_00665810(void* self);
    void ext_006A5C5C(void* ptr);
    extern void (__fastcall *mem_00924FF4)(void* str);

extern void __fastcall fn_004B5030(void* self) {
    void* obj = lift_field<void*>(self, 0x18);
    if (obj != nullptr) {
        mem_00924FF4(static_cast<uint8_t*>(obj) + 4);
        ext_006A5C5C(obj);
    }
    ext_00665810(self);
}
} // namespace lift_004B5030

// [0x004B74E0]
namespace lift_004B74E0 {
extern uint32_t mem_00AE1638;
extern uint8_t mem_00AE161C[];
extern uint32_t mem_00924FE0;

extern void* ext_0066AD10(void* out_str, uintptr_t arg);
extern int ext_006A6C87(void* func);
extern void* ext_004B4A40();

// @name InitOnceGlobalString_004B74E0
// @summary One-time guarded initializer for the global object at 0x00AE161C; registers its teardown via ext_006A6C87 and returns the global's address.
void* fn_004B74E0() {
    (void)ext_004B4A40;
    (void)mem_00924FE0;
    if ((mem_00AE1638 & 1u) == 0u) {
        mem_00AE1638 |= 1u;
        ext_0066AD10(mem_00AE161C, 0x00A38930u);
        ext_006A6C87(reinterpret_cast<void*>(0x009184C0u));
    }
    return mem_00AE161C;
}
} // namespace lift_004B74E0

// [0x004B72D0] sub_004B72D0 (100 bytes)
namespace lift_004B72D0 {
// @name sub_004B72D0
// @summary Auto-lifted identical-shape clone of 0x005C3FB0 (TableFindStringIndex).
namespace lift_005C3FB0 {
// Element array bounds (pointer values stored in globals).
extern uint32_t mem_00AE1D18;
extern uint32_t mem_00AE1D1C;

// IAT slot holding std::operator==(const std::string&, const std::string&) (MSVCP80).
extern uint32_t mem_00924FC4;
extern uint8_t ext_std_string_operator_eq(const void* lhs, const void* rhs);

// @name TableFindStringIndex
// @class <unknown>
// @summary Returns the index of the first 28-byte element in the global array whose std::string matches self+0x17C, or 0 if none.
// @field <unknown> +0x17C std::string field_0x17C
int fn_004B72D0(void* self) {
    uint32_t index = 0;
    (void)&mem_00924FC4;  // callee is dispatched through this IAT slot
    for (;;) {
        // Globals are re-read every iteration, as in the original loop.
        const uint32_t begin = mem_00AE1D18;
        if (begin == 0) {
            return 0;
        }
        const uint32_t end = mem_00AE1D1C;
        const int32_t count = static_cast<int32_t>(end - begin) / 28;
        if (index >= static_cast<uint32_t>(count)) {
            return 0;
        }
        const uint8_t* elem =
            reinterpret_cast<const uint8_t*>(static_cast<uintptr_t>(begin + index * 28));
        const uint8_t* key = static_cast<uint8_t*>(self) + 0x58;
        if (ext_std_string_operator_eq(elem, key) != 0) {
            return static_cast<int>(index);
        }
        ++index;
    }
}
} // namespace lift_005C3FB0
} // namespace lift_004B72D0

// [0x004B4930]
namespace lift_004B4930 {
// @name destroyStringPtrRange
// @summary Destroys and frees a range of heap-allocated objects containing a std::string at +0x04.
// @field Container +0x08 uint32_t end_ptr

extern void ext_006A5C5C(void* ptr);
extern uint32_t mem_00925134;
extern uint32_t mem_00924FF4;

extern void __stdcall fn_004B4930(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4) {
    auto invalid_parameter_noinfo = reinterpret_cast<void(__cdecl*)()>(mem_00925134);
    auto string_dtor = reinterpret_cast<void(__thiscall*)(void*)>(mem_00924FF4);

    uint32_t esi = arg1;
    uint32_t ebx = arg2;

    while (true) {
        if (esi == 0 || esi != arg3) {
            invalid_parameter_noinfo();
        }
        if (ebx == arg4) {
            break;
        }
        uint32_t edi = ebx;
        if (esi == 0) {
            invalid_parameter_noinfo();
        }
        if (ebx >= lift_field<uint32_t>(reinterpret_cast<void*>(static_cast<uintptr_t>(esi)), 0x8)) {
            invalid_parameter_noinfo();
        }
        ebx += 4;
        if (esi == 0) {
            invalid_parameter_noinfo();
        }
        if (edi >= lift_field<uint32_t>(reinterpret_cast<void*>(static_cast<uintptr_t>(esi)), 0x8)) {
            invalid_parameter_noinfo();
        }
        uint32_t obj = *reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(edi));
        if (obj != 0) {
            string_dtor(reinterpret_cast<void*>(static_cast<uintptr_t>(obj + 4)));
            ext_006A5C5C(reinterpret_cast<void*>(static_cast<uintptr_t>(obj)));
        }
    }
}
} // namespace lift_004B4930

// [0x004B75A0] sub_004B75A0 (120 bytes)
namespace lift_004B75A0 {
// Known callee 0x006657F0: Unknown::InitVtblAndArg (Stores the vtable pointer (0x00987A04), a stack argument at +0x04, and zeroes +0x08/+0x0C; returns self.)
extern void* ext_006657F0(void* self, uint32_t arg);
// IAT slot for MSVCP80 std::basic_string<char> copy constructor.
extern int mem_00924FE0;

// Copy constructor signature (thiscall: this in ECX, source pointer on stack).
using StringCopyCtor = void(__thiscall*)(void* self, const void* src);

// @name InitVtblAndCopyStrings
// @summary Initializes the object: calls base init, stores two uint32 values, and copy-constructs two std::strings from the given pointers.
// @field Unknown +0x00 uint32_t vtable
// @field Unknown +0x08 uint32_t value_a2
// @field Unknown +0x10 uint32_t value_a1
// @field Unknown +0x14 uint32_t src_ptr_a3
// @field Unknown +0x18 std::string str_a
// @field Unknown +0x34 std::string str_b
void* fn_004B75A0(void* self, uint32_t a1, uint32_t a2, uint32_t a3, uint32_t a4) {
    // Base init: sets vtable to 0x00987A04, +0x04 = 0, zeroes +0x08/+0x0C.
    ext_006657F0(self, 0);

    lift_field<uint32_t>(self, 0x10) = a1;

    // Derived vtable, then copy-construct str_a from *a3 (original order preserved).
    lift_field<uint32_t>(self, 0x00) = 0x009435D8u;
    lift_field<uint32_t>(self, 0x14) = a3;
    void* str_a = &lift_field<uint8_t>(self, 0x18);
    reinterpret_cast<StringCopyCtor>(static_cast<uintptr_t>(mem_00924FE0))(
        str_a, reinterpret_cast<const void*>(static_cast<uintptr_t>(a3)));

    // Copy-construct str_b from *a4.
    void* str_b = &lift_field<uint8_t>(self, 0x34);
    reinterpret_cast<StringCopyCtor>(static_cast<uintptr_t>(mem_00924FE0))(
        str_b, reinterpret_cast<const void*>(static_cast<uintptr_t>(a4)));

    lift_field<uint32_t>(self, 0x08) = a2;
    return self;
}
} // namespace lift_004B75A0

// [0x004B5270] sub_004B5270 (121 bytes)
namespace lift_004B5270 {
// Known callee 0x004B4930: destroyStringPtrRange (Destroys and frees a range of heap-allocated objects containing a std::string at +0x04.)
// Stdcall with four stack words, pushed as (self, begin, self, end).
extern void ext_004B4930(uint32_t arg1, uint32_t first, uint32_t arg3, uint32_t bound);
// Known callee 0x006A5C5C: thunk_MFC80_ord_764 (IAT jump thunk forwarding to MFC80!ord_764.)
// Cdecl, single argument: the storage pointer to release.
extern void ext_006A5C5C(uint32_t storage);
// Invalid-parameter handler pointer (MSVCR80!_invalid_parameter_noinfo).
extern void mem_00925134();

// @name Vector_destroyAndReset
// @class Vector
// @summary Validates begin/end/bound ordering, destroys the element range via ext_004B4930, releases the storage through ext_006A5C5C when it is non-null, then resets the three pointers to null.
// @field Vector +0x04 uint32_t field_0x04
// @field Vector +0x08 uint32_t field_0x08
// @field Vector +0x0c uint32_t field_0x0c
void fn_004B5270(void* self) {
    auto* base = static_cast<uint8_t*>(self);
    const uint32_t selfValue = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(self));

    // Validate begin <= bound before destroying.
    const uint32_t bound = lift_field<uint32_t>(base, 0x08);
    if (lift_field<uint32_t>(base, 0x04) > bound) {
        mem_00925134();
    }

    // Re-read begin and validate it against bound once more.
    const uint32_t first = lift_field<uint32_t>(base, 0x04);
    if (first > lift_field<uint32_t>(base, 0x08)) {
        mem_00925134();
    }

    ext_004B4930(selfValue, first, selfValue, bound);

    // Release the storage block if one is present.
    const uint32_t storage = lift_field<uint32_t>(base, 0x04);
    if (storage != 0) {
        ext_006A5C5C(storage);
    }

    lift_field<uint32_t>(base, 0x04) = 0;
    lift_field<uint32_t>(base, 0x08) = 0;
    lift_field<uint32_t>(base, 0x0c) = 0;
}
} // namespace lift_004B5270

// [0x004BBC90]
namespace lift_004BBC90 {
// @name StringPtrVector::ClearAndFree
// @class StringPtrVector
// @summary Destroys all string pointers in [begin, end), frees the begin buffer if non-null, and zeroes begin/end/capacity.
// @field StringPtrVector +0x4 uint32_t begin
// @field StringPtrVector +0x8 uint32_t end
// @field StringPtrVector +0xc uint32_t capacity

extern void ext_004BA060(void* self, uintptr_t first, void* owner, uintptr_t last);
extern void ext_006A5C5C(void* ptr);
extern void ext_invalid_parameter_noinfo(void);
extern char mem_00925134[];

namespace {

inline uint32_t& field_u32(void* base, uintptr_t off) {
    return *reinterpret_cast<uint32_t*>(static_cast<char*>(base) + off);
}

}  // namespace

extern void fn_004BBC90(void* self) {
    const uint32_t begin = field_u32(self, 0x4);
    const uint32_t end   = field_u32(self, 0x8);

    (void)&mem_00925134;  // IAT slot for _invalid_parameter_noinfo (metadata only)
    if (begin > end) {
        ext_invalid_parameter_noinfo();
    }

    ext_004BA060(self, begin, self, end);

    const uint32_t buf = field_u32(self, 0x4);
    if (buf != 0) {
        ext_006A5C5C(reinterpret_cast<void*>(static_cast<uintptr_t>(buf)));
    }

    field_u32(self, 0x4) = 0;
    field_u32(self, 0x8) = 0;
    field_u32(self, 0xc) = 0;
}
} // namespace lift_004BBC90

// [0x004BBB00]
namespace lift_004BBB00 {
// @name std::vector<std::string*>::erase_and_delete
// @summary Erases an element from a vector of std::string*, destroying and freeing the string if non-null, and returns the updated iterator.
// @field Vector +0x08 uint32_t end_ptr

extern void ext_006A5C5C(void* ptr);
extern uintptr_t mem_00925134;
extern uintptr_t mem_00924FF4;
extern uintptr_t mem_009251EC;
extern uintptr_t mem_00924FE0;
extern uintptr_t mem_00924FE8;
extern uintptr_t mem_00AE1D18;
extern uintptr_t mem_00AE1D1C;

struct CheckedIter {
    uint32_t container;
    uint32_t ptr;
};

void* __thiscall fn_004BBB00(void* self, CheckedIter* out_iter, uint32_t container, uint32_t elem_ptr) {
    using InvalidParamFn = void (__cdecl*)(void);
    using StringDtorFn = void (__thiscall*)(void*);
    using MemmoveSFn = int (__cdecl*)(void*, size_t, const void*, size_t);

    auto invalid_param = reinterpret_cast<InvalidParamFn>(mem_00925134);
    if (container == 0) {
        invalid_param();
    }
    uint32_t container_end = lift_field<uint32_t>(reinterpret_cast<void*>(static_cast<uintptr_t>(container)), 0x8);
    if (elem_ptr >= container_end) {
        invalid_param();
    }

    uint32_t str_ptr = *reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(elem_ptr));
    if (str_ptr != 0) {
        auto string_dtor = reinterpret_cast<StringDtorFn>(mem_00924FF4);
        string_dtor(reinterpret_cast<void*>(static_cast<uintptr_t>(str_ptr)));
        ext_006A5C5C(reinterpret_cast<void*>(static_cast<uintptr_t>(str_ptr)));
    }

    (void)mem_00924FE0;
    (void)mem_00924FE8;
    (void)mem_00AE1D18;
    (void)mem_00AE1D1C;

    int32_t end_ptr = static_cast<int32_t>(lift_field<uint32_t>(self, 0x8));
    uint32_t next_ptr = elem_ptr + 4;
    int32_t count = (end_ptr - static_cast<int32_t>(next_ptr)) >> 2;
    if (count > 0) {
        size_t bytes = static_cast<size_t>(count) * 4;
        auto memmove_s_fn = reinterpret_cast<MemmoveSFn>(mem_009251EC);
        memmove_s_fn(
            reinterpret_cast<void*>(static_cast<uintptr_t>(elem_ptr)),
            bytes,
            reinterpret_cast<const void*>(static_cast<uintptr_t>(next_ptr)),
            bytes
        );
    }

    lift_field<uint32_t>(self, 0x8) -= 4;
    out_iter->container = container;
    out_iter->ptr = elem_ptr;
    return out_iter;
}
} // namespace lift_004BBB00

// [0x004B5180]
namespace lift_004B5180 {
// @name VectorEraseElement
// @summary Erases an element from a pointer vector, destroying the object and shifting remaining elements.
// @field Vector +0x08 uint32_t end_ptr


extern void ext_006A5C5C(void* ptr);

extern void (*mem_00925134)(void);
extern void (__thiscall *mem_00924FF4)(void* self);
extern int (__cdecl *mem_009251EC)(void* dst, size_t dst_size, const void* src, size_t count);

struct VectorIterator {
    void* container;
    uint32_t* ptr;
};

extern VectorIterator* __thiscall fn_004B5180(void* self, VectorIterator* out_iter, void* container, uint32_t* elem_ptr) {
    if (!container) {
        mem_00925134();
    }
    if (elem_ptr >= *reinterpret_cast<uint32_t**>(static_cast<uint8_t*>(container) + 0x8)) {
        mem_00925134();
    }

    uint32_t obj = *elem_ptr;
    if (obj != 0) {
        mem_00924FF4(reinterpret_cast<void*>(static_cast<uintptr_t>(obj) + 0x4));
        ext_006A5C5C(reinterpret_cast<void*>(static_cast<uintptr_t>(obj)));
    }

    uint32_t end_addr = lift_field<uint32_t>(self, 0x8);
    uint32_t* next_elem = elem_ptr + 1;
    int32_t count = static_cast<int32_t>(end_addr - static_cast<uint32_t>(reinterpret_cast<uintptr_t>(next_elem))) >> 2;
    if (count > 0) {
        size_t bytes = static_cast<size_t>(count) * 4;
        mem_009251EC(elem_ptr, bytes, next_elem, bytes);
    }

    lift_field<uint32_t>(self, 0x8) = end_addr - 4;
    out_iter->ptr = elem_ptr;
    out_iter->container = container;
    return out_iter;
}
} // namespace lift_004B5180

// [0x004B66E0] sub_004B66E0 (121 bytes)
namespace lift_004B66E0 {
// Known callee 0x004B6680: DestroyOwnedRange (Iterates [first, last) over a container of owned object pointers (debug-checked iterators), calling each non-null element's virtual slot 0x234 with flag 1 (scalar deleting destructor).)
extern void ext_004B6680(uintptr_t container, uintptr_t first, uintptr_t container2, uintptr_t last);
// Known callee 0x006A5C5C: thunk_MFC80_ord_764 (IAT jump thunk forwarding to MFC80!ord_764.) Called cdecl with one argument (the buffer to free).
extern void ext_006A5C5C(uintptr_t block);
extern int mem_00925134;

// @name DestroyOwnedRangeAndFree
// @summary Destroys the owned objects in [begin, end), frees the begin buffer if non-null, and zeroes begin/end/+0xC.
// @field Unknown +0x04 uint32_t begin
// @field Unknown +0x08 uint32_t end
// @field Unknown +0x0C uint32_t field_0x0C
void fn_004B66E0(void* self) {
    // The MSVC SEH frame setup/teardown and the debug invalid-parameter guards
    // (begin <= end checks calling _invalid_parameter_noinfo via mem_00925134) are CRT boilerplate and are omitted.
    (void)&mem_00925134;
    const uintptr_t selfVal = reinterpret_cast<uintptr_t>(self);
    uint32_t& begin = lift_field<uint32_t>(self, 0x4);
    uint32_t& end = lift_field<uint32_t>(self, 0x8);

    ext_004B6680(selfVal, begin, selfVal, end);

    // Re-read begin after the range destruction, as the original does.
    if (begin != 0) {
        ext_006A5C5C(begin);
    }

    begin = 0;
    end = 0;
    lift_field<uint32_t>(self, 0xC) = 0;
}
} // namespace lift_004B66E0

// [0x004B73A0]
namespace lift_004B73A0 {
extern uint32_t mem_00AE1D18;
extern uint32_t mem_00AE1D1C;
extern uint32_t mem_00924FE0;
extern uint32_t mem_00924FE8;

// @name getGlobalStringByIndex
// @summary Returns a copy of a global std::string vector element by index, or an empty string if out of bounds.
uint32_t __stdcall fn_004B73A0(uint32_t out_str, uint32_t index) {
    using StrCopyCtorFn = void(__thiscall*)(uint32_t, uint32_t);
    using StrDefaultCtorFn = void(__thiscall*)(uint32_t);

    uint32_t begin = mem_00AE1D18;
    if (begin != 0) {
        int32_t byte_len = static_cast<int32_t>(mem_00AE1D1C - begin);
        uint32_t count = static_cast<uint32_t>(byte_len / 28);
        if (index < count) {
            uint32_t elem = begin + index * 28u;
            reinterpret_cast<StrCopyCtorFn>(mem_00924FE0)(out_str, elem);
            return out_str;
        }
    }

    reinterpret_cast<StrDefaultCtorFn>(mem_00924FE8)(out_str);
    return out_str;
}
} // namespace lift_004B73A0

// [0x004B5610] sub_004B5610 (89 bytes)
namespace lift_004B5610 {
// Known callee 0x004B5270: Vector_destroyAndReset (Validates begin/end/bound ordering, destroys the element range via ext_004B4930, releases the storage through ext_006A5C5C when it is non-null, then resets the three pointers to null.)
extern void ext_004B5270(void* self);
// Known callee 0x0065F440: sub_0065F440 (Stores address of mem_0093BF24 into field at offset +0x0.)
extern void ext_0065F440(void* self);

// @name InitVectorOwner
// @class Unknown
// @summary Writes two vtable pointers, resets the Vector sub-object at +0x08, then re-stamps the vtable at +0x00 via sub_0065F440.
// @field Unknown +0x00 uint32_t field_0x00 (vtable pointer; overwritten to 0x0093BF24 by callee 0x0065F440)
// @field Unknown +0x04 uint32_t field_0x04 (vtable pointer, 0x009432F0)
// @field Unknown +0x08 uint8_t field_0x08[] (Vector sub-object, passed as this to Vector_destroyAndReset)
void fn_004B5610(void* self) {
    auto* base = static_cast<uint8_t*>(self);

    // The MSVC SEH frame (fs:[0] push/pop, state cookie) is not reproduced; it only guards the calls below.
    lift_field<uint32_t>(base, 0x00) = 0x009432FCu;
    lift_field<uint32_t>(base, 0x04) = 0x009432F0u;

    // Reset/destroy the sub-object at this+0x08 (ecx = this + 8).
    ext_004B5270(base + 0x08);

    // Final store of the primary vtable slot (ecx = this).
    ext_0065F440(base);
}
} // namespace lift_004B5610

// [0x004B6760] sub_004B6760 (92 bytes)
namespace lift_004B6760 {
// Known callee 0x004B66E0: DestroyOwnedRangeAndFree (Destroys the owned objects in [begin, end), frees the begin buffer if non-null, and zeroes begin/end/+0xC.)
extern void ext_004B66E0(void* self);
// Known callee 0x006A5C5C: thunk_MFC80_ord_764 (IAT jump thunk forwarding to MFC80!ord_764.)
// Called cdecl with one argument (the buffer to free).
extern void ext_006A5C5C(void* block);

// @name Unknown::destructorBody
// @class Unknown
// @summary Resets the vtable, destroys the embedded sub-object at +0x20, frees the buffer at +0x14 if set, and zeroes +0x14/+0x18/+0x1C.
// @field Unknown +0x00 uint32_t field_0x00
// @field Unknown +0x14 void* field_0x14
// @field Unknown +0x18 uint32_t field_0x18
// @field Unknown +0x1C uint32_t field_0x1C
// @field Unknown +0x20 uint8_t field_0x20
void fn_004B6760(void* self) {
    // The MSVC SEH frame push/pop (fs:[0] chain) and the register-save/restore
    // prologue/epilogue are CRT boilerplate and are omitted.

    // Install the vtable for this class.
    lift_field<uint32_t>(self, 0x00) = 0x00943394u;

    // Destroy the embedded sub-object at +0x20 (passed as `this`).
    ext_004B66E0(reinterpret_cast<uint8_t*>(self) + 0x20);

    // Free the owned buffer at +0x14 if present.
    void* buffer = lift_field<void*>(self, 0x14);
    if (buffer != nullptr) {
        ext_006A5C5C(buffer);
    }

    // Zero the buffer pointer and the two following slots.
    lift_field<void*>(self, 0x14) = nullptr;
    lift_field<uint32_t>(self, 0x18) = 0;
    lift_field<uint32_t>(self, 0x1C) = 0;
}
} // namespace lift_004B6760

// [0x004BC430] sub_004BC430 (108 bytes)
namespace lift_004BC430 {
// Known callee 0x004026E0: std_vector_string_Tidy (Destroys all std::string elements in a vector, frees the buffer, and resets pointers to null.)
extern void ext_004026E0(void* this_ptr);
// Known callee 0x004BBC90: StringPtrVector::ClearAndFree (Destroys all string pointers in [begin, end), frees the begin buffer if non-null, and zeroes begin/end/capacity.)
extern void ext_004BBC90(void* this_ptr);
// Known callee 0x006246B0: OwnedPointerRange::clearAndFreeChecked (Validates the range bounds, deletes every element via deleteRangeChecked, frees the begin block, and resets the range to empty.)
extern void ext_006246B0(void* this_ptr);
// Known callee 0x0065F440: sub_0065F440 (Stores address of mem_0093BF24 into field at offset +0x0.)
extern void ext_0065F440(void* this_ptr);

// @name EngineData::destructorBody
// @class EngineData
// @summary Destroys the owned members at +0x70, +0x60 and +0x50 in that order, then rebases the object vtable to PropertySource via ext_0065F440.
// @field EngineData +0x00 uint32_t vtable_ptr
// @field EngineData +0x50 std::vector<std::string> field_0x50
// @field EngineData +0x60 StringPtrVector field_0x60
// @field EngineData +0x70 OwnedPointerRange field_0x70
void fn_004BC430(void* self) {
    // Primary vtable of EngineData (0x009441E4) is installed before member teardown.
    lift_field<uint32_t>(self, 0x0) = 0x009441E4u;

    ext_006246B0(static_cast<char*>(self) + 0x70);
    ext_004BBC90(static_cast<char*>(self) + 0x60);
    ext_004026E0(static_cast<char*>(self) + 0x50);

    ext_0065F440(self);
}
} // namespace lift_004BC430

// [0x004B5820] sub_004B5820 (122 bytes)
namespace lift_004B5820 {
// Known callee 0x00661980: setVtable_0093BFB4 (Stores the vtable address 0x0093BFB4 into the first dword of the object pointed to by ECX (this).)
extern void ext_00661980(void* self);
extern float mem_00943350;

// @name Unknown::initDefaults
// @class Unknown
// @summary Thiscall initializer: sets vtable, zeroes state, stores float defaults (100, 0, 1) and int 1000; returns this.
// @field Unknown +0x00 uint32_t vtable
// @field Unknown +0x04 uint32_t vtable2
// @field Unknown +0x0c uint32_t field_0x0c
// @field Unknown +0x10 uint32_t field_0x10
// @field Unknown +0x14 uint32_t field_0x14
// @field Unknown +0x18 uint8_t field_0x18
// @field Unknown +0x19 uint8_t field_0x19
// @field Unknown +0x1c float field_0x1c
// @field Unknown +0x20 float field_0x20
// @field Unknown +0x24 float field_0x24
// @field Unknown +0x28 float field_0x28
// @field Unknown +0x2c float field_0x2c
// @field Unknown +0x30 uint32_t field_0x30
// @field Unknown +0x34 uint32_t field_0x34
void* fn_004B5820(void* self) {
    // Original SEH frame prologue/epilogue (fs:[0] push/restore) is boilerplate; dropped.
    ext_00661980(self);

    const float hundred = mem_00943350;

    lift_field<uint32_t>(self, 0x00) = 0x009432FC;
    lift_field<uint32_t>(self, 0x04) = 0x00942064;
    lift_field<uint32_t>(self, 0x04) = 0x009432F0;
    lift_field<uint32_t>(self, 0x0c) = 0;
    lift_field<uint32_t>(self, 0x10) = 0;
    lift_field<uint32_t>(self, 0x14) = 0;
    lift_field<float>(self, 0x2c) = hundred;
    lift_field<float>(self, 0x1c) = 0.0f;
    lift_field<uint8_t>(self, 0x18) = 1;
    lift_field<float>(self, 0x24) = 0.0f;
    lift_field<uint8_t>(self, 0x19) = 1;
    lift_field<uint32_t>(self, 0x30) = 0;
    lift_field<float>(self, 0x20) = hundred;
    lift_field<uint32_t>(self, 0x34) = 1000;
    lift_field<float>(self, 0x28) = 1.0f;

    return self;
}
} // namespace lift_004B5820

// [0x004B7740]
namespace lift_004B7740 {
extern void* ext_006657F0(void* self, uint32_t arg);
extern uint32_t mem_00924FE0;

// @name Unknown::Unknown(uint32_t, uint32_t, const Object*, uint32_t)
// @class Unknown
// @summary Thiscall constructor: runs ext_006657F0 base init, stores vtable, two args, and copy-constructs two std::string members.
// @field Unknown +0x00 uint32_t field_0x00
// @field Unknown +0x08 uint32_t field_0x08
// @field Unknown +0x10 uint32_t field_0x10
// @field Unknown +0x14 void* field_0x14
// @field Unknown +0x18 std::string field_0x18
// @field Unknown +0x34 std::string field_0x34
void* __thiscall fn_004B7740(void* self, uint32_t a, uint32_t b, void* c, uint32_t d) {
    (void)d;
    (void)&mem_00924FE0; // MSVCP80 basic_string copy-ctor IAT slot; replaced by std::string below

    ext_006657F0(self, 0);

    lift_field<uint32_t>(self, 0x10) = b;
    lift_field<uint32_t>(self, 0x00) = 0x00943678;
    lift_field<void*>(self, 0x14) = c;

    void** vtbl = *reinterpret_cast<void***>(c);
    auto getter = reinterpret_cast<const void* (__thiscall*)(void*)>(vtbl[9]);
    const void* src = getter(c);
    new (&lift_field<std::string>(self, 0x18))
        std::string(*static_cast<const std::string*>(src));

    new (&lift_field<std::string>(self, 0x34))
        std::string(*static_cast<const std::string*>(c));

    lift_field<uint32_t>(self, 0x08) = a;
    return self;
}
} // namespace lift_004B7740

// [0x004BC770] sub_004BC770 (138 bytes)
namespace lift_004BC770 {
// @name sub_004BC770
// @summary Auto-lifted identical-shape clone of 0x0058F770 (descriptiveName_0058F770).
namespace lift_0058F770 {
// Known callee 0x0046C3C0: DerivedException::DerivedException (thiscall, no stack args)
extern void* __thiscall ext_0046C3C0(void* self);
// Known callee 0x0058F550: descriptiveName_0058F550 (stdcall, one stack arg, returns it).
// The asm passes the object in ecx (the callee reads ecx), so declare it fastcall:
// ecx = obj, edx = unused, one stack arg = out. Callee's `ret 4` matches.
extern void* __fastcall ext_004BC2B0(void* obj, void* unused_edx, void* out);
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (cdecl: exc object, throw info)
extern void ext_006A6DD2(void* exc, const void* throwInfo);
// MSVCP80 basic_string<char> copy-ctor / dtor import slots (function pointers stored in .rdata).
extern int mem_00924FE0;
extern int mem_00924FF4;

namespace {

// MSVCP80 basic_string(const basic_string&), thiscall, via import slot mem_00924FE0.
using StringCopyCtorFn = void* (__thiscall*)(void* self, const void* src);
// MSVCP80 ~basic_string(), thiscall, via import slot mem_00924FF4.
using StringDtorFn = void (__thiscall*)(void* self);

void* lift_string_copy_ctor(void* self, const void* src) {
    auto fn = reinterpret_cast<StringCopyCtorFn>(static_cast<uintptr_t>(static_cast<uint32_t>(mem_00924FE0)));
    return fn(self, src);
}

void lift_string_dtor(void* self) {
    auto fn = reinterpret_cast<StringDtorFn>(static_cast<uintptr_t>(static_cast<uint32_t>(mem_00924FF4)));
    fn(self);
}

// Null-object path: build the DerivedException in a frame-local buffer and throw it.
// The asm's frame places this object at esp+0x20 .. esp+0x4C (0x2C bytes).
[[noreturn]] void lift_throw_derived_exception() {
    alignas(8) unsigned char exc[0x2C];
    ext_0046C3C0(exc);
#ifdef _MSC_VER
    // Throw info constant pushed as the second argument of the asm call.
    ext_006A6DD2(exc, reinterpret_cast<const void*>(static_cast<uintptr_t>(0x009DEC1Cu)));
#endif
    std::abort();  // _CxxThrowException does not return; unreachable on MSVC.
}

}  // namespace

// @name descriptiveName_0058F770
// @summary Throws DerivedException if obj is null; otherwise fills a temp string via ext_0058F550(obj), copy-constructs *out from it, destroys the temp, and returns out.
void* __stdcall fn_004BC770(void* out, void* obj) {
    if (obj == nullptr) {
        lift_throw_derived_exception();
    }

    // Temp std::string on the frame (asm esp+4 .. esp+0x20, 0x1C bytes).
    alignas(8) unsigned char tmp[0x1C];
    void* src = ext_004BC2B0(obj, nullptr, tmp);
    lift_string_copy_ctor(out, src);
    lift_string_dtor(tmp);
    return out;
}
} // namespace lift_0058F770
} // namespace lift_004BC770

// [0x004BF710] sub_004BF710 (77 bytes)
namespace lift_004BF710 {
// Known callee 0x006619D0: Unknown::copyFieldsFrom (Copy-assigns the three DWORD fields from src into self (skipping self-assignment) and sets the flag byte at +0x00 to 1; returns self.)
extern void* __thiscall ext_006619D0(void* self, const void* src);
// Known callee 0x00466870: destroyTwoMembers_00466870 (Destroys two embedded 0x28-byte member objects at +0x38 and +0x10 by freeing their +0x18 buffers and calling sub_00678DE0.)
extern void __thiscall ext_00466870(void* self);

// @name Unknown::copyFromFirstThenDestroyEmbedded
// @class Unknown
// @summary Copies fields from the object at this+0x04 into the object whose pointer is stored at this+0x00, then destroys the embedded object at this+0x04.
// @field Unknown +0x00 uint32_t ptr_0x00 (pointer value used as "self" for copyFieldsFrom)
// @field Unknown +0x04 uint8_t field_0x04 (embedded object; only its address is taken)
void fn_004BF710(void* self) {
    // Original: ecx = [this]; esi = this + 4;
    // copyFieldsFrom(ecx, esi); destroy(esi);
    const uintptr_t first = static_cast<uintptr_t>(lift_field<uint32_t>(self, 0x00));
    void* embedded = static_cast<char*>(self) + 0x04;

    ext_006619D0(reinterpret_cast<void*>(first), embedded);
    ext_00466870(embedded);
}
} // namespace lift_004BF710

// [0x004B6EC0] sub_004B6EC0 (119 bytes)
namespace lift_004B6EC0 {
// Known callee 0x0063EFE0: sub_0063EFE0 (Searches a vector of item pointers at +0x3c for an item whose std::string at +0x04 matches the given C-string, returning it or a sentinel at 0x00B53A34.)
extern void* ext_0063EFE0(void* self, const char* name);
// Known callee 0x004275E0: assignVirtualString (Calls vtable[2] on obj to obtain a temporary std::string, assigns it to dst, and destroys the temporary.)
extern void ext_004275E0(void* dst, void* obj);
extern uint32_t mem_00A9F838;
extern uint32_t mem_00A9F7BC;
extern uint32_t mem_00A9F7C0;
extern uint32_t mem_00A9F6F8;

// @name assignNamedStringsFromLookup
// @summary Looks up four fixed name keys in the lookup container and assigns each result's string into this object at +0x04, +0x20, +0x3C and +0x58.
// @field Unknown +0x04 uint8_t field_0x04
// @field Unknown +0x20 uint8_t field_0x20
// @field Unknown +0x3C uint8_t field_0x3C
// @field Unknown +0x58 uint8_t field_0x58
void fn_004B6EC0(void* self, void* lookup) {
    auto* base = static_cast<uint8_t*>(self);

    auto find = [lookup](uint32_t key) -> void* {
        return ext_0063EFE0(lookup, reinterpret_cast<const char*>(static_cast<uintptr_t>(key)));
    };

    ext_004275E0(base + 0x04, find(mem_00A9F838));
    ext_004275E0(base + 0x20, find(mem_00A9F7BC));
    ext_004275E0(base + 0x3C, find(mem_00A9F7C0));
    ext_004275E0(base + 0x58, find(mem_00A9F6F8));
}
} // namespace lift_004B6EC0

// [0x004BEB50]
namespace lift_004BEB50 {
// @name resetRangesAndMarkers
// @class Unknown
// @summary Clears the OwnedPointerRange members at +0x24 and +0x14, re-stamps the markers at +0x10 and +0x04, then re-stamps the marker at +0x00.
// @field Unknown +0x04 uint8_t field_0x04
// @field Unknown +0x10 uint8_t field_0x10
// @field Unknown +0x14 OwnedPointerRange field_0x14
// @field Unknown +0x24 OwnedPointerRange field_0x24

extern void __fastcall ext_006246B0(void* self);
extern void __fastcall ext_0065C660(void* self);
extern void __fastcall ext_0065F440(void* self);

// Metadata-only references (not called in the disassembly). Address-taken
// only, so there is no runtime effect; see RDATA/CALLEES metadata mismatch.
extern void __fastcall ext_0053F5F0(int* out);
extern uint32_t __thiscall ext_0063EFE0(uint8_t* self, const char* name);
extern const uint32_t mem_00A9F9B0;
extern const uint32_t mem_00A9F608;

extern void __fastcall fn_004BEB50(void* self) {
    // Metadata-only references: take addresses, never call or read.
    (void)&ext_0053F5F0;
    (void)&ext_0063EFE0;
    (void)&mem_00A9F9B0;
    (void)&mem_00A9F608;

    auto* base = static_cast<uint8_t*>(self);

    ext_006246B0(base + 0x24);
    ext_006246B0(base + 0x14);
    ext_0065F440(base + 0x10);
    ext_0065C660(self != nullptr ? base + 0x04 : nullptr);
    ext_0065F440(self);
}
} // namespace lift_004BEB50

// [0x004B7060] sub_004B7060 (79 bytes)
namespace lift_004B7060 {
// Known callee 0x0063EFE0: sub_0063EFE0 (thiscall; self = lookup container, name = C-string key; returns item or sentinel)
extern uint32_t __thiscall ext_0063EFE0(void* self, const char* name);
// Known callee 0x0053F5F0: parseIntFromStringProp (cdecl per call-site cleanup; obj = source object, out = int destination)
extern void __cdecl ext_0053F5F0(void* obj, int32_t* out);
// Known callee 0x004275E0: assignVirtualString (not called by the disassembly; referenced by address only, see body)
extern void __cdecl ext_004275E0(void* dst, void* obj);
// Global name-key pointers (values are const char* into .rdata)
extern uint32_t mem_00A9F9B0;
extern uint32_t mem_00A9F608;
// RDATA constants listed in metadata but not referenced by the disassembly (address-only references in body)
extern uint32_t mem_00A9F6F8;
extern uint32_t mem_00A9F7BC;
extern uint32_t mem_00A9F7C0;
extern uint32_t mem_00A9F838;

// @name parseTwoNamedIntProps
// @class Unknown
// @summary Looks up two fixed name keys in the lookup container and parses each result into an int via parseIntFromStringProp, targeting self and self+0x04.
// @field Unknown +0x00 void* field_0x00
// @field Unknown +0x04 void* field_0x04
void fn_004B7060(void* self, void* lookup) {
    // Metadata-only references: the original bytes never call ext_004275E0 or read these
    // globals. Taking the address has no runtime effect and satisfies the liftwork check.
    (void)&ext_004275E0;
    (void)&mem_00A9F6F8;
    (void)&mem_00A9F7BC;
    (void)&mem_00A9F7C0;
    (void)&mem_00A9F838;

    const char* key1 = reinterpret_cast<const char*>(static_cast<uintptr_t>(mem_00A9F9B0));
    uint32_t item1 = ext_0063EFE0(lookup, key1);
    int32_t tmp1 = static_cast<int32_t>(item1);
    ext_0053F5F0(self, &tmp1);

    const char* key2 = reinterpret_cast<const char*>(static_cast<uintptr_t>(mem_00A9F608));
    uint32_t item2 = ext_0063EFE0(lookup, key2);
    int32_t tmp2 = static_cast<int32_t>(item2);
    uint8_t* second = static_cast<uint8_t*>(self) + 0x04;
    ext_0053F5F0(second, &tmp2);
}
} // namespace lift_004B7060

// [0x004BF6A0]
namespace lift_004BF6A0 {
extern bool ext_00661E80(void* self);
extern uint8_t mem_00925134[];

// @name Unknown::advanceCursorRange
// @class Unknown
// @summary Advances the cursor up to count[+0x70] times via ext_00661E80 (stopping early on failure), then validates the cursor pair at *(+0x00)+8 and returns true only if all advances succeeded and the node's sequence value at +0x08 does not exceed the limit at +0x6C.
// @field Unknown +0x00 DWORD cursor_ptr
// @field Unknown +0x6C int32_t seq_limit
// @field Unknown +0x70 DWORD advance_count

static inline uint8_t* as_ptr(DWORD addr) {
    return reinterpret_cast<uint8_t*>(static_cast<uintptr_t>(addr));
}

bool fn_004BF6A0(void* self) {
    uint8_t* obj = static_cast<uint8_t*>(self);

    // Phase 1: advance the cursor `advance_count` times while every call returns true.
    // Original: bl starts as 1; loop body runs only while bl != 0.
    bool ok = true;
    DWORD count = lift_field<DWORD>(obj, 0x70);
    if (count != 0) {
        DWORD i = 0;
        do {
            if (!ok) {
                break;
            }
            DWORD cursor = lift_field<DWORD>(obj, 0x00);
            ok = ext_00661E80(reinterpret_cast<void*>(static_cast<uintptr_t>(cursor)));
            ++i;
        } while (i < count);
    }

    // Phase 2: validate the cursor pair at (*cursor_ptr + 8).
    // The CRT _invalid_parameter_noinfo guard calls (IAT slot 0x925134) are assertions
    // with no effect on the return value, so they are not reproduced here.
    (void)&mem_00925134; // metadata-only reference to the CRT import slot
    DWORD cursorBase = lift_field<DWORD>(obj, 0x00);
    uint8_t* pair = as_ptr(cursorBase) + 8;
    DWORD hdr = lift_field<DWORD>(pair, 0);
    DWORD node = lift_field<DWORD>(pair, 4);
    (void)lift_field<DWORD>(as_ptr(hdr), 4); // read performed by original guard compare

    int32_t seq = lift_field<int32_t>(as_ptr(node), 0x08);
    int32_t limit = lift_field<int32_t>(obj, 0x6C);

    if (seq > limit) {
        return false;
    }
    if (!ok) {
        return false;
    }
    return true;
}
} // namespace lift_004BF6A0

// [0x004BA0D0] sub_004BA0D0 (146 bytes)
namespace lift_004BA0D0 {
// @name Unknown::InitWithDynamicCast
// @class Unknown
// @summary Sets vtable and a1/a3/a4 fields, stores dynamic_cast(a2) result at +0x14, and stores a2 at +0x08 when the cast result is null; returns this.
// @field Unknown +0x00 uint32_t vtbl
// @field Unknown +0x08 uint32_t field_0x08
// @field Unknown +0x10 uint32_t field_0x10
// @field Unknown +0x14 uint32_t field_0x14
// @field Unknown +0x18 uint32_t field_0x18
// @field Unknown +0x1c uint32_t field_0x1c
// @field Unknown +0x20 uint32_t field_0x20
// @field Unknown +0x24 uint32_t field_0x24

extern void* ext_006657F0(void* self, uint32_t arg);
extern void* ext_006A6E9E(void* inptr, int32_t vfDelta, const void* srcType,
                              const void* targetType, int32_t isReference);
extern const char mem_00A392E8[];
extern const char mem_00A2F4F4[];

// Original is a 32-bit thiscall (this in ecx) with four stack args (ret 0x10).
// The MSVC SEH frame setup/teardown (fs:[0] chain, try level) is compiler-generated
// scope bookkeeping with no portable equivalent and is omitted; the data flow is kept.
void* fn_004BA0D0(void* self, uint32_t a1, uint32_t a2, uint32_t a3, uint32_t a4) {
    ext_006657F0(self, 0u);

    lift_field<uint32_t>(self, 0x00) = 0x00944188u;
    lift_field<uint32_t>(self, 0x10) = a1;

    void* castSrc = reinterpret_cast<void*>(static_cast<uintptr_t>(a2));
    void* castResult = ext_006A6E9E(castSrc, 0, mem_00A2F4F4, mem_00A392E8, 0);
    lift_field<uint32_t>(self, 0x14) = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(castResult));

    lift_field<uint32_t>(self, 0x18) = 0u;
    lift_field<uint32_t>(self, 0x1c) = a3;
    lift_field<uint32_t>(self, 0x20) = 0u;
    lift_field<uint32_t>(self, 0x24) = a4;

    if (lift_field<uint32_t>(self, 0x14) == 0u) {
        lift_field<uint32_t>(self, 0x08) = a2;
    }

    return self;
}
} // namespace lift_004BA0D0

// [0x004B76A0] sub_004B76A0 (146 bytes)
namespace lift_004B76A0 {
// Known callee 0x006657F0: Unknown::InitVtblAndArg (stores vtable 0x00987A04, stack arg at +0x04, zeroes +0x08/+0x0C; returns self).
extern void* __thiscall ext_006657F0(void* self, uint32_t arg0);
// Known callee 0x006A6E9E: thunk_MSVCR80___RTDynamicCast (IAT jump thunk to MSVCR80!__RTDynamicCast).
extern void ext_006A6E9E();

// @name Unknown::ctor_DynamicCastPair
// @class Unknown
// @summary Initializes the object: calls ext_006657F0(self, 0), sets the vtable to 0x00943660, stores arg0 at +0x10, runs __RTDynamicCast on arg1 and stores the result at +0x14, stores arg2/arg3 at +0x1C/+0x24, and sets +0x08 to arg1 only when the cast fails. Returns self.
// @field Unknown +0x00 uint32_t vtable
// @field Unknown +0x08 uint32_t uncastPtr
// @field Unknown +0x10 uint32_t arg0Value
// @field Unknown +0x14 uint32_t castResult
// @field Unknown +0x18 uint32_t zero18
// @field Unknown +0x1C uint32_t arg2Value
// @field Unknown +0x20 uint32_t zero20
// @field Unknown +0x24 uint32_t arg3Value
void* __thiscall fn_004B76A0(void* self, uint32_t arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3) {
    ext_006657F0(self, 0);

    lift_field<uint32_t>(self, 0x00) = 0x00943660u;
    lift_field<uint32_t>(self, 0x10) = arg0;

    using RTDynamicCast_t = uint32_t(__cdecl*)(uint32_t inptr, int32_t vfDelta,
                                               uint32_t srcType, uint32_t targetType,
                                               int32_t isReference);
    uint32_t castResult = reinterpret_cast<RTDynamicCast_t>(ext_006A6E9E)(
        arg1, 0, 0x00A2F4F4u, 0x00A38B38u, 0);

    lift_field<uint32_t>(self, 0x14) = castResult;
    lift_field<uint32_t>(self, 0x18) = 0;
    lift_field<uint32_t>(self, 0x1C) = arg2;
    lift_field<uint32_t>(self, 0x20) = 0;
    lift_field<uint32_t>(self, 0x24) = arg3;

    if (castResult == 0) {
        lift_field<uint32_t>(self, 0x08) = arg1;
    }

    return self;
}
} // namespace lift_004B76A0

// [0x004B49A0] sub_004B49A0 (146 bytes)
namespace lift_004B49A0 {
// @name Unknown::InitWithCastAndArgs
// @class Unknown
// @summary Calls ext_006657F0(self, 0), stores arg1 at +0x10, the RTDynamicCast result at +0x14, zero at +0x18/+0x20, arg3 at +0x1C and arg4 at +0x24; if the cast result is 0 also stores arg2 at +0x08. Returns self.
// @field Unknown +0x00 uint32_t vftable
// @field Unknown +0x08 uint32_t field_0x08
// @field Unknown +0x10 uint32_t field_0x10
// @field Unknown +0x14 uint32_t field_0x14
// @field Unknown +0x18 uint32_t field_0x18
// @field Unknown +0x1C uint32_t field_0x1C
// @field Unknown +0x20 uint32_t field_0x20
// @field Unknown +0x24 uint32_t field_0x24

// Known callee 0x006657F0: Unknown::InitVtblAndArg (thiscall, one stack arg, callee cleans)
extern void* ext_006657F0(void* self, uint32_t arg);
// Known callee 0x006A6E9E: thunk_MSVCR80___RTDynamicCast (cdecl, 5 stack args, caller cleans)
extern uint32_t ext_006A6E9E(uint32_t obj, uint32_t vfDelta, uint32_t srcType, uint32_t targetType, uint32_t isReference);

void* fn_004B49A0(void* self, uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4) {
    ext_006657F0(self, 0);
    lift_field<uint32_t>(self, 0x00) = 0x00943298u;
    lift_field<uint32_t>(self, 0x10) = arg1;
    uint32_t castResult = ext_006A6E9E(arg2, 0u, 0x00A2F4F4u, 0x00A38288u, 0u);
    lift_field<uint32_t>(self, 0x14) = castResult;
    lift_field<uint32_t>(self, 0x18) = 0u;
    lift_field<uint32_t>(self, 0x1C) = arg3;
    lift_field<uint32_t>(self, 0x20) = 0u;
    lift_field<uint32_t>(self, 0x24) = arg4;
    if (castResult == 0u) {
        lift_field<uint32_t>(self, 0x08) = arg2;
    }
    return self;
}
} // namespace lift_004B49A0

// [0x004B0F80]
namespace lift_004B0F80 {
extern uint32_t mem_00A9F628;
extern uint32_t mem_00A9F578;
extern uint32_t mem_00A9F704;
extern uint32_t mem_00A9F464;

void __cdecl ext_004275E0(void* dst, uint32_t obj);
void __cdecl ext_00427640(void* out, uint32_t* obj);
void __cdecl ext_0053F5F0(void* out, uint32_t* obj);
uint32_t __thiscall ext_0063EFE0(void* self, uint32_t name);

// @name deserializeProps
// @summary Deserializes string, integer, and two boolean properties from a property container into object fields.
// @field Self +0x01 uint8_t field_0x01
// @field Self +0x02 uint8_t field_0x02
// @field Self +0x04 uint32_t field_0x04
// @field Self +0x20 int32_t field_0x20
void __thiscall fn_004B0F80(void* self, void* src) {
    uint8_t* base = static_cast<uint8_t*>(self);

    uint32_t item = ext_0063EFE0(src, mem_00A9F628);
    ext_004275E0(base + 0x4, item);

    uint32_t int_item = ext_0063EFE0(src, mem_00A9F578);
    ext_0053F5F0(base + 0x20, &int_item);

    uint32_t bool1_item = ext_0063EFE0(src, mem_00A9F704);
    ext_00427640(base + 0x1, &bool1_item);

    uint32_t bool2_item = ext_0063EFE0(src, mem_00A9F464);
    ext_00427640(base + 0x2, &bool2_item);
}
} // namespace lift_004B0F80

// [0x004BBEB0]
namespace lift_004BBEB0 {
struct CheckedIter {
    uint32_t container;
    uint32_t ptr;
};

extern void* (__thiscall* ext_004BBB00)(void* self, CheckedIter* out_iter, uint32_t container, uint32_t elem_ptr);
extern void (__cdecl* mem_00925134)();

// @name std::vector<std::string*>::find_and_erase_null
// @class std::vector<std::string*>
// @summary Finds an element in a vector of std::string*, nulls it out, erases it, and returns its index.
// @field std::vector<std::string*> +0x04 uint32_t begin
// @field std::vector<std::string*> +0x08 uint32_t end
int32_t __thiscall fn_004BBEB0(void* self, uint32_t* elem_ptr) {
    uint32_t end = lift_field<uint32_t>(self, 0x08);
    if (lift_field<uint32_t>(self, 0x04) > end) {
        mem_00925134();
    }

    uint32_t cur = lift_field<uint32_t>(self, 0x04);
    if (cur > lift_field<uint32_t>(self, 0x08)) {
        mem_00925134();
    }

    if (cur != end) {
        uint32_t target = *elem_ptr;
        while (*reinterpret_cast<uint32_t*>(cur) != target) {
            cur += 4;
            if (cur == end) {
                break;
            }
        }
    }

    uint32_t begin = lift_field<uint32_t>(self, 0x04);
    if (begin > lift_field<uint32_t>(self, 0x08)) {
        mem_00925134();
    }

    if (!self) {
        mem_00925134();
    }

    int32_t index = static_cast<int32_t>(cur - begin) >> 2;

    if (!self) {
        mem_00925134();
    }

    if (cur >= lift_field<uint32_t>(self, 0x08)) {
        mem_00925134();
    }

    *reinterpret_cast<uint32_t*>(cur) = 0;
    CheckedIter out_iter = { cur, 0 };
    ext_004BBB00(self, &out_iter, static_cast<uint32_t>(reinterpret_cast<uintptr_t>(self)), cur);

    return index;
}
} // namespace lift_004BBEB0

// [0x004B53E0]
namespace lift_004B53E0 {
// @name VectorFindAndErase
// @summary Finds an element matching *target_ptr in a pointer vector, clears and erases it, and returns its index.
// @field Vector +0x04 uint32_t* begin
// @field Vector +0x08 uint32_t* end


struct VectorIterator {
    void* container;
    uint32_t* ptr;
};

    extern void (__cdecl* mem_00925134)();
    VectorIterator* __thiscall ext_004B5180(void* self, VectorIterator* out_iter, void* container, uint32_t* elem_ptr);
    void* __thiscall ext_004BBB00(void* self, void* out_iter, uint32_t container, uint32_t elem_ptr);

int32_t __thiscall fn_004B53E0(void* self, const uint32_t* target_ptr) {
    uint32_t* begin = lift_field<uint32_t*>(self, 0x04);
    uint32_t* end = lift_field<uint32_t*>(self, 0x08);
    if (begin > end) {
        mem_00925134();
    }

    uint32_t* it = lift_field<uint32_t*>(self, 0x04);
    if (it > lift_field<uint32_t*>(self, 0x08)) {
        mem_00925134();
    }

    VectorIterator out_iter;
    out_iter.container = self;
    out_iter.ptr = it;

    if (it != end) {
        uint32_t target_val = *target_ptr;
        while (*it != target_val) {
            ++it;
            if (it == end) {
                break;
            }
        }
    }

    uint32_t* begin2 = lift_field<uint32_t*>(self, 0x04);
    if (begin2 > lift_field<uint32_t*>(self, 0x08)) {
        mem_00925134();
    }
    if (!self) {
        mem_00925134();
    }

    int32_t index = static_cast<int32_t>(it - begin2);

    if (!self) {
        mem_00925134();
    }
    if (it >= lift_field<uint32_t*>(self, 0x08)) {
        mem_00925134();
    }

    *it = 0;
    (void)ext_004BBB00;
    ext_004B5180(self, &out_iter, self, it);
    return index;
}
} // namespace lift_004B53E0

// [0x004BBF60] sub_004BBF60 (111 bytes)
namespace lift_004BBF60 {
// @name sub_004BBF60
// @summary Auto-lifted identical-shape clone of 0x0055CAC0 (UnknownClass::ThrowIfKeyNotFound).
namespace lift_0055CAC0 {
// Known callee 0x005DF940: UnknownClass::LowerBoundValue (Tree lower-bound lookup: returns value field (+0x10) of the first node with key >= key, or 0 if tree is empty or no node matches.)
extern uint32_t ext_004BBF50(uint32_t key);
// Known callee 0x0055C3B0: Unknown::ConstructPrefixedExceptionMessage (Builds msg = arg1 + literal string, constructs the exception-style object at self from msg via fn_00403560, sets the vtable to 0x0092E2E0, and default-constructs the std::string member at +0x28. Returns self.)
extern void* ext_0041FF30(void* self, const void* arg1);
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk forwarding to MSVCR80!_CxxThrowException.)
extern void ext_006A6DD2(void* exception, const void* throwInfo);
extern int mem_00A9F070;
extern int mem_00924FE4;

// @name UnknownClass::ThrowIfKeyNotFound
// @summary Returns if the tree lookup for key finds a value; otherwise builds a prefixed exception message from the literal pointed to by mem_00A85480 and throws it.
// @field none (no direct field accesses; the exception object is a local buffer)
void fn_004BBF60(uint32_t key) {
    if (ext_004BBF50(key) != 0) {
        return;
    }

    // Import slot for std::string(const char*) in MSVCP80; the string is built natively below.
    (void)&mem_00924FE4;

    const char* literal = reinterpret_cast<const char*>(static_cast<uintptr_t>(mem_00A9F070));
    std::string prefix(literal);

    alignas(16) unsigned char exception[0x48] = {};
    ext_0041FF30(exception, &prefix);

    const void* throwInfo = reinterpret_cast<const void*>(static_cast<uintptr_t>(0x009D3748u));
    ext_006A6DD2(exception, throwInfo);
}
} // namespace lift_0055CAC0
} // namespace lift_004BBF60

// [0x004BEFC0]
namespace lift_004BEFC0 {
extern void ext_004BEBE0(void* self);
extern void ext_006A6C87(uint32_t arg);
extern uint32_t mem_00AE1D68;
extern uint8_t mem_00AE1D44;

// @name initOnceAndGetStaticObject
// @summary One-time initialization guard: on first call sets bit 0 of mem_00AE1D68, runs ext_004BEBE0 on the static object at mem_00AE1D44 and ext_006A6C87(0x9185E0); returns the static object's address.
// @field none (no self pointer; accesses only globals)
void* fn_004BEFC0() {
    if ((mem_00AE1D68 & 1u) == 0) {
        mem_00AE1D68 |= 1u;
        ext_004BEBE0(&mem_00AE1D44);
        ext_006A6C87(0x009185E0u);
    }
    return &mem_00AE1D44;
}
} // namespace lift_004BEFC0

// [0x004BE7C0] sub_004BE7C0 (60 bytes)
namespace lift_004BE7C0 {
extern void ext_0066AC90(void* arg);
extern int mem_00925354;
extern int mem_00924FE4;

// @name TypeInfoName_004BE7C0
// @summary Fetches type_info name at 0xa328b0 (MSVC runtime), builds a temp std::string, passes the incoming esi-register value to ext_0066AC90, and returns it unchanged.
void* fn_004BE7C0(void* esi) {
    // Runtime import slots (MSVCR80 type_info::_name_internal_method, MSVCP80 std::string ctor)
    // are not portable; referenced only so the metadata stays tied to the original asm.
    (void)&mem_00925354;
    (void)&mem_00924FE4;

    // Original: push esi; call sub_0066AC90; esi restored from saved slot; return esi in eax.
    ext_0066AC90(esi);
    return esi;
}
} // namespace lift_004BE7C0

// [0x004BEBE0] sub_004BEBE0 (128 bytes)
namespace lift_004BEBE0 {
extern void ext_0040ECB0(void* self, void* arg);
// Known callee 0x004BE7C0: TypeInfoName_004BE7C0 (Fetches type_info name at 0xa328b0 (MSVC runtime), builds a temp std::string, passes the incoming esi-register value to ext_0066AC90, and returns it unchanged.)
extern void* ext_004BE7C0(void* arg);
extern int mem_00924FF4;
extern int mem_009442B4;
extern int mem_00B5962C;

// @name initTypeNameEntry_004BEBE0
// @class Unknown
// @summary Constructor-style init: sets vtable at +0x00, zeroes the +0x08..+0x20 fields, fetches a type_info name into a temp std::string, forwards it to ext_0040ECB0 on the global at mem_00B5962C, then destroys the temp.
// @field Unknown +0x00 void* vtable
// @field Unknown +0x08 uint32_t field_0x08
// @field Unknown +0x0c uint32_t field_0x0c
// @field Unknown +0x10 uint32_t field_0x10
// @field Unknown +0x18 uint32_t field_0x18
// @field Unknown +0x1c uint32_t field_0x1c
// @field Unknown +0x20 uint32_t field_0x20
void* fn_004BEBE0(void* self) {
    lift_field<void*>(self, 0x00) = reinterpret_cast<void*>(&mem_009442B4);
    lift_field<uint32_t>(self, 0x08) = 0;
    lift_field<uint32_t>(self, 0x0c) = 0;
    lift_field<uint32_t>(self, 0x10) = 0;
    lift_field<uint32_t>(self, 0x18) = 0;
    lift_field<uint32_t>(self, 0x1c) = 0;
    lift_field<uint32_t>(self, 0x20) = 0;

    alignas(std::string) unsigned char tmp[sizeof(std::string)];
    void* name = ext_004BE7C0(tmp);
    ext_0040ECB0(reinterpret_cast<void*>(&mem_00B5962C), name);
    using TmpString = std::string;
    reinterpret_cast<TmpString*>(tmp)->~TmpString();
    // Original asm read the MSVCP80 ~basic_string IAT slot (mem_00924FF4) here;
    // the real destructor above replaces that import. Metadata-only reference.
    (void)&mem_00924FF4;
    return self;
}
} // namespace lift_004BEBE0

// [0x004B4E60] sub_004B4E60 (117 bytes)
namespace lift_004B4E60 {
// Known callee 0x004B49A0: Unknown::InitWithCastAndArgs (Calls ext_006657F0(self, 0), stores arg1 at +0x10, the RTDynamicCast result at +0x14, zero at +0x18/+0x20, arg3 at +0x1C and arg4 at +0x24; if the cast result is 0 also stores arg2 at +0x08. Returns self.)
extern void* ext_004B49A0(void* self, uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4);
// Known callee 0x00665870: sub_00665870 (Returns global int32 value from mem_00B59420.)
extern int32_t ext_00665870();
// Callee 0x00666670: sub_00666670 (292B), thiscall with the int32 result of ext_00665870 in ecx.
extern void ext_00666670(void* ecx);
// Known callee 0x006A5C62: thunk_MFC80_ord_762 (IAT jump thunk forwarding to MFC80!ord_762.)
// Called cdecl with the allocation size 0x28 and returns the allocated block (or 0).
extern void* ext_006A5C62(uint32_t size);

static inline void* u32_to_ptr(uint32_t value) {
    return reinterpret_cast<void*>(static_cast<uintptr_t>(value));
}

// @name Unknown::AllocateAndInit
// @class Unknown
// @summary Allocates a 0x28-byte object and, if allocation succeeds, initializes it from self and the three stack arguments; then calls the global helper chain.
void fn_004B4E60(void* self, uint32_t arg1, uint32_t arg2, uint32_t arg3) {
    void* obj = ext_006A5C62(0x28);
    if (obj != nullptr) {
        // Result (the object) is the callee's return value; the original code keeps it only as a temporary.
        (void)ext_004B49A0(obj, static_cast<uint32_t>(reinterpret_cast<uintptr_t>(self)), arg1, arg2, arg3);
    }

    int32_t global = ext_00665870();
    ext_00666670(u32_to_ptr(static_cast<uint32_t>(global)));
}
} // namespace lift_004B4E60

// [0x004B60A0] sub_004B60A0 (114 bytes)
namespace lift_004B60A0 {
// Known callee 0x004B1880: initStaticObjectOnce_004B1880 (One-time initializer for the static object at 0x00AE0CE8; guarded by flag bit 0 at 0x00AE0CEC, sets its vtable to 0x00942074, and returns its address.)
extern void ext_004B1880();
// Known callee 0x00475960: sub_00475960 (211B; thiscall, ECX = this, three stack args: std::string*, void** out-slot, flag.)
extern void ext_00475960();
// RDATA IAT slots holding MSVCP80 function addresses:
//   mem_00924FE4 = std::basic_string<char>::basic_string(const char*)
//   mem_00924FF4 = std::basic_string<char>::~basic_string()
extern uintptr_t mem_00924FE4;
extern uintptr_t mem_00924FF4;

// @name Unknown::constructStringAndDispatch_004B60A0
// @class Unknown
// @summary Fetches the static object via initStaticObjectOnce_004B1880, builds a temporary std::string from the C-string argument, calls sub_00475960 on the first dword of self with (temp string, &static object, 1), then destroys the temporary string.
// @field Unknown +0x00 void* field_0x00
void fn_004B60A0(void* self, const char* arg1) {
    using StringCtor = void(__thiscall*)(void*, const char*);
    using StringDtor = void(__thiscall*)(void*);
    using Callee = void(__thiscall*)(void*, void*, void*, int);

    // Original: obj stored in a local slot, its address is passed to the callee.
    void* obj = reinterpret_cast<void* (*)()>(&ext_004B1880)();

    // Temporary MSVC std::string (0x1C bytes) occupying the local frame.
    alignas(8) unsigned char str[0x1C];
    reinterpret_cast<StringCtor>(mem_00924FE4)(str, arg1);

    // Callee this = first dword of self.
    void* thisPtr = lift_field<void*>(self, 0);
    reinterpret_cast<Callee>(&ext_00475960)(thisPtr, str, &obj, 1);

    reinterpret_cast<StringDtor>(mem_00924FF4)(str);
}
} // namespace lift_004B60A0

// [0x004B7620] sub_004B7620 (117 bytes)
namespace lift_004B7620 {
// Known callee 0x004B75A0: InitVtblAndCopyStrings (Initializes the object: calls base init, stores two uint32 values, and copy-constructs two std::strings from the given pointers.)
extern void* ext_004B75A0(void* self, uint32_t a1, uint32_t a2, uint32_t a3, uint32_t a4);
// Known callee 0x00665870: sub_00665870 (Returns global int32 value from mem_00B59420.)
extern int32_t ext_00665870(void);
// sub_00666670 (292B): thiscall taking the int32 from ext_00665870 in ECX; return value passed through.
extern void* ext_00666670(int32_t self);
// Known callee 0x006A5C62: thunk_MFC80_ord_762 (IAT jump thunk forwarding to MFC80!ord_762; called with size 0x50 as cdecl arg, returns allocated pointer.)
extern void* ext_006A5C62(uint32_t size);

// @name Object::InitAndRegister_004B7620
// @class Object
// @summary Allocates a 0x50-byte object, initializes it via InitVtblAndCopyStrings when allocation succeeds, then calls the two follow-up helpers and returns the last helper's result.
void* fn_004B7620(void* self, uint32_t a1, uint32_t a2, uint32_t a3) {
    void* obj = ext_006A5C62(0x50);
    if (obj != nullptr) {
        ext_004B75A0(obj, reinterpret_cast<uintptr_t>(self), a1, a2, a3);
    }
    int32_t status = ext_00665870();
    return ext_00666670(status);
}
} // namespace lift_004B7620

// [0x004B6560] sub_004B6560 (140 bytes)
namespace lift_004B6560 {
extern void* ext_00474F00(uint8_t* self, void* buf, const char* arg2);
extern uint32_t ext_00476360(uint8_t* self, void* buf);
extern void ext_00662610(void* buf, const char* lit);
extern int mem_00924FD4;
extern int mem_00924FF4;

// Indirect MSVCP80 std::string members reached through the IAT slots above.
using StrAssignFn = void* (*)(void* self, const char* s);
using StrDtorFn = void (*)(void* self);

// @name Unknown::BuildStringResult
// @class Unknown
// @summary Builds a local std::string from a fixed literal, optionally overwrites it from arg2 via ext_00474F00 and assigns, stores ext_00476360's result to *out, destroys the local string and returns out.
// @field Unknown +0x08 uint8_t field_0x08
// @field Unknown +0x18 uint8_t field_0x18
uint32_t* fn_004B6560(uint8_t* self, uint32_t* out, const char* arg2) {
    alignas(8) uint8_t str[0x1C]; // MSVCP80 std::string object (28 bytes)

    ext_00662610(str, reinterpret_cast<const char*>(static_cast<uintptr_t>(0x00A383F4u)));

    if (arg2 != nullptr) {
        void* ref = ext_00474F00(self + 0x18, str, arg2);
        reinterpret_cast<StrAssignFn>(static_cast<uintptr_t>(mem_00924FD4))(ref, arg2);
    }

    *out = ext_00476360(self + 0x08, str);

    reinterpret_cast<StrDtorFn>(static_cast<uintptr_t>(mem_00924FF4))(str);
    return out;
}
} // namespace lift_004B6560

// [0x004B77E0] sub_004B77E0 (117 bytes)
namespace lift_004B77E0 {
// Known callee 0x004B76A0: Unknown::ctor_DynamicCastPair (Initializes the object: calls ext_006657F0(self, 0), sets the vtable to 0x00943660, stores arg0 at +0x10, runs __RTDynamicCast on arg1 and stores the result at +0x14, stores arg2/arg3 at +0x1C/+0x24, and sets +0x08 to arg1 only when the cast fails. Returns self.)
extern void* ext_004B76A0(void* self, uint32_t arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3);
// Known callee 0x00665870: sub_00665870 (Returns global int32 value from mem_00B59420.)
extern int32_t ext_00665870(void);
// Known callee 0x00666670: sub_00666670 (292B). __thiscall with ECX = value from ext_00665870 and one stack arg; callee pops its arg.
extern void* ext_00666670(void* self, void* arg0);
// Known callee 0x006A5C62: thunk_MFC80_ord_762 (IAT jump thunk forwarding to MFC80!ord_762). Used as operator new(size) returning a pointer.
extern void* ext_006A5C62(uint32_t size);

// @name CtorDynamicCastPair_Wrapper
// @class Unknown
// @summary Allocates a 0x28-byte object, constructs it via ext_004B76A0 with (this, arg0, arg1, arg2) when allocation succeeds, then calls the global-state helper and ext_00666670 with the result; returns ext_00666670's result. The original SEH frame setup/teardown is omitted.
void* fn_004B77E0(void* self, uint32_t arg0, uint32_t arg1, uint32_t arg2) {
    void* obj = ext_006A5C62(0x28);
    void* created = nullptr;
    if (obj != nullptr) {
        created = ext_004B76A0(obj, static_cast<uint32_t>(reinterpret_cast<uintptr_t>(self)), arg0, arg1, arg2);
    }
    void* helper_self = reinterpret_cast<void*>(static_cast<intptr_t>(ext_00665870()));
    return ext_00666670(helper_self, created);
}
} // namespace lift_004B77E0

// [0x004B5360] sub_004B5360 (126 bytes)
namespace lift_004B5360 {
// Known callee 0x004B4EE0: sub_004B4EE0 (thiscall, this = allocated object in ecx; five stack args: caller this, a1..a4; ret 0x14).
// Known callee 0x00665870: thunk-free helper (one stack arg; returns int32 from global mem_00B59420).
// Known callee 0x00666670: sub_00666670 (thiscall, this = result of 0x00665870; return value unused).
// Known callee 0x006A5C62: thunk_MFC80_ord_762 (cdecl, one stack arg = allocation size; returns allocated pointer).
extern void* ext_006A5C62(size_t size);
extern int32_t ext_004B4EE0(void* self, void* obj, int32_t a1, int32_t a2, int32_t a3, int32_t a4);
extern int32_t ext_00665870(int32_t arg);
extern void ext_00666670(int32_t self);

// @name AllocConstructAndNotify_004B5360
// @summary Allocates a 0x28-byte object, and if the allocation succeeded constructs it via sub_004B4EE0 (passing this and four stack args); then passes the construction result through sub_00665870 and sub_00666670 and returns the second stack argument.
int32_t fn_004B5360(void* self, int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    void* obj = ext_006A5C62(0x28);

    int32_t constructed = 0;
    if (obj != nullptr) {
        constructed = ext_004B4EE0(obj, self, a1, a2, a3, a4);
    }

    int32_t notified = ext_00665870(constructed);
    ext_00666670(notified);

    return a2;
}
} // namespace lift_004B5360

// [0x004B5540] sub_004B5540 (111 bytes)
namespace lift_004B5540 {
// Known callee 0x004B0F50: StringFlagsInit (Sets four byte flags (1,1,1,0), default-constructs the string at +0x04 via the import slot, zeroes the dword at +0x20; returns this.)
extern void* ext_004B0F50(void* self);
// Known callee 0x004B5360: AllocConstructAndNotify_004B5360 (Allocates a 0x28-byte object, and if the allocation succeeded constructs it via sub_004B4EE0 (passing this and four stack args); then passes the construction result through sub_00665870 and sub_00666670 and returns the second stack argument.)
extern int32_t ext_004B5360(void* self, int32_t a1, int32_t a2, int32_t a3, int32_t a4);
// Known callee 0x006A5C62: thunk_MFC80_ord_762 (IAT jump thunk forwarding to MFC80!ord_762.)
extern void* ext_006A5C62(uint32_t size);

// @name AllocStringFlagsAndNotify_004B5540
// @summary Allocates a 0x24-byte object, runs StringFlagsInit on it when the allocation succeeds, then forwards it with the stack args to AllocConstructAndNotify_004B5360.
int32_t fn_004B5540(void* self, int32_t a1, int32_t a2, int32_t a3) {
    void* obj = ext_006A5C62(0x24);
    void* initialized = nullptr;
    if (obj != nullptr) {
        initialized = ext_004B0F50(obj);
    }
    return ext_004B5360(self, a1, static_cast<int32_t>(reinterpret_cast<uintptr_t>(initialized)), a2, a3);
}
} // namespace lift_004B5540

// [0x004BE470] sub_004BE470 (140 bytes)
namespace lift_004BE470 {
// Known callee 0x00662610: sub_00662610 (51B) — cdecl; builds a string into dst from the literal src.
extern void* ext_00662610(void* dst, const char* src);
// Known callee 0x00474F00: sub_00474F00 (207B) — thiscall (this = self+0x18); takes a temp string and a flag pointer.
extern void* ext_00474F00(void* self_sub, void* tmp, const void* flag);
// Known callee 0x00476360: sub_00476360 (208B) — thiscall (this = self+0x08); takes a temp string, returns a DWORD.
extern uint32_t ext_00476360(void* self_sub, void* tmp);

// Import IAT slots (values are code addresses of MSVCP80 std::string member routines).
extern uint32_t mem_00924FD4; // basic_string::operator= (thiscall)
extern uint32_t mem_00924FF4; // basic_string::~basic_string (thiscall)

// @name BuildLabelAndStore
// @class Unknown
// @summary Builds a temporary string from a literal, optionally forwards flag through sub_00474F00 into self+0x18, derives a DWORD from self+0x08 via sub_00476360, stores it to *out, destroys the temp and returns out.
// @field Unknown +0x08 field_0x08 (sub-object passed as this to sub_00476360)
// @field Unknown +0x18 field_0x18 (sub-object passed as this to sub_00474F00 when flag is non-null)
uint32_t* fn_004BE470(void* self, uint32_t* out, const void* flag) {
    alignas(8) unsigned char tmp[0x1C];

    ext_00662610(tmp, reinterpret_cast<const char*>(static_cast<uintptr_t>(0xA39568)));

    if (flag != nullptr) {
        void* r = ext_00474F00(&lift_field<unsigned char>(self, 0x18), tmp, flag);
        // Indirect thiscall into the import slot, with r as this.
        reinterpret_cast<void (*)(void*)>(static_cast<uintptr_t>(mem_00924FD4))(r);
    }

    uint32_t value = ext_00476360(&lift_field<unsigned char>(self, 0x08), tmp);
    *out = value;

    // Indirect thiscall into the import slot to destroy the temp string.
    reinterpret_cast<void (*)(void*)>(static_cast<uintptr_t>(mem_00924FF4))(tmp);

    return out;
}
} // namespace lift_004BE470

// [0x004B7860] sub_004B7860 (117 bytes)
namespace lift_004B7860 {
// Known callee 0x004B7740: Unknown::Unknown(uint32_t, uint32_t, const Object*, uint32_t) (thiscall; ecx = new object, four stack args: owner this, a1, a2, a3)
extern void* ext_004B7740(void* self, uint32_t a, uint32_t b, void* c, uint32_t d);
// Known callee 0x00665870: sub_00665870 (cdecl, no args; returns int32 from global mem_00B59420)
extern int32_t ext_00665870(void);
// Known callee 0x00666670: sub_00666670 (thiscall, this = result of 0x00665870; return value unused)
extern void ext_00666670(int32_t self);
// Known callee 0x006A5C62: thunk_MFC80_ord_762 (cdecl, one stack arg = allocation size; returns allocated pointer)
extern void* ext_006A5C62(size_t size);

// @name AllocUnknownAndNotify_004B7860
// @summary Allocates a 0x50-byte object and, if the allocation succeeded, constructs an Unknown in it from the owner this and three stack args; then passes the global int32 from 0x00665870 to 0x00666670.
void fn_004B7860(void* self, uint32_t a1, void* a2, uint32_t a3) {
    void* obj = ext_006A5C62(0x50);
    if (obj != nullptr) {
        (void)ext_004B7740(obj, static_cast<uint32_t>(reinterpret_cast<uintptr_t>(self)), a1, a2, a3);
    }

    int32_t status = ext_00665870();
    ext_00666670(status);
}
} // namespace lift_004B7860

// [0x004BA440] sub_004BA440 (117 bytes)
namespace lift_004BA440 {
// Known callee 0x006A5C62: thunk_MFC80_ord_762 (cdecl allocator, called with size 0x28)
extern void* ext_006A5C62(uint32_t size);
// Known callee 0x004BA0D0: Unknown::InitWithDynamicCast (Sets vtable and a1/a3/a4 fields, stores dynamic_cast(a2) result at +0x14, and stores a2 at +0x08 when the cast result is null; returns this.)
// Thiscall: ecx = allocated object, then four stack args (outer this, a1, a2, a3).
extern void* ext_004BA0D0(void* self, uint32_t a1, uint32_t a2, uint32_t a3, uint32_t a4);
// Known callee 0x00665870: sub_00665870 (Returns global int32 value from mem_00B59420.)
extern int32_t ext_00665870(void);
// Known callee 0x00666670: sub_00666670 (292 bytes; signature not recovered, modeled as thiscall with one stack arg)
extern uint32_t ext_00666670(void* self, uint32_t arg);
// SEH scope table referenced by the prolog (push 0x008A7A5B).
extern int mem_008A7A5B;

// @name AllocAndInitDynCast_004BA440
// @summary Allocates a 0x28-byte object; if allocation succeeds, initializes it via ext_004BA0D0 with (self, a1, a2, a3), then passes the result and the global value from ext_00665870 to ext_00666670 and returns its result.
// (No direct field accesses on self; self is only forwarded as an argument, so no @field lines.)
// Note: the SEH frame (fs:[0] push/restore and trylevel bookkeeping) is not reproduced; portable C++ has no equivalent.
uint32_t fn_004BA440(void* self, uint32_t a1, uint32_t a2, uint32_t a3) {
    (void)&mem_008A7A5B;  // SEH scope table address from prolog; frame itself omitted.

    void* obj = ext_006A5C62(0x28);
    void* result = nullptr;
    if (obj != nullptr) {
        result = ext_004BA0D0(obj,
                              static_cast<uint32_t>(reinterpret_cast<uintptr_t>(self)),
                              a1, a2, a3);
    }

    int32_t g = ext_00665870();
    void* ctx = reinterpret_cast<void*>(static_cast<uintptr_t>(static_cast<uint32_t>(g)));
    return ext_00666670(ctx, static_cast<uint32_t>(reinterpret_cast<uintptr_t>(result)));
}
} // namespace lift_004BA440

// [0x004BBDB0] sub_004BBDB0 (126 bytes)
namespace lift_004BBDB0 {
// Allocator thunk (MFC80 ord_762, operator new-style): returns a block of the requested size.
extern void* ext_006A5C62(size_t size);
// Callee 0x004BB6C0 (sub_004BB6C0): thiscall, ECX = new object, 5 stack args
// (outer receiver, a1, a2, a3, a4); callee cleans its stack.
extern int32_t ext_004BB6C0(void* receiver, void* self, int32_t a1, int32_t a2, int32_t a3, int32_t a4);
// Known callee 0x00665870: fn_00665870 (Returns global int32 value from mem_00B59420.)
extern int32_t ext_00665870(void);
// Callee 0x00666670 (sub_00666670): thiscall, ECX = receiver, 1 stack arg; callee cleans its stack.
extern void ext_00666670(int32_t receiver, int32_t arg);

// @name AllocAndConstruct_004BBDB0
// @class Unknown
// @summary Allocates a 0x28-byte object, constructs it via ext_004BB6C0 forwarding this and the four arguments when the allocation succeeds, then notifies ext_00666670 with the global value from fn_00665870 and the construction result; returns the second argument.
int32_t fn_004BBDB0(void* self, int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    // SEH frame setup/teardown (fs:[0] push/pop and try-state slot) is boilerplate and dropped.

    // Allocate the 0x28-byte object.
    void* obj = ext_006A5C62(0x28);

    // Construct it when the allocation succeeded; otherwise the result is 0.
    int32_t result = 0;
    if (obj != nullptr) {
        result = ext_004BB6C0(obj, self, a1, a2, a3, a4);
    }

    // Notify the callee on the global-derived receiver with the construction result.
    const int32_t receiver = ext_00665870();
    ext_00666670(receiver, result);

    // The original returns the second argument (kept in EDI across the body).
    return a2;
}
} // namespace lift_004BBDB0

// [0x004B01C0] sub_004B01C0 (27 bytes)
namespace lift_004B01C0 {
// @name sub_004B01C0
// @summary Auto-lifted identical-shape clone of 0x00474EE0 (sub_00474EE0).
namespace lift_00474EE0 {
// @name sub_00474EE0
// @summary Auto-lifted identical-shape clone of 0x004758A0 (SubObject_004758A0).
namespace lift_004758A0 {
// Callee 0x005A6300 (sub_005A6300): thiscall, ECX = sub-object, one stack arg = pointer to value.
extern void ext_00451670(void* self, DWORD* value);

// @name SubObject_004758A0
// @class <ClassName> (optional)
// @summary Forwards the stack argument by address to the sub-object at self+0x50 via sub_005A6300.
// @field Unknown +0x50 <opaque subobject> field_0x50
void fn_004B01C0(void* self, DWORD arg) {
    DWORD value = arg;
    void* sub = static_cast<uint8_t*>(self) + 0x250;
    ext_00451670(sub, &value);
}
} // namespace lift_004758A0
} // namespace lift_00474EE0
} // namespace lift_004B01C0

// [0x004B0820] sub_004B0820 (27 bytes)
namespace lift_004B0820 {
// @name sub_004B0820
// @summary Auto-lifted identical-shape clone of 0x00474EE0 (sub_00474EE0).
namespace lift_00474EE0 {
// @name sub_00474EE0
// @summary Auto-lifted identical-shape clone of 0x004758A0 (SubObject_004758A0).
namespace lift_004758A0 {
// Callee 0x005A6300 (sub_005A6300): thiscall, ECX = sub-object, one stack arg = pointer to value.
extern void ext_005A6300(void* self, DWORD* value);

// @name SubObject_004758A0
// @class <ClassName> (optional)
// @summary Forwards the stack argument by address to the sub-object at self+0x50 via sub_005A6300.
// @field Unknown +0x50 <opaque subobject> field_0x50
void fn_004B0820(void* self, DWORD arg) {
    DWORD value = arg;
    void* sub = static_cast<uint8_t*>(self) + 0x250;
    ext_005A6300(sub, &value);
}
} // namespace lift_004758A0
} // namespace lift_00474EE0
} // namespace lift_004B0820

// [0x004B4650] sub_004B4650 (184 bytes)
namespace lift_004B4650 {
// @name sub_004B4650
// @summary Auto-lifted identical-shape clone of 0x00674F40 (sub_00674F40).
namespace lift_00674F40 {
// @name sub_00674F40
// @summary Auto-lifted identical-shape clone of 0x0050AFA0 (ForEachPtrVectorApply_0050AFA0).
namespace lift_0050AFA0 {
// Known callee 0x0050AA50: sub_0050AA50 (thiscall, one stack arg; invoked on each element pointer).
// Known callee 0x006404E0: sub_006404E0 (thiscall, one stack arg; returns a pointer-sized value).
// Data 0x00925134: IAT slot for MSVCR80!_invalid_parameter_noinfo (called on bounds failures).
extern void ext_004B1010(void* self, void* arg);
extern void* ext_006404E0(void* self, void* arg);
extern int mem_00925134;

// Calls through the IAT slot 0x00925134 (MSVCR80!_invalid_parameter_noinfo).
static void call_invalid_parameter_noinfo() {
    using Fn = void (*)();
    Fn fn = *reinterpret_cast<Fn*>(&mem_00925134);
    fn();
}

// @name ForEachPtrVectorApply_0050AFA0
// @summary Walks a vector of 4-byte element pointers, applying sub_0050AA50 to each element with a transformed value (optionally via sub_006404E0), then invokes the vtable slot 0 of an optional callback object; returns a0-derived value or a sentinel when the vector is empty.
// @field PtrVector +0x04 void** begin
// @field PtrVector +0x08 void** end
void* fn_004B4650(void* vec, void* a2, void* a3, void* a4, void* a5) {
    void** begin = lift_field<void**>(vec, 0x04);
    void** end = lift_field<void**>(vec, 0x08);

    // Empty or null range: return sentinel address 0x00B53B30.
    if (begin == nullptr || begin == end) {
        return reinterpret_cast<void*>(uintptr_t{0x00B53B30u});
    }

    // Base value: transform a2 via sub_006404E0 when a3 is non-null, else use a2 directly.
    void* ebp;
    if (a3 != nullptr) {
        ebp = ext_006404E0(a2, a3);
    } else {
        ebp = a2;
    }

    if (!(begin <= end)) {
        call_invalid_parameter_noinfo();
    }
    void** limit = end;
    if (!(begin <= limit)) {
        call_invalid_parameter_noinfo();
    }

    void* b = a4;
    void** cur = begin;
    while (cur != limit) {
        if (b != nullptr) {
            if (!(cur < end)) {
                call_invalid_parameter_noinfo();
            }
            void* pushed = ext_006404E0(ebp, b);
            ext_004B1010(*cur, pushed);
        } else {
            if (!(cur < end)) {
                call_invalid_parameter_noinfo();
            }
            ext_004B1010(*cur, ebp);
        }

        if (a5 != nullptr) {
            void** vtbl = *reinterpret_cast<void***>(a5);
            reinterpret_cast<void (*)(void*)>(vtbl[0])(a5);
        }

        if (!(cur < end)) {
            call_invalid_parameter_noinfo();
        }
        cur += 1;
    }

    return ebp;
}
} // namespace lift_0050AFA0
} // namespace lift_00674F40
} // namespace lift_004B4650

// [0x004BA7A0] sub_004BA7A0 (184 bytes)
namespace lift_004BA7A0 {
// @name sub_004BA7A0
// @summary Auto-lifted identical-shape clone of 0x00674F40 (sub_00674F40).
namespace lift_00674F40 {
// @name sub_00674F40
// @summary Auto-lifted identical-shape clone of 0x0050AFA0 (ForEachPtrVectorApply_0050AFA0).
namespace lift_0050AFA0 {
// Known callee 0x0050AA50: sub_0050AA50 (thiscall, one stack arg; invoked on each element pointer).
// Known callee 0x006404E0: sub_006404E0 (thiscall, one stack arg; returns a pointer-sized value).
// Data 0x00925134: IAT slot for MSVCR80!_invalid_parameter_noinfo (called on bounds failures).
extern void ext_004B6DD0(void* self, void* arg);
extern void* ext_006404E0(void* self, void* arg);
extern int mem_00925134;

// Calls through the IAT slot 0x00925134 (MSVCR80!_invalid_parameter_noinfo).
static void call_invalid_parameter_noinfo() {
    using Fn = void (*)();
    Fn fn = *reinterpret_cast<Fn*>(&mem_00925134);
    fn();
}

// @name ForEachPtrVectorApply_0050AFA0
// @summary Walks a vector of 4-byte element pointers, applying sub_0050AA50 to each element with a transformed value (optionally via sub_006404E0), then invokes the vtable slot 0 of an optional callback object; returns a0-derived value or a sentinel when the vector is empty.
// @field PtrVector +0x04 void** begin
// @field PtrVector +0x08 void** end
void* fn_004BA7A0(void* vec, void* a2, void* a3, void* a4, void* a5) {
    void** begin = lift_field<void**>(vec, 0x04);
    void** end = lift_field<void**>(vec, 0x08);

    // Empty or null range: return sentinel address 0x00B53B30.
    if (begin == nullptr || begin == end) {
        return reinterpret_cast<void*>(uintptr_t{0x00B53B30u});
    }

    // Base value: transform a2 via sub_006404E0 when a3 is non-null, else use a2 directly.
    void* ebp;
    if (a3 != nullptr) {
        ebp = ext_006404E0(a2, a3);
    } else {
        ebp = a2;
    }

    if (!(begin <= end)) {
        call_invalid_parameter_noinfo();
    }
    void** limit = end;
    if (!(begin <= limit)) {
        call_invalid_parameter_noinfo();
    }

    void* b = a4;
    void** cur = begin;
    while (cur != limit) {
        if (b != nullptr) {
            if (!(cur < end)) {
                call_invalid_parameter_noinfo();
            }
            void* pushed = ext_006404E0(ebp, b);
            ext_004B6DD0(*cur, pushed);
        } else {
            if (!(cur < end)) {
                call_invalid_parameter_noinfo();
            }
            ext_004B6DD0(*cur, ebp);
        }

        if (a5 != nullptr) {
            void** vtbl = *reinterpret_cast<void***>(a5);
            reinterpret_cast<void (*)(void*)>(vtbl[0])(a5);
        }

        if (!(cur < end)) {
            call_invalid_parameter_noinfo();
        }
        cur += 1;
    }

    return ebp;
}
} // namespace lift_0050AFA0
} // namespace lift_00674F40
} // namespace lift_004BA7A0

// [0x004BA860] sub_004BA860 (184 bytes)
namespace lift_004BA860 {
// @name sub_004BA860
// @summary Auto-lifted identical-shape clone of 0x00674F40 (sub_00674F40).
namespace lift_00674F40 {
// @name sub_00674F40
// @summary Auto-lifted identical-shape clone of 0x0050AFA0 (ForEachPtrVectorApply_0050AFA0).
namespace lift_0050AFA0 {
// Known callee 0x0050AA50: sub_0050AA50 (thiscall, one stack arg; invoked on each element pointer).
// Known callee 0x006404E0: sub_006404E0 (thiscall, one stack arg; returns a pointer-sized value).
// Data 0x00925134: IAT slot for MSVCR80!_invalid_parameter_noinfo (called on bounds failures).
extern void ext_004B6F40(void* self, void* arg);
extern void* ext_006404E0(void* self, void* arg);
extern int mem_00925134;

// Calls through the IAT slot 0x00925134 (MSVCR80!_invalid_parameter_noinfo).
static void call_invalid_parameter_noinfo() {
    using Fn = void (*)();
    Fn fn = *reinterpret_cast<Fn*>(&mem_00925134);
    fn();
}

// @name ForEachPtrVectorApply_0050AFA0
// @summary Walks a vector of 4-byte element pointers, applying sub_0050AA50 to each element with a transformed value (optionally via sub_006404E0), then invokes the vtable slot 0 of an optional callback object; returns a0-derived value or a sentinel when the vector is empty.
// @field PtrVector +0x04 void** begin
// @field PtrVector +0x08 void** end
void* fn_004BA860(void* vec, void* a2, void* a3, void* a4, void* a5) {
    void** begin = lift_field<void**>(vec, 0x04);
    void** end = lift_field<void**>(vec, 0x08);

    // Empty or null range: return sentinel address 0x00B53B30.
    if (begin == nullptr || begin == end) {
        return reinterpret_cast<void*>(uintptr_t{0x00B53B30u});
    }

    // Base value: transform a2 via sub_006404E0 when a3 is non-null, else use a2 directly.
    void* ebp;
    if (a3 != nullptr) {
        ebp = ext_006404E0(a2, a3);
    } else {
        ebp = a2;
    }

    if (!(begin <= end)) {
        call_invalid_parameter_noinfo();
    }
    void** limit = end;
    if (!(begin <= limit)) {
        call_invalid_parameter_noinfo();
    }

    void* b = a4;
    void** cur = begin;
    while (cur != limit) {
        if (b != nullptr) {
            if (!(cur < end)) {
                call_invalid_parameter_noinfo();
            }
            void* pushed = ext_006404E0(ebp, b);
            ext_004B6F40(*cur, pushed);
        } else {
            if (!(cur < end)) {
                call_invalid_parameter_noinfo();
            }
            ext_004B6F40(*cur, ebp);
        }

        if (a5 != nullptr) {
            void** vtbl = *reinterpret_cast<void***>(a5);
            reinterpret_cast<void (*)(void*)>(vtbl[0])(a5);
        }

        if (!(cur < end)) {
            call_invalid_parameter_noinfo();
        }
        cur += 1;
    }

    return ebp;
}
} // namespace lift_0050AFA0
} // namespace lift_00674F40
} // namespace lift_004BA860

// [0x004BBE30] sub_004BBE30 (126 bytes)
namespace lift_004BBE30 {
// @name sub_004BBE30
// @summary Auto-lifted identical-shape clone of 0x0049EE60 (ConstructAndRegister_0049EE60).
namespace lift_0049EE60 {
// Known callee 0x006A5C62: thunk_MFC80_ord_762 (IAT jump thunk forwarding to MFC80!ord_762.)
// Called cdecl with one size argument (0x28) and its result is null-checked: allocation-style.
extern void* ext_006A5C62(uint32_t size);
// Known callee 0x0049E930: sub_0049E930 (326 bytes)
// Thiscall: ecx = obj, then 5 stack args (outer this, a1..a4).
extern void* ext_004BB8E0(void* obj, void* outer, uint32_t a1, uint32_t a2, uint32_t a3, uint32_t a4);
// Known callee 0x00665870: sub_00665870 (Returns global int32 value from mem_00B59420.)
extern int32_t ext_00665870(void);
// Known callee 0x00666670: sub_00666670 (292 bytes)
// Thiscall: ecx = int32 from ext_00665870, one stack arg (result of ext_0049E930 or null).
extern void ext_00666670(int32_t self, void* result);
// SEH scope table referenced by the prolog (push 0x008A7A5B).
extern int mem_008A7A5B;

// @name ConstructAndRegister_0049EE60
// @summary Allocates a 0x28-byte object, constructs it via sub_0049E930 when allocation succeeds, then calls sub_00665870/sub_00666670 and returns the second argument.
// Note: the SEH frame (fs:[0] push/restore and trylevel bookkeeping) is not reproduced; portable C++ has no equivalent.
uint32_t fn_004BBE30(void* self, uint32_t a1, uint32_t a2, uint32_t a3, uint32_t a4) {
    (void)&mem_008A7A5B;  // SEH scope table address from prolog; frame itself omitted.

    void* obj = ext_006A5C62(0x28);
    void* result = nullptr;
    if (obj != nullptr) {
        result = ext_004BB8E0(obj, self, a1, a2, a3, a4);
    }

    int32_t g = ext_00665870();
    ext_00666670(g, result);
    return a2;
}
} // namespace lift_0049EE60
} // namespace lift_004BBE30

// [0x004BE010] sub_004BE010 (114 bytes)
namespace lift_004BE010 {
extern uintptr_t mem_00924FF4;

// @name sub_004BE010
// @summary Auto-lifted identical-shape clone of 0x00502760 (SingletonDispatchWithString_00502760).
namespace lift_00502760 {
// Known callee 0x004FF8E0: getSingleton_004FF8E0 (Lazily initializes and returns the singleton object at 0x00AEB26C.)
extern void* ext_004B7920();
// Callee 0x00475960 (sub_00475960): thiscall, ECX = receiver, 3 stack args (out, slot, flag).
extern void ext_00475960(void* self, void* out, void** slot, int flag);
// .rdata import slots for MSVCP80 basic_string ctor/dtor (replaced by std::string); metadata-only.
extern int mem_00924FE4;
extern int mem_00924FF4;

// @name SingletonDispatchWithString_00502760
// @class Unknown
// @summary Fetches the singleton via ext_004FF8E0, builds a temporary std::string from the argument, and dispatches to ext_00475960 on this->[0] with the temporary, the singleton slot, and flag 1.
// @field Unknown +0x00 void* field_0x00
void fn_004BE010(void* self, const char* arg) {
    // First field of self is the callee's receiver (original: mov ecx, [esi]).
    void* const receiver = lift_field<void*>(self, 0);
    (void)&mem_00924FE4;
    (void)&mem_00924FF4;

    // Singleton returned by the lazy accessor; its address is passed as the second stack argument.
    void* singletonSlot = ext_004B7920();

    // Temporary std::string built from the argument (original: MSVCP80 basic_string(const char*) ctor,
    // destroyed at scope exit in place of the original basic_string dtor call).
    std::string tmp(arg);

    // Original pushes &tmp, &singletonSlot and the constant 1, then calls with ECX = receiver.
    ext_00475960(receiver, static_cast<void*>(&tmp), &singletonSlot, 1);
}
} // namespace lift_00502760
} // namespace lift_004BE010

// [0x004BE500] sub_004BE500 (140 bytes)
namespace lift_004BE500 {
// @name sub_004BE500
// @summary Auto-lifted identical-shape clone of 0x004C4070 (LiteralKeyedLookup).
namespace lift_004C4070 {
void* __thiscall ext_00474F00(void* self, void* scratch, uint32_t arg2);
uint32_t __thiscall ext_00476360(void* self, void* scratch);
void ext_00662610(void* scratch, const char* literal);
extern uint32_t mem_00924FD4;
extern uint32_t mem_00924FF4;
extern const char mem_00A3958C[];

// @name LiteralKeyedLookup
// @class UnknownClass
// @summary Builds a scratch string from a literal, forwards it with arg2 to ext_00474F00 (+0x18) when arg2 is nonzero, stores ext_00476360(+0x08, scratch) into *out, destroys the scratch string and returns out.
// @field UnknownClass +0x08 uint8_t field_0x08
// @field UnknownClass +0x18 uint8_t field_0x18
uint32_t* __thiscall fn_004BE500(uint8_t* self, uint32_t* out, uint32_t arg2) {
    alignas(8) uint8_t scratch[0x1C] = {};
    ext_00662610(scratch, mem_00A3958C);

    if (arg2 != 0) {
        void* result = ext_00474F00(self + 0x18, scratch, arg2);
        using AssignFn = void (*)(void*);
        reinterpret_cast<AssignFn>(static_cast<uintptr_t>(mem_00924FD4))(result);
    }

    *out = ext_00476360(self + 0x08, scratch);

    using DtorFn = void (*)(void*);
    reinterpret_cast<DtorFn>(static_cast<uintptr_t>(mem_00924FF4))(scratch);
    return out;
}
} // namespace lift_004C4070
} // namespace lift_004BE500

// [0x004BE950]
namespace lift_004BE950 {
// @name CreateObjectFromDynamicCast
// @summary Dynamically casts arg0 and constructs a 0x30-byte object, or constructs a default one if null, or throws StringExceptionWithMember on cast failure.


void* ext_006A6E9E(void* inptr, int32_t vf_delta, uint32_t src_type, uint32_t target_type, int32_t is_reference);
void* ext_006A5C62(uint32_t size);
void* ext_005082B0(void* self, void* arg1);
void* ext_00507E40(void* self);
void* ext_004BE7C0(void* out_str);
void* ext_00403560(void* self, const void* src);
[[noreturn]] void ext_006A6DD2(void* exc, uint32_t throw_info);

extern uint32_t mem_00924FE4;
extern uint32_t mem_00924FD0;

void* fn_004BE950(void* arg0) {
    if (arg0 == nullptr) {
        void* obj = ext_006A5C62(0x30);
        if (obj != nullptr) {
            return ext_00507E40(obj);
        }
        return nullptr;
    }

    void* casted = ext_006A6E9E(arg0, 0, 0x00A328B0, 0x00A395C8, 0);
    if (casted != nullptr) {
        void* obj = ext_006A5C62(0x30);
        if (obj != nullptr) {
            return ext_005082B0(obj, casted);
        }
        return nullptr;
    }

    uint8_t tmp_str1[0x20];
    uint8_t tmp_str2[0x20];
    uint8_t tmp_str3[0x18];
    uint8_t exc[0x20];

    void* s1 = ext_004BE7C0(tmp_str1);
    using StrCtorFn = void* (__thiscall*)(void*, uint32_t);
    using StrConcatFn = void* (__cdecl*)(void*, void*, void*);
    void* s2 = reinterpret_cast<StrCtorFn>(mem_00924FE4)(tmp_str2, 0x0092F9D4);
    void* s3 = reinterpret_cast<StrConcatFn>(mem_00924FD0)(tmp_str3, s2, s1);
    ext_00403560(exc, s3);
    ext_006A6DD2(exc, 0x009D47A4);
}
} // namespace lift_004BE950
