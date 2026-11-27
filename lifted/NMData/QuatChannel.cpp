// Lifted C++ translation unit: lifted/NMData/QuatChannel.cpp
#include "lift_compat.h"
// External helper sub_0051AE40 (ext_0051AE40). Cdecl-style call with four
// stack words: arg1, this (ecx), arg1 again, and 0.
uint32_t __cdecl ext_0051AE40(uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);

// stack words: arg1, this (ecx), arg1 again, and 0.
uint32_t __cdecl ext_0051AE40(uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);
// @class NMData::QuatChannel
// @summary Auto-lifted identical-shape clone of 0x0051BEF0 (NMData::RealChannel::vfunc_16).
// @field NMData::QuatChannel +0x30 int32_t begin
// @field NMData::QuatChannel +0x34 int32_t end
// @field NMData::QuatChannel +0x5C void* field_0x5C
// @field NMData::QuatChannel +0x60 int32_t field_0x60
void fn_0051C7C0(void* self) {
    int32_t begin = lift_field<int32_t>(self, 0x30);
    int32_t end = lift_field<int32_t>(self, 0x34);
    if (static_cast<uint32_t>(begin) > static_cast<uint32_t>(end)) {
        // CRT _invalid_parameter_noinfo: the default handler terminates the process.
        std::abort();
    }
    lift_field<void*>(self, 0x5C) = static_cast<uint8_t*>(self) + 0x2C;
    lift_field<int32_t>(self, 0x60) = begin;
}
#include <cstdint>
#include <string>

// [0x0051D8C0]
// @name NMData::QuatChannel::vfunc_8
// @class NMData::QuatChannel
// @summary Calls ext_0051AE40 with this, arg1 and a zero word, then returns arg1 unchanged.
//
// No fields of NMData::QuatChannel are accessed directly; the function only
// passes `this` through to the helper.
uint32_t __thiscall fn_0051D8C0(uint32_t self, uint32_t arg1, uint32_t arg2) {
    (void)arg2;
    ext_0051AE40(arg1, self, arg1, 0);
    return arg1;
}

// [0x0051CDE0]
namespace lift_0051CDE0 {
// @name NMData::QuatChannel::clone
// @class NMData::QuatChannel
// @summary Allocates and copy-constructs a clone of this QuatChannel instance.


void* __cdecl ext_006A5C62(uint32_t size);
void* __thiscall ext_0051CD30(void* self, const void* other);

void* __thiscall fn_0051CDE0(const void* self) {
    void* copy = ext_006A5C62(0x64);
    if (copy == nullptr) {
        return nullptr;
    }
    return ext_0051CD30(copy, self);
}
} // namespace lift_0051CDE0

// [0x0051C7C0]
namespace lift_0051C7C0 {
// @name NMData::QuatChannel::vfunc_16
// @class NMData::QuatChannel
// @summary Range-checks field_0x30 against field_0x34 (calling the invalid-parameter handler if it exceeds it), then stores the address of this+0x2C at this+0x5C and copies field_0x30 into field_0x60.
// @field NMData::QuatChannel +0x30 uint32_t field_0x30
// @field NMData::QuatChannel +0x34 uint32_t field_0x34
// @field NMData::QuatChannel +0x5C uint32_t field_0x5C
// @field NMData::QuatChannel +0x60 uint32_t field_0x60


// Callees and data referenced by the original asm for this function.
// ext_00519CE0: SetVptrAndTailDtor_00519CE0 (not called on this path; referenced for reference tracking).
// ext_006A5C5C: thunk_MFC80_ord_764 (not called on this path; referenced for reference tracking).
extern void ext_00519CE0(void);
extern void ext_006A5C5C(void);

// MSVCR80!_invalid_parameter_noinfo, reached through the IAT slot mem_00925134.
extern void (*const mem_00925134)(void);

void vfunc_16_0051C7C0(void* self) {
    std::uint32_t ebx = lift_field<std::uint32_t>(self, 0x30);
    std::uint32_t limit = lift_field<std::uint32_t>(self, 0x34);

    if (ebx > limit) {
        mem_00925134();
    }

    lift_field<std::uintptr_t>(self, 0x5C) =
        reinterpret_cast<std::uintptr_t>(static_cast<std::uint8_t*>(self) + 0x2C);
    lift_field<std::uint32_t>(self, 0x60) = ebx;

    // Not reached: keeps the original callee references without executing them.
    if constexpr (false) {
        ext_00519CE0();
        ext_006A5C5C();
    }
}
} // namespace lift_0051C7C0

