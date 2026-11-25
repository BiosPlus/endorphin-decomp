// Lifted C++ translation unit: lifted/leaf/decompiled_770000.cpp
#include "lift_compat.h"
#include <cstring>
#include <cstddef>

// [0x0077FAC0] sub_0077FAC0 (32 bytes)
namespace lift_0077FAC0 {
// @name sub_0077FAC0
// @summary Auto-lifted identical-shape clone of 0x006D2390 (ForwardArgToCalleeReturnThis).
namespace lift_006D2390 {
extern void ext_0074AE20(void* self, uint32_t arg1);

// @name ForwardArgToCalleeReturnThis
// @summary Forwards its single stack argument to sub_007873F0 with the same this pointer, then returns this.
// Note: no member fields are accessed directly; `self` is only passed through.
void* fn_0077FAC0(void* self, uint32_t arg1) {
    ext_0074AE20(self, arg1);
    return self;
}
} // namespace lift_006D2390
} // namespace lift_0077FAC0

// [0x0077FF70] sub_0077FF70 (32 bytes)
namespace lift_0077FF70 {
// @name Unknown::GetDwordElement16
// @class Unknown
// @summary Returns the DWORD at element index (16-byte stride) of the array referenced via self->field_0x00->field_0x04.
// @field Unknown +0x00 void* field_0x00 (pointer to the array-owning object)
// @field Unknown +0x04 void* field_0x04 (base pointer of the 16-byte element array, on the object at field_0x00)
DWORD fn_0077FF70(void* self, DWORD index) {
    uint8_t* owner = *reinterpret_cast<uint8_t**>(self);
    uint8_t* base = *reinterpret_cast<uint8_t**>(owner + 0x04);
    DWORD offset = index << 4;
    return *reinterpret_cast<DWORD*>(base + offset);
}
} // namespace lift_0077FF70

// [0x0077FFB0] sub_0077FFB0 (32 bytes)
namespace lift_0077FFB0 {
// @name Unknown::GetDoubleElement16
// @class Unknown
// @summary Returns the double at element index (16-byte stride, +8 within element) of the array referenced via self->field_0x00->field_0x04. Callee pops 8 bytes (ret 0x8); second stack arg is unused.
// @field Unknown +0x00 void* field_0x00 (pointer to the array-owning object)
// @field Unknown +0x04 void* field_0x04 (base pointer of the 16-byte element array, on the object at field_0x00)
namespace lift_0077FFB0 {
double fn_0077FFB0(void* self, DWORD index) {
    uint8_t* owner = *reinterpret_cast<uint8_t**>(self);
    uint8_t* base = *reinterpret_cast<uint8_t**>(owner + 0x04);
    DWORD offset = index << 4;
    return *reinterpret_cast<double*>(base + offset + 0x08);
}
} // namespace lift_0077FFB0
} // namespace lift_0077FFB0

// [0x0077FF90] sub_0077FF90 (32 bytes)
namespace lift_0077FF90 {
// @name Unknown::SetDoubleElement16
// @class Unknown
// @summary Stores a double at byte offset 8 of the 16-byte element selected by index in the array pointed to by inner->+0x04.
// @field Unknown +0x00 void* field_0x00 (pointer to inner object; inner->+0x04 holds the element array base)
void fn_0077FF90(void* self, int32_t index, double value) {
    // self->+0x00 -> inner object; inner->+0x04 -> element array base.
    uint32_t inner_addr = *reinterpret_cast<const uint32_t*>(self);
    uint32_t base_addr = *reinterpret_cast<const uint32_t*>(
        static_cast<uintptr_t>(inner_addr) + 0x04);
    uint32_t element_off = static_cast<uint32_t>(index) << 4;
    uint8_t* dst = reinterpret_cast<uint8_t*>(static_cast<uintptr_t>(base_addr))
                   + element_off + 0x08;
    std::memcpy(dst, &value, sizeof(value));
}
} // namespace lift_0077FF90

