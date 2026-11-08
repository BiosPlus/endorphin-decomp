#pragma once
// Auto-generated template instantiations by tools/extract_rtti from endorphin.exe RTTI

template <typename T>
class ThreadRunner {
public:
    void* vtable;               // +0x00
    unsigned int threadBase[3]; // +0x04..+0x0F (Thread base fields)
    void (T::*m_pfn)();         // +0x10 (func ptr at +0x10, this adjustment at +0x14)
    T* m_target;                // +0x18
};

// Instantiations (1):
// - ThreadRunner<RuntimeEngine>
//   Mangled: .?AV?$ThreadRunner@VRuntimeEngine@@@@ | TD: 0x00A31B30 | VTable: 0x0093B43C (3 methods)
