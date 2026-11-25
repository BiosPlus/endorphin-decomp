// Lifted C++ translation unit: lifted/leaf/decompiled_4D0000.cpp
#include "lift_compat.h"
#include <new>
#include <string>
#include <cstring>

// [0x004DE130] sub_004DE130 (35 bytes)
namespace lift_004DE130 {
extern void* mem_00AE29D0;
extern void __thiscall ext_0047C480(void* self, uint32_t arg);
extern void ext_004C1AC0(void* self, const int32_t* range);
extern void __thiscall ext_004C1AC0(void* self, const int32_t* range);
extern void __thiscall ext_0047C480(void* self, uint32_t value);

// @name sub_004DE130
// @summary Auto-lifted identical-shape clone of 0x004A9C90 (NMData::BehaviourData::vfunc_73).
void __thiscall fn_004DE130(void* self, const int32_t* range) {
    ext_004C1AC0(self, range);
    uint32_t field_0x168 = lift_field<uint32_t>(self, 0x168);
    ext_0047C480(mem_00AE29D0, field_0x168);
}
} // namespace lift_004DE130

// [0x004DE440] sub_004DE440 (12 bytes)
namespace lift_004DE440 {
// Known callee 0x004DE160: sub_004DE160 (Returns (this->field_0x15c - this->field_0x9a0) + 1 as a 32-bit signed value.)
extern int32_t __fastcall ext_004DE160(void* self);

// @name ComputeRangeCountWithBias
// @summary Returns ext_004DE160(self) plus this->field_0x9d0 as a 32-bit signed value.
// @field self +0x9D0 int32_t field_0x9d0
int32_t fn_004DE440(void* self) {
    int32_t base = ext_004DE160(self);
    int32_t bias = lift_field<int32_t>(self, 0x9D0);
    return base + bias;
}
} // namespace lift_004DE440

// [0x004D0E00] sub_004D0E00 (16 bytes)
namespace lift_004D0E00 {
// Known callee 0x004D0B60: GetTableEntry28Address (Returns the address of entry `index` in a 28-byte-stride table based at 0x00AE5C10 (0xAE5C10 + index * 28).)
extern void* ext_004D0B60(uint32_t index);

// @name GetTableEntryForSelfIndex
// @class (none)
// @summary Reads the uint32 index stored at self+0x188 and returns the 28-byte-stride table entry address for it.
// @field self +0x188 uint32_t field_0x188
extern void* fn_004D0E00(void* self) {
    uint32_t index = lift_field<uint32_t>(self, 0x188);
    return ext_004D0B60(index);
}
} // namespace lift_004D0E00

// [0x004D2C70] sub_004D2C70 (25 bytes)
namespace lift_004D2C70 {
// @name sub_004D2C70
// @summary Auto-lifted identical-shape clone of 0x00594790 (Unknown::releaseHeldObject (descriptive; owner class not identified)).
namespace lift_00594790 {
// @name Unknown::releaseHeldObject (descriptive; owner class not identified)
// @class Unknown
// @summary Reads a pointer at +0x00 of self; if non-null, invokes ext_00675650 with it as the this-pointer, then passes it to ext_006A5C5C as a single cdecl argument.
// @field Unknown +0x00 void* heldPtr

// Callee: sub_00675650 is a thiscall-style forwarder; ecx carries the object.
extern void ext_004D2B40(void* thisPtr);
// Callee: thunk_MFC80_ord_764 is a cdecl IAT thunk taking one argument (caller cleans up).
extern void ext_006A5C5C(void* arg);

void fn_004D2C70(void* self) {
    void* held = lift_field<void*>(self, 0x00);
    if (held != nullptr) {
        ext_004D2B40(held);
        ext_006A5C5C(held);
    }
}
} // namespace lift_00594790
} // namespace lift_004D2C70

