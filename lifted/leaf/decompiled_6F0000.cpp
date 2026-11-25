// Lifted C++ translation unit: lifted/leaf/decompiled_6F0000.cpp
#include "lift_compat.h"
extern "C" void __fastcall ext_006FD420(void* self);
extern "C" void __cdecl ext_006A5C5C(void* ptr);
#include <cstdint>
#include <new>
#include <string>
#include <cstring>

#include <string>
#include <cstring>
// @summary MSVC scalar deleting destructor: calls sub_006FD420 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_006FD400(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_006FD420(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x006F90D0]
namespace lift_006F90D0 {
// @name Unknown::LookupTableEntry
// @summary Returns the u32 at index idx of the 0x2C-entry table at 0x00AAB3EC, or 0 if idx is out of range [0, 0x2C).

extern const uint32_t mem_00AAB3EC[];

uint32_t sub_006F90D0(int32_t idx) {
    if (idx < 0 || idx >= 0x2C) {
        return 0;
    }
    return mem_00AAB3EC[idx];
}
} // namespace lift_006F90D0

// [0x006F8AF0] sub_006F8AF0 (32 bytes)
namespace lift_006F8AF0 {
// @name Unknown::ResetHeaderState
// @class Unknown
// @summary Zeroes the leading dword, sets byte +0x04 to 1, and clears bytes +0x05..+0x08.
// @field Unknown +0x00 uint32_t field_0x00
// @field Unknown +0x04 uint8_t field_0x04
// @field Unknown +0x05 uint8_t field_0x05
// @field Unknown +0x06 uint8_t field_0x06
// @field Unknown +0x07 uint8_t field_0x07
// @field Unknown +0x08 uint8_t field_0x08
void fn_006F8AF0(void* self) {
    lift_field<uint32_t>(self, 0x00) = 0;
    lift_field<uint8_t>(self, 0x04) = 1;
    lift_field<uint8_t>(self, 0x05) = 0;
    lift_field<uint8_t>(self, 0x06) = 0;
    lift_field<uint8_t>(self, 0x07) = 0;
    lift_field<uint8_t>(self, 0x08) = 0;
}
} // namespace lift_006F8AF0

// [0x006F9DC0] sub_006F9DC0 (32 bytes)
namespace lift_006F9DC0 {
// @name Unknown::SetFourFields
// @class Unknown
// @summary Stores four stack arguments into this object: two dwords at +0x00/+0x04 and +0x08, then a byte at +0x0C.
// @field Unknown +0x00 uint32_t field_0x00
// @field Unknown +0x04 uint32_t field_0x04
// @field Unknown +0x08 uint32_t field_0x08
// @field Unknown +0x0C uint8_t field_0x0C
void fn_006F9DC0(void* ecx, uint32_t arg0, uint32_t arg1, uint32_t arg2, uint8_t arg3) {
    lift_field<uint32_t>(ecx, 0x00) = arg0;
    lift_field<uint32_t>(ecx, 0x04) = arg1;
    lift_field<uint32_t>(ecx, 0x08) = arg2;
    lift_field<uint8_t>(ecx, 0x0C) = arg3;
}
} // namespace lift_006F9DC0

// [0x006F7930] sub_006F7930 (32 bytes)
namespace lift_006F7930 {
// @name Unknown::QueryVirtualSlot8C
// @class Unknown
// @summary Calls virtual slot 0x8C/4 (35) on this with (&value, 0, 0, 0) and returns its result; value is the caller's by-value stack argument.
// @field Unknown +0x00 void* __vfptr
uint32_t fn_006F7930(void* self, uint32_t& value) {
    using VirtualSlot35 = uint32_t(__thiscall*)(void* self, uint32_t* arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4);

    // Slot at byte offset 0x8C in the vtable (32-bit layout: index 35).
    void* vtable = *reinterpret_cast<void**>(self);
    void* target = *reinterpret_cast<void**>(static_cast<uint8_t*>(vtable) + 0x8C);
    auto slot = reinterpret_cast<VirtualSlot35>(target);
    return slot(self, &value, 0u, 0u, 0u);
}
} // namespace lift_006F7930

// [0x006FA3E0] sub_006FA3E0 (32 bytes)
namespace lift_006FA3E0 {
// Known callee 0x006FA3B0: getField34Shifted27 (Reads the 32-bit signed integer at offset 0x34 and arithmetic-shifts it right by 27 bits.)
int32_t sub_006FA3B0(uintptr_t self);
// Unlifted callee 0x006FA3C0 (32B): single stack argument, self in ecx.
void sub_006FA3C0(uintptr_t self, int32_t value);

// @name Unknown::CallWithShiftedFieldPlusOne
// @class Self
// @summary Passes (getField34Shifted27(self) + 1) to sub_006FA3C0 using the same self.
// @field Self +0x34 int32_t field_0x34
void fn_006FA3E0(uintptr_t self) {
    int32_t v = sub_006FA3B0(self);
    v = static_cast<int32_t>(static_cast<uint32_t>(v) + 1u);
    sub_006FA3C0(self, v);
}
} // namespace lift_006FA3E0

// [0x006F6B40] sub_006F6B40 (16 bytes)
namespace lift_006F6B40 {
// Known callee 0x00782CB0: GetRigidName (Returns the "World Rigid" (0) or "Body Rigid" (1) label string; NULL for any other selector.)
const char* ext_00782CB0(DWORD selector);
// Known callee 0x006A5C5C: thunk_MFC80_ord_764 (IAT jump thunk forwarding to MFC80!ord_764.)
extern void ext_006A5C5C();

// @name GetRigidNameStdcall
// @summary Stdcall wrapper that forwards its single DWORD selector to GetRigidName and returns the label string.
const char* fn_006F6B40(DWORD selector) {
    // Callee is __stdcall with one argument; this stub pops the argument on return (ret 4).
    return ext_00782CB0(selector);
}
} // namespace lift_006F6B40

// [0x006F6900] sub_006F6900 (16 bytes)
namespace lift_006F6900 {
extern void __cdecl ext_006A5C5C(void* ptr);

// @name sub_006F6900
// @summary Auto-lifted identical-shape clone of 0x006F6B40 (GetRigidNameStdcall).
namespace lift_006F6B40 {
// Known callee 0x00782CB0: GetRigidName (Returns the "World Rigid" (0) or "Body Rigid" (1) label string; NULL for any other selector.)
const char* ext_00782C00(DWORD selector);
// Known callee 0x006A5C5C: thunk_MFC80_ord_764 (IAT jump thunk forwarding to MFC80!ord_764.)
extern void ext_006A5C5C();

// @name GetRigidNameStdcall
// @summary Stdcall wrapper that forwards its single DWORD selector to GetRigidName and returns the label string.
const char* fn_006F6900(DWORD selector) {
    // Callee is __stdcall with one argument; this stub pops the argument on return (ret 4).
    return ext_00782C00(selector);
}
} // namespace lift_006F6B40
} // namespace lift_006F6900

// [0x006F6940] sub_006F6940 (16 bytes)
namespace lift_006F6940 {
extern void __cdecl ext_006A5C5C(void* ptr);

// @name sub_006F6940
// @summary Auto-lifted identical-shape clone of 0x006F6B40 (GetRigidNameStdcall).
namespace lift_006F6B40 {
// Known callee 0x00782CB0: GetRigidName (Returns the "World Rigid" (0) or "Body Rigid" (1) label string; NULL for any other selector.)
const char* ext_00782C80(DWORD selector);
// Known callee 0x006A5C5C: thunk_MFC80_ord_764 (IAT jump thunk forwarding to MFC80!ord_764.)
extern void ext_006A5C5C();

// @name GetRigidNameStdcall
// @summary Stdcall wrapper that forwards its single DWORD selector to GetRigidName and returns the label string.
const char* fn_006F6940(DWORD selector) {
    // Callee is __stdcall with one argument; this stub pops the argument on return (ret 4).
    return ext_00782C80(selector);
}
} // namespace lift_006F6B40
} // namespace lift_006F6940

// [0x006F69B0] sub_006F69B0 (16 bytes)
namespace lift_006F69B0 {
extern void __cdecl ext_006A5C5C(void* ptr);

// @name sub_006F69B0
// @summary Auto-lifted identical-shape clone of 0x006F6B40 (GetRigidNameStdcall).
namespace lift_006F6B40 {
// Known callee 0x00782CB0: GetRigidName (Returns the "World Rigid" (0) or "Body Rigid" (1) label string; NULL for any other selector.)
const char* ext_00782C40(DWORD selector);
// Known callee 0x006A5C5C: thunk_MFC80_ord_764 (IAT jump thunk forwarding to MFC80!ord_764.)
extern void ext_006A5C5C();

// @name GetRigidNameStdcall
// @summary Stdcall wrapper that forwards its single DWORD selector to GetRigidName and returns the label string.
const char* fn_006F69B0(DWORD selector) {
    // Callee is __stdcall with one argument; this stub pops the argument on return (ret 4).
    return ext_00782C40(selector);
}
} // namespace lift_006F6B40
} // namespace lift_006F69B0

// [0x006F6E40] sub_006F6E40 (16 bytes)
namespace lift_006F6E40 {
extern void __cdecl ext_006A5C5C(void* ptr);

// @name sub_006F6E40
// @summary Auto-lifted identical-shape clone of 0x006F6B40 (GetRigidNameStdcall).
namespace lift_006F6B40 {
// Known callee 0x00782CB0: GetRigidName (Returns the "World Rigid" (0) or "Body Rigid" (1) label string; NULL for any other selector.)
const char* ext_00782CD0(DWORD selector);
// Known callee 0x006A5C5C: thunk_MFC80_ord_764 (IAT jump thunk forwarding to MFC80!ord_764.)
extern void ext_006A5C5C();

// @name GetRigidNameStdcall
// @summary Stdcall wrapper that forwards its single DWORD selector to GetRigidName and returns the label string.
const char* fn_006F6E40(DWORD selector) {
    // Callee is __stdcall with one argument; this stub pops the argument on return (ret 4).
    return ext_00782CD0(selector);
}
} // namespace lift_006F6B40
} // namespace lift_006F6E40

// [0x006F9FD0] sub_006F9FD0 (33 bytes)
namespace lift_006F9FD0 {
extern DWORD mem_00B5E3F0;
extern DWORD mem_00B5E3F4;
extern DWORD mem_00B5E3F8;
extern DWORD mem_00B5E3FC;
extern DWORD mem_00B5E400;
extern DWORD mem_00AAB918;

// @name initKPlugGlobals
// @summary Zeroes two global DWORDs and points two others at the "KPlug" string and a nearby global.
void fn_006F9FD0(void* self) {
    (void)self;
    DWORD zero = 0;
    mem_00B5E3F0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(&mem_00B5E400));
    mem_00B5E3F8 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(&mem_00AAB918));
    mem_00B5E3F4 = zero;
    mem_00B5E3FC = zero;
}
} // namespace lift_006F9FD0

// [0x006F87B0]
namespace lift_006F87B0 {
// @name sub_006F87B0
// @summary Stores the negation of the double pointed to by the _HUGE pointer into three globals.

extern uint32_t mem_00925284;  // .rdata u32 0x0062D360 (pointer to _HUGE double)
extern double mem_00B5E280;    // global
extern double mem_00B5E288;    // global
extern double mem_00B5E290;    // global

void sub_006F87B0() {
    const double huge = *reinterpret_cast<const double*>(static_cast<uintptr_t>(mem_00925284));

    mem_00B5E280 = -huge;
    mem_00B5E288 = -huge;
    mem_00B5E290 = -huge;
}
} // namespace lift_006F87B0

// [0x006FFEE0] sub_006FFEE0 (36 bytes)
namespace lift_006FFEE0 {
namespace lift_006FFEE0 {
// mem_00925284 holds the address of MSVCR80 _HUGE (a double, +inf); loaded indirectly.
extern const double* mem_00925284;
extern double mem_00B5E600;
extern double mem_00B5E608;
extern double mem_00B5E610;

// @name SetNegHugeGlobals_006FFEE0
// @summary Sets three global doubles to -_HUGE (negative infinity), loading _HUGE through the pointer stored at mem_00925284.
void fn_006FFEE0() {
    const double* huge = mem_00925284;
    mem_00B5E600 = -*huge;
    mem_00B5E610 = -*huge;
    mem_00B5E608 = -*huge;
}
} // namespace lift_006FFEE0
} // namespace lift_006FFEE0

