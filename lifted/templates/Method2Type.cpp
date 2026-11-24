// Lifted C++ translation unit: lifted/templates/Method2Type.cpp
#include "lift_compat.h"

// [0x005B7E80]
namespace lift_005B7E80 {
// @name ExprParser::Method2Type::vfunc_49
// @class ExprParser::Method2Type
// @summary Calls virtual slot 5 twice on the object held by arg4 (first with 0, then with the first result), forwards the second result to the child at *arg2, zeroes the out buffer at arg2, and returns arg2.

extern void ext_005B7260(void* self, uint32_t stackArg0);
extern void ext_00671F30(uint32_t* out);

namespace {

using Slot5Fn = uint32_t (*)(void* self, uint32_t a, uint32_t b);

// Calls vtable slot 5 (offset 0x14) of the object at `obj`, passing (a, b).
uint32_t callSlot5(uint32_t obj, uint32_t a, uint32_t b)
{
    void* self = reinterpret_cast<void*>(static_cast<uintptr_t>(obj));
    void** vtbl = *reinterpret_cast<void***>(self);
    Slot5Fn fn = reinterpret_cast<Slot5Fn>(vtbl[5]);
    return fn(self, a, b);
}

} // namespace

extern uint32_t fn_005B7E80(void* self, uint32_t a1, uint32_t a2, uint32_t a3, uint32_t a4)
{
    (void)self;
    (void)a1;
    (void)a3;

    uint32_t* out = reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(a2));
    uint32_t wrapped = *out;

    uint32_t* argObj = reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(a4));
    uint32_t obj = argObj[1];

    uint32_t r1 = callSlot5(obj, a4, 0);
    uint32_t r2 = callSlot5(obj, a4, r1);

    ext_005B7260(reinterpret_cast<void*>(static_cast<uintptr_t>(wrapped)), r2);
    ext_00671F30(out);

    return a2;
}
} // namespace lift_005B7E80

// [0x005B7F50]
namespace lift_005B7F50 {
// @name ExprParser::Method2Type::vfunc_49
// @class ExprParser::Method2Type
// @summary Calls two virtual slot-5 methods on the argument objects, forwards the results to ext_005B72A0 on *arg2, then zeroes the out-buffer at arg2 via ext_00671F30 and returns arg2.
// @field Unknown +0x00 uintptr_t field_0x00
// @field Unknown +0x04 uintptr_t field_0x04

extern void __fastcall ext_005B72A0(void* self, void* edx, uintptr_t arg1, uintptr_t arg2);
extern void __cdecl ext_00671F30(uint32_t* out);
extern uint32_t mem_00B599BC;

using VSlot5ThreeArg = uintptr_t(__fastcall*)(void* self, void* edx, uintptr_t a, uintptr_t b, uintptr_t c);
using VSlot5TwoArg = uintptr_t(__fastcall*)(void* self, void* edx, uintptr_t a, uintptr_t b);

extern uintptr_t __stdcall fn_005B7F50(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3, uintptr_t arg4) {
    (void)arg1;
    (void)arg3;

    uintptr_t* A = reinterpret_cast<uintptr_t*>(arg2);
    uintptr_t* B = reinterpret_cast<uintptr_t*>(arg4);

    // r1 = B->field_0x04->vtbl[5](B, arg2_saved, 0)
    void* objB = reinterpret_cast<void*>(B[1]);
    uintptr_t* vtB = *reinterpret_cast<uintptr_t**>(objB);
    VSlot5ThreeArg fnB = reinterpret_cast<VSlot5ThreeArg>(vtB[5]);
    uintptr_t r1 = fnB(objB, nullptr, arg4, A[0], 0);

    // r2 = A->field_0x04->vtbl[5](A, r1)
    void* objA = reinterpret_cast<void*>(A[1]);
    uintptr_t* vtA = *reinterpret_cast<uintptr_t**>(objA);
    VSlot5TwoArg fnA = reinterpret_cast<VSlot5TwoArg>(vtA[5]);
    uintptr_t r2 = fnA(objA, nullptr, arg2, r1);

    // this = A->field_0x00 (object), forward r2 and A
    ext_005B72A0(reinterpret_cast<void*>(A[0]), nullptr, r2, arg2);

    // Zero out[0] and store mem_00B599BC into out[1]
    ext_00671F30(reinterpret_cast<uint32_t*>(arg2));

    return arg2;
}
} // namespace lift_005B7F50

