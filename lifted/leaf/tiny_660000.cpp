// Lifted C++ translation unit: lifted/leaf/tiny_660000.cpp
#include "lift_compat.h"
extern "C" void __fastcall ext_0065D570(void* self);
extern "C" void __fastcall ext_0065D6C0(void* self);
extern "C" void __fastcall ext_0065DD60(void* self);
extern "C" void __fastcall ext_0065E440(void* self);
extern "C" void __fastcall ext_0065E260(void* self);
extern "C" void __fastcall ext_0065DEE0(void* self);
extern "C" void __fastcall ext_0065D350(void* self);
extern "C" void __fastcall ext_0065D2B0(void* self);
extern "C" void __fastcall ext_0065D300(void* self);
extern "C" int mem_00987A04;
extern "C" int32_t mem_00B59420;
extern "C" void __fastcall ext_006667A0(void* self);
extern "C" int mem_0092DF34;

// [0x00661A00] sub_00661A00 (8 bytes)
// @name sub_00661A00
// @summary Member forwarding thunk: loads subobject pointer at +0x4 and tail-calls sub_0065D570.
extern "C" void __fastcall fn_00661A00(void* self) {
    void* delegate_obj = lift_field<void*>(self, 0x4);
    ext_0065D570(delegate_obj);
}

// [0x00661A60] sub_00661A60 (8 bytes)
// @name sub_00661A60
// @summary Member forwarding thunk: loads subobject pointer at +0x4 and tail-calls sub_0065D6C0.
extern "C" void __fastcall fn_00661A60(void* self) {
    void* delegate_obj = lift_field<void*>(self, 0x4);
    ext_0065D6C0(delegate_obj);
}

// [0x00661A70] sub_00661A70 (8 bytes)
// @name sub_00661A70
// @summary Member forwarding thunk: loads subobject pointer at +0x4 and tail-calls sub_0065DD60.
extern "C" void __fastcall fn_00661A70(void* self) {
    void* delegate_obj = lift_field<void*>(self, 0x4);
    ext_0065DD60(delegate_obj);
}

// [0x00661A80] sub_00661A80 (8 bytes)
// @name sub_00661A80
// @summary Member forwarding thunk: loads subobject pointer at +0x4 and tail-calls sub_0065E440.
extern "C" void __fastcall fn_00661A80(void* self) {
    void* delegate_obj = lift_field<void*>(self, 0x4);
    ext_0065E440(delegate_obj);
}

// [0x00661A90] sub_00661A90 (8 bytes)
// @name sub_00661A90
// @summary Member forwarding thunk: loads subobject pointer at +0x4 and tail-calls sub_0065E260.
extern "C" void __fastcall fn_00661A90(void* self) {
    void* delegate_obj = lift_field<void*>(self, 0x4);
    ext_0065E260(delegate_obj);
}

// [0x00661AA0] sub_00661AA0 (8 bytes)
// @name sub_00661AA0
// @summary Member forwarding thunk: loads subobject pointer at +0x4 and tail-calls sub_0065DEE0.
extern "C" void __fastcall fn_00661AA0(void* self) {
    void* delegate_obj = lift_field<void*>(self, 0x4);
    ext_0065DEE0(delegate_obj);
}

// [0x00661AB0] sub_00661AB0 (8 bytes)
// @name sub_00661AB0
// @summary Member forwarding thunk: loads subobject pointer at +0x4 and tail-calls sub_0065D350.
extern "C" void __fastcall fn_00661AB0(void* self) {
    void* delegate_obj = lift_field<void*>(self, 0x4);
    ext_0065D350(delegate_obj);
}

// [0x00661AC0] sub_00661AC0 (8 bytes)
// @name sub_00661AC0
// @summary Member forwarding thunk: loads subobject pointer at +0x4 and tail-calls sub_0065D2B0.
extern "C" void __fastcall fn_00661AC0(void* self) {
    void* delegate_obj = lift_field<void*>(self, 0x4);
    ext_0065D2B0(delegate_obj);
}

// [0x00661AD0] sub_00661AD0 (8 bytes)
// @name sub_00661AD0
// @summary Member forwarding thunk: loads subobject pointer at +0x4 and tail-calls sub_0065D300.
extern "C" void __fastcall fn_00661AD0(void* self) {
    void* delegate_obj = lift_field<void*>(self, 0x4);
    ext_0065D300(delegate_obj);
}

