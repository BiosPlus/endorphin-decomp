// Lifted C++ translation unit: lifted/leaf/decompiled_700000.cpp
#include "lift_compat.h"
extern "C" void __fastcall ext_0070A1F0(void* self);
extern "C" void __cdecl ext_006A5C5C(void* ptr);
#include <cstdint>
#include <cstring>
#include <new>
#include <string>

#include <string>
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
#include <cstdlib>

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

// [0x00701190] sub_00701190 (74 bytes)
namespace lift_00701190 {
// @name sub_00701190
// @summary Auto-lifted identical-shape clone of 0x006BBA40 (fn_006BBA40 (copyHugeDoubleToGlobals)).
namespace lift_006BBA40 {
extern uint32_t mem_00B5E808;
extern uint32_t mem_00B5E80C;
extern uint32_t mem_00B5E810;
extern uint32_t mem_00B5E814;
extern uint32_t mem_00B5E818;
extern uint32_t mem_00B5E81C;
extern uint32_t mem_00B5E820;
extern uint32_t mem_00B5E824;
extern uint32_t mem_00925284;

// @name fn_00701190 (copyHugeDoubleToGlobals)
// @summary Copies the 8-byte double pointed to by the _HUGE pointer into four consecutive 8-byte globals.
void fn_006BBA40(void) {
    // mem_00925284 holds the address of _HUGE (a double); read its two 32-bit halves.
    const auto* src = reinterpret_cast<const uint32_t*>(static_cast<uintptr_t>(mem_00925284));
    const uint32_t lo = src[0];
    const uint32_t hi = src[1];

    mem_00B5E808 = lo;
    mem_00B5E80C = hi;
    mem_00B5E810 = lo;
    mem_00B5E814 = hi;
    mem_00B5E818 = lo;
    mem_00B5E81C = hi;
    mem_00B5E820 = lo;
    mem_00B5E824 = hi;
}
} // namespace lift_006BBA40
} // namespace lift_00701190

// [0x00701AC0] sub_00701AC0 (74 bytes)
namespace lift_00701AC0 {
// @name sub_00701AC0
// @summary Auto-lifted identical-shape clone of 0x006C06A0 (CopyStateAndWriteUnitDouble_006C06A0).
namespace lift_006C06A0 {
// @name CopyStateAndWriteUnitDouble_006C06A0
// @summary Copies six dwords from self+0x328..0x33C into a 0x20-byte caller-provided result buffer (hidden sret pointer), then writes the double 1.0 at result+0x18.
// @field self +0x328 uint32_t field_0x328
// @field self +0x32C uint32_t field_0x32C
// @field self +0x330 uint32_t field_0x330
// @field self +0x334 uint32_t field_0x334
// @field self +0x338 uint32_t field_0x338
// @field self +0x33C uint32_t field_0x33C
void fn_00701AC0(void* self, void* result) {
    // Source block: six 32-bit fields of the object; the first five map
    // to result+0x00..0x10, the sixth to result+0x14.
    const uint8_t* src = static_cast<const uint8_t*>(self);
    uint32_t* out = static_cast<uint32_t*>(result);

    uint32_t f0, f1, f2, f3, f4, f5;
    std::memcpy(&f0, src + 0x5A0, sizeof(uint32_t));
    std::memcpy(&f1, src + 0x5A4, sizeof(uint32_t));
    std::memcpy(&f2, src + 0x5A8, sizeof(uint32_t));
    std::memcpy(&f3, src + 0x5AC, sizeof(uint32_t));
    std::memcpy(&f4, src + 0x5B0, sizeof(uint32_t));
    std::memcpy(&f5, src + 0x5B4, sizeof(uint32_t));

    out[0] = f0;
    out[1] = f1;
    out[2] = f2;
    out[3] = f3;
    out[4] = f4;
    out[5] = f5;             // result+0x14
    out[6] = 0x00000000u;    // result+0x18 (low dword of 1.0)
    out[7] = 0x3FF00000u;    // result+0x1C (high dword of 1.0)
}
} // namespace lift_006C06A0
} // namespace lift_00701AC0

