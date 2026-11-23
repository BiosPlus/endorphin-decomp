// Lifted C++ translation unit: lifted/templates/FunctionType.cpp
#include "lift_compat.h"
// Lifted from 0x005B8660: RTTI type-guard vfunc (MSVC __RTDynamicCast wrapper).
// Known callee 0x006A6E9E: thunk_MSVCR80___RTDynamicCast (IAT jump thunk to MSVCR80!__RTDynamicCast, cdecl, 5 args).
extern "C" void* ext_006A6E9E(void* inptr, int vfDelta, const void* srcType, const void* targetType, int isReference);
extern "C" int mem_00A2FB78;
extern "C" int mem_00A2E2F8;
// Lifted from 0x0062E3C0: RTTI type-guard vfunc (MSVC __RTDynamicCast wrapper).
// Known callee 0x006A6E9E: thunk_MSVCR80___RTDynamicCast (IAT jump thunk to MSVCR80!__RTDynamicCast, cdecl, 5 args).
extern "C" int mem_00A98AC8;

// Known callee 0x006A6E9E: thunk_MSVCR80___RTDynamicCast (IAT jump thunk to MSVCR80!__RTDynamicCast, cdecl, 5 args).
extern "C" int mem_00A98AC8;
// @class ExprParser::FunctionType<NMData::MetaBodyData,getNearestGeomPoint>
// @summary RTTI-checked cast of self to the getNearestGeomPoint FunctionType descriptor; returns the cast pointer or NULL.
void* fn_005B8660(void* self) {
    return ext_006A6E9E(self, 0, &mem_00A2E2F8, &mem_00A2FB78, 0);
}
// Lifted from 0x006922D0: RTTI type-guard vfunc (MSVC __RTDynamicCast wrapper).
// Known callee 0x006A6E9E: thunk_MSVCR80___RTDynamicCast (IAT jump thunk to MSVCR80!__RTDynamicCast, cdecl, 5 args).
extern "C" int mem_00A398D0;

// Known callee 0x006A6E9E: thunk_MSVCR80___RTDynamicCast (IAT jump thunk to MSVCR80!__RTDynamicCast, cdecl, 5 args).
extern "C" int mem_00A398D0;
// @class ExprParser::FunctionType<Sensors::CompoundSensorPlanes,checkDistance>
// @summary RTTI-checked cast of self to the CompoundSensorPlanes::checkDistance FunctionType descriptor; returns the cast pointer or NULL.
void* fn_0062E3C0(void* self) {
    return ext_006A6E9E(self, 0, &mem_00A2E2F8, &mem_00A98AC8, 0);
}
// Lifted from 0x005B7AE0: FunctionType vfunc_48 dispatch for MetaBodyData::getVelocityAtPoint.
// Known callees (thiscall: first parameter is ecx).
extern "C" void* ext_005B6C80(void* self, void* arg);  // sub_005B6C80 (40B)
extern "C" void ext_00672110(void* self, void* arg);    // sub_00672110 (52B)

// Known callees (thiscall: first parameter is ecx).
extern "C" void* ext_005B6C80(void* self, void* arg);  // sub_005B6C80 (40B)
extern "C" void ext_00672110(void* self, void* arg);    // sub_00672110 (52B)
// @summary RTTI-checked cast of self to the ValuePtrArrayObject::push FunctionType descriptor; returns the cast pointer or NULL.
void* fn_006922D0(void* self) {
    return ext_006A6E9E(self, 0, &mem_00A2E2F8, &mem_00A398D0, 0);
}
extern "C" void* ext_005B70E0(void* self, void* arg);  // sub_005B6C80 (40B)
extern "C" void* ext_005C39F0(void* self, void* arg);  // sub_005B6C80 (40B)
extern "C" void* ext_005C3CB0(void* self, void* arg);  // sub_005B6C80 (40B)

// [0x005B7AE0] ExprParser::FunctionType<NMData::MetaBodyData, NM::Vector3 const &, NM::Vector3 const &, {public: class NM::Vector3 const & __thiscall NMData::MetaBodyData::getVelocityAtPoint(class NM::Vector3 const &), 0}>::vfunc_48 (58 bytes)
// @name ExprParser::FunctionType<NMData::MetaBodyData,getVelocityAtPoint>::vfunc_48
// @class ExprParser::FunctionType<NMData::MetaBodyData,getVelocityAtPoint>
// @summary Calls arg3's vtable slot 5 to get a value, feeds it to the object behind arg2 via ext_005B6C80, pushes that result into self via ext_00672110, and returns self.
// @field Unknown +0x04 void* field_0x04
void* fn_005B7AE0(void* self, void* const* arg2, void* arg3) {
    void* obj = *arg2;                                                        // esi = [A2]
    void* sub = *reinterpret_cast<void* const*>(static_cast<char*>(arg3) + 4); // ecx = [A3+4]
    void** vtbl = *reinterpret_cast<void***>(sub);                            // edx = [ecx]
    auto vcall = reinterpret_cast<void* (*)(void*, void*)>(vtbl[5]);          // [edx+0x14]
    void* r1 = vcall(sub, arg3);
    void* r2 = ext_005B6C80(obj, r1);
    ext_00672110(self, r2);
    return self;
}

