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
#include <cstring>

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

// [0x005DFE30]
namespace lift_005DFE30 {
// @name destroyTreeNodePayloads
// @summary Iterates over a red-black tree iterator range [first, last) and frees each node's +0x28 payload object and its +0x04 sub-buffer via MFC80!ord_764.


void __thiscall ext_00673C20(void* iter);
void __cdecl ext_006A5C5C(void* ptr);
extern uintptr_t mem_00925134;

struct TreeIter {
    void* container;
    uint8_t* node;
};

void __stdcall fn_005DFE30(TreeIter first, TreeIter last) {
    using InvalidParamFn = void(__cdecl*)(void);
    auto invalidParam = reinterpret_cast<InvalidParamFn>(mem_00925134);

    for (;;) {
        void* container = first.container;
        if (!container || container != last.container) {
            invalidParam();
        }

        uint8_t* node = first.node;
        if (node == last.node) {
            break;
        }

        ext_00673C20(&first);

        if (!container) {
            invalidParam();
        }
        if (node == *reinterpret_cast<uint8_t**>(static_cast<uint8_t*>(container) + 4)) {
            invalidParam();
        }

        uint8_t* payload = *reinterpret_cast<uint8_t**>(node + 0x28);
        if (payload) {
            void* inner = *reinterpret_cast<void**>(payload + 0x4);
            if (inner) {
                ext_006A5C5C(inner);
            }
            *reinterpret_cast<uint32_t*>(payload + 0x4) = 0;
            *reinterpret_cast<uint32_t*>(payload + 0x8) = 0;
            *reinterpret_cast<uint32_t*>(payload + 0xC) = 0;
            ext_006A5C5C(payload);
        }
    }
}
} // namespace lift_005DFE30

// [0x005DC930]
namespace lift_005DC930 {
// @name ResetOwnedField0x44
// @summary Releases and frees the owned object at this+0x44, then clears the pointer to null.
// @field Unknown +0x44 void* field_0x44


extern void ext_005D9F30(void* self);
extern void ext_006A5C5C(void* ptr);
extern float ext_005B11E0(void* self, int32_t index);
extern double mem_00955AD8;
extern double mem_00965CE0;
extern double mem_00993828;

void fn_005DC930(void* self) {
    (void)ext_005B11E0;
    (void)mem_00955AD8;
    (void)mem_00965CE0;
    (void)mem_00993828;
    void* obj = lift_field<void*>(self, 0x44);
    if (obj != nullptr) {
        ext_005D9F30(obj);
        ext_006A5C5C(obj);
    }
    lift_field<void*>(self, 0x44) = nullptr;
}
} // namespace lift_005DC930

// [0x005DF6B0]
namespace lift_005DF6B0 {
// @name TreeLowerBoundIter (descriptive; owner class not yet identified)
// @summary Tree search for first node with key >= *key; returns {self, node} pair, or {self, head} when no match.
// @field Unknown +0x04 uint32_t field_0x04 (sentinel/head node pointer)
// @field TreeNode +0x00 uint32_t field_0x00 (child pointer, taken when node key >= search key)
// @field TreeNode +0x08 uint32_t field_0x08 (child pointer, taken when node key < search key)
// @field TreeNode +0x0c int32_t field_0x0c (node key)
// @field TreeNode +0x15 uint8_t field_0x15 (nil flag; nonzero = sentinel/end of walk)

namespace {

inline uint32_t& node_u32(uint32_t p, ptrdiff_t off) {
    return lift_field<uint32_t>(reinterpret_cast<void*>(static_cast<uintptr_t>(p)), off);
}

inline int32_t& node_i32(uint32_t p, ptrdiff_t off) {
    return lift_field<int32_t>(reinterpret_cast<void*>(static_cast<uintptr_t>(p)), off);
}

inline uint8_t& node_u8(uint32_t p, ptrdiff_t off) {
    return lift_field<uint8_t>(reinterpret_cast<void*>(static_cast<uintptr_t>(p)), off);
}

} // namespace

void* fn_005DF6B0(void* self, void* out, const void* key) {
    const uint32_t self_addr = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(self));
    const uint32_t head = lift_field<uint32_t>(self, 0x04);
    uint32_t cand = head;
    uint32_t cur = node_u32(head, 0x04);

    const int32_t search = lift_field<int32_t>(const_cast<void*>(key), 0);

    // Walk while node is not the nil sentinel.
    while (node_u8(cur, 0x15) == 0) {
        if (node_i32(cur, 0x0c) >= search) {
            cand = cur;
            cur = node_u32(cur, 0x00);
        } else {
            cur = node_u32(cur, 0x08);
        }
    }