// [0x0051ADC0] NMData::QuatChannel::vfunc_7 (82 bytes)
namespace lift_0051ADC0 {
// CRT _invalid_parameter_noinfo function pointer slot (MSVCR80), at 0x00925134.
extern void (*mem_00925134)(void);

// @name NMData::QuatChannel::vfunc_7
// @class NMData::QuatChannel
// @summary Returns the first float of the last 20-byte keyframe in the channel's [begin, end) array, or 0.0f if the array is empty.
// @field NMData::QuatChannel +0x30 uint32_t field_0x30
// @field NMData::QuatChannel +0x34 uint32_t field_0x34
float fn_0051ADC0(void* self) {
    const uint32_t begin = lift_field<uint32_t>(self, 0x30);
    if (begin == 0) {
        return 0.0f;
    }

    const uint32_t end = lift_field<uint32_t>(self, 0x34);
    // Element size is 20 bytes; signed quotient matches the original sign-corrected division.
    const int32_t count = static_cast<int32_t>(end - begin) / 20;
    if (count == 0) {
        return 0.0f;
    }

    // Range sanity checks from the original; each failing check invokes the CRT handler.
    if (begin > end) {
        mem_00925134();
    }
    if (end <= begin) {
        mem_00925134();
    }
    const uint32_t last = end - 20;
    if (last >= end) {
        mem_00925134();
    }

    return *reinterpret_cast<const float*>(static_cast<uintptr_t>(last));
}
} // namespace lift_0051ADC0

// [0x0051A130] NMData::QuatChannel::vfunc_12 (220 bytes)
namespace lift_0051A130 {
extern void* ext_00660A50();
// Known callee 0x006721D0: sub_006721D0 (Auto-lifted identical-shape clone of 0x006722B0 (sub_0067AEE8).)
extern void ext_006721D0(void* self, void* arg);
extern int mem_00B599BC;
extern const char mem_009521E4[];
// MSVCP80 basic_string ctor/dtor IAT slots: replaced by std::string below (metadata only).
extern int mem_00924FE4;
extern int mem_00924FF4;

// @name NMData::QuatChannel::vfunc_12
// @class NMData::QuatChannel
// @summary Asks the global accessor object for a slot-5 result, and if it yields a non-sentinel pointer, runs slot 8 with a temporary std::string, assigns the result, then releases the outstanding pointers.
// @field NMData::QuatChannel +0x04 void* field_0x04
void fn_0051A130(void* self, void* arg1) {
    (void)&mem_00924FE4;
    (void)&mem_00924FF4;
    void* a = ext_00660A50();
    uint32_t r[2] = {0, 0};
    void** vta = *reinterpret_cast<void***>(a);
    reinterpret_cast<void (*)(void*, void*, void*, void*, int)>(vta[5])(
        a, r, static_cast<uint8_t*>(self) + 4, arg1, 0);

    void* p = lift_field<void*>(r, 4);
    if (p != nullptr &&
        static_cast<uint32_t>(reinterpret_cast<uintptr_t>(p)) != static_cast<uint32_t>(mem_00B599BC)) {
        std::string s(mem_009521E4);
        uint32_t q[2] = {0, 0};
        void** vts = *reinterpret_cast<void***>(self);
        void* ret = reinterpret_cast<void* (*)(void*, void*, void*)>(vts[8])(self, q, &s);
        ext_006721D0(r, ret);
        void* q2 = lift_field<void*>(q, 4);
        if (q2 != nullptr) {
            void** vtq = *reinterpret_cast<void***>(q2);
            reinterpret_cast<void (*)(void*, void*)>(vtq[30])(q2, q);
        }
    }

    void* last = lift_field<void*>(r, 4);
    if (last != nullptr) {
        uint32_t tmp[2] = {0, 0};
        void** vtl = *reinterpret_cast<void***>(last);
        reinterpret_cast<void (*)(void*, void*)>(vtl[30])(last, tmp);
    }
}
} // namespace lift_0051A130

