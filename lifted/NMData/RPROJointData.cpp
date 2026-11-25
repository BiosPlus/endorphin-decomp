// Lifted C++ translation unit: lifted/NMData/RPROJointData.cpp
#include "lift_compat.h"
#include <new>
#include <string>
extern "C" const char* mem_00A9F1E4;
extern "C" void ext_005EB920(void* self, int32_t kind, int32_t arg2);

// [0x005EC2A0] NMData::RPROJointData::vfunc_63 (34 bytes)
// @name NMData::RPROJointData::vfunc_63
// @class NMData::RPROJointData
// @summary Returns early if kind equals the stored field; otherwise maps kind 5 to 3 and tail-forwards to NMData::FixedPathJointData::vfunc_63 (ext_005EB920).
// @field NMData::RPROJointData +0x194 int32_t field_0x194
void fn_005EC2A0(void* self, int32_t kind, int32_t arg2) {
    if (kind == lift_field<int32_t>(self, 0x194)) {
        return;
    }
    if (kind == 5) {
        kind = 3;
    }
    ext_005EB920(self, kind, arg2);
}

// [0x00584FD0] NMData::RPROJointData::vfunc_59 (35 bytes)
namespace lift_00584FD0 {
extern int mem_00A9F1E4; // .data slot holding a const char* (0x009866A0)
extern int mem_00924FE4; // IAT slot: MSVCP80 basic_string(const char*, allocator) ctor

// @name NMData::RPROJointData::vfunc_59
// @class NMData::RPROJointData
// @summary Constructs a std::string from the literal pointed to by mem_00A9F1E4 into the caller-supplied buffer and returns that buffer; the this pointer is unused.
std::string* fn_00584FD0(std::string* out) {
    // Original: call [0x00924FE4] = MSVCP80 basic_string(const char*, allocator) ctor, lowered to placement new.
    static_cast<void>(&mem_00924FE4);
    const char* lit = *reinterpret_cast<const char* const*>(&mem_00A9F1E4);
    ::new (static_cast<void*>(out)) std::string(lit);
    return out;
}
} // namespace lift_00584FD0
