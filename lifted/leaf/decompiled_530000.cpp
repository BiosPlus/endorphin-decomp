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