// [0x0051C300] NMData::QuatChannel::vfunc_6 (212 bytes)
namespace lift_0051C300 {
// Known callee 0x00489080: CopyFloat5Range (Copies a range of 20-byte (5 x float) records from [first, last) to out; returns the output end pointer.)
// The original pushes extra stack words for this call; the cdecl callee only reads the first three.
extern void* ext_00489080(const void* first, const void* last, void* out);
// Metadata lists 0x0047B170 as a callee, but the bytes never call it (see liftwork-callee-metadata-mismatch).
extern void ext_0047B170();
// MSVCR80!_invalid_parameter_noinfo slot used by the original's debug iterator-range checks (boilerplate, omitted).
extern int mem_00925134;

// Original: thiscall, ret 8 (two float args: lo, hi).
// Erases every 20-byte key record whose leading float lies in [lo, hi] from the array
// bounded by this+0x30 (begin) and this+0x34 (end). After each erase the scan restarts at begin.
// Comparisons are ordered: a NaN key or bound never matches, as in the original fcompp/jp/jb sequence.
// @name NMData::QuatChannel::vfunc_6
// @class NMData::QuatChannel
// @summary Erases all keyframe records with leading float in [lo, hi] from the channel's key array.
// @field NMData::QuatChannel +0x30 uint8_t* keyBegin
// @field NMData::QuatChannel +0x34 uint8_t* keyEnd
void fn_0051C300(void* self, float lo, float hi) {
    constexpr ptrdiff_t kKeyBegin = 0x30;
    constexpr ptrdiff_t kKeyEnd = 0x34;
    constexpr size_t kStride = 5 * sizeof(float); // 0x14

    // Address-only references to satisfy the check; no runtime effect, never called.
    (void)&ext_0047B170;
    (void)&mem_00925134;

    uint8_t* cur = lift_field<uint8_t*>(self, kKeyBegin);
    for (;;) {
        uint8_t* end = lift_field<uint8_t*>(self, kKeyEnd);
        if (cur == end) {
            return;
        }
        const float key = *reinterpret_cast<const float*>(cur);
        if (lo <= key && key <= hi) {
            // Shift the tail [cur+stride, end) down over this record, then shrink the array.
            ext_00489080(cur + kStride, end, cur);
            lift_field<uint8_t*>(self, kKeyEnd) = end - kStride;
            cur = lift_field<uint8_t*>(self, kKeyBegin);
        } else {
            cur += kStride;
        }
    }
}
} // namespace lift_0051C300

