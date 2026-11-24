// Lifted C++ translation unit: lifted/leaf/tiny_6E0000.cpp
#include "lift_compat.h"
extern "C" void __fastcall ext_006E7460(void* self);
extern "C" void __fastcall ext_006E9A40(void* self);
extern "C" void __cdecl ext_006A5C5C(void* ptr);

extern "C" void __cdecl ext_006A5C5C(void* ptr);
// @name sub_006E6340
// @summary This-adjustor thunk: adjusts `this` by +0x4C and tail-calls sub_006E7460.
extern "C" void __fastcall fn_006E6340(void* self) {
    ext_006E7460(static_cast<char*>(self) + 0x4C);
}
extern "C" int32_t mem_00B5DF20;
extern "C" int32_t mem_00B5DF18;
extern "C" int mem_00B5DF10;
extern "C" void __fastcall ext_006EA190(void* self);
extern "C" int32_t mem_00B5E0A8;
extern "C" int32_t mem_00B5E0B8;
extern "C" int mem_00B5E0B0;
#include <cstdint>

// [0x006E7460] sub_006E7460 (16 bytes)
// @name sub_006E7460
// @summary Getter returning int32_t field at offset +0x0.
extern "C" int32_t __fastcall fn_006E7460(void* self) {
    return static_cast<int32_t>(lift_field<int32_t>(self, 0x0));
}

// [0x006E9420] sub_006E9420 (16 bytes)
// @name sub_006E9420
// @summary Getter returning int32_t field at offset +0x64.
extern "C" int32_t __fastcall fn_006E9420(void* self) {
    return static_cast<int32_t>(lift_field<int32_t>(self, 0x64));
}

// [0x006E9A20] sub_006E9A20 (30 bytes)
// @name sub_006E9A20
// @summary MSVC scalar deleting destructor: calls sub_006E9A40 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_006E9A20(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_006E9A40(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x006E9AD0] sub_006E9AD0 (16 bytes)
// @name sub_006E9AD0
// @summary Returns constant 0x8.
extern "C" int32_t __cdecl fn_006E9AD0(void) {
    return 0x8;
}

// [0x006EA090] sub_006EA090 (6 bytes)
// @name sub_006EA090
// @summary Returns global int32 value from mem_00B5DF20.
extern "C" int32_t __cdecl fn_006EA090(void) {
    return mem_00B5DF20;
}

// [0x006EA0A0] sub_006EA0A0 (6 bytes)
// @name sub_006EA0A0
// @summary Returns global int32 value from mem_00B5DF18.
extern "C" int32_t __cdecl fn_006EA0A0(void) {
    return mem_00B5DF18;
}

// [0x006EA0B0] sub_006EA0B0 (6 bytes)
// @name sub_006EA0B0
// @summary Returns address of global mem_00B5DF10.
extern "C" void* __cdecl fn_006EA0B0(void) {
    return &mem_00B5DF10;
}

// [0x006EA170] sub_006EA170 (30 bytes)
// @name sub_006EA170
// @summary MSVC scalar deleting destructor: calls sub_006EA190 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_006EA170(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_006EA190(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x006EF800] sub_006EF800 (16 bytes)
// @name sub_006EF800
// @summary Setter storing int32_t argument into field at offset +0xC.
extern "C" void __fastcall fn_006EF800(void* self, int edx_unused, int32_t value) {
    (void)edx_unused;
    lift_field<int32_t>(self, 0xC) = value;
}

// [0x006EF8A0] sub_006EF8A0 (6 bytes)
// @name sub_006EF8A0
// @summary Returns global int32 value from mem_00B5E0A8.
extern "C" int32_t __cdecl fn_006EF8A0(void) {
    return mem_00B5E0A8;
}

// [0x006EF8B0] sub_006EF8B0 (6 bytes)
// @name sub_006EF8B0
// @summary Returns global int32 value from mem_00B5E0B8.
extern "C" int32_t __cdecl fn_006EF8B0(void) {
    return mem_00B5E0B8;
}

// [0x006EF8C0] sub_006EF8C0 (6 bytes)
// @name sub_006EF8C0
// @summary Returns address of global mem_00B5E0B0.
extern "C" void* __cdecl fn_006EF8C0(void) {
    return &mem_00B5E0B0;
}