// [0x00665810] sub_00665810 (7 bytes)
// @name sub_00665810
// @summary Stores address of mem_00987A04 into field at offset +0x0.
extern "C" void __fastcall fn_00665810(void* self) {
    lift_field<void*>(self, 0x0) = &mem_00987A04;
}

// [0x00665870] sub_00665870 (6 bytes)
// @name sub_00665870
// @summary Returns global int32 value from mem_00B59420.
extern "C" int32_t __cdecl fn_00665870(void) {
    return mem_00B59420;
}

// [0x006667D0] sub_006667D0 (7 bytes)
// @name sub_006667D0
// @summary Member forwarding thunk: loads subobject pointer at +0x0 and tail-calls sub_006667A0.
extern "C" void __fastcall fn_006667D0(void* self) {
    void* delegate_obj = lift_field<void*>(self, 0x0);
    ext_006667A0(delegate_obj);
}

// [0x0066AC80] sub_0066AC80 (7 bytes)
// @name sub_0066AC80
// @summary Stores address of mem_0092DF34 into field at offset +0x0.
extern "C" void __fastcall fn_0066AC80(void* self) {
    lift_field<void*>(self, 0x0) = &mem_0092DF34;
}

// [0x00661980] sub_00661980 (9 bytes)
namespace lift_00661980 {
// @name setVtable_0093BFB4
// @summary Stores the vtable address 0x0093BFB4 into the first dword of the object pointed to by ECX (this).
// @field Unknown +0x00 uint32_t field_0x00

void fn_00661980(void* self) {
    *static_cast<uint32_t*>(self) = 0x0093BFB4u;
}
} // namespace lift_00661980

// [0x00661890]
namespace lift_00661890 {
// @name forwardVtableSlot5
// @summary Tail-calls virtual method at vtable offset 0x14 on the inner object pointed to by field_0x00
// @field Object +0x00 void* field_0x00


void __thiscall sub_00661890(void* self) {
    void* inner = *reinterpret_cast<void**>(self);
    void** vtable = *reinterpret_cast<void***>(inner);
    using Fn = void(__thiscall*)(void*);
    Fn fn = reinterpret_cast<Fn>(vtable[5]);
    fn(inner);
}
} // namespace lift_00661890

// [0x006658A0]
namespace lift_006658A0 {
// @name hasField0x18
// @summary Returns 1 if the 32-bit field at offset 0x18 is non-zero, otherwise 0.
// @field unknown +0x18 uint32_t field_0x18
uint32_t __thiscall sub_006658A0(void* self) {
    return *reinterpret_cast<uint32_t*>(reinterpret_cast<uintptr_t>(self) + 0x18) != 0 ? 1u : 0u;
}
} // namespace lift_006658A0

// [0x00665880] sub_00665880 (14 bytes)
namespace lift_00665880 {
// @name SetFlagIfClear
// @class <Unknown> (free function taking object in ecx)
// @summary If the dword at +0x0C is zero, set it to 1; otherwise leave it unchanged.
// @field <Unknown> +0x0C int32_t field_0x0C
void fn_00665880(void* self) {
    int32_t& flag = lift_field<int32_t>(self, 0x0C);
    if (flag == 0) {
        flag = 1;
    }
}
} // namespace lift_00665880

// [0x00666CB0]
namespace lift_00666CB0 {
// @name Unknown::sub_00666CB0
// @class Unknown
// @summary If this->+0x94 is non-null, clears the byte at +0x04 of the pointed-to object.
// @field Unknown +0x94 void* field_0x94

void sub_00666CB0(uint8_t* ecx) {
    uint8_t* eax = *reinterpret_cast<uint8_t**>(ecx + 0x94);
    if (eax != nullptr) {
        eax[0x04] = 0;
    }
}
} // namespace lift_00666CB0

