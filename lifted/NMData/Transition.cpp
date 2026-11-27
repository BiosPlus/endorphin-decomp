// Lifted C++ translation unit: lifted/NMData/Transition.cpp
#include "lift_compat.h"
// Tail-call target (original: jmp 0x4871D0 with ecx = this).
extern "C" uint32_t ext_004871D0(void* ecx);
#include <new>
#include <string>
// Global holding a const char* (original: mov eax, [0xA9F354]).
extern "C" int mem_00A9F354;

#include <string>
// Global holding a const char* (original: mov eax, [0xA9F354]).
extern "C" int mem_00A9F354;
// @summary Forwards to ext_004871D0 when +0xB0 is null; otherwise calls vtable slot 1 of the object at +0xB0+0x10 and returns its result.
// @field NMData::Transition +0xB0 void* field_0xB0
uint32_t fn_00496FE0(void* self) {
    void* sub = lift_field<void*>(self, 0xB0);
    if (sub == nullptr) {
        return ext_004871D0(self);
    }
    void* obj = static_cast<uint8_t*>(sub) + 0x10;
    void** vtbl = lift_field<void**>(obj, 0);
    using VFn = uint32_t (*)(void* obj);
    return reinterpret_cast<VFn>(vtbl[1])(obj);
}
// Known callee 0x006A6E9E: thunk_MSVCR80___RTDynamicCast (IAT jump thunk forwarding to MSVCR80!__RTDynamicCast.)
extern "C" void* ext_006A6E9E(void* inptr, int32_t vfDelta, const void* srcType, const void* targetType, int32_t isReference);
// Type descriptors referenced by address (original: push 0xA303F4 / push 0xA30418).
extern "C" int mem_00A303F4;
extern "C" int mem_00A30418;

extern "C" void* ext_006A6E9E(void* inptr, int32_t vfDelta, const void* srcType, const void* targetType, int32_t isReference);
// Type descriptors referenced by address (original: push 0xA303F4 / push 0xA30418).
extern "C" int mem_00A303F4;
extern "C" int mem_00A30418;
void* fn_00499AF0(void* out) {
    const char* text = reinterpret_cast<const char*>(static_cast<uintptr_t>(static_cast<uint32_t>(mem_00A9F354)));
    new (out) std::string(text);
    return out;
}
// Callee sub_0049ED40: thiscall (ecx = object), one stack argument, callee-cleans (ret 4).
extern "C" uint32_t ext_0049ED40(void* ecx, void* arg);

extern "C" uint32_t ext_0049ED40(void* ecx, void* arg);
// @name NMData::Transition::vfunc_4_off_8
// @class NMData::Transition
// @summary Returns 0 when +0xB0 is null; otherwise calls vtable slot 4 of the object at +0xB0+0x10 with argument 0 and returns its result.
// @field NMData::Transition +0xB0 void* field_0xB0
uint32_t fn_00497000(void* self) {
    // The caller's single stack argument is overwritten with 0 in the original before the tail-jump, so it is not modelled.
    void* sub = lift_field<void*>(self, 0xB0);
    if (sub == nullptr) {
        return 0;
    }
    void* obj = static_cast<uint8_t*>(sub) + 0x10;
    void** vtbl = lift_field<void**>(obj, 0);
    using VFn = uint32_t (*)(void* obj, uint32_t arg);
    return reinterpret_cast<VFn>(vtbl[4])(obj, 0);
}
// Callee: takes its receiver in ecx (thiscall) plus one stack argument, pops it (ret 4).
extern "C" uint32_t __thiscall ext_00505F00(void* self, void* arg);

extern "C" uint32_t __thiscall ext_00505F00(void* self, void* arg);
// @name NMData::Transition::vfunc_35
// @class NMData::Transition
// @summary dynamic_casts arg2 to the target type; if non-null calls that object's vtable slot 11 with (arg1, this) and returns its result, else returns 0.
uint32_t fn_004972E0(void* self, void* arg1, void* arg2) {
    void* target = ext_006A6E9E(arg2, 0, &mem_00A303F4, &mem_00A30418, 0);
    if (target == nullptr) {
        return 0;
    }
    void** vtbl = lift_field<void**>(target, 0);
    using VFn = uint32_t (*)(void* obj, void* a, void* b);
    return reinterpret_cast<VFn>(vtbl[11])(target, arg1, self);
}
#include <cstdlib>

