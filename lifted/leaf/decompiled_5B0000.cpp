// Lifted C++ translation unit: lifted/leaf/decompiled_5B0000.cpp
#include "lift_compat.h"
#include <cstdint>

// [0x005B6970]
namespace lift_005B6970 {
// @name getField0x04From005B6930
// @summary Calls sub_005B6930 and returns the float at offset +0x04 of the returned object.


extern uint32_t ext_005B6930();

float sub_005B6970() {
    uint32_t ptr = ext_005B6930();
    return *reinterpret_cast<const float*>(static_cast<uintptr_t>(ptr) + 0x4);
}
} // namespace lift_005B6970

// [0x005B67C0] sub_005B67C0 (32 bytes)
namespace lift_005B67C0 {
void __thiscall ext_00647F50(void* self, float value);

// @name ForwardFloatToNestedAc
// @summary If self+0x158 is non-null, forwards the float argument to the object at (self+0x158)->+0xAC via 0x00647F50.
// @field Unknown +0x158 void* field_0x158
// @field Unknown +0xAC void* field_0xAC
void __thiscall fn_005B67C0(uint8_t* self, float value) {
    uint8_t* sub = *reinterpret_cast<uint8_t**>(self + 0x158);
    if (sub == nullptr) {
        return;
    }
    uint8_t* target = *reinterpret_cast<uint8_t**>(sub + 0xAC);
    ext_00647F50(target, value);
}
} // namespace lift_005B67C0

// [0x005B7000] sub_005B7000 (32 bytes)
namespace lift_005B7000 {
// @name sub_005B7000
// @summary Auto-lifted identical-shape clone of 0x005B67C0 (ForwardFloatToNestedAc).
namespace lift_005B67C0 {
void __thiscall ext_00648180(void* self, float value);

// @name ForwardFloatToNestedAc
// @summary If self+0x158 is non-null, forwards the float argument to the object at (self+0x158)->+0xAC via 0x00647F50.
// @field Unknown +0x158 void* field_0x158
// @field Unknown +0xAC void* field_0xAC
void __thiscall fn_005B7000(uint8_t* self, float value) {
    uint8_t* sub = *reinterpret_cast<uint8_t**>(self + 0x158);
    if (sub == nullptr) {
        return;
    }
    uint8_t* target = *reinterpret_cast<uint8_t**>(sub + 0xAC);
    ext_00648180(target, value);
}
} // namespace lift_005B67C0
} // namespace lift_005B7000

// [0x005B7020] sub_005B7020 (32 bytes)
namespace lift_005B7020 {
// @name sub_005B7020
// @summary Auto-lifted identical-shape clone of 0x005B67C0 (ForwardFloatToNestedAc).
namespace lift_005B67C0 {
void __thiscall ext_006481A0(void* self, float value);

// @name ForwardFloatToNestedAc
// @summary If self+0x158 is non-null, forwards the float argument to the object at (self+0x158)->+0xAC via 0x00647F50.
// @field Unknown +0x158 void* field_0x158
// @field Unknown +0xAC void* field_0xAC
void __thiscall fn_005B7020(uint8_t* self, float value) {
    uint8_t* sub = *reinterpret_cast<uint8_t**>(self + 0x158);
    if (sub == nullptr) {
        return;
    }
    uint8_t* target = *reinterpret_cast<uint8_t**>(sub + 0xAC);
    ext_006481A0(target, value);
}
} // namespace lift_005B67C0
} // namespace lift_005B7020

// [0x005B6BC0] sub_005B6BC0 (33 bytes)
namespace lift_005B6BC0 {
// Known callee 0x005CE9E0: sub_005CE9E0 (Member forwarding thunk: loads subobject pointer at +0xAC and tail-calls sub_00647E60.)
extern void ext_005CE9E0(void* self, void* arg);

// @name Unknown::forwardToSubobjectAt1D0IfSet
// @class Unknown
// @summary If the pointer at +0x158 is non-null, forwards the address of the subobject at +0x1D0 to ext_005CE9E0 using that pointer as the receiver.
// @field Unknown +0x158 void* field_158
// @field Unknown +0x1D0 void* field_1D0
void fn_005B6BC0(void* self) {
    char* base = static_cast<char*>(self);
    void* target = *reinterpret_cast<void**>(base + 0x158);
    if (target != nullptr) {
        ext_005CE9E0(target, base + 0x1D0);
    }
}
} // namespace lift_005B6BC0

