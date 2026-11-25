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

// [0x00584B10]
namespace lift_00584B10 {
extern uint32_t mem_r32(uint32_t addr);

// @name findFirstMatchingAncestor
// @summary Walks the +0x94 parent/next chain starting at this and returns the first node whose vtable+0x70 predicate returns true.
// @field Node +0x00 uint32_t* vtable
// @field Node +0x94 uint32_t next

uint32_t __thiscall sub_00584B10(uint32_t self) {
    auto vfn = reinterpret_cast<uint8_t(__thiscall*)(uint32_t)>(mem_r32(mem_r32(self) + 0x70));
    if (vfn(self) != 0) {
        return self;
    }

    uint32_t result = 0;
    uint32_t cur = mem_r32(self + 0x94);
    while (cur != 0 && result == 0) {
        auto cur_vfn = reinterpret_cast<uint8_t(__thiscall*)(uint32_t)>(mem_r32(mem_r32(cur) + 0x70));
        if (cur_vfn(cur) != 0) {
            result = cur;
        }
        cur = mem_r32(cur + 0x94);
    }
    return result;
}
} // namespace lift_00584B10

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