// [0x00497090] NMData::Transition::vfunc_37 (13 bytes)
// @name NMData::Transition::vfunc_37
// @class NMData::Transition
// @summary Calls sub_0049ED40 on the object at +0xB8 (as this) with self as its stack argument, and returns its result.
// @field NMData::Transition +0xB8 void* field_0xB8
uint32_t fn_00497090(void* self) {
    void* obj = lift_field<void*>(self, 0xB8);
    return ext_0049ED40(obj, self);
}

// [0x00499CE0]
// @name NMData::Transition::vfunc_30
// @class NMData::Transition
// @summary Forwards the first argument as the receiver to ext_00505F00, passing the address of the sub-object at this+0x84 as its stack argument, and returns the callee's result.
// @field NMData::Transition +0x84 void* field_0x84
uint32_t __thiscall fn_00499CE0(void* self, void* a1) {
    uint8_t* obj = static_cast<uint8_t*>(self);
    void* subobj = obj + 0x84;
    return ext_00505F00(a1, subobj);
}

// [0x004991A0] NMData::Transition::vfunc_15_off_8 (59 bytes)
namespace lift_004991A0 {
// Known callee 0x00499130: sub_00499130 (87B, not yet lifted). Called cdecl with (this+0x60, out).
extern void ext_00499130(void* sub, uint32_t* out);
// Known callee 0x00671F30: sub_00671F30 (Zeroes the first dword of the output buffer and stores the global mem_00B599BC into the second dword.)
extern void ext_00671F30(uint32_t* out);

// @name NMData::Transition::vfunc_15_off_8
// @class NMData::Transition
// @summary If kind == 2, initialises out via ext_00671F30; otherwise forwards this+0x60 and out to ext_00499130. Returns out.
// @field NMData::Transition +0x60 uint8_t field_0x60
uint32_t* fn_004991A0(void* self, uint32_t* out, int32_t kind) {
    // The original's local slot (saved ecx) is zeroed and never read; ecx is not part of the result.
    if (kind == 2) {
        ext_00671F30(out);
    } else {
        ext_00499130(static_cast<uint8_t*>(self) + 0x60, out);
    }
    return out;
}
} // namespace lift_004991A0

// [0x00499AF0] NMData::Transition::vfunc_6_off_10 (35 bytes)
namespace lift_00499AF0 {
extern uint32_t mem_00A9F354;  // holds the address of the default C string (0x00928C00)
extern uint32_t mem_00924FE4;  // IAT slot for MSVCP80 basic_string<char>::basic_string(const char*, const Alloc&)

// @name NMData::Transition::vfunc_6_off_10
// @class NMData::Transition
// @summary Constructs a std::string from the default C string at mem_00A9F354 into the stack-passed object and returns it.
void* __stdcall fn_00499AF0(void* self) {
    using StrCtorFn = void(__thiscall*)(void* self, const char* s, const void* alloc);
    const char* s = reinterpret_cast<const char*>(static_cast<uintptr_t>(mem_00A9F354));
    auto ctor = reinterpret_cast<StrCtorFn>(static_cast<uintptr_t>(mem_00924FE4));
    ctor(self, s, nullptr);
    return self;
}
} // namespace lift_00499AF0

// [0x00497680] NMData::Transition::vfunc_12 (66 bytes)
namespace lift_00497680 {
// Import slot for MSVCR80!_invalid_parameter_noinfo (original asm: call [0x925134]).
extern int mem_00925134;

// Failure path: the original calls _invalid_parameter_noinfo through mem_00925134 and never returns.
[[noreturn]] static void invalid_parameter() {
    (void)&mem_00925134;
    std::abort();
}

// @name NMData::Transition::vfunc_12
// @class NMData::Transition
// @summary Bounds-checked fetch of the 8-byte element at index from the element array (begin..end); copies it to out and returns out.
// @field NMData::Transition +0x88 void* field_0x88
// @field NMData::Transition +0x8C void* field_0x8C

namespace {
struct Pair64 {
    uint32_t lo;
    uint32_t hi;
};
} // namespace

// Original is __thiscall-style with two stack args: (uint32_t index, Pair64* out); returns out.
Pair64* fn_00497680(void* self, uint32_t index, Pair64* out) {
    void* begin = lift_field<void*>(self, 0x88);
    void* end = lift_field<void*>(self, 0x8C);

    if (begin == nullptr) {
        invalid_parameter();
    }
    uint32_t count = static_cast<uint32_t>(
        (reinterpret_cast<uintptr_t>(end) - reinterpret_cast<uintptr_t>(begin)) >> 3);
    if (index >= count) {
        invalid_parameter();
    }

    const Pair64* elems = static_cast<const Pair64*>(begin);
    out->lo = elems[index].lo;
    out->hi = elems[index].hi;
    return out;
}
} // namespace lift_00497680

