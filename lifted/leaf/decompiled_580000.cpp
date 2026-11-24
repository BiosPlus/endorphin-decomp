// Lifted C++ translation unit: lifted/leaf/decompiled_580000.cpp
#include "lift_compat.h"
#include <new>
#include <string>

#include <string>
namespace lift_0058F590 {
extern float ext_0058B5A0(float value);

// @name sub_0058F590
// @class (none)
// @summary Stdcall thunk: forwards its single float argument to sub_0058B5A0 and returns that call's result.
// @field (none)
float fn_0058F590(float value) {
    return ext_0058B5A0(value);
}
} // namespace lift_0058F590

// [0x0058F570] sub_0058F570 (16 bytes)
namespace lift_0058F570 {
extern void __thiscall ext_0058B4E0(void* self, float value);

// @name sub_0058F570
// @summary Thiscall float forwarder: passes its single float argument and `this` unchanged to sub_0058B4E0.
extern void __thiscall fn_0058F570(void* self, float value) {
    ext_0058B4E0(self, value);
}
} // namespace lift_0058F570

// [0x0058F600] sub_0058F600 (16 bytes)
namespace lift_0058F600 {
// @name sub_0058F600
// @summary Auto-lifted identical-shape clone of 0x0058F590 (sub_0058F590).
namespace lift_0058F590 {
extern float ext_0058ABC0(float value);

// @name sub_0058F590
// @class (none)
// @summary Stdcall thunk: forwards its single float argument to sub_0058B5A0 and returns that call's result.
// @field (none)
float fn_0058F600(float value) {
    return ext_0058ABC0(value);
}
} // namespace lift_0058F590
} // namespace lift_0058F600

// [0x0058F620] sub_0058F620 (16 bytes)
namespace lift_0058F620 {
// @name sub_0058F620
// @summary Auto-lifted identical-shape clone of 0x0058F590 (sub_0058F590).
namespace lift_0058F590 {
extern float ext_0058AD80(float value);

// @name sub_0058F590
// @class (none)
// @summary Stdcall thunk: forwards its single float argument to sub_0058B5A0 and returns that call's result.
// @field (none)
float fn_0058F620(float value) {
    return ext_0058AD80(value);
}
} // namespace lift_0058F590
} // namespace lift_0058F620

// [0x0058F550] sub_0058F550 (27 bytes)
namespace lift_0058F550 {
extern void ext_0058F4C0(void* self, int32_t flag);

// @name descriptiveName_0058F550
// @summary Calls ext_0058F4C0(self, 0) for its side effects and returns self unchanged.
// (No direct field accesses; the function only forwards its pointer argument.)
void* fn_0058F550(void* self) {
    ext_0058F4C0(self, 0);
    return self;
}
} // namespace lift_0058F550

// [0x00584A10] sub_00584A10 (34 bytes)
namespace lift_00584A10 {
extern int mem_00924FC8;
extern const char mem_00928B5D[];
extern bool ext_string_eq_cstr(const void* str, const char* s);

// @name descriptiveName: SelectStringByLiteralMatch
// @summary Returns the address of the member at +0x30 if its string equals the literal at mem_00928B5D, otherwise the address of the member at +0x14.
// @field self +0x14 unknown field_0x14
// @field self +0x30 unknown field_0x30
void* fn_00584A10(void* self) {
    auto* base = static_cast<unsigned char*>(self);
    void* at30 = base + 0x30;
    void* at14 = base + 0x14;
    if (ext_string_eq_cstr(at30, mem_00928B5D)) {
        return at30;
    }
    return at14;
}
} // namespace lift_00584A10

// [0x00584BD0] sub_00584BD0 (34 bytes)
namespace lift_00584BD0 {
// Literal string compared against the std::string at this+0x4C (.rdata 0x928B5D).
extern const char mem_00928B5D[];
// MSVCP80 std::operator!=(const std::string&, const char*) reached through the IAT slot mem_00924FC8.
extern bool ext_00924FC8(const void* lhs, const char* rhs);

// @name Unknown::getStrPtrOrFallback
// @class Unknown
// @summary Returns a pointer to the std::string at +0x4C if it differs from a fixed literal, else a pointer to the std::string at +0x14.
// @field Unknown +0x14 std::string field_0x14 (returned address when the +0x4C string equals the literal)
// @field Unknown +0x4C std::string field_0x4C (compared against the literal; returned when it differs)
void* fn_00584BD0(void* self) {
    auto* base = static_cast<uint8_t*>(self);
    void* primary = base + 0x4C;
    if (ext_00924FC8(primary, mem_00928B5D)) {
        return primary;
    }
    return base + 0x14;
}
} // namespace lift_00584BD0

