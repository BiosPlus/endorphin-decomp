// Lifted C++ translation unit: lifted/leaf/tiny_540000.cpp
#include "lift_compat.h"
extern "C" void __fastcall ext_00548AB0(void* self);
extern "C" int mem_009560E4;
extern "C" void __fastcall ext_00541AB0(void* self);
extern "C" void __fastcall ext_005DC420(void* self);
extern "C" int mem_00956F94;
#include <cstdint>
#include <cstring>

// [0x00548FBB] sub_00548FBB (5 bytes)
// @name sub_00548FBB
// @summary Epilogue fragment: pops saved esi and releases 0x30 bytes of stack locals; no portable C++ equivalent for the stack unwind, so the body is empty.
void fn_00548FBB(void* self) {
    // Intentionally empty. The three bytes are `pop esi; add esp, 0x30; ret`,
    // which restore a callee-saved register and discard a 0x30-byte frame from
    // the caller's stack. They have no observable effect expressible in portable
    // C++; the frame they belong to is not part of this 5-byte range.
    (void)self;
}

// [0x005405B0] sub_005405B0 (7 bytes)
// @name sub_005405B0
// @summary Member forwarding thunk: loads subobject pointer at +0x0 and tail-calls sub_00548AB0.
extern "C" void __fastcall fn_005405B0(void* self) {
    void* delegate_obj = lift_field<void*>(self, 0x0);
    ext_00548AB0(delegate_obj);
}

// [0x00543320] sub_00543320 (7 bytes)
// @name sub_00543320
// @summary Stores address of mem_009560E4 into field at offset +0x0.
extern "C" void __fastcall fn_00543320(void* self) {
    lift_field<void*>(self, 0x0) = &mem_009560E4;
}

// [0x005438F0] sub_005438F0 (11 bytes)
// @name sub_005438F0
// @summary Member forwarding thunk: loads subobject pointer at +0x84 and tail-calls sub_00541AB0.
extern "C" void __fastcall fn_005438F0(void* self) {
    void* delegate_obj = lift_field<void*>(self, 0x84);
    ext_00541AB0(delegate_obj);
}

// [0x00547D00] sub_00547D00 (11 bytes)
// @name sub_00547D00
// @summary Member forwarding thunk: loads subobject pointer at +0xA4 and tail-calls sub_005DC420.
extern "C" void __fastcall fn_00547D00(void* self) {
    void* delegate_obj = lift_field<void*>(self, 0xA4);
    ext_005DC420(delegate_obj);
}

// [0x0054E890] sub_0054E890 (7 bytes)
// @name sub_0054E890
// @summary Stores address of mem_00956F94 into field at offset +0x0.
extern "C" void __fastcall fn_0054E890(void* self) {
    lift_field<void*>(self, 0x0) = &mem_00956F94;
}

// [0x00548260] sub_00548260 (20 bytes)
namespace lift_00548260 {
// @name sub_00548260
// @summary Auto-lifted identical-shape clone of 0x004407B0 (GetPointerChainDword10).
namespace lift_004407B0 {
// @name GetPointerChainDword10
// @class <ClassName> (unknown; receiver type not yet identified)
// @summary Returns the DWORD at +0x10 of the pointer stored at self+0x44, or 0 if that pointer is null.
// @field <ClassName> +0x44 void* field_0x44
// @field void +0x10 DWORD field_0x10
DWORD fn_00548260(void* self) {
    void* p = *reinterpret_cast<void**>(static_cast<uint8_t*>(self) + 0xA0);
    if (p == nullptr) {
        return 0;
    }
    return *reinterpret_cast<DWORD*>(static_cast<uint8_t*>(p) + 0x208);
}
} // namespace lift_004407B0
} // namespace lift_00548260

