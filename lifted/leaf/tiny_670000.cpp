// Lifted C++ translation unit: lifted/leaf/tiny_670000.cpp
#include "lift_compat.h"
extern "C" void __fastcall ext_00671040(void* self);
extern "C" void __cdecl ext_006A5C5C(void* ptr);

extern "C" void __cdecl ext_006A5C5C(void* ptr);
// @name sub_0067AEE8
// @summary Pops the return address into edi and returns, releasing 4 bytes of stack arguments.
extern "C" void __stdcall fn_0067AEE8() {
    // Branchless tiny leaf: restores edi from the stack, then returns popping 4 bytes of arguments.
}
extern "C" int32_t mem_00B59DB8;
extern "C" void __fastcall ext_00493D90(void* self);
extern "C" void __fastcall ext_004AEE60(void* self);
extern "C" int mem_0098C254;
extern "C" void __fastcall ext_0065F440(void* self);

extern "C" void __fastcall ext_0065F440(void* self);
// @name cleanup_epilogue_pop_edi_stdcall4
// @summary Stdcall (ret 4) epilogue fragment: restores the saved edi register and drops one stack argument; no other effect.
extern "C" void __stdcall fn_0067AF28(void* arg) {
    (void)arg;
}
extern "C" void __fastcall ext_00679990(void* self);
extern "C" void __fastcall ext_0067A080(void* self);
extern "C" int mem_0098C5E4;
#include <cstddef>
#include <cstdint>

#include <cstdint>
// @name sub_006710E0
// @summary MSVC scalar deleting destructor: calls sub_00671040 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_006710E0(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_00671040(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x00675670] sub_00675670 (6 bytes)
// @name sub_00675670
// @summary Returns global int32 value from mem_00B59DB8.
extern "C" int32_t __cdecl fn_00675670(void) {
    return mem_00B59DB8;
}

// [0x00675D20] sub_00675D20 (8 bytes)
// @name sub_00675D20
// @summary This-adjustor thunk: adjusts `this` by +0x10 and tail-calls AddCharacterDialog::vfunc_3.
extern "C" void __fastcall fn_00675D20(void* self) {
    ext_00493D90(static_cast<char*>(self) + 0x10);
}

// [0x00676850] sub_00676850 (8 bytes)
// @name sub_00676850
// @summary This-adjustor thunk: adjusts `this` by +0x14 and tail-calls sub_004AEE60.
extern "C" void __fastcall fn_00676850(void* self) {
    ext_004AEE60(static_cast<char*>(self) + 0x14);
}

// [0x00678880] sub_00678880 (11 bytes)
// @name sub_00678880
// @summary Destructor tail-call: restores vtable mem_0098C254 and tail-calls base destructor sub_0065F440.
extern "C" void __fastcall fn_00678880(void* self) {
    lift_field<void*>(self, 0x0) = &mem_0098C254;
    ext_0065F440(self);
}

// [0x00679A50] sub_00679A50 (7 bytes)
// @name sub_00679A50
// @summary Member forwarding thunk: loads subobject pointer at +0x0 and tail-calls sub_00679990.
extern "C" void __fastcall fn_00679A50(void* self) {
    void* delegate_obj = lift_field<void*>(self, 0x0);
    ext_00679990(delegate_obj);
}

// [0x0067A0F0] sub_0067A0F0 (8 bytes)
// @name sub_0067A0F0
// @summary This-adjustor thunk: adjusts `this` by +0x14 and tail-calls sub_0067A080.
extern "C" void __fastcall fn_0067A0F0(void* self) {
    ext_0067A080(static_cast<char*>(self) + 0x14);
}

// [0x0067A100] sub_0067A100 (8 bytes)
// @name sub_0067A100
// @summary This-adjustor thunk: adjusts `this` by +0x24 and tail-calls sub_0067A080.
extern "C" void __fastcall fn_0067A100(void* self) {
    ext_0067A080(static_cast<char*>(self) + 0x24);
}

// [0x0067B2E0] sub_0067B2E0 (7 bytes)
// @name sub_0067B2E0
// @summary Stores address of mem_0098C5E4 into field at offset +0x0.
extern "C" void __fastcall fn_0067B2E0(void* self) {
    lift_field<void*>(self, 0x0) = &mem_0098C5E4;
}