// [0x004DA800] sub_004DA800 (25 bytes)
namespace lift_004DA800 {
// @name sub_004DA800
// @summary Auto-lifted identical-shape clone of 0x00594790 (Unknown::releaseHeldObject (descriptive; owner class not identified)).
namespace lift_00594790 {
// @name Unknown::releaseHeldObject (descriptive; owner class not identified)
// @class Unknown
// @summary Reads a pointer at +0x00 of self; if non-null, invokes ext_00675650 with it as the this-pointer, then passes it to ext_006A5C5C as a single cdecl argument.
// @field Unknown +0x00 void* heldPtr

// Callee: sub_00675650 is a thiscall-style forwarder; ecx carries the object.
extern void ext_004DA2B0(void* thisPtr);
// Callee: thunk_MFC80_ord_764 is a cdecl IAT thunk taking one argument (caller cleans up).
extern void ext_006A5C5C(void* arg);

void fn_004DA800(void* self) {
    void* held = lift_field<void*>(self, 0x00);
    if (held != nullptr) {
        ext_004DA2B0(held);
        ext_006A5C5C(held);
    }
}
} // namespace lift_00594790
} // namespace lift_004DA800

// [0x004DDE10] sub_004DDE10 (33 bytes)
namespace lift_004DDE10 {
// @name Unknown::forwardStringToVtableSlot2
// @class Unknown
// @summary Passes the C string of a std::string argument to virtual slot 2 of this object's vtable (thiscall, ret 4).
// @field Unknown +0x00 void* vtable vtable pointer (dereferenced to fetch slot 2 at +0x08)

// Thiscall on MSVC x86; empty macro elsewhere so this still type-checks on Linux.
using VSlot2Fn = void(__thiscall*)(void* self, const char* text);

void fn_004DDE10(void* self, const std::string& text) {
    void** vtable = lift_field<void**>(self, 0x00);
    VSlot2Fn slot2 = reinterpret_cast<VSlot2Fn>(vtable[2]);
    slot2(self, text.c_str());
}
} // namespace lift_004DDE10

// [0x004DE330] sub_004DE330 (55 bytes)
namespace lift_004DE330 {
extern void ext_0067E990(void* self, uint32_t arg);
extern int mem_00B40640;

// @name Unknown::CopyRecordAndForward
// @summary Copies a 64-byte record from the source pointer into self+0x38, then calls the object at self+0x30 (vtable slot 5) with the global mem_00B40640 and forwards the returned value to ext_0067E990 on self+0x38.
// @field Unknown +0x30 void* subObject
// @field Unknown +0x38 uint8_t recordCopy[0x40]
void fn_004DE330(void* self, const void* src) {
    // rep movsd, ecx = 0x10 dwords = 64 bytes copied from src to self+0x38.
    void* rec = &lift_field<uint8_t>(self, 0x38);
    std::memcpy(rec, src, 0x40);

    // eax = [self+0x30]; ecx = eax + 0x08 (interface pointer, this for the call).
    void* obj = lift_field<void*>(self, 0x30);
    void* iface = static_cast<uint8_t*>(obj) + 0x08;

    // Call vtable slot 5 (offset 0x14) on the interface with mem_00B40640 as the argument.
    void** vtbl = lift_field<void**>(iface, 0);
    using SlotFn = uint32_t (*)(void* thisPtr, int arg);
    auto slot5 = reinterpret_cast<SlotFn>(vtbl[5]);
    uint32_t result = slot5(iface, mem_00B40640);

    // Forward the result to ext_0067E990 with this = self+0x38.
    ext_0067E990(rec, result);
}
} // namespace lift_004DE330

