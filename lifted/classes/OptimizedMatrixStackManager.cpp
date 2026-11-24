// Lifted C++ translation unit: lifted/classes/OptimizedMatrixStackManager.cpp
#include "lift_compat.h"

// [0x0054E9D0] OptimizedMatrixStackManager::vfunc_7 (30 bytes)
namespace lift_0054E9D0 {
// @name OptimizedMatrixStackManager::vfunc_7
// @class OptimizedMatrixStackManager
// @summary Virtual slot 7 dispatcher: forwards slot 7 to child at +0x20 if field_04 < field_08, else to child at +0x0C; passes the callee's result through.
// @field OptimizedMatrixStackManager +0x04 int32_t field_0x04
// @field OptimizedMatrixStackManager +0x08 int32_t field_0x08
// @field OptimizedMatrixStackManager +0x0C void* field_0x0C
// @field OptimizedMatrixStackManager +0x20 void* field_0x20

// Calls virtual slot 7 (byte offset 0x1C) on `obj`, passing `obj` as `this`.
static inline int32_t call_vslot7(void* obj) {
    void** vtbl = *reinterpret_cast<void***>(obj);
    using Fn = int32_t(__thiscall*)(void*);
    return reinterpret_cast<Fn>(vtbl[7])(obj);
}

int32_t fn_0054E9D0(void* self) {
    const int32_t count = lift_field<int32_t>(self, 0x04);
    const int32_t limit = lift_field<int32_t>(self, 0x08);

    if (count < limit) {
        // Tail-dispatch slot 7 on the child at +0x20.
        return call_vslot7(lift_field<void*>(self, 0x20));
    }
    // Tail-dispatch slot 7 on the child at +0x0C.
    return call_vslot7(lift_field<void*>(self, 0x0C));
}
} // namespace lift_0054E9D0

// [0x0054E9B0] OptimizedMatrixStackManager::vfunc_5 (30 bytes)
namespace lift_0054E9B0 {
// @name OptimizedMatrixStackManager::vfunc_5
// @class OptimizedMatrixStackManager
// @summary Compares the int at +0x4 against the int at +0x8; if less, tail-dispatches vtable slot 5 of the object at +0x20 with this = self+0x20, otherwise does the same via the object at +0xC with this = self+0xC. Returns the callee's result.
// @field OptimizedMatrixStackManager +0x04 int32_t field_0x04 (current index, signed compare)
// @field OptimizedMatrixStackManager +0x08 int32_t field_0x08 (limit, signed compare)
// @field OptimizedMatrixStackManager +0x0C void* field_0x0c (sub-object pointer; its vtable slot 5 is called when index >= limit)
// @field OptimizedMatrixStackManager +0x20 void* field_0x20 (sub-object pointer; its vtable slot 5 is called when index < limit)
uint32_t fn_0054E9B0(void* self) {
    unsigned char* base = static_cast<unsigned char*>(self);

    const int32_t index = *reinterpret_cast<int32_t*>(base + 0x04);
    const int32_t limit = *reinterpret_cast<int32_t*>(base + 0x08);

    // Select the sub-object: field at +0x20 when index < limit, otherwise +0xC.
    // The callee receives the address of the selected field as `this` (tail-call adjustment).
    const std::size_t slotOffset = (index < limit) ? 0x20 : 0x0C;
    void* target = base + slotOffset;
    void* object = *reinterpret_cast<void**>(target);

    // Load vtable[5] (byte offset 0x14, matching the 32-bit layout of the original binary).
    void** vtbl = *reinterpret_cast<void***>(object);
    using VirtualFn = uint32_t (*)(void* self);
    VirtualFn fn = reinterpret_cast<VirtualFn>(vtbl[0x14 / sizeof(void*)]);

    return fn(target);
}
} // namespace lift_0054E9B0
