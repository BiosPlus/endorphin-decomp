// Lifted C++ translation unit: lifted/leaf/decompiled_700000.cpp
#include "lift_compat.h"
extern "C" void __fastcall ext_0070A1F0(void* self);
extern "C" void __cdecl ext_006A5C5C(void* ptr);
#include <cstdint>

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

// [0x00705190] sub_00705190 (32 bytes)
namespace lift_00705190 {
// Known callee 0x006E7460: getter returning int32_t at offset +0x0 of its self.
extern int32_t ext_006E7460(void* self);

// @name GetChildInt32At0x7D0
// @class Unknown
// @summary Loads the pointer at self+0xF0, offsets it by 0x7D0, and returns the int32 at its +0x0 via the getter.
// @field Unknown +0xF0 uint32_t field_0xF0
extern int32_t __fastcall fn_00705190(void* self) {
    // mov ecx, [self+0xF0]; add ecx, 0x7D0; jmp getter
    const uint32_t child = *reinterpret_cast<const uint32_t*>(
        static_cast<const char*>(self) + 0xF0);
    void* adjusted = reinterpret_cast<void*>(static_cast<uintptr_t>(child + 0x7D0u));
    return ext_006E7460(adjusted);
}
} // namespace lift_00705190

// [0x00705D70]
namespace lift_00705D70 {
// @name Unknown::InitThenDispatchVirtual33
// @class Unknown
// @summary Calls ext_006B9960 on the second argument (result discarded), then if the first argument is non-null tail-dispatches its vtable slot 33 (+0x84).
// @field Unknown +0x00 void* vtable

struct Unknown;

extern Unknown* ext_006B9960(Unknown* ecx);

extern void fn_00705D70(Unknown* a, Unknown* b) {
    ext_006B9960(b);
    if (a == nullptr) {
        return;
    }
    void** vtable = lift_field<void**>(a, 0x00);
    using VirtualFn = void (*)(Unknown* self);
    VirtualFn slot = reinterpret_cast<VirtualFn>(vtable[0x84 / sizeof(void*)]);
    slot(a);
}
} // namespace lift_00705D70

// [0x00706EF0] sub_00706EF0 (32 bytes)
namespace lift_00706EF0 {
// Known callee 0x006E7460: sub_006E7460 (Getter returning int32_t field at offset +0x0.)
extern int32_t __fastcall ext_006E7460(void* self);
extern uint8_t mem_00B5D268[];

// @name Unknown::CallWithField5COrDefault
// @class Unknown
// @summary Passes self->field_0x5C to fn_006E7460, or the address of mem_00B5D268 when that field is zero.
// @field Unknown +0x5C int32_t field_0x5C
int32_t __fastcall fn_00706EF0(void* self) {
    int32_t v = *reinterpret_cast<int32_t*>(reinterpret_cast<uintptr_t>(self) + 0x5C);
    if (v == 0) {
        v = static_cast<int32_t>(reinterpret_cast<uintptr_t>(mem_00B5D268));
    }
    return ext_006E7460(reinterpret_cast<void*>(static_cast<uintptr_t>(static_cast<uint32_t>(v))));
}
} // namespace lift_00706EF0

// [0x0070E390] sub_0070E390 (32 bytes)
namespace lift_0070E390 {
// Known callee 0x00717720: sub_00717720 (160 bytes). Called with ecx = other, one stack arg = self + 0xD0.
extern void ext_00717720(void* self, void* arg);

// @name Unknown::ForwardSubObjectAt0xD0
// @class Unknown
// @summary Passes the address of self+0xD0 and the other object to ext_00717720, then returns the other object.
// (No dereferenced fields: only the address self+0xD0 is taken, so no @field lines.)
void* fn_0070E390(void* self, void* other) {
    void* sub = reinterpret_cast<void*>(reinterpret_cast<uintptr_t>(self) + 0xD0);
    ext_00717720(other, sub);
    return other;
}
} // namespace lift_0070E390

