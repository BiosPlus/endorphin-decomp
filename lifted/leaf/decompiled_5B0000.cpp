// Lifted C++ translation unit: lifted/leaf/decompiled_5B0000.cpp
#include "lift_compat.h"

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