// [0x00543630] sub_00543630 (14 bytes)
namespace lift_00543630 {
// IAT slot holding USER32!GetAsyncKeyState.
extern uint32_t mem_009256E4;

// @name IsAltKeyDown
// @summary Returns 1 if the VK_MENU (Alt) key is currently down, else 0 (high bit of GetAsyncKeyState(VK_MENU)).
// Note: no fields accessed; function takes no meaningful arguments (pushes VK_MENU=0x12 itself).
uint8_t fn_00543630() {
    using GetAsyncKeyStateFn = SHORT(__stdcall*)(INT);
    auto getAsyncKeyState = reinterpret_cast<GetAsyncKeyStateFn>(static_cast<uintptr_t>(mem_009256E4));
    const uint32_t state = static_cast<uint16_t>(getAsyncKeyState(0x12));
    return static_cast<uint8_t>((state >> 15) & 0x01u);
}
} // namespace lift_00543630

// [0x0054C7F0] sub_0054C7F0 (15 bytes)
namespace lift_0054C7F0 {
extern DWORD mem_00AF657C;                                      // global display-list base
extern void (*mem_009253E8)(GLuint list, GLsizei range);            // glDeleteLists (IAT slot)

// @name DeleteGlobalDisplayListRange
// @summary Deletes the 0x60-entry block of GL display lists starting at the global base list id.
void fn_0054C7F0() {
    mem_009253E8(static_cast<GLuint>(mem_00AF657C), 0x60);
}
} // namespace lift_0054C7F0

// [0x00543900] sub_00543900 (17 bytes)
namespace lift_00543900 {
// @name sub_00543900
// @class <Unknown>
// @summary Toggles a byte flag (at sub-object +0x04) to its logical NOT; sub-object pointer lives at self+0x84.
// @field <Unknown> +0x84 uint8_t* field_0x84
void __thiscall fn_00543900(uint8_t* self) {
    // mov eax, [ecx+0x84]
    uint8_t* sub = *reinterpret_cast<uint8_t**>(self + 0x84);
    // cmp byte [eax+4], 0 ; sete cl ; mov byte [eax+4], cl
    uint8_t flag = *(sub + 0x04);
    *(sub + 0x04) = (flag == 0) ? 1 : 0;
}
} // namespace lift_00543900

// [0x00548220] sub_00548220 (20 bytes)
namespace lift_00548220 {
// @name ReadSubobjectFloatOrOne
// @summary Returns float at subobject(+0xA0)+0x204, or 1.0f when the subobject pointer is null.
// @field field_0xA0 +0xA0 uint32_t field_0xA0 (subobject pointer, 32-bit guest address)
// @field field_0xA0->+0x204 float field_0x204 (read through subobject pointer)
float fn_00548220(void* self) {
    const uint32_t sub = lift_field<uint32_t>(self, 0xA0);
    if (sub == 0) {
        return 1.0f;
    }
    const void* subobj = reinterpret_cast<const void*>(static_cast<uintptr_t>(sub));
    return lift_field<float>(subobj, 0x204);
}
} // namespace lift_00548220

// [0x005480D0]
namespace lift_005480D0 {
// @name GetFloatViaIndirectOrInline
// @class <unknown>
// @summary Returns float at this+0x1F4 of the object pointed to by this+0xA0 if non-null, else float at this+0x70.
// @field <unknown> +0x70 float field_0x70
// @field <unknown> +0xA0 void* field_0xA0
// @field <unknown> +0x1F4 float field_0x1F4
float GetFloatViaIndirectOrInline(void* self) {
    void* indirect = lift_field<void*>(self, 0xA0);
    if (indirect != nullptr) {
        return lift_field<float>(indirect, 0x1F4);
    }
    return lift_field<float>(self, 0x70);
}
} // namespace lift_005480D0

// [0x0054E340] sub_0054E340 (21 bytes)
namespace lift_0054E340 {
// @name IsFloatFieldAt44Zero
// @summary Returns 1 if the float at this+0x44 compares equal to 0.0 (NaN yields 0), else 0.
// @field Unknown +0x44 float field_0x44
int fn_0054E340(const void* self) {
    const float value = lift_field<float>(self, 0x44);
    return (value == 0.0f) ? 1 : 0;
}
} // namespace lift_0054E340