// [0x006F9380] sub_006F9380 (41 bytes)
namespace lift_006F9380 {
extern uint32_t mem_00B5E248;
extern uint32_t mem_00B5E250;
extern uint32_t mem_00B5E24C;
extern uint32_t mem_00B5E254;

// @name sub_006F9380_initGlobals
// @summary Stores four constant words into globals mem_00B5E248/250/24C/254 (no class context).
void fn_006F9380(void* self) {
    (void)self;
    mem_00B5E248 = 0x00B5E240u;
    mem_00B5E250 = 0x00AAB4A4u;
    mem_00B5E24C = 0x00B5F050u;
    mem_00B5E254 = 0x00000000u;
}
} // namespace lift_006F9380

// [0x006FA1E0] sub_006FA1E0 (41 bytes)
namespace lift_006FA1E0 {
// @name Buffer::releaseStorage
// @class Buffer
// @summary Frees the heap block at +0x00 if present, then clears the three-dword header (ptr, +0x04, +0x08).
// @field Buffer +0x00 void* data
// @field Buffer +0x04 uint32_t field_0x04
// @field Buffer +0x08 uint32_t field_0x08
void fn_006FA1E0(void* self) {
    // __thiscall: `self` is the value that arrived in ECX.
    struct Header {
        void*    data;       // +0x00
        uint32_t field_0x04; // +0x04
        uint32_t field_0x08; // +0x08
    };
    auto* h = static_cast<Header*>(self);

    if (h->data == nullptr) {
        return; // original jumps straight to epilogue; +0x04/+0x08 untouched
    }

    std::free(h->data);
    h->data = nullptr;
    h->field_0x04 = 0;
    h->field_0x08 = 0;
}
} // namespace lift_006FA1E0

// [0x006FC5E0] sub_006FC5E0 (42 bytes)
namespace lift_006FC5E0 {
// Thiscall with one stack argument (ret 4). Returns bool in al.
// @name Object::MatchesHandle
// @class Object
// @summary Returns true if the optional object's virtual probe (vtable +0x14) accepts the stored handle at +0x40, or if the stored handle at +0x40 is -1; otherwise false.
// @field Object +0x40 int32_t field_0x40

bool fn_006FC5E0(void* self, void* obj) {
    auto* base = static_cast<unsigned char*>(self);
    int32_t handle = *reinterpret_cast<int32_t*>(base + 0x40);

    if (obj != nullptr) {
        void** vtbl = *reinterpret_cast<void***>(obj);
        using Probe = bool (*)(void* obj, int32_t handle);
        auto probe = reinterpret_cast<Probe>(vtbl[5]);
        if (probe(obj, handle)) {
            return true;
        }
    }

    return handle == -1;
}
} // namespace lift_006FC5E0

// [0x006FC570]
namespace lift_006FC570 {
extern uint32_t mem_00B608B0;
extern uint32_t mem_00B608B4;
extern uint32_t mem_00B5E400;

// @name isKnownGlobalHandle
// @summary Checks whether the given 32-bit value matches any of three global handles.
uint8_t __stdcall sub_006FC570(uint32_t value) {
    if (value == mem_00B608B0) {
        return 1;
    }
    if (value == mem_00B608B4) {
        return 1;
    }
    return value == mem_00B5E400 ? 1 : 0;
}
} // namespace lift_006FC570

// [0x006F00E0] sub_006F00E0 (34 bytes)
namespace lift_006F00E0 {
// Known callee 0x00711D40: Unknown::storeArgsAndNotifyChild (Gets the subobject at self+0x40, calls vtable[0x50] on arg2 passing self, then stores arg1, arg3 and arg4 into the subobject at +0x04, +0x10 and +0x14.)
extern void ext_00711D40(void* self, uint32_t arg1, void* arg2, uint32_t arg3, uint32_t arg4);

// @name Unknown::forwardToSubobject2200
// @class Unknown
// @summary Forwards two stack arguments, plus two constant tail values, to ext_00711D40 on the subobject at self+0x2200.
// @field Unknown +0x2200 uint8_t field_0x2200
void fn_006F00E0(void* self, uint32_t arg1, uint32_t arg2) {
    void* subobject = reinterpret_cast<uint8_t*>(self) + 0x2200;
    ext_00711D40(subobject,
                 arg1,
                 reinterpret_cast<void*>(static_cast<uintptr_t>(arg2)),
                 0x006C8980u,
                 0x006C88C0u);
}
} // namespace lift_006F00E0

// [0x006F0040] sub_006F0040 (34 bytes)
namespace lift_006F0040 {
// Known callee 0x00711D40: Unknown::storeArgsAndNotifyChild (Gets the subobject at self+0x40, calls vtable[0x50] on arg2 passing self, then stores arg1, arg3 and arg4 into the subobject at +0x04, +0x10 and +0x14.)
extern void ext_00711D40(void* self, uint32_t arg1, void* arg2, uint32_t arg3, uint32_t arg4);

// Data addresses pushed as immediate arguments by the original code.
extern uint8_t mem_006C8C80[];
extern uint8_t mem_006C8BC0[];

// @name Unknown::forwardArgsToSubobject20F0
// @class Unknown
// @summary Adjusts this by +0x20F0 and forwards arg1, arg2 plus two data-address constants to storeArgsAndNotifyChild.
// @field Unknown +0x20F0 void* field_20F0
void fn_006F0040(void* self, uint32_t arg1, void* arg2) {
    void* sub = static_cast<uint8_t*>(self) + 0x20F0;
    const uint32_t c3 = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(mem_006C8C80));
    const uint32_t c4 = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(mem_006C8BC0));
    ext_00711D40(sub, arg1, arg2, c3, c4);
}
} // namespace lift_006F0040

// [0x006F0120] sub_006F0120 (34 bytes)
namespace lift_006F0120 {
// Known callee 0x00711D40: Unknown::storeArgsAndNotifyChild (Gets the subobject at self+0x40, calls vtable[0x50] on arg2 passing self, then stores arg1, arg3 and arg4 into the subobject at +0x04, +0x10 and +0x14.)
extern void ext_00711D40(void* self, uint32_t arg1, void* arg2, uint32_t arg3, uint32_t arg4);

// @name Unknown::forwardArgsToSubobject2288
// @class Unknown
// @summary Forwards its two stack arguments, plus two constant words, to ext_00711D40 on the subobject at self+0x2288.
// @field Unknown +0x2288 uint8_t field_0x2288
void fn_006F0120(void* self, uint32_t arg1, void* arg2) {
    void* subobject = static_cast<uint8_t*>(self) + 0x2288;
    ext_00711D40(subobject, arg1, arg2, 0x006C8B00u, 0x006C8A40u);
}
} // namespace lift_006F0120

// [0x006F01E0] sub_006F01E0 (34 bytes)
namespace lift_006F01E0 {
// Known callee 0x00711D40: Unknown::storeArgsAndNotifyChild (Gets the subobject at self+0x40, calls vtable[0x50] on arg2 passing self, then stores arg1, arg3 and arg4 into the subobject at +0x04, +0x10 and +0x14.)
extern void ext_00711D40(void* self, uint32_t arg1, void* arg2, uint32_t arg3, uint32_t arg4);

// @name ForwardArgsToSubobject2420
// @class Unknown
// @summary Forwards its two stack arguments, plus two constants, to ext_00711D40 on the subobject at this+0x2420 (thiscall, ret 8).
// @field Unknown +0x2420 uint8_t field_0x2420 (address only; subobject is passed as `this`, not dereferenced here)
void fn_006F01E0(void* self, uint32_t arg1, void* arg2) {
    void* child = static_cast<uint8_t*>(self) + 0x2420;
    ext_00711D40(child, arg1, arg2, 0x006F7EA0u, 0x006F7D00u);
}
} // namespace lift_006F01E0

    // [0x006F0160]
namespace lift_006F0160 {
// @name Unknown::forwardArgsToSubobject2310
// @class Unknown
// @summary Forwards its two arguments, plus two constant tokens, to the subobject at this+0x2310 via ext_00711D40.
// @field Unknown +0x2310 (subobject) not dereferenced here; only its address is passed as self to ext_00711D40.

// Callee: stores args into the subobject and notifies a child object.
extern void __thiscall ext_00711D40(void* self, uint32_t arg1, void* arg2, uint32_t arg3, uint32_t arg4);

struct Unknown {

void __thiscall forwardArgsToSubobject2310(uint32_t arg1, void* arg2);
};

void __thiscall Unknown::forwardArgsToSubobject2310(uint32_t arg1, void* arg2) {
    void* subobject = reinterpret_cast<uint8_t*>(this) + 0x2310;
    ext_00711D40(subobject, arg1, arg2, 0x006F8540u, 0x006F8390u);
}
} // namespace lift_006F0160

// [0x006F01A0] sub_006F01A0 (34 bytes)
namespace lift_006F01A0 {
// Known callee 0x00711D40: Unknown::storeArgsAndNotifyChild (Gets the subobject at self+0x40, calls vtable[0x50] on arg2 passing self, then stores arg1, arg3 and arg4 into the subobject at +0x04, +0x10 and +0x14.)
extern void __thiscall ext_00711D40(void* self, uint32_t arg1, void* arg2, uint32_t arg3, uint32_t arg4);

// @name Unknown::forwardArgsToSubobject2398
// @class Unknown
// @summary Forwards its two stack arguments, plus two constants, to the storeArgsAndNotifyChild callee using the subobject at this+0x2398.
// @field Unknown +0x2398 void* subobject2398 (address only; passed as self to the callee)
void __thiscall fn_006F01A0(void* self, uint32_t arg1, void* arg2) {
    void* sub = static_cast<uint8_t*>(self) + 0x2398;
    ext_00711D40(sub, arg1, arg2, 0x006F7B60u, 0x006F86F0u);
}
} // namespace lift_006F01A0

// [0x006F0220] sub_006F0220 (34 bytes)
namespace lift_006F0220 {
// Known callee 0x00711D40: Unknown::storeArgsAndNotifyChild (Gets the subobject at self+0x40, calls vtable[0x50] on arg2 passing self, then stores arg1, arg3 and arg4 into the subobject at +0x04, +0x10 and +0x14.)
extern void ext_00711D40(void* self, uint32_t arg1, void* arg2, uint32_t arg3, uint32_t arg4);

// @name Unknown::forwardArgsToSubobjectAt24A8
// @class Unknown
// @summary Offsets self by 0x24A8 to reach an embedded subobject and forwards arg1/arg2 to storeArgsAndNotifyChild along with two constant words (0x006F81E0, 0x006F8040).
// @field Unknown +0x24A8 void* field_0x24A8
void fn_006F0220(void* self, uint32_t arg1, void* arg2) {
    void* sub = static_cast<uint8_t*>(self) + 0x24A8;
    ext_00711D40(sub, arg1, arg2, 0x006F81E0u, 0x006F8040u);
}
} // namespace lift_006F0220

// [0x006F0260] sub_006F0260 (34 bytes)
namespace lift_006F0260 {
// @name sub_006F0260
// @summary Auto-lifted identical-shape clone of 0x006F00E0 (Unknown::forwardToSubobject2200).
namespace lift_006F00E0 {
// Known callee 0x00711D40: Unknown::storeArgsAndNotifyChild (Gets the subobject at self+0x40, calls vtable[0x50] on arg2 passing self, then stores arg1, arg3 and arg4 into the subobject at +0x04, +0x10 and +0x14.)
extern void ext_00711D40(void* self, uint32_t arg1, void* arg2, uint32_t arg3, uint32_t arg4);

// @name Unknown::forwardToSubobject2200
// @class Unknown
// @summary Forwards two stack arguments, plus two constant tail values, to ext_00711D40 on the subobject at self+0x2200.
// @field Unknown +0x2200 uint8_t field_0x2200
void fn_006F0260(void* self, uint32_t arg1, uint32_t arg2) {
    void* subobject = reinterpret_cast<uint8_t*>(self) + 0x2530;
    ext_00711D40(subobject,
                 arg1,
                 reinterpret_cast<void*>(static_cast<uintptr_t>(arg2)),
                 0x6F8530u,
                 0x6F8380u);
}
} // namespace lift_006F00E0
} // namespace lift_006F0260

