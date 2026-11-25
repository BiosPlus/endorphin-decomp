// Lifted C++ translation unit: lifted/leaf/tiny_6D0000.cpp
#include "lift_compat.h"
extern "C" void __fastcall ext_006C9A40(void* self);
extern "C" void ext_006D2250(void);
extern "C" void __fastcall ext_006D2FB0(void* self);
extern "C" void __cdecl ext_006A5C5C(void* ptr);

extern "C" void __cdecl ext_006A5C5C(void* ptr);
// @name sub_006D03D0
// @summary This-adjustor thunk: adjusts `this` by +0x54 and tail-calls sub_006C9A40.
extern "C" void __fastcall fn_006D03D0(void* self) {
    ext_006C9A40(static_cast<char*>(self) + 0x54);
}
extern "C" void __fastcall ext_006D5A60(void* self);
extern "C" void __fastcall ext_006E7460(void* self);
extern "C" void __fastcall ext_00755000(void* self);
extern "C" void __fastcall ext_006D5D60(void* self);
extern "C" void __fastcall ext_006D6C20(void* self);
extern "C" void __fastcall ext_006D7910(void* self);
extern "C" int32_t mem_00B5D8F8;
extern "C" int32_t mem_00B5D908;
extern "C" int mem_00B5D900;
extern "C" void __fastcall ext_006D8D60(void* self);
extern "C" void __fastcall ext_006D8E70(void* self);
extern "C" int32_t mem_00AA91C0;
extern "C" int32_t mem_00AA91C4;
extern "C" void __fastcall ext_006DC2C0(void* self);
extern "C" void __fastcall ext_006DE060(void* self);

// [0x006D2160] sub_006D2160 (16 bytes)
// @name sub_006D2160
// @summary Pure jump thunk forwarding to sub_006D2250.
extern "C" void fn_006D2160(void) {
    ext_006D2250();
}

// [0x006D2A30] sub_006D2A30 (16 bytes)
// @name sub_006D2A30
// @summary Returns `this` pointer unchanged.
extern "C" void* __fastcall fn_006D2A30(void* self) {
    return self;
}

// [0x006D2F90] sub_006D2F90 (30 bytes)
// @name sub_006D2F90
// @summary MSVC scalar deleting destructor: calls sub_006D2FB0 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_006D2F90(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_006D2FB0(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x006D55F0] sub_006D55F0 (16 bytes)
// @name sub_006D55F0
// @summary Getter returning int32_t field at offset +0x1C.
extern "C" int32_t __fastcall fn_006D55F0(void* self) {
    return static_cast<int32_t>(lift_field<int32_t>(self, 0x1C));
}

// [0x006D5A40] sub_006D5A40 (30 bytes)
// @name sub_006D5A40
// @summary MSVC scalar deleting destructor: calls sub_006D5A60 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_006D5A40(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_006D5A60(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x006D5C30] sub_006D5C30 (16 bytes)
// @name sub_006D5C30
// @summary This-adjustor thunk: adjusts `this` by +0x4 and tail-calls sub_006E7460.
extern "C" void __fastcall fn_006D5C30(void* self) {
    ext_006E7460(static_cast<char*>(self) + 0x4);
}

// [0x006D5C40] sub_006D5C40 (16 bytes)
// @name sub_006D5C40
// @summary This-adjustor thunk: adjusts `this` by +0x4 and tail-calls sub_00755000.
extern "C" void __fastcall fn_006D5C40(void* self) {
    ext_00755000(static_cast<char*>(self) + 0x4);
}

// [0x006D5D40] sub_006D5D40 (30 bytes)
// @name sub_006D5D40
// @summary MSVC scalar deleting destructor: calls sub_006D5D60 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_006D5D40(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_006D5D60(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x006D6C00] sub_006D6C00 (30 bytes)
// @name sub_006D6C00
// @summary MSVC scalar deleting destructor: calls sub_006D6C20 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_006D6C00(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_006D6C20(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x006D78F0] sub_006D78F0 (30 bytes)
// @name sub_006D78F0
// @summary MSVC scalar deleting destructor: calls sub_006D7910 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_006D78F0(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_006D7910(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x006D7A90] sub_006D7A90 (16 bytes)
// @name sub_006D7A90
// @summary Getter returning int32_t field at offset +0x28.
extern "C" int32_t __fastcall fn_006D7A90(void* self) {
    return static_cast<int32_t>(lift_field<int32_t>(self, 0x28));
}

// [0x006D7E50] sub_006D7E50 (16 bytes)
// @name sub_006D7E50
// @summary Returns constant 0x4.
extern "C" int32_t __cdecl fn_006D7E50(void) {
    return 0x4;
}

// [0x006D80A0] sub_006D80A0 (16 bytes)
// @name sub_006D80A0
// @summary Empty function (returns immediately).
extern "C" void __cdecl fn_006D80A0(void) {
    return;
}

