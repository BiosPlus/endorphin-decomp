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

// [0x007F67C0] sub_007F67C0 (74 bytes)
namespace lift_007F67C0 {
// @name FreeList_Init
// @summary Initialises a 16-byte-node free list of `count` nodes starting at self->base.
// @field FreeList +0x00 uint32_t base
// @field FreeList +0x04 uint32_t reserved
// @field FreeList +0x08 uint32_t head
// @field FreeList +0x0c uint32_t tail
void fn_007F67C0(void* self, int count) {
    // Guest addresses are 32-bit; treat them as integers and map to host pointers.
    auto at = [](uint32_t addr) {
        return reinterpret_cast<void*>(static_cast<uintptr_t>(addr));
    };

    // Link node[i].next (at +0x08) -> node[i+1] for i in [0, count-2].
    for (int i = 0; i < count - 1; ++i) {
        uint32_t base = lift_field<uint32_t>(self, 0x00);
        uint32_t node = base + static_cast<uint32_t>(i) * 0x10u;
        lift_field<uint32_t>(at(node), 0x08) = node + 0x10u;
    }

    // Terminate the last node: next = 0 at base + count*16 - 8.
    uint32_t base = lift_field<uint32_t>(self, 0x00);
    uint32_t last = base + (static_cast<uint32_t>(count) << 4) - 0x08u;
    lift_field<uint32_t>(at(last), 0x00) = 0;

    lift_field<uint32_t>(self, 0x04) = 0;
    lift_field<uint32_t>(self, 0x08) = base;   // head
    lift_field<uint32_t>(self, 0x0c) = 0;      // tail
}
} // namespace lift_007F67C0

// [0x007FC440]
namespace lift_007FC440 {
// @name transformPoint3ByMatrix
// @summary Transforms a 3-float point by a 4x4 float matrix (translation in the last row of each column group), writing 3 floats to out
// (free function, no @class/@field: all accesses are through raw pointer arguments)


// eax = matrix pointer (16 floats), ecx = input point pointer (3 floats), edx = output pointer (3 floats)
static inline float lift_load_f32(uint32_t addr) {
    float f;
    std::memcpy(&f, reinterpret_cast<const void*>(static_cast<uintptr_t>(addr)), sizeof(f));
    return f;
}

static inline void lift_store_f32(uint32_t addr, float f) {
    std::memcpy(reinterpret_cast<void*>(static_cast<uintptr_t>(addr)), &f, sizeof(f));
}

void sub_007FC440(uint32_t eax, uint32_t ecx, uint32_t edx) {
    const uint32_t m = eax;
    const uint32_t v = ecx;
    const uint32_t out = edx;

    const float v0 = lift_load_f32(v + 0x0);
    const float v1 = lift_load_f32(v + 0x4);
    const float v2 = lift_load_f32(v + 0x8);

    // out.x = m[0x10]*v1 + m[0x00]*v0 + m[0x20]*v2 + m[0x30]
    float x = lift_load_f32(m + 0x10) * v1;
    x = x + lift_load_f32(m + 0x00) * v0;
    x = x + lift_load_f32(m + 0x20) * v2;
    x = x + lift_load_f32(m + 0x30);
    lift_store_f32(out + 0x0, x);

    // out.y = m[0x04]*v0 + m[0x14]*v1 + m[0x24]*v2 + m[0x34]
    float y = lift_load_f32(m + 0x04) * v0;
    y = y + lift_load_f32(m + 0x14) * v1;
    y = y + lift_load_f32(m + 0x24) * v2;
    y = y + lift_load_f32(m + 0x34);
    lift_store_f32(out + 0x4, y);

    // out.z = m[0x08]*v0 + m[0x18]*v1 + m[0x28]*v2 + m[0x38]
    float z = lift_load_f32(m + 0x08) * v0;
    z = z + lift_load_f32(m + 0x18) * v1;
    z = z + lift_load_f32(m + 0x28) * v2;
    z = z + lift_load_f32(m + 0x38);
    lift_store_f32(out + 0x8, z);
}
} // namespace lift_007FC440

// [0x007F7FA0]
namespace lift_007F7FA0 {
// @name Vec3DifferenceLength
// @summary Returns the Euclidean length of (a - b) for two 3-float vectors (ecx = a, eax = b).

// IAT thunk to MSVCR80!_CIsqrt: square root of a single float.
extern float ext_006A7250(float value);

float Vec3DifferenceLength(const float* a, const float* b) {
    float d[3];
    d[0] = a[0] - b[0];
    d[1] = a[1] - b[1];
    d[2] = a[2] - b[2];

    float sumSquares = d[0] * d[0] + d[1] * d[1] + d[2] * d[2];
    return ext_006A7250(sumSquares);
}
} // namespace lift_007F7FA0