// [0x006F02A0] sub_006F02A0 (34 bytes)
namespace lift_006F02A0 {
// @name sub_006F02A0
// @summary Auto-lifted identical-shape clone of 0x006F00E0 (Unknown::forwardToSubobject2200).
namespace lift_006F00E0 {
// Known callee 0x00711D40: Unknown::storeArgsAndNotifyChild (Gets the subobject at self+0x40, calls vtable[0x50] on arg2 passing self, then stores arg1, arg3 and arg4 into the subobject at +0x04, +0x10 and +0x14.)
extern void ext_00711D40(void* self, uint32_t arg1, void* arg2, uint32_t arg3, uint32_t arg4);

// @name Unknown::forwardToSubobject2200
// @class Unknown
// @summary Forwards two stack arguments, plus two constant tail values, to ext_00711D40 on the subobject at self+0x2200.
// @field Unknown +0x2200 uint8_t field_0x2200
void fn_006F02A0(void* self, uint32_t arg1, uint32_t arg2) {
    void* subobject = reinterpret_cast<uint8_t*>(self) + 0x25B8;
    ext_00711D40(subobject,
                 arg1,
                 reinterpret_cast<void*>(static_cast<uintptr_t>(arg2)),
                 0x6F7B50u,
                 0x6F86E0u);
}
} // namespace lift_006F00E0
} // namespace lift_006F02A0

// [0x006F0320] sub_006F0320 (34 bytes)
namespace lift_006F0320 {
// @name sub_006F0320
// @summary Auto-lifted identical-shape clone of 0x006F00E0 (Unknown::forwardToSubobject2200).
namespace lift_006F00E0 {
// Known callee 0x00711D40: Unknown::storeArgsAndNotifyChild (Gets the subobject at self+0x40, calls vtable[0x50] on arg2 passing self, then stores arg1, arg3 and arg4 into the subobject at +0x04, +0x10 and +0x14.)
extern void ext_00711D40(void* self, uint32_t arg1, void* arg2, uint32_t arg3, uint32_t arg4);

// @name Unknown::forwardToSubobject2200
// @class Unknown
// @summary Forwards two stack arguments, plus two constant tail values, to ext_00711D40 on the subobject at self+0x2200.
// @field Unknown +0x2200 uint8_t field_0x2200
void fn_006F0320(void* self, uint32_t arg1, uint32_t arg2) {
    void* subobject = reinterpret_cast<uint8_t*>(self) + 0x26C8;
    ext_00711D40(subobject,
                 arg1,
                 reinterpret_cast<void*>(static_cast<uintptr_t>(arg2)),
                 0x6F81D0u,
                 0x6F8030u);
}
} // namespace lift_006F00E0
} // namespace lift_006F0320

// [0x006F03E0] sub_006F03E0 (34 bytes)
namespace lift_006F03E0 {
// @name sub_006F03E0
// @summary Auto-lifted identical-shape clone of 0x006F00E0 (Unknown::forwardToSubobject2200).
namespace lift_006F00E0 {
// Known callee 0x00711D40: Unknown::storeArgsAndNotifyChild (Gets the subobject at self+0x40, calls vtable[0x50] on arg2 passing self, then stores arg1, arg3 and arg4 into the subobject at +0x04, +0x10 and +0x14.)
extern void ext_00711D40(void* self, uint32_t arg1, void* arg2, uint32_t arg3, uint32_t arg4);

// @name Unknown::forwardToSubobject2200
// @class Unknown
// @summary Forwards two stack arguments, plus two constant tail values, to ext_00711D40 on the subobject at self+0x2200.
// @field Unknown +0x2200 uint8_t field_0x2200
void fn_006F03E0(void* self, uint32_t arg1, uint32_t arg2) {
    void* subobject = reinterpret_cast<uint8_t*>(self) + 0x2860;
    ext_00711D40(subobject,
                 arg1,
                 reinterpret_cast<void*>(static_cast<uintptr_t>(arg2)),
                 0x6F7E80u,
                 0x6F7CE0u);
}
} // namespace lift_006F00E0
} // namespace lift_006F03E0

// [0x006F0560] sub_006F0560 (34 bytes)
namespace lift_006F0560 {
// @name sub_006F0560
// @summary Auto-lifted identical-shape clone of 0x006F00E0 (Unknown::forwardToSubobject2200).
namespace lift_006F00E0 {
// Known callee 0x00711D40: Unknown::storeArgsAndNotifyChild (Gets the subobject at self+0x40, calls vtable[0x50] on arg2 passing self, then stores arg1, arg3 and arg4 into the subobject at +0x04, +0x10 and +0x14.)
extern void ext_00711D40(void* self, uint32_t arg1, void* arg2, uint32_t arg3, uint32_t arg4);

// @name Unknown::forwardToSubobject2200
// @class Unknown
// @summary Forwards two stack arguments, plus two constant tail values, to ext_00711D40 on the subobject at self+0x2200.
// @field Unknown +0x2200 uint8_t field_0x2200
void fn_006F0560(void* self, uint32_t arg1, uint32_t arg2) {
    void* subobject = reinterpret_cast<uint8_t*>(self) + 0x2B90;
    ext_00711D40(subobject,
                 arg1,
                 reinterpret_cast<void*>(static_cast<uintptr_t>(arg2)),
                 0x6F81B0u,
                 0x6F8010u);
}
} // namespace lift_006F00E0
} // namespace lift_006F0560

// [0x006F10A0] sub_006F10A0 (44 bytes)
namespace lift_006F10A0 {
// Known callee 0x00711D40: Unknown::storeArgsAndNotifyChild (Gets the subobject at self+0x40, calls vtable[0x50] on arg2 passing self, then stores arg1, arg3 and arg4 into the subobject at +0x04, +0x10 and +0x14.)
extern void ext_00711D40(void* self, uint32_t arg1, void* arg2, uint32_t arg3, uint32_t arg4);
// Known callee 0x00711A70: sub_00711A70 (15 bytes, one stack argument, thiscall)
extern void ext_00711A70(void* self, uint32_t arg1);

// @name Unknown::notifySubobjectAt4378
// @class Unknown
// @summary Forwards two stack args plus constant 0x006F8460 to the embedded subobject at self+0x4378 via ext_00711D40, then calls ext_00711A70 with 1 on the same subobject.
// @field Unknown +0x4378 uint8_t subobject (embedded object; passed as `this` to callees, not dereferenced here)
void fn_006F10A0(void* self, uint32_t a1, uint32_t a2) {
    uint8_t* sub = static_cast<uint8_t*>(self) + 0x4378;
    ext_00711D40(sub, a1, reinterpret_cast<void*>(static_cast<uintptr_t>(a2)), 0x006F8460u, 0u);
    ext_00711A70(sub, 1u);
}
} // namespace lift_006F10A0

// [0x006F0F60] sub_006F0F60 (44 bytes)
namespace lift_006F0F60 {
// Unnamed callee 0x00711A70: thiscall on the subobject, takes one stack argument (passed 1 here).
extern void ext_00711A70(void* self, uint32_t arg1);
// Known callee 0x00711D40: Unknown::storeArgsAndNotifyChild (Gets the subobject at self+0x40, calls vtable[0x50] on arg2 passing self, then stores arg1, arg3 and arg4 into the subobject at +0x04, +0x10 and +0x14.)
extern void ext_00711D40(void* self, uint32_t arg1, void* arg2, uint32_t arg3, uint32_t arg4);

// @name Unknown::forwardArgsToSubobjectAt40D0
// @class Unknown
// @summary Offsets self by 0x40D0 to reach an embedded subobject, forwards arg1/arg2 to storeArgsAndNotifyChild with constant 0x006F7C30 and 0, then calls ext_00711A70 with 1.
// @field Unknown +0x40D0 void* field_0x40D0
void fn_006F0F60(void* self, uint32_t arg1, void* arg2) {
    void* sub = static_cast<uint8_t*>(self) + 0x40D0;
    ext_00711D40(sub, arg1, arg2, 0x006F7C30u, 0u);
    ext_00711A70(sub, 1u);
}
} // namespace lift_006F0F60

// [0x006F0FE0] sub_006F0FE0 (44 bytes)
namespace lift_006F0FE0 {
// Known callee 0x00711D40: Unknown::storeArgsAndNotifyChild (Gets the subobject at self+0x40, calls vtable[0x50] on arg2 passing self, then stores arg1, arg3 and arg4 into the subobject at +0x04, +0x10 and +0x14.)
extern void ext_00711D40(void* self, uint32_t arg1, void* arg2, uint32_t arg3, uint32_t arg4);
// Known callee 0x00711A70: single stack argument, thiscall.
extern void ext_00711A70(void* self, uint32_t arg1);

// @name Unknown::forwardArgsToSubobjectAt41E0
// @class Unknown
// @summary Forwards two stack arguments plus constants to the subobject at this+0x41E0 via ext_00711D40, then calls ext_00711A70 with 1.
// @field Unknown +0x41E0 uint8_t field_0x41e0 (subobject; only its address is taken)
void fn_006F0FE0(void* self, uint32_t arg1, void* arg2) {
    void* sub = reinterpret_cast<uint8_t*>(self) + 0x41E0;
    ext_00711D40(sub, arg1, arg2, 0x006F7F70u, 0u);
    ext_00711A70(sub, 1u);
}
} // namespace lift_006F0FE0

// [0x006F0FA0] sub_006F0FA0 (44 bytes)
namespace lift_006F0FA0 {
// Known callee 0x00711D40: Unknown::storeArgsAndNotifyChild (Gets the subobject at self+0x40, calls vtable[0x50] on arg2 passing self, then stores arg1, arg3 and arg4 into the subobject at +0x04, +0x10 and +0x14.)
extern void ext_00711D40(void* self, uint32_t arg1, void* arg2, uint32_t arg3, uint32_t arg4);
// Callee 0x00711A70 (15 bytes): thiscall taking one argument; signature inferred from call site.
extern void ext_00711A70(void* self, uint32_t arg1);

// @name Unknown::forwardArgsToSubobjectAt4158
// @class Unknown
// @summary Forwards two stack arguments plus constant 0x006F7DD0 and 0 into the subobject at this+0x4158 via ext_00711D40, then calls ext_00711A70 with 1.
// @field Unknown +0x4158 uint8_t field_0x4158
void fn_006F0FA0(void* self, uint32_t arg1, void* arg2) {
    // Subobject at this+0x4158 (address computed with lea, no dereference here).
    void* sub = reinterpret_cast<uint8_t*>(self) + 0x4158;

    ext_00711D40(sub, arg1, arg2, 0x006F7DD0u, 0u);
    ext_00711A70(sub, 1u);
}
} // namespace lift_006F0FA0

// [0x006F04E0] sub_006F04E0 (44 bytes)
namespace lift_006F04E0 {
extern void ext_00711A70(void* self, uint32_t arg1);
// Known callee 0x006F7CD0: sub_006F7CD0 (Virtual dispatch thunk: forwards to vtable slot at +0x320.)
extern void ext_006F7CD0(void* self);
// Known callee 0x00711D40: Unknown::storeArgsAndNotifyChild (Gets the subobject at self+0x40, calls vtable[0x50] on arg2 passing self, then stores arg1, arg3 and arg4 into the subobject at +0x04, +0x10 and +0x14.)
extern void ext_00711D40(void* self, uint32_t arg1, void* arg2, uint32_t arg3, uint32_t arg4);

// @name Unknown::forwardArgsToSubobjectAt2A80
// @class Unknown
// @summary Forwards two stack arguments to the embedded subobject at this+0x2A80 via storeArgsAndNotifyChild, passing the 0x006F7CD0 thunk address and 0 as extra values, then calls ext_00711A70 with 1.
// @field Unknown +0x2A80 uint8_t[] field_0x2a80 (embedded subobject; its address is computed, not dereferenced here)
void fn_006F04E0(void* self, uint32_t arg1, void* arg2) {
    uint8_t* sub = static_cast<uint8_t*>(self) + 0x2A80;
    ext_00711D40(sub, arg1, arg2,
                 static_cast<uint32_t>(reinterpret_cast<uintptr_t>(&ext_006F7CD0)),
                 0u);
    ext_00711A70(sub, 1u);
}
} // namespace lift_006F04E0

// [0x006F1020] sub_006F1020 (44 bytes)
namespace lift_006F1020 {
// Known callee 0x00711D40: Unknown::storeArgsAndNotifyChild (Gets the subobject at self+0x40, calls vtable[0x50] on arg2 passing self, then stores arg1, arg3 and arg4 into the subobject at +0x04, +0x10 and +0x14.)
extern void ext_00711D40(void* self, uint32_t arg1, void* arg2, uint32_t arg3, uint32_t arg4);
// Callee 0x00711A70 (15 bytes, unrecovered signature): called thiscall with one stack argument (1).
extern void ext_00711A70(void* self, uint32_t arg1);

// @name Unknown::forwardArgsToSubobjectAt4268
// @class Unknown
// @summary Forwards arg1 (twice) and a constant to the subobject at +0x4268 via storeArgsAndNotifyChild, then invokes the subobject's ext_00711A70 with flag 1.
// @field Unknown +0x4268 void* field_0x4268 (subobject, passed as this to callees)
void fn_006F1020(void* self, uint32_t arg1, uint32_t arg2) {
    (void)arg2;  // second stack argument is not read by the original code
    void* subobj = reinterpret_cast<uint8_t*>(self) + 0x4268;
    ext_00711D40(subobj, arg1, reinterpret_cast<void*>(static_cast<uintptr_t>(arg1)), 0x6F8110u, 0u);
    ext_00711A70(subobj, 1u);
}
} // namespace lift_006F1020

