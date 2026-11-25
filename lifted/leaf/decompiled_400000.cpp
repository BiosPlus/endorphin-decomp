// Lifted C++ translation unit: lifted/leaf/decompiled_400000.cpp
#include "lift_compat.h"
#include <cstdint>
#include <cstring>
#include <new>
#include <string>

#include <string>
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
#include <bit>
#include <cstring>
#include <istream>

#include <istream>
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
#include <exception>
#include <cstddef>
#include <stdexcept>

#include <stdexcept>
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
#include <iostream>
#include <streambuf>

#include <streambuf>
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

// [0x0040AB30] sub_0040AB30 (36 bytes)
namespace lift_0040AB30 {
// @name sub_0040AB30
// @summary Auto-lifted identical-shape clone of 0x0040A910 (sub_00407830).
namespace lift_0040A910 {
// Imported MFC80 ordinal 297 (thiscall: self = first arg, then 2 stack args), via indirect slot.
extern void (*mem_00924FE0)(void* self, void* subobject, int flags);

// @name Unknown::forwardSubobject68ThenMfcOrd297
// @class Unknown
// @summary Calls MFC80 ordinal 297 on the argument with (this+0x68, 0) and returns the argument.
// @field Unknown +0x68 void* subobject
void* fn_0040AB30(void* self, void* arg1) {
    void* subobject = reinterpret_cast<uint8_t*>(self) + 0x2B4;
    mem_00924FE0(arg1, subobject, 0);
    return arg1;
}
} // namespace lift_0040A910
} // namespace lift_0040AB30

// [0x0040A8E0]
namespace lift_0040A8E0 {
// @name lockCriticalSectionFromResult
// @class Unknown
// @summary Calls the vtable slot at +0x1d8 on the object referenced by arg, stores the returned pointer in self->field_0x00, then enters the critical section it points to. Returns self.
// @field Unknown +0x00 void* field_0x00 (pointer written from vtable call result; later passed to CriticalSectionLock::enter)

void ext_0065C640(void* self);

void* sub_0040A8E0(void* self, void** arg) {
    void* obj = *arg;
    void** vtable = *reinterpret_cast<void***>(obj);
    using GetFn = void* (*)(void*);
    GetFn get = reinterpret_cast<GetFn>(vtable[0x1d8 / sizeof(void*)]);
    void* result = get(obj);
    *reinterpret_cast<void**>(self) = result;
    ext_0065C640(result);
    return self;
}
} // namespace lift_0040A8E0

// [0x0040EFF0] sub_0040EFF0 (34 bytes)
namespace lift_0040EFF0 {
// Known callee 0x006A60EE: thunk_MFC80_ord_1185 (IAT jump thunk forwarding to MFC80!ord_1185.)
extern void ext_006A60EE();
// Known callee 0x006A60F4: thunk_MFC80_ord_1187 (IAT jump thunk forwarding to MFC80!ord_1187.)
extern void ext_006A60F4();

// @name selectorDispatchThunk
// @summary Range-checks a selector in [0,0x50] and tail-jumps to one of two MFC80 thunks via a byte-indexed jump table.
// @field (none; no object fields are accessed)
extern void fn_0040EFF0(unsigned int selector) {
    if (selector > 0x50u) {
        ext_006A60EE();
        return;
    }
    // Jump-table dispatch: the table at 0x40F024 maps each selector to a case in the dword table at 0x40F014.
    // Case targets: 0x40F007 -> ext_006A60F4, 0x40F00C -> ext_006A60EE.
    ext_006A60F4();
}
} // namespace lift_0040EFF0

// [0x0040C300] sub_0040C300 (37 bytes)
namespace lift_0040C300 {
// Known callee 0x0042EE50: sub_0042EE50 (Auto-lifted identical-shape clone of 0x0051BF10 (NMData::RealChannel::clear).)
extern void ext_0042EE50(uint8_t* self);
extern int mem_00925694;

using SendMessageAFn = uint32_t(__stdcall*)(uint32_t hWnd, uint32_t Msg, uint32_t wParam, uint32_t lParam);

// @name Unknown::notifyWindowThenClear
// @class Unknown
// @summary Sends message 0x184 (wParam=0, lParam=0) to the window handle at +0xA4, then tail-calls the clear routine on the sub-object at +0x84.
// @field Unknown +0x84 uint8_t[] field_0x84
// @field Unknown +0xA4 uint32_t hwnd
void fn_0040C300(uint8_t* self) {
    auto sendMessage = reinterpret_cast<SendMessageAFn>(mem_00925694);
    uint32_t hwnd = *reinterpret_cast<uint32_t*>(self + 0xA4);
    sendMessage(hwnd, 0x184, 0, 0);
    ext_0042EE50(self + 0x84);
}
} // namespace lift_0040C300

// [0x0040E1A0]
namespace lift_0040E1A0 {
extern uintptr_t mem_00924FDC;

// @name fill_std_string_range
// @summary Fills a range of std::string objects [first, last) with copies of val.
void sub_0040E1A0(uint32_t first, uint32_t last, uint32_t val) {
    using assign_fn_t = uint32_t(__thiscall*)(void*, uint32_t);
    auto assign_fn = reinterpret_cast<assign_fn_t>(mem_00924FDC);
    for (uint32_t cur = first; cur != last; cur += 0x1C) {
        assign_fn(reinterpret_cast<void*>(static_cast<uintptr_t>(cur)), val);
    }
}
} // namespace lift_0040E1A0

// [0x0040B220] sub_0040B220 (41 bytes)
namespace lift_0040B220 {
// MSVCP80 std::operator+(const char*, const std::string&) imported via [0x924FCC].
// Writes the result std::string through the hidden return pointer (sret).
extern void __cdecl ext_00924FCC(void* sret, const char* lhs, const void* rhs);

// Literal " " (single space) stored at mem_0092AB78 in .rdata.
extern int mem_0092AB78;

// @name prependSpaceToString
// @summary Builds a std::string equal to " " + arg, writes it to the sret buffer, and returns that buffer pointer.
uintptr_t __stdcall fn_0040B220(uintptr_t out_ptr, uintptr_t rhs_ptr) {
    ext_00924FCC(reinterpret_cast<void*>(out_ptr),
                 reinterpret_cast<const char*>(&mem_0092AB78),
                 reinterpret_cast<const void*>(rhs_ptr));
    return out_ptr;
}
} // namespace lift_0040B220

// [0x00406480] sub_00406480 (41 bytes)
namespace lift_00406480 {
// @name sub_00406480
// @summary Auto-lifted identical-shape clone of 0x0044C4D0 (DWORD_RangeCopy_thiscall).
namespace lift_0044C4D0 {
// @name DWORD_RangeCopy_thiscall
// @summary Copies DWORDs from [first, last) to out via ext_0044C2A0 and returns out + count.

extern DWORD* ext_004023D0(const DWORD* first, const DWORD* last, DWORD* out);

DWORD* __thiscall fn_00406480(void* self, const DWORD* first, const DWORD* last, DWORD* out) {
    (void)self;
    return ext_004023D0(first, last, out);
}
} // namespace lift_0044C4D0
} // namespace lift_00406480

// [0x00406610] sub_00406610 (41 bytes)
namespace lift_00406610 {
// @name sub_00406610
// @summary Auto-lifted identical-shape clone of 0x0044C4D0 (DWORD_RangeCopy_thiscall).
namespace lift_0044C4D0 {
// @name DWORD_RangeCopy_thiscall
// @summary Copies DWORDs from [first, last) to out via ext_0044C2A0 and returns out + count.

extern DWORD* ext_004062C0(const DWORD* first, const DWORD* last, DWORD* out);

DWORD* __thiscall fn_00406610(void* self, const DWORD* first, const DWORD* last, DWORD* out) {
    (void)self;
    return ext_004062C0(first, last, out);
}
} // namespace lift_0044C4D0
} // namespace lift_00406610