// [0x0067EC60]
namespace lift_0067EC60 {
// @name initZeroDouble
// @summary Initializes a double at offset +0x00 to 0.0 and returns the pointer
// @field Object +0x00 double field_0x00


void* __thiscall sub_0067EC60(void* self) {
    *reinterpret_cast<double*>(self) = 0.0;
    return self;
}
} // namespace lift_0067EC60

// [0x0067F5A0]
namespace lift_0067F5A0 {
extern uint32_t mem_00B5CA88[];

// @name lookupTableByIndexField
// @class Unknown (no class recovered; receiver is passed in ecx)
// @summary Reads a 32-bit index from the receiver and returns the entry at that index in the global table at 0x00B5CA88.
// @field Unknown +0x00 uint32_t field_0x00
uint32_t __fastcall fn_0067F5A0(void* self) {
    const uint32_t index = lift_field<uint32_t>(self, 0x00);
    return mem_00B5CA88[index];
}
} // namespace lift_0067F5A0

// [0x00679A30]
namespace lift_00679A30 {
// @name queryPerformanceCounter
// @summary Calls KERNEL32!QueryPerformanceCounter with the pointer stored at [ecx]
// @field Unknown +0x00 uint32_t field_0x00

extern uint32_t ext_QueryPerformanceCounter(uint32_t lpPerformanceCount);

uint32_t __thiscall sub_00679A30(uint32_t* self) {
    uint32_t lpPerformanceCount = self[0];
    return ext_QueryPerformanceCounter(lpPerformanceCount);
}
} // namespace lift_00679A30

// [0x0067ADD0]
namespace lift_0067ADD0 {
// @name sleepMs
// @summary Forwards its single stack argument to KERNEL32 Sleep via the import slot at mem_00924248.

extern std::uint32_t mem_00924248;

// Sleep(DWORD dwMilliseconds) is __stdcall; the import slot holds its address.
using SleepFn = void(__stdcall*)(std::uint32_t);

void sub_0067ADD0(std::uint32_t dwMilliseconds) {
    auto fn = reinterpret_cast<SleepFn>(static_cast<std::uintptr_t>(mem_00924248));
    fn(dwMilliseconds);
}
} // namespace lift_0067ADD0

// [0x00679A40]
namespace lift_00679A40 {
// @name sub_00679A40 (QueryPerformanceCounter into *(this) + 8)
// @summary Reads a pointer-sized value from the object at ecx, offsets it by 8, and passes the result to QueryPerformanceCounter.

// Imported KERNEL32!QueryPerformanceCounter (IAT slot at 0x0092427C).
extern uint32_t mem_0092427C;
extern BOOL(__stdcall* ext_QueryPerformanceCounter)(void* lpPerformanceCount);

__declspec(noinline) void __thiscall sub_00679A40(void* self) {
    // mov eax, [ecx]; add eax, 8; push eax; call [QueryPerformanceCounter]; ret
    uint32_t base = lift_field<uint32_t>(self, 0);
    uintptr_t target = static_cast<uintptr_t>(base) + 8u;
    (void)ext_QueryPerformanceCounter(reinterpret_cast<void*>(target));
}
} // namespace lift_00679A40

// [0x00673B80] sub_00673B80 (14 bytes)
namespace lift_00673B80 {
// @name SetIntValueAndSetFlag
// @class Unknown
// @summary Stores a DWORD argument at this+0x60 and sets the byte flag at this+0x65 to 1.
// @field Unknown +0x60 DWORD field_0x60
// @field Unknown +0x65 BYTE field_0x65
void SetIntValueAndSetFlag(void* self, DWORD value) {
    BYTE* base = static_cast<BYTE*>(self);
    *reinterpret_cast<DWORD*>(base + 0x60) = value;
    base[0x65] = 1;
}
} // namespace lift_00673B80

