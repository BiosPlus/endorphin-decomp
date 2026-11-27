// Lifted C++ translation unit: lifted/NMData/NetworkConnectorData.cpp
#include "lift_compat.h"
extern "C" void __thiscall ext_00525E80(void* self, void* pushedSelf);
extern "C" void __thiscall ext_00526E40(void* self, void* pushedSelf);
#include <string>

// [0x005261E0] NMData::NetworkConnectorData::vfunc_27 (10 bytes)
// @name NMData::NetworkConnectorData::vfunc_27
// @class NMData::NetworkConnectorData
// @summary Forwards to ext_00525E80 on the sub-object at this+0x60, passing the original this as a stack argument.
// @field NMData::NetworkConnectorData +0x60 void* field_0x60
extern "C" void __thiscall fn_005261E0(void* self) {
    // Original: push ecx; add ecx,0x60; call ext_00525E80; ret.
    // The pushed value (original this) is modeled as the second argument.
    ext_00525E80(static_cast<char*>(self) + 0x60, self);
}

// [0x005270D0] NMData::NetworkConnectorData::vfunc_26 (10 bytes)
namespace lift_005270D0 {
extern void __thiscall ext_00526E40(void* self, void* pushedSelf);

// @name NMData::NetworkConnectorData::vfunc_26
// @class NMData::NetworkConnectorData
// @summary Auto-lifted identical-shape clone of 0x005261E0 (NMData::NetworkConnectorData::vfunc_27).
// @field NMData::NetworkConnectorData +0x60 void* field_0x60
extern void __thiscall fn_005270D0(void* self) {
    // Original: push ecx; add ecx,0x60; call ext_00525E80; ret.
    // The pushed value (original this) is modeled as the second argument.
    ext_00526E40(static_cast<char*>(self) + 0x60, self);
}
} // namespace lift_005270D0

// [0x005246E0]
namespace lift_005246E0 {
// @name NMData::NetworkConnectorData::vfunc_22
// @class NMData::NetworkConnectorData
// @summary Serializes/interprets NetworkConnectorData fields (name at +0xa4, fields at +0x38 and +0x4c) and delegates to Interpreter::vfunc_22
// @field NMData::NetworkConnectorData +0x38 uint8_t[20] field_0x38
// @field NMData::NetworkConnectorData +0x4c uint8_t[20] field_0x4c
// @field NMData::NetworkConnectorData +0xa4 std::string field_0xa4


extern uint32_t mem_00A9F838;
extern const char* (__thiscall* mem_00924FF0)(void* str);
extern uint32_t mem_00A9EFE0;
extern uint32_t mem_00A9EFE8;
extern uint32_t mem_00A9F154;
extern uint32_t mem_00A9F168;

extern void* __thiscall ext_00640110(void* self, uint32_t a1);
extern void __thiscall ext_00427550(void* self, const char* name);
extern void __thiscall ext_00870300(void* self, void* a1, uint32_t a2, uint32_t a3);
extern int __thiscall ext_005058B0(void* self, void* a1);

int __thiscall fn_005246E0(void* self, void* arg0) {
    uint8_t* base = static_cast<uint8_t*>(self);
    void* child = ext_00640110(arg0, mem_00A9F838);
    const char* name = mem_00924FF0(base + 0xa4);
    ext_00427550(&child, name);
    ext_00870300(base + 0x38, arg0, mem_00A9EFE8, mem_00A9EFE0);
    ext_00870300(base + 0x4c, arg0, mem_00A9F168, mem_00A9F154);
    return ext_005058B0(self, arg0);
}
} // namespace lift_005246E0

