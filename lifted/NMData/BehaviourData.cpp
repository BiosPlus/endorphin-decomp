// Lifted C++ translation unit: lifted/NMData/BehaviourData.cpp
#include "lift_compat.h"
#include <new>
#include <string>

extern "C" void* mem_00A9F240;
extern "C" void* mem_00AE29D0;
extern "C" void* __thiscall ext_006404E0(void* self, void* arg);
extern "C" void* ext_006A5C62(size_t size);
extern "C" void* ext_004AC750(void* self, void* owner);
extern "C" void __thiscall ext_0047D300(void* self, uint32_t arg);
extern "C" void __thiscall ext_004C1AF0(void* self, uint32_t arg);
extern "C" void ext_004C1B20(void* self, const int32_t* range);

// @class NMData::BehaviourData
// @summary Auto-lifted identical-shape clone of 0x004DDED0 (NMData::AnimationEventData::vfunc_59).
// @field NMData::BehaviourData +0x0 void** vptr
extern "C" void __thiscall fn_004A9B70(void* self, void* a) {
    using VFn = void(__thiscall*)(void* self, void* arg);
    void* g = mem_00A9F240;
    void* r = ext_006404E0(a, g);
    void** vt = *reinterpret_cast<void***>(self);
    reinterpret_cast<VFn>(vt[22])(self, r);
}

// @name NMData::BehaviourData::vfunc_17_off_C
// @class NMData::BehaviourData
// @summary Auto-lifted identical-shape clone of 0x004CFC30 (NMData::IncarnationEventData::vfunc_17_off_C).
void* fn_004AC9F0(void* self) {
    void* mem = ext_006A5C62(0x3E8);
    if (mem == nullptr) {
        return nullptr;
    }
    void* owner = static_cast<unsigned char*>(self) - 0xC;
    return ext_004AC750(mem, owner);
}

// @class NMData::BehaviourData
// @summary Stores the byte argument at +0x17C, then tail-calls ext_0047D300 on the global object at mem_00AE29D0 passing the dword at +0x168 as its argument.
// @field NMData::BehaviourData +0x168 uint32_t field_0x168
// @field NMData::BehaviourData +0x17C uint8_t field_0x17c
extern "C" void __thiscall fn_00486C20(void* self, uint8_t v) {
    lift_field<uint8_t>(self, 0x17C) = v;
    uint32_t f = lift_field<uint32_t>(self, 0x168);
    ext_0047D300(mem_00AE29D0, f);
}
// Known callee 0x004C1B20: NMData::ForceEventData::vfunc_73 (thiscall: self in ecx, range pointer on stack).
extern "C" void __thiscall ext_004C1B20(void* self, const int32_t* range);
// Tail-jump target 0x0047D300 (sub_0047D300): receives ecx = mem_00AE29D0 and one stack arg = field_0x168.
extern "C" void __thiscall ext_0047D300(void* self, uint32_t value);
// Global object pointer loaded into ecx before the tail jump.

extern "C" void __thiscall ext_004C1B20(void* self, const int32_t* range);
// Tail-jump target 0x0047D300 (sub_0047D300): receives ecx = mem_00AE29D0 and one stack arg = field_0x168.
extern "C" void __thiscall ext_0047D300(void* self, uint32_t value);
// Global object pointer loaded into ecx before the tail jump.
// @field NMData::BehaviourData +0x168 uint32_t field_0x168

#include "lift_compat.h"

extern "C" void* mem_00AE29D0;
extern "C" void __thiscall ext_004C1AF0(void* self, uint32_t arg);
extern "C" void __thiscall ext_0047D300(void* self, uint32_t arg);

void __thiscall fn_004A9C60(void* self, uint32_t arg) {
    ext_004C1AF0(self, arg);
    uint32_t field_0x168 = lift_field<uint32_t>(self, 0x168);
    ext_0047D300(mem_00AE29D0, field_0x168);
}
#include <cstdint>
#include <cstring>

// [0x004A9C90] NMData::BehaviourData::vfunc_73 (35 bytes)
// @name NMData::BehaviourData::vfunc_73
// @class NMData::BehaviourData
// @summary Forwards the range pointer to NMData::ForceEventData::vfunc_73, then tail-calls sub_0047D300 with mem_00AE29D0 as this and field_0x168 as its argument.
// @field NMData::BehaviourData +0x168 uint32_t field_0x168
void __thiscall fn_004A9C90(void* self, const int32_t* range) {
    ext_004C1B20(self, range);
    uint32_t field_0x168 = lift_field<uint32_t>(self, 0x168);
    ext_0047D300(mem_00AE29D0, field_0x168);
}

// [0x004A9A70]
namespace lift_004A9A70 {
// @name NMData::BehaviourData::vfunc_81
// @class NMData::BehaviourData
// @summary Assigns a string field at +0x328, invokes vfunc_82 with the looked-up object, and notifies subobject at +0x180.
// @field NMData::BehaviourData +0x0 void** vptr
// @field NMData::BehaviourData +0x180 void* field_0x180
// @field NMData::BehaviourData +0x328 std::string field_0x328


    int32_t __cdecl ext_00594000(void);
    void* __fastcall ext_00594620(void* self, void* /*edx*/, void* arg0);
    void __fastcall ext_004EC300(void* self, void* /*edx*/, void* arg0);
    extern uint32_t mem_00924FDC;

extern void __fastcall fn_004A9A70(void* self, void* /*edx*/, void* arg0) {
    int32_t mgr = ext_00594000();
    if (!mgr) {
        return;
    }

    void* obj = ext_00594620((void*)(uintptr_t)mgr, nullptr, arg0);
    if (!obj) {
        return;
    }

    void* str_field = (uint8_t*)self + 0x328;
    using assign_fn_t = void* (__fastcall*)(void*, void*, void*);
    ((assign_fn_t)(uintptr_t)mem_00924FDC)(str_field, nullptr, arg0);

    void** vtable = *(void***)self;
    using vfunc_82_t = void (__fastcall*)(void*, void*, void*);
    ((vfunc_82_t)vtable[0x148 / 4])(self, nullptr, obj);

    void* subobj = *(void**)((uint8_t*)self + 0x180);
    ext_004EC300(subobj, nullptr, str_field);
}
} // namespace lift_004A9A70

