// Lifted C++ translation unit: lifted/leaf/decompiled_4E0000.cpp
#include "lift_compat.h"
#include <new>
#include <string>

#include <string>
namespace lift_004E7E90 {
// @name Unknown::initDefaults
// @class Unknown
// @summary Zeroes the state words at +0x04..+0x10 and the flag byte at +0x1C, then sets +0x14 to 1 and +0x18 to 2.
// @field Unknown +0x04 uint32_t field_0x04
// @field Unknown +0x08 uint32_t field_0x08
// @field Unknown +0x0C uint32_t field_0x0C
// @field Unknown +0x10 uint32_t field_0x10
// @field Unknown +0x14 uint32_t field_0x14
// @field Unknown +0x18 uint32_t field_0x18
// @field Unknown +0x1C uint8_t field_0x1C
void fn_004E7E90(void* self) {
    lift_field<uint32_t>(self, 0x04) = 0;
    lift_field<uint32_t>(self, 0x08) = 0;
    lift_field<uint32_t>(self, 0x0C) = 0;
    lift_field<uint32_t>(self, 0x10) = 0;
    lift_field<uint32_t>(self, 0x14) = 1;
    lift_field<uint32_t>(self, 0x18) = 2;
    lift_field<uint8_t>(self, 0x1C) = 0;
}
} // namespace lift_004E7E90
#include <cstdint>
#include <cmath>
#include <cstdlib>

#include <cstdlib>
namespace lift_004E31A0 {
// @name sub_004E31A0
// @summary Auto-lifted identical-shape clone of 0x0044C4D0 (DWORD_RangeCopy_thiscall).
namespace lift_0044C4D0 {
// @name DWORD_RangeCopy_thiscall
// @summary Copies DWORDs from [first, last) to out via ext_0044C2A0 and returns out + count.

extern DWORD* ext_00490760(const DWORD* first, const DWORD* last, DWORD* out);

DWORD* __thiscall fn_004E31A0(void* self, const DWORD* first, const DWORD* last, DWORD* out) {
    (void)self;
    return ext_00490760(first, last, out);
}
} // namespace lift_0044C4D0
} // namespace lift_004E31A0
#include <cstddef>

// [0x004ECA40]
namespace lift_004ECA40 {
extern uint32_t mem_00925134;

// @name Vector8::operator[]
// @class Vector8
// @summary Bounds-checked element access for an 8-byte-stride vector
// @field Vector8 +0x04 uint32_t begin
// @field Vector8 +0x08 uint32_t end
uint32_t __thiscall sub_004ECA40(void* self, uint32_t index) {
    uint8_t* base = reinterpret_cast<uint8_t*>(self);
    uint32_t begin = *reinterpret_cast<uint32_t*>(base + 0x4);
    if (begin == 0) {
        reinterpret_cast<void(__cdecl*)()>(mem_00925134)();
    } else {
        uint32_t end = *reinterpret_cast<uint32_t*>(base + 0x8);
        uint32_t count = static_cast<uint32_t>(static_cast<int32_t>(end - begin) >> 3);
        if (index >= count) {
            reinterpret_cast<void(__cdecl*)()>(mem_00925134)();
        }
    }
    uint32_t ptr = *reinterpret_cast<uint32_t*>(base + 0x4);
    return ptr + index * 8u;
}
} // namespace lift_004ECA40

