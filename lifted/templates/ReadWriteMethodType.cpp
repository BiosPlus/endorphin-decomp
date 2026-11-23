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