// [0x005B80F0] ExprParser::FunctionType<NMData::MetaBodyData, NM::Vector3 const &, NM::Vector3 const &, {public: class NM::Vector3 const & __thiscall NMData::MetaBodyData::getNearestGeomPoint(class NM::Vector3 const &), 0}>::vfunc_48 (58 bytes)
// @name ExprParser::FunctionType<NMData::MetaBodyData, NM::Vector3 const &, NM::Vector3 const &, {public: class NM::Vector3 const & __thiscall NMData::MetaBodyData::getNearestGeomPoint(class NM::Vector3 const &), 0}>::vfunc_48
// @class ExprParser::FunctionType<NMData::MetaBodyData, NM::Vector3 const &, NM::Vector3 const &, {public: class NM::Vector3 const & __thiscall NMData::MetaBodyData::getNearestGeomPoint(class NM::Vector3 const &), 0}>
// @summary Auto-lifted identical-shape clone of 0x005B7AE0 (ExprParser::FunctionType<NMData::MetaBodyData,getVelocityAtPoint>::vfunc_48).
void* fn_005B80F0(void* self, void* const* arg2, void* arg3) {
    void* obj = *arg2;                                                        // esi = [A2]
    void* sub = *reinterpret_cast<void* const*>(static_cast<char*>(arg3) + 4); // ecx = [A3+4]
    void** vtbl = *reinterpret_cast<void***>(sub);                            // edx = [ecx]
    auto vcall = reinterpret_cast<void* (*)(void*, void*)>(vtbl[5]);          // [edx+0x14]
    void* r1 = vcall(sub, arg3);
    void* r2 = ext_005B70E0(obj, r1);
    ext_00672110(self, r2);
    return self;
}

// [0x005C5E10] ExprParser::FunctionType<NMData::CollisionModelDataBase, NM::Vector3 const &, NM::Vector3 const &, {protected: class NM::Vector3 const & __thiscall NMData::CollisionModelDataBase::getVelocityAtPoint(class NM::Vector3 const &), 0}>::vfunc_48 (58 bytes)
// @name ExprParser::FunctionType<NMData::CollisionModelDataBase, NM::Vector3 const &, NM::Vector3 const &, {protected: class NM::Vector3 const & __thiscall NMData::CollisionModelDataBase::getVelocityAtPoint(class NM::Vector3 const &), 0}>::vfunc_48
// @class ExprParser::FunctionType<NMData::CollisionModelDataBase, NM::Vector3 const &, NM::Vector3 const &, {protected: class NM::Vector3 const & __thiscall NMData::CollisionModelDataBase::getVelocityAtPoint(class NM::Vector3 const &), 0}>
// @summary Auto-lifted identical-shape clone of 0x005B7AE0 (ExprParser::FunctionType<NMData::MetaBodyData,getVelocityAtPoint>::vfunc_48).
void* fn_005C5E10(void* self, void* const* arg2, void* arg3) {
    void* obj = *arg2;                                                        // esi = [A2]
    void* sub = *reinterpret_cast<void* const*>(static_cast<char*>(arg3) + 4); // ecx = [A3+4]
    void** vtbl = *reinterpret_cast<void***>(sub);                            // edx = [ecx]
    auto vcall = reinterpret_cast<void* (*)(void*, void*)>(vtbl[5]);          // [edx+0x14]
    void* r1 = vcall(sub, arg3);
    void* r2 = ext_005C39F0(obj, r1);
    ext_00672110(self, r2);
    return self;
}

