// Lifted C++ translation unit: lifted/leaf/decompiled_6D0000.cpp
#include "lift_compat.h"
extern "C" void __fastcall ext_006D7B50(void* self);
extern "C" void __cdecl ext_006A5C5C(void* ptr);
extern "C" void __fastcall ext_006D7DB0(void* self);
#include <cstring>

// [0x006D7B30] sub_006D7B30 (32 bytes)
// @name sub_006D7B30
// @summary MSVC scalar deleting destructor: calls sub_006D7B50 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_006D7B30(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_006D7B50(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x006D7D90] sub_006D7D90 (32 bytes)
// @name sub_006D7D90
// @summary MSVC scalar deleting destructor: calls sub_006D7DB0 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_006D7D90(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_006D7DB0(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x006D2CA0] sub_006D2CA0 (12 bytes)
namespace lift_006D2CA0 {
extern uint32_t ext_006A6C87(uint32_t arg);
extern int mem_006D2CB0;

// @name forwardMem006D2CB0_006D2CA0
// @summary Pushes the address of mem_006D2CB0 as a single cdecl argument, calls sub_006A6C87, and returns its result unchanged.
uint32_t fn_006D2CA0() {
    const uint32_t arg = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(&mem_006D2CB0));
    return ext_006A6C87(arg);
}
} // namespace lift_006D2CA0

// [0x006D208C] sub_006D208C (15 bytes)
namespace lift_006D208C {
// @name DataTable_006D208C
// @summary 15-byte constant table (values 0x00,0x04,0x01,0x02); bytes decode as nonsense x86, so this is data, not code
// NOTE: this range is not a function; the disassembly is data. No calling code was verified.
static const unsigned char kTable_006D208C[15] = {
    0x00, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x01, 0x04, 0x02, 0x04, 0x04, 0x04, 0x04,
};

void fn_006D208C(void* self) {
    (void)self;
    (void)kTable_006D208C;
}
} // namespace lift_006D208C

// [0x006D2064] sub_006D2064 (20 bytes)
namespace lift_006D2064 {
// @name DataTable_006D2064
// @summary 20-byte constant table (00, ten 04s, 01, 04, 02, 04, 04, 04, 03, 8B, FF); the trailing 8B FF is the start of a mov edi,edi prologue, so this is data, not code
// NOTE: this range is not a function; the disassembly is data. No calling code was verified.
static const unsigned char kTable_006D2064[20] = {
    0x00, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04,
    0x01, 0x04, 0x02, 0x04, 0x04, 0x04, 0x03, 0x8B, 0xFF,
};

void fn_006D2064(void* self) {
    (void)self;
    (void)kTable_006D2064;
}
} // namespace lift_006D2064

// [0x006D1FB4]
namespace lift_006D1FB4 {
extern uint8_t& mem_u8(uint32_t addr);
extern uint32_t& mem_u32(uint32_t addr);

// @name sub_006D1FB4
// @summary Performs a sequence of byte and dword additions on [ecx], [esp+eax], [ecx+eax], and eax/al.
void sub_006D1FB4(uint32_t eax, uint32_t ecx, uint32_t esp) {
    mem_u8(ecx) += static_cast<uint8_t>(eax);
    mem_u8(esp + eax) += static_cast<uint8_t>(eax);
    eax = (eax & ~0xFFu) | ((eax + 4u) & 0xFFu);
    mem_u32(ecx) += eax;
    eax = (eax & ~0xFFu) | ((eax + 4u) & 0xFFu);
    eax = (eax & ~0xFFu) | ((eax + mem_u8(esp + eax)) & 0xFFu);
    mem_u32(esp + eax) += eax;
    mem_u32(ecx + eax) += eax;
    eax += mem_u32(esp + eax);
    eax = (eax & ~0xFFu) | ((eax + 4u) & 0xFFu);
}
} // namespace lift_006D1FB4

// [0x006D2700] sub_006D2700 (32 bytes)
namespace lift_006D2700 {
// @name Vec3d::Dot
// @class Vec3d
// @summary Returns the dot product of this and another 3-component double vector.
// @field Vec3d +0x00 double x
// @field Vec3d +0x08 double y
// @field Vec3d +0x10 double z
double fn_006D2700(const void* self, const void* other) {
    double a[3];
    double b[3];
    std::memcpy(a, self, sizeof(a));
    std::memcpy(b, other, sizeof(b));
    // Same evaluation order as the original: ((z*z' + y*y') + x*x')
    double t = a[2] * b[2];
    t = t + a[1] * b[1];
    t = t + a[0] * b[0];
    return t;
}
} // namespace lift_006D2700

// [0x006D6AF0]
namespace lift_006D6AF0 {
// @name Unknown::SetByteAtIndex0x1B8
// @class Unknown
// @summary Stores one byte into the byte array at this+0x1B8, indexed by the first stack argument.
// @field Unknown +0x1B8 BYTE field_0x1B8[] (indexed by arg index; byte store target)
void fn_006D6AF0(void* self, DWORD index, BYTE value) {
    lift_field<BYTE>(self, static_cast<ptrdiff_t>(0x1B8) + static_cast<ptrdiff_t>(index)) = value;
}
} // namespace lift_006D6AF0

// [0x006D2390] sub_006D2390 (32 bytes)
namespace lift_006D2390 {
extern void ext_007873F0(void* self, uint32_t arg1);

// @name ForwardArgToCalleeReturnThis
// @summary Forwards its single stack argument to sub_007873F0 with the same this pointer, then returns this.
// Note: no member fields are accessed directly; `self` is only passed through.
void* fn_006D2390(void* self, uint32_t arg1) {
    ext_007873F0(self, arg1);
    return self;
}
} // namespace lift_006D2390

// [0x006D7380] sub_006D7380 (32 bytes)
namespace lift_006D7380 {
// @name Unknown::ReleaseSubobjectFC
// @class Unknown
// @summary Releases the object held at this->field_0xFC->field_0x04 via its vtable slot 0 (deleting dtor, flag 1), then nulls that pointer.
// @field Unknown +0xFC void* field_0xFC (pointer to holder struct; owner class not established)
// @field SubobjectHolder +0x04 void* field_0x04 (owned object pointer; released via vtable slot 0 and cleared)

// Holder struct reached through self+0xFC; only its +0x04 slot is touched.
struct SubobjectHolder {
    uint8_t pad_00[0x04];
    void*   field_0x04;
};

void fn_006D7380(void* self) {
    auto* holder = *reinterpret_cast<SubobjectHolder**>(
        reinterpret_cast<uint8_t*>(self) + 0xFC);

    void* obj = holder->field_0x04;
    if (obj != nullptr) {
        // Virtual call: slot 0 of the object's vtable, __thiscall(this, 1)
        // (scalar deleting destructor with "free memory" flag set).
        void** vtable = *reinterpret_cast<void***>(obj);
        using SlotFn = void(__thiscall*)(void*, int);
        reinterpret_cast<SlotFn>(vtable[0])(obj, 1);
    }
    holder->field_0x04 = nullptr;
}
} // namespace lift_006D7380
