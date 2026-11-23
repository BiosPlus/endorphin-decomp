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
