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

// [0x004E7040] NMData::AnimationEventData::vfunc_17_off_C (108 bytes)
namespace lift_004E7040 {
// @name NMData::AnimationEventData::vfunc_17_off_C
// @class NMData::AnimationEventData
// @summary Allocates a 0xB7C-byte object, constructs it from the primary subobject (this-0xC), runs sub_004E4E40 on the result and returns it (NULL if allocation fails).

extern void* ext_006A5C62(uint32_t size);                  // thunk_MFC80_ord_762 (operator new)
extern void* ext_004E6BF0(void* obj, void* base);          // sub_004E6BF0 (thiscall: ecx=obj, arg=base)
extern void  ext_004E4E40(void* obj);                      // sub_004E4E40 (thiscall: ecx=obj)
extern void  ext_004C2790();                               // sub_004C2790 (metadata-only, see below)
extern const int mem_00924FE0;                             // .rdata u32 0x0062916E (metadata-only)
extern const int mem_00924FF4;                             // .rdata u32 0x00628FF0 (metadata-only)

// The original sets up an MSVC SEH frame (fs:[0] push, try-level 0/1) around the
// allocation/construction. That is exception-unwinding bookkeeping only and has no
// portable equivalent, so it is omitted. No fields of `self` are dereferenced directly;
// self is only adjusted by -0xC before being passed on, so no @field lines are emitted.
void* fn_004E7040(void* self) {
    // Metadata-only references: listed for the check but never accessed by the bytes.
    // Taking the address has no runtime effect and makes no call.
    (void)&ext_004C2790;
    (void)&mem_00924FE0;
    (void)&mem_00924FF4;

    void* obj = ext_006A5C62(0xB7C);
    void* result = nullptr;
    if (obj != nullptr) {
        void* base = static_cast<char*>(self) - 0xC;
        result = ext_004E6BF0(obj, base);
    }
    ext_004E4E40(result);
    return result;
}
} // namespace lift_004E7040

// [0x004E1A70] NMData::AnimationEventData::vfunc_0_off_184 (91 bytes)
namespace lift_004E1A70 {
// Known callee 0x004DE160: sub_004DE160, thiscall, returns (this->field_0x15c - this->field_0x9a0) + 1 as int32.
extern int32_t __thiscall ext_004DE160(void* self);
// Callee 0x00661F70: thiscall with one stack arg (cleaned by callee); operates on the subobject at this+0x740.
extern void __thiscall ext_00661F70(void* self, int32_t count);
// Metadata-only callees: listed for this address but not called by the bytes at 0x004E1A70.
extern void ext_0047C480();
extern void ext_00493EE0();
extern void ext_004C1B20();
extern void ext_004E1AD0();
// MSVCR80 import slot used by the original for _invalid_parameter_noinfo (replaced by std::abort below).
extern int mem_00925134;

// @name NMData::AnimationEventData::vfunc_0_off_184
// @class NMData::AnimationEventData
// @summary If field +0x10 is non-zero, validate arg (non-null, arg->end != arg->ptr->+4), then call ext_00661F70 on this+0x740 with max(arg->ptr->+8 - ext_004DE160(), 1).
// @field NMData::AnimationEventData +0x10 uint32_t field_0x10
extern void __thiscall fn_004E1A70(void* self, void* arg) {
    // self is the FrameBufferPlaybackEventListener subobject (AnimationEventData + 0x184).
    // The original reads the enclosing AnimationEventData through a -0x184 adjustment.
    char* real = static_cast<char*>(self) - 0x184;

    // Metadata-only references (no runtime effect; take addresses only).
    (void)&ext_0047C480;
    (void)&ext_00493EE0;
    (void)&ext_004C1B20;
    (void)&ext_004E1AD0;
    (void)&mem_00925134;

    // Original: cmp dword ptr [edi-0x174], 0 ; je exit   (edi-0x174 == real+0x10)
    if (lift_field<uint32_t>(self, -0x174) == 0) {
        return;
    }

    // arg is a record with pointer p at +0x8 and pointer q at +0xC.
    void* p = lift_field<void*>(arg, 0x8);
    if (p == nullptr) {
        // Original calls MSVCR80 _invalid_parameter_noinfo (fatal in the CRT).
        std::abort();
    }
    void* q = lift_field<void*>(arg, 0xC);
    if (q == lift_field<void*>(p, 0x4)) {
        // Same invalid-parameter path as above.
        std::abort();
    }

    int32_t r = ext_004DE160(real);

    // Original: ecx = q->+0x8 - r; if (ecx <= 0) ecx = 1;
    int32_t diff = lift_field<int32_t>(q, 0x8) - r;
    int32_t count = (diff > 0) ? diff : 1;

    // Original: lea ecx,[edi+0x740]; push count; call ext_00661F70
    ext_00661F70(static_cast<char*>(self) + 0x740, count);
}
} // namespace lift_004E1A70

