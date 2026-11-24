// Lifted C++ translation unit: lifted/NMData/TransitionEventData.cpp
#include "lift_compat.h"
#include <string>
extern "C" void* __thiscall ext_006404E0(void* self, void* arg);
extern "C" void* mem_00A9F358;
#include <new>
extern "C" void* ext_006A5C62(size_t size);
extern "C" void* ext_004D2F60(void* self, void* owner);

extern "C" void* ext_006A5C62(size_t size);
extern "C" void* ext_004D2F60(void* self, void* owner);
// @class NMData::TransitionEventData
// @summary Auto-lifted identical-shape clone of 0x004DDED0 (NMData::AnimationEventData::vfunc_59).
// @field NMData::TransitionEventData +0x0 void** vptr
extern "C" void __thiscall fn_004D0B80(void* self, void* a) {
    using VFn = void(__thiscall*)(void* self, void* arg);
    void* g = mem_00A9F358;
    void* r = ext_006404E0(a, g);
    void** vt = *reinterpret_cast<void***>(self);
    reinterpret_cast<VFn>(vt[22])(self, r);
}

// [0x004D3070] NMData::TransitionEventData::vfunc_17_off_C (99 bytes)
// @name NMData::TransitionEventData::vfunc_17_off_C
// @class NMData::TransitionEventData
// @summary Auto-lifted identical-shape clone of 0x004CFC30 (NMData::IncarnationEventData::vfunc_17_off_C).
void* fn_004D3070(void* self) {
    void* mem = ext_006A5C62(0x32C);
    if (mem == nullptr) {
        return nullptr;
    }
    void* owner = static_cast<unsigned char*>(self) - 0xC;
    return ext_004D2F60(mem, owner);
}

// [0x004D0C80]
namespace lift_004D0C80 {
// @name NMData::TransitionEventData::vfunc_14
// @class NMData::TransitionEventData
// @summary Returns property value for ID 0x40 from field_0x198 if field_0x168->vfunc_10() is false, otherwise delegates to base vfunc_14.
// @field NMData::TransitionEventData +0x168 void* field_0x168
// @field NMData::TransitionEventData +0x198 uint8_t field_0x198


extern void __thiscall ext_00661650(void* dst, const void* src);
extern void* __thiscall ext_004C2070(void* self, void* out, uint32_t id);

void* __thiscall fn_004D0C80(void* self, void* out, uint32_t id) {
    if (id == 0x40) {
        void* obj = *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(self) + 0x168);
        void** vtable = *reinterpret_cast<void***>(obj);
        auto vfunc = reinterpret_cast<uint8_t(__thiscall*)(void*)>(vtable[0x28 / 4]);
        if (vfunc(obj) == 0) {
            ext_00661650(out, reinterpret_cast<uint8_t*>(self) + 0x198);
            return out;
        }
    }
    ext_004C2070(self, out, id);
    return out;
}
} // namespace lift_004D0C80

// [0x004D0CF0] NMData::TransitionEventData::vfunc_81 (67 bytes)
namespace lift_004D0CF0 {
// Known callee 0x00594000: sub_00594000 (Returns global int32 value from mem_00B40D08.)
extern int32_t ext_00594000();
// Known callee 0x00594640: sub_00594640 (Member forwarding thunk: loads subobject pointer at +0x26C and tail-calls sub_0047A580.)
extern void* ext_00594640(void* self);
// Known callee 0x005AA830: ObjectWithChild::setValueAndNotifyChild (Stores a 32-bit value at +0x154, then calls vtable slot 0 on the object at +0x190 if it is non-null.)
extern void ext_005AA830(uint8_t* self, int32_t value);
// Known callee 0x004C0340: SetGlobalObjectFlag4IfPresent (If the global object pointer mem_00AE29D0 is non-null, set the byte at its +0x04 offset to 1.)
extern void ext_004C0340();

// @name NMData::TransitionEventData::vfunc_81
// @class NMData::TransitionEventData
// @summary Caches the global-derived object at +0x168; if it is non-null and its vtable slot 10 returns true, notifies the child at +0x198 with value 0; then runs the global flag helper.
// @field NMData::TransitionEventData +0x168 void* field_0x168
// @field NMData::TransitionEventData +0x198 uint8_t field_0x198
void fn_004D0CF0(void* self, int32_t arg) {
    (void)arg;  // pushed by the caller but not read by any callee

    uint8_t* const s = static_cast<uint8_t*>(self);
    void* const obj = ext_00594640(reinterpret_cast<void*>(static_cast<uintptr_t>(ext_00594000())));
    lift_field<void*>(s, 0x168) = obj;

    if (obj != nullptr) {
        void** const vtable = *reinterpret_cast<void***>(obj);
        // Vtable byte offset 0x28 on a 32-bit target is slot index 10.
        auto const slot10 = reinterpret_cast<uint8_t (*)(void*)>(vtable[10]);
        if (slot10(obj) != 0) {
            ext_005AA830(s + 0x198, 0);
        }
    }

    ext_004C0340();
}
} // namespace lift_004D0CF0
