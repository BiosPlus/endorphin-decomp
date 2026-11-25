// Lifted C++ translation unit: lifted/leaf/decompiled_700000.cpp
#include "lift_compat.h"
extern "C" void __fastcall ext_0070A1F0(void* self);
extern "C" void __cdecl ext_006A5C5C(void* ptr);
#include <cstdint>
#include <cstring>

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

// [0x00706CD0] sub_00706CD0 (45 bytes)
namespace lift_00706CD0 {
// @name LookupTable::findValueByIndexAndKey
// @class LookupTable
// @summary Reads the 12-byte entry at (index + arg); if its linked node is non-null and the node's key matches the entry's key, returns the node's value, else 0.
// @field LookupTable +0x00 void* entries
// @field LookupTable +0x04 int32_t index
uint32_t __thiscall fn_00706CD0(void* self, uint32_t arg) {
    // 32-bit wrapping index math, matching the original lea sequence.
    const uint32_t index = static_cast<uint32_t>(lift_field<int32_t>(self, 0x04)) + arg;
    uint8_t* entry = lift_field<uint8_t*>(self, 0x00) + static_cast<ptrdiff_t>(index * 12u);

    uint8_t* node = lift_field<uint8_t*>(entry, 0x04);
    if (node == nullptr) {
        return 0;
    }
    if (lift_field<uint32_t>(node, 0x00) != lift_field<uint32_t>(entry, 0x00)) {
        return 0;
    }
    return lift_field<uint32_t>(node, 0x04);
}
} // namespace lift_00706CD0

// [0x007004C0]
namespace lift_007004C0 {
extern uint32_t mem_00B5E5C0;
extern uint32_t mem_00B5EB78;
extern uint32_t mem_00B5E400;

// @name isKnownGlobalValue
// @summary Returns 1 if the 32-bit argument matches any of three global values, 0 otherwise.
uint8_t __stdcall sub_007004C0(uint32_t arg0) {
    if (arg0 == mem_00B5E5C0) return 1;
    if (arg0 == mem_00B5EB78) return 1;
    return arg0 == mem_00B5E400 ? 1 : 0;
}
} // namespace lift_007004C0

// [0x007006B0]
namespace lift_007006B0 {
// @name getLightTypeName
// @summary Returns the human-readable name string for a light type index (0=Point, 1=Infinite, 2=Spot), or nullptr.


extern uint8_t mem_00AAB9E4[]; // "Point Light"
extern uint8_t mem_00AAB9F0[]; // "Infinite Light"
extern uint8_t mem_00AABA00[]; // "Spot Light"

const char* __stdcall sub_007006B0(uint32_t lightType) {
    switch (lightType) {
        case 0:
            return reinterpret_cast<const char*>(mem_00AAB9E4);
        case 1:
            return reinterpret_cast<const char*>(mem_00AAB9F0);
        case 2:
            return reinterpret_cast<const char*>(mem_00AABA00);
        default:
            return nullptr;
    }
}
} // namespace lift_007006B0

// [0x00704BB0]
namespace lift_00704BB0 {
extern const char mem_00AABD00[]; // "Disk"
extern const char mem_00AABD08[]; // "Memory"
extern const char mem_00AABD10[]; // "Disk Async"

// @name getStorageTypeName
// @summary Returns the string name for a storage mode enum (0=Disk, 1=Memory, 2=Disk Async), or nullptr.
const char* __stdcall sub_00704BB0(uint32_t mode) {
    switch (mode) {
        case 0:
            return mem_00AABD00;
        case 1:
            return mem_00AABD08;
        case 2:
            return mem_00AABD10;
        default:
            return nullptr;
    }
}
} // namespace lift_00704BB0

