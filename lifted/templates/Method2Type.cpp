// Lifted C++ translation unit: lifted/templates/Method2Type.cpp
#include "lift_compat.h"

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

// [0x0066CCD0]
namespace lift_0066CCD0 {
// @name ExprParser::Method2Type_Vector3_radArbitraryRotateE::vfunc_49
// @class ExprParser::Method2Type
// @summary Evaluates two arguments (Vector3 const& and float), calls radArbitraryRotateE on the target Vector3, and initializes the void return value.

extern void __cdecl ext_00671F30(uint32_t* out);
extern void __thiscall ext_0067C6B0(void* self, const void* vec, float angle);

uint32_t* __thiscall sub_0066CCD0(void* self, uint32_t* out, uint32_t* targetPtr, void* argVec, void* argAngle) {
    (void)self;
    void* vecObj = reinterpret_cast<void*>(*targetPtr);

    void* angleType = *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(argAngle) + 4);
    auto angleVtable = *reinterpret_cast<uintptr_t**>(angleType);
    using GetFloatFn = float(__thiscall*)(void*, void*);
    float angle = reinterpret_cast<GetFloatFn>(angleVtable[1])(angleType, argAngle);

    void* vecType = *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(argVec) + 4);
    auto vecVtable = *reinterpret_cast<uintptr_t**>(vecType);
    using GetVecFn = const void*(__thiscall*)(void*, void*);
    const void* vec = reinterpret_cast<GetVecFn>(vecVtable[5])(vecType, argVec);

    ext_0067C6B0(vecObj, vec, angle);
    ext_00671F30(out);
    return out;
}
} // namespace lift_0066CCD0

// [0x0066CC70]
namespace lift_0066CC70 {
extern void __thiscall ext_0067BA20(void* self, const void* axis, float angle);
extern void __cdecl ext_00671F30(uint32_t* out);

// @name ExprParser::Method2Type<NM::Vector3, NM::Vector3 const &, float, &NM::Vector3::radArbitraryRotate>::vfunc_49
// @class ExprParser::Method2Type
// @summary Invokes NM::Vector3::radArbitraryRotate on the target vector using two evaluated expression arguments and initializes the output value.
// @field ExprParser::Value +0x04 void* type_vtable
uint32_t* __thiscall fn_0066CC70(void* self, uint32_t* out, void** target_ptr, void* arg_vec, void* arg_angle) {
    (void)self;
    void* target = *target_ptr;

    void* angle_type = *(void**)((uint8_t*)arg_angle + 4);
    void** angle_vt = *(void***)angle_type;
    typedef float (__stdcall *GetFloatFn)(void*);
    float angle = ((GetFloatFn)angle_vt[1])(arg_angle);

    void* vec_type = *(void**)((uint8_t*)arg_vec + 4);
    void** vec_vt = *(void***)vec_type;
    typedef const void* (__stdcall *GetVecFn)(void*);
    const void* axis = ((GetVecFn)vec_vt[5])(arg_vec);

    ext_0067BA20(target, axis, angle);
    ext_00671F30(out);
    return out;
}
} // namespace lift_0066CC70

// [0x0066CD90]
namespace lift_0066CD90 {
void __cdecl ext_00671F30(uint32_t* out);
void __thiscall ext_0067C810(void* self, void* vec, float angle);

// @name ExprParser::Method2Type<NM::Vector3, NM::Vector3 const &, float, &NM::Vector3::radArbitraryRotateTSA>::vfunc_49
// @class ExprParser::Method2Type
// @summary Invokes NM::Vector3::radArbitraryRotateTSA with a Vector3 and float extracted from expression arguments, then initializes the output value.
// @field ExprValue +0x04 void* type
uint32_t* __thiscall fn_0066CD90(void* self, uint32_t* out, void** target, void* vecArg, void* angleArg) {
    (void)self;
    void* vecObj = *target;

    void* angleType = *(void**)((uint8_t*)angleArg + 4);
    auto angleFn = *(float (__thiscall**)(void*, void*))(*(uint8_t**)angleType + 4);
    float angle = angleFn(angleType, angleArg);

    void* vecType = *(void**)((uint8_t*)vecArg + 4);
    auto vecFn = *(void* (__thiscall**)(void*, void*))(*(uint8_t**)vecType + 0x14);
    void* vecPtr = vecFn(vecType, vecArg);

    ext_0067C810(vecObj, vecPtr, angle);
    ext_00671F30(out);
    return out;
}
} // namespace lift_0066CD90

