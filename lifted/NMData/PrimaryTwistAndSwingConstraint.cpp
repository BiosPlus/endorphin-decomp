// Lifted C++ translation unit: lifted/NMData/PrimaryTwistAndSwingConstraint.cpp
#include "lift_compat.h"
#include <new>
#include <string>
extern "C" int mem_00A9F294;
extern "C" int mem_00A9EF94;
extern "C" void* ext_006A5C62(size_t size);
extern "C" void* ext_0061D7C0(void* self, void* owner);

extern "C" void* ext_0061D7C0(void* self, void* owner);
// @name NMData::PrimaryTwistAndSwingConstraint::vfunc_69
// @class NMData::PrimaryTwistAndSwingConstraint
// @summary Stdcall (ret 8) selector: constructs a std::string in the caller-supplied buffer from the C string stored at mem_00A9F294 (kind 0), mem_00A9EF94 (kind 1), or a fixed literal address (other kinds), then returns the buffer.
extern "C" void* __stdcall fn_00611B80(void* out, uint32_t kind) {
    const char* text;
    if (kind == 0) {
        text = reinterpret_cast<const char*>(static_cast<uintptr_t>(static_cast<uint32_t>(mem_00A9F294)));
    } else if (kind == 1) {
        text = reinterpret_cast<const char*>(static_cast<uintptr_t>(static_cast<uint32_t>(mem_00A9EF94)));
    } else {
        text = reinterpret_cast<const char*>(static_cast<uintptr_t>(0x00928B5Du));
    }
    new (out) std::string(text);
    return out;
}

// [0x0061DB80] NMData::PrimaryTwistAndSwingConstraint::vfunc_17_off_C (99 bytes)
// @name NMData::PrimaryTwistAndSwingConstraint::vfunc_17_off_C
// @class NMData::PrimaryTwistAndSwingConstraint
// @summary Auto-lifted identical-shape clone of 0x004CFC30 (NMData::IncarnationEventData::vfunc_17_off_C).
void* fn_0061DB80(void* self) {
    void* mem = ext_006A5C62(0x33C);
    if (mem == nullptr) {
        return nullptr;
    }
    void* owner = static_cast<unsigned char*>(self) - 0xC;
    return ext_0061D7C0(mem, owner);
}