// [0x00548200] sub_00548200 (22 bytes)
namespace lift_00548200 {
extern float __fastcall ext_005D0710(uint32_t arg);
extern float mem_00956CB0;

// @name SubObject::GetScaleOrForward
// @class SubObject
// @summary Returns the value at +0xA0 forwarded to sub_005D0710 when non-zero; otherwise returns the float constant 4/3 (1.3333334).
// @field SubObject +0xA0 uint32_t field_0xA0
extern float __fastcall fn_00548200(void* self) {
    const uint32_t v = lift_field<uint32_t>(self, 0xA0);
    if (v != 0) {
        return ext_005D0710(v);
    }
    return mem_00956CB0;
}
} // namespace lift_00548200

// [0x00543300] sub_00543300 (23 bytes)
namespace lift_00543300 {
// @name ResetHeaderFields
// @class <unknown>
// @summary Stores 10 in the first DWORD of the object and zeroes four DWORDs at +0x08..+0x14; returns self.
// @field <unknown> +0x00 DWORD field_0x00
// @field <unknown> +0x08 DWORD field_0x08
// @field <unknown> +0x0C DWORD field_0x0C
// @field <unknown> +0x10 DWORD field_0x10
// @field <unknown> +0x14 DWORD field_0x14
void* fn_00543300(void* self) {
    auto* base = static_cast<unsigned char*>(self);
    auto store = [base](std::size_t off, DWORD value) {
        std::memcpy(base + off, &value, sizeof(value));
    };

    const DWORD zero = 0;
    store(0x08, zero);
    store(0x0C, zero);
    store(0x10, zero);
    store(0x14, zero);
    store(0x00, 0x0A);

    return self;
}
} // namespace lift_00543300

// [0x0054E400]
namespace lift_0054E400 {
// @name Unknown::SetFloatFromFlagInverted
// @class Unknown
// @summary Stores 1.0f at this+0x44 when the byte argument is zero, otherwise 0.0f.
// @field Unknown +0x44 float field_0x44
void fn_0054E400(void* self, uint8_t flag) {
    lift_field<float>(self, 0x44) = (flag == 0) ? 1.0f : 0.0f;
}
} // namespace lift_0054E400

// [0x00547AD0] sub_00547AD0 (24 bytes)
namespace lift_00547AD0 {
extern uint32_t mem_00A44E28;
extern uint32_t mem_00924FC8;

// Virtual slot 7 (vtable +0x1c): takes one 32-bit key, returns a pointer to a string object.
typedef uint32_t (__thiscall *VirtualLookupFn)(void* self, uint32_t key);
// MSVCP80 operator==(const std::string&, const char*), cdecl, returns bool.
typedef BOOLEAN (__cdecl *StringEqualsFn)(uint32_t lhs_string, uint32_t rhs_cstr);

// @name Unknown::VirtualLookupEqualsGlobalKey
// @class Unknown
// @summary Looks up a global key via virtual slot 7 and compares the resulting std::string against that same key.
// @field Unknown +0x00 void* vtable
BOOLEAN __thiscall fn_00547AD0(void* self) {
    const uint32_t key = mem_00A44E28;

    const uintptr_t vtable = lift_field<uint32_t>(self, 0x00);
    const uint32_t slot7 = lift_field<uint32_t>(reinterpret_cast<void*>(vtable), 0x1c);
    const auto lookup = reinterpret_cast<VirtualLookupFn>(static_cast<uintptr_t>(slot7));
    const uint32_t lhs = lookup(self, key);

    const auto string_equals = reinterpret_cast<StringEqualsFn>(static_cast<uintptr_t>(mem_00924FC8));
    return string_equals(lhs, key);
}
} // namespace lift_00547AD0

// [0x00549A10] sub_00549A10 (24 bytes)
namespace lift_00549A10 {
// @name Unknown::CopyFloat3FromPtrTo18_1C_20
// @class Unknown
// @summary Copies three floats from the pointer argument into this+0x18, this+0x1C and this+0x20 (callee-cleans 4 bytes).
// @field Unknown +0x18 float field_0x18
// @field Unknown +0x1C float field_0x1c
// @field Unknown +0x20 float field_0x20
void __thiscall fn_00549A10(void* self, const float* src) {
    // fld dword ptr [eax] / fstp dword ptr [ecx+0x18]
    lift_field<float>(self, 0x18) = src[0];
    // fld dword ptr [eax+4] / fstp dword ptr [ecx+0x1c]
    lift_field<float>(self, 0x1C) = src[1];
    // fld dword ptr [eax+8] / fstp dword ptr [ecx+0x20]
    lift_field<float>(self, 0x20) = src[2];
}
} // namespace lift_00549A10

