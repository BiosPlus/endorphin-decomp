// Lifted C++ translation unit: lifted/leaf/tiny_480000.cpp
#include "lift_compat.h"
extern "C" void __fastcall ext_004A66D0(void* self);
extern "C" void __fastcall ext_004A6710(void* self);
#include <cstring>
#include <cstdint>

#include <cstdint>
// @name sub_004805E0
// @summary Member forwarding thunk: loads subobject pointer at +0x3B4 and tail-calls sub_004A66D0.
extern "C" void __fastcall fn_004805E0(void* self) {
    void* delegate_obj = lift_field<void*>(self, 0x3B4);
    ext_004A66D0(delegate_obj);
}
#include <cstddef>

// [0x004806C0] sub_004806C0 (11 bytes)
// @name sub_004806C0
// @summary Member forwarding thunk: loads subobject pointer at +0x3B4 and tail-calls sub_004A6710.
extern "C" void __fastcall fn_004806C0(void* self) {
    void* delegate_obj = lift_field<void*>(self, 0x3B4);
    ext_004A6710(delegate_obj);
}

// [0x00486C10] sub_00486C10 (13 bytes)
// @name sub_00486C10
// @summary Setter storing float argument into field at offset +0x220.
extern "C" void __fastcall fn_00486C10(void* self, int edx_unused, float value) {
    (void)edx_unused;
    lift_field<float>(self, 0x220) = value;
}

// [0x00488260] sub_00488260 (8 bytes)
// @name sub_00488260
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x144.
extern "C" void __fastcall fn_00488260(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x144);
    target(self);
}

// [0x0048FB60] sub_0048FB60 (19 bytes)
// @name sub_0048FB60
// @summary Auto-lifted identical-shape clone of 0x0051BED0 (NMData::RealChannel::vfunc_9).
extern "C" int __thiscall fn_0048FB60(void* self) {
    const int32_t begin = lift_field<int32_t>(self, 0x4);
    if (begin == 0) {
        return 0;
    }
    const int32_t end = lift_field<int32_t>(self, 0x8);
    const int32_t diff = end - begin;
    return diff >> 3;
}

// [0x0048FB00]
namespace lift_0048FB00 {
extern uint32_t mem_read32(uintptr_t);
extern uint8_t mem_read8(uintptr_t);

// @name sub_0048FB00
// @summary Reads byte at offset +0x1 from the pointer at this+0x4
// @field unknown +0x04 uint32_t field_0x04
uint8_t __thiscall sub_0048FB00(void* self) {
    uint32_t ptr = mem_read32(reinterpret_cast<uintptr_t>(self) + 0x4);
    return mem_read8(static_cast<uintptr_t>(ptr) + 0x1);
}
} // namespace lift_0048FB00

// [0x00486AF0] sub_00486AF0 (17 bytes)
namespace lift_00486AF0 {
// @name sub_00486AF0
// @summary Auto-lifted identical-shape clone of 0x00402050 (AnimatableTransform::vfunc_37).
namespace lift_00402050 {
extern uint32_t mem_read32(uint32_t addr);

// @name AnimatableTransform::vfunc_37
// @class AnimatableTransform
// @summary Forwards virtual call to RenderObjectOwner/Updateable subobject vtable slot +0x10
// @field AnimatableTransform +0x0C uint32_t* renderObjectOwner_vtable

uint32_t __thiscall fn_00486AF0(uint32_t self) {
    uint32_t subobj = self + 0x19C;
    uint32_t vtable = mem_read32(subobj);
    uint32_t target = mem_read32(vtable + 0x1C);
    using Fn = uint32_t(__thiscall*)(uint32_t);
    return reinterpret_cast<Fn>(static_cast<uintptr_t>(target))(subobj);
}
} // namespace lift_00402050
} // namespace lift_00486AF0

// [0x0048FB10]
namespace lift_0048FB10 {
// @name sub_0048FB10
// @summary Loads a double from offset +0x58 of this and returns it as a float
// @field Unknown +0x58 double field_0x58


float __thiscall sub_0048FB10(void* self) {
    return static_cast<float>(*reinterpret_cast<const double*>(reinterpret_cast<const uint8_t*>(self) + 0x58));
}
} // namespace lift_0048FB10

// [0x0048FB20]
namespace lift_0048FB20 {
// @name Unknown::setField60IfChanged
// @class Unknown
// @summary Stores the argument into this+0x60 only when it differs from the current value.
// @field Unknown +0x60 uint32_t field_0x60

class Unknown {
public:
    void setField60IfChanged(uint32_t value);

    uint8_t pad_0000[0x60];
    uint32_t field_0x60;
};

void Unknown::setField60IfChanged(uint32_t value) {
    if (value != field_0x60) {
        field_0x60 = value;
    }
}
} // namespace lift_0048FB20