// [0x004E3BF0]
namespace lift_004E3BF0 {
// @name NMData::AnimationEventData::vfunc_34
// @class NMData::AnimationEventData
// @summary Clears the [begin,end) range at +0x984/+0x988, re-wires subobject +0xC to a peer from the call on the TransformInterface vtable, dynamic-casts the peer and stores +0x934 into it, then forwards through two helpers and the +0x2FC table; returns the last helper result (or 0).
// @field NMData::AnimationEventData +0x00 void** vptr
// @field NMData::AnimationEventData +0x04 void** field_0x04 (vptr of the TransformInterface subobject; its slot +0x0C is called)
// @field NMData::AnimationEventData +0x0c void* field_0x0c (address of embedded subobject; passed to ext_00528B90)
// @field NMData::AnimationEventData +0x184 void* field_0x184 (address only, passed to ext_00662420)
// @field NMData::AnimationEventData +0x2fc void* field_0x2fc (address only, passed to ext_004E3660)
// @field NMData::AnimationEventData +0x934 void* field_0x934 (address only, stored at result+0x20)
// @field NMData::AnimationEventData +0x980 void* field_0x980 (address only; base of the range struct passed to ext_00596660)
// @field NMData::AnimationEventData +0x984 void* field_0x984 (range begin pointer)
// @field NMData::AnimationEventData +0x988 void* field_0x988 (range end pointer)
// @field NMData::AnimationEventData +0x990 uint8_t field_0x990
// @field NMData::AnimationEventData +0x9d4 uint8_t field_0x9d4

extern int32_t ext_00594000();
extern void ext_00662420(void* self, void* arg);
extern void ext_004DE020(void* self);
extern void ext_00596660(void* self, void** out, void* a2, int32_t* first, void* a4, int32_t* last);
extern uintptr_t ext_00493E40(void* self, uintptr_t a, uintptr_t b);
extern void ext_00528B90(void* self, void* peer);
extern void* ext_006A6E9E(void* obj, int32_t vfDelta, void* srcType, void* tgtType, int32_t isRef);
extern uintptr_t ext_00493E70(void* self, uintptr_t a);
extern void ext_004E3660(void* self, void* arg, void* a2, uintptr_t a3);
extern void ext_004E1DC0(void* self, uint8_t flag);
// IAT slot for MSVCR80!_invalid_parameter_noinfo (called indirectly through the slot).
extern void* mem_00925134;
extern void* mem_00B40640;

uintptr_t fn_004E3BF0(void* self, void* arg) {
    uint8_t* const esi = static_cast<uint8_t*>(self);

    uint8_t* edi = esi ? esi + 0x184 : nullptr;

    uintptr_t mgr = static_cast<uint32_t>(ext_00594000());
    ext_00662420(reinterpret_cast<void*>(mgr + 0x1c8), edi);

    if (lift_field<uint8_t>(self, 0x9d4) != 0) {
        ext_004DE020(self);
    }

    uintptr_t begin = reinterpret_cast<uintptr_t>(lift_field<void*>(self, 0x984));
    uintptr_t end = reinterpret_cast<uintptr_t>(lift_field<void*>(self, 0x988));
    if (begin > end) {
        (*reinterpret_cast<void (**)()>(&mem_00925134))();
    }

    void* range = esi + 0x980;
    void* outPair[2] = {nullptr, nullptr};
    ext_00596660(range, outPair, range,
                 lift_field<int32_t*>(self, 0x984), range,
                 lift_field<int32_t*>(self, 0x988));

    // Vtable slots are addressed by byte offset (+0x0C, +0xD8), as in the original.
    void** vt4 = lift_field<void**>(self, 0x4);
    using VFn = uintptr_t(__thiscall*)(void* self, void* a, void* b);
    uintptr_t t1 = reinterpret_cast<VFn>(*reinterpret_cast<void**>(
        reinterpret_cast<uint8_t*>(vt4) + 0x0c))(esi + 0x4, mem_00B40640, esi + 0x0c);

    void** vt0 = lift_field<void**>(self, 0x0);
    using VSelf = uintptr_t(__thiscall*)(void* self);
    uintptr_t e2 = reinterpret_cast<VSelf>(*reinterpret_cast<void**>(
        reinterpret_cast<uint8_t*>(vt0) + 0xd8))(self);

    uintptr_t r1 = ext_00493E40(arg, e2, t1);

    uintptr_t result = 0;
    if (r1 != 0) {
        ext_00528B90(esi + 0x0c, reinterpret_cast<void*>(r1));

        void* casted = ext_006A6E9E(reinterpret_cast<void*>(r1), 0,
                                    reinterpret_cast<void*>(uintptr_t{0xa3e624}),
                                    reinterpret_cast<void*>(uintptr_t{0xa3e640}), 0);
        lift_field<void*>(casted, 0x20) = esi + 0x934;

        uintptr_t r3 = ext_00493E70(arg, r1);
        ext_004E3660(self, arg, esi + 0x2fc, r3);
        result = r3;
    }

    ext_004E1DC0(self, lift_field<uint8_t>(self, 0x990));
    return result;
}
} // namespace lift_004E3BF0

