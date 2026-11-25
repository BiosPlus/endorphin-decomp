// Lifted C++ translation unit: lifted/leaf/decompiled_540000.cpp
#include "lift_compat.h"
#include <new>
#include <string>

#include <string>
namespace lift_005478B0 {
// @name sub_005478B0
// @summary Auto-lifted identical-shape clone of 0x00611160 (readFloatAtIndex3).
namespace lift_00611160 {
// Known callee 0x005B11E0: getFloatAt (Returns a float from a 32-bit float array at offset +0x10 indexed by the argument)
extern float ext_005B11E0(uint32_t ecx, uint32_t index);

// @name readFloatAtIndex3
// @summary Returns element 3 of the float array held by the sub-object at this+0x08.
// @field Unknown +0x08 uint32_t field_0x08
float fn_005478B0(uint32_t ecx) {
    return ext_005B11E0(ecx + 0x210u, 5u);
}
} // namespace lift_00611160
} // namespace lift_005478B0
#include <cstdint>
#include <cstdlib>

// [0x005478C0] sub_005478C0 (14 bytes)
namespace lift_005478C0 {
// @name sub_005478C0
// @summary Auto-lifted identical-shape clone of 0x00611160 (readFloatAtIndex3).
namespace lift_00611160 {
// Known callee 0x005B11E0: getFloatAt (Returns a float from a 32-bit float array at offset +0x10 indexed by the argument)
extern float ext_005B11E0(uint32_t ecx, uint32_t index);

// @name readFloatAtIndex3
// @summary Returns element 3 of the float array held by the sub-object at this+0x08.
// @field Unknown +0x08 uint32_t field_0x08
float fn_005478C0(uint32_t ecx) {
    return ext_005B11E0(ecx + 0x210u, 3u);
}
} // namespace lift_00611160
} // namespace lift_005478C0

// [0x005478D0] sub_005478D0 (14 bytes)
namespace lift_005478D0 {
// @name sub_005478D0
// @summary Auto-lifted identical-shape clone of 0x00611160 (readFloatAtIndex3).
namespace lift_00611160 {
// Known callee 0x005B11E0: getFloatAt (Returns a float from a 32-bit float array at offset +0x10 indexed by the argument)
extern float ext_005B11E0(uint32_t ecx, uint32_t index);

// @name readFloatAtIndex3
// @summary Returns element 3 of the float array held by the sub-object at this+0x08.
// @field Unknown +0x08 uint32_t field_0x08
float fn_005478D0(uint32_t ecx) {
    return ext_005B11E0(ecx + 0x210u, 4u);
}
} // namespace lift_00611160
} // namespace lift_005478D0

// [0x00543530] sub_00543530 (21 bytes)
namespace lift_00543530 {
// @name VTableDispatch::ClearFlagsAndTailCallSlot16
// @class VTableDispatch
// @summary Sets the byte flags at +0x90 to 1 and +0x93 to 0, then tail-jumps through vtable slot at byte offset 0x40 (index 16) with the same this pointer.
// @field VTableDispatch +0x00 uint32_t vtable_ptr // object's vtable pointer (dereferenced via [ecx])
// @field VTableDispatch +0x90 uint8_t flag_0x90
// @field VTableDispatch +0x93 uint8_t flag_0x93
uint32_t fn_00543530(void* self) {
    // mov eax,[ecx]            ; eax = vtable
    const uint32_t vtable = lift_field<uint32_t>(self, 0x00);
    // mov byte [ecx+0x90],1
    lift_field<uint8_t>(self, 0x90) = 1;
    // mov byte [ecx+0x93],0
    lift_field<uint8_t>(self, 0x93) = 0;
    // mov eax,[eax+0x40]       ; eax = vtable[16]
    const uint32_t target = lift_field<uint32_t>(reinterpret_cast<const void*>(static_cast<uintptr_t>(vtable)), 0x40);
    // jmp eax                  ; tail call (modelled as call + return of its result)
    using Thiscall = uint32_t (*)(void*);
    return reinterpret_cast<Thiscall>(static_cast<uintptr_t>(target))(self);
}
} // namespace lift_00543530

// [0x00543580] sub_00543580 (21 bytes)
namespace lift_00543580 {
// @name sub_00543580
// @summary Auto-lifted identical-shape clone of 0x00543530 (VTableDispatch::ClearFlagsAndTailCallSlot16).
namespace lift_00543530 {
// @name VTableDispatch::ClearFlagsAndTailCallSlot16
// @class VTableDispatch
// @summary Sets the byte flags at +0x90 to 1 and +0x93 to 0, then tail-jumps through vtable slot at byte offset 0x40 (index 16) with the same this pointer.
// @field VTableDispatch +0x00 uint32_t vtable_ptr // object's vtable pointer (dereferenced via [ecx])
// @field VTableDispatch +0x90 uint8_t flag_0x90
// @field VTableDispatch +0x93 uint8_t flag_0x93
uint32_t fn_00543580(void* self) {
    // mov eax,[ecx]            ; eax = vtable
    const uint32_t vtable = lift_field<uint32_t>(self, 0x00);
    // mov byte [ecx+0x90],1
    lift_field<uint8_t>(self, 0x91) = 1;
    // mov byte [ecx+0x93],0
    lift_field<uint8_t>(self, 0x94) = 0;
    // mov eax,[eax+0x40]       ; eax = vtable[16]
    const uint32_t target = lift_field<uint32_t>(reinterpret_cast<const void*>(static_cast<uintptr_t>(vtable)), 0x4C);
    // jmp eax                  ; tail call (modelled as call + return of its result)
    using Thiscall = uint32_t (*)(void*);
    return reinterpret_cast<Thiscall>(static_cast<uintptr_t>(target))(self);
}
} // namespace lift_00543530
} // namespace lift_00543580

