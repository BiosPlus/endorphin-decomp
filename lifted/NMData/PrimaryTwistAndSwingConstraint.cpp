// Lifted C++ translation unit: lifted/NMData/PrimaryTwistAndSwingConstraint.cpp
#include "lift_compat.h"
#include <new>
#include <string>
extern "C" int mem_00A9F294;
extern "C" int mem_00A9EF94;
extern "C" void* ext_006A5C62(size_t size);
extern "C" void* ext_0061D7C0(void* self, void* owner);

extern "C" void* ext_0061D7C0(void* self, void* owner);
// @name NMData::PrimaryTwistAndSwingConstraint::vfunc_69
// @class NMData::PrimaryTwistAndSwingConstraint
// @summary Stdcall (ret 8) selector: constructs a std::string in the caller-supplied buffer from the C string stored at mem_00A9F294 (kind 0), mem_00A9EF94 (kind 1), or a fixed literal address (other kinds), then returns the buffer.
extern "C" void* __stdcall fn_00611B80(void* out, uint32_t kind) {
    const char* text;
    if (kind == 0) {
        text = reinterpret_cast<const char*>(static_cast<uintptr_t>(static_cast<uint32_t>(mem_00A9F294)));
    } else if (kind == 1) {
        text = reinterpret_cast<const char*>(static_cast<uintptr_t>(static_cast<uint32_t>(mem_00A9EF94)));
    } else {
        text = reinterpret_cast<const char*>(static_cast<uintptr_t>(0x00928B5Du));
    }
    new (out) std::string(text);
    return out;
}
// Known callee 0x00612310: sub_00612310 (82B). Called with ecx = this + offset (thiscall-style)
// and two stack arguments forwarded unchanged from this function's arguments.
extern "C" void ext_00612310(void* self, uint32_t a, uint32_t b);

// and two stack arguments forwarded unchanged from this function's arguments.
extern "C" void ext_00612310(void* self, uint32_t a, uint32_t b);
// @class NMData::PrimaryTwistAndSwingConstraint
// @summary Auto-lifted identical-shape clone of 0x004CFC30 (NMData::IncarnationEventData::vfunc_17_off_C).
void* fn_0061DB80(void* self) {
    void* mem = ext_006A5C62(0x33C);
    if (mem == nullptr) {
        return nullptr;
    }
    void* owner = static_cast<unsigned char*>(self) - 0xC;
    return ext_0061D7C0(mem, owner);
}
#include <cstddef>
#include <cstdint>

#include <cstdint>
// @name NMData::PrimaryTwistAndSwingConstraint::vfunc_59
// @class NMData::PrimaryTwistAndSwingConstraint
// @summary Forwards two arguments to the shared helper 0x00612310, using the subobject at self+0x224 when the flag argument is nonzero and self+0x164 otherwise.
// @field NMData::PrimaryTwistAndSwingConstraint +0x164 uint8_t field_0x164
// @field NMData::PrimaryTwistAndSwingConstraint +0x224 uint8_t field_0x224
void fn_00612E80(void* self, uint32_t a, uint32_t b, uint32_t flag) {
    if (flag != 0) {
        ext_00612310(&lift_field<uint8_t>(self, 0x224), a, b);
    } else {
        ext_00612310(&lift_field<uint8_t>(self, 0x164), a, b);
    }
}

// [0x00611CA0] NMData::PrimaryTwistAndSwingConstraint::vfunc_66 (60 bytes)
namespace lift_00611CA0 {
// Known callee 0x00468180: fn_00468180 (Returns global int32 value from mem_00AD7CD8.)
extern int32_t __cdecl ext_00468180(void);
// Known callee 0x00469530: sub_00469530 (56B), thiscall-style with two stack args, ret 8.
extern void __thiscall ext_00469530(void* self, int32_t a1, int32_t a2);

// @name NMData::PrimaryTwistAndSwingConstraint::vfunc_66
// @class NMData::PrimaryTwistAndSwingConstraint
// @summary Stores a byte at this+0x328+index, calls vtable slot 79, then if ext_00468180() is nonzero tail-calls ext_00469530(result, 5, 0).
// @field PrimaryTwistAndSwingConstraint +0x328 uint8_t field_0x328
void __thiscall fn_00611CA0(void* self, int32_t index, uint8_t value) {
    // Byte store into the table at +0x328, indexed by the first argument.
    uint8_t* table = reinterpret_cast<uint8_t*>(self) + 0x328;
    table[index] = value;

    // Virtual call through vtable slot 79 (offset 0x13C) with no arguments.
    void** vtbl = *reinterpret_cast<void***>(self);
    auto slot79 = reinterpret_cast<void (__thiscall*)(void*)>(vtbl[79]);
    slot79(self);

    int32_t result = ext_00468180();
    if (result != 0) {
        // Tail call: result becomes `this` for the callee, args are (5, 0).
        ext_00469530(reinterpret_cast<void*>(static_cast<intptr_t>(result)), 5, 0);
    }
}
} // namespace lift_00611CA0

// [0x0061DBF0] NMData::PrimaryTwistAndSwingConstraint::vfunc_70 (69 bytes)
namespace lift_0061DBF0 {
extern void ext_0061CF90(void* self, void* arg1, void* arg2);

// @name NMData::PrimaryTwistAndSwingConstraint::vfunc_70
// @class NMData::PrimaryTwistAndSwingConstraint
// @summary Forwards (arg1, arg2) to ext_0061CF90 on the sub-object at this+0x164 when flag is zero, otherwise at this+0x224; returns arg1.
// @field NMData::PrimaryTwistAndSwingConstraint +0x164 uint8_t field_0x164
// @field NMData::PrimaryTwistAndSwingConstraint +0x224 uint8_t field_0x224
void* fn_0061DBF0(void* self, void* arg1, void* arg2, uint32_t flag) {
    auto* base = static_cast<uint8_t*>(self);
    void* sub = (flag == 0) ? static_cast<void*>(base + 0x164)
                            : static_cast<void*>(base + 0x224);
    ext_0061CF90(sub, arg1, arg2);
    return arg1;
}
} // namespace lift_0061DBF0

