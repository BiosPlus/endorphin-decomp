// Lifted C++ translation unit: lifted/NMData/RealChannel.cpp
#include "lift_compat.h"
// Invalid-parameter handler pointer (MSVCR80 _invalid_parameter_noinfo), loaded from the IAT slot.
extern "C" void (*mem_00925134)();

extern "C" void (*mem_00925134)();
// Original: if begin > end (unsigned) calls the CRT invalid-parameter handler (mem_00925134, which terminates by default);
// then stores &self->+0x2C into +0x3C and begin into +0x40.
// @name NMData::RealChannel::vfunc_16
// @class NMData::RealChannel
// @summary Rebinds the self-pointer at +0x3C to +0x2C and copies begin into +0x40, aborting if begin > end.
// @field NMData::RealChannel +0x30 int32_t begin
// @field NMData::RealChannel +0x34 int32_t end
// @field NMData::RealChannel +0x3C void* field_0x3C
// @field NMData::RealChannel +0x40 int32_t field_0x40
void fn_0051BEF0(void* self) {
    int32_t begin = lift_field<int32_t>(self, 0x30);
    int32_t end = lift_field<int32_t>(self, 0x34);
    if (static_cast<uint32_t>(begin) > static_cast<uint32_t>(end)) {
        // CRT _invalid_parameter_noinfo: the default handler terminates the process.
        std::abort();
    }
    lift_field<void*>(self, 0x3C) = static_cast<uint8_t*>(self) + 0x2C;
    lift_field<int32_t>(self, 0x40) = begin;
}
float fn_0051AB80(void* self) {
    const uint32_t begin = static_cast<uint32_t>(lift_field<int32_t>(self, 0x30));
    const uint32_t end   = static_cast<uint32_t>(lift_field<int32_t>(self, 0x34));

    // Empty when begin is null, or when (end - begin) >> 3 == 0.
    if (begin == 0) {
        return 0.0f;
    }
    const int32_t count = static_cast<int32_t>(end - begin) >> 3;
    if (count == 0) {
        return 0.0f;
    }

    // Guard checks; the original calls the invalid-parameter handler and then continues.
    if (begin > end) {
        mem_00925134();
    }
    if (end <= begin) {
        mem_00925134();
    }
    const uint32_t last = end - 8;
    if (last >= end) {
        mem_00925134();
    }

    return *reinterpret_cast<const float*>(static_cast<uintptr_t>(last));
}
// Callee takes two stack arguments (caller cleans up with add esp,8).
extern "C" void ext_0051AE20(void* self, uint32_t arg2);

extern "C" void ext_0051AE20(void* self, uint32_t arg2);
// @name NMData::RealChannel::vfunc_13
// @class NMData::RealChannel
// @summary Multiplies the float at +4 of each 8-byte entry in the [begin, end) range by the scale argument.
// @field RealChannel +0x30 int32_t begin
// @field RealChannel +0x34 int32_t end
void fn_0051ABD0(void* self, float scale) {
    // The MSVCRT _invalid_parameter_noinfo guard calls in the original are
    // invariant checks (begin <= end, cur < end) and are omitted here.
    uint32_t cur = lift_field<uint32_t>(self, 0x30);
    const uint32_t end = lift_field<uint32_t>(self, 0x34);

    while (cur != end) {
        float* value = reinterpret_cast<float*>(static_cast<uintptr_t>(cur) + 4);
        *value = *value * scale;
        cur += 8;
    }
}
#include <string>

// [0x0051AED0] NMData::RealChannel::vfunc_8 (31 bytes)
// @name NMData::RealChannel::vfunc_8
// @class NMData::RealChannel
// @summary Forwards self and the entry ecx value to ext_0051AE20, then returns self.
//
// Notes:
//  - Stdcall-style (ret 8): the second stack argument is never read.
//  - ecx at entry is pushed as the callee's second argument. The original code
//    then zeroes a saved-ecx stack slot before popping, so ecx is 0 on return.
//    That clobber is not modelled here.
void* fn_0051AED0(void* self, uint32_t ecx_in) {
    ext_0051AE20(self, ecx_in);
    return self;
}

