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
#include <cstring>
#include <cstdint>
#include <cmath>
#include <cstdlib>

#include <cstdlib>
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

// [0x0058A920] sub_0058A920 (49 bytes)
namespace lift_0058A920 {
namespace lift_0058A920 {

// Known callee ext_00552130: Matrix4::getRow (copies a 4-float row/element at index from this into out; returns out).
extern uint32_t ext_00552130(uintptr_t this_ptr, uintptr_t out_ptr, uint32_t index);

// Indirect call through a function pointer read from the object at +0x28 / +0x30 (selected by mem_00A85D54).
// Passes this_ptr as the implicit this argument and returns the 32-bit value left in eax.
extern uint32_t ext_call_slot_0058A920(uint32_t target, uintptr_t this_ptr);

// Known data: mem_00A85D54 .data u32 0x00000001 (only the low byte is tested).
extern const uint8_t mem_00A85D54;

static inline uint32_t load_u32(uintptr_t addr) {
    uint32_t v;
    std::memcpy(&v, reinterpret_cast<const void*>(addr), sizeof(v));
    return v;
}

static inline float load_f32(uintptr_t addr) {
    float v;
    std::memcpy(&v, reinterpret_cast<const void*>(addr), sizeof(v));
    return v;
}

// @name Unknown::GetMatrixRow3Y
// @class Unknown
// @summary Resolves the matrix object at this->field_0x04 via a selected slot getter, copies its row 3 with Matrix4::getRow, and returns that row's second float.
// @field Unknown +0x04 uint32_t field_0x04

// Returns the float left in st(0) by the original code: the value at offset +4 of the pointer returned by getRow.
float fn_0058A920(uintptr_t self) {
    // mov eax, [ecx+4]
    uint32_t obj = load_u32(self + 0x04);
    // add ecx, 4  (this pointer for the indirect call)
    uintptr_t this_ptr = self + 0x04;

    // cmp byte ptr [mem_00A85D54], 0 ; select slot +0x30 if nonzero, else +0x28
    uint32_t slot_off = (mem_00A85D54 != 0) ? 0x30u : 0x28u;
    uint32_t target = load_u32(static_cast<uintptr_t>(obj) + slot_off);

    // call edx  -> eax
    uint32_t mat = ext_call_slot_0058A920(target, this_ptr);

    // sub esp, 0x10 ; out buffer lives on the stack
    uint8_t out[0x10] = {};

    // push 3 ; push out ; mov ecx, eax ; call sub_00552130
    uint32_t row = ext_00552130(static_cast<uintptr_t>(mat), reinterpret_cast<uintptr_t>(out), 3u);

    // fld dword ptr [eax + 4]
    return load_f32(static_cast<uintptr_t>(row) + 4);
}

} // namespace lift_0058A920
} // namespace lift_0058A920

// [0x0058A9A0] sub_0058A9A0 (62 bytes)
namespace lift_0058A9A0 {
extern uint8_t mem_00A85D54;   // .data flag, compared as a byte (0 selects the +0x24 slot)
extern uint32_t mem_00B40640;  // global passed as the single argument to the +0x0c slot

// @name SetFloatAndDispatch
// @summary Calls one of two callbacks on the sub-object at +0x04, stores a float at its +0x30, calls its +0x0c callback with a global, then stores the float again.
// @field Unknown +0x04 void* field_0x04
// @field Unknown +0x0c void* field_0x0c
// @field Unknown +0x24 void* field_0x24
// @field Unknown +0x2c void* field_0x2c
// @field Unknown +0x30 float field_0x30
//
// Note: the original uses __thiscall (this in ECX). The portable form passes
// `self` explicitly as the first argument of each callback.
void fn_0058A9A0(void* self, float value) {
    using Callback0 = void (*)(void* self);
    using Callback1 = void (*)(void* self, uintptr_t arg);

    auto* base = static_cast<uint8_t*>(self);
    void* esi = base + 4;                                   // address of the sub-object pointer
    auto* obj = *reinterpret_cast<uint8_t**>(base + 4);     // object pointed to by +0x04

    if (mem_00A85D54 == 0) {
        auto fn = *reinterpret_cast<Callback0*>(obj + 0x24);
        fn(esi);
    } else {
        auto fn = *reinterpret_cast<Callback0*>(obj + 0x2c);
        fn(esi);
    }
    *reinterpret_cast<float*>(obj + 0x30) = value;

    auto fn1 = *reinterpret_cast<Callback1*>(obj + 0x0c);
    fn1(esi, static_cast<uintptr_t>(mem_00B40640));
    *reinterpret_cast<float*>(obj + 0x30) = value;
}
} // namespace lift_0058A9A0

// [0x0058A9E0] sub_0058A9E0 (62 bytes)
namespace lift_0058A9E0 {
extern uint32_t mem_00A85D54;  // .data u32 = 1; gate flag (only low byte is tested)
extern uint32_t mem_00B40640;  // global value passed as the single argument to sub+0x0c

// @name Owner::ForwardFloatToSubobject
// @class Owner
// @summary Calls a gated getter on subobject, writes value into the returned object, then calls sub+0x0c with a global and writes value again.
// @field Owner +0x04 void* subobject
// @field SubObject +0x0c void* field_0x0c
// @field SubObject +0x24 void* field_0x24
// @field SubObject +0x2c void* field_0x2c
// @field ReturnedObject +0x34 float field_0x34

typedef void* (__thiscall* Fn0)(void* self);
typedef void* (__thiscall* Fn1)(void* self, uint32_t arg);

void __thiscall Owner_ForwardFloatToSubobject(void* self, float value) {
    // cmp byte ptr [mem_00A85D54], 0
    const bool flag = (mem_00A85D54 & 0xFFu) != 0;

    // Callee "this" is the address of the subobject pointer slot (self+0x04).
    void* slot = static_cast<void*>(&lift_field<void*>(self, 0x04));
    void* sub = lift_field<void*>(self, 0x04);

    // Gated call: flag set -> sub+0x2c, flag clear -> sub+0x24; no stack args.
    const ptrdiff_t gateOff = flag ? 0x2c : 0x24;
    Fn0 gated = reinterpret_cast<Fn0>(lift_field<void*>(sub, gateOff));
    void* ret = gated(slot);
    lift_field<float>(ret, 0x34) = value;

    // Reload subobject pointer (original code re-reads [esi] after the call).
    void* sub2 = lift_field<void*>(self, 0x04);
    Fn1 fn = reinterpret_cast<Fn1>(lift_field<void*>(sub2, 0x0c));
    void* ret2 = fn(slot, mem_00B40640);
    lift_field<float>(ret2, 0x34) = value;
}
} // namespace lift_0058A9E0

// [0x0058AA20] sub_0058AA20 (62 bytes)
namespace lift_0058AA20 {
// @name sub_0058AA20
// @summary Auto-lifted identical-shape clone of 0x0058A9A0 (SetFloatAndDispatch).
namespace lift_0058A9A0 {
extern uint8_t mem_00A85D54;   // .data flag, compared as a byte (0 selects the +0x24 slot)
extern uint32_t mem_00B40640;  // global passed as the single argument to the +0x0c slot

// @name SetFloatAndDispatch
// @summary Calls one of two callbacks on the sub-object at +0x04, stores a float at its +0x30, calls its +0x0c callback with a global, then stores the float again.
// @field Unknown +0x04 void* field_0x04
// @field Unknown +0x0c void* field_0x0c
// @field Unknown +0x24 void* field_0x24
// @field Unknown +0x2c void* field_0x2c
// @field Unknown +0x30 float field_0x30
//
// Note: the original uses __thiscall (this in ECX). The portable form passes
// `self` explicitly as the first argument of each callback.
void fn_0058AA20(void* self, float value) {
    using Callback0 = void (*)(void* self);
    using Callback1 = void (*)(void* self, uintptr_t arg);

    auto* base = static_cast<uint8_t*>(self);
    void* esi = base + 4;                                   // address of the sub-object pointer
    auto* obj = *reinterpret_cast<uint8_t**>(base + 4);     // object pointed to by +0x04

    if (mem_00A85D54 == 0) {
        auto fn = *reinterpret_cast<Callback0*>(obj + 0x24);
        fn(esi);
    } else {
        auto fn = *reinterpret_cast<Callback0*>(obj + 0x2c);
        fn(esi);
    }
    *reinterpret_cast<float*>(obj + 0x38) = value;

    auto fn1 = *reinterpret_cast<Callback1*>(obj + 0x0c);
    fn1(esi, static_cast<uintptr_t>(mem_00B40640));
    *reinterpret_cast<float*>(obj + 0x38) = value;
}
} // namespace lift_0058A9A0
} // namespace lift_0058AA20

