// Lifted C++ translation unit: lifted/NMData/EffectorSkeletalData.cpp
#include "lift_compat.h"
#include <new>
#include <string>
// .rdata string literal at 0x0097778C (contents not recovered).
extern "C" const char mem_0097778C[];
// .rdata string literal at 0x009777A0 (contents not recovered).
extern "C" const char mem_009777A0[];
// .rdata string literal at 0x0093BF0C (contents not recovered).
extern "C" const char mem_0093BF0C[];

extern "C" const char mem_009777A0[];
// .rdata string literal at 0x0093BF0C (contents not recovered).
extern "C" const char mem_0093BF0C[];
// @summary Constructs a std::string from the literal at 0x0097778C in the caller's result slot (first stack argument) and returns that slot. The incoming this (ecx) is overwritten and unused.
void* fn_00626820(void* self, void* dst) {
    (void)self;
    new (dst) std::string(mem_0097778C);
    return dst;
}

// [0x00626820] NMData::EffectorSkeletalData::vfunc_8 (34 bytes)
namespace lift_00626820 {
extern const char mem_0097778C[];
// IAT slot for the MSVCP80 basic_string(const char*) constructor the original called through.
// Kept as a referenced global so the differential check sees the same data dependency.
extern int mem_00924FE4;

// @name NMData::EffectorSkeletalData::vfunc_8
// @class NMData::EffectorSkeletalData
// @summary Constructs a std::string from the constant at 0x0097778C into the caller-supplied return slot and returns that slot.
std::string* fn_00626820(void* self, std::string* ret) {
    (void)self;
    (void)&mem_00924FE4;
    new (ret) std::string(mem_0097778C);
    return ret;
}
} // namespace lift_00626820

// [0x00626D00]
namespace lift_00626D00 {
// External callees (original asm: ext_0060BB50, ext_0063D8F0).
void ext_0060BB50(void* self);
void ext_0063D8F0(void* self);

// @name NMData::EffectorSkeletalData::vfunc_19
// @class NMData::EffectorSkeletalData
// @summary Clears base-class string members, then initializes the sub-object at +0x44 via initFields.
// @field NMData::EffectorSkeletalData +0x44 char field_0x44
void fn_00626D00(void* self) {
    ext_0060BB50(self);
    ext_0063D8F0(static_cast<char*>(self) + 0x44);
}
} // namespace lift_00626D00

// [0x00626850] NMData::EffectorSkeletalData::vfunc_20 (157 bytes)
namespace lift_00626850 {
// .rdata string literals (contents not recovered).
extern const char mem_009777A0[];
extern const char mem_0093BF0C[];
// IAT slots for the MSVCP80 string ctor/operator+/dtor the original called through.
// Replaced by std::string operations; referenced only as metadata for the differential check.
extern int mem_00924FD0;
extern int mem_00924ECC;
extern int mem_00924FE4;
extern int mem_00924FF4;

// @name NMData::EffectorSkeletalData::vfunc_20
// @class NMData::EffectorSkeletalData
// @summary Builds the string (literal 0x009777A0 + this->field_0x04 + literal 0x0093BF0C) into the caller's result slot and returns that slot.
// @field NMData::EffectorSkeletalData +0x04 std::string field_0x04
// Stack arg 2 (ret 8) is never read by the original.
std::string* fn_00626850(void* self, std::string* ret, void* unused) {
    (void)unused;
    (void)&mem_00924FD0;
    (void)&mem_00924ECC;
    (void)&mem_00924FE4;
    (void)&mem_00924FF4;
    auto* member = reinterpret_cast<std::string*>(static_cast<char*>(self) + 0x04);
    std::string prefixed = std::string(mem_009777A0) + *member;
    new (ret) std::string(prefixed + mem_0093BF0C);
    return ret;
}
} // namespace lift_00626850