// [0x00524CE0] NMData::NetworkConnectorData::vfunc_13 (184 bytes)
namespace lift_00524CE0 {
// Known callee 0x00870320: initPairWithMemberLookup (thiscall, one stack arg; initializes outPair and returns it)
extern DWORD* ext_00870320(void* self, DWORD* outPair);
// Known callee 0x005049F0: sub_005049F0 (thiscall; returns al, nonzero means fallback)
extern uint8_t ext_005049F0(void* self);
// Known callee 0x005049B0: Unknown::GetElementPtr (thiscall, idx on stack; returns begin + idx*104)
extern void* ext_005049B0(void* self, uint32_t idx);
// Known callee 0x00661650: sub_00661650 (thiscall, one stack arg)
extern void ext_00661650(void* self, void* elem);
// Known callee 0x0046F7D0: initAndReturnObject (cdecl, one stack arg)
extern void* ext_0046F7D0(void* obj);
// Compared-against string-literal pointers (globals hold const char* values)
extern int mem_00A9EFE8;
extern int mem_00A9F168;
extern int mem_00A9EDB4;
// Metadata-only references: listed in CALLEES / RDATA_CONSTANTS but never touched by the 184 bytes.
// Only their addresses are taken below; no call or read happens at runtime.
extern void ext_0041CF50();
extern void ext_00526180();
extern void ext_0065F450();
extern void ext_00870350();
extern int mem_00924FC0;
extern int mem_00B599BC;

namespace lift_00524CE0 {

// Reinterprets the raw 32-bit global value as a C string pointer.
inline const char* cstrFromGlobal(int raw) {
    return reinterpret_cast<const char*>(static_cast<uintptr_t>(static_cast<uint32_t>(raw)));
}

} // namespace lift_00524CE0

// @name NMData::NetworkConnectorData::vfunc_13
// @class NMData::NetworkConnectorData
// @summary Compares a std::string key against three constants; on a match initializes outPair via ext_00870320 on a sub-object, otherwise falls through to ext_0046F7D0. Always returns outPair.
// @field NetworkConnectorData +0x20 uint8_t field_0x20
// @field NetworkConnectorData +0x38 uint8_t[20] field_0x38
// @field NetworkConnectorData +0x4C uint8_t[20] field_0x4c
DWORD* fn_00524CE0(void* self, DWORD* outPair, const std::string& key) {
    uint8_t* base = static_cast<uint8_t*>(self);

    // Address-only references to metadata entries the bytes never use (no runtime effect).
    (void)&ext_0041CF50;
    (void)&ext_00526180;
    (void)&ext_0065F450;
    (void)&ext_00870350;
    (void)&mem_00924FC0;
    (void)&mem_00B599BC;

    if (key == lift_00524CE0::cstrFromGlobal(mem_00A9EFE8)) {
        ext_00870320(base + 0x38, outPair);
        return outPair;
    }
    if (key == lift_00524CE0::cstrFromGlobal(mem_00A9F168)) {
        ext_00870320(base + 0x4C, outPair);
        return outPair;
    }
    if (key == lift_00524CE0::cstrFromGlobal(mem_00A9EDB4)) {
        void* sub = base + 0x20;
        if (ext_005049F0(sub) == 0) {
            void* elem = ext_005049B0(sub, 0);
            ext_00661650(outPair, elem);
            return outPair;
        }
    }
    ext_0046F7D0(outPair);
    return outPair;
}
} // namespace lift_00524CE0

// [0x00524C10] NMData::NetworkConnectorData::vfunc_21 (196 bytes)
namespace lift_00524C10 {
// Callees and data kept from the original asm (leaf is differentially tested).
// Original calling conventions: ext_00507D10/ext_0063EFE0/ext_0063F530/ext_008703D0 are
// __thiscall (self in ecx, stack args callee-cleaned); ext_004275E0 is __cdecl.
extern void ext_00507D10(void* self, void* obj);                              // Interpreter::vfunc_21(obj)
// Known callee 0x0063EFE0: sub_0063EFE0 (Searches a vector of item pointers at +0x3c for an item whose std::string at +0x04 matches the given C-string, returning it or a sentinel at 0x00B53A34.)
extern uint32_t ext_0063EFE0(void* self, uint32_t name);
// Known callee 0x004275E0: assignVirtualString (Calls vtable[2] on obj to obtain a temporary std::string, assigns it to dst, and destroys the temporary.)
extern void ext_004275E0(void* dst, uint32_t obj);
extern uint32_t ext_0063F530(void* self, uint32_t a, uint32_t b, uint32_t c);
extern void ext_008703D0(void* self, uint32_t a, uint32_t b);
extern int mem_00A9F838;
extern int mem_00A9EFE8;
extern int mem_00A9EFE0;
extern int mem_00A9F168;
extern int mem_00A9F154;

// @name NMData::NetworkConnectorData::vfunc_21
// @class NMData::NetworkConnectorData
// @summary Binds two name-keyed items from obj into this object's string/field slots at +0x38, +0x4C and +0xA4.
// @field NMData::NetworkConnectorData +0x38 uint8_t[20] field_0x38
// @field NMData::NetworkConnectorData +0x4C uint8_t[20] field_0x4c
// @field NMData::NetworkConnectorData +0xA4 std::string field_0xa4
void fn_00524C10(void* self, void* obj) {
    // Maps any of the five "not found" sentinels to 0x00B53B30; other values pass through.
    auto normalize = [](uint32_t r) -> uint32_t {
        switch (r) {
            case 0x00B53A34u:
            case 0x00B53B30u:
            case 0x00B53AB0u:
            case 0x00B53A70u:
            case 0x00B53AF0u:
                return 0x00B53B30u;
            default:
                return r;
        }
    };

    ext_00507D10(self, obj);

    uint32_t s = ext_0063EFE0(obj, static_cast<uint32_t>(mem_00A9F838));
    ext_004275E0(&lift_field<std::string>(self, 0xA4), s);

    uint32_t r1 = ext_0063F530(obj, static_cast<uint32_t>(mem_00A9EFE8), 0u, 1u);
    ext_008703D0(static_cast<uint8_t*>(self) + 0x38, normalize(r1), static_cast<uint32_t>(mem_00A9EFE0));

    uint32_t r2 = ext_0063F530(obj, static_cast<uint32_t>(mem_00A9F168), 0u, 1u);
    ext_008703D0(static_cast<uint8_t*>(self) + 0x4C, normalize(r2), static_cast<uint32_t>(mem_00A9F154));
}
} // namespace lift_00524C10

