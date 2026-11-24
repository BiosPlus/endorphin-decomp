// Lifted C++ translation unit: lifted/leaf/decompiled_560000.cpp
#include "lift_compat.h"
#include <string>

// [0x005694F0] sub_005694F0 (27 bytes)
namespace lift_005694F0 {
extern void __cdecl ext_005693E0(int a1, int a2, void* self, int a4);

// @name DestroyRangeForward_005694F0
// @class (none)
// @summary Forwards two stack arguments plus the incoming ECX value to ext_005693E0 (range destroy helper).
void fn_005694F0(void* self, int edx_unused, int a1, int a2) {
    // Original: push a2, push ecx, push a2, push a1, call ext_005693E0(a1, a2, self, a2).
    ext_005693E0(a1, a2, self, a2);
}
} // namespace lift_005694F0

// [0x005649D0] sub_005649D0 (34 bytes)
namespace lift_005649D0 {
// Known callee 0x007C569A: thunk_XSIFtk-3.6.2.1_?Open@CSLScene@@QAEHPAD@Z
// (IAT jump thunk forwarding to XSIFtk-3.6.2.1!?Open@CSLScene@@QAEHPAD@Z).
// Original is a thiscall (this in ecx, one stack arg) returning BOOL-like int.
extern int ext_007C569A(void* scene, const char* path);

// @name Unknown::openSceneFromString
// @class Unknown
// @summary Opens the scene stored at this+0x494 using the C string of a std::string argument; returns true on failure (sete of Open's zero-check).
// @field Unknown +0x494 void* field_0x494
bool fn_005649D0(void* self, const std::string* path) {
    // Original: c_str() via MSVCP80 IAT slot (mem_00924FF0), then CSLScene::Open(path).
    // Portable form: path->c_str(); the IAT indirection is just the import for c_str.
    void* scene = lift_field<void*>(self, 0x494);
    int result = ext_007C569A(scene, path->c_str());
    return result == 0;
}
} // namespace lift_005649D0

// [0x005631F0]
namespace lift_005631F0 {
// @name isMeshOrNurbsPrimitive
// @summary Checks whether a CSLModel pointer is non-null and has primitive type 0x1b or 0x1c.


extern uint32_t __thiscall ext_007C5610(void* self);

extern bool __stdcall fn_005631F0(void* model) {
    if (!model) {
        return false;
    }
    uint32_t prim_type = ext_007C5610(model);
    return prim_type == 0x1b || prim_type == 0x1c;
}
} // namespace lift_005631F0

// [0x005650F0]
namespace lift_005650F0 {
// @name writeAndCloseXSIScene
// @class UnknownClass
// @summary Writes the XSI scene using the filename at +0x478 and closes the CSLScene at +0x494.
// @field UnknownClass +0x478 std::string field_0x478
// @field UnknownClass +0x494 void* field_0x494


extern uint32_t mem_00924FF0;
extern int __thiscall ext_007C5712(void* self, const char* filename);
extern int __thiscall ext_007C570C(void* self);

extern int __thiscall fn_005650F0(void* self) {
    auto* base = static_cast<uint8_t*>(self);
    using c_str_fn = const char* (__thiscall*)(const void*);
    const char* filename = reinterpret_cast<c_str_fn>(static_cast<uintptr_t>(mem_00924FF0))(base + 0x478);

    void* scene = *reinterpret_cast<void**>(base + 0x494);
    ext_007C5712(scene, filename);
    return ext_007C570C(scene);
}
} // namespace lift_005650F0

// [0x00564FE0]
namespace lift_00564FE0 {
// @name setSceneFileOriginator
// @summary Sets the originator on the scene's CSLFileInfo from a global std::string if FileInfo is non-null.
// @field Unknown +0x494 void* scene


extern void* __thiscall ext_007C56E8(void* scene);
extern void __thiscall ext_007C56E2(void* fileInfo, const char* originator);

extern uint32_t mem_00924FF0;
extern uint8_t mem_00B39FA0[];

extern void __thiscall fn_00564FE0(void* self) {
    void* scene = *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(self) + 0x494);
    void* fileInfo = ext_007C56E8(scene);
    if (fileInfo != nullptr) {
        using CStrFn = const char* (__thiscall*)(void*);
        const char* originator = reinterpret_cast<CStrFn>(mem_00924FF0)(mem_00B39FA0);
        ext_007C56E2(fileInfo, originator);
    }
}
} // namespace lift_00564FE0
