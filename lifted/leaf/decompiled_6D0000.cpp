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

// [0x006D74E0] sub_006D74E0 (32 bytes)
namespace lift_006D74E0 {
// @name Unknown::SetByteAtIndex0x14C
// @class Unknown
// @summary Stores one byte into the byte array at this+0x14C, indexed by the first stack argument (ret 8).
// @field Unknown +0x14C BYTE field_0x14C[] (indexed by arg index; byte store target)

void fn_006D74E0(void* self, DWORD index, BYTE value) {
    auto* base = reinterpret_cast<uint8_t*>(self);
    base[static_cast<ptrdiff_t>(0x14C) + static_cast<ptrdiff_t>(index)] = value;
}
} // namespace lift_006D74E0

// [0x006D7CA0] sub_006D7CA0 (32 bytes)
namespace lift_006D7CA0 {
// @name sub_006D7CA0
// @class <ClassName> (optional)
// @summary Stores two byte-sized arguments into this+0x1C0 and this+0x1C1 (callee-cleans 8 bytes, ret 0x8).
// @field <ClassName> +0x1C0 uint8_t field_0x1C0
// @field <ClassName> +0x1C1 uint8_t field_0x1C1
void fn_006D7CA0(void* self, uint8_t a, uint8_t b) {
    lift_field<uint8_t>(self, 0x1C0) = a;
    lift_field<uint8_t>(self, 0x1C1) = b;
}
} // namespace lift_006D7CA0

// [0x006D7CC0] sub_006D7CC0 (32 bytes)
namespace lift_006D7CC0 {
// @name descriptiveName: Unknown::SetBytePair0x1C2
// @class Unknown
// @summary Stores two byte arguments into this+0x1C2 and this+0x1C3 (thiscall, ret 8).
// @field Unknown +0x1C2 uint8_t field_0x1C2
// @field Unknown +0x1C3 uint8_t field_0x1C3
void fn_006D7CC0(void* self, uint8_t a, uint8_t b) {
    lift_field<uint8_t>(self, 0x1C2) = a;
    lift_field<uint8_t>(self, 0x1C3) = b;
}
} // namespace lift_006D7CC0

// [0x006D7CE0] sub_006D7CE0 (32 bytes)
namespace lift_006D7CE0 {
// @name Unknown::SetBytesAt0x1C4
// @class Unknown
// @summary Stores two byte arguments into consecutive fields at this+0x1C4 and this+0x1C5 (callee pops 8 bytes).
// @field Unknown +0x1C4 uint8_t field_0x1C4
// @field Unknown +0x1C5 uint8_t field_0x1C5
void fn_006D7CE0(void* self, uint8_t arg1, uint8_t arg2) {
    lift_field<uint8_t>(self, 0x1C4) = arg1;
    lift_field<uint8_t>(self, 0x1C5) = arg2;
}
} // namespace lift_006D7CE0

// [0x006DC460]
namespace lift_006DC460 {
// @name Unknown::GetValueIfCountPositive
// @class Unknown
// @summary Returns *(this->field_0xC8) when this->field_0xB8 > 0, otherwise 0.
// @field Unknown +0xB8 int32_t field_0xB8
// @field Unknown +0xC8 int32_t* field_0xC8

int32_t Unknown_GetValueIfCountPositive(void* self) {
    auto* base = static_cast<uint8_t*>(self);
    int32_t count = *reinterpret_cast<int32_t*>(base + 0xB8);
    if (count > 0) {
        int32_t* ptr = *reinterpret_cast<int32_t**>(base + 0xC8);
        return *ptr;
    }
    return 0;
}
} // namespace lift_006DC460

// [0x006DE3B0]
namespace lift_006DE3B0 {
// @name Unknown::DispatchViaField0x14
// @class Unknown
// @summary Loads subobject at +0x14; if its +0x9C word is nonzero tail-calls fn_00712000 with it, else tail-calls fn_006E7460 on the subobject.
// @field Unknown +0x14 void* field_0x14
// @field Unknown +0x9C uint32_t field_0x9c

extern uint32_t __fastcall fn_00712000(void* self);
extern int32_t __fastcall fn_006E7460(void* self);

extern uint32_t __fastcall fn_006DE3B0(void* self) {
    uint8_t* obj = *reinterpret_cast<uint8_t**>(reinterpret_cast<uint8_t*>(self) + 0x14);
    uint32_t v = *reinterpret_cast<uint32_t*>(obj + 0x9C);
    if (v != 0) {
        return fn_00712000(reinterpret_cast<void*>(static_cast<uintptr_t>(v)));
    }
    return static_cast<uint32_t>(fn_006E7460(obj));
}
} // namespace lift_006DE3B0

// [0x006D6AD0] sub_006D6AD0 (32 bytes)
namespace lift_006D6AD0 {
// @name sub_006D6AD0
// @summary Auto-lifted identical-shape clone of 0x0070EC30 (Unknown::ForwardSubObjectAt0x168).
namespace lift_0070EC30 {
extern DWORD __fastcall ext_006B9EC0(void* self, int edx_unused, DWORD arg);

// @name Unknown::ForwardSubObjectAt0x168
// @class Unknown
// @summary Forwards its stack argument to sub_007873F0 using the sub-object at this+0x168 as the receiver; returns the callee's result.
extern DWORD __fastcall fn_006D6AD0(void* self, int edx_unused, DWORD arg) {
    (void)edx_unused;
    uint8_t* sub = static_cast<uint8_t*>(self) + 0x104;
    return ext_006B9EC0(sub, 0, arg);
}
} // namespace lift_0070EC30
} // namespace lift_006D6AD0

