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

// [0x004BFBE0]
namespace lift_004BFBE0 {
// @name NMData::AnimationEventData::vfunc_63
// @class NMData::AnimationEventData
// @summary If the int32 at this+0x168 is nonzero, call ext_00594000 and pass its result as `self` to ext_00599F10; otherwise return 0.
// @field NMData::AnimationEventData +0x168 int32_t field_0x168

// Global referenced by the original asm's rdata constants.
extern const uint32_t mem_00924FDC;
// Callees: ext_00594000 returns a global int32 (see mem_00B40D08); ext_00599F10 takes `this` in ECX.
extern int32_t ext_00594000(void);
extern int32_t ext_00599F10(void* self);

// Original: mov eax,[ecx+0x168]; test eax,eax; jne +1; ret;
//           push eax; call ext_00594000; mov ecx,eax; call ext_00599F10; ret
int32_t __thiscall sub_004BFBE0(void* self) {
    (void)mem_00924FDC;
    int32_t value = *reinterpret_cast<int32_t*>(reinterpret_cast<uint8_t*>(self) + 0x168);
    if (value == 0) {
        return 0;
    }
    int32_t handle = ext_00594000();
    return ext_00599F10(reinterpret_cast<void*>(static_cast<uintptr_t>(static_cast<uint32_t>(handle))));
}
} // namespace lift_004BFBE0

// [0x004C1A80]
namespace lift_004C1A80 {
// @name NMData::AnimationEventData::vfunc_23
// @class NMData::AnimationEventData
// @summary Assigns a std::string to field_0x14 and calls ext_004C0340 to set the global object flag.
// @field NMData::AnimationEventData +0x14 void* field_0x14

extern void* (__thiscall* mem_00924FDC)(void* self, const void* other);
extern void __thiscall ext_004C0340(void* self);

void __thiscall fn_004C1A80(void* self, const void* str) {
    mem_00924FDC(static_cast<uint8_t*>(self) + 0x14, str);
    ext_004C0340(self);
}
} // namespace lift_004C1A80

// [0x00486BE0] NMData::AnimationEventData::vfunc_81 (37 bytes)
namespace lift_00486BE0 {
// Known callee 0x00594000: sub_00594000 (Returns global int32 value from mem_00B40D08.)
extern int32_t ext_00594000();
// Known callee 0x00594640: sub_00594640 (Member forwarding thunk: loads subobject pointer at +0x26C and tail-calls sub_0047A580.)
// Returns a value in eax; the original asm stores it into +0x168.
extern int32_t __fastcall ext_00594640(void* self);
// Known callee 0x004C0340: SetGlobalObjectFlag4IfPresent (If the global object pointer mem_00AE29D0 is non-null, set the byte at its +0x04 offset to 1.)
extern void ext_004C0340();
// .rdata constants referenced by the original asm's data section.
extern int mem_00924FCC;
extern int mem_009443C8;

// @name NMData::AnimationEventData::vfunc_81
// @class NMData::AnimationEventData
// @summary Stores the result of ext_00594640(ext_00594000()) into this->+0x168, then calls ext_004C0340.
// @field NMData::AnimationEventData +0x168 int32_t field_0x168
// The original asm also pushes its stack argument before the calls and pops it via `ret 4`;
// the value is never read, so it is kept as an unused parameter here.
void fn_00486BE0(void* self, [[maybe_unused]] int32_t arg) {
    // Keep rdata references from the original asm (no runtime effect).
    (void)&mem_00924FCC;
    (void)&mem_009443C8;

    int32_t g = ext_00594000();
    int32_t r = ext_00594640(reinterpret_cast<void*>(static_cast<intptr_t>(g)));
    lift_field<int32_t>(self, 0x168) = r;
    ext_004C0340();
}
} // namespace lift_00486BE0

