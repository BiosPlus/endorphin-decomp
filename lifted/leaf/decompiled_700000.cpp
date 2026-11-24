// Lifted C++ translation unit: lifted/leaf/decompiled_700000.cpp
#include "lift_compat.h"
extern "C" void __fastcall ext_0070A1F0(void* self);
extern "C" void __cdecl ext_006A5C5C(void* ptr);

// [0x0070A1D0] sub_0070A1D0 (32 bytes)
// @name sub_0070A1D0
// @summary MSVC scalar deleting destructor: calls sub_0070A1F0 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_0070A1D0(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_0070A1F0(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x00707980] sub_00707980 (13 bytes)
namespace lift_00707980 {
// Known callee 0x006FA920: Unknown::NotifySlot17IfSelfLinked (If the object's field at +0x08 points back to the object itself, calls virtual slot 17 with arg 0 and returns true; otherwise returns false.)
extern bool ext_006FA920(void* self);

// @name Unknown::NotifySlot17IfSelfLinkedWrapper
// @class Unknown
// @summary Forwards its single argument to ext_006FA920 and returns that result.
bool fn_00707980(void* self) {
    return ext_006FA920(self);
}
} // namespace lift_00707980

// [0x00707970] sub_00707970 (13 bytes)
namespace lift_00707970 {
// @name sub_00707970
// @summary Auto-lifted identical-shape clone of 0x00707980 (Unknown::NotifySlot17IfSelfLinkedWrapper).
namespace lift_00707980 {
// Known callee 0x006FA920: Unknown::NotifySlot17IfSelfLinked (If the object's field at +0x08 points back to the object itself, calls virtual slot 17 with arg 0 and returns true; otherwise returns false.)
extern bool ext_006FA8F0(void* self);

// @name Unknown::NotifySlot17IfSelfLinkedWrapper
// @class Unknown
// @summary Forwards its single argument to ext_006FA920 and returns that result.
bool fn_00707970(void* self) {
    return ext_006FA8F0(self);
}
} // namespace lift_00707980
} // namespace lift_00707970

// [0x007008F0] sub_007008F0 (32 bytes)
namespace lift_007008F0 {
// Known callee 0x006B9950: sub_006B9950 (returns a bool-like flag in al; takes this in ecx)
extern uint8_t ext_006B9950(void* self);
// Known callee 0x006E7460: sub_006E7460 (Getter returning int32_t field at offset +0x0.)
extern int32_t ext_006E7460(void* self);

// @name Unknown::GetSubObjectValue
// @class Unknown
// @summary Passes the embedded sub-object at +0x10 to a flag check; returns 0 if the flag is set, otherwise the sub-object's int32 getter value.
// @field Unknown +0x10 <embedded object> field_0x10
int32_t fn_007008F0(void* self) {
    uint8_t* sub = static_cast<uint8_t*>(self) + 0x10;
    if (ext_006B9950(sub) != 0) {
        return 0;
    }
    return ext_006E7460(sub);
}
} // namespace lift_007008F0

// [0x007009E0] sub_007009E0 (32 bytes)
namespace lift_007009E0 {
// Known callee 0x006DC460: Unknown::GetValueIfCountPositive (returns *(this->field_0xC8) when this->field_0xB8 > 0, otherwise 0).
extern int32_t ext_006DC460(void* self);
// Callee 0x006C94F0 (sub_006C94F0, 15B): takes its argument in ecx, returns in eax. Signature not yet verified.
extern uint32_t ext_006C94F0(uint32_t self);
// Known callee 0x006C9F70: sub_006C9F70 (getter returning float field at offset +0x14).
extern float ext_006C9F70(void* self);

// @name Unknown::GetChainedFloat
// @class Unknown
// @summary Reads the object at +0x04, passes it through GetValueIfCountPositive and sub_006C94F0, then returns the float from the resulting object via sub_006C9F70.
// @field Unknown +0x04 void* field_0x04
float fn_007009E0(void* self) {
    void* child = lift_field<void*>(self, 0x04);
    int32_t value = ext_006DC460(child);
    uint32_t next = ext_006C94F0(static_cast<uint32_t>(value));
    return ext_006C9F70(reinterpret_cast<void*>(static_cast<uintptr_t>(next)));
}
} // namespace lift_007009E0