// [0x0077F5A0]
namespace lift_0077F5A0 {
// @name sub_0077F5A0
// @summary Returns one of three constant addresses selected by the first stack argument (0, 1, 2); any other value yields the default 0x00AAF03C.

uint32_t sub_0077F5A0(uint32_t arg0) {
    switch (arg0) {
        case 0:
            return 0x00AAF03Cu;
        case 1:
            return 0x00AAE5C0u;
        case 2:
            return 0x00AAE5B0u;
        default:
            return 0x00AAF03Cu;
    }
}
} // namespace lift_0077F5A0

// [0x0077FB40] sub_0077FB40 (48 bytes)
namespace lift_0077FB40 {
// @name Unknown::setDoubleQuadToOnes
// @class Unknown
// @summary Writes four IEEE-754 doubles of 1.0 (0x3FF0000000000000) at +0x00, +0x08, +0x10, +0x18 and returns self.
// @field Unknown +0x00 double field_0x00
// @field Unknown +0x08 double field_0x08
// @field Unknown +0x10 double field_0x10
// @field Unknown +0x18 double field_0x18
void* fn_0077FB40(void* self) {
    lift_field<double>(self, 0x00) = 1.0;
    lift_field<double>(self, 0x08) = 1.0;
    lift_field<double>(self, 0x10) = 1.0;
    lift_field<double>(self, 0x18) = 1.0;
    return self;
}
} // namespace lift_0077FB40

// [0x00772010] sub_00772010 (48 bytes)
namespace lift_00772010 {
// @name copyNBytesAndTerminate
// @summary Copies n bytes via strncpy within the buffer whose pointer is stored at *dstSlot, NUL-terminates at index n, and returns true.
bool fn_00772010(char** dstSlot, std::size_t n) {
    char* buf = *dstSlot;
    std::strncpy(buf, buf, n);
    buf = *dstSlot;
    buf[n] = '\0';
    return true;
}
} // namespace lift_00772010

// [0x0077F520] sub_0077F520 (48 bytes)
namespace lift_0077F520 {
// @name Unknown::cacheIndirectDwordAndReset
// @class Unknown
// @summary Stores the dword at ptr+0x14 (or 0 if ptr is null) into self+0x04 and sets self+0x08 to -1.
// @field Unknown +0x00 void* field_0x00
// @field Unknown +0x04 DWORD field_0x04
// @field Unknown +0x08 DWORD field_0x08
// Note: when field_0x00 is non-null, reads DWORD at (field_0x00 + 0x14) (pointee layout not recovered).
void fn_0077F520(void* self) {
    void* ptr = lift_field<void*>(self, 0x00);
    DWORD value = 0;
    if (ptr != nullptr) {
        value = lift_field<DWORD>(ptr, 0x14);
    }
    lift_field<DWORD>(self, 0x08) = 0xFFFFFFFFu;
    lift_field<DWORD>(self, 0x04) = value;
}
} // namespace lift_0077F520

// [0x0077FB10]
namespace lift_0077FB10 {
// @name Unknown::compareDoublePair
// @class Unknown
// @summary Compares the two doubles at offsets 0x00 and 0x08 of this against the two doubles at the same offsets of the stack argument; returns 0 if both pairs compare equal (x87 fcomp C3 semantics, so unordered counts as equal), otherwise 1.
// @field Unknown +0x00 double field_0x00
// @field Unknown +0x08 double field_0x08

// x87 fcomp C3 is set when operands are equal or unordered; equivalently, neither is less than the other.
static inline bool x87_fcomp_equal(double a, double b) {
    return !(a < b) && !(b < a);
}

int sub_0077FB10(void* self, const void* other) {
    const double a0 = lift_field<double>(other, 0x00);
    const double b0 = lift_field<double>(self, 0x00);
    if (!x87_fcomp_equal(a0, b0)) {
        return 1;
    }

    const double a1 = lift_field<double>(other, 0x08);
    const double b1 = lift_field<double>(self, 0x08);
    if (!x87_fcomp_equal(a1, b1)) {
        return 1;
    }

    return 0;
}
} // namespace lift_0077FB10

