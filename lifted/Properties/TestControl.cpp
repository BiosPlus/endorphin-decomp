// Lifted C++ translation unit: lifted/Properties/TestControl.cpp
#include "lift_compat.h"

// [0x004F0530]
namespace lift_004F0530 {
// @name Properties::TestControl::vfunc_7
// @class Properties::TestControl
// @summary Fetches a string via ext_0041CEB0 into a temporary std::string and assigns it to field_0x1c.
// @field Properties::TestControl +0x1c std::string field_0x1c


extern uint32_t ext_0041CEB0(void* self, uint32_t arg1);
extern uintptr_t mem_00924FDC;
extern uintptr_t mem_00924FF4;

void fn_004F0530(void* self, void* arg1) {
    uint8_t tmp[0x1c];
    uint32_t str_ptr = ext_0041CEB0(arg1, static_cast<uint32_t>(reinterpret_cast<uintptr_t>(tmp)));
    auto assign_fn = reinterpret_cast<void(__thiscall*)(void*, uint32_t)>(mem_00924FDC);
    assign_fn(static_cast<uint8_t*>(self) + 0x1c, str_ptr);
    auto dtor_fn = reinterpret_cast<void(__thiscall*)(void*)>(mem_00924FF4);
    dtor_fn(tmp);
}
} // namespace lift_004F0530

// [0x004F05C0] sub_004F05C0 (82 bytes)
namespace lift_004F05C0 {
// Known callee 0x00596660: eraseInt32Range (Validates self-pointer args, erases [first,last) from a 4-byte-element buffer by shifting the tail down, sets end, writes a 2-pointer result to out.)
extern void ext_00596660(void* self, void** out, void* a2, int32_t* first, void* a4, int32_t* last);
// Known callee 0x004EFDF0: StringPairList::clear (Clears all nodes in a doubly-linked list of string pairs and resets size to zero.)
extern void ext_004EFDF0(void* self);
// IAT slot 0x00925134 holding the pointer to MSVCR80!_invalid_parameter_noinfo.
extern void* mem_00925134;

// @name Properties::TestControl::vfunc_1
// @class Properties::TestControl
// @summary Increments counter +0x28, zeroes +0x24, erases the int32 range [begin,end) at +0x0C/+0x10 via ext_00596660, then tail-calls StringPairList::clear on this+0x18.
// @field Properties::TestControl +0x0C int32_t* field_0x0c
// @field Properties::TestControl +0x10 int32_t* field_0x10
// @field Properties::TestControl +0x24 DWORD field_0x24
// @field Properties::TestControl +0x28 DWORD field_0x28
void fn_004F05C0(void* self) {
    lift_field<DWORD>(self, 0x28) += 1;
    lift_field<DWORD>(self, 0x24) = 0;

    // esi = this + 0x8; range pointers live at esi+4 (begin) and esi+8 (end).
    void* esi = static_cast<uint8_t*>(self) + 0x8;

    int32_t* begin = lift_field<int32_t*>(self, 0x0C);
    int32_t* end = lift_field<int32_t*>(self, 0x10);
    if (reinterpret_cast<uintptr_t>(begin) > reinterpret_cast<uintptr_t>(end)) {
        reinterpret_cast<void (*)()>(mem_00925134)();
    }

    begin = lift_field<int32_t*>(self, 0x0C);
    if (reinterpret_cast<uintptr_t>(begin) > reinterpret_cast<uintptr_t>(end)) {
        reinterpret_cast<void (*)()>(mem_00925134)();
    }

    void* out[2] = {nullptr, nullptr};
    ext_00596660(esi, out, esi, begin, esi, end);

    // Tail call: StringPairList::clear(this + 0x18)
    ext_004EFDF0(static_cast<uint8_t*>(self) + 0x18);
}
} // namespace lift_004F05C0
