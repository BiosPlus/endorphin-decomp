// Lifted C++ translation unit: lifted/leaf/decompiled_530000.cpp
#include "lift_compat.h"
#include <cstring>
#include <new>
#include <string>

#include <string>
namespace lift_00530070 {
extern void* ext_006A5C62(size_t size);
extern void* ext_0052F890(void* self);

// @name sub_00530070
// @summary Auto-lifted identical-shape clone of 0x0061EA10 (HingeSecondaryConstraint::AllocAndConstruct).
void* fn_00530070() {
    constexpr size_t kHingeSecondaryConstraintSize = 0xCC;

    void* obj = ext_006A5C62(kHingeSecondaryConstraintSize);
    if (obj == nullptr) {
        return nullptr;
    }
    return ext_0052F890(obj);
}
} // namespace lift_00530070
#include <cstdint>
#include <stdexcept>

// [0x005300D0] sub_005300D0 (86 bytes)
namespace lift_005300D0 {
extern void* ext_006A5C62(size_t size);
extern void* ext_0052F9C0(void* self);

// @name sub_005300D0
// @summary Auto-lifted identical-shape clone of 0x0061EA10 (HingeSecondaryConstraint::AllocAndConstruct).
void* fn_005300D0() {
    constexpr size_t kHingeSecondaryConstraintSize = 0x58;

    void* obj = ext_006A5C62(kHingeSecondaryConstraintSize);
    if (obj == nullptr) {
        return nullptr;
    }
    return ext_0052F9C0(obj);
}
} // namespace lift_005300D0

// [0x00530130] sub_00530130 (89 bytes)
namespace lift_00530130 {
extern void* ext_006A5C62(size_t size);
extern void* ext_0052FA40(void* self);

// @name sub_00530130
// @summary Auto-lifted identical-shape clone of 0x0061EA10 (HingeSecondaryConstraint::AllocAndConstruct).
void* fn_00530130() {
    constexpr size_t kHingeSecondaryConstraintSize = 0x124;

    void* obj = ext_006A5C62(kHingeSecondaryConstraintSize);
    if (obj == nullptr) {
        return nullptr;
    }
    return ext_0052FA40(obj);
}
} // namespace lift_00530130

// [0x00530190] sub_00530190 (86 bytes)
namespace lift_00530190 {
extern void* ext_006A5C62(size_t size);
extern void* ext_0052FC10(void* self);

// @name sub_00530190
// @summary Auto-lifted identical-shape clone of 0x0061EA10 (HingeSecondaryConstraint::AllocAndConstruct).
void* fn_00530190() {
    constexpr size_t kHingeSecondaryConstraintSize = 0x48;

    void* obj = ext_006A5C62(kHingeSecondaryConstraintSize);
    if (obj == nullptr) {
        return nullptr;
    }
    return ext_0052FC10(obj);
}
} // namespace lift_00530190

// [0x00537EC0]
namespace lift_00537EC0 {
extern uint32_t mem_read32(uint32_t addr);
extern void ext_0063E006(uint32_t quadric);

// @name QuadricWrapper::destroy
// @class QuadricWrapper
// @summary Deletes the GLU quadric object stored at offset +0x00.
// @field QuadricWrapper +0x00 uint32_t quadric
void __fastcall fn_00537EC0(uint32_t ecx, uint32_t edx) {
    (void)edx;
    uint32_t quadric = mem_read32(ecx);
    ext_0063E006(quadric);
}
} // namespace lift_00537EC0

// [0x0053C8F0]
namespace lift_0053C8F0 {
// @name Unknown::initDerivedVtable
// @class Unknown
// @summary Runs the base initializer on self, then installs the derived vtable at +0x00 and returns self.
// @field Unknown +0x00 uint32_t vtable

void fn_00532B60(void* self);

void* fn_0053C8F0(void* self) {
    fn_00532B60(self);
    *reinterpret_cast<uint32_t*>(self) = 0x00955B6Cu;
    return self;
}
} // namespace lift_0053C8F0

// [0x00532B40]
namespace lift_00532B40 {
// @name Unknown::dtor_00532B40
// @class Unknown
// @summary Sets vtable to 0x009543E4 and unlinks peer at +0x08 if it points back to this at +0x04.
// @field Unknown +0x00 uint32_t vtable
// @field Unknown +0x08 void* peer


extern void __thiscall ext_00528B90(void* self, void* peer);

void __thiscall fn_00532B40(void* self) {
    *reinterpret_cast<uint32_t*>(self) = 0x009543E4u;
    void* peer = *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(self) + 0x08);
    if (peer != nullptr && *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(peer) + 0x04) == self) {
        ext_00528B90(peer, nullptr);
    }
}
} // namespace lift_00532B40

// [0x00538530] sub_00538530 (31 bytes)
namespace lift_00538530 {
// Known callee 0x00532B60: Unknown::initVtableAndFlags (Stores the vtable address at +0x00, sets flag bytes at +0x04 and +0x0C to 1, and zeroes the dwords at +0x08 and +0x10.)
extern void ext_00532B60();

// @name Unknown::InitWithVTableAndDefaults
// @class Unknown
// @summary Base-initializes this object, then sets vtable to 0x95501c, a float at +0x14 to 1.0, and flag bytes at +0x18 and +0x19 to 1; returns this.
// @field Unknown +0x00 void* vtable
// @field Unknown +0x14 float field_0x14
// @field Unknown +0x18 uint8_t field_0x18
// @field Unknown +0x19 uint8_t field_0x19
void* fn_00538530(void* self) {
    auto* p = static_cast<unsigned char*>(self);
    ext_00532B60(); // thiscall: ecx = self, still live from entry
    *reinterpret_cast<float*>(p + 0x14) = 1.0f;
    p[0x18] = 1;
    p[0x19] = 1;
    *reinterpret_cast<const void**>(p) = reinterpret_cast<const void*>(static_cast<std::uintptr_t>(0x95501cu));
    return self;
}
} // namespace lift_00538530

// [0x0053ACF0] sub_0053ACF0 (32 bytes)
namespace lift_0053ACF0 {
// @name SetMaskBitsToMatchFlag
// @class Unknown
// @summary Tests whether all bits in mask are set in this+0x04; if that result differs from flag, toggles those mask bits in this+0x04.
// @field Unknown +0x04 uint32_t field_0x04
void fn_0053ACF0(void* self, uint32_t mask, uint8_t flag) {
    uint32_t bits = lift_field<uint32_t>(self, 0x04);
    uint8_t allSet = ((bits & mask) == mask) ? 1 : 0;
    if (allSet != flag) {
        bits ^= mask;
        lift_field<uint32_t>(self, 0x04) = bits;
    }
}
} // namespace lift_0053ACF0

// [0x0053F6A0] sub_0053F6A0 (32 bytes)
namespace lift_0053F6A0 {
// Callee (ext_00533D40): stores its 3rd argument into this+0x498.
void fn_00533D40(void* self, DWORD arg0, DWORD value);

// @name ForwardSetField498ToChild
// @class Unknown
// @summary Forwards the second stack argument to child object at this+0xB4 via SetField498 with tag 0x93A444; pops 8 bytes.
// @field Unknown +0xB4 void* field_0xB4
void fn_0053F6A0(void* self, DWORD arg0, DWORD value) {
    (void)arg0; // first stack argument is unused; callee receives the constant tag 0x93A444
    void* child = lift_field<void*>(self, 0xB4);
    fn_00533D40(child, 0x93A444u, value);
}
} // namespace lift_0053F6A0

// [0x00533D50] sub_00533D50 (33 bytes)
namespace lift_00533D50 {
// Known callee 0x00532B40: Unknown::dtor_00532B40 (Sets vtable to 0x009543E4 and unlinks peer at +0x08 if it points back to this at +0x04.)
extern void ext_00532B40(void* self);
extern uint32_t mem_009253E8; // IAT slot holding glDeleteLists
extern uint32_t mem_009547FC; // .rdata constant (unused by this body; vtable is written as an immediate)

// @name Unknown::dtor_00533D50
// @class Unknown
// @summary Sets vtable to 0x009547FC, deletes the display list at +0x30 if present, then chains to the base dtor 0x00532B40.
// @field Unknown +0x00 uint32_t vtable
// @field Unknown +0x30 GLuint displayList
void fn_00533D50(void* self) {
    // [0x00533D50] mov [esi], 0x9547fc
    lift_field<uint32_t>(self, 0x00) = 0x009547FCu;

    // [0x00533D53] mov eax, [esi+0x30]; test eax, eax; je ...
    GLuint displayList = lift_field<GLuint>(self, 0x30);
    if (displayList != 0) {
        // [0x00533D60] push 1; push eax; call [0x9253e8] ; glDeleteLists(list, 1)
        using glDeleteLists_t = void (*)(GLuint, GLsizei);
        auto glDeleteLists = reinterpret_cast<glDeleteLists_t>(
            static_cast<uintptr_t>(mem_009253E8));
        glDeleteLists(displayList, 1);
    }

    // [0x00533D69] mov ecx, esi; pop esi; jmp 0x532b40  (tail call with this = self)
    ext_00532B40(self);
}
} // namespace lift_00533D50

