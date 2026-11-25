// Lifted C++ translation unit: lifted/leaf/decompiled_6A0000.cpp
#include "lift_compat.h"
#include <cstdint>

// [0x006AD0A0] sub_006AD0A0 (17 bytes)
namespace lift_006AD0A0 {
// Known callee 0x006AD950: fn_006AD950 (Increments the 32-bit counter at offset +0x38 of the object passed in ecx.)
extern void ext_006AD950(void* self);

// @name UnknownObject::setField44
// @class UnknownObject
// @summary Stores its argument at offset +0x44 of this, then calls fn_006AD950 with that argument as its object pointer.
// @field UnknownObject +0x44 uint32_t field_0x44
void fn_006AD0A0(void* self, uint32_t value) {
    auto* base = static_cast<unsigned char*>(self);
    *reinterpret_cast<uint32_t*>(base + 0x44) = value;
    ext_006AD950(reinterpret_cast<void*>(static_cast<uintptr_t>(value)));
}
} // namespace lift_006AD0A0

// [0x006AD150] sub_006AD150 (21 bytes)
namespace lift_006AD150 {
// Known callee 0x006ACFD0: getField0x1COrZero (Returns the 32-bit field at offset 0x1C if the object pointer is non-null, otherwise 0.)
extern uint32_t __thiscall ext_006ACFD0(uint32_t self);

// @name ChainLengthViaField1C
// @summary Counts how many links are in a chain by following the 32-bit field at offset 0x1C from self until it reads as zero; returns that count (0 if self's field is already zero).
// @field Object +0x1C uint32_t field_0x1C
uint32_t fn_006AD150(uint32_t self) {
    uint32_t count = 0;
    uint32_t cur = self;
    for (;;) {
        const uint32_t next = ext_006ACFD0(cur);
        if (next == 0) {
            return count;
        }
        count += 1;
        cur = next;
    }
}
} // namespace lift_006AD150

// [0x006ACFE0] sub_006ACFE0 (22 bytes)
namespace lift_006ACFE0 {
// Callee takes its single argument in ecx and returns the result in eax.
extern DWORD ext_006A7D50(DWORD arg);

// @name SetFieldAndStoreCallResult
// @class Unknown
// @summary Stores the stack argument at +0x14, calls ext_006A7D50 with it, and stores the result at +0x48.
// @field Unknown +0x14 DWORD field_0x14
// @field Unknown +0x48 DWORD field_0x48
void fn_006ACFE0(void* self, DWORD arg) {
    lift_field<DWORD>(self, 0x14) = arg;
    DWORD result = ext_006A7D50(arg);
    lift_field<DWORD>(self, 0x48) = result;
}
} // namespace lift_006ACFE0

// [0x006A9340]
namespace lift_006A9340 {
// @name Unknown::ForwardField0xA4AndArg
// @class Unknown
// @summary Forwards this+0x9C as the thiscall receiver, this->field_0xA4 and arg1 to ext_006A6796 and returns its result.
// @field Unknown +0xA4 uint32_t field_0xA4

namespace lift_006A9340 {

// IAT thunk to MFC80!ord_5714. Receiver in ecx, then two stack args
// (pushed as eax then edx, so the first stack param is edx).
extern uint32_t __thiscall ext_006A6796(void* self, uint32_t field_a4, uint32_t arg1);

uint32_t __thiscall sub_006A9340(void* self, uint32_t arg1) {
    uint32_t field_a4 = lift_field<uint32_t>(self, 0xA4);
    return ext_006A6796(static_cast<uint8_t*>(self) + 0x9C, field_a4, arg1);
}

} // namespace lift_006A9340
} // namespace lift_006A9340

