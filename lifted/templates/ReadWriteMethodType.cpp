// Lifted C++ translation unit: lifted/templates/ReadWriteMethodType.cpp
#include "lift_compat.h"
#include <stdexcept>

// [0x00695620] ExprParser::ReadWriteMethodType<DoubleWithProperties, float, &public: float __thiscall DoubleWithProperties::getValue(void) const, float, &public: void __thiscall DoubleWithProperties::setValue(float)>::vfunc_41 (62 bytes)
namespace lift_00695620 {
// Virtual-call shape of the inner object's slot 1 (vtable +0x04): float getter taking one stack argument.
typedef float (__thiscall* ReadFloatVFunc)(void* self, void* arg);

// @name ExprParser::ReadWriteMethodType<DoubleWithProperties>::vfunc_41 (DoubleWithProperties::getValue)
// @class ExprParser::ReadWriteMethodType<DoubleWithProperties, float, &public: float __thiscall DoubleWithProperties::getValue(void) const, float, &public: void __thiscall DoubleWithProperties::setValue(float)>
// @summary Reads a float via the source's inner getter and stores it as a double into the target slot; throws if the target slot is null.
// @field ExprParser::ValuePtrType +0x00 double* target
// @field ExprParser::ReadWriteMethodType +0x04 void* inner
void fn_00695620(void* dst, void* src) {
    // dst +0x00: double* destination. Null means the write target is missing, which is an error.
    double* out = *reinterpret_cast<double**>(dst);
    if (out == nullptr) {
        // The original throws a MSVC C++ exception here (MSVCR80 _CxxThrowException with a
        // type descriptor at 0x009DEC1C). No portable equivalent of that exact type exists.
        throw std::runtime_error("ReadWriteMethodType: null double target");
    }

    // src +0x04: inner object whose vtable slot 1 (+0x04) returns the float value.
    void* inner = *reinterpret_cast<void**>(reinterpret_cast<char*>(src) + 0x04);
    void** vtbl = *reinterpret_cast<void***>(inner);
    ReadFloatVFunc getter = reinterpret_cast<ReadFloatVFunc>(vtbl[1]);

    float value = getter(inner, src);
    *out = static_cast<double>(value);
}
} // namespace lift_00695620

// [0x0066EBA0] ExprParser::ReadWriteMethodType<NM::Vector3, float, &public: float __thiscall NM::Vector3::getX(void) const, float, &public: void __thiscall NM::Vector3::setX(float)>::vfunc_41 (62 bytes)
namespace lift_0066EBA0 {
extern void ext_0046C3C0();
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk forwarding to MSVCR80!_CxxThrowException.)
extern void ext_006A6DD2();

// @name ExprParser::ReadWriteMethodType<NM::Vector3>::vfunc_41 (NM::Vector3::getX into float out-slot)
// @class ExprParser::ReadWriteMethodType<NM::Vector3, float, &public: float __thiscall NM::Vector3::getX(void) const, float, &public: void __thiscall NM::Vector3::setX(float)>
// @summary Reads a float through the holder's accessor sub-object (vtable slot 1) and stores it into the float slot pointed to by *out; throws if *out is null.
// @field ExprParser::ValuePtrType +0x04 void* field_0x04
void fn_0066EBA0(void** out, void* holder) {
    // *out must point at a writable float; a null destination throws.
    float* dest = reinterpret_cast<float*>(*out);
    if (dest == nullptr) {
        ext_0046C3C0();
        ext_006A6DD2();
        return;
    }

    // Accessor sub-object lives at holder+0x04. Its vtable slot 1 takes the
    // holder as its single stack argument (original: call [vtbl+4], push holder).
    void* accessor = *reinterpret_cast<void**>(static_cast<std::uint8_t*>(holder) + 0x04);
    void** vtbl = *reinterpret_cast<void***>(accessor);
    using GetFn = float (*)(void* self, void* holder);
    GetFn get = reinterpret_cast<GetFn>(vtbl[1]);
    const float value = get(accessor, holder);

    *dest = value;
}
} // namespace lift_0066EBA0

// [0x004B1A70]
namespace lift_004B1A70 {
// @name ExprParser::ReadWriteMethodType<NMData::GraphEntryData,int,getColor,setColor>::vfunc_41
// @class ExprParser::ReadWriteMethodType<NMData::GraphEntryData,int,getColor,setColor>
// @summary Dereferences the first pointer in self; if non-null, calls vtable slot 2 of arg's sub-object with arg and stores the result at target+0x20; throws if null.
// @field Unknown +0x20 uint32_t field_0x20


extern void ext_0046C3C0(void* exc);
extern void __stdcall ext_006A6DD2(void* pExceptionObject, uint32_t pThrowInfo);

extern void __stdcall fn_004B1A70(void* const* self, void* arg) {
    uint8_t* target = static_cast<uint8_t*>(*self);
    if (target) {
        void* sub = *reinterpret_cast<void* const*>(static_cast<uint8_t*>(arg) + 4);
        void* const* vtbl = *reinterpret_cast<void* const* const*>(sub);
        using SlotFn = uint32_t (__thiscall*)(void* thisPtr, void* a);
        SlotFn slot = reinterpret_cast<SlotFn>(vtbl[2]);
        uint32_t result = slot(sub, arg);
        *reinterpret_cast<uint32_t*>(target + 0x20) = result;
        return;
    }
    alignas(16) uint8_t exc[0x28];
    ext_0046C3C0(exc);
    ext_006A6DD2(exc, 0x009DEC1Cu);
    return;
}
} // namespace lift_004B1A70