// [0x004A9BA0] NMData::BehaviourData::vfunc_14 (97 bytes)
namespace lift_004A9BA0 {
// Known callee 0x004C2070: NMData::SeverEventData::vfunc_14 (Dispatches property/event query on SeverEventData; handles 0x8c/0x117 via sub_004C1BF0 and sub_0055DA20, otherwise delegates to vfunc_14 base.)
extern void* __thiscall ext_004C2070(void* self, void* arg1, uint32_t arg2);
// Known callee 0x00661650 (35 bytes, signature unrecovered): called thiscall with ecx = arg1 and one pointer argument.
extern void __thiscall ext_00661650(void* self, void* arg);

// @name NMData::BehaviourData::vfunc_14
// @class NMData::BehaviourData
// @summary Property/event query dispatcher: id 0x1B3 forwards to vcall slot 14 of the child at +0x180, id 0x117 calls ext_00661650 on this+0x364, any other id defers to SeverEventData::vfunc_14. Always returns arg1.
// @field BehaviourData +0x180 void* field_0x180
// @field BehaviourData +0x364 uint8_t field_0x364 (address taken only, passed to ext_00661650)
void* __thiscall fn_004A9BA0(void* self, void* arg1, uint32_t arg2) {
    if (arg2 == 0x1B3) {
        // child = this->field_0x180; sub = child + 0x10; call sub->vtbl[14](arg1, 0x1B3)
        uint8_t* child = lift_field<uint8_t*>(self, 0x180);
        uint8_t* sub = child + 0x10;
        void** vtbl = *reinterpret_cast<void***>(sub);
        using VFn = void* (__thiscall*)(void* self_, void* a1, uint32_t a2);
        VFn fn = reinterpret_cast<VFn>(vtbl[14]);
        fn(sub, arg1, 0x1B3);
        return arg1;
    }
    if (arg2 == 0x117) {
        ext_00661650(arg1, reinterpret_cast<uint8_t*>(self) + 0x364);
        return arg1;
    }
    ext_004C2070(self, arg1, arg2);
    return arg1;
}
} // namespace lift_004A9BA0

// [0x004C8440]
namespace lift_004C8440 {
extern void __thiscall ext_004026E0(void* self);
extern void __thiscall ext_004C28C0(void* self, void* arg);

// @name NMData::BehaviourData::vfunc_1_off_154
// @class NMData::BehaviourData
// @summary Thunk at +0x154 (HasDependentSelection) that queries arg0->vfunc_0x34 into a local buffer, passes it to ext_004C28C0 on BehaviourData, and destroys the buffer
void __thiscall fn_004C8440(void* self, void* arg0) {
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
    reinterpret_cast<VFunc34>(vtbl[0x34 / 4])(arg0, &local_buf);

    void* behaviour_data = reinterpret_cast<uint8_t*>(self) - 0x154;
    ext_004C28C0(behaviour_data, &local_buf);

    ext_004026E0(&local_buf);
}
} // namespace lift_004C8440

// [0x004A9AC0]
namespace lift_004A9AC0 {
// Known callee 0x00494000: setDwordTriple. Stores three arguments into the first three DWORDs of the object and returns it.
extern void* ext_00494000(void* self, uint32_t arg1, uint32_t arg2, uint32_t arg3);
// Known callee 0x004940E0: Unknown::ToggleMaskIfTestMismatch. XORs mask into the dword at [self] when (any mask bit set) != flag.
extern void ext_004940E0(void* self, uint32_t mask, uint8_t flag);

// @name NMData::BehaviourData::vfunc_0_off_154
// @class NMData::BehaviourData
// @summary Writes two {0,0,8}-derived triples (with mask toggles 0x1000/0x2000 and 0x1000) to the first two out-pointers, and stores 2 into the last two out-pointers.
void fn_004A9AC0(uint32_t* out1, uint32_t* out2, uint32_t* out3, uint32_t* out4) {
    uint32_t scratch1[3] = {0, 0, 0};
    const uint32_t* t1 = static_cast<const uint32_t*>(ext_00494000(scratch1, 0, 0, 8));
    out1[0] = t1[0];
    out1[1] = t1[1];
    out1[2] = t1[2];
    ext_004940E0(out1, 0x1000, 1);
    ext_004940E0(out1, 0x2000, 1);

    uint32_t scratch2[3] = {0, 0, 0};
    const uint32_t* t2 = static_cast<const uint32_t*>(ext_00494000(scratch2, 0, 0, 8));
    out2[0] = t2[0];
    out2[1] = t2[1];
    out2[2] = t2[2];
    ext_004940E0(out2, 0x1000, 1);

    *out3 = 2;
    *out4 = 2;
}
} // namespace lift_004A9AC0

// [0x004ABF60]
namespace lift_004ABF60 {
extern void (*mem_00925134)();
extern void ext_00596660(void* self, void** out, void* a2, int32_t* first, void* a4, int32_t* last);

// @name NMData::BehaviourData::vfunc_87
// @class NMData::BehaviourData
// @summary Clears active behaviour state, notifies child object, erases int32 range, and deletes subobject
// @field NMData::BehaviourData +0x10 void* field_0x10
// @field NMData::BehaviourData +0x184 uint32_t field_0x184
// @field NMData::BehaviourData +0x2f0 void* field_0x2f0
// @field NMData::BehaviourData +0x3d8 uint8_t field_0x3d8
// @field NMData::BehaviourData +0x3dc int32_t* field_0x3dc
// @field NMData::BehaviourData +0x3e0 int32_t* field_0x3e0
void fn_004ABF60(void* self) {
    if (lift_field<uint32_t>(self, 0x184) == 0) {
        return;
    }

    void* obj = lift_field<void*>(self, 0x10);
    if (obj != nullptr) {
        void* inner = lift_field<void*>(obj, 0x10);
        void** vtable = lift_field<void**>(inner, 0x0);
        using Fn = void(__thiscall*)(void*);
        reinterpret_cast<Fn>(vtable[5])(inner);
    }

    uint8_t* vec = reinterpret_cast<uint8_t*>(self) + 0x3D8;
    int32_t* last = lift_field<int32_t*>(self, 0x3E0);
    if (lift_field<int32_t*>(self, 0x3DC) > last) {
        mem_00925134();
    }

    int32_t* first = lift_field<int32_t*>(vec, 0x4);
    if (first > lift_field<int32_t*>(vec, 0x8)) {
        mem_00925134();
    }

    void* out[2];
    ext_00596660(vec, out, vec, first, vec, last);

    void* sub = lift_field<void*>(self, 0x2F0);
    if (sub != nullptr) {
        void** vtable = lift_field<void**>(sub, 0x0);
        using DtorFn = void(__thiscall*)(void*, int);
        reinterpret_cast<DtorFn>(vtable[0])(sub, 1);
    }

    lift_field<uint32_t>(self, 0x2F0) = 0;
    lift_field<uint32_t>(self, 0x184) = 0;
}
} // namespace lift_004ABF60

