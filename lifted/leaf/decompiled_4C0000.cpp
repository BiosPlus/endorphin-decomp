// Lifted C++ translation unit: lifted/leaf/decompiled_4C0000.cpp
#include "lift_compat.h"
#include <new>
#include <string>

#include <string>
namespace lift_004CCDE0 {
extern void (*mem_00925134)();

// @name sub_004CCDE0
// @summary Auto-lifted identical-shape clone of 0x0051BF10 (NMData::RealChannel::clear).
namespace lift_0051BF10 {
extern uint32_t mem_00925134;
void __thiscall ext_00406510(void* self, void* out_iter, void* container1, uint32_t begin_it, void* container2, uint32_t end_it);

// @name NMData::RealChannel::clear
// @class NMData::RealChannel
// @summary Clears the RealChannel data vector by erasing from begin to end.
// @field NMData::RealChannel +0x30 uint32_t begin
// @field NMData::RealChannel +0x34 uint32_t end
void __thiscall fn_004CCDE0(uint8_t* self) {
    using InvalidParamFn = void(__cdecl*)();
    InvalidParamFn invalid_param = reinterpret_cast<InvalidParamFn>(static_cast<uintptr_t>(mem_00925134));

    uint8_t* vec = self + 0x16C;
    uint32_t end_val = *reinterpret_cast<uint32_t*>(vec + 0x08);
    if (*reinterpret_cast<uint32_t*>(vec + 0x04) > end_val) {
        invalid_param();
    }

    uint32_t begin_val = *reinterpret_cast<uint32_t*>(vec + 0x04);
    if (begin_val > *reinterpret_cast<uint32_t*>(vec + 0x08)) {
        invalid_param();
    }

    uint32_t local_iter[2] = {};
    ext_00406510(vec, local_iter, vec, begin_val, vec, end_val);
}
} // namespace lift_0051BF10
} // namespace lift_004CCDE0
#include <cmath>

// [0x004C1AC0] sub_004C1AC0 (37 bytes)
namespace lift_004C1AC0 {
// Known callee 0x004C0340: SetGlobalObjectFlag4IfPresent (If the global object pointer mem_00AE29D0 is non-null, set the byte at its +0x04 offset to 1.)
extern void ext_004C0340();

// @name UnknownClass::setValueAboveField15cAndNotify
// @class UnknownClass
// @summary Stores the argument at +0x160; if it is not greater than the signed value at +0x15c, stores +0x15c + 1 instead, then calls ext_004C0340.
// @field UnknownClass +0x15c int32_t field_0x15c
// @field UnknownClass +0x160 int32_t field_0x160
void fn_004C1AC0(void* self, int32_t value) {
    int32_t& threshold = lift_field<int32_t>(self, 0x15c);
    int32_t& out = lift_field<int32_t>(self, 0x160);

    out = value;
    if (value <= threshold) {
        out = static_cast<int32_t>(static_cast<uint32_t>(threshold) + 1u);
    }
    ext_004C0340();
}
} // namespace lift_004C1AC0

// [0x004C4D80] sub_004C4D80 (45 bytes)
namespace lift_004C4D80 {
// @name Vec3::Scale
// @class Vec3
// @summary Writes this vector (ecx) multiplied by a scalar into the output vector (first stack arg); callee pops 8 bytes.
// @field Vec3 +0x00 float x
// @field Vec3 +0x04 float y
// @field Vec3 +0x08 float z
void fn_004C4D80(const void* self, void* out, float scale) {
    const float x = lift_field<float>(self, 0x00);
    const float y = lift_field<float>(self, 0x04);
    const float z = lift_field<float>(self, 0x08);

    lift_field<float>(out, 0x00) = x * scale;
    lift_field<float>(out, 0x04) = y * scale;
    lift_field<float>(out, 0x08) = z * scale;
}
} // namespace lift_004C4D80

// [0x004CCC30]
namespace lift_004CCC30 {
// @name initDefaults
// @class Unknown
// @summary Zeroes dword fields at +0x04..+0x10 and byte fields at +0x14/+0x16, sets byte +0x15 to 1, and clears float fields +0x18..+0x2C to 0.0.
// @field Unknown +0x04 uint32 field_0x04
// @field Unknown +0x08 uint32 field_0x08
// @field Unknown +0x0C uint32 field_0x0C
// @field Unknown +0x10 uint32 field_0x10
// @field Unknown +0x14 uint8 field_0x14
// @field Unknown +0x15 uint8 field_0x15
// @field Unknown +0x16 uint8 field_0x16
// @field Unknown +0x18 float field_0x18
// @field Unknown +0x1C float field_0x1C
// @field Unknown +0x20 float field_0x20
// @field Unknown +0x24 float field_0x24
// @field Unknown +0x28 float field_0x28
// @field Unknown +0x2C float field_0x2C

static inline void store_u32(uint8_t* base, uint32_t off, uint32_t v) {
    std::memcpy(base + off, &v, sizeof(v));
}
static inline void store_u8(uint8_t* base, uint32_t off, uint8_t v) {
    base[off] = v;
}
static inline void store_f32(uint8_t* base, uint32_t off, float v) {
    std::memcpy(base + off, &v, sizeof(v));
}

void sub_004CCC30(uint8_t* self) {
    const float zero = 0.0f;

    store_u32(self, 0x04, 0);
    store_u32(self, 0x08, 0);
    store_u32(self, 0x0C, 0);
    store_u32(self, 0x10, 0);

    store_u8(self, 0x14, 0);
    store_u8(self, 0x15, 1);
    store_u8(self, 0x16, 0);

    store_f32(self, 0x18, zero);
    store_f32(self, 0x1C, zero);
    store_f32(self, 0x20, zero);
    store_f32(self, 0x24, zero);
    store_f32(self, 0x28, zero);
    store_f32(self, 0x2C, zero);
}
} // namespace lift_004CCC30

// [0x004C72D0] sub_004C72D0 (57 bytes)
namespace lift_004C72D0 {
namespace lift_004C72D0 {
// Known callee: IAT slot mem_00924FDC -> MSVCP80 basic_string<char>::operator=(const basic_string&).
// Element is copy-assigned via thiscall (this = dst string, arg = src string).
extern void ext_00924FDC(void* dst_string, const void* src_string);

// @name CopyRangeBackward_004C72D0
// @summary Copies [first,last) of 0x20-byte elements backward so they end at d_last; returns the new begin of the destination range (d_last - count), or d_last when the range is empty.
// @field Element +0x00 uint8_t field_0x00[0x1C]
// @field Element +0x1C int32_t field_0x1C

// Element layout (stride 0x20): std::string at +0x00 (0x1C bytes), int32 at +0x1C.
// Equivalent to std::copy_backward over the 32-byte elements:
//   if (first == last) return d_last;
//   do { --last; --d_last; *d_last = *last; } while (last != first);
//   return d_last;
// Note: the original 'copy' compares after the copy, so the loop body runs at least once.
extern uint8_t* __cdecl fn_004C72D0(uint8_t* first, uint8_t* last, uint8_t* d_last) {
    if (first == last) {
        return d_last;
    }

    uint8_t* src = last;
    uint8_t* dst = d_last;
    do {
        src -= 0x20;
        dst -= 0x20;
        ext_00924FDC(dst, src);
        lift_field<int32_t>(dst, 0x1C) = lift_field<int32_t>(src, 0x1C);
    } while (src != first);

    return dst;
}
} // namespace lift_004C72D0
} // namespace lift_004C72D0

// [0x004CA590] sub_004CA590 (75 bytes)
namespace lift_004CA590 {
// Known callee 0x004CA570: Unknown::SetIndexClamped0To4 (Stores arg if it is in 0..4 into this+0x184, then sets byte +4 of the global object at mem_00AE29D0 (if non-null) to 1.)
extern void ext_004CA570(void* self, DWORD value);

// Slot holding the string comparator (imported MSVCP80 operator==(const char*, const char*)); returns nonzero on match.
extern bool (*mem_00924FC0)(const char* lhs, const char* rhs);

// Table of 5 const char* entries at 0x00945F78.
extern const char* const mem_00945F78[5];

// @name Unknown::SetIndexFromName
// @class Unknown
// @summary Compares name against the 5-entry string table; passes the matching index (or 2 if none) to SetIndexClamped0To4.
void fn_004CA590(void* self, const char* name) {
    DWORD index = 2;
    for (int i = 0; i < 5; ++i) {
        if (mem_00924FC0(name, mem_00945F78[i])) {
            index = static_cast<DWORD>(i);
            break;
        }
    }
    ext_004CA570(self, index);
}
} // namespace lift_004CA590

// [0x004CEAC0] sub_004CEAC0 (87 bytes)
namespace lift_004CEAC0 {
// Known callee 0x00594000: sub_00594000 (Returns global int32 value from mem_00B40D08.)
extern int32_t ext_00594000();
extern int mem_009849C0;

namespace {

inline uint32_t rd32(const void* base, uintptr_t off) {
    uint32_t v;
    std::memcpy(&v, static_cast<const uint8_t*>(base) + off, sizeof v);
    return v;
}

inline uint8_t rd8(const void* base, uintptr_t off) {
    return *(static_cast<const uint8_t*>(base) + off);
}

inline float rdf(const void* base, uintptr_t off) {
    float v;
    std::memcpy(&v, static_cast<const uint8_t*>(base) + off, sizeof v);
    return v;
}

inline void wr32(void* base, uintptr_t off, uint32_t v) {
    std::memcpy(static_cast<uint8_t*>(base) + off, &v, sizeof v);
}

inline void wrf(void* base, uintptr_t off, float v) {
    std::memcpy(static_cast<uint8_t*>(base) + off, &v, sizeof v);
}

inline void* ptrFrom32(uint32_t addr) {
    return reinterpret_cast<void*>(static_cast<uintptr_t>(addr));
}

} // namespace

// @name Unknown::copyFloatAndClearFlag_004CEAC0
// @class Unknown
// @summary Copies a float from arg+0x18C into self+0x08; when arg+0x17C is set and count at (global ext chain) is below mem_009849C0, clears a dword in self's pointee at +0x5F0.
// @field Unknown +0x00 void* field_0x00
// @field Unknown +0x08 float field_0x08
// @field Unknown +0x17C uint8_t field_0x17C
// @field Unknown +0x18C float field_0x18C
void fn_004CEAC0(void* self, void* arg) {
    // eax = ext_00594000(); eax = [eax+0x26C]; ecx = [eax+0x538]
    void* base = ptrFrom32(static_cast<uint32_t>(ext_00594000()));
    void* sub = ptrFrom32(rd32(base, 0x26C));
    uint32_t count = rd32(sub, 0x538);
    uint32_t limit = static_cast<uint32_t>(mem_009849C0);

    if (count < limit) {
        if (rd8(arg, 0x17C) != 0) {
            uint32_t target = rd32(self, 0x00);
            if (target != 0) {
                wr32(ptrFrom32(target), 0x5F0, 0u);
            }
        }
    }

    wrf(self, 0x08, rdf(arg, 0x18C));
}
} // namespace lift_004CEAC0

// [0x004C0E40] sub_004C0E40 (87 bytes)
namespace lift_004C0E40 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (Calls ext_00672000 on self (thiscall, ECX = self), then stores the single stack argument into the first DWORD of self; returns that value.)
extern void ext_0067A670(void* self, DWORD value);
extern int mem_00AE3008;
extern int mem_00AE3004;