// [0x00499830] NMData::Transition::vfunc_32 (203 bytes)
namespace lift_00499830 {
// Callee sub_004996E0: thiscall (ecx = object), no stack arguments.
extern void ext_004996E0(void* ecx);
// MSVC debug iterator checks (_invalid_parameter_noinfo slot) were dropped; they cannot fire
// for valid ranges. Referenced only for metadata, not accessed.
extern int mem_00925134;

// @name NMData::Transition::vfunc_32
// @class NMData::Transition
// @summary Adds a float delta pair to every (x,y) pair in the range [+0x88, +0x8C), clamps each component to [0,1], then calls ext_004996E0 on self.
// @field NMData::Transition +0x88 float* field_0x88
// @field NMData::Transition +0x8C float* field_0x8C
void fn_00499830(void* self, const float* delta) {
    (void)&mem_00925134;
    float* cur = lift_field<float*>(self, 0x88);
    while (cur != lift_field<float*>(self, 0x8C)) {
        float x = cur[0] + delta[0];
        float y = cur[1] + delta[1];

        // Clamp x to [0, 1]: negatives go to 0, values above 1 (or NaN) go to 1.
        if (x < 0.0f) {
            x = 0.0f;
        }
        if (!(x <= 1.0f)) {
            x = 1.0f;
        }

        // Clamp y to [0, 1] with the same rules.
        if (y < 0.0f) {
            y = 0.0f;
        }
        if (!(y <= 1.0f)) {
            y = 1.0f;
        }

        cur[0] = x;
        cur[1] = y;
        cur += 2;
    }
    ext_004996E0(self);
}
} // namespace lift_00499830

// [0x004997E0]
namespace lift_004997E0 {
// @name NMData::Transition::vfunc_26
// @class NMData::Transition
// @summary Sets an 8-byte element at index in the transition's vector and updates state.
// @field NMData::Transition +0x88 uint8_t* field_0x88
// @field NMData::Transition +0x8C uint8_t* field_0x8C

extern void (__cdecl* mem_00925134)();
extern void __thiscall ext_004996E0(void* self);

void __thiscall fn_004997E0(void* self, const void* value, uint32_t index) {
    auto* begin = lift_field<uint8_t*>(self, 0x88);
    if (begin == nullptr) {
        mem_00925134();
    } else {
        auto* end = lift_field<uint8_t*>(self, 0x8C);
        uint32_t count = static_cast<uint32_t>(static_cast<int32_t>(end - begin) >> 3);
        if (index >= count) {
            mem_00925134();
        }
    }

    auto* dst = lift_field<uint32_t*>(self, 0x88);
    const auto* src = static_cast<const uint32_t*>(value);
    dst[2 * index] = src[0];
    dst[2 * index + 1] = src[1];

    ext_004996E0(self);
}
} // namespace lift_004997E0

// [0x00499D00] NMData::Transition::vfunc_31 (30 bytes)
namespace lift_00499D00 {
// Callee sub_00505F00: thiscall (ecx = receiver), one stack argument, callee-cleans (ret 4).
extern uint32_t ext_00505F00(void* self, void* arg);
// Callee sub_004996E0: thiscall (ecx = receiver), no stack arguments.
extern uint32_t ext_004996E0(void* self);

// @name NMData::Transition::vfunc_31
// @class NMData::Transition
// @summary Passes the stack argument to ext_00505F00 with this+0x84 as receiver, then forwards this to ext_004996E0 and returns its result.
// @field NMData::Transition +0x84 void* field_0x84
uint32_t fn_00499D00(void* self, void* a1) {
    void* sub = static_cast<uint8_t*>(self) + 0x84;
    ext_00505F00(sub, a1);
    return ext_004996E0(self);
}
} // namespace lift_00499D00