// [0x006616C0] sub_006616C0 (16 bytes)
namespace lift_006616C0 {
// @name Unknown::ForwardToSubobject7
// @class Unknown
// @summary Forwards a call to virtual slot 7 of the object stored at +0x00, passing the address of this+0x04 as the single argument.
// @field Unknown +0x00 void* subobject
void fn_006616C0(void* self) {
    // Sub-object pointer lives at self+0x00; its vtable slot 7 (offset 0x1c) is invoked
    // with the sub-object as `this` and (self + 0x04) as the one stack argument.
    void* subobject = *reinterpret_cast<void**>(self);
    void** vtbl = *reinterpret_cast<void***>(subobject);
    using SlotFn = void (*)(void* thisPtr, void* arg);
    auto fn = reinterpret_cast<SlotFn>(vtbl[7]);
    fn(subobject, reinterpret_cast<uint8_t*>(self) + 0x04);
}
} // namespace lift_006616C0

// [0x00666CC0] sub_00666CC0 (17 bytes)
namespace lift_00666CC0 {
// @name sub_00666CC0
// @summary Auto-lifted identical-shape clone of 0x0049ABC0 (Unknown::getByteAt09OfPtr12C).
namespace lift_0049ABC0 {
// @name Unknown::getByteAt09OfPtr12C
// @class Unknown
// @summary Returns byte +0x09 of the pointer stored at +0x12C, or 0 if that pointer is null.
// @field Unknown +0x12C void* field_0x12C
uint8_t fn_00666CC0(void* self) {
    void* ptr = lift_field<void*>(self, 0x94);
    if (ptr == nullptr) {
        return 0;
    }
    return lift_field<uint8_t>(ptr, 0x4);
}
} // namespace lift_0049ABC0
} // namespace lift_00666CC0

// [0x0066A310] sub_0066A310 (18 bytes)
namespace lift_0066A310 {
// @name identityVec4Init
// @summary Writes the 4-float vector (0, 0, 0, 1) into the object at self (identity quaternion-style init).
// @field Unknown +0x00 float field_0x00
// @field Unknown +0x04 float field_0x04
// @field Unknown +0x08 float field_0x08
// @field Unknown +0x0C float field_0x0C
void fn_0066A310(void* self) {
    // self arrives in ECX (thiscall-style); stores 0.0f, 0.0f, 0.0f, 1.0f at +0x00..+0x0C.
    lift_field<float>(self, 0x00) = 0.0f;
    lift_field<float>(self, 0x04) = 0.0f;
    lift_field<float>(self, 0x08) = 0.0f;
    lift_field<float>(self, 0x0C) = 1.0f;
}
} // namespace lift_0066A310

// [0x0066B080] sub_0066B080 (21 bytes)
namespace lift_0066B080 {
// @name sub_0066B080
// @summary Auto-lifted identical-shape clone of 0x004D0B60 (GetTableEntry28Address).
namespace lift_004D0B60 {
// @name GetTableEntry28Address
// @class (none)
// @summary Returns the address of entry `index` in a 28-byte-stride table based at 0x00AE5C10 (0xAE5C10 + index * 28).
void* fn_0066B080(uint32_t index) {
    constexpr uintptr_t kTableBase = 0xB599C0u;
    return reinterpret_cast<void*>(kTableBase + static_cast<uintptr_t>(index) * 28u);
}
} // namespace lift_004D0B60
} // namespace lift_0066B080

// [0x00661A40] sub_00661A40 (22 bytes)
namespace lift_00661A40 {
// @name ReciprocalOfSubobjectField138
// @class Unknown (self is thiscall; pointee class not yet identified)
// @summary Returns 1.0f / (float)*(self->field_0x04 + 0x138), as an x87 float result (st0).
// @field Unknown +0x04 void* field_0x04 (pointer to subobject, dereferenced)
// @field Subobject +0x138 float field_0x138 (divisor read through the pointer at self+0x04)
float fn_00661A40(void* self) {
    void* sub = lift_field<void*>(self, 0x04);
    float divisor = lift_field<float>(sub, 0x138);
    float result = 1.0f / divisor;
    return result;
}
} // namespace lift_00661A40