// [0x004C1F90]
namespace lift_004C1F90 {
void __thiscall ext_00486CB0(void* self, const void* arg1, const void* arg2, const char* arg3);
void __thiscall ext_0058D800(void* self, void* arg1, uint32_t arg2, uint32_t arg3);
void __thiscall ext_004769F0(void* self, const int32_t* arg1, const int32_t* arg2, const char* arg3);
void __thiscall ext_0049AD90(void* self, const uint8_t* arg1, const uint8_t* arg2, const char* arg3);
void __thiscall ext_004C1B50(void* self, const void* arg1, const void* arg2, const char* arg3);
void __thiscall ext_004C2070(void* self, void* arg1, uint32_t arg2);
void ext_00661650(void);

// @name NMData::AnimationEventData::vfunc_94
// @class NMData::AnimationEventData
// @summary Compares fields of two AnimationEventData objects and delegates to ext_0058D800.
// @field NMData::AnimationEventData +0x14 void* field_0x14
// @field NMData::AnimationEventData +0x15C int32_t field_0x15c
// @field NMData::AnimationEventData +0x160 int32_t field_0x160
// @field NMData::AnimationEventData +0x16C void* field_0x16c
// @field NMData::AnimationEventData +0x17C uint8_t field_0x17c
extern void __thiscall fn_004C1F90(void* self, void* arg1, uint32_t arg2, uint32_t arg3) {
    using VFunc9 = const void* (__thiscall*)(void*);
    void** vtable = *reinterpret_cast<void***>(arg1);
    const void* name_ptr = reinterpret_cast<VFunc9>(vtable[9])(arg1);

    uint32_t dummy_ctx = arg2;
    ext_00486CB0(&dummy_ctx, reinterpret_cast<const char*>(self) + 0x14, name_ptr, reinterpret_cast<const char*>(0x0093F7BC));
    ext_0058D800(self, arg1, arg2, arg3);

    int32_t lhs_15c = lift_field<int32_t>(self, 0x15C);
    int32_t rhs_15c = lift_field<int32_t>(arg1, 0x15C);
    ext_004769F0(&lhs_15c, &lhs_15c, &rhs_15c, reinterpret_cast<const char*>(0x00944E30));

    int32_t lhs_160 = lift_field<int32_t>(self, 0x160);
    int32_t rhs_160 = lift_field<int32_t>(arg1, 0x160);
    ext_004769F0(&lhs_160, &lhs_160, &rhs_160, reinterpret_cast<const char*>(0x00944E24));

    uint8_t lhs_17c = lift_field<uint8_t>(self, 0x17C);
    uint8_t rhs_17c = lift_field<uint8_t>(arg1, 0x17C);
    ext_0049AD90(&lhs_17c, &lhs_17c, &rhs_17c, reinterpret_cast<const char*>(0x00944E18));

    ext_004C1B50(&dummy_ctx, reinterpret_cast<const char*>(self) + 0x16C, reinterpret_cast<const char*>(arg1) + 0x16C, reinterpret_cast<const char*>(0x00944E08));
    (void)ext_004C2070;
    (void)ext_00661650;
}
} // namespace lift_004C1F90

