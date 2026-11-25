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

// [0x006ACF10] sub_006ACF10 (68 bytes)
namespace lift_006ACF10 {
// Known callee 0x00626440: TransformRefNode::vfunc_6_off_4 (called on the object at this+0x14; returns a 32-bit value in eax).
extern uint32_t ext_00626440(void* obj);
// Known callee 0x006A7C40: sub_006A7C40 (called on the object at this+0x14; returns a 32-bit value in eax).
extern uint32_t ext_006A7C40(void* obj);

// @name TransformRefNode::fillAdjustedRecord
// @class TransformRefNode
// @summary Writes a 16-byte result record to the caller-supplied return buffer: field0 = a2 + ext_00626440(obj) + ext_006A7C40(obj) + 2, field1..3 = a3, a4, a5 (a4 and a5 copied in the order stored); returns the buffer pointer.
// @field TransformRefNode +0x14 void* field_0x14
struct AdjustedRecord {
    uint32_t f0;
    uint32_t f4;
    uint32_t f8;
    uint32_t fc;
};

AdjustedRecord* fn_006ACF10(void* self, AdjustedRecord* out, uint32_t a2, uint32_t a3, uint32_t a4, uint32_t a5) {
    out->f0 = a2;
    out->f4 = a3;
    out->f8 = a4;
    out->fc = a5;

    uint32_t r1 = ext_00626440(lift_field<void*>(self, 0x14));
    uint32_t r2 = ext_006A7C40(lift_field<void*>(self, 0x14));
    out->f0 += r1 + r2 + 2;
    return out;
}
} // namespace lift_006ACF10

// [0x006A7FF0] sub_006A7FF0 (42 bytes)
namespace lift_006A7FF0 {
// Known callee 0x0041FD20: Unknown::GetOrLoadModule (Returns cached module handle at +0x4; otherwise resolves it by name via GetModuleHandleA, falling back to LoadLibraryA (sets +0x8 flag on load path).)
extern HMODULE ext_0041FD20(void* self);

// Known .rdata slot 0x009241D8: KERNEL32!GetProcAddress (IAT entry)
typedef void* (__stdcall *GetProcAddressFn)(HMODULE, LPCSTR);
extern GetProcAddressFn mem_009241D8;

// @name Unknown::GetOrResolveProcAddress
// @class Unknown
// @summary Returns the cached GetProcAddress result at +0x3C, resolving it from the loaded module (name at 0x00990980) on first use; result is written through out.
// @field Unknown +0x3C void* cachedProc
void fn_006A7FF0(void* self, void** out) {
    if (lift_field<void*>(self, 0x3C) == nullptr) {
        HMODULE mod = ext_0041FD20(self);
        LPCSTR procName = reinterpret_cast<LPCSTR>(static_cast<uintptr_t>(0x00990980u));
        lift_field<void*>(self, 0x3C) = mem_009241D8(mod, procName);
    }
    *out = lift_field<void*>(self, 0x3C);
}
} // namespace lift_006A7FF0

// [0x006AAC90] sub_006AAC90 (72 bytes)
namespace lift_006AAC90 {
// Known callee 0x006A663A: thunk_MFC80_ord_4888 (IAT jump thunk forwarding to MFC80!ord_4888.)
extern void __stdcall ext_006A663A(DWORD arg);
// Known callee 0x006AA920 (sub_006AA920, 233 bytes): thiscall, one pointer arg, callee-cleans.
extern void ext_006AA920(void* self, void* slot);
// Known callee 0x006AD0D0 (sub_006AD0D0, 4 bytes): thiscall, returns bool in al.
extern uint8_t ext_006AD0D0(void* self);
// USER32!InvalidateRect via IAT slot 0x00925688.
extern BOOL(__stdcall* mem_00925688)(HWND, const RECT*, BOOL);

// @name Unknown::UpdateValueAndInvalidate
// @class Unknown
// @summary Notifies the thunk, then invalidates the window if the value changed and a sub-object is set.
// @field Unknown +0x20 HWND field_0x20
// @field Unknown +0x54 void* field_0x54
// @field Unknown +0x100 DWORD field_0x100
void fn_006AAC90(void* self, DWORD arg) {
    ext_006A663A(arg);

    if (arg == lift_field<DWORD>(self, 0x100) && arg != 0) {
        return;
    }

    HWND hwnd = lift_field<HWND>(self, 0x20);
    mem_00925688(hwnd, nullptr, TRUE);

    void* sub = lift_field<void*>(self, 0x54);
    if (sub == nullptr) {
        return;
    }
    if (ext_006AD0D0(sub) != 0) {
        return;
    }
    ext_006AA920(self, static_cast<uint8_t*>(self) + 0x54);
}
} // namespace lift_006AAC90