// [0x005435D0] sub_005435D0 (21 bytes)
namespace lift_005435D0 {
// @name sub_005435D0
// @summary Auto-lifted identical-shape clone of 0x00543530 (VTableDispatch::ClearFlagsAndTailCallSlot16).
namespace lift_00543530 {
// @name VTableDispatch::ClearFlagsAndTailCallSlot16
// @class VTableDispatch
// @summary Sets the byte flags at +0x90 to 1 and +0x93 to 0, then tail-jumps through vtable slot at byte offset 0x40 (index 16) with the same this pointer.
// @field VTableDispatch +0x00 uint32_t vtable_ptr // object's vtable pointer (dereferenced via [ecx])
// @field VTableDispatch +0x90 uint8_t flag_0x90
// @field VTableDispatch +0x93 uint8_t flag_0x93
uint32_t fn_005435D0(void* self) {
    // mov eax,[ecx]            ; eax = vtable
    const uint32_t vtable = lift_field<uint32_t>(self, 0x00);
    // mov byte [ecx+0x90],1
    lift_field<uint8_t>(self, 0x92) = 1;
    // mov byte [ecx+0x93],0
    lift_field<uint8_t>(self, 0x95) = 0;
    // mov eax,[eax+0x40]       ; eax = vtable[16]
    const uint32_t target = lift_field<uint32_t>(reinterpret_cast<const void*>(static_cast<uintptr_t>(vtable)), 0x54);
    // jmp eax                  ; tail call (modelled as call + return of its result)
    using Thiscall = uint32_t (*)(void*);
    return reinterpret_cast<Thiscall>(static_cast<uintptr_t>(target))(self);
}
} // namespace lift_00543530
} // namespace lift_005435D0

// [0x00540D00] sub_00540D00 (24 bytes)
namespace lift_00540D00 {
// Virtual slot 7 (vtable offset 0x1C) on a child object, called thiscall with no extra args.
typedef DWORD(__thiscall* ChildSlot7Fn)(void* self);

// @name Unknown::ForwardToIndexedChildSlot7
// @class Unknown
// @summary Picks child [self+0x08 + 60*index] where index = [self+0xF8], then tail-forwards the call to that child's vtable slot 7 and returns its result.
// @field Unknown +0x08 void* field_0x08 (child pointer table base; element i at +0x08 + 60*i)
// @field Unknown +0xF8 DWORD field_0xF8 (element index)
DWORD fn_00540D00(void* self) {
    // edx = index * 15; address = self + 4*edx + 8 = self + 8 + 60*index
    DWORD index = lift_field<DWORD>(self, 0xF8);
    DWORD slotOffset = index * 60u + 8u;
    void* child = lift_field<void*>(self, static_cast<ptrdiff_t>(slotOffset));

    // vtable = *child; target = vtable[7] (offset 0x1C)
    void** vtable = *reinterpret_cast<void***>(child);
    ChildSlot7Fn target = reinterpret_cast<ChildSlot7Fn>(vtable[7]);

    return target(child);
}
} // namespace lift_00540D00

// [0x005434C0]
namespace lift_005434C0 {
// @name sub_005434C0
// @summary Returns 1 if this->field_0x88 is null; otherwise tail-dispatches vtable slot 8 (+0x20) on the object at field_0x88 and returns its result.
// @field Unknown +0x88 ptr field_0x88 (pointer to child object; owner class not identified)

uint8_t sub_005434C0(void* self) {
    auto* child = lift_field<unsigned char*>(self, 0x88);
    if (child == nullptr) {
        return 1;
    }
    using VSlot8Fn = uint8_t (__thiscall*)(void*);
    auto* vtable = *reinterpret_cast<void***>(child);
    auto fn = reinterpret_cast<VSlot8Fn>(vtable[8]);
    return fn(child);
}
} // namespace lift_005434C0

// [0x00548240] sub_00548240 (27 bytes)
namespace lift_00548240 {
// Known callee 0x005B11E0: getFloatAt (Returns a float from a 32-bit float array at offset +0x10 indexed by the argument)
extern float ext_005B11E0(void* self, uint32_t index);

// @name sub_00548240
// @class <unknown>
// @summary Returns 1.0f if this+0xA0 is null; otherwise returns ext_005B11E0(this+0xA0+0x210, 5), i.e. element 5 of the float array of the sub-object at +0xA0.
// @field <unknown> +0xA0 void* field_0xa0
float fn_00548240(void* self) {
    void* child = lift_field<void*>(self, 0xa0);
    if (child == nullptr) {
        return 1.0f;
    }
    void* sub = static_cast<char*>(child) + 0x210;
    return ext_005B11E0(sub, 5);
}
} // namespace lift_00548240

// [0x005481C0] Unknown::GetFloatFromChildOrDouble (31 bytes)
namespace lift_005481C0 {
// Callee: sub_005B11E0 (getFloatAt) — float __thiscall(this, uint32_t index)
float ext_005B11E0(void* self, uint32_t index);

// @name Unknown::GetFloatFromChildOrDouble
// @class Unknown
// @summary If the pointer at +0xA0 is set, return child float [3] (child at +0x210); otherwise return the double at +0xD0.
// @field Unknown +0xA0 void* field_0xA0
// @field Unknown +0xD0 double field_0xD0
double fn_005481C0(void* self) {
    void* child = lift_field<void*>(self, 0xA0);
    if (child != nullptr) {
        void* sub = reinterpret_cast<uint8_t*>(child) + 0x210;
        return static_cast<double>(ext_005B11E0(sub, 3));
    }
    return lift_field<double>(self, 0xD0);
}
} // namespace lift_005481C0

// [0x00540E10] sub_00540E10 (34 bytes)
namespace lift_00540E10 {
extern void ext_00548110(int32_t height, int32_t width);

// @name Unknown::setValueAndNotifyExtent
// @class Unknown
// @summary Stores the argument at self+0; if it is nonzero, passes the (bottom-top, right-left) extent of the 16-byte block at self+4..self+0x10 to ext_00548110.
// @field Unknown +0x00 int32_t field_0x00
// @field Unknown +0x04 int32_t field_0x04
// @field Unknown +0x08 int32_t field_0x08
// @field Unknown +0x0C int32_t field_0x0C
// @field Unknown +0x10 int32_t field_0x10
void fn_00540E10(void* self, int32_t value) {
    lift_field<int32_t>(self, 0x00) = value;
    if (value != 0) {
        const int32_t width  = lift_field<int32_t>(self, 0x10) - lift_field<int32_t>(self, 0x08);
        const int32_t height = lift_field<int32_t>(self, 0x0C) - lift_field<int32_t>(self, 0x04);
        ext_00548110(height, width);
    }
}
} // namespace lift_00540E10