// [0x004D3DE0]
namespace lift_004D3DE0 {
// @name Unknown::ForwardToChildrenIfFlag
// @class Unknown
// @summary If the flag argument is nonzero, forwards the object at this+0x1EC entries to the subobject at global-object+0xF8.
// @field Unknown +0x1EC int32_t field_0x1EC

extern int32_t __cdecl fn_00594000(void);
extern void __fastcall fn_00642680(void* self);

// __thiscall: this in ECX, one stack argument (flag), callee cleans up 4 bytes (ret 4).
extern void __thiscall fn_004D3DE0(void* self, uint8_t flag) {
    if (flag == 0) {
        return;
    }

    uint8_t* base = static_cast<uint8_t*>(self);

    uintptr_t global_obj = static_cast<uintptr_t>(static_cast<uint32_t>(fn_00594000()));
    uintptr_t sub = static_cast<uintptr_t>(*reinterpret_cast<uint32_t*>(global_obj + 0xF8));

    // Count is re-read each iteration, matching the original cmp against [edi+0x1ec].
    for (int32_t i = 0; i < *reinterpret_cast<int32_t*>(base + 0x1EC); ++i) {
        fn_00642680(reinterpret_cast<void*>(sub));
    }
}
} // namespace lift_004D3DE0

// [0x004D0B20]
namespace lift_004D0B20 {
// @name FindNameTableIndex
// @summary Scans a 3-entry, 28-byte-stride std::string table at 0xAE5C10 and returns the index of the entry equal to the argument, or 4 if none match.

// Address of the MSVC string equality routine (loaded from .rdata 0x924FC4).
extern const std::uint32_t mem_00924FC4;
// Table of std::string-sized entries (28 bytes each) at 0x00AE5C10..0x00AE5C64.
extern const std::uint8_t mem_00AE5C10[];

namespace {
using StringEqualFn = bool (*)(const void* lhs, const void* rhs);
}

int FindNameTableIndex(const void* name) {
    const auto eq = reinterpret_cast<StringEqualFn>(
        static_cast<std::uintptr_t>(mem_00924FC4));
    constexpr std::ptrdiff_t kEntryStride = 0x1C;
    constexpr std::ptrdiff_t kTableSize = 0x54; // 0xAE5C64 - 0xAE5C10

    int index = 0;
    for (std::ptrdiff_t off = 0; off < kTableSize; off += kEntryStride, ++index) {
        const void* entry = mem_00AE5C10 + off;
        if (eq(name, entry)) {
            return index;
        }
    }
    return 4;
}
} // namespace lift_004D0B20

// [0x004D2590] sub_004D2590 (87 bytes)
namespace lift_004D2590 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (Calls ext_00672000 on self (thiscall, ECX = self), then stores the single stack argument into the first DWORD of self; returns that value.)
extern DWORD ext_0067A670(void* self, DWORD value);
extern DWORD mem_00AE55B8;
extern DWORD mem_00AE55B4;

// @name initStaticObjectOnce_004D2590
// @summary One-time initializer for the static object at mem_00AE55B4; returns its address.
// (No @class: free function.) (No @field: the function does not access any member offset of a class; it only touches globals mem_00AE55B8 and mem_00AE55B4.)
void* fn_004D2590() {
    // Original wraps this in an SEH frame (fs:[0] push/restore, try-level set to 0 around the call).
    // The frame only guards the init call; it is dropped here as non-portable.
    if ((mem_00AE55B8 & 1u) == 0) {
        mem_00AE55B8 |= 1u;
        ext_0067A670(&mem_00AE55B4, 0);
        mem_00AE55B4 = 0x947B0Cu;
    }
    return &mem_00AE55B4;
}
} // namespace lift_004D2590

// [0x004D25F0] sub_004D25F0 (87 bytes)
namespace lift_004D25F0 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (Calls ext_00672000 on self (thiscall, ECX = self), then stores the single stack argument into the first DWORD of self; returns that value.)
extern DWORD ext_0067A670(void* self, DWORD value);
extern DWORD mem_00AE55C0;
extern DWORD mem_00AE55BC;

// @name initStaticObjectOnce_004D25F0
// @summary One-time initializer guard: on first call sets bit 0 of mem_00AE55C0, runs ext_0067A670 on mem_00AE55BC, then sets mem_00AE55BC to 0x947CBC; returns &mem_00AE55BC.
// Note: the original pushes an SEH frame (fs:[0]) around this; it has no observable effect on the result and is omitted.
// The stack argument passed to ext_0067A670 in the original is a stack slot that is overwritten afterwards, so 0 is passed here.
DWORD fn_004D25F0() {
    if ((mem_00AE55C0 & 1u) == 0) {
        mem_00AE55C0 |= 1u;
        ext_0067A670(&mem_00AE55BC, 0);
        mem_00AE55BC = 0x947CBCu;
    }
    return static_cast<DWORD>(reinterpret_cast<uintptr_t>(&mem_00AE55BC));
}
} // namespace lift_004D25F0