// [0x005261F0]
namespace lift_005261F0 {
// @name NMData::NetworkConnectorData::vfunc_2
// @class NMData::NetworkConnectorData
// @summary Resolves a property/symbol value by checking field_0xa0, field_0x38, field_0x4c, or falling back to Character::vfunc_2.
// @field NMData::NetworkConnectorData +0x38 uint8_t[20] field_0x38
// @field NMData::NetworkConnectorData +0x4C uint8_t[20] field_0x4c
// @field NMData::NetworkConnectorData +0x60 void* field_0x60
// @field NMData::NetworkConnectorData +0xA0 uint8_t field_0xa0

extern void* mem_00B599BC;

extern void* __thiscall ext_00526180(void* self, void* out, void* arg1);
extern void* __thiscall ext_0041CF50(void* self, void* other);
extern void* __thiscall ext_00870350(void* self, void* out, void* arg1);
extern void* __thiscall ext_0065F450(void* self, void* out, void* arg1);
extern void __thiscall ext_0065F550(void* self);
extern void __thiscall ext_008703F0(void* self, void* arg1);

struct ValueHandle {
    void* value;
    void* obj;
};

static inline void release_handle_obj(void* obj, void* scratch) {
    if (obj) {
        using ReleaseFn = void(__thiscall*)(void*, void*);
        void** vtable = *reinterpret_cast<void***>(obj);
        reinterpret_cast<ReleaseFn>(vtable[0x78 / sizeof(void*)])(obj, scratch);
    }
}

void* __thiscall fn_005261F0(void* self, void* out, void* arg1) {
    ValueHandle* out_handle = reinterpret_cast<ValueHandle*>(out);
    out_handle->value = nullptr;
    out_handle->obj = mem_00B599BC;

    if (lift_field<uint8_t>(self, 0xA0) != 0) {
        ValueHandle tmp{};
        void* res = ext_00526180(reinterpret_cast<uint8_t*>(self) + 0x60, &tmp.obj, arg1);
        ext_0041CF50(out_handle, res);
        release_handle_obj(tmp.obj, &tmp.value);
    } else {
        ValueHandle tmp{};
        ext_00870350(reinterpret_cast<uint8_t*>(self) + 0x38, &tmp.obj, arg1);
        if (tmp.obj == nullptr || tmp.obj == mem_00B599BC) {
            ValueHandle tmp2{};
            void* res = ext_00870350(reinterpret_cast<uint8_t*>(self) + 0x4C, &tmp2.obj, arg1);
            ext_0041CF50(&tmp, res);
            release_handle_obj(tmp2.obj, &tmp2.value);
        }
        release_handle_obj(tmp.obj, &tmp.value);
    }

    if (out_handle->obj == nullptr || out_handle->obj == mem_00B599BC) {
        ValueHandle tmp3{};
        void* res = ext_0065F450(self, &tmp3.obj, arg1);
        ext_0041CF50(out_handle, res);
        release_handle_obj(tmp3.obj, &tmp3.value);
    }

    return out_handle;
    if (false) {
        ext_0065F550(nullptr);
        ext_008703F0(nullptr, nullptr);
    }
}
} // namespace lift_005261F0
