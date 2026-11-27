// Lifted C++ translation unit: lifted/NMData/SecondaryTwistAndSwingConstraint.cpp
#include "lift_compat.h"
#include <cstring>
extern "C" void ext_00661650(void* self);
extern "C" void ext_0058F6B0(void* self, void* arg1, uint32_t arg2);
#include <string>
#include <new>
extern "C" void* ext_006A5C62(size_t size);
extern "C" void* ext_0061D750(void* self, void* owner);

#include <new>
extern "C" void* ext_006A5C62(size_t size);
extern "C" void* ext_0061D750(void* self, void* owner);
// @summary Auto-lifted identical-shape clone of 0x0058F6B0 (NMData::AxisDefineSensorData::vfunc_14).
void* fn_00611830(void* self, void* arg1, uint32_t arg2) {
    if (arg2 == 0x159) {
        ext_00661650(arg1);
    } else {
        ext_0058F6B0(self, arg1, arg2);
    }
    return arg1;
}
#include <cstdint>

// [0x0061F990] sub_0061F990 (102 bytes)
namespace lift_0061F990 {
extern uint32_t ext_005DF1F0(void* self, DWORD arg2);
extern void* ext_0061EFD0(void* dst, DWORD value);
extern void* ext_0061EFF0(void* dst, DWORD value);
extern void* ext_0061F010(void* dst, DWORD value);

// @name NMData::SecondaryTwistAndSwingConstraint::vfunc_15
// @class NMData::SecondaryTwistAndSwingConstraint
// @summary Dispatches on arg2 (0x33B, 0x33E, 0x356) to one of three helpers, otherwise forwards to AnimatableTransform::vfunc_15; always returns self.
void* fn_0061F990(void* self, DWORD arg2) {
    // The original passes the live ECX register at entry as the helper's
    // value argument; that register is not recoverable in portable C++.
    // Zero is used here as a placeholder.
    DWORD value = 0;

    if (arg2 == 0x33B) {
        ext_0061EFF0(self, value);
    } else if (arg2 == 0x33E) {
        ext_0061F010(self, value);
    } else if (arg2 == 0x356) {
        ext_0061EFD0(self, value);
    } else {
        ext_005DF1F0(self, arg2);
    }
    return self;
}
} // namespace lift_0061F990

// [0x0061EAB0] NMData::SecondaryTwistAndSwingConstraint::vfunc_17_off_C (99 bytes)
namespace lift_0061EAB0 {
extern void* ext_006A5C62(size_t size);
extern void* ext_0061D750(void* self, void* owner);

// @name NMData::SecondaryTwistAndSwingConstraint::vfunc_17_off_C
// @class NMData::SecondaryTwistAndSwingConstraint
// @summary Auto-lifted identical-shape clone of 0x004CFC30 (NMData::IncarnationEventData::vfunc_17_off_C).
void* fn_0061EAB0(void* self) {
    void* mem = ext_006A5C62(0x164);
    if (mem == nullptr) {
        return nullptr;
    }
    void* owner = static_cast<unsigned char*>(self) - 0xC;
    return ext_0061D750(mem, owner);
}
} // namespace lift_0061EAB0

