// Lifted C++ translation unit: lifted/templates/WriteOnlyMethod0Type.cpp
#include "lift_compat.h"
extern "C" void ext_0050F180(void* self);
extern "C" void __fastcall ext_0050F180(void* self);
extern "C" void ext_00516890(void* self);
extern "C" void __fastcall ext_00516890(void* self);

extern "C" void __fastcall ext_00516890(void* self);
extern "C" void ext_00516980(void* self);
extern "C" void __fastcall ext_00516980(void* self);

extern "C" void __fastcall ext_00516980(void* self);
extern "C" void ext_0050DBE0(void* thisPtr);
extern "C" void ext_0050F180(void* thisPtr);

// [0x00516B20] ExprParser::WriteOnlyMethod0Type<NMData::EvolverRuntimeOptions, &public: void __thiscall NMData::EvolverRuntimeOptions::evaluateCurrentIndividual(void)>::vfunc_41 (14 bytes)
// @name ExprParser::WriteOnlyMethod0Type<NMData::EvolverRuntimeOptions, &public: void __thiscall NMData::EvolverRuntimeOptions::evaluateCurrentIndividual(void)>::vfunc_41
// @class ExprParser::WriteOnlyMethod0Type<NMData::EvolverRuntimeOptions, &public: void __thiscall NMData::EvolverRuntimeOptions::evaluateCurrentIndividual(void)>
// @summary Auto-lifted identical-shape clone of 0x0048B150 (ExprParser::Method0Type<NMData::DesiredPoseEventData, fire>::vfunc_41).
void fn_00516B20(void* proxy, void* unused) {
    (void)unused;
    void* target = *static_cast<void**>(proxy);
    ext_00516980(target);
}

// [0x0050E0A0] ExprParser::WriteOnlyMethod0Type<NMData::TaskManager, {public: void __thiscall NMData::TaskManager::randomizeTasks(void), 0}>::vfunc_41 (14 bytes)
// @name ExprParser::WriteOnlyMethod0Type<NMData::TaskManager, randomizeTasks>::vfunc_41
// @class ExprParser::WriteOnlyMethod0Type<NMData::TaskManager, {public: void __thiscall NMData::TaskManager::randomizeTasks(void), 0}>
// @summary Loads the target object pointer from the first argument's leading dword and forwards it to the shared method-invoke helper (randomizeTasks path); pops 8 bytes of stack args.
// @field ExprParser::ValuePtrType +0x00 void* target
void fn_0050E0A0(void* self) {
    void** argSlot = reinterpret_cast<void**>(self);
    void* thisPtr = argSlot[0];
    ext_0050DBE0(thisPtr);
}

// [0x0050F190]
// @name ExprParser::WriteOnlyMethod0Type<NMData::PopulationData, randomizeNow>::vfunc_41
// @class ExprParser::WriteOnlyMethod0Type<NMData::PopulationData, &public: void __thiscall NMData::PopulationData::randomizeNow(void)>
// @summary Loads the target object pointer from the proxy's first dword and forwards it to the shared method-invoke helper (randomizeNow path); pops 8 bytes of stack args.
// @field ExprParser::ValuePtrType +0x00 void* target
void fn_0050F190(void* proxy, void* unused) {
    (void)unused;
    void* target = *static_cast<void**>(proxy);
    ext_0050F180(target);
}

// [0x00516B10] ExprParser::WriteOnlyMethod0Type<NMData::EvolverRuntimeOptions, &public: void __thiscall NMData::EvolverRuntimeOptions::printCurrentIndividual(void)>::vfunc_41 (14 bytes)
// @name ExprParser::WriteOnlyMethod0Type<NMData::EvolverRuntimeOptions, printCurrentIndividual>::vfunc_41
// @class ExprParser::WriteOnlyMethod0Type<NMData::EvolverRuntimeOptions, &public: void __thiscall NMData::EvolverRuntimeOptions::printCurrentIndividual(void)>
// @summary Loads the target object pointer from the proxy's leading dword and forwards it to the shared method-invoke helper (printCurrentIndividual path); pops 8 bytes of stack args.
// @field ExprParser::ValuePtrType +0x00 void* target
void fn_00516B10(void* proxy, void* unused) {
    (void)unused;
    void* target = *static_cast<void**>(proxy);
    ext_00516890(target);
}