// [0x004ABE70] NMData::BehaviourData::vfunc_8_off_C (145 bytes)
namespace lift_004ABE70 {
// Known callee 0x00493EE0: dispatchVirtualSlot154OfPointedObject (Loads the object pointer stored at *ecx; if non-null, calls its vtable slot at +0x154 with the object as this and returns that result (tail call).)
extern void* ext_00493EE0(void* ecx);
// Known callee 0x00594000: sub_00594000 (Returns global int32 value from mem_00B40D08.)
extern int32_t ext_00594000(void);
// Import slot for MSVCR80!_invalid_parameter_noinfo (debug iterator checks); metadata-only reference.
extern int mem_00925134;

// @name NMData::BehaviourData::vfunc_8_off_C
// @class NMData::BehaviourData
// @summary Stores a byte flag, forwards it to vtable slot 8 of each element in a pointer vector (+0x3d0..+0x3d4), then calls ext_00594000 and dispatches ext_00493EE0 on the result plus 0x258.
// @field NMData::BehaviourData +0x3d0 void** field_0x3d0
// @field NMData::BehaviourData +0x3d4 void** field_0x3d4
// @field NMData::BehaviourData +0x5c uint8_t field_0x5c

// Virtual method at vtable slot 8 of a subobject: void __thiscall(this, uint8_t).
typedef void (__thiscall *SubobjectSlot8Fn)(void* self, uint8_t flag);

void __thiscall fn_004ABE70(void* self, uint8_t al) {
    (void)&mem_00925134;
    lift_field<uint8_t>(self, 0x5c) = al;

    void** first = lift_field<void**>(self, 0x3d0);
    void** last = lift_field<void**>(self, 0x3d4);
    if (first == nullptr || first == last) {
        return;
    }

    for (void** it = first; it != lift_field<void**>(self, 0x3d4); ++it) {
        void* obj = *it;
        // Subobject at +0xc: its vptr is read from obj+0xc, slot 8 is at vtable+0x20.
        void** vtbl = lift_field<void**>(obj, 0x0c);
        void* slot = lift_field<void*>(vtbl, 0x20);
        auto fn = reinterpret_cast<SubobjectSlot8Fn>(slot);
        fn(static_cast<uint8_t*>(obj) + 0x0c, lift_field<uint8_t>(self, 0x5c));
    }

    int32_t global = ext_00594000();
    void* ecx = reinterpret_cast<void*>(static_cast<uintptr_t>(static_cast<uint32_t>(global)) + 0x258);
    ext_00493EE0(ecx);
}
} // namespace lift_004ABE70

// [0x004AA020] NMData::BehaviourData::vfunc_34 (148 bytes)
namespace lift_004AA020 {
// Known callee 0x00493E40: forwardVtableSlot194 (tail-jumps to a vtable slot, forwarding one stack argument)
extern uintptr_t ext_00493E40(void* self, uintptr_t arg);
// Known callee 0x00493E70: forwardVtable198_viaFirstField (dispatches to the first-field object's vtable slot +0x198)
extern uintptr_t ext_00493E70(void* self);
// Known callee 0x00528B90: Unknown::setPeerWithBackLink (stores peer at this+0x04; if non-null, writes this into peer+0x08)
extern void ext_00528B90(void* self, void* peer);
// Callee 0x005B5AF0 (sub_005B5AF0, 92B): one stack argument, returns a value
extern uintptr_t ext_005B5AF0(uintptr_t arg);
extern int mem_00B40640;

// Virtual slot 3 of the embedded interface subobject at this+0x04.
using InterfaceSlot3Fn = uintptr_t (*)(void* self, uintptr_t a, uintptr_t b, uintptr_t c);

// @name NMData::BehaviourData::vfunc_34
// @class NMData::BehaviourData
// @summary Calls interface slot 3 on this+0x04, resolves the result through helpers; if the resolved object is non-null, forwards its peer link to this+0x0C and returns it.
// @field NMData::BehaviourData +0x04 void** field_0x04
// @field NMData::BehaviourData +0x0C void* field_0x0c
uintptr_t fn_004AA020(void* self, void* obj) {
    char* base = static_cast<char*>(self);

    // Argument pointer: this+0x0C when self is non-null, otherwise null.
    void* ptrA = self ? static_cast<void*>(base + 0x0C) : nullptr;

    // Interface subobject at this+0x04: load its vptr and call slot 3 with this = &this->field_0x04.
    void** vptr = lift_field<void**>(self, 0x04);
    auto slot3 = reinterpret_cast<InterfaceSlot3Fn>(vptr[3]);
    uintptr_t g = static_cast<uint32_t>(mem_00B40640);
    uintptr_t r1 = slot3(base + 0x04, g, reinterpret_cast<uintptr_t>(ptrA), 0);

    uintptr_t t = ext_005B5AF0(r1);

    uintptr_t r2 = ext_00493E40(obj, t);
    if (r2 == 0) {
        return 0;
    }

    void* resolved = reinterpret_cast<void*>(ext_00493E70(obj));
    ext_00528B90(base + 0x0C, resolved);
    return reinterpret_cast<uintptr_t>(resolved);
}
} // namespace lift_004AA020

// [0x004ABDF0]
namespace lift_004ABDF0 {
// @name NMData::BehaviourData::vfunc_15
// @class NMData::BehaviourData
// @summary Dispatches on a 32-bit key to populate an output pair via BehaviourData-specific or base DesiredPoseEventData helpers, returning the output pointer.


extern DWORD* ext_004ABAA0(DWORD* dst, DWORD value);
extern DWORD* ext_004ABAC0(DWORD* dst, DWORD value);
extern DWORD* __thiscall ext_004C3410(void* self, DWORD* out, DWORD key);
extern void ext_00671F30(uint32_t* out);
extern void ext_006404E0();
extern uint32_t mem_00A9F240;

DWORD* __thiscall fn_004ABDF0(void* self, DWORD* out, DWORD key) {
    (void)ext_006404E0;
    (void)mem_00A9F240;
    switch (key) {
        case 0x21B:
            ext_004ABAA0(out, static_cast<DWORD>(reinterpret_cast<uintptr_t>(self)));
            break;
        case 0x247:
            ext_004ABAC0(out, static_cast<DWORD>(reinterpret_cast<uintptr_t>(self)));
            break;
        case 0x361:
        case 0x386:
            ext_00671F30(reinterpret_cast<uint32_t*>(out));
            break;
        default:
            ext_004C3410(self, out, key);
            break;
    }
    return out;
}
} // namespace lift_004ABDF0

