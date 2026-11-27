// Lifted C++ translation unit: lifted/NMData/RPROMagnetData.cpp
#include "lift_compat.h"
#include <new>
#include <string>
extern "C" const char* mem_00A9F1E8;

// [0x00584F50] NMData::RPROMagnetData::vfunc_59 (35 bytes)
namespace lift_00584F50 {
extern int mem_00A9F1E8; // .data slot holding a const char* (0x00986694)
extern int mem_00924FE4; // IAT slot: MSVCP80 basic_string(const char*, allocator) ctor

// @name NMData::RPROMagnetData::vfunc_59
// @class NMData::RPROMagnetData
// @summary Constructs a std::string from the literal pointed to by mem_00A9F1E8 into the caller-supplied buffer and returns that buffer.
std::string* fn_00584F50(std::string* out) {
    // Original code called the MSVCP80 ctor through the IAT slot mem_00924FE4;
    // the portable std::string constructor below performs the same operation.
    (void)&mem_00924FE4;
    const char* lit = *reinterpret_cast<const char* const*>(&mem_00A9F1E8);
    ::new (static_cast<void*>(out)) std::string(lit);
    return out;
}
} // namespace lift_00584F50

// [0x005E2470] NMData::RPROMagnetData::vfunc_54 (128 bytes)
namespace lift_005E2470 {
extern void ext_005B5780(void* self, int arg);
extern void ext_005E0380(void* self, void* arg);
extern void ext_006A6C87(const void* fn);
extern int mem_00B45E0C;
extern unsigned char mem_00B45E04;

// @name NMData::RPROMagnetData::vfunc_54
// @class NMData::RPROMagnetData
// @summary One-time guarded init of static object 0x00B45DC0 (registering its cleanup), then forwards self to ext_005E0380 and caches self->field_0x178 into mem_00B45E04.
// @field NMData::RPROMagnetData +0x178 BYTE field_0x178
void fn_005E2470(void* self) {
    if ((mem_00B45E0C & 1) == 0) {
        mem_00B45E0C |= 1;
        ext_005B5780((void*)0x00B45DC0, 12);
        ext_006A6C87((const void*)0x0091E460);
    }
    ext_005E0380(self, (void*)0x00B45DC0);
    mem_00B45E04 = lift_field<uint8_t>(self, 0x178);
}
} // namespace lift_005E2470

// [0x005EC2D0] NMData::RPROMagnetData::vfunc_22 (80 bytes)
namespace lift_005EC2D0 {
// Known callee 0x006404E0: sub_006404E0 (224B, thiscall-style: ecx = arg1, one stack argument, returns object in EAX).
extern void* __fastcall ext_006404E0(void* ecx, uint32_t arg);
// Known callee 0x005EB5A0: NMData::RelationshipData::vfunc_22 (752B, thiscall: this = self, one stack argument).
extern void __thiscall ext_005EB5A0(void* self, void* arg);
// Known callee 0x00640110: sub_00640110 (296B, thiscall-style: ecx = object, one stack argument, returns object in EAX).
extern void* __fastcall ext_00640110(void* ecx, uint32_t arg);
// Known callee 0x00640A80: ResetChildNameFromBool (cdecl: child object, bool flag).
extern void ext_00640A80(void* child, uint8_t flag);
extern int mem_00A9F724;
extern int mem_00A9F1E8;

// @name NMData::RPROMagnetData::vfunc_22
// @class NMData::RPROMagnetData
// @summary Calls sub_006404E0 on the stack argument with a constant from 0x00986694, forwards the result to RelationshipData::vfunc_22; when the flag at +0x178 is clear, resets the child name via sub_00640110 and ResetChildNameFromBool; returns the stack argument.
// @field NMData::RPROMagnetData +0x178 uint8_t field_0x178

// thiscall (ECX = this), one stack argument, callee pops 4 (ret 4); returns the stack argument.
void* __fastcall fn_005EC2D0(void* ecx, void* arg1) {
    auto* self = static_cast<uint8_t*>(ecx);

    uint32_t tag = static_cast<uint32_t>(mem_00A9F1E8);
    void* obj = ext_006404E0(arg1, tag);

    ext_005EB5A0(self, obj);

    if (lift_field<uint8_t>(self, 0x178) == 0) {
        uint32_t value = static_cast<uint32_t>(mem_00A9F724);
        void* child = ext_00640110(obj, value);
        uint8_t flag = lift_field<uint8_t>(self, 0x178);
        ext_00640A80(child, flag);
    }

    return arg1;
}
} // namespace lift_005EC2D0