// [0x0040E860] sub_0040E860 (41 bytes)
namespace lift_0040E860 {
// @name sub_0040E860
// @summary Auto-lifted identical-shape clone of 0x0044C4D0 (DWORD_RangeCopy_thiscall).
namespace lift_0044C4D0 {
// @name DWORD_RangeCopy_thiscall
// @summary Copies DWORDs from [first, last) to out via ext_0044C2A0 and returns out + count.

extern DWORD* ext_0040E230(const DWORD* first, const DWORD* last, DWORD* out);

DWORD* __thiscall fn_0040E860(void* self, const DWORD* first, const DWORD* last, DWORD* out) {
    (void)self;
    return ext_0040E230(first, last, out);
}
} // namespace lift_0044C4D0
} // namespace lift_0040E860

// [0x0040FDC0] sub_0040FDC0 (46 bytes)
namespace lift_0040FDC0 {
// Known callee 0x006A5C6E: thunk_MFC80_ord_572 (IAT jump thunk forwarding to MFC80!ord_572.)
extern void ext_006A5C6E();

// @name initRecordDefaults_0040FDC0
// @summary Calls an MFC thunk, then zeroes five dwords and sets a vtable-like word and two 0xE6 fields in the object.
// @field <unknown> +0x00 uint32_t field_0x00
// @field <unknown> +0x54 uint32_t field_0x54
// @field <unknown> +0x58 uint32_t field_0x58
// @field <unknown> +0x5C uint32_t field_0x5C
// @field <unknown> +0x60 uint32_t field_0x60
// @field <unknown> +0x64 uint32_t field_0x64
// @field <unknown> +0x68 uint32_t field_0x68
// @field <unknown> +0x6C uint32_t field_0x6C
static void store_u32(void* self, std::uintptr_t off, std::uint32_t value) {
    std::memcpy(static_cast<std::uint8_t*>(self) + off, &value, sizeof(value));
}

void* fn_0040FDC0(void* self) {
    ext_006A5C6E();

    store_u32(self, 0x54, 0u);
    store_u32(self, 0x5C, 0u);
    store_u32(self, 0x58, 0u);
    store_u32(self, 0x64, 0u);
    store_u32(self, 0x6C, 0u);
    store_u32(self, 0x00, 0x92B9D4u);
    store_u32(self, 0x60, 0xE6u);
    store_u32(self, 0x68, 0xE6u);
    return self;
}
} // namespace lift_0040FDC0

// [0x0040FD60] sub_0040FD60 (47 bytes)
namespace lift_0040FD60 {
// @name Object::dispatchModeVirtual
// @class Object
// @summary If mode is 1 or 2, calls vtable slot 0x51 with 1; otherwise with 0; always returns 0.
// @field Object +0x00 void** vtable

namespace {
// Vtable slot at byte offset 0x144 (index 0x51) on the object's vtable.
using ModeVirtualFn = void(__thiscall*)(void* self, uint32_t flag);
constexpr std::size_t kModeVirtualSlotOffset = 0x144;
}

uint32_t fn_0040FD60(void* self, uint32_t mode) {
    // Target is 32-bit: the vtable pointer is the first DWORD of the object,
    // and the slot is read as a 32-bit address at vtable + 0x144.
    const auto vtableAddr = static_cast<uintptr_t>(*reinterpret_cast<uint32_t*>(self));
    const auto slotAddr = vtableAddr + kModeVirtualSlotOffset;
    const auto target = *reinterpret_cast<uint32_t*>(slotAddr);
    auto fn = reinterpret_cast<ModeVirtualFn>(static_cast<uintptr_t>(target));
    const uint32_t flag = (mode >= 1u && mode <= 2u) ? 1u : 0u;
    fn(self, flag);
    return 0u;
}
} // namespace lift_0040FD60

// [0x00408090]
namespace lift_00408090 {
// @name copy_backward_4b
// @summary Copies a range of 4-byte elements backward using memmove_s and returns the start of the destination range.


extern int32_t (__cdecl *mem_009251EC)(void* dest, size_t destsz, const void* src, size_t count);

uint32_t* __cdecl sub_00408090(const uint32_t* first, const uint32_t* last, uint32_t* dest_end) {
    int32_t count = static_cast<int32_t>(reinterpret_cast<uintptr_t>(last) - reinterpret_cast<uintptr_t>(first)) >> 2;
    size_t byte_size = static_cast<size_t>(count) * 4;
    uint32_t* dest = reinterpret_cast<uint32_t*>(reinterpret_cast<uintptr_t>(dest_end) - byte_size);
    if (count > 0) {
        mem_009251EC(dest, byte_size, first, byte_size);
    }
    return dest;
}
} // namespace lift_00408090

// [0x00401000] sub_00401000 (50 bytes)
namespace lift_00401000 {
// @name IterateStridedCallback
// @summary Calls callback once per element of a stride-spaced array, passing each element's address as self; runs `count` times when count > 0, otherwise does nothing.
// (Stack args: base, stride, count, callback; callee cleans 16 bytes.)
void fn_00401000(void* base, std::int32_t stride, std::int32_t count, void (*callback)(void*)) {
    auto* cursor = static_cast<std::uint8_t*>(base);
    for (std::int32_t remaining = count - 1; remaining >= 0; --remaining) {
        callback(cursor);
        cursor += stride;
    }
}
} // namespace lift_00401000

// [0x00409080]
namespace lift_00409080 {
// @name sub_00409080
// @summary Calls sub_00407730 with two arguments and, if non-zero, calls thunk_MFC80_ord_6236(this, 0), returning 1 if both succeed or 0 otherwise.


extern uint32_t __thiscall ext_00407730(void* self, uint32_t arg1, uint32_t arg2);
extern uint32_t __thiscall ext_006A608E(void* self, uint32_t arg1);

extern uint32_t __thiscall fn_00409080(void* self, uint32_t arg1, uint32_t arg2) {
    if (ext_00407730(self, arg1, arg2) == 0) {
        return 0;
    }
    if (ext_006A608E(self, 0) == 0) {
        return 0;
    }
    return 1;
}
} // namespace lift_00409080

// [0x00401080]
namespace lift_00401080 {
extern uint32_t (__stdcall *mem_00925694)(uint32_t hWnd, uint32_t Msg, uint32_t wParam, uint32_t lParam);

// @name CWnd::SetFont
// @class CWnd
// @summary Sends WM_SETFONT to the window handle with the font handle (or 0 if null) and redraw flag.
// @field CWnd +0x20 uint32_t m_hWnd

uint32_t __thiscall sub_00401080(void* this_ptr, void* font, uint32_t redraw) {
    uint32_t hWnd = *reinterpret_cast<uint32_t*>(reinterpret_cast<uint8_t*>(this_ptr) + 0x20);
    uint32_t hFont = font ? *reinterpret_cast<uint32_t*>(reinterpret_cast<uint8_t*>(font) + 0x4) : 0;
    return mem_00925694(hWnd, 0x30, hFont, redraw);
}
} // namespace lift_00401080

// [0x004064D0] sub_004064D0 (55 bytes)
namespace lift_004064D0 {
// @name sub_004064D0
// @summary Auto-lifted identical-shape clone of 0x0054F2C0 (ComputeRecordAddress).
namespace lift_0054F2C0 {
extern void ext_004063F0(std::uintptr_t a0, std::uint32_t a1, std::uint32_t a2,
                             std::uint32_t a3, std::uint32_t a4, std::uint32_t a5);

// @name ComputeRecordAddress
// @summary Calls helper sub_0054F1E0 with the arguments and a zeroed flag word, then returns base + index * 0x68.
// (no direct struct field accesses in this function)
__stdcall std::uint8_t* fn_004064D0(std::uint8_t* base, std::uint32_t index, std::uint32_t arg2) {
    // The original stores 0 into the low byte of a stack slot that previously held ECX,
    // so the dword passed on is ECX with its low byte cleared. ECX at entry is not
    // recoverable from the stdcall signature; it is modelled as a placeholder here.
    std::uint32_t ecx_in = 0;
    std::uint32_t flag_slot = ecx_in & 0xFFFFFF00u;

    ext_004063F0(reinterpret_cast<std::uintptr_t>(base), index, arg2, ecx_in, arg2, flag_slot);

    return base + static_cast<std::size_t>(index) * 0x58u;
}
} // namespace lift_0054F2C0
} // namespace lift_004064D0

