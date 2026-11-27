// Lifted C++ translation unit: lifted/NMData/FluidObjectData.cpp
#include "lift_compat.h"
#include <new>
#include <string>
// Static std::string object at VA 0x00B44944 (copied into the sret buffer).
extern "C" const std::string mem_00B44944;
// Base-class implementation NMData::CollisionModelDataBase::vfunc_15 at 0x005C3010.
extern "C" void __thiscall ext_005C3010(void* self, void* a, void* b);

extern "C" void __thiscall ext_005C3010(void* self, void* a, void* b);
// @name NMData::FluidObjectData::vfunc_62
// @class NMData::FluidObjectData
// @summary Copy-constructs a std::string from the static string at 0x00B44944 into the caller's sret buffer and returns that buffer.
void* __thiscall fn_005C3270(void* self, void* out) {
    (void)self;
    new (out) std::string(mem_00B44944);
    return out;
}
extern "C" void* ext_006A5C62(size_t size);
extern "C" void* ext_005CC5C0(void* self, void* owner);

extern "C" void* ext_005CC5C0(void* self, void* owner);
// @name NMData::FluidObjectData::vfunc_15
// @class NMData::FluidObjectData
// @summary Forwards (a, b) to the CollisionModelDataBase::vfunc_15 implementation on this object and returns a.
void* __thiscall fn_005C32B0(void* self, void* a, void* b) {
    ext_005C3010(self, a, b);
    return a;
}
#include <cstring>
#include <cstdint>

#include <cstdint>
// @name NMData::FluidObjectData::vfunc_17_off_C
// @class NMData::FluidObjectData
// @summary Auto-lifted identical-shape clone of 0x004CFC30 (NMData::IncarnationEventData::vfunc_17_off_C).
void* fn_005CC650(void* self) {
    void* mem = ext_006A5C62(0x19C);
    if (mem == nullptr) {
        return nullptr;
    }
    void* owner = static_cast<unsigned char*>(self) - 0xC;
    return ext_005CC5C0(mem, owner);
}

// [0x005C44A0]
// @name NMData::FluidObjectData::vfunc_33
// @class NMData::FluidObjectData
// @summary Assigns a string literal to the member std::string at +0x17c, clears the flag at +0x198, then forwards to the base NMData::CollisionModelDataBase::vfunc_33.
// @field NMData::FluidObjectData +0x17c std::string field_0x17c
// @field NMData::FluidObjectData +0x198 u32 field_0x198

#include "lift_compat.h"

extern "C" void __thiscall ext_005C3660(void* self);

// MSVCP80 std::string helpers (thiscall, passed as plain function pointers).
extern "C" void (*mem_00924FE4)(void* self, const char* s);            // basic_string(const char*)
extern "C" void* (*mem_00924FDC)(void* self, const void* rhs);         // basic_string::operator=(const basic_string&)
extern "C" void (*mem_00924FF4)(void* self);                           // ~basic_string()

// Opaque storage for a temporary std::string (MSVCP80 layout is 28 bytes on x86).
struct alignas(8) StringStorage {
    uint8_t bytes[32];
};

extern "C" void fn_005C44A0(void* self) {
    StringStorage tmp{};
    const char* literal = reinterpret_cast<const char*>(static_cast<uintptr_t>(0x00928B5D));

    mem_00924FE4(&tmp, literal);
    mem_00924FDC(&lift_field<uint8_t>(self, 0x17C), &tmp);
    mem_00924FF4(&tmp);

    lift_field<uint32_t>(self, 0x198) = 0;
    ext_005C3660(self);
}

// [0x005C3270] NMData::FluidObjectData::vfunc_62 (34 bytes)
namespace lift_005C3270 {
// Static std::string object at VA 0x00B44944 (copy source).
extern const std::string mem_00B44944;
// MSVCP80 import slot [0x924FE0]: address of std::basic_string copy constructor (thiscall).
extern void (__thiscall* mem_00924FE0)(void* self, const std::string& rhs);

// @name NMData::FluidObjectData::vfunc_62
// @class NMData::FluidObjectData
// @summary Copy-constructs a std::string from the static string at 0x00B44944 into the caller's sret buffer and returns that buffer.
// @field NMData::FluidObjectData +0x00 void** vptr
void* __thiscall fn_005C3270(void* self, void* out) {
    (void)self;
    mem_00924FE0(out, mem_00B44944);
    return out;
}
} // namespace lift_005C3270

