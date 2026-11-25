// Lifted C++ translation unit: lifted/leaf/tiny_7D0000.cpp
#include "lift_compat.h"
extern "C" int mem_0099E074;
#include <cstdint>
#include <bit>
#include <cstring>

// [0x007DAD40] sub_007DAD40 (4 bytes)
// @name ReturnZeroWord
// @summary Returns zero in the low 16 bits of the result register (xor ax, ax; ret).
// @field none
uint16_t ReturnZeroWord() {
    return 0;
}

extern "C" uint16_t fn_007DAD40() {
    return ReturnZeroWord();
}

// [0x007D8700] sub_007D8700 (5 bytes)
// @name sub_007D8700
// @summary Returns its first stack argument unchanged (mov eax, [esp+4]; ret).
// @field none
extern "C" uint32_t fn_007D8700(uint32_t arg0) {
    return arg0;
}

// [0x007D7A20] sub_007D7A20 (6 bytes)
// @name sub_007D7A20
// @summary Returns address of global mem_0099E074.
extern "C" void* __cdecl fn_007D7A20(void) {
    return &mem_0099E074;
}

// [0x007D8750]
namespace lift_007D8750 {
// @name getField0x5CFromArg1
// @summary Returns the 32-bit field at offset 0x5C of the second pointer argument.
// @field Arg1 +0x5C uint32_t field_0x5C
uint32_t sub_007D8750(uint32_t /*unused*/, uintptr_t obj) {
    return *reinterpret_cast<const uint32_t*>(obj + 0x5c);
}
} // namespace lift_007D8750

// [0x007DFB50]
namespace lift_007DFB50 {
// @name zeroU32Ptr
// @summary Zero-initializes a 32-bit value at the given pointer and returns the pointer
uint32_t* sub_007DFB50(uint32_t* ptr) {
    *ptr = 0;
    return ptr;
}
} // namespace lift_007DFB50

// [0x007D5BA0] sub_007D5BA0 (12 bytes)
namespace lift_007D5BA0 {
// @name setField04_007D5BA0
// @summary Stores the second stack argument as a 32-bit value at offset 0x04 of the object pointed to by the first argument.
// @field <unknown> +0x04 uint32_t field_0x04
void fn_007D5BA0(void* self, uint32_t value) {
    auto* base = static_cast<uint8_t*>(self);
    *reinterpret_cast<uint32_t*>(base + 0x04) = value;
}
} // namespace lift_007D5BA0

// [0x007D4AE0] sub_007D4AE0 (12 bytes)
namespace lift_007D4AE0 {
// @name setFlag30_007D4AE0
// @summary Stores the constant 1 as a 32-bit value at offset 0x30 of the object pointed to by the first argument.
// @field <unknown> +0x30 uint32_t field_0x30
void fn_007D4AE0(void* self) {
    auto* base = static_cast<uint8_t*>(self);
    *reinterpret_cast<uint32_t*>(base + 0x30) = 1u;
}
} // namespace lift_007D4AE0

// [0x007D5BB0] sub_007D5BB0 (12 bytes)
namespace lift_007D5BB0 {
// @name setField20_007D5BB0
// @class <unknown>
// @summary Stores a 32-bit value (second stack arg) into the object's +0x20 field.
// @field <unknown> +0x20 DWORD field_20
void fn_007D5BB0(void* self, DWORD value) {
    lift_field<DWORD>(self, 0x20) = value;
}
} // namespace lift_007D5BB0

// [0x007D86F0] sub_007D86F0 (15 bytes)
namespace lift_007D86F0 {
// @name sub_007D86F0
// @summary Auto-lifted identical-shape clone of 0x007D5BB0 (setField20_007D5BB0).
namespace lift_007D5BB0 {
// @name setField20_007D5BB0
// @class <unknown>
// @summary Stores a 32-bit value (second stack arg) into the object's +0x20 field.
// @field <unknown> +0x20 DWORD field_20
void fn_007D86F0(void* self, DWORD value) {
    lift_field<DWORD>(self, 0x178) = value;
}
} // namespace lift_007D5BB0
} // namespace lift_007D86F0