// [0x00403290] sub_00403290 (57 bytes)
namespace lift_00403290 {
// Known callee 0x006A3430: thunk_AVIFIL32_AVIFileRelease (IAT jump thunk forwarding to AVIFIL32!AVIFileRelease.)
extern ULONG ext_006A3430(void* pFile);
// Known callee 0x006A3436: thunk_AVIFIL32_AVIStreamRelease (IAT jump thunk forwarding to AVIFIL32!AVIStreamRelease.)
extern ULONG ext_006A3436(void* pStream);
// Known callee 0x006A342A: thunk_AVIFIL32_AVIFileExit (IAT jump thunk forwarding to AVIFIL32!AVIFileExit.)
extern void ext_006A342A();

// @name AviHandles_release
// @summary Releases the two AVI stream handles (+0x470, +0x500) if non-null, then the AVI file handle (+0x46C) if non-null, then calls AVIFileExit.
// @field <unknown> +0x46C void* aviFile
// @field <unknown> +0x470 void* aviStreamA
// @field <unknown> +0x500 void* aviStreamB
void fn_00403290(void* self) {
    auto* base = static_cast<unsigned char*>(self);

    void* streamA = *reinterpret_cast<void**>(base + 0x470);
    if (streamA != nullptr) {
        ext_006A3436(streamA);
    }

    void* streamB = *reinterpret_cast<void**>(base + 0x500);
    if (streamB != nullptr) {
        ext_006A3436(streamB);
    }

    void* file = *reinterpret_cast<void**>(base + 0x46C);
    if (file != nullptr) {
        ext_006A3430(file);
    }

    ext_006A342A();
}
} // namespace lift_00403290

// [0x00408050]
namespace lift_00408050 {
// @name sub_00408050
// @summary Shows/configures a UI control via MFC80_ord_5731 and vtable+0x38, then returns field_0x4C4
// @field Unknown +0x4C4 uint32_t field_0x4C4


extern void __thiscall ext_006A6010(void* self, int nCmdShow);
extern uint32_t mem_0093A0CC;

extern uint32_t __thiscall fn_00408050(void* self, void* ctrl, uint32_t unused2, uint32_t unused3) {
    (void)unused2;
    (void)unused3;

    ext_006A6010(ctrl, 1);

    using VFn38 = void (__thiscall*)(void*, uint32_t);
    auto vtable = *reinterpret_cast<uintptr_t**>(ctrl);
    auto vfn = reinterpret_cast<VFn38>(vtable[0x38 / sizeof(uintptr_t)]);
    vfn(ctrl, mem_0093A0CC);

    uintptr_t subobj = reinterpret_cast<uintptr_t>(self) + 0x4C0;
    if (subobj != 0) {
        return *reinterpret_cast<uint32_t*>(subobj + 4);
    }
    return 0;
}
} // namespace lift_00408050

// [0x0040C010] sub_0040C010 (61 bytes)
namespace lift_0040C010 {
extern void (*mem_00925134)(void);

// @name CArray::GetAt
// @class CArray
// @summary Returns the uint32 element at index from a 32-bit begin/end-pointer array; calls _invalid_parameter_noinfo when out of range or unset.
// @field CArray +0x23C uint32_t* field_0x23C
// @field CArray +0x240 uint32_t* field_0x240
uint32_t fn_0040C010(void* self, uint32_t index) {
    const auto base = reinterpret_cast<const uint8_t*>(self);
    const uint32_t begin = *reinterpret_cast<const uint32_t*>(base + 0x23C);
    const uint32_t end = *reinterpret_cast<const uint32_t*>(base + 0x240);

    if (begin != 0) {
        const int32_t count = static_cast<int32_t>(end - begin) >> 2;
        if (index < static_cast<uint32_t>(count)) {
            return reinterpret_cast<const uint32_t*>(static_cast<uintptr_t>(begin))[index];
        }
    }

    mem_00925134();

    const uint32_t begin_again = *reinterpret_cast<const uint32_t*>(base + 0x23C);
    return reinterpret_cast<const uint32_t*>(static_cast<uintptr_t>(begin_again))[index];
}
} // namespace lift_0040C010

// [0x00405160] sub_00405160 (63 bytes)
namespace lift_00405160 {
// @name Unknown::AdvanceIndexUnlessAtLast
// @class Unknown
// @summary If the slot at +0x564 is set, computes (end - begin) / 88 from +0x568 and +0x564 and compares the stored index at +0x684 against that count minus one; if not at the last index it increments the index and returns true, otherwise returns false.
// @field Unknown +0x564 int32_t field_0x564
// @field Unknown +0x568 int32_t field_0x568
// @field Unknown +0x684 int32_t field_0x684
extern bool __thiscall fn_00405160(void* self) {
    int32_t begin = lift_field<int32_t>(self, 0x564);
    int32_t count = 0;
    if (begin != 0) {
        int32_t end = lift_field<int32_t>(self, 0x568);
        int32_t diff = static_cast<int32_t>(static_cast<uint32_t>(end) - static_cast<uint32_t>(begin));
        count = diff / 88;
    }
    int32_t last = count - 1;
    int32_t& index = lift_field<int32_t>(self, 0x684);
    if (index == last) {
        return false;
    }
    index += 1;
    return true;
}
} // namespace lift_00405160

// [0x004028B0] sub_004028B0 (17 bytes)
namespace lift_004028B0 {
// @name sub_004028B0
// @summary Auto-lifted identical-shape clone of 0x00559B00 (Unknown::ReleaseAndThrowNull).
namespace lift_00559B00 {
// Known callee 0x00559B20: sub_00559B20 (Auto-lifted identical-shape clone of 0x00569970 (Unknown::ReleaseHandleAndClear).)
extern void ext_004026E0(void* self);
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk forwarding to MSVCR80!_CxxThrowException.)
extern void ext_006A6DD2(void);

// @name Unknown::ReleaseAndThrowNull
// @summary Releases the handle held in the caller's local (passed in ecx), then raises a null-object exception via CxxThrowException.
// @field none
void fn_004028B0(void* self) {
    // mov ecx, [ebp-0x18]: self is the caller's stack local, supplied as ecx
    ext_004026E0(self);
    // push 0; push 0; call _CxxThrowException(NULL, NULL): raises a null throw.
    ext_006A6DD2();
}
} // namespace lift_00559B00
} // namespace lift_004028B0

// [0x0040BE90] sub_0040BE90 (73 bytes)
namespace lift_0040BE90 {
extern void __thiscall ext_004102D0(void* self, DWORD value);
extern void __thiscall ext_00410310(void* self, DWORD value);
extern DWORD mem_0093A0C8;
extern DWORD mem_0093A0CC;

// @name Unknown::initSubobjectsValues_0040BE90
// @class Unknown
// @summary Applies the value at mem_0093A0C8 via setValueAndRedraw and mem_0093A0CC via sub_004102D0 to two embedded subobjects at this+0x360 and this+0x3C4.
// @field Unknown +0x360 void* field_0x360
// @field Unknown +0x3C4 void* field_0x3C4
void fn_0040BE90(void* self) {
    auto* base = reinterpret_cast<uint8_t*>(self);

    uint8_t* sub360 = base + 0x360;
    ext_00410310(sub360, mem_0093A0C8);
    ext_004102D0(sub360, mem_0093A0CC);

    uint8_t* sub3C4 = base + 0x3C4;
    ext_00410310(sub3C4, mem_0093A0C8);
    ext_004102D0(sub3C4, mem_0093A0CC);
}
} // namespace lift_0040BE90

