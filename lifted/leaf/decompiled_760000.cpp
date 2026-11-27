// Lifted C++ translation unit: lifted/leaf/decompiled_760000.cpp
#include "lift_compat.h"
#include <cstring>
#include <cstddef>

#include <cstddef>
namespace lift_00766210 {
// Known callee 0x006D2A30: sub_006D2A30 (Returns `this` pointer unchanged.)
extern void* __fastcall ext_006D2A30(void* self);

// @name scaleDoubleBlock16
// @summary Multiplies 16 consecutive doubles (128 bytes) in the block returned by ext_006D2A30(self) by a scale factor.
void __stdcall fn_00766210(void* self, double scale) {
    for (ptrdiff_t off = 0; off < 0x80; off += 8) {
        void* base = ext_006D2A30(self);
        lift_field<double>(base, off) *= scale;
    }
}
} // namespace lift_00766210
#include <cstdint>

// [0x007648F0] sub_007648F0 (64 bytes)
namespace lift_007648F0 {
// @name Unknown::FindIndexOfKeyPair
// @class Unknown
// @summary Scans the pointer array at +0x16C (count at +0x15C) for an entry whose first two DWORDs match (a, b); returns its index or -1.
// @field Unknown +0x15C int32_t field_0x15C
// @field Unknown +0x16C void** field_0x16C
int32_t fn_007648F0(void* self, uint32_t a, uint32_t b) {
    const int32_t count = lift_field<int32_t>(self, 0x15C);
    if (count <= 0) {
        return -1;
    }

    void** entries = lift_field<void**>(self, 0x16C);
    for (int32_t i = 0; i < count; ++i) {
        const void* entry = entries[i];
        if (lift_field<uint32_t>(entry, 0) == a && lift_field<uint32_t>(entry, 4) == b) {
            return i;
        }
    }
    return -1;
}
} // namespace lift_007648F0

// [0x00766240] sub_00766240 (64 bytes)
namespace lift_00766240 {
// Known callee 0x006D2A30: sub_006D2A30 (Returns `this` pointer unchanged.)
extern void* __fastcall ext_006D2A30(void* self);

// @name Unknown::AccumulateSixteenDoubles
// @class Unknown
// @summary Adds a 16-element double array (128 bytes) from src into dst in place: dst[i] += src[i].
// @field Unknown +0x00 double field_0x00
// @field Unknown +0x08 double field_0x08
// @field Unknown +0x10 double field_0x10
// @field Unknown +0x18 double field_0x18
// @field Unknown +0x20 double field_0x20
// @field Unknown +0x28 double field_0x28
// @field Unknown +0x30 double field_0x30
// @field Unknown +0x38 double field_0x38
// @field Unknown +0x40 double field_0x40
// @field Unknown +0x48 double field_0x48
// @field Unknown +0x50 double field_0x50
// @field Unknown +0x58 double field_0x58
// @field Unknown +0x60 double field_0x60
// @field Unknown +0x68 double field_0x68
// @field Unknown +0x70 double field_0x70
// @field Unknown +0x78 double field_0x78
void fn_00766240(void* dst, const void* src) {
    void* d = ext_006D2A30(dst);
    const void* s = ext_006D2A30(const_cast<void*>(src));
    for (ptrdiff_t off = 0; off < 0x80; off += 8) {
        lift_field<double>(d, off) += lift_field<double>(s, off);
    }
}
} // namespace lift_00766240