// [0x005498E0]
namespace lift_005498E0 {
// @name QuadricRenderer::destroy
// @class QuadricRenderer
// @summary Destroys two GLU quadrics and delegates to base destructor.
// @field QuadricRenderer +0x00 void* vftable
// @field QuadricRenderer +0x18 void* quadric1
// @field QuadricRenderer +0x1C void* quadric2


extern uint8_t mem_00956CE4[];
extern void __stdcall ext_0063E006(void* quad);
extern void __fastcall ext_00552850(void* self);

extern void __fastcall fn_005498E0(void* self) {
    uint8_t* obj = static_cast<uint8_t*>(self);
    void* quad1 = *reinterpret_cast<void**>(obj + 0x18);
    *reinterpret_cast<void**>(obj + 0x0) = mem_00956CE4;
    ext_0063E006(quad1);
    void* quad2 = *reinterpret_cast<void**>(obj + 0x1C);
    ext_0063E006(quad2);
    ext_00552850(self);
}
} // namespace lift_005498E0

// [0x00543550] sub_00543550 (40 bytes)
namespace lift_00543550 {
// @name forwardVtableSlot17AndClearFlags
// @class <ClassName> (unknown; no class context recovered)
// @summary Forwards two stack args to virtual slot 17 (vtable+0x44) on self, then clears the byte flags at self+0x90 and self+0x93.
// @field <ClassName> +0x90 uint8_t field_0x90
// @field <ClassName> +0x93 uint8_t field_0x93
void fn_00543550(void* self, uint32_t arg0, uint32_t arg1) {
    // Virtual call: vtable slot 17 (byte offset 0x44), thiscall with (arg0, arg1); callee cleans the stack.
    // Slot is addressed by byte offset (0x44) so it is correct on both 32- and 64-bit hosts.
    uint8_t* vtable = *reinterpret_cast<uint8_t**>(self);
    using VSlot17 = void(__thiscall*)(void*, uint32_t, uint32_t);
    auto slot17 = *reinterpret_cast<VSlot17*>(vtable + 0x44);
    slot17(self, arg0, arg1);

    lift_field<uint8_t>(self, 0x90) = 0;
    lift_field<uint8_t>(self, 0x93) = 0;
}
} // namespace lift_00543550

// [0x005435F0] sub_005435F0 (40 bytes)
namespace lift_005435F0 {
// @name UnknownClass::forwardVirtual58AndClearFlags
// @class UnknownClass
// @summary Forwards two args to virtual slot +0x58 on self, then clears byte flags at +0x92 and +0x95.
// @field UnknownClass +0x92 uint8_t field_0x92
// @field UnknownClass +0x95 uint8_t field_0x95

using VirtualSlot58Fn = void (__thiscall*)(void* self, uint32_t a, uint32_t b);

void fn_005435F0(void* self, uint32_t a, uint32_t b) {
    void* vtable = lift_field<void*>(self, 0);
    void* slot58 = lift_field<void*>(vtable, 0x58);
    reinterpret_cast<VirtualSlot58Fn>(slot58)(self, a, b);
    lift_field<uint8_t>(self, 0x92) = 0;
    lift_field<uint8_t>(self, 0x95) = 0;
}
} // namespace lift_005435F0

// [0x005435A0] sub_005435A0 (40 bytes)
namespace lift_005435A0 {
extern uint32_t mem_read32(uint32_t addr);
extern void mem_write8(uint32_t addr, uint8_t value);

// @name Object::dispatchVirtualSlot14AndClearFlags
// @summary Calls virtual slot 0x50 on this with two stack arguments, then clears the byte flags at +0x91 and +0x94.
// @field Object +0x00 void** vtable
// @field Object +0x91 uint8_t field_0x91
// @field Object +0x94 uint8_t field_0x94
void __thiscall fn_005435A0(uint32_t self, uint32_t a1, uint32_t a2) {
    uint32_t vtable = mem_read32(self);
    uint32_t fn_ptr = mem_read32(vtable + 0x50);
    using VMethod = void(__thiscall*)(uint32_t, uint32_t, uint32_t);
    reinterpret_cast<VMethod>(static_cast<uintptr_t>(fn_ptr))(self, a1, a2);
    mem_write8(self + 0x91, 0);
    mem_write8(self + 0x94, 0);
}
} // namespace lift_005435A0

// [0x00547E80]
namespace lift_00547E80 {
// @name Object::copyVec3IfFlagClearAndNotify
// @class Object
// @summary If field_0xa0 is zero, copies a 3-float vector from the argument into fields 0x68..0x70 and invokes vtable slot 17 on self.
// @field Object +0x68 float field_0x68
// @field Object +0x6c float field_0x6c
// @field Object +0x70 float field_0x70
// @field Object +0xa0 uint32_t field_0xa0


void __thiscall fn_00547E80(void* self, const float* src) {
    if (lift_field<uint32_t>(self, 0xA0) != 0) {
        return;
    }

    lift_field<float>(self, 0x68) = src[0];
    lift_field<float>(self, 0x6C) = src[1];
    lift_field<float>(self, 0x70) = src[2];

    void** vtable = *reinterpret_cast<void***>(self);
    using Slot17Fn = void(__thiscall*)(void*);
    auto slot17 = reinterpret_cast<Slot17Fn>(vtable[0x44 / 4]);
    slot17(self);
}
} // namespace lift_00547E80

// [0x0054F1B0]
namespace lift_0054F1B0 {
extern void ext_0054F030(uint8_t* self, uint32_t arg);

// @name constructRange_0054F1B0
// @summary Invokes sub_0054F030 on each 0x68-byte element in [begin, end) with arg.
void sub_0054F1B0(uint8_t* begin, uint8_t* end, uint32_t arg) {
    for (uint8_t* cur = begin; cur != end; cur += 0x68) {
        ext_0054F030(cur, arg);
    }
}
} // namespace lift_0054F1B0

// [0x0054E3D0] sub_0054E3D0 (42 bytes)
namespace lift_0054E3D0 {
extern float mem_00955D10; // 180.0f
extern float mem_0093F7B8; // -1.0f

// @name initDefaultFloats
// @summary Sets a flag byte and seeds several float fields with default values (0, 180, 1, -1).
// @field <ClassName> +0x04 uint8_t field_0x04
// @field <ClassName> +0x14 float field_0x14
// @field <ClassName> +0x24 float field_0x24
// @field <ClassName> +0x34 float field_0x34
// @field <ClassName> +0x48 float field_0x48
// @field <ClassName> +0x4C float field_0x4C
// @field <ClassName> +0x58 float field_0x58
// @field <ClassName> +0x5C float field_0x5C
void fn_0054E3D0(void* self) {
    auto* base = static_cast<unsigned char*>(self);

    *(base + 0x04) = 1;
    *reinterpret_cast<float*>(base + 0x48) = 0.0f;
    *reinterpret_cast<float*>(base + 0x4C) = mem_00955D10;
    *reinterpret_cast<float*>(base + 0x5C) = 1.0f;
    *reinterpret_cast<float*>(base + 0x14) = 1.0f;
    *reinterpret_cast<float*>(base + 0x58) = mem_0093F7B8;
    *reinterpret_cast<float*>(base + 0x34) = mem_0093F7B8;
    *reinterpret_cast<float*>(base + 0x24) = mem_0093F7B8;
}
} // namespace lift_0054E3D0

