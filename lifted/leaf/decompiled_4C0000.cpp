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

// [0x004CFFE0] sub_004CFFE0 (34 bytes)
namespace lift_004CFFE0 {
extern const char mem_00947AC0[];

// @name sub_004CFFE0
// @summary Auto-lifted identical-shape clone of 0x00622380 (NMData::SkeletalCalibrationVariables::vfunc_28).
void* fn_004CFFE0(void* self, void* dst, void* arg2) {
    (void)self;
    (void)arg2;
    new (dst) std::string(mem_00947AC0);
    return dst;
}
} // namespace lift_004CFFE0

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

// [0x004C4390]
namespace lift_004C4390 {
// @name ResetStringAndFlag
// @summary Re-initializes a std::string at offset 0, clears it, and zeroes the bool flag at +0x1c.
// @field Unknown +0x00 std::string str
// @field Unknown +0x1C bool flag
void fn_004C4390(void* self) {
    // Construct the string in place (original: MSVCP80 basic_string ctor), then clear it
    // (original: basic_string::clear).
    auto* str = new (self) std::string();
    str->clear();
    // Original: mov byte ptr [esi + 0x1c], al  (al == 0)
    lift_field<uint8_t>(self, 0x1C) = 0;
}
} // namespace lift_004C4390

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

// [0x004CE7B0]
namespace lift_004CE7B0 {
extern std::string mem_00AE51C8[7];
extern std::string mem_00AE5290[7];

// @name StringTableLookup_004CE7B0
// @summary Returns the index of the first entry in two 7-element std::string tables that equals the key string (0 if none match).
int __stdcall fn_004CE7B0(const std::string* key) {
    for (int i = 0; i < 7; ++i) {
        if (*key == mem_00AE51C8[i]) {
            return i;
        }
        if (*key == mem_00AE5290[i]) {
            return i;
        }
    }
    return 0;
}
} // namespace lift_004CE7B0

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
