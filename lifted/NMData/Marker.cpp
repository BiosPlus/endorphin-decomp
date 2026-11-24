// Lifted C++ translation unit: lifted/NMData/Marker.cpp
#include "lift_compat.h"

// [0x00870930] NMData::Marker::vfunc_34 (116 bytes)
namespace lift_00870930 {
// Known callee 0x00493E40: forwardVtableSlot194 (Dereferences a pointer-to-pointer held in self, then tail-jumps to the)
extern void ext_00493E40();
// Known callee 0x00528B90: Unknown::setPeerWithBackLink (Stores the argument at this+0x04; if it is non-null, writes this into argument+0x08.)
extern void ext_00528B90();

// @name NMData::Marker::vfunc_34
// @class NMData::Marker
// @summary Calls two virtuals, forwards a caller-supplied slot through ext_00493E40, and stores the result into the embedded subobject at +0x0C via ext_00528B90.
// @field NMData::Marker +0x04 void* field_0x04
// @field NMData::Marker +0x0C void* field_0x0C
//
// Notes: the SEH frame setup/teardown (fs:[0] push/pop) is omitted. The original
// reads a stack slot past its single declared argument when loading ECX for the
// ext_00493E40 call; that slot is modelled here as the `callerSlot` parameter.
// The vtable-call results pushed as stack args for ext_00493E40 are not modelled
// because its known signature takes only `self`.

using VirtualNoArgFn = uintptr_t (*)(void* thisPtr);

// Calls the virtual at byte offset `byteOffset` (32-bit vtable layout) on the object at thisPtr.
static uintptr_t callVirtualSlot(void* thisPtr, uintptr_t byteOffset) {
    void** vtable = *reinterpret_cast<void***>(thisPtr);
    auto fn = reinterpret_cast<VirtualNoArgFn>(vtable[byteOffset / 4]);
    return fn(thisPtr);
}

uintptr_t fn_00870930(void* self, void* callerSlot) {
    // base = self ? self + 0x0C : nullptr
    void* base = self ? reinterpret_cast<void*>(reinterpret_cast<uint8_t*>(self) + 0x0C) : nullptr;

    // Result of virtual slot 0x2C on the object at self+0x04 (ECX = self+4).
    void* inner = lift_field<void*>(self, 0x04);
    (void)callVirtualSlot(reinterpret_cast<uint8_t*>(self) + 0x04, 0x2C);
    (void)inner;

    // Result of virtual slot 0xD8 on self.
    (void)callVirtualSlot(self, 0xD8);

    // Forward the caller-supplied slot.
    uintptr_t result = reinterpret_cast<uintptr_t (*)(void*)>(
        reinterpret_cast<void*>(&ext_00493E40))(callerSlot);

    // Store result into the subobject at base (writes base+4 and back-links if non-null).
    reinterpret_cast<void (*)(void*, void*)>(
        reinterpret_cast<void*>(&ext_00528B90))(base, reinterpret_cast<void*>(result));

    return result;
}
} // namespace lift_00870930
