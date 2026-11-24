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