// [0x007027C0]
namespace lift_007027C0 {
// @name Unknown::forwardVcall88ToSubobjectAt80
// @class Unknown
// @summary Follows this->field_0x268->field_0x168 and calls its vtable slot at +0x88 with an out-slot at +0x80 and three zero args; returns the dword written there.
// @field Unknown +0x268 void* field_0x268

namespace {

// Vtable slot at +0x88 is thiscall-like with 4 stack args: (out, 0, 0, 0).
using VSlot88Fn = void (*)(void* self, uint32_t* out, uint32_t a1, uint32_t a2, uint32_t a3);

} // namespace

uint32_t fn_007027C0(void* self) {
    // Offsets below are on types not yet recovered (field_0x168 on the
    // subobject at self->field_0x268, and field_0x80 on that subobject),
    // so they are accessed by raw offset only.
    void* sub = lift_field<void*>(self, 0x268);
    void* obj = lift_field<void*>(sub, 0x168);

    uint32_t* out = reinterpret_cast<uint32_t*>(
        reinterpret_cast<uint8_t*>(obj) + 0x80);

    void* vtbl = lift_field<void*>(obj, 0);
    VSlot88Fn fn = reinterpret_cast<VSlot88Fn>(lift_field<void*>(vtbl, 0x88));
    fn(obj, out, 0, 0, 0);

    return *out;
}
} // namespace lift_007027C0

// [0x0070EBC0] sub_0070EBC0 (48 bytes)
namespace lift_0070EBC0 {
// @name sub_0070EBC0
// @summary Auto-lifted identical-shape clone of 0x006C2CB0 (ForwardOffsetFieldToCalleeReturnArg).
namespace lift_006C2CB0 {
// @name ForwardOffsetFieldToCalleeReturnArg
// @summary Passes (self + 0x118) to ext_006D2390 with arg1 as its this pointer, then returns arg1.
// @field unknown +0x118 uint8_t field_0x118


extern void* ext_006B9D20(void* self, uint32_t arg1);

void* fn_0070EBC0(void* self, void* arg1) {
    uint32_t field_ptr = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(static_cast<uint8_t*>(self) + 0xAC));
    ext_006B9D20(arg1, field_ptr);
    return arg1;
}
} // namespace lift_006C2CB0
} // namespace lift_0070EBC0

// [0x0070EBF0] sub_0070EBF0 (48 bytes)
namespace lift_0070EBF0 {
// @name sub_0070EBF0
// @summary Auto-lifted identical-shape clone of 0x006C2CB0 (ForwardOffsetFieldToCalleeReturnArg).
namespace lift_006C2CB0 {
// @name ForwardOffsetFieldToCalleeReturnArg
// @summary Passes (self + 0x118) to ext_006D2390 with arg1 as its this pointer, then returns arg1.
// @field unknown +0x118 uint8_t field_0x118


extern void* ext_006B9D20(void* self, uint32_t arg1);

void* fn_0070EBF0(void* self, void* arg1) {
    uint32_t field_ptr = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(static_cast<uint8_t*>(self) + 0xF8));
    ext_006B9D20(arg1, field_ptr);
    return arg1;
}
} // namespace lift_006C2CB0
} // namespace lift_0070EBF0

// [0x00708D70]
namespace lift_00708D70 {
extern uint8_t __thiscall ext_00711A80(void* self);

// @name Unknown::CountSubObjectsMatching0x40
// @class Unknown
// @summary Counts entries in a pointer array at +0xD0 (length +0xC0) for which CompareSubObjectWith0x40 returns nonzero.
// @field Unknown +0xC0 int32_t count
// @field Unknown +0xD0 void** entries
extern uint32_t __thiscall sub_00708D70(void* self) {
    uint32_t matches = 0;
    for (int32_t i = 0; i < lift_field<int32_t>(self, 0xC0); ++i) {
        void* entry = lift_field<void*>(self, 0xD0) == nullptr
            ? nullptr
            : static_cast<void**>(lift_field<void*>(self, 0xD0))[i];
        if (ext_00711A80(entry) != 0) {
            ++matches;
        }
    }
    return matches;
}
} // namespace lift_00708D70

// [0x00701E80]
namespace lift_00701E80 {
// @name getTableEntryByIndex
// @summary Maps an unsigned index (0..3) to a corresponding static data pointer, returning 0 if out of range.
extern uint32_t __stdcall sub_00701E80(uint32_t index) {
    switch (index) {
        case 0: return 0x00AABB78u;
        case 1: return 0x00AABB6Cu;
        case 2: return 0x00AABB60u;
        case 3: return 0x00AABB54u;
        default: return 0u;
    }
}
} // namespace lift_00701E80

