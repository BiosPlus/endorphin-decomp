// Lifted C++ translation unit: lifted/leaf/decompiled_6F0000.cpp
#include "lift_compat.h"
extern "C" void __fastcall ext_006FD420(void* self);
extern "C" void __cdecl ext_006A5C5C(void* ptr);

// [0x006FD400] sub_006FD400 (32 bytes)
// @name sub_006FD400
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
