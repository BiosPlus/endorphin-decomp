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

// [0x0056B850] sub_0056B850 (106 bytes)
namespace lift_0056B850 {
// Known callee 0x00584BD0: Unknown::getStrPtrOrFallback (Returns a pointer to the std::string at +0x4C if it differs from a fixed literal, else a pointer to the std::string at +0x14.)
extern void ext_00584BD0();
// IAT slot: std::operator!=(const std::string&, const std::string&)
extern int mem_00924FB0;
// IAT slot: std::string::basic_string(const std::string&) copy constructor (thiscall)
extern int mem_00924FE0;
// IAT slot: std::operator+(const std::string&, const std::string&) (returns by value)
extern int mem_00924FD0;
// Global std::string constant
extern int mem_00B3A9F4;
// RDATA constants listed for this function's region; not read by the code path itself.
extern int mem_00924EC0;
extern int mem_00924FC0;
extern int mem_00924FD8;
extern int mem_009250E4;
extern int mem_009250E8;
extern int mem_009250EC;

// @name Unknown::getStrOrVirtualConcat
// @class Unknown
// @summary Compares the virtual-slot-9 string of self against getStrPtrOrFallback(self); if they differ, returns a copy of the fallback string, otherwise returns virtual-slot-9(&global) concatenated with the global string. Result is written to the caller-provided return slot.
// @field Unknown +0x00 void* field_0x00

namespace {

// Thiscall: self in ECX, one stack arg.
using VirtualStrFn = void* (__thiscall*)(void* self, const void* arg);
// Thiscall: self in ECX, no stack args.
using GetStrFn = void* (__thiscall*)(void* self);
// Cdecl: two stack args, returns bool.
using StrNotEqualFn = bool (__cdecl*)(const void* lhs, const void* rhs);
// Thiscall: self (destination string) in ECX, source on stack.
using StrCopyCtorFn = void (__thiscall*)(void* self, const void* src);
// Cdecl: hidden return slot first, then two string operands.
using StrConcatFn = void (__cdecl*)(void* ret, const void* lhs, const void* rhs);

// Resolve an IAT slot (a global holding the imported function pointer) to a callable address.
inline void* iat_slot_value(const int& slot) {
    return reinterpret_cast<void*>(static_cast<uintptr_t>(static_cast<uint32_t>(slot)));
}

} // namespace

void* fn_0056B850(void* out, void* self) {
    // Metadata-only references (not accesses on this path).
    (void)&mem_00924EC0;
    (void)&mem_00924FC0;
    (void)&mem_00924FD8;
    (void)&mem_009250E4;
    (void)&mem_009250E8;
    (void)&mem_009250EC;

    // vtable slot 9 (byte offset 0x24) on the object.
    void* const vtable = lift_field<void*>(self, 0x00);
    auto const virtualStr = reinterpret_cast<VirtualStrFn>(lift_field<void*>(vtable, 0x24));

    void* const keyed = virtualStr(self, nullptr);
    void* const fallback = reinterpret_cast<GetStrFn>(&ext_00584BD0)(self);

    auto const notEqual = reinterpret_cast<StrNotEqualFn>(iat_slot_value(mem_00924FB0));
    if (notEqual(keyed, fallback)) {
        // Strings differ: copy-construct the fallback string into the return slot.
        void* const src = reinterpret_cast<GetStrFn>(&ext_00584BD0)(self);
        auto const copyCtor = reinterpret_cast<StrCopyCtorFn>(iat_slot_value(mem_00924FE0));
        copyCtor(out, src);
        return out;
    }

    // Strings equal: return virtualStr(&global) + global.
    void* const global = reinterpret_cast<void*>(&mem_00B3A9F4);
    void* const lhs = virtualStr(self, global);
    auto const concat = reinterpret_cast<StrConcatFn>(iat_slot_value(mem_00924FD0));
    concat(out, lhs, global);
    return out;
}
} // namespace lift_0056B850