// [0x00701990]
namespace lift_00701990 {
extern uint32_t mem_00B5E75C;
extern uint32_t mem_00B5F060;
extern uint32_t mem_00B5EB78;
extern uint32_t mem_00B5E400;

// @name isKnownGlobalHandle
// @summary Checks whether the given 32-bit value matches any of four global values.
uint8_t __stdcall sub_00701990(uint32_t value) {
    return (value == mem_00B5E75C ||
            value == mem_00B5F060 ||
            value == mem_00B5EB78 ||
            value == mem_00B5E400) ? 1 : 0;
}
} // namespace lift_00701990

// [0x007045A0]
namespace lift_007045A0 {
// @name isKnownGlobalHandle
// @summary Returns true if the argument matches any of four global 32-bit values.

extern uint32_t mem_00B5E9B8;
extern uint32_t mem_00B5F060;
extern uint32_t mem_00B5EB78;
extern uint32_t mem_00B5E400;

uint8_t __stdcall sub_007045A0(uint32_t value) {
    if (value == mem_00B5E9B8) {
        return 1;
    }
    if (value == mem_00B5F060) {
        return 1;
    }
    if (value == mem_00B5EB78) {
        return 1;
    }
    return value == mem_00B5E400 ? 1 : 0;
}
} // namespace lift_007045A0

// [0x00704A20]
namespace lift_00704A20 {
extern void (__cdecl *mem_009251D8)(void*);

// @name sub_00704A20
// @summary Frees field_0x81c if non-null, calls vtable+0x10, and if non-null calls vtable+0x8(1)
// @field Unknown +0x00 void** vtable
// @field Unknown +0x81C void* field_0x81C
void __thiscall sub_00704A20(void* self, uint32_t /*unused*/)
{
    uint8_t* obj = static_cast<uint8_t*>(self);
    void* ptr = *reinterpret_cast<void**>(obj + 0x81C);
    if (ptr != nullptr) {
        mem_009251D8(ptr);
        *reinterpret_cast<void**>(obj + 0x81C) = nullptr;
    }

    using Vfn0 = void(__thiscall*)(void*);
    using Vfn1 = void(__thiscall*)(void*, uint32_t);

    void** vtable = *reinterpret_cast<void***>(obj);
    reinterpret_cast<Vfn0>(vtable[0x10 / sizeof(void*)])(obj);

    if (obj != nullptr) {
        vtable = *reinterpret_cast<void***>(obj);
        reinterpret_cast<Vfn1>(vtable[0x8 / sizeof(void*)])(obj, 1);
    }
}
} // namespace lift_00704A20

// [0x0070AAD0]
namespace lift_0070AAD0 {
// @name isKnownGlobalHandle
// @summary Returns true if the argument matches one of four known global 32-bit values.


extern uint32_t mem_00B5EBA0;
extern uint32_t mem_00B5F060;
extern uint32_t mem_00B5EB78;
extern uint32_t mem_00B5E400;

bool __stdcall sub_0070AAD0(uint32_t arg0) {
    return arg0 == mem_00B5EBA0
        || arg0 == mem_00B5F060
        || arg0 == mem_00B5EB78
        || arg0 == mem_00B5E400;
}
} // namespace lift_0070AAD0

// [0x00702700] sub_00702700 (58 bytes)
namespace lift_00702700 {
// @name getSubStateCode
// @class Unknown
// @summary Reads this->field_0x268->field_0x160 and maps values 1..5 to codes 1..5; anything else returns 0.
// @field Unknown +0x268 DWORD field_0x268
// @field Unknown +0x160 DWORD field_0x160

// Assumes the jump table at 0x70273c maps index i (value i+1) to the
// case block that returns i+1, i.e. the function is an identity over 1..5.
DWORD getSubStateCode(void* self) {
    const auto* base = static_cast<const std::uint8_t*>(self);

    DWORD sub = 0;
    std::memcpy(&sub, base + 0x268, sizeof(sub));          // this->field_0x268 (pointer-sized slot, 32-bit image)

    DWORD value = 0;
    std::memcpy(&value, reinterpret_cast<const std::uint8_t*>(static_cast<std::uintptr_t>(sub)) + 0x160,
                sizeof(value));                             // sub->field_0x160

    DWORD index = value - 1;                                // dec eax
    if (index > 4) {                                        // cmp eax, 4 / ja
        return 0;
    }
    return index + 1;                                       // case i -> mov eax, i+1
}
} // namespace lift_00702700