// [0x005C48E0] ExprParser::Method2Type<NMData::CollisionModelDataBase, NM::Vector3 const &, NM::Vector3 const &, {protected: void __thiscall NMData::CollisionModelDataBase::addImpulseAtPostion(class NM::Vector3 const &, NM::Vector3 const &), 0}>::vfunc_49 (75 bytes)
namespace lift_005C48E0 {
// Known callee 0x005C30D0: sub_005C30D0 (Auto-lifted identical-shape clone of 0x005B7260 (Unknown::forwardIfChild).)
// Signature: void __thiscall(void* self, DWORD stackArg0, DWORD stackArg1)
extern void ext_005C30D0(void* self, DWORD stackArg0, DWORD stackArg1);
// Known callee 0x00671F30: sub_00671F30 (Zeroes the first dword of the output buffer and stores the global mem_00B599BC into the second dword.)
// Signature: void __cdecl(uint32_t* out)
extern void ext_00671F30(void* out);

// @name ExprParser::Method2Type::vfunc_49
// @class ExprParser::Method2Type<NMData::CollisionModelDataBase, NM::Vector3 const &, NM::Vector3 const &, {protected: void __thiscall NMData::CollisionModelDataBase::addImpulseAtPostion(class NM::Vector3 const &, NM::Vector3 const &), 0}>
// @summary Calls vtable slot 5 on two argument objects, forwards the results to ext_005C30D0, then zeroes/initializes the out buffer and returns it.
void* fn_005C48E0(void* out, void* a1, DWORD a2, void* a3) {
    (void)a2;

    // esi = *(DWORD*)a1 (used as `this` for the forwarding call below)
    const DWORD selfValue = lift_field<DWORD>(a1, 0);

    // First virtual call: obj3 = a3->field_04; vtbl[5](obj3, a3, 0)
    void* obj3 = reinterpret_cast<void*>(static_cast<uintptr_t>(lift_field<DWORD>(a3, 4)));
    void* const* vtbl3 = *reinterpret_cast<void* const* const*>(obj3);
    auto slot5a = reinterpret_cast<DWORD(__thiscall*)(void*, void*, DWORD)>(vtbl3[5]);
    const DWORD r1 = slot5a(obj3, a3, 0);

    // Second virtual call: obj1 = a1->field_04; vtbl[5](obj1, a1, r1)
    void* obj1 = reinterpret_cast<void*>(static_cast<uintptr_t>(lift_field<DWORD>(a1, 4)));
    void* const* vtbl1 = *reinterpret_cast<void* const* const*>(obj1);
    auto slot5b = reinterpret_cast<DWORD(__thiscall*)(void*, void*, DWORD)>(vtbl1[5]);
    const DWORD r2 = slot5b(obj1, a1, r1);

    // Forward r2 and a1 to the helper with selfValue as `this`.
    ext_005C30D0(reinterpret_cast<void*>(static_cast<uintptr_t>(selfValue)), r2,
                 static_cast<DWORD>(reinterpret_cast<uintptr_t>(a1)));

    // Initialize the out buffer; the function returns `out` in eax.
    ext_00671F30(out);
    return out;
}
} // namespace lift_005C48E0