// [0x005851E0]
namespace lift_005851E0 {
// @name sub_005851E0_ctor
// @summary Constructor that calls base sub_00584F80 and initializes vtable pointers.
// @field +0x00 uint32_t vptr_0x00
// @field +0x04 uint32_t vptr_0x04
// @field +0x08 uint32_t vptr_0x08
// @field +0x0C uint32_t vptr_0x0C
// @field +0x150 uint32_t vptr_0x150
// @field +0x154 uint32_t vptr_0x154


extern void* __thiscall ext_00584F80(void* self, uint32_t arg0);

void* __thiscall sub_005851E0(void* self, uint32_t arg0) {
    uint8_t* obj = static_cast<uint8_t*>(self);
    ext_00584F80(obj, arg0);

    *reinterpret_cast<uint32_t*>(obj + 0x00) = 0x0095A31Cu;
    *reinterpret_cast<uint32_t*>(obj + 0x04) = 0x0095A2D4u;
    *reinterpret_cast<uint32_t*>(obj + 0x08) = 0x0095A294u;
    *reinterpret_cast<uint32_t*>(obj + 0x0C) = 0x0095A244u;
    *reinterpret_cast<uint32_t*>(obj + 0x150) = 0x0095A22Cu;
    *reinterpret_cast<uint32_t*>(obj + 0x154) = 0x0095A224u;

    return obj;
}
} // namespace lift_005851E0

// [0x00582A20]
namespace lift_00582A20 {
// @name IsIdentityMatrix3x3_00582A20
// @summary Returns true if the 9 floats at ecx (row-major 3x3) are exactly the identity matrix; NaN fails.
bool IsIdentityMatrix3x3_00582A20(const float* m) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            const float expected = (i == j) ? 1.0f : 0.0f;
            if (!(m[3 * i + j] == expected)) {
                return false;
            }
        }
    }
    return true;
}
} // namespace lift_00582A20

// [0x00581750] sub_00581750 (43 bytes)
namespace lift_00581750 {
// @name sub_00581750
// @summary Auto-lifted identical-shape clone of 0x0054F290 (Unknown::RelocateRangeBackwardWrapper_0054F290).
namespace lift_0054F290 {
// Known callee 0x0054F120: Unknown::RelocateRangeBackward_0054F120 (Walks a 104-byte-element range [begin,end) from the back, invoking ext_0054F030 on each element with a destination pointer shifted by (value - end); returns value minus the range size in bytes.)
extern uint32_t ext_005815A0(uint32_t begin, uint32_t end, uint32_t value);

// @name Unknown::RelocateRangeBackwardWrapper_0054F290
// @summary Forwards its three stack arguments unchanged to RelocateRangeBackward (0x0054F120) and returns that result; the original stack shuffling only reorders copies of the arguments.
uint32_t fn_00581750(uint32_t begin, uint32_t end, uint32_t value) {
    return ext_005815A0(begin, end, value);
}
} // namespace lift_0054F290
} // namespace lift_00581750

// [0x00585120] sub_00585120 (78 bytes)
namespace lift_00585120 {
// Known callee 0x00554510: Unknown::getVec4At30_w1 (Writes a vec4 to the caller-supplied return buffer: xyz copied from self+0x30..0x38, w = 1.0f.)
void ext_00554510(const void* self, float* out);

// Global at 0x00B40640 (value passed as the third argument of the first lookup call).
extern uint32_t mem_00B40640;

// @name Unknown::LookupVec4AndBlend_00585120
// @class Unknown
// @summary Resolves a sub-object through a function pointer at +0x10 of self->+0x04, reads a vec4 from it, then forwards the vec4 and the float argument through the object at self+0x0C.
// @field Unknown +0x04 void* field_0x04
// @field Unknown +0x0C void* field_0x0c
void fn_00585120(void* self, uintptr_t arg1, float arg2) {
    auto* base = static_cast<unsigned char*>(self);

    // First object: self + 0x04. Its +0x10 slot holds the lookup function.
    void* obj1 = lift_field<void*>(base, 0x04);
    auto lookup = reinterpret_cast<uintptr_t (*)(void*, uintptr_t*, uint32_t, uint32_t, float*)>(
        lift_field<uintptr_t>(obj1, 0x10));

    uintptr_t slot = 0;
    float vec[4] = {0.0f, 0.0f, 0.0f, 0.0f};
    uintptr_t r = lookup(static_cast<unsigned char*>(obj1), &slot, 0u, mem_00B40640, vec);

    // Fill vec from the object returned by the lookup.
    ext_00554510(reinterpret_cast<const void*>(r), vec);

    // Second object: self + 0x0C. Its +0x0C slot holds the forwarding function.
    void* obj2 = lift_field<void*>(base, 0x0C);
    auto forward = reinterpret_cast<void (*)(void*, uintptr_t, float*, float)>(
        lift_field<uintptr_t>(obj2, 0x0C));
    forward(obj2, arg1, vec, arg2);
}
} // namespace lift_00585120

// [0x0058D850] sub_0058D850 (30 bytes)
namespace lift_0058D850 {
// @name sub_0058D850
// @summary Auto-lifted identical-shape clone of 0x0046F6A0 (StoreValueAndSingleton).
namespace lift_0046F6A0 {
DWORD ext_0058D560();  // ConstructOnce_0046F580

// @name StoreValueAndSingleton
// @summary Stores a value into dst[0], stores the one-time-constructed global object pointer into dst[1], and returns dst.
// @field <none> +0x00 DWORD field_0x00 (written from the value argument)
// @field <none> +0x04 DWORD field_0x04 (written from ext_0046F580() result)

DWORD* fn_0058D850(DWORD* dst, DWORD value) {
    DWORD obj = ext_0058D560();
    dst[0] = value;
    dst[1] = obj;
    return dst;
}
} // namespace lift_0046F6A0
} // namespace lift_0058D850

// [0x0058D870] sub_0058D870 (30 bytes)
namespace lift_0058D870 {
// @name sub_0058D870
// @summary Auto-lifted identical-shape clone of 0x0046F6A0 (StoreValueAndSingleton).
namespace lift_0046F6A0 {
DWORD ext_0058D5C0();  // ConstructOnce_0046F580

// @name StoreValueAndSingleton
// @summary Stores a value into dst[0], stores the one-time-constructed global object pointer into dst[1], and returns dst.
// @field <none> +0x00 DWORD field_0x00 (written from the value argument)
// @field <none> +0x04 DWORD field_0x04 (written from ext_0046F580() result)

DWORD* fn_0058D870(DWORD* dst, DWORD value) {
    DWORD obj = ext_0058D5C0();
    dst[0] = value;
    dst[1] = obj;
    return dst;
}
} // namespace lift_0046F6A0
} // namespace lift_0058D870

// [0x0058D890] sub_0058D890 (30 bytes)
namespace lift_0058D890 {
// @name sub_0058D890
// @summary Auto-lifted identical-shape clone of 0x0046F6A0 (StoreValueAndSingleton).
namespace lift_0046F6A0 {
DWORD ext_0058D620();  // ConstructOnce_0046F580

// @name StoreValueAndSingleton
// @summary Stores a value into dst[0], stores the one-time-constructed global object pointer into dst[1], and returns dst.
// @field <none> +0x00 DWORD field_0x00 (written from the value argument)
// @field <none> +0x04 DWORD field_0x04 (written from ext_0046F580() result)

DWORD* fn_0058D890(DWORD* dst, DWORD value) {
    DWORD obj = ext_0058D620();
    dst[0] = value;
    dst[1] = obj;
    return dst;
}
} // namespace lift_0046F6A0
} // namespace lift_0058D890

