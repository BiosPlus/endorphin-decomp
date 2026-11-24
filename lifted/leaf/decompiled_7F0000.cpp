// Lifted C++ translation unit: lifted/leaf/decompiled_7F0000.cpp
#include "lift_compat.h"
#include <cstdint>
#include <cstring>

// [0x007F0B60] sub_007F0B60 (34 bytes)
namespace lift_007F0B60 {
// @name Unknown::appendZeroedEntry
// @class Unknown
// @summary Appends one zero-initialized 20-byte entry to a dynamic array header (base ptr, count) and increments count.
// @field Unknown +0x00 uint32_t entries_base (pointer to 20-byte entry array, stored as 32-bit address)
// @field Unknown +0x04 uint32_t entry_count
// Entry (20 bytes, stride 0x14) zeroed fields:
// @field Entry +0x00 uint32_t field_0x00
// @field Entry +0x04 uint32_t field_0x04
// @field Entry +0x08 uint32_t field_0x08
// @field Entry +0x0C uint32_t field_0x0c
// @field Entry +0x10 uint32_t field_0x10
void fn_007F0B60(void* self) {
    // 32-bit target: the header stores 32-bit addresses.
    auto* hdr = static_cast<uint32_t*>(self);
    uint32_t count = hdr[1];
    auto* base = reinterpret_cast<uint8_t*>(static_cast<uintptr_t>(hdr[0]));

    // Entry stride is 20 bytes (count * 5 dwords).
    uint8_t* entry = base + static_cast<size_t>(count) * 20u;
    std::memset(entry, 0, 20);

    hdr[1] = count + 1u;
}
} // namespace lift_007F0B60

// [0x007F1480] sub_007F1480 (36 bytes)
namespace lift_007F1480 {
// @name CPU::hasSSE
// @class CPU
// @summary Returns 0x02000000 if the CPU reports SSE support (CPUID leaf 1, EDX bit 25), otherwise 0.
// @field CPU +0x00 DWORD (none) (no fields accessed)
DWORD fn_007F1480(void) {
#if defined(__GNUC__) || defined(__clang__)
    return __builtin_cpu_supports("sse") ? 0x02000000u : 0u;
#else
    return 0u;
#endif
}
} // namespace lift_007F1480

// [0x007F0B30]
namespace lift_007F0B30 {
extern uint32_t mem_read32(uint32_t addr);
extern void mem_write32(uint32_t addr, uint32_t val);

// @name insertNodeIntoBucket
// @summary Allocates an 8-byte node from a pool, stores edi and bucket index, and prepends it to the bucket's linked list.
// @field struct_ecx +0x00 uint32_t buckets
// @field struct_ecx +0x0C uint32_t node_pool
// @field struct_ecx +0x14 uint32_t node_count
// @field struct_edi +0x154 uint32_t field_0x154
// @field bucket +0x0C uint32_t head
// @field bucket +0x10 uint32_t count
// @field node +0x00 uint32_t next
// @field node +0x04 uint32_t value
uint32_t sub_007F0B30(uint32_t ecx, uint32_t edx, uint32_t edi) {
    uint32_t buckets = mem_read32(ecx);
    mem_write32(edi + 0x154, edx);
    uint32_t bucket = buckets + edx * 20;
    uint32_t pool = mem_read32(ecx + 0x0C);
    uint32_t idx = mem_read32(ecx + 0x14);
    uint32_t node = pool + idx * 8;
    mem_write32(ecx + 0x14, idx + 1);
    mem_write32(node + 0x04, edi);
    uint32_t head = mem_read32(bucket + 0x0C);
    mem_write32(node, head);
    mem_write32(bucket + 0x10, mem_read32(bucket + 0x10) + 1);
    mem_write32(bucket + 0x0C, node);
    return bucket;
}
} // namespace lift_007F0B30

// [0x007F0B00]
namespace lift_007F0B00 {
extern uint32_t mem_read32(uint32_t addr);
extern void mem_write32(uint32_t addr, uint32_t val);

// @name SpatialHash::insertItem
// @class SpatialHash
// @summary Inserts an item into a spatial hash bucket and updates its bucket index
// @field SpatialHash +0x00 uint32_t buckets
// @field SpatialHash +0x08 uint32_t nodePool
// @field SpatialHash +0x10 uint32_t nodeCount
// @field Item +0x218 uint32_t bucketIndex
uint32_t __fastcall sub_007F0B00(uint32_t ecx, uint32_t edx, uint32_t edi) {
    uint32_t buckets = mem_read32(ecx);
    mem_write32(edi + 0x218, edx);
    uint32_t bucket = buckets + (edx * 5) * 4;
    uint32_t nodePool = mem_read32(ecx + 0x8);
    uint32_t nodeCount = mem_read32(ecx + 0x10);
    uint32_t node = nodePool + nodeCount * 8;
    mem_write32(ecx + 0x10, nodeCount + 1);
    mem_write32(node + 0x4, edi);
    uint32_t head = mem_read32(bucket + 0x4);
    mem_write32(node, head);
    mem_write32(bucket + 0x8, mem_read32(bucket + 0x8) + 1);
    mem_write32(bucket + 0x4, node);
    return bucket;
}
} // namespace lift_007F0B00

// [0x007F6690] sub_007F6690 (54 bytes)
namespace lift_007F6690 {
// Known callee 0x007C7000: sub_007C7000_derefDwordAt44Thunk (adds +0x44 to arg and tail-forwards to derefDword, returning the dword read there.)
extern uint32_t ext_007C7000(uint32_t self);
// Known callee 0x007CCA00: getIndexedField_007CCA00 (reads a 32-bit value from a 40-byte-strided table by index.)
extern uint32_t ext_007CCA00(uint32_t arg0);

// @name CallLookupResultWithOutParam
// @summary Stores arg0 through out-pointer arg3, looks up a handler from arg0, and if found calls it with (arg0, arg1, arg2, out); otherwise returns 0.
void fn_007F6690(uint32_t arg0, uint32_t arg1, uint32_t arg2, uint32_t* out) {
    *out = arg0;
    uint32_t key = ext_007C7000(arg0);
    uint32_t handler = ext_007CCA00(key);
    if (handler == 0) {
        return;
    }
    using Handler = uint32_t (*)(uint32_t, uint32_t, uint32_t, uint32_t*);
    auto fn = reinterpret_cast<Handler>(static_cast<uintptr_t>(handler));
    (void)fn(arg0, arg1, arg2, out);
}
} // namespace lift_007F6690

// [0x007F0BC0] sub_007F0BC0 (55 bytes)
namespace lift_007F0BC0 {
// @name UnknownObject::CompareFloatKeyAt0x58
// @class Unknown
// @summary Three-way compares the float at +0x58 of two objects reached through double-pointer handles; returns -1, 0, or 1.
// @field Unknown +0x58 float field_0x58
int fn_007F0BC0(void** a, void** b) {
    const float x = *reinterpret_cast<const float*>(static_cast<const char*>(*a) + 0x58);
    const float y = *reinterpret_cast<const float*>(static_cast<const char*>(*b) + 0x58);

    if (y > x) {
        return -1;
    }
    if (y < x) {
        return 1;
    }
    return 0;
}
} // namespace lift_007F0BC0