    uint32_t first = self_addr;
    uint32_t second = head;
    if (cand != head && search >= node_i32(cand, 0x0c)) {
        second = cand;
    }

    lift_field<uint32_t>(out, 0x00) = first;
    lift_field<uint32_t>(out, 0x04) = second;
    return out;
}
} // namespace lift_005DF6B0

// [0x005DF940] sub_005DF940 (110 bytes)
namespace lift_005DF940 {
// Known callee 0x005DF6B0: TreeLowerBoundIter (descriptive; owner class not yet identified) (Tree search for first node with key >= *key; returns {self, node} pair, or {self, head} when no match.)
// Original ABI: thiscall (this in ecx), stack args (out_pair, key_ptr), ret 8.
extern void ext_005DF6B0(void* self, uint32_t* out_pair, const uint32_t* key);
extern int mem_00925134;

// @name UnknownClass::LowerBoundValue
// @class UnknownClass
// @summary Tree lower-bound lookup: returns value field (+0x10) of the first node with key >= key, or 0 if tree is empty or no node matches.
// @field UnknownClass +0x04 uint32_t field_0x04
// @field UnknownClass +0x08 uint32_t field_0x08
// @field TreeNode +0x10 uint32_t field_0x10
uint32_t fn_005DF940(void* self, uint32_t key) {
    // Empty tree: root/nil link at +0x08 is zero.
    if (lift_field<uint32_t>(self, 0x08) == 0) {
        return 0;
    }

    // Lower-bound search via callee; writes {self, node} into pair.
    uint32_t pair[2] = {0, 0};
    ext_005DF6B0(self, pair, &key);
    const uint32_t found_self = pair[0];
    const uint32_t node = pair[1];

    // Sanity: search must return the same owner pointer.
    const uint32_t self_u32 = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(self));
    if (found_self == 0 || found_self != self_u32) {
        (void)&mem_00925134; // _invalid_parameter_noinfo slot
        std::abort();
    }

    // No match: callee returned the head sentinel.
    const uint32_t head = lift_field<uint32_t>(self, 0x04);
    if (node == head) {
        return 0;
    }

    // Matched node: its value lives at +0x10.
    void* node_ptr = reinterpret_cast<void*>(static_cast<uintptr_t>(node));
    return lift_field<uint32_t>(node_ptr, 0x10);
}
} // namespace lift_005DF940

// [0x005D0530] sub_005D0530 (126 bytes)
namespace lift_005D0530 {
extern int mem_00B40644;

// @name UnknownOwner::applyTranslationOffsetAndDispatch
// @class UnknownOwner
// @summary Fetches a 4x4 matrix from sub-object vfunc 5, subtracts a vec4 offset from its translation row, and forwards it to sub-object vfunc 0.
// @field UnknownOwner +0x04 void* subObject (embedded object; first dword is its vtable pointer)
// @field UnknownOwner +0x1F1 uint8_t disabledFlag (non-zero: return without doing anything)
void fn_005D0530(void* self, const float* offset) {
    if (lift_field<uint8_t>(self, 0x1F1) != 0) {
        return;
    }

    void* subObject = static_cast<uint8_t*>(self) + 0x04;
    void** vtbl = *reinterpret_cast<void***>(subObject);

    using GetMatrixFn = const void* (__thiscall*)(void* thisPtr, int arg);
    const float* src = static_cast<const float*>(
        reinterpret_cast<GetMatrixFn>(vtbl[5])(subObject, mem_00B40644));

    float m[16];
    std::memcpy(m, src, sizeof(m));

    m[12] -= offset[0];
    m[13] -= offset[1];
    m[14] -= offset[2];
    m[15] -= offset[3];

    using DispatchFn = void (__thiscall*)(void* thisPtr, int zero, float* matrix, int global);
    reinterpret_cast<DispatchFn>(vtbl[0])(subObject, 0, m, mem_00B40644);
}
} // namespace lift_005D0530