// [0x0058D8B0] sub_0058D8B0 (30 bytes)
namespace lift_0058D8B0 {
// @name sub_0058D8B0
// @summary Auto-lifted identical-shape clone of 0x0046F6A0 (StoreValueAndSingleton).
namespace lift_0046F6A0 {
DWORD ext_0058D680();  // ConstructOnce_0046F580

// @name StoreValueAndSingleton
// @summary Stores a value into dst[0], stores the one-time-constructed global object pointer into dst[1], and returns dst.
// @field <none> +0x00 DWORD field_0x00 (written from the value argument)
// @field <none> +0x04 DWORD field_0x04 (written from ext_0046F580() result)

DWORD* fn_0058D8B0(DWORD* dst, DWORD value) {
    DWORD obj = ext_0058D680();
    dst[0] = value;
    dst[1] = obj;
    return dst;
}
} // namespace lift_0046F6A0
} // namespace lift_0058D8B0

// [0x0058D8D0] sub_0058D8D0 (30 bytes)
namespace lift_0058D8D0 {
// @name sub_0058D8D0
// @summary Auto-lifted identical-shape clone of 0x0046F6A0 (StoreValueAndSingleton).
namespace lift_0046F6A0 {
DWORD ext_0058D6E0();  // ConstructOnce_0046F580

// @name StoreValueAndSingleton
// @summary Stores a value into dst[0], stores the one-time-constructed global object pointer into dst[1], and returns dst.
// @field <none> +0x00 DWORD field_0x00 (written from the value argument)
// @field <none> +0x04 DWORD field_0x04 (written from ext_0046F580() result)

DWORD* fn_0058D8D0(DWORD* dst, DWORD value) {
    DWORD obj = ext_0058D6E0();
    dst[0] = value;
    dst[1] = obj;
    return dst;
}
} // namespace lift_0046F6A0
} // namespace lift_0058D8D0

// [0x0058D8F0] sub_0058D8F0 (30 bytes)
namespace lift_0058D8F0 {
// @name sub_0058D8F0
// @summary Auto-lifted identical-shape clone of 0x0046F6A0 (StoreValueAndSingleton).
namespace lift_0046F6A0 {
DWORD ext_0058D740();  // ConstructOnce_0046F580

// @name StoreValueAndSingleton
// @summary Stores a value into dst[0], stores the one-time-constructed global object pointer into dst[1], and returns dst.
// @field <none> +0x00 DWORD field_0x00 (written from the value argument)
// @field <none> +0x04 DWORD field_0x04 (written from ext_0046F580() result)

DWORD* fn_0058D8F0(DWORD* dst, DWORD value) {
    DWORD obj = ext_0058D740();
    dst[0] = value;
    dst[1] = obj;
    return dst;
}
} // namespace lift_0046F6A0
} // namespace lift_0058D8F0

// [0x0058D910] sub_0058D910 (30 bytes)
namespace lift_0058D910 {
// @name sub_0058D910
// @summary Auto-lifted identical-shape clone of 0x0046F6A0 (StoreValueAndSingleton).
namespace lift_0046F6A0 {
DWORD ext_0058D7A0();  // ConstructOnce_0046F580

// @name StoreValueAndSingleton
// @summary Stores a value into dst[0], stores the one-time-constructed global object pointer into dst[1], and returns dst.
// @field <none> +0x00 DWORD field_0x00 (written from the value argument)
// @field <none> +0x04 DWORD field_0x04 (written from ext_0046F580() result)

DWORD* fn_0058D910(DWORD* dst, DWORD value) {
    DWORD obj = ext_0058D7A0();
    dst[0] = value;
    dst[1] = obj;
    return dst;
}
} // namespace lift_0046F6A0
} // namespace lift_0058D910

// [0x0058D560] sub_0058D560 (87 bytes)
namespace lift_0058D560 {
// @name sub_0058D560
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B3F938;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B3F934;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_0058D560() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x89FB2Eu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B3F938 & 1u) == 0) {
        mem_00B3F938 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B3F934, frame[0]);
        mem_00B3F934 = 0x95B344u;
    }

    mem_fs_0 = frame[0];
    return &mem_00B3F934;
}
} // namespace lift_004CAE30
} // namespace lift_0058D560

// [0x0058D5C0] sub_0058D5C0 (87 bytes)
namespace lift_0058D5C0 {
// @name sub_0058D5C0
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B3F940;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B3F93C;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_0058D5C0() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x89FB4Eu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B3F940 & 1u) == 0) {
        mem_00B3F940 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B3F93C, frame[0]);
        mem_00B3F93C = 0x95B4F4u;
    }

    mem_fs_0 = frame[0];
    return &mem_00B3F93C;
}
} // namespace lift_004CAE30
} // namespace lift_0058D5C0

// [0x0058D620] sub_0058D620 (87 bytes)
namespace lift_0058D620 {
// @name sub_0058D620
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B3F948;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B3F944;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_0058D620() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x89FB6Eu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B3F948 & 1u) == 0) {
        mem_00B3F948 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B3F944, frame[0]);
        mem_00B3F944 = 0x95B6A4u;
    }

    mem_fs_0 = frame[0];
    return &mem_00B3F944;
}
} // namespace lift_004CAE30
} // namespace lift_0058D620

// [0x0058D680] sub_0058D680 (87 bytes)
namespace lift_0058D680 {
// @name sub_0058D680
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B3F950;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B3F94C;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_0058D680() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x89FB8Eu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B3F950 & 1u) == 0) {
        mem_00B3F950 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B3F94C, frame[0]);
        mem_00B3F94C = 0x95B854u;
    }

    mem_fs_0 = frame[0];
    return &mem_00B3F94C;
}
} // namespace lift_004CAE30
} // namespace lift_0058D680

// [0x0058D6E0] sub_0058D6E0 (87 bytes)
namespace lift_0058D6E0 {
// @name sub_0058D6E0
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B3F958;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B3F954;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_0058D6E0() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x89FBAEu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B3F958 & 1u) == 0) {
        mem_00B3F958 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B3F954, frame[0]);
        mem_00B3F954 = 0x95BA04u;
    }

    mem_fs_0 = frame[0];
    return &mem_00B3F954;
}
} // namespace lift_004CAE30
} // namespace lift_0058D6E0

// [0x0058D740] sub_0058D740 (87 bytes)
namespace lift_0058D740 {
// @name sub_0058D740
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B3F960;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B3F95C;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_0058D740() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x89FBCEu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B3F960 & 1u) == 0) {
        mem_00B3F960 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B3F95C, frame[0]);
        mem_00B3F95C = 0x95BBB4u;
    }

    mem_fs_0 = frame[0];
    return &mem_00B3F95C;
}
} // namespace lift_004CAE30
} // namespace lift_0058D740

// [0x0058D7A0] sub_0058D7A0 (87 bytes)
namespace lift_0058D7A0 {
// @name sub_0058D7A0
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B3F968;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B3F964;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_0058D7A0() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x89FBEEu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B3F968 & 1u) == 0) {
        mem_00B3F968 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B3F964, frame[0]);
        mem_00B3F964 = 0x95BD64u;
    }

    mem_fs_0 = frame[0];
    return &mem_00B3F964;
}
} // namespace lift_004CAE30
} // namespace lift_0058D7A0

// [0x00586660] sub_00586660 (94 bytes)
namespace lift_00586660 {
// Import slot holding _invalid_parameter_noinfo (called on failed bounds checks).
extern void (*mem_00925134)(void);

namespace {

// Calls the virtual method at vtable byte offset 0x8c (slot 35 on the 32-bit target).
void call_vslot_8c(void* obj) {
    void* vtbl = lift_field<void*>(obj, 0);
    auto fn = lift_field<void (*)(void*)>(vtbl, 0x8c);
    fn(obj);
}

} // namespace

// @name Unknown::CallVirtual8COnSelfAndElements
// @class Unknown
// @summary Invokes the virtual slot 0x8c on self, then on every pointer element in the range [self+0x80, self+0x84).
// @field Unknown +0x80 uint8_t* elementsBegin
// @field Unknown +0x84 uint8_t* elementsEnd
void fn_00586660(void* self) {
    constexpr ptrdiff_t kElemStride = 4; // 32-bit pointer elements

    call_vslot_8c(self);

    uint8_t* cur = lift_field<uint8_t*>(self, 0x80);
    uint8_t* end = lift_field<uint8_t*>(self, 0x84);

    if (cur > end) {
        mem_00925134();
    }
    end = lift_field<uint8_t*>(self, 0x84);
    if (lift_field<uint8_t*>(self, 0x80) > end) {
        mem_00925134();
    }

    while (cur != end) {
        if (cur >= end) {
            mem_00925134();
        }
        void* elem = lift_field<void*>(cur, 0);
        call_vslot_8c(elem);
        if (cur >= end) {
            mem_00925134();
        }
        cur += kElemStride;
    }
}
} // namespace lift_00586660

