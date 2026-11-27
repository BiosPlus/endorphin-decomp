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

// [0x004CE390]
namespace lift_004CE390 {
// @name NMData::MetaBodyConstraintData::vfunc_88
// @class NMData::MetaBodyConstraintData
// @summary Allocates and initializes a 0x30-byte helper object, replaces field_0x180, and updates it with this.
// @field NMData::MetaBodyConstraintData +0x180 void* field_0x180


extern void* __cdecl ext_006A5C62(uint32_t size);
extern void* __thiscall ext_004CCC30(void* self);
extern void __thiscall ext_0046AC30(void* self);
extern void __cdecl ext_006A5C5C(void* ptr);
extern void __thiscall ext_004CE040(void* self, void* owner);

extern void __thiscall fn_004CE390(void* self) {
    void* obj = ext_006A5C62(0x30);
    void* new_obj = obj ? ext_004CCC30(obj) : nullptr;

    void* old_obj = lift_field<void*>(self, 0x180);
    if (new_obj != old_obj && old_obj != nullptr) {
        ext_0046AC30(old_obj);
        ext_006A5C5C(old_obj);
    }

    lift_field<void*>(self, 0x180) = new_obj;
    ext_004CE040(new_obj, self);
}
} // namespace lift_004CE390

// [0x004CD0D0] NMData::MetaBodyConstraintData::vfunc_90 (188 bytes)
namespace lift_004CD0D0 {
// Known callee 0x004026E0: std_vector_string_Tidy (destroys vector<string> elements and frees the buffer)
extern void __thiscall ext_004026E0(void* self);
// Known callee 0x00594000: sub_00594000 (returns global int32 from mem_00B40D08), __cdecl, no args
extern int32_t ext_00594000();
// Known callee 0x00599E70: Unknown::getGrandparentField0x38C (thiscall, returns DWORD or 0)
extern uint32_t __thiscall ext_00599E70(void* self);
// Known callee 0x004C2760: thiscall with one stack argument (result unused)
extern void __thiscall ext_004C2760(void* self, uint32_t arg);
// Metadata-only callees (see note in fn body)
extern void ext_004CC720();
extern void ext_004CC9E0();
// IAT slot for MSVCP80 std::basic_string<char> destructor; call target is the slot's value
extern void* mem_00924FF4;

static inline void* P(uint32_t v) {
    return reinterpret_cast<void*>(static_cast<uintptr_t>(v));
}

// @name NMData::MetaBodyConstraintData::vfunc_90
// @class NMData::MetaBodyConstraintData
// @summary Fetches a vector<string> via vtbl[79], tidies it, and if the global int32 is nonzero, resolves an object (this+0x168->+0x38C, else ext_00599E70) and passes the string from its vtbl[3] to ext_004C2760.
// @field NMData::MetaBodyConstraintData +0x00 void** vptr
// @field NMData::MetaBodyConstraintData +0x168 void* field_0x168
extern void __thiscall fn_004CD0D0(void* self) {
    using VFnOut = void(__thiscall*)(void* self, void* out);   // vtbl slot 79 (0x13C / 4)
    using VFnRet = uint32_t(__thiscall*)(void* self, void* out); // vtbl slot 3 (0x0C / 4)
    using DtorFn = void(__thiscall*)(void* self);

    // vector<string> temporary (12 bytes used, 16 zeroed like the original frame).
    uint32_t vec[4] = {0, 0, 0, 0};
    void** vt = *reinterpret_cast<void***>(self);
    reinterpret_cast<VFnOut>(vt[79])(self, vec);
    ext_004026E0(vec);

    if (ext_00594000() == 0) {
        return;
    }

    uint32_t cur;
    uint32_t obj = lift_field<uint32_t>(self, 0x168);
    if (obj != 0) {
        cur = lift_field<uint32_t>(P(obj), 0x38C);
    } else {
        uint32_t g = static_cast<uint32_t>(ext_00594000());
        cur = ext_00599E70(P(g));
    }
    if (cur == 0) {
        return;
    }

    // std::string temporary (24 bytes) returned via vtbl slot 3.
    uint32_t str[6] = {0, 0, 0, 0, 0, 0};
    void* item = P(cur);
    void** itemVt = *reinterpret_cast<void***>(item);
    uint32_t r = reinterpret_cast<VFnRet>(itemVt[3])(item, str);
    ext_004C2760(self, r);

    // Destroy the string via the IAT slot.
    reinterpret_cast<DtorFn>(mem_00924FF4)(str);

    // Metadata lists 0x004CC720 / 0x004CC9E0 as callees, but the disassembly never calls them.
    // Only take their addresses so nothing changes at runtime.
    (void)&ext_004CC720;
    (void)&ext_004CC9E0;
}
} // namespace lift_004CD0D0

// [0x004CA6A0]
namespace lift_004CA6A0 {
// @name NMData::MetaBodyConstraintData::vfunc_22
// @class NMData::MetaBodyConstraintData
// @summary Serializes MetaBodyConstraintData fields to an XML/data node.
// @field NMData::MetaBodyConstraintData +0x188 void* field_0x188
// @field NMData::MetaBodyConstraintData +0x194 void* field_0x194
// @field NMData::MetaBodyConstraintData +0x1A0 uint8_t field_0x1a0

extern uint32_t mem_00A9F74C;
extern uint32_t mem_00A9F788;
extern uint32_t mem_00924FF0;
extern uint32_t mem_00A9F1B8;
extern uint32_t mem_00A9ED1C;

void* __thiscall ext_00640110(void* self, uint32_t key);
void __cdecl ext_00640A80(void* node, uint32_t flag);
void __thiscall ext_004C1DE0(void* self, void* arg1);
void* __thiscall ext_004CA5E0(void* self);
void __thiscall ext_00427550(void* self, const char* name);
void* __thiscall ext_00640390(void* self, uint32_t key, int zero);
void __cdecl ext_0067F040(void* node, void* value_ptr);

void* __thiscall fn_004CA6A0(void* self, void* arg1) {
    uint8_t* base = static_cast<uint8_t*>(self);

    void* node1 = ext_00640110(arg1, mem_00A9F74C);
    ext_00640A80(node1, static_cast<uint32_t>(lift_field<uint8_t>(base, 0x1A0)));

    ext_004C1DE0(self, arg1);

    void* node2 = ext_00640110(arg1, mem_00A9F788);
    void* str_obj = ext_004CA5E0(self);
    auto c_str_fn = reinterpret_cast<const char*(__thiscall*)(void*)>(mem_00924FF0);
    const char* name_str = c_str_fn(str_obj);
    ext_00427550(&node2, name_str);

    void* node3 = ext_00640390(arg1, mem_00A9F1B8, 0);
    ext_0067F040(node3, base + 0x188);

    void* node4 = ext_00640390(arg1, mem_00A9ED1C, 0);
    ext_0067F040(node4, base + 0x194);

    return arg1;
}
} // namespace lift_004CA6A0