// [0x00672020] sub_00672020 (17 bytes)
namespace lift_00672020 {
// @name sub_00672020
// @summary Auto-lifted identical-shape clone of 0x0052EF20 (CompoundRenderable::vfunc_7).
namespace lift_0052EF20 {
// @name CompoundRenderable::vfunc_7
// @class CompoundRenderable
// @summary Forwards to vtable slot 6 of the object at this+0x10, passing this as the single argument.
// @field CompoundRenderable +0x10 void* field_0x10
void fn_00672020(void* self) {
    // Child object pointer stored at this+0x10.
    void* child = lift_field<void*>(self, 0x4);

    // Child vtable; slot at byte offset 0x18 is entry index 6 (4-byte pointers).
    void* vtable = lift_field<void*>(child, 0);
    void* slot = lift_field<void*>(vtable, 0x94);

    // Original: ecx = child, push this, call [vtable+0x18]. Modeled as a
    // plain function pointer taking (child, this) since __thiscall has no
    // portable spelling.
    using SlotFn = void (*)(void* self_obj, void* arg);
    reinterpret_cast<SlotFn>(slot)(child, self);
}
} // namespace lift_0052EF20
} // namespace lift_00672020

// [0x00672040] sub_00672040 (17 bytes)
namespace lift_00672040 {
// @name sub_00672040
// @summary Auto-lifted identical-shape clone of 0x0052EF20 (CompoundRenderable::vfunc_7).
namespace lift_0052EF20 {
// @name CompoundRenderable::vfunc_7
// @class CompoundRenderable
// @summary Forwards to vtable slot 6 of the object at this+0x10, passing this as the single argument.
// @field CompoundRenderable +0x10 void* field_0x10
void fn_00672040(void* self) {
    // Child object pointer stored at this+0x10.
    void* child = lift_field<void*>(self, 0x4);

    // Child vtable; slot at byte offset 0x18 is entry index 6 (4-byte pointers).
    void* vtable = lift_field<void*>(child, 0);
    void* slot = lift_field<void*>(vtable, 0x98);

    // Original: ecx = child, push this, call [vtable+0x18]. Modeled as a
    // plain function pointer taking (child, this) since __thiscall has no
    // portable spelling.
    using SlotFn = void (*)(void* self_obj, void* arg);
    reinterpret_cast<SlotFn>(slot)(child, self);
}
} // namespace lift_0052EF20
} // namespace lift_00672040

// [0x00672060] sub_00672060 (17 bytes)
namespace lift_00672060 {
// @name sub_00672060
// @summary Auto-lifted identical-shape clone of 0x0052EF20 (CompoundRenderable::vfunc_7).
namespace lift_0052EF20 {
// @name CompoundRenderable::vfunc_7
// @class CompoundRenderable
// @summary Forwards to vtable slot 6 of the object at this+0x10, passing this as the single argument.
// @field CompoundRenderable +0x10 void* field_0x10
void fn_00672060(void* self) {
    // Child object pointer stored at this+0x10.
    void* child = lift_field<void*>(self, 0x4);

    // Child vtable; slot at byte offset 0x18 is entry index 6 (4-byte pointers).
    void* vtable = lift_field<void*>(child, 0);
    void* slot = lift_field<void*>(vtable, 0xA0);

    // Original: ecx = child, push this, call [vtable+0x18]. Modeled as a
    // plain function pointer taking (child, this) since __thiscall has no
    // portable spelling.
    using SlotFn = void (*)(void* self_obj, void* arg);
    reinterpret_cast<SlotFn>(slot)(child, self);
}
} // namespace lift_0052EF20
} // namespace lift_00672060

// [0x00673B60] sub_00673B60 (17 bytes)
namespace lift_00673B60 {
// Known callee 0x00687250: SubObject::getActiveSubobject (Returns the address of the +0x10 subobject when the flag at +0x68 is zero, otherwise the +0x54 subobject.)
extern void* ext_00687250(void* self);

// @name SubObject::getInlineOrDelegate
// @class SubObject
// @summary If the dword at +0x2C is nonzero, returns the address of the inline subobject at +0x18; otherwise tail-calls getActiveSubobject on the pointer stored at +0x00.
// @field SubObject +0x00 void* field_0x00
// @field SubObject +0x2C int32_t field_0x2c
void* fn_00673B60(void* self) {
    auto* base = static_cast<uint8_t*>(self);
    if (*reinterpret_cast<int32_t*>(base + 0x2C) != 0) {
        return base + 0x18;
    }
    void* inner = *reinterpret_cast<void**>(base + 0x00);
    return ext_00687250(inner);
}
} // namespace lift_00673B60