// [0x00587110] sub_00587110 (99 bytes)
namespace lift_00587110 {
extern void ext_00587110(void* self);
extern void (*mem_00925134)();

// @name Unknown::teardownChildTree
// @class Unknown
// @summary Notifies two embedded interface subobjects, then recursively tears down each child pointer in the range [+0x80, +0x84).
// @field Unknown +0x04 void* field_0x04
// @field Unknown +0x08 void* field_0x08
// @field Unknown +0x80 void** field_0x80
// @field Unknown +0x84 void** field_0x84
void fn_00587110(void* self) {
    uint8_t* edi = static_cast<uint8_t*>(self);

    // Subobject at +0x04: if vtable slot 7 returns true, notify subobject at +0x08 via slot 14.
    void* objA = lift_field<void*>(edi, 0x04);
    void** vtA = *static_cast<void***>(objA);
    if (reinterpret_cast<bool (*)(void*)>(vtA[7])(edi + 0x04)) {
        void* objB = lift_field<void*>(edi, 0x08);
        void** vtB = *static_cast<void***>(objB);
        reinterpret_cast<void (*)(void*)>(vtB[14])(edi + 0x08);
    }

    // Range [+0x80, +0x84): begin must not exceed end.
    void** begin = lift_field<void**>(edi, 0x80);
    void** end = lift_field<void**>(edi, 0x84);
    if (begin > end) {
        mem_00925134();
    }

    void** cur = begin;
    if (begin > end) {
        mem_00925134();
    }
    while (cur != end) {
        ext_00587110(*cur);
        ++cur;
    }
}
} // namespace lift_00587110

// [0x00582A70]
namespace lift_00582A70 {
extern bool ext_005631C0(double val, double eps);
extern bool ext_0056B670(double a, double b, double eps);
extern double mem_0095A0C0;

// @name Matrix4x4::isIdentity
// @class Matrix4x4
// @summary Checks whether a 4x4 float matrix is the identity matrix within 1e-6 tolerance.
// @field Matrix4x4 +0x00 float[16] m
bool __thiscall fn_00582A70(void* self, uint32_t /*unused*/) {
    const auto* m = reinterpret_cast<const float*>(self);
    const double eps = mem_0095A0C0;

    for (int32_t i = 0; i < 4; ++i) {
        for (int32_t j = 0; j < 4; ++j) {
            const double val = static_cast<double>(m[i * 4 + j]);
            const bool ok = (i == j)
                ? ext_0056B670(val, 1.0, eps)
                : ext_005631C0(val, eps);
            if (!ok) {
                return false;
            }
        }
    }
    return true;
}
} // namespace lift_00582A70

// [0x00584A10] sub_00584A10 (34 bytes)
namespace lift_00584A10 {
// Import slot holding the target of `call dword ptr [0x924fc8]`
// (MSVCP80 operator==(const std::string&, const char*) thunk at 0x006293B6).
extern uint32_t mem_00924FC8;
// C string literal at 0x00928B5D (contents not recovered).
extern const char mem_00928B5D[];

// @name getStringFieldOrFallback_00584A10
// @class <unknown>
// @summary Returns this+0x30 if the string there equals the literal at 0x928B5D, otherwise this+0x14.
// @field <unknown> +0x14 uint8_t field_0x14
// @field <unknown> +0x30 std::string field_0x30
void* fn_00584A10(void* self) {
    uint8_t* obj = static_cast<uint8_t*>(self);
    void* str30 = obj + 0x30;
    auto op_eq = reinterpret_cast<bool (*)(const void*, const char*)>(
        static_cast<uintptr_t>(mem_00924FC8));
    if (op_eq(str30, mem_00928B5D)) {
        return str30;
    }
    return obj + 0x14;
}
} // namespace lift_00584A10

// [0x0058A170] sub_0058A170 (35 bytes)
namespace lift_0058A170 {
extern int mem_00A9F3AC;
extern int mem_00924FE4;
extern int mem_00B40644;

// MSVCP80 std::basic_string<char>::basic_string(const char*, const allocator&) (thiscall)
using StringCtorFn = void(__thiscall*)(void* self, const char* text, const void* alloc);

// @name initStdStringFromGlobalCString
// @summary Constructs a std::string at arg1 from the global C string pointer at 0x00A9F3AC and returns arg1 (stdcall, ret 8).
void* __stdcall fn_0058A170(void* self, [[maybe_unused]] void* arg2) {
    (void)&mem_00B40644; // referenced by the check tool; not used by the pasted asm
    const char* text = *reinterpret_cast<const char* const*>(&mem_00A9F3AC);
    auto ctor = *reinterpret_cast<StringCtorFn*>(&mem_00924FE4);
    ctor(self, text, nullptr);
    return self;
}
} // namespace lift_0058A170

// [0x00584B10]
namespace lift_00584B10 {
// @name FindFirstAcceptingNode
// @class Unknown
// @summary Returns self if virtual slot 0x70 accepts it; otherwise walks the +0x94 chain and returns the first node accepted by slot 0x70, or null.
// @field Unknown +0x00 void* vptr
// @field Unknown +0x94 void* field_0x94

namespace {

using AcceptFn = bool (*)(void* self);

// Virtual slot at vtable offset 0x70 (index 28).
inline bool accepts(void* obj) {
    void** vtable = *reinterpret_cast<void***>(obj);
    AcceptFn fn = reinterpret_cast<AcceptFn>(vtable[0x70 / sizeof(void*)]);
    return fn(obj);
}

inline void* next_of(void* obj) {
    return *reinterpret_cast<void**>(static_cast<unsigned char*>(obj) + 0x94);
}

} // namespace

void* FindFirstAcceptingNode(void* self) {
    if (accepts(self)) {
        return self;
    }

    void* cur = next_of(self);
    void* found = nullptr;
    while (cur != nullptr) {
        if (found != nullptr) {
            break;
        }
        if (accepts(cur)) {
            found = cur;
        }
        cur = next_of(cur);
    }
    return found;
}
} // namespace lift_00584B10

// [0x00586240]
namespace lift_00586240 {
// @name Node::traverseAndInvoke
// @class Node
// @summary Calls virtual method at vtable+0xa4 on this node and recursively on each child in vector at +0x7c.
// @field Node +0x00 void** vtable
// @field Node +0x7c void* children_vec
// @field Node +0x80 void** children_begin
// @field Node +0x84 void** children_end


    extern void (__cdecl* mem_00925134)();
    void __thiscall ext_00586240(void* self);

void __thiscall fn_00586240(void* self) {
    uint8_t* node = static_cast<uint8_t*>(self);
    void** vtable = *reinterpret_cast<void***>(node);
    using VirtFn = void(__thiscall*)(void*);
    reinterpret_cast<VirtFn>(vtable[0xa4 / sizeof(void*)])(self);

    uint8_t* vec = node + 0x7c;
    uint32_t* it = *reinterpret_cast<uint32_t**>(node + 0x80);
    auto invalid_param = mem_00925134;

    if (it > *reinterpret_cast<uint32_t**>(vec + 0x08)) {
        invalid_param();
    }

    for (;;) {
        uint32_t* end = *reinterpret_cast<uint32_t**>(vec + 0x08);
        if (*reinterpret_cast<uint32_t**>(vec + 0x04) > end) {
            invalid_param();
        }
        if (it == end) {
            break;
        }
        if (it >= *reinterpret_cast<uint32_t**>(vec + 0x08)) {
            invalid_param();
        }
        ext_00586240(reinterpret_cast<void*>(*it));
        if (it >= *reinterpret_cast<uint32_t**>(vec + 0x08)) {
            invalid_param();
        }
        ++it;
    }
}
} // namespace lift_00586240

