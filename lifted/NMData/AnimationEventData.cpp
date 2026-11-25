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
// Known callee 0x00594000: sub_00594000 (Returns global int32 value from mem_00B40D08.)
// Known callee 0x00594640: sub_00594640 (Member forwarding thunk: loads subobject pointer at +0x26C and tail-calls sub_0047A580.)
extern "C" int32_t __fastcall ext_00594640(void* self);
// Known callee 0x004C0340: sub_004C0340 (14B)

// Known callee 0x00594640: sub_00594640 (Member forwarding thunk: loads subobject pointer at +0x26C and tail-calls sub_0047A580.)
extern "C" int32_t __fastcall ext_00594640(void* self);
// Known callee 0x004C0340: sub_004C0340 (14B)
// @summary Secondary-base thunk: adjusts this by -0xC, calls ext_0047D7C0 on the global object at mem_00AE29D0, returns true.
extern "C" bool __thiscall fn_004BFC20(void* self, const void* unused) {
    (void)unused;
    void* adjusted = static_cast<char*>(self) - 0xC;
    ext_0047D7C0(mem_00AE29D0, adjusted);
    return true;
}
#include <new>
#include <cstdint>

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

// [0x004DE0F0] NMData::AnimationEventData::vfunc_69 (51 bytes)
namespace lift_004DE0F0 {
extern void ext_004C1AF0(void* self, int32_t arg);
extern uint32_t ext_0047C480(void* ecx, int32_t arg);
extern int mem_00AE29D0;

// @name NMData::AnimationEventData::vfunc_69
// @class NMData::AnimationEventData
// @summary Accumulates (x - field_0x15c) into field_0x9a0, forwards x to the ForceEventData base vfunc_69, then tail-calls sub_0047C480 with the global mem_00AE29D0 as receiver and field_0x168 as its argument.
// @field NMData::AnimationEventData +0x15C int32_t field_0x15c
// @field NMData::AnimationEventData +0x168 int32_t field_0x168
// @field NMData::AnimationEventData +0x9A0 int32_t field_0x9a0
uint32_t fn_004DE0F0(void* self, int32_t x) {
    // delta = x - this->field_0x15c
    int32_t delta = x - lift_field<int32_t>(self, 0x15c);

    // this->field_0x9a0 += delta
    lift_field<int32_t>(self, 0x9a0) += delta;

    // ForceEventData::vfunc_69(this, x); callee pops its own argument
    ext_004C1AF0(self, x);

    // v = this->field_0x168 (read after the call)
    int32_t v = lift_field<int32_t>(self, 0x168);

    // Tail call: sub_0047C480 with ecx = mem_00AE29D0 and one stack argument v.
    // Its eax result is returned unchanged.
    return ext_0047C480(reinterpret_cast<void*>(static_cast<intptr_t>(mem_00AE29D0)), v);
}
} // namespace lift_004DE0F0

// [0x004E2700]
namespace lift_004E2700 {
// @name NMData::AnimationEventData::vfunc_77
// @class NMData::AnimationEventData
// @summary Clears the vector at +0x9B0 and resets the iterator at +0x9C0/+0x9C4 to its end
// @field NMData::AnimationEventData +0x9b0 uint8_t[16] field_0x9b0
// @field NMData::AnimationEventData +0x9c0 uint32_t field_0x9c0
// @field NMData::AnimationEventData +0x9c4 uint32_t field_0x9c4


extern void (__cdecl* mem_00925134)();
extern uint32_t (__thiscall* ext_00596660)(void* self, void* ret_iter, void* cont1, uint32_t first, void* cont2, uint32_t last);

void __thiscall fn_004E2700(uint8_t* self) {
    uint8_t* vec = self + 0x9B0;
    uint32_t* begin_ptr = reinterpret_cast<uint32_t*>(vec + 0x4);
    uint32_t* end_ptr = reinterpret_cast<uint32_t*>(vec + 0x8);

    uint32_t end = *end_ptr;
    if (*begin_ptr > end) {
        mem_00925134();
    }

    uint32_t begin = *begin_ptr;
    if (begin > *end_ptr) {
        mem_00925134();
    }

    uint32_t ret_iter[2];
    ext_00596660(vec, ret_iter, vec, begin, vec, end);

    end = *end_ptr;
    if (*begin_ptr > end) {
        mem_00925134();
    }

    *reinterpret_cast<uint32_t*>(self + 0x9C4) = end;
    *reinterpret_cast<uint32_t*>(self + 0x9C0) = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(vec));
}
} // namespace lift_004E2700

// [0x0048AF30] NMData::AnimationEventData::vfunc_1_off_154 (112 bytes)
namespace lift_0048AF30 {
// @name NMData::AnimationEventData::vfunc_1_off_154
// @class NMData::AnimationEventData
// @summary Auto-lifted identical-shape clone of 0x004C8440 (NMData::BehaviourData::vfunc_1_off_154).
namespace lift_004C8440 {
extern void __thiscall ext_004026E0(void* self);
extern void __thiscall ext_004C28C0(void* self, void* arg);

// @name NMData::BehaviourData::vfunc_1_off_154
// @class NMData::BehaviourData
// @summary Thunk at +0x154 (HasDependentSelection) that queries arg0->vfunc_0x34 into a local buffer, passes it to ext_004C28C0 on BehaviourData, and destroys the buffer
void __thiscall fn_0048AF30(void* self, void* arg0) {
    struct LocalBuf {
        uint32_t f0;
        uint32_t f4;
        uint32_t f8;
        uint32_t fC;
    } local_buf;
    local_buf.f4 = 0;
    local_buf.f8 = 0;
    local_buf.fC = 0;

    using VFunc34 = void(__thiscall*)(void*, void*);
    void** vtbl = *reinterpret_cast<void***>(arg0);
    reinterpret_cast<VFunc34>(vtbl[0x38 / 4])(arg0, &local_buf);

    void* behaviour_data = reinterpret_cast<uint8_t*>(self) - 0x154;
    ext_004C28C0(behaviour_data, &local_buf);

    ext_004026E0(&local_buf);
}
} // namespace lift_004C8440
} // namespace lift_0048AF30

// [0x004DE1B0] NMData::AnimationEventData::vfunc_60 (34 bytes)
namespace lift_004DE1B0 {
// @name NMData::AnimationEventData::vfunc_60
// @class NMData::AnimationEventData
// @summary Auto-lifted identical-shape clone of 0x004C4E40 (NMData::ForceEventData::NotifyEvent0x266).
// @field NMData::AnimationEventData +0x0 void** vtable
void* fn_004DE1B0(void* self, void* arg) {
    void** vtbl = lift_field<void**>(self, 0x00);
    using Slot15 = void (*)(void* self, void* arg, uint32_t id, uint32_t flags);
    Slot15 slot = reinterpret_cast<Slot15>(vtbl[15]);
    slot(self, arg, 0x334u, 0u);
    return arg;
}
} // namespace lift_004DE1B0