// [0x005C4890] ExprParser::Method2Type<NMData::CollisionModelDataBase, NM::Vector3 const &, NM::Vector3 const &, {protected: void __thiscall NMData::CollisionModelDataBase::addForceAtPostion(class NM::Vector3 const &, NM::Vector3 const &), 0}>::vfunc_49 (75 bytes)
namespace lift_005C4890 {
namespace lift_005C4890 {
// Known callee 0x005C3070: ext_005C3070 (Auto-lifted identical-shape clone of 0x005B7260 (Unknown::forwardIfChild).)
extern void ext_005C3070(void* self, uint32_t stackArg0, uint32_t stackArg1);
// Known callee 0x00671F30: ext_00671F30 (Zeroes the first dword of the output buffer and stores the global mem_00B599BC into the second dword.)
extern void ext_00671F30(void* out);

// Virtual slot +0x14 with three stack args (callee-cleans) and a uint32 result.
using VirtualCall3 = uint32_t(__thiscall*)(void* self, uint32_t a, uint32_t b, uint32_t c);
// Virtual slot +0x14 with two stack args and a uint32 result.
using VirtualCall2 = uint32_t(__thiscall*)(void* self, uint32_t a, uint32_t b);

inline uint32_t addr32(const void* p) {
    return static_cast<uint32_t>(reinterpret_cast<uintptr_t>(p));
}

inline void* ptrAt(const void* base, ptrdiff_t off) {
    return reinterpret_cast<void*>(static_cast<uintptr_t>(lift_field<uint32_t>(base, off)));
}

// Loads the function pointer stored at vtable[slotOff] of obj.
inline uintptr_t vtableSlot(const void* obj, ptrdiff_t slotOff) {
    const void* vtbl = ptrAt(obj, 0x00);
    return static_cast<uintptr_t>(lift_field<uint32_t>(vtbl, slotOff));
}

// @name ExprParser::Method2Type::vfunc_49 (addForceAtPostion dispatch)
// @class ExprParser::Method2Type<NMData::CollisionModelDataBase, NM::Vector3 const &, NM::Vector3 const &, {protected: void __thiscall NMData::CollisionModelDataBase::addForceAtPostion(class NM::Vector3 const &, NM::Vector3 const &), 0}>
// @summary Calls a3's object virtual slot +0x14, then a1's object virtual slot +0x14 with that result, forwards the result to ext_005C3070 on *a1, then zeroes the out buffer via ext_00671F30 and returns it.
// @field ExprParser::ValuePtrType +0x00 void* field_0x00
// @field ExprParser::ValuePtrType +0x04 void* field_0x04
void* fn_005C4890(void* out, void* a1, uint32_t a2, void* a3) {
    (void)a2;

    // First virtual call: object at a3->+0x04, passing a3 and the zero local.
    // The middle stack argument is the caller's saved ESI in the original code,
    // which is not recoverable here, so it is passed as 0.
    void* obj3 = ptrAt(a3, 0x04);
    auto call3 = reinterpret_cast<VirtualCall3>(vtableSlot(obj3, 0x14));
    uint32_t r1 = call3(obj3, addr32(a3), 0u, 0u);

    // Second virtual call: object at a1->+0x04, passing a1 and r1.
    void* obj1 = ptrAt(a1, 0x04);
    auto call2 = reinterpret_cast<VirtualCall2>(vtableSlot(obj1, 0x14));
    uint32_t r2 = call2(obj1, addr32(a1), r1);

    // ECX = *a1 (this for ext_005C3070), stack args: r2 and the zero local.
    void* self = ptrAt(a1, 0x00);
    ext_005C3070(self, r2, 0u);

    ext_00671F30(out);
    return out;
}
} // namespace lift_005C4890
} // namespace lift_005C4890

// [0x0066C060] ExprParser::Method2Type<NM::Vector3, NM::Vector3 const &, NM::Vector3 const &, &public: void __thiscall NM::Vector3::cartesianAtoB_TS(class NM::Vector3 const &, NM::Vector3 const &)>::vfunc_49 (75 bytes)
namespace lift_0066C060 {
// @name ExprParser::Method2Type<NM::Vector3, NM::Vector3 const &, NM::Vector3 const &, &public: void __thiscall NM::Vector3::cartesianAtoB_TS(class NM::Vector3 const &, NM::Vector3 const &)>::vfunc_49
// @class ExprParser::Method2Type<NM::Vector3, NM::Vector3 const &, NM::Vector3 const &, &public: void __thiscall NM::Vector3::cartesianAtoB_TS(class NM::Vector3 const &, NM::Vector3 const &)>
// @summary Auto-lifted identical-shape clone of 0x005B7E80 (ExprParser::Method2Type::vfunc_49).
namespace lift_005B7E80 {
// @name ExprParser::Method2Type::vfunc_49
// @class ExprParser::Method2Type
// @summary Calls virtual slot 5 twice on the object held by arg4 (first with 0, then with the first result), forwards the second result to the child at *arg2, zeroes the out buffer at arg2, and returns arg2.

extern void ext_0067CD30(void* self, uint32_t stackArg0);
extern void ext_00671F30(uint32_t* out);

namespace {

using Slot5Fn = uint32_t (*)(void* self, uint32_t a, uint32_t b);

// Calls vtable slot 5 (offset 0x14) of the object at `obj`, passing (a, b).
uint32_t callSlot5(uint32_t obj, uint32_t a, uint32_t b)
{
    void* self = reinterpret_cast<void*>(static_cast<uintptr_t>(obj));
    void** vtbl = *reinterpret_cast<void***>(self);
    Slot5Fn fn = reinterpret_cast<Slot5Fn>(vtbl[5]);
    return fn(self, a, b);
}

} // namespace

extern uint32_t fn_0066C060(void* self, uint32_t a1, uint32_t a2, uint32_t a3, uint32_t a4)
{
    (void)self;
    (void)a1;
    (void)a3;

    uint32_t* out = reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(a2));
    uint32_t wrapped = *out;

