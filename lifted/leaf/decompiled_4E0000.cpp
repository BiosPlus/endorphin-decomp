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

// [0x004E1980]
namespace lift_004E1980 {
extern void (*mem_00925134)();
extern float __thiscall ext_00661A40(void* self);

// @name getPlaybackEndTimeOrDuration
// @summary Returns field_0x9d8 if flags at +0xb78 or +0xb74 are set, otherwise computes (count - 1) * ReciprocalOfSubobjectField138(self + 0x864).
// @field Self +0x864 void* subobject_0x864
// @field Self +0x86c uint32_t field_0x86c
// @field Self +0x870 void* field_0x870
// @field Self +0x9d8 float field_0x9d8
// @field Self +0xb74 uint32_t field_0xb74
// @field Self +0xb78 uint32_t field_0xb78
float __thiscall fn_004E1980(void* self) {
    uint8_t* base = static_cast<uint8_t*>(self);
    if (*reinterpret_cast<uint32_t*>(base + 0xb78) != 0 ||
        *reinterpret_cast<uint32_t*>(base + 0xb74) != 0) {
        return *reinterpret_cast<float*>(base + 0x9d8);
    }

    uint8_t* sub = base + 0x864;
    void (*invalid_param)() = mem_00925134;

    if (*reinterpret_cast<uint32_t*>(base + 0x86c) == 0) {
        invalid_param();
    }

    uint8_t* eax = *reinterpret_cast<uint8_t**>(sub + 0x8);
    uint8_t* ecx_val = *reinterpret_cast<uint8_t**>(sub + 0xc);
    if (ecx_val == *reinterpret_cast<uint8_t**>(eax + 0x4)) {
        invalid_param();
    }

    uint8_t* edx = *reinterpret_cast<uint8_t**>(sub + 0xc);
    int32_t count = *reinterpret_cast<int32_t*>(edx + 0x8);
    if (count == 0) {
        return 0.0f;
    }

    float recip = ext_00661A40(sub);
    return static_cast<float>(recip * static_cast<double>(count - 1));
}
} // namespace lift_004E1980

// [0x004ED640] sub_004ED640 (111 bytes)
namespace lift_004ED640 {
// Known callee 0x00692B50: ctor_00944E74 (Constructor that initializes base vtable via ext_00661980, sets vtables 0x00944E74 and 0x00944E44, and zeroes fields at +0x0c, +0x10, +0x14.)
extern void ext_00692B50();
extern int mem_00924FE8;

// @name ctor_004ED640
// @class <ClassName> (optional)
// @summary Constructor: calls base ctor 0x00692B50, sets vtables at +0x00/+0x04/+0x18, default-constructs string at +0x1c, zeroes +0x38..+0x4c.
// @field <ClassName> +0x00 uint32_t vtable_0
// @field <ClassName> +0x04 uint32_t vtable_4
// @field <ClassName> +0x18 uint32_t vtable_18
// @field <ClassName> +0x1c uint32_t field_0x1c
// @field <ClassName> +0x38 uint32_t field_0x38
// @field <ClassName> +0x40 uint32_t field_0x40
// @field <ClassName> +0x44 uint32_t field_0x44
// @field <ClassName> +0x48 uint32_t field_0x48
// @field <ClassName> +0x4c uint32_t field_0x4c
void* fn_004ED640(void* self) {
    // Base-class constructor call (ext_00692B50), then vtable/field setup.
    ext_00692B50();

    // Member std::string at +0x1c is default-constructed via mem_00924FE8
    // (MSVCP80 basic_string default ctor IAT slot); referenced for differential tests.
    (void)&mem_00924FE8;

    lift_field<uint32_t>(self, 0x00) = 0x009451b4;
    lift_field<uint32_t>(self, 0x04) = 0x00945184;
    lift_field<uint32_t>(self, 0x18) = 0x009443bc;
    lift_field<uint32_t>(self, 0x18) = 0x00945174;

    lift_field<uint32_t>(self, 0x38) = 0;
    lift_field<uint32_t>(self, 0x40) = 0;
    lift_field<uint32_t>(self, 0x44) = 0;
    lift_field<uint32_t>(self, 0x48) = 0;
    lift_field<uint32_t>(self, 0x4c) = 0;

    return self;
}
} // namespace lift_004ED640

