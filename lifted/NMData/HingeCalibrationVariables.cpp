// Lifted C++ translation unit: lifted/NMData/HingeCalibrationVariables.cpp
#include "lift_compat.h"
#include <new>
#include <string>
// .rdata string literal at 0x009770F4 (contents not recovered).
extern "C" const char mem_009770F4[];

// [0x006228E0]
namespace lift_006228E0 {
// @name NMData::HingeCalibrationVariables::vfunc_27
// @class NMData::HingeCalibrationVariables
// @summary Allocates and constructs a 16-byte object and initializes it with three float fields via virtual setters.
// @field NMData::HingeCalibrationVariables +0x04 float field_0x04
// @field NMData::HingeCalibrationVariables +0x08 float field_0x08
// @field NMData::HingeCalibrationVariables +0x0C float field_0x0C


extern void* __cdecl ext_006A5C62(uint32_t size);
extern void* __thiscall ext_00622750(void* self);

void* __thiscall fn_006228E0(uint8_t* self) {
    void* obj = ext_006A5C62(0x10);
    void* esi = obj ? ext_00622750(obj) : nullptr;

    using VSetter = void (__thiscall*)(void*, float);

    uint32_t* vtable = *reinterpret_cast<uint32_t**>(esi);
    reinterpret_cast<VSetter>(vtable[5])(esi, *reinterpret_cast<float*>(self + 0xC));

    vtable = *reinterpret_cast<uint32_t**>(esi);
    reinterpret_cast<VSetter>(vtable[3])(esi, *reinterpret_cast<float*>(self + 0x4));

    vtable = *reinterpret_cast<uint32_t**>(esi);
    reinterpret_cast<VSetter>(vtable[4])(esi, *reinterpret_cast<float*>(self + 0x8));

    return esi;
}
} // namespace lift_006228E0

// [0x00622940]
namespace lift_00622940 {
// @name NMData::HingeCalibrationVariables::vfunc_29
// @class NMData::HingeCalibrationVariables
// @summary Serializes or compares three float calibration fields via vtable calls and sub_00487A30.
// @field NMData::HingeCalibrationVariables +0x04 float field_0x04
// @field NMData::HingeCalibrationVariables +0x08 float field_0x08
// @field NMData::HingeCalibrationVariables +0x0C float field_0x0C


extern void __thiscall ext_00487A30(void* ctx, float val, float expected);

void __thiscall fn_00622940(void* self, void* serializer, uint32_t arg1, uint32_t arg2) {
    (void)arg1;
    uint32_t* vtable = *reinterpret_cast<uint32_t**>(serializer);

    using VFunc0 = float(__thiscall*)(void*, uint32_t);
    using VFunc1 = float(__thiscall*)(void*, uint32_t);
    using VFunc2 = float(__thiscall*)(void*, uint32_t);

    float r0 = reinterpret_cast<VFunc0>(vtable[0])(serializer, 0x00977130u);
    ext_00487A30(&arg2, *reinterpret_cast<const float*>(reinterpret_cast<const uint8_t*>(self) + 0x04), r0);

    vtable = *reinterpret_cast<uint32_t**>(serializer);
    float r1 = reinterpret_cast<VFunc1>(vtable[1])(serializer, 0x00977120u);
    ext_00487A30(&arg2, *reinterpret_cast<const float*>(reinterpret_cast<const uint8_t*>(self) + 0x08), r1);

    vtable = *reinterpret_cast<uint32_t**>(serializer);
    float r2 = reinterpret_cast<VFunc2>(vtable[2])(serializer, 0x00977110u);
    ext_00487A30(&arg2, *reinterpret_cast<const float*>(reinterpret_cast<const uint8_t*>(self) + 0x0C), r2);
}
} // namespace lift_00622940

// [0x006227B0] NMData::HingeCalibrationVariables::vfunc_28 (34 bytes)
namespace lift_006227B0 {
// String literal whose address (0x009770F4) is pushed as the const char* argument.
extern const char mem_009770F4[];
// Import slot for the std::string constructor (MSVCP80); the portable version below replaces the indirect call.
extern int mem_00924FE4;

// @name NMData::HingeCalibrationVariables::vfunc_28
// @class NMData::HingeCalibrationVariables
// @summary Constructs a std::string at the hidden out-pointer from the literal at 0x009770F4 and returns that pointer; the second stack argument is ignored (stdcall, ret 8).
void fn_006227B0(std::string* out, void* unused) {
    (void)unused;
    (void)&mem_00924FE4; // original calls the MSVCP80 ctor through this IAT slot
    new (out) std::string(mem_009770F4);
}
} // namespace lift_006227B0

// [0x006227E0] NMData::HingeCalibrationVariables::vfunc_25 (247 bytes)
namespace lift_006227E0 {
// Known callee 0x0063F530: sub_0063F530 (197B). Thiscall-style: ecx = obj, three stack args (value, 0, 1).
extern uint32_t ext_0063F530(void* self, uint32_t a, uint32_t b, uint32_t c);
// Known callee 0x0046C0A0: fn_0046C0A0 (parseFloatFromString). Stack args: (uint32 unused, float* out_val).
extern void ext_0046C0A0(uint32_t unused, float* out_val);

extern uint32_t mem_00A9ED5C;
extern uint32_t mem_00A9EF5C;
extern uint32_t mem_00A9EF60;

// @name NMData::HingeCalibrationVariables::vfunc_25
// @class NMData::HingeCalibrationVariables
// @summary Reads three float fields (+0x0C, +0x04, +0x08) via ext_0046C0A0 after mapping each status code from ext_0063F530.
// @field NMData::HingeCalibrationVariables +0x04 float field_0x04
// @field NMData::HingeCalibrationVariables +0x08 float field_0x08
// @field NMData::HingeCalibrationVariables +0x0C float field_0x0C

static constexpr uint32_t kHingeStatusDefault = 0x00B53B30u;

// Maps the value returned by ext_0063F530: any of the five recognised codes
// collapses to kHingeStatusDefault, everything else is passed through unchanged.
static inline uint32_t hinge_map_status(uint32_t v) {
    switch (v) {
        case 0x00B53A34u:
        case 0x00B53B30u:
        case 0x00B53AB0u:
        case 0x00B53A70u:
        case 0x00B53AF0u:
            return kHingeStatusDefault;
        default:
            return v;
    }
}

// Shared tail for each of the three blocks: query one value via ext_0063F530,
// map it, then hand the field address and the mapped slot to ext_0046C0A0.
static inline void hinge_store_block(void* obj, uint32_t mem_value, void* field) {
    uint32_t slot = hinge_map_status(ext_0063F530(obj, mem_value, 0u, 1u));
    ext_0046C0A0(static_cast<uint32_t>(reinterpret_cast<uintptr_t>(field)),
                 reinterpret_cast<float*>(&slot));
}

// obj: value of the first stack argument (used as the `this` for ext_0063F530).
// self: ecx on entry (HingeCalibrationVariables*).
void fn_006227E0(void* self, void* obj) {
    char* base = static_cast<char*>(self);
    hinge_store_block(obj, mem_00A9ED5C, base + 0x0C);
    hinge_store_block(obj, mem_00A9EF5C, base + 0x04);
    hinge_store_block(obj, mem_00A9EF60, base + 0x08);
}
} // namespace lift_006227E0