// [0x004ACCD0] NMData::BehaviourData::vfunc_82 (933 bytes)
namespace lift_004ACCD0 {
// @name NMData::BehaviourData::vfunc_82
// @class NMData::BehaviourData
// @summary Stores arg at +0x168, resolves two name-keyed lookups for the string at arg+0x458 (plus "_legacy"), then selects an element from the +0x2F4/+0x2FC range records (or the +0x180/+0x30 legacy path) and forwards it to ext_004AC8B0.
// @field NMData::BehaviourData +0x30 std::string field_0x30
// @field NMData::BehaviourData +0x168 uint32_t field_0x168
// @field NMData::BehaviourData +0x180 void* field_0x180
// @field NMData::BehaviourData +0x2F4 uint32_t field_0x2f4
// @field NMData::BehaviourData +0x2F8 uint32_t field_0x2f8
// @field NMData::BehaviourData +0x2FC uint32_t field_0x2fc
// @field NMData::BehaviourData +0x300 uint32_t field_0x300
// @field NMData::BehaviourData +0x304 int32_t field_0x304
// @field NMData::BehaviourData +0x308 uint32_t field_0x308
// @field NMData::BehaviourData +0x30C std::string field_0x30c
// @field NMData::BehaviourData +0x364 uint8_t field_0x364

extern void ext_004EE620(void* self);
extern uint32_t ext_004AD950(void* self, const void* name);
extern uint32_t ext_004AD960(void* self, const void* name);
extern uint32_t ext_004A9CE0(void* self);
extern void* ext_004A9E00(void* self, void* out, uint32_t value);
extern void ext_004AC8B0(void* self, void* elem);
extern void ext_004ABA70(void* out, uint32_t owner, uint32_t first, uint32_t unused, uint32_t last, const void* value);
extern uint32_t* ext_00410D10(void* self, uint32_t* out);
extern uint32_t* ext_00489320(void* self, uint32_t* out);
extern uint32_t ext_00401AC0(void* self);
extern void* ext_0041CCC0(void* self, uint32_t index);
extern int32_t ext_0041CD60(void* self);
extern uint32_t ext_0040D9F0(void* self, const void* arg);
extern uint8_t ext_0049AD40(const void* self, const void* other);
extern uint32_t* ext_0050E360(void* self, uint32_t index);
extern uint32_t ext_00593F20(void* self);
extern int32_t ext_00594000(void);
extern int mem_008848F2;
extern int mem_00924ECC;
extern int mem_00924FB0;
extern int mem_00924FC4;
extern int mem_00924FDC;
extern int mem_00924FEC;
extern int mem_00924FF4;
extern int mem_00941EC0;
extern int mem_00ADF358;
extern int mem_00ADF5C4;
extern int mem_00B58DFC;

static inline void* as_ptr(uint32_t v) {
    return reinterpret_cast<void*>(static_cast<uintptr_t>(v));
}

void fn_004ACCD0(void* self, uint32_t arg) {
    // MSVCP80 IAT slots and SEH scope-table reference: the string operations
    // below are implemented natively with std::string.
    (void)&mem_008848F2;
    (void)&mem_00924ECC;
    (void)&mem_00924FB0;
    (void)&mem_00924FC4;
    (void)&mem_00924FDC;
    (void)&mem_00924FEC;
    (void)&mem_00924FF4;

    uint32_t buf18[2] = {0u, 0u};
    uint32_t buf20[2] = {0u, 0u};

    lift_field<uint32_t>(self, 0x168) = arg;
    ext_004EE620(&lift_field<uint8_t>(self, 0x364));
    uint32_t a168 = lift_field<uint32_t>(self, 0x168);
    lift_field<uint32_t>(self, 0x2F4) = 0u;
    if (a168 == 0u) {
        return;
    }
    uint32_t g = static_cast<uint32_t>(mem_00ADF358);
    if (g == 0u) {
        return;
    }

    std::string& name = *reinterpret_cast<std::string*>(static_cast<uint8_t*>(as_ptr(a168)) + 0x458);
    lift_field<uint32_t>(self, 0x2F4) = ext_004AD950(as_ptr(g), &name);
    lift_field<uint32_t>(self, 0x2F8) = ext_004AD960(as_ptr(g), &name);

    std::string t1 = name + reinterpret_cast<const char*>(&mem_00941EC0);
    lift_field<uint32_t>(self, 0x2FC) = ext_004AD950(as_ptr(g), &t1);
    lift_field<uint32_t>(self, 0x300) = ext_004AD960(as_ptr(g), &t1);

    std::string& s30c = lift_field<std::string>(self, 0x30C);

    if (!s30c.empty()) {
        // Branch B: the +0x30C string is non-empty.
        if (lift_field<int32_t>(self, 0x304) < 0) {
            uint32_t a2 = lift_field<uint32_t>(self, 0x2FC);
            if (a2 != 0u) {
                uint32_t idx = lift_field<uint32_t>(self, 0x308);
                uint32_t n = ext_00401AC0(as_ptr(a2));
                if (idx < n) {
                    ext_004AC8B0(self, ext_0041CCC0(as_ptr(a2), idx));
                    return;
                }
            }
        }
        uint32_t a3 = lift_field<uint32_t>(self, 0x2F4);
        if (a3 == 0u) {
            lift_field<int32_t>(self, 0x304) = 0;
            return;
        }
        uint32_t n3 = ext_00401AC0(as_ptr(a3));
        uint32_t idx3 = static_cast<uint32_t>(lift_field<int32_t>(self, 0x304));
        bool reset = idx3 >= n3;
        if (!reset) {
            void* e = ext_0041CCC0(as_ptr(a3), idx3);
            reset = (s30c != *static_cast<std::string*>(e));
        }
        if (reset) {
            idx3 = 0u;
        }
        lift_field<int32_t>(self, 0x304) = static_cast<int32_t>(idx3);
        ext_004AC8B0(self, ext_0041CCC0(as_ptr(a3), idx3));
        return;
    }

    // Branch A: +0x30C is empty; it must equal the global string at mem_00ADF5C4.
    if (s30c == *reinterpret_cast<std::string*>(&mem_00ADF5C4)
        && *reinterpret_cast<uint8_t*>(&mem_00B58DFC) == 0u
        && ext_00594000() != 0) {
        uint32_t rec = ext_00593F20(as_ptr(static_cast<uint32_t>(ext_00594000())));
        int32_t cnt = ext_0041CD60(as_ptr(rec));
        lift_field<uint32_t>(self, 0x308) = 0xFFFFFFFFu;
        int32_t p304 = lift_field<int32_t>(self, 0x304);
        if (p304 < cnt) {
            uint32_t base = static_cast<uint32_t>(ext_00594000());
            uint32_t* el = ext_0050E360(static_cast<uint8_t*>(as_ptr(base)) + 0x298,
                                        static_cast<uint32_t>(p304));
            lift_field<void*>(self, 0x180) = as_ptr(*el);
            uint32_t r = ext_004A9CE0(self);
            std::string tmp;
            void* ps = ext_004A9E00(self, &tmp, r);
            lift_field<std::string>(self, 0x30) = *static_cast<std::string*>(ps);
            return;
        }
        lift_field<int32_t>(self, 0x304) = 0;
        lift_field<void*>(self, 0x180) = static_cast<uint8_t*>(self) + 0x188;
    }

    // Branch C: range record at +0x2F4.
    uint32_t a = lift_field<uint32_t>(self, 0x2F4);
    if (a != 0u) {
        uint32_t* rng = ext_00410D10(as_ptr(a), buf18);
        uint32_t* cur = ext_00489320(as_ptr(a), buf20);
        uint32_t find[2] = {0u, 0u};
        ext_004ABA70(find, cur[0], cur[1], rng[0], rng[1], &s30c);
        uint32_t* rng2 = ext_00410D10(as_ptr(a), buf20);
        if (ext_0049AD40(&find[1], rng2) != 0u) {
            uint32_t* c2 = ext_00489320(as_ptr(a), buf20);
            uint32_t idx = ext_0040D9F0(&find[1], c2);
            lift_field<int32_t>(self, 0x304) = static_cast<int32_t>(idx);
            ext_004AC8B0(self, ext_0041CCC0(as_ptr(a), idx));
            return;
        }
    }

    // Branch D: range record at +0x2FC.
    a = lift_field<uint32_t>(self, 0x2FC);
    if (a != 0u) {
        uint32_t* rng = ext_00410D10(as_ptr(a), buf20);
        uint32_t* cur = ext_00489320(as_ptr(a), buf18);
        uint32_t find[2] = {0u, 0u};
        ext_004ABA70(find, cur[0], cur[1], rng[0], rng[1], &s30c);
        uint32_t* rng2 = ext_00410D10(as_ptr(a), buf20);
        if (ext_0049AD40(&find[1], rng2) != 0u) {
            lift_field<int32_t>(self, 0x304) = -1;
            uint32_t* c2 = ext_00489320(as_ptr(a), buf20);
            uint32_t idx = ext_0040D9F0(&find[1], c2);
            lift_field<uint32_t>(self, 0x308) = idx;
            ext_004AC8B0(self, ext_0041CCC0(as_ptr(a), idx));
            return;
        }
    }

    // Branch E: fall back to index 0 of the +0x2F4 record.
    lift_field<int32_t>(self, 0x304) = 0;
    a = lift_field<uint32_t>(self, 0x2F4);
    if (a != 0u) {
        ext_004AC8B0(self, ext_0041CCC0(as_ptr(a), 0u));
    }
}
} // namespace lift_004ACCD0