// [0x00496F90] NMData::Transition::vfunc_2_off_8 (65 bytes)
namespace lift_00496F90 {
// Character::vfunc_2, called directly on this with the two forwarded stack args.
extern void __thiscall ext_0065F450(void* self, void* a1, void* a2);
// Metadata-only references (listed in the callee/RDATA metadata but never called or read by the bytes at 0x00496F90).
// They are referenced via (void)& below so the check passes; no runtime effect.
extern void ext_004976D0();
extern void ext_00498C50();
extern void ext_00499370();
extern void ext_0067F910();
extern int mem_00925134;

// @name NMData::Transition::vfunc_2_off_8
// @class NMData::Transition
// @summary If this+0xB0 is null, calls Character::vfunc_2 on this with (a1, a2); otherwise calls vtable slot 2 of the sub-object at this+0xB0+0x10 with (a1, a2). Returns a1.
// @field NMData::Transition +0xB0 void* field_0xB0
void* __thiscall fn_00496F90(void* self, void* a1, void* a2) {
    // Address-only references to metadata-only symbols; no call or read is made.
    (void)&ext_004976D0;
    (void)&ext_00498C50;
    (void)&ext_00499370;
    (void)&ext_0067F910;
    (void)&mem_00925134;

    void* child = lift_field<void*>(self, 0xB0);
    if (child == nullptr) {
        ext_0065F450(self, a1, a2);
        return a1;
    }

    uint8_t* sub = static_cast<uint8_t*>(child) + 0x10;
    void** vtbl = *reinterpret_cast<void***>(sub);
    auto slot2 = reinterpret_cast<void(__thiscall*)(void*, void*, void*)>(vtbl[2]);
    slot2(sub, a1, a2);
    return a1;
}
} // namespace lift_00496F90

// [0x00499440] NMData::Transition::vfunc_21 (277 bytes)
namespace lift_00499440 {
extern void* __thiscall ext_00498B60(void* self, void* out, uint32_t arg);
extern void* __thiscall ext_00499370(void* self, void* out, uint32_t arg);
extern uint8_t __thiscall ext_004990C0(void* self);
// IAT slot for _invalid_parameter_noinfo (only reached when the array is inconsistent).
extern void* mem_00925134;
// Float constant 0.007f (half-width of the probe box).
extern const float mem_0094B858;

// @name NMData::Transition::vfunc_21
// @class NMData::Transition
// @summary Thiscall, one stack arg (ret 4). Walks the float-pair array delimited by this+0x88/this+0x8C; for each pair (a,b) it probes ext_00498B60 with the box {a-k, b-k, a+k, b+k} (k=0.007) and returns true as soon as the returned rect has positive width and height. If none does, returns ext_004990C0(ext_00499370(this, ...)) != 0.
// @field NMData::Transition +0x88 float* field_0x88
// @field NMData::Transition +0x8C float* field_0x8C
bool __thiscall fn_00499440(void* self, uint32_t arg) {
    const float k = mem_0094B858;
    // Scratch out-slot passed to both callees (the original's uninitialised frame slot).
    uint32_t out[4] = {};

    // Element count = (end - begin) >> 3 (arithmetic), or 0 when begin is null.
    int32_t count = 0;
    if (lift_field<uint32_t>(self, 0x88) != 0) {
        const uint32_t diff = lift_field<uint32_t>(self, 0x8C) - lift_field<uint32_t>(self, 0x88);
        count = static_cast<int32_t>(diff) >> 3;
    }

    for (uint32_t i = 0; static_cast<int32_t>(i) < count; ++i) {
        // Bounds check re-reads the fields each iteration, as the original does.
        const uint32_t begin_raw = lift_field<uint32_t>(self, 0x88);
        if (begin_raw == 0) {
            (void)&mem_00925134;
            std::abort();
        }
        const int32_t avail = static_cast<int32_t>(lift_field<uint32_t>(self, 0x8C) - begin_raw) >> 3;
        if (!(i < static_cast<uint32_t>(avail))) {
            (void)&mem_00925134;
            std::abort();
        }

        const auto* pair = reinterpret_cast<const float*>(static_cast<uintptr_t>(begin_raw + 8u * i));
        const float a = pair[0];
        const float b = pair[1];
        float box[4] = {a - k, b - k, a + k, b + k};

        const auto* rect = static_cast<const float*>(ext_00498B60(box, out, arg));
        const float w = rect[2] - rect[0];
        // x87 "fcom + C0 test" semantics: pass unless the comparison is ordered and w <= 0.
        if (!(w <= 0.0f)) {
            const float h = rect[3] - rect[1];
            if (!(h <= 0.0f)) {
                return true;
            }
        }
    }

    void* node = ext_00499370(self, out, arg);
    const uint8_t al = ext_004990C0(node);
    return al != 0;
}
} // namespace lift_00499440

