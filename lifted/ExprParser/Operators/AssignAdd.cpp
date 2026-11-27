// Lifted C++ translation unit: lifted/ExprParser/Operators/AssignAdd.cpp
#include "lift_compat.h"

// [0x006A0E20] ExprParser::Operators::AssignAdd::vfunc_3 (235 bytes)
namespace lift_006A0E20 {
// Known callee 0x0041CF00: Unknown::CopyFromSource_0041CF00 (thiscall; copies a (value, object) pair into self from src)
extern void* ext_0041CF00(void* self, void* src);
// Known callee 0x0041CF50: Unknown::assignFromOther_0041CF50 (thiscall; self-assignment guarded copy, returns self)
extern void* ext_0041CF50(void* self, void* other);
// Unnamed callee 0x004ECB40 (247 bytes): thiscall, takes an out-pointer and returns a value
extern void* ext_004ECB40(void* self, void* out);
// Known callee 0x00672040: sub_00672040 (auto-lifted clone of 0x0052EF20, CompoundRenderable::vfunc_7)
extern void ext_00672040(void* self);

// Calls virtual slot `offset` (byte offset into the vtable) on obj, passing obj as `this`.
template <typename R, typename... A>
inline R vcall(void* obj, std::size_t offset, A... args) {
    void** vtable = *reinterpret_cast<void***>(obj);
    using Fn = R(__thiscall*)(void*, A...);
    Fn fn = reinterpret_cast<Fn>(vtable[offset / sizeof(void*)]);
    return fn(obj, args...);
}

// @name ExprParser::Operators::AssignAdd::vfunc_3
// @class ExprParser::Operators::AssignAdd
// @summary Assign-add step: if the rhs object reports type 0xF, copy the pair from self, call its vslot 0xAC with rhs, then release it; otherwise run the fallback path. Finishes with the guarded self-assignment copy.
// @field AssignAdd +0x04 void* field_0x04
void fn_006A0E20(void* self, void* rhs) {
    void* obj = lift_field<void*>(self, 0x04);

    int kind = vcall<int>(obj, 0x30);
    void* value_obj = nullptr; // written by the 0x0041CF00 pair copy (tmp[0])
    void* pair[2] = {nullptr, nullptr};

    if (kind == 0x0F) {
        ext_0041CF00(pair, self);

        void* out = nullptr;
        vcall<void>(pair[0], 0xAC, &out, rhs);

        void* value = nullptr;
        vcall<void>(obj, 0xA4, self, &value);

        value_obj = pair[0];
        if (value_obj) {
            vcall<void>(value_obj, 0x78, &value);
        }
    } else {
        ext_00672040(self);
        vcall<void>(obj, 0xAC, self, rhs);
    }

    void* released = nullptr;
    void* result = ext_004ECB40(self, &released);
    ext_0041CF50(self, result);

    if (released) {
        void* tmp = nullptr;
        vcall<void>(released, 0x78, &tmp);
    }
}
} // namespace lift_006A0E20