// [0x00626900] NMData::EffectorSkeletalData::vfunc_17 (253 bytes)
namespace lift_00626900 {
// Known callee 0x00622290: sub_00622290 (constructor-like init; returns self)
extern void* ext_00622290(void* self);
// Known callee 0x006A5C62: thunk_MFC80_ord_762 (IAT thunk to MFC80!ord_762, operator new-style allocator)
extern void* ext_006A5C62(uint32_t size);
extern float mem_0093E990; // .rdata float 1000.0f
extern float mem_009777B8; // .rdata float 10000.0f

// Thiscall virtual method taking one float by value and returning nothing.
// __thiscall is empty on non-MSVC builds (see lift_compat.h).
using FloatSetterFn = void(__thiscall*)(void* self, float value);

// Calls the virtual method at byte offset `slot` of the vtable of `self` with `value`.
static inline void call_float_vmethod(void* self, ptrdiff_t slot, float value) {
    void* vtbl = lift_field<void*>(self, 0);
    void* method = lift_field<void*>(vtbl, slot);
    reinterpret_cast<FloatSetterFn>(method)(self, value);
}

// @name NMData::EffectorSkeletalData::vfunc_17
// @class NMData::EffectorSkeletalData
// @summary Allocates a 0x2C-byte object, constructs it, applies nine float-valued vtable setters (1000 or 10000), and returns it (or null if allocation returned null).
void* fn_00626900(void* self) {
    (void)self; // incoming ecx is only saved/restored for the SEH frame

    void* obj = nullptr;
    void* mem = ext_006A5C62(0x2c);
    if (mem != nullptr) {
        obj = ext_00622290(mem);
    }

    call_float_vmethod(obj, 0x44, mem_0093E990);
    call_float_vmethod(obj, 0x60, mem_0093E990);
    call_float_vmethod(obj, 0x40, mem_0093E990);
    call_float_vmethod(obj, 0x50, mem_0093E990);
    call_float_vmethod(obj, 0x58, mem_0093E990);
    call_float_vmethod(obj, 0x48, mem_009777B8);
    call_float_vmethod(obj, 0x54, mem_0093E990);
    call_float_vmethod(obj, 0x5c, mem_0093E990);
    call_float_vmethod(obj, 0x4c, mem_009777B8);

    return obj;
}
} // namespace lift_00626900

// [0x00626A00] NMData::EffectorSkeletalData::vfunc_18 (253 bytes)
namespace lift_00626A00 {
// @name NMData::EffectorSkeletalData::vfunc_18
// @class NMData::EffectorSkeletalData
// @summary Auto-lifted identical-shape clone of 0x00626900 (NMData::EffectorSkeletalData::vfunc_17).
namespace lift_00626900 {
// Known callee 0x00622290: sub_00622290 (constructor-like init; returns self)
extern void* ext_00622290(void* self);
// Known callee 0x006A5C62: thunk_MFC80_ord_762 (IAT thunk to MFC80!ord_762, operator new-style allocator)
extern void* ext_006A5C62(uint32_t size);
extern float mem_009518E0; // .rdata float 1000.0f
extern float mem_009518E0; // .rdata float 10000.0f

// Thiscall virtual method taking one float by value and returning nothing.
// __thiscall is empty on non-MSVC builds (see lift_compat.h).
using FloatSetterFn = void(__thiscall*)(void* self, float value);

// Calls the virtual method at byte offset `slot` of the vtable of `self` with `value`.
static inline void call_float_vmethod(void* self, ptrdiff_t slot, float value) {
    void* vtbl = lift_field<void*>(self, 0);
    void* method = lift_field<void*>(vtbl, slot);
    reinterpret_cast<FloatSetterFn>(method)(self, value);
}

// @name NMData::EffectorSkeletalData::vfunc_17
// @class NMData::EffectorSkeletalData
// @summary Allocates a 0x2C-byte object, constructs it, applies nine float-valued vtable setters (1000 or 10000), and returns it (or null if allocation returned null).
void* fn_00626A00(void* self) {
    (void)self; // incoming ecx is only saved/restored for the SEH frame

    void* obj = nullptr;
    void* mem = ext_006A5C62(0x2c);
    if (mem != nullptr) {
        obj = ext_00622290(mem);
    }

    call_float_vmethod(obj, 0x44, mem_009518E0);
    call_float_vmethod(obj, 0x60, mem_009518E0);
    call_float_vmethod(obj, 0x40, mem_009518E0);
    call_float_vmethod(obj, 0x50, mem_009518E0);
    call_float_vmethod(obj, 0x58, mem_009518E0);
    call_float_vmethod(obj, 0x48, mem_009518E0);
    call_float_vmethod(obj, 0x54, mem_009518E0);
    call_float_vmethod(obj, 0x5c, mem_009518E0);
    call_float_vmethod(obj, 0x4c, mem_009518E0);

    return obj;
}
} // namespace lift_00626900
} // namespace lift_00626A00