// [0x00675D60] sub_00675D60 (17 bytes)
namespace lift_00675D60 {
// @name Unknown::forwardToChildVfunc14
// @summary If the child pointer at +0x10 is non-null, invoke the child's vtable slot at +0x14 with the child as this.
// @field Unknown +0x10 void* child
void fn_00675D60(void* self) {
    void* child = lift_field<void*>(self, 0x10);
    if (child == nullptr) {
        return;
    }
    void* vtable = lift_field<void*>(child, 0x0);
    void* slot = lift_field<void*>(vtable, 0x14);
    using Fn = void (*)(void*);
    reinterpret_cast<Fn>(slot)(child);
}
} // namespace lift_00675D60

// [0x0067B070]
namespace lift_0067B070 {
// @name ZeroFiveDwordsAt4
// @summary Zeroes five consecutive 32-bit fields at offsets +0x04..+0x14 of the object passed in ECX and returns that object pointer.
// @field Unknown +0x04 int32_t field_0x04
// @field Unknown +0x08 int32_t field_0x08
// @field Unknown +0x0C int32_t field_0x0C
// @field Unknown +0x10 int32_t field_0x10
// @field Unknown +0x14 int32_t field_0x14

uint32_t* ZeroFiveDwordsAt4(uint32_t* self) {
    self[1] = 0;
    self[2] = 0;
    self[3] = 0;
    self[4] = 0;
    self[5] = 0;
    return self;
}
} // namespace lift_0067B070

// [0x00672490] sub_00672490 (21 bytes)
namespace lift_00672490 {
// @name UnknownClass::ForwardToChildVirtual78
// @class UnknownClass
// @summary If the child pointer at +0x0C is non-null, invoke its vtable slot at +0x78 with this=child and arg=self+0x08.
// @field UnknownClass +0x08 uint32_t field_0x08
// @field UnknownClass +0x0C uint32_t child
void fn_00672490(void* self) {
    // Child pointer at self+0x0C (32-bit target layout).
    const uint32_t child_addr = lift_field<uint32_t>(self, 0x0C);
    if (child_addr == 0) {
        return;
    }

    void* child = reinterpret_cast<void*>(static_cast<uintptr_t>(child_addr));
    void* arg = static_cast<uint8_t*>(self) + 0x08;

    // Load child's vtable pointer, then the function at vtable + 0x78.
    const uint32_t vtbl_addr = lift_field<uint32_t>(child, 0);
    const uint8_t* vtbl = reinterpret_cast<const uint8_t*>(static_cast<uintptr_t>(vtbl_addr));
    const uint32_t fn_addr = *reinterpret_cast<const uint32_t*>(vtbl + 0x78);

    using VirtualFn = void (*)(void* this_ptr, void* arg);
    auto fn = reinterpret_cast<VirtualFn>(static_cast<uintptr_t>(fn_addr));
    fn(child, arg);
}
} // namespace lift_00672490

// [0x0067ADE0] sub_0067ADE0 (22 bytes)
namespace lift_0067ADE0 {
extern DWORD ext_GetCurrentThreadId(void);

// @name SubObject::IsCurrentThreadOwner
// @class SubObject
// @summary Returns 1 if the calling thread matches the owner thread id stored in the object at this+0x0C, else 0.
// @field SubObject +0x0C void* field_0x0C
// @field ThreadOwner +0x14 DWORD field_0x14
uint8_t fn_0067ADE0(void* self) {
    void* owner = lift_field<void*>(self, 0x0C);
    DWORD current = ext_GetCurrentThreadId();
    DWORD ownerThread = lift_field<DWORD>(owner, 0x14);
    return current == ownerThread ? 1 : 0;
}
} // namespace lift_0067ADE0