// [0x00701B50] sub_00701B50 (74 bytes)
namespace lift_00701B50 {
// @name sub_00701B50
// @summary Auto-lifted identical-shape clone of 0x006C06A0 (CopyStateAndWriteUnitDouble_006C06A0).
namespace lift_006C06A0 {
// @name CopyStateAndWriteUnitDouble_006C06A0
// @summary Copies six dwords from self+0x328..0x33C into a 0x20-byte caller-provided result buffer (hidden sret pointer), then writes the double 1.0 at result+0x18.
// @field self +0x328 uint32_t field_0x328
// @field self +0x32C uint32_t field_0x32C
// @field self +0x330 uint32_t field_0x330
// @field self +0x334 uint32_t field_0x334
// @field self +0x338 uint32_t field_0x338
// @field self +0x33C uint32_t field_0x33C
void fn_00701B50(void* self, void* result) {
    // Source block: six 32-bit fields of the object; the first five map
    // to result+0x00..0x10, the sixth to result+0x14.
    const uint8_t* src = static_cast<const uint8_t*>(self);
    uint32_t* out = static_cast<uint32_t*>(result);

    uint32_t f0, f1, f2, f3, f4, f5;
    std::memcpy(&f0, src + 0x640, sizeof(uint32_t));
    std::memcpy(&f1, src + 0x644, sizeof(uint32_t));
    std::memcpy(&f2, src + 0x648, sizeof(uint32_t));
    std::memcpy(&f3, src + 0x64C, sizeof(uint32_t));
    std::memcpy(&f4, src + 0x650, sizeof(uint32_t));
    std::memcpy(&f5, src + 0x654, sizeof(uint32_t));

    out[0] = f0;
    out[1] = f1;
    out[2] = f2;
    out[3] = f3;
    out[4] = f4;
    out[5] = f5;             // result+0x14
    out[6] = 0x00000000u;    // result+0x18 (low dword of 1.0)
    out[7] = 0x3FF00000u;    // result+0x1C (high dword of 1.0)
}
} // namespace lift_006C06A0
} // namespace lift_00701B50

// [0x00703CF0] sub_00703CF0 (74 bytes)
namespace lift_00703CF0 {
// @name sub_00703CF0
// @summary Auto-lifted identical-shape clone of 0x006BBA40 (fn_006BBA40 (copyHugeDoubleToGlobals)).
namespace lift_006BBA40 {
extern uint32_t mem_00B5EA00;
extern uint32_t mem_00B5EA04;
extern uint32_t mem_00B5EA08;
extern uint32_t mem_00B5EA0C;
extern uint32_t mem_00B5EA10;
extern uint32_t mem_00B5EA14;
extern uint32_t mem_00B5EA18;
extern uint32_t mem_00B5EA1C;
extern uint32_t mem_00925284;

// @name fn_00703CF0 (copyHugeDoubleToGlobals)
// @summary Copies the 8-byte double pointed to by the _HUGE pointer into four consecutive 8-byte globals.
void fn_006BBA40(void) {
    // mem_00925284 holds the address of _HUGE (a double); read its two 32-bit halves.
    const auto* src = reinterpret_cast<const uint32_t*>(static_cast<uintptr_t>(mem_00925284));
    const uint32_t lo = src[0];
    const uint32_t hi = src[1];

    mem_00B5EA00 = lo;
    mem_00B5EA04 = hi;
    mem_00B5EA08 = lo;
    mem_00B5EA0C = hi;
    mem_00B5EA10 = lo;
    mem_00B5EA14 = hi;
    mem_00B5EA18 = lo;
    mem_00B5EA1C = hi;
}
} // namespace lift_006BBA40
} // namespace lift_00703CF0

// [0x00707FB0] sub_00707FB0 (77 bytes)
namespace lift_00707FB0 {
// Known callee 0x006D2250: Buffer::release (Frees the buffer at +0x10 if non-null and resets fields at +0x00, +0x04, and +0x10 to zero.)
extern void ext_006D2250(void* self);

// @name Unknown::DestroyElementsAndRelease_00707FB0
// @class Unknown
// @summary Calls virtual slot +0xD8 and frees each pointer in the element buffer (last to first), then releases the buffer at +0xA4.
// @field Unknown +0x00 void** vtable
// @field Unknown +0xA4 int32_t elementCount
// @field Unknown +0xB4 void** elements
void fn_00707FB0(void* self) {
    // Buffer at +0xA4: +0x00 = element count, +0x10 (i.e. +0xB4) = element pointer array.
    auto& count = lift_field<int32_t>(self, 0xA4);
    for (int32_t i = count - 1; i >= 0; --i) {
        void* const* vtbl = lift_field<void* const*>(self, 0x00);
        auto vfn = reinterpret_cast<void (*)(void*, void*)>(
            lift_field<void*>(vtbl, 0xD8));
        void** elems = lift_field<void**>(self, 0xB4);
        vfn(self, elems[i]);

        elems = lift_field<void**>(self, 0xB4);
        std::free(elems[i]);
    }

    ext_006D2250(reinterpret_cast<uint8_t*>(self) + 0xA4);
}
} // namespace lift_00707FB0

