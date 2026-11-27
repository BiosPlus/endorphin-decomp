// Lifted C++ translation unit: lifted/NMData/RigNode.cpp
#include "lift_compat.h"
#include <string>
#include <new>
extern "C" void* ext_006A5C62(size_t size);
extern "C" void* ext_005ABA70(void* self, void* owner);

// [0x005ABB70] NMData::RigNode::vfunc_17_off_C (99 bytes)
// @name NMData::RigNode::vfunc_17_off_C
// @class NMData::RigNode
// @summary Auto-lifted identical-shape clone of 0x004CFC30 (NMData::IncarnationEventData::vfunc_17_off_C).
void* fn_005ABB70(void* self) {
    void* mem = ext_006A5C62(0x194);
    if (mem == nullptr) {
        return nullptr;
    }
    void* owner = static_cast<unsigned char*>(self) - 0xC;
    return ext_005ABA70(mem, owner);
}

// [0x005AA900] NMData::RigNode::vfunc_14 (210 bytes)
namespace lift_005AA900 {
// Known callee 0x0058F6B0: NMData::AxisDefineSensorData::vfunc_14 (Returns arg1; if arg2 == 0x199 calls sub_00661650 on arg1, otherwise calls AnimatableTransform::vfunc_13 on self with (arg1, arg2).)
extern void* __thiscall ext_0058F6B0(void* self, void* arg1, uint32_t arg2);
// sub_00661680 (38B): thiscall on obj with (count, pointer) args.
extern void __thiscall ext_00661680(void* self, uint32_t count, void* p);
// Known callee 0x0046F7D0: initAndReturnObject (Initializes an object via ext_00661620 and returns it.)
extern void* ext_0046F7D0(void* obj);

// @name NMData::RigNode::vfunc_14
// @class NMData::RigNode
// @summary Dispatches on arg2: 0x134/0x0D gated by a virtual check on the sub-object at +0x190 and mode at +0x154 to ext_00661680; other values forward to ext_0058F6B0; the fallback initializes arg1 via ext_0046F7D0. Always returns arg1.
// @field NMData::RigNode +0x154 uint32_t field_0x154
// @field NMData::RigNode +0x158 uint8_t field_0x158
// @field NMData::RigNode +0x164 uint8_t field_0x164
// @field NMData::RigNode +0x190 void* field_0x190
void* fn_005AA900(void* self, void* arg1, uint32_t arg2) {
    if (arg2 != 0x0D && arg2 != 0x134) {
        ext_0058F6B0(self, arg1, arg2);
        return arg1;
    }

    // Gate: sub-object at +0x190 must exist and its vtable[1] must return true.
    bool ok = false;
    void* gate = lift_field<void*>(self, 0x190);
    if (gate != nullptr) {
        using GateFn = uint8_t (__thiscall*)(void*);
        void** vtbl = *reinterpret_cast<void***>(gate);
        ok = reinterpret_cast<GateFn>(vtbl[1])(gate) != 0;
    }

    if (ok) {
        uint32_t mode = lift_field<uint32_t>(self, 0x154);
        if (arg2 == 0x134) {
            if (mode == 1 || mode == 3) {
                ext_00661680(arg1, 3, reinterpret_cast<uint8_t*>(self) + 0x158);
                return arg1;
            }
        } else { // arg2 == 0x0D
            if (mode == 2 || mode == 3) {
                ext_00661680(arg1, 3, reinterpret_cast<uint8_t*>(self) + 0x164);
                return arg1;
            }
        }
    }

    ext_0046F7D0(arg1);
    return arg1;
}
} // namespace lift_005AA900
