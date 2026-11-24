// Lifted C++ translation unit: lifted/leaf/tiny_5B0000.cpp
#include "lift_compat.h"
extern "C" int mem_0095F7EC;

// [0x005B1140] sub_005B1140 (7 bytes)
// @name sub_005B1140
// @summary Stores address of mem_0095F7EC into field at offset +0x0.
extern "C" void __fastcall fn_005B1140(void* self) {
    lift_field<void*>(self, 0x0) = &mem_0095F7EC;
}

// [0x005B6600] sub_005B6600 (8 bytes)
// @name sub_005B6600
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x100.
extern "C" void __fastcall fn_005B6600(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x100);
    target(self);
}

// [0x005B11D0]
namespace lift_005B11D0 {
// @name UnknownClass::getElementPtr
// @class UnknownClass
// @summary Returns a pointer to the 32-bit element at the given index in an inline array at offset 0x10.
// @field UnknownClass +0x10 uint32_t[] field_0x10


uint32_t* __thiscall sub_005B11D0(uintptr_t self, uint32_t index) {
    return reinterpret_cast<uint32_t*>(self + 0x10 + index * 4);
}
} // namespace lift_005B11D0

// [0x005B11E0]
namespace lift_005B11E0 {
// @name getFloatAt
// @summary Returns a float from a 32-bit float array at offset +0x10 indexed by the argument
// @field Object +0x10 float[] field_0x10


float mem_read_f32(uint32_t addr);

float __thiscall sub_005B11E0(uint32_t ecx, uint32_t index) {
    return mem_read_f32(ecx + 4 * index + 0x10);
}
} // namespace lift_005B11E0

// [0x005B64D0]
namespace lift_005B64D0 {
// @name sub_005B64D0_IsField184Equal6
// @summary Returns true if the int32 at this+0x184 equals 6, otherwise false (thiscall, this in ECX).
// @field Unknown +0x184 int32_t field_0x184

bool sub_005B64D0(const unsigned char* self) {
    const int32_t value = *reinterpret_cast<const int32_t*>(self + 0x184);
    return value == 6;
}
} // namespace lift_005B64D0

// [0x005B72E0] sub_005B72E0 (16 bytes)
namespace lift_005B72E0 {
extern void ext_005CE9B0(void* self);

// @name Unknown::ForwardToSubobject158
// @class Unknown
// @summary Loads the DWORD at +0x158; if non-zero, tail-forwards to ext_005CE9B0 with it as self.
// @field Unknown +0x158 DWORD field_0x158
void fn_005B72E0(void* self) {
    DWORD sub = *reinterpret_cast<DWORD*>(static_cast<unsigned char*>(self) + 0x158);
    if (sub != 0) {
        ext_005CE9B0(reinterpret_cast<void*>(static_cast<uintptr_t>(sub)));
    }
}
} // namespace lift_005B72E0

// [0x005B1830] sub_005B1830 (17 bytes)
namespace lift_005B1830 {
// @name initVtableAndZeroFields_005B1830
// @summary Thiscall initializer: stores the vtable address 0x0095F83C at [this+0], zeroes [this+4] and [this+8], and returns this.
// @field Unknown +0x00 uint32_t field_0x00
// @field Unknown +0x04 uint32_t field_0x04
// @field Unknown +0x08 uint32_t field_0x08
void* fn_005B1830(void* self) {
    lift_field<uint32_t>(self, 0x00) = 0x0095F83Cu; // immediate address, not a load from mem_0095F83C
    lift_field<uint32_t>(self, 0x04) = 0u;
    lift_field<uint32_t>(self, 0x08) = 0u;
    return self;
}
} // namespace lift_005B1830