// [0x006EF930] sub_006EF930 (23 bytes)
// @name sub_006EF930
// @summary Auto-lifted identical-shape clone of 0x0052EFA0 (Primitives::Animation::vfunc_14).
void fn_006EF930(void* self, uint32_t a0, uint32_t a1) {
    lift_field<uint32_t>(self, 0x490) = a0;
    lift_field<uint32_t>(self, 0x494) = a1;
}

// [0x006EF960] sub_006EF960 (23 bytes)
// @name sub_006EF960
// @summary Auto-lifted identical-shape clone of 0x0052EFA0 (Primitives::Animation::vfunc_14).
void fn_006EF960(void* self, uint32_t a0, uint32_t a1) {
    lift_field<uint32_t>(self, 0x5A0) = a0;
    lift_field<uint32_t>(self, 0x5A4) = a1;
}

// [0x006EF990] sub_006EF990 (23 bytes)
// @name sub_006EF990
// @summary Auto-lifted identical-shape clone of 0x0052EFA0 (Primitives::Animation::vfunc_14).
void fn_006EF990(void* self, uint32_t a0, uint32_t a1) {
    lift_field<uint32_t>(self, 0x6B0) = a0;
    lift_field<uint32_t>(self, 0x6B4) = a1;
}

// [0x006EF9D0] sub_006EF9D0 (23 bytes)
// @name sub_006EF9D0
// @summary Auto-lifted identical-shape clone of 0x0052EFA0 (Primitives::Animation::vfunc_14).
void fn_006EF9D0(void* self, uint32_t a0, uint32_t a1) {
    lift_field<uint32_t>(self, 0x7C0) = a0;
    lift_field<uint32_t>(self, 0x7C4) = a1;
}

// [0x006EFCE0] sub_006EFCE0 (23 bytes)
// @name sub_006EFCE0
// @summary Auto-lifted identical-shape clone of 0x0052EFA0 (Primitives::Animation::vfunc_14).
void fn_006EFCE0(void* self, uint32_t a0, uint32_t a1) {
    lift_field<uint32_t>(self, 0x1B10) = a0;
    lift_field<uint32_t>(self, 0x1B14) = a1;
}

// [0x006EFD20] sub_006EFD20 (23 bytes)
// @name sub_006EFD20
// @summary Auto-lifted identical-shape clone of 0x0052EFA0 (Primitives::Animation::vfunc_14).
void fn_006EFD20(void* self, uint32_t a0, uint32_t a1) {
    lift_field<uint32_t>(self, 0x1C20) = a0;
    lift_field<uint32_t>(self, 0x1C24) = a1;
}

// [0x006EFD90] sub_006EFD90 (23 bytes)
// @name sub_006EFD90
// @summary Auto-lifted identical-shape clone of 0x0052EFA0 (Primitives::Animation::vfunc_14).
void fn_006EFD90(void* self, uint32_t a0, uint32_t a1) {
    lift_field<uint32_t>(self, 0x1D30) = a0;
    lift_field<uint32_t>(self, 0x1D34) = a1;
}

// [0x006EFE30] sub_006EFE30 (23 bytes)
// @name sub_006EFE30
// @summary Auto-lifted identical-shape clone of 0x0052EFA0 (Primitives::Animation::vfunc_14).
void fn_006EFE30(void* self, uint32_t a0, uint32_t a1) {
    lift_field<uint32_t>(self, 0x1E40) = a0;
    lift_field<uint32_t>(self, 0x1E44) = a1;
}

// [0x006EFED0] sub_006EFED0 (23 bytes)
// @name sub_006EFED0
// @summary Auto-lifted identical-shape clone of 0x0052EFA0 (Primitives::Animation::vfunc_14).
void fn_006EFED0(void* self, uint32_t a0, uint32_t a1) {
    lift_field<uint32_t>(self, 0x1F50) = a0;
    lift_field<uint32_t>(self, 0x1F54) = a1;
}

// [0x006EFF70] sub_006EFF70 (23 bytes)
// @name sub_006EFF70
// @summary Auto-lifted identical-shape clone of 0x0052EFA0 (Primitives::Animation::vfunc_14).
void fn_006EFF70(void* self, uint32_t a0, uint32_t a1) {
    lift_field<uint32_t>(self, 0x2060) = a0;
    lift_field<uint32_t>(self, 0x2064) = a1;
}