// @name initStaticObjectOnce_004C0E40
// @summary One-time initializer: on first call, runs the helper on the static object at mem_00AE3004 and stores 0x9443D4 into it; returns its address.
// @field none (no self-relative accesses)
void* fn_004C0E40() {
    // Guard bit 0 of mem_00AE3008 ensures the one-time initialization runs once.
    if ((mem_00AE3008 & 1) == 0) {
        mem_00AE3008 |= 1;
        ext_0067A670(&mem_00AE3004, 0);
        mem_00AE3004 = 0x9443D4;
    }
    return &mem_00AE3004;
}
} // namespace lift_004C0E40

// [0x004C1CC0] sub_004C1CC0 (87 bytes)
namespace lift_004C1CC0 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (Calls ext_00672000 on self (thiscall, ECX = self), then stores the single stack argument into the first DWORD of self; returns that value.)
extern void ext_0067A670();
extern int mem_00AE3058;
extern int mem_00AE3054;

// @name initStaticObjectOnce_004C1CC0
// @summary One-time initializer guarded by a bit in mem_00AE3058; sets mem_00AE3054 to vtable 0x944744 and returns its address.
void* fn_004C1CC0() {
    // The original wraps this in an SEH frame (fs:[0] push/restore); that is
    // Win32-specific bookkeeping and is dropped in the portable version.
    if ((mem_00AE3058 & 1) == 0) {
        mem_00AE3058 |= 1;
        // Original: thiscall with ECX = &mem_00AE3054 and a zero stack argument.
        ext_0067A670();
        mem_00AE3054 = 0x944744;
    }
    return &mem_00AE3054;
}
} // namespace lift_004C1CC0

// [0x004C2230]
namespace lift_004C2230 {
// @name storePairWithStaticObject
// @summary Stores the value into dst[0], then stores the address returned by the one-time static object initializer into dst[1].
extern void* ext_004C1CC0(void);

void storePairWithStaticObject(uint32_t* dst, uint32_t value) {
    uint32_t staticPtr = (uint32_t)(uintptr_t)ext_004C1CC0();
    dst[0] = value;
    dst[1] = staticPtr;
}
} // namespace lift_004C2230

// [0x004CF910]
namespace lift_004CF910 {
// @name initStaticObjectOnce_004CF910
// @summary One-time initializer for the global object at mem_00AE4B84; sets guard bit 0 of mem_00AE4B88, runs ext_0067A670 on the object, then stores vtable 0x9473D4 into it.
// @field none

DWORD ext_0067A670(void* self, DWORD value);
extern DWORD mem_00AE4B84;
extern DWORD mem_00AE4B88;

DWORD initStaticObjectOnce_004CF910(void) {
    // Guard: bit 0 of mem_00AE4B88 marks the object as initialized.
    if ((mem_00AE4B88 & 1u) == 0u) {
        mem_00AE4B88 |= 1u;
        void* self = &mem_00AE4B84;
        ext_0067A670(self, 0u);
        mem_00AE4B84 = 0x009473D4u;
    }
    return static_cast<DWORD>(reinterpret_cast<uintptr_t>(&mem_00AE4B84));
}
} // namespace lift_004CF910

// [0x004C6010]
namespace lift_004C6010 {
// @name initStaticObjectOnce_004C6010
// @summary One-time initializer for the static object at 0x00AE3710, guarded by the flag byte at 0x00AE3714 (bit 0). On first call it runs the constructor helper and stores the vtable pointer 0x0094541C; returns the object address.

extern DWORD ext_0067A670(void* self, DWORD value);
extern DWORD mem_00AE3714;
extern DWORD mem_00AE3710;

void* initStaticObjectOnce_004C6010() {
    if ((mem_00AE3714 & 1u) == 0) {
        mem_00AE3714 |= 1u;
        ext_0067A670((void*)&mem_00AE3710, 0);
        mem_00AE3710 = 0x0094541Cu;
    }
    return (void*)&mem_00AE3710;
}
} // namespace lift_004C6010

// [0x004C1D80]
namespace lift_004C1D80 {
// @name initStaticObjectOnce_004C1D80
// @summary One-time initializer for the static object at 0x00AE3064; sets a guard bit, runs ext_0067A670 on the object, then stamps its vtable-like first DWORD with 0x00944AA4. Returns the object's address.

extern DWORD mem_00AE3068;  // one-time-init guard flags (bit 0 = already initialized/in progress)
extern DWORD mem_00AE3064;  // static object storage (first DWORD is overwritten with 0x00944AA4)

DWORD ext_0067A670(void* self, DWORD value);  // thiscall: stores value into first DWORD of self

void* initStaticObjectOnce_004C1D80(void) {
    if ((mem_00AE3068 & 1u) == 0) {
        mem_00AE3068 |= 1u;
        ext_0067A670(&mem_00AE3064, 0u);
        mem_00AE3064 = 0x00944AA4u;
    }
    return &mem_00AE3064;
}
} // namespace lift_004C1D80

// [0x004C6070]
namespace lift_004C6070 {
// @name initStaticObjectOnce_004C6070
// @summary One-time initializer for the global object at 0x00AE3718: runs ext_0067A670 on it once, sets its first DWORD to 0x009455CC, and returns its address.

extern DWORD mem_00AE371C; // init-guard flag word (bit 0 = initialized)
extern DWORD mem_00AE3718; // static object storage

DWORD __thiscall ext_0067A670(void* self, DWORD value);

void* fn_004C6070(void) {
    if ((mem_00AE371C & 1u) == 0) {
        mem_00AE371C |= 1u;
        ext_0067A670(&mem_00AE3718, 0);
        mem_00AE3718 = 0x009455CCu;
    }
    return &mem_00AE3718;
}
} // namespace lift_004C6070

// [0x004CADD0]
namespace lift_004CADD0 {
// @name initStaticObjectOnce_004CADD0
// @summary Thread-safe-style one-time initializer for the global object at 0x00AE44A0; sets guard bit 0 of 0x00AE44A4, calls ext_0067A670 on the object, stores its vtable pointer 0x0094667C, and returns the object's address.

    // Thiscall (ECX = object address); no stack arguments are pushed at the call site.
    DWORD __thiscall ext_0067A670(void* self);

// Globals
extern BYTE  mem_00AE44A4;   // guard byte; bit 0 = initialized flag
extern DWORD mem_00AE44A0;   // the static object (first DWORD = vtable pointer)

// NOTE: the original sets up an SEH frame via fs:[0] (handler 0x0088C08E,
// trylevel -1 then 0 around the call). That exception-unwind bookkeeping has
// no portable C++ equivalent and is omitted; only the control flow and data
// effects are reproduced.
void* __cdecl fn_004CADD0() {
    if ((mem_00AE44A4 & 1) == 0) {
        mem_00AE44A4 |= 1;
        ext_0067A670(&mem_00AE44A0);
        mem_00AE44A0 = 0x0094667C;
    }
    return &mem_00AE44A0;
}
} // namespace lift_004CADD0

// [0x004C1BD0] sub_004C1BD0 (30 bytes)
namespace lift_004C1BD0 {
// Known callee 0x004C0E40: initStaticObjectOnce_004C0E40 (One-time initializer returning the address of the static object; caller passes a single stack argument of 0.)
extern void* ext_004C0E40(uint32_t arg0);

// @name storeValueAndStaticPtrPair_004C1BD0
// @summary Stores value into dst+0x00 and the result of ext_004C0E40(0) into dst+0x04.
// @field DwordPair +0x00 uint32_t field_0x00
// @field DwordPair +0x04 uint32_t field_0x04
void fn_004C1BD0(void* dst, uint32_t value) {
    uint32_t result = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(ext_004C0E40(0)));
    lift_field<uint32_t>(dst, 0x00) = value;
    lift_field<uint32_t>(dst, 0x04) = result;
}
} // namespace lift_004C1BD0

// [0x004C1D20] sub_004C1D20 (87 bytes)
namespace lift_004C1D20 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (Calls ext_00672000 on self (thiscall, ECX = self), then stores the single stack argument into the first DWORD of self; returns that value.)
extern void ext_0067A670();
extern int mem_00AE3060;
extern int mem_00AE305C;

// @name initStaticObjectOnce_004C1D20
// @summary One-time initializer guarded by bit 0 of mem_00AE3060; sets mem_00AE305C to vtable 0x9448F4 and returns its address.
void* fn_004C1D20() {
    // The original wraps this in an SEH frame (fs:[0] push/restore); that is
    // Win32-specific bookkeeping and is dropped in the portable version.
    if ((mem_00AE3060 & 1) == 0) {
        mem_00AE3060 |= 1;
        // Original: thiscall with ECX = &mem_00AE305C and a zero stack argument.
        ext_0067A670();
        mem_00AE305C = 0x9448F4;
    }
    return &mem_00AE305C;
}
} // namespace lift_004C1D20

// [0x004CB580] sub_004CB580 (87 bytes)
namespace lift_004CB580 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (Calls ext_00672000 on self (thiscall, ECX = self), then stores the single stack argument into the first DWORD of self; returns that value.)
extern DWORD ext_0067A670(void* self, DWORD value);
extern DWORD mem_00AE44E4;
extern DWORD mem_00AE44E0;

// @name initStaticObjectOnce_004CB580
// @summary One-time initializer for the static object at mem_00AE44E0; guard bit 0 of mem_00AE44E4 marks it done, runs ext_0067A670 on the object with argument 0, then stores 0x946D3C into it; returns the object's address.
DWORD fn_004CB580(void* self) {
    // self is unused: the function operates on fixed globals only.
    // The original SEH frame push/pop (fs:[0] bookkeeping) is not reproduced; it is exception-handling scaffolding, not program logic.
    if ((mem_00AE44E4 & 1u) == 0u) {
        mem_00AE44E4 |= 1u;
        ext_0067A670(&mem_00AE44E0, 0u);
        mem_00AE44E0 = 0x00946D3Cu;
    }
    return static_cast<DWORD>(reinterpret_cast<uintptr_t>(&mem_00AE44E0));
}
} // namespace lift_004CB580

// [0x004CF970]
namespace lift_004CF970 {
// Declared for use by this function. Callee is storeArgIntoFirstDword_006721B0
// (thiscall: self in ECX, one stack argument).
DWORD ext_0067A670(void* self, DWORD value);

extern DWORD mem_00AE4B90; // guard flags; bit 0 marks the object as initialized
extern DWORD mem_00AE4B8C; // static object; first DWORD receives the vtable pointer

// @name initStaticObjectOnce_004CF970
// @summary One-time initializer for the global object at mem_00AE4B8C; sets guard bit 0 of mem_00AE4B90, runs ext_0067A670 on the object, then stores vtable 0x947584 into it. Returns the object's address.
// @field none
DWORD initStaticObjectOnce_004CF970(void) {
    // Guard: bit 0 of mem_00AE4B90 marks the object as initialized.
    if ((mem_00AE4B90 & 1u) == 0u) {
        mem_00AE4B90 |= 1u;
        ext_0067A670(&mem_00AE4B8C, 0u);
        mem_00AE4B8C = 0x00947584u;
    }
    return static_cast<DWORD>(reinterpret_cast<uintptr_t>(&mem_00AE4B8C));
}
} // namespace lift_004CF970

// [0x004CAE30] sub_004CAE30 (87 bytes)
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00AE44AC;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00AE44A8;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_004CAE30() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x0088C0AEu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00AE44AC & 1u) == 0) {
        mem_00AE44AC |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00AE44A8, frame[0]);
        mem_00AE44A8 = 0x00946754u;
    }

    mem_fs_0 = frame[0];
    return &mem_00AE44A8;
}
} // namespace lift_004CAE30