// [0x00533FB0]
namespace lift_00533FB0 {
// @name sub_00533FB0
// @summary Copy four floats from +0x08..+0x14 into output buffer and return it
// @field Object +0x08 float field_0x08
// @field Object +0x0c float field_0x0c
// @field Object +0x10 float field_0x10
// @field Object +0x14 float field_0x14


void* __thiscall sub_00533FB0(void* self, void* out) {
    float* dst = reinterpret_cast<float*>(out);
    const uint8_t* src = reinterpret_cast<const uint8_t*>(self);
    dst[0] = *reinterpret_cast<const float*>(src + 0x08);
    dst[1] = *reinterpret_cast<const float*>(src + 0x0c);
    dst[2] = *reinterpret_cast<const float*>(src + 0x10);
    dst[3] = *reinterpret_cast<const float*>(src + 0x14);
    return out;
}
} // namespace lift_00533FB0

// [0x005356C0]
namespace lift_005356C0 {
// @name copyByteRange
// @summary Copies a byte range [first, last) to dest using memmove if last > first, returning dest + (last - first).
uint32_t sub_005356C0(uint32_t first, uint32_t last, uint32_t dest) {
    int32_t size = static_cast<int32_t>(last - first);
    uint32_t result = dest + static_cast<uint32_t>(size);
    if (size > 0) {
        std::memmove(
            reinterpret_cast<void*>(static_cast<uintptr_t>(dest)),
            reinterpret_cast<const void*>(static_cast<uintptr_t>(first)),
            static_cast<size_t>(size)
        );
    }
    return result;
}
} // namespace lift_005356C0

// [0x00539B00] sub_00539B00 (41 bytes)
namespace lift_00539B00 {
// @name sub_00539B00
// @summary Auto-lifted identical-shape clone of 0x0044C4D0 (DWORD_RangeCopy_thiscall).
namespace lift_0044C4D0 {
// @name DWORD_RangeCopy_thiscall
// @summary Copies DWORDs from [first, last) to out via ext_0044C2A0 and returns out + count.

extern DWORD* ext_00539800(const DWORD* first, const DWORD* last, DWORD* out);

DWORD* __thiscall fn_00539B00(void* self, const DWORD* first, const DWORD* last, DWORD* out) {
    (void)self;
    return ext_00539800(first, last, out);
}
} // namespace lift_0044C4D0
} // namespace lift_00539B00

// [0x00538D10]
namespace lift_00538D10 {
// @name Unknown::SetFloatsAndField24
// @class Unknown
// @summary Forwards three floats to fn_00538CF0 and stores a 32-bit value at this+0x24.
// @field Unknown +0x24 uint32_t field_0x24

extern void mem_write32(uintptr_t addr, uint32_t val);
extern void __fastcall ext_00538CF0(void* self, void* edx, float arg1, float arg2, float arg3);

void __fastcall fn_00538D10(void* self, void* /*edx, unused*/, float arg1, float arg2, float arg3, uint32_t arg4) {
    ext_00538CF0(self, nullptr, arg1, arg2, arg3);
    mem_write32(reinterpret_cast<uintptr_t>(self) + 0x24, arg4);
}
} // namespace lift_00538D10

// [0x0053A5E0] sub_0053A5E0 (44 bytes)
namespace lift_0053A5E0 {
extern uint8_t mem_0093A444;

// @name Unknown::forwardArgToChildAndStoreResult
// @class Unknown
// @summary If child pointer at +0x08 is set, call its vtable slot 14 with (&mem_0093A444, arg) and store the uint8 result at +0x0C.
// @field Unknown +0x08 void* child
// @field Unknown +0x0C uint8_t result
void fn_0053A5E0(void* self, uint32_t arg) {
    auto* base = static_cast<uint8_t*>(self);
    void* child = *reinterpret_cast<void**>(base + 0x08);
    if (child == nullptr) {
        return;
    }
    using VSlot14Fn = uint8_t(__thiscall*)(void* obj, void* p, uint32_t v);
    void** vtable = *reinterpret_cast<void***>(child);
    auto fn = reinterpret_cast<VSlot14Fn>(vtable[0x38 / sizeof(void*)]);
    uint8_t r = fn(child, &mem_0093A444, arg);
    *reinterpret_cast<uint8_t*>(base + 0x0C) = r;
}
} // namespace lift_0053A5E0

// [0x0053F960] sub_0053F960 (46 bytes)
namespace lift_0053F960 {
extern int32_t mem_00A44B84;

// @name RangeExceedsThreshold
// @class Self
// @summary Returns 1 if either of the two (+0xC4 - +0xBC) or (+0xC8 - +0xC0) spans exceeds mem_00A44B84, else 0.
// @field Self +0xBC int32_t field_0xBC
// @field Self +0xC0 int32_t field_0xC0
// @field Self +0xC4 int32_t field_0xC4
// @field Self +0xC8 int32_t field_0xC8
int32_t fn_0053F960(void* self) {
    const int32_t threshold = mem_00A44B84;
    int32_t span0 = lift_field<int32_t>(self, 0xC4) - lift_field<int32_t>(self, 0xBC);
    if (span0 > threshold) {
        return 1;
    }
    int32_t span1 = lift_field<int32_t>(self, 0xC8) - lift_field<int32_t>(self, 0xC0);
    if (span1 > threshold) {
        return 1;
    }
    return 0;
}
} // namespace lift_0053F960

// [0x00539800] sub_00539800 (47 bytes)
namespace lift_00539800 {
namespace lift_00539800 {
// @name sub_00539800
// @summary Copies 12-byte (3 x float) records from [src_begin, src_end) to dst, advancing dst by 12 per record; skips the store when dst is null.

// Stack args (cdecl): src_begin = [esp+4], src_end = [esp+8], dst = [esp+12].
void __cdecl fn_00539800(const void* src_begin, const void* src_end, void* dst) {
    uintptr_t src = reinterpret_cast<uintptr_t>(src_begin);
    const uintptr_t end = reinterpret_cast<uintptr_t>(src_end);
    uintptr_t out = reinterpret_cast<uintptr_t>(dst);

    if (src == end) {
        return;
    }

    do {
        if (out != 0) {
            const float* s = reinterpret_cast<const float*>(src);
            float* d = reinterpret_cast<float*>(out);
            d[0] = s[0];
            d[1] = s[1];
            d[2] = s[2];
        }
        src += 0xC;
        out += 0xC;
    } while (src != end);
}
} // namespace lift_00539800
} // namespace lift_00539800

// [0x005304E0] sub_005304E0 (50 bytes)
namespace lift_005304E0 {
// @name Unknown::DispatchUnlessGated
// @class Unknown
// @summary Returns early if the +0x4C object's vtable slot 14 or the +0x10 object's vtable slot 49 reports true; otherwise tail-dispatches the +0x4C object's vtable slot 32.
// @field Unknown +0x10 void* field_0x10
// @field Unknown +0x4C void* field_0x4C

namespace lift_005304E0 {

// Virtual dispatch helpers: call vtable slot N (byte offset N*4 in the guest
// vtable) on `obj`, with `obj` as the only argument. Result is eax, kept whole.
extern uint32_t ext_vcall_slot14(void* obj);   // vtable +0x38
extern uint32_t ext_vcall_slot49(void* obj);   // vtable +0xC4
extern uint32_t ext_vcall_slot32(void* obj);   // vtable +0x80

uint32_t fn_005304E0(void* self) {
    unsigned char* base = static_cast<unsigned char*>(self);

    void* a = *reinterpret_cast<void**>(base + 0x4C);
    uint32_t r = ext_vcall_slot14(a);
    if (static_cast<uint8_t>(r) != 0) {
        return r;
    }

    void* b = *reinterpret_cast<void**>(base + 0x10);
    r = ext_vcall_slot49(b);
    if (static_cast<uint8_t>(r) != 0) {
        return r;
    }

    // Original is a tail jump (pop esi; jmp edx), so the callee sees this
    // function's own stack arguments. Those are not modelled; this forwards
    // with `this` only.
    a = *reinterpret_cast<void**>(base + 0x4C);
    return ext_vcall_slot32(a);
}

} // namespace lift_005304E0
} // namespace lift_005304E0