// [0x0054F370] sub_0054F370 (41 bytes)
namespace lift_0054F370 {
// @name sub_0054F370
// @summary Auto-lifted identical-shape clone of 0x0044C4D0 (DWORD_RangeCopy_thiscall).
namespace lift_0044C4D0 {
// @name DWORD_RangeCopy_thiscall
// @summary Copies DWORDs from [first, last) to out via ext_0044C2A0 and returns out + count.

extern DWORD* ext_0054F170(const DWORD* first, const DWORD* last, DWORD* out);

DWORD* __thiscall fn_0054F370(void* self, const DWORD* first, const DWORD* last, DWORD* out) {
    (void)self;
    return ext_0054F170(first, last, out);
}
} // namespace lift_0044C4D0
} // namespace lift_0054F370

// [0x00540549]
namespace lift_00540549 {
// @name glSetWireframeNoCull
// @summary Sets OpenGL polygon mode to wireframe, cull face to back, and disables face culling.

extern void glPolygonMode(uint32_t face, uint32_t mode);
extern void glCullFace(uint32_t mode);
extern void glDisable(uint32_t cap);

void sub_00540549() {
    glPolygonMode(0x408u, 0x1B01u); // GL_FRONT_AND_BACK, GL_LINE
    glCullFace(0x405u);             // GL_BACK
    glDisable(0xB44u);              // GL_CULL_FACE
}
} // namespace lift_00540549

// [0x00547B70]
namespace lift_00547B70 {
// @name rotateIfEmptyLabel
// @summary Calls glRotatef(-90.0f, 1.0f, 0.0f, 0.0f) when the string at +0x24 is empty
// @field unknown +0x24 const char* field_0x24


extern void __stdcall ext_glRotatef(float angle, float x, float y, float z);

void __fastcall sub_00547B70(uint8_t* self, uint32_t /*edx*/) {
    const char* str = *reinterpret_cast<const char* const*>(self + 0x24);
    if (*str == '\0') {
        ext_glRotatef(-90.0f, 1.0f, 0.0f, 0.0f);
    }
}
} // namespace lift_00547B70

// [0x00540572]
namespace lift_00540572 {
// @name glSetupDefaultCulling
// @summary Configure default OpenGL polygon fill mode, CCW front face, and back-face culling.

void __stdcall glPolygonMode(uint32_t face, uint32_t mode);
void __stdcall glFrontFace(uint32_t mode);
void __stdcall glCullFace(uint32_t mode);
void __stdcall glEnable(uint32_t cap);

void __stdcall sub_00540572(uint32_t /*unused*/) {
    glPolygonMode(0x0408u, 0x1B02u); // GL_FRONT_AND_BACK, GL_FILL
    glFrontFace(0x0901u);            // GL_CCW
    glCullFace(0x0405u);             // GL_BACK
    glEnable(0x0B44u);               // GL_CULL_FACE
}
} // namespace lift_00540572

// [0x005434F0]
namespace lift_005434F0 {
// @name CUnknown::LatchFlagsAndDispatch
// @class CUnknown
// @summary Latches 0x93..0x95 to 1 when the matching 0x90..0x92 flag bytes are set, then tail-calls virtual slot 15 on this.
// @field CUnknown +0x90 BYTE field_0x90
// @field CUnknown +0x91 BYTE field_0x91
// @field CUnknown +0x92 BYTE field_0x92
// @field CUnknown +0x93 BYTE field_0x93
// @field CUnknown +0x94 BYTE field_0x94
// @field CUnknown +0x95 BYTE field_0x95

typedef DWORD (__thiscall *VirtualSlot15Fn)(void* self);

DWORD __thiscall fn_005434F0(void* self) {
    BYTE al = 1;

    if (lift_field<BYTE>(self, 0x90) != 0) {
        lift_field<BYTE>(self, 0x93) = al;
    }
    if (lift_field<BYTE>(self, 0x91) != 0) {
        lift_field<BYTE>(self, 0x94) = al;
    }
    if (lift_field<BYTE>(self, 0x92) != 0) {
        lift_field<BYTE>(self, 0x95) = al;
    }

    void* vtbl = *reinterpret_cast<void**>(self);
    VirtualSlot15Fn target = reinterpret_cast<VirtualSlot15Fn*>(vtbl)[0x3c / sizeof(void*)];
    return target(self);
}
} // namespace lift_005434F0

// [0x00543E00]
namespace lift_00543E00 {
// @name accumulateClampedFloat
// @summary Adds a float delta to the field at +0x14, clamps low to 0.1f, and resets to 0.1f when above 1.0.
// @field Unknown +0x14 float field_0x14

extern const double mem_0092C508; // .rdata double 0.10000000149011612
extern const float  mem_0093F8EC; // .rdata float 0.1 (u32 0x3DCCCCCD)

// __thiscall: ecx = self, one stack argument (float delta), callee cleans stack (ret 4).
void __thiscall fn_00543E00(void* self, float delta) {
    float& value = lift_field<float>(self, 0x14);

    // x = delta + value, rounded to float and stored back.
    value = delta + value;

    // if (value < 0.1) value = 0.1f;  (unordered falls through to the second check)
    if (static_cast<double>(value) < mem_0092C508) {
        value = mem_0093F8EC;
        return;
    }

    // if (1.0f < value) value = 0.1f;  (NaN/unordered leaves value unchanged)
    if (1.0f < value) {
        value = mem_0093F8EC;
    }
}
} // namespace lift_00543E00

// [0x0054F2C0] sub_0054F2C0 (55 bytes)
namespace lift_0054F2C0 {
extern void ext_0054F1E0(std::uintptr_t a0, std::uint32_t a1, std::uint32_t a2,
                             std::uint32_t a3, std::uint32_t a4, std::uint32_t a5);

// @name ComputeRecordAddress
// @summary Calls helper sub_0054F1E0 with the arguments and a zeroed flag word, then returns base + index * 0x68.
// (no direct struct field accesses in this function)
__stdcall std::uint8_t* fn_0054F2C0(std::uint8_t* base, std::uint32_t index, std::uint32_t arg2) {
    // The original stores 0 into the low byte of a stack slot that previously held ECX,
    // so the dword passed on is ECX with its low byte cleared. ECX at entry is not
    // recoverable from the stdcall signature; it is modelled as a placeholder here.
    std::uint32_t ecx_in = 0;
    std::uint32_t flag_slot = ecx_in & 0xFFFFFF00u;

    ext_0054F1E0(reinterpret_cast<std::uintptr_t>(base), index, arg2, ecx_in, arg2, flag_slot);

    return base + static_cast<std::size_t>(index) * 0x68u;
}
} // namespace lift_0054F2C0