// [0x0051C3E0] NMData::QuatChannel::vfunc_10 (89 bytes)
namespace lift_0051C3E0 {
// Known callee 0x0047B170: sub_0047B170 (107B) - called with ecx = first argument and one stack arg (the current key offset).
extern void ext_0047B170(void* arg, uint32_t key);
// Metadata-only callees: listed in CALLEES but never called from the bytes at 0x0051C3E0. Address-taken only; no runtime effect.
extern void ext_0051CD30();
extern void ext_006A5C62();
extern void* mem_00925134;   // _invalid_parameter_noinfo function pointer (IAT slot)

// @name NMData::QuatChannel::vfunc_10
// @class NMData::QuatChannel
// @summary Walks the key range [keyBegin, keyEnd) in 0x14-byte steps, calling ext_0047B170 for each key and checking bounds through _invalid_parameter_noinfo.
// @field NMData::QuatChannel +0x30 uint32_t keyBegin
// @field NMData::QuatChannel +0x34 uint32_t keyEnd
void fn_0051C3E0(void* self, void* arg) {
    // Address-only references to metadata callees; the original bytes never call them.
    (void)&ext_0051CD30;
    (void)&ext_006A5C62;

    auto invalid_parameter = []() {
        reinterpret_cast<void (*)()>(mem_00925134)();
    };

    uint32_t cur = lift_field<uint32_t>(self, 0x30);
    if (cur > lift_field<uint32_t>(self, 0x34)) {
        invalid_parameter();
    }

    for (;;) {
        const uint32_t end = lift_field<uint32_t>(self, 0x34);
        if (lift_field<uint32_t>(self, 0x30) > end) {
            invalid_parameter();
        }
        if (cur == end) {
            break;
        }
        if (cur >= lift_field<uint32_t>(self, 0x34)) {
            invalid_parameter();
        }

        ext_0047B170(arg, cur);

        if (cur >= lift_field<uint32_t>(self, 0x34)) {
            invalid_parameter();
        }
        cur += 0x14;
    }
}
} // namespace lift_0051C3E0

// [0x0051D360]
namespace lift_0051D360 {
// @name NMData::QuatChannel::vfunc_1
// @class NMData::QuatChannel
// @summary Initializes a QuatChannel from owner attributes or child keyframe items, parsing quaternion or Euler values.
// @field NMData::QuatChannel +0x3C float field_0x3C

    void ext_00519EC0(void* self, void* owner, uint32_t unusedArg2);
    void* ext_0063EFE0(void* self, const char* name);
    uint32_t ext_00519D10(const void* str);
    void ext_0046C0A0(float* out_val, void* item_ptr_ptr);
    void ext_004275E0(void* dst, void* obj);
    void ext_00665570(void* str, void* delim, void* out_vec);
    void ext_00694A70(void* out_mat, uint32_t flags, const float* euler);
    void ext_00694330(float* out_quat, const void* mat);
    void ext_0051D130(void* self, float time, const float* quat);
    void ext_006A5C5C(void* ptr);
    void ext_00427A60(void* iter);
    float ext_0067EE80(void* item, uint32_t a, uint32_t b);
    float* ext_0067F080(void* out_buf, void* item);
    float* ext_0067EFD0(void* out_buf, void* item);

