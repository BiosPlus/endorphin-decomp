// Lifted C++ translation unit: lifted/NMData/TransitionEventData.cpp
#include "lift_compat.h"
#include <string>
extern "C" void* __thiscall ext_006404E0(void* self, void* arg);
extern "C" void* mem_00A9F358;
#include <new>
extern "C" void* ext_006A5C62(size_t size);
extern "C" void* ext_004D2F60(void* self, void* owner);

extern "C" void* ext_006A5C62(size_t size);
extern "C" void* ext_004D2F60(void* self, void* owner);
// @class NMData::TransitionEventData
// @summary Auto-lifted identical-shape clone of 0x004DDED0 (NMData::AnimationEventData::vfunc_59).
// @field NMData::TransitionEventData +0x0 void** vptr
extern "C" void __thiscall fn_004D0B80(void* self, void* a) {
    using VFn = void(__thiscall*)(void* self, void* arg);
    void* g = mem_00A9F358;
    void* r = ext_006404E0(a, g);
    void** vt = *reinterpret_cast<void***>(self);
    reinterpret_cast<VFn>(vt[22])(self, r);
}

// [0x004D3070] NMData::TransitionEventData::vfunc_17_off_C (99 bytes)
// @name NMData::TransitionEventData::vfunc_17_off_C
// @class NMData::TransitionEventData
// @summary Auto-lifted identical-shape clone of 0x004CFC30 (NMData::IncarnationEventData::vfunc_17_off_C).
void* fn_004D3070(void* self) {
    void* mem = ext_006A5C62(0x32C);
    if (mem == nullptr) {
        return nullptr;
    }
    void* owner = static_cast<unsigned char*>(self) - 0xC;
    return ext_004D2F60(mem, owner);
}

// [0x004D0C80]
namespace lift_004D0C80 {
// @name NMData::TransitionEventData::vfunc_14
// @class NMData::TransitionEventData
// @summary Returns property value for ID 0x40 from field_0x198 if field_0x168->vfunc_10() is false, otherwise delegates to base vfunc_14.
// @field NMData::TransitionEventData +0x168 void* field_0x168
// @field NMData::TransitionEventData +0x198 uint8_t field_0x198


extern void __thiscall ext_00661650(void* dst, const void* src);
extern void* __thiscall ext_004C2070(void* self, void* out, uint32_t id);

void* __thiscall fn_004D0C80(void* self, void* out, uint32_t id) {
    if (id == 0x40) {
        void* obj = *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(self) + 0x168);
        void** vtable = *reinterpret_cast<void***>(obj);
        auto vfunc = reinterpret_cast<uint8_t(__thiscall*)(void*)>(vtable[0x28 / 4]);
        if (vfunc(obj) == 0) {
            ext_00661650(out, reinterpret_cast<uint8_t*>(self) + 0x198);
            return out;
        }
    }
    ext_004C2070(self, out, id);
    return out;
}
} // namespace lift_004D0C80

// [0x004D0CF0] NMData::TransitionEventData::vfunc_81 (67 bytes)
namespace lift_004D0CF0 {
// Known callee 0x00594000: sub_00594000 (Returns global int32 value from mem_00B40D08.)
extern int32_t ext_00594000();
// Known callee 0x00594640: sub_00594640 (Member forwarding thunk: loads subobject pointer at +0x26C and tail-calls sub_0047A580.)
extern void* ext_00594640(void* self);
// Known callee 0x005AA830: ObjectWithChild::setValueAndNotifyChild (Stores a 32-bit value at +0x154, then calls vtable slot 0 on the object at +0x190 if it is non-null.)
extern void ext_005AA830(uint8_t* self, int32_t value);
// Known callee 0x004C0340: SetGlobalObjectFlag4IfPresent (If the global object pointer mem_00AE29D0 is non-null, set the byte at its +0x04 offset to 1.)
extern void ext_004C0340();

// @name NMData::TransitionEventData::vfunc_81
// @class NMData::TransitionEventData
// @summary Caches the global-derived object at +0x168; if it is non-null and its vtable slot 10 returns true, notifies the child at +0x198 with value 0; then runs the global flag helper.
// @field NMData::TransitionEventData +0x168 void* field_0x168
// @field NMData::TransitionEventData +0x198 uint8_t field_0x198
void fn_004D0CF0(void* self, int32_t arg) {
    (void)arg;  // pushed by the caller but not read by any callee

    uint8_t* const s = static_cast<uint8_t*>(self);
    void* const obj = ext_00594640(reinterpret_cast<void*>(static_cast<uintptr_t>(ext_00594000())));
    lift_field<void*>(s, 0x168) = obj;

    if (obj != nullptr) {
        void** const vtable = *reinterpret_cast<void***>(obj);
        // Vtable byte offset 0x28 on a 32-bit target is slot index 10.
        auto const slot10 = reinterpret_cast<uint8_t (*)(void*)>(vtable[10]);
        if (slot10(obj) != 0) {
            ext_005AA830(s + 0x198, 0);
        }
    }

    ext_004C0340();
}
} // namespace lift_004D0CF0

