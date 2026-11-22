// Lifted C++ translation unit: lifted/leaf/tiny_670000.cpp
#include "lift_compat.h"

// [0x0067AEE8]
// @name sub_0067AEE8
// @summary Pops the return address into edi and returns, releasing 4 bytes of stack arguments.
extern "C" void __stdcall fn_0067AEE8() {
    // Branchless tiny leaf: restores edi from the stack, then returns popping 4 bytes of arguments.
}

// [0x0067AF28] sub_0067AF28 (4 bytes)
// @name cleanup_epilogue_pop_edi_stdcall4
// @summary Stdcall (ret 4) epilogue fragment: restores the saved edi register and drops one stack argument; no other effect.
extern "C" void __stdcall fn_0067AF28(void* arg) {
    (void)arg;
}