// [0x004EBE30] sub_004EBE30 (55 bytes)
namespace lift_004EBE30 {
// @name sub_004EBE30
// @summary Auto-lifted identical-shape clone of 0x0043D780 (AllocAndInitRecord).
namespace lift_0043D780 {
// Known callee 0x006A5C62: thunk_MFC80_ord_762 (IAT jump thunk forwarding to MFC80!ord_762.)
// Cdecl allocator: takes one size argument (pushed by caller), returns the block address in eax.
extern void* ext_006A5C62(uint32_t size);

// @name AllocAndInitRecord
// @summary Allocates a 0x18-byte record, zeroes its three dword slots at +0x00/+0x04/+0x08, sets the flag bytes at +0x14=1 and +0x15=0, and returns the record.
// @field AllocAndInitRecord +0x00 uint32_t field_0x00
// @field AllocAndInitRecord +0x04 uint32_t field_0x04
// @field AllocAndInitRecord +0x08 uint32_t field_0x08
// @field AllocAndInitRecord +0x14 uint8_t field_0x14
// @field AllocAndInitRecord +0x15 uint8_t field_0x15
void* fn_004EBE30() {
    // push 0x18 / call ext_006A5C62 / add esp,4 (cdecl: caller cleans up)
    void* rec = ext_006A5C62(0x48);
    uintptr_t base = reinterpret_cast<uintptr_t>(rec);

    // Each store is guarded by a null check on the computed slot address,
    // matching the original `test ecx,ecx / je` pattern.
    if (base != 0) {
        *reinterpret_cast<uint32_t*>(base + 0x00) = 0;
    }
    uintptr_t slot04 = base + 0x04;
    if (slot04 != 0) {
        *reinterpret_cast<uint32_t*>(slot04) = 0;
    }
    uintptr_t slot08 = base + 0x08;
    if (slot08 != 0) {
        *reinterpret_cast<uint32_t*>(slot08) = 0;
    }

    *reinterpret_cast<uint8_t*>(base + 0x44) = 0x01;
    *reinterpret_cast<uint8_t*>(base + 0x45) = 0x00;

    return rec;
}
} // namespace lift_0043D780
} // namespace lift_004EBE30

// [0x004E9D70] sub_004E9D70 (17 bytes)
namespace lift_004E9D70 {
// Known callee 0x00468180: sub_00468180 (Returns global int32 value from mem_00AD7CD8.)
extern INT __cdecl ext_00468180(void);
// Known callee 0x00469530: Unknown::DispatchToIndexedChild (Bounds-checks index against the pointer array at +0x54..+0x58, then calls vtable slot 1 of the selected element with arg and returns its result.)
extern INT __thiscall ext_00469530(void* self, INT index, INT arg);

// @name Unknown::DispatchIndex5ToSelector
// @class Unknown
// @summary Fetches a global int32 as the receiver and dispatches index 5 (arg 0) to its indexed child.
extern INT __cdecl fn_004E9D70(void) {
    INT self = ext_00468180();
    return ext_00469530(reinterpret_cast<void*>(static_cast<intptr_t>(self)), 5, 0);
}
} // namespace lift_004E9D70

// [0x004EF970] sub_004EF970 (63 bytes)
namespace lift_004EF970 {
// Known callee 0x006A5C62: thunk_MFC80_ord_762 (IAT jump thunk forwarding to MFC80!ord_762.)
// Used here as the allocator (operator new-style, cdecl, one size argument, result in eax).
extern void* ext_006A5C62(size_t size);

// @name AllocRecord18
// @class <ClassName> (optional)
// @summary Allocates a 0x18-byte record, fills it from five arguments (three dwords, a dword pair read through a pointer, and a byte flag), zeroes the trailing byte, and returns the record or null on allocation failure.
// @field Record18 +0x00 DWORD field_0x00
// @field Record18 +0x04 DWORD field_0x04
// @field Record18 +0x08 DWORD field_0x08
// @field Record18 +0x0C DWORD field_0x0C
// @field Record18 +0x10 DWORD field_0x10
// @field Record18 +0x14 BYTE field_0x14
// @field Record18 +0x15 BYTE field_0x15
void* fn_004EF970(DWORD a0, DWORD a1, DWORD a2, const DWORD* a3, BYTE a4) {
    void* rec = ext_006A5C62(0x18);
    if (rec == nullptr) {
        return nullptr;
    }
    lift_field<DWORD>(rec, 0x00) = a0;
    lift_field<DWORD>(rec, 0x04) = a1;
    lift_field<DWORD>(rec, 0x08) = a2;
    lift_field<DWORD>(rec, 0x0C) = a3[0];
    lift_field<DWORD>(rec, 0x10) = a3[1];
    lift_field<BYTE>(rec, 0x14) = a4;
    lift_field<BYTE>(rec, 0x15) = 0;
    return rec;
}
} // namespace lift_004EF970

// [0x004E7E40] sub_004E7E40 (67 bytes)
namespace lift_004E7E40 {
extern void ext_0059F310(DWORD* first, DWORD hole, DWORD len, DWORD value);

// @name sortHeapDWORD
// @summary In-place heapsort tail: repeatedly moves the heap top to the end and sifts the remaining range down via ext_0059F310 (std::sort_heap-style).
void fn_004E7E40(DWORD* first, DWORD* last) {
    ptrdiff_t n = last - first;
    while (n > 1) {
        DWORD value = first[n - 1];
        first[n - 1] = first[0];
        ext_0059F310(first, 0, static_cast<DWORD>(n - 1), value);
        --n;
    }
}
} // namespace lift_004E7E40