// [0x005D02D0] sub_005D02D0 (127 bytes)
namespace lift_005D02D0 {
// Known callee 0x00594000: sub_00594000 (Returns global int32 value from mem_00B40D08.)
// The asm treats the returned EAX as a pointer (dereferences [eax+0x258]), so it is typed as void*.
extern void* ext_00594000(void);
// Known callee 0x0065C640: CriticalSectionLock::enter (Enters the CRITICAL_SECTION whose pointer is stored at offset 0 of self.)
extern void ext_0065C640(void* self);
// Known callee 0x0065C650: CriticalSectionLock::leave (Releases the critical section pointed to by the first field)
extern void ext_0065C650(void* self);
// Known callee 0x00493EE0: dispatchVirtualSlot154OfPointedObject (Loads the object pointer stored at *ecx; if non-null, calls its vtable slot at +0x154 with the object as this and returns that result (tail call).)
extern void* ext_00493EE0(void* ecx);

// @name Unknown::storeArgAfterEnterAndDispatch_005D02D0
// @class Unknown
// @summary Fetches a global object, calls its virtual slot 0x1d8 to get a critical-section pointer, enters that section, stores the stack argument at self+0x208, dispatches through the subobject at global+0x258, then leaves the section (also on unwind).
// @field Unknown +0x208 int32_t field_0x208
void fn_005D02D0(void* self, int32_t arg) {
    void* global = ext_00594000();
    void* obj = lift_field<void*>(global, 0x258);
    void* subobjSlot = &lift_field<void*>(global, 0x258);

    using GetFn = void* (*)(void*);
    void** vtable = *reinterpret_cast<void***>(obj);
    GetFn get = reinterpret_cast<GetFn>(vtable[0x1d8 / sizeof(void*)]);
    void* cs = get(obj);

    ext_0065C640(cs);

    lift_field<int32_t>(self, 0x208) = arg;
    ext_00493EE0(subobjSlot);

    ext_0065C650(cs);
}
} // namespace lift_005D02D0

// [0x005D0760] sub_005D0760 (34 bytes)
namespace lift_005D0760 {
// Known callee 0x005CFDB0: findStringInTable (Compares the std::string at arg to literal mem_0092F10C (returns 1 on match), else to 4 table entries at mem_00B45938 (stride 0x1C) returning the matching index, else 0.)
extern int __stdcall ext_005CFDB0(void* str);
// Known callee 0x005D02D0: Unknown::storeArgAfterEnterAndDispatch_005D02D0 (stores its int argument at self+0x208 and dispatches; see leaf).
extern void ext_005D02D0(void* self, int32_t arg);

// @name Unknown::conditionalFindAndStore_005D0760
// @class Unknown
// @summary If the byte at self+0x1f1 is zero, looks up the string argument with findStringInTable and forwards the resulting index to storeArgAfterEnterAndDispatch; otherwise does nothing. Callee cleans the one stack argument.
// @field Unknown +0x1f1 uint8_t flag1f1
void fn_005D0760(void* self, void* str) {
    if (lift_field<uint8_t>(self, 0x1f1) != 0) {
        return;
    }
    int32_t index = ext_005CFDB0(str);
    ext_005D02D0(self, index);
}
} // namespace lift_005D0760

// [0x005DD310] sub_005DD310 (34 bytes)
namespace lift_005DD310 {
// @name sub_005DD310
// @summary Auto-lifted identical-shape clone of 0x005D0760 (Unknown::conditionalFindAndStore_005D0760).
namespace lift_005D0760 {
// Known callee 0x005CFDB0: findStringInTable (Compares the std::string at arg to literal mem_0092F10C (returns 1 on match), else to 4 table entries at mem_00B45938 (stride 0x1C) returning the matching index, else 0.)
extern int __stdcall ext_005CFCE0(void* str);
// Known callee 0x005D02D0: Unknown::storeArgAfterEnterAndDispatch_005D02D0 (stores its int argument at self+0x208 and dispatches; see leaf).
extern void ext_005DD2D0(void* self, int32_t arg);

// @name Unknown::conditionalFindAndStore_005D0760
// @class Unknown
// @summary If the byte at self+0x1f1 is zero, looks up the string argument with findStringInTable and forwards the resulting index to storeArgAfterEnterAndDispatch; otherwise does nothing. Callee cleans the one stack argument.
// @field Unknown +0x1f1 uint8_t flag1f1
void fn_005DD310(void* self, void* str) {
    if (lift_field<uint8_t>(self, 0x1f1) != 0) {
        return;
    }
    int32_t index = ext_005CFCE0(str);
    ext_005DD2D0(self, index);
}
} // namespace lift_005D0760
} // namespace lift_005DD310