// [0x0070BFD0] sub_0070BFD0 (32 bytes)
namespace lift_0070BFD0 {
// Known callee 0x006DC460: Unknown::GetValueIfCountPositive (Returns *(this->field_0xC8) when this->field_0xB8 > 0, otherwise 0.)
extern int32_t ext_006DC460(void* self);
// Callee 0x006C98E0: sub_006C98E0 (unlifted; takes its argument in ecx, returns in eax)
extern int32_t ext_006C98E0(void* self);
// Known callee 0x006C9F70: sub_006C9F70 (Getter returning float field at offset +0x14.)
extern float ext_006C9F70(void* self);

// Reinterpret a 32-bit register value as a pointer-sized `this`/argument.
static inline void* lift_reg_to_ptr(int32_t value) {
    return reinterpret_cast<void*>(static_cast<uintptr_t>(static_cast<uint32_t>(value)));
}

// @name Unknown::GetFloatViaChainedLookup
// @class Unknown
// @summary Passes self through GetValueIfCountPositive, feeds that result into sub_006C98E0, and returns the float from sub_006C9F70 on the final result.
// (No direct field accesses in this function; all field use happens in callees.)
float fn_0070BFD0(void* self) {
    const int32_t first = ext_006DC460(self);
    const int32_t second = ext_006C98E0(lift_reg_to_ptr(first));
    return ext_006C9F70(lift_reg_to_ptr(second));
}
} // namespace lift_0070BFD0

// [0x0070BE80] sub_0070BE80 (32 bytes)
namespace lift_0070BE80 {
// Known callee 0x006DC460: Unknown::GetValueIfCountPositive (Returns *(this->field_0xC8) when this->field_0xB8 > 0, otherwise 0.)
extern int32_t ext_006DC460(void* self);
// Unlifted callee 0x006C98D0 (15 bytes): takes self in ecx, returns a 32-bit value in eax.
extern uint32_t ext_006C98D0(void* self);
// Known callee 0x006C9F70: sub_006C9F70 (Getter returning float field at offset +0x14.)
extern float ext_006C9F70(void* self);

// @name Unknown::GetFloatAtChainedValue
// @class Unknown
// @summary Chains GetValueIfCountPositive -> sub_006C98D0 and tail-returns the float getter sub_006C9F70 applied to the final value.
float fn_0070BE80(void* self) {
    const int32_t first = ext_006DC460(self);
    const uint32_t second = ext_006C98D0(
        reinterpret_cast<void*>(static_cast<uintptr_t>(static_cast<uint32_t>(first))));
    return ext_006C9F70(
        reinterpret_cast<void*>(static_cast<uintptr_t>(second)));
}
} // namespace lift_0070BE80

// [0x0070ED50] sub_0070ED50 (32 bytes)
namespace lift_0070ED50 {
// @name sub_0070ED50
// @summary Auto-lifted identical-shape clone of 0x0070E390 (sub_0070A1D0).
namespace lift_0070E390 {
// Known callee 0x00717720: sub_00717720 (160 bytes). Called with ecx = other, one stack arg = self + 0xD0.
extern void ext_007873F0(void* self, void* arg);

// @name Unknown::ForwardSubObjectAt0xD0
// @class Unknown
// @summary Passes the address of self+0xD0 and the other object to ext_00717720, then returns the other object.
// (No dereferenced fields: only the address self+0xD0 is taken, so no @field lines.)
void* fn_0070ED50(void* self, void* other) {
    void* sub = reinterpret_cast<void*>(reinterpret_cast<uintptr_t>(self) + 0x168);
    ext_007873F0(other, sub);
    return other;
}
} // namespace lift_0070E390
} // namespace lift_0070ED50