// [0x005331B0]
namespace lift_005331B0 {
// @name PumpOneWindowMessage
// @summary Peeks one queued window message (PM_REMOVE); if present, translates and dispatches it.
// @class none

// USER32 imports, reached in the original via IAT slots at 0x009255A0..0x009255A8.
using ext_PeekMessageA_t = int32_t (*)(void* lpMsg, void* hWnd, uint32_t wMsgFilterMin, uint32_t wMsgFilterMax, uint32_t wRemoveMsg);
using ext_TranslateMessage_t = int32_t (*)(const void* lpMsg);
using ext_DispatchMessageA_t = int32_t (*)(const void* lpMsg);

extern ext_PeekMessageA_t ext_PeekMessageA;
extern ext_TranslateMessage_t ext_TranslateMessage;
extern ext_DispatchMessageA_t ext_DispatchMessageA;

// IAT slot addresses (.rdata); the call goes through these.
extern void* mem_009255A0;
extern void* mem_009255A4;
extern void* mem_009255A8;

// MSG is 0x1C bytes: hwnd, message, wParam, lParam, time, pt.x, pt.y (7 x 32-bit).
struct WinMsg {
    void* hwnd;
    uint32_t message;
    uint32_t wParam;
    int32_t lParam;
    uint32_t time;
    int32_t ptX;
    int32_t ptY;
};
static_assert(sizeof(WinMsg) == 0x1C || sizeof(void*) == 8, "MSG must be 0x1C bytes on 32-bit");

void PumpOneWindowMessage() {
    WinMsg msg{};
    // PM_REMOVE = 1; no HWND filter, no min/max filter.
    if (ext_PeekMessageA(&msg, nullptr, 0, 0, 1) != 0) {
        ext_TranslateMessage(&msg);
        ext_DispatchMessageA(&msg);
    }
}
} // namespace lift_005331B0

// [0x005398C0]
namespace lift_005398C0 {
// Known callee 0x00539860: sub_00539860 (47 bytes), stdcall, 6 dword args.
extern void __stdcall ext_00539860(uint32_t a1, uint32_t a2, uint32_t a3,
                                       uint32_t a4, uint32_t a5, uint32_t a6);

// @name sub_005398C0
// @summary Calls ext_00539860 with the three stack args plus a zeroed dword flag, then returns base + 12 * index (12-byte element stride).
// @class (none)
//
// Stack args (stdcall, ret 0xC): arg1 = base pointer (edi), arg2 = element index (esi), arg3 = value forwarded to the callee.
// The entry ECX is pushed as a raw argument to the callee; it is not a declared input here,
// so it is passed as 0. The flag dword is the saved ECX with its low byte cleared by the byte store,
// so it is modelled as 0 as well (exact upper bits depend on the caller's ECX).
extern void* __stdcall fn_005398C0(uint32_t arg1, uint32_t arg2, uint32_t arg3) {
    const uint32_t entry_ecx = 0;  // not a declared input; see comment above
    const uint32_t flag = entry_ecx & ~0xFFu;  // byte store of 0 into low byte of saved ECX

    ext_00539860(arg1, arg2, arg3, entry_ecx, arg3, flag);

    uintptr_t base = static_cast<uintptr_t>(arg1);
    uintptr_t index = static_cast<uintptr_t>(arg2);
    uintptr_t offset = index * 3u * 4u;  // lea ecx,[esi+2*esi]; lea eax,[edi+4*ecx]
    return reinterpret_cast<void*>(base + offset);
}
} // namespace lift_005398C0

// [0x0053F990] sub_0053F990 (56 bytes)
namespace lift_0053F990 {
// Known callee 0x0053F960: RangeExceedsThreshold (Returns 1 if either of the two (+0xC4 - +0xBC) or (+0xC8 - +0xC0) spans exceeds mem_00A44B84, else 0.)
extern int32_t ext_0053F960(void* self);

// @name Unknown::UpdateRangeStreakCounter
// @class Unknown
// @summary If the pairs at +0xD0/+0xD8 and +0xD4/+0xDC are equal and RangeExceedsThreshold reports no overflow, increment the counter at +0xE0; otherwise reset it to 0.
// @field Unknown +0xd0 int32_t field_0xd0
// @field Unknown +0xd4 int32_t field_0xd4
// @field Unknown +0xd8 int32_t field_0xd8
// @field Unknown +0xdc int32_t field_0xdc
// @field Unknown +0xe0 uint32_t counter_0xe0
void fn_0053F990(void* self) {
    auto readU32 = [self](size_t off) {
        uint32_t v;
        std::memcpy(&v, static_cast<uint8_t*>(self) + off, sizeof v);
        return v;
    };
    auto writeU32 = [self](size_t off, uint32_t v) {
        std::memcpy(static_cast<uint8_t*>(self) + off, &v, sizeof v);
    };

    const bool pairA = readU32(0xd0) == readU32(0xd8);
    const bool pairB = pairA && readU32(0xd4) == readU32(0xdc);
    const bool rangeOk = pairB && static_cast<uint8_t>(ext_0053F960(self)) == 0;

    if (rangeOk) {
        writeU32(0xe0, readU32(0xe0) + 1u);
    } else {
        writeU32(0xe0, 0u);
    }
}
} // namespace lift_0053F990

// [0x00533FE0] sub_00533FE0 (58 bytes)
namespace lift_00533FE0 {
// @name descriptiveName: selectVec4ByThreshold
// @summary Copies a 16-byte (4 x float) vector to *out from this+0x08, or from this+0x18 when 0.0 <= this+0x24 fails (negative or NaN).
// @field <ClassName> +0x08 float field_0x08
// @field <ClassName> +0x0C float field_0x0C
// @field <ClassName> +0x10 float field_0x10
// @field <ClassName> +0x14 float field_0x14
// @field <ClassName> +0x18 float field_0x18
// @field <ClassName> +0x1C float field_0x1C
// @field <ClassName> +0x20 float field_0x20
// @field <ClassName> +0x24 float field_0x24
void fn_00533FE0(void* self, void* out) {
    const auto* base = static_cast<const uint8_t*>(self);

    float threshold;
    std::memcpy(&threshold, base + 0x24, sizeof(float));

    // Branch taken (use +0x08) when !(0.0f <= threshold): negative or unordered (NaN).
    const float zero = 0.0f;
    const std::size_t srcOffset = !(zero <= threshold) ? 0x08 : 0x18;

    std::memcpy(out, base + srcOffset, 4 * sizeof(float));
}
} // namespace lift_00533FE0

// [0x00534020] sub_00534020 (58 bytes)
namespace lift_00534020 {
// @name selectVec4ByFloatSign
// @summary Copies a 16-byte vector to the output buffer, choosing the source at this+0x28 when the float at this+0x34 is >= 0 (or +0.0) and at this+0x08 when it is negative or NaN.
// @field UnknownClass +0x08 float field_0x08[4]
// @field UnknownClass +0x28 float field_0x28[4]
// @field UnknownClass +0x34 float field_0x34
void fn_00534020(void* self, void* out) {
    auto* base = static_cast<unsigned char*>(self);

    // fcomp of 0.0 against [this+0x34]: the branch is taken for (0.0 > f) or unordered,
    // i.e. f < 0 or f is NaN. In that case use the +0x08 source, otherwise +0x28.
    float f;
    std::memcpy(&f, base + 0x34, sizeof(f));
    const unsigned char* src = !(0.0f >= f) ? base + 0x08 : base + 0x28;

    // Four 32-bit float copies (fld/fstp sequence in the original).
    std::memcpy(out, src, 16);
}
} // namespace lift_00534020

// [0x00533F10] sub_00533F10 (61 bytes)
namespace lift_00533F10 {
// OpenGL entry points resolved through the import address table.
using PFN_glViewport = void(__stdcall*)(GLint x, GLint y, GLsizei width, GLsizei height);
using PFN_glScissor  = void(__stdcall*)(GLint x, GLint y, GLsizei width, GLsizei height);

extern PFN_glViewport mem_00925400;
extern PFN_glScissor  mem_009253FC;

// @name Object::ApplyViewportAndScissor
// @class Object
// @summary Sets the GL viewport and scissor rectangle from the object's stored bounds.
// @field Object +0x04 int32_t field_0x04
// @field Object +0x08 int32_t field_0x08
// @field Object +0x0C int32_t field_0x0C
// @field Object +0x10 int32_t field_0x10
void fn_00533F10(void* self) {
    const GLint f04 = lift_field<int32_t>(self, 0x04);
    const GLint f08 = lift_field<int32_t>(self, 0x08);
    const GLint f0C = lift_field<int32_t>(self, 0x0C);
    const GLint f10 = lift_field<int32_t>(self, 0x10);

    const GLsizei width  = static_cast<GLsizei>(f10 - f08);
    const GLsizei height = static_cast<GLsizei>(f0C - f04);

    mem_00925400(f04, f08, width, height);  // glViewport
    mem_009253FC(f04, f08, width, height);  // glScissor
}
} // namespace lift_00533F10