// [0x004AB9D0]
namespace lift_004AB9D0 {
// @name NMData::BehaviourData::vfunc_22
// @class NMData::BehaviourData
// @summary Serializes BehaviourData fields, TargetSelection subobject, and base TriggeredEventData to XML.
// @field NMData::BehaviourData +0x180 void* field_0x180
// @field NMData::BehaviourData +0x304 int32_t field_0x304
// @field NMData::BehaviourData +0x30c std::string field_0x30c
// @field NMData::BehaviourData +0x368 void** field_0x368


extern uint32_t mem_00A9F3B0;
extern uint32_t mem_00A9F17C;
extern uint32_t mem_00A9F480;
extern void* mem_00924FF0;
extern uint32_t mem_00A9F6D4;
extern const char* mem_00941C04;

extern void ext_005006E0(void* a1, void* a2, uint32_t a3, uint32_t a4, uint32_t a5);
extern void* ext_00640110(void* self, uint32_t a1);
extern void ext_00427550(void* self, const char* name);
extern void ext_00640A50(void* node, int32_t val);
extern void* ext_00640390(void* self, const char* name, uint32_t a2);
extern void ext_004C1DE0(void* self, void* a1);

void __thiscall fn_004AB9D0(void* self, void* xmlNode) {
    uint8_t* obj = static_cast<uint8_t*>(self);

    uint8_t* field_180 = lift_field<uint8_t*>(obj, 0x180);
    ext_005006E0(field_180 + 0x11c, xmlNode, mem_00A9F17C, mem_00A9F3B0, 0);

    void* child1 = ext_00640110(xmlNode, mem_00A9F480);
    using c_str_fn = const char* (__thiscall*)(void*);
    const char* nameStr = reinterpret_cast<c_str_fn>(mem_00924FF0)(obj + 0x30c);
    ext_00427550(&child1, nameStr);

    void* child2 = ext_00640110(xmlNode, mem_00A9F6D4);
    int32_t val_304 = lift_field<int32_t>(obj, 0x304);
    ext_00640A50(child2, val_304);

    void* targetSel = ext_00640390(xmlNode, mem_00941C04, 0);
    void* subobj = obj + 0x368;
    void** vtbl = lift_field<void**>(obj, 0x368);
    using vfunc3_fn = void (__thiscall*)(void*, void*);
    reinterpret_cast<vfunc3_fn>(vtbl[3])(subobj, targetSel);

    ext_004C1DE0(self, xmlNode);
}
} // namespace lift_004AB9D0

