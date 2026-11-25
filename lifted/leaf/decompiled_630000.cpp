// Lifted C++ translation unit: lifted/leaf/decompiled_630000.cpp
#include "lift_compat.h"
#include <cstring>
#include <new>
#include <string>

#include <string>
namespace lift_00630E60 {
// @name Unknown::NotifyAndReturnSubobjectF8
// @class Unknown
// @summary Calls ext_00630580 on self, passes its result to ext_00693F40 on the subobject at self+0xF8, and returns that subobject's address.
// @field Unknown +0xF8 uint8_t field_0xF8 (subobject; address taken only, not loaded)

// Callee: returns a pointer derived from self (self+0x114 per summary).
void* ext_00630580(void* self);

// Callee: thiscall-style, `this` = subobject at self+0xF8, one stack argument.
void ext_00693F40(void* subobject, void* arg);

void* fn_00630E60(void* self) {
    uint8_t* subobject = static_cast<uint8_t*>(self) + 0xF8;
    void* arg = ext_00630580(self);
    ext_00693F40(subobject, arg);
    return subobject;
}
} // namespace lift_00630E60

// [0x0063E240] sub_0063E240 (32 bytes)
namespace lift_0063E240 {
// @name sub_0063E240
// @summary Auto-lifted identical-shape clone of 0x004F27E0 (descriptiveName_004F27E0).
namespace lift_004F27E0 {
// @name descriptiveName_004F27E0
// @summary Thiscall initializer: calls ext_004F4D20(this, arg1, arg2), stores the @MO vtable at +0x00, returns this.
// @field Unknown +0x00 DWORD vtable

extern void ext_0063E0C0(void* self, DWORD arg1, DWORD arg2);
extern const char mem_0097CB8C[];

__thiscall void* fn_0063E240(void* self, DWORD arg1, DWORD arg2) {
    ext_0063E0C0(self, arg1, arg2);
    *reinterpret_cast<DWORD*>(self) = static_cast<DWORD>(reinterpret_cast<uintptr_t>(mem_0097CB8C));
    return self;
}
} // namespace lift_004F27E0
} // namespace lift_0063E240

// [0x0063F600] sub_0063F600 (32 bytes)
namespace lift_0063F600 {
// @name sub_0063F600
// @summary Auto-lifted identical-shape clone of 0x004F27E0 (descriptiveName_004F27E0).
namespace lift_004F27E0 {
// @name descriptiveName_004F27E0
// @summary Thiscall initializer: calls ext_004F4D20(this, arg1, arg2), stores the @MO vtable at +0x00, returns this.
// @field Unknown +0x00 DWORD vtable

extern void ext_0063F350(void* self, DWORD arg1, DWORD arg2);
extern const char mem_0097CC60[];

__thiscall void* fn_0063F600(void* self, DWORD arg1, DWORD arg2) {
    ext_0063F350(self, arg1, arg2);
    *reinterpret_cast<DWORD*>(self) = static_cast<DWORD>(reinterpret_cast<uintptr_t>(mem_0097CC60));
    return self;
}
} // namespace lift_004F27E0
} // namespace lift_0063F600

// [0x0063EA50] sub_0063EA50 (37 bytes)
namespace lift_0063EA50 {
// @name sub_0063EA50
// @summary Auto-lifted identical-shape clone of 0x00480280 (IsEmptyDwordRange_00480280).
namespace lift_00480280 {
// @name IsEmptyDwordRange_00480280
// @summary Returns true if the range pointer at +0x04 is null, or the byte span [+0x04, +0x08) has fewer than one 4-byte element (signed (end - begin) >> 2 == 0).
// @field Unknown +0x04 DWORD field_0x04
// @field Unknown +0x08 DWORD field_0x08
BOOLEAN fn_0063EA50(void* self) {
    const DWORD begin = lift_field<DWORD>(self, 0x28);
    if (begin == 0) {
        return 1;
    }
    const DWORD end = lift_field<DWORD>(self, 0x2C);
    const auto diff = static_cast<int32_t>(end - begin);  // signed, like sar
    return (diff >> 2) == 0 ? 1 : 0;
}
} // namespace lift_00480280
} // namespace lift_0063EA50