// [0x0077F620] sub_0077F620 (48 bytes)
namespace lift_0077F620 {
extern uint32_t mem_read32(uint32_t addr);
extern void mem_write32(uint32_t addr, uint32_t value);

// @name Unknown::copyIndexedBlock32
// @class Unknown
// @summary Copies the 32-byte (8 x DWORD) entry at index from the table at self+0x10 into dest.
// @field Unknown +0x10 uint32_t field_0x10 (table base address; entries are 32 bytes each)
//
// Original calling convention: thiscall (ecx = self), stdcall args (dest, index), ret 8.
// The original also leaves ecx = 0 on return; that register side effect is not modeled here.
void fn_0077F620(void* self, uint32_t dest, uint32_t index) {
    const uint32_t base = lift_field<uint32_t>(self, 0x10);
    const uint32_t src = base + (index << 5);

    for (uint32_t i = 0; i < 8; ++i) {
        mem_write32(dest + i * 4, mem_read32(src + i * 4));
    }
}
} // namespace lift_0077F620

// [0x0077F5D0]
namespace lift_0077F5D0 {
// @name get_type_name_0077F5D0
// @summary Maps an enum index (0-4) to a static string or descriptor address, defaulting to 0x00AABB78.


uint32_t sub_0077F5D0(uint32_t index) {
    switch (index) {
        case 0:
            return 0x00AABB78u;
        case 1:
            return 0x00AAE5D4u;
        case 2:
            return 0x00AABB60u;
        case 3:
            return 0x00AABB54u;
        case 4:
            return 0x00AAE5C8u;
        default:
            return 0x00AABB78u;
    }
}
} // namespace lift_0077F5D0

// [0x0077F550]
namespace lift_0077F550 {
// @name lookupStringByIndex_0077F550
// @summary Maps an unsigned index (0..4) via a jump table to a constant address, defaulting to 0xaaeb2c.
extern uint32_t sub_0077F550(uint32_t index) {
    switch (index) {
        case 0:  return 0x00aaeb2cu;
        case 1:  return 0x00aadfe0u;
        case 2:  return 0x00aae0d4u;
        case 3:  return 0x00aadfd4u;
        case 4:  return 0x00aadfccu;
        default: return 0x00aaeb2cu;
    }
}
} // namespace lift_0077F550

// [0x0077F4E0] sub_0077F4E0 (64 bytes)
namespace lift_0077F4E0 {
// @name Unknown::AdvanceCursorAndFindTaggedValue
// @class Unknown
// @summary Increments the cursor at +0x08; if it is in [0, count) and the table entry there holds an object whose tag matches the entry key, returns that object's value, else 0.
// @field Unknown +0x00 void* table
// @field Unknown +0x04 int32_t count
// @field Unknown +0x08 int32_t cursor
// @field Unknown::Table +0x10 uint8_t* entries
// @field Unknown::Entry +0x00 uint32_t key
// @field Unknown::Entry +0x04 void* object
// @field Unknown::Object +0x00 uint32_t tag
// @field Unknown::Object +0x04 uint32_t value
uint32_t fn_0077F4E0(void* self) {
    int32_t index = ++lift_field<int32_t>(self, 0x08);
    if (index < 0 || index >= lift_field<int32_t>(self, 0x04)) {
        return 0;
    }

    void* table = lift_field<void*>(self, 0x00);
    uint8_t* entries = lift_field<uint8_t*>(table, 0x10);
    uint8_t* entry = entries + static_cast<ptrdiff_t>(index) * 12;

    uint32_t key = lift_field<uint32_t>(entry, 0x00);
    void* object = lift_field<void*>(entry, 0x04);
    if (object == nullptr) {
        return 0;
    }
    if (lift_field<uint32_t>(object, 0x00) != key) {
        return 0;
    }
    return lift_field<uint32_t>(object, 0x04);
}
} // namespace lift_0077F4E0