// [0x004EF790] sub_004EF790 (67 bytes)
namespace lift_004EF790 {
// Slot holding the address of std::operator==(const basic_string&, const basic_string&).
extern uintptr_t mem_00924FC4;

struct MismatchResult {
    const uint8_t* first1;
    const uint8_t* first2;
};

using StringEqFn = bool (*)(const void* lhs, const void* rhs);

// @name MismatchStringRanges
// @summary std::mismatch over two ranges of 28-byte std::string elements; returns the first differing iterator pair.
// No direct field offsets are accessed (element stride 0x1C is only an iterator step), so no @field lines.
MismatchResult* fn_004EF790(MismatchResult* out, const uint8_t* first1, const uint8_t* last1, const uint8_t* first2) {
    constexpr std::size_t kStringStride = 0x1C;
    const auto eq = reinterpret_cast<StringEqFn>(mem_00924FC4);

    const uint8_t* a = first1;
    const uint8_t* b = first2;

    if (a != last1) {
        while (eq(a, b)) {
            a += kStringStride;
            b += kStringStride;
            if (a == last1) {
                break;
            }
        }
    }

    out->first1 = a;
    out->first2 = b;
    return out;
}
} // namespace lift_004EF790

// [0x004E7DF0] sub_004E7DF0 (74 bytes)
namespace lift_004E7DF0 {
// @name sub_004E7DF0
// @summary Auto-lifted identical-shape clone of 0x00481C90 (SortHeapRange).
namespace lift_00481C90 {
extern void ext_004E7540(uint32_t* first, ptrdiff_t hole, ptrdiff_t count, uint32_t value, uint32_t pred);

// @name SortHeapRange
// @summary Heap-sorts a range of 4-byte elements in place (pop-heap loop); pred is forwarded to the sift-down helper.
void fn_004E7DF0(uint32_t* first, uint32_t* last, uint32_t pred) {
    ptrdiff_t n = last - first;
    while (n > 1) {
        --last;
        uint32_t value = *last;
        *last = *first;
        ext_004E7540(first, 0, last - first, value, pred);
        n = last - first;
    }
}
} // namespace lift_00481C90
} // namespace lift_004E7DF0