// [0x0067B390] sub_0067B390 (22 bytes)
namespace lift_0067B390 {
// @name Unknown::InitVtableAndSetDefaults
// @class Unknown
// @summary Writes vtable pointer 0x0098C5E4 to offset 0, then stores 1.0, 1.0, 0.0 as doubles at +0x08, +0x10, +0x18.
// @field Unknown +0x00 uint32_t field_0x00
// @field Unknown +0x08 double field_0x08
// @field Unknown +0x10 double field_0x10
// @field Unknown +0x18 double field_0x18
void fn_0067B390(void* self) {
    uint8_t* base = static_cast<uint8_t*>(self);
    *reinterpret_cast<uint32_t*>(base + 0x00) = 0x0098C5E4u;
    *reinterpret_cast<double*>(base + 0x08) = 1.0;
    *reinterpret_cast<double*>(base + 0x10) = 1.0;
    *reinterpret_cast<double*>(base + 0x18) = 0.0;
}
} // namespace lift_0067B390

// [0x006722B0]
namespace lift_006722B0 {
// @name Unknown::ForwardArgToSubobjectVfunc31
// @class Unknown
// @summary Forwards its single stack argument, together with this, to virtual slot 0x7C of the subobject at +0x4 and returns the result.
// @field Unknown +0x04 ptr subobject

struct Subobject;

struct Unknown {
    unsigned char field_0x00[0x04];
    Subobject* subobject;  // +0x04
};

// Virtual slot at byte offset 0x7C (index 31) of the subobject's vtable.
using ForwardFn = int(__stdcall*)(Unknown* self, int arg);

int __thiscall fn_006722B0(Unknown* self, int arg) {
    Subobject* sub = self->subobject;
    void** vtbl = *reinterpret_cast<void***>(sub);
    ForwardFn fn = reinterpret_cast<ForwardFn>(vtbl[0x7C / sizeof(void*)]);
    return fn(self, arg);
}
} // namespace lift_006722B0

// [0x006721D0] sub_006721D0 (26 bytes)
namespace lift_006721D0 {
// @name sub_006721D0
// @summary Auto-lifted identical-shape clone of 0x006722B0 (sub_0067AEE8).
namespace lift_006722B0 {
// @name Unknown::ForwardArgToSubobjectVfunc31
// @class Unknown
// @summary Forwards its single stack argument, together with this, to virtual slot 0x7C of the subobject at +0x4 and returns the result.
// @field Unknown +0x04 ptr subobject

struct Subobject;

struct Unknown {
    unsigned char field_0x00[0x04];
    Subobject* subobject;  // +0x04
};

// Virtual slot at byte offset 0x7C (index 31) of the subobject's vtable.
using ForwardFn = int(__stdcall*)(Unknown* self, int arg);

int __thiscall fn_006721D0(Unknown* self, int arg) {
    Subobject* sub = self->subobject;
    void** vtbl = *reinterpret_cast<void***>(sub);
    ForwardFn fn = reinterpret_cast<ForwardFn>(vtbl[0x9C / sizeof(void*)]);
    return fn(self, arg);
}
} // namespace lift_006722B0
} // namespace lift_006721D0

// [0x006722D0] sub_006722D0 (26 bytes)
namespace lift_006722D0 {
// @name sub_006722D0
// @summary Auto-lifted identical-shape clone of 0x006722B0 (sub_0067AEE8).
namespace lift_006722B0 {
// @name Unknown::ForwardArgToSubobjectVfunc31
// @class Unknown
// @summary Forwards its single stack argument, together with this, to virtual slot 0x7C of the subobject at +0x4 and returns the result.
// @field Unknown +0x04 ptr subobject

struct Subobject;

struct Unknown {
    unsigned char field_0x00[0x04];
    Subobject* subobject;  // +0x04
};

// Virtual slot at byte offset 0x7C (index 31) of the subobject's vtable.
using ForwardFn = int(__stdcall*)(Unknown* self, int arg);

int __thiscall fn_006722D0(Unknown* self, int arg) {
    Subobject* sub = self->subobject;
    void** vtbl = *reinterpret_cast<void***>(sub);
    ForwardFn fn = reinterpret_cast<ForwardFn>(vtbl[0x80 / sizeof(void*)]);
    return fn(self, arg);
}
} // namespace lift_006722B0
} // namespace lift_006722D0