// [0x007DCFF0] sub_007DCFF0 (12 bytes)
namespace lift_007DCFF0 {
// @name sub_007DCFF0
// @summary Auto-lifted identical-shape clone of 0x007D5BB0 (setField20_007D5BB0).
namespace lift_007D5BB0 {
// @name setField20_007D5BB0
// @class <unknown>
// @summary Stores a 32-bit value (second stack arg) into the object's +0x20 field.
// @field <unknown> +0x20 DWORD field_20
void fn_007DCFF0(void* self, DWORD value) {
    lift_field<DWORD>(self, 0x34) = value;
}
} // namespace lift_007D5BB0
} // namespace lift_007DCFF0

// [0x007DFDB0] sub_007DFDB0 (12 bytes)
namespace lift_007DFDB0 {
// @name sub_007DFDB0
// @summary Auto-lifted identical-shape clone of 0x007D4AE0 (setFlag30_007D4AE0).
namespace lift_007D4AE0 {
// @name setFlag30_007D4AE0
// @summary Stores the constant 1 as a 32-bit value at offset 0x30 of the object pointed to by the first argument.
// @field <unknown> +0x30 uint32_t field_0x30
void fn_007DFDB0(void* self) {
    auto* base = static_cast<uint8_t*>(self);
    *reinterpret_cast<uint32_t*>(base + 0x8) = 0u;
}
} // namespace lift_007D4AE0
} // namespace lift_007DFDB0

// [0x007D85D0] sub_007D85D0 (12 bytes)
namespace lift_007D85D0 {
// @name setField58_007D85D0
// @class <unknown>
// @summary Stores a float argument into the object's +0x58 float slot.
// @field <unknown> +0x58 float field_0x58
void fn_007D85D0(void* self, float value) {
    auto* base = static_cast<uint8_t*>(self);
    std::memcpy(base + 0x58, &value, sizeof(float));
}
} // namespace lift_007D85D0

// [0x007D4B10]
namespace lift_007D4B10 {
// @name VtableSlot0Call_Arg18
// @summary Calls virtual slot 0 of the object passed as the second argument with 0x18 and returns its result.
// @field Unknown +0x00 void* vtbl

// cdecl; first parameter is unused by the body.
int sub_007D4B10(int /*unused*/, void* obj) {
    using Slot0Fn = int (*)(int);
    void** vtbl = *reinterpret_cast<void***>(obj);
    Slot0Fn fn = reinterpret_cast<Slot0Fn>(vtbl[0]);
    return fn(0x18);
}
} // namespace lift_007D4B10

// [0x007DA8D0]
namespace lift_007DA8D0 {
// @name ZeroThreeDwords
// @class Unknown
// @summary Zeroes the dword at offsets +0x00, +0x04 and +0x08 of the object pointed to by the first argument.
// @field Unknown +0x00 uint32_t field_0x00
// @field Unknown +0x04 uint32_t field_0x04
// @field Unknown +0x08 uint32_t field_0x08


void ZeroThreeDwords(void* self) {
    auto* base = static_cast<std::uint8_t*>(self);
    *reinterpret_cast<std::uint32_t*>(base + 0x04) = 0;
    *reinterpret_cast<std::uint32_t*>(base + 0x08) = 0;
    *reinterpret_cast<std::uint32_t*>(base + 0x00) = 0;
}
} // namespace lift_007DA8D0