// [0x0066CD30]
namespace lift_0066CD30 {
// @name ExprParser::Method2Type_NM_Vector3_radArbitraryRotateTS::vfunc_49
// @class ExprParser::Method2Type
// @summary Invokes NM::Vector3::radArbitraryRotateTS on the target vector with evaluated axis and angle arguments, then initializes the output expression value.

extern void __thiscall ext_0067C760(void* self, void* axis, float angle);
extern void __cdecl ext_00671F30(uint32_t* out);

void* __thiscall fn_0066CD30(void* self, uint32_t* out, void** targetPtr, uint32_t* argAxis, uint32_t* argAngle) {
    (void)self;
    void* target = *targetPtr;

    void* angleType = reinterpret_cast<void*>(argAngle[1]);
    auto angleVtable = *reinterpret_cast<void***>(angleType);
    auto getFloat = reinterpret_cast<float(__thiscall*)(void*, uint32_t*)>(angleVtable[1]);
    float angle = getFloat(angleType, argAngle);

    void* axisType = reinterpret_cast<void*>(argAxis[1]);
    auto axisVtable = *reinterpret_cast<void***>(axisType);
    auto getVec3 = reinterpret_cast<void*(__thiscall*)(void*, uint32_t*)>(axisVtable[5]);
    void* axis = getVec3(axisType, argAxis);

    ext_0067C760(target, axis, angle);
    ext_00671F30(out);
    return out;
}
} // namespace lift_0066CD30

// [0x005B7ED0]
namespace lift_005B7ED0 {
// @name ExprParser::Method2Type<NMData::MetaBodyData, NM::Vector3 const &, NM::Vector3 const &, addForceAtPostion>::vfunc_40
// @class ExprParser::Method2Type
// @summary Lazily initializes a static/global object at 0x00B43C84 and stores its address at offset +0x4 of the output argument.
// @field OutArg +0x4 uint32_t* field_0x4

extern void __thiscall ext_0067A670(void* self);
extern uint32_t mem_00B43C84;
extern uint32_t mem_00B43C88;

void __thiscall fn_005B7ED0(void* self, void* arg1) {
    (void)self;
    if ((mem_00B43C88 & 1u) == 0) {
        mem_00B43C88 |= 1u;
        ext_0067A670(&mem_00B43C84);
        mem_00B43C84 = 0x00961B0Cu;
    }
    *reinterpret_cast<uint32_t*>(reinterpret_cast<uint8_t*>(arg1) + 0x4) =
        static_cast<uint32_t>(reinterpret_cast<uintptr_t>(&mem_00B43C84));
}
} // namespace lift_005B7ED0

// [0x005B7FA0]
namespace lift_005B7FA0 {
// @name ExprParser::Method2Type<NMData::MetaBodyData, addImpulseAtPostion>::vfunc_40
// @class ExprParser::Method2Type<NMData::MetaBodyData, NM::Vector3 const &, NM::Vector3 const &, addImpulseAtPostion>
// @summary Lazily initializes a static type/method descriptor at 0x00B43C8C and stores its address at arg0 + 4.


extern uint32_t mem_00B43C90;
extern uint32_t mem_00B43C8C;

extern void __thiscall ext_0067A670(uint32_t self);

void __thiscall fn_005B7FA0(uint32_t self, uint32_t arg0) {
    (void)self;
    if ((mem_00B43C90 & 1u) == 0u) {
        mem_00B43C90 |= 1u;
        ext_0067A670(0x00B43C8Cu);
        mem_00B43C8C = 0x00961CBCu;
    }
    *reinterpret_cast<uint32_t*>(arg0 + 4u) = 0x00B43C8Cu;
}
} // namespace lift_005B7FA0

// [0x0066D230] ExprParser::Method2Type<NM::Vector3, NM::Vector3 const &, NM::Vector3 const &, &public: void __thiscall NM::Vector3::cartesianAtoB_TS(class NM::Vector3 const &, NM::Vector3 const &)>::vfunc_40 (122 bytes)
namespace lift_0066D230 {
// @name ExprParser::Method2Type::vfunc_40 (lazy static descriptor init)
// @class ExprParser::Method2Type<NM::Vector3, NM::Vector3 const &, NM::Vector3 const &, &public: void __thiscall NM::Vector3::cartesianAtoB_TS(class NM::Vector3 const &, NM::Vector3 const &)>
// @summary Lazily initializes the static descriptor object at 0x00B59688 (once, guarded by bit 0 of 0x00B5968C) and stores its address at offset +0x4 of the output argument.
// @field Unknown +0x04 uint32_t field_0x04

extern void ext_0067A670(void* self);
extern int mem_00B5968C;
extern int mem_00B59688;

void __thiscall fn_0066D230(void* self, void* arg1) {
    (void)self;
    if ((static_cast<uint32_t>(mem_00B5968C) & 1u) == 0u) {
        mem_00B5968C = static_cast<int>(static_cast<uint32_t>(mem_00B5968C) | 1u);
        ext_0067A670(&mem_00B59688);
        mem_00B59688 = static_cast<int>(0x0098831Cu);
    }
    *reinterpret_cast<uint32_t*>(reinterpret_cast<uint8_t*>(arg1) + 0x4) =
        static_cast<uint32_t>(reinterpret_cast<uintptr_t>(&mem_00B59688));
}
} // namespace lift_0066D230

