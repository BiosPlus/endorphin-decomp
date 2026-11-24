// Lifted C++ translation unit: lifted/leaf/tiny_6A0000.cpp
#include "lift_compat.h"
extern "C" int mem_0098FB84;
extern "C" void __fastcall ext_00401BB0(void* self);

extern "C" void __fastcall ext_00401BB0(void* self);
// @name fn_006AD950
// @class UnknownObject
// @summary Increments the 32-bit counter at offset +0x38 of the object passed in ecx.
// @field UnknownObject +0x38 int32_t field_0x38
void fn_006AD950(void* self) {
    int32_t* counter = reinterpret_cast<int32_t*>(static_cast<unsigned char*>(self) + 0x38);
    ++(*counter);
}
extern "C" int mem_00990D38;
extern "C" uintptr_t mem_009244D4;
extern "C" uintptr_t mem_009242F8;
#include <cstdint>

// [0x006A2C20] sub_006A2C20 (11 bytes)
// @name sub_006A2C20
// @summary Destructor tail-call: restores vtable mem_0098FB84 and tail-calls base destructor sub_00401BB0.
extern "C" void __fastcall fn_006A2C20(void* self) {
    lift_field<void*>(self, 0x0) = &mem_0098FB84;
    ext_00401BB0(self);
}

// [0x006ACDB0] sub_006ACDB0 (6 bytes)
// @name sub_006ACDB0
// @summary Returns address of global mem_00990D38.
extern "C" void* __cdecl fn_006ACDB0(void) {
    return &mem_00990D38;
}

// [0x006AD000] sub_006AD000 (9 bytes)
// @name sub_006AD000
// @summary This-adjustor thunk: adjusts `this` by +0x8 and forwards through mem_009244D4.
extern "C" void __fastcall fn_006AD000(void* self) {
    typedef void (__fastcall* ForwardFn)(void*);
    ForwardFn target = reinterpret_cast<ForwardFn>(mem_009244D4);
    target(static_cast<char*>(self) + 0x8);
}

// [0x006AD040] sub_006AD040 (9 bytes)
// @name sub_006AD040
// @summary This-adjustor thunk: adjusts `this` by +0xC and forwards through mem_009242F8.
extern "C" void __fastcall fn_006AD040(void* self) {
    typedef void (__fastcall* ForwardFn)(void*);
    ForwardFn target = reinterpret_cast<ForwardFn>(mem_009242F8);
    target(static_cast<char*>(self) + 0xC);
}

// [0x006ACFC0]
namespace lift_006ACFC0 {
// @name sub_006ACFC0
// @summary Reads a byte at offset +0x4 from the pointer stored at this + 0x4
// @field unknown +0x04 uint32_t field_0x04


uint32_t mem_read32(uintptr_t addr);
uint8_t mem_read8(uintptr_t addr);

uint8_t __fastcall sub_006ACFC0(uintptr_t ecx) {
    uint32_t ptr = mem_read32(ecx + 0x4);
    return mem_read8(ptr + 0x4);
}
} // namespace lift_006ACFC0

// [0x006AD090]
namespace lift_006AD090 {
extern uint32_t mem_read32(uint32_t addr);
extern uint8_t mem_read8(uint32_t addr);

// @name sub_006AD090
// @summary Reads a byte at offset +0x5 from the pointer stored at this+0x4
// @field unknown +0x04 uint32_t field_0x04
uint8_t __thiscall sub_006AD090(uint32_t self) {
    uint32_t ptr = mem_read32(self + 0x4);
    return mem_read8(ptr + 0x5);
}
} // namespace lift_006AD090

// [0x006AD180]
namespace lift_006AD180 {
// @name getDerefField0x4
// @summary Reads a pointer at offset 0x4 and returns the dereferenced 32-bit value.
// @field unknown +0x04 uint32_t* field_0x04
uint32_t __thiscall sub_006AD180(void* self) {
    uint32_t ptr = *reinterpret_cast<const uint32_t*>(reinterpret_cast<const uint8_t*>(self) + 0x4);
    return *reinterpret_cast<const uint32_t*>(static_cast<uintptr_t>(ptr));
}
} // namespace lift_006AD180