// [0x005B6C20] sub_005B6C20 (33 bytes)
namespace lift_005B6C20 {
// Known callee 0x005CEA00: sub_005CEA00 (Member forwarding thunk: loads subobject pointer at +0xAC and tail-calls sub_00647EA0.)
// Original passes the argument on the stack (push eax) and the object in ecx.
extern void ext_005CEA00(void* self, void* arg);

// @name Unknown::forwardFieldE8IfField158Set
// @class Unknown
// @summary If the pointer at +0x158 is non-null, forwards the address of the subobject at +0x1E8 to ext_005CEA00 using +0x158 as the receiver; otherwise does nothing.
// @field Unknown +0x158 void* field_0x158
// @field Unknown +0x1E8 void* field_0x1e8
void fn_005B6C20(void* self) {
    unsigned char* base = static_cast<unsigned char*>(self);
    void* obj = *reinterpret_cast<void**>(base + 0x158);
    if (obj != nullptr) {
        ext_005CEA00(obj, base + 0x1E8);
    }
}
} // namespace lift_005B6C20

// [0x005B6C50] sub_005B6C50 (33 bytes)
namespace lift_005B6C50 {
// Known callee 0x005CEA10: sub_005CEA10 (Member forwarding thunk: loads subobject pointer at +0xAC and tail-calls sub_00647EC0.)
// The original call passes one extra stack argument (lea of this+0x1F4); declared here to match the call site.
extern void __fastcall ext_005CEA10(void* self, void* arg);

// @name Unknown::forwardToSubobjectAt1F4
// @class Unknown
// @summary Forwards this+0x1F4 to ext_005CEA10 using the subobject at +0x158 when it is non-null.
// @field Unknown +0x158 void* field_0x158
// @field Unknown +0x1F4 uint8_t field_0x1F4
void fn_005B6C50(void* self) {
    auto* obj = reinterpret_cast<uint8_t*>(self);
    void* sub = *reinterpret_cast<void**>(obj + 0x158);
    if (sub != nullptr) {
        ext_005CEA10(sub, obj + 0x1F4);
    }
}
} // namespace lift_005B6C50

// [0x005B6B60] sub_005B6B60 (33 bytes)
namespace lift_005B6B60 {
// Known callee 0x005CE9C0: sub_005CE9C0 (Member forwarding thunk: loads subobject pointer at +0xAC and tail-calls sub_00647E20.)
// Called with ecx = subobject pointer (fastcall self) and one stack argument.
extern void ext_005CE9C0(void* self, void* arg);

// @name Unknown::forwardToSubobjectAt158
// @class Unknown
// @summary Forwards to ext_005CE9C0 with the +0x1B8 member address when the subobject pointer at +0x158 is non-null.
// @field Unknown +0x158 void* field_0x158
// @field Unknown +0x1B8 void* field_0x1b8
void fn_005B6B60(void* self) {
    void* sub = lift_field<void*>(self, 0x158);
    if (sub != nullptr) {
        ext_005CE9C0(sub, static_cast<char*>(self) + 0x1B8);
    }
}
} // namespace lift_005B6B60

// [0x005B6BF0] sub_005B6BF0 (33 bytes)
namespace lift_005B6BF0 {
// Known callee 0x005CE9F0: sub_005CE9F0 (Member forwarding thunk: loads subobject pointer at +0xAC and tail-calls sub_00647E80.)
// Calling convention as used here: first argument in ecx (self), second argument pushed on the stack.
extern void ext_005CE9F0(void* self, void* arg);

// @name Unknown::forwardToSubobject158
// @class Unknown
// @summary If the pointer at +0x158 is non-null, forwards this+0x1dc to ext_005CE9F0 using that pointer as self.
// @field Unknown +0x158 void* field_0x158
void fn_005B6BF0(void* self) {
    void* sub = lift_field<void*>(self, 0x158);
    if (sub != nullptr) {
        ext_005CE9F0(sub, static_cast<uint8_t*>(self) + 0x1dc);
    }
}
} // namespace lift_005B6BF0

// [0x005B6B90] sub_005B6B90 (33 bytes)
namespace lift_005B6B90 {
// Known callee 0x005CE9D0: sub_005CE9D0 (Member forwarding thunk: loads subobject pointer at +0xAC and tail-calls sub_00647E40.)
// The original passes a second argument on the stack (this+0x1C4); it is kept here as a plain parameter.
extern void ext_005CE9D0(void* self, void* stackArg);

// @name Unknown::forwardToSubobject158
// @class Unknown
// @summary If the pointer at +0x158 is non-null, forwards this+0x1C4 to ext_005CE9D0 on that pointer.
// @field Unknown +0x158 uint32_t field_0x158
// @field Unknown +0x1C4 uint8_t field_0x1C4
void fn_005B6B90(void* self) {
    auto base = reinterpret_cast<uintptr_t>(self);
    uint32_t sub = lift_field<uint32_t>(self, 0x158);
    void* slot = reinterpret_cast<void*>(base + 0x1C4);
    if (sub != 0) {
        ext_005CE9D0(reinterpret_cast<void*>(static_cast<uintptr_t>(sub)), slot);
    }
}
} // namespace lift_005B6B90

