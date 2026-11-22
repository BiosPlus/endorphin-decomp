// Lifted C++ translation unit: lifted/ExprParser/Operators/Equals.cpp
#include "lift_compat.h"

// [0x006A07D0] ExprParser::Operators::Equals::vfunc_3 (48 bytes)
// @name ExprParser::Operators::Equals::evalAndNotifyOperand
// @class ExprParser::Operators::Equals
// @summary Takes (token, ctx), calls virtual slot 42 (0xA8) on token->child to get a bool, then calls virtual slot 9 (0x24) on the same child with (token, bool) and returns its result.
// @field ExprParser::ExprToken +0x04 void* child
void* fn_006A07D0(void* token, void* ctx) {
    void* child = lift_field<void*>(token, 0x04);
    void** vtbl = *reinterpret_cast<void***>(child);
    bool r = reinterpret_cast<bool (*)(void*, void*, void*)>(vtbl[0xA8 / 4])(child, token, ctx);

    child = lift_field<void*>(token, 0x04);
    vtbl = *reinterpret_cast<void***>(child);
    return reinterpret_cast<void* (*)(void*, void*, uint32_t)>(vtbl[0x24 / 4])(child, token, static_cast<uint32_t>(r));
}
