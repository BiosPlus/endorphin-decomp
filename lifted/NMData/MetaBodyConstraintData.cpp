// Lifted C++ translation unit: lifted/NMData/MetaBodyConstraintData.cpp
#include "lift_compat.h"
#include <string>
extern "C" void* __thiscall ext_006404E0(void* self, void* arg);
extern "C" void* mem_00A9F314;

// @class NMData::MetaBodyConstraintData
// @summary Auto-lifted identical-shape clone of 0x004DDED0 (NMData::AnimationEventData::vfunc_59).
// @field NMData::MetaBodyConstraintData +0x0 void** vptr
extern "C" void __thiscall fn_004CA380(void* self, void* a) {
    using VFn = void(__thiscall*)(void* self, void* arg);
    void* g = mem_00A9F314;
    void* r = ext_006404E0(a, g);
    void** vt = *reinterpret_cast<void***>(self);
    reinterpret_cast<VFn>(vt[22])(self, r);
}
#include <new>

// [0x004CCFB0]
// @name NMData::MetaBodyConstraintData::assignFrom
// @class NMData::MetaBodyConstraintData
// @summary Dynamically casts the source object and, if compatible, destroys this instance in-place and copy-constructs from it.
// @field NMData::MetaBodyConstraintData +0x00 void** vptr

#include "lift_compat.h"

extern "C" void* __cdecl ext_006A6E9E(void* inptr, int32_t vfDelta, void* srcType, void* dstType, int32_t isReference);
extern "C" void __thiscall ext_004CCE20(void* self, void* src);

extern "C" uint32_t mem_00A2E2F8;
extern "C" uint32_t mem_00A32978;

extern "C" void __thiscall fn_004CCFB0(void* self, void* src) {
    void* casted = ext_006A6E9E(src, 0, &mem_00A2E2F8, &mem_00A32978, 0);
    if (casted != nullptr) {
        using DestructorFn = void(__thiscall*)(void*, uint32_t);
        auto** vtable = *reinterpret_cast<void***>(self);
        auto dtor = reinterpret_cast<DestructorFn>(vtable[0]);
        dtor(self, 0);
        ext_004CCE20(self, casted);
    }
}

// [0x004CD090]
namespace lift_004CD090 {
// @name NMData::MetaBodyConstraintData::vfunc_87
// @class NMData::MetaBodyConstraintData
// @summary Cleans up, destroys, and clears the subobject at +0x180 if non-null.
// @field NMData::MetaBodyConstraintData +0x180 void* field_0x180


extern void __thiscall ext_004CCC60(void* self);
extern void __thiscall ext_0046AC30(void* self);
extern void __cdecl ext_006A5C5C(void* ptr);

extern void __thiscall fn_004CD090(void* self) {
    void* obj = lift_field<void*>(self, 0x180);
    if (obj != nullptr) {
        ext_004CCC60(obj);
        void* obj2 = lift_field<void*>(self, 0x180);
        if (obj2 != nullptr) {
            ext_0046AC30(obj2);
            ext_006A5C5C(obj2);
        }
        lift_field<void*>(self, 0x180) = nullptr;
    }
}
} // namespace lift_004CD090

// [0x004CA310]
namespace lift_004CA310 {
// @name NMData::MetaBodyConstraintData::vfunc_14
// @class NMData::MetaBodyConstraintData
// @summary Dispatches property/attribute lookup for MetaBodyConstraintData (IDs 0xd and 0x134) or delegates to SeverEventData::vfunc_14.
// @field NMData::MetaBodyConstraintData +0x188 void* field_0x188
// @field NMData::MetaBodyConstraintData +0x194 void* field_0x194


extern int32_t __thiscall ext_004C2070(void* self, void* out, uint32_t id);
extern void __thiscall ext_00661680(void* self, int32_t type, void* ptr);

extern void* __thiscall fn_004CA310(void* self, void* out, uint32_t id) {
    uint8_t* base = static_cast<uint8_t*>(self);
    if (id == 0xd) {
        ext_00661680(out, 3, base + 0x194);
        return out;
    }
    if (id == 0x134) {
        ext_00661680(out, 3, base + 0x188);
        return out;
    }
    ext_004C2070(self, out, id);
    return out;
}
} // namespace lift_004CA310