// [0x00708CC0]
namespace lift_00708CC0 {
// @name Unknown::FindFirstMatchAndSelect
// @class Unknown
// @summary Scans the 32-bit item array at +0xD0 (count at +0xC0) for the first entry equal to target; if the entry passes the sub-object check, invokes findAndSelectItem(target).
// @field Unknown +0xC0 int32_t field_0xC0
// @field Unknown +0xD0 uint32_t* field_0xD0

uint32_t ext_00708C10(void* self, uint32_t target);
uint8_t ext_00711A80(void* self);

void fn_00708CC0(void* self, uint32_t target) {
    auto* base = static_cast<unsigned char*>(self);
    const int32_t count = *reinterpret_cast<int32_t*>(base + 0xC0);
    if (count <= 0) {
        return;
    }
    auto* items = *reinterpret_cast<uint32_t**>(base + 0xD0);
    for (int32_t i = 0; i < count; ++i) {
        if (items[i] == target) {
            if (ext_00711A80(reinterpret_cast<void*>(static_cast<uintptr_t>(items[i]))) != 0) {
                ext_00708C10(self, target);
            }
            return;
        }
    }
}
} // namespace lift_00708CC0

// [0x00702AA0]
namespace lift_00702AA0 {
// @name FillDoubleTripleFromCounter
// @summary Looks up an object via ext_006DC460, then writes three doubles (each a float getter result) into out and returns out.
extern int32_t __fastcall ext_006DC460(void* self);
extern void* __fastcall ext_006C96E0(void* self);
extern void* __fastcall ext_006C9700(void* self);
extern void* __fastcall ext_006C9720(void* self);
extern float __fastcall ext_006C9F70(void* self);

extern double* __thiscall fn_00702AA0(void* self, double* out) {
    int32_t v = ext_006DC460(self);
    void* p0 = ext_006C96E0(reinterpret_cast<void*>(static_cast<uintptr_t>(v)));
    out[0] = static_cast<double>(ext_006C9F70(p0));

    void* p1 = ext_006C9700(reinterpret_cast<void*>(static_cast<uintptr_t>(v)));
    out[1] = static_cast<double>(ext_006C9F70(p1));

    void* p2 = ext_006C9720(reinterpret_cast<void*>(static_cast<uintptr_t>(v)));
    out[2] = static_cast<double>(ext_006C9F70(p2));

    return out;
}
} // namespace lift_00702AA0

// [0x00702A00]
namespace lift_00702A00 {
// @name Unknown::FillVec3FromAccessors
// @class Unknown
// @summary Fills a 3-double output buffer with float values fetched via accessor chains off a shared base object.

// ext_006DC460: returns the base object used by all accessors.
int32_t Unknown_GetValueIfCountPositive(void* self);
// ext_006C9620 / ext_006C9640 / ext_006C9660: accessors returning a sub-object pointer.
void* sub_006C9620(void* self);
void* sub_006C9640(void* self);
void* sub_006C9660(void* self);
// ext_006C9F70: float getter on a sub-object.
float sub_006C9F70(void* self);

// Single stack argument (output buffer) at entry; returns it in eax.
extern double* fn_00702A00(double* out) {
    const void* base = reinterpret_cast<const void*>(
        static_cast<uintptr_t>(static_cast<uint32_t>(Unknown_GetValueIfCountPositive(nullptr))));

    out[0] = static_cast<double>(sub_006C9F70(sub_006C9620(const_cast<void*>(base))));
    out[1] = static_cast<double>(sub_006C9F70(sub_006C9640(const_cast<void*>(base))));
    out[2] = static_cast<double>(sub_006C9F70(sub_006C9660(const_cast<void*>(base))));

    return out;
}
} // namespace lift_00702A00

// [0x00700990] sub_00700990 (80 bytes)
namespace lift_00700990 {
extern int32_t ext_006DC460(void* self);
extern void* ext_006C9490(void* self);
extern void* ext_006C94B0(void* self);
extern void* ext_006C94D0(void* self);
// Known callee 0x006C9F70: sub_006C9F70 (Getter returning float field at offset +0x14.)
extern float ext_006C9F70(void* self);
// Known callee 0x006DC460: Unknown::GetValueIfCountPositive (Returns *(this->field_0xC8) when this->field_0xB8 > 0, otherwise 0.)

// @name Unknown::FillDoubleTripleFromFloatGetters
// @summary Resolves a subobject via GetValueIfCountPositive(self->field_0x04), then writes three float getter results as doubles to out[0..2].
// @field Unknown +0x04 void* field_0x04
double* fn_00700990(void* self, double* out) {
    void* a = lift_field<void*>(self, 0x04);
    void* obj = reinterpret_cast<void*>(static_cast<intptr_t>(ext_006DC460(a)));

    out[0] = static_cast<double>(ext_006C9F70(ext_006C9490(obj)));
    out[1] = static_cast<double>(ext_006C9F70(ext_006C94B0(obj)));
    out[2] = static_cast<double>(ext_006C9F70(ext_006C94D0(obj)));
    return out;
}
} // namespace lift_00700990