// [0x0070ED70] sub_0070ED70 (32 bytes)
namespace lift_0070ED70 {
// @name sub_0070ED70
// @summary Auto-lifted identical-shape clone of 0x0070E390 (sub_0070A1D0).
namespace lift_0070E390 {
// Known callee 0x00717720: sub_00717720 (160 bytes). Called with ecx = other, one stack arg = self + 0xD0.
extern void ext_007873F0(void* self, void* arg);

// @name Unknown::ForwardSubObjectAt0xD0
// @class Unknown
// @summary Passes the address of self+0xD0 and the other object to ext_00717720, then returns the other object.
// (No dereferenced fields: only the address self+0xD0 is taken, so no @field lines.)
void* fn_0070ED70(void* self, void* other) {
    void* sub = reinterpret_cast<void*>(reinterpret_cast<uintptr_t>(self) + 0x148);
    ext_007873F0(other, sub);
    return other;
}
} // namespace lift_0070E390
} // namespace lift_0070ED70

// [0x0070ED90] sub_0070ED90 (32 bytes)
namespace lift_0070ED90 {
// @name sub_0070ED90
// @summary Auto-lifted identical-shape clone of 0x0070E390 (sub_0070A1D0).
namespace lift_0070E390 {
// Known callee 0x00717720: sub_00717720 (160 bytes). Called with ecx = other, one stack arg = self + 0xD0.
extern void ext_007873F0(void* self, void* arg);

// @name Unknown::ForwardSubObjectAt0xD0
// @class Unknown
// @summary Passes the address of self+0xD0 and the other object to ext_00717720, then returns the other object.
// (No dereferenced fields: only the address self+0xD0 is taken, so no @field lines.)
void* fn_0070ED90(void* self, void* other) {
    void* sub = reinterpret_cast<void*>(reinterpret_cast<uintptr_t>(self) + 0x188);
    ext_007873F0(other, sub);
    return other;
}
} // namespace lift_0070E390
} // namespace lift_0070ED90

// [0x0070EDB0] sub_0070EDB0 (32 bytes)
namespace lift_0070EDB0 {
// @name sub_0070EDB0
// @summary Auto-lifted identical-shape clone of 0x0070E390 (sub_0070A1D0).
namespace lift_0070E390 {
// Known callee 0x00717720: sub_00717720 (160 bytes). Called with ecx = other, one stack arg = self + 0xD0.
extern void ext_007873F0(void* self, void* arg);

// @name Unknown::ForwardSubObjectAt0xD0
// @class Unknown
// @summary Passes the address of self+0xD0 and the other object to ext_00717720, then returns the other object.
// (No dereferenced fields: only the address self+0xD0 is taken, so no @field lines.)
void* fn_0070EDB0(void* self, void* other) {
    void* sub = reinterpret_cast<void*>(reinterpret_cast<uintptr_t>(self) + 0x1C8);
    ext_007873F0(other, sub);
    return other;
}
} // namespace lift_0070E390
} // namespace lift_0070EDB0

// [0x0070EDD0] sub_0070EDD0 (32 bytes)
namespace lift_0070EDD0 {
// @name sub_0070EDD0
// @summary Auto-lifted identical-shape clone of 0x0070E390 (sub_0070A1D0).
namespace lift_0070E390 {
// Known callee 0x00717720: sub_00717720 (160 bytes). Called with ecx = other, one stack arg = self + 0xD0.
extern void ext_007873F0(void* self, void* arg);

// @name Unknown::ForwardSubObjectAt0xD0
// @class Unknown
// @summary Passes the address of self+0xD0 and the other object to ext_00717720, then returns the other object.
// (No dereferenced fields: only the address self+0xD0 is taken, so no @field lines.)
void* fn_0070EDD0(void* self, void* other) {
    void* sub = reinterpret_cast<void*>(reinterpret_cast<uintptr_t>(self) + 0x1A8);
    ext_007873F0(other, sub);
    return other;
}
} // namespace lift_0070E390
} // namespace lift_0070EDD0

// [0x0070EDF0] sub_0070EDF0 (32 bytes)
namespace lift_0070EDF0 {
// @name sub_0070EDF0
// @summary Auto-lifted identical-shape clone of 0x0070E390 (sub_0070A1D0).
namespace lift_0070E390 {
// Known callee 0x00717720: sub_00717720 (160 bytes). Called with ecx = other, one stack arg = self + 0xD0.
extern void ext_007873F0(void* self, void* arg);

// @name Unknown::ForwardSubObjectAt0xD0
// @class Unknown
// @summary Passes the address of self+0xD0 and the other object to ext_00717720, then returns the other object.
// (No dereferenced fields: only the address self+0xD0 is taken, so no @field lines.)
void* fn_0070EDF0(void* self, void* other) {
    void* sub = reinterpret_cast<void*>(reinterpret_cast<uintptr_t>(self) + 0x1E8);
    ext_007873F0(other, sub);
    return other;
}
} // namespace lift_0070E390
} // namespace lift_0070EDF0