// [0x007F7190]
namespace lift_007F7190 {
// @name selectScaledFloatCandidate
// @summary If b*c > a, store c to *out and return 1; else if a > b*d, store d and return 1; else return 0.
//
// Original x87 code: arguments are float a, b, c, d; out is a float* (first stack arg).
// The product b*c is rounded to float (stored to memory in the original); b*d is
// compared at extended precision, which for two floats is exact, so it is computed
// in double here (also exact).

extern __cdecl INT fn_007F7190(FLOAT* out, FLOAT a, FLOAT b, FLOAT c, FLOAT d) {
    const FLOAT t = b * c;
    if (t > a) {
        *out = c;
        return 1;
    }
    const DOUBLE p = static_cast<DOUBLE>(b) * static_cast<DOUBLE>(d);
    if (static_cast<DOUBLE>(a) > p) {
        *out = d;
        return 1;
    }
    return 0;
}
} // namespace lift_007F7190

// [0x007F6750] sub_007F6750 (99 bytes)
namespace lift_007F6750 {
// @name ScalarTripleProductOffsets
// @summary Returns dot(d, cross(b - a, c - a)) for three 3-float points a, b, c and a 3-float vector d.

// Computes the scalar triple product d . ((b - a) x (c - a)).
// Inputs are 3-component float vectors (x, y, z at offsets 0, 4, 8).
// Intermediates are kept in double to approximate the x87 extended-precision
// accumulation of the original code; the result is rounded to float at return.
float fn_007F6750(const float* a, const float* b, const float* c, const float* d) {
    const double ux = static_cast<double>(b[0]) - a[0];
    const double uy = static_cast<double>(b[1]) - a[1];
    const double uz = static_cast<double>(b[2]) - a[2];

    const double vx = static_cast<double>(c[0]) - a[0];
    const double vy = static_cast<double>(c[1]) - a[1];
    const double vz = static_cast<double>(c[2]) - a[2];

    // cross(u, v)
    const double cx = uy * vz - uz * vy;
    const double cy = uz * vx - ux * vz;
    const double cz = ux * vy - uy * vx;

    const double result = static_cast<double>(d[0]) * cx
                        + static_cast<double>(d[1]) * cy
                        + static_cast<double>(d[2]) * cz;

    return static_cast<float>(result);
}
} // namespace lift_007F6750

// [0x007F9CE0] sub_007F9CE0 (103 bytes)
namespace lift_007F9CE0 {
// @name CopyFloatArrayForward
// @summary Copies `count` consecutive floats from src to dst in ascending order (cdecl, 3 args).
void fn_007F9CE0(int32_t count, float* dst, const float* src) {
    // Equivalent to: for (i = 0; i < count; ++i) dst[i] = src[i];
    // The original unrolls by 4 and falls back to a scalar tail; both forward-copy
    // exactly `count` floats, so the single loop below is behaviour-preserving.
    for (int32_t i = 0; i < count; ++i) {
        dst[i] = src[i];
    }
}
} // namespace lift_007F9CE0

// [0x007FC4E0]
namespace lift_007FC4E0 {
extern uint32_t mem_read32(uint32_t addr);
extern void mem_write32(uint32_t addr, uint32_t val);

// @name copyFloat16
// @summary Copies 16 32-bit floats (64 bytes, e.g. a 4x4 matrix) from eax to ecx.
void sub_007FC4E0(uint32_t ecx_dst, uint32_t eax_src) {
    for (uint32_t offset = 0; offset < 0x40; offset += 4) {
        mem_write32(ecx_dst + offset, mem_read32(eax_src + offset));
    }
}
} // namespace lift_007FC4E0

// [0x007F9D50]
namespace lift_007F9D50 {
// @name negateFloatArray
// @summary Negates an array of floats in-place.


void __cdecl sub_007F9D50(int32_t count, float* data) {
    float* end = data + count;
    for (float* p = data; p < end; ++p) {
        *p = -(*p);
    }
}
} // namespace lift_007F9D50

// [0x007FC3D0] sub_007FC3D0 (111 bytes)
namespace lift_007FC3D0 {
// @name vec3QuatCrossHalf_007FC3D0
// @summary Computes four half-scaled components from a 4-float input (ecx) and a 3-float input (eax), writing 4 floats to out (edx).
// Register-argument layout (no class context):
//   ecx -> float a[4]  (a0..a3 at +0x00..+0x0C)
//   eax -> float b[3]  (b0..b2 at +0x00..+0x08)
//   edx -> float out[4]

extern const double mem_00993828;  // .rdata double 0.5

void __cdecl fn_007FC3D0(const float* a, const float* b, float* out) {
    const float half = static_cast<float>(mem_00993828);

    const float a0 = a[0];
    const float a1 = a[1];
    const float a2 = a[2];
    const float a3 = a[3];
    const float b0 = b[0];
    const float b1 = b[1];
    const float b2 = b[2];

    out[0] = ((-a1 * b0) - a2 * b1 - a3 * b2) * half;
    out[1] = ((a0 * b0 + a3 * b1) - a2 * b2) * half;
    out[2] = ((a0 * b1 - a3 * b0) + a1 * b2) * half;
    out[3] = ((a2 * b0 - a1 * b1) + a0 * b2) * half;
}
} // namespace lift_007FC3D0