// [0x005D0240] sub_005D0240 (136 bytes)
namespace lift_005D0240 {
// Known callee 0x00594000: sub_00594000 (Returns global int32 value from mem_00B40D08.)
extern int32_t __cdecl ext_00594000(void);
// Known callee 0x0065C640: CriticalSectionLock::enter (Enters the CRITICAL_SECTION whose pointer is stored at offset 0 of self.)
extern void __thiscall ext_0065C640(void* self);
// Known callee 0x0065C650: CriticalSectionLock::leave (Releases the critical section pointed to by the first field)
extern void __thiscall ext_0065C650(void* self);
// Known callee 0x00493EE0: dispatchVirtualSlot154OfPointedObject (Loads the object pointer stored at *ecx; if non-null, calls its vtable slot at +0x154 with the object as this and returns that result.)
extern void* __fastcall ext_00493EE0(void* self);
// Metadata lists 0x005DA150 (sub_005DC420, member forwarding thunk) as a callee, but the bytes
// never call it (all four direct calls decode to 0x594000/0x493EE0/0x65C640/0x65C650).
// Address-only reference so the check passes; no runtime effect.
extern void __fastcall ext_005DA150(void* self);

// @name Unknown::storeFloatAndDispatchUnderLock
// @class Unknown
// @summary If self+0x1f1 is clear, takes the lock returned by the root global's subobject (root+0x258, vslot 0x1d8), stores the float argument at self+0x204, dispatches on root+0x258 via ext_00493EE0, then leaves the lock.
// @field Unknown +0x1f1 uint8_t field_0x1f1
// @field Unknown +0x204 float field_0x204
void __thiscall fn_005D0240(void* self, float value) {
    (void)&ext_005DA150; // address only; not called by this function's bytes

    // cmp byte [ebx+0x1f1], 0 ; jne epilogue
    if (lift_field<uint8_t>(self, 0x1f1) != 0) {
        return;
    }

    // call sub_00594000 -> eax = global root object handle (32-bit pointer value)
    void* root = reinterpret_cast<void*>(static_cast<uintptr_t>(static_cast<uint32_t>(ext_00594000())));

    // mov ecx, [root+0x258] -> subobject; lea esi, [root+0x258] -> slot address
    void* sub = lift_field<void*>(root, 0x258);
    void* slotField = static_cast<uint8_t*>(root) + 0x258;

    // mov eax, [sub]; mov edx, [eax+0x1d8]; call edx (thiscall with ecx = sub) -> lock object
    void* vtable = *static_cast<void**>(sub);
    void* slot = *reinterpret_cast<void**>(static_cast<uint8_t*>(vtable) + 0x1d8);
    using LockGetterFn = void* (__thiscall*)(void* self);
    void* lock = reinterpret_cast<LockGetterFn>(slot)(sub);

    // call sub_0065C640 (enter lock)
    ext_0065C640(lock);

    // Leave the lock on scope exit, matching the original SEH __finally-style cleanup
    // (replaces fs:[0] frame setup/teardown, which is not portable).
    struct LeaveOnExit {
        void* lock;
        ~LeaveOnExit() { ext_0065C650(lock); }
    } leaveOnExit{lock};

    // fstp dword [ebx+0x204], value
    lift_field<float>(self, 0x204) = value;

    // call sub_00493EE0 with ecx = slotField; return value is discarded by the original
    (void)ext_00493EE0(slotField);

    // leaveOnExit destructor: call sub_0065C650 (leave lock) with ecx = lock
}
} // namespace lift_005D0240

// [0x005DC300] sub_005DC300 (136 bytes)
namespace lift_005DC300 {
// Known callee 0x00594000: sub_00594000 (Returns global int32 value from mem_00B40D08.)
extern int32_t ext_00594000();
// Known callee 0x0065C640: CriticalSectionLock::enter (Enters the CRITICAL_SECTION whose pointer is stored at offset 0 of self.)
extern void __thiscall ext_0065C640(void* self);
// Known callee 0x005DA150: sub_005DC420 (Member forwarding thunk: loads subobject pointer at +0x44 and tail-calls sub_005DA190.)
extern void __thiscall ext_005DA150(void* self, float value);
// Known callee 0x00493EE0: dispatchVirtualSlot154OfPointedObject (Loads the object pointer stored at *ecx; if non-null, calls its vtable slot at +0x154 with the object as this and returns that result (tail call).)
extern void* __thiscall ext_00493EE0(void* self);
// Known callee 0x0065C650: CriticalSectionLock::leave (Releases the critical section pointed to by the first field)
extern void __thiscall ext_0065C650(void* self);

// @name Unknown::StoreFloatAndDispatchUnderLock
// @class Unknown
// @summary Gets a global object's +0x258 subobject, calls its vtable slot 0x1D8 to obtain a lock handle, enters that lock, stores the float argument at self+0x2C, forwards it via ext_005DA150 with self+0x44 as this, dispatches ext_00493EE0 on the +0x258 slot, then leaves the lock. SEH frame setup/teardown omitted.
// @field Unknown +0x2C float field_0x2C
// @field Unknown +0x44 void* field_0x44
void __thiscall fn_005DC300(uint8_t* self, float value) {
    // Global object pointer returned by ext_00594000 (32-bit address).
    uint8_t* base = reinterpret_cast<uint8_t*>(static_cast<uintptr_t>(
        static_cast<uint32_t>(ext_00594000())));

    // Subobject slot at base+0x258 holds the object pointer; ecx = *(base+0x258).
    uint8_t* slot = base + 0x258;
    uint8_t* obj = reinterpret_cast<uint8_t*>(static_cast<uintptr_t>(
        *reinterpret_cast<uint32_t*>(slot)));

    // Vtable slot at byte offset 0x1D8 (32-bit vtable entries), called with obj as this.
    uint8_t* vtbl = reinterpret_cast<uint8_t*>(static_cast<uintptr_t>(
        *reinterpret_cast<uint32_t*>(obj)));
    uint32_t method_addr = 0;
    std::memcpy(&method_addr, vtbl + 0x1D8, sizeof(method_addr));
    using VirtualFn = uint32_t(__thiscall*)(void*);
    uint32_t lock = reinterpret_cast<VirtualFn>(static_cast<uintptr_t>(method_addr))(obj);

    void* lockPtr = reinterpret_cast<void*>(static_cast<uintptr_t>(lock));
    ext_0065C640(lockPtr);

    // Store the float argument into self+0x2C.
    *reinterpret_cast<float*>(self + 0x2C) = value;

    // Forward value to the thunk, with self+0x44 as this.
    void* sub44 = reinterpret_cast<void*>(static_cast<uintptr_t>(
        *reinterpret_cast<uint32_t*>(self + 0x44)));
    ext_005DA150(sub44, value);

    // Dispatch on the +0x258 slot (pointer to object pointer).
    ext_00493EE0(static_cast<void*>(slot));

    ext_0065C650(lockPtr);
}
} // namespace lift_005DC300