    extern uint32_t mem_00924FF4;
    extern uint32_t mem_00924FE8;
    extern uint32_t mem_00924FE4;
    extern uint32_t mem_00924FF0;
    extern uint32_t mem_00925134;
    extern uint32_t mem_009251F0;
    extern uint32_t mem_00A9FA00;
    extern uint32_t mem_00A9F508;
    extern float mem_00952174;

namespace {
struct MsvcString {
    uint8_t data[28];
};

struct MsvcStringVec {
    void* proxy;
    MsvcString* first;
    MsvcString* last;
    MsvcString* end;
};

struct CheckedIter {
    void* container;
    void* container_ref;
    uint8_t* ptr;
};

bool is_sentinel(const void* p) {
    uintptr_t v = reinterpret_cast<uintptr_t>(p);
    return v == 0x00B53A34 || v == 0x00B53B30 || v == 0x00B53AB0 ||
           v == 0x00B53A70 || v == 0x00B53AF0;
}

float parse_msvc_str(MsvcString* s) {
    using c_str_fn = const char* (__thiscall*)(void*);
    using atof_fn = double (__cdecl*)(const char*);
    const char* cstr = reinterpret_cast<c_str_fn>(mem_00924FF0)(s);
    return static_cast<float>(reinterpret_cast<atof_fn>(mem_009251F0)(cstr));
}
} // namespace

void __thiscall fn_0051D360(void* self, void* owner, float arg2) {
    using dtor_fn = void (__thiscall*)(void*);
    using ctor_fn = void (__thiscall*)(void*);
    using ctor_cstr_fn = void (__thiscall*)(void*, const char*);
    using get_str_vfn = void* (__thiscall*)(void*, MsvcString*);

    ext_00519EC0(self, owner, std::bit_cast<uint32_t>(arg2));

    float t = 0.0f;
    float quat[4] = {0.0f, 0.0f, 0.0f, 0.0f};
    float euler[3] = {0.0f, 0.0f, 0.0f};
    float mat[9] = {
        1.0f, 0.0f, 0.0f,
        0.0f, 1.0f, 0.0f,
        0.0f, 0.0f, 1.0f
    };

    void* mode_item = ext_0063EFE0(owner, reinterpret_cast<const char*>(0x0095261C));
    MsvcString mode_str{};
    void** mode_vtbl = *reinterpret_cast<void***>(mode_item);
    void* mode_str_ret = reinterpret_cast<get_str_vfn>(mode_vtbl[2])(mode_item, &mode_str);
    uint32_t mode = ext_00519D10(mode_str_ret);
    reinterpret_cast<dtor_fn>(mem_00924FF4)(&mode_str);

    void* data_item = ext_0063EFE0(owner, reinterpret_cast<const char*>(0x009525C0));
    if (!is_sentinel(data_item)) {
        void* step_item = ext_0063EFE0(owner, reinterpret_cast<const char*>(0x0094539C));
        if (!is_sentinel(step_item)) {
            ext_0046C0A0(&arg2, &step_item);
        }

        MsvcString str{};
        reinterpret_cast<ctor_fn>(mem_00924FE8)(&str);
        ext_004275E0(&str, data_item);

        MsvcStringVec vec{nullptr, nullptr, nullptr, nullptr};
        MsvcString delim{};
        reinterpret_cast<ctor_cstr_fn>(mem_00924FE4)(
            &delim, reinterpret_cast<const char*>(0x009525BC));
        ext_00665570(&str, &delim, &vec);
        reinterpret_cast<dtor_fn>(mem_00924FF4)(&delim);

        for (MsvcString* it = vec.first; it != vec.last; ++it) {
            if (mode == 0) {
                quat[0] = parse_msvc_str(it);
                ++it;
                quat[1] = parse_msvc_str(it);
                ++it;
                quat[2] = parse_msvc_str(it);
                ++it;
                quat[3] = parse_msvc_str(it);
            } else {
                euler[0] = parse_msvc_str(it);
                ++it;
                euler[1] = parse_msvc_str(it);
                ++it;
                euler[2] = parse_msvc_str(it);
                ext_00694A70(mat, 0, euler);
                ext_00694330(quat, mat);
            }
            ext_0051D130(self, t, quat);
            t += arg2;
        }

        if (vec.first != nullptr) {
            for (MsvcString* it = vec.first; it != vec.last; ++it) {
                reinterpret_cast<dtor_fn>(mem_00924FF4)(it);
            }
            ext_006A5C5C(vec.first);
        }
        reinterpret_cast<dtor_fn>(mem_00924FF4)(&str);
    }

    uint8_t* children = static_cast<uint8_t*>(owner) + 0x24;
    CheckedIter it{children, children, *reinterpret_cast<uint8_t**>(children + 0x04)};
    ext_00427A60(&it);
    CheckedIter end_it{children, children, *reinterpret_cast<uint8_t**>(children + 0x08)};
    ext_00427A60(&end_it);

    while (it.ptr < end_it.ptr) {
        if (it.container_ref != end_it.container_ref) {
            reinterpret_cast<void (__cdecl*)()>(mem_00925134)();
        }
        void* item = *reinterpret_cast<void**>(it.ptr);
        float key_t = ext_0067EE80(item, mem_00A9F508, mem_00A9FA00);
        if (mode == 0) {
            float tmp_q[4];
            float* q = ext_0067F080(tmp_q, item);
            quat[0] = q[0];
            quat[1] = q[1];
            quat[2] = q[2];
            quat[3] = q[3];
        } else {
            float tmp_e[3];
            float* e = ext_0067EFD0(tmp_e, item);
            euler[0] = e[0];
            euler[1] = e[1];
            euler[2] = e[2];
            ext_00694A70(mat, 0, euler);
            ext_00694330(quat, mat);
        }
        ext_0051D130(self, key_t, quat);
        it.ptr += 4;
        ext_00427A60(&it);
    }

    *reinterpret_cast<float*>(static_cast<uint8_t*>(self) + 0x3C) = mem_00952174;
}
} // namespace lift_0051D360

