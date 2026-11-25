// Lifted C++ translation unit: lifted/templates/SearchableMap.cpp
#include "lift_compat.h"

// [0x0042E7B0]
namespace lift_0042E7B0 {
namespace lift_0042E7B0 {
// Known callee 0x004280C0: TreeMap::findInsertPoint (returns (map, node) as a pair)
struct TreeMapLookupResult {
    void* first;
    void* second;
};
extern TreeMapLookupResult ext_004280C0(void* self, const void* key);
// MSVCRT _invalid_parameter_noinfo import slot (0x00925134)
extern void (*mem_00925134)();

// @name SearchableMap<KeyMapping, GetNameFromAttribute<KeyMapping>>::vfunc_0
// @class SearchableMap<KeyMapping, GetNameFromAttribute<KeyMapping>>
// @summary Looks up a string key in the embedded tree map; returns the node payload (node+0x28), or null if the map is empty or the key is absent.
// @field SearchableMap<KeyMapping,GetNameFromAttribute<KeyMapping>> +0x04 void* field_0x04
// @field SearchableMap<KeyMapping,GetNameFromAttribute<KeyMapping>> +0x08 void* field_0x08
// @field SearchableMap<KeyMapping,GetNameFromAttribute<KeyMapping>> +0x0C DWORD field_0x0C
void* fn_0042E7B0(void* self, const void* key) {
    char* base = static_cast<char*>(self);

    if (*reinterpret_cast<DWORD*>(base + 0x0C) == 0) {
        return nullptr;
    }

    char* mapPtr = base + 0x04;
    TreeMapLookupResult r = ext_004280C0(mapPtr, key);

    if (r.first == nullptr || r.first != mapPtr) {
        mem_00925134();
    }

    void* node = r.second;
    void* header = *reinterpret_cast<void**>(mapPtr + 0x04);
    if (node == header) {
        return nullptr;
    }

    if (r.first == nullptr) {
        mem_00925134();
    }
    if (node == *reinterpret_cast<void**>(static_cast<char*>(r.first) + 0x04)) {
        mem_00925134();
    }

    return static_cast<char*>(node) + 0x28;
}
} // namespace lift_0042E7B0
} // namespace lift_0042E7B0
