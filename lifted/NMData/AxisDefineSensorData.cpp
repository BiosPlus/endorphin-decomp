// Lifted C++ translation unit: lifted/NMData/AxisDefineSensorData.cpp
#include "lift_compat.h"
#include <cstring>
extern "C" const DWORD* ext_00480920();
// sub_00661650: thiscall with no stack args.
extern "C" void ext_00661650(void* self);
// AnimatableTransform::vfunc_13: thiscall with (arg1, arg2) on the stack.
extern "C" void ext_006619B0(void* self, void* arg1, uint32_t arg2);

extern "C" void ext_00661650(void* self);
// AnimatableTransform::vfunc_13: thiscall with (arg1, arg2) on the stack.
extern "C" void ext_006619B0(void* self, void* arg1, uint32_t arg2);
// @summary Fetches a 64-byte (16 x DWORD) block via ext_00480920 and copies it into the caller-supplied destination buffer.
void fn_0060F0B0(void* dst) {
    const DWORD* src = ext_00480920();
    std::memcpy(dst, src, 16 * sizeof(DWORD));
}
extern "C" void ext_0062CC10(void* arg, void* tm);
#include <string>
#include <cstdint>

// [0x0058F6B0] NMData::AxisDefineSensorData::vfunc_14 (54 bytes)
// @name NMData::AxisDefineSensorData::vfunc_14
// @class NMData::AxisDefineSensorData
// @summary Returns arg1; if arg2 == 0x199 calls sub_00661650 on arg1, otherwise calls AnimatableTransform::vfunc_13 on self with (arg1, arg2).
// No direct field accesses; self and arg1 are only passed through to callees.
void* fn_0058F6B0(void* self, void* arg1, uint32_t arg2) {
    if (arg2 == 0x199) {
        ext_00661650(arg1);
    } else {
        ext_006619B0(self, arg1, arg2);
    }
    return arg1;
}

// [0x0062CC60] NMData::AxisDefineSensorData::vfunc_8 (37 bytes)
// @name NMData::AxisDefineSensorData::vfunc_8
// @class NMData::AxisDefineSensorData
// @summary Forwards the stack argument and the sub-object at +0x154 to ext_0062CC10, then returns the argument.
// @field NMData::AxisDefineSensorData +0x154 void* field_0x154
void* __thiscall fn_0062CC60(void* self, void* arg) {
    void* tm = reinterpret_cast<uint8_t*>(self) + 0x154;
    ext_0062CC10(arg, tm);
    return arg;
}

// [0x0060E7B0] NMData::AxisDefineSensorData::vfunc_2 (47 bytes)
namespace lift_0060E7B0 {
extern void* __stdcall ext_006798D0(void* a0, void* a1, uint32_t a2, void* a3);
extern void __thiscall ext_00679030(void* self);

// @name NMData::AxisDefineSensorData::vfunc_2
// @class NMData::AxisDefineSensorData
// @summary Passes the arguments plus this->field_0x170 to ext_006798D0, hands its result to ext_00679030, and returns the first argument.
// @field NMData::AxisDefineSensorData +0x170 void* field_0x170
void* fn_0060E7B0(void* self, void* arg1, uint32_t arg2) {
    void* sub = lift_field<void*>(self, 0x170);
    void* result = ext_006798D0(arg1, sub, arg2, self);
    ext_00679030(result);
    return arg1;
}
} // namespace lift_0060E7B0

// [0x0062CB60] NMData::AxisDefineSensorData::vfunc_59 (65 bytes)
namespace lift_0062CB60 {
// Known callee 0x006107B0: NMData::MetaBodySensorData::vfunc_59 (thiscall; takes two stack args plus four trailing stack values).
extern void* ext_006107B0(void* self, void* arg1, void* arg2, void* a3, void* a4, void* a5, void* a6);
// Known callee 0x006A6E9E: thunk_MSVCR80___RTDynamicCast (IAT jump thunk forwarding to MSVCR80!__RTDynamicCast.)
extern void* ext_006A6E9E(void* obj);
// Known callee 0x0062C8D0: sub_0062C8D0 (thiscall on the cast result, one stack arg: the original this).
extern void ext_0062C8D0(void* target, void* self);
extern int mem_00A988D8;
extern int mem_00A92D20;

// @name NMData::AxisDefineSensorData::vfunc_59
// @class NMData::AxisDefineSensorData
// @summary Calls MetaBodySensorData::vfunc_59, dynamic-casts its result, and if non-null runs sub_0062C8D0 on it; returns the cast pointer.
// @field none (this function accesses no fields directly; it only forwards self and the call results)
void* fn_0062CB60(void* self, void* arg1, void* arg2) {
    void* r = ext_006107B0(self, arg1, arg2, nullptr,
                           reinterpret_cast<void*>(&mem_00A92D20),
                           reinterpret_cast<void*>(&mem_00A988D8),
                           nullptr);
    void* cast = ext_006A6E9E(r);
    if (cast != nullptr) {
        ext_0062C8D0(cast, self);
    }
    return cast;
}
} // namespace lift_0062CB60

// [0x0060F420]
namespace lift_0060F420 {
// @name NMData::AxisDefineSensorData::vfunc_61
// @class NMData::AxisDefineSensorData
// @summary Conditionally registers a string at +0x180 into arg2+0x598 if +0x154 matches one of four axis names
// @field NMData::AxisDefineSensorData +0x154 void* field_0x154
// @field NMData::AxisDefineSensorData +0x180 void* field_0x180

extern uintptr_t mem_00924FC8;
extern uintptr_t mem_00924FE0;

extern void __fastcall ext_005DF5C0(void* ecx_arg, void* edx_unused,
                                    uint32_t s0, uint32_t s1, uint32_t s2, uint32_t s3,
                                    uint32_t s4, uint32_t s5, uint32_t s6);

using OpNotEqualFn = uint8_t(__cdecl*)(const void* str, const char* cstr);
using StringCopyCtorFn = void(__thiscall*)(void* dst, const void* src);

void __fastcall fn_0060F420(void* this_ptr, void* /*edx*/, void* /*arg1*/, void* arg2) {
    auto* self = static_cast<uint8_t*>(this_ptr);
    const void* field_154 = self + 0x154;
    auto op_ne = reinterpret_cast<OpNotEqualFn>(mem_00924FC8);

    if (op_ne(field_154, reinterpret_cast<const char*>(0x0096F57C)) &&
        op_ne(field_154, reinterpret_cast<const char*>(0x0096F568)) &&
        op_ne(field_154, reinterpret_cast<const char*>(0x0096F554)) &&
        op_ne(field_154, reinterpret_cast<const char*>(0x0096F540))) {
        return;
    }

    uint32_t str_copy[7]{};
    auto copy_ctor = reinterpret_cast<StringCopyCtorFn>(mem_00924FE0);
    copy_ctor(str_copy, self + 0x180);

    void* target = static_cast<uint8_t*>(arg2) + 0x598;
    ext_005DF5C0(target, nullptr,
                 str_copy[0], str_copy[1], str_copy[2], str_copy[3],
                 str_copy[4], str_copy[5], str_copy[6]);
}
} // namespace lift_0060F420