// [0x005862A0]
namespace lift_005862A0 {
// @name Node::traverseRecursive
// @class Node
// @summary Calls virtual method at +0xA8 on this node, then recursively traverses child nodes in vector at +0x7C.
// @field Node +0x00 void** vtable
// @field Node +0x7C void* children_vec
// @field Node +0x80 Node** children_begin
// @field Node +0x84 Node** children_end


extern void (__cdecl* mem_00925134)();

void __thiscall sub_005862A0(void* self) {
    auto* vtable = *reinterpret_cast<void***>(self);
    auto vfunc = reinterpret_cast<void(__thiscall*)(void*)>(
        reinterpret_cast<uintptr_t>(vtable[0xa8 / sizeof(void*)]));
    vfunc(self);

    auto* base = static_cast<uint8_t*>(self);
    auto* vec = base + 0x7c;
    uintptr_t it = *reinterpret_cast<uintptr_t*>(base + 0x80);
    auto invalid_param = mem_00925134;

    if (it > *reinterpret_cast<uintptr_t*>(vec + 0x8)) {
        invalid_param();
    }

    for (;;) {
        uintptr_t end = *reinterpret_cast<uintptr_t*>(vec + 0x8);
        if (*reinterpret_cast<uintptr_t*>(vec + 0x4) > end) {
            invalid_param();
        }
        if (it == end) {
            break;
        }
        if (it >= *reinterpret_cast<uintptr_t*>(vec + 0x8)) {
            invalid_param();
        }
        void* child = *reinterpret_cast<void**>(it);
        sub_005862A0(child);
        if (it >= *reinterpret_cast<uintptr_t*>(vec + 0x8)) {
            invalid_param();
        }
        it += 4;
    }
}
} // namespace lift_005862A0

// [0x005861D0] sub_005861D0 (103 bytes)
namespace lift_005861D0 {
// MSVCR80 _invalid_parameter_noinfo import slot (0x00925134)
extern void (*mem_00925134)();

// @name NodeWeight::sumRecursive
// @class NodeWeight
// @summary Returns 1 plus the recursive sum of the results for each element in the child pointer array at this+0x7C.
// @field NodeWeight +0x80 uint32_t childBegin
// @field NodeWeight +0x84 uint32_t childEnd
uint32_t __thiscall fn_005861D0(uint8_t* self) {
    uint8_t* vec = self + 0x7C;
    uint32_t total = 1;

    uint32_t cur = *reinterpret_cast<uint32_t*>(vec + 0x04);
    if (cur > *reinterpret_cast<uint32_t*>(vec + 0x08)) {
        mem_00925134();
    }

    uint32_t end = *reinterpret_cast<uint32_t*>(vec + 0x08);
    if (*reinterpret_cast<uint32_t*>(vec + 0x04) > end) {
        mem_00925134();
    }

    // Original: cmp esi, esi / je ... (always equal; invalid-parameter path is unreachable)

    while (cur != end) {
        if (!(cur < *reinterpret_cast<uint32_t*>(vec + 0x08))) {
            mem_00925134();
        }
        uint32_t raw = *reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(cur));
        uint8_t* child = reinterpret_cast<uint8_t*>(static_cast<uintptr_t>(raw));
        total += fn_005861D0(child);
        if (!(cur < *reinterpret_cast<uint32_t*>(vec + 0x08))) {
            mem_00925134();
        }
        cur += 4;
    }

    return total;
}
} // namespace lift_005861D0

// [0x00585270]
namespace lift_00585270 {
extern uint32_t mem_00B3EB80;
extern uint8_t mem_00B3EB64[];

extern void* ext_0066AD10(void* out_str, uint32_t arg2);
extern int ext_006A6C87(void (*func)());

// @name getStaticBoolString_00B3EB64
// @summary Lazily initializes and returns a static string/object at 0x00B3EB64, registering its destructor via atexit.
void* fn_00585270() {
    if ((mem_00B3EB80 & 1u) == 0) {
        mem_00B3EB80 |= 1u;
        ext_0066AD10(mem_00B3EB64, 0x00A85C84u);
        ext_006A6C87(reinterpret_cast<void (*)()>(0x0091D140u));
    }
    return mem_00B3EB64;
}
} // namespace lift_00585270

// [0x00586440] sub_00586440 (122 bytes)
namespace lift_00586440 {
extern uint32_t mem_00925134;   // IAT slot holding _invalid_parameter_noinfo

// @name ChildRangeVisit
// @class Unknown
// @summary Visits this+0x4 and this+0x8 children, then recursively visits each element of the pointer range [begin, end) stored at this+0x80/this+0x84.
// @field Unknown +0x04 void* child_a
// @field Unknown +0x08 void* child_b
// @field Unknown +0x80 uint32_t children_begin
// @field Unknown +0x84 uint32_t children_end

namespace {

inline void* addr_to_ptr(uint32_t addr) {
    return reinterpret_cast<void*>(static_cast<uintptr_t>(addr));
}

// Reads a 32-bit pointer-sized field at base+off (x86 layout).
inline uint32_t u32_at(void* base, ptrdiff_t off) {
    return lift_field<uint32_t>(base, off);
}

// Loads the vtable entry at slot byte offset `slot_off` for object `obj`.
inline void* vslot(void* obj, ptrdiff_t slot_off) {
    const uint32_t vtbl = u32_at(obj, 0);
    return addr_to_ptr(u32_at(addr_to_ptr(vtbl), slot_off));
}

} // namespace

void fn_00586440(void* self, uint32_t arg) {
    // mov esi, ecx ; mov eax, [esi+4] ; mov edx, [eax+0x1c] ; lea ecx, [esi+4] ; call edx
    using BoolThisFn = uint8_t (*)(void* thisPtr);
    void* child_a = addr_to_ptr(u32_at(self, 0x04));
    BoolThisFn slot_a = reinterpret_cast<BoolThisFn>(vslot(child_a, 0x1c));
    const uint8_t ok = slot_a(static_cast<uint8_t*>(self) + 0x04);

    // test al,al ; je -> skip ; else [esi+8] vtbl+0x18 called with (ecx=this+8, push arg)
    if (ok != 0) {
        using ArgThisFn = void (*)(void* thisPtr, uint32_t a);
        void* child_b = addr_to_ptr(u32_at(self, 0x08));
        ArgThisFn slot_b = reinterpret_cast<ArgThisFn>(vslot(child_b, 0x18));
        slot_b(static_cast<uint8_t*>(self) + 0x08, arg);
    }

    // Range walk over [this+0x80, this+0x84). Each failed bounds check in the
    // original calls _invalid_parameter_noinfo (via the IAT pointer); we mirror
    // that by calling through mem_00925134.
    using InvalidParamFn = void (*)(void);
    const InvalidParamFn invalid_param =
        reinterpret_cast<InvalidParamFn>(addr_to_ptr(mem_00925134));

    uint32_t cur = u32_at(self, 0x80);               // edi = [this+0x80]
    if (cur > u32_at(self, 0x84)) {                  // cmp edi,[esi+8] ; jbe
        invalid_param();
    }

    for (;;) {
        // mov ebx,[esi+8] ; cmp [esi+4],ebx ; jbe  (stored begin must not exceed end)
        const uint32_t end = u32_at(self, 0x84);
        if (u32_at(self, 0x80) > end) {
            invalid_param();
        }
        // cmp esi,esi ; je  -> always taken; the following call ebp is dead.

        if (cur == end) {                            // cmp edi,ebx ; je done
            break;
        }
        if (cur >= u32_at(self, 0x84)) {             // cmp edi,[esi+8] ; jb
            invalid_param();
        }

        // push arg ; mov ecx,[edi] ; call sub_00586440  (recursive self-visit)
        const uint32_t elem = u32_at(addr_to_ptr(cur), 0);
        fn_00586440(addr_to_ptr(elem), arg);

        if (cur >= u32_at(self, 0x84)) {             // cmp edi,[esi+8] ; jb
            invalid_param();
        }
        cur += 4;                                    // add edi,4 ; jmp loop
    }
    // pop edi/esi/ebp/ebx ; ret 4  (void, one stack arg)
}
} // namespace lift_00586440