// [0x005B1B60] sub_005B1B60 (34 bytes)
namespace lift_005B1B60 {
// @name Unknown::copyVec4AndSetFlag04
// @class Unknown
// @summary Copies four floats from the source pointer into self+0x10..0x1c and sets the byte flag at self+0x04 to 1.
// @field Unknown +0x04 uint8_t field_0x04
// @field Unknown +0x10 float field_0x10
// @field Unknown +0x14 float field_0x14
// @field Unknown +0x18 float field_0x18
// @field Unknown +0x1c float field_0x1c
void fn_005B1B60(void* self, const void* src) {
    const float* in = reinterpret_cast<const float*>(src);
    lift_field<float>(self, 0x10) = in[0];
    lift_field<float>(self, 0x14) = in[1];
    lift_field<float>(self, 0x18) = in[2];
    lift_field<float>(self, 0x1c) = in[3];
    lift_field<uint8_t>(self, 0x04) = 1;
}
} // namespace lift_005B1B60

// [0x005B0E60]
namespace lift_005B0E60 {
extern int mem_00A88A40;
extern int mem_00924FE4;

extern uint32_t mem_read_u32(uintptr_t addr);
// Indirect import through mem_00924FE4: MSVCP80 basic_string<char>::basic_string(const char*, const allocator&).
extern void ext_00924FE4(uintptr_t self, uintptr_t cstr, uintptr_t alloc_ref);

// @name Unknown::copyCStringTableEntryToString
// @class Unknown
// @summary Constructs the std::string at out from the C-string table entry selected by this->+0x08; returns out.
// @field Unknown +0x08 uint32_t field_0x08
uint32_t __thiscall sub_005B0E60(uintptr_t this_ptr, uintptr_t out_ptr) {
    uint32_t index = mem_read_u32(this_ptr + 0x08);
    uint32_t cstr = mem_read_u32(reinterpret_cast<uintptr_t>(&mem_00A88A40) + (static_cast<uintptr_t>(index) << 2));
    ext_00924FE4(out_ptr, static_cast<uintptr_t>(cstr), 0);
    return static_cast<uint32_t>(out_ptr);
}
} // namespace lift_005B0E60

// [0x005B34C0]
namespace lift_005B34C0 {
// @name sub_005B34C0
// @summary Returns TRUE if the three 16-byte entries at this+0x04, +0x14, +0x24 all hold empty ranges (begin==0 or (end-begin)>>2 == 0); FALSE otherwise.
// @field Unknown +0x04 DWORD field_0x04
// @field Unknown +0x08 DWORD field_0x08
// @field Unknown +0x14 DWORD field_0x14
// @field Unknown +0x18 DWORD field_0x18
// @field Unknown +0x24 DWORD field_0x24
// @field Unknown +0x28 DWORD field_0x28

BOOL __thiscall sub_005B34C0(void* ecx) {
    // ecx is the implicit `this` for a thiscall; the loop walks three
    // 16-byte entries starting at this+0.
    for (int32_t i = 0; i < 3; ++i) {
        const ptrdiff_t off = static_cast<ptrdiff_t>(i) * 0x10;
        const uint32_t begin = lift_field<uint32_t>(ecx, off + 0x04);
        int32_t count = 0;
        if (begin != 0) {
            const uint32_t end = lift_field<uint32_t>(ecx, off + 0x08);
            // Signed subtraction followed by arithmetic shift by 2 (element size 4).
            count = static_cast<int32_t>(end - begin) >> 2;
        }
        if (count != 0) {
            return FALSE;
        }
    }
    return TRUE;
}
} // namespace lift_005B34C0

// [0x005B68F0] sub_005B68F0 (56 bytes)
namespace lift_005B68F0 {
extern double mem_00928E78;

// @name Unknown::ComputeScaledSubObjectValue
// @class Unknown
// @summary Returns 1000 * sub->[0x70] * vcall(sub->[0x30], &sub->[0x24]) for sub = self->[0x158], or 0.0 if sub is null.
// @field Unknown +0x158 void* subObject
// @field SubObject +0x24 void* embeddedAt24
// @field SubObject +0x30 void* owner
// @field SubObject +0x70 float scale
float fn_005B68F0(void* self) {
    void* sub = lift_field<void*>(self, 0x158);
    if (sub == nullptr) {
        return 0.0f;
    }

    void* owner = lift_field<void*>(sub, 0x30);
    void** vtbl = lift_field<void**>(owner, 0);
    void* slot = lift_field<void*>(vtbl, 0x0c);
    void* arg = static_cast<uint8_t*>(sub) + 0x24;

    auto fn = reinterpret_cast<float (*)(void*, void*)>(slot);
    float t1 = fn(owner, arg);

    float scale = lift_field<float>(sub, 0x70);
    double prod = static_cast<double>(scale) * static_cast<double>(t1);
    return static_cast<float>(prod * mem_00928E78);
}
} // namespace lift_005B68F0

