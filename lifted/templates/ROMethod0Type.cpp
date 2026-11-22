// Lifted C++ translation unit: lifted/templates/ROMethod0Type.cpp
#include "lift_compat.h"
// Known callee 0x006720C0 (18B): invoked on self with a single zero argument.
extern "C" void ext_006720C0(void* self, uint32_t flag);

// [0x00486F00] ExprParser::ROMethod0Type<NM::Vector3, &public: void __thiscall NM::Vector3::normalize2(void)>::vfunc_0 (30 bytes)
// @name ExprParser::ROMethod0Type::vfunc_0 (NM::Vector3::normalize2)
// @class ExprParser::ROMethod0Type<NM::Vector3, &public: void __thiscall NM::Vector3::normalize2(void)>
// @summary Invoke the normalize2 helper on self with flag 0 and return self. The second argument is unused.
// No object fields are accessed directly.
void* fn_00486F00(void* self, uint32_t unused) {
    (void)unused;
    ext_006720C0(self, 0);
    return self;
}