// [0x006E7FA0] sub_006E7FA0 (16 bytes)
namespace lift_006E7FA0 {
// @name sub_006E7FA0
// @summary Auto-lifted identical-shape clone of 0x006BB7B0 (Unknown::SetField08).
namespace lift_006BB7B0 {
// @name Unknown::SetField08
// @class Unknown
// @summary Loads the pointer stored at this+0 and writes the single stack argument to its +0x08 slot.
// @field Unknown +0x08 DWORD field_0x08
void fn_006E7FA0(void* self, DWORD value) {
    void* target = lift_field<void*>(self, 0x00);
    lift_field<DWORD>(target, 0x54) = value;
}
} // namespace lift_006BB7B0
} // namespace lift_006E7FA0

// [0x006E86A0] sub_006E86A0 (16 bytes)
namespace lift_006E86A0 {
// @name sub_006E86A0
// @summary Auto-lifted identical-shape clone of 0x006BB7B0 (Unknown::SetField08).
namespace lift_006BB7B0 {
// @name Unknown::SetField08
// @class Unknown
// @summary Loads the pointer stored at this+0 and writes the single stack argument to its +0x08 slot.
// @field Unknown +0x08 DWORD field_0x08
void fn_006E86A0(void* self, DWORD value) {
    void* target = lift_field<void*>(self, 0x00);
    lift_field<DWORD>(target, 0x48) = value;
}
} // namespace lift_006BB7B0
} // namespace lift_006E86A0

// [0x006E7FB0] sub_006E7FB0 (16 bytes)
namespace lift_006E7FB0 {
// @name sub_006E7FB0
// @summary Auto-lifted identical-shape clone of 0x006BB7D0 (GetVtableSlot3).
namespace lift_006BB7D0 {
// @name GetVtableSlot3
// @class Unknown
// @summary Returns the function pointer stored at vtable offset +0x0C (slot 3) of the object's vtable.
// @field Unknown +0x00 uint32_t vtable (vptr)
uint32_t fn_006E7FB0(void* self) {
    // mov eax, [ecx]        -> vtable = *(uint32_t*)self
    uint32_t vtable = lift_field<uint32_t>(self, 0x00);
    // mov eax, [eax + 0xc]  -> return *(uint32_t*)(vtable + 0x0C)
    void* vtable_ptr = reinterpret_cast<void*>(static_cast<uintptr_t>(vtable));
    return lift_field<uint32_t>(vtable_ptr, 0x54);
}
} // namespace lift_006BB7D0
} // namespace lift_006E7FB0

// [0x006E7FC0] sub_006E7FC0 (16 bytes)
namespace lift_006E7FC0 {
// @name sub_006E7FC0
// @summary Auto-lifted identical-shape clone of 0x006BB7D0 (GetVtableSlot3).
namespace lift_006BB7D0 {
// @name GetVtableSlot3
// @class Unknown
// @summary Returns the function pointer stored at vtable offset +0x0C (slot 3) of the object's vtable.
// @field Unknown +0x00 uint32_t vtable (vptr)
uint32_t fn_006E7FC0(void* self) {
    // mov eax, [ecx]        -> vtable = *(uint32_t*)self
    uint32_t vtable = lift_field<uint32_t>(self, 0x00);
    // mov eax, [eax + 0xc]  -> return *(uint32_t*)(vtable + 0x0C)
    void* vtable_ptr = reinterpret_cast<void*>(static_cast<uintptr_t>(vtable));
    return lift_field<uint32_t>(vtable_ptr, 0x58);
}
} // namespace lift_006BB7D0
} // namespace lift_006E7FC0