// [0x005B1930] sub_005B1930 (70 bytes)
namespace lift_005B1930 {
// IAT slot for MSVCP80 std::basic_string<char> default constructor (thiscall).
extern int mem_00924FE8;
// Portable stand-in for the MSVCP80 default constructor call through mem_00924FE8.
extern void ext_basic_string_default_ctor(void* self);

// @name ConstructWithStringMember
// @class <Unknown> (object type not recovered)
// @summary Sets the object's vtable, default-constructs a std::string member at +0x04, and returns this.
// @field <Unknown> +0x00 void* vftable
// @field <Unknown> +0x04 uint8_t[] field_0x04
void* fn_005B1930(void* self) {
    lift_field<uint32_t>(self, 0x00) = 0x0095FCF4u;
    ext_basic_string_default_ctor(&lift_field<uint8_t>(self, 0x04));
    return self;
}
} // namespace lift_005B1930

// [0x005B1B90]
namespace lift_005B1B90 {
namespace lift_005B1B90 {
// @name Unknown::ForwardQuadToSubobjectOrZero
// @class Unknown
// @summary For index < 3, copies four floats from +0x10..+0x1C into a local array and forwards (index, array) to vtable slot 9 of the subobject at +0x0C; otherwise returns 0.0f.
// @field Unknown +0x0C void* field_0x0C
// @field Unknown +0x10 float field_0x10
// @field Unknown +0x14 float field_0x14
// @field Unknown +0x18 float field_0x18
// @field Unknown +0x1C float field_0x1C

namespace {
// Virtual slot 9 (offset 0x24): thiscall with stack args (index, float*), returns float.
using Slot9Fn = float (*)(void* thisPtr, int32_t index, const float* values);
}

float fn_005B1B90(void* self, int32_t index) {
    if (index >= 3) {
        return 0.0f;
    }
    float values[4];
    values[0] = lift_field<float>(self, 0x10);
    values[1] = lift_field<float>(self, 0x14);
    values[2] = lift_field<float>(self, 0x18);
    values[3] = lift_field<float>(self, 0x1C);

    void* child = lift_field<void*>(self, 0x0C);
    void** vtable = *reinterpret_cast<void***>(child);
    auto slot9 = reinterpret_cast<Slot9Fn>(vtable[9]);
    return slot9(child, index, values);
}
} // namespace lift_005B1B90
} // namespace lift_005B1B90

// [0x005B51E0]
namespace lift_005B51E0 {
// @name Unknown::ResetFields_005B51E0
// @class Unknown
// @summary Stores the class vtable value at +0x00 and zeroes twelve dword fields of the object (SEH frame setup/teardown elided).
// @field Unknown +0x00 uint32_t vtable
// @field Unknown +0x08 uint32_t field_0x08
// @field Unknown +0x0c uint32_t field_0x0c
// @field Unknown +0x10 uint32_t field_0x10
// @field Unknown +0x18 uint32_t field_0x18
// @field Unknown +0x1c uint32_t field_0x1c
// @field Unknown +0x20 uint32_t field_0x20
// @field Unknown +0x28 uint32_t field_0x28
// @field Unknown +0x2c uint32_t field_0x2c
// @field Unknown +0x30 uint32_t field_0x30
// @field Unknown +0x38 uint32_t field_0x38
// @field Unknown +0x3c uint32_t field_0x3c
// @field Unknown +0x40 uint32_t field_0x40

static inline void store_u32(std::uint8_t* base, std::uint32_t off, std::uint32_t value) {
    *reinterpret_cast<std::uint32_t*>(base + off) = value;
}

// __thiscall-style: `self` is the object pointer (ECX on entry).
void Unknown_ResetFields_005B51E0(std::uint8_t* self) {
    store_u32(self, 0x00, 0x0096085Cu);
    store_u32(self, 0x08, 0u);
    store_u32(self, 0x0c, 0u);
    store_u32(self, 0x10, 0u);
    store_u32(self, 0x18, 0u);
    store_u32(self, 0x1c, 0u);
    store_u32(self, 0x20, 0u);
    store_u32(self, 0x28, 0u);
    store_u32(self, 0x2c, 0u);
    store_u32(self, 0x30, 0u);
    store_u32(self, 0x38, 0u);
    store_u32(self, 0x3c, 0u);
    store_u32(self, 0x40, 0u);
}
} // namespace lift_005B51E0