// [0x00565120] sub_00565120 (117 bytes)
namespace lift_00565120 {
// Known callee 0x007C56D0: thunk_XSIFtk-3.6.2.1_?FindModel@CSLScene@@QAEPAVCSLModel@@PAD@Z (IAT jump thunk forwarding to XSIFtk-3.6.2.1!?FindModel@CSLScene@@QAEPAVCSLModel@@PAD@Z.)
extern void ext_007C56D0();
// Known callee 0x00584BD0: Unknown::getStrPtrOrFallback (Returns a pointer to the std::string at +0x4C if it differs from a fixed literal, else a pointer to the std::string at +0x14.)
extern void ext_00584BD0();
// IAT slot: MSVCP80 std::basic_string<char>::basic_string(const basic_string&) (thiscall)
extern int mem_00924FE0;
// IAT slot: MSVCP80 std::basic_string<char>::c_str() (thiscall)
extern int mem_00924FF0;
// IAT slot: MSVCP80 std::basic_string<char>::~basic_string() (thiscall)
extern int mem_00924FF4;

// @name Unknown::findModelByFallbackName
// @class Unknown
// @summary Copies the std::string chosen by getStrPtrOrFallback(arg) into a temporary, then calls CSLScene::FindModel(c_str) on the scene at +0x494 and returns the resulting model pointer.
// @field Unknown +0x494 void* field_0x494

void* __thiscall fn_00565120(void* self, void* nameSource) {
    using StrPtrFn      = void* (__thiscall*)(void* self);
    using StrCopyCtorFn = void (__thiscall*)(void* self, const void* src);
    using CStrFn        = const char* (__thiscall*)(void* self);
    using StrDtorFn     = void (__thiscall*)(void* self);
    using FindModelFn   = void* (__thiscall*)(void* self, const char* name);

    // Temporary std::string (MSVC 2005 layout, 0x1C bytes).
    alignas(8) uint8_t tmpStr[0x1C];

    void* const src = reinterpret_cast<StrPtrFn>(&ext_00584BD0)(nameSource);
    reinterpret_cast<StrCopyCtorFn>(static_cast<uintptr_t>(static_cast<uint32_t>(mem_00924FE0)))(tmpStr, src);

    const char* const name =
        reinterpret_cast<CStrFn>(static_cast<uintptr_t>(static_cast<uint32_t>(mem_00924FF0)))(tmpStr);

    void* const scene = lift_field<void*>(self, 0x494);
    void* const model = reinterpret_cast<FindModelFn>(&ext_007C56D0)(scene, name);

    reinterpret_cast<StrDtorFn>(static_cast<uintptr_t>(static_cast<uint32_t>(mem_00924FF4)))(tmpStr);
    return model;
}
} // namespace lift_00565120

// [0x00566F70]
namespace lift_00566F70 {
extern void* mem_009250EC;
extern void* mem_009250E4;
extern void* mem_009250E8;
extern void* mem_00924FC0;
extern void* mem_00924FD8;
extern void* mem_00924EC0;

// @name sub_00566F70
// @summary Reads characters from an istream into a target object's string at +0x3c until a ':'-prefixed token matches the sentinel string at 0x00958BFC.
// @field Obj +0x00 void* field_0x00
// @field Obj +0x04 uint8_t[1] field_0x04
uint8_t __thiscall fn_00566F70(void* self, void* istream_ptr) {
    using istream_get_fn = int(__thiscall*)(void*);
    using istream_putback_fn = void*(__thiscall*)(void*, char);
    using istream_read_str_fn = void*(__cdecl*)(void*, void*);
    using str_eq_cstr_fn = uint8_t(__cdecl*)(void*, const char*);
    using str_append_str_fn = void*(__thiscall*)(void*, void*);
    using str_append_char_fn = void*(__thiscall*)(void*, char);

    auto get_fn = reinterpret_cast<istream_get_fn>(mem_009250E4);
    auto putback_fn = reinterpret_cast<istream_putback_fn>(mem_009250E8);
    auto read_str_fn = reinterpret_cast<istream_read_str_fn>(mem_009250EC);
    auto eq_cstr_fn = reinterpret_cast<str_eq_cstr_fn>(mem_00924FC0);
    auto append_str_fn = reinterpret_cast<str_append_str_fn>(mem_00924FD8);
    auto append_char_fn = reinterpret_cast<str_append_char_fn>(mem_00924EC0);

    uint8_t* obj = static_cast<uint8_t*>(self);
    void* token_str = obj + 0x04;

    while (true) {
        int ch = get_fn(istream_ptr);
        char c = static_cast<char>(ch);
        if (c == ':') {
            putback_fn(istream_ptr, ':');
            read_str_fn(istream_ptr, token_str);
            if (eq_cstr_fn(token_str, reinterpret_cast<const char*>(0x00958BFC)) != 0) {
                return 1;
            }
            uint8_t* target = *reinterpret_cast<uint8_t**>(obj);
            append_str_fn(target + 0x3c, token_str);
        } else {
            uint8_t* target = *reinterpret_cast<uint8_t**>(obj);
            append_char_fn(target + 0x3c, c);
        }
    }
}
} // namespace lift_00566F70

