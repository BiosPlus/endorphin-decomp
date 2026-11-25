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

// [0x007F8500]
namespace lift_007F8500 {
// @name compareFloatAt0x10
// @summary qsort-style comparator for two structs by their float field at +0x10
// @field Item +0x10 float field_0x10
int32_t sub_007F8500(const void* a, const void* b) {
    float va = *reinterpret_cast<const float*>(reinterpret_cast<const uint8_t*>(a) + 0x10);
    float vb = *reinterpret_cast<const float*>(reinterpret_cast<const uint8_t*>(b) + 0x10);
    if (va < vb) {
        return -1;
    }
    if (va > vb) {
        return 1;
    }
    return 0;
}
} // namespace lift_007F8500

// [0x007F4A60]
namespace lift_007F4A60 {
// @name addVec3Pair
// @summary Adds two pairs of 3-element float vectors (at +0x00 and +0x10) from src into dst.
void sub_007F4A60(float* dst, const float* src) {
    for (int i = 0; i < 3; ++i) {
        dst[i] += src[i];
    }
    for (int i = 4; i < 7; ++i) {
        dst[i] += src[i];
    }
}
} // namespace lift_007F4A60

// [0x007FC490]
namespace lift_007FC490 {
// @name Unknown::TransformVec3ByMatrix
// @summary Computes out[i] = m[i]*v0 + m[i+4]*v1 + m[i+8]*v2 for i in 0..2 (3-vector times 4-stride matrix).
// @field Unknown +0x00 float field_0x00
// @field Unknown +0x04 float field_0x04
// @field Unknown +0x08 float field_0x08
// @field Unknown +0x10 float field_0x10
// @field Unknown +0x14 float field_0x14
// @field Unknown +0x18 float field_0x18
// @field Unknown +0x20 float field_0x20
// @field Unknown +0x24 float field_0x24
// @field Unknown +0x28 float field_0x28
void Unknown_TransformVec3ByMatrix(const float* m, const float* v, float* out) {
    const float v0 = v[0];
    const float v1 = v[1];
    const float v2 = v[2];

    out[0] = m[0] * v0 + m[4] * v1 + m[8] * v2;
    out[1] = m[1] * v0 + m[5] * v1 + m[9] * v2;
    out[2] = m[2] * v0 + m[6] * v1 + m[10] * v2;
}
} // namespace lift_007FC490

// [0x007F63D0] sub_007F63D0 (73 bytes)
namespace lift_007F63D0 {
// Known callee 0x007C8880: get_field_0xa8 (Reads and returns the 32-bit field at offset 0xA8 from the given object pointer.)
extern uint32_t ext_007C8880(uint32_t obj);
// Known callee 0x007C89F0: getGridElementPtr (Computes pointer to a 24-byte element in a 2D array at (col, row))
extern uint32_t ext_007C89F0(uint32_t self, int32_t col, int32_t row);

// @name Unknown::RefreshGridElementAndNotify_007F63D0
// @class Unknown
// @summary Looks up a grid element from (col,row) indices held by sub-objects, caches field 0xA8 of the grid owner into self+0x0C, and invokes the element's callback (first dword) with self if non-null.
// @field Unknown +0x00 uint32_t field_0x00 (pointer to grid owner)
// @field Unknown +0x04 uint32_t field_0x04 (pointer to index-holder object)
// @field Unknown +0x0C uint32_t field_0x0C (cached result of ext_007C8880)
// @field GridOwner +0x00 uint32_t field_0x00 (grid self pointer passed to ext_007C89F0 / ext_007C8880)
// @field GridOwner +0x44 uint32_t field_0x44 (pointer to column index holder)
// @field IndexHolder +0x44 uint32_t field_0x44 (pointer to row index holder)
// @field IndexHolder +0x00 uint32_t field_0x00 (index value, low byte used)
void fn_007F63D0(void* self) {
    uint32_t grid_ptr = lift_field<uint32_t>(self, 0x00);
    uint32_t idx_ptr  = lift_field<uint32_t>(self, 0x04);

    void* grid = reinterpret_cast<void*>(static_cast<uintptr_t>(grid_ptr));
    void* idx  = reinterpret_cast<void*>(static_cast<uintptr_t>(idx_ptr));

    uint32_t col_ptr = lift_field<uint32_t>(grid, 0x44);
    uint32_t row_ptr = lift_field<uint32_t>(idx, 0x44);

    uint32_t grid_self = lift_field<uint32_t>(grid, 0x00);

    int32_t col = static_cast<int32_t>(lift_field<uint32_t>(reinterpret_cast<void*>(static_cast<uintptr_t>(col_ptr)), 0x00) & 0xFFu);
    int32_t row = static_cast<int32_t>(lift_field<uint32_t>(reinterpret_cast<void*>(static_cast<uintptr_t>(row_ptr)), 0x00) & 0xFFu);

    uint32_t elem_addr = ext_007C89F0(grid_self, col, row);

    lift_field<uint32_t>(self, 0x0C) = ext_007C8880(grid_self);

    void* elem = reinterpret_cast<void*>(static_cast<uintptr_t>(elem_addr));
    uint32_t callback = lift_field<uint32_t>(elem, 0x00);
    if (callback != 0) {
        using Callback = void (*)(void*);
        reinterpret_cast<Callback>(static_cast<uintptr_t>(callback))(self);
    }
}
} // namespace lift_007F63D0