// [0x0070FB20]
namespace lift_0070FB20 {
extern uint32_t mem_00B5EEB8;
extern uint32_t mem_00B5F060;
extern uint32_t mem_00B5EB78;
extern uint32_t mem_00B5E400;

// @name isKnownGlobalId
// @summary Checks whether the given 32-bit value matches any of four global constants.
bool __stdcall sub_0070FB20(uint32_t value) {
    return value == mem_00B5EEB8 ||
           value == mem_00B5F060 ||
           value == mem_00B5EB78 ||
           value == mem_00B5E400;
}
} // namespace lift_0070FB20

// [0x0070AC80]
namespace lift_0070AC80 {
// @name sub_0070AC80
// @summary Copies six dwords from this+0x2A0..this+0x2B4 into the caller-provided output buffer (hidden return pointer on stack); __thiscall, ret 4.
// @class Unknown
// @field Unknown +0x2A0 uint32_t field_0x2A0
// @field Unknown +0x2A4 uint32_t field_0x2A4
// @field Unknown +0x2A8 uint32_t field_0x2A8
// @field Unknown +0x2AC uint32_t field_0x2AC
// @field Unknown +0x2B0 uint32_t field_0x2B0
// @field Unknown +0x2B4 uint32_t field_0x2B4


struct Lift6Dword {
    uint32_t v[6];
};

// __thiscall: ecx = this, [esp+4] = output pointer; callee pops 4 bytes.
void sub_0070AC80_impl(uint8_t* self, Lift6Dword* out)
{
    const uint8_t* src = self + 0x2A0;
    for (int i = 0; i < 6; ++i) {
        out->v[i] = *reinterpret_cast<const uint32_t*>(src + i * 4);
    }
}
} // namespace lift_0070AC80

// [0x0070AD00]
namespace lift_0070AD00 {
// @name CopyStateBlock340
// @summary Copies six consecutive dwords from this+0x340..0x354 into the caller-supplied output block.
// @field Unknown +0x340 uint32_t field_0x340
// @field Unknown +0x344 uint32_t field_0x344
// @field Unknown +0x348 uint32_t field_0x348
// @field Unknown +0x34C uint32_t field_0x34C
// @field Unknown +0x350 uint32_t field_0x350
// @field Unknown +0x354 uint32_t field_0x354

extern std::uint32_t* ext_out_ptr_arg;

void sub_0070AD00(std::uint8_t* self, std::uint32_t* out) {
    const std::uint32_t* src = reinterpret_cast<const std::uint32_t*>(self + 0x340);
    out[0] = src[0];
    out[1] = src[1];
    out[2] = src[2];
    out[3] = src[3];
    out[4] = src[4];
    out[5] = src[5];
}
} // namespace lift_0070AD00

// [0x0070AC00]
namespace lift_0070AC00 {
// @name CopyBlock0x200ToOut
// @summary Copies six DWORDs from this+0x200..this+0x214 into the caller-supplied output buffer.
// @field Unknown +0x200 DWORD field_0x200
// @field Unknown +0x204 DWORD field_0x204
// @field Unknown +0x208 DWORD field_0x208
// @field Unknown +0x20C DWORD field_0x20C
// @field Unknown +0x210 DWORD field_0x210
// @field Unknown +0x214 DWORD field_0x214
void fn_0070AC00(void* self, void* out) {
    lift_field<DWORD>(out, 0x00) = lift_field<DWORD>(self, 0x200);
    lift_field<DWORD>(out, 0x04) = lift_field<DWORD>(self, 0x204);
    lift_field<DWORD>(out, 0x08) = lift_field<DWORD>(self, 0x208);
    lift_field<DWORD>(out, 0x0C) = lift_field<DWORD>(self, 0x20C);
    lift_field<DWORD>(out, 0x10) = lift_field<DWORD>(self, 0x210);
    lift_field<DWORD>(out, 0x14) = lift_field<DWORD>(self, 0x214);
}
} // namespace lift_0070AC00

// [0x0070AB80] sub_0070AB80 (60 bytes)
namespace lift_0070AB80 {
// @name CopyFieldBlock160ToOut
// @summary Copies six consecutive 32-bit values from self+0x160..+0x174 into the 24-byte output struct passed on the stack (callee pops 4 bytes).
// @field UnknownClass +0x160 uint32_t field_0x160
// @field UnknownClass +0x164 uint32_t field_0x164
// @field UnknownClass +0x168 uint32_t field_0x168
// @field UnknownClass +0x16C uint32_t field_0x16C
// @field UnknownClass +0x170 uint32_t field_0x170
// @field UnknownClass +0x174 uint32_t field_0x174
void fn_0070AB80(void* self, void* out) {
    for (int i = 0; i < 6; ++i) {
        lift_field<uint32_t>(out, static_cast<std::size_t>(i) * 4) =
            lift_field<uint32_t>(self, 0x160 + static_cast<std::size_t>(i) * 4);
    }
}
} // namespace lift_0070AB80