// [0x006D81F0] sub_006D81F0 (16 bytes)
// @name sub_006D81F0
// @summary Getter returning int32_t field at offset +0x1C4.
extern "C" int32_t __fastcall fn_006D81F0(void* self) {
    return static_cast<int32_t>(lift_field<int32_t>(self, 0x1C4));
}

// [0x006D8200] sub_006D8200 (16 bytes)
// @name sub_006D8200
// @summary Getter returning int32_t field at offset +0x1EC.
extern "C" int32_t __fastcall fn_006D8200(void* self) {
    return static_cast<int32_t>(lift_field<int32_t>(self, 0x1EC));
}

// [0x006D89C0] sub_006D89C0 (16 bytes)
// @name sub_006D89C0
// @summary Returns pointer to subobject/field at offset +0x8.
extern "C" void* __fastcall fn_006D89C0(void* self) {
    return static_cast<char*>(self) + 0x8;
}

// [0x006D8CD0] sub_006D8CD0 (6 bytes)
// @name sub_006D8CD0
// @summary Returns global int32 value from mem_00B5D8F8.
extern "C" int32_t __cdecl fn_006D8CD0(void) {
    return mem_00B5D8F8;
}

// [0x006D8CE0] sub_006D8CE0 (6 bytes)
// @name sub_006D8CE0
// @summary Returns global int32 value from mem_00B5D908.
extern "C" int32_t __cdecl fn_006D8CE0(void) {
    return mem_00B5D908;
}

// [0x006D8CF0] sub_006D8CF0 (6 bytes)
// @name sub_006D8CF0
// @summary Returns address of global mem_00B5D900.
extern "C" void* __cdecl fn_006D8CF0(void) {
    return &mem_00B5D900;
}

// [0x006D8D40] sub_006D8D40 (30 bytes)
// @name sub_006D8D40
// @summary MSVC scalar deleting destructor: calls sub_006D8D60 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_006D8D40(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_006D8D60(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x006D8E50] sub_006D8E50 (30 bytes)
// @name sub_006D8E50
// @summary MSVC scalar deleting destructor: calls sub_006D8E70 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_006D8E50(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_006D8E70(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x006D9450] sub_006D9450 (8 bytes)
// @name sub_006D9450
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x128.
extern "C" void __fastcall fn_006D9450(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x128);
    target(self);
}

// [0x006D9460] sub_006D9460 (8 bytes)
// @name sub_006D9460
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x12C.
extern "C" void __fastcall fn_006D9460(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x12C);
    target(self);
}

// [0x006D98D0] sub_006D98D0 (16 bytes)
// @name sub_006D98D0
// @summary Returns global int32 value from mem_00AA91C0.
extern "C" int32_t __cdecl fn_006D98D0(void) {
    return mem_00AA91C0;
}

// [0x006D98E0] sub_006D98E0 (16 bytes)
// @name sub_006D98E0
// @summary Returns global int32 value from mem_00AA91C4.
extern "C" int32_t __cdecl fn_006D98E0(void) {
    return mem_00AA91C4;
}

// [0x006DC2A0] sub_006DC2A0 (30 bytes)
// @name sub_006DC2A0
// @summary MSVC scalar deleting destructor: calls sub_006DC2C0 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_006DC2A0(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_006DC2C0(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x006DC550] sub_006DC550 (16 bytes)
// @name sub_006DC550
// @summary Getter returning int32_t field at offset +0xB8.
extern "C" int32_t __fastcall fn_006DC550(void* self) {
    return static_cast<int32_t>(lift_field<int32_t>(self, 0xB8));
}

// [0x006DDEE0] sub_006DDEE0 (30 bytes)
// @name sub_006DDEE0
// @summary MSVC scalar deleting destructor: calls sub_006DE060 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_006DDEE0(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_006DE060(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x006DECD0] sub_006DECD0 (16 bytes)
// @name sub_006DECD0
// @summary Getter returning int32_t field at offset +0x44.
extern "C" int32_t __fastcall fn_006DECD0(void* self) {
    return static_cast<int32_t>(lift_field<int32_t>(self, 0x44));
}

// [0x006DECE0] sub_006DECE0 (16 bytes)
// @name sub_006DECE0
// @summary Setter storing int32_t argument into field at offset +0x44.
extern "C" void __fastcall fn_006DECE0(void* self, int edx_unused, int32_t value) {
    (void)edx_unused;
    lift_field<int32_t>(self, 0x44) = value;
}