// [0x0070BBD0] sub_0070BBD0 (80 bytes)
namespace lift_0070BBD0 {
// Callee 0x006C97B0: sub_006C97B0 (32B). Takes self in ECX, returns a pointer in EAX. Signature inferred from call sites.
extern void* ext_006C97B0(void* self);
// Callee 0x006C97D0: sub_006C97D0 (32B). Takes self in ECX, returns a pointer in EAX. Signature inferred from call sites.
extern void* ext_006C97D0(void* self);
// Callee 0x006C97F0: sub_006C97F0 (32B). Takes self in ECX, returns a pointer in EAX. Signature inferred from call sites.
extern void* ext_006C97F0(void* self);
// Known callee 0x006C9F70: sub_006C9F70 (Getter returning float field at offset +0x14.)
extern float ext_006C9F70(void* self);
// Known callee 0x006DC460: Unknown::GetValueIfCountPositive (Returns *(this->field_0xC8) when this->field_0xB8 > 0, otherwise 0.)
extern int32_t ext_006DC460(void* self);

static inline void* lift_0070BBD0_ptr(int32_t v) {
    return reinterpret_cast<void*>(static_cast<uintptr_t>(static_cast<uint32_t>(v)));
}

// @name Unknown::FillTripleFromChains
// @class Unknown
// @summary Resolves a value index via GetValueIfCountPositive, then reads three float getters through chained sub-object lookups and stores them as doubles into the caller-supplied buffer at offsets 0x00, 0x08 and 0x10; returns that buffer.
// (No @field lines: this function does not dereference self directly; all accesses go through callees.)
double* __thiscall fn_0070BBD0(void* self, double* out) {
    int32_t v = ext_006DC460(self);

    void* p0 = ext_006C97B0(lift_0070BBD0_ptr(v));
    out[0] = static_cast<double>(ext_006C9F70(p0));

    void* p1 = ext_006C97D0(lift_0070BBD0_ptr(v));
    out[1] = static_cast<double>(ext_006C9F70(p1));

    void* p2 = ext_006C97F0(lift_0070BBD0_ptr(v));
    out[2] = static_cast<double>(ext_006C9F70(p2));

    return out;
}
} // namespace lift_0070BBD0

// [0x0070BC70] sub_0070BC70 (80 bytes)
namespace lift_0070BC70 {
// Callees (32-bit ABI: `this`/first arg arrives in ecx, values are 32-bit).
extern int32_t ext_006DC460(void* self);            // Unknown::GetValueIfCountPositive
extern int32_t ext_006C9810(int32_t self);          // sub_006C9810 (returns sub-object handle)
extern int32_t ext_006C9830(int32_t self);          // sub_006C9830 (returns sub-object handle)
extern int32_t ext_006C9850(int32_t self);          // sub_006C9850 (returns sub-object handle)
// Known callee 0x006C9F70: sub_006C9F70 (Getter returning float field at offset +0x14.)
extern float ext_006C9F70(int32_t self);

// @name Unknown::FillValueTriple
// @class Unknown
// @summary Fills out[0..2] with three float getter results (as doubles) read from sub-objects of the value returned by GetValueIfCountPositive; returns out.
// (No @field lines: self is only passed to callees; out[] offsets 0x00/0x08/0x10 are output slots, not class fields.)
double* fn_0070BC70(void* self, double* out) {
    int32_t base = ext_006DC460(self);

    int32_t h0 = ext_006C9810(base);
    out[0] = static_cast<double>(ext_006C9F70(h0));

    int32_t h1 = ext_006C9830(base);
    out[1] = static_cast<double>(ext_006C9F70(h1));

    int32_t h2 = ext_006C9850(base);
    out[2] = static_cast<double>(ext_006C9F70(h2));

    return out;
}
} // namespace lift_0070BC70