// [0x007057F0] sub_007057F0 (62 bytes)
namespace lift_007057F0 {
extern int mem_00B5EB80;

// @name Unknown::SetFlag70AndNotify
// @class Unknown
// @summary Stores a byte flag at +0x70; if it changed, notifies via vtable slot 0xA4 (code 0x13 when set, 0x14 when cleared).
// @field Unknown +0x00 void* vtable
// @field Unknown +0x70 uint8_t field_0x70
void fn_007057F0(void* self, uint8_t value) {
    uint8_t& flag = lift_field<uint8_t>(self, 0x70);
    if (flag == value) {
        return;
    }
    flag = value;

    using NotifyFn = void (*)(void* self, int code, int* data, int zero, int minusOne);

    void* vtable = lift_field<void*>(self, 0x00);
    NotifyFn notify = reinterpret_cast<NotifyFn>(lift_field<void*>(vtable, 0xA4));
    int code = (value != 0) ? 0x13 : 0x14;
    notify(self, code, &mem_00B5EB80, 0, -1);
}
} // namespace lift_007057F0

// [0x0070ACC0]
namespace lift_0070ACC0 {
// @name Unknown::StoreSixDwordsAt340
// @class Unknown
// @summary Copies six stack-argument DWORDs into consecutive this-relative fields at +0x340..+0x354; callee pops 8 argument DWORDs (ret 0x20), last two unused.
// @field Unknown +0x340 DWORD field_0x340
// @field Unknown +0x344 DWORD field_0x344
// @field Unknown +0x348 DWORD field_0x348
// @field Unknown +0x34C DWORD field_0x34C
// @field Unknown +0x350 DWORD field_0x350
// @field Unknown +0x354 DWORD field_0x354

void fn_0070ACC0(void* self, DWORD a0, DWORD a1, DWORD a2, DWORD a3,
                 DWORD a4, DWORD a5, DWORD a6, DWORD a7) {
    (void)a6;
    (void)a7;
    auto* base = static_cast<uint8_t*>(self);
    *reinterpret_cast<DWORD*>(base + 0x340) = a0;
    *reinterpret_cast<DWORD*>(base + 0x344) = a1;
    *reinterpret_cast<DWORD*>(base + 0x348) = a2;
    *reinterpret_cast<DWORD*>(base + 0x34C) = a3;
    *reinterpret_cast<DWORD*>(base + 0x350) = a4;
    *reinterpret_cast<DWORD*>(base + 0x354) = a5;
}
} // namespace lift_0070ACC0

// [0x007094A0] sub_007094A0 (64 bytes)
namespace lift_007094A0 {
extern int mem_00B5EB78;

// @name Unknown::FindTailAcceptedByGlobal
// @class Unknown
// @summary Walks the +0x08 link chain from the argument to its last node; returns that node if its virtual slot 5 accepts mem_00B5EB78, otherwise null.
// @field Unknown +0x00 void* vtable
// @field Unknown +0x08 void* field_0x08
void* fn_007094A0(void* head) {
    void* node = head;
    void* next = lift_field<void*>(node, 0x08);
    while (next != nullptr) {
        node = next;
        next = lift_field<void*>(node, 0x08);
    }
    if (node == nullptr) {
        return nullptr;
    }
    void* const* vtbl = lift_field<void* const*>(node, 0x00);
    auto accept = reinterpret_cast<bool (*)(void*, int32_t)>(vtbl[5]);
    if (accept(node, static_cast<int32_t>(mem_00B5EB78))) {
        return node;
    }
    return nullptr;
}
} // namespace lift_007094A0