// [0x0053B4B0] sub_0053B4B0 (61 bytes)
namespace lift_0053B4B0 {
// Known callee 0x005B11D0: UnknownClass::getElementPtr (Returns a pointer to the 32-bit element at the given index in an inline array at offset 0x10.)
extern uint32_t* ext_005B11D0(uintptr_t self, uint32_t index);

// .rdata table of 24 floats at 0x00955568..0x009555C7 (mem_009555C8 is the end sentinel).
extern const float mem_00955568[24];

// @name UnknownClass::ScaleInlineArrayByTable
// @class UnknownClass
// @summary For k in 0..23: out[k] = elem(self->+0x20, k % 3) * table[k], stored at self->+0x3C + 4k.
// @field UnknownClass +0x20 uint32_t field_0x20
// @field UnknownClass +0x3C float field_0x3C
void fn_0053B4B0(void* self) {
    // 8 outer passes x 3 inner passes = 24 elements.
    for (uint32_t k = 0; k < 24; ++k) {
        const uint32_t index = k % 3;
        const uintptr_t source = static_cast<uintptr_t>(lift_field<uint32_t>(self, 0x20));
        const float elem = *reinterpret_cast<const float*>(ext_005B11D0(source, index));
        lift_field<float>(self, 0x3C + static_cast<ptrdiff_t>(k) * 4) = elem * mem_00955568[k];
    }
}
} // namespace lift_0053B4B0

// [0x0053F9D0]
namespace lift_0053F9D0 {
// @name Unknown::ComputeCenteredRect
// @class Unknown
// @summary Writes a square RECT (left, top, right, bottom) of side `size` centered at x=cx, with top-based y offset derived from obj->field_0x1D4 - dy.
// @field Unknown +0xB4 void* field_0xB4
// @field Unknown +0x1D4 LONG field_0x1D4 (read through the pointer stored at +0xB4)
void fn_0053F9D0(void* self, RECT* out, LONG cx, LONG dy, LONG size) {
    void* obj = lift_field<void*>(self, 0xB4);
    LONG base_y = lift_field<LONG>(obj, 0x1D4) - dy;
    LONG half = size / 2;
    LONG left = cx - half;
    LONG top = base_y - half;
    out->left = left;
    out->top = top;
    out->right = left + size;
    out->bottom = top + size;
}
} // namespace lift_0053F9D0

// [0x0053B040] sub_0053B040 (70 bytes)
namespace lift_0053B040 {
// Known callee 0x006A5C62: thunk_MFC80_ord_762 (IAT jump thunk forwarding to MFC80!ord_762.)
extern void ext_006A5C62();
// .rdata constant 0x009553F4: its first slot holds 0x0053A730. The object's vtable
// pointer is written as the address 0x009553F4 itself (see below).
extern int mem_009553F4;

// @name Unknown::SwapPendingObject
// @class Unknown
// @summary Allocates an 8-byte object (vtable 0x009553F4, tag -1), swaps it into this+0x38
//          (destroying the previous occupant via its vtable slot 0), then tail-calls vtable slot 9 of the new object.
// @field Unknown +0x38 void* field_0x38
void fn_0053B040(void* self) {
    using AllocFn = void* (*)(uint32_t);
    using DtorFn = void (*)(void*, int);
    using VFn9 = void (*)(void*);

    // push 8; call alloc(8)
    void* obj = reinterpret_cast<AllocFn>(&ext_006A5C62)(8);

    void* esi = nullptr;
    if (obj != nullptr) {
        lift_field<uint32_t>(obj, 0) = 0x009553F4u; // vtable pointer
        lift_field<uint32_t>(obj, 4) = 0xFFFFFFFFu;
        esi = obj;
    }

    void* old = lift_field<void*>(self, 0x38);
    if (esi != old && old != nullptr) {
        void** vt = *reinterpret_cast<void***>(old);
        reinterpret_cast<DtorFn>(vt[0])(old, 1);
    }

    lift_field<void*>(self, 0x38) = esi;

    // tail jmp [vtbl + 0x24] on the new object
    void** vt = *reinterpret_cast<void***>(esi);
    reinterpret_cast<VFn9>(vt[9])(esi);
}
} // namespace lift_0053B040

// [0x0053AFA0] sub_0053AFA0 (70 bytes)
namespace lift_0053AFA0 {
// Known callee 0x006A5C62: thunk_MFC80_ord_762 (IAT jump thunk forwarding to MFC80!ord_762.)
extern void* ext_006A5C62(uint32_t size);
// .rdata u32 0x0053A730 at 0x009553B8 (vtable slot 0 of the object allocated here).
extern uint32_t mem_009553B8;

// @name ReplaceOwnedObjectAndDispatch
// @summary Allocates an 8-byte object (vtable 0x009553B8), swaps it into +0x38 (destroying the previous one), then returns its vtable slot 8 call result.
// @field ReplaceOwnedObjectAndDispatch +0x38 uint32_t field_0x38
uint32_t __thiscall fn_0053AFA0(uint8_t* self) {
    constexpr uint32_t kVtable = 0x009553B8u;

    // push 8; call ext_006A5C62 -> operator new(8) equivalent
    uintptr_t esi = 0;
    uintptr_t fresh = reinterpret_cast<uintptr_t>(ext_006A5C62(8));
    if (fresh != 0) {
        *reinterpret_cast<uint32_t*>(fresh) = kVtable;
        *reinterpret_cast<uint32_t*>(fresh + 4) = 0;
        esi = fresh;
    }

    // Destroy previous occupant of +0x38 if it is a different non-null object:
    // vtable slot 0 (scalar deleting destructor) with arg 1.
    uint32_t old = *reinterpret_cast<uint32_t*>(self + 0x38);
    if (esi != old && old != 0) {
        uintptr_t old_vt = *reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(old));
        uintptr_t dtor = *reinterpret_cast<uint32_t*>(old_vt);
        using DtorFn = void(__thiscall*)(uintptr_t, int);
        reinterpret_cast<DtorFn>(dtor)(static_cast<uintptr_t>(old), 1);
    }

    *reinterpret_cast<uint32_t*>(self + 0x38) = static_cast<uint32_t>(esi);

    // Tail-jump to vtable slot 8 (offset 0x20) of the new object.
    // The original is a jmp, so the callee's result is returned directly.
    if (esi == 0) {
        return 0;  // original would dereference null here; guarded for portability
    }
    uintptr_t vt = *reinterpret_cast<uint32_t*>(esi);
    uintptr_t slot8 = *reinterpret_cast<uint32_t*>(vt + 0x20);
    using Slot8Fn = uint32_t(__thiscall*)(uintptr_t);
    return reinterpret_cast<Slot8Fn>(slot8)(esi);
}
} // namespace lift_0053AFA0

// [0x0053AFF0] sub_0053AFF0 (71 bytes)
namespace lift_0053AFF0 {
// Known callee 0x006A5C62: thunk_MFC80_ord_762 (IAT jump thunk forwarding to MFC80!ord_762.)
// Used as operator new(12): cdecl, one stack argument, returns the allocation in eax.
extern void* ext_006A5C62(uint32_t size);
// .rdata 0x0095546C holds the value 0x0053A730 (first vtable slot of the class whose
// vtable lives at 0x0095546C). The vtable address itself is written as a literal below.
extern int mem_0095546C;

// @name SlotHolder::ReplaceChild
// @class SlotHolder
// @summary Allocates a 12-byte child object (vtable 0x0095546C, zeroed fields), swaps it into
//          this+0x38 (releasing the previous occupant via its vtable slot 0 with delete flag 1),
//          and tail-dispatches the new object's vtable slot 6.
// @field SlotHolder +0x38 void* field_0x38
void* fn_0053AFF0(void* self) {
    constexpr uint32_t kChildVtable = 0x0095546Cu;

    auto* holder = static_cast<uint8_t*>(self);

    // push 0xC; call operator new(12)
    void* allocated = ext_006A5C62(12u);

    uint32_t newChild = 0; // esi
    if (allocated != nullptr) {
        auto* words = static_cast<uint32_t*>(allocated);
        words[0] = kChildVtable; // [eax]   = vtable
        words[2] = 0;            // [eax+8] = 0
        words[1] = 0;            // [eax+4] = 0
        newChild = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(allocated));
    }

    // ecx = this->child (old occupant)
    uint32_t oldChild = *reinterpret_cast<uint32_t*>(holder + 0x38);

    if (newChild != oldChild && oldChild != 0) {
        auto* old = reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(oldChild));
        auto* oldVtbl = reinterpret_cast<uintptr_t*>(static_cast<uintptr_t>(old[0]));
        // call [vtbl+0] with delete flag 1 (scalar deleting destructor)
        using DtorFn = void (*)(void* thisPtr, int flags);
        auto dtor = reinterpret_cast<DtorFn>(oldVtbl[0]);
        dtor(reinterpret_cast<void*>(static_cast<uintptr_t>(oldChild)), 1);
    }

    *reinterpret_cast<uint32_t*>(holder + 0x38) = newChild;

    // ecx = newChild; eax = [newChild]; jmp [eax+0x18]
    auto* newObj = reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(newChild));
    auto* newVtbl = reinterpret_cast<uintptr_t*>(static_cast<uintptr_t>(newObj[0]));
    using TailFn = void* (*)(void* thisPtr);
    auto tail = reinterpret_cast<TailFn>(newVtbl[6]);
    return tail(newObj);
}
} // namespace lift_0053AFF0

