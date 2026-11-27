// Lifted C++ translation unit: lifted/NMData/PoseData.cpp
#include "lift_compat.h"
#include <new>
#include <string>
// Global string-literal pointer (value 0x00986778 in .data).
extern "C" const char* mem_00A9F1A4;
#include <cstdint>
#include <cstring>

#include <cstring>
namespace lift_0048C120 {
extern const char* mem_00A9F1A4;
// IAT slot for MSVCP80 basic_string(const char*, allocator) ctor; the portable
// std::string constructor below replaces the indirect call through this slot.
extern const void* mem_00924FE4;

// @name NMData::PoseData::vfunc_6
// @class NMData::PoseData
// @summary Constructs a std::string in caller-provided storage from the global string literal pointer mem_00A9F1A4 and returns it.
// (no PoseData fields are accessed; the original `this` (ecx) is clobbered and unused)
std::string* fn_0048C120(void* self, std::string* out) {
    (void)self;
    (void)&mem_00924FE4; // keep IAT slot reference (differential-test anchor)
    new (out) std::string(mem_00A9F1A4);
    return out;
}
} // namespace lift_0048C120

// [0x005B0820]
namespace lift_005B0820 {
// @name NMData::PoseData::vfunc_1
// @class NMData::PoseData
// @summary Deserializes PoseData from an XML node, loading name, mode, two transform maps, and root transform matrix
// @field NMData::PoseData +0x04 void* field_0x04
// @field NMData::PoseData +0x14 void* field_0x14
// @field NMData::PoseData +0x24 uint8_t[64] field_0x24
// @field NMData::PoseData +0x64 std::string field_0x64
// @field NMData::PoseData +0x80 uint32_t field_0x80

extern void __cdecl ext_004275E0(void* dst, void* obj);
extern void __thiscall ext_00427A60(void* self);
extern void __thiscall ext_005877B0(void* self);
extern void __thiscall ext_00593520(void* self);
extern uint32_t __cdecl ext_00593710(std::string s);
extern void __thiscall ext_00593910(void* self, void* node);
extern void __thiscall ext_005A2640(void* self, void* key, uint32_t val);
extern void __thiscall ext_005B0780(void* self);
extern void* __thiscall ext_0063EFE0(void* self, const char* name);
extern void* __thiscall ext_0063F530(void* self, const char* name, uint32_t a, uint32_t b);
extern void __thiscall ext_0065F2A0(void* self);

extern const char* mem_00A9F554;
extern const char* mem_00A9F8D8;
extern const char* mem_00A9F0C0;
extern const char* mem_00A9F838;
extern const char* mem_00A9F200;
extern const char* mem_00A9ED98;
extern void* mem_00924FF4;
extern void* mem_00925134;

namespace {

bool is_xml_sentinel(void* p) {
    uintptr_t addr = reinterpret_cast<uintptr_t>(p);
    return addr == 0x00B53A34 || addr == 0x00B53B30 ||
           addr == 0x00B53AB0 || addr == 0x00B53A70 ||
           addr == 0x00B53AF0;
}

struct CheckedVecIter {
    void* container;
    void* proxy;
    void** ptr;
};

using GetStrFn = std::string* (__thiscall*)(void* self, std::string* out);

void load_transform_map(void* xmlNode, const char* listTag, void* targetMap) {
    void* listNode = ext_0063F530(xmlNode, listTag, 0, 1);
    if (is_xml_sentinel(listNode)) {
        listNode = reinterpret_cast<void*>(0x00B53B30);
    }

    uint8_t* vec = static_cast<uint8_t*>(listNode) + 0x24;
    void** beginPtr = *reinterpret_cast<void***>(vec + 0x4);
    void** endPtr = *reinterpret_cast<void***>(vec + 0x8);

    CheckedVecIter it{vec, vec, beginPtr};
    ext_00427A60(&it);

    CheckedVecIter end{vec, vec, endPtr};
    ext_00427A60(&end);

    while (it.ptr < end.ptr) {
        uint8_t transform[0xF0];
        ext_00593520(transform);

        void* elem = *it.ptr;
        ext_00593910(transform, elem);

        void* keyNode = ext_0063EFE0(elem, mem_00A9F838);
        void** vtbl = *reinterpret_cast<void***>(keyNode);
        auto getStr = reinterpret_cast<GetStrFn>(vtbl[2]);
        std::string keyStr;
        getStr(keyNode, &keyStr);

        uint32_t valPtr = *reinterpret_cast<uint32_t*>(transform + 0xE4);
        ext_005A2640(targetMap, &keyStr, valPtr);

        ext_0065F2A0(transform + 0xE4);
        ext_005877B0(transform);

        it.ptr += 1;
        ext_00427A60(&it);
    }
}

} // namespace

void __thiscall sub_005B0820(uint8_t* self, void* xmlNode) {
    (void)mem_00924FF4;
    (void)mem_00925134;
    ext_005B0780(self);

    void* nameNode = ext_0063EFE0(xmlNode, mem_00A9F554);
    ext_004275E0(self + 0x64, nameNode);

    void* modeNode = ext_0063EFE0(xmlNode, mem_00A9F8D8);
    if (is_xml_sentinel(modeNode)) {
        *reinterpret_cast<uint32_t*>(self + 0x80) = 0;
    } else {
        void* modeNode2 = ext_0063EFE0(xmlNode, mem_00A9F8D8);
        void** vtbl = *reinterpret_cast<void***>(modeNode2);
        auto getStr = reinterpret_cast<GetStrFn>(vtbl[2]);
        std::string modeStr;
        getStr(modeNode2, &modeStr);
        *reinterpret_cast<uint32_t*>(self + 0x80) = ext_00593710(modeStr);
    }

    load_transform_map(xmlNode, mem_00A9F0C0, self + 0x04);
    load_transform_map(xmlNode, mem_00A9F200, self + 0x14);

    uint8_t transform[0xF0];
    ext_00593520(transform);
    void* rootNode = ext_0063F530(xmlNode, mem_00A9ED98, 0, 1);
    if (is_xml_sentinel(rootNode)) {
        rootNode = reinterpret_cast<void*>(0x00B53B30);
    }
    ext_00593910(transform, rootNode);
    void* matPtr = *reinterpret_cast<void**>(transform + 0xE4);
    std::memcpy(self + 0x24, matPtr, 64);
    ext_0065F2A0(transform + 0xE4);
    ext_005877B0(transform);
}
} // namespace lift_005B0820
