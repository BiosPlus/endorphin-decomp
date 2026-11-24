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