// [0x0063E0C0] sub_0063E0C0 (36 bytes)
namespace lift_0063E0C0 {
// MSVCP80 std::basic_string<char> copy-constructor import (IAT slot 0x00924FE0).
extern int mem_00924FE0;

// Import thunk for the MSVCP80 basic_string copy-constructor (called via mem_00924FE0).
extern void __thiscall ext_00924FE0(void* self, const void* other);

// @name Unknown::Unknown(uint32_t, const std::string&) (string-copy ctor stub)
// @class <unknown> (this is in ecx; owning class not yet recovered)
// @summary Stamps vtable 0x0097CB4C at +0x00, copy-constructs a std::string from the second argument into this+0x04, stores the first argument at +0x20, and returns this.
// @field <unknown> +0x00 uint32_t vftable
// @field <unknown> +0x04 uint8_t field_0x04[0x1C]
// @field <unknown> +0x20 uint32_t field_0x20
void* __thiscall fn_0063E0C0(void* self, uint32_t arg0, const void* name) {
    lift_field<uint32_t>(self, 0x00) = 0x97CB4Cu;                 // mov dword ptr [esi], 0x97cb4c
    ext_00924FE0(static_cast<uint8_t*>(self) + 4, name);          // lea ecx,[esi+4]; call [0x924fe0] (basic_string copy ctor)
    lift_field<uint32_t>(self, 0x20) = arg0;                      // mov [esi+0x20], ecx (ecx = first arg)
    return self;                                                  // mov eax, esi
}
} // namespace lift_0063E0C0

// [0x00630510] sub_00630510 (40 bytes)
namespace lift_00630510 {
// @name Unknown::copyVec3ToFieldsAndSetFlag
// @class Unknown
// @summary Copies three floats from the source pointer into self+0xB4..0xBC and sets the byte flag at self+0xF6 to 1.
// @field Unknown +0xB4 float field_0xB4
// @field Unknown +0xB8 float field_0xB8
// @field Unknown +0xBC float field_0xBC
// @field Unknown +0xF6 uint8_t field_0xF6
void fn_00630510(void* self, const float* src) {
    auto* base = static_cast<uint8_t*>(self);
    float x, y, z;
    std::memcpy(&x, src + 0, sizeof(float));
    std::memcpy(&y, src + 1, sizeof(float));
    std::memcpy(&z, src + 2, sizeof(float));
    std::memcpy(base + 0xB4, &x, sizeof(float));
    std::memcpy(base + 0xB8, &y, sizeof(float));
    std::memcpy(base + 0xBC, &z, sizeof(float));
    base[0xF6] = 1;
}
} // namespace lift_00630510

// [0x0063DAB0] sub_0063DAB0 (29 bytes)
namespace lift_0063DAB0 {
// Known callee 0x0062CD30: sub_0062CD30_ctor (Initializes object vtable to 0x009791a4 and zeroes two 3-dword blocks at +0x08 and +0x2c.)
extern void ext_0062CD30();

// @name sub_0063DAB0_init
// @class <ClassName> (unknown)
// @summary Calls base constructor sub_0062CD30, sets vtable to 0x009792f4, zeroes float fields at +0x3C/+0x40/+0x44, returns this.
// @field <ClassName> +0x00 uint32_t vtable
// @field <ClassName> +0x3C float field_0x3C
// @field <ClassName> +0x40 float field_0x40
// @field <ClassName> +0x44 float field_0x44
void* fn_0063DAB0(void* self) {
    auto* base = static_cast<uint8_t*>(self);
    ext_0062CD30();

    const float zero = 0.0f;
    const uint32_t vtable = 0x009792f4u;
    std::memcpy(base + 0x00, &vtable, sizeof(vtable));
    std::memcpy(base + 0x44, &zero, sizeof(zero));
    std::memcpy(base + 0x40, &zero, sizeof(zero));
    std::memcpy(base + 0x3C, &zero, sizeof(zero));
    return self;
}
} // namespace lift_0063DAB0