// [0x00540D20]
namespace lift_00540D20 {
// @name StringMatchesKnownTableEntry
// @summary Returns true if the string argument equals any of the 7 const char* entries in the table at mem_00A44BB8.

// IAT slot for MSVCP80 std::operator==(const std::string&, const char*); holds the function address.
extern uint32_t mem_00924FC0;
// Table of 7 const char* pointers (0x00A44BB8 .. 0x00A44BD0 inclusive).
extern uint32_t mem_00A44BB8[7];

static bool ext_string_eq_cstr(const void* str, const char* cstr) {
    auto fn = reinterpret_cast<bool (__cdecl*)(const void*, const char*)>(
        static_cast<uintptr_t>(mem_00924FC0));
    return fn(str, cstr);
}

bool __stdcall sub_00540D20(const void* str) {
    for (size_t i = 0; i < 7; ++i) {
        const char* entry = reinterpret_cast<const char*>(
            static_cast<uintptr_t>(mem_00A44BB8[i]));
        if (ext_string_eq_cstr(str, entry)) {
            return true;
        }
    }
    return false;
}
} // namespace lift_00540D20

// [0x00540DD0] sub_00540DD0 (56 bytes)
namespace lift_00540DD0 {
extern void ext_00548110(int32_t width, int32_t height);

// @name SetRectAndCallSize
// @class Unknown
// @summary If self's flag at +0x00 is nonzero, copies the 4-dword rect src into self+0x04..+0x10 and calls sub_00548110 with (right-left, bottom-top).
// @field Unknown +0x00 int32_t field_0x00
// @field Unknown +0x04 int32_t rectLeft
// @field Unknown +0x08 int32_t rectTop
// @field Unknown +0x0C int32_t rectRight
// @field Unknown +0x10 int32_t rectBottom
void fn_00540DD0(void* self, const int32_t* src) {
    if (lift_field<int32_t>(self, 0x00) == 0) {
        return;
    }

    lift_field<int32_t>(self, 0x04) = src[0];
    lift_field<int32_t>(self, 0x08) = src[1];
    lift_field<int32_t>(self, 0x0C) = src[2];
    lift_field<int32_t>(self, 0x10) = src[3];

    const int32_t width  = lift_field<int32_t>(self, 0x0C) - lift_field<int32_t>(self, 0x04);
    const int32_t height = lift_field<int32_t>(self, 0x10) - lift_field<int32_t>(self, 0x08);
    ext_00548110(width, height);
}
} // namespace lift_00540DD0

// [0x00540510] sub_00540510 (57 bytes)
namespace lift_00540510 {
extern uint32_t mem_0092551C;
extern uint32_t mem_00925428;
extern uint32_t mem_00925418;

using GlPolygonModeFn = void(__stdcall*)(GLenum face, GLenum mode);
using GlCullFaceFn = void(__stdcall*)(GLenum mode);
using GlEnableFn = void(__stdcall*)(GLenum cap);

// @name ApplyFillCullStateIfEnabled
// @summary If the object's enabled byte is set and the argument is 0x1C02, set polygon mode to GL_FILL on both faces, cull back faces, and enable GL_CULL_FACE.
// @field Unknown +0x14 BYTE enabled
void __thiscall fn_00540510(void* self, DWORD arg) {
    if (lift_field<BYTE>(self, 0x14) == 0) {
        return;
    }
    if (arg != 0x1C02) {
        return;
    }

    constexpr GLenum GL_FRONT_AND_BACK = 0x0408;
    constexpr GLenum GL_FILL = 0x1B02;
    constexpr GLenum GL_BACK = 0x0404;
    constexpr GLenum GL_CULL_FACE = 0x0B44;

    reinterpret_cast<GlPolygonModeFn>(static_cast<uintptr_t>(mem_0092551C))(GL_FRONT_AND_BACK, GL_FILL);
    reinterpret_cast<GlCullFaceFn>(static_cast<uintptr_t>(mem_00925428))(GL_BACK);
    reinterpret_cast<GlEnableFn>(static_cast<uintptr_t>(mem_00925418))(GL_CULL_FACE);
}
} // namespace lift_00540510

// [0x0054EFF0] sub_0054EFF0 (60 bytes)
namespace lift_0054EFF0 {
extern void ext_invalid_parameter_noinfo(void); // MSVCR80 _invalid_parameter_noinfo (IAT slot 0x00925134)

// @name sub_0054EFF0
// @class <unknown>
// @summary Returns the address of element [index] in a contiguous array of 104-byte (0x68) records bounded by this+0x1c (begin) and this+0x20 (end); invalid-parameter handler on null begin or out-of-range index.
// @field <unknown> +0x1c uint32_t field_0x1c
// @field <unknown> +0x20 uint32_t field_0x20

namespace {

constexpr uint32_t kElementStride = 0x68;

inline uint32_t read_u32(const void* self, uintptr_t offset) {
    return *reinterpret_cast<const uint32_t*>(static_cast<const uint8_t*>(self) + offset);
}

} // namespace

uint32_t __thiscall fn_0054EFF0(void* self, uint32_t index) {
    const uint32_t begin = read_u32(self, 0x1c);
    if (begin == 0) {
        ext_invalid_parameter_noinfo();
    }

    const uint32_t end = read_u32(self, 0x20);
    const int32_t byte_span = static_cast<int32_t>(end - begin);
    const uint32_t count = static_cast<uint32_t>(byte_span / static_cast<int32_t>(kElementStride));
    if (index >= count) {
        ext_invalid_parameter_noinfo();
    }

    return begin + index * kElementStride;
}
} // namespace lift_0054EFF0