// [0x004CFDE0]
namespace lift_004CFDE0 {
// @name storeStaticObjectPair_004CFDE0
// @summary Stores a caller-supplied value into out[0] and the address of the one-time static object (via initStaticObjectOnce_004CF970) into out[1].

DWORD ext_004CF970(void);

void storeStaticObjectPair_004CFDE0(DWORD* out, DWORD value) {
    DWORD obj = ext_004CF970();
    out[0] = value;
    out[1] = obj;
}
} // namespace lift_004CFDE0

// [0x004C6360]
namespace lift_004C6360 {
// @name storeValueAndStaticObjectPtr
// @summary Calls initStaticObjectOnce_004C6010 and writes its result and a second argument into the first argument's buffer.

extern void* ext_004C6010(void);

// dst[0] = value; dst[1] = (uint32_t)initStaticObjectOnce_004C6010();
void fn_004C6360(uint32_t* dst, uint32_t value) {
    void* obj = ext_004C6010();
    dst[0] = value;
    dst[1] = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(obj));
}
} // namespace lift_004C6360

// [0x004C2270] sub_004C2270 (30 bytes)
namespace lift_004C2270 {
// Known callee 0x004C1D80: initStaticObjectOnce_004C1D80 (One-time initializer for the static object at 0x00AE3064; returns the object's address.)
extern void* ext_004C1D80();

// @name storeValueAndStaticObjectAddr
// @summary Ensures the static object is initialized, then writes value into dst[0] and the static object's address into dst[1].
void fn_004C2270(DWORD* dst, DWORD value) {
    void* obj = ext_004C1D80();
    dst[0] = value;
    dst[1] = static_cast<DWORD>(reinterpret_cast<uintptr_t>(obj));
}
} // namespace lift_004C2270

// [0x004C6380]
namespace lift_004C6380 {
// @name storeValueAndStaticObjectPtr_004C6380
// @summary Calls initStaticObjectOnce_004C6070 and writes its result and a second argument into the first argument's buffer.

extern void* ext_004C6070(void);

// dst[0] = value; dst[1] = (uint32_t)initStaticObjectOnce_004C6070();
void fn_004C6380(uint32_t* dst, uint32_t value) {
    void* obj = ext_004C6070();
    dst[0] = value;
    dst[1] = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(obj));
}
} // namespace lift_004C6380

// [0x004CBBB0] sub_004CBBB0 (30 bytes)
namespace lift_004CBBB0 {
// Known callee 0x004CB580: initStaticObjectOnce_004CB580 (One-time initializer for the static object at mem_00AE44E0; guard bit 0 of mem_00AE44E4 marks it done, runs ext_0067A670 on the object with argument 0, then stores 0x946D3C into it; returns the object's address.)
extern DWORD ext_004CB580(void* self);

// @name initPairWithStaticObject
// @summary Calls the one-time static object initializer, then writes the caller's value into dst[0] and the object's address into dst[1].
void fn_004CBBB0(void* dst, DWORD value) {
    // The initializer is called first; its result is stored after the value.
    DWORD object = ext_004CB580(nullptr);
    lift_field<DWORD>(dst, 0x00) = value;
    lift_field<DWORD>(dst, 0x04) = object;
}
} // namespace lift_004CBBB0

// [0x004CFDC0] sub_004CFDC0 (30 bytes)
namespace lift_004CFDC0 {
// Known callee 0x004CF910: sub_004CCDE0 (Auto-lifted identical-shape clone of 0x0051BF10 (NMData::RealChannel::clear).)
// Called with one stack argument (0) and its result is returned in eax.
extern uint32_t ext_004CF910(uint32_t arg);

// @name storeValueAndCalleeResult
// @summary Writes value to out[0..3] and the result of ext_004CF910(0) to out[4..7].
void fn_004CFDC0(uint8_t* out, uint32_t value) {
    const uint32_t result = ext_004CF910(0);
    lift_field<uint32_t>(out, 0) = value;
    lift_field<uint32_t>(out, 4) = result;
}
} // namespace lift_004CFDC0

// [0x004C2250] sub_004C2250 (30 bytes)
namespace lift_004C2250 {
// Known callee 0x004C1D20: initStaticObjectOnce_004C1D20 (One-time initializer guarded by bit 0 of mem_00AE3060; sets mem_00AE305C to vtable 0x9448F4 and returns its address.)
extern void* ext_004C1D20();

// @name StorePairWithStaticObject
// @summary Writes the value argument to out[0], then writes the address returned by initStaticObjectOnce_004C1D20 to out[1].
void fn_004C2250(uint32_t* out, uint32_t value) {
    // The original passes a zero dummy stack argument to the callee; it is not read by the callee.
    void* obj = ext_004C1D20();
    out[0] = value;
    out[1] = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(obj));
}
} // namespace lift_004C2250

// [0x004C73A0] sub_004C73A0 (95 bytes)
namespace lift_004C73A0 {
// Known callee 0x0066AD10: sub_0066AD10 (Auto-lifted identical-shape clone of 0x00497860 (forwardMakeBoolString).)
extern void* ext_0066AD10(void* out_str, uint8_t flag);
// Known callee 0x006A6C87: sub_006A6C87 (registers teardown for a global; takes one argument)
extern void ext_006A6C87(void* arg);
extern uint32_t mem_00AE3D80;
extern int mem_00AE3D64;

// @name InitOnceGlobalString_004C73A0
// @summary One-time guarded initializer for the global string at 0x00AE3D64; registers its teardown and returns the global's address.
void* fn_004C73A0() {
    // Guard bit 0 of the init flag; initialize only on first call.
    if ((mem_00AE3D80 & 1u) == 0) {
        mem_00AE3D80 |= 1u;
        // Original pushes the constant 0xA3A6A4 as a dword; the callee's
        // signature takes a uint8_t flag, so only the low byte is passed.
        ext_0066AD10(&mem_00AE3D64, static_cast<uint8_t>(0xA3A6A4u));
        ext_006A6C87(reinterpret_cast<void*>(static_cast<uintptr_t>(0x918AD0u)));
    }
    return &mem_00AE3D64;
}
} // namespace lift_004C73A0

// [0x004C1740]
namespace lift_004C1740 {
// @name InitOnceGlobalString_004C1740
// @summary One-time guarded initializer for the global string at mem_00AE3024; on first call runs the string setup and registers a teardown, then returns the global's address.

extern uint32_t mem_00AE3040;   // init guard flag (bit 0 = initialized)
extern uint8_t  mem_00AE3024[]; // global string storage

void* ext_0066AD10(void* out_str, uint8_t flag);
void  ext_006A6C87(void* teardown);

void* sub_004C1740() {
    if ((mem_00AE3040 & 1u) == 0) {
        mem_00AE3040 |= 1u;
        ext_0066AD10(static_cast<void*>(mem_00AE3024), static_cast<uint8_t>(0x80));
        ext_006A6C87(reinterpret_cast<void*>(static_cast<uintptr_t>(0x009187D0u)));
    }
    return static_cast<void*>(mem_00AE3024);
}
} // namespace lift_004C1740

// [0x004C50C0]
namespace lift_004C50C0 {
// @name computeIdentityMatrixFirstRowNorm
// @summary Initializes a 3x3 identity matrix, passes it to sub_0067DAD0, and returns the Euclidean norm of the first row.


extern void __stdcall ext_0067DAD0(float* mat);

float fn_004C50C0(void) {
    float mat[9] = {
        1.0f, 0.0f, 0.0f,
        0.0f, 1.0f, 0.0f,
        0.0f, 0.0f, 1.0f
    };
    ext_0067DAD0(mat);
    float x = mat[0];
    float y = mat[1];
    float z = mat[2];
    return std::sqrt(x * x + y * y + z * z);
}
} // namespace lift_004C50C0

// [0x004C70F0] sub_004C70F0 (97 bytes)
namespace lift_004C70F0 {
// Known callee 0x00401BB0: DIBException::~DIBException (Base destructor: installs DIBException vtable, destroys the std::string member at +0x0C, then destroys the std::exception base.)
extern void ext_00401BB0(void* self);
// IAT slot for MSVCP80 std::basic_string<char>::~basic_string (thiscall; ecx = this).
extern void (*mem_00924FF4)(void* self);

// @name DIBExceptionDerived::~DIBExceptionDerived
// @class DIBExceptionDerived
// @summary Derived-class destructor: installs derived vtable, destroys two std::string members (+0x44, then +0x28), then chains to DIBException base destructor.
// @field DIBExceptionDerived +0x00 void* vtable
// @field DIBExceptionDerived +0x28 std::string field_0x28
// @field DIBExceptionDerived +0x44 std::string field_0x44
void fn_004C70F0(void* self) {
    auto* base = static_cast<unsigned char*>(self);
    // Derived vtable pointer (0x00945A5C).
    *reinterpret_cast<uintptr_t*>(base + 0x00) = 0x00945A5CU;
    // Destroy member string at +0x44.
    mem_00924FF4(base + 0x44);
    // Destroy member string at +0x28.
    mem_00924FF4(base + 0x28);
    // Chain to DIBException base destructor.
    ext_00401BB0(self);
}
} // namespace lift_004C70F0

// [0x004C4650]
namespace lift_004C4650 {
// @name setTreeNodesField
// @summary Iterates through a red-black tree and sets field_0x24 on each node's value object to the given value.
// @field TreeContainer +0x04 void* head
// @field TreeContainer +0x0C uint32_t value

void __fastcall ext_00673C20(void* iter);
extern void(__cdecl* mem_00925134)();

struct TreeIterator {
    void* container;
    uint8_t* node;
};

void __thiscall sub_004C4650(uint8_t* self, uint32_t val) {
    uint8_t* head = *reinterpret_cast<uint8_t**>(self + 0x04);
    *reinterpret_cast<uint32_t*>(self + 0x0C) = val;
    uint8_t* node = *reinterpret_cast<uint8_t**>(head);

    TreeIterator it{self, node};

    for (;;) {
        uint8_t* end_node = *reinterpret_cast<uint8_t**>(self + 0x04);
        if (it.container == nullptr || it.container != self) {
            mem_00925134();
        }
        if (it.node == end_node) {
            break;
        }
        if (it.container == nullptr) {
            mem_00925134();
        }
        if (it.node == *reinterpret_cast<uint8_t**>(reinterpret_cast<uint8_t*>(it.container) + 0x04)) {
            mem_00925134();
        }

        uint8_t* obj = *reinterpret_cast<uint8_t**>(it.node + 0x28);
        uint32_t stored_val = *reinterpret_cast<uint32_t*>(self + 0x0C);
        *reinterpret_cast<uint32_t*>(obj + 0x24) = stored_val;

        ext_00673C20(&it);
    }
}
} // namespace lift_004C4650