// [0x005C32E0] NMData::FluidObjectData::vfunc_13_off_C (145 bytes)
namespace lift_005C32E0 {
// @name NMData::FluidObjectData::vfunc_13_off_C
// @class NMData::FluidObjectData
// @summary Auto-lifted identical-shape clone of 0x005C31D0 (NMData::CollisionModelData::vfunc_13_off_C).
// @field NMData::FluidObjectData +0x14 std::string field_0x14
namespace lift_005C31D0 {
extern void ext_005BF510();
extern int mem_00924FDC;
extern int mem_00924FF4;

// @name NMData::CollisionModelData::vfunc_13_off_C
// @class NMData::CollisionModelData
// @summary Fetches a string from the primary object's virtual slot 0xF8, copies it into this+8, then forwards the primary object to ext_005BF400 on the non-null argument.
// @field NMData::CollisionModelData +0x14 std::string field_0x14

namespace {

// Virtual slot at vtable+0xF8 on the primary (this-0xC) object: returns const std::string* into `out`.
using GetStringFn = const void* (__thiscall*)(void* self, void* out);
// MSVCP80 std::string::operator=(const std::string&) and ~std::string(), reached through IAT slots.
using StringAssignFn = void* (__thiscall*)(void* self, const void* rhs);
using StringDtorFn = void (__thiscall*)(void* self);
// Sub-routine ext_005BF400: thiscall(arg, primary).
using ForwardFn = void (__thiscall*)(void* self, void* primary);

}  // namespace

bool __thiscall fn_005C32E0(void* self, void* arg) {
    if (arg == nullptr) {
        return false;
    }

    // self is the RenderObjectOwner/Updateable sub-object at +0xC of the primary object.
    unsigned char* primary = static_cast<unsigned char*>(self) - 0xC;
    unsigned char* vtbl_bytes = *reinterpret_cast<unsigned char**>(primary);
    GetStringFn get_string = *reinterpret_cast<GetStringFn*>(vtbl_bytes + 0xF8);

    // Local std::string temp (MSVC 2005 layout, 0x1C bytes).
    alignas(8) unsigned char tmp[0x1C] = {};

    const void* src = get_string(primary, tmp);

    // String assign into self+8 (= primary+0x14) via the IAT-bound operator=.
    StringAssignFn string_assign =
        reinterpret_cast<StringAssignFn>(*reinterpret_cast<void* const*>(&mem_00924FDC));
    string_assign(static_cast<unsigned char*>(self) + 8, src);

    // Destroy the temp string via the IAT-bound destructor.
    StringDtorFn string_dtor =
        reinterpret_cast<StringDtorFn>(*reinterpret_cast<void* const*>(&mem_00924FF4));
    string_dtor(tmp);

    // Forward to ext_005BF400 with ecx=arg, stack=primary.
    ForwardFn forward = reinterpret_cast<ForwardFn>(ext_005BF510);
    forward(arg, primary);

    return true;
}
} // namespace lift_005C31D0
} // namespace lift_005C32E0

// [0x005CCF60] NMData::FluidObjectData::vfunc_12_off_C (306 bytes)
namespace lift_005CCF60 {
// @name NMData::FluidObjectData::vfunc_12_off_C
// @class NMData::FluidObjectData
// @summary Auto-lifted identical-shape clone of 0x005CCE20 (NMData::CollisionModelData::vfunc_12_off_C).
// @field NMData::FluidObjectData +0x74 uint32_t field_0x74
// @field NMData::FluidObjectData +0x78 uint32_t field_0x78
// @field NMData::FluidObjectData +0x158 void* field_0x158
namespace lift_005CCE20 {
// Callees (declared with prototypes so they can be called from C++).
extern void ext_0041A920(void* vec, const void* elem);       // container push helper (sub_0041A920)
extern void ext_00481BD0(void* self, uint32_t value);        // ZeroMatchingDwordRange (fn_00481BD0 in leaf)
extern void ext_005BF570(void* self, const void* arg);       // sub_005BF460
extern void ext_006A5C5C(uint32_t code);                     // thunk_MFC80_ord_764
// Import slot 0x00925134: MSVCR80!_invalid_parameter_noinfo (called on failed range checks).
extern void (*mem_00925134)(void);

// @name NMData::CollisionModelData::vfunc_12_off_C
// @class NMData::CollisionModelData
// @summary Queries an optional sub-object for a flag, zeroes matching dwords in a local-relative range, rebuilds a temp vector from this+0x74..0x78, notifies an interface, and forwards a non-null error code to thunk_MFC80_ord_764. Returns true on success.
// @field NMData::CollisionModelData +0x74 uint32_t field_0x74
// @field NMData::CollisionModelData +0x78 uint32_t field_0x78
// @field NMData::CollisionModelData +0x158 void* field_0x158
bool fn_005CCF60(void* self, void* arg1, uint32_t value) {
    // Optional query: if this->+0x158 -> +0x20C -> +0x18C is set, call its vtable slot 0x48
    // (slot index 18); bail out with false if it reports failure.
    void* obj = lift_field<void*>(self, 0x158);
    if (obj != nullptr) {
        void* sub = lift_field<void*>(obj, 0x20C);
        void* q = lift_field<void*>(sub, 0x18C);
        if (q != nullptr) {
            void** vt = *reinterpret_cast<void***>(q);
            auto query = reinterpret_cast<bool (*)(void*)>(vt[0x48 / 4]);
            if (!query(q)) {
                return false;
            }
        }
    }

    // ZeroMatchingDwordRange over the range rooted at (self - 0x0C), matching `value`.
    uint8_t* self_m12 = static_cast<uint8_t*>(self) - 0x0C;
    ext_00481BD0(self_m12, value);

    if (lift_field<void*>(self, 0x158) == nullptr) {
        return false;
    }

    // Walk the uint32 range [this+0x74, this+0x78), pushing each element into a temp vector.
    uint32_t vec[3] = {0, 0, 0};
    uint32_t it = lift_field<uint32_t>(self, 0x74);
    if (it > lift_field<uint32_t>(self, 0x78)) {
        mem_00925134();
    }
    for (;;) {
        uint32_t end = lift_field<uint32_t>(self, 0x78);
        if (lift_field<uint32_t>(self, 0x74) > end) {
            mem_00925134();
        }
        if (it == end) {
            break;
        }
        if (!(it < end)) {
            mem_00925134();
        }
        ext_0041A920(vec, reinterpret_cast<const void*>(static_cast<uintptr_t>(it)));
        if (!(it < lift_field<uint32_t>(self, 0x78))) {
            mem_00925134();
        }
        it += 4;
    }

    // Push the address of the range-start pointer (self - 0x0C) into the temp vector.
    value = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(self_m12));
    ext_0041A920(vec, &value);

