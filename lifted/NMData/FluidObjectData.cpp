// Lifted C++ translation unit: lifted/NMData/FluidObjectData.cpp
#include "lift_compat.h"
#include <new>
#include <string>
// Static std::string object at VA 0x00B44944 (copied into the sret buffer).
extern "C" const std::string mem_00B44944;
// Base-class implementation NMData::CollisionModelDataBase::vfunc_15 at 0x005C3010.
extern "C" void __thiscall ext_005C3010(void* self, void* a, void* b);

extern "C" void __thiscall ext_005C3010(void* self, void* a, void* b);
// @name NMData::FluidObjectData::vfunc_62
// @class NMData::FluidObjectData
// @summary Copy-constructs a std::string from the static string at 0x00B44944 into the caller's sret buffer and returns that buffer.
void* __thiscall fn_005C3270(void* self, void* out) {
    (void)self;
    new (out) std::string(mem_00B44944);
    return out;
}
extern "C" void* ext_006A5C62(size_t size);
extern "C" void* ext_005CC5C0(void* self, void* owner);

extern "C" void* ext_005CC5C0(void* self, void* owner);
// @name NMData::FluidObjectData::vfunc_15
// @class NMData::FluidObjectData
// @summary Forwards (a, b) to the CollisionModelDataBase::vfunc_15 implementation on this object and returns a.
void* __thiscall fn_005C32B0(void* self, void* a, void* b) {
    ext_005C3010(self, a, b);
    return a;
}

// [0x005CC650] NMData::FluidObjectData::vfunc_17_off_C (99 bytes)
// @name NMData::FluidObjectData::vfunc_17_off_C
// @class NMData::FluidObjectData
// @summary Auto-lifted identical-shape clone of 0x004CFC30 (NMData::IncarnationEventData::vfunc_17_off_C).
void* fn_005CC650(void* self) {
    void* mem = ext_006A5C62(0x19C);
    if (mem == nullptr) {
        return nullptr;
    }
    void* owner = static_cast<unsigned char*>(self) - 0xC;
    return ext_005CC5C0(mem, owner);
}

// [0x005C44A0]
// @name NMData::FluidObjectData::vfunc_33
// @class NMData::FluidObjectData
// @summary Assigns a string literal to the member std::string at +0x17c, clears the flag at +0x198, then forwards to the base NMData::CollisionModelDataBase::vfunc_33.
// @field NMData::FluidObjectData +0x17c std::string field_0x17c
// @field NMData::FluidObjectData +0x198 u32 field_0x198

#include "lift_compat.h"

extern "C" void __thiscall ext_005C3660(void* self);

// MSVCP80 std::string helpers (thiscall, passed as plain function pointers).
extern "C" void (*mem_00924FE4)(void* self, const char* s);            // basic_string(const char*)
extern "C" void* (*mem_00924FDC)(void* self, const void* rhs);         // basic_string::operator=(const basic_string&)
extern "C" void (*mem_00924FF4)(void* self);                           // ~basic_string()

// Opaque storage for a temporary std::string (MSVCP80 layout is 28 bytes on x86).
struct alignas(8) StringStorage {
    uint8_t bytes[32];
};

extern "C" void fn_005C44A0(void* self) {
    StringStorage tmp{};
    const char* literal = reinterpret_cast<const char*>(static_cast<uintptr_t>(0x00928B5D));

    mem_00924FE4(&tmp, literal);
    mem_00924FDC(&lift_field<uint8_t>(self, 0x17C), &tmp);
    mem_00924FF4(&tmp);

    lift_field<uint32_t>(self, 0x198) = 0;
    ext_005C3660(self);
}
