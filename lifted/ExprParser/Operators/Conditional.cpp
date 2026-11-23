// Lifted C++ translation unit: lifted/ExprParser/Operators/Conditional.cpp
#include "lift_compat.h"

// [0x006A1500] ExprParser::Operators::Conditional::vfunc_3 (52 bytes)
namespace lift_006A1500 {
extern void ext_006A1490();

// @name ExprParser::Operators::Conditional::vfunc_3
// @class ExprParser::Operators::Conditional
// @summary Evaluates the condition held in the object's +0x04 pointer via virtual slot 3; forwards arg2 to helper 0x006A1490 when true, otherwise forwards arg3.
// @field ExprParser::Operators::Conditional +0x04 void* field_0x04

// Virtual slot 3 (offset 0x0C): receiver passed as first argument (portable model
// of the __thiscall ecx = receiver convention used across lifted/ExprParser).
typedef uint8_t (*CondSlot3Fn)(void* self, void* arg);
// Helper 0x006A1490: receiver plus one stack argument; eax is passed through.
typedef uint32_t (*CondHelperFn)(void* self, void* arg);

uint32_t fn_006A1500(void* self, void* arg2, void* arg3) {
    // cond = [self + 0x04]; flag = cond->slot3(self)
    void* cond = *reinterpret_cast<void**>(static_cast<uint8_t*>(self) + 0x04);
    void** condVtbl = *reinterpret_cast<void***>(cond);
    uint8_t flag = reinterpret_cast<CondSlot3Fn>(condVtbl[3])(cond, self);

    auto helper = reinterpret_cast<CondHelperFn>(ext_006A1490);
    if (flag != 0) {
        return helper(self, arg2);
    }
    return helper(self, arg3);
}
} // namespace lift_006A1500