// [0x006AD130] sub_006AD130 (29 bytes)
namespace lift_006AD130 {
// Known callee 0x006ACFD0: getField0x1COrZero (Returns the 32-bit field at offset 0x1C if the object pointer is non-null, otherwise 0.)
extern void ext_006ACFD0();

// @name walkChainFindTarget
// @summary Follows the 0x1C link chain from self (via getField0x1COrZero) and returns 1 if target is found in it, else 0 (also 1 when the chain ends at target == 0).
// @field (none: this function reads no offsets directly; the 0x1C read happens inside ext_006ACFD0)
uint32_t fn_006AD130(void* self, uint32_t target) {
    using GetField1C = uint32_t (*)(void*);
    auto getField1C = reinterpret_cast<GetField1C>(ext_006ACFD0);

    void* cur = self;
    uint32_t next = 0;
    for (;;) {
        next = getField1C(cur);
        if (next == 0 || next == target) {
            break;
        }
        cur = reinterpret_cast<void*>(static_cast<uintptr_t>(next));
    }
    return target == next ? 1u : 0u;
}
} // namespace lift_006AD130

// [0x006AD010] sub_006AD010 (33 bytes)
namespace lift_006AD010 {
// @name sub_006AD010
// @summary Auto-lifted identical-shape clone of 0x0040A910 (sub_00407830).
namespace lift_0040A910 {
// Imported MFC80 ordinal 297 (thiscall: self = first arg, then 2 stack args), via indirect slot.
extern void (*mem_00924494)(void* self, void* subobject, int flags);

// @name Unknown::forwardSubobject68ThenMfcOrd297
// @class Unknown
// @summary Calls MFC80 ordinal 297 on the argument with (this+0x68, 0) and returns the argument.
// @field Unknown +0x68 void* subobject
void* fn_006AD010(void* self, void* arg1) {
    void* subobject = reinterpret_cast<uint8_t*>(self) + 0x8;
    mem_00924494(arg1, subobject, 0);
    return arg1;
}
} // namespace lift_0040A910
} // namespace lift_006AD010

// [0x006A7A90]
namespace lift_006A7A90 {
// @name CheckEscapeOrTabHeld
// @summary Returns 0 if VK_ESCAPE or VK_TAB is currently held down, otherwise 4.
// @field none

extern uint32_t mem_009255F4;

namespace {
// GetKeyState returns SHORT; high bit set means the key is down.
using GetKeyStateFn = short (*)(int);
}

// [0x006A7A90]
int sub_006A7A90() {
    auto getKeyState = reinterpret_cast<GetKeyStateFn>(static_cast<uintptr_t>(mem_009255F4));
    if (getKeyState(0x1B) < 0) {   // VK_ESCAPE
        return 0;
    }
    if (getKeyState(0x09) < 0) {   // VK_TAB
        return 0;
    }
    return 4;
}
} // namespace lift_006A7A90

// [0x006A88A0]
namespace lift_006A88A0 {
// @name sub_006A88A0
// @class (none)
// @summary Calls ext_006A7C10 once; if nonzero, repeatedly calls ext_006A7C20 with each returned value (passing this) until it returns zero, and returns the number of successful iterations.

extern uint32_t ext_006A7C10(void* self);
extern uint32_t ext_006A7C20(void* self, uint32_t arg);

uint32_t sub_006A88A0(void* self) {
    uint32_t count = 0;
    uint32_t value = ext_006A7C10(self);
    if (value != 0) {
        do {
            count += 1;
            value = ext_006A7C20(self, value);
        } while (value != 0);
    }
    return count;
}
} // namespace lift_006A88A0

// [0x006AF8E0]
namespace lift_006AF8E0 {
// @name getArrayElement
// @summary Bounds-checked 32-bit array element accessor returning 0 when index >= limit
// @field this +0x54 uint32_t* field_0x54
// @field this +0x58 int32_t field_0x58


extern int32_t ext_006A7C10(void);
extern void ext_006A60EE(void);

uint32_t __thiscall fn_006AF8E0(uint8_t* self, int32_t index) {
    int32_t limit = ext_006A7C10();
    if (index >= limit) {
        return 0;
    }
    int32_t count = *reinterpret_cast<const int32_t*>(self + 0x58);
    if (index < 0 || index >= count) {
        ext_006A60EE();
        return 0;
    }
    uint32_t data = *reinterpret_cast<const uint32_t*>(self + 0x54);
    const uint32_t* arr = reinterpret_cast<const uint32_t*>(static_cast<uintptr_t>(data));
    return arr[index];
}
} // namespace lift_006AF8E0