// [0x006ACE90] sub_006ACE90 (74 bytes)
namespace lift_006ACE90 {
extern int mem_0092563C;

// @name BuildMetricInsetRect_006ACE90
// @summary Copies src RECT into dst, moves top down 1 and right in 4, then sets left = right - GetSystemMetrics(71) and bottom = top + GetSystemMetrics(72); returns dst.
// Free function (no class), so no @class or @field lines.
RECT* __stdcall fn_006ACE90(const RECT* src, RECT* dst) {
    using GetSystemMetricsFn = int(__stdcall*)(int);
    auto getSystemMetrics = reinterpret_cast<GetSystemMetricsFn>(
        static_cast<uintptr_t>(static_cast<uint32_t>(mem_0092563C)));

    // Read all source fields first so the copy is alias-safe when src == dst.
    const LONG srcLeft = src->left;
    const LONG srcTop = src->top;
    const LONG srcRight = src->right;
    const LONG srcBottom = src->bottom;

    dst->left = srcLeft;
    dst->top = srcTop + 1;
    dst->right = srcRight - 4;
    dst->bottom = srcBottom;

    dst->left = dst->right - static_cast<LONG>(getSystemMetrics(0x47));
    dst->bottom = static_cast<LONG>(getSystemMetrics(0x48)) + dst->top;

    return dst;
}
} // namespace lift_006ACE90

// [0x006A92F0] sub_006A92F0 (75 bytes)
namespace lift_006A92F0 {
// Known callee 0x006A5EA8: thunk_MFC80_ord_1903 (IAT jump thunk forwarding to MFC80!ord_1903.)
// Callee signatures inferred from the disassembly: `this` is passed in ecx.
extern void ext_006A5EA8(void* self);
extern uint8_t ext_006AD0D0(void* self);
extern void ext_006A8980(void* self);

// IAT slots for USER32!IsChild and USER32!InvalidateRect.
extern uint32_t mem_009256BC;
extern uint32_t mem_00925688;

// @name Unknown::RefreshChild_006A92F0
// @summary Runs the base hook, then invalidates this window's client area unless the field at +0x54 is null, the callee check at 0x006AD0D0 is true, or the other window is a child of this one.
// @field Unknown +0x20 HWND hwnd
// @field Unknown +0x54 void* field_0x54
void fn_006A92F0(void* self, void* other) {
    auto* base = static_cast<uint8_t*>(self);

    ext_006A5EA8(self);

    if (lift_field<void*>(base, 0x54) == nullptr) {
        return;
    }
    if (ext_006AD0D0(lift_field<void*>(base, 0x54)) != 0) {
        return;
    }

    // `other` is read at +0x20 only when non-null; a null `other` yields a null HWND.
    HWND other_hwnd = nullptr;
    if (other != nullptr) {
        other_hwnd = lift_field<HWND>(other, 0x20);
    }

    using IsChildFn = BOOL(__stdcall*)(HWND, HWND);
    using InvalidateRectFn = BOOL(__stdcall*)(HWND, const RECT*, BOOL);
    auto is_child = reinterpret_cast<IsChildFn>(static_cast<uintptr_t>(mem_009256BC));
    auto invalidate_rect = reinterpret_cast<InvalidateRectFn>(static_cast<uintptr_t>(mem_00925688));

    HWND self_hwnd = lift_field<HWND>(base, 0x20);
    if (is_child(self_hwnd, other_hwnd) != 0) {
        return;
    }

    ext_006A8980(self);

    invalidate_rect(lift_field<HWND>(base, 0x20), nullptr, TRUE);
}
} // namespace lift_006A92F0

// [0x006A0680]
namespace lift_006A0680 {
// @name getStaticInstance_00B5CA74
// @summary Lazily initializes and returns the static object at 0x00B5CA74, registering its destructor via atexit.


extern uint32_t mem_00B5CA84;
extern uint8_t mem_00B5CA74[];
extern void* ext_006A0670(void* self);
extern void ext_006A6C87(uint32_t fn);

void* sub_006A0680() {
    if ((mem_00B5CA84 & 1u) == 0u) {
        mem_00B5CA84 |= 1u;
        ext_006A0670(mem_00B5CA74);
        ext_006A6C87(0x00922030u);
    }
    return mem_00B5CA74;
}
} // namespace lift_006A0680

// [0x006A8A00] sub_006A8A00 (94 bytes)
namespace lift_006A8A00 {
// Known callee 0x006A60EE: IAT jump thunk forwarding to MFC80!ord_1185 (no-return failure path).
extern void ext_006A60EE(void);

// @name Unknown::ForEachChildUntilNonZero
// @class Unknown
// @summary Iterates the child-pointer array at this+0xA0 (count at this+0xA4); calls child vfunc slot 1 with (a1, a2, a3) and returns the first nonzero result, else 0. Out-of-range index calls the MFC80 failure thunk.
// @field Unknown +0xA0 void** field_0xA0
// @field Unknown +0xA4 int32_t field_0xA4
uint32_t fn_006A8A00(void* self, uint32_t a1, uint32_t a2, uint32_t a3) {
    int32_t esi = 0;
    if (lift_field<int32_t>(self, 0xA4) <= 0) {
        return 0;
    }
    for (;;) {
        if (esi < 0 || esi >= lift_field<int32_t>(self, 0xA4)) {
            ext_006A60EE();
            return 0;
        }
        void** array = lift_field<void**>(self, 0xA0);
        void* child = array[esi];
        void** vtable = *reinterpret_cast<void***>(child);
        using VFunc1 = uint32_t (*)(void* self, uint32_t a1, uint32_t a2, uint32_t a3);
        VFunc1 fn = reinterpret_cast<VFunc1>(vtable[1]);
        uint32_t result = fn(child, a1, a2, a3);
        if (result != 0) {
            return result;
        }
        ++esi;
        if (esi >= lift_field<int32_t>(self, 0xA4)) {
            return 0;
        }
    }
}
} // namespace lift_006A8A00

