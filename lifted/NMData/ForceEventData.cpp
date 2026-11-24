// Lifted C++ translation unit: lifted/NMData/ForceEventData.cpp
#include "lift_compat.h"
extern "C" void __thiscall ext_004C64D0(void* self, uint32_t arg);
#include <string>
extern "C" void* __thiscall ext_006404E0(void* self, void* arg);
extern "C" void* mem_00A9EF28;

extern "C" void* __thiscall ext_006404E0(void* self, void* arg);
extern "C" void* mem_00A9EF28;
// @class NMData::ForceEventData
// @summary Reads the dword at this+0x184; if non-zero, calls ext_004C64D0 on the subobject at this+0x184 with a single zero argument.
// @field NMData::ForceEventData +0x184 uint32_t field_0x184
void fn_004C66F0(void* self) {
    void* sub = static_cast<uint8_t*>(self) + 0x184;
    if (lift_field<uint32_t>(self, 0x184) != 0) {
        ext_004C64D0(sub, 0);
    }
}
#include <new>
extern "C" void* ext_006A5C62(size_t size);
extern "C" void* ext_004C6520(void* self, void* owner);

extern "C" void* ext_006A5C62(size_t size);
extern "C" void* ext_004C6520(void* self, void* owner);
// @class NMData::ForceEventData
// @summary Auto-lifted identical-shape clone of 0x004DDED0 (NMData::AnimationEventData::vfunc_59).
// @field NMData::ForceEventData +0x0 void** vptr
extern "C" void __thiscall fn_004C4DD0(void* self, void* a) {
    using VFn = void(__thiscall*)(void* self, void* arg);
    void* g = mem_00A9EF28;
    void* r = ext_006404E0(a, g);
    void** vt = *reinterpret_cast<void***>(self);
    reinterpret_cast<VFn>(vt[22])(self, r);
}

// [0x004C4E40] NMData::ForceEventData::vfunc_60 (34 bytes)
// @name NMData::ForceEventData::NotifyEvent0x266
// @class NMData::ForceEventData
// @summary Invokes virtual slot 15 (vtable +0x3C) on self with (arg, 0x266, 0), then returns arg.
// @field NMData::ForceEventData +0x00 void** vtable
void* fn_004C4E40(void* self, void* arg) {
    void** vtbl = lift_field<void**>(self, 0x00);
    using Slot15 = void (*)(void* self, void* arg, uint32_t id, uint32_t flags);
    Slot15 slot = reinterpret_cast<Slot15>(vtbl[15]);
    slot(self, arg, 0x266u, 0u);
    return arg;
}

// [0x004C6710] NMData::ForceEventData::vfunc_17_off_C (99 bytes)
// @name NMData::ForceEventData::vfunc_17_off_C
// @class NMData::ForceEventData
// @summary Auto-lifted identical-shape clone of 0x004CFC30 (NMData::IncarnationEventData::vfunc_17_off_C).
void* fn_004C6710(void* self) {
    void* mem = ext_006A5C62(0x18C);
    if (mem == nullptr) {
        return nullptr;
    }
    void* owner = static_cast<unsigned char*>(self) - 0xC;
    return ext_004C6520(mem, owner);
}

// [0x004C1B20]
// @name NMData::ForceEventData::vfunc_73
// @class NMData::ForceEventData
// @summary Stores a [first, second] int pair into the event's range fields, widening an empty range by one, then calls ext_004C0340.
// @field NMData::ForceEventData +0x15c int32_t field_0x15c
// @field NMData::ForceEventData +0x160 int32_t field_0x160

// ext_004C0340: sub_004C0340 (thiscall, this in ECX, no stack args)
void __thiscall ext_004C0340(void* self);

void __thiscall vfunc_73(void* self, const int32_t* range) {
    int32_t first = range[0];
    int32_t second = range[1];

    lift_field<int32_t>(self, 0x15c) = first;
    lift_field<int32_t>(self, 0x160) = second;

    if (first >= second) {
        lift_field<int32_t>(self, 0x160) = first + 1;
    }

    ext_004C0340(self);
}