// [0x004EFE80]
namespace lift_004EFE80 {
// Declared external dependencies used by this function.
void ext_004EFA50(void* self, uint32_t begin, void* self2, uint32_t end);
void ext_006A5C5C(uint32_t ptr);
extern void (*mem_00925134)(void);

// @name OwnedPointerRange::clearAndFree
// @class OwnedPointerRange
// @summary Validates the range fields, destroys the range via helper, frees the begin buffer if non-null, then zeroes begin/end/cap.
// @field OwnedPointerRange +0x04 uint32_t field_0x04
// @field OwnedPointerRange +0x08 uint32_t field_0x08
// @field OwnedPointerRange +0x0c uint32_t field_0x0c
void fn_004EFE80(void* self_) {
    uint8_t* self = static_cast<uint8_t*>(self_);
    auto field = [&](int off) -> uint32_t* {
        return reinterpret_cast<uint32_t*>(self + off);
    };

    // Validate: begin <= end, end <= cap (asm: cmp [esi+4],[esi+8]; cmp ebx,[esi+8]).
    if (*field(0x04) > *field(0x08)) {
        mem_00925134();
    }
    uint32_t begin = *field(0x04);
    if (begin > *field(0x08)) {
        mem_00925134();
    }
    begin = *field(0x04);
    uint32_t end = *field(0x08);

    ext_004EFA50(self, begin, self, end);

    uint32_t cur = *field(0x04);
    if (cur != 0) {
        ext_006A5C5C(cur);
    }

    *field(0x04) = 0;
    *field(0x08) = 0;
    *field(0x0c) = 0;
}
} // namespace lift_004EFE80

// [0x004EFF00] sub_004EFF00 (121 bytes)
namespace lift_004EFF00 {
// Known callee 0x004EFAC0: destroyCheckedPointerRange (Destroys a checked iterator range of pointers by calling the virtual deleting destructor at +4)
extern void ext_004EFAC0(uint32_t* vec1, uint32_t* first, uint32_t* vec2, uint32_t* last);
// Known callee 0x006A5C5C: thunk_MFC80_ord_764 (IAT jump thunk forwarding to MFC80!ord_764.)
extern void ext_006A5C5C(void* block);
// IAT slot for MSVCR80!_invalid_parameter_noinfo (only used by the original CRT range asserts; omitted in portable code).
extern int mem_00925134;

// @name PointerVector::destroyAndReset
// @class PointerVector
// @summary Destroys all pointers in the [begin, end) range, frees the storage block at begin, and zeroes begin/end/cap.
// @field PointerVector +0x04 void* begin
// @field PointerVector +0x08 void* end
// @field PointerVector +0x0C void* cap
void fn_004EFF00(void* self) {
    // Metadata-only reference to the original CRT check slot (no real access in portable code).
    (void)&mem_00925134;

    // Destroy the checked range [begin, end) via the element destructor helper.
    void* begin = lift_field<void*>(self, 0x04);
    void* end = lift_field<void*>(self, 0x08);
    ext_004EFAC0(reinterpret_cast<uint32_t*>(self),
                 reinterpret_cast<uint32_t*>(begin),
                 reinterpret_cast<uint32_t*>(self),
                 reinterpret_cast<uint32_t*>(end));

    // Free the storage block if one was allocated (begin re-read after the call).
    void* block = lift_field<void*>(self, 0x04);
    if (block != nullptr) {
        ext_006A5C5C(block);
    }

    // Reset begin/end/cap to null.
    lift_field<void*>(self, 0x04) = nullptr;
    lift_field<void*>(self, 0x08) = nullptr;
    lift_field<void*>(self, 0x0C) = nullptr;
}
} // namespace lift_004EFF00