// [0x00540F60] sub_00540F60 (25 bytes)
namespace lift_00540F60 {
// @name Unknown::setFieldsFromArg (descriptive; owner class not identified)
// @class Unknown
// @summary Stores one stack argument into four dword fields of the object at ECX.
// @field Unknown +0x40 DWORD field_0x40
// @field Unknown +0x7C DWORD field_0x7C
// @field Unknown +0xB8 DWORD field_0xB8
// @field Unknown +0xF4 DWORD field_0xF4
void fn_00540F60(void* self, DWORD /*unused_arg0*/, DWORD value) {
    auto* base = static_cast<unsigned char*>(self);
    *reinterpret_cast<DWORD*>(base + 0x40) = value;
    *reinterpret_cast<DWORD*>(base + 0x7C) = value;
    *reinterpret_cast<DWORD*>(base + 0xB8) = value;
    *reinterpret_cast<DWORD*>(base + 0xF4) = value;
}
} // namespace lift_00540F60

// [0x00547CE0]
namespace lift_00547CE0 {
// @name sub_00547CE0
// @summary Returns 1 if this->field_0xA4 is non-null and its byte at +0x30 is nonzero, else 0.
// @field Unknown +0xA4 ptr field_0xA4 (pointer to sub-object; owner class not identified)
// @field Unknown +0x30 u8 field_0x30 (flag byte inside sub-object at field_0xA4)

int sub_00547CE0(void* self) {
    auto* obj = *reinterpret_cast<unsigned char**>(static_cast<unsigned char*>(self) + 0xA4);
    if (obj == nullptr) {
        return 0;
    }
    if (*(obj + 0x30) == 0) {
        return 0;
    }
    return 1;
}
} // namespace lift_00547CE0

// [0x005481E0] sub_005481E0 (27 bytes)
namespace lift_005481E0 {
// @name sub_005481E0
// @summary Returns 1 if this->+0xA0 is non-null and that object's +0x208 dword is non-zero; otherwise 0.
// @field Object +0xA0 void* ptr_a0
// @field Object +0x208 DWORD field_208

BYTE sub_005481E0(BYTE* self) {
    // mov eax, [ecx+0xa0]
    BYTE* inner = *reinterpret_cast<BYTE**>(self + 0xA0);
    // test eax, eax ; je -> return 0
    if (inner == nullptr) {
        return 0;
    }
    // cmp [eax+0x208], 0 ; setne al
    DWORD v = *reinterpret_cast<const DWORD*>(inner + 0x208);
    return v != 0 ? 1 : 0;
}
} // namespace lift_005481E0

// [0x00543210] sub_00543210 (10 bytes)
namespace lift_00543210 {
// @name sub_00543210
// @summary Auto-lifted identical-shape clone of 0x005455F0 (PoseTool::vfunc_28).
namespace lift_005455F0 {
// @name PoseTool::vfunc_28
// @class PoseTool
// @summary Forwards the call to virtual slot +0x70 of the object held at PoseTool +0xA0, returning its result.
// @field PoseTool +0xA0 void* field_0xA0
void* fn_00543210(void* self) {
    // mov ecx, [self+0xA0]; mov eax, [ecx]; mov eax, [eax+0x70]; jmp eax
    // Tail-call: the callee's return value (eax) is passed straight through.
    void* obj = lift_field<void*>(self, 0x14);
    void* vtbl = lift_field<void*>(obj, 0);
    using VFn = void* (*)(void* self);
    VFn target = reinterpret_cast<VFn>(lift_field<void*>(vtbl, 0x6C));
    return target(obj);
}
} // namespace lift_005455F0
} // namespace lift_00543210