// [0x0070EE10] sub_0070EE10 (32 bytes)
namespace lift_0070EE10 {
// @name sub_0070EE10
// @summary Auto-lifted identical-shape clone of 0x0070E390 (sub_0070A1D0).
namespace lift_0070E390 {
// Known callee 0x00717720: sub_00717720 (160 bytes). Called with ecx = other, one stack arg = self + 0xD0.
extern void ext_007873F0(void* self, void* arg);

// @name Unknown::ForwardSubObjectAt0xD0
// @class Unknown
// @summary Passes the address of self+0xD0 and the other object to ext_00717720, then returns the other object.
// (No dereferenced fields: only the address self+0xD0 is taken, so no @field lines.)
void* fn_0070EE10(void* self, void* other) {
    void* sub = reinterpret_cast<void*>(reinterpret_cast<uintptr_t>(self) + 0x228);
    ext_007873F0(other, sub);
    return other;
}
} // namespace lift_0070E390
} // namespace lift_0070EE10

// [0x0070EE30] sub_0070EE30 (32 bytes)
namespace lift_0070EE30 {
// @name sub_0070EE30
// @summary Auto-lifted identical-shape clone of 0x0070E390 (sub_0070A1D0).
namespace lift_0070E390 {
// Known callee 0x00717720: sub_00717720 (160 bytes). Called with ecx = other, one stack arg = self + 0xD0.
extern void ext_007873F0(void* self, void* arg);

// @name Unknown::ForwardSubObjectAt0xD0
// @class Unknown
// @summary Passes the address of self+0xD0 and the other object to ext_00717720, then returns the other object.
// (No dereferenced fields: only the address self+0xD0 is taken, so no @field lines.)
void* fn_0070EE30(void* self, void* other) {
    void* sub = reinterpret_cast<void*>(reinterpret_cast<uintptr_t>(self) + 0x208);
    ext_007873F0(other, sub);
    return other;
}
} // namespace lift_0070E390
} // namespace lift_0070EE30

// [0x0070EE50] sub_0070EE50 (32 bytes)
namespace lift_0070EE50 {
// @name sub_0070EE50
// @summary Auto-lifted identical-shape clone of 0x0070E390 (sub_0070A1D0).
namespace lift_0070E390 {
// Known callee 0x00717720: sub_00717720 (160 bytes). Called with ecx = other, one stack arg = self + 0xD0.
extern void ext_007873F0(void* self, void* arg);

// @name Unknown::ForwardSubObjectAt0xD0
// @class Unknown
// @summary Passes the address of self+0xD0 and the other object to ext_00717720, then returns the other object.
// (No dereferenced fields: only the address self+0xD0 is taken, so no @field lines.)
void* fn_0070EE50(void* self, void* other) {
    void* sub = reinterpret_cast<void*>(reinterpret_cast<uintptr_t>(self) + 0x248);
    ext_007873F0(other, sub);
    return other;
}
} // namespace lift_0070E390
} // namespace lift_0070EE50

// [0x0070EE70] sub_0070EE70 (32 bytes)
namespace lift_0070EE70 {
// @name sub_0070EE70
// @summary Auto-lifted identical-shape clone of 0x0070E390 (sub_0070A1D0).
namespace lift_0070E390 {
// Known callee 0x00717720: sub_00717720 (160 bytes). Called with ecx = other, one stack arg = self + 0xD0.
extern void ext_007873F0(void* self, void* arg);

// @name Unknown::ForwardSubObjectAt0xD0
// @class Unknown
// @summary Passes the address of self+0xD0 and the other object to ext_00717720, then returns the other object.
// (No dereferenced fields: only the address self+0xD0 is taken, so no @field lines.)
void* fn_0070EE70(void* self, void* other) {
    void* sub = reinterpret_cast<void*>(reinterpret_cast<uintptr_t>(self) + 0x290);
    ext_007873F0(other, sub);
    return other;
}
} // namespace lift_0070E390
} // namespace lift_0070EE70

