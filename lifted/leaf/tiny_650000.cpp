// Lifted C++ translation unit: lifted/leaf/tiny_650000.cpp
#include "lift_compat.h"
extern "C" void __fastcall ext_0065F2A0(void* self);
extern "C" int mem_009848CC;
extern "C" void __fastcall ext_0065C660(void* self);

extern "C" void __fastcall ext_0065C660(void* self);
// @name sub_0065ACB0
// @summary This-adjustor thunk: adjusts `this` by +0x4 and tail-calls sub_0065F2A0.
extern "C" void __fastcall fn_0065ACB0(void* self) {
    ext_0065F2A0(static_cast<char*>(self) + 0x4);
}
extern "C" int mem_00928E8C;
extern "C" int mem_009849C8;
extern "C" void __fastcall ext_00401BB0(void* self);

extern "C" void __fastcall ext_00401BB0(void* self);
// @name sub_0065BB60
// @summary Destructor tail-call: restores vtable mem_009848CC and tail-calls base destructor sub_0065C660.
extern "C" void __fastcall fn_0065BB60(void* self) {
    lift_field<void*>(self, 0x0) = &mem_009848CC;
    ext_0065C660(self);
}
extern "C" int mem_0093BF24;

// [0x0065C660] sub_0065C660 (7 bytes)
// @name sub_0065C660
// @summary Stores address of mem_00928E8C into field at offset +0x0.
extern "C" void __fastcall fn_0065C660(void* self) {
    lift_field<void*>(self, 0x0) = &mem_00928E8C;
}

// [0x0065C7F0] sub_0065C7F0 (11 bytes)
// @name sub_0065C7F0
// @summary Destructor tail-call: restores vtable mem_009849C8 and tail-calls base destructor sub_00401BB0.
extern "C" void __fastcall fn_0065C7F0(void* self) {
    lift_field<void*>(self, 0x0) = &mem_009849C8;
    ext_00401BB0(self);
}

// [0x0065F440] sub_0065F440 (7 bytes)
// @name sub_0065F440
// @summary Stores address of mem_0093BF24 into field at offset +0x0.
extern "C" void __fastcall fn_0065F440(void* self) {
    lift_field<void*>(self, 0x0) = &mem_0093BF24;
}

// [0x0065A8B0]
namespace lift_0065A8B0 {
void mem_write32(uint32_t addr, uint32_t val);

// @name initZeroField0
// @summary Sets the 32-bit field at offset 0 of the object in ecx to zero and returns the object pointer.
// @field Object +0x00 uint32_t field_0x00
uint32_t __fastcall sub_0065A8B0(uint32_t ecx, uint32_t edx)
{
    (void)edx;
    mem_write32(ecx, 0);
    return ecx;
}
} // namespace lift_0065A8B0

// [0x0065C650]
namespace lift_0065C650 {
extern void (__stdcall *mem_009241BC)(void*);

// @name CriticalSectionLock::leave
// @class CriticalSectionLock
// @summary Releases the critical section pointed to by the first field
// @field CriticalSectionLock +0x00 void* criticalSection
void __thiscall sub_0065C650(void* self) {
    mem_009241BC(*reinterpret_cast<void**>(self));
}
} // namespace lift_0065C650

// [0x0065C640]
namespace lift_0065C640 {
// @name CriticalSectionLock::enter
// @class CriticalSectionLock
// @summary Enters the critical section referenced at offset 0x00 of the object.
// @field CriticalSectionLock +0x00 void* criticalSection


extern void __stdcall EnterCriticalSection(void* lpCriticalSection);

void __thiscall sub_0065C640(void* self) {
    void* cs = *reinterpret_cast<void**>(self);
    EnterCriticalSection(cs);
}
} // namespace lift_0065C640