// [0x004E3140]
namespace lift_004E3140 {
extern uint32_t ext_004DE780(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
extern uint32_t mem_00925134;

// @name Vector_erase_range
// @summary Erases a range [first, last) from a vector-like container with checked iterators
// @field Container +0x08 uint32_t field_0x08

uint32_t __thiscall sub_004E3140(
    uint32_t this_ptr,
    uint32_t out_iter,
    uint32_t first_cont,
    uint32_t first_ptr,
    uint32_t last_cont,
    uint32_t last_ptr)
{
    if (first_cont == 0 || first_cont != last_cont) {
        reinterpret_cast<void (*)()>(mem_00925134)();
    }

    if (first_ptr != last_ptr) {
        uint32_t end_ptr = *reinterpret_cast<uint32_t*>(this_ptr + 0x8);
        uint32_t scratch = (first_cont & 0xFFFFFF00u);
        uint32_t new_end = ext_004DE780(last_ptr, end_ptr, first_ptr, scratch, out_iter, scratch);
        *reinterpret_cast<uint32_t*>(this_ptr + 0x8) = new_end;
    }

    *reinterpret_cast<uint32_t*>(out_iter + 0x4) = first_ptr;
    *reinterpret_cast<uint32_t*>(out_iter) = first_cont;
    return out_iter;
}
} // namespace lift_004E3140

// [0x004E13C0] sub_004E13C0 (30 bytes)
namespace lift_004E13C0 {
// @name sub_004E13C0
// @summary Auto-lifted identical-shape clone of 0x0046F6A0 (StoreValueAndSingleton).
namespace lift_0046F6A0 {
DWORD ext_004DE720();  // ConstructOnce_0046F580

// @name StoreValueAndSingleton
// @summary Stores a value into dst[0], stores the one-time-constructed global object pointer into dst[1], and returns dst.
// @field <none> +0x00 DWORD field_0x00 (written from the value argument)
// @field <none> +0x04 DWORD field_0x04 (written from ext_0046F580() result)

DWORD* fn_004E13C0(DWORD* dst, DWORD value) {
    DWORD obj = ext_004DE720();
    dst[0] = value;
    dst[1] = obj;
    return dst;
}
} // namespace lift_0046F6A0
} // namespace lift_004E13C0

// [0x004E1B30] sub_004E1B30 (30 bytes)
namespace lift_004E1B30 {
// @name sub_004E1B30
// @summary Auto-lifted identical-shape clone of 0x0046F6A0 (StoreValueAndSingleton).
namespace lift_0046F6A0 {
DWORD ext_004E13E0();  // ConstructOnce_0046F580

// @name StoreValueAndSingleton
// @summary Stores a value into dst[0], stores the one-time-constructed global object pointer into dst[1], and returns dst.
// @field <none> +0x00 DWORD field_0x00 (written from the value argument)
// @field <none> +0x04 DWORD field_0x04 (written from ext_0046F580() result)

DWORD* fn_004E1B30(DWORD* dst, DWORD value) {
    DWORD obj = ext_004E13E0();
    dst[0] = value;
    dst[1] = obj;
    return dst;
}
} // namespace lift_0046F6A0
} // namespace lift_004E1B30

// [0x004E13E0] sub_004E13E0 (87 bytes)
namespace lift_004E13E0 {
// @name sub_004E13E0
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00AE6468;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00AE6464;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_004E13E0() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x88DBCEu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00AE6468 & 1u) == 0) {
        mem_00AE6468 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00AE6464, frame[0]);
        mem_00AE6464 = 0x94AC04u;
    }

    mem_fs_0 = frame[0];
    return &mem_00AE6464;
}
} // namespace lift_004CAE30
} // namespace lift_004E13E0

// [0x004ECC40] sub_004ECC40 (87 bytes)
namespace lift_004ECC40 {
// @name sub_004ECC40
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00AE79C8;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00AE79C4;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_004ECC40() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x88EF1Eu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00AE79C8 & 1u) == 0) {
        mem_00AE79C8 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00AE79C4, frame[0]);
        mem_00AE79C4 = 0x94BA34u;
    }

    mem_fs_0 = frame[0];
    return &mem_00AE79C4;
}
} // namespace lift_004CAE30
} // namespace lift_004ECC40

// [0x004EFAC0]
namespace lift_004EFAC0 {
extern void (*mem_00925134)();

// @name destroyCheckedPointerRange
// @summary Destroys a checked iterator range of pointers by calling the virtual deleting destructor at +4
void __stdcall sub_004EFAC0(uint32_t* vec1, uint32_t* first, uint32_t* vec2, uint32_t* last) {
    auto invalid_param = mem_00925134;
    while (true) {
        if (!vec1 || vec1 != vec2) {
            invalid_param();
        }
        if (first == last) {
            break;
        }
        uint32_t* cur = first;
        if (!vec1) {
            invalid_param();
        }
        if (reinterpret_cast<uintptr_t>(first) >= static_cast<uintptr_t>(vec1[2])) {
            invalid_param();
        }
        first += 1;
        if (!vec1) {
            invalid_param();
        }
        if (reinterpret_cast<uintptr_t>(cur) >= static_cast<uintptr_t>(vec1[2])) {
            invalid_param();
        }
        uint32_t obj = *cur;
        if (obj != 0) {
            uintptr_t subobj = static_cast<uintptr_t>(obj) + 4;
            uint32_t vtable = *reinterpret_cast<uint32_t*>(subobj);
            using dtor_fn = void(__thiscall*)(uintptr_t, uint32_t);
            auto dtor = reinterpret_cast<dtor_fn>(*reinterpret_cast<uint32_t*>(vtable));
            dtor(subobj, 1);
        }
    }
}
} // namespace lift_004EFAC0