// [0x005B1FA0]
namespace lift_005B1FA0 {
// @name sub_005B1FA0
// @summary Updates field_0x10 based on field_0x08 mode, clamps to >= 0.0f, and zeroes field_0x14 and field_0x18
// @field Unknown +0x08 uint32_t field_0x08
// @field Unknown +0x10 float field_0x10
// @field Unknown +0x14 float field_0x14
// @field Unknown +0x18 float field_0x18


void __thiscall sub_005B1FA0(void* self) {
    uint32_t mode = *reinterpret_cast<uint32_t*>(reinterpret_cast<char*>(self) + 0x08);
    float f10 = *reinterpret_cast<float*>(reinterpret_cast<char*>(self) + 0x10);
    float f14 = *reinterpret_cast<float*>(reinterpret_cast<char*>(self) + 0x14);

    float val = 0.0f;
    switch (mode) {
    case 1:
        val = f10;
        break;
    case 2:
    case 3:
    case 4:
    case 5:
        val = static_cast<float>((f14 + f10) * 0.25);
        break;
    default:
        break;
    }

    if (val < 0.0f) {
        val = 0.0f;
    }

    *reinterpret_cast<float*>(reinterpret_cast<char*>(self) + 0x10) = val;
    *reinterpret_cast<float*>(reinterpret_cast<char*>(self) + 0x14) = 0.0f;
    *reinterpret_cast<float*>(reinterpret_cast<char*>(self) + 0x18) = 0.0f;
}
} // namespace lift_005B1FA0

// [0x005B3CB0]
namespace lift_005B3CB0 {
extern uint32_t mem_00B43550;
extern uint32_t mem_00B4354C;

extern void ext_0067A670(void* self);

// @name getSingleton_005B3CB0
// @summary Lazily initializes and returns the singleton object at 0x00B4354C.
void* fn_005B3CB0() {
    if ((mem_00B43550 & 1u) == 0u) {
        mem_00B43550 |= 1u;
        ext_0067A670(&mem_00B4354C);
        mem_00B4354C = 0x0095FFD4u;
    }
    return &mem_00B4354C;
}
} // namespace lift_005B3CB0

// [0x005B3D10]
namespace lift_005B3D10 {
extern void __thiscall ext_0067A670(void* self);
extern DWORD mem_00B43558;
extern DWORD mem_00B43554;

// @name getStaticSingleton_005B3D10
// @summary Lazily initializes a static singleton at mem_00B43554 (guarded by mem_00B43558) and returns its pointer.
void* fn_005B3D10() {
    if ((mem_00B43558 & 1u) == 0) {
        mem_00B43558 |= 1u;
        ext_0067A670(&mem_00B43554);
        mem_00B43554 = 0x00960184u;
    }
    return &mem_00B43554;
}
} // namespace lift_005B3D10

// [0x005B3D70]
namespace lift_005B3D70 {
extern uint32_t mem_00B43560;
extern uint32_t mem_00B4355C;
extern void* mem_00960334;

extern void ext_0067A670(void* self);

// @name getStaticSingleton_005B3D70
// @summary Initializes and returns a pointer to the static singleton at 0x00B4355C.
void* fn_005B3D70() {
    if ((mem_00B43560 & 1u) == 0) {
        mem_00B43560 |= 1u;
        ext_0067A670(&mem_00B4355C);
        mem_00B4355C = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(&mem_00960334));
    }
    return &mem_00B4355C;
}
} // namespace lift_005B3D70

// [0x005B3DD0]
namespace lift_005B3DD0 {
// @name getStaticObject_005B3DD0
// @summary Lazily initializes and returns the static singleton object at 0x00B43564


extern uint32_t mem_00B43568;
extern uint32_t mem_00B43564;

extern void __thiscall ext_0067A670(void* self);

void* fn_005B3DD0(void) {
    if ((mem_00B43568 & 1u) == 0u) {
        mem_00B43568 |= 1u;
        ext_0067A670(&mem_00B43564);
        mem_00B43564 = 0x009604E4u;
    }
    return &mem_00B43564;
}
} // namespace lift_005B3DD0