// [0x0070EE90] sub_0070EE90 (32 bytes)
namespace lift_0070EE90 {
// @name sub_0070EE90
// @summary Auto-lifted identical-shape clone of 0x0070E390 (sub_0070A1D0).
namespace lift_0070E390 {
// Known callee 0x00717720: sub_00717720 (160 bytes). Called with ecx = other, one stack arg = self + 0xD0.
extern void ext_007873F0(void* self, void* arg);

// @name Unknown::ForwardSubObjectAt0xD0
// @class Unknown
// @summary Passes the address of self+0xD0 and the other object to ext_00717720, then returns the other object.
// (No dereferenced fields: only the address self+0xD0 is taken, so no @field lines.)
void* fn_0070EE90(void* self, void* other) {
    void* sub = reinterpret_cast<void*>(reinterpret_cast<uintptr_t>(self) + 0x270);
    ext_007873F0(other, sub);
    return other;
}
} // namespace lift_0070E390
} // namespace lift_0070EE90

// [0x0070EEB0] sub_0070EEB0 (32 bytes)
namespace lift_0070EEB0 {
// @name sub_0070EEB0
// @summary Auto-lifted identical-shape clone of 0x0070E390 (sub_0070A1D0).
namespace lift_0070E390 {
// Known callee 0x00717720: sub_00717720 (160 bytes). Called with ecx = other, one stack arg = self + 0xD0.
extern void ext_007873F0(void* self, void* arg);

// @name Unknown::ForwardSubObjectAt0xD0
// @class Unknown
// @summary Passes the address of self+0xD0 and the other object to ext_00717720, then returns the other object.
// (No dereferenced fields: only the address self+0xD0 is taken, so no @field lines.)
void* fn_0070EEB0(void* self, void* other) {
    void* sub = reinterpret_cast<void*>(reinterpret_cast<uintptr_t>(self) + 0x2B0);
    ext_007873F0(other, sub);
    return other;
}
} // namespace lift_0070E390
} // namespace lift_0070EEB0

// [0x0070EC70] sub_0070EC70 (32 bytes)
namespace lift_0070EC70 {
// Callee sub_007873F0 (64 bytes): receives the sub-object pointer as "this" and one stack argument.
extern DWORD ext_007873F0(void* self, DWORD arg);

// @name Unknown::ForwardSubObjectAt0x188
// @class Unknown
// @summary Forwards one argument to sub_007873F0 on the sub-object at this+0x188 and returns its result.
// @field Unknown +0x188 void* field_0x188
DWORD fn_0070EC70(void* self, DWORD arg) {
    void* sub = lift_field<void*>(self, 0x188) == nullptr ? nullptr : static_cast<uint8_t*>(self) + 0x188;
    return ext_007873F0(sub, arg);
}
} // namespace lift_0070EC70

// [0x0070EC90] sub_0070EC90 (32 bytes)
namespace lift_0070EC90 {
// Callee signature inferred from call site: this in ecx (self+0x1C8), one stack arg, result in eax.
extern DWORD ext_007873F0(void* self, DWORD arg);

// @name Unknown::ForwardArgToSubObjectAt0x1C8
// @class Unknown
// @summary Forwards its single argument to ext_007873F0 on the sub-object at this+0x1C8 and returns the callee's result.
DWORD fn_0070EC90(void* self, DWORD arg) {
    void* sub = static_cast<uint8_t*>(self) + 0x1C8;
    return ext_007873F0(sub, arg);
}
} // namespace lift_0070EC90