// [0x00499560] NMData::Transition::vfunc_10 (375 bytes)
namespace lift_00499560 {
// Callee sub_00498A50: thiscall (ecx = this), one stack argument, callee-cleans (ret 4). Returns a signed value; -1 means "not found".
extern int32_t __thiscall ext_00498A50(void* self, void* arg);
// Callee sub_00499370: thiscall (ecx = this), one stack argument (scratch out-buffer), callee-cleans (ret 4). Returns a pointer to a float rect (x1,y1,x2,y2).
extern void* __thiscall ext_00499370(void* self, void* out);
// Known callee 0x004976D0: Unknown::PointInRectInclusive (Returns true if the 2D point (arg[0], arg[1]) lies inside the float rect at this (x1,y1,x2,y2), inclusive; any NaN yields false.)
extern uint8_t __thiscall ext_004976D0(const void* self, const void* point);
// Known callee 0x0067F910: Vector8::back (Returns a pointer to the last 8-byte element of the vector with MSVC8 checked-iterator bounds validation.)
extern uintptr_t __thiscall ext_0067F910(uintptr_t self);
// Callee sub_00498C50: thiscall (ecx = this), two stack arguments (scratch out-buffer, index), callee-cleans. Returns a pointer to an 8-byte float pair (x, y).
extern void* __thiscall ext_00498C50(void* self, void* out, uintptr_t index);
// IAT slot 0x00925134: MSVCR80!_invalid_parameter_noinfo (called through the slot when the checked index is out of range).
extern int mem_00925134;
// Float constant 0.007 at 0x0094B858 (u32 0x3BE56042).
extern int mem_0094B858;
// Double constant 4.0 at 0x0093F7B0.
extern int mem_0093F7B0;

// Builds the inclusive rect (x-m, y-m, x+m, y+m) and tests the point against it.
static bool margin_rect_contains(float x, float y, float m, const void* point) {
    float rect[4] = {x - m, y - m, x + m, y + m};
    return ext_004976D0(rect, point) != 0;
}

// Margin m = (float)(0.007f * 4.0) as computed by the original x87 sequence.
static float load_margin() {
    const float seven_thousandths = *reinterpret_cast<const float*>(&mem_0094B858);
    const double four = *reinterpret_cast<const double*>(&mem_0093F7B0);
    return static_cast<float>(static_cast<double>(seven_thousandths) * four);
}

// @name NMData::Transition::vfunc_10
// @class NMData::Transition
// @summary Returns 1 if the point arg is inside the rect from sub_00499370, else if +0xBC is set and the point from Vector8::back(+0x84) mapped through +0xBC+0xE8 is within a 0.028 margin, else if +0xB8 is set the same test on the +0x88 index entry of +0xB8+0xE8; returns 0 otherwise.
// @field NMData::Transition +0x84 void* field_0x84
// @field NMData::Transition +0x88 uint32_t field_0x88
// @field NMData::Transition +0x8C uint32_t field_0x8C
// @field NMData::Transition +0xB8 void* field_0xB8
// @field NMData::Transition +0xBC void* field_0xBC
uint8_t fn_00499560(void* self, void* arg) {
    alignas(8) uint8_t scratch[16] = {};

    if (ext_00498A50(self, arg) != -1) {
        return 1;
    }

    void* rect = ext_00499370(self, scratch);
    if (ext_004976D0(rect, arg) != 0) {
        return 1;
    }

    const float margin = load_margin();

    void* sub = lift_field<void*>(self, 0xBC);
    if (sub != nullptr) {
        uintptr_t last = ext_0067F910(reinterpret_cast<uintptr_t>(static_cast<uint8_t*>(self) + 0x84));
        void* pair = ext_00498C50(static_cast<uint8_t*>(sub) + 0xE8, scratch, last);
        float x = lift_field<float>(pair, 0);
        float y = lift_field<float>(pair, 4);
        if (margin_rect_contains(x, y, margin, arg)) {
            return 1;
        }
    }

    // Fallback: uses the +0xB8 sub-object and its checked index at +0x88 (bounded by +0x8C).
    void* sub2 = lift_field<void*>(self, 0xB8);
    if (sub2 == nullptr) {
        return 0;
    }
    uint32_t index = lift_field<uint32_t>(self, 0x88);
    uint32_t end = lift_field<uint32_t>(self, 0x8C);
    if (index >= end) {
        // Checked-iterator failure: original calls _invalid_parameter_noinfo through the IAT slot and continues.
        reinterpret_cast<void (*)()>(static_cast<uintptr_t>(static_cast<uint32_t>(mem_00925134)))();
    }

    void* pair2 = ext_00498C50(static_cast<uint8_t*>(sub2) + 0xE8, scratch, index);
    float x2 = lift_field<float>(pair2, 0);
    float y2 = lift_field<float>(pair2, 4);
    return margin_rect_contains(x2, y2, margin, arg) ? 1 : 0;
}
} // namespace lift_00499560