    uint32_t* argObj = reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(a4));
    uint32_t obj = argObj[1];

    uint32_t r1 = callSlot5(obj, a4, 0);
    uint32_t r2 = callSlot5(obj, a4, r1);

    ext_0067CD30(reinterpret_cast<void*>(static_cast<uintptr_t>(wrapped)), r2);
    ext_00671F30(out);

    return a2;
}
} // namespace lift_005B7E80
} // namespace lift_0066C060

// [0x0066C100] ExprParser::Method2Type<NM::Vector3, NM::Vector3 const &, NM::Vector3 const &, &public: void __thiscall NM::Vector3::cartesianAtoB_TSA(class NM::Vector3 const &, NM::Vector3 const &)>::vfunc_49 (75 bytes)
namespace lift_0066C100 {
// @name ExprParser::Method2Type<NM::Vector3, NM::Vector3 const &, NM::Vector3 const &, &public: void __thiscall NM::Vector3::cartesianAtoB_TSA(class NM::Vector3 const &, NM::Vector3 const &)>::vfunc_49
// @class ExprParser::Method2Type<NM::Vector3, NM::Vector3 const &, NM::Vector3 const &, &public: void __thiscall NM::Vector3::cartesianAtoB_TSA(class NM::Vector3 const &, NM::Vector3 const &)>
// @summary Auto-lifted identical-shape clone of 0x005B7E80 (ExprParser::Method2Type::vfunc_49).
namespace lift_005B7E80 {
// @name ExprParser::Method2Type::vfunc_49
// @class ExprParser::Method2Type
// @summary Calls virtual slot 5 twice on the object held by arg4 (first with 0, then with the first result), forwards the second result to the child at *arg2, zeroes the out buffer at arg2, and returns arg2.

extern void ext_0067CDC0(void* self, uint32_t stackArg0);
extern void ext_00671F30(uint32_t* out);

namespace {

using Slot5Fn = uint32_t (*)(void* self, uint32_t a, uint32_t b);

// Calls vtable slot 5 (offset 0x14) of the object at `obj`, passing (a, b).
uint32_t callSlot5(uint32_t obj, uint32_t a, uint32_t b)
{
    void* self = reinterpret_cast<void*>(static_cast<uintptr_t>(obj));
    void** vtbl = *reinterpret_cast<void***>(self);
    Slot5Fn fn = reinterpret_cast<Slot5Fn>(vtbl[5]);
    return fn(self, a, b);
}

} // namespace

extern uint32_t fn_0066C100(void* self, uint32_t a1, uint32_t a2, uint32_t a3, uint32_t a4)
{
    (void)self;
    (void)a1;
    (void)a3;

    uint32_t* out = reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(a2));
    uint32_t wrapped = *out;

    uint32_t* argObj = reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(a4));
    uint32_t obj = argObj[1];

    uint32_t r1 = callSlot5(obj, a4, 0);
    uint32_t r2 = callSlot5(obj, a4, r1);

    ext_0067CDC0(reinterpret_cast<void*>(static_cast<uintptr_t>(wrapped)), r2);
    ext_00671F30(out);

    return a2;
}
} // namespace lift_005B7E80
} // namespace lift_0066C100

