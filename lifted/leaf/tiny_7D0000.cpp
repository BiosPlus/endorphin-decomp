// Lifted C++ translation unit: lifted/leaf/tiny_7D0000.cpp
#include "lift_compat.h"
extern "C" int mem_0099E074;
#include <cstdint>

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

// [0x007D5AE0]
namespace lift_007D5AE0 {
// @name derefDword
// @summary Dereference a 32-bit pointer and return its uint32_t value.


uint32_t mem_read32(uint32_t addr);

uint32_t sub_007D5AE0(uint32_t ptr) {
    return mem_read32(ptr);
}
} // namespace lift_007D5AE0

// [0x007D48A0]
namespace lift_007D48A0 {
// @name getField_0x04
// @summary Returns the 32-bit value at offset +0x04 of the given object.
// @field Object +0x04 uint32_t field_0x04


extern uint32_t mem_read32(uint32_t addr);

uint32_t sub_007D48A0(uint32_t arg0) {
    return mem_read32(arg0 + 0x4);
}
} // namespace lift_007D48A0

// [0x007D5BC0]
namespace lift_007D5BC0 {
extern uint32_t mem_read32(uint32_t addr);

// @name getField0x20
// @summary Reads and returns the 32-bit value at offset 0x20 of the passed struct pointer.
// @field Struct +0x20 uint32_t field_0x20
extern uint32_t sub_007D5BC0(uint32_t arg0) {
    return mem_read32(arg0 + 0x20);
}
} // namespace lift_007D5BC0

// [0x007D8490]
namespace lift_007D8490 {
extern float mem_read_f32(uint32_t addr);

// @name getFloatAt0x58
// @summary Returns the float field at offset 0x58 of the given object.
// @field Object +0x58 float field_0x58
float sub_007D8490(uint32_t obj) {
    return mem_read_f32(obj + 0x58);
}
} // namespace lift_007D8490

// [0x007D8750]
namespace lift_007D8750 {
// @name getField0x5CFromArg1
// @summary Returns the 32-bit field at offset 0x5C of the second pointer argument.
// @field Arg1 +0x5C uint32_t field_0x5C
uint32_t sub_007D8750(uint32_t /*unused*/, uintptr_t obj) {
    return *reinterpret_cast<const uint32_t*>(obj + 0x5c);
}
} // namespace lift_007D8750

// [0x007DB730]
namespace lift_007DB730 {
extern uint32_t mem_read32(uint32_t addr);

// @name getField0x1C
// @summary Reads and returns the 32-bit field at offset 0x1C of the given object.
// @field Object +0x1C uint32_t field_0x1C
uint32_t sub_007DB730(uint32_t obj) {
    return mem_read32(obj + 0x1Cu);
}
} // namespace lift_007DB730

// [0x007DB720]
namespace lift_007DB720 {
// @name getField0x18
// @summary Reads a 32-bit value at offset 0x18 from the given object pointer.
// @field Object +0x18 uint32_t field_0x18


extern uint32_t mem_read32(uint32_t addr);

uint32_t sub_007DB720(uint32_t obj) {
    return mem_read32(obj + 0x18);
}
} // namespace lift_007DB720

// [0x007D5C50]
namespace lift_007D5C50 {
// @name derefBytePtr
// @summary Dereferences a pointer to a byte pointer and returns the zero-extended byte value.


extern uint32_t mem_r32(uint32_t addr);
extern uint8_t mem_r8(uint32_t addr);

uint32_t sub_007D5C50(uint32_t arg0) {
    uint32_t ptr = mem_r32(arg0);
    return static_cast<uint32_t>(mem_r8(ptr));
}
} // namespace lift_007D5C50

// [0x007D48B0]
namespace lift_007D48B0 {
// @name getRangeSize
// @summary Computes the difference between the 32-bit fields at +0x0C and +0x04 of a struct.
// @field Struct +0x04 uint32_t field_0x04
// @field Struct +0x0C uint32_t field_0x0C


uint32_t mem_r32(uint32_t addr);

uint32_t sub_007D48B0(uint32_t arg0) {
    return mem_r32(arg0 + 0x0C) - mem_r32(arg0 + 0x04);
}
} // namespace lift_007D48B0

// [0x007D47A0]
namespace lift_007D47A0 {
extern uint32_t mem_read32(uint32_t addr);

// @name getSpanDiff
// @summary Returns the difference between two 32-bit fields at +0x14 and +0x0C of the passed object.
// @field Obj +0x0C uint32_t field_0x0C
// @field Obj +0x14 uint32_t field_0x14
uint32_t sub_007D47A0(uint32_t obj) {
    uint32_t a = mem_read32(obj + 0x14);
    uint32_t b = mem_read32(obj + 0x0C);
    return a - b;
}
} // namespace lift_007D47A0

// [0x007DFB50]
namespace lift_007DFB50 {
// @name zeroU32Ptr
// @summary Zero-initializes a 32-bit value at the given pointer and returns the pointer
uint32_t* sub_007DFB50(uint32_t* ptr) {
    *ptr = 0;
    return ptr;
}
} // namespace lift_007DFB50

// [0x007D8730]
namespace lift_007D8730 {
uint32_t mem_r32(uint32_t addr);

// @name get_field_0x168
// @summary Returns the 32-bit value at offset 0x168 of the given object.
// @field unknown +0x168 uint32_t field_0x168
uint32_t sub_007D8730(uint32_t obj) {
    return mem_r32(obj + 0x168u);
}
} // namespace lift_007D8730

// [0x007D8740]
namespace lift_007D8740 {
extern uint32_t mem_read32(uintptr_t addr);

// @name getField0x178
// @summary Reads and returns the 32-bit value at offset 0x178 from the given object pointer.
// @field Object +0x178 uint32_t field_0x178
extern uint32_t __cdecl sub_007D8740(uintptr_t obj) {
    return mem_read32(obj + 0x178);
}
} // namespace lift_007D8740

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