// [0x00567210]
namespace lift_00567210 {
extern uintptr_t mem_00925134;
extern void __thiscall ext_00567210(void* self, uint32_t node, uint32_t arg2);

// @name sub_00567210
// @summary Recursively traverses a node's child vector at +0x24 with an unused second argument
// @field Node +0x24 uintptr_t children_vec
void __thiscall fn_00567210(void* self, uint32_t node, uint32_t arg2) {
    uint8_t* vec = reinterpret_cast<uint8_t*>(static_cast<uintptr_t>(node) + 0x24);
    uint32_t it = *reinterpret_cast<uint32_t*>(vec + 0x4);
    if (it > *reinterpret_cast<uint32_t*>(vec + 0x8)) {
        reinterpret_cast<void(__cdecl*)()>(mem_00925134)();
    }

    for (;;) {
        uint32_t end = *reinterpret_cast<uint32_t*>(vec + 0x8);
        if (*reinterpret_cast<uint32_t*>(vec + 0x4) > end) {
            reinterpret_cast<void(__cdecl*)()>(mem_00925134)();
        }
        if (it == end) {
            break;
        }
        if (it >= *reinterpret_cast<uint32_t*>(vec + 0x8)) {
            reinterpret_cast<void(__cdecl*)()>(mem_00925134)();
        }
        uint32_t child = *reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(it));
        ext_00567210(self, child, arg2);
        if (it >= *reinterpret_cast<uint32_t*>(vec + 0x8)) {
            reinterpret_cast<void(__cdecl*)()>(mem_00925134)();
        }
        it += 4;
    }
}
} // namespace lift_00567210

// [0x005679D0] sub_005679D0 (95 bytes)
namespace lift_005679D0 {
// Known callee 0x00567210: sub_00567210 (Recursively traverses a node's child vector at +0x24 with an unused second argument)
extern void __thiscall ext_00567210(void* self, uint32_t node, uint32_t arg2);

// @name traverseChildRange_005679D0
// @class UnknownClass
// @summary Walks a uint32 node array delimited by self+0x18 (begin) and self+0x1C (end), calling ext_00567210 on each entry with arg2 = 0.
// @field UnknownClass +0x18 uint32_t field_0x18
// @field UnknownClass +0x1C uint32_t field_0x1C
extern int mem_00925134;

void fn_005679D0(void* self) {
    (void)&mem_00925134; // metadata only: original's _invalid_parameter_noinfo guard slot (bounds checks omitted)
    uint32_t cur = lift_field<uint32_t>(self, 0x18);
    const uint32_t end = lift_field<uint32_t>(self, 0x1C);
    while (cur != end) {
        const uint32_t node = *reinterpret_cast<const uint32_t*>(static_cast<uintptr_t>(cur));
        ext_00567210(self, node, 0);
        cur += sizeof(uint32_t);
    }
}
} // namespace lift_005679D0

// [0x0056B690] sub_0056B690 (123 bytes)
namespace lift_0056B690 {
// Known callee 0x0056B670: sub_0056B670 (cdecl; takes three doubles, returns bool in al)
extern bool ext_0056B670(double, double, double);

// @name ComponentsPassTest3f (descriptiveName)
// @summary Tests each of the three float components (self[0], self[1], self[2]) against a float argument with a shared double parameter via ext_0056B670, short-circuiting on the first failure; returns true only if all three pass.
// @field self +0x00 float field_0x00
// @field self +0x04 float field_0x04
// @field self +0x08 float field_0x08
bool fn_0056B690(void* self, float a, float b, float c, double d) {
    const float x = lift_field<float>(self, 0x00);
    const float y = lift_field<float>(self, 0x04);
    const float z = lift_field<float>(self, 0x08);

    if (!ext_0056B670(x, a, d)) {
        return false;
    }
    if (!ext_0056B670(y, b, d)) {
        return false;
    }
    if (!ext_0056B670(z, c, d)) {
        return false;
    }
    return true;
}
} // namespace lift_0056B690

// [0x00567190] sub_00567190 (125 bytes)
namespace lift_00567190 {
extern int mem_00925134;

// @name numberChildrenRecursive
// @class Unknown
// @summary Walks a node's child-pointer array, stamping each child with the running counter and recursing into it.
// @field Unknown +0x28 void** field_0x28
// @field Unknown +0x2C void** field_0x2C
// @field Unknown +0x04 int32_t field_0x04
void __thiscall fn_00567190(void* ecx_this, void* self, int32_t* counter) {
    // Original bounds-check failure path calls through the _invalid_parameter_noinfo import slot; not a real access.
    (void)&mem_00925134;
    for (void** it = lift_field<void**>(self, 0x28);
         it != lift_field<void**>(self, 0x2C);
         ++it) {
        void* child = *it;
        lift_field<int32_t>(child, 0x04) = *counter;
        ++*counter;
        fn_00567190(ecx_this, *it, counter);
    }
}
} // namespace lift_00567190