// [0x0066D2B0] ExprParser::Method2Type<NM::Vector3, NM::Vector3 const &, NM::Vector3 const &, &public: void __thiscall NM::Vector3::cartesianAtoB_TSA(class NM::Vector3 const &, NM::Vector3 const &)>::vfunc_40 (122 bytes)
namespace lift_0066D2B0 {
extern void ext_0067A670();
extern uint32_t mem_00B59694; // one-time init guard word (bit 0 = initialized)
extern uint32_t mem_00B59690; // function-local static object storage

// @name ExprParser::Method2Type::vfunc_40 (cartesianAtoB_TSA)
// @class ExprParser::Method2Type<NM::Vector3, NM::Vector3 const &, NM::Vector3 const &, &public: void __thiscall NM::Vector3::cartesianAtoB_TSA(class NM::Vector3 const &, NM::Vector3 const &)>
// @summary Lazily initializes the function-local static object at mem_00B59690 once, then stores its address at +0x04 of the argument.
// @field ExprParser::Method2Type<NM::Vector3, NM::Vector3 const &, NM::Vector3 const &, &public: void __thiscall NM::Vector3::cartesianAtoB_TSA(class NM::Vector3 const &, NM::Vector3 const &)> +0x04 void* field_0x04
void fn_0066D2B0(void* self) {
    if ((mem_00B59694 & 1u) == 0) {
        mem_00B59694 |= 1u;
        ext_0067A670();
        mem_00B59690 = 0x009884CCu; // vtable pointer for the static object
    }
    lift_field<uint32_t>(self, 4) = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(&mem_00B59690));
}
} // namespace lift_0066D2B0

// [0x0066D330]
namespace lift_0066D330 {
namespace lift_0066D330 {
// @name ExprParser::Method2Type<NM::Vector3, NM::Vector3 const &, NM::Vector3 const &, &NM::Vector3::cartesianAtoB_SE>::vfunc_40
// @class ExprParser::Method2Type<NM::Vector3, NM::Vector3 const &, NM::Vector3 const &, &NM::Vector3::cartesianAtoB_SE>
// @summary Lazily constructs the function-local static type object at mem_00B59698 (guarded by mem_00B5969C) and stores its address at out+4.
// @field Unknown +0x04 uint32_t field_0x04

extern void ext_0067A670(void* self);
extern uint8_t mem_00B5969C; // one-time initialization guard byte
extern uint8_t mem_00B59698; // static object storage (vtable pointer at +0)

namespace {

constexpr uint32_t kStaticVtable = 0x0098867Cu;

} // namespace

extern void fn_0066D330(void* self, uint32_t outAddr)
{
    (void)self;

    uint32_t* out = reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(outAddr));
    void* staticObj = static_cast<void*>(&mem_00B59698);

    if ((mem_00B5969C & 1u) == 0) {
        // First call: mark initialized before constructing (guards re-entry),
        // construct the object, then install its vtable pointer.
        mem_00B5969C = static_cast<uint8_t>(mem_00B5969C | 1u);
        ext_0067A670(staticObj);
        *reinterpret_cast<uint32_t*>(staticObj) = kStaticVtable;
    }

    out[1] = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(staticObj));
}

} // namespace lift_0066D330
} // namespace lift_0066D330

// [0x005C6130]
namespace lift_005C6130 {
// @name ExprParser::Method2Type::vfunc_40
// @class ExprParser::Method2Type
// @summary Lazily initializes a static type descriptor at 0x00B44448 and stores its address at arg0 + 0x4.
// @field arg0 +0x04 uint32_t field_0x04


extern uint32_t mem_00B44448;
extern uint32_t mem_00B4444C;
void __thiscall ext_0067A670(void* self);

void __thiscall fn_005C6130(void* self, void* arg0) {
    (void)self;
    if ((mem_00B4444C & 1u) == 0) {
        mem_00B4444C |= 1u;
        ext_0067A670(&mem_00B44448);
        mem_00B44448 = 0x009649E4u;
    }
    *reinterpret_cast<uint32_t*>(static_cast<uint8_t*>(arg0) + 4) =
        static_cast<uint32_t>(reinterpret_cast<uintptr_t>(&mem_00B44448));
}
} // namespace lift_005C6130