// [0x0063D950]
namespace lift_0063D950 {
// Known callee 0x0062CD30: sub_0062CD30_ctor (Initializes object vtable to 0x009791a4 and zeroes two 3-dword blocks at +0x08 and +0x2c.)
extern void ext_0062CD30(void* self);

// @name constructWithZeroedFloats
// @summary Runs the base constructor, installs vtable 0x009793d4, and zeroes three float fields at +0x40, +0x44, +0x48. Returns this.
// @field Unknown +0x00 uint32_t field_0x00 (vtable pointer, set to 0x009793d4)
// @field Unknown +0x40 float field_0x40
// @field Unknown +0x44 float field_0x44
// @field Unknown +0x48 float field_0x48
void* fn_0063D950(void* self) {
    unsigned char* base = static_cast<unsigned char*>(self);
    ext_0062CD30(self);

    const uint32_t vtable = 0x009793d4u;
    const float zero = 0.0f;

    std::memcpy(base + 0x00, &vtable, sizeof(vtable));
    std::memcpy(base + 0x48, &zero, sizeof(zero));
    std::memcpy(base + 0x44, &zero, sizeof(zero));
    std::memcpy(base + 0x40, &zero, sizeof(zero));

    return self;
}
} // namespace lift_0063D950

// [0x00630540] sub_00630540 (25 bytes)
namespace lift_00630540 {
// Known callee 0x00693F40: sub_00693F40 (148 bytes, thiscall-style: ecx = receiver, one stack argument)
extern void ext_00693F40(void* self, void* arg);

// @name initSubobjectPairAndGetFirst
// @summary Passes this+0x15c as the receiver and this+0x90 as the argument to sub_00693F40, then returns this+0x15c.
void* fn_00630540(void* self) {
    uint8_t* const first = reinterpret_cast<uint8_t*>(self) + 0x15c;
    uint8_t* const second = reinterpret_cast<uint8_t*>(self) + 0x90;
    ext_00693F40(first, second);
    return first;
}
} // namespace lift_00630540

// [0x0063D970] sub_0063D970 (29 bytes)
namespace lift_0063D970 {
// Known callee 0x0062CD30: sub_0062CD30_ctor (Initializes object vtable to 0x009791a4 and zeroes two 3-dword blocks at +0x08 and +0x2c.)
extern std::uint32_t ext_0062CD30(void* self);

// @name Class_InitVtableAndZeroFloats_0063D970
// @class UnknownClass
// @summary Runs the base constructor (ext_0062CD30) on this, installs vtable 0x00979284, zeroes the floats at +0x3c, +0x40 and +0x44, and returns this.
// @field UnknownClass +0x00 void* vtable
// @field UnknownClass +0x3c float field_0x3c
// @field UnknownClass +0x40 float field_0x40
// @field UnknownClass +0x44 float field_0x44
void* fn_0063D970(void* self) {
    ext_0062CD30(self);

    auto* base = static_cast<unsigned char*>(self);

    const std::uint32_t vtable = 0x00979284u;
    std::memcpy(base + 0x00, &vtable, sizeof(vtable));

    const float zero = 0.0f;
    std::memcpy(base + 0x44, &zero, sizeof(zero));
    std::memcpy(base + 0x40, &zero, sizeof(zero));
    std::memcpy(base + 0x3c, &zero, sizeof(zero));

    return self;
}
} // namespace lift_0063D970

// [0x0063DDF0]
namespace lift_0063DDF0 {
// Known callee 0x0062CD30: sub_0062CD30_ctor (initializes vtable to 0x009791a4 and zeroes blocks at +0x08 and +0x2c).
extern void* ext_0062CD30(void* self);

// @name sub_0063DDF0_initVtableAndZeroFloats
// @class <Class> (unknown; vtable 0x009794b4 not yet mapped to a class)
// @summary Runs base constructor ext_0062CD30, sets vtable to 0x009794b4, zeroes floats at +0x38/+0x3c/+0x40, returns this.
// @field field_0x00 uint32_t vtable
// @field field_0x38 float field_0x38
// @field field_0x3c float field_0x3c
// @field field_0x40 float field_0x40
void* fn_0063DDF0(void* self) {
    ext_0062CD30(self);
    lift_field<uint32_t>(self, 0x00) = 0x009794B4u;
    lift_field<float>(self, 0x40) = 0.0f;
    lift_field<float>(self, 0x3C) = 0.0f;
    lift_field<float>(self, 0x38) = 0.0f;
    return self;
}
} // namespace lift_0063DDF0

