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
