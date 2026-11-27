// Lifted C++ translation unit: lifted/NMData/RPROJointData.cpp
#include "lift_compat.h"
#include <new>
#include <string>
extern "C" const char* mem_00A9F1E4;
extern "C" void ext_005EB920(void* self, int32_t kind, int32_t arg2);

// [0x005EC2A0] NMData::RPROJointData::vfunc_63 (34 bytes)
// @name NMData::RPROJointData::vfunc_63
// @class NMData::RPROJointData
// @summary Returns early if kind equals the stored field; otherwise maps kind 5 to 3 and tail-forwards to NMData::FixedPathJointData::vfunc_63 (ext_005EB920).
// @field NMData::RPROJointData +0x194 int32_t field_0x194
void fn_005EC2A0(void* self, int32_t kind, int32_t arg2) {
    if (kind == lift_field<int32_t>(self, 0x194)) {
        return;
    }
    if (kind == 5) {
        kind = 3;
    }
    ext_005EB920(self, kind, arg2);
}

// [0x00584FD0] NMData::RPROJointData::vfunc_59 (35 bytes)
namespace lift_00584FD0 {
extern int mem_00A9F1E4; // .data slot holding a const char* (0x009866A0)
extern int mem_00924FE4; // IAT slot: MSVCP80 basic_string(const char*, allocator) ctor

// @name NMData::RPROJointData::vfunc_59
// @class NMData::RPROJointData
// @summary Constructs a std::string from the literal pointed to by mem_00A9F1E4 into the caller-supplied buffer and returns that buffer; the this pointer is unused.
std::string* fn_00584FD0(std::string* out) {
    // Original: call [0x00924FE4] = MSVCP80 basic_string(const char*, allocator) ctor, lowered to placement new.
    static_cast<void>(&mem_00924FE4);
    const char* lit = *reinterpret_cast<const char* const*>(&mem_00A9F1E4);
    ::new (static_cast<void*>(out)) std::string(lit);
    return out;
}
} // namespace lift_00584FD0

// [0x005E23F0] NMData::RPROJointData::vfunc_54 (128 bytes)
namespace lift_005E23F0 {
extern void ext_005B5780(void* self, uint32_t size);
extern void ext_005E0380(void* self, void* arg);
extern void ext_006A6C87(const void* fn);
extern uint8_t mem_00B45DBC;
extern uint8_t mem_00B45DB4;
extern uint8_t mem_00B45D70[];

// @name NMData::RPROJointData::vfunc_54
// @class NMData::RPROJointData
// @summary Lazily constructs the shared static object at 0xB45D70 (guarded by mem_00B45DBC), binds it to self, caches self+0x178 into mem_00B45DB4, and returns the object.
// @field NMData::RPROJointData +0x178 uint8_t field_0x178
void* fn_005E23F0(void* self) {
    if ((mem_00B45DBC & 1u) == 0) {
        mem_00B45DBC |= 1u;
        ext_005B5780(mem_00B45D70, 0x0Cu);
        ext_006A6C87(reinterpret_cast<const void*>(static_cast<uintptr_t>(0x0091E450u)));
    }
    ext_005E0380(self, mem_00B45D70);
    mem_00B45DB4 = lift_field<uint8_t>(self, 0x178);
    return static_cast<void*>(mem_00B45D70);
}
} // namespace lift_005E23F0