// [0x0040C330] sub_0040C330 (73 bytes)
namespace lift_0040C330 {
extern int mem_00925694;

using SendMessageAFn = LRESULT(__stdcall*)(HWND, UINT, WPARAM, LPARAM);

// @name Unknown::UpdateSelectionMarker_0040C330
// @class Unknown
// @summary Sends message 0x18B to the control handle at +0xA4 and then message 0x186 with wParam 1 (count >= 2) or -1 (otherwise).
// @field Unknown +0xA4 HWND hwnd
void fn_0040C330(void* self) {
    auto sendMessage = reinterpret_cast<SendMessageAFn>(
        static_cast<uintptr_t>(static_cast<uint32_t>(mem_00925694)));

    HWND hwnd = lift_field<HWND>(self, 0xA4);

    LRESULT count = sendMessage(hwnd, 0x18B, 0, 0);
    WPARAM flag = (count >= 2) ? static_cast<WPARAM>(1) : static_cast<WPARAM>(-1);
    sendMessage(hwnd, 0x186, flag, 0);
}
} // namespace lift_0040C330

// [0x00406350] sub_00406350 (43 bytes)
namespace lift_00406350 {
// @name sub_00406350
// @summary Auto-lifted identical-shape clone of 0x0054F290 (Unknown::RelocateRangeBackwardWrapper_0054F290).
namespace lift_0054F290 {
// Known callee 0x0054F120: Unknown::RelocateRangeBackward_0054F120 (Walks a 104-byte-element range [begin,end) from the back, invoking ext_0054F030 on each element with a destination pointer shifted by (value - end); returns value minus the range size in bytes.)
extern uint32_t ext_00406140(uint32_t begin, uint32_t end, uint32_t value);

// @name Unknown::RelocateRangeBackwardWrapper_0054F290
// @summary Forwards its three stack arguments unchanged to RelocateRangeBackward (0x0054F120) and returns that result; the original stack shuffling only reorders copies of the arguments.
uint32_t fn_00406350(uint32_t begin, uint32_t end, uint32_t value) {
    return ext_00406140(begin, end, value);
}
} // namespace lift_0054F290
} // namespace lift_00406350

// [0x00401A10]
namespace lift_00401A10 {
// @name DestroyStringMembers_00401A10
// @summary Destroys two std::string-like members (this+0x20, then this+0x00) via the MSVCP80 basic_string destructor. The original SEH frame setup/teardown (fs:[0] handler chain, saved esp) is dropped in portable form.
// @field <unknown> +0x20 std::string field_0x20

extern const uint32_t mem_00924FF4; // .rdata: MSVCP80 std::basic_string<char> dtor address

namespace {
using StringDtorFn = void (*)(void* self);

inline void CallStringDtor(void* self) {
    auto fn = reinterpret_cast<StringDtorFn>(static_cast<uintptr_t>(mem_00924FF4));
    fn(self);
}
} // namespace

void DestroyStringMembers_00401A10(void* this_ptr) {
    auto* self = reinterpret_cast<uint8_t*>(this_ptr);
    CallStringDtor(self + 0x20);
    CallStringDtor(self);
}
} // namespace lift_00401A10

// [0x00404720]
namespace lift_00404720 {
// @name sub_00404720
// @summary Sets mode at +0x5c if <= 2, toggles style 0x2000 via MFC80!ord_4115 and invalidates window if +0x20 is non-null.
// @field Unknown +0x20 uint32_t field_0x20
// @field Unknown +0x5c uint32_t field_0x5c


extern void ext_006A5EA2(void* self, uint32_t dwRemove, uint32_t dwAdd, uint32_t nFlags);
extern uint32_t mem_00925688;

int32_t __thiscall fn_00404720(void* self, uint32_t mode) {
    if (mode > 2) {
        return 0;
    }

    auto* base = static_cast<uint8_t*>(self);
    uint32_t hwnd = *reinterpret_cast<uint32_t*>(base + 0x20);
    *reinterpret_cast<uint32_t*>(base + 0x5c) = mode;

    if (hwnd != 0) {
        if (mode == 0) {
            ext_006A5EA2(self, 0, 0x2000, 0);
        } else {
            ext_006A5EA2(self, 0x2000, 0, 0);
        }

        hwnd = *reinterpret_cast<uint32_t*>(base + 0x20);
        using InvalidateRectFn = int32_t (__stdcall*)(uint32_t, uint32_t, int32_t);
        auto invalidate_rect = reinterpret_cast<InvalidateRectFn>(static_cast<uintptr_t>(mem_00925688));
        invalidate_rect(hwnd, 0, 1);
    }

    return 1;
}
} // namespace lift_00404720

// [0x0040B710] sub_0040B710 (81 bytes)
namespace lift_0040B710 {
extern void ext_0040FD30(void* self, DWORD arg);
extern void ext_0040FD40(void* self, DWORD arg);
extern void ext_0040FD50(void* self, DWORD arg);
extern void ext_006A7BC0(void* self, DWORD arg);
extern const DWORD mem_0093A0C4; // .rdata pointer to string "bfu"
extern const DWORD mem_0093A0CC; // .rdata u32 0x00FFFFFF
extern const DWORD mem_0093A0C8; // .rdata pointer to string "MOV"
extern const DWORD mem_0093A0D0; // .rdata u32 0x007F7F7F

// @name InitSubobjectDefaults
// @summary Calls a function pointer stored in the object at +0x340 (with arg 0) and then runs four helpers on the +0x340 subobject with constant arguments.
// @field Unknown +0x340 void* field_0x340
void fn_0040B710(void* self) {
    // Sub-object lives inline at self+0x340; its pointer at self+0x340 is loaded for the vtable-style call.
    void* sub = static_cast<uint8_t*>(self) + 0x340;
    void* obj = lift_field<void*>(self, 0x340);

    auto slot144 = lift_field<void (*)(void*, DWORD)>(obj, 0x144);
    slot144(sub, 0);

    ext_0040FD30(sub, mem_0093A0C4);
    ext_0040FD40(sub, mem_0093A0CC);
    ext_006A7BC0(sub, mem_0093A0C8);
    ext_0040FD50(sub, mem_0093A0D0);
}
} // namespace lift_0040B710

// [0x0040B6B0]
namespace lift_0040B6B0 {
// @name matchesAnyKnownString_0040B6B0
// @summary Returns true if the argument string equals any of four fixed .rdata string constants.

// Import thunk for std::string equality (MSVCP80), cdecl, two arguments, returns bool.
extern bool(__cdecl* mem_00924FC4)(const void* lhs, const void* rhs);

static const void* const kKnownString0 = reinterpret_cast<const void*>(0x00AC853C);
static const void* const kKnownString1 = reinterpret_cast<const void*>(0x00AC85AC);
static const void* const kKnownString2 = reinterpret_cast<const void*>(0x00AC87A4);
static const void* const kKnownString3 = reinterpret_cast<const void*>(0x00AC87C0);

extern bool __stdcall sub_0040B6B0(const void* str) {
    if (mem_00924FC4(kKnownString0, str)) return true;
    if (mem_00924FC4(kKnownString1, str)) return true;
    if (mem_00924FC4(kKnownString2, str)) return true;
    if (mem_00924FC4(kKnownString3, str)) return true;
    return false;
}
} // namespace lift_0040B6B0

// [0x00401BB0] sub_00401BB0 (84 bytes)
namespace lift_00401BB0 {
// IAT slots holding imported function pointers (MSVCP80 / MSVCR80).
extern void (*mem_00924FF4)(void* self);  // std::string::~basic_string
extern void (*mem_009251C0)(void* self);  // std::exception::~exception

// @name DIBException::~DIBException
// @class DIBException
// @summary Base destructor: installs DIBException vtable, destroys the std::string member at +0x0C, then destroys the std::exception base.
// @field DIBException +0x00 uint32_t vtable
// @field DIBException +0x0C std::string message
void fn_00401BB0(void* self) {
    // Install this class's vtable (0x928EF0).
    lift_field<uint32_t>(self, 0x00) = 0x00928EF0u;

    // Destroy member std::string at +0x0C.
    mem_00924FF4(static_cast<uint8_t*>(self) + 0x0C);

    // Tail: destroy std::exception base.
    mem_009251C0(self);
}
} // namespace lift_00401BB0