// [0x00764620] sub_00764620 (80 bytes)
namespace lift_00764620 {
extern int32_t __fastcall ext_006C3030(void* self);

// @name fn_00764620
// @summary Gets an object pointer from ext_006C3030; if non-null, calls virtual slot 0 on it three times and returns true when the 1st result is 4, the 2nd is 5, or the 3rd is 6.
extern bool __stdcall fn_00764620(void* self) {
    using VirtSlot0 = int32_t(__fastcall*)(void*);

    const int32_t raw = ext_006C3030(self);
    if (raw == 0) {
        return false;
    }

    void* obj = reinterpret_cast<void*>(static_cast<uintptr_t>(static_cast<uint32_t>(raw)));

    auto call_slot0 = [obj]() -> int32_t {
        void* vtable = *reinterpret_cast<void**>(obj);
        VirtSlot0 target = reinterpret_cast<VirtSlot0>(*reinterpret_cast<void**>(vtable));
        return target(obj);
    };

    if (call_slot0() == 4) {
        return true;
    }
    if (call_slot0() == 5) {
        return true;
    }
    return call_slot0() == 6;
}
} // namespace lift_00764620

// [0x00764400] sub_00764400 (90 bytes)
namespace lift_00764400 {
// @name sub_00764400
// @summary Auto-lifted identical-shape clone of 0x00771F60 (allocAndConstructObject).
namespace lift_00771F60 {
// Known callee 0x006A5C62: thunk_MFC80_ord_762 (IAT jump thunk forwarding to MFC80!ord_762.)
// Cdecl, one argument (0x34 pushed by caller), returns an allocated block or NULL.
extern void* ext_006A5C62(size_t size);
// Known callee 0x00771B90: sub_00771B90 (Constructor that initializes base via sub_007ABC20, initializes a 20-byte member at +0x1C, sets inline pointer at +0x30, and sets vtable mem_00996C88.)
// __thiscall: object pointer in ecx, returns the object pointer.
extern void* ext_007ABF40(void* self);

// @name allocAndConstructObject
// @summary Allocates a 0x34-byte object; if allocation succeeds, runs its constructor and returns it, otherwise returns NULL.
void* fn_00764400() {
    void* obj = ext_006A5C62(0x7D4);
    if (obj == nullptr) {
        return nullptr;
    }
    return ext_007ABF40(obj);
}
} // namespace lift_00771F60
} // namespace lift_00764400

// [0x00761710] sub_00761710 (16 bytes)
namespace lift_00761710 {
// @name sub_00761710
// @summary Auto-lifted identical-shape clone of 0x007B2210 (Unknown::initAndReturnArg).
namespace lift_007B2210 {
// Known callee 0x006BA780: Unknown::InitAndReturnSelf (Zero-inits the object's fields, sets its vtable, and returns the same object pointer.)
extern void* ext_00761230(void* self);

// @name Unknown::initAndReturnArg
// @summary Forwards its single stack argument to ext_006BA780 (Unknown::InitAndReturnSelf) and returns that callee's result (stdcall, 4 bytes of args).
extern void* fn_00761710(void* arg) {
    return ext_00761230(arg);
}
} // namespace lift_007B2210
} // namespace lift_00761710

// [0x00763E40]
namespace lift_00763E40 {
// @name freeEntryTables
// @summary Frees all entries in two EntryTable members at +0xc4 and +0xd8 using MFC80!ord_764 (operator delete).
// @field Unknown +0xc4 EntryTable field_0xc4
// @field Unknown +0xc8 uint32_t field_0xc8
// @field Unknown +0xd8 EntryTable field_0xd8
// @field Unknown +0xdc uint32_t field_0xdc


extern void __cdecl ext_006A5C5C(int32_t ptr);
extern int32_t __thiscall ext_00784750(void* self, int32_t idx, uint32_t* outKey);

static void freeEntryTable(uint8_t* table, uint32_t count) {
    while (count != 0) {
        --count;
        int32_t val = ext_00784750(table, static_cast<int32_t>(count), nullptr);
        ext_006A5C5C(val);
    }
}

extern void __thiscall fn_00763E40(void* self) {
    uint8_t* base = static_cast<uint8_t*>(self);
    uint32_t count1 = *reinterpret_cast<uint32_t*>(base + 0xc8);
    if (count1 != 0) {
        freeEntryTable(base + 0xc4, count1);
    }
    uint32_t count2 = *reinterpret_cast<uint32_t*>(base + 0xdc);
    if (count2 != 0) {
        freeEntryTable(base + 0xd8, count2);
    }
}
} // namespace lift_00763E40

