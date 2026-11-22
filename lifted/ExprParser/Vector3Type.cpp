// Lifted C++ translation unit: lifted/ExprParser/Vector3Type.cpp
#include "lift_compat.h"
extern "C" void ext_0066C030(void* self, void* arg);

// [0x0066D0C0] ExprParser::Vector3Type::vfunc_30 (26 bytes)
// @name ExprParser::Vector3Type::vfunc_30
// @class ExprParser::Vector3Type
// @summary Releases the pointer held in *slot via sub_0066C030 on this+0x08, then nulls *slot.
// @field ExprParser::Vector3Type +0x08 uint8_t field_0x08
// @field Unknown +0x00 void* field_0x00
void fn_0066D0C0(void* self, void** slot) {
    ext_0066C030(static_cast<char*>(self) + 0x08, *slot);
    *slot = nullptr;
}