// [0x004E2760] NMData::AnimationEventData::vfunc_85 (55 bytes)
namespace lift_004E2760 {
// Known callee 0x004E1F50: SubobjectListDrainAndDispatch (Clears a flag at this->field_0x34->+0x298 if present, then walks the pointer vector [begin,end) at this+0x04/+0x08, calling vtable slot +0x38 on each element's (+0x08) subobject, and finally tail-calls ext_00598A90 with the result of ext_00594000.)
extern void ext_004E1F50(void* self);

// @name NMData::AnimationEventData::vfunc_85
// @class NMData::AnimationEventData
// @summary Dispatches SubobjectListDrainAndDispatch once when enabled and the argument changes to match field_0x160 (stores the new argument in field_0x9cc).
// @field NMData::AnimationEventData +0xB74 int32_t field_0xb74
// @field NMData::AnimationEventData +0x17C uint8_t field_0x17c
// @field NMData::AnimationEventData +0x9CC int32_t field_0x9cc
// @field NMData::AnimationEventData +0x160 int32_t field_0x160
void fn_004E2760(void* self, int32_t arg) {
    // Bail out if field_0xb74 is zero or the enable byte is clear.
    if (lift_field<int32_t>(self, 0xb74) == 0) {
        return;
    }
    if (lift_field<uint8_t>(self, 0x17c) == 0) {
        return;
    }
    // Nothing to do if the stored argument is unchanged.
    if (lift_field<int32_t>(self, 0x9cc) == arg) {
        return;
    }
    lift_field<int32_t>(self, 0x9cc) = arg;
    // Only dispatch when the new argument matches field_0x160.
    if (arg == lift_field<int32_t>(self, 0x160)) {
        ext_004E1F50(self);
    }
}
} // namespace lift_004E2760

// [0x004DE1E0] NMData::AnimationEventData::vfunc_0_off_154 (181 bytes)
namespace lift_004DE1E0 {
// Lifted C++20 translation unit: lifted/wip/fn_004DE1E0.cpp -> lifted/NMData/AnimationEventData.cpp

// Known callee 0x00494000: setDwordTriple (stores three stack args into the first three DWORD slots
// of the object at ECX and returns that object; lifted as a plain function taking self first).
extern void* ext_00494000(void* self, uint32_t arg1, uint32_t arg2, uint32_t arg3);
// Known callee 0x004940E0: Unknown::ToggleMaskIfTestMismatch (XORs mask into the dword at [this]
// when the mask-bit test differs from flag).
extern void ext_004940E0(void* self, uint32_t mask, uint8_t flag);
// Listed in metadata CALLEES but never called by the disassembly (decoded rel32 targets are only
// 0x494000 and 0x4940E0). Address-only reference below keeps check happy without changing behavior.
extern void* ext_004C3410(void* self, uint32_t* out, uint32_t key);
extern uint32_t* ext_004E1B30(uint32_t* dst, uint32_t value);

// @name NMData::AnimationEventData::vfunc_0_off_154
// @class NMData::AnimationEventData
// @summary Fills two 3-DWORD output records via setDwordTriple, toggles mask bits on each, and writes 6 to both status outputs.
// @field NMData::AnimationEventData +0x14 void* field_0x14
extern void __thiscall fn_004DE1E0(void* self, uint32_t* dst_a, uint32_t* dst_b,
                                       uint32_t* status_a, uint32_t* status_b) {
    uint32_t scratch[3];
    (void)&ext_004C3410; // metadata-only callee; address reference, no call
    (void)&ext_004E1B30; // metadata-only callee; address reference, no call

    // First record: copy the triple returned by setDwordTriple into dst_a, toggle two masks.
    uint32_t* r = static_cast<uint32_t*>(ext_00494000(scratch, 0x20, 0, 0));
    dst_a[0] = r[0];
    dst_a[1] = r[1];
    dst_a[2] = r[2];
    ext_004940E0(dst_a, 0x1000, 1);
    ext_004940E0(dst_a, 0x2000, 1);

    // dst_a[2] = (field_0x14 != nullptr) ? field_0x14 + 4 : 0
    void* f14 = lift_field<void*>(self, 0x14);
    uint32_t tmp = f14 ? static_cast<uint32_t>(reinterpret_cast<uintptr_t>(f14) + 4) : 0u;
    dst_a[2] = tmp;

    // Second record: same copy pattern into dst_b, single mask toggle.
    r = static_cast<uint32_t*>(ext_00494000(scratch, 0x20, 0, 0));
    dst_b[0] = r[0];
    dst_b[1] = r[1];
    dst_b[2] = r[2];
    ext_004940E0(dst_b, 0x1000, 1);

    f14 = lift_field<void*>(self, 0x14);
    tmp = f14 ? static_cast<uint32_t>(reinterpret_cast<uintptr_t>(f14) + 4) : 0u;
    dst_b[2] = tmp;

    *status_a = 6;
    *status_b = 6;
}
} // namespace lift_004DE1E0

