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

// [0x00563330] sub_00563330 (97 bytes)
namespace lift_00563330 {
// Known callee 0x005632F0: CheckModelAgainstSelf (Returns true if model is non-null and is either a mesh/NURBS primitive or accepted by sub_00563220(this, model).)
extern bool __thiscall ext_005632F0(void* self, void* model);
// Known callee 0x007C5616: thunk_XSIFtk-3.6.2.1_?GetChildrenList@CSLModel@@QAEPAPAV1@XZ (IAT jump thunk forwarding to XSIFtk-3.6.2.1!?GetChildrenList@CSLModel@@QAEPAPAV1@XZ.)
extern void** __thiscall ext_007C5616(void* self);
// Known callee 0x007C561C: thunk_XSIFtk-3.6.2.1_?GetChildrenCount@CSLModel@@QAEHXZ (IAT jump thunk forwarding to XSIFtk-3.6.2.1!?GetChildrenCount@CSLModel@@QAEHXZ.)
extern int __thiscall ext_007C561C(void* self);

// @name CountAcceptedChildren
// @summary Counts the children of model for which self's CheckModelAgainstSelf accepts the child; returns 0 for a null model.
int __thiscall fn_00563330(void* self, void* model) {
    if (model == nullptr) {
        return 0;
    }

    int accepted = 0;
    const int count = ext_007C561C(model);
    void** children = ext_007C5616(model);

    for (int i = 0; i < count; ++i) {
        if (ext_005632F0(self, children[i])) {
            ++accepted;
        }
    }
    return accepted;
}
} // namespace lift_00563330

// [0x00563280] sub_00563280 (103 bytes)
namespace lift_00563280 {
extern BOOL ext_00563220(void* self, DWORD arg);
extern BOOL ext_00563240(void* self, DWORD arg);
extern BOOL ext_00563260(void* self, DWORD arg);

// @name CheckAgainstTwoArgs
// @summary Returns true when arg1 matches any of three predicates and arg2 matches either of two.
// @field none (no direct field accesses; `self` is only forwarded to callees)
BOOL fn_00563280(void* self, DWORD arg1, DWORD arg2) {
    BOOL first = FALSE;
    if (ext_00563220(self, arg1)) {
        first = TRUE;
    } else if (ext_00563240(self, arg1)) {
        first = TRUE;
    } else if (ext_00563260(self, arg1)) {
        first = TRUE;
    }

    BOOL second = ext_00563240(self, arg2) ? TRUE : FALSE;
    if (!second) {
        second = ext_00563260(self, arg2) ? TRUE : FALSE;
    }

    return (first && second) ? TRUE : FALSE;
}
} // namespace lift_00563280

// [0x005649D0] sub_005649D0 (34 bytes)
namespace lift_005649D0 {
// Known callee 0x007C569A: thunk_XSIFtk-3.6.2.1_?Open@CSLScene@@QAEHPAD@Z (IAT jump thunk forwarding to XSIFtk-3.6.2.1!?Open@CSLScene@@QAEHPAD@Z.)
extern void ext_007C569A();
extern int mem_00924FF0;

// @name CSLScene::OpenNamed
// @class CSLScene
// @summary Converts the std::string argument to a C string via MSVCP80 c_str, passes it to the scene's Open at self+0x494, and returns true when Open reports failure-free (returns 0).
// @field CSLScene +0x494 void* field_0x494

// __thiscall(this = self), one stack arg (std::string const&), callee-cleans 4 bytes.
bool fn_005649D0(void* self, const void* name) {
    using CStrFn = const char* (__thiscall*)(const void*);
    const char* cstr = reinterpret_cast<CStrFn>(static_cast<uintptr_t>(mem_00924FF0))(name);

    void* scene = *reinterpret_cast<void**>(static_cast<unsigned char*>(self) + 0x494);

    using OpenFn = int (__thiscall*)(void*, const char*);
    int result = reinterpret_cast<OpenFn>(&ext_007C569A)(scene, cstr);

    return result == 0;
}
} // namespace lift_005649D0

// [0x0056B900] sub_0056B900 (41 bytes)
namespace lift_0056B900 {
// @name sub_0056B900_hasMoreThanOneElement
// @summary Returns 1 if the range [+0x28, +0x2c) is non-null and spans more than one 4-byte element, else 0.
// @field Unknown +0x28 uint32_t field_0x28
// @field Unknown +0x2c uint32_t field_0x2c
int fn_0056B900(void* self) {
    const uint32_t begin = lift_field<uint32_t>(self, 0x28);
    if (begin == 0) {
        return 0;
    }
    const uint32_t end = lift_field<uint32_t>(self, 0x2c);
    const int32_t count = static_cast<int32_t>(end - begin) >> 2;
    return (1u < static_cast<uint32_t>(count)) ? 1 : 0;
}
} // namespace lift_0056B900

