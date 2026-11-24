// Lifted C++ translation unit: lifted/NMData/RigEventData.cpp
#include "lift_compat.h"
#include <string>
extern "C" void* __thiscall ext_006404E0(void* self, void* arg);
extern "C" void* mem_00A9F218;
#include <cstring>
extern "C" void ext_00661650(void* self);
extern "C" void ext_004C2070(void* self, void* arg1, uint32_t arg2);

extern "C" void ext_00661650(void* self);
extern "C" void ext_004C2070(void* self, void* arg1, uint32_t arg2);
// @class NMData::RigEventData
// @summary Auto-lifted identical-shape clone of 0x004DDED0 (NMData::AnimationEventData::vfunc_59).
// @field NMData::RigEventData +0x0 void** vptr
extern "C" void __thiscall fn_004D3D00(void* self, void* a) {
    using VFn = void(__thiscall*)(void* self, void* arg);
    void* g = mem_00A9F218;
    void* r = ext_006404E0(a, g);
    void** vt = *reinterpret_cast<void***>(self);
    reinterpret_cast<VFn>(vt[22])(self, r);
}
#include <new>
extern "C" void* ext_006A5C62(size_t size);
extern "C" void* ext_004DC710(void* self, void* owner);

extern "C" void* ext_006A5C62(size_t size);
extern "C" void* ext_004DC710(void* self, void* owner);
// @class NMData::RigEventData
// @summary Auto-lifted identical-shape clone of 0x0058F6B0 (NMData::AxisDefineSensorData::vfunc_14).
void* fn_004D3C20(void* self, void* arg1, uint32_t arg2) {
    if (arg2 == 0x14B) {
        ext_00661650(arg1);
    } else {
        ext_004C2070(self, arg1, arg2);
    }
    return arg1;
}

// [0x004DCB20] NMData::RigEventData::vfunc_17_off_C (99 bytes)
// @name NMData::RigEventData::vfunc_17_off_C
// @class NMData::RigEventData
// @summary Auto-lifted identical-shape clone of 0x004CFC30 (NMData::IncarnationEventData::vfunc_17_off_C).
void* fn_004DCB20(void* self) {
    void* mem = ext_006A5C62(0x464);
    if (mem == nullptr) {
        return nullptr;
    }
    void* owner = static_cast<unsigned char*>(self) - 0xC;
    return ext_004DC710(mem, owner);
}

// [0x004D3C60]
namespace lift_004D3C60 {
// @name NMData::RigEventData::vfunc_13
// @class NMData::RigEventData
// @summary Returns property/value at +0x398 if name matches 0x948360, otherwise initializes default out_result
// @field NMData::RigEventData +0x398 uint8_t field_0x398


extern uint32_t mem_00924FC0;
extern void __thiscall ext_00661650(void* self, const void* src);
extern void __cdecl ext_0046F7D0(void* out_result);

void* __thiscall fn_004D3C60(void* self, void* out_result, const void* name) {
    using StdStringEqCStrFn = uint8_t(__cdecl*)(const void*, const char*);
    auto str_eq = reinterpret_cast<StdStringEqCStrFn>(static_cast<uintptr_t>(mem_00924FC0));

    if (str_eq(name, reinterpret_cast<const char*>(0x00948360)) != 0) {
        ext_00661650(out_result, static_cast<const uint8_t*>(self) + 0x398);
        return out_result;
    }

    ext_0046F7D0(out_result);
    return out_result;
}
} // namespace lift_004D3C60

// [0x004D4730]
namespace lift_004D4730 {
// @name NMData::RigEventData::vfunc_1_off_184
// @class NMData::RigEventData
// @summary Checks whether the string returned by sub_004D40E0 differs from the global string at 0x00A34650.


extern void* __thiscall ext_004D40E0(void* self, void* out_str);

extern uint32_t mem_00A34650;
extern uint32_t mem_00924FC8;
extern uint32_t mem_00924FF4;

uint8_t __thiscall fn_004D4730(void* self) {
    uint8_t str_buf[28];
    void* rig_event = reinterpret_cast<uint8_t*>(self) - 0x184;
    void* str_ptr = ext_004D40E0(rig_event, str_buf);

    using op_neq_fn = uint8_t(__cdecl*)(void*, uint32_t);
    auto op_neq = reinterpret_cast<op_neq_fn>(static_cast<uintptr_t>(mem_00924FC8));
    uint8_t result = op_neq(str_ptr, mem_00A34650);

    using dtor_fn = void(__thiscall*)(void*);
    auto dtor = reinterpret_cast<dtor_fn>(static_cast<uintptr_t>(mem_00924FF4));
    dtor(str_buf);

    return result;
}
} // namespace lift_004D4730

// [0x004D3D50] NMData::RigEventData::vfunc_0_off_154 (121 bytes)
namespace lift_004D3D50 {
// Known callee 0x00494000: sub_00494000 (setDwordTriple: stores three args into the first three DWORDs of the object and returns it.)
extern void* ext_00494000(void* self, uint32_t arg1, uint32_t arg2, uint32_t arg3);
// Known callee 0x004940E0: sub_004940E0 (Unknown::ToggleMaskIfTestMismatch: XORs mask into the dword at [this] when the bit test differs from flag.)
extern void ext_004940E0(void* self, uint32_t mask, uint8_t flag);

// @name NMData::RigEventData::vfunc_0_off_154
// @class NMData::RigEventData
// @summary Builds a 3-dword record via setDwordTriple, applies two mask toggles to arg1, copies it to arg2, and stores 6 into arg3 and arg4.
void fn_004D3D50(void* self, uint32_t* a1, uint32_t* a2, uint32_t* a3, uint32_t* a4) {
    (void)self; // ECX is overwritten before use in the original.

    uint32_t tmp[3];
    uint32_t* r = static_cast<uint32_t*>(ext_00494000(tmp, 0, 0, 0x40));

    a1[0] = r[0];
    a1[1] = r[1];
    a1[2] = r[2];

    ext_004940E0(a1, 0x1000, 1);
    ext_004940E0(a1, 0x2000, 1);

    a1[1] = 2;

    a2[0] = a1[0];
    a2[1] = a1[1];
    a2[2] = a1[2];

    *a3 = 6;
    *a4 = 6;
}
} // namespace lift_004D3D50