// [0x005864C0] sub_005864C0 (122 bytes)
namespace lift_005864C0 {
extern uint32_t mem_00925134;
extern void __thiscall ext_005864C0(void* self, uint32_t arg);

// @name Unknown::visitChildrenGated_005864C0
// @class Unknown
// @summary If the object embedded at +0x04 reports true via vtable slot 7, forward arg to the object embedded at +0x08 (vtable slot 4), then recurse into every element of the pointer vector at +0x80..+0x84 with the same arg.
// @field Unknown +0x04 void* field_0x04
// @field Unknown +0x08 void* field_0x08
// @field Unknown +0x80 uint32_t children_begin
// @field Unknown +0x84 uint32_t children_end
void __thiscall fn_005864C0(uint8_t* self, uint32_t arg) {
    using InvalidParamFn = void(__cdecl*)();
    InvalidParamFn invalid_param =
        reinterpret_cast<InvalidParamFn>(static_cast<uintptr_t>(mem_00925134));

    // Gate: vtable slot 7 (+0x1C) of the object at self+0x04, this = self+0x04, no args.
    void** gate_vtbl = *reinterpret_cast<void***>(self + 0x04);
    using GateFn = uint8_t(__thiscall*)(void*);
    GateFn gate_fn = reinterpret_cast<GateFn>(gate_vtbl[7]);
    if (gate_fn(self + 0x04) != 0) {
        // Sink: vtable slot 4 (+0x10) of the object at self+0x08, this = self+0x08, arg pushed.
        void** sink_vtbl = *reinterpret_cast<void***>(self + 0x08);
        using SinkFn = void(__thiscall*)(void*, uint32_t);
        SinkFn sink_fn = reinterpret_cast<SinkFn>(sink_vtbl[4]);
        sink_fn(self + 0x08, arg);
    }

    // Vector walk over self+0x80 (begin) .. self+0x84 (end), elements are 32-bit object pointers.
    uint32_t cursor = lift_field<uint32_t>(self, 0x80);
    if (cursor > lift_field<uint32_t>(self, 0x84)) {
        invalid_param();
    }

    for (;;) {
        uint32_t end = lift_field<uint32_t>(self, 0x84);
        if (lift_field<uint32_t>(self, 0x80) > end) {
            invalid_param();
        }
        // The asm's "cmp esi,esi / je" check is always equal and never calls invalid_param; omitted.
        if (cursor == end) {
            break;
        }
        if (cursor >= end) {
            invalid_param();
        }

        uint32_t elem = *reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(cursor));
        ext_005864C0(reinterpret_cast<void*>(static_cast<uintptr_t>(elem)), arg);

        if (cursor >= lift_field<uint32_t>(self, 0x84)) {
            invalid_param();
        }
        cursor += 4;
    }
}
} // namespace lift_005864C0

// [0x00586B60] sub_00586B60 (123 bytes)
namespace lift_00586B60 {
// Known callee 0x00528C10: AnimatableTransform::vfunc_forwardToChild (forwards to child vtable slot 14 when non-null).
extern void ext_00528C10(void* self, uint32_t a0, uint32_t a1);
// Self-recursive call to 0x00586B60.
extern void ext_00586B60(void* self, uint32_t a0, uint32_t a1);
// Import slot for MSVCR80!_invalid_parameter_noinfo (debug iterator checks, dropped in portable code).
extern int mem_00925134;

// @name Node::ForwardAndVisitChildren
// @class Node
// @summary Forwards (a0,a1) to the sub-object at +0x0C, then recursively visits every pointer in the list at +0x80..+0x84 with the same arguments.
// @field Node +0x80 uint32_t field_0x80
// @field Node +0x84 uint32_t field_0x84
void fn_00586B60(void* self, uint32_t a0, uint32_t a1) {
    (void)&mem_00925134; // metadata-only: debug iterator-check path omitted
    ext_00528C10(&lift_field<uint8_t>(self, 0x0C), a0, a1);

    // Walk the slot range [begin, end) stored at +0x80 / +0x84.
    uintptr_t slot = lift_field<uint32_t>(self, 0x80);
    const uintptr_t end = lift_field<uint32_t>(self, 0x84);
    while (slot != end) {
        const uintptr_t obj = *reinterpret_cast<const uint32_t*>(slot);
        ext_00586B60(reinterpret_cast<void*>(obj), a0, a1);
        slot += sizeof(uint32_t);
    }
}
} // namespace lift_00586B60

// [0x00586A50] sub_00586A50 (123 bytes)
namespace lift_00586A50 {
// Known callee 0x00528BB0: descriptiveName_00528BB0 (forwardVirtual0x2CIfNonNull) (If this->field_0x04 is non-null, tail-dispatch virtual slot 0x2C/4 on it with the same args; otherwise return 0 (callee pops 8 bytes).)
extern DWORD ext_00528BB0(void* self, DWORD arg0, DWORD arg1);
extern int mem_00925134;

// @name forwardToChildAndRecurseRange
// @class Unknown
// @summary Forwards (arg0, arg1) to the sub-object at this+0x0C via 0x00528BB0, then recursively calls itself on each DWORD pointer in the range [this->field_0x80, this->field_0x84).
// @field Unknown +0x80 DWORD field_0x80
// @field Unknown +0x84 DWORD field_0x84
extern void fn_00586A50(void* self, DWORD arg0, DWORD arg1) {
    // Original asm: lea ecx,[this+0x0C]; call 0x528BB0 (thiscall, 2 stack args).
    ext_00528BB0(static_cast<char*>(self) + 0x0C, arg0, arg1);
    (void)&mem_00925134; // IAT slot for _invalid_parameter_noinfo (MSVC debug checks, dropped)

    // Range iteration over [begin, end) of 4-byte element pointers.
    DWORD cursor = lift_field<DWORD>(self, 0x80);
    while (cursor != lift_field<DWORD>(self, 0x84)) {
        DWORD elem = *reinterpret_cast<const DWORD*>(static_cast<uintptr_t>(cursor));
        fn_00586A50(reinterpret_cast<void*>(static_cast<uintptr_t>(elem)), arg0, arg1);
        cursor += 4;
    }
}
} // namespace lift_00586A50

// [0x005850C0] sub_005850C0 (89 bytes)
namespace lift_005850C0 {
extern void __stdcall ext_0067DAD0(float* mat);
extern void __thiscall ext_00584980(void* self, uint32_t arg);
// Known callee 0x0067DB10: copyPacked3x3ToPaddedMatrix (Copies a packed 3x3 float matrix (36 bytes) from src into a 4-float-stride matrix at self (rows at +0x00, +0x10, +0x20), leaving the padding slots untouched.)
extern void __thiscall ext_0067DB10(void* self, const void* src);

// @name computeIdentityMatrixAndCopyToSelf
// @summary Builds an identity 3x3 float matrix, passes it to sub_0067DAD0, runs sub_00584980 on it with the stack argument, then copies it into self via copyPacked3x3ToPaddedMatrix.
void fn_005850C0(void* self, uint32_t arg) {
    float m[9] = {
        1.0f, 0.0f, 0.0f,
        0.0f, 1.0f, 0.0f,
        0.0f, 0.0f, 1.0f
    };
    ext_0067DAD0(m);
    ext_00584980(m, arg);
    ext_0067DB10(self, m);
}
} // namespace lift_005850C0

// [0x00586030] sub_00586030 (126 bytes)
namespace lift_00586030 {
// IAT slot for MSVCR80!_invalid_parameter_noinfo. Only used by MSVC debug
// iterator-bounds guards in the original; omitted here. Referenced for
// metadata only, not a real access.
extern int mem_00925134;

// @name assignChildDepthsAndIndices
// @summary Stores depth on this node, then recursively visits each child pointer in the child vector at +0x80..+0x84, setting each child's depth+1 and its sibling index at +0x9c.
// @class ChildNode
// @field ChildNode +0x80 uint32_t childVectorBegin
// @field ChildNode +0x84 uint32_t childVectorEnd
// @field ChildNode +0x98 uint32_t depth
// @field ChildNode +0x9c uint32_t childIndex
void fn_00586030(void* self, uint32_t depth) {
    (void)&mem_00925134;
    lift_field<uint32_t>(self, 0x98) = depth;

    uint32_t index = 0;
    uint32_t it = lift_field<uint32_t>(self, 0x80);
    while (it != lift_field<uint32_t>(self, 0x84)) {
        uint32_t childAddr = *reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(it));
        void* child = reinterpret_cast<void*>(static_cast<uintptr_t>(childAddr));

        fn_00586030(child, depth + 1);
        lift_field<uint32_t>(child, 0x9c) = index;

        index += 1;
        it += 4;
    }
}
} // namespace lift_00586030