// [0x005B6780] sub_005B6780 (18 bytes)
namespace lift_005B6780 {
// @name sub_005B6780
// @summary Auto-lifted identical-shape clone of 0x00433290 (Unknown::forwardToChildAt154).
namespace lift_00433290 {
// Known callee 0x0044E160: sub_0044E160 (36 bytes). Receives the child object as `this`
// and the caller's stack argument unchanged (the original code tail-jumps into it).
extern void ext_005CE8F0(void* self, DWORD stackArg);

// @name Unknown::forwardToChildAt154
// @class Unknown
// @summary Forwards the call to the child object at +0x154 via sub_0044E160; does nothing when the child is null.
// @field Unknown +0x154 DWORD child
void fn_005B6780(void* self, DWORD stackArg) {
    const DWORD child =
        *reinterpret_cast<const DWORD*>(static_cast<const uint8_t*>(self) + 0x158);
    if (child != 0) {
        ext_005CE8F0(reinterpret_cast<void*>(static_cast<uintptr_t>(child)), stackArg);
    }
}
} // namespace lift_00433290
} // namespace lift_005B6780

// [0x005B7240] sub_005B7240 (18 bytes)
namespace lift_005B7240 {
// @name sub_005B7240
// @summary Auto-lifted identical-shape clone of 0x00433290 (Unknown::forwardToChildAt154).
namespace lift_00433290 {
// Known callee 0x0044E160: sub_0044E160 (36 bytes). Receives the child object as `this`
// and the caller's stack argument unchanged (the original code tail-jumps into it).
extern void ext_005CE960(void* self, DWORD stackArg);

// @name Unknown::forwardToChildAt154
// @class Unknown
// @summary Forwards the call to the child object at +0x154 via sub_0044E160; does nothing when the child is null.
// @field Unknown +0x154 DWORD child
void fn_005B7240(void* self, DWORD stackArg) {
    const DWORD child =
        *reinterpret_cast<const DWORD*>(static_cast<const uint8_t*>(self) + 0x158);
    if (child != 0) {
        ext_005CE960(reinterpret_cast<void*>(static_cast<uintptr_t>(child)), stackArg);
    }
}
} // namespace lift_00433290
} // namespace lift_005B7240

// [0x005B7280] sub_005B7280 (18 bytes)
namespace lift_005B7280 {
// @name sub_005B7280
// @summary Auto-lifted identical-shape clone of 0x00433290 (Unknown::forwardToChildAt154).
namespace lift_00433290 {
// Known callee 0x0044E160: sub_0044E160 (36 bytes). Receives the child object as `this`
// and the caller's stack argument unchanged (the original code tail-jumps into it).
extern void ext_005CE980(void* self, DWORD stackArg);

// @name Unknown::forwardToChildAt154
// @class Unknown
// @summary Forwards the call to the child object at +0x154 via sub_0044E160; does nothing when the child is null.
// @field Unknown +0x154 DWORD child
void fn_005B7280(void* self, DWORD stackArg) {
    const DWORD child =
        *reinterpret_cast<const DWORD*>(static_cast<const uint8_t*>(self) + 0x158);
    if (child != 0) {
        ext_005CE980(reinterpret_cast<void*>(static_cast<uintptr_t>(child)), stackArg);
    }
}
} // namespace lift_00433290
} // namespace lift_005B7280

// [0x005B72C0] sub_005B72C0 (18 bytes)
namespace lift_005B72C0 {
// @name sub_005B72C0
// @summary Auto-lifted identical-shape clone of 0x00433290 (Unknown::forwardToChildAt154).
namespace lift_00433290 {
// Known callee 0x0044E160: sub_0044E160 (36 bytes). Receives the child object as `this`
// and the caller's stack argument unchanged (the original code tail-jumps into it).
extern void ext_005CE9A0(void* self, DWORD stackArg);

// @name Unknown::forwardToChildAt154
// @class Unknown
// @summary Forwards the call to the child object at +0x154 via sub_0044E160; does nothing when the child is null.
// @field Unknown +0x154 DWORD child
void fn_005B72C0(void* self, DWORD stackArg) {
    const DWORD child =
        *reinterpret_cast<const DWORD*>(static_cast<const uint8_t*>(self) + 0x158);
    if (child != 0) {
        ext_005CE9A0(reinterpret_cast<void*>(static_cast<uintptr_t>(child)), stackArg);
    }
}
} // namespace lift_00433290
} // namespace lift_005B72C0