// [0x006E7FD0] sub_006E7FD0 (16 bytes)
namespace lift_006E7FD0 {
// @name sub_006E7FD0
// @summary Auto-lifted identical-shape clone of 0x006BB7D0 (GetVtableSlot3).
namespace lift_006BB7D0 {
// @name GetVtableSlot3
// @class Unknown
// @summary Returns the function pointer stored at vtable offset +0x0C (slot 3) of the object's vtable.
// @field Unknown +0x00 uint32_t vtable (vptr)
uint32_t fn_006E7FD0(void* self) {
    // mov eax, [ecx]        -> vtable = *(uint32_t*)self
    uint32_t vtable = lift_field<uint32_t>(self, 0x00);
    // mov eax, [eax + 0xc]  -> return *(uint32_t*)(vtable + 0x0C)
    void* vtable_ptr = reinterpret_cast<void*>(static_cast<uintptr_t>(vtable));
    return lift_field<uint32_t>(vtable_ptr, 0x5C);
}
} // namespace lift_006BB7D0
} // namespace lift_006E7FD0

// [0x006E7FE0] sub_006E7FE0 (16 bytes)
namespace lift_006E7FE0 {
// @name sub_006E7FE0
// @summary Auto-lifted identical-shape clone of 0x006BB7D0 (GetVtableSlot3).
namespace lift_006BB7D0 {
// @name GetVtableSlot3
// @class Unknown
// @summary Returns the function pointer stored at vtable offset +0x0C (slot 3) of the object's vtable.
// @field Unknown +0x00 uint32_t vtable (vptr)
uint32_t fn_006E7FE0(void* self) {
    // mov eax, [ecx]        -> vtable = *(uint32_t*)self
    uint32_t vtable = lift_field<uint32_t>(self, 0x00);
    // mov eax, [eax + 0xc]  -> return *(uint32_t*)(vtable + 0x0C)
    void* vtable_ptr = reinterpret_cast<void*>(static_cast<uintptr_t>(vtable));
    return lift_field<uint32_t>(vtable_ptr, 0x60);
}
} // namespace lift_006BB7D0
} // namespace lift_006E7FE0

// [0x006E7FF0] sub_006E7FF0 (16 bytes)
namespace lift_006E7FF0 {
// @name sub_006E7FF0
// @summary Auto-lifted identical-shape clone of 0x006BB7D0 (GetVtableSlot3).
namespace lift_006BB7D0 {
// @name GetVtableSlot3
// @class Unknown
// @summary Returns the function pointer stored at vtable offset +0x0C (slot 3) of the object's vtable.
// @field Unknown +0x00 uint32_t vtable (vptr)
uint32_t fn_006E7FF0(void* self) {
    // mov eax, [ecx]        -> vtable = *(uint32_t*)self
    uint32_t vtable = lift_field<uint32_t>(self, 0x00);
    // mov eax, [eax + 0xc]  -> return *(uint32_t*)(vtable + 0x0C)
    void* vtable_ptr = reinterpret_cast<void*>(static_cast<uintptr_t>(vtable));
    return lift_field<uint32_t>(vtable_ptr, 0x64);
}
} // namespace lift_006BB7D0
} // namespace lift_006E7FF0

// [0x006E8000] sub_006E8000 (16 bytes)
namespace lift_006E8000 {
// @name sub_006E8000
// @summary Auto-lifted identical-shape clone of 0x006BB7D0 (GetVtableSlot3).
namespace lift_006BB7D0 {
// @name GetVtableSlot3
// @class Unknown
// @summary Returns the function pointer stored at vtable offset +0x0C (slot 3) of the object's vtable.
// @field Unknown +0x00 uint32_t vtable (vptr)
uint32_t fn_006E8000(void* self) {
    // mov eax, [ecx]        -> vtable = *(uint32_t*)self
    uint32_t vtable = lift_field<uint32_t>(self, 0x00);
    // mov eax, [eax + 0xc]  -> return *(uint32_t*)(vtable + 0x0C)
    void* vtable_ptr = reinterpret_cast<void*>(static_cast<uintptr_t>(vtable));
    return lift_field<uint32_t>(vtable_ptr, 0x68);
}
} // namespace lift_006BB7D0
} // namespace lift_006E8000