// [0x0058A170]
namespace lift_0058A170 {
extern uintptr_t mem_00A9F3AC;
extern void (__thiscall* mem_00924FE4)(void* self, const char* str);

// @name initDefaultString
// @summary Initializes a std::string at arg1 with the global C-string at mem_00A9F3AC and returns arg1
uint32_t __stdcall sub_0058A170(uint32_t arg1, uint32_t arg2) {
    (void)arg2;
    void* out_str = reinterpret_cast<void*>(static_cast<uintptr_t>(arg1));
    const char* src = reinterpret_cast<const char*>(mem_00A9F3AC);
    mem_00924FE4(out_str, src);
    return arg1;
}
} // namespace lift_0058A170

// [0x005817F0] sub_005817F0 (41 bytes)
namespace lift_005817F0 {
// @name sub_005817F0
// @summary Auto-lifted identical-shape clone of 0x0044C4D0 (DWORD_RangeCopy_thiscall).
namespace lift_0044C4D0 {
// @name DWORD_RangeCopy_thiscall
// @summary Copies DWORDs from [first, last) to out via ext_0044C2A0 and returns out + count.

extern DWORD* ext_00581610(const DWORD* first, const DWORD* last, DWORD* out);

DWORD* __thiscall fn_005817F0(void* self, const DWORD* first, const DWORD* last, DWORD* out) {
    (void)self;
    return ext_00581610(first, last, out);
}
} // namespace lift_0044C4D0
} // namespace lift_005817F0

// [0x0058AB30] sub_0058AB30 (44 bytes)
namespace lift_0058AB30 {
extern int mem_00B40644;

// @name QueryFloatViaMemberCallback
// @summary Calls a function pointer stored at this->field_0x04 + 0x10, passing a 0x40-byte result buffer, this->field_0xF0 and mem_00B40644; returns the float at the result's +0x30.
// @field Unknown +0x04 void* field_0x04
// @field Unknown +0xF0 int32_t field_0xF0

// Thiscall callee: receiver in ecx, then (out buffer, a, b) on the stack; returns the result pointer in eax.
using ThisCallFn = void* (__thiscall*)(void* self, void* out, int32_t a, int32_t b);

float fn_0058AB30(void* self) {
    // Stack-local 0x40-byte result buffer (sub esp, 0x40).
    alignas(8) uint8_t resultBuf[0x40];

    // Global value pushed as the last argument.
    int32_t globalArg = mem_00B40644;

    // Function pointer lives at [[self+4] + 0x10]; receiver passed in ecx is &self->field_0x04.
    void* embedded = lift_field<void*>(self, 0x04);
    ThisCallFn callback = lift_field<ThisCallFn>(embedded, 0x10);
    void* receiver = static_cast<uint8_t*>(self) + 0x04;

    int32_t memberArg = lift_field<int32_t>(self, 0xF0);

    void* result = callback(receiver, resultBuf, memberArg, globalArg);

    // fld dword ptr [result + 0x30]; value is returned in st0 (float).
    return lift_field<float>(result, 0x30);
}
} // namespace lift_0058AB30

// [0x0058AB60] sub_0058AB60 (44 bytes)
namespace lift_0058AB60 {
extern int mem_00B40644;

// @name ReadFloatViaVirtualSlot4
// @class UnknownClass
// @summary Calls virtual slot 4 on the object held at self+4 into a 0x40-byte local result, then returns the float at result+0x34.
// @field UnknownClass +0x04 void* field_0x04
// @field UnknownClass +0xF0 uint32_t field_0xF0

// Callee convention (from the x86 call site): this = self+4, then pushed args
// in order (out, self->+0xF0, mem_00B40644). Modeled here as a plain C++ call.
typedef void (*VirtualSlot4Fn)(void* self, void* out, uint32_t arg0, int32_t arg1);

float fn_0058AB60(void* self) {
    uint8_t* base = static_cast<uint8_t*>(self);
    void* obj = lift_field<void*>(base, 0x04);
    void** vtbl = *reinterpret_cast<void***>(obj);
    VirtualSlot4Fn fn = reinterpret_cast<VirtualSlot4Fn>(vtbl[4]);

    uint8_t out[0x40] = {};
    fn(base + 0x04, out, lift_field<uint32_t>(base, 0xF0), mem_00B40644);
    return lift_field<float>(out, 0x34);
}
} // namespace lift_0058AB60