// [0x0051BF10]
namespace lift_0051BF10 {
extern uint32_t mem_00925134;
void __thiscall ext_0048EF80(void* self, void* out_iter, void* container1, uint32_t begin_it, void* container2, uint32_t end_it);

// @name NMData::RealChannel::clear
// @class NMData::RealChannel
// @summary Clears the RealChannel data vector by erasing from begin to end.
// @field NMData::RealChannel +0x30 uint32_t begin
// @field NMData::RealChannel +0x34 uint32_t end
void __thiscall fn_0051BF10(uint8_t* self) {
    using InvalidParamFn = void(__cdecl*)();
    InvalidParamFn invalid_param = reinterpret_cast<InvalidParamFn>(static_cast<uintptr_t>(mem_00925134));

    uint8_t* vec = self + 0x2C;
    uint32_t end_val = *reinterpret_cast<uint32_t*>(vec + 0x08);
    if (*reinterpret_cast<uint32_t*>(vec + 0x04) > end_val) {
        invalid_param();
    }

    uint32_t begin_val = *reinterpret_cast<uint32_t*>(vec + 0x04);
    if (begin_val > *reinterpret_cast<uint32_t*>(vec + 0x08)) {
        invalid_param();
    }

    uint32_t local_iter[2] = {};
    ext_0048EF80(vec, local_iter, vec, begin_val, vec, end_val);
}
} // namespace lift_0051BF10

// [0x0051C6D0] NMData::RealChannel::vfunc_4 (93 bytes)
namespace lift_0051C6D0 {
// @name NMData::RealChannel::vfunc_4
// @class NMData::RealChannel
// @summary Auto-lifted identical-shape clone of 0x0051CDE0 (NMData::QuatChannel::clone).
namespace lift_0051CDE0 {
// @name NMData::QuatChannel::clone
// @class NMData::QuatChannel
// @summary Allocates and copy-constructs a clone of this QuatChannel instance.


void* __cdecl ext_006A5C62(uint32_t size);
void* __thiscall ext_0051C640(void* self, const void* other);

void* __thiscall fn_0051C6D0(const void* self) {
    void* copy = ext_006A5C62(0x44);
    if (copy == nullptr) {
        return nullptr;
    }
    return ext_0051C640(copy, self);
}
} // namespace lift_0051CDE0
} // namespace lift_0051C6D0

// [0x0051BEF0]
namespace lift_0051BEF0 {
// @name NMData::RealChannel::vfunc_16
// @class NMData::RealChannel
// @summary Validates begin <= end (calling _invalid_parameter_noinfo through the import slot otherwise), then stores &this->field_0x2C at +0x3C and begin at +0x40.
// @field NMData::RealChannel +0x30 uint32_t begin
// @field NMData::RealChannel +0x34 uint32_t end
// @field NMData::RealChannel +0x3C void* field_0x3C
// @field NMData::RealChannel +0x40 uint32_t field_0x40

// Import slot holding the address of MSVCR80!_invalid_parameter_noinfo.
extern void* mem_00925134;

void NMData_RealChannel_vfunc_16(void* self) {
    uint32_t begin = lift_field<uint32_t>(self, 0x30);
    uint32_t end   = lift_field<uint32_t>(self, 0x34);

    if (begin > end) {
        // call dword ptr [0x925134] ; MSVCR80!_invalid_parameter_noinfo
        reinterpret_cast<void (*)()>(mem_00925134)();
    }

    lift_field<void*>(self, 0x3C) = static_cast<uint8_t*>(self) + 0x2C;
    lift_field<uint32_t>(self, 0x40) = begin;
}
} // namespace lift_0051BEF0

// [0x0051ABD0] NMData::RealChannel::vfunc_13 (89 bytes)
namespace lift_0051ABD0 {
// CRT invalid-parameter handler pointer (_invalid_parameter_noinfo), loaded from 0x00925134.
extern void* mem_00925134;

static inline void invalid_parameter() {
    reinterpret_cast<void (*)()>(mem_00925134)();
}

// @name NMData::RealChannel::vfunc_13
// @class NMData::RealChannel
// @summary Scales the float at +4 of each 8-byte entry in the [begin, end) range by a float factor, calling the CRT invalid-parameter handler on range violations.
// @field NMData::RealChannel +0x30 uint32_t begin
// @field NMData::RealChannel +0x34 uint32_t end
void fn_0051ABD0(void* self, float scale) {
    const uint32_t end = lift_field<uint32_t>(self, 0x34);
    if (lift_field<uint32_t>(self, 0x30) > end) {
        invalid_parameter();
    }

    uint32_t p = lift_field<uint32_t>(self, 0x30);
    while (p != end) {
        if (p >= end) {
            invalid_parameter();
        }
        auto* value = reinterpret_cast<float*>(static_cast<uintptr_t>(p) + 4);
        *value *= scale;
        if (p >= end) {
            invalid_parameter();
        }
        p += 8;
    }
}
} // namespace lift_0051ABD0