// [0x006D2A90]
namespace lift_006D2A90 {
// @name Unknown::sub_006D2A90
// @class Unknown
// @summary Returns (arg << 5) + this->field_0x10 (thiscall, one stack arg, ret 4).
// @field Unknown +0x10 uint32_t field_0x10

// thiscall: `this` in ECX, one argument on the stack, callee cleans 4 bytes.
uint32_t Unknown_sub_006D2A90(const void* self, uint32_t arg) {
    const uint8_t* base = static_cast<const uint8_t*>(self);
    uint32_t field_0x10 = *reinterpret_cast<const uint32_t*>(base + 0x10);
    return (arg << 5) + field_0x10;
}
} // namespace lift_006D2A90

// [0x006D2400] sub_006D2400 (16 bytes)
namespace lift_006D2400 {
// @name Unknown::SetDoubleAt
// @class Unknown
// @summary Stores a double into an 8-byte-stride array at ecx, indexed by the first stack argument (ret 0xc: callee pops index + value).
// @field Unknown +0x00 double[] array (base pointer in ecx; element i at byte offset 8*i, dynamic index so no fixed offset)
void fn_006D2400(void* self, int32_t index, double value) {
    double* base = static_cast<double*>(self);
    base[index] = value;
}
} // namespace lift_006D2400

// [0x006D23F0]
namespace lift_006D23F0 {
// @name Unknown::GetAddressAt8
// @class Unknown
// @summary Returns this + 8 * index (32-bit address of an 8-byte element in an array based at this); thiscall, one stack argument, callee pops 4.
// (No fixed-offset field is accessed: the function only computes a base-plus-scaled-index address, so no @field lines are emitted.)
uint32_t fn_006D23F0(uint32_t self, uint32_t index) {
    return static_cast<uint32_t>(self + index * 8u);
}
} // namespace lift_006D23F0

// [0x006D59B0]
namespace lift_006D59B0 {
// @name Unknown::GetIndexedPtr
// @class Unknown
// @summary Returns this->field_0x10 + 4 * index, where index is the single stack argument (thiscall, ret 4).
// @field Unknown +0x10 uint32_t field_0x10

struct Unknown {
    uint8_t pad_0000[0x10];
    uint32_t field_0x10;
};

uint32_t Unknown_GetIndexedPtr(const Unknown* self, uint32_t index) {
    return self->field_0x10 + 4u * index;
}
} // namespace lift_006D59B0

// [0x006D9010] sub_006D9010 (16 bytes)
namespace lift_006D9010 {
// @name Unknown::GetInnerDouble
// @class Unknown
// @summary Returns the double at +0x1E8 of the object pointed to by this+0x0C (thiscall, no stack args, result in st0).
// @field Unknown +0x0C uint32_t field_0x0C
// @field Unknown +0x1E8 double field_0x1E8
double fn_006D9010(uint32_t self) {
    uint32_t inner = *reinterpret_cast<uint32_t*>(self + 0x0Cu);
    return *reinterpret_cast<double*>(inner + 0x1E8u);
}
} // namespace lift_006D9010

// [0x006D9020] sub_006D9020 (16 bytes)
namespace lift_006D9020 {
extern double mem_0092A270;

// @name Unknown::LoadConstantOne
// @summary Returns the double constant 1.0 (loaded from .rdata mem_0092A270); result is the float return value.
double fn_006D9020(void) {
    return mem_0092A270;
}
} // namespace lift_006D9020

// [0x006D9060] sub_006D9060 (16 bytes)
namespace lift_006D9060 {
// @name GetDoubleAtIndirect160
// @summary Returns the double stored at +0x160 of the object pointed to by this+0x0C.
// @field Unknown +0x0C void* field_0x0C
// @field Unknown +0x160 double field_0x160
extern double __fastcall fn_006D9060(void* self) {
    void* inner = lift_field<void*>(self, 0x0C);
    return lift_field<double>(inner, 0x160);
}
} // namespace lift_006D9060

// [0x006DEEA0]
namespace lift_006DEEA0 {
// @name Unknown::GetFlag08
// @class Unknown
// @summary Returns bit 0x08 of the dword at this+0x18 (0 or 8).
// @field Unknown +0x18 uint32_t field_0x18

uint32_t Unknown_GetFlag08(const uint8_t* self) {
    uint32_t v = *reinterpret_cast<const uint32_t*>(self + 0x18);
    return v & 0x8u;
}
} // namespace lift_006DEEA0

// [0x006DE3D0]
namespace lift_006DE3D0 {
// @name Unknown::GetIndirectInt32Plus4C
// @summary Loads the pointer at self+0x14, offsets it by 0x4C, and returns the int32 at that address via fn_006E7460.

extern int32_t __fastcall ext_006E7460(void* self);

extern int32_t __fastcall fn_006DE3D0(void* self) {
    // mov ecx, [self + 0x14]; add ecx, 0x4c; jmp fn_006E7460
    uint8_t* base = reinterpret_cast<uint8_t*>(self);
    uint8_t* inner = *reinterpret_cast<uint8_t**>(base + 0x14);
    return ext_006E7460(inner + 0x4c);
}
} // namespace lift_006DE3D0