// [0x00700A00] sub_00700A00 (32 bytes)
namespace lift_00700A00 {
// Known callee 0x006DC460: Unknown::GetValueIfCountPositive (returns int32_t).
extern int32_t ext_006DC460(void* self);
// Callee 0x006C9500: sub_006C9500 (signature unverified; takes and returns a 32-bit value in ECX/EAX).
extern uint32_t ext_006C9500(uint32_t self);
// Known callee 0x006C9F70: sub_006C9F70 (getter returning float field at offset +0x14).
extern float ext_006C9F70(void* self);

// @name Unknown::CallChainFromField4
// @class Unknown
// @summary Loads the pointer at +0x04, passes it through GetValueIfCountPositive and sub_006C9500, then tail-returns the float from sub_006C9F70.
// @field Unknown +0x04 void* field_0x04
float __fastcall fn_00700A00(void* self) {
    void* inner = lift_field<void*>(self, 0x04);
    int32_t v1 = ext_006DC460(inner);
    uint32_t v2 = ext_006C9500(static_cast<uint32_t>(v1));
    return ext_006C9F70(reinterpret_cast<void*>(static_cast<uintptr_t>(v2)));
}
} // namespace lift_00700A00

// [0x00700A20] sub_00700A20 (32 bytes)
namespace lift_00700A20 {
// @name sub_00700A20
// @summary Auto-lifted identical-shape clone of 0x007009E0 (Unknown::GetChainedFloat).
namespace lift_007009E0 {
// Known callee 0x006DC460: Unknown::GetValueIfCountPositive (returns *(this->field_0xC8) when this->field_0xB8 > 0, otherwise 0).
extern int32_t ext_006DC460(void* self);
// Callee 0x006C94F0 (sub_006C94F0, 15B): takes its argument in ecx, returns in eax. Signature not yet verified.
extern uint32_t ext_006C9510(uint32_t self);
// Known callee 0x006C9F70: sub_006C9F70 (getter returning float field at offset +0x14).
extern float ext_006C9F70(void* self);

// @name Unknown::GetChainedFloat
// @class Unknown
// @summary Reads the object at +0x04, passes it through GetValueIfCountPositive and sub_006C94F0, then returns the float from the resulting object via sub_006C9F70.
// @field Unknown +0x04 void* field_0x04
float fn_00700A20(void* self) {
    void* child = lift_field<void*>(self, 0x04);
    int32_t value = ext_006DC460(child);
    uint32_t next = ext_006C9510(static_cast<uint32_t>(value));
    return ext_006C9F70(reinterpret_cast<void*>(static_cast<uintptr_t>(next)));
}
} // namespace lift_007009E0
} // namespace lift_00700A20

// [0x00706AF0]
namespace lift_00706AF0 {
// @name Unknown::CallWithFieldOrDefault
// @class Unknown
// @summary Passes self->field_0x58 to fn_006E7460, or the address of mem_00B5D268 when that field is zero.
// @field Unknown +0x58 int32_t field_0x58

extern int32_t __fastcall ext_006E7460(void* self);
extern uint8_t mem_00B5D268[];

// [0x00706AF0]
extern int32_t __fastcall fn_00706AF0(void* self) {
    int32_t v = *reinterpret_cast<int32_t*>(reinterpret_cast<uintptr_t>(self) + 0x58);
    if (v == 0) {
        v = static_cast<int32_t>(reinterpret_cast<uintptr_t>(mem_00B5D268));
    }
    return ext_006E7460(reinterpret_cast<void*>(static_cast<uintptr_t>(static_cast<uint32_t>(v))));
}
} // namespace lift_00706AF0

// [0x00702640] sub_00702640 (32 bytes)
namespace lift_00702640 {
// @name Unknown::IsChainedFlagClear
// @class Unknown
// @summary Follows the pointer at this+0x268 and returns 1 if the byte at that object's +0x270 is zero, else 0.
// @field Unknown +0x268 void* field_0x268
// @field Unknown +0x270 uint8_t field_0x270
int fn_00702640(void* self) {
    void* sub = lift_field<void*>(self, 0x268);
    uint8_t flag = lift_field<uint8_t>(sub, 0x270);
    return flag == 0 ? 1 : 0;
}
} // namespace lift_00702640

// [0x00702620] sub_00702620 (32 bytes)
namespace lift_00702620 {
// @name Unknown::SetInverseFlagOnSubObject
// @class Unknown
// @summary Stores (arg == 0) as a byte into the sub-object pointed to by this+0x268, at offset +0x270.
// @field Unknown +0x268 ptr field_0x268
// @field Unknown +0x270 uint8 field_0x270
void fn_00702620(void* self, DWORD arg) {
    uint8_t* const sub = *reinterpret_cast<uint8_t* const*>(static_cast<uint8_t*>(self) + 0x268);
    sub[0x270] = static_cast<uint8_t>(arg == 0 ? 1 : 0);
}
} // namespace lift_00702620
