// Lifted C++ translation unit: lifted/leaf/tiny_850000.cpp
#include "lift_compat.h"
extern "C" void ext_00868180(void);
#include <cstdint>
#include <cstring>

// [0x0085DA80] sub_0085DA80 (16 bytes)
// @name sub_0085DA80
// @summary Empty function (returns immediately).
extern "C" void __cdecl fn_0085DA80(void) {
    return;
}

// [0x0085DE10] sub_0085DE10 (16 bytes)
// @name sub_0085DE10
// @summary Pure jump thunk forwarding to sub_00868180.
extern "C" void fn_0085DE10(void) {
    ext_00868180();
}

// [0x0085E210] sub_0085E210 (16 bytes)
// @name sub_0085E210
// @summary Empty function (returns immediately).
extern "C" void __cdecl fn_0085E210(void) {
    return;
}

// [0x0085F730] sub_0085F730 (16 bytes)
// @name sub_0085F730
// @summary Empty function (returns immediately).
extern "C" void __cdecl fn_0085F730(void) {
    return;
}

// [0x008523A4]
namespace lift_008523A4 {
extern void ext_0084A145();

// @name adjustStackAndTailCall_0084A145
// @summary Adjusts the stack pointer by 4 bytes and tail-calls ext_0084A145.
void sub_008523A4() {
    ext_0084A145();
}
} // namespace lift_008523A4

// [0x0085E690]
namespace lift_0085E690 {
// @name ToUpperAscii
// @summary Converts an ASCII lowercase letter (a-z) to uppercase; other values are returned unchanged. Result is in AL.
uint8_t ToUpperAscii(uint8_t ch) {
    uint8_t al = ch;
    if (al >= 0x61 && al <= 0x7A) {
        al = static_cast<uint8_t>(al - 0x20);
    }
    return al;
}
} // namespace lift_0085E690

// [0x00856FE0]
namespace lift_00856FE0 {
// @name sub_00856FE0
// @summary Copies a 32-bit value from a source pointer to a destination pointer and returns 0.
// @field stack +0x04 ptr dst (first argument, written through)
// @field stack +0x08 ptr src (second argument, read through)

uint32_t sub_00856FE0(uint32_t* dst, const uint32_t* src) {
    uint32_t value = *src;
    *dst = value;
    return 0;
}
} // namespace lift_00856FE0

// [0x00859D30]
namespace lift_00859D30 {
// @name sub_00859D30
// @summary Follows an indirection when flag 0x4 is set at +0x14, then returns the pointer at +0x4.
// @field Unknown +0x00 ptr field_0x00
// @field Unknown +0x04 ptr field_0x04
// @field Unknown +0x14 u8 field_0x14

uint32_t sub_00859D30(uint32_t arg0) {
    uint32_t eax = arg0;
    if (*reinterpret_cast<uint8_t*>(eax + 0x14) & 0x04) {
        eax = *reinterpret_cast<uint32_t*>(eax);
    }
    eax = *reinterpret_cast<uint32_t*>(eax + 0x04);
    return eax;
}
} // namespace lift_00859D30

// [0x0085BC20]
namespace lift_0085BC20 {
// @name GetField08
// @summary Returns the 32-bit value at offset +0x08 of the object pointed to by the first stack argument.
// @field field_0x08 +0x08 uint32_t field_0x08
// @field ...

uint32_t GetField08(uint32_t self_ptr) {
    return *reinterpret_cast<uint32_t*>(self_ptr + 0x08);
}
} // namespace lift_0085BC20

// [0x0085C260]
namespace lift_0085C260 {
// @name setFlagBit1Offset14
// @summary Sets bit 1 (0x2) in the 32-bit word at +0x14 of the object passed as the first argument.
// @field Object +0x14 uint32_t field_0x14

void setFlagBit1Offset14(void* self) {
    auto* base = reinterpret_cast<uint8_t*>(self);
    *reinterpret_cast<uint32_t*>(base + 0x14) |= 0x2u;
}
} // namespace lift_0085C260

// [0x00857490] sub_00857490 (19 bytes)
namespace lift_00857490 {
extern int mem_00AB86EC;

// @name CallGlobalObjectSlot10IfSet
// @summary If the global object pointer mem_00AB86EC is non-null, forward the single stack argument to its vtable slot at +0x10.
// @field Unknown +0x00 void* field_0x00
void fn_00857490(uint32_t arg) {
    // Load global object pointer (32-bit game address).
    const uintptr_t obj = static_cast<uintptr_t>(static_cast<uint32_t>(mem_00AB86EC));
    if (obj == 0) {
        return;
    }

    // obj->vtbl; slot at +0x10 (index 4 with 4-byte entries).
    using Slot = void (*)(uint32_t);
    const uintptr_t vtbl = *reinterpret_cast<const uintptr_t*>(obj);
    Slot fn = *reinterpret_cast<const Slot*>(vtbl + 0x10);
    fn(arg);
}
} // namespace lift_00857490