// [0x0054F0D0] sub_0054F0D0 (73 bytes)
namespace lift_0054F0D0 {
// ext_0054F030 (sub_0054F030): per-element copy; ECX = destination element,
// one stack argument = source element (callee cleans the stack).
extern void ext_0054F030(void* dest_elem, const void* src_elem);

// @name CopyRangeOf104ByteElements_0054F0D0
// @summary Invokes the per-element copy routine over [begin, end) in 0x68-byte steps, writing to dest; returns dest + count*0x68.
void* fn_0054F0D0(const uint8_t* begin, const uint8_t* end, uint8_t* dest) {
    constexpr ptrdiff_t kElemSize = 0x68;

    const ptrdiff_t count = (end - begin) / kElemSize;
    uint8_t* const result = dest + count * kElemSize;

    for (const uint8_t* src = begin; src != end; src += kElemSize) {
        ext_0054F030(dest + (src - begin), src);
    }

    return result;
}
} // namespace lift_0054F0D0

// [0x0054F120] sub_0054F120 (73 bytes)
namespace lift_0054F120 {
extern void ext_0054F030(uint32_t self, uint32_t elem);

// @name Unknown::RelocateRangeBackward_0054F120
// @summary Walks a 104-byte-element range [begin,end) from the back, invoking ext_0054F030 on each element with a destination pointer shifted by (value - end); returns value minus the range size in bytes.
uint32_t fn_0054F120(uint32_t begin, uint32_t end, uint32_t value) {
    constexpr int32_t kElemSize = 0x68; // 104 bytes per element

    // Range size in bytes, truncated to a whole number of elements (signed divide).
    int32_t byteSpan = static_cast<int32_t>(end - begin);
    int32_t wholeBytes = (byteSpan / kElemSize) * kElemSize;
    uint32_t result = value - static_cast<uint32_t>(wholeBytes);

    // Constant displacement from source element to destination slot.
    uint32_t delta = value - end;

    // Visit elements from the last one down to begin.
    for (uint32_t p = end; p != begin;) {
        p -= kElemSize;
        ext_0054F030(p + delta, p);
    }

    return result;
}
} // namespace lift_0054F120

// [0x0054F290] sub_0054F290 (43 bytes)
namespace lift_0054F290 {
// Known callee 0x0054F120: Unknown::RelocateRangeBackward_0054F120 (Walks a 104-byte-element range [begin,end) from the back, invoking ext_0054F030 on each element with a destination pointer shifted by (value - end); returns value minus the range size in bytes.)
extern uint32_t ext_0054F120(uint32_t begin, uint32_t end, uint32_t value);

// @name Unknown::RelocateRangeBackwardWrapper_0054F290
// @summary Forwards its three stack arguments unchanged to RelocateRangeBackward (0x0054F120) and returns that result; the original stack shuffling only reorders copies of the arguments.
uint32_t fn_0054F290(uint32_t begin, uint32_t end, uint32_t value) {
    return ext_0054F120(begin, end, value);
}
} // namespace lift_0054F290

// [0x00547080] sub_00547080 (76 bytes)
namespace lift_00547080 {
// @name Vector4Add_00547080
// @summary Component-wise float addition of two 4-float vectors: out[i] = a[i] + b[i] for i in 0..3.
// Not a member: `a` arrives in ECX (thiscall-style) but the class is unknown, so no @class or @field lines.
void fn_00547080(const float* a, float* out, const float* b) {
    // Read each pair before writing, so out may alias a or b.
    for (int i = 0; i < 4; ++i) {
        const float av = a[i];
        const float bv = b[i];
        out[i] = av + bv;
    }
}
} // namespace lift_00547080

// [0x00545A70]
namespace lift_00545A70 {
// @name Unknown::DestroyMemberThenBase_00545A70
// @class Unknown
// @summary Runs the member-subobject teardown at this+0x9C, then the base teardown on this (MSVC EH-guarded).
// @field Unknown +0x9C unknown field_0x9C

extern void __fastcall ext_005499E0(void* self);
extern void __fastcall ext_00543320(void* self);

extern void __fastcall fn_00545A70(void* self) {
    // Original code installs an SEH frame (state -1 -> 0), calls the member
    // teardown on this+0x9C, then the base teardown on this, and unlinks the frame.
    // Frame setup/unlink is compiler EH bookkeeping and is not representable in portable C++.
    ext_005499E0(static_cast<char*>(self) + 0x9C);
    ext_00543320(self);
}
} // namespace lift_00545A70

// [0x00540130] sub_00540130 (79 bytes)
namespace lift_00540130 {
// Known callee 0x00532B40: Unknown::dtor_00532B40 (Sets vtable to 0x009543E4 and unlinks peer at +0x08 if it points back to this at +0x04.)
extern void __thiscall ext_00532B40(void* self);
// Known callee 0x00543320: sub_00543320 (Stores address of mem_009560E4 into field at offset +0x0.)
extern void __fastcall ext_00543320(void* self);

// @name Unknown::dtor_00540130
// @class Unknown
// @summary Destroys the embedded object at +0x98 and then runs the owner's post-destruction hook sub_00543320.
// @field Unknown +0x98 Unknown field_0x98
void fn_00540130(void* self) {
    ext_00532B40(static_cast<unsigned char*>(self) + 0x98);
    ext_00543320(self);
}
} // namespace lift_00540130

// [0x00544BE0] sub_00544BE0 (79 bytes)
namespace lift_00544BE0 {
extern void __fastcall ext_00549920(void* self);
// Known callee 0x00543320: sub_00543320 (Stores address of mem_009560E4 into field at offset +0x0.)
extern void __fastcall ext_00543320(void* self);

// @name ResetSubobjectAndFinalize_00544BE0
// @summary Calls the helper on the subobject at this+0x98 with state 0, then calls the helper on this with state -1.
// @field ResetSubobjectAndFinalize_00544BE0 +0x98 uint8_t field_0x98
void fn_00544BE0(void* self) {
    // Original code wraps the two calls in an MSVC SEH frame (state 0 / -1
    // bookkeeping). That frame only exists for unwinding and has no effect on
    // the portable behavior, so it is omitted here.
    ext_00549920(&lift_field<uint8_t>(self, 0x98));
    ext_00543320(self);
}
} // namespace lift_00544BE0

// [0x005457B0] sub_005457B0 (85 bytes)
namespace lift_005457B0 {
extern void __fastcall ext_00537E70(void* self);
extern void __fastcall fn_00543320(void* self);

// @name Unknown::construct_005457B0
// @class Unknown
// @summary Sets the object's vtable word, constructs the embedded subobject at +0x9C, then runs the lifted initializer fn_00543320 on self.
// @field Unknown +0x00 void* vtable_or_ptr
// @field Unknown +0x9C BYTE field_0x9c
void fn_005457B0(void* self) {
    // Vtable word for this class (0x956944); no symbol is recovered for it.
    lift_field<uintptr_t>(self, 0x00) = static_cast<uintptr_t>(0x00956944u);

    // Construct the embedded subobject at self+0x9C.
    ext_00537E70(static_cast<uint8_t*>(self) + 0x9C);

    // Final initialization of self (overwrites +0x00 with &mem_009560E4).
    fn_00543320(self);
}
} // namespace lift_005457B0