// [0x004CD020] NMData::MetaBodyConstraintData::vfunc_17_off_C (99 bytes)
namespace lift_004CD020 {
extern void* ext_006A5C62(size_t size);
extern void* ext_004CCE20(void* self, void* owner);

// @name NMData::MetaBodyConstraintData::vfunc_17_off_C
// @class NMData::MetaBodyConstraintData
// @summary Auto-lifted identical-shape clone of 0x004CFC30 (NMData::IncarnationEventData::vfunc_17_off_C).
void* fn_004CD020(void* self) {
    void* mem = ext_006A5C62(0x1A4);
    if (mem == nullptr) {
        return nullptr;
    }
    void* owner = static_cast<unsigned char*>(self) - 0xC;
    return ext_004CCE20(mem, owner);
}
} // namespace lift_004CD020

// [0x004CD190]
namespace lift_004CD190 {
// @name NMData::MetaBodyConstraintData::vfunc_1_off_154
// @class NMData::MetaBodyConstraintData
// @summary Collects an object-pointer list from src, hands a string list to the -0x154 subobject, pokes vfuncs 9/10 on the last element when mode is 3 or 4, then frees the list buffer and destroys the string list.
// @field NMData::MetaBodyConstraintData +0x30 int field_0x30

extern void __thiscall ext_004026E0(void* self);
extern void __thiscall ext_004A6970(void* self, void* value);
extern void __thiscall ext_004C28C0(void* self, void* strList);
extern void __cdecl ext_006A5C5C(void* ptr);
// CRT _invalid_parameter_noinfo IAT slot: only used by MSVC iterator checks, which are dropped.
extern int mem_00925134;

// MSVC-layout vector header (first / last / end) used by the callee-side helpers.
struct MsvcVecPtrs {
    void** first;
    void** last;
    void** cap;
};

extern void __thiscall fn_004CD190(void* self, void* src) {
    using VF5 = void*(__thiscall*)(void* self);
    using VF9 = void(__thiscall*)(void* self, int32_t a);
    using VF10 = void(__thiscall*)(void* self, int32_t a, int32_t b);
    using VF13 = void(__thiscall*)(void* self, void* out);

    (void)&mem_00925134;  // metadata reference only; not a real access

    void* strList[3] = {nullptr, nullptr, nullptr};  // std::vector<std::string> out-param
    MsvcVecPtrs objs{nullptr, nullptr, nullptr};     // std::vector<void*> filled by ext_004A6970

    void** vt = *reinterpret_cast<void***>(src);
    reinterpret_cast<VF13>(vt[13])(src, strList);

    ext_004C28C0(static_cast<char*>(self) - 0x154, strList);

    void* value = reinterpret_cast<VF5>(vt[5])(src);
    ext_004A6970(&objs, value);

    int32_t mode = lift_field<int32_t>(self, 0x30);

    if (mode == 4 || mode == 3) {
        if (objs.first != nullptr && objs.first != objs.last) {
            void** slot = objs.last - 1;

            void* obj = *slot;
            void* sub = static_cast<char*>(obj) + 0xc;
            void** subVt = *reinterpret_cast<void***>(sub);
            reinterpret_cast<VF9>(subVt[9])(sub, 7);

            obj = *slot;  // re-read the slot, as the original does
            void* sub2 = static_cast<char*>(obj) + 0xc;
            void** subVt2 = *reinterpret_cast<void***>(sub2);
            reinterpret_cast<VF10>(subVt2[10])(sub2, 7, 1);
        }
    }

    if (objs.first != nullptr) {
        ext_006A5C5C(objs.first);
    }

    ext_004026E0(strList);
}
} // namespace lift_004CD190
