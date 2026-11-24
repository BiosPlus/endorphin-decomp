// Lifted C++ translation unit: lifted/leaf/decompiled_400000.cpp
#include "lift_compat.h"

// [0x00407830] sub_00407830 (17 bytes)
namespace lift_00407830 {
// Known callee 0x006A6004: thunk_MFC80_ord_2367 (IAT jump thunk forwarding to MFC80!ord_2367.)
extern void ext_006A6004();
extern int mem_00925658;

// @name sub_00407830
// @class unknown
// @summary Passes the field at self+0x20 to USER32!GetDC, then forwards the returned HDC to MFC80 ord_2367.
// @field unknown +0x20 DWORD field_0x20
void fn_00407830(void* self) {
    DWORD arg = *reinterpret_cast<DWORD*>(static_cast<unsigned char*>(self) + 0x20);
    using GetDCFn = DWORD(__stdcall*)(DWORD);
    DWORD hdc = reinterpret_cast<GetDCFn>(static_cast<uintptr_t>(mem_00925658))(arg);
    using ForwardFn = void(__stdcall*)(DWORD);
    reinterpret_cast<ForwardFn>(&ext_006A6004)(hdc);
}
} // namespace lift_00407830

// [0x00407850] sub_00407850 (17 bytes)
namespace lift_00407850 {
// Known callee 0x006A5E00: thunk_MFC80_ord_2372 (IAT jump thunk forwarding to MFC80!ord_2372.)
extern void* ext_006A5E00(void* wnd);
// IAT slot for USER32!GetParent
extern void* (__stdcall* mem_00925650)(void* hWnd);

// @name getParentWrapper
// @summary Gets the parent of the window handle stored at this+0x20 and passes it to the MFC80 wrapper lookup (ord_2372); returns that result.
// @field Unknown +0x20 HWND field_0x20
void* fn_00407850(void* self) {
    void* hwnd = *reinterpret_cast<void**>(static_cast<unsigned char*>(self) + 0x20);
    void* parent = mem_00925650(hwnd);
    return ext_006A5E00(parent);
}
} // namespace lift_00407850

// [0x0040F0B0] sub_0040F0B0 (25 bytes)
namespace lift_0040F0B0 {
// Known callee 0x006A5C6E: thunk_MFC80_ord_572 (IAT jump thunk forwarding to MFC80!ord_572.)
extern void ext_006A5C6E();
extern void ext_0040EFA0();
extern int mem_0092B7F4;

// @name Unknown::initVtableAndInit
// @class Unknown
// @summary Calls the MFC80 base-class initializer on this, sets vtable to mem_0092B7F4, then calls sub_0040EFA0(this); returns this.
// @field Unknown +0x00 void* vptr
void* fn_0040F0B0(void* self) {
    ext_006A5C6E();
    lift_field<void*>(self, 0x0) = &mem_0092B7F4;
    ext_0040EFA0();
    return self;
}
} // namespace lift_0040F0B0

// [0x00401DE0] sub_00401DE0 (25 bytes)
namespace lift_00401DE0 {
// @name sub_00401DE0
// @summary Auto-lifted identical-shape clone of 0x00594790 (Unknown::releaseHeldObject (descriptive; owner class not identified)).
namespace lift_00594790 {
// @name Unknown::releaseHeldObject (descriptive; owner class not identified)
// @class Unknown
// @summary Reads a pointer at +0x00 of self; if non-null, invokes ext_00675650 with it as the this-pointer, then passes it to ext_006A5C5C as a single cdecl argument.
// @field Unknown +0x00 void* heldPtr

// Callee: sub_00675650 is a thiscall-style forwarder; ecx carries the object.
extern void ext_00403400(void* thisPtr);
// Callee: thunk_MFC80_ord_764 is a cdecl IAT thunk taking one argument (caller cleans up).
extern void ext_006A5C5C(void* arg);

void fn_00401DE0(void* self) {
    void* held = lift_field<void*>(self, 0x00);
    if (held != nullptr) {
        ext_00403400(held);
        ext_006A5C5C(held);
    }
}
} // namespace lift_00594790
} // namespace lift_00401DE0

