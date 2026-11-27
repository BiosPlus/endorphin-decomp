// Lifted C++ translation unit: lifted/ExprParser/Operators/ResolveSymbol.cpp
#include "lift_compat.h"

// [0x006A0D80] ExprParser::Operators::ResolveSymbol::vfunc_3 (158 bytes)
namespace lift_006A0D80 {
// Known callee 0x0067F960: GlobalArrayGetLastElement (Returns the last DWORD of the global range [mem_00B5A120, mem_00B5A124); returns 0 when the range is empty or unset, and calls the CRT invalid-parameter handler on out-of-range access.)
extern uint32_t ext_0067F960();
// Callee 0x00660A50: sub_00660A50 (returns the lookup object pointer in eax; its first DWORD is a vtable pointer).
extern void* ext_00660A50();
// Known callee 0x0041CEB0: UnknownClass::forwardToSubobjectSlot4 (Calls vtable slot 4 of the subobject at +0x04 with (arg1, self, 0, 0), then returns arg1.)
extern uint32_t ext_0041CEB0(void* self, uint32_t arg1);
// Known callee 0x0041CF50: Unknown::assignFromOther_0041CF50 (Self-assignment guarded copy: if other differs, releases the current field_0x04 via vtable slot 0x78, copies other's field_0x04, then sets field_0x00 to the value written by other's field_0x04 vtable slot 0x70 (0 when that pointer is null). Returns self.)
extern void* ext_0041CF50(void* self, void* other);
// IAT slot for the std::string destructor (MSVCP80 ??1basic_string). Holds the resolved function address at runtime.
extern void* mem_00924FF4;

// @name ExprParser::Operators::ResolveSymbol::vfunc_3
// @class ExprParser::Operators::ResolveSymbol
// @summary Resolves a symbol into a temporary string via the lookup object's vtable slot 5, assigns the result into the stack-argument object, then releases the temporary result holder and the string.
// Note: the original ignores ecx and takes its target object from the stack argument (ret 4).
// Note: the MSVC SEH frame and trylevel bookkeeping are compiler-generated and omitted.
// No direct ResolveSymbol field offsets are accessed in this function; self is only passed to callees.
void fn_006A0D80(void* self) {
    // edi: last DWORD of the global range.
    uint32_t last = ext_0067F960();
    // esi: lookup object; lookup +0x00 is its vtable pointer.
    void* lookup = ext_00660A50();

    // Stack temporaries: strA is a 0x18-byte MSVC std::string-sized buffer; outB is a
    // 2-DWORD out slot whose +0x04 DWORD is later read as a holder pointer.
    alignas(8) uint8_t strA[0x18] = {};
    alignas(8) uint8_t outB[0x8] = {};

    uint32_t strA_addr = ext_0041CEB0(self, static_cast<uint32_t>(reinterpret_cast<uintptr_t>(strA)));

    // Vtable slot at +0x14 (slot 5) of lookup: resolver(this, outB, strA, last, 0) -> eax.
    using ResolveFn = uint32_t (*)(void* self, uint32_t out, uint32_t in, uint32_t last, uint32_t zero);
    void* vtbl = lift_field<void*>(lookup, 0x00);
    auto resolve = reinterpret_cast<ResolveFn>(lift_field<void*>(vtbl, 0x14));
    uint32_t result = resolve(lookup,
                              static_cast<uint32_t>(reinterpret_cast<uintptr_t>(outB)),
                              strA_addr,
                              last,
                              0u);

    // Assign the resolved value into the stack-argument object.
    ext_0041CF50(self, reinterpret_cast<void*>(static_cast<uintptr_t>(result)));

    // Release the holder stored at outB +0x04 via its vtable slot 0x78 (if non-null).
    void* holder = lift_field<void*>(outB, 0x04);
    if (holder != nullptr) {
        void* holder_vtbl = lift_field<void*>(holder, 0x00);
        auto release = reinterpret_cast<void (*)(void* self, void* out)>(lift_field<void*>(holder_vtbl, 0x78));
        release(holder, outB);
    }

    // Destroy the temporary string via the IAT slot.
    auto dtor = reinterpret_cast<void (*)(void* self)>(mem_00924FF4);
    dtor(strA);
}
} // namespace lift_006A0D80
