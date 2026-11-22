// Lifted C++ translation unit: lifted/NMData/FixedPathJointData.cpp
#include "lift_compat.h"
#include <new>
#include <string>
// C string literal at VA 0x0096B92C.
extern "C" const char mem_0096B92C[];

// [0x005EFF60] NMData::FixedPathJointData::vfunc_59 (34 bytes)
// @name NMData::FixedPathJointData::vfunc_59
// @class NMData::FixedPathJointData
// @summary Constructs a std::string from the literal at 0x0096B92C in the caller's sret buffer and returns that buffer.
void* __thiscall fn_005EFF60(void* self, void* out) {
    (void)self;
    new (out) std::string(mem_0096B92C);
    return out;
}

// [0x005E0E70]
// @name NMData::FixedPathJointData::vfunc_0_off_154
// @class NMData::FixedPathJointData
// @summary If the flag at +0x140 is clear and the object at +0xE0 is set, query the primary base via vtable slot 5 with the stack argument, then forward that result to the object at +0xE0 via vtable slot 43 (+0xAC).
// @field NMData::FixedPathJointData +0xE0 void* field_0xe0 (object pointer; its vtable slot at +0xAC is called)
// @field NMData::FixedPathJointData +0x140 int32_t field_0x140 (non-zero disables the function)

#include <cstdint>

namespace {

// Thiscall virtual slot taking one stack argument (callee pops 4) and returning a dword in EAX.
using SlotGetFn = std::uint32_t (*)(void* self, std::uint32_t arg);
// Thiscall virtual slot taking one stack argument (callee pops 4) and returning nothing.
using SlotSetFn = void (*)(void* self, std::uint32_t arg);

}  // namespace

// thiscall (ECX = this), one stack argument, callee pops 4 (ret 4).
void __fastcall NMData_FixedPathJointData_vfunc_0_off_154(void* ecx, std::uint32_t arg) {
    auto* self = static_cast<std::uint8_t*>(ecx);

    if (lift_field<std::int32_t>(self, 0x140) != 0) {
        return;
    }

    void* obj = lift_field<void*>(self, 0xE0);
    if (obj == nullptr) {
        return;
    }

    // Primary base subobject sits at this - 0x150; its vtable slot 5 (+0x14) is queried.
    auto* primary = self - 0x150;
    void** primaryVptr = *reinterpret_cast<void***>(primary);
    auto queryFn = reinterpret_cast<SlotGetFn>(primaryVptr[5]);
    std::uint32_t result = queryFn(primary, arg);

    // Object at +0xE0: vtable slot at +0xAC (index 43) receives the result.
    void** objVptr = *reinterpret_cast<void***>(obj);
    auto forwardFn = reinterpret_cast<SlotSetFn>(objVptr[0xAC / sizeof(void*)]);
    forwardFn(obj, result);
}
