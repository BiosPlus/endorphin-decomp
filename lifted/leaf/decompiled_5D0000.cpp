// Lifted C++ translation unit: lifted/leaf/decompiled_5D0000.cpp
#include "lift_compat.h"
#include <cstdint>
#include <new>
#include <string>

#include <string>
namespace lift_005D06D0 {
// @name sub_005D06D0
// @summary Auto-lifted identical-shape clone of 0x00611160 (readFloatAtIndex3).
namespace lift_00611160 {
// Known callee 0x005B11E0: getFloatAt (Returns a float from a 32-bit float array at offset +0x10 indexed by the argument)
extern float ext_005B11E0(uint32_t ecx, uint32_t index);

// @name readFloatAtIndex3
// @summary Returns element 3 of the float array held by the sub-object at this+0x08.
// @field Unknown +0x08 uint32_t field_0x08
float fn_005D06D0(uint32_t ecx) {
    return ext_005B11E0(ecx + 0x210u, 0u);
}
} // namespace lift_00611160
} // namespace lift_005D06D0

// [0x005D07E0] sub_005D07E0 (12 bytes)
namespace lift_005D07E0 {
extern uint32_t ext_005CFCB0();
// Known callee 0x005CFCC0: sub_005CFCC0 (Auto-lifted identical-shape clone of 0x004CE810 (Unknown::GetRecordByIndex).)
extern void* ext_005CFCC0(uint32_t index);

// @name Unknown::GetRecordByCurrentIndex
// @class Unknown
// @summary Obtains an index from helper 0x005CFCB0 and returns the record at that index via 0x005CFCC0.
void* fn_005D07E0() {
    uint32_t index = ext_005CFCB0();
    return ext_005CFCC0(index);
}
} // namespace lift_005D07E0

// [0x005DF270]
namespace lift_005DF270 {
extern void ext_006A5C5C(void* ptr);

// @name Tree_eraseSubtree
// @class Tree
// @summary Recursively erases and frees all non-nil nodes in a red-black tree subtree
// @field TreeNode +0x00 uint32_t left
// @field TreeNode +0x08 uint32_t right
// @field TreeNode +0x15 uint8_t isNil
extern void __thiscall fn_005DF270(void* self, uint32_t node) {
    uint32_t edi = node;
    if (*reinterpret_cast<uint8_t*>(static_cast<uintptr_t>(edi) + 0x15) == 0) {
        uint32_t esi = edi;
        do {
            fn_005DF270(self, *reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(esi) + 0x8));
            esi = *reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(esi));
            ext_006A5C5C(reinterpret_cast<void*>(static_cast<uintptr_t>(edi)));
            edi = esi;
        } while (*reinterpret_cast<uint8_t*>(static_cast<uintptr_t>(esi) + 0x15) == 0);
    }
}
} // namespace lift_005DF270

// [0x005D9EF0] sub_005D9EF0 (56 bytes)
namespace lift_005D9EF0 {
extern uint32_t ext_00480920(uint32_t value);
extern int mem_00B40644;
extern int mem_00965D08;

// @name CObject::InitTimerFloor
// @class CObject
// @summary If the flag at +0x1f1 is clear, forward a global value through a helper and a virtual call on the object at +0x04, then store the float constant 5.0 at +0x1f4.
// @field CObject +0x04 void* field_0x04
// @field CObject +0x1f1 uint8_t field_0x1f1
// @field CObject +0x1f4 float field_0x1f4
void fn_005D9EF0(void* self) {
    using VirtualFn = void (*)(void* self, uint32_t arg0, int32_t arg1);

    if (lift_field<uint8_t>(self, 0x1f1) != 0) {
        return;
    }

    const uint32_t global_value = static_cast<uint32_t>(mem_00B40644);
    void* const obj = lift_field<void*>(self, 0x04);
    const uint32_t helper_result = ext_00480920(global_value);

    // Virtual call through slot 0 of the object at +0x04, with `this` = &self->field_0x04.
    void** vtbl = *reinterpret_cast<void***>(obj);
    auto fn = reinterpret_cast<VirtualFn>(vtbl[0]);
    fn(reinterpret_cast<uint8_t*>(self) + 0x04, helper_result, 0);

    // 0x40A00000 is the IEEE-754 bit pattern of 5.0f (mem_00965D08).
    lift_field<float>(self, 0x1f4) = 5.0f;
}
} // namespace lift_005D9EF0

