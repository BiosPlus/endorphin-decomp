// Lifted C++ translation unit: lifted/NMData/TaskManager.cpp
#include "lift_compat.h"
extern "C" void ext_0050D7C0(void* self);
#include <string>

// [0x0050D8B0] NMData::TaskManager::vfunc_1_off_8 (11 bytes)
// @name NMData::TaskManager::vfunc_1_off_8
// @class NMData::TaskManager
// @summary Secondary-base thunk: adjusts this by -8 and forwards to sub_0050D7C0, then pops the 8-byte stack argument block.
extern "C" void __thiscall fn_0050D8B0(void* self) {
    // Original: add ecx,-0x8; call sub_0050D7C0; ret 8.
    // The 8 bytes of stack arguments are passed through to the callee and
    // cleaned up by this thunk's `ret 8`; they are not modeled here.
    ext_0050D7C0(static_cast<char*>(self) - 0x8);
}

// [0x0050B710] NMData::TaskManager::vfunc_3_off_4 (106 bytes)
namespace lift_0050B710 {
extern void* __thiscall ext_00640390(void* self, uint32_t a, uint32_t b);
extern void __thiscall ext_0050A9D0(void* self, void* a);
extern void ext_0050AFA0(void* a0, void* a1, uint32_t a2, uint32_t a3, uint32_t a4);
extern void* __thiscall ext_00640110(void* self, uint32_t a);
extern void __thiscall ext_00427550(void* self, const char* name);
extern uint32_t mem_00A9F308;
extern uint32_t mem_00A9F300;
extern uint32_t mem_00A9F30C;
extern uint32_t mem_00A9F438;
extern uint32_t mem_00A40EF8[];

// @name NMData::TaskManager::vfunc_3_off_4
// @class NMData::TaskManager
// @summary Resolves a value from the object's +0x08 index into a name table, runs the sub-object setup and vector walk, then assigns the resolved object and name into the child via ResetChildAndAssignName; returns the original argument.
// @field NMData::TaskManager +0x08 void* field_0x08
// @field NMData::TaskManager +0x0C unknown field_0x0C
// @field NMData::TaskManager +0x20 unknown field_0x20
extern void* __thiscall fn_0050B710(void* self, void* arg) {
    // Stack arg slot: the original overwrites it with the result of ext_00640110
    // and passes its address as `this` to ext_00427550.
    void* slot = arg;

    void* r1 = ext_00640390(arg, mem_00A9F308, 0);
    ext_0050A9D0(static_cast<char*>(self) + 0x0C, r1);
    ext_0050AFA0(static_cast<char*>(self) + 0x20, arg, mem_00A9F30C, mem_00A9F300, 0);

    void* r2 = ext_00640110(arg, mem_00A9F438);
    slot = r2;

    auto idx = reinterpret_cast<uintptr_t>(lift_field<void*>(self, 0x08));
    const char* name = reinterpret_cast<const char*>(static_cast<uintptr_t>(mem_00A40EF8[idx]));
    ext_00427550(&slot, name);

    return arg;
}
} // namespace lift_0050B710