// [0x004CFFE0] sub_004CFFE0 (34 bytes)
namespace lift_004CFFE0 {
extern const char mem_00947AC0[];

// @name sub_004CFFE0
// @summary Auto-lifted identical-shape clone of 0x00622380 (NMData::SkeletalCalibrationVariables::vfunc_28).
namespace lift_00622380 {
extern const char mem_00947AC0[];

// @name NMData::SkeletalCalibrationVariables::vfunc_28
// @class NMData::SkeletalCalibrationVariables
// @summary Auto-lifted identical-shape clone of 0x006227B0 (NMData::HingeCalibrationVariables::vfunc_28).
namespace lift_006227B0 {
// String literal whose address (0x009770F4) is pushed as the const char* argument.
extern const char mem_00947AC0[];
// Import slot for the std::string constructor (MSVCP80); the portable version below replaces the indirect call.
extern int mem_00924FE4;

// @name NMData::HingeCalibrationVariables::vfunc_28
// @class NMData::HingeCalibrationVariables
// @summary Constructs a std::string at the hidden out-pointer from the literal at 0x009770F4 and returns that pointer; the second stack argument is ignored (stdcall, ret 8).
void fn_004CFFE0(std::string* out, void* unused) {
    (void)unused;
    (void)&mem_00924FE4; // original calls the MSVCP80 ctor through this IAT slot
    new (out) std::string(mem_00947AC0);
}
} // namespace lift_006227B0
} // namespace lift_00622380
} // namespace lift_004CFFE0

// [0x004C4390]
namespace lift_004C4390 {
// @name sub_004C4390
// @summary Constructor that initializes a std::string base, zeroes byte at +0x1c, and clears the string.
// @field Self +0x1c uint8_t field_0x1c


extern void* mem_00924FE8;
extern void* mem_00924EA8;

void* sub_004C4390(void* self) {
    using ThiscallVoidFn = void (*)(void*);
    ((ThiscallVoidFn)mem_00924FE8)(self);
    lift_field<uint8_t>(self, 0x1c) = 0;
    ((ThiscallVoidFn)mem_00924EA8)(self);
    return self;
}
} // namespace lift_004C4390

// [0x004CE7B0]
namespace lift_004CE7B0 {
extern uint32_t mem_00924FC4; // import: std::operator==(const string&, const string&)
extern uint8_t mem_00AE51C8[]; // std::string[7], stride 0x1C
extern uint8_t mem_00AE5290[]; // std::string[7], stride 0x1C

typedef bool(__cdecl *StringEqFn)(const void *, const void *);

// @name findStringNameIndex
// @summary Returns index (0..6) of the entry in either of two global std::string tables equal to the given string, or 0 if none.
int __stdcall sub_004CE7B0(const void *str) {
    StringEqFn eq = (StringEqFn)(uintptr_t)mem_00924FC4;
    int index = 0;
    for (int off = 0; off <= 0xA8; off += 0x1C, ++index) {
        if (eq(mem_00AE51C8 + off, str))
            return index;
        if (eq(mem_00AE5290 + off, str))
            return index;
    }
    return 0;
}
} // namespace lift_004CE7B0

// [0x004CE590]
namespace lift_004CE590 {
// @name findStringTableIndex
// @summary Searches two 7-entry std::string tables for a matching string and returns its 0-based index, or 7 if not found.

extern uint8_t mem_00924FC4[];
extern uint8_t mem_00AE51C8[];
extern uint8_t mem_00AE5290[];
extern void ext_0067DAD0(void);

extern int32_t fn_004CE590(const void* str) {
    (void)&ext_0067DAD0;
    using StringEqFn = uint8_t(__cdecl*)(const void*, const void*);
    auto string_eq = reinterpret_cast<StringEqFn>(*reinterpret_cast<const uint32_t*>(mem_00924FC4));

    const uint8_t* entry = mem_00AE51C8;
    for (int32_t i = 0; i < 7; ++i, entry += 0x1C) {
        if (string_eq(str, entry) != 0) {
            return i;
        }
    }

    entry = mem_00AE5290;
    for (int32_t i = 0; i < 7; ++i, entry += 0x1C) {
        if (string_eq(str, entry) != 0) {
            return i;
        }
    }

    return 7;
}
} // namespace lift_004CE590

// [0x004C7200] sub_004C7200 (106 bytes)
namespace lift_004C7200 {
// Known callee 0x00401C60: std::logic_error::logic_error (copy constructor of the base exception)
extern void* __thiscall ext_00401C60(void* self, const void* other);
// MSVCP80 std::string copy-constructor import slot (used by the original via indirect call;
// the portable version copy-constructs the std::string members with placement new instead).
extern int mem_00924FE0;

// @name StringExceptionWithMember::copy_ctor
// @class StringExceptionWithMember
// @summary Copy constructor: copies the base exception, sets the vtable, and copy-constructs two std::string members.
// @field StringExceptionWithMember +0x00 void* vftable
// @field StringExceptionWithMember +0x28 std::string str_a
// @field StringExceptionWithMember +0x44 std::string str_b
void* fn_004C7200(void* self, const void* other) {
    (void)&mem_00924FE0;

    // Base copy constructor (thiscall, one stack argument).
    ext_00401C60(self, other);

    auto* dst = static_cast<unsigned char*>(self);
    const auto* src = static_cast<const unsigned char*>(other);

    // Vtable pointer for this class (original stores the 32-bit image address).
    lift_field<uint32_t>(dst, 0x00) = 0x00945A5Cu;

    // First std::string member: copy from other+0x28.
    new (dst + 0x28) std::string(*reinterpret_cast<const std::string*>(src + 0x28));

    // Second std::string member: copy from other+0x44.
    new (dst + 0x44) std::string(*reinterpret_cast<const std::string*>(src + 0x44));

    return self;
}
} // namespace lift_004C7200

// [0x004CC6A0] sub_004CC6A0 (126 bytes)
namespace lift_004CC6A0 {
// @name UnknownClass::SetVec3AndNotifyElements
// @class UnknownClass
// @summary Copies a 3-float vector into this+0x24..0x2c, sets the flag at +0x15, then calls virtual slot 42 (+0xa8) on every element pointer in the [begin,end) array at +0x4/+0x8, passing this+0x18 as the argument.
// @field UnknownClass +0x04 void** field_0x04
// @field UnknownClass +0x08 void** field_0x08
// @field UnknownClass +0x15 uint8_t field_0x15
// @field UnknownClass +0x18 void* field_0x18
// @field UnknownClass +0x24 float field_0x24
// @field UnknownClass +0x28 float field_0x28
// @field UnknownClass +0x2c float field_0x2c
extern int mem_00925134;

void fn_004CC6A0(void* self, const float* src) {
    using VirtualFn = void(__thiscall*)(void* self, void* arg);

    // Metadata-only reference: the original loads the CRT _invalid_parameter_noinfo
    // pointer from this slot for debug iterator checks, which are omitted here.
    (void)&mem_00925134;

    lift_field<float>(self, 0x24) = src[0];
    lift_field<float>(self, 0x28) = src[1];
    lift_field<float>(self, 0x2c) = src[2];
    lift_field<uint8_t>(self, 0x15) = 1;

    void** it = lift_field<void**>(self, 0x04);
    while (it != lift_field<void**>(self, 0x08)) {
        void* element = *it;
        void* sub = lift_field<void*>(element, 0x234);
        void* vtable = *static_cast<void**>(sub);
        VirtualFn fn = reinterpret_cast<VirtualFn>(lift_field<void*>(vtable, 0xa8));
        fn(sub, static_cast<uint8_t*>(self) + 0x18);
        ++it;
    }
}
} // namespace lift_004CC6A0

// [0x004CCB50] sub_004CCB50 (50 bytes)
namespace lift_004CCB50 {
// Known callee 0x004CC6A0: UnknownClass::SetVec3AndNotifyElements (Copies a 3-float vector into this+0x24..0x2c, sets the flag at +0x15, then calls virtual slot 42 on every element pointer in the [begin,end) array.)
extern void ext_004CC6A0(void* self, const float* src);

// @name UnknownClass::SetVec3IfNoPendingNotify
// @class UnknownClass
// @summary If the dword at +0x180 is zero, stores the 3-float vector src into +0x194..+0x19c; otherwise tail-forwards to SetVec3AndNotifyElements.
// @field UnknownClass +0x180 int32_t pendingNotifyFlag
// @field UnknownClass +0x194 float vec3X
// @field UnknownClass +0x198 float vec3Y
// @field UnknownClass +0x19c float vec3Z
void fn_004CCB50(void* self, const float* src) {
    if (lift_field<int32_t>(self, 0x180) != 0) {
        ext_004CC6A0(self, src);
        return;
    }
    lift_field<float>(self, 0x194) = src[0];
    lift_field<float>(self, 0x198) = src[1];
    lift_field<float>(self, 0x19c) = src[2];
}
} // namespace lift_004CCB50

// [0x004C0350] sub_004C0350 (44 bytes)
namespace lift_004C0350 {
// Known callee 0x0055DA20: initDwordPair (Stores two stack-passed DWORDs into the object at ECX and returns that object pointer (callee pops 8 bytes).)
extern void ext_0055DA20(DWORD* self, DWORD a, DWORD b);
// Known callee 0x00681E50: DispatchSubcallByIndex (Switch on index 0..6: tail-dispatches to one of six sub-handlers (0..4, 6); index 5 and out-of-range return 0.)
extern DWORD ext_00681E50(DWORD index, void* a1, void* a2);

// @name CallDispatchThenInitPair
// @class <ClassName> (optional)
// @summary Calls DispatchSubcallByIndex(2, a2, saved ESI), then initDwordPair on a1 with (result, a2); returns a1.
// (no direct object field accesses in this function)
DWORD fn_004C0350(DWORD a1, DWORD a2) {
    // Original asm passes the caller's ESI as the third dispatch argument
    // (it is pushed as a stack slot). That value is not expressible in portable C++; passed as 0.
    DWORD r = ext_00681E50(2, (void*)(uintptr_t)a2, (void*)0);
    ext_0055DA20((DWORD*)(uintptr_t)a1, r, a2);
    return a1;
}
} // namespace lift_004C0350

// [0x004CCB10] sub_004CCB10 (50 bytes)
namespace lift_004CCB10 {
// @name sub_004CCB10
// @summary Auto-lifted identical-shape clone of 0x004CCB50 (UnknownClass::SetVec3IfNoPendingNotify).
namespace lift_004CCB50 {
// Known callee 0x004CC6A0: UnknownClass::SetVec3AndNotifyElements (Copies a 3-float vector into this+0x24..0x2c, sets the flag at +0x15, then calls virtual slot 42 on every element pointer in the [begin,end) array.)
extern void ext_004CC610(void* self, const float* src);

// @name UnknownClass::SetVec3IfNoPendingNotify
// @class UnknownClass
// @summary If the dword at +0x180 is zero, stores the 3-float vector src into +0x194..+0x19c; otherwise tail-forwards to SetVec3AndNotifyElements.
// @field UnknownClass +0x180 int32_t pendingNotifyFlag
// @field UnknownClass +0x194 float vec3X
// @field UnknownClass +0x198 float vec3Y
// @field UnknownClass +0x19c float vec3Z
void fn_004CCB10(void* self, const float* src) {
    if (lift_field<int32_t>(self, 0x180) != 0) {
        ext_004CC610(self, src);
        return;
    }
    lift_field<float>(self, 0x188) = src[0];
    lift_field<float>(self, 0x18C) = src[1];
    lift_field<float>(self, 0x190) = src[2];
}
} // namespace lift_004CCB50
} // namespace lift_004CCB10

