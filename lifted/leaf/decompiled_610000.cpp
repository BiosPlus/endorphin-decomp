// Lifted C++ translation unit: lifted/leaf/decompiled_610000.cpp
#include "lift_compat.h"
#include <cstdint>

// [0x00611160] sub_00611160 (11 bytes)
namespace lift_00611160 {
// Known callee 0x005B11E0: getFloatAt (Returns a float from a 32-bit float array at offset +0x10 indexed by the argument)
extern float ext_005B11E0(uint32_t ecx, uint32_t index);

// @name readFloatAtIndex3
// @summary Returns element 3 of the float array held by the sub-object at this+0x08.
// @field Unknown +0x08 uint32_t field_0x08
float fn_00611160(uint32_t ecx) {
    return ext_005B11E0(ecx + 0x8u, 3u);
}
} // namespace lift_00611160

// [0x00610B20] sub_00610B20 (32 bytes)
namespace lift_00610B20 {
// Known callee 0x00594000: sub_00594000 (cdecl, no args; returns global int32 mem_00B40D08).
extern int32_t __cdecl ext_00594000();
// Callee 0x00678130: sub_00678130 (61B, not yet lifted). ecx = this, one float stack arg
// (callee pops it, as the caller does no stack fixup after the call).
extern void __thiscall ext_00678130(void* self, float arg);

// @name ForwardFloat08ToSubobject2E0
// @summary Reads float self+0x08, obtains an int32 key from ext_00594000, then calls ext_00678130 on the object at key+0x2E0 passing the saved float.
// @field Unknown +0x08 float field_0x08
extern void __thiscall fn_00610B20(void* self) {
    // The original loads the float before the call to ext_00594000, which can clobber state;
    // the value is captured first and passed on unchanged.
    const float value = lift_field<float>(self, 0x08);

    const int32_t key = ext_00594000();

    // lea ecx, [eax + 0x2E0]: the subobject address is derived from the returned key.
    void* subobject = reinterpret_cast<void*>(static_cast<intptr_t>(key) + 0x2E0);
    ext_00678130(subobject, value);
}
} // namespace lift_00610B20

// [0x00610B40] sub_00610B40 (34 bytes)
namespace lift_00610B40 {
// Known callee 0x00594000: sub_00594000 (Returns global int32 value from mem_00B40D08.)
extern int32_t __cdecl ext_00594000(void);
// Callee 0x006781B0: thiscall, one float stack arg (callee pops 4), returns float in st(0).
extern float __thiscall ext_006781B0(void* self, float value);

// @name UnknownClass::setFieldF08FromChild
// @class Unknown
// @summary Gets an int32 handle from ext_00594000, calls ext_006781B0 on the object at (handle + 0x2E0) with the float argument, and stores the float result into this+0x08; thiscall, callee pops 4 bytes.
// @field Unknown +0x08 float field_0x08
extern void __thiscall fn_00610B40(void* self, float value) {
    uintptr_t child = static_cast<uint32_t>(ext_00594000()) + 0x2E0;
    float result = ext_006781B0(reinterpret_cast<void*>(child), value);
    lift_field<float>(self, 0x08) = result;
}
} // namespace lift_00610B40

// [0x00610CB0]
namespace lift_00610CB0 {
// @name sub_00610CB0
// @summary Gets float at index 0 from this+0x20 and passes it to ext_00678130 on (ext_00594000() + 0x2e0)
// @field Self +0x20 uint8_t field_0x20

extern float __thiscall ext_005B11E0(uint32_t ecx, uint32_t index);
extern int32_t __cdecl ext_00594000(void);
extern void __thiscall ext_00678130(uint32_t ecx, float val);

extern void __thiscall fn_00610CB0(uint32_t ecx) {
    float val = ext_005B11E0(ecx + 0x20, 0);
    int32_t base = ext_00594000();
    ext_00678130(static_cast<uint32_t>(base) + 0x2e0, val);
}
} // namespace lift_00610CB0

