// Lifted C++ translation unit: lifted/NMData/SceneData.cpp
#include "lift_compat.h"
#include <new>
#include <string>
// Global string-literal pointer (value 0x00986584 in .data).
extern "C" const char* mem_00A9F23C;
#include <cstdint>
#include <cstdlib>

#include <cstdlib>
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

// [0x0047DD50]
namespace lift_0047DD50 {
// @name NMData::SceneData::vfunc_1
// @class NMData::SceneData
// @summary Loads scene data (environment, characters, timeline events, options, channels, world) from an XML node.
// @field NMData::SceneData +0x08 void* animationData
// @field NMData::SceneData +0x18 uint32_t[3] field_0x18
// @field NMData::SceneData +0x24 void* field_0x24
// @field NMData::SceneData +0x28 void* field_0x28
// @field NMData::SceneData +0x30 uint32_t[4] field_0x30
// @field NMData::SceneData +0x40 void* field_0x40
// @field NMData::SceneData +0x44 uint32_t[3] field_0x44
// @field NMData::SceneData +0x50 uint32_t field_0x50
// @field NMData::SceneData +0x5C void* field_0x5C
// @field NMData::SceneData +0x1B0 uint8_t field_0x1B0
// @field NMData::SceneData +0x238 uint8_t field_0x238
// @field NMData::SceneData +0x514 void* field_0x514
// @field NMData::SceneData +0x518 uint8_t field_0x518
// @field NMData::SceneData +0x524 uint32_t[3] field_0x524
// @field NMData::SceneData +0x528 void* field_0x528
// @field NMData::SceneData +0x530 uint8_t field_0x530
// @field NMData::SceneData +0x531 uint8_t field_0x531
// @field NMData::SceneData +0x534 int32_t field_0x534
// @field NMData::SceneData +0x538 int32_t version
// @field NMData::SceneData +0x53C std::string field_0x53C
// @field NMData::SceneData +0x558 void* progressCallback