// [0x005D9F30] sub_005D9F30 (81 bytes)
namespace lift_005D9F30 {
// Known callee 0x005D14A0: ResetOwnedObject (If the object at +0x04 is non-null, call its vtable slot 0 with flag 1 (deleting destructor), then clear the pointer.)
extern void ext_005D14A0(void* self);

// @name ReleaseOwnedObjectScope
// @class <unknown owner> (member; owner class not recovered)
// @summary Calls ResetOwnedObject on self, then if self+0x04 is still non-null, invokes its vtable slot 0 with flag 1 (deleting destructor).
// @field Self +0x04 void* ownedObject
void fn_005D9F30(void* self) {
    // The original wraps this in an SEH unwind frame (state -1, cookie handler 0x008A562B).
    // That frame only performs cleanup on unwind; the normal path below is unchanged.
    ext_005D14A0(self);

    void* obj = lift_field<void*>(self, 0x04);
    if (obj != nullptr) {
        void** vtbl = *reinterpret_cast<void***>(obj);
        auto slot0 = reinterpret_cast<void (*)(void*, int)>(vtbl[0]);
        slot0(obj, 1);
    }
}
} // namespace lift_005D9F30

// [0x005DC930] sub_005DC930 (37 bytes)
namespace lift_005DC930 {
// Known callee 0x005D9F30: ReleaseOwnedObjectScope (ECX = self; thiscall, one pointer argument)
extern void ext_005D9F30(void* self);
// Known callee 0x006A5C5C: thunk_MFC80_ord_764 (IAT jump thunk to MFC80!ord_764; cdecl, one argument pushed)
extern void ext_006A5C5C(void* arg);

// @name ClearOwnedObjectAt0x44
// @summary If the owned pointer at +0x44 is non-null, release its scope, pass it to MFC80!ord_764, then clear the slot.
// @field UnknownClass +0x44 void* field_0x44

void fn_005DC930(void* self) {
    auto* base = static_cast<std::uint8_t*>(self);
    auto** slot = reinterpret_cast<void**>(base + 0x44);

    void* owned = *slot;
    if (owned != nullptr) {
        ext_005D9F30(owned);
        ext_006A5C5C(owned);
    }
    *slot = nullptr;
}
} // namespace lift_005DC930

// [0x005D0610] sub_005D0610 (84 bytes)
namespace lift_005D0610 {
// Known callee 0x005B11E0: getFloatAt (Returns a float from a 32-bit float array at offset +0x10 of the object passed in ecx, indexed by the argument.)
float ext_005B11E0(void* ecx, uint32_t index);

// Constants from .rdata used by this function.
static constexpr double mem_00955AD8 = 12.699999809265137;
static constexpr double mem_00965CE0 = 0.017453292519943295;
static constexpr double mem_00993828 = 0.5;

// @name Unknown::computeScaledTanRatio_005D0610
// @class Unknown
// @summary Returns (getFloatAt(this+0x210, 1) * this->+0x204 * 12.7) / tan(arg * pi/180 * 0.5), computed as float.
// @field Unknown +0x204 float field_0x204
// @field Unknown +0x210 void* field_0x210 (address passed as ecx to ext_005B11E0; sub-object, not read directly)
float fn_005D0610(void* self, float arg) {
    auto* base = static_cast<uint8_t*>(self);

    const float sample = ext_005B11E0(base + 0x210, 1);
    const float scale = lift_field<float>(self, 0x204);
    const double numerator = static_cast<double>(sample * scale) * mem_00955AD8;

    const double angle = (static_cast<double>(arg) * mem_00965CE0) * mem_00993828;
    const float tanValue = static_cast<float>(std::tan(angle));

    return static_cast<float>(numerator / static_cast<double>(tanValue));
}
} // namespace lift_005D0610