// [0x0076AD20]
namespace lift_0076AD20 {
extern uint32_t __thiscall ext_006D23F0(uint32_t self, uint32_t index);
extern void __thiscall ext_006D80A0(uint32_t self);

// @name copyVec3NegateZ
// @summary Copies a 3-element double vector from a stack-passed object to dst, swapping elements 1 and 2 and negating element 2.
// @field Vec3d +0x00 double x
// @field Vec3d +0x08 double neg_z
// @field Vec3d +0x10 double y
extern void __stdcall fn_0076AD20(
    uint32_t dst,
    uint32_t a1, uint32_t a2, uint32_t a3, uint32_t a4,
    uint32_t a5, uint32_t a6, uint32_t a7, uint32_t a8) {
    uint32_t src_arr[8] = { a1, a2, a3, a4, a5, a6, a7, a8 };
    uint32_t src_ptr = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(src_arr));

    uint32_t p0 = ext_006D23F0(src_ptr, 0);
    *reinterpret_cast<uint32_t*>(dst + 0x00) = *reinterpret_cast<const uint32_t*>(p0 + 0x00);
    *reinterpret_cast<uint32_t*>(dst + 0x04) = *reinterpret_cast<const uint32_t*>(p0 + 0x04);

    uint32_t p1 = ext_006D23F0(src_ptr, 1);
    *reinterpret_cast<uint32_t*>(dst + 0x10) = *reinterpret_cast<const uint32_t*>(p1 + 0x00);
    *reinterpret_cast<uint32_t*>(dst + 0x14) = *reinterpret_cast<const uint32_t*>(p1 + 0x04);

    uint32_t p2 = ext_006D23F0(src_ptr, 2);
    *reinterpret_cast<double*>(dst + 0x08) = -(*reinterpret_cast<const double*>(p2));

    ext_006D80A0(src_ptr);
}
} // namespace lift_0076AD20

// [0x0076B150]
namespace lift_0076B150 {
// @name CopyIndexedPairsReordered
// @summary Copies three 8-byte pairs from an array argument into a destination struct, swapping indices 1 and 2.
// @field Dest +0x00 uint32_t field_0x00
// @field Dest +0x04 uint32_t field_0x04
// @field Dest +0x08 uint32_t field_0x08
// @field Dest +0x0C uint32_t field_0x0C
// @field Dest +0x10 uint32_t field_0x10
// @field Dest +0x14 uint32_t field_0x14

extern const uint32_t* __thiscall ext_006D23F0(void* self, uint32_t index);
extern void __cdecl ext_006D80A0(void);

struct StackPairs {
    uint32_t data[7];
};

extern void __stdcall fn_0076B150(
    uint32_t* dst,
    uint32_t arg1,
    StackPairs pairs)
{
    (void)arg1;

    const uint32_t* p0 = ext_006D23F0(&pairs, 0);
    dst[0] = p0[0];
    dst[1] = p0[1];

    const uint32_t* p1 = ext_006D23F0(&pairs, 1);
    dst[4] = p1[0];
    dst[5] = p1[1];

    const uint32_t* p2 = ext_006D23F0(&pairs, 2);
    dst[2] = p2[0];
    dst[3] = p2[1];

    ext_006D80A0();
}
} // namespace lift_0076B150