// [0x00569970] sub_00569970 (63 bytes)
namespace lift_00569970 {
extern void ext_005693E0(uint32_t a, uint32_t b, void* c, void* d);
// Known callee 0x006A5C5C: thunk_MFC80_ord_764 (IAT jump thunk forwarding to MFC80!ord_764.)
extern void ext_006A5C5C(uint32_t p);

// @name ReleaseAndClearHandles
// @class <ClassName> (unknown; no class name recovered from this function)
// @summary If field +0x04 is non-zero, call ext_005693E0 with the two fields and self, then release +0x04 via ext_006A5C5C; finally zero fields +0x04, +0x08, +0x0C.
// @field <ClassName> +0x04 uint32_t field_0x04
// @field <ClassName> +0x08 uint32_t field_0x08
// @field <ClassName> +0x0C uint32_t field_0x0C
void fn_00569970(void* self) {
    auto* base = static_cast<unsigned char*>(self);
    auto* f04 = reinterpret_cast<uint32_t*>(base + 0x04);
    auto* f08 = reinterpret_cast<uint32_t*>(base + 0x08);
    auto* f0c = reinterpret_cast<uint32_t*>(base + 0x0C);

    if (*f04 != 0) {
        ext_005693E0(*f04, *f08, self, self);
        ext_006A5C5C(*f04);
    }
    *f04 = 0;
    *f08 = 0;
    *f0c = 0;
}
} // namespace lift_00569970

// [0x005634D0]
namespace lift_005634D0 {
// Import thunk slots (IAT entries) used by the original asm.
extern uint32_t mem_00925754; // CSIBCString::operator!=(const char*)
extern uint32_t mem_00925750; // CSIBCString::operator=(const CSIBCString&)
extern uint32_t mem_0092574C; // CSIBCString::GetText()
extern uint32_t mem_00924FE4; // std::basic_string<char>::basic_string(const char*)

// @name FormatCSIBCStringToStdString
// @summary Copies the text of the CSIBCString at obj+0x04 into the std::string at out (first assigning a default value if the string differs from ""), and returns out.
// @field Unknown +0x04 CSIBCString field_0x04

void* __stdcall fn_005634D0(void* out, void* obj) {
    void* csi = static_cast<uint8_t*>(obj) + 0x04;

    using neq_fn_t    = bool (__thiscall*)(void* self, const char* rhs);
    using assign_fn_t = void* (__thiscall*)(void* self, const void* rhs);
    using text_fn_t   = const char* (__thiscall*)(void* self);
    using ctor_fn_t   = void (__thiscall*)(void* self, const char* s);

    auto neq = reinterpret_cast<neq_fn_t>(static_cast<uintptr_t>(mem_00925754));
    if (neq(csi, reinterpret_cast<const char*>(static_cast<uintptr_t>(0x00928B5DU)))) {
        auto assign = reinterpret_cast<assign_fn_t>(static_cast<uintptr_t>(mem_00925750));
        assign(csi, reinterpret_cast<const void*>(static_cast<uintptr_t>(0x00B39FD8U)));
    }

    auto get_text = reinterpret_cast<text_fn_t>(static_cast<uintptr_t>(mem_0092574C));
    const char* text = get_text(csi);

    auto construct = reinterpret_cast<ctor_fn_t>(static_cast<uintptr_t>(mem_00924FE4));
    construct(out, text);

    return out;
}
} // namespace lift_005634D0

// [0x00564600] sub_00564600 (81 bytes)
namespace lift_00564600 {
// Known callee 0x007C569A: thunk_XSIFtk-3.6.2.1_?Open@CSLScene@@QAEHPAD@Z (IAT jump thunk forwarding to XSIFtk-3.6.2.1!?Open@CSLScene@@QAEHPAD@Z.)
extern void ext_007C569A();
// IAT slot for MSVCP80 std::basic_string<char>::c_str
extern int mem_00924FF0;

// @name UnknownClass_openSceneFromString
// @class UnknownClass
// @summary Calls vslot 0x84 on +0x27C, optionally vslot 0x0C on +0x424 with a constant string, then returns true when CSLScene::Open(c_str(str)) on +0x494 returns zero.
// @field UnknownClass +0x27C void* field_0x27C
// @field UnknownClass +0x424 void* field_0x424
// @field UnknownClass +0x494 void* field_0x494
BOOL fn_00564600(void* self, void* str) {
    using VFn0 = void (*)(void*);
    using VFn1 = void (*)(void*, const void*);
    using CStrFn = const char* (*)(void*);
    using OpenFn = int (*)(void*, const char*);

    // Read the function pointer at byte offset `byteOff` in obj's vtable.
    auto vslot = [](void* obj, uintptr_t byteOff) -> void* {
        void** vtbl = *reinterpret_cast<void***>(obj);
        return *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(vtbl) + byteOff);
    };

    void* a = lift_field<void*>(self, 0x27C);
    reinterpret_cast<VFn0>(vslot(a, 0x84))(a);

    void* b = lift_field<void*>(self, 0x424);
    if (b != nullptr) {
        reinterpret_cast<VFn1>(vslot(b, 0x0C))(b, reinterpret_cast<const void*>(uintptr_t{0x00B39F84}));
    }

    // Value of the IAT slot is the address of c_str.
    CStrFn c_str = reinterpret_cast<CStrFn>(static_cast<uintptr_t>(static_cast<uint32_t>(mem_00924FF0)));
    const char* s = c_str(str);

    void* scene = lift_field<void*>(self, 0x494);
    int r = reinterpret_cast<OpenFn>(reinterpret_cast<void*>(&ext_007C569A))(scene, s);
    return r == 0;
}
} // namespace lift_00564600