// [0x00539890] sub_00539890 (43 bytes)
namespace lift_00539890 {
// @name sub_00539890
// @summary Auto-lifted identical-shape clone of 0x0054F290 (Unknown::RelocateRangeBackwardWrapper_0054F290).
namespace lift_0054F290 {
// Known callee 0x0054F120: Unknown::RelocateRangeBackward_0054F120 (Walks a 104-byte-element range [begin,end) from the back, invoking ext_0054F030 on each element with a destination pointer shifted by (value - end); returns value minus the range size in bytes.)
extern uint32_t ext_005397A0(uint32_t begin, uint32_t end, uint32_t value);

// @name Unknown::RelocateRangeBackwardWrapper_0054F290
// @summary Forwards its three stack arguments unchanged to RelocateRangeBackward (0x0054F120) and returns that result; the original stack shuffling only reorders copies of the arguments.
uint32_t fn_00539890(uint32_t begin, uint32_t end, uint32_t value) {
    return ext_005397A0(begin, end, value);
}
} // namespace lift_0054F290
} // namespace lift_00539890

// [0x0053B1F0] sub_0053B1F0 (75 bytes)
namespace lift_0053B1F0 {
extern uintptr_t mem_00925134;  // IAT slot holding the invalid-parameter handler

namespace {
// Reads a 32-bit guest pointer stored at base+off and returns it as a host pointer.
inline void* guest_ptr(const void* base, ptrdiff_t off) {
    return reinterpret_cast<void*>(static_cast<uintptr_t>(lift_field<uint32_t>(base, off)));
}
}  // namespace

// @name GetElementAddress
// @summary Validates self->+0x08/+0x0C and returns the address of element `index` in the
//          array at (self->+0x0C)+0x50, bounds-checked against its end pointer (+0x54).
// @field Unknown +0x08 uint32_t field_0x08
// @field Unknown +0x0C uint32_t field_0x0C
// @field Unknown +0x50 uint32_t field_0x50
// @field Unknown +0x54 uint32_t field_0x54
void* fn_0053B1F0(void* self, uint32_t index) {
    auto invalid_parameter = reinterpret_cast<void (*)()>(mem_00925134);

    // Validate the first referenced object (A = self->+0x08).
    const void* a = guest_ptr(self, 0x08);
    if (a == nullptr) {
        invalid_parameter();
    }
    if (lift_field<uint32_t>(self, 0x0C) == lift_field<uint32_t>(a, 0x04)) {
        invalid_parameter();
    }

    // Element array lives in the object B = self->+0x0C.
    const void* b = guest_ptr(self, 0x0C);
    const uint32_t begin = lift_field<uint32_t>(b, 0x50);
    const uint32_t end = lift_field<uint32_t>(b, 0x54);

    if (begin == 0) {
        invalid_parameter();
    } else {
        const uint32_t count = static_cast<uint32_t>(static_cast<int32_t>(end - begin) >> 2);
        if (!(index < count)) {
            invalid_parameter();
        }
    }

    return reinterpret_cast<void*>(static_cast<uintptr_t>(begin + 4u * index));
}
} // namespace lift_0053B1F0

// [0x0053E290] sub_0053E290 (77 bytes)
namespace lift_0053E290 {
extern int mem_00925134;   // IAT slot holding _invalid_parameter_noinfo (MSVCR80)

// @name Unknown::DequeIndexAt
// @class Unknown
// @summary Thiscall indexed accessor: validates the block map and returns the element address at index (64-byte blocks); calls the CRT invalid-parameter handler on bad state or out-of-range index.
// @field Unknown +0x08 void* field_0x08
// @field Unknown +0x0c void* field_0x0c
// @field Unknown +0x10 uint32_t field_0x10
// @field Unknown +0x14 uint32_t field_0x14
static inline uint32_t load32(uint32_t base, uint32_t off) {
    uint32_t v;
    std::memcpy(&v, reinterpret_cast<const unsigned char*>(static_cast<uintptr_t>(base + off)), 4);
    return v;
}

void* fn_0053E290(void* self, uint32_t index) {
    const uint32_t self_u = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(self));
    auto invalid_param = reinterpret_cast<void (*)()>(static_cast<uintptr_t>(mem_00925134));

    // [self+8] must be non-null
    if (load32(self_u, 0x08) == 0) {
        invalid_param();
    }
    uint32_t a = load32(self_u, 0x08);
    uint32_t ecx = load32(self_u, 0x0c);
    if (ecx == load32(a, 0x04)) {
        invalid_param();
    }

    // B = [self+0xc]; C = B + 0xc
    uint32_t b = load32(self_u, 0x0c);
    uint32_t count_ptr = load32(b, 0x10);
    uint32_t c = b + 0x0c;
    if (count_ptr == 0) {
        invalid_param();
    } else {
        uint32_t span = load32(c, 0x08) - count_ptr;   // C+8 == B+0x14
        int32_t blocks = static_cast<int32_t>(span) >> 6;
        if (!(index < static_cast<uint32_t>(blocks))) {
            invalid_param();
        }
    }

    // element = block_base + index * 64; block_base = C+4 == B+0x10
    uint32_t base = load32(c, 0x04);
    return reinterpret_cast<void*>(static_cast<uintptr_t>(base + (index << 6)));
}
} // namespace lift_0053E290

// [0x0053B090] sub_0053B090 (77 bytes)
namespace lift_0053B090 {
// Known callee 0x006A5C62: thunk_MFC80_ord_762 (IAT jump thunk forwarding to MFC80!ord_762.)
extern void ext_006A5C62();
extern int mem_00955430;

// Callee signatures (cdecl alloc, thiscall-style virtual slots).
using AllocFn  = void* (*)(size_t);
using SlotZeroFn = void (*)(void* self, int flags);
using SlotFiveFn = uintptr_t (*)(void* self);

// @name Unknown::ReplaceOwned_0053B090
// @class Unknown
// @summary Allocates a 12-byte polymorphic object (vtable 0x955430), swaps it into self+0x38 (destroying the previous occupant via slot 0), then tail-calls the new object's slot 5.
// @field Unknown +0x38 void* ownedObject
uintptr_t fn_0053B090(void* self) {
    void*& owned = lift_field<void*>(self, 0x38);

    // push 12; call alloc; add esp,4
    auto alloc = reinterpret_cast<AllocFn>(&ext_006A5C62);
    void* next = alloc(12);
    if (next) {
        lift_field<void*>(next, 0) = reinterpret_cast<void*>(&mem_00955430);
        lift_field<int32_t>(next, 8) = 0;
        lift_field<int32_t>(next, 4) = -1;
    } else {
        next = nullptr;
    }

    // Destroy previous occupant if it differs from the new one.
    void* old = owned;
    if (next != old && old != nullptr) {
        void* oldVtbl = lift_field<void*>(old, 0);
        auto slotZero = reinterpret_cast<SlotZeroFn>(lift_field<void*>(oldVtbl, 0));
        slotZero(old, 1);
    }

    owned = next;

    // mov ecx, esi; jmp [vtbl + 0x14]  (tail call, result returned in eax)
    void* newVtbl = lift_field<void*>(next, 0);
    auto slotFive = reinterpret_cast<SlotFiveFn>(lift_field<void*>(newVtbl, 0x14));
    return slotFive(next);
}
} // namespace lift_0053B090

