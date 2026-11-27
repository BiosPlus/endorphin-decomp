// Lifted C++ translation unit: lifted/NMData/EffectorData.cpp
#include "lift_compat.h"
#include <new>
#include <string>
extern "C" const char* mem_00A9EE64;
extern "C" void* ext_006A5C62(size_t size);
extern "C" void* ext_00622750(void* self);

extern "C" void* ext_00622750(void* self);
// @name NMData::EffectorData::vfunc_8
// @class NMData::EffectorData
// @summary Returns a std::string (via hidden out-pointer) constructed from the C string at global mem_00A9EE64; this is unused.
std::string* fn_0060BBF0(void* self, std::string* out) {
    (void)self;
    new (out) std::string(mem_00A9EE64);
    return out;
}

// [0x0060BEA0] NMData::EffectorData::vfunc_18 (86 bytes)
// @name NMData::EffectorData::vfunc_18
// @class NMData::EffectorData
// @summary Auto-lifted identical-shape clone of 0x0061EA10 (HingeSecondaryConstraint::AllocAndConstruct).
void* fn_0060BEA0() {
    constexpr size_t kHingeSecondaryConstraintSize = 0x10;

    void* obj = ext_006A5C62(kHingeSecondaryConstraintSize);
    if (obj == nullptr) {
        return nullptr;
    }
    return ext_00622750(obj);
}

// [0x0060BE10] NMData::EffectorData::vfunc_17 (139 bytes)
namespace lift_0060BE10 {
// Known callee 0x006A5C62: thunk_MFC80_ord_762 (IAT jump thunk forwarding to MFC80!ord_762.)
// Called cdecl with a 0x10-byte size; returns the allocated block in eax (0 on failure).
extern void* ext_006A5C62(std::size_t size);
// Known callee 0x00622750: InitTaggedZeroFloatTriple
// Stores the tag mem_0097707C at +0x00, zeroes floats at +0x04/+0x08/+0x0C, returns self.
extern void* ext_00622750(void* self);
// .rdata float constants read by this function.
extern const float mem_00956EE0; // 20.0f
extern const float mem_00993858; // 3.0f
extern const float mem_00965D08; // 5.0f

// Virtual setter taking one float (thiscall on MSVC; macro expands to nothing elsewhere).
using VFloatSetter = void(__thiscall*)(void* self, float value);

// @name NMData::EffectorData::vfunc_17
// @class NMData::EffectorData
// @summary Allocates a 0x10-byte object, initializes it, calls virtual slots 5/3/4 with 20/3/5, and returns it.
void* fn_0060BE10(void* self) {
    (void)self; // this is unused by the original code

    // Allocate and initialize. obj stays null if the allocation fails.
    void* mem = ext_006A5C62(0x10);
    void* obj = nullptr;
    if (mem != nullptr) {
        obj = ext_00622750(mem);
    }

    // The original dereferences obj without a null check; preserved as-is.
    void** vtbl = *reinterpret_cast<void***>(obj);

    // Vtable slot offsets: +0x14 -> slot 5, +0x0C -> slot 3, +0x10 -> slot 4.
    reinterpret_cast<VFloatSetter>(vtbl[5])(obj, mem_00956EE0);
    reinterpret_cast<VFloatSetter>(vtbl[3])(obj, mem_00993858);
    reinterpret_cast<VFloatSetter>(vtbl[4])(obj, mem_00965D08);

    return obj;
}
} // namespace lift_0060BE10

// [0x0060BDF0] NMData::EffectorData::vfunc_19 (24 bytes)
namespace lift_0060BDF0 {
// Base-class vfunc_19 (0x0060BB50), called with the same this pointer.
extern void ext_0060BB50();
// Known callee 0x0060BCD0: descriptiveName (unknown class; initializes a 0x11-byte record) (Sets floats at +0x0 (1.0), +0x4 (1.0), +0x8 (mem_009518E0 = 10.0), +0xC (0.0) and byte at +0x10 (1); thiscall, this in ecx.)
extern void ext_0060BCD0();

// @name NMData::EffectorData::vfunc_19
// @class NMData::EffectorData
// @summary Runs the base-class vfunc_19, clears the dword at +0x44, then tail-calls the sub-object initializer at this+0x48.
// @field NMData::EffectorData +0x44 uint32_t field_0x44
void fn_0060BDF0(void* self) {
    ext_0060BB50();
    lift_field<uint32_t>(self, 0x44) = 0;
    // Tail-call 0x0060BCD0 with this = self + 0x48 (thiscall, this in ecx).
    ext_0060BCD0();
}
} // namespace lift_0060BDF0