// [0x007D4B20] sub_007D4B20 (16 bytes)
namespace lift_007D4B20 {
// @name sub_007D4B20_callVirtualSlot0xCWithArg
// @summary Calls the function pointer stored at obj+0xc with the first argument, passing obj as the receiver; returns the callee's result.
// @field Unknown +0x0c void* field_0xc
uint32_t fn_007D4B20(uint32_t arg, void* obj) {
    // Original: mov eax,[esp+4]; mov ecx,[esp+0xc]; mov edx,[ecx+0xc]; push eax; call edx; pop ecx; ret
    using Target = uint32_t (*)(void* self, uint32_t arg);
    const auto target = lift_field<uintptr_t>(obj, 0x0c);
    return reinterpret_cast<Target>(target)(obj, arg);
}
} // namespace lift_007D4B20

// [0x007D95F0]
namespace lift_007D95F0 {
// @name appendDwordToArray_007D95F0
// @summary Appends the dword at arg+0x00 to a dynamic array stored in arg (count at +0x08, elements from +0x0C, 4 bytes each), then increments the count.

void sub_007D95F0(void* arg) {
    auto* base = static_cast<uint8_t*>(arg);
    const uint32_t value = *reinterpret_cast<uint32_t*>(base + 0x00);
    const uint32_t count = *reinterpret_cast<uint32_t*>(base + 0x08);
    *reinterpret_cast<uint32_t*>(base + 0x0C + 4u * count) = value;
    *reinterpret_cast<uint32_t*>(base + 0x08) = count + 1u;
}
} // namespace lift_007D95F0

// [0x007DD000] sub_007DD000 (18 bytes)
namespace lift_007DD000 {
// @name initPairMinusOne_007DD000
// @summary Sets the first dword of the target to -1 and the second dword to 0.
// @field Unknown +0x00 int32_t field_0x00
// @field Unknown +0x04 int32_t field_0x04
void initPairMinusOne_007DD000(void* target) {
    lift_field<int32_t>(target, 0x00) = -1;
    lift_field<int32_t>(target, 0x04) = 0;
}
} // namespace lift_007DD000

// [0x007DFDC0] sub_007DFDC0 (18 bytes)
namespace lift_007DFDC0 {
// @name dispatchThroughSlot0C_007DFDC0
// @summary Loads the dword pointed to by arg1, then calls the function pointer stored at arg2+0x0C with that dword as its single argument and returns the result.
// @field Unknown +0x0C void* field_0x0C
extern uint32_t __cdecl fn_007DFDC0(void* arg1, void* arg2) {
    const uint32_t value = *static_cast<uint32_t*>(arg1);
    void* target = lift_field<void*>(arg2, 0x0C);
    auto fn = reinterpret_cast<uint32_t(__cdecl*)(uint32_t)>(target);
    return fn(value);
}
} // namespace lift_007DFDC0

// [0x007D9610]
namespace lift_007D9610 {
// @name Unknown::PopIndexedSlot
// @class Unknown
// @summary Pops the element at index count from a counted array: stores it to the first dword and decrements count.
// @field Unknown +0x00 uint32_t field_0x00
// @field Unknown +0x08 uint32_t count
// @field Unknown +0x08 uint32_t elements[]

void sub_007D9610(uint32_t* self) {
    uint32_t* p = self;
    uint32_t count = p[2];
    uint32_t value = p[2 + count];
    count = count - 1;
    p[0] = value;
    p[2] = count;
}
} // namespace lift_007D9610

// [0x007D4B30]
namespace lift_007D4B30 {
// @name Unknown::InitFieldsAndStoreValue
// @class Unknown
// @summary Stores the second argument at +0x14, then zeroes the fields at +0x00, +0x04 and +0x08.
// @field Unknown +0x00 uint32_t field_0x00
// @field Unknown +0x04 uint32_t field_0x04
// @field Unknown +0x08 uint32_t field_0x08
// @field Unknown +0x14 uint32_t field_0x14

void sub_007D4B30(uint8_t* self, uint32_t value) {
    *reinterpret_cast<uint32_t*>(self + 0x14) = value;
    *reinterpret_cast<uint32_t*>(self + 0x08) = 0;
    *reinterpret_cast<uint32_t*>(self + 0x00) = 0;
    *reinterpret_cast<uint32_t*>(self + 0x04) = 0;
}
} // namespace lift_007D4B30