// [0x006616F0] (25 bytes)
namespace lift_006616F0 {
// @name Unknown::forwardToInnerVfunc8 (descriptive; owner class not identified)
// @class Unknown
// @summary Forwards (this+4, arg) to vfunc slot 8 (vtable +0x20) of the object pointed to by the first member.
// @field Unknown +0x00 void* field_0x00 (pointer to inner object whose vtable slot 8 is invoked)

// Callee signature: (this, a, b) with the 32-bit thiscall convention flattened
// into a plain function pointer; the first argument is the implicit `this`.
typedef uint32_t (*VFunc8)(void* self, void* a, void* b);

uint32_t fn_006616F0(void* thisPtr, void* arg) {
    uint8_t* self = static_cast<uint8_t*>(thisPtr);
    // ecx = [eax]: inner object pointer stored at +0x00
    void* inner = *reinterpret_cast<void**>(self);
    // edx = [ecx]: inner object's vtable
    uint8_t* vtbl = *reinterpret_cast<uint8_t**>(inner);
    // eax = [edx + 0x20]: vtable slot 8
    VFunc8 fn = *reinterpret_cast<VFunc8*>(vtbl + 0x20);
    // push arg; push (this + 4); call with this = inner
    return fn(inner, self + 4, arg);
}
} // namespace lift_006616F0

// [0x006618A0] sub_006618A0 (25 bytes)
namespace lift_006618A0 {
// @name sub_006618A0
// @summary Forwards arg1 to virtual slot 3 of the object pointed to by self+0, passing self+4 as the first argument (thiscall, ret 4).
// @field field_0x00 +0x00 void* field_0x00
// @field field_0x04 +0x04 void field_0x04 (embedded subobject; address only, passed to callee)

// Abstract view of the callee's vtable. Slot 3 (offset 0x0C on x86) is the
// only slot used; the first three slots are placeholders so the index matches.
struct IVtblSlot3 {
    virtual void slot0() = 0;
    virtual void slot1() = 0;
    virtual void slot2() = 0;
    virtual void slot3(void* subobject, void* arg1) = 0;
};

void fn_006618A0(void* self, void* arg1) {
    // self+0 holds a pointer to the forwarding target object.
    void* target = lift_field<void*>(self, 0x00);
    // self+4 is passed by address to the target's slot 3.
    void* subobject = static_cast<uint8_t*>(self) + 0x04;
    reinterpret_cast<IVtblSlot3*>(target)->slot3(subobject, arg1);
}
} // namespace lift_006618A0

// [0x00661950] sub_00661950 (25 bytes)
namespace lift_00661950 {
// @name sub_00661950
// @summary Auto-lifted identical-shape clone of 0x006616F0 (Unknown::forwardToInnerVfunc8 (descriptive; owner class not identified)).
namespace lift_006616F0 {
// @name Unknown::forwardToInnerVfunc8 (descriptive; owner class not identified)
// @class Unknown
// @summary Forwards (this+4, arg) to vfunc slot 8 (vtable +0x20) of the object pointed to by the first member.
// @field Unknown +0x00 void* field_0x00 (pointer to inner object whose vtable slot 8 is invoked)

// Callee signature: (this, a, b) with the 32-bit thiscall convention flattened
// into a plain function pointer; the first argument is the implicit `this`.
typedef uint32_t (*VFunc8)(void* self, void* a, void* b);

uint32_t fn_00661950(void* thisPtr, void* arg) {
    uint8_t* self = static_cast<uint8_t*>(thisPtr);
    // ecx = [eax]: inner object pointer stored at +0x00
    void* inner = *reinterpret_cast<void**>(self);
    // edx = [ecx]: inner object's vtable
    uint8_t* vtbl = *reinterpret_cast<uint8_t**>(inner);
    // eax = [edx + 0x20]: vtable slot 8
    VFunc8 fn = *reinterpret_cast<VFunc8*>(vtbl + 0x30);
    // push arg; push (this + 4); call with this = inner
    return fn(inner, self + 4, arg);
}
} // namespace lift_006616F0
} // namespace lift_00661950

// [0x006657F0] sub_006657F0 (26 bytes)
namespace lift_006657F0 {
extern int mem_00987A04;

// @name Unknown::InitVtblAndArg
// @summary Stores the vtable pointer (0x00987A04), a stack argument at +0x04, and zeroes +0x08/+0x0C; returns self.
// @field Unknown +0x00 uint32_t vtable
// @field Unknown +0x04 uint32_t field_0x04
// @field Unknown +0x08 uint32_t field_0x08
// @field Unknown +0x0C uint32_t field_0x0C
void* fn_006657F0(void* self, uint32_t arg) {
    lift_field<uint32_t>(self, 0x00) = 0x00987A04u;
    lift_field<uint32_t>(self, 0x04) = arg;
    lift_field<uint32_t>(self, 0x08) = 0u;
    lift_field<uint32_t>(self, 0x0C) = 0u;
    return self;
}
} // namespace lift_006657F0