// [0x0050AC30] NMData::TaskManager::vfunc_13 (231 bytes)
namespace lift_0050AC30 {
// Callees (declared with the prototypes their call sites in the original asm imply).
// ext_0055DA20: __thiscall, ECX = object, two stack DWORDs, callee pops 8 bytes.
extern void __thiscall ext_0055DA20(void* self, void* a, void* b);
// ext_0046F7D0: cdecl, one stack argument, returns the object pointer.
extern void* ext_0046F7D0(void* obj);
// ext_0050A170: no arguments, returns the lazily-created static object in EAX.
extern void* ext_0050A170();

// Globals read/written by this function.
// mem_00A9F308 / mem_00A9F30C: pointers to C-string literals used as comparison operands.
extern uint32_t mem_00A9F308;
extern uint32_t mem_00A9F30C;
// mem_00AEBCC0: init-guard dword (bit 0 = initialized). mem_00AEBCBC: cached static object pointer.
extern uint32_t mem_00AEBCC0;
extern uint32_t mem_00AEBCBC;
// Metadata-only references (listed in the original asm's data/callee metadata but not
// dereferenced by the bytes at this VA). Only their addresses are taken below; never read or called.
extern void ext_00427550();
extern void ext_0050A9D0();
extern void ext_0050AFA0();
extern void ext_00640110();
extern void ext_00640390();
extern uint32_t mem_00924FC0; // MSVCP std::string operator== import (replaced by std::string below)
extern uint32_t mem_00924FE4; // MSVCP std::string ctor import (replaced by std::string below)
extern uint32_t mem_00924FF4; // MSVCP std::string dtor import (replaced by RAII below)
extern uint32_t mem_00A40EF8;
extern uint32_t mem_00A9F300;
extern uint32_t mem_00A9F438;

// @name NMData::TaskManager::vfunc_13
// @class NMData::TaskManager
// @summary Compares the std::string in arg2 against two binary-resident literals. Match 1: calls vfunc slot 13 on the sub-object at this+0x10 with (arg1, temp std::string literal 0x928B5D). Match 2: lazily inits a static guard then calls ext_0055DA20 on arg1 with (static object, this+0x24). No match: calls ext_0046F7D0(arg1). Returns arg1.
// @field NMData::TaskManager +0x10 unknown field_0x10
// @field NMData::TaskManager +0x24 unknown field_0x24
void* __thiscall fn_0050AC30(void* self, void* arg1, void* arg2) {
    // Address-only references (no read, no call, no runtime effect).
    (void)&ext_00427550;
    (void)&ext_0050A9D0;
    (void)&ext_0050AFA0;
    (void)&ext_00640110;
    (void)&ext_00640390;
    (void)&mem_00924FC0;
    (void)&mem_00924FE4;
    (void)&mem_00924FF4;
    (void)&mem_00A40EF8;
    (void)&mem_00A9F300;
    (void)&mem_00A9F438;

    uint8_t* const obj = static_cast<uint8_t*>(self);
    const std::string& key = *static_cast<const std::string*>(arg2);

    const char* const lit1 = reinterpret_cast<const char*>(static_cast<uintptr_t>(mem_00A9F308));
    if (key == lit1) {
        // Temp string built from the literal at 0x00928B5D; lives until end of this block.
        const std::string tmp(reinterpret_cast<const char*>(static_cast<uintptr_t>(0x00928B5Du)));

        // Virtual call: sub-object at this+0x10 has its vptr at offset 0; slot 0x34 (index 13 on 32-bit).
        void** const vtable = *reinterpret_cast<void***>(obj + 0x10);
        auto vfunc13 = reinterpret_cast<void(__thiscall*)(void*, void*, void*)>(vtable[13]);
        vfunc13(obj + 0x10, arg1, const_cast<std::string*>(&tmp));
        return arg1;
    }

    const char* const lit2 = reinterpret_cast<const char*>(static_cast<uintptr_t>(mem_00A9F30C));
    if (key == lit2) {
        // Lazily initialize the static object once (guard bit 0 of mem_00AEBCC0).
        if ((mem_00AEBCC0 & 1u) == 0) {
            mem_00AEBCC0 |= 1u;
            mem_00AEBCBC = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(ext_0050A170()));
        }
        void* const statics = reinterpret_cast<void*>(static_cast<uintptr_t>(mem_00AEBCBC));
        ext_0055DA20(arg1, statics, obj + 0x24);
        return arg1;
    }

    ext_0046F7D0(arg1);
    return arg1;
}
} // namespace lift_0050AC30

// [0x0050D820] NMData::TaskManager::vfunc_0_off_8 (138 bytes)
namespace lift_0050D820 {
// Known callee 0x0050B960: Unknown::DestroyElementsAndReset_0050B960 (Calls vtable slot 0 (deleting-destructor style, flag 0) on each 0x24-byte element between begin and end, frees the buffer at begin, then nulls begin/end/capacity.)
extern void __thiscall ext_0050B960(void* self);
// sub_0050C7D0 (371B): thiscall, one stack argument.
extern void __thiscall ext_0050C7D0(void* self, void* a);
// sub_0050D4B0 (225B): thiscall, two stack arguments (callee pops 8), returns a pointer in EAX.
extern void* __thiscall ext_0050D4B0(void* self, void* a, uint32_t b);
// sub_0050D7C0 (84B): thiscall, no stack arguments.
extern void __thiscall ext_0050D7C0(void* self);
// Known callee 0x0065F440: sub_0065F440 (Stores address of mem_0093BF24 into field at offset +0x0.)
extern void __fastcall ext_0065F440(void* self);

// @name NMData::TaskManager::vfunc_0_off_8
// @class NMData::TaskManager
// @summary Copies field +0x14 from a helper result into the argument object, runs the sub-object assign and temporary cleanups, then runs the base teardown on this-8; takes two stack arguments and returns void.
// @field Unknown +0x14 uint32_t field_0x14
extern void __thiscall fn_0050D820(void* self, void* arg1, uint32_t arg2) {
    // Scratch slots for the three MSVC temporaries (sizes not recovered from the asm).
    uint32_t tmpA[4] = {};
    uint32_t tmpB[4] = {};
    uint32_t tmpC[4] = {};

    // Helper on this+8 returns an object pointer in EAX.
    void* helper = ext_0050D4B0(tmpA, static_cast<char*>(self) + 0x8, 0);

    // arg1 is the destination; its +0x14 field takes the helper's +0x14 field.
    void* dst = arg1;
    ext_0050C7D0(static_cast<char*>(dst) + 0x4, static_cast<char*>(helper) + 0x4);
    lift_field<uint32_t>(dst, 0x14) = lift_field<uint32_t>(helper, 0x14);

    // Temporary cleanups (the SEH state writes in the asm are not modeled).
    ext_0050B960(tmpB);
    ext_0065F440(tmpC);

    // Base teardown on this-8.
    ext_0050D7C0(static_cast<char*>(self) - 0x8);

    (void)arg2;
}
} // namespace lift_0050D820

