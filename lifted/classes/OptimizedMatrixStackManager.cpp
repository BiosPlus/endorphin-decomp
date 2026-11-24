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