// [0x004DDF00]
namespace lift_004DDF00 {
// @name NMData::AnimationEventData::vfunc_22
// @class NMData::AnimationEventData
// @summary Serializes AnimationEventData properties and embedded subobjects to an XML/data node.
// @field NMData::AnimationEventData +0x18c uint8_t field_0x18c
// @field NMData::AnimationEventData +0x990 uint8_t field_0x990
// @field NMData::AnimationEventData +0x994 float field_0x994
// @field NMData::AnimationEventData +0x998 float field_0x998
// @field NMData::AnimationEventData +0x9a0 int32_t field_0x9a0
// @field NMData::AnimationEventData +0x9a4 int32_t field_0x9a4
// @field NMData::AnimationEventData +0x9d5 uint8_t field_0x9d5
// @field NMData::AnimationEventData +0x9d6 uint8_t field_0x9d6
// @field NMData::AnimationEventData +0x9e0 void** field_0x9e0


extern void __thiscall ext_004C1DE0(void* self, void* node);
extern void* __thiscall ext_00640110(void* node, const void* name);
extern void __cdecl ext_00640A80(void* child, uint32_t flag);
extern void __cdecl ext_0067EF60(void* node, float value, const void* fmt, uint32_t name);
extern void __thiscall ext_004C45F0(void* subobj, void* node, uint32_t flag);
extern void __cdecl ext_00640A50(void* child, int32_t value);
extern void* __thiscall ext_00640390(void* node, uint32_t name, uint32_t flag);

extern const uint8_t mem_00949DA0[];
extern const uint8_t mem_00949D94[];
extern const uint8_t mem_00949D7C[];
extern const uint8_t mem_00949D68[];

extern uint32_t mem_00A9F43C;
extern uint32_t mem_00A9F9C4;
extern uint32_t mem_00A9F61C;
extern uint32_t mem_00A9F488;
extern uint32_t mem_00A9F684;
extern uint32_t mem_00A9EDE8;

void* __thiscall fn_004DDF00(void* self, void* node) {
    ext_004C1DE0(self, node);

    void* child = ext_00640110(node, mem_00949DA0);
    ext_00640A80(child, lift_field<uint8_t>(self, 0x9D6));

    child = ext_00640110(node, reinterpret_cast<const void*>(static_cast<uintptr_t>(mem_00A9F43C)));
    ext_00640A80(child, lift_field<uint8_t>(self, 0x9D5));

    ext_0067EF60(node, lift_field<float>(self, 0x998), mem_00949D94, mem_00A9F9C4);
    ext_0067EF60(node, lift_field<float>(self, 0x994),
                 reinterpret_cast<const void*>(static_cast<uintptr_t>(mem_00A9F488)), mem_00A9F61C);

    ext_004C45F0(static_cast<uint8_t*>(self) + 0x18C, node, 0);

    child = ext_00640110(node, reinterpret_cast<const void*>(static_cast<uintptr_t>(mem_00A9F684)));
    ext_00640A50(child, lift_field<int32_t>(self, 0x9A0));

    child = ext_00640110(node, mem_00949D7C);
    ext_00640A50(child, lift_field<int32_t>(self, 0x9A4));

    child = ext_00640110(node, mem_00949D68);
    ext_00640A80(child, lift_field<uint8_t>(self, 0x990));

    void* subNode = ext_00640390(node, mem_00A9EDE8, 0);
    void* subObj = static_cast<uint8_t*>(self) + 0x9E0;
    void** vtable = *reinterpret_cast<void***>(subObj);
    using VFunc22 = void(__thiscall*)(void*, void*);
    reinterpret_cast<VFunc22>(vtable[0x58 / sizeof(void*)])(subObj, subNode);

    return node;
}
} // namespace lift_004DDF00

