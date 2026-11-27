// Lifted C++ translation unit: lifted/NMData/SceneData.cpp
#include "lift_compat.h"
#include <new>
#include <string>
// Global string-literal pointer (value 0x00986584 in .data).
extern "C" const char* mem_00A9F23C;

// [0x0047DB90] NMData::SceneData::vfunc_6 (35 bytes)
namespace lift_0047DB90 {
// Pointer-sized global holding the address of the C-string literal used below.
extern const char* const mem_00A9F23C;
// IAT slot for the MSVC std::string(const char*, allocator) constructor import.
// The portable std::string constructor below replaces the call; the slot is only referenced here.
extern int mem_00924FE4;

// @name NMData::SceneData::vfunc_6
// @class NMData::SceneData
// @summary Returns a std::string constructed from the C-string pointer stored in mem_00A9F23C; does not read self.
// (no self fields are accessed by this function)
std::string fn_0047DB90(const void* /*self*/) {
    static_cast<void>(&mem_00924FE4);
    return std::string(mem_00A9F23C);
}
} // namespace lift_0047DB90

// [0x00478D50]
namespace lift_00478D50 {
// @name NMData::SceneData::vfunc_3
// @class NMData::SceneData
// @summary Serializes SceneData and its child objects to an XML node while updating progress.
// @field NMData::SceneData +0x08 uint8_t field_0x08
// @field NMData::SceneData +0x10 uint32_t field_0x10
// @field NMData::SceneData +0x18 uint8_t field_0x18
// @field NMData::SceneData +0x1C void* field_0x1C
// @field NMData::SceneData +0x20 uint32_t field_0x20
// @field NMData::SceneData +0x24 void* field_0x24
// @field NMData::SceneData +0x28 void* field_0x28
// @field NMData::SceneData +0x34 uint32_t field_0x34
// @field NMData::SceneData +0x38 uint32_t field_0x38
// @field NMData::SceneData +0x1B0 uint8_t field_0x1B0
// @field NMData::SceneData +0x238 uint8_t field_0x238
// @field NMData::SceneData +0x514 void* field_0x514
// @field NMData::SceneData +0x518 uint8_t field_0x518
// @field NMData::SceneData +0x520 uint32_t field_0x520
// @field NMData::SceneData +0x524 uint8_t field_0x524
// @field NMData::SceneData +0x528 void* field_0x528
// @field NMData::SceneData +0x531 uint8_t field_0x531
// @field NMData::SceneData +0x534 int32_t field_0x534
// @field NMData::SceneData +0x558 void* field_0x558

void* __thiscall ext_00640110(void* self, void* name);
void __cdecl ext_00640A50(void* node, int32_t val);
uint32_t __thiscall ext_005861D0(void* self);
void __thiscall ext_00673C20(void* iter);
void __cdecl ext_00640A80(void* node, uint8_t flag);
const char* __cdecl ext_00679D80(void);
void __thiscall ext_0063F8D0(void* self);
void __thiscall ext_00640270(void* self, void* name);
void* __thiscall ext_00640390(void* self, void* name, uint32_t arg);
void __thiscall ext_004BAC60(void* self, void* node);
void __thiscall ext_00477EC0(void* self, void* node);
void* __thiscall ext_006404E0(void* self, void* name);
void* __cdecl ext_00594000(void);
void __thiscall ext_00585FF0(void* self, void* node);
void __thiscall ext_0059B5A0(void* self);
void __cdecl ext_00478A10(void* field, void* node, void* name, uint32_t arg, void* progress);
void __thiscall ext_004C45F0(void* self, void* node, void* progress);
void __thiscall ext_004B4890(void* self, void* node);
void __thiscall ext_004D0530(void* self, void* node);
uint32_t __thiscall ext_00493F20(void* self, void* node);
void __thiscall ext_00675020(void* self, void* node);
void __thiscall ext_004C43E0(void* self, void* node);

extern void* mem_00A9F558;
extern void* mem_00925134;
extern void* mem_00924FE4;
extern void* mem_00924FF4;
extern void* mem_00A9FAB0;
extern void* mem_00A9F58C;
extern void* mem_00A9EE88;
extern void* mem_00A9EE9C;
extern void* mem_00A9EE90;
extern void* mem_00A9EDA0;
extern void* mem_00A9ED98;
extern void* mem_00A9F414;
extern void* mem_00A9F1AC;
extern void* mem_00A9F1A4;
extern void* mem_00A9EFB0;
extern void* mem_00A9EF6C;
extern void* mem_00A9F084;
extern void* mem_00A9EEC8;

namespace {
struct ListIter {
    void* container;
    void* node;
};

void report_progress_str(void* progress, const char* msg) {
    uint8_t str_buf[32];
    reinterpret_cast<void(__thiscall*)(void*, const char*)>(mem_00924FE4)(str_buf, msg);
    void** vtable = *reinterpret_cast<void***>(progress);
    reinterpret_cast<void(__thiscall*)(void*, void*)>(vtable[3])(progress, str_buf);
    reinterpret_cast<void(__thiscall*)(void*)>(mem_00924FF4)(str_buf);
}

void report_progress_step(void* progress, uint32_t step, const char* msg) {
    uint8_t str_buf[32];
    reinterpret_cast<void(__thiscall*)(void*, const char*)>(mem_00924FE4)(str_buf, msg);
    void** vtable = *reinterpret_cast<void***>(progress);
    reinterpret_cast<void(__thiscall*)(void*, uint32_t, void*)>(vtable[4])(progress, step, str_buf);
    reinterpret_cast<void(__thiscall*)(void*)>(mem_00924FF4)(str_buf);
}
}  // namespace

void* __thiscall fn_00478D50(void* self, void* xml_node) {
    uint8_t* base = static_cast<uint8_t*>(self);

    void* child = ext_00640110(xml_node, mem_00A9F558);
    ext_00640A50(child, lift_field<int32_t>(base, 0x534));

    void* obj_24 = lift_field<void*>(base, 0x24);
    uint32_t sum1 = ext_005861D0(static_cast<uint8_t*>(obj_24) + 4);
    uint32_t val_10 = lift_field<uint32_t>(base, 0x10);
    uint32_t sum2 = 0;
    uint32_t sum3 = 0;

    void* list1_container = base + 0x18;
    void* list1_head = lift_field<void*>(list1_container, 0x4);
    ListIter iter1{list1_container, *static_cast<void**>(list1_head)};
    while (iter1.node != lift_field<void*>(list1_container, 0x4)) {
        if (iter1.container == nullptr) {
            reinterpret_cast<void(__cdecl*)()>(mem_00925134)();
        }
        uint8_t* item = lift_field<uint8_t*>(iter1.node, 0x28);
        if (lift_field<uint8_t>(item, 0x4E2) != 0) {
            sum2 += ext_005861D0(item + 4);
        } else {
            sum2 += 3;
        }
        ext_00673C20(&iter1);
    }

    void* list2_container = base + 0x524;
    void* list2_head = lift_field<void*>(list2_container, 0x4);
    ListIter iter2{list2_container, *static_cast<void**>(list2_head)};
    while (iter2.node != lift_field<void*>(list2_container, 0x4)) {
        uint8_t* item = lift_field<uint8_t*>(iter2.node, 0x28);
        sum3 += lift_field<uint32_t>(item, 0x20);
        ext_00673C20(&iter2);
    }

    void* progress = lift_field<void*>(base, 0x558);
    if (progress != nullptr) {
        uint32_t vec_begin = lift_field<uint32_t>(base, 0x34);
        uint32_t vec_count = 0;
        if (vec_begin != 0) {
            vec_count = static_cast<uint32_t>(
                static_cast<int32_t>(lift_field<uint32_t>(base, 0x38) - vec_begin) >> 2);
        }
        uint32_t total = vec_count + lift_field<uint32_t>(base, 0x520) + sum3 + val_10 + sum2 + sum1;
        void** vtable = *reinterpret_cast<void***>(progress);
        reinterpret_cast<void(__thiscall*)(void*, uint32_t, uint32_t)>(vtable[2])(progress, 0, total);
        report_progress_str(progress, reinterpret_cast<const char*>(0x0093C160));
    }

    ext_00640A80(ext_00640110(xml_node, mem_00A9FAB0), lift_field<uint8_t>(base, 0x531));

    void* node_f58c = ext_00640110(xml_node, mem_00A9F58C);
    const char* str_val = ext_00679D80();
    ext_0063F8D0(node_f58c);
    uint8_t str_buf[32];
    reinterpret_cast<void(__thiscall*)(void*, const char*)>(mem_00924FE4)(str_buf, str_val);
    ext_00640270(node_f58c, str_buf);
    reinterpret_cast<void(__thiscall*)(void*)>(mem_00924FF4)(str_buf);

    ext_004BAC60(base + 0x1B0, ext_00640390(xml_node, mem_00A9EE88, 0));

    progress = lift_field<void*>(base, 0x558);
    if (progress != nullptr) {
        report_progress_str(progress, reinterpret_cast<const char*>(0x0093C144));
    }

    ext_00477EC0(base, ext_00640390(xml_node, mem_00A9EE9C, 0));

    progress = lift_field<void*>(base, 0x558);
    if (progress != nullptr) {
        report_progress_step(progress, 0, reinterpret_cast<const char*>(0x0093C12C));
    }

    void* node_ee90 = ext_00640390(xml_node, mem_00A9EE90, 0);
    obj_24 = lift_field<void*>(base, 0x24);
    void** obj_24_vtable = *reinterpret_cast<void***>(obj_24);
    reinterpret_cast<void(__thiscall*)(void*, void*)>(obj_24_vtable[3])(obj_24, node_ee90);

    progress = lift_field<void*>(base, 0x558);
    if (progress != nullptr) {
        report_progress_step(progress, sum1, reinterpret_cast<const char*>(0x0093C114));
    }

    if (lift_field<uint32_t>(base, 0x20) != 0) {
        void* list1_xml = ext_00640390(xml_node, mem_00A9EDA0, 0);
        iter1 = ListIter{list1_container, *static_cast<void**>(lift_field<void*>(list1_container, 0x4))};
        while (iter1.node != lift_field<void*>(list1_container, 0x4)) {
            void* item = lift_field<void*>(iter1.node, 0x28);
            void* item_xml = ext_006404E0(list1_xml, mem_00A9ED98);
            void** item_vtable = *reinterpret_cast<void***>(item);
            reinterpret_cast<void(__thiscall*)(void*, void*)>(item_vtable[3])(item, item_xml);

            progress = lift_field<void*>(base, 0x558);
            if (progress != nullptr) {
                uint8_t* item_bytes = lift_field<uint8_t*>(iter1.node, 0x28);
                uint32_t step = (lift_field<uint8_t>(item_bytes, 0x4E2) != 0)
                                    ? ext_005861D0(item_bytes + 4)
                                    : 3;
                report_progress_step(progress, step, reinterpret_cast<const char*>(0x0093C114));
            }
            ext_00673C20(&iter1);
        }
    }

    void* mgr = ext_00594000();
    progress = lift_field<void*>(base, 0x558);
    if (progress != nullptr) {
        report_progress_step(progress, 0, reinterpret_cast<const char*>(0x0093C160));
    }

    if (mgr != nullptr) {
        ext_00585FF0(mgr, ext_00640390(xml_node, mem_00A9F414, 0));
    }

    progress = lift_field<void*>(base, 0x558);
    if (progress != nullptr) {
        report_progress_step(progress, 0, reinterpret_cast<const char*>(0x0093C104));
    }

    if (mgr != nullptr) {
        ext_0059B5A0(mgr);
    }

    void* list2_xml = ext_006404E0(xml_node, mem_00A9F1AC);
    iter2 = ListIter{list2_container, *static_cast<void**>(lift_field<void*>(list2_container, 0x4))};
    while (iter2.node != lift_field<void*>(list2_container, 0x4)) {
        void* item_xml = ext_006404E0(list2_xml, mem_00A9F1A4);
        void* item = lift_field<void*>(iter2.node, 0x28);
        void** item_vtable = *reinterpret_cast<void***>(item);
        reinterpret_cast<void(__thiscall*)(void*, void*)>(item_vtable[3])(item, item_xml);

        progress = lift_field<void*>(base, 0x558);
        if (progress != nullptr) {
            uint8_t* item_bytes = lift_field<uint8_t*>(iter2.node, 0x28);
            report_progress_step(progress, lift_field<uint32_t>(item_bytes, 0x20),
                                 reinterpret_cast<const char*>(0x0093C104));
        }
        ext_00673C20(&iter2);
    }

    progress = lift_field<void*>(base, 0x558);
    if (progress != nullptr) {
        report_progress_step(progress, 0, reinterpret_cast<const char*>(0x0093C0E4));
    }

    ext_00478A10(base + 0x518, xml_node, mem_00A9EFB0, 0, lift_field<void*>(base, 0x558));

    progress = lift_field<void*>(base, 0x558);
    if (progress != nullptr) {
        report_progress_step(progress, lift_field<uint32_t>(base, 0x520),
                             reinterpret_cast<const char*>(0x0093C0C4));
    }

    ext_004C45F0(base + 0x8, xml_node, lift_field<void*>(base, 0x558));

    progress = lift_field<void*>(base, 0x558);
    if (progress != nullptr) {
        report_progress_str(progress, reinterpret_cast<const char*>(0x0093C0B8));
    }

    if (lift_field<void*>(base, 0x514) != nullptr) {
        ext_004B4890(lift_field<void*>(base, 0x514), ext_00640390(xml_node, mem_00A9EF6C, 0));
    }

    ext_004D0530(base + 0x238, xml_node);

    if (mgr != nullptr) {
        uint8_t* mgr_bytes = static_cast<uint8_t*>(mgr);
        ext_00493F20(mgr_bytes + 0x258, ext_00640390(xml_node, mem_00A9F084, 0));
        ext_00675020(lift_field<void*>(mgr_bytes, 0x274), ext_00640390(xml_node, mem_00A9EEC8, 0));
    }

    ext_004C43E0(lift_field<void*>(base, 0x28), xml_node);
    return xml_node;
}
} // namespace lift_00478D50
