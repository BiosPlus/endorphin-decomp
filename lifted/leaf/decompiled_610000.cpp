// Lifted C++ translation unit: lifted/leaf/decompiled_610000.cpp
#include "lift_compat.h"
#include <cstdint>
#include <cstring>

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

// [0x00612460]
namespace lift_00612460 {
// @name UnknownClass::setElement3AndNotify
// @class UnknownClass
// @summary Sets float element 3 in subobject at +0x8, marks flag at +0xC, notifies subobject at +0xBC, and dispatches virtual slot 0x154 on global object +0x258 if non-null.
// @field UnknownClass +0x08 uint8_t field_0x08
// @field UnknownClass +0x0C uint8_t field_0x0C
// @field UnknownClass +0xBC void* field_0xBC


void* __thiscall ext_00493EE0(void* ecx);
int32_t __cdecl ext_00594000(void);
uint32_t* __thiscall ext_005B11D0(uintptr_t self, uint32_t index);
void __thiscall ext_005E1330(void* self);

void __thiscall fn_00612460(void* self, float value) {
    uint8_t* base = reinterpret_cast<uint8_t*>(self);
    uint32_t* elemPtr = ext_005B11D0(reinterpret_cast<uintptr_t>(base + 0x8), 3);
    *reinterpret_cast<float*>(elemPtr) = value;
    *reinterpret_cast<uint8_t*>(base + 0xC) = 1;

    void** subObjPtr = *reinterpret_cast<void***>(base + 0xBC);
    if (*subObjPtr != nullptr) {
        ext_005E1330(*subObjPtr);
    }

    int32_t globalObj = ext_00594000();
    if (globalObj != 0) {
        ext_00493EE0(reinterpret_cast<uint8_t*>(static_cast<uintptr_t>(static_cast<uint32_t>(globalObj))) + 0x258);
    }
}
} // namespace lift_00612460

// [0x00610C60]
namespace lift_00610C60 {
extern uint32_t* __thiscall ext_005B11D0(uintptr_t self, uint32_t index);

// @name UnknownClass::setElementFromVec4
// @class UnknownClass
// @summary Copies 4 floats from a source struct into indexed fields and an element pointer, then sets a dirty flag.
// @field UnknownClass +0x04 uint8_t field_0x04
// @field UnknownClass +0x08 float[] field_0x08
// @field UnknownClass +0x10 float[] field_0x10
// @field UnknownClass +0x18 float[] field_0x18
// @field UnknownClass +0x20 UnknownClass field_0x20
void __thiscall sub_00610C60(uintptr_t self, uintptr_t src, uint32_t index) {
    uint32_t* dst = ext_005B11D0(self + 0x20, index);
    *reinterpret_cast<float*>(dst) = *reinterpret_cast<const float*>(src + 0x8);
    *reinterpret_cast<float*>(self + 4 * index + 0x8) = *reinterpret_cast<const float*>(src + 0xc);
    *reinterpret_cast<float*>(self + 4 * index + 0x18) = *reinterpret_cast<const float*>(src + 0x14);
    *reinterpret_cast<float*>(self + 4 * index + 0x10) = *reinterpret_cast<const float*>(src + 0x10);
    *reinterpret_cast<uint8_t*>(self + 0x4) = 1;
}
} // namespace lift_00610C60

// [0x00612370] Unknown::setFirstElementAndNotify (69 bytes)
namespace lift_00612370 {
// Known callee 0x00594000: sub_00594000 (Returns global int32 value from mem_00B40D08.)
extern int32_t __cdecl ext_00594000(void);
// Known callee 0x005B11D0: UnknownClass::getElementPtr (Returns a pointer to the 32-bit element at the given index in an inline array at offset 0x10.)
extern uint32_t* __thiscall ext_005B11D0(void* self, uint32_t index);
// Known callee 0x005E1330: Unknown::ForwardVCall0xCCToSubobjectField0x234 (If the subobject at +0x234 is non-null, call its virtual slot 0xCC with self as the stack argument.)
extern void ext_005E1330(void* self);
// Known callee 0x00493EE0: dispatchVirtualSlot154OfPointedObject (Loads the object pointer stored at *ecx; if non-null, calls its vtable slot at +0x154 with the object as this and returns that result (tail call).)
extern void* ext_00493EE0(void* ecx);

// @name Unknown::setFirstElementAndNotify
// @class Unknown
// @summary Stores the float argument into element 0 of the inline array at this+0x8, sets the flag at +0xC, forwards a notify through the object at +0xBC, and dispatches on the global handle's +0x258 subobject when the handle is non-zero.
// @field Unknown +0x08 uint8_t field_0x08
// @field Unknown +0x0C uint8_t field_0x0C
// @field Unknown +0xBC void* field_0xBC
void __thiscall fn_00612370(void* self, float value) {
    // Global int32 handle, treated as a pointer-sized value below.
    const uintptr_t handle = static_cast<uintptr_t>(static_cast<uint32_t>(ext_00594000()));

    // Element 0 of the array at this+0x8 receives the float argument.
    void* subobject = static_cast<uint8_t*>(self) + 0x8;
    uint32_t* elem = ext_005B11D0(subobject, 0);
    std::memcpy(elem, &value, sizeof value);

    lift_field<uint8_t>(self, 0xC) = 1;

    // Notify the object referenced at +0xBC if its first dword is non-null.
    void* obj = lift_field<void*>(self, 0xBC);
    void* inner = *static_cast<void**>(obj);
    if (inner != nullptr) {
        ext_005E1330(inner);
    }

    // Dispatch on the handle's +0x258 subobject.
    if (handle != 0) {
        ext_00493EE0(reinterpret_cast<void*>(handle + 0x258));
    }
}
} // namespace lift_00612370