// [0x004B1D40]
namespace lift_004B1D40 {
// @name ExprParser::ReadWriteMethodType<NMData::GraphEntryData,bool,isActive,activate>::vfunc_41
// @class ExprParser::ReadWriteMethodType<NMData::GraphEntryData,bool,isActive,activate>
// @summary Dereferences the first pointer in self; if non-null, calls vtable slot 3 of arg's sub-object with arg and stores the bool result at target+0x01; throws if null.
// @field ValuePtrType +0x00 void* ptr
// @field Unknown +0x01 uint8_t field_0x01


extern void ext_0046C3C0(void* exc);
extern void __stdcall ext_006A6DD2(void* pExceptionObject, uint32_t pThrowInfo);

extern void __stdcall fn_004B1D40(void* const* self, void* arg) {
    uint8_t* target = static_cast<uint8_t*>(*self);
    if (target) {
        void* sub = *reinterpret_cast<void* const*>(static_cast<uint8_t*>(arg) + 4);
        void* const* vtbl = *reinterpret_cast<void* const* const*>(sub);
        using SlotFn = uint8_t (__thiscall*)(void* thisPtr, void* a);
        SlotFn slot = reinterpret_cast<SlotFn>(vtbl[3]);
        uint8_t result = slot(sub, arg);
        target[1] = result;
        return;
    }
    alignas(16) uint8_t exc[0x28];
    ext_0046C3C0(exc);
    ext_006A6DD2(exc, 0x009DEC1Cu);
}
} // namespace lift_004B1D40

// [0x004B7B80]
namespace lift_004B7B80 {
// @name ExprParser::ReadWriteMethodType<NMData::EngineData,float,getTimeZoomFactor,setTimeZoomFactor>::vfunc_41
// @class ExprParser::ReadWriteMethodType<NMData::EngineData,float,getTimeZoomFactor,setTimeZoomFactor>
// @summary Dereferences the first pointer in self; if non-null, calls vtable slot 1 of arg's sub-object and stores the float result at target+0x24; throws if null.
// @field ValuePtrType +0x00 void* ptr
// @field Unknown +0x04 void* field_0x04
// @field Unknown +0x24 float field_0x24

extern void ext_0046C3C0(void* exc);
extern void __stdcall ext_006A6DD2(void* pExceptionObject, uint32_t pThrowInfo);

extern void __stdcall fn_004B7B80(void* const* self, void* arg) {
    uint8_t* target = static_cast<uint8_t*>(*self);
    if (target) {
        void* sub = *reinterpret_cast<void* const*>(static_cast<uint8_t*>(arg) + 4);
        void* const* vtbl = *reinterpret_cast<void* const* const*>(sub);
        using SlotFn = float (__thiscall*)(void* thisPtr, void* a);
        SlotFn slot = reinterpret_cast<SlotFn>(vtbl[1]);
        float result = slot(sub, arg);
        *reinterpret_cast<float*>(target + 0x24) = result;
        return;
    }
    alignas(16) uint8_t exc[0x28];
    ext_0046C3C0(exc + 4);
    ext_006A6DD2(exc + 4, 0x009DEC1Cu);
}
} // namespace lift_004B7B80

// [0x00605960] ExprParser::ReadWriteMethodType<Effector, float, getForceBaseCap, setBaseForceCap>::vfunc_41 (63 bytes)
namespace lift_00605960 {
extern void ext_0046C3C0();
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk forwarding to MSVCR80!_CxxThrowException.)
extern void ext_006A6DD2();
// RTTI/throw info referenced by the null-target error path (pushed as the throw's ThrowInfo argument).
extern const char mem_009DEC1C[];

// @name ExprParser::ReadWriteMethodType<Effector, float, getForceBaseCap, setBaseForceCap>::vfunc_41
// @class ExprParser::ReadWriteMethodType<Effector, float, getForceBaseCap, setBaseForceCap>
// @summary Reads a float from the inner reader (vtable slot 1) and stores it into the target Effector's +0x54 field; throws if the target is null.
// @field ExprParser::ReadWriteMethodType<Effector, float, getForceBaseCap, setBaseForceCap> +0x04 void* field_0x04
// @field Effector +0x54 float field_0x54
void fn_00605960(void** target_holder, void* reader_holder) {
    // target_holder: pointer to the Effector pointer (first stack arg).
    void* target = *target_holder;
    if (target == nullptr) {
        ext_0046C3C0();
        (void)mem_009DEC1C;
        ext_006A6DD2();
        return;
    }

    // reader_holder->+0x04 is the inner reader object; its vtable slot 1 yields the float.
    void* reader = *reinterpret_cast<void**>(static_cast<uint8_t*>(reader_holder) + 0x04);
    void** vtable = *reinterpret_cast<void***>(reader);
    auto getter = reinterpret_cast<float (*)(void*, void*)>(vtable[1]);
    float value = getter(reader, reader_holder);

    lift_field<float>(target, 0x54) = value;
}
} // namespace lift_00605960