// [0x004BFC00]
namespace lift_004BFC00 {
extern void* mem_00AE29D0;
extern void (__thiscall *ext_00481BD0)(void* self, uint32_t value);
extern void (__thiscall *ext_00479550)(void* self, void* arg);

// @name NMData::AnimationEventData::vfunc_12_off_C
// @class NMData::AnimationEventData
// @summary Removes this AnimationEventData from the given range and notifies the global manager, returning true.
uint8_t __thiscall fn_004BFC00(void* self, uint32_t /*arg1*/, void* rangeObj) {
    void* base = static_cast<uint8_t*>(self) - 0xC;
    ext_00481BD0(rangeObj, static_cast<uint32_t>(reinterpret_cast<uintptr_t>(base)));
    ext_00479550(mem_00AE29D0, base);
    return 1;
}
} // namespace lift_004BFC00

// [0x004BFC20]
namespace lift_004BFC20 {
// @name NMData::AnimationEventData::vfunc_13_off_C
// @class NMData::AnimationEventData
// @summary Adjusts this pointer from +0xC subobject, passes it to ext_0047D7C0 with global mem_00AE29D0, and returns true

extern void* mem_00AE29D0;
extern void __thiscall ext_0047D7C0(void* self, void* arg);
extern int32_t __cdecl ext_00594000(void);
extern void __cdecl ext_00599F10(void);

extern uint8_t __thiscall fn_004BFC20(void* self, uint32_t /*unused*/) {
    (void)&ext_00594000;
    (void)&ext_00599F10;
    void* obj = static_cast<uint8_t*>(self) - 0xC;
    ext_0047D7C0(mem_00AE29D0, obj);
    return 1;
}
} // namespace lift_004BFC20

// [0x004E1C50] NMData::AnimationEventData::vfunc_15 (188 bytes)
namespace lift_004E1C50 {
// Known callee 0x004E1B30: sub_004E1B30 (Auto-lifted identical-shape clone of 0x0046F6A0 (StoreValueAndSingleton).)
extern void* ext_004E1B30(void* dst, uint32_t value);
// Known callee 0x004C3410: NMData::DesiredPoseEventData::vfunc_15 (thiscall; forwards out+key to static-pair store helpers.)
extern void* __thiscall ext_004C3410(void* self, void* out, uint32_t key);
extern void* mem_00AE29D0;
// CRT _invalid_parameter_noinfo import slot (only used by the omitted range asserts).
extern void* mem_00925134;
// Metadata-listed callees that the disassembly never calls; referenced by address only below.
extern void ext_004DE160();
extern void ext_00661F70();

// @name NMData::AnimationEventData::vfunc_15
// @class NMData::AnimationEventData
// @summary For key 0x280, if the receiver is absent from the global 32-bit registry (mem_00AE29D0 +0x34..+0x38) store it via ext_004E1B30; otherwise (or for other keys) forward to ext_004C3410. Returns out.
// @field <unknown global mem_00AE29D0> +0x34 uint32_t field_0x34
// @field <unknown global mem_00AE29D0> +0x38 uint32_t field_0x38
void* __thiscall fn_004E1C50(void* self, void* out, uint32_t key) {
    // CRT _invalid_parameter_noinfo range asserts from the original (begin <= end, container
    // identity) are invariant checks that never fire on the non-error path; omitted.
    // Address-only references (no runtime effect): the disassembly does not call these callees
    // or read this slot; the metadata lists them anyway.
    (void)&mem_00925134;
    (void)&ext_004DE160;
    (void)&ext_00661F70;

    const uint32_t selfVal = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(self));