// [0x007D8710] sub_007D8710 (22 bytes)
namespace lift_007D8710 {
// @name sub_007D8710
// @summary Auto-lifted identical-shape clone of 0x007C58E0 (ReturnSelfIfFieldB0IsNine).
namespace lift_007C58E0 {
// @name ReturnSelfIfFieldB0IsNine
// @class Unknown
// @summary Returns self if the uint32 at +0xB0 equals 9, otherwise returns NULL (cdecl, one arg).
// @field Unknown +0xB0 uint32_t field_0xB0
void* fn_007D8710(void* self) {
    // Equivalent to: return (*(uint32_t*)(self + 0xB0) == 9) ? self : nullptr;
    const uint32_t field = lift_field<uint32_t>(self, 0xB0);
    const uintptr_t mask = (field == 5u) ? ~static_cast<uintptr_t>(0) : static_cast<uintptr_t>(0);
    return reinterpret_cast<void*>(reinterpret_cast<uintptr_t>(self) & mask);
}
} // namespace lift_007C58E0
} // namespace lift_007D8710

// [0x007DB740] sub_007DB740 (23 bytes)
namespace lift_007DB740 {
// @name GetIndexedEntryOrZero
// @summary Returns the element at index from the object's array if index < count (signed), else 0.
// @field Unknown +0x14 DWORD field_0x14
// @field Unknown +0x1C INT field_0x1c
DWORD fn_007DB740(const void* obj, INT index) {
    const BYTE* base = static_cast<const BYTE*>(obj);

    INT count;
    std::memcpy(&count, base + 0x1C, sizeof(count));
    if (index >= count) {
        return 0;
    }

    DWORD arrayPtr;
    std::memcpy(&arrayPtr, base + 0x14, sizeof(arrayPtr));

    const DWORD* array = reinterpret_cast<const DWORD*>(static_cast<uintptr_t>(arrayPtr));
    return array[index];
}
} // namespace lift_007DB740

// [0x007DB760]
namespace lift_007DB760 {
// @name GetIndexedEntryChecked
// @summary Returns pointer to entry `index` (64-byte stride) of the object's entry array, or nullptr if index >= count.
// @field Unknown +0x10 void* field_0x10
// @field Unknown +0x1C int32_t field_0x1c
void* GetIndexedEntryChecked(void* self, int32_t index) {
    const int32_t count = lift_field<int32_t>(self, 0x1C);
    if (index < count) {
        uint32_t offset = static_cast<uint32_t>(index) << 6;
        uint8_t* base = lift_field<uint8_t*>(self, 0x10);
        return base + offset;
    }
    return nullptr;
}
} // namespace lift_007DB760

// [0x007DD020] sub_007DD020 (24 bytes)
namespace lift_007DD020 {
// @name CxSmallSort::destructorBody
// @class CxSmallSort
// @summary Resets the vtable to CxSmallSort and, if the field at +0x20 is set, calls slot 3 of the object at +0x28 with it as argument.
// @field CxSmallSort +0x00 uint32_t vtable_ptr
// @field CxSmallSort +0x20 uint32_t field_0x20
// @field CxSmallSort +0x28 uint32_t field_0x28
void fn_007DD020(void* self) {
    constexpr uint32_t kCxSmallSortVtable = 0x0099EBF0u;

    // Stores the vtable pointer for CxSmallSort at the start of the object.
    lift_field<uint32_t>(self, 0x00) = kCxSmallSortVtable;

    const uint32_t arg = lift_field<uint32_t>(self, 0x20);
    if (arg == 0) {
        return;
    }

    // Load the sub-object at +0x28 and call its slot at vtable offset 0x0C,
    // passing the +0x20 value as the single argument.
    void* sub = reinterpret_cast<void*>(
        static_cast<uintptr_t>(lift_field<uint32_t>(self, 0x28)));
    const uint32_t vtable = lift_field<uint32_t>(sub, 0x00);
    const uint32_t slot = lift_field<uint32_t>(
        reinterpret_cast<void*>(static_cast<uintptr_t>(vtable)), 0x0C);
    using SlotFn = void(__fastcall*)(void* self, int edx_unused, uint32_t arg);
    reinterpret_cast<SlotFn>(static_cast<uintptr_t>(slot))(sub, 0, arg);
}
} // namespace lift_007DD020