// [0x006A04B0]
namespace lift_006A04B0 {
extern uint32_t mem_00924E90;
extern uint32_t mem_00924FA0;
extern uint32_t mem_00924E94;
extern uint32_t mem_00924E98;

// @name catchHandler_006A04B0
// @summary Exception catch handler that logs an error string at [ebp-0x14]+0xC to std::cout and returns continuation 0x006A049F.
uint32_t catchHandler_006A04B0(uintptr_t frame_ebp) {
    using OstreamStrFn = void* (__cdecl*)(void*, const void*);
    using OstreamEndlFn = void* (__thiscall*)(void*, void*);

    void* endl_fn = reinterpret_cast<void*>(static_cast<uintptr_t>(mem_00924E90));
    uint32_t obj_ptr = *reinterpret_cast<const uint32_t*>(frame_ebp - 0x14);
    const void* str_ptr = reinterpret_cast<const void*>(static_cast<uintptr_t>(obj_ptr + 0xC));
    void* cout_ptr = reinterpret_cast<void*>(static_cast<uintptr_t>(mem_00924FA0));

    auto op_lshift_str = reinterpret_cast<OstreamStrFn>(static_cast<uintptr_t>(mem_00924E94));
    void* os = op_lshift_str(cout_ptr, str_ptr);

    auto op_lshift_endl = reinterpret_cast<OstreamEndlFn>(static_cast<uintptr_t>(mem_00924E98));
    op_lshift_endl(os, endl_fn);

    return 0x006A049F;
}
} // namespace lift_006A04B0

// [0x006A0530]
namespace lift_006A0530 {
extern uint32_t mem_00924E90;
extern uint32_t mem_00924FA0;
extern uint32_t mem_00924E94;
extern uint32_t mem_00924E98;

// @name catch_006A0530
// @summary Catch handler funclet that prints exception message at [ebp-0x14]+0xc to std::cout and returns continuation address 0x006A051F
// @field ExceptionObj +0x0c std::string message
uint32_t sub_006A0530(uintptr_t ebp) {
    uint32_t obj = *reinterpret_cast<uint32_t*>(ebp - 0x14);
    uintptr_t msg_ptr = static_cast<uintptr_t>(obj) + 0xc;
    uintptr_t cout_ptr = static_cast<uintptr_t>(mem_00924FA0);
    uintptr_t endl_ptr = static_cast<uintptr_t>(mem_00924E90);

    using op_str_fn = uintptr_t (*)(uintptr_t, uintptr_t);
    using op_endl_fn = uintptr_t (*)(uintptr_t, uintptr_t);

    auto fn_str = reinterpret_cast<op_str_fn>(static_cast<uintptr_t>(mem_00924E94));
    auto fn_endl = reinterpret_cast<op_endl_fn>(static_cast<uintptr_t>(mem_00924E98));

    uintptr_t os = fn_str(cout_ptr, msg_ptr);
    fn_endl(os, endl_ptr);
    return 0x006A051F;
}
} // namespace lift_006A0530