// [0x0070EC30] sub_0070EC30 (32 bytes)
namespace lift_0070EC30 {
extern DWORD __fastcall ext_007873F0(void* self, int edx_unused, DWORD arg);

// @name Unknown::ForwardSubObjectAt0x168
// @class Unknown
// @summary Forwards its stack argument to sub_007873F0 using the sub-object at this+0x168 as the receiver; returns the callee's result.
extern DWORD __fastcall fn_0070EC30(void* self, int edx_unused, DWORD arg) {
    (void)edx_unused;
    uint8_t* sub = static_cast<uint8_t*>(self) + 0x168;
    return ext_007873F0(sub, 0, arg);
}
} // namespace lift_0070EC30

// [0x0070E3B0] sub_0070E3B0 (32 bytes)
namespace lift_0070E3B0 {
// Known callee 0x0070E390: sub_0070A1D0 (MSVC scalar deleting destructor: calls sub_0070A1F0 and frees memory when (flags & 1) is set.)
// Called as thiscall: receiver in ECX, one stack argument (the sub-object pointer at +0xD0).
extern void* ext_0070E390(void* self, void* subObject);

// @name Unknown::ForwardSubObjectAt0xD0
// @class Unknown
// @summary Forwards the call to ext_0070E390 using the sub-object at this+0xD0 as its argument; receiver is the second argument.
// @field Unknown +0xD0 void* field_0xD0
void* fn_0070E3B0(void* self, void* receiver) {
    void* subObject = lift_field<void*>(self, 0xD0);
    (void)subObject;
    return ext_0070E390(receiver, reinterpret_cast<uint8_t*>(self) + 0xD0);
}
} // namespace lift_0070E3B0

// [0x0070EC50] sub_0070EC50 (32 bytes)
namespace lift_0070EC50 {
// Known callee 0x007873F0: sub_007873F0 (takes the sub-object in ecx as this and one stack argument).
extern DWORD __thiscall ext_007873F0(void* self, DWORD arg);

// @name Unknown::ForwardSubObjectAt0x148
// @class Unknown
// @summary Forwards its single argument to ext_007873F0 on the sub-object at this+0x148 and returns that result.
// @field Unknown +0x148 void* subObject
extern DWORD __thiscall fn_0070EC50(void* self, DWORD arg) {
    void* subObject = static_cast<unsigned char*>(self) + 0x148;
    return ext_007873F0(subObject, arg);
}
} // namespace lift_0070EC50

// [0x0070ECB0] sub_0070ECB0 (32 bytes)
namespace lift_0070ECB0 {
// Callee sub_007873F0 (64 bytes): receives the sub-object pointer as "this" and one stack argument.
extern DWORD ext_007873F0(void* self, DWORD arg);

// @name Unknown::ForwardArgToSubObjectAt0x1A8
// @class Unknown
// @summary Forwards its single stack argument to sub_007873F0 on the sub-object at this+0x1A8 and returns the callee's result.
// (Only the address self+0x1A8 is taken, not dereferenced, so no @field lines.)
DWORD fn_0070ECB0(void* self, DWORD arg) {
    void* sub = static_cast<uint8_t*>(self) + 0x1A8;
    return ext_007873F0(sub, arg);
}
} // namespace lift_0070ECB0

// [0x0070ECD0] sub_0070ECD0 (32 bytes)
namespace lift_0070ECD0 {
// Callee sub_007873F0 (64 bytes): receives the sub-object pointer as "this" and one stack argument.
extern DWORD ext_007873F0(void* self, DWORD arg);

// @name Unknown::ForwardArgToSubObjectAt0x1E8
// @class Unknown
// @summary Forwards its single stack argument to sub_007873F0 on the sub-object at this+0x1E8 and returns the callee's result.
// (Only the address self+0x1E8 is taken, not dereferenced, so no @field lines.)
DWORD fn_0070ECD0(void* self, DWORD arg) {
    void* sub = static_cast<uint8_t*>(self) + 0x1E8;
    return ext_007873F0(sub, arg);
}
} // namespace lift_0070ECD0