// [0x00702A50] sub_00702A50 (80 bytes)
namespace lift_00702A50 {
extern void* ext_006C9680(void* self);
extern void* ext_006C96A0(void* self);
extern void* ext_006C96C0(void* self);
// Known callee 0x006C9F70: sub_006C9F70 (Getter returning float field at offset +0x14.)
extern float ext_006C9F70(void* self);
// Known callee 0x006DC460: Unknown::GetValueIfCountPositive (Returns *(this->field_0xC8) when this->field_0xB8 > 0, otherwise 0.)
extern void* ext_006DC460(void* self);

// @name Unknown::GetDoubleTripleFromComponents
// @class Unknown
// @summary Resolves a child object via ext_006DC460, then writes the float results of three
//          getter chains (ext_006C9680/ext_006C9F70, ext_006C96A0/ext_006C9F70, ext_006C96C0/ext_006C9F70)
//          into out[0..2] widened to double, and returns out.
extern double* __thiscall fn_00702A50(void* self, double* out) {
    void* child = ext_006DC460(self);

    void* a = ext_006C9680(child);
    out[0] = static_cast<double>(ext_006C9F70(a));

    void* b = ext_006C96A0(child);
    out[1] = static_cast<double>(ext_006C9F70(b));

    void* c = ext_006C96C0(child);
    out[2] = static_cast<double>(ext_006C9F70(c));

    return out;
}
} // namespace lift_00702A50

// [0x0070BD10] sub_0070BD10 (80 bytes)
namespace lift_0070BD10 {
// @name sub_0070BD10
// @summary Auto-lifted identical-shape clone of 0x0070BBD0 (Unknown::FillTripleFromChains).
namespace lift_0070BBD0 {
// Callee 0x006C97B0: sub_006C97B0 (32B). Takes self in ECX, returns a pointer in EAX. Signature inferred from call sites.
extern void* ext_006C9870(void* self);
// Callee 0x006C97D0: sub_006C97D0 (32B). Takes self in ECX, returns a pointer in EAX. Signature inferred from call sites.
extern void* ext_006C9890(void* self);
// Callee 0x006C97F0: sub_006C97F0 (32B). Takes self in ECX, returns a pointer in EAX. Signature inferred from call sites.
extern void* ext_006C98B0(void* self);
// Known callee 0x006C9F70: sub_006C9F70 (Getter returning float field at offset +0x14.)
extern float ext_006C9F70(void* self);
// Known callee 0x006DC460: Unknown::GetValueIfCountPositive (Returns *(this->field_0xC8) when this->field_0xB8 > 0, otherwise 0.)
extern int32_t ext_006DC460(void* self);

static inline void* lift_0070BBD0_ptr(int32_t v) {
    return reinterpret_cast<void*>(static_cast<uintptr_t>(static_cast<uint32_t>(v)));
}

// @name Unknown::FillTripleFromChains
// @class Unknown
// @summary Resolves a value index via GetValueIfCountPositive, then reads three float getters through chained sub-object lookups and stores them as doubles into the caller-supplied buffer at offsets 0x00, 0x08 and 0x10; returns that buffer.
// (No @field lines: this function does not dereference self directly; all accesses go through callees.)
double* __thiscall fn_0070BD10(void* self, double* out) {
    int32_t v = ext_006DC460(self);

    void* p0 = ext_006C9870(lift_0070BBD0_ptr(v));
    out[0] = static_cast<double>(ext_006C9F70(p0));

    void* p1 = ext_006C9890(lift_0070BBD0_ptr(v));
    out[1] = static_cast<double>(ext_006C9F70(p1));

    void* p2 = ext_006C98B0(lift_0070BBD0_ptr(v));
    out[2] = static_cast<double>(ext_006C9F70(p2));

    return out;
}
} // namespace lift_0070BBD0
} // namespace lift_0070BD10

// [0x0070BDB0] sub_0070BDB0 (80 bytes)
namespace lift_0070BDB0 {
// @name sub_0070BDB0
// @summary Auto-lifted identical-shape clone of 0x0070BBD0 (Unknown::FillTripleFromChains).
namespace lift_0070BBD0 {
// Callee 0x006C97B0: sub_006C97B0 (32B). Takes self in ECX, returns a pointer in EAX. Signature inferred from call sites.
extern void* ext_006C9750(void* self);
// Callee 0x006C97D0: sub_006C97D0 (32B). Takes self in ECX, returns a pointer in EAX. Signature inferred from call sites.
extern void* ext_006C9770(void* self);
// Callee 0x006C97F0: sub_006C97F0 (32B). Takes self in ECX, returns a pointer in EAX. Signature inferred from call sites.
extern void* ext_006C9790(void* self);
// Known callee 0x006C9F70: sub_006C9F70 (Getter returning float field at offset +0x14.)
extern float ext_006C9F70(void* self);
// Known callee 0x006DC460: Unknown::GetValueIfCountPositive (Returns *(this->field_0xC8) when this->field_0xB8 > 0, otherwise 0.)
extern int32_t ext_006DC460(void* self);

static inline void* lift_0070BBD0_ptr(int32_t v) {
    return reinterpret_cast<void*>(static_cast<uintptr_t>(static_cast<uint32_t>(v)));
}

// @name Unknown::FillTripleFromChains
// @class Unknown
// @summary Resolves a value index via GetValueIfCountPositive, then reads three float getters through chained sub-object lookups and stores them as doubles into the caller-supplied buffer at offsets 0x00, 0x08 and 0x10; returns that buffer.
// (No @field lines: this function does not dereference self directly; all accesses go through callees.)
double* __thiscall fn_0070BDB0(void* self, double* out) {
    int32_t v = ext_006DC460(self);

    void* p0 = ext_006C9750(lift_0070BBD0_ptr(v));
    out[0] = static_cast<double>(ext_006C9F70(p0));

    void* p1 = ext_006C9770(lift_0070BBD0_ptr(v));
    out[1] = static_cast<double>(ext_006C9F70(p1));

    void* p2 = ext_006C9790(lift_0070BBD0_ptr(v));
    out[2] = static_cast<double>(ext_006C9F70(p2));

    return out;
}
} // namespace lift_0070BBD0
} // namespace lift_0070BDB0