// [0x004ABAE0]
namespace lift_004ABAE0 {
// @name NMData::BehaviourData::vfunc_84
// @class NMData::BehaviourData
// @summary Updates behaviour data state and notifies dependent objects for a given index.
// @field NMData::BehaviourData +0x15c int32_t field_0x15c
// @field NMData::BehaviourData +0x160 int32_t field_0x160
// @field NMData::BehaviourData +0x168 void* field_0x168
// @field NMData::BehaviourData +0x17c uint8_t field_0x17c
// @field NMData::BehaviourData +0x184 void* field_0x184
// @field NMData::BehaviourData +0x328 std::string field_0x328
// @field NMData::BehaviourData +0x360 uint8_t field_0x360
// @field NMData::BehaviourData +0x364 uint8_t field_0x364
// @field NMData::BehaviourData +0x3c8 uint8_t field_0x3c8


void* __thiscall ext_0041CE40(void* self, const char* str);
uint32_t* __thiscall ext_00489320(uint32_t* self, uint32_t* out);
void* __thiscall ext_004ECA30(void* self);
void __thiscall ext_0051E3D0(void* self);
void __thiscall ext_0051E440(void* self);
void __thiscall ext_0051EAC0(void* self);
void* __cdecl ext_00594000(void);
void* __fastcall ext_00594640(void* self);
void __thiscall ext_005F3590(void* self);
void* __thiscall ext_005F3A30(void* self, void* arg);
void* __cdecl ext_00660A50(void);
void* __thiscall ext_00660D10(void* self, void* arg);
void __thiscall ext_00660D40(void* self);

extern uintptr_t mem_00925134;
extern uintptr_t mem_00A8F2B8;
extern uintptr_t mem_00924FE4;
extern uintptr_t mem_00924FF4;

void __thiscall fn_004ABAE0(void* self, int32_t arg0) {
    char* edi = (char*)self;
    if (*(uint32_t*)(edi + 0x184) == 0 || *(uint8_t*)(edi + 0x17c) == 0) {
        return;
    }

    uint8_t guard1[4] = {};
    uint8_t guard2[4] = {};
    void* tmp_364 = ext_004ECA30(edi + 0x364);
    ext_00660D10(guard1, tmp_364);
    ext_005F3A30(guard2, edi + 0x3c8);

    void* mgr = ext_00594000();
    void* state_obj = ext_00594640(mgr);
    if (*(int32_t*)((char*)state_obj + 0x5f4) != 6) {
        ext_005F3590(guard2);
        ext_00660D40(guard1);
        return;
    }

    int32_t start_idx = *(int32_t*)(edi + 0x15c);
    int32_t end_idx = *(int32_t*)(edi + 0x160);
    void* target = *(void**)(edi + 0x184);

    if ((arg0 == -1 && start_idx == 0) || (arg0 == start_idx && start_idx != 0)) {
        if (*(uint8_t*)((char*)target + 9) != 0) {
            ext_0051E440(target);
        }
        ext_0051E3D0(*(void**)(edi + 0x184));
    } else if (arg0 > start_idx && arg0 < end_idx) {
        if (*(uint8_t*)((char*)target + 9) == 0) {
            ext_0051E3D0(target);
        }
    }

    start_idx = *(int32_t*)(edi + 0x15c);
    end_idx = *(int32_t*)(edi + 0x160);
    if (arg0 >= start_idx && arg0 < end_idx) {
        void* t = *(void**)(edi + 0x184);
        if (*(uint8_t*)((char*)t + 9) == 0) {
            ext_0051E3D0(t);
        }
        ext_0051EAC0(*(void**)(edi + 0x184));
    } else if (arg0 == end_idx) {
        ext_0051E440(*(void**)(edi + 0x184));
        void* disp = ext_00660A50();
        void* field_168 = *(void**)(edi + 0x168);
        void* vec_owner = *(void**)((char*)field_168 + 0x5ec);
        uint32_t* vec = (uint32_t*)((char*)vec_owner + 0x18);

        uint32_t cursor[2] = {};
        ext_00489320(vec, cursor);
        uint32_t* container = (uint32_t*)(uintptr_t)cursor[0];
        uint32_t* it = (uint32_t*)(uintptr_t)cursor[1];

        typedef void(__cdecl* invalid_param_fn)(void);
        typedef void(__thiscall* str_ctor_fn)(void*, const char*);
        typedef void(__thiscall* str_dtor_fn)(void*);
        invalid_param_fn invalid_param = (invalid_param_fn)mem_00925134;
        str_ctor_fn str_ctor = (str_ctor_fn)mem_00924FE4;
        str_dtor_fn str_dtor = (str_dtor_fn)mem_00924FF4;

        while (true) {
            uint32_t* vec_end = (uint32_t*)(uintptr_t)vec[2];
            if (vec[1] > (uintptr_t)vec_end) {
                invalid_param();
            }
            if (!container || container != vec) {
                invalid_param();
            }
            if (it == vec_end) {
                break;
            }

            if (*(uint8_t*)(edi + 0x360) == 0) {
                char str_buf[32];
                str_ctor(str_buf, *(const char**)(uintptr_t)mem_00A8F2B8);
                if (!container) {
                    invalid_param();
                }
                if ((uintptr_t)it >= container[2]) {
                    invalid_param();
                }
                void* item = (void*)(uintptr_t)*it;
                void** vtbl = *(void***)item;
                ((void(__thiscall*)(void*, void*))vtbl[0x3c / 4])(item, str_buf);
                str_dtor(str_buf);
            } else {
                void* unk_pair[2] = {};
                ext_0041CE40(unk_pair, *(const char**)(uintptr_t)mem_00A8F2B8);
                char str_buf2[32];
                str_ctor(str_buf2, (const char*)(uintptr_t)0x0093E0EC);
                if (!container) {
                    invalid_param();
                }
                if ((uintptr_t)it >= container[2]) {
                    invalid_param();
                }
                void* item = (void*)(uintptr_t)*it;
                void** disp_vtbl = *(void***)disp;
                void* res_pair[2] = {};
                void* res = ((void*(__thiscall*)(void*, void*, void*, void*, void*, uint32_t))disp_vtbl[0x14 / 4])(
                    disp, res_pair, unk_pair, str_buf2, item, 0);
                void* res_obj = ((void**)res)[1];
                void** res_vtbl = *(void***)res_obj;
                void* out_tmp[2] = {};
                ((void(__thiscall*)(void*, void*, void*))res_vtbl[0xa4 / 4])(res_obj, res, out_tmp);

                if (res_pair[1]) {
                    void** v = *(void***)res_pair[1];
                    void* dummy[2] = {};
                    ((void(__thiscall*)(void*, void*))v[0x78 / 4])(res_pair[1], dummy);
                }
                str_dtor(str_buf2);
                if (unk_pair[0]) {
                    void** v = *(void***)unk_pair[0];
                    void* dummy[2] = {};
                    ((void(__thiscall*)(void*, void*))v[0x78 / 4])(unk_pair[0], dummy);
                }
            }

            if ((uintptr_t)it >= container[2]) {
                invalid_param();
            }
            it++;
        }
    }

    ext_005F3590(guard2);
    ext_00660D40(guard1);
}
} // namespace lift_004ABAE0