// [0x0053B0E0] sub_0053B0E0 (77 bytes)
namespace lift_0053B0E0 {
// Known callee 0x006A5C62: thunk_MFC80_ord_762 (IAT jump thunk forwarding to MFC80!ord_762.)
// Called cdecl with one size argument (12) and returns a raw allocation pointer (or 0).
extern void* ext_006A5C62(uint32_t size);

// Vtable address written into the freshly allocated 12-byte object (rdata constant at 0x009554A8).
static constexpr uintptr_t kVtbl_009554A8 = 0x009554A8;

// Vtable slot types (thiscall in the original; plain function pointers here).
using DeleteFn = void (*)(void* self, int32_t flags);  // vtbl[0]: deleting destructor
using VirtFn = uint32_t (*)(void* self);               // vtbl[7] (+0x1c): tail-called

// Layout of the 12-byte object allocated below.
struct Obj12 {
    void* const* vtbl;  // +0x00
    int32_t flag;       // +0x04 (set to -1)
    uint32_t zero;      // +0x08 (set to 0)
};

// @name Unknown::ReplaceField38
// @class Unknown
// @summary Allocates a 12-byte object (vtable 0x009554A8, flag -1, zero), releases the previous object at this+0x38 via vtbl[0](1) if it differs, stores the new one, then tail-calls its vtbl[7] and returns that result.
// @field Unknown +0x38 void* field_0x38
uint32_t fn_0053B0E0(void* self) {
    Obj12* fresh = nullptr;
    void* raw = ext_006A5C62(12);
    if (raw != nullptr) {
        fresh = static_cast<Obj12*>(raw);
        fresh->vtbl = reinterpret_cast<void* const*>(kVtbl_009554A8);
        fresh->flag = -1;
        fresh->zero = 0;
    }

    void*& slot = lift_field<void*>(self, 0x38);
    void* old = slot;
    if (old != static_cast<void*>(fresh) && old != nullptr) {
        void* const* oldVtbl = *reinterpret_cast<void* const* const*>(old);
        reinterpret_cast<DeleteFn>(oldVtbl[0])(old, 1);
    }

    slot = static_cast<void*>(fresh);

    void* const* vtbl = *reinterpret_cast<void* const* const*>(fresh);
    return reinterpret_cast<VirtFn>(vtbl[7])(static_cast<void*>(fresh));
}
} // namespace lift_0053B0E0

// [0x0053F8A0]
namespace lift_0053F8A0 {
// @name FindMinKeyPayload
// @summary Scans count variable-length records; among records whose sentinel at +0x10 equals 0xBAADF00D, returns the +0x14 payload of the one with the smallest +0x04 key (unsigned), or -1 if none qualify.
// @field SubRecord +0x00 uint32_t field_0x00
// @field SubRecord +0x04 uint32_t field_0x04
// @field SubRecord +0x10 uint32_t field_0x10
// @field SubRecord +0x14 uint32_t field_0x14
int32_t fn_0053F8A0(int32_t count, const void* records) {
    uint32_t result = 0xFFFFFFFFu;
    uint32_t bestKey = 0xFFFFFFFFu;
    if (count <= 0) {
        return -1;
    }

    const uint8_t* rec = static_cast<const uint8_t*>(records);
    for (int32_t remaining = count; remaining != 0; --remaining) {
        const uint32_t words = lift_field<uint32_t>(rec, 0x00);
        const uint32_t key = lift_field<uint32_t>(rec, 0x04);
        if (lift_field<uint32_t>(rec, 0x10) == 0xBAADF00Du && key < bestKey) {
            bestKey = key;
            result = lift_field<uint32_t>(rec, 0x14);
        }
        // Advance to the next record: 12 header/trailer bytes plus 4 bytes per word.
        rec += static_cast<ptrdiff_t>(12u + 4u * words);
    }

    return static_cast<int32_t>(result);
}
} // namespace lift_0053F8A0

// [0x00530740] sub_00530740 (84 bytes)
namespace lift_00530740 {
// @name Unknown::updateFlags_00530740
// @summary Sets/clears byte +0x86 from bits 0x1/0x2/0x10 of the argument, then forces it on if byte +0x84 is nonzero.
// @field Unknown +0x84 BYTE field_0x84
// @field Unknown +0x86 BYTE field_0x86
void fn_00530740(void* self, DWORD flags) {
    BYTE* obj = static_cast<BYTE*>(self);
    const DWORD bit0 = flags & 0x1;
    const DWORD bit4 = flags & 0x10;
    const bool  bit1 = (flags & 0x2) != 0;

    if (bit0 != 0 && bit1) {
        obj[0x86] = 1;
    } else if (bit4 != 0 && bit1) {
        obj[0x86] = 1;
    } else if (bit0 == 0 && bit4 == 0 && !bit1) {
        obj[0x86] = 0;
    }

    if (obj[0x84] != 0) {
        obj[0x86] = 1;
    }
}
} // namespace lift_00530740

// [0x00539740] sub_00539740 (84 bytes)
namespace lift_00539740 {
// @name copyFloat3Range_00539740
// @summary Copies a range of 12-byte (3 x float) elements from [begin, end) to dst and returns dst advanced by the element count.
void* fn_00539740(const float* begin, const float* end, float* dst) {
    float* out = dst;
    for (const float* src = begin; src != end; src += 3) {
        out[0] = src[0];
        out[1] = src[1];
        out[2] = src[2];
        out += 3;
    }
    return out;
}
} // namespace lift_00539740

// [0x00532770] sub_00532770 (84 bytes)
namespace lift_00532770 {
// Imported MSVCP80 std::basic_string<char> destructor, called through the IAT slot at 0x00924FF4.
extern void (*mem_00924FF4)(void* thisPtr);
// Known callee 0x00493D90: AddCharacterDialog::vfunc_3 (thiscall, takes the dialog subobject at this+0x08).
extern void ext_00493D90(void* self);

// @name Unknown::resetVtableDestroyStringNotifyDialog_00532770
// @class Unknown
// @summary Resets the vtable to 0x009543B4, destroys the std::string at +0x18, then calls AddCharacterDialog::vfunc_3 on the subobject at +0x08.
// @field Unknown +0x00 uint32_t vtable
// @field Unknown +0x08 uint8_t field_0x08
// @field Unknown +0x18 uint8_t field_0x18
void fn_00532770(void* self) {
    // Original SEH frame setup/teardown (fs:[0] push/restore) is omitted in the portable lift.
    lift_field<uint32_t>(self, 0x00) = 0x009543B4u;

    // Destroy the std::string member at this+0x18.
    mem_00924FF4(static_cast<uint8_t*>(self) + 0x18);

    // Notify the dialog subobject at this+0x08.
    ext_00493D90(&lift_field<uint8_t>(self, 0x08));
}
} // namespace lift_00532770

// [0x00530C00] sub_00530C00 (50 bytes)
namespace lift_00530C00 {
// Known callee 0x00530740: Unknown::updateFlags_00530740 (Sets/clears byte +0x86 from bits 0x1/0x2/0x10 of the argument, then forces it on if byte +0x84 is nonzero.)
extern void ext_00530740(void* self, DWORD flags);
// Known callee 0x005435A0: Object::dispatchVirtualSlot14AndClearFlags (Calls virtual slot 0x50 on this with two stack arguments, then clears the byte flags at +0x91 and +0x94.)
extern void ext_005435A0(void* self, void* a1, DWORD a2);

// @name Unknown::forwardFlagsAndDispatch_00530C00
// @class Unknown
// @summary Forwards a flags argument to a child object and to updateFlags_00530740, then invokes virtual slot 0x158 on the object at +0x10 with a zero argument.
// @field Unknown +0x4C void* field_0x4C
// @field Unknown +0x10 void* field_0x10
void fn_00530C00(void* self, DWORD flags, DWORD arg2, DWORD arg3) {
    (void)arg3;

    // Child object at +0x4C receives the address of arg2 and the flags value.
    void* child = lift_field<void*>(self, 0x4C);
    DWORD local = arg2;
    ext_005435A0(child, &local, flags);

    // Update this object's flags.
    ext_00530740(self, flags);

    // Virtual call: slot at byte offset 0x158 of the vtable of the object at +0x10.
    void* target = lift_field<void*>(self, 0x10);
    void* vtbl = lift_field<void*>(target, 0);
    auto slot = reinterpret_cast<void (*)(void*, DWORD)>(lift_field<void*>(vtbl, 0x158));
    slot(target, 0);
}
} // namespace lift_00530C00

// [0x0053AD70]
namespace lift_0053AD70 {
extern double mem_00A44840;

// @name sub_0053AD70
// @summary Updates bitflags at +0x1C based on whether the float at (+0x24)+0x14 is below 1.0 - 1e-5
// @field unknown +0x1c uint32_t field_0x1c
// @field unknown +0x24 uintptr_t field_0x24
void __thiscall sub_0053AD70(void* self) {
    uint32_t ptr = *reinterpret_cast<uint32_t*>(reinterpret_cast<uint8_t*>(self) + 0x24);
    if (!ptr) {
        return;
    }

    float val = *reinterpret_cast<float*>(static_cast<uintptr_t>(ptr) + 0x14);
    double threshold = 1.0 - mem_00A44840;
    uint32_t* flags = reinterpret_cast<uint32_t*>(reinterpret_cast<uint8_t*>(self) + 0x1c);

    if (static_cast<double>(val) < threshold) {
        *flags |= 0x100000u;
        *flags &= ~0x1u;
    } else {
        *flags &= ~0x100000u;
        *flags |= 0x1u;
    }
}
} // namespace lift_0053AD70