// [0x005B8240]
namespace lift_005B8240 {
extern void ext_0067A670(void* self);
extern uint32_t mem_00B43CB0;
extern uint32_t mem_00B43CAC;

// @name getStaticSingleton_005B8240
// @summary Lazily initializes and returns a pointer to the static singleton at 0x00B43CAC.
void* fn_005B8240() {
    if ((mem_00B43CB0 & 1u) == 0u) {
        mem_00B43CB0 |= 1u;
        ext_0067A670(&mem_00B43CAC);
        mem_00B43CAC = 0x00960D8Cu;
    }
    return &mem_00B43CAC;
}
} // namespace lift_005B8240

// [0x005B8180]
namespace lift_005B8180 {
// @name getStaticObject_005B8180
// @summary Lazily initializes and returns the static object at 0x00B43C9C.


extern uint32_t mem_00B43CA0;
extern uint32_t mem_00B43C9C;

void ext_0067A670(void* self);

void* fn_005B8180() {
    if ((mem_00B43CA0 & 1u) == 0u) {
        mem_00B43CA0 |= 1u;
        ext_0067A670(&mem_00B43C9C);
        mem_00B43C9C = 0x00960B04u;
    }
    return &mem_00B43C9C;
}
} // namespace lift_005B8180

// [0x005B3E30]
namespace lift_005B3E30 {
// @name getSingleton_005B3E30
// @summary Lazily initializes and returns the singleton object at 0x00B4356C.

extern DWORD mem_00B4356C;
extern DWORD mem_00B43570;
extern void (__thiscall *ext_0067A670)(void* self);

void* fn_005B3E30() {
    if ((mem_00B43570 & 1) == 0) {
        mem_00B43570 |= 1;
        ext_0067A670(&mem_00B4356C);
        mem_00B4356C = 0x00960694;
    }
    return &mem_00B4356C;
}
} // namespace lift_005B3E30

// [0x005B81E0]
namespace lift_005B81E0 {
// @name getStaticSingleton_005B81E0
// @summary Lazily initializes and returns a static singleton object at 0x00B43CA4.


extern uint32_t mem_00B43CA8;
extern uint32_t mem_00B43CA4;

extern void ext_0067A670(void* self);

void* fn_005B81E0() {
    if ((mem_00B43CA8 & 1u) == 0) {
        mem_00B43CA8 |= 1u;
        ext_0067A670(&mem_00B43CA4);
        mem_00B43CA4 = 0x00960CB4u;
    }
    return &mem_00B43CA4;
}
} // namespace lift_005B81E0

// [0x005B82A0]
namespace lift_005B82A0 {
extern uint32_t mem_00B43CB8;
extern uint32_t mem_00B43CB4;

extern void ext_0067A670(void* self);

// @name getSingleton_005B82A0
// @summary Lazily initializes and returns the singleton object at 0x00B43CB4.
void* fn_005B82A0() {
    if ((mem_00B43CB8 & 1u) == 0) {
        mem_00B43CB8 |= 1u;
        ext_0067A670(&mem_00B43CB4);
        mem_00B43CB4 = 0x00960E64u;
    }
    return &mem_00B43CB4;
}
} // namespace lift_005B82A0

// [0x005B85A0] sub_005B85A0 (87 bytes)
namespace lift_005B85A0 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (Calls ext_00672000 on self (thiscall, ECX = self), then stores the single stack argument into the first DWORD of self; returns that value.)
extern DWORD ext_0067A670(void* self, DWORD value);
extern DWORD mem_00B43CF8; // init guard flags (bit 0 = initialized/in progress)
extern DWORD mem_00B43CF4; // static object storage; first DWORD holds the vtable-like value

// @name getStaticSingleton_005B85A0
// @summary Lazily initializes the global singleton at 0x00B43CF4 once (guarded by bit 0 of 0x00B43CF8) and returns its address.
void* getStaticSingleton_005B85A0() {
    if ((mem_00B43CF8 & 1u) == 0) {
        mem_00B43CF8 |= 1u;
        ext_0067A670(&mem_00B43CF4, 0);
        mem_00B43CF4 = 0x009616D4u;
    }
    return &mem_00B43CF4;
}
} // namespace lift_005B85A0

// [0x005B8300]
namespace lift_005B8300 {
// @name getSingleton_005B8300
// @summary Lazily initializes and returns a singleton object at 0x00B43CBC.

extern uint32_t mem_00B43CC0;
extern uint32_t mem_00B43CBC;

extern uint32_t __thiscall ext_0067A670(void* self);

void* fn_005B8300() {
    if ((mem_00B43CC0 & 1u) == 0) {
        mem_00B43CC0 |= 1u;
        ext_0067A670(&mem_00B43CBC);
        mem_00B43CBC = 0x00960F3Cu;
    }
    return &mem_00B43CBC;
}
} // namespace lift_005B8300