// [0x004AD080]
namespace lift_004AD080 {
// @name NMData::BehaviourData::vfunc_21
// @class NMData::BehaviourData
// @summary Loads BehaviourData properties, target selection, and named sub-properties from XML/data node.
// @field NMData::BehaviourData +0x00 void** vptr
// @field NMData::BehaviourData +0x168 void* field_0x168
// @field NMData::BehaviourData +0x180 void* field_0x180
// @field NMData::BehaviourData +0x304 int32_t field_0x304
// @field NMData::BehaviourData +0x30C std::string field_0x30c
// @field NMData::BehaviourData +0x328 std::string field_0x328
// @field NMData::BehaviourData +0x368 void** field_0x368

void __thiscall ext_004C24C0(void* self, void* node);
uint32_t __thiscall ext_0063F530(void* self, const void* name, uint32_t a, uint32_t b);
uint32_t __thiscall ext_0063EFE0(void* self, const void* name);
void __cdecl ext_004275E0(void* dst, void* obj);
void __cdecl ext_0053F5F0(int32_t* out, uint32_t* prop);
void __thiscall ext_004AC270(void* self);
void __cdecl ext_0049FE40(uint32_t val, void* vec, uint32_t tag, uint32_t flag);
uint32_t __thiscall ext_004ABFF0(void* self, const char* name);
void __thiscall ext_00685AE0(void* self, const std::string* str);
void __thiscall ext_00682E00(void* self, const std::string* str);
void __thiscall ext_004EC300(void* self, std::string* str);

extern const char mem_00941C04[];
extern uint8_t mem_00B53A34[];
extern uint8_t mem_00B53B30[];
extern uint8_t mem_00B53AB0[];
extern uint8_t mem_00B53A70[];
extern uint8_t mem_00B53AF0[];
extern uint8_t* mem_00AE29D0;
extern uint32_t mem_00A9F838;
extern uint32_t mem_00A9F480;
extern uint32_t mem_00A9F6D4;
extern uint32_t mem_00A9F17C;
extern uint32_t mem_00A9F3B0;
extern const char* mem_00ADF9BC[];
extern const char* mem_00ADF9E0[];
extern void* mem_00924FDC;
extern void* mem_00924FE4;
extern void* mem_00924FF4;

static bool is_sentinel(uint32_t val) {
    return val == static_cast<uint32_t>(reinterpret_cast<uintptr_t>(mem_00B53A34)) ||
           val == static_cast<uint32_t>(reinterpret_cast<uintptr_t>(mem_00B53B30)) ||
           val == static_cast<uint32_t>(reinterpret_cast<uintptr_t>(mem_00B53AB0)) ||
           val == static_cast<uint32_t>(reinterpret_cast<uintptr_t>(mem_00B53A70)) ||
           val == static_cast<uint32_t>(reinterpret_cast<uintptr_t>(mem_00B53AF0));
}

static uint32_t normalize_sentinel(uint32_t val) {
    return is_sentinel(val) ? static_cast<uint32_t>(reinterpret_cast<uintptr_t>(mem_00B53B30)) : val;
}

void __thiscall fn_004AD080(void* self, void* node) {
    ext_004C24C0(self, node);

    uint32_t target_sel = normalize_sentinel(ext_0063F530(node, mem_00941C04, 0, 1));
    void** obj368 = lift_field<void**>(self, 0x368);
    using vfunc1_t = void(__thiscall*)(void*, uint32_t);
    reinterpret_cast<vfunc1_t>(obj368[1])(reinterpret_cast<uint8_t*>(self) + 0x368, target_sel);

    uint32_t name_key = mem_00A9F480;
    if (mem_00AE29D0 != nullptr && *reinterpret_cast<int32_t*>(mem_00AE29D0 + 0x538) < 5) {
        name_key = mem_00A9F838;
    }
    uint32_t str_prop = ext_0063EFE0(node, reinterpret_cast<const void*>(static_cast<uintptr_t>(name_key)));
    ext_004275E0(reinterpret_cast<uint8_t*>(self) + 0x30C, reinterpret_cast<void*>(static_cast<uintptr_t>(str_prop)));

    uint32_t int_prop = ext_0063EFE0(node, reinterpret_cast<const void*>(static_cast<uintptr_t>(mem_00A9F6D4)));
    ext_0053F5F0(&lift_field<int32_t>(self, 0x304), &int_prop);

    uint8_t* obj168 = lift_field<uint8_t*>(self, 0x168);
    if (obj168 != nullptr) {
        void** vtbl168 = *reinterpret_cast<void***>(obj168 + 0x4);
        using get_str_t = const std::string*(__thiscall*)(void*);
        const std::string* s = reinterpret_cast<get_str_t>(vtbl168[0x24 / 4])(obj168 + 0x4);
        using str_assign_t = void*(__thiscall*)(void*, const void*);
        reinterpret_cast<str_assign_t>(mem_00924FDC)(reinterpret_cast<uint8_t*>(self) + 0x328, s);
    }

    ext_004AC270(self);

    uint32_t check_val = normalize_sentinel(
        ext_0063F530(node, reinterpret_cast<const void*>(static_cast<uintptr_t>(mem_00A9F17C)), 0, 1));
    if (!is_sentinel(check_val)) {
        uint8_t* vec = lift_field<uint8_t*>(self, 0x180) + 0x11C;
        uint32_t val2 = normalize_sentinel(
            ext_0063F530(node, reinterpret_cast<const void*>(static_cast<uintptr_t>(mem_00A9F17C)), 0, 1));
        ext_0049FE40(val2, vec, mem_00A9F3B0, 1);
    }

    for (const char** it = mem_00ADF9BC; it < mem_00ADF9E0; ++it) {
        const char* prop_name = *it;
        void* item = reinterpret_cast<void*>(static_cast<uintptr_t>(ext_004ABFF0(self, prop_name)));
        if (item == nullptr) {
            continue;
        }
        uint32_t prop = ext_0063EFE0(node, prop_name);
        if (!is_sentinel(prop)) {
            void* prop_obj = reinterpret_cast<void*>(static_cast<uintptr_t>(prop));
            void** prop_vtbl = *reinterpret_cast<void***>(prop_obj);
            using get_tmp_str_t = std::string*(__thiscall*)(void*, std::string*);
            using str_dtor_t = void(__thiscall*)(void*);
            uint8_t tmp[28];
            reinterpret_cast<get_tmp_str_t>(prop_vtbl[2])(prop_obj, reinterpret_cast<std::string*>(tmp));
            ext_00685AE0(item, reinterpret_cast<const std::string*>(tmp));
            reinterpret_cast<str_dtor_t>(mem_00924FF4)(tmp);
        }
        using str_ctor_t = void*(__thiscall*)(void*, const char*);
        using str_dtor_t = void(__thiscall*)(void*);
        uint8_t name_str[28];
        reinterpret_cast<str_ctor_t>(mem_00924FE4)(name_str, prop_name);
        ext_00682E00(item, reinterpret_cast<const std::string*>(name_str));
        reinterpret_cast<str_dtor_t>(mem_00924FF4)(name_str);
    }

    void** vtbl = lift_field<void**>(self, 0x0);
    using vfunc148_t = void(__thiscall*)(void*, void*);
    reinterpret_cast<vfunc148_t>(vtbl[0x148 / 4])(self, lift_field<void*>(self, 0x168));

    ext_004EC300(lift_field<void*>(self, 0x180), &lift_field<std::string>(self, 0x328));
}
} // namespace lift_004AD080

