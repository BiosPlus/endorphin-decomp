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

// [0x00486BE0] NMData::AnimationEventData::vfunc_81 (37 bytes)
// @name NMData::AnimationEventData::vfunc_81
// @class NMData::AnimationEventData
// @summary Sets field +0x168 to ext_00594640(ext_00594000()), then calls ext_004C0340(this); the stack argument is unused.
// @field NMData::AnimationEventData +0x168 int32_t field_0x168
extern "C" void __thiscall fn_00486BE0(void* self, int32_t arg) {
    // The original pushes its stack argument before calling ext_00594000, which takes no
    // arguments; the caller's argument is cleaned up by the ret 4 and never read here.
    (void)arg;
    int32_t r = ext_00594000();
    lift_field<int32_t>(self, 0x168) = ext_00594640(reinterpret_cast<void*>(static_cast<intptr_t>(r)));
    ext_004C0340(self);
}

// [0x004BF800] NMData::AnimationEventData::vfunc_3 (40 bytes)
// @name NMData::AnimationEventData::vfunc_3
// @class NMData::AnimationEventData
// @summary Returns "Events." concatenated with the string stored at +0x14.
// @field NMData::AnimationEventData +0x14 std::string field_0x14
std::string fn_004BF800(const void* self) {
    const auto* name = reinterpret_cast<const std::string*>(
        static_cast<const unsigned char*>(self) + 0x14);
    return std::string("Events.") + *name;
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

// [0x004E2760]
namespace lift_004E2760 {
extern uint8_t mem_read8(const void* base, uint32_t offset);
extern uint32_t mem_read32(const void* base, uint32_t offset);
extern void mem_write32(void* base, uint32_t offset, uint32_t value);
extern void __thiscall ext_004E1F50(uint32_t self);

// @name NMData::AnimationEventData::vfunc_85
// @class NMData::AnimationEventData
// @summary Updates cached frame/time at +0x9CC and triggers ext_004E1F50 on field_0xB74 when matching +0x160
// @field NMData::AnimationEventData +0x160 uint32_t field_0x160
// @field NMData::AnimationEventData +0x17C uint8_t field_0x17c
// @field NMData::AnimationEventData +0x9CC uint32_t field_0x9cc
// @field NMData::AnimationEventData +0xB74 uint32_t field_0xb74
void __thiscall fn_004E2760(void* self, uint32_t arg1) {
    uint32_t target = mem_read32(self, 0xB74);
    if (target == 0) {
        return;
    }
    if (mem_read8(self, 0x17C) == 0) {
        return;
    }
    if (mem_read32(self, 0x9CC) == arg1) {
        return;
    }
    bool matches = (arg1 == mem_read32(self, 0x160));
    mem_write32(self, 0x9CC, arg1);
    if (matches) {
        ext_004E1F50(target);
    }
}
} // namespace lift_004E2760

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

// [0x004C28F0]
namespace lift_004C28F0 {
// @name NMData::AnimationEventData::vfunc_92
// @class NMData::AnimationEventData
// @summary Copies the input string, passes it to sub_004C2790, then invokes vtable+0x5C with it.
// @field NMData::AnimationEventData +0x00 void** vptr

extern void __thiscall ext_004C2790(void* self, void* str);

void __thiscall fn_004C28F0(void* self, const std::string& arg0) {
    std::string local_str(arg0);
    ext_004C2790(self, &local_str);

    void** vtable = *reinterpret_cast<void***>(self);
    using vfunc_t = void(__thiscall*)(void*, void*);
    auto vfunc_5c = reinterpret_cast<vfunc_t>(vtable[0x5C / 4]);
    vfunc_5c(self, &local_str);
}
} // namespace lift_004C28F0