// [0x0070BF00]
namespace lift_0070BF00 {
// @name ClampedScaledFloatGetter
// @summary Chains three getters, scales the float result by 1/128, and clamps it to [0, 1].

extern uint32_t ext_006DC460(void* self);
extern uint32_t ext_006C98F0(void* self);
extern float fn_006C9F70(void* self);

static const double mem_00995B48 = 0.0078125;
static const double mem_0092A278 = 0.0;
static const double mem_0092A270 = 1.0;

extern float __fastcall fn_0070BF00(void* self) {
    uint32_t a = ext_006DC460(self);
    uint32_t b = ext_006C98F0(reinterpret_cast<void*>(static_cast<uintptr_t>(a)));
    float f = fn_006C9F70(reinterpret_cast<void*>(static_cast<uintptr_t>(b)));

    double x = static_cast<double>(f) * mem_00995B48;

    // Clamp: NaN or x < 0 -> 0.0; x > 1 -> 1.0; otherwise x.
    if (!(x >= mem_0092A278)) {
        return static_cast<float>(mem_0092A278);
    }
    if (x <= mem_0092A270) {
        return static_cast<float>(x);
    }
    return static_cast<float>(mem_0092A270);
}
} // namespace lift_0070BF00

// [0x00704B30] sub_00704B30 (85 bytes)
namespace lift_00704B30 {
// @name lookupStringAddrByIndex_00704B30
// @summary Maps an index 0..7 to one of eight fixed data addresses; returns 0 for any other index.
// (no @class: free function, no object fields accessed)
DWORD fn_00704B30(DWORD index) {
    switch (index) {
    case 0: return 0x00AAB920;
    case 1: return 0x00AABCF8;
    case 2: return 0x00AABCE8;
    case 3: return 0x00AABCD8;
    case 4: return 0x00AABCC8;
    case 5: return 0x00AABCB8;
    case 6: return 0x00AABCA4;
    case 7: return 0x00AABC90;
    default: return 0;
    }
}
} // namespace lift_00704B30

// [0x00706DD0]
namespace lift_00706DD0 {
extern void* ext_006A5C62(size_t size);
extern void* ext_006B9D10(void* self);

// @name AllocAndInitUnknown_00706DD0
// @summary Allocates 0x4C bytes via MFC operator new and initializes the Unknown object if allocation succeeds.
extern void* fn_00706DD0(void) {
    void* obj = ext_006A5C62(0x4C);
    if (obj != nullptr) {
        return ext_006B9D10(obj);
    }
    return nullptr;
}
} // namespace lift_00706DD0