// [0x006F08E0] sub_006F08E0 (44 bytes)
namespace lift_006F08E0 {
// Known callee 0x00711D40: Unknown::storeArgsAndNotifyChild (Gets the subobject at self+0x40, calls vtable[0x50] on arg2 passing self, then stores arg1, arg3 and arg4 into the subobject at +0x04, +0x10 and +0x14.)
extern void ext_00711D40(void* self, uint32_t arg1, void* arg2, uint32_t arg3, uint32_t arg4);
// Known callee 0x00711A70: sub_00711A70 (15 bytes; thiscall, one stack argument, called with the subobject as this)
extern void ext_00711A70(void* self, uint32_t arg1);

// @name Unknown::forwardArgsToSubobjectAt3300
// @class Unknown
// @summary Forwards arg1/arg2 to the embedded subobject at self+0x3300 via storeArgsAndNotifyChild with constant 0x006F84D0 and 0, then calls the subobject helper with 1.
// @field Unknown +0x3300 uint8_t field_0x3300[] (embedded subobject, used by address only)
void fn_006F08E0(void* self, uint32_t arg1, void* arg2) {
    uint8_t* subobject = static_cast<uint8_t*>(self) + 0x3300;
    ext_00711D40(subobject, arg1, arg2, 0x006F84D0u, 0u);
    ext_00711A70(subobject, 1u);
}
} // namespace lift_006F08E0

// [0x006F08A0] sub_006F08A0 (44 bytes)
namespace lift_006F08A0 {
// Known callee 0x00711D40: Unknown::storeArgsAndNotifyChild (Gets the subobject at self+0x40, calls vtable[0x50] on arg2 passing self, then stores arg1, arg3 and arg4 into the subobject at +0x04, +0x10 and +0x14.)
extern void __thiscall ext_00711D40(void* self, uint32_t arg1, void* arg2, uint32_t arg3, uint32_t arg4);
// Known callee 0x00711A70 (15 bytes, signature not recovered; called as thiscall with one stack argument).
extern void __thiscall ext_00711A70(void* self, uint32_t arg1);

// @name Unknown::forwardArgsToSubobjectAt3278
// @class Unknown
// @summary Passes arg1/arg2 plus the callback address 0x006F8320 and a zero to the subobject at self+0x3278 via ext_00711D40, then calls ext_00711A70 with 1 on the same subobject.
// @field Unknown +0x3278 uint8_t field_0x3278
extern void __fastcall fn_006F08A0(void* self, int edx_unused, uint32_t arg1, void* arg2) {
    (void)edx_unused;
    void* sub = static_cast<uint8_t*>(self) + 0x3278;
    ext_00711D40(sub, arg1, arg2, 0x006F8320u, 0u);
    ext_00711A70(sub, 1u);
}
} // namespace lift_006F08A0

// [0x006F0520] sub_006F0520 (44 bytes)
namespace lift_006F0520 {
// Known callee 0x00711D40: Unknown::storeArgsAndNotifyChild (Gets the subobject at self+0x40, calls vtable[0x50] on arg2 passing self, then stores arg1, arg3 and arg4 into the subobject at +0x04, +0x10 and +0x14.)
extern void __thiscall ext_00711D40(void* self, uint32_t arg1, void* arg2, uint32_t arg3, uint32_t arg4);
// Callee 0x00711A70 (15 bytes): single dword argument, invoked on the same subobject.
extern void __thiscall ext_00711A70(void* self, uint32_t arg);

// @name Unknown::forwardArgsToSubobjectAt2B08
// @class Unknown
// @summary Forwards two stack arguments plus a constant 0x006F7E70 and 0 to the subobject at +0x2B08 via ext_00711D40, then calls ext_00711A70 on it with 1.
// @field Unknown +0x2B08 uint8_t field_0x2B08
void fn_006F0520(void* self, uint32_t arg1, void* arg2) {
    void* sub = static_cast<uint8_t*>(self) + 0x2B08; // lea, not a load
    ext_00711D40(sub, arg1, arg2, 0x006F7E70u, 0u);
    ext_00711A70(sub, 1u);
}
} // namespace lift_006F0520

// [0x006F1160]
namespace lift_006F1160 {
// @name Unknown::initChildAndNotify
// @class Unknown
// @summary Initializes the child subobject at +0x4510 with two arguments and fixed callback/flag, then triggers its update.
// @field Unknown +0x4510 uint8_t[] field_0x4510


extern void __thiscall ext_00711D40(void* self, uint32_t arg1, void* arg2, uint32_t arg3, uint32_t arg4);
extern void __thiscall ext_00711A70(void* self, uint32_t arg1);

void __thiscall sub_006F1160(void* self, uint32_t arg1, void* arg2) {
    void* child = static_cast<uint8_t*>(self) + 0x4510;
    ext_00711D40(child, arg1, arg2, 0x006F7C20u, 0u);
    ext_00711A70(child, 1u);
}
} // namespace lift_006F1160

// [0x006F11A0]
namespace lift_006F11A0 {
// @name Unknown::initSubobjectAndNotify
// @class Unknown
// @summary Initializes the subobject at +0x4598 with two arguments and callback 0x6F7DC0, then calls ext_00711A70 with 1.
// @field Unknown +0x4598 uint8_t field_0x4598


extern void __thiscall ext_00711D40(void* self, uint32_t arg1, void* arg2, uint32_t arg3, uint32_t arg4);
extern void __thiscall ext_00711A70(void* self, uint32_t arg1);

void __thiscall sub_006F11A0(void* self, uint32_t arg1, void* arg2) {
    void* subobject = static_cast<uint8_t*>(self) + 0x4598;
    ext_00711D40(subobject, arg1, arg2, 0x006F7DC0u, 0u);
    ext_00711A70(subobject, 1u);
}
} // namespace lift_006F11A0

// [0x006F10E0] sub_006F10E0 (44 bytes)
namespace lift_006F10E0 {
// Known callee 0x00711D40: Unknown::storeArgsAndNotifyChild (Gets the subobject at self+0x40, calls vtable[0x50] on arg2 passing self, then stores arg1, arg3 and arg4 into the subobject at +0x04, +0x10 and +0x14.)
extern void ext_00711D40(void* self, uint32_t arg1, void* arg2, uint32_t arg3, uint32_t arg4);
// Callee 0x00711A70 (15B, not yet lifted): takes the subobject as this and one stack argument.
extern void ext_00711A70(void* self, uint32_t arg1);
// Data referenced by immediate 0x006F8610 (pushed as arg3).
extern uint8_t mem_006F8610[];

// @name Unknown::forwardArgsToSubobjectAt4400
// @class Unknown
// @summary Forwards two stack arguments to the embedded subobject at self+0x4400 via ext_00711D40 (with a fixed data pointer and 0), then calls ext_00711A70 with 1.
// @field Unknown +0x4400 uint8_t subobject_4400[] (embedded subobject, address only; used as this for both callees)
void fn_006F10E0(void* self, uint32_t arg1, void* arg2) {
    uint8_t* sub = static_cast<uint8_t*>(self) + 0x4400;
    ext_00711D40(sub, arg1, arg2,
                 static_cast<uint32_t>(reinterpret_cast<uintptr_t>(mem_006F8610)), 0);
    ext_00711A70(sub, 1);
}
} // namespace lift_006F10E0

// [0x006F1060]
namespace lift_006F1060 {
// @name Unknown::initSubobject42F0AndNotify
// @class Unknown
// @summary Initializes the subobject at +0x42f0 with two arguments and a callback address, then triggers a state update.
// @field Unknown +0x42f0 void* field_0x42f0

extern void __thiscall ext_00711D40(void* self, uint32_t arg1, void* arg2, uint32_t arg3, uint32_t arg4);
extern void __thiscall ext_00711A70(void* self, uint32_t arg1);

void __thiscall sub_006F1060(void* self, uint32_t arg1, void* arg2) {
    void* subobj = static_cast<uint8_t*>(self) + 0x42f0;
    ext_00711D40(subobj, arg1, arg2, 0x006F82B0u, 0);
    ext_00711A70(subobj, 1);
}
} // namespace lift_006F1060

// [0x006F1120] sub_006F1120 (44 bytes)
namespace lift_006F1120 {
// Known callee 0x00711D40: Unknown::storeArgsAndNotifyChild (Gets the subobject at self+0x40, calls vtable[0x50] on arg2 passing self, then stores arg1, arg3 and arg4 into the subobject at +0x04, +0x10 and +0x14.)
void __thiscall ext_00711D40(void* self, uint32_t arg1, void* arg2, uint32_t arg3, uint32_t arg4);
// Unknown callee 0x00711A70 (15 bytes): takes one stack dword (pushed as 1); signature inferred from call site.
void __thiscall ext_00711A70(void* self, uint32_t flag);

// @name Unknown::forwardArgsAndNotifySubobject
// @class Unknown
// @summary Forwards two stack args plus constant 0x006F7A80 and 0 to ext_00711D40 on the embedded subobject at self+0x4488, then calls ext_00711A70 with flag 1 on the same subobject.
// @field Unknown +0x4488 uint8_t field_0x4488 (embedded subobject; only its address is taken and passed as `this` to ext_00711D40 and ext_00711A70)
void __thiscall fn_006F1120(void* self, uint32_t arg1, void* arg2) {
    uint8_t* sub = static_cast<uint8_t*>(self) + 0x4488;
    ext_00711D40(sub, arg1, arg2, 0x006F7A80u, 0u);
    ext_00711A70(sub, 1u);
}
} // namespace lift_006F1120

// [0x006F2260] sub_006F2260 (48 bytes)
namespace lift_006F2260 {
// Known callee 0x00711D40: Unknown::storeArgsAndNotifyChild (Gets the subobject at self+0x40, calls vtable[0x50] on arg2 passing self, then stores arg1, arg3 and arg4 into the subobject at +0x04, +0x10 and +0x14.)
extern void ext_00711D40(void* self, uint32_t arg1, void* arg2, uint32_t arg3, uint32_t arg4);

// @name Unknown::forwardArgsToSubobjectAt6600
// @class Unknown
// @summary Forwards two stack arguments plus two constants to storeArgsAndNotifyChild on the subobject at this+0x6600.
// @field Unknown +0x6600 uint8_t field_6600 (address taken only; passed as `this` to ext_00711D40)
void fn_006F2260(void* self, uint32_t arg1, void* arg2) {
    void* sub = &lift_field<uint8_t>(self, 0x6600);
    ext_00711D40(sub, arg1, arg2, 0x006F8550u, 0x006F83A0u);
}
} // namespace lift_006F2260

// [0x006F69C0]
namespace lift_006F69C0 {
// @name Unknown::SetIntAndStoreDouble
// @class Unknown
// @summary Stores the int argument at self+0x2A78, then forwards it as a double (index 0) to SetDoubleElement16 on the object at self+0x6958 after a helper lookup.
// @field Unknown +0x2A78 int32_t intField_2a78
// @field Unknown +0x6958 void* ptr_6958

extern int32_t __fastcall ext_006F76F0(void* self, int32_t arg);
extern void __fastcall ext_0077FF90(void* self, int32_t index, double value);

extern void __fastcall fn_006F69C0(void* self, int32_t value) {
    auto* obj = static_cast<uint8_t*>(self);
    *reinterpret_cast<int32_t*>(obj + 0x2A78) = value;

    void* inner = *reinterpret_cast<void**>(obj + 0x6958);
    int32_t result = ext_006F76F0(inner, 0xAC);

    ext_0077FF90(reinterpret_cast<void*>(static_cast<intptr_t>(result)), 0, static_cast<double>(value));
}
} // namespace lift_006F69C0

// [0x006F6910]
namespace lift_006F6910 {
// @name Unknown::storeIntAsDouble
// @class Unknown
// @summary Stores the int32 argument at self+0x3270, then writes it as a double into element 0 of the array held at self+0x6958 via a getter-selected inner object.
// @field Unknown +0x3270 int32_t field_0x3270
// @field Unknown +0x6958 void* field_0x6958

extern int32_t __fastcall ext_006F76F0(void* self);
extern void __fastcall ext_0077FF90(void* self, int32_t index, double value);

extern void __fastcall fn_006F6910(void* self, int32_t value) {
    auto* base = static_cast<uint8_t*>(self);

    *reinterpret_cast<int32_t*>(base + 0x3270) = value;

    void* inner = *reinterpret_cast<void**>(base + 0x6958);
    double d = static_cast<double>(value);

    // The original pushes 0xA8 as an extra stack argument to the getter;
    // the declared getter signature takes only self, so it is not passed here.
    int32_t target = ext_006F76F0(inner);

    ext_0077FF90(reinterpret_cast<void*>(static_cast<intptr_t>(target)), 0, d);
}
} // namespace lift_006F6910