// [0x0066C150] ExprParser::Method2Type<NM::Vector3, NM::Vector3 const &, NM::Vector3 const &, &public: void __thiscall NM::Vector3::cartesianAtoB_SE(class NM::Vector3 const &, NM::Vector3 const &)>::vfunc_49 (75 bytes)
namespace lift_0066C150 {
// @name ExprParser::Method2Type<NM::Vector3, NM::Vector3 const &, NM::Vector3 const &, &public: void __thiscall NM::Vector3::cartesianAtoB_SE(class NM::Vector3 const &, NM::Vector3 const &)>::vfunc_49
// @class ExprParser::Method2Type<NM::Vector3, NM::Vector3 const &, NM::Vector3 const &, &public: void __thiscall NM::Vector3::cartesianAtoB_SE(class NM::Vector3 const &, NM::Vector3 const &)>
// @summary Auto-lifted identical-shape clone of 0x005B7E80 (ExprParser::Method2Type::vfunc_49).
namespace lift_005B7E80 {
// @name ExprParser::Method2Type::vfunc_49
// @class ExprParser::Method2Type
// @summary Calls virtual slot 5 twice on the object held by arg4 (first with 0, then with the first result), forwards the second result to the child at *arg2, zeroes the out buffer at arg2, and returns arg2.

extern void ext_0067CE50(void* self, uint32_t stackArg0);
extern void ext_00671F30(uint32_t* out);

namespace {

using Slot5Fn = uint32_t (*)(void* self, uint32_t a, uint32_t b);

// Calls vtable slot 5 (offset 0x14) of the object at `obj`, passing (a, b).
uint32_t callSlot5(uint32_t obj, uint32_t a, uint32_t b)
{
    void* self = reinterpret_cast<void*>(static_cast<uintptr_t>(obj));
    void** vtbl = *reinterpret_cast<void***>(self);
    Slot5Fn fn = reinterpret_cast<Slot5Fn>(vtbl[5]);
    return fn(self, a, b);
}

} // namespace

extern uint32_t fn_0066C150(void* self, uint32_t a1, uint32_t a2, uint32_t a3, uint32_t a4)
{
    (void)self;
    (void)a1;
    (void)a3;

    uint32_t* out = reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(a2));
    uint32_t wrapped = *out;

    uint32_t* argObj = reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(a4));
    uint32_t obj = argObj[1];

    uint32_t r1 = callSlot5(obj, a4, 0);
    uint32_t r2 = callSlot5(obj, a4, r1);

    ext_0067CE50(reinterpret_cast<void*>(static_cast<uintptr_t>(wrapped)), r2);
    ext_00671F30(out);

    return a2;
}
} // namespace lift_005B7E80
} // namespace lift_0066C150

// [0x0066C1B0] ExprParser::Method2Type<NM::Vector3, NM::Vector3 const &, NM::Vector3 const &, &public: void __thiscall NM::Vector3::cartesianAtoB_E(class NM::Vector3 const &, NM::Vector3 const &)>::vfunc_49 (75 bytes)
namespace lift_0066C1B0 {
// @name ExprParser::Method2Type<NM::Vector3, NM::Vector3 const &, NM::Vector3 const &, &public: void __thiscall NM::Vector3::cartesianAtoB_E(class NM::Vector3 const &, NM::Vector3 const &)>::vfunc_49
// @class ExprParser::Method2Type<NM::Vector3, NM::Vector3 const &, NM::Vector3 const &, &public: void __thiscall NM::Vector3::cartesianAtoB_E(class NM::Vector3 const &, NM::Vector3 const &)>
// @summary Auto-lifted identical-shape clone of 0x005B7E80 (ExprParser::Method2Type::vfunc_49).
namespace lift_005B7E80 {
// @name ExprParser::Method2Type::vfunc_49
// @class ExprParser::Method2Type
// @summary Calls virtual slot 5 twice on the object held by arg4 (first with 0, then with the first result), forwards the second result to the child at *arg2, zeroes the out buffer at arg2, and returns arg2.

extern void ext_0067CEE0(void* self, uint32_t stackArg0);
extern void ext_00671F30(uint32_t* out);

namespace {

using Slot5Fn = uint32_t (*)(void* self, uint32_t a, uint32_t b);

// Calls vtable slot 5 (offset 0x14) of the object at `obj`, passing (a, b).
uint32_t callSlot5(uint32_t obj, uint32_t a, uint32_t b)
{
    void* self = reinterpret_cast<void*>(static_cast<uintptr_t>(obj));
    void** vtbl = *reinterpret_cast<void***>(self);
    Slot5Fn fn = reinterpret_cast<Slot5Fn>(vtbl[5]);
    return fn(self, a, b);
}

} // namespace

extern uint32_t fn_0066C1B0(void* self, uint32_t a1, uint32_t a2, uint32_t a3, uint32_t a4)
{
    (void)self;
    (void)a1;
    (void)a3;

    uint32_t* out = reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(a2));
    uint32_t wrapped = *out;

    uint32_t* argObj = reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(a4));
    uint32_t obj = argObj[1];

    uint32_t r1 = callSlot5(obj, a4, 0);
    uint32_t r2 = callSlot5(obj, a4, r1);

    ext_0067CEE0(reinterpret_cast<void*>(static_cast<uintptr_t>(wrapped)), r2);
    ext_00671F30(out);