// [0x006DD960]
namespace lift_006DD960 {
// Globals accessed by this function.
// mem_00925284: .rdata u32 holding the address of MSVCR80 _HUGE (0x0062D360).
extern uint32_t mem_00925284;
// mem_00B5DC10: global double destination.
extern double mem_00B5DC10;

// @name fn_006DD960 (MSVCR _HUGE negated into global)
// @summary Loads *_HUGE (double), negates it, and stores the result into mem_00B5DC10.
void fn_006DD960(void) {
    // eax = [mem_00925284]  (pointer to _HUGE)
    // fld qword [eax]; fchs; fstp qword [mem_00B5DC10]
    const double* huge = reinterpret_cast<const double*>(static_cast<uintptr_t>(mem_00925284));
    mem_00B5DC10 = -(*huge);
}
} // namespace lift_006DD960

// [0x006DE3E0]
namespace lift_006DE3E0 {
// @name Unknown::GetIndirectUInt32At98
// @class Unknown
// @summary Loads the pointer at self+0x14 and returns the uint32 stored at that object's +0x98 offset.
// @field Unknown +0x14 void* field_0x14
// @field Unknown +0x98 uint32_t field_0x98

extern uint32_t __fastcall fn_006DE3E0(void* self) {
    // mov eax, [ecx + 0x14]; mov eax, [eax + 0x98]; ret
    void* inner = lift_field<void*>(self, 0x14);
    return lift_field<uint32_t>(inner, 0x98);
}
} // namespace lift_006DE3E0

// [0x006DE130] sub_006DE130 (16 bytes)
namespace lift_006DE130 {
// @name Unknown::ReleaseIfNonNull
// @class Unknown
// @summary If self is non-null, invokes vtable slot 0 (scalar deleting destructor) with flag 1; the single stack argument is ignored.
// @field Unknown +0x00 void** vtable vtable pointer (slot 0 called with arg 1)
void fn_006DE130(void* self, int32_t unused_stack_arg) {
    (void)unused_stack_arg;  // callee pops 4 bytes (ret 4) but never reads it
    if (self == nullptr) {
        return;
    }
    void** vtable = lift_field<void**>(self, 0x00);
    using SlotFn = void (*)(void*, int32_t);
    auto slot0 = reinterpret_cast<SlotFn>(vtable[0]);
    slot0(self, 1);
}
} // namespace lift_006DE130

// [0x006DEEB0] sub_006DEEB0 (16 bytes)
namespace lift_006DEEB0 {
// @name Unknown::GetFlag40
// @class Unknown
// @summary Returns bit 0x40 of the dword at this+0x18 (0 or 0x40).
// @field Unknown +0x18 uint32_t field_0x18
uint32_t fn_006DEEB0(void* self) {
    uint32_t v = lift_field<uint32_t>(self, 0x18);
    return v & 0x40u;
}
} // namespace lift_006DEEB0

// [0x006DD930]
namespace lift_006DD930 {
// @name CopyDoubleFromPointerGlobal
// @summary Loads the 8-byte value pointed to by mem_00925284 and stores its two dwords into mem_00B5DC18 / mem_00B5DC1C.

extern uint32_t mem_00925284;
extern uint32_t mem_00B5DC18;
extern uint32_t mem_00B5DC1C;

void sub_006DD930() {
    const uint32_t* src = reinterpret_cast<const uint32_t*>(static_cast<uintptr_t>(mem_00925284));
    uint32_t lo = src[0];
    uint32_t hi = src[1];
    mem_00B5DC18 = lo;
    mem_00B5DC1C = hi;
}
} // namespace lift_006DD930

// [0x006DADE0] sub_006DADE0 (31 bytes)
namespace lift_006DADE0 {
// @name DivideQwordByConstant
// @class Unknown
// @summary Loads int64 at *self, divides by constant 0x0000000AC0E8D7B0, returns quotient as double (x87 ST0).
// @field Unknown +0x00 int64_t field_0x00

// Original: fild qword [ecx]; push int64 0x0000000AC0E8D7B0; fild; fdivp st(1), st; ret
extern double __fastcall fn_006DADE0(void* self) {
    const int64_t value = *static_cast<const int64_t*>(self);
    const int64_t divisor = INT64_C(0x0000000AC0E8D7B0);
    return static_cast<double>(value) / static_cast<double>(divisor);
}
} // namespace lift_006DADE0

// [0x006DEEC0] sub_006DEEC0 (16 bytes)
namespace lift_006DEEC0 {
// @name sub_006DEEC0
// @summary Getter returning int32_t field at offset +0x38.
extern int32_t __fastcall fn_006DEEC0(void* self) {
    return static_cast<int32_t>(lift_field<int32_t>(self, 0x38));
}
} // namespace lift_006DEEC0