// [0x00539660]
namespace lift_00539660 {
// @name QuadricRenderer::ctor
// @class QuadricRenderer
// @summary Initializes base object, sets vtable and float parameters, and creates/configures a GLU quadric.
// @field QuadricRenderer +0x00 void* vtable
// @field QuadricRenderer +0x14 void* quadric

void __thiscall ext_00532B60(void* self);
void __fastcall ext_00538D10(void* self, void* edx, float arg1, float arg2, float arg3, uint32_t arg4);
void* __stdcall ext_0063E000(void);
void __stdcall ext_0063E00C(void* quadric, uint32_t normals);
void __stdcall ext_0063E012(void* quadric, uint32_t drawStyle);

extern const float mem_00955260;
extern const float mem_0093F8EC;
extern const uint32_t mem_0095509C;

void* __thiscall fn_00539660(void* self) {
    ext_00532B60(self);
    *(uint32_t*)self = (uint32_t)(uintptr_t)&mem_0095509C;
    ext_00538D10(self, nullptr, 1.0f, mem_0093F8EC, mem_00955260, 0xC);
    void* quadric = ext_0063E000();
    *(void**)((uint8_t*)self + 0x14) = quadric;
    ext_0063E012(quadric, 0x186AC);
    ext_0063E00C(*(void**)((uint8_t*)self + 0x14), 0x186A0);
    return self;
}
} // namespace lift_00539660

// [0x00536230] sub_00536230 (90 bytes)
namespace lift_00536230 {
extern void (*mem_00925134)(void);

// Base for the polymorphic elements; `delete` dispatches through the virtual
// (scalar deleting) destructor, matching the original vtable[0](1) call.
struct LiftDeletable {
    virtual ~LiftDeletable() = default;
};

// @name deleteRangeChecked
// @summary Deletes each non-null element of a 4-byte-slot range [first, last), validating the owner and its bound at every step.
// @field Container +0x08 uint32_t field_0x08
void fn_00536230(uint8_t* self, const void* owner, uint32_t* first, uint32_t* last) {
    for (;;) {
        if (self == nullptr || self != owner) {
            mem_00925134();
        }
        if (first == last) {
            return;
        }

        uint32_t* cur = first;

        if (self == nullptr) {
            mem_00925134();
        }
        if (reinterpret_cast<uintptr_t>(first) >= lift_field<uint32_t>(self, 0x08)) {
            mem_00925134();
        }
        ++first;

        if (self == nullptr) {
            mem_00925134();
        }
        if (reinterpret_cast<uintptr_t>(cur) >= lift_field<uint32_t>(self, 0x08)) {
            mem_00925134();
        }

        const uint32_t element = *cur;
        if (element != 0) {
            delete reinterpret_cast<LiftDeletable*>(static_cast<uintptr_t>(element));
        }
    }
}
} // namespace lift_00536230

// [0x00536540]
namespace lift_00536540 {
extern void __fastcall ext_00505D00(void* self);
extern void __fastcall ext_00493D90(void* self);
extern void __fastcall ext_0065C660(void* self);

// @name Unknown::Destroy_00536540
// @class Unknown
// @summary Destroys member subobjects at +0x18 and +0x4, then calls base/cleanup ext_0065C660.
// @field Unknown +0x04 void* field_0x04
// @field Unknown +0x18 void* field_0x18
extern void __fastcall fn_00536540(void* self) {
    uint8_t* base = static_cast<uint8_t*>(self);
    ext_00505D00(base + 0x18);
    ext_00493D90(base + 0x4);
    ext_0065C660(self);
}
} // namespace lift_00536540

// [0x00539AA0]
namespace lift_00539AA0 {
extern void* ext_00539740(const float* begin, const float* end, float* dst);
extern void (*mem_00925134)(void);

struct CheckedFloat3Iter {
    void* container;
    float* ptr;
};

// @name Float3Vector::erase
// @class Float3Vector
// @summary Erases a range [first, last) of 12-byte float3 elements from the vector and returns the updated checked iterator.
// @field Float3Vector +0x08 float* end
CheckedFloat3Iter* __thiscall fn_00539AA0(
    void* self,
    CheckedFloat3Iter* out_iter,
    void* first_container,
    float* first_ptr,
    void* last_container,
    float* last_ptr)
{
    if (!first_container || first_container != last_container) {
        mem_00925134();
    }

    if (first_ptr != last_ptr) {
        auto* vec_end = *reinterpret_cast<float**>(reinterpret_cast<uint8_t*>(self) + 0x08);
        void* new_end = ext_00539740(last_ptr, vec_end, first_ptr);
        *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(self) + 0x08) = new_end;
    }

    out_iter->container = first_container;
    out_iter->ptr = first_ptr;
    return out_iter;
}
} // namespace lift_00539AA0

// [0x00539490] sub_00539490 (91 bytes)
namespace lift_00539490 {
// Known callee 0x006A5C62: thunk_MFC80_ord_762 (IAT jump thunk forwarding to MFC80!ord_762.)
extern void* ext_006A5C62(uint32_t size);

// @name Unknown::allocateElements12
// @summary Allocates raw storage for count 12-byte elements; throws std::length_error if 12*count overflows 32 bits.
void* fn_00539490(uint32_t count) {
    uint32_t size = 0;
    if (count != 0) {
        if (count > 0xFFFFFFFFu / 12u) {
            throw std::length_error("");
        }
        size = count * 12u;
    }
    return ext_006A5C62(size);
}
} // namespace lift_00539490

// [0x00530610] sub_00530610 (47 bytes)
namespace lift_00530610 {
// Known callee 0x005432A0: Unknown::callOnEachElement (Walks the pointer range [begin, end) of this container and calls ext_005434E0 on each element, forwarding the single argument; aborts if the range is inverted.)
extern void ext_005432A0(void* self, void* arg);

// @name Unknown::notifyThenCallOnEachElement
// @class Unknown
// @summary If arg is non-null, invokes its vtable slot 1 with (this+0x0C); then forwards arg to callOnEachElement on this+0x38.
// @field Unknown +0x0C uint8_t field_0x0C
// @field Unknown +0x38 uint8_t field_0x38
void fn_00530610(void* self, void* arg) {
    if (arg != nullptr) {
        void** vtbl = *reinterpret_cast<void***>(arg);
        void* sub = nullptr;
        if (self != nullptr) {
            sub = reinterpret_cast<void*>(reinterpret_cast<uintptr_t>(self) + 0x0C);
        }
        auto slot1 = reinterpret_cast<void (*)(void*, void*)>(vtbl[1]);
        slot1(arg, sub);
    }
    void* container = reinterpret_cast<void*>(reinterpret_cast<uintptr_t>(self) + 0x38);
    ext_005432A0(container, arg);
}
} // namespace lift_00530610

// [0x00533F50]
namespace lift_00533F50 {
extern uint32_t mem_00925400; // OPENGL32!glViewport
extern uint32_t mem_009253FC; // OPENGL32!glScissor

// @name setActiveViewport
// @summary Sets OpenGL viewport and scissor rect from the indexed entry and records active index
// @field Self +0x08 uint8_t[] field_0x08
// @field Self +0xFC int32_t field_0xfc
void __thiscall sub_00533F50(void* self, int32_t index) {
    uint8_t* base = reinterpret_cast<uint8_t*>(self);
    uint8_t* entry = base + index * 60 + 8;

    int32_t x1 = *reinterpret_cast<int32_t*>(entry + 0x04);
    int32_t y1 = *reinterpret_cast<int32_t*>(entry + 0x08);
    int32_t x2 = *reinterpret_cast<int32_t*>(entry + 0x0c);
    int32_t y2 = *reinterpret_cast<int32_t*>(entry + 0x10);

    using GlRectFn = void(__stdcall*)(int32_t, int32_t, int32_t, int32_t);
    reinterpret_cast<GlRectFn>(static_cast<uintptr_t>(mem_00925400))(x1, y1, x2 - x1, y2 - y1);
    reinterpret_cast<GlRectFn>(static_cast<uintptr_t>(mem_009253FC))(x1, y1, x2 - x1, y2 - y1);

    *reinterpret_cast<int32_t*>(base + 0xfc) = index;
}
} // namespace lift_00533F50

// [0x005397A0] sub_005397A0 (95 bytes)
namespace lift_005397A0 {
// @name Unknown::CopyRangeBackward12_005397A0
// @summary Copies a range of 12-byte (3-float) elements [begin, end) backwards so it ends at dest_end; returns dest_end minus the copied byte count (the new beginning of the destination).
// @field Elem12 +0x00 float field_0x00
// @field Elem12 +0x04 float field_0x04
// @field Elem12 +0x08 float field_0x08
uint32_t fn_005397A0(uint32_t begin, uint32_t end, uint32_t dest_end) {
    const int32_t byte_diff = static_cast<int32_t>(end - begin);
    const int32_t count = byte_diff / 12;

    if (count > 0) {
        for (int32_t k = count; k-- > 0;) {
            const uintptr_t src = static_cast<uintptr_t>(begin) + static_cast<uintptr_t>(k) * 12u;
            const uintptr_t dst = static_cast<uintptr_t>(dest_end) - static_cast<uintptr_t>(count - k) * 12u;
            std::memmove(reinterpret_cast<void*>(dst), reinterpret_cast<const void*>(src), 12);
        }
    }

    return static_cast<uint32_t>(dest_end - static_cast<uint32_t>(count) * 12u);
}
} // namespace lift_005397A0