// [0x00626D20]
namespace lift_00626D20 {
// @name NMData::EffectorSkeletalData::clone
// @class NMData::EffectorSkeletalData
// @summary Allocates and returns a copy of this EffectorSkeletalData instance.
// @field NMData::EffectorSkeletalData +0x04 std::string field_0x04
// @field NMData::EffectorSkeletalData +0x20 std::string field_0x20
// @field NMData::EffectorSkeletalData +0x44 float field_0x44
// @field NMData::EffectorSkeletalData +0x48 float field_0x48
// @field NMData::EffectorSkeletalData +0x4c float field_0x4c
// @field NMData::EffectorSkeletalData +0x50 float field_0x50
// @field NMData::EffectorSkeletalData +0x54 float field_0x54
// @field NMData::EffectorSkeletalData +0x58 float field_0x58
// @field NMData::EffectorSkeletalData +0x5c float field_0x5c
// @field NMData::EffectorSkeletalData +0x60 float field_0x60
// @field NMData::EffectorSkeletalData +0x64 float field_0x64
// @field NMData::EffectorSkeletalData +0x68 float field_0x68
// @field NMData::EffectorSkeletalData +0x6c float field_0x6c
// @field NMData::EffectorSkeletalData +0x70 float field_0x70
// @field NMData::EffectorSkeletalData +0x74 uint32_t field_0x74
// @field NMData::EffectorSkeletalData +0x78 uint32_t field_0x78
// @field NMData::EffectorSkeletalData +0x7c uint8_t field_0x7c
// @field NMData::EffectorSkeletalData +0x80 float field_0x80
// @field NMData::EffectorSkeletalData +0x84 float field_0x84
// @field NMData::EffectorSkeletalData +0x88 float field_0x88
// @field NMData::EffectorSkeletalData +0x8c float field_0x8c
// @field NMData::EffectorSkeletalData +0x90 float field_0x90
// @field NMData::EffectorSkeletalData +0x94 float field_0x94
// @field NMData::EffectorSkeletalData +0x98 float field_0x98
// @field NMData::EffectorSkeletalData +0x9c float field_0x9c
// @field NMData::EffectorSkeletalData +0xa0 float field_0xa0


extern void* ext_006A5C62(uint32_t size);
extern void* ext_006267B0(void* self);
extern uintptr_t mem_00924FDC;

void* fn_00626D20(void* self) {
    void* raw = ext_006A5C62(0xa8);
    void* copy = raw ? ext_006267B0(raw) : nullptr;

    using StringAssignFn = void* (__thiscall*)(void*, const void*);
    auto string_assign = reinterpret_cast<StringAssignFn>(mem_00924FDC);
    string_assign(static_cast<uint8_t*>(copy) + 0x04, static_cast<const uint8_t*>(self) + 0x04);
    string_assign(static_cast<uint8_t*>(copy) + 0x20, static_cast<const uint8_t*>(self) + 0x20);

    static constexpr uintptr_t kFloatOffsets[] = {
        0x50, 0x54, 0x58, 0x44, 0x48, 0x4c, 0x5c, 0x60, 0x64, 0x68, 0x6c, 0x70,
        0x80, 0x84, 0x88, 0x8c, 0x90, 0x94, 0x98, 0x9c, 0xa0
    };
    for (uintptr_t off : kFloatOffsets) {
        lift_field<float>(copy, off) = lift_field<float>(self, off);
    }

    lift_field<uint8_t>(copy, 0x7c) = lift_field<uint8_t>(self, 0x7c);
    lift_field<uint32_t>(copy, 0x74) = lift_field<uint32_t>(self, 0x74);
    lift_field<uint32_t>(copy, 0x78) = lift_field<uint32_t>(self, 0x78);

    return copy;
}
} // namespace lift_00626D20