// [0x006D7490] sub_006D7490 (32 bytes)
namespace lift_006D7490 {
// @name sub_006D7490
// @summary Auto-lifted identical-shape clone of 0x0070EC30 (Unknown::ForwardSubObjectAt0x168).
namespace lift_0070EC30 {
extern DWORD __fastcall ext_006B9EC0(void* self, int edx_unused, DWORD arg);

// @name Unknown::ForwardSubObjectAt0x168
// @class Unknown
// @summary Forwards its stack argument to sub_007873F0 using the sub-object at this+0x168 as the receiver; returns the callee's result.
extern DWORD __fastcall fn_006D7490(void* self, int edx_unused, DWORD arg) {
    (void)edx_unused;
    uint8_t* sub = static_cast<uint8_t*>(self) + 0x100;
    return ext_006B9EC0(sub, 0, arg);
}
} // namespace lift_0070EC30
} // namespace lift_006D7490

// [0x006D75C0] sub_006D75C0 (36 bytes)
namespace lift_006D75C0 {
// @name sub_006D75C0
// @summary Auto-lifted identical-shape clone of 0x007747B0 (initNegatedHugeGlobals).
namespace lift_007747B0 {
extern uint32_t mem_00925284;  // holds address of MSVCR80 _HUGE (double)
extern double mem_00B5D7A0;
extern double mem_00B5D7A8;
extern double mem_00B5D7B0;

// @name initNegatedHugeGlobals
// @summary Stores -_HUGE into three global doubles.
void fn_006D75C0(void) {
    const double huge = *reinterpret_cast<const double*>(static_cast<uintptr_t>(mem_00925284));
    mem_00B5D7A0 = -huge;
    mem_00B5D7A8 = -huge;
    mem_00B5D7B0 = -huge;
}
} // namespace lift_007747B0
} // namespace lift_006D75C0

// [0x006D1FDC] sub_006D1FDC (36 bytes)
namespace lift_006D1FDC {
// @name GetByteTable006D1FDC
// @class <ClassName> (optional)
// @summary Returns a constant 36-byte lookup table (data, not code) found at 0x006D1FDC; bytes are 00 01, fifteen 02 pairs, 00 01, 8b ff.
// (no @field: function does not access any struct offsets)
static const uint8_t kTable_006D1FDC[36] = {
    0x00, 0x01,
    0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02,
    0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02,
    0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02,
    0x02, 0x02, 0x02, 0x02, 0x02,
    0x00, 0x01,
    0x8b, 0xff,
};

const uint8_t* fn_006D1FDC() {
    return kTable_006D1FDC;
}
} // namespace lift_006D1FDC

// [0x006D66A0]
namespace lift_006D66A0 {
extern uint32_t mem_read32(uint32_t addr);
extern void mem_write32(uint32_t addr, uint32_t val);
extern void mem_write8(uint32_t addr, uint8_t val);

// @name sub_006D66A0
// @summary Releases and clears the owned sub-object at [this+0xFC]+0x4 and resets flag at +0x100
// @field unknown +0xFC uint32_t field_0xFC
// @field unknown +0x100 uint8_t field_0x100

void __thiscall sub_006D66A0(uint32_t self) {
    uint32_t edi = mem_read32(self + 0xfc);
    uint32_t ecx = mem_read32(edi + 0x4);
    if (ecx != 0) {
        uint32_t vtable = mem_read32(ecx);
        uint32_t dtor = mem_read32(vtable);
        ((void (__thiscall *)(uint32_t, uint32_t))(uintptr_t)dtor)(ecx, 1);
    }
    mem_write32(edi + 0x4, 0);
    mem_write8(self + 0x100, 0);
}
} // namespace lift_006D66A0

// [0x006DE660]
namespace lift_006DE660 {
// @name getItemAt
// @summary Returns the 32-bit element at the given index if within [0, count), or 0 otherwise.
// @field Unknown +0x00 void** vtable
// @field Unknown +0x30 uint32_t* items


extern uint32_t mem_read32(uint32_t addr);

uint32_t __thiscall fn_006DE660(uint32_t self, int32_t index) {
    if (index < 0) {
        return 0;
    }
    uint32_t vtable = mem_read32(self);
    uint32_t fn_count = mem_read32(vtable + 0x14);
    int32_t count = static_cast<int32_t>(
        reinterpret_cast<uint32_t(__thiscall*)(uint32_t)>(fn_count)(self));
    if (index >= count) {
        return 0;
    }
    uint32_t items = mem_read32(self + 0x30);
    return mem_read32(items + static_cast<uint32_t>(index) * 4);
}
} // namespace lift_006DE660

// [0x006D8AB0]
namespace lift_006D8AB0 {
// @name init_globals_b5d900
// @summary Stores four constants into globals mem_00B5D900..mem_00B5D90C (two addresses, one address-like value, and zero).

extern uint32_t mem_00B5D900;
extern uint32_t mem_00B5D904;
extern uint32_t mem_00B5D908;
extern uint32_t mem_00B5D90C;

void sub_006D8AB0() {
    mem_00B5D900 = 0x00B5D8F8u;
    mem_00B5D908 = 0x00AA916Cu;
    mem_00B5D904 = 0x00B5EB50u;
    mem_00B5D90C = 0u;
}
} // namespace lift_006D8AB0
