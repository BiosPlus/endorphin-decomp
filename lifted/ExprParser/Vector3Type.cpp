// Lifted C++ translation unit: lifted/ExprParser/Vector3Type.cpp
#include "lift_compat.h"
extern "C" void ext_0066C030(void* self, void* arg);
extern "C" void ext_00672110(void* self, void* arg);

void fn_0066D0C0(void* self, void** slot) {
    ext_0066C030(static_cast<char*>(self) + 0x08, *slot);
    *slot = nullptr;
}

// [0x0066B530] ExprParser::Vector3Type::vfunc_0 (41 bytes)
// @name ExprParser::Vector3Type::vfunc_0
// @class ExprParser::Vector3Type
// @summary Calls slot 5 on self with arg2, passes the result to sub_00672110 (this=arg2), returns arg2.
// @field ExprParser::Vector3Type +0x00 void* vtable
void* fn_0066B530(void* self, void* a1, void* a2) {
    (void)a1;  // first stack argument is never read
    // The original also pushes a saved-register word and a literal 0 for the
    // slot-5 call; those are not modelled here (see report).
    void** vtbl = *static_cast<void***>(self);
    void* r = reinterpret_cast<void* (*)(void*, void*)>(vtbl[5])(self, a2);
    ext_00672110(a2, r);
    return a2;
}