// [0x006FF730]
namespace lift_006FF730 {
// @name FindU16InZeroTerminatedList
// @summary Returns true if key appears in a zero-terminated uint16 array before the terminator; false otherwise (including null list).
bool FindU16InZeroTerminatedList(uint16_t key, const uint16_t* list)
{
    if (list == nullptr)
        return false;

    for (const uint16_t* p = list; *p != 0; ++p)
    {
        if (*p == key)
            return true;
    }

    return false;
}
} // namespace lift_006FF730

// [0x006F8B30]
namespace lift_006F8B30 {
// @name Unknown::copyAssign9
// @class Unknown
// @summary Copies a 9-byte record (dword at +0, five bytes at +4..+8) from src into self and returns self.
// @field Unknown +0x00 DWORD field_0x00
// @field Unknown +0x04 BYTE field_0x04
// @field Unknown +0x05 BYTE field_0x05
// @field Unknown +0x06 BYTE field_0x06
// @field Unknown +0x07 BYTE field_0x07
// @field Unknown +0x08 BYTE field_0x08
void* __thiscall sub_006F8B30(void* self, const void* src) {
    lift_field<DWORD>(self, 0x00) = lift_field<const DWORD>(src, 0x00);
    lift_field<BYTE>(self, 0x04) = lift_field<const BYTE>(src, 0x04);
    lift_field<BYTE>(self, 0x05) = lift_field<const BYTE>(src, 0x05);
    lift_field<BYTE>(self, 0x06) = lift_field<const BYTE>(src, 0x06);
    lift_field<BYTE>(self, 0x07) = lift_field<const BYTE>(src, 0x07);
    lift_field<BYTE>(self, 0x08) = lift_field<const BYTE>(src, 0x08);
    return self;
}
} // namespace lift_006F8B30

// [0x006FA9C0] sub_006FA9C0 (48 bytes)
namespace lift_006FA9C0 {
// Vtable slot 0x74 of the subobject at self+0x38, called with one argument; returns bool (al).
extern bool ext_vcall_0x74(void* obj, DWORD arg);

// @name Unknown::flagGatedVirtualQuery
// @class Unknown
// @summary If flag bit 0x2 at self+0x34 is set, forwards arg to the vtable slot 0x74 method of the subobject at self+0x38 and returns its bool result; otherwise returns false.
// @field Unknown +0x34 BYTE field_0x34 (bit 0x2 gates the forward)
// @field Unknown +0x38 void* field_0x38 (subobject whose vtable slot 0x74 is invoked)
bool fn_006FA9C0(void* self, DWORD arg) {
    const BYTE flags = lift_field<BYTE>(self, 0x34);
    if ((flags & 0x2) == 0) {
        return false;
    }
    void* sub = lift_field<void*>(self, 0x38);
    return ext_vcall_0x74(sub, arg);
}
} // namespace lift_006FA9C0

// [0x006FA990] sub_006FA990 (48 bytes)
namespace lift_006FA990 {
// @name Unknown::forwardArgIfFlagged
// @class Unknown
// @summary If bit 0 of the byte at +0x34 is set, forwards the first argument to the sub-object at +0x38 via vtable slot 0x74 and returns its bool result; otherwise returns false.
// @field Unknown +0x34 BYTE field_0x34
// @field Unknown +0x38 void* field_0x38

using FlaggedForwardFn = BOOL(__thiscall*)(void* self, DWORD arg);

BOOL fn_006FA990(void* self, DWORD arg, DWORD unused) {
    (void)unused;
    if ((lift_field<BYTE>(self, 0x34) & 0x01) == 0) {
        return FALSE;
    }
    void* sub = lift_field<void*>(self, 0x38);
    void* vtbl = lift_field<void*>(sub, 0);
    void* slot = lift_field<void*>(vtbl, 0x74);
    auto fn = reinterpret_cast<FlaggedForwardFn>(slot);
    return fn(sub, arg) ? TRUE : FALSE;
}
} // namespace lift_006FA990

// [0x006FB520] sub_006FB520 (48 bytes)
namespace lift_006FB520 {
// @name Unknown::loadPairViaPointer
// @class Unknown
// @summary Copies an 8-byte pair into self; field +4 is the source's pointer, field +0 is the value it points to (zeroed if source is null).
// @field Unknown +0x00 uint32_t field_0x00
// @field Unknown +0x04 uint32_t field_0x04


// Guest memory base; all 32-bit guest addresses are offsets from mem_.
extern uint8_t* mem_;

void fn_006FB520(uint32_t self, uint32_t src) {
    if (src == 0) {
        lift_field<uint32_t>(mem_, self + 0x0) = 0;
        lift_field<uint32_t>(mem_, self + 0x4) = 0;
        return;
    }
    uint32_t p = lift_field<uint32_t>(mem_, src + 0x4);
    lift_field<uint32_t>(mem_, self + 0x4) = p;
    lift_field<uint32_t>(mem_, self + 0x0) = lift_field<uint32_t>(mem_, p);
}
} // namespace lift_006FB520

// [0x006FA400] sub_006FA400 (48 bytes)
namespace lift_006FA400 {
// Known callee 0x006FA3B0: getField34Shifted27 (Reads the 32-bit signed integer at offset 0x34 and arithmetic-shifts it right by 27 bits.)
extern int32_t __thiscall ext_006FA3B0(void* self);
// Callee 0x006FA3C0 (32B): __thiscall, one int32 stack argument, callee-cleans.
extern void __thiscall ext_006FA3C0(void* self, int32_t arg);

// @name Unknown::decShiftedField34AndNotify
// @class Unknown
// @summary Computes (int32 at +0x34 >> 27) - 1, passes it to ext_006FA3C0; if that value is zero and bit 0x10000 of +0x34 is set, calls vtable slot 1 with 0.
// @field Unknown +0x34 int32_t field_0x34
void fn_006FA400(void* self) {
    const int32_t shifted = ext_006FA3B0(self);
    const uint32_t idx = static_cast<uint32_t>(shifted) - 1u;

    ext_006FA3C0(self, static_cast<int32_t>(idx));

    if (idx == 0 && (lift_field<uint32_t>(self, 0x34) & 0x10000u) != 0) {
        void** vtbl = lift_field<void**>(self, 0);
        auto notify = reinterpret_cast<void (__thiscall*)(void*, int32_t)>(vtbl[1]);
        notify(self, 0);
    }
}
} // namespace lift_006FA400

// [0x006F7910] sub_006F7910 (32 bytes)
namespace lift_006F7910 {
// Known callee 0x00712A20: sub_00712A20 (Returns constant 0x2.)
extern int32_t __cdecl ext_00712A20(void);
// Known callee 0x00711DA0: Subobject::setField28 (Stores value at +0x28 of the subobject at self+0x40.)
extern void __thiscall ext_00711DA0(void* self, uint32_t value);

// @name Unknown::setFieldFromConstant2
// @summary Calls sub_00712A20 to obtain the constant 2 and passes it to Subobject::setField28 on this; the caller's stack argument is unused.
extern void __thiscall fn_006F7910(void* self, uint32_t unused) {
    (void)unused;
    const int32_t value = ext_00712A20();
    ext_00711DA0(self, static_cast<uint32_t>(value));
}
} // namespace lift_006F7910

// [0x006F7950] sub_006F7950 (32 bytes)
namespace lift_006F7950 {
// Known callee 0x006D7E50: sub_006D7E50 (Returns constant 0x4; the pushed argument is ignored.)
extern int32_t __cdecl ext_006D7E50(uint32_t unused);
// Known callee 0x00711DA0: Subobject::setField28 (Resolves the subobject at self+0x40 via fn_0071E680 and stores the stack argument at its +0x28 field.)
extern void __thiscall ext_00711DA0(void* self, uint32_t value);

// @name setSubobjectField28FromConstant
// @class Unknown
// @summary Obtains the constant 4 from sub_006D7E50 and stores it into the field28 of the subobject at self+0x40 via Subobject::setField28.
extern void __thiscall fn_006F7950(void* self, uint32_t arg) {
    (void)arg; // Caller-pushed stack argument is never read; the callee cleans it up (ret 4).
    uint32_t value = static_cast<uint32_t>(ext_006D7E50(0u));
    ext_00711DA0(self, value);
}
} // namespace lift_006F7950

// [0x006FCF10] sub_006FCF10 (32 bytes)
namespace lift_006FCF10 {
// Known callee 0x006D2130: sub_006D2130 (Initializes a 20-byte struct with zeroed fields, a clamped minimum-1 count at +0x08, and arg2 at +0x0C, returning this.)
extern void ext_006D2130(void* self, int32_t arg1, uint32_t arg2);

// @name initWithArgAndSelfSubobject
// @class Unknown
// @summary Initializes the object via sub_006D2130 with arg1 and count 0x10, stores a pointer to self+0x10 at +0x14, and returns self.
// @field Unknown +0x14 void* field_0x14
void* fn_006FCF10(void* self, int32_t arg1) {
    ext_006D2130(self, arg1, 0x10);
    lift_field<void*>(self, 0x14) = static_cast<uint8_t*>(self) + 0x10;
    return self;
}
} // namespace lift_006FCF10

// [0x006FCF80] sub_006FCF80 (32 bytes)
namespace lift_006FCF80 {
// Known callee 0x006D2130: sub_006D2130 (Initializes a 20-byte struct with zeroed fields, a clamped minimum-1 count at +0x08, and arg2 at +0x0C, returning this.)
extern uint32_t ext_006D2130(void* self, int32_t arg1, uint32_t arg2);

// @name initWithInlineBuffer
// @class <unknown>
// @summary Initializes this as a 20-byte struct with count (clamped to >= 1) and element size 0x20, then points +0x14 at the inline storage at +0x10; returns this.
// @field <unknown> +0x14 uint32_t field_0x14
void* fn_006FCF80(void* self, int32_t count) {
    ext_006D2130(self, count, 0x20);
    lift_field<uint32_t>(self, 0x14) =
        static_cast<uint32_t>(reinterpret_cast<uintptr_t>(self) + 0x10);
    return self;
}
} // namespace lift_006FCF80

// [0x006FC610] sub_006FC610 (54 bytes)
namespace lift_006FC610 {
extern int mem_00B608B0;

// @name UnknownClass::MatchOtherWhenKeyAndFieldAgree
// @class UnknownClass
// @summary Returns true when `other` is non-null, its vtable slot +0x14 check accepts the global mem_00B608B0, and its +0x40 field equals this object's +0x40 field.
// @field UnknownClass +0x40 uint32_t field_0x40
bool __fastcall fn_006FC610(void* self, int edx_unused, void* other) {
    (void)edx_unused;
    if (other == nullptr) {
        return false;
    }
    using VirtualCheck = bool(__fastcall*)(void* self_, int edx_, int arg);
    void* vtable = lift_field<void*>(other, 0);
    auto check = reinterpret_cast<VirtualCheck>(lift_field<void*>(vtable, 0x14));
    if (!check(other, 0, mem_00B608B0)) {
        return false;
    }
    uint32_t other_field = lift_field<uint32_t>(other, 0x40);
    uint32_t self_field = lift_field<uint32_t>(self, 0x40);
    return other_field == self_field;
}
} // namespace lift_006FC610

// [0x006FC950] sub_006FC950 (55 bytes)
namespace lift_006FC950 {
// @name GetDwordByIndex
// @summary Returns the DWORD at this+0x04..+0x18 (step 4) selected by a 1-based index; returns 0 for index outside 1..6.
// @field Unknown +0x04 DWORD field_0x04
// @field Unknown +0x08 DWORD field_0x08
// @field Unknown +0x0C DWORD field_0x0C
// @field Unknown +0x10 DWORD field_0x10
// @field Unknown +0x14 DWORD field_0x14
// @field Unknown +0x18 DWORD field_0x18
DWORD fn_006FC950(void* self, DWORD index) {
    DWORD idx = index - 1;
    if (idx > 5) {
        return 0;
    }
    // Offset for index k (1..6) is 4 * k.
    return lift_field<DWORD>(self, static_cast<ptrdiff_t>(4 * (idx + 1)));
}
} // namespace lift_006FC950