// [0x004D2650] sub_004D2650 (87 bytes)
namespace lift_004D2650 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (calls ext_00672000 on self (thiscall, ECX = self), then stores the single stack argument into the first DWORD of self; returns that value.)
extern DWORD ext_0067A670(void* self, DWORD value);
extern DWORD mem_00AE55C8;
extern DWORD mem_00AE55C4;

// @name initStaticObjectOnce_004D2650
// @summary One-time initializer guarded by bit 0 of mem_00AE55C8; initializes mem_00AE55C4 and returns its address.
void* fn_004D2650() {
    // Guard bit 0 of mem_00AE55C8: run the initializer only once.
    if ((mem_00AE55C8 & 1u) == 0) {
        mem_00AE55C8 |= 1u;
        ext_0067A670(&mem_00AE55C4, 0u);
        mem_00AE55C4 = 0x947E6Cu;
    }
    return &mem_00AE55C4;
}
} // namespace lift_004D2650

// [0x004D26F0] sub_004D26F0 (30 bytes)
namespace lift_004D26F0 {
// Known callee 0x004D2590: initStaticObjectOnce_004D2590 (One-time initializer for the static object at mem_00AE55B4; returns its address.)
extern void* ext_004D2590();

// @name storeValueAndStaticObjectAddr
// @summary Stores a 32-bit value at dst[0] and the address of the one-time static object (from ext_004D2590) at dst[1].
void fn_004D26F0(uint32_t* dst, uint32_t value) {
    void* obj = ext_004D2590();
    dst[0] = value;
    dst[1] = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(obj));
}
} // namespace lift_004D26F0

// [0x004D2730] sub_004D2730 (30 bytes)
namespace lift_004D2730 {
// Known callee 0x004D2650: initStaticObjectOnce_004D2650 (One-time initializer guarded by bit 0 of mem_00AE55C8; initializes mem_00AE55C4 and returns its address.)
extern void* ext_004D2650();

// @name storeValueAndStaticObjectAddr_004D2730
// @summary Writes the value into dst[0] and the address returned by initStaticObjectOnce_004D2650 into dst[1].
void fn_004D2730(DWORD* dst, DWORD value) {
    DWORD staticAddr = static_cast<DWORD>(reinterpret_cast<uintptr_t>(ext_004D2650()));
    dst[0] = value;
    dst[1] = staticAddr;
}
} // namespace lift_004D2730

// [0x004D2710] sub_004D2710 (30 bytes)
namespace lift_004D2710 {
// Known callee 0x004D25F0: initStaticObjectOnce_004D25F0 (One-time initializer guard: on first call sets bit 0 of mem_00AE55C0, runs ext_0067A670 on mem_00AE55BC, then sets mem_00AE55BC to 0x947CBC; returns &mem_00AE55BC.)
extern DWORD ext_004D25F0();

// @name storeValueWithStaticObjectAddr
// @summary Writes value into dst[0] and the address returned by initStaticObjectOnce_004D25F0 into dst[1].
// @field Unknown +0x00 DWORD field_0x00
// @field Unknown +0x04 DWORD field_0x04
void fn_004D2710(DWORD* dst, DWORD value) {
    DWORD addr = ext_004D25F0();
    dst[0] = value;
    dst[1] = addr;
}
} // namespace lift_004D2710

// [0x004DE720] sub_004DE720 (87 bytes)
namespace lift_004DE720 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: self in ECX, one stack argument; stores value into self[0] and returns it).
extern DWORD ext_0067A670(void* self, DWORD value);
extern DWORD mem_00AE6418;
extern DWORD mem_00AE6414;