// [0x004E3570] NMData::AnimationEventData::vfunc_76 (55 bytes)
namespace lift_004E3570 {
// @name NMData::AnimationEventData::vfunc_76
// @class NMData::AnimationEventData
// @summary Appends the argument to the container at +0x9B0 via ext_0041A920, validates begin <= end, and stores the container end iterator at +0x9C0/+0x9C4.
// @field NMData::AnimationEventData +0x9B0 uint8_t[16] field_0x9b0
// @field NMData::AnimationEventData +0x9C0 uint32_t field_0x9c0
// @field NMData::AnimationEventData +0x9C4 uint32_t field_0x9c4

extern void __thiscall ext_0041A920(void* self, const void* elem);
extern void ext_004E35B0(void);
extern void ext_004E3AB0(void);
extern void ext_004E5990(void);
extern void ext_004E5AE0(void);
extern int32_t __cdecl ext_00594000(void);
extern void ext_006622D0(void);
extern void ext_006A5C5C(void);
extern void (__cdecl* mem_00925134)(void);

void __thiscall fn_004E3570(void* self, uint32_t arg) {
    (void)&ext_004E35B0;
    (void)&ext_004E3AB0;
    (void)&ext_004E5990;
    (void)&ext_004E5AE0;
    (void)&ext_00594000;
    (void)&ext_006622D0;
    (void)&ext_006A5C5C;

    uint8_t* container = static_cast<uint8_t*>(self) + 0x9B0;
    ext_0041A920(container, &arg);

    uint32_t end_ptr = lift_field<uint32_t>(container, 0x08);
    if (lift_field<uint32_t>(container, 0x04) > end_ptr) {
        mem_00925134();
    }

    lift_field<uint32_t>(self, 0x9C0) = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(container));
    lift_field<uint32_t>(self, 0x9C4) = end_ptr;
}
} // namespace lift_004E3570