// [0x0067B310] sub_0067B310 (24 bytes)
namespace lift_0067B310 {
// @name InitValueReciprocalZero
// @class Unknown
// @summary Stores a value, its reciprocal (1.0 / divisor), and 0.0 into self; the 16-byte arg block is callee-popped (ret 0x10).
// @field Unknown +0x08 double field_0x08
// @field Unknown +0x10 double field_0x10
// @field Unknown +0x18 double field_0x18
void fn_0067B310(void* self, double value, double divisor) {
    lift_field<double>(self, 0x08) = value;
    lift_field<double>(self, 0x10) = 1.0 / divisor;
    lift_field<double>(self, 0x18) = 0.0;
}
} // namespace lift_0067B310

// [0x0067AE00]
namespace lift_0067AE00 {
// @name ThreadController::setLowestPriorityIfMode2
// @class ThreadController
// @summary Sets the thread priority to lowest (-2) when the argument equals 2.
// @field ThreadController +0x0C uint32_t field_0x0C


extern uint32_t mem_00924288;

using SetThreadPriorityFn = int32_t(__stdcall*)(uint32_t hThread, int32_t nPriority);

void __thiscall sub_0067AE00(uint32_t self, uint32_t mode) {
  if (mode == 2) {
    uint32_t field_0c = *reinterpret_cast<uint32_t*>(self + 0x0C);
    uint32_t thread_handle = *reinterpret_cast<uint32_t*>(field_0c + 0x10);
    auto set_thread_priority = reinterpret_cast<SetThreadPriorityFn>(mem_00924288);
    set_thread_priority(thread_handle, -2);
  }
}
} // namespace lift_0067AE00

// [0x0067B2F0] sub_0067B2F0 (26 bytes)
namespace lift_0067B2F0 {
// @name InitInverseScalesAndZeroOffset
// @class Unknown
// @summary Stores 1/a at +0x08, 1/b at +0x10, and 0.0 at +0x18 (thiscall, two double args, callee pops 0x10).
// @field Unknown +0x08 double field_0x08
// @field Unknown +0x10 double field_0x10
// @field Unknown +0x18 double field_0x18
void fn_0067B2F0(void* self, double a, double b) {
    auto* base = static_cast<unsigned char*>(self);

    const double inv_a = 1.0 / a;
    const double inv_b = 1.0 / b;
    const double zero = 0.0;

    std::memcpy(base + 0x08, &inv_a, sizeof inv_a);
    std::memcpy(base + 0x10, &inv_b, sizeof inv_b);
    std::memcpy(base + 0x18, &zero, sizeof zero);
}
} // namespace lift_0067B2F0

// [0x00671F30]
namespace lift_00671F30 {
// @name sub_00671F30
// @summary Zeroes the first dword of the output buffer and stores the global mem_00B599BC into the second dword.
// @field arg0 +0x00 uint32_t field_0x00 (written with 0)
// @field arg0 +0x04 uint32_t field_0x04 (written with mem_00B599BC)

extern uint32_t mem_00B599BC;

void sub_00671F30(uint32_t* out) {
    out[0] = 0;
    out[1] = mem_00B599BC;
}
} // namespace lift_00671F30

// [0x0067ADB0] sub_0067ADB0 (29 bytes)
namespace lift_0067ADB0 {
// @name Unknown::invokeVirtualSlots1And2
// @class Unknown
// @summary Calls virtual slots 1 and 2 on the given object (thiscall, stdcall-style single stack arg), then returns 0.
// @field Unknown +0x00 void** vtable
int __stdcall fn_0067ADB0(void* self) {
    void** vtbl = *reinterpret_cast<void***>(self);
    reinterpret_cast<void (*)(void*)>(vtbl[1])(self);

    vtbl = *reinterpret_cast<void***>(self);
    reinterpret_cast<void (*)(void*)>(vtbl[2])(self);

    return 0;
}
} // namespace lift_0067ADB0