// [0x008574B0] sub_008574B0 (19 bytes)
namespace lift_008574B0 {
extern int mem_00AB86EC;

// @name forwardToGlobalSink
// @summary If the global sink object pointer is non-null, forward arg to its vtable slot 5 (+0x14) and return.
// @field GlobalSinkObject +0x00 void** vtable (object's vtable pointer)
// @field GlobalSinkObject +0x14 void (*field_0x14)(uint32_t) (vtable slot 5, cdecl, no this-pointer)
void fn_008574B0(uint32_t arg) {
    void* sink = reinterpret_cast<void*>(static_cast<uintptr_t>(static_cast<uint32_t>(mem_00AB86EC)));
    if (sink == nullptr) {
        return;
    }
    void** vtbl = lift_field<void**>(sink, 0x00);
    // Slot at byte offset 0x14 -> index 5 for 4-byte entries (32-bit target).
    auto slot = reinterpret_cast<void (*)(uint32_t)>(vtbl[5]);
    slot(arg);
}
} // namespace lift_008574B0

// [0x008573D0]
namespace lift_008573D0 {
// @name SafeDispatchFirstSlot
// @summary If global object pointer mem_00AB86EC is non-null, call the function pointer in its first slot with the argument and return the result; otherwise return -1.

extern uint32_t mem_00AB86EC;

int32_t fn_008573D0(int32_t arg) {
    uint32_t obj = mem_00AB86EC;
    if (obj == 0) {
        return -1;
    }
    using Slot0Fn = int32_t (*)(int32_t);
    Slot0Fn fn = *reinterpret_cast<Slot0Fn *>(static_cast<uintptr_t>(obj));
    return fn(arg);
}
} // namespace lift_008573D0

// [0x0085E030]
namespace lift_0085E030 {
// @name strcpy_impl
// @summary Copies a null-terminated C string from src to dst and returns dst.



extern char* sub_0085E030(char* dst, const char* src) {
    char* out = dst;
    char ch;
    do {
        ch = *src++;
        *dst++ = ch;
    } while (ch != '\0');
    return out;
}
} // namespace lift_0085E030

// [0x0085DA60] sub_0085DA60 (29 bytes)
namespace lift_0085DA60 {
extern int mem_00ABB380;
extern int mem_00AC018C;

// @name checkRangeAllZeroStride20
// @summary Scans 32-bit words in [mem_00ABB380, mem_00AC018C] at a 0x14-byte stride; returns 0 on the first nonzero word, else 1.
int fn_0085DA60(void* self) {
    (void)self;
    uintptr_t p = reinterpret_cast<uintptr_t>(&mem_00ABB380);
    const uintptr_t end = reinterpret_cast<uintptr_t>(&mem_00AC018C);
    for (;;) {
        if (*reinterpret_cast<const DWORD*>(p) != 0) {
            return 0;
        }
        p += 0x14;
        if (p > end) {
            return 1;
        }
    }
}
} // namespace lift_0085DA60

// [0x00852427] sub_00852427 (6 bytes)
namespace lift_00852427 {
// @name tailJumpThroughESI
// @summary Discards 4 bytes of stack, then transfers control to the function pointer stored at [esi].
//   Original asm: lea esp,[esp+4]; jmp dword ptr [esi]
//   Lift note: the stack discard and true tail-jump cannot be expressed in portable C++;
//   the target is invoked and this function returns to its caller.
void fn_00852427(void* esi) {
    using Fn = void (*)();
    Fn target = lift_field<Fn>(esi, 0);
    target();
}
} // namespace lift_00852427

// [0x008596E0] sub_008596E0 (16 bytes)
namespace lift_008596E0 {
// @name sub_008596E0
// @summary Auto-lifted identical-shape clone of 0x0079AF40 (AllocGlobalMemory).
namespace lift_0079AF40 {
// IAT slot for KERNEL32!GlobalAlloc. The slot holds the resolved function address at runtime.
extern uint32_t mem_00924214;

// @name AllocGlobalMemory
// @summary Calls KERNEL32!GlobalAlloc(uFlags=0, dwBytes=size) through the IAT slot and returns the HGLOBAL. Cdecl caller cleans up the argument.

// GlobalAlloc is stdcall; the IAT slot is called indirectly.
using GlobalAllocFn = HGLOBAL(__stdcall*)(UINT uFlags, SIZE_T dwBytes);

uint32_t fn_008596E0(uint32_t size) {
    auto global_alloc = reinterpret_cast<GlobalAllocFn>(static_cast<uintptr_t>(mem_00924214));
    return static_cast<uint32_t>(reinterpret_cast<uintptr_t>(global_alloc(0, size)));
}
} // namespace lift_0079AF40
} // namespace lift_008596E0

// [0x00859730]
namespace lift_00859730 {
// IAT slot for KERNEL32!LocalFree (0x00924210), read as a function pointer.
extern const uint32_t mem_00924210;

// @name LocalFreeWrapper
// @summary Calls KERNEL32!LocalFree on the first stack argument and returns its result.
uint32_t fn_00859730(void* hMem) {
    using LocalFreeFn = void* (*)(void*);
    auto localFree = reinterpret_cast<LocalFreeFn>(static_cast<uintptr_t>(mem_00924210));
    return static_cast<uint32_t>(reinterpret_cast<uintptr_t>(localFree(hMem)));
}
} // namespace lift_00859730