// [0x00611E00] NMData::PrimaryTwistAndSwingConstraint::vfunc_9_off_C (145 bytes)
namespace lift_00611E00 {
// Known callee 0x00528C30: AnimatableTransform::vfunc_9_off_C (If the sub-object at +0x4 is non-null, forwards the call (same stack argument) to its vtable slot 8; otherwise returns 0.)
extern std::uint32_t ext_00528C30(void* self, std::uint32_t arg0);

namespace {

// Thiscall virtual slot taking one stack argument (callee pops 4) and returning nothing.
using SlotFn = void (*)(void* self, std::uint32_t arg);

// Calls the virtual slot at byte offset `slotOffset` (multiple of 4) of `obj` with `arg`.
void callSlot(void* obj, std::size_t slotOffset, std::uint32_t arg) {
    void** vtbl = *static_cast<void***>(obj);
    auto fn = reinterpret_cast<SlotFn>(vtbl[slotOffset / sizeof(void*)]);
    fn(obj, arg);
}

// Returns the object pointer stored at `offset` of `base`, or nullptr.
void* objectAt(void* base, std::ptrdiff_t offset) {
    return lift_field<void*>(base, offset);
}

}  // namespace

// @name NMData::PrimaryTwistAndSwingConstraint::vfunc_9_off_C
// @class NMData::PrimaryTwistAndSwingConstraint
// @summary Forwards the stack argument to the base AnimatableTransform::vfunc_9_off_C, then, if the sub-object at +0x4 is set, forwards it to slot 8 of the objects at +0x324, +0x328, +0x320 and +0x32C (slot 9 is also called on +0x320 and +0x32C).
// @field NMData::PrimaryTwistAndSwingConstraint +0x04 void* field_0x04 (sub-object; when null the function returns after the base call)
// @field NMData::PrimaryTwistAndSwingConstraint +0x320 void* field_0x320 (object; vtable slots 8 and 9 are called with the argument)
// @field NMData::PrimaryTwistAndSwingConstraint +0x324 void* field_0x324 (object; vtable slot 8 is called with the argument)
// @field NMData::PrimaryTwistAndSwingConstraint +0x328 void* field_0x328 (object; vtable slot 8 is called with the argument)
// @field NMData::PrimaryTwistAndSwingConstraint +0x32C void* field_0x32c (object; vtable slots 8 and 9 are called with the argument)

void __thiscall fn_00611E00(void* self, std::uint32_t arg) {
    ext_00528C30(self, arg);

    if (objectAt(self, 0x4) == nullptr) {
        return;
    }

    if (void* o = objectAt(self, 0x324)) {
        callSlot(o, 0x20, arg);
    }

    if (void* o = objectAt(self, 0x328)) {
        callSlot(o, 0x20, arg);
    }

    if (void* o = objectAt(self, 0x320)) {
        callSlot(o, 0x20, arg);
        if (void* o2 = objectAt(self, 0x320)) {
            callSlot(o2, 0x24, arg);
        }
    }

    if (void* o = objectAt(self, 0x32C)) {
        callSlot(o, 0x20, arg);
        if (void* o2 = objectAt(self, 0x32C)) {
            callSlot(o2, 0x24, arg);
        }
    }
}
} // namespace lift_00611E00

// [0x00611BF0] NMData::PrimaryTwistAndSwingConstraint::vfunc_14 (157 bytes)
namespace lift_00611BF0 {
// Known callee 0x0046F7D0: sub_00467320 (Auto-lifted identical-shape clone of 0x00437DE0 (callSub00437DC0WithOne).)
extern void ext_0046F7D0(void* arg);
// Known callee 0x00661650: sub_00661650 (35B). Called with arg in ecx and one stack argument.
extern void ext_00661650(void* self_arg, void* stack_arg);

// @name NMData::PrimaryTwistAndSwingConstraint::vfunc_14
// @class NMData::PrimaryTwistAndSwingConstraint
// @summary Dispatches on selector id: 0xAC and 0x16C forward to ext_00661650 when any of the flag bytes at +0x328..+0x32A is set; 0x138 always forwards to it; all other paths call ext_0046F7D0. Returns arg1.
// @field NMData::PrimaryTwistAndSwingConstraint +0x164 uint8_t field_0x164
// @field NMData::PrimaryTwistAndSwingConstraint +0x224 uint8_t field_0x224
// @field NMData::PrimaryTwistAndSwingConstraint +0x328 uint8_t field_0x328
// @field NMData::PrimaryTwistAndSwingConstraint +0x329 uint8_t field_0x329
// @field NMData::PrimaryTwistAndSwingConstraint +0x32A uint8_t field_0x32A
void* fn_00611BF0(void* self, void* arg1, uint32_t id) {
    auto* base = static_cast<uint8_t*>(self);
    const bool flagSet = base[0x328] != 0 || base[0x329] != 0 || base[0x32A] != 0;

    switch (id) {
    case 0xACu:
        if (flagSet) {
            ext_00661650(arg1, base + 0x224);
            return arg1;
        }
        break;
    case 0x138u:
        ext_00661650(arg1, base);
        return arg1;
    case 0x16Cu:
        if (flagSet) {
            ext_00661650(arg1, base + 0x164);
            return arg1;
        }
        break;
    default:
        break;
    }

    ext_0046F7D0(arg1);
    return arg1;
}
} // namespace lift_00611BF0