// [0x007D8450] sub_007D8450 (26 bytes)
namespace lift_007D8450 {
// @name CopyVec3FromOffset40
// @class <none>
// @summary Copies three consecutive floats from self+0x40..+0x48 into out[0..2].
// @field self +0x40 float field_0x40
// @field self +0x44 float field_0x44
// @field self +0x48 float field_0x48
void fn_007D8450(const void* self, void* out) {
    const uint8_t* src = static_cast<const uint8_t*>(self);
    uint8_t* dst = static_cast<uint8_t*>(out);

    float v0, v1, v2;
    std::memcpy(&v0, src + 0x40, sizeof(float));
    std::memcpy(&v1, src + 0x44, sizeof(float));
    std::memcpy(&v2, src + 0x48, sizeof(float));

    std::memcpy(dst + 0x0, &v0, sizeof(float));
    std::memcpy(dst + 0x4, &v1, sizeof(float));
    std::memcpy(dst + 0x8, &v2, sizeof(float));
}
} // namespace lift_007D8450

// [0x007D8470] sub_007D8470 (26 bytes)
namespace lift_007D8470 {
// @name CopyVec3FromOffset4C
// @summary Copies three consecutive floats at src+0x4C..0x54 into out[0..2] (cdecl, void).
// @field Unknown +0x4c float field_0x4c
// @field Unknown +0x50 float field_0x50
// @field Unknown +0x54 float field_0x54
void CopyVec3FromOffset4C(const void* src, float* out) {
    const auto* base = static_cast<const std::uint8_t*>(src);
    std::memcpy(out, base + 0x4C, 3 * sizeof(float));
}
} // namespace lift_007D8470

// [0x007D8590]
namespace lift_007D8590 {
// @name SetVec3Offset40
// @summary Stores three float arguments into the vec3 at +0x40..+0x48 of the object pointer argument.
// @field Unknown +0x40 float field_0x40
// @field Unknown +0x44 float field_0x44
// @field Unknown +0x48 float field_0x48

void SetVec3Offset40(unsigned char* self, float x, float y, float z) {
    *reinterpret_cast<float*>(self + 0x40) = x;
    *reinterpret_cast<float*>(self + 0x44) = y;
    *reinterpret_cast<float*>(self + 0x48) = z;
}
} // namespace lift_007D8590

// [0x007D85E0]
namespace lift_007D85E0 {
// @name CopyDwords19ToOffset84
// @summary Copies 0x13 dwords from src into dst starting at dst+0x84 (cdecl, two pointer args).
// @field Unknown +0x84 uint32_t[19] field_0x84 (destination block, written by copy)

void sub_007D85E0(void* dst, const void* src) {
    auto* d = reinterpret_cast<uint32_t*>(reinterpret_cast<uint8_t*>(dst) + 0x84);
    const auto* s = reinterpret_cast<const uint32_t*>(src);
    for (uint32_t i = 0; i < 0x13; ++i) {
        d[i] = s[i];
    }
}
} // namespace lift_007D85E0