// [0x006E8010] sub_006E8010 (16 bytes)
namespace lift_006E8010 {
// @name sub_006E8010
// @summary Auto-lifted identical-shape clone of 0x006BB7D0 (GetVtableSlot3).
namespace lift_006BB7D0 {
// @name GetVtableSlot3
// @class Unknown
// @summary Returns the function pointer stored at vtable offset +0x0C (slot 3) of the object's vtable.
// @field Unknown +0x00 uint32_t vtable (vptr)
uint32_t fn_006E8010(void* self) {
    // mov eax, [ecx]        -> vtable = *(uint32_t*)self
    uint32_t vtable = lift_field<uint32_t>(self, 0x00);
    // mov eax, [eax + 0xc]  -> return *(uint32_t*)(vtable + 0x0C)
    void* vtable_ptr = reinterpret_cast<void*>(static_cast<uintptr_t>(vtable));
    return lift_field<uint32_t>(vtable_ptr, 0x6C);
}
} // namespace lift_006BB7D0
} // namespace lift_006E8010

// [0x006E8020] sub_006E8020 (16 bytes)
namespace lift_006E8020 {
// @name sub_006E8020
// @summary Auto-lifted identical-shape clone of 0x006BB7D0 (GetVtableSlot3).
namespace lift_006BB7D0 {
// @name GetVtableSlot3
// @class Unknown
// @summary Returns the function pointer stored at vtable offset +0x0C (slot 3) of the object's vtable.
// @field Unknown +0x00 uint32_t vtable (vptr)
uint32_t fn_006E8020(void* self) {
    // mov eax, [ecx]        -> vtable = *(uint32_t*)self
    uint32_t vtable = lift_field<uint32_t>(self, 0x00);
    // mov eax, [eax + 0xc]  -> return *(uint32_t*)(vtable + 0x0C)
    void* vtable_ptr = reinterpret_cast<void*>(static_cast<uintptr_t>(vtable));
    return lift_field<uint32_t>(vtable_ptr, 0x70);
}
} // namespace lift_006BB7D0
} // namespace lift_006E8020

// [0x006E8030] sub_006E8030 (16 bytes)
namespace lift_006E8030 {
// @name sub_006E8030
// @summary Auto-lifted identical-shape clone of 0x006BB7D0 (GetVtableSlot3).
namespace lift_006BB7D0 {
// @name GetVtableSlot3
// @class Unknown
// @summary Returns the function pointer stored at vtable offset +0x0C (slot 3) of the object's vtable.
// @field Unknown +0x00 uint32_t vtable (vptr)
uint32_t fn_006E8030(void* self) {
    // mov eax, [ecx]        -> vtable = *(uint32_t*)self
    uint32_t vtable = lift_field<uint32_t>(self, 0x00);
    // mov eax, [eax + 0xc]  -> return *(uint32_t*)(vtable + 0x0C)
    void* vtable_ptr = reinterpret_cast<void*>(static_cast<uintptr_t>(vtable));
    return lift_field<uint32_t>(vtable_ptr, 0x74);
}
} // namespace lift_006BB7D0
} // namespace lift_006E8030

// [0x006E8040] sub_006E8040 (16 bytes)
namespace lift_006E8040 {
// @name sub_006E8040
// @summary Auto-lifted identical-shape clone of 0x006BB7D0 (GetVtableSlot3).
namespace lift_006BB7D0 {
// @name GetVtableSlot3
// @class Unknown
// @summary Returns the function pointer stored at vtable offset +0x0C (slot 3) of the object's vtable.
// @field Unknown +0x00 uint32_t vtable (vptr)
uint32_t fn_006E8040(void* self) {
    // mov eax, [ecx]        -> vtable = *(uint32_t*)self
    uint32_t vtable = lift_field<uint32_t>(self, 0x00);
    // mov eax, [eax + 0xc]  -> return *(uint32_t*)(vtable + 0x0C)
    void* vtable_ptr = reinterpret_cast<void*>(static_cast<uintptr_t>(vtable));
    return lift_field<uint32_t>(vtable_ptr, 0x7C);
}
} // namespace lift_006BB7D0
} // namespace lift_006E8040