// [0x006649B0]
namespace lift_006649B0 {
// @name sub_006649B0_isWhitespace
// @summary Returns 1 if the byte is ASCII whitespace (space, tab, CR, LF), otherwise 0.

int sub_006649B0_isWhitespace(unsigned char c) {
    switch (c) {
        case 0x20: // space
        case 0x09: // tab
        case 0x0D: // carriage return
        case 0x0A: // line feed
            return 1;
        default:
            return 0;
    }
}
} // namespace lift_006649B0

// [0x00669E60]
namespace lift_00669E60 {
// @name Unknown::copyFloat4From
// @class Unknown
// @summary Copies four consecutive 32-bit floats from the source pointer (stack arg) into this object (ECX).
// @field Unknown +0x00 float field_0x00
// @field Unknown +0x04 float field_0x04
// @field Unknown +0x08 float field_0x08
// @field Unknown +0x0C float field_0x0C

// __thiscall: ECX = this (destination), [esp+4] = source pointer; callee pops 4 bytes (ret 4).
void __thiscall copyFloat4From(void* self, const void* src) {
    const float* s = reinterpret_cast<const float*>(src);
    lift_field<float>(self, 0x00) = s[0];
    lift_field<float>(self, 0x04) = s[1];
    lift_field<float>(self, 0x08) = s[2];
    lift_field<float>(self, 0x0C) = s[3];
}
} // namespace lift_00669E60

// [0x00669E40] sub_00669E40 (30 bytes)
namespace lift_00669E40 {
// @name setFloat4FromStack
// @summary Copies four float arguments into the first 16 bytes of self (ret 0x10, callee-cleans 4 floats).
// @field <unknown> +0x00 float field_0x00
// @field <unknown> +0x04 float field_0x04
// @field <unknown> +0x08 float field_0x08
// @field <unknown> +0x0C float field_0x0C
void fn_00669E40(void* self, float a0, float a1, float a2, float a3) {
    lift_field<float>(self, 0x00) = a0;
    lift_field<float>(self, 0x04) = a1;
    lift_field<float>(self, 0x08) = a2;
    lift_field<float>(self, 0x0C) = a3;
}
} // namespace lift_00669E40

// [0x006616D0]
namespace lift_006616D0 {
// @name Unknown::IsSameDwordPair
// @class Unknown
// @summary Returns 1 if both leading DWORDs of *this and *other match, else 0 (stdcall-style, one stack arg, ret 4).
// @field Unknown +0x00 int32_t field_0x00
// @field Unknown +0x04 int32_t field_0x04
int fn_006616D0(void* self, const void* other) {
    const int32_t a0 = lift_field<int32_t>(self, 0x00);
    const int32_t b0 = lift_field<int32_t>(other, 0x00);
    if (a0 != b0) {
        return 0;
    }
    const int32_t a1 = lift_field<int32_t>(self, 0x04);
    const int32_t b1 = lift_field<int32_t>(other, 0x04);
    return a1 == b1 ? 1 : 0;
}
} // namespace lift_006616D0

// [0x00666C90]
namespace lift_00666C90 {
// @name Unknown::FindParentOfFirstFlaggedChild
// @class Unknown
// @summary Walks the +0x08 link chain starting at the child of self; returns the node whose +0x08 child is the first node with byte +0xC1 != 0 (returns self if its own child is already flagged). Ret 4 (one stack arg).
// @field Unknown +0x08 void* field_0x08
// @field Unknown +0xC1 uint8_t field_0xC1
void* fn_00666C90(void* self) {
    void* eax = self;
    void* ecx = lift_field<void*>(eax, 0x08);
    if (lift_field<uint8_t>(ecx, 0xC1) != 0) {
        return eax;
    }
    do {
        eax = ecx;
        ecx = lift_field<void*>(eax, 0x08);
    } while (lift_field<uint8_t>(ecx, 0xC1) == 0);
    return eax;
}
} // namespace lift_00666C90