// [0x005C5EA0] ExprParser::FunctionType<NMData::CollisionModelDataBase, NM::Vector3 const &, NM::Vector3 const &, {public: class NM::Vector3 const & __thiscall NMData::CollisionModelDataBase::getNearestGeomPoint(class NM::Vector3 const &), 0}>::vfunc_48 (58 bytes)
// @name ExprParser::FunctionType<NMData::CollisionModelDataBase, NM::Vector3 const &, NM::Vector3 const &, {public: class NM::Vector3 const & __thiscall NMData::CollisionModelDataBase::getNearestGeomPoint(class NM::Vector3 const &), 0}>::vfunc_48
// @class ExprParser::FunctionType<NMData::CollisionModelDataBase, NM::Vector3 const &, NM::Vector3 const &, {public: class NM::Vector3 const & __thiscall NMData::CollisionModelDataBase::getNearestGeomPoint(class NM::Vector3 const &), 0}>
// @summary Auto-lifted identical-shape clone of 0x005B7AE0 (ExprParser::FunctionType<NMData::MetaBodyData,getVelocityAtPoint>::vfunc_48).
void* fn_005C5EA0(void* self, void* const* arg2, void* arg3) {
    void* obj = *arg2;                                                        // esi = [A2]
    void* sub = *reinterpret_cast<void* const*>(static_cast<char*>(arg3) + 4); // ecx = [A3+4]
    void** vtbl = *reinterpret_cast<void***>(sub);                            // edx = [ecx]
    auto vcall = reinterpret_cast<void* (*)(void*, void*)>(vtbl[5]);          // [edx+0x14]
    void* r1 = vcall(sub, arg3);
    void* r2 = ext_005C3CB0(obj, r1);
    ext_00672110(self, r2);
    return self;
}

// [0x0068BF40]
namespace lift_0068BF40 {
extern uint32_t mem_read32(uint32_t addr);
extern uint32_t ext_0068BC00(uint32_t self, uint32_t arg);
extern uint32_t ext_006720C0(uint32_t self, uint32_t arg);

// @name ExprParser::FunctionType<Randomizer, int, int, randIntExcN>::vfunc_48
// @class ExprParser::FunctionType
// @summary Evaluates argument via vtable+0x8, calls Randomizer::randIntExcN (0x0068BC00), and wraps result into out-value (0x006720C0).
// @field ExprParser::ValuePtr +0x4 uint32_t field_0x04
uint32_t __thiscall fn_0068BF40(uint32_t self, uint32_t out_val, uint32_t obj_ptr, uint32_t arg_ptr) {
    (void)self;
    uint32_t target = mem_read32(obj_ptr);
    uint32_t arg_obj = mem_read32(arg_ptr + 0x4);
    uint32_t vtable = mem_read32(arg_obj);
    uint32_t vfunc = mem_read32(vtable + 0x8);
    using VFunc = uint32_t(__thiscall*)(uint32_t, uint32_t);
    uint32_t eval_res = reinterpret_cast<VFunc>(vfunc)(arg_obj, arg_ptr);
    uint32_t rand_res = ext_0068BC00(target, eval_res);
    ext_006720C0(out_val, rand_res);
    return out_val;
}
} // namespace lift_0068BF40

// [0x005B80A0] ExprParser::FunctionType<NMData::MetaBodyData, float, NM::Vector3 const &, {public: float __thiscall NMData::MetaBodyData::getDistanceToPoint(class NM::Vector3 const &), 0}>::vfunc_48 (69 bytes)
namespace lift_005B80A0 {
// sub_005B7060: thiscall (this in ECX, one 4-byte arg, callee cleans), returns float in ST0.
extern float ext_005B7060(void* self, int32_t arg);
// sub_00672080: thiscall (this in ECX, one float arg, callee cleans), no result used.
extern void ext_00672080(void* self, float value);

// @name ExprParser::FunctionType::vfunc_48 (getDistanceToPoint wrapper)
// @class ExprParser::FunctionType<NMData::MetaBodyData, float, NM::Vector3 const &, {public: float __thiscall NMData::MetaBodyData::getDistanceToPoint(class NM::Vector3 const &), 0}>
// @summary Calls a virtual accessor (vtable slot 5) on the argument's sub-object, forwards the result to ext_005B7060 for the float computation, passes that float to ext_00672080, and returns the wrapped object pointer.
// @field Unknown +0x04 void* field_0x04 (sub-object pointer read from the NM::Vector3 const & argument)
// Note: the vtable call's second stack slot holds the caller's saved ESI (stale); modelled as 0.
// Note: the first stack argument (ret 0xC, 3 args total) is unused.
void* fn_005B80A0(void* /*unused*/, void** objRef, void* arg) {
    void* self = *objRef;

    // arg->sub (at +0x04), then vtable slot 5 (offset 0x14) on that sub-object.
    void* sub = *reinterpret_cast<void**>(static_cast<uint8_t*>(arg) + 0x04);
    void** vtbl = *reinterpret_cast<void***>(sub);
    using VirtFn = int32_t (*)(void* self, void* a, uint32_t b, uint32_t c);
    auto method = reinterpret_cast<VirtFn>(vtbl[5]);
    int32_t r = method(sub, arg, 0, 0);

    float f = ext_005B7060(self, r);
    ext_00672080(self, f);
    return self;
}
} // namespace lift_005B80A0