// [0x00565060] sub_00565060 (129 bytes)
namespace lift_00565060 {
// Known callee 0x007C5706: thunk_XSIFtk-3.6.2.1_?SceneInfo@CSLScene@@QAEPAVCSLSceneInfo@@XZ (IAT jump thunk forwarding to XSIFtk-3.6.2.1!?SceneInfo@CSLScene@@QAEPAVCSLSceneInfo@@XZ.)
extern void ext_007C5706();
// Known callee 0x007C5694: thunk_XSIFtk-3.6.2.1_??4CSLStringProxy@@QAEAAV0@PBD@Z (IAT jump thunk forwarding to XSIFtk-3.6.2.1!??4CSLStringProxy@@QAEAAV0@PBD@Z.)
extern void ext_007C5694();
// Known callee 0x007C5700: thunk_XSIFtk-3.6.2.1_?SetFrameRate@CSLSceneInfo@@QAEXM@Z (IAT jump thunk forwarding to XSIFtk-3.6.2.1!?SetFrameRate@CSLSceneInfo@@QAEXM@Z.)
extern void ext_007C5700();
// Known callee 0x007C56FA: thunk_XSIFtk-3.6.2.1_?SetStart@CSLSceneInfo@@QAEXM@Z (IAT jump thunk forwarding to XSIFtk-3.6.2.1!?SetStart@CSLSceneInfo@@QAEXM@Z.)
extern void ext_007C56FA();
// Known callee 0x007C56F4: thunk_XSIFtk-3.6.2.1_?SetEnd@CSLSceneInfo@@QAEXM@Z (IAT jump thunk forwarding to XSIFtk-3.6.2.1!?SetEnd@CSLSceneInfo@@QAEXM@Z.)
extern void ext_007C56F4();

// @name Unknown::ApplySceneRangeToSceneInfo
// @class Unknown
// @summary Fetches the scene's CSLSceneInfo and, if non-null, copies frame rate (+0x174) and start/end (+0x16C/+0x170, converted to float) into it, after setting a flag and assigning a name string from the info's child vtable.
// @field Unknown +0x494 void* scene
// @field Unknown +0x16C int32_t startFrame
// @field Unknown +0x170 int32_t endFrame
// @field Unknown +0x174 float frameRate
// @field CSLSceneInfo +0x4C void* nameSource
// @field CSLSceneInfo +0x50 int32_t flag
// @field CSLSceneInfo +0x54 void* nameProxy
void fn_00565060(void* self) {
    // Thiscall: self arrives in ECX. Callees are invoked through typed pointers.
    using SceneInfoFn = void* (*)(void* scene);
    using StringAssignFn = void* (*)(void* proxy, const char* value);
    using SetFloatFn = void (*)(void* obj, float value);

    void* scene = lift_field<void*>(self, 0x494);
    void* info = reinterpret_cast<SceneInfoFn>(ext_007C5706)(scene);
    if (info == nullptr) {
        return;
    }

    // Snapshot the source values before any callee runs (matches the asm's load order).
    int32_t startFrame = lift_field<int32_t>(self, 0x16C);
    float frameRate = lift_field<float>(self, 0x174);
    int32_t endFrame = lift_field<int32_t>(self, 0x170);

    void* nameSource = lift_field<void*>(info, 0x4C);
    lift_field<int32_t>(info, 0x50) = 1;

    // eax = [nameSource]  (vtable); ecx = [vtable + 4]  -> const char* argument
    void* vtable = lift_field<void*>(nameSource, 0x0);
    const char* name = lift_field<const char*>(vtable, 0x4);

    void* nameProxy = static_cast<uint8_t*>(info) + 0x54;
    reinterpret_cast<StringAssignFn>(ext_007C5694)(nameProxy, name);

    reinterpret_cast<SetFloatFn>(ext_007C5700)(info, frameRate);
    reinterpret_cast<SetFloatFn>(ext_007C56FA)(info, static_cast<float>(startFrame));
    reinterpret_cast<SetFloatFn>(ext_007C56F4)(info, static_cast<float>(endFrame));
}
} // namespace lift_00565060