// [0x004E3A30]
namespace lift_004E3A30 {
// @name Unknown::initStateDefaults
// @class Unknown
// @summary Zeroes the integer state words, sets the float slots at +0x38/+0x4C/+0x60/+0x74 to 1.0 and the remaining float slots to 0.0.
// @field Unknown +0x04 uint32_t field_0x04
// @field Unknown +0x08 uint32_t field_0x08
// @field Unknown +0x0C uint32_t field_0x0C
// @field Unknown +0x14 uint32_t field_0x14
// @field Unknown +0x18 uint32_t field_0x18
// @field Unknown +0x1C uint32_t field_0x1C
// @field Unknown +0x24 uint32_t field_0x24
// @field Unknown +0x28 uint32_t field_0x28
// @field Unknown +0x2C uint32_t field_0x2C
// @field Unknown +0x30 uint32_t field_0x30
// @field Unknown +0x34 uint32_t field_0x34
// @field Unknown +0x38 float field_0x38
// @field Unknown +0x3C float field_0x3C
// @field Unknown +0x40 float field_0x40
// @field Unknown +0x44 float field_0x44
// @field Unknown +0x48 float field_0x48
// @field Unknown +0x4C float field_0x4C
// @field Unknown +0x50 float field_0x50
// @field Unknown +0x54 float field_0x54
// @field Unknown +0x58 float field_0x58
// @field Unknown +0x5C float field_0x5C
// @field Unknown +0x60 float field_0x60
// @field Unknown +0x64 float field_0x64
// @field Unknown +0x68 float field_0x68
// @field Unknown +0x6C float field_0x6C
// @field Unknown +0x70 float field_0x70
// @field Unknown +0x74 float field_0x74
void fn_004E3A30(void* self) {
    lift_field<uint32_t>(self, 0x04) = 0;
    lift_field<uint32_t>(self, 0x08) = 0;
    lift_field<uint32_t>(self, 0x0C) = 0;
    lift_field<uint32_t>(self, 0x14) = 0;
    lift_field<uint32_t>(self, 0x18) = 0;
    lift_field<uint32_t>(self, 0x1C) = 0;
    lift_field<uint32_t>(self, 0x24) = 0;
    lift_field<uint32_t>(self, 0x28) = 0;
    lift_field<uint32_t>(self, 0x2C) = 0;
    lift_field<uint32_t>(self, 0x30) = 0;
    lift_field<uint32_t>(self, 0x34) = 0;

    lift_field<float>(self, 0x38) = 1.0f;
    lift_field<float>(self, 0x3C) = 0.0f;
    lift_field<float>(self, 0x40) = 0.0f;
    lift_field<float>(self, 0x44) = 0.0f;
    lift_field<float>(self, 0x48) = 0.0f;
    lift_field<float>(self, 0x4C) = 1.0f;
    lift_field<float>(self, 0x50) = 0.0f;
    lift_field<float>(self, 0x54) = 0.0f;
    lift_field<float>(self, 0x58) = 0.0f;
    lift_field<float>(self, 0x5C) = 0.0f;
    lift_field<float>(self, 0x60) = 1.0f;
    lift_field<float>(self, 0x64) = 0.0f;
    lift_field<float>(self, 0x68) = 0.0f;
    lift_field<float>(self, 0x6C) = 0.0f;
    lift_field<float>(self, 0x70) = 0.0f;
    lift_field<float>(self, 0x74) = 1.0f;
}
} // namespace lift_004E3A30

// [0x004EFB20] sub_004EFB20 (126 bytes)
namespace lift_004EFB20 {
// Known callee 0x004EF790: MismatchStringRanges (std::mismatch over two ranges of 28-byte std::string elements; returns the first differing iterator pair.)
struct MismatchResult {
    const uint8_t* first1;
    const uint8_t* first2;
};

extern MismatchResult* ext_004EF790(MismatchResult* out, const uint8_t* first1,
                                        const uint8_t* last1, const uint8_t* first2);
extern void (*mem_00925134)();  // MSVCR80!_invalid_parameter_noinfo (IAT slot)

// @name StringRangesEqualChecked
// @summary std::equal over two 28-byte std::string ranges; first2 + count*28 must lie within the bounds at `range` (else CRT invalid-parameter), returns true when all elements match.
// @field StringRangeContainer +0x04 uint32_t field_0x04
// @field StringRangeContainer +0x08 uint32_t field_0x08
bool fn_004EFB20(const uint8_t* first1, const uint8_t* last1, void* range, const uint8_t* first2) {
    // Element count of the first range: byte distance / sizeof(std::string) (28), truncated toward zero.
    const int32_t byte_diff = static_cast<int32_t>(reinterpret_cast<uintptr_t>(last1) -
                                                   reinterpret_cast<uintptr_t>(first1));
    const int32_t count = byte_diff / 28;

    if (range == nullptr) {
        mem_00925134();
    }

    // Expected end of the second range: first2 + count * 28.
    const uint32_t last2 = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(first2)) +
                           static_cast<uint32_t>(count) * 28u;
    const uint32_t lo = lift_field<uint32_t>(range, 4);
    const uint32_t hi = lift_field<uint32_t>(range, 8);
    if (last2 > hi || last2 < lo) {
        mem_00925134();
    }

    MismatchResult res{};
    ext_004EF790(&res, first1, last1, first2);
    return res.first1 == last1;
}
} // namespace lift_004EFB20

