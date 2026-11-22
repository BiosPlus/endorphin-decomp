// Lifted C++ translation unit: lifted/classes/AcclaimIO.cpp
#include "lift_compat.h"

// [0x00584660] AcclaimIO::vfunc_43 (34 bytes)
// @name AcclaimIO::IsFlaggedAndEnabled
// @class AcclaimIO
// @summary Returns true when virtual slot 57 (vtable +0xE4) reports bit 0x02 and the byte at +0x428 is nonzero.
// @field AcclaimIO +0x00 void** vtable
// @field AcclaimIO +0x428 uint8_t field_0x428
bool fn_00584660(void* self) {
    void** vtbl = lift_field<void**>(self, 0x00);
    using Slot57 = uint8_t (*)(void* self);
    Slot57 slot = reinterpret_cast<Slot57>(vtbl[57]);
    uint8_t flags = slot(self);
    if ((flags & 0x02) == 0) {
        return false;
    }
    return lift_field<uint8_t>(self, 0x428) != 0;
}

// [0x0055BE30] AcclaimIO::vfunc_19 (37 bytes)
// @name AcclaimIO::vfunc_19
// @class AcclaimIO
// @summary Calls the virtual at vtable byte offset 0xE4 (thiscall, no args) and returns true only if its result has bit 0x2 set and the byte at +0x428 is non-zero.
// @field AcclaimIO +0x00 void** vtable
// @field AcclaimIO +0x428 uint8_t field_0x428
bool fn_0055BE30(void* self) {
    using FlagsFn = uint8_t (*)(void*);

    void* vtable = lift_field<void*>(self, 0x00);
    FlagsFn flags_fn = reinterpret_cast<FlagsFn>(lift_field<void*>(vtable, 0xE4));
    const uint8_t flags = flags_fn(self);

    if ((flags & 0x02) == 0) {
        return false;
    }
    return lift_field<uint8_t>(self, 0x428) != 0;
}

// [0x0055BE60] AcclaimIO::vfunc_16 (49 bytes)
// @name AcclaimIO::forwardToSubobjects
// @class AcclaimIO
// @summary Forwards arg to virtual slot 16 (0x40) of two embedded vtable-bearing subobjects at +0x46C and +0x964.
// @field AcclaimIO +0x46C uint8_t subobjA
// @field AcclaimIO +0x964 uint8_t subobjB
void fn_0055BE60(void* self, void* arg) {
    void* subA = reinterpret_cast<uint8_t*>(self) + 0x46C;
    void** vtblA = *reinterpret_cast<void***>(subA);
    reinterpret_cast<void (*)(void*, void*)>(vtblA[0x40 / 4])(subA, arg);

    void* subB = reinterpret_cast<uint8_t*>(self) + 0x964;
    void** vtblB = *reinterpret_cast<void***>(subB);
    reinterpret_cast<void (*)(void*, void*)>(vtblB[0x40 / 4])(subB, arg);
}

// [0x005846B0] AcclaimIO::vfunc_37 (60 bytes)
// @name AcclaimIO::vfunc_37
// @class AcclaimIO
// @summary Calls virtual slot 57 on self; if it returns 1 forwards vfunc 37 to embedded subobjA (+0x46C), otherwise to subobjB (+0x964).
// @field AcclaimIO +0x46C uint8_t subobjA
// @field AcclaimIO +0x964 uint8_t subobjB
void fn_005846B0(void* self) {
    auto* base = static_cast<uint8_t*>(self);

    // Virtual selector: vtable slot 57 (0xE4 / 4), returns int.
    void** vtable = *reinterpret_cast<void***>(base);
    using IntMethod = int (*)(void*);
    const int sel = reinterpret_cast<IntMethod>(vtable[57])(self);

    // Pick embedded sub-object by selector.
    uint8_t* sub = base + (sel == 1 ? 0x46C : 0x964);

    // Tail-forward to sub-object's virtual slot 37 (0x94 / 4) with sub as this.
    void** subVtable = *reinterpret_cast<void***>(sub);
    using VoidMethod = void (*)(void*);
    reinterpret_cast<VoidMethod>(subVtable[37])(sub);
}