// [0x0058AB90] sub_0058AB90 (44 bytes)
namespace lift_0058AB90 {
extern uint32_t mem_00B40644;

// @name ForwardCallbackReturnFloat38
// @class this (unnamed class; receiver is the object at this+0x04 for the call)
// @summary Calls the function pointer stored at *(this+0x04)+0x10, passing &this->field_0x04, a scratch buffer, this->field_0xf0 and mem_00B40644; returns the float at the returned object's +0x38.
// @field this +0x04 uint8_t* field_0x04
// @field this +0xF0 uint32_t field_0xf0
float fn_0058AB90(uint8_t* self) {
    using CallbackFn = void* (*)(void* thisPtr, void* outBuf, uint32_t a, uint32_t b);

    // obj = *(this+0x04); callee = *(obj+0x10)
    const uint32_t objAddr = *reinterpret_cast<const uint32_t*>(self + 0x04);
    const uint32_t fnAddr =
        *reinterpret_cast<const uint32_t*>(static_cast<uintptr_t>(objAddr) + 0x10);
    const auto callee = reinterpret_cast<CallbackFn>(static_cast<uintptr_t>(fnAddr));

    const uint32_t arg = *reinterpret_cast<const uint32_t*>(self + 0xF0);
    const uint32_t global = mem_00B40644;

    alignas(8) uint8_t outBuf[0x40];
    // The callee receives `this` = self + 0x04 (ecx in the original).
    void* ret = callee(self + 0x04, outBuf, arg, global);

    // Returned object's float at +0x38 is the result (x87 st0 in the original).
    float result = 0.0f;
    std::memcpy(&result, static_cast<const uint8_t*>(ret) + 0x38, sizeof(result));
    return result;
}
} // namespace lift_0058AB90

// [0x0058A8F0]
namespace lift_0058A8F0 {
// @name getTranslationX
// @summary Gets the X component of row 3 from a transform matrix retrieved via vtable on this+0x4.
// @field field_0x04 void* vtable_obj

extern uint8_t mem_00A85D54;
extern uint32_t __thiscall ext_00552130(uintptr_t this_ptr, uintptr_t out_ptr, uint32_t index);

float __thiscall sub_0058A8F0(uintptr_t this_ptr) {
    uintptr_t sub_obj = this_ptr + 0x4;
    uintptr_t vtable = *reinterpret_cast<const uint32_t*>(sub_obj);
    uint32_t fn_addr = (mem_00A85D54 != 0)
        ? *reinterpret_cast<const uint32_t*>(vtable + 0x30)
        : *reinterpret_cast<const uint32_t*>(vtable + 0x28);

    using GetMatrixFn = uintptr_t(__thiscall*)(uintptr_t);
    uintptr_t matrix_ptr = reinterpret_cast<GetMatrixFn>(static_cast<uintptr_t>(fn_addr))(sub_obj);

    float row[4]{};
    uintptr_t out_ptr = ext_00552130(matrix_ptr, reinterpret_cast<uintptr_t>(row), 3);
    return *reinterpret_cast<const float*>(out_ptr);
}
} // namespace lift_0058A8F0

// [0x0058A960] sub_0058A960 (49 bytes)
namespace lift_0058A960 {
// Known callee 0x00552130: Matrix4::getRow (Copies a 4-float row/element at the given index from this object into out.)
extern uint8_t mem_00A85D54;
extern uint32_t __thiscall ext_00552130(uintptr_t this_ptr, uintptr_t out_ptr, uint32_t index);

// @name getRow3Element2
// @class Unknown
// @summary Fetches an object from this+0x4, calls a vtable slot (0x30 if mem_00A85D54 is set, else 0x28) to get a matrix, calls Matrix4::getRow(3) on it, and returns the float at offset 0x8 of the returned pointer.
// @field Unknown +0x04 void* obj_ptr
float __thiscall sub_0058A960(uintptr_t this_ptr) {
    uintptr_t sub_obj = this_ptr + 0x4;
    uintptr_t vtable = *reinterpret_cast<const uint32_t*>(sub_obj);
    uint32_t fn_addr = (mem_00A85D54 != 0)
        ? *reinterpret_cast<const uint32_t*>(vtable + 0x30)
        : *reinterpret_cast<const uint32_t*>(vtable + 0x28);

    using GetMatrixFn = uintptr_t(__thiscall*)(uintptr_t);
    uintptr_t matrix_ptr = reinterpret_cast<GetMatrixFn>(static_cast<uintptr_t>(fn_addr))(sub_obj);

    float row[4]{};
    uintptr_t ret = ext_00552130(matrix_ptr, reinterpret_cast<uintptr_t>(row), 3);
    return *reinterpret_cast<const float*>(ret + 0x8);
}
} // namespace lift_0058A960