// [0x005D1460] sub_005D1460 (31 bytes)
namespace lift_005D1460 {
// Known callee 0x005D0610: Unknown::computeScaledTanRatio_005D0610 (Returns (getFloatAt(this+0x210, 1) * this->+0x204 * 12.7) / tan(arg * pi/180 * 0.5), computed as float.)
extern float ext_005D0610(void* self, float arg);
// Callee 0x005D1430 (sub_005D1430, 33 bytes): receives the scaled value as a float argument.
extern void ext_005D1430(void* self, float arg);

// @name Unknown::scaleThenStore_005D1460
// @class Unknown
// @summary Computes the scaled tan ratio for arg, then passes the result to ext_005D1430 on the same object.
void fn_005D1460(void* self, float arg) {
    float scaled = ext_005D0610(self, arg);
    ext_005D1430(self, scaled);
}
} // namespace lift_005D1460

// [0x005D05B0]
namespace lift_005D05B0 {
extern std::uint8_t mem_00B3F200;

// @name Unknown::wrapVirtualFloatCall_005D05B0
// @class Unknown
// @summary Sets global flag mem_00B3F200, calls virtual slot 1 on the object at this+0x270 (returns float), clears the flag, and returns the float.
// @field Unknown +0x26C void* field_0x26C

// The original MSVC SEH frame (fs:[0] push/restore, state slot) is bookkeeping
// for the flag set/clear around the call and is elided here; the observable
// behavior is preserved.
float sub_005D05B0(std::uint8_t* self) {
    mem_00B3F200 = 1;

    // lea eax,[ecx+0x26c]; mov ecx,[eax+4]  -> subobject pointer at this+0x270
    std::uint8_t* sub = *reinterpret_cast<std::uint8_t**>(self + 0x26C + 4);

    // mov edx,[ecx]; mov eax,[edx+4]; call eax  -> vtable slot 1, thiscall with this=sub
    void** vtbl = *reinterpret_cast<void***>(sub);
    using VirtualFloatFn = float (*)(void* self_);
    float result = reinterpret_cast<VirtualFloatFn>(vtbl[1])(sub);

    mem_00B3F200 = 0;
    return result;
}
} // namespace lift_005D05B0

// [0x005D0670] sub_005D0670 (86 bytes)
namespace lift_005D0670 {
extern uint8_t mem_00B3F200;

// @name CallVirtualSlot1ForFloatAt0x268
// @summary Sets guard flag mem_00B3F200, calls vtable slot 1 of the object at this+0x268 (passing &this+0x264), clears the flag, and returns the float result.
// @field Object +0x264 uint32_t field_0x264
// @field Object +0x268 void* field_0x268
extern float __thiscall fn_005D0670(void* self) {
    mem_00B3F200 = 1;

    void* object = lift_field<void*>(self, 0x268);
    void** vtable = *reinterpret_cast<void***>(object);
    using VFloatMethod = float(__thiscall*)(void* self_obj, void* arg);
    auto method = reinterpret_cast<VFloatMethod>(vtable[1]);
    void* arg = static_cast<uint8_t*>(self) + 0x264;  // lea: address of field, not its value
    float result = method(object, arg);

    mem_00B3F200 = 0;
    return result;
}
} // namespace lift_005D0670

// [0x005DA7C0] sub_005DA7C0 (87 bytes)
namespace lift_005DA7C0 {
// @name sub_005DA7C0
// @summary Auto-lifted identical-shape clone of 0x0064B120 (sub_0064B120).
namespace lift_0064B120 {
// @name sub_0064B120
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B45A84;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B45A80;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_005DA7C0() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8A568Eu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B45A84 & 1u) == 0) {
        mem_00B45A84 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B45A80, frame[0]);
        mem_00B45A80 = 0x968774u;
    }

    mem_fs_0 = frame[0];
    return &mem_00B45A80;
}
} // namespace lift_004CAE30
} // namespace lift_0064B120
} // namespace lift_005DA7C0