// [0x006F95E0]
namespace lift_006F95E0 {
// @name isKnownGlobalId
// @summary Checks whether the given 32-bit value matches any of four global values.

extern uint32_t mem_00B5E240;
extern uint32_t mem_00B5F060;
extern uint32_t mem_00B5EB78;
extern uint32_t mem_00B5E400;

uint8_t __stdcall sub_006F95E0(uint32_t value) {
    if (value == mem_00B5E240) {
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
} // namespace lift_006F95E0

// [0x006FA370] sub_006FA370 (64 bytes)
namespace lift_006FA370 {
// Known callee 0x006FA3B0: getField34Shifted27 (Reads the 32-bit signed integer at offset 0x34 and arithmetic-shifts it right by 27 bits.)
extern int32_t ext_006FA3B0(uintptr_t self);
// Known callee 0x006FA3C0: sub_006FA3C0 (32B, thiscall with one stack argument; signature not yet identified.)
extern void ext_006FA3C0(uintptr_t self, int32_t arg);

// @name Unknown::SetFlag16IfGatedOrRelease
// @class Unknown
// @summary If getField34Shifted27(self) is nonzero, sets bit 0x10000 in the field at +0x34; otherwise calls ext_006FA3C0(self, 1) and then invokes two virtual methods on self's vtable (slot 0x10 with no args, slot 0x08 with arg 1).
// @field Unknown +0x34 int32_t field_0x34
void fn_006FA370(uintptr_t self) {
    if (ext_006FA3B0(self) != 0) {
        auto* flags = reinterpret_cast<int32_t*>(self + 0x34);
        *flags = static_cast<int32_t>(static_cast<uint32_t>(*flags) | 0x10000u);
        return;
    }

    ext_006FA3C0(self, 1);

    // Virtual dispatch through self's vtable (slot 0x10, then slot 0x08 with arg 1).
    auto** vtbl = *reinterpret_cast<void***>(self);
    using Slot10Fn = void (*)(uintptr_t);
    using Slot08Fn = void (*)(uintptr_t, int32_t);
    reinterpret_cast<Slot10Fn>(vtbl[0x10 / sizeof(void*)])(self);

    if (self != 0) {
        auto** vtbl2 = *reinterpret_cast<void***>(self);
        reinterpret_cast<Slot08Fn>(vtbl2[0x08 / sizeof(void*)])(self, 1);
    }
}
} // namespace lift_006FA370

// [0x006F8FB0] sub_006F8FB0 (64 bytes)
namespace lift_006F8FB0 {
// @name Unknown::CopyRecordIfActive
// @class Unknown
// @summary If index is in [0,44) and the record's leading dword is nonzero, copies that 9-byte record into dst (when dst is non-null) and returns true; otherwise returns false.
// @field Unknown +0x3BBC uint8_t[0x210] record_table
// @field Unknown +0x3BBC int32_t record_table_flag_0

// Callee: Unknown::copyAssign9 (lifted as ext_006F8B30).
void* ext_006F8B30(void* self, const void* src);

uint8_t fn_006F8FB0(void* self, int32_t index, void* dst) {
    constexpr int32_t kCount = 0x2C;
    constexpr ptrdiff_t kTableOffset = 0x3BBC;
    constexpr ptrdiff_t kStride = 12;

    if (index < 0 || index >= kCount) {
        return 0;
    }

    const ptrdiff_t recOffset = kTableOffset + kStride * static_cast<ptrdiff_t>(index);
    const int32_t flag = lift_field<int32_t>(self, recOffset);
    if (flag == 0) {
        return 0;
    }

    if (dst != nullptr) {
        ext_006F8B30(dst, static_cast<const uint8_t*>(self) + recOffset);
    }
    return 1;
}
} // namespace lift_006F8FB0

// [0x006F9E90] sub_006F9E90 (64 bytes)
namespace lift_006F9E90 {
// Known callee 0x006A5C62: thunk_MFC80_ord_762 (IAT jump thunk to MFC80!ord_762).
// Used as an allocator: cdecl, takes a byte count, returns a pointer or NULL.
extern void* ext_006A5C62(size_t cb);

// KERNEL32!InitializeCriticalSection, called via IAT slot mem_009241C0 (stdcall).
extern void ext_InitializeCriticalSection(void* lpCriticalSection);

// @name Unknown::EnsureCriticalSection
// @class Unknown
// @summary Lazily allocates and initializes a 0x18-byte CRITICAL_SECTION once, then sets the init flag.
// @field Unknown +0x1C void* criticalSection
// @field Unknown +0x20 uint8_t initialized
void fn_006F9E90(void* self) {
    if (lift_field<uint8_t>(self, 0x20) != 0) {
        return;
    }

    void* cs = ext_006A5C62(0x18);
    if (cs == nullptr) {
        lift_field<void*>(self, 0x1C) = nullptr;
        lift_field<uint8_t>(self, 0x20) = 1;
        return;
    }

    ext_InitializeCriticalSection(cs);
    lift_field<void*>(self, 0x1C) = cs;
    lift_field<uint8_t>(self, 0x20) = 1;
}
} // namespace lift_006F9E90

// [0x006FBD30] sub_006FBD30 (64 bytes)
namespace lift_006FBD30 {
// Callee 0x006FBC50 takes the receiver in ecx (thiscall) plus one stack argument.
extern DWORD ext_006FBC50(void* self, DWORD arg);

// @name Unknown::GetPayloadForSlotKey
// @class Unknown
// @summary Selects table entry (field_0x14 + index) of 12-byte records at field_0x10; if its record pointer is non-null and the record's first DWORD matches the entry's first DWORD, forwards the record's second DWORD to ext_006FBC50, otherwise forwards 0.
// @field Unknown +0x10 DWORD field_0x10
// @field Unknown +0x14 DWORD field_0x14
DWORD fn_006FBD30(void* self, DWORD index) {
    DWORD slot = lift_field<DWORD>(self, 0x14) + index;
    DWORD table = lift_field<DWORD>(self, 0x10);
    void* entry = reinterpret_cast<void*>(static_cast<uintptr_t>(table) + 12u * static_cast<uintptr_t>(slot));

    DWORD entryKey = lift_field<DWORD>(entry, 0);
    DWORD recAddr = lift_field<DWORD>(entry, 4);
    if (recAddr != 0) {
        void* rec = reinterpret_cast<void*>(static_cast<uintptr_t>(recAddr));
        if (lift_field<DWORD>(rec, 0) == entryKey) {
            return ext_006FBC50(self, lift_field<DWORD>(rec, 4));
        }
    }
    return ext_006FBC50(self, 0);
}
} // namespace lift_006FBD30

// [0x006FDF30] sub_006FDF30 (64 bytes)
namespace lift_006FDF30 {
// Known callee 0x006FC950: GetDwordByIndex (Returns the DWORD at this+0x04..+0x18 (step 4) selected by a 1-based index; returns 0 for index outside 1..6.)
extern DWORD ext_006FC950(void* self, DWORD index);

namespace {

template <typename T>
T load_at(const void* base, std::size_t off) {
    T value{};
    std::memcpy(&value, static_cast<const unsigned char*>(base) + off, sizeof(T));
    return value;
}

} // namespace

// @name Unknown::CountMatchingByIndex
// @class Unknown
// @summary Counts entries of the pointer array at +0x20 (length at +0x10) for which GetDwordByIndex(entry, index) is nonzero.
// @field Unknown +0x10 int32_t field_0x10
// @field Unknown +0x20 DWORD* field_0x20
DWORD fn_006FDF30(void* self, DWORD index) {
    const auto count = load_at<int32_t>(self, 0x10);
    DWORD matches = 0;

    for (int32_t i = 0; i < count; ++i) {
        const auto array = static_cast<uintptr_t>(load_at<DWORD>(self, 0x20));
        const auto entry = load_at<DWORD>(reinterpret_cast<const void*>(array),
                                          static_cast<std::size_t>(i) * sizeof(DWORD));
        if (ext_006FC950(reinterpret_cast<void*>(static_cast<uintptr_t>(entry)), index) != 0) {
            ++matches;
        }
    }

    return matches;
}
} // namespace lift_006FDF30

// [0x006FEFB0] sub_006FEFB0 (64 bytes)
namespace lift_006FEFB0 {
// String literal at .rdata 0x00AAB928; compared against the first two characters of the input.
extern const char mem_00AAB928[];

// @name IsEligibleNameWithoutColonOrPrefix
// @summary Returns true when the string is non-null, contains no ':' character, and does not start with the 2-character prefix at mem_00AAB928.
// @field none (function takes no object pointer; no member fields accessed)
bool fn_006FEFB0(const char* name) {
    if (name == nullptr) {
        return false;
    }
    if (std::strrchr(name, ':') != nullptr) {
        return false;
    }
    return std::strncmp(name, mem_00AAB928, 2) != 0;
}
} // namespace lift_006FEFB0

// [0x006F87F0] sub_006F87F0 (74 bytes)
namespace lift_006F87F0 {
// @name sub_006F87F0
// @summary Auto-lifted identical-shape clone of 0x006BBA40 (fn_006BBA40 (copyHugeDoubleToGlobals)).
namespace lift_006BBA40 {
extern uint32_t mem_00B5E298;
extern uint32_t mem_00B5E29C;
extern uint32_t mem_00B5E2A0;
extern uint32_t mem_00B5E2A4;
extern uint32_t mem_00B5E2A8;
extern uint32_t mem_00B5E2AC;
extern uint32_t mem_00B5E2B0;
extern uint32_t mem_00B5E2B4;
extern uint32_t mem_00925284;

// @name fn_006F87F0 (copyHugeDoubleToGlobals)
// @summary Copies the 8-byte double pointed to by the _HUGE pointer into four consecutive 8-byte globals.
void fn_006BBA40(void) {
    // mem_00925284 holds the address of _HUGE (a double); read its two 32-bit halves.
    const auto* src = reinterpret_cast<const uint32_t*>(static_cast<uintptr_t>(mem_00925284));
    const uint32_t lo = src[0];
    const uint32_t hi = src[1];

    mem_00B5E298 = lo;
    mem_00B5E29C = hi;
    mem_00B5E2A0 = lo;
    mem_00B5E2A4 = hi;
    mem_00B5E2A8 = lo;
    mem_00B5E2AC = hi;
    mem_00B5E2B0 = lo;
    mem_00B5E2B4 = hi;
}
} // namespace lift_006BBA40
} // namespace lift_006F87F0

// [0x006FD120] sub_006FD120 (74 bytes)
namespace lift_006FD120 {
// @name sub_006FD120
// @summary Auto-lifted identical-shape clone of 0x006BBA40 (fn_006BBA40 (copyHugeDoubleToGlobals)).
namespace lift_006BBA40 {
extern uint32_t mem_00B5E480;
extern uint32_t mem_00B5E484;
extern uint32_t mem_00B5E488;
extern uint32_t mem_00B5E48C;
extern uint32_t mem_00B5E490;
extern uint32_t mem_00B5E494;
extern uint32_t mem_00B5E498;
extern uint32_t mem_00B5E49C;
extern uint32_t mem_00925284;

// @name fn_006FD120 (copyHugeDoubleToGlobals)
// @summary Copies the 8-byte double pointed to by the _HUGE pointer into four consecutive 8-byte globals.
void fn_006BBA40(void) {
    // mem_00925284 holds the address of _HUGE (a double); read its two 32-bit halves.
    const auto* src = reinterpret_cast<const uint32_t*>(static_cast<uintptr_t>(mem_00925284));
    const uint32_t lo = src[0];
    const uint32_t hi = src[1];

    mem_00B5E480 = lo;
    mem_00B5E484 = hi;
    mem_00B5E488 = lo;
    mem_00B5E48C = hi;
    mem_00B5E490 = lo;
    mem_00B5E494 = hi;
    mem_00B5E498 = lo;
    mem_00B5E49C = hi;
}
} // namespace lift_006BBA40
} // namespace lift_006FD120

// [0x006FFF20] sub_006FFF20 (74 bytes)
namespace lift_006FFF20 {
// @name sub_006FFF20
// @summary Auto-lifted identical-shape clone of 0x006BBA40 (fn_006BBA40 (copyHugeDoubleToGlobals)).
namespace lift_006BBA40 {
extern uint32_t mem_00B5E618;
extern uint32_t mem_00B5E61C;
extern uint32_t mem_00B5E620;
extern uint32_t mem_00B5E624;
extern uint32_t mem_00B5E628;
extern uint32_t mem_00B5E62C;
extern uint32_t mem_00B5E630;
extern uint32_t mem_00B5E634;
extern uint32_t mem_00925284;

// @name fn_006FFF20 (copyHugeDoubleToGlobals)
// @summary Copies the 8-byte double pointed to by the _HUGE pointer into four consecutive 8-byte globals.
void fn_006BBA40(void) {
    // mem_00925284 holds the address of _HUGE (a double); read its two 32-bit halves.
    const auto* src = reinterpret_cast<const uint32_t*>(static_cast<uintptr_t>(mem_00925284));
    const uint32_t lo = src[0];
    const uint32_t hi = src[1];

    mem_00B5E618 = lo;
    mem_00B5E61C = hi;
    mem_00B5E620 = lo;
    mem_00B5E624 = hi;
    mem_00B5E628 = lo;
    mem_00B5E62C = hi;
    mem_00B5E630 = lo;
    mem_00B5E634 = hi;
}
} // namespace lift_006BBA40
} // namespace lift_006FFF20

// [0x006F7970]
namespace lift_006F7970 {
// @name sub_006F7970
// @summary Dispatches vtable+0x8C with &arg0 and three zero arguments.
// @field Self +0x00 uint32_t* vtable


int32_t __thiscall sub_006F7970(void* self, uint32_t arg0, uint32_t arg1) {
    (void)arg1;
    auto* vtable = *reinterpret_cast<uintptr_t* const*>(self);
    using VCallFn = int32_t(__thiscall*)(void*, uint32_t*, uint32_t, uint32_t, uint32_t);
    auto fn = reinterpret_cast<VCallFn>(vtable[0x8C / 4]);
    return fn(self, &arg0, 0, 0, 0);
}
} // namespace lift_006F7970

// [0x006FC8E0] sub_006FC8E0 (80 bytes)
namespace lift_006FC8E0 {
// Known callee 0x006D2160: sub_006D2160 (Pure jump thunk forwarding to sub_006D2250.)
// Thiscall receiver is passed as the first argument in this portable form.
extern void ext_006D2160(void* self);

// @name CleanupSubobjects_006FC8E0
// @class <unknown>
// @summary Releases two embedded subobjects at this+0x20 and this+0x08 via ext_006D2160, in that order.
// @field <unknown> +0x08 void field_0x08
// @field <unknown> +0x20 void field_0x20
void fn_006FC8E0(void* self) {
    // The original SEH frame (fs:[0] push/restore) only guards the two calls;
    // it has no portable equivalent and no observable effect here.
    ext_006D2160(static_cast<uint8_t*>(self) + 0x20);
    ext_006D2160(static_cast<uint8_t*>(self) + 0x08);
}
} // namespace lift_006FC8E0

// [0x006FDFC0] sub_006FDFC0 (80 bytes)
namespace lift_006FDFC0 {
namespace lift_006FDFC0 {
// Known callee 0x006FC950: GetDwordByIndex (Returns the DWORD at this+0x04..+0x18 (step 4) selected by a 1-based index; returns 0 for index outside 1..6.)
extern DWORD ext_006FC950(void* self, DWORD index);

namespace {

template <typename T>
T load_at(const void* base, std::size_t off) {
    T value{};
    std::memcpy(&value, static_cast<const unsigned char*>(base) + off, sizeof(T));
    return value;
}

} // namespace

// @name Unknown::FindNthMatchingIndex
// @class Unknown
// @summary Returns the index of the ordinal-th (0-based) entry in the pointer array at +0x20 (length at +0x10) whose GetDwordByIndex(entry, index) is nonzero, or -1 if there is no such entry.
// @field Unknown +0x10 int32_t field_0x10
// @field Unknown +0x20 DWORD field_0x20
int32_t fn_006FDFC0(void* self, DWORD ordinal, DWORD index) {
    const auto count = load_at<int32_t>(self, 0x10);
    DWORD matches = 0;

    for (int32_t i = 0; i < count; ++i) {
        const auto array = static_cast<uintptr_t>(load_at<DWORD>(self, 0x20));
        const auto entry = load_at<DWORD>(reinterpret_cast<const void*>(array),
                                          static_cast<std::size_t>(i) * sizeof(DWORD));
        if (ext_006FC950(reinterpret_cast<void*>(static_cast<uintptr_t>(entry)), index) != 0) {
            if (matches == ordinal) {
                return i;
            }
            ++matches;
        }
    }

    return -1;
}
} // namespace lift_006FDFC0
} // namespace lift_006FDFC0

// [0x006FC200] sub_006FC200 (80 bytes)
namespace lift_006FC200 {
// @name FindRecordMatchingKey
// @summary Scans a 12-byte record array backwards from the last entry and returns true if a record's first two dwords match the key pair derived from the argument.
// @class (none; object type not recovered)
// @field Unknown +0x10 void* records
// @field Unknown +0x14 int32_t count
extern bool __fastcall fn_006FC200(void* self, int edx_unused, void* key) {
    (void)edx_unused;

    const auto* obj = static_cast<const uint8_t*>(self);
    const auto load32 = [](const void* p) -> uint32_t {
        uint32_t v;
        std::memcpy(&v, p, sizeof(v));
        return v;
    };

    const uintptr_t records = static_cast<uintptr_t>(load32(obj + 0x10));
    int32_t index = static_cast<int32_t>(load32(obj + 0x14)) - 1;

    // Key pair: second dword = key->link, first dword = *key->link (both 0 when key is null).
    uint32_t wantFirst = 0;
    uint32_t wantSecond = 0;
    if (key != nullptr) {
        wantSecond = load32(static_cast<const uint8_t*>(key) + 4);
        wantFirst = load32(reinterpret_cast<const void*>(static_cast<uintptr_t>(wantSecond)));
    }

    for (; index >= 0; --index) {
        const uint8_t* rec = reinterpret_cast<const uint8_t*>(records) + static_cast<size_t>(index) * 12u;
        if (load32(rec) == wantFirst && load32(rec + 4) == wantSecond) {
            return true;
        }
    }
    return false;
}
} // namespace lift_006FC200

// [0x006FDF90] sub_006FDF90 (48 bytes)
namespace lift_006FDF90 {
extern int ext_006FDFC0(void* self, std::uint32_t ordinal, std::uint32_t index);

// @name Unknown::FindNthMatchingEntry
// @class Unknown
// @summary Returns the entry at the ordinal-th match in the pointer array at +0x20, or 0 if no match exists.
// @field Unknown +0x20 std::uint32_t* entries
std::uint32_t fn_006FDF90(void* self, std::uint32_t ordinal, std::uint32_t index) {
    // Find the index of the ordinal-th matching entry (-1 if none).
    const int found = ext_006FDFC0(self, ordinal, index);
    if (found < 0) {
        return 0;
    }
    // Fetch the entry at that index from the pointer array stored at +0x20.
    auto* entries = *reinterpret_cast<std::uint32_t**>(static_cast<unsigned char*>(self) + 0x20);
    return entries[found];
}
} // namespace lift_006FDF90

// [0x006FA460] sub_006FA460 (64 bytes)
namespace lift_006FA460 {
// Known callee 0x006D2200: DynamicArray::removeAt (Removes the element at the given index by shifting subsequent elements left and decrementing the count.)
extern void ext_006D2200(void* self, int32_t index);

// @name Unknown::RemoveFirstMatch
// @class Unknown
// @summary Scans the int32 DynamicArray embedded at +0x1C for the given value and removes the first match.
// @field Unknown +0x1C int32_t elementCount
// @field Unknown +0x2C int32_t* elements
void fn_006FA460(void* self, int32_t value) {
    auto* array = static_cast<uint8_t*>(self) + 0x1C;
    int32_t count = *reinterpret_cast<int32_t*>(array + 0x00);
    if (count <= 0) {
        return;
    }
    int32_t* elements = *reinterpret_cast<int32_t**>(array + 0x10);
    for (int32_t index = 0; index < count; ++index) {
        if (elements[index] == value) {
            ext_006D2200(array, index);
            return;
        }
    }
}
} // namespace lift_006FA460

// [0x006F7560]
namespace lift_006F7560 {
uint32_t mem_read32(uint32_t addr);

// @name getValidatedTarget
// @summary Returns field_0x19c if its virtual type (vtable +0x8) matches field_0x198 (0->6 or 1->8 and != this), else 0
// @field Self +0x198 uint32_t field_0x198
// @field Self +0x19c uint32_t field_0x19c
uint32_t __thiscall sub_006F7560(uint32_t self) {
    uint32_t target = mem_read32(self + 0x19C);
    if (target == 0) {
        return 0;
    }

    uint32_t mode = mem_read32(self + 0x198);
    if (mode == 0) {
        uint32_t vtable = mem_read32(target);
        auto fn = reinterpret_cast<uint32_t(__thiscall*)(uint32_t)>(mem_read32(vtable + 0x8));
        if (fn(target) == 6) {
            return mem_read32(self + 0x19C);
        }
    }

    if (mem_read32(self + 0x198) == 1) {
        uint32_t ecx = mem_read32(self + 0x19C);
        uint32_t vtable = mem_read32(ecx);
        auto fn = reinterpret_cast<uint32_t(__thiscall*)(uint32_t)>(mem_read32(vtable + 0x8));
        if (fn(ecx) == 8) {
            uint32_t res = mem_read32(self + 0x19C);
            if (res != self) {
                return res;
            }
        }
    }

    return 0;
}
} // namespace lift_006F7560

// [0x006FA830]
namespace lift_006FA830 {
// @name Unknown::removeEntriesAndReleaseFlagged
// @class Unknown
// @summary Walks the pointer DynamicArray at +0x2C backwards (count from +0x1C), removing each element from the array via fn_006FA460 and calling its vtable slot 1 with 0 when its flag bit 0x10 (at +0x34) is set.
// @field Unknown +0x1C int32_t field_0x1C
// @field Unknown +0x2C void* field_0x2C
// @field Element +0x34 uint32_t field_0x34

extern void ext_006FA460(void* self, int32_t value);

extern void fn_006FA830(void* ecx) {
    int32_t i = lift_field<int32_t>(ecx, 0x1C) - 1;
    while (i >= 0) {
        // The array is re-read on every iteration because ext_006FA460 may modify it.
        void** data = lift_field<void**>(ecx, 0x2C);
        void* element = data[i];

        ext_006FA460(ecx, static_cast<int32_t>(reinterpret_cast<intptr_t>(element)));

        uint32_t flags = lift_field<uint32_t>(element, 0x34);
        if ((flags & 0x10u) == 0x10u) {
            void** vtable = *reinterpret_cast<void***>(element);
            auto slot1 = reinterpret_cast<void (*)(void*, int32_t)>(vtable[1]);
            slot1(element, 0);
        }

        --i;
    }
}
} // namespace lift_006FA830

// [0x006F7850]
namespace lift_006F7850 {
// @name findTableEntry_006F7850
// @summary Searches a 12-row lookup table via ext_006F7700/ext_006F7710 for a matching 32-bit value and outputs its row and column indices.


extern uint32_t ext_006F7700(uint32_t index);
extern uint32_t ext_006F7710(uint32_t row, uint32_t col);

bool sub_006F7850(uint32_t target, int32_t* outRow, int32_t* outCol) {
    for (int32_t row = 0; row < 12; ++row) {
        int32_t count = static_cast<int32_t>(ext_006F7700(static_cast<uint32_t>(row)));
        for (int32_t col = 0; col < count; ++col) {
            if (ext_006F7710(static_cast<uint32_t>(row), static_cast<uint32_t>(col)) == target) {
                *outRow = row;
                *outCol = col;
                return true;
            }
        }
    }
    return false;
}
} // namespace lift_006F7850

// [0x006F8A70]
namespace lift_006F8A70 {
// @name Unknown::InitMemberAndSelf
// @class Unknown
// @summary Initializes a subobject at +0x4 via ext_006B9D10, initializes this via ext_006F8AC0, and returns this.
// @field Unknown +0x04 uint8_t field_0x04


extern void* ext_006B9D10(void* ecx);
extern void* ext_006F8AC0(void* ecx);

void* fn_006F8A70(void* ecx) {
    ext_006B9D10(static_cast<uint8_t*>(ecx) + 4);
    ext_006F8AC0(ecx);
    return ecx;
}
} // namespace lift_006F8A70

// [0x006F8700]
namespace lift_006F8700 {
// @name initPositiveHuge
// @summary Initializes global double at 0x00B5E260/0x00B5E264 from MSVCR80!_HUGE pointer at 0x00925284


extern uint32_t mem_00925284;
extern uint32_t mem_00B5E260;
extern uint32_t mem_00B5E264;

void sub_006F8700() {
    uint32_t eax = mem_00925284;
    uint32_t ecx = *reinterpret_cast<const uint32_t*>(static_cast<uintptr_t>(eax));
    uint32_t edx = *reinterpret_cast<const uint32_t*>(static_cast<uintptr_t>(eax + 4));
    mem_00B5E260 = ecx;
    mem_00B5E264 = edx;
}
} // namespace lift_006F8700

// [0x006F9080]
namespace lift_006F9080 {
// @name getTableEntryIfNonZero
// @summary Looks up a 14-column table entry at +0x3DCC by (row, col) and writes it out if non-zero.
// @field Self +0x3DCC uint32_t[44][14] field_0x3DCC

bool __thiscall sub_006F9080(void* self, int32_t row, uint32_t* outValue, int32_t col) {
    if (row < 0 || row >= 0x2c) {
        return false;
    }
    if (col < 1 || col >= 0xf) {
        return false;
    }
    int32_t index = row * 14 + (col - 1);
    uint32_t value = *reinterpret_cast<const uint32_t*>(
        reinterpret_cast<const uint8_t*>(self) + 0x3dcc + index * 4);
    if (value == 0) {
        return false;
    }
    if (outValue != nullptr) {
        *outValue = value;
    }
    return true;
}
} // namespace lift_006F9080

// [0x006FA9F0]
namespace lift_006FA9F0 {
// @name sub_006FA9F0
// @summary Checks flag at +0x34, delegates to +0x38->vtable[0x74](arg0), then calls this->vtable[0x40](0, 0, this, -1, arg0, arg1, 0)
// @field unknown +0x00 uint32_t vtable
// @field unknown +0x34 uint8_t field_0x34
// @field unknown +0x38 uint32_t field_0x38


uint8_t __thiscall sub_006FA9F0(void* self, uint32_t arg0, uint32_t arg1) {
    const auto* base = static_cast<const uint8_t*>(self);
    if ((base[0x34] & 0x1) == 0) {
        return 0;
    }

    uintptr_t obj = *reinterpret_cast<const uint32_t*>(base + 0x38);
    uintptr_t obj_vtable = *reinterpret_cast<const uint32_t*>(obj);
    using vfn_74_t = uint8_t(__thiscall*)(uintptr_t, uint32_t);
    auto vfn_74 = reinterpret_cast<vfn_74_t>(
        static_cast<uintptr_t>(*reinterpret_cast<const uint32_t*>(obj_vtable + 0x74)));
    if (vfn_74(obj, arg0) == 0) {
        return 0;
    }

    uintptr_t self_vtable = *reinterpret_cast<const uint32_t*>(base);
    using vfn_40_t = uint8_t(__thiscall*)(void*, uint32_t, uint32_t, void*, int32_t, uint32_t, uint32_t, uint32_t);
    auto vfn_40 = reinterpret_cast<vfn_40_t>(
        static_cast<uintptr_t>(*reinterpret_cast<const uint32_t*>(self_vtable + 0x40)));
    if (vfn_40(self, 0, 0, self, -1, arg0, arg1, 0) == 0) {
        return 0;
    }

    return 1;
}
} // namespace lift_006FA9F0

// [0x006FAA40]
namespace lift_006FAA40 {
extern uint8_t mem_read_u8(uint32_t addr);
extern uint32_t mem_read_u32(uint32_t addr);

// @name sub_006FAA40
// @summary Checks flag bit 1 at +0x34, queries vtable+0x74 on field_0x38, and dispatches vtable+0x40 on this.
// @field +0x00 uint32_t vtable
// @field +0x34 uint8_t field_0x34
// @field +0x38 uint32_t field_0x38
uint8_t __thiscall sub_006FAA40(uint32_t self, uint32_t arg1, uint32_t arg2) {
    if ((mem_read_u8(self + 0x34) & 0x2) == 0) {
        return 0;
    }

    uint32_t obj = mem_read_u32(self + 0x38);
    uint32_t obj_vtable = mem_read_u32(obj);
    using fn_v74_t = uint8_t(__thiscall*)(uint32_t, uint32_t);
    auto fn_v74 = reinterpret_cast<fn_v74_t>(static_cast<uintptr_t>(mem_read_u32(obj_vtable + 0x74)));
    if (fn_v74(obj, arg1) == 0) {
        return 0;
    }

    uint32_t self_vtable = mem_read_u32(self);
    using fn_v40_t = uint8_t(__thiscall*)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
    auto fn_v40 = reinterpret_cast<fn_v40_t>(static_cast<uintptr_t>(mem_read_u32(self_vtable + 0x40)));
    if (fn_v40(self, 0, 1, self, 0xFFFFFFFFu, arg1, arg2, 0) == 0) {
        return 0;
    }

    return 1;
}
} // namespace lift_006FAA40

// [0x006FB550]
namespace lift_006FB550 {
// @name findLastByKeyPair
// @summary Searches backwards through a 12-byte-strided array for an entry matching a two-dword key derived from arg0.
// @field Array +0x00 uint32_t data_ptr
// @field Array +0x04 int32_t start_index
// @field Array +0x08 int32_t count
// @field Target +0x04 uint32_t inner_ptr


extern uint32_t mem_r32(uintptr_t addr);

int32_t __thiscall sub_006FB550(uintptr_t this_ptr, uintptr_t arg0) {
    int32_t count = mem_r32(this_ptr + 0x8);
    int32_t start_index = mem_r32(this_ptr + 0x4);
    int32_t idx = count + start_index - 1;
    if (idx < start_index) {
        return -1;
    }

    uintptr_t base = mem_r32(this_ptr);
    uintptr_t elem = base + static_cast<uintptr_t>(idx) * 12u;

    uint32_t key0 = 0;
    uint32_t key1 = 0;
    if (arg0 != 0) {
        uintptr_t inner = mem_r32(arg0 + 0x4);
        key1 = static_cast<uint32_t>(inner);
        key0 = mem_r32(inner);
    }

    while (idx >= start_index) {
        if (key0 == mem_r32(elem) && key1 == mem_r32(elem + 0x4)) {
            return idx - start_index;
        }
        --idx;
        elem -= 12u;
    }

    return -1;
}
} // namespace lift_006FB550

// [0x006FBCE0]
namespace lift_006FBCE0 {
// @name cleanupInvalidEntries
// @summary Iterates backwards over a 12-byte entry array and invokes ext_006FBC50 on matching non-null sub-entries.
// @field Unknown +0x10 uint32_t field_0x10
// @field Unknown +0x14 int32_t field_0x14
// @field Unknown +0x18 int32_t field_0x18


extern uint32_t mem_read32(uint32_t addr);
extern void __thiscall ext_006FBC50(uint32_t self, uint32_t arg1);

extern void __thiscall sub_006FBCE0(uint32_t self) {
    int32_t idx = static_cast<int32_t>(mem_read32(self + 0x18)) - 1;
    if (idx < 0) {
        return;
    }

    do {
        uint32_t base_offset = mem_read32(self + 0x14);
        uint32_t array_ptr = mem_read32(self + 0x10);
        uint32_t entry_addr = array_ptr + (base_offset + static_cast<uint32_t>(idx)) * 12;

        uint32_t obj_ptr = mem_read32(entry_addr + 0x4);
        if (obj_ptr != 0) {
            if (mem_read32(obj_ptr) == mem_read32(entry_addr)) {
                uint32_t sub_val = mem_read32(obj_ptr + 0x4);
                if (sub_val != 0) {
                    ext_006FBC50(self, sub_val);
                }
            }
        }

        int32_t count = static_cast<int32_t>(mem_read32(self + 0x18));
        if (idx > count) {
            idx = count - 1;
        } else {
            idx -= 1;
        }
    } while (idx >= 0);
}
} // namespace lift_006FBCE0

// [0x006F78A0] sub_006F78A0 (83 bytes)
namespace lift_006F78A0 {
extern bool ext_006F7850(uint32_t target, int32_t* outRow, int32_t* outCol);
extern uint32_t ext_006F7730(int32_t row, int32_t col);

// @name lookupTableValue_006F78A0
// @summary Looks up target in the 12-row table; on hit stores ext_006F7730(row, col) to *out and returns true; otherwise if target == 0x43 stores 0x00AAB3E0 to *out and returns true, else false.
bool fn_006F78A0(uint32_t target, uint32_t* out) {
    int32_t row = 0;
    int32_t col = 0;
    if (ext_006F7850(target, &row, &col)) {
        *out = ext_006F7730(row, col);
        return true;
    }
    if (target == 0x43u) {
        *out = 0x00AAB3E0u;
        return true;
    }
    return false;
}
} // namespace lift_006F78A0

// [0x006F99B0] sub_006F99B0 (83 bytes)
namespace lift_006F99B0 {
extern void* __fastcall fn_0071E680(void* self);

// @name Unknown::SetOrForwardValue
// @class Unknown
// @summary Invokes vtable slot 0x38 on self, then either forwards *a1 through the object at self+0x08 (when self+0x54 is set) or stores *a1 into self+0x80, then invokes vtable slot 0x38 again with code 0x15.
// @field Unknown +0x00 void** vtable
// @field Unknown +0x08 void* forwardTarget
// @field Unknown +0x54 void* forwardSource
// @field Unknown +0x80 uint32_t storedValue

using VMethod6 = void (*)(void* self, uintptr_t a, uintptr_t b, uintptr_t c, uintptr_t d, uintptr_t e, uintptr_t f);
using VMethod1 = void (*)(void* self, uint32_t value);

// Fetch the function pointer at vtable slot `index` (byte offset index * 4) for obj.
template <typename Fn>
inline Fn vtableSlot(void* obj, size_t index) {
    void** vt = *static_cast<void***>(obj);
    return reinterpret_cast<Fn>(vt[index]);
}

void fn_006F99B0(void* self, void* a1, [[maybe_unused]] void* a2, [[maybe_unused]] void* a3, [[maybe_unused]] void* a4) {
    auto* src = static_cast<uint32_t*>(a1);

    // First virtual dispatch (vtable +0x38) with arguments (0, 0x14, this, a1, &this->storedValue, 0).
    vtableSlot<VMethod6>(self, 0x38 / 4)(self, 0, 0x14, reinterpret_cast<uintptr_t>(self),
                                         reinterpret_cast<uintptr_t>(a1),
                                         reinterpret_cast<uintptr_t>(&lift_field<uint32_t>(self, 0x80)), 0);

    void* forwardSource = lift_field<void*>(self, 0x54);
    if (forwardSource != nullptr) {
        void* target = lift_field<void*>(self, 0x08);
        void* sub = fn_0071E680(self);
        // Function pointer is read from the returned object at +0x14.
        auto fn = reinterpret_cast<VMethod1>(*reinterpret_cast<void**>(static_cast<uint8_t*>(sub) + 0x14));
        fn(target, *src);
    } else {
        lift_field<uint32_t>(self, 0x80) = *src;
    }

    // Second virtual dispatch (vtable +0x38) with arguments (0, 0x15, this, a1, 0, 0).
    vtableSlot<VMethod6>(self, 0x38 / 4)(self, 0, 0x15, reinterpret_cast<uintptr_t>(self),
                                         reinterpret_cast<uintptr_t>(a1), 0, 0);
}
} // namespace lift_006F99B0

// [0x006F9AA0] sub_006F9AA0 (96 bytes)
namespace lift_006F9AA0 {
// Known callee 0x006BAC20: sub_006BAC20_dtor (destructor; sets vtable to 0x009931C4, destroys subobject at +0x9C, base subobject at +0x04).
extern void ext_006BAC20(void* self);

// @name sub_006F9AA0_dtor
// @summary Destructor body: sets vtable, calls virtual slot 0x70 on the member at +0xB4 with (+0xB8, 1), then runs the base destructor.
// @field sub_006F9AA0_dtor +0x00 void* vptr
// @field sub_006F9AA0_dtor +0xB4 void* field_0xB4
// @field sub_006F9AA0_dtor +0xB8 uint32_t field_0xB8
void fn_006F9AA0(void* self) {
    auto* obj = static_cast<uint8_t*>(self);

    // Set this object's vtable to 0x00994FE0.
    *reinterpret_cast<uintptr_t*>(obj) = static_cast<uintptr_t>(0x00994FE0u);

    // Call virtual slot 0x70 on the member at +0xB4, passing (+0xB8, 1).
    void* member = *reinterpret_cast<void**>(obj + 0xB4);
    uint32_t arg = *reinterpret_cast<uint32_t*>(obj + 0xB8);
    void** member_vtbl = *reinterpret_cast<void***>(member);
    auto slot = *reinterpret_cast<void (**)(void*, uint32_t, int32_t)>(
        reinterpret_cast<uint8_t*>(member_vtbl) + 0x70);
    slot(member, arg, 1);

    // Chain to the base destructor.
    ext_006BAC20(self);
}
} // namespace lift_006F9AA0