// [0x005C5E50] ExprParser::FunctionType<NMData::CollisionModelDataBase, float, NM::Vector3 const &, {public: float __thiscall NMData::CollisionModelDataBase::getDistanceToPoint(class NM::Vector3 const &), 0}>::vfunc_48 (69 bytes)
namespace lift_005C5E50 {
extern float __thiscall ext_005C3C20(void* self, uint32_t arg);
extern void __thiscall ext_00672080(void* self, float value);

// @name ExprParser::FunctionType<NMData::CollisionModelDataBase, float, NM::Vector3 const &, {public: float __thiscall NMData::CollisionModelDataBase::getDistanceToPoint(class NM::Vector3 const &), 0}>::vfunc_48
// @class ExprParser::FunctionType<NMData::CollisionModelDataBase, float, NM::Vector3 const &, {public: float __thiscall NMData::CollisionModelDataBase::getDistanceToPoint(class NM::Vector3 const &), 0}>
// @summary Fetches obj=*p and o=q->+0x04, calls o slot 5 with (q, 0), passes the result to ext_005C3C20 (this=obj) as a float, forwards that float to ext_00672080 (this=p), returns p.
// @field Unknown +0x00 void* field_0x00
// @field Unknown +0x04 void* field_0x04
void* fn_005C5E50(void* self, void* a1, void* p, void* q) {
    (void)self;  // ecx is spilled and reused as a scratch register only
    (void)a1;    // first stack argument is never read

    void* obj = *static_cast<void**>(p);
    void* o = *reinterpret_cast<void**>(static_cast<char*>(q) + 0x04);

    // Indirect call through vtable slot 5 (offset 0x14) on o; args (q, 0).
    void** vtbl = *static_cast<void***>(o);
    uint32_t r = reinterpret_cast<uint32_t (*)(void*, void*, uint32_t)>(vtbl[5])(o, q, 0u);

    float f = ext_005C3C20(obj, r);
    ext_00672080(p, f);
    return p;
}
} // namespace lift_005C5E50

// [0x005B8130] ExprParser::FunctionType<NMData::MetaBodyData, float, NM::Vector3 const &, {public: float __thiscall NMData::MetaBodyData::getAreaToNormal(class NM::Vector3 const &), 0}>::vfunc_48 (69 bytes)
namespace lift_005B8130 {
extern float ext_005B71E0(void* self, uint32_t value);
extern void ext_00672080(void* self, float value);

// @name FunctionType_MetaBodyData_getAreaToNormal_vfunc_48
// @class ExprParser::FunctionType<NMData::MetaBodyData, float, NM::Vector3 const &, {public: float __thiscall NMData::MetaBodyData::getAreaToNormal(class NM::Vector3 const &), 0}>
// @summary Evaluates the value argument through its owner's vtable slot 5, feeds the result to ext_005B71E0 to get a float, stores it via ext_00672080 on the target object, and returns the target object (eax).
// @field UnknownArg +0x00 void* field_0x00
// @field UnknownArg +0x04 void* field_0x04
void* fn_005B8130(void* thisPtr, void* unusedArg, void* argRef, void* valueArg) {
    (void)thisPtr;
    (void)unusedArg;

    // *argRef is the target object (kept in esi in the original).
    void* obj = *reinterpret_cast<void**>(argRef);

    // valueArg->owner at +0x04; owner's vtable slot 5 (+0x14) is called
    // with (owner, valueArg, obj, 0) as in the original stack layout.
    void* owner = lift_field<void*>(valueArg, 4);
    void** vtbl = *reinterpret_cast<void***>(owner);
    using Slot5Fn = uint32_t (*)(void* self, void* a, void* b, uint32_t c);
    Slot5Fn slot5 = reinterpret_cast<Slot5Fn>(vtbl[5]);
    uint32_t v = slot5(owner, valueArg, obj, 0u);

    float r = ext_005B71E0(obj, v);
    ext_00672080(obj, r);

    // Original leaves the object pointer in eax; the FPU stack is balanced
    // (fld/fstp pairs), so the declared float return is not produced here.
    return obj;
}
} // namespace lift_005B8130

