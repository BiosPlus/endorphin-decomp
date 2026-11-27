// Lifted C++ translation unit: lifted/classes/HasRelativeToBufferTMPtr.cpp
#include "lift_compat.h"

// [0x005323C0] HasRelativeToBufferTMPtr::vfunc_12 (57 bytes)
namespace lift_005323C0 {
// Known callee 0x00661B50: sub_00661B50 (Dereferences an iterator-like wrapper to access a 64-byte element or invoke a virtual getter at index)
extern uint32_t __thiscall ext_00661B50(void* this_ptr, uint32_t index);
extern uint32_t mem_00AEE8A8;

// @name HasRelativeToBufferTMPtr::vfunc_12
// @class HasRelativeToBufferTMPtr
// @summary Resolves an element via ext_00661B50 and forwards two offset-adjusted addresses to virtual slot 7 of the other object
// @field HasRelativeToBufferTMPtr +0x04 uint32_t field_0x04
// @field HasRelativeToBufferTMPtr +0x08 uint32_t field_0x08
void fn_005323C0(void* self, void* other) {
    // Slot 7 (offset 0x1C) of the other object's vtable, called thiscall with one argument.
    using SlotFn = void(__thiscall*)(void*, uint32_t);

    uint32_t index = lift_field<uint32_t>(self, 0x04);
    uint32_t base = ext_00661B50(reinterpret_cast<void*>(static_cast<uintptr_t>(mem_00AEE8A8)), index);

    void** vtbl = *reinterpret_cast<void***>(other);
    reinterpret_cast<SlotFn>(vtbl[7])(other, base + 0x30);

    uint32_t next = lift_field<uint32_t>(self, 0x08);
    vtbl = *reinterpret_cast<void***>(other);
    reinterpret_cast<SlotFn>(vtbl[7])(other, next + 0x30);
}
} // namespace lift_005323C0

// [0x00532320] HasRelativeToBufferTMPtr::vfunc_13 (85 bytes)
namespace lift_00532320 {
// Known callee 0x00661B50: sub_00661B50 (Dereferences an iterator-like wrapper to access a 64-byte element or invoke a virtual getter at index)
extern char* ext_00661B50(void* this_ptr, uint32_t index);
extern uint32_t mem_00AEE8A8;
// Import slot 0x009253D0 holding glTranslatef (called indirectly).
extern void (*mem_009253D0)(float x, float y, float z);

// @name HasRelativeToBufferTMPtr::vfunc_13
// @class HasRelativeToBufferTMPtr
// @summary Issues two glTranslatef calls: one using the element returned by ext_00661B50(global, this->field_0x04) and one using the block at this->field_0x08 directly, each reading translation from +0x30..+0x38.
// @field HasRelativeToBufferTMPtr +0x04 uint32_t field_0x04
// @field HasRelativeToBufferTMPtr +0x08 void* field_0x08
void fn_00532320(void* self) {
    uint32_t index = lift_field<uint32_t>(self, 0x04);
    void* global = reinterpret_cast<void*>(static_cast<uintptr_t>(mem_00AEE8A8));
    char* elem = ext_00661B50(global, index);
    mem_009253D0(lift_field<float>(elem, 0x30),
                 lift_field<float>(elem, 0x34),
                 lift_field<float>(elem, 0x38));

    char* block = lift_field<char*>(self, 0x08);
    mem_009253D0(lift_field<float>(block, 0x30),
                 lift_field<float>(block, 0x34),
                 lift_field<float>(block, 0x38));
}
} // namespace lift_00532320