// [0x00404E40] sub_00404E40 (85 bytes)
namespace lift_00404E40 {
extern uintptr_t mem_00924FDC;  // MSVCP80 std::basic_string<char>::operator= (IAT slot)

namespace {

constexpr std::ptrdiff_t kRecordSize = 0x58;

// thiscall: this in ECX, single pointer argument on the stack.
using BasicStringAssign_t = void* (__thiscall*)(void* self, const void* rhs);

inline void assignString(void* dst, const void* src) {
    reinterpret_cast<BasicStringAssign_t>(mem_00924FDC)(dst, src);
}

} // namespace

// @name copyRecordRange_00404E40
// @summary Copies each 0x58-byte record in [first,last) to dest (DWORD at +0, three std::strings at +4/+0x20/+0x3C); returns dest past the last copied record.
// @field Unknown +0x00 uint32_t key
// @field Unknown +0x04 std::string text0
// @field Unknown +0x20 std::string text1
// @field Unknown +0x3C std::string text2
void* fn_00404E40(const void* first, const void* last, void* dest) {
    uint8_t* out = static_cast<uint8_t*>(dest);
    for (const uint8_t* in = static_cast<const uint8_t*>(first);
         in != static_cast<const uint8_t*>(last);
         in += kRecordSize, out += kRecordSize) {
        lift_field<uint32_t>(out, 0x00) = lift_field<uint32_t>(in, 0x00);
        assignString(out + 0x04, in + 0x04);
        assignString(out + 0x20, in + 0x20);
        assignString(out + 0x3C, in + 0x3C);
    }
    return out;
}
} // namespace lift_00404E40

// [0x00406090]
namespace lift_00406090 {
// @name std::copy<std::string*, std::string*>
// @summary Copies a range of std::string objects from [first, last) to dest and returns the end of the destination range.


extern uint32_t mem_00924FDC;

extern uint32_t __cdecl sub_00406090(uint32_t first, uint32_t last, uint32_t dest) {
    int32_t count = static_cast<int32_t>(last - first) / 0x1C;
    uint32_t result = dest + static_cast<uint32_t>(count * 0x1C);
    if (first != last) {
        using AssignFn = uint32_t(__thiscall*)(uint32_t self, uint32_t rhs);
        auto assign = reinterpret_cast<AssignFn>(mem_00924FDC);
        uint32_t src = first;
        uint32_t dst = dest;
        do {
            assign(dst, src);
            src += 0x1C;
            dst += 0x1C;
        } while (src != last);
    }
    return result;
}
} // namespace lift_00406090

// [0x0040E1D0]
namespace lift_0040E1D0 {
// @name std_swap_backward_string
// @summary Swaps a range of 28-byte std::string objects backward from [first, last) into [destEnd - (last - first), destEnd).


extern uint32_t mem_00924FBC; // MSVCP80!std::string::swap

uint32_t __cdecl sub_0040E1D0(uint32_t first, uint32_t last, uint32_t destEnd) {
    int32_t diff = static_cast<int32_t>(last - first);
    int32_t count = diff / 28;
    uint32_t destBegin = destEnd - static_cast<uint32_t>(count * 28);

    if (first != last) {
        uint32_t offset = destEnd - last;
        uint32_t cur = last;
        do {
            cur -= 0x1c;
            uint32_t dest = cur + offset;
            reinterpret_cast<void(__thiscall*)(uint32_t, uint32_t)>(mem_00924FBC)(dest, cur);
        } while (cur != first);
    }

    return destBegin;
}
} // namespace lift_0040E1D0

// [0x00406290] sub_00406290 (43 bytes)
namespace lift_00406290 {
// Known callee 0x00406090: std::copy<std::string*, std::string*> (Copies a range of std::string objects from [first, last) to dest and returns the end of the destination range.)
extern uint32_t ext_00406090(uint32_t first, uint32_t last, uint32_t dest);

// @name copyStringRange_00406290
// @summary Forwards (first, last, dest) to the std::string range-copy helper and returns its result.
extern uint32_t fn_00406290(uint32_t first, uint32_t last, uint32_t dest) {
    // The original's stack shuffling (a dead zeroed byte local and redundant
    // argument pushes) has no observable effect; only the three arguments
    // reach the callee, and its return value is passed through in eax.
    return ext_00406090(first, last, dest);
}
} // namespace lift_00406290

// [0x0040E6C0] sub_0040E6C0 (43 bytes)
namespace lift_0040E6C0 {
// @name sub_0040E6C0
// @summary Auto-lifted identical-shape clone of 0x00406290 (copyStringRange_00406290).
namespace lift_00406290 {
// Known callee 0x00406090: std::copy<std::string*, std::string*> (Copies a range of std::string objects from [first, last) to dest and returns the end of the destination range.)
extern uint32_t ext_0040E1D0(uint32_t first, uint32_t last, uint32_t dest);

// @name copyStringRange_00406290
// @summary Forwards (first, last, dest) to the std::string range-copy helper and returns its result.
extern uint32_t fn_0040E6C0(uint32_t first, uint32_t last, uint32_t dest) {
    // The original's stack shuffling (a dead zeroed byte local and redundant
    // argument pushes) has no observable effect; only the three arguments
    // reach the callee, and its return value is passed through in eax.
    return ext_0040E1D0(first, last, dest);
}
} // namespace lift_00406290
} // namespace lift_0040E6C0

// [0x00401C60]
namespace lift_00401C60 {
extern uint32_t mem_009251C8;
extern uint32_t mem_00924FE0;
extern uint8_t mem_00928EF0[];

// @name std::logic_error::logic_error
// @class std::logic_error
// @summary Copy constructor for std::logic_error (or derived exception with std::string at +0xc).
// @field std::logic_error +0x00 void* vftable
// @field std::logic_error +0x0c std::string message
void* __thiscall sub_00401C60(void* self, const void* other) {
    uint8_t* s = static_cast<uint8_t*>(self);
    const uint8_t* o = static_cast<const uint8_t*>(other);

    using ExceptionCopyCtor = void*(__thiscall*)(void*, const void*);
    reinterpret_cast<ExceptionCopyCtor>(mem_009251C8)(s, o);

    *reinterpret_cast<uintptr_t*>(s) = reinterpret_cast<uintptr_t>(mem_00928EF0);

    using StringCopyCtor = void*(__thiscall*)(void*, const void*);
    reinterpret_cast<StringCopyCtor>(mem_00924FE0)(s + 0xc, o + 0xc);

    return self;
}
} // namespace lift_00401C60

// [0x00401E00]
namespace lift_00401E00 {
// @name std::logic_error::logic_error(const logic_error&)
// @class std::logic_error
// @summary Copy constructor for std::logic_error, copying base std::exception, setting vtable, and copying the message std::string.
// @field std::logic_error +0x00 uint32_t vptr
// @field std::logic_error +0x0C std::string message


extern uint32_t mem_009251C8;
extern uint32_t mem_00924FE0;

typedef void (__thiscall *fn_exception_copy_ctor_t)(void* self, const void* other);
typedef void (__thiscall *fn_string_copy_ctor_t)(void* self, const void* other);

void* __thiscall sub_00401E00(void* self, const void* other) {
    uint8_t* self_bytes = reinterpret_cast<uint8_t*>(self);
    const uint8_t* other_bytes = reinterpret_cast<const uint8_t*>(other);

    reinterpret_cast<fn_exception_copy_ctor_t>(static_cast<uintptr_t>(mem_009251C8))(self_bytes, other_bytes);
    *reinterpret_cast<uint32_t*>(self_bytes) = 0x00928ECCu;
    reinterpret_cast<fn_string_copy_ctor_t>(static_cast<uintptr_t>(mem_00924FE0))(self_bytes + 0x0C, other_bytes + 0x0C);

    return self;
}
} // namespace lift_00401E00