// [0x0050DAC0] NMData::TaskManager::vfunc_1_off_4 (283 bytes)
namespace lift_0050DAC0 {
// Callee signatures inferred from the call sites (thiscall = ecx + stack args).
extern uint32_t __thiscall ext_0063F530(void* self, uint32_t a, uint32_t b, uint32_t c);
extern void __thiscall ext_0050D0B0(void* self, uint32_t a);
extern void __cdecl ext_0050D8C0(uint32_t a, void* b, uint32_t c, uint32_t d);
extern uint32_t __thiscall ext_0063EFE0(void* self, const char* name);
// 0x004275E0: assignVirtualString (cdecl, dst + obj).
extern void __cdecl ext_004275E0(void* dst, void* obj);
extern void __thiscall ext_0050D7C0(void* self);
// 0x00508800: FindMatchingNameIndex (thiscall, one stack arg, returns bool).
extern bool __thiscall ext_00508800(void* self, const void* str);

// MSVC import/global slots (values are the function/data addresses).
extern int mem_00924FE8;
extern int mem_00A9F308;
extern int mem_00A9F30C;
extern int mem_00A9F300;
extern int mem_00A9F438;
extern int mem_00924FF4;

// Maps the lookup sentinels (0x00B53A34, 0x00B53B30, 0x00B53AB0, 0x00B53A70, 0x00B53AF0) to 0x00B53B30.
static uint32_t normalize_sentinel(uint32_t r) {
    switch (r) {
        case 0x00B53A34u:
        case 0x00B53B30u:
        case 0x00B53AB0u:
        case 0x00B53A70u:
        case 0x00B53AF0u:
            return 0x00B53B30u;
        default:
            return r;
    }
}

// @name NMData::TaskManager::vfunc_1_off_4
// @class NMData::TaskManager
// @summary Looks up two sentinel-normalized entries via 0x0063F530, feeds them to the sub-object helpers, then resolves a named item and forwards it to the name-index lookup on this-4; returns void.
// @field NMData::TaskManager +0x0C unknown field_0x0C
// @field NMData::TaskManager +0x20 unknown field_0x20
extern void __thiscall fn_0050DAC0(void* self, void* arg) {
    char* const obj = static_cast<char*>(self);
    // 0x1C-byte std::string temporary (MSVC layout); constructed and destroyed via the IAT slots.
    alignas(4) uint8_t tmp[0x1C] = {};

    uint32_t r1 = normalize_sentinel(ext_0063F530(arg, static_cast<uint32_t>(mem_00A9F308), 0, 1));
    ext_0050D0B0(obj + 0x0C, r1);

    uint32_t r2 = normalize_sentinel(ext_0063F530(arg, static_cast<uint32_t>(mem_00A9F30C), 0, 1));
    ext_0050D8C0(r2, obj + 0x20, static_cast<uint32_t>(mem_00A9F300), 1);

    auto ctor = reinterpret_cast<void(__thiscall*)(void*)>(
        static_cast<uintptr_t>(static_cast<uint32_t>(mem_00924FE8)));
    auto dtor = reinterpret_cast<void(__thiscall*)(void*)>(
        static_cast<uintptr_t>(static_cast<uint32_t>(mem_00924FF4)));
    ctor(tmp);

    const char* name = reinterpret_cast<const char*>(
        static_cast<uintptr_t>(static_cast<uint32_t>(mem_00A9F438)));
    uint32_t item = ext_0063EFE0(arg, name);
    ext_004275E0(tmp, reinterpret_cast<void*>(static_cast<uintptr_t>(item)));

    ext_00508800(obj - 4, tmp);
    ext_0050D7C0(obj - 4);

    dtor(tmp);
}
} // namespace lift_0050DAC0
