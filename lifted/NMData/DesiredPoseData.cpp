// Lifted C++ translation unit: lifted/NMData/DesiredPoseData.cpp
#include "lift_compat.h"
#include <cstdint>
#include <string>

// [0x006239D0]
namespace lift_006239D0 {
// @name NMData::DesiredPoseData::vfunc_1
// @class NMData::DesiredPoseData
// @summary Loads desired pose data and joint/pose entries from an XML node.
// @field NMData::DesiredPoseData +0x08 std::string field_0x08
// @field NMData::DesiredPoseData +0x24 uint8_t field_0x24
// @field NMData::DesiredPoseData +0x34 std::string field_0x34
// @field NMData::DesiredPoseData +0x50 uint8_t field_0x50

extern uint32_t mem_00A9F838;
extern uint32_t mem_00925134;
extern uint32_t mem_00A9EE6C;
extern uint32_t mem_00924FC0;
extern uint32_t mem_00924FE8;
extern uint32_t mem_00924FDC;
extern uint32_t mem_00924FF4;
extern uint32_t mem_00A9EE24;
extern uint32_t mem_00A9EE34;
extern uint32_t mem_00A9EEE8;
extern uint32_t mem_00A9F644;
extern uint32_t mem_00A9EE28;
extern uint32_t mem_00924FE4;
extern uint32_t mem_00924FF0;

uint32_t __thiscall ext_0063EFE0(void* self, const char* name);
void __cdecl ext_004275E0(void* dst, void* obj);
void __thiscall ext_00427A60(void* self);
uint32_t __thiscall ext_0063F530(void* self, const char* name, uint32_t a2, uint32_t a3);
void __cdecl ext_0046C0A0(uint32_t arg, float* out_val);
void __thiscall ext_00623600(void* self, void* key, void* vec3);
void* __cdecl ext_0067F080(void* out_vec3, uint32_t attr);
void* __cdecl ext_006690D0(void* out_str, void* a, void* b);
void __thiscall ext_00669AD0(void* self);

namespace {

struct CheckedVecIter {
    void* container;
    void* container2;
    uint32_t* ptr;
};

inline bool is_sentinel(uint32_t val) {
    return val == 0x00B53A34u || val == 0x00B53B30u ||
           val == 0x00B53AB0u || val == 0x00B53A70u ||
           val == 0x00B53AF0u;
}

inline uint32_t normalize_sentinel(uint32_t val) {
    return is_sentinel(val) ? 0x00B53B30u : val;
}

} // namespace

void __thiscall fn_006239D0(uint8_t* self, uint8_t* xml_node) {
    (void)mem_00925134;
    (void)mem_00924FC0;
    (void)mem_00924FE8;
    (void)mem_00924FDC;
    (void)mem_00924FF4;
    (void)mem_00924FE4;
    (void)mem_00924FF0;

    if (self[0x50] == 0) {
        uint32_t found = ext_0063EFE0(xml_node, reinterpret_cast<const char*>(mem_00A9F838));
        ext_004275E0(self + 0x08, reinterpret_cast<void*>(found));
    }

    uint8_t* vec = xml_node + 0x24;
    CheckedVecIter it{vec, vec, *reinterpret_cast<uint32_t**>(vec + 0x04)};
    ext_00427A60(&it);

    CheckedVecIter end_it{vec, vec, *reinterpret_cast<uint32_t**>(vec + 0x08)};
    ext_00427A60(&end_it);

    while (it.ptr != end_it.ptr) {
        uint8_t* elem = reinterpret_cast<uint8_t*>(*it.ptr);
        const std::string* elem_name = reinterpret_cast<const std::string*>(elem + 0x04);

        if (*elem_name == reinterpret_cast<const char*>(mem_00A9EE6C)) {
            std::string key;
            uint32_t found = ext_0063EFE0(elem, reinterpret_cast<const char*>(mem_00A9F838));
            using vfunc2_t = std::string* (__thiscall*)(void*, std::string*);
            void* found_ptr = reinterpret_cast<void*>(found);
            vfunc2_t vfunc2 = reinterpret_cast<vfunc2_t>((*reinterpret_cast<uint32_t**>(found_ptr))[2]);
            std::string tmp;
            key = *vfunc2(found_ptr, &tmp);

            uint32_t attr = normalize_sentinel(
                ext_0063F530(elem, reinterpret_cast<const char*>(mem_00A9EE24), 0, 1));
            if (attr != 0x00B53B30u) {
                uint32_t attr2 = normalize_sentinel(
                    ext_0063F530(elem, reinterpret_cast<const char*>(mem_00A9EE24), 0, 1));
                float vec3[3] = {0.0f, 0.0f, 0.0f};
                ext_0046C0A0(attr2, &vec3[0]);
                ext_00623600(self + 0x24, &key, vec3);
            } else {
                uint32_t attr2 = normalize_sentinel(
                    ext_0063F530(elem, reinterpret_cast<const char*>(mem_00A9EE34), 0, 1));
                float vec3_buf[3];
                void* vec3_ptr = ext_0067F080(vec3_buf, attr2);
                ext_00623600(self + 0x24, &key, vec3_ptr);
            }
        } else if (*elem_name == reinterpret_cast<const char*>(mem_00A9EEE8)) {
            uint32_t found1 = ext_0063EFE0(elem, reinterpret_cast<const char*>(mem_00A9F644));
            ext_004275E0(self + 0x34, reinterpret_cast<void*>(found1));

            uint32_t found2 = ext_0063EFE0(xml_node, reinterpret_cast<const char*>(mem_00A9F838));
            ext_004275E0(self + 0x08, reinterpret_cast<void*>(found2));

            self[0x50] = 1;

            std::string prefix(reinterpret_cast<const char*>(mem_00A9EE28));
            std::string combined;
            void* tmp_str = ext_006690D0(&combined, &prefix, self + 0x34);
            ext_00669AD0(tmp_str);

            using vfunc8_t = void (__thiscall*)(void*, const char*, const char*);
            vfunc8_t vfunc8 = reinterpret_cast<vfunc8_t>((*reinterpret_cast<uint32_t**>(self))[8]);
            vfunc8(self, combined.c_str(), reinterpret_cast<const char*>(mem_00A9EE28));
        }

        it.ptr += 1;
        ext_00427A60(&it);
    }
}
} // namespace lift_006239D0