// [0x007643C0] sub_007643C0 (62 bytes)
namespace lift_007643C0 {
// Known callee 0x006B9EC0: Unknown::assignCString_006B9EC0 (Assigns a C string: a null pointer resets via sub_006B9920, otherwise forwards strlen(s) and s to allocAndCopy; always returns this.)
extern void* ext_006B9EC0(void* self, const char* s);
// .rdata string literal passed as the second argument (0x00B5D2C0)
extern const char mem_00B5D2C0[];
// IAT slot for MSVCR80 fclose (original: call dword ptr [0x925264]); replaced by standard fclose below
extern int mem_00925264;

// @name Unknown::resetStream_007643C0
// @class Unknown
// @summary Closes the FILE* at +0xac (if any), clears it, then assigns the string literal at 0x00B5D2C0 into the subobject at +0xb4; returns true when the fclose result was 0 (or no stream was open).
// @field Unknown +0xac FILE* stream
// @field Unknown +0xb4 void* field_0xb4
bool fn_007643C0(void* self) {
    (void)&mem_00925264;
    auto* base = static_cast<unsigned char*>(self);
    FILE** stream_slot = reinterpret_cast<FILE**>(base + 0xac);

    int result = 0;
    if (*stream_slot != nullptr) {
        result = fclose(*stream_slot);
    }
    *stream_slot = nullptr;

    ext_006B9EC0(base + 0xb4, mem_00B5D2C0);

    return result == 0;
}
} // namespace lift_007643C0

// [0x00764190]
namespace lift_00764190 {
// @name Unknown::initFromCStringAndWords_00764190
// @class Unknown
// @summary Stores two 32-bit arguments at +0x00 and +0x04, initializes the sub-object at +0x08 from a C string, and returns this.
// @field Unknown +0x00 uint32_t field_0x00
// @field Unknown +0x04 uint32_t field_0x04
// @field Unknown +0x08 uint8_t field_0x08

extern void* ext_006B9D80(void* ecx, const char* s);

extern void* fn_00764190(void* ecx, const char* a1, uint32_t a2, uint32_t a3) {
    uint8_t* self = static_cast<uint8_t*>(ecx);
    *reinterpret_cast<uint32_t*>(self + 0x00) = a2;
    *reinterpret_cast<uint32_t*>(self + 0x04) = a3;
    ext_006B9D80(self + 0x08, a1);
    return self;
}
} // namespace lift_00764190

// [0x00764930] sub_00764930 (128 bytes)
namespace lift_00764930 {
// Known callee 0x007641C0: sub_007641C0 (This-adjustor thunk: adjusts `this` by +0x8 and tail-calls sub_006B9D70.)
extern void ext_007641C0(void* self);
// Known callee 0x006A5C5C: thunk_MFC80_ord_764 (IAT jump thunk forwarding to MFC80!ord_764; cdecl, one argument.)
extern void ext_006A5C5C(void* arg);
// Known callee 0x006D2250: Unknown::ResetAndFreeBuffer156 (Frees the pointer stored at +0x10 if non-null, then zeroes +0x10, +0x00 and +0x04.)
extern void ext_006D2250(void* self);
// Known callee 0x006B9EC0: Unknown::assignCString_006B9EC0 (Assigns a C string to this; returns this.)
extern void* ext_006B9EC0(void* self, const char* s);
// IAT slot 0x00925264: MSVCR80!fclose (called indirectly in the original; the portable build calls fclose directly).
extern uint32_t mem_00925264;

// @name Unknown::releaseItemsAndResetFile_00764930
// @class Unknown
// @summary Calls the per-item release thunk on each non-null pointer in the table at +0x16c (count at +0x15c), resets the buffer at +0x15c, closes the FILE* at +0xb0 if set, and reassigns the string at +0x100 to a constant; returns 1.
// @field Unknown +0x0b0 FILE* m_file
// @field Unknown +0x100 char[] m_name
// @field Unknown +0x15c int32_t m_itemCount
// @field Unknown +0x16c void** m_items
uint8_t fn_00764930(void* self) {
    const int32_t count = lift_field<int32_t>(self, 0x15c);
    for (int32_t i = 0; i < count; ++i) {
        void** items = lift_field<void**>(self, 0x16c);
        void* item = items[i];
        if (item != nullptr) {
            ext_007641C0(item);
            ext_006A5C5C(item);
        }
    }

    ext_006D2250(static_cast<uint8_t*>(self) + 0x15c);

    void* file = lift_field<void*>(self, 0xb0);
    if (file != nullptr) {
        (void)&mem_00925264;
        fclose(static_cast<FILE*>(file));
        lift_field<void*>(self, 0xb0) = nullptr;
        ext_006B9EC0(static_cast<uint8_t*>(self) + 0x100,
                     reinterpret_cast<const char*>(static_cast<uintptr_t>(0x00B5D2C0)));
    }

    return 1;
}
} // namespace lift_00764930

