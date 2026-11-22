// Lifted C++ translation unit: lifted/ExprParser/SubComponentType.cpp
#include "lift_compat.h"
// Virtual slots used by this function (indices into the object's vtable):
//   vt[0]  : returns an object pointer via eax; writes the out-slot as a hidden return.
//   vt[2]  : returns a value via eax; takes one argument.
//   vt[30] : (offset 0x78) releases/finalizes the out-slot object with a scratch pointer.
using VCall0 = void* (__thiscall*)(void* self, void** out, uint32_t arg, uint32_t extra);
using VCall2 = uint32_t (__thiscall*)(void* self, void* arg);
using VCall30 = void (__thiscall*)(void* self, void** scratch);

//   vt[0]  : returns an object pointer via eax; writes the out-slot as a hidden return.
//   vt[2]  : returns a value via eax; takes one argument.
//   vt[30] : (offset 0x78) releases/finalizes the out-slot object with a scratch pointer.
using VCall0 = void* (__thiscall*)(void* self, void** out, uint32_t arg, uint32_t extra);
using VCall2 = uint32_t (__thiscall*)(void* self, void* arg);
using VCall30 = void (__thiscall*)(void* self, void** scratch);
bool fn_0066BE20(void* self, void* arg) {
    // Object vtable: first word of self.
    void** vtbl = *reinterpret_cast<void***>(self);

    // Temporaries living in the frame: tmp receives the callee's output,
    // released is the scratch slot passed to the release routine.
    void* tmp = nullptr;
    void* released = nullptr;

    // vtbl[0](self, &tmp, arg) -> returns pointer r whose +0x04 holds a sub-object.
    using GetFn = void* (*)(void* self, void** out, void* arg);
    GetFn get = reinterpret_cast<GetFn>(vtbl[0]);
    void* r = get(self, &tmp, arg);

    // inner = r->[+0x04]; result = inner->vtbl[3]()
    void* inner = *reinterpret_cast<void**>(static_cast<char*>(r) + 0x04);
    void** innerVtbl = *reinterpret_cast<void***>(inner);
    using PredFn = bool (*)(void* self);
    PredFn pred = reinterpret_cast<PredFn>(innerVtbl[3]);
    bool result = pred(inner);

    // If the temporary was populated, release it via its vtbl[30] (0x78).
    if (tmp != nullptr) {
        void** tmpVtbl = *reinterpret_cast<void***>(tmp);
        using ReleaseFn = void (*)(void* self, void* p);
        ReleaseFn release = reinterpret_cast<ReleaseFn>(tmpVtbl[30]);
        release(tmp, &released);
    }

    return result;
}

// [0x0066BDB0] ExprParser::SubComponentType::vfunc_2 (110 bytes)
// @name ExprParser::SubComponentType::vfunc_2
// @class ExprParser::SubComponentType
// @summary Calls the object's vfunc_0 to obtain a sub-component pointer, forwards that pointer to the sub-component's vfunc_2 for the result, then finalizes the temporary out-slot via vtable slot 30 and returns the result.
// @field Unknown +0x04 void* field_0x04 (sub-component object returned by vfunc_0; its class is not identified)
uint32_t fn_0066BDB0(void* self, uint32_t arg) {
    // The SEH frame (handler 0x008B33B8, state counter) is a compiler-generated
    // exception wrapper and has no portable equivalent; it is omitted here.

    // First vtable call: hidden out-slot plus the argument. The original also pushes
    // the caller's esi as a trailing stack word; it is not a meaningful input here.
    void* out = nullptr;
    void** vt = *static_cast<void***>(self);
    auto call0 = reinterpret_cast<VCall0>(vt[0]);
    void* ptr = call0(self, &out, arg, 0);

    // Sub-component pointer lives at +0x04 of the returned object.
    void* inner = lift_field<void*>(ptr, 4);

    // Second vtable call on the sub-component, passing the returned object pointer.
    void** innerVt = *static_cast<void***>(inner);
    auto call2 = reinterpret_cast<VCall2>(innerVt[2]);
    const uint32_t result = call2(inner, ptr);

    // Finalize the temporary from the out-slot if one was produced.
    if (out != nullptr) {
        void** outVt = *static_cast<void***>(out);
        auto call30 = reinterpret_cast<VCall30>(outVt[30]);
        void* scratch = nullptr;
        call30(out, &scratch);
    }

    return result;
}

// [0x0066BD40] ExprParser::SubComponentType::vfunc_1 (111 bytes)
// @name ExprParser::SubComponentType::vfunc_1
// @class ExprParser::SubComponentType
// @summary Calls vtable slot 0 to fetch a sub-object, calls that sub-object's vtable slot 1 to get a float, releases the temporary via vtable slot 30, and returns the float.
// @field ExprParser::SubComponentType +0x00 void* vptr

float fn_0066BD40(void* self, void* arg) {
    // Object vtable: first word of self.
    void** vtbl = *reinterpret_cast<void***>(self);

    // Output temporary (8 bytes): the callee fills slot [1] with a holder pointer.
    void* out[2] = {nullptr, nullptr};

    // vtbl[0](self, &out, arg) -> returns pointer r.
    using GetFn = void* (*)(void* self, void** out, void* arg);
    GetFn get = reinterpret_cast<GetFn>(vtbl[0]);
    void* r = get(self, out, arg);

    // inner = r->[+0x04]; value = inner->vtbl[1](r)
    void* inner = *reinterpret_cast<void**>(static_cast<char*>(r) + 0x04);
    void** innerVtbl = *reinterpret_cast<void***>(inner);
    using ValueFn = float (*)(void* self, void* r);
    ValueFn valueFn = reinterpret_cast<ValueFn>(innerVtbl[1]);
    float value = valueFn(inner, r);

    // Release the holder stored in out[1] via its vtbl[30] (0x78).
    void* holder = out[1];
    if (holder != nullptr) {
        void** holderVtbl = *reinterpret_cast<void***>(holder);
        using ReleaseFn = void (*)(void* self, void** p);
        ReleaseFn release = reinterpret_cast<ReleaseFn>(holderVtbl[30]);
        release(holder, out);
    }

    return value;
}