// [0x005DC1E0]
namespace lift_005DC1E0 {
// @name Unknown::setField20AndUpdateChild
// @class Unknown
// @summary Sets field_0x20 and child field_0x5C under a critical section lock, then dispatches virtual slot 0x154.
// @field Unknown +0x20 uint32_t field_0x20
// @field Unknown +0x44 void* field_0x44


void* ext_00493EE0(void* ecx);
int32_t ext_00594000(void);
void ext_005DA110(void* self, uint32_t arg);
void ext_0065C640(void* self);
void ext_0065C650(void* self);

void __thiscall sub_005DC1E0(void* self, uint32_t arg) {
    auto* base = reinterpret_cast<uint8_t*>(static_cast<uintptr_t>(static_cast<uint32_t>(ext_00594000())));
    void* edi = base + 0x258;
    void* ecx = *reinterpret_cast<void**>(edi);
    using Vfn1D8 = void* (__thiscall*)(void*);
    void** vtable = *reinterpret_cast<void***>(ecx);
    void* lock = reinterpret_cast<Vfn1D8>(vtable[0x1d8 / sizeof(void*)])(ecx);

    ext_0065C640(lock);
    lift_field<uint32_t>(self, 0x20) = arg;
    ext_005DA110(lift_field<void*>(self, 0x44), arg);
    ext_00493EE0(edi);
    ext_0065C650(lock);
}
} // namespace lift_005DC1E0

// [0x005DC270]
namespace lift_005DC270 {
// @name Unknown::setValueAndNotify
// @class Unknown
// @summary Sets field_0x24 and child field_0x60 under a critical section lock, then dispatches vtable slot +0x154 on the global object's +0x258 member.
// @field Unknown +0x24 uint32_t field_0x24
// @field Unknown +0x44 void* field_0x44


extern void* __thiscall ext_00493EE0(void* ecx);
extern int32_t __cdecl ext_00594000(void);
extern void __thiscall ext_005DA130(void* self, uint32_t value);
extern void __thiscall ext_0065C640(void* self);
extern void __thiscall ext_0065C650(void* self);

void __thiscall fn_005DC270(void* self, uint32_t value) {
    uint8_t* globalObj = reinterpret_cast<uint8_t*>(static_cast<uintptr_t>(static_cast<uint32_t>(ext_00594000())));
    void** slot258 = reinterpret_cast<void**>(globalObj + 0x258);
    void* lockTarget = *slot258;
    using GetLockFn = void* (__thiscall*)(void*);
    void* lock = (*reinterpret_cast<GetLockFn**>(lockTarget))[0x1d8 / 4](lockTarget);

    ext_0065C640(lock);
    lift_field<uint32_t>(self, 0x24) = value;
    ext_005DA130(lift_field<void*>(self, 0x44), value);
    ext_00493EE0(slot258);
    ext_0065C650(lock);
}
} // namespace lift_005DC270
