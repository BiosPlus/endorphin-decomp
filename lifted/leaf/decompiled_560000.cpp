// Lifted C++ translation unit: lifted/leaf/decompiled_560000.cpp
#include "lift_compat.h"
#include <string>
#include <new>
#include <cstdint>

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

// [0x00569440] sub_00569440 (41 bytes)
namespace lift_00569440 {
// @name sub_00569440
// @summary Auto-lifted identical-shape clone of 0x0044C4D0 (DWORD_RangeCopy_thiscall).
namespace lift_0044C4D0 {
// @name DWORD_RangeCopy_thiscall
// @summary Copies DWORDs from [first, last) to out via ext_0044C2A0 and returns out + count.

extern DWORD* ext_00569250(const DWORD* first, const DWORD* last, DWORD* out);

DWORD* __thiscall fn_00569440(void* self, const DWORD* first, const DWORD* last, DWORD* out) {
    (void)self;
    return ext_00569250(first, last, out);
}
} // namespace lift_0044C4D0
} // namespace lift_00569440

// [0x0056B900]
namespace lift_0056B900 {
extern uint32_t mem_read32(uint32_t addr);

// @name hasMultipleElements
// @summary Returns 1 if the 4-byte-element vector at +0x28..+0x2C has more than 1 element, else 0.
// @field Unknown +0x28 uint32_t field_0x28
// @field Unknown +0x2c uint32_t field_0x2c
uint32_t __fastcall sub_0056B900(uint32_t ecx, uint32_t edx) {
    (void)edx;
    uint32_t begin = mem_read32(ecx + 0x28);
    if (begin == 0) {
        return 0;
    }
    uint32_t end = mem_read32(ecx + 0x2c);
    uint32_t count = static_cast<uint32_t>(static_cast<int32_t>(end - begin) >> 2);
    return (count > 1u) ? 1u : 0u;
}
} // namespace lift_0056B900

// [0x00567040] sub_00567040 (45 bytes)
namespace lift_00567040 {
// @name Unknown::CopyFromSource_00567040
// @class Unknown
// @summary Writes vtable 0x00958C0C into self, copies byte +0x04 and four 32-bit words +0x08..+0x14 from src, returns self.
// @field Unknown +0x00 uint32_t field_0x00
// @field Unknown +0x04 uint8_t field_0x04
// @field Unknown +0x08 float field_0x08
// @field Unknown +0x0C float field_0x0C
// @field Unknown +0x10 float field_0x10
// @field Unknown +0x14 float field_0x14
void* fn_00567040(void* self, const void* src) {
    // Floats are copied as raw 32-bit words so NaN payloads are preserved exactly.
    lift_field<uint32_t>(self, 0x00) = 0x00958C0C;
    lift_field<uint8_t>(self, 0x04) = lift_field<const uint8_t>(src, 0x04);
    lift_field<uint32_t>(self, 0x08) = lift_field<const uint32_t>(src, 0x08);
    lift_field<uint32_t>(self, 0x0C) = lift_field<const uint32_t>(src, 0x0C);
    lift_field<uint32_t>(self, 0x10) = lift_field<const uint32_t>(src, 0x10);
    lift_field<uint32_t>(self, 0x14) = lift_field<const uint32_t>(src, 0x14);
    return self;
}
} // namespace lift_00567040

// [0x005632F0] sub_005632F0 (51 bytes)
namespace lift_005632F0 {
// Known callee 0x005631F0: isMeshOrNurbsPrimitive (Checks whether a CSLModel pointer is non-null and has primitive type 0x1b or 0x1c.)
extern bool __stdcall ext_005631F0(void* model);
// Callee 0x00563220 (24 bytes): thiscall, `this` in ecx, one stack argument.
extern bool __thiscall ext_00563220(void* self, void* model);

// @name CheckModelAgainstSelf
// @class <ClassName> (unknown; `this` is passed in ecx)
// @summary Returns true if model is non-null and is either a mesh/NURBS primitive or accepted by sub_00563220(this, model).
bool __thiscall fn_005632F0(void* self, void* model) {
    if (model == nullptr) {
        return false;
    }
    if (ext_005631F0(model)) {
        return true;
    }
    return ext_00563220(self, model);
}
} // namespace lift_005632F0

