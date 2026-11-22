// Lifted C++ translation unit: lifted/NMData/AnimationEventData.cpp
#include "lift_compat.h"
extern "C" int32_t ext_00594000();
extern "C" void __thiscall ext_00599F10(int32_t self);
extern "C" void __thiscall ext_0047D7C0(void* self, void* arg);
extern "C" void* mem_00AE29D0;

extern "C" void* mem_00AE29D0;
// @name NMData::AnimationEventData::vfunc_63
// @class NMData::AnimationEventData
// @summary If field +0x168 is non-zero, fetch the global int32 via ext_00594000 and pass it to ext_00599F10 as this.
// @field NMData::AnimationEventData +0x168 int32_t field_0x168
extern "C" void __thiscall fn_004BFBE0(void* self) {
    // Original pushes the field value before calling ext_00594000, but that callee takes no args
    // and the function does a bare ret, so the push is not modeled here.
    int32_t v = lift_field<int32_t>(self, 0x168);
    if (v != 0) {
        int32_t r = ext_00594000();
        ext_00599F10(r);
    }
}
#include <string>
extern "C" void __thiscall ext_004C0340(void* self);

extern "C" void __thiscall ext_004C0340(void* self);
// @name NMData::AnimationEventData::vfunc_61
// @class NMData::AnimationEventData
// @summary Calls this->vtable[15](a, 0x24A, 0) (result discarded) and returns a.
// @field NMData::AnimationEventData +0x00 void** vptr
extern "C" void* __thiscall fn_004D3CB0(void* self, void* a) {
    using VFn = void(__thiscall*)(void* self, void* a, uint32_t id, uint32_t zero);
    void** vt = *reinterpret_cast<void***>(self);
    // Third stack slot in the original frame is an artifact of the push layout; modeled as 0.
    reinterpret_cast<VFn>(vt[15])(self, a, 0x24A, 0);
    return a;
}
extern "C" void* __thiscall ext_006404E0(void* self, void* arg);
extern "C" void* mem_00A9ED30;

extern "C" void* mem_00A9ED30;
// @name NMData::AnimationEventData::vfunc_60
// @class NMData::AnimationEventData
// @summary Calls this->vtable[15](a, 0x334, 0) (result discarded) and returns a.
// @field NMData::AnimationEventData +0x00 void** vptr
extern "C" void* __thiscall fn_004DE1B0(void* self, void* a) {
    using VFn = void(__thiscall*)(void* self, void* a, uint32_t id, uint32_t zero);
    void** vt = *reinterpret_cast<void***>(self);
    // Third stack slot in the original frame is an artifact of the push layout; modeled as 0.
    reinterpret_cast<VFn>(vt[15])(self, a, 0x334, 0);
    return a;
}

// [0x004BFC20] NMData::AnimationEventData::vfunc_13_off_C (20 bytes)
// @name NMData::AnimationEventData::vfunc_13_off_C
// @class NMData::AnimationEventData
// @summary Secondary-base thunk: adjusts this by -0xC, calls ext_0047D7C0 on the global object at mem_00AE29D0, returns true.
extern "C" bool __thiscall fn_004BFC20(void* self, const void* unused) {
    (void)unused;
    void* adjusted = static_cast<char*>(self) - 0xC;
    ext_0047D7C0(mem_00AE29D0, adjusted);
    return true;
}

// [0x004C1A80] NMData::AnimationEventData::vfunc_23 (28 bytes)
// @name NMData::AnimationEventData::vfunc_23
// @class NMData::AnimationEventData
// @summary Assigns the std::string argument into the member at +0x14, then calls ext_004C0340(this).
// @field NMData::AnimationEventData +0x14 std::string field_0x14
extern "C" void __thiscall fn_004C1A80(void* self, const std::string* src) {
    lift_field<std::string>(self, 0x14) = *src;
    ext_004C0340(self);
}

// [0x004DDED0] NMData::AnimationEventData::vfunc_59 (34 bytes)
// @name NMData::AnimationEventData::vfunc_59
// @class NMData::AnimationEventData
// @summary Computes r = ext_006404E0(a, global at mem_00A9ED30), then calls this->vtable[22](r).
// @field NMData::AnimationEventData +0x00 void** vptr
extern "C" void __thiscall fn_004DDED0(void* self, void* a) {
    using VFn = void(__thiscall*)(void* self, void* arg);
    void* g = mem_00A9ED30;
    void* r = ext_006404E0(a, g);
    void** vt = *reinterpret_cast<void***>(self);
    reinterpret_cast<VFn>(vt[22])(self, r);
}