// [0x004CC610] sub_004CC610 (137 bytes)
namespace lift_004CC610 {
extern int mem_00925134;

// @name Unknown::copyVec3AndDispatchRange
// @class Unknown
// @summary Copies a 3-float vector into self+0x18, sets the flag at +0x15, then walks the uint32 pointer range [+0x04, +0x08) and calls vtable slot 41 of each element's sub-object (element+0x234) with a pointer to self+0x18.
// @field Unknown +0x04 uint32_t begin
// @field Unknown +0x08 uint32_t end
// @field Unknown +0x15 uint8_t flag
// @field Unknown +0x18 float vec_x
// @field Unknown +0x1C float vec_y
// @field Unknown +0x20 float vec_z
// @field Element +0x234 void* field_0x234
void __thiscall fn_004CC610(void* self, const float* src) {
    using InvalidParamFn = void(__cdecl*)();
    using VirtualFn = void(__thiscall*)(void* self_sub, void* arg);

    auto invalid_param = reinterpret_cast<InvalidParamFn>(static_cast<uintptr_t>(mem_00925134));
    auto as_ptr = [](uint32_t v) {
        return reinterpret_cast<uint8_t*>(static_cast<uintptr_t>(v));
    };

    uint8_t* base = static_cast<uint8_t*>(self);

    *reinterpret_cast<float*>(base + 0x18) = src[0];
    *reinterpret_cast<float*>(base + 0x1C) = src[1];
    *reinterpret_cast<float*>(base + 0x20) = src[2];
    uint8_t* vec = base + 0x18;

    uint32_t it = *reinterpret_cast<uint32_t*>(base + 0x04);
    if (it > *reinterpret_cast<uint32_t*>(base + 0x08)) {
        invalid_param();
    }
    *reinterpret_cast<uint8_t*>(base + 0x15) = 1;

    for (;;) {
        uint32_t end = *reinterpret_cast<uint32_t*>(base + 0x08);
        if (*reinterpret_cast<uint32_t*>(base + 0x04) > end) {
            invalid_param();
        }
        if (self == nullptr) {
            invalid_param();
        }
        if (it == end) {
            break;
        }
        if (it >= *reinterpret_cast<uint32_t*>(base + 0x08)) {
            invalid_param();
        }

        uint8_t* element = as_ptr(*reinterpret_cast<uint32_t*>(as_ptr(it)));
        uint8_t* sub = as_ptr(*reinterpret_cast<uint32_t*>(element + 0x234));
        uint8_t* vtbl = as_ptr(*reinterpret_cast<uint32_t*>(sub));
        auto fn = reinterpret_cast<VirtualFn>(
            static_cast<uintptr_t>(*reinterpret_cast<uint32_t*>(vtbl + 0xA4)));
        fn(sub, vec);

        if (it >= *reinterpret_cast<uint32_t*>(base + 0x08)) {
            invalid_param();
        }
        it += 4;
    }
}
} // namespace lift_004CC610

// [0x004C0280] sub_004C0280 (138 bytes)
namespace lift_004C0280 {
// Known callee 0x0046C3C0: DerivedException::DerivedException (constructs an ExceptionWithMessage-derived exception with a fixed message and installs its vtable).
extern void ext_0046C3C0(void* self);
// Known callee 0x0065F5E0: AdvXMLParser::Document::vfunc_1 (__thiscall: self in ECX, out pointer on stack; returns pointer to the filled string).
extern void* ext_0065F5E0(void* self, void* out);
// Known callee 0x006A6DD2: thunk to MSVCR80!_CxxThrowException (exception object + ThrowInfo 0x009DEC1C).
extern void ext_006A6DD2();
// IAT slots for MSVCP80 std::basic_string<char> copy-ctor (0x924FE0) and dtor (0x924FF4).
extern int mem_00924FE0;
extern int mem_00924FF4;

// @name Unknown::copyStringFromDocumentOrThrow
// @summary If the second argument is null, throws a DerivedException; otherwise copies the string produced by Document::vfunc_1 into the first argument and returns it.
// @field  none (no class-relative field offsets accessed)
void* __stdcall fn_004C0280(void* arg1, void* arg2) {
    if (arg2 == nullptr) {
        // Path B: build a DerivedException in a local and throw it.
        // Exception storage size is not recovered; 0x20 bytes is a placeholder for the stack slot at [esp+0x20].
        alignas(16) unsigned char exc[0x20] = {};
        ext_0046C3C0(exc);
        ext_006A6DD2();
        return nullptr; // not reached: _CxxThrowException does not return
    }

    // Path A: vfunc_1 fills a temporary std::string, which is copy-constructed
    // into arg1 (the asm's thiscall copy-ctor via IAT 0x924FE0), then destroyed
    // (IAT 0x924FF4). The result is arg1.
    using MsvcString = std::string;
    alignas(MsvcString) unsigned char tmp[sizeof(MsvcString)];
    void* src = ext_0065F5E0(arg2, tmp);
    new (arg1) MsvcString(*static_cast<MsvcString*>(src));
    reinterpret_cast<MsvcString*>(tmp)->~MsvcString();
    (void)&mem_00924FE0; // copy-ctor IAT slot (metadata only; std::string ops are native here)
    (void)&mem_00924FF4; // dtor IAT slot (metadata only)
    return arg1;
}
} // namespace lift_004C0280

// [0x004CDE30]
namespace lift_004CDE30 {
// @name sub_004CDE30
// @summary Destroys a vector of string pairs at +0x14, tidies a string vector at +0x04, and calls base destructor sub_0066AC80.
// @field Self +0x00 uint32_t field_0x00
// @field Self +0x04 void* field_0x04
// @field Self +0x18 uint32_t field_0x18
// @field Self +0x1C uint32_t field_0x1C
// @field Self +0x20 uint32_t field_0x20


void ext_0041DD40(uint32_t begin, uint32_t end);
void ext_006A5C5C(uint32_t ptr);
void __fastcall ext_00672D10(void* self);
void __fastcall ext_0066AC80(void* self);

void __fastcall fn_004CDE30(void* self) {
    uint32_t begin = lift_field<uint32_t>(self, 0x18);
    if (begin != 0) {
        uint32_t end = lift_field<uint32_t>(self, 0x1C);
        ext_0041DD40(begin, end);
        ext_006A5C5C(begin);
    }

    lift_field<uint32_t>(self, 0x18) = 0;
    lift_field<uint32_t>(self, 0x1C) = 0;
    lift_field<uint32_t>(self, 0x20) = 0;

    ext_00672D10(static_cast<uint8_t*>(self) + 0x04);
    ext_0066AC80(self);
}
} // namespace lift_004CDE30

// [0x004C21A0] sub_004C21A0 (142 bytes)
namespace lift_004C21A0 {
// Known callee 0x004C0350: CallDispatchThenInitPair (Calls DispatchSubcallByIndex(2, a2, saved ESI), then initDwordPair on a1 with (result, a2); returns a1.)
extern void* ext_004C0350(void* a1, void* out, uint32_t a2);
extern void ext_00493D90();
extern int mem_00925134;

// @name IterateEntriesDispatchVirtual
// @summary Walks a 28-byte-stride entry array from index until count; for each entry builds a DWORD pair via ext_004C0350, calls virtual slot 0 on self with it, and stops when the call returns false.
// @field Unknown +0x08 uint32_t field_0x08

namespace {
struct DwordPair {
    uint32_t first;
    uint32_t second;
};
}

// Calling convention: self = edi (vtable object), arg1 = container pointer (ebx/[esp+0x14]),
// index = starting byte offset (esi), stride 0x1C.
void fn_004C21A0(void* self, void* arg1, uint32_t index) {
    using VSlot0 = uint8_t(__thiscall*)(void*, uint32_t, uint32_t);

    (void)&mem_00925134;  // CRT invalid-parameter trap slot; diagnostic path only, not modeled.

    for (;;) {
        const uint32_t count = lift_field<uint32_t>(arg1, 0x08);
        if (index == count) {
            return;
        }
        if (index >= count) {
            // Invalid-parameter trap path in the original; not modeled.
            return;
        }

        DwordPair buf{};
        void* pairPtr = ext_004C0350(&buf, &buf, index);
        const DwordPair* pair = static_cast<const DwordPair*>(pairPtr);

        void** vtbl = *reinterpret_cast<void***>(self);
        VSlot0 slot0 = reinterpret_cast<VSlot0>(vtbl[0]);
        uint8_t keepGoing = slot0(self, pair->first, pair->second);

        ext_00493D90();

        if (keepGoing == 0) {
            return;
        }
        index += 0x1C;
    }
}
} // namespace lift_004C21A0

// [0x004C9860]
namespace lift_004C9860 {
// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00AE3DB8;
// Static object (global) whose address is returned; also the `this` passed to ext_004C94E0.
extern DWORD mem_00AE3D94;

// __thiscall: ECX = &mem_00AE3D94, no stack arguments.
extern void __thiscall ext_004C94E0(void* self);
// __cdecl: one stack argument (0x00918AE0), caller pops.
extern void ext_006A6C87(DWORD arg);

// @name initStaticObjectOnce_004C9860
// @summary One-time initializer for the static object at mem_00AE3D94: under a local SEH frame, runs ext_004C94E0 on the object and ext_006A6C87(0x918AE0) on first call, marks the guard bit, and returns the object's address.
void* fn_004C9860() {
    // Local SEH registration record: [0] = previous frame, [1] = handler (0x0088BD3E), [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x0088BD3Eu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00AE3DB8 & 1u) == 0) {
        mem_00AE3DB8 |= 1u;
        frame[2] = 0;
        ext_004C94E0(&mem_00AE3D94);
        ext_006A6C87(0x00918AE0u);
    }

    mem_fs_0 = frame[0];
    return &mem_00AE3D94;
}
} // namespace lift_004C9860

// [0x004CDEE0] sub_004CDEE0 (90 bytes)
namespace lift_004CDEE0 {
// Known callee 0x004CD9F0 (128B): invoked with the static object at 0x00AE4520 as `this`.
extern void __fastcall ext_004CD9F0(void* self);
// Known callee 0x006A6C87 (18B): called once with the immediate 0x00918C00 as its single argument.
extern void ext_006A6C87(void* arg);
extern int mem_00AE4544;
extern int mem_00AE4520;
extern int mem_00918C00;

// @name initStaticObjectOnce_004CDEE0
// @summary One-time initializer for the static object at 0x00AE4520, guarded by bit 0 of the flag dword at 0x00AE4544; runs ext_004CD9F0 on the object and registers 0x00918C00 via ext_006A6C87, then returns the object's address.
void* fn_004CDEE0(void) {
    if ((mem_00AE4544 & 1) == 0) {
        mem_00AE4544 |= 1;
        ext_004CD9F0(&mem_00AE4520);
        ext_006A6C87(&mem_00918C00);
    }
    return &mem_00AE4520;
}
} // namespace lift_004CDEE0

// [0x004C7270] sub_004C7270 (60 bytes)
namespace lift_004C7270 {
extern void ext_0066AC90(void* arg);
extern int mem_00925354;  // IAT: std::type_info::_name_internal_method
extern int mem_00924FE4;  // IAT: std::basic_string<char>::basic_string(const char*)
extern int mem_00A3A44C;  // global std::type_info object (used as `this`)
extern int mem_00B5CE94;  // __type_info_node pointer constant

// @name TypeInfoNameTempPassthrough_004C7270
// @summary Fetch the type_info name of the global type object, build a temporary std::string from it, pass the incoming argument to ext_0066AC90, and return that argument unchanged.
void* fn_004C7270(void* arg) {
    using NameInternalMethodFn = const char* (__thiscall*)(void* self, const void* node);
    using StringCtorFn = void (__thiscall*)(void* self, const char* s);

    auto name_internal = *reinterpret_cast<NameInternalMethodFn*>(&mem_00925354);
    const char* name = name_internal(reinterpret_cast<void*>(&mem_00A3A44C),
                                     reinterpret_cast<const void*>(&mem_00B5CE94));

    // Temporary std::string (MSVC layout, 28 bytes), constructed from the name.
    unsigned char str[28] = {};
    auto string_ctor = *reinterpret_cast<StringCtorFn*>(&mem_00924FE4);
    string_ctor(static_cast<void*>(str), name);

    ext_0066AC90(arg);
    return arg;
}
} // namespace lift_004C7270