// [0x00610C10] sub_00610C10 (76 bytes)
namespace lift_00610C10 {
// Known callee 0x005B11D0: UnknownClass::getElementPtr (Returns a pointer to the 32-bit element at the given index in an inline array at offset 0x10.)
extern uint32_t* ext_005B11D0(uintptr_t self, uint32_t index);

// Float constants in .rdata
extern float mem_0092C8CC; // 1.5f
extern float mem_0093E990; // 1000.0f
extern float mem_0093F8EC; // 0.1f

// @name Unknown::ResetAndSetDefaults_00610C10
// @class Unknown
// @summary Thiscall initializer: clears flag byte at +0x04, zeroes the two 32-bit elements at indices 1 and 0 of the inline array at +0x20, and stores the float defaults 1.5, 1000.0 and 0.1 into the +0x08..+0x1C pairs.
// @field Unknown +0x04 uint8_t field_0x04
// @field Unknown +0x08 float field_0x08
// @field Unknown +0x0C float field_0x0C
// @field Unknown +0x10 float field_0x10
// @field Unknown +0x14 float field_0x14
// @field Unknown +0x18 float field_0x18
// @field Unknown +0x1C float field_0x1C
// @field Unknown +0x20 uint8_t field_0x20
void fn_00610C10(void* self) {
    uint8_t* obj = reinterpret_cast<uint8_t*>(self);

    // mov byte ptr [esi + 0x4], 0x0
    lift_field<uint8_t>(obj, 0x04) = 0;

    // Element 1 of the inline array at +0x20 = 0.0f (fldz/fstp; +0.0f bit pattern is 0)
    uintptr_t arr = reinterpret_cast<uintptr_t>(obj + 0x20);
    uint32_t* elem1 = ext_005B11D0(arr, 1);
    *elem1 = 0u;

    // Element 0 of the inline array at +0x20 = 0.0f
    uint32_t* elem0 = ext_005B11D0(arr, 0);
    *elem0 = 0u;

    // fld [0x92c8cc] -> fst [esi+0xc] -> fstp [esi+0x8]
    float v1 = mem_0092C8CC;
    lift_field<float>(obj, 0x0C) = v1;
    lift_field<float>(obj, 0x08) = v1;

    // fld [0x93e990] -> fst [esi+0x1c] -> fstp [esi+0x18]
    float v2 = mem_0093E990;
    lift_field<float>(obj, 0x1C) = v2;
    lift_field<float>(obj, 0x18) = v2;

    // fld [0x93f8ec] -> fst [esi+0x14] -> fstp [esi+0x10]
    float v3 = mem_0093F8EC;
    lift_field<float>(obj, 0x14) = v3;
    lift_field<float>(obj, 0x10) = v3;
}
} // namespace lift_00610C10

// [0x006110A0]
namespace lift_006110A0 {
// @name mapIndexToOffset
// @summary Maps an unsigned index (0..3) to a slot index (0, 1, 1, 2) or 4 if out of range.

uint32_t __stdcall sub_006110A0(uint32_t index) {
    switch (index) {
        case 0:
            return 0;
        case 1:
        case 2:
            return 1;
        case 3:
            return 2;
        default:
            return 4;
    }
}
} // namespace lift_006110A0

// [0x00611100] sub_00611100 (24 bytes)
namespace lift_00611100 {
// Known callee 0x006110A0: mapIndexToOffset (Maps an unsigned index (0..3) to a slot index (0, 1, 1, 2) or 4 if out of range.)
extern uint32_t ext_006110A0(uint32_t index);

// @name setSlotValue
// @summary Maps index to a slot via mapIndexToOffset and stores a float into the slot array at +0xAC.
// @field Unknown +0xAC float field_0xac
// @field Unknown +0xB0 float field_0xb0
// @field Unknown +0xB4 float field_0xb4
// @field Unknown +0xB8 float field_0xb8
// @field Unknown +0xBC float field_0xbc
void fn_00611100(void* self, uint32_t index, float value) {
    const uint32_t slot = ext_006110A0(index);
    lift_field<float>(self, static_cast<ptrdiff_t>(0xac + 4 * slot)) = value;
}
} // namespace lift_00611100