// [0x00623150]
namespace lift_00623150 {
// @name NMData::DesiredPoseData::vfunc_3
// @class NMData::DesiredPoseData
// @summary Serializes DesiredPoseData to an XML node, writing either its pose map entries or its single pose string.
// @field NMData::DesiredPoseData +0x08 std::string field_0x08
// @field NMData::DesiredPoseData +0x28 void* field_0x28
// @field NMData::DesiredPoseData +0x2c void* field_0x2c
// @field NMData::DesiredPoseData +0x34 std::string field_0x34
// @field NMData::DesiredPoseData +0x50 uint8_t field_0x50



extern void* __thiscall ext_006404E0(void* self, uint32_t tag);
extern void* __thiscall ext_00640110(void* self, uint32_t tag);
extern void __thiscall ext_00427550(void* self, const char* name);
extern void* __thiscall ext_00640390(void* self, uint32_t tag, uint32_t zero, void* val);
extern void ext_0067F0F0(void* arg);
extern void __thiscall ext_00667030(void* self);

extern uint32_t mem_00A9EE28;
extern uint32_t mem_00A9F838;
extern const char* (__thiscall *mem_00924FF0)(const void* str);
extern void (*mem_00925134)();
extern uint32_t mem_00A9EE6C;
extern uint32_t mem_00A9EE34;
extern uint32_t mem_00A9EEE8;
extern uint32_t mem_00A9F644;

struct TreeIter {
    void* cont;
    void* ptr;
};

void* __thiscall fn_00623150(void* self, void* parent) {
    void* node = ext_006404E0(parent, mem_00A9EE28);
    void* attr = ext_00640110(node, mem_00A9F838);
    const char* name_cstr = mem_00924FF0(reinterpret_cast<const uint8_t*>(self) + 0x08);
    ext_00427550(&attr, name_cstr);

    if (lift_field<uint8_t>(self, 0x50) == 0) {
        void* head = lift_field<void*>(self, 0x2C);
        void* map_base = reinterpret_cast<uint8_t*>(self) + 0x28;
        TreeIter it{map_base, *reinterpret_cast<void**>(head)};
        while (true) {
            if (!it.cont || it.cont != map_base) {
                mem_00925134();
            }
            if (it.ptr == head) {
                break;
            }
            void* child = ext_006404E0(node, mem_00A9EE6C);
            if (!it.cont || it.ptr == lift_field<void*>(it.cont, 0x04)) {
                mem_00925134();
            }
            void* child_attr = ext_00640110(child, mem_00A9F838);
            const char* item_name = mem_00924FF0(reinterpret_cast<const uint8_t*>(it.ptr) + 0x0C);
            ext_00427550(&child_attr, item_name);
            if (it.ptr == lift_field<void*>(it.cont, 0x04)) {
                mem_00925134();
            }
            void* sub_attr = ext_00640390(child, mem_00A9EE34, 0, reinterpret_cast<uint8_t*>(it.ptr) + 0x28);
            ext_0067F0F0(sub_attr);
            ext_00667030(&it);
        }
    } else {
        void* child = ext_006404E0(node, mem_00A9EEE8);
        void* child_attr = ext_00640110(child, mem_00A9F644);
        const char* pose_cstr = mem_00924FF0(reinterpret_cast<const uint8_t*>(self) + 0x34);
        ext_00427550(&child_attr, pose_cstr);
    }

    return node;
}
} // namespace lift_00623150