// [0x00611170]
namespace lift_00611170 {
extern float __thiscall ext_005B11E0(uint32_t ecx, uint32_t index);
extern int32_t __cdecl ext_00594000(void);
extern void __thiscall ext_00678130(uint32_t ecx, float value);

// @name sub_00611170
// @summary Fetches float at index 0 from (this + 0x8) and passes it to ext_00678130 on (ext_00594000() + 0x2e0)
// @field unknown +0x08 uint32_t field_0x08
extern void __thiscall sub_00611170(uint32_t ecx) {
    float val = ext_005B11E0(ecx + 0x8, 0);
    int32_t obj = ext_00594000();
    ext_00678130(static_cast<uint32_t>(obj) + 0x2e0, val);
}
} // namespace lift_00611170

// [0x006111D0]
namespace lift_006111D0 {
extern float __thiscall ext_005B11E0(uint32_t ecx, uint32_t index);
extern int32_t __cdecl ext_00594000(void);
extern void __thiscall ext_00678130(uint32_t ecx, float value);

// @name sub_006111D0
// @summary Fetches a float at index 2 from this+0x8 and passes it to sub_00678130 on global+0x2E0
// @field unknown +0x08 uint32_t field_0x08
extern void __thiscall fn_006111D0(uint32_t ecx) {
    float val = ext_005B11E0(ecx + 0x8, 2);
    int32_t obj = ext_00594000();
    ext_00678130(static_cast<uint32_t>(obj) + 0x2E0, val);
}
} // namespace lift_006111D0

// [0x006111A0]
namespace lift_006111A0 {
// @name sub_006111A0
// @summary Gets float at index 1 from this+0x8 and passes it to global object at +0x2E0
// @field this +0x08 struct field_0x08


extern float __thiscall ext_005B11E0(uint32_t ecx, uint32_t index);
extern int32_t __cdecl ext_00594000(void);
extern void __thiscall ext_00678130(uint32_t ecx, float value);

extern void __thiscall sub_006111A0(uint32_t ecx) {
    float val = ext_005B11E0(ecx + 0x8, 1);
    int32_t obj = ext_00594000();
    ext_00678130(static_cast<uint32_t>(obj) + 0x2E0, val);
}
} // namespace lift_006111A0

// [0x006118E0]
namespace lift_006118E0 {
// @name invokeVFunc10CAndForwardTo00678130
// @summary Calls virtual method at +0x10C with arg 1, then passes the float result to ext_00678130 on ext_00594000() + 0x2E0.
// @field Self +0x000 void* vtable

extern int32_t __cdecl ext_00594000(void);
extern void __thiscall ext_00678130(void* self, float value);

extern void __thiscall fn_006118E0(void* self) {
    uint32_t* vtable = *reinterpret_cast<uint32_t**>(self);
    using VFunc10C = float(__thiscall*)(void*, int32_t);
    auto vfunc = reinterpret_cast<VFunc10C>(vtable[0x10C / 4]);
    float val = vfunc(self, 1);
    uintptr_t obj = static_cast<uintptr_t>(static_cast<uint32_t>(ext_00594000()));
    ext_00678130(reinterpret_cast<void*>(obj + 0x2E0), val);
}
} // namespace lift_006118E0

// [0x00611950]
namespace lift_00611950 {
// @name sub_00611950
// @summary Calls vtable[0x10c](2) to get a float, then passes it to ext_00678130 on (ext_00594000() + 0x2e0).


extern int32_t __cdecl ext_00594000(void);
extern void __thiscall ext_00678130(void* this_ptr, float val);

extern void __thiscall fn_00611950(void* this_ptr) {
    uint32_t* vtable = *reinterpret_cast<uint32_t**>(this_ptr);
    using VFunc_0x10C = float(__thiscall*)(void*, int32_t);
    auto vfunc = reinterpret_cast<VFunc_0x10C>(vtable[0x10C / 4]);
    float val = vfunc(this_ptr, 2);

    int32_t base = ext_00594000();
    void* target = reinterpret_cast<void*>(static_cast<uintptr_t>(base) + 0x2E0);
    ext_00678130(target, val);
}
} // namespace lift_00611950