// [0x00611140] sub_00611140 (20 bytes)
namespace lift_00611140 {
// Known callee 0x006110A0: mapIndexToOffset (Maps an unsigned index (0..3) to a slot index (0, 1, 1, 2) or 4 if out of range.)
extern uint32_t ext_006110A0(uint32_t index);

// @name getFloatBySlotIndex
// @class <unknown> (this is in ecx; owning class not yet recovered)
// @summary Maps the argument index to a slot (0..4) via mapIndexToOffset, then returns the float at this+0xAC+4*slot (x87 st0); thiscall, callee pops 4.
// @field <unknown> +0xAC float field_0xAC
// @field <unknown> +0xB0 float field_0xB0
// @field <unknown> +0xB4 float field_0xB4
// @field <unknown> +0xB8 float field_0xB8
// @field <unknown> +0xBC float field_0xBC
float fn_00611140(void* self, uint32_t index) {
    uint32_t slot = ext_006110A0(index);                       // push eax ; call mapIndexToOffset
    return lift_field<float>(self, 0xACu + 4u * slot);         // fld dword ptr [ecx + 4*eax + 0xac] ; ret 4
}
} // namespace lift_00611140

// [0x00611120]
namespace lift_00611120 {
// Known callee 0x006110A0: mapIndexToOffset (Maps an unsigned index (0..3) to a slot index (0, 1, 1, 2) or 4 if out of range.)
extern uint32_t __stdcall ext_006110A0(uint32_t index);

// @name Unknown::getFloatSlot
// @class Unknown
// @summary Maps an index to a slot via mapIndexToOffset and returns the float stored at this+0xA0 + 4*slot.
// @field Unknown +0xA0 float field_0xA0 (array of 5 float slots; element i at +0xA0 + 4*i)
float __thiscall fn_00611120(void* self, uint32_t index) {
    const uint32_t slot = ext_006110A0(index);
    const uint8_t* base = static_cast<const uint8_t*>(self);
    float value;
    std::memcpy(&value, base + 0xA0 + static_cast<size_t>(slot) * 4, sizeof(value));
    return value;
}
} // namespace lift_00611120

// [0x00612310] sub_00612310 (82 bytes)
namespace lift_00612310 {
// Known callee 0x005B11D0: UnknownClass::getElementPtr (Returns a pointer to the 32-bit element at the given index in an inline array at offset 0x10.)
extern uint32_t* ext_005B11D0(void* self, uint32_t index);
// Callee 0x006110E0: unknown thiscall (self, index, value); no signature recovered yet.
extern void ext_006110E0(void* self, uint32_t index, float value);
// Known callee 0x00611100: setSlotValue (Maps index to a slot via mapIndexToOffset and stores a float into the slot array at +0xAC.)
extern void ext_00611100(void* self, uint32_t index, float value);
// Known callee 0x006110A0: mapIndexToOffset (Maps an unsigned index (0..3) to a slot index (0, 1, 1, 2) or 4 if out of range.)
extern uint32_t ext_006110A0(uint32_t index);

namespace {

inline float load_f32(const uint8_t* p) {
    float f;
    std::memcpy(&f, p, sizeof f);
    return f;
}

} // namespace

// @name Unknown::applySourceParams
// @class Unknown
// @summary Copies source float/byte params into this object: stores src+0x08 into the element at index of the +0x08 sub-array, forwards src+0x0C and src+0x14 to the slot setters, and writes src+0x04 (byte) at this + slot(index) + 4.
// @field Unknown +0x04 uint8_t field_0x04
// @field Unknown +0x08 UnknownClass field_0x08
void fn_00612310(void* self, const uint8_t* src, uint32_t index) {
    // src layout (argument, class not recovered):
    //   src+0x04 : uint8_t  flag
    //   src+0x08 : float    elementValue
    //   src+0x0C : float    slotValueA
    //   src+0x14 : float    slotValueB
    auto* base = static_cast<uint8_t*>(self);

    // Store elementValue into the 32-bit element at index of this+0x08 (UnknownClass).
    const float elementValue = load_f32(src + 0x08);
    uint32_t* element = ext_005B11D0(base + 0x08, index);
    std::memcpy(element, &elementValue, sizeof elementValue);

    ext_006110E0(self, index, load_f32(src + 0x0C));
    ext_00611100(self, index, load_f32(src + 0x14));

    // Byte store at this + slot(index) + 4.
    const uint32_t slot = ext_006110A0(index);
    base[slot + 0x04] = src[0x04];
}
} // namespace lift_00612310