// [0x00532BC0] sub_00532BC0 (102 bytes)
namespace lift_00532BC0 {
// Known callee 0x00532B60: fn_00532B60 (Unknown::initVtableAndFlags).
extern void ext_00532B60(void* self);
// Known callee 0x00538FA0: fn_00538FA0 (SetFloatPairAndDwordPair), thiscall, callee pops 0x10 bytes.
extern void ext_00538FA0(void* self, float f0, float f1, DWORD d0, DWORD d1);

// Read-only .rdata constants.
extern const float mem_009518E0; // 10.0f
extern const float mem_0093C188; // 4.0f

// @name Unknown::ctorSetDefaults
// @class Unknown
// @summary Base-initializes this object, stores its vtable, applies float/dword defaults via fn_00538FA0, sets +0x1C to 4.0f, and returns this.
// @field Unknown +0x00 DWORD vtable
// @field Unknown +0x1C float field_0x1C
void* fn_00532BC0(void* self) {
    // SEH frame push/pop (fs:[0] chain, try-level bookkeeping) is compiler/runtime
    // scaffolding and is intentionally not reproduced.
    ext_00532B60(self);
    lift_field<DWORD>(self, 0x00) = 0x00954674u;
    ext_00538FA0(self, mem_009518E0, mem_009518E0, 10u, 5u);
    lift_field<float>(self, 0x1C) = mem_0093C188;
    return self;
}
} // namespace lift_00532BC0

// [0x00537A30] sub_00537A30 (83 bytes)
namespace lift_00537A30 {
// Known callee 0x00532B60: Unknown::initVtableAndFlags (Stores the vtable address at +0x00, sets flag bytes at +0x04 and +0x0C to 1, and zeroes the dwords at +0x08 and +0x10.)
extern void ext_00532B60(void* self);
// Known callee 0x0054C570: Unknown::ctor_0054C570 (Constructs the object, initializes base and embedded subobject, and invokes subobject virtual init.)
extern void* ext_0054C570(void* self);

// @name Unknown::ctor_00537A30
// @class Unknown
// @summary Constructor: runs base init, writes vtable, clears +0x14, constructs embedded subobject at +0x18, and stores self at +0x10.
// @field Unknown +0x00 void* vtable
// @field Unknown +0x10 void* selfRef
// @field Unknown +0x14 uint32_t field_0x14
// @field Unknown +0x18 void* embedded
void fn_00537A30(void* self) {
    // Base initialization (vtable/flags/dwords at +0x00..+0x10).
    ext_00532B60(self);

    // Vtable pointer for this class.
    lift_field<void*>(self, 0x00) = reinterpret_cast<void*>(static_cast<uintptr_t>(0x00954F24));

    lift_field<uint32_t>(self, 0x14) = 0;

    // Construct the embedded subobject at self+0x18.
    void* sub = reinterpret_cast<uint8_t*>(self) + 0x18;
    ext_0054C570(sub);

    // Final self-reference stored at +0x10.
    lift_field<void*>(self, 0x10) = self;
}
} // namespace lift_00537A30

// [0x0053B240] sub_0053B240 (109 bytes)
namespace lift_0053B240 {
// Known callee 0x00532B60: Unknown::initVtableAndFlags (thiscall on self, stores vtable at +0x00, flags at +0x04/+0x0C, zeroes dwords at +0x08/+0x10).
extern void ext_00532B60(void* self);
// Known callee 0x0053AD10: Primitives::Animation::vfunc_29 (thiscall on self, resets animation state).
extern void ext_0053AD10(void* self);

// @name Unknown::initAnimationDerived_0053B240
// @class Unknown
// @summary Base-initializes self, installs three 32-bit vtable pointers (+0x00, +0x14, +0x18), zeroes +0x1C/+0x20/+0x34/+0x38, then calls Animation::vfunc_29 to reset state; returns self.
// @field Unknown +0x00 uint32_t vtable
// @field Unknown +0x14 uint32_t vtable_secondary
// @field Unknown +0x18 uint32_t vtable_tertiary
// @field Unknown +0x1C uint32_t field_0x1C
// @field Unknown +0x20 uint32_t field_0x20
// @field Unknown +0x34 uint32_t field_0x34
// @field Unknown +0x38 uint32_t field_0x38
//
// Vtable values are 32-bit image addresses (0x009554ec etc.) and are stored as uint32_t so
// the layout is preserved independent of host pointer size. The original SEH frame
// (fs:[0] push/pop and the cleanup-state byte) has no portable equivalent and is omitted.
void* fn_0053B240(void* self) {
    ext_00532B60(self);

    lift_field<uint32_t>(self, 0x14) = 0x009553A8u;          // overwritten below (kept for fidelity)
    lift_field<uint32_t>(self, 0x00) = 0x009554ECu;          // primary vtable
    lift_field<uint32_t>(self, 0x14) = 0x009554E4u;          // secondary-base vtable
    lift_field<uint32_t>(self, 0x18) = 0x009553B0u;          // tertiary-base vtable

    uint32_t zero = 0;
    lift_field<uint32_t>(self, 0x1C) = zero;
    lift_field<uint32_t>(self, 0x20) = zero;
    lift_field<uint32_t>(self, 0x34) = zero;
    lift_field<uint32_t>(self, 0x38) = zero;

    ext_0053AD10(self);
    return self;
}
} // namespace lift_0053B240

// [0x00537B10] sub_00537B10 (101 bytes)
namespace lift_00537B10 {
// Known callee 0x0054C570: Unknown::ctor_0054C570 (Constructs the object, initializes base and embedded subobject, and invokes subobject virtual init.)
extern void* ext_0054C570(void* self);
// Known callee 0x00532B60: Unknown::initVtableAndFlags (Stores the vtable address at +0x00, sets flag bytes at +0x04 and +0x0C to 1, and zeroes the dwords at +0x08 and +0x10.)
extern void ext_00532B60(void* self);

// @name Unknown::ctor_00537B10
// @class Unknown
// @summary Base-initializes self, stores vtable and owner link, constructs embedded subobject at +0x18, and registers self as back-reference on the owner.
// @field Unknown +0x00 uint32_t vtable
// @field Unknown +0x10 void* field_0x10
// @field Unknown +0x14 void* field_0x14
// @field Unknown +0x18 void* field_0x18
void* fn_00537B10(void* self, void* owner) {
    // Base initialization (sets flags and zeroes dwords at +0x08 / +0x10).
    ext_00532B60(self);

    // Vtable pointer at +0x00 (32-bit target layout).
    lift_field<uint32_t>(self, 0x00) = 0x00954F24u;

    // Store owner link at +0x14.
    lift_field<void*>(self, 0x14) = owner;

    // Construct embedded subobject at +0x18.
    ext_0054C570(reinterpret_cast<uint8_t*>(self) + 0x18);

    // Re-read owner link (the subobject constructor may have changed it).
    void* linked = lift_field<void*>(self, 0x14);

    // Self back-reference at +0x10.
    lift_field<void*>(self, 0x10) = self;

    // If an owner exists, point its +0x10 back at self.
    if (linked != nullptr) {
        lift_field<void*>(linked, 0x10) = self;
    }

    return self;
}
} // namespace lift_00537B10

// [0x0053C4C0]
namespace lift_0053C4C0 {
// Known callee 0x0053B240: Unknown::initAnimationDerived_0053B240 (Base-initializes self, installs three 32-bit vtable pointers, zeroes +0x1C/+0x20/+0x34/+0x38, then calls Animation::vfunc_29 to reset state; returns self.)
extern void* ext_0053B240(void* self);

// @name initDerivedAnimation_0053C4C0
// @summary Runs the base init on self, then installs two vtable pointers and zeroes three float fields.
// @field Unknown +0x00 uint32_t vtable_ptr
// @field Unknown +0x14 uint32_t vtable_ptr_2
// @field Unknown +0x3c float field_0x3c
// @field Unknown +0x40 float field_0x40
// @field Unknown +0x44 float field_0x44
void* fn_0053C4C0(void* self) {
    ext_0053B240(self);
    lift_field<uint32_t>(self, 0x00) = 0x955aec;
    lift_field<uint32_t>(self, 0x14) = 0x955ae4;
    lift_field<float>(self, 0x44) = 0.0f;
    lift_field<float>(self, 0x40) = 0.0f;
    lift_field<float>(self, 0x3c) = 0.0f;
    return self;
}
} // namespace lift_0053C4C0