// [0x00549980]
namespace lift_00549980 {
// @name GraphicQuadricObject::GraphicQuadricObject
// @class GraphicQuadricObject
// @summary Initializes a graphic object with vtable 0x956d14, unit scale/color floats, flag 4, and two GLU quadric objects.
// @field GraphicQuadricObject +0x00 uint32_t vtable
// @field GraphicQuadricObject +0x14 uint32_t field_0x14
// @field GraphicQuadricObject +0x18 float field_0x18
// @field GraphicQuadricObject +0x1c float field_0x1c
// @field GraphicQuadricObject +0x20 float field_0x20
// @field GraphicQuadricObject +0x24 void* field_0x24
// @field GraphicQuadricObject +0x28 void* field_0x28


extern void* ext_005528E0(void* self);
extern void* ext_0063E000(void);
extern void ext_0063E00C(void* quadric, uint32_t normals);
extern void ext_0063E012(void* quadric, uint32_t drawStyle);

void* fn_00549980(void* self) {
    ext_005528E0(self);

    uint8_t* base = static_cast<uint8_t*>(self);
    *reinterpret_cast<uint32_t*>(base + 0x00) = 0x00956D14u;
    *reinterpret_cast<float*>(base + 0x18) = 1.0f;
    *reinterpret_cast<float*>(base + 0x1C) = 1.0f;
    *reinterpret_cast<float*>(base + 0x20) = 1.0f;
    *reinterpret_cast<uint32_t*>(base + 0x14) = 4u;

    void* quadric1 = ext_0063E000();
    *reinterpret_cast<void**>(base + 0x24) = quadric1;
    ext_0063E012(quadric1, 0x000186ADu);

    void* quadric2 = ext_0063E000();
    *reinterpret_cast<void**>(base + 0x28) = quadric2;
    ext_0063E012(quadric2, 0x000186ACu);
    ext_0063E00C(quadric2, 0x000186A0u);

    return self;
}
} // namespace lift_00549980

// [0x0054FCB0] sub_0054FCB0 (90 bytes)
namespace lift_0054FCB0 {
// Known callee 0x0066A760: sub_0066A760 (Auto-lifted identical-shape clone of 0x0046FAC0 (sub_0046FAC0).)
extern void ext_0066A760(void* self);
extern int mem_00924FF4;

// @name Unknown::destroyMembers
// @class Unknown
// @summary Resets the vtable slot, tears down the sub-object at +0x820, then destroys the std::string at +0x804.
// @field Unknown +0x000 uint32_t field_0x00
// @field Unknown +0x804 std::string field_0x804
// @field Unknown +0x820 void* field_0x820
void fn_0054FCB0(void* self) {
    std::uint8_t* base = static_cast<std::uint8_t*>(self);

    // Vtable pointer reset to 0x009570A4.
    *reinterpret_cast<std::uint32_t*>(base) = 0x009570A4u;

    // Sub-object at +0x820 (callee 0x0066A760).
    ext_0066A760(base + 0x820);

    // std::string destructor at +0x804; the destructor address is stored in mem_00924FF4.
    using StrDtor = void (*)(void*);
    auto dtor = reinterpret_cast<StrDtor>(static_cast<std::uintptr_t>(mem_00924FF4));
    if (dtor) {
        dtor(base + 0x804);
    }
}
} // namespace lift_0054FCB0

// [0x005404B0]
namespace lift_005404B0 {
// @name CopyFloat14
// @summary Copies a 14-float (56-byte) block from src into self and returns self.
void* fn_005404B0(void* self, const void* src) {
    std::memcpy(self, src, 14 * sizeof(float));
    return self;
}
} // namespace lift_005404B0

// [0x005432A0] sub_005432A0 (91 bytes)
namespace lift_005432A0 {
// Known callee 0x005434E0: sub_005434E0 (13B). Thiscall-style: ecx = element, one stack argument.
extern void ext_005434E0(void* self, void* arg);

// @name Unknown::callOnEachElement
// @class Unknown
// @summary Walks the pointer range [begin, end) of this container and calls ext_005434E0 on each element, forwarding the single argument; aborts if the range is inverted.
// @field Unknown +0x08 void** begin
// @field Unknown +0x0C void** end
void fn_005432A0(void* self, void* arg) {
    void** const begin = lift_field<void**>(self, 0x08);
    void** const end   = lift_field<void**>(self, 0x0C);

    // Original code calls _invalid_parameter_noinfo (ebp) when begin > end.
    if (begin > end) {
        std::abort();
    }

    for (void** it = begin; it != end; ++it) {
        ext_005434E0(*it, arg);
    }
}
} // namespace lift_005432A0

// [0x0054A0E0] sub_0054A0E0 (91 bytes)
namespace lift_0054A0E0 {
// Known callee 0x00532B40: Unknown::dtor_00532B40 (sets vtable to 0x009543E4 and unlinks peer at +0x08 if it points back to this at +0x04.)
extern void ext_00532B40(void* self);
// Known callee 0x00552850: sub_00552850 (stores address of mem_00957534 into field at offset +0x0.)
extern void ext_00552850(void* self);
// Known callee 0x0063E006: thunk_GLU32_gluDeleteQuadric (IAT jump thunk forwarding to GLU32!gluDeleteQuadric.)
extern void ext_0063E006(void* quadric);

// Vtable of this class.
extern int mem_00956D34;

// @name Unknown::dtor_0054A0E0
// @class Unknown
// @summary Destructor: installs vtable, deletes the GLU quadric at +0x18, tears down subobject at +0x1c, then calls sub_00552850.
// @field Unknown +0x00 void* vtable
// @field Unknown +0x18 void* quadric
void fn_0054A0E0(void* self) {
    lift_field<const void*>(self, 0x00) = &mem_00956D34;
    ext_0063E006(lift_field<void*>(self, 0x18));
    ext_00532B40(static_cast<uint8_t*>(self) + 0x1c);
    ext_00552850(self);
}
} // namespace lift_0054A0E0