// [0x004C94E0] sub_004C94E0 (128 bytes)
namespace lift_004C94E0 {
// Callee 0x0040ECB0: thiscall(this = global 0xB5962C, arg) -> void; callee pops its 1 stack arg.
extern void __thiscall ext_0040ECB0(void* self, void* arg);
// Known callee 0x004C7270: TypeInfoNameTempPassthrough_004C7270 (builds a temp std::string in arg and returns arg).
extern void* ext_004C7270(void* arg);
// IAT slot: MSVCP80 std::string destructor (called as thiscall with the string as this).
extern uint32_t mem_00924FF4;

using StrDtorFn = void(__thiscall*)(void* self);

// @name InitObjectAndRegisterTypeName
// @class UnknownClass_004C94E0
// @summary Stamps the object's vtable (0x00945F24), clears six fields, builds a temp std::string from the type_info name, passes it to sub_0040ECB0 on global 0xB5962C, destroys the temp and returns self.
// @field UnknownClass_004C94E0 +0x00 uint32_t vtable
// @field UnknownClass_004C94E0 +0x08 uint32_t field_0x08
// @field UnknownClass_004C94E0 +0x0c uint32_t field_0x0C
// @field UnknownClass_004C94E0 +0x10 uint32_t field_0x10
// @field UnknownClass_004C94E0 +0x18 uint32_t field_0x18
// @field UnknownClass_004C94E0 +0x1c uint32_t field_0x1C
// @field UnknownClass_004C94E0 +0x20 uint32_t field_0x20
void* fn_004C94E0(void* self) {
    // Initialise the object: vtable pointer, then zero the accessed fields.
    lift_field<uint32_t>(self, 0x00) = 0x00945F24u;
    lift_field<uint32_t>(self, 0x08) = 0;
    lift_field<uint32_t>(self, 0x0C) = 0;
    lift_field<uint32_t>(self, 0x10) = 0;
    lift_field<uint32_t>(self, 0x18) = 0;
    lift_field<uint32_t>(self, 0x1C) = 0;
    lift_field<uint32_t>(self, 0x20) = 0;

    // Temporary std::string (MSVCP80 layout, 0x1C bytes) filled by sub_004C7270.
    unsigned char tmp_str[0x1C] = {};
    void* str = ext_004C7270(tmp_str);

    // Global object at 0x00B5962C is the `this` for sub_0040ECB0.
    ext_0040ECB0(reinterpret_cast<void*>(static_cast<uintptr_t>(0x00B5962Cu)), str);

    reinterpret_cast<StrDtorFn>(static_cast<uintptr_t>(mem_00924FF4))(tmp_str);
    return self;
}
} // namespace lift_004C94E0

// [0x004CA3E0] sub_004CA3E0 (60 bytes)
namespace lift_004CA3E0 {
extern void ext_0066AC90(void* self, std::string name);
extern int mem_00925354;
extern int mem_00924FE4;
extern int mem_00A2FBBC;
extern int mem_00B5CE94;

// @name Lifted_004CA3E0
// @summary Gets the decorated type name of the type_info at mem_00A2FBBC, copies it to a std::string, passes it with self to ext_0066AC90, and returns self.
void* fn_004CA3E0(void* self) {
    using NameInternalFn = const char* (__thiscall*)(void* thisptr, void* node);
    // Import thunk slot for type_info::_name_internal_method (IAT entry at mem_00925354).
    auto name_internal = *reinterpret_cast<NameInternalFn*>(&mem_00925354);
    const char* raw = name_internal(reinterpret_cast<void*>(&mem_00A2FBBC),
                                    reinterpret_cast<void*>(&mem_00B5CE94));
    // Original asm constructs std::string(const char*) via import thunk mem_00924FE4;
    // std::string's constructor here replaces that call.
    (void)&mem_00924FE4;
    std::string name(raw);
    ext_0066AC90(self, name);
    return self;
}
} // namespace lift_004CA3E0

// [0x004CDC80]
namespace lift_004CDC80 {
extern void* ext_004CADD0();
extern void __thiscall ext_00475960(void* self, void** slot, void* str, int flag);
extern void* mem_00924FE4;  // MSVCP80 basic_string(const char*) import slot
extern void* mem_00924FF4;  // MSVCP80 ~basic_string() import slot

using string_ctor_fn = void(__thiscall*)(void* self, const char* s);
using string_dtor_fn = void(__thiscall*)(void* self);

// @name CallWithNamedString
// @class <unknown>
// @summary Builds a temporary std::string from the argument, calls ext_00475960 on the object reached through this[0] with the global object from ext_004CADD0, then destroys the string.
// @field <unknown> +0x00 void* field_0x00
void __thiscall fn_004CDC80(void* self, const char* name) {
    void* obj = ext_004CADD0();

    unsigned char str[0x1C];
    (*reinterpret_cast<string_ctor_fn*>(&mem_00924FE4))(str, name);

    ext_00475960(lift_field<void*>(self, 0x00), &obj, str, 1);

    (*reinterpret_cast<string_dtor_fn*>(&mem_00924FF4))(str);
}
} // namespace lift_004CDC80

// [0x004CD9F0] sub_004CD9F0 (128 bytes)
namespace lift_004CD9F0 {
// Known callee 0x0040ECB0: sub_0040ECB0 (thiscall, ecx = global at mem_00B5962C, one stack arg, callee cleans stack)
extern void __thiscall ext_0040ECB0(void* self, void* arg);
// Known callee 0x004CA3E0: Lifted_004CA3E0 (Gets the decorated type name of the type_info at mem_00A2FBBC, copies it to a std::string, passes it with self to ext_0066AC90, and returns self.)
extern void* __cdecl ext_004CA3E0(void* self);
// MSVCP80 std::string destructor, loaded via IAT slot at 0x924FF4
extern int mem_00924FF4;
// Vtable for the object at this+0x00
extern int mem_00947348;
// Global object passed as ecx to ext_0040ECB0
extern int mem_00B5962C;
// Guard/SEH cookie region (SEH frame setup removed; no reference kept)

using StringDtorFn = void(__thiscall*)(void*);

// @name Unknown::InitTypeNameRecord_004CD9F0
// @class Unknown
// @summary Zeroes the record fields of this, installs its vtable, builds the decorated type name string of the type_info at mem_00A2FBBC, forwards it to the global object's member at mem_00B5962C, destroys the temporary string, and returns this.
// @field Unknown +0x00 void* vftable
// @field Unknown +0x08 uint32_t field_0x08
// @field Unknown +0x0C uint32_t field_0x0C
// @field Unknown +0x10 uint32_t field_0x10
// @field Unknown +0x18 uint32_t field_0x18
// @field Unknown +0x1C uint32_t field_0x1C
// @field Unknown +0x20 uint32_t field_0x20
void* fn_004CD9F0(void* self) {
    // Install vtable.
    lift_field<void*>(self, 0x00) = &mem_00947348;

    // Zero the record fields.
    lift_field<uint32_t>(self, 0x08) = 0;
    lift_field<uint32_t>(self, 0x0C) = 0;
    lift_field<uint32_t>(self, 0x10) = 0;
    lift_field<uint32_t>(self, 0x18) = 0;
    lift_field<uint32_t>(self, 0x1C) = 0;
    lift_field<uint32_t>(self, 0x20) = 0;

    // Temporary std::string storage (sizeof(std::string) == 0x18 under MSVC 2005 CRT).
    alignas(8) unsigned char str_buf[0x18];

    // Callee constructs the decorated type name into str_buf and returns it.
    void* str = ext_004CA3E0(str_buf);

    ext_0040ECB0(&mem_00B5962C, str);

    // Destroy the temporary string through the IAT-resolved destructor.
    (*reinterpret_cast<StringDtorFn*>(&mem_00924FF4))(str_buf);

    return self;
}
} // namespace lift_004CD9F0

// [0x004CDD00] sub_004CDD00 (114 bytes)
namespace lift_004CDD00 {
// Known callee 0x004CAE30: initStaticObjectOnce_004CAE30 (One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.)
extern void* ext_004CAE30();
// Callee 0x00475960 (211B, unlifted): thiscall-style helper taking (this, const std::string&, void*& slot, int flag).
extern void ext_00475960(void* thisPtr, std::string* name, void** slot, int flag);
// MSVCP80 std::string ctor/dtor import slots (0x924FE4 / 0x924FF4); replaced by std::string below.
extern int mem_00924FE4;
extern int mem_00924FF4;

// @name Unknown::ForwardStringToStaticObjectChild_004CDD00
// @summary Resolves the static object via ext_004CAE30, builds a std::string from the argument, and forwards it with the object slot to ext_00475960 using the first field of self as the receiver.
// @field Unknown +0x00 void* field_0x00
void fn_004CDD00(void* self, const char* name) {
    (void)&mem_00924FE4;  // std::string ctor import (replaced by std::string)
    (void)&mem_00924FF4;  // std::string dtor import (replaced by std::string dtor)
    void* obj = ext_004CAE30();
    std::string tmp(name);
    ext_00475960(lift_field<void*>(self, 0), &tmp, &obj, 1);
}
} // namespace lift_004CDD00