// [0x00771FC0] sub_00771FC0 (80 bytes)
namespace lift_00771FC0 {
extern const char mem_00AA870C[];

// @name StrCopyAfterMarker
// @summary If the string at *dst contains the marker mem_00AA870C, copies the text after the marker's first two bytes back over *dst (inclusive of terminator); always returns 1.
extern uint8_t __stdcall fn_00771FC0(char** dst) {
    char* found = std::strstr(*dst, mem_00AA870C);
    if (found != nullptr) {
        const char* src = found + 2;
        char* out = *dst;
        size_t n = std::strlen(src) + 1;
        // Forward copy, matching the original rep movs semantics for overlapping buffers.
        for (size_t i = 0; i < n; ++i) {
            out[i] = src[i];
        }
    }
    return 1;
}
} // namespace lift_00771FC0

// [0x00771B90]
namespace lift_00771B90 {
// @name sub_00771B90
// @summary Constructor that initializes base via sub_007ABC20, initializes a 20-byte member at +0x1C, sets inline pointer at +0x30, and sets vtable mem_00996C88.
// @field Unknown +0x00 uint32_t vtable
// @field Unknown +0x1C uint8_t[20] field_0x1C
// @field Unknown +0x2C uint8_t[4] field_0x2C
// @field Unknown +0x30 void* field_0x30


extern uint32_t mem_00996C88;

void* __thiscall ext_007ABC20(void* self);
uint32_t __thiscall ext_006D2130(void* self, int32_t arg1, uint32_t arg2);

void* __thiscall sub_00771B90(void* self) {
    uint8_t* base = static_cast<uint8_t*>(self);
    ext_007ABC20(self);

    uint8_t* member = base + 0x1C;
    ext_006D2130(member, 0x10, 4);

    *reinterpret_cast<void**>(member + 0x14) = member + 0x10;
    *reinterpret_cast<uint32_t*>(base) = mem_00996C88;

    return self;
}
} // namespace lift_00771B90

// [0x00771F60] sub_00771F60 (87 bytes)
namespace lift_00771F60 {
// Known callee 0x006A5C62: thunk_MFC80_ord_762 (IAT jump thunk forwarding to MFC80!ord_762.)
// Cdecl, one argument (0x34 pushed by caller), returns an allocated block or NULL.
extern void* ext_006A5C62(size_t size);
// Known callee 0x00771B90: sub_00771B90 (Constructor that initializes base via sub_007ABC20, initializes a 20-byte member at +0x1C, sets inline pointer at +0x30, and sets vtable mem_00996C88.)
// __thiscall: object pointer in ecx, returns the object pointer.
extern void* ext_00771B90(void* self);

// @name allocAndConstructObject
// @summary Allocates a 0x34-byte object; if allocation succeeds, runs its constructor and returns it, otherwise returns NULL.
void* fn_00771F60() {
    void* obj = ext_006A5C62(0x34);
    if (obj == nullptr) {
        return nullptr;
    }
    return ext_00771B90(obj);
}
} // namespace lift_00771F60

// [0x007721F0] sub_007721F0 (90 bytes)
namespace lift_007721F0 {
// @name sub_007721F0
// @summary Auto-lifted identical-shape clone of 0x00771F60 (allocAndConstructObject).
namespace lift_00771F60 {
// Known callee 0x006A5C62: thunk_MFC80_ord_762 (IAT jump thunk forwarding to MFC80!ord_762.)
// Cdecl, one argument (0x34 pushed by caller), returns an allocated block or NULL.
extern void* ext_006A5C62(size_t size);
// Known callee 0x00771B90: sub_00771B90 (Constructor that initializes base via sub_007ABC20, initializes a 20-byte member at +0x1C, sets inline pointer at +0x30, and sets vtable mem_00996C88.)
// __thiscall: object pointer in ecx, returns the object pointer.
extern void* ext_007AC1C0(void* self);

// @name allocAndConstructObject
// @summary Allocates a 0x34-byte object; if allocation succeeds, runs its constructor and returns it, otherwise returns NULL.
void* fn_007721F0() {
    void* obj = ext_006A5C62(0x7D8);
    if (obj == nullptr) {
        return nullptr;
    }
    return ext_007AC1C0(obj);
}
} // namespace lift_00771F60
} // namespace lift_007721F0