    return a2;
}
} // namespace lift_005B7E80
} // namespace lift_0066C1B0

// [0x0066C200] ExprParser::Method2Type<NM::Vector3, NM::Vector3 const &, NM::Vector3 const &, &public: void __thiscall NM::Vector3::orientationTwistSwingAtoB(class NM::Vector3 const &, NM::Vector3 const &)>::vfunc_49 (75 bytes)
namespace lift_0066C200 {
// @name ExprParser::Method2Type<NM::Vector3, NM::Vector3 const &, NM::Vector3 const &, &public: void __thiscall NM::Vector3::orientationTwistSwingAtoB(class NM::Vector3 const &, NM::Vector3 const &)>::vfunc_49
// @class ExprParser::Method2Type<NM::Vector3, NM::Vector3 const &, NM::Vector3 const &, &public: void __thiscall NM::Vector3::orientationTwistSwingAtoB(class NM::Vector3 const &, NM::Vector3 const &)>
// @summary Auto-lifted identical-shape clone of 0x005B7E80 (ExprParser::Method2Type::vfunc_49).
namespace lift_005B7E80 {
// @name ExprParser::Method2Type::vfunc_49
// @class ExprParser::Method2Type
// @summary Calls virtual slot 5 twice on the object held by arg4 (first with 0, then with the first result), forwards the second result to the child at *arg2, zeroes the out buffer at arg2, and returns arg2.

extern void ext_0067C940(void* self, uint32_t stackArg0);
extern void ext_00671F30(uint32_t* out);

namespace {

using Slot5Fn = uint32_t (*)(void* self, uint32_t a, uint32_t b);

// Calls vtable slot 5 (offset 0x14) of the object at `obj`, passing (a, b).
uint32_t callSlot5(uint32_t obj, uint32_t a, uint32_t b)
{
    void* self = reinterpret_cast<void*>(static_cast<uintptr_t>(obj));
    void** vtbl = *reinterpret_cast<void***>(self);
    Slot5Fn fn = reinterpret_cast<Slot5Fn>(vtbl[5]);
    return fn(self, a, b);
}

} // namespace

extern uint32_t fn_0066C200(void* self, uint32_t a1, uint32_t a2, uint32_t a3, uint32_t a4)
{
    (void)self;
    (void)a1;
    (void)a3;

    uint32_t* out = reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(a2));
    uint32_t wrapped = *out;

    uint32_t* argObj = reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(a4));
    uint32_t obj = argObj[1];

    uint32_t r1 = callSlot5(obj, a4, 0);
    uint32_t r2 = callSlot5(obj, a4, r1);

    ext_0067C940(reinterpret_cast<void*>(static_cast<uintptr_t>(wrapped)), r2);
    ext_00671F30(out);

    return a2;
}
} // namespace lift_005B7E80
} // namespace lift_0066C200

// [0x0066C250] ExprParser::Method2Type<NM::Vector3, NM::Vector3 const &, NM::Vector3 const &, &public: void __thiscall NM::Vector3::orientationTwistSwingAnglesAtoB(class NM::Vector3 const &, NM::Vector3 const &)>::vfunc_49 (75 bytes)
namespace lift_0066C250 {
// @name ExprParser::Method2Type<NM::Vector3, NM::Vector3 const &, NM::Vector3 const &, &public: void __thiscall NM::Vector3::orientationTwistSwingAnglesAtoB(class NM::Vector3 const &, NM::Vector3 const &)>::vfunc_49
// @class ExprParser::Method2Type<NM::Vector3, NM::Vector3 const &, NM::Vector3 const &, &public: void __thiscall NM::Vector3::orientationTwistSwingAnglesAtoB(class NM::Vector3 const &, NM::Vector3 const &)>
// @summary Auto-lifted identical-shape clone of 0x005B7E80 (ExprParser::Method2Type::vfunc_49).
namespace lift_005B7E80 {
// @name ExprParser::Method2Type::vfunc_49
// @class ExprParser::Method2Type
// @summary Calls virtual slot 5 twice on the object held by arg4 (first with 0, then with the first result), forwards the second result to the child at *arg2, zeroes the out buffer at arg2, and returns arg2.

extern void ext_0067CA30(void* self, uint32_t stackArg0);
extern void ext_00671F30(uint32_t* out);

namespace {

using Slot5Fn = uint32_t (*)(void* self, uint32_t a, uint32_t b);

// Calls vtable slot 5 (offset 0x14) of the object at `obj`, passing (a, b).
uint32_t callSlot5(uint32_t obj, uint32_t a, uint32_t b)
{
    void* self = reinterpret_cast<void*>(static_cast<uintptr_t>(obj));
    void** vtbl = *reinterpret_cast<void***>(self);
    Slot5Fn fn = reinterpret_cast<Slot5Fn>(vtbl[5]);
    return fn(self, a, b);
}

} // namespace

extern uint32_t fn_0066C250(void* self, uint32_t a1, uint32_t a2, uint32_t a3, uint32_t a4)
{
    (void)self;
    (void)a1;
    (void)a3;

    uint32_t* out = reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(a2));
    uint32_t wrapped = *out;