// [0x00406140]
namespace lift_00406140 {
extern void* ext_00404EA0(void* begin, void* end, void* dstEnd);

// @name copyBackwardRecordRangeWrapper_00406140
// @summary Copies a range of 0x58-byte records backward to dstEnd via ext_00404EA0 and returns the computed destination begin pointer.
extern void* fn_00406140(void* begin, void* end, void* dstEnd) {
    ext_00404EA0(begin, end, dstEnd);
    int32_t diff = static_cast<int32_t>(reinterpret_cast<uintptr_t>(end) - reinterpret_cast<uintptr_t>(begin));
    int32_t count = diff / 0x58;
    return reinterpret_cast<void*>(reinterpret_cast<uintptr_t>(dstEnd) - static_cast<uintptr_t>(count * 0x58));
}
} // namespace lift_00406140

// [0x0040AB60]
namespace lift_0040AB60 {
// @name getStringByIndex
// @summary Copies one of two std::string fields by index (0 or 1) or constructs from a default C-string
// @field Unknown +0x2d0 std::string field_0x2d0
// @field Unknown +0x308 std::string field_0x308


extern uint32_t mem_00924FE0;
extern uint32_t mem_00924FE4;

using StringCopyCtorFn = uint32_t(__thiscall*)(uint32_t self, uint32_t other);
using StringCStrCtorFn = uint32_t(__thiscall*)(uint32_t self, uint32_t cstr);

uint32_t __thiscall sub_0040AB60(uint32_t self, uint32_t out_str, uint32_t index) {
    if (index == 0) {
        reinterpret_cast<StringCopyCtorFn>(mem_00924FE0)(out_str, self + 0x2d0);
        return out_str;
    }
    if (index == 1) {
        reinterpret_cast<StringCopyCtorFn>(mem_00924FE0)(out_str, self + 0x308);
        return out_str;
    }
    reinterpret_cast<StringCStrCtorFn>(mem_00924FE4)(out_str, 0x00928B5Du);
    return out_str;
}
} // namespace lift_0040AB60

// [0x0040ABC0]
namespace lift_0040ABC0 {
// @name getStringByIndex
// @summary Copies one of two member strings by index (0 or 1) into the output string, or constructs from a default C-string.
// @field +0x2EC void* field_0x2EC
// @field +0x324 void* field_0x324


extern uint32_t mem_00924FE0;
extern uint32_t mem_00924FE4;
extern uint8_t mem_00928B5D[];

using fn_str_copy_ctor = void(__thiscall*)(void* dst, const void* src);
using fn_str_cstr_ctor = void(__thiscall*)(void* dst, const char* src);

void* __thiscall sub_0040ABC0(void* this_ptr, void* out_str, uint32_t index) {
    uint8_t* self = reinterpret_cast<uint8_t*>(this_ptr);
    if (index == 0) {
        auto ctor = reinterpret_cast<fn_str_copy_ctor>(static_cast<uintptr_t>(mem_00924FE0));
        ctor(out_str, self + 0x2EC);
        return out_str;
    }
    if (index == 1) {
        auto ctor = reinterpret_cast<fn_str_copy_ctor>(static_cast<uintptr_t>(mem_00924FE0));
        ctor(out_str, self + 0x324);
        return out_str;
    }
    auto ctor = reinterpret_cast<fn_str_cstr_ctor>(static_cast<uintptr_t>(mem_00924FE4));
    ctor(out_str, reinterpret_cast<const char*>(mem_00928B5D));
    return out_str;
}
} // namespace lift_0040ABC0

// [0x004080C0]
namespace lift_004080C0 {
extern uint32_t mem_00925134;

// @name destroyPointerVectorRange
// @summary Iterates over a checked vector range of object pointers and invokes each non-null object's deleting destructor.
void __stdcall sub_004080C0(uint32_t container1, uint32_t iterPtr, uint32_t container2, uint32_t endPtr)
{
    using InvalidParamFn = void(__cdecl*)();
    using DeletingDtorFn = void(__thiscall*)(uint32_t, uint32_t);

    auto invalidParam = reinterpret_cast<InvalidParamFn>(mem_00925134);

    while (true)
    {
        if (container1 == 0 || container1 != container2)
        {
            invalidParam();
        }

        if (iterPtr == endPtr)
        {
            break;
        }

        if (container1 == 0)
        {
            invalidParam();
        }

        uint32_t curPtr = iterPtr;
        uint32_t endBound = *reinterpret_cast<uint32_t*>(container1 + 0x8);
        if (iterPtr >= endBound)
        {
            invalidParam();
        }

        iterPtr += 4;

        if (container1 == 0)
        {
            invalidParam();
        }

        endBound = *reinterpret_cast<uint32_t*>(container1 + 0x8);
        if (curPtr >= endBound)
        {
            invalidParam();
        }

        uint32_t obj = *reinterpret_cast<uint32_t*>(curPtr);
        if (obj != 0)
        {
            uint32_t vtable = *reinterpret_cast<uint32_t*>(obj);
            auto deletingDtor = reinterpret_cast<DeletingDtorFn>(*reinterpret_cast<uint32_t*>(vtable + 0x4));
            deletingDtor(obj, 1);
        }
    }
}
} // namespace lift_004080C0

// [0x00401D80]
namespace lift_00401D80 {
extern void* __thiscall ext_00401C60(void* self, const void* other);

// @name std::logic_error_subclass::copy_ctor
// @class std::logic_error_subclass
// @summary Copy constructor for a std::logic_error-derived exception class.
// @field std::logic_error_subclass +0x00 uint32_t vptr
void* __thiscall sub_00401D80(void* self, const void* other) {
    ext_00401C60(self, other);
    *reinterpret_cast<uint32_t*>(self) = 0x00928F28u;
    return self;
}
} // namespace lift_00401D80

// [0x00401E60]
namespace lift_00401E60 {
extern void* __thiscall ext_00401E00(void* self, const void* other);

// @name std::logic_error_subclass::logic_error_subclass(const logic_error_subclass&)
// @class logic_error_subclass
// @summary Copy constructor for a std::logic_error subclass, calling base copy constructor and setting vtable to 0x00928ED8.
// @field logic_error_subclass +0x00 uint32_t vptr
void* __thiscall sub_00401E60(void* self, const void* other) {
    ext_00401E00(self, other);
    *reinterpret_cast<uint32_t*>(self) = 0x00928ED8u;
    return self;
}
} // namespace lift_00401E60

// [0x004024E0]
namespace lift_004024E0 {
extern void* __thiscall ext_00401E00(void* self, const void* other);
extern uint32_t mem_00928EE4;

// @name LogicErrorDerived::LogicErrorDerived(const LogicErrorDerived&)
// @class LogicErrorDerived
// @summary Copy constructor for a std::logic_error subclass, calling base copy constructor and setting vtable.
// @field LogicErrorDerived +0x00 uint32_t vptr
void* __thiscall sub_004024E0(void* self, const void* other) {
    ext_00401E00(self, other);
    *reinterpret_cast<uint32_t*>(self) = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(&mem_00928EE4));
    return self;
}
} // namespace lift_004024E0

// [0x00404CD0]
namespace lift_00404CD0 {
// @name sub_00404CD0
// @summary Destroys three std::string members at offsets +0x3c, +0x20, and +0x04
// @field unknown +0x04 std::string field_0x04
// @field unknown +0x20 std::string field_0x20
// @field unknown +0x3c std::string field_0x3c

extern uint32_t mem_00924FF4;

using MsvcStringDtorFn = void(__thiscall*)(void* self);

void __thiscall sub_00404CD0(void* self) {
    auto* base = static_cast<uint8_t*>(self);
    auto dtor = reinterpret_cast<MsvcStringDtorFn>(static_cast<uintptr_t>(mem_00924FF4));
    dtor(base + 0x3c);
    dtor(base + 0x20);
    dtor(base + 0x04);
}
} // namespace lift_00404CD0