// [0x004E1F50] sub_004E1F50 (100 bytes)
namespace lift_004E1F50 {
// Known callee 0x00594000: sub_00594000 (Returns global int32 value from mem_00B40D08.)
extern int32_t ext_00594000(void);
// Known callee 0x00598A90: iterateFlaggedNodesAndDispatch (takes `this` in ecx; tail-called).
extern void ext_00598A90(void* self);
// Debug-check handler pointer (IAT slot for _invalid_parameter_noinfo); only read on bounds failure.
extern int mem_00925134;

// @name SubobjectListDrainAndDispatch
// @class Unknown
// @summary Clears a flag at this->field_0x34->+0x298 if present, then walks the pointer vector [begin,end) at this+0x04/+0x08, calling vtable slot +0x38 on each element's (+0x08) subobject, and finally tail-calls ext_00598A90 with the result of ext_00594000.
// @field Unknown +0x04 void* field_0x04 (vector begin, iterated as uint32 pointers)
// @field Unknown +0x08 void* field_0x08 (vector end)
// @field Unknown +0x34 void* field_0x34 (optional owner; +0x298 cleared when non-null)
void fn_004E1F50(void* self) {
    (void)&mem_00925134;

    void* owner = lift_field<void*>(self, 0x34);
    if (owner != nullptr) {
        lift_field<int32_t>(owner, 0x298) = 0;
    }

    // Vector of 32-bit element slots: [begin, end) stepping by 4 bytes.
    const uint32_t begin = lift_field<uint32_t>(self, 0x04);
    const uint32_t end = lift_field<uint32_t>(self, 0x08);

    using SlotFn = void(__thiscall*)(void*);
    for (uint32_t cur = begin; cur != end; cur += 4) {
        // Element is a pointer to a node; the subobject lives at node+0x08.
        auto* slotAddr = reinterpret_cast<uint8_t*>(static_cast<uintptr_t>(cur));
        void* node = *reinterpret_cast<void**>(slotAddr);
        void* sub = static_cast<uint8_t*>(node) + 0x08;
        void* vtbl = lift_field<void*>(sub, 0x00);
        SlotFn slot = reinterpret_cast<SlotFn>(lift_field<void*>(vtbl, 0x38));
        slot(sub);
    }

    const int32_t result = ext_00594000();
    ext_00598A90(reinterpret_cast<void*>(static_cast<uintptr_t>(static_cast<uint32_t>(result))));
}
} // namespace lift_004E1F50

// [0x004EFDF0]
namespace lift_004EFDF0 {
// @name StringPairList::clear
// @class StringPairList
// @summary Clears all nodes in a doubly-linked list of string pairs and resets size to zero.
// @field StringPairList +0x04 void* head
// @field StringPairList +0x08 uint32_t size

extern void ext_006A5C5C(void* ptr);
extern uintptr_t mem_00924FF4;

void __thiscall fn_004EFDF0(void* self) {
    uint8_t* obj = static_cast<uint8_t*>(self);
    uint8_t* head = lift_field<uint8_t*>(obj, 0x04);
    uint8_t* node = lift_field<uint8_t*>(head, 0x00);

    lift_field<uint8_t*>(head, 0x00) = head;
    head = lift_field<uint8_t*>(obj, 0x04);
    lift_field<uint8_t*>(head, 0x04) = head;
    lift_field<uint32_t>(obj, 0x08) = 0;

    using StringDtor = void(__thiscall*)(void*);
    auto dtor = reinterpret_cast<StringDtor>(mem_00924FF4);

    while (node != lift_field<uint8_t*>(obj, 0x04)) {
        uint8_t* next = lift_field<uint8_t*>(node, 0x00);
        uint8_t* payload = node + 0x08;
        dtor(payload + 0x1C);
        dtor(payload);
        ext_006A5C5C(node);
        node = next;
    }
}
} // namespace lift_004EFDF0

// [0x004EC160]
namespace lift_004EC160 {
// @name StringMapTree::eraseSubtree
// @class StringMapTree
// @summary Recursively erases a red-black tree subtree of std::string key-value nodes
// @field TreeNode +0x00 TreeNode* left
// @field TreeNode +0x08 TreeNode* right
// @field TreeNode +0x0c uint8_t[28] key
// @field TreeNode +0x28 uint8_t[28] value
// @field TreeNode +0x45 uint8_t isNil


void __cdecl ext_006A5C5C(void* ptr);
extern void (__thiscall *mem_00924FF4)(void* str);

void __thiscall fn_004EC160(void* self, void* nodePtr) {
    uint8_t* node = static_cast<uint8_t*>(nodePtr);
    while (lift_field<uint8_t>(node, 0x45) == 0) {
        fn_004EC160(self, lift_field<void*>(node, 0x08));
        uint8_t* left = lift_field<uint8_t*>(node, 0x00);
        mem_00924FF4(node + 0x28);
        mem_00924FF4(node + 0x0C);
        ext_006A5C5C(node);
        node = left;
    }
}
} // namespace lift_004EC160

