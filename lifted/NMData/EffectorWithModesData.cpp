// Lifted C++ translation unit: lifted/NMData/EffectorWithModesData.cpp
#include "lift_compat.h"
#include <string>
// Literal strings at 0x00972290 and 0x0093BF0C are .rdata constants whose
// contents are not recovered; they are referenced here by their VA-derived names.
extern "C" const char str_00972290[];
extern "C" const char str_0093BF0C[];
// Base-class vfunc_19 (NMData::EffectorData::vfunc_19), called on the same object first.
extern "C" void ext_0060BDF0(void* self);
// .rdata C string literal at 0x009719C4; contents not recovered.
extern "C" const char str_009719C4[];

extern "C" void ext_0060BDF0(void* self);
// .rdata C string literal at 0x009719C4; contents not recovered.
extern "C" const char str_009719C4[];
// @summary Builds a descriptive std::string: literal prefix + this member string at +0x04 + literal suffix, returned by value.
// @field NMData::EffectorWithModesData +0x04 std::string field_0x04
std::string fn_0060C3D0(void* self) {
    auto* base = static_cast<unsigned char*>(self);
    const auto& member = *reinterpret_cast<const std::string*>(base + 0x04);
    std::string result = std::string(str_00972290) + member;
    return result + std::string(str_0093BF0C);
}
#include <new>

// [0x0060C490] NMData::EffectorWithModesData::vfunc_19 (48 bytes)
namespace lift_0060C490 {
// Known callee 0x0060BDF0: NMData::EffectorData::vfunc_19 (Runs the base-class vfunc_19, clears the dword at +0x44, then tail-calls the sub-object initializer at this+0x48.)
extern void ext_0060BDF0(void* self);
// IAT slot for MSVCP80 std::string::operator=(const char*); the portable std::string assignment below replaces the indirect call.
extern void* mem_00924FD4;
// .rdata string literal pushed as the std::string assignment source (0x009719C4).
extern const char mem_009719C4[];
// .rdata float constant 10.0f (u32 0x41200000).
extern const float mem_009518E0;

// @name NMData::EffectorWithModesData::vfunc_19
// @class NMData::EffectorWithModesData
// @summary Runs the base EffectorData::vfunc_19, then resets the string at +0x60 to a literal and sets +0x5C=20, +0x7C=0.0f, +0x80=10.0f.
// @field NMData::EffectorWithModesData +0x5C int field_0x5C
// @field NMData::EffectorWithModesData +0x60 std::string field_0x60
// @field NMData::EffectorWithModesData +0x7C float field_0x7C
// @field NMData::EffectorWithModesData +0x80 float field_0x80
void fn_0060C490(void* self) {
    ext_0060BDF0(self);
    (void)mem_00924FD4;
    lift_field<std::string>(self, 0x60) = mem_009719C4;
    lift_field<float>(self, 0x7C) = 0.0f;
    lift_field<int32_t>(self, 0x5C) = 0x14;
    lift_field<float>(self, 0x80) = mem_009518E0;
}
} // namespace lift_0060C490

// [0x0060C3D0] NMData::EffectorWithModesData::vfunc_20 (157 bytes)
namespace lift_0060C3D0 {
extern const char mem_00972290[];
extern const char mem_0093BF0C[];

// @name NMData::EffectorWithModesData::vfunc_20
// @class NMData::EffectorWithModesData
// @summary Auto-lifted identical-shape clone of 0x00626850 (NMData::EffectorSkeletalData::vfunc_20).
// @field NMData::EffectorWithModesData +0x4 std::string field_0x04
namespace lift_00626850 {
// .rdata string literals (contents not recovered).
extern const char mem_00972290[];
extern const char mem_0093BF0C[];
// IAT slots for the MSVCP80 string ctor/operator+/dtor the original called through.
// Replaced by std::string operations; referenced only as metadata for the differential check.
extern int mem_00924FD0;
extern int mem_00924ECC;
extern int mem_00924FE4;
extern int mem_00924FF4;

// @name NMData::EffectorSkeletalData::vfunc_20
// @class NMData::EffectorSkeletalData
// @summary Builds the string (literal 0x009777A0 + this->field_0x04 + literal 0x0093BF0C) into the caller's result slot and returns that slot.
// @field NMData::EffectorSkeletalData +0x04 std::string field_0x04
// Stack arg 2 (ret 8) is never read by the original.
std::string* fn_0060C3D0(void* self, std::string* ret, void* unused) {
    (void)unused;
    (void)&mem_00924FD0;
    (void)&mem_00924ECC;
    (void)&mem_00924FE4;
    (void)&mem_00924FF4;
    auto* member = reinterpret_cast<std::string*>(static_cast<char*>(self) + 0x04);
    std::string prefixed = std::string(mem_00972290) + *member;
    new (ret) std::string(prefixed + mem_0093BF0C);
    return ret;
}
} // namespace lift_00626850
} // namespace lift_0060C3D0

// [0x0060DC00] NMData::EffectorWithModesData::vfunc_15 (184 bytes)
namespace lift_0060DC00 {
// Known callee 0x00608350: Unknown::ctor_00608350 (runs base ctor, sets vtable, builds members; returns this).
extern void* ext_00608350(void* self);
// Known callee 0x0060CDE0: NMData::EffectorData::vfunc_15 (fills and returns a 0x60-byte object stored at this+0x40).
extern void* ext_0060CDE0(void* self, void* arg1, uint32_t arg2, void* arg3);
// Known callee 0x006A5C62: thunk_MFC80_ord_762 (IAT jump thunk forwarding to MFC80!ord_762 = operator new).
extern void* ext_006A5C62(size_t size);
// Unlifted callees (thiscall-style: ecx = self, remaining args on the stack).
extern void ext_0063D5D0(void* self, int32_t value);
extern void ext_0063D460(void* self, void* str);
extern void ext_0063D480(void* self, float value);

// @name NMData::EffectorWithModesData::vfunc_15
// @class NMData::EffectorWithModesData
// @summary Allocates and constructs a 0xB4-byte object, runs setup calls on it from this's +0x5C/+0x60/+0x80 fields, copies this's +0x7C float into it at +0xAC, then forwards to EffectorData::vfunc_15 and returns its result.
// @field NMData::EffectorWithModesData +0x5C int field_0x5C
// @field NMData::EffectorWithModesData +0x60 std::string field_0x60
// @field NMData::EffectorWithModesData +0x7C float field_0x7C
// @field NMData::EffectorWithModesData +0x80 float field_0x80
void* fn_0060DC00(void* self, void* arg1, uint32_t arg2, uint32_t /*arg3: stack slot popped by callee, never read*/) {
    // Allocate the new object (operator new(0xB4)) and construct it if allocation succeeded.
    void* obj = ext_006A5C62(0xB4);
    void* esi = nullptr;
    if (obj != nullptr) {
        esi = ext_00608350(obj);
    }

    // Setup calls on the new object, driven by this's fields.
    ext_0063D5D0(esi, lift_field<int32_t>(self, 0x5C));
    ext_0063D460(esi, static_cast<uint8_t*>(self) + 0x60);
    ext_0063D480(esi, lift_field<float>(self, 0x80));

    // Copy this+0x7C into the new object's +0xAC, then forward to vfunc_15.
    lift_field<float>(esi, 0xAC) = lift_field<float>(self, 0x7C);
    return ext_0060CDE0(self, arg1, arg2, esi);
}
} // namespace lift_0060DC00