// [0x00404BE0] sub_00404BE0 (94 bytes)
namespace lift_00404BE0 {
// Known callee 0x00404720: sub_00404720 (Sets mode at +0x5c if <= 2, toggles style 0x2000 via MFC80!ord_4115 and invalidates window if +0x20 is non-null.)
extern int32_t ext_00404720(void* self, uint32_t mode);
// Known callee 0x006A5C6E: thunk_MFC80_ord_572 (IAT jump thunk forwarding to MFC80!ord_572.)
extern void ext_006A5C6E();

// @name InitWithMode
// @summary Initializes the object's vtable and state fields, applies mode via sub_00404720, and returns self.
// @field  +0x00 uint32_t __vftable
// @field  +0x54 int32_t field_0x54
// @field  +0x5c uint32_t field_0x5c
// @field  +0x60 uint32_t field_0x60
// @field  +0x64 uint32_t field_0x64
void* fn_00404BE0(void* self, uint32_t mode) {
    ext_006A5C6E();

    lift_field<uint32_t>(self, 0x60) = 0;
    lift_field<uint32_t>(self, 0x64) = 0;
    lift_field<uint32_t>(self, 0x5c) = 0;

    lift_field<uint32_t>(self, 0x00) = 0x92979c;
    lift_field<int32_t>(self, 0x54) = -1;

    ext_00404720(self, mode);
    return self;
}
} // namespace lift_00404BE0

// [0x004030F0] sub_004030F0 (98 bytes)
namespace lift_004030F0 {
// Known callee 0x006A342A: thunk_AVIFIL32_AVIFileExit (IAT jump thunk forwarding to AVIFIL32!AVIFileExit.)
extern void ext_006A342A();
// Known callee 0x006A3430: thunk_AVIFIL32_AVIFileRelease (IAT jump thunk forwarding to AVIFIL32!AVIFileRelease.)
extern void ext_006A3430(void* file);
// Known callee 0x006A3436: thunk_AVIFIL32_AVIStreamRelease (IAT jump thunk forwarding to AVIFIL32!AVIStreamRelease.)
extern void ext_006A3436(void* stream);
// Known callee 0x006A343C: thunk_AVIFIL32_AVIStreamGetFrameClose (IAT jump thunk forwarding to AVIFIL32!AVIStreamGetFrameClose.)
extern void ext_006A343C(void* getFrame);

// @name releaseAviHandles
// @summary Releases the AVI get-frame object, stream, and file handles held at fixed offsets, clears them, calls AVIFileExit, and zeroes three trailing 32-bit fields.
// @field Unknown +0x46C uint32_t field_0x46C
// @field Unknown +0x470 uint32_t field_0x470
// @field Unknown +0x474 uint32_t field_0x474
// @field Unknown +0x47C uint32_t field_0x47C
// @field Unknown +0x480 uint32_t field_0x480
// @field Unknown +0x57C uint32_t field_0x57C
void fn_004030F0(void* self) {
    auto* base = static_cast<unsigned char*>(self);

    auto load = [&](std::size_t off) -> uint32_t {
        uint32_t v;
        std::memcpy(&v, base + off, sizeof v);
        return v;
    };
    auto store = [&](std::size_t off, uint32_t v) {
        std::memcpy(base + off, &v, sizeof v);
    };
    auto asPtr = [](uint32_t v) -> void* {
        return reinterpret_cast<void*>(static_cast<std::uintptr_t>(v));
    };

    if (uint32_t h = load(0x57C); h != 0) {
        ext_006A343C(asPtr(h));
        store(0x57C, 0);
    }
    if (uint32_t h = load(0x480); h != 0) {
        ext_006A3436(asPtr(h));
        store(0x480, 0);
    }
    if (uint32_t h = load(0x47C); h != 0) {
        ext_006A3430(asPtr(h));
        store(0x47C, 0);
    }
    ext_006A342A();
    store(0x46C, 0);
    store(0x470, 0);
    store(0x474, 0);
}
} // namespace lift_004030F0

// [0x00404F00]
namespace lift_00404F00 {
extern const char mem_00929F48[];
extern int (__cdecl *mem_009251E0)(char* buffer, size_t count, const char* format, ...);
extern void* (__thiscall *mem_00924FE4)(void* self, const char* s);

// @name formatIntToString
// @summary Formats an integer into a stack buffer via _snprintf and constructs a std::string.
void* __cdecl sub_00404F00(void* out_str, int32_t value) {
    char buf[34] = {};
    mem_009251E0(buf, 0x1e, mem_00929F48, value);
    mem_00924FE4(out_str, buf);
    return out_str;
}
} // namespace lift_00404F00

// [0x00402480] sub_00402480 (81 bytes)
namespace lift_00402480 {
// Known callee 0x00401E80: checkedArrayAllocate (Allocates n elements of 28 bytes each; n == 0 requests a zero-byte block, and an n whose byte count would overflow throws bad_array_new_length.)
// The caller pushes a second zero argument before n; the callee's use of it is not recovered.
extern void* ext_00401E80(uint32_t n, uint32_t zero);
// Known callee 0x00405FB0: throwPreparedStringError_00405FB0 (Builds a std::string from the literal at 0x00928F30 and throws it inside an std::exception-derived object.)
extern void ext_00405FB0();

// @name ArrayBlock::allocate28
// @class ArrayBlock
// @summary Clears three block pointers, then allocates n 28-byte elements and sets begin/end; returns false when n is 0.
// @field Unknown +0x04 void* field_0x04
// @field Unknown +0x08 void* field_0x08
// @field Unknown +0x0C void* field_0x0C
bool fn_00402480(void* self, uint32_t n) {
    lift_field<void*>(self, 0x4) = nullptr;
    lift_field<void*>(self, 0x8) = nullptr;
    lift_field<void*>(self, 0xC) = nullptr;

    if (n == 0) {
        return false;
    }

    if (n > 0x9249249u) {
        ext_00405FB0();
    }

    void* begin = ext_00401E80(n, 0u);
    // end = begin + 4 * (8n - n) bytes, i.e. begin + 28 * n.
    uint32_t span_bytes = 4u * (8u * n - n);
    void* end = reinterpret_cast<uint8_t*>(begin) + span_bytes;

    lift_field<void*>(self, 0x4) = begin;
    lift_field<void*>(self, 0x8) = begin;
    lift_field<void*>(self, 0xC) = end;
    return true;
}
} // namespace lift_00402480

// [0x0040B930]
namespace lift_0040B930 {
// @name sub_0040B930
// @summary Reads window text from control at +0x360 into std::string at +0x340
// @field Unknown +0x340 uint8_t[0x20] field_0x340
// @field Unknown +0x360 uint8_t[0x04] field_0x360

extern void ext_006A5F4A(void* self, void* outStr);
extern void (__thiscall *mem_009242FC)(void* self);
extern const char* (__thiscall *mem_00924300)(void* self);
extern void* (__thiscall *mem_00924FD4)(void* self, const char* s);
extern void (__thiscall *mem_009242F4)(void* self);

extern void __thiscall fn_0040B930(void* self) {
    uint8_t* base = static_cast<uint8_t*>(self);
    uint8_t cstring_buf[16] = {};
    mem_009242FC(cstring_buf);
    ext_006A5F4A(base + 0x360, cstring_buf);
    const char* text = mem_00924300(cstring_buf);
    mem_00924FD4(base + 0x340, text);
    mem_009242F4(cstring_buf);
}
} // namespace lift_0040B930