// [0x007D85B0] sub_007D85B0 (26 bytes)
namespace lift_007D85B0 {
// @name Unknown::SetVec3Field4C
// @class Unknown
// @summary Stores three float arguments into consecutive float fields at +0x4C, +0x50 and +0x54.
// @field Unknown +0x4C float field_0x4C
// @field Unknown +0x50 float field_0x50
// @field Unknown +0x54 float field_0x54
void fn_007D85B0(void* self, float x, float y, float z) {
    lift_field<float>(self, 0x4C) = x;
    lift_field<float>(self, 0x50) = y;
    lift_field<float>(self, 0x54) = z;
}
} // namespace lift_007D85B0

// [0x007D4760]
namespace lift_007D4760 {
// @name IndexedPointerArray::nextPointer
// @class IndexedPointerArray
// @summary Returns the element at the current index and advances it; returns null once the index reaches the count.
// @field IndexedPointerArray +0x08 uint32_t* items
// @field IndexedPointerArray +0x0C int32_t index
// @field IndexedPointerArray +0x14 int32_t count


struct IndexedPointerArray {
    uint8_t field_0x00[0x08];
    uint32_t* items;     // +0x08
    int32_t index;       // +0x0C
    uint8_t field_0x10[0x04];
    int32_t count;       // +0x14
};

uint32_t sub_007D4760(IndexedPointerArray* self) {
    int32_t idx = self->index;
    if (idx < self->count) {
        uint32_t result = self->items[idx];
        self->index = idx + 1;
        return result;
    }
    return 0;
}
} // namespace lift_007D4760

// [0x007D4780] sub_007D4780 (28 bytes)
namespace lift_007D4780 {
// @name decrementAndStoreSlot
// @class Unknown
// @summary If the element count at +0x0C is positive, decrement it and store the value into the slot at the new count inside the array whose base pointer is at +0x08.
// @field Unknown +0x08 DWORD* field_0x08
// @field Unknown +0x0C INT field_0x0C
void fn_007D4780(void* self, DWORD value) {
    unsigned char* base = static_cast<unsigned char*>(self);
    INT& count = *reinterpret_cast<INT*>(base + 0x0C);
    if (count > 0) {
        --count;
        DWORD arrayAddr = *reinterpret_cast<DWORD*>(base + 0x08);
        DWORD* array = reinterpret_cast<DWORD*>(static_cast<uintptr_t>(arrayAddr));
        array[count] = value;
    }
}
} // namespace lift_007D4780

// [0x007DCAA0]
namespace lift_007DCAA0 {
// @name sub_007DCAA0
// @summary Reads the DWORD at arg1[0], invokes arg2's callback at +0x0C with it, then invokes the callback again with arg1.
// @field Unknown +0x00 uintptr_t field_0x00
// @field Unknown +0x0C ProcPtr field_0x0C

// Callback stored at arg2+0x0C: takes one pointer-sized argument, cdecl (caller cleans up).
using ProcPtr = void(__cdecl*)(uintptr_t);

void __cdecl sub_007DCAA0(void* a1, void* a2) {
    ProcPtr fn = lift_field<ProcPtr>(a2, 0x0C);
    uintptr_t first = lift_field<uintptr_t>(a1, 0x00);
    fn(first);

    fn = lift_field<ProcPtr>(a2, 0x0C);
    fn(reinterpret_cast<uintptr_t>(a1));
}
} // namespace lift_007DCAA0

// [0x007D5AE0]
namespace lift_007D5AE0 {
// @name loadDwordFromPtrArg
// @summary Returns the 32-bit value stored at the address passed as the first (cdecl) argument.
uint32_t loadDwordFromPtrArg(void* p) {
    return *reinterpret_cast<const uint32_t*>(p);
}
} // namespace lift_007D5AE0

// [0x007D48A0] sub_007D48A0 (8 bytes)
namespace lift_007D48A0 {
// @name descriptiveName: fn_007D48A0 (dword at +0x04 getter)
// @summary Returns the dword stored at offset +0x04 of the object passed as the first argument.
// @field Unknown +0x04 uint32_t field_0x04
uint32_t fn_007D48A0(void* self) {
    return lift_field<uint32_t>(self, 0x04);
}
} // namespace lift_007D48A0