// [0x004C4070] sub_004C4070 (140 bytes)
namespace lift_004C4070 {
void* __thiscall ext_00474F00(void* self, void* scratch, uint32_t arg2);
uint32_t __thiscall ext_00476360(void* self, void* scratch);
void ext_00662610(void* scratch, const char* literal);
extern uint32_t mem_00924FD4;
extern uint32_t mem_00924FF4;
extern const char mem_00A32860[];

// @name LiteralKeyedLookup
// @class UnknownClass
// @summary Builds a scratch string from a literal, forwards it with arg2 to ext_00474F00 (+0x18) when arg2 is nonzero, stores ext_00476360(+0x08, scratch) into *out, destroys the scratch string and returns out.
// @field UnknownClass +0x08 uint8_t field_0x08
// @field UnknownClass +0x18 uint8_t field_0x18
uint32_t* __thiscall fn_004C4070(uint8_t* self, uint32_t* out, uint32_t arg2) {
    alignas(8) uint8_t scratch[0x1C] = {};
    ext_00662610(scratch, mem_00A32860);

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

// [0x004CA220] sub_004CA220 (140 bytes)
namespace lift_004CA220 {
// Callee 0x00662610 (sub_00662610): receives self in ECX, builds a string from a literal.
extern void ext_00662610(void* self, void* out, const char* literal);
// Callee 0x00474F00 (sub_00474F00): thiscall on self+0x18, (string*, arg2); returns a string* in EAX.
extern void* ext_00474F00(void* self, void* str, uint32_t arg2);
// Callee 0x00476360 (sub_00476360): thiscall on self+0x08, (string*); returns a 32-bit value in EAX.
extern uint32_t ext_00476360(void* self, void* str);
// Import slots: mem_00924FD4 = std::string::operator=(const char*), mem_00924FF4 = std::string::~string().
extern int mem_00924FD4;
extern int mem_00924FF4;

// @name BuildKeyString_004CA220
// @class Unknown
// @summary Builds a std::string from a literal, optionally reassigns it through self+0x18 when arg2 is nonzero, stores ext_00476360(self+0x08, str) into *out, destroys the string, and returns out.
// @field Unknown +0x08 uint8_t field_0x08
// @field Unknown +0x18 uint8_t field_0x18
void* fn_004CA220(void* self, uint32_t* out, uint32_t arg2) {
    // SEH frame setup/teardown (fs:[0] push/pop and try-state slot) is boilerplate and dropped.

    // Local std::string, passed by address to the callees.
    alignas(16) unsigned char str[0x18];

    // Construct the string from the literal at 0x00A3A828 (ECX still holds self).
    ext_00662610(self, str, reinterpret_cast<const char*>(uintptr_t{0x00A3A828}));

    if (arg2 != 0) {
        // Reassign through the subobject at self+0x18.
        void* assigned = ext_00474F00(static_cast<unsigned char*>(self) + 0x18, str, arg2);
        using StrAssignFn = void* (*)(void* self_str, const void* src);
        auto assign = reinterpret_cast<StrAssignFn>(static_cast<uintptr_t>(static_cast<uint32_t>(mem_00924FD4)));
        assign(assigned, str);
    }

    // Compute the result from the subobject at self+0x08 and store it through out.
    const uint32_t result = ext_00476360(static_cast<unsigned char*>(self) + 0x08, str);
    *out = result;

    // Destroy the local string.
    using StrDtorFn = void (*)(void* self_str);
    auto dtor = reinterpret_cast<StrDtorFn>(static_cast<uintptr_t>(static_cast<uint32_t>(mem_00924FF4)));
    dtor(str);

    return out;
}
} // namespace lift_004CA220

// [0x004C89D0]
namespace lift_004C89D0 {
// @name DynamicCastCloneOrThrow_004C89D0
// @summary Dynamically cast input object to target type, allocate and copy-construct a 0x14-byte wrapper, or throw a type-mismatch string exception.
// @field Wrapper +0x00 uint32_t vtable
// @field Wrapper +0x04 uint32_t inner_member
// @field Wrapper +0x08 uint32_t field_0x08
// @field Wrapper +0x0C uint32_t field_0x0C
// @field Wrapper +0x10 uint32_t field_0x10


    void* ext_006A6E9E(void* inptr, int32_t vfDelta, void* srcType, void* targetType, int32_t isReference);
    void* ext_006A5C62(uint32_t size);
    void* __thiscall ext_004A6970(void* self, const void* src);
    void* ext_004C7270(void* out_str);
    void* __thiscall ext_00403560(void* self, const void* src);
    void ext_006A6DD2(void* pExceptionObject, void* pThrowInfo);

    extern int mem_00924FE4;
    extern int mem_00924FD0;

typedef void* (__thiscall *StdStringCtorFn)(void* self, const char* s);
typedef void* (*StdStringConcatFn)(void* out, const void* lhs, const void* rhs);

extern void* fn_004C89D0(void* arg0) {
    if (arg0 == nullptr) {
        void* obj = ext_006A5C62(0x14);
        if (obj == nullptr) {
            return nullptr;
        }
        lift_field<uint32_t>(obj, 0x08) = 0;
        lift_field<uint32_t>(obj, 0x0C) = 0;
        lift_field<uint32_t>(obj, 0x10) = 0;
        lift_field<uint32_t>(obj, 0x00) = 0x00945C40;
        return obj;
    }

    void* casted = ext_006A6E9E(arg0, 0, reinterpret_cast<void*>(0x00A3A44C), reinterpret_cast<void*>(0x00A3A6C8), 0);
    if (casted != nullptr) {
        void* obj = ext_006A5C62(0x14);
        if (obj == nullptr) {
            return nullptr;
        }
        lift_field<uint32_t>(obj, 0x00) = 0x00945C38;
        ext_004A6970(static_cast<char*>(obj) + 0x04, static_cast<const char*>(casted) + 0x04);
        lift_field<uint32_t>(obj, 0x00) = 0x00945C40;
        return obj;
    }

    char type_name_str[0x20];
    void* type_str = ext_004C7270(type_name_str);

    char prefix_str[0x20];
    auto str_ctor = reinterpret_cast<StdStringCtorFn>(static_cast<uintptr_t>(mem_00924FE4));
    void* prefix_res = str_ctor(prefix_str, reinterpret_cast<const char*>(0x0092F9D4));

    char combined_str[0x20];
    auto str_concat = reinterpret_cast<StdStringConcatFn>(static_cast<uintptr_t>(mem_00924FD0));
    void* msg_str = str_concat(combined_str, prefix_res, type_str);

    char exc_obj[0x28];
    ext_00403560(exc_obj, msg_str);
    ext_006A6DD2(exc_obj, reinterpret_cast<void*>(0x009D47A4));
    return nullptr;
}
} // namespace lift_004C89D0

// [0x004C98C0]
namespace lift_004C98C0 {
// @name findAndInvokeFactory_004C98C0
// @summary Looks up a factory/creator entry by key in the static registry, invokes it with arg2 if found, or throws/returns nullptr if not found.
// @field StaticRegistry +0x04 void* lookupTable


extern void* ext_004C9860(void);
extern void* __thiscall ext_00505D50(void* self, void* key);
extern void* ext_004C7270(void* arg);
extern void ext_0066AC90(void* arg);
extern void* __thiscall ext_004C6F60(void* self, ...);
extern void* __thiscall ext_004C7200(void* self, const void* other);
extern void ext_006A6DD2(void);

extern void* mem_00924FE0;

using FactoryFn = void* (*)(void*);
using StringCopyCtor = void* (__thiscall*)(void* self, const void* other);

void* fn_004C98C0(void* key, void* arg2, uint8_t throwIfNotFound) {
    void* registry = ext_004C9860();
    void* entry = ext_00505D50(static_cast<char*>(registry) + 0x04, key);
    if (entry != nullptr) {
        FactoryFn fn = *reinterpret_cast<FactoryFn*>(entry);
        return fn(arg2);
    }

    if (throwIfNotFound == 0) {
        return nullptr;
    }

    uint8_t keyCopy[0x1C]{};
    reinterpret_cast<StringCopyCtor>(mem_00924FE0)(keyCopy, key);

    uint8_t typeNameBuf[0x1C]{};
    uint8_t typeArgBuf[0x1C]{};
    ext_004C7270(typeArgBuf);
    ext_0066AC90(typeNameBuf);

    uint8_t excTemp[0x60]{};
    void* excObj = ext_004C6F60(excTemp);

    uint8_t excCopy[0x60]{};
    ext_004C7200(excCopy, excObj);
    ext_006A6DD2();

    return nullptr;
}
} // namespace lift_004C98C0

// [0x004CE420]
namespace lift_004CE420 {
extern void __cdecl ext_00662610(void* outStr, const char* src);
extern void* __fastcall ext_00474F00(void* self, void* edx, void* key);
extern uint32_t __fastcall ext_00476360(void* self, void* edx, void* key);
extern uint32_t mem_00924FD4;  // IAT: std::string::operator=(const char*)
extern uint32_t mem_00924FF4;  // IAT: std::string::~basic_string()

typedef void* (__thiscall* StrAssignFn)(void* self, const char* s);
typedef void (__thiscall* StrDtorFn)(void* self);

// @name Unknown::SetStringAndLookup
// @class Unknown
// @summary Builds a temp string from a constant, optionally assigns value into map at +0x18 for it, then looks it up in +0x08 and stores the result in *out.
// @field Unknown +0x08 uint8_t field_0x08 (container, ext_00476360)
// @field Unknown +0x18 uint8_t field_0x18 (container, ext_00474F00)
void __fastcall fn_004CE420(void* self, void* /*edx*/, uint32_t* out, const char* value) {
    alignas(4) uint8_t tmp[0x1c];
    ext_00662610(tmp, reinterpret_cast<const char*>(0x00A3B654));
    if (value != nullptr) {
        void* slot = ext_00474F00(static_cast<uint8_t*>(self) + 0x18, nullptr, tmp);
        reinterpret_cast<StrAssignFn>(*reinterpret_cast<uintptr_t*>(&mem_00924FD4))(slot, value);
    }
    *out = ext_00476360(static_cast<uint8_t*>(self) + 0x08, nullptr, tmp);
    reinterpret_cast<StrDtorFn>(*reinterpret_cast<uintptr_t*>(&mem_00924FF4))(tmp);
}
} // namespace lift_004CE420

// [0x004CDF40] sub_004CDF40 (246 bytes)
namespace lift_004CDF40 {
// Known callee 0x004C6F60: sub_004C6F60 (397B, no lifted name)
extern void ext_004C6F60();
// Known callee 0x004C7200: StringExceptionWithMember::copy_ctor (Copy constructor: copies the base exception, sets the vtable, and copy-constructs two std::string members.)
extern void ext_004C7200();
// Known callee 0x004CA3E0: Lifted_004CA3E0 (Gets the decorated type name of the type_info at mem_00A2FBBC, copies it to a std::string, passes it with self to ext_0066AC90, and returns self.)
extern void ext_004CA3E0();
// Known callee 0x004CDEE0: initStaticObjectOnce_004CDEE0 (One-time initializer for the static object at 0x00AE4520, guarded by bit 0 of the flag dword at 0x00AE4544; runs ext_004CD9F0 on the object and registers 0x00918C00 via ext_006A6C87, then returns the object's address.)
extern void ext_004CDEE0();
// Known callee 0x00505D50: sub_00505D50 (Finds an element by key and returns a pointer to offset 0x1C of the element, or nullptr if not found.)
extern void ext_00505D50();
// Known callee 0x0066AC90: sub_0066AC90 (115B, no lifted name)
extern void ext_0066AC90();
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk forwarding to MSVCR80!_CxxThrowException.)
extern void ext_006A6DD2();
// IAT slot 0x00924FE0: MSVCP80 std::string copy constructor
extern int mem_00924FE0;

// @name dispatchKeyedOrThrow_004CDF40
// @summary Looks up key in the static registry; if found, calls the element's stored function pointer with value; otherwise, if flag is set, builds a decorated StringExceptionWithMember and throws it.
// @field UnknownStaticObject +0x04 void* field_0x04
// @field UnknownRegistryElement +0x00 void* field_0x00
void fn_004CDF40(void* key, void* value, bool flag) {
    // Static object address (returned in eax); registry lives at +0x04.
    void* obj = reinterpret_cast<void* (*)()>(&ext_004CDEE0)();
    void* base = static_cast<unsigned char*>(obj) + 0x04;

    void* elem = reinterpret_cast<void* (__thiscall*)(void*, void*)>(&ext_00505D50)(base, key);
    if (elem != nullptr) {
        // Original: mov edx,[eax]; push ecx; call edx  (ecx == value, pushed as the one argument)
        auto target = *reinterpret_cast<void (__thiscall**)(void*, void*)>(elem);
        target(value, value);
        return;
    }

    if (!flag) {
        return;
    }

    // Copy the key into a temporary std::string via the MSVCP80 IAT slot.
    unsigned char msg[0x1c];
    reinterpret_cast<void (__thiscall*)(void*, const void*)>(
        static_cast<uintptr_t>(mem_00924FE0))(msg, key);

    // Decorated type name of the type_info; result copied and passed to ext_0066AC90.
    unsigned char decorated[0x1c];
    reinterpret_cast<void* (*)(void*)>(&ext_004CA3E0)(decorated);
    reinterpret_cast<void (*)(void*)>(&ext_0066AC90)(msg);

    // Build the source exception object and copy-construct the thrown exception from it.
    unsigned char src_obj[0x28];
    void* src = reinterpret_cast<void* (__thiscall*)(void*)>(&ext_004C6F60)(src_obj);
    unsigned char exc[0x40];
    reinterpret_cast<void* (__thiscall*)(void*, void*)>(&ext_004C7200)(exc, src);

    // _CxxThrowException(exc, &ThrowInfo@0x009E9404); does not return.
    reinterpret_cast<void (*)(void*, const void*)>(&ext_006A6DD2)(
        exc, reinterpret_cast<const void*>(uintptr_t{0x009E9404}));
}
} // namespace lift_004CDF40

// [0x004C8B30]
namespace lift_004C8B30 {
extern void ext_006A6E9E(void); // __RTDynamicCast
extern void ext_006A5C62(void); // operator new (MFC80 ord 762)
extern void ext_004A6970(void); // thiscall copy-ctor of +4 member
extern void ext_004C7270(void); // type name temp passthrough
extern void ext_00403560(void); // StringExceptionWithMember::ctor
extern void ext_006A6DD2(void); // _CxxThrowException
extern int mem_00924FE4;        // IAT std::string(const char*)
extern int mem_00924FD0;        // IAT std::operator+(string,const char*)
extern int mem_00A3A44C;        // source type descriptor
extern int mem_00A3A6EC;        // target type descriptor

// @name CloneFromBase_004C8B30
// @summary Allocate a 0x14-byte object (vtable 0x945C48); if a source is given, dynamic_cast it and copy its +4 member, throwing on bad cast.
// @field Obj +0x00 void* vtable
// @field Obj +0x04 int field_0x04
// @field Obj +0x08 int field_0x08
// @field Obj +0x0C int field_0x0C
// @field Obj +0x10 int field_0x10
extern void* fn_004C8B30(void* src)
{
    typedef void* (*new_t)(unsigned);
    new_t op_new = (new_t)&ext_006A5C62;
    if (src == nullptr) {
        uint8_t* p = (uint8_t*)op_new(0x14);
        if (!p) return nullptr;
        *(uint32_t*)(p + 0x08) = 0;
        *(uint32_t*)(p + 0x0C) = 0;
        *(uint32_t*)(p + 0x10) = 0;
        *(uint32_t*)(p + 0x00) = 0x945C48u;
        return p;
    }
    typedef void* (*dc_t)(void*, int, void*, void*, int);
    uint8_t* d = (uint8_t*)((dc_t)&ext_006A6E9E)(src, 0, &mem_00A3A44C, &mem_00A3A6EC, 0);
    if (d) {
        uint8_t* p = (uint8_t*)op_new(0x14);
        if (!p) return nullptr;
        *(uint32_t*)p = 0x945C38u;
        typedef void (__thiscall *cc_t)(void*, void*);
        ((cc_t)&ext_004A6970)(p + 4, d + 4);
        *(uint32_t*)p = 0x945C48u;
        return p;
    }
    uint8_t tmpName[0x20], s1[0x20], s2[0x20], exc[0x40];
    void* name = ((void* (*)(void*))&ext_004C7270)(tmpName);
    typedef void* (__thiscall *sctor_t)(void*, const char*);
    void* a = ((sctor_t)(uintptr_t)mem_00924FE4)(s1, (const char*)0x92F9D4);
    typedef void* (*cat_t)(void*, void*, void*);
    void* b = ((cat_t)(uintptr_t)mem_00924FD0)(s2, a, name);
    typedef void* (__thiscall *ector_t)(void*, void*);
    ((ector_t)&ext_00403560)(exc, b);
    ((void (*)(void*, void*))&ext_006A6DD2)(exc, (void*)0x9D47A4);
    return nullptr;
}
} // namespace lift_004C8B30

// [0x004C8C90] sub_004C8C90 (347 bytes)
namespace lift_004C8C90 {
// Known callee 0x006A6E9E: thunk_MSVCR80___RTDynamicCast (IAT jump thunk forwarding to MSVCR80!__RTDynamicCast.)
extern void* ext_006A6E9E(void* v, ptrdiff_t vfOffset, void* srcType, void* dstType, int isReference);
// Known callee 0x006A5C62: thunk_MFC80_ord_762 (IAT jump thunk forwarding to MFC80!ord_762 == operator new.)
extern void* ext_006A5C62(size_t size);
// Known callee 0x004A6970: sub_004A6970 (152B) - base-subobject constructor, this = obj+4, arg = cast+4.
extern void ext_004A6970(void* self, void* arg);
// Known callee 0x004C7270: TypeInfoNameTempPassthrough_004C7270 (fills a temp std::string from the type_info name and returns its argument unchanged.)
extern void* ext_004C7270(void* arg);
// Known callee 0x00403560: StringExceptionWithMember::ctor (Construct an exception-style object from a std::string; returns self.)
extern void* ext_00403560(void* self, const void* src);
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk forwarding to MSVCR80!_CxxThrowException.)
extern void ext_006A6DD2(void* exceptionObject, const void* throwInfo);

// IAT slots (MSVCP80 std::string ctor and operator+), called through the slot.
extern int mem_00924FE4;   // basic_string<char>::basic_string(const char*)  (thiscall)
extern int mem_00924FD0;   // operator+(const string&, const string&)          (cdecl, hidden return)

// Data / rdata addresses referenced by the original code.
extern int mem_00A3A44C;   // type_info used as source type for the dynamic cast
extern int mem_00A3A724;   // type_info used as target type for the dynamic cast
extern int mem_0092F9D4;   // const char* message prefix for the exception text
extern int mem_009D47A4;   // _ThrowInfo for the thrown exception
extern int mem_00945C38;   // vtable: intermediate (during base ctor)
extern int mem_00945C50;   // vtable: final class vtable

// @name MakeCastObjectOrThrow
// @class EHObject
// @summary If arg is null return a zeroed 0x14-byte EHObject; otherwise dynamic-cast arg and wrap it in a new EHObject, or throw a std::string-message exception when the cast fails.
// @field EHObject +0x00 void* vtable
// @field EHObject +0x04 void* base_subobject
// @field EHObject +0x08 void* field_0x08
// @field EHObject +0x0C void* field_0x0C
// @field EHObject +0x10 void* field_0x10
void* fn_004C8C90(void* arg) {
    if (arg == nullptr) {
        auto* obj = static_cast<unsigned char*>(ext_006A5C62(0x14));
        if (obj == nullptr) {
            return nullptr;
        }
        *reinterpret_cast<void**>(obj + 0x08) = nullptr;
        *reinterpret_cast<void**>(obj + 0x0C) = nullptr;
        *reinterpret_cast<void**>(obj + 0x10) = nullptr;
        *reinterpret_cast<void**>(obj) = reinterpret_cast<void*>(&mem_00945C50);
        return obj;
    }

    void* cast = ext_006A6E9E(arg, 0,
                              reinterpret_cast<void*>(&mem_00A3A44C),
                              reinterpret_cast<void*>(&mem_00A3A724), 0);
    if (cast == nullptr) {
        // Cast failed: build "<prefix><type name>" as a std::string and throw it.
        using StrCtorFn = void*(__thiscall*)(void* self, const char* s);
        using ConcatFn  = void*(__cdecl*)(void* ret, void* lhs, void* rhs);

        alignas(8) unsigned char typeName[0x20] = {};  // esp+0x14
        void* typeNameStr = ext_004C7270(typeName);

        alignas(8) unsigned char prefix[0x20] = {};    // esp+0x34
        auto strCtor = *reinterpret_cast<StrCtorFn*>(&mem_00924FE4);
        void* prefixStr = strCtor(prefix, reinterpret_cast<const char*>(&mem_0092F9D4));

        alignas(8) unsigned char joined[0x20] = {};    // esp+0x54
        auto concat = *reinterpret_cast<ConcatFn*>(&mem_00924FD0);
        void* joinedStr = concat(joined, prefixStr, typeNameStr);

        alignas(8) unsigned char excObj[0x20] = {};    // esp+0x6c
        ext_00403560(excObj, joinedStr);
        ext_006A6DD2(excObj, reinterpret_cast<const void*>(&mem_009D47A4));
        return nullptr;  // _CxxThrowException does not return
    }

    auto* obj = static_cast<unsigned char*>(ext_006A5C62(0x14));
    if (obj == nullptr) {
        return nullptr;
    }
    *reinterpret_cast<void**>(obj) = reinterpret_cast<void*>(&mem_00945C38);
    ext_004A6970(obj + 0x04, static_cast<unsigned char*>(cast) + 0x04);
    *reinterpret_cast<void**>(obj) = reinterpret_cast<void*>(&mem_00945C50);
    return obj;
}
} // namespace lift_004C8C90