// [0x0051A050] NMData::RealChannel::vfunc_12 (220 bytes)
namespace lift_0051A050 {
extern void* ext_00660A50(void* self);         // returns the helper object (eax) for self
extern int ext_006721D0(void* self, int arg);  // thiscall helper: self in ecx, arg on stack
extern uintptr_t mem_00B599BC;                  // sentinel value compared against the object pointer
extern int mem_00924FE4;                        // IAT slot: std::string(const char*) ctor (replaced by std::string)
extern int mem_00924FF4;                        // IAT slot: std::string dtor (replaced by std::string)

// Invoke vtable slot at byte offset Off on obj (virtual dispatch through the object's vtable).
template <std::size_t Off, typename R, typename... A>
inline R vcall(void* obj, A... args) {
    void** vt = *reinterpret_cast<void***>(obj);
    using Fn = R (*)(void*, A...);
    return reinterpret_cast<Fn>(vt[Off / sizeof(void*)])(obj, args...);
}

// Two-word result written through a hidden out-pointer by the slot-0x14 method.
struct RealChannelPair {
    uint32_t tag;
    void*    obj;
};

// @name NMData::RealChannel::vfunc_12
// @class NMData::RealChannel
// @summary Fetches a helper object, queries it for a (tag, object) pair keyed by this+4 and arg, and if the object is valid and not the sentinel, resolves it through vtable slot 0x20 and ext_006721D0; the pair object is released through vtable slot 0x78 in all non-null cases.
// @field NMData::RealChannel +0x04 void* field_0x04
void fn_0051A050(void* self, int arg) {
    // Address-only references to the CRT string import slots; the std::string below replaces them.
    (void)&mem_00924FE4;
    (void)&mem_00924FF4;

    void* src = ext_00660A50(self);

    RealChannelPair pair{};
    vcall<0x14, void>(src, &pair, static_cast<uint8_t*>(self) + 0x04, arg, 0);
    void* obj = pair.obj;

    if (obj != nullptr && reinterpret_cast<uintptr_t>(obj) != mem_00B599BC) {
        std::string label("");
        void* outA = nullptr;
        void* ret = vcall<0x20, void*>(self, &outA, &label);

        ext_006721D0(&outA, static_cast<int>(reinterpret_cast<intptr_t>(ret)));

        if (outA != nullptr) {
            void* rel = nullptr;
            vcall<0x78, void>(outA, &rel);
        }
        // label is destroyed at scope exit (std::string dtor replaces the CRT import)
    }

    if (obj != nullptr) {
        void* rel = nullptr;
        vcall<0x78, void>(obj, &rel);
    }
}
} // namespace lift_0051A050

// [0x0051C2A0] NMData::RealChannel::vfunc_10 (89 bytes)
namespace lift_0051C2A0 {
// CRT _invalid_parameter_noinfo handler pointer, loaded from the IAT slot.
extern void (*mem_00925134)();
extern void ext_0047B170(void* self, uint32_t value);

// @name NMData::RealChannel::vfunc_10
// @class NMData::RealChannel
// @summary Walks the [begin, end) range at +0x30/+0x34 in 8-byte steps, calling ext_0047B170(arg, entry) for each entry, aborting via the invalid-parameter handler on bad bounds.
// @field NMData::RealChannel +0x30 uint32_t begin
// @field NMData::RealChannel +0x34 uint32_t end
void __thiscall fn_0051C2A0(void* self, void* arg) {
    // Original: if begin > end (unsigned) the invalid-parameter handler is called (then execution continues).
    if (static_cast<uint32_t>(lift_field<uint32_t>(self, 0x30)) > lift_field<uint32_t>(self, 0x34)) {
        mem_00925134();
    }

    // edi = self + 0x2C; bounds are read through it: [edi+4] = begin, [edi+8] = end.
    uint32_t cursor = lift_field<uint32_t>(self, 0x30);
    const uint32_t limit = lift_field<uint32_t>(self, 0x34);
    if (lift_field<uint32_t>(self, 0x30) > limit) {
        mem_00925134();
    }

    while (cursor != limit) {
        // Entry must be below the current end (re-read from memory each time).
        if (!(cursor < lift_field<uint32_t>(self, 0x34))) {
            mem_00925134();
        }
        ext_0047B170(arg, cursor);
        if (!(cursor < lift_field<uint32_t>(self, 0x34))) {
            mem_00925134();
        }
        cursor += 8;
    }
}
} // namespace lift_0051C2A0
