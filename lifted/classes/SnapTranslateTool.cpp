// Lifted C++ translation unit: lifted/classes/SnapTranslateTool.cpp
#include "lift_compat.h"

// [0x00544D80] SnapTranslateTool::vfunc_26 (31 bytes)
namespace lift_00544D80 {
// @name SnapTranslateTool::vfunc_26
// @class SnapTranslateTool
// @summary Calls virtual slot 32 on self, then tail-dispatches virtual slot 26 on the object stored at +0x9C, passing &field_0x9C as this.
// @field SnapTranslateTool +0x9C void* field_0x9C
// [0x00544D80]
void fn_00544D80(void* self) {
    using VFn = void(__thiscall*)(void*);

    // Virtual slot 32 (vtable offset 0x80) on self.
    void** vtSelf = *reinterpret_cast<void***>(self);
    reinterpret_cast<VFn>(vtSelf[32])(self);

    // Virtual slot 26 (vtable offset 0x68) on the object at +0x9C; this = &field_0x9C.
    void* obj = lift_field<void*>(self, 0x9C);
    void** vtObj = *reinterpret_cast<void***>(obj);
    void* thisArg = reinterpret_cast<uint8_t*>(self) + 0x9C;
    reinterpret_cast<VFn>(vtObj[26])(thisArg);
}
} // namespace lift_00544D80

// [0x00544CE0]
namespace lift_00544CE0 {
extern uint32_t ext_00543530(void* self, uint32_t arg1, uint32_t arg2);

// @name SnapTranslateTool::vfunc_16
// @class SnapTranslateTool
// @summary Delegates to subobject at +0x164 via ext_00543530; if non-negative, forwards to vtable slot 16 of subobject at +0x9C, else returns 1.
// @field SnapTranslateTool +0x9C void* field_0x9C
// @field SnapTranslateTool +0x164 uint8_t field_0x164
uint32_t fn_00544CE0(void* self, uint32_t arg1, uint32_t arg2) {
    uint8_t* base = static_cast<uint8_t*>(self);
    uint32_t res = ext_00543530(base + 0x164, arg1, arg2);
    if (static_cast<int32_t>(res) < 0) {
        return 1;
    }
    void* subobj = base + 0x9C;
    uintptr_t vtable = *reinterpret_cast<uintptr_t*>(subobj);
    using VFunc16 = uint32_t(*)(void*, uint32_t, uint32_t);
    VFunc16 fn = *reinterpret_cast<VFunc16*>(vtable + 0x40);
    return fn(subobj, arg1, arg2);
}
} // namespace lift_00544CE0

// [0x00544D30]
namespace lift_00544D30 {
// @name SnapTranslateTool::vfunc_17
// @class SnapTranslateTool
// @summary Dispatches vfunc_17 to subobject at +0x164, falling back to +0x9C if it returns 0, and returns 1.
// @field SnapTranslateTool +0x9C void* field_0x9C
// @field SnapTranslateTool +0x164 void* field_0x164


uint32_t __thiscall fn_00544D30(void* self, uint32_t arg1, uint32_t arg2) {
    uint8_t* base = static_cast<uint8_t*>(self);

    void* sub1 = base + 0x164;
    auto vtbl1 = *reinterpret_cast<uintptr_t**>(sub1);
    using VFunc17 = uint32_t(__thiscall*)(void*, uint32_t, uint32_t);
    auto fn1 = reinterpret_cast<VFunc17>(vtbl1[0x44 / sizeof(uintptr_t)]);
    if (fn1(sub1, arg1, arg2) == 0) {
        void* sub2 = base + 0x9C;
        auto vtbl2 = *reinterpret_cast<uintptr_t**>(sub2);
        auto fn2 = reinterpret_cast<VFunc17>(vtbl2[0x44 / sizeof(uintptr_t)]);
        fn2(sub2, arg1, arg2);
    }

    return 1;
}
} // namespace lift_00544D30