// [0x007D5BC0] sub_007D5BC0 (8 bytes)
namespace lift_007D5BC0 {
// @name sub_007D5BC0
// @summary Auto-lifted identical-shape clone of 0x007CC9F0 (readDwordAt0x0C).
namespace lift_007CC9F0 {
// @name readDwordAt0x0C
// @summary Returns the 32-bit value stored at offset 0x0C of the object passed as the first argument.
// @field Unknown +0x0C uint32_t field_0x0C
uint32_t fn_007D5BC0(void* self) {
    return lift_field<uint32_t>(self, 0x20);
}
} // namespace lift_007CC9F0
} // namespace lift_007D5BC0

// [0x007D8490] sub_007D8490 (8 bytes)
namespace lift_007D8490 {
// @name sub_007D8490
// @summary Auto-lifted identical-shape clone of 0x007CB970 (readFloatAt10).
namespace lift_007CB970 {
// @name readFloatAt10
// @summary Returns the float stored at offset 0x10 of the object passed as the first argument.
// @field self +0x10 float field_0x10
float fn_007D8490(void* self) {
    return lift_field<float>(self, 0x58);
}
} // namespace lift_007CB970
} // namespace lift_007D8490

// [0x007D8730] sub_007D8730 (11 bytes)
namespace lift_007D8730 {
// @name sub_007D8730
// @summary Auto-lifted identical-shape clone of 0x007CC9F0 (readDwordAt0x0C).
namespace lift_007CC9F0 {
// @name readDwordAt0x0C
// @summary Returns the 32-bit value stored at offset 0x0C of the object passed as the first argument.
// @field Unknown +0x0C uint32_t field_0x0C
uint32_t fn_007D8730(void* self) {
    return lift_field<uint32_t>(self, 0x168);
}
} // namespace lift_007CC9F0
} // namespace lift_007D8730

// [0x007D8740] sub_007D8740 (11 bytes)
namespace lift_007D8740 {
// @name sub_007D8740
// @summary Auto-lifted identical-shape clone of 0x007CC9F0 (readDwordAt0x0C).
namespace lift_007CC9F0 {
// @name readDwordAt0x0C
// @summary Returns the 32-bit value stored at offset 0x0C of the object passed as the first argument.
// @field Unknown +0x0C uint32_t field_0x0C
uint32_t fn_007D8740(void* self) {
    return lift_field<uint32_t>(self, 0x178);
}
} // namespace lift_007CC9F0
} // namespace lift_007D8740

// [0x007DB720] sub_007DB720 (8 bytes)
namespace lift_007DB720 {
// @name sub_007DB720
// @summary Auto-lifted identical-shape clone of 0x007CC9F0 (readDwordAt0x0C).
namespace lift_007CC9F0 {
// @name readDwordAt0x0C
// @summary Returns the 32-bit value stored at offset 0x0C of the object passed as the first argument.
// @field Unknown +0x0C uint32_t field_0x0C
uint32_t fn_007DB720(void* self) {
    return lift_field<uint32_t>(self, 0x18);
}
} // namespace lift_007CC9F0
} // namespace lift_007DB720

// [0x007DB730] sub_007DB730 (8 bytes)
namespace lift_007DB730 {
// @name sub_007DB730
// @summary Auto-lifted identical-shape clone of 0x007CC9F0 (readDwordAt0x0C).
namespace lift_007CC9F0 {
// @name readDwordAt0x0C
// @summary Returns the 32-bit value stored at offset 0x0C of the object passed as the first argument.
// @field Unknown +0x0C uint32_t field_0x0C
uint32_t fn_007DB730(void* self) {
    return lift_field<uint32_t>(self, 0x1C);
}
} // namespace lift_007CC9F0
} // namespace lift_007DB730