// [0x005B8360]
namespace lift_005B8360 {
extern uint32_t mem_00B43CC8;
extern uint32_t mem_00B43CC4;
extern void __thiscall ext_0067A670(void* self);

// @name getStaticSingleton_005B8360
// @summary Lazily initializes and returns a static singleton object at 0x00B43CC4.
void* fn_005B8360() {
    if ((mem_00B43CC8 & 1u) == 0u) {
        mem_00B43CC8 |= 1u;
        ext_0067A670(&mem_00B43CC4);
        mem_00B43CC4 = 0x00961014u;
    }
    return &mem_00B43CC4;
}
} // namespace lift_005B8360

// [0x005B83C0]
namespace lift_005B83C0 {
// @name getStaticObject_005B83C0
// @summary Lazily initializes and returns a pointer to the static singleton object at 0x00B43CCC.


extern uint32_t mem_00B43CD0;
extern uint32_t mem_00B43CCC;

extern void ext_0067A670(void* self);

void* fn_005B83C0() {
    if ((mem_00B43CD0 & 1u) == 0u) {
        mem_00B43CD0 |= 1u;
        ext_0067A670(&mem_00B43CCC);
        mem_00B43CCC = 0x009610ECu;
    }
    return &mem_00B43CCC;
}
} // namespace lift_005B83C0

// [0x005B4010] sub_005B4010 (30 bytes)
namespace lift_005B4010 {
// Known callee 0x005B3D10: getStaticSingleton_005B3D10 (Lazily initializes a static singleton at mem_00B43554 (guarded by mem_00B43558) and returns its pointer.)
extern void* ext_005B3D10();

// @name storeValueAndSingleton_005B4010
// @summary Stores a value into out[0] and the static singleton pointer into out[1].
// @field pair +0x00 uint32_t field_0x00 (written from the second argument)
// @field pair +0x04 void* field_0x04 (written with the result of ext_005B3D10)
void fn_005B4010(uint32_t* out, uint32_t value) {
    void* singleton = ext_005B3D10();
    out[0] = value;
    out[1] = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(singleton));
}
} // namespace lift_005B4010

// [0x005B3FF0] sub_005B3FF0 (30 bytes)
namespace lift_005B3FF0 {
// Known callee 0x005B3CB0: getSingleton_005B3CB0 (Lazily initializes and returns the singleton object at 0x00B4354C.)
extern void* ext_005B3CB0();

// @name storeValueAndSingleton
// @summary Writes a 32-bit value and the lazily-initialized singleton pointer (as a 32-bit word) into the two words at dst.
void fn_005B3FF0(void* dst, DWORD value) {
    DWORD singleton = static_cast<DWORD>(reinterpret_cast<uintptr_t>(ext_005B3CB0()));
    lift_field<DWORD>(dst, 0x0) = value;
    lift_field<DWORD>(dst, 0x4) = singleton;
}
} // namespace lift_005B3FF0

// [0x005B4030] sub_005B4030 (30 bytes)
namespace lift_005B4030 {
// Known callee 0x005B3D70: getStaticSingleton_005B3D70 (Initializes and returns a pointer to the static singleton at 0x00B4355C.)
extern void* ext_005B3D70();

// @name storeValueWithStaticSingleton
// @summary Writes a 32-bit value into out[0] and the static singleton pointer into out[1].
void fn_005B4030(uint32_t* out, uint32_t value) {
    void* singleton = ext_005B3D70();
    out[0] = value;
    out[1] = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(singleton));
}
} // namespace lift_005B4030

// [0x005B4050] sub_005B4050 (30 bytes)
namespace lift_005B4050 {
// Known callee 0x005B3DD0: getStaticObject_005B3DD0 (Lazily initializes and returns the static singleton object at 0x00B43564)
extern void* ext_005B3DD0(uint32_t);

// @name StoreValueWithStaticSingleton_005B4050
// @summary Writes the value argument to out->+0x00 and the lazily-initialized static singleton (from 0x005B3DD0) to out->+0x04.
// @field StoredPair +0x00 uint32_t value
// @field StoredPair +0x04 void* singleton
struct StoredPair {
    uint32_t value;
    void* singleton;
};

void fn_005B4050(StoredPair* out, uint32_t value) {
    void* singleton = ext_005B3DD0(0);
    out->value = value;
    out->singleton = singleton;
}
} // namespace lift_005B4050

