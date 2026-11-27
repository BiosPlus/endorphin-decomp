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