// @name getStaticObjectAddr_004DE720
// @summary One-time initializes the global object at 0x00AE6414 (guarded by the flag bit at 0x00AE6418) and returns its address.
// @field StaticObject_00AE6414 +0x00 DWORD field_0x00
void* fn_004DE720() {
    if ((mem_00AE6418 & 1u) == 0) {
        mem_00AE6418 |= 1u;
        ext_0067A670(&mem_00AE6414, 0);
        mem_00AE6414 = 0x00949DACu;
    }
    return &mem_00AE6414;
}
} // namespace lift_004DE720

// [0x004DE370] sub_004DE370 (95 bytes)
namespace lift_004DE370 {
// @name FillRangeWithElement
// @summary Assigns the 8-byte element at src to every 8-byte slot in [begin, end), releasing each slot's previous object through its vtable.
// @field Element +0x00 uint32_t field_0x00
// @field Element +0x04 void* field_0x04
void fn_004DE370(void* begin, void* end, void* src) {
    // Each element is 8 bytes: a 4-byte value at +0 and an object pointer at +4.
    // Object vtable slots used: 30 (0x78) = release old object, 28 (0x70) = fetch value.
    // Calling convention is mapped to an explicit `this` first argument.
    if (begin == end) {
        return;
    }

    uint8_t* s = static_cast<uint8_t*>(src);
    for (uint8_t* d = static_cast<uint8_t*>(begin); d != static_cast<uint8_t*>(end); d += 8) {
        if (d == s) {
            continue;
        }

        // Release the object previously held by this slot.
        void* oldObj = lift_field<void*>(d, 4);
        if (oldObj) {
            void** vt = *static_cast<void***>(oldObj);
            auto release = reinterpret_cast<void (*)(void*, void*)>(vt[30]);
            release(oldObj, d);
        }

        // Share the source object.
        void* srcObj = lift_field<void*>(s, 4);
        lift_field<void*>(d, 4) = srcObj;

        // Fetch the value from the source object into the slot's first dword.
        uint32_t value = 0;
        if (srcObj) {
            void** vt = *static_cast<void***>(srcObj);
            auto fetch = reinterpret_cast<void (*)(void*, uint32_t*, void*)>(vt[28]);
            fetch(srcObj, &value, s);
        }
        lift_field<uint32_t>(d, 0) = value;
    }
}
} // namespace lift_004DE370

// [0x004D0D40] sub_004D0D40 (97 bytes)
namespace lift_004D0D40 {
// Callee at [0x924FC4]: std::operator==(const std::string&, const std::string&) (MSVCP80, __cdecl).
// Stored as a function-pointer slot; holds the thunk address 0x00629432.
extern uint32_t mem_00924FC4;
// Static table of 5 std::string entries (28 bytes each), 0x00AE5C68 .. 0x00AE5CF4.
extern uint8_t mem_00AE5C68[];

// @name FindNameIndexInTable
// @class Unknown
// @summary Scans a 5-entry static string table for the given name; stores the matching index (or 0) at self+0x190.
// @field Unknown +0x190 int32_t field_0x190
void fn_004D0D40(void* self, const void* name) {
    using StrEqFn = bool (*)(const void* lhs, const void* rhs);
    constexpr uint32_t kEntrySize = 0x1C;
    constexpr uint32_t kEntryCount = (0x00AE5CF4u - 0x00AE5C68u) / kEntrySize; // 5

    auto strEq = reinterpret_cast<StrEqFn>(static_cast<uintptr_t>(mem_00924FC4));
    int32_t result = 0;
    bool found = false;
    for (uint32_t i = 0; i < kEntryCount; ++i) {
        const void* entry = mem_00AE5C68 + i * kEntrySize;
        // Original pushes (entry, name); __cdecl call with name as first argument.
        if (strEq(name, entry)) {
            result = static_cast<int32_t>(i);
            found = true;
            break;
        }
    }
    if (!found) {
        result = 0;
    }
    *reinterpret_cast<int32_t*>(reinterpret_cast<uint8_t*>(self) + 0x190) = result;
}
} // namespace lift_004D0D40