// [0x00611870]
namespace lift_00611870 {
// @name sub_00611870
// @summary Calls vtable+0x10c(0) on self to get a float and passes it to ext_00678130 on ext_00594000() + 0x2e0.
// @field Self +0x00 void** vtable


extern int32_t __cdecl ext_00594000(void);
extern void __thiscall ext_00678130(void* self, float value);

extern void __thiscall fn_00611870(void* self) {
    using VFunc = float(__thiscall*)(void*, int32_t);
    void** vtable = *reinterpret_cast<void***>(self);
    VFunc vfunc = reinterpret_cast<VFunc>(vtable[0x10c / sizeof(void*)]);
    float val = vfunc(self, 0);
    int32_t base = ext_00594000();
    void* target = reinterpret_cast<void*>(static_cast<uintptr_t>(static_cast<uint32_t>(base)) + 0x2e0);
    ext_00678130(target, val);
}
} // namespace lift_00611870

// [0x00611910] sub_00611910 (57 bytes)
namespace lift_00611910 {
// Known callee 0x00594000: sub_00594000 (Returns global int32 value from mem_00B40D08.)
extern int32_t __cdecl ext_00594000(void);
// Callee 0x006781B0: thiscall, one float stack arg (callee pops 4), returns float in st(0).
extern float __thiscall ext_006781B0(void* self, float value);

// @name Unknown::forwardFloatThroughChildAndVirtualF0
// @class Unknown
// @summary Gets an int32 handle from ext_00594000, passes (handle + 0x2E0) and the float argument to ext_006781B0, then calls the object's vtable slot at +0xF0 as (this, 1, result).
// @field Unknown +0x00 void* vtable
void __thiscall fn_00611910(void* self, float value) {
    uintptr_t child = static_cast<uint32_t>(ext_00594000()) + 0x2E0;
    float result = ext_006781B0(reinterpret_cast<void*>(child), value);

    // Virtual call: vtable slot at +0xF0, thiscall, args (int32 flag = 1, float value).
    using VSlot = void(__thiscall*)(void* self, int32_t flag, float value);
    void* vtable = lift_field<void*>(self, 0x00);
    VSlot slot = reinterpret_cast<VSlot>(lift_field<void*>(vtable, 0xF0));
    slot(self, 1, result);
}
} // namespace lift_00611910

// [0x006118A0] sub_006118A0 (57 bytes)
namespace lift_006118A0 {
// Known callee 0x00594000: sub_00594000 (Returns global int32 value from mem_00B40D08.)
extern int32_t ext_00594000(void);
// Callee 0x006781B0: sub_006781B0 (63B, not yet lifted). thiscall: ecx = this, one float stack arg, float result in st0.
extern float ext_006781B0(void* self, float value);

// @name Unknown::ForwardFloatThroughGlobalSubobjectToVtblSlot60
// @class Unknown
// @summary Gets a global int32 via ext_00594000, passes this+0x2E0 of that value and the float arg to ext_006781B0, then calls this->vtbl[0xF0/4] with (result, 0).
// @field Unknown +0x00 void* vptr
void fn_006118A0(void* self, float value) {
    uint32_t global = static_cast<uint32_t>(ext_00594000());   // call 0x594000; eax = global
    uintptr_t subobject = static_cast<uintptr_t>(global + 0x2E0); // lea ecx, [eax + 0x2e0]
    float result = ext_006781B0(reinterpret_cast<void*>(subobject), value); // fstp [esp+8] overwrites arg with result

    void* vptr = lift_field<void*>(self, 0x00);                // mov eax, [esi]
    void* slot = lift_field<void*>(vptr, 0xF0);                // mov edx, [eax + 0xf0]
    using SlotFn = void (*)(void* thisPtr, float arg, int32_t zero);
    SlotFn fn = reinterpret_cast<SlotFn>(slot);
    fn(self, result, 0);                                       // push result; push 0; mov ecx, esi; call edx
}
} // namespace lift_006118A0