// [0x0063DE10] sub_0063DE10 (29 bytes)
namespace lift_0063DE10 {
// Known callee 0x0062CD30: sub_0062CD30_ctor (Initializes object vtable to 0x009791a4 and zeroes two 3-dword blocks at +0x08 and +0x2c.)
extern uint32_t ext_0062CD30(uint32_t this_ptr);

// @name Unknown::initVtableAndZeroFloats
// @class Unknown
// @summary Runs the base constructor ext_0062CD30, installs vtable 0x00979444, zeroes the floats at +0x38/+0x3c/+0x40, and returns this.
// @field Unknown +0x00 void* vptr
// @field Unknown +0x38 float field_0x38
// @field Unknown +0x3c float field_0x3c
// @field Unknown +0x40 float field_0x40
void* __thiscall fn_0063DE10(void* self) {
    ext_0062CD30(static_cast<uint32_t>(reinterpret_cast<uintptr_t>(self))); // call 0x62CD30; this in ecx

    lift_field<uint32_t>(self, 0x00) = 0x00979444u;   // mov [esi], 0x979444
    lift_field<float>(self, 0x40) = 0.0f;             // fst [esi+0x40] (fldz)
    lift_field<float>(self, 0x3C) = 0.0f;             // fst [esi+0x3c]
    lift_field<float>(self, 0x38) = 0.0f;             // fstp [esi+0x38] (pops the zero)
    return self;                                      // mov eax, esi
}
} // namespace lift_0063DE10

// [0x0063DB50]
namespace lift_0063DB50 {
// @name Unknown::initFloatsAndVtable
// @class Unknown
// @summary Calls base ctor sub_0062CD30, sets vtable 0x00979364, zeroes +0x3C/+0x40/+0x44 and sets +0x48 to 0.2f.
// @field Unknown +0x00 uint32_t field_0x00 (vtable pointer)
// @field Unknown +0x3C float field_0x3C
// @field Unknown +0x40 float field_0x40
// @field Unknown +0x44 float field_0x44
// @field Unknown +0x48 float field_0x48

extern uint32_t ext_0062CD30(uint32_t this_ptr);

extern const float mem_00940694;

uint32_t sub_0063DB50(uint32_t this_ptr) {
    ext_0062CD30(this_ptr);
    auto* self = reinterpret_cast<uint8_t*>(this_ptr);
    *reinterpret_cast<uint32_t*>(self + 0x00) = 0x00979364u;
    *reinterpret_cast<float*>(self + 0x3C) = 0.0f;
    *reinterpret_cast<float*>(self + 0x40) = 0.0f;
    *reinterpret_cast<float*>(self + 0x44) = 0.0f;
    *reinterpret_cast<float*>(self + 0x48) = mem_00940694;
    return this_ptr;
}
} // namespace lift_0063DB50

// [0x0063EA80] sub_0063EA80 (69 bytes)
namespace lift_0063EA80 {
// Known callee 0x0063E970: sub_0063E970 (Stores address of mem_0097CC34 into field at offset +0x0.)
extern void __fastcall ext_0063E970(void* self);
// Imported string destructor slot at 0x00924FF4 (MSVCP80 basic_string::~basic_string).
extern uint32_t mem_00924FF4;

// @name Unknown::destroyStringAndStampVtable
// @class Unknown
// @summary Destroys the std::string at offset +0x04, then stores the vtable pointer at +0x00 via ext_0063E970.
// @field Unknown +0x00 void* field_0x00
// @field Unknown +0x04 std::string field_0x04
void __fastcall fn_0063EA80(void* self) {
    using StringDtorFn = void(__fastcall*)(void* this_ptr);
    uint8_t* base = static_cast<uint8_t*>(self);

    // Destroy the embedded std::string at self+0x04 (original: ecx = self+4; call [mem_00924FF4]).
    StringDtorFn string_dtor = reinterpret_cast<StringDtorFn>(static_cast<uintptr_t>(mem_00924FF4));
    string_dtor(base + 0x04);

    // Stamp the vtable/field at +0x00 (original: ecx = self; call sub_0063E970).
    ext_0063E970(self);
}
} // namespace lift_0063EA80