// [0x0061D4A0] NMData::SecondaryTwistAndSwingConstraint::vfunc_34 (683 bytes)
namespace lift_0061D4A0 {
// Local-object constructors/destructors and assignment helpers.
extern void __thiscall ext_005B5780(void* self, int32_t n);
extern void __thiscall ext_005B18E0(void* self, const std::string& src);
extern void __thiscall ext_005B1870(void* self);
// Known callee 0x00493E40: forwardVtableSlot194 (variadic: forwards 1-4 stack arguments; see call sites).
extern void* ext_00493E40(void* self, ...);
// Known callee 0x00493E70: forwardVtable198_viaFirstField (one stack argument).
extern void* ext_00493E70(void* self, void* arg);
// Known callee 0x00528B90: Unknown::setPeerWithBackLink (ecx = self, one stack argument)
extern void __thiscall ext_00528B90(void* self, void* peer);
// Known callee 0x005AC360: Matrix44::Matrix44_fromVec4s (ecx = this, four row pointers)
extern void* __thiscall ext_005AC360(void* self, const float* row0, const float* row1, const float* row2, const float* row3);
// One-time static initializer hook (cdecl, one argument).
extern void ext_006A6C87(void* fn);
extern int mem_00B40640;
extern int mem_00B49088;
extern int mem_00959050;
extern int mem_0093247C;
// Import thunks for MSVCP80 basic_string ctor/dtor; the native std::string below replaces the calls.
extern int mem_00924FE4;
extern int mem_00924FF4;

// @name NMData::SecondaryTwistAndSwingConstraint::vfunc_34
// @class NMData::SecondaryTwistAndSwingConstraint
// @summary Builds two local helper objects, wires them with sub-objects of this+0x04 and this+0x160 and the owner, lazily initializes a static 4x4 matrix once, and returns the object produced by the first forwarding chain.
// @field NMData::SecondaryTwistAndSwingConstraint +0x04 void* field_0x04 (interface sub-object; vtable slot 3 is called with (mem, this+0x0C, 0))
// @field NMData::SecondaryTwistAndSwingConstraint +0x0C void* field_0x0c (base address passed to the interface call)
// @field NMData::SecondaryTwistAndSwingConstraint +0x160 void* field_0x160 (child object; vtable slots 0x120, 0x128, 0x12C and 0x104 are called)
void* fn_0061D4A0(void* self, void* owner) {
    uint8_t* const s = static_cast<uint8_t*>(self);

    // Frame-local objects (original frame slots F+0x70 and F+0xBC).
    alignas(16) uint8_t objA[0x4C];
    alignas(16) uint8_t objB[0x48];
    // std::string ctor/dtor imports: replaced by the native std::string temporaries below.
    (void)&mem_00924FE4;
    (void)&mem_00924FF4;

    ext_005B5780(objB, 11);

    void* const mem = reinterpret_cast<void*>(static_cast<uintptr_t>(static_cast<uint32_t>(mem_00B40640)));

    void* const A = lift_field<void*>(self, 0x160);
    void** const vtA = *reinterpret_cast<void***>(A);

    // X0 = A->vfunc(0x128)() + 8
    uint8_t* const X0 = static_cast<uint8_t*>(
        reinterpret_cast<void* (*)(void*)>(vtA[0x128 / 4])(A)) + 8;
    // X1 = A->vfunc(0x120)() + 8
    uint8_t* const X1 = static_cast<uint8_t*>(
        reinterpret_cast<void* (*)(void*)>(vtA[0x120 / 4])(A)) + 8;

    ext_005B5780(objA, 17);

    {
        std::string text(reinterpret_cast<const char*>(static_cast<uintptr_t>(0x009349FCu)));
        ext_005B18E0(objB, text);
    }

    // r = interface(s+4)->vfunc(0xC)(mem, s+0x0C, 0)
    void* const ifc = s + 0x04;
    void** const ifcVt = *reinterpret_cast<void***>(ifc);
    void* const r = reinterpret_cast<void* (*)(void*, void*, void*, void*)>(ifcVt[0xC / 4])(
        ifc, mem, s + 0x0C, static_cast<void*>(nullptr));

    // U = forward(owner, objB+8, r); V = forward(owner, U)
    void* const U = ext_00493E40(owner, static_cast<void*>(objB + 8), r);
    void* const V = ext_00493E70(owner, U);

    // objA.string = X1->string
    ext_005B18E0(objA, *reinterpret_cast<const std::string*>(X1 + 0x28));

    // Pa = A ? A+0x0C : 0; r2 = A->vfunc(0x12C)(Pa, 0)
    void* const Pa = A ? static_cast<void*>(static_cast<uint8_t*>(A) + 0x0C) : nullptr;
    void* const r2 = reinterpret_cast<void* (*)(void*, void*, void*)>(vtA[0x12C / 4])(
        A, Pa, static_cast<void*>(nullptr));

    // rr = forward(owner, objA+8, r2); rr->+0x20 = X1; V2 = forward(owner, rr)
    void* const rr = ext_00493E40(owner, static_cast<void*>(objA + 8), r2);
    *reinterpret_cast<void**>(static_cast<uint8_t*>(rr) + 0x20) = X1;
    void* const V2 = ext_00493E70(owner, rr);

    // A->vfunc(0x104)(V2)
    reinterpret_cast<void (*)(void*, void*)>(vtA[0x104 / 4])(A, V2);

    // One-time initialization of the static matrix (guard bit 0 of mem_00B49088).
    if ((static_cast<uint32_t>(mem_00B49088) & 1u) == 0) {
        mem_00B49088 = static_cast<int>(static_cast<uint32_t>(mem_00B49088) | 1u);

        alignas(16) uint8_t fr[0x80] = {};
        const float c1 = std::bit_cast<float>(static_cast<uint32_t>(mem_00959050));
        const float c06 = std::bit_cast<float>(static_cast<uint32_t>(mem_0093247C));

        lift_field<float>(fr, 0x20) = 0.0f;
        lift_field<float>(fr, 0x24) = 0.0f;
        lift_field<float>(fr, 0x2C) = 0.0f;
        lift_field<float>(fr, 0x34) = 1.0f;
        lift_field<float>(fr, 0x50) = 0.0f;
        lift_field<float>(fr, 0x54) = 0.0f;
        lift_field<float>(fr, 0x58) = c1;
        lift_field<float>(fr, 0x44) = c1;
        lift_field<float>(fr, 0x5C) = 0.0f;
        lift_field<float>(fr, 0x40) = 0.0f;
        lift_field<float>(fr, 0x48) = 0.0f;
        lift_field<float>(fr, 0x4C) = 0.0f;
        lift_field<float>(fr, 0x60) = c06;
        lift_field<float>(fr, 0x64) = 0.0f;
        lift_field<float>(fr, 0x68) = 0.0f;
        lift_field<float>(fr, 0x6C) = 0.0f;

        void* const matrix = reinterpret_cast<void*>(static_cast<uintptr_t>(0x00B49048u));
        ext_005AC360(matrix,
                     reinterpret_cast<const float*>(fr + 0x5C),
                     reinterpret_cast<const float*>(fr + 0x38),
                     reinterpret_cast<const float*>(fr + 0x44),
                     reinterpret_cast<const float*>(fr + 0x20));
        ext_006A6C87(reinterpret_cast<void*>(static_cast<uintptr_t>(0x0091EB70u)));
    }

    // objA.string = X0->string
    ext_005B18E0(objA, *reinterpret_cast<const std::string*>(X0 + 0x28));

    // T = forward(owner, objA, 0xB49048, Pa, 0); T->+0x20 = X0
    void* const matrixAddr = reinterpret_cast<void*>(static_cast<uintptr_t>(0x00B49048u));
    void* const T = ext_00493E40(owner, static_cast<void*>(objA), matrixAddr, Pa, static_cast<void*>(nullptr));
    *reinterpret_cast<void**>(static_cast<uint8_t*>(T) + 0x20) = X0;

    // V2->vfunc(0xC)(T)
    void** const v2Vt = *reinterpret_cast<void***>(V2);
    reinterpret_cast<void (*)(void*, void*)>(v2Vt[0xC / 4])(V2, T);

    // V->vfunc(0xC)(V2)
    void** const vVt = *reinterpret_cast<void***>(V);
    reinterpret_cast<void (*)(void*, void*)>(vVt[0xC / 4])(V, V2);

    // Unknown::setPeerWithBackLink on V2, peer V
    ext_00528B90(V2, V);

    ext_005B1870(objA);
    ext_005B1870(objB);
    return V;
}
} // namespace lift_0061D4A0
