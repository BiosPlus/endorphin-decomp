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