// [0x004AD340]
namespace lift_004AD340 {
// @name NMData::BehaviourData::vfunc_88
// @class NMData::BehaviourData
// @summary Rebuilds behaviour data state, filters active items, clears cached arrays, and registers HelperGraphic render objects.
// @field NMData::BehaviourData +0x0C void* field_0x0c
// @field NMData::BehaviourData +0x10 void* field_0x10
// @field NMData::BehaviourData +0x168 void* field_0x168
// @field NMData::BehaviourData +0x180 void* field_0x180
// @field NMData::BehaviourData +0x184 void* field_0x184
// @field NMData::BehaviourData +0x2F0 void* field_0x2f0
// @field NMData::BehaviourData +0x328 uint8_t field_0x328
// @field NMData::BehaviourData +0x364 uint8_t field_0x364
// @field NMData::BehaviourData +0x3C8 uint8_t field_0x3c8
// @field NMData::BehaviourData +0x3CC int32_t* field_0x3cc
// @field NMData::BehaviourData +0x3D0 int32_t* field_0x3d0
// @field NMData::BehaviourData +0x3D8 uint8_t field_0x3d8
// @field NMData::BehaviourData +0x3DC int32_t* field_0x3dc
// @field NMData::BehaviourData +0x3E0 int32_t* field_0x3e0


void __thiscall ext_004EE200(void* self);
void* __thiscall ext_004ECA30(void* self);
void __thiscall ext_00660D10(void* self, void* arg);
void __thiscall ext_00660D40(void* self);
void __thiscall ext_004EC300(void* self, void* arg);
void* __cdecl ext_006A5C62(uint32_t size);
void* __thiscall ext_0051F9E0(void* self, void* arg);
void __thiscall ext_00520BD0(void* self);
void __thiscall ext_00596660(void* self, void** out, void* a2, int32_t* first, void* a4, int32_t* last);
uint8_t __cdecl ext_005F3E70(void* c1, void* first, void* c2, void* last, void* key_ptr, void* pred);
void __thiscall ext_0041A920(void* self, void* item);
void __cdecl ext_004AC4B0(int32_t* first, int32_t* last, int32_t count, void* ctx);
void* __thiscall ext_0041CEB0(void* self, void* out_str);
void* __cdecl ext_006A6E9E(void* src, int32_t vfdelta, void* src_type, void* dst_type, int32_t is_ref);
void* __thiscall ext_005F9B90(void* self, void* arg);
uint8_t __thiscall ext_00584C00(void* self);

extern const char mem_00941EC8[];
extern void* mem_00A2E2F8;
extern void* mem_00A36F20;
extern uint8_t (__cdecl* mem_00924FC0)(void* str, const char* cstr);
extern void (__thiscall* mem_00924FF4)(void* str);
extern void (__cdecl* mem_00925134)(void);
extern int32_t (__cdecl* mem_009251EC)(void* dst, size_t dst_size, const void* src, size_t count);
void __cdecl ext_00888C4D(void);

void __thiscall fn_004AD340(void* self) {
    uint8_t* base = static_cast<uint8_t*>(self);
    void* state_obj = base + 0x364;
    ext_004EE200(state_obj);
    void* list_obj = ext_004ECA30(state_obj);

    uint8_t guard[4];
    ext_00660D10(guard, list_obj);

    void* field180 = lift_field<void*>(base, 0x180);
    if (field180 != nullptr) {
        lift_field<uint8_t>(field180, 0x138) = 1;
    }

    ext_004EC300(lift_field<void*>(base, 0x180), base + 0x328);

    void* mem = ext_006A5C62(0x168);
    void* new_obj = (mem != nullptr) ? ext_0051F9E0(mem, lift_field<void*>(base, 0x180)) : nullptr;

    void* old_obj = lift_field<void*>(base, 0x2F0);
    if (new_obj != old_obj && old_obj != nullptr) {
        using dtor_fn = void(__thiscall*)(void*, int32_t);
        auto vtbl = *static_cast<void***>(old_obj);
        reinterpret_cast<dtor_fn>(vtbl[0])(old_obj, 1);
    }

    lift_field<void*>(base, 0x2F0) = new_obj;
    lift_field<void*>(base, 0x184) = new_obj;
    ext_00520BD0(new_obj);

    void* vec_3c8 = base + 0x3C8;
    int32_t* first_3c8 = lift_field<int32_t*>(base, 0x3CC);
    int32_t* last_3c8 = lift_field<int32_t*>(base, 0x3D0);
    void* erase_out[2];
    ext_00596660(vec_3c8, erase_out, vec_3c8, first_3c8, vec_3c8, last_3c8);

    int32_t* list_first = lift_field<int32_t*>(list_obj, 0x4);
    int32_t* list_last = lift_field<int32_t*>(list_obj, 0x8);
    if (list_first != nullptr && (list_last - list_first) != 0) {
        void* field168 = lift_field<void*>(base, 0x168);
        void* container = lift_field<void*>(field168, 0x5EC);
        void** it = lift_field<void**>(container, 0x1C);
        void** end = lift_field<void**>(container, 0x20);

        while (it != end) {
            void* item = *it;
            using get_next_fn = void*(__thiscall*)(void*, int32_t);
            using pred_fn = uint8_t(__thiscall*)(void*);

            void* cur = reinterpret_cast<get_next_fn>((*static_cast<void***>(item))[4])(item, 0);
            while (cur != nullptr) {
                auto cur_vtbl = *static_cast<void***>(cur);
                if (reinterpret_cast<pred_fn>(cur_vtbl[5])(cur) != 0) {
                    break;
                }
                cur = reinterpret_cast<get_next_fn>(cur_vtbl[4])(cur, 0);
            }

            if (cur != nullptr) {
                void* key = cur;
                if (ext_005F3E70(
                        list_obj,
                        lift_field<void*>(list_obj, 0x4),
                        list_obj,
                        lift_field<void*>(list_obj, 0x8),
                        &key,
                        container) != 0) {
                    ext_0041A920(vec_3c8, it);
                }
            }
            ++it;
        }

        int32_t* cur_first = lift_field<int32_t*>(base, 0x3CC);
        int32_t* cur_last = lift_field<int32_t*>(base, 0x3D0);
        ext_004AC4B0(cur_first, cur_last, static_cast<int32_t>(cur_last - cur_first), container);
    }

    int32_t* first_3dc = lift_field<int32_t*>(base, 0x3DC);
    int32_t* last_3e0 = lift_field<int32_t*>(base, 0x3E0);
    if (first_3dc != last_3e0) {
        int32_t* tail_end = lift_field<int32_t*>(base, 0x3E0);
        int32_t count = static_cast<int32_t>(tail_end - last_3e0);
        if (count > 0) {
            size_t bytes = static_cast<size_t>(count) * sizeof(int32_t);
            mem_009251EC(first_3dc, bytes, last_3e0, bytes);
        }
        lift_field<int32_t*>(base, 0x3E0) = first_3dc + count;
    }

    if (lift_field<void*>(base, 0x10) != nullptr) {
        uint8_t* vec_158 = static_cast<uint8_t*>(lift_field<void*>(base, 0x184)) + 0x158;
        uint8_t* it = lift_field<uint8_t*>(vec_158, 0x4);
        uint8_t* end = lift_field<uint8_t*>(vec_158, 0x8);

        while (it != end) {
            void* sub = lift_field<void*>(it, 0x20);
            using get_type_fn = int32_t(__thiscall*)(void*);
            int32_t type_id = reinterpret_cast<get_type_fn>((*static_cast<void***>(sub))[12])(sub);

            uint8_t* elem = it + 0x1C;
            bool is_helper = false;
            if (type_id == 5) {
                uint8_t str_buf[32];
                void* ret_str = ext_0041CEB0(elem, str_buf);
                is_helper = (mem_00924FC0(ret_str, mem_00941EC8) != 0);
                mem_00924FF4(str_buf);
            }

            if (is_helper) {
                void* obj_owner = lift_field<void*>(elem, 0x4);
                using get_obj_fn = void*(__thiscall*)(void*, void*);
                void* obj = reinterpret_cast<get_obj_fn>((*static_cast<void***>(obj_owner))[24])(obj_owner, elem);
                void* dyn = ext_006A6E9E(obj, 0, &mem_00A2E2F8, &mem_00A36F20, 0);
                ext_0041A920(base + 0x3D8, &dyn);

                void* f10 = lift_field<void*>(base, 0x10);
                void* target = lift_field<void*>(f10, 0x10);
                auto target_vtbl = *static_cast<void***>(target);
                using reg_fn = void(__thiscall*)(void*, void*);
                void* res = ext_005F9B90(dyn, base + 0xC);
                reinterpret_cast<reg_fn>(target_vtbl[3])(target, res);
            }

            it += 0x24;
        }

        uint8_t flag = ext_00584C00(self);
        void* vtbl_0c = lift_field<void*>(base, 0xC);
        using notify_fn = void(__thiscall*)(void*, uint32_t);
        reinterpret_cast<notify_fn>(static_cast<void**>(vtbl_0c)[8])(base + 0xC, flag);
    }

    ext_00660D40(guard);
    (void)&ext_00888C4D;
    (void)&mem_00925134;
}
} // namespace lift_004AD340