// [0x005B4130] sub_005B4130 (30 bytes)
namespace lift_005B4130 {
// Known callee 0x005B3E30: getSingleton_005B3E30 (Lazily initializes and returns the singleton object at 0x00B4356C.)
extern void* ext_005B3E30();

// @name storeValueAndSingleton_005B4130
// @summary Writes a value to out+0x00 and the lazily-initialized singleton pointer to out+0x04.
// @field Unknown +0x00 uint32_t field_0x00
// @field Unknown +0x04 void* field_0x04
void fn_005B4130(void* out, uint32_t value) {
    void* singleton = ext_005B3E30();
    lift_field<uint32_t>(out, 0x00) = value;
    lift_field<void*>(out, 0x04) = singleton;
}
} // namespace lift_005B4130

// [0x005B8420]
namespace lift_005B8420 {
namespace lift_005B8420 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (Calls ext_00672000 on self (thiscall, ECX = self), then stores the single stack argument into the first DWORD of self; returns that value.)
extern DWORD ext_0067A670(void* self, DWORD value);
extern DWORD mem_00B43CD8; // init guard flags (bit 0 = initialized)
extern DWORD mem_00B43CD4; // function-local static object storage

// @name getStaticObject_005B8420
// @summary One-time guarded initializer for the static object at 0x00B43CD4 (guard bit 0 of 0x00B43CD8); sets its first DWORD to vtable 0x009611C4 and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_005B8420() {
    // The original wraps this in an MSVC SEH frame (fs:[0] push/restore) for thread-safe
    // static init; that exception-frame plumbing is not reproduced here.
    if ((mem_00B43CD8 & 1u) == 0) {
        mem_00B43CD8 |= 1u;
        ext_0067A670(&mem_00B43CD4, 0u);
        mem_00B43CD4 = 0x009611C4u;
    }
    return &mem_00B43CD4;
}
} // namespace lift_005B8420
} // namespace lift_005B8420

// [0x005B8480] sub_005B8480 (87 bytes)
namespace lift_005B8480 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall, ECX = self, one stack arg; stores the arg into the first DWORD of self and returns it)
extern DWORD ext_0067A670(void* self, DWORD value);
extern DWORD mem_00B43CE0;
extern DWORD mem_00B43CDC;

// @name getOrInitStaticObject_005B8480
// @summary Lazily initializes the static object at mem_00B43CDC once (guarded by bit 0 of mem_00B43CE0) and returns its address.
void* fn_005B8480() {
    if ((mem_00B43CE0 & 1) == 0) {
        mem_00B43CE0 |= 1;
        ext_0067A670(&mem_00B43CDC, 0);
        mem_00B43CDC = 0x96129c;
    }
    return &mem_00B43CDC;
}
} // namespace lift_005B8480

// [0x005B84E0] sub_005B84E0 (87 bytes)
namespace lift_005B84E0 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall, ECX = self, one stack argument;
// stores the argument into the first DWORD of self and returns it).
extern DWORD ext_0067A670(void* self, DWORD value);
extern int mem_00B43CE8;   // once-init guard flags (bit 0)
extern int mem_00B43CE4;   // static object storage (first DWORD = vtable pointer)

// @name getOrInitStaticObject_005B84E0
// @summary Returns the global object at 0x00B43CE4, initializing it once (guard bit 0 of 0x00B43CE8) and setting its vtable to 0x00961374.
void* fn_005B84E0() {
    // The original wraps this in an SEH frame (fs:[0] registration, handler 0x008A3C5E);
    // that is not expressible portably and is omitted here.
    if ((mem_00B43CE8 & 1) == 0) {
        mem_00B43CE8 |= 1;
        ext_0067A670(&mem_00B43CE4, 0);
        mem_00B43CE4 = 0x00961374;
    }
    return &mem_00B43CE4;
}
} // namespace lift_005B84E0

// [0x005B8540] sub_005B8540 (87 bytes)
namespace lift_005B8540 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall, ECX = self, one stack arg; stores the arg into the first DWORD of self and returns it)
extern DWORD ext_0067A670(void* self, DWORD value);
extern DWORD mem_00B43CF0;
extern DWORD mem_00B43CEC;

// @name getOrInitStaticObjectSEH_005B8540
// @summary Lazily initializes the static object at mem_00B43CEC once (guarded by bit 0 of mem_00B43CF0) inside an SEH-protected region and returns its address.
// The original wraps the body in an fs:[0] exception frame; that frame link is not modeled here and the saved link is passed as the stack argument.
void* fn_005B8540() {
    DWORD seh_prev_frame = 0; // saved fs:[0] exception-frame link (not modeled)
    if ((mem_00B43CF0 & 1) == 0) {
        mem_00B43CF0 |= 1;
        ext_0067A670(&mem_00B43CEC, seh_prev_frame);
        mem_00B43CEC = 0x961524;
    }
    return &mem_00B43CEC;
}
} // namespace lift_005B8540