// [0x005DA820] sub_005DA820 (87 bytes)
namespace lift_005DA820 {
// @name sub_005DA820
// @summary Auto-lifted identical-shape clone of 0x0064B120 (sub_0064B120).
namespace lift_0064B120 {
// @name sub_0064B120
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B45A8C;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B45A88;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_005DA820() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8A56AEu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B45A8C & 1u) == 0) {
        mem_00B45A8C |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B45A88, frame[0]);
        mem_00B45A88 = 0x968924u;
    }

    mem_fs_0 = frame[0];
    return &mem_00B45A88;
}
} // namespace lift_004CAE30
} // namespace lift_0064B120
} // namespace lift_005DA820

// [0x005DC4D0] sub_005DC4D0 (30 bytes)
namespace lift_005DC4D0 {
// @name sub_005DC4D0
// @summary Auto-lifted identical-shape clone of 0x005B4030 (storeValueWithStaticSingleton).
namespace lift_005B4030 {
// Known callee 0x005B3D70: getStaticSingleton_005B3D70 (Initializes and returns a pointer to the static singleton at 0x00B4355C.)
extern void* ext_005DA7C0();

// @name storeValueWithStaticSingleton
// @summary Writes a 32-bit value into out[0] and the static singleton pointer into out[1].
void fn_005DC4D0(uint32_t* out, uint32_t value) {
    void* singleton = ext_005DA7C0();
    out[0] = value;
    out[1] = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(singleton));
}
} // namespace lift_005B4030
} // namespace lift_005DC4D0

// [0x005DC4F0] sub_005DC4F0 (30 bytes)
namespace lift_005DC4F0 {
// @name sub_005DC4F0
// @summary Auto-lifted identical-shape clone of 0x005B4030 (storeValueWithStaticSingleton).
namespace lift_005B4030 {
// Known callee 0x005B3D70: getStaticSingleton_005B3D70 (Initializes and returns a pointer to the static singleton at 0x00B4355C.)
extern void* ext_005DA820();

// @name storeValueWithStaticSingleton
// @summary Writes a 32-bit value into out[0] and the static singleton pointer into out[1].
void fn_005DC4F0(uint32_t* out, uint32_t value) {
    void* singleton = ext_005DA820();
    out[0] = value;
    out[1] = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(singleton));
}
} // namespace lift_005B4030
} // namespace lift_005DC4F0

// [0x005DC6C0] sub_005DC6C0 (107 bytes)
namespace lift_005DC6C0 {
// Known callee 0x005D9F30: ReleaseOwnedObjectScope (Calls ResetOwnedObject on self, then if self+0x04 is still non-null, invokes its vtable slot 0 with flag 1 (deleting destructor).)
extern void ext_005D9F30(void* self);
// Known callee 0x0065F440: sub_0065F440 (Stores address of mem_0093BF24 into field at offset +0x0.)
extern void ext_0065F440(void* self);
// Known callee 0x006A5C5C: thunk_MFC80_ord_764 (IAT jump thunk forwarding to MFC80!ord_764; called with one pointer argument, caller cleans up)
extern void ext_006A5C5C(void* p);
// .rdata pointer to the std::string destructor (MSVCP80), held as a 32-bit address
extern uint32_t mem_00924FF4;

// @name ReleaseOwnedObjectAndReset
// @class Unknown
// @summary Releases the owned object at +0x44 (if any), destroys the std::string at +0x04, then re-initializes the object via sub_0065F440.
// @field Unknown +0x04 std::string field_0x04
// @field Unknown +0x44 void* field_0x44
void fn_005DC6C0(void* self) {
    auto* base = static_cast<uint8_t*>(self);

    // The MSVC SEH frame (fs:[0] push/pop, state cookie) is not reproduced; it only guards the cleanup below.
    void* owned = lift_field<void*>(base, 0x44);
    if (owned != nullptr) {
        ext_005D9F30(owned);
        ext_006A5C5C(owned);
    }

    // Destroy the std::string member at this+0x04 via its MSVCP80 destructor (thiscall, this = &field_0x04).
    using StrDtor = void (*)(void*);
    auto strDtor = reinterpret_cast<StrDtor>(static_cast<uintptr_t>(mem_00924FF4));
    strDtor(base + 0x04);

    ext_0065F440(self);
}
} // namespace lift_005DC6C0

