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

// [0x0062C690]
namespace lift_0062C690 {
// Known callee 0x0060EA90: NMData::MetaBodySensorData::vfunc_21 (thiscall: self in ecx, one stack arg).
extern void ext_0060EA90(void* self, void* arg);
// Known callee 0x0063F530: lookup helper (self = arg in ecx, three u32 stack args), returns u32 result.
extern uint32_t ext_0063F530(void* self, uint32_t a0, uint32_t a1, uint32_t a2);
// Known callee 0x0063EFE0: sub_0063EFE0 (searches item vector at +0x3c by std::string name at +0x04; returns item or sentinel).
extern uint32_t ext_0063EFE0(void* self, const char* name);
// Known callee 0x00427A60: advanceIteratorUntilMatch (checked iterator {container, container, cur/end}).
extern void ext_00427A60(void* iter);
// Known callee 0x00688E20: EraseStringPairRange (erases [first, last) from self's range, writes (a2, first) to out).
extern void ext_00688E20(void* self, void* out, uint32_t a2, uint32_t first, uint32_t a4, uint32_t last);
// Known callee 0x00689FF0: appends one 0x38-byte string-pair record to self's range.
extern void ext_00689FF0(void* self, void* pair);

extern uint32_t mem_00A9F170;
extern uint32_t mem_00925134;
extern uint32_t mem_00A9F9D0;
extern uint32_t mem_00A9F9CC;
extern uint32_t mem_00924FE0;
extern uint32_t mem_00924FF4;

static inline void* addr_to_ptr(uint32_t addr) {
    return reinterpret_cast<void*>(static_cast<uintptr_t>(addr));
}

static inline uint32_t ptr_to_addr(const void* p) {
    return static_cast<uint32_t>(reinterpret_cast<uintptr_t>(p));
}

// Virtual slot 2 (byte offset +0x8 on x86): const std::string* (this, out_buffer).
using StringGetterFn = const std::string* (__thiscall*)(void* self, void* out);

static const std::string* call_string_getter_slot2(void* obj, void* out) {
    void** vtbl = *reinterpret_cast<void***>(obj);
    StringGetterFn fn = reinterpret_cast<StringGetterFn>(vtbl[2]);
    return fn(obj, out);
}

// @name NMData::AxisDefineSensorData::vfunc_21
// @class NMData::AxisDefineSensorData
// @summary Calls MetaBodySensorData::vfunc_21, looks up a sentinel-normalised helper object, clears the vector at +0x1D8, then rebuilds it with one (string, string) pair per matching entry in the helper's range.
// @field NMData::AxisDefineSensorData +0x1DC uint32_t field_0x1dc
// @field NMData::AxisDefineSensorData +0x1E0 uint32_t field_0x1e0
void fn_0062C690(void* self, void* a) {
    struct StringPair {
        std::string first;
        std::string second;
    };

    // Keep original import/data references for differential tests.
    (void)&mem_00925134;
    (void)&mem_00924FE0;
    (void)&mem_00924FF4;

    ext_0060EA90(self, a);

    uint32_t p = ext_0063F530(a, mem_00A9F170, 0, 1);
    if (p == 0x00B53A34u || p == 0x00B53B30u || p == 0x00B53AB0u ||
        p == 0x00B53A70u || p == 0x00B53AF0u) {
        p = 0x00B53B30u;
    }

    // Vector at this+0x1D8: begin at +0x4 (0x1DC), end at +0x8 (0x1E0).
    void* vec = static_cast<char*>(self) + 0x1D8;
    const uint32_t vec_addr = ptr_to_addr(vec);
    const uint32_t vec_begin = lift_field<uint32_t>(self, 0x1DC);
    const uint32_t vec_end = lift_field<uint32_t>(self, 0x1E0);
    uint32_t erase_out[2] = {0u, 0u};
    ext_00688E20(vec, erase_out, vec_addr, vec_begin, vec_addr, vec_end);

    // Range over the helper object p: container at p+0x24, begin at +0x28, end at +0x2C.
    void* pobj = addr_to_ptr(p);
    const uint32_t container = p + 0x24u;
    const uint32_t range_begin = lift_field<uint32_t>(pobj, 0x28);
    uint32_t it_cur[3] = {container, container, range_begin};
    ext_00427A60(it_cur);

    const uint32_t range_end = lift_field<uint32_t>(pobj, 0x2C);
    uint32_t it_end[3] = {container, container, range_end};
    ext_00427A60(it_end);

    const char* name1 = reinterpret_cast<const char*>(static_cast<uintptr_t>(mem_00A9F9D0));
    const char* name2 = reinterpret_cast<const char*>(static_cast<uintptr_t>(mem_00A9F9CC));

    while (it_cur[2] < it_end[2]) {
        // item = *slot at cur
        const uint32_t item = lift_field<uint32_t>(addr_to_ptr(it_cur[2]), 0);

        const uint32_t f1 = ext_0063EFE0(addr_to_ptr(item), name1);
        const uint32_t f2 = ext_0063EFE0(addr_to_ptr(item), name2);

        std::string tmp84;
        std::string tmp68;
        const std::string* r1 = call_string_getter_slot2(addr_to_ptr(f1), &tmp84);
        const std::string* r2 = call_string_getter_slot2(addr_to_ptr(f2), &tmp68);

        StringPair pair{*r2, *r1};
        ext_00689FF0(vec, &pair);

        it_cur[2] += 4u;
        ext_00427A60(it_cur);
    }
}
} // namespace lift_0062C690