// [0x00611980] sub_00611980 (57 bytes)
namespace lift_00611980 {
// @name sub_00611980
// @summary Auto-lifted identical-shape clone of 0x00611910 (Unknown::forwardFloatThroughChildAndVirtualF0).
namespace lift_00611910 {
// Known callee 0x00594000: sub_00594000 (Returns global int32 value from mem_00B40D08.)
extern int32_t __cdecl ext_00594000(void);
// Callee 0x006781B0: thiscall, one float stack arg (callee pops 4), returns float in st(0).
extern float __thiscall ext_006781B0(void* self, float value);

// @name Unknown::forwardFloatThroughChildAndVirtualF0
// @class Unknown
// @summary Gets an int32 handle from ext_00594000, passes (handle + 0x2E0) and the float argument to ext_006781B0, then calls the object's vtable slot at +0xF0 as (this, 1, result).
// @field Unknown +0x00 void* vtable
void __thiscall fn_00611980(void* self, float value) {
    uintptr_t child = static_cast<uint32_t>(ext_00594000()) + 0x2E0;
    float result = ext_006781B0(reinterpret_cast<void*>(child), value);

    // Virtual call: vtable slot at +0xF0, thiscall, args (int32 flag = 1, float value).
    using VSlot = void(__thiscall*)(void* self, int32_t flag, float value);
    void* vtable = lift_field<void*>(self, 0x00);
    VSlot slot = reinterpret_cast<VSlot>(lift_field<void*>(vtable, 0xF0));
    slot(self, 2, result);
}
} // namespace lift_00611910
} // namespace lift_00611980

// [0x006123C0]
namespace lift_006123C0 {
extern uint32_t* __thiscall ext_005B11D0(uintptr_t self, uint32_t index);
extern void __thiscall ext_005E1330(void* self);
extern void* __thiscall ext_00493EE0(void* ecx);
extern int32_t __cdecl ext_00594000(void);

// @name UnknownClass::setElement1AndNotify
// @class UnknownClass
// @summary Sets float element 1 at +0x8, sets flag at +0xc, forwards vcall 0xCC via +0xbc, and dispatches slot 0x154 on global+0x258.
// @field UnknownClass +0x08 uint8_t[] field_0x08
// @field UnknownClass +0x0c uint8_t field_0x0c
// @field UnknownClass +0xbc void** field_0xbc
extern void __thiscall fn_006123C0(uintptr_t self, float value) {
    uint32_t* elem = ext_005B11D0(self + 0x8, 1);
    *reinterpret_cast<float*>(elem) = value;
    *reinterpret_cast<uint8_t*>(self + 0xc) = 1;

    void** sub = *reinterpret_cast<void***>(self + 0xbc);
    if (*sub != nullptr) {
        ext_005E1330(*sub);
    }

    int32_t global_obj = ext_00594000();
    if (global_obj != 0) {
        ext_00493EE0(reinterpret_cast<void*>(static_cast<uintptr_t>(static_cast<uint32_t>(global_obj)) + 0x258));
    }
}
} // namespace lift_006123C0

// [0x00612410]
namespace lift_00612410 {
// @name UnknownClass::setElement2AndNotify
// @class UnknownClass
// @summary Stores a float into element 2 of subobject +0x8, sets flag +0xC, and notifies subobject +0xBC and global +0x258.
// @field UnknownClass +0x08 uint8_t[] field_0x08
// @field UnknownClass +0x0C uint8_t field_0x0C
// @field UnknownClass +0xBC void** field_0xBC


void* __fastcall ext_00493EE0(void* ecx);
int32_t __cdecl ext_00594000(void);
uint32_t* __thiscall ext_005B11D0(uintptr_t self, uint32_t index);
void __fastcall ext_005E1330(void* self);

void __thiscall fn_00612410(uintptr_t self, float value) {
    uint32_t* elem = ext_005B11D0(self + 0x8, 2);
    *reinterpret_cast<float*>(elem) = value;
    *reinterpret_cast<uint8_t*>(self + 0xC) = 1;

    void** sub = *reinterpret_cast<void***>(self + 0xBC);
    if (*sub != nullptr) {
        ext_005E1330(*sub);
    }

    int32_t obj = ext_00594000();
    if (obj != 0) {
        ext_00493EE0(reinterpret_cast<void*>(static_cast<uintptr_t>(obj) + 0x258));
    }
}
} // namespace lift_00612410