// [0x00627110] NMData::EffectorSkeletalData::vfunc_15 (140 bytes)
namespace lift_00627110 {
// Known callee 0x006A5C62: thunk_MFC80_ord_762 (IAT thunk to MFC80!ord_762; cdecl, one size arg, returns allocation or 0).
extern void* ext_006A5C62(uint32_t size);
// Known callee 0x006301E0: sub_006301E0 (386B); thiscall on the freshly allocated block, returns the object pointer.
extern void* __thiscall ext_006301E0(void* self);
// Known callee 0x005A0FF0: sub_005A0FF0 (118B); thiscall (this = a1) with one stack arg, callee-pops, returns pointer.
extern void* __thiscall ext_005A0FF0(void* self, void* p);

// @name NMData::EffectorSkeletalData::vfunc_15
// @class NMData::EffectorSkeletalData
// @summary Allocates and constructs a 0x180-byte object, copies a uint32 (from ext_005A0FF0(a1, &this->+0x20)->+0x234) into it, stores a2 in this->+0x3C and obj->+8, calls obj->vtable[12](this), stores obj in this->+0x40 and returns obj.
// @field NMData::EffectorSkeletalData +0x20 std::string field_0x20
// @field NMData::EffectorSkeletalData +0x3C uint32_t field_0x3c
// @field NMData::EffectorSkeletalData +0x40 void* field_0x40
extern void* __thiscall fn_00627110(void* self, void* a1, uint32_t a2, uint32_t stackArg3) {
    // Original prologue/epilogue installs and removes an MSVC SEH frame (fs:[0] chain); not modeled.
    // ret 0xC pops three stack args, but only a1 and a2 are read; stackArg3 is unused.
    (void)stackArg3;

    void* obj = nullptr;
    void* mem = ext_006A5C62(0x180);
    if (mem != nullptr) {
        obj = ext_006301E0(mem);
    }

    void* tmp = ext_005A0FF0(a1, static_cast<uint8_t*>(self) + 0x20);
    lift_field<uint32_t>(obj, 0x4) = lift_field<uint32_t>(tmp, 0x234);
    lift_field<uint32_t>(self, 0x3C) = a2;
    lift_field<uint32_t>(obj, 0x8) = a2;

    using VFn = void(__thiscall*)(void* self, void* arg);
    void** vt = *reinterpret_cast<void***>(obj);
    reinterpret_cast<VFn>(vt[12])(obj, self);

    lift_field<void*>(self, 0x40) = obj;
    return obj;
}
} // namespace lift_00627110