// [0x0070ECF0] sub_0070ECF0 (32 bytes)
namespace lift_0070ECF0 {
// Callee sub_007873F0 (64 bytes): receives the sub-object pointer as "this" and one stack argument.
extern DWORD ext_007873F0(void* self, DWORD arg);

// @name Unknown::ForwardArgToSubObjectAt0x228
// @class Unknown
// @summary Forwards its single stack argument to sub_007873F0 on the sub-object at this+0x228 and returns the callee's result.
// (Only the address self+0x228 is taken, not dereferenced, so no @field lines.)
DWORD fn_0070ECF0(void* self, DWORD arg) {
    void* sub = static_cast<uint8_t*>(self) + 0x228;
    return ext_007873F0(sub, arg);
}
} // namespace lift_0070ECF0

// [0x0070ED10] sub_0070ED10 (32 bytes)
namespace lift_0070ED10 {
// Callee sub_007873F0 (64B). Signature inferred from the call site: `this`
// sub-object passed in ecx, one DWORD argument pushed on the stack.
extern void ext_007873F0(void* self, DWORD arg);

// @name Unknown::ForwardSubObjectAt0x208
// @class Unknown
// @summary Forwards its single stack argument to ext_007873F0 using the sub-object at this+0x208 as the receiver.
// @field Unknown +0x208 void* field_0x208
void fn_0070ED10(void* self, DWORD arg) {
    // ecx = this + 0x208 (address only, not dereferenced here)
    void* sub = static_cast<unsigned char*>(self) + 0x208;
    ext_007873F0(sub, arg);
}
} // namespace lift_0070ED10

// [0x00703B60] sub_00703B60 (32 bytes)
namespace lift_00703B60 {
// @name sub_00703B60
// @summary Auto-lifted identical-shape clone of 0x0070EC30 (Unknown::ForwardSubObjectAt0x168).
namespace lift_0070EC30 {
extern DWORD __fastcall ext_006B9EC0(void* self, int edx_unused, DWORD arg);

// @name Unknown::ForwardSubObjectAt0x168
// @class Unknown
// @summary Forwards its stack argument to sub_007873F0 using the sub-object at this+0x168 as the receiver; returns the callee's result.
extern DWORD __fastcall fn_00703B60(void* self, int edx_unused, DWORD arg) {
    (void)edx_unused;
    uint8_t* sub = static_cast<uint8_t*>(self) + 0x1AC;
    return ext_006B9EC0(sub, 0, arg);
}
} // namespace lift_0070EC30
} // namespace lift_00703B60

// [0x00703B80] sub_00703B80 (32 bytes)
namespace lift_00703B80 {
// @name sub_00703B80
// @summary Auto-lifted identical-shape clone of 0x0070EC30 (Unknown::ForwardSubObjectAt0x168).
namespace lift_0070EC30 {
extern DWORD __fastcall ext_0074AE20(void* self, int edx_unused, DWORD arg);

// @name Unknown::ForwardSubObjectAt0x168
// @class Unknown
// @summary Forwards its stack argument to sub_007873F0 using the sub-object at this+0x168 as the receiver; returns the callee's result.
extern DWORD __fastcall fn_00703B80(void* self, int edx_unused, DWORD arg) {
    (void)edx_unused;
    uint8_t* sub = static_cast<uint8_t*>(self) + 0x258;
    return ext_0074AE20(sub, 0, arg);
}
} // namespace lift_0070EC30
} // namespace lift_00703B80

// [0x00703BB0] sub_00703BB0 (32 bytes)
namespace lift_00703BB0 {
// @name sub_00703BB0
// @summary Auto-lifted identical-shape clone of 0x0070EC30 (Unknown::ForwardSubObjectAt0x168).
namespace lift_0070EC30 {
extern DWORD __fastcall ext_0074AE20(void* self, int edx_unused, DWORD arg);

// @name Unknown::ForwardSubObjectAt0x168
// @class Unknown
// @summary Forwards its stack argument to sub_007873F0 using the sub-object at this+0x168 as the receiver; returns the callee's result.
extern DWORD __fastcall fn_00703BB0(void* self, int edx_unused, DWORD arg) {
    (void)edx_unused;
    uint8_t* sub = static_cast<uint8_t*>(self) + 0x248;
    return ext_0074AE20(sub, 0, arg);
}
} // namespace lift_0070EC30
} // namespace lift_00703BB0