    void* __cdecl ext_00404F00(void* out_str, int32_t value);
    void __thiscall ext_0041A920(void* self, void* arg);
    void* __thiscall ext_004275C0(void* self, void* out_str);
    void __cdecl ext_004275E0(void* dst, void* obj);
    void __cdecl ext_00427640(void* out, void* obj);
    void __thiscall ext_00427A60(void* self);
    void __thiscall ext_004796D0(void* self, std::string name, void* obj);
    void __thiscall ext_004797D0(void* self, void* str_ptr, void* iter_ptr);
    void __thiscall ext_00479890(void* self, std::string name, void* obj);
    void __thiscall ext_00479990(void* self, std::string name, void* obj);
    void __thiscall ext_0047A040(void* self, void* node, int32_t version);
    void __cdecl ext_0047B1E0(void* node, void* map_ptr, const char* name, int32_t flag);
    void __cdecl ext_0047B370(void* node, void* map_ptr, const char* name, int32_t flag);
    void __cdecl ext_0047B500(void* node, void* map_ptr, const char* name, int32_t flag);
    void __cdecl ext_0047B6A0(void* node, void* map_ptr, const char* name, int32_t flag);
    void __cdecl ext_0047B830(void* node, void* map_ptr, const char* name, int32_t flag);
    void __cdecl ext_0047B9C0(void* node, void* map_ptr, const char* name, int32_t flag);
    void __cdecl ext_0047BB50(void* node, void* map_ptr, const char* name, int32_t flag);
    void __cdecl ext_0047BCE0(void* node, void* map_ptr, const char* name, int32_t flag);
    void __cdecl ext_0047BE70(void* node, void* map_ptr, const char* name, int32_t flag);
    void __thiscall ext_0047C0B0(void* self);
    void __thiscall ext_0047C190(void* self, void* out_str);
    void __thiscall ext_0047C480(void* self, void* arg);
    void __thiscall ext_0047CAD0(void* self);
    void __thiscall ext_0047D300(void* self, void* arg);
    void __thiscall ext_0047D720(void* self);
    uint32_t __thiscall ext_00493F40(void* self, void* node);
    void* __thiscall ext_004AC5A0(void* self, void* arg0, int32_t arg1, int32_t arg2, int32_t arg3, const char* arg4);
    void __thiscall ext_004B58C0(void* self, void* node);
    void __thiscall ext_004BD0A0(void* self, void* node);
    void __thiscall ext_004C4440(void* self, void* node);
    void __thiscall ext_004C4A40(void* self, void* node, void* progress);
    void __thiscall ext_004D0760(void* self, void* node);
    void __cdecl ext_0053F5F0(int32_t* out, void* prop);
    void* __cdecl ext_00559790(void* arg);
    void __thiscall ext_00587450(void* self, void* arg);
    void __thiscall ext_00589D40(void* self, void* node);
    void* __cdecl ext_00594000(void);
    void __thiscall ext_0059A8D0(void* self, void* str_ptr, void* arg);
    void __thiscall ext_005A0910(void* self, void* arg0, void* arg1, void* arg2, void* arg3);
    void* __thiscall ext_005A9110(void* self);
    void __thiscall ext_005AE480(void* self, void* node);
    void* __thiscall ext_005B0CA0(void* self);
    uint8_t __thiscall ext_0063EA50(void* self);
    void* __thiscall ext_0063EFE0(void* self, const char* name);
    void* __thiscall ext_0063F530(void* self, const char* name, int32_t a, int32_t b);
    void* __thiscall ext_00668150(void* self, int32_t index, const void* key);
    void* __cdecl ext_006690D0(void);
    void* __thiscall ext_00669370(void* self, void* out_str, void* key_str);
    void* __thiscall ext_00669A90(void* self, void* out_str, void* arg1, void* arg2);
    void __thiscall ext_00673C20(void* self);
    void __thiscall ext_006755F0(void* self, void* node);
    const char* __cdecl ext_00679D80(void);
    void* __cdecl ext_006A5C62(size_t size);
    void* __cdecl ext_006A6E9E(void* ptr, int32_t vfdelta, void* src_type, void* dst_type, int32_t is_ref);

extern uint8_t mem_00924FD4[];
extern uint8_t mem_00924FDC[];
extern uint8_t mem_00924FE0[];
extern uint8_t mem_00924FE4[];
extern uint8_t mem_00924FE8[];
extern uint8_t mem_00924FEC[];
extern uint8_t mem_00924FF0[];
extern uint8_t mem_00924FF4[];
extern uint8_t mem_00925134[];
extern uint8_t mem_009251E4[];
extern uint8_t mem_00928B5D[];
extern uint8_t mem_0092A0D0[];
extern uint8_t mem_00934424[];
extern uint8_t mem_0093C170[];
extern uint8_t mem_0093C1E4[];
extern uint8_t mem_0093C1F8[];
extern uint8_t mem_0093C20C[];
extern uint8_t mem_0093C220[];
extern uint8_t mem_0093C240[];
extern uint8_t mem_0093C25C[];
extern uint8_t mem_0093C270[];
extern uint8_t mem_0093C288[];
extern uint8_t mem_00A2E914[];
extern uint8_t mem_00A32928[];
extern const char* mem_00A9ED2C;
extern const char* mem_00A9ED30;
extern const char* mem_00A9ED58;
extern const char* mem_00A9ED64;
extern const char* mem_00A9ED98;
extern const char* mem_00A9EDA0;
extern const char* mem_00A9EDAC;
extern const char* mem_00A9EE2C;
extern const char* mem_00A9EE88;
extern const char* mem_00A9EE90;
extern const char* mem_00A9EE9C;
extern const char* mem_00A9EEC8;
extern const char* mem_00A9EF28;
extern const char* mem_00A9EF2C;
extern const char* mem_00A9EF6C;
extern const char* mem_00A9EFB0;
extern const char* mem_00A9EFB8;
extern const char* mem_00A9F084;
extern const char* mem_00A9F1A4;
extern const char* mem_00A9F1AC;
extern const char* mem_00A9F1C0;
extern const char* mem_00A9F218;
extern const char* mem_00A9F240;
extern const char* mem_00A9F244;
extern const char* mem_00A9F270;
extern const char* mem_00A9F274;
extern const char* mem_00A9F314;
extern const char* mem_00A9F318;
extern const char* mem_00A9F358;
extern const char* mem_00A9F3DC;
extern const char* mem_00A9F414;
extern const char* mem_00A9F480;
extern const char* mem_00A9F558;
extern const char* mem_00A9F58C;
extern const char* mem_00A9F838;
extern const char* mem_00A9F8E8;
extern const char* mem_00A9FAB0;
extern std::string mem_00ADF3CC;
extern uint8_t mem_00B53A34[];
extern uint8_t mem_00B53A70[];
extern uint8_t mem_00B53AB0[];
extern uint8_t mem_00B53AF0[];
extern uint8_t mem_00B53B30[];

namespace {

template <typename T>
inline T* lift_ptr(void* base, size_t offset) {
    return reinterpret_cast<T*>(static_cast<uint8_t*>(base) + offset);
}

inline bool isSentinelNode(const void* p) {
    return p == mem_00B53A34 || p == mem_00B53B30 || p == mem_00B53AB0 ||
           p == mem_00B53A70 || p == mem_00B53AF0;
}

inline void* normalizeSentinel(void* p) {
    return isSentinelNode(p) ? static_cast<void*>(mem_00B53B30) : p;
}

inline void reportProgress(void* progress, int32_t val, const char* msg) {
    if (!progress) return;
    std::string s(msg);
    void** vt = *reinterpret_cast<void***>(progress);
    auto fn = reinterpret_cast<void(__thiscall*)(void*, int32_t, std::string*)>(vt[4]);
    fn(progress, val, &s);
}

inline void clearTreeMap(void* map_ptr) {
    void* head = lift_field<void*>(map_ptr, 4);
    void* root = lift_field<void*>(head, 4);
    ext_005AE480(map_ptr, root);
    void* h = lift_field<void*>(map_ptr, 4);
    lift_field<void*>(h, 4) = h;
    lift_field<uint32_t>(map_ptr, 8) = 0;
    lift_field<void*>(h, 0) = h;
    lift_field<void*>(h, 8) = h;
}

struct CheckedVecIter {
    void* owner;
    void* container;
    void* ptr;
};

struct CheckedTreeIter {
    void* container;
    void* node;
};

} // namespace

void __thiscall fn_0047DD50(void* self, void* xmlNode) {
    (void)mem_00924FD4; (void)mem_00924FDC; (void)mem_00924FE0; (void)mem_00924FE4;
    (void)mem_00924FE8; (void)mem_00924FEC; (void)mem_00924FF0; (void)mem_00924FF4;
    (void)mem_00925134; (void)mem_009251E4;
    ext_0047CAD0(self);

    void* progress = lift_field<void*>(self, 0x558);
    if (progress) {
        int32_t end_t = lift_field<int32_t>(xmlNode, 0x5C);
        int32_t start_t = lift_field<int32_t>(xmlNode, 0x50);
        void** vt = *reinterpret_cast<void***>(progress);
        auto fn_init = reinterpret_cast<void(__thiscall*)(void*, int32_t, int32_t)>(vt[2]);
        fn_init(progress, 0, end_t - start_t);
        reportProgress(progress, 0, reinterpret_cast<const char*>(mem_0093C288));
    }

    void* ver_prop = ext_0063EFE0(xmlNode, mem_00A9F8E8);
    int32_t version = 0;
    ext_0053F5F0(&version, ver_prop);
    lift_field<int32_t>(self, 0x538) = version;

    void* p1 = ext_0063EFE0(xmlNode, mem_00A9FAB0);
    if (!isSentinelNode(p1)) {
        ext_00427640(&lift_field<uint8_t>(self, 0x531), &p1);
    }

    void* p2 = ext_0063EFE0(xmlNode, mem_00A9F58C);
    if (!isSentinelNode(p2)) {
        ext_004275E0(&lift_field<std::string>(self, 0x53C), p2);
    } else {
        lift_field<std::string>(self, 0x53C) = ext_00679D80();
    }

    lift_field<uint8_t>(self, 0x530) = 0;
    void* env_node = normalizeSentinel(ext_0063F530(xmlNode, mem_00A9EE88, 0, 1));
    if (!ext_0063EA50(env_node)) {
        ext_004BD0A0(lift_ptr<void>(self, 0x1B0), env_node);
        lift_field<uint8_t>(self, 0x530) = 1;
    }

    if (lift_field<void*>(self, 0x558)) {
        int32_t diff = lift_field<int32_t>(env_node, 0x5C) - lift_field<int32_t>(env_node, 0x50) + 0x28;
        reportProgress(lift_field<void*>(self, 0x558), diff, reinterpret_cast<const char*>(mem_0093C270));
    }

    void* global_mgr = ext_006690D0();
    void* bg_node = normalizeSentinel(ext_0063F530(xmlNode, mem_00A9EE90, 0, 1));
    void* bg_obj = lift_field<void*>(self, 0x24);
    if (!isSentinelNode(bg_node)) {
        void** vt = *reinterpret_cast<void***>(bg_obj);
        auto fn_load = reinterpret_cast<void(__thiscall*)(void*, void*)>(vt[1]);
        fn_load(bg_obj, bg_node);
    } else {
        std::string s_bg(reinterpret_cast<const char*>(mem_00934424));
        std::string s_key(mem_00A9ED58);
        std::string s_res;
        ext_00669A90(global_mgr, &s_res, &s_key, &s_bg);
        void** vt = *reinterpret_cast<void***>(bg_obj);
        auto fn_set = reinterpret_cast<void(__thiscall*)(void*, std::string*)>(vt[7]);
        fn_set(bg_obj, &s_res);
    }

    {
        std::string s_bg(reinterpret_cast<const char*>(mem_00934424));
        void* bg_sub = lift_ptr<void>(lift_field<void*>(self, 0x24), 4);
        void** vt = *reinterpret_cast<void***>(bg_sub);
        auto fn_set_name = reinterpret_cast<void(__thiscall*)(void*, std::string*)>(vt[0x5C / 4]);
        fn_set_name(bg_sub, &s_bg);
    }

    lift_field<uint8_t>(lift_field<void*>(self, 0x24), 0x4E1) = 0;

    if (lift_field<void*>(self, 0x558)) {
        int32_t diff = lift_field<int32_t>(bg_node, 0x5C) - lift_field<int32_t>(bg_node, 0x50);
        reportProgress(lift_field<void*>(self, 0x558), diff, reinterpret_cast<const char*>(mem_0093C170));
    }

    {
        void* head = lift_field<void*>(self, 0x1C);
        void* first = lift_field<void*>(head, 0);
        void* m18 = lift_ptr<void>(self, 0x18);
        ext_005A0910(m18, m18, first, m18, head);
        clearTreeMap(m18);
    }

    void* chars_node = normalizeSentinel(ext_0063F530(xmlNode, mem_00A9ED98, 0, 1));
    void* poses_node = normalizeSentinel(ext_0063F530(xmlNode, mem_00A9EDA0, 0, 1));

    if (!isSentinelNode(chars_node) && isSentinelNode(poses_node)) {
        ext_0047A040(self, chars_node, version);
    } else if (!isSentinelNode(poses_node)) {
        void* vec = lift_ptr<void>(poses_node, 0x24);
        CheckedVecIter it{vec, vec, lift_field<void*>(vec, 4)};
        ext_00427A60(&it);
        CheckedVecIter end{vec, vec, lift_field<void*>(vec, 8)};
        ext_00427A60(&end);
        while (it.ptr != end.ptr) {
            void* elem = *reinterpret_cast<void**>(it.ptr);
            ext_0047A040(self, elem, version);
            it.ptr = static_cast<uint8_t*>(it.ptr) + 4;
            ext_00427A60(&it);
        }
        reportProgress(lift_field<void*>(self, 0x558), 0, reinterpret_cast<const char*>(mem_0093C25C));
    } else {
        std::string key(mem_00A9ED98);
        void* found = ext_00668150(global_mgr, 0, &key);
        if (lift_field<int32_t>(found, 0x0C) != 0) {
            void* first_item = *lift_field<void**>(found, 8);
            void* raw = ext_006A5C62(0x65C);
            void* char_obj = raw ? ext_005A9110(raw) : nullptr;

            std::string empty_s(reinterpret_cast<const char*>(mem_00928B5D));
            std::string out_s;
            ext_00669370(lift_ptr<void>(first_item, 0x28), &out_s, &empty_s);
            void** vt = *reinterpret_cast<void***>(char_obj);
            auto fn_init = reinterpret_cast<void(__thiscall*)(void*, void*)>(vt[7]);
            fn_init(char_obj, &out_s);

            lift_field<std::string>(char_obj, 0x474) = lift_field<std::string>(first_item, 0x44);

            std::string empty_s2(reinterpret_cast<const char*>(mem_00928B5D));
            std::string out_s2;
            ext_00669370(lift_ptr<void>(first_item, 0x28), &out_s2, &empty_s2);
            lift_field<std::string>(char_obj, 0x490) = out_s2;

            void* sub = lift_ptr<void>(char_obj, 4);
            void** sub_vt = *reinterpret_cast<void***>(sub);
            auto fn_set_str = reinterpret_cast<void(__thiscall*)(void*, void*)>(sub_vt[0x5C / 4]);
            fn_set_str(sub, nullptr);

            auto fn_get_name = reinterpret_cast<std::string*(__thiscall*)(void*)>(sub_vt[0x24 / 4]);
            std::string name_copy(*fn_get_name(sub));
            ext_004796D0(lift_ptr<void>(self, 0x18), name_copy, char_obj);
        }
    }

    {
        void* head = lift_field<void*>(self, 0x528);
        void* first = lift_field<void*>(head, 0);
        void* m524 = lift_ptr<void>(self, 0x524);
        ext_005A0910(m524, m524, first, m524, head);
        clearTreeMap(m524);
    }

    void* events_node = normalizeSentinel(ext_0063F530(xmlNode, mem_00A9F1AC, 0, 1));
    if (!isSentinelNode(events_node)) {
        void* vec = lift_ptr<void>(events_node, 0x24);
        CheckedVecIter it{vec, vec, lift_field<void*>(vec, 4)};
        ext_00427A60(&it);
        CheckedVecIter end{vec, vec, lift_field<void*>(vec, 8)};
        ext_00427A60(&end);
        while (it.ptr != end.ptr) {
            void* raw = ext_006A5C62(0x84);
            void* ev = raw ? ext_005B0CA0(raw) : nullptr;
            void* node_elem = *reinterpret_cast<void**>(it.ptr);
            void** vt = *reinterpret_cast<void***>(ev);
            auto fn_load = reinterpret_cast<void(__thiscall*)(void*, void*)>(vt[1]);
            fn_load(ev, node_elem);
            std::string ev_name(lift_field<std::string>(ev, 0x64));
            ext_00479990(lift_ptr<void>(self, 0x524), ev_name, ev);
            it.ptr = static_cast<uint8_t*>(it.ptr) + 4;
            ext_00427A60(&it);
        }
        if (lift_field<void*>(self, 0x558)) {
            int32_t diff = lift_field<int32_t>(events_node, 0x5C) - lift_field<int32_t>(events_node, 0x50);
            reportProgress(lift_field<void*>(self, 0x558), diff, reinterpret_cast<const char*>(mem_0093C240));
        }
    } else {
        void* ev_node2 = normalizeSentinel(ext_0063F530(events_node, mem_00A9F1A4, 0, 1));
        if (!isSentinelNode(ev_node2)) {
            void* raw = ext_006A5C62(0x84);
            void* ev = raw ? ext_005B0CA0(raw) : nullptr;
            void** vt = *reinterpret_cast<void***>(ev);
            auto fn_load = reinterpret_cast<void(__thiscall*)(void*, void*)>(vt[1]);
            fn_load(ev, ev_node2);
            std::string ev_name(lift_field<std::string>(ev, 0x64));
            if (ev_name.empty()) {
                void* head = lift_field<void*>(self, 0x1C);
                void* first = lift_field<void*>(head, 0);
                void* ch = lift_field<void*>(first, 0x28);
                void* ch_sub = lift_ptr<void>(ch, 4);
                void** ch_vt = *reinterpret_cast<void***>(ch_sub);
                auto fn_get = reinterpret_cast<std::string*(__thiscall*)(void*)>(ch_vt[0x24 / 4]);
                ev_name = *fn_get(ch_sub);
            }
            ext_00479990(lift_ptr<void>(self, 0x524), ev_name, ev);
        }
        if (lift_field<void*>(self, 0x558)) {
            int32_t diff = lift_field<int32_t>(events_node, 0x5C) - lift_field<int32_t>(events_node, 0x50);
            reportProgress(lift_field<void*>(self, 0x558), diff, reinterpret_cast<const char*>(mem_0093C240));
        }
    }

    void* terrain_node = normalizeSentinel(ext_0063F530(xmlNode, mem_00A9F1C0, 0, 1));
    void* terrain_obj = nullptr;
    if (!isSentinelNode(terrain_node)) {
        std::string path;
        if (version < 5) {
            void* prop = ext_0063EFE0(terrain_node, mem_00A9F838);
            void** vt = *reinterpret_cast<void***>(prop);
            auto fn_get = reinterpret_cast<std::string*(__thiscall*)(void*, std::string*)>(vt[2]);
            std::string tmp;
            path = *fn_get(prop, &tmp);
        } else {
            void* prop = ext_0063EFE0(terrain_node, mem_00A9F480);
            void** vt = *reinterpret_cast<void***>(prop);
            auto fn_get = reinterpret_cast<std::string*(__thiscall*)(void*, std::string*)>(vt[2]);
            std::string tmp;
            path = *fn_get(prop, &tmp);
        }
        if (!path.empty()) {
            void* raw = ext_006A5C62(0x3E8);
            terrain_obj = raw ? ext_004AC5A0(raw, &path, 0, 0x14, 0, mem_00ADF3CC.c_str()) : nullptr;
            void* t_node = normalizeSentinel(ext_0063F530(xmlNode, mem_00A9F1C0, 0, 1));
            void** vt = *reinterpret_cast<void***>(terrain_obj);
            auto fn_load = reinterpret_cast<void(__thiscall*)(void*, void*)>(vt[0x54 / 4]);
            fn_load(terrain_obj, t_node);
            struct { void* obj; uint32_t zero; } pair{terrain_obj, 0};
            ext_0041A920(lift_ptr<void>(self, 0x30), &pair);
        }
    }

    int32_t max_t = 0;
    int32_t min_t = 0x7FFFFFFF;
    {
        void* n = normalizeSentinel(ext_0063F530(xmlNode, mem_00A9F244, 0, 1));
        int32_t v = lift_field<int32_t>(n, 0x5C);
        if (v >= max_t) max_t = v;
        n = normalizeSentinel(ext_0063F530(xmlNode, mem_00A9F244, 0, 1));
        v = lift_field<int32_t>(n, 0x50);
        if (v <= min_t) min_t = v;

        n = normalizeSentinel(ext_0063F530(xmlNode, mem_00A9EF2C, 0, 1));
        v = lift_field<int32_t>(n, 0x5C);
        if (v >= max_t) max_t = v;
        n = normalizeSentinel(ext_0063F530(xmlNode, mem_00A9EF2C, 0, 1));
        v = lift_field<int32_t>(n, 0x50);
        if (v <= min_t) min_t = v;

        n = normalizeSentinel(ext_0063F530(xmlNode, mem_00A9F318, 0, 1));
        v = lift_field<int32_t>(n, 0x5C);
        if (v >= max_t) max_t = v;
        n = normalizeSentinel(ext_0063F530(xmlNode, mem_00A9F318, 0, 1));
        v = lift_field<int32_t>(n, 0x50);
        if (v <= min_t) min_t = v;

        n = normalizeSentinel(ext_0063F530(xmlNode, mem_00A9F270, 0, 1));
        v = lift_field<int32_t>(n, 0x5C);
        if (v >= max_t) max_t = v;
        n = normalizeSentinel(ext_0063F530(xmlNode, mem_00A9F270, 0, 1));
        v = lift_field<int32_t>(n, 0x50);
        if (v <= min_t) min_t = v;

        n = normalizeSentinel(ext_0063F530(xmlNode, mem_00A9EE9C, 0, 1));
        v = lift_field<int32_t>(n, 0x5C);
        if (v >= max_t) max_t = v;
        n = normalizeSentinel(ext_0063F530(xmlNode, mem_00A9EE9C, 0, 1));
        v = lift_field<int32_t>(n, 0x50);
        if (v <= min_t) min_t = v;
    }

    void* m30 = lift_ptr<void>(self, 0x30);
    if (version < 0x12) {
        ext_0047B1E0(normalizeSentinel(ext_0063F530(xmlNode, mem_00A9EE9C, 0, 1)), m30, mem_00A9F358, 0);
        ext_0047B370(normalizeSentinel(ext_0063F530(xmlNode, mem_00A9EE9C, 0, 1)), m30, mem_00A9EFB8, 0);
        ext_0047B500(normalizeSentinel(ext_0063F530(xmlNode, mem_00A9F244, 0, 1)), m30, mem_00A9F240, 0);
        ext_0047B6A0(normalizeSentinel(ext_0063F530(xmlNode, mem_00A9EF2C, 0, 1)), m30, mem_00A9EF28, 0);
        ext_0047B830(normalizeSentinel(ext_0063F530(xmlNode, mem_00A9F318, 0, 1)), m30, mem_00A9F314, 0);
        const char* k = (version < 5) ? mem_00A9ED64 : mem_00A9F274;
        ext_0047B9C0(normalizeSentinel(ext_0063F530(xmlNode, mem_00A9F270, 0, 1)), m30, k, 0);
    } else {
        ext_0047B1E0(normalizeSentinel(ext_0063F530(xmlNode, mem_00A9EE9C, 0, 1)), m30, mem_00A9F358, 0);
        ext_0047B370(normalizeSentinel(ext_0063F530(xmlNode, mem_00A9EE9C, 0, 1)), m30, mem_00A9EFB8, 0);
        ext_0047B500(normalizeSentinel(ext_0063F530(xmlNode, mem_00A9EE9C, 0, 1)), m30, mem_00A9F240, 0);
        ext_0047B6A0(normalizeSentinel(ext_0063F530(xmlNode, mem_00A9EE9C, 0, 1)), m30, mem_00A9EF28, 0);
        ext_0047B830(normalizeSentinel(ext_0063F530(xmlNode, mem_00A9EE9C, 0, 1)), m30, mem_00A9F314, 0);
        ext_0047B9C0(normalizeSentinel(ext_0063F530(xmlNode, mem_00A9EE9C, 0, 1)), m30, mem_00A9F274, 0);
    }
    ext_0047BB50(normalizeSentinel(ext_0063F530(xmlNode, mem_00A9EE9C, 0, 1)), m30, mem_00A9F218, 0);
    ext_0047BCE0(normalizeSentinel(ext_0063F530(xmlNode, mem_00A9EE9C, 0, 1)), m30, mem_00A9EE2C, 0);
    ext_0047BE70(normalizeSentinel(ext_0063F530(xmlNode, mem_00A9EE9C, 0, 1)), m30, mem_00A9ED30, 0);

    ext_0047C0B0(self);

    void* m5c = lift_ptr<void>(self, 0x5C);
    {
        void** vt = *reinterpret_cast<void***>(m5c);
        auto fn_84 = reinterpret_cast<void(__thiscall*)(void*)>(vt[0x84 / 4]);
        fn_84(m5c);
        std::string s_key(mem_00A9EE9C);
        auto fn_5c = reinterpret_cast<void(__thiscall*)(void*, std::string*)>(vt[0x5C / 4]);
        fn_5c(m5c, &s_key);
    }

    {
        void* head = lift_field<void*>(self, 0x48);
        void* root = lift_field<void*>(head, 4);
        void* m44 = lift_ptr<void>(self, 0x44);
        ext_005AE480(m44, root);
        void* h = lift_field<void*>(m44, 4);
        lift_field<void*>(h, 4) = h;
        lift_field<uint32_t>(m44, 8) = 0;
        lift_field<void*>(h, 0) = h;
        lift_field<void*>(h, 8) = h;
    }

    void** vec_begin = lift_field<void**>(m5c, 4);
    void** vec_end = lift_field<void**>(m5c, 8);
    for (void** it = vec_begin; it != vec_end; ++it) {
        void* item = *it;
        void** vt = *reinterpret_cast<void***>(item);
        auto fn_get = reinterpret_cast<std::string*(__thiscall*)(void*)>(vt[0x24 / 4]);
        std::string* s = fn_get(item);
        if (!s->empty()) {
            int32_t id = std::atoi(s->c_str());
            std::string id_str;
            ext_00404F00(&id_str, id);
            void* m40 = lift_ptr<void>(self, 0x40);
            void** m40_vt = *reinterpret_cast<void***>(m40);
            auto fn_has = reinterpret_cast<int32_t(__thiscall*)(void*, std::string*)>(m40_vt[0]);
            if (fn_has(m40, &id_str) == 0) {
                ext_004797D0(m40, &id_str, it);
            }
        }
    }

    for (void** it = lift_field<void**>(m5c, 4); it != lift_field<void**>(m5c, 8); ++it) {
        ext_00587450(*it, m5c);
        void* item = *it;
        void** vt = *reinterpret_cast<void***>(item);
        auto fn_get = reinterpret_cast<std::string*(__thiscall*)(void*)>(vt[0x24 / 4]);
        if (fn_get(item)->empty()) {
            std::string gen_str(reinterpret_cast<const char*>(mem_0092A0D0));
            ext_0047C190(self, &gen_str);
            auto fn_set = reinterpret_cast<void(__thiscall*)(void*, std::string*)>(vt[0x5C / 4]);
            fn_set(item, &gen_str);
            ext_004797D0(lift_ptr<void>(self, 0x40), &gen_str, it);
        }
    }

    void* g594 = ext_00594000();
    if (g594) {
        std::string s_key(mem_00A9EE9C);
        ext_0059A8D0(g594, &s_key, lift_ptr<void>(self, 0x50));
    }

    if (lift_field<void*>(self, 0x558)) {
        reportProgress(lift_field<void*>(self, 0x558), max_t - min_t, reinterpret_cast<const char*>(mem_0093C220));
    }

    if (version == 1) {
        for (void** it = lift_field<void**>(m5c, 4); it != lift_field<void**>(m5c, 8); ++it) {
            void* casted = ext_006A6E9E(*it, 0, mem_00A2E914, mem_00A32928, 0);
            if (casted && lift_field<int32_t>(casted, 0x180) == 5) {
                void** vt = *reinterpret_cast<void***>(casted);
                auto fn_138 = reinterpret_cast<void(__thiscall*)(void*, int32_t)>(vt[0x138 / 4]);
                fn_138(casted, 6);
            }
        }
        lift_field<int32_t>(self, 0x534) = 3;
    } else if (version < 4) {
        lift_field<int32_t>(self, 0x534) = 3;
    } else {
        void* prop = ext_0063EFE0(xmlNode, mem_00A9F558);
        std::string tmp;
        std::string* s = reinterpret_cast<std::string*>(ext_004275C0(&prop, &tmp));
        lift_field<int32_t>(self, 0x534) = std::atoi(s->c_str());
    }

    void* world_node = normalizeSentinel(ext_0063F530(xmlNode, mem_00A9F414, 0, 1));
    reportProgress(lift_field<void*>(self, 0x558), 0, reinterpret_cast<const char*>(mem_0093C20C));

    if (terrain_obj && !isSentinelNode(world_node)) {
        void* sub_w = normalizeSentinel(ext_0063F530(world_node, mem_00A9EDAC, 0, 1));
        ext_00589D40(terrain_obj, sub_w);
    }

    void* chans_node = normalizeSentinel(ext_0063F530(xmlNode, mem_00A9EFB0, 0, 1));
    void* chans_vec = lift_ptr<void>(chans_node, 0x24);
    CheckedVecIter c_it{chans_vec, chans_vec, lift_field<void*>(chans_vec, 4)};
    ext_00427A60(&c_it);
    CheckedVecIter c_end{chans_vec, chans_vec, lift_field<void*>(chans_vec, 8)};
    ext_00427A60(&c_end);
    while (c_it.ptr < c_end.ptr) {
        void* elem = *reinterpret_cast<void**>(c_it.ptr);
        void* ch_obj = ext_00559790(elem);
        std::string ch_name(lift_field<std::string>(elem, 4));
        ext_00479890(lift_ptr<void>(self, 0x518), ch_name, ch_obj);
        c_it.ptr = static_cast<uint8_t*>(c_it.ptr) + 4;
    }

    if (lift_field<void*>(self, 0x558)) {
        int32_t diff = lift_field<int32_t>(chans_node, 0x5C) - lift_field<int32_t>(chans_node, 0x50);
        reportProgress(lift_field<void*>(self, 0x558), diff, reinterpret_cast<const char*>(mem_0093C1F8));
    }

    void* anim_node = normalizeSentinel(ext_0063F530(xmlNode, mem_00A9ED2C, 0, 1));
    ext_004C4A40(lift_ptr<void>(self, 8), anim_node, lift_field<void*>(self, 0x558));

    if (lift_field<void*>(self, 0x558)) {
        reportProgress(lift_field<void*>(self, 0x558), 0, reinterpret_cast<const char*>(mem_0093C1E4));
        int32_t diff = lift_field<int32_t>(xmlNode, 0x5C) - lift_field<int32_t>(xmlNode, 0x50);
        void** vt = *reinterpret_cast<void***>(lift_field<void*>(self, 0x558));
        auto fn_4 = reinterpret_cast<void(__thiscall*)(void*, int32_t)>(vt[1]);
        fn_4(lift_field<void*>(self, 0x558), diff);
    }

    if (lift_field<void*>(self, 0x514)) {
        void* n = normalizeSentinel(ext_0063F530(xmlNode, mem_00A9EF6C, 0, 1));
        ext_004B58C0(lift_field<void*>(self, 0x514), n);
    }

    {
        void* n = normalizeSentinel(ext_0063F530(xmlNode, mem_00A9F3DC, 0, 1));
        ext_004D0760(lift_ptr<void>(self, 0x238), n);
    }

    if (terrain_obj) {
        void* n1 = normalizeSentinel(ext_0063F530(xmlNode, mem_00A9F084, 0, 1));
        ext_00493F40(lift_ptr<void>(terrain_obj, 0x258), n1);
        void* n2 = normalizeSentinel(ext_0063F530(xmlNode, mem_00A9EEC8, 0, 1));
        ext_006755F0(lift_field<void*>(terrain_obj, 0x274), n2);
    }

    {
        void* m18 = lift_ptr<void>(self, 0x18);
        void* head = lift_field<void*>(m18, 4);
        CheckedTreeIter t_it{m18, lift_field<void*>(head, 0)};
        while (t_it.node != head) {
            void* ch = lift_field<void*>(t_it.node, 0x28);
            ext_0047D300(self, ch);
            ext_0047C480(self, lift_field<void*>(t_it.node, 0x28));
            ext_00673C20(&t_it);
        }
    }

    ext_004C4440(lift_field<void*>(self, 0x28), xmlNode);
    ext_0047D720(self);
    lift_field<void*>(self, 0x558) = nullptr;
}
} // namespace lift_0047DD50