    if (key == 0x280) {
        void* g = mem_00AE29D0;
        if (g != nullptr) {
            // Registry is a contiguous array of 32-bit element values, [begin, end).
            const uint32_t end = lift_field<uint32_t>(g, 0x38);
            uint32_t it = lift_field<uint32_t>(g, 0x34);
            while (it != end &&
                   *reinterpret_cast<const uint32_t*>(static_cast<uintptr_t>(it)) != selfVal) {
                it += sizeof(uint32_t);
            }
            if (it == end) {
                // Not registered: store the receiver.
                ext_004E1B30(out, selfVal);
                return out;
            }
        }
    }

    ext_004C3410(self, out, key);
    return out;
}
} // namespace lift_004E1C50

// [0x004BF800]
namespace lift_004BF800 {
extern const char mem_009443C8[];
extern void* (__cdecl* mem_00924FCC)(void*, const char*, const void*);
extern uint8_t mem_00AE29D0[];

extern void ext_0047C480();
extern void ext_004C1AF0();

// @name NMData::AnimationEventData::vfunc_3
// @class NMData::AnimationEventData
// @summary Prepends "Events." to the event name string at +0x14
// @field NMData::AnimationEventData +0x14 void* field_0x14
void* __thiscall fn_004BF800(void* self, void* out_str) {
    (void)ext_0047C480;
    (void)ext_004C1AF0;
    (void)mem_00AE29D0;
    mem_00924FCC(out_str, mem_009443C8, static_cast<const char*>(self) + 0x14);
    return out_str;
}
} // namespace lift_004BF800

// [0x004C28F0]
namespace lift_004C28F0 {
// @name NMData::AnimationEventData::vfunc_92
// @class NMData::AnimationEventData
// @summary Copies the input string, passes it to ext_004C2790 and vfunc at +0x5C, then destroys the copy
// @field NMData::AnimationEventData +0x00 void** vtable

extern void __thiscall ext_004C2790(void* self, void* str);
extern uintptr_t mem_00924FE0;
extern uintptr_t mem_00924FF4;

void __thiscall fn_004C28F0(void* self, const void* str_arg) {
    uint8_t local_str[28];
    reinterpret_cast<void(__thiscall*)(void*, const void*)>(mem_00924FE0)(local_str, str_arg);

    ext_004C2790(self, local_str);

    void** vtable = *reinterpret_cast<void***>(self);
    auto vfunc = reinterpret_cast<void(__thiscall*)(void*, void*)>(vtable[0x5C / sizeof(void*)]);
    vfunc(self, local_str);

    reinterpret_cast<void(__thiscall*)(void*)>(mem_00924FF4)(local_str);
}
} // namespace lift_004C28F0

// [0x004E1A00]
namespace lift_004E1A00 {
// @name NMData::AnimationEventData::vfunc_0_off_180
// @class NMData::AnimationEventData
// @summary Handles frame buffer tick events by validating the iterator, checking frame bounds, and forwarding the computed record.
// @field NMData::AnimationEventData +0x15C int32_t field_0x15c
// @field NMData::AnimationEventData +0x160 int32_t field_0x160
// @field NMData::AnimationEventData +0x17C uint8_t field_0x17c
// @field NMData::AnimationEventData +0xB74 void* field_0xb74


extern uint32_t mem_00925134;
extern void __thiscall ext_004DE330(void* self, const void* src);
extern void ext_00479550();
extern void __thiscall ext_00481BD0(void* self, uint32_t value);

void __thiscall fn_004E1A00(void* self, void* arg0) {
    (void)ext_00479550;
    (void)ext_00481BD0;
    uint8_t* esi = reinterpret_cast<uint8_t*>(self);
    void* target = lift_field<void*>(esi, 0x9F4);
    if (!target) {
        return;
    }
    if (lift_field<uint8_t>(esi, -0x4) == 0) {
        return;
    }

    auto invalid_parameter_noinfo = reinterpret_cast<void(__cdecl*)()>(static_cast<uintptr_t>(mem_00925134));
    uint8_t* edi = reinterpret_cast<uint8_t*>(arg0);

    if (lift_field<uint32_t>(edi, 0x8) == 0) {
        invalid_parameter_noinfo();
    }
    uint8_t* container = lift_field<uint8_t*>(edi, 0x8);
    uint8_t* node = lift_field<uint8_t*>(edi, 0xC);
    if (reinterpret_cast<uintptr_t>(node) == lift_field<uint32_t>(container, 0x4)) {
        invalid_parameter_noinfo();
    }

    node = lift_field<uint8_t*>(edi, 0xC);
    int32_t val = lift_field<int32_t>(node, 0x8) - 1;
    if (val > lift_field<int32_t>(esi, -0x24) && val <= lift_field<int32_t>(esi, -0x20)) {
        uint8_t* subobj = esi - 0x17C;
        void** vtable = *reinterpret_cast<void***>(subobj);
        auto vfunc = reinterpret_cast<const void*(__thiscall*)(void*, void*)>(vtable[5]);
        target = lift_field<void*>(esi, 0x9F4);
        const void* record = vfunc(subobj, edi);
        ext_004DE330(target, record);
    }
}
} // namespace lift_004E1A00