// [0x00709AB0] sub_00709AB0 (94 bytes)
namespace lift_00709AB0 {
// Field access helpers. Pointers inside the object are stored as 32-bit
// addresses (the original code is 32-bit x86), so they are read as uint32_t
// and converted back to pointers when dereferenced.
template <typename T>
static inline T fld(const void* base, uintptr_t off) {
    T v;
    std::memcpy(&v, static_cast<const unsigned char*>(base) + off, sizeof(T));
    return v;
}

static inline void* as_ptr(uint32_t addr) {
    return reinterpret_cast<void*>(static_cast<uintptr_t>(addr));
}

// @name Unknown::ValidateChildStates
// @class Unknown
// @summary Returns TRUE when arg is null, +0x14 is zero, +0x18 is <= 1 (and if 1, the object at +0x4c matches key +0x48), and every entry in the array at +0xD0 (count +0xC0) has zero +0x14 and +0x18.
// @field Unknown +0x14 int32_t field_0x14
// @field Unknown +0x18 int32_t field_0x18
// @field Unknown +0x48 int32_t field_0x48
// @field Unknown +0x4c uint32_t field_0x4c
// @field Unknown +0xC0 int32_t field_0xc0
// @field Unknown +0xD0 uint32_t field_0xd0
// @field ChildElement +0x14 int32_t field_0x14
// @field ChildElement +0x18 int32_t field_0x18
extern BOOL __thiscall fn_00709AB0(void* self, void* arg) {
    if (arg != nullptr) {
        return FALSE;
    }
    if (fld<int32_t>(self, 0x14) != 0) {
        return FALSE;
    }

    int32_t state = fld<int32_t>(self, 0x18);
    if (state > 1) {
        return FALSE;
    }
    if (state == 1) {
        uint32_t obj_addr = fld<uint32_t>(self, 0x4c);
        if (obj_addr == 0) {
            return FALSE;
        }
        int32_t key = fld<int32_t>(self, 0x48);
        if (*reinterpret_cast<int32_t*>(as_ptr(obj_addr)) != key) {
            return FALSE;
        }
    }

    int32_t count = fld<int32_t>(self, 0xc0);
    uint32_t arr_addr = fld<uint32_t>(self, 0xd0);
    for (int32_t i = count - 1; i >= 0; --i) {
        uint32_t* arr = reinterpret_cast<uint32_t*>(as_ptr(arr_addr));
        void* elem = as_ptr(arr[i]);
        if (fld<int32_t>(elem, 0x18) != 0) {
            return FALSE;
        }
        if (fld<int32_t>(elem, 0x14) != 0) {
            return FALSE;
        }
    }
    return TRUE;
}
} // namespace lift_00709AB0

// [0x007025C0]
namespace lift_007025C0 {
// @name sub_007025C0
// @summary Sets field_0x110 and updates target->field_0x380 based on mode when field_0x10c == 1
// @field Self +0x10c uint32_t field_0x10c
// @field Self +0x110 uint32_t field_0x110
// @field Self +0x268 uint8_t* field_0x268
void __thiscall sub_007025C0(uint8_t* self, uint32_t mode) {
    uint32_t state = *reinterpret_cast<uint32_t*>(self + 0x10c);
    *reinterpret_cast<uint32_t*>(self + 0x110) = mode;
    if (state != 1) {
        return;
    }

    uint8_t* target = *reinterpret_cast<uint8_t**>(self + 0x268);
    switch (mode) {
    case 0:
        *reinterpret_cast<uint32_t*>(target + 0x380) = 2;
        break;
    case 1:
        *reinterpret_cast<uint32_t*>(target + 0x380) = 3;
        break;
    case 2:
        *reinterpret_cast<uint32_t*>(target + 0x380) = 1;
        break;
    default:
        break;
    }
}
} // namespace lift_007025C0

// [0x00708D10]
namespace lift_00708D10 {
// @name Unknown::FindNthMatchingItem
// @class Unknown
// @summary Returns the Nth item in the array at +0xd0 for which CompareSubObjectWith0x40 returns non-zero, or nullptr if not found.
// @field Unknown +0xc0 int32_t field_0xc0
// @field Unknown +0xd0 void** field_0xd0


extern uint8_t ext_00711A80(void* self);

extern void* fn_00708D10(void* self, int32_t target_index) {
    uint8_t* base = static_cast<uint8_t*>(self);
    int32_t count = *reinterpret_cast<int32_t*>(base + 0xc0);
    if (count <= 0) {
        return nullptr;
    }

    int32_t match_count = 0;
    for (int32_t i = 0; i < count; ++i) {
        void** items = *reinterpret_cast<void***>(base + 0xd0);
        void* item = items[i];
        if (ext_00711A80(item) != 0) {
            if (target_index == match_count) {
                return (*reinterpret_cast<void***>(base + 0xd0))[i];
            }
            ++match_count;
        }
        count = *reinterpret_cast<int32_t*>(base + 0xc0);
    }

    return nullptr;
}
} // namespace lift_00708D10

// [0x00708FF0] sub_00708FF0 (65 bytes)
namespace lift_00708FF0 {
// Known callee 0x00708D70: Unknown::CountSubObjectsMatching0x40 (Counts entries in a pointer array at +0xD0 (length +0xC0) for which CompareSubObjectWith0x40 returns nonzero.)
extern uint32_t ext_00708D70(void* self);
// Known callee 0x00708D10: Unknown::FindNthMatchingItem (Returns the Nth item in the array at +0xd0 for which CompareSubObjectWith0x40 returns non-zero, or nullptr if not found.)
extern void* ext_00708D10(void* self, int32_t target_index);

// @name Unknown::InvokeOnMatchingSubObjects
// @class Unknown
// @summary For each matching sub-object of `other`, calls this's virtual slot 0xF4 with that sub-object.
// @field Unknown +0x00 void* vtable (read to dispatch the virtual call at slot 0xF4)
void fn_00708FF0(void* self, void* other) {
    if (other == nullptr) {
        return;
    }

    const int32_t count = static_cast<int32_t>(ext_00708D70(other));
    for (int32_t i = 0; i < count; ++i) {
        void* item = ext_00708D10(other, i);
        if (item != nullptr) {
            void** vtbl = lift_field<void**>(self, 0);
            // Slot 0xF4 in the original 32-bit vtable layout (4-byte entries) => index 61.
            auto fn = reinterpret_cast<void (*)(void*, void*)>(vtbl[0xF4 / 4]);
            fn(self, item);
        }
    }
}
} // namespace lift_00708FF0