// [0x005B72A0]
namespace lift_005B72A0 {
// @name sub_005B72A0
// @class Unknown
// @summary Loads the subobject pointer at this+0x158; tail-calls fn_005CE990 on it if non-null, otherwise returns (ret 8).
// @field Unknown +0x158 void* field_0x158

extern void fn_005CE990(void* self);

extern void __fastcall fn_005B72A0(void* self, void* /*edx*/, uintptr_t /*arg1*/, uintptr_t /*arg2*/) {
    void* sub = *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(self) + 0x158);
    if (sub != nullptr) {
        fn_005CE990(sub);
        return;
    }
    return;
}
} // namespace lift_005B72A0

// [0x005B7260] sub_005B7260 (18 bytes)
namespace lift_005B7260 {
// Known callee 0x005CE970: sub_005CE970 (Member forwarding thunk: loads subobject pointer at +0xAC and tail-calls sub_00647CE0.)
extern void ext_005CE970(void* self);

// @name Unknown::forwardIfChild
// @class Unknown
// @summary Forwards the call to ext_005CE970 when the pointer at +0x158 is non-null; otherwise returns, popping 8 bytes of stack arguments.
// @field Unknown +0x158 void* field_0x158
extern void fn_005B7260(void* self, DWORD stackArg0, DWORD stackArg1) {
    (void)stackArg0;
    (void)stackArg1;
    auto* child = *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(self) + 0x158);
    if (child != nullptr) {
        ext_005CE970(child);
        return;
    }
}
} // namespace lift_005B7260

// [0x005B67A0]
namespace lift_005B67A0 {
extern int ext_00647FD0(void* self);

// @name Unknown::ForwardToSubobjectAc
// @class Unknown
// @summary Reads the pointer at this+0x158; if non-null, tail-forwards to ext_00647FD0 with the pointer's +0xAC field as `this`, otherwise returns 0.
// @field Unknown +0x158 void* field_0x158
// @field Unknown +0xAC void* field_0xAC (on the object pointed to by field_0x158)
int fn_005B67A0(void* self) {
    uintptr_t inner = 0;
    std::memcpy(&inner, static_cast<unsigned char*>(self) + 0x158, sizeof(inner));
    if (inner == 0) {
        return 0;
    }
    uintptr_t next = 0;
    std::memcpy(&next, reinterpret_cast<unsigned char*>(inner) + 0xAC, sizeof(next));
    return ext_00647FD0(reinterpret_cast<void*>(next));
}
} // namespace lift_005B67A0

// [0x005B2130] sub_005B2130 (23 bytes)
namespace lift_005B2130 {
// @name Unknown::ForwardArgToSubobjectVfunc5
// @class Unknown
// @summary Forwards its single stack argument, together with self, to virtual slot 5 of the object stored at +0x0C; returns that call's result.
// @field Unknown +0x0C void* field_0x0c
DWORD fn_005B2130(void* self, DWORD arg) {
    using SlotFn = DWORD(__thiscall*)(void* obj, void* ctx, DWORD value);

    void* obj = lift_field<void*>(self, 0x0C);
    void** vtbl = *reinterpret_cast<void***>(obj);
    SlotFn slot5 = reinterpret_cast<SlotFn>(vtbl[5]);
    return slot5(obj, self, arg);
}
} // namespace lift_005B2130

// [0x005B6980] sub_005B6980 (24 bytes)
namespace lift_005B6980 {
extern uint32_t mem_read32(uint32_t addr);
extern uint32_t ext_00647F80(uint32_t self, uint32_t stack_arg);

// @name Unknown::ForwardToSubobjectField0xAC
// @class Unknown
// @summary If the pointer at +0x158 is non-null, tail-forwards to ext_00647F80 with the child pointer's +0xAC value as `this`; otherwise returns 0.
// @field Unknown +0x158 uint32_t field_0x158 (child pointer; non-null selects the forward path)
// @field Unknown +0xAC uint32_t field_0xac (read from the child at +0x158; becomes `this` for the forward)
uint32_t fn_005B6980(uint32_t self, uint32_t stack_arg) {
    const uint32_t child = mem_read32(self + 0x158);
    if (child == 0) {
        return 0;
    }
    const uint32_t next_self = mem_read32(child + 0xAC);
    return ext_00647F80(next_self, stack_arg);
}
} // namespace lift_005B6980
