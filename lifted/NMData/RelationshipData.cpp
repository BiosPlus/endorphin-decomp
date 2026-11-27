// Lifted C++ translation unit: lifted/NMData/RelationshipData.cpp
#include "lift_compat.h"
#include <cstdint>
#include <string>

// [0x005EB5A0]
namespace lift_005EB5A0 {
// @name NMData::RelationshipData::vfunc_22
// @class NMData::RelationshipData
// @summary Serializes RelationshipData fields, child relationships, and flags into the target data node.
// @field NMData::RelationshipData +0x168 void* field_0x168
// @field NMData::RelationshipData +0x16C void* field_0x16C
// @field NMData::RelationshipData +0x170 void* field_0x170
// @field NMData::RelationshipData +0x179 uint8_t field_0x179
// @field NMData::RelationshipData +0x190 uint32_t field_0x190
// @field NMData::RelationshipData +0x198 std::string field_0x198
// @field NMData::RelationshipData +0x1B4 std::string field_0x1B4
// @field NMData::RelationshipData +0x1D0 void* field_0x1D0
// @field NMData::RelationshipData +0x1D4 void* field_0x1D4
// @field NMData::RelationshipData +0x1D8 void* field_0x1D8
// @field NMData::RelationshipData +0x1E0 int32_t field_0x1E0
// @field NMData::RelationshipData +0x1E4 std::string field_0x1E4
// @field NMData::RelationshipData +0x210 uint8_t field_0x210
// @field NMData::RelationshipData +0x21C uint8_t field_0x21C
// @field NMData::RelationshipData +0x238 uint32_t field_0x238


    void __thiscall ext_0058F650(void* self, void* arg0);
    void __cdecl ext_00662850(void* arg0, void* a1, uint32_t a2);
    void* __cdecl ext_00404F00(void* out_str, int32_t value);
    void* __thiscall ext_00640110(void* self, void* name);
    void __thiscall ext_00427550(void* self, const char* name);
    void __cdecl ext_00640A50(void* obj, int32_t value);
    void* __thiscall ext_00640390(void* self, void* name, int32_t a2, void* a3);
    void __cdecl ext_0067F040(void* obj);
    void* __thiscall ext_006404E0(void* self, void* name);
    void __cdecl ext_00640A80(void* obj, uint8_t flag);

    extern void* mem_00A9F9AC;
    extern void* mem_00A9F5D0;
    extern void* mem_00A9F7F8;
    extern void* mem_00A9F7FC;
    extern void* mem_00A9F7F4;
    extern void* mem_00A9EDA8;
    extern void* mem_00A9F738;
    extern void* mem_00924FD8;
    extern void* mem_00924FE8;
    extern void* mem_00924FF0;
    extern void* mem_00924FF4;
    extern void* mem_00925134;

void* __thiscall fn_005EB5A0(void* self, void* arg0) {
    (void)mem_00924FD8;
    (void)mem_00924FE8;
    (void)mem_00924FF0;
    (void)mem_00924FF4;
    (void)mem_00925134;
    ext_0058F650(self, arg0);
    ext_00662850(arg0, mem_00A9F9AC, lift_field<uint32_t>(self, 0x238));

    auto* vec1_begin = lift_field<uint8_t*>(self, 0x16C);
    auto* vec1_end = lift_field<uint8_t*>(self, 0x170);
    if (vec1_begin != nullptr && ((vec1_end - vec1_begin) >> 3) != 0) {
        std::string str;
        for (uint8_t* it = vec1_begin; it != vec1_end; it += 8) {
            std::string tmp;
            int32_t val = *reinterpret_cast<int32_t*>(it);
            str += *static_cast<std::string*>(ext_00404F00(&tmp, val));
        }
        void* child = ext_00640110(arg0, mem_00A9F5D0);
        ext_00427550(&child, str.c_str());
    }

    int32_t mode = lift_field<int32_t>(self, 0x1E0);
    if (mode == 1 || mode == 2 || mode == 3) {
        void* child = ext_00640110(arg0, reinterpret_cast<void*>(0x0096AD94));
        ext_00640A50(child, lift_field<int32_t>(self, 0x1E0));
    }

    mode = lift_field<int32_t>(self, 0x1E0);
    if (mode == 2 || mode == 3) {
        void* child = ext_00640110(arg0, reinterpret_cast<void*>(0x0096AD84));
        ext_00427550(&child, lift_field<std::string>(self, 0x1E4).c_str());
    }

    void* v1 = ext_00640390(arg0, reinterpret_cast<void*>(0x0096AD78), 0, reinterpret_cast<uint8_t*>(self) + 0x210);
    ext_0067F040(v1);

    void* v2 = ext_00640390(arg0, reinterpret_cast<void*>(0x0096AD68), 0, reinterpret_cast<uint8_t*>(self) + 0x21C);
    ext_0067F040(v2);

    auto vfunc_70 = reinterpret_cast<uint8_t(__thiscall*)(void*)>((*reinterpret_cast<void***>(self))[0x70 / 4]);
    if (lift_field<uint32_t>(self, 0x190) == 0 && vfunc_70(self) == 0) {
        void* child1 = ext_00640110(arg0, mem_00A9F7F8);
        ext_00427550(&child1, lift_field<std::string>(self, 0x198).c_str());
        void* child2 = ext_00640110(arg0, mem_00A9F7FC);
        ext_00427550(&child2, lift_field<std::string>(self, 0x1B4).c_str());
    } else {
        void* child2 = ext_00640110(arg0, mem_00A9F7F4);
        ext_00427550(&child2, lift_field<std::string>(self, 0x1B4).c_str());
    }

    auto** vec2_begin = lift_field<void**>(self, 0x1D4);
    auto** vec2_end = lift_field<void**>(self, 0x1D8);
    if (vec2_begin != nullptr && (vec2_end - vec2_begin) != 0) {
        void* list_node = ext_006404E0(arg0, mem_00A9EDA8);
        for (void** it = vec2_begin; it != vec2_end; ++it) {
            void* item = *it;
            auto vfunc_58 = reinterpret_cast<void(__thiscall*)(void*, void*)>((*reinterpret_cast<void***>(item))[0x58 / 4]);
            vfunc_58(item, list_node);
        }
    }

    void* flag_child = ext_00640110(arg0, mem_00A9F738);
    ext_00640A80(flag_child, lift_field<uint8_t>(self, 0x179));

    return arg0;
}
} // namespace lift_005EB5A0