// [0x0066BF10] ExprParser::SubComponentType::vfunc_0 (134 bytes)
// @name ExprParser::SubComponentType::vfunc_0
// @class ExprParser::SubComponentType
// @summary Calls the sub-component's vfunc_0 and the member's vfunc_0 to fill a two-word out struct, then releases out[1] via its vtable slot 30 when non-null; returns the first stack argument.
// @field ExprParser::SubComponentType +0x04 void* field_0x04 (sub-component object; vtable slot 0 called)
// @field ExprParser::SubComponentType +0x08 void* field_0x08 (member object; vtable slot 0 called)
uint32_t fn_0066BF10(void* self, uint32_t firstArg, uint32_t arg) {
    // The SEH frame (handler 0x008B33A1, state slot) is compiler-generated
    // exception bookkeeping with no portable equivalent; it is omitted here.
    // The original also writes a local flag (esp+4) that is never read; omitted.

    // Two-word out struct shared by both vtable calls (E+8 / E+0xc in the original).
    // Slot 0 of the sub-component: (out, arg); slot 0 of the member: (firstArg, out).
    void* out[2] = {nullptr, nullptr};

    // Sub-component call: sub->vt[0](&out, arg).
    void* sub = lift_field<void*>(self, 4);
    void** subVt = *static_cast<void***>(sub);
    auto subGet = reinterpret_cast<void* (__thiscall*)(void* self, void** out, uint32_t arg)>(subVt[0]);
    subGet(sub, out, arg);

    // Member call: member->vt[0](firstArg, &out).
    void* member = lift_field<void*>(self, 8);
    void** memberVt = *static_cast<void***>(member);
    auto memberGet = reinterpret_cast<void (__thiscall*)(void* self, uint32_t first, void** out)>(memberVt[0]);
    memberGet(member, firstArg, out);

    // Release out[1] if it was produced: out[1]->vt[30](&out) (offset 0x78).
    void* released = out[1];
    if (released != nullptr) {
        void** relVt = *static_cast<void***>(released);
        auto release = reinterpret_cast<void (__thiscall*)(void* self, void** out)>(relVt[30]);
        release(released, out);
    }

    // The original returns the first stack argument (esi reloaded from esp+0x20).
    return firstArg;
}

// [0x0066BFA0] ExprParser::SubComponentType::vfunc_41 (143 bytes)
// @name ExprParser::SubComponentType::vfunc_41
// @class ExprParser::SubComponentType
// @summary Calls vfunc_0 on the +0x04 sub-component, vfunc_41 on the +0x08 member and the sub-component, then releases out[1] via its vfunc_30.
// @field ExprParser::SubComponentType +0x04 void* field_0x04
// @field ExprParser::SubComponentType +0x08 void* field_0x08

// Thiscall slot shapes used here (stack arguments only; ecx carries `this`):
//   (out, arg)   : vtable slots 0 and 41 on the member, and slot 0 on the sub-component.
//   (first, out) : vtable slot 41 on the sub-component.
//   (out)        : vtable slot 30 (offset 0x78) on out[1].
using OutArgFn   = void (__thiscall*)(void* self, void** out, uint32_t arg);
using FirstOutFn = void (__thiscall*)(void* self, uint32_t first, void** out);
using ReleaseFn  = void (__thiscall*)(void* self, void** out);

// Reads slot `index` of the vtable of `obj`. Offsets in the original are
// 4 * index (e.g. 0xA4 -> 41, 0x78 -> 30).
static inline void* vtable_slot(void* obj, size_t index) {
    return (*static_cast<void***>(obj))[index];
}

// The original's MSVC SEH frame (fs:[0] prologue/epilogue) only scaffolds the
// body; the body has no handlers or destructible locals, so it is omitted.
void fn_0066BFA0(void* self, uint32_t arg1, uint32_t arg2) {
    void* sub    = lift_field<void*>(self, 0x04);
    void* member = lift_field<void*>(self, 0x08);

    // Two-slot out-pair shared by every call (out[0], out[1]).
    void* out[2] = {nullptr, nullptr};

    // 1) sub->vfunc_0(&out, arg1). Its result is overwritten by step 3.
    reinterpret_cast<OutArgFn>(vtable_slot(sub, 0))(sub, out, arg1);

    // 2) member->vfunc_41(&out, arg2). Also overwritten by step 3.
    reinterpret_cast<OutArgFn>(vtable_slot(member, 41))(member, out, arg2);

    // 3) sub->vfunc_41(arg1, &out). This is the value that is kept.
    reinterpret_cast<FirstOutFn>(vtable_slot(sub, 41))(sub, arg1, out);

    // 4) If out[1] was produced, release it through its vfunc_30.
    if (out[1] != nullptr) {
        reinterpret_cast<ReleaseFn>(vtable_slot(out[1], 30))(out[1], out);
    }
}