// [0x005DF720] sub_005DF720 (83 bytes)
namespace lift_005DF720 {
// Known callee 0x00419F50: sub_00419F50 (Auto-lifted identical-shape clone of 0x005E0B20 (TreeIterator::increment).)
extern void ext_00419F50(void* self);
// Known callee 0x006A5C5C: thunk_MFC80_ord_764 (IAT jump thunk forwarding to MFC80!ord_764.)
extern void ext_006A5C5C(uint32_t arg);
extern int mem_00925134;

// @name Unknown::forEachAdvanceInvoke_005DF720
// @summary Walks a cursor from slot1 toward end (arg4), advancing it each step and invoking ext_006A5C5C on the element at field +0x10 of the current node; reports invalid parameters via the CRT handler.
// @field Unknown +0x04 void* field_0x04
// @field Unknown +0x10 uint32_t field_0x10
void fn_005DF720(void* slot1, void* slot2, void* slot3, void* end) {
    // Value of the CRT invalid-parameter handler pointer (loaded once at entry).
    const uintptr_t invalid_handler = static_cast<uintptr_t>(static_cast<uint32_t>(mem_00925134));

    while (true) {
        void* esi = slot1;
        if (esi == nullptr || esi != slot3) {
            reinterpret_cast<void (*)()>(invalid_handler)();
        }

        void* edi = slot2;
        if (edi == end) {
            return;
        }

        // Advance the cursor held in slot1 (passed by address as the "this" object).
        ext_00419F50(&slot1);

        if (esi == nullptr) {
            reinterpret_cast<void (*)()>(invalid_handler)();
        }
        if (edi == lift_field<void*>(esi, 0x04)) {
            reinterpret_cast<void (*)()>(invalid_handler)();
        }

        ext_006A5C5C(lift_field<uint32_t>(edi, 0x10));
    }
}
} // namespace lift_005DF720

// [0x005DC650]
namespace lift_005DC650 {
// @name Unknown::ctor_005DC650
// @class Unknown
// @summary Constructor: sets the object vtable (0x968AD4), initializes the embedded std::string at +0x04 and the float/int fields at +0x20..+0x44 to their default values, and returns this.
// @field Unknown +0x00 uint32_t vtable
// @field Unknown +0x04 std::string name
// @field Unknown +0x20 int32_t field_0x20
// @field Unknown +0x24 int32_t field_0x24
// @field Unknown +0x28 int32_t field_0x28
// @field Unknown +0x2C float field_0x2C
// @field Unknown +0x30 uint8_t field_0x30
// @field Unknown +0x34 float field_0x34
// @field Unknown +0x38 float field_0x38
// @field Unknown +0x3C float field_0x3C
// @field Unknown +0x40 float field_0x40
// @field Unknown +0x44 int32_t field_0x44


extern void __fastcall ext_00661980(void* self);
extern void (__fastcall *mem_00924FE8)(void* self);

extern void* __fastcall fn_005DC650(void* self) {
    ext_00661980(self);

    lift_field<uint32_t>(self, 0x00) = 0x968AD4;
    mem_00924FE8(static_cast<uint8_t*>(self) + 0x04);

    lift_field<int32_t>(self, 0x20) = 0;
    lift_field<int32_t>(self, 0x24) = 0;
    lift_field<float>(self, 0x2C) = 0.0f;
    lift_field<int32_t>(self, 0x28) = 0;
    lift_field<uint8_t>(self, 0x30) = 0;
    lift_field<float>(self, 0x34) = 1.0f;
    lift_field<float>(self, 0x38) = 1.0f;
    lift_field<int32_t>(self, 0x44) = 0;
    lift_field<float>(self, 0x3C) = 0.0f;
    lift_field<float>(self, 0x40) = 0.0f;

    return self;
}
} // namespace lift_005DC650
