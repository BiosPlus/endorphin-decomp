// Lifted C++ translation unit: lifted/NMData/DesiredPoseEventData.cpp
#include "lift_compat.h"
#include <string>
extern "C" void* __thiscall ext_006404E0(void* self, void* arg);
extern "C" void* mem_00A9EE2C;
extern "C" void ext_004C2070(void* self, void* arg1, uint32_t arg2);
extern "C" void ext_00661650(void* self, void* arg);

extern "C" void ext_00661650(void* self, void* arg);
// @name NMData::DesiredPoseEventData::vfunc_59
// @class NMData::DesiredPoseEventData
// @summary Auto-lifted identical-shape clone of 0x004DDED0 (NMData::AnimationEventData::vfunc_59).
// @field NMData::DesiredPoseEventData +0x0 void** vptr
extern "C" void __thiscall fn_004869A0(void* self, void* a) {
    using VFn = void(__thiscall*)(void* self, void* arg);
    void* g = mem_00A9EE2C;
    void* r = ext_006404E0(a, g);
    void** vt = *reinterpret_cast<void***>(self);
    reinterpret_cast<VFn>(vt[22])(self, r);
}
#include <new>
extern "C" void* ext_006A5C62(size_t size);
extern "C" void* ext_0048DB80(void* self, void* owner);

extern "C" void* ext_006A5C62(size_t size);
extern "C" void* ext_0048DB80(void* self, void* owner);
// @class NMData::DesiredPoseEventData
// @summary Auto-lifted identical-shape clone of 0x0061FF40 (NMData::GraphicData::vfunc_14).
// @field NMData::DesiredPoseEventData +0x224 uint8_t field_0x154 (address of subobject only; not read or written field_0x224
void* fn_00486C40(void* self, void* arg1, uint32_t arg2) {
    if (arg2 == 0x130) {
        void* sub = static_cast<uint8_t*>(self) + 0x224;
        ext_00661650(arg1, sub);
    } else {
        ext_004C2070(self, arg1, arg2);
    }
    return arg1;
}

// [0x0048DE30] NMData::DesiredPoseEventData::vfunc_87 (58 bytes)
namespace lift_0048DE30 {
// @name NMData::DesiredPoseEventData::vfunc_87
// @class NMData::DesiredPoseEventData
// @summary Auto-lifted identical-shape clone of 0x004CD090 (NMData::MetaBodyConstraintData::vfunc_87).
// @field NMData::DesiredPoseEventData +0x234 void* field_0x234
namespace lift_004CD090 {
// @name NMData::MetaBodyConstraintData::vfunc_87
// @class NMData::MetaBodyConstraintData
// @summary Cleans up, destroys, and clears the subobject at +0x180 if non-null.
// @field NMData::MetaBodyConstraintData +0x180 void* field_0x180


extern void __thiscall ext_0048D350(void* self);
extern void __thiscall ext_0048D390(void* self);
extern void __cdecl ext_006A5C5C(void* ptr);

extern void __thiscall fn_0048DE30(void* self) {
    void* obj = lift_field<void*>(self, 0x234);
    if (obj != nullptr) {
        ext_0048D350(obj);
        void* obj2 = lift_field<void*>(self, 0x234);
        if (obj2 != nullptr) {
            ext_0048D390(obj2);
            ext_006A5C5C(obj2);
        }
        lift_field<void*>(self, 0x234) = nullptr;
    }
}
} // namespace lift_004CD090
} // namespace lift_0048DE30

// [0x00486A70] NMData::DesiredPoseEventData::vfunc_74 (35 bytes)
namespace lift_00486A70 {
// Callee 0x005A3DF0 (thiscall: ecx = object at +0x168; stack args: subobject at +0x19c, then global value).
extern void ext_005A3DF0(void* self, void* subobject, int value);
// Known callee 0x004C0340: SetGlobalObjectFlag4IfPresent (If the global object pointer mem_00AE29D0 is non-null, set the byte at its +0x04 offset to 1.)
extern void ext_004C0340(void* self);
extern int mem_00B40640;

// @name NMData::DesiredPoseEventData::vfunc_74
// @class NMData::DesiredPoseEventData
// @summary Forwards the global mem_00B40640 and the +0x19c subobject to the object at +0x168, then calls SetGlobalObjectFlag4IfPresent.
// @field NMData::DesiredPoseEventData +0x168 void* field_0x168
// @field NMData::DesiredPoseEventData +0x19c uint8_t field_0x19c (address only, not read or written)
void fn_00486A70(void* self) {
    void* target = lift_field<void*>(self, 0x168);
    uint8_t* subobject = static_cast<uint8_t*>(self) + 0x19c;

    ext_005A3DF0(target, subobject, mem_00B40640);
    ext_004C0340(self);
}
} // namespace lift_00486A70