// [0x004E7390]
namespace lift_004E7390 {
extern void* __cdecl ext_006A6E9E(void* ptr, int32_t vfDelta, void* srcType, void* targetType, int32_t isReference);
extern bool (__cdecl* mem_00924EF4)(const void* lhs, const void* rhs);

// @name compareObjectsByTypeOrName
// @summary Compares two polymorphic objects by dynamic-casted fields (+0x98, +0x9C) or falls back to comparing their vtable+0x24 string pointers.
// @field Object +0x98 int32_t field_0x98
// @field Object +0x9c int32_t field_0x9c
extern bool __stdcall fn_004E7390(void* lhs, void* rhs) {
    void* castLhs = ext_006A6E9E(lhs, 0, reinterpret_cast<void*>(0x00A2E2D8), reinterpret_cast<void*>(0x00A2E2BC), 0);
    if (castLhs != nullptr) {
        void* castRhs = ext_006A6E9E(rhs, 0, reinterpret_cast<void*>(0x00A2E2D8), reinterpret_cast<void*>(0x00A2E2BC), 0);
        if (castRhs != nullptr) {
            int32_t lhsKey = lift_field<int32_t>(castLhs, 0x98);
            int32_t rhsKey = lift_field<int32_t>(castRhs, 0x98);
            if (lhsKey != rhsKey) {
                return lhsKey < rhsKey;
            }
            return lift_field<int32_t>(castLhs, 0x9c) > lift_field<int32_t>(castRhs, 0x9c);
        }
    }

    using GetNameFn = const void* (__thiscall*)(void*);
    const void* rhsName = (*reinterpret_cast<GetNameFn*>(*reinterpret_cast<uintptr_t*>(rhs) + 0x24))(rhs);
    const void* lhsName = (*reinterpret_cast<GetNameFn*>(*reinterpret_cast<uintptr_t*>(lhs) + 0x24))(lhs);
    return mem_00924EF4(lhsName, rhsName);
}
} // namespace lift_004E7390

// [0x004EF5E0]
namespace lift_004EF5E0 {
extern void (*mem_00925134)(void);

// @name checkVectorElementsFieldMatch
// @summary Checks if vector size matches this+0x30 and all elements share the same +0x40->+0x48 value.
// @field this +0x30 int32_t expectedCount
bool __thiscall sub_004EF5E0(void* self, void* vec) {
    uint8_t* pThis = reinterpret_cast<uint8_t*>(self);
    uint8_t* pVec = reinterpret_cast<uint8_t*>(vec);

    uint32_t begin = lift_field<uint32_t>(pVec, 0x4);
    int32_t count = 0;
    if (begin != 0) {
        uint32_t end = lift_field<uint32_t>(pVec, 0x8);
        count = static_cast<int32_t>(end - begin) >> 2;
    }

    int32_t expectedCount = lift_field<int32_t>(pThis, 0x30);
    if (count != expectedCount) {
        return false;
    }

    if (begin == 0 || (static_cast<int32_t>(lift_field<uint32_t>(pVec, 0x8) - begin) >> 2) == 0) {
        mem_00925134();
    }

    uint32_t* elems = reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(lift_field<uint32_t>(pVec, 0x4)));
    uint8_t* firstElem = reinterpret_cast<uint8_t*>(static_cast<uintptr_t>(elems[0]));
    uint8_t* firstInner = reinterpret_cast<uint8_t*>(static_cast<uintptr_t>(lift_field<uint32_t>(firstElem, 0x40)));
    uint8_t* firstTarget = reinterpret_cast<uint8_t*>(static_cast<uintptr_t>(lift_field<uint32_t>(firstInner, 0x0)));
    uint32_t targetVal = lift_field<uint32_t>(firstTarget, 0x48);

    for (int32_t i = 1; i < expectedCount; ++i) {
        uint32_t curBegin = lift_field<uint32_t>(pVec, 0x4);
        if (curBegin == 0 || static_cast<uint32_t>(i) >= static_cast<uint32_t>(static_cast<int32_t>(lift_field<uint32_t>(pVec, 0x8) - curBegin) >> 2)) {
            mem_00925134();
        }
        uint32_t* curElems = reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(lift_field<uint32_t>(pVec, 0x4)));
        uint8_t* curElem = reinterpret_cast<uint8_t*>(static_cast<uintptr_t>(curElems[i]));
        uint8_t* curInner = reinterpret_cast<uint8_t*>(static_cast<uintptr_t>(lift_field<uint32_t>(curElem, 0x40)));
        uint8_t* curTarget = reinterpret_cast<uint8_t*>(static_cast<uintptr_t>(lift_field<uint32_t>(curInner, 0x0)));
        if (targetVal != lift_field<uint32_t>(curTarget, 0x48)) {
            return false;
        }
    }

    return true;
}
} // namespace lift_004EF5E0

// [0x004EFBA0]
namespace lift_004EFBA0 {
struct TreeIter {
    void* container;
    void* node;
};

void __thiscall ext_0041A190(void* self, TreeIter* out, void* const* key);
extern void (__cdecl *mem_00925134)();

// @name sub_004EFBA0
// @summary Walk ancestor chain via +0x38 to find first matching entry in tree at +0x240, or return +0x230
// @field this +0x230 uint32_t field_0x230
// @field this +0x240 uint32_t field_0x240
uint32_t __thiscall sub_004EFBA0(void* self, void* arg0) {
    void* key = lift_field<void*>(arg0, 0x38);
    if (key == nullptr) {
        return lift_field<uint32_t>(self, 0x230);
    }

    void* tree = static_cast<uint8_t*>(self) + 0x240;

    while (key != nullptr) {
        TreeIter iter{};
        ext_0041A190(tree, &iter, &key);

        void* header = lift_field<void*>(tree, 0x4);
        if (iter.container == nullptr || iter.container != tree) {
            mem_00925134();
        }

        if (iter.node != header) {
            if (iter.container == nullptr) {
                mem_00925134();
            }
            if (iter.node == lift_field<void*>(iter.container, 0x4)) {
                mem_00925134();
            }
            return lift_field<uint32_t>(iter.node, 0x10);
        }

        key = lift_field<void*>(key, 0x38);
    }

    return lift_field<uint32_t>(self, 0x230);
}
} // namespace lift_004EFBA0