// [0x005694B0] sub_005694B0 (55 bytes)
namespace lift_005694B0 {
// @name sub_005694B0
// @summary Auto-lifted identical-shape clone of 0x00481DE0 (fillStructArrayAndGetEnd).
namespace lift_00481DE0 {
extern void ext_00569350(uint32_t dst, uint32_t count, uint32_t src);

// @name fillStructArrayAndGetEnd
// @summary Fills count 64-byte slots at dst with the template at src via ext_00481770 and returns dst + count*64.
// Note: the original pushes extra stack words (saved ecx, a flag dword, and a duplicate of src) that the
// callee ignores per its 3-argument signature; they are not reproduced here.
uint32_t __stdcall fn_005694B0(uint32_t dst, uint32_t count, uint32_t src) {
    ext_00569350(dst, count, src);
    return dst + (count << 4);
}
} // namespace lift_00481DE0
} // namespace lift_005694B0

// [0x005637D0] sub_005637D0 (59 bytes)
namespace lift_005637D0 {
// Known callees: thiscall-style, one stack argument, return a boolean in AL.
extern uint8_t ext_00563220(void* self, uint32_t arg);
extern uint8_t ext_00563240(void* self, uint32_t arg);
extern uint8_t ext_00563260(void* self, uint32_t arg);

// @name sub_005637D0
// @class (none)
// @summary Returns true if any of three predicate callees (ext_00563220, ext_00563240, ext_00563260) returns true for the argument; short-circuits in that order.
// @field (none: function does not access this-relative fields; self is only forwarded)
bool fn_005637D0(void* self, uint32_t arg) {
    if (ext_00563220(self, arg) != 0) {
        return true;
    }
    if (ext_00563240(self, arg) != 0) {
        return true;
    }
    if (ext_00563260(self, arg) != 0) {
        return true;
    }
    return false;
}
} // namespace lift_005637D0

// [0x00569970]
namespace lift_00569970 {
extern void ext_005693E0(uint32_t a0, uint32_t a1, void* a2, void* a3);
extern void fn_006A5C5C(uint32_t arg);

// @name Unknown::ReleaseHandleAndClear
// @class Unknown
// @summary If field +0x04 is nonzero, run ext_005693E0 with it and forward it to fn_006A5C5C, then clear fields +0x04, +0x08 and +0x0C.
// @field Unknown +0x04 uint32_t field_0x04
// @field Unknown +0x08 uint32_t field_0x08
// @field Unknown +0x0C uint32_t field_0x0C
void fn_00569970(void* self) {
    if (lift_field<uint32_t>(self, 0x4) != 0) {
        // Argument order matches the original pushes: a0 = f04, a1 = f08, a2 = self, a3 = ecx (self).
        ext_005693E0(lift_field<uint32_t>(self, 0x4),
                     lift_field<uint32_t>(self, 0x8),
                     self,
                     self);
        fn_006A5C5C(lift_field<uint32_t>(self, 0x4));
    }
    lift_field<uint32_t>(self, 0x4) = 0;
    lift_field<uint32_t>(self, 0x8) = 0;
    lift_field<uint32_t>(self, 0xC) = 0;
}
} // namespace lift_00569970

// [0x00566380] sub_00566380 (25 bytes)
namespace lift_00566380 {
// @name sub_00566380
// @summary Auto-lifted identical-shape clone of 0x005AAD10 (ObjectWithChild::SetValueFromStringKey).
namespace lift_005AAD10 {
// @name ObjectWithChild::SetValueFromStringKey
// @class ObjectWithChild
// @summary Looks up a key in a 7-entry string table and stores the resulting index on the object via setValueAndNotifyChild.

extern int __stdcall ext_00565120(const void* key);
extern void ext_00565F00(uint8_t* self, int32_t value);

void fn_00566380(uint8_t* self, const void* key) {
    int32_t index = ext_00565120(key);
    ext_00565F00(self, index);
}
} // namespace lift_005AAD10
} // namespace lift_00566380