// [0x00585010] sub_00585010 (126 bytes)
namespace lift_00585010 {
extern void (*mem_00925134)(void);  // import slot: _invalid_parameter_noinfo (MSVCR80)

// @name copyDwordsNotEqualToKey
// @summary Copies each dword in [src, srcEnd) that differs from *key into a destination cursor, then writes {container, cursor} to out.
// @field Unknown +0x08 uint32_t field_0x08
void fn_00585010(uint32_t* out, uint32_t* src, uint32_t* srcEnd, void* container, uint32_t* dst, const uint32_t* key) {
    uint32_t* cur = dst;

    if (src != srcEnd) {
        do {
            if (*src != *key) {
                uint32_t* slot = cur;

                if (container == nullptr) {
                    mem_00925134();
                }
                if (reinterpret_cast<uintptr_t>(cur) >= lift_field<uint32_t>(container, 0x08)) {
                    mem_00925134();
                }
                cur += 1;

                if (container == nullptr) {
                    mem_00925134();
                }
                if (reinterpret_cast<uintptr_t>(slot) >= lift_field<uint32_t>(container, 0x08)) {
                    mem_00925134();
                }
                *slot = *src;
            }
            ++src;
        } while (src != srcEnd);
    }

    out[0] = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(container));
    out[1] = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(cur));
}
} // namespace lift_00585010

// [0x005865D0] sub_005865D0 (129 bytes)
namespace lift_005865D0 {
// Virtual slots used by the inline subobject at self+0x04 (byte offsets 0x20 and 0x3C).
using VirtPredicateFn = BYTE(__thiscall*)(void* self);
using VirtVisitFn = void(__thiscall*)(void* self, void* arg);

// Original asm loads this (_invalid_parameter_noinfo) only on iterator-range assertion failures.
extern int mem_00925134;

// @name Unknown::VisitElementRange
// @class Unknown
// @summary If the inline child's predicate passes (and arg1->flag at +0x08 is clear), notify the child via vslot 15, then recursively visit every element pointer in the range at +0x80..+0x84.
// @field Unknown +0x04 void* childVtbl
// @field Unknown +0x80 void** elemBegin
// @field Unknown +0x84 void** elemEnd
void fn_005865D0(void* self, void* arg1, void* arg2) {
    (void)&mem_00925134;  // range-assert handler reference; only hit on invalid iterators
    auto* child = static_cast<uint8_t*>(self) + 0x04;
    void** vtbl = *reinterpret_cast<void***>(child);

    auto predicate = reinterpret_cast<VirtPredicateFn>(vtbl[8]);
    if (predicate(child) && lift_field<BYTE>(arg1, 0x08) == 0) {
        auto visit = reinterpret_cast<VirtVisitFn>(vtbl[15]);
        visit(child, arg2);
    }

    void** const end = lift_field<void**>(self, 0x84);
    for (void** cur = lift_field<void**>(self, 0x80); cur != end; ++cur) {
        fn_005865D0(*cur, arg1, arg2);
    }
}
} // namespace lift_005865D0

// [0x00586AD0] sub_00586AD0 (129 bytes)
namespace lift_00586AD0 {
// Known callee 0x00528BF0: forwardVirtual0x30IfNonNull (If this->field_0x04 is non-null, tail-calls its vtable slot 12 (+0x30) with the same stack arguments; otherwise returns popping 0xC bytes.)
extern void ext_00528BF0(void* self, uint32_t a0, uint32_t a1, uint32_t a2);
// MSVCR80!_invalid_parameter_noinfo IAT slot: only used by debug range asserts (no-ops for valid state); referenced for metadata only.
extern int mem_00925134;

// @name Unknown::ApplyToChildTree
// @class Unknown
// @summary Forwards (a0, a1, a2) to the sub-object at this+0x0C, then recursively applies the same call to every child pointer stored in the vector at this+0x80..this+0x84.
// @field Unknown +0x80 uint32_t childBegin
// @field Unknown +0x84 uint32_t childEnd
extern void fn_00586AD0(void* self, uint32_t a0, uint32_t a1, uint32_t a2) {
    (void)&mem_00925134;
    ext_00528BF0(static_cast<uint8_t*>(self) + 0x0C, a0, a1, a2);

    uintptr_t cur = lift_field<uint32_t>(self, 0x80);
    while (cur != lift_field<uint32_t>(self, 0x84)) {
        void* child = *reinterpret_cast<void**>(cur);
        fn_00586AD0(child, a0, a1, a2);
        cur += sizeof(uint32_t);
    }
}
} // namespace lift_00586AD0

// [0x0058F770] sub_0058F770 (138 bytes)
namespace lift_0058F770 {
// Known callee 0x0046C3C0: DerivedException::DerivedException (thiscall, no stack args)
extern void* __thiscall ext_0046C3C0(void* self);
// Known callee 0x0058F550: descriptiveName_0058F550 (stdcall, one stack arg, returns it).
// The asm passes the object in ecx (the callee reads ecx), so declare it fastcall:
// ecx = obj, edx = unused, one stack arg = out. Callee's `ret 4` matches.
extern void* __fastcall ext_0058F550(void* obj, void* unused_edx, void* out);
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
void* __stdcall fn_0058F770(void* out, void* obj) {
    if (obj == nullptr) {
        lift_throw_derived_exception();
    }

    // Temp std::string on the frame (asm esp+4 .. esp+0x20, 0x1C bytes).
    alignas(8) unsigned char tmp[0x1C];
    void* src = ext_0058F550(obj, nullptr, tmp);
    lift_string_copy_ctor(out, src);
    lift_string_dtor(tmp);
    return out;
}
} // namespace lift_0058F770

// [0x005860B0] sub_005860B0 (134 bytes)
namespace lift_005860B0 {
extern int mem_00925134; // IAT slot: MSVCR80!_invalid_parameter_noinfo
extern int mem_00924FC4; // IAT slot: MSVCP80 std::operator==(const basic_string&, const basic_string&)

// Calls through the IAT slot at mem_00925134 (asm: call dword ptr [0x925134]).
static void invalid_parameter_noinfo() {
    (*reinterpret_cast<void (**)()>(&mem_00925134))();
}

// Calls through the IAT slot at mem_00924FC4 (asm: push eax; push ebp; call dword ptr [0x924fc4]).
static bool msvcp_string_equal(void* lhs, void* rhs) {
    return (*reinterpret_cast<bool (**)(void*, void*)>(&mem_00924FC4))(lhs, rhs);
}

// @name Unknown::findElementMatchingArg
// @class Unknown
// @summary Scans the element-pointer range [+0x80, +0x84) and returns the first element whose vtable slot 9 result compares equal to arg (nullptr if none).
// @field Unknown +0x80 void** elemBegin
// @field Unknown +0x84 void** elemEnd
void* __thiscall fn_005860B0(void* self, void* arg) {
    void** cur = lift_field<void**>(self, 0x80);
    void** const end = lift_field<void**>(self, 0x84);

    if (!(cur <= end)) {
        invalid_parameter_noinfo();
    }

    while (cur != end) {
        if (!(cur < end)) {
            invalid_parameter_noinfo();
        }

        void* obj = *cur;
        void** vtbl = *reinterpret_cast<void***>(obj);
        auto vfn = reinterpret_cast<void* (__thiscall*)(void*, void*)>(vtbl[9]); // offset 0x24
        void* key = vfn(obj, arg);

        if (msvcp_string_equal(key, arg)) {
            return *cur;
        }

        ++cur;
    }

    return nullptr;
}
} // namespace lift_005860B0

// [0x00586BE0] sub_00586BE0 (134 bytes)
namespace lift_00586BE0 {
// Known callee 0x00585010: copyDwordsNotEqualToKey (Copies each dword in [src, srcEnd) that differs from *key into a destination cursor, then writes {container, cursor} to out.)
extern void ext_00585010(uint32_t* out, uint32_t* src, uint32_t* srcEnd, void* container, uint32_t* dst, const uint32_t* key);
// Import slot: _invalid_parameter_noinfo (MSVCR80), RDATA string "P{b" at 0x00925134 region
extern void (*mem_00925134)(void);

// @name findKeyThenCompactTail
// @summary Scans [begin, end) for the first dword equal to *key; if none is found returns {container, end} via out, otherwise compacts the tail after the match via copyDwordsNotEqualToKey and returns out.
// @field Container +0x08 uint32_t field_0x08
uint32_t* fn_00586BE0(uint32_t* out, void* container, uint32_t* begin, void* expectedContainer, uint32_t* end, const uint32_t* key) {
    uint32_t* cur = begin;
    const uint32_t keyValue = *key;

    while (cur != end && *cur != keyValue) {
        ++cur;
    }

    if (container == nullptr || container != expectedContainer) {
        mem_00925134();
    }

    if (cur == end) {
        out[0] = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(container));
        out[1] = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(cur));
        return out;
    }

    if (container == nullptr) {
        mem_00925134();
    }
    if (reinterpret_cast<uintptr_t>(cur) >= lift_field<uint32_t>(container, 0x08)) {
        mem_00925134();
    }

    ext_00585010(out, cur + 1, end, container, cur, key);
    return out;
}
} // namespace lift_00586BE0