// [0x004C5350]
namespace lift_004C5350 {
// @name NMData::ForceEventData::vfunc_6_off_C
// @class NMData::ForceEventData
// @summary Computes a 4D vector with x=y=z from a subobject's float property and w=0.0f.
// @field NMData::ForceEventData +0x4 void** TransformInterface_vptr


extern uint32_t mem_00B40640;
extern float __thiscall ext_004C50C0(void* self);

void* __thiscall fn_004C5350(void* self, float* out_vec) {
    uint8_t* ti = static_cast<uint8_t*>(self) - 8;
    void** vtable = *reinterpret_cast<void***>(ti);
    using VFunc2 = void* (__thiscall*)(void*, uint32_t);
    auto vfunc = reinterpret_cast<VFunc2>(vtable[2]);
    void* obj = vfunc(ti, mem_00B40640);
    float val = ext_004C50C0(obj);
    out_vec[0] = val;
    out_vec[1] = val;
    out_vec[2] = val;
    out_vec[3] = 0.0f;
    return out_vec;
}
} // namespace lift_004C5350

// [0x004C4FA0]
namespace lift_004C4FA0 {
// @name NMData::ForceEventData::vfunc_2_off_C
// @class NMData::ForceEventData
// @summary Translates the TransformInterface subobject's matrix by the given 3D vector and notifies the base object.
// @field NMData::ForceEventData +0x4 void** TransformInterface_vptr

extern uint32_t mem_00B40640;
extern void __thiscall ext_00586D00(void* self);

void __thiscall fn_004C4FA0(void* self, const float* delta) {
    uint8_t* base = static_cast<uint8_t*>(self) - 0xC;
    void* transform_iface = base + 0x4;
    void** vtable = *reinterpret_cast<void***>(transform_iface);

    float matrix[16];
    auto get_tm = reinterpret_cast<void(__thiscall*)(void*, float*, int32_t, uint32_t)>(vtable[4]);
    get_tm(transform_iface, matrix, 0, mem_00B40640);

    matrix[12] += delta[0];
    matrix[13] += delta[1];
    matrix[14] += delta[2];

    auto set_tm = reinterpret_cast<void(__thiscall*)(void*, int32_t, float*, uint32_t)>(vtable[0]);
    set_tm(transform_iface, 0, matrix, mem_00B40640);

    ext_00586D00(base);
}
} // namespace lift_004C4FA0

// [0x004C60D0] NMData::ForceEventData::vfunc_14 (91 bytes)
namespace lift_004C60D0 {
// Known callee 0x004C2070: NMData::SeverEventData::vfunc_14 (thiscall, 2 stack args, callee-cleaned)
extern void* ext_004C2070(void* self, void* arg1, uint32_t arg2);
// Callee 0x004C5FE0: signature not recovered; assumed uint32_t(uint32_t), callee-cleaned
extern uint32_t ext_004C5FE0(uint32_t arg);
// Known callee 0x0055DA20: initDwordPair (stores two stack DWORDs into ECX object, returns it)
extern void* ext_0055DA20(void* self, uint32_t a, uint32_t b);
// Known callee 0x007D8700: identity on its first stack argument
extern uint32_t ext_007D8700(uint32_t arg0);
extern uint32_t mem_00B40640;

// @name NMData::ForceEventData::vfunc_14
// @class NMData::ForceEventData
// @summary If id != 0x94, forwards to SeverEventData::vfunc_14 and returns arg1; if id == 0x94, calls TransformInterface vfunc[3] on the global, post-processes the result, and returns the id as the object pointer.
// @field ForceEventData +0x04 void** TransformInterface_vptr
void* fn_004C60D0(void* self, void* arg1, uint32_t id) {
    if (id != 0x94) {
        ext_004C2070(self, arg1, id);
        return arg1;
    }

    // TransformInterface subobject lives at this+4; its vptr is at +0x4.
    char* tif = static_cast<char*>(self) + 0x4;
    void** vtbl = *reinterpret_cast<void***>(tif);
    using VFunc3 = uint32_t (*)(void* thisPtr, uint32_t arg);
    uint32_t v = reinterpret_cast<VFunc3>(vtbl[3])(tif, mem_00B40640);

    uint32_t r = ext_004C5FE0(ext_007D8700(v));

    void* obj = reinterpret_cast<void*>(static_cast<uintptr_t>(id));
    // NOTE: the original passes the caller's saved ESI as the second stack
    // argument (a prologue save-slot artifact). It is not recoverable in
    // portable C++, so 0 is passed here.
    ext_0055DA20(obj, r, 0);
    return obj;
}
} // namespace lift_004C60D0