// [0x00565010] sub_00565010 (67 bytes)
namespace lift_00565010 {
// Known callee 0x007C56AC: thunk_XSIFtk-3.6.2.1_?Angle@CSLScene@@QAEPAVCSLAngle@@XZ (IAT jump thunk forwarding to XSIFtk-3.6.2.1!?Angle@CSLScene@@QAEPAVCSLAngle@@XZ.)
extern void ext_007C56AC();
// Known callee 0x007C56EE: thunk_XSIFtk-3.6.2.1_?SetAngleType@CSLAngle@@QAEXW4EAngleType@1@@Z (IAT jump thunk forwarding to XSIFtk-3.6.2.1!?SetAngleType@CSLAngle@@QAEXW4EAngleType@1@@Z.)
extern void ext_007C56EE();

// @name UnknownClass::updateAngleTypeFromField194
// @class UnknownClass
// @summary Looks up the CSLAngle from the scene at +0x494, sets its angle type to 0, then sets it again to 0 or 1 based on the mode at +0x194 (other values leave it at 0).
// @field UnknownClass +0x194 int32_t field_0x194
// @field UnknownClass +0x494 void* field_0x494
void fn_00565010(void* self) {
    auto* base = reinterpret_cast<uint8_t*>(self);
    auto* scene = lift_field<void*>(base, 0x494);

    // CSLScene::Angle (thiscall: this = scene) -> CSLAngle*
    using AngleFn = void* (*)(void*);
    void* angle = reinterpret_cast<AngleFn>(ext_007C56AC)(scene);
    if (angle == nullptr) {
        return;
    }

    // CSLAngle::SetAngleType (thiscall: this = angle, stack arg = type)
    using SetAngleTypeFn = void (*)(void*, int32_t);
    auto setAngleType = reinterpret_cast<SetAngleTypeFn>(ext_007C56EE);

    setAngleType(angle, 0);

    int32_t mode = lift_field<int32_t>(base, 0x194);
    if (mode == 0) {
        setAngleType(angle, 0);
    } else if (mode == 1) {
        setAngleType(angle, 1);
    }
}
} // namespace lift_00565010

// [0x00569470] sub_00569470 (64 bytes)
namespace lift_00569470 {
// Known callee 0x00681250: swapBackwardElementTails16 (Walks two 16-byte-stride ranges backward from their end pointers, swapping the 12 bytes at offsets +4..+15 of each element pair; returns the adjusted destination end pointer.)
extern uint32_t ext_00681250(uint32_t first, uint32_t last, uint32_t destEnd);

// @name swapTailsAndAdjustDestEnd
// @summary Swaps 16-byte element tails over [first,last) via ext_00681250, then returns destEnd minus the byte span of (last-first) rounded down to a multiple of 16.
uint32_t fn_00569470(uint32_t first, uint32_t last, uint32_t destEnd) {
    (void)ext_00681250(first, last, destEnd);

    // Signed span, arithmetic shift right then left by 4 (floor to multiple of 16).
    int32_t span = static_cast<int32_t>(last - first);
    uint32_t rounded = static_cast<uint32_t>(span >> 4) << 4;
    return destEnd - rounded;
}
} // namespace lift_00569470

// [0x00566FF0] sub_00566FF0 (73 bytes)
namespace lift_00566FF0 {
extern void ext_00610AF0(void* self);
// Known callee 0x00661980: setVtable_0093BFB4 (Stores the vtable address 0x0093BFB4 into the first dword of the object pointed to by ECX (this).)
extern void ext_00661980(void* self);

// @name Unknown::ConstructWithVtable_00566FF0
// @class Unknown
// @summary Runs the base initializer ext_00661980, stores vtable 0x00958C0C at offset 0, runs ext_00610AF0 on the object, and returns self.
// @field Unknown +0x00 uint32_t vtable
void* fn_00566FF0(void* self) {
    ext_00661980(self);
    *reinterpret_cast<uint32_t*>(self) = 0x00958C0Cu;
    ext_00610AF0(self);
    return self;
}
} // namespace lift_00566FF0