// [0x006A8800] sub_006A8800 (54 bytes)
namespace lift_006A8800 {
// Callee 0x006B0C30: thiscall, ecx = object, one stack argument (callee pops 4).
extern void ext_006B0C30(void* self, uint32_t arg);
// Callee 0x00872754: thunk_MFC80_ord_869, thiscall, ecx = object, one stack argument; returns a pointer in eax.
extern void* ext_00872754(void* self, uint32_t arg);

// @name AllocIndexAndStoreObject
// @class Unknown
// @summary Takes the next index from the counter at +0x16C, passes the index to the object in arg2, then stores arg2 into the slot returned by the sub-object at +0xB0 for arg1.
// @field Unknown +0x16C uint32_t field_0x16c
// @field Unknown +0xB0 uint8_t field_0xb0 (embedded sub-object; its address is passed, not read)
void fn_006A8800(void* self, uint32_t arg1, uint32_t arg2) {
    uint32_t& counter = lift_field<uint32_t>(self, 0x16C);
    uint32_t index = counter;
    counter = index + 1;

    void* obj = reinterpret_cast<void*>(static_cast<uintptr_t>(arg2));
    ext_006B0C30(obj, index);

    void* sub = static_cast<uint8_t*>(self) + 0xB0;
    void* slot = ext_00872754(sub, arg1);
    lift_field<uint32_t>(slot, 0) = arg2;
}
} // namespace lift_006A8800

// [0x006A9360] sub_006A9360 (60 bytes)
namespace lift_006A9360 {
extern void __fastcall ext_006A8980(void* self);
// IAT slot holding USER32!IsChild.
extern void* mem_009256BC;
// IAT slot holding USER32!InvalidateRect.
extern void* mem_00925688;

using IsChildFn = BOOL(__stdcall*)(void* hWndParent, void* hWnd);
using InvalidateRectFn = BOOL(__stdcall*)(void* hWnd, const void* lpRect, BOOL bErase);

// @name UnknownWindowOwner::invalidateChildWindow
// @summary If the given window (arg's HWND at +0x20, or NULL) is not a child of this owner's HWND, run sub_006A8980 on this and invalidate the owner's whole window; always returns 0.
// @field UnknownWindowOwner +0x20 HWND field_0x20
int fn_006A9360(void* self, void* other, void* unused) {
    (void)unused;
    if (other == self) {
        return 0;
    }

    auto* base = static_cast<std::uint8_t*>(self);
    void* ownerHwnd = lift_field<void*>(base, 0x20);

    void* otherHwnd = nullptr;
    if (other != nullptr) {
        otherHwnd = lift_field<void*>(other, 0x20);
    }

    if (reinterpret_cast<IsChildFn>(mem_009256BC)(ownerHwnd, otherHwnd) != FALSE) {
        return 0;
    }

    ext_006A8980(self);
    reinterpret_cast<InvalidateRectFn>(mem_00925688)(ownerHwnd, nullptr, TRUE);
    return 0;
}
} // namespace lift_006A9360

// [0x006ACE40] sub_006ACE40 (67 bytes)
namespace lift_006ACE40 {
extern uint32_t ext_00626440(void* ecx, void* eax); // TransformRefNode::vfunc_6_off_4
extern uint32_t ext_006A7C40(void* ecx);            // sub_006A7C40

// @name Unknown::copyRecordRebased
// @class Unknown
// @summary Copies a 16-byte record from arg into out, rebases field 0 by (node query + 1) and sets field 2 to node query + rebased field 0; returns out.
// @field Unknown +0x14 void* field_0x14
void* fn_006ACE40(void* self, void* out, void* in) {
    uint8_t* o = reinterpret_cast<uint8_t*>(out);

    *reinterpret_cast<uint32_t*>(o + 0x0) = lift_field<uint32_t>(in, 0x0);
    *reinterpret_cast<uint32_t*>(o + 0x4) = lift_field<uint32_t>(in, 0x4);
    *reinterpret_cast<uint32_t*>(o + 0x8) = lift_field<uint32_t>(in, 0x8);
    *reinterpret_cast<uint32_t*>(o + 0xC) = lift_field<uint32_t>(in, 0xC);

    void* node = lift_field<void*>(self, 0x14);
    uint32_t r = ext_00626440(node, in);

    *reinterpret_cast<uint32_t*>(o + 0x0) += r + 1;

    uint32_t s = ext_006A7C40(node);
    *reinterpret_cast<uint32_t*>(o + 0x8) = s + *reinterpret_cast<uint32_t*>(o + 0x0);

    return out;
}
} // namespace lift_006ACE40