    // Notify arg1 via its vtable slot 0x44 (index 17); it writes an error/status code into ret_code.
    uint32_t ret_code = 0;
    void** vt2 = *reinterpret_cast<void***>(arg1);
    auto notify = reinterpret_cast<void (*)(void*, uint32_t*)>(vt2[0x44 / 4]);
    notify(arg1, &ret_code);

    obj = lift_field<void*>(self, 0x158);
    ext_005BF570(obj, self_m12);

    if (ret_code != 0) {
        ext_006A5C5C(ret_code);
    }
    return true;
}
} // namespace lift_005CCE20
} // namespace lift_005CCF60

// [0x005CC6C0] NMData::FluidObjectData::vfunc_16_off_C (134 bytes)
namespace lift_005CC6C0 {
// Known callee 0x006A5C62: thunk_MFC80_ord_762 (IAT jump thunk forwarding to MFC80!ord_762, operator new(size)).
extern void* __cdecl ext_006A5C62(size_t size);
// Callee 0x005CC5C0 (sub_005CC5C0, 131B): thiscall on the freshly allocated object, one stack arg (base-adjusted this).
extern void* __thiscall ext_005CC5C0(void* self, void* base);
// Callee 0x005BF510 (sub_005BF510, 93B): thiscall on arg1, one stack arg (constructed object).
extern void __thiscall ext_005BF510(void* self, void* obj);
// Callee 0x005BF570 (sub_005BF570, 59B): thiscall on this->field_0x158, one stack arg (base-adjusted this).
extern void __thiscall ext_005BF570(void* self, void* base);

// @name NMData::FluidObjectData::vfunc_16_off_C
// @class NMData::FluidObjectData
// @summary Allocates a 0x19c-byte object, constructs it against the base-adjusted this, hands it to arg1 and re-registers this->field_0x158; returns the constructed object (or null if allocation failed).
// @field NMData::FluidObjectData +0x158 void* field_0x158
void* __thiscall fn_005CC6C0(void* self, void* arg1) {
    void* base = reinterpret_cast<uint8_t*>(self) - 0xc;
    void* result = nullptr;
    void* obj = ext_006A5C62(0x19c);
    if (obj != nullptr) {
        result = ext_005CC5C0(obj, base);
    }
    ext_005BF510(arg1, result);
    ext_005BF570(lift_field<void*>(self, 0x158), base);
    return result;
}
} // namespace lift_005CC6C0