// [0x00547E50] sub_00547E50 (41 bytes)
namespace lift_00547E50 {
// Known callee 0x005D9EF0: CObject::InitTimerFloor (If the flag at +0x1f1 is clear, forward a global value through a helper and a virtual call on the object at +0x04, then store the float constant 5.0 at +0x1f4.)
extern void ext_005D9EF0(void* self);
// Known callee 0x005404B0: CopyFloat14 (Copies a 14-float (56-byte) block from src into self and returns self.)
extern void* ext_005404B0(void* self, const void* src);

// @name Unknown::initOrCopyBlock
// @class Unknown
// @summary If the pointer at +0xa0 is set, forward to InitTimerFloor on it; otherwise copy the 56-byte block at +0x30 into +0x68 and tail-call the object's vtable slot 0x44.
// @field Unknown +0x00 void* vtable
// @field Unknown +0x30 float block_0x30[14]
// @field Unknown +0x68 float block_0x68[14]
// @field Unknown +0xa0 void* field_0xa0
void fn_00547E50(void* self) {
    void* timer = lift_field<void*>(self, 0xa0);
    if (timer != nullptr) {
        ext_005D9EF0(timer);
        return;
    }

    const void* src = reinterpret_cast<const uint8_t*>(self) + 0x30;
    void* dst = reinterpret_cast<uint8_t*>(self) + 0x68;
    ext_005404B0(dst, src);

    void* vtbl = lift_field<void*>(self, 0);
    void* slot = lift_field<void*>(vtbl, 0x44);
    reinterpret_cast<void (*)(void*)>(slot)(self);
}
} // namespace lift_00547E50

// [0x00546570]
namespace lift_00546570 {
// @name Vec4::operator!=
// @class Vec4
// @summary Compares two 4-float vectors for inequality
// @field Vec4 +0x00 float field_0x00
// @field Vec4 +0x04 float field_0x04
// @field Vec4 +0x08 float field_0x08
// @field Vec4 +0x0c float field_0x0c


bool __thiscall sub_00546570(const float* self, const float* other) {
    return !(self[0] == other[0] &&
             self[1] == other[1] &&
             self[2] == other[2] &&
             self[3] == other[3]);
}
} // namespace lift_00546570

// [0x00545C40] sub_00545C40 (94 bytes)
namespace lift_00545C40 {
// @name Unknown::fillFloat4FromQuery
// @class Unknown
// @summary Writes 1.0 to a 4-float output array, calls vtable slot 0x28 on the object at this+0x88 to get an int code, then fills the array with value (code 1), with value at out[0..1] (code 2 and index 0 or 1), or with value at out[index] otherwise.
// @field Unknown +0x88 void* field_0x88
void fn_00545C40(void* self, float* out, int32_t index, float value) {
    void* obj = lift_field<void*>(self, 0x88);

    // Vtable slot at byte offset 0x28 (thiscall, no stack args, returns int).
    const auto vtableAddr = static_cast<uintptr_t>(lift_field<uint32_t>(obj, 0x0));
    const auto target = lift_field<uint32_t>(reinterpret_cast<void*>(vtableAddr), 0x28);
    using QueryFn = int32_t(__thiscall*)(void* self);
    auto query = reinterpret_cast<QueryFn>(static_cast<uintptr_t>(target));

    out[0] = 1.0f;
    out[1] = 1.0f;
    out[2] = 1.0f;
    out[3] = 1.0f;

    const int32_t code = query(obj);

    if (code == 1) {
        out[0] = value;
        out[1] = value;
        out[2] = value;
        return;
    }

    if (code == 2 && (index == 0 || index == 1)) {
        out[0] = value;
        out[1] = value;
        return;
    }

    out[index] = value;
}
} // namespace lift_00545C40

// [0x0054C700] sub_0054C700 (94 bytes)
namespace lift_0054C700 {
// Imported MSVCP80 std::basic_string<char> members (called through the IAT in the original).
extern void ext_MSVCP80_basic_string_ctor(void* str);
extern void ext_MSVCP80_basic_string_assign_cstr(void* str, const char* s);

// .rdata string literal passed to basic_string::operator=(const char*).
extern const char mem_0092C520[];

// @name Unknown::InitWithStringLiteral
// @class Unknown
// @summary Constructs the object: sets vtable, stores length 14 at +0x4, and assigns a literal string to the embedded std::string at +0x8; returns this.
// @field Unknown +0x00 uint32_t vftable
// @field Unknown +0x04 int32_t field_0x04
// @field Unknown +0x08 void* field_0x08
//
// The original wraps the body in an MSVC SEH frame (fs:[0] push/pop, -1 try-state)
// used only for unwinding if the string constructor throws; that is compiler
// scaffolding and is not reproduced here.
void* fn_0054C700(void* self) {
    void* str = static_cast<uint8_t*>(self) + 0x08;            // embedded std::string (ecx = this+8)
    lift_field<uint32_t>(self, 0x00) = 0x956DFC;               // vftable
    ext_MSVCP80_basic_string_ctor(str);
    lift_field<int32_t>(self, 0x04) = 0x0E;                    // stored length/state
    ext_MSVCP80_basic_string_assign_cstr(str, mem_0092C520);
    return self;                                               // mov eax, esi
}
} // namespace lift_0054C700

// [0x005450C0] sub_005450C0 (95 bytes)
namespace lift_005450C0 {
// Known callee 0x00549920: unlisted helper, destroys the subobject at this+0xB8.
extern void __fastcall ext_00549920(void* self);
// Known callee 0x005498E0: QuadricRenderer::destroy (Destroys two GLU quadrics and delegates to base destructor.)
extern void __fastcall ext_005498E0(void* self);
// Known callee 0x00543320: sub_00543320 (Stores address of mem_009560E4 into field at offset +0x0.)
extern void __fastcall ext_00543320(void* self);

// @name RotateTool::~RotateTool
// @class RotateTool
// @summary Non-deleting destructor body: destroys the subobject at +0xB8, destroys the QuadricRenderer at +0x98, then resets the object's vtable pointer at +0x0.
// @field RotateTool +0x98 QuadricRenderer quadricRenderer
// @field RotateTool +0xB8 unknown field_0xB8
void fn_005450C0(void* self) {
    // Teardown order matches the original: +0xB8 first, then +0x98, then +0x0.
    ext_00549920(static_cast<uint8_t*>(self) + 0xB8);
    ext_005498E0(static_cast<uint8_t*>(self) + 0x98);
    ext_00543320(self);
}
} // namespace lift_005450C0
