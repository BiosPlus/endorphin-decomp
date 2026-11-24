// Lifted C++ translation unit: lifted/templates/ReadWriteMethodType.cpp
#include "lift_compat.h"
#include <stdexcept>
#include <cstdint>
#include <cstring>
#include <cstddef>

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

// [0x004B7BC0] ExprParser::ReadWriteMethodType<NMData::EngineData, bool, &public: bool __thiscall NMData::EngineData::enableNonSphericalInertialBodies(void) const, bool, &public: void __thiscall NMData::EngineData::setEnableNonSphericalInertialBodies(bool)>::vfunc_41 (66 bytes)
namespace lift_004B7BC0 {
// @name ExprParser::ReadWriteMethodType<NMData::EngineData, bool, &public: bool __thiscall NMData::EngineData::enableNonSphericalInertialBodies(void) const, bool, &public: void __thiscall NMData::EngineData::setEnableNonSphericalInertialBodies(bool)>::vfunc_41
// @class ExprParser::ReadWriteMethodType<NMData::EngineData, bool, &public: bool __thiscall NMData::EngineData::enableNonSphericalInertialBodies(void) const, bool, &public: void __thiscall NMData::EngineData::setEnableNonSphericalInertialBodies(bool)>
// @summary Auto-lifted identical-shape clone of 0x004B1D40 (ExprParser::ReadWriteMethodType<NMData::GraphEntryData,bool,isActive,activate>::vfunc_41).
namespace lift_004B1D40 {
// @name ExprParser::ReadWriteMethodType<NMData::GraphEntryData,bool,isActive,activate>::vfunc_41
// @class ExprParser::ReadWriteMethodType<NMData::GraphEntryData,bool,isActive,activate>
// @summary Dereferences the first pointer in self; if non-null, calls vtable slot 3 of arg's sub-object with arg and stores the bool result at target+0x01; throws if null.
// @field ValuePtrType +0x00 void* ptr
// @field Unknown +0x01 uint8_t field_0x01


extern void ext_0046C3C0(void* exc);
extern void __stdcall ext_006A6DD2(void* pExceptionObject, uint32_t pThrowInfo);

extern void __stdcall fn_004B7BC0(void* const* self, void* arg) {
    uint8_t* target = static_cast<uint8_t*>(*self);
    if (target) {
        void* sub = *reinterpret_cast<void* const*>(static_cast<uint8_t*>(arg) + 4);
        void* const* vtbl = *reinterpret_cast<void* const* const*>(sub);
        using SlotFn = uint8_t (__thiscall*)(void* thisPtr, void* a);
        SlotFn slot = reinterpret_cast<SlotFn>(vtbl[3]);
        uint8_t result = slot(sub, arg);
        target[131] = result;
        return;
    }
    alignas(16) uint8_t exc[0x28];
    ext_0046C3C0(exc);
    ext_006A6DD2(exc, 0x009DEC1Cu);
}
} // namespace lift_004B1D40
} // namespace lift_004B7BC0

// [0x00617300] ExprParser::ReadWriteMethodType<NMData::HingeLimit, float, &public: float __thiscall NMData::HingeLimit::getUpperStiffness(void) const, float, &public: void __thiscall NMData::HingeLimit::setUpperStiffness(float)>::vfunc_41 (63 bytes)
namespace lift_00617300 {
// @name ExprParser::ReadWriteMethodType<NMData::HingeLimit, float, &public: float __thiscall NMData::HingeLimit::getUpperStiffness(void) const, float, &public: void __thiscall NMData::HingeLimit::setUpperStiffness(float)>::vfunc_41
// @class ExprParser::ReadWriteMethodType<NMData::HingeLimit, float, &public: float __thiscall NMData::HingeLimit::getUpperStiffness(void) const, float, &public: void __thiscall NMData::HingeLimit::setUpperStiffness(float)>
// @summary Auto-lifted identical-shape clone of 0x004B7B80 (ExprParser::ReadWriteMethodType<NMData::EngineData,float,getTimeZoomFactor,setTimeZoomFactor>::vfunc_41).
namespace lift_004B7B80 {
// @name ExprParser::ReadWriteMethodType<NMData::EngineData,float,getTimeZoomFactor,setTimeZoomFactor>::vfunc_41
// @class ExprParser::ReadWriteMethodType<NMData::EngineData,float,getTimeZoomFactor,setTimeZoomFactor>
// @summary Dereferences the first pointer in self; if non-null, calls vtable slot 1 of arg's sub-object and stores the float result at target+0x24; throws if null.
// @field ValuePtrType +0x00 void* ptr
// @field Unknown +0x04 void* field_0x04
// @field Unknown +0x24 float field_0x24

extern void ext_0046C3C0(void* exc);
extern void __stdcall ext_006A6DD2(void* pExceptionObject, uint32_t pThrowInfo);

extern void __stdcall fn_00617300(void* const* self, void* arg) {
    uint8_t* target = static_cast<uint8_t*>(*self);
    if (target) {
        void* sub = *reinterpret_cast<void* const*>(static_cast<uint8_t*>(arg) + 4);
        void* const* vtbl = *reinterpret_cast<void* const* const*>(sub);
        using SlotFn = float (__thiscall*)(void* thisPtr, void* a);
        SlotFn slot = reinterpret_cast<SlotFn>(vtbl[1]);
        float result = slot(sub, arg);
        *reinterpret_cast<float*>(target + 0xC) = result;
        return;
    }
    alignas(16) uint8_t exc[0x28];
    ext_0046C3C0(exc + 4);
    ext_006A6DD2(exc + 4, 0x009DEC1Cu);
}
} // namespace lift_004B7B80
} // namespace lift_00617300

// [0x00617520] ExprParser::ReadWriteMethodType<NMData::HingeLimit, float, &public: float __thiscall NMData::HingeLimit::getLowerRestitution(void) const, float, &public: void __thiscall NMData::HingeLimit::setLowerRestitution(float)>::vfunc_41 (63 bytes)
namespace lift_00617520 {
// @name ExprParser::ReadWriteMethodType<NMData::HingeLimit, float, &public: float __thiscall NMData::HingeLimit::getLowerRestitution(void) const, float, &public: void __thiscall NMData::HingeLimit::setLowerRestitution(float)>::vfunc_41
// @class ExprParser::ReadWriteMethodType<NMData::HingeLimit, float, &public: float __thiscall NMData::HingeLimit::getLowerRestitution(void) const, float, &public: void __thiscall NMData::HingeLimit::setLowerRestitution(float)>
// @summary Auto-lifted identical-shape clone of 0x004B7B80 (ExprParser::ReadWriteMethodType<NMData::EngineData,float,getTimeZoomFactor,setTimeZoomFactor>::vfunc_41).
namespace lift_004B7B80 {
// @name ExprParser::ReadWriteMethodType<NMData::EngineData,float,getTimeZoomFactor,setTimeZoomFactor>::vfunc_41
// @class ExprParser::ReadWriteMethodType<NMData::EngineData,float,getTimeZoomFactor,setTimeZoomFactor>
// @summary Dereferences the first pointer in self; if non-null, calls vtable slot 1 of arg's sub-object and stores the float result at target+0x24; throws if null.
// @field ValuePtrType +0x00 void* ptr
// @field Unknown +0x04 void* field_0x04
// @field Unknown +0x24 float field_0x24

extern void ext_0046C3C0(void* exc);
extern void __stdcall ext_006A6DD2(void* pExceptionObject, uint32_t pThrowInfo);

extern void __stdcall fn_00617520(void* const* self, void* arg) {
    uint8_t* target = static_cast<uint8_t*>(*self);
    if (target) {
        void* sub = *reinterpret_cast<void* const*>(static_cast<uint8_t*>(arg) + 4);
        void* const* vtbl = *reinterpret_cast<void* const* const*>(sub);
        using SlotFn = float (__thiscall*)(void* thisPtr, void* a);
        SlotFn slot = reinterpret_cast<SlotFn>(vtbl[1]);
        float result = slot(sub, arg);
        *reinterpret_cast<float*>(target + 0x10) = result;
        return;
    }
    alignas(16) uint8_t exc[0x28];
    ext_0046C3C0(exc + 4);
    ext_006A6DD2(exc + 4, 0x009DEC1Cu);
}
} // namespace lift_004B7B80
} // namespace lift_00617520

// [0x00618010] ExprParser::ReadWriteMethodType<NM::Vector3, float, &public: float __thiscall NM::Vector3::getZ(void) const, float, &public: void __thiscall NM::Vector3::setZ(float)>::vfunc_41 (63 bytes)
namespace lift_00618010 {
// @name ExprParser::ReadWriteMethodType<NM::Vector3, float, &public: float __thiscall NM::Vector3::getZ(void) const, float, &public: void __thiscall NM::Vector3::setZ(float)>::vfunc_41
// @class ExprParser::ReadWriteMethodType<NM::Vector3, float, &public: float __thiscall NM::Vector3::getZ(void) const, float, &public: void __thiscall NM::Vector3::setZ(float)>
// @summary Auto-lifted identical-shape clone of 0x004B7B80 (ExprParser::ReadWriteMethodType<NMData::EngineData,float,getTimeZoomFactor,setTimeZoomFactor>::vfunc_41).
namespace lift_004B7B80 {
// @name ExprParser::ReadWriteMethodType<NMData::EngineData,float,getTimeZoomFactor,setTimeZoomFactor>::vfunc_41
// @class ExprParser::ReadWriteMethodType<NMData::EngineData,float,getTimeZoomFactor,setTimeZoomFactor>
// @summary Dereferences the first pointer in self; if non-null, calls vtable slot 1 of arg's sub-object and stores the float result at target+0x24; throws if null.
// @field ValuePtrType +0x00 void* ptr
// @field Unknown +0x04 void* field_0x04
// @field Unknown +0x24 float field_0x24

extern void ext_0046C3C0(void* exc);
extern void __stdcall ext_006A6DD2(void* pExceptionObject, uint32_t pThrowInfo);

extern void __stdcall fn_00618010(void* const* self, void* arg) {
    uint8_t* target = static_cast<uint8_t*>(*self);
    if (target) {
        void* sub = *reinterpret_cast<void* const*>(static_cast<uint8_t*>(arg) + 4);
        void* const* vtbl = *reinterpret_cast<void* const* const*>(sub);
        using SlotFn = float (__thiscall*)(void* thisPtr, void* a);
        SlotFn slot = reinterpret_cast<SlotFn>(vtbl[1]);
        float result = slot(sub, arg);
        *reinterpret_cast<float*>(target + 0x8) = result;
        return;
    }
    alignas(16) uint8_t exc[0x28];
    ext_0046C3C0(exc + 4);
    ext_006A6DD2(exc + 4, 0x009DEC1Cu);
}
} // namespace lift_004B7B80
} // namespace lift_00618010

// [0x00618460] ExprParser::ReadWriteMethodType<NMData::HingeLimit, float, &public: float __thiscall NMData::HingeLimit::getLowerDamping(void) const, float, &public: void __thiscall NMData::HingeLimit::setLowerDamping(float)>::vfunc_41 (63 bytes)
namespace lift_00618460 {
// @name ExprParser::ReadWriteMethodType<NMData::HingeLimit, float, &public: float __thiscall NMData::HingeLimit::getLowerDamping(void) const, float, &public: void __thiscall NMData::HingeLimit::setLowerDamping(float)>::vfunc_41
// @class ExprParser::ReadWriteMethodType<NMData::HingeLimit, float, &public: float __thiscall NMData::HingeLimit::getLowerDamping(void) const, float, &public: void __thiscall NMData::HingeLimit::setLowerDamping(float)>
// @summary Auto-lifted identical-shape clone of 0x004B7B80 (ExprParser::ReadWriteMethodType<NMData::EngineData,float,getTimeZoomFactor,setTimeZoomFactor>::vfunc_41).
namespace lift_004B7B80 {
// @name ExprParser::ReadWriteMethodType<NMData::EngineData,float,getTimeZoomFactor,setTimeZoomFactor>::vfunc_41
// @class ExprParser::ReadWriteMethodType<NMData::EngineData,float,getTimeZoomFactor,setTimeZoomFactor>
// @summary Dereferences the first pointer in self; if non-null, calls vtable slot 1 of arg's sub-object and stores the float result at target+0x24; throws if null.
// @field ValuePtrType +0x00 void* ptr
// @field Unknown +0x04 void* field_0x04
// @field Unknown +0x24 float field_0x24

extern void ext_0046C3C0(void* exc);
extern void __stdcall ext_006A6DD2(void* pExceptionObject, uint32_t pThrowInfo);

extern void __stdcall fn_00618460(void* const* self, void* arg) {
    uint8_t* target = static_cast<uint8_t*>(*self);
    if (target) {
        void* sub = *reinterpret_cast<void* const*>(static_cast<uint8_t*>(arg) + 4);
        void* const* vtbl = *reinterpret_cast<void* const* const*>(sub);
        using SlotFn = float (__thiscall*)(void* thisPtr, void* a);
        SlotFn slot = reinterpret_cast<SlotFn>(vtbl[1]);
        float result = slot(sub, arg);
        *reinterpret_cast<float*>(target + 0x18) = result;
        return;
    }
    alignas(16) uint8_t exc[0x28];
    ext_0046C3C0(exc + 4);
    ext_006A6DD2(exc + 4, 0x009DEC1Cu);
}
} // namespace lift_004B7B80
} // namespace lift_00618460

// [0x00618880] ExprParser::ReadWriteMethodType<NMData::EngineData, float, &public: float __thiscall NMData::EngineData::getPosBufferFrameRate(void) const, float, &public: void __thiscall NMData::EngineData::setPosBufferFrameRate(float)>::vfunc_41 (63 bytes)
namespace lift_00618880 {
// @name ExprParser::ReadWriteMethodType<NMData::EngineData, float, &public: float __thiscall NMData::EngineData::getPosBufferFrameRate(void) const, float, &public: void __thiscall NMData::EngineData::setPosBufferFrameRate(float)>::vfunc_41
// @class ExprParser::ReadWriteMethodType<NMData::EngineData, float, &public: float __thiscall NMData::EngineData::getPosBufferFrameRate(void) const, float, &public: void __thiscall NMData::EngineData::setPosBufferFrameRate(float)>
// @summary Auto-lifted identical-shape clone of 0x004B7B80 (ExprParser::ReadWriteMethodType<NMData::EngineData,float,getTimeZoomFactor,setTimeZoomFactor>::vfunc_41).
namespace lift_004B7B80 {
// @name ExprParser::ReadWriteMethodType<NMData::EngineData,float,getTimeZoomFactor,setTimeZoomFactor>::vfunc_41
// @class ExprParser::ReadWriteMethodType<NMData::EngineData,float,getTimeZoomFactor,setTimeZoomFactor>
// @summary Dereferences the first pointer in self; if non-null, calls vtable slot 1 of arg's sub-object and stores the float result at target+0x24; throws if null.
// @field ValuePtrType +0x00 void* ptr
// @field Unknown +0x04 void* field_0x04
// @field Unknown +0x24 float field_0x24

extern void ext_0046C3C0(void* exc);
extern void __stdcall ext_006A6DD2(void* pExceptionObject, uint32_t pThrowInfo);

extern void __stdcall fn_00618880(void* const* self, void* arg) {
    uint8_t* target = static_cast<uint8_t*>(*self);
    if (target) {
        void* sub = *reinterpret_cast<void* const*>(static_cast<uint8_t*>(arg) + 4);
        void* const* vtbl = *reinterpret_cast<void* const* const*>(sub);
        using SlotFn = float (__thiscall*)(void* thisPtr, void* a);
        SlotFn slot = reinterpret_cast<SlotFn>(vtbl[1]);
        float result = slot(sub, arg);
        *reinterpret_cast<float*>(target + 0x1C) = result;
        return;
    }
    alignas(16) uint8_t exc[0x28];
    ext_0046C3C0(exc + 4);
    ext_006A6DD2(exc + 4, 0x009DEC1Cu);
}
} // namespace lift_004B7B80
} // namespace lift_00618880

// [0x00618BB0] ExprParser::ReadWriteMethodType<NMData::HingeLimit, float, &public: float __thiscall NMData::HingeLimit::getUpperRestitution(void) const, float, &public: void __thiscall NMData::HingeLimit::setUpperRestitution(float)>::vfunc_41 (63 bytes)
namespace lift_00618BB0 {
// @name ExprParser::ReadWriteMethodType<NMData::HingeLimit, float, &public: float __thiscall NMData::HingeLimit::getUpperRestitution(void) const, float, &public: void __thiscall NMData::HingeLimit::setUpperRestitution(float)>::vfunc_41
// @class ExprParser::ReadWriteMethodType<NMData::HingeLimit, float, &public: float __thiscall NMData::HingeLimit::getUpperRestitution(void) const, float, &public: void __thiscall NMData::HingeLimit::setUpperRestitution(float)>
// @summary Auto-lifted identical-shape clone of 0x004B7B80 (ExprParser::ReadWriteMethodType<NMData::EngineData,float,getTimeZoomFactor,setTimeZoomFactor>::vfunc_41).
namespace lift_004B7B80 {
// @name ExprParser::ReadWriteMethodType<NMData::EngineData,float,getTimeZoomFactor,setTimeZoomFactor>::vfunc_41
// @class ExprParser::ReadWriteMethodType<NMData::EngineData,float,getTimeZoomFactor,setTimeZoomFactor>
// @summary Dereferences the first pointer in self; if non-null, calls vtable slot 1 of arg's sub-object and stores the float result at target+0x24; throws if null.
// @field ValuePtrType +0x00 void* ptr
// @field Unknown +0x04 void* field_0x04
// @field Unknown +0x24 float field_0x24

extern void ext_0046C3C0(void* exc);
extern void __stdcall ext_006A6DD2(void* pExceptionObject, uint32_t pThrowInfo);

extern void __stdcall fn_00618BB0(void* const* self, void* arg) {
    uint8_t* target = static_cast<uint8_t*>(*self);
    if (target) {
        void* sub = *reinterpret_cast<void* const*>(static_cast<uint8_t*>(arg) + 4);
        void* const* vtbl = *reinterpret_cast<void* const* const*>(sub);
        using SlotFn = float (__thiscall*)(void* thisPtr, void* a);
        SlotFn slot = reinterpret_cast<SlotFn>(vtbl[1]);
        float result = slot(sub, arg);
        *reinterpret_cast<float*>(target + 0x14) = result;
        return;
    }
    alignas(16) uint8_t exc[0x28];
    ext_0046C3C0(exc + 4);
    ext_006A6DD2(exc + 4, 0x009DEC1Cu);
}
} // namespace lift_004B7B80
} // namespace lift_00618BB0

// [0x00619F40] ExprParser::ReadWriteMethodType<NMData::TwistAndSwingLimit, float, &public: float __thiscall NMData::TwistAndSwingLimit::getTwistStiffness(void) const, float, &public: void __thiscall NMData::TwistAndSwingLimit::setTwistStiffness(float)>::vfunc_41 (66 bytes)
namespace lift_00619F40 {
// @name ExprParser::ReadWriteMethodType<NMData::TwistAndSwingLimit, float, &public: float __thiscall NMData::TwistAndSwingLimit::getTwistStiffness(void) const, float, &public: void __thiscall NMData::TwistAndSwingLimit::setTwistStiffness(float)>::vfunc_41
// @class ExprParser::ReadWriteMethodType<NMData::TwistAndSwingLimit, float, &public: float __thiscall NMData::TwistAndSwingLimit::getTwistStiffness(void) const, float, &public: void __thiscall NMData::TwistAndSwingLimit::setTwistStiffness(float)>
// @summary Auto-lifted identical-shape clone of 0x004B7B80 (ExprParser::ReadWriteMethodType<NMData::EngineData,float,getTimeZoomFactor,setTimeZoomFactor>::vfunc_41).
namespace lift_004B7B80 {
// @name ExprParser::ReadWriteMethodType<NMData::EngineData,float,getTimeZoomFactor,setTimeZoomFactor>::vfunc_41
// @class ExprParser::ReadWriteMethodType<NMData::EngineData,float,getTimeZoomFactor,setTimeZoomFactor>
// @summary Dereferences the first pointer in self; if non-null, calls vtable slot 1 of arg's sub-object and stores the float result at target+0x24; throws if null.
// @field ValuePtrType +0x00 void* ptr
// @field Unknown +0x04 void* field_0x04
// @field Unknown +0x24 float field_0x24

extern void ext_0046C3C0(void* exc);
extern void __stdcall ext_006A6DD2(void* pExceptionObject, uint32_t pThrowInfo);

extern void __stdcall fn_00619F40(void* const* self, void* arg) {
    uint8_t* target = static_cast<uint8_t*>(*self);
    if (target) {
        void* sub = *reinterpret_cast<void* const*>(static_cast<uint8_t*>(arg) + 4);
        void* const* vtbl = *reinterpret_cast<void* const* const*>(sub);
        using SlotFn = float (__thiscall*)(void* thisPtr, void* a);
        SlotFn slot = reinterpret_cast<SlotFn>(vtbl[1]);
        float result = slot(sub, arg);
        *reinterpret_cast<float*>(target + 0xA0) = result;
        return;
    }
    alignas(16) uint8_t exc[0x28];
    ext_0046C3C0(exc + 4);
    ext_006A6DD2(exc + 4, 0x009DEC1Cu);
}
} // namespace lift_004B7B80
} // namespace lift_00619F40

// [0x0061A220] ExprParser::ReadWriteMethodType<NMData::TwistAndSwingLimit, float, &public: float __thiscall NMData::TwistAndSwingLimit::getSwingStiffness(void) const, float, &public: void __thiscall NMData::TwistAndSwingLimit::setSwingStiffness(float)>::vfunc_41 (66 bytes)
namespace lift_0061A220 {
// @name ExprParser::ReadWriteMethodType<NMData::TwistAndSwingLimit, float, &public: float __thiscall NMData::TwistAndSwingLimit::getSwingStiffness(void) const, float, &public: void __thiscall NMData::TwistAndSwingLimit::setSwingStiffness(float)>::vfunc_41
// @class ExprParser::ReadWriteMethodType<NMData::TwistAndSwingLimit, float, &public: float __thiscall NMData::TwistAndSwingLimit::getSwingStiffness(void) const, float, &public: void __thiscall NMData::TwistAndSwingLimit::setSwingStiffness(float)>
// @summary Auto-lifted identical-shape clone of 0x004B7B80 (ExprParser::ReadWriteMethodType<NMData::EngineData,float,getTimeZoomFactor,setTimeZoomFactor>::vfunc_41).
namespace lift_004B7B80 {
// @name ExprParser::ReadWriteMethodType<NMData::EngineData,float,getTimeZoomFactor,setTimeZoomFactor>::vfunc_41
// @class ExprParser::ReadWriteMethodType<NMData::EngineData,float,getTimeZoomFactor,setTimeZoomFactor>
// @summary Dereferences the first pointer in self; if non-null, calls vtable slot 1 of arg's sub-object and stores the float result at target+0x24; throws if null.
// @field ValuePtrType +0x00 void* ptr
// @field Unknown +0x04 void* field_0x04
// @field Unknown +0x24 float field_0x24

extern void ext_0046C3C0(void* exc);
extern void __stdcall ext_006A6DD2(void* pExceptionObject, uint32_t pThrowInfo);

extern void __stdcall fn_0061A220(void* const* self, void* arg) {
    uint8_t* target = static_cast<uint8_t*>(*self);
    if (target) {
        void* sub = *reinterpret_cast<void* const*>(static_cast<uint8_t*>(arg) + 4);
        void* const* vtbl = *reinterpret_cast<void* const* const*>(sub);
        using SlotFn = float (__thiscall*)(void* thisPtr, void* a);
        SlotFn slot = reinterpret_cast<SlotFn>(vtbl[1]);
        float result = slot(sub, arg);
        *reinterpret_cast<float*>(target + 0xA4) = result;
        return;
    }
    alignas(16) uint8_t exc[0x28];
    ext_0046C3C0(exc + 4);
    ext_006A6DD2(exc + 4, 0x009DEC1Cu);
}
} // namespace lift_004B7B80
} // namespace lift_0061A220

// [0x0061A4E0] ExprParser::ReadWriteMethodType<NMData::TwistAndSwingLimit, float, &public: float __thiscall NMData::TwistAndSwingLimit::getLinearStiffness(void) const, float, &public: void __thiscall NMData::TwistAndSwingLimit::setLinearStiffness(float)>::vfunc_41 (66 bytes)
namespace lift_0061A4E0 {
// @name ExprParser::ReadWriteMethodType<NMData::TwistAndSwingLimit, float, &public: float __thiscall NMData::TwistAndSwingLimit::getLinearStiffness(void) const, float, &public: void __thiscall NMData::TwistAndSwingLimit::setLinearStiffness(float)>::vfunc_41
// @class ExprParser::ReadWriteMethodType<NMData::TwistAndSwingLimit, float, &public: float __thiscall NMData::TwistAndSwingLimit::getLinearStiffness(void) const, float, &public: void __thiscall NMData::TwistAndSwingLimit::setLinearStiffness(float)>
// @summary Auto-lifted identical-shape clone of 0x004B7B80 (ExprParser::ReadWriteMethodType<NMData::EngineData,float,getTimeZoomFactor,setTimeZoomFactor>::vfunc_41).
namespace lift_004B7B80 {
// @name ExprParser::ReadWriteMethodType<NMData::EngineData,float,getTimeZoomFactor,setTimeZoomFactor>::vfunc_41
// @class ExprParser::ReadWriteMethodType<NMData::EngineData,float,getTimeZoomFactor,setTimeZoomFactor>
// @summary Dereferences the first pointer in self; if non-null, calls vtable slot 1 of arg's sub-object and stores the float result at target+0x24; throws if null.
// @field ValuePtrType +0x00 void* ptr
// @field Unknown +0x04 void* field_0x04
// @field Unknown +0x24 float field_0x24

extern void ext_0046C3C0(void* exc);
extern void __stdcall ext_006A6DD2(void* pExceptionObject, uint32_t pThrowInfo);

extern void __stdcall fn_0061A4E0(void* const* self, void* arg) {
    uint8_t* target = static_cast<uint8_t*>(*self);
    if (target) {
        void* sub = *reinterpret_cast<void* const*>(static_cast<uint8_t*>(arg) + 4);
        void* const* vtbl = *reinterpret_cast<void* const* const*>(sub);
        using SlotFn = float (__thiscall*)(void* thisPtr, void* a);
        SlotFn slot = reinterpret_cast<SlotFn>(vtbl[1]);
        float result = slot(sub, arg);
        *reinterpret_cast<float*>(target + 0xA8) = result;
        return;
    }
    alignas(16) uint8_t exc[0x28];
    ext_0046C3C0(exc + 4);
    ext_006A6DD2(exc + 4, 0x009DEC1Cu);
}
} // namespace lift_004B7B80
} // namespace lift_0061A4E0

// [0x0061A7D0] ExprParser::ReadWriteMethodType<NMData::TwistAndSwingLimit, float, &public: float __thiscall NMData::TwistAndSwingLimit::getSwingDamping(void) const, float, &public: void __thiscall NMData::TwistAndSwingLimit::setSwingDamping(float)>::vfunc_41 (66 bytes)
namespace lift_0061A7D0 {
// @name ExprParser::ReadWriteMethodType<NMData::TwistAndSwingLimit, float, &public: float __thiscall NMData::TwistAndSwingLimit::getSwingDamping(void) const, float, &public: void __thiscall NMData::TwistAndSwingLimit::setSwingDamping(float)>::vfunc_41
// @class ExprParser::ReadWriteMethodType<NMData::TwistAndSwingLimit, float, &public: float __thiscall NMData::TwistAndSwingLimit::getSwingDamping(void) const, float, &public: void __thiscall NMData::TwistAndSwingLimit::setSwingDamping(float)>
// @summary Auto-lifted identical-shape clone of 0x004B7B80 (ExprParser::ReadWriteMethodType<NMData::EngineData,float,getTimeZoomFactor,setTimeZoomFactor>::vfunc_41).
namespace lift_004B7B80 {
// @name ExprParser::ReadWriteMethodType<NMData::EngineData,float,getTimeZoomFactor,setTimeZoomFactor>::vfunc_41
// @class ExprParser::ReadWriteMethodType<NMData::EngineData,float,getTimeZoomFactor,setTimeZoomFactor>
// @summary Dereferences the first pointer in self; if non-null, calls vtable slot 1 of arg's sub-object and stores the float result at target+0x24; throws if null.
// @field ValuePtrType +0x00 void* ptr
// @field Unknown +0x04 void* field_0x04
// @field Unknown +0x24 float field_0x24

extern void ext_0046C3C0(void* exc);
extern void __stdcall ext_006A6DD2(void* pExceptionObject, uint32_t pThrowInfo);

extern void __stdcall fn_0061A7D0(void* const* self, void* arg) {
    uint8_t* target = static_cast<uint8_t*>(*self);
    if (target) {
        void* sub = *reinterpret_cast<void* const*>(static_cast<uint8_t*>(arg) + 4);
        void* const* vtbl = *reinterpret_cast<void* const* const*>(sub);
        using SlotFn = float (__thiscall*)(void* thisPtr, void* a);
        SlotFn slot = reinterpret_cast<SlotFn>(vtbl[1]);
        float result = slot(sub, arg);
        *reinterpret_cast<float*>(target + 0xB0) = result;
        return;
    }
    alignas(16) uint8_t exc[0x28];
    ext_0046C3C0(exc + 4);
    ext_006A6DD2(exc + 4, 0x009DEC1Cu);
}
} // namespace lift_004B7B80
} // namespace lift_0061A7D0

// [0x0061AE50] ExprParser::ReadWriteMethodType<NMData::TwistAndSwingLimit, float, &public: float __thiscall NMData::TwistAndSwingLimit::getTwistDamping(void) const, float, &public: void __thiscall NMData::TwistAndSwingLimit::setTwistDamping(float)>::vfunc_41 (66 bytes)
namespace lift_0061AE50 {
// @name ExprParser::ReadWriteMethodType<NMData::TwistAndSwingLimit, float, &public: float __thiscall NMData::TwistAndSwingLimit::getTwistDamping(void) const, float, &public: void __thiscall NMData::TwistAndSwingLimit::setTwistDamping(float)>::vfunc_41
// @class ExprParser::ReadWriteMethodType<NMData::TwistAndSwingLimit, float, &public: float __thiscall NMData::TwistAndSwingLimit::getTwistDamping(void) const, float, &public: void __thiscall NMData::TwistAndSwingLimit::setTwistDamping(float)>
// @summary Auto-lifted identical-shape clone of 0x004B7B80 (ExprParser::ReadWriteMethodType<NMData::EngineData,float,getTimeZoomFactor,setTimeZoomFactor>::vfunc_41).
namespace lift_004B7B80 {
// @name ExprParser::ReadWriteMethodType<NMData::EngineData,float,getTimeZoomFactor,setTimeZoomFactor>::vfunc_41
// @class ExprParser::ReadWriteMethodType<NMData::EngineData,float,getTimeZoomFactor,setTimeZoomFactor>
// @summary Dereferences the first pointer in self; if non-null, calls vtable slot 1 of arg's sub-object and stores the float result at target+0x24; throws if null.
// @field ValuePtrType +0x00 void* ptr
// @field Unknown +0x04 void* field_0x04
// @field Unknown +0x24 float field_0x24

extern void ext_0046C3C0(void* exc);
extern void __stdcall ext_006A6DD2(void* pExceptionObject, uint32_t pThrowInfo);

extern void __stdcall fn_0061AE50(void* const* self, void* arg) {
    uint8_t* target = static_cast<uint8_t*>(*self);
    if (target) {
        void* sub = *reinterpret_cast<void* const*>(static_cast<uint8_t*>(arg) + 4);
        void* const* vtbl = *reinterpret_cast<void* const* const*>(sub);
        using SlotFn = float (__thiscall*)(void* thisPtr, void* a);
        SlotFn slot = reinterpret_cast<SlotFn>(vtbl[1]);
        float result = slot(sub, arg);
        *reinterpret_cast<float*>(target + 0xAC) = result;
        return;
    }
    alignas(16) uint8_t exc[0x28];
    ext_0046C3C0(exc + 4);
    ext_006A6DD2(exc + 4, 0x009DEC1Cu);
}
} // namespace lift_004B7B80
} // namespace lift_0061AE50

// [0x0061B2F0] ExprParser::ReadWriteMethodType<NMData::TwistAndSwingLimit, float, &public: float __thiscall NMData::TwistAndSwingLimit::getLinearDamping(void) const, float, &public: void __thiscall NMData::TwistAndSwingLimit::setLinearDamping(float)>::vfunc_41 (66 bytes)
namespace lift_0061B2F0 {
// @name ExprParser::ReadWriteMethodType<NMData::TwistAndSwingLimit, float, &public: float __thiscall NMData::TwistAndSwingLimit::getLinearDamping(void) const, float, &public: void __thiscall NMData::TwistAndSwingLimit::setLinearDamping(float)>::vfunc_41
// @class ExprParser::ReadWriteMethodType<NMData::TwistAndSwingLimit, float, &public: float __thiscall NMData::TwistAndSwingLimit::getLinearDamping(void) const, float, &public: void __thiscall NMData::TwistAndSwingLimit::setLinearDamping(float)>
// @summary Auto-lifted identical-shape clone of 0x004B7B80 (ExprParser::ReadWriteMethodType<NMData::EngineData,float,getTimeZoomFactor,setTimeZoomFactor>::vfunc_41).
namespace lift_004B7B80 {
// @name ExprParser::ReadWriteMethodType<NMData::EngineData,float,getTimeZoomFactor,setTimeZoomFactor>::vfunc_41
// @class ExprParser::ReadWriteMethodType<NMData::EngineData,float,getTimeZoomFactor,setTimeZoomFactor>
// @summary Dereferences the first pointer in self; if non-null, calls vtable slot 1 of arg's sub-object and stores the float result at target+0x24; throws if null.
// @field ValuePtrType +0x00 void* ptr
// @field Unknown +0x04 void* field_0x04
// @field Unknown +0x24 float field_0x24

extern void ext_0046C3C0(void* exc);
extern void __stdcall ext_006A6DD2(void* pExceptionObject, uint32_t pThrowInfo);

extern void __stdcall fn_0061B2F0(void* const* self, void* arg) {
    uint8_t* target = static_cast<uint8_t*>(*self);
    if (target) {
        void* sub = *reinterpret_cast<void* const*>(static_cast<uint8_t*>(arg) + 4);
        void* const* vtbl = *reinterpret_cast<void* const* const*>(sub);
        using SlotFn = float (__thiscall*)(void* thisPtr, void* a);
        SlotFn slot = reinterpret_cast<SlotFn>(vtbl[1]);
        float result = slot(sub, arg);
        *reinterpret_cast<float*>(target + 0xB4) = result;
        return;
    }
    alignas(16) uint8_t exc[0x28];
    ext_0046C3C0(exc + 4);
    ext_006A6DD2(exc + 4, 0x009DEC1Cu);
}
} // namespace lift_004B7B80
} // namespace lift_0061B2F0

// [0x00632D20] ExprParser::ReadWriteMethodType<EffectorSkeletal, float, &public: float __thiscall EffectorSkeletal::getLinearStiffness(void) const, float, &public: void __thiscall EffectorSkeletal::setLinearStiffness(float)>::vfunc_41 (66 bytes)
namespace lift_00632D20 {
// @name ExprParser::ReadWriteMethodType<EffectorSkeletal, float, &public: float __thiscall EffectorSkeletal::getLinearStiffness(void) const, float, &public: void __thiscall EffectorSkeletal::setLinearStiffness(float)>::vfunc_41
// @class ExprParser::ReadWriteMethodType<EffectorSkeletal, float, &public: float __thiscall EffectorSkeletal::getLinearStiffness(void) const, float, &public: void __thiscall EffectorSkeletal::setLinearStiffness(float)>
// @summary Auto-lifted identical-shape clone of 0x004B7B80 (ExprParser::ReadWriteMethodType<NMData::EngineData,float,getTimeZoomFactor,setTimeZoomFactor>::vfunc_41).
namespace lift_004B7B80 {
// @name ExprParser::ReadWriteMethodType<NMData::EngineData,float,getTimeZoomFactor,setTimeZoomFactor>::vfunc_41
// @class ExprParser::ReadWriteMethodType<NMData::EngineData,float,getTimeZoomFactor,setTimeZoomFactor>
// @summary Dereferences the first pointer in self; if non-null, calls vtable slot 1 of arg's sub-object and stores the float result at target+0x24; throws if null.
// @field ValuePtrType +0x00 void* ptr
// @field Unknown +0x04 void* field_0x04
// @field Unknown +0x24 float field_0x24

extern void ext_0046C3C0(void* exc);
extern void __stdcall ext_006A6DD2(void* pExceptionObject, uint32_t pThrowInfo);

extern void __stdcall fn_00632D20(void* const* self, void* arg) {
    uint8_t* target = static_cast<uint8_t*>(*self);
    if (target) {
        void* sub = *reinterpret_cast<void* const*>(static_cast<uint8_t*>(arg) + 4);
        void* const* vtbl = *reinterpret_cast<void* const* const*>(sub);
        using SlotFn = float (__thiscall*)(void* thisPtr, void* a);
        SlotFn slot = reinterpret_cast<SlotFn>(vtbl[1]);
        float result = slot(sub, arg);
        *reinterpret_cast<float*>(target + 0xCC) = result;
        return;
    }
    alignas(16) uint8_t exc[0x28];
    ext_0046C3C0(exc + 4);
    ext_006A6DD2(exc + 4, 0x009DEC1Cu);
}
} // namespace lift_004B7B80
} // namespace lift_00632D20

// [0x00632D70] ExprParser::ReadWriteMethodType<EffectorSkeletal, float, &public: float __thiscall EffectorSkeletal::getLinearDamping(void) const, float, &public: void __thiscall EffectorSkeletal::setLinearDamping(float)>::vfunc_41 (66 bytes)
namespace lift_00632D70 {
// @name ExprParser::ReadWriteMethodType<EffectorSkeletal, float, &public: float __thiscall EffectorSkeletal::getLinearDamping(void) const, float, &public: void __thiscall EffectorSkeletal::setLinearDamping(float)>::vfunc_41
// @class ExprParser::ReadWriteMethodType<EffectorSkeletal, float, &public: float __thiscall EffectorSkeletal::getLinearDamping(void) const, float, &public: void __thiscall EffectorSkeletal::setLinearDamping(float)>
// @summary Auto-lifted identical-shape clone of 0x004B7B80 (ExprParser::ReadWriteMethodType<NMData::EngineData,float,getTimeZoomFactor,setTimeZoomFactor>::vfunc_41).
namespace lift_004B7B80 {
// @name ExprParser::ReadWriteMethodType<NMData::EngineData,float,getTimeZoomFactor,setTimeZoomFactor>::vfunc_41
// @class ExprParser::ReadWriteMethodType<NMData::EngineData,float,getTimeZoomFactor,setTimeZoomFactor>
// @summary Dereferences the first pointer in self; if non-null, calls vtable slot 1 of arg's sub-object and stores the float result at target+0x24; throws if null.
// @field ValuePtrType +0x00 void* ptr
// @field Unknown +0x04 void* field_0x04
// @field Unknown +0x24 float field_0x24

extern void ext_0046C3C0(void* exc);
extern void __stdcall ext_006A6DD2(void* pExceptionObject, uint32_t pThrowInfo);

extern void __stdcall fn_00632D70(void* const* self, void* arg) {
    uint8_t* target = static_cast<uint8_t*>(*self);
    if (target) {
        void* sub = *reinterpret_cast<void* const*>(static_cast<uint8_t*>(arg) + 4);
        void* const* vtbl = *reinterpret_cast<void* const* const*>(sub);
        using SlotFn = float (__thiscall*)(void* thisPtr, void* a);
        SlotFn slot = reinterpret_cast<SlotFn>(vtbl[1]);
        float result = slot(sub, arg);
        *reinterpret_cast<float*>(target + 0xD0) = result;
        return;
    }
    alignas(16) uint8_t exc[0x28];
    ext_0046C3C0(exc + 4);
    ext_006A6DD2(exc + 4, 0x009DEC1Cu);
}
} // namespace lift_004B7B80
} // namespace lift_00632D70

// [0x00632DC0] ExprParser::ReadWriteMethodType<EffectorSkeletal, float, &public: float __thiscall EffectorSkeletal::getLinearForceLimit(void) const, float, &public: void __thiscall EffectorSkeletal::setLinearForceLimit(float)>::vfunc_41 (66 bytes)
namespace lift_00632DC0 {
// @name ExprParser::ReadWriteMethodType<EffectorSkeletal, float, &public: float __thiscall EffectorSkeletal::getLinearForceLimit(void) const, float, &public: void __thiscall EffectorSkeletal::setLinearForceLimit(float)>::vfunc_41
// @class ExprParser::ReadWriteMethodType<EffectorSkeletal, float, &public: float __thiscall EffectorSkeletal::getLinearForceLimit(void) const, float, &public: void __thiscall EffectorSkeletal::setLinearForceLimit(float)>
// @summary Auto-lifted identical-shape clone of 0x004B7B80 (ExprParser::ReadWriteMethodType<NMData::EngineData,float,getTimeZoomFactor,setTimeZoomFactor>::vfunc_41).
namespace lift_004B7B80 {
// @name ExprParser::ReadWriteMethodType<NMData::EngineData,float,getTimeZoomFactor,setTimeZoomFactor>::vfunc_41
// @class ExprParser::ReadWriteMethodType<NMData::EngineData,float,getTimeZoomFactor,setTimeZoomFactor>
// @summary Dereferences the first pointer in self; if non-null, calls vtable slot 1 of arg's sub-object and stores the float result at target+0x24; throws if null.
// @field ValuePtrType +0x00 void* ptr
// @field Unknown +0x04 void* field_0x04
// @field Unknown +0x24 float field_0x24

extern void ext_0046C3C0(void* exc);
extern void __stdcall ext_006A6DD2(void* pExceptionObject, uint32_t pThrowInfo);

extern void __stdcall fn_00632DC0(void* const* self, void* arg) {
    uint8_t* target = static_cast<uint8_t*>(*self);
    if (target) {
        void* sub = *reinterpret_cast<void* const*>(static_cast<uint8_t*>(arg) + 4);
        void* const* vtbl = *reinterpret_cast<void* const* const*>(sub);
        using SlotFn = float (__thiscall*)(void* thisPtr, void* a);
        SlotFn slot = reinterpret_cast<SlotFn>(vtbl[1]);
        float result = slot(sub, arg);
        *reinterpret_cast<float*>(target + 0xEC) = result;
        return;
    }
    alignas(16) uint8_t exc[0x28];
    ext_0046C3C0(exc + 4);
    ext_006A6DD2(exc + 4, 0x009DEC1Cu);
}
} // namespace lift_004B7B80
} // namespace lift_00632DC0

// [0x00632E10] ExprParser::ReadWriteMethodType<EffectorSkeletal, float, &public: float __thiscall EffectorSkeletal::getSwingStiffness(void) const, float, &public: void __thiscall EffectorSkeletal::setSwingStiffness(float)>::vfunc_41 (66 bytes)
namespace lift_00632E10 {
// @name ExprParser::ReadWriteMethodType<EffectorSkeletal, float, &public: float __thiscall EffectorSkeletal::getSwingStiffness(void) const, float, &public: void __thiscall EffectorSkeletal::setSwingStiffness(float)>::vfunc_41
// @class ExprParser::ReadWriteMethodType<EffectorSkeletal, float, &public: float __thiscall EffectorSkeletal::getSwingStiffness(void) const, float, &public: void __thiscall EffectorSkeletal::setSwingStiffness(float)>
// @summary Auto-lifted identical-shape clone of 0x004B7B80 (ExprParser::ReadWriteMethodType<NMData::EngineData,float,getTimeZoomFactor,setTimeZoomFactor>::vfunc_41).
namespace lift_004B7B80 {
// @name ExprParser::ReadWriteMethodType<NMData::EngineData,float,getTimeZoomFactor,setTimeZoomFactor>::vfunc_41
// @class ExprParser::ReadWriteMethodType<NMData::EngineData,float,getTimeZoomFactor,setTimeZoomFactor>
// @summary Dereferences the first pointer in self; if non-null, calls vtable slot 1 of arg's sub-object and stores the float result at target+0x24; throws if null.
// @field ValuePtrType +0x00 void* ptr
// @field Unknown +0x04 void* field_0x04
// @field Unknown +0x24 float field_0x24

extern void ext_0046C3C0(void* exc);
extern void __stdcall ext_006A6DD2(void* pExceptionObject, uint32_t pThrowInfo);

extern void __stdcall fn_00632E10(void* const* self, void* arg) {
    uint8_t* target = static_cast<uint8_t*>(*self);
    if (target) {
        void* sub = *reinterpret_cast<void* const*>(static_cast<uint8_t*>(arg) + 4);
        void* const* vtbl = *reinterpret_cast<void* const* const*>(sub);
        using SlotFn = float (__thiscall*)(void* thisPtr, void* a);
        SlotFn slot = reinterpret_cast<SlotFn>(vtbl[1]);
        float result = slot(sub, arg);
        *reinterpret_cast<float*>(target + 0xD4) = result;
        return;
    }
    alignas(16) uint8_t exc[0x28];
    ext_0046C3C0(exc + 4);
    ext_006A6DD2(exc + 4, 0x009DEC1Cu);
}
} // namespace lift_004B7B80
} // namespace lift_00632E10

// [0x00632E60] ExprParser::ReadWriteMethodType<EffectorSkeletal, float, &public: float __thiscall EffectorSkeletal::getSwingDamping(void) const, float, &public: void __thiscall EffectorSkeletal::setSwingDamping(float)>::vfunc_41 (66 bytes)
namespace lift_00632E60 {
// @name ExprParser::ReadWriteMethodType<EffectorSkeletal, float, &public: float __thiscall EffectorSkeletal::getSwingDamping(void) const, float, &public: void __thiscall EffectorSkeletal::setSwingDamping(float)>::vfunc_41
// @class ExprParser::ReadWriteMethodType<EffectorSkeletal, float, &public: float __thiscall EffectorSkeletal::getSwingDamping(void) const, float, &public: void __thiscall EffectorSkeletal::setSwingDamping(float)>
// @summary Auto-lifted identical-shape clone of 0x004B7B80 (ExprParser::ReadWriteMethodType<NMData::EngineData,float,getTimeZoomFactor,setTimeZoomFactor>::vfunc_41).
namespace lift_004B7B80 {
// @name ExprParser::ReadWriteMethodType<NMData::EngineData,float,getTimeZoomFactor,setTimeZoomFactor>::vfunc_41
// @class ExprParser::ReadWriteMethodType<NMData::EngineData,float,getTimeZoomFactor,setTimeZoomFactor>
// @summary Dereferences the first pointer in self; if non-null, calls vtable slot 1 of arg's sub-object and stores the float result at target+0x24; throws if null.
// @field ValuePtrType +0x00 void* ptr
// @field Unknown +0x04 void* field_0x04
// @field Unknown +0x24 float field_0x24

extern void ext_0046C3C0(void* exc);
extern void __stdcall ext_006A6DD2(void* pExceptionObject, uint32_t pThrowInfo);

extern void __stdcall fn_00632E60(void* const* self, void* arg) {
    uint8_t* target = static_cast<uint8_t*>(*self);
    if (target) {
        void* sub = *reinterpret_cast<void* const*>(static_cast<uint8_t*>(arg) + 4);
        void* const* vtbl = *reinterpret_cast<void* const* const*>(sub);
        using SlotFn = float (__thiscall*)(void* thisPtr, void* a);
        SlotFn slot = reinterpret_cast<SlotFn>(vtbl[1]);
        float result = slot(sub, arg);
        *reinterpret_cast<float*>(target + 0xDC) = result;
        return;
    }
    alignas(16) uint8_t exc[0x28];
    ext_0046C3C0(exc + 4);
    ext_006A6DD2(exc + 4, 0x009DEC1Cu);
}
} // namespace lift_004B7B80
} // namespace lift_00632E60

// [0x00632EB0] ExprParser::ReadWriteMethodType<EffectorSkeletal, float, &public: float __thiscall EffectorSkeletal::getSwingForceLimit(void) const, float, &public: void __thiscall EffectorSkeletal::setSwingForceLimit(float)>::vfunc_41 (66 bytes)
namespace lift_00632EB0 {
// @name ExprParser::ReadWriteMethodType<EffectorSkeletal, float, &public: float __thiscall EffectorSkeletal::getSwingForceLimit(void) const, float, &public: void __thiscall EffectorSkeletal::setSwingForceLimit(float)>::vfunc_41
// @class ExprParser::ReadWriteMethodType<EffectorSkeletal, float, &public: float __thiscall EffectorSkeletal::getSwingForceLimit(void) const, float, &public: void __thiscall EffectorSkeletal::setSwingForceLimit(float)>
// @summary Auto-lifted identical-shape clone of 0x004B7B80 (ExprParser::ReadWriteMethodType<NMData::EngineData,float,getTimeZoomFactor,setTimeZoomFactor>::vfunc_41).
namespace lift_004B7B80 {
// @name ExprParser::ReadWriteMethodType<NMData::EngineData,float,getTimeZoomFactor,setTimeZoomFactor>::vfunc_41
// @class ExprParser::ReadWriteMethodType<NMData::EngineData,float,getTimeZoomFactor,setTimeZoomFactor>
// @summary Dereferences the first pointer in self; if non-null, calls vtable slot 1 of arg's sub-object and stores the float result at target+0x24; throws if null.
// @field ValuePtrType +0x00 void* ptr
// @field Unknown +0x04 void* field_0x04
// @field Unknown +0x24 float field_0x24

extern void ext_0046C3C0(void* exc);
extern void __stdcall ext_006A6DD2(void* pExceptionObject, uint32_t pThrowInfo);

extern void __stdcall fn_00632EB0(void* const* self, void* arg) {
    uint8_t* target = static_cast<uint8_t*>(*self);
    if (target) {
        void* sub = *reinterpret_cast<void* const*>(static_cast<uint8_t*>(arg) + 4);
        void* const* vtbl = *reinterpret_cast<void* const* const*>(sub);
        using SlotFn = float (__thiscall*)(void* thisPtr, void* a);
        SlotFn slot = reinterpret_cast<SlotFn>(vtbl[1]);
        float result = slot(sub, arg);
        *reinterpret_cast<float*>(target + 0xE4) = result;
        return;
    }
    alignas(16) uint8_t exc[0x28];
    ext_0046C3C0(exc + 4);
    ext_006A6DD2(exc + 4, 0x009DEC1Cu);
}
} // namespace lift_004B7B80
} // namespace lift_00632EB0

// [0x00632F00] ExprParser::ReadWriteMethodType<EffectorSkeletal, float, &public: float __thiscall EffectorSkeletal::getTwistStiffness(void) const, float, &public: void __thiscall EffectorSkeletal::setTwistStiffness(float)>::vfunc_41 (66 bytes)
namespace lift_00632F00 {
// @name ExprParser::ReadWriteMethodType<EffectorSkeletal, float, &public: float __thiscall EffectorSkeletal::getTwistStiffness(void) const, float, &public: void __thiscall EffectorSkeletal::setTwistStiffness(float)>::vfunc_41
// @class ExprParser::ReadWriteMethodType<EffectorSkeletal, float, &public: float __thiscall EffectorSkeletal::getTwistStiffness(void) const, float, &public: void __thiscall EffectorSkeletal::setTwistStiffness(float)>
// @summary Auto-lifted identical-shape clone of 0x004B7B80 (ExprParser::ReadWriteMethodType<NMData::EngineData,float,getTimeZoomFactor,setTimeZoomFactor>::vfunc_41).
namespace lift_004B7B80 {
// @name ExprParser::ReadWriteMethodType<NMData::EngineData,float,getTimeZoomFactor,setTimeZoomFactor>::vfunc_41
// @class ExprParser::ReadWriteMethodType<NMData::EngineData,float,getTimeZoomFactor,setTimeZoomFactor>
// @summary Dereferences the first pointer in self; if non-null, calls vtable slot 1 of arg's sub-object and stores the float result at target+0x24; throws if null.
// @field ValuePtrType +0x00 void* ptr
// @field Unknown +0x04 void* field_0x04
// @field Unknown +0x24 float field_0x24

extern void ext_0046C3C0(void* exc);
extern void __stdcall ext_006A6DD2(void* pExceptionObject, uint32_t pThrowInfo);

extern void __stdcall fn_00632F00(void* const* self, void* arg) {
    uint8_t* target = static_cast<uint8_t*>(*self);
    if (target) {
        void* sub = *reinterpret_cast<void* const*>(static_cast<uint8_t*>(arg) + 4);
        void* const* vtbl = *reinterpret_cast<void* const* const*>(sub);
        using SlotFn = float (__thiscall*)(void* thisPtr, void* a);
        SlotFn slot = reinterpret_cast<SlotFn>(vtbl[1]);
        float result = slot(sub, arg);
        *reinterpret_cast<float*>(target + 0xD8) = result;
        return;
    }
    alignas(16) uint8_t exc[0x28];
    ext_0046C3C0(exc + 4);
    ext_006A6DD2(exc + 4, 0x009DEC1Cu);
}
} // namespace lift_004B7B80
} // namespace lift_00632F00

// [0x00632F50] ExprParser::ReadWriteMethodType<EffectorSkeletal, float, &public: float __thiscall EffectorSkeletal::getTwistDamping(void) const, float, &public: void __thiscall EffectorSkeletal::setTwistDamping(float)>::vfunc_41 (66 bytes)
namespace lift_00632F50 {
// @name ExprParser::ReadWriteMethodType<EffectorSkeletal, float, &public: float __thiscall EffectorSkeletal::getTwistDamping(void) const, float, &public: void __thiscall EffectorSkeletal::setTwistDamping(float)>::vfunc_41
// @class ExprParser::ReadWriteMethodType<EffectorSkeletal, float, &public: float __thiscall EffectorSkeletal::getTwistDamping(void) const, float, &public: void __thiscall EffectorSkeletal::setTwistDamping(float)>
// @summary Auto-lifted identical-shape clone of 0x004B7B80 (ExprParser::ReadWriteMethodType<NMData::EngineData,float,getTimeZoomFactor,setTimeZoomFactor>::vfunc_41).
namespace lift_004B7B80 {
// @name ExprParser::ReadWriteMethodType<NMData::EngineData,float,getTimeZoomFactor,setTimeZoomFactor>::vfunc_41
// @class ExprParser::ReadWriteMethodType<NMData::EngineData,float,getTimeZoomFactor,setTimeZoomFactor>
// @summary Dereferences the first pointer in self; if non-null, calls vtable slot 1 of arg's sub-object and stores the float result at target+0x24; throws if null.
// @field ValuePtrType +0x00 void* ptr
// @field Unknown +0x04 void* field_0x04
// @field Unknown +0x24 float field_0x24

extern void ext_0046C3C0(void* exc);
extern void __stdcall ext_006A6DD2(void* pExceptionObject, uint32_t pThrowInfo);

extern void __stdcall fn_00632F50(void* const* self, void* arg) {
    uint8_t* target = static_cast<uint8_t*>(*self);
    if (target) {
        void* sub = *reinterpret_cast<void* const*>(static_cast<uint8_t*>(arg) + 4);
        void* const* vtbl = *reinterpret_cast<void* const* const*>(sub);
        using SlotFn = float (__thiscall*)(void* thisPtr, void* a);
        SlotFn slot = reinterpret_cast<SlotFn>(vtbl[1]);
        float result = slot(sub, arg);
        *reinterpret_cast<float*>(target + 0xE0) = result;
        return;
    }
    alignas(16) uint8_t exc[0x28];
    ext_0046C3C0(exc + 4);
    ext_006A6DD2(exc + 4, 0x009DEC1Cu);
}
} // namespace lift_004B7B80
} // namespace lift_00632F50

// [0x00632FA0] ExprParser::ReadWriteMethodType<EffectorSkeletal, float, &public: float __thiscall EffectorSkeletal::getTwistForceLimit(void) const, float, &public: void __thiscall EffectorSkeletal::setTwistForceLimit(float)>::vfunc_41 (66 bytes)
namespace lift_00632FA0 {
// @name ExprParser::ReadWriteMethodType<EffectorSkeletal, float, &public: float __thiscall EffectorSkeletal::getTwistForceLimit(void) const, float, &public: void __thiscall EffectorSkeletal::setTwistForceLimit(float)>::vfunc_41
// @class ExprParser::ReadWriteMethodType<EffectorSkeletal, float, &public: float __thiscall EffectorSkeletal::getTwistForceLimit(void) const, float, &public: void __thiscall EffectorSkeletal::setTwistForceLimit(float)>
// @summary Auto-lifted identical-shape clone of 0x004B7B80 (ExprParser::ReadWriteMethodType<NMData::EngineData,float,getTimeZoomFactor,setTimeZoomFactor>::vfunc_41).
namespace lift_004B7B80 {
// @name ExprParser::ReadWriteMethodType<NMData::EngineData,float,getTimeZoomFactor,setTimeZoomFactor>::vfunc_41
// @class ExprParser::ReadWriteMethodType<NMData::EngineData,float,getTimeZoomFactor,setTimeZoomFactor>
// @summary Dereferences the first pointer in self; if non-null, calls vtable slot 1 of arg's sub-object and stores the float result at target+0x24; throws if null.
// @field ValuePtrType +0x00 void* ptr
// @field Unknown +0x04 void* field_0x04
// @field Unknown +0x24 float field_0x24

extern void ext_0046C3C0(void* exc);
extern void __stdcall ext_006A6DD2(void* pExceptionObject, uint32_t pThrowInfo);

extern void __stdcall fn_00632FA0(void* const* self, void* arg) {
    uint8_t* target = static_cast<uint8_t*>(*self);
    if (target) {
        void* sub = *reinterpret_cast<void* const*>(static_cast<uint8_t*>(arg) + 4);
        void* const* vtbl = *reinterpret_cast<void* const* const*>(sub);
        using SlotFn = float (__thiscall*)(void* thisPtr, void* a);
        SlotFn slot = reinterpret_cast<SlotFn>(vtbl[1]);
        float result = slot(sub, arg);
        *reinterpret_cast<float*>(target + 0xE8) = result;
        return;
    }
    alignas(16) uint8_t exc[0x28];
    ext_0046C3C0(exc + 4);
    ext_006A6DD2(exc + 4, 0x009DEC1Cu);
}
} // namespace lift_004B7B80
} // namespace lift_00632FA0

// [0x0066EC60] ExprParser::ReadWriteMethodType<NM::Vector3, float, &public: float __thiscall NM::Vector3::getY(void) const, float, &public: void __thiscall NM::Vector3::setY(float)>::vfunc_41 (63 bytes)
namespace lift_0066EC60 {
// @name ExprParser::ReadWriteMethodType<NM::Vector3, float, &public: float __thiscall NM::Vector3::getY(void) const, float, &public: void __thiscall NM::Vector3::setY(float)>::vfunc_41
// @class ExprParser::ReadWriteMethodType<NM::Vector3, float, &public: float __thiscall NM::Vector3::getY(void) const, float, &public: void __thiscall NM::Vector3::setY(float)>
// @summary Auto-lifted identical-shape clone of 0x004B7B80 (ExprParser::ReadWriteMethodType<NMData::EngineData,float,getTimeZoomFactor,setTimeZoomFactor>::vfunc_41).
namespace lift_004B7B80 {
// @name ExprParser::ReadWriteMethodType<NMData::EngineData,float,getTimeZoomFactor,setTimeZoomFactor>::vfunc_41
// @class ExprParser::ReadWriteMethodType<NMData::EngineData,float,getTimeZoomFactor,setTimeZoomFactor>
// @summary Dereferences the first pointer in self; if non-null, calls vtable slot 1 of arg's sub-object and stores the float result at target+0x24; throws if null.
// @field ValuePtrType +0x00 void* ptr
// @field Unknown +0x04 void* field_0x04
// @field Unknown +0x24 float field_0x24

extern void ext_0046C3C0(void* exc);
extern void __stdcall ext_006A6DD2(void* pExceptionObject, uint32_t pThrowInfo);

extern void __stdcall fn_0066EC60(void* const* self, void* arg) {
    uint8_t* target = static_cast<uint8_t*>(*self);
    if (target) {
        void* sub = *reinterpret_cast<void* const*>(static_cast<uint8_t*>(arg) + 4);
        void* const* vtbl = *reinterpret_cast<void* const* const*>(sub);
        using SlotFn = float (__thiscall*)(void* thisPtr, void* a);
        SlotFn slot = reinterpret_cast<SlotFn>(vtbl[1]);
        float result = slot(sub, arg);
        *reinterpret_cast<float*>(target + 0x4) = result;
        return;
    }
    alignas(16) uint8_t exc[0x28];
    ext_0046C3C0(exc + 4);
    ext_006A6DD2(exc + 4, 0x009DEC1Cu);
}
} // namespace lift_004B7B80
} // namespace lift_0066EC60

// [0x00678960] ExprParser::ReadWriteMethodType<SystemInfo, bool, &public: bool __thiscall SystemInfo::getSaveBinaryAttributes(void) const, bool, &public: void __thiscall SystemInfo::setSaveBinaryAttributes(bool)>::vfunc_41 (63 bytes)
namespace lift_00678960 {
// @name ExprParser::ReadWriteMethodType<SystemInfo, bool, &public: bool __thiscall SystemInfo::getSaveBinaryAttributes(void) const, bool, &public: void __thiscall SystemInfo::setSaveBinaryAttributes(bool)>::vfunc_41
// @class ExprParser::ReadWriteMethodType<SystemInfo, bool, &public: bool __thiscall SystemInfo::getSaveBinaryAttributes(void) const, bool, &public: void __thiscall SystemInfo::setSaveBinaryAttributes(bool)>
// @summary Auto-lifted identical-shape clone of 0x004B1D40 (ExprParser::ReadWriteMethodType<NMData::GraphEntryData,bool,isActive,activate>::vfunc_41).
namespace lift_004B1D40 {
// @name ExprParser::ReadWriteMethodType<NMData::GraphEntryData,bool,isActive,activate>::vfunc_41
// @class ExprParser::ReadWriteMethodType<NMData::GraphEntryData,bool,isActive,activate>
// @summary Dereferences the first pointer in self; if non-null, calls vtable slot 3 of arg's sub-object with arg and stores the bool result at target+0x01; throws if null.
// @field ValuePtrType +0x00 void* ptr
// @field Unknown +0x01 uint8_t field_0x01


extern void ext_0046C3C0(void* exc);
extern void __stdcall ext_006A6DD2(void* pExceptionObject, uint32_t pThrowInfo);

extern void __stdcall fn_00678960(void* const* self, void* arg) {
    uint8_t* target = static_cast<uint8_t*>(*self);
    if (target) {
        void* sub = *reinterpret_cast<void* const*>(static_cast<uint8_t*>(arg) + 4);
        void* const* vtbl = *reinterpret_cast<void* const* const*>(sub);
        using SlotFn = uint8_t (__thiscall*)(void* thisPtr, void* a);
        SlotFn slot = reinterpret_cast<SlotFn>(vtbl[3]);
        uint8_t result = slot(sub, arg);
        target[4] = result;
        return;
    }
    alignas(16) uint8_t exc[0x28];
    ext_0046C3C0(exc);
    ext_006A6DD2(exc, 0x009DEC1Cu);
}
} // namespace lift_004B1D40
} // namespace lift_00678960

// [0x006059A0] ExprParser::ReadWriteMethodType<Effector, float, &public: float __thiscall Effector::getGradient(void) const, float, &public: void __thiscall Effector::setGradient(float)>::vfunc_41 (63 bytes)
namespace lift_006059A0 {
extern void ext_0046C3C0();
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk forwarding to MSVCR80!_CxxThrowException.)
extern void ext_006A6DD2();

// Virtual slot 1 of the object at ctx+0x04: float (this, ctx).
typedef float (*ReadMethodSlot1Fn)(void* self, void* ctx);

// @name ExprParser::ReadWriteMethodType<Effector,float,getGradient,setGradient>::vfunc_41
// @class ExprParser::ReadWriteMethodType<Effector, float, &public: float __thiscall Effector::getGradient(void) const, float, &public: void __thiscall Effector::setGradient(float)>
// @summary Reads a float from the wrapped expression object and stores it into Effector::gradient; throws if the target Effector is null.
// @field ExprParser::ValuePtrType +0x00 void* target
// @field Effector +0x4c float gradient
// @field field_0x04 void* object (ctx+0x04; vtable slot 1 is invoked with ctx as argument)
void fn_006059A0(void* self, void* ctx) {
    uint8_t* effector = *reinterpret_cast<uint8_t**>(self);
    if (effector == nullptr) {
        ext_0046C3C0();
        ext_006A6DD2();
        return;
    }

    uint8_t* obj = *reinterpret_cast<uint8_t**>(static_cast<uint8_t*>(ctx) + 0x04);
    void** vtbl = *reinterpret_cast<void***>(obj);
    ReadMethodSlot1Fn read = reinterpret_cast<ReadMethodSlot1Fn>(vtbl[1]);
    float value = read(obj, ctx);

    *reinterpret_cast<float*>(effector + 0x4c) = value;
}
} // namespace lift_006059A0

// [0x006059E0] ExprParser::ReadWriteMethodType<Effector, float, &public: float __thiscall Effector::getGradientCap(void) const, float, &public: void __thiscall Effector::setGradientCap(float)>::vfunc_41 (63 bytes)
namespace lift_006059E0 {
extern void ext_0046C3C0();
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk forwarding to MSVCR80!_CxxThrowException.)
extern void ext_006A6DD2();

// Virtual slot 1 of the object at ctx+0x04: float (this, ctx).
typedef float (*ReadMethodSlot1Fn)(void* self, void* ctx);

// @name ExprParser::ReadWriteMethodType<Effector,float,getGradientCap,setGradientCap>::vfunc_41
// @class ExprParser::ReadWriteMethodType<Effector, float, &public: float __thiscall Effector::getGradientCap(void) const, float, &public: void __thiscall Effector::setGradientCap(float)>
// @summary Reads a float from the wrapped expression object and stores it into Effector::gradientCap; throws if the target Effector is null.
// @field ExprParser::ValuePtrType +0x00 void* target
// @field Effector +0x50 float gradientCap
// @field field_0x04 void* object (ctx+0x04; vtable slot 1 is invoked with ctx as argument)
void fn_006059E0(void* self, void* ctx) {
    uint8_t* effector = *reinterpret_cast<uint8_t**>(self);
    if (effector == nullptr) {
        ext_0046C3C0();
        ext_006A6DD2();
        return;
    }

    uint8_t* obj = *reinterpret_cast<uint8_t**>(static_cast<uint8_t*>(ctx) + 0x04);
    void** vtbl = *reinterpret_cast<void***>(obj);
    ReadMethodSlot1Fn read = reinterpret_cast<ReadMethodSlot1Fn>(vtbl[1]);
    float value = read(obj, ctx);

    *reinterpret_cast<float*>(effector + 0x50) = value;
}
} // namespace lift_006059E0

// [0x0046EA50] ExprParser::ReadWriteMethodType<ImageExporter, int, {public: int __thiscall ImageExporter::getEndFrame(void) const, 0}, int, {public: void __thiscall ImageExporter::setEndFrame(int), 0}>::vfunc_41 (68 bytes)
namespace lift_0046EA50 {
extern void ext_00454BB0();
extern void ext_0046C3C0();
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk forwarding to MSVCR80!_CxxThrowException.)
extern void ext_006A6DD2();
extern int mem_009DEC1C;

// @name ReadWriteMethodType_ImageExporter_EndFrame_vfunc_41
// @class ExprParser::ReadWriteMethodType<ImageExporter, int, {public: int __thiscall ImageExporter::getEndFrame(void) const, 0}, int, {public: void __thiscall ImageExporter::setEndFrame(int), 0}>
// @summary Reads an int from the context via its virtual getter (slot 2 of the sub-object vtable) and forwards it to the bound target's setter; throws if the target is null.
// @field ValuePtrType +0x00 void* field_0x00
// @field ExprParser::ReadWriteMethodType +0x04 void* field_0x04
struct ValuePtrTypeLite {
    void* field_0x00; // target object (set via ecx in ReadWriteMethodType setter)
};

// Callee signatures (both thiscall in the original binary; modeled as plain C functions here).
using SetterFn = void (*)(void* self, int value);
using VirtualGetFn = int (*)(void* self, void* ctx);

void fn_0046EA50(ValuePtrTypeLite* self, void* ctx) {
    void* target = self->field_0x00;
    if (target != nullptr) {
        // ctx+0x04 is the sub-object whose vtable slot 2 produces the value.
        void** subObj = reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(ctx) + 0x04);
        void* sub = *subObj;
        void** vtbl = *reinterpret_cast<void***>(sub);
        auto getter = reinterpret_cast<VirtualGetFn>(vtbl[2]);
        int value = getter(sub, ctx);
        reinterpret_cast<SetterFn>(ext_00454BB0)(target, value);
        return;
    }
    // Null target: construct exception via helper and throw through the CRT thunk.
    reinterpret_cast<void (*)(void*)>(ext_0046C3C0)(&self);
    (void)mem_009DEC1C;
    ext_006A6DD2();
}
} // namespace lift_0046EA50

// [0x0046E140] ExprParser::ReadWriteMethodType<ImageExporter, bool, {public: bool __thiscall ImageExporter::isEnabled(void) const, 0}, bool, {public: void __thiscall ImageExporter::setEnabled(bool), 0}>::vfunc_41 (68 bytes)
namespace lift_0046E140 {
// Callees
extern void ext_0046C040(void* self, void* value);  // sub_0046C040 (thiscall, ecx=self, one stack arg)
extern void ext_0046C3C0(void* self);               // sub_0046C3C0 (thiscall, ecx=self)
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk forwarding to MSVCR80!_CxxThrowException.)
extern void ext_006A6DD2(void* exc_obj, const void* type_info);
extern int mem_009DEC1C;

// @name ExprParser::ReadWriteMethodType<ImageExporter,bool,isEnabled,bool,setEnabled>::vfunc_41
// @class ExprParser::ReadWriteMethodType<ImageExporter, bool, {public: bool __thiscall ImageExporter::isEnabled(void) const, 0}, bool, {public: void __thiscall ImageExporter::setEnabled(bool), 0}>
// @summary Two stack-arg method: dereferences arg a (throws if its pointee is null), calls vtable slot 3 on arg b's +4 object, and forwards the result to sub_0046C040 with the pointee as self.
// @field Unknown +0x00 void* field_0x00
// @field Unknown +0x04 void* field_0x04
void fn_0046E140(void* a, void* b) {
    void* esi = lift_field<void*>(a, 0);
    if (esi == nullptr) {
        uint32_t exc_obj[4] = {0, 0, 0, 0};
        ext_0046C3C0(exc_obj);
        ext_006A6DD2(exc_obj, &mem_009DEC1C);
        return;  // not reached: thunk throws
    }

    void* obj = lift_field<void*>(b, 4);
    void** vtable = *reinterpret_cast<void***>(obj);
    using VFunc = void* (*)(void* self, void* arg);
    void* result = reinterpret_cast<VFunc>(vtable[3])(obj, b);

    ext_0046C040(esi, result);
}
} // namespace lift_0046E140

// [0x0046E450] ExprParser::ReadWriteMethodType<ImageExporter, bool, {public: bool __thiscall ImageExporter::getUseRenderer(void) const, 0}, bool, {public: void __thiscall ImageExporter::setUseRenderer(bool), 0}>::vfunc_41 (68 bytes)
namespace lift_0046E450 {
extern void ext_0046C2D0();
extern void ext_0046C3C0();
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk forwarding to MSVCR80!_CxxThrowException.)
extern void ext_006A6DD2();
extern int mem_009DEC1C;

// @name ReadWriteMethodType<ImageExporter,bool,getUseRenderer,bool,setUseRenderer>::vfunc_41
// @class ExprParser::ReadWriteMethodType<ImageExporter, bool, {public: bool __thiscall ImageExporter::getUseRenderer(void) const, 0}, bool, {public: void __thiscall ImageExporter::setUseRenderer(bool), 0}>
// @summary Forwards arg2's sub-object result into the target held by arg1; throws if arg1's target is null.
// @field ExprParser::ReadWriteMethodType<ImageExporter, bool, {public: bool __thiscall ImageExporter::getUseRenderer(void) const, 0}, bool, {public: void __thiscall ImageExporter::setUseRenderer(bool), 0}> +0x00 void* field_0x00
// @field ExprParser::ReadWriteMethodType<ImageExporter, bool, {public: bool __thiscall ImageExporter::getUseRenderer(void) const, 0}, bool, {public: void __thiscall ImageExporter::setUseRenderer(bool), 0}> +0x04 void* field_0x04
void fn_0046E450(void* arg1, void* arg2) {
    // arg1 is a pointer to a slot whose value is the target object pointer.
    void* target = *static_cast<void**>(arg1);
    if (target == nullptr) {
        // Null target: construct the exception in place at &arg1 and throw it.
        using InitFn = void (*)(void*);
        reinterpret_cast<InitFn>(&ext_0046C3C0)(&arg1);
        using ThrowFn = void (*)(void*, void*);
        reinterpret_cast<ThrowFn>(&ext_006A6DD2)(&arg1, &mem_009DEC1C);
        return;
    }

    // sub = arg2->field_0x04; r = sub->vtable[0x0c](sub, arg2)
    void* sub = lift_field<void*>(arg2, 0x04);
    void* vt = lift_field<void*>(sub, 0x00);
    using VFn = uint32_t (*)(void* self, void* arg);
    VFn vcall = reinterpret_cast<VFn>(lift_field<void*>(vt, 0x0c));
    uint32_t r = vcall(sub, arg2);

    // sub_0046C2D0(target, r)
    using SetFn = void (*)(void* self, uint32_t value);
    reinterpret_cast<SetFn>(&ext_0046C2D0)(target, r);
}
} // namespace lift_0046E450

// [0x0046EDA0] ExprParser::ReadWriteMethodType<ImageExporter, int, {public: int __thiscall ImageExporter::getImageHeight(void) const, 0}, int, {public: void __thiscall ImageExporter::setImageHeight(int), 0}>::vfunc_41 (68 bytes)
namespace lift_0046EDA0 {
// Callee 0x0046C3C0: exception-object initializer (thiscall, takes the exception buffer).
extern void ext_0046C3C0(void* exc);
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk forwarding to MSVCR80!_CxxThrowException.)
extern void __stdcall ext_006A6DD2(void* pExceptionObject, uint32_t pThrowInfo);

// @name ExprParser::ReadWriteMethodType<ImageExporter>::vfunc_41 (ImageExporter::getImageHeight -> setImageHeight)
// @class ExprParser::ReadWriteMethodType<ImageExporter, int, {public: int __thiscall ImageExporter::getImageHeight(void) const, 0}, int, {public: void __thiscall ImageExporter::setImageHeight(int), 0}>
// @summary Dereferences the first pointer in self; if non-null, calls vtable slot 2 of arg's sub-object with arg and stores the int result at target+0x20 (ImageExporter height slot); throws if null.
// @field ExprParser::ValuePtrType +0x00 void* ptr
// @field ExprParser::ReadWriteMethodType +0x04 void* field_0x04
// @field ImageExporter +0x20 int field_0x20
void __stdcall fn_0046EDA0(void* const* self, void* arg) {
    uint8_t* target = static_cast<uint8_t*>(*self);
    if (target) {
        void* sub = *reinterpret_cast<void* const*>(static_cast<uint8_t*>(arg) + 4);
        void* const* vtbl = *reinterpret_cast<void* const* const*>(sub);
        using SlotFn = int32_t (__thiscall*)(void* thisPtr, void* a);
        SlotFn slot = reinterpret_cast<SlotFn>(vtbl[2]);
        int32_t result = slot(sub, arg);
        *reinterpret_cast<int32_t*>(target + 0x20) = result;
        return;
    }
    // Null target: the original builds an MSVC exception object and throws it.
    alignas(16) uint8_t exc[0x28];
    ext_0046C3C0(exc);
    ext_006A6DD2(exc, 0x009DEC1Cu);
}
} // namespace lift_0046EDA0

// [0x004A2530] ExprParser::ReadWriteMethodType<StateMachineEditor::FSMEditView, bool, {public: bool __thiscall StateMachineEditor::FSMEditView::drawVariables(void) const, 0}, bool, {public: void __thiscall StateMachineEditor::FSMEditView::setDrawVariables(bool), 0}>::vfunc_41 (68 bytes)
namespace lift_004A2530 {
// @name ExprParser::ReadWriteMethodType<StateMachineEditor::FSMEditView>::vfunc_41 (FSMEditView::drawVariables -> setDrawVariables)
// @class ExprParser::ReadWriteMethodType<StateMachineEditor::FSMEditView, bool, {public: bool __thiscall StateMachineEditor::FSMEditView::drawVariables(void) const, 0}, bool, {public: void __thiscall StateMachineEditor::FSMEditView::setDrawVariables(bool), 0}>
// @summary Dereferences the first pointer in self; if non-null, calls vtable slot 3 of arg's sub-object with arg and passes the result to sub_004A24B0 on the target; throws if the target is null.
// @field ValuePtrType +0x00 void* target
// @field ReadMethodType +0x04 void* inner

extern void ext_004A24B0(void* self, uint32_t value);
extern void ext_0046C3C0(void* exc);
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk forwarding to MSVCR80!_CxxThrowException.)
extern void ext_006A6DD2(void* pExceptionObject, uint32_t pThrowInfo);

void fn_004A2530(void* const* self, void* arg) {
    uint8_t* target = static_cast<uint8_t*>(*self);
    if (target) {
        void* sub = *reinterpret_cast<void* const*>(static_cast<uint8_t*>(arg) + 4);
        void* const* vtbl = *reinterpret_cast<void* const* const*>(sub);
        using SlotFn = uint32_t (__thiscall*)(void* thisPtr, void* a);
        SlotFn slot = reinterpret_cast<SlotFn>(vtbl[3]);
        uint32_t result = slot(sub, arg);
        ext_004A24B0(target, result);
        return;
    }
    alignas(16) uint8_t exc[0x28];
    ext_0046C3C0(exc);
    ext_006A6DD2(exc, 0x009DEC1Cu);
}
} // namespace lift_004A2530

// [0x0049BF20] ExprParser::ReadWriteMethodType<NMData::State, bool, {public: bool __thiscall NMData::State::isDeactivated(void) const, 0}, bool, {public: void __thiscall NMData::State::setIsDeactivated(bool), 0}>::vfunc_41 (68 bytes)
namespace lift_0049BF20 {
// Callee sub_0049AA00 (10 bytes): NMData::State::setIsDeactivated(bool), thiscall with one stack argument.
extern void ext_0049AA00(void* self, bool value);

// @name ExprParser::ReadWriteMethodType<NMData::State>::vfunc_41 (NMData::State::setIsDeactivated)
// @class ExprParser::ReadWriteMethodType<NMData::State, bool, {public: bool __thiscall NMData::State::isDeactivated(void) const, 0}, bool, {public: void __thiscall NMData::State::setIsDeactivated(bool), 0}>
// @summary Reads a bool through the source's inner accessor (vtable slot 3) and stores it into the NMData::State target via setIsDeactivated; throws if the target pointer is null.
// @field ExprParser::ValuePtrType +0x00 NMData::State* target
// @field ExprParser::ReadWriteMethodType +0x04 void* inner
void fn_0049BF20(void* dst, void* src) {
    // dst +0x00: NMData::State* target. Null means there is no object to write to, which is an error.
    void* target = *reinterpret_cast<void**>(dst);
    if (target == nullptr) {
        // The original constructs an exception object and throws it through MSVCR80 _CxxThrowException.
        // No portable equivalent of that exact type exists, so a std::runtime_error stands in.
        throw std::runtime_error("ReadWriteMethodType<NMData::State>: null State target");
    }

    // src +0x04: inner accessor object. Its vtable slot 3 (+0x0C) takes src as its single argument and returns the bool.
    void* inner = *reinterpret_cast<void**>(reinterpret_cast<std::uint8_t*>(src) + 0x04);
    void** vtbl = *reinterpret_cast<void***>(inner);
    using GetBoolFn = bool (__thiscall*)(void* self, void* arg);
    GetBoolFn get = reinterpret_cast<GetBoolFn>(vtbl[3]);
    const bool value = get(inner, src);

    // Write the value through NMData::State::setIsDeactivated (sub_0049AA00).
    ext_0049AA00(target, value);
}
} // namespace lift_0049BF20

// [0x004A25E0] ExprParser::ReadWriteMethodType<StateMachineEditor::FSMEditView, int, {public: int __thiscall StateMachineEditor::FSMEditView::getDrawDepth(void) const, 0}, int, {public: void __thiscall StateMachineEditor::FSMEditView::setDrawDepth(int), 0}>::vfunc_41 (68 bytes)
namespace lift_004A25E0 {
// Known callee 0x004A24D0: FSMEditView::setDrawDepth(int) (thiscall, one stack argument).
extern void ext_004A24D0();
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk forwarding to MSVCR80!_CxxThrowException.)
// Replaced below by a portable std::runtime_error throw.

// @name ExprParser::ReadWriteMethodType<StateMachineEditor::FSMEditView>::vfunc_41 (FSMEditView::getDrawDepth -> setDrawDepth)
// @class ExprParser::ReadWriteMethodType<StateMachineEditor::FSMEditView, int, {public: int __thiscall StateMachineEditor::FSMEditView::getDrawDepth(void) const, 0}, int, {public: void __thiscall StateMachineEditor::FSMEditView::setDrawDepth(int), 0}>
// @summary Reads an int through the source's inner getter (vtable slot 2) and forwards it to FSMEditView::setDrawDepth; throws if the target view pointer is null.
// @field ExprParser::ValuePtrType +0x00 void* target
// @field ExprParser::ReadWriteMethodType +0x04 void* inner
void fn_004A25E0(void** dst, void* src) {
    // dst +0x00: pointer to the FSMEditView that receives the write. Null means the target is missing.
    void* view = *dst;
    if (view == nullptr) {
        // The original throws a MSVC C++ exception here (MSVCR80 _CxxThrowException). No portable equivalent of that exact type exists.
        throw std::runtime_error("ReadWriteMethodType: null FSMEditView target");
    }

    // src +0x04: inner accessor object. Its vtable slot 2 (+0x08) is the int getter; src is passed as its single stack argument.
    void* inner = *reinterpret_cast<void**>(static_cast<std::uint8_t*>(src) + 0x04);
    void** vtbl = *reinterpret_cast<void***>(inner);
    using GetIntFn = int(__thiscall*)(void* self, void* arg);
    GetIntFn get = reinterpret_cast<GetIntFn>(vtbl[2]);
    const int value = get(inner, src);

    // Forward to FSMEditView::setDrawDepth (sub_004A24D0) with the view as `this`.
    using SetDrawDepthFn = void(__thiscall*)(void* self, int depth);
    SetDrawDepthFn setDrawDepth = reinterpret_cast<SetDrawDepthFn>(ext_004A24D0);
    setDrawDepth(view, value);
}
} // namespace lift_004A25E0

// [0x0046F080] ExprParser::ReadWriteMethodType<ImageExporter, int, {public: int __thiscall ImageExporter::getImageWidth(void) const, 0}, int, {public: void __thiscall ImageExporter::setImageWidth(int), 0}>::vfunc_41 (68 bytes)
namespace lift_0046F080 {
// Callee 0x0046C3C0: sub_0046C3C0 (thiscall, takes the address of the first argument as `self`).
extern void ext_0046C3C0(void* self);
// Callee 0x006AD060: SelectionBuffer::vfunc_0 (thiscall, one value argument).
extern void ext_006AD060(void* self, int value);
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk forwarding to MSVCR80!_CxxThrowException).
extern void ext_006A6DD2(void* exceptionObject, const void* throwInfo);

// ThrowInfo pointer pushed before the throw call in the original (VA 0x009DEC1C).
static constexpr uintptr_t kThrowInfo = 0x009DEC1Cu;

// @name ExprParser::ReadWriteMethodType<ImageExporter,int,getImageWidth,int,setImageWidth>::vfunc_41
// @class ExprParser::ReadWriteMethodType<ImageExporter, int, {public: int __thiscall ImageExporter::getImageWidth(void) const, 0}, int, {public: void __thiscall ImageExporter::setImageWidth(int), 0}>
// @summary If the first argument's target pointer is set, call the holder's virtual slot 2 to obtain an int and forward it to SelectionBuffer::vfunc_0; otherwise raise a C++ exception.
// @field ExprParser::ValuePtrType +0x00 void* field_0x00
void fn_0046F080(void* a, void* b) {
    void* target = lift_field<void*>(a, 0x00);
    if (target == nullptr) {
        ext_0046C3C0(a);
        ext_006A6DD2(a, reinterpret_cast<const void*>(kThrowInfo));
        return;
    }

    // b is an untyped holder; its +0x04 member is an object whose vtable slot +0x08 is invoked.
    void* inner = lift_field<void*>(b, 0x04);
    void* vtable = lift_field<void*>(inner, 0x00);
    using Slot2Fn = int (*)(void* self, void* arg);
    auto slot2 = reinterpret_cast<Slot2Fn>(lift_field<void*>(vtable, 0x08));
    int value = slot2(inner, b);

    ext_006AD060(target, value);
}
} // namespace lift_0046F080

// [0x004A2580] ExprParser::ReadWriteMethodType<StateMachineEditor::FSMEditView, bool, {public: bool __thiscall StateMachineEditor::FSMEditView::drawActions(void) const, 0}, bool, {public: void __thiscall StateMachineEditor::FSMEditView::setDrawActions(bool), 0}>::vfunc_41 (68 bytes)
namespace lift_004A2580 {
// Setter: StateMachineEditor::FSMEditView::setDrawActions(bool), thiscall with one stack argument.
extern void ext_004A24C0(void* self, bool value);
// Null-target path helper (sub_0046C3C0): constructs the exception object from arg1.
extern void ext_0046C3C0();
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk forwarding to MSVCR80!_CxxThrowException.)
extern void ext_006A6DD2();

// @name ExprParser::ReadWriteMethodType<StateMachineEditor::FSMEditView>::vfunc_41 (drawActions -> setDrawActions)
// @class ExprParser::ReadWriteMethodType<StateMachineEditor::FSMEditView, bool, {public: bool __thiscall StateMachineEditor::FSMEditView::drawActions(void) const, 0}, bool, {public: void __thiscall StateMachineEditor::FSMEditView::setDrawActions(bool), 0}>
// @summary Reads a bool via the source's inner getter (vtable slot 3) and forwards it to FSMEditView::setDrawActions; throws if the target object is null.
// @field ExprParser::ValuePtrType +0x00 void* target
// @field ExprParser::ReadMethodType +0x04 void* inner
void fn_004A2580(void** dst, void* src) {
    // dst +0x00: FSMEditView* whose setDrawActions() receives the value. Null means the target is missing, which is an error.
    void* target = *dst;
    if (target == nullptr) {
        // The original throws a MSVC C++ exception here (MSVCR80 _CxxThrowException with a
        // type descriptor at 0x009DEC1C). No portable equivalent of that exact type exists.
        ext_0046C3C0();
        ext_006A6DD2();
        return;
    }

    // src +0x04: inner object whose vtable slot 3 (+0x0c) returns the bool getter result; src is passed as its single stack argument.
    void* inner = *reinterpret_cast<void**>(reinterpret_cast<char*>(src) + 0x04);
    void** vtbl = *reinterpret_cast<void***>(inner);
    using GetBoolFn = bool (*)(void* self, void* holder);
    GetBoolFn get = reinterpret_cast<GetBoolFn>(vtbl[3]);
    const bool value = get(inner, src);

    ext_004A24C0(target, value);
}
} // namespace lift_004A2580

// [0x004701F0] ExprParser::ReadWriteMethodType<RuntimeEngine, bool, {public: bool __thiscall RuntimeEngine::getPlaybackLoopingEnabled(void) const, 0}, bool, {public: void __thiscall RuntimeEngine::enablePlaybackLooping(bool), 0}>::vfunc_41 (68 bytes)
namespace lift_004701F0 {
// @name ExprParser::ReadWriteMethodType<RuntimeEngine, bool, {public: bool __thiscall RuntimeEngine::getPlaybackLoopingEnabled(void) const, 0}, bool, {public: void __thiscall RuntimeEngine::enablePlaybackLooping(bool), 0}>::vfunc_41
// @class ExprParser::ReadWriteMethodType<RuntimeEngine, bool, {public: bool __thiscall RuntimeEngine::getPlaybackLoopingEnabled(void) const, 0}, bool, {public: void __thiscall RuntimeEngine::enablePlaybackLooping(bool), 0}>
// @summary Auto-lifted identical-shape clone of 0x0046E450 (ExprParser::ReadWriteMethodType<DoubleWithProperties>::vfunc_41 (DoubleWithProperties::getValue)).
namespace lift_0046E450 {
extern void ext_0046F8F0();
extern void ext_0046C3C0();
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk forwarding to MSVCR80!_CxxThrowException.)
extern void ext_006A6DD2();
extern int mem_009DEC1C;

// @name ReadWriteMethodType<ImageExporter,bool,getUseRenderer,bool,setUseRenderer>::vfunc_41
// @class ExprParser::ReadWriteMethodType<ImageExporter, bool, {public: bool __thiscall ImageExporter::getUseRenderer(void) const, 0}, bool, {public: void __thiscall ImageExporter::setUseRenderer(bool), 0}>
// @summary Forwards arg2's sub-object result into the target held by arg1; throws if arg1's target is null.
// @field ExprParser::ReadWriteMethodType<ImageExporter, bool, {public: bool __thiscall ImageExporter::getUseRenderer(void) const, 0}, bool, {public: void __thiscall ImageExporter::setUseRenderer(bool), 0}> +0x00 void* field_0x00
// @field ExprParser::ReadWriteMethodType<ImageExporter, bool, {public: bool __thiscall ImageExporter::getUseRenderer(void) const, 0}, bool, {public: void __thiscall ImageExporter::setUseRenderer(bool), 0}> +0x04 void* field_0x04
void fn_004701F0(void* arg1, void* arg2) {
    // arg1 is a pointer to a slot whose value is the target object pointer.
    void* target = *static_cast<void**>(arg1);
    if (target == nullptr) {
        // Null target: construct the exception in place at &arg1 and throw it.
        using InitFn = void (*)(void*);
        reinterpret_cast<InitFn>(&ext_0046C3C0)(&arg1);
        using ThrowFn = void (*)(void*, void*);
        reinterpret_cast<ThrowFn>(&ext_006A6DD2)(&arg1, &mem_009DEC1C);
        return;
    }

    // sub = arg2->field_0x04; r = sub->vtable[0x0c](sub, arg2)
    void* sub = lift_field<void*>(arg2, 0x04);
    void* vt = lift_field<void*>(sub, 0x00);
    using VFn = uint32_t (*)(void* self, void* arg);
    VFn vcall = reinterpret_cast<VFn>(lift_field<void*>(vt, 0x0c));
    uint32_t r = vcall(sub, arg2);

    // sub_0046C2D0(target, r)
    using SetFn = void (*)(void* self, uint32_t value);
    reinterpret_cast<SetFn>(&ext_0046F8F0)(target, r);
}
} // namespace lift_0046E450
} // namespace lift_004701F0

// [0x004712B0] ExprParser::ReadWriteMethodType<RuntimeEngine, int, {public: int __thiscall RuntimeEngine::getNumTicksToRun(void) const, 0}, int, {public: void __thiscall RuntimeEngine::setNumTicksToRun(int), 0}>::vfunc_41 (68 bytes)
namespace lift_004712B0 {
// @name ExprParser::ReadWriteMethodType<RuntimeEngine, int, {public: int __thiscall RuntimeEngine::getNumTicksToRun(void) const, 0}, int, {public: void __thiscall RuntimeEngine::setNumTicksToRun(int), 0}>::vfunc_41
// @class ExprParser::ReadWriteMethodType<RuntimeEngine, int, {public: int __thiscall RuntimeEngine::getNumTicksToRun(void) const, 0}, int, {public: void __thiscall RuntimeEngine::setNumTicksToRun(int), 0}>
// @summary Auto-lifted identical-shape clone of 0x0046EA50 (ExprParser::ReadWriteMethodType<DoubleWithProperties>::vfunc_41 (DoubleWithProperties::getValue)).
namespace lift_0046EA50 {
extern void ext_0046FF50();
extern void ext_0046C3C0();
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk forwarding to MSVCR80!_CxxThrowException.)
extern void ext_006A6DD2();
extern int mem_009DEC1C;

// @name ReadWriteMethodType_ImageExporter_EndFrame_vfunc_41
// @class ExprParser::ReadWriteMethodType<ImageExporter, int, {public: int __thiscall ImageExporter::getEndFrame(void) const, 0}, int, {public: void __thiscall ImageExporter::setEndFrame(int), 0}>
// @summary Reads an int from the context via its virtual getter (slot 2 of the sub-object vtable) and forwards it to the bound target's setter; throws if the target is null.
// @field ValuePtrType +0x00 void* field_0x00
// @field ExprParser::ReadWriteMethodType +0x04 void* field_0x04
struct ValuePtrTypeLite {
    void* field_0x00; // target object (set via ecx in ReadWriteMethodType setter)
};

// Callee signatures (both thiscall in the original binary; modeled as plain C functions here).
using SetterFn = void (*)(void* self, int value);
using VirtualGetFn = int (*)(void* self, void* ctx);

void fn_004712B0(ValuePtrTypeLite* self, void* ctx) {
    void* target = self->field_0x00;
    if (target != nullptr) {
        // ctx+0x04 is the sub-object whose vtable slot 2 produces the value.
        void** subObj = reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(ctx) + 0x04);
        void* sub = *subObj;
        void** vtbl = *reinterpret_cast<void***>(sub);
        auto getter = reinterpret_cast<VirtualGetFn>(vtbl[2]);
        int value = getter(sub, ctx);
        reinterpret_cast<SetterFn>(ext_0046FF50)(target, value);
        return;
    }
    // Null target: construct exception via helper and throw through the CRT thunk.
    reinterpret_cast<void (*)(void*)>(ext_0046C3C0)(&self);
    (void)mem_009DEC1C;
    ext_006A6DD2();
}
} // namespace lift_0046EA50
} // namespace lift_004712B0

// [0x004A2740] ExprParser::ReadWriteMethodType<StateMachineEditor::FSMEditView, int, {public: int __thiscall StateMachineEditor::FSMEditView::getCodeWindowFontSize(void) const, 0}, int, {public: void __thiscall StateMachineEditor::FSMEditView::setCodeWindowFontSize(int), 0}>::vfunc_41 (68 bytes)
namespace lift_004A2740 {
// @name ExprParser::ReadWriteMethodType<StateMachineEditor::FSMEditView, int, {public: int __thiscall StateMachineEditor::FSMEditView::getCodeWindowFontSize(void) const, 0}, int, {public: void __thiscall StateMachineEditor::FSMEditView::setCodeWindowFontSize(int), 0}>::vfunc_41
// @class ExprParser::ReadWriteMethodType<StateMachineEditor::FSMEditView, int, {public: int __thiscall StateMachineEditor::FSMEditView::getCodeWindowFontSize(void) const, 0}, int, {public: void __thiscall StateMachineEditor::FSMEditView::setCodeWindowFontSize(int), 0}>
// @summary Auto-lifted identical-shape clone of 0x0046EA50 (ExprParser::ReadWriteMethodType<DoubleWithProperties>::vfunc_41 (DoubleWithProperties::getValue)).
namespace lift_0046EA50 {
extern void ext_004A24A0();
extern void ext_0046C3C0();
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk forwarding to MSVCR80!_CxxThrowException.)
extern void ext_006A6DD2();
extern int mem_009DEC1C;

// @name ReadWriteMethodType_ImageExporter_EndFrame_vfunc_41
// @class ExprParser::ReadWriteMethodType<ImageExporter, int, {public: int __thiscall ImageExporter::getEndFrame(void) const, 0}, int, {public: void __thiscall ImageExporter::setEndFrame(int), 0}>
// @summary Reads an int from the context via its virtual getter (slot 2 of the sub-object vtable) and forwards it to the bound target's setter; throws if the target is null.
// @field ValuePtrType +0x00 void* field_0x00
// @field ExprParser::ReadWriteMethodType +0x04 void* field_0x04
struct ValuePtrTypeLite {
    void* field_0x00; // target object (set via ecx in ReadWriteMethodType setter)
};

// Callee signatures (both thiscall in the original binary; modeled as plain C functions here).
using SetterFn = void (*)(void* self, int value);
using VirtualGetFn = int (*)(void* self, void* ctx);

void fn_004A2740(ValuePtrTypeLite* self, void* ctx) {
    void* target = self->field_0x00;
    if (target != nullptr) {
        // ctx+0x04 is the sub-object whose vtable slot 2 produces the value.
        void** subObj = reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(ctx) + 0x04);
        void* sub = *subObj;
        void** vtbl = *reinterpret_cast<void***>(sub);
        auto getter = reinterpret_cast<VirtualGetFn>(vtbl[2]);
        int value = getter(sub, ctx);
        reinterpret_cast<SetterFn>(ext_004A24A0)(target, value);
        return;
    }
    // Null target: construct exception via helper and throw through the CRT thunk.
    reinterpret_cast<void (*)(void*)>(ext_0046C3C0)(&self);
    (void)mem_009DEC1C;
    ext_006A6DD2();
}
} // namespace lift_0046EA50
} // namespace lift_004A2740

// [0x004B54F0] ExprParser::ReadWriteMethodType<NMData::GraphEngineData, bool, {public: bool __thiscall NMData::GraphEngineData::attachToFrameBuffer(void) const, 0}, bool, {public: void __thiscall NMData::GraphEngineData::setAttachToFrameBuffer(bool), 0}>::vfunc_41 (68 bytes)
namespace lift_004B54F0 {
// @name ExprParser::ReadWriteMethodType<NMData::GraphEngineData, bool, {public: bool __thiscall NMData::GraphEngineData::attachToFrameBuffer(void) const, 0}, bool, {public: void __thiscall NMData::GraphEngineData::setAttachToFrameBuffer(bool), 0}>::vfunc_41
// @class ExprParser::ReadWriteMethodType<NMData::GraphEngineData, bool, {public: bool __thiscall NMData::GraphEngineData::attachToFrameBuffer(void) const, 0}, bool, {public: void __thiscall NMData::GraphEngineData::setAttachToFrameBuffer(bool), 0}>
// @summary Auto-lifted identical-shape clone of 0x0046E450 (ExprParser::ReadWriteMethodType<DoubleWithProperties>::vfunc_41 (DoubleWithProperties::getValue)).
namespace lift_0046E450 {
extern void ext_004B5250();
extern void ext_0046C3C0();
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk forwarding to MSVCR80!_CxxThrowException.)
extern void ext_006A6DD2();
extern int mem_009DEC1C;

// @name ReadWriteMethodType<ImageExporter,bool,getUseRenderer,bool,setUseRenderer>::vfunc_41
// @class ExprParser::ReadWriteMethodType<ImageExporter, bool, {public: bool __thiscall ImageExporter::getUseRenderer(void) const, 0}, bool, {public: void __thiscall ImageExporter::setUseRenderer(bool), 0}>
// @summary Forwards arg2's sub-object result into the target held by arg1; throws if arg1's target is null.
// @field ExprParser::ReadWriteMethodType<ImageExporter, bool, {public: bool __thiscall ImageExporter::getUseRenderer(void) const, 0}, bool, {public: void __thiscall ImageExporter::setUseRenderer(bool), 0}> +0x00 void* field_0x00
// @field ExprParser::ReadWriteMethodType<ImageExporter, bool, {public: bool __thiscall ImageExporter::getUseRenderer(void) const, 0}, bool, {public: void __thiscall ImageExporter::setUseRenderer(bool), 0}> +0x04 void* field_0x04
void fn_004B54F0(void* arg1, void* arg2) {
    // arg1 is a pointer to a slot whose value is the target object pointer.
    void* target = *static_cast<void**>(arg1);
    if (target == nullptr) {
        // Null target: construct the exception in place at &arg1 and throw it.
        using InitFn = void (*)(void*);
        reinterpret_cast<InitFn>(&ext_0046C3C0)(&arg1);
        using ThrowFn = void (*)(void*, void*);
        reinterpret_cast<ThrowFn>(&ext_006A6DD2)(&arg1, &mem_009DEC1C);
        return;
    }

    // sub = arg2->field_0x04; r = sub->vtable[0x0c](sub, arg2)
    void* sub = lift_field<void*>(arg2, 0x04);
    void* vt = lift_field<void*>(sub, 0x00);
    using VFn = uint32_t (*)(void* self, void* arg);
    VFn vcall = reinterpret_cast<VFn>(lift_field<void*>(vt, 0x0c));
    uint32_t r = vcall(sub, arg2);

    // sub_0046C2D0(target, r)
    using SetFn = void (*)(void* self, uint32_t value);
    reinterpret_cast<SetFn>(&ext_004B5250)(target, r);
}
} // namespace lift_0046E450
} // namespace lift_004B54F0

// [0x004C0FF0] ExprParser::ReadWriteMethodType<NMData::TriggeredEventData, int, {public: int __thiscall NMData::TriggeredEventData::getStartFrameNumber(void) const, 0}, int, {[thunk]: __thiscall NMData::TriggeredEventData::`vcall'{276, {flat}}, 0}>::vfunc_41 (68 bytes)
namespace lift_004C0FF0 {
// @name ExprParser::ReadWriteMethodType<NMData::TriggeredEventData, int, {public: int __thiscall NMData::TriggeredEventData::getStartFrameNumber(void) const, 0}, int, {[thunk]: __thiscall NMData::TriggeredEventData::`vcall'{276, {flat}}, 0}>::vfunc_41
// @class ExprParser::ReadWriteMethodType<NMData::TriggeredEventData, int, {public: int __thiscall NMData::TriggeredEventData::getStartFrameNumber(void) const, 0}, int, {[thunk]: __thiscall NMData::TriggeredEventData::`vcall'{276, {flat}}, 0}>
// @summary Auto-lifted identical-shape clone of 0x0046EA50 (ExprParser::ReadWriteMethodType<DoubleWithProperties>::vfunc_41 (DoubleWithProperties::getValue)).
namespace lift_0046EA50 {
extern void ext_004C0FE0();
extern void ext_0046C3C0();
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk forwarding to MSVCR80!_CxxThrowException.)
extern void ext_006A6DD2();
extern int mem_009DEC1C;

// @name ReadWriteMethodType_ImageExporter_EndFrame_vfunc_41
// @class ExprParser::ReadWriteMethodType<ImageExporter, int, {public: int __thiscall ImageExporter::getEndFrame(void) const, 0}, int, {public: void __thiscall ImageExporter::setEndFrame(int), 0}>
// @summary Reads an int from the context via its virtual getter (slot 2 of the sub-object vtable) and forwards it to the bound target's setter; throws if the target is null.
// @field ValuePtrType +0x00 void* field_0x00
// @field ExprParser::ReadWriteMethodType +0x04 void* field_0x04
struct ValuePtrTypeLite {
    void* field_0x00; // target object (set via ecx in ReadWriteMethodType setter)
};

// Callee signatures (both thiscall in the original binary; modeled as plain C functions here).
using SetterFn = void (*)(void* self, int value);
using VirtualGetFn = int (*)(void* self, void* ctx);

void fn_004C0FF0(ValuePtrTypeLite* self, void* ctx) {
    void* target = self->field_0x00;
    if (target != nullptr) {
        // ctx+0x04 is the sub-object whose vtable slot 2 produces the value.
        void** subObj = reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(ctx) + 0x04);
        void* sub = *subObj;
        void** vtbl = *reinterpret_cast<void***>(sub);
        auto getter = reinterpret_cast<VirtualGetFn>(vtbl[2]);
        int value = getter(sub, ctx);
        reinterpret_cast<SetterFn>(ext_004C0FE0)(target, value);
        return;
    }
    // Null target: construct exception via helper and throw through the CRT thunk.
    reinterpret_cast<void (*)(void*)>(ext_0046C3C0)(&self);
    (void)mem_009DEC1C;
    ext_006A6DD2();
}
} // namespace lift_0046EA50
} // namespace lift_004C0FF0

// [0x004C1C70] ExprParser::ReadWriteMethodType<NMData::TriggeredEventData, int, {public: int __thiscall NMData::TriggeredEventData::getEndFrameNumber(void) const, 0}, int, {public: void __thiscall NMData::TriggeredEventData::setEndFrameNumber(int), 0}>::vfunc_41 (68 bytes)
namespace lift_004C1C70 {
// @name ExprParser::ReadWriteMethodType<NMData::TriggeredEventData, int, {public: int __thiscall NMData::TriggeredEventData::getEndFrameNumber(void) const, 0}, int, {public: void __thiscall NMData::TriggeredEventData::setEndFrameNumber(int), 0}>::vfunc_41
// @class ExprParser::ReadWriteMethodType<NMData::TriggeredEventData, int, {public: int __thiscall NMData::TriggeredEventData::getEndFrameNumber(void) const, 0}, int, {public: void __thiscall NMData::TriggeredEventData::setEndFrameNumber(int), 0}>
// @summary Auto-lifted identical-shape clone of 0x0046EA50 (ExprParser::ReadWriteMethodType<DoubleWithProperties>::vfunc_41 (DoubleWithProperties::getValue)).
namespace lift_0046EA50 {
extern void ext_004C1AC0();
extern void ext_0046C3C0();
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk forwarding to MSVCR80!_CxxThrowException.)
extern void ext_006A6DD2();
extern int mem_009DEC1C;

// @name ReadWriteMethodType_ImageExporter_EndFrame_vfunc_41
// @class ExprParser::ReadWriteMethodType<ImageExporter, int, {public: int __thiscall ImageExporter::getEndFrame(void) const, 0}, int, {public: void __thiscall ImageExporter::setEndFrame(int), 0}>
// @summary Reads an int from the context via its virtual getter (slot 2 of the sub-object vtable) and forwards it to the bound target's setter; throws if the target is null.
// @field ValuePtrType +0x00 void* field_0x00
// @field ExprParser::ReadWriteMethodType +0x04 void* field_0x04
struct ValuePtrTypeLite {
    void* field_0x00; // target object (set via ecx in ReadWriteMethodType setter)
};

// Callee signatures (both thiscall in the original binary; modeled as plain C functions here).
using SetterFn = void (*)(void* self, int value);
using VirtualGetFn = int (*)(void* self, void* ctx);

void fn_004C1C70(ValuePtrTypeLite* self, void* ctx) {
    void* target = self->field_0x00;
    if (target != nullptr) {
        // ctx+0x04 is the sub-object whose vtable slot 2 produces the value.
        void** subObj = reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(ctx) + 0x04);
        void* sub = *subObj;
        void** vtbl = *reinterpret_cast<void***>(sub);
        auto getter = reinterpret_cast<VirtualGetFn>(vtbl[2]);
        int value = getter(sub, ctx);
        reinterpret_cast<SetterFn>(ext_004C1AC0)(target, value);
        return;
    }
    // Null target: construct exception via helper and throw through the CRT thunk.
    reinterpret_cast<void (*)(void*)>(ext_0046C3C0)(&self);
    (void)mem_009DEC1C;
    ext_006A6DD2();
}
} // namespace lift_0046EA50
} // namespace lift_004C1C70

// [0x004C5840] ExprParser::ReadWriteMethodType<NMData::ForceEventData, int, {public: int __thiscall NMData::ForceEventData::getFrameNumber(void) const, 0}, int, {public: void __thiscall NMData::ForceEventData::setFrameNumber(int), 0}>::vfunc_41 (68 bytes)
namespace lift_004C5840 {
// @name ExprParser::ReadWriteMethodType<NMData::ForceEventData, int, {public: int __thiscall NMData::ForceEventData::getFrameNumber(void) const, 0}, int, {public: void __thiscall NMData::ForceEventData::setFrameNumber(int), 0}>::vfunc_41
// @class ExprParser::ReadWriteMethodType<NMData::ForceEventData, int, {public: int __thiscall NMData::ForceEventData::getFrameNumber(void) const, 0}, int, {public: void __thiscall NMData::ForceEventData::setFrameNumber(int), 0}>
// @summary Auto-lifted identical-shape clone of 0x0046EA50 (ExprParser::ReadWriteMethodType<DoubleWithProperties>::vfunc_41 (DoubleWithProperties::getValue)).
namespace lift_0046EA50 {
extern void ext_004C4DC0();
extern void ext_0046C3C0();
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk forwarding to MSVCR80!_CxxThrowException.)
extern void ext_006A6DD2();
extern int mem_009DEC1C;

// @name ReadWriteMethodType_ImageExporter_EndFrame_vfunc_41
// @class ExprParser::ReadWriteMethodType<ImageExporter, int, {public: int __thiscall ImageExporter::getEndFrame(void) const, 0}, int, {public: void __thiscall ImageExporter::setEndFrame(int), 0}>
// @summary Reads an int from the context via its virtual getter (slot 2 of the sub-object vtable) and forwards it to the bound target's setter; throws if the target is null.
// @field ValuePtrType +0x00 void* field_0x00
// @field ExprParser::ReadWriteMethodType +0x04 void* field_0x04
struct ValuePtrTypeLite {
    void* field_0x00; // target object (set via ecx in ReadWriteMethodType setter)
};

// Callee signatures (both thiscall in the original binary; modeled as plain C functions here).
using SetterFn = void (*)(void* self, int value);
using VirtualGetFn = int (*)(void* self, void* ctx);

void fn_004C5840(ValuePtrTypeLite* self, void* ctx) {
    void* target = self->field_0x00;
    if (target != nullptr) {
        // ctx+0x04 is the sub-object whose vtable slot 2 produces the value.
        void** subObj = reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(ctx) + 0x04);
        void* sub = *subObj;
        void** vtbl = *reinterpret_cast<void***>(sub);
        auto getter = reinterpret_cast<VirtualGetFn>(vtbl[2]);
        int value = getter(sub, ctx);
        reinterpret_cast<SetterFn>(ext_004C4DC0)(target, value);
        return;
    }
    // Null target: construct exception via helper and throw through the CRT thunk.
    reinterpret_cast<void (*)(void*)>(ext_0046C3C0)(&self);
    (void)mem_009DEC1C;
    ext_006A6DD2();
}
} // namespace lift_0046EA50
} // namespace lift_004C5840

// [0x004CAE90] ExprParser::ReadWriteMethodType<NMData::MetaBodyConstraintData, bool, {public: bool __thiscall NMData::MetaBodyConstraintData::mustKeepOffset(void) const, 0}, bool, {public: void __thiscall NMData::MetaBodyConstraintData::setMustKeepOffset(bool), 0}>::vfunc_41 (68 bytes)
namespace lift_004CAE90 {
// @name ExprParser::ReadWriteMethodType<NMData::MetaBodyConstraintData, bool, {public: bool __thiscall NMData::MetaBodyConstraintData::mustKeepOffset(void) const, 0}, bool, {public: void __thiscall NMData::MetaBodyConstraintData::setMustKeepOffset(bool), 0}>::vfunc_41
// @class ExprParser::ReadWriteMethodType<NMData::MetaBodyConstraintData, bool, {public: bool __thiscall NMData::MetaBodyConstraintData::mustKeepOffset(void) const, 0}, bool, {public: void __thiscall NMData::MetaBodyConstraintData::setMustKeepOffset(bool), 0}>
// @summary Auto-lifted identical-shape clone of 0x0046E450 (ExprParser::ReadWriteMethodType<DoubleWithProperties>::vfunc_41 (DoubleWithProperties::getValue)).
namespace lift_0046E450 {
extern void ext_004CA2E0();
extern void ext_0046C3C0();
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk forwarding to MSVCR80!_CxxThrowException.)
extern void ext_006A6DD2();
extern int mem_009DEC1C;

// @name ReadWriteMethodType<ImageExporter,bool,getUseRenderer,bool,setUseRenderer>::vfunc_41
// @class ExprParser::ReadWriteMethodType<ImageExporter, bool, {public: bool __thiscall ImageExporter::getUseRenderer(void) const, 0}, bool, {public: void __thiscall ImageExporter::setUseRenderer(bool), 0}>
// @summary Forwards arg2's sub-object result into the target held by arg1; throws if arg1's target is null.
// @field ExprParser::ReadWriteMethodType<ImageExporter, bool, {public: bool __thiscall ImageExporter::getUseRenderer(void) const, 0}, bool, {public: void __thiscall ImageExporter::setUseRenderer(bool), 0}> +0x00 void* field_0x00
// @field ExprParser::ReadWriteMethodType<ImageExporter, bool, {public: bool __thiscall ImageExporter::getUseRenderer(void) const, 0}, bool, {public: void __thiscall ImageExporter::setUseRenderer(bool), 0}> +0x04 void* field_0x04
void fn_004CAE90(void* arg1, void* arg2) {
    // arg1 is a pointer to a slot whose value is the target object pointer.
    void* target = *static_cast<void**>(arg1);
    if (target == nullptr) {
        // Null target: construct the exception in place at &arg1 and throw it.
        using InitFn = void (*)(void*);
        reinterpret_cast<InitFn>(&ext_0046C3C0)(&arg1);
        using ThrowFn = void (*)(void*, void*);
        reinterpret_cast<ThrowFn>(&ext_006A6DD2)(&arg1, &mem_009DEC1C);
        return;
    }

    // sub = arg2->field_0x04; r = sub->vtable[0x0c](sub, arg2)
    void* sub = lift_field<void*>(arg2, 0x04);
    void* vt = lift_field<void*>(sub, 0x00);
    using VFn = uint32_t (*)(void* self, void* arg);
    VFn vcall = reinterpret_cast<VFn>(lift_field<void*>(vt, 0x0c));
    uint32_t r = vcall(sub, arg2);

    // sub_0046C2D0(target, r)
    using SetFn = void (*)(void* self, uint32_t value);
    reinterpret_cast<SetFn>(&ext_004CA2E0)(target, r);
}
} // namespace lift_0046E450
} // namespace lift_004CAE90

// [0x004D5320] ExprParser::ReadWriteMethodType<NMData::RigEventData, bool, {public: bool __thiscall NMData::RigEventData::isInitTargetPoseEnabled(void) const, 0}, bool, {public: void __thiscall NMData::RigEventData::setIsInitTargetPoseEnabled(bool), 0}>::vfunc_41 (68 bytes)
namespace lift_004D5320 {
// @name ExprParser::ReadWriteMethodType<NMData::RigEventData, bool, {public: bool __thiscall NMData::RigEventData::isInitTargetPoseEnabled(void) const, 0}, bool, {public: void __thiscall NMData::RigEventData::setIsInitTargetPoseEnabled(bool), 0}>::vfunc_41
// @class ExprParser::ReadWriteMethodType<NMData::RigEventData, bool, {public: bool __thiscall NMData::RigEventData::isInitTargetPoseEnabled(void) const, 0}, bool, {public: void __thiscall NMData::RigEventData::setIsInitTargetPoseEnabled(bool), 0}>
// @summary Auto-lifted identical-shape clone of 0x0046E450 (ExprParser::ReadWriteMethodType<DoubleWithProperties>::vfunc_41 (DoubleWithProperties::getValue)).
namespace lift_0046E450 {
extern void ext_004D3B30();
extern void ext_0046C3C0();
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk forwarding to MSVCR80!_CxxThrowException.)
extern void ext_006A6DD2();
extern int mem_009DEC1C;

// @name ReadWriteMethodType<ImageExporter,bool,getUseRenderer,bool,setUseRenderer>::vfunc_41
// @class ExprParser::ReadWriteMethodType<ImageExporter, bool, {public: bool __thiscall ImageExporter::getUseRenderer(void) const, 0}, bool, {public: void __thiscall ImageExporter::setUseRenderer(bool), 0}>
// @summary Forwards arg2's sub-object result into the target held by arg1; throws if arg1's target is null.
// @field ExprParser::ReadWriteMethodType<ImageExporter, bool, {public: bool __thiscall ImageExporter::getUseRenderer(void) const, 0}, bool, {public: void __thiscall ImageExporter::setUseRenderer(bool), 0}> +0x00 void* field_0x00
// @field ExprParser::ReadWriteMethodType<ImageExporter, bool, {public: bool __thiscall ImageExporter::getUseRenderer(void) const, 0}, bool, {public: void __thiscall ImageExporter::setUseRenderer(bool), 0}> +0x04 void* field_0x04
void fn_004D5320(void* arg1, void* arg2) {
    // arg1 is a pointer to a slot whose value is the target object pointer.
    void* target = *static_cast<void**>(arg1);
    if (target == nullptr) {
        // Null target: construct the exception in place at &arg1 and throw it.
        using InitFn = void (*)(void*);
        reinterpret_cast<InitFn>(&ext_0046C3C0)(&arg1);
        using ThrowFn = void (*)(void*, void*);
        reinterpret_cast<ThrowFn>(&ext_006A6DD2)(&arg1, &mem_009DEC1C);
        return;
    }

    // sub = arg2->field_0x04; r = sub->vtable[0x0c](sub, arg2)
    void* sub = lift_field<void*>(arg2, 0x04);
    void* vt = lift_field<void*>(sub, 0x00);
    using VFn = uint32_t (*)(void* self, void* arg);
    VFn vcall = reinterpret_cast<VFn>(lift_field<void*>(vt, 0x0c));
    uint32_t r = vcall(sub, arg2);

    // sub_0046C2D0(target, r)
    using SetFn = void (*)(void* self, uint32_t value);
    reinterpret_cast<SetFn>(&ext_004D3B30)(target, r);
}
} // namespace lift_0046E450
} // namespace lift_004D5320

// [0x004D5370] ExprParser::ReadWriteMethodType<NMData::RigEventData, bool, {public: bool __thiscall NMData::RigEventData::isUseSubTicksEnabled(void) const, 0}, bool, {public: void __thiscall NMData::RigEventData::setIsUseSubticksEnabled(bool), 0}>::vfunc_41 (68 bytes)
namespace lift_004D5370 {
// @name ExprParser::ReadWriteMethodType<NMData::RigEventData, bool, {public: bool __thiscall NMData::RigEventData::isUseSubTicksEnabled(void) const, 0}, bool, {public: void __thiscall NMData::RigEventData::setIsUseSubticksEnabled(bool), 0}>::vfunc_41
// @class ExprParser::ReadWriteMethodType<NMData::RigEventData, bool, {public: bool __thiscall NMData::RigEventData::isUseSubTicksEnabled(void) const, 0}, bool, {public: void __thiscall NMData::RigEventData::setIsUseSubticksEnabled(bool), 0}>
// @summary Auto-lifted identical-shape clone of 0x0046E450 (ExprParser::ReadWriteMethodType<DoubleWithProperties>::vfunc_41 (DoubleWithProperties::getValue)).
namespace lift_0046E450 {
extern void ext_004D3B50();
extern void ext_0046C3C0();
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk forwarding to MSVCR80!_CxxThrowException.)
extern void ext_006A6DD2();
extern int mem_009DEC1C;

// @name ReadWriteMethodType<ImageExporter,bool,getUseRenderer,bool,setUseRenderer>::vfunc_41
// @class ExprParser::ReadWriteMethodType<ImageExporter, bool, {public: bool __thiscall ImageExporter::getUseRenderer(void) const, 0}, bool, {public: void __thiscall ImageExporter::setUseRenderer(bool), 0}>
// @summary Forwards arg2's sub-object result into the target held by arg1; throws if arg1's target is null.
// @field ExprParser::ReadWriteMethodType<ImageExporter, bool, {public: bool __thiscall ImageExporter::getUseRenderer(void) const, 0}, bool, {public: void __thiscall ImageExporter::setUseRenderer(bool), 0}> +0x00 void* field_0x00
// @field ExprParser::ReadWriteMethodType<ImageExporter, bool, {public: bool __thiscall ImageExporter::getUseRenderer(void) const, 0}, bool, {public: void __thiscall ImageExporter::setUseRenderer(bool), 0}> +0x04 void* field_0x04
void fn_004D5370(void* arg1, void* arg2) {
    // arg1 is a pointer to a slot whose value is the target object pointer.
    void* target = *static_cast<void**>(arg1);
    if (target == nullptr) {
        // Null target: construct the exception in place at &arg1 and throw it.
        using InitFn = void (*)(void*);
        reinterpret_cast<InitFn>(&ext_0046C3C0)(&arg1);
        using ThrowFn = void (*)(void*, void*);
        reinterpret_cast<ThrowFn>(&ext_006A6DD2)(&arg1, &mem_009DEC1C);
        return;
    }

    // sub = arg2->field_0x04; r = sub->vtable[0x0c](sub, arg2)
    void* sub = lift_field<void*>(arg2, 0x04);
    void* vt = lift_field<void*>(sub, 0x00);
    using VFn = uint32_t (*)(void* self, void* arg);
    VFn vcall = reinterpret_cast<VFn>(lift_field<void*>(vt, 0x0c));
    uint32_t r = vcall(sub, arg2);

    // sub_0046C2D0(target, r)
    using SetFn = void (*)(void* self, uint32_t value);
    reinterpret_cast<SetFn>(&ext_004D3B50)(target, r);
}
} // namespace lift_0046E450
} // namespace lift_004D5370

// [0x004D53C0] ExprParser::ReadWriteMethodType<NMData::RigEventData, int, {public: int __thiscall NMData::RigEventData::getInitialPhysicsTicks(void) const, 0}, int, {public: void __thiscall NMData::RigEventData::setInitialPhysicsTicks(int), 0}>::vfunc_41 (68 bytes)
namespace lift_004D53C0 {
// @name ExprParser::ReadWriteMethodType<NMData::RigEventData, int, {public: int __thiscall NMData::RigEventData::getInitialPhysicsTicks(void) const, 0}, int, {public: void __thiscall NMData::RigEventData::setInitialPhysicsTicks(int), 0}>::vfunc_41
// @class ExprParser::ReadWriteMethodType<NMData::RigEventData, int, {public: int __thiscall NMData::RigEventData::getInitialPhysicsTicks(void) const, 0}, int, {public: void __thiscall NMData::RigEventData::setInitialPhysicsTicks(int), 0}>
// @summary Auto-lifted identical-shape clone of 0x0046EA50 (ExprParser::ReadWriteMethodType<DoubleWithProperties>::vfunc_41 (DoubleWithProperties::getValue)).
namespace lift_0046EA50 {
extern void ext_004D3B70();
extern void ext_0046C3C0();
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk forwarding to MSVCR80!_CxxThrowException.)
extern void ext_006A6DD2();
extern int mem_009DEC1C;

// @name ReadWriteMethodType_ImageExporter_EndFrame_vfunc_41
// @class ExprParser::ReadWriteMethodType<ImageExporter, int, {public: int __thiscall ImageExporter::getEndFrame(void) const, 0}, int, {public: void __thiscall ImageExporter::setEndFrame(int), 0}>
// @summary Reads an int from the context via its virtual getter (slot 2 of the sub-object vtable) and forwards it to the bound target's setter; throws if the target is null.
// @field ValuePtrType +0x00 void* field_0x00
// @field ExprParser::ReadWriteMethodType +0x04 void* field_0x04
struct ValuePtrTypeLite {
    void* field_0x00; // target object (set via ecx in ReadWriteMethodType setter)
};

// Callee signatures (both thiscall in the original binary; modeled as plain C functions here).
using SetterFn = void (*)(void* self, int value);
using VirtualGetFn = int (*)(void* self, void* ctx);

void fn_004D53C0(ValuePtrTypeLite* self, void* ctx) {
    void* target = self->field_0x00;
    if (target != nullptr) {
        // ctx+0x04 is the sub-object whose vtable slot 2 produces the value.
        void** subObj = reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(ctx) + 0x04);
        void* sub = *subObj;
        void** vtbl = *reinterpret_cast<void***>(sub);
        auto getter = reinterpret_cast<VirtualGetFn>(vtbl[2]);
        int value = getter(sub, ctx);
        reinterpret_cast<SetterFn>(ext_004D3B70)(target, value);
        return;
    }
    // Null target: construct exception via helper and throw through the CRT thunk.
    reinterpret_cast<void (*)(void*)>(ext_0046C3C0)(&self);
    (void)mem_009DEC1C;
    ext_006A6DD2();
}
} // namespace lift_0046EA50
} // namespace lift_004D53C0

// [0x004D5410] ExprParser::ReadWriteMethodType<NMData::RigEventData, int, {public: int __thiscall NMData::RigEventData::getPhysicsTicks(void) const, 0}, int, {public: void __thiscall NMData::RigEventData::setPhysicsTicks(int), 0}>::vfunc_41 (68 bytes)
namespace lift_004D5410 {
// @name ExprParser::ReadWriteMethodType<NMData::RigEventData, int, {public: int __thiscall NMData::RigEventData::getPhysicsTicks(void) const, 0}, int, {public: void __thiscall NMData::RigEventData::setPhysicsTicks(int), 0}>::vfunc_41
// @class ExprParser::ReadWriteMethodType<NMData::RigEventData, int, {public: int __thiscall NMData::RigEventData::getPhysicsTicks(void) const, 0}, int, {public: void __thiscall NMData::RigEventData::setPhysicsTicks(int), 0}>
// @summary Auto-lifted identical-shape clone of 0x0046EA50 (ExprParser::ReadWriteMethodType<DoubleWithProperties>::vfunc_41 (DoubleWithProperties::getValue)).
namespace lift_0046EA50 {
extern void ext_004D3B90();
extern void ext_0046C3C0();
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk forwarding to MSVCR80!_CxxThrowException.)
extern void ext_006A6DD2();
extern int mem_009DEC1C;

// @name ReadWriteMethodType_ImageExporter_EndFrame_vfunc_41
// @class ExprParser::ReadWriteMethodType<ImageExporter, int, {public: int __thiscall ImageExporter::getEndFrame(void) const, 0}, int, {public: void __thiscall ImageExporter::setEndFrame(int), 0}>
// @summary Reads an int from the context via its virtual getter (slot 2 of the sub-object vtable) and forwards it to the bound target's setter; throws if the target is null.
// @field ValuePtrType +0x00 void* field_0x00
// @field ExprParser::ReadWriteMethodType +0x04 void* field_0x04
struct ValuePtrTypeLite {
    void* field_0x00; // target object (set via ecx in ReadWriteMethodType setter)
};

// Callee signatures (both thiscall in the original binary; modeled as plain C functions here).
using SetterFn = void (*)(void* self, int value);
using VirtualGetFn = int (*)(void* self, void* ctx);

void fn_004D5410(ValuePtrTypeLite* self, void* ctx) {
    void* target = self->field_0x00;
    if (target != nullptr) {
        // ctx+0x04 is the sub-object whose vtable slot 2 produces the value.
        void** subObj = reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(ctx) + 0x04);
        void* sub = *subObj;
        void** vtbl = *reinterpret_cast<void***>(sub);
        auto getter = reinterpret_cast<VirtualGetFn>(vtbl[2]);
        int value = getter(sub, ctx);
        reinterpret_cast<SetterFn>(ext_004D3B90)(target, value);
        return;
    }
    // Null target: construct exception via helper and throw through the CRT thunk.
    reinterpret_cast<void (*)(void*)>(ext_0046C3C0)(&self);
    (void)mem_009DEC1C;
    ext_006A6DD2();
}
} // namespace lift_0046EA50
} // namespace lift_004D5410

// [0x004D5460] ExprParser::ReadWriteMethodType<NMData::RigEventData, bool, {public: bool __thiscall NMData::RigEventData::isGravityEnabled(void) const, 0}, bool, {public: void __thiscall NMData::RigEventData::setGravityEnabled(bool), 0}>::vfunc_41 (68 bytes)
namespace lift_004D5460 {
// @name ExprParser::ReadWriteMethodType<NMData::RigEventData, bool, {public: bool __thiscall NMData::RigEventData::isGravityEnabled(void) const, 0}, bool, {public: void __thiscall NMData::RigEventData::setGravityEnabled(bool), 0}>::vfunc_41
// @class ExprParser::ReadWriteMethodType<NMData::RigEventData, bool, {public: bool __thiscall NMData::RigEventData::isGravityEnabled(void) const, 0}, bool, {public: void __thiscall NMData::RigEventData::setGravityEnabled(bool), 0}>
// @summary Auto-lifted identical-shape clone of 0x0046E450 (ExprParser::ReadWriteMethodType<DoubleWithProperties>::vfunc_41 (DoubleWithProperties::getValue)).
namespace lift_0046E450 {
extern void ext_004D3BD0();
extern void ext_0046C3C0();
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk forwarding to MSVCR80!_CxxThrowException.)
extern void ext_006A6DD2();
extern int mem_009DEC1C;

// @name ReadWriteMethodType<ImageExporter,bool,getUseRenderer,bool,setUseRenderer>::vfunc_41
// @class ExprParser::ReadWriteMethodType<ImageExporter, bool, {public: bool __thiscall ImageExporter::getUseRenderer(void) const, 0}, bool, {public: void __thiscall ImageExporter::setUseRenderer(bool), 0}>
// @summary Forwards arg2's sub-object result into the target held by arg1; throws if arg1's target is null.
// @field ExprParser::ReadWriteMethodType<ImageExporter, bool, {public: bool __thiscall ImageExporter::getUseRenderer(void) const, 0}, bool, {public: void __thiscall ImageExporter::setUseRenderer(bool), 0}> +0x00 void* field_0x00
// @field ExprParser::ReadWriteMethodType<ImageExporter, bool, {public: bool __thiscall ImageExporter::getUseRenderer(void) const, 0}, bool, {public: void __thiscall ImageExporter::setUseRenderer(bool), 0}> +0x04 void* field_0x04
void fn_004D5460(void* arg1, void* arg2) {
    // arg1 is a pointer to a slot whose value is the target object pointer.
    void* target = *static_cast<void**>(arg1);
    if (target == nullptr) {
        // Null target: construct the exception in place at &arg1 and throw it.
        using InitFn = void (*)(void*);
        reinterpret_cast<InitFn>(&ext_0046C3C0)(&arg1);
        using ThrowFn = void (*)(void*, void*);
        reinterpret_cast<ThrowFn>(&ext_006A6DD2)(&arg1, &mem_009DEC1C);
        return;
    }

    // sub = arg2->field_0x04; r = sub->vtable[0x0c](sub, arg2)
    void* sub = lift_field<void*>(arg2, 0x04);
    void* vt = lift_field<void*>(sub, 0x00);
    using VFn = uint32_t (*)(void* self, void* arg);
    VFn vcall = reinterpret_cast<VFn>(lift_field<void*>(vt, 0x0c));
    uint32_t r = vcall(sub, arg2);

    // sub_0046C2D0(target, r)
    using SetFn = void (*)(void* self, uint32_t value);
    reinterpret_cast<SetFn>(&ext_004D3BD0)(target, r);
}
} // namespace lift_0046E450
} // namespace lift_004D5460

// [0x004D54B0] ExprParser::ReadWriteMethodType<NMData::RigEventData, bool, {public: bool __thiscall NMData::RigEventData::isFrictionEnabled(void) const, 0}, bool, {public: void __thiscall NMData::RigEventData::setFrictionEnabled(bool), 0}>::vfunc_41 (68 bytes)
namespace lift_004D54B0 {
// @name ExprParser::ReadWriteMethodType<NMData::RigEventData, bool, {public: bool __thiscall NMData::RigEventData::isFrictionEnabled(void) const, 0}, bool, {public: void __thiscall NMData::RigEventData::setFrictionEnabled(bool), 0}>::vfunc_41
// @class ExprParser::ReadWriteMethodType<NMData::RigEventData, bool, {public: bool __thiscall NMData::RigEventData::isFrictionEnabled(void) const, 0}, bool, {public: void __thiscall NMData::RigEventData::setFrictionEnabled(bool), 0}>
// @summary Auto-lifted identical-shape clone of 0x0046E450 (ExprParser::ReadWriteMethodType<DoubleWithProperties>::vfunc_41 (DoubleWithProperties::getValue)).
namespace lift_0046E450 {
extern void ext_004D3BF0();
extern void ext_0046C3C0();
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk forwarding to MSVCR80!_CxxThrowException.)
extern void ext_006A6DD2();
extern int mem_009DEC1C;

// @name ReadWriteMethodType<ImageExporter,bool,getUseRenderer,bool,setUseRenderer>::vfunc_41
// @class ExprParser::ReadWriteMethodType<ImageExporter, bool, {public: bool __thiscall ImageExporter::getUseRenderer(void) const, 0}, bool, {public: void __thiscall ImageExporter::setUseRenderer(bool), 0}>
// @summary Forwards arg2's sub-object result into the target held by arg1; throws if arg1's target is null.
// @field ExprParser::ReadWriteMethodType<ImageExporter, bool, {public: bool __thiscall ImageExporter::getUseRenderer(void) const, 0}, bool, {public: void __thiscall ImageExporter::setUseRenderer(bool), 0}> +0x00 void* field_0x00
// @field ExprParser::ReadWriteMethodType<ImageExporter, bool, {public: bool __thiscall ImageExporter::getUseRenderer(void) const, 0}, bool, {public: void __thiscall ImageExporter::setUseRenderer(bool), 0}> +0x04 void* field_0x04
void fn_004D54B0(void* arg1, void* arg2) {
    // arg1 is a pointer to a slot whose value is the target object pointer.
    void* target = *static_cast<void**>(arg1);
    if (target == nullptr) {
        // Null target: construct the exception in place at &arg1 and throw it.
        using InitFn = void (*)(void*);
        reinterpret_cast<InitFn>(&ext_0046C3C0)(&arg1);
        using ThrowFn = void (*)(void*, void*);
        reinterpret_cast<ThrowFn>(&ext_006A6DD2)(&arg1, &mem_009DEC1C);
        return;
    }

    // sub = arg2->field_0x04; r = sub->vtable[0x0c](sub, arg2)
    void* sub = lift_field<void*>(arg2, 0x04);
    void* vt = lift_field<void*>(sub, 0x00);
    using VFn = uint32_t (*)(void* self, void* arg);
    VFn vcall = reinterpret_cast<VFn>(lift_field<void*>(vt, 0x0c));
    uint32_t r = vcall(sub, arg2);

    // sub_0046C2D0(target, r)
    using SetFn = void (*)(void* self, uint32_t value);
    reinterpret_cast<SetFn>(&ext_004D3BF0)(target, r);
}
} // namespace lift_0046E450
} // namespace lift_004D54B0

// [0x004D6C80] ExprParser::ReadWriteMethodType<NMData::RigEventData, int, {private: int __thiscall NMData::RigEventData::getSaveTweakToStockCharacterDummy(void) const, 0}, int, {private: void __thiscall NMData::RigEventData::saveTweakToStockCharacter(int), 0}>::vfunc_41 (68 bytes)
namespace lift_004D6C80 {
// @name ExprParser::ReadWriteMethodType<NMData::RigEventData, int, {private: int __thiscall NMData::RigEventData::getSaveTweakToStockCharacterDummy(void) const, 0}, int, {private: void __thiscall NMData::RigEventData::saveTweakToStockCharacter(int), 0}>::vfunc_41
// @class ExprParser::ReadWriteMethodType<NMData::RigEventData, int, {private: int __thiscall NMData::RigEventData::getSaveTweakToStockCharacterDummy(void) const, 0}, int, {private: void __thiscall NMData::RigEventData::saveTweakToStockCharacter(int), 0}>
// @summary Auto-lifted identical-shape clone of 0x0046EA50 (ExprParser::ReadWriteMethodType<DoubleWithProperties>::vfunc_41 (DoubleWithProperties::getValue)).
namespace lift_0046EA50 {
extern void ext_004D4650();
extern void ext_0046C3C0();
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk forwarding to MSVCR80!_CxxThrowException.)
extern void ext_006A6DD2();
extern int mem_009DEC1C;

// @name ReadWriteMethodType_ImageExporter_EndFrame_vfunc_41
// @class ExprParser::ReadWriteMethodType<ImageExporter, int, {public: int __thiscall ImageExporter::getEndFrame(void) const, 0}, int, {public: void __thiscall ImageExporter::setEndFrame(int), 0}>
// @summary Reads an int from the context via its virtual getter (slot 2 of the sub-object vtable) and forwards it to the bound target's setter; throws if the target is null.
// @field ValuePtrType +0x00 void* field_0x00
// @field ExprParser::ReadWriteMethodType +0x04 void* field_0x04
struct ValuePtrTypeLite {
    void* field_0x00; // target object (set via ecx in ReadWriteMethodType setter)
};

// Callee signatures (both thiscall in the original binary; modeled as plain C functions here).
using SetterFn = void (*)(void* self, int value);
using VirtualGetFn = int (*)(void* self, void* ctx);

void fn_004D6C80(ValuePtrTypeLite* self, void* ctx) {
    void* target = self->field_0x00;
    if (target != nullptr) {
        // ctx+0x04 is the sub-object whose vtable slot 2 produces the value.
        void** subObj = reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(ctx) + 0x04);
        void* sub = *subObj;
        void** vtbl = *reinterpret_cast<void***>(sub);
        auto getter = reinterpret_cast<VirtualGetFn>(vtbl[2]);
        int value = getter(sub, ctx);
        reinterpret_cast<SetterFn>(ext_004D4650)(target, value);
        return;
    }
    // Null target: construct exception via helper and throw through the CRT thunk.
    reinterpret_cast<void (*)(void*)>(ext_0046C3C0)(&self);
    (void)mem_009DEC1C;
    ext_006A6DD2();
}
} // namespace lift_0046EA50
} // namespace lift_004D6C80

// [0x004D9DA0] ExprParser::ReadWriteMethodType<NMData::RigEventData, bool, {public: bool __thiscall NMData::RigEventData::isVisible(void) const, 0}, bool, {public: void __thiscall NMData::RigEventData::setIsVisible(bool), 0}>::vfunc_41 (68 bytes)
namespace lift_004D9DA0 {
// @name ExprParser::ReadWriteMethodType<NMData::RigEventData, bool, {public: bool __thiscall NMData::RigEventData::isVisible(void) const, 0}, bool, {public: void __thiscall NMData::RigEventData::setIsVisible(bool), 0}>::vfunc_41
// @class ExprParser::ReadWriteMethodType<NMData::RigEventData, bool, {public: bool __thiscall NMData::RigEventData::isVisible(void) const, 0}, bool, {public: void __thiscall NMData::RigEventData::setIsVisible(bool), 0}>
// @summary Auto-lifted identical-shape clone of 0x0046E450 (ExprParser::ReadWriteMethodType<DoubleWithProperties>::vfunc_41 (DoubleWithProperties::getValue)).
namespace lift_0046E450 {
extern void ext_004D9CE0();
extern void ext_0046C3C0();
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk forwarding to MSVCR80!_CxxThrowException.)
extern void ext_006A6DD2();
extern int mem_009DEC1C;

// @name ReadWriteMethodType<ImageExporter,bool,getUseRenderer,bool,setUseRenderer>::vfunc_41
// @class ExprParser::ReadWriteMethodType<ImageExporter, bool, {public: bool __thiscall ImageExporter::getUseRenderer(void) const, 0}, bool, {public: void __thiscall ImageExporter::setUseRenderer(bool), 0}>
// @summary Forwards arg2's sub-object result into the target held by arg1; throws if arg1's target is null.
// @field ExprParser::ReadWriteMethodType<ImageExporter, bool, {public: bool __thiscall ImageExporter::getUseRenderer(void) const, 0}, bool, {public: void __thiscall ImageExporter::setUseRenderer(bool), 0}> +0x00 void* field_0x00
// @field ExprParser::ReadWriteMethodType<ImageExporter, bool, {public: bool __thiscall ImageExporter::getUseRenderer(void) const, 0}, bool, {public: void __thiscall ImageExporter::setUseRenderer(bool), 0}> +0x04 void* field_0x04
void fn_004D9DA0(void* arg1, void* arg2) {
    // arg1 is a pointer to a slot whose value is the target object pointer.
    void* target = *static_cast<void**>(arg1);
    if (target == nullptr) {
        // Null target: construct the exception in place at &arg1 and throw it.
        using InitFn = void (*)(void*);
        reinterpret_cast<InitFn>(&ext_0046C3C0)(&arg1);
        using ThrowFn = void (*)(void*, void*);
        reinterpret_cast<ThrowFn>(&ext_006A6DD2)(&arg1, &mem_009DEC1C);
        return;
    }

    // sub = arg2->field_0x04; r = sub->vtable[0x0c](sub, arg2)
    void* sub = lift_field<void*>(arg2, 0x04);
    void* vt = lift_field<void*>(sub, 0x00);
    using VFn = uint32_t (*)(void* self, void* arg);
    VFn vcall = reinterpret_cast<VFn>(lift_field<void*>(vt, 0x0c));
    uint32_t r = vcall(sub, arg2);

    // sub_0046C2D0(target, r)
    using SetFn = void (*)(void* self, uint32_t value);
    reinterpret_cast<SetFn>(&ext_004D9CE0)(target, r);
}
} // namespace lift_0046E450
} // namespace lift_004D9DA0

// [0x004DE7D0] ExprParser::ReadWriteMethodType<NMData::AnimationEventData, bool, {public: bool __thiscall NMData::AnimationEventData::isPassiveAnimationEnabled(void) const, 0}, bool, {public: void __thiscall NMData::AnimationEventData::setIsPassiveAnimationEnabled(bool), 0}>::vfunc_41 (68 bytes)
namespace lift_004DE7D0 {
// @name ExprParser::ReadWriteMethodType<NMData::AnimationEventData, bool, {public: bool __thiscall NMData::AnimationEventData::isPassiveAnimationEnabled(void) const, 0}, bool, {public: void __thiscall NMData::AnimationEventData::setIsPassiveAnimationEnabled(bool), 0}>::vfunc_41
// @class ExprParser::ReadWriteMethodType<NMData::AnimationEventData, bool, {public: bool __thiscall NMData::AnimationEventData::isPassiveAnimationEnabled(void) const, 0}, bool, {public: void __thiscall NMData::AnimationEventData::setIsPassiveAnimationEnabled(bool), 0}>
// @summary Auto-lifted identical-shape clone of 0x0046E450 (ExprParser::ReadWriteMethodType<DoubleWithProperties>::vfunc_41 (DoubleWithProperties::getValue)).
namespace lift_0046E450 {
extern void ext_004DDEB0();
extern void ext_0046C3C0();
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk forwarding to MSVCR80!_CxxThrowException.)
extern void ext_006A6DD2();
extern int mem_009DEC1C;

// @name ReadWriteMethodType<ImageExporter,bool,getUseRenderer,bool,setUseRenderer>::vfunc_41
// @class ExprParser::ReadWriteMethodType<ImageExporter, bool, {public: bool __thiscall ImageExporter::getUseRenderer(void) const, 0}, bool, {public: void __thiscall ImageExporter::setUseRenderer(bool), 0}>
// @summary Forwards arg2's sub-object result into the target held by arg1; throws if arg1's target is null.
// @field ExprParser::ReadWriteMethodType<ImageExporter, bool, {public: bool __thiscall ImageExporter::getUseRenderer(void) const, 0}, bool, {public: void __thiscall ImageExporter::setUseRenderer(bool), 0}> +0x00 void* field_0x00
// @field ExprParser::ReadWriteMethodType<ImageExporter, bool, {public: bool __thiscall ImageExporter::getUseRenderer(void) const, 0}, bool, {public: void __thiscall ImageExporter::setUseRenderer(bool), 0}> +0x04 void* field_0x04
void fn_004DE7D0(void* arg1, void* arg2) {
    // arg1 is a pointer to a slot whose value is the target object pointer.
    void* target = *static_cast<void**>(arg1);
    if (target == nullptr) {
        // Null target: construct the exception in place at &arg1 and throw it.
        using InitFn = void (*)(void*);
        reinterpret_cast<InitFn>(&ext_0046C3C0)(&arg1);
        using ThrowFn = void (*)(void*, void*);
        reinterpret_cast<ThrowFn>(&ext_006A6DD2)(&arg1, &mem_009DEC1C);
        return;
    }

    // sub = arg2->field_0x04; r = sub->vtable[0x0c](sub, arg2)
    void* sub = lift_field<void*>(arg2, 0x04);
    void* vt = lift_field<void*>(sub, 0x00);
    using VFn = uint32_t (*)(void* self, void* arg);
    VFn vcall = reinterpret_cast<VFn>(lift_field<void*>(vt, 0x0c));
    uint32_t r = vcall(sub, arg2);

    // sub_0046C2D0(target, r)
    using SetFn = void (*)(void* self, uint32_t value);
    reinterpret_cast<SetFn>(&ext_004DDEB0)(target, r);
}
} // namespace lift_0046E450
} // namespace lift_004DE7D0

// [0x004DE840] ExprParser::ReadWriteMethodType<NMData::AnimationEventData, bool, {public: bool __thiscall NMData::AnimationEventData::isActiveAnimationEnabled(void) const, 0}, bool, {public: void __thiscall NMData::AnimationEventData::setIsActiveAnimationEnabled(bool), 0}>::vfunc_41 (68 bytes)
namespace lift_004DE840 {
// @name ExprParser::ReadWriteMethodType<NMData::AnimationEventData, bool, {public: bool __thiscall NMData::AnimationEventData::isActiveAnimationEnabled(void) const, 0}, bool, {public: void __thiscall NMData::AnimationEventData::setIsActiveAnimationEnabled(bool), 0}>::vfunc_41
// @class ExprParser::ReadWriteMethodType<NMData::AnimationEventData, bool, {public: bool __thiscall NMData::AnimationEventData::isActiveAnimationEnabled(void) const, 0}, bool, {public: void __thiscall NMData::AnimationEventData::setIsActiveAnimationEnabled(bool), 0}>
// @summary Auto-lifted identical-shape clone of 0x0046E450 (ExprParser::ReadWriteMethodType<DoubleWithProperties>::vfunc_41 (DoubleWithProperties::getValue)).
namespace lift_0046E450 {
extern void ext_004DDEA0();
extern void ext_0046C3C0();
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk forwarding to MSVCR80!_CxxThrowException.)
extern void ext_006A6DD2();
extern int mem_009DEC1C;

// @name ReadWriteMethodType<ImageExporter,bool,getUseRenderer,bool,setUseRenderer>::vfunc_41
// @class ExprParser::ReadWriteMethodType<ImageExporter, bool, {public: bool __thiscall ImageExporter::getUseRenderer(void) const, 0}, bool, {public: void __thiscall ImageExporter::setUseRenderer(bool), 0}>
// @summary Forwards arg2's sub-object result into the target held by arg1; throws if arg1's target is null.
// @field ExprParser::ReadWriteMethodType<ImageExporter, bool, {public: bool __thiscall ImageExporter::getUseRenderer(void) const, 0}, bool, {public: void __thiscall ImageExporter::setUseRenderer(bool), 0}> +0x00 void* field_0x00
// @field ExprParser::ReadWriteMethodType<ImageExporter, bool, {public: bool __thiscall ImageExporter::getUseRenderer(void) const, 0}, bool, {public: void __thiscall ImageExporter::setUseRenderer(bool), 0}> +0x04 void* field_0x04
void fn_004DE840(void* arg1, void* arg2) {
    // arg1 is a pointer to a slot whose value is the target object pointer.
    void* target = *static_cast<void**>(arg1);
    if (target == nullptr) {
        // Null target: construct the exception in place at &arg1 and throw it.
        using InitFn = void (*)(void*);
        reinterpret_cast<InitFn>(&ext_0046C3C0)(&arg1);
        using ThrowFn = void (*)(void*, void*);
        reinterpret_cast<ThrowFn>(&ext_006A6DD2)(&arg1, &mem_009DEC1C);
        return;
    }

    // sub = arg2->field_0x04; r = sub->vtable[0x0c](sub, arg2)
    void* sub = lift_field<void*>(arg2, 0x04);
    void* vt = lift_field<void*>(sub, 0x00);
    using VFn = uint32_t (*)(void* self, void* arg);
    VFn vcall = reinterpret_cast<VFn>(lift_field<void*>(vt, 0x0c));
    uint32_t r = vcall(sub, arg2);

    // sub_0046C2D0(target, r)
    using SetFn = void (*)(void* self, uint32_t value);
    reinterpret_cast<SetFn>(&ext_004DDEA0)(target, r);
}
} // namespace lift_0046E450
} // namespace lift_004DE840

// [0x004DE930] ExprParser::ReadWriteMethodType<NMData::AnimationEventData, int, {public: int __thiscall NMData::AnimationEventData::getCopyFromReferenceObjectDummy(void) const, 0}, int, {public: void __thiscall NMData::AnimationEventData::copyFromReferenceObject(int), 0}>::vfunc_41 (68 bytes)
namespace lift_004DE930 {
// @name ExprParser::ReadWriteMethodType<NMData::AnimationEventData, int, {public: int __thiscall NMData::AnimationEventData::getCopyFromReferenceObjectDummy(void) const, 0}, int, {public: void __thiscall NMData::AnimationEventData::copyFromReferenceObject(int), 0}>::vfunc_41
// @class ExprParser::ReadWriteMethodType<NMData::AnimationEventData, int, {public: int __thiscall NMData::AnimationEventData::getCopyFromReferenceObjectDummy(void) const, 0}, int, {public: void __thiscall NMData::AnimationEventData::copyFromReferenceObject(int), 0}>
// @summary Auto-lifted identical-shape clone of 0x0046EA50 (ExprParser::ReadWriteMethodType<DoubleWithProperties>::vfunc_41 (DoubleWithProperties::getValue)).
namespace lift_0046EA50 {
extern void ext_00402040();
extern void ext_0046C3C0();
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk forwarding to MSVCR80!_CxxThrowException.)
extern void ext_006A6DD2();
extern int mem_009DEC1C;

// @name ReadWriteMethodType_ImageExporter_EndFrame_vfunc_41
// @class ExprParser::ReadWriteMethodType<ImageExporter, int, {public: int __thiscall ImageExporter::getEndFrame(void) const, 0}, int, {public: void __thiscall ImageExporter::setEndFrame(int), 0}>
// @summary Reads an int from the context via its virtual getter (slot 2 of the sub-object vtable) and forwards it to the bound target's setter; throws if the target is null.
// @field ValuePtrType +0x00 void* field_0x00
// @field ExprParser::ReadWriteMethodType +0x04 void* field_0x04
struct ValuePtrTypeLite {
    void* field_0x00; // target object (set via ecx in ReadWriteMethodType setter)
};

// Callee signatures (both thiscall in the original binary; modeled as plain C functions here).
using SetterFn = void (*)(void* self, int value);
using VirtualGetFn = int (*)(void* self, void* ctx);

void fn_004DE930(ValuePtrTypeLite* self, void* ctx) {
    void* target = self->field_0x00;
    if (target != nullptr) {
        // ctx+0x04 is the sub-object whose vtable slot 2 produces the value.
        void** subObj = reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(ctx) + 0x04);
        void* sub = *subObj;
        void** vtbl = *reinterpret_cast<void***>(sub);
        auto getter = reinterpret_cast<VirtualGetFn>(vtbl[2]);
        int value = getter(sub, ctx);
        reinterpret_cast<SetterFn>(ext_00402040)(target, value);
        return;
    }
    // Null target: construct exception via helper and throw through the CRT thunk.
    reinterpret_cast<void (*)(void*)>(ext_0046C3C0)(&self);
    (void)mem_009DEC1C;
    ext_006A6DD2();
}
} // namespace lift_0046EA50
} // namespace lift_004DE930

// [0x004E25D0] ExprParser::ReadWriteMethodType<NMData::AnimationEventData, int, {public: int __thiscall NMData::AnimationEventData::getMotionStartFrameNumber(void) const, 0}, int, {public: void __thiscall NMData::AnimationEventData::setMotionStartFrameNumber(int), 0}>::vfunc_41 (68 bytes)
namespace lift_004E25D0 {
// @name ExprParser::ReadWriteMethodType<NMData::AnimationEventData, int, {public: int __thiscall NMData::AnimationEventData::getMotionStartFrameNumber(void) const, 0}, int, {public: void __thiscall NMData::AnimationEventData::setMotionStartFrameNumber(int), 0}>::vfunc_41
// @class ExprParser::ReadWriteMethodType<NMData::AnimationEventData, int, {public: int __thiscall NMData::AnimationEventData::getMotionStartFrameNumber(void) const, 0}, int, {public: void __thiscall NMData::AnimationEventData::setMotionStartFrameNumber(int), 0}>
// @summary Auto-lifted identical-shape clone of 0x0046EA50 (ExprParser::ReadWriteMethodType<DoubleWithProperties>::vfunc_41 (DoubleWithProperties::getValue)).
namespace lift_0046EA50 {
extern void ext_004E1D10();
extern void ext_0046C3C0();
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk forwarding to MSVCR80!_CxxThrowException.)
extern void ext_006A6DD2();
extern int mem_009DEC1C;

// @name ReadWriteMethodType_ImageExporter_EndFrame_vfunc_41
// @class ExprParser::ReadWriteMethodType<ImageExporter, int, {public: int __thiscall ImageExporter::getEndFrame(void) const, 0}, int, {public: void __thiscall ImageExporter::setEndFrame(int), 0}>
// @summary Reads an int from the context via its virtual getter (slot 2 of the sub-object vtable) and forwards it to the bound target's setter; throws if the target is null.
// @field ValuePtrType +0x00 void* field_0x00
// @field ExprParser::ReadWriteMethodType +0x04 void* field_0x04
struct ValuePtrTypeLite {
    void* field_0x00; // target object (set via ecx in ReadWriteMethodType setter)
};

// Callee signatures (both thiscall in the original binary; modeled as plain C functions here).
using SetterFn = void (*)(void* self, int value);
using VirtualGetFn = int (*)(void* self, void* ctx);

void fn_004E25D0(ValuePtrTypeLite* self, void* ctx) {
    void* target = self->field_0x00;
    if (target != nullptr) {
        // ctx+0x04 is the sub-object whose vtable slot 2 produces the value.
        void** subObj = reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(ctx) + 0x04);
        void* sub = *subObj;
        void** vtbl = *reinterpret_cast<void***>(sub);
        auto getter = reinterpret_cast<VirtualGetFn>(vtbl[2]);
        int value = getter(sub, ctx);
        reinterpret_cast<SetterFn>(ext_004E1D10)(target, value);
        return;
    }
    // Null target: construct exception via helper and throw through the CRT thunk.
    reinterpret_cast<void (*)(void*)>(ext_0046C3C0)(&self);
    (void)mem_009DEC1C;
    ext_006A6DD2();
}
} // namespace lift_0046EA50
} // namespace lift_004E25D0

// [0x004E2620] ExprParser::ReadWriteMethodType<NMData::AnimationEventData, int, {public: int __thiscall NMData::AnimationEventData::getMotionEndFrameNumber(void) const, 0}, int, {public: void __thiscall NMData::AnimationEventData::setMotionEndFrameNumber(int), 0}>::vfunc_41 (68 bytes)
namespace lift_004E2620 {
// @name ExprParser::ReadWriteMethodType<NMData::AnimationEventData, int, {public: int __thiscall NMData::AnimationEventData::getMotionEndFrameNumber(void) const, 0}, int, {public: void __thiscall NMData::AnimationEventData::setMotionEndFrameNumber(int), 0}>::vfunc_41
// @class ExprParser::ReadWriteMethodType<NMData::AnimationEventData, int, {public: int __thiscall NMData::AnimationEventData::getMotionEndFrameNumber(void) const, 0}, int, {public: void __thiscall NMData::AnimationEventData::setMotionEndFrameNumber(int), 0}>
// @summary Auto-lifted identical-shape clone of 0x0046EA50 (ExprParser::ReadWriteMethodType<DoubleWithProperties>::vfunc_41 (DoubleWithProperties::getValue)).
namespace lift_0046EA50 {
extern void ext_004E1D40();
extern void ext_0046C3C0();
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk forwarding to MSVCR80!_CxxThrowException.)
extern void ext_006A6DD2();
extern int mem_009DEC1C;

// @name ReadWriteMethodType_ImageExporter_EndFrame_vfunc_41
// @class ExprParser::ReadWriteMethodType<ImageExporter, int, {public: int __thiscall ImageExporter::getEndFrame(void) const, 0}, int, {public: void __thiscall ImageExporter::setEndFrame(int), 0}>
// @summary Reads an int from the context via its virtual getter (slot 2 of the sub-object vtable) and forwards it to the bound target's setter; throws if the target is null.
// @field ValuePtrType +0x00 void* field_0x00
// @field ExprParser::ReadWriteMethodType +0x04 void* field_0x04
struct ValuePtrTypeLite {
    void* field_0x00; // target object (set via ecx in ReadWriteMethodType setter)
};

// Callee signatures (both thiscall in the original binary; modeled as plain C functions here).
using SetterFn = void (*)(void* self, int value);
using VirtualGetFn = int (*)(void* self, void* ctx);

void fn_004E2620(ValuePtrTypeLite* self, void* ctx) {
    void* target = self->field_0x00;
    if (target != nullptr) {
        // ctx+0x04 is the sub-object whose vtable slot 2 produces the value.
        void** subObj = reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(ctx) + 0x04);
        void* sub = *subObj;
        void** vtbl = *reinterpret_cast<void***>(sub);
        auto getter = reinterpret_cast<VirtualGetFn>(vtbl[2]);
        int value = getter(sub, ctx);
        reinterpret_cast<SetterFn>(ext_004E1D40)(target, value);
        return;
    }
    // Null target: construct exception via helper and throw through the CRT thunk.
    reinterpret_cast<void (*)(void*)>(ext_0046C3C0)(&self);
    (void)mem_009DEC1C;
    ext_006A6DD2();
}
} // namespace lift_0046EA50
} // namespace lift_004E2620

// [0x004E2670] ExprParser::ReadWriteMethodType<NMData::AnimationEventData, bool, {public: bool __thiscall NMData::AnimationEventData::getAnimationVisibility(void) const, 0}, bool, {public: void __thiscall NMData::AnimationEventData::setAnimationVisibility(bool), 0}>::vfunc_41 (68 bytes)
namespace lift_004E2670 {
// @name ExprParser::ReadWriteMethodType<NMData::AnimationEventData, bool, {public: bool __thiscall NMData::AnimationEventData::getAnimationVisibility(void) const, 0}, bool, {public: void __thiscall NMData::AnimationEventData::setAnimationVisibility(bool), 0}>::vfunc_41
// @class ExprParser::ReadWriteMethodType<NMData::AnimationEventData, bool, {public: bool __thiscall NMData::AnimationEventData::getAnimationVisibility(void) const, 0}, bool, {public: void __thiscall NMData::AnimationEventData::setAnimationVisibility(bool), 0}>
// @summary Auto-lifted identical-shape clone of 0x0046E450 (ExprParser::ReadWriteMethodType<DoubleWithProperties>::vfunc_41 (DoubleWithProperties::getValue)).
namespace lift_0046E450 {
extern void ext_004E1DC0();
extern void ext_0046C3C0();
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk forwarding to MSVCR80!_CxxThrowException.)
extern void ext_006A6DD2();
extern int mem_009DEC1C;

// @name ReadWriteMethodType<ImageExporter,bool,getUseRenderer,bool,setUseRenderer>::vfunc_41
// @class ExprParser::ReadWriteMethodType<ImageExporter, bool, {public: bool __thiscall ImageExporter::getUseRenderer(void) const, 0}, bool, {public: void __thiscall ImageExporter::setUseRenderer(bool), 0}>
// @summary Forwards arg2's sub-object result into the target held by arg1; throws if arg1's target is null.
// @field ExprParser::ReadWriteMethodType<ImageExporter, bool, {public: bool __thiscall ImageExporter::getUseRenderer(void) const, 0}, bool, {public: void __thiscall ImageExporter::setUseRenderer(bool), 0}> +0x00 void* field_0x00
// @field ExprParser::ReadWriteMethodType<ImageExporter, bool, {public: bool __thiscall ImageExporter::getUseRenderer(void) const, 0}, bool, {public: void __thiscall ImageExporter::setUseRenderer(bool), 0}> +0x04 void* field_0x04
void fn_004E2670(void* arg1, void* arg2) {
    // arg1 is a pointer to a slot whose value is the target object pointer.
    void* target = *static_cast<void**>(arg1);
    if (target == nullptr) {
        // Null target: construct the exception in place at &arg1 and throw it.
        using InitFn = void (*)(void*);
        reinterpret_cast<InitFn>(&ext_0046C3C0)(&arg1);
        using ThrowFn = void (*)(void*, void*);
        reinterpret_cast<ThrowFn>(&ext_006A6DD2)(&arg1, &mem_009DEC1C);
        return;
    }

    // sub = arg2->field_0x04; r = sub->vtable[0x0c](sub, arg2)
    void* sub = lift_field<void*>(arg2, 0x04);
    void* vt = lift_field<void*>(sub, 0x00);
    using VFn = uint32_t (*)(void* self, void* arg);
    VFn vcall = reinterpret_cast<VFn>(lift_field<void*>(vt, 0x0c));
    uint32_t r = vcall(sub, arg2);

    // sub_0046C2D0(target, r)
    using SetFn = void (*)(void* self, uint32_t value);
    reinterpret_cast<SetFn>(&ext_004E1DC0)(target, r);
}
} // namespace lift_0046E450
} // namespace lift_004E2670

// [0x004ECCA0] ExprParser::ReadWriteMethodType<SelectionVariable, int, {public: int __thiscall SelectionVariable::getNumRequiredObjects(void) const, 0}, int, {public: void __thiscall SelectionVariable::setNumRequiredObjects(int), 0}>::vfunc_41 (68 bytes)
namespace lift_004ECCA0 {
// @name ExprParser::ReadWriteMethodType<SelectionVariable, int, {public: int __thiscall SelectionVariable::getNumRequiredObjects(void) const, 0}, int, {public: void __thiscall SelectionVariable::setNumRequiredObjects(int), 0}>::vfunc_41
// @class ExprParser::ReadWriteMethodType<SelectionVariable, int, {public: int __thiscall SelectionVariable::getNumRequiredObjects(void) const, 0}, int, {public: void __thiscall SelectionVariable::setNumRequiredObjects(int), 0}>
// @summary Auto-lifted identical-shape clone of 0x0046EA50 (ExprParser::ReadWriteMethodType<DoubleWithProperties>::vfunc_41 (DoubleWithProperties::getValue)).
namespace lift_0046EA50 {
extern void ext_004D3930();
extern void ext_0046C3C0();
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk forwarding to MSVCR80!_CxxThrowException.)
extern void ext_006A6DD2();
extern int mem_009DEC1C;

// @name ReadWriteMethodType_ImageExporter_EndFrame_vfunc_41
// @class ExprParser::ReadWriteMethodType<ImageExporter, int, {public: int __thiscall ImageExporter::getEndFrame(void) const, 0}, int, {public: void __thiscall ImageExporter::setEndFrame(int), 0}>
// @summary Reads an int from the context via its virtual getter (slot 2 of the sub-object vtable) and forwards it to the bound target's setter; throws if the target is null.
// @field ValuePtrType +0x00 void* field_0x00
// @field ExprParser::ReadWriteMethodType +0x04 void* field_0x04
struct ValuePtrTypeLite {
    void* field_0x00; // target object (set via ecx in ReadWriteMethodType setter)
};

// Callee signatures (both thiscall in the original binary; modeled as plain C functions here).
using SetterFn = void (*)(void* self, int value);
using VirtualGetFn = int (*)(void* self, void* ctx);

void fn_004ECCA0(ValuePtrTypeLite* self, void* ctx) {
    void* target = self->field_0x00;
    if (target != nullptr) {
        // ctx+0x04 is the sub-object whose vtable slot 2 produces the value.
        void** subObj = reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(ctx) + 0x04);
        void* sub = *subObj;
        void** vtbl = *reinterpret_cast<void***>(sub);
        auto getter = reinterpret_cast<VirtualGetFn>(vtbl[2]);
        int value = getter(sub, ctx);
        reinterpret_cast<SetterFn>(ext_004D3930)(target, value);
        return;
    }
    // Null target: construct exception via helper and throw through the CRT thunk.
    reinterpret_cast<void (*)(void*)>(ext_0046C3C0)(&self);
    (void)mem_009DEC1C;
    ext_006A6DD2();
}
} // namespace lift_0046EA50
} // namespace lift_004ECCA0

// [0x00505A30] ExprParser::ReadWriteMethodType<Interpreter, int, &public: int __thiscall Interpreter::bogus(void) const, int, &public: void __thiscall Interpreter::printThroughProperties(int)>::vfunc_41 (68 bytes)
namespace lift_00505A30 {
// @name ExprParser::ReadWriteMethodType<Interpreter, int, &public: int __thiscall Interpreter::bogus(void) const, int, &public: void __thiscall Interpreter::printThroughProperties(int)>::vfunc_41
// @class ExprParser::ReadWriteMethodType<Interpreter, int, &public: int __thiscall Interpreter::bogus(void) const, int, &public: void __thiscall Interpreter::printThroughProperties(int)>
// @summary Auto-lifted identical-shape clone of 0x0046EA50 (ExprParser::ReadWriteMethodType<DoubleWithProperties>::vfunc_41 (DoubleWithProperties::getValue)).
namespace lift_0046EA50 {
extern void ext_00505980();
extern void ext_0046C3C0();
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk forwarding to MSVCR80!_CxxThrowException.)
extern void ext_006A6DD2();
extern int mem_009DEC1C;

// @name ReadWriteMethodType_ImageExporter_EndFrame_vfunc_41
// @class ExprParser::ReadWriteMethodType<ImageExporter, int, {public: int __thiscall ImageExporter::getEndFrame(void) const, 0}, int, {public: void __thiscall ImageExporter::setEndFrame(int), 0}>
// @summary Reads an int from the context via its virtual getter (slot 2 of the sub-object vtable) and forwards it to the bound target's setter; throws if the target is null.
// @field ValuePtrType +0x00 void* field_0x00
// @field ExprParser::ReadWriteMethodType +0x04 void* field_0x04
struct ValuePtrTypeLite {
    void* field_0x00; // target object (set via ecx in ReadWriteMethodType setter)
};

// Callee signatures (both thiscall in the original binary; modeled as plain C functions here).
using SetterFn = void (*)(void* self, int value);
using VirtualGetFn = int (*)(void* self, void* ctx);

void fn_00505A30(ValuePtrTypeLite* self, void* ctx) {
    void* target = self->field_0x00;
    if (target != nullptr) {
        // ctx+0x04 is the sub-object whose vtable slot 2 produces the value.
        void** subObj = reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(ctx) + 0x04);
        void* sub = *subObj;
        void** vtbl = *reinterpret_cast<void***>(sub);
        auto getter = reinterpret_cast<VirtualGetFn>(vtbl[2]);
        int value = getter(sub, ctx);
        reinterpret_cast<SetterFn>(ext_00505980)(target, value);
        return;
    }
    // Null target: construct exception via helper and throw through the CRT thunk.
    reinterpret_cast<void (*)(void*)>(ext_0046C3C0)(&self);
    (void)mem_009DEC1C;
    ext_006A6DD2();
}
} // namespace lift_0046EA50
} // namespace lift_00505A30

// [0x00509600] ExprParser::ReadWriteMethodType<NMData::TaskManager, int, {public: int __thiscall NMData::TaskManager::getAccumulationType(void) const, 0}, int, {public: void __thiscall NMData::TaskManager::setAccumulationType(int), 0}>::vfunc_41 (68 bytes)
namespace lift_00509600 {
// @name ExprParser::ReadWriteMethodType<NMData::TaskManager, int, {public: int __thiscall NMData::TaskManager::getAccumulationType(void) const, 0}, int, {public: void __thiscall NMData::TaskManager::setAccumulationType(int), 0}>::vfunc_41
// @class ExprParser::ReadWriteMethodType<NMData::TaskManager, int, {public: int __thiscall NMData::TaskManager::getAccumulationType(void) const, 0}, int, {public: void __thiscall NMData::TaskManager::setAccumulationType(int), 0}>
// @summary Auto-lifted identical-shape clone of 0x0046EA50 (ExprParser::ReadWriteMethodType<DoubleWithProperties>::vfunc_41 (DoubleWithProperties::getValue)).
namespace lift_0046EA50 {
extern void ext_00508C10();
extern void ext_0046C3C0();
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk forwarding to MSVCR80!_CxxThrowException.)
extern void ext_006A6DD2();
extern int mem_009DEC1C;

// @name ReadWriteMethodType_ImageExporter_EndFrame_vfunc_41
// @class ExprParser::ReadWriteMethodType<ImageExporter, int, {public: int __thiscall ImageExporter::getEndFrame(void) const, 0}, int, {public: void __thiscall ImageExporter::setEndFrame(int), 0}>
// @summary Reads an int from the context via its virtual getter (slot 2 of the sub-object vtable) and forwards it to the bound target's setter; throws if the target is null.
// @field ValuePtrType +0x00 void* field_0x00
// @field ExprParser::ReadWriteMethodType +0x04 void* field_0x04
struct ValuePtrTypeLite {
    void* field_0x00; // target object (set via ecx in ReadWriteMethodType setter)
};

// Callee signatures (both thiscall in the original binary; modeled as plain C functions here).
using SetterFn = void (*)(void* self, int value);
using VirtualGetFn = int (*)(void* self, void* ctx);

void fn_00509600(ValuePtrTypeLite* self, void* ctx) {
    void* target = self->field_0x00;
    if (target != nullptr) {
        // ctx+0x04 is the sub-object whose vtable slot 2 produces the value.
        void** subObj = reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(ctx) + 0x04);
        void* sub = *subObj;
        void** vtbl = *reinterpret_cast<void***>(sub);
        auto getter = reinterpret_cast<VirtualGetFn>(vtbl[2]);
        int value = getter(sub, ctx);
        reinterpret_cast<SetterFn>(ext_00508C10)(target, value);
        return;
    }
    // Null target: construct exception via helper and throw through the CRT thunk.
    reinterpret_cast<void (*)(void*)>(ext_0046C3C0)(&self);
    (void)mem_009DEC1C;
    ext_006A6DD2();
}
} // namespace lift_0046EA50
} // namespace lift_00509600

// [0x00522260] ExprParser::ReadWriteMethodType<ThreeLayerNet, int, &public: int __thiscall ThreeLayerNet::getNumHidden(void) const, int, &public: void __thiscall ThreeLayerNet::setNumHidden(int)>::vfunc_41 (68 bytes)
namespace lift_00522260 {
// @name ExprParser::ReadWriteMethodType<ThreeLayerNet, int, &public: int __thiscall ThreeLayerNet::getNumHidden(void) const, int, &public: void __thiscall ThreeLayerNet::setNumHidden(int)>::vfunc_41
// @class ExprParser::ReadWriteMethodType<ThreeLayerNet, int, &public: int __thiscall ThreeLayerNet::getNumHidden(void) const, int, &public: void __thiscall ThreeLayerNet::setNumHidden(int)>
// @summary Auto-lifted identical-shape clone of 0x0046EA50 (ExprParser::ReadWriteMethodType<DoubleWithProperties>::vfunc_41 (DoubleWithProperties::getValue)).
namespace lift_0046EA50 {
extern void ext_00522190();
extern void ext_0046C3C0();
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk forwarding to MSVCR80!_CxxThrowException.)
extern void ext_006A6DD2();
extern int mem_009DEC1C;

// @name ReadWriteMethodType_ImageExporter_EndFrame_vfunc_41
// @class ExprParser::ReadWriteMethodType<ImageExporter, int, {public: int __thiscall ImageExporter::getEndFrame(void) const, 0}, int, {public: void __thiscall ImageExporter::setEndFrame(int), 0}>
// @summary Reads an int from the context via its virtual getter (slot 2 of the sub-object vtable) and forwards it to the bound target's setter; throws if the target is null.
// @field ValuePtrType +0x00 void* field_0x00
// @field ExprParser::ReadWriteMethodType +0x04 void* field_0x04
struct ValuePtrTypeLite {
    void* field_0x00; // target object (set via ecx in ReadWriteMethodType setter)
};

// Callee signatures (both thiscall in the original binary; modeled as plain C functions here).
using SetterFn = void (*)(void* self, int value);
using VirtualGetFn = int (*)(void* self, void* ctx);

void fn_00522260(ValuePtrTypeLite* self, void* ctx) {
    void* target = self->field_0x00;
    if (target != nullptr) {
        // ctx+0x04 is the sub-object whose vtable slot 2 produces the value.
        void** subObj = reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(ctx) + 0x04);
        void* sub = *subObj;
        void** vtbl = *reinterpret_cast<void***>(sub);
        auto getter = reinterpret_cast<VirtualGetFn>(vtbl[2]);
        int value = getter(sub, ctx);
        reinterpret_cast<SetterFn>(ext_00522190)(target, value);
        return;
    }
    // Null target: construct exception via helper and throw through the CRT thunk.
    reinterpret_cast<void (*)(void*)>(ext_0046C3C0)(&self);
    (void)mem_009DEC1C;
    ext_006A6DD2();
}
} // namespace lift_0046EA50
} // namespace lift_00522260

// [0x005C73A0] ExprParser::ReadWriteMethodType<NMData::CollisionModelData, bool, {public: bool __thiscall NMData::CollisionModelData::collidesWithAncestors(void) const, 0}, bool, {public: void __thiscall NMData::CollisionModelData::setCollidesWithAncestors(bool), 0}>::vfunc_41 (68 bytes)
namespace lift_005C73A0 {
// @name ExprParser::ReadWriteMethodType<NMData::CollisionModelData, bool, {public: bool __thiscall NMData::CollisionModelData::collidesWithAncestors(void) const, 0}, bool, {public: void __thiscall NMData::CollisionModelData::setCollidesWithAncestors(bool), 0}>::vfunc_41
// @class ExprParser::ReadWriteMethodType<NMData::CollisionModelData, bool, {public: bool __thiscall NMData::CollisionModelData::collidesWithAncestors(void) const, 0}, bool, {public: void __thiscall NMData::CollisionModelData::setCollidesWithAncestors(bool), 0}>
// @summary Auto-lifted identical-shape clone of 0x0046E450 (ExprParser::ReadWriteMethodType<DoubleWithProperties>::vfunc_41 (DoubleWithProperties::getValue)).
namespace lift_0046E450 {
extern void ext_005B6460();
extern void ext_0046C3C0();
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk forwarding to MSVCR80!_CxxThrowException.)
extern void ext_006A6DD2();
extern int mem_009DEC1C;

// @name ReadWriteMethodType<ImageExporter,bool,getUseRenderer,bool,setUseRenderer>::vfunc_41
// @class ExprParser::ReadWriteMethodType<ImageExporter, bool, {public: bool __thiscall ImageExporter::getUseRenderer(void) const, 0}, bool, {public: void __thiscall ImageExporter::setUseRenderer(bool), 0}>
// @summary Forwards arg2's sub-object result into the target held by arg1; throws if arg1's target is null.
// @field ExprParser::ReadWriteMethodType<ImageExporter, bool, {public: bool __thiscall ImageExporter::getUseRenderer(void) const, 0}, bool, {public: void __thiscall ImageExporter::setUseRenderer(bool), 0}> +0x00 void* field_0x00
// @field ExprParser::ReadWriteMethodType<ImageExporter, bool, {public: bool __thiscall ImageExporter::getUseRenderer(void) const, 0}, bool, {public: void __thiscall ImageExporter::setUseRenderer(bool), 0}> +0x04 void* field_0x04
void fn_005C73A0(void* arg1, void* arg2) {
    // arg1 is a pointer to a slot whose value is the target object pointer.
    void* target = *static_cast<void**>(arg1);
    if (target == nullptr) {
        // Null target: construct the exception in place at &arg1 and throw it.
        using InitFn = void (*)(void*);
        reinterpret_cast<InitFn>(&ext_0046C3C0)(&arg1);
        using ThrowFn = void (*)(void*, void*);
        reinterpret_cast<ThrowFn>(&ext_006A6DD2)(&arg1, &mem_009DEC1C);
        return;
    }

    // sub = arg2->field_0x04; r = sub->vtable[0x0c](sub, arg2)
    void* sub = lift_field<void*>(arg2, 0x04);
    void* vt = lift_field<void*>(sub, 0x00);
    using VFn = uint32_t (*)(void* self, void* arg);
    VFn vcall = reinterpret_cast<VFn>(lift_field<void*>(vt, 0x0c));
    uint32_t r = vcall(sub, arg2);

    // sub_0046C2D0(target, r)
    using SetFn = void (*)(void* self, uint32_t value);
    reinterpret_cast<SetFn>(&ext_005B6460)(target, r);
}
} // namespace lift_0046E450
} // namespace lift_005C73A0

// [0x005C76E0] ExprParser::ReadWriteMethodType<NMData::CollisionModelData, bool, {public: bool __thiscall NMData::CollisionModelData::collidesWithParent(void) const, 0}, bool, {public: void __thiscall NMData::CollisionModelData::setCollidesWithParent(bool), 0}>::vfunc_41 (68 bytes)
namespace lift_005C76E0 {
// @name ExprParser::ReadWriteMethodType<NMData::CollisionModelData, bool, {public: bool __thiscall NMData::CollisionModelData::collidesWithParent(void) const, 0}, bool, {public: void __thiscall NMData::CollisionModelData::setCollidesWithParent(bool), 0}>::vfunc_41
// @class ExprParser::ReadWriteMethodType<NMData::CollisionModelData, bool, {public: bool __thiscall NMData::CollisionModelData::collidesWithParent(void) const, 0}, bool, {public: void __thiscall NMData::CollisionModelData::setCollidesWithParent(bool), 0}>
// @summary Auto-lifted identical-shape clone of 0x0046E450 (ExprParser::ReadWriteMethodType<DoubleWithProperties>::vfunc_41 (DoubleWithProperties::getValue)).
namespace lift_0046E450 {
extern void ext_005B6440();
extern void ext_0046C3C0();
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk forwarding to MSVCR80!_CxxThrowException.)
extern void ext_006A6DD2();
extern int mem_009DEC1C;

// @name ReadWriteMethodType<ImageExporter,bool,getUseRenderer,bool,setUseRenderer>::vfunc_41
// @class ExprParser::ReadWriteMethodType<ImageExporter, bool, {public: bool __thiscall ImageExporter::getUseRenderer(void) const, 0}, bool, {public: void __thiscall ImageExporter::setUseRenderer(bool), 0}>
// @summary Forwards arg2's sub-object result into the target held by arg1; throws if arg1's target is null.
// @field ExprParser::ReadWriteMethodType<ImageExporter, bool, {public: bool __thiscall ImageExporter::getUseRenderer(void) const, 0}, bool, {public: void __thiscall ImageExporter::setUseRenderer(bool), 0}> +0x00 void* field_0x00
// @field ExprParser::ReadWriteMethodType<ImageExporter, bool, {public: bool __thiscall ImageExporter::getUseRenderer(void) const, 0}, bool, {public: void __thiscall ImageExporter::setUseRenderer(bool), 0}> +0x04 void* field_0x04
void fn_005C76E0(void* arg1, void* arg2) {
    // arg1 is a pointer to a slot whose value is the target object pointer.
    void* target = *static_cast<void**>(arg1);
    if (target == nullptr) {
        // Null target: construct the exception in place at &arg1 and throw it.
        using InitFn = void (*)(void*);
        reinterpret_cast<InitFn>(&ext_0046C3C0)(&arg1);
        using ThrowFn = void (*)(void*, void*);
        reinterpret_cast<ThrowFn>(&ext_006A6DD2)(&arg1, &mem_009DEC1C);
        return;
    }

    // sub = arg2->field_0x04; r = sub->vtable[0x0c](sub, arg2)
    void* sub = lift_field<void*>(arg2, 0x04);
    void* vt = lift_field<void*>(sub, 0x00);
    using VFn = uint32_t (*)(void* self, void* arg);
    VFn vcall = reinterpret_cast<VFn>(lift_field<void*>(vt, 0x0c));
    uint32_t r = vcall(sub, arg2);

    // sub_0046C2D0(target, r)
    using SetFn = void (*)(void* self, uint32_t value);
    reinterpret_cast<SetFn>(&ext_005B6440)(target, r);
}
} // namespace lift_0046E450
} // namespace lift_005C76E0

// [0x005C7900] ExprParser::ReadWriteMethodType<NMData::CollisionModelData, bool, {public: bool __thiscall NMData::CollisionModelData::collidesWithSiblings(void) const, 0}, bool, {public: void __thiscall NMData::CollisionModelData::setCollidesWithSiblings(bool), 0}>::vfunc_41 (68 bytes)
namespace lift_005C7900 {
// @name ExprParser::ReadWriteMethodType<NMData::CollisionModelData, bool, {public: bool __thiscall NMData::CollisionModelData::collidesWithSiblings(void) const, 0}, bool, {public: void __thiscall NMData::CollisionModelData::setCollidesWithSiblings(bool), 0}>::vfunc_41
// @class ExprParser::ReadWriteMethodType<NMData::CollisionModelData, bool, {public: bool __thiscall NMData::CollisionModelData::collidesWithSiblings(void) const, 0}, bool, {public: void __thiscall NMData::CollisionModelData::setCollidesWithSiblings(bool), 0}>
// @summary Auto-lifted identical-shape clone of 0x0046E450 (ExprParser::ReadWriteMethodType<DoubleWithProperties>::vfunc_41 (DoubleWithProperties::getValue)).
namespace lift_0046E450 {
extern void ext_005B6450();
extern void ext_0046C3C0();
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk forwarding to MSVCR80!_CxxThrowException.)
extern void ext_006A6DD2();
extern int mem_009DEC1C;

// @name ReadWriteMethodType<ImageExporter,bool,getUseRenderer,bool,setUseRenderer>::vfunc_41
// @class ExprParser::ReadWriteMethodType<ImageExporter, bool, {public: bool __thiscall ImageExporter::getUseRenderer(void) const, 0}, bool, {public: void __thiscall ImageExporter::setUseRenderer(bool), 0}>
// @summary Forwards arg2's sub-object result into the target held by arg1; throws if arg1's target is null.
// @field ExprParser::ReadWriteMethodType<ImageExporter, bool, {public: bool __thiscall ImageExporter::getUseRenderer(void) const, 0}, bool, {public: void __thiscall ImageExporter::setUseRenderer(bool), 0}> +0x00 void* field_0x00
// @field ExprParser::ReadWriteMethodType<ImageExporter, bool, {public: bool __thiscall ImageExporter::getUseRenderer(void) const, 0}, bool, {public: void __thiscall ImageExporter::setUseRenderer(bool), 0}> +0x04 void* field_0x04
void fn_005C7900(void* arg1, void* arg2) {
    // arg1 is a pointer to a slot whose value is the target object pointer.
    void* target = *static_cast<void**>(arg1);
    if (target == nullptr) {
        // Null target: construct the exception in place at &arg1 and throw it.
        using InitFn = void (*)(void*);
        reinterpret_cast<InitFn>(&ext_0046C3C0)(&arg1);
        using ThrowFn = void (*)(void*, void*);
        reinterpret_cast<ThrowFn>(&ext_006A6DD2)(&arg1, &mem_009DEC1C);
        return;
    }

    // sub = arg2->field_0x04; r = sub->vtable[0x0c](sub, arg2)
    void* sub = lift_field<void*>(arg2, 0x04);
    void* vt = lift_field<void*>(sub, 0x00);
    using VFn = uint32_t (*)(void* self, void* arg);
    VFn vcall = reinterpret_cast<VFn>(lift_field<void*>(vt, 0x0c));
    uint32_t r = vcall(sub, arg2);

    // sub_0046C2D0(target, r)
    using SetFn = void (*)(void* self, uint32_t value);
    reinterpret_cast<SetFn>(&ext_005B6450)(target, r);
}
} // namespace lift_0046E450
} // namespace lift_005C7900

// [0x005C7C50] ExprParser::ReadWriteMethodType<NMData::CollisionModelData, bool, {[thunk]: __thiscall NMData::CollisionModelData::`vcall'{108, {flat}}, 0}, bool, {[thunk]: __thiscall NMData::CollisionModelData::`vcall'{104, {flat}}, 0}>::vfunc_41 (68 bytes)
namespace lift_005C7C50 {
// @name ExprParser::ReadWriteMethodType<NMData::CollisionModelData, bool, {[thunk]: __thiscall NMData::CollisionModelData::`vcall'{108, {flat}}, 0}, bool, {[thunk]: __thiscall NMData::CollisionModelData::`vcall'{104, {flat}}, 0}>::vfunc_41
// @class ExprParser::ReadWriteMethodType<NMData::CollisionModelData, bool, {[thunk]: __thiscall NMData::CollisionModelData::`vcall'{108, {flat}}, 0}, bool, {[thunk]: __thiscall NMData::CollisionModelData::`vcall'{104, {flat}}, 0}>
// @summary Auto-lifted identical-shape clone of 0x0046E450 (ExprParser::ReadWriteMethodType<DoubleWithProperties>::vfunc_41 (DoubleWithProperties::getValue)).
namespace lift_0046E450 {
extern void ext_0064F930();
extern void ext_0046C3C0();
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk forwarding to MSVCR80!_CxxThrowException.)
extern void ext_006A6DD2();
extern int mem_009DEC1C;

// @name ReadWriteMethodType<ImageExporter,bool,getUseRenderer,bool,setUseRenderer>::vfunc_41
// @class ExprParser::ReadWriteMethodType<ImageExporter, bool, {public: bool __thiscall ImageExporter::getUseRenderer(void) const, 0}, bool, {public: void __thiscall ImageExporter::setUseRenderer(bool), 0}>
// @summary Forwards arg2's sub-object result into the target held by arg1; throws if arg1's target is null.
// @field ExprParser::ReadWriteMethodType<ImageExporter, bool, {public: bool __thiscall ImageExporter::getUseRenderer(void) const, 0}, bool, {public: void __thiscall ImageExporter::setUseRenderer(bool), 0}> +0x00 void* field_0x00
// @field ExprParser::ReadWriteMethodType<ImageExporter, bool, {public: bool __thiscall ImageExporter::getUseRenderer(void) const, 0}, bool, {public: void __thiscall ImageExporter::setUseRenderer(bool), 0}> +0x04 void* field_0x04
void fn_005C7C50(void* arg1, void* arg2) {
    // arg1 is a pointer to a slot whose value is the target object pointer.
    void* target = *static_cast<void**>(arg1);
    if (target == nullptr) {
        // Null target: construct the exception in place at &arg1 and throw it.
        using InitFn = void (*)(void*);
        reinterpret_cast<InitFn>(&ext_0046C3C0)(&arg1);
        using ThrowFn = void (*)(void*, void*);
        reinterpret_cast<ThrowFn>(&ext_006A6DD2)(&arg1, &mem_009DEC1C);
        return;
    }

    // sub = arg2->field_0x04; r = sub->vtable[0x0c](sub, arg2)
    void* sub = lift_field<void*>(arg2, 0x04);
    void* vt = lift_field<void*>(sub, 0x00);
    using VFn = uint32_t (*)(void* self, void* arg);
    VFn vcall = reinterpret_cast<VFn>(lift_field<void*>(vt, 0x0c));
    uint32_t r = vcall(sub, arg2);

    // sub_0046C2D0(target, r)
    using SetFn = void (*)(void* self, uint32_t value);
    reinterpret_cast<SetFn>(&ext_0064F930)(target, r);
}
} // namespace lift_0046E450
} // namespace lift_005C7C50

// [0x005D1760] ExprParser::ReadWriteMethodType<NMData::VideoPlaneData, bool, &public: bool __thiscall NMData::VideoPlaneData::mustDrawTimeCode(void) const, bool, &public: void __thiscall NMData::VideoPlaneData::setMustDrawTimeCode(bool)>::vfunc_41 (68 bytes)
namespace lift_005D1760 {
// @name ExprParser::ReadWriteMethodType<NMData::VideoPlaneData, bool, &public: bool __thiscall NMData::VideoPlaneData::mustDrawTimeCode(void) const, bool, &public: void __thiscall NMData::VideoPlaneData::setMustDrawTimeCode(bool)>::vfunc_41
// @class ExprParser::ReadWriteMethodType<NMData::VideoPlaneData, bool, &public: bool __thiscall NMData::VideoPlaneData::mustDrawTimeCode(void) const, bool, &public: void __thiscall NMData::VideoPlaneData::setMustDrawTimeCode(bool)>
// @summary Auto-lifted identical-shape clone of 0x0046E450 (ExprParser::ReadWriteMethodType<DoubleWithProperties>::vfunc_41 (DoubleWithProperties::getValue)).
namespace lift_0046E450 {
extern void ext_005CFB60();
extern void ext_0046C3C0();
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk forwarding to MSVCR80!_CxxThrowException.)
extern void ext_006A6DD2();
extern int mem_009DEC1C;

// @name ReadWriteMethodType<ImageExporter,bool,getUseRenderer,bool,setUseRenderer>::vfunc_41
// @class ExprParser::ReadWriteMethodType<ImageExporter, bool, {public: bool __thiscall ImageExporter::getUseRenderer(void) const, 0}, bool, {public: void __thiscall ImageExporter::setUseRenderer(bool), 0}>
// @summary Forwards arg2's sub-object result into the target held by arg1; throws if arg1's target is null.
// @field ExprParser::ReadWriteMethodType<ImageExporter, bool, {public: bool __thiscall ImageExporter::getUseRenderer(void) const, 0}, bool, {public: void __thiscall ImageExporter::setUseRenderer(bool), 0}> +0x00 void* field_0x00
// @field ExprParser::ReadWriteMethodType<ImageExporter, bool, {public: bool __thiscall ImageExporter::getUseRenderer(void) const, 0}, bool, {public: void __thiscall ImageExporter::setUseRenderer(bool), 0}> +0x04 void* field_0x04
void fn_005D1760(void* arg1, void* arg2) {
    // arg1 is a pointer to a slot whose value is the target object pointer.
    void* target = *static_cast<void**>(arg1);
    if (target == nullptr) {
        // Null target: construct the exception in place at &arg1 and throw it.
        using InitFn = void (*)(void*);
        reinterpret_cast<InitFn>(&ext_0046C3C0)(&arg1);
        using ThrowFn = void (*)(void*, void*);
        reinterpret_cast<ThrowFn>(&ext_006A6DD2)(&arg1, &mem_009DEC1C);
        return;
    }

    // sub = arg2->field_0x04; r = sub->vtable[0x0c](sub, arg2)
    void* sub = lift_field<void*>(arg2, 0x04);
    void* vt = lift_field<void*>(sub, 0x00);
    using VFn = uint32_t (*)(void* self, void* arg);
    VFn vcall = reinterpret_cast<VFn>(lift_field<void*>(vt, 0x0c));
    uint32_t r = vcall(sub, arg2);

    // sub_0046C2D0(target, r)
    using SetFn = void (*)(void* self, uint32_t value);
    reinterpret_cast<SetFn>(&ext_005CFB60)(target, r);
}
} // namespace lift_0046E450
} // namespace lift_005D1760

// [0x005D1B20] ExprParser::ReadWriteMethodType<NMData::CameraData, bool, {private: bool __thiscall NMData::CameraData::isFrustumVisible(void) const, 0}, bool, {private: void __thiscall NMData::CameraData::setFrustumVisible(bool), 0}>::vfunc_41 (68 bytes)
namespace lift_005D1B20 {
// @name ExprParser::ReadWriteMethodType<NMData::CameraData, bool, {private: bool __thiscall NMData::CameraData::isFrustumVisible(void) const, 0}, bool, {private: void __thiscall NMData::CameraData::setFrustumVisible(bool), 0}>::vfunc_41
// @class ExprParser::ReadWriteMethodType<NMData::CameraData, bool, {private: bool __thiscall NMData::CameraData::isFrustumVisible(void) const, 0}, bool, {private: void __thiscall NMData::CameraData::setFrustumVisible(bool), 0}>
// @summary Auto-lifted identical-shape clone of 0x0046E450 (ExprParser::ReadWriteMethodType<DoubleWithProperties>::vfunc_41 (DoubleWithProperties::getValue)).
namespace lift_0046E450 {
extern void ext_005CFE10();
extern void ext_0046C3C0();
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk forwarding to MSVCR80!_CxxThrowException.)
extern void ext_006A6DD2();
extern int mem_009DEC1C;

// @name ReadWriteMethodType<ImageExporter,bool,getUseRenderer,bool,setUseRenderer>::vfunc_41
// @class ExprParser::ReadWriteMethodType<ImageExporter, bool, {public: bool __thiscall ImageExporter::getUseRenderer(void) const, 0}, bool, {public: void __thiscall ImageExporter::setUseRenderer(bool), 0}>
// @summary Forwards arg2's sub-object result into the target held by arg1; throws if arg1's target is null.
// @field ExprParser::ReadWriteMethodType<ImageExporter, bool, {public: bool __thiscall ImageExporter::getUseRenderer(void) const, 0}, bool, {public: void __thiscall ImageExporter::setUseRenderer(bool), 0}> +0x00 void* field_0x00
// @field ExprParser::ReadWriteMethodType<ImageExporter, bool, {public: bool __thiscall ImageExporter::getUseRenderer(void) const, 0}, bool, {public: void __thiscall ImageExporter::setUseRenderer(bool), 0}> +0x04 void* field_0x04
void fn_005D1B20(void* arg1, void* arg2) {
    // arg1 is a pointer to a slot whose value is the target object pointer.
    void* target = *static_cast<void**>(arg1);
    if (target == nullptr) {
        // Null target: construct the exception in place at &arg1 and throw it.
        using InitFn = void (*)(void*);
        reinterpret_cast<InitFn>(&ext_0046C3C0)(&arg1);
        using ThrowFn = void (*)(void*, void*);
        reinterpret_cast<ThrowFn>(&ext_006A6DD2)(&arg1, &mem_009DEC1C);
        return;
    }

    // sub = arg2->field_0x04; r = sub->vtable[0x0c](sub, arg2)
    void* sub = lift_field<void*>(arg2, 0x04);
    void* vt = lift_field<void*>(sub, 0x00);
    using VFn = uint32_t (*)(void* self, void* arg);
    VFn vcall = reinterpret_cast<VFn>(lift_field<void*>(vt, 0x0c));
    uint32_t r = vcall(sub, arg2);

    // sub_0046C2D0(target, r)
    using SetFn = void (*)(void* self, uint32_t value);
    reinterpret_cast<SetFn>(&ext_005CFE10)(target, r);
}
} // namespace lift_0046E450
} // namespace lift_005D1B20

// [0x005D1B70] ExprParser::ReadWriteMethodType<NMData::CameraData, bool, {public: bool __thiscall NMData::CameraData::isSettingsLocked(void) const, 0}, bool, {public: void __thiscall NMData::CameraData::setIsSettingsLocked(bool), 0}>::vfunc_41 (68 bytes)
namespace lift_005D1B70 {
// @name ExprParser::ReadWriteMethodType<NMData::CameraData, bool, {public: bool __thiscall NMData::CameraData::isSettingsLocked(void) const, 0}, bool, {public: void __thiscall NMData::CameraData::setIsSettingsLocked(bool), 0}>::vfunc_41
// @class ExprParser::ReadWriteMethodType<NMData::CameraData, bool, {public: bool __thiscall NMData::CameraData::isSettingsLocked(void) const, 0}, bool, {public: void __thiscall NMData::CameraData::setIsSettingsLocked(bool), 0}>
// @summary Auto-lifted identical-shape clone of 0x0046E450 (ExprParser::ReadWriteMethodType<DoubleWithProperties>::vfunc_41 (DoubleWithProperties::getValue)).
namespace lift_0046E450 {
extern void ext_005CF920();
extern void ext_0046C3C0();
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk forwarding to MSVCR80!_CxxThrowException.)
extern void ext_006A6DD2();
extern int mem_009DEC1C;

// @name ReadWriteMethodType<ImageExporter,bool,getUseRenderer,bool,setUseRenderer>::vfunc_41
// @class ExprParser::ReadWriteMethodType<ImageExporter, bool, {public: bool __thiscall ImageExporter::getUseRenderer(void) const, 0}, bool, {public: void __thiscall ImageExporter::setUseRenderer(bool), 0}>
// @summary Forwards arg2's sub-object result into the target held by arg1; throws if arg1's target is null.
// @field ExprParser::ReadWriteMethodType<ImageExporter, bool, {public: bool __thiscall ImageExporter::getUseRenderer(void) const, 0}, bool, {public: void __thiscall ImageExporter::setUseRenderer(bool), 0}> +0x00 void* field_0x00
// @field ExprParser::ReadWriteMethodType<ImageExporter, bool, {public: bool __thiscall ImageExporter::getUseRenderer(void) const, 0}, bool, {public: void __thiscall ImageExporter::setUseRenderer(bool), 0}> +0x04 void* field_0x04
void fn_005D1B70(void* arg1, void* arg2) {
    // arg1 is a pointer to a slot whose value is the target object pointer.
    void* target = *static_cast<void**>(arg1);
    if (target == nullptr) {
        // Null target: construct the exception in place at &arg1 and throw it.
        using InitFn = void (*)(void*);
        reinterpret_cast<InitFn>(&ext_0046C3C0)(&arg1);
        using ThrowFn = void (*)(void*, void*);
        reinterpret_cast<ThrowFn>(&ext_006A6DD2)(&arg1, &mem_009DEC1C);
        return;
    }

    // sub = arg2->field_0x04; r = sub->vtable[0x0c](sub, arg2)
    void* sub = lift_field<void*>(arg2, 0x04);
    void* vt = lift_field<void*>(sub, 0x00);
    using VFn = uint32_t (*)(void* self, void* arg);
    VFn vcall = reinterpret_cast<VFn>(lift_field<void*>(vt, 0x0c));
    uint32_t r = vcall(sub, arg2);

    // sub_0046C2D0(target, r)
    using SetFn = void (*)(void* self, uint32_t value);
    reinterpret_cast<SetFn>(&ext_005CF920)(target, r);
}
} // namespace lift_0046E450
} // namespace lift_005D1B70

// [0x005DC510] ExprParser::ReadWriteMethodType<NMData::VideoPlaneData, int, &public: int __thiscall NMData::VideoPlaneData::getStartFrame(void) const, int, &public: void __thiscall NMData::VideoPlaneData::setStartFrame(int)>::vfunc_41 (68 bytes)
namespace lift_005DC510 {
// @name ExprParser::ReadWriteMethodType<NMData::VideoPlaneData, int, &public: int __thiscall NMData::VideoPlaneData::getStartFrame(void) const, int, &public: void __thiscall NMData::VideoPlaneData::setStartFrame(int)>::vfunc_41
// @class ExprParser::ReadWriteMethodType<NMData::VideoPlaneData, int, &public: int __thiscall NMData::VideoPlaneData::getStartFrame(void) const, int, &public: void __thiscall NMData::VideoPlaneData::setStartFrame(int)>
// @summary Auto-lifted identical-shape clone of 0x0046EA50 (ExprParser::ReadWriteMethodType<DoubleWithProperties>::vfunc_41 (DoubleWithProperties::getValue)).
namespace lift_0046EA50 {
extern void ext_005DC1E0();
extern void ext_0046C3C0();
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk forwarding to MSVCR80!_CxxThrowException.)
extern void ext_006A6DD2();
extern int mem_009DEC1C;

// @name ReadWriteMethodType_ImageExporter_EndFrame_vfunc_41
// @class ExprParser::ReadWriteMethodType<ImageExporter, int, {public: int __thiscall ImageExporter::getEndFrame(void) const, 0}, int, {public: void __thiscall ImageExporter::setEndFrame(int), 0}>
// @summary Reads an int from the context via its virtual getter (slot 2 of the sub-object vtable) and forwards it to the bound target's setter; throws if the target is null.
// @field ValuePtrType +0x00 void* field_0x00
// @field ExprParser::ReadWriteMethodType +0x04 void* field_0x04
struct ValuePtrTypeLite {
    void* field_0x00; // target object (set via ecx in ReadWriteMethodType setter)
};

// Callee signatures (both thiscall in the original binary; modeled as plain C functions here).
using SetterFn = void (*)(void* self, int value);
using VirtualGetFn = int (*)(void* self, void* ctx);

void fn_005DC510(ValuePtrTypeLite* self, void* ctx) {
    void* target = self->field_0x00;
    if (target != nullptr) {
        // ctx+0x04 is the sub-object whose vtable slot 2 produces the value.
        void** subObj = reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(ctx) + 0x04);
        void* sub = *subObj;
        void** vtbl = *reinterpret_cast<void***>(sub);
        auto getter = reinterpret_cast<VirtualGetFn>(vtbl[2]);
        int value = getter(sub, ctx);
        reinterpret_cast<SetterFn>(ext_005DC1E0)(target, value);
        return;
    }
    // Null target: construct exception via helper and throw through the CRT thunk.
    reinterpret_cast<void (*)(void*)>(ext_0046C3C0)(&self);
    (void)mem_009DEC1C;
    ext_006A6DD2();
}
} // namespace lift_0046EA50
} // namespace lift_005DC510

// [0x005DC560] ExprParser::ReadWriteMethodType<NMData::VideoPlaneData, int, &public: int __thiscall NMData::VideoPlaneData::getEndFrame(void) const, int, &public: void __thiscall NMData::VideoPlaneData::setEndFrame(int)>::vfunc_41 (68 bytes)
namespace lift_005DC560 {
// @name ExprParser::ReadWriteMethodType<NMData::VideoPlaneData, int, &public: int __thiscall NMData::VideoPlaneData::getEndFrame(void) const, int, &public: void __thiscall NMData::VideoPlaneData::setEndFrame(int)>::vfunc_41
// @class ExprParser::ReadWriteMethodType<NMData::VideoPlaneData, int, &public: int __thiscall NMData::VideoPlaneData::getEndFrame(void) const, int, &public: void __thiscall NMData::VideoPlaneData::setEndFrame(int)>
// @summary Auto-lifted identical-shape clone of 0x0046EA50 (ExprParser::ReadWriteMethodType<DoubleWithProperties>::vfunc_41 (DoubleWithProperties::getValue)).
namespace lift_0046EA50 {
extern void ext_005DC270();
extern void ext_0046C3C0();
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk forwarding to MSVCR80!_CxxThrowException.)
extern void ext_006A6DD2();
extern int mem_009DEC1C;

// @name ReadWriteMethodType_ImageExporter_EndFrame_vfunc_41
// @class ExprParser::ReadWriteMethodType<ImageExporter, int, {public: int __thiscall ImageExporter::getEndFrame(void) const, 0}, int, {public: void __thiscall ImageExporter::setEndFrame(int), 0}>
// @summary Reads an int from the context via its virtual getter (slot 2 of the sub-object vtable) and forwards it to the bound target's setter; throws if the target is null.
// @field ValuePtrType +0x00 void* field_0x00
// @field ExprParser::ReadWriteMethodType +0x04 void* field_0x04
struct ValuePtrTypeLite {
    void* field_0x00; // target object (set via ecx in ReadWriteMethodType setter)
};

// Callee signatures (both thiscall in the original binary; modeled as plain C functions here).
using SetterFn = void (*)(void* self, int value);
using VirtualGetFn = int (*)(void* self, void* ctx);

void fn_005DC560(ValuePtrTypeLite* self, void* ctx) {
    void* target = self->field_0x00;
    if (target != nullptr) {
        // ctx+0x04 is the sub-object whose vtable slot 2 produces the value.
        void** subObj = reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(ctx) + 0x04);
        void* sub = *subObj;
        void** vtbl = *reinterpret_cast<void***>(sub);
        auto getter = reinterpret_cast<VirtualGetFn>(vtbl[2]);
        int value = getter(sub, ctx);
        reinterpret_cast<SetterFn>(ext_005DC270)(target, value);
        return;
    }
    // Null target: construct exception via helper and throw through the CRT thunk.
    reinterpret_cast<void (*)(void*)>(ext_0046C3C0)(&self);
    (void)mem_009DEC1C;
    ext_006A6DD2();
}
} // namespace lift_0046EA50
} // namespace lift_005DC560

// [0x005DC5B0] ExprParser::ReadWriteMethodType<NMData::VideoPlaneData, int, &public: int __thiscall NMData::VideoPlaneData::getFrameOffset(void) const, int, &public: void __thiscall NMData::VideoPlaneData::setFrameOffset(int)>::vfunc_41 (68 bytes)
namespace lift_005DC5B0 {
// @name ExprParser::ReadWriteMethodType<NMData::VideoPlaneData, int, &public: int __thiscall NMData::VideoPlaneData::getFrameOffset(void) const, int, &public: void __thiscall NMData::VideoPlaneData::setFrameOffset(int)>::vfunc_41
// @class ExprParser::ReadWriteMethodType<NMData::VideoPlaneData, int, &public: int __thiscall NMData::VideoPlaneData::getFrameOffset(void) const, int, &public: void __thiscall NMData::VideoPlaneData::setFrameOffset(int)>
// @summary Auto-lifted identical-shape clone of 0x0046EA50 (ExprParser::ReadWriteMethodType<DoubleWithProperties>::vfunc_41 (DoubleWithProperties::getValue)).
namespace lift_0046EA50 {
extern void ext_005DC390();
extern void ext_0046C3C0();
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk forwarding to MSVCR80!_CxxThrowException.)
extern void ext_006A6DD2();
extern int mem_009DEC1C;

// @name ReadWriteMethodType_ImageExporter_EndFrame_vfunc_41
// @class ExprParser::ReadWriteMethodType<ImageExporter, int, {public: int __thiscall ImageExporter::getEndFrame(void) const, 0}, int, {public: void __thiscall ImageExporter::setEndFrame(int), 0}>
// @summary Reads an int from the context via its virtual getter (slot 2 of the sub-object vtable) and forwards it to the bound target's setter; throws if the target is null.
// @field ValuePtrType +0x00 void* field_0x00
// @field ExprParser::ReadWriteMethodType +0x04 void* field_0x04
struct ValuePtrTypeLite {
    void* field_0x00; // target object (set via ecx in ReadWriteMethodType setter)
};

// Callee signatures (both thiscall in the original binary; modeled as plain C functions here).
using SetterFn = void (*)(void* self, int value);
using VirtualGetFn = int (*)(void* self, void* ctx);

void fn_005DC5B0(ValuePtrTypeLite* self, void* ctx) {
    void* target = self->field_0x00;
    if (target != nullptr) {
        // ctx+0x04 is the sub-object whose vtable slot 2 produces the value.
        void** subObj = reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(ctx) + 0x04);
        void* sub = *subObj;
        void** vtbl = *reinterpret_cast<void***>(sub);
        auto getter = reinterpret_cast<VirtualGetFn>(vtbl[2]);
        int value = getter(sub, ctx);
        reinterpret_cast<SetterFn>(ext_005DC390)(target, value);
        return;
    }
    // Null target: construct exception via helper and throw through the CRT thunk.
    reinterpret_cast<void (*)(void*)>(ext_0046C3C0)(&self);
    (void)mem_009DEC1C;
    ext_006A6DD2();
}
} // namespace lift_0046EA50
} // namespace lift_005DC5B0

// [0x005DCD10] ExprParser::ReadWriteMethodType<NMData::CameraData, bool, {public: bool __thiscall NMData::CameraData::isVideoPlaneEnabled(void) const, 0}, bool, {public: void __thiscall NMData::CameraData::setIsVideoPlaneEnabled(bool), 0}>::vfunc_41 (68 bytes)
namespace lift_005DCD10 {
// @name ExprParser::ReadWriteMethodType<NMData::CameraData, bool, {public: bool __thiscall NMData::CameraData::isVideoPlaneEnabled(void) const, 0}, bool, {public: void __thiscall NMData::CameraData::setIsVideoPlaneEnabled(bool), 0}>::vfunc_41
// @class ExprParser::ReadWriteMethodType<NMData::CameraData, bool, {public: bool __thiscall NMData::CameraData::isVideoPlaneEnabled(void) const, 0}, bool, {public: void __thiscall NMData::CameraData::setIsVideoPlaneEnabled(bool), 0}>
// @summary Auto-lifted identical-shape clone of 0x0046E450 (ExprParser::ReadWriteMethodType<DoubleWithProperties>::vfunc_41 (DoubleWithProperties::getValue)).
namespace lift_0046E450 {
extern void ext_005DCBC0();
extern void ext_0046C3C0();
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk forwarding to MSVCR80!_CxxThrowException.)
extern void ext_006A6DD2();
extern int mem_009DEC1C;

// @name ReadWriteMethodType<ImageExporter,bool,getUseRenderer,bool,setUseRenderer>::vfunc_41
// @class ExprParser::ReadWriteMethodType<ImageExporter, bool, {public: bool __thiscall ImageExporter::getUseRenderer(void) const, 0}, bool, {public: void __thiscall ImageExporter::setUseRenderer(bool), 0}>
// @summary Forwards arg2's sub-object result into the target held by arg1; throws if arg1's target is null.
// @field ExprParser::ReadWriteMethodType<ImageExporter, bool, {public: bool __thiscall ImageExporter::getUseRenderer(void) const, 0}, bool, {public: void __thiscall ImageExporter::setUseRenderer(bool), 0}> +0x00 void* field_0x00
// @field ExprParser::ReadWriteMethodType<ImageExporter, bool, {public: bool __thiscall ImageExporter::getUseRenderer(void) const, 0}, bool, {public: void __thiscall ImageExporter::setUseRenderer(bool), 0}> +0x04 void* field_0x04
void fn_005DCD10(void* arg1, void* arg2) {
    // arg1 is a pointer to a slot whose value is the target object pointer.
    void* target = *static_cast<void**>(arg1);
    if (target == nullptr) {
        // Null target: construct the exception in place at &arg1 and throw it.
        using InitFn = void (*)(void*);
        reinterpret_cast<InitFn>(&ext_0046C3C0)(&arg1);
        using ThrowFn = void (*)(void*, void*);
        reinterpret_cast<ThrowFn>(&ext_006A6DD2)(&arg1, &mem_009DEC1C);
        return;
    }

    // sub = arg2->field_0x04; r = sub->vtable[0x0c](sub, arg2)
    void* sub = lift_field<void*>(arg2, 0x04);
    void* vt = lift_field<void*>(sub, 0x00);
    using VFn = uint32_t (*)(void* self, void* arg);
    VFn vcall = reinterpret_cast<VFn>(lift_field<void*>(vt, 0x0c));
    uint32_t r = vcall(sub, arg2);

    // sub_0046C2D0(target, r)
    using SetFn = void (*)(void* self, uint32_t value);
    reinterpret_cast<SetFn>(&ext_005DCBC0)(target, r);
}
} // namespace lift_0046E450
} // namespace lift_005DCD10

// [0x005F5D70] ExprParser::ReadWriteMethodType<HelperGraphic, bool, {public: bool __thiscall HelperGraphic::getFSMVisibility(void) const, 0}, bool, {public: void __thiscall HelperGraphic::setFSMVisibility(bool), 0}>::vfunc_41 (68 bytes)
namespace lift_005F5D70 {
// @name ExprParser::ReadWriteMethodType<HelperGraphic, bool, {public: bool __thiscall HelperGraphic::getFSMVisibility(void) const, 0}, bool, {public: void __thiscall HelperGraphic::setFSMVisibility(bool), 0}>::vfunc_41
// @class ExprParser::ReadWriteMethodType<HelperGraphic, bool, {public: bool __thiscall HelperGraphic::getFSMVisibility(void) const, 0}, bool, {public: void __thiscall HelperGraphic::setFSMVisibility(bool), 0}>
// @summary Auto-lifted identical-shape clone of 0x0046E450 (ExprParser::ReadWriteMethodType<DoubleWithProperties>::vfunc_41 (DoubleWithProperties::getValue)).
namespace lift_0046E450 {
extern void ext_005F51D0();
extern void ext_0046C3C0();
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk forwarding to MSVCR80!_CxxThrowException.)
extern void ext_006A6DD2();
extern int mem_009DEC1C;

// @name ReadWriteMethodType<ImageExporter,bool,getUseRenderer,bool,setUseRenderer>::vfunc_41
// @class ExprParser::ReadWriteMethodType<ImageExporter, bool, {public: bool __thiscall ImageExporter::getUseRenderer(void) const, 0}, bool, {public: void __thiscall ImageExporter::setUseRenderer(bool), 0}>
// @summary Forwards arg2's sub-object result into the target held by arg1; throws if arg1's target is null.
// @field ExprParser::ReadWriteMethodType<ImageExporter, bool, {public: bool __thiscall ImageExporter::getUseRenderer(void) const, 0}, bool, {public: void __thiscall ImageExporter::setUseRenderer(bool), 0}> +0x00 void* field_0x00
// @field ExprParser::ReadWriteMethodType<ImageExporter, bool, {public: bool __thiscall ImageExporter::getUseRenderer(void) const, 0}, bool, {public: void __thiscall ImageExporter::setUseRenderer(bool), 0}> +0x04 void* field_0x04
void fn_005F5D70(void* arg1, void* arg2) {
    // arg1 is a pointer to a slot whose value is the target object pointer.
    void* target = *static_cast<void**>(arg1);
    if (target == nullptr) {
        // Null target: construct the exception in place at &arg1 and throw it.
        using InitFn = void (*)(void*);
        reinterpret_cast<InitFn>(&ext_0046C3C0)(&arg1);
        using ThrowFn = void (*)(void*, void*);
        reinterpret_cast<ThrowFn>(&ext_006A6DD2)(&arg1, &mem_009DEC1C);
        return;
    }

    // sub = arg2->field_0x04; r = sub->vtable[0x0c](sub, arg2)
    void* sub = lift_field<void*>(arg2, 0x04);
    void* vt = lift_field<void*>(sub, 0x00);
    using VFn = uint32_t (*)(void* self, void* arg);
    VFn vcall = reinterpret_cast<VFn>(lift_field<void*>(vt, 0x0c));
    uint32_t r = vcall(sub, arg2);

    // sub_0046C2D0(target, r)
    using SetFn = void (*)(void* self, uint32_t value);
    reinterpret_cast<SetFn>(&ext_005F51D0)(target, r);
}
} // namespace lift_0046E450
} // namespace lift_005F5D70

// [0x0061B910] ExprParser::ReadWriteMethodType<NMData::HingeConstraint, bool, {private: bool __thiscall NMData::HingeConstraint::isEnabled(void) const, 0}, bool, {private: void __thiscall NMData::HingeConstraint::setIsEnabled(bool), 0}>::vfunc_41 (68 bytes)
namespace lift_0061B910 {
// @name ExprParser::ReadWriteMethodType<NMData::HingeConstraint, bool, {private: bool __thiscall NMData::HingeConstraint::isEnabled(void) const, 0}, bool, {private: void __thiscall NMData::HingeConstraint::setIsEnabled(bool), 0}>::vfunc_41
// @class ExprParser::ReadWriteMethodType<NMData::HingeConstraint, bool, {private: bool __thiscall NMData::HingeConstraint::isEnabled(void) const, 0}, bool, {private: void __thiscall NMData::HingeConstraint::setIsEnabled(bool), 0}>
// @summary Auto-lifted identical-shape clone of 0x0046E450 (ExprParser::ReadWriteMethodType<DoubleWithProperties>::vfunc_41 (DoubleWithProperties::getValue)).
namespace lift_0046E450 {
extern void ext_00610A60();
extern void ext_0046C3C0();
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk forwarding to MSVCR80!_CxxThrowException.)
extern void ext_006A6DD2();
extern int mem_009DEC1C;

// @name ReadWriteMethodType<ImageExporter,bool,getUseRenderer,bool,setUseRenderer>::vfunc_41
// @class ExprParser::ReadWriteMethodType<ImageExporter, bool, {public: bool __thiscall ImageExporter::getUseRenderer(void) const, 0}, bool, {public: void __thiscall ImageExporter::setUseRenderer(bool), 0}>
// @summary Forwards arg2's sub-object result into the target held by arg1; throws if arg1's target is null.
// @field ExprParser::ReadWriteMethodType<ImageExporter, bool, {public: bool __thiscall ImageExporter::getUseRenderer(void) const, 0}, bool, {public: void __thiscall ImageExporter::setUseRenderer(bool), 0}> +0x00 void* field_0x00
// @field ExprParser::ReadWriteMethodType<ImageExporter, bool, {public: bool __thiscall ImageExporter::getUseRenderer(void) const, 0}, bool, {public: void __thiscall ImageExporter::setUseRenderer(bool), 0}> +0x04 void* field_0x04
void fn_0061B910(void* arg1, void* arg2) {
    // arg1 is a pointer to a slot whose value is the target object pointer.
    void* target = *static_cast<void**>(arg1);
    if (target == nullptr) {
        // Null target: construct the exception in place at &arg1 and throw it.
        using InitFn = void (*)(void*);
        reinterpret_cast<InitFn>(&ext_0046C3C0)(&arg1);
        using ThrowFn = void (*)(void*, void*);
        reinterpret_cast<ThrowFn>(&ext_006A6DD2)(&arg1, &mem_009DEC1C);
        return;
    }

    // sub = arg2->field_0x04; r = sub->vtable[0x0c](sub, arg2)
    void* sub = lift_field<void*>(arg2, 0x04);
    void* vt = lift_field<void*>(sub, 0x00);
    using VFn = uint32_t (*)(void* self, void* arg);
    VFn vcall = reinterpret_cast<VFn>(lift_field<void*>(vt, 0x0c));
    uint32_t r = vcall(sub, arg2);

    // sub_0046C2D0(target, r)
    using SetFn = void (*)(void* self, uint32_t value);
    reinterpret_cast<SetFn>(&ext_00610A60)(target, r);
}
} // namespace lift_0046E450
} // namespace lift_0061B910

// [0x0061C8C0] ExprParser::ReadWriteMethodType<NMData::PrimaryTwistAndSwingConstraint, bool, {private: bool __thiscall NMData::PrimaryTwistAndSwingConstraint::isSwingEnabled(void) const, 0}, bool, {private: void __thiscall NMData::PrimaryTwistAndSwingConstraint::setIsSwingEnabled(bool), 0}>::vfunc_41 (68 bytes)
namespace lift_0061C8C0 {
// @name ExprParser::ReadWriteMethodType<NMData::PrimaryTwistAndSwingConstraint, bool, {private: bool __thiscall NMData::PrimaryTwistAndSwingConstraint::isSwingEnabled(void) const, 0}, bool, {private: void __thiscall NMData::PrimaryTwistAndSwingConstraint::setIsSwingEnabled(bool), 0}>::vfunc_41
// @class ExprParser::ReadWriteMethodType<NMData::PrimaryTwistAndSwingConstraint, bool, {private: bool __thiscall NMData::PrimaryTwistAndSwingConstraint::isSwingEnabled(void) const, 0}, bool, {private: void __thiscall NMData::PrimaryTwistAndSwingConstraint::setIsSwingEnabled(bool), 0}>
// @summary Auto-lifted identical-shape clone of 0x0046E450 (ExprParser::ReadWriteMethodType<DoubleWithProperties>::vfunc_41 (DoubleWithProperties::getValue)).
namespace lift_0046E450 {
extern void ext_00610AB0();
extern void ext_0046C3C0();
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk forwarding to MSVCR80!_CxxThrowException.)
extern void ext_006A6DD2();
extern int mem_009DEC1C;

// @name ReadWriteMethodType<ImageExporter,bool,getUseRenderer,bool,setUseRenderer>::vfunc_41
// @class ExprParser::ReadWriteMethodType<ImageExporter, bool, {public: bool __thiscall ImageExporter::getUseRenderer(void) const, 0}, bool, {public: void __thiscall ImageExporter::setUseRenderer(bool), 0}>
// @summary Forwards arg2's sub-object result into the target held by arg1; throws if arg1's target is null.
// @field ExprParser::ReadWriteMethodType<ImageExporter, bool, {public: bool __thiscall ImageExporter::getUseRenderer(void) const, 0}, bool, {public: void __thiscall ImageExporter::setUseRenderer(bool), 0}> +0x00 void* field_0x00
// @field ExprParser::ReadWriteMethodType<ImageExporter, bool, {public: bool __thiscall ImageExporter::getUseRenderer(void) const, 0}, bool, {public: void __thiscall ImageExporter::setUseRenderer(bool), 0}> +0x04 void* field_0x04
void fn_0061C8C0(void* arg1, void* arg2) {
    // arg1 is a pointer to a slot whose value is the target object pointer.
    void* target = *static_cast<void**>(arg1);
    if (target == nullptr) {
        // Null target: construct the exception in place at &arg1 and throw it.
        using InitFn = void (*)(void*);
        reinterpret_cast<InitFn>(&ext_0046C3C0)(&arg1);
        using ThrowFn = void (*)(void*, void*);
        reinterpret_cast<ThrowFn>(&ext_006A6DD2)(&arg1, &mem_009DEC1C);
        return;
    }

    // sub = arg2->field_0x04; r = sub->vtable[0x0c](sub, arg2)
    void* sub = lift_field<void*>(arg2, 0x04);
    void* vt = lift_field<void*>(sub, 0x00);
    using VFn = uint32_t (*)(void* self, void* arg);
    VFn vcall = reinterpret_cast<VFn>(lift_field<void*>(vt, 0x0c));
    uint32_t r = vcall(sub, arg2);

    // sub_0046C2D0(target, r)
    using SetFn = void (*)(void* self, uint32_t value);
    reinterpret_cast<SetFn>(&ext_00610AB0)(target, r);
}
} // namespace lift_0046E450
} // namespace lift_0061C8C0

// [0x0061CCA0] ExprParser::ReadWriteMethodType<NMData::PrimaryTwistAndSwingConstraint, bool, {private: bool __thiscall NMData::PrimaryTwistAndSwingConstraint::isLinearEnabled(void) const, 0}, bool, {private: void __thiscall NMData::PrimaryTwistAndSwingConstraint::setIsLinearEnabled(bool), 0}>::vfunc_41 (68 bytes)
namespace lift_0061CCA0 {
// @name ExprParser::ReadWriteMethodType<NMData::PrimaryTwistAndSwingConstraint, bool, {private: bool __thiscall NMData::PrimaryTwistAndSwingConstraint::isLinearEnabled(void) const, 0}, bool, {private: void __thiscall NMData::PrimaryTwistAndSwingConstraint::setIsLinearEnabled(bool), 0}>::vfunc_41
// @class ExprParser::ReadWriteMethodType<NMData::PrimaryTwistAndSwingConstraint, bool, {private: bool __thiscall NMData::PrimaryTwistAndSwingConstraint::isLinearEnabled(void) const, 0}, bool, {private: void __thiscall NMData::PrimaryTwistAndSwingConstraint::setIsLinearEnabled(bool), 0}>
// @summary Auto-lifted identical-shape clone of 0x0046E450 (ExprParser::ReadWriteMethodType<DoubleWithProperties>::vfunc_41 (DoubleWithProperties::getValue)).
namespace lift_0046E450 {
extern void ext_00610AD0();
extern void ext_0046C3C0();
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk forwarding to MSVCR80!_CxxThrowException.)
extern void ext_006A6DD2();
extern int mem_009DEC1C;

// @name ReadWriteMethodType<ImageExporter,bool,getUseRenderer,bool,setUseRenderer>::vfunc_41
// @class ExprParser::ReadWriteMethodType<ImageExporter, bool, {public: bool __thiscall ImageExporter::getUseRenderer(void) const, 0}, bool, {public: void __thiscall ImageExporter::setUseRenderer(bool), 0}>
// @summary Forwards arg2's sub-object result into the target held by arg1; throws if arg1's target is null.
// @field ExprParser::ReadWriteMethodType<ImageExporter, bool, {public: bool __thiscall ImageExporter::getUseRenderer(void) const, 0}, bool, {public: void __thiscall ImageExporter::setUseRenderer(bool), 0}> +0x00 void* field_0x00
// @field ExprParser::ReadWriteMethodType<ImageExporter, bool, {public: bool __thiscall ImageExporter::getUseRenderer(void) const, 0}, bool, {public: void __thiscall ImageExporter::setUseRenderer(bool), 0}> +0x04 void* field_0x04
void fn_0061CCA0(void* arg1, void* arg2) {
    // arg1 is a pointer to a slot whose value is the target object pointer.
    void* target = *static_cast<void**>(arg1);
    if (target == nullptr) {
        // Null target: construct the exception in place at &arg1 and throw it.
        using InitFn = void (*)(void*);
        reinterpret_cast<InitFn>(&ext_0046C3C0)(&arg1);
        using ThrowFn = void (*)(void*, void*);
        reinterpret_cast<ThrowFn>(&ext_006A6DD2)(&arg1, &mem_009DEC1C);
        return;
    }

    // sub = arg2->field_0x04; r = sub->vtable[0x0c](sub, arg2)
    void* sub = lift_field<void*>(arg2, 0x04);
    void* vt = lift_field<void*>(sub, 0x00);
    using VFn = uint32_t (*)(void* self, void* arg);
    VFn vcall = reinterpret_cast<VFn>(lift_field<void*>(vt, 0x0c));
    uint32_t r = vcall(sub, arg2);

    // sub_0046C2D0(target, r)
    using SetFn = void (*)(void* self, uint32_t value);
    reinterpret_cast<SetFn>(&ext_00610AD0)(target, r);
}
} // namespace lift_0046E450
} // namespace lift_0061CCA0

// [0x00632FF0] ExprParser::ReadWriteMethodType<EffectorSkeletal, int, &public: int __thiscall EffectorSkeletal::getAngularDriveMode(void) const, int, &public: void __thiscall EffectorSkeletal::setAngularDriveMode(int)>::vfunc_41 (68 bytes)
namespace lift_00632FF0 {
// @name ExprParser::ReadWriteMethodType<EffectorSkeletal, int, &public: int __thiscall EffectorSkeletal::getAngularDriveMode(void) const, int, &public: void __thiscall EffectorSkeletal::setAngularDriveMode(int)>::vfunc_41
// @class ExprParser::ReadWriteMethodType<EffectorSkeletal, int, &public: int __thiscall EffectorSkeletal::getAngularDriveMode(void) const, int, &public: void __thiscall EffectorSkeletal::setAngularDriveMode(int)>
// @summary Auto-lifted identical-shape clone of 0x0046EA50 (ExprParser::ReadWriteMethodType<DoubleWithProperties>::vfunc_41 (DoubleWithProperties::getValue)).
namespace lift_0046EA50 {
extern void ext_00630370();
extern void ext_0046C3C0();
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk forwarding to MSVCR80!_CxxThrowException.)
extern void ext_006A6DD2();
extern int mem_009DEC1C;

// @name ReadWriteMethodType_ImageExporter_EndFrame_vfunc_41
// @class ExprParser::ReadWriteMethodType<ImageExporter, int, {public: int __thiscall ImageExporter::getEndFrame(void) const, 0}, int, {public: void __thiscall ImageExporter::setEndFrame(int), 0}>
// @summary Reads an int from the context via its virtual getter (slot 2 of the sub-object vtable) and forwards it to the bound target's setter; throws if the target is null.
// @field ValuePtrType +0x00 void* field_0x00
// @field ExprParser::ReadWriteMethodType +0x04 void* field_0x04
struct ValuePtrTypeLite {
    void* field_0x00; // target object (set via ecx in ReadWriteMethodType setter)
};

// Callee signatures (both thiscall in the original binary; modeled as plain C functions here).
using SetterFn = void (*)(void* self, int value);
using VirtualGetFn = int (*)(void* self, void* ctx);

void fn_00632FF0(ValuePtrTypeLite* self, void* ctx) {
    void* target = self->field_0x00;
    if (target != nullptr) {
        // ctx+0x04 is the sub-object whose vtable slot 2 produces the value.
        void** subObj = reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(ctx) + 0x04);
        void* sub = *subObj;
        void** vtbl = *reinterpret_cast<void***>(sub);
        auto getter = reinterpret_cast<VirtualGetFn>(vtbl[2]);
        int value = getter(sub, ctx);
        reinterpret_cast<SetterFn>(ext_00630370)(target, value);
        return;
    }
    // Null target: construct exception via helper and throw through the CRT thunk.
    reinterpret_cast<void (*)(void*)>(ext_0046C3C0)(&self);
    (void)mem_009DEC1C;
    ext_006A6DD2();
}
} // namespace lift_0046EA50
} // namespace lift_00632FF0

// [0x00633040] ExprParser::ReadWriteMethodType<EffectorSkeletal, int, &public: int __thiscall EffectorSkeletal::getLinearDriveMode(void) const, int, &public: void __thiscall EffectorSkeletal::setLinearDriveMode(int)>::vfunc_41 (68 bytes)
namespace lift_00633040 {
// @name ExprParser::ReadWriteMethodType<EffectorSkeletal, int, &public: int __thiscall EffectorSkeletal::getLinearDriveMode(void) const, int, &public: void __thiscall EffectorSkeletal::setLinearDriveMode(int)>::vfunc_41
// @class ExprParser::ReadWriteMethodType<EffectorSkeletal, int, &public: int __thiscall EffectorSkeletal::getLinearDriveMode(void) const, int, &public: void __thiscall EffectorSkeletal::setLinearDriveMode(int)>
// @summary Auto-lifted identical-shape clone of 0x0046EA50 (ExprParser::ReadWriteMethodType<DoubleWithProperties>::vfunc_41 (DoubleWithProperties::getValue)).
namespace lift_0046EA50 {
extern void ext_00630380();
extern void ext_0046C3C0();
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk forwarding to MSVCR80!_CxxThrowException.)
extern void ext_006A6DD2();
extern int mem_009DEC1C;

// @name ReadWriteMethodType_ImageExporter_EndFrame_vfunc_41
// @class ExprParser::ReadWriteMethodType<ImageExporter, int, {public: int __thiscall ImageExporter::getEndFrame(void) const, 0}, int, {public: void __thiscall ImageExporter::setEndFrame(int), 0}>
// @summary Reads an int from the context via its virtual getter (slot 2 of the sub-object vtable) and forwards it to the bound target's setter; throws if the target is null.
// @field ValuePtrType +0x00 void* field_0x00
// @field ExprParser::ReadWriteMethodType +0x04 void* field_0x04
struct ValuePtrTypeLite {
    void* field_0x00; // target object (set via ecx in ReadWriteMethodType setter)
};

// Callee signatures (both thiscall in the original binary; modeled as plain C functions here).
using SetterFn = void (*)(void* self, int value);
using VirtualGetFn = int (*)(void* self, void* ctx);

void fn_00633040(ValuePtrTypeLite* self, void* ctx) {
    void* target = self->field_0x00;
    if (target != nullptr) {
        // ctx+0x04 is the sub-object whose vtable slot 2 produces the value.
        void** subObj = reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(ctx) + 0x04);
        void* sub = *subObj;
        void** vtbl = *reinterpret_cast<void***>(sub);
        auto getter = reinterpret_cast<VirtualGetFn>(vtbl[2]);
        int value = getter(sub, ctx);
        reinterpret_cast<SetterFn>(ext_00630380)(target, value);
        return;
    }
    // Null target: construct exception via helper and throw through the CRT thunk.
    reinterpret_cast<void (*)(void*)>(ext_0046C3C0)(&self);
    (void)mem_009DEC1C;
    ext_006A6DD2();
}
} // namespace lift_0046EA50
} // namespace lift_00633040

// [0x00642040] ExprParser::ReadWriteMethodType<MainPhysicsAdapter, bool, {public: bool __thiscall MainPhysicsAdapter::isDebugDrawEnabled(void) const, 0}, bool, {public: void __thiscall MainPhysicsAdapter::setIsDebugDrawEnabled(bool), 0}>::vfunc_41 (68 bytes)
namespace lift_00642040 {
// @name ExprParser::ReadWriteMethodType<MainPhysicsAdapter, bool, {public: bool __thiscall MainPhysicsAdapter::isDebugDrawEnabled(void) const, 0}, bool, {public: void __thiscall MainPhysicsAdapter::setIsDebugDrawEnabled(bool), 0}>::vfunc_41
// @class ExprParser::ReadWriteMethodType<MainPhysicsAdapter, bool, {public: bool __thiscall MainPhysicsAdapter::isDebugDrawEnabled(void) const, 0}, bool, {public: void __thiscall MainPhysicsAdapter::setIsDebugDrawEnabled(bool), 0}>
// @summary Auto-lifted identical-shape clone of 0x0046E450 (ExprParser::ReadWriteMethodType<DoubleWithProperties>::vfunc_41 (DoubleWithProperties::getValue)).
namespace lift_0046E450 {
extern void ext_00641FA0();
extern void ext_0046C3C0();
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk forwarding to MSVCR80!_CxxThrowException.)
extern void ext_006A6DD2();
extern int mem_009DEC1C;

// @name ReadWriteMethodType<ImageExporter,bool,getUseRenderer,bool,setUseRenderer>::vfunc_41
// @class ExprParser::ReadWriteMethodType<ImageExporter, bool, {public: bool __thiscall ImageExporter::getUseRenderer(void) const, 0}, bool, {public: void __thiscall ImageExporter::setUseRenderer(bool), 0}>
// @summary Forwards arg2's sub-object result into the target held by arg1; throws if arg1's target is null.
// @field ExprParser::ReadWriteMethodType<ImageExporter, bool, {public: bool __thiscall ImageExporter::getUseRenderer(void) const, 0}, bool, {public: void __thiscall ImageExporter::setUseRenderer(bool), 0}> +0x00 void* field_0x00
// @field ExprParser::ReadWriteMethodType<ImageExporter, bool, {public: bool __thiscall ImageExporter::getUseRenderer(void) const, 0}, bool, {public: void __thiscall ImageExporter::setUseRenderer(bool), 0}> +0x04 void* field_0x04
void fn_00642040(void* arg1, void* arg2) {
    // arg1 is a pointer to a slot whose value is the target object pointer.
    void* target = *static_cast<void**>(arg1);
    if (target == nullptr) {
        // Null target: construct the exception in place at &arg1 and throw it.
        using InitFn = void (*)(void*);
        reinterpret_cast<InitFn>(&ext_0046C3C0)(&arg1);
        using ThrowFn = void (*)(void*, void*);
        reinterpret_cast<ThrowFn>(&ext_006A6DD2)(&arg1, &mem_009DEC1C);
        return;
    }

    // sub = arg2->field_0x04; r = sub->vtable[0x0c](sub, arg2)
    void* sub = lift_field<void*>(arg2, 0x04);
    void* vt = lift_field<void*>(sub, 0x00);
    using VFn = uint32_t (*)(void* self, void* arg);
    VFn vcall = reinterpret_cast<VFn>(lift_field<void*>(vt, 0x0c));
    uint32_t r = vcall(sub, arg2);

    // sub_0046C2D0(target, r)
    using SetFn = void (*)(void* self, uint32_t value);
    reinterpret_cast<SetFn>(&ext_00641FA0)(target, r);
}
} // namespace lift_0046E450
} // namespace lift_00642040

// [0x006429E0] ExprParser::ReadWriteMethodType<MainPhysicsAdapter, bool, {public: bool __thiscall MainPhysicsAdapter::isDrawContactsEnabled(void) const, 0}, bool, {public: void __thiscall MainPhysicsAdapter::setIsDrawContactsEnabled(bool), 0}>::vfunc_41 (68 bytes)
namespace lift_006429E0 {
// @name ExprParser::ReadWriteMethodType<MainPhysicsAdapter, bool, {public: bool __thiscall MainPhysicsAdapter::isDrawContactsEnabled(void) const, 0}, bool, {public: void __thiscall MainPhysicsAdapter::setIsDrawContactsEnabled(bool), 0}>::vfunc_41
// @class ExprParser::ReadWriteMethodType<MainPhysicsAdapter, bool, {public: bool __thiscall MainPhysicsAdapter::isDrawContactsEnabled(void) const, 0}, bool, {public: void __thiscall MainPhysicsAdapter::setIsDrawContactsEnabled(bool), 0}>
// @summary Auto-lifted identical-shape clone of 0x0046E450 (ExprParser::ReadWriteMethodType<DoubleWithProperties>::vfunc_41 (DoubleWithProperties::getValue)).
namespace lift_0046E450 {
extern void ext_00642390();
extern void ext_0046C3C0();
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk forwarding to MSVCR80!_CxxThrowException.)
extern void ext_006A6DD2();
extern int mem_009DEC1C;

// @name ReadWriteMethodType<ImageExporter,bool,getUseRenderer,bool,setUseRenderer>::vfunc_41
// @class ExprParser::ReadWriteMethodType<ImageExporter, bool, {public: bool __thiscall ImageExporter::getUseRenderer(void) const, 0}, bool, {public: void __thiscall ImageExporter::setUseRenderer(bool), 0}>
// @summary Forwards arg2's sub-object result into the target held by arg1; throws if arg1's target is null.
// @field ExprParser::ReadWriteMethodType<ImageExporter, bool, {public: bool __thiscall ImageExporter::getUseRenderer(void) const, 0}, bool, {public: void __thiscall ImageExporter::setUseRenderer(bool), 0}> +0x00 void* field_0x00
// @field ExprParser::ReadWriteMethodType<ImageExporter, bool, {public: bool __thiscall ImageExporter::getUseRenderer(void) const, 0}, bool, {public: void __thiscall ImageExporter::setUseRenderer(bool), 0}> +0x04 void* field_0x04
void fn_006429E0(void* arg1, void* arg2) {
    // arg1 is a pointer to a slot whose value is the target object pointer.
    void* target = *static_cast<void**>(arg1);
    if (target == nullptr) {
        // Null target: construct the exception in place at &arg1 and throw it.
        using InitFn = void (*)(void*);
        reinterpret_cast<InitFn>(&ext_0046C3C0)(&arg1);
        using ThrowFn = void (*)(void*, void*);
        reinterpret_cast<ThrowFn>(&ext_006A6DD2)(&arg1, &mem_009DEC1C);
        return;
    }

    // sub = arg2->field_0x04; r = sub->vtable[0x0c](sub, arg2)
    void* sub = lift_field<void*>(arg2, 0x04);
    void* vt = lift_field<void*>(sub, 0x00);
    using VFn = uint32_t (*)(void* self, void* arg);
    VFn vcall = reinterpret_cast<VFn>(lift_field<void*>(vt, 0x0c));
    uint32_t r = vcall(sub, arg2);

    // sub_0046C2D0(target, r)
    using SetFn = void (*)(void* self, uint32_t value);
    reinterpret_cast<SetFn>(&ext_00642390)(target, r);
}
} // namespace lift_0046E450
} // namespace lift_006429E0

// [0x00642D20] ExprParser::ReadWriteMethodType<MainPhysicsAdapter, bool, {public: bool __thiscall MainPhysicsAdapter::isDrawContactForcesEnabled(void) const, 0}, bool, {public: void __thiscall MainPhysicsAdapter::setIsDrawContactForcesEnabled(bool), 0}>::vfunc_41 (68 bytes)
namespace lift_00642D20 {
// @name ExprParser::ReadWriteMethodType<MainPhysicsAdapter, bool, {public: bool __thiscall MainPhysicsAdapter::isDrawContactForcesEnabled(void) const, 0}, bool, {public: void __thiscall MainPhysicsAdapter::setIsDrawContactForcesEnabled(bool), 0}>::vfunc_41
// @class ExprParser::ReadWriteMethodType<MainPhysicsAdapter, bool, {public: bool __thiscall MainPhysicsAdapter::isDrawContactForcesEnabled(void) const, 0}, bool, {public: void __thiscall MainPhysicsAdapter::setIsDrawContactForcesEnabled(bool), 0}>
// @summary Auto-lifted identical-shape clone of 0x0046E450 (ExprParser::ReadWriteMethodType<DoubleWithProperties>::vfunc_41 (DoubleWithProperties::getValue)).
namespace lift_0046E450 {
extern void ext_006423B0();
extern void ext_0046C3C0();
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk forwarding to MSVCR80!_CxxThrowException.)
extern void ext_006A6DD2();
extern int mem_009DEC1C;

// @name ReadWriteMethodType<ImageExporter,bool,getUseRenderer,bool,setUseRenderer>::vfunc_41
// @class ExprParser::ReadWriteMethodType<ImageExporter, bool, {public: bool __thiscall ImageExporter::getUseRenderer(void) const, 0}, bool, {public: void __thiscall ImageExporter::setUseRenderer(bool), 0}>
// @summary Forwards arg2's sub-object result into the target held by arg1; throws if arg1's target is null.
// @field ExprParser::ReadWriteMethodType<ImageExporter, bool, {public: bool __thiscall ImageExporter::getUseRenderer(void) const, 0}, bool, {public: void __thiscall ImageExporter::setUseRenderer(bool), 0}> +0x00 void* field_0x00
// @field ExprParser::ReadWriteMethodType<ImageExporter, bool, {public: bool __thiscall ImageExporter::getUseRenderer(void) const, 0}, bool, {public: void __thiscall ImageExporter::setUseRenderer(bool), 0}> +0x04 void* field_0x04
void fn_00642D20(void* arg1, void* arg2) {
    // arg1 is a pointer to a slot whose value is the target object pointer.
    void* target = *static_cast<void**>(arg1);
    if (target == nullptr) {
        // Null target: construct the exception in place at &arg1 and throw it.
        using InitFn = void (*)(void*);
        reinterpret_cast<InitFn>(&ext_0046C3C0)(&arg1);
        using ThrowFn = void (*)(void*, void*);
        reinterpret_cast<ThrowFn>(&ext_006A6DD2)(&arg1, &mem_009DEC1C);
        return;
    }

    // sub = arg2->field_0x04; r = sub->vtable[0x0c](sub, arg2)
    void* sub = lift_field<void*>(arg2, 0x04);
    void* vt = lift_field<void*>(sub, 0x00);
    using VFn = uint32_t (*)(void* self, void* arg);
    VFn vcall = reinterpret_cast<VFn>(lift_field<void*>(vt, 0x0c));
    uint32_t r = vcall(sub, arg2);

    // sub_0046C2D0(target, r)
    using SetFn = void (*)(void* self, uint32_t value);
    reinterpret_cast<SetFn>(&ext_006423B0)(target, r);
}
} // namespace lift_0046E450
} // namespace lift_00642D20

// [0x00643060] ExprParser::ReadWriteMethodType<MainPhysicsAdapter, bool, {public: bool __thiscall MainPhysicsAdapter::isDrawAABBSEnabled(void) const, 0}, bool, {public: void __thiscall MainPhysicsAdapter::setIsDrawAABBSEnabled(bool), 0}>::vfunc_41 (68 bytes)
namespace lift_00643060 {
// @name ExprParser::ReadWriteMethodType<MainPhysicsAdapter, bool, {public: bool __thiscall MainPhysicsAdapter::isDrawAABBSEnabled(void) const, 0}, bool, {public: void __thiscall MainPhysicsAdapter::setIsDrawAABBSEnabled(bool), 0}>::vfunc_41
// @class ExprParser::ReadWriteMethodType<MainPhysicsAdapter, bool, {public: bool __thiscall MainPhysicsAdapter::isDrawAABBSEnabled(void) const, 0}, bool, {public: void __thiscall MainPhysicsAdapter::setIsDrawAABBSEnabled(bool), 0}>
// @summary Auto-lifted identical-shape clone of 0x0046E450 (ExprParser::ReadWriteMethodType<DoubleWithProperties>::vfunc_41 (DoubleWithProperties::getValue)).
namespace lift_0046E450 {
extern void ext_006423D0();
extern void ext_0046C3C0();
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk forwarding to MSVCR80!_CxxThrowException.)
extern void ext_006A6DD2();
extern int mem_009DEC1C;

// @name ReadWriteMethodType<ImageExporter,bool,getUseRenderer,bool,setUseRenderer>::vfunc_41
// @class ExprParser::ReadWriteMethodType<ImageExporter, bool, {public: bool __thiscall ImageExporter::getUseRenderer(void) const, 0}, bool, {public: void __thiscall ImageExporter::setUseRenderer(bool), 0}>
// @summary Forwards arg2's sub-object result into the target held by arg1; throws if arg1's target is null.
// @field ExprParser::ReadWriteMethodType<ImageExporter, bool, {public: bool __thiscall ImageExporter::getUseRenderer(void) const, 0}, bool, {public: void __thiscall ImageExporter::setUseRenderer(bool), 0}> +0x00 void* field_0x00
// @field ExprParser::ReadWriteMethodType<ImageExporter, bool, {public: bool __thiscall ImageExporter::getUseRenderer(void) const, 0}, bool, {public: void __thiscall ImageExporter::setUseRenderer(bool), 0}> +0x04 void* field_0x04
void fn_00643060(void* arg1, void* arg2) {
    // arg1 is a pointer to a slot whose value is the target object pointer.
    void* target = *static_cast<void**>(arg1);
    if (target == nullptr) {
        // Null target: construct the exception in place at &arg1 and throw it.
        using InitFn = void (*)(void*);
        reinterpret_cast<InitFn>(&ext_0046C3C0)(&arg1);
        using ThrowFn = void (*)(void*, void*);
        reinterpret_cast<ThrowFn>(&ext_006A6DD2)(&arg1, &mem_009DEC1C);
        return;
    }

    // sub = arg2->field_0x04; r = sub->vtable[0x0c](sub, arg2)
    void* sub = lift_field<void*>(arg2, 0x04);
    void* vt = lift_field<void*>(sub, 0x00);
    using VFn = uint32_t (*)(void* self, void* arg);
    VFn vcall = reinterpret_cast<VFn>(lift_field<void*>(vt, 0x0c));
    uint32_t r = vcall(sub, arg2);

    // sub_0046C2D0(target, r)
    using SetFn = void (*)(void* self, uint32_t value);
    reinterpret_cast<SetFn>(&ext_006423D0)(target, r);
}
} // namespace lift_0046E450
} // namespace lift_00643060

// [0x006433A0] ExprParser::ReadWriteMethodType<MainPhysicsAdapter, bool, {public: bool __thiscall MainPhysicsAdapter::isDrawGeometryEnabled(void) const, 0}, bool, {public: void __thiscall MainPhysicsAdapter::setIsDrawGeometryEnabled(bool), 0}>::vfunc_41 (68 bytes)
namespace lift_006433A0 {
// @name ExprParser::ReadWriteMethodType<MainPhysicsAdapter, bool, {public: bool __thiscall MainPhysicsAdapter::isDrawGeometryEnabled(void) const, 0}, bool, {public: void __thiscall MainPhysicsAdapter::setIsDrawGeometryEnabled(bool), 0}>::vfunc_41
// @class ExprParser::ReadWriteMethodType<MainPhysicsAdapter, bool, {public: bool __thiscall MainPhysicsAdapter::isDrawGeometryEnabled(void) const, 0}, bool, {public: void __thiscall MainPhysicsAdapter::setIsDrawGeometryEnabled(bool), 0}>
// @summary Auto-lifted identical-shape clone of 0x0046E450 (ExprParser::ReadWriteMethodType<DoubleWithProperties>::vfunc_41 (DoubleWithProperties::getValue)).
namespace lift_0046E450 {
extern void ext_006423F0();
extern void ext_0046C3C0();
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk forwarding to MSVCR80!_CxxThrowException.)
extern void ext_006A6DD2();
extern int mem_009DEC1C;

// @name ReadWriteMethodType<ImageExporter,bool,getUseRenderer,bool,setUseRenderer>::vfunc_41
// @class ExprParser::ReadWriteMethodType<ImageExporter, bool, {public: bool __thiscall ImageExporter::getUseRenderer(void) const, 0}, bool, {public: void __thiscall ImageExporter::setUseRenderer(bool), 0}>
// @summary Forwards arg2's sub-object result into the target held by arg1; throws if arg1's target is null.
// @field ExprParser::ReadWriteMethodType<ImageExporter, bool, {public: bool __thiscall ImageExporter::getUseRenderer(void) const, 0}, bool, {public: void __thiscall ImageExporter::setUseRenderer(bool), 0}> +0x00 void* field_0x00
// @field ExprParser::ReadWriteMethodType<ImageExporter, bool, {public: bool __thiscall ImageExporter::getUseRenderer(void) const, 0}, bool, {public: void __thiscall ImageExporter::setUseRenderer(bool), 0}> +0x04 void* field_0x04
void fn_006433A0(void* arg1, void* arg2) {
    // arg1 is a pointer to a slot whose value is the target object pointer.
    void* target = *static_cast<void**>(arg1);
    if (target == nullptr) {
        // Null target: construct the exception in place at &arg1 and throw it.
        using InitFn = void (*)(void*);
        reinterpret_cast<InitFn>(&ext_0046C3C0)(&arg1);
        using ThrowFn = void (*)(void*, void*);
        reinterpret_cast<ThrowFn>(&ext_006A6DD2)(&arg1, &mem_009DEC1C);
        return;
    }

    // sub = arg2->field_0x04; r = sub->vtable[0x0c](sub, arg2)
    void* sub = lift_field<void*>(arg2, 0x04);
    void* vt = lift_field<void*>(sub, 0x00);
    using VFn = uint32_t (*)(void* self, void* arg);
    VFn vcall = reinterpret_cast<VFn>(lift_field<void*>(vt, 0x0c));
    uint32_t r = vcall(sub, arg2);

    // sub_0046C2D0(target, r)
    using SetFn = void (*)(void* self, uint32_t value);
    reinterpret_cast<SetFn>(&ext_006423F0)(target, r);
}
} // namespace lift_0046E450
} // namespace lift_006433A0

// [0x00643630] ExprParser::ReadWriteMethodType<MainPhysicsAdapter, bool, {public: bool __thiscall MainPhysicsAdapter::isDrawEnabledOnlyEnabled(void) const, 0}, bool, {public: void __thiscall MainPhysicsAdapter::setIsDrawEnabledOnlyEnabled(bool), 0}>::vfunc_41 (68 bytes)
namespace lift_00643630 {
// @name ExprParser::ReadWriteMethodType<MainPhysicsAdapter, bool, {public: bool __thiscall MainPhysicsAdapter::isDrawEnabledOnlyEnabled(void) const, 0}, bool, {public: void __thiscall MainPhysicsAdapter::setIsDrawEnabledOnlyEnabled(bool), 0}>::vfunc_41
// @class ExprParser::ReadWriteMethodType<MainPhysicsAdapter, bool, {public: bool __thiscall MainPhysicsAdapter::isDrawEnabledOnlyEnabled(void) const, 0}, bool, {public: void __thiscall MainPhysicsAdapter::setIsDrawEnabledOnlyEnabled(bool), 0}>
// @summary Auto-lifted identical-shape clone of 0x0046E450 (ExprParser::ReadWriteMethodType<DoubleWithProperties>::vfunc_41 (DoubleWithProperties::getValue)).
namespace lift_0046E450 {
extern void ext_00642410();
extern void ext_0046C3C0();
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk forwarding to MSVCR80!_CxxThrowException.)
extern void ext_006A6DD2();
extern int mem_009DEC1C;

// @name ReadWriteMethodType<ImageExporter,bool,getUseRenderer,bool,setUseRenderer>::vfunc_41
// @class ExprParser::ReadWriteMethodType<ImageExporter, bool, {public: bool __thiscall ImageExporter::getUseRenderer(void) const, 0}, bool, {public: void __thiscall ImageExporter::setUseRenderer(bool), 0}>
// @summary Forwards arg2's sub-object result into the target held by arg1; throws if arg1's target is null.
// @field ExprParser::ReadWriteMethodType<ImageExporter, bool, {public: bool __thiscall ImageExporter::getUseRenderer(void) const, 0}, bool, {public: void __thiscall ImageExporter::setUseRenderer(bool), 0}> +0x00 void* field_0x00
// @field ExprParser::ReadWriteMethodType<ImageExporter, bool, {public: bool __thiscall ImageExporter::getUseRenderer(void) const, 0}, bool, {public: void __thiscall ImageExporter::setUseRenderer(bool), 0}> +0x04 void* field_0x04
void fn_00643630(void* arg1, void* arg2) {
    // arg1 is a pointer to a slot whose value is the target object pointer.
    void* target = *static_cast<void**>(arg1);
    if (target == nullptr) {
        // Null target: construct the exception in place at &arg1 and throw it.
        using InitFn = void (*)(void*);
        reinterpret_cast<InitFn>(&ext_0046C3C0)(&arg1);
        using ThrowFn = void (*)(void*, void*);
        reinterpret_cast<ThrowFn>(&ext_006A6DD2)(&arg1, &mem_009DEC1C);
        return;
    }

    // sub = arg2->field_0x04; r = sub->vtable[0x0c](sub, arg2)
    void* sub = lift_field<void*>(arg2, 0x04);
    void* vt = lift_field<void*>(sub, 0x00);
    using VFn = uint32_t (*)(void* self, void* arg);
    VFn vcall = reinterpret_cast<VFn>(lift_field<void*>(vt, 0x0c));
    uint32_t r = vcall(sub, arg2);

    // sub_0046C2D0(target, r)
    using SetFn = void (*)(void* self, uint32_t value);
    reinterpret_cast<SetFn>(&ext_00642410)(target, r);
}
} // namespace lift_0046E450
} // namespace lift_00643630

// [0x0068C460] ExprParser::ReadWriteMethodType<Randomizer, int, {public: int __thiscall Randomizer::getSeed(void) const, 0}, int, {public: void __thiscall Randomizer::setSeed(int), 0}>::vfunc_41 (68 bytes)
namespace lift_0068C460 {
// @name ExprParser::ReadWriteMethodType<Randomizer, int, {public: int __thiscall Randomizer::getSeed(void) const, 0}, int, {public: void __thiscall Randomizer::setSeed(int), 0}>::vfunc_41
// @class ExprParser::ReadWriteMethodType<Randomizer, int, {public: int __thiscall Randomizer::getSeed(void) const, 0}, int, {public: void __thiscall Randomizer::setSeed(int), 0}>
// @summary Auto-lifted identical-shape clone of 0x0046EA50 (ExprParser::ReadWriteMethodType<DoubleWithProperties>::vfunc_41 (DoubleWithProperties::getValue)).
namespace lift_0046EA50 {
extern void ext_006B0C30();
extern void ext_0046C3C0();
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk forwarding to MSVCR80!_CxxThrowException.)
extern void ext_006A6DD2();
extern int mem_009DEC1C;

// @name ReadWriteMethodType_ImageExporter_EndFrame_vfunc_41
// @class ExprParser::ReadWriteMethodType<ImageExporter, int, {public: int __thiscall ImageExporter::getEndFrame(void) const, 0}, int, {public: void __thiscall ImageExporter::setEndFrame(int), 0}>
// @summary Reads an int from the context via its virtual getter (slot 2 of the sub-object vtable) and forwards it to the bound target's setter; throws if the target is null.
// @field ValuePtrType +0x00 void* field_0x00
// @field ExprParser::ReadWriteMethodType +0x04 void* field_0x04
struct ValuePtrTypeLite {
    void* field_0x00; // target object (set via ecx in ReadWriteMethodType setter)
};

// Callee signatures (both thiscall in the original binary; modeled as plain C functions here).
using SetterFn = void (*)(void* self, int value);
using VirtualGetFn = int (*)(void* self, void* ctx);

void fn_0068C460(ValuePtrTypeLite* self, void* ctx) {
    void* target = self->field_0x00;
    if (target != nullptr) {
        // ctx+0x04 is the sub-object whose vtable slot 2 produces the value.
        void** subObj = reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(ctx) + 0x04);
        void* sub = *subObj;
        void** vtbl = *reinterpret_cast<void***>(sub);
        auto getter = reinterpret_cast<VirtualGetFn>(vtbl[2]);
        int value = getter(sub, ctx);
        reinterpret_cast<SetterFn>(ext_006B0C30)(target, value);
        return;
    }
    // Null target: construct exception via helper and throw through the CRT thunk.
    reinterpret_cast<void (*)(void*)>(ext_0046C3C0)(&self);
    (void)mem_009DEC1C;
    ext_006A6DD2();
}
} // namespace lift_0046EA50
} // namespace lift_0068C460

// [0x006930E0] ExprParser::ReadWriteMethodType<ValuePtrArrayObject, int, {public: int __thiscall ValuePtrArrayObject::getSize(void) const, 0}, int, {public: void __thiscall ValuePtrArrayObject::setSize(int), 0}>::vfunc_41 (68 bytes)
namespace lift_006930E0 {
// @name ExprParser::ReadWriteMethodType<ValuePtrArrayObject, int, {public: int __thiscall ValuePtrArrayObject::getSize(void) const, 0}, int, {public: void __thiscall ValuePtrArrayObject::setSize(int), 0}>::vfunc_41
// @class ExprParser::ReadWriteMethodType<ValuePtrArrayObject, int, {public: int __thiscall ValuePtrArrayObject::getSize(void) const, 0}, int, {public: void __thiscall ValuePtrArrayObject::setSize(int), 0}>
// @summary Auto-lifted identical-shape clone of 0x0046EA50 (ExprParser::ReadWriteMethodType<DoubleWithProperties>::vfunc_41 (DoubleWithProperties::getValue)).
namespace lift_0046EA50 {
extern void ext_004EDC60();
extern void ext_0046C3C0();
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk forwarding to MSVCR80!_CxxThrowException.)
extern void ext_006A6DD2();
extern int mem_009DEC1C;

// @name ReadWriteMethodType_ImageExporter_EndFrame_vfunc_41
// @class ExprParser::ReadWriteMethodType<ImageExporter, int, {public: int __thiscall ImageExporter::getEndFrame(void) const, 0}, int, {public: void __thiscall ImageExporter::setEndFrame(int), 0}>
// @summary Reads an int from the context via its virtual getter (slot 2 of the sub-object vtable) and forwards it to the bound target's setter; throws if the target is null.
// @field ValuePtrType +0x00 void* field_0x00
// @field ExprParser::ReadWriteMethodType +0x04 void* field_0x04
struct ValuePtrTypeLite {
    void* field_0x00; // target object (set via ecx in ReadWriteMethodType setter)
};

// Callee signatures (both thiscall in the original binary; modeled as plain C functions here).
using SetterFn = void (*)(void* self, int value);
using VirtualGetFn = int (*)(void* self, void* ctx);

void fn_006930E0(ValuePtrTypeLite* self, void* ctx) {
    void* target = self->field_0x00;
    if (target != nullptr) {
        // ctx+0x04 is the sub-object whose vtable slot 2 produces the value.
        void** subObj = reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(ctx) + 0x04);
        void* sub = *subObj;
        void** vtbl = *reinterpret_cast<void***>(sub);
        auto getter = reinterpret_cast<VirtualGetFn>(vtbl[2]);
        int value = getter(sub, ctx);
        reinterpret_cast<SetterFn>(ext_004EDC60)(target, value);
        return;
    }
    // Null target: construct exception via helper and throw through the CRT thunk.
    reinterpret_cast<void (*)(void*)>(ext_0046C3C0)(&self);
    (void)mem_009DEC1C;
    ext_006A6DD2();
}
} // namespace lift_0046EA50
} // namespace lift_006930E0

// [0x004A26F0] ExprParser::ReadWriteMethodType<StateMachineEditor::FSMEditView, int, {public: int __thiscall StateMachineEditor::FSMEditView::getFontSize(void) const, 0}, int, {public: void __thiscall StateMachineEditor::FSMEditView::setFontSize(int), 0}>::vfunc_41 (68 bytes)
namespace lift_004A26F0 {
extern void ext_004A2500();
extern void ext_0046C3C0();
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk forwarding to MSVCR80!_CxxThrowException.)
extern void ext_006A6DD2();

// @name ExprParser::ReadWriteMethodType<StateMachineEditor::FSMEditView>::vfunc_41 (FSMEditView::getFontSize -> setFontSize)
// @class ExprParser::ReadWriteMethodType<StateMachineEditor::FSMEditView, int, {public: int __thiscall StateMachineEditor::FSMEditView::getFontSize(void) const, 0}, int, {public: void __thiscall StateMachineEditor::FSMEditView::setFontSize(int), 0}>
// @summary Reads an int from the source's inner getter (vtable slot 2) and forwards it to the target's setter (sub_004A2500); throws if the target pointer is null.
// @field ExprParser::ValuePtrType +0x00 void* field_0x00
// @field ExprParser::ReadWriteMethodType +0x04 void* field_0x04
void fn_004A26F0(void* dst, void* src) {
    // dst +0x00: pointer to the target object whose setter is invoked. Null is an error.
    void* target = *reinterpret_cast<void**>(dst);
    if (target == nullptr) {
        // The original calls sub_0046C3C0 and then throws via _CxxThrowException (type 0x009DEC1C).
        // No portable equivalent of that exact MSVC exception type exists.
        throw std::runtime_error("ReadWriteMethodType: null FSMEditView target");
    }

    // src +0x04: inner accessor object; its vtable slot 2 (+0x08) takes src and returns the int value.
    void* accessor = *reinterpret_cast<void**>(static_cast<std::uint8_t*>(src) + 0x04);
    void** vtbl = *reinterpret_cast<void***>(accessor);
    using GetFn = std::int32_t(__thiscall*)(void* self, void* arg);
    GetFn get = reinterpret_cast<GetFn>(vtbl[2]);
    const std::int32_t value = get(accessor, src);

    // Forward to the setter sub_004A2500 (thiscall on target, one int argument).
    using SetFn = void(__thiscall*)(void* self, std::int32_t v);
    SetFn set = reinterpret_cast<SetFn>(ext_004A2500);
    set(target, value);
}
} // namespace lift_004A26F0

// [0x004A2630] ExprParser::ReadWriteMethodType<...>::vfunc_41 (68 bytes)
namespace lift_004A2630 {
extern void ext_004A24E0(uint32_t self, uint32_t value);   // FSMEditView::setDrawConditions (thiscall, 1 arg)
extern void ext_0046C3C0(uint32_t self);                    // exception object constructor (thiscall)
extern void ext_006A6DD2(uint32_t exc, uint32_t throw_info); // thunk_MSVCR80__CxxThrowException
extern const uint8_t mem_009DEC1C[];                        // RTTI throw info for the exception

// Thiscall virtual getter, invoked through vtable slot +0x0c.
typedef uint32_t (__thiscall* GetterFn)(uint32_t self, uint32_t arg);

static inline uint32_t rd32(uint32_t addr) {
    return *reinterpret_cast<const uint32_t*>(static_cast<uintptr_t>(addr));
}

// @name ExprParser::ReadWriteMethodType<StateMachineEditor::FSMEditView>::vfunc_41
// @class ExprParser::ReadWriteMethodType<StateMachineEditor::FSMEditView, bool, drawConditions, bool, setDrawConditions>
// @summary Reads the bound FSMEditView pointer; if null throws, otherwise gets the value from the source's getter and forwards it to setDrawConditions.
// @field ExprParser::ValuePtrType +0x04 uint32_t field_0x04 (source object pointer; its vtable slot +0x0c is the getter)
void fn_004A2630(uint32_t self_ptr, uint32_t arg) {
    uint32_t target = rd32(self_ptr);
    if (target == 0) {
        uint32_t exc = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(&self_ptr));
        ext_0046C3C0(exc);
        ext_006A6DD2(exc, static_cast<uint32_t>(reinterpret_cast<uintptr_t>(mem_009DEC1C)));
        return;
    }

    uint32_t obj = rd32(arg + 0x04);
    uint32_t vtbl = rd32(obj);
    uint32_t slot = rd32(vtbl + 0x0c);
    GetterFn getter = reinterpret_cast<GetterFn>(static_cast<uintptr_t>(slot));
    uint32_t value = getter(obj, arg);

    ext_004A24E0(target, value);
}
} // namespace lift_004A2630

// [0x004A26A0] ExprParser::ReadWriteMethodType<StateMachineEditor::FSMEditView, bool, {public: bool __thiscall StateMachineEditor::FSMEditView::drawConditionNumber(void) const, 0}, bool, {public: void __thiscall StateMachineEditor::FSMEditView::setDrawConditionNumber(bool), 0}>::vfunc_41 (68 bytes)
namespace lift_004A26A0 {
extern void ext_004A24F0(void* self, uintptr_t value);
extern void ext_0046C3C0(void* self);
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk forwarding to MSVCR80!_CxxThrowException.)
extern void ext_006A6DD2(void* exc, uintptr_t throwInfo);

// @name ReadWriteMethodType<FSMEditView>::vfunc_41 (drawConditionNumber -> setDrawConditionNumber)
// @class ExprParser::ReadWriteMethodType<StateMachineEditor::FSMEditView, bool, {public: bool __thiscall StateMachineEditor::FSMEditView::drawConditionNumber(void) const, 0}, bool, {public: void __thiscall StateMachineEditor::FSMEditView::setDrawConditionNumber(bool), 0}>
// @summary Reads the bool value via the stored target pointer's inner object vtable slot 3 and forwards it to sub_004A24F0 on the target; throws if the target pointer is null.
// @field ValuePtrType +0x00 void* field_0x00
// @field UnknownArg2 +0x04 void* field_0x04
void fn_004A26A0(void* arg1, void* arg2) {
    void* self = *static_cast<void**>(arg1);
    if (self == nullptr) {
        // Null target: construct an exception object in the frame and throw.
        uint8_t exc[0x24];
        ext_0046C3C0(exc);
        ext_006A6DD2(exc, 0x009DEC1C);
        return;
    }

    uint8_t* obj = static_cast<uint8_t*>(arg2);
    void* inner = *reinterpret_cast<void**>(obj + 0x04);
    void* const* vtable = *reinterpret_cast<void* const* const*>(inner);
    using VFn = uintptr_t (*)(void*, void*);
    uintptr_t value = reinterpret_cast<VFn>(vtable[3])(inner, arg2);
    ext_004A24F0(self, value);
}
} // namespace lift_004A26A0

// [0x004B1ED0] ExprParser::ReadWriteMethodType<NMData::GraphEngineData, int, {public: int __thiscall NMData::GraphEngineData::getMinNumTimeSteps(void) const, 0}, int, {public: void __thiscall NMData::GraphEngineData::setMinNumTimeSteps(int), 0}>::vfunc_41 (68 bytes)
namespace lift_004B1ED0 {
// Setter NMData::GraphEngineData::setMinNumTimeSteps(int) (thiscall in the binary; self = target).
extern void ext_004B0EB0(void* self, int32_t value);
// Helper invoked with the address of the valuePtr parameter slot before the throw path (thiscall in the binary).
extern void ext_0046C3C0(void* self);
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk forwarding to MSVCR80!_CxxThrowException.)
// Replaced below by a portable C++ throw.

// @name ExprParser::ReadWriteMethodType<NMData::GraphEngineData>::vfunc_41
// @class ExprParser::ReadWriteMethodType<NMData::GraphEngineData, int, {public: int __thiscall NMData::GraphEngineData::getMinNumTimeSteps(void) const, 0}, int, {public: void __thiscall NMData::GraphEngineData::setMinNumTimeSteps(int), 0}>
// @summary Reads an int from the inner read-method (vtable slot 2) and writes it to the target GraphEngineData via setMinNumTimeSteps; throws if the target is null.
// @field ExprParser::ValuePtrType +0x00 void* field_0x00
// @field ExprParser::ReadWriteMethodType +0x04 void* inner
void fn_004B1ED0(void** valuePtr, void* readWrite) {
    void* target = *valuePtr;
    if (target == nullptr) {
        ext_0046C3C0(static_cast<void*>(&valuePtr));
        throw std::runtime_error("ExprParser::ReadWriteMethodType: null target object");
    }

    using ReadFn = int32_t (*)(void* self, void* ctx);
    void* inner = lift_field<void*>(readWrite, 0x4);
    void** vtbl = *reinterpret_cast<void***>(inner);
    int32_t value = reinterpret_cast<ReadFn>(vtbl[2])(inner, readWrite);

    ext_004B0EB0(target, value);
}
} // namespace lift_004B1ED0

// [0x004AA9B0] ExprParser::ReadWriteMethodType<NMData::BehaviourData,...>::vfunc_41 (68 bytes)
namespace lift_004AA9B0 {
// Callee 0x004C1710 (thiscall: ecx = self, one stack argument, callee pops 4 bytes).
extern void __thiscall ext_004C1710(void* self, uint32_t value);
// Callee 0x0046C3C0 (thiscall: ecx = exception object slot); builds the null-target exception.
extern void __thiscall ext_0046C3C0(void* self);
// IAT thunk forwarding to MSVCR80!_CxxThrowException(object, throw_info).
extern void __cdecl ext_006A6DD2(void* object, const void* throw_info);
// ThrowInfo descriptor for the exception thrown on a null target.
extern uint8_t mem_009DEC1C[];

// @name ExprParser::ReadWriteMethodType<NMData::BehaviourData>::vfunc_41
// @class ExprParser::ReadWriteMethodType<NMData::BehaviourData>
// @summary Writes a bool into BehaviourData: target = *ctx; if null throws; else value = src->vfn3(src) (src = arg2->field_0x04's vtable slot 3) and calls target->setter(value) via callee 0x004C1710.
// @field ExprParser::ReadMethodType +0x00 void* field_0x00
// @field Unknown +0x04 void* field_0x04
void __stdcall fn_004AA9B0(void* ctx, void* src) {
    void* target = lift_field<void*>(ctx, 0);
    if (target == nullptr) {
        ext_0046C3C0(&ctx);
        ext_006A6DD2(&ctx, mem_009DEC1C);
        return;
    }
    void* holder = lift_field<void*>(src, 4);
    using VFn3 = uint32_t (__thiscall*)(void*, void*);
    void** vtbl = *reinterpret_cast<void***>(holder);
    uint32_t value = reinterpret_cast<VFn3>(vtbl[3])(holder, src);
    ext_004C1710(target, value);
}
} // namespace lift_004AA9B0

// [0x005F5CC0] ExprParser::ReadWriteMethodType<HelperGraphic, NM::Vector3 const &, {public: class NM::Vector3 const & __thiscall HelperGraphic::getColour(void) const, 0}, NM::Vector3 const &, {public: void __thiscall HelperGraphic::setColour(class NM::Vector3 const &), 0}>::vfunc_41 (68 bytes)
namespace lift_005F5CC0 {
// Callee 0x005F53E0: thiscall HelperGraphic::setColour(const Vector3&) (self in ecx, one stack arg).
extern void ext_005F53E0();
// Callee 0x0046C3C0: builds the MSVC exception object in place.
extern void ext_0046C3C0(void* exc);
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk forwarding to MSVCR80!_CxxThrowException.)
extern void __stdcall ext_006A6DD2(void* pExceptionObject, uint32_t pThrowInfo);

typedef void (*SetColourFn)(void* self, const void* colour);
typedef const void* (*GetColourVFunc)(void* self, void* arg);

// @name ExprParser::ReadWriteMethodType<HelperGraphic>::vfunc_41 (HelperGraphic::getColour -> setColour)
// @class ExprParser::ReadWriteMethodType<HelperGraphic, NM::Vector3 const &, {public: class NM::Vector3 const & __thiscall HelperGraphic::getColour(void) const, 0}, NM::Vector3 const &, {public: void __thiscall HelperGraphic::setColour(class NM::Vector3 const &), 0}>
// @summary Reads a colour via the source's inner getter (vtable slot 5) and writes it into the HelperGraphic held in the target slot; throws if the target is null.
// @field ExprParser::ValuePtrType +0x00 void* target
// @field ExprParser::ReadMethodType +0x04 void* inner
void fn_005F5CC0(void** target, void* src) {
    void* helper = *target;
    if (helper != nullptr) {
        // src +0x04: inner accessor object; its vtable slot 5 (+0x14) yields the colour pointer.
        void* inner = *reinterpret_cast<void**>(static_cast<uint8_t*>(src) + 0x04);
        void** vtbl = *reinterpret_cast<void***>(inner);
        GetColourVFunc getter = reinterpret_cast<GetColourVFunc>(vtbl[5]);
        const void* colour = getter(inner, src);

        SetColourFn setter = reinterpret_cast<SetColourFn>(reinterpret_cast<void*>(ext_005F53E0));
        setter(helper, colour);
        return;
    }
    // Null target: build and throw the MSVC exception, as the original does.
    ext_0046C3C0(target);
    ext_006A6DD2(target, 0x009DEC1Cu);
}
} // namespace lift_005F5CC0

// [0x005F5DC0] ExprParser::ReadWriteMethodType<HelperGraphic, NM::Vector3 const &, {public: class NM::Vector3 const & __thiscall HelperGraphic::getPosition(void) const, 0}, NM::Vector3 const &, {public: void __thiscall HelperGraphic::setPosition(class NM::Vector3 const &), 0}>::vfunc_41 (68 bytes)
namespace lift_005F5DC0 {
// Callee 0x005F5670: thiscall HelperGraphic::setPosition(const Vector3&) (self in ecx, one stack arg).
extern void ext_005F5670();
// Callee 0x0046C3C0: builds the MSVC exception object in place.
extern void ext_0046C3C0(void* exc);
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk forwarding to MSVCR80!_CxxThrowException.)
extern void __stdcall ext_006A6DD2(void* pExceptionObject, uint32_t pThrowInfo);

typedef void (*SetPositionFn)(void* self, const void* position);
typedef const void* (*GetPositionVFunc)(void* self, void* arg);

// @name ExprParser::ReadWriteMethodType<HelperGraphic>::vfunc_41 (HelperGraphic::getPosition -> setPosition)
// @class ExprParser::ReadWriteMethodType<HelperGraphic, NM::Vector3 const &, {public: class NM::Vector3 const & __thiscall HelperGraphic::getPosition(void) const, 0}, NM::Vector3 const &, {public: void __thiscall HelperGraphic::setPosition(class NM::Vector3 const &), 0}>
// @summary Reads a position via the source's inner getter (vtable slot 5) and writes it into the HelperGraphic held in the target slot; throws if the target is null.
// @field ExprParser::ValuePtrType +0x00 void* target
// @field ExprParser::ReadMethodType +0x04 void* inner
void fn_005F5DC0(void** target, void* src) {
    void* helper = *target;
    if (helper != nullptr) {
        // src +0x04: inner accessor object; its vtable slot 5 (+0x14) yields the position pointer.
        void* inner = *reinterpret_cast<void**>(static_cast<uint8_t*>(src) + 0x04);
        void** vtbl = *reinterpret_cast<void***>(inner);
        GetPositionVFunc getter = reinterpret_cast<GetPositionVFunc>(vtbl[5]);
        const void* position = getter(inner, src);

        SetPositionFn setter = reinterpret_cast<SetPositionFn>(reinterpret_cast<void*>(ext_005F5670));
        setter(helper, position);
        return;
    }
    // Null target: build and throw the MSVC exception, as the original does.
    ext_0046C3C0(target);
    ext_006A6DD2(target, 0x009DEC1Cu);
}
} // namespace lift_005F5DC0

// [0x006332E0] ExprParser::ReadWriteMethodType<EffectorSkeletal, NM::Vector3 const &, &public: class NM::Vector3 const & __thiscall EffectorSkeletal::getDesiredTwistAndSwingVelocity(void) const, NM::Vector3 const &, &public: void __thiscall EffectorSkeletal::setDesiredTwistAndSwingVelocity(class NM::Vector3 const &)>::vfunc_41 (68 bytes)
namespace lift_006332E0 {
extern void ext_006304E0();
extern void ext_0046C3C0(void* exc);
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk forwarding to MSVCR80!_CxxThrowException.)
extern void ext_006A6DD2(void* pExceptionObject, uint32_t pThrowInfo);

// @name ExprParser::ReadWriteMethodType<EffectorSkeletal>::vfunc_41 (EffectorSkeletal::getDesiredTwistAndSwingVelocity -> setDesiredTwistAndSwingVelocity)
// @class ExprParser::ReadWriteMethodType<EffectorSkeletal, NM::Vector3 const &, &public: class NM::Vector3 const & __thiscall EffectorSkeletal::getDesiredTwistAndSwingVelocity(void) const, NM::Vector3 const &, &public: void __thiscall EffectorSkeletal::setDesiredTwistAndSwingVelocity(class NM::Vector3 const &)>
// @summary Reads a Vector3 through the source's accessor (vtable slot 5) and writes it into the target EffectorSkeletal via the setter; throws if the target is null.
// @field ExprParser::ValuePtrType +0x00 void* target
// @field ExprParser::ReadWriteMethodType +0x04 void* accessor
void fn_006332E0(void** dst, void* src) {
    // dst +0x00 holds the EffectorSkeletal target. Null means the write target is missing, which is an error.
    void* target = *dst;
    if (target == nullptr) {
        // The original throws a MSVC C++ exception here (type descriptor at 0x009DEC1C).
        // The exception object is the dst slot itself.
        ext_0046C3C0(dst);
        ext_006A6DD2(dst, 0x009DEC1Cu);
        return;
    }

    // src +0x04: accessor sub-object whose vtable slot 5 (+0x14) returns a Vector3 const*.
    void* accessor = *reinterpret_cast<void**>(static_cast<std::uint8_t*>(src) + 0x04);
    void** vtbl = *reinterpret_cast<void***>(accessor);
    using GetFn = void* (*)(void* self, void* holder);
    GetFn get = reinterpret_cast<GetFn>(vtbl[5]);
    void* value = get(accessor, src);

    // Setter at 0x006304E0 is called with the target as `this` and the Vector3 pointer as its one argument.
    using SetFn = void (*)(void* self, void* value);
    SetFn set = reinterpret_cast<SetFn>(ext_006304E0);
    set(target, value);
}
} // namespace lift_006332E0

// [0x006362D0] ExprParser::ReadWriteMethodType<EffectorSkeletal, NM::Vector3 const &, &public: class NM::Vector3 const & __thiscall EffectorSkeletal::getDesiredTwistAndSwing(void) const, NM::Vector3 const &, &public: void __thiscall EffectorSkeletal::setDesiredTwistAndSwing(class NM::Vector3 const &)>::vfunc_41 (68 bytes)
namespace lift_006362D0 {
// Known callee 0x00630E10: sub_00630E10 (EffectorSkeletal::setDesiredTwistAndSwing body, __thiscall, 1 stack arg)
extern void ext_00630E10();
// Known callee 0x0046C3C0: sub_0046C3C0 (exception object construction helper, __thiscall on local arg slot)
extern void ext_0046C3C0(void* exc);
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk forwarding to MSVCR80!_CxxThrowException.)
extern void ext_006A6DD2(void* exc, const void* throwInfo);

// Throw type-info constant referenced at 0x00636305 (push 0x9dec1c).
extern const char ext_009DEC1C[];

// @name ExprParser::ReadWriteMethodType<EffectorSkeletal>::vfunc_41 (EffectorSkeletal::getDesiredTwistAndSwing -> setDesiredTwistAndSwing)
// @class ExprParser::ReadWriteMethodType<EffectorSkeletal, NM::Vector3 const &, &public: class NM::Vector3 const & __thiscall EffectorSkeletal::getDesiredTwistAndSwing(void) const, NM::Vector3 const &, &public: void __thiscall EffectorSkeletal::setDesiredTwistAndSwing(class NM::Vector3 const &)>
// @summary Applies a Vector3 value to the bound EffectorSkeletal's desired twist/swing; throws if the bound target is null.
// @field ExprParser::ReadWriteMethodType +0x00 void* target
// @field ValuePtrType +0x04 void* field_04
void fn_006362D0(void* self, void* value) {
    // self->target (EffectorSkeletal*) at +0x00.
    void* target = lift_field<void*>(self, 0x00);
    if (target == nullptr) {
        // Null target: construct exception and throw.
        ext_0046C3C0(self);
        ext_006A6DD2(self, ext_009DEC1C);
        return;
    }

    // value->obj at +0x04; obj's vtable slot 5 (+0x14) yields the NM::Vector3 const& to apply.
    void* obj = lift_field<void*>(value, 0x04);
    void** vtable = *reinterpret_cast<void***>(obj);
    using VFn = void* (*)(void* thisPtr, void* arg);
    VFn getter = reinterpret_cast<VFn>(vtable[5]);
    void* vec = getter(obj, value);

    // Forward the Vector3 to EffectorSkeletal's setter body (sub_00630E10), with target as this.
    using SetFn = void (*)(void* thisPtr, void* arg);
    reinterpret_cast<SetFn>(ext_00630E10)(target, vec);
}
} // namespace lift_006362D0

// [0x00635740] ExprParser::ReadWriteMethodType<EffectorSkeletal, NM::Vector4 const &, &public: class NM::Vector4 const & __thiscall EffectorSkeletal::getDesiredQuat(void) const, NM::Vector4 const &, &public: void __thiscall EffectorSkeletal::setDesiredQuat(class NM::Vector4 const &)>::vfunc_41 (68 bytes)
namespace lift_00635740 {
extern void ext_00630D90();
extern void ext_0046C3C0();
extern void ext_006A6DD2();
// RTTI/throw info referenced by the null-target error path (pushed as the throw's ThrowInfo argument).
extern const char mem_009DEC1C[];

// @name ExprParser::ReadWriteMethodType<EffectorSkeletal>::vfunc_41 (EffectorSkeletal::getDesiredQuat -> setDesiredQuat)
// @class ExprParser::ReadWriteMethodType<EffectorSkeletal, NM::Vector4 const &, &public: class NM::Vector4 const & __thiscall EffectorSkeletal::getDesiredQuat(void) const, NM::Vector4 const &, &public: void __thiscall EffectorSkeletal::setDesiredQuat(class NM::Vector4 const &)>
// @summary Copies a quaternion from the source's getter sub-object (vtable slot 6) into the target EffectorSkeletal via setDesiredQuat; throws if the target pointer is null.
// @field ExprParser::ValuePtrType +0x00 EffectorSkeletal* target
// @field ExprParser::ReadMethodType +0x04 void* accessor
void fn_00635740(void* const* self, void* src) {
    // self +0x00: pointer to the EffectorSkeletal target. Null means the write target is missing.
    void* target = *self;
    if (target == nullptr) {
        // Original throws a MSVC C++ exception (type descriptor 0x009DEC1C). No portable equivalent exists.
        ext_0046C3C0();
        (void)mem_009DEC1C;
        ext_006A6DD2();
        return;
    }

    // src +0x04: accessor sub-object; its vtable slot 6 (+0x18) takes src and returns a NM::Vector4 const&.
    void* accessor = *reinterpret_cast<void**>(static_cast<std::uint8_t*>(src) + 0x04);
    void** vtbl = *reinterpret_cast<void***>(accessor);
    using GetQuatFn = const void* (*)(void* self, void* holder);
    GetQuatFn get = reinterpret_cast<GetQuatFn>(vtbl[6]);
    const void* quat = get(accessor, src);

    // Forward to EffectorSkeletal::setDesiredQuat(const Vector4&) on the target (sub_00630D90).
    using SetQuatFn = void (*)(void* self, const void* quat);
    reinterpret_cast<SetQuatFn>(&ext_00630D90)(target, quat);
}
} // namespace lift_00635740

// [0x006331F0] ExprParser::ReadWriteMethodType<EffectorSkeletal, NM::Vector3 const &, &public: class NM::Vector3 const & __thiscall EffectorSkeletal::getDesiredTwistAndSwingAngle(void) const, NM::Vector3 const &, &public: void __thiscall EffectorSkeletal::setDesiredTwistAndSwingAngle(class NM::Vector3 const &)>::vfunc_41 (68 bytes)
namespace lift_006331F0 {
// Setter: EffectorSkeletal::setDesiredTwistAndSwingAngle (thiscall, one stack argument).
extern void ext_00630480(void);
// Exception helper (sub_0046C3C0): builds the exception object in place.
extern void ext_0046C3C0(void* exc);
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk forwarding to MSVCR80!_CxxThrowException.)
extern void ext_006A6DD2(void* exc, uint32_t throwInfo);

// Getter shape: vtable slot 5 (+0x14) of the source's inner object; thiscall, one stack argument, returns NM::Vector3 const*.
typedef const void* (__thiscall* GetVector3Fn)(void* self, void* arg);
// Setter shape: thiscall, one stack argument (NM::Vector3 const*).
typedef void (__thiscall* SetVector3Fn)(void* self, const void* value);

// @name ExprParser::ReadWriteMethodType<EffectorSkeletal>::vfunc_41 (EffectorSkeletal::getDesiredTwistAndSwingAngle -> setDesiredTwistAndSwingAngle)
// @class ExprParser::ReadWriteMethodType<EffectorSkeletal, NM::Vector3 const &, &public: class NM::Vector3 const & __thiscall EffectorSkeletal::getDesiredTwistAndSwingAngle(void) const, NM::Vector3 const &, &public: void __thiscall EffectorSkeletal::setDesiredTwistAndSwingAngle(class NM::Vector3 const &)>
// @summary Reads an NM::Vector3 const& via the source's inner accessor (vtable slot 5) and forwards it to EffectorSkeletal::setDesiredTwistAndSwingAngle on the target held in *self; throws if the target is null.
// @field ValuePtrType +0x00 void* ptr
// @field ExprParser::ReadWriteMethodType +0x04 void* field_0x04
void fn_006331F0(void** self, void* src) {
    // *self: EffectorSkeletal* target. Null means the write target is missing, which is an error.
    void* target = *self;
    if (target == nullptr) {
        // The exception object is constructed in the self slot, matching the original's `lea ecx,[esp+4]`.
        ext_0046C3C0(self);
        ext_006A6DD2(self, 0x009DEC1Cu);
        return;
    }

    // src +0x04: inner accessor object; its vtable slot 5 (+0x14) produces the Vector3 const&.
    void* accessor = *reinterpret_cast<void**>(static_cast<uint8_t*>(src) + 0x04);
    void** vtbl = *reinterpret_cast<void***>(accessor);
    GetVector3Fn get = reinterpret_cast<GetVector3Fn>(vtbl[5]);
    const void* value = get(accessor, src);

    // Forward to the non-virtual setter with `target` as this.
    SetVector3Fn set = reinterpret_cast<SetVector3Fn>(&ext_00630480);
    set(target, value);
}
} // namespace lift_006331F0

// [0x00633240] ExprParser::ReadWriteMethodType<EffectorSkeletal, NM::Vector3 const &, &public: class NM::Vector3 const & __thiscall EffectorSkeletal::getDesiredTwistAndSwingAngle(void) const, NM::Vector3 const &, &public: void __thiscall EffectorSkeletal::setDesiredTwistAndSwingAngleRaw(class NM::Vector3 const &)>::vfunc_41 (68 bytes)
namespace lift_00633240 {
extern void ext_006304B0(void* self, const void* value);
extern void ext_0046C3C0(void* exc);
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk forwarding to MSVCR80!_CxxThrowException).
extern void __stdcall ext_006A6DD2(void* pExceptionObject, uint32_t pThrowInfo);

namespace lift_00633240 {

// Virtual-call shape of the source's inner getter (vtable +0x14 = slot 5): returns a Vector3 const* and takes one stack argument.
typedef const void* (__thiscall* GetVector3RefFn)(void* self, void* arg);

// @name ExprParser::ReadWriteMethodType<EffectorSkeletal>::vfunc_41 (EffectorSkeletal::getDesiredTwistAndSwingAngle -> setDesiredTwistAndSwingAngleRaw)
// @class ExprParser::ReadWriteMethodType<EffectorSkeletal, NM::Vector3 const &, &public: class NM::Vector3 const & __thiscall EffectorSkeletal::getDesiredTwistAndSwingAngle(void) const, NM::Vector3 const &, &public: void __thiscall EffectorSkeletal::setDesiredTwistAndSwingAngleRaw(class NM::Vector3 const &)>
// @summary Reads a Vector3 const& from the source's inner getter (vtable slot 5) and forwards it to EffectorSkeletal::setDesiredTwistAndSwingAngleRaw on the target; throws if the target is null.
// @field ExprParser::ValuePtrType +0x00 void* target
// @field ExprParser::ReadWriteMethodType +0x04 void* inner
extern void __stdcall fn_00633240(void* const* self, void* arg) {
    // self +0x00: EffectorSkeletal* target. Null means the write target is missing, which is an error.
    void* target = *self;
    if (target != nullptr) {
        // arg +0x04: inner object whose vtable slot 5 (+0x14) returns the Vector3 const& to store.
        void* inner = *reinterpret_cast<void* const*>(static_cast<uint8_t*>(arg) + 0x04);
        void* const* vtbl = *reinterpret_cast<void* const* const*>(inner);
        GetVector3RefFn getter = reinterpret_cast<GetVector3RefFn>(vtbl[5]);

        const void* value = getter(inner, arg);
        // Forward to EffectorSkeletal::setDesiredTwistAndSwingAngleRaw (sub_006304B0) with this = target.
        ext_006304B0(target, value);
        return;
    }

    // The original throws a MSVC C++ exception here (MSVCR80 _CxxThrowException with a
    // type descriptor at 0x009DEC1C). No portable equivalent of that exact type exists.
    alignas(16) uint8_t exc[0x28];
    ext_0046C3C0(exc);
    ext_006A6DD2(exc, 0x009DEC1Cu);
}

} // namespace lift_00633240
} // namespace lift_00633240

// [0x005853E0] ExprParser::ReadWriteMethodType<NMData::BehaviourData, bool>::vfunc_41 (69 bytes)
namespace lift_005853E0 {
// Exception-object constructor (called with `this` = caller-provided buffer).
extern void __fastcall ext_0046C3C0(void* self);
// MSVCR80 _CxxThrowException(exception object, ThrowInfo).
extern void ext_006A6DD2(void* exc, const void* throwInfo);
// RTTI ThrowInfo descriptor used when throwing.
extern const uint8_t mem_009DEC1C;

// @name ExprParser::ReadWriteMethodType<NMData::BehaviourData, bool>::vfunc_41
// @class ExprParser::ReadWriteMethodType<NMData::BehaviourData, bool>
// @summary Reads a value from the context's inner object via its vfunc_3, then writes it into the target object's +0x0C sub-object through that sub-object's vfunc_8; throws if the target pointer is null.
// @field Unknown +0x00 void* field_0x00 (target object pointer; *arg1)
// @field Unknown +0x04 void* field_0x04 (inner object of the context argument)
// @field Unknown +0x0C void* field_0x0C (sub-object that receives the value via vfunc_8)

// Thiscall shapes used here (ecx carries `this`, remaining words on the stack):
//   value getter : vtable slot 3 (offset 0x0C) on the context's inner object, takes the context.
//   value setter : vtable slot 8 (offset 0x20) on the +0x0C sub-object, takes the value.
using GetFn = uint32_t (__thiscall*)(void* self, void* ctx);
using SetFn = void (__thiscall*)(void* self, uint32_t value);

void fn_005853E0(void** target, void* ctx) {
    // esi = *target
    void* obj = *target;

    // Null target: build an exception object in a local buffer and throw it.
    if (obj == nullptr) {
        alignas(8) uint8_t excBuf[0x28] = {};
        ext_0046C3C0(excBuf);
        ext_006A6DD2(excBuf, &mem_009DEC1C);
        return;  // _CxxThrowException does not return.
    }

    // inner = ctx->+0x04; value = inner->vtbl[3](ctx)
    void* inner = lift_field<void*>(ctx, 0x04);
    void** innerVt = *static_cast<void***>(inner);
    uint32_t value = reinterpret_cast<GetFn>(innerVt[3])(inner, ctx);

    // The original tail-jumps through VirtualSlot8Thunk (ext_004AA580) with
    // ecx = obj+0x0C; that thunk is exactly vtbl[8](this, value), so it is inlined.
    void* sub = lift_field<void*>(obj, 0x0C);
    void** subVt = *static_cast<void***>(sub);
    reinterpret_cast<SetFn>(subVt[8])(sub, value);
}
} // namespace lift_005853E0

// [0x004CCB90] ExprParser::ReadWriteMethodType<NMData::MetaBodyConstraintData, NM::Vector3 const &, {public: class NM::Vector3 const & __thiscall NMData::MetaBodyConstraintData::getPositionStrengthFromFSM(void) const, 0}, NM::Vector3 const &, {public: void __thiscall NMData::MetaBodyConstraintData::setPositionStrengthFromFSM(class NM::Vector3 const &), 0}>::vfunc_41 (68 bytes)
namespace lift_004CCB90 {
// @name ExprParser::ReadWriteMethodType<NMData::MetaBodyConstraintData, NM::Vector3 const &, {public: class NM::Vector3 const & __thiscall NMData::MetaBodyConstraintData::getPositionStrengthFromFSM(void) const, 0}, NM::Vector3 const &, {public: void __thiscall NMData::MetaBodyConstraintData::setPositionStrengthFromFSM(class NM::Vector3 const &), 0}>::vfunc_41
// @class ExprParser::ReadWriteMethodType<NMData::MetaBodyConstraintData, NM::Vector3 const &, {public: class NM::Vector3 const & __thiscall NMData::MetaBodyConstraintData::getPositionStrengthFromFSM(void) const, 0}, NM::Vector3 const &, {public: void __thiscall NMData::MetaBodyConstraintData::setPositionStrengthFromFSM(class NM::Vector3 const &), 0}>
// @summary Auto-lifted identical-shape clone of 0x006362D0 (ExprParser::ReadWriteMethodType<EffectorSkeletal>::vfunc_41 (EffectorSkeletal::getDesiredTwistAndSwing -> setDesiredTwistAndSwing)).
namespace lift_006362D0 {
// Known callee 0x00630E10: sub_00630E10 (EffectorSkeletal::setDesiredTwistAndSwing body, __thiscall, 1 stack arg)
extern void ext_004CCB10();
// Known callee 0x0046C3C0: sub_0046C3C0 (exception object construction helper, __thiscall on local arg slot)
extern void ext_0046C3C0(void* exc);
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk forwarding to MSVCR80!_CxxThrowException.)
extern void ext_006A6DD2(void* exc, const void* throwInfo);

// Throw type-info constant referenced at 0x00636305 (push 0x9dec1c).
extern const char ext_009DEC1C[];

// @name ExprParser::ReadWriteMethodType<EffectorSkeletal>::vfunc_41 (EffectorSkeletal::getDesiredTwistAndSwing -> setDesiredTwistAndSwing)
// @class ExprParser::ReadWriteMethodType<EffectorSkeletal, NM::Vector3 const &, &public: class NM::Vector3 const & __thiscall EffectorSkeletal::getDesiredTwistAndSwing(void) const, NM::Vector3 const &, &public: void __thiscall EffectorSkeletal::setDesiredTwistAndSwing(class NM::Vector3 const &)>
// @summary Applies a Vector3 value to the bound EffectorSkeletal's desired twist/swing; throws if the bound target is null.
// @field ExprParser::ReadWriteMethodType +0x00 void* target
// @field ValuePtrType +0x04 void* field_04
void fn_004CCB90(void* self, void* value) {
    // self->target (EffectorSkeletal*) at +0x00.
    void* target = lift_field<void*>(self, 0x00);
    if (target == nullptr) {
        // Null target: construct exception and throw.
        ext_0046C3C0(self);
        ext_006A6DD2(self, ext_009DEC1C);
        return;
    }

    // value->obj at +0x04; obj's vtable slot 5 (+0x14) yields the NM::Vector3 const& to apply.
    void* obj = lift_field<void*>(value, 0x04);
    void** vtable = *reinterpret_cast<void***>(obj);
    using VFn = void* (*)(void* thisPtr, void* arg);
    VFn getter = reinterpret_cast<VFn>(vtable[5]);
    void* vec = getter(obj, value);

    // Forward the Vector3 to EffectorSkeletal's setter body (sub_00630E10), with target as this.
    using SetFn = void (*)(void* thisPtr, void* arg);
    reinterpret_cast<SetFn>(ext_004CCB10)(target, vec);
}
} // namespace lift_006362D0
} // namespace lift_004CCB90

// [0x004CCBE0] ExprParser::ReadWriteMethodType<NMData::MetaBodyConstraintData, NM::Vector3 const &, {public: class NM::Vector3 const & __thiscall NMData::MetaBodyConstraintData::getAngularStrengthFromFSM(void) const, 0}, NM::Vector3 const &, {public: void __thiscall NMData::MetaBodyConstraintData::setAngularStrengthFromFSM(class NM::Vector3 const &), 0}>::vfunc_41 (68 bytes)
namespace lift_004CCBE0 {
// @name ExprParser::ReadWriteMethodType<NMData::MetaBodyConstraintData, NM::Vector3 const &, {public: class NM::Vector3 const & __thiscall NMData::MetaBodyConstraintData::getAngularStrengthFromFSM(void) const, 0}, NM::Vector3 const &, {public: void __thiscall NMData::MetaBodyConstraintData::setAngularStrengthFromFSM(class NM::Vector3 const &), 0}>::vfunc_41
// @class ExprParser::ReadWriteMethodType<NMData::MetaBodyConstraintData, NM::Vector3 const &, {public: class NM::Vector3 const & __thiscall NMData::MetaBodyConstraintData::getAngularStrengthFromFSM(void) const, 0}, NM::Vector3 const &, {public: void __thiscall NMData::MetaBodyConstraintData::setAngularStrengthFromFSM(class NM::Vector3 const &), 0}>
// @summary Auto-lifted identical-shape clone of 0x006362D0 (ExprParser::ReadWriteMethodType<EffectorSkeletal>::vfunc_41 (EffectorSkeletal::getDesiredTwistAndSwing -> setDesiredTwistAndSwing)).
namespace lift_006362D0 {
// Known callee 0x00630E10: sub_00630E10 (EffectorSkeletal::setDesiredTwistAndSwing body, __thiscall, 1 stack arg)
extern void ext_004CCB50();
// Known callee 0x0046C3C0: sub_0046C3C0 (exception object construction helper, __thiscall on local arg slot)
extern void ext_0046C3C0(void* exc);
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk forwarding to MSVCR80!_CxxThrowException.)
extern void ext_006A6DD2(void* exc, const void* throwInfo);

// Throw type-info constant referenced at 0x00636305 (push 0x9dec1c).
extern const char ext_009DEC1C[];

// @name ExprParser::ReadWriteMethodType<EffectorSkeletal>::vfunc_41 (EffectorSkeletal::getDesiredTwistAndSwing -> setDesiredTwistAndSwing)
// @class ExprParser::ReadWriteMethodType<EffectorSkeletal, NM::Vector3 const &, &public: class NM::Vector3 const & __thiscall EffectorSkeletal::getDesiredTwistAndSwing(void) const, NM::Vector3 const &, &public: void __thiscall EffectorSkeletal::setDesiredTwistAndSwing(class NM::Vector3 const &)>
// @summary Applies a Vector3 value to the bound EffectorSkeletal's desired twist/swing; throws if the bound target is null.
// @field ExprParser::ReadWriteMethodType +0x00 void* target
// @field ValuePtrType +0x04 void* field_04
void fn_004CCBE0(void* self, void* value) {
    // self->target (EffectorSkeletal*) at +0x00.
    void* target = lift_field<void*>(self, 0x00);
    if (target == nullptr) {
        // Null target: construct exception and throw.
        ext_0046C3C0(self);
        ext_006A6DD2(self, ext_009DEC1C);
        return;
    }

    // value->obj at +0x04; obj's vtable slot 5 (+0x14) yields the NM::Vector3 const& to apply.
    void* obj = lift_field<void*>(value, 0x04);
    void** vtable = *reinterpret_cast<void***>(obj);
    using VFn = void* (*)(void* thisPtr, void* arg);
    VFn getter = reinterpret_cast<VFn>(vtable[5]);
    void* vec = getter(obj, value);

    // Forward the Vector3 to EffectorSkeletal's setter body (sub_00630E10), with target as this.
    using SetFn = void (*)(void* thisPtr, void* arg);
    reinterpret_cast<SetFn>(ext_004CCB50)(target, vec);
}
} // namespace lift_006362D0
} // namespace lift_004CCBE0

// [0x0051D310] ExprParser::ReadWriteMethodType<NMData::QuatChannel, NM::Vector4 const &, &public: class NM::Vector4 const & __thiscall NMData::QuatChannel::getValue(void) const, NM::Vector4 const &, &public: void __thiscall NMData::QuatChannel::setKeyFrame(class NM::Vector4 const &)>::vfunc_41 (68 bytes)
namespace lift_0051D310 {
// @name ExprParser::ReadWriteMethodType<NMData::QuatChannel, NM::Vector4 const &, &public: class NM::Vector4 const & __thiscall NMData::QuatChannel::getValue(void) const, NM::Vector4 const &, &public: void __thiscall NMData::QuatChannel::setKeyFrame(class NM::Vector4 const &)>::vfunc_41
// @class ExprParser::ReadWriteMethodType<NMData::QuatChannel, NM::Vector4 const &, &public: class NM::Vector4 const & __thiscall NMData::QuatChannel::getValue(void) const, NM::Vector4 const &, &public: void __thiscall NMData::QuatChannel::setKeyFrame(class NM::Vector4 const &)>
// @summary Auto-lifted identical-shape clone of 0x00635740 (ExprParser::ReadWriteMethodType<EffectorSkeletal>::vfunc_41 (EffectorSkeletal::getDesiredQuat -> setDesiredQuat)).
namespace lift_00635740 {
extern void ext_0051D2D0();
extern void ext_0046C3C0();
extern void ext_006A6DD2();
// RTTI/throw info referenced by the null-target error path (pushed as the throw's ThrowInfo argument).
extern const char mem_009DEC1C[];

// @name ExprParser::ReadWriteMethodType<EffectorSkeletal>::vfunc_41 (EffectorSkeletal::getDesiredQuat -> setDesiredQuat)
// @class ExprParser::ReadWriteMethodType<EffectorSkeletal, NM::Vector4 const &, &public: class NM::Vector4 const & __thiscall EffectorSkeletal::getDesiredQuat(void) const, NM::Vector4 const &, &public: void __thiscall EffectorSkeletal::setDesiredQuat(class NM::Vector4 const &)>
// @summary Copies a quaternion from the source's getter sub-object (vtable slot 6) into the target EffectorSkeletal via setDesiredQuat; throws if the target pointer is null.
// @field ExprParser::ValuePtrType +0x00 EffectorSkeletal* target
// @field ExprParser::ReadMethodType +0x04 void* accessor
void fn_0051D310(void* const* self, void* src) {
    // self +0x00: pointer to the EffectorSkeletal target. Null means the write target is missing.
    void* target = *self;
    if (target == nullptr) {
        // Original throws a MSVC C++ exception (type descriptor 0x009DEC1C). No portable equivalent exists.
        ext_0046C3C0();
        (void)mem_009DEC1C;
        ext_006A6DD2();
        return;
    }

    // src +0x04: accessor sub-object; its vtable slot 6 (+0x18) takes src and returns a NM::Vector4 const&.
    void* accessor = *reinterpret_cast<void**>(static_cast<std::uint8_t*>(src) + 0x04);
    void** vtbl = *reinterpret_cast<void***>(accessor);
    using GetQuatFn = const void* (*)(void* self, void* holder);
    GetQuatFn get = reinterpret_cast<GetQuatFn>(vtbl[6]);
    const void* quat = get(accessor, src);

    // Forward to EffectorSkeletal::setDesiredQuat(const Vector4&) on the target (sub_00630D90).
    using SetQuatFn = void (*)(void* self, const void* quat);
    reinterpret_cast<SetQuatFn>(&ext_0051D2D0)(target, quat);
}
} // namespace lift_00635740
} // namespace lift_0051D310

// [0x0058C010] ExprParser::ReadWriteMethodType<AnimatableTransform, NM::Vector4 const &, {protected: class NM::Vector4 const & __thiscall AnimatableTransform::getQuat(void) const, 0}, NM::Vector4 const &, {protected: void __thiscall AnimatableTransform::setQuat(class NM::Vector4 const &), 0}>::vfunc_41 (68 bytes)
namespace lift_0058C010 {
// @name ExprParser::ReadWriteMethodType<AnimatableTransform, NM::Vector4 const &, {protected: class NM::Vector4 const & __thiscall AnimatableTransform::getQuat(void) const, 0}, NM::Vector4 const &, {protected: void __thiscall AnimatableTransform::setQuat(class NM::Vector4 const &), 0}>::vfunc_41
// @class ExprParser::ReadWriteMethodType<AnimatableTransform, NM::Vector4 const &, {protected: class NM::Vector4 const & __thiscall AnimatableTransform::getQuat(void) const, 0}, NM::Vector4 const &, {protected: void __thiscall AnimatableTransform::setQuat(class NM::Vector4 const &), 0}>
// @summary Auto-lifted identical-shape clone of 0x00635740 (ExprParser::ReadWriteMethodType<EffectorSkeletal>::vfunc_41 (EffectorSkeletal::getDesiredQuat -> setDesiredQuat)).
namespace lift_00635740 {
extern void ext_0058B350();
extern void ext_0046C3C0();
extern void ext_006A6DD2();
// RTTI/throw info referenced by the null-target error path (pushed as the throw's ThrowInfo argument).
extern const char mem_009DEC1C[];

// @name ExprParser::ReadWriteMethodType<EffectorSkeletal>::vfunc_41 (EffectorSkeletal::getDesiredQuat -> setDesiredQuat)
// @class ExprParser::ReadWriteMethodType<EffectorSkeletal, NM::Vector4 const &, &public: class NM::Vector4 const & __thiscall EffectorSkeletal::getDesiredQuat(void) const, NM::Vector4 const &, &public: void __thiscall EffectorSkeletal::setDesiredQuat(class NM::Vector4 const &)>
// @summary Copies a quaternion from the source's getter sub-object (vtable slot 6) into the target EffectorSkeletal via setDesiredQuat; throws if the target pointer is null.
// @field ExprParser::ValuePtrType +0x00 EffectorSkeletal* target
// @field ExprParser::ReadMethodType +0x04 void* accessor
void fn_0058C010(void* const* self, void* src) {
    // self +0x00: pointer to the EffectorSkeletal target. Null means the write target is missing.
    void* target = *self;
    if (target == nullptr) {
        // Original throws a MSVC C++ exception (type descriptor 0x009DEC1C). No portable equivalent exists.
        ext_0046C3C0();
        (void)mem_009DEC1C;
        ext_006A6DD2();
        return;
    }

    // src +0x04: accessor sub-object; its vtable slot 6 (+0x18) takes src and returns a NM::Vector4 const&.
    void* accessor = *reinterpret_cast<void**>(static_cast<std::uint8_t*>(src) + 0x04);
    void** vtbl = *reinterpret_cast<void***>(accessor);
    using GetQuatFn = const void* (*)(void* self, void* holder);
    GetQuatFn get = reinterpret_cast<GetQuatFn>(vtbl[6]);
    const void* quat = get(accessor, src);

    // Forward to EffectorSkeletal::setDesiredQuat(const Vector4&) on the target (sub_00630D90).
    using SetQuatFn = void (*)(void* self, const void* quat);
    reinterpret_cast<SetQuatFn>(&ext_0058B350)(target, quat);
}
} // namespace lift_00635740
} // namespace lift_0058C010

// [0x005B8680] ExprParser::ReadWriteMethodType<NMData::MetaBodyData, NM::Vector3 const &, {public: class NM::Vector3 const & __thiscall NMData::MetaBodyData::getAbsolutePosition(void) const, 0}, NM::Vector3 const &, {public: void __thiscall NMData::MetaBodyData::setPosition(class NM::Vector3 const &), 0}>::vfunc_41 (68 bytes)
namespace lift_005B8680 {
// @name ExprParser::ReadWriteMethodType<NMData::MetaBodyData, NM::Vector3 const &, {public: class NM::Vector3 const & __thiscall NMData::MetaBodyData::getAbsolutePosition(void) const, 0}, NM::Vector3 const &, {public: void __thiscall NMData::MetaBodyData::setPosition(class NM::Vector3 const &), 0}>::vfunc_41
// @class ExprParser::ReadWriteMethodType<NMData::MetaBodyData, NM::Vector3 const &, {public: class NM::Vector3 const & __thiscall NMData::MetaBodyData::getAbsolutePosition(void) const, 0}, NM::Vector3 const &, {public: void __thiscall NMData::MetaBodyData::setPosition(class NM::Vector3 const &), 0}>
// @summary Auto-lifted identical-shape clone of 0x006362D0 (ExprParser::ReadWriteMethodType<EffectorSkeletal>::vfunc_41 (EffectorSkeletal::getDesiredTwistAndSwing -> setDesiredTwistAndSwing)).
namespace lift_006362D0 {
// Known callee 0x00630E10: sub_00630E10 (EffectorSkeletal::setDesiredTwistAndSwing body, __thiscall, 1 stack arg)
extern void ext_005B6980();
// Known callee 0x0046C3C0: sub_0046C3C0 (exception object construction helper, __thiscall on local arg slot)
extern void ext_0046C3C0(void* exc);
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk forwarding to MSVCR80!_CxxThrowException.)
extern void ext_006A6DD2(void* exc, const void* throwInfo);

// Throw type-info constant referenced at 0x00636305 (push 0x9dec1c).
extern const char ext_009DEC1C[];

// @name ExprParser::ReadWriteMethodType<EffectorSkeletal>::vfunc_41 (EffectorSkeletal::getDesiredTwistAndSwing -> setDesiredTwistAndSwing)
// @class ExprParser::ReadWriteMethodType<EffectorSkeletal, NM::Vector3 const &, &public: class NM::Vector3 const & __thiscall EffectorSkeletal::getDesiredTwistAndSwing(void) const, NM::Vector3 const &, &public: void __thiscall EffectorSkeletal::setDesiredTwistAndSwing(class NM::Vector3 const &)>
// @summary Applies a Vector3 value to the bound EffectorSkeletal's desired twist/swing; throws if the bound target is null.
// @field ExprParser::ReadWriteMethodType +0x00 void* target
// @field ValuePtrType +0x04 void* field_04
void fn_005B8680(void* self, void* value) {
    // self->target (EffectorSkeletal*) at +0x00.
    void* target = lift_field<void*>(self, 0x00);
    if (target == nullptr) {
        // Null target: construct exception and throw.
        ext_0046C3C0(self);
        ext_006A6DD2(self, ext_009DEC1C);
        return;
    }

    // value->obj at +0x04; obj's vtable slot 5 (+0x14) yields the NM::Vector3 const& to apply.
    void* obj = lift_field<void*>(value, 0x04);
    void** vtable = *reinterpret_cast<void***>(obj);
    using VFn = void* (*)(void* thisPtr, void* arg);
    VFn getter = reinterpret_cast<VFn>(vtable[5]);
    void* vec = getter(obj, value);

    // Forward the Vector3 to EffectorSkeletal's setter body (sub_00630E10), with target as this.
    using SetFn = void (*)(void* thisPtr, void* arg);
    reinterpret_cast<SetFn>(ext_005B6980)(target, vec);
}
} // namespace lift_006362D0
} // namespace lift_005B8680

// [0x005B8750] ExprParser::ReadWriteMethodType<NMData::MetaBodyData, NM::Vector3 const &, {public: class NM::Vector3 const & __thiscall NMData::MetaBodyData::getOrientationTS(void) const, 0}, NM::Vector3 const &, {public: void __thiscall NMData::MetaBodyData::setOrientationTS(class NM::Vector3 const &), 0}>::vfunc_41 (68 bytes)
namespace lift_005B8750 {
// @name ExprParser::ReadWriteMethodType<NMData::MetaBodyData, NM::Vector3 const &, {public: class NM::Vector3 const & __thiscall NMData::MetaBodyData::getOrientationTS(void) const, 0}, NM::Vector3 const &, {public: void __thiscall NMData::MetaBodyData::setOrientationTS(class NM::Vector3 const &), 0}>::vfunc_41
// @class ExprParser::ReadWriteMethodType<NMData::MetaBodyData, NM::Vector3 const &, {public: class NM::Vector3 const & __thiscall NMData::MetaBodyData::getOrientationTS(void) const, 0}, NM::Vector3 const &, {public: void __thiscall NMData::MetaBodyData::setOrientationTS(class NM::Vector3 const &), 0}>
// @summary Auto-lifted identical-shape clone of 0x006362D0 (ExprParser::ReadWriteMethodType<EffectorSkeletal>::vfunc_41 (EffectorSkeletal::getDesiredTwistAndSwing -> setDesiredTwistAndSwing)).
namespace lift_006362D0 {
// Known callee 0x00630E10: sub_00630E10 (EffectorSkeletal::setDesiredTwistAndSwing body, __thiscall, 1 stack arg)
extern void ext_005B6D20();
// Known callee 0x0046C3C0: sub_0046C3C0 (exception object construction helper, __thiscall on local arg slot)
extern void ext_0046C3C0(void* exc);
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk forwarding to MSVCR80!_CxxThrowException.)
extern void ext_006A6DD2(void* exc, const void* throwInfo);

// Throw type-info constant referenced at 0x00636305 (push 0x9dec1c).
extern const char ext_009DEC1C[];

// @name ExprParser::ReadWriteMethodType<EffectorSkeletal>::vfunc_41 (EffectorSkeletal::getDesiredTwistAndSwing -> setDesiredTwistAndSwing)
// @class ExprParser::ReadWriteMethodType<EffectorSkeletal, NM::Vector3 const &, &public: class NM::Vector3 const & __thiscall EffectorSkeletal::getDesiredTwistAndSwing(void) const, NM::Vector3 const &, &public: void __thiscall EffectorSkeletal::setDesiredTwistAndSwing(class NM::Vector3 const &)>
// @summary Applies a Vector3 value to the bound EffectorSkeletal's desired twist/swing; throws if the bound target is null.
// @field ExprParser::ReadWriteMethodType +0x00 void* target
// @field ValuePtrType +0x04 void* field_04
void fn_005B8750(void* self, void* value) {
    // self->target (EffectorSkeletal*) at +0x00.
    void* target = lift_field<void*>(self, 0x00);
    if (target == nullptr) {
        // Null target: construct exception and throw.
        ext_0046C3C0(self);
        ext_006A6DD2(self, ext_009DEC1C);
        return;
    }

    // value->obj at +0x04; obj's vtable slot 5 (+0x14) yields the NM::Vector3 const& to apply.
    void* obj = lift_field<void*>(value, 0x04);
    void** vtable = *reinterpret_cast<void***>(obj);
    using VFn = void* (*)(void* thisPtr, void* arg);
    VFn getter = reinterpret_cast<VFn>(vtable[5]);
    void* vec = getter(obj, value);

    // Forward the Vector3 to EffectorSkeletal's setter body (sub_00630E10), with target as this.
    using SetFn = void (*)(void* thisPtr, void* arg);
    reinterpret_cast<SetFn>(ext_005B6D20)(target, vec);
}
} // namespace lift_006362D0
} // namespace lift_005B8750

// [0x005B8820] ExprParser::ReadWriteMethodType<NMData::MetaBodyData, NM::Vector3 const &, {public: class NM::Vector3 const & __thiscall NMData::MetaBodyData::getOrientationTSA(void) const, 0}, NM::Vector3 const &, {public: void __thiscall NMData::MetaBodyData::setOrientationTSA(class NM::Vector3 const &), 0}>::vfunc_41 (68 bytes)
namespace lift_005B8820 {
// @name ExprParser::ReadWriteMethodType<NMData::MetaBodyData, NM::Vector3 const &, {public: class NM::Vector3 const & __thiscall NMData::MetaBodyData::getOrientationTSA(void) const, 0}, NM::Vector3 const &, {public: void __thiscall NMData::MetaBodyData::setOrientationTSA(class NM::Vector3 const &), 0}>::vfunc_41
// @class ExprParser::ReadWriteMethodType<NMData::MetaBodyData, NM::Vector3 const &, {public: class NM::Vector3 const & __thiscall NMData::MetaBodyData::getOrientationTSA(void) const, 0}, NM::Vector3 const &, {public: void __thiscall NMData::MetaBodyData::setOrientationTSA(class NM::Vector3 const &), 0}>
// @summary Auto-lifted identical-shape clone of 0x006362D0 (ExprParser::ReadWriteMethodType<EffectorSkeletal>::vfunc_41 (EffectorSkeletal::getDesiredTwistAndSwing -> setDesiredTwistAndSwing)).
namespace lift_006362D0 {
// Known callee 0x00630E10: sub_00630E10 (EffectorSkeletal::setDesiredTwistAndSwing body, __thiscall, 1 stack arg)
extern void ext_005B6D90();
// Known callee 0x0046C3C0: sub_0046C3C0 (exception object construction helper, __thiscall on local arg slot)
extern void ext_0046C3C0(void* exc);
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk forwarding to MSVCR80!_CxxThrowException.)
extern void ext_006A6DD2(void* exc, const void* throwInfo);

// Throw type-info constant referenced at 0x00636305 (push 0x9dec1c).
extern const char ext_009DEC1C[];

// @name ExprParser::ReadWriteMethodType<EffectorSkeletal>::vfunc_41 (EffectorSkeletal::getDesiredTwistAndSwing -> setDesiredTwistAndSwing)
// @class ExprParser::ReadWriteMethodType<EffectorSkeletal, NM::Vector3 const &, &public: class NM::Vector3 const & __thiscall EffectorSkeletal::getDesiredTwistAndSwing(void) const, NM::Vector3 const &, &public: void __thiscall EffectorSkeletal::setDesiredTwistAndSwing(class NM::Vector3 const &)>
// @summary Applies a Vector3 value to the bound EffectorSkeletal's desired twist/swing; throws if the bound target is null.
// @field ExprParser::ReadWriteMethodType +0x00 void* target
// @field ValuePtrType +0x04 void* field_04
void fn_005B8820(void* self, void* value) {
    // self->target (EffectorSkeletal*) at +0x00.
    void* target = lift_field<void*>(self, 0x00);
    if (target == nullptr) {
        // Null target: construct exception and throw.
        ext_0046C3C0(self);
        ext_006A6DD2(self, ext_009DEC1C);
        return;
    }

    // value->obj at +0x04; obj's vtable slot 5 (+0x14) yields the NM::Vector3 const& to apply.
    void* obj = lift_field<void*>(value, 0x04);
    void** vtable = *reinterpret_cast<void***>(obj);
    using VFn = void* (*)(void* thisPtr, void* arg);
    VFn getter = reinterpret_cast<VFn>(vtable[5]);
    void* vec = getter(obj, value);

    // Forward the Vector3 to EffectorSkeletal's setter body (sub_00630E10), with target as this.
    using SetFn = void (*)(void* thisPtr, void* arg);
    reinterpret_cast<SetFn>(ext_005B6D90)(target, vec);
}
} // namespace lift_006362D0
} // namespace lift_005B8820

// [0x005B88F0] ExprParser::ReadWriteMethodType<NMData::MetaBodyData, NM::Vector3 const &, {public: class NM::Vector3 const & __thiscall NMData::MetaBodyData::getOrientationSE(void) const, 0}, NM::Vector3 const &, {public: void __thiscall NMData::MetaBodyData::setOrientationSE(class NM::Vector3 const &), 0}>::vfunc_41 (68 bytes)
namespace lift_005B88F0 {
// @name ExprParser::ReadWriteMethodType<NMData::MetaBodyData, NM::Vector3 const &, {public: class NM::Vector3 const & __thiscall NMData::MetaBodyData::getOrientationSE(void) const, 0}, NM::Vector3 const &, {public: void __thiscall NMData::MetaBodyData::setOrientationSE(class NM::Vector3 const &), 0}>::vfunc_41
// @class ExprParser::ReadWriteMethodType<NMData::MetaBodyData, NM::Vector3 const &, {public: class NM::Vector3 const & __thiscall NMData::MetaBodyData::getOrientationSE(void) const, 0}, NM::Vector3 const &, {public: void __thiscall NMData::MetaBodyData::setOrientationSE(class NM::Vector3 const &), 0}>
// @summary Auto-lifted identical-shape clone of 0x006362D0 (ExprParser::ReadWriteMethodType<EffectorSkeletal>::vfunc_41 (EffectorSkeletal::getDesiredTwistAndSwing -> setDesiredTwistAndSwing)).
namespace lift_006362D0 {
// Known callee 0x00630E10: sub_00630E10 (EffectorSkeletal::setDesiredTwistAndSwing body, __thiscall, 1 stack arg)
extern void ext_005B6E00();
// Known callee 0x0046C3C0: sub_0046C3C0 (exception object construction helper, __thiscall on local arg slot)
extern void ext_0046C3C0(void* exc);
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk forwarding to MSVCR80!_CxxThrowException.)
extern void ext_006A6DD2(void* exc, const void* throwInfo);

// Throw type-info constant referenced at 0x00636305 (push 0x9dec1c).
extern const char ext_009DEC1C[];

// @name ExprParser::ReadWriteMethodType<EffectorSkeletal>::vfunc_41 (EffectorSkeletal::getDesiredTwistAndSwing -> setDesiredTwistAndSwing)
// @class ExprParser::ReadWriteMethodType<EffectorSkeletal, NM::Vector3 const &, &public: class NM::Vector3 const & __thiscall EffectorSkeletal::getDesiredTwistAndSwing(void) const, NM::Vector3 const &, &public: void __thiscall EffectorSkeletal::setDesiredTwistAndSwing(class NM::Vector3 const &)>
// @summary Applies a Vector3 value to the bound EffectorSkeletal's desired twist/swing; throws if the bound target is null.
// @field ExprParser::ReadWriteMethodType +0x00 void* target
// @field ValuePtrType +0x04 void* field_04
void fn_005B88F0(void* self, void* value) {
    // self->target (EffectorSkeletal*) at +0x00.
    void* target = lift_field<void*>(self, 0x00);
    if (target == nullptr) {
        // Null target: construct exception and throw.
        ext_0046C3C0(self);
        ext_006A6DD2(self, ext_009DEC1C);
        return;
    }

    // value->obj at +0x04; obj's vtable slot 5 (+0x14) yields the NM::Vector3 const& to apply.
    void* obj = lift_field<void*>(value, 0x04);
    void** vtable = *reinterpret_cast<void***>(obj);
    using VFn = void* (*)(void* thisPtr, void* arg);
    VFn getter = reinterpret_cast<VFn>(vtable[5]);
    void* vec = getter(obj, value);

    // Forward the Vector3 to EffectorSkeletal's setter body (sub_00630E10), with target as this.
    using SetFn = void (*)(void* thisPtr, void* arg);
    reinterpret_cast<SetFn>(ext_005B6E00)(target, vec);
}
} // namespace lift_006362D0
} // namespace lift_005B88F0

// [0x005B89C0] ExprParser::ReadWriteMethodType<NMData::MetaBodyData, NM::Vector3 const &, {public: class NM::Vector3 const & __thiscall NMData::MetaBodyData::getOrientation(void) const, 0}, NM::Vector3 const &, {public: void __thiscall NMData::MetaBodyData::setOrientation(class NM::Vector3 const &), 0}>::vfunc_41 (68 bytes)
namespace lift_005B89C0 {
// @name ExprParser::ReadWriteMethodType<NMData::MetaBodyData, NM::Vector3 const &, {public: class NM::Vector3 const & __thiscall NMData::MetaBodyData::getOrientation(void) const, 0}, NM::Vector3 const &, {public: void __thiscall NMData::MetaBodyData::setOrientation(class NM::Vector3 const &), 0}>::vfunc_41
// @class ExprParser::ReadWriteMethodType<NMData::MetaBodyData, NM::Vector3 const &, {public: class NM::Vector3 const & __thiscall NMData::MetaBodyData::getOrientation(void) const, 0}, NM::Vector3 const &, {public: void __thiscall NMData::MetaBodyData::setOrientation(class NM::Vector3 const &), 0}>
// @summary Auto-lifted identical-shape clone of 0x006362D0 (ExprParser::ReadWriteMethodType<EffectorSkeletal>::vfunc_41 (EffectorSkeletal::getDesiredTwistAndSwing -> setDesiredTwistAndSwing)).
namespace lift_006362D0 {
// Known callee 0x00630E10: sub_00630E10 (EffectorSkeletal::setDesiredTwistAndSwing body, __thiscall, 1 stack arg)
extern void ext_005B6CB0();
// Known callee 0x0046C3C0: sub_0046C3C0 (exception object construction helper, __thiscall on local arg slot)
extern void ext_0046C3C0(void* exc);
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk forwarding to MSVCR80!_CxxThrowException.)
extern void ext_006A6DD2(void* exc, const void* throwInfo);

// Throw type-info constant referenced at 0x00636305 (push 0x9dec1c).
extern const char ext_009DEC1C[];

// @name ExprParser::ReadWriteMethodType<EffectorSkeletal>::vfunc_41 (EffectorSkeletal::getDesiredTwistAndSwing -> setDesiredTwistAndSwing)
// @class ExprParser::ReadWriteMethodType<EffectorSkeletal, NM::Vector3 const &, &public: class NM::Vector3 const & __thiscall EffectorSkeletal::getDesiredTwistAndSwing(void) const, NM::Vector3 const &, &public: void __thiscall EffectorSkeletal::setDesiredTwistAndSwing(class NM::Vector3 const &)>
// @summary Applies a Vector3 value to the bound EffectorSkeletal's desired twist/swing; throws if the bound target is null.
// @field ExprParser::ReadWriteMethodType +0x00 void* target
// @field ValuePtrType +0x04 void* field_04
void fn_005B89C0(void* self, void* value) {
    // self->target (EffectorSkeletal*) at +0x00.
    void* target = lift_field<void*>(self, 0x00);
    if (target == nullptr) {
        // Null target: construct exception and throw.
        ext_0046C3C0(self);
        ext_006A6DD2(self, ext_009DEC1C);
        return;
    }

    // value->obj at +0x04; obj's vtable slot 5 (+0x14) yields the NM::Vector3 const& to apply.
    void* obj = lift_field<void*>(value, 0x04);
    void** vtable = *reinterpret_cast<void***>(obj);
    using VFn = void* (*)(void* thisPtr, void* arg);
    VFn getter = reinterpret_cast<VFn>(vtable[5]);
    void* vec = getter(obj, value);

    // Forward the Vector3 to EffectorSkeletal's setter body (sub_00630E10), with target as this.
    using SetFn = void (*)(void* thisPtr, void* arg);
    reinterpret_cast<SetFn>(ext_005B6CB0)(target, vec);
}
} // namespace lift_006362D0
} // namespace lift_005B89C0

// [0x005F5E10] ExprParser::ReadWriteMethodType<HelperGraphic, NM::Vector3 const &, {public: class NM::Vector3 const & __thiscall HelperGraphic::getOrientationTS(void) const, 0}, NM::Vector3 const &, {public: void __thiscall HelperGraphic::setOrientationTS(class NM::Vector3 const &), 0}>::vfunc_41 (68 bytes)
namespace lift_005F5E10 {
// @name ExprParser::ReadWriteMethodType<HelperGraphic, NM::Vector3 const &, {public: class NM::Vector3 const & __thiscall HelperGraphic::getOrientationTS(void) const, 0}, NM::Vector3 const &, {public: void __thiscall HelperGraphic::setOrientationTS(class NM::Vector3 const &), 0}>::vfunc_41
// @class ExprParser::ReadWriteMethodType<HelperGraphic, NM::Vector3 const &, {public: class NM::Vector3 const & __thiscall HelperGraphic::getOrientationTS(void) const, 0}, NM::Vector3 const &, {public: void __thiscall HelperGraphic::setOrientationTS(class NM::Vector3 const &), 0}>
// @summary Auto-lifted identical-shape clone of 0x006362D0 (ExprParser::ReadWriteMethodType<EffectorSkeletal>::vfunc_41 (EffectorSkeletal::getDesiredTwistAndSwing -> setDesiredTwistAndSwing)).
namespace lift_006362D0 {
// Known callee 0x00630E10: sub_00630E10 (EffectorSkeletal::setDesiredTwistAndSwing body, __thiscall, 1 stack arg)
extern void ext_005F56A0();
// Known callee 0x0046C3C0: sub_0046C3C0 (exception object construction helper, __thiscall on local arg slot)
extern void ext_0046C3C0(void* exc);
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk forwarding to MSVCR80!_CxxThrowException.)
extern void ext_006A6DD2(void* exc, const void* throwInfo);

// Throw type-info constant referenced at 0x00636305 (push 0x9dec1c).
extern const char ext_009DEC1C[];

// @name ExprParser::ReadWriteMethodType<EffectorSkeletal>::vfunc_41 (EffectorSkeletal::getDesiredTwistAndSwing -> setDesiredTwistAndSwing)
// @class ExprParser::ReadWriteMethodType<EffectorSkeletal, NM::Vector3 const &, &public: class NM::Vector3 const & __thiscall EffectorSkeletal::getDesiredTwistAndSwing(void) const, NM::Vector3 const &, &public: void __thiscall EffectorSkeletal::setDesiredTwistAndSwing(class NM::Vector3 const &)>
// @summary Applies a Vector3 value to the bound EffectorSkeletal's desired twist/swing; throws if the bound target is null.
// @field ExprParser::ReadWriteMethodType +0x00 void* target
// @field ValuePtrType +0x04 void* field_04
void fn_005F5E10(void* self, void* value) {
    // self->target (EffectorSkeletal*) at +0x00.
    void* target = lift_field<void*>(self, 0x00);
    if (target == nullptr) {
        // Null target: construct exception and throw.
        ext_0046C3C0(self);
        ext_006A6DD2(self, ext_009DEC1C);
        return;
    }

    // value->obj at +0x04; obj's vtable slot 5 (+0x14) yields the NM::Vector3 const& to apply.
    void* obj = lift_field<void*>(value, 0x04);
    void** vtable = *reinterpret_cast<void***>(obj);
    using VFn = void* (*)(void* thisPtr, void* arg);
    VFn getter = reinterpret_cast<VFn>(vtable[5]);
    void* vec = getter(obj, value);

    // Forward the Vector3 to EffectorSkeletal's setter body (sub_00630E10), with target as this.
    using SetFn = void (*)(void* thisPtr, void* arg);
    reinterpret_cast<SetFn>(ext_005F56A0)(target, vec);
}
} // namespace lift_006362D0
} // namespace lift_005F5E10

// [0x005F5E60] ExprParser::ReadWriteMethodType<HelperGraphic, NM::Vector3 const &, {public: class NM::Vector3 const & __thiscall HelperGraphic::getOrientationTSA(void) const, 0}, NM::Vector3 const &, {public: void __thiscall HelperGraphic::setOrientationTSA(class NM::Vector3 const &), 0}>::vfunc_41 (68 bytes)
namespace lift_005F5E60 {
// @name ExprParser::ReadWriteMethodType<HelperGraphic, NM::Vector3 const &, {public: class NM::Vector3 const & __thiscall HelperGraphic::getOrientationTSA(void) const, 0}, NM::Vector3 const &, {public: void __thiscall HelperGraphic::setOrientationTSA(class NM::Vector3 const &), 0}>::vfunc_41
// @class ExprParser::ReadWriteMethodType<HelperGraphic, NM::Vector3 const &, {public: class NM::Vector3 const & __thiscall HelperGraphic::getOrientationTSA(void) const, 0}, NM::Vector3 const &, {public: void __thiscall HelperGraphic::setOrientationTSA(class NM::Vector3 const &), 0}>
// @summary Auto-lifted identical-shape clone of 0x006362D0 (ExprParser::ReadWriteMethodType<EffectorSkeletal>::vfunc_41 (EffectorSkeletal::getDesiredTwistAndSwing -> setDesiredTwistAndSwing)).
namespace lift_006362D0 {
// Known callee 0x00630E10: sub_00630E10 (EffectorSkeletal::setDesiredTwistAndSwing body, __thiscall, 1 stack arg)
extern void ext_005F56C0();
// Known callee 0x0046C3C0: sub_0046C3C0 (exception object construction helper, __thiscall on local arg slot)
extern void ext_0046C3C0(void* exc);
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk forwarding to MSVCR80!_CxxThrowException.)
extern void ext_006A6DD2(void* exc, const void* throwInfo);

// Throw type-info constant referenced at 0x00636305 (push 0x9dec1c).
extern const char ext_009DEC1C[];

// @name ExprParser::ReadWriteMethodType<EffectorSkeletal>::vfunc_41 (EffectorSkeletal::getDesiredTwistAndSwing -> setDesiredTwistAndSwing)
// @class ExprParser::ReadWriteMethodType<EffectorSkeletal, NM::Vector3 const &, &public: class NM::Vector3 const & __thiscall EffectorSkeletal::getDesiredTwistAndSwing(void) const, NM::Vector3 const &, &public: void __thiscall EffectorSkeletal::setDesiredTwistAndSwing(class NM::Vector3 const &)>
// @summary Applies a Vector3 value to the bound EffectorSkeletal's desired twist/swing; throws if the bound target is null.
// @field ExprParser::ReadWriteMethodType +0x00 void* target
// @field ValuePtrType +0x04 void* field_04
void fn_005F5E60(void* self, void* value) {
    // self->target (EffectorSkeletal*) at +0x00.
    void* target = lift_field<void*>(self, 0x00);
    if (target == nullptr) {
        // Null target: construct exception and throw.
        ext_0046C3C0(self);
        ext_006A6DD2(self, ext_009DEC1C);
        return;
    }

    // value->obj at +0x04; obj's vtable slot 5 (+0x14) yields the NM::Vector3 const& to apply.
    void* obj = lift_field<void*>(value, 0x04);
    void** vtable = *reinterpret_cast<void***>(obj);
    using VFn = void* (*)(void* thisPtr, void* arg);
    VFn getter = reinterpret_cast<VFn>(vtable[5]);
    void* vec = getter(obj, value);

    // Forward the Vector3 to EffectorSkeletal's setter body (sub_00630E10), with target as this.
    using SetFn = void (*)(void* thisPtr, void* arg);
    reinterpret_cast<SetFn>(ext_005F56C0)(target, vec);
}
} // namespace lift_006362D0
} // namespace lift_005F5E60

// [0x005F5EB0] ExprParser::ReadWriteMethodType<HelperGraphic, NM::Vector3 const &, {public: class NM::Vector3 const & __thiscall HelperGraphic::getOrientationSE(void) const, 0}, NM::Vector3 const &, {public: void __thiscall HelperGraphic::setOrientationSE(class NM::Vector3 const &), 0}>::vfunc_41 (68 bytes)
namespace lift_005F5EB0 {
// @name ExprParser::ReadWriteMethodType<HelperGraphic, NM::Vector3 const &, {public: class NM::Vector3 const & __thiscall HelperGraphic::getOrientationSE(void) const, 0}, NM::Vector3 const &, {public: void __thiscall HelperGraphic::setOrientationSE(class NM::Vector3 const &), 0}>::vfunc_41
// @class ExprParser::ReadWriteMethodType<HelperGraphic, NM::Vector3 const &, {public: class NM::Vector3 const & __thiscall HelperGraphic::getOrientationSE(void) const, 0}, NM::Vector3 const &, {public: void __thiscall HelperGraphic::setOrientationSE(class NM::Vector3 const &), 0}>
// @summary Auto-lifted identical-shape clone of 0x006362D0 (ExprParser::ReadWriteMethodType<EffectorSkeletal>::vfunc_41 (EffectorSkeletal::getDesiredTwistAndSwing -> setDesiredTwistAndSwing)).
namespace lift_006362D0 {
// Known callee 0x00630E10: sub_00630E10 (EffectorSkeletal::setDesiredTwistAndSwing body, __thiscall, 1 stack arg)
extern void ext_005F56E0();
// Known callee 0x0046C3C0: sub_0046C3C0 (exception object construction helper, __thiscall on local arg slot)
extern void ext_0046C3C0(void* exc);
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk forwarding to MSVCR80!_CxxThrowException.)
extern void ext_006A6DD2(void* exc, const void* throwInfo);

// Throw type-info constant referenced at 0x00636305 (push 0x9dec1c).
extern const char ext_009DEC1C[];

// @name ExprParser::ReadWriteMethodType<EffectorSkeletal>::vfunc_41 (EffectorSkeletal::getDesiredTwistAndSwing -> setDesiredTwistAndSwing)
// @class ExprParser::ReadWriteMethodType<EffectorSkeletal, NM::Vector3 const &, &public: class NM::Vector3 const & __thiscall EffectorSkeletal::getDesiredTwistAndSwing(void) const, NM::Vector3 const &, &public: void __thiscall EffectorSkeletal::setDesiredTwistAndSwing(class NM::Vector3 const &)>
// @summary Applies a Vector3 value to the bound EffectorSkeletal's desired twist/swing; throws if the bound target is null.
// @field ExprParser::ReadWriteMethodType +0x00 void* target
// @field ValuePtrType +0x04 void* field_04
void fn_005F5EB0(void* self, void* value) {
    // self->target (EffectorSkeletal*) at +0x00.
    void* target = lift_field<void*>(self, 0x00);
    if (target == nullptr) {
        // Null target: construct exception and throw.
        ext_0046C3C0(self);
        ext_006A6DD2(self, ext_009DEC1C);
        return;
    }

    // value->obj at +0x04; obj's vtable slot 5 (+0x14) yields the NM::Vector3 const& to apply.
    void* obj = lift_field<void*>(value, 0x04);
    void** vtable = *reinterpret_cast<void***>(obj);
    using VFn = void* (*)(void* thisPtr, void* arg);
    VFn getter = reinterpret_cast<VFn>(vtable[5]);
    void* vec = getter(obj, value);

    // Forward the Vector3 to EffectorSkeletal's setter body (sub_00630E10), with target as this.
    using SetFn = void (*)(void* thisPtr, void* arg);
    reinterpret_cast<SetFn>(ext_005F56E0)(target, vec);
}
} // namespace lift_006362D0
} // namespace lift_005F5EB0

// [0x005F5F00] ExprParser::ReadWriteMethodType<HelperGraphic, NM::Vector3 const &, {public: class NM::Vector3 const & __thiscall HelperGraphic::getOrientationE(void) const, 0}, NM::Vector3 const &, {public: void __thiscall HelperGraphic::setOrientationE(class NM::Vector3 const &), 0}>::vfunc_41 (68 bytes)
namespace lift_005F5F00 {
// @name ExprParser::ReadWriteMethodType<HelperGraphic, NM::Vector3 const &, {public: class NM::Vector3 const & __thiscall HelperGraphic::getOrientationE(void) const, 0}, NM::Vector3 const &, {public: void __thiscall HelperGraphic::setOrientationE(class NM::Vector3 const &), 0}>::vfunc_41
// @class ExprParser::ReadWriteMethodType<HelperGraphic, NM::Vector3 const &, {public: class NM::Vector3 const & __thiscall HelperGraphic::getOrientationE(void) const, 0}, NM::Vector3 const &, {public: void __thiscall HelperGraphic::setOrientationE(class NM::Vector3 const &), 0}>
// @summary Auto-lifted identical-shape clone of 0x006362D0 (ExprParser::ReadWriteMethodType<EffectorSkeletal>::vfunc_41 (EffectorSkeletal::getDesiredTwistAndSwing -> setDesiredTwistAndSwing)).
namespace lift_006362D0 {
// Known callee 0x00630E10: sub_00630E10 (EffectorSkeletal::setDesiredTwistAndSwing body, __thiscall, 1 stack arg)
extern void ext_005F5700();
// Known callee 0x0046C3C0: sub_0046C3C0 (exception object construction helper, __thiscall on local arg slot)
extern void ext_0046C3C0(void* exc);
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk forwarding to MSVCR80!_CxxThrowException.)
extern void ext_006A6DD2(void* exc, const void* throwInfo);

// Throw type-info constant referenced at 0x00636305 (push 0x9dec1c).
extern const char ext_009DEC1C[];

// @name ExprParser::ReadWriteMethodType<EffectorSkeletal>::vfunc_41 (EffectorSkeletal::getDesiredTwistAndSwing -> setDesiredTwistAndSwing)
// @class ExprParser::ReadWriteMethodType<EffectorSkeletal, NM::Vector3 const &, &public: class NM::Vector3 const & __thiscall EffectorSkeletal::getDesiredTwistAndSwing(void) const, NM::Vector3 const &, &public: void __thiscall EffectorSkeletal::setDesiredTwistAndSwing(class NM::Vector3 const &)>
// @summary Applies a Vector3 value to the bound EffectorSkeletal's desired twist/swing; throws if the bound target is null.
// @field ExprParser::ReadWriteMethodType +0x00 void* target
// @field ValuePtrType +0x04 void* field_04
void fn_005F5F00(void* self, void* value) {
    // self->target (EffectorSkeletal*) at +0x00.
    void* target = lift_field<void*>(self, 0x00);
    if (target == nullptr) {
        // Null target: construct exception and throw.
        ext_0046C3C0(self);
        ext_006A6DD2(self, ext_009DEC1C);
        return;
    }

    // value->obj at +0x04; obj's vtable slot 5 (+0x14) yields the NM::Vector3 const& to apply.
    void* obj = lift_field<void*>(value, 0x04);
    void** vtable = *reinterpret_cast<void***>(obj);
    using VFn = void* (*)(void* thisPtr, void* arg);
    VFn getter = reinterpret_cast<VFn>(vtable[5]);
    void* vec = getter(obj, value);

    // Forward the Vector3 to EffectorSkeletal's setter body (sub_00630E10), with target as this.
    using SetFn = void (*)(void* thisPtr, void* arg);
    reinterpret_cast<SetFn>(ext_005F5700)(target, vec);
}
} // namespace lift_006362D0
} // namespace lift_005F5F00

// [0x005F5F50] ExprParser::ReadWriteMethodType<HelperGraphic, NM::Vector4 const &, {public: class NM::Vector4 const & __thiscall HelperGraphic::getOrientationQuat(void) const, 0}, NM::Vector4 const &, {public: void __thiscall HelperGraphic::setOrientationQuat(class NM::Vector4 const &), 0}>::vfunc_41 (68 bytes)
namespace lift_005F5F50 {
// @name ExprParser::ReadWriteMethodType<HelperGraphic, NM::Vector4 const &, {public: class NM::Vector4 const & __thiscall HelperGraphic::getOrientationQuat(void) const, 0}, NM::Vector4 const &, {public: void __thiscall HelperGraphic::setOrientationQuat(class NM::Vector4 const &), 0}>::vfunc_41
// @class ExprParser::ReadWriteMethodType<HelperGraphic, NM::Vector4 const &, {public: class NM::Vector4 const & __thiscall HelperGraphic::getOrientationQuat(void) const, 0}, NM::Vector4 const &, {public: void __thiscall HelperGraphic::setOrientationQuat(class NM::Vector4 const &), 0}>
// @summary Auto-lifted identical-shape clone of 0x00635740 (ExprParser::ReadWriteMethodType<EffectorSkeletal>::vfunc_41 (EffectorSkeletal::getDesiredQuat -> setDesiredQuat)).
namespace lift_00635740 {
extern void ext_005F5730();
extern void ext_0046C3C0();
extern void ext_006A6DD2();
// RTTI/throw info referenced by the null-target error path (pushed as the throw's ThrowInfo argument).
extern const char mem_009DEC1C[];

// @name ExprParser::ReadWriteMethodType<EffectorSkeletal>::vfunc_41 (EffectorSkeletal::getDesiredQuat -> setDesiredQuat)
// @class ExprParser::ReadWriteMethodType<EffectorSkeletal, NM::Vector4 const &, &public: class NM::Vector4 const & __thiscall EffectorSkeletal::getDesiredQuat(void) const, NM::Vector4 const &, &public: void __thiscall EffectorSkeletal::setDesiredQuat(class NM::Vector4 const &)>
// @summary Copies a quaternion from the source's getter sub-object (vtable slot 6) into the target EffectorSkeletal via setDesiredQuat; throws if the target pointer is null.
// @field ExprParser::ValuePtrType +0x00 EffectorSkeletal* target
// @field ExprParser::ReadMethodType +0x04 void* accessor
void fn_005F5F50(void* const* self, void* src) {
    // self +0x00: pointer to the EffectorSkeletal target. Null means the write target is missing.
    void* target = *self;
    if (target == nullptr) {
        // Original throws a MSVC C++ exception (type descriptor 0x009DEC1C). No portable equivalent exists.
        ext_0046C3C0();
        (void)mem_009DEC1C;
        ext_006A6DD2();
        return;
    }

    // src +0x04: accessor sub-object; its vtable slot 6 (+0x18) takes src and returns a NM::Vector4 const&.
    void* accessor = *reinterpret_cast<void**>(static_cast<std::uint8_t*>(src) + 0x04);
    void** vtbl = *reinterpret_cast<void***>(accessor);
    using GetQuatFn = const void* (*)(void* self, void* holder);
    GetQuatFn get = reinterpret_cast<GetQuatFn>(vtbl[6]);
    const void* quat = get(accessor, src);

    // Forward to EffectorSkeletal::setDesiredQuat(const Vector4&) on the target (sub_00630D90).
    using SetQuatFn = void (*)(void* self, const void* quat);
    reinterpret_cast<SetQuatFn>(&ext_005F5730)(target, quat);
}
} // namespace lift_00635740
} // namespace lift_005F5F50

// [0x005F8030] ExprParser::ReadWriteMethodType<HelperGraphic, NM::Vector3 const &, {public: class NM::Vector3 const & __thiscall HelperGraphic::getOrientationXVector(void) const, 0}, NM::Vector3 const &, {public: void __thiscall HelperGraphic::setOrientationXVector(class NM::Vector3 const &), 0}>::vfunc_41 (68 bytes)
namespace lift_005F8030 {
// @name ExprParser::ReadWriteMethodType<HelperGraphic, NM::Vector3 const &, {public: class NM::Vector3 const & __thiscall HelperGraphic::getOrientationXVector(void) const, 0}, NM::Vector3 const &, {public: void __thiscall HelperGraphic::setOrientationXVector(class NM::Vector3 const &), 0}>::vfunc_41
// @class ExprParser::ReadWriteMethodType<HelperGraphic, NM::Vector3 const &, {public: class NM::Vector3 const & __thiscall HelperGraphic::getOrientationXVector(void) const, 0}, NM::Vector3 const &, {public: void __thiscall HelperGraphic::setOrientationXVector(class NM::Vector3 const &), 0}>
// @summary Auto-lifted identical-shape clone of 0x006362D0 (ExprParser::ReadWriteMethodType<EffectorSkeletal>::vfunc_41 (EffectorSkeletal::getDesiredTwistAndSwing -> setDesiredTwistAndSwing)).
namespace lift_006362D0 {
// Known callee 0x00630E10: sub_00630E10 (EffectorSkeletal::setDesiredTwistAndSwing body, __thiscall, 1 stack arg)
extern void ext_005F59B0();
// Known callee 0x0046C3C0: sub_0046C3C0 (exception object construction helper, __thiscall on local arg slot)
extern void ext_0046C3C0(void* exc);
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk forwarding to MSVCR80!_CxxThrowException.)
extern void ext_006A6DD2(void* exc, const void* throwInfo);

// Throw type-info constant referenced at 0x00636305 (push 0x9dec1c).
extern const char ext_009DEC1C[];

// @name ExprParser::ReadWriteMethodType<EffectorSkeletal>::vfunc_41 (EffectorSkeletal::getDesiredTwistAndSwing -> setDesiredTwistAndSwing)
// @class ExprParser::ReadWriteMethodType<EffectorSkeletal, NM::Vector3 const &, &public: class NM::Vector3 const & __thiscall EffectorSkeletal::getDesiredTwistAndSwing(void) const, NM::Vector3 const &, &public: void __thiscall EffectorSkeletal::setDesiredTwistAndSwing(class NM::Vector3 const &)>
// @summary Applies a Vector3 value to the bound EffectorSkeletal's desired twist/swing; throws if the bound target is null.
// @field ExprParser::ReadWriteMethodType +0x00 void* target
// @field ValuePtrType +0x04 void* field_04
void fn_005F8030(void* self, void* value) {
    // self->target (EffectorSkeletal*) at +0x00.
    void* target = lift_field<void*>(self, 0x00);
    if (target == nullptr) {
        // Null target: construct exception and throw.
        ext_0046C3C0(self);
        ext_006A6DD2(self, ext_009DEC1C);
        return;
    }

    // value->obj at +0x04; obj's vtable slot 5 (+0x14) yields the NM::Vector3 const& to apply.
    void* obj = lift_field<void*>(value, 0x04);
    void** vtable = *reinterpret_cast<void***>(obj);
    using VFn = void* (*)(void* thisPtr, void* arg);
    VFn getter = reinterpret_cast<VFn>(vtable[5]);
    void* vec = getter(obj, value);

    // Forward the Vector3 to EffectorSkeletal's setter body (sub_00630E10), with target as this.
    using SetFn = void (*)(void* thisPtr, void* arg);
    reinterpret_cast<SetFn>(ext_005F59B0)(target, vec);
}
} // namespace lift_006362D0
} // namespace lift_005F8030

// [0x006331A0] ExprParser::ReadWriteMethodType<EffectorSkeletal, NM::Vector3 const &, &public: class NM::Vector3 const & __thiscall EffectorSkeletal::getDesiredPositionNormalized(void) const, NM::Vector3 const &, &public: void __thiscall EffectorSkeletal::setDesiredPositionNormalized(class NM::Vector3 const &)>::vfunc_41 (68 bytes)
namespace lift_006331A0 {
// @name ExprParser::ReadWriteMethodType<EffectorSkeletal, NM::Vector3 const &, &public: class NM::Vector3 const & __thiscall EffectorSkeletal::getDesiredPositionNormalized(void) const, NM::Vector3 const &, &public: void __thiscall EffectorSkeletal::setDesiredPositionNormalized(class NM::Vector3 const &)>::vfunc_41
// @class ExprParser::ReadWriteMethodType<EffectorSkeletal, NM::Vector3 const &, &public: class NM::Vector3 const & __thiscall EffectorSkeletal::getDesiredPositionNormalized(void) const, NM::Vector3 const &, &public: void __thiscall EffectorSkeletal::setDesiredPositionNormalized(class NM::Vector3 const &)>
// @summary Auto-lifted identical-shape clone of 0x006362D0 (ExprParser::ReadWriteMethodType<EffectorSkeletal>::vfunc_41 (EffectorSkeletal::getDesiredTwistAndSwing -> setDesiredTwistAndSwing)).
namespace lift_006362D0 {
// Known callee 0x00630E10: sub_00630E10 (EffectorSkeletal::setDesiredTwistAndSwing body, __thiscall, 1 stack arg)
extern void ext_00630390();
// Known callee 0x0046C3C0: sub_0046C3C0 (exception object construction helper, __thiscall on local arg slot)
extern void ext_0046C3C0(void* exc);
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk forwarding to MSVCR80!_CxxThrowException.)
extern void ext_006A6DD2(void* exc, const void* throwInfo);

// Throw type-info constant referenced at 0x00636305 (push 0x9dec1c).
extern const char ext_009DEC1C[];

// @name ExprParser::ReadWriteMethodType<EffectorSkeletal>::vfunc_41 (EffectorSkeletal::getDesiredTwistAndSwing -> setDesiredTwistAndSwing)
// @class ExprParser::ReadWriteMethodType<EffectorSkeletal, NM::Vector3 const &, &public: class NM::Vector3 const & __thiscall EffectorSkeletal::getDesiredTwistAndSwing(void) const, NM::Vector3 const &, &public: void __thiscall EffectorSkeletal::setDesiredTwistAndSwing(class NM::Vector3 const &)>
// @summary Applies a Vector3 value to the bound EffectorSkeletal's desired twist/swing; throws if the bound target is null.
// @field ExprParser::ReadWriteMethodType +0x00 void* target
// @field ValuePtrType +0x04 void* field_04
void fn_006331A0(void* self, void* value) {
    // self->target (EffectorSkeletal*) at +0x00.
    void* target = lift_field<void*>(self, 0x00);
    if (target == nullptr) {
        // Null target: construct exception and throw.
        ext_0046C3C0(self);
        ext_006A6DD2(self, ext_009DEC1C);
        return;
    }

    // value->obj at +0x04; obj's vtable slot 5 (+0x14) yields the NM::Vector3 const& to apply.
    void* obj = lift_field<void*>(value, 0x04);
    void** vtable = *reinterpret_cast<void***>(obj);
    using VFn = void* (*)(void* thisPtr, void* arg);
    VFn getter = reinterpret_cast<VFn>(vtable[5]);
    void* vec = getter(obj, value);

    // Forward the Vector3 to EffectorSkeletal's setter body (sub_00630E10), with target as this.
    using SetFn = void (*)(void* thisPtr, void* arg);
    reinterpret_cast<SetFn>(ext_00630390)(target, vec);
}
} // namespace lift_006362D0
} // namespace lift_006331A0

// [0x00633290] ExprParser::ReadWriteMethodType<EffectorSkeletal, NM::Vector3 const &, &public: class NM::Vector3 const & __thiscall EffectorSkeletal::getDesiredTwistAndSwingNormalized(void) const, NM::Vector3 const &, &public: void __thiscall EffectorSkeletal::setDesiredTwistAndSwingNormalized(class NM::Vector3 const &)>::vfunc_41 (68 bytes)
namespace lift_00633290 {
// @name ExprParser::ReadWriteMethodType<EffectorSkeletal, NM::Vector3 const &, &public: class NM::Vector3 const & __thiscall EffectorSkeletal::getDesiredTwistAndSwingNormalized(void) const, NM::Vector3 const &, &public: void __thiscall EffectorSkeletal::setDesiredTwistAndSwingNormalized(class NM::Vector3 const &)>::vfunc_41
// @class ExprParser::ReadWriteMethodType<EffectorSkeletal, NM::Vector3 const &, &public: class NM::Vector3 const & __thiscall EffectorSkeletal::getDesiredTwistAndSwingNormalized(void) const, NM::Vector3 const &, &public: void __thiscall EffectorSkeletal::setDesiredTwistAndSwingNormalized(class NM::Vector3 const &)>
// @summary Auto-lifted identical-shape clone of 0x006362D0 (ExprParser::ReadWriteMethodType<EffectorSkeletal>::vfunc_41 (EffectorSkeletal::getDesiredTwistAndSwing -> setDesiredTwistAndSwing)).
namespace lift_006362D0 {
// Known callee 0x00630E10: sub_00630E10 (EffectorSkeletal::setDesiredTwistAndSwing body, __thiscall, 1 stack arg)
extern void ext_00630600();
// Known callee 0x0046C3C0: sub_0046C3C0 (exception object construction helper, __thiscall on local arg slot)
extern void ext_0046C3C0(void* exc);
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk forwarding to MSVCR80!_CxxThrowException.)
extern void ext_006A6DD2(void* exc, const void* throwInfo);

// Throw type-info constant referenced at 0x00636305 (push 0x9dec1c).
extern const char ext_009DEC1C[];

// @name ExprParser::ReadWriteMethodType<EffectorSkeletal>::vfunc_41 (EffectorSkeletal::getDesiredTwistAndSwing -> setDesiredTwistAndSwing)
// @class ExprParser::ReadWriteMethodType<EffectorSkeletal, NM::Vector3 const &, &public: class NM::Vector3 const & __thiscall EffectorSkeletal::getDesiredTwistAndSwing(void) const, NM::Vector3 const &, &public: void __thiscall EffectorSkeletal::setDesiredTwistAndSwing(class NM::Vector3 const &)>
// @summary Applies a Vector3 value to the bound EffectorSkeletal's desired twist/swing; throws if the bound target is null.
// @field ExprParser::ReadWriteMethodType +0x00 void* target
// @field ValuePtrType +0x04 void* field_04
void fn_00633290(void* self, void* value) {
    // self->target (EffectorSkeletal*) at +0x00.
    void* target = lift_field<void*>(self, 0x00);
    if (target == nullptr) {
        // Null target: construct exception and throw.
        ext_0046C3C0(self);
        ext_006A6DD2(self, ext_009DEC1C);
        return;
    }

    // value->obj at +0x04; obj's vtable slot 5 (+0x14) yields the NM::Vector3 const& to apply.
    void* obj = lift_field<void*>(value, 0x04);
    void** vtable = *reinterpret_cast<void***>(obj);
    using VFn = void* (*)(void* thisPtr, void* arg);
    VFn getter = reinterpret_cast<VFn>(vtable[5]);
    void* vec = getter(obj, value);

    // Forward the Vector3 to EffectorSkeletal's setter body (sub_00630E10), with target as this.
    using SetFn = void (*)(void* thisPtr, void* arg);
    reinterpret_cast<SetFn>(ext_00630600)(target, vec);
}
} // namespace lift_006362D0
} // namespace lift_00633290

// [0x00633330] ExprParser::ReadWriteMethodType<EffectorSkeletal, NM::Vector3 const &, &public: class NM::Vector3 const & __thiscall EffectorSkeletal::getDesiredTwistAndSwingVelocity(void) const, NM::Vector3 const &, &public: void __thiscall EffectorSkeletal::setDesiredTwistAndSwingVelocityRaw(class NM::Vector3 const &)>::vfunc_41 (68 bytes)
namespace lift_00633330 {
// @name ExprParser::ReadWriteMethodType<EffectorSkeletal, NM::Vector3 const &, &public: class NM::Vector3 const & __thiscall EffectorSkeletal::getDesiredTwistAndSwingVelocity(void) const, NM::Vector3 const &, &public: void __thiscall EffectorSkeletal::setDesiredTwistAndSwingVelocityRaw(class NM::Vector3 const &)>::vfunc_41
// @class ExprParser::ReadWriteMethodType<EffectorSkeletal, NM::Vector3 const &, &public: class NM::Vector3 const & __thiscall EffectorSkeletal::getDesiredTwistAndSwingVelocity(void) const, NM::Vector3 const &, &public: void __thiscall EffectorSkeletal::setDesiredTwistAndSwingVelocityRaw(class NM::Vector3 const &)>
// @summary Auto-lifted identical-shape clone of 0x006362D0 (ExprParser::ReadWriteMethodType<EffectorSkeletal>::vfunc_41 (EffectorSkeletal::getDesiredTwistAndSwing -> setDesiredTwistAndSwing)).
namespace lift_006362D0 {
// Known callee 0x00630E10: sub_00630E10 (EffectorSkeletal::setDesiredTwistAndSwing body, __thiscall, 1 stack arg)
extern void ext_00630510();
// Known callee 0x0046C3C0: sub_0046C3C0 (exception object construction helper, __thiscall on local arg slot)
extern void ext_0046C3C0(void* exc);
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk forwarding to MSVCR80!_CxxThrowException.)
extern void ext_006A6DD2(void* exc, const void* throwInfo);

// Throw type-info constant referenced at 0x00636305 (push 0x9dec1c).
extern const char ext_009DEC1C[];

// @name ExprParser::ReadWriteMethodType<EffectorSkeletal>::vfunc_41 (EffectorSkeletal::getDesiredTwistAndSwing -> setDesiredTwistAndSwing)
// @class ExprParser::ReadWriteMethodType<EffectorSkeletal, NM::Vector3 const &, &public: class NM::Vector3 const & __thiscall EffectorSkeletal::getDesiredTwistAndSwing(void) const, NM::Vector3 const &, &public: void __thiscall EffectorSkeletal::setDesiredTwistAndSwing(class NM::Vector3 const &)>
// @summary Applies a Vector3 value to the bound EffectorSkeletal's desired twist/swing; throws if the bound target is null.
// @field ExprParser::ReadWriteMethodType +0x00 void* target
// @field ValuePtrType +0x04 void* field_04
void fn_00633330(void* self, void* value) {
    // self->target (EffectorSkeletal*) at +0x00.
    void* target = lift_field<void*>(self, 0x00);
    if (target == nullptr) {
        // Null target: construct exception and throw.
        ext_0046C3C0(self);
        ext_006A6DD2(self, ext_009DEC1C);
        return;
    }

    // value->obj at +0x04; obj's vtable slot 5 (+0x14) yields the NM::Vector3 const& to apply.
    void* obj = lift_field<void*>(value, 0x04);
    void** vtable = *reinterpret_cast<void***>(obj);
    using VFn = void* (*)(void* thisPtr, void* arg);
    VFn getter = reinterpret_cast<VFn>(vtable[5]);
    void* vec = getter(obj, value);

    // Forward the Vector3 to EffectorSkeletal's setter body (sub_00630E10), with target as this.
    using SetFn = void (*)(void* thisPtr, void* arg);
    reinterpret_cast<SetFn>(ext_00630510)(target, vec);
}
} // namespace lift_006362D0
} // namespace lift_00633330

// [0x004B7C60]
namespace lift_004B7C60 {
extern void __thiscall ext_0046C3C0(void* self);
extern void __stdcall ext_006A6DD2(void* pExceptionObject, uint32_t pThrowInfo);

// @name ExprParser::ReadWriteMethodType<NMData::EngineData,float>::vfunc_41
// @class ExprParser::ReadWriteMethodType<NMData::EngineData,float>
// @summary Evaluates a float expression and sets NMData::EngineData unitMass (+0x48) and dirty flag (+0x84), or throws on null object.
// @field NMData::EngineData +0x48 float unitMass
// @field NMData::EngineData +0x84 uint8_t field_0x84
void __stdcall fn_004B7C60(uint32_t* pObjPtr, uint32_t* pExpr) {
    uint8_t* obj = reinterpret_cast<uint8_t*>(*pObjPtr);
    if (!obj) {
        uint8_t exc[0x28];
        ext_0046C3C0(exc);
        ext_006A6DD2(exc, 0x009DEC1C);
        return;
    }

    typedef float (__thiscall *EvalFloatFn)(void* self, void* arg);
    void* target = reinterpret_cast<void*>(pExpr[1]);
    void** vtable = *reinterpret_cast<void***>(target);
    EvalFloatFn evalFn = reinterpret_cast<EvalFloatFn>(vtable[1]);

    float val = evalFn(target, pExpr);
    *reinterpret_cast<float*>(obj + 0x48) = val;
    *(obj + 0x84) = 1;
}
} // namespace lift_004B7C60

// [0x004B7C10]
namespace lift_004B7C10 {
// @name ExprParser::ReadWriteMethodType<NMData::EngineData, float, getUnitLength, float, setUnitLength>::vfunc_41
// @class ExprParser::ReadWriteMethodType
// @summary Sets NMData::EngineData::unitLength from an expression value via virtual getter, or throws on null target
// @field NMData::EngineData +0x44 float unitLength
// @field NMData::EngineData +0x84 uint8_t field_0x84


extern uint32_t mem_read32(uint32_t addr);
extern void mem_write_f32(uint32_t addr, float val);
extern void mem_write8(uint32_t addr, uint8_t val);
extern void ext_0046C3C0(uint32_t self);
extern void ext_006A6DD2(uint32_t exc_ptr, uint32_t throw_info);

extern void __stdcall fn_004B7C10(uint32_t target_ptr_addr, uint32_t value_addr) {
    uint32_t target = mem_read32(target_ptr_addr);
    if (target == 0) {
        uint8_t exc_buf[0x28];
        uint32_t exc_addr = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(exc_buf));
        ext_0046C3C0(exc_addr);
        ext_006A6DD2(exc_addr, 0x009DEC1Cu);
        return;
    }

    uint32_t obj = mem_read32(value_addr + 0x4u);
    uint32_t vtable = mem_read32(obj);
    uint32_t vfunc = mem_read32(vtable + 0x4u);
    using GetFloatFn = float(__thiscall*)(uint32_t, uint32_t);
    float val = reinterpret_cast<GetFloatFn>(static_cast<uintptr_t>(vfunc))(obj, value_addr);

    mem_write_f32(target + 0x44u, val);
    mem_write8(target + 0x84u, 1);
}
} // namespace lift_004B7C10

// [0x00488270]
namespace lift_00488270 {
// @name ExprParser::ReadWriteMethodType<NMData::DesiredPoseEventData, float>::vfunc_41
// @class ExprParser::ReadWriteMethodType<NMData::DesiredPoseEventData, float>
// @summary Evaluates a float expression value and writes it to DesiredPoseEventData::setEntryBlendPeriod, or throws an exception if the target pointer is null.
// @field ExprParser::ValuePtr +0x00 void* ptr
// @field ExprParser::Value +0x04 void* type


extern void __fastcall ext_00486C10(void* self, int edx_unused, float value);
extern void __fastcall ext_0046C3C0(void* exc, int edx_unused);
extern void __stdcall ext_006A6DD2(void* pExceptionObject, const void* pThrowInfo);

extern void __stdcall fn_00488270(void* dst_ptr_holder, void* src_value) {
    void* target = *reinterpret_cast<void**>(dst_ptr_holder);
    if (target != nullptr) {
        void* src_type = *reinterpret_cast<void**>(static_cast<uint8_t*>(src_value) + 0x4);
        void** vtable = *reinterpret_cast<void***>(src_type);
        using GetFloatFn = float(__thiscall*)(void* self, void* val);
        auto get_float = reinterpret_cast<GetFloatFn>(vtable[1]);
        float val = get_float(src_type, src_value);
        ext_00486C10(target, 0, val);
        return;
    }

    uint8_t exc[0x28];
    ext_0046C3C0(exc, 0);
    ext_006A6DD2(exc, reinterpret_cast<const void*>(0x009DEC1C));
}
} // namespace lift_00488270

// [0x004B1E80]
namespace lift_004B1E80 {
// @name ExprParser::ReadWriteMethodType<NMData::GraphEngineData,float,getMaxAutoWidth,setMaxAutoWidth>::vfunc_41
// @class ExprParser::ReadWriteMethodType<NMData::GraphEngineData,float,getMaxAutoWidth,setMaxAutoWidth>
// @summary Evaluates an expression value and stores it via setMaxAutoWidth, or throws if target is null.
// @field ExprParser::ValuePtrType +0x04 void* field_0x04


void __fastcall ext_004B0EC0(void* self, int edx_unused, float value);
void __fastcall ext_0046C3C0(void* exc, int edx_unused);
void __stdcall ext_006A6DD2(void* pExceptionObject, void* pThrowInfo);

extern void __stdcall fn_004B1E80(void** targetPtr, void* valueNode) {
    void* target = *targetPtr;
    if (target != nullptr) {
        void* inner = *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(valueNode) + 0x04);
        void** vtable = *reinterpret_cast<void***>(inner);
        auto getFloat = reinterpret_cast<float (__thiscall*)(void*, void*)>(vtable[1]);
        float val = getFloat(inner, valueNode);
        ext_004B0EC0(target, 0, val);
        return;
    }

    uint8_t exc[0x28];
    ext_0046C3C0(exc, 0);
    ext_006A6DD2(exc, reinterpret_cast<void*>(0x009DEC1C));
}
} // namespace lift_004B1E80

// [0x004C5B80]
namespace lift_004C5B80 {
// @name ExprParser::ReadWriteMethodType<NMData::ForceEventData, float, getRelativeAcceleration, float, setRelativeAcceleration>::vfunc_41
// @class ExprParser::ReadWriteMethodType
// @summary Evaluates the second argument as a float and calls ForceEventData::setRelativeAcceleration, or throws on null target
// @field ExprParser::Value arg2 +0x04 void* valueType


extern void __thiscall ext_004C4E80(void* self, float val);
extern void __thiscall ext_0046C3C0(void* self);
extern void __stdcall ext_006A6DD2(void* exc, uint32_t throwInfo);

void __thiscall fn_004C5B80(void* self, void** arg1, void** arg2) {
    (void)self;
    void* target = *arg1;
    if (target != nullptr) {
        void* valObj = arg2[1];
        void** vtable = *(void***)valObj;
        typedef float (__thiscall *EvalFloatFn)(void*, void**);
        EvalFloatFn evalFloat = (EvalFloatFn)vtable[1];
        float val = evalFloat(valObj, arg2);
        ext_004C4E80(target, val);
        return;
    }

    uint8_t exc[0x28];
    ext_0046C3C0(exc);
    ext_006A6DD2(exc, 0x009DEC1Cu);
}
} // namespace lift_004C5B80

// [0x004CEEF0]
namespace lift_004CEEF0 {
// @name ExprParser::ReadWriteMethodType<NMData::IncarnationEventData,float>::vfunc_41
// @class ExprParser::ReadWriteMethodType<NMData::IncarnationEventData,float>
// @summary Evaluates an expression to a float and sets NMData::IncarnationEventData::momentumScaleFactor, throwing if target is null.
// @field NMData::IncarnationEventData +0x00 void* instance
// @field ExprParser::ValuePtr +0x04 void* evaluator

extern void __fastcall ext_004CE570(void* self, int edx_unused, float value);
extern void __fastcall ext_0046C3C0(void* self);
extern void ext_006A6DD2(void);

extern void __stdcall fn_004CEEF0(void* arg1, void* arg2) {
    void* instance = *reinterpret_cast<void**>(arg1);
    if (instance != nullptr) {
        void* evaluator = *reinterpret_cast<void**>(reinterpret_cast<char*>(arg2) + 0x4);
        void** vtable = *reinterpret_cast<void***>(evaluator);
        using EvalFloatFn = float (__thiscall*)(void*, void*);
        float value = reinterpret_cast<EvalFloatFn>(vtable[1])(evaluator, arg2);
        ext_004CE570(instance, 0, value);
        return;
    }

    char exc[40];
    ext_0046C3C0(exc);
    ext_006A6DD2();
}
} // namespace lift_004CEEF0

// [0x004D1C60]
namespace lift_004D1C60 {
// @name ExprParser::ReadWriteMethodType<NMData::TransitionEventData, float, getMomentumScaleFactor, float, setMomentumScaleFactor>::vfunc_41
// @class ExprParser::ReadWriteMethodType
// @summary Sets the momentum scale factor on a TransitionEventData instance from an expression value, or throws if null.
// @field NMData::TransitionEventData +0x194 float m_momentumScaleFactor


extern void __fastcall ext_004D0AE0(void* self, int edx_unused, float value);
extern void __fastcall ext_0046C3C0(void* self, int edx_unused);
extern void __stdcall ext_006A6DD2(void* pExceptionObject, void* pThrowInfo);

void __stdcall fn_004D1C60(void** targetPtr, void* valueWrapper) {
    void* target = *targetPtr;
    if (target != nullptr) {
        void* exprObj = *(void**)((uint8_t*)valueWrapper + 4);
        void** vtable = *(void***)exprObj;
        typedef float(__thiscall* EvalFloatFn)(void*, void*);
        EvalFloatFn evalFloat = (EvalFloatFn)vtable[1];
        float val = evalFloat(exprObj, valueWrapper);
        ext_004D0AE0(target, 0, val);
        return;
    }

    uint8_t exc[0x28];
    ext_0046C3C0(exc, 0);
    ext_006A6DD2(exc, (void*)0x009DEC1C);
}
} // namespace lift_004D1C60

// [0x004DE890]
namespace lift_004DE890 {
// @name ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41
// @class ExprParser::ReadWriteMethodType
// @summary Sets strength on an AnimationEventData instance from a parsed expression value, or throws if null.
// @field ExprParser::ValuePtr +0x00 void* ptr
// @field ExprParser::ExprArg +0x04 void* typeObj


extern void __fastcall ext_004DDE80(void* self, int edx_unused, float value);
extern void __fastcall ext_0046C3C0(void* self, int edx_unused);
extern void __cdecl ext_006A6DD2(void* exceptionObject, void* throwInfo);

extern void __stdcall fn_004DE890(void** targetPtr, void* valueArg) {
    void* target = *targetPtr;
    if (target != nullptr) {
        void* typeObj = *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(valueArg) + 4);
        void** vtable = *reinterpret_cast<void***>(typeObj);
        using EvalFn = float (__thiscall*)(void*, void*);
        auto evalFn = reinterpret_cast<EvalFn>(vtable[1]);
        float val = evalFn(typeObj, valueArg);
        ext_004DDE80(target, 0, val);
        return;
    }

    uint8_t exc[0x28];
    ext_0046C3C0(exc, 0);
    ext_006A6DD2(exc, reinterpret_cast<void*>(0x009DEC1C));
}
} // namespace lift_004DE890

// [0x004DE8E0]
namespace lift_004DE8E0 {
// @name ExprParser::ReadWriteMethodType<NMData::AnimationEventData,float,getEntryBlendPeriod,setEntryBlendPeriod>::vfunc_41
// @class ExprParser::ReadWriteMethodType
// @summary Evaluates a float expression and sets AnimationEventData::entryBlendPeriod, or throws if target is null.
// @field ExprArg +0x04 void* valueObj


extern void __fastcall ext_004DDE90(void* self, int edx_unused, float value);
extern void __fastcall ext_0046C3C0(void* exc);
extern void __stdcall ext_006A6DD2(void* pExceptionObject, void* pThrowInfo);

extern void __stdcall fn_004DE8E0(void** targetPtr, void* exprArg) {
    void* target = *targetPtr;
    if (target != nullptr) {
        void* valueObj = *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(exprArg) + 0x04);
        void** vtable = *reinterpret_cast<void***>(valueObj);
        using EvalFloatFn = float (__thiscall*)(void* self, void* arg);
        EvalFloatFn evalFloat = reinterpret_cast<EvalFloatFn>(vtable[1]);
        float value = evalFloat(valueObj, exprArg);
        ext_004DDE90(target, 0, value);
        return;
    }

    uint8_t exc[0x28];
    ext_0046C3C0(exc);
    ext_006A6DD2(exc, reinterpret_cast<void*>(0x009DEC1C));
}
} // namespace lift_004DE8E0

// [0x004F6620]
namespace lift_004F6620 {
// @name ExprParser::ReadWriteMethodType<MatrixWithProperties, float, getX, float, setX>::vfunc_41
// @class ExprParser::ReadWriteMethodType
// @summary Evaluates a float expression and sets MatrixWithProperties::x, or throws if target is null.
// @field ExprArg +0x04 void* evaluator


extern void __fastcall ext_004F4E00(void* self, int edx_unused, float value);
extern void __fastcall ext_0046C3C0(void* exc, int edx_unused);
extern void ext_006A6DD2(void* exc, void* throw_info);

extern void __fastcall fn_004F6620(void* self, int edx_unused, void** target_ptr, void* expr_arg) {
    (void)self;
    (void)edx_unused;

    void* target = *target_ptr;
    if (target == nullptr) {
        uint8_t exc[0x28];
        ext_0046C3C0(exc, 0);
        ext_006A6DD2(exc, reinterpret_cast<void*>(0x009DEC1C));
        return;
    }

    void* evaluator = *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(expr_arg) + 0x4);
    void** vtable = *reinterpret_cast<void***>(evaluator);
    using EvalFn = float(__fastcall*)(void* self, int edx_unused, void* expr_arg);
    auto eval_fn = reinterpret_cast<EvalFn>(vtable[1]);
    float value = eval_fn(evaluator, 0, expr_arg);

    ext_004F4E00(target, 0, value);
}
} // namespace lift_004F6620

// [0x004F69A0]
namespace lift_004F69A0 {
extern void __fastcall ext_004F4E10(void* self, int edx_unused, float value);
extern void __thiscall ext_0046C3C0(void* self);
extern void __stdcall ext_006A6DD2(void* pExceptionObject, void* pThrowInfo);

// @name ExprParser::ReadWriteMethodType<MatrixWithProperties, float, getY, float, setY>::vfunc_41
// @class ExprParser::ReadWriteMethodType
// @summary Virtual setter that reads a float from the source value object and calls MatrixWithProperties::setY, or throws an exception if target is null.
// @field MatrixWithProperties* +0x00 void* target
// @field ValueObject +0x04 void* valueType
extern void __thiscall fn_004F69A0(void* self, void* target_ptr, void* value_obj) {
    (void)self;
    void* target = *reinterpret_cast<void**>(target_ptr);
    if (target != nullptr) {
        void* type_obj = *reinterpret_cast<void**>(static_cast<char*>(value_obj) + 0x4);
        void** vtable = *reinterpret_cast<void***>(type_obj);
        using ReadFloatFn = float(__thiscall*)(void*, void*);
        ReadFloatFn read_fn = reinterpret_cast<ReadFloatFn>(vtable[1]);
        float val = read_fn(type_obj, value_obj);
        ext_004F4E10(target, 0, val);
        return;
    }

    char exc_buf[0x28];
    ext_0046C3C0(exc_buf);
    ext_006A6DD2(exc_buf, reinterpret_cast<void*>(0x009DEC1C));
}
} // namespace lift_004F69A0

// [0x00470190]
namespace lift_00470190 {
extern void __thiscall ext_0046FA50(void* self, float value);
extern void __thiscall ext_0046C3C0(void* self);
extern void __stdcall ext_006A6DD2(void* pExceptionObject, uint32_t pThrowInfo);

// @name ExprParser::ReadWriteMethodType<RuntimeEngine,float,&RuntimeEngine::getTimeZoomFactor,float,&RuntimeEngine::setTimeZoomFactor>::vfunc_41
// @class ExprParser::ReadWriteMethodType<RuntimeEngine,float,&RuntimeEngine::getTimeZoomFactor,float,&RuntimeEngine::setTimeZoomFactor>
// @summary Evaluates an expression value and invokes RuntimeEngine::setTimeZoomFactor on the target object, or throws if null.
// @field ExprParser::ValuePtr arg1 +0x00 uint32_t target
// @field ExprParser::ExprNode arg2 +0x04 void* evaluator
extern void __thiscall fn_00470190(void* self, uint32_t* arg1, uint8_t* arg2)
{
    (void)self;
    uint32_t target = *arg1;
    if (target != 0) {
        void* evaluator = *reinterpret_cast<void**>(arg2 + 0x4);
        void** vtable = *reinterpret_cast<void***>(evaluator);
        using EvalFn = float(__thiscall*)(void*, void*);
        EvalFn eval = reinterpret_cast<EvalFn>(vtable[1]);
        float value = eval(evaluator, arg2);
        ext_0046FA50(reinterpret_cast<void*>(static_cast<uintptr_t>(target)), value);
        return;
    }

    alignas(16) uint8_t exc_buf[0x28];
    ext_0046C3C0(exc_buf);
    ext_006A6DD2(exc_buf, 0x009DEC1Cu);
}
} // namespace lift_00470190

// [0x0046DF10] ExprParser::ReadWriteMethodType<ImageExporter, float, {public: float __thiscall ImageExporter::getFrameRate(void) const, 0}, float, {public: void __thiscall ImageExporter::setFrameRate(float), 0}>::vfunc_41 (71 bytes)
namespace lift_0046DF10 {
// @name ExprParser::ReadWriteMethodType<ImageExporter, float, {public: float __thiscall ImageExporter::getFrameRate(void) const, 0}, float, {public: void __thiscall ImageExporter::setFrameRate(float), 0}>::vfunc_41
// @class ExprParser::ReadWriteMethodType<ImageExporter, float, {public: float __thiscall ImageExporter::getFrameRate(void) const, 0}, float, {public: void __thiscall ImageExporter::setFrameRate(float), 0}>
// @summary Auto-lifted identical-shape clone of 0x004DE890 (ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41).
namespace lift_004DE890 {
// @name ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41
// @class ExprParser::ReadWriteMethodType
// @summary Sets strength on an AnimationEventData instance from a parsed expression value, or throws if null.
// @field ExprParser::ValuePtr +0x00 void* ptr
// @field ExprParser::ExprArg +0x04 void* typeObj


extern void __fastcall ext_0046C2F0(void* self, int edx_unused, float value);
extern void __fastcall ext_0046C3C0(void* self, int edx_unused);
extern void __cdecl ext_006A6DD2(void* exceptionObject, void* throwInfo);

extern void __stdcall fn_0046DF10(void** targetPtr, void* valueArg) {
    void* target = *targetPtr;
    if (target != nullptr) {
        void* typeObj = *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(valueArg) + 4);
        void** vtable = *reinterpret_cast<void***>(typeObj);
        using EvalFn = float (__thiscall*)(void*, void*);
        auto evalFn = reinterpret_cast<EvalFn>(vtable[1]);
        float val = evalFn(typeObj, valueArg);
        ext_0046C2F0(target, 0, val);
        return;
    }

    uint8_t exc[0x28];
    ext_0046C3C0(exc, 0);
    ext_006A6DD2(exc, reinterpret_cast<void*>(0x009DEC1C));
}
} // namespace lift_004DE890
} // namespace lift_0046DF10

// [0x00470240] ExprParser::ReadWriteMethodType<RuntimeEngine, float, {public: float __thiscall RuntimeEngine::getPosBufferFrameRate(void) const, 0}, float, {public: void __thiscall RuntimeEngine::setPosBufferFrameRate(float), 0}>::vfunc_41 (71 bytes)
namespace lift_00470240 {
// @name ExprParser::ReadWriteMethodType<RuntimeEngine, float, {public: float __thiscall RuntimeEngine::getPosBufferFrameRate(void) const, 0}, float, {public: void __thiscall RuntimeEngine::setPosBufferFrameRate(float), 0}>::vfunc_41
// @class ExprParser::ReadWriteMethodType<RuntimeEngine, float, {public: float __thiscall RuntimeEngine::getPosBufferFrameRate(void) const, 0}, float, {public: void __thiscall RuntimeEngine::setPosBufferFrameRate(float), 0}>
// @summary Auto-lifted identical-shape clone of 0x004DE890 (ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41).
namespace lift_004DE890 {
// @name ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41
// @class ExprParser::ReadWriteMethodType
// @summary Sets strength on an AnimationEventData instance from a parsed expression value, or throws if null.
// @field ExprParser::ValuePtr +0x00 void* ptr
// @field ExprParser::ExprArg +0x04 void* typeObj


extern void __fastcall ext_0046FEA0(void* self, int edx_unused, float value);
extern void __fastcall ext_0046C3C0(void* self, int edx_unused);
extern void __cdecl ext_006A6DD2(void* exceptionObject, void* throwInfo);

extern void __stdcall fn_00470240(void** targetPtr, void* valueArg) {
    void* target = *targetPtr;
    if (target != nullptr) {
        void* typeObj = *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(valueArg) + 4);
        void** vtable = *reinterpret_cast<void***>(typeObj);
        using EvalFn = float (__thiscall*)(void*, void*);
        auto evalFn = reinterpret_cast<EvalFn>(vtable[1]);
        float val = evalFn(typeObj, valueArg);
        ext_0046FEA0(target, 0, val);
        return;
    }

    uint8_t exc[0x28];
    ext_0046C3C0(exc, 0);
    ext_006A6DD2(exc, reinterpret_cast<void*>(0x009DEC1C));
}
} // namespace lift_004DE890
} // namespace lift_00470240

// [0x00470AF0] ExprParser::ReadWriteMethodType<RuntimeEngine, float, {public: float __thiscall RuntimeEngine::getSimulationFrameRate(void) const, 0}, float, {public: void __thiscall RuntimeEngine::setSimulationFrameRate(float), 0}>::vfunc_41 (71 bytes)
namespace lift_00470AF0 {
// @name ExprParser::ReadWriteMethodType<RuntimeEngine, float, {public: float __thiscall RuntimeEngine::getSimulationFrameRate(void) const, 0}, float, {public: void __thiscall RuntimeEngine::setSimulationFrameRate(float), 0}>::vfunc_41
// @class ExprParser::ReadWriteMethodType<RuntimeEngine, float, {public: float __thiscall RuntimeEngine::getSimulationFrameRate(void) const, 0}, float, {public: void __thiscall RuntimeEngine::setSimulationFrameRate(float), 0}>
// @summary Auto-lifted identical-shape clone of 0x004DE890 (ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41).
namespace lift_004DE890 {
// @name ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41
// @class ExprParser::ReadWriteMethodType
// @summary Sets strength on an AnimationEventData instance from a parsed expression value, or throws if null.
// @field ExprParser::ValuePtr +0x00 void* ptr
// @field ExprParser::ExprArg +0x04 void* typeObj


extern void __fastcall ext_0046FC10(void* self, int edx_unused, float value);
extern void __fastcall ext_0046C3C0(void* self, int edx_unused);
extern void __cdecl ext_006A6DD2(void* exceptionObject, void* throwInfo);

extern void __stdcall fn_00470AF0(void** targetPtr, void* valueArg) {
    void* target = *targetPtr;
    if (target != nullptr) {
        void* typeObj = *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(valueArg) + 4);
        void** vtable = *reinterpret_cast<void***>(typeObj);
        using EvalFn = float (__thiscall*)(void*, void*);
        auto evalFn = reinterpret_cast<EvalFn>(vtable[1]);
        float val = evalFn(typeObj, valueArg);
        ext_0046FC10(target, 0, val);
        return;
    }

    uint8_t exc[0x28];
    ext_0046C3C0(exc, 0);
    ext_006A6DD2(exc, reinterpret_cast<void*>(0x009DEC1C));
}
} // namespace lift_004DE890
} // namespace lift_00470AF0

// [0x004B1F20] ExprParser::ReadWriteMethodType<NMData::GraphEngineData, float, {public: float __thiscall NMData::GraphEngineData::getXMin(void) const, 0}, float, {public: void __thiscall NMData::GraphEngineData::setXMin(float), 0}>::vfunc_41 (71 bytes)
namespace lift_004B1F20 {
// @name ExprParser::ReadWriteMethodType<NMData::GraphEngineData, float, {public: float __thiscall NMData::GraphEngineData::getXMin(void) const, 0}, float, {public: void __thiscall NMData::GraphEngineData::setXMin(float), 0}>::vfunc_41
// @class ExprParser::ReadWriteMethodType<NMData::GraphEngineData, float, {public: float __thiscall NMData::GraphEngineData::getXMin(void) const, 0}, float, {public: void __thiscall NMData::GraphEngineData::setXMin(float), 0}>
// @summary Auto-lifted identical-shape clone of 0x004DE890 (ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41).
namespace lift_004DE890 {
// @name ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41
// @class ExprParser::ReadWriteMethodType
// @summary Sets strength on an AnimationEventData instance from a parsed expression value, or throws if null.
// @field ExprParser::ValuePtr +0x00 void* ptr
// @field ExprParser::ExprArg +0x04 void* typeObj


extern void __fastcall ext_004B10A0(void* self, int edx_unused, float value);
extern void __fastcall ext_0046C3C0(void* self, int edx_unused);
extern void __cdecl ext_006A6DD2(void* exceptionObject, void* throwInfo);

extern void __stdcall fn_004B1F20(void** targetPtr, void* valueArg) {
    void* target = *targetPtr;
    if (target != nullptr) {
        void* typeObj = *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(valueArg) + 4);
        void** vtable = *reinterpret_cast<void***>(typeObj);
        using EvalFn = float (__thiscall*)(void*, void*);
        auto evalFn = reinterpret_cast<EvalFn>(vtable[1]);
        float val = evalFn(typeObj, valueArg);
        ext_004B10A0(target, 0, val);
        return;
    }

    uint8_t exc[0x28];
    ext_0046C3C0(exc, 0);
    ext_006A6DD2(exc, reinterpret_cast<void*>(0x009DEC1C));
}
} // namespace lift_004DE890
} // namespace lift_004B1F20

// [0x004B2020] ExprParser::ReadWriteMethodType<NMData::GraphEngineData, float, {public: float __thiscall NMData::GraphEngineData::getXMax(void) const, 0}, float, {public: void __thiscall NMData::GraphEngineData::setXMax(float), 0}>::vfunc_41 (71 bytes)
namespace lift_004B2020 {
// @name ExprParser::ReadWriteMethodType<NMData::GraphEngineData, float, {public: float __thiscall NMData::GraphEngineData::getXMax(void) const, 0}, float, {public: void __thiscall NMData::GraphEngineData::setXMax(float), 0}>::vfunc_41
// @class ExprParser::ReadWriteMethodType<NMData::GraphEngineData, float, {public: float __thiscall NMData::GraphEngineData::getXMax(void) const, 0}, float, {public: void __thiscall NMData::GraphEngineData::setXMax(float), 0}>
// @summary Auto-lifted identical-shape clone of 0x004DE890 (ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41).
namespace lift_004DE890 {
// @name ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41
// @class ExprParser::ReadWriteMethodType
// @summary Sets strength on an AnimationEventData instance from a parsed expression value, or throws if null.
// @field ExprParser::ValuePtr +0x00 void* ptr
// @field ExprParser::ExprArg +0x04 void* typeObj


extern void __fastcall ext_004B10D0(void* self, int edx_unused, float value);
extern void __fastcall ext_0046C3C0(void* self, int edx_unused);
extern void __cdecl ext_006A6DD2(void* exceptionObject, void* throwInfo);

extern void __stdcall fn_004B2020(void** targetPtr, void* valueArg) {
    void* target = *targetPtr;
    if (target != nullptr) {
        void* typeObj = *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(valueArg) + 4);
        void** vtable = *reinterpret_cast<void***>(typeObj);
        using EvalFn = float (__thiscall*)(void*, void*);
        auto evalFn = reinterpret_cast<EvalFn>(vtable[1]);
        float val = evalFn(typeObj, valueArg);
        ext_004B10D0(target, 0, val);
        return;
    }

    uint8_t exc[0x28];
    ext_0046C3C0(exc, 0);
    ext_006A6DD2(exc, reinterpret_cast<void*>(0x009DEC1C));
}
} // namespace lift_004DE890
} // namespace lift_004B2020

// [0x004B2370] ExprParser::ReadWriteMethodType<NMData::GraphEngineData, float, {public: float __thiscall NMData::GraphEngineData::getYMin(void) const, 0}, float, {public: void __thiscall NMData::GraphEngineData::setYMin(float), 0}>::vfunc_41 (71 bytes)
namespace lift_004B2370 {
// @name ExprParser::ReadWriteMethodType<NMData::GraphEngineData, float, {public: float __thiscall NMData::GraphEngineData::getYMin(void) const, 0}, float, {public: void __thiscall NMData::GraphEngineData::setYMin(float), 0}>::vfunc_41
// @class ExprParser::ReadWriteMethodType<NMData::GraphEngineData, float, {public: float __thiscall NMData::GraphEngineData::getYMin(void) const, 0}, float, {public: void __thiscall NMData::GraphEngineData::setYMin(float), 0}>
// @summary Auto-lifted identical-shape clone of 0x004DE890 (ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41).
namespace lift_004DE890 {
// @name ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41
// @class ExprParser::ReadWriteMethodType
// @summary Sets strength on an AnimationEventData instance from a parsed expression value, or throws if null.
// @field ExprParser::ValuePtr +0x00 void* ptr
// @field ExprParser::ExprArg +0x04 void* typeObj


extern void __fastcall ext_004B1100(void* self, int edx_unused, float value);
extern void __fastcall ext_0046C3C0(void* self, int edx_unused);
extern void __cdecl ext_006A6DD2(void* exceptionObject, void* throwInfo);

extern void __stdcall fn_004B2370(void** targetPtr, void* valueArg) {
    void* target = *targetPtr;
    if (target != nullptr) {
        void* typeObj = *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(valueArg) + 4);
        void** vtable = *reinterpret_cast<void***>(typeObj);
        using EvalFn = float (__thiscall*)(void*, void*);
        auto evalFn = reinterpret_cast<EvalFn>(vtable[1]);
        float val = evalFn(typeObj, valueArg);
        ext_004B1100(target, 0, val);
        return;
    }

    uint8_t exc[0x28];
    ext_0046C3C0(exc, 0);
    ext_006A6DD2(exc, reinterpret_cast<void*>(0x009DEC1C));
}
} // namespace lift_004DE890
} // namespace lift_004B2370

// [0x004B2710] ExprParser::ReadWriteMethodType<NMData::GraphEngineData, float, {public: float __thiscall NMData::GraphEngineData::getYMax(void) const, 0}, float, {public: void __thiscall NMData::GraphEngineData::setYMax(float), 0}>::vfunc_41 (71 bytes)
namespace lift_004B2710 {
// @name ExprParser::ReadWriteMethodType<NMData::GraphEngineData, float, {public: float __thiscall NMData::GraphEngineData::getYMax(void) const, 0}, float, {public: void __thiscall NMData::GraphEngineData::setYMax(float), 0}>::vfunc_41
// @class ExprParser::ReadWriteMethodType<NMData::GraphEngineData, float, {public: float __thiscall NMData::GraphEngineData::getYMax(void) const, 0}, float, {public: void __thiscall NMData::GraphEngineData::setYMax(float), 0}>
// @summary Auto-lifted identical-shape clone of 0x004DE890 (ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41).
namespace lift_004DE890 {
// @name ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41
// @class ExprParser::ReadWriteMethodType
// @summary Sets strength on an AnimationEventData instance from a parsed expression value, or throws if null.
// @field ExprParser::ValuePtr +0x00 void* ptr
// @field ExprParser::ExprArg +0x04 void* typeObj


extern void __fastcall ext_004B1130(void* self, int edx_unused, float value);
extern void __fastcall ext_0046C3C0(void* self, int edx_unused);
extern void __cdecl ext_006A6DD2(void* exceptionObject, void* throwInfo);

extern void __stdcall fn_004B2710(void** targetPtr, void* valueArg) {
    void* target = *targetPtr;
    if (target != nullptr) {
        void* typeObj = *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(valueArg) + 4);
        void** vtable = *reinterpret_cast<void***>(typeObj);
        using EvalFn = float (__thiscall*)(void*, void*);
        auto evalFn = reinterpret_cast<EvalFn>(vtable[1]);
        float val = evalFn(typeObj, valueArg);
        ext_004B1130(target, 0, val);
        return;
    }

    uint8_t exc[0x28];
    ext_0046C3C0(exc, 0);
    ext_006A6DD2(exc, reinterpret_cast<void*>(0x009DEC1C));
}
} // namespace lift_004DE890
} // namespace lift_004B2710

// [0x004F63B0] ExprParser::ReadWriteMethodType<MatrixWithProperties, float, &public: float __thiscall MatrixWithProperties::getAlpha(void) const, float, &public: void __thiscall MatrixWithProperties::setAlpha(float)>::vfunc_41 (71 bytes)
namespace lift_004F63B0 {
// @name ExprParser::ReadWriteMethodType<MatrixWithProperties, float, &public: float __thiscall MatrixWithProperties::getAlpha(void) const, float, &public: void __thiscall MatrixWithProperties::setAlpha(float)>::vfunc_41
// @class ExprParser::ReadWriteMethodType<MatrixWithProperties, float, &public: float __thiscall MatrixWithProperties::getAlpha(void) const, float, &public: void __thiscall MatrixWithProperties::setAlpha(float)>
// @summary Auto-lifted identical-shape clone of 0x004DE890 (ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41).
namespace lift_004DE890 {
// @name ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41
// @class ExprParser::ReadWriteMethodType
// @summary Sets strength on an AnimationEventData instance from a parsed expression value, or throws if null.
// @field ExprParser::ValuePtr +0x00 void* ptr
// @field ExprParser::ExprArg +0x04 void* typeObj


extern void __fastcall ext_004F5170(void* self, int edx_unused, float value);
extern void __fastcall ext_0046C3C0(void* self, int edx_unused);
extern void __cdecl ext_006A6DD2(void* exceptionObject, void* throwInfo);

extern void __stdcall fn_004F63B0(void** targetPtr, void* valueArg) {
    void* target = *targetPtr;
    if (target != nullptr) {
        void* typeObj = *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(valueArg) + 4);
        void** vtable = *reinterpret_cast<void***>(typeObj);
        using EvalFn = float (__thiscall*)(void*, void*);
        auto evalFn = reinterpret_cast<EvalFn>(vtable[1]);
        float val = evalFn(typeObj, valueArg);
        ext_004F5170(target, 0, val);
        return;
    }

    uint8_t exc[0x28];
    ext_0046C3C0(exc, 0);
    ext_006A6DD2(exc, reinterpret_cast<void*>(0x009DEC1C));
}
} // namespace lift_004DE890
} // namespace lift_004F63B0

// [0x004F6480] ExprParser::ReadWriteMethodType<MatrixWithProperties, float, &public: float __thiscall MatrixWithProperties::getBeta(void) const, float, &public: void __thiscall MatrixWithProperties::setBeta(float)>::vfunc_41 (71 bytes)
namespace lift_004F6480 {
// @name ExprParser::ReadWriteMethodType<MatrixWithProperties, float, &public: float __thiscall MatrixWithProperties::getBeta(void) const, float, &public: void __thiscall MatrixWithProperties::setBeta(float)>::vfunc_41
// @class ExprParser::ReadWriteMethodType<MatrixWithProperties, float, &public: float __thiscall MatrixWithProperties::getBeta(void) const, float, &public: void __thiscall MatrixWithProperties::setBeta(float)>
// @summary Auto-lifted identical-shape clone of 0x004DE890 (ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41).
namespace lift_004DE890 {
// @name ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41
// @class ExprParser::ReadWriteMethodType
// @summary Sets strength on an AnimationEventData instance from a parsed expression value, or throws if null.
// @field ExprParser::ValuePtr +0x00 void* ptr
// @field ExprParser::ExprArg +0x04 void* typeObj


extern void __fastcall ext_004F51F0(void* self, int edx_unused, float value);
extern void __fastcall ext_0046C3C0(void* self, int edx_unused);
extern void __cdecl ext_006A6DD2(void* exceptionObject, void* throwInfo);

extern void __stdcall fn_004F6480(void** targetPtr, void* valueArg) {
    void* target = *targetPtr;
    if (target != nullptr) {
        void* typeObj = *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(valueArg) + 4);
        void** vtable = *reinterpret_cast<void***>(typeObj);
        using EvalFn = float (__thiscall*)(void*, void*);
        auto evalFn = reinterpret_cast<EvalFn>(vtable[1]);
        float val = evalFn(typeObj, valueArg);
        ext_004F51F0(target, 0, val);
        return;
    }

    uint8_t exc[0x28];
    ext_0046C3C0(exc, 0);
    ext_006A6DD2(exc, reinterpret_cast<void*>(0x009DEC1C));
}
} // namespace lift_004DE890
} // namespace lift_004F6480

// [0x004F6550] ExprParser::ReadWriteMethodType<MatrixWithProperties, float, &public: float __thiscall MatrixWithProperties::getGamma(void) const, float, &public: void __thiscall MatrixWithProperties::setGamma(float)>::vfunc_41 (71 bytes)
namespace lift_004F6550 {
// @name ExprParser::ReadWriteMethodType<MatrixWithProperties, float, &public: float __thiscall MatrixWithProperties::getGamma(void) const, float, &public: void __thiscall MatrixWithProperties::setGamma(float)>::vfunc_41
// @class ExprParser::ReadWriteMethodType<MatrixWithProperties, float, &public: float __thiscall MatrixWithProperties::getGamma(void) const, float, &public: void __thiscall MatrixWithProperties::setGamma(float)>
// @summary Auto-lifted identical-shape clone of 0x004DE890 (ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41).
namespace lift_004DE890 {
// @name ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41
// @class ExprParser::ReadWriteMethodType
// @summary Sets strength on an AnimationEventData instance from a parsed expression value, or throws if null.
// @field ExprParser::ValuePtr +0x00 void* ptr
// @field ExprParser::ExprArg +0x04 void* typeObj


extern void __fastcall ext_004F5270(void* self, int edx_unused, float value);
extern void __fastcall ext_0046C3C0(void* self, int edx_unused);
extern void __cdecl ext_006A6DD2(void* exceptionObject, void* throwInfo);

extern void __stdcall fn_004F6550(void** targetPtr, void* valueArg) {
    void* target = *targetPtr;
    if (target != nullptr) {
        void* typeObj = *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(valueArg) + 4);
        void** vtable = *reinterpret_cast<void***>(typeObj);
        using EvalFn = float (__thiscall*)(void*, void*);
        auto evalFn = reinterpret_cast<EvalFn>(vtable[1]);
        float val = evalFn(typeObj, valueArg);
        ext_004F5270(target, 0, val);
        return;
    }

    uint8_t exc[0x28];
    ext_0046C3C0(exc, 0);
    ext_006A6DD2(exc, reinterpret_cast<void*>(0x009DEC1C));
}
} // namespace lift_004DE890
} // namespace lift_004F6550

// [0x004F6CF0] ExprParser::ReadWriteMethodType<MatrixWithProperties, float, &public: float __thiscall MatrixWithProperties::getZ(void) const, float, &public: void __thiscall MatrixWithProperties::setZ(float)>::vfunc_41 (71 bytes)
namespace lift_004F6CF0 {
// @name ExprParser::ReadWriteMethodType<MatrixWithProperties, float, &public: float __thiscall MatrixWithProperties::getZ(void) const, float, &public: void __thiscall MatrixWithProperties::setZ(float)>::vfunc_41
// @class ExprParser::ReadWriteMethodType<MatrixWithProperties, float, &public: float __thiscall MatrixWithProperties::getZ(void) const, float, &public: void __thiscall MatrixWithProperties::setZ(float)>
// @summary Auto-lifted identical-shape clone of 0x004DE890 (ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41).
namespace lift_004DE890 {
// @name ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41
// @class ExprParser::ReadWriteMethodType
// @summary Sets strength on an AnimationEventData instance from a parsed expression value, or throws if null.
// @field ExprParser::ValuePtr +0x00 void* ptr
// @field ExprParser::ExprArg +0x04 void* typeObj


extern void __fastcall ext_004F4E20(void* self, int edx_unused, float value);
extern void __fastcall ext_0046C3C0(void* self, int edx_unused);
extern void __cdecl ext_006A6DD2(void* exceptionObject, void* throwInfo);

extern void __stdcall fn_004F6CF0(void** targetPtr, void* valueArg) {
    void* target = *targetPtr;
    if (target != nullptr) {
        void* typeObj = *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(valueArg) + 4);
        void** vtable = *reinterpret_cast<void***>(typeObj);
        using EvalFn = float (__thiscall*)(void*, void*);
        auto evalFn = reinterpret_cast<EvalFn>(vtable[1]);
        float val = evalFn(typeObj, valueArg);
        ext_004F4E20(target, 0, val);
        return;
    }

    uint8_t exc[0x28];
    ext_0046C3C0(exc, 0);
    ext_006A6DD2(exc, reinterpret_cast<void*>(0x009DEC1C));
}
} // namespace lift_004DE890
} // namespace lift_004F6CF0

// [0x004F7250] ExprParser::ReadWriteMethodType<MatrixWithProperties, float, &public: float __thiscall MatrixWithProperties::getMagnitude(void) const, float, &public: void __thiscall MatrixWithProperties::setMagnitude(float)>::vfunc_41 (71 bytes)
namespace lift_004F7250 {
// @name ExprParser::ReadWriteMethodType<MatrixWithProperties, float, &public: float __thiscall MatrixWithProperties::getMagnitude(void) const, float, &public: void __thiscall MatrixWithProperties::setMagnitude(float)>::vfunc_41
// @class ExprParser::ReadWriteMethodType<MatrixWithProperties, float, &public: float __thiscall MatrixWithProperties::getMagnitude(void) const, float, &public: void __thiscall MatrixWithProperties::setMagnitude(float)>
// @summary Auto-lifted identical-shape clone of 0x004DE890 (ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41).
namespace lift_004DE890 {
// @name ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41
// @class ExprParser::ReadWriteMethodType
// @summary Sets strength on an AnimationEventData instance from a parsed expression value, or throws if null.
// @field ExprParser::ValuePtr +0x00 void* ptr
// @field ExprParser::ExprArg +0x04 void* typeObj


extern void __fastcall ext_004F71B0(void* self, int edx_unused, float value);
extern void __fastcall ext_0046C3C0(void* self, int edx_unused);
extern void __cdecl ext_006A6DD2(void* exceptionObject, void* throwInfo);

extern void __stdcall fn_004F7250(void** targetPtr, void* valueArg) {
    void* target = *targetPtr;
    if (target != nullptr) {
        void* typeObj = *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(valueArg) + 4);
        void** vtable = *reinterpret_cast<void***>(typeObj);
        using EvalFn = float (__thiscall*)(void*, void*);
        auto evalFn = reinterpret_cast<EvalFn>(vtable[1]);
        float val = evalFn(typeObj, valueArg);
        ext_004F71B0(target, 0, val);
        return;
    }

    uint8_t exc[0x28];
    ext_0046C3C0(exc, 0);
    ext_006A6DD2(exc, reinterpret_cast<void*>(0x009DEC1C));
}
} // namespace lift_004DE890
} // namespace lift_004F7250

// [0x004F75A0] ExprParser::ReadWriteMethodType<MatrixWithProperties, float, &public: float __thiscall MatrixWithProperties::getPhi(void) const, float, &public: void __thiscall MatrixWithProperties::setPhi(float)>::vfunc_41 (71 bytes)
namespace lift_004F75A0 {
// @name ExprParser::ReadWriteMethodType<MatrixWithProperties, float, &public: float __thiscall MatrixWithProperties::getPhi(void) const, float, &public: void __thiscall MatrixWithProperties::setPhi(float)>::vfunc_41
// @class ExprParser::ReadWriteMethodType<MatrixWithProperties, float, &public: float __thiscall MatrixWithProperties::getPhi(void) const, float, &public: void __thiscall MatrixWithProperties::setPhi(float)>
// @summary Auto-lifted identical-shape clone of 0x004DE890 (ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41).
namespace lift_004DE890 {
// @name ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41
// @class ExprParser::ReadWriteMethodType
// @summary Sets strength on an AnimationEventData instance from a parsed expression value, or throws if null.
// @field ExprParser::ValuePtr +0x00 void* ptr
// @field ExprParser::ExprArg +0x04 void* typeObj


extern void __fastcall ext_004F7160(void* self, int edx_unused, float value);
extern void __fastcall ext_0046C3C0(void* self, int edx_unused);
extern void __cdecl ext_006A6DD2(void* exceptionObject, void* throwInfo);

extern void __stdcall fn_004F75A0(void** targetPtr, void* valueArg) {
    void* target = *targetPtr;
    if (target != nullptr) {
        void* typeObj = *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(valueArg) + 4);
        void** vtable = *reinterpret_cast<void***>(typeObj);
        using EvalFn = float (__thiscall*)(void*, void*);
        auto evalFn = reinterpret_cast<EvalFn>(vtable[1]);
        float val = evalFn(typeObj, valueArg);
        ext_004F7160(target, 0, val);
        return;
    }

    uint8_t exc[0x28];
    ext_0046C3C0(exc, 0);
    ext_006A6DD2(exc, reinterpret_cast<void*>(0x009DEC1C));
}
} // namespace lift_004DE890
} // namespace lift_004F75A0

// [0x004F75F0] ExprParser::ReadWriteMethodType<MatrixWithProperties, float, &public: float __thiscall MatrixWithProperties::getTheta(void) const, float, &public: void __thiscall MatrixWithProperties::setTheta(float)>::vfunc_41 (71 bytes)
namespace lift_004F75F0 {
// @name ExprParser::ReadWriteMethodType<MatrixWithProperties, float, &public: float __thiscall MatrixWithProperties::getTheta(void) const, float, &public: void __thiscall MatrixWithProperties::setTheta(float)>::vfunc_41
// @class ExprParser::ReadWriteMethodType<MatrixWithProperties, float, &public: float __thiscall MatrixWithProperties::getTheta(void) const, float, &public: void __thiscall MatrixWithProperties::setTheta(float)>
// @summary Auto-lifted identical-shape clone of 0x004DE890 (ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41).
namespace lift_004DE890 {
// @name ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41
// @class ExprParser::ReadWriteMethodType
// @summary Sets strength on an AnimationEventData instance from a parsed expression value, or throws if null.
// @field ExprParser::ValuePtr +0x00 void* ptr
// @field ExprParser::ExprArg +0x04 void* typeObj


extern void __fastcall ext_004F7110(void* self, int edx_unused, float value);
extern void __fastcall ext_0046C3C0(void* self, int edx_unused);
extern void __cdecl ext_006A6DD2(void* exceptionObject, void* throwInfo);

extern void __stdcall fn_004F75F0(void** targetPtr, void* valueArg) {
    void* target = *targetPtr;
    if (target != nullptr) {
        void* typeObj = *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(valueArg) + 4);
        void** vtable = *reinterpret_cast<void***>(typeObj);
        using EvalFn = float (__thiscall*)(void*, void*);
        auto evalFn = reinterpret_cast<EvalFn>(vtable[1]);
        float val = evalFn(typeObj, valueArg);
        ext_004F7110(target, 0, val);
        return;
    }

    uint8_t exc[0x28];
    ext_0046C3C0(exc, 0);
    ext_006A6DD2(exc, reinterpret_cast<void*>(0x009DEC1C));
}
} // namespace lift_004DE890
} // namespace lift_004F75F0

// [0x00511F90] ExprParser::ReadWriteMethodType<Chromosome::Descriptor, float, {public: float __thiscall Chromosome::Descriptor::getLowerLimit(void) const, 0}, float, {public: void __thiscall Chromosome::Descriptor::setLowerLimit(float), 0}>::vfunc_41 (71 bytes)
namespace lift_00511F90 {
// @name ExprParser::ReadWriteMethodType<Chromosome::Descriptor, float, {public: float __thiscall Chromosome::Descriptor::getLowerLimit(void) const, 0}, float, {public: void __thiscall Chromosome::Descriptor::setLowerLimit(float), 0}>::vfunc_41
// @class ExprParser::ReadWriteMethodType<Chromosome::Descriptor, float, {public: float __thiscall Chromosome::Descriptor::getLowerLimit(void) const, 0}, float, {public: void __thiscall Chromosome::Descriptor::setLowerLimit(float), 0}>
// @summary Auto-lifted identical-shape clone of 0x004DE890 (ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41).
namespace lift_004DE890 {
// @name ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41
// @class ExprParser::ReadWriteMethodType
// @summary Sets strength on an AnimationEventData instance from a parsed expression value, or throws if null.
// @field ExprParser::ValuePtr +0x00 void* ptr
// @field ExprParser::ExprArg +0x04 void* typeObj


extern void __fastcall ext_00511290(void* self, int edx_unused, float value);
extern void __fastcall ext_0046C3C0(void* self, int edx_unused);
extern void __cdecl ext_006A6DD2(void* exceptionObject, void* throwInfo);

extern void __stdcall fn_00511F90(void** targetPtr, void* valueArg) {
    void* target = *targetPtr;
    if (target != nullptr) {
        void* typeObj = *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(valueArg) + 4);
        void** vtable = *reinterpret_cast<void***>(typeObj);
        using EvalFn = float (__thiscall*)(void*, void*);
        auto evalFn = reinterpret_cast<EvalFn>(vtable[1]);
        float val = evalFn(typeObj, valueArg);
        ext_00511290(target, 0, val);
        return;
    }

    uint8_t exc[0x28];
    ext_0046C3C0(exc, 0);
    ext_006A6DD2(exc, reinterpret_cast<void*>(0x009DEC1C));
}
} // namespace lift_004DE890
} // namespace lift_00511F90

// [0x00512060] ExprParser::ReadWriteMethodType<Chromosome::Descriptor, float, {public: float __thiscall Chromosome::Descriptor::getUpperLimit(void) const, 0}, float, {public: void __thiscall Chromosome::Descriptor::setUpperLimit(float), 0}>::vfunc_41 (71 bytes)
namespace lift_00512060 {
// @name ExprParser::ReadWriteMethodType<Chromosome::Descriptor, float, {public: float __thiscall Chromosome::Descriptor::getUpperLimit(void) const, 0}, float, {public: void __thiscall Chromosome::Descriptor::setUpperLimit(float), 0}>::vfunc_41
// @class ExprParser::ReadWriteMethodType<Chromosome::Descriptor, float, {public: float __thiscall Chromosome::Descriptor::getUpperLimit(void) const, 0}, float, {public: void __thiscall Chromosome::Descriptor::setUpperLimit(float), 0}>
// @summary Auto-lifted identical-shape clone of 0x004DE890 (ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41).
namespace lift_004DE890 {
// @name ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41
// @class ExprParser::ReadWriteMethodType
// @summary Sets strength on an AnimationEventData instance from a parsed expression value, or throws if null.
// @field ExprParser::ValuePtr +0x00 void* ptr
// @field ExprParser::ExprArg +0x04 void* typeObj


extern void __fastcall ext_005112A0(void* self, int edx_unused, float value);
extern void __fastcall ext_0046C3C0(void* self, int edx_unused);
extern void __cdecl ext_006A6DD2(void* exceptionObject, void* throwInfo);

extern void __stdcall fn_00512060(void** targetPtr, void* valueArg) {
    void* target = *targetPtr;
    if (target != nullptr) {
        void* typeObj = *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(valueArg) + 4);
        void** vtable = *reinterpret_cast<void***>(typeObj);
        using EvalFn = float (__thiscall*)(void*, void*);
        auto evalFn = reinterpret_cast<EvalFn>(vtable[1]);
        float val = evalFn(typeObj, valueArg);
        ext_005112A0(target, 0, val);
        return;
    }

    uint8_t exc[0x28];
    ext_0046C3C0(exc, 0);
    ext_006A6DD2(exc, reinterpret_cast<void*>(0x009DEC1C));
}
} // namespace lift_004DE890
} // namespace lift_00512060

// [0x0051A400] ExprParser::ReadWriteMethodType<NMData::RealChannel, float, &public: float __thiscall NMData::RealChannel::getValue(void) const, float, &public: void __thiscall NMData::RealChannel::setKeyFrame(float)>::vfunc_41 (71 bytes)
namespace lift_0051A400 {
// @name ExprParser::ReadWriteMethodType<NMData::RealChannel, float, &public: float __thiscall NMData::RealChannel::getValue(void) const, float, &public: void __thiscall NMData::RealChannel::setKeyFrame(float)>::vfunc_41
// @class ExprParser::ReadWriteMethodType<NMData::RealChannel, float, &public: float __thiscall NMData::RealChannel::getValue(void) const, float, &public: void __thiscall NMData::RealChannel::setKeyFrame(float)>
// @summary Auto-lifted identical-shape clone of 0x004DE890 (ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41).
namespace lift_004DE890 {
// @name ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41
// @class ExprParser::ReadWriteMethodType
// @summary Sets strength on an AnimationEventData instance from a parsed expression value, or throws if null.
// @field ExprParser::ValuePtr +0x00 void* ptr
// @field ExprParser::ExprArg +0x04 void* typeObj


extern void __fastcall ext_0051A000(void* self, int edx_unused, float value);
extern void __fastcall ext_0046C3C0(void* self, int edx_unused);
extern void __cdecl ext_006A6DD2(void* exceptionObject, void* throwInfo);

extern void __stdcall fn_0051A400(void** targetPtr, void* valueArg) {
    void* target = *targetPtr;
    if (target != nullptr) {
        void* typeObj = *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(valueArg) + 4);
        void** vtable = *reinterpret_cast<void***>(typeObj);
        using EvalFn = float (__thiscall*)(void*, void*);
        auto evalFn = reinterpret_cast<EvalFn>(vtable[1]);
        float val = evalFn(typeObj, valueArg);
        ext_0051A000(target, 0, val);
        return;
    }

    uint8_t exc[0x28];
    ext_0046C3C0(exc, 0);
    ext_006A6DD2(exc, reinterpret_cast<void*>(0x009DEC1C));
}
} // namespace lift_004DE890
} // namespace lift_0051A400

// [0x00524DA0] ExprParser::ReadWriteMethodType<NMData::VariableValue, float, &public: float __thiscall NMData::VariableValue::getInitialValue(void) const, float, &public: void __thiscall NMData::VariableValue::setInitialValue(float)>::vfunc_41 (71 bytes)
namespace lift_00524DA0 {
// @name ExprParser::ReadWriteMethodType<NMData::VariableValue, float, &public: float __thiscall NMData::VariableValue::getInitialValue(void) const, float, &public: void __thiscall NMData::VariableValue::setInitialValue(float)>::vfunc_41
// @class ExprParser::ReadWriteMethodType<NMData::VariableValue, float, &public: float __thiscall NMData::VariableValue::getInitialValue(void) const, float, &public: void __thiscall NMData::VariableValue::setInitialValue(float)>
// @summary Auto-lifted identical-shape clone of 0x004DE890 (ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41).
namespace lift_004DE890 {
// @name ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41
// @class ExprParser::ReadWriteMethodType
// @summary Sets strength on an AnimationEventData instance from a parsed expression value, or throws if null.
// @field ExprParser::ValuePtr +0x00 void* ptr
// @field ExprParser::ExprArg +0x04 void* typeObj


extern void __fastcall ext_00524B50(void* self, int edx_unused, float value);
extern void __fastcall ext_0046C3C0(void* self, int edx_unused);
extern void __cdecl ext_006A6DD2(void* exceptionObject, void* throwInfo);

extern void __stdcall fn_00524DA0(void** targetPtr, void* valueArg) {
    void* target = *targetPtr;
    if (target != nullptr) {
        void* typeObj = *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(valueArg) + 4);
        void** vtable = *reinterpret_cast<void***>(typeObj);
        using EvalFn = float (__thiscall*)(void*, void*);
        auto evalFn = reinterpret_cast<EvalFn>(vtable[1]);
        float val = evalFn(typeObj, valueArg);
        ext_00524B50(target, 0, val);
        return;
    }

    uint8_t exc[0x28];
    ext_0046C3C0(exc, 0);
    ext_006A6DD2(exc, reinterpret_cast<void*>(0x009DEC1C));
}
} // namespace lift_004DE890
} // namespace lift_00524DA0

// [0x00524DF0] ExprParser::ReadWriteMethodType<NMData::VariableValue, float, &public: float __thiscall NMData::VariableValue::getBestValue(void) const, float, &public: void __thiscall NMData::VariableValue::setBestValue(float)>::vfunc_41 (71 bytes)
namespace lift_00524DF0 {
// @name ExprParser::ReadWriteMethodType<NMData::VariableValue, float, &public: float __thiscall NMData::VariableValue::getBestValue(void) const, float, &public: void __thiscall NMData::VariableValue::setBestValue(float)>::vfunc_41
// @class ExprParser::ReadWriteMethodType<NMData::VariableValue, float, &public: float __thiscall NMData::VariableValue::getBestValue(void) const, float, &public: void __thiscall NMData::VariableValue::setBestValue(float)>
// @summary Auto-lifted identical-shape clone of 0x004DE890 (ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41).
namespace lift_004DE890 {
// @name ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41
// @class ExprParser::ReadWriteMethodType
// @summary Sets strength on an AnimationEventData instance from a parsed expression value, or throws if null.
// @field ExprParser::ValuePtr +0x00 void* ptr
// @field ExprParser::ExprArg +0x04 void* typeObj


extern void __fastcall ext_00524BC0(void* self, int edx_unused, float value);
extern void __fastcall ext_0046C3C0(void* self, int edx_unused);
extern void __cdecl ext_006A6DD2(void* exceptionObject, void* throwInfo);

extern void __stdcall fn_00524DF0(void** targetPtr, void* valueArg) {
    void* target = *targetPtr;
    if (target != nullptr) {
        void* typeObj = *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(valueArg) + 4);
        void** vtable = *reinterpret_cast<void***>(typeObj);
        using EvalFn = float (__thiscall*)(void*, void*);
        auto evalFn = reinterpret_cast<EvalFn>(vtable[1]);
        float val = evalFn(typeObj, valueArg);
        ext_00524BC0(target, 0, val);
        return;
    }

    uint8_t exc[0x28];
    ext_0046C3C0(exc, 0);
    ext_006A6DD2(exc, reinterpret_cast<void*>(0x009DEC1C));
}
} // namespace lift_004DE890
} // namespace lift_00524DF0

// [0x0058C0E0] ExprParser::ReadWriteMethodType<AnimatableTransform, float, {protected: float __thiscall AnimatableTransform::getEulerX(void) const, 0}, float, {protected: void __thiscall AnimatableTransform::setEulerX(float), 0}>::vfunc_41 (71 bytes)
namespace lift_0058C0E0 {
// @name ExprParser::ReadWriteMethodType<AnimatableTransform, float, {protected: float __thiscall AnimatableTransform::getEulerX(void) const, 0}, float, {protected: void __thiscall AnimatableTransform::setEulerX(float), 0}>::vfunc_41
// @class ExprParser::ReadWriteMethodType<AnimatableTransform, float, {protected: float __thiscall AnimatableTransform::getEulerX(void) const, 0}, float, {protected: void __thiscall AnimatableTransform::setEulerX(float), 0}>
// @summary Auto-lifted identical-shape clone of 0x004DE890 (ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41).
namespace lift_004DE890 {
// @name ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41
// @class ExprParser::ReadWriteMethodType
// @summary Sets strength on an AnimationEventData instance from a parsed expression value, or throws if null.
// @field ExprParser::ValuePtr +0x00 void* ptr
// @field ExprParser::ExprArg +0x04 void* typeObj


extern void __fastcall ext_0058B140(void* self, int edx_unused, float value);
extern void __fastcall ext_0046C3C0(void* self, int edx_unused);
extern void __cdecl ext_006A6DD2(void* exceptionObject, void* throwInfo);

extern void __stdcall fn_0058C0E0(void** targetPtr, void* valueArg) {
    void* target = *targetPtr;
    if (target != nullptr) {
        void* typeObj = *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(valueArg) + 4);
        void** vtable = *reinterpret_cast<void***>(typeObj);
        using EvalFn = float (__thiscall*)(void*, void*);
        auto evalFn = reinterpret_cast<EvalFn>(vtable[1]);
        float val = evalFn(typeObj, valueArg);
        ext_0058B140(target, 0, val);
        return;
    }

    uint8_t exc[0x28];
    ext_0046C3C0(exc, 0);
    ext_006A6DD2(exc, reinterpret_cast<void*>(0x009DEC1C));
}
} // namespace lift_004DE890
} // namespace lift_0058C0E0

// [0x0058C1B0] ExprParser::ReadWriteMethodType<AnimatableTransform, float, {protected: float __thiscall AnimatableTransform::getEulerY(void) const, 0}, float, {protected: void __thiscall AnimatableTransform::setEulerY(float), 0}>::vfunc_41 (71 bytes)
namespace lift_0058C1B0 {
// @name ExprParser::ReadWriteMethodType<AnimatableTransform, float, {protected: float __thiscall AnimatableTransform::getEulerY(void) const, 0}, float, {protected: void __thiscall AnimatableTransform::setEulerY(float), 0}>::vfunc_41
// @class ExprParser::ReadWriteMethodType<AnimatableTransform, float, {protected: float __thiscall AnimatableTransform::getEulerY(void) const, 0}, float, {protected: void __thiscall AnimatableTransform::setEulerY(float), 0}>
// @summary Auto-lifted identical-shape clone of 0x004DE890 (ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41).
namespace lift_004DE890 {
// @name ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41
// @class ExprParser::ReadWriteMethodType
// @summary Sets strength on an AnimationEventData instance from a parsed expression value, or throws if null.
// @field ExprParser::ValuePtr +0x00 void* ptr
// @field ExprParser::ExprArg +0x04 void* typeObj


extern void __fastcall ext_0058B190(void* self, int edx_unused, float value);
extern void __fastcall ext_0046C3C0(void* self, int edx_unused);
extern void __cdecl ext_006A6DD2(void* exceptionObject, void* throwInfo);

extern void __stdcall fn_0058C1B0(void** targetPtr, void* valueArg) {
    void* target = *targetPtr;
    if (target != nullptr) {
        void* typeObj = *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(valueArg) + 4);
        void** vtable = *reinterpret_cast<void***>(typeObj);
        using EvalFn = float (__thiscall*)(void*, void*);
        auto evalFn = reinterpret_cast<EvalFn>(vtable[1]);
        float val = evalFn(typeObj, valueArg);
        ext_0058B190(target, 0, val);
        return;
    }

    uint8_t exc[0x28];
    ext_0046C3C0(exc, 0);
    ext_006A6DD2(exc, reinterpret_cast<void*>(0x009DEC1C));
}
} // namespace lift_004DE890
} // namespace lift_0058C1B0

// [0x0058C280] ExprParser::ReadWriteMethodType<AnimatableTransform, float, {protected: float __thiscall AnimatableTransform::getEulerZ(void) const, 0}, float, {protected: void __thiscall AnimatableTransform::setEulerZ(float), 0}>::vfunc_41 (71 bytes)
namespace lift_0058C280 {
// @name ExprParser::ReadWriteMethodType<AnimatableTransform, float, {protected: float __thiscall AnimatableTransform::getEulerZ(void) const, 0}, float, {protected: void __thiscall AnimatableTransform::setEulerZ(float), 0}>::vfunc_41
// @class ExprParser::ReadWriteMethodType<AnimatableTransform, float, {protected: float __thiscall AnimatableTransform::getEulerZ(void) const, 0}, float, {protected: void __thiscall AnimatableTransform::setEulerZ(float), 0}>
// @summary Auto-lifted identical-shape clone of 0x004DE890 (ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41).
namespace lift_004DE890 {
// @name ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41
// @class ExprParser::ReadWriteMethodType
// @summary Sets strength on an AnimationEventData instance from a parsed expression value, or throws if null.
// @field ExprParser::ValuePtr +0x00 void* ptr
// @field ExprParser::ExprArg +0x04 void* typeObj


extern void __fastcall ext_0058B1E0(void* self, int edx_unused, float value);
extern void __fastcall ext_0046C3C0(void* self, int edx_unused);
extern void __cdecl ext_006A6DD2(void* exceptionObject, void* throwInfo);

extern void __stdcall fn_0058C280(void** targetPtr, void* valueArg) {
    void* target = *targetPtr;
    if (target != nullptr) {
        void* typeObj = *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(valueArg) + 4);
        void** vtable = *reinterpret_cast<void***>(typeObj);
        using EvalFn = float (__thiscall*)(void*, void*);
        auto evalFn = reinterpret_cast<EvalFn>(vtable[1]);
        float val = evalFn(typeObj, valueArg);
        ext_0058B1E0(target, 0, val);
        return;
    }

    uint8_t exc[0x28];
    ext_0046C3C0(exc, 0);
    ext_006A6DD2(exc, reinterpret_cast<void*>(0x009DEC1C));
}
} // namespace lift_004DE890
} // namespace lift_0058C280

// [0x0058C350] ExprParser::ReadWriteMethodType<AnimatableTransform, float, {protected: float __thiscall AnimatableTransform::getTX(void) const, 0}, float, {protected: void __thiscall AnimatableTransform::setTX(float), 0}>::vfunc_41 (71 bytes)
namespace lift_0058C350 {
// @name ExprParser::ReadWriteMethodType<AnimatableTransform, float, {protected: float __thiscall AnimatableTransform::getTX(void) const, 0}, float, {protected: void __thiscall AnimatableTransform::setTX(float), 0}>::vfunc_41
// @class ExprParser::ReadWriteMethodType<AnimatableTransform, float, {protected: float __thiscall AnimatableTransform::getTX(void) const, 0}, float, {protected: void __thiscall AnimatableTransform::setTX(float), 0}>
// @summary Auto-lifted identical-shape clone of 0x004DE890 (ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41).
namespace lift_004DE890 {
// @name ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41
// @class ExprParser::ReadWriteMethodType
// @summary Sets strength on an AnimationEventData instance from a parsed expression value, or throws if null.
// @field ExprParser::ValuePtr +0x00 void* ptr
// @field ExprParser::ExprArg +0x04 void* typeObj


extern void __fastcall ext_0058A9A0(void* self, int edx_unused, float value);
extern void __fastcall ext_0046C3C0(void* self, int edx_unused);
extern void __cdecl ext_006A6DD2(void* exceptionObject, void* throwInfo);

extern void __stdcall fn_0058C350(void** targetPtr, void* valueArg) {
    void* target = *targetPtr;
    if (target != nullptr) {
        void* typeObj = *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(valueArg) + 4);
        void** vtable = *reinterpret_cast<void***>(typeObj);
        using EvalFn = float (__thiscall*)(void*, void*);
        auto evalFn = reinterpret_cast<EvalFn>(vtable[1]);
        float val = evalFn(typeObj, valueArg);
        ext_0058A9A0(target, 0, val);
        return;
    }

    uint8_t exc[0x28];
    ext_0046C3C0(exc, 0);
    ext_006A6DD2(exc, reinterpret_cast<void*>(0x009DEC1C));
}
} // namespace lift_004DE890
} // namespace lift_0058C350

// [0x0058C750] ExprParser::ReadWriteMethodType<AnimatableTransform, float, {protected: float __thiscall AnimatableTransform::getTY(void) const, 0}, float, {protected: void __thiscall AnimatableTransform::setTY(float), 0}>::vfunc_41 (71 bytes)
namespace lift_0058C750 {
// @name ExprParser::ReadWriteMethodType<AnimatableTransform, float, {protected: float __thiscall AnimatableTransform::getTY(void) const, 0}, float, {protected: void __thiscall AnimatableTransform::setTY(float), 0}>::vfunc_41
// @class ExprParser::ReadWriteMethodType<AnimatableTransform, float, {protected: float __thiscall AnimatableTransform::getTY(void) const, 0}, float, {protected: void __thiscall AnimatableTransform::setTY(float), 0}>
// @summary Auto-lifted identical-shape clone of 0x004DE890 (ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41).
namespace lift_004DE890 {
// @name ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41
// @class ExprParser::ReadWriteMethodType
// @summary Sets strength on an AnimationEventData instance from a parsed expression value, or throws if null.
// @field ExprParser::ValuePtr +0x00 void* ptr
// @field ExprParser::ExprArg +0x04 void* typeObj


extern void __fastcall ext_0058A9E0(void* self, int edx_unused, float value);
extern void __fastcall ext_0046C3C0(void* self, int edx_unused);
extern void __cdecl ext_006A6DD2(void* exceptionObject, void* throwInfo);

extern void __stdcall fn_0058C750(void** targetPtr, void* valueArg) {
    void* target = *targetPtr;
    if (target != nullptr) {
        void* typeObj = *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(valueArg) + 4);
        void** vtable = *reinterpret_cast<void***>(typeObj);
        using EvalFn = float (__thiscall*)(void*, void*);
        auto evalFn = reinterpret_cast<EvalFn>(vtable[1]);
        float val = evalFn(typeObj, valueArg);
        ext_0058A9E0(target, 0, val);
        return;
    }

    uint8_t exc[0x28];
    ext_0046C3C0(exc, 0);
    ext_006A6DD2(exc, reinterpret_cast<void*>(0x009DEC1C));
}
} // namespace lift_004DE890
} // namespace lift_0058C750

// [0x0058CAA0] ExprParser::ReadWriteMethodType<AnimatableTransform, float, {protected: float __thiscall AnimatableTransform::getTZ(void) const, 0}, float, {protected: void __thiscall AnimatableTransform::setTZ(float), 0}>::vfunc_41 (71 bytes)
namespace lift_0058CAA0 {
// @name ExprParser::ReadWriteMethodType<AnimatableTransform, float, {protected: float __thiscall AnimatableTransform::getTZ(void) const, 0}, float, {protected: void __thiscall AnimatableTransform::setTZ(float), 0}>::vfunc_41
// @class ExprParser::ReadWriteMethodType<AnimatableTransform, float, {protected: float __thiscall AnimatableTransform::getTZ(void) const, 0}, float, {protected: void __thiscall AnimatableTransform::setTZ(float), 0}>
// @summary Auto-lifted identical-shape clone of 0x004DE890 (ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41).
namespace lift_004DE890 {
// @name ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41
// @class ExprParser::ReadWriteMethodType
// @summary Sets strength on an AnimationEventData instance from a parsed expression value, or throws if null.
// @field ExprParser::ValuePtr +0x00 void* ptr
// @field ExprParser::ExprArg +0x04 void* typeObj


extern void __fastcall ext_0058AA20(void* self, int edx_unused, float value);
extern void __fastcall ext_0046C3C0(void* self, int edx_unused);
extern void __cdecl ext_006A6DD2(void* exceptionObject, void* throwInfo);

extern void __stdcall fn_0058CAA0(void** targetPtr, void* valueArg) {
    void* target = *targetPtr;
    if (target != nullptr) {
        void* typeObj = *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(valueArg) + 4);
        void** vtable = *reinterpret_cast<void***>(typeObj);
        using EvalFn = float (__thiscall*)(void*, void*);
        auto evalFn = reinterpret_cast<EvalFn>(vtable[1]);
        float val = evalFn(typeObj, valueArg);
        ext_0058AA20(target, 0, val);
        return;
    }

    uint8_t exc[0x28];
    ext_0046C3C0(exc, 0);
    ext_006A6DD2(exc, reinterpret_cast<void*>(0x009DEC1C));
}
} // namespace lift_004DE890
} // namespace lift_0058CAA0

// [0x0058F800] ExprParser::ReadWriteMethodType<TransformNode, float, {public: float __thiscall TransformNode::getUserEulerX(void) const, 0}, float, {public: void __thiscall TransformNode::setUserEulerX(float), 0}>::vfunc_41 (71 bytes)
namespace lift_0058F800 {
// @name ExprParser::ReadWriteMethodType<TransformNode, float, {public: float __thiscall TransformNode::getUserEulerX(void) const, 0}, float, {public: void __thiscall TransformNode::setUserEulerX(float), 0}>::vfunc_41
// @class ExprParser::ReadWriteMethodType<TransformNode, float, {public: float __thiscall TransformNode::getUserEulerX(void) const, 0}, float, {public: void __thiscall TransformNode::setUserEulerX(float), 0}>
// @summary Auto-lifted identical-shape clone of 0x004DE890 (ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41).
namespace lift_004DE890 {
// @name ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41
// @class ExprParser::ReadWriteMethodType
// @summary Sets strength on an AnimationEventData instance from a parsed expression value, or throws if null.
// @field ExprParser::ValuePtr +0x00 void* ptr
// @field ExprParser::ExprArg +0x04 void* typeObj


extern void __fastcall ext_0058F570(void* self, int edx_unused, float value);
extern void __fastcall ext_0046C3C0(void* self, int edx_unused);
extern void __cdecl ext_006A6DD2(void* exceptionObject, void* throwInfo);

extern void __stdcall fn_0058F800(void** targetPtr, void* valueArg) {
    void* target = *targetPtr;
    if (target != nullptr) {
        void* typeObj = *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(valueArg) + 4);
        void** vtable = *reinterpret_cast<void***>(typeObj);
        using EvalFn = float (__thiscall*)(void*, void*);
        auto evalFn = reinterpret_cast<EvalFn>(vtable[1]);
        float val = evalFn(typeObj, valueArg);
        ext_0058F570(target, 0, val);
        return;
    }

    uint8_t exc[0x28];
    ext_0046C3C0(exc, 0);
    ext_006A6DD2(exc, reinterpret_cast<void*>(0x009DEC1C));
}
} // namespace lift_004DE890
} // namespace lift_0058F800

// [0x0058F850] ExprParser::ReadWriteMethodType<TransformNode, float, {public: float __thiscall TransformNode::getUserEulerY(void) const, 0}, float, {public: void __thiscall TransformNode::setUserEulerY(float), 0}>::vfunc_41 (71 bytes)
namespace lift_0058F850 {
// @name ExprParser::ReadWriteMethodType<TransformNode, float, {public: float __thiscall TransformNode::getUserEulerY(void) const, 0}, float, {public: void __thiscall TransformNode::setUserEulerY(float), 0}>::vfunc_41
// @class ExprParser::ReadWriteMethodType<TransformNode, float, {public: float __thiscall TransformNode::getUserEulerY(void) const, 0}, float, {public: void __thiscall TransformNode::setUserEulerY(float), 0}>
// @summary Auto-lifted identical-shape clone of 0x004DE890 (ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41).
namespace lift_004DE890 {
// @name ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41
// @class ExprParser::ReadWriteMethodType
// @summary Sets strength on an AnimationEventData instance from a parsed expression value, or throws if null.
// @field ExprParser::ValuePtr +0x00 void* ptr
// @field ExprParser::ExprArg +0x04 void* typeObj


extern void __fastcall ext_0058F580(void* self, int edx_unused, float value);
extern void __fastcall ext_0046C3C0(void* self, int edx_unused);
extern void __cdecl ext_006A6DD2(void* exceptionObject, void* throwInfo);

extern void __stdcall fn_0058F850(void** targetPtr, void* valueArg) {
    void* target = *targetPtr;
    if (target != nullptr) {
        void* typeObj = *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(valueArg) + 4);
        void** vtable = *reinterpret_cast<void***>(typeObj);
        using EvalFn = float (__thiscall*)(void*, void*);
        auto evalFn = reinterpret_cast<EvalFn>(vtable[1]);
        float val = evalFn(typeObj, valueArg);
        ext_0058F580(target, 0, val);
        return;
    }

    uint8_t exc[0x28];
    ext_0046C3C0(exc, 0);
    ext_006A6DD2(exc, reinterpret_cast<void*>(0x009DEC1C));
}
} // namespace lift_004DE890
} // namespace lift_0058F850

// [0x0058F8A0] ExprParser::ReadWriteMethodType<TransformNode, float, {public: float __thiscall TransformNode::getUserEulerZ(void) const, 0}, float, {public: void __thiscall TransformNode::setUserEulerZ(float), 0}>::vfunc_41 (71 bytes)
namespace lift_0058F8A0 {
// @name ExprParser::ReadWriteMethodType<TransformNode, float, {public: float __thiscall TransformNode::getUserEulerZ(void) const, 0}, float, {public: void __thiscall TransformNode::setUserEulerZ(float), 0}>::vfunc_41
// @class ExprParser::ReadWriteMethodType<TransformNode, float, {public: float __thiscall TransformNode::getUserEulerZ(void) const, 0}, float, {public: void __thiscall TransformNode::setUserEulerZ(float), 0}>
// @summary Auto-lifted identical-shape clone of 0x004DE890 (ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41).
namespace lift_004DE890 {
// @name ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41
// @class ExprParser::ReadWriteMethodType
// @summary Sets strength on an AnimationEventData instance from a parsed expression value, or throws if null.
// @field ExprParser::ValuePtr +0x00 void* ptr
// @field ExprParser::ExprArg +0x04 void* typeObj


extern void __fastcall ext_0058F590(void* self, int edx_unused, float value);
extern void __fastcall ext_0046C3C0(void* self, int edx_unused);
extern void __cdecl ext_006A6DD2(void* exceptionObject, void* throwInfo);

extern void __stdcall fn_0058F8A0(void** targetPtr, void* valueArg) {
    void* target = *targetPtr;
    if (target != nullptr) {
        void* typeObj = *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(valueArg) + 4);
        void** vtable = *reinterpret_cast<void***>(typeObj);
        using EvalFn = float (__thiscall*)(void*, void*);
        auto evalFn = reinterpret_cast<EvalFn>(vtable[1]);
        float val = evalFn(typeObj, valueArg);
        ext_0058F590(target, 0, val);
        return;
    }

    uint8_t exc[0x28];
    ext_0046C3C0(exc, 0);
    ext_006A6DD2(exc, reinterpret_cast<void*>(0x009DEC1C));
}
} // namespace lift_004DE890
} // namespace lift_0058F8A0

// [0x0058F8F0] ExprParser::ReadWriteMethodType<TransformNode, float, {public: float __thiscall TransformNode::getUserTX(void) const, 0}, float, {public: void __thiscall TransformNode::setUserTX(float), 0}>::vfunc_41 (71 bytes)
namespace lift_0058F8F0 {
// @name ExprParser::ReadWriteMethodType<TransformNode, float, {public: float __thiscall TransformNode::getUserTX(void) const, 0}, float, {public: void __thiscall TransformNode::setUserTX(float), 0}>::vfunc_41
// @class ExprParser::ReadWriteMethodType<TransformNode, float, {public: float __thiscall TransformNode::getUserTX(void) const, 0}, float, {public: void __thiscall TransformNode::setUserTX(float), 0}>
// @summary Auto-lifted identical-shape clone of 0x004DE890 (ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41).
namespace lift_004DE890 {
// @name ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41
// @class ExprParser::ReadWriteMethodType
// @summary Sets strength on an AnimationEventData instance from a parsed expression value, or throws if null.
// @field ExprParser::ValuePtr +0x00 void* ptr
// @field ExprParser::ExprArg +0x04 void* typeObj


extern void __fastcall ext_0058F600(void* self, int edx_unused, float value);
extern void __fastcall ext_0046C3C0(void* self, int edx_unused);
extern void __cdecl ext_006A6DD2(void* exceptionObject, void* throwInfo);

extern void __stdcall fn_0058F8F0(void** targetPtr, void* valueArg) {
    void* target = *targetPtr;
    if (target != nullptr) {
        void* typeObj = *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(valueArg) + 4);
        void** vtable = *reinterpret_cast<void***>(typeObj);
        using EvalFn = float (__thiscall*)(void*, void*);
        auto evalFn = reinterpret_cast<EvalFn>(vtable[1]);
        float val = evalFn(typeObj, valueArg);
        ext_0058F600(target, 0, val);
        return;
    }

    uint8_t exc[0x28];
    ext_0046C3C0(exc, 0);
    ext_006A6DD2(exc, reinterpret_cast<void*>(0x009DEC1C));
}
} // namespace lift_004DE890
} // namespace lift_0058F8F0

// [0x0058F940] ExprParser::ReadWriteMethodType<TransformNode, float, {public: float __thiscall TransformNode::getUserTY(void) const, 0}, float, {public: void __thiscall TransformNode::setUserTY(float), 0}>::vfunc_41 (71 bytes)
namespace lift_0058F940 {
// @name ExprParser::ReadWriteMethodType<TransformNode, float, {public: float __thiscall TransformNode::getUserTY(void) const, 0}, float, {public: void __thiscall TransformNode::setUserTY(float), 0}>::vfunc_41
// @class ExprParser::ReadWriteMethodType<TransformNode, float, {public: float __thiscall TransformNode::getUserTY(void) const, 0}, float, {public: void __thiscall TransformNode::setUserTY(float), 0}>
// @summary Auto-lifted identical-shape clone of 0x004DE890 (ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41).
namespace lift_004DE890 {
// @name ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41
// @class ExprParser::ReadWriteMethodType
// @summary Sets strength on an AnimationEventData instance from a parsed expression value, or throws if null.
// @field ExprParser::ValuePtr +0x00 void* ptr
// @field ExprParser::ExprArg +0x04 void* typeObj


extern void __fastcall ext_0058F610(void* self, int edx_unused, float value);
extern void __fastcall ext_0046C3C0(void* self, int edx_unused);
extern void __cdecl ext_006A6DD2(void* exceptionObject, void* throwInfo);

extern void __stdcall fn_0058F940(void** targetPtr, void* valueArg) {
    void* target = *targetPtr;
    if (target != nullptr) {
        void* typeObj = *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(valueArg) + 4);
        void** vtable = *reinterpret_cast<void***>(typeObj);
        using EvalFn = float (__thiscall*)(void*, void*);
        auto evalFn = reinterpret_cast<EvalFn>(vtable[1]);
        float val = evalFn(typeObj, valueArg);
        ext_0058F610(target, 0, val);
        return;
    }

    uint8_t exc[0x28];
    ext_0046C3C0(exc, 0);
    ext_006A6DD2(exc, reinterpret_cast<void*>(0x009DEC1C));
}
} // namespace lift_004DE890
} // namespace lift_0058F940

// [0x0058F990] ExprParser::ReadWriteMethodType<TransformNode, float, {public: float __thiscall TransformNode::getUserTZ(void) const, 0}, float, {public: void __thiscall TransformNode::setUserTZ(float), 0}>::vfunc_41 (71 bytes)
namespace lift_0058F990 {
// @name ExprParser::ReadWriteMethodType<TransformNode, float, {public: float __thiscall TransformNode::getUserTZ(void) const, 0}, float, {public: void __thiscall TransformNode::setUserTZ(float), 0}>::vfunc_41
// @class ExprParser::ReadWriteMethodType<TransformNode, float, {public: float __thiscall TransformNode::getUserTZ(void) const, 0}, float, {public: void __thiscall TransformNode::setUserTZ(float), 0}>
// @summary Auto-lifted identical-shape clone of 0x004DE890 (ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41).
namespace lift_004DE890 {
// @name ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41
// @class ExprParser::ReadWriteMethodType
// @summary Sets strength on an AnimationEventData instance from a parsed expression value, or throws if null.
// @field ExprParser::ValuePtr +0x00 void* ptr
// @field ExprParser::ExprArg +0x04 void* typeObj


extern void __fastcall ext_0058F620(void* self, int edx_unused, float value);
extern void __fastcall ext_0046C3C0(void* self, int edx_unused);
extern void __cdecl ext_006A6DD2(void* exceptionObject, void* throwInfo);

extern void __stdcall fn_0058F990(void** targetPtr, void* valueArg) {
    void* target = *targetPtr;
    if (target != nullptr) {
        void* typeObj = *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(valueArg) + 4);
        void** vtable = *reinterpret_cast<void***>(typeObj);
        using EvalFn = float (__thiscall*)(void*, void*);
        auto evalFn = reinterpret_cast<EvalFn>(vtable[1]);
        float val = evalFn(typeObj, valueArg);
        ext_0058F620(target, 0, val);
        return;
    }

    uint8_t exc[0x28];
    ext_0046C3C0(exc, 0);
    ext_006A6DD2(exc, reinterpret_cast<void*>(0x009DEC1C));
}
} // namespace lift_004DE890
} // namespace lift_0058F990

// [0x005B2A00] ExprParser::ReadWriteMethodType<Geometry, float, &private: float __thiscall Geometry::getParam0(void) const, float, &private: void __thiscall Geometry::setParam0(float)>::vfunc_41 (71 bytes)
namespace lift_005B2A00 {
// @name ExprParser::ReadWriteMethodType<Geometry, float, &private: float __thiscall Geometry::getParam0(void) const, float, &private: void __thiscall Geometry::setParam0(float)>::vfunc_41
// @class ExprParser::ReadWriteMethodType<Geometry, float, &private: float __thiscall Geometry::getParam0(void) const, float, &private: void __thiscall Geometry::setParam0(float)>
// @summary Auto-lifted identical-shape clone of 0x004DE890 (ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41).
namespace lift_004DE890 {
// @name ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41
// @class ExprParser::ReadWriteMethodType
// @summary Sets strength on an AnimationEventData instance from a parsed expression value, or throws if null.
// @field ExprParser::ValuePtr +0x00 void* ptr
// @field ExprParser::ExprArg +0x04 void* typeObj


extern void __fastcall ext_005B1BE0(void* self, int edx_unused, float value);
extern void __fastcall ext_0046C3C0(void* self, int edx_unused);
extern void __cdecl ext_006A6DD2(void* exceptionObject, void* throwInfo);

extern void __stdcall fn_005B2A00(void** targetPtr, void* valueArg) {
    void* target = *targetPtr;
    if (target != nullptr) {
        void* typeObj = *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(valueArg) + 4);
        void** vtable = *reinterpret_cast<void***>(typeObj);
        using EvalFn = float (__thiscall*)(void*, void*);
        auto evalFn = reinterpret_cast<EvalFn>(vtable[1]);
        float val = evalFn(typeObj, valueArg);
        ext_005B1BE0(target, 0, val);
        return;
    }

    uint8_t exc[0x28];
    ext_0046C3C0(exc, 0);
    ext_006A6DD2(exc, reinterpret_cast<void*>(0x009DEC1C));
}
} // namespace lift_004DE890
} // namespace lift_005B2A00

// [0x005B2C30] ExprParser::ReadWriteMethodType<Geometry, float, &private: float __thiscall Geometry::getParam1(void) const, float, &private: void __thiscall Geometry::setParam1(float)>::vfunc_41 (71 bytes)
namespace lift_005B2C30 {
// @name ExprParser::ReadWriteMethodType<Geometry, float, &private: float __thiscall Geometry::getParam1(void) const, float, &private: void __thiscall Geometry::setParam1(float)>::vfunc_41
// @class ExprParser::ReadWriteMethodType<Geometry, float, &private: float __thiscall Geometry::getParam1(void) const, float, &private: void __thiscall Geometry::setParam1(float)>
// @summary Auto-lifted identical-shape clone of 0x004DE890 (ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41).
namespace lift_004DE890 {
// @name ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41
// @class ExprParser::ReadWriteMethodType
// @summary Sets strength on an AnimationEventData instance from a parsed expression value, or throws if null.
// @field ExprParser::ValuePtr +0x00 void* ptr
// @field ExprParser::ExprArg +0x04 void* typeObj


extern void __fastcall ext_005B1CA0(void* self, int edx_unused, float value);
extern void __fastcall ext_0046C3C0(void* self, int edx_unused);
extern void __cdecl ext_006A6DD2(void* exceptionObject, void* throwInfo);

extern void __stdcall fn_005B2C30(void** targetPtr, void* valueArg) {
    void* target = *targetPtr;
    if (target != nullptr) {
        void* typeObj = *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(valueArg) + 4);
        void** vtable = *reinterpret_cast<void***>(typeObj);
        using EvalFn = float (__thiscall*)(void*, void*);
        auto evalFn = reinterpret_cast<EvalFn>(vtable[1]);
        float val = evalFn(typeObj, valueArg);
        ext_005B1CA0(target, 0, val);
        return;
    }

    uint8_t exc[0x28];
    ext_0046C3C0(exc, 0);
    ext_006A6DD2(exc, reinterpret_cast<void*>(0x009DEC1C));
}
} // namespace lift_004DE890
} // namespace lift_005B2C30

// [0x005B2E00] ExprParser::ReadWriteMethodType<Geometry, float, &private: float __thiscall Geometry::getParam2(void) const, float, &private: void __thiscall Geometry::setParam2(float)>::vfunc_41 (71 bytes)
namespace lift_005B2E00 {
// @name ExprParser::ReadWriteMethodType<Geometry, float, &private: float __thiscall Geometry::getParam2(void) const, float, &private: void __thiscall Geometry::setParam2(float)>::vfunc_41
// @class ExprParser::ReadWriteMethodType<Geometry, float, &private: float __thiscall Geometry::getParam2(void) const, float, &private: void __thiscall Geometry::setParam2(float)>
// @summary Auto-lifted identical-shape clone of 0x004DE890 (ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41).
namespace lift_004DE890 {
// @name ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41
// @class ExprParser::ReadWriteMethodType
// @summary Sets strength on an AnimationEventData instance from a parsed expression value, or throws if null.
// @field ExprParser::ValuePtr +0x00 void* ptr
// @field ExprParser::ExprArg +0x04 void* typeObj


extern void __fastcall ext_005B1D60(void* self, int edx_unused, float value);
extern void __fastcall ext_0046C3C0(void* self, int edx_unused);
extern void __cdecl ext_006A6DD2(void* exceptionObject, void* throwInfo);

extern void __stdcall fn_005B2E00(void** targetPtr, void* valueArg) {
    void* target = *targetPtr;
    if (target != nullptr) {
        void* typeObj = *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(valueArg) + 4);
        void** vtable = *reinterpret_cast<void***>(typeObj);
        using EvalFn = float (__thiscall*)(void*, void*);
        auto evalFn = reinterpret_cast<EvalFn>(vtable[1]);
        float val = evalFn(typeObj, valueArg);
        ext_005B1D60(target, 0, val);
        return;
    }

    uint8_t exc[0x28];
    ext_0046C3C0(exc, 0);
    ext_006A6DD2(exc, reinterpret_cast<void*>(0x009DEC1C));
}
} // namespace lift_004DE890
} // namespace lift_005B2E00

// [0x005B8A90] ExprParser::ReadWriteMethodType<NMData::MetaBodyData, float, {public: float __thiscall NMData::MetaBodyData::getMass(void) const, 0}, float, {public: void __thiscall NMData::MetaBodyData::setMass(float), 0}>::vfunc_41 (71 bytes)
namespace lift_005B8A90 {
// @name ExprParser::ReadWriteMethodType<NMData::MetaBodyData, float, {public: float __thiscall NMData::MetaBodyData::getMass(void) const, 0}, float, {public: void __thiscall NMData::MetaBodyData::setMass(float), 0}>::vfunc_41
// @class ExprParser::ReadWriteMethodType<NMData::MetaBodyData, float, {public: float __thiscall NMData::MetaBodyData::getMass(void) const, 0}, float, {public: void __thiscall NMData::MetaBodyData::setMass(float), 0}>
// @summary Auto-lifted identical-shape clone of 0x004DE890 (ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41).
namespace lift_004DE890 {
// @name ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41
// @class ExprParser::ReadWriteMethodType
// @summary Sets strength on an AnimationEventData instance from a parsed expression value, or throws if null.
// @field ExprParser::ValuePtr +0x00 void* ptr
// @field ExprParser::ExprArg +0x04 void* typeObj


extern void __fastcall ext_005B67C0(void* self, int edx_unused, float value);
extern void __fastcall ext_0046C3C0(void* self, int edx_unused);
extern void __cdecl ext_006A6DD2(void* exceptionObject, void* throwInfo);

extern void __stdcall fn_005B8A90(void** targetPtr, void* valueArg) {
    void* target = *targetPtr;
    if (target != nullptr) {
        void* typeObj = *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(valueArg) + 4);
        void** vtable = *reinterpret_cast<void***>(typeObj);
        using EvalFn = float (__thiscall*)(void*, void*);
        auto evalFn = reinterpret_cast<EvalFn>(vtable[1]);
        float val = evalFn(typeObj, valueArg);
        ext_005B67C0(target, 0, val);
        return;
    }

    uint8_t exc[0x28];
    ext_0046C3C0(exc, 0);
    ext_006A6DD2(exc, reinterpret_cast<void*>(0x009DEC1C));
}
} // namespace lift_004DE890
} // namespace lift_005B8A90

// [0x005B8B60] ExprParser::ReadWriteMethodType<NMData::MetaBodyData, float, {public: float __thiscall NMData::MetaBodyData::getLinearVelocityDamping(void) const, 0}, float, {public: void __thiscall NMData::MetaBodyData::setLinearVelocityDamping(float), 0}>::vfunc_41 (71 bytes)
namespace lift_005B8B60 {
// @name ExprParser::ReadWriteMethodType<NMData::MetaBodyData, float, {public: float __thiscall NMData::MetaBodyData::getLinearVelocityDamping(void) const, 0}, float, {public: void __thiscall NMData::MetaBodyData::setLinearVelocityDamping(float), 0}>::vfunc_41
// @class ExprParser::ReadWriteMethodType<NMData::MetaBodyData, float, {public: float __thiscall NMData::MetaBodyData::getLinearVelocityDamping(void) const, 0}, float, {public: void __thiscall NMData::MetaBodyData::setLinearVelocityDamping(float), 0}>
// @summary Auto-lifted identical-shape clone of 0x004DE890 (ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41).
namespace lift_004DE890 {
// @name ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41
// @class ExprParser::ReadWriteMethodType
// @summary Sets strength on an AnimationEventData instance from a parsed expression value, or throws if null.
// @field ExprParser::ValuePtr +0x00 void* ptr
// @field ExprParser::ExprArg +0x04 void* typeObj


extern void __fastcall ext_005B7020(void* self, int edx_unused, float value);
extern void __fastcall ext_0046C3C0(void* self, int edx_unused);
extern void __cdecl ext_006A6DD2(void* exceptionObject, void* throwInfo);

extern void __stdcall fn_005B8B60(void** targetPtr, void* valueArg) {
    void* target = *targetPtr;
    if (target != nullptr) {
        void* typeObj = *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(valueArg) + 4);
        void** vtable = *reinterpret_cast<void***>(typeObj);
        using EvalFn = float (__thiscall*)(void*, void*);
        auto evalFn = reinterpret_cast<EvalFn>(vtable[1]);
        float val = evalFn(typeObj, valueArg);
        ext_005B7020(target, 0, val);
        return;
    }

    uint8_t exc[0x28];
    ext_0046C3C0(exc, 0);
    ext_006A6DD2(exc, reinterpret_cast<void*>(0x009DEC1C));
}
} // namespace lift_004DE890
} // namespace lift_005B8B60

// [0x005B8C30] ExprParser::ReadWriteMethodType<NMData::MetaBodyData, float, {public: float __thiscall NMData::MetaBodyData::getAngularVelocityDamping(void) const, 0}, float, {public: void __thiscall NMData::MetaBodyData::setAngularVelocityDamping(float), 0}>::vfunc_41 (71 bytes)
namespace lift_005B8C30 {
// @name ExprParser::ReadWriteMethodType<NMData::MetaBodyData, float, {public: float __thiscall NMData::MetaBodyData::getAngularVelocityDamping(void) const, 0}, float, {public: void __thiscall NMData::MetaBodyData::setAngularVelocityDamping(float), 0}>::vfunc_41
// @class ExprParser::ReadWriteMethodType<NMData::MetaBodyData, float, {public: float __thiscall NMData::MetaBodyData::getAngularVelocityDamping(void) const, 0}, float, {public: void __thiscall NMData::MetaBodyData::setAngularVelocityDamping(float), 0}>
// @summary Auto-lifted identical-shape clone of 0x004DE890 (ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41).
namespace lift_004DE890 {
// @name ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41
// @class ExprParser::ReadWriteMethodType
// @summary Sets strength on an AnimationEventData instance from a parsed expression value, or throws if null.
// @field ExprParser::ValuePtr +0x00 void* ptr
// @field ExprParser::ExprArg +0x04 void* typeObj


extern void __fastcall ext_005B7000(void* self, int edx_unused, float value);
extern void __fastcall ext_0046C3C0(void* self, int edx_unused);
extern void __cdecl ext_006A6DD2(void* exceptionObject, void* throwInfo);

extern void __stdcall fn_005B8C30(void** targetPtr, void* valueArg) {
    void* target = *targetPtr;
    if (target != nullptr) {
        void* typeObj = *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(valueArg) + 4);
        void** vtable = *reinterpret_cast<void***>(typeObj);
        using EvalFn = float (__thiscall*)(void*, void*);
        auto evalFn = reinterpret_cast<EvalFn>(vtable[1]);
        float val = evalFn(typeObj, valueArg);
        ext_005B7000(target, 0, val);
        return;
    }

    uint8_t exc[0x28];
    ext_0046C3C0(exc, 0);
    ext_006A6DD2(exc, reinterpret_cast<void*>(0x009DEC1C));
}
} // namespace lift_004DE890
} // namespace lift_005B8C30

// [0x005CED90] ExprParser::ReadWriteMethodType<NMData::InertialBodyData, float, {public: float __thiscall NMData::InertialBodyData::getDensity(void) const, 0}, float, {public: void __thiscall NMData::InertialBodyData::setDensity(float), 0}>::vfunc_41 (71 bytes)
namespace lift_005CED90 {
// @name ExprParser::ReadWriteMethodType<NMData::InertialBodyData, float, {public: float __thiscall NMData::InertialBodyData::getDensity(void) const, 0}, float, {public: void __thiscall NMData::InertialBodyData::setDensity(float), 0}>::vfunc_41
// @class ExprParser::ReadWriteMethodType<NMData::InertialBodyData, float, {public: float __thiscall NMData::InertialBodyData::getDensity(void) const, 0}, float, {public: void __thiscall NMData::InertialBodyData::setDensity(float), 0}>
// @summary Auto-lifted identical-shape clone of 0x004DE890 (ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41).
namespace lift_004DE890 {
// @name ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41
// @class ExprParser::ReadWriteMethodType
// @summary Sets strength on an AnimationEventData instance from a parsed expression value, or throws if null.
// @field ExprParser::ValuePtr +0x00 void* ptr
// @field ExprParser::ExprArg +0x04 void* typeObj


extern void __fastcall ext_00648E10(void* self, int edx_unused, float value);
extern void __fastcall ext_0046C3C0(void* self, int edx_unused);
extern void __cdecl ext_006A6DD2(void* exceptionObject, void* throwInfo);

extern void __stdcall fn_005CED90(void** targetPtr, void* valueArg) {
    void* target = *targetPtr;
    if (target != nullptr) {
        void* typeObj = *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(valueArg) + 4);
        void** vtable = *reinterpret_cast<void***>(typeObj);
        using EvalFn = float (__thiscall*)(void*, void*);
        auto evalFn = reinterpret_cast<EvalFn>(vtable[1]);
        float val = evalFn(typeObj, valueArg);
        ext_00648E10(target, 0, val);
        return;
    }

    uint8_t exc[0x28];
    ext_0046C3C0(exc, 0);
    ext_006A6DD2(exc, reinterpret_cast<void*>(0x009DEC1C));
}
} // namespace lift_004DE890
} // namespace lift_005CED90

// [0x005D17B0] ExprParser::ReadWriteMethodType<NMData::VideoPlaneData, float, &public: float __thiscall NMData::VideoPlaneData::getXScale(void) const, float, &public: void __thiscall NMData::VideoPlaneData::setXScale(float)>::vfunc_41 (71 bytes)
namespace lift_005D17B0 {
// @name ExprParser::ReadWriteMethodType<NMData::VideoPlaneData, float, &public: float __thiscall NMData::VideoPlaneData::getXScale(void) const, float, &public: void __thiscall NMData::VideoPlaneData::setXScale(float)>::vfunc_41
// @class ExprParser::ReadWriteMethodType<NMData::VideoPlaneData, float, &public: float __thiscall NMData::VideoPlaneData::getXScale(void) const, float, &public: void __thiscall NMData::VideoPlaneData::setXScale(float)>
// @summary Auto-lifted identical-shape clone of 0x004DE890 (ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41).
namespace lift_004DE890 {
// @name ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41
// @class ExprParser::ReadWriteMethodType
// @summary Sets strength on an AnimationEventData instance from a parsed expression value, or throws if null.
// @field ExprParser::ValuePtr +0x00 void* ptr
// @field ExprParser::ExprArg +0x04 void* typeObj


extern void __fastcall ext_005CF960(void* self, int edx_unused, float value);
extern void __fastcall ext_0046C3C0(void* self, int edx_unused);
extern void __cdecl ext_006A6DD2(void* exceptionObject, void* throwInfo);

extern void __stdcall fn_005D17B0(void** targetPtr, void* valueArg) {
    void* target = *targetPtr;
    if (target != nullptr) {
        void* typeObj = *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(valueArg) + 4);
        void** vtable = *reinterpret_cast<void***>(typeObj);
        using EvalFn = float (__thiscall*)(void*, void*);
        auto evalFn = reinterpret_cast<EvalFn>(vtable[1]);
        float val = evalFn(typeObj, valueArg);
        ext_005CF960(target, 0, val);
        return;
    }

    uint8_t exc[0x28];
    ext_0046C3C0(exc, 0);
    ext_006A6DD2(exc, reinterpret_cast<void*>(0x009DEC1C));
}
} // namespace lift_004DE890
} // namespace lift_005D17B0

// [0x005D1800] ExprParser::ReadWriteMethodType<NMData::VideoPlaneData, float, &public: float __thiscall NMData::VideoPlaneData::getYScale(void) const, float, &public: void __thiscall NMData::VideoPlaneData::setYScale(float)>::vfunc_41 (71 bytes)
namespace lift_005D1800 {
// @name ExprParser::ReadWriteMethodType<NMData::VideoPlaneData, float, &public: float __thiscall NMData::VideoPlaneData::getYScale(void) const, float, &public: void __thiscall NMData::VideoPlaneData::setYScale(float)>::vfunc_41
// @class ExprParser::ReadWriteMethodType<NMData::VideoPlaneData, float, &public: float __thiscall NMData::VideoPlaneData::getYScale(void) const, float, &public: void __thiscall NMData::VideoPlaneData::setYScale(float)>
// @summary Auto-lifted identical-shape clone of 0x004DE890 (ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41).
namespace lift_004DE890 {
// @name ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41
// @class ExprParser::ReadWriteMethodType
// @summary Sets strength on an AnimationEventData instance from a parsed expression value, or throws if null.
// @field ExprParser::ValuePtr +0x00 void* ptr
// @field ExprParser::ExprArg +0x04 void* typeObj


extern void __fastcall ext_005CFA60(void* self, int edx_unused, float value);
extern void __fastcall ext_0046C3C0(void* self, int edx_unused);
extern void __cdecl ext_006A6DD2(void* exceptionObject, void* throwInfo);

extern void __stdcall fn_005D1800(void** targetPtr, void* valueArg) {
    void* target = *targetPtr;
    if (target != nullptr) {
        void* typeObj = *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(valueArg) + 4);
        void** vtable = *reinterpret_cast<void***>(typeObj);
        using EvalFn = float (__thiscall*)(void*, void*);
        auto evalFn = reinterpret_cast<EvalFn>(vtable[1]);
        float val = evalFn(typeObj, valueArg);
        ext_005CFA60(target, 0, val);
        return;
    }

    uint8_t exc[0x28];
    ext_0046C3C0(exc, 0);
    ext_006A6DD2(exc, reinterpret_cast<void*>(0x009DEC1C));
}
} // namespace lift_004DE890
} // namespace lift_005D1800

// [0x005D1850] ExprParser::ReadWriteMethodType<NMData::VideoPlaneData, float, &public: float __thiscall NMData::VideoPlaneData::getXOffset(void) const, float, &public: void __thiscall NMData::VideoPlaneData::setXOffset(float)>::vfunc_41 (71 bytes)
namespace lift_005D1850 {
// @name ExprParser::ReadWriteMethodType<NMData::VideoPlaneData, float, &public: float __thiscall NMData::VideoPlaneData::getXOffset(void) const, float, &public: void __thiscall NMData::VideoPlaneData::setXOffset(float)>::vfunc_41
// @class ExprParser::ReadWriteMethodType<NMData::VideoPlaneData, float, &public: float __thiscall NMData::VideoPlaneData::getXOffset(void) const, float, &public: void __thiscall NMData::VideoPlaneData::setXOffset(float)>
// @summary Auto-lifted identical-shape clone of 0x004DE890 (ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41).
namespace lift_004DE890 {
// @name ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41
// @class ExprParser::ReadWriteMethodType
// @summary Sets strength on an AnimationEventData instance from a parsed expression value, or throws if null.
// @field ExprParser::ValuePtr +0x00 void* ptr
// @field ExprParser::ExprArg +0x04 void* typeObj


extern void __fastcall ext_005CF9E0(void* self, int edx_unused, float value);
extern void __fastcall ext_0046C3C0(void* self, int edx_unused);
extern void __cdecl ext_006A6DD2(void* exceptionObject, void* throwInfo);

extern void __stdcall fn_005D1850(void** targetPtr, void* valueArg) {
    void* target = *targetPtr;
    if (target != nullptr) {
        void* typeObj = *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(valueArg) + 4);
        void** vtable = *reinterpret_cast<void***>(typeObj);
        using EvalFn = float (__thiscall*)(void*, void*);
        auto evalFn = reinterpret_cast<EvalFn>(vtable[1]);
        float val = evalFn(typeObj, valueArg);
        ext_005CF9E0(target, 0, val);
        return;
    }

    uint8_t exc[0x28];
    ext_0046C3C0(exc, 0);
    ext_006A6DD2(exc, reinterpret_cast<void*>(0x009DEC1C));
}
} // namespace lift_004DE890
} // namespace lift_005D1850

// [0x005D18A0] ExprParser::ReadWriteMethodType<NMData::VideoPlaneData, float, &public: float __thiscall NMData::VideoPlaneData::getYOffset(void) const, float, &public: void __thiscall NMData::VideoPlaneData::setYOffset(float)>::vfunc_41 (71 bytes)
namespace lift_005D18A0 {
// @name ExprParser::ReadWriteMethodType<NMData::VideoPlaneData, float, &public: float __thiscall NMData::VideoPlaneData::getYOffset(void) const, float, &public: void __thiscall NMData::VideoPlaneData::setYOffset(float)>::vfunc_41
// @class ExprParser::ReadWriteMethodType<NMData::VideoPlaneData, float, &public: float __thiscall NMData::VideoPlaneData::getYOffset(void) const, float, &public: void __thiscall NMData::VideoPlaneData::setYOffset(float)>
// @summary Auto-lifted identical-shape clone of 0x004DE890 (ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41).
namespace lift_004DE890 {
// @name ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41
// @class ExprParser::ReadWriteMethodType
// @summary Sets strength on an AnimationEventData instance from a parsed expression value, or throws if null.
// @field ExprParser::ValuePtr +0x00 void* ptr
// @field ExprParser::ExprArg +0x04 void* typeObj


extern void __fastcall ext_005CFAE0(void* self, int edx_unused, float value);
extern void __fastcall ext_0046C3C0(void* self, int edx_unused);
extern void __cdecl ext_006A6DD2(void* exceptionObject, void* throwInfo);

extern void __stdcall fn_005D18A0(void** targetPtr, void* valueArg) {
    void* target = *targetPtr;
    if (target != nullptr) {
        void* typeObj = *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(valueArg) + 4);
        void** vtable = *reinterpret_cast<void***>(typeObj);
        using EvalFn = float (__thiscall*)(void*, void*);
        auto evalFn = reinterpret_cast<EvalFn>(vtable[1]);
        float val = evalFn(typeObj, valueArg);
        ext_005CFAE0(target, 0, val);
        return;
    }

    uint8_t exc[0x28];
    ext_0046C3C0(exc, 0);
    ext_006A6DD2(exc, reinterpret_cast<void*>(0x009DEC1C));
}
} // namespace lift_004DE890
} // namespace lift_005D18A0

// [0x005D1A10] ExprParser::ReadWriteMethodType<NMData::CameraData, float, {public: float __thiscall NMData::CameraData::getCentreOfInterest(void) const, 0}, float, {public: void __thiscall NMData::CameraData::setCentreOfInterest(float), 0}>::vfunc_41 (71 bytes)
namespace lift_005D1A10 {
// @name ExprParser::ReadWriteMethodType<NMData::CameraData, float, {public: float __thiscall NMData::CameraData::getCentreOfInterest(void) const, 0}, float, {public: void __thiscall NMData::CameraData::setCentreOfInterest(float), 0}>::vfunc_41
// @class ExprParser::ReadWriteMethodType<NMData::CameraData, float, {public: float __thiscall NMData::CameraData::getCentreOfInterest(void) const, 0}, float, {public: void __thiscall NMData::CameraData::setCentreOfInterest(float), 0}>
// @summary Auto-lifted identical-shape clone of 0x004DE890 (ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41).
namespace lift_004DE890 {
// @name ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41
// @class ExprParser::ReadWriteMethodType
// @summary Sets strength on an AnimationEventData instance from a parsed expression value, or throws if null.
// @field ExprParser::ValuePtr +0x00 void* ptr
// @field ExprParser::ExprArg +0x04 void* typeObj


extern void __fastcall ext_005D0110(void* self, int edx_unused, float value);
extern void __fastcall ext_0046C3C0(void* self, int edx_unused);
extern void __cdecl ext_006A6DD2(void* exceptionObject, void* throwInfo);

extern void __stdcall fn_005D1A10(void** targetPtr, void* valueArg) {
    void* target = *targetPtr;
    if (target != nullptr) {
        void* typeObj = *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(valueArg) + 4);
        void** vtable = *reinterpret_cast<void***>(typeObj);
        using EvalFn = float (__thiscall*)(void*, void*);
        auto evalFn = reinterpret_cast<EvalFn>(vtable[1]);
        float val = evalFn(typeObj, valueArg);
        ext_005D0110(target, 0, val);
        return;
    }

    uint8_t exc[0x28];
    ext_0046C3C0(exc, 0);
    ext_006A6DD2(exc, reinterpret_cast<void*>(0x009DEC1C));
}
} // namespace lift_004DE890
} // namespace lift_005D1A10

// [0x005D1A60] ExprParser::ReadWriteMethodType<NMData::CameraData, float, {public: float __thiscall NMData::CameraData::getSqueezeRatio(void) const, 0}, float, {public: void __thiscall NMData::CameraData::setSqueezeRatio(float), 0}>::vfunc_41 (71 bytes)
namespace lift_005D1A60 {
// @name ExprParser::ReadWriteMethodType<NMData::CameraData, float, {public: float __thiscall NMData::CameraData::getSqueezeRatio(void) const, 0}, float, {public: void __thiscall NMData::CameraData::setSqueezeRatio(float), 0}>::vfunc_41
// @class ExprParser::ReadWriteMethodType<NMData::CameraData, float, {public: float __thiscall NMData::CameraData::getSqueezeRatio(void) const, 0}, float, {public: void __thiscall NMData::CameraData::setSqueezeRatio(float), 0}>
// @summary Auto-lifted identical-shape clone of 0x004DE890 (ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41).
namespace lift_004DE890 {
// @name ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41
// @class ExprParser::ReadWriteMethodType
// @summary Sets strength on an AnimationEventData instance from a parsed expression value, or throws if null.
// @field ExprParser::ValuePtr +0x00 void* ptr
// @field ExprParser::ExprArg +0x04 void* typeObj


extern void __fastcall ext_005D01A0(void* self, int edx_unused, float value);
extern void __fastcall ext_0046C3C0(void* self, int edx_unused);
extern void __cdecl ext_006A6DD2(void* exceptionObject, void* throwInfo);

extern void __stdcall fn_005D1A60(void** targetPtr, void* valueArg) {
    void* target = *targetPtr;
    if (target != nullptr) {
        void* typeObj = *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(valueArg) + 4);
        void** vtable = *reinterpret_cast<void***>(typeObj);
        using EvalFn = float (__thiscall*)(void*, void*);
        auto evalFn = reinterpret_cast<EvalFn>(vtable[1]);
        float val = evalFn(typeObj, valueArg);
        ext_005D01A0(target, 0, val);
        return;
    }

    uint8_t exc[0x28];
    ext_0046C3C0(exc, 0);
    ext_006A6DD2(exc, reinterpret_cast<void*>(0x009DEC1C));
}
} // namespace lift_004DE890
} // namespace lift_005D1A60

// [0x005D1AB0] ExprParser::ReadWriteMethodType<NMData::CameraData, float, {public: float __thiscall NMData::CameraData::getOverscanRatio(void) const, 0}, float, {public: void __thiscall NMData::CameraData::setOverscanRatio(float), 0}>::vfunc_41 (71 bytes)
namespace lift_005D1AB0 {
// @name ExprParser::ReadWriteMethodType<NMData::CameraData, float, {public: float __thiscall NMData::CameraData::getOverscanRatio(void) const, 0}, float, {public: void __thiscall NMData::CameraData::setOverscanRatio(float), 0}>::vfunc_41
// @class ExprParser::ReadWriteMethodType<NMData::CameraData, float, {public: float __thiscall NMData::CameraData::getOverscanRatio(void) const, 0}, float, {public: void __thiscall NMData::CameraData::setOverscanRatio(float), 0}>
// @summary Auto-lifted identical-shape clone of 0x004DE890 (ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41).
namespace lift_004DE890 {
// @name ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41
// @class ExprParser::ReadWriteMethodType
// @summary Sets strength on an AnimationEventData instance from a parsed expression value, or throws if null.
// @field ExprParser::ValuePtr +0x00 void* ptr
// @field ExprParser::ExprArg +0x04 void* typeObj


extern void __fastcall ext_005D0240(void* self, int edx_unused, float value);
extern void __fastcall ext_0046C3C0(void* self, int edx_unused);
extern void __cdecl ext_006A6DD2(void* exceptionObject, void* throwInfo);

extern void __stdcall fn_005D1AB0(void** targetPtr, void* valueArg) {
    void* target = *targetPtr;
    if (target != nullptr) {
        void* typeObj = *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(valueArg) + 4);
        void** vtable = *reinterpret_cast<void***>(typeObj);
        using EvalFn = float (__thiscall*)(void*, void*);
        auto evalFn = reinterpret_cast<EvalFn>(vtable[1]);
        float val = evalFn(typeObj, valueArg);
        ext_005D0240(target, 0, val);
        return;
    }

    uint8_t exc[0x28];
    ext_0046C3C0(exc, 0);
    ext_006A6DD2(exc, reinterpret_cast<void*>(0x009DEC1C));
}
} // namespace lift_004DE890
} // namespace lift_005D1AB0

// [0x005D1BC0] ExprParser::ReadWriteMethodType<NMData::CameraData, float, {private: float __thiscall NMData::CameraData::getVPFieldOfView(void) const, 0}, float, {private: void __thiscall NMData::CameraData::setVPFieldOfView(float), 0}>::vfunc_41 (71 bytes)
namespace lift_005D1BC0 {
// @name ExprParser::ReadWriteMethodType<NMData::CameraData, float, {private: float __thiscall NMData::CameraData::getVPFieldOfView(void) const, 0}, float, {private: void __thiscall NMData::CameraData::setVPFieldOfView(float), 0}>::vfunc_41
// @class ExprParser::ReadWriteMethodType<NMData::CameraData, float, {private: float __thiscall NMData::CameraData::getVPFieldOfView(void) const, 0}, float, {private: void __thiscall NMData::CameraData::setVPFieldOfView(float), 0}>
// @summary Auto-lifted identical-shape clone of 0x004DE890 (ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41).
namespace lift_004DE890 {
// @name ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41
// @class ExprParser::ReadWriteMethodType
// @summary Sets strength on an AnimationEventData instance from a parsed expression value, or throws if null.
// @field ExprParser::ValuePtr +0x00 void* ptr
// @field ExprParser::ExprArg +0x04 void* typeObj


extern void __fastcall ext_005D1460(void* self, int edx_unused, float value);
extern void __fastcall ext_0046C3C0(void* self, int edx_unused);
extern void __cdecl ext_006A6DD2(void* exceptionObject, void* throwInfo);

extern void __stdcall fn_005D1BC0(void** targetPtr, void* valueArg) {
    void* target = *targetPtr;
    if (target != nullptr) {
        void* typeObj = *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(valueArg) + 4);
        void** vtable = *reinterpret_cast<void***>(typeObj);
        using EvalFn = float (__thiscall*)(void*, void*);
        auto evalFn = reinterpret_cast<EvalFn>(vtable[1]);
        float val = evalFn(typeObj, valueArg);
        ext_005D1460(target, 0, val);
        return;
    }

    uint8_t exc[0x28];
    ext_0046C3C0(exc, 0);
    ext_006A6DD2(exc, reinterpret_cast<void*>(0x009DEC1C));
}
} // namespace lift_004DE890
} // namespace lift_005D1BC0

// [0x005D1C90] ExprParser::ReadWriteMethodType<NMData::CameraData, float, {private: float __thiscall NMData::CameraData::getVPFocalLength(void) const, 0}, float, {private: void __thiscall NMData::CameraData::setVPFocalLength(float), 0}>::vfunc_41 (71 bytes)
namespace lift_005D1C90 {
// @name ExprParser::ReadWriteMethodType<NMData::CameraData, float, {private: float __thiscall NMData::CameraData::getVPFocalLength(void) const, 0}, float, {private: void __thiscall NMData::CameraData::setVPFocalLength(float), 0}>::vfunc_41
// @class ExprParser::ReadWriteMethodType<NMData::CameraData, float, {private: float __thiscall NMData::CameraData::getVPFocalLength(void) const, 0}, float, {private: void __thiscall NMData::CameraData::setVPFocalLength(float), 0}>
// @summary Auto-lifted identical-shape clone of 0x004DE890 (ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41).
namespace lift_004DE890 {
// @name ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41
// @class ExprParser::ReadWriteMethodType
// @summary Sets strength on an AnimationEventData instance from a parsed expression value, or throws if null.
// @field ExprParser::ValuePtr +0x00 void* ptr
// @field ExprParser::ExprArg +0x04 void* typeObj


extern void __fastcall ext_005D1430(void* self, int edx_unused, float value);
extern void __fastcall ext_0046C3C0(void* self, int edx_unused);
extern void __cdecl ext_006A6DD2(void* exceptionObject, void* throwInfo);

extern void __stdcall fn_005D1C90(void** targetPtr, void* valueArg) {
    void* target = *targetPtr;
    if (target != nullptr) {
        void* typeObj = *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(valueArg) + 4);
        void** vtable = *reinterpret_cast<void***>(typeObj);
        using EvalFn = float (__thiscall*)(void*, void*);
        auto evalFn = reinterpret_cast<EvalFn>(vtable[1]);
        float val = evalFn(typeObj, valueArg);
        ext_005D1430(target, 0, val);
        return;
    }

    uint8_t exc[0x28];
    ext_0046C3C0(exc, 0);
    ext_006A6DD2(exc, reinterpret_cast<void*>(0x009DEC1C));
}
} // namespace lift_004DE890
} // namespace lift_005D1C90

// [0x005D40A0] ExprParser::ReadWriteMethodType<NMData::CameraData, float, {public: float __thiscall NMData::CameraData::getApertureX(void) const, 0}, float, {public: void __thiscall NMData::CameraData::setApertureX(float), 0}>::vfunc_41 (71 bytes)
namespace lift_005D40A0 {
// @name ExprParser::ReadWriteMethodType<NMData::CameraData, float, {public: float __thiscall NMData::CameraData::getApertureX(void) const, 0}, float, {public: void __thiscall NMData::CameraData::setApertureX(float), 0}>::vfunc_41
// @class ExprParser::ReadWriteMethodType<NMData::CameraData, float, {public: float __thiscall NMData::CameraData::getApertureX(void) const, 0}, float, {public: void __thiscall NMData::CameraData::setApertureX(float), 0}>
// @summary Auto-lifted identical-shape clone of 0x004DE890 (ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41).
namespace lift_004DE890 {
// @name ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41
// @class ExprParser::ReadWriteMethodType
// @summary Sets strength on an AnimationEventData instance from a parsed expression value, or throws if null.
// @field ExprParser::ValuePtr +0x00 void* ptr
// @field ExprParser::ExprArg +0x04 void* typeObj


extern void __fastcall ext_005D1020(void* self, int edx_unused, float value);
extern void __fastcall ext_0046C3C0(void* self, int edx_unused);
extern void __cdecl ext_006A6DD2(void* exceptionObject, void* throwInfo);

extern void __stdcall fn_005D40A0(void** targetPtr, void* valueArg) {
    void* target = *targetPtr;
    if (target != nullptr) {
        void* typeObj = *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(valueArg) + 4);
        void** vtable = *reinterpret_cast<void***>(typeObj);
        using EvalFn = float (__thiscall*)(void*, void*);
        auto evalFn = reinterpret_cast<EvalFn>(vtable[1]);
        float val = evalFn(typeObj, valueArg);
        ext_005D1020(target, 0, val);
        return;
    }

    uint8_t exc[0x28];
    ext_0046C3C0(exc, 0);
    ext_006A6DD2(exc, reinterpret_cast<void*>(0x009DEC1C));
}
} // namespace lift_004DE890
} // namespace lift_005D40A0

// [0x005D45F0] ExprParser::ReadWriteMethodType<NMData::CameraData, float, {public: float __thiscall NMData::CameraData::getApertureY(void) const, 0}, float, {public: void __thiscall NMData::CameraData::setApertureY(float), 0}>::vfunc_41 (71 bytes)
namespace lift_005D45F0 {
// @name ExprParser::ReadWriteMethodType<NMData::CameraData, float, {public: float __thiscall NMData::CameraData::getApertureY(void) const, 0}, float, {public: void __thiscall NMData::CameraData::setApertureY(float), 0}>::vfunc_41
// @class ExprParser::ReadWriteMethodType<NMData::CameraData, float, {public: float __thiscall NMData::CameraData::getApertureY(void) const, 0}, float, {public: void __thiscall NMData::CameraData::setApertureY(float), 0}>
// @summary Auto-lifted identical-shape clone of 0x004DE890 (ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41).
namespace lift_004DE890 {
// @name ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41
// @class ExprParser::ReadWriteMethodType
// @summary Sets strength on an AnimationEventData instance from a parsed expression value, or throws if null.
// @field ExprParser::ValuePtr +0x00 void* ptr
// @field ExprParser::ExprArg +0x04 void* typeObj


extern void __fastcall ext_005D10C0(void* self, int edx_unused, float value);
extern void __fastcall ext_0046C3C0(void* self, int edx_unused);
extern void __cdecl ext_006A6DD2(void* exceptionObject, void* throwInfo);

extern void __stdcall fn_005D45F0(void** targetPtr, void* valueArg) {
    void* target = *targetPtr;
    if (target != nullptr) {
        void* typeObj = *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(valueArg) + 4);
        void** vtable = *reinterpret_cast<void***>(typeObj);
        using EvalFn = float (__thiscall*)(void*, void*);
        auto evalFn = reinterpret_cast<EvalFn>(vtable[1]);
        float val = evalFn(typeObj, valueArg);
        ext_005D10C0(target, 0, val);
        return;
    }

    uint8_t exc[0x28];
    ext_0046C3C0(exc, 0);
    ext_006A6DD2(exc, reinterpret_cast<void*>(0x009DEC1C));
}
} // namespace lift_004DE890
} // namespace lift_005D45F0

// [0x005D5360] ExprParser::ReadWriteMethodType<NMData::CameraData, float, {public: float __thiscall NMData::CameraData::getFrontCutPlane(void) const, 0}, float, {public: void __thiscall NMData::CameraData::setFrontCutPlane(float), 0}>::vfunc_41 (71 bytes)
namespace lift_005D5360 {
// @name ExprParser::ReadWriteMethodType<NMData::CameraData, float, {public: float __thiscall NMData::CameraData::getFrontCutPlane(void) const, 0}, float, {public: void __thiscall NMData::CameraData::setFrontCutPlane(float), 0}>::vfunc_41
// @class ExprParser::ReadWriteMethodType<NMData::CameraData, float, {public: float __thiscall NMData::CameraData::getFrontCutPlane(void) const, 0}, float, {public: void __thiscall NMData::CameraData::setFrontCutPlane(float), 0}>
// @summary Auto-lifted identical-shape clone of 0x004DE890 (ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41).
namespace lift_004DE890 {
// @name ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41
// @class ExprParser::ReadWriteMethodType
// @summary Sets strength on an AnimationEventData instance from a parsed expression value, or throws if null.
// @field ExprParser::ValuePtr +0x00 void* ptr
// @field ExprParser::ExprArg +0x04 void* typeObj


extern void __fastcall ext_005D1160(void* self, int edx_unused, float value);
extern void __fastcall ext_0046C3C0(void* self, int edx_unused);
extern void __cdecl ext_006A6DD2(void* exceptionObject, void* throwInfo);

extern void __stdcall fn_005D5360(void** targetPtr, void* valueArg) {
    void* target = *targetPtr;
    if (target != nullptr) {
        void* typeObj = *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(valueArg) + 4);
        void** vtable = *reinterpret_cast<void***>(typeObj);
        using EvalFn = float (__thiscall*)(void*, void*);
        auto evalFn = reinterpret_cast<EvalFn>(vtable[1]);
        float val = evalFn(typeObj, valueArg);
        ext_005D1160(target, 0, val);
        return;
    }

    uint8_t exc[0x28];
    ext_0046C3C0(exc, 0);
    ext_006A6DD2(exc, reinterpret_cast<void*>(0x009DEC1C));
}
} // namespace lift_004DE890
} // namespace lift_005D5360

// [0x005D5640] ExprParser::ReadWriteMethodType<NMData::CameraData, float, {public: float __thiscall NMData::CameraData::getBackCutPlane(void) const, 0}, float, {public: void __thiscall NMData::CameraData::setBackCutPlane(float), 0}>::vfunc_41 (71 bytes)
namespace lift_005D5640 {
// @name ExprParser::ReadWriteMethodType<NMData::CameraData, float, {public: float __thiscall NMData::CameraData::getBackCutPlane(void) const, 0}, float, {public: void __thiscall NMData::CameraData::setBackCutPlane(float), 0}>::vfunc_41
// @class ExprParser::ReadWriteMethodType<NMData::CameraData, float, {public: float __thiscall NMData::CameraData::getBackCutPlane(void) const, 0}, float, {public: void __thiscall NMData::CameraData::setBackCutPlane(float), 0}>
// @summary Auto-lifted identical-shape clone of 0x004DE890 (ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41).
namespace lift_004DE890 {
// @name ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41
// @class ExprParser::ReadWriteMethodType
// @summary Sets strength on an AnimationEventData instance from a parsed expression value, or throws if null.
// @field ExprParser::ValuePtr +0x00 void* ptr
// @field ExprParser::ExprArg +0x04 void* typeObj


extern void __fastcall ext_005D1200(void* self, int edx_unused, float value);
extern void __fastcall ext_0046C3C0(void* self, int edx_unused);
extern void __cdecl ext_006A6DD2(void* exceptionObject, void* throwInfo);

extern void __stdcall fn_005D5640(void** targetPtr, void* valueArg) {
    void* target = *targetPtr;
    if (target != nullptr) {
        void* typeObj = *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(valueArg) + 4);
        void** vtable = *reinterpret_cast<void***>(typeObj);
        using EvalFn = float (__thiscall*)(void*, void*);
        auto evalFn = reinterpret_cast<EvalFn>(vtable[1]);
        float val = evalFn(typeObj, valueArg);
        ext_005D1200(target, 0, val);
        return;
    }

    uint8_t exc[0x28];
    ext_0046C3C0(exc, 0);
    ext_006A6DD2(exc, reinterpret_cast<void*>(0x009DEC1C));
}
} // namespace lift_004DE890
} // namespace lift_005D5640

// [0x005DB580] ExprParser::ReadWriteMethodType<NMData::CameraData, float, {public: float __thiscall NMData::CameraData::getFocalLength(void) const, 0}, float, {public: void __thiscall NMData::CameraData::setFocalLength(float), 0}>::vfunc_41 (71 bytes)
namespace lift_005DB580 {
// @name ExprParser::ReadWriteMethodType<NMData::CameraData, float, {public: float __thiscall NMData::CameraData::getFocalLength(void) const, 0}, float, {public: void __thiscall NMData::CameraData::setFocalLength(float), 0}>::vfunc_41
// @class ExprParser::ReadWriteMethodType<NMData::CameraData, float, {public: float __thiscall NMData::CameraData::getFocalLength(void) const, 0}, float, {public: void __thiscall NMData::CameraData::setFocalLength(float), 0}>
// @summary Auto-lifted identical-shape clone of 0x004DE890 (ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41).
namespace lift_004DE890 {
// @name ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41
// @class ExprParser::ReadWriteMethodType
// @summary Sets strength on an AnimationEventData instance from a parsed expression value, or throws if null.
// @field ExprParser::ValuePtr +0x00 void* ptr
// @field ExprParser::ExprArg +0x04 void* typeObj


extern void __fastcall ext_005D9E00(void* self, int edx_unused, float value);
extern void __fastcall ext_0046C3C0(void* self, int edx_unused);
extern void __cdecl ext_006A6DD2(void* exceptionObject, void* throwInfo);

extern void __stdcall fn_005DB580(void** targetPtr, void* valueArg) {
    void* target = *targetPtr;
    if (target != nullptr) {
        void* typeObj = *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(valueArg) + 4);
        void** vtable = *reinterpret_cast<void***>(typeObj);
        using EvalFn = float (__thiscall*)(void*, void*);
        auto evalFn = reinterpret_cast<EvalFn>(vtable[1]);
        float val = evalFn(typeObj, valueArg);
        ext_005D9E00(target, 0, val);
        return;
    }

    uint8_t exc[0x28];
    ext_0046C3C0(exc, 0);
    ext_006A6DD2(exc, reinterpret_cast<void*>(0x009DEC1C));
}
} // namespace lift_004DE890
} // namespace lift_005DB580

// [0x005DB5D0] ExprParser::ReadWriteMethodType<NMData::CameraData, float, {public: float __thiscall NMData::CameraData::getPictureRatio(void) const, 0}, float, {public: void __thiscall NMData::CameraData::setPictureRatio(float), 0}>::vfunc_41 (71 bytes)
namespace lift_005DB5D0 {
// @name ExprParser::ReadWriteMethodType<NMData::CameraData, float, {public: float __thiscall NMData::CameraData::getPictureRatio(void) const, 0}, float, {public: void __thiscall NMData::CameraData::setPictureRatio(float), 0}>::vfunc_41
// @class ExprParser::ReadWriteMethodType<NMData::CameraData, float, {public: float __thiscall NMData::CameraData::getPictureRatio(void) const, 0}, float, {public: void __thiscall NMData::CameraData::setPictureRatio(float), 0}>
// @summary Auto-lifted identical-shape clone of 0x004DE890 (ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41).
namespace lift_004DE890 {
// @name ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41
// @class ExprParser::ReadWriteMethodType
// @summary Sets strength on an AnimationEventData instance from a parsed expression value, or throws if null.
// @field ExprParser::ValuePtr +0x00 void* ptr
// @field ExprParser::ExprArg +0x04 void* typeObj


extern void __fastcall ext_005D9EA0(void* self, int edx_unused, float value);
extern void __fastcall ext_0046C3C0(void* self, int edx_unused);
extern void __cdecl ext_006A6DD2(void* exceptionObject, void* throwInfo);

extern void __stdcall fn_005DB5D0(void** targetPtr, void* valueArg) {
    void* target = *targetPtr;
    if (target != nullptr) {
        void* typeObj = *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(valueArg) + 4);
        void** vtable = *reinterpret_cast<void***>(typeObj);
        using EvalFn = float (__thiscall*)(void*, void*);
        auto evalFn = reinterpret_cast<EvalFn>(vtable[1]);
        float val = evalFn(typeObj, valueArg);
        ext_005D9EA0(target, 0, val);
        return;
    }

    uint8_t exc[0x28];
    ext_0046C3C0(exc, 0);
    ext_006A6DD2(exc, reinterpret_cast<void*>(0x009DEC1C));
}
} // namespace lift_004DE890
} // namespace lift_005DB5D0

// [0x005DC600] ExprParser::ReadWriteMethodType<NMData::VideoPlaneData, float, &public: float __thiscall NMData::VideoPlaneData::getFrameRate(void) const, float, &public: void __thiscall NMData::VideoPlaneData::setFrameRate(float)>::vfunc_41 (71 bytes)
namespace lift_005DC600 {
// @name ExprParser::ReadWriteMethodType<NMData::VideoPlaneData, float, &public: float __thiscall NMData::VideoPlaneData::getFrameRate(void) const, float, &public: void __thiscall NMData::VideoPlaneData::setFrameRate(float)>::vfunc_41
// @class ExprParser::ReadWriteMethodType<NMData::VideoPlaneData, float, &public: float __thiscall NMData::VideoPlaneData::getFrameRate(void) const, float, &public: void __thiscall NMData::VideoPlaneData::setFrameRate(float)>
// @summary Auto-lifted identical-shape clone of 0x004DE890 (ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41).
namespace lift_004DE890 {
// @name ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41
// @class ExprParser::ReadWriteMethodType
// @summary Sets strength on an AnimationEventData instance from a parsed expression value, or throws if null.
// @field ExprParser::ValuePtr +0x00 void* ptr
// @field ExprParser::ExprArg +0x04 void* typeObj


extern void __fastcall ext_005DC300(void* self, int edx_unused, float value);
extern void __fastcall ext_0046C3C0(void* self, int edx_unused);
extern void __cdecl ext_006A6DD2(void* exceptionObject, void* throwInfo);

extern void __stdcall fn_005DC600(void** targetPtr, void* valueArg) {
    void* target = *targetPtr;
    if (target != nullptr) {
        void* typeObj = *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(valueArg) + 4);
        void** vtable = *reinterpret_cast<void***>(typeObj);
        using EvalFn = float (__thiscall*)(void*, void*);
        auto evalFn = reinterpret_cast<EvalFn>(vtable[1]);
        float val = evalFn(typeObj, valueArg);
        ext_005DC300(target, 0, val);
        return;
    }

    uint8_t exc[0x28];
    ext_0046C3C0(exc, 0);
    ext_006A6DD2(exc, reinterpret_cast<void*>(0x009DEC1C));
}
} // namespace lift_004DE890
} // namespace lift_005DC600

// [0x005E3970] ExprParser::ReadWriteMethodType<NMData::HingeData, float, {private: float __thiscall NMData::HingeData::getUserCurrentAngle(void) const, 0}, float, {private: void __thiscall NMData::HingeData::setUserCurrentAngle(float), 0}>::vfunc_41 (71 bytes)
namespace lift_005E3970 {
// @name ExprParser::ReadWriteMethodType<NMData::HingeData, float, {private: float __thiscall NMData::HingeData::getUserCurrentAngle(void) const, 0}, float, {private: void __thiscall NMData::HingeData::setUserCurrentAngle(float), 0}>::vfunc_41
// @class ExprParser::ReadWriteMethodType<NMData::HingeData, float, {private: float __thiscall NMData::HingeData::getUserCurrentAngle(void) const, 0}, float, {private: void __thiscall NMData::HingeData::setUserCurrentAngle(float), 0}>
// @summary Auto-lifted identical-shape clone of 0x004DE890 (ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41).
namespace lift_004DE890 {
// @name ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41
// @class ExprParser::ReadWriteMethodType
// @summary Sets strength on an AnimationEventData instance from a parsed expression value, or throws if null.
// @field ExprParser::ValuePtr +0x00 void* ptr
// @field ExprParser::ExprArg +0x04 void* typeObj


extern void __fastcall ext_005E25E0(void* self, int edx_unused, float value);
extern void __fastcall ext_0046C3C0(void* self, int edx_unused);
extern void __cdecl ext_006A6DD2(void* exceptionObject, void* throwInfo);

extern void __stdcall fn_005E3970(void** targetPtr, void* valueArg) {
    void* target = *targetPtr;
    if (target != nullptr) {
        void* typeObj = *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(valueArg) + 4);
        void** vtable = *reinterpret_cast<void***>(typeObj);
        using EvalFn = float (__thiscall*)(void*, void*);
        auto evalFn = reinterpret_cast<EvalFn>(vtable[1]);
        float val = evalFn(typeObj, valueArg);
        ext_005E25E0(target, 0, val);
        return;
    }

    uint8_t exc[0x28];
    ext_0046C3C0(exc, 0);
    ext_006A6DD2(exc, reinterpret_cast<void*>(0x009DEC1C));
}
} // namespace lift_004DE890
} // namespace lift_005E3970

// [0x005E3A40] ExprParser::ReadWriteMethodType<NMData::SkeletalJointData, float, {private: float __thiscall NMData::SkeletalJointData::getUserCurrentTwist(void) const, 0}, float, {private: void __thiscall NMData::SkeletalJointData::setUserCurrentTwist(float), 0}>::vfunc_41 (71 bytes)
namespace lift_005E3A40 {
// @name ExprParser::ReadWriteMethodType<NMData::SkeletalJointData, float, {private: float __thiscall NMData::SkeletalJointData::getUserCurrentTwist(void) const, 0}, float, {private: void __thiscall NMData::SkeletalJointData::setUserCurrentTwist(float), 0}>::vfunc_41
// @class ExprParser::ReadWriteMethodType<NMData::SkeletalJointData, float, {private: float __thiscall NMData::SkeletalJointData::getUserCurrentTwist(void) const, 0}, float, {private: void __thiscall NMData::SkeletalJointData::setUserCurrentTwist(float), 0}>
// @summary Auto-lifted identical-shape clone of 0x004DE890 (ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41).
namespace lift_004DE890 {
// @name ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41
// @class ExprParser::ReadWriteMethodType
// @summary Sets strength on an AnimationEventData instance from a parsed expression value, or throws if null.
// @field ExprParser::ValuePtr +0x00 void* ptr
// @field ExprParser::ExprArg +0x04 void* typeObj


extern void __fastcall ext_005E2650(void* self, int edx_unused, float value);
extern void __fastcall ext_0046C3C0(void* self, int edx_unused);
extern void __cdecl ext_006A6DD2(void* exceptionObject, void* throwInfo);

extern void __stdcall fn_005E3A40(void** targetPtr, void* valueArg) {
    void* target = *targetPtr;
    if (target != nullptr) {
        void* typeObj = *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(valueArg) + 4);
        void** vtable = *reinterpret_cast<void***>(typeObj);
        using EvalFn = float (__thiscall*)(void*, void*);
        auto evalFn = reinterpret_cast<EvalFn>(vtable[1]);
        float val = evalFn(typeObj, valueArg);
        ext_005E2650(target, 0, val);
        return;
    }

    uint8_t exc[0x28];
    ext_0046C3C0(exc, 0);
    ext_006A6DD2(exc, reinterpret_cast<void*>(0x009DEC1C));
}
} // namespace lift_004DE890
} // namespace lift_005E3A40

// [0x005E3B10] ExprParser::ReadWriteMethodType<NMData::SkeletalJointData, float, {private: float __thiscall NMData::SkeletalJointData::getUserCurrentSwing1(void) const, 0}, float, {private: void __thiscall NMData::SkeletalJointData::setUserCurrentSwing1(float), 0}>::vfunc_41 (71 bytes)
namespace lift_005E3B10 {
// @name ExprParser::ReadWriteMethodType<NMData::SkeletalJointData, float, {private: float __thiscall NMData::SkeletalJointData::getUserCurrentSwing1(void) const, 0}, float, {private: void __thiscall NMData::SkeletalJointData::setUserCurrentSwing1(float), 0}>::vfunc_41
// @class ExprParser::ReadWriteMethodType<NMData::SkeletalJointData, float, {private: float __thiscall NMData::SkeletalJointData::getUserCurrentSwing1(void) const, 0}, float, {private: void __thiscall NMData::SkeletalJointData::setUserCurrentSwing1(float), 0}>
// @summary Auto-lifted identical-shape clone of 0x004DE890 (ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41).
namespace lift_004DE890 {
// @name ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41
// @class ExprParser::ReadWriteMethodType
// @summary Sets strength on an AnimationEventData instance from a parsed expression value, or throws if null.
// @field ExprParser::ValuePtr +0x00 void* ptr
// @field ExprParser::ExprArg +0x04 void* typeObj


extern void __fastcall ext_005E26C0(void* self, int edx_unused, float value);
extern void __fastcall ext_0046C3C0(void* self, int edx_unused);
extern void __cdecl ext_006A6DD2(void* exceptionObject, void* throwInfo);

extern void __stdcall fn_005E3B10(void** targetPtr, void* valueArg) {
    void* target = *targetPtr;
    if (target != nullptr) {
        void* typeObj = *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(valueArg) + 4);
        void** vtable = *reinterpret_cast<void***>(typeObj);
        using EvalFn = float (__thiscall*)(void*, void*);
        auto evalFn = reinterpret_cast<EvalFn>(vtable[1]);
        float val = evalFn(typeObj, valueArg);
        ext_005E26C0(target, 0, val);
        return;
    }

    uint8_t exc[0x28];
    ext_0046C3C0(exc, 0);
    ext_006A6DD2(exc, reinterpret_cast<void*>(0x009DEC1C));
}
} // namespace lift_004DE890
} // namespace lift_005E3B10

// [0x005E3BE0] ExprParser::ReadWriteMethodType<NMData::SkeletalJointData, float, {private: float __thiscall NMData::SkeletalJointData::getUserCurrentSwing2(void) const, 0}, float, {private: void __thiscall NMData::SkeletalJointData::setUserCurrentSwing2(float), 0}>::vfunc_41 (71 bytes)
namespace lift_005E3BE0 {
// @name ExprParser::ReadWriteMethodType<NMData::SkeletalJointData, float, {private: float __thiscall NMData::SkeletalJointData::getUserCurrentSwing2(void) const, 0}, float, {private: void __thiscall NMData::SkeletalJointData::setUserCurrentSwing2(float), 0}>::vfunc_41
// @class ExprParser::ReadWriteMethodType<NMData::SkeletalJointData, float, {private: float __thiscall NMData::SkeletalJointData::getUserCurrentSwing2(void) const, 0}, float, {private: void __thiscall NMData::SkeletalJointData::setUserCurrentSwing2(float), 0}>
// @summary Auto-lifted identical-shape clone of 0x004DE890 (ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41).
namespace lift_004DE890 {
// @name ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41
// @class ExprParser::ReadWriteMethodType
// @summary Sets strength on an AnimationEventData instance from a parsed expression value, or throws if null.
// @field ExprParser::ValuePtr +0x00 void* ptr
// @field ExprParser::ExprArg +0x04 void* typeObj


extern void __fastcall ext_005E2730(void* self, int edx_unused, float value);
extern void __fastcall ext_0046C3C0(void* self, int edx_unused);
extern void __cdecl ext_006A6DD2(void* exceptionObject, void* throwInfo);

extern void __stdcall fn_005E3BE0(void** targetPtr, void* valueArg) {
    void* target = *targetPtr;
    if (target != nullptr) {
        void* typeObj = *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(valueArg) + 4);
        void** vtable = *reinterpret_cast<void***>(typeObj);
        using EvalFn = float (__thiscall*)(void*, void*);
        auto evalFn = reinterpret_cast<EvalFn>(vtable[1]);
        float val = evalFn(typeObj, valueArg);
        ext_005E2730(target, 0, val);
        return;
    }

    uint8_t exc[0x28];
    ext_0046C3C0(exc, 0);
    ext_006A6DD2(exc, reinterpret_cast<void*>(0x009DEC1C));
}
} // namespace lift_004DE890
} // namespace lift_005E3BE0

// [0x005E3DC0] ExprParser::ReadWriteMethodType<NMData::SkeletalJointData, float, {private: float __thiscall NMData::SkeletalJointData::getHardLimitTwistSizeForValuePtr(void) const, 0}, float, {private: void __thiscall NMData::SkeletalJointData::setHardLimitTwistSizeFromValuePtr(float), 0}>::vfunc_41 (71 bytes)
namespace lift_005E3DC0 {
// @name ExprParser::ReadWriteMethodType<NMData::SkeletalJointData, float, {private: float __thiscall NMData::SkeletalJointData::getHardLimitTwistSizeForValuePtr(void) const, 0}, float, {private: void __thiscall NMData::SkeletalJointData::setHardLimitTwistSizeFromValuePtr(float), 0}>::vfunc_41
// @class ExprParser::ReadWriteMethodType<NMData::SkeletalJointData, float, {private: float __thiscall NMData::SkeletalJointData::getHardLimitTwistSizeForValuePtr(void) const, 0}, float, {private: void __thiscall NMData::SkeletalJointData::setHardLimitTwistSizeFromValuePtr(float), 0}>
// @summary Auto-lifted identical-shape clone of 0x004DE890 (ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41).
namespace lift_004DE890 {
// @name ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41
// @class ExprParser::ReadWriteMethodType
// @summary Sets strength on an AnimationEventData instance from a parsed expression value, or throws if null.
// @field ExprParser::ValuePtr +0x00 void* ptr
// @field ExprParser::ExprArg +0x04 void* typeObj


extern void __fastcall ext_005E2790(void* self, int edx_unused, float value);
extern void __fastcall ext_0046C3C0(void* self, int edx_unused);
extern void __cdecl ext_006A6DD2(void* exceptionObject, void* throwInfo);

extern void __stdcall fn_005E3DC0(void** targetPtr, void* valueArg) {
    void* target = *targetPtr;
    if (target != nullptr) {
        void* typeObj = *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(valueArg) + 4);
        void** vtable = *reinterpret_cast<void***>(typeObj);
        using EvalFn = float (__thiscall*)(void*, void*);
        auto evalFn = reinterpret_cast<EvalFn>(vtable[1]);
        float val = evalFn(typeObj, valueArg);
        ext_005E2790(target, 0, val);
        return;
    }

    uint8_t exc[0x28];
    ext_0046C3C0(exc, 0);
    ext_006A6DD2(exc, reinterpret_cast<void*>(0x009DEC1C));
}
} // namespace lift_004DE890
} // namespace lift_005E3DC0

// [0x005E3E90] ExprParser::ReadWriteMethodType<NMData::SkeletalJointData, float, {private: float __thiscall NMData::SkeletalJointData::getHardLimitSwing1SizeForValuePtr(void) const, 0}, float, {private: void __thiscall NMData::SkeletalJointData::setHardLimitSwing1SizeFromValuePtr(float), 0}>::vfunc_41 (71 bytes)
namespace lift_005E3E90 {
// @name ExprParser::ReadWriteMethodType<NMData::SkeletalJointData, float, {private: float __thiscall NMData::SkeletalJointData::getHardLimitSwing1SizeForValuePtr(void) const, 0}, float, {private: void __thiscall NMData::SkeletalJointData::setHardLimitSwing1SizeFromValuePtr(float), 0}>::vfunc_41
// @class ExprParser::ReadWriteMethodType<NMData::SkeletalJointData, float, {private: float __thiscall NMData::SkeletalJointData::getHardLimitSwing1SizeForValuePtr(void) const, 0}, float, {private: void __thiscall NMData::SkeletalJointData::setHardLimitSwing1SizeFromValuePtr(float), 0}>
// @summary Auto-lifted identical-shape clone of 0x004DE890 (ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41).
namespace lift_004DE890 {
// @name ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41
// @class ExprParser::ReadWriteMethodType
// @summary Sets strength on an AnimationEventData instance from a parsed expression value, or throws if null.
// @field ExprParser::ValuePtr +0x00 void* ptr
// @field ExprParser::ExprArg +0x04 void* typeObj


extern void __fastcall ext_005E27E0(void* self, int edx_unused, float value);
extern void __fastcall ext_0046C3C0(void* self, int edx_unused);
extern void __cdecl ext_006A6DD2(void* exceptionObject, void* throwInfo);

extern void __stdcall fn_005E3E90(void** targetPtr, void* valueArg) {
    void* target = *targetPtr;
    if (target != nullptr) {
        void* typeObj = *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(valueArg) + 4);
        void** vtable = *reinterpret_cast<void***>(typeObj);
        using EvalFn = float (__thiscall*)(void*, void*);
        auto evalFn = reinterpret_cast<EvalFn>(vtable[1]);
        float val = evalFn(typeObj, valueArg);
        ext_005E27E0(target, 0, val);
        return;
    }

    uint8_t exc[0x28];
    ext_0046C3C0(exc, 0);
    ext_006A6DD2(exc, reinterpret_cast<void*>(0x009DEC1C));
}
} // namespace lift_004DE890
} // namespace lift_005E3E90

// [0x005E3F60] ExprParser::ReadWriteMethodType<NMData::SkeletalJointData, float, {private: float __thiscall NMData::SkeletalJointData::getHardLimitSwing2SizeForValuePtr(void) const, 0}, float, {private: void __thiscall NMData::SkeletalJointData::setHardLimitSwing2SizeFromValuePtr(float), 0}>::vfunc_41 (71 bytes)
namespace lift_005E3F60 {
// @name ExprParser::ReadWriteMethodType<NMData::SkeletalJointData, float, {private: float __thiscall NMData::SkeletalJointData::getHardLimitSwing2SizeForValuePtr(void) const, 0}, float, {private: void __thiscall NMData::SkeletalJointData::setHardLimitSwing2SizeFromValuePtr(float), 0}>::vfunc_41
// @class ExprParser::ReadWriteMethodType<NMData::SkeletalJointData, float, {private: float __thiscall NMData::SkeletalJointData::getHardLimitSwing2SizeForValuePtr(void) const, 0}, float, {private: void __thiscall NMData::SkeletalJointData::setHardLimitSwing2SizeFromValuePtr(float), 0}>
// @summary Auto-lifted identical-shape clone of 0x004DE890 (ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41).
namespace lift_004DE890 {
// @name ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41
// @class ExprParser::ReadWriteMethodType
// @summary Sets strength on an AnimationEventData instance from a parsed expression value, or throws if null.
// @field ExprParser::ValuePtr +0x00 void* ptr
// @field ExprParser::ExprArg +0x04 void* typeObj


extern void __fastcall ext_005E2830(void* self, int edx_unused, float value);
extern void __fastcall ext_0046C3C0(void* self, int edx_unused);
extern void __cdecl ext_006A6DD2(void* exceptionObject, void* throwInfo);

extern void __stdcall fn_005E3F60(void** targetPtr, void* valueArg) {
    void* target = *targetPtr;
    if (target != nullptr) {
        void* typeObj = *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(valueArg) + 4);
        void** vtable = *reinterpret_cast<void***>(typeObj);
        using EvalFn = float (__thiscall*)(void*, void*);
        auto evalFn = reinterpret_cast<EvalFn>(vtable[1]);
        float val = evalFn(typeObj, valueArg);
        ext_005E2830(target, 0, val);
        return;
    }

    uint8_t exc[0x28];
    ext_0046C3C0(exc, 0);
    ext_006A6DD2(exc, reinterpret_cast<void*>(0x009DEC1C));
}
} // namespace lift_004DE890
} // namespace lift_005E3F60

// [0x005E4030] ExprParser::ReadWriteMethodType<NMData::SkeletalJointData, float, {private: float __thiscall NMData::SkeletalJointData::getHardLimitRadiusForValuePtr(void) const, 0}, float, {private: void __thiscall NMData::SkeletalJointData::setHardLimitRadiusFromValuePtr(float), 0}>::vfunc_41 (71 bytes)
namespace lift_005E4030 {
// @name ExprParser::ReadWriteMethodType<NMData::SkeletalJointData, float, {private: float __thiscall NMData::SkeletalJointData::getHardLimitRadiusForValuePtr(void) const, 0}, float, {private: void __thiscall NMData::SkeletalJointData::setHardLimitRadiusFromValuePtr(float), 0}>::vfunc_41
// @class ExprParser::ReadWriteMethodType<NMData::SkeletalJointData, float, {private: float __thiscall NMData::SkeletalJointData::getHardLimitRadiusForValuePtr(void) const, 0}, float, {private: void __thiscall NMData::SkeletalJointData::setHardLimitRadiusFromValuePtr(float), 0}>
// @summary Auto-lifted identical-shape clone of 0x004DE890 (ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41).
namespace lift_004DE890 {
// @name ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41
// @class ExprParser::ReadWriteMethodType
// @summary Sets strength on an AnimationEventData instance from a parsed expression value, or throws if null.
// @field ExprParser::ValuePtr +0x00 void* ptr
// @field ExprParser::ExprArg +0x04 void* typeObj


extern void __fastcall ext_005E2880(void* self, int edx_unused, float value);
extern void __fastcall ext_0046C3C0(void* self, int edx_unused);
extern void __cdecl ext_006A6DD2(void* exceptionObject, void* throwInfo);

extern void __stdcall fn_005E4030(void** targetPtr, void* valueArg) {
    void* target = *targetPtr;
    if (target != nullptr) {
        void* typeObj = *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(valueArg) + 4);
        void** vtable = *reinterpret_cast<void***>(typeObj);
        using EvalFn = float (__thiscall*)(void*, void*);
        auto evalFn = reinterpret_cast<EvalFn>(vtable[1]);
        float val = evalFn(typeObj, valueArg);
        ext_005E2880(target, 0, val);
        return;
    }

    uint8_t exc[0x28];
    ext_0046C3C0(exc, 0);
    ext_006A6DD2(exc, reinterpret_cast<void*>(0x009DEC1C));
}
} // namespace lift_004DE890
} // namespace lift_005E4030

// [0x005E4100] ExprParser::ReadWriteMethodType<NMData::SkeletalJointData, float, {private: float __thiscall NMData::SkeletalJointData::getSoftLimitTwistSizeForValuePtr(void) const, 0}, float, {private: void __thiscall NMData::SkeletalJointData::setSoftLimitTwistSizeFromValuePtr(float), 0}>::vfunc_41 (71 bytes)
namespace lift_005E4100 {
// @name ExprParser::ReadWriteMethodType<NMData::SkeletalJointData, float, {private: float __thiscall NMData::SkeletalJointData::getSoftLimitTwistSizeForValuePtr(void) const, 0}, float, {private: void __thiscall NMData::SkeletalJointData::setSoftLimitTwistSizeFromValuePtr(float), 0}>::vfunc_41
// @class ExprParser::ReadWriteMethodType<NMData::SkeletalJointData, float, {private: float __thiscall NMData::SkeletalJointData::getSoftLimitTwistSizeForValuePtr(void) const, 0}, float, {private: void __thiscall NMData::SkeletalJointData::setSoftLimitTwistSizeFromValuePtr(float), 0}>
// @summary Auto-lifted identical-shape clone of 0x004DE890 (ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41).
namespace lift_004DE890 {
// @name ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41
// @class ExprParser::ReadWriteMethodType
// @summary Sets strength on an AnimationEventData instance from a parsed expression value, or throws if null.
// @field ExprParser::ValuePtr +0x00 void* ptr
// @field ExprParser::ExprArg +0x04 void* typeObj


extern void __fastcall ext_005E28D0(void* self, int edx_unused, float value);
extern void __fastcall ext_0046C3C0(void* self, int edx_unused);
extern void __cdecl ext_006A6DD2(void* exceptionObject, void* throwInfo);

extern void __stdcall fn_005E4100(void** targetPtr, void* valueArg) {
    void* target = *targetPtr;
    if (target != nullptr) {
        void* typeObj = *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(valueArg) + 4);
        void** vtable = *reinterpret_cast<void***>(typeObj);
        using EvalFn = float (__thiscall*)(void*, void*);
        auto evalFn = reinterpret_cast<EvalFn>(vtable[1]);
        float val = evalFn(typeObj, valueArg);
        ext_005E28D0(target, 0, val);
        return;
    }

    uint8_t exc[0x28];
    ext_0046C3C0(exc, 0);
    ext_006A6DD2(exc, reinterpret_cast<void*>(0x009DEC1C));
}
} // namespace lift_004DE890
} // namespace lift_005E4100

// [0x005E41D0] ExprParser::ReadWriteMethodType<NMData::SkeletalJointData, float, {private: float __thiscall NMData::SkeletalJointData::getSoftLimitSwing1SizeForValuePtr(void) const, 0}, float, {private: void __thiscall NMData::SkeletalJointData::setSoftLimitSwing1SizeFromValuePtr(float), 0}>::vfunc_41 (71 bytes)
namespace lift_005E41D0 {
// @name ExprParser::ReadWriteMethodType<NMData::SkeletalJointData, float, {private: float __thiscall NMData::SkeletalJointData::getSoftLimitSwing1SizeForValuePtr(void) const, 0}, float, {private: void __thiscall NMData::SkeletalJointData::setSoftLimitSwing1SizeFromValuePtr(float), 0}>::vfunc_41
// @class ExprParser::ReadWriteMethodType<NMData::SkeletalJointData, float, {private: float __thiscall NMData::SkeletalJointData::getSoftLimitSwing1SizeForValuePtr(void) const, 0}, float, {private: void __thiscall NMData::SkeletalJointData::setSoftLimitSwing1SizeFromValuePtr(float), 0}>
// @summary Auto-lifted identical-shape clone of 0x004DE890 (ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41).
namespace lift_004DE890 {
// @name ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41
// @class ExprParser::ReadWriteMethodType
// @summary Sets strength on an AnimationEventData instance from a parsed expression value, or throws if null.
// @field ExprParser::ValuePtr +0x00 void* ptr
// @field ExprParser::ExprArg +0x04 void* typeObj


extern void __fastcall ext_005E2920(void* self, int edx_unused, float value);
extern void __fastcall ext_0046C3C0(void* self, int edx_unused);
extern void __cdecl ext_006A6DD2(void* exceptionObject, void* throwInfo);

extern void __stdcall fn_005E41D0(void** targetPtr, void* valueArg) {
    void* target = *targetPtr;
    if (target != nullptr) {
        void* typeObj = *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(valueArg) + 4);
        void** vtable = *reinterpret_cast<void***>(typeObj);
        using EvalFn = float (__thiscall*)(void*, void*);
        auto evalFn = reinterpret_cast<EvalFn>(vtable[1]);
        float val = evalFn(typeObj, valueArg);
        ext_005E2920(target, 0, val);
        return;
    }

    uint8_t exc[0x28];
    ext_0046C3C0(exc, 0);
    ext_006A6DD2(exc, reinterpret_cast<void*>(0x009DEC1C));
}
} // namespace lift_004DE890
} // namespace lift_005E41D0

// [0x005E42A0] ExprParser::ReadWriteMethodType<NMData::SkeletalJointData, float, {private: float __thiscall NMData::SkeletalJointData::getSoftLimitSwing2SizeForValuePtr(void) const, 0}, float, {private: void __thiscall NMData::SkeletalJointData::setSoftLimitSwing2SizeFromValuePtr(float), 0}>::vfunc_41 (71 bytes)
namespace lift_005E42A0 {
// @name ExprParser::ReadWriteMethodType<NMData::SkeletalJointData, float, {private: float __thiscall NMData::SkeletalJointData::getSoftLimitSwing2SizeForValuePtr(void) const, 0}, float, {private: void __thiscall NMData::SkeletalJointData::setSoftLimitSwing2SizeFromValuePtr(float), 0}>::vfunc_41
// @class ExprParser::ReadWriteMethodType<NMData::SkeletalJointData, float, {private: float __thiscall NMData::SkeletalJointData::getSoftLimitSwing2SizeForValuePtr(void) const, 0}, float, {private: void __thiscall NMData::SkeletalJointData::setSoftLimitSwing2SizeFromValuePtr(float), 0}>
// @summary Auto-lifted identical-shape clone of 0x004DE890 (ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41).
namespace lift_004DE890 {
// @name ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41
// @class ExprParser::ReadWriteMethodType
// @summary Sets strength on an AnimationEventData instance from a parsed expression value, or throws if null.
// @field ExprParser::ValuePtr +0x00 void* ptr
// @field ExprParser::ExprArg +0x04 void* typeObj


extern void __fastcall ext_005E2970(void* self, int edx_unused, float value);
extern void __fastcall ext_0046C3C0(void* self, int edx_unused);
extern void __cdecl ext_006A6DD2(void* exceptionObject, void* throwInfo);

extern void __stdcall fn_005E42A0(void** targetPtr, void* valueArg) {
    void* target = *targetPtr;
    if (target != nullptr) {
        void* typeObj = *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(valueArg) + 4);
        void** vtable = *reinterpret_cast<void***>(typeObj);
        using EvalFn = float (__thiscall*)(void*, void*);
        auto evalFn = reinterpret_cast<EvalFn>(vtable[1]);
        float val = evalFn(typeObj, valueArg);
        ext_005E2970(target, 0, val);
        return;
    }

    uint8_t exc[0x28];
    ext_0046C3C0(exc, 0);
    ext_006A6DD2(exc, reinterpret_cast<void*>(0x009DEC1C));
}
} // namespace lift_004DE890
} // namespace lift_005E42A0

// [0x005E4370] ExprParser::ReadWriteMethodType<NMData::SkeletalJointData, float, {private: float __thiscall NMData::SkeletalJointData::getSoftLimitRadiusForValuePtr(void) const, 0}, float, {private: void __thiscall NMData::SkeletalJointData::setSoftLimitRadiusFromValuePtr(float), 0}>::vfunc_41 (71 bytes)
namespace lift_005E4370 {
// @name ExprParser::ReadWriteMethodType<NMData::SkeletalJointData, float, {private: float __thiscall NMData::SkeletalJointData::getSoftLimitRadiusForValuePtr(void) const, 0}, float, {private: void __thiscall NMData::SkeletalJointData::setSoftLimitRadiusFromValuePtr(float), 0}>::vfunc_41
// @class ExprParser::ReadWriteMethodType<NMData::SkeletalJointData, float, {private: float __thiscall NMData::SkeletalJointData::getSoftLimitRadiusForValuePtr(void) const, 0}, float, {private: void __thiscall NMData::SkeletalJointData::setSoftLimitRadiusFromValuePtr(float), 0}>
// @summary Auto-lifted identical-shape clone of 0x004DE890 (ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41).
namespace lift_004DE890 {
// @name ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41
// @class ExprParser::ReadWriteMethodType
// @summary Sets strength on an AnimationEventData instance from a parsed expression value, or throws if null.
// @field ExprParser::ValuePtr +0x00 void* ptr
// @field ExprParser::ExprArg +0x04 void* typeObj


extern void __fastcall ext_005E29C0(void* self, int edx_unused, float value);
extern void __fastcall ext_0046C3C0(void* self, int edx_unused);
extern void __cdecl ext_006A6DD2(void* exceptionObject, void* throwInfo);

extern void __stdcall fn_005E4370(void** targetPtr, void* valueArg) {
    void* target = *targetPtr;
    if (target != nullptr) {
        void* typeObj = *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(valueArg) + 4);
        void** vtable = *reinterpret_cast<void***>(typeObj);
        using EvalFn = float (__thiscall*)(void*, void*);
        auto evalFn = reinterpret_cast<EvalFn>(vtable[1]);
        float val = evalFn(typeObj, valueArg);
        ext_005E29C0(target, 0, val);
        return;
    }

    uint8_t exc[0x28];
    ext_0046C3C0(exc, 0);
    ext_006A6DD2(exc, reinterpret_cast<void*>(0x009DEC1C));
}
} // namespace lift_004DE890
} // namespace lift_005E4370

// [0x005E4440] ExprParser::ReadWriteMethodType<NMData::SkeletalJointData, float, {private: float __thiscall NMData::SkeletalJointData::getCurrentTwist(void) const, 0}, float, {private: void __thiscall NMData::SkeletalJointData::setCurrentTwist(float), 0}>::vfunc_41 (71 bytes)
namespace lift_005E4440 {
// @name ExprParser::ReadWriteMethodType<NMData::SkeletalJointData, float, {private: float __thiscall NMData::SkeletalJointData::getCurrentTwist(void) const, 0}, float, {private: void __thiscall NMData::SkeletalJointData::setCurrentTwist(float), 0}>::vfunc_41
// @class ExprParser::ReadWriteMethodType<NMData::SkeletalJointData, float, {private: float __thiscall NMData::SkeletalJointData::getCurrentTwist(void) const, 0}, float, {private: void __thiscall NMData::SkeletalJointData::setCurrentTwist(float), 0}>
// @summary Auto-lifted identical-shape clone of 0x004DE890 (ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41).
namespace lift_004DE890 {
// @name ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41
// @class ExprParser::ReadWriteMethodType
// @summary Sets strength on an AnimationEventData instance from a parsed expression value, or throws if null.
// @field ExprParser::ValuePtr +0x00 void* ptr
// @field ExprParser::ExprArg +0x04 void* typeObj


extern void __fastcall ext_005E2200(void* self, int edx_unused, float value);
extern void __fastcall ext_0046C3C0(void* self, int edx_unused);
extern void __cdecl ext_006A6DD2(void* exceptionObject, void* throwInfo);

extern void __stdcall fn_005E4440(void** targetPtr, void* valueArg) {
    void* target = *targetPtr;
    if (target != nullptr) {
        void* typeObj = *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(valueArg) + 4);
        void** vtable = *reinterpret_cast<void***>(typeObj);
        using EvalFn = float (__thiscall*)(void*, void*);
        auto evalFn = reinterpret_cast<EvalFn>(vtable[1]);
        float val = evalFn(typeObj, valueArg);
        ext_005E2200(target, 0, val);
        return;
    }

    uint8_t exc[0x28];
    ext_0046C3C0(exc, 0);
    ext_006A6DD2(exc, reinterpret_cast<void*>(0x009DEC1C));
}
} // namespace lift_004DE890
} // namespace lift_005E4440

// [0x005E4510] ExprParser::ReadWriteMethodType<NMData::SkeletalJointData, float, {private: float __thiscall NMData::SkeletalJointData::getCurrentSwing1(void) const, 0}, float, {private: void __thiscall NMData::SkeletalJointData::setCurrentSwing1(float), 0}>::vfunc_41 (71 bytes)
namespace lift_005E4510 {
// @name ExprParser::ReadWriteMethodType<NMData::SkeletalJointData, float, {private: float __thiscall NMData::SkeletalJointData::getCurrentSwing1(void) const, 0}, float, {private: void __thiscall NMData::SkeletalJointData::setCurrentSwing1(float), 0}>::vfunc_41
// @class ExprParser::ReadWriteMethodType<NMData::SkeletalJointData, float, {private: float __thiscall NMData::SkeletalJointData::getCurrentSwing1(void) const, 0}, float, {private: void __thiscall NMData::SkeletalJointData::setCurrentSwing1(float), 0}>
// @summary Auto-lifted identical-shape clone of 0x004DE890 (ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41).
namespace lift_004DE890 {
// @name ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41
// @class ExprParser::ReadWriteMethodType
// @summary Sets strength on an AnimationEventData instance from a parsed expression value, or throws if null.
// @field ExprParser::ValuePtr +0x00 void* ptr
// @field ExprParser::ExprArg +0x04 void* typeObj


extern void __fastcall ext_005E2240(void* self, int edx_unused, float value);
extern void __fastcall ext_0046C3C0(void* self, int edx_unused);
extern void __cdecl ext_006A6DD2(void* exceptionObject, void* throwInfo);

extern void __stdcall fn_005E4510(void** targetPtr, void* valueArg) {
    void* target = *targetPtr;
    if (target != nullptr) {
        void* typeObj = *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(valueArg) + 4);
        void** vtable = *reinterpret_cast<void***>(typeObj);
        using EvalFn = float (__thiscall*)(void*, void*);
        auto evalFn = reinterpret_cast<EvalFn>(vtable[1]);
        float val = evalFn(typeObj, valueArg);
        ext_005E2240(target, 0, val);
        return;
    }

    uint8_t exc[0x28];
    ext_0046C3C0(exc, 0);
    ext_006A6DD2(exc, reinterpret_cast<void*>(0x009DEC1C));
}
} // namespace lift_004DE890
} // namespace lift_005E4510

// [0x005E45E0] ExprParser::ReadWriteMethodType<NMData::SkeletalJointData, float, {private: float __thiscall NMData::SkeletalJointData::getCurrentSwing2(void) const, 0}, float, {private: void __thiscall NMData::SkeletalJointData::setCurrentSwing2(float), 0}>::vfunc_41 (71 bytes)
namespace lift_005E45E0 {
// @name ExprParser::ReadWriteMethodType<NMData::SkeletalJointData, float, {private: float __thiscall NMData::SkeletalJointData::getCurrentSwing2(void) const, 0}, float, {private: void __thiscall NMData::SkeletalJointData::setCurrentSwing2(float), 0}>::vfunc_41
// @class ExprParser::ReadWriteMethodType<NMData::SkeletalJointData, float, {private: float __thiscall NMData::SkeletalJointData::getCurrentSwing2(void) const, 0}, float, {private: void __thiscall NMData::SkeletalJointData::setCurrentSwing2(float), 0}>
// @summary Auto-lifted identical-shape clone of 0x004DE890 (ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41).
namespace lift_004DE890 {
// @name ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41
// @class ExprParser::ReadWriteMethodType
// @summary Sets strength on an AnimationEventData instance from a parsed expression value, or throws if null.
// @field ExprParser::ValuePtr +0x00 void* ptr
// @field ExprParser::ExprArg +0x04 void* typeObj


extern void __fastcall ext_005E2280(void* self, int edx_unused, float value);
extern void __fastcall ext_0046C3C0(void* self, int edx_unused);
extern void __cdecl ext_006A6DD2(void* exceptionObject, void* throwInfo);

extern void __stdcall fn_005E45E0(void** targetPtr, void* valueArg) {
    void* target = *targetPtr;
    if (target != nullptr) {
        void* typeObj = *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(valueArg) + 4);
        void** vtable = *reinterpret_cast<void***>(typeObj);
        using EvalFn = float (__thiscall*)(void*, void*);
        auto evalFn = reinterpret_cast<EvalFn>(vtable[1]);
        float val = evalFn(typeObj, valueArg);
        ext_005E2280(target, 0, val);
        return;
    }

    uint8_t exc[0x28];
    ext_0046C3C0(exc, 0);
    ext_006A6DD2(exc, reinterpret_cast<void*>(0x009DEC1C));
}
} // namespace lift_004DE890
} // namespace lift_005E45E0

// [0x005F5D10] ExprParser::ReadWriteMethodType<HelperGraphic, float, {public: float __thiscall HelperGraphic::getFSMAlpha(void) const, 0}, float, {public: void __thiscall HelperGraphic::setFSMAlpha(float), 0}>::vfunc_41 (71 bytes)
namespace lift_005F5D10 {
// @name ExprParser::ReadWriteMethodType<HelperGraphic, float, {public: float __thiscall HelperGraphic::getFSMAlpha(void) const, 0}, float, {public: void __thiscall HelperGraphic::setFSMAlpha(float), 0}>::vfunc_41
// @class ExprParser::ReadWriteMethodType<HelperGraphic, float, {public: float __thiscall HelperGraphic::getFSMAlpha(void) const, 0}, float, {public: void __thiscall HelperGraphic::setFSMAlpha(float), 0}>
// @summary Auto-lifted identical-shape clone of 0x004DE890 (ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41).
namespace lift_004DE890 {
// @name ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41
// @class ExprParser::ReadWriteMethodType
// @summary Sets strength on an AnimationEventData instance from a parsed expression value, or throws if null.
// @field ExprParser::ValuePtr +0x00 void* ptr
// @field ExprParser::ExprArg +0x04 void* typeObj


extern void __fastcall ext_005F5110(void* self, int edx_unused, float value);
extern void __fastcall ext_0046C3C0(void* self, int edx_unused);
extern void __cdecl ext_006A6DD2(void* exceptionObject, void* throwInfo);

extern void __stdcall fn_005F5D10(void** targetPtr, void* valueArg) {
    void* target = *targetPtr;
    if (target != nullptr) {
        void* typeObj = *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(valueArg) + 4);
        void** vtable = *reinterpret_cast<void***>(typeObj);
        using EvalFn = float (__thiscall*)(void*, void*);
        auto evalFn = reinterpret_cast<EvalFn>(vtable[1]);
        float val = evalFn(typeObj, valueArg);
        ext_005F5110(target, 0, val);
        return;
    }

    uint8_t exc[0x28];
    ext_0046C3C0(exc, 0);
    ext_006A6DD2(exc, reinterpret_cast<void*>(0x009DEC1C));
}
} // namespace lift_004DE890
} // namespace lift_005F5D10

// [0x005F5FA0] ExprParser::ReadWriteMethodType<HelperGraphic, float, {public: float __thiscall HelperGraphic::getFSMScale(void) const, 0}, float, {public: void __thiscall HelperGraphic::setFSMScale(float), 0}>::vfunc_41 (71 bytes)
namespace lift_005F5FA0 {
// @name ExprParser::ReadWriteMethodType<HelperGraphic, float, {public: float __thiscall HelperGraphic::getFSMScale(void) const, 0}, float, {public: void __thiscall HelperGraphic::setFSMScale(float), 0}>::vfunc_41
// @class ExprParser::ReadWriteMethodType<HelperGraphic, float, {public: float __thiscall HelperGraphic::getFSMScale(void) const, 0}, float, {public: void __thiscall HelperGraphic::setFSMScale(float), 0}>
// @summary Auto-lifted identical-shape clone of 0x004DE890 (ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41).
namespace lift_004DE890 {
// @name ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41
// @class ExprParser::ReadWriteMethodType
// @summary Sets strength on an AnimationEventData instance from a parsed expression value, or throws if null.
// @field ExprParser::ValuePtr +0x00 void* ptr
// @field ExprParser::ExprArg +0x04 void* typeObj


extern void __fastcall ext_005F5BC0(void* self, int edx_unused, float value);
extern void __fastcall ext_0046C3C0(void* self, int edx_unused);
extern void __cdecl ext_006A6DD2(void* exceptionObject, void* throwInfo);

extern void __stdcall fn_005F5FA0(void** targetPtr, void* valueArg) {
    void* target = *targetPtr;
    if (target != nullptr) {
        void* typeObj = *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(valueArg) + 4);
        void** vtable = *reinterpret_cast<void***>(typeObj);
        using EvalFn = float (__thiscall*)(void*, void*);
        auto evalFn = reinterpret_cast<EvalFn>(vtable[1]);
        float val = evalFn(typeObj, valueArg);
        ext_005F5BC0(target, 0, val);
        return;
    }

    uint8_t exc[0x28];
    ext_0046C3C0(exc, 0);
    ext_006A6DD2(exc, reinterpret_cast<void*>(0x009DEC1C));
}
} // namespace lift_004DE890
} // namespace lift_005F5FA0

// [0x00605A20] ExprParser::ReadWriteMethodType<Effector, float, &public: float __thiscall Effector::getRawDesiredDisplacement(void) const, float, &public: void __thiscall Effector::setRawDesiredDisplacement(float)>::vfunc_41 (71 bytes)
namespace lift_00605A20 {
// @name ExprParser::ReadWriteMethodType<Effector, float, &public: float __thiscall Effector::getRawDesiredDisplacement(void) const, float, &public: void __thiscall Effector::setRawDesiredDisplacement(float)>::vfunc_41
// @class ExprParser::ReadWriteMethodType<Effector, float, &public: float __thiscall Effector::getRawDesiredDisplacement(void) const, float, &public: void __thiscall Effector::setRawDesiredDisplacement(float)>
// @summary Auto-lifted identical-shape clone of 0x004DE890 (ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41).
namespace lift_004DE890 {
// @name ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41
// @class ExprParser::ReadWriteMethodType
// @summary Sets strength on an AnimationEventData instance from a parsed expression value, or throws if null.
// @field ExprParser::ValuePtr +0x00 void* ptr
// @field ExprParser::ExprArg +0x04 void* typeObj


extern void __fastcall ext_00603090(void* self, int edx_unused, float value);
extern void __fastcall ext_0046C3C0(void* self, int edx_unused);
extern void __cdecl ext_006A6DD2(void* exceptionObject, void* throwInfo);

extern void __stdcall fn_00605A20(void** targetPtr, void* valueArg) {
    void* target = *targetPtr;
    if (target != nullptr) {
        void* typeObj = *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(valueArg) + 4);
        void** vtable = *reinterpret_cast<void***>(typeObj);
        using EvalFn = float (__thiscall*)(void*, void*);
        auto evalFn = reinterpret_cast<EvalFn>(vtable[1]);
        float val = evalFn(typeObj, valueArg);
        ext_00603090(target, 0, val);
        return;
    }

    uint8_t exc[0x28];
    ext_0046C3C0(exc, 0);
    ext_006A6DD2(exc, reinterpret_cast<void*>(0x009DEC1C));
}
} // namespace lift_004DE890
} // namespace lift_00605A20

// [0x00605A70] ExprParser::ReadWriteMethodType<Effector, float, &public: float __thiscall Effector::getScaledDesiredDisplacement(void) const, float, &public: void __thiscall Effector::setScaledDesiredDisplacement(float)>::vfunc_41 (71 bytes)
namespace lift_00605A70 {
// @name ExprParser::ReadWriteMethodType<Effector, float, &public: float __thiscall Effector::getScaledDesiredDisplacement(void) const, float, &public: void __thiscall Effector::setScaledDesiredDisplacement(float)>::vfunc_41
// @class ExprParser::ReadWriteMethodType<Effector, float, &public: float __thiscall Effector::getScaledDesiredDisplacement(void) const, float, &public: void __thiscall Effector::setScaledDesiredDisplacement(float)>
// @summary Auto-lifted identical-shape clone of 0x004DE890 (ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41).
namespace lift_004DE890 {
// @name ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41
// @class ExprParser::ReadWriteMethodType
// @summary Sets strength on an AnimationEventData instance from a parsed expression value, or throws if null.
// @field ExprParser::ValuePtr +0x00 void* ptr
// @field ExprParser::ExprArg +0x04 void* typeObj


extern void __fastcall ext_00603130(void* self, int edx_unused, float value);
extern void __fastcall ext_0046C3C0(void* self, int edx_unused);
extern void __cdecl ext_006A6DD2(void* exceptionObject, void* throwInfo);

extern void __stdcall fn_00605A70(void** targetPtr, void* valueArg) {
    void* target = *targetPtr;
    if (target != nullptr) {
        void* typeObj = *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(valueArg) + 4);
        void** vtable = *reinterpret_cast<void***>(typeObj);
        using EvalFn = float (__thiscall*)(void*, void*);
        auto evalFn = reinterpret_cast<EvalFn>(vtable[1]);
        float val = evalFn(typeObj, valueArg);
        ext_00603130(target, 0, val);
        return;
    }

    uint8_t exc[0x28];
    ext_0046C3C0(exc, 0);
    ext_006A6DD2(exc, reinterpret_cast<void*>(0x009DEC1C));
}
} // namespace lift_004DE890
} // namespace lift_00605A70

// [0x00617060] ExprParser::ReadWriteMethodType<NMData::JointLimit, float, &public: float __thiscall NMData::JointLimit::getUserValue(void) const, float, &public: void __thiscall NMData::JointLimit::setUserValue(float)>::vfunc_41 (71 bytes)
namespace lift_00617060 {
// @name ExprParser::ReadWriteMethodType<NMData::JointLimit, float, &public: float __thiscall NMData::JointLimit::getUserValue(void) const, float, &public: void __thiscall NMData::JointLimit::setUserValue(float)>::vfunc_41
// @class ExprParser::ReadWriteMethodType<NMData::JointLimit, float, &public: float __thiscall NMData::JointLimit::getUserValue(void) const, float, &public: void __thiscall NMData::JointLimit::setUserValue(float)>
// @summary Auto-lifted identical-shape clone of 0x004DE890 (ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41).
namespace lift_004DE890 {
// @name ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41
// @class ExprParser::ReadWriteMethodType
// @summary Sets strength on an AnimationEventData instance from a parsed expression value, or throws if null.
// @field ExprParser::ValuePtr +0x00 void* ptr
// @field ExprParser::ExprArg +0x04 void* typeObj


extern void __fastcall ext_00610B40(void* self, int edx_unused, float value);
extern void __fastcall ext_0046C3C0(void* self, int edx_unused);
extern void __cdecl ext_006A6DD2(void* exceptionObject, void* throwInfo);

extern void __stdcall fn_00617060(void** targetPtr, void* valueArg) {
    void* target = *targetPtr;
    if (target != nullptr) {
        void* typeObj = *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(valueArg) + 4);
        void** vtable = *reinterpret_cast<void***>(typeObj);
        using EvalFn = float (__thiscall*)(void*, void*);
        auto evalFn = reinterpret_cast<EvalFn>(vtable[1]);
        float val = evalFn(typeObj, valueArg);
        ext_00610B40(target, 0, val);
        return;
    }

    uint8_t exc[0x28];
    ext_0046C3C0(exc, 0);
    ext_006A6DD2(exc, reinterpret_cast<void*>(0x009DEC1C));
}
} // namespace lift_004DE890
} // namespace lift_00617060

// [0x006178D0] ExprParser::ReadWriteMethodType<NMData::HingeLimit, float, &public: float __thiscall NMData::HingeLimit::getUserUpperLimit(void) const, float, &public: void __thiscall NMData::HingeLimit::setUserUpperLimit(float)>::vfunc_41 (71 bytes)
namespace lift_006178D0 {
// @name ExprParser::ReadWriteMethodType<NMData::HingeLimit, float, &public: float __thiscall NMData::HingeLimit::getUserUpperLimit(void) const, float, &public: void __thiscall NMData::HingeLimit::setUserUpperLimit(float)>::vfunc_41
// @class ExprParser::ReadWriteMethodType<NMData::HingeLimit, float, &public: float __thiscall NMData::HingeLimit::getUserUpperLimit(void) const, float, &public: void __thiscall NMData::HingeLimit::setUserUpperLimit(float)>
// @summary Auto-lifted identical-shape clone of 0x004DE890 (ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41).
namespace lift_004DE890 {
// @name ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41
// @class ExprParser::ReadWriteMethodType
// @summary Sets strength on an AnimationEventData instance from a parsed expression value, or throws if null.
// @field ExprParser::ValuePtr +0x00 void* ptr
// @field ExprParser::ExprArg +0x04 void* typeObj


extern void __fastcall ext_00612230(void* self, int edx_unused, float value);
extern void __fastcall ext_0046C3C0(void* self, int edx_unused);
extern void __cdecl ext_006A6DD2(void* exceptionObject, void* throwInfo);

extern void __stdcall fn_006178D0(void** targetPtr, void* valueArg) {
    void* target = *targetPtr;
    if (target != nullptr) {
        void* typeObj = *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(valueArg) + 4);
        void** vtable = *reinterpret_cast<void***>(typeObj);
        using EvalFn = float (__thiscall*)(void*, void*);
        auto evalFn = reinterpret_cast<EvalFn>(vtable[1]);
        float val = evalFn(typeObj, valueArg);
        ext_00612230(target, 0, val);
        return;
    }

    uint8_t exc[0x28];
    ext_0046C3C0(exc, 0);
    ext_006A6DD2(exc, reinterpret_cast<void*>(0x009DEC1C));
}
} // namespace lift_004DE890
} // namespace lift_006178D0

// [0x00617B50] ExprParser::ReadWriteMethodType<NMData::HingeLimit, float, &public: float __thiscall NMData::HingeLimit::getUserLowerLimit(void) const, float, &public: void __thiscall NMData::HingeLimit::setUserLowerLimit(float)>::vfunc_41 (71 bytes)
namespace lift_00617B50 {
// @name ExprParser::ReadWriteMethodType<NMData::HingeLimit, float, &public: float __thiscall NMData::HingeLimit::getUserLowerLimit(void) const, float, &public: void __thiscall NMData::HingeLimit::setUserLowerLimit(float)>::vfunc_41
// @class ExprParser::ReadWriteMethodType<NMData::HingeLimit, float, &public: float __thiscall NMData::HingeLimit::getUserLowerLimit(void) const, float, &public: void __thiscall NMData::HingeLimit::setUserLowerLimit(float)>
// @summary Auto-lifted identical-shape clone of 0x004DE890 (ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41).
namespace lift_004DE890 {
// @name ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41
// @class ExprParser::ReadWriteMethodType
// @summary Sets strength on an AnimationEventData instance from a parsed expression value, or throws if null.
// @field ExprParser::ValuePtr +0x00 void* ptr
// @field ExprParser::ExprArg +0x04 void* typeObj


extern void __fastcall ext_006121F0(void* self, int edx_unused, float value);
extern void __fastcall ext_0046C3C0(void* self, int edx_unused);
extern void __cdecl ext_006A6DD2(void* exceptionObject, void* throwInfo);

extern void __stdcall fn_00617B50(void** targetPtr, void* valueArg) {
    void* target = *targetPtr;
    if (target != nullptr) {
        void* typeObj = *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(valueArg) + 4);
        void** vtable = *reinterpret_cast<void***>(typeObj);
        using EvalFn = float (__thiscall*)(void*, void*);
        auto evalFn = reinterpret_cast<EvalFn>(vtable[1]);
        float val = evalFn(typeObj, valueArg);
        ext_006121F0(target, 0, val);
        return;
    }

    uint8_t exc[0x28];
    ext_0046C3C0(exc, 0);
    ext_006A6DD2(exc, reinterpret_cast<void*>(0x009DEC1C));
}
} // namespace lift_004DE890
} // namespace lift_00617B50

// [0x00618E20] ExprParser::ReadWriteMethodType<NMData::TwistAndSwingLimit, float, &public: float __thiscall NMData::TwistAndSwingLimit::getUserTwistSize(void) const, float, &public: void __thiscall NMData::TwistAndSwingLimit::setUserTwistSize(float)>::vfunc_41 (71 bytes)
namespace lift_00618E20 {
// @name ExprParser::ReadWriteMethodType<NMData::TwistAndSwingLimit, float, &public: float __thiscall NMData::TwistAndSwingLimit::getUserTwistSize(void) const, float, &public: void __thiscall NMData::TwistAndSwingLimit::setUserTwistSize(float)>::vfunc_41
// @class ExprParser::ReadWriteMethodType<NMData::TwistAndSwingLimit, float, &public: float __thiscall NMData::TwistAndSwingLimit::getUserTwistSize(void) const, float, &public: void __thiscall NMData::TwistAndSwingLimit::setUserTwistSize(float)>
// @summary Auto-lifted identical-shape clone of 0x004DE890 (ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41).
namespace lift_004DE890 {
// @name ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41
// @class ExprParser::ReadWriteMethodType
// @summary Sets strength on an AnimationEventData instance from a parsed expression value, or throws if null.
// @field ExprParser::ValuePtr +0x00 void* ptr
// @field ExprParser::ExprArg +0x04 void* typeObj


extern void __fastcall ext_006124D0(void* self, int edx_unused, float value);
extern void __fastcall ext_0046C3C0(void* self, int edx_unused);
extern void __cdecl ext_006A6DD2(void* exceptionObject, void* throwInfo);

extern void __stdcall fn_00618E20(void** targetPtr, void* valueArg) {
    void* target = *targetPtr;
    if (target != nullptr) {
        void* typeObj = *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(valueArg) + 4);
        void** vtable = *reinterpret_cast<void***>(typeObj);
        using EvalFn = float (__thiscall*)(void*, void*);
        auto evalFn = reinterpret_cast<EvalFn>(vtable[1]);
        float val = evalFn(typeObj, valueArg);
        ext_006124D0(target, 0, val);
        return;
    }

    uint8_t exc[0x28];
    ext_0046C3C0(exc, 0);
    ext_006A6DD2(exc, reinterpret_cast<void*>(0x009DEC1C));
}
} // namespace lift_004DE890
} // namespace lift_00618E20

// [0x00619250] ExprParser::ReadWriteMethodType<NMData::TwistAndSwingLimit, float, &public: float __thiscall NMData::TwistAndSwingLimit::getUserSwing1Size(void) const, float, &public: void __thiscall NMData::TwistAndSwingLimit::setUserSwing1Size(float)>::vfunc_41 (71 bytes)
namespace lift_00619250 {
// @name ExprParser::ReadWriteMethodType<NMData::TwistAndSwingLimit, float, &public: float __thiscall NMData::TwistAndSwingLimit::getUserSwing1Size(void) const, float, &public: void __thiscall NMData::TwistAndSwingLimit::setUserSwing1Size(float)>::vfunc_41
// @class ExprParser::ReadWriteMethodType<NMData::TwistAndSwingLimit, float, &public: float __thiscall NMData::TwistAndSwingLimit::getUserSwing1Size(void) const, float, &public: void __thiscall NMData::TwistAndSwingLimit::setUserSwing1Size(float)>
// @summary Auto-lifted identical-shape clone of 0x004DE890 (ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41).
namespace lift_004DE890 {
// @name ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41
// @class ExprParser::ReadWriteMethodType
// @summary Sets strength on an AnimationEventData instance from a parsed expression value, or throws if null.
// @field ExprParser::ValuePtr +0x00 void* ptr
// @field ExprParser::ExprArg +0x04 void* typeObj


extern void __fastcall ext_00612510(void* self, int edx_unused, float value);
extern void __fastcall ext_0046C3C0(void* self, int edx_unused);
extern void __cdecl ext_006A6DD2(void* exceptionObject, void* throwInfo);

extern void __stdcall fn_00619250(void** targetPtr, void* valueArg) {
    void* target = *targetPtr;
    if (target != nullptr) {
        void* typeObj = *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(valueArg) + 4);
        void** vtable = *reinterpret_cast<void***>(typeObj);
        using EvalFn = float (__thiscall*)(void*, void*);
        auto evalFn = reinterpret_cast<EvalFn>(vtable[1]);
        float val = evalFn(typeObj, valueArg);
        ext_00612510(target, 0, val);
        return;
    }

    uint8_t exc[0x28];
    ext_0046C3C0(exc, 0);
    ext_006A6DD2(exc, reinterpret_cast<void*>(0x009DEC1C));
}
} // namespace lift_004DE890
} // namespace lift_00619250

// [0x00619560] ExprParser::ReadWriteMethodType<NMData::TwistAndSwingLimit, float, &public: float __thiscall NMData::TwistAndSwingLimit::getUserSwing2Size(void) const, float, &public: void __thiscall NMData::TwistAndSwingLimit::setUserSwing2Size(float)>::vfunc_41 (71 bytes)
namespace lift_00619560 {
// @name ExprParser::ReadWriteMethodType<NMData::TwistAndSwingLimit, float, &public: float __thiscall NMData::TwistAndSwingLimit::getUserSwing2Size(void) const, float, &public: void __thiscall NMData::TwistAndSwingLimit::setUserSwing2Size(float)>::vfunc_41
// @class ExprParser::ReadWriteMethodType<NMData::TwistAndSwingLimit, float, &public: float __thiscall NMData::TwistAndSwingLimit::getUserSwing2Size(void) const, float, &public: void __thiscall NMData::TwistAndSwingLimit::setUserSwing2Size(float)>
// @summary Auto-lifted identical-shape clone of 0x004DE890 (ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41).
namespace lift_004DE890 {
// @name ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41
// @class ExprParser::ReadWriteMethodType
// @summary Sets strength on an AnimationEventData instance from a parsed expression value, or throws if null.
// @field ExprParser::ValuePtr +0x00 void* ptr
// @field ExprParser::ExprArg +0x04 void* typeObj


extern void __fastcall ext_00612550(void* self, int edx_unused, float value);
extern void __fastcall ext_0046C3C0(void* self, int edx_unused);
extern void __cdecl ext_006A6DD2(void* exceptionObject, void* throwInfo);

extern void __stdcall fn_00619560(void** targetPtr, void* valueArg) {
    void* target = *targetPtr;
    if (target != nullptr) {
        void* typeObj = *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(valueArg) + 4);
        void** vtable = *reinterpret_cast<void***>(typeObj);
        using EvalFn = float (__thiscall*)(void*, void*);
        auto evalFn = reinterpret_cast<EvalFn>(vtable[1]);
        float val = evalFn(typeObj, valueArg);
        ext_00612550(target, 0, val);
        return;
    }

    uint8_t exc[0x28];
    ext_0046C3C0(exc, 0);
    ext_006A6DD2(exc, reinterpret_cast<void*>(0x009DEC1C));
}
} // namespace lift_004DE890
} // namespace lift_00619560

// [0x00619990] ExprParser::ReadWriteMethodType<NMData::TwistAndSwingLimit, float, &public: float __thiscall NMData::TwistAndSwingLimit::getUserRadiusSize(void) const, float, &public: void __thiscall NMData::TwistAndSwingLimit::setUserRadiusSize(float)>::vfunc_41 (71 bytes)
namespace lift_00619990 {
// @name ExprParser::ReadWriteMethodType<NMData::TwistAndSwingLimit, float, &public: float __thiscall NMData::TwistAndSwingLimit::getUserRadiusSize(void) const, float, &public: void __thiscall NMData::TwistAndSwingLimit::setUserRadiusSize(float)>::vfunc_41
// @class ExprParser::ReadWriteMethodType<NMData::TwistAndSwingLimit, float, &public: float __thiscall NMData::TwistAndSwingLimit::getUserRadiusSize(void) const, float, &public: void __thiscall NMData::TwistAndSwingLimit::setUserRadiusSize(float)>
// @summary Auto-lifted identical-shape clone of 0x004DE890 (ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41).
namespace lift_004DE890 {
// @name ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41
// @class ExprParser::ReadWriteMethodType
// @summary Sets strength on an AnimationEventData instance from a parsed expression value, or throws if null.
// @field ExprParser::ValuePtr +0x00 void* ptr
// @field ExprParser::ExprArg +0x04 void* typeObj


extern void __fastcall ext_006124B0(void* self, int edx_unused, float value);
extern void __fastcall ext_0046C3C0(void* self, int edx_unused);
extern void __cdecl ext_006A6DD2(void* exceptionObject, void* throwInfo);

extern void __stdcall fn_00619990(void** targetPtr, void* valueArg) {
    void* target = *targetPtr;
    if (target != nullptr) {
        void* typeObj = *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(valueArg) + 4);
        void** vtable = *reinterpret_cast<void***>(typeObj);
        using EvalFn = float (__thiscall*)(void*, void*);
        auto evalFn = reinterpret_cast<EvalFn>(vtable[1]);
        float val = evalFn(typeObj, valueArg);
        ext_006124B0(target, 0, val);
        return;
    }

    uint8_t exc[0x28];
    ext_0046C3C0(exc, 0);
    ext_006A6DD2(exc, reinterpret_cast<void*>(0x009DEC1C));
}
} // namespace lift_004DE890
} // namespace lift_00619990

// [0x0061B630] ExprParser::ReadWriteMethodType<NMData::HingeConstraint, float, {private: float __thiscall NMData::HingeConstraint::getUserInitialTwist(void) const, 0}, float, {private: void __thiscall NMData::HingeConstraint::setUserInitialTwist(float), 0}>::vfunc_41 (71 bytes)
namespace lift_0061B630 {
// @name ExprParser::ReadWriteMethodType<NMData::HingeConstraint, float, {private: float __thiscall NMData::HingeConstraint::getUserInitialTwist(void) const, 0}, float, {private: void __thiscall NMData::HingeConstraint::setUserInitialTwist(float), 0}>::vfunc_41
// @class ExprParser::ReadWriteMethodType<NMData::HingeConstraint, float, {private: float __thiscall NMData::HingeConstraint::getUserInitialTwist(void) const, 0}, float, {private: void __thiscall NMData::HingeConstraint::setUserInitialTwist(float), 0}>
// @summary Auto-lifted identical-shape clone of 0x004DE890 (ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41).
namespace lift_004DE890 {
// @name ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41
// @class ExprParser::ReadWriteMethodType
// @summary Sets strength on an AnimationEventData instance from a parsed expression value, or throws if null.
// @field ExprParser::ValuePtr +0x00 void* ptr
// @field ExprParser::ExprArg +0x04 void* typeObj


extern void __fastcall ext_006118A0(void* self, int edx_unused, float value);
extern void __fastcall ext_0046C3C0(void* self, int edx_unused);
extern void __cdecl ext_006A6DD2(void* exceptionObject, void* throwInfo);

extern void __stdcall fn_0061B630(void** targetPtr, void* valueArg) {
    void* target = *targetPtr;
    if (target != nullptr) {
        void* typeObj = *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(valueArg) + 4);
        void** vtable = *reinterpret_cast<void***>(typeObj);
        using EvalFn = float (__thiscall*)(void*, void*);
        auto evalFn = reinterpret_cast<EvalFn>(vtable[1]);
        float val = evalFn(typeObj, valueArg);
        ext_006118A0(target, 0, val);
        return;
    }

    uint8_t exc[0x28];
    ext_0046C3C0(exc, 0);
    ext_006A6DD2(exc, reinterpret_cast<void*>(0x009DEC1C));
}
} // namespace lift_004DE890
} // namespace lift_0061B630

// [0x0061BE30] ExprParser::ReadWriteMethodType<NMData::SecondaryTwistAndSwingConstraint, float, {private: float __thiscall NMData::SecondaryTwistAndSwingConstraint::getUserInitialSwing1(void) const, 0}, float, {private: void __thiscall NMData::SecondaryTwistAndSwingConstraint::setUserInitialSwing1(float), 0}>::vfunc_41 (71 bytes)
namespace lift_0061BE30 {
// @name ExprParser::ReadWriteMethodType<NMData::SecondaryTwistAndSwingConstraint, float, {private: float __thiscall NMData::SecondaryTwistAndSwingConstraint::getUserInitialSwing1(void) const, 0}, float, {private: void __thiscall NMData::SecondaryTwistAndSwingConstraint::setUserInitialSwing1(float), 0}>::vfunc_41
// @class ExprParser::ReadWriteMethodType<NMData::SecondaryTwistAndSwingConstraint, float, {private: float __thiscall NMData::SecondaryTwistAndSwingConstraint::getUserInitialSwing1(void) const, 0}, float, {private: void __thiscall NMData::SecondaryTwistAndSwingConstraint::setUserInitialSwing1(float), 0}>
// @summary Auto-lifted identical-shape clone of 0x004DE890 (ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41).
namespace lift_004DE890 {
// @name ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41
// @class ExprParser::ReadWriteMethodType
// @summary Sets strength on an AnimationEventData instance from a parsed expression value, or throws if null.
// @field ExprParser::ValuePtr +0x00 void* ptr
// @field ExprParser::ExprArg +0x04 void* typeObj


extern void __fastcall ext_00611910(void* self, int edx_unused, float value);
extern void __fastcall ext_0046C3C0(void* self, int edx_unused);
extern void __cdecl ext_006A6DD2(void* exceptionObject, void* throwInfo);

extern void __stdcall fn_0061BE30(void** targetPtr, void* valueArg) {
    void* target = *targetPtr;
    if (target != nullptr) {
        void* typeObj = *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(valueArg) + 4);
        void** vtable = *reinterpret_cast<void***>(typeObj);
        using EvalFn = float (__thiscall*)(void*, void*);
        auto evalFn = reinterpret_cast<EvalFn>(vtable[1]);
        float val = evalFn(typeObj, valueArg);
        ext_00611910(target, 0, val);
        return;
    }

    uint8_t exc[0x28];
    ext_0046C3C0(exc, 0);
    ext_006A6DD2(exc, reinterpret_cast<void*>(0x009DEC1C));
}
} // namespace lift_004DE890
} // namespace lift_0061BE30

// [0x0061C390] ExprParser::ReadWriteMethodType<NMData::SecondaryTwistAndSwingConstraint, float, {private: float __thiscall NMData::SecondaryTwistAndSwingConstraint::getUserInitialSwing2(void) const, 0}, float, {private: void __thiscall NMData::SecondaryTwistAndSwingConstraint::setUserInitialSwing2(float), 0}>::vfunc_41 (71 bytes)
namespace lift_0061C390 {
// @name ExprParser::ReadWriteMethodType<NMData::SecondaryTwistAndSwingConstraint, float, {private: float __thiscall NMData::SecondaryTwistAndSwingConstraint::getUserInitialSwing2(void) const, 0}, float, {private: void __thiscall NMData::SecondaryTwistAndSwingConstraint::setUserInitialSwing2(float), 0}>::vfunc_41
// @class ExprParser::ReadWriteMethodType<NMData::SecondaryTwistAndSwingConstraint, float, {private: float __thiscall NMData::SecondaryTwistAndSwingConstraint::getUserInitialSwing2(void) const, 0}, float, {private: void __thiscall NMData::SecondaryTwistAndSwingConstraint::setUserInitialSwing2(float), 0}>
// @summary Auto-lifted identical-shape clone of 0x004DE890 (ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41).
namespace lift_004DE890 {
// @name ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41
// @class ExprParser::ReadWriteMethodType
// @summary Sets strength on an AnimationEventData instance from a parsed expression value, or throws if null.
// @field ExprParser::ValuePtr +0x00 void* ptr
// @field ExprParser::ExprArg +0x04 void* typeObj


extern void __fastcall ext_00611980(void* self, int edx_unused, float value);
extern void __fastcall ext_0046C3C0(void* self, int edx_unused);
extern void __cdecl ext_006A6DD2(void* exceptionObject, void* throwInfo);

extern void __stdcall fn_0061C390(void** targetPtr, void* valueArg) {
    void* target = *targetPtr;
    if (target != nullptr) {
        void* typeObj = *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(valueArg) + 4);
        void** vtable = *reinterpret_cast<void***>(typeObj);
        using EvalFn = float (__thiscall*)(void*, void*);
        auto evalFn = reinterpret_cast<EvalFn>(vtable[1]);
        float val = evalFn(typeObj, valueArg);
        ext_00611980(target, 0, val);
        return;
    }

    uint8_t exc[0x28];
    ext_0046C3C0(exc, 0);
    ext_006A6DD2(exc, reinterpret_cast<void*>(0x009DEC1C));
}
} // namespace lift_004DE890
} // namespace lift_0061C390

// [0x00633090] ExprParser::ReadWriteMethodType<EffectorSkeletal, float, &public: float __thiscall EffectorSkeletal::getTimeDelay(void) const, float, &public: void __thiscall EffectorSkeletal::setTimeDelay(float)>::vfunc_41 (71 bytes)
namespace lift_00633090 {
// @name ExprParser::ReadWriteMethodType<EffectorSkeletal, float, &public: float __thiscall EffectorSkeletal::getTimeDelay(void) const, float, &public: void __thiscall EffectorSkeletal::setTimeDelay(float)>::vfunc_41
// @class ExprParser::ReadWriteMethodType<EffectorSkeletal, float, &public: float __thiscall EffectorSkeletal::getTimeDelay(void) const, float, &public: void __thiscall EffectorSkeletal::setTimeDelay(float)>
// @summary Auto-lifted identical-shape clone of 0x004DE890 (ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41).
namespace lift_004DE890 {
// @name ExprParser::ReadWriteMethodType<NMData::AnimationEventData, float, getStrength, float, setStrength>::vfunc_41
// @class ExprParser::ReadWriteMethodType
// @summary Sets strength on an AnimationEventData instance from a parsed expression value, or throws if null.
// @field ExprParser::ValuePtr +0x00 void* ptr
// @field ExprParser::ExprArg +0x04 void* typeObj


extern void __fastcall ext_00630CB0(void* self, int edx_unused, float value);
extern void __fastcall ext_0046C3C0(void* self, int edx_unused);
extern void __cdecl ext_006A6DD2(void* exceptionObject, void* throwInfo);

extern void __stdcall fn_00633090(void** targetPtr, void* valueArg) {
    void* target = *targetPtr;
    if (target != nullptr) {
        void* typeObj = *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(valueArg) + 4);
        void** vtable = *reinterpret_cast<void***>(typeObj);
        using EvalFn = float (__thiscall*)(void*, void*);
        auto evalFn = reinterpret_cast<EvalFn>(vtable[1]);
        float val = evalFn(typeObj, valueArg);
        ext_00630CB0(target, 0, val);
        return;
    }

    uint8_t exc[0x28];
    ext_0046C3C0(exc, 0);
    ext_006A6DD2(exc, reinterpret_cast<void*>(0x009DEC1C));
}
} // namespace lift_004DE890
} // namespace lift_00633090

// [0x0059EF40] ExprParser::ReadWriteMethodType<NMData::CharacterData, float, {[thunk]: __thiscall NMData::CharacterData::`vcall'{128, {flat}}, 4}, float, {[thunk]: __thiscall NMData::CharacterData::`vcall'{100, {flat}}, 4}>::vfunc_41 (72 bytes)
namespace lift_0059EF40 {
// Known callee 0x006036C0: VTable::VirtualSlot25Thunk (loads the object's vtable and tail-calls slot 25 (+0x64) with the same this; result passed through).
extern void* ext_006036C0(void* self, float value);
// Known callee 0x0046C3C0: sub_0046C3C0 (105B, not yet lifted). Called with this = address of the arg1 stack slot.
extern void ext_0046C3C0(void* self);
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk forwarding to MSVCR80!_CxxThrowException).
extern void ext_006A6DD2(void* exceptionObject, const void* throwInfo);

// @name ExprParser::ReadWriteMethodType<NMData::CharacterData, float, getter, float, setter>::vfunc_41
// @class ExprParser::ReadWriteMethodType<NMData::CharacterData, float, {[thunk]: __thiscall NMData::CharacterData::`vcall'{128, {flat}}, 4}, float, {[thunk]: __thiscall NMData::CharacterData::`vcall'{100, {flat}}, 4}>
// @summary Reads a float from the source object (virtual slot 1) and forwards it to the target's virtual slot 25; throws if the held value pointer is null.
// @field ExprParser::ValuePtrType +0x04 void* field_0x04 (sub-object used as this for the slot-25 dispatch)
// @field arg2 (source object) +0x04 void* field_0x04 (pointer to object whose vtable slot 1 yields the float)
void* fn_0059EF40(void** arg1, void* arg2) {
    // esi = *arg1 (the held ValuePtrType object).
    void* esi = *arg1;
    if (esi == nullptr) {
        // Null held pointer: report via the MSVC C++ exception runtime. Never returns.
        ext_0046C3C0(static_cast<void*>(&arg1));
        ext_006A6DD2(static_cast<void*>(&arg1), reinterpret_cast<const void*>(static_cast<uintptr_t>(0x009DEC1C)));
        return nullptr; // unreachable: the throw does not return
    }

    // x = *(arg2 + 4); value = x->vtable[1](arg2) as float.
    auto* src = static_cast<uint8_t*>(arg2);
    void* x = *reinterpret_cast<void**>(src + 0x04);
    void** xVtbl = *reinterpret_cast<void***>(x);
    using Slot1Fn = float (*)(void* self, void* arg);
    float value = reinterpret_cast<Slot1Fn>(xVtbl[1])(x, arg2);

    // Forward to esi+4 via the slot-25 thunk; its result is returned unchanged.
    auto* target = static_cast<uint8_t*>(esi) + 0x04;
    return ext_006036C0(static_cast<void*>(target), value);
}
} // namespace lift_0059EF40

// [0x006330E0]
namespace lift_006330E0 {
// @name ExprParser::ReadWriteMethodType<EffectorSkeletal, NM::Vector3 const &, &EffectorSkeletal::getDesiredPosition, NM::Vector3 const &, &EffectorSkeletal::setDesiredPosition>::vfunc_41
// @class ExprParser::ReadWriteMethodType
// @summary Sets EffectorSkeletal::desiredPosition from a parsed Vector3 value, or throws if the target pointer is null.
// @field EffectorSkeletal +0x9c float desiredPosition_x
// @field EffectorSkeletal +0xa0 float desiredPosition_y
// @field EffectorSkeletal +0xa4 float desiredPosition_z


extern void __thiscall ext_0046C3C0(void* self);
extern void __stdcall ext_006A6DD2(void* pExceptionObject, void* pThrowInfo);

void __stdcall fn_006330E0(uint32_t* arg1, uint32_t* arg2) {
    uint8_t* esi = reinterpret_cast<uint8_t*>(*arg1);
    if (esi == nullptr) {
        uint8_t exceptionObj[0x28];
        ext_0046C3C0(exceptionObj);
        ext_006A6DD2(exceptionObj, reinterpret_cast<void*>(0x009DEC1C));
        return;
    }

    void* ecx = reinterpret_cast<void*>(arg2[1]);
    uintptr_t* vtable = *reinterpret_cast<uintptr_t**>(ecx);
    using VFunc5 = const float* (__thiscall*)(void*, uint32_t*);
    auto vfunc5 = reinterpret_cast<VFunc5>(vtable[5]);
    const float* vec = vfunc5(ecx, arg2);

    *reinterpret_cast<float*>(esi + 0x9C) = vec[0];
    *reinterpret_cast<float*>(esi + 0xA0) = vec[1];
    *reinterpret_cast<float*>(esi + 0xA4) = vec[2];
}
} // namespace lift_006330E0

// [0x00633140]
namespace lift_00633140 {
// @name ExprParser::ReadWriteMethodType<EffectorSkeletal, ...>::vfunc_41
// @class ExprParser::ReadWriteMethodType
// @summary Sets EffectorSkeletal::m_desiredLinearVelocity (at +0xA8..+0xB0) from an ExprParser value or throws if target is null.
// @field EffectorSkeletal +0xA8 float desiredLinearVelocity_x
// @field EffectorSkeletal +0xAC float desiredLinearVelocity_y
// @field EffectorSkeletal +0xB0 float desiredLinearVelocity_z

extern void __thiscall ext_0046C3C0(void* self);
extern void ext_006A6DD2(void* exceptionObject, uint32_t throwInfo);

extern void __stdcall fn_00633140(uint32_t* targetPtr, uint32_t* valueArg) {
    uint32_t target = *targetPtr;
    if (target == 0) {
        uint8_t exceptionObj[0x28];
        ext_0046C3C0(exceptionObj);
        ext_006A6DD2(exceptionObj, 0x009DEC1Cu);
        return;
    }

    uint32_t* obj = *reinterpret_cast<uint32_t**>(reinterpret_cast<uint8_t*>(valueArg) + 4);
    uint32_t* vtable = *reinterpret_cast<uint32_t**>(obj);
    using GetVecFn = float* (__thiscall*)(void* self, uint32_t* arg);
    auto getVec = reinterpret_cast<GetVecFn>(vtable[0x14 / 4]);
    float* vec = getVec(obj, valueArg);

    uint8_t* dst = reinterpret_cast<uint8_t*>(target);
    *reinterpret_cast<float*>(dst + 0xA8) = vec[0];
    *reinterpret_cast<float*>(dst + 0xAC) = vec[1];
    *reinterpret_cast<float*>(dst + 0xB0) = vec[2];
}
} // namespace lift_00633140

// [0x004882C0] ExprParser::ReadWriteMethodType<NMData::DesiredPoseEventData, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, {public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> const & __thiscall NMData::DesiredPoseEventData::getStrength(void) const, 0}, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, {public: void __thiscall NMData::DesiredPoseEventData::setStrength(class std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &), 0}>::vfunc_40 (122 bytes)
namespace lift_004882C0 {
extern void ext_0067A670(void* self, int arg);
extern uint32_t mem_00AD9E30; // function-local static guard word (bit 0 = initialized)
extern uint32_t mem_00AD9E2C; // function-local static object storage (vptr in first dword)

// @name ReadWriteMethodType<DesiredPoseEventData, getStrength/setStrength>::vfunc_40
// @class ExprParser::ReadWriteMethodType<NMData::DesiredPoseEventData, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, {public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> const & __thiscall NMData::DesiredPoseEventData::getStrength(void) const, 0}, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, {public: void __thiscall NMData::DesiredPoseEventData::setStrength(class std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &), 0}>
// @summary Lazily constructs a function-local static accessor object and stores its address into the caller-supplied result slot at +0x04.
// @field ExprParser::ValuePtrType +0x04 void* field_0x04
void fn_004882C0(void* ret) {
    // Guarded one-time construction of the static object at mem_00AD9E2C.
    // The original MSVC EH frame (fs:[0] push/pop) is omitted; it only supports
    // unwinding out of the constructor and has no effect on the result.
    if ((mem_00AD9E30 & 1u) == 0u) {
        mem_00AD9E30 |= 1u;
        ext_0067A670(&mem_00AD9E2C, 0);
        mem_00AD9E2C = 0x0093DC94u; // vftable for the constructed object
    }

    // Store the object's address (0x00AD9E2C) at offset +0x04 of the result slot.
    const uint32_t addr = 0x00AD9E2Cu;
    unsigned char* out = static_cast<unsigned char*>(ret);
    std::memcpy(out + 0x04, &addr, sizeof(addr));
}
} // namespace lift_004882C0

// [0x00488510] ExprParser::ReadWriteMethodType<NMData::DesiredPoseEventData, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, {public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> const & __thiscall NMData::DesiredPoseEventData::getCharacterName(void) const, 0}, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, {[thunk]: __thiscall NMData::DesiredPoseEventData::`vcall'{324, {flat}}, 0}>::vfunc_40 (122 bytes)
namespace lift_00488510 {
// Callee 0x0067A670: thiscall(ecx = object address) with one stack argument.
extern void ext_0067A670(uint32_t ecx_this, int32_t arg0);
// Guest-global one-time-init guard flag and static instance (32-bit guest addresses).
extern uint32_t mem_00AD9E38;
extern uint32_t mem_00AD9E34;

// @name ExprParser::ReadWriteMethodType<NMData::DesiredPoseEventData, getCharacterName/setCharacterName>::vfunc_40
// @class ExprParser::ReadWriteMethodType<NMData::DesiredPoseEventData, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, {public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> const & __thiscall NMData::DesiredPoseEventData::getCharacterName(void) const, 0}, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, {[thunk]: __thiscall NMData::DesiredPoseEventData::`vcall'{324, {flat}}, 0}>
// @summary Lazily initializes the function-local static object at 0x00AD9E34 (guarded by bit 0 of 0x00AD9E38), then stores its address into the caller-supplied ValuePtr at +0x4.
// @field ExprParser::ValuePtrType +0x04 uint32_t valuePtr
void fn_00488510(void* self) {
    // One-time initialization guard for the static object at 0x00AD9E34.
    if ((mem_00AD9E38 & 1u) == 0u) {
        mem_00AD9E38 |= 1u;
        ext_0067A670(0x00AD9E34u, 0);   // constructor call for the static object (ecx = 0x00AD9E34)
        mem_00AD9E34 = 0x0093DE44u;     // vtable pointer of the static object
    }

    // self->valuePtr = &static_object
    lift_field<uint32_t>(self, 0x04) = 0x00AD9E34u;
}
} // namespace lift_00488510

// [0x004886F0] ExprParser::ReadWriteMethodType<NMData::DesiredPoseEventData, float, {public: float __thiscall NMData::DesiredPoseEventData::getEntryBlendPeriod(void) const, 0}, float, {public: void __thiscall NMData::DesiredPoseEventData::setEntryBlendPeriod(float), 0}>::vfunc_40 (122 bytes)
namespace lift_004886F0 {
extern void ext_0067A670();
extern int mem_00AD9E40;
extern int mem_00AD9E3C;

// @name ExprParser::ReadWriteMethodType<DesiredPoseEventData, float>::vfunc_40
// @class ExprParser::ReadWriteMethodType<NMData::DesiredPoseEventData, float, {public: float __thiscall NMData::DesiredPoseEventData::getEntryBlendPeriod(void) const, 0}, float, {public: void __thiscall NMData::DesiredPoseEventData::setEntryBlendPeriod(float), 0}>
// @summary Runs the one-time guarded init of the static proxy object at 0x00AD9E3C, then stores that object's address into the target's +0x04 slot.
// @field ExprParser::ReadWriteMethodType<NMData::DesiredPoseEventData, float, {public: float __thiscall NMData::DesiredPoseEventData::getEntryBlendPeriod(void) const, 0}, float, {public: void __thiscall NMData::DesiredPoseEventData::setEntryBlendPeriod(float), 0}> +0x04 uint32_t field_0x04
void fn_004886F0(void* self) {
    if ((mem_00AD9E40 & 1) == 0) {
        mem_00AD9E40 |= 1;
        ext_0067A670();
        mem_00AD9E3C = 0x0093DFF4;  // vtable pointer of the static object
    }
    lift_field<uint32_t>(self, 0x04) = 0x00AD9E3C;
}
} // namespace lift_004886F0

// [0x0046E190]
namespace lift_0046E190 {
// @name ExprParser::ReadWriteMethodType<ImageExporter, bool, {public: bool __thiscall ImageExporter::isEnabled(void) const, 0}, bool, {public: void __thiscall ImageExporter::setEnabled(bool), 0}>::vfunc_40
// @class ExprParser::ReadWriteMethodType<ImageExporter, bool, {public: bool __thiscall ImageExporter::isEnabled(void) const, 0}, bool, {public: void __thiscall ImageExporter::setEnabled(bool), 0}>
// @summary Initializes a static singleton object if needed and stores its address at offset 0x4 of the output argument.
// @field unknown +0x04 uint32_t field_0x04


extern uint32_t mem_00AD8318;
extern uint32_t mem_00AD8314;

extern void __thiscall ext_0067A670(void* self);

void __thiscall fn_0046E190(void* self, void* out) {
    (void)self;
    if ((mem_00AD8318 & 1u) == 0u) {
        mem_00AD8318 |= 1u;
        ext_0067A670(&mem_00AD8314);
        mem_00AD8314 = 0x0093AAB4u;
    }
    *reinterpret_cast<uint32_t*>(reinterpret_cast<uint8_t*>(out) + 0x4) =
        static_cast<uint32_t>(reinterpret_cast<uintptr_t>(&mem_00AD8314));
}
} // namespace lift_0046E190

// [0x00497D50] ExprParser::ReadWriteMethodType<NMData::Transition, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, {public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> const & __thiscall NMData::Transition::getCondition(void) const, 0}, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, {public: void __thiscall NMData::Transition::setCondition(class std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &), 0}>::vfunc_40 (122 bytes)
namespace lift_00497D50 {
// Constructor-style call for the function-local static object at mem_00ADD15C.
// Original: call 0x0067A670 with ecx = &obj and one stack argument (0).
extern void ext_0067A670(std::uint32_t self, std::uint32_t arg0);

// Guard word (bit 0 = "static already initialized/initializing") and the static object storage.
extern int mem_00ADD160;
extern int mem_00ADD15C;

// @name ExprParser::ReadWriteMethodType<NMData::Transition>::vfunc_40 (Transition condition accessor setup)
// @class ExprParser::ReadWriteMethodType<NMData::Transition, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, {public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> const & __thiscall NMData::Transition::getCondition(void) const, 0}, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, {public: void __thiscall NMData::Transition::setCondition(class std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &), 0}>
// @summary Lazily constructs a shared static accessor object (guarded by bit 0 of a global flag word) and stores its address into the caller's slot at +0x04.
// @field ExprParser::ValuePtrType +0x04 void* field_0x04
void fn_00497D50(void* self) {
    // Thread-safe-style guard: the first caller sets bit 0 and constructs the static object.
    if ((mem_00ADD160 & 1) == 0) {
        mem_00ADD160 |= 1;

        // Construct the static object (ecx = &mem_00ADD15C, one stack arg = 0).
        ext_0067A670(static_cast<std::uint32_t>(reinterpret_cast<std::uintptr_t>(&mem_00ADD15C)), 0u);

        // Install the object's vtable pointer (0x0093F50C) as its first dword.
        *reinterpret_cast<std::uint32_t*>(&mem_00ADD15C) = 0x0093F50Cu;
    }

    // Store the static object's address into self+0x04.
    std::uint8_t* base = static_cast<std::uint8_t*>(self);
    *reinterpret_cast<std::uint32_t*>(base + 0x04) =
        static_cast<std::uint32_t>(reinterpret_cast<std::uintptr_t>(&mem_00ADD15C));
}
} // namespace lift_00497D50

// [0x0046E4A0]
namespace lift_0046E4A0 {
extern uint32_t mem_00AD8320;
extern uint32_t mem_00AD831C;
extern void __thiscall ext_0067A670(void* self);

// @name ExprParser::ReadWriteMethodType<ImageExporter, bool>::vfunc_40
// @class ExprParser::ReadWriteMethodType<ImageExporter, bool>
// @summary Lazily initializes a static type/value descriptor at 0x00AD831C and stores its address at arg0 + 0x4.
void __thiscall fn_0046E4A0(void* /*self*/, void* arg0) {
    if ((mem_00AD8320 & 1u) == 0u) {
        mem_00AD8320 |= 1u;
        ext_0067A670(&mem_00AD831C);
        mem_00AD831C = 0x0093AC64u;
    }
    *reinterpret_cast<uint32_t*>(static_cast<uint8_t*>(arg0) + 4) =
        static_cast<uint32_t>(reinterpret_cast<uintptr_t>(&mem_00AD831C));
}
} // namespace lift_0046E4A0

// [0x0049C160] ExprParser::ReadWriteMethodType<NMData::State, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, {[thunk]: __thiscall NMData::State::`vcall'{4, {flat}}, 8}, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, {public: void __thiscall NMData::State::setName(class std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &), 0}>::vfunc_40 (122 bytes)
namespace lift_0049C160 {
// @name ExprParser::ReadWriteMethodType<NMData::State>::vfunc_40 (setName accessor setup)
// @class ExprParser::ReadWriteMethodType<NMData::State, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, {[thunk]: __thiscall NMData::State::`vcall'{4, {flat}}, 8}, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, {public: void __thiscall NMData::State::setName(class std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &), 0}>
// @summary Lazily constructs the static State::setName ReadWriteMethodType object (once, guarded by bit 0 of mem_00ADD7F8) and publishes its address into the out-object's +0x04 slot.
// @field ExprParser::ValuePtrType +0x04 uint32_t field_0x04

extern void ext_0067A670(void* self, uint32_t flag);
extern uint32_t mem_00ADD7F8; // one-time initialization guard word (bit 0)
extern uint32_t mem_00ADD7F4; // static object storage; first dword becomes its vtable VA

void fn_0049C160(void* out) {
    if ((mem_00ADD7F8 & 1u) == 0u) {
        mem_00ADD7F8 |= 1u;
        ext_0067A670(static_cast<void*>(&mem_00ADD7F4), 0u);
        mem_00ADD7F4 = 0x009401D4u;
    }
    lift_field<uint32_t>(out, 4) = 0x00ADD7F4u;
}
} // namespace lift_0049C160

// [0x00498260] ExprParser::ReadWriteMethodType<NMData::Transition, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, {public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> const & __thiscall NMData::Transition::getResultantStateID(void) const, 0}, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, {public: void __thiscall NMData::Transition::setResultantState(class std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &), 0}>::vfunc_40 (122 bytes)
namespace lift_00498260 {
extern void ext_0067A670(void* self, int arg);
extern int mem_00ADD168;
extern int mem_00ADD164;

// @name ExprParser::ReadWriteMethodType<NMData::Transition>::vfunc_40 (static accessor binding)
// @class ExprParser::ReadWriteMethodType<NMData::Transition, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, {public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> const & __thiscall NMData::Transition::getResultantStateID(void) const, 0}, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, {public: void __thiscall NMData::Transition::setResultantState(class std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &), 0}>
// @summary Lazily initializes one shared static accessor object (guard bit 0 of mem_00ADD168) and stores its address into the caller's object at +0x04.
// @field ExprParser::ValuePtrType +0x04 void* field_0x04
void fn_00498260(void* out) {
    // Function-local static guard: bit 0 of mem_00ADD168 marks the static as initialized.
    // The original is MSVC thread-safe static init (SEH frame on fs:[0]); no portable
    // equivalent of the SEH frame or the runtime's init lock is reproduced here.
    if ((mem_00ADD168 & 1) == 0) {
        mem_00ADD168 |= 1;
        // Constructor for the static object at mem_00ADD164 (original: thiscall with one stack arg of 0).
        ext_0067A670(&mem_00ADD164, 0);
        // First word of the static object is the vtable pointer for its class.
        mem_00ADD164 = 0x0093F6BC;
    }

    // out +0x04 = address of the shared static object.
    lift_field<void*>(out, 0x04) = &mem_00ADD164;
}
} // namespace lift_00498260

// [0x0046EDF0]
namespace lift_0046EDF0 {
// @name ExprParser::ReadWriteMethodType<ImageExporter, int, getImageHeight, int, setImageHeight>::vfunc_40
// @class ExprParser::ReadWriteMethodType<ImageExporter, int, getImageHeight, int, setImageHeight>
// @summary Lazily initializes static singleton at 0x00AD8334 and stores its pointer at arg0 + 0x4.


extern void __thiscall ext_0067A670(void* self);
extern uint32_t mem_00AD8338;
extern uint32_t mem_00AD8334;

void __thiscall fn_0046EDF0(void* self, void* arg0) {
    (void)self;
    if ((mem_00AD8338 & 1u) == 0u) {
        mem_00AD8338 |= 1u;
        ext_0067A670(&mem_00AD8334);
        mem_00AD8334 = 0x0093B174u;
    }
    *reinterpret_cast<uint32_t*>(reinterpret_cast<uint8_t*>(arg0) + 0x4) =
        static_cast<uint32_t>(reinterpret_cast<uintptr_t>(&mem_00AD8334));
}
} // namespace lift_0046EDF0

// [0x0046E840]
namespace lift_0046E840 {
// @name ExprParser::ReadWriteMethodType<ImageExporter, getDestination, setDestination>::vfunc_40
// @class ExprParser::ReadWriteMethodType
// @summary Lazily initializes a static value type descriptor and stores it into arg1+0x4
// @field Arg1 +0x04 uint32_t typeDescriptor


extern uint32_t mem_00AD8328;
extern uint32_t mem_00AD8324;
extern void __thiscall ext_0067A670(void* self);

void __thiscall fn_0046E840(void* self, void* arg1) {
    (void)self;
    if ((mem_00AD8328 & 1u) == 0u) {
        mem_00AD8328 |= 1u;
        ext_0067A670(&mem_00AD8324);
        mem_00AD8324 = 0x0093AE14u;
    }
    *(uint32_t*)((uint8_t*)arg1 + 4) = (uint32_t)(uintptr_t)&mem_00AD8324;
}
} // namespace lift_0046E840

// [0x0046F0D0]
namespace lift_0046F0D0 {
// @name ExprParser::ReadWriteMethodType<ImageExporter>::vfunc_40
// @class ExprParser::ReadWriteMethodType<ImageExporter>
// @summary Initializes a static type descriptor if needed and stores its address at out+0x4.
// @field ExprParser::TypeDescriptor +0x4 uint32_t* field_0x04

extern uint32_t mem_00AD8340;
extern uint8_t mem_00AD833C[];
extern void ext_0067A670(void* self);

void __thiscall fn_0046F0D0(void* /*self*/, void* out) {
    if ((mem_00AD8340 & 1) == 0) {
        mem_00AD8340 |= 1;
        ext_0067A670(mem_00AD833C);
        *reinterpret_cast<uint32_t*>(mem_00AD833C) = 0x0093B324;
    }
    *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(out) + 4) = mem_00AD833C;
}
} // namespace lift_0046F0D0

// [0x0046EAA0]
namespace lift_0046EAA0 {
// @name ExprParser::ReadWriteMethodType<ImageExporter, int, getEndFrame, int, setEndFrame>::vfunc_40
// @class ExprParser::ReadWriteMethodType<ImageExporter, int, getEndFrame, int, setEndFrame>
// @summary Initializes a static type descriptor if needed and assigns it to arg0+0x4.
// @field ExprParser::ValuePtrType +0x04 uint32_t field_0x04


extern uint32_t mem_00AD8330;
extern uint32_t mem_00AD832C;
extern void __thiscall ext_0067A670(void* self);

void __thiscall fn_0046EAA0(void* self, uint32_t arg0) {
    (void)self;
    if ((mem_00AD8330 & 1u) == 0) {
        mem_00AD8330 |= 1u;
        ext_0067A670(&mem_00AD832C);
        mem_00AD832C = 0x0093AFC4u;
    }
    *(uint32_t*)((uintptr_t)arg0 + 0x4) = (uint32_t)(uintptr_t)&mem_00AD832C;
}
} // namespace lift_0046EAA0

// [0x004A2790] ExprParser::ReadWriteMethodType<StateMachineEditor::FSMEditView, bool, ...drawVariables, bool, ...setDrawVariables>::vfunc_40 (122 bytes)
namespace lift_004A2790 {
// Originally: MSVC EH frame push/pop around a function-local static initializer.
// The frame bookkeeping (fs:[0] push/pop, EH state -1) has no portable equivalent and is omitted.

// Callee 0x0067A670: constructor of the function-local static accessor object (thiscall, object in ecx, one stack arg 0).
extern void ext_0067A670();

// Init-guard byte/dword at 0x00ADE0D8 (bit 0 = "accessor constructed").
extern unsigned char mem_00ADE0D8;
// Storage of the static accessor object at 0x00ADE0D4; its first dword is the vtable pointer 0x00940834.
extern unsigned char mem_00ADE0D4[8];

namespace lift_004A2790 {
constexpr std::uintptr_t kAccessorVtable = 0x00940834;

// @name ExprParser::ReadWriteMethodType<FSMEditView>::vfunc_40 (FSMEditView drawVariables accessor binding)
// @class ExprParser::ReadWriteMethodType<StateMachineEditor::FSMEditView, bool, {public: bool __thiscall StateMachineEditor::FSMEditView::drawVariables(void) const, 0}, bool, {public: void __thiscall StateMachineEditor::FSMEditView::setDrawVariables(bool), 0}>
// @summary Lazily constructs the static drawVariables accessor object once, then stores a pointer to it into the output slot's +0x04 field.
// @field ExprParser::ValuePtrType +0x04 void* field_0x04
void fn_004A2790(void* out) {
    std::uint32_t& guard = *reinterpret_cast<std::uint32_t*>(&mem_00ADE0D8);

    if ((guard & 1u) == 0) {
        // First call: mark constructed, run the static object's constructor, then install its vtable.
        guard |= 1u;
        ext_0067A670();
        *reinterpret_cast<std::uintptr_t*>(mem_00ADE0D4) = kAccessorVtable;
    }

    // out +0x04 = address of the static accessor object.
    *reinterpret_cast<void**>(static_cast<std::uint8_t*>(out) + 0x04) =
        static_cast<void*>(mem_00ADE0D4);
}
} // namespace lift_004A2790
} // namespace lift_004A2790

// [0x0049C270] ExprParser::ReadWriteMethodType<NMData::State, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, {public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> const & __thiscall NMData::State::getFileName(void) const, 0}, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, {public: void __thiscall NMData::State::setFileName(class std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &), 0}>::vfunc_40 (122 bytes)
namespace lift_0049C270 {
extern void ext_0067A670(void* thiz);
extern int mem_00ADD800;
extern int mem_00ADD7FC;

// @name ExprParser::ReadWriteMethodType<NMData::State>::vfunc_40
// @class ExprParser::ReadWriteMethodType<NMData::State, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, {public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> const & __thiscall NMData::State::getFileName(void) const, 0}, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, {public: void __thiscall NMData::State::setFileName(class std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &), 0}>
// @summary One-time initializes a static accessor object at mem_00ADD7FC (guarded by bit 0 of mem_00ADD800), then stores its address into self+0x04.
// @field ExprParser::ReadWriteMethodType<NMData::State, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, {public: class std::basic_string<char, std::char_traits<char>, std::allocator<char>> const & __thiscall NMData::State::getFileName(void) const, 0}, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, {public: void __thiscall NMData::State::setFileName(class std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &), 0}> +0x04 uint32_t field_0x04
//
// The original wraps the body in an SEH frame (fs:[0] push/restore); that is
// dropped here as it has no portable equivalent and does not affect the logic.
// The guard test/set is a bit-0 test on the dword at mem_00ADD800.
// ext_0067A670 is called with the static object's address as its implicit `this`.
void fn_0049C270(void* self) {
    if ((mem_00ADD800 & 1) == 0) {
        mem_00ADD800 |= 1;
        ext_0067A670(&mem_00ADD7FC);
        mem_00ADD7FC = 0x00940384;
    }
    *reinterpret_cast<uint32_t*>(static_cast<uint8_t*>(self) + 0x04) = 0x00ADD7FCu;
}
} // namespace lift_0049C270

// [0x0049C610]
namespace lift_0049C610 {
// @name ExprParser::ReadWriteMethodType<NMData::State, bool, isDeactivated, bool, setIsDeactivated>::vfunc_40
// @class ExprParser::ReadWriteMethodType<NMData::State, bool, {public: bool __thiscall NMData::State::isDeactivated(void) const, 0}, bool, {public: void __thiscall NMData::State::setIsDeactivated(bool), 0}>
// @summary One-time guarded setup: on first call, runs the static initializer ext_0067A670 on mem_00ADD804 and sets its vtable word to 0x93FE74; every call binds the out-object's +4 slot to the static at 0x00ADD804 and returns (stdcall, 1 arg).
// @field ExprParser::ValuePtrType +0x04 uint32_t field_0x04

extern void __thiscall ext_0067A670(void* self, uint32_t arg);

extern uint32_t mem_00ADD808; // init-guard flags (bit 0 = initialized/initializing)
extern uint32_t mem_00ADD804; // static object; first word holds vtable 0x0093FE74

static constexpr uint32_t kStaticGuestVA = 0x00ADD804u;
static constexpr uint32_t kVtableGuestVA = 0x0093FE74u;

// stdcall, one stack argument (ret 4): out object whose +4 slot is bound.
void __stdcall fn_0049C610(void* out) {
    if ((mem_00ADD808 & 1u) == 0) {
        mem_00ADD808 |= 1u;
        ext_0067A670(&mem_00ADD804, 0u);
        mem_00ADD804 = kVtableGuestVA;
    }
    uint32_t bound = kStaticGuestVA;
    std::memcpy(static_cast<uint8_t*>(out) + 4, &bound, sizeof(bound));
}
} // namespace lift_0049C610

// [0x00470290]
namespace lift_00470290 {
// @name ExprParser::ReadWriteMethodType<RuntimeEngine,float>::vfunc_40
// @class ExprParser::ReadWriteMethodType<RuntimeEngine,float>
// @summary Lazily initializes a static type descriptor at 0x00AD8FEC and stores its pointer at arg0 + 0x4.
// @field unknown +0x04 uint32_t field_0x04


extern uint8_t mem_00AD8FF0;
extern uint32_t mem_00AD8FEC;

extern void __thiscall ext_0067A670(void* self);

void __thiscall fn_00470290(void* self, uint32_t arg0) {
    (void)self;
    if ((mem_00AD8FF0 & 1u) == 0u) {
        mem_00AD8FF0 |= 1u;
        ext_0067A670(&mem_00AD8FEC);
        mem_00AD8FEC = 0x0093B524u;
    }
    *reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(arg0) + 4u) = 0x00AD8FECu;
}
} // namespace lift_00470290

// [0x004706A0]
namespace lift_004706A0 {
// @name ExprParser::ReadWriteMethodType<RuntimeEngine, float, getTimeZoomFactor, float, setTimeZoomFactor>::vfunc_40
// @class ExprParser::ReadWriteMethodType
// @summary Initializes static type/value descriptor if needed and stores its pointer at arg0 + 0x4.
// @field ExprParser::ValuePtrType +0x04 uint32_t field_0x04


extern uint32_t mem_00AD8FF8;
extern uint8_t mem_00AD8FF4[];
extern void __thiscall ext_0067A670(void* self);

void __thiscall fn_004706A0(void* self, void* out) {
    (void)self;
    if ((mem_00AD8FF8 & 1u) == 0u) {
        mem_00AD8FF8 |= 1u;
        ext_0067A670(mem_00AD8FF4);
        *reinterpret_cast<uint32_t*>(mem_00AD8FF4) = 0x0093B6D4u;
    }
    *reinterpret_cast<uint32_t*>(static_cast<uint8_t*>(out) + 4) =
        static_cast<uint32_t>(reinterpret_cast<uintptr_t>(mem_00AD8FF4));
}
} // namespace lift_004706A0

// [0x004A2AD0] ExprParser::ReadWriteMethodType<StateMachineEditor::FSMEditView, bool, {public: bool __thiscall StateMachineEditor::FSMEditView::drawActions(void) const, 0}, bool, {public: void __thiscall StateMachineEditor::FSMEditView::setDrawActions(bool), 0}>::vfunc_40 (122 bytes)
namespace lift_004A2AD0 {
extern void ext_0067A670(void* ctor_this, int arg);
extern int mem_00ADE0E0;
extern int mem_00ADE0DC;

// @name ExprParser::ReadWriteMethodType<FSMEditView, bool>::vfunc_40
// @class ExprParser::ReadWriteMethodType<StateMachineEditor::FSMEditView, bool, {public: bool __thiscall StateMachineEditor::FSMEditView::drawActions(void) const, 0}, bool, {public: void __thiscall StateMachineEditor::FSMEditView::setDrawActions(bool), 0}>
// @summary Lazily constructs the shared static ReadWriteMethodType object (once-guarded by bit 0 of mem_00ADE0E0) and stores its address into self+0x04.
// @field ExprParser::ReadWriteMethodType<StateMachineEditor::FSMEditView, bool, {public: bool __thiscall StateMachineEditor::FSMEditView::drawActions(void) const, 0}, bool, {public: void __thiscall StateMachineEditor::FSMEditView::setDrawActions(bool), 0}> +0x04 void* field_0x04
void fn_004A2AD0(void* self) {
    // One-time initialization guard: bit 0 of mem_00ADE0E0.
    if ((mem_00ADE0E0 & 1) == 0) {
        mem_00ADE0E0 |= 1;
        ext_0067A670(&mem_00ADE0DC, 0);
        // Install the vtable pointer for the static object.
        mem_00ADE0DC = 0x009409E4;
    }
    // Publish the static object's address into self+0x04.
    auto* slot = reinterpret_cast<int*>(static_cast<char*>(self) + 0x04);
    *slot = static_cast<int>(reinterpret_cast<intptr_t>(&mem_00ADE0DC));
}
} // namespace lift_004A2AD0

// [0x004A3820] ExprParser::ReadWriteMethodType<StateMachineEditor::FSMEditView, int, {public: int __thiscall StateMachineEditor::FSMEditView::getFontSize(void) const, 0}, int, {public: void __thiscall StateMachineEditor::FSMEditView::setFontSize(int), 0}>::vfunc_40 (122 bytes)
namespace lift_004A3820 {
extern void ext_0067A670();
extern int mem_00ADE100;
extern int mem_00ADE0FC;

// @name ReadWriteMethodType<FSMEditView,int,getFontSize,int,setFontSize>::vfunc_40
// @class ExprParser::ReadWriteMethodType<StateMachineEditor::FSMEditView, int, {public: int __thiscall StateMachineEditor::FSMEditView::getFontSize(void) const, 0}, int, {public: void __thiscall StateMachineEditor::FSMEditView::setFontSize(int), 0}>
// @summary Lazily initializes the function-local static type descriptor for the FSMEditView font-size accessor and stores its address into the caller-supplied slot at +4.
// @field ExprParser::ValuePtrType +0x04 uint32_t field_0x04
void fn_004A3820(void* self) {
    // One-time initialization guard: bit 0 of mem_00ADE100 marks the descriptor as built.
    if ((mem_00ADE100 & 1) == 0) {
        mem_00ADE100 |= 1;
        ext_0067A670();
        mem_00ADE0FC = 0x009410A4;  // vtable pointer for the descriptor
    }
    // Publish the descriptor address into the object's +4 slot.
    lift_field<uint32_t>(self, 4) =
        static_cast<uint32_t>(reinterpret_cast<uintptr_t>(&mem_00ADE0FC));
}
} // namespace lift_004A3820

// [0x004A3BA0] ExprParser::ReadWriteMethodType<StateMachineEditor::FSMEditView, int, {public: int __thiscall StateMachineEditor::FSMEditView::getCodeWindowFontSize(void) const, 0}, int, {public: void __thiscall StateMachineEditor::FSMEditView::setCodeWindowFontSize(int), 0}>::vfunc_40 (122 bytes)
namespace lift_004A3BA0 {
extern void ext_0067A670();
extern int mem_00ADE108;
extern int mem_00ADE104;

// @name ExprParser::ReadWriteMethodType<FSMEditView,int,getCodeWindowFontSize,int,setCodeWindowFontSize>::vfunc_40
// @class ExprParser::ReadWriteMethodType<StateMachineEditor::FSMEditView, int, {public: int __thiscall StateMachineEditor::FSMEditView::getCodeWindowFontSize(void) const, 0}, int, {public: void __thiscall StateMachineEditor::FSMEditView::setCodeWindowFontSize(int), 0}>
// @summary Lazily initializes the shared static ReadWriteMethodType instance (once, guarded by a flag bit) and stores its address into the out-object at +0x04.
// @field ExprParser::ReadWriteMethodType<...> +0x04 void* field_0x04 (pointer written with the address of the shared static instance)
void fn_004A3BA0(void* out) {
    // One-time initialization guarded by bit 0 of mem_00ADE108.
    if ((static_cast<uint32_t>(mem_00ADE108) & 1u) == 0) {
        mem_00ADE108 = static_cast<int>(static_cast<uint32_t>(mem_00ADE108) | 1u);
        ext_0067A670();                                   // base-class constructor for the static instance
        mem_00ADE104 = static_cast<int>(0x00941254u);     // vtable pointer of the static instance
    }
    // Publish the static instance's address at out->+0x04.
    const uint32_t instance = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(&mem_00ADE104));
    auto* slot = reinterpret_cast<uint32_t*>(static_cast<char*>(out) + 0x04);
    *slot = instance;
}
} // namespace lift_004A3BA0

// [0x004A34B0] ExprParser::ReadWriteMethodType<StateMachineEditor::FSMEditView, bool, {public: bool __thiscall StateMachineEditor::FSMEditView::drawConditionNumber(void) const, 0}, bool, {public: void __thiscall StateMachineEditor::FSMEditView::setDrawConditionNumber(bool), 0}>::vfunc_40 (122 bytes)
namespace lift_004A34B0 {
extern void ext_0067A670();
extern int mem_00ADE0F8;
extern int mem_00ADE0F4;

// @name ReadWriteMethodType<FSMEditView,bool,drawConditionNumber,bool,setDrawConditionNumber>::vfunc_40
// @class ExprParser::ReadWriteMethodType<StateMachineEditor::FSMEditView, bool, {public: bool __thiscall StateMachineEditor::FSMEditView::drawConditionNumber(void) const, 0}, bool, {public: void __thiscall StateMachineEditor::FSMEditView::setDrawConditionNumber(bool), 0}>
// @summary Lazily initializes the function-local static type descriptor for the FSMEditView drawConditionNumber accessor and stores its address into the caller-supplied slot at +4.
// @field ExprParser::ValuePtrType +0x04 uint32_t field_0x04
void fn_004A34B0(void* self) {
    // One-time initialization guard: bit 0 of mem_00ADE0F8 marks the descriptor as built.
    if ((mem_00ADE0F8 & 1) == 0) {
        mem_00ADE0F8 |= 1;
        ext_0067A670();
        // Descriptor vtable pointer (first dword of the static object at 0x00ADE0F4).
        mem_00ADE0F4 = 0x00940EF4;
    }
    // Publish the descriptor address into the object's +4 slot.
    lift_field<uint32_t>(self, 4) =
        static_cast<uint32_t>(reinterpret_cast<uintptr_t>(&mem_00ADE0F4));
}
} // namespace lift_004A34B0

// [0x004A2E70]
namespace lift_004A2E70 {
// @name ExprParser::ReadWriteMethodType<StateMachineEditor::FSMEditView, int, getDrawDepth, int, setDrawDepth>::vfunc_40
// @class ExprParser::ReadWriteMethodType<StateMachineEditor::FSMEditView, int, getDrawDepth, int, setDrawDepth>
// @summary One-time initialization of the static DrawDepth read/write method-type instance; stores its address into the out-pointer's +0x04 slot.
// @field ValuePtrType +0x04 uint32_t field_0x04

// One-time initialization guard (bit 0 is the "constructed" flag).
extern uint32_t mem_00ADE0E8;
// Storage of the static method-type object; first dword is its vtable pointer.
extern uint32_t mem_00ADE0E4;
// Base-class constructor: this in ecx, one stack argument (always 0 here).
extern void ext_0067A670(void* self, int32_t arg);

void ExprParser_ReadWriteMethodType_FSMEditView_DrawDepth_vfunc_40(void* out)
{
    if ((mem_00ADE0E8 & 1u) == 0) {
        mem_00ADE0E8 |= 1u;
        ext_0067A670(reinterpret_cast<void*>(&mem_00ADE0E4), 0);
        mem_00ADE0E4 = 0x00940B94u;
    }
    lift_field<uint32_t>(out, 0x4) = 0x00ADE0E4u;
}
} // namespace lift_004A2E70

// [0x004AA590]
namespace lift_004AA590 {
// Externals referenced by this function.
extern void ext_0067A670(void* self);   // constructor-like init of the static object (sub_0067A670)
extern uint8_t mem_00ADF9EC;            // function-local static init guard (bit 0)
extern uint8_t mem_00ADF9E8[];          // function-local static object storage

// @name ExprParser::ReadWriteMethodType<NMData::BehaviourData, std::string const&, NMData::BehaviourData::getCharacterName, std::string const&, vcall324>::vfunc_40
// @class ExprParser::ReadWriteMethodType<NMData::BehaviourData, std::string const&, NMData::BehaviourData::getCharacterName, std::string const&, vcall324>
// @summary Lazily constructs a static object once, then stores its address into the ValuePtr output argument at +0x4.
// @field ExprParser::ValuePtrType +0x04 void* field_0x04
void __thiscall vfunc_40(void* /*this*/, void* out) {
    if ((mem_00ADF9EC & 1) == 0) {
        mem_00ADF9EC |= 1;
        ext_0067A670(mem_00ADF9E8);
        lift_field<DWORD>(mem_00ADF9E8, 0) = 0x009418AC;
    }
    lift_field<DWORD>(out, 4) = static_cast<DWORD>(reinterpret_cast<uintptr_t>(mem_00ADF9E8));
}
} // namespace lift_004AA590

// [0x004AAA00] ExprParser::ReadWriteMethodType<NMData::BehaviourData, bool, isEnabled, bool, vcall{272}>::vfunc_40 (122 bytes)
namespace lift_004AAA00 {
// Known callee 0x0067A670: ctor-like init routine invoked once for the static object at mem_00ADF9F0 (26 bytes).
extern void ext_0067A670(void* self, uint32_t arg);

// Static one-time-init guard (bit 0 of the dword) and the static object storage.
extern uint32_t mem_00ADF9F4;
extern uint32_t mem_00ADF9F0;

// Vtable address written into the static object once it is initialised.
static constexpr uint32_t kStaticObjVtable = 0x00941A5Cu;
// Guest address of the static object (mem_00ADF9F0).
static constexpr uint32_t kStaticObjAddr = 0x00ADF9F0u;

// @name ReadWriteMethodType_BehaviourData_isEnabled_vfunc_40
// @class ExprParser::ReadWriteMethodType<NMData::BehaviourData, bool, {public: bool __thiscall NMData::BehaviourData::isEnabled(void) const, 0}, bool, {[thunk]: __thiscall NMData::BehaviourData::`vcall'{272, {flat}}, 0}>
// @summary Lazily initialises the shared static object at 0x00ADF9F0 once, then stores its address into the out-pointer's +0x4 slot.
// @field ExprParser::ValuePtrType +0x04 void* field_0x04
void fn_004AAA00(void* out) {
    // The original wraps this in an SEH frame (fs:[0] push/pop, scope id 0x88897E);
    // exception-frame bookkeeping has no portable equivalent and is omitted.

    if ((mem_00ADF9F4 & 1u) == 0) {
        // First call: mark initialised, construct the static object, then install its vtable.
        mem_00ADF9F4 |= 1u;
        ext_0067A670(&mem_00ADF9F0, 0u);
        mem_00ADF9F0 = kStaticObjVtable;
    }

    // Both paths hand back the static object's address through out+0x4.
    lift_field<uint32_t>(out, 0x4) = kStaticObjAddr;
}
} // namespace lift_004AAA00

// [0x00470B40]
namespace lift_00470B40 {
extern uint32_t mem_00AD9000;
extern uint32_t mem_00AD8FFC;

extern void __thiscall ext_0067A670(void* self);

// @name ExprParser::ReadWriteMethodType<RuntimeEngine, float, getSimulationFrameRate, float, setSimulationFrameRate>::vfunc_40
// @class ExprParser::ReadWriteMethodType<RuntimeEngine, float, getSimulationFrameRate, float, setSimulationFrameRate>
// @summary Lazily initializes a static type descriptor at 0x00AD8FFC and stores its pointer at arg0 + 0x04
// @field Arg0 +0x04 uint32_t field_0x04
void __stdcall fn_00470B40(uint8_t* out) {
    if ((mem_00AD9000 & 1u) == 0u) {
        mem_00AD9000 |= 1u;
        ext_0067A670(&mem_00AD8FFC);
        mem_00AD8FFC = 0x0093B884u;
    }
    *reinterpret_cast<uint32_t*>(out + 4) = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(&mem_00AD8FFC));
}
} // namespace lift_00470B40

// [0x00470FD0]
namespace lift_00470FD0 {
void __thiscall ext_0067A670(void* this_ptr);
extern uint32_t mem_00AD9004;
extern uint32_t mem_00AD9008;

// @name ExprParser::ReadWriteMethodType<RuntimeEngine, bool, getPlaybackLoopingEnabled, bool, enablePlaybackLooping>::vfunc_40
// @class ExprParser::ReadWriteMethodType
// @summary Lazily initializes static type descriptor at 0x00AD9004 and stores its address at out+0x4.
// @field out +0x04 uint32_t typePtr
void __thiscall fn_00470FD0(void* this_ptr, uint8_t* out) {
    (void)this_ptr;
    if ((mem_00AD9008 & 1u) == 0) {
        mem_00AD9008 |= 1u;
        ext_0067A670(&mem_00AD9004);
        mem_00AD9004 = 0x0093BA34u;
    }
    *reinterpret_cast<uint32_t*>(out + 4) = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(&mem_00AD9004));
}
} // namespace lift_00470FD0

// [0x00471300]
namespace lift_00471300 {
extern uint32_t mem_00AD9010;
extern uint32_t mem_00AD900C;
extern void __thiscall ext_0067A670(void* self);

// @name ExprParser::ReadWriteMethodType<RuntimeEngine,int,getNumTicksToRun,int,setNumTicksToRun>::vfunc_40
// @class ExprParser::ReadWriteMethodType
// @summary Lazily initializes static type descriptor at 0x00AD900C and stores its pointer at out+0x04.
// @field ExprParser::ValuePtrType +0x04 uint32_t field_0x04

void __thiscall fn_00471300(void* /*self*/, void* out) {
    if ((mem_00AD9010 & 1) == 0) {
        mem_00AD9010 |= 1;
        ext_0067A670(&mem_00AD900C);
        mem_00AD900C = 0x0093BBE4u;
    }
    *reinterpret_cast<uint32_t*>(reinterpret_cast<uint8_t*>(out) + 0x04) =
        static_cast<uint32_t>(reinterpret_cast<uintptr_t>(&mem_00AD900C));
}
} // namespace lift_00471300

// [0x004B1D80]
namespace lift_004B1D80 {
// @name ExprParser::ReadWriteMethodType_GraphEntryData_isActive_activate::vfunc_40
// @class ExprParser::ReadWriteMethodType
// @summary Lazily initializes a static Type object at 0x00AE0D08 and stores its pointer at arg1 + 0x4
// @field OutType +0x04 uint32_t typePtr


extern uint32_t mem_00AE0D08;
extern uint32_t mem_00AE0D0C;
extern void __thiscall ext_0067A670(void* self);

void __stdcall fn_004B1D80(uint32_t arg1) {
    if ((mem_00AE0D0C & 1u) == 0u) {
        mem_00AE0D0C |= 1u;
        ext_0067A670(&mem_00AE0D08);
        mem_00AE0D08 = 0x009425F4u;
    }
    *(uint32_t*)(uintptr_t)(arg1 + 0x4u) = (uint32_t)(uintptr_t)&mem_00AE0D08;
}
} // namespace lift_004B1D80

// [0x004B1910]
namespace lift_004B1910 {
// @name ExprParser::ReadWriteMethodType<NMData::GraphEntryData, std::string const &, getExpression, std::string const &, setExpression>::vfunc_40
// @class ExprParser::ReadWriteMethodType
// @summary Lazily initializes a static type/descriptor object at 0x00AE0CF8 and stores its pointer at arg0 + 0x4.


extern uint32_t mem_00AE0CFC;
extern uint32_t mem_00AE0CF8;

extern void __thiscall ext_0067A670(void* this_ptr);

void __thiscall fn_004B1910(void* this_ptr, uintptr_t arg0) {
    (void)this_ptr;
    if ((mem_00AE0CFC & 1u) == 0u) {
        mem_00AE0CFC |= 1u;
        ext_0067A670(&mem_00AE0CF8);
        mem_00AE0CF8 = 0x00942294u;
    }
    *(uint32_t*)(arg0 + 4) = (uint32_t)(uintptr_t)&mem_00AE0CF8;
}
} // namespace lift_004B1910

// [0x004B1AB0]
namespace lift_004B1AB0 {
// @name ExprParser::ReadWriteMethodType<NMData::GraphEntryData, int, getColor, int, setColor>::vfunc_40
// @class ExprParser::ReadWriteMethodType
// @summary Initializes static type singleton if needed and stores its pointer at out + 0x4.
// @field ExprParser::ValuePtrType +0x4 uint32_t typePtr

extern uint32_t mem_00AE0D04;
extern uint32_t mem_00AE0D00;
extern void __thiscall ext_0067A670(void* self);

void __thiscall fn_004B1AB0(void* self, uint8_t* out) {
    (void)self;
    if ((mem_00AE0D04 & 1u) == 0u) {
        mem_00AE0D04 |= 1u;
        ext_0067A670(&mem_00AE0D00);
        mem_00AE0D00 = 0x00942444u;
    }
    *reinterpret_cast<uint32_t*>(out + 0x4) = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(&mem_00AE0D00));
}
} // namespace lift_004B1AB0

// [0x004AABE0]
namespace lift_004AABE0 {
extern uint8_t mem_00ADF9FC[];
extern uint8_t mem_00ADF9F8[];
void* __thiscall ext_0067A670(void* self);

// @name ExprParser::ReadWriteMethodType<NMData::BehaviourData,bool,&NMData::BehaviourData::getVisibility,bool,&NMData::BehaviourData::vcall_32>::vfunc_40
// @class ExprParser::ReadWriteMethodType<NMData::BehaviourData,bool,&NMData::BehaviourData::getVisibility,bool,&NMData::BehaviourData::vcall_32>
// @summary Initializes a static type descriptor if needed and stores its pointer at arg0 + 0x4.

void __thiscall fn_004AABE0(void* self, void* arg0) {
    (void)self;
    uint32_t* guard = reinterpret_cast<uint32_t*>(mem_00ADF9FC);
    if ((*guard & 1u) == 0u) {
        *guard |= 1u;
        ext_0067A670(mem_00ADF9F8);
        *reinterpret_cast<uint32_t*>(mem_00ADF9F8) = 0x009416FCu;
    }
    *reinterpret_cast<uint32_t*>(reinterpret_cast<uint8_t*>(arg0) + 0x4) =
        static_cast<uint32_t>(reinterpret_cast<uintptr_t>(mem_00ADF9F8));
}
} // namespace lift_004AABE0

// [0x004B1F70]
namespace lift_004B1F70 {
// @name ExprParser::ReadWriteMethodType<NMData::GraphEngineData,float,getXMin,float,setXMin>::vfunc_40
// @class ExprParser::ReadWriteMethodType<NMData::GraphEngineData,float,getXMin,float,setXMin>
// @summary Lazily initializes a singleton object at 0x00AE0D10 and stores its address at arg0 + 4.
// @field OutStruct +0x04 uint32_t* field_0x04


extern uint32_t mem_00AE0D14;
extern uint8_t mem_00AE0D10[];
extern void __thiscall ext_0067A670(void* self);

void __thiscall fn_004B1F70(void* /*self*/, uint8_t* out) {
    if ((mem_00AE0D14 & 1u) == 0u) {
        mem_00AE0D14 |= 1u;
        ext_0067A670(mem_00AE0D10);
        *reinterpret_cast<uint32_t*>(mem_00AE0D10) = 0x009427A4u;
    }
    *reinterpret_cast<uint32_t*>(out + 4) = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(mem_00AE0D10));
}
} // namespace lift_004B1F70

// [0x004B2760]
namespace lift_004B2760 {
extern uint32_t mem_00AE0D2C;
extern uint32_t mem_00AE0D28;
void __thiscall ext_0067A670(void* self);

// @name ExprParser::ReadWriteMethodType<NMData::GraphEngineData,float,getYMax,float,setYMax>::vfunc_40
// @class ExprParser::ReadWriteMethodType
// @summary Lazily initializes a static Type instance and stores its pointer at arg1 + 0x4.
// @field ArgStruct +0x04 uint32_t field_0x04
void __thiscall fn_004B2760(void* /*this*/, uint8_t* arg1) {
    if ((mem_00AE0D2C & 1u) == 0u) {
        mem_00AE0D2C |= 1u;
        ext_0067A670(&mem_00AE0D28);
        mem_00AE0D28 = 0x00942CB4u;
    }
    *reinterpret_cast<uint32_t*>(arg1 + 4) = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(&mem_00AE0D28));
}
} // namespace lift_004B2760

// [0x004B23C0]
namespace lift_004B23C0 {
extern uint32_t mem_00AE0D24;
extern uint32_t mem_00AE0D20;
extern void __thiscall ext_0067A670(void* self);

// @name ExprParser::ReadWriteMethodType<NMData::GraphEngineData, float, getYMin, float, setYMin>::vfunc_40
// @class ExprParser::ReadWriteMethodType
// @summary Lazily initializes a static object at 0x00AE0D20 and stores its address at arg1 + 0x4.
// @field ExprParser::ReadWriteMethodType +0x4 uint32_t field_0x04
void __thiscall fn_004B23C0(void* self, void* out) {
    (void)self;
    if ((mem_00AE0D24 & 1u) == 0) {
        mem_00AE0D24 |= 1u;
        ext_0067A670(&mem_00AE0D20);
        mem_00AE0D20 = 0x00942B04u;
    }
    *reinterpret_cast<uint32_t*>(reinterpret_cast<uint8_t*>(out) + 0x4) = 0x00AE0D20u;
}
} // namespace lift_004B23C0

// [0x004B2070]
namespace lift_004B2070 {
extern uint32_t mem_00AE0D1C;
extern uint32_t mem_00AE0D18;
extern void __thiscall ext_0067A670(void* self);

// @name ExprParser::ReadWriteMethodType<NMData::GraphEngineData,float,getXMax,float,setXMax>::vfunc_40
// @class ExprParser::ReadWriteMethodType
// @summary Lazily initializes static singleton at 0x00AE0D18 and stores its pointer at arg1 + 0x4
// @field Arg1 +0x04 uint32_t field_0x04
void __thiscall fn_004B2070(void* self, uint32_t arg1) {
    (void)self;
    if ((mem_00AE0D1C & 1u) == 0) {
        mem_00AE0D1C |= 1u;
        ext_0067A670(&mem_00AE0D18);
        mem_00AE0D18 = 0x00942954u;
    }
    *reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(arg1) + 0x4) =
        static_cast<uint32_t>(reinterpret_cast<uintptr_t>(&mem_00AE0D18));
}
} // namespace lift_004B2070

// [0x004C1380] ExprParser::ReadWriteMethodType<NMData::TriggeredEventData, int, {public: int __thiscall NMData::TriggeredEventData::getEndFrameNumber(void) const, 0}, int, {public: void __thiscall NMData::TriggeredEventData::setEndFrameNumber(int), 0}>::vfunc_40 (122 bytes)
namespace lift_004C1380 {
extern void ext_0067A670();
extern int mem_00AE301C;
extern int mem_00AE3020;

// @name TriggeredEventData_EndFrameNumber_ReadWriteType_vfunc40
// @class ExprParser::ReadWriteMethodType<NMData::TriggeredEventData, int, {public: int __thiscall NMData::TriggeredEventData::getEndFrameNumber(void) const, 0}, int, {public: void __thiscall NMData::TriggeredEventData::setEndFrameNumber(int), 0}>
// @summary Lazily constructs a function-local static ReadWriteMethodType for TriggeredEventData end frame number (guarded by a one-time flag) and stores its address into out->+0x04.
// @field field_0x04 void* (out pointer, receives address of the static instance)
void fn_004C1380(void* self) {
    // One-time initialization guard: bit 0 of mem_00AE3020.
    if ((mem_00AE3020 & 1) == 0) {
        mem_00AE3020 |= 1;
        // Base-class constructor call (original: thiscall on &mem_00AE301C with arg 0).
        ext_0067A670();
        // Install the vtable for the static instance.
        mem_00AE301C = 0x944B7C;
    }
    // Publish the static instance address into the output object at +0x04.
    *reinterpret_cast<void**>(static_cast<unsigned char*>(self) + 0x04) =
        static_cast<void*>(&mem_00AE301C);
}
} // namespace lift_004C1380

// [0x004C17A0] ExprParser::ReadWriteMethodType<NMData::TriggeredEventData, bool, {public: bool __thiscall NMData::TriggeredEventData::isEnabled(void) const, 0}, bool, {[thunk]: __thiscall NMData::TriggeredEventData::`vcall'{272, {flat}}, 0}>::vfunc_40 (122 bytes)
namespace lift_004C17A0 {
extern void ext_0067A670();
extern int mem_00AE3048;
extern int mem_00AE3044;

// @name ExprParser::ReadWriteMethodType<TriggeredEventData,isEnabled>::vfunc_40
// @class ExprParser::ReadWriteMethodType<NMData::TriggeredEventData, bool, {public: bool __thiscall NMData::TriggeredEventData::isEnabled(void) const, 0}, bool, {[thunk]: __thiscall NMData::TriggeredEventData::`vcall'{272, {flat}}, 0}>
// @summary Lazily initializes a function-local static helper object (guarded by a flag bit) and stores its address into the out-pointer at +0x04.
// @field ExprParser::ReadWriteMethodType +0x04 void* field_0x04
void fn_004C17A0(void* out) {
    // One-time initialization guarded by bit 0 of mem_00AE3048.
    if ((mem_00AE3048 & 1) == 0) {
        mem_00AE3048 |= 1;
        ext_0067A670();                 // constructor for the static object (this = &mem_00AE3044, arg = 0)
        mem_00AE3044 = 0x944d2c;        // install vtable pointer on the static object
    }
    lift_field<void*>(out, 4) = &mem_00AE3044;
}
} // namespace lift_004C17A0

// [0x004A3140]
namespace lift_004A3140 {
// @name ExprParser::ReadWriteMethodType<StateMachineEditor::FSMEditView,bool,&StateMachineEditor::FSMEditView::drawConditions,bool,&StateMachineEditor::FSMEditView::setDrawConditions>::vfunc_40
// @class ExprParser::ReadWriteMethodType
// @summary Initializes a static type-descriptor singleton if needed and stores its pointer at arg1 + 0x4
// @field Arg1 +0x4 uint32_t field_0x4


extern uint32_t mem_00ADE0F0;
extern uint32_t mem_00ADE0EC;

extern void __thiscall ext_0067A670(void* self);

void __thiscall fn_004A3140(void* self, uint8_t* arg1) {
    (void)self;
    if ((mem_00ADE0F0 & 1u) == 0) {
        mem_00ADE0F0 |= 1u;
        ext_0067A670(&mem_00ADE0EC);
        mem_00ADE0EC = 0x00940D44u;
    }
    *(uint32_t*)(arg1 + 0x4) = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(&mem_00ADE0EC));
}
} // namespace lift_004A3140

// [0x004C58B0]
namespace lift_004C58B0 {
// @name ExprParser::ReadWriteMethodType<NMData::ForceEventData,int,getFrameNumber,setFrameNumber>::vfunc_40
// @class ExprParser::ReadWriteMethodType<NMData::ForceEventData,int,getFrameNumber,setFrameNumber>
// @summary Thread-safe one-time init of the shared static value-pointer object, then publishes its address into the caller's ValuePtr slot at +0x4.
// @field ExprParser::ValuePtrType +0x04 void* field_0x04

// One-time initialization guard word (bit 0 = initialized).
extern uint32_t mem_00AE36FC;
// Static storage for the shared object; first dword is its vtable pointer.
extern uint8_t mem_00AE36F8[];
// Constructor-style init routine for the static object (thiscall, no stack args).
extern void __thiscall ext_0067A670(void* self);

void __thiscall ExprParser_ReadWriteMethodType_vfunc40(void* self, void* out) {
    (void)self;

    void* obj = static_cast<void*>(mem_00AE36F8);

    if ((mem_00AE36FC & 1u) == 0) {
        mem_00AE36FC |= 1u;
        ext_0067A670(obj);
        *reinterpret_cast<uint32_t*>(mem_00AE36F8) = 0x009454F4u;
    }

    lift_field<uint32_t>(out, 4) = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(obj));
}
} // namespace lift_004C58B0

// [0x004B2DE0]
namespace lift_004B2DE0 {
// @name ExprParser::ReadWriteMethodType<NMData::GraphEngineData,int,&NMData::GraphEngineData::getMinNumTimeSteps,int,&NMData::GraphEngineData::setMinNumTimeSteps>::vfunc_40
// @class ExprParser::ReadWriteMethodType<NMData::GraphEngineData,int,&NMData::GraphEngineData::getMinNumTimeSteps,int,&NMData::GraphEngineData::setMinNumTimeSteps>
// @summary Lazily initializes static singleton at 0x00AE0D38 with vtable 0x00943014 and stores its pointer at arg0+0x4.


extern void __thiscall ext_0067A670(void* self);
extern uint32_t mem_00AE0D3C;
extern uint32_t mem_00AE0D38;

void __thiscall fn_004B2DE0(void* self, void* arg0) {
    (void)self;
    if ((mem_00AE0D3C & 1u) == 0) {
        mem_00AE0D3C |= 1u;
        ext_0067A670(&mem_00AE0D38);
        mem_00AE0D38 = 0x00943014u;
    }
    *(uint32_t*)((uint8_t*)arg0 + 4) = (uint32_t)(uintptr_t)&mem_00AE0D38;
}
} // namespace lift_004B2DE0

// [0x004B2AB0]
namespace lift_004B2AB0 {
// @name ExprParser::ReadWriteMethodType<NMData::GraphEngineData, float, getMaxAutoWidth, float, setMaxAutoWidth>::vfunc_40
// @class ExprParser::ReadWriteMethodType<NMData::GraphEngineData, float, getMaxAutoWidth, float, setMaxAutoWidth>
// @summary Lazily initializes a static type descriptor at 0x00AE0D30 and stores its pointer at out+0x4
// @field OutStruct +0x04 uint32_t type_ptr


extern void __thiscall ext_0067A670(void* self);
extern uint32_t mem_00AE0D30;
extern uint32_t mem_00AE0D34;

void* __thiscall fn_004B2AB0(void* self, void* out) {
    (void)self;
    if ((mem_00AE0D34 & 1u) == 0u) {
        mem_00AE0D34 |= 1u;
        ext_0067A670(&mem_00AE0D30);
        mem_00AE0D30 = 0x00942E64u;
    }
    *(uint32_t*)((uint8_t*)out + 4) = (uint32_t)(uintptr_t)&mem_00AE0D30;
    return out;
}
} // namespace lift_004B2AB0

// [0x004B2FE0]
namespace lift_004B2FE0 {
// @name ExprParser::ReadWriteMethodType<NMData::GraphEngineData,bool>::vfunc_40
// @class ExprParser::ReadWriteMethodType<NMData::GraphEngineData,bool>
// @summary Lazily initializes static object at 0x00AE0D40 and stores its address at arg0 + 4.


extern uint8_t mem_00AE0D44;
extern uint32_t mem_00AE0D40;
extern void __thiscall ext_0067A670(void* self);

void __thiscall fn_004B2FE0(void* /*self*/, void* arg0) {
    if ((mem_00AE0D44 & 1) == 0) {
        mem_00AE0D44 |= 1;
        ext_0067A670(&mem_00AE0D40);
        mem_00AE0D40 = 0x009431C4u;
    }
    *reinterpret_cast<uint32_t*>(reinterpret_cast<uintptr_t>(arg0) + 4) = 0x00AE0D40u;
}
} // namespace lift_004B2FE0

// [0x004B7CB0]
namespace lift_004B7CB0 {
// @name ExprParser::ReadWriteMethodType<NMData::EngineData, float, getPosBufferFrameRate, setPosBufferFrameRate>::vfunc_40
// @class ExprParser::ReadWriteMethodType<NMData::EngineData, float, getPosBufferFrameRate, setPosBufferFrameRate>
// @summary Lazily initializes static type descriptor at 0x00AE166C and stores its address at arg0 + 4.

extern uint32_t mem_00AE1670;
extern uint32_t mem_00AE166C;
void __thiscall ext_0067A670(void* self);

void __thiscall fn_004B7CB0(void* self, void* arg0) {
    (void)self;
    if ((mem_00AE1670 & 1u) == 0u) {
        mem_00AE1670 |= 1u;
        ext_0067A670(&mem_00AE166C);
        mem_00AE166C = 0x0094391Cu;
    }
    *reinterpret_cast<uint32_t*>(reinterpret_cast<uint8_t*>(arg0) + 4) = 0x00AE166Cu;
}
} // namespace lift_004B7CB0

// [0x004B7F40] ExprParser::ReadWriteMethodType<NMData::EngineData, float, &public: float __thiscall NMData::EngineData::getTimeZoomFactor(void) const, float, &public: void __thiscall NMData::EngineData::setTimeZoomFactor(float)>::vfunc_40 (122 bytes)
namespace lift_004B7F40 {
// Callee 0x0067A670 (sub_0067A670): one-time init of the static object; called with the object as `this`.
extern void ext_0067A670(void* self);
// Guard word for the function-local static (bit 0 = initialized). Original: [0x00AE1678].
extern uint32_t mem_00AE1678;
// Static object storage. Original: [0x00AE1674], first dword receives the vtable pointer 0x00943ACC.
extern uint32_t mem_00AE1674;

// @name ExprParser::ReadWriteMethodType<NMData::EngineData>::vfunc_40
// @summary Lazily initializes a static object once (guarded), then stores its address into the caller-supplied out-object at +0x04.
// @field ArgPtr +0x04 uint32_t field_0x04
void fn_004B7F40(void* out) {
    if ((mem_00AE1678 & 1u) == 0) {
        mem_00AE1678 |= 1u;
        ext_0067A670(&mem_00AE1674);
        mem_00AE1674 = 0x943ACCu;
    }
    lift_field<uint32_t>(out, 4) = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(&mem_00AE1674));
}
} // namespace lift_004B7F40

// [0x004CAEE0]
namespace lift_004CAEE0 {
// @name ExprParser::ReadWriteMethodType<NMData::MetaBodyConstraintData, bool, mustKeepOffset, bool, setMustKeepOffset>::vfunc_40
// @class ExprParser::ReadWriteMethodType<NMData::MetaBodyConstraintData, bool, ...>
// @summary Function-local static init guard that constructs the MetaBodyConstraintData mustKeepOffset read/write method-type record once and binds its vtable.

namespace {
    // Guard byte for the function-local static (was mem_00AE44B4).
    volatile std::uint8_t g_guard = 0;
    // Storage for the static method-type record (was mem_00AE44B0).
    std::uintptr_t g_record[2] = {0, 0};
}

extern void ext_0067A670(void* record, std::uint32_t arg);

// [0x004CAEE0]
void lifted_004CAEE0(void* self_out)
{
    if (g_guard == 0) {
        g_guard = 1;
        ext_0067A670(g_record, 0);
        g_record[1] = reinterpret_cast<std::uintptr_t>(g_record);
    }
    // Store the record pointer into the caller-provided slot at +4.
    reinterpret_cast<std::uintptr_t*>(self_out)[1] = reinterpret_cast<std::uintptr_t>(g_record);
}
} // namespace lift_004CAEE0

// [0x004B8310] ExprParser::ReadWriteMethodType<NMData::EngineData, bool, &public: bool __thiscall NMData::EngineData::enableNonSphericalInertialBodies(void) const, bool, &public: void __thiscall NMData::EngineData::setEnableNonSphericalInertialBodies(bool)>::vfunc_40 (122 bytes)
namespace lift_004B8310 {
extern void ext_0067A670();
extern int mem_00AE1680;
extern int mem_00AE167C;

// @name ExprParser::ReadWriteMethodType<NMData::EngineData>::vfunc_40
// @class ExprParser::ValuePtrType
// @summary Lazily initializes the static-local type object at mem_00AE167C (guarded by bit 0 of mem_00AE1680) and stores its address into the caller-supplied output's +0x04 slot.
// @field ValuePtrType +0x04 void* field_0x04

void fn_004B8310(void* out) {
    // One-time initialization guard (function-local static).
    if ((mem_00AE1680 & 1) == 0) {
        mem_00AE1680 |= 1;
        // Original passes &mem_00AE167C in ecx and a zero dword on the stack;
        // those ABI details are not expressible portably, so the call is kept as declared.
        ext_0067A670();
        mem_00AE167C = 0x943c7c;
    }
    lift_field<uintptr_t>(out, 4) = reinterpret_cast<uintptr_t>(&mem_00AE167C);
}
} // namespace lift_004B8310

// [0x004CB1D0] ExprParser::ReadWriteMethodType<NMData::MetaBodyConstraintData, NM::Vector3 const &, {public: class NM::Vector3 const & __thiscall NMData::MetaBodyConstraintData::getPositionStrengthFromFSM(void) const, 0}, NM::Vector3 const &, {public: void __thiscall NMData::MetaBodyConstraintData::setPositionStrengthFromFSM(class NM::Vector3 const &), 0}>::vfunc_40 (122 bytes)
namespace lift_004CB1D0 {
// @name ExprParser::ReadWriteMethodType<NMData::MetaBodyConstraintData>::vfunc_40
// @class ExprParser::ReadWriteMethodType<NMData::MetaBodyConstraintData, NM::Vector3 const &, {public: class NM::Vector3 const & __thiscall NMData::MetaBodyConstraintData::getPositionStrengthFromFSM(void) const, 0}, NM::Vector3 const &, {public: void __thiscall NMData::MetaBodyConstraintData::setPositionStrengthFromFSM(class NM::Vector3 const &), 0}>
// @summary Lazily constructs the shared static accessor object (guarded by a one-bit init flag) and stores its address into the ValuePtr argument at +0x04.
// @field ExprParser::ValuePtrType +0x04 void* field_0x04

extern void ext_0067A670(void* self, int arg);
extern int mem_00AE44BC;  // init-guard flags (bit 0)
extern int mem_00AE44B8;  // static accessor object storage (vptr slot)

void fn_004CB1D0(void* out) {
    if ((mem_00AE44BC & 1) == 0) {
        mem_00AE44BC |= 1;
        ext_0067A670(&mem_00AE44B8, 0);
        mem_00AE44B8 = 0x946ab4;
    }
    *reinterpret_cast<uintptr_t*>(static_cast<char*>(out) + 0x4) =
        reinterpret_cast<uintptr_t>(&mem_00AE44B8);
}
} // namespace lift_004CB1D0
