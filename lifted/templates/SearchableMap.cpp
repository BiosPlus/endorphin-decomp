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

// [0x0048BC10] SearchableMap<NM::Matrix4, GetNameFromAttribute<NM::Matrix4>>::vfunc_0 (110 bytes)
namespace lift_0048BC10 {
// @name SearchableMap<NM::Matrix4, GetNameFromAttribute<NM::Matrix4>>::vfunc_0
// @class SearchableMap<NM::Matrix4, GetNameFromAttribute<NM::Matrix4>>
// @summary Auto-lifted identical-shape clone of 0x0042E7B0 (SearchableMap<KeyMapping, GetNameFromAttribute<KeyMapping>>::vfunc_0).
namespace lift_0042E7B0 {
namespace lift_0042E7B0 {
// Known callee 0x004280C0: TreeMap::findInsertPoint (returns (map, node) as a pair)
struct TreeMapLookupResult {
    void* first;
    void* second;
};
extern TreeMapLookupResult ext_0048BBA0(void* self, const void* key);
// MSVCRT _invalid_parameter_noinfo import slot (0x00925134)
extern void (*mem_00925134)();

// @name SearchableMap<KeyMapping, GetNameFromAttribute<KeyMapping>>::vfunc_0
// @class SearchableMap<KeyMapping, GetNameFromAttribute<KeyMapping>>
// @summary Looks up a string key in the embedded tree map; returns the node payload (node+0x28), or null if the map is empty or the key is absent.
// @field SearchableMap<KeyMapping,GetNameFromAttribute<KeyMapping>> +0x04 void* field_0x04
// @field SearchableMap<KeyMapping,GetNameFromAttribute<KeyMapping>> +0x08 void* field_0x08
// @field SearchableMap<KeyMapping,GetNameFromAttribute<KeyMapping>> +0x0C DWORD field_0x0C
void* fn_0048BC10(void* self, const void* key) {
    char* base = static_cast<char*>(self);

    if (*reinterpret_cast<DWORD*>(base + 0x0C) == 0) {
        return nullptr;
    }

    char* mapPtr = base + 0x04;
    TreeMapLookupResult r = ext_0048BBA0(mapPtr, key);

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
} // namespace lift_0048BC10

// [0x004A74B0] SearchableMap<NMData::PoseData, GetNameFromAttribute<NMData::PoseData>>::vfunc_0 (110 bytes)
namespace lift_004A74B0 {
// @name SearchableMap<NMData::PoseData, GetNameFromAttribute<NMData::PoseData>>::vfunc_0
// @class SearchableMap<NMData::PoseData, GetNameFromAttribute<NMData::PoseData>>
// @summary Auto-lifted identical-shape clone of 0x0042E7B0 (SearchableMap<KeyMapping, GetNameFromAttribute<KeyMapping>>::vfunc_0).
namespace lift_0042E7B0 {
namespace lift_0042E7B0 {
// Known callee 0x004280C0: TreeMap::findInsertPoint (returns (map, node) as a pair)
struct TreeMapLookupResult {
    void* first;
    void* second;
};
extern TreeMapLookupResult ext_004A7440(void* self, const void* key);
// MSVCRT _invalid_parameter_noinfo import slot (0x00925134)
extern void (*mem_00925134)();

// @name SearchableMap<KeyMapping, GetNameFromAttribute<KeyMapping>>::vfunc_0
// @class SearchableMap<KeyMapping, GetNameFromAttribute<KeyMapping>>
// @summary Looks up a string key in the embedded tree map; returns the node payload (node+0x28), or null if the map is empty or the key is absent.
// @field SearchableMap<KeyMapping,GetNameFromAttribute<KeyMapping>> +0x04 void* field_0x04
// @field SearchableMap<KeyMapping,GetNameFromAttribute<KeyMapping>> +0x08 void* field_0x08
// @field SearchableMap<KeyMapping,GetNameFromAttribute<KeyMapping>> +0x0C DWORD field_0x0C
void* fn_004A74B0(void* self, const void* key) {
    char* base = static_cast<char*>(self);

    if (*reinterpret_cast<DWORD*>(base + 0x0C) == 0) {
        return nullptr;
    }

    char* mapPtr = base + 0x04;
    TreeMapLookupResult r = ext_004A7440(mapPtr, key);

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
} // namespace lift_004A74B0

// [0x004EC3F0] SearchableMap<std::basic_string<char, std::char_traits<char>, std::allocator<char>>, GetNameFromAttribute<std::basic_string<char, std::char_traits<char>, std::allocator<char>>>>::vfunc_0 (110 bytes)
namespace lift_004EC3F0 {
// @name SearchableMap<std::basic_string<char, std::char_traits<char>, std::allocator<char>>, GetNameFromAttribute<std::basic_string<char, std::char_traits<char>, std::allocator<char>>>>::vfunc_0
// @class SearchableMap<std::basic_string<char, std::char_traits<char>, std::allocator<char>>, GetNameFromAttribute<std::basic_string<char, std::char_traits<char>, std::allocator<char>>>>
// @summary Auto-lifted identical-shape clone of 0x0042E7B0 (SearchableMap<KeyMapping, GetNameFromAttribute<KeyMapping>>::vfunc_0).
namespace lift_0042E7B0 {
namespace lift_0042E7B0 {
// Known callee 0x004280C0: TreeMap::findInsertPoint (returns (map, node) as a pair)
struct TreeMapLookupResult {
    void* first;
    void* second;
};
extern TreeMapLookupResult ext_004EC380(void* self, const void* key);
// MSVCRT _invalid_parameter_noinfo import slot (0x00925134)
extern void (*mem_00925134)();

// @name SearchableMap<KeyMapping, GetNameFromAttribute<KeyMapping>>::vfunc_0
// @class SearchableMap<KeyMapping, GetNameFromAttribute<KeyMapping>>
// @summary Looks up a string key in the embedded tree map; returns the node payload (node+0x28), or null if the map is empty or the key is absent.
// @field SearchableMap<KeyMapping,GetNameFromAttribute<KeyMapping>> +0x04 void* field_0x04
// @field SearchableMap<KeyMapping,GetNameFromAttribute<KeyMapping>> +0x08 void* field_0x08
// @field SearchableMap<KeyMapping,GetNameFromAttribute<KeyMapping>> +0x0C DWORD field_0x0C
void* fn_004EC3F0(void* self, const void* key) {
    char* base = static_cast<char*>(self);

    if (*reinterpret_cast<DWORD*>(base + 0x0C) == 0) {
        return nullptr;
    }

    char* mapPtr = base + 0x04;
    TreeMapLookupResult r = ext_004EC380(mapPtr, key);

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
} // namespace lift_004EC3F0

// [0x0052EC10] SearchableMap<Material, GetNameFromAttribute<Material>>::vfunc_0 (110 bytes)
namespace lift_0052EC10 {
// @name SearchableMap<Material, GetNameFromAttribute<Material>>::vfunc_0
// @class SearchableMap<Material, GetNameFromAttribute<Material>>
// @summary Auto-lifted identical-shape clone of 0x0042E7B0 (SearchableMap<KeyMapping, GetNameFromAttribute<KeyMapping>>::vfunc_0).
namespace lift_0042E7B0 {
namespace lift_0042E7B0 {
// Known callee 0x004280C0: TreeMap::findInsertPoint (returns (map, node) as a pair)
struct TreeMapLookupResult {
    void* first;
    void* second;
};
extern TreeMapLookupResult ext_0052EBA0(void* self, const void* key);
// MSVCRT _invalid_parameter_noinfo import slot (0x00925134)
extern void (*mem_00925134)();

// @name SearchableMap<KeyMapping, GetNameFromAttribute<KeyMapping>>::vfunc_0
// @class SearchableMap<KeyMapping, GetNameFromAttribute<KeyMapping>>
// @summary Looks up a string key in the embedded tree map; returns the node payload (node+0x28), or null if the map is empty or the key is absent.
// @field SearchableMap<KeyMapping,GetNameFromAttribute<KeyMapping>> +0x04 void* field_0x04
// @field SearchableMap<KeyMapping,GetNameFromAttribute<KeyMapping>> +0x08 void* field_0x08
// @field SearchableMap<KeyMapping,GetNameFromAttribute<KeyMapping>> +0x0C DWORD field_0x0C
void* fn_0052EC10(void* self, const void* key) {
    char* base = static_cast<char*>(self);

    if (*reinterpret_cast<DWORD*>(base + 0x0C) == 0) {
        return nullptr;
    }

    char* mapPtr = base + 0x04;
    TreeMapLookupResult r = ext_0052EBA0(mapPtr, key);

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
} // namespace lift_0052EC10

// [0x0059B070] SearchableMap<NM::Color *, GetNameFromAttribute<NM::Color *>>::vfunc_0 (110 bytes)
namespace lift_0059B070 {
// @name SearchableMap<NM::Color *, GetNameFromAttribute<NM::Color *>>::vfunc_0
// @class SearchableMap<NM::Color *, GetNameFromAttribute<NM::Color *>>
// @summary Auto-lifted identical-shape clone of 0x0042E7B0 (SearchableMap<KeyMapping, GetNameFromAttribute<KeyMapping>>::vfunc_0).
namespace lift_0042E7B0 {
namespace lift_0042E7B0 {
// Known callee 0x004280C0: TreeMap::findInsertPoint (returns (map, node) as a pair)
struct TreeMapLookupResult {
    void* first;
    void* second;
};
extern TreeMapLookupResult ext_005A07A0(void* self, const void* key);
// MSVCRT _invalid_parameter_noinfo import slot (0x00925134)
extern void (*mem_00925134)();

// @name SearchableMap<KeyMapping, GetNameFromAttribute<KeyMapping>>::vfunc_0
// @class SearchableMap<KeyMapping, GetNameFromAttribute<KeyMapping>>
// @summary Looks up a string key in the embedded tree map; returns the node payload (node+0x28), or null if the map is empty or the key is absent.
// @field SearchableMap<KeyMapping,GetNameFromAttribute<KeyMapping>> +0x04 void* field_0x04
// @field SearchableMap<KeyMapping,GetNameFromAttribute<KeyMapping>> +0x08 void* field_0x08
// @field SearchableMap<KeyMapping,GetNameFromAttribute<KeyMapping>> +0x0C DWORD field_0x0C
void* fn_0059B070(void* self, const void* key) {
    char* base = static_cast<char*>(self);

    if (*reinterpret_cast<DWORD*>(base + 0x0C) == 0) {
        return nullptr;
    }

    char* mapPtr = base + 0x04;
    TreeMapLookupResult r = ext_005A07A0(mapPtr, key);

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
} // namespace lift_0059B070

// [0x0059B1E0] SearchableMap<NMData::ValuePtrData, GetNameFromElement<NMData::ValuePtrData>>::vfunc_0 (110 bytes)
namespace lift_0059B1E0 {
// @name SearchableMap<NMData::ValuePtrData, GetNameFromElement<NMData::ValuePtrData>>::vfunc_0
// @class SearchableMap<NMData::ValuePtrData, GetNameFromElement<NMData::ValuePtrData>>
// @summary Auto-lifted identical-shape clone of 0x0042E7B0 (SearchableMap<KeyMapping, GetNameFromAttribute<KeyMapping>>::vfunc_0).
namespace lift_0042E7B0 {
namespace lift_0042E7B0 {
// Known callee 0x004280C0: TreeMap::findInsertPoint (returns (map, node) as a pair)
struct TreeMapLookupResult {
    void* first;
    void* second;
};
extern TreeMapLookupResult ext_0059B170(void* self, const void* key);
// MSVCRT _invalid_parameter_noinfo import slot (0x00925134)
extern void (*mem_00925134)();

// @name SearchableMap<KeyMapping, GetNameFromAttribute<KeyMapping>>::vfunc_0
// @class SearchableMap<KeyMapping, GetNameFromAttribute<KeyMapping>>
// @summary Looks up a string key in the embedded tree map; returns the node payload (node+0x28), or null if the map is empty or the key is absent.
// @field SearchableMap<KeyMapping,GetNameFromAttribute<KeyMapping>> +0x04 void* field_0x04
// @field SearchableMap<KeyMapping,GetNameFromAttribute<KeyMapping>> +0x08 void* field_0x08
// @field SearchableMap<KeyMapping,GetNameFromAttribute<KeyMapping>> +0x0C DWORD field_0x0C
void* fn_0059B1E0(void* self, const void* key) {
    char* base = static_cast<char*>(self);

    if (*reinterpret_cast<DWORD*>(base + 0x0C) == 0) {
        return nullptr;
    }

    char* mapPtr = base + 0x04;
    TreeMapLookupResult r = ext_0059B170(mapPtr, key);

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
} // namespace lift_0059B1E0

// [0x0059B350] SearchableMap<ValuePtr, GetNameFromAttribute<ValuePtr>>::vfunc_0 (110 bytes)
namespace lift_0059B350 {
// @name SearchableMap<ValuePtr, GetNameFromAttribute<ValuePtr>>::vfunc_0
// @class SearchableMap<ValuePtr, GetNameFromAttribute<ValuePtr>>
// @summary Auto-lifted identical-shape clone of 0x0042E7B0 (SearchableMap<KeyMapping, GetNameFromAttribute<KeyMapping>>::vfunc_0).
namespace lift_0042E7B0 {
namespace lift_0042E7B0 {
// Known callee 0x004280C0: TreeMap::findInsertPoint (returns (map, node) as a pair)
struct TreeMapLookupResult {
    void* first;
    void* second;
};
extern TreeMapLookupResult ext_0059B2E0(void* self, const void* key);
// MSVCRT _invalid_parameter_noinfo import slot (0x00925134)
extern void (*mem_00925134)();

// @name SearchableMap<KeyMapping, GetNameFromAttribute<KeyMapping>>::vfunc_0
// @class SearchableMap<KeyMapping, GetNameFromAttribute<KeyMapping>>
// @summary Looks up a string key in the embedded tree map; returns the node payload (node+0x28), or null if the map is empty or the key is absent.
// @field SearchableMap<KeyMapping,GetNameFromAttribute<KeyMapping>> +0x04 void* field_0x04
// @field SearchableMap<KeyMapping,GetNameFromAttribute<KeyMapping>> +0x08 void* field_0x08
// @field SearchableMap<KeyMapping,GetNameFromAttribute<KeyMapping>> +0x0C DWORD field_0x0C
void* fn_0059B350(void* self, const void* key) {
    char* base = static_cast<char*>(self);

    if (*reinterpret_cast<DWORD*>(base + 0x0C) == 0) {
        return nullptr;
    }

    char* mapPtr = base + 0x04;
    TreeMapLookupResult r = ext_0059B2E0(mapPtr, key);

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
} // namespace lift_0059B350

// [0x00667F10] SearchableMap<FileProject::File, GetNameFromAttribute<FileProject::File>>::vfunc_0 (110 bytes)
namespace lift_00667F10 {
// @name SearchableMap<FileProject::File, GetNameFromAttribute<FileProject::File>>::vfunc_0
// @class SearchableMap<FileProject::File, GetNameFromAttribute<FileProject::File>>
// @summary Auto-lifted identical-shape clone of 0x0042E7B0 (SearchableMap<KeyMapping, GetNameFromAttribute<KeyMapping>>::vfunc_0).
namespace lift_0042E7B0 {
namespace lift_0042E7B0 {
// Known callee 0x004280C0: TreeMap::findInsertPoint (returns (map, node) as a pair)
struct TreeMapLookupResult {
    void* first;
    void* second;
};
extern TreeMapLookupResult ext_00667EA0(void* self, const void* key);
// MSVCRT _invalid_parameter_noinfo import slot (0x00925134)
extern void (*mem_00925134)();

// @name SearchableMap<KeyMapping, GetNameFromAttribute<KeyMapping>>::vfunc_0
// @class SearchableMap<KeyMapping, GetNameFromAttribute<KeyMapping>>
// @summary Looks up a string key in the embedded tree map; returns the node payload (node+0x28), or null if the map is empty or the key is absent.
// @field SearchableMap<KeyMapping,GetNameFromAttribute<KeyMapping>> +0x04 void* field_0x04
// @field SearchableMap<KeyMapping,GetNameFromAttribute<KeyMapping>> +0x08 void* field_0x08
// @field SearchableMap<KeyMapping,GetNameFromAttribute<KeyMapping>> +0x0C DWORD field_0x0C
void* fn_00667F10(void* self, const void* key) {
    char* base = static_cast<char*>(self);

    if (*reinterpret_cast<DWORD*>(base + 0x0C) == 0) {
        return nullptr;
    }

    char* mapPtr = base + 0x04;
    TreeMapLookupResult r = ext_00667EA0(mapPtr, key);

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
} // namespace lift_00667F10

// [0x00668D80] SearchableMap<NM::Vector4, GetNameFromAttribute<NM::Vector4>>::vfunc_0 (110 bytes)
namespace lift_00668D80 {
// @name SearchableMap<NM::Vector4, GetNameFromAttribute<NM::Vector4>>::vfunc_0
// @class SearchableMap<NM::Vector4, GetNameFromAttribute<NM::Vector4>>
// @summary Auto-lifted identical-shape clone of 0x0042E7B0 (SearchableMap<KeyMapping, GetNameFromAttribute<KeyMapping>>::vfunc_0).
namespace lift_0042E7B0 {
namespace lift_0042E7B0 {
// Known callee 0x004280C0: TreeMap::findInsertPoint (returns (map, node) as a pair)
struct TreeMapLookupResult {
    void* first;
    void* second;
};
extern TreeMapLookupResult ext_00668D10(void* self, const void* key);
// MSVCRT _invalid_parameter_noinfo import slot (0x00925134)
extern void (*mem_00925134)();

// @name SearchableMap<KeyMapping, GetNameFromAttribute<KeyMapping>>::vfunc_0
// @class SearchableMap<KeyMapping, GetNameFromAttribute<KeyMapping>>
// @summary Looks up a string key in the embedded tree map; returns the node payload (node+0x28), or null if the map is empty or the key is absent.
// @field SearchableMap<KeyMapping,GetNameFromAttribute<KeyMapping>> +0x04 void* field_0x04
// @field SearchableMap<KeyMapping,GetNameFromAttribute<KeyMapping>> +0x08 void* field_0x08
// @field SearchableMap<KeyMapping,GetNameFromAttribute<KeyMapping>> +0x0C DWORD field_0x0C
void* fn_00668D80(void* self, const void* key) {
    char* base = static_cast<char*>(self);

    if (*reinterpret_cast<DWORD*>(base + 0x0C) == 0) {
        return nullptr;
    }

    char* mapPtr = base + 0x04;
    TreeMapLookupResult r = ext_00668D10(mapPtr, key);

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
} // namespace lift_00668D80