    uint32_t* argObj = reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(a4));
    uint32_t obj = argObj[1];

    uint32_t r1 = callSlot5(obj, a4, 0);
    uint32_t r2 = callSlot5(obj, a4, r1);

    ext_0067CA30(reinterpret_cast<void*>(static_cast<uintptr_t>(wrapped)), r2);
    ext_00671F30(out);

    return a2;
}
} // namespace lift_005B7E80
} // namespace lift_0066C250

// [0x0066C2B0] ExprParser::Method2Type<NM::Vector3, NM::Vector3 const &, NM::Vector3 const &, &public: void __thiscall NM::Vector3::orientationShoulderEulersAtoB(class NM::Vector3 const &, NM::Vector3 const &)>::vfunc_49 (75 bytes)
namespace lift_0066C2B0 {
// @name ExprParser::Method2Type<NM::Vector3, NM::Vector3 const &, NM::Vector3 const &, &public: void __thiscall NM::Vector3::orientationShoulderEulersAtoB(class NM::Vector3 const &, NM::Vector3 const &)>::vfunc_49
// @class ExprParser::Method2Type<NM::Vector3, NM::Vector3 const &, NM::Vector3 const &, &public: void __thiscall NM::Vector3::orientationShoulderEulersAtoB(class NM::Vector3 const &, NM::Vector3 const &)>
// @summary Auto-lifted identical-shape clone of 0x005B7E80 (ExprParser::Method2Type::vfunc_49).
namespace lift_005B7E80 {
// @name ExprParser::Method2Type::vfunc_49
// @class ExprParser::Method2Type
// @summary Calls virtual slot 5 twice on the object held by arg4 (first with 0, then with the first result), forwards the second result to the child at *arg2, zeroes the out buffer at arg2, and returns arg2.

extern void ext_0067CB20(void* self, uint32_t stackArg0);
extern void ext_00671F30(uint32_t* out);

namespace {

using Slot5Fn = uint32_t (*)(void* self, uint32_t a, uint32_t b);

// Calls vtable slot 5 (offset 0x14) of the object at `obj`, passing (a, b).
uint32_t callSlot5(uint32_t obj, uint32_t a, uint32_t b)
{
    void* self = reinterpret_cast<void*>(static_cast<uintptr_t>(obj));
    void** vtbl = *reinterpret_cast<void***>(self);
    Slot5Fn fn = reinterpret_cast<Slot5Fn>(vtbl[5]);
    return fn(self, a, b);
}

} // namespace

extern uint32_t fn_0066C2B0(void* self, uint32_t a1, uint32_t a2, uint32_t a3, uint32_t a4)
{
    (void)self;
    (void)a1;
    (void)a3;

    uint32_t* out = reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(a2));
    uint32_t wrapped = *out;

    uint32_t* argObj = reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(a4));
    uint32_t obj = argObj[1];

    uint32_t r1 = callSlot5(obj, a4, 0);
    uint32_t r2 = callSlot5(obj, a4, r1);

    ext_0067CB20(reinterpret_cast<void*>(static_cast<uintptr_t>(wrapped)), r2);
    ext_00671F30(out);

    return a2;
}
} // namespace lift_005B7E80
} // namespace lift_0066C2B0