// [0x0063E9E0] sub_0063E9E0 (77 bytes)
namespace lift_0063E9E0 {
// Known callee 0x0063E0F0: sub_0063E0F0 (Auto-lifted identical-shape clone of 0x00519CE0 (std::basic_string<char>::~basic_string (vtable-stamping thunk)).)
extern void ext_0063E0F0(void* self);
extern int mem_00924FF4;

// @name Unknown::DestroyStringThenCallback_0063E9E0
// @class Unknown
// @summary Destroys the std::string member at +0x24 via its imported destructor, then invokes sub_0063E0F0 on self.
// @field Unknown +0x24 std::string field_0x24
void fn_0063E9E0(void* self) {
    // mem_00924FF4 holds the address of the std::string destructor (imported from MSVCP80).
    using DtorFn = void (*)(void*);
    const auto dtor = reinterpret_cast<DtorFn>(
        static_cast<uintptr_t>(static_cast<uint32_t>(mem_00924FF4)));
    auto* base = static_cast<uint8_t*>(self);
    dtor(base + 0x24);
    ext_0063E0F0(self);
}
} // namespace lift_0063E9E0

// [0x0063FFF0]
namespace lift_0063FFF0 {
extern uint32_t mem_00924FE0;

// @name sub_0063FFF0_copy_ctor
// @summary Copy constructor setting vftable 0x0097CC3C and copying std::string at +0x04
// @field Unknown +0x00 uint32_t vftable
// @field Unknown +0x04 std::string field_0x04
uint32_t __thiscall sub_0063FFF0(uint32_t this_ptr, uint32_t other_ptr) {
    *reinterpret_cast<uint32_t*>(this_ptr) = 0x0097CC3Cu;
    using string_copy_ctor_t = uint32_t(__thiscall*)(uint32_t, uint32_t);
    auto string_copy_ctor = reinterpret_cast<string_copy_ctor_t>(mem_00924FE0);
    string_copy_ctor(this_ptr + 4u, other_ptr + 4u);
    return this_ptr;
}
} // namespace lift_0063FFF0

// [0x0063E980] sub_0063E980 (82 bytes)
namespace lift_0063E980 {
// @name ConstructFromString
// @summary Initializes an object's vtable pointer to 0x0097CC3C and copy-constructs a std::string member at +0x04 from the argument.
// @field Object +0x00 uint32_t vtable
// @field Object +0x04 std::string name

namespace {
constexpr uint32_t kVtable_0097CC3C = 0x0097CC3C;
}

void fn_0063E980(void* self, const std::string& src) {
    // The original calls the base initializer sub_0063E960, which only stores
    // 0x0097CC34 at +0x00; that value is immediately overwritten with
    // 0x0097CC3C below, so the base call has no observable effect here.
    std::memcpy(self, &kVtable_0097CC3C, sizeof(uint32_t));

    // Copy-construct the std::string member at +0x04 in place.
    ::new (static_cast<void*>(static_cast<unsigned char*>(self) + 0x04))
        std::string(src);
}
} // namespace lift_0063E980

// [0x0063F350] sub_0063F350 (85 bytes)
namespace lift_0063F350 {
// Known callee 0x0063E0C0: Unknown::Unknown(uint32_t, const std::string&) (string-copy ctor stub) (Stamps vtable 0x0097CB4C at +0x00, copy-constructs a std::string from the second argument into this+0x04, stores the first argument at +0x20, and returns this.)
extern void* ext_0063E0C0(void* self, uint32_t arg0, const void* name);

// @name Unknown::derivedCtor_0063F350
// @class Unknown
// @summary Base-constructs via ext_0063E0C0, installs the derived vtable at 0x0097CC44, zeroes the five fields at +0x28..+0x38, and returns this.
// @field Unknown +0x00 uint32_t vfptr
// @field Unknown +0x28 uint32_t field_0x28
// @field Unknown +0x2C uint32_t field_0x2c
// @field Unknown +0x30 uint32_t field_0x30
// @field Unknown +0x34 uint32_t field_0x34
// @field Unknown +0x38 uint32_t field_0x38
//
// The original wraps the base-constructor call in a structured exception frame
// (scope -1, handler 0x008AED58). That frame only matters for unwinding if the
// base constructor throws, so this portable form does not model it.
void* fn_0063F350(void* self, uint32_t arg0, const void* name) {
    ext_0063E0C0(self, arg0, name);

    lift_field<uint32_t>(self, 0x00) = 0x0097CC44;
    lift_field<uint32_t>(self, 0x28) = 0;
    lift_field<uint32_t>(self, 0x2C) = 0;
    lift_field<uint32_t>(self, 0x30) = 0;
    lift_field<uint32_t>(self, 0x34) = 0;
    lift_field<uint32_t>(self, 0x38) = 0;

    return self;
}
} // namespace lift_0063F350

