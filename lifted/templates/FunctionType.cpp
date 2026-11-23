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