// [0x0060BBF0] NMData::EffectorData::vfunc_8 (35 bytes)
namespace lift_0060BBF0 {
extern const char* mem_00A9EE64;

// @name NMData::EffectorData::vfunc_8
// @class NMData::EffectorData
// @summary Auto-lifted identical-shape clone of 0x0047DB90 (NMData::SceneData::vfunc_6).
namespace lift_0047DB90 {
// Pointer-sized global holding the address of the C-string literal used below.
extern const char* const mem_00A9EE64;
// IAT slot for the MSVC std::string(const char*, allocator) constructor import.
// The portable std::string constructor below replaces the call; the slot is only referenced here.
extern int mem_00924FE4;

// @name NMData::SceneData::vfunc_6
// @class NMData::SceneData
// @summary Returns a std::string constructed from the C-string pointer stored in mem_00A9F23C; does not read self.
// (no self fields are accessed by this function)
std::string fn_0060BBF0(const void* /*self*/) {
    static_cast<void>(&mem_00924FE4);
    return std::string(mem_00A9EE64);
}
} // namespace lift_0047DB90
} // namespace lift_0060BBF0

// [0x0060C5A0]
namespace lift_0060C5A0 {
// @name NMData::EffectorData::clone
// @class NMData::EffectorData
// @summary Allocates a new EffectorData instance, constructs it, and copies all fields from this.
// @field NMData::EffectorData +0x04 std::string field_0x04
// @field NMData::EffectorData +0x20 std::string field_0x20
// @field NMData::EffectorData +0x44 uint32_t field_0x44
// @field NMData::EffectorData +0x48 float field_0x48
// @field NMData::EffectorData +0x4c float field_0x4c
// @field NMData::EffectorData +0x50 float field_0x50
// @field NMData::EffectorData +0x54 float field_0x54
// @field NMData::EffectorData +0x58 uint8_t field_0x58


extern void* __cdecl ext_006A5C62(uint32_t size);
extern void* __thiscall ext_0060C570(void* self);
extern void* (__thiscall *mem_00924FDC)(void* self, const void* other);

void* __thiscall fn_0060C5A0(void* self) {
    uint8_t* src = static_cast<uint8_t*>(self);
    void* mem = ext_006A5C62(0x5c);
    uint8_t* dst = nullptr;
    if (mem != nullptr) {
        dst = static_cast<uint8_t*>(ext_0060C570(mem));
    }

    lift_field<uint32_t>(dst, 0x44) = lift_field<uint32_t>(src, 0x44);

    mem_00924FDC(dst + 0x04, src + 0x04);
    mem_00924FDC(dst + 0x20, src + 0x20);

    lift_field<float>(dst, 0x48) = lift_field<float>(src, 0x48);
    lift_field<float>(dst, 0x4c) = lift_field<float>(src, 0x4c);
    lift_field<float>(dst, 0x50) = lift_field<float>(src, 0x50);
    lift_field<uint8_t>(dst, 0x58) = lift_field<uint8_t>(src, 0x58);
    lift_field<float>(dst, 0x54) = lift_field<float>(src, 0x54);

    return dst;
}
} // namespace lift_0060C5A0

// [0x0060CDE0] NMData::EffectorData::vfunc_15 (156 bytes)
namespace lift_0060CDE0 {
// sub_005A0FF0: thiscall(arg1 in ecx) with one stack arg (pointer to this->field_0x20); returns object pointer.
extern void* ext_005A0FF0(void* self, void* arg);
// Known callee 0x00602F70: Unknown::ctor_00602F70 (Runs the base ctor (sub_00602EC0), sets vtable to 0x0096F8A4, zeroes floats at +0x2c/+0x30 and int at +0x34, initializes sub-records at +0x38 and +0x4c via sub_0060BCD0; returns this.)
extern void* ext_00602F70(void* self);
// Known callee 0x006A5C62: thunk_MFC80_ord_762 (IAT jump thunk forwarding to MFC80!ord_762.)
// cdecl, one stack arg (allocation size 0x60), returns allocated pointer in eax.
extern void* ext_006A5C62(uint32_t size);

// @name NMData::EffectorData::vfunc_15
// @class NMData::EffectorData
// @summary If arg3 is null, allocates and constructs a 0x60-byte object; then fills it from arg1 and this, invokes its vtable slot 0x30 with this, stores it at this+0x40 and returns it.
// @field NMData::EffectorData +0x20 std::string field_0x20
// @field NMData::EffectorData +0x3c uint32_t field_0x3c
// @field NMData::EffectorData +0x40 void* field_0x40
void* fn_0060CDE0(void* self, void* arg1, uint32_t arg2, void* arg3) {
    void* obj = arg3;
    if (obj == nullptr) {
        void* mem = ext_006A5C62(0x60);
        obj = (mem != nullptr) ? ext_00602F70(mem) : nullptr;
    }

    lift_field<uint32_t>(self, 0x3c) = arg2;

    void* info = ext_005A0FF0(arg1, reinterpret_cast<uint8_t*>(self) + 0x20);
    lift_field<uint32_t>(obj, 0x04) = lift_field<uint32_t>(info, 0x234);
    lift_field<uint32_t>(obj, 0x08) = arg2;

    void* vtbl = lift_field<void*>(obj, 0);
    void* slot = lift_field<void*>(vtbl, 0x30);
    reinterpret_cast<void (*)(void*, void*)>(slot)(obj, self);

    lift_field<void*>(self, 0x40) = obj;
    return obj;
}
} // namespace lift_0060CDE0
