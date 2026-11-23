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

// [0x00612E80] NMData::PrimaryTwistAndSwingConstraint::vfunc_59 (45 bytes)
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