// [0x006AFDC0]
namespace lift_006AFDC0 {
// @name sub_006AFDC0
// @summary Constructor/initializer setting vtable pointer at +0x00 to 0x00991178
// @field this +0x00 uint32_t vtable


extern uint32_t mem_00991178;

uint32_t __thiscall sub_006AFDC0(uint32_t ecx) {
    *reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(ecx)) = 0x00991178u;
    return ecx;
}
} // namespace lift_006AFDC0

// [0x006A4CD0]
namespace lift_006A4CD0 {
void mem_write32(uint32_t addr, uint32_t val);

// @name sub_006A4CD0_init_one
// @summary Sets the 32-bit field at offset +0x00 to 1 and returns this.
// @field Object +0x00 uint32_t field_0x00
uint32_t __fastcall sub_006A4CD0(uint32_t self) {
    mem_write32(self, 1);
    return self;
}
} // namespace lift_006A4CD0

// [0x006A3F80]
namespace lift_006A3F80 {
extern uint32_t mem_00AA4B74;

// @name setGlobal_00AA4B74
// @summary Stores the 32-bit argument into mem_00AA4B74 and returns it.
uint32_t sub_006A3F80(uint32_t value) {
    mem_00AA4B74 = value;
    return value;
}
} // namespace lift_006A3F80

// [0x006AD110]
namespace lift_006AD110 {
// @name sub_006AD110_getField24
// @summary Returns the 32-bit value at offset +0x24 if the pointer is non-null, otherwise 0.
// @field unknown +0x24 uint32_t field_0x24
uint32_t __thiscall sub_006AD110(uintptr_t self) {
    if (self == 0) {
        return 0;
    }
    return *reinterpret_cast<const uint32_t*>(self + 0x24);
}
} // namespace lift_006AD110

// [0x006AD120]
namespace lift_006AD120 {
// @name get_field_0x20
// @summary Returns the 32-bit field at offset 0x20, or 0 if self is null.
// @field Object +0x20 uint32_t field_0x20
uint32_t __fastcall sub_006AD120(uint32_t self) {
    if (self == 0) {
        return 0;
    }
    return *reinterpret_cast<const uint32_t*>(static_cast<uintptr_t>(self) + 0x20);
}
} // namespace lift_006AD120

// [0x006ACFD0]
namespace lift_006ACFD0 {
// @name getField0x1COrZero
// @summary Returns the 32-bit field at offset 0x1C if the object pointer is non-null, otherwise 0.
// @field Object +0x1C uint32_t field_0x1C
uint32_t __thiscall sub_006ACFD0(void* self) {
    if (!self) {
        return 0;
    }
    return *reinterpret_cast<const uint32_t*>(static_cast<const uint8_t*>(self) + 0x1c);
}
} // namespace lift_006ACFD0

// [0x006A2B10] sub_006A2B10 (12 bytes)
namespace lift_006A2B10 {
// External lookup table at VA 0x00AA4B08 (array of 32-bit words).
extern const uint32_t mem_00AA4B08[];

// @name TableLookup_006A2B10
// @summary Returns the 32-bit entry at index (cdecl arg) of the global table at 0x00AA4B08.
uint32_t fn_006A2B10(uint32_t index) {
    return mem_00AA4B08[index];
}
} // namespace lift_006A2B10

// [0x006AD170] sub_006AD170 (12 bytes)
namespace lift_006AD170 {
// @name storeThroughPointerField_006AD170
// @class <unknown>
// @summary Stores the stack argument (32-bit) through the pointer held at this+0x04 (__thiscall, ret 4).
// @field <unknown> +0x04 uint32_t* field_0x04
void fn_006AD170(void* self, uint32_t value) {
    uint32_t* target = lift_field<uint32_t*>(self, 0x04);
    *target = value;
}
} // namespace lift_006AD170

// [0x006A0670]
namespace lift_006A0670 {
// @name Unknown::zeroFields4_8_C
// @class Unknown
// @summary Zeroes the dwords at this+0x4, this+0x8 and this+0xC, and returns this.
// @field Unknown +0x04 uint32_t field_0x04
// @field Unknown +0x08 uint32_t field_0x08
// @field Unknown +0x0C uint32_t field_0x0C

struct Unknown {
    uint8_t pad_00[0x04];
    uint32_t field_0x04;
    uint32_t field_0x08;
    uint32_t field_0x0C;
};

// Thiscall-style: `this` arrives in ECX and is returned in EAX.
Unknown* zeroFields4_8_C(Unknown* self) {
    self->field_0x04 = 0;
    self->field_0x08 = 0;
    self->field_0x0C = 0;
    return self;
}
} // namespace lift_006A0670

