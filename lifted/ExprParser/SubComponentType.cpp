// Lifted C++ translation unit: lifted/ExprParser/SubComponentType.cpp
#include "lift_compat.h"

// [0x0066BE20] ExprParser::SubComponentType::vfunc_3 (110 bytes)
// @name ExprParser::SubComponentType::vfunc_3
// @class ExprParser::SubComponentType
// @summary Calls vtable slot 0 to fetch a sub-object, queries its vtable slot 3 for a bool, then releases the temporary via vtable slot 30 and returns the bool.
// @field ExprParser::SubComponentType +0x00 void* field_0x00

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