// [0x006E86B0] sub_006E86B0 (16 bytes)
namespace lift_006E86B0 {
// @name sub_006E86B0
// @summary Auto-lifted identical-shape clone of 0x006BB7D0 (GetVtableSlot3).
namespace lift_006BB7D0 {
// @name GetVtableSlot3
// @class Unknown
// @summary Returns the function pointer stored at vtable offset +0x0C (slot 3) of the object's vtable.
// @field Unknown +0x00 uint32_t vtable (vptr)
uint32_t fn_006E86B0(void* self) {
    // mov eax, [ecx]        -> vtable = *(uint32_t*)self
    uint32_t vtable = lift_field<uint32_t>(self, 0x00);
    // mov eax, [eax + 0xc]  -> return *(uint32_t*)(vtable + 0x0C)
    void* vtable_ptr = reinterpret_cast<void*>(static_cast<uintptr_t>(vtable));
    return lift_field<uint32_t>(vtable_ptr, 0x48);
}
} // namespace lift_006BB7D0
} // namespace lift_006E86B0

// [0x006E8810] sub_006E8810 (16 bytes)
namespace lift_006E8810 {
// @name sub_006E8810
// @summary Auto-lifted identical-shape clone of 0x006BB7D0 (GetVtableSlot3).
namespace lift_006BB7D0 {
// @name GetVtableSlot3
// @class Unknown
// @summary Returns the function pointer stored at vtable offset +0x0C (slot 3) of the object's vtable.
// @field Unknown +0x00 uint32_t vtable (vptr)
uint32_t fn_006E8810(void* self) {
    // mov eax, [ecx]        -> vtable = *(uint32_t*)self
    uint32_t vtable = lift_field<uint32_t>(self, 0x00);
    // mov eax, [eax + 0xc]  -> return *(uint32_t*)(vtable + 0x0C)
    void* vtable_ptr = reinterpret_cast<void*>(static_cast<uintptr_t>(vtable));
    return lift_field<uint32_t>(vtable_ptr, 0x78);
}
} // namespace lift_006BB7D0
} // namespace lift_006E8810

// [0x006E3A40] sub_006E3A40 (16 bytes)
namespace lift_006E3A40 {
// @name Unknown::IsField68Equal2
// @class Unknown
// @summary Returns 1 if the dword at this+0x68 equals 2, otherwise 0 (cmp/sete/ret).
// @field Unknown +0x68 int32_t field_0x68
uint8_t fn_006E3A40(void* self) {
    return lift_field<int32_t>(self, 0x68) == 2 ? 1 : 0;
}
} // namespace lift_006E3A40

// [0x006E7F90] sub_006E7F90 (16 bytes)
namespace lift_006E7F90 {
// Known callee 0x006E7460: sub_006E7460 (Getter returning int32_t field at offset +0x0.)
extern int32_t __fastcall ext_006E7460(void* self);

// @name Unknown::GetIndirectInt32Plus8
// @class Unknown
// @summary Loads the pointer stored at +0x00 of self, offsets it by 8, and tail-calls the int32 getter at 0x006E7460 on that sub-object.
// @field Unknown +0x00 uint32_t field_0x00
__declspec(noinline) extern int32_t __fastcall fn_006E7F90(void* self) {
    const uint32_t inner = lift_field<uint32_t>(self, 0x00);
    void* const sub = reinterpret_cast<void*>(static_cast<uintptr_t>(inner + 0x08u));
    return ext_006E7460(sub);
}
} // namespace lift_006E7F90

// [0x006E8050] sub_006E8050 (16 bytes)
namespace lift_006E8050 {
// @name Unknown::GetVtableSlot80
// @class Unknown
// @summary Returns the 32-bit value stored at vtable offset +0x80 of the object's vtable.
// @field Unknown +0x00 uint32_t field_0x00 (vtable pointer, dereferenced to read slot +0x80)
uint32_t fn_006E8050(void* self) {
    uint32_t vtbl = lift_field<uint32_t>(self, 0x00);
    return lift_field<uint32_t>(reinterpret_cast<void*>(static_cast<uintptr_t>(vtbl)), 0x80);
}
} // namespace lift_006E8050

// [0x006E8060] sub_006E8060 (16 bytes)
namespace lift_006E8060 {
// @name sub_006E8060
// @summary Auto-lifted identical-shape clone of 0x006E8050 (Unknown::GetVtableSlot80).
namespace lift_006E8050 {
// @name Unknown::GetVtableSlot80
// @class Unknown
// @summary Returns the 32-bit value stored at vtable offset +0x80 of the object's vtable.
// @field Unknown +0x00 uint32_t field_0x00 (vtable pointer, dereferenced to read slot +0x80)
uint32_t fn_006E8060(void* self) {
    uint32_t vtbl = lift_field<uint32_t>(self, 0x00);
    return lift_field<uint32_t>(reinterpret_cast<void*>(static_cast<uintptr_t>(vtbl)), 0x84);
}
} // namespace lift_006E8050
} // namespace lift_006E8060