// [0x004EFA50] sub_004EFA50 (98 bytes)
namespace lift_004EFA50 {
// @name sub_004EFA50
// @summary Auto-lifted identical-shape clone of 0x004A5F70 (OwnedPointerRange::destroyPointerRange).
namespace lift_004A5F70 {
// Known callee 0x00644F30: Unknown::invokeNestedVirtualSlot0 (extern void fn_00644F30(void* self))
extern void ext_00676C90(void* self);
// Known callee 0x006A5C5C: thunk_MFC80_ord_764 (IAT jump thunk forwarding to MFC80!ord_764; called with one pointer argument)
extern void ext_006A5C5C(void* p);
// IAT slot 0x00925134 holding MSVCR80!_invalid_parameter_noinfo (called on failed range/owner checks)
extern void (*mem_00925134)(void);

struct OwnedPointerRange {
    uint8_t  field_0x00[0x08];
    void**   field_0x08; // upper bound for valid slot addresses
};

static inline void invalidParameterIf(bool bad) {
    if (bad) {
        mem_00925134();
    }
}

// @name OwnedPointerRange::destroyPointerRange
// @class OwnedPointerRange
// @summary Walks slots in [first, last) of an owning range, and for each non-null pointer calls ext_00644F30 then frees it via ext_006A5C5C.
// @field OwnedPointerRange +0x08 void** field_0x08
extern void fn_004EFA50(OwnedPointerRange* owner, void** first, OwnedPointerRange* ownerCheck, void** last) {
    void** cur = first;
    for (;;) {
        invalidParameterIf(owner == nullptr || owner != ownerCheck);
        if (cur == last) {
            return;
        }

        void** slot = cur;
        invalidParameterIf(!(owner != nullptr && slot < owner->field_0x08));
        cur = slot + 1;
        invalidParameterIf(!(owner != nullptr && cur - 1 < owner->field_0x08));

        void* obj = *slot;
        if (obj == nullptr) {
            continue;
        }

        ext_00676C90(obj);
        ext_006A5C5C(obj);
    }
}
} // namespace lift_004A5F70
} // namespace lift_004EFA50

// [0x004ED640] sub_004ED640 (111 bytes)
namespace lift_004ED640 {
// @name Unknown::ctor_004ED640
// @class Unknown
// @summary Object constructor: runs base ctor ext_00692B50, installs three vtable pointers, constructs an embedded std::string at +0x1c, zeroes five trailing fields, and returns this.
// @field Unknown +0x00 uint32_t field_0x00
// @field Unknown +0x04 uint32_t field_0x04
// @field Unknown +0x18 uint32_t field_0x18
// @field Unknown +0x1c std::string field_0x1c
// @field Unknown +0x38 uint32_t field_0x38
// @field Unknown +0x40 uint32_t field_0x40
// @field Unknown +0x44 uint32_t field_0x44
// @field Unknown +0x48 uint32_t field_0x48
// @field Unknown +0x4c uint32_t field_0x4c

// Base class constructor (listed callee ext_00692B50 / ctor_00944E74).
extern void* __thiscall ext_00692B50(void* self);

// Imported MSVCP80 std::basic_string<char> default constructor.
// Import slot mem_00924FE8 holds 0x006290D8, which is called through here.
extern void* __thiscall ext_006290D8(void* self);

// Vtable addresses (in .rdata) installed by this constructor.
static constexpr uint32_t kVtblA       = 0x009451B4; // stored at +0x00 (overwritten by base ctor's view)
static constexpr uint32_t kVtblB       = 0x00945184; // stored at +0x04
static constexpr uint32_t kVtblC_first = 0x009443BC; // stored at +0x18 before string ctor
static constexpr uint32_t kVtblC_final = 0x00945174; // stored at +0x18 after string ctor

// The original function is a MSVC SEH-protected constructor: it pushes an
// exception frame (scope table 0x0088EF84, trylevel -1) and restores the
// previous fs:[0] handler on exit. That exception bookkeeping has no portable
// equivalent and is omitted; the observable object initialisation is kept.
extern void* __thiscall fn_004ED640(void* self) {
    // Base constructor.
    ext_00692B50(self);

    lift_field<uint32_t>(self, 0x18) = kVtblC_first;

    // Embedded std::string lives at self+0x1c; construct it.
    ext_006290D8(reinterpret_cast<uint8_t*>(self) + 0x1c);

    lift_field<uint32_t>(self, 0x00) = kVtblA;
    lift_field<uint32_t>(self, 0x04) = kVtblB;
    lift_field<uint32_t>(self, 0x18) = kVtblC_final;

    lift_field<uint32_t>(self, 0x38) = 0;
    lift_field<uint32_t>(self, 0x40) = 0;
    lift_field<uint32_t>(self, 0x44) = 0;
    lift_field<uint32_t>(self, 0x48) = 0;
    lift_field<uint32_t>(self, 0x4c) = 0;

    return self;
}
} // namespace lift_004ED640