// [0x0048ABF0] sub_0048ABF0 (16 bytes)
namespace lift_0048ABF0 {
// @name sub_0048ABF0
// @summary Auto-lifted identical-shape clone of 0x005B72E0 (Unknown::ForwardToSubobject158).
namespace lift_005B72E0 {
extern void ext_0048A810(void* self);

// @name Unknown::ForwardToSubobject158
// @class Unknown
// @summary Loads the DWORD at +0x158; if non-zero, tail-forwards to ext_005CE9B0 with it as self.
// @field Unknown +0x158 DWORD field_0x158
void fn_0048ABF0(void* self) {
    DWORD sub = *reinterpret_cast<DWORD*>(static_cast<unsigned char*>(self) + 0x234);
    if (sub != 0) {
        ext_0048A810(reinterpret_cast<void*>(static_cast<uintptr_t>(sub)));
    }
}
} // namespace lift_005B72E0
} // namespace lift_0048ABF0

// [0x004800A0] sub_004800A0 (21 bytes)
namespace lift_004800A0 {
// @name Unknown::setField3E0FromInvertedArgBit0
// @class Unknown
// @summary Stores the inverted low bit of the byte argument into this+0x3E0 as a dword (thiscall, ret 4).
// @field Unknown +0x3e0 uint32_t field_0x3e0
void fn_004800A0(void* self, uint8_t arg) {
    const uint8_t inverted = static_cast<uint8_t>(~arg);
    const uint32_t bit0 = static_cast<uint32_t>(inverted) & 1u;
    lift_field<uint32_t>(self, 0x3e0) = bit0;
}
} // namespace lift_004800A0

// [0x00481BB0]
namespace lift_00481BB0 {
// @name InitValueAndZeroTail
// @class <unknown> (member, thiscall; 'this' passed in ECX)
// @summary Stores the single stack argument at offset 0, zeroes the 4-byte slots at +0x08/+0x0C/+0x10, returns this.
// @field <unknown> +0x00 uint32_t field_0x00
// @field <unknown> +0x08 uint32_t field_0x08
// @field <unknown> +0x0C uint32_t field_0x0C
// @field <unknown> +0x10 uint32_t field_0x10

// Callee-cleans one DWORD argument (ret 4).
void* __thiscall fn_00481BB0(void* self, uint32_t value) {
    lift_field<uint32_t>(self, 0x00) = value;
    lift_field<uint32_t>(self, 0x08) = 0;
    lift_field<uint32_t>(self, 0x0C) = 0;
    lift_field<uint32_t>(self, 0x10) = 0;
    return self;
}
} // namespace lift_00481BB0

// [0x00486980] sub_00486980 (26 bytes)
namespace lift_00486980 {
// @name sub_00486980
// @summary Auto-lifted identical-shape clone of 0x006722B0 (sub_0067AEE8).
namespace lift_006722B0 {
// @name Unknown::ForwardArgToSubobjectVfunc31
// @class Unknown
// @summary Forwards its single stack argument, together with this, to virtual slot 0x7C of the subobject at +0x4 and returns the result.
// @field Unknown +0x04 ptr subobject

struct Subobject;

struct Unknown {
    unsigned char field_0x00[0x04];
    Subobject* subobject;  // +0x04
};

// Virtual slot at byte offset 0x7C (index 31) of the subobject's vtable.
using ForwardFn = int(__stdcall*)(Unknown* self, int arg);

int __thiscall fn_00486980(Unknown* self, int arg) {
    Subobject* sub = self->subobject;
    void** vtbl = *reinterpret_cast<void***>(sub);
    ForwardFn fn = reinterpret_cast<ForwardFn>(vtbl[0xA4 / sizeof(void*)]);
    return fn(self, arg);
}
} // namespace lift_006722B0
} // namespace lift_00486980

// [0x00486D60] sub_00486D60 (27 bytes)
namespace lift_00486D60 {
// @name sub_00486D60
// @summary Auto-lifted identical-shape clone of 0x00401AF0 (FindPredecessorOfFlagged).
namespace lift_00401AF0 {
// @name FindPredecessorOfFlagged
// @summary Walks the first-word link chain from arg and returns the node just before the first node whose byte at +0x15 is nonzero (returns arg if arg->next is already flagged).
// @field Node +0x00 void* field_0x00
// @field Node +0x15 uint8_t field_0x15
void* fn_00486D60(void* arg) {
    void* prev = arg;
    void* cur = lift_field<void*>(arg, 0x00);
    while (lift_field<uint8_t>(cur, 0x69) == 0) {
        prev = cur;
        cur = lift_field<void*>(cur, 0x00);
    }
    return prev;
}
} // namespace lift_00401AF0
} // namespace lift_00486D60

// [0x00489880] sub_00489880 (27 bytes)
namespace lift_00489880 {
// @name CallChildVtableSlot1EIfPresent
// @summary If self->+0x04 is non-null, tail-calls child's vtable slot 0x78/4 with child as this and self as the argument; otherwise returns self.
// @field self +0x04 void* field_0x04
void* fn_00489880(void* self) {
    void* child = lift_field<void*>(self, 0x04);
    if (child == nullptr) {
        return self;
    }

    using SlotFn = void* (*)(void* thisObj, void* arg);
    void* vtbl = lift_field<void*>(child, 0x00);
    auto slot = reinterpret_cast<SlotFn>(lift_field<void*>(vtbl, 0x78));
    return slot(child, self);
}
} // namespace lift_00489880