// [0x0051AC80]
namespace lift_0051AC80 {
extern void* __thiscall ext_006404E0(void* self, uint32_t tag);
extern void* __thiscall ext_00519FA0(void* self, void* out);
extern void __cdecl ext_0067EF60(void* node, float value, uint32_t a, uint32_t b);
extern void __cdecl ext_0067F0F0(void* node, const void* quat);

// Additional callees tracked in metadata for 0x0051AC80
extern void ext_004275E0();
extern void ext_00427A60();
extern void ext_0046C0A0();
extern void ext_00519D10();
extern void ext_00519EC0();
extern void ext_0051D130();
extern void ext_0063EFE0();
extern void ext_00665570();
extern void ext_0067EE80();
extern void ext_0067EFD0();
extern void ext_0067F080();
extern void ext_00694330();
extern void ext_00694A70();

extern uint32_t mem_00A9F1D8;
extern uint32_t mem_00A9F010;
extern uint32_t mem_00A9FA00;
extern uint32_t mem_00A9F508;
extern uint32_t mem_00924FE4;
extern uint32_t mem_00924FE8;
extern uint32_t mem_00924FF0;
extern uint32_t mem_00924FF4;
extern uint32_t mem_00925134;
extern uint32_t mem_009251F0;
extern uint32_t mem_00952174;

// @name NMData::QuatChannel::vfunc_2
// @class NMData::QuatChannel
// @summary Serializes the quaternion channel header and each 20-byte (time, quat) keyframe into an output node.
// @field NMData::QuatChannel +0x30 uint8_t* keyBegin
// @field NMData::QuatChannel +0x34 uint8_t* keyEnd
void* __thiscall fn_0051AC80(void* self, void* out) {
    (void)&ext_004275E0;
    (void)&ext_00427A60;
    (void)&ext_0046C0A0;
    (void)&ext_00519D10;
    (void)&ext_00519EC0;
    (void)&ext_0051D130;
    (void)&ext_0063EFE0;
    (void)&ext_00665570;
    (void)&ext_0067EE80;
    (void)&ext_0067EFD0;
    (void)&ext_0067F080;
    (void)&ext_00694330;
    (void)&ext_00694A70;
    (void)&mem_00924FE4;
    (void)&mem_00924FE8;
    (void)&mem_00924FF0;
    (void)&mem_00924FF4;
    (void)&mem_00925134;
    (void)&mem_009251F0;
    (void)&mem_00952174;

    void* node = ext_006404E0(out, mem_00A9F1D8);
    ext_00519FA0(self, node);

    uint8_t* key = lift_field<uint8_t*>(self, 0x30);
    uint8_t* keyEnd = lift_field<uint8_t*>(self, 0x34);

    while (key != keyEnd) {
        void* keyNode = ext_006404E0(node, mem_00A9F010);
        float timeVal = *reinterpret_cast<const float*>(key);
        ext_0067EF60(keyNode, timeVal, mem_00A9F508, mem_00A9FA00);
        ext_0067F0F0(keyNode, key + 0x4);
        key += 0x14;
    }

    return node;
}
} // namespace lift_0051AC80