// [0x00626EB0] NMData::EffectorSkeletalData::vfunc_13 (597 bytes)
namespace lift_00626EB0 {
// Known callee 0x0060BA80: NMData::EffectorBaseData::vfunc_13 (Initializes m_name and m_jointName from the provided attribute source after calling vfunc_19.)
extern void __thiscall ext_0060BA80(uint8_t* self, uint8_t* arg1);
// Known callee 0x0063D8F0: initFields (Initializes float, integer, and flag fields on the object to default values.)
extern void __thiscall ext_0063D8F0(uint8_t* self);
// Known callee 0x0063F530: sub_0063F530 (197B) - thiscall(arg1, a, b, c), returns a sentinel/index in eax.
extern uint32_t __thiscall ext_0063F530(uint8_t* self, uint32_t a, uint32_t b, uint32_t c);
// Known callee 0x0067EE80: sub_0067EE80 (222B) - cdecl(a, b, c), returns float in st0.
extern float __cdecl ext_0067EE80(uint32_t a, uint32_t b, uint32_t c);
// Known callee 0x0063EFE0: sub_0063EFE0 (Searches a vector of item pointers at +0x3c for an item whose std::string at +0x04 matches the given C-string, returning it or a sentinel at 0x00B53A34.)
extern uint32_t __thiscall ext_0063EFE0(uint8_t* self, const char* name);
// Known callee 0x004275E0: assignVirtualString (Calls vtable[2] on obj to obtain a temporary std::string, assigns it to dst, and destroys the temporary.)
extern void __cdecl ext_004275E0(void* dst, void* obj);
// Known callee 0x00626770: findStringIndex (Searches a 9-element string table at 0x00A97F70 for a match, returning its index or 0 if not found.)
extern uint32_t __cdecl ext_00626770(void* s);
// Known callee 0x00427640: checkStringEqualsConst (Gets a std::string via ext_004275C0, compares it with mem_0092F10C, and stores the boolean result in *out.)
extern void __cdecl ext_00427640(void* arg0, void* obj, uint8_t* out);

extern int mem_00A9ED74;
extern int mem_00A9F780;
extern int mem_00A9F4AC;
extern int mem_00A9F770;
extern int mem_00A9F4A4;
extern int mem_00A9F9FC;
extern int mem_00A9F504;
extern int mem_00A9FA5C;
extern int mem_00A9F520;
extern int mem_00A9F9EC;
extern int mem_00A9F4F8;
extern int mem_00A9FA44;
extern int mem_00A9F510;
extern int mem_00A9F77C;
extern int mem_00A9F4A8;
extern int mem_00A9F9F4;
extern int mem_00A9F4FC;
extern int mem_00A9FA4C;
extern int mem_00A9F514;
extern int mem_00924FE8;
extern int mem_00924FF4;
extern int mem_00A9F774;
extern int mem_00A9F458;
extern int mem_00A9F43C;

namespace {

// Sentinel "not found" values returned by ext_0063F530 / ext_0063EFE0.
constexpr uint32_t kSentinelA = 0x00B53A34u;
constexpr uint32_t kSentinelB = 0x00B53B30u;
constexpr uint32_t kSentinelC = 0x00B53AB0u;
constexpr uint32_t kSentinelD = 0x00B53A70u;
constexpr uint32_t kSentinelE = 0x00B53AF0u;

bool isSentinel(uint32_t v) {
    return v == kSentinelA || v == kSentinelB || v == kSentinelC ||
           v == kSentinelD || v == kSentinelE;
}

uint32_t memU32(const int& m) { return static_cast<uint32_t>(m); }

const char* memStr(const int& m) {
    return reinterpret_cast<const char*>(static_cast<uintptr_t>(static_cast<uint32_t>(m)));
}

void* asPtr(uint32_t v) { return reinterpret_cast<void*>(static_cast<uintptr_t>(v)); }

} // namespace

// @name NMData::EffectorSkeletalData::vfunc_13
// @class NMData::EffectorSkeletalData
// @summary Initializes base data and defaults, then fills ten float fields from string-table lookups and sets two string-index fields and a string-equality flag.
// @field NMData::EffectorSkeletalData +0x44 uint8_t field_0x44
// @field NMData::EffectorSkeletalData +0x74 uint32_t field_0x74
// @field NMData::EffectorSkeletalData +0x78 uint32_t field_0x78
// @field NMData::EffectorSkeletalData +0x7c uint8_t field_0x7c
// @field NMData::EffectorSkeletalData +0x80 float field_0x80
// @field NMData::EffectorSkeletalData +0x84 float field_0x84
// @field NMData::EffectorSkeletalData +0x88 float field_0x88
// @field NMData::EffectorSkeletalData +0x8c float field_0x8c
// @field NMData::EffectorSkeletalData +0x90 float field_0x90
// @field NMData::EffectorSkeletalData +0x94 float field_0x94
// @field NMData::EffectorSkeletalData +0x98 float field_0x98
// @field NMData::EffectorSkeletalData +0x9c float field_0x9c
// @field NMData::EffectorSkeletalData +0xa0 float field_0xa0
// @field NMData::EffectorSkeletalData +0xa4 float field_0xa4
void __thiscall fn_00626EB0(uint8_t* self, uint8_t* arg1) {
    ext_0060BA80(self, arg1);
    ext_0063D8F0(self + 0x44);

    const uint32_t r = ext_0063F530(arg1, memU32(mem_00A9ED74), 0u, 1u);
    const uint32_t edi = isSentinel(r) ? kSentinelB : r;

    if (!isSentinel(edi)) {
        lift_field<float>(self, 0x80) = ext_0067EE80(edi, memU32(mem_00A9F4AC), memU32(mem_00A9F780));
        lift_field<float>(self, 0x84) = ext_0067EE80(edi, memU32(mem_00A9F4A4), memU32(mem_00A9F770));
        lift_field<float>(self, 0x88) = ext_0067EE80(edi, memU32(mem_00A9F504), memU32(mem_00A9F9FC));
        lift_field<float>(self, 0x8c) = ext_0067EE80(edi, memU32(mem_00A9F520), memU32(mem_00A9FA5C));
        lift_field<float>(self, 0x90) = ext_0067EE80(edi, memU32(mem_00A9F4F8), memU32(mem_00A9F9EC));
        lift_field<float>(self, 0x94) = ext_0067EE80(edi, memU32(mem_00A9F510), memU32(mem_00A9FA44));
        lift_field<float>(self, 0xa0) = ext_0067EE80(edi, memU32(mem_00A9F4A8), memU32(mem_00A9F77C));
        lift_field<float>(self, 0x98) = ext_0067EE80(edi, memU32(mem_00A9F4FC), memU32(mem_00A9F9F4));
        lift_field<float>(self, 0x9c) = ext_0067EE80(edi, memU32(mem_00A9F514), memU32(mem_00A9FA4C));
        lift_field<float>(self, 0xa4) = ext_0067EE80(edi, 0x0097705Cu, 0x00977068u);
    }

    // MSVC std::string temporary (28 bytes on MSVC 2005; over-allocated).
    alignas(16) uint8_t str_tmp[32] = {};
    using str_ctor_fn = void(__thiscall*)(void*);
    using str_dtor_fn = void(__thiscall*)(void*);
    auto str_ctor = reinterpret_cast<str_ctor_fn>(
        static_cast<uintptr_t>(memU32(mem_00924FE8)));
    auto str_dtor = reinterpret_cast<str_dtor_fn>(
        static_cast<uintptr_t>(memU32(mem_00924FF4)));

    str_ctor(str_tmp);

    const uint32_t obj1 = ext_0063EFE0(arg1, memStr(mem_00A9F774));
    ext_004275E0(str_tmp, asPtr(obj1));
    lift_field<uint32_t>(self, 0x74) = ext_00626770(str_tmp);

    const uint32_t obj2 = ext_0063EFE0(arg1, memStr(mem_00A9F458));
    ext_004275E0(str_tmp, asPtr(obj2));
    lift_field<uint32_t>(self, 0x78) = ext_00626770(str_tmp);

    const uint32_t obj3 = ext_0063EFE0(arg1, memStr(mem_00A9F43C));
    uint32_t flag_slot = obj3;
    ext_00427640(arg1, self + 0x7c, reinterpret_cast<uint8_t*>(&flag_slot));

    str_dtor(str_tmp);
}
} // namespace lift_00626EB0