// [0x00708C10]
namespace lift_00708C10 {
// @name findAndSelectItem
// @summary Searches an array of 32-bit items at +0xD0 (count at +0xC0) for a matching value and invokes vtable +0xE8 with its index.
// @field Unknown +0x00 uint32_t vtable
// @field Unknown +0xC0 int32_t field_0xC0
// @field Unknown +0xD0 uint32_t* field_0xD0
uint32_t __thiscall sub_00708C10(void* self, uint32_t target) {
    auto* base = static_cast<const uint8_t*>(self);
    int32_t count = *reinterpret_cast<const int32_t*>(base + 0xC0);
    if (count > 0) {
        const uint32_t* items = *reinterpret_cast<const uint32_t* const*>(base + 0xD0);
        for (int32_t i = 0; i < count; ++i) {
            if (items[i] == target) {
                if (i == -1) {
                    return 1;
                }
                const uintptr_t* vtable = *reinterpret_cast<const uintptr_t* const*>(base);
                using VFunc = uint32_t(__thiscall*)(void*, int32_t);
                auto fn = reinterpret_cast<VFunc>(vtable[0xE8 / sizeof(uintptr_t)]);
                return fn(self, i);
            }
        }
    }
    return 1;
}
} // namespace lift_00708C10

// [0x007051F0] sub_007051F0 (68 bytes)
namespace lift_007051F0 {
// @name Unknown::fetchCachedPair
// @class Unknown
// @summary Writes the cached DWORD pair at +0x80/+0x84 to *out, first refreshing it from the getter at +0x50 when that pointer is set.
// @field Unknown +0x08 void* getterContext
// @field Unknown +0x50 void* getter
// @field Unknown +0x80 DWORD cachedA
// @field Unknown +0x84 DWORD cachedB

// Getter called as thiscall: ecx = getterContext, one stack arg = output buffer; returns pointer to two DWORDs.
typedef const DWORD* (__thiscall *PairGetterFn)(void* self, void* outBuf);

void fn_007051F0(void* self, DWORD* out, DWORD /*unused2*/, DWORD /*unused3*/, DWORD /*unused4*/) {
    PairGetterFn getter = lift_field<PairGetterFn>(self, 0x50);
    if (getter != nullptr) {
        DWORD buf[2] = {0, 0};
        const DWORD* src = getter(lift_field<void*>(self, 0x08), buf);
        lift_field<DWORD>(self, 0x80) = src[0];
        lift_field<DWORD>(self, 0x84) = src[1];
    }
    out[0] = lift_field<DWORD>(self, 0x80);
    out[1] = lift_field<DWORD>(self, 0x84);
}
} // namespace lift_007051F0

// [0x00701E20] sub_00701E20 (69 bytes)
namespace lift_00701E20 {
// @name lookupStringAddressByIndex
// @summary Maps an index in [0,5] to a fixed binary address constant; out-of-range returns 0.
// @field none
// Jump-table targets are assumed to follow case order 0..5 (table at 0x00701E68 not decoded).
uint32_t lookupStringAddressByIndex(uint32_t index) {
    switch (index) {
        case 0: return 0x00AA8CECu;
        case 1: return 0x00AABB38u;
        case 2: return 0x00AABB2Cu;
        case 3: return 0x00AABB20u;
        case 4: return 0x00AABB14u;
        case 5: return 0x00AABAFCu;
        default: return 0u;
    }
}
} // namespace lift_00701E20

// [0x00707F50] sub_00707F50 (73 bytes)
namespace lift_00707F50 {
// @name Unknown::ContainsUnorderedPair_00707F50
// @class Unknown
// @summary Scans the 16-byte pair table at +0x9C (count at +0x8C) and returns true if any entry equals (a, b) or (b, a); otherwise false.
// @field Unknown +0x8C int32_t pairCount
// @field Unknown +0x9C void* pairTable
extern bool __thiscall fn_00707F50(uint8_t* self, uint32_t a, uint32_t b) {
    const int32_t count = *reinterpret_cast<const int32_t*>(self + 0x8C);
    if (count <= 0) {
        return false;
    }
    const uint8_t* entry = *reinterpret_cast<const uint8_t* const*>(self + 0x9C);
    for (int32_t i = 0; i < count; ++i, entry += 16) {
        const uint32_t x = *reinterpret_cast<const uint32_t*>(entry);
        const uint32_t y = *reinterpret_cast<const uint32_t*>(entry + 4);
        if ((x == a && y == b) || (x == b && y == a)) {
            return true;
        }
    }
    return false;
}
} // namespace lift_00707F50