// [0x0063F960] sub_0063F960 (82 bytes)
namespace lift_0063F960 {
// Known callee 0x0063F350: Unknown::derivedCtor_0063F350 (Base-constructs via ext_0063E0C0, installs the derived vtable at 0x0097CC44, zeroes the five fields at +0x28..+0x38, and returns this.)
extern void* ext_0063F350(void* self, uint32_t arg0, const void* name);

// @name Unknown::derivedCtorWrap_0063F960
// @class Unknown
// @summary Calls derivedCtor_0063F350 with the two stack args, installs the secondary vtable at 0x0097CCB0, zeroes the four fields at +0x40..+0x4C, and returns this.
// @field Unknown +0x00 uint32_t vtable
// @field Unknown +0x40 uint32_t field_0x40
// @field Unknown +0x44 uint32_t field_0x44
// @field Unknown +0x48 uint32_t field_0x48
// @field Unknown +0x4c uint8_t field_0x4c
void* fn_0063F960(void* self, uint32_t arg0, const void* name) {
    // The original wraps the call in an SEH frame (fs:[0] push/pop); that is
    // exception-handling plumbing with no portable equivalent and is omitted.
    ext_0063F350(self, arg0, name);

    // Vtable slot at +0x00 is a 32-bit pointer in the original layout.
    constexpr uint32_t kSecondaryVtable = 0x0097CCB0u;
    lift_field<uint32_t>(self, 0x00) = kSecondaryVtable;

    lift_field<uint32_t>(self, 0x40) = 0;
    lift_field<uint32_t>(self, 0x44) = 0;
    lift_field<uint32_t>(self, 0x48) = 0;
    lift_field<uint8_t>(self, 0x4c) = 0;

    return self;
}
} // namespace lift_0063F960

// [0x0063F480]
namespace lift_0063F480 {
// @name eraseAndDeleteElement
// @summary Validates an iterator, deletes the pointed-to object, and shifts remaining elements left.
// @field this +0x2c uint32_t field_0x2c


extern uint32_t mem_00925134; // MSVCR80!_invalid_parameter_noinfo
extern uint32_t mem_009251EC; // MSVCR80!memmove_s

void __thiscall sub_0063F480(uint32_t self, uint32_t container, uint32_t iter) {
    using invalid_param_fn = void(__cdecl*)();
    using memmove_s_fn = int(__cdecl*)(void*, uint32_t, const void*, uint32_t);
    using dtor_fn = void(__thiscall*)(uint32_t, int32_t);

    auto invalid_param = reinterpret_cast<invalid_param_fn>(mem_00925134);
    if (container == 0) {
        invalid_param();
    }
    if (iter >= *reinterpret_cast<uint32_t*>(container + 0x8)) {
        invalid_param();
    }

    uint32_t obj = *reinterpret_cast<uint32_t*>(iter);
    if (obj != 0) {
        uint32_t vtable = *reinterpret_cast<uint32_t*>(obj);
        auto dtor = reinterpret_cast<dtor_fn>(*reinterpret_cast<uint32_t*>(vtable));
        dtor(obj, 1);
    }

    uint32_t end_ptr = *reinterpret_cast<uint32_t*>(self + 0x2c);
    uint32_t next_ptr = iter + 4;
    int32_t count = static_cast<int32_t>(end_ptr - next_ptr) >> 2;
    if (count > 0) {
        uint32_t bytes = static_cast<uint32_t>(count) * 4;
        auto memmove_s_ptr = reinterpret_cast<memmove_s_fn>(mem_009251EC);
        memmove_s_ptr(reinterpret_cast<void*>(iter), bytes, reinterpret_cast<const void*>(next_ptr), bytes);
    }

    *reinterpret_cast<uint32_t*>(self + 0x2c) -= 4;
}
} // namespace lift_0063F480

