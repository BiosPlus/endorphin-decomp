// Decompiled translation unit: src/templates/ThreadRunner.cpp
#include "templates/ThreadRunner.h"

class __multiple_inheritance RuntimeEngine;

// [0x0046FAB0] ThreadRunner<RuntimeEngine>::vfunc_1 (13 bytes)
extern "C" void __fastcall fn_0046FAB0(ThreadRunner<RuntimeEngine>* self) {
    (self->m_target->*(self->m_pfn))();
}
