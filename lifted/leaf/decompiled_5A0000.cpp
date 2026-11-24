// Lifted C++ translation unit: lifted/leaf/decompiled_5A0000.cpp
#include "lift_compat.h"
#include <new>
#include <string>

// [0x005A3610] sub_005A3610 (8 bytes)
namespace lift_005A3610 {
// @name sub_005A3610
// @summary Auto-lifted identical-shape clone of 0x00437DE0 (callSub00437DC0WithOne).
namespace lift_00437DE0 {
// @name callSub00437DC0WithOne
// @summary Calls ext_00437DC0 with argument 1.

extern void ext_005A1070(void* arg);

void fn_005A3610() {
    ext_005A1070(reinterpret_cast<void*>(static_cast<uintptr_t>(3)));
}
} // namespace lift_00437DE0
} // namespace lift_005A3610

// [0x005AD1C0]
namespace lift_005AD1C0 {
// @name fillRangeWith8ByteValue
// @summary Writes the 8-byte value at *src into every 8-byte slot in [dst_begin, dst_end). Source pointer is not advanced.

void fillRangeWith8ByteValue(uint32_t* dst_begin, uint32_t* dst_end, const uint32_t* src) {
    if (dst_begin == dst_end) {
        return;
    }
    const uint32_t lo = src[0];
    const uint32_t hi = src[1];
    uint32_t* dst = dst_begin;
    do {
        dst[0] = lo;
        dst[1] = hi;
        dst += 2;
    } while (dst != dst_end);
}
} // namespace lift_005AD1C0

// [0x005A3DC0]
namespace lift_005A3DC0 {
extern uint32_t mem_00924E90;
extern uint32_t mem_00924FA0;
extern uint32_t mem_00924E94;
extern uint32_t mem_00924E98;

// @name catch_005A3DC0_printExceptionMessage
// @summary Catch-block funclet that prints the caught exception's string at +0x0C to std::cout and returns continuation 0x005A3DAD.
uint32_t sub_005A3DC0(uint32_t ebp) {
    using StreamPtr = void*;
    using EndlFn = StreamPtr (__cdecl*)(StreamPtr);
    using PrintStrFn = StreamPtr (__cdecl*)(StreamPtr, const void*);
    using StreamManipFn = StreamPtr (__thiscall*)(StreamPtr, EndlFn);

    EndlFn endl_fn = reinterpret_cast<EndlFn>(static_cast<uintptr_t>(mem_00924E90));
    StreamPtr cout_obj = reinterpret_cast<StreamPtr>(static_cast<uintptr_t>(mem_00924FA0));
    PrintStrFn print_str = reinterpret_cast<PrintStrFn>(static_cast<uintptr_t>(mem_00924E94));
    StreamManipFn stream_manip = reinterpret_cast<StreamManipFn>(static_cast<uintptr_t>(mem_00924E98));

    uint32_t exc_ptr = *reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(ebp - 0x14));
    const void* str_ptr = reinterpret_cast<const void*>(static_cast<uintptr_t>(exc_ptr + 0x0C));

    StreamPtr os = print_str(cout_obj, str_ptr);
    stream_manip(os, endl_fn);

    return 0x005A3DADu;
}
} // namespace lift_005A3DC0

// [0x005AA8D0] sub_005AA8D0 (45 bytes)
namespace lift_005AA8D0 {
// Import slot for std::basic_string<char> copy-assignment (MSVCP80), used as thiscall.
extern int mem_00924FDC;

// @name sub_005AA8D0
// @summary Assigns the incoming string to the member at +0x170, then if the object at +0x190 is non-null invokes its vtable slot 0.
// @field <ClassName> +0x170 std::string field_0x170
// @field <ClassName> +0x190 void* field_0x190
void __thiscall fn_005AA8D0(void* self, const void* src) {
    using StrAssignFn = void* (__thiscall*)(void* self, const void* rhs);
    using VFn = void (__thiscall*)(void* self);

    auto assign = reinterpret_cast<StrAssignFn>(static_cast<uintptr_t>(mem_00924FDC));
    auto* base = static_cast<unsigned char*>(self);

    assign(base + 0x170, src);

    void* obj = *reinterpret_cast<void**>(base + 0x190);
    if (obj != nullptr) {
        void** vtbl = *reinterpret_cast<void***>(obj);
        auto slot0 = reinterpret_cast<VFn>(vtbl[0]);
        slot0(obj);
    }
}
} // namespace lift_005AA8D0

// [0x005AA890]
namespace lift_005AA890 {
// @name CopyVec3ToSelfAndNotifyChild
// @summary Copies a 3-float vector into self+0x164..0x16c, then calls virtual slot 0 on the child at self+0x190 if present.
// @field Self +0x164 float field_0x164
// @field Self +0x168 float field_0x168
// @field Self +0x16c float field_0x16c
// @field Self +0x190 void* field_0x190
void CopyVec3ToSelfAndNotifyChild(void* self, const float* src) {
    lift_field<float>(self, 0x164) = src[0];
    lift_field<float>(self, 0x168) = src[1];
    lift_field<float>(self, 0x16c) = src[2];

    void* child = lift_field<void*>(self, 0x190);
    if (child != nullptr) {
        void** vtbl = *reinterpret_cast<void***>(child);
        auto slot0 = reinterpret_cast<void (*)(void*)>(vtbl[0]);
        slot0(child);
    }
}
} // namespace lift_005AA890