// [0x004C34B0] sub_004C34B0 (211 bytes)
namespace lift_004C34B0 {
// Known callee 0x004142E0: sub_004142E0 (302B), thiscall(obj, arg); called only on the throw path.
extern void __thiscall ext_004142E0(void* self, const void* arg);
// Known callee 0x004276B0: StdStringCopyConstruct (cdecl copy-construct std::string at dst from src; returns dst).
extern void* ext_004276B0(void* dst, const void* src);
// Known callee 0x004C1740: InitOnceGlobalString_004C1740 (cdecl, no args; returns address of the global string).
extern void* ext_004C1740(void);
// Known callee 0x005CD120: Vector::InsertSortedUnique_005CD120 (thiscall(self, value); returns true if inserted).
extern bool __thiscall ext_005CD120(void* self, const void* value);
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (forwards to _CxxThrowException(obj, ThrowInfo)).
extern void ext_006A6DD2(void* exc_object, const void* throw_info);
// MSVCP80 IAT slots: std::string copy constructor and destructor.
extern int mem_00924FE0;
extern int mem_00924FF4;
// ThrowInfo for the exception thrown on the failure path.
extern int mem_009D1278;

// @name Vector::InsertSortedUniqueOrThrow_004C34B0
// @class Vector
// @summary Inserts a copy of a std::string into the sorted vector; returns true if inserted. If not inserted and flag is set, throws an exception built from *code_arg.
extern bool __thiscall fn_004C34B0(void* self, const void* str_arg, const uint32_t* code_arg, uint8_t flag) {
    using CopyCtorFn = void (*)(void*, const void*);
    using DtorFn = void (*)(void*);

    alignas(8) uint8_t str_tmp[28];   // temporary std::string copy of *str_arg used for the insert
    alignas(8) uint8_t str_copy[28];  // copy of *str_arg kept alive on the throw path
    alignas(8) uint8_t exc_obj[28];   // scratch 'this' passed to ext_004142E0
    uint32_t exc_value;               // 4-byte payload of the thrown exception

    (*reinterpret_cast<CopyCtorFn*>(&mem_00924FE0))(str_tmp, str_arg);
    exc_value = *code_arg;

    const bool inserted = ext_005CD120(self, str_tmp);

    (*reinterpret_cast<DtorFn*>(&mem_00924FF4))(str_tmp);

    if (inserted) {
        return true;
    }
    if (flag == 0) {
        return false;
    }

    ext_004276B0(str_copy, str_arg);
    void* global_str = ext_004C1740();
    ext_004142E0(exc_obj, global_str);
    ext_006A6DD2(&exc_value, &mem_009D1278);
    // Unreachable: _CxxThrowException does not return.
    return false;
}
} // namespace lift_004C34B0
