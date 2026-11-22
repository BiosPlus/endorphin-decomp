// Lifted C++ translation unit: lifted/ExprParser/Operators/Comma.cpp
#include "lift_compat.h"

// [0x006A1DF0] ExprParser::Operators::Comma::vfunc_2 (34 bytes)
// @name ExprParser::Operators::Comma::vfunc_2
// @class ExprParser::Operators::Comma
// @summary Pops the last 4-byte element from a [begin, end) vector if begin is non-null and the vector is non-empty.
// @field ExprParser::Operators::Comma +0x04 uint32_t begin
// @field ExprParser::Operators::Comma +0x08 uint32_t end
void fn_006A1DF0(void* self, void* arg) {
    (void)arg;

    uint32_t& begin = lift_field<uint32_t>(self, 4);
    uint32_t& end = lift_field<uint32_t>(self, 8);

    if (begin == 0) {
        return;
    }
    int32_t count = static_cast<int32_t>(end - begin) >> 2;
    if (count == 0) {
        return;
    }
    end -= 4;
}