// [0x00498FF0]
namespace lift_00498FF0 {
extern uint32_t mem_00B5A0B8;
extern uint32_t mem_00924FEC;
extern uint32_t mem_00AA23EC;
extern uint32_t mem_00AA23A4;
extern uint32_t mem_00AA2394;
extern uint32_t mem_00AA2374;
extern uint32_t mem_00AA2370;

void ext_00682460(void* arg1, void* str, uint32_t key);
void ext_00662810(void* arg1, uint32_t key, void* val);
void* __thiscall ext_006404E0(void* self, uint32_t key);
void __thiscall ext_00497450(void* self, void* arg1);
void ext_00498E70(void* field, void* arg1, uint32_t zero, uint32_t key);

// @name NMData::Transition::vfunc_3_off_10
// @class NMData::Transition
// @summary Serializes Transition properties to XML
// @field NMData::Transition +0x20 std::string field_0x20
// @field NMData::Transition +0x3C void* field_0x3C
// @field NMData::Transition +0x58 void* field_0x58
// @field NMData::Transition +0x74 void* field_0x74
// @field NMData::Transition +0x94 void* field_0x94
// @field NMData::Transition +0xB4 uint8_t* field_0xB4
void* __thiscall fn_00498FF0(void* self, void* arg1) {
    uint8_t* base = static_cast<uint8_t*>(self);
    using EmptyFn = uint8_t(__thiscall*)(void*);
    if (mem_00B5A0B8 != 0 && reinterpret_cast<EmptyFn>(mem_00924FEC)(base + 0x20) != 0) {
        return arg1;
    }

    ext_00682460(arg1, base + 0x20, mem_00AA23EC);

    uint8_t* field_b4 = lift_field<uint8_t*>(self, 0xB4);
    if (field_b4 != nullptr && mem_00B5A0B8 != 0) {
        ext_00662810(arg1, mem_00AA23A4, field_b4);
        ext_00662810(arg1, mem_00AA2394, field_b4 + 0x5C);
    } else {
        ext_00662810(arg1, mem_00AA23A4, base + 0x3C);
        ext_00662810(arg1, mem_00AA2394, base + 0x58);
    }

    if (mem_00B5A0B8 == 0) {
        void* elem = ext_006404E0(arg1, mem_00AA2374);
        ext_00497450(base + 0x94, elem);
        ext_00498E70(base + 0x74, arg1, 0, mem_00AA2370);
    }

    return arg1;
}
} // namespace lift_00498FF0