// [0x005C60B0]
namespace lift_005C60B0 {
// @name ExprParser::Method2Type_addForceAtPostion::vfunc_40
// @class ExprParser::Method2Type<NMData::CollisionModelDataBase, NM::Vector3 const &, NM::Vector3 const &, addForceAtPostion>
// @summary Lazily initializes static object at 0x00B44440 and stores its address at arg0 + 0x4
// @field Arg0 +0x04 uint32_t field_0x04


extern uint32_t mem_00B44444;
extern uint32_t mem_00B44440;
extern void __thiscall ext_0067A670(void* self);

void __thiscall fn_005C60B0(void* self, void* arg0) {
    (void)self;
    if ((mem_00B44444 & 1u) == 0u) {
        mem_00B44444 |= 1u;
        ext_0067A670(&mem_00B44440);
        mem_00B44440 = 0x00964834u;
    }
    *reinterpret_cast<uint32_t*>(reinterpret_cast<uint8_t*>(arg0) + 4) =
        static_cast<uint32_t>(reinterpret_cast<uintptr_t>(&mem_00B44440));
}
} // namespace lift_005C60B0

// [0x0066D4B0]
namespace lift_0066D4B0 {
extern void ext_0067A670();
extern int mem_00B596B4;
extern int mem_00B596B0;

// @name ExprParser::Method2Type::vfunc_40 (NM::Vector3::orientationTwistSwingAnglesAtoB)
// @class ExprParser::Method2Type<NM::Vector3, NM::Vector3 const &, NM::Vector3 const &, &public: void __thiscall NM::Vector3::orientationTwistSwingAnglesAtoB(class NM::Vector3 const &, NM::Vector3 const &)>
// @summary Lazily initializes the static type descriptor at mem_00B596B0 (guarded by bit 0 of mem_00B596B4), then stores its address into out->+0x04.
// @field ExprParser::RestrictedType +0x04 void* field_0x04
void fn_0066D4B0(void* out) {
    if ((mem_00B596B4 & 1) == 0) {
        mem_00B596B4 |= 1;
        ext_0067A670();
        mem_00B596B0 = 0x00988B8C;
    }
    auto* slot = reinterpret_cast<uint32_t*>(static_cast<char*>(out) + 0x04);
    *slot = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(&mem_00B596B0));
}
} // namespace lift_0066D4B0

// [0x0066D430] ExprParser::Method2Type<NM::Vector3, NM::Vector3 const &, NM::Vector3 const &, &public: void __thiscall NM::Vector3::orientationTwistSwingAtoB(class NM::Vector3 const &, NM::Vector3 const &)>::vfunc_40 (122 bytes)
namespace lift_0066D430 {
extern void ext_0067A670(uint32_t this_ecx); // ctor for mem_00B596A8, called with ecx = this
extern uint32_t mem_00B596A8;                // static object storage (first dword = vtable)
extern uint32_t mem_00B596AC;                // one-time-init guard word (bit 0 = initialized)

// @name ExprParser::Method2Type::vfunc_40 (orientationTwistSwingAtoB)
// @class ExprParser::Method2Type<NM::Vector3, NM::Vector3 const &, NM::Vector3 const &, &public: void __thiscall NM::Vector3::orientationTwistSwingAtoB(class NM::Vector3 const &, NM::Vector3 const &)>
// @summary Lazily constructs the static object at mem_00B596A8 once (guarded by bit 0 of mem_00B596AC), then stores its address into the out-pointer's +0x04 slot.
// @field ExprParser::Method2Type<NM::Vector3, NM::Vector3 const &, NM::Vector3 const &, &public: void __thiscall NM::Vector3::orientationTwistSwingAtoB(class NM::Vector3 const &, NM::Vector3 const &)> +0x04 uint32_t field_0x04
//
// Notes:
//   - Original is __stdcall with one stack argument (ret 4); arg is the object whose +0x04 receives the static's address.
//   - The fs:[0] SEH frame setup/teardown is compiler scaffolding and is omitted.
//   - On first call: set guard bit, run the constructor (ext_0067A670), then store vtable 0x009889DC at mem_00B596A8.
void fn_0066D430(void* arg) {
    if ((mem_00B596AC & 1u) == 0u) {
        mem_00B596AC |= 1u;
        ext_0067A670(0x00B596A8u);
        mem_00B596A8 = 0x009889DCu;
    }
    auto* slot = reinterpret_cast<uint32_t*>(static_cast<uint8_t*>(arg) + 0x04);
    *slot = 0x00B596A8u;
}
} // namespace lift_0066D430