// [0x004E4ED0]
namespace lift_004E4ED0 {
// @name NMData::AnimationEventData::vfunc_21
// @class NMData::AnimationEventData
// @summary Loads AnimationEventData properties from an XML/data node and updates related subobjects.
// @field NMData::AnimationEventData +0x4 void** field_0x04
// @field NMData::AnimationEventData +0x168 void* field_0x168
// @field NMData::AnimationEventData +0x18C uint8_t field_0x18c
// @field NMData::AnimationEventData +0x990 uint8_t field_0x990
// @field NMData::AnimationEventData +0x994 float field_0x994
// @field NMData::AnimationEventData +0x998 float field_0x998
// @field NMData::AnimationEventData +0x9A0 int32_t field_0x9a0
// @field NMData::AnimationEventData +0x9A4 int32_t field_0x9a4
// @field NMData::AnimationEventData +0x9A8 uint8_t field_0x9a8
// @field NMData::AnimationEventData +0x9D4 uint8_t field_0x9d4
// @field NMData::AnimationEventData +0x9D5 uint8_t field_0x9d5
// @field NMData::AnimationEventData +0x9D6 uint8_t field_0x9d6
// @field NMData::AnimationEventData +0x9E0 void** field_0x9e0


void __thiscall ext_004C24C0(void* self, void* node);
void __thiscall ext_004C4650(void* self, void* arg);
void __thiscall ext_004C4A40(void* self, uint32_t node, uint32_t flag);
void __thiscall ext_004DE180(void* self);
void __thiscall ext_004E3DE0(void* self);
void __thiscall ext_004E4690(void* self);
void __cdecl ext_0053F5F0(int32_t* out, uint32_t* node_ptr);
uint8_t* __cdecl ext_00594000(void);
uint32_t __thiscall ext_0063EFE0(void* self, const char* name);
uint32_t __thiscall ext_0063F530(void* self, uint32_t name, uint32_t a, uint32_t b);
void __cdecl ext_00427640(uint8_t* out, uint32_t* node_ptr);
void __thiscall ext_0067E820(void* self);
float __cdecl ext_0067EE80(void* node, const void* a, uint32_t b);

extern uint32_t mem_00A9ED2C;
extern uint32_t mem_00A9F43C;
extern uint32_t mem_00A9F9C4;
extern uint32_t mem_00A9F61C;
extern uint32_t mem_00A9F488;
extern uint32_t mem_00A9F684;
extern uint32_t mem_009849BC;
extern uint32_t mem_009849B8;
extern uint32_t mem_00B40640;
extern uint32_t mem_00A9EDE8;
extern uint32_t mem_00A9F2F8;

static bool is_sentinel(uint32_t val) {
    return val == 0x00B53A34u || val == 0x00B53B30u || val == 0x00B53AB0u ||
           val == 0x00B53A70u || val == 0x00B53AF0u;
}

void __thiscall fn_004E4ED0(void* self, void* node) {
    uint8_t* base = static_cast<uint8_t*>(self);
    ext_004C24C0(self, node);

    uint8_t* sub_18c = base + 0x18C;
    ext_004C4650(sub_18c, base + 0x9A8);

    uint32_t found = ext_0063F530(node, mem_00A9ED2C, 0, 1);
    if (is_sentinel(found)) {
        found = 0x00B53B30u;
    }
    ext_004C4A40(sub_18c, found, 0);

    uint32_t prop = ext_0063EFE0(node, reinterpret_cast<const char*>(0x00949DA0u));
    if (!is_sentinel(prop)) {
        uint32_t tmp = prop;
        ext_00427640(base + 0x9D6, &tmp);

        tmp = ext_0063EFE0(node, reinterpret_cast<const char*>(mem_00A9F43C));
        ext_00427640(base + 0x9D5, &tmp);

        lift_field<float>(base, 0x998) =
            ext_0067EE80(node, reinterpret_cast<const void*>(0x00949D94u), mem_00A9F9C4);
    }

    lift_field<float>(base, 0x994) =
        ext_0067EE80(node, reinterpret_cast<const void*>(mem_00A9F488), mem_00A9F61C);

    uint32_t tmp_a0 = ext_0063EFE0(node, reinterpret_cast<const char*>(mem_00A9F684));
    ext_0053F5F0(&lift_field<int32_t>(base, 0x9A0), &tmp_a0);

    uint32_t tmp_a4 = ext_0063EFE0(node, reinterpret_cast<const char*>(0x00949D7Cu));
    ext_0053F5F0(&lift_field<int32_t>(base, 0x9A4), &tmp_a4);

    ext_004DE180(self);

    uint32_t tmp_90 = ext_0063EFE0(node, reinterpret_cast<const char*>(0x00949D68u));
    ext_00427640(base + 0x990, &tmp_90);

    uint8_t* g0 = ext_00594000();
    uint8_t* g0_sub = lift_field<uint8_t*>(g0, 0x26C);
    if (lift_field<uint32_t>(g0_sub, 0x538) < mem_009849BC) {
        lift_field<uint8_t>(base, 0x9D4) = 1;
    }

    uint8_t* g1 = ext_00594000();
    uint8_t* g1_sub = lift_field<uint8_t*>(g1, 0x26C);
    if (lift_field<uint32_t>(g1_sub, 0x538) < mem_009849B8) {
        uint8_t* obj_168 = lift_field<uint8_t*>(base, 0x168);
        uint8_t* iface = obj_168 + 0x8;
        auto vfn1 = reinterpret_cast<uint32_t(__thiscall*)(void*, uint32_t)>(
            (*reinterpret_cast<void***>(iface))[0x14 / 4]);
        uint32_t res = vfn1(iface, mem_00B40640);

        uint8_t* tif = base + 0x4;
        auto vfn2 = reinterpret_cast<void*(__thiscall*)(void*, uint32_t, uint32_t)>(
            (*reinterpret_cast<void***>(tif))[0xC / 4]);
        void* target = vfn2(tif, mem_00B40640, res);
        ext_0067E820(target);
    }

    uint32_t sub_node = ext_0063F530(node, mem_00A9EDE8, 0, 1);
    if (!is_sentinel(sub_node)) {
        uint32_t child = ext_0063F530(reinterpret_cast<void*>(sub_node), mem_00A9F2F8, 0, 1);
        if (is_sentinel(child)) {
            child = 0x00B53B30u;
        }
        uint8_t* obj_9e0 = base + 0x9E0;
        auto vfn3 = reinterpret_cast<void(__thiscall*)(void*, uint32_t)>(
            (*reinterpret_cast<void***>(obj_9e0))[0x54 / 4]);
        vfn3(obj_9e0, child);
    }

    ext_004E3DE0(self);
    ext_004E4690(self);
}
} // namespace lift_004E4ED0