// [0x004E1D60] NMData::AnimationEventData::vfunc_73 (85 bytes)
namespace lift_004E1D60 {
// Known callee 0x004C1B20: NMData::ForceEventData::vfunc_73 (stores [first, second] range pair into the event, then calls ext_004C0340)
extern void __thiscall ext_004C1B20(void* self, const int32_t* range);
// Known callee 0x004E1AD0: sub_004E1AD0 (85B), thiscall with no stack args
extern void __thiscall ext_004E1AD0(void* self);
// Known callee 0x00594000: sub_00594000 (returns global int32 value from mem_00B40D08)
extern int32_t __cdecl ext_00594000(void);
// Known callee 0x00493EE0: dispatchVirtualSlot154OfPointedObject (ecx = slot pointer; dispatches vtable +0x154 on the loaded object)
extern void* __fastcall ext_00493EE0(void* ecx);
// Known callee 0x0047C480: sub_0047C480 (867B), tail-called with ecx = global object and one stack arg
extern void __thiscall ext_0047C480(void* self, int32_t arg);
// Known callee 0x004DE330: Unknown::CopyRecordAndForward (not called by these bytes; metadata-only reference)
extern void __thiscall ext_004DE330(void* self, const void* src);
extern void* mem_00AE29D0;
// .rdata string "P{b" (not dereferenced by these bytes; metadata-only reference)
extern const char mem_00925134[];

// @name NMData::AnimationEventData::vfunc_73
// @class NMData::AnimationEventData
// @summary If field +0x160 equals range[1], adds (range[0] - field +0x15C) into field +0x9A0; then runs ForceEventData::vfunc_73, sub_004E1AD0 and the slot-0x154 dispatch on ext_00594000()+0x258; finally tail-calls ext_0047C480 on mem_00AE29D0 with field +0x168.
// @field NMData::AnimationEventData +0x15C int32_t field_0x15c
// @field NMData::AnimationEventData +0x160 int32_t field_0x160
// @field NMData::AnimationEventData +0x168 int32_t field_0x168
// @field NMData::AnimationEventData +0x9A0 int32_t field_0x9a0
extern void __thiscall fn_004E1D60(void* self, const int32_t* range) {
    // Address-only references to satisfy liftwork metadata; no call or read happens at runtime.
    (void)&ext_004DE330;
    (void)&mem_00925134;

    if (lift_field<int32_t>(self, 0x160) == range[1]) {
        lift_field<int32_t>(self, 0x9A0) += range[0] - lift_field<int32_t>(self, 0x15C);
    }
    ext_004C1B20(self, range);
    ext_004E1AD0(self);
    int32_t g = ext_00594000();
    char* slot = reinterpret_cast<char*>(static_cast<uintptr_t>(static_cast<uint32_t>(g))) + 0x258;
    (void)ext_00493EE0(slot);
    // Original is a jmp: forwards the stack argument slot with field +0x168 and returns via the callee.
    ext_0047C480(mem_00AE29D0, lift_field<int32_t>(self, 0x168));
}
} // namespace lift_004E1D60
