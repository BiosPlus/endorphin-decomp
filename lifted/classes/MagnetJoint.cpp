// Lifted C++ translation unit: lifted/classes/MagnetJoint.cpp
#include "lift_compat.h"
#include <cstring>

// [0x00645D30]
namespace lift_00645D30 {
// @name MagnetJoint::vfunc_3
// @class MagnetJoint
// @summary Sets the double value at the start of the element at the given index in a 24-byte-stride vector, with bounds checking.
// @field MagnetJoint +0x10 void* field_0x10
// @field MagnetJoint +0x14 void* field_0x14


extern void (__cdecl* mem_00925134)();

void __thiscall fn_00645D30(void* self, uint32_t index, double value) {
    uint8_t* obj = static_cast<uint8_t*>(self);
    uint8_t* begin = *reinterpret_cast<uint8_t**>(obj + 0x10);
    if (begin == nullptr) {
        mem_00925134();
    } else {
        uint8_t* end = *reinterpret_cast<uint8_t**>(obj + 0x14);
        int32_t byte_size = static_cast<int32_t>(end - begin);
        uint32_t count = static_cast<uint32_t>(byte_size / 24);
        if (index >= count) {
            mem_00925134();
        }
    }
    begin = *reinterpret_cast<uint8_t**>(obj + 0x10);
    *reinterpret_cast<double*>(begin + index * 24) = value;
}
} // namespace lift_00645D30

// [0x00645D80]
namespace lift_00645D80 {
extern void (__cdecl* mem_00925134)();

// @name MagnetJoint::vfunc_4
// @class MagnetJoint
// @summary Bounds-checked setter for a double at offset +0x10 of a 24-byte element in the vector at +0x10..+0x14
// @field MagnetJoint +0x10 void* field_0x10
// @field MagnetJoint +0x14 void* field_0x14
void __thiscall fn_00645D80(uint8_t* self, uint32_t index, double value) {
    uint8_t* begin = *reinterpret_cast<uint8_t**>(self + 0x10);
    if (begin == nullptr) {
        mem_00925134();
        begin = *reinterpret_cast<uint8_t**>(self + 0x10);
    } else {
        uint8_t* end = *reinterpret_cast<uint8_t**>(self + 0x14);
        int32_t count = static_cast<int32_t>(end - begin) / 24;
        if (index >= static_cast<uint32_t>(count)) {
            mem_00925134();
            begin = *reinterpret_cast<uint8_t**>(self + 0x10);
        }
    }
    *reinterpret_cast<double*>(begin + static_cast<size_t>(index) * 24 + 0x10) = value;
}
} // namespace lift_00645D80

// [0x00645DD0]
namespace lift_00645DD0 {
// @name MagnetJoint::vfunc_5
// @class MagnetJoint
// @summary Sets a double field at offset +0x08 of a 24-byte element in a vector at +0x10/+0x14 after bounds checking
// @field MagnetJoint +0x10 void* field_0x10
// @field MagnetJoint +0x14 void* field_0x14


extern void (*mem_00925134)();

void __thiscall fn_00645DD0(void* self, uint32_t index, double value) {
    uint8_t* begin = *reinterpret_cast<uint8_t**>(reinterpret_cast<uint8_t*>(self) + 0x10);
    if (!begin) {
        mem_00925134();
    } else {
        uint8_t* end = *reinterpret_cast<uint8_t**>(reinterpret_cast<uint8_t*>(self) + 0x14);
        int32_t count = static_cast<int32_t>(end - begin) / 24;
        if (index >= static_cast<uint32_t>(count)) {
            mem_00925134();
        }
    }

    uint8_t* base = *reinterpret_cast<uint8_t**>(reinterpret_cast<uint8_t*>(self) + 0x10);
    *reinterpret_cast<double*>(base + index * 24 + 0x8) = value;
}
} // namespace lift_00645DD0

// [0x00645520] MagnetJoint::vfunc_0_off_4 (68 bytes)
namespace lift_00645520 {
extern void __thiscall ext_0067E990(void* self, uint32_t value);

// @name MagnetJoint::vfunc_0_off_4
// @class MagnetJoint
// @summary Forwards src to the owning joint's vslot 47 (+0xBC), copies 64 bytes from src into the joint at +0x1C, then if +0x5C is set calls its vslot 3 and passes the result with src to ext_0067E990.
// @field MagnetJoint +0x1C uint32_t field_0x1C[16]
// @field MagnetJoint +0x5C void* field_0x5C
extern void __thiscall fn_00645520(void* self, const void* src) {
    // `self` is the HasBufferedTM subobject, at offset +4 within MagnetJoint.
    uint8_t* joint = static_cast<uint8_t*>(self) - 4;

    // Virtual call: joint->vtable[0xBC / 4](src)
    void** vtbl = *reinterpret_cast<void***>(joint);
    using SlotFn = void(__thiscall*)(void*, const void*);
    reinterpret_cast<SlotFn>(vtbl[0xBC / sizeof(void*)])(joint, src);

    // Copy 16 dwords (64 bytes) from src to joint +0x1C.
    std::memcpy(&lift_field<uint32_t>(joint, 0x1C), src, 0x40);

    void* target = lift_field<void*>(joint, 0x5C);
    if (target != nullptr) {
        // Virtual call: target->vtable[0xC / 4]() returning a 32-bit value.
        void** tvtbl = *reinterpret_cast<void***>(target);
        using ValueFn = uint32_t(__thiscall*)(void*);
        uint32_t value = reinterpret_cast<ValueFn>(tvtbl[0xC / sizeof(void*)])(target);
        ext_0067E990(const_cast<void*>(src), value);
    }
}
} // namespace lift_00645520
