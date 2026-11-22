// Lifted C++ translation unit: lifted/NMData/NullRelationshipData.cpp
#include "lift_compat.h"
#include <new>
#include <string>
extern "C" const char* mem_00A9F118;

// [0x0055DE20] NMData::NullRelationshipData::vfunc_59 (35 bytes)
// @name NMData::NullRelationshipData::vfunc_59
// @class NMData::NullRelationshipData
// @summary Constructs a std::string in the caller-supplied buffer from the literal pointer in mem_00A9F118.
void fn_0055DE20(void* self) {
    new (self) std::string(mem_00A9F118);
}
