// Lifted C++ translation unit: lifted/NMData/NullRelationshipData.cpp
#include "lift_compat.h"
#include <new>
#include <string>
extern "C" const char* mem_00A9F118;

// [0x0055DE20] NMData::NullRelationshipData::vfunc_59 (35 bytes)
namespace lift_0055DE20 {
// Global holding a pointer to a constant C string (.data at 0x00A9F118).
extern uint32_t mem_00A9F118;
// Import slot (.rdata at 0x00924FE4) holding the MSVCP80 std::basic_string<char> ctor
// taking (const char*, const allocator&).
extern uint32_t mem_00924FE4;

// @name NMData::NullRelationshipData::vfunc_59
// @class NMData::NullRelationshipData
// @summary Constructs the std::string out-parameter from the constant C string stored at mem_00A9F118 and returns it.
void* __stdcall fn_0055DE20(void* out) {
    using StringCtorFn = void (*)(void* self, const char* s, const void* alloc);

    const char* s = reinterpret_cast<const char*>(static_cast<uintptr_t>(mem_00A9F118));
    auto ctor = reinterpret_cast<StringCtorFn>(static_cast<uintptr_t>(mem_00924FE4));
    ctor(out, s, nullptr);
    return out;
}
} // namespace lift_0055DE20