// [0x004E7280]
namespace lift_004E7280 {
// @name NMData::AnimationEventData::vfunc_87
// @class NMData::AnimationEventData
// @summary Cleans up animation event data buffers, resets time fields, unregisters tick listener, and resets iterator state.
// @field NMData::AnimationEventData +0x180 void* field_0x180
// @field NMData::AnimationEventData +0x9b0 uint8_t[16] field_0x9b0
// @field NMData::AnimationEventData +0x9b4 uint32_t field_0x9b4
// @field NMData::AnimationEventData +0x9b8 uint32_t field_0x9b8
// @field NMData::AnimationEventData +0x9c0 void* field_0x9c0
// @field NMData::AnimationEventData +0x9c4 uint32_t field_0x9c4
// @field NMData::AnimationEventData +0x9c8 int32_t field_0x9c8
// @field NMData::AnimationEventData +0x9cc int32_t field_0x9cc
// @field NMData::AnimationEventData +0x9d8 float field_0x9d8
// @field NMData::AnimationEventData +0x9dc float field_0x9dc
// @field NMData::AnimationEventData +0xb74 void* field_0xb74
// @field NMData::AnimationEventData +0xb78 void* field_0xb78


extern void (__thiscall ext_004E3AB0)(void*);
extern void (__thiscall ext_004E35B0)(void*);
extern void (__cdecl ext_006A5C5C)(void*);
extern void (__thiscall ext_004E5990)(void*);
extern void (__thiscall ext_004E5AE0)(void*);
extern int32_t (__cdecl ext_00594000)(void);
extern void (__thiscall ext_006622D0)(void*, void*);
extern void (*mem_00925134)(void);
extern void ext_004769F0(void);
extern void ext_00486CB0(void);
extern void ext_0049AD90(void);
extern void ext_004C1B50(void);
extern void ext_0058D800(void);

void __thiscall fn_004E7280(void* self) {
    void* obj1 = lift_field<void*>(self, 0xb74);
    if (obj1 != nullptr) {
        ext_004E3AB0(obj1);
        void* obj1_del = lift_field<void*>(self, 0xb74);
        if (obj1_del != nullptr) {
            ext_004E35B0(obj1_del);
            ext_006A5C5C(obj1_del);
        }
        lift_field<void*>(self, 0xb74) = nullptr;
    }

    void* obj2 = lift_field<void*>(self, 0xb78);
    if (obj2 != nullptr) {
        ext_004E5990(obj2);
        void* obj2_del = lift_field<void*>(self, 0xb78);
        if (obj2_del != nullptr) {
            ext_004E5AE0(obj2_del);
            ext_006A5C5C(obj2_del);
        }
        lift_field<void*>(self, 0xb78) = nullptr;
    }

    lift_field<float>(self, 0x9d8) = 0.0f;
    lift_field<float>(self, 0x9dc) = 0.0f;

    int32_t mgr = ext_00594000();
    ext_006622D0(reinterpret_cast<void*>(static_cast<uintptr_t>(mgr) + 0x168),
                 reinterpret_cast<uint8_t*>(self) + 0x180);

    uint32_t end_val = lift_field<uint32_t>(self, 0x9b8);
    uint32_t beg_val = lift_field<uint32_t>(self, 0x9b4);
    if (beg_val > end_val) {
        mem_00925134();
    }

    lift_field<void*>(self, 0x9c0) = reinterpret_cast<uint8_t*>(self) + 0x9b0;
    lift_field<uint32_t>(self, 0x9c4) = end_val;
    lift_field<int32_t>(self, 0x9c8) = 0x7fffffff;
    lift_field<int32_t>(self, 0x9cc) = 0x7fffffff;

    (void)ext_004769F0;
    (void)ext_00486CB0;
    (void)ext_0049AD90;
    (void)ext_004C1B50;
    (void)ext_0058D800;
}
} // namespace lift_004E7280