// [0x0070BB60] sub_0070BB60 (32 bytes)
namespace lift_0070BB60 {
// @name sub_0070BB60
// @summary Auto-lifted identical-shape clone of 0x0070EC30 (Unknown::ForwardSubObjectAt0x168).
namespace lift_0070EC30 {
extern DWORD __fastcall ext_006B9EC0(void* self, int edx_unused, DWORD arg);

// @name Unknown::ForwardSubObjectAt0x168
// @class Unknown
// @summary Forwards its stack argument to sub_007873F0 using the sub-object at this+0x168 as the receiver; returns the callee's result.
extern DWORD __fastcall fn_0070BB60(void* self, int edx_unused, DWORD arg) {
    (void)edx_unused;
    uint8_t* sub = static_cast<uint8_t*>(self) + 0xF4;
    return ext_006B9EC0(sub, 0, arg);
}
} // namespace lift_0070EC30
} // namespace lift_0070BB60

// [0x0070ED30] sub_0070ED30 (32 bytes)
namespace lift_0070ED30 {
// @name sub_0070ED30
// @summary Auto-lifted identical-shape clone of 0x0070EC30 (Unknown::ForwardSubObjectAt0x168).
namespace lift_0070EC30 {
extern DWORD __fastcall ext_007873F0(void* self, int edx_unused, DWORD arg);

// @name Unknown::ForwardSubObjectAt0x168
// @class Unknown
// @summary Forwards its stack argument to sub_007873F0 using the sub-object at this+0x168 as the receiver; returns the callee's result.
extern DWORD __fastcall fn_0070ED30(void* self, int edx_unused, DWORD arg) {
    (void)edx_unused;
    uint8_t* sub = static_cast<uint8_t*>(self) + 0x248;
    return ext_007873F0(sub, 0, arg);
}
} // namespace lift_0070EC30
} // namespace lift_0070ED30

// [0x0070EA90] sub_0070EA90 (32 bytes)
namespace lift_0070EA90 {
// @name sub_0070EA90
// @summary Auto-lifted identical-shape clone of 0x0071B020 (Unknown::CallArgWithSubObjectAddr0x10).
namespace lift_0071B020 {
// Known callee 0x006D2390: ForwardArgToCalleeReturnThis (Forwards its single stack argument to sub_007873F0 with the same this pointer, then returns this.)
extern void* ext_006B9D20(void* self, uint32_t arg1);

// @name Unknown::CallArgWithSubObjectAddr0x10
// @class Unknown
// @summary Calls 0x006D2390 with arg as this and (self + 0x10) as its stack argument, then returns arg.
// @field Unknown +0x10 BYTE field_0x10
void* fn_0070EA90(void* self, void* arg) {
    const uint32_t sub_addr =
        static_cast<uint32_t>(reinterpret_cast<uintptr_t>(self) + 0xC);
    ext_006B9D20(arg, sub_addr);
    return arg;
}
} // namespace lift_0071B020
} // namespace lift_0070EA90

// [0x00705760]
namespace lift_00705760 {
uint32_t mem_r32(uintptr_t addr);
void mem_w32(uintptr_t addr, uint32_t val);

// @name sub_00705760
// @summary Clears bit 0 of field_0x84, invokes vtable+0xbc with the masked value, and zeroes field_0xdc.
// @field Unknown +0x00 void* vtable
// @field Unknown +0x84 uint32_t field_0x84
// @field Unknown +0xdc uint32_t field_0xdc
void __thiscall sub_00705760(uintptr_t self) {
    uint32_t masked = mem_r32(self + 0x84) & ~1u;
    uintptr_t vtable = mem_r32(self);
    auto vfn = reinterpret_cast<void(__thiscall*)(uintptr_t, uint32_t)>(mem_r32(vtable + 0xbc));
    vfn(self, masked);
    mem_w32(self + 0xdc, 0);
}
} // namespace lift_00705760