// [0x004D2750] NMData::TransitionEventData::vfunc_15 (127 bytes)
namespace lift_004D2750 {
// Known callee 0x004C3410: NMData::DesiredPoseEventData::vfunc_15 (Switches on a 32-bit key and forwards the output pointer plus the receiver's address to one of the static-pair store helpers (default: zero the output); returns the output pointer.)
extern DWORD* __thiscall ext_004C3410(void* self, DWORD* out, DWORD key);
// Known callee 0x004D26F0: storeValueAndStaticObjectAddr (Stores a 32-bit value at dst[0] and the address of the one-time static object (from ext_004D2590) at dst[1].)
extern void ext_004D26F0(DWORD* dst, DWORD value);
// Known callee 0x004D2710: storeValueWithStaticObjectAddr (Writes value into dst[0] and the address returned by initStaticObjectOnce_004D25F0 into dst[1].)
extern void ext_004D2710(DWORD* dst, DWORD value);
// Known callee 0x004D2730: storeValueAndStaticObjectAddr_004D2730 (Writes the value into dst[0] and the address returned by initStaticObjectOnce_004D2650 into dst[1].)
extern void ext_004D2730(DWORD* dst, DWORD value);
// Known callee 0x00671F30: sub_00671F30 (Zeroes the first dword of the output buffer and stores the global mem_00B599BC into the second dword.)
extern void ext_00671F30(DWORD* out);

// @name NMData::TransitionEventData::vfunc_15
// @class NMData::TransitionEventData
// @summary Dispatches on a 32-bit key to one of the static-pair store helpers (or the key-0x317 path, selected by a field at +0x190 == 4), otherwise forwards to ext_004C3410; returns the output pointer.
// @field NMData::TransitionEventData +0x190 uint32_t field_0x190
DWORD* __thiscall fn_004D2750(void* self, DWORD* out, DWORD key) {
    if (key == 0x2EC) {
        ext_004D2710(out, static_cast<DWORD>(reinterpret_cast<uintptr_t>(self)));
    } else if (key == 0x317) {
        DWORD field190 = *reinterpret_cast<DWORD*>(static_cast<uint8_t*>(self) + 0x190);
        if (field190 == 4) {
            ext_004D2730(out, static_cast<DWORD>(reinterpret_cast<uintptr_t>(self)));
        } else {
            ext_00671F30(out);
        }
    } else if (key == 0x37F) {
        ext_004D26F0(out, static_cast<DWORD>(reinterpret_cast<uintptr_t>(self)));
    } else {
        ext_004C3410(self, out, key);
    }
    return out;
}
} // namespace lift_004D2750