// [0x0066C300] ExprParser::Method2Type<NM::Vector3, NM::Vector3 const &, NM::Vector3 const &, &public: void __thiscall NM::Vector3::orientationEulersAtoB(class NM::Vector3 const &, NM::Vector3 const &)>::vfunc_49 (75 bytes)
namespace lift_0066C300 {
// @name ExprParser::Method2Type<NM::Vector3, NM::Vector3 const &, NM::Vector3 const &, &public: void __thiscall NM::Vector3::orientationEulersAtoB(class NM::Vector3 const &, NM::Vector3 const &)>::vfunc_49
// @class ExprParser::Method2Type<NM::Vector3, NM::Vector3 const &, NM::Vector3 const &, &public: void __thiscall NM::Vector3::orientationEulersAtoB(class NM::Vector3 const &, NM::Vector3 const &)>
// @summary Auto-lifted identical-shape clone of 0x005B7E80 (ExprParser::Method2Type::vfunc_49).
namespace lift_005B7E80 {
// @name ExprParser::Method2Type::vfunc_49
// @class ExprParser::Method2Type
// @summary Calls virtual slot 5 twice on the object held by arg4 (first with 0, then with the first result), forwards the second result to the child at *arg2, zeroes the out buffer at arg2, and returns arg2.

extern void ext_0067CC10(void* self, uint32_t stackArg0);
extern void ext_00671F30(uint32_t* out);

namespace {

using Slot5Fn = uint32_t (*)(void* self, uint32_t a, uint32_t b);

// Calls vtable slot 5 (offset 0x14) of the object at `obj`, passing (a, b).
uint32_t callSlot5(uint32_t obj, uint32_t a, uint32_t b)
{
    void* self = reinterpret_cast<void*>(static_cast<uintptr_t>(obj));
    void** vtbl = *reinterpret_cast<void***>(self);
    Slot5Fn fn = reinterpret_cast<Slot5Fn>(vtbl[5]);
    return fn(self, a, b);
}

} // namespace

extern uint32_t fn_0066C300(void* self, uint32_t a1, uint32_t a2, uint32_t a3, uint32_t a4)
{
    (void)self;
    (void)a1;
    (void)a3;

    uint32_t* out = reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(a2));
    uint32_t wrapped = *out;

    uint32_t* argObj = reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(a4));
    uint32_t obj = argObj[1];

    uint32_t r1 = callSlot5(obj, a4, 0);
    uint32_t r2 = callSlot5(obj, a4, r1);

    ext_0067CC10(reinterpret_cast<void*>(static_cast<uintptr_t>(wrapped)), r2);
    ext_00671F30(out);

    return a2;
}
} // namespace lift_005B7E80
} // namespace lift_0066C300

// [0x00692380]
namespace lift_00692380 {
// @name ExprParser::Method2Type<ValuePtrArrayObject, int, ValuePtr const &, setElement>::vfunc_49
// @class ExprParser::Method2Type<ValuePtrArrayObject, int, ValuePtr const &, setElement>
// @summary Calls virtual slot 2 on the object at arg3+4 with (arg3, arg4, *arg2, 0), forwards the result as the argument to ext_004ECA90 on *arg2, zeroes the out buffer at *arg2 via ext_00671F30 and returns *arg2.
// @field Unknown +0x00 uint32_t field_0x00
// @field Unknown +0x04 uint32_t field_0x04

extern void __thiscall ext_004ECA90(void* self, uint32_t arg);
extern void __cdecl ext_00671F30(uint32_t* out);
extern uint32_t mem_00B599BC;

namespace {

using VSlot2Fn = uint32_t(__fastcall*)(void* self, void* edx, uint32_t a, uint32_t b, uint32_t c, uint32_t d);

} // namespace

extern uint32_t __stdcall fn_00692380(void* self, uint32_t a1, uint32_t a2, uint32_t a3, uint32_t a4) {
    (void)self;
    (void)a1;

    // esi = *(uint32_t*)a2
    uint32_t* ptrSlot = reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(a2));
    uint32_t target = ptrSlot[0];

    // obj = a3->field_0x04; r = obj->vtbl[2](obj, a3, a4, target, 0)
    uint32_t* ctx = reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(a3));
    void* obj = reinterpret_cast<void*>(static_cast<uintptr_t>(ctx[1]));
    void** vtbl = *reinterpret_cast<void***>(obj);
    VSlot2Fn fn = reinterpret_cast<VSlot2Fn>(vtbl[2]);
    uint32_t r = fn(obj, nullptr, a3, a4, target, 0);

    // ext_004ECA90 is invoked on target with r as its single argument.
    ext_004ECA90(reinterpret_cast<void*>(static_cast<uintptr_t>(target)), r);

    // Zero the out buffer at target (first dword) and store the global second dword.
    uint32_t* out = reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(target));
    ext_00671F30(out);

    return target;
}
} // namespace lift_00692380