// [0x005F0A20] NMData::RPROJointData::vfunc_17_off_C (186 bytes)
namespace lift_005F0A20 {
extern void* ext_006A5C62(uint32_t size);        // IAT thunk -> MFC80!ord_762 (operator new)
extern void* ext_005F0960(void* mem);            // ctor: constructs object at mem, returns it
extern void ext_005881D0(void* self, void* arg);
extern void ext_0065F280(void* self, void* arg); // this-adjustor thunk -> sub_0065F2A0

// @name NMData::RPROJointData::vfunc_17_off_C
// @class NMData::RPROJointData
// @summary Clone-style factory: allocates and constructs a 0x2FC-byte object, initializes its 0x178 flag and 0xE4..0xEC members from this RPROJointData, calls the sub-object's vfunc slot 23 and vfunc slot 8, and returns the new object. Entered with the RenderObjectOwner subobject (+0xC) as this.
// @field NMData::RPROJointData +0x0E4 void* field_0xe4
// @field NMData::RPROJointData +0x0E8 uint32_t field_0xe8
// @field NMData::RPROJointData +0x0EC uint32_t field_0xec
// @field NMData::RPROJointData +0x148 uint8_t field_0x148
// @field NMData::RPROJointData +0x178 uint8_t field_0x178
void* fn_005F0A20(void* self) {
    // self is the +0xC subobject; the full object starts 0xC bytes before it.
    uint8_t* obj = static_cast<uint8_t*>(self) - 0xC;

    // new object (0x2FC bytes) + constructor. Original null check kept: ctor skipped if alloc returned null.
    void* mem = ext_006A5C62(0x2FCu);
    void* inst = nullptr;
    if (mem != nullptr) {
        inst = ext_005F0960(mem);
    }

    // inst->vtbl[23](inst, self + 8)
    {
        using VFn = void(__thiscall*)(void*, void*);
        void** vt = *reinterpret_cast<void***>(inst);
        reinterpret_cast<VFn>(vt[23])(inst, static_cast<uint8_t*>(self) + 8);
    }

    // inst->0x178 = obj->0x178; ext_005881D0(inst, obj)
    lift_field<uint8_t>(inst, 0x178) = lift_field<uint8_t>(obj, 0x178);
    ext_005881D0(inst, obj);

    // ext_0065F280(inst + 0xE4, obj + 0xE4)
    ext_0065F280(static_cast<uint8_t*>(inst) + 0xE4, obj + 0xE4);

    // copy 0xE8 and 0xEC dwords
    lift_field<uint32_t>(inst, 0xE8) = lift_field<uint32_t>(obj, 0xE8);
    lift_field<uint32_t>(inst, 0xEC) = lift_field<uint32_t>(obj, 0xEC);

    // sub = self - 8 (obj + 4); result = sub->vtbl[8](sub); inst->0x148 = result
    {
        using VFn = uint8_t(__thiscall*)(void*);
        void* sub = static_cast<uint8_t*>(self) - 8;
        void** vt = *reinterpret_cast<void***>(sub);
        uint8_t r = reinterpret_cast<VFn>(vt[8])(sub);
        lift_field<uint8_t>(inst, 0x148) = r;
    }

    return inst;
}
} // namespace lift_005F0A20

// [0x005EC250] NMData::RPROJointData::vfunc_22 (80 bytes)
namespace lift_005EC250 {
// @name NMData::RPROJointData::vfunc_22
// @class NMData::RPROJointData
// @summary Resolves a handle from arg via 0x006404E0, forwards it to RelationshipData::vfunc_22, and when the flag at +0x2F8 is set, updates the child name via 0x00640110 and 0x00640A80.
// @field NMData::RPROJointData +0x2F8 uint8_t field_0x2f8

extern uint32_t ext_006404E0(void* self, uint32_t value);
extern void ext_005EB5A0(void* self, void* arg);
extern uint32_t ext_00640110(void* self, uint32_t value);
extern void ext_00640A80(uint32_t value, uint8_t flag);
extern uint32_t mem_00A9F1E4;
extern uint32_t mem_00A9F718;

void* fn_005EC250(void* self, void* arg) {
    const uint32_t v0 = mem_00A9F1E4;
    void* const handle = reinterpret_cast<void*>(ext_006404E0(arg, v0));

    ext_005EB5A0(self, handle);

    if (lift_field<uint8_t>(self, 0x2F8) != 0) {
        const uint32_t r = ext_00640110(handle, mem_00A9F718);
        const uint8_t flag = lift_field<uint8_t>(self, 0x2F8);
        ext_00640A80(r, flag);
    }

    return arg;
}
} // namespace lift_005EC250