// [0x004D0E10] NMData::TransitionEventData::vfunc_21 (510 bytes)
namespace lift_004D0E10 {
extern void ext_004C24C0(void* self, void* obj);
extern void ext_004275E0(void* dst, void* obj);
extern int32_t ext_004D0B20(const void* name);
extern void ext_004D0D40(void* self, const void* name);
extern void ext_0046C0A0(void* out_float, void* in_item);
extern uint32_t ext_0063EFE0(void* self, const char* name);
extern uint32_t ext_0063F530(void* self, uint32_t a1, uint32_t a2, uint32_t a3);
extern uint32_t mem_00A9FAE4;
extern uint32_t mem_00A9F8F8;
extern uint32_t mem_00A9F2F8;
extern uint32_t mem_00A9EDE8;
// MSVCP std::string ctor/dtor import slots; replaced by real std::string.
extern uint32_t mem_00924FE8;
extern uint32_t mem_00924FF4;

// Sentinel "not found" values returned by the lookup helpers.
static inline bool isSentinel(uint32_t v) {
    return v == 0x00B53A34u || v == 0x00B53B30u || v == 0x00B53AB0u ||
           v == 0x00B53A70u || v == 0x00B53AF0u;
}

static inline const char* asCString(uint32_t addr) {
    return reinterpret_cast<const char*>(static_cast<uintptr_t>(addr));
}

static inline void* asPtr(uint32_t addr) {
    return reinterpret_cast<void*>(static_cast<uintptr_t>(addr));
}

// @name NMData::TransitionEventData::vfunc_21
// @class NMData::TransitionEventData
// @summary Calls the base vfunc_21, resolves name-table indices from obj lookups, sets m_momentumScaleFactor, and dispatches vslot 21 on the embedded object at +0x198.
// @field NMData::TransitionEventData +0x164 uint32_t field_0x164
// @field NMData::TransitionEventData +0x188 int32_t field_0x188
// @field NMData::TransitionEventData +0x190 uint32_t field_0x190
// @field NMData::TransitionEventData +0x194 float m_momentumScaleFactor
// @field NMData::TransitionEventData +0x198 uint8_t field_0x198
void fn_004D0E10(void* self, void* obj) {
    ext_004C24C0(self, obj);
    (void)&mem_00924FE8;
    (void)&mem_00924FF4;

    {
        std::string name_a;
        uint32_t r1 = ext_0063EFE0(obj, asCString(mem_00A9FAE4));
        ext_004275E0(&name_a, asPtr(r1));
        lift_field<int32_t>(self, 0x188) = ext_004D0B20(&name_a);
    }

    uint32_t r2 = ext_0063EFE0(obj, asCString(mem_00A9F8F8));
    if (isSentinel(r2)) {
        lift_field<uint32_t>(self, 0x190) = 0;
    } else {
        std::string name_b;
        ext_004275E0(&name_b, asPtr(r2));
        ext_004D0D40(self, &name_b);
    }

    uint32_t r3 = ext_0063EFE0(obj, asCString(0x009473C0u));
    if (isSentinel(r3)) {
        lift_field<float>(self, 0x194) = 1.0f;
    } else {
        uint32_t item = r3;
        ext_0046C0A0(&lift_field<float>(self, 0x194), &item);
    }

    uint32_t r4 = ext_0063F530(obj, mem_00A9EDE8, 0, 1);
    if (!isSentinel(r4)) {
        uint32_t r5 = ext_0063F530(asPtr(r4), mem_00A9F2F8, 0, 1);
        uint32_t arg = isSentinel(r5) ? 0x00B53B30u : r5;

        uint8_t* embedded = static_cast<uint8_t*>(self) + 0x198;
        uint32_t vptr = lift_field<uint32_t>(self, 0x198);
        void* vfn = reinterpret_cast<void**>(static_cast<uintptr_t>(vptr))[21];
        reinterpret_cast<void (*)(void*, uint32_t)>(vfn)(embedded, arg);
    }

    lift_field<uint32_t>(self, 0x164) = 0;
}
} // namespace lift_004D0E10

// [0x004D2A20] NMData::TransitionEventData::vfunc_84 (119 bytes)
namespace lift_004D2A20 {
// Callee 0x004D1F00: sub_004D1F00 (186B), thiscall, no stack args; receives this = [self+0x18c].
extern void __thiscall ext_004D1F00(void* self);
// Callee 0x004D27D0: sub_004D27D0 (338B), thiscall, no stack args; receives this = [self+0x18c].
extern void __thiscall ext_004D27D0(void* self);
// Callee 0x004D2930: sub_004D2930 (236B), thiscall, no stack args; receives this = [self+0x18c].
extern void __thiscall ext_004D2930(void* self);

// @name NMData::TransitionEventData::vfunc_84
// @class NMData::TransitionEventData
// @summary Gated setter for the cached value at +0x184: when enabled and the argument differs from it, dispatch to one of three helpers based on the argument's position relative to +0x15c and +0x160, then store the argument.
// @field NMData::TransitionEventData +0x15c int32_t field_0x15c
// @field NMData::TransitionEventData +0x160 int32_t field_0x160
// @field NMData::TransitionEventData +0x17c uint8_t field_0x17c
// @field NMData::TransitionEventData +0x184 int32_t field_0x184
// @field NMData::TransitionEventData +0x18c void* field_0x18c
extern void __thiscall fn_004D2A20(void* self, int32_t arg) {
    if (lift_field<uint8_t>(self, 0x17C) == 0) {
        return;
    }

    if (lift_field<int32_t>(self, 0x184) == arg) {
        return;
    }

    const int32_t lo = lift_field<int32_t>(self, 0x15C);
    const int32_t hi = lift_field<int32_t>(self, 0x160);

    if (arg == lo) {
        ext_004D27D0(lift_field<void*>(self, 0x18C));
    } else if (arg > lo && arg < hi) {
        ext_004D1F00(lift_field<void*>(self, 0x18C));
    } else if (arg == hi) {
        ext_004D2930(lift_field<void*>(self, 0x18C));
    }

    lift_field<int32_t>(self, 0x184) = arg;
}
} // namespace lift_004D2A20
