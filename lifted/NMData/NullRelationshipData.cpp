// Lifted C++ translation unit: lifted/NMData/NullRelationshipData.cpp
#include "lift_compat.h"
#include <new>
#include <string>
extern "C" const char* mem_00A9F118;
#include <cstdint>

// [0x0055DE20] NMData::NullRelationshipData::vfunc_59 (35 bytes)
namespace lift_0055DE20 {
// Global holding a pointer to a constant C string (.data at 0x00A9F118).
extern uint32_t mem_00A9F118;
// Import slot (.rdata at 0x00924FE4) holding the MSVCP80 std::basic_string<char> ctor
// taking (const char*, const allocator&).
extern uint32_t mem_00924FE4;

// @name NMData::NullRelationshipData::vfunc_59
// @class NMData::NullRelationshipData
// @summary Constructs the std::string out-parameter from the constant C string stored at mem_00A9F118 and returns it.
void* __stdcall fn_0055DE20(void* out) {
    using StringCtorFn = void (*)(void* self, const char* s, const void* alloc);

    const char* s = reinterpret_cast<const char*>(static_cast<uintptr_t>(mem_00A9F118));
    auto ctor = reinterpret_cast<StringCtorFn>(static_cast<uintptr_t>(mem_00924FE4));
    ctor(out, s, nullptr);
    return out;
}
} // namespace lift_0055DE20

// [0x005E1830] NMData::NullRelationshipData::vfunc_54 (128 bytes)
namespace lift_005E1830 {
// @name NMData::NullRelationshipData::vfunc_54
// @class NMData::NullRelationshipData
// @summary One-time guarded initialisation (flag bit 0 of mem_00B45C2C), then calls ext_005E0380 on self and caches self+0x178 into mem_00B45C24.
// @field NMData::NullRelationshipData +0x178 uint8_t field_0x178

extern void ext_005B5780(void* ecx, uint32_t arg);
extern void ext_006A6C87(const void* arg);
extern void ext_005E0380(void* ecx, void* arg);
extern uint32_t mem_00B45C2C;
extern uint8_t mem_00B45C24;
extern uint8_t mem_00B45BE0;
extern uint8_t mem_0091E3E0;

void fn_005E1830(void* self) {
    if ((mem_00B45C2C & 1u) == 0) {
        mem_00B45C2C |= 1u;
        ext_005B5780(&mem_00B45BE0, 0x16);
        ext_006A6C87(&mem_0091E3E0);
    }
    ext_005E0380(self, &mem_00B45BE0);
    mem_00B45C24 = lift_field<uint8_t>(self, 0x178);
}
} // namespace lift_005E1830

// [0x005EBE00] NMData::NullRelationshipData::vfunc_22 (156 bytes)
namespace lift_005EBE00 {
// @name NMData::NullRelationshipData::vfunc_22
// @class NMData::NullRelationshipData
// @summary Resolves a handle from arg via 0x006404E0, forwards it to RelationshipData::vfunc_22, then when the child at +0x190 reports true (or its +0x178 flag differs from ours) updates the child name via 0x00640110 and 0x00640A80; returns arg.
// @field NMData::NullRelationshipData +0x178 uint8_t field_0x178
// @field NMData::NullRelationshipData +0x190 void* field_0x190

extern void* ext_006404E0(void* arg, uint32_t value);
extern void ext_005EB5A0(void* self, void* arg);
extern uint32_t ext_00640110(void* self, uint32_t value);
extern void ext_00640A80(uint32_t value, uint8_t flag);
extern uint32_t mem_00A9F118;
extern uint32_t mem_00A9F724;

void* fn_005EBE00(void* self, void* arg) {
    void* const handle = ext_006404E0(arg, mem_00A9F118);

    ext_005EB5A0(self, handle);

    void* const child = lift_field<void*>(self, 0x190);
    if (child == nullptr) {
        return arg;
    }

    using VFn = uint8_t(__thiscall*)(void*);
    void* const vt = *reinterpret_cast<void**>(child);
    void* const slot = *reinterpret_cast<void**>(static_cast<uint8_t*>(vt) + 0x70);
    const uint8_t childReports = reinterpret_cast<VFn>(slot)(child);

    const uint8_t selfFlag = lift_field<uint8_t>(self, 0x178);
    bool doUpdate = (childReports != 0);
    if (!doUpdate) {
        doUpdate = (lift_field<uint8_t>(child, 0x178) != selfFlag);
    }

    if (doUpdate) {
        const uint32_t r = ext_00640110(handle, mem_00A9F724);
        ext_00640A80(r, selfFlag);
    }

    return arg;
}
} // namespace lift_005EBE00

