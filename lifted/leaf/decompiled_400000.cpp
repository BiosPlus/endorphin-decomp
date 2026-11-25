// Lifted C++ translation unit: lifted/leaf/decompiled_400000.cpp
#include "lift_compat.h"
#include <cstdint>
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

// [0x0040FE70]
namespace lift_0040FE70 {
extern void ext_006A5EA8(void);
extern uint32_t mem_00925688;

// @name ToggleFlag54AndInvalidate
// @class Unknown
// @summary Sets this+0x54 to 1 if it was 0 (else 0), calls ext_006A5EA8, then InvalidateRect(this+0x20, NULL, TRUE).
// @field Unknown +0x20 uint32_t field_0x20
// @field Unknown +0x54 uint32_t field_0x54

extern void fn_0040FE70(uint8_t* self) {
    uint32_t prev = *reinterpret_cast<uint32_t*>(self + 0x54);
    *reinterpret_cast<uint32_t*>(self + 0x54) = (prev == 0) ? 1u : 0u;

    ext_006A5EA8();

    uint32_t hwnd = *reinterpret_cast<uint32_t*>(self + 0x20);
    using InvalidateRect_t = int(__stdcall*)(uint32_t, const void*, int);
    auto invalidateRect = reinterpret_cast<InvalidateRect_t>(mem_00925688);
    invalidateRect(hwnd, nullptr, 1);
}
} // namespace lift_0040FE70

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