// [0x00586540] sub_00586540 (139 bytes)
namespace lift_00586540 {
extern void ext_00586540(void* self, void* arg1, void* arg2);
extern int mem_00925134;  // _invalid_parameter_noinfo IAT slot (bounds-check guards; metadata only)

using VFuncBool = bool (__thiscall*)(void* self);
using VFuncVoid2 = void (__thiscall*)(void* self, void* a, void* b);

// @name Unknown::dispatchToChildren
// @class Unknown
// @summary If the interface at +0x04 reports true, forward (arg1, arg2) to the interface at +0x08, then recurse into every child pointer in the [+0x80, +0x84) array.
// @field Unknown +0x04 void* field_0x04
// @field Unknown +0x08 void* field_0x08
// @field Unknown +0x80 void** field_0x80
// @field Unknown +0x84 void** field_0x84
void fn_00586540(void* self, void* arg1, void* arg2) {
    (void)&mem_00925134;
    auto* base = static_cast<uint8_t*>(self);

    // Interface at +0x04: vtable slot 7 (offset 0x1c) returns bool.
    void* ifaceA = base + 0x04;
    void** vtA = *reinterpret_cast<void***>(ifaceA);
    if (reinterpret_cast<VFuncBool>(vtA[7])(ifaceA)) {
        // Interface at +0x08: vtable slot 1 (offset 0x04) takes (arg1, arg2).
        void* ifaceB = base + 0x08;
        void** vtB = *reinterpret_cast<void***>(ifaceB);
        reinterpret_cast<VFuncVoid2>(vtB[1])(ifaceB, arg1, arg2);
    }

    // Child array: iterate [begin, end) and recurse on each child object.
    void** it = lift_field<void**>(self, 0x80);
    while (it != lift_field<void**>(self, 0x84)) {
        ext_00586540(*it, arg1, arg2);
        ++it;
    }
}
} // namespace lift_00586540

// [0x005873E0] sub_005873E0 (104 bytes)
namespace lift_005873E0 {
// Known callee 0x00586BE0: findKeyThenCompactTail (Scans [begin, end) for the first dword equal to *key; if none is found returns {container, end} via out, otherwise compacts the tail after the match and returns out.)
extern uint32_t* ext_00586BE0(uint32_t* out, void* container, uint32_t* begin, void* expectedContainer, uint32_t* end, const uint32_t* key);
// Known callee 0x00596660: eraseInt32Range (Validates self-pointer args, erases [first,last) from a 4-byte-element buffer by shifting the tail down, sets end, and writes a 2-pointer result to out.)
extern void ext_00596660(void* self, void** out, void* a2, int32_t* first, void* a4, int32_t* last);
// IAT slot for MSVCR80!_invalid_parameter_noinfo (guard calls omitted below; metadata only).
extern int mem_00925134;

// @name Unknown::findKeyThenEraseTail
// @class Unknown
// @summary Finds *key in the [begin, end) range stored in self, compacts the tail after the match, then erases the trimmed range via eraseInt32Range.
// @field Unknown +0x04 uint32_t* begin
// @field Unknown +0x08 uint32_t* end
void fn_005873E0(void* self, const uint32_t* key) {
    // The three MSVCR80 _invalid_parameter_noinfo guards (begin <= end checks) are
    // assertion boilerplate and are omitted; they only fire on corrupt ranges.
    (void)&mem_00925134;
    uint32_t* begin = lift_field<uint32_t*>(self, 0x04);
    uint32_t* end   = lift_field<uint32_t*>(self, 0x08);

    // Pass 1: locate key and compact tail. Result struct is {ptr0, ptr1}.
    uint32_t* out1 = nullptr;
    alignas(8) uint32_t result1[2] = {0, 0};
    out1 = ext_00586BE0(result1, self, begin, self, end, key);

    void** r = reinterpret_cast<void**>(out1);
    void*  a2    = r[0];
    int32_t* first = reinterpret_cast<int32_t*>(r[1]);

    // Pass 2: erase the range; out receives a 2-pointer result we do not consume.
    void* out2[2] = {nullptr, nullptr};
    ext_00596660(self, out2, a2, first, self, reinterpret_cast<int32_t*>(end));
}
} // namespace lift_005873E0

// [0x00586930] sub_00586930 (139 bytes)
namespace lift_00586930 {
extern void ext_00586930(void* self, DWORD a1, const float* a2);
extern int mem_00925134;

// @name walkChildrenInvokeVfunc3
// @class Unknown
// @summary Calls vfunc[3] on the sub-object at +0x08 with (a1, a2[0], a2[1]), then recurses into each child pointer in the list [+0x80, +0x84) with the same arguments.
// @field Unknown +0x08 void* subObject
// @field Unknown +0x80 DWORD childFirst
// @field Unknown +0x84 DWORD childEnd
void fn_00586930(void* self, DWORD a1, const float* a2) {
    using VFn3 = void(__thiscall*)(void* self, DWORD a1, float x, float y);

    // The original asm guards with MSVCR80!_invalid_parameter_noinfo (IAT slot 0x925134)
    // on out-of-range iterator checks. Those are CRT boilerplate and are omitted here;
    // the reference is kept only so the IAT slot is accounted for.
    (void)&mem_00925134;

    // Sub-object at +0x08: invoke virtual slot 3 (offset 0x0c) with a1 and the two floats.
    DWORD obj = lift_field<DWORD>(self, 0x08);
    DWORD vtbl = *reinterpret_cast<DWORD*>(static_cast<uintptr_t>(obj));
    DWORD slot3 = *reinterpret_cast<DWORD*>(static_cast<uintptr_t>(vtbl) + 0x0c);
    reinterpret_cast<VFn3>(static_cast<uintptr_t>(slot3))(
        reinterpret_cast<void*>(static_cast<uintptr_t>(obj)), a1, a2[0], a2[1]);

    // Walk the child-pointer list [+0x80, +0x84) and recurse on each child.
    DWORD cur = lift_field<DWORD>(self, 0x80);
    for (;;) {
        DWORD end = lift_field<DWORD>(self, 0x84);
        if (cur == end) {
            break;
        }
        DWORD child = *reinterpret_cast<DWORD*>(static_cast<uintptr_t>(cur));
        ext_00586930(reinterpret_cast<void*>(static_cast<uintptr_t>(child)), a1, a2);
        cur += 4;
    }
}
} // namespace lift_00586930

// [0x005869C0] sub_005869C0 (142 bytes)
namespace lift_005869C0 {
extern int mem_00925134;

// @name Unknown::forEachChildRecursive
// @class Unknown
// @summary Recursively visits each pointer in the [+0x80, +0x84) child range, calling this function on each child with the same arguments.
// @field Unknown +0x08 void* field_0x08 (object whose vtable slot 3 is invoked with this = self+8)
// @field Unknown +0x80 void** childBegin
// @field Unknown +0x84 void** childEnd
void fn_005869C0(void* self, void* arg1, float arg2) {
    // Virtual call: vtable slot 3 of the object at self+0x08, with this = self+0x08.
    void* vtable = lift_field<void*>(self, 0x08);
    auto vfn = reinterpret_cast<void (*)(void*, void*, float)>(
        reinterpret_cast<void**>(vtable)[3]);
    vfn(static_cast<uint8_t*>(self) + 0x08, arg1, arg2);

    // Original MSVCR80 _invalid_parameter_noinfo range checks are elided; the
    // indirect slot at mem_00925134 is referenced only as metadata.
    (void)&mem_00925134;

    // Walk the child pointer range; re-read the end pointer each iteration as the original does.
    void** it = lift_field<void**>(self, 0x80);
    while (it != lift_field<void**>(self, 0x84)) {
        fn_005869C0(*it, arg1, arg2);
        ++it;
    }
}
} // namespace lift_005869C0