// [0x006ACF90]
namespace lift_006ACF90 {
// @name sub_006ACF90
// @class (unknown)
// @summary If `this` (ECX) is non-null, store the low byte of the stack argument at this+0x40; stdcall, pops 4.
// @field (unknown) +0x40 uint8_t field_0x40

void sub_006ACF90(void* ecx, uint8_t arg)
{
    if (ecx != nullptr) {
        reinterpret_cast<uint8_t*>(ecx)[0x40] = arg;
    }
}
} // namespace lift_006ACF90

// [0x006AD070] sub_006AD070 (14 bytes)
namespace lift_006AD070 {
// @name sub_006AD070
// @class (unknown)
// @summary If `this` (ECX) is non-null, store the stack argument (dword) at this+0x20; stdcall-style, pops 4.
// @field (unknown) +0x20 uint32_t field_0x20
void sub_006AD070(void* ecx, uint32_t arg)
{
    if (ecx != nullptr) {
        reinterpret_cast<uint32_t*>(reinterpret_cast<uint8_t*>(ecx) + 0x20)[0] = arg;
    }
}
} // namespace lift_006AD070

// [0x006AD080]
namespace lift_006AD080 {
// @name Unknown::setField24IfNonNull
// @class Unknown
// @summary If the object pointer is non-null, store the single stack argument at +0x24; callee pops 4 bytes.
// @field Unknown +0x24 int32_t field_0x24

struct Unknown {
    unsigned char _pad0[0x24];
    int32_t field_0x24;
};

// Lifted from: test ecx,ecx / je / mov eax,[esp+4] / mov [ecx+0x24],eax / ret 4
// ecx = this (may be null), arg = first stack argument.
void Unknown_setField24IfNonNull(Unknown* self, int32_t arg)
{
    if (self != nullptr) {
        self->field_0x24 = arg;
    }
}
} // namespace lift_006AD080

// [0x006AD0E0]
namespace lift_006AD0E0 {
// @name Unknown::setField28IfNonNull
// @class Unknown
// @summary If this is non-null, store the stack argument into this->field_0x28; otherwise do nothing. Callee cleans up 4 bytes.
// @field Unknown +0x28 int32_t field_0x28

struct Unknown {
    unsigned char _pad_0000[0x28];
    int32_t field_0x28;
};

// Calling convention: this in ECX, one stack argument, callee pops 4 bytes (ret 4).
static void setField28IfNonNull_impl(Unknown* self, int32_t value) {
    if (self != nullptr) {
        self->field_0x28 = value;
    }
}
} // namespace lift_006AD0E0

// [0x006AD0F0] sub_006AD0F0 (14 bytes)
namespace lift_006AD0F0 {
// @name Unknown::setField2C
// @class Unknown
// @summary If self is non-null, store the single stack argument into self->field_0x2c (DWORD).
// @field Unknown +0x2c DWORD field_0x2c

// Original: ecx = this (may be null), [esp+4] = value, callee pops 4 bytes (ret 4).
void fn_006AD0F0(void* self, DWORD value) {
    if (self != nullptr) {
        *reinterpret_cast<DWORD*>(static_cast<unsigned char*>(self) + 0x2c) = value;
    }
}
} // namespace lift_006AD0F0

// [0x006AD960] sub_006AD960 (15 bytes)
namespace lift_006AD960 {
// @name ReleaseRefAndNotifyOnZero
// @class Unknown
// @summary Decrements the int32 counter at self+0x38; when it reaches zero, calls vtable slot 0 on self with argument 1.
// @field Unknown +0x38 int32_t field_0x38


// Thiscall-style virtual slot 0: receives `self` as the implicit object and one int argument.
using VirtualSlot0Fn = void(__thiscall*)(void* self, int arg);

void fn_006AD960(void* self) {
    auto* counter = reinterpret_cast<int32_t*>(reinterpret_cast<uint8_t*>(self) + 0x38);
    *counter -= 1;
    if (*counter != 0) {
        return;
    }

    void** vtable = *reinterpret_cast<void***>(self);
    auto slot0 = reinterpret_cast<VirtualSlot0Fn>(vtable[0]);
    slot0(self, 1);
}
} // namespace lift_006AD960