// [0x004E74D0]
namespace lift_004E74D0 {
// @name medianOfThreeObjects
// @summary Sorts three object pointers in-place (median-of-three) using compareObjectsByTypeOrName.


extern bool __stdcall ext_004E7390(void* lhs, void* rhs);

static inline void swapPtrs(void** a, void** b) {
    void* tmp = *a;
    *a = *b;
    *b = tmp;
}

extern void __cdecl fn_004E74D0(void** first, void** mid, void** last) {
    if (ext_004E7390(*mid, *first)) {
        swapPtrs(first, mid);
    }
    if (ext_004E7390(*last, *mid)) {
        swapPtrs(mid, last);
    }
    if (ext_004E7390(*mid, *first)) {
        swapPtrs(first, mid);
    }
}
} // namespace lift_004E74D0

// [0x004E7430]
namespace lift_004E7430 {
// @name pushHeapByTypeOrName
// @summary Inserts a pointer into a max-heap array by sifting up using compareObjectsByTypeOrName.


extern bool __stdcall ext_004E7390(void* lhs, void* rhs);

extern void __cdecl fn_004E7430(void** arr, int32_t holeIndex, int32_t topIndex, void* val) {
    int32_t parent = (holeIndex - 1) / 2;
    while (topIndex < holeIndex && ext_004E7390(arr[parent], val)) {
        arr[holeIndex] = arr[parent];
        holeIndex = parent;
        parent = (parent - 1) / 2;
    }
    arr[holeIndex] = val;
}
} // namespace lift_004E7430

// [0x004ED6B0]
namespace lift_004ED6B0 {
// @name sub_004ED6B0_dtor
// @class Unknown
// @summary Destructor that resets vtables, tidies a std::vector<std::string> at +0x3c, destroys a std::string at +0x1c, and calls base destructor 0x00692BA0.
// @field Unknown +0x00 uint32_t vftable_00
// @field Unknown +0x04 uint32_t vftable_04
// @field Unknown +0x18 uint32_t vftable_18
// @field Unknown +0x1c uint8_t field_0x1c
// @field Unknown +0x3c uint8_t field_0x3c


extern void __thiscall ext_004026E0(void* this_ptr);
extern void __thiscall ext_00692BA0(void* this_ptr);
extern void (__thiscall* mem_00924FF4)(void* this_ptr);

void __thiscall fn_004ED6B0(void* this_ptr) {
    uint8_t* self = static_cast<uint8_t*>(this_ptr);

    lift_field<uint32_t>(self, 0x00) = 0x009451B4u;
    lift_field<uint32_t>(self, 0x04) = 0x00945184u;
    lift_field<uint32_t>(self, 0x18) = 0x00945174u;

    ext_004026E0(self + 0x3C);
    mem_00924FF4(self + 0x1C);
    ext_00692BA0(self);
}
} // namespace lift_004ED6B0

// [0x004E7540]
namespace lift_004E7540 {
extern bool __stdcall ext_004E7390(void* lhs, void* rhs);
extern void __cdecl ext_004E7430(void** arr, int32_t holeIndex, int32_t topIndex, void* val);

// @name siftDownHeapByTypeOrName
// @summary Sift-down step of a max-heap of object pointers: floats the hole at `start` down to a leaf using compareObjectsByTypeOrName, then sifts the value up via pushHeapByTypeOrName.
extern void __cdecl fn_004E7540(void** arr, int32_t start, int32_t len, void* val, void* extra) {
    (void)extra;  // arg5 is pushed for the callee's 5th stack slot; ext_004E7430 declares only 4 params.
    int32_t hole = start;
    int32_t child = 2 * hole + 2;
    while (child < len) {
        // Pick left child (child - 1) when compare(right, left) holds, as in the original asm.
        if (ext_004E7390(arr[child], arr[child - 1])) {
            child--;
        }
        arr[hole] = arr[child];
        hole = child;
        child = 2 * child + 2;
    }
    if (child == len) {
        // Only a left child remains; it is the last element.
        arr[hole] = arr[len - 1];
        hole = len - 1;
    }
    ext_004E7430(arr, hole, start, val);
}
} // namespace lift_004E7540