// [0x006E8070] sub_006E8070 (16 bytes)
namespace lift_006E8070 {
// @name sub_006E8070
// @summary Auto-lifted identical-shape clone of 0x006E8050 (Unknown::GetVtableSlot80).
namespace lift_006E8050 {
// @name Unknown::GetVtableSlot80
// @class Unknown
// @summary Returns the 32-bit value stored at vtable offset +0x80 of the object's vtable.
// @field Unknown +0x00 uint32_t field_0x00 (vtable pointer, dereferenced to read slot +0x80)
uint32_t fn_006E8070(void* self) {
    uint32_t vtbl = lift_field<uint32_t>(self, 0x00);
    return lift_field<uint32_t>(reinterpret_cast<void*>(static_cast<uintptr_t>(vtbl)), 0x88);
}
} // namespace lift_006E8050
} // namespace lift_006E8070

// [0x006E8080] sub_006E8080 (16 bytes)
namespace lift_006E8080 {
// @name sub_006E8080
// @summary Auto-lifted identical-shape clone of 0x006E8050 (Unknown::GetVtableSlot80).
namespace lift_006E8050 {
// @name Unknown::GetVtableSlot80
// @class Unknown
// @summary Returns the 32-bit value stored at vtable offset +0x80 of the object's vtable.
// @field Unknown +0x00 uint32_t field_0x00 (vtable pointer, dereferenced to read slot +0x80)
uint32_t fn_006E8080(void* self) {
    uint32_t vtbl = lift_field<uint32_t>(self, 0x00);
    return lift_field<uint32_t>(reinterpret_cast<void*>(static_cast<uintptr_t>(vtbl)), 0x8C);
}
} // namespace lift_006E8050
} // namespace lift_006E8080

// [0x006E8900] sub_006E8900 (16 bytes)
namespace lift_006E8900 {
extern void __fastcall ext_006D2250(void* self);

// @name sub_006E8900
// @summary Auto-lifted identical-shape clone of 0x006E7F90 (sub_006E6340).
namespace lift_006E7F90 {
// Known callee 0x006E7460: sub_006E7460 (Getter returning int32_t field at offset +0x0.)
extern int32_t __fastcall ext_006D2250(void* self);

// @name Unknown::GetIndirectInt32Plus8
// @class Unknown
// @summary Loads the pointer stored at +0x00 of self, offsets it by 8, and tail-calls the int32 getter at 0x006E7460 on that sub-object.
// @field Unknown +0x00 uint32_t field_0x00
__declspec(noinline) extern int32_t __fastcall fn_006E8900(void* self) {
    const uint32_t inner = lift_field<uint32_t>(self, 0x00);
    void* const sub = reinterpret_cast<void*>(static_cast<uintptr_t>(inner + 0x78u));
    return ext_006D2250(sub);
}
} // namespace lift_006E7F90
} // namespace lift_006E8900

// [0x006E86E0]
namespace lift_006E86E0 {
// @name sub_006E86E0
// @summary Returns the double at offset 0x60 of the object referenced by the first field of this.
// @field this +0x00 pointer field_0x00
// @field field_0x00 +0x60 double field_0x60

double sub_006E86E0(void* self) {
    auto* inner = *reinterpret_cast<uint8_t**>(self);
    return *reinterpret_cast<double*>(inner + 0x60);
}
} // namespace lift_006E86E0

// [0x006E8780] sub_006E8780 (16 bytes)
namespace lift_006E8780 {
// @name Unknown::GetIndirectDoublePlus58
// @class Unknown
// @summary Returns the double at offset +0x58 of the object pointed to by the first dword of self (thiscall, result in ST0).
// @field Unknown +0x58 double field_0x58
double fn_006E8780(void* self) {
    void* inner = lift_field<void*>(self, 0);
    return lift_field<double>(inner, 0x58);
}
} // namespace lift_006E8780
