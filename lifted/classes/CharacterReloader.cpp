// Lifted C++ translation unit: lifted/classes/CharacterReloader.cpp
#include "lift_compat.h"
#include <new>
#include <string>

// [0x005AA020] CharacterReloader::vfunc_10 (37 bytes)
namespace lift_005AA020 {
// Import slot holding the address of the MSVC std::string copy constructor.
extern void* mem_00924FE0;

// @name CharacterReloader::vfunc_10
// @class CharacterReloader
// @summary Copy-constructs the std::string at src+0x04 into the caller-supplied return slot and returns that slot.
// @field CharacterReloader +0x04 std::string field_0x04
void* __stdcall fn_005AA020(void* ret, const void* src) {
    // Original: ecx = ret; push (src + 4); call [mem_00924FE0] (std::string copy ctor, thiscall, 1 stack arg); eax = ret.
    using CopyCtorFn = void(__thiscall*)(void* self, const void* other);
    auto copy_ctor = reinterpret_cast<CopyCtorFn>(mem_00924FE0);
    copy_ctor(ret, static_cast<const uint8_t*>(src) + 0x04);
    return ret;
}
} // namespace lift_005AA020
