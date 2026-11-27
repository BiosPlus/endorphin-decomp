// Lifted C++ translation unit: lifted/Commands/GoToFrameCommand.cpp
#include "lift_compat.h"
#include <ios>
#include <new>
#include <sstream>
#include <string>

// [0x0048E420] Commands::GoToFrameCommand::vfunc_3 (163 bytes)
namespace lift_0048E420 {
extern void* ext_00435D00(void* os, const char* text);
// MSVCP80 import slots used by the original (ostringstream ctor/<</str()/dtor, and ostream::operator<<(int)).
// Replaced here by std::ostringstream; the slot addresses are kept as references for differential mapping.
extern int mem_00924E4C;
extern int mem_00924E54;
extern int mem_00924E58;
extern int mem_00924E5C;

// @name Commands::GoToFrameCommand::vfunc_3
// @class Commands::GoToFrameCommand
// @summary Builds the string "<text><frame>" via an ostringstream (ext_00435D00 writes the text, then the frame number is streamed) and returns it by value through the sret buffer.
// @field Commands::GoToFrameCommand +0x10 int32_t field_0x10
void* __thiscall fn_0048E420(void* self, void* out) {
    (void)&mem_00924E4C; // ostringstream ctor slot
    std::ostringstream ss;
    (void)&mem_00924E54; // str() slot
    (void)&mem_00924E58; // dtor slot
    (void)&mem_00924E5C; // ostream::operator<<(int) slot
    // Text literal at VA 0x0093E5FC (.rdata); referenced by address as in the original push.
    const char* text = reinterpret_cast<const char*>(static_cast<uintptr_t>(0x0093E5FC));
    ext_00435D00(&ss, text);
    ss << lift_field<int32_t>(self, 0x10);
    // sret: construct the returned std::string in place in the caller's buffer.
    new (out) std::string(ss.str());
    return out;
}
} // namespace lift_0048E420