// [0x004EC380]
namespace lift_004EC380 {
// @name TreeMap::find
// @class TreeMap
// @summary Finds an element by string key in the red-black tree and writes the resulting iterator.
// @field TreeMap +0x04 void* header


extern void* fn_00472780(void* self, const void* key);
#define ext_00472780 fn_00472780

extern void (*mem_00925134)();
extern bool (*mem_00924EF4)(const void* lhs, const void* rhs);

struct TreeMapIterator {
    void* container;
    void* node;
};

void* fn_004EC380(void* self, void* out_iter, const void* key) {
    void* node = ext_00472780(self, key);
    if (!self) {
        mem_00925134();
    }

    void* header = *reinterpret_cast<void**>(static_cast<char*>(self) + 0x04);
    auto* iter = static_cast<TreeMapIterator*>(out_iter);
    iter->container = self;

    if (node == header || mem_00924EF4(key, static_cast<const char*>(node) + 0x0C)) {
        iter->node = header;
    } else {
        iter->node = node;
    }

    return out_iter;
}
} // namespace lift_004EC380

// [0x004ED750] sub_004ED750 (82 bytes)
namespace lift_004ED750 {
// Known callee 0x004ED640: Unknown::ctor_004ED640 (Object constructor: runs base ctor ext_00692B50, installs three vtable pointers, constructs an embedded std::string at +0x1c, zeroes five trailing fields, and returns this.)
extern void* ext_004ED640(void* self);

// @name Unknown::ctor_004ED750
// @class Unknown
// @summary Derived object constructor: runs base ctor ext_004ED640, zeroes three trailing fields, installs three vtable pointers, and returns this.
// @field Unknown +0x00 uint32_t vptr_00
// @field Unknown +0x04 uint32_t vptr_04
// @field Unknown +0x18 uint32_t vptr_18
// @field Unknown +0x50 uint32_t field_0x50
// @field Unknown +0x58 uint32_t field_0x58
// @field Unknown +0x5c uint32_t field_0x5c
// @field Unknown +0x60 uint32_t field_0x60
void* fn_004ED750(void* self) {
    // The original SEH frame setup/teardown (fs:[0] push/pop, cookie 0x88EF98)
    // is compiler exception-handling bookkeeping and is not reproduced here.
    ext_004ED640(self);

    lift_field<uint32_t>(self, 0x50) = 0;
    lift_field<uint32_t>(self, 0x00) = 0x0094BF94;
    lift_field<uint32_t>(self, 0x04) = 0x0094BF68;
    lift_field<uint32_t>(self, 0x18) = 0x0094BF58;
    lift_field<uint32_t>(self, 0x58) = 0;
    lift_field<uint32_t>(self, 0x5C) = 0;
    lift_field<uint32_t>(self, 0x60) = 0;

    return self;
}
} // namespace lift_004ED750

// [0x004E1B50] sub_004E1B50 (76 bytes)
namespace lift_004E1B50 {
// Known callee 0x004DE3D0: PairRange::copyBackward (Backward copy of 8-byte slots [first,last) into dest ending at dest; releases each destination's held object, copies the source object pointer, and stores the value returned by the source object's virtual getter (0 when no object). Returns the new start of the destination range.)
extern void* ext_004DE3D0(void* first, void* last, void* dest);

// @name PairRange::copyBackwardAndRewind
// @class PairRange
// @summary Backward-copies the 8-byte-slot range [first,last) into dest, then returns dest rewound by the range size in bytes (rounded down to a whole slot).
void* fn_004E1B50(void* first, void* last, void* dest) {
    ext_004DE3D0(first, last, dest);

    // Slot count of [first,last), then back to byte size (both 8-byte units).
    const intptr_t slots = (static_cast<intptr_t>(reinterpret_cast<uintptr_t>(last) -
                                                  reinterpret_cast<uintptr_t>(first))) >> 3;
    const intptr_t bytes = slots * 8;

    return reinterpret_cast<void*>(reinterpret_cast<uintptr_t>(dest) - static_cast<uintptr_t>(bytes));
}
} // namespace lift_004E1B50