// [0x006A3700]
namespace lift_006A3700 {
// @name ByteBuffer::assignFromBytes
// @class ByteBuffer
// @summary Resets the three buffer pointers, allocates n bytes and copies n bytes from src into them; the buffer is empty when n is 0.
// @field ByteBuffer +0x04 uint8_t* field_0x04
// @field ByteBuffer +0x08 uint8_t* field_0x08
// @field ByteBuffer +0x0C uint8_t* field_0x0C

// Thiscall in the original: `self` is the ecx value, (n, src) are stack args, callee-cleaned (ret 8).
// Unreachable in practice: the original compares n against 0xFFFFFFFF unsigned and only calls on a
// value above that, which a 32-bit n cannot be.
extern void ext_00405FB0();
// Allocator: returns the new block in eax; the second (zero) argument is pushed by the caller.
extern uint8_t* ext_0041A100(uint32_t n, uint32_t zero);

void fn_006A3700(void* self, uint32_t n, const uint8_t* src) {
    lift_field<uint8_t*>(self, 0x04) = nullptr;
    lift_field<uint8_t*>(self, 0x08) = nullptr;
    lift_field<uint8_t*>(self, 0x0C) = nullptr;

    if (n == 0) {
        return;
    }

    if (n > 0xFFFFFFFFu) {
        ext_00405FB0();
    }

    uint8_t* dst = ext_0041A100(n, 0);
    lift_field<uint8_t*>(self, 0x0C) = dst + n;
    lift_field<uint8_t*>(self, 0x04) = dst;
    lift_field<uint8_t*>(self, 0x08) = dst;

    for (uint32_t i = 0; i < n; ++i) {
        dst[i] = src[i];
    }

    lift_field<uint8_t*>(self, 0x08) = dst + n;
}
} // namespace lift_006A3700

// [0x006AD3C0]
namespace lift_006AD3C0 {
extern void ext_006A5C5C(void* ptr);
extern void ext_006AD960(void* self);
extern uint32_t mem_009242F4;

// @name DestructSub6AD3C0
// @summary Destructor that resets vtable, releases sub-object at +0x44, decrements refcount at +0x4, and destroys members at +0xC and +0x8.
// @field Self +0x00 uint32_t vtable
// @field Self +0x04 void* refObj
// @field Self +0x08 uint32_t field_0x08
// @field Self +0x0C uint32_t field_0x0C
// @field Self +0x44 void* field_0x44
void fn_006AD3C0(void* self) {
    uint8_t* base = static_cast<uint8_t*>(self);
    *reinterpret_cast<uint32_t*>(base + 0x00) = 0x0099103Cu;

    void* sub = *reinterpret_cast<void**>(base + 0x44);
    if (sub != nullptr) {
        ext_006AD960(sub);
    }

    uint8_t* refObj = *reinterpret_cast<uint8_t**>(base + 0x04);
    int32_t* refCount = reinterpret_cast<int32_t*>(refObj + 0x08);
    *refCount -= 1;
    if (*reinterpret_cast<int32_t*>(*reinterpret_cast<uint8_t**>(base + 0x04) + 0x08) == 0) {
        ext_006A5C5C(*reinterpret_cast<void**>(base + 0x04));
    }

    using DtorFn = void(__thiscall*)(void*);
    DtorFn dtor = reinterpret_cast<DtorFn>(static_cast<uintptr_t>(mem_009242F4));
    dtor(base + 0x0C);
    dtor(base + 0x08);
}
} // namespace lift_006AD3C0

// [0x006A7A90]
namespace lift_006A7A90 {
// @name sub_006A7A90
// @summary Returns 4 if neither Escape (0x1B) nor Tab (0x09) is currently held down per GetKeyState, else 0.
// @class none

extern uint32_t mem_009255F4; // IAT slot holding GetKeyState (USER32)

typedef int16_t(__stdcall *GetKeyState_fn)(int vkey);

uint32_t sub_006A7A90() {
    GetKeyState_fn getKeyState = reinterpret_cast<GetKeyState_fn>(static_cast<uintptr_t>(mem_009255F4));
    if (getKeyState(0x1B) < 0) {
        return 0;
    }
    if (getKeyState(0x09) < 0) {
        return 0;
    }
    return 4;
}
} // namespace lift_006A7A90