// [0x004E70B0]
namespace lift_004E70B0 {
void ext_004E4690(void* self);
void ext_004DE180(void* self);
void* ext_00594000(void);
float ext_00594070(void* self);
void* ext_00660A50(void* arg0, void* arg1, uint32_t arg2);
void ext_0048BC80(void* self);
void* ext_006A5C62(size_t size);
void ext_004E3A30(void* self);
void ext_004E35B0(void* self);
void ext_006A5C5C(void* ptr);
void ext_004E3F20(void* self, void* owner, void* vec);
void ext_004E5C40(void* self);
void ext_004E5AE0(void* self);
void ext_004E5D50(void* self, void* owner, void* vec);
void ext_00662400(void* self, void* listener);
extern void (*mem_00925134)(void);

// @name NMData::AnimationEventData::vfunc_88
// @class NMData::AnimationEventData
// @summary Initializes animation event data, computes timing/frame rates, builds optional event subobjects, registers frame buffer listener, and resets iterator state.
// @field NMData::AnimationEventData +0x16C void* field_0x16c
// @field NMData::AnimationEventData +0x180 void* field_0x180
// @field NMData::AnimationEventData +0x9A0 int32_t field_0x9a0
// @field NMData::AnimationEventData +0x9B0 uint8_t[16] field_0x9b0
// @field NMData::AnimationEventData +0x9B4 uint32_t field_0x9b4
// @field NMData::AnimationEventData +0x9B8 uint32_t field_0x9b8
// @field NMData::AnimationEventData +0x9C0 void* field_0x9c0
// @field NMData::AnimationEventData +0x9C4 uint32_t field_0x9c4
// @field NMData::AnimationEventData +0x9C8 int32_t field_0x9c8
// @field NMData::AnimationEventData +0x9CC int32_t field_0x9cc
// @field NMData::AnimationEventData +0x9D5 uint8_t field_0x9d5
// @field NMData::AnimationEventData +0x9D6 uint8_t field_0x9d6
// @field NMData::AnimationEventData +0x9D8 float field_0x9d8
// @field NMData::AnimationEventData +0x9DC float field_0x9dc
// @field NMData::AnimationEventData +0xB74 void* field_0xb74
// @field NMData::AnimationEventData +0xB78 void* field_0xb78
void fn_004E70B0(void* self) {
    ext_004E4690(self);
    ext_004DE180(self);

    lift_field<int32_t>(self, 0x9C8) = 0x7FFFFFFF;
    lift_field<int32_t>(self, 0x9CC) = 0x7FFFFFFF;

    void* mgr = ext_00594000();
    lift_field<float>(self, 0x9DC) = ext_00594070(mgr);

    float fps = lift_field<float>(mgr, 0x234);
    int32_t frame_count = lift_field<int32_t>(self, 0x9A0);
    lift_field<float>(self, 0x9D8) = (1.0f / fps) * static_cast<float>(frame_count);

    uintptr_t local_vec[4] = {0, 0, 0, 0};
    void* res = ext_00660A50(static_cast<uint8_t*>(self) + 0x16C, local_vec, 0);
    ext_0048BC80(res);

    if (lift_field<uint8_t>(self, 0x9D6) != 0) {
        void* mem = ext_006A5C62(0x78);
        void* obj = nullptr;
        if (mem != nullptr) {
            ext_004E3A30(mem);
            obj = mem;
        }
        void* old_obj = lift_field<void*>(self, 0xB74);
        if (obj != old_obj && old_obj != nullptr) {
            ext_004E35B0(old_obj);
            ext_006A5C5C(old_obj);
        }
        lift_field<void*>(self, 0xB74) = obj;
        ext_004E3F20(obj, self, local_vec);
    }

    if (lift_field<uint8_t>(self, 0x9D5) != 0) {
        void* mem = ext_006A5C62(0x1AC);
        void* obj = nullptr;
        if (mem != nullptr) {
            ext_004E5C40(mem);
            obj = mem;
        }
        void* old_obj = lift_field<void*>(self, 0xB78);
        if (obj != old_obj && old_obj != nullptr) {
            ext_004E5AE0(old_obj);
            ext_006A5C5C(old_obj);
        }
        lift_field<void*>(self, 0xB78) = obj;
        ext_004E5D50(obj, self, local_vec);
    }

    void* mgr2 = ext_00594000();
    ext_00662400(static_cast<uint8_t*>(mgr2) + 0x168, static_cast<uint8_t*>(self) + 0x180);

    uint32_t begin_ptr = lift_field<uint32_t>(self, 0x9B4);
    if (begin_ptr > lift_field<uint32_t>(self, 0x9B8)) {
        mem_00925134();
    }
    lift_field<void*>(self, 0x9C0) = static_cast<uint8_t*>(self) + 0x9B0;
    lift_field<uint32_t>(self, 0x9C4) = begin_ptr;

    if (local_vec[1] != 0) {
        ext_006A5C5C(reinterpret_cast<void*>(local_vec[1]));
    }
}
} // namespace lift_004E70B0
