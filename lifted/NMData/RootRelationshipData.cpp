// Lifted C++ translation unit: lifted/NMData/RootRelationshipData.cpp
#include "lift_compat.h"
extern "C" void ext_005EB5A0(void* self);
extern "C" void __thiscall ext_005F2970(void* self, uint32_t arg);
extern "C" bool __thiscall ext_0062908A(void* self);
extern "C" void* __thiscall ext_00629266(void* self, const char* s);
extern "C" const char mem_0093E1E4[];

extern "C" bool __thiscall ext_0062908A(void* self);
extern "C" void* __thiscall ext_00629266(void* self, const char* s);
extern "C" const char mem_0093E1E4[];
// @summary Forwards to the base NMData::RelationshipData::vfunc_22 for this object and returns this.
// (no fields accessed: the function only passes `self` through)
void* fn_005EBEA0(void* self) {
    ext_005EB5A0(self);
    return self;
}
#include <sstream>
#include <string>

#include <string>
namespace lift_005EEBC0 {
// Known callee 0x00412690: Container_EmplaceOrGrow_00412690 (Appends an 8-byte element when capacity allows; otherwise grows.)
extern void __thiscall ext_00412690(void* self, const void* elem);
// Known callee 0x0048EF80: std_vector_8_erase_range (Erases a range [first, last) of 8-byte elements from a vector.)
extern void __thiscall ext_0048EF80(void* self, void* out_iter, void* container1, uint32_t begin_it, void* container2, uint32_t end_it);
// Boilerplate MSVCR80 _invalid_parameter_noinfo pointer (debug begin<=end asserts, dropped); metadata-only reference.
extern int mem_00925134;

// @name NMData::RootRelationshipData::vfunc_67
// @class NMData::RootRelationshipData
// @summary Clears the 8-byte element vector at self+0x168 and refills it with six {id, 0.0f} entries (ids 3, 4, 5, 0, 1, 2).
// @field NMData::RootRelationshipData +0x16C uint32_t field_0x16C
// @field NMData::RootRelationshipData +0x170 uint32_t field_0x170

namespace {
struct VecElem8 {
    int32_t id;
    float value;
};
} // namespace

void fn_005EEBC0(void* self) {
    (void)&mem_00925134;  // metadata only: original debug-assert handler, not a real access
    uint8_t* vec = reinterpret_cast<uint8_t*>(self) + 0x168;

    // Erase [begin, end) of the whole vector (clear).
    uint32_t begin = lift_field<uint32_t>(vec, 0x4);
    uint32_t end = lift_field<uint32_t>(vec, 0x8);
    uint32_t out_iter[2] = {};
    ext_0048EF80(vec, out_iter, vec, begin, vec, end);

    // Append six elements in the original order.
    static const int32_t ids[6] = {3, 4, 5, 0, 1, 2};
    for (int32_t id : ids) {
        VecElem8 elem{id, 0.0f};
        ext_00412690(vec, &elem);
    }
}
} // namespace lift_005EEBC0

// [0x005F2F50]
namespace lift_005F2F50 {
// @name NMData::RootRelationshipData::vfunc_21
// @class NMData::RootRelationshipData
// @summary Calls base NullRelationshipData::vfunc_21 and defaults field_0x14 to "root" if empty
// @field NMData::RootRelationshipData +0x14 void* field_0x14

extern void __thiscall ext_005F2970(void* self, void* arg1);
extern bool (__thiscall* mem_00924FEC)(void* self);
extern void* (__thiscall* mem_00924FD4)(void* self, const char* str);
extern const char mem_0093E1E4[];

void __thiscall fn_005F2F50(void* self, void* arg1) {
    ext_005F2970(self, arg1);
    void* str_field = reinterpret_cast<uint8_t*>(self) + 0x14;
    if (mem_00924FEC(str_field)) {
        mem_00924FD4(str_field, mem_0093E1E4);
    }
}
} // namespace lift_005F2F50

// [0x005E4AC0] NMData::RootRelationshipData::vfunc_3 (231 bytes)
namespace lift_005E4AC0 {
// Known callee 0x00435D00: sub_00435D00 (482B)
extern int ext_00435D00(int value);
// Imported std::basic_ostream operator<< slot (MSVCP80) and related IAT slots
// are replaced by std::ostringstream below; their raw addresses are kept for differential testing.
extern int mem_00924E4C;
extern int mem_00924E94;
extern int mem_00924FF4;
extern int mem_00924E54;
extern int mem_00924E58;

// @name NMData::RootRelationshipData::vfunc_3
// @class NMData::RootRelationshipData
// @summary Builds a diagnostic string from the child relationship object's describe call and this object's virtual describe call, returning it through the output string.
// @field NMData::RootRelationshipData +0x18C void* field_0x18C
void* fn_005E4AC0(void* self, void* out) {
    // Metadata-only references to the original IAT/rdata slots (not real accesses).
    (void)&mem_00924E4C;
    (void)&mem_00924E54;
    (void)&mem_00924E58;
    (void)&mem_00924E94;
    (void)&mem_00924FF4;

    auto* base = static_cast<uint8_t*>(self);

    // Child relationship interface: obj = *(this+0x18C), slot at obj+4.
    auto* child_slot = *reinterpret_cast<uint8_t**>(base + 0x18C) + 4;
    void** child_vtbl = *reinterpret_cast<void***>(child_slot);
    using DescribeFn = int (*)(void*, void*);
    int child_result = reinterpret_cast<DescribeFn>(child_vtbl[3])(child_slot, nullptr);

    // Own virtual describe (vtable slot 9).
    void** self_vtbl = *reinterpret_cast<void***>(self);
    using SelfFn = int (*)(void*);
    int self_result = reinterpret_cast<SelfFn>(self_vtbl[9])(self);

    // Helper formats the self result before it is streamed.
    int formatted = ext_00435D00(self_result);

    std::ostringstream ss;
    ss << child_result << formatted;

    std::string text = ss.str();
    auto* dst = static_cast<std::string*>(out);
    *dst = text;
    return out;
}
} // namespace lift_005E4AC0

// [0x005EE250]
namespace lift_005EE250 {
// @name NMData::RootRelationshipData::vfunc_12_off_C
// @class NMData::RootRelationshipData
// @summary Delegates to FixedPathJointData::vfunc_12_off_C unless field_0x180->vfunc_0x28() is true, in which case zeroes matching entries in arg2 and returns 0.
// @field NMData::RootRelationshipData +0x180 void* field_0x180


extern void __thiscall ext_00481BD0(void* self, uint32_t value);
extern uint8_t __thiscall ext_005EE110(void* self, uint32_t arg1, uint32_t arg2);

uint8_t __thiscall fn_005EE250(void* self, uint32_t arg1, uint32_t arg2) {
    void* obj = lift_field<void*>(self, 0x180);
    if (obj != nullptr) {
        using VFunc = uint8_t(__thiscall*)(void*);
        void** vtable = *reinterpret_cast<void***>(obj);
        auto fn = reinterpret_cast<VFunc>(vtable[0x28 / sizeof(void*)]);
        if (fn(obj) != 0) {
            void* base = reinterpret_cast<uint8_t*>(self) - 0xC;
            ext_00481BD0(reinterpret_cast<void*>(static_cast<uintptr_t>(arg2)),
                         static_cast<uint32_t>(reinterpret_cast<uintptr_t>(base)));
            return 0;
        }
    }
    return ext_005EE110(self, arg1, arg2);
}
} // namespace lift_005EE250