// [0x00567070]
namespace lift_00567070 {
// @name findItemByName
// @summary Linearly searches a vector of pointers for an item whose std::string at +0x8 matches the given name
// @field Self +0x08 uint32_t* vec_begin
// @field Self +0x0C uint32_t* vec_end


extern uint32_t mem_00925134;
extern uint32_t mem_00924FC4;

uint32_t __thiscall sub_00567070(void* self, const void* name) {
    auto* invalid_param = reinterpret_cast<void(__cdecl*)()>(mem_00925134);
    auto* str_eq = reinterpret_cast<bool(__cdecl*)(const void*, const void*)>(mem_00924FC4);

    uint32_t* vec = reinterpret_cast<uint32_t*>(reinterpret_cast<uint8_t*>(self) + 0x4);
    uint32_t* it = reinterpret_cast<uint32_t*>(vec[1]);
    if (it > reinterpret_cast<uint32_t*>(vec[2])) {
        invalid_param();
    }

    for (;;) {
        uint32_t* end = reinterpret_cast<uint32_t*>(vec[2]);
        if (reinterpret_cast<uint32_t*>(vec[1]) > end) {
            invalid_param();
        }
        if (it == end) {
            return 0;
        }
        if (it >= reinterpret_cast<uint32_t*>(vec[2])) {
            invalid_param();
        }
        uint32_t item = *it;
        const void* item_name = reinterpret_cast<const uint8_t*>(static_cast<uintptr_t>(item)) + 0x8;
        if (str_eq(item_name, name)) {
            if (it >= reinterpret_cast<uint32_t*>(vec[2])) {
                invalid_param();
            }
            return *it;
        }
        if (it >= reinterpret_cast<uint32_t*>(vec[2])) {
            invalid_param();
        }
        ++it;
    }
}
} // namespace lift_00567070

// [0x00567100]
namespace lift_00567100 {
extern void* mem_00925134;
extern void* mem_00924FC4;

// @name findByName
// @summary Searches a vector of item pointers at +0x14 for an item whose std::string at +0x8 matches key
// @field Self +0x14 void* vec_proxy
// @field Self +0x18 uint32_t* vec_begin
// @field Self +0x1c uint32_t* vec_end
uint32_t __thiscall sub_00567100(void* self, const void* key) {
    auto invalid_param = reinterpret_cast<void(__cdecl*)()>(mem_00925134);
    auto str_eq = reinterpret_cast<uint8_t(__cdecl*)(const void*, const void*)>(mem_00924FC4);

    uint32_t* esi = lift_field<uint32_t*>(self, 0x18);
    if (esi > lift_field<uint32_t*>(self, 0x1c)) {
        invalid_param();
    }

    uint8_t* edi = reinterpret_cast<uint8_t*>(self) + 0x14;
    for (;;) {
        uint32_t* ebx = lift_field<uint32_t*>(edi, 0x8);
        if (lift_field<uint32_t*>(edi, 0x4) > ebx) {
            invalid_param();
        }
        if (esi == ebx) {
            return 0;
        }
        if (esi >= lift_field<uint32_t*>(edi, 0x8)) {
            invalid_param();
        }
        uint32_t item = *esi;
        const void* item_name = reinterpret_cast<const uint8_t*>(static_cast<uintptr_t>(item)) + 0x8;
        if (str_eq(item_name, key) != 0) {
            if (esi >= lift_field<uint32_t*>(edi, 0x8)) {
                invalid_param();
            }
            return *esi;
        }
        if (esi >= lift_field<uint32_t*>(edi, 0x8)) {
            invalid_param();
        }
        esi += 1;
    }
}
} // namespace lift_00567100

// [0x005633A0]
namespace lift_005633A0 {
extern void* ext_00584BD0(void* self);
extern void* ext_007C5622(void* self);
extern void ext_007C5628(void* self, const char* name);

extern uintptr_t mem_00924FE0;
extern uintptr_t mem_00924FF0;
extern uintptr_t mem_00924FF4;

using StringCopyCtorFn = void(__thiscall*)(void* self, const void* other);
using StringCStrFn = const char*(__thiscall*)(const void* self);
using StringDtorFn = void(__thiscall*)(void* self);

// @name setModelAndPrimitiveName
// @summary Sets the name of a CSLModel and its CSLPrimitive from a fallback-resolved string.
void __stdcall fn_005633A0(void* model, void* strObj) {
    void* srcStr = ext_00584BD0(strObj);

    alignas(4) uint8_t localStr[0x1c];
    reinterpret_cast<StringCopyCtorFn>(mem_00924FE0)(localStr, srcStr);

    const char* name = reinterpret_cast<StringCStrFn>(mem_00924FF0)(localStr);
    ext_007C5628(model, name);

    void* primitive = ext_007C5622(model);
    ext_007C5628(primitive, name);

    reinterpret_cast<StringDtorFn>(mem_00924FF4)(localStr);
}
} // namespace lift_005633A0
