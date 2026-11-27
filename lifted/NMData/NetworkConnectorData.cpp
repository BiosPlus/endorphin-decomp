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