// [0x007642D0] sub_007642D0 (143 bytes)
namespace lift_007642D0 {
// Known callee 0x006B9D70: sub_006B9D70 (Pure jump thunk forwarding to sub_006B9970.)
extern void ext_006B9D70();
// Known callee 0x006D2160: sub_006D2160 (Pure jump thunk forwarding to sub_006D2250.)
extern void ext_006D2160();
// Known callee 0x00754FA0: sub_00754FA0_dtor (Destructor that sets vtable 0x996bf0 and destroys members at +0x60 and +0x8.)
extern void ext_00754FA0();
// Known callee 0x007643C0: Unknown::resetStream_007643C0 (Closes the FILE* at +0xac (if any), clears it, then assigns the string literal at 0x00B5D2C0 into the subobject at +0xb4; returns true when the fclose result was 0 (or no stream was open).)
extern bool ext_007643C0();
// Known callee 0x007ABCA0: sub_007ABCA0 (Destroys the object by setting its vtable, releasing buffer items at +0x4, destroying the member at +0x4, and calling the base destructor.)
extern void ext_007ABCA0();

// @name Unknown::dtor_007642D0
// @class Unknown
// @summary Destructor: sets the Unknown vtable (0x996C38), resets the stream state, destroys the embedded subobjects at +0x174, +0x15c, +0x100 and +0xb4 in that order, then runs the base destructor ext_00754FA0 on self.
// @field Unknown +0x00 uint32_t vtable
// @field Unknown +0xb4 uint8_t field_0xb4
// @field Unknown +0x100 uint8_t field_0x100
// @field Unknown +0x15c uint8_t field_0x15c
// @field Unknown +0x174 uint8_t field_0x174
void fn_007642D0(void* self) {
    // Install this class's vtable (32-bit address from the original image).
    lift_field<uint32_t>(self, 0x00) = 0x00996C38u;

    // Close/reset the stream state owned directly by this object.
    (void)reinterpret_cast<bool (*)(void*)>(&ext_007643C0)(self);

    // Destroy embedded subobjects, in the original order.
    reinterpret_cast<void (*)(void*)>(&ext_007ABCA0)(static_cast<uint8_t*>(self) + 0x174);
    reinterpret_cast<void (*)(void*)>(&ext_006D2160)(static_cast<uint8_t*>(self) + 0x15C);
    reinterpret_cast<void (*)(void*)>(&ext_006B9D70)(static_cast<uint8_t*>(self) + 0x100);
    reinterpret_cast<void (*)(void*)>(&ext_006B9D70)(static_cast<uint8_t*>(self) + 0xB4);

    // Chain to the base-class destructor on the whole object.
    reinterpret_cast<void (*)(void*)>(&ext_00754FA0)(self);
}
} // namespace lift_007642D0

// [0x00766900] sub_00766900 (22 bytes)
namespace lift_00766900 {
// Known callee 0x0079F230: sub_0079F230 (Auto-lifted identical-shape clone of 0x0078D740 (allocAndConstructObject0x250).)
extern void* ext_0079F230(void);

// @name AllocAndInvokeVSlot128
// @summary Allocates an object via ext_0079F230, calls its virtual slot at +0x128 with the object as this, and returns the object.
void* fn_00766900(void) {
    void* obj = ext_0079F230();
    void* vtbl = lift_field<void*>(obj, 0);
    auto slot = reinterpret_cast<void(__thiscall*)(void*)>(lift_field<void*>(vtbl, 0x128));
    slot(obj);
    return obj;
}
} // namespace lift_00766900
