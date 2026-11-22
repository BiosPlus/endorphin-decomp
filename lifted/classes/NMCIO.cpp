// Lifted C++ translation unit: lifted/classes/NMCIO.cpp
#include "lift_compat.h"
#include <string>
extern "C" int mem_00B37F40;
extern const std::string mem_00B3B084;
extern const std::string mem_00B3B1D4;
// Read the i-th slot of the vtable stored at the start of obj.
static inline void* vtbl_slot(void* obj, size_t index) {
    void** vtbl = *reinterpret_cast<void***>(obj);
    return vtbl[index];
}

// [0x0056D860] NMCIO::vfunc_10 (190 bytes)
// @name NMCIO::vfunc_10
// @class NMCIO
// @summary Forwards arg to this->field_0x414 (vslot 7), then builds two string temporaries from globals, passes them to sub-object vslots 23 and 24, bumps a global counter, and destroys the temporaries.
// @field NMCIO +0x414 void* field_0x414
void fn_0056D860(void* self, void* arg) {
    void* const p = lift_field<void*>(self, 0x414);

    // p->vfunc_7(arg)
    reinterpret_cast<void (*)(void*, void*)>(vtbl_slot(p, 7))(p, arg);

    // Embedded sub-object lives at p+0x04 and its vptr is stored there.
    void* const sub = static_cast<uint8_t*>(p) + 0x04;

    std::string s1 = mem_00B3B084;
    std::string s2 = mem_00B3B1D4;

    // sub->vfunc_23(s1)
    reinterpret_cast<void (*)(void*, const std::string*)>(vtbl_slot(sub, 23))(sub, &s1);

    // sub->vfunc_24(s2)
    reinterpret_cast<void (*)(void*, const std::string*)>(vtbl_slot(sub, 24))(sub, &s2);

    mem_00B37F40 += 1;
}