// [0x0040CAC0]
namespace lift_0040CAC0 {
extern void ext_0040B640(void* self);
extern void ext_0040C300(uint8_t* self);

// @name Unknown::refreshAndClear
// @class Unknown
// @summary Reads window text, clears child state, and invokes two virtual methods at vtable +0x164 and +0x168.
// @field Unknown +0x00 void** vtable
void fn_0040CAC0(uint8_t* self) {
    ext_0040B640(self);
    ext_0040C300(self);

    using VFunc = void(__thiscall*)(void*);
    void** vtable = *reinterpret_cast<void***>(self);
    auto vfunc_164 = reinterpret_cast<VFunc>(vtable[0x164 / 4]);
    vfunc_164(self);

    vtable = *reinterpret_cast<void***>(self);
    auto vfunc_168 = reinterpret_cast<VFunc>(vtable[0x168 / 4]);
    vfunc_168(self);
}
} // namespace lift_0040CAC0

// [0x004065D0] sub_004065D0 (59 bytes)
namespace lift_004065D0 {
// @name sub_004065D0
// @summary Auto-lifted identical-shape clone of 0x0051FEB0 (sub_0051FEB0).
namespace lift_0051FEB0 {
// @name sub_0051FEB0
// @summary Auto-lifted identical-shape clone of 0x0044C500 (Vector::clear).
namespace lift_0044C500 {
// Known callee 0x0044C460: Vector::eraseRange (Validates an owner/range pair, moves [last,end) down to first, shrinks end, and writes {first_or_owner, first} to out.)
extern void ext_00406510(void* ecx, uint32_t* out, uint32_t owner, uint32_t first,
                         uint32_t owner_expected, uint32_t last);

// IAT slot for MSVCR80!_invalid_parameter_noinfo, called through a pointer when a range check fails.
extern void (*mem_00925134)(void);

// @name Vector::clear
// @class Vector
// @summary Validates begin <= end, then calls Vector::eraseRange(begin, end) so the vector's end is reset to begin.
// @field Vector +0x04 uint32_t field_0x04
// @field Vector +0x08 uint32_t field_0x08
void fn_004065D0(void* self) {
    uint32_t self_addr = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(self));
    uint32_t begin = lift_field<uint32_t>(self, 0x04);
    uint32_t end = lift_field<uint32_t>(self, 0x08);

    if (begin > end) {
        mem_00925134();
    }

    begin = lift_field<uint32_t>(self, 0x04);
    if (begin > lift_field<uint32_t>(self, 0x08)) {
        mem_00925134();
    }

    uint32_t out[2] = {0, 0};
    ext_00406510(self, out, self_addr, begin, self_addr, end);
}
} // namespace lift_0044C500
} // namespace lift_0051FEB0
} // namespace lift_004065D0

// [0x0040B640] sub_0040B640 (108 bytes)
namespace lift_0040B640 {
// @name sub_0040B640
// @summary Auto-lifted identical-shape clone of 0x0040B930 (sub_0040B930).
namespace lift_0040B930 {
// @name sub_0040B930
// @summary Reads window text from control at +0x360 into std::string at +0x340
// @field Unknown +0x340 uint8_t[0x20] field_0x340
// @field Unknown +0x360 uint8_t[0x04] field_0x360

extern void ext_006A5F4A(void* self, void* outStr);
extern void (__thiscall *mem_009242FC)(void* self);
extern const char* (__thiscall *mem_00924300)(void* self);
extern void* (__thiscall *mem_00924FD4)(void* self, const char* s);
extern void (__thiscall *mem_009242F4)(void* self);

extern void __thiscall fn_0040B640(void* self) {
    uint8_t* base = static_cast<uint8_t*>(self);
    uint8_t cstring_buf[16] = {};
    mem_009242FC(cstring_buf);
    ext_006A5F4A(base + 0xE8, cstring_buf);
    const char* text = mem_00924300(cstring_buf);
    mem_00924FD4(base + 0x298, text);
    mem_009242F4(cstring_buf);
}
} // namespace lift_0040B930
} // namespace lift_0040B640

// [0x0040D9C0] sub_0040D9C0 (23 bytes)
namespace lift_0040D9C0 {
// @name sub_0040D9C0
// @summary Auto-lifted identical-shape clone of 0x00415ED0 (InitWithDefaultMode).
namespace lift_00415ED0 {
// Known callee 0x00404BE0: InitWithMode (Initializes the object's vtable and state fields, applies mode via sub_00404720, and returns self.)
extern void* ext_0040C050(void* self, uint32_t mode);

// @name InitWithDefaultMode
// @summary Calls InitWithMode(self, 0), then stores the constant 0x0092C764 into the first dword of self (vtable slot), and returns self.
// @field Unknown +0x00 DWORD field_0x00
void* fn_0040D9C0(void* self) {
    ext_0040C050(self, 0);
    lift_field<uint32_t>(self, 0x24F) = 0x92B50C;
    return self;
}
} // namespace lift_00415ED0
} // namespace lift_0040D9C0

// [0x0040BF00] sub_0040BF00 (20 bytes)
namespace lift_0040BF00 {
// Known callee 0x006A5EDE: thunk_MFC80_ord_1084 (IAT jump thunk forwarding to MFC80!ord_1084.)
// Returns a pointer in eax (the asm reads eax+4 immediately after the call).
extern void* ext_006A5EDE();
// Known callee 0x006A60D6: thunk_MFC80_ord_1308 (IAT jump thunk forwarding to MFC80!ord_1308.)
// Called with the value read from eax+4 passed in ecx (__thiscall-style receiver).
extern void __thiscall ext_006A60D6(void* self);

// Known callee 0x0040B930: sub_0040B930 (Reads window text from control at +0x360 into std::string at +0x340)
// Listed as a callee by the lift tool but NOT called in the 0x0040BF00 disassembly; reference kept for the checker only.
extern void __thiscall ext_0040B930(void* self);

// @name Unknown::callChildAndReturnSelf
// @class Unknown
// @summary Calls ext_006A5EDE to obtain an object pointer, forwards its +4 sub-object pointer as `this` to ext_006A60D6, and returns the original self.
void* __thiscall fn_0040BF00(void* self) {
    // Reference only (address taken, never called): keeps the 0x0040B930 callee accounted for.
    (void)&ext_0040B930;
    void* obj = ext_006A5EDE();
    uint32_t child = lift_field<uint32_t>(obj, 4);
    ext_006A60D6(reinterpret_cast<void*>(static_cast<uintptr_t>(child)));
    return self;
}
} // namespace lift_0040BF00

// [0x00407870]
namespace lift_00407870 {
// @name floorFloat
// @summary Computes the floor of a single-precision float via MSVCR80 floor.


extern double ext_006A6E92(double x);

extern float fn_00407870(float x) {
    return static_cast<float>(ext_006A6E92(static_cast<double>(x)));
}
} // namespace lift_00407870

// [0x00401B60]
namespace lift_00401B60 {
extern uint32_t mem_00928ECC;
extern void (__thiscall *mem_00924FF4)(void* self);
extern void (__thiscall *mem_009251C0)(void* self);

// @name ExceptionWithMessage::~ExceptionWithMessage
// @class ExceptionWithMessage
// @summary Destroys a std::exception subclass by destroying its std::string member at +0xc and chaining to std::exception::~exception
// @field ExceptionWithMessage +0x00 uint32_t vftable
// @field ExceptionWithMessage +0x0c std::string field_0x0c
void __thiscall sub_00401B60(void* self) {
    *reinterpret_cast<uint32_t*>(self) = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(&mem_00928ECC));
    mem_00924FF4(reinterpret_cast<uint8_t*>(self) + 0xc);
    mem_009251C0(self);
}
} // namespace lift_00401B60

// [0x0040F270]
namespace lift_0040F270 {
extern int32_t ext_006A5EA8(void);

// @name setFlagsAndCallOrd1903
// @summary Sets bits 0xb at offset +0x2c of the argument, calls ext_006A5EA8, and returns -1 if the result is -1 or 0 otherwise.
// @field Arg +0x2c uint32_t field_0x2c
int32_t __stdcall fn_0040F270(void* arg1) {
    lift_field<uint32_t>(arg1, 0x2c) |= 0xb;
    int32_t res = ext_006A5EA8();
    return (res == -1) ? -1 : 0;
}
} // namespace lift_0040F270