// [0x0066D3B0] ExprParser::Method2Type<NM::Vector3, NM::Vector3 const &, NM::Vector3 const &, &public: void __thiscall NM::Vector3::cartesianAtoB_E(class NM::Vector3 const &, NM::Vector3 const &)>::vfunc_40 (122 bytes)
namespace lift_0066D3B0 {
// Callee 0x0067A670 (sub_0067A670): one-time initializer for the static at mem_00B596A0.
// Receives the static's address as `this` (ecx). The stack slot the original wrote as 0
// is the SEH try-level bookkeeping, not an argument, so it is not lifted.
extern void ext_0067A670(void* self);
extern int mem_00B596A4; // guard word for the function-local static (bit 0 = initialized)
extern int mem_00B596A0; // function-local static object (its first dword is a vtable pointer)

// @name ExprParser::Method2Type::vfunc_40
// @class ExprParser::Method2Type
// @summary Lazily initializes the static object at 0x00B596A0 (once, guarded by bit 0 of 0x00B596A4) and writes its address to the out-pointer's +4 slot.

// Behavior:
//   if ((guard & 1) == 0) {          // first call
//       guard |= 1;
//       ext_0067A670(&static_obj);   // construct/initialize the static
//       static_obj.vtable = 0x0098882C;
//   }
//   *(uint32_t*)(out + 4) = 0x00B596A0;  // return the static's address via out
// The original is a single-stack-argument routine (ret 4); `out` is that argument.
// Only the +4 slot of `out` is accessed; its owning class is not identified, so no @field is emitted.
void fn_0066D3B0(void* out) {
    if ((mem_00B596A4 & 1) == 0) {
        mem_00B596A4 |= 1;
        ext_0067A670(&mem_00B596A0);
        mem_00B596A0 = static_cast<int>(0x0098882Cu);
    }
    *reinterpret_cast<uint32_t*>(static_cast<uint8_t*>(out) + 4) = 0x00B596A0u;
}
} // namespace lift_0066D3B0

// [0x005B7E80] ExprParser::Method2Type<NMData::MetaBodyData, NM::Vector3 const &, NM::Vector3 const &, {public: void __thiscall NMData::MetaBodyData::addForceAtPostion(class NM::Vector3 const &, NM::Vector3 const &), 0}>::vfunc_49 (75 bytes)
namespace lift_005B7E80 {
// @name ExprParser::Method2Type<NMData::MetaBodyData, NM::Vector3 const &, NM::Vector3 const &, {public: void __thiscall NMData::MetaBodyData::addForceAtPostion(class NM::Vector3 const &, NM::Vector3 const &), 0}>::vfunc_49
// @class ExprParser::Method2Type<NMData::MetaBodyData, NM::Vector3 const &, NM::Vector3 const &, {public: void __thiscall NMData::MetaBodyData::addForceAtPostion(class NM::Vector3 const &, NM::Vector3 const &), 0}>
// @summary Auto-lifted identical-shape clone of 0x0066C2B0 (ExprParser::Method2Type<NM::Vector3, NM::Vector3 const &, NM::Vector3 const &, &public: void __thiscall NM::Vector3::orientationShoulderEulersAtoB(class NM::Vector3 const &, NM::Vector3 const &)>::vfunc_49).
namespace lift_0066C2B0 {
// @name ExprParser::Method2Type<NM::Vector3, NM::Vector3 const &, NM::Vector3 const &, &public: void __thiscall NM::Vector3::orientationShoulderEulersAtoB(class NM::Vector3 const &, NM::Vector3 const &)>::vfunc_49
// @class ExprParser::Method2Type<NM::Vector3, NM::Vector3 const &, NM::Vector3 const &, &public: void __thiscall NM::Vector3::orientationShoulderEulersAtoB(class NM::Vector3 const &, NM::Vector3 const &)>
// @summary Auto-lifted identical-shape clone of 0x005B7E80 (ExprParser::Method2Type::vfunc_49).
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
} // namespace lift_0066C2B0
} // namespace lift_005B7E80