// [0x00709100] sub_00709100 (62 bytes)
namespace lift_00709100 {
// Lifted WIP: lifted/wip/fn_00709100.cpp -> lifted/leaf/decompiled_700000.cpp

// Known callee 0x00708FF0: Unknown::InvokeOnMatchingSubObjects (For each matching sub-object of `other`, calls this's virtual slot 0xF4 with that sub-object.)
extern void __thiscall ext_00708FF0(void* self, void* other);

// @name DispatchVirtualSlotsByFlags
// @summary Dispatches on flag bits: bit 0 calls virtual slot 63 (offset +0xFC) on self with other; bit 2 calls ext_00708FF0 (InvokeOnMatchingSubObjects) with other; bit 3 calls virtual slot 64 (offset +0x100) on self with other.
// @field Object +0x00 void** vtable
void __thiscall fn_00709100(void* self, void* other, uint8_t flags) {
    // mov esi, ecx: esi = self; edi = other; bl = flags
    using SlotFn = void(__thiscall*)(void* self, void* other);
    void** vtable = *reinterpret_cast<void***>(self);

    // test bl, 1 / je: if (flags & 1) call [vtable + 0xFC] (slot 63)
    if (flags & 0x01) {
        SlotFn target = reinterpret_cast<SlotFn>(vtable[0xFC / sizeof(void*)]);
        target(self, other);
    }

    // test bl, 4 / je: if (flags & 4) call sub_00708FF0(self, other)
    if (flags & 0x04) {
        ext_00708FF0(self, other);
    }

    // test bl, 8 / je: if (flags & 8) call [vtable + 0x100] (slot 64)
    // Vtable is re-read from self (mov edx, [esi]) before this call.
    if (flags & 0x08) {
        void** vtable2 = *reinterpret_cast<void***>(self);
        SlotFn target = reinterpret_cast<SlotFn>(vtable2[0x100 / sizeof(void*)]);
        target(self, other);
    }
}
} // namespace lift_00709100

// [0x00701ED0]
namespace lift_00701ED0 {
// @name lookupAddressByIndex_00701ED0
// @summary Returns one of 11 constant addresses selected by a stack argument (0..10); returns 0 for out-of-range indices.
// (stdcall, one 32-bit argument; no member fields accessed)

uint32_t lookupAddressByIndex_00701ED0(uint32_t index) {
    switch (index) {
        case 0:  return 0x00AAB920u;
        case 1:  return 0x00AABBC0u;
        case 2:  return 0x00AA8CA0u;
        case 3:  return 0x00AA8CA8u;
        case 4:  return 0x00AA8CA4u;
        case 5:  return 0x00AABBB4u;
        case 6:  return 0x00AABBA8u;
        case 7:  return 0x00AABB9Cu;
        case 8:  return 0x00AABB90u;
        case 9:  return 0x00AABB8Cu;
        case 10: return 0x00AABB84u;
        default: return 0u;
    }
}
} // namespace lift_00701ED0

// [0x00700840]
namespace lift_00700840 {
extern uint8_t mem_009952F8;
    void ext_006B9D70(void);
    void __fastcall ext_0077FA20(void* self);

// @name sub_00700840_dtor
// @summary Destructor that resets vtable, releases member at +0x0C, cleans up +0x10, and calls base destructor.
// @field Unknown +0x00 void* vptr
// @field Unknown +0x0C void* field_0x0C
// @field Unknown +0x10 uint8_t field_0x10
extern void __fastcall fn_00700840(void* self) {
    uint8_t* base = static_cast<uint8_t*>(self);
    *reinterpret_cast<void**>(base + 0x00) = &mem_009952F8;

    void* obj = *reinterpret_cast<void**>(base + 0x0C);
    uintptr_t* vtable = *reinterpret_cast<uintptr_t**>(obj);
    using VMethod1 = void(__thiscall*)(void*, uint32_t);
    reinterpret_cast<VMethod1>(vtable[1])(obj, 0);

    ext_006B9D70();
    ext_0077FA20(self);
}
} // namespace lift_00700840