// [0x005846F0]
// @name AcclaimIO::vfunc_48
// @class AcclaimIO
// @summary Calls vfunc_57 on self; if it returns true, forwards vfunc_48 to the embedded object at +0x46C, otherwise to the one at +0x964. Returns the callee's result.
// @field AcclaimIO +0x000 void** vtable
// @field AcclaimIO +0x46C uint8_t subobjA
// @field AcclaimIO +0x964 uint8_t subobjB
uint32_t fn_005846F0(void* self) {
    // Each embedded object's vptr is stored at its own offset 0.
    void** selfVtable = lift_field<void**>(self, 0x000);

    // vtable slot 57 (+0xE4): bool-like predicate on self, result in AL.
    using PredicateFn = uint8_t (*)(void* thisPtr);
    auto predicate = reinterpret_cast<PredicateFn>(selfVtable[0xE4 / sizeof(void*)]);
    uint8_t flag = predicate(self);

    // Pick embedded subobject: subobjA if flag bit 0 is set, else subobjB.
    ptrdiff_t subOffset = (flag & 1) ? 0x46C : 0x964;
    void* subobj = reinterpret_cast<uint8_t*>(self) + subOffset;

    // Object's vptr, then vtable slot 48 (+0xC0): vfunc_48 on the subobject.
    void** subVtable = *reinterpret_cast<void***>(subobj);
    using SubFn = uint32_t (*)(void* thisPtr);
    auto target = reinterpret_cast<SubFn>(subVtable[0xC0 / sizeof(void*)]);
    return target(subobj);
}

// [0x00584730]
// @name AcclaimIO::vfunc_13
// @class AcclaimIO
// @summary Copies string/scalar fields to shadow offsets, configures subobjA (+0x46C), and forwards the call to subobjA->vtable[13].
// @field AcclaimIO +0x08 uint8_t field_0x08
// @field AcclaimIO +0x24 uint8_t field_0x24
// @field AcclaimIO +0x16C uint8_t field_0x16C
// @field AcclaimIO +0x3D4 uint8_t field_0x3D4
// @field AcclaimIO +0x3F0 uint32_t field_0x3F0
// @field AcclaimIO +0x3F4 uint8_t field_0x3F4
// @field AcclaimIO +0x410 uint32_t field_0x410
// @field AcclaimIO +0x418 uint32_t field_0x418
// @field AcclaimIO +0x420 uint32_t field_0x420
// @field AcclaimIO +0x46C uint8_t subobjA
// @field AcclaimIO +0x840 uint8_t field_0x840
// @field AcclaimIO +0x85C uint32_t field_0x85C
// @field AcclaimIO +0x860 uint8_t field_0x860
// @field AcclaimIO +0x87C uint32_t field_0x87C
// @field AcclaimIO +0x88C uint32_t field_0x88C

#include "lift_compat.h"

extern "C" int mem_00924FDC; // MSVCP80 std::basic_string<char>::operator=(const basic_string&)
extern "C" void __thiscall ext_00521350(void* self, void* arg);
extern "C" void __thiscall ext_00553750(void* self, void* arg);
extern "C" void __thiscall ext_00558A20(void* self, void* arg);
extern "C" void __thiscall ext_00559180(void* self, uint32_t arg);

extern "C" uint32_t __thiscall fn_00584730(void* self, uint32_t arg) {
    using StringAssignFn = void* (__thiscall*)(void* dst, const void* src);
    using SubobjVfunc13Fn = uint32_t (__thiscall*)(void* subobj, uint32_t arg);

    auto string_assign = reinterpret_cast<StringAssignFn>(static_cast<uintptr_t>(mem_00924FDC));

    uint8_t* const src_block = &lift_field<uint8_t>(self, 0x3D4);
    uint8_t* const dst_block = &lift_field<uint8_t>(self, 0x840);

    string_assign(dst_block, src_block);
    lift_field<uint32_t>(dst_block, 0x1C) = lift_field<uint32_t>(src_block, 0x1C);
    string_assign(dst_block + 0x20, src_block + 0x20);
    lift_field<uint32_t>(dst_block, 0x3C) = lift_field<uint32_t>(src_block, 0x3C);

    void* const subobjA = &lift_field<uint8_t>(self, 0x46C);
    ext_00521350(subobjA, &lift_field<uint8_t>(self, 0x08));
    ext_00553750(subobjA, &lift_field<uint8_t>(self, 0x24));
    ext_00558A20(subobjA, &lift_field<uint8_t>(self, 0x16C));
    ext_00559180(subobjA, lift_field<uint32_t>(self, 0x418));

    lift_field<uint32_t>(self, 0x88C) = lift_field<uint32_t>(self, 0x420);

    void* const subobjA_vtable = lift_field<void*>(subobjA, 0x00);
    auto vfunc13 = reinterpret_cast<SubobjVfunc13Fn>(lift_field<void*>(subobjA_vtable, 0x34));
    return vfunc13(subobjA, arg);
}