// [0x005F2970]
namespace lift_005F2970 {
// @name NMData::NullRelationshipData::vfunc_21
// @class NMData::NullRelationshipData
// @summary Deserializes NullRelationshipData properties, coordinates, and child relationship items from a data node.
// @field NMData::NullRelationshipData +0x168 uint8_t[12] field_0x168
// @field NMData::NullRelationshipData +0x178 uint8_t field_0x178
// @field NMData::NullRelationshipData +0x179 uint8_t field_0x179
// @field NMData::NullRelationshipData +0x18c void* field_0x18c
// @field NMData::NullRelationshipData +0x198 std::string field_0x198
// @field NMData::NullRelationshipData +0x1b4 std::string field_0x1b4
// @field NMData::NullRelationshipData +0x1e0 uint32_t field_0x1e0
// @field NMData::NullRelationshipData +0x1e4 std::string field_0x1e4
// @field NMData::NullRelationshipData +0x210 float field_0x210
// @field NMData::NullRelationshipData +0x214 float field_0x214
// @field NMData::NullRelationshipData +0x218 float field_0x218
// @field NMData::NullRelationshipData +0x21c float field_0x21c
// @field NMData::NullRelationshipData +0x220 float field_0x220
// @field NMData::NullRelationshipData +0x224 float field_0x224
// @field NMData::NullRelationshipData +0x238 int32_t field_0x238


extern void __thiscall ext_0058F630(void* self, void* arg0);
extern uint32_t __thiscall ext_0063EFE0(void* self, const char* name);
extern void __cdecl ext_00427640(void* out, void* obj);
extern void __cdecl ext_0053F5F0(int* out, void* obj);
extern void __cdecl ext_004275E0(void* dst, void* obj);
extern uint32_t __thiscall ext_0063F530(void* self, const char* name, uint32_t a, uint32_t b);
extern float* __cdecl ext_0067EFD0(void* buf, uint32_t item);
extern void __thiscall ext_00412690(void* self, void* elem);
extern void __thiscall ext_00427A60(void* iter);
extern void* __cdecl ext_005F28D0(void* sub_item, void* mgr, void* self);
extern void __thiscall ext_005A35D0(void* mgr, void* res);
extern void __thiscall ext_005EE9A0(void* self, void* res);
extern void __thiscall ext_005ED750(void* self);

extern const char* mem_00A9F724;
extern const char* mem_00A9F738;
extern const char* mem_00A9F9AC;
extern const char* mem_00A9F5D0;
extern const char* mem_00A9F7F8;
extern const char* mem_00A9F7F4;
extern const char* mem_00A9F7FC;
extern const char* mem_00A9EDA8;
extern void* mem_00924EAC;
extern void* mem_00924FC0;
extern void* mem_00924FDC;
extern void* mem_00924FE8;
extern void* mem_00924FEC;
extern void* mem_00924FF4;
extern void* mem_0092500C;
extern void* mem_00925134;

static bool is_sentinel(uint32_t v) {
    return v == 0x00B53A34u || v == 0x00B53B30u || v == 0x00B53AB0u ||
           v == 0x00B53A70u || v == 0x00B53AF0u;
}

struct CheckedIter {
    void* container;
    void* container_check;
    uint32_t* ptr;
};

struct PairElem {
    int32_t index;
    float weight;
};

void __thiscall fn_005F2970(uint8_t* self, uint8_t* arg0) {
    (void)mem_00924EAC; (void)mem_00924FC0; (void)mem_00924FDC; (void)mem_00924FE8;
    (void)mem_00924FEC; (void)mem_00924FF4; (void)mem_0092500C; (void)mem_00925134;
    ext_0058F630(self, arg0);

    uint32_t item = ext_0063EFE0(arg0, mem_00A9F724);
    if (!is_sentinel(item)) {
        uint32_t tmp = ext_0063EFE0(arg0, mem_00A9F724);
        ext_00427640(self + 0x178, &tmp);
    }

    {
        uint32_t tmp = ext_0063EFE0(arg0, mem_00A9F738);
        ext_00427640(self + 0x179, &tmp);
    }

    {
        uint32_t tmp = ext_0063EFE0(arg0, mem_00A9F9AC);
        ext_0053F5F0(reinterpret_cast<int*>(self + 0x238), &tmp);
    }

    std::string str;
    ext_004275E0(&str, reinterpret_cast<void*>(static_cast<uintptr_t>(ext_0063EFE0(arg0, mem_00A9F5D0))));

    if (!is_sentinel(ext_0063EFE0(arg0, reinterpret_cast<const char*>(0x0096AD94)))) {
        uint32_t tmp = ext_0063EFE0(arg0, reinterpret_cast<const char*>(0x0096AD94));
        int val = 0;
        ext_0053F5F0(&val, &tmp);
        lift_field<uint32_t>(self, 0x1e0) = static_cast<uint32_t>(val);
    }

    if (!is_sentinel(ext_0063EFE0(arg0, reinterpret_cast<const char*>(0x0096AD84)))) {
        uint32_t tmp = ext_0063EFE0(arg0, reinterpret_cast<const char*>(0x0096AD84));
        ext_004275E0(self + 0x1e4, reinterpret_cast<void*>(static_cast<uintptr_t>(tmp)));
    }

    uint8_t vec3_buf[16];
    uint32_t v1 = ext_0063F530(arg0, reinterpret_cast<const char*>(0x0096AD78), 0, 1);
    if (is_sentinel(v1)) {
        v1 = 0x00B53B30u;
    }
    float* f1 = ext_0067EFD0(vec3_buf, v1);
    lift_field<float>(self, 0x210) = f1[0];
    lift_field<float>(self, 0x214) = f1[1];
    lift_field<float>(self, 0x218) = f1[2];

    uint32_t v2 = ext_0063F530(arg0, reinterpret_cast<const char*>(0x0096AD68), 0, 1);
    if (is_sentinel(v2)) {
        v2 = 0x00B53B30u;
    }
    float* f2 = ext_0067EFD0(vec3_buf, v2);
    lift_field<float>(self, 0x21c) = f2[0];
    lift_field<float>(self, 0x220) = f2[1];
    lift_field<float>(self, 0x224) = f2[2];

    if (str.empty()) {
        auto vtbl = lift_field<uintptr_t*>(self, 0);
        auto fn = reinterpret_cast<void(__thiscall*)(void*)>(vtbl[0x10c / 4]);
        fn(self);
    } else {
        for (size_t i = 0; i < str.size(); ++i) {
            PairElem elem{static_cast<int32_t>(str[i]) - 0x30, 0.0f};
            ext_00412690(self + 0x168, &elem);
        }
    }

    uint32_t* begin = lift_field<uint32_t*>(arg0, 0x40);
    uint32_t* end = lift_field<uint32_t*>(arg0, 0x44);
    for (uint32_t* it = begin; it < end; ++it) {
        uint8_t* node = reinterpret_cast<uint8_t*>(static_cast<uintptr_t>(*it));
        const std::string& node_name = lift_field<std::string>(node, 0x04);
        if (node_name == mem_00A9F7F8) {
            auto vtbl = lift_field<uintptr_t*>(node, 0);
            auto get_str = reinterpret_cast<std::string*(__thiscall*)(void*, std::string*)>(vtbl[0x08 / 4]);
            std::string tmp_str;
            std::string* res = get_str(node, &tmp_str);
            lift_field<std::string>(self, 0x198) = *res;
        } else if (node_name == mem_00A9F7F4 || node_name == mem_00A9F7FC) {
            auto vtbl = lift_field<uintptr_t*>(node, 0);
            auto get_str = reinterpret_cast<std::string*(__thiscall*)(void*, std::string*)>(vtbl[0x08 / 4]);
            std::string tmp_str;
            std::string* res = get_str(node, &tmp_str);
            lift_field<std::string>(self, 0x1b4) = *res;
        }
    }

    if (lift_field<void*>(self, 0x18c) != nullptr) {
        void* vec = arg0 + 0x24;
        CheckedIter it{vec, vec, lift_field<uint32_t*>(arg0, 0x28)};
        ext_00427A60(&it);
        for (;;) {
            CheckedIter end_it{vec, vec, lift_field<uint32_t*>(vec, 0x08)};
            ext_00427A60(&end_it);
            if (it.ptr == end_it.ptr) {
                break;
            }
            uint8_t* child = reinterpret_cast<uint8_t*>(static_cast<uintptr_t>(*it.ptr));
            if (lift_field<std::string>(child, 0x04) == mem_00A9EDA8) {
                void* sub_vec = child + 0x24;
                CheckedIter sub_it{sub_vec, sub_vec, lift_field<uint32_t*>(sub_vec, 0x04)};
                ext_00427A60(&sub_it);
                for (;;) {
                    CheckedIter sub_end{sub_vec, sub_vec, lift_field<uint32_t*>(sub_vec, 0x08)};
                    ext_00427A60(&sub_end);
                    if (sub_it.ptr == sub_end.ptr) {
                        break;
                    }
                    void* sub_item = reinterpret_cast<void*>(static_cast<uintptr_t>(*sub_it.ptr));
                    void* mgr = lift_field<void*>(self, 0x18c);
                    void* res = ext_005F28D0(sub_item, mgr, self);
                    ext_005A35D0(lift_field<void*>(self, 0x18c), res);
                    ext_005EE9A0(self, res);
                    ++sub_it.ptr;
                    ext_00427A60(&sub_it);
                }
            }
            ++it.ptr;
            ext_00427A60(&it);
        }
        ext_005ED750(self);
    }
}
} // namespace lift_005F2970
