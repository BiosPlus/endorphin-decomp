// Lifted C++ translation unit: lifted/NMData/SeverEventData.cpp
#include "lift_compat.h"
#include <string>
extern "C" void* __thiscall ext_006404E0(void* self, void* arg);
extern "C" void* mem_00A9F274;
#include <new>
extern "C" void* ext_006A5C62(size_t size);
extern "C" void* ext_004C7FA0(void* self, void* owner);

extern "C" void* ext_006A5C62(size_t size);
extern "C" void* ext_004C7FA0(void* self, void* owner);
// @class NMData::SeverEventData
// @summary Auto-lifted identical-shape clone of 0x004DDED0 (NMData::AnimationEventData::vfunc_59).
// @field NMData::SeverEventData +0x0 void** vptr
extern "C" void __thiscall fn_004C7190(void* self, void* a) {
    using VFn = void(__thiscall*)(void* self, void* arg);
    void* g = mem_00A9F274;
    void* r = ext_006404E0(a, g);
    void** vt = *reinterpret_cast<void***>(self);
    reinterpret_cast<VFn>(vt[22])(self, r);
}
extern "C" void ext_00437AD0(void* self);
extern "C" void ext_004C7F50(void* self, uint32_t arg1);

extern "C" void ext_004C7F50(void* self, uint32_t arg1);
// @name NMData::SeverEventData::vfunc_84
// @class NMData::SeverEventData
// @summary Stdcall (ret 4, ECX = this): if the sever target at +0x19C is set, the enabled flag at +0x17C is true, and the argument matches the key at +0x15C, calls virtual slot 0 on the target.
// @field NMData::SeverEventData +0x15C uint32_t field_0x15c
// @field NMData::SeverEventData +0x17C uint8_t field_0x17c
// @field NMData::SeverEventData +0x19C void* field_0x19c
void fn_004C7870(void* self, uint32_t key) {
    void* target = lift_field<void*>(self, 0x19C);
    if (target == nullptr) {
        return;
    }
    if (lift_field<uint8_t>(self, 0x17C) == 0) {
        return;
    }
    if (key != lift_field<uint32_t>(self, 0x15C)) {
        return;
    }
    void** vtbl = *reinterpret_cast<void***>(target);
    auto slot0 = reinterpret_cast<void (*)(void*)>(vtbl[0]);
    slot0(target);
}

// [0x004C8180] NMData::SeverEventData::vfunc_17_off_C (99 bytes)
// @name NMData::SeverEventData::vfunc_17_off_C
// @class NMData::SeverEventData
// @summary Auto-lifted identical-shape clone of 0x004CFC30 (NMData::IncarnationEventData::vfunc_17_off_C).
void* fn_004C8180(void* self) {
    void* mem = ext_006A5C62(0x1A0);
    if (mem == nullptr) {
        return nullptr;
    }
    void* owner = static_cast<unsigned char*>(self) - 0xC;
    return ext_004C7FA0(mem, owner);
}

// [0x004C8160] NMData::SeverEventData::vfunc_87 (29 bytes)
// @name NMData::SeverEventData::vfunc_87
// @class NMData::SeverEventData
// @summary If the dispatcher slot at +0x19C is non-null, notify it via ext_00437AD0, then call ext_004C7F50 on the slot with argument 0.
// @field NMData::SeverEventData +0x19C void* field_0x19c
void fn_004C8160(void* self) {
    void* dispatcher = lift_field<void*>(self, 0x19C);
    if (dispatcher != nullptr) {
        ext_00437AD0(dispatcher);
    }
    ext_004C7F50(&lift_field<void*>(self, 0x19C), 0);
}