// [0x00406590] sub_00406590 (63 bytes)
namespace lift_00406590 {
// @name sub_00406590
// @summary Auto-lifted identical-shape clone of 0x00569970 (Unknown::ReleaseHandleAndClear).
namespace lift_00569970 {
extern void ext_00406380(uint32_t a0, uint32_t a1, void* a2, void* a3);
extern void fn_006A5C5C(uint32_t arg);

// @name Unknown::ReleaseHandleAndClear
// @class Unknown
// @summary If field +0x04 is nonzero, run ext_005693E0 with it and forward it to fn_006A5C5C, then clear fields +0x04, +0x08 and +0x0C.
// @field Unknown +0x04 uint32_t field_0x04
// @field Unknown +0x08 uint32_t field_0x08
// @field Unknown +0x0C uint32_t field_0x0C
void fn_00406590(void* self) {
    if (lift_field<uint32_t>(self, 0x4) != 0) {
        // Argument order matches the original pushes: a0 = f04, a1 = f08, a2 = self, a3 = ecx (self).
        ext_00406380(lift_field<uint32_t>(self, 0x4),
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
} // namespace lift_00406590

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

// [0x00404770]
namespace lift_00404770 {
// @name Unknown::SetControlFont
// @class Unknown
// @summary Stores two pointer-sized args at this+0x60/+0x64, then sends WM_SETFONT (0x30) to the control handle at this+0x20 using the font from the first non-null argument.
// @field Unknown +0x20 HWND hwnd
// @field Unknown +0x60 uint32_t arg1_saved
// @field Unknown +0x64 uint32_t arg2_saved

// Guest-memory helpers (resolved by the host harness).
extern uint32_t ext_ReadGuest32(uint32_t addr);
extern int32_t ext_SendMessageA(uint32_t hwnd, uint32_t msg, uint32_t wparam, int32_t lparam);

// Import-table slot for USER32!SendMessageA (value at this address is the IAT entry).
extern const uint32_t mem_00925694;

namespace {
constexpr uint32_t kWmSetFont = 0x30;
}

// __thiscall-style: this in ecx, two stack args, callee cleans 8 bytes.
int32_t Unknown_SetControlFont(void* self, uint32_t arg1, uint32_t arg2) {
    lift_field<uint32_t>(self, 0x60) = arg1;
    lift_field<uint32_t>(self, 0x64) = arg2;

    const uint32_t hwnd = lift_field<uint32_t>(self, 0x20);

    if (arg2 != 0) {
        const uint32_t font = ext_ReadGuest32(arg2 + 0x4);
        return ext_SendMessageA(hwnd, kWmSetFont, font, 1);
    }
    if (arg1 != 0) {
        const uint32_t font = ext_ReadGuest32(arg1 + 0x4);
        return ext_SendMessageA(hwnd, kWmSetFont, font, 1);
    }
    return 0;
}
} // namespace lift_00404770

// [0x004077E0] sub_004077E0 (69 bytes)
namespace lift_004077E0 {
// MFC80 ordinal 2902: thiscall (ecx = textObj), one stack arg (out pointer), returns a count. Semantics not identified.
extern uint32_t ext_MFC80_ord_2902(void* self, void* out);
// MFC80 ordinal 876: thiscall (ecx = textObj), no stack args, returns the string pointer.
extern LPCTSTR ext_MFC80_ord_876(void* self);
// GDI32!GetTextExtentPoint32A: stdcall(hdc, lpString, cbString, lpSize).
extern BOOL ext_GDI32_GetTextExtentPoint32A(HDC hdc, LPCTSTR str, int32_t count, SIZE* size);

// @name Unknown::getTextExtent
// @class Unknown
// @summary Measures a text object with GDI and writes the resulting cx/cy pair to an output SIZE.
// @field Unknown +0x08 HDC field_0x08
void fn_004077E0(void* self, SIZE* outSize, void* textObj) {
    SIZE measured{};

    const uint32_t count = ext_MFC80_ord_2902(textObj, &measured);
    LPCTSTR text = ext_MFC80_ord_876(textObj);

    HDC hdc = lift_field<HDC>(self, 0x08);
    ext_GDI32_GetTextExtentPoint32A(hdc, text, static_cast<int32_t>(count), &measured);

    outSize->cx = measured.cx;
    outSize->cy = measured.cy;
}
} // namespace lift_004077E0

// [0x004053C0] sub_004053C0 (70 bytes)
namespace lift_004053C0 {
// IAT slot 0x00925134 holds MSVCR80!_invalid_parameter_noinfo (noreturn).
extern void ext_MSVCR80_invalid_parameter_noinfo();
extern int mem_00925134;

// @name Unknown::getIndexedRecordDword
// @class Unknown
// @summary Returns the first dword of the record at index this->+0x684 in the 0x58-byte record array [+0x564, +0x568); invalid-parameter path if the array is empty or the index is out of range.
// @field Unknown +0x564 DWORD recordsBegin
// @field Unknown +0x568 DWORD recordsEnd
// @field Unknown +0x684 DWORD recordIndex
DWORD fn_004053C0(void* self) {
    auto* base = static_cast<uint8_t*>(self);
    const DWORD begin = *reinterpret_cast<DWORD*>(base + 0x564);
    const DWORD index = *reinterpret_cast<DWORD*>(base + 0x684);

    // Record count = (end - begin) / sizeof(record) with sizeof(record) == 0x58.
    const DWORD end = *reinterpret_cast<DWORD*>(base + 0x568);
    const auto diff = static_cast<int32_t>(end - begin);
    const DWORD count = static_cast<DWORD>(diff / 0x58);

    if (begin == 0 || index >= count) {
        ext_MSVCR80_invalid_parameter_noinfo();
    }

    const DWORD recordBase = *reinterpret_cast<DWORD*>(base + 0x564);
    const auto* record = reinterpret_cast<const uint8_t*>(static_cast<uintptr_t>(recordBase))
                         + static_cast<size_t>(index) * 0x58;
    return *reinterpret_cast<const DWORD*>(record);
}
} // namespace lift_004053C0

// [0x004026E0] sub_004026E0 (71 bytes)
namespace lift_004026E0 {
// Known callee 0x006A5C5C: thunk_MFC80_ord_764 (IAT jump thunk forwarding to MFC80!ord_764.)
// Takes one cdecl argument (the buffer pointer), pushed before the call in the original.
extern void ext_006A5C5C(void* buffer);
// Element destructor pointed to by mem_00924FF4 (0x00628FF0, MSVCP80 basic_string<char> dtor).
extern void ext_00628FF0(void* self);
extern int mem_00924FF4;

// @name StringArray::ReleaseElements
// @class StringArray
// @summary Destroys each 28-byte string element in the array, frees its buffer, and nulls the begin/end/capacity pointers.
// @field StringArray +0x04 void* begin
// @field StringArray +0x08 void* end
// @field StringArray +0x0C void* capacity
void fn_004026E0(void* self) {
    auto* obj = static_cast<unsigned char*>(self);
    auto** begin_slot = reinterpret_cast<unsigned char**>(obj + 0x04);
    auto** end_slot = reinterpret_cast<unsigned char**>(obj + 0x08);
    auto** cap_slot = reinterpret_cast<unsigned char**>(obj + 0x0C);

    unsigned char* begin = *begin_slot;
    if (begin != nullptr) {
        unsigned char* end = *end_slot;
        for (unsigned char* p = begin; p != end; p += 0x1c) {
            ext_00628FF0(p);
        }
        ext_006A5C5C(begin);
    }

    *begin_slot = nullptr;
    *end_slot = nullptr;
    *cap_slot = nullptr;
}
} // namespace lift_004026E0

// [0x0040B2B0]
namespace lift_0040B2B0 {
// @name Unknown::StringFromModeOrGlobal
// @summary Constructs an std::string into the caller's sret slot: copies the global string for mode 1 or 2, otherwise builds it from the rdata C string; returns the slot pointer.
// Note: no struct fields are accessed; the function only constructs std::string objects, so no @field lines are emitted.

// Rdata C string literal (contents not recovered).
extern const char mem_00928B5D[];
// Global std::string object (0x00AC8884).
extern std::string mem_00AC8884;

// Stdcall, 2 args (callee cleans 8 bytes): hidden std::string* return slot and an int mode selector.
std::string* __stdcall fn_0040B2B0(std::string* out, int mode) {
    if (mode == 1 || mode == 2) {
        new (out) std::string(mem_00AC8884);
    } else {
        new (out) std::string(mem_00928B5D);
    }
    return out;
}
} // namespace lift_0040B2B0

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