// [0x0062E3E0] ExprParser::FunctionType<Sensors::CompoundSensorPlanes, float, NM::Vector3 const &, &public: float __thiscall Sensors::CompoundSensorPlanes::checkDistance(class NM::Vector3 const &)>::vfunc_48 (69 bytes)
namespace lift_0062E3E0 {
// @name ExprParser::FunctionType<Sensors::CompoundSensorPlanes, float, NM::Vector3 const &, &public: float __thiscall Sensors::CompoundSensorPlanes::checkDistance(class NM::Vector3 const &)>::vfunc_48
// @class ExprParser::FunctionType<Sensors::CompoundSensorPlanes, float, NM::Vector3 const &, &public: float __thiscall Sensors::CompoundSensorPlanes::checkDistance(class NM::Vector3 const &)>
// @summary Auto-lifted identical-shape clone of 0x005B8130 (FunctionType_MetaBodyData_getAreaToNormal_vfunc_48).
namespace lift_005B8130 {
extern float ext_0062E2D0(void* self, uint32_t value);
extern void ext_00672080(void* self, float value);

// @name FunctionType_MetaBodyData_getAreaToNormal_vfunc_48
// @class ExprParser::FunctionType<NMData::MetaBodyData, float, NM::Vector3 const &, {public: float __thiscall NMData::MetaBodyData::getAreaToNormal(class NM::Vector3 const &), 0}>
// @summary Evaluates the value argument through its owner's vtable slot 5, feeds the result to ext_005B71E0 to get a float, stores it via ext_00672080 on the target object, and returns the target object (eax).
// @field UnknownArg +0x00 void* field_0x00
// @field UnknownArg +0x04 void* field_0x04
void* fn_0062E3E0(void* thisPtr, void* unusedArg, void* argRef, void* valueArg) {
    (void)thisPtr;
    (void)unusedArg;

    // *argRef is the target object (kept in esi in the original).
    void* obj = *reinterpret_cast<void**>(argRef);

    // valueArg->owner at +0x04; owner's vtable slot 5 (+0x14) is called
    // with (owner, valueArg, obj, 0) as in the original stack layout.
    void* owner = lift_field<void*>(valueArg, 4);
    void** vtbl = *reinterpret_cast<void***>(owner);
    using Slot5Fn = uint32_t (*)(void* self, void* a, void* b, uint32_t c);
    Slot5Fn slot5 = reinterpret_cast<Slot5Fn>(vtbl[5]);
    uint32_t v = slot5(owner, valueArg, obj, 0u);

    float r = ext_0062E2D0(obj, v);
    ext_00672080(obj, r);

    // Original leaves the object pointer in eax; the FPU stack is balanced
    // (fld/fstp pairs), so the declared float return is not produced here.
    return obj;
}
} // namespace lift_005B8130
} // namespace lift_0062E3E0

// [0x005C5EE0] ExprParser::FunctionType<NMData::CollisionModelDataBase, float, NM::Vector3 const &, {public: float __thiscall NMData::CollisionModelDataBase::getAreaToNormal(class NM::Vector3 const &), 0}>::vfunc_48 (69 bytes)
namespace lift_005C5EE0 {
// @name ExprParser::FunctionType<NMData::CollisionModelDataBase, float, NM::Vector3 const&, getAreaToNormal>::vfunc_48
// @class ExprParser::FunctionType<NMData::CollisionModelDataBase, float, NM::Vector3 const&, getAreaToNormal>
// @summary Calls CollisionModelDataBase::getAreaToNormal on the object held by arg B, using the vector obtained via a virtual call on arg C, and stores the float result into B; returns B.
// @field ExprParser::FunctionType +0x00 void* field_0x00 (deref of arg B: target CollisionModelDataBase*)
// @field ExprParser::FunctionType +0x04 void* field_0x04 (arg C: holder object pointer at C+4)

extern float ext_005C3DB0(void* self, const void* vec);   // CollisionModelDataBase::getAreaToNormal (thiscall)
extern void  ext_00672080(void* self, float value);       // stores float result into the ValuePtr

// Virtual slot 5 (vtable +0x14) on the holder object; returns a Vector3 const*.
using VSlot5Fn = const void* (*)(void* self, const void* arg, int flags);

void* fn_005C5EE0(void* self, void* a, void** b, void* c) {
    (void)self;
    (void)a;

    void* target = b[0];                             // esi = *B
    void* holder = lift_field<void*>(c, 4);          // *(C + 4)
    void** vtbl = *static_cast<void***>(holder);     // holder->vtable
    VSlot5Fn slot5 = reinterpret_cast<VSlot5Fn>(vtbl[5]);   // vtable +0x14
    const void* vec = slot5(holder, c, 0);

    float result = ext_005C3DB0(target, vec);
    ext_00672080(b, result);
    return b;                                        // eax = B
}
} // namespace lift_005C5EE0