// [0x00401B60]
namespace lift_00401B60 {
extern int mem_00928ECC;

extern void ext_MSVCP80_basic_string_char_dtor(void* self);
extern void ext_MSVCR80_exception_dtor(void* self);

// @name Unknown::~Unknown (std::exception-derived, std::string member at +0x0C)
// @class Unknown
// @summary Destructor: installs derived vtable, destroys the std::string member at +0x0C, then tail-calls the std::exception base destructor.
// @field Unknown +0x00 void* vfptr
// @field Unknown +0x0C std::string field_0x0C
void fn_00401B60(void* self) {
    lift_field<const void*>(self, 0x00) = reinterpret_cast<const void*>(&mem_00928ECC);
    ext_MSVCP80_basic_string_char_dtor(static_cast<uint8_t*>(self) + 0x0C);
    ext_MSVCR80_exception_dtor(self);
}
} // namespace lift_00401B60

// [0x00407870] sub_00407870 (27 bytes)
namespace lift_00407870 {
// @name FloorFloat
// @summary Returns floor(x) for a float argument, computed via double precision and returned as float.
float fn_00407870(float x) {
    // Original: widen arg to double, call MSVCR80 floor (ext_006A6E92), narrow result back to float.
    return static_cast<float>(std::floor(static_cast<double>(x)));
}
} // namespace lift_00407870

// [0x004064B0] sub_004064B0 (27 bytes)
namespace lift_004064B0 {
// @name sub_004064B0
// @summary Auto-lifted identical-shape clone of 0x005694F0 (DestroyRangeForward_005694F0).
namespace lift_005694F0 {
extern void __cdecl ext_00406380(int a1, int a2, void* self, int a4);

// @name DestroyRangeForward_005694F0
// @class (none)
// @summary Forwards two stack arguments plus the incoming ECX value to ext_005693E0 (range destroy helper).
void fn_004064B0(void* self, int edx_unused, int a1, int a2) {
    // Original: push a2, push ecx, push a2, push a1, call ext_005693E0(a1, a2, self, a2).
    ext_00406380(a1, a2, self, a2);
}
} // namespace lift_005694F0
} // namespace lift_004064B0

// [0x0040F270]
namespace lift_0040F270 {
// @name sub_0040F270
// @summary Sets flags 0xb at offset +0x2c, calls thunk_MFC80_ord_1903, and returns -1 if result is -1 else 0
// @field struct_0040F270 +0x2c uint32_t field_0x2c


extern uint32_t ext_006A5EA8(void);
uint32_t mem_read32(uintptr_t addr);
void mem_write32(uintptr_t addr, uint32_t val);

extern int32_t __stdcall fn_0040F270(uintptr_t arg0) {
    mem_write32(arg0 + 0x2c, mem_read32(arg0 + 0x2c) | 0xb);
    uint32_t res = ext_006A5EA8();
    return (res == 0xFFFFFFFFu) ? -1 : 0;
}
} // namespace lift_0040F270

// [0x00403400] sub_00403400 (30 bytes)
namespace lift_00403400 {
// Known callee 0x006A3454: thunk_MSVFW32_DrawDibClose (IAT jump thunk forwarding to MSVFW32!DrawDibClose.)
extern void __stdcall ext_006A3454(void* hdd);
// IAT slot 0x009240A8 holding the resolved address of GDI32!DeleteDC.
extern int mem_009240A8;

// @name Unknown::closeDrawDibAndDeleteDC
// @class Unknown
// @summary Closes the DrawDib handle at this+0xDC via DrawDibClose, then deletes the device context at this+0xE4 via GDI32!DeleteDC (thiscall, no args).
// @field Unknown +0xDC void* field_0xdc
// @field Unknown +0xE4 void* field_0xe4
void __thiscall fn_00403400(void* self) {
    void* hdd = lift_field<void*>(self, 0xDC);
    ext_006A3454(hdd);

    using DeleteDCFn = int(__stdcall*)(void*);
    void* hdc = lift_field<void*>(self, 0xE4);
    auto deleteDC = reinterpret_cast<DeleteDCFn>(static_cast<uintptr_t>(static_cast<uint32_t>(mem_009240A8)));
    deleteDC(hdc);
}
} // namespace lift_00403400

// [0x0040A910] sub_0040A910 (33 bytes)
namespace lift_0040A910 {
// Imported MFC80 ordinal 297 (thiscall: self = first arg, then 2 stack args), via indirect slot.
extern void (*mem_00924494)(void* self, void* subobject, int flags);

// @name Unknown::forwardSubobject68ThenMfcOrd297
// @class Unknown
// @summary Calls MFC80 ordinal 297 on the argument with (this+0x68, 0) and returns the argument.
// @field Unknown +0x68 void* subobject
void* fn_0040A910(void* self, void* arg1) {
    void* subobject = reinterpret_cast<uint8_t*>(self) + 0x68;
    mem_00924494(arg1, subobject, 0);
    return arg1;
}
} // namespace lift_0040A910