// [0x005C4520] NMData::FluidObjectData::vfunc_21 (452 bytes)
namespace lift_005C4520 {
// Base-class vfunc_21 (NMData::CollisionModelDataBase::vfunc_21), thiscall with one stack arg.
extern void ext_0058F630(void* self, void* arg);
// sub_0063EFE0: thiscall on container (ecx), one stack arg (C-string name); returns item or sentinel.
extern void* ext_0063EFE0(void* container, const char* name);
// sub_00427640: cdecl helper, two stack args (arg0 = this+0x160, obj = address of item slot).
extern void ext_00427640(void* arg0, void* obj);
// sub_004275E0 (assignVirtualString): cdecl, (dst, obj).
extern void ext_004275E0(void* dst, void* obj);
// sub_0063F530: thiscall on container (ecx) with three stack args (value, 0, 1); returns item or sentinel.
extern void* ext_0063F530(void* container, void* value, uint32_t zero, uint32_t one);
// AssignStringAndSetFlag: thiscall on target (ecx), one stack arg (const std::string&).
extern void ext_005B18E0(void* self, void* src);
// Unknown::ctor_005B3500: thiscall on freshly allocated object, returns this.
extern void* ext_005B3500(void* self);
// sub_005B5E50: thiscall on target (ecx), one stack arg.
extern void ext_005B5E50(void* self, void* arg);
// thunk_MFC80_ord_762 (operator new): cdecl, one stack arg (size).
extern void* ext_006A5C62(size_t size);

extern uintptr_t mem_00A9EF58;
extern uintptr_t mem_00A9F570;
extern uintptr_t mem_00A9F724;
extern uintptr_t mem_00A9F7B8;
extern uintptr_t mem_00924FE4;
extern uintptr_t mem_00924FF4;

namespace {
// Sentinel "not found" results returned by the item-lookup helpers.
bool is_missing_sentinel(const void* p) {
    const auto v = reinterpret_cast<uintptr_t>(p);
    return v == 0x00B53A34u || v == 0x00B53B30u || v == 0x00B53AB0u ||
           v == 0x00B53A70u || v == 0x00B53AF0u;
}
} // namespace

// @name NMData::FluidObjectData::vfunc_21
// @class NMData::FluidObjectData
// @summary Looks up two named items (via sub_0063EFE0 / sub_0063F530) and copies the first's string into this+0x17C; if the third lookup finds an item, replaces the owned object at this+0x15C with a freshly constructed one and hands it the string and the final lookup result.
// @field NMData::FluidObjectData +0x158 void* field_0x158
// @field NMData::FluidObjectData +0x15C void* field_0x15c
// @field NMData::FluidObjectData +0x160 uint8_t field_0x160
// @field NMData::FluidObjectData +0x17C std::string field_0x17c
void __thiscall fn_005C4520(void* self, void* arg) {
    auto* base = static_cast<uint8_t*>(self);

    ext_0058F630(self, arg);

    void* item1 = ext_0063EFE0(arg, reinterpret_cast<const char*>(mem_00A9F724));
    ext_00427640(base + 0x160, &item1);

    void* item2 = ext_0063EFE0(arg, reinterpret_cast<const char*>(mem_00A9F7B8));
    ext_004275E0(base + 0x17C, item2);

    void* found = ext_0063F530(arg, reinterpret_cast<void*>(mem_00A9EF58), 0, 1);
    if (is_missing_sentinel(found)) {
        return;
    }

    void* created = nullptr;
    if (void* raw = ext_006A5C62(0x4C)) {
        created = ext_005B3500(raw);
    }

    void* old = lift_field<void*>(self, 0x15C);
    if (created != old && old != nullptr) {
        void** vtbl = *reinterpret_cast<void***>(old);
        using ScalarDeleteFn = void(__thiscall*)(void*, uint32_t);
        reinterpret_cast<ScalarDeleteFn>(vtbl[0])(old, 1);
    }

    lift_field<void*>(self, 0x15C) = created;
    lift_field<void*>(created, 0x48) = (self != nullptr) ? static_cast<void*>(base + 0x158) : nullptr;

    // Build a temporary std::string from the literal at mem_00A9F570 (MSVC std::string is 28 bytes).
    uint32_t name_buf[7]{};
    auto str_ctor = reinterpret_cast<void(__thiscall*)(void*, const char*)>(mem_00924FE4);
    str_ctor(name_buf, reinterpret_cast<const char*>(mem_00A9F570));

    ext_005B18E0(lift_field<void*>(self, 0x15C), name_buf);

    auto str_dtor = reinterpret_cast<void(__thiscall*)(void*)>(mem_00924FF4);
    str_dtor(name_buf);

    void* found2 = ext_0063F530(arg, reinterpret_cast<void*>(mem_00A9EF58), 0, 1);
    void* final_arg = is_missing_sentinel(found2)
                          ? reinterpret_cast<void*>(static_cast<uintptr_t>(0x00B53B30u))
                          : found2;
    ext_005B5E50(lift_field<void*>(self, 0x15C), final_arg);
}
} // namespace lift_005C4520