// [0x004EFDD0] sub_004EFDD0 (29 bytes)
namespace lift_004EFDD0 {
// @name sub_004EFDD0
// @summary Auto-lifted identical-shape clone of 0x004F02A0 (StringPairList::clearAndReleaseHandle).
namespace lift_004F02A0 {
// Known callee 0x004EFDF0: StringPairList::clear (Clears all nodes in a doubly-linked list of string pairs and resets size to zero.)
extern void ext_004AEE60(void* self);
// Known callee 0x006A5C5C: thunk_MFC80_ord_764 (IAT jump thunk forwarding to MFC80!ord_764.)
extern void ext_006A5C5C(DWORD arg);

// @name StringPairList::clearAndReleaseHandle
// @class StringPairList
// @summary Clears the string pair list, passes the value at +0x04 to MFC80 ord_764, then zeroes +0x04.
// @field StringPairList +0x04 DWORD field_0x04
void fn_004EFDD0(void* self) {
    ext_004AEE60(self);
    DWORD value = lift_field<DWORD>(self, 0x04);
    ext_006A5C5C(value);
    lift_field<DWORD>(self, 0x04) = 0;
}
} // namespace lift_004F02A0
} // namespace lift_004EFDD0

// [0x004EF8D0] sub_004EF8D0 (154 bytes)
namespace lift_004EF8D0 {
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk forwarding to MSVCR80!_CxxThrowException.)
extern void ext_006A6DD2();
extern int mem_00924FE4;
extern int mem_009251C4;
extern int mem_00924FE0;

// @name BoundedAdvanceUsedCount
// @class Unknown
// @summary Adds n to the uint32 counter at +0x08 if (0x2762762 - counter) >= n (unsigned); otherwise raises a C++ exception via the throw thunk.
// @field Unknown +0x08 uint32_t field_0x08
void fn_004EF8D0(void* self, uint32_t n) {
    uint32_t& used = lift_field<uint32_t>(self, 0x08);
    const uint32_t remaining = 0x02762762u - used;
    if (remaining >= n) {
        used += n;
        return;
    }
    // Error path: the original builds a std::string / std::exception temporary
    // from the rdata constants and throws. Only the throw itself is modelled here.
    (void)&mem_00924FE4;
    (void)&mem_009251C4;
    (void)&mem_00924FE0;
    ext_006A6DD2();
}
} // namespace lift_004EF8D0

// [0x004EC2C0] sub_004EC2C0 (52 bytes)
namespace lift_004EC2C0 {
// Known callee 0x004EC1F0: sub_004EC1F0 (thiscall: ECX = self, 5 stack args, callee cleans up)
extern uint32_t ext_004EC1F0(void* self, void* out, void* arg2, uint32_t arg3, void* arg4, void* arg5);
// Known callee 0x006A5C5C: thunk_MFC80_ord_764 (cdecl, 1 stack arg; IAT jump thunk forwarding to MFC80!ord_764.)
extern void ext_006A5C5C(uint32_t arg);

// @name ResetObjectRefFields
// @class Unknown
// @summary Calls ext_004EC1F0 with a scratch buffer and the pointer at +0x4 (and its first dword), forwards the +0x4 value to ext_006A5C5C, then zeroes the +0x4 and +0x8 fields.
// @field Unknown +0x04 void* field_0x04
// @field Unknown +0x08 uint32_t field_0x08
extern uint32_t fn_004EC2C0(void* self) {
    uint32_t scratch[2];
    void* const obj = lift_field<void*>(self, 0x04);
    const uint32_t first = lift_field<uint32_t>(obj, 0x00);

    ext_004EC1F0(self, scratch, self, first, self, obj);

    const uint32_t ptrVal = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(lift_field<void*>(self, 0x04)));
    ext_006A5C5C(ptrVal);

    lift_field<void*>(self, 0x04) = nullptr;
    lift_field<uint32_t>(self, 0x08) = 0;
    return 0; // eax is zeroed by xor before ret
}
} // namespace lift_004EC2C0

