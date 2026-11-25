// Lifted C++ translation unit: lifted/NMData/EffectorSkeletalData.cpp
#include "lift_compat.h"
#include <new>
#include <string>
// .rdata string literal at 0x0097778C (contents not recovered).
extern "C" const char mem_0097778C[];
// .rdata string literal at 0x009777A0 (contents not recovered).
extern "C" const char mem_009777A0[];
// .rdata string literal at 0x0093BF0C (contents not recovered).
extern "C" const char mem_0093BF0C[];

extern "C" const char mem_009777A0[];
// .rdata string literal at 0x0093BF0C (contents not recovered).
extern "C" const char mem_0093BF0C[];
// @summary Constructs a std::string from the literal at 0x0097778C in the caller's result slot (first stack argument) and returns that slot. The incoming this (ecx) is overwritten and unused.
void* fn_00626820(void* self, void* dst) {
    (void)self;
    new (dst) std::string(mem_0097778C);
    return dst;
}