// [0x00632A20] sub_00632A20 (87 bytes)
namespace lift_00632A20 {
// @name sub_00632A20
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B529A8;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B529A4;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_00632A20() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8ADE6Eu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B529A8 & 1u) == 0) {
        mem_00B529A8 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B529A4, frame[0]);
        mem_00B529A4 = 0x979B04u;
    }

    mem_fs_0 = frame[0];
    return &mem_00B529A4;
}
} // namespace lift_004CAE30
} // namespace lift_00632A20

// [0x00632A80] sub_00632A80 (87 bytes)
namespace lift_00632A80 {
// @name sub_00632A80
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B529B0;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B529AC;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_00632A80() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8ADE8Eu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B529B0 & 1u) == 0) {
        mem_00B529B0 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B529AC, frame[0]);
        mem_00B529AC = 0x979BDCu;
    }

    mem_fs_0 = frame[0];
    return &mem_00B529AC;
}
} // namespace lift_004CAE30
} // namespace lift_00632A80

// [0x00632AE0] sub_00632AE0 (87 bytes)
namespace lift_00632AE0 {
// @name sub_00632AE0
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B529B8;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B529B4;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_00632AE0() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8ADEAEu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B529B8 & 1u) == 0) {
        mem_00B529B8 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B529B4, frame[0]);
        mem_00B529B4 = 0x979CB4u;
    }

    mem_fs_0 = frame[0];
    return &mem_00B529B4;
}
} // namespace lift_004CAE30
} // namespace lift_00632AE0

// [0x00632B40] sub_00632B40 (87 bytes)
namespace lift_00632B40 {
// @name sub_00632B40
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B529C0;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B529BC;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_00632B40() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8ADECEu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B529C0 & 1u) == 0) {
        mem_00B529C0 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B529BC, frame[0]);
        mem_00B529BC = 0x979D8Cu;
    }

    mem_fs_0 = frame[0];
    return &mem_00B529BC;
}
} // namespace lift_004CAE30
} // namespace lift_00632B40

// [0x00632BA0] sub_00632BA0 (87 bytes)
namespace lift_00632BA0 {
// @name sub_00632BA0
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B529C8;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B529C4;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_00632BA0() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8ADEEEu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B529C8 & 1u) == 0) {
        mem_00B529C8 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B529C4, frame[0]);
        mem_00B529C4 = 0x979E64u;
    }

    mem_fs_0 = frame[0];
    return &mem_00B529C4;
}
} // namespace lift_004CAE30
} // namespace lift_00632BA0

// [0x00632C00] sub_00632C00 (87 bytes)
namespace lift_00632C00 {
// @name sub_00632C00
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B529D0;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B529CC;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_00632C00() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8ADF0Eu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B529D0 & 1u) == 0) {
        mem_00B529D0 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B529CC, frame[0]);
        mem_00B529CC = 0x979F3Cu;
    }

    mem_fs_0 = frame[0];
    return &mem_00B529CC;
}
} // namespace lift_004CAE30
} // namespace lift_00632C00

// [0x00632C60] sub_00632C60 (87 bytes)
namespace lift_00632C60 {
// @name sub_00632C60
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B529D8;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B529D4;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_00632C60() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8ADF2Eu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B529D8 & 1u) == 0) {
        mem_00B529D8 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B529D4, frame[0]);
        mem_00B529D4 = 0x97A014u;
    }

    mem_fs_0 = frame[0];
    return &mem_00B529D4;
}
} // namespace lift_004CAE30
} // namespace lift_00632C60

// [0x00632CC0] sub_00632CC0 (87 bytes)
namespace lift_00632CC0 {
// @name sub_00632CC0
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B529E0;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B529DC;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_00632CC0() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8ADF4Eu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B529E0 & 1u) == 0) {
        mem_00B529E0 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B529DC, frame[0]);
        mem_00B529DC = 0x97A0ECu;
    }

    mem_fs_0 = frame[0];
    return &mem_00B529DC;
}
} // namespace lift_004CAE30
} // namespace lift_00632CC0

// [0x0063CC00] sub_0063CC00 (87 bytes)
namespace lift_0063CC00 {
// @name sub_0063CC00
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B53180;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B5317C;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_0063CC00() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8AE8FEu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B53180 & 1u) == 0) {
        mem_00B53180 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B5317C, frame[0]);
        mem_00B5317C = 0x97C844u;
    }

    mem_fs_0 = frame[0];
    return &mem_00B5317C;
}
} // namespace lift_004CAE30
} // namespace lift_0063CC00