// [0x004E8640] sub_004E8640 (194 bytes)
namespace lift_004E8640 {
// Known callee 0x00596660: eraseInt32Range (erases [first,last) from a 4-byte-element buffer by shifting the tail down, sets end, writes a 2-pointer result to out).
extern void ext_00596660(void* self, void** out, void* a2, int32_t* first, void* a4, int32_t* last);
// Unlifted callee 0x0050ED40 (thiscall, one stack arg: element count).
extern void ext_0050ED40(void* self, int32_t count);
// Known callee 0x006A6E9E: thunk_MSVCR80___RTDynamicCast (IAT jump thunk to MSVCR80!__RTDynamicCast).
extern void* ext_006A6E9E(void* obj, int32_t vfDelta, void* srcType, void* targetType, int32_t isReference);
// Unlifted callee 0x0041A920 (thiscall, one stack arg: pointer to the cast result slot).
extern void ext_0041A920(void* self, uint32_t* slot);
// CRT _invalid_parameter_noinfo import slot.
extern uint32_t mem_00925134;

// @name AssignDynamicCastRangeIntoSelf
// @summary Validates self's [begin,end) range, erases it via fn_00596660, resizes self to the element count of dst, then for each dst element (range-checked) dynamic-casts it and forwards non-null results to ext_0041A920.
// @field Self +0x04 int32_t* field_0x04
// @field Self +0x08 int32_t* field_0x08
// @field Out +0x04 int32_t* field_0x04
// @field Out +0x08 int32_t* field_0x08
void fn_004E8640(void* dst, void* self) {
    // CRT invalid-parameter handler (loaded from the import slot, returns).
    auto invalid_parameter = []() {
        reinterpret_cast<void (*)()>(static_cast<uintptr_t>(mem_00925134))();
    };

    // Validate self's range (original performs this check twice).
    if (lift_field<int32_t*>(self, 0x04) > lift_field<int32_t*>(self, 0x08)) {
        invalid_parameter();
    }
    if (lift_field<int32_t*>(self, 0x04) > lift_field<int32_t*>(self, 0x08)) {
        invalid_parameter();
    }

    // Erase self's [begin,end) range.
    int32_t* first = lift_field<int32_t*>(self, 0x04);
    int32_t* last = lift_field<int32_t*>(self, 0x08);
    void* out[2] = {};
    ext_00596660(self, out, self, first, self, last);

    // Element count of dst (0 when dst begin is null), used to resize self.
    int32_t* dstBegin = lift_field<int32_t*>(dst, 0x04);
    int32_t count = dstBegin != nullptr
                        ? static_cast<int32_t>(lift_field<int32_t*>(dst, 0x08) - dstBegin)
                        : 0;
    ext_0050ED40(self, count);

    // Walk dst elements.
    int32_t* it = lift_field<int32_t*>(dst, 0x04);
    for (;;) {
        if (lift_field<int32_t*>(dst, 0x04) > lift_field<int32_t*>(dst, 0x08)) {
            invalid_parameter();
        }
        int32_t* end = lift_field<int32_t*>(dst, 0x08);
        if (it == end) {
            break;
        }
        if (it >= lift_field<int32_t*>(dst, 0x08)) {
            invalid_parameter();
        }

        // Element is a 32-bit object pointer; dynamic-cast it to the target type.
        void* obj = reinterpret_cast<void*>(static_cast<uintptr_t>(static_cast<uint32_t>(*it)));
        uint32_t slot = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(
            ext_006A6E9E(obj, 0,
                        reinterpret_cast<void*>(static_cast<uintptr_t>(0x00A2E2D8)),
                        reinterpret_cast<void*>(static_cast<uintptr_t>(0x00A2E2BC)),
                        0)));
        if (slot != 0) {
            ext_0041A920(self, &slot);
        }

        if (it >= lift_field<int32_t*>(dst, 0x08)) {
            invalid_parameter();
        }
        it += 1;
    }
}
} // namespace lift_004E8640

// [0x004EE630] sub_004EE630 (114 bytes)
namespace lift_004EE630 {
// Known callee 0x004ECC40: fn_004ECC40 (returns the static object address; auto-lifted clone of 0x004CAE30).
extern void* ext_004ECC40();
// Known callee 0x00475960: thiscall, ecx = self, stack = (str, slot, flag), callee cleans 12 bytes.
extern void __thiscall ext_00475960(void* self, void* str, void** slot, int flag);
// MSVCP80 import slots: basic_string(const char*) ctor and ~basic_string() dtor.
extern void* mem_00924FE4;
extern void* mem_00924FF4;

using string_ctor_fn = void(__thiscall*)(void* self, const char* s);
using string_dtor_fn = void(__thiscall*)(void* self);

// @name dispatchWithStaticObjectAndTempString
// @class <unknown>
// @summary Gets the static object from ext_004ECC40, builds a temporary std::string from the argument, calls ext_00475960 on this->field_0x00 with the temporary and the object slot (flag 1), then destroys the temporary.
// @field <unknown> +0x00 void* field_0x00
void __thiscall fn_004EE630(void* self, const char* arg) {
    void* obj = ext_004ECC40();

    unsigned char str[0x1C];
    (*reinterpret_cast<string_ctor_fn*>(&mem_00924FE4))(str, arg);

    // RAII replaces the original SEH frame: the temporary is destroyed on normal return and on unwind.
    struct TempStringGuard {
        unsigned char* s;
        ~TempStringGuard() { (*reinterpret_cast<string_dtor_fn*>(&mem_00924FF4))(s); }
    } guard{str};

    ext_00475960(lift_field<void*>(self, 0x00), str, &obj, 1);
}
} // namespace lift_004EE630
