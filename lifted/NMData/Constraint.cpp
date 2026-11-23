// Lifted C++ translation unit: lifted/NMData/Constraint.cpp
#include "lift_compat.h"
// Lazily-initialised static triple (x, y, z) plus a one-shot init flag word.
extern "C" uint32_t mem_00AE5598;  // init flag; bit 0 = "defaults initialised"
extern "C" float    mem_00AE558C;  // default component 0
extern "C" float    mem_00AE5590;  // default component 1
extern "C" float    mem_00AE5594;  // default component 2
extern "C" void* ext_00640390(void* self, uint32_t a, uint32_t b, void* c);
extern "C" void ext_0067F040(void* p);
extern "C" uint32_t mem_00A9EDEC;

extern "C" void ext_0067F040(void* p);
extern "C" uint32_t mem_00A9EDEC;
// @class NMData::Constraint
// @summary Writes a constant 3-float vector (0,0,0 on first use) to the caller-supplied return buffer.
void fn_0061D250(float* out) {
    if ((mem_00AE5598 & 1u) == 0) {
        mem_00AE5598 |= 1u;
        mem_00AE558C = 0.0f;
        mem_00AE5590 = 0.0f;
        mem_00AE5594 = 0.0f;
    }
    out[0] = mem_00AE558C;
    out[1] = mem_00AE5590;
    out[2] = mem_00AE5594;
}

// Callee signatures are inferred from the call sites (unverified):
//   ext_00640390: thiscall-style; `this` is the stack argument, then 3 pushed args.
//   ext_0067F040: one pointer argument.
extern "C" void* ext_00640390(void* self, uint32_t a, uint32_t b, void* c);
extern "C" void ext_0067F040(void* p);
extern "C" uint32_t mem_00A9EDEC;

// [0x00611270] NMData::Constraint::vfunc_22 (42 bytes)
// @name NMData::Constraint::vfunc_22
// @class NMData::Constraint
// @summary Calls a method on the argument object with a global value and this's +0x154 sub-object, forwards the result to ext_0067F040, and returns the argument.
// @field NMData::Constraint +0x154 uint8_t field_0x154
void* fn_00611270(void* self, void* other) {
    void* field = &lift_field<uint8_t>(self, 0x154);
    void* result = ext_00640390(other, mem_00A9EDEC, 0u, field);
    ext_0067F040(result);
    return other;
}

// [0x005EBFF0]
namespace lift_005EBFF0 {
void __thiscall ext_00661980(void* self);
void __thiscall ext_00610AF0(void* self);

// @name NMData::Constraint::vfunc_70
// @class NMData::Constraint
// @summary Constructs an object at outPtr by calling base/member constructors and setting vtable 0x00958C0C.
void* __thiscall fn_005EBFF0(void* self, void* outPtr, uint32_t arg2, uint32_t arg3) {
    (void)self;
    (void)arg2;
    (void)arg3;

    ext_00661980(outPtr);
    *reinterpret_cast<uint32_t*>(outPtr) = 0x00958C0Cu;
    ext_00610AF0(outPtr);
    return outPtr;
}
} // namespace lift_005EBFF0

// [0x006127A0]
namespace lift_006127A0 {
// @name NMData::Constraint::vfunc_74
// @class NMData::Constraint
// @summary Lazily initializes and returns a static object at 0x00B48D00, registering its destructor at 0x0091EB40.


extern uint32_t mem_00B48DC0;
extern uint8_t mem_00B48D00;
extern uint8_t mem_0091EB40;

extern void __thiscall ext_00612270(void* self, uint32_t* arg);
extern int __cdecl ext_006A6C87(void* fn);

void* __thiscall fn_006127A0(void* self) {
    (void)self;
    if ((static_cast<uint8_t>(mem_00B48DC0) & 1u) == 0) {
        mem_00B48DC0 |= 1u;
        uint32_t local_arg = 0;
        ext_00612270(&mem_00B48D00, &local_arg);
        ext_006A6C87(&mem_0091EB40);
    }
    return &mem_00B48D00;
}
} // namespace lift_006127A0

// [0x00612810]
namespace lift_00612810 {
// @name Constraint::vfunc_71
// @class NMData::Constraint
// @summary Lazily initializes and returns a static object at 0x00B48DC8.


extern uint32_t mem_00B48E88;

extern void __thiscall ext_00612270(void* self, uint32_t* arg);
extern void __cdecl ext_006A6C87(void* func);

void* __thiscall fn_00612810(void* self) {
    (void)self;
    uint32_t local_var = 0;
    if ((mem_00B48E88 & 1u) == 0) {
        mem_00B48E88 |= 1u;
        ext_00612270(reinterpret_cast<void*>(0x00B48DC8u), &local_var);
        ext_006A6C87(reinterpret_cast<void*>(0x0091EB50u));
    }
    return reinterpret_cast<void*>(0x00B48DC8u);
}
} // namespace lift_00612810

// [0x00612730]
namespace lift_00612730 {
// @name NMData::Constraint::vfunc_72
// @class NMData::Constraint
// @summary Lazily initializes and returns a pointer to a static object at 0x00B48C38.


extern uint32_t mem_00B48CF8;
extern uint8_t mem_00B48C38;
extern uint8_t mem_0091EB30;

extern void __thiscall ext_00612270(void* self, uint32_t* arg);
extern void __cdecl ext_006A6C87(void* atexit_fn);

void* __thiscall fn_00612730(void* self) {
    (void)self;
    uint32_t local_arg = 0;
    if ((mem_00B48CF8 & 1u) == 0) {
        mem_00B48CF8 |= 1u;
        ext_00612270(&mem_00B48C38, &local_arg);
        ext_006A6C87(&mem_0091EB30);
    }
    return &mem_00B48C38;
}
} // namespace lift_00612730

// [0x00612880]
namespace lift_00612880 {
// @name NMData::Constraint::vfunc_73
// @class NMData::Constraint
// @summary Lazily initializes and returns a static singleton object at 0x00B48E90.


extern uint32_t mem_00B48F50;
extern uint8_t mem_00B48E90;
extern uint8_t mem_0091EB60;

extern void __thiscall ext_00612270(void* self, uint32_t* arg);
extern int ext_006A6C87(void* func);

void* __thiscall fn_00612880(void* self) {
    (void)self;
    if ((mem_00B48F50 & 1u) == 0) {
        mem_00B48F50 |= 1u;
        uint32_t local_arg = 0;
        ext_00612270(&mem_00B48E90, &local_arg);
        ext_006A6C87(&mem_0091EB60);
    }
    return &mem_00B48E90;
}
} // namespace lift_00612880
