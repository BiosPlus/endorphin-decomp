// Lifted C++ translation unit: lifted/leaf/tiny_7F0000.cpp
#include "lift_compat.h"

// [0x007FC290]
namespace lift_007FC290 {
// @name copyVec3Float
// @summary Copies three consecutive 32-bit floats (offsets 0x00, 0x04, 0x08) from src to dst.
// @field Unknown +0x00 float field_0x00
// @field Unknown +0x04 float field_0x04
// @field Unknown +0x08 float field_0x08
void copyVec3Float(const float* src, float* dst) {
    dst[0] = src[0];
    dst[1] = src[1];
    dst[2] = src[2];
}
} // namespace lift_007FC290

// [0x007F6830]
namespace lift_007F6830 {
extern uint32_t mem_read32(uint32_t addr);
extern void mem_write32(uint32_t addr, uint32_t val);

// @name insertListNodeAfter
// @summary Inserts a doubly-linked list node after the given node.
// @field ListNode +0x08 uint32_t next
// @field ListNode +0x0C uint32_t prev
void sub_007F6830(uint32_t nodeAddr, uint32_t newNodeAddr) {
    uint32_t nextAddr = mem_read32(nodeAddr + 0x8);
    mem_write32(newNodeAddr + 0x8, nextAddr);
    mem_write32(newNodeAddr + 0xC, nodeAddr);
    nextAddr = mem_read32(nodeAddr + 0x8);
    mem_write32(nextAddr + 0xC, newNodeAddr);
    mem_write32(nodeAddr + 0x8, newNodeAddr);
}
} // namespace lift_007F6830

// [0x007F6810]
namespace lift_007F6810 {
// @name allocFromFreeList
// @summary Pops the head node off a free list, stores a value in the node, and increments the list count.
// @field FreeList +0x08 void* field_0x08
// @field FreeList +0x0C uint32_t field_0x0C
// @field FreeNode +0x00 uint32_t field_0x00
// @field FreeNode +0x08 void* field_0x08

void allocFromFreeList(uint8_t* self, uint32_t value) {
    uint8_t* head = *reinterpret_cast<uint8_t**>(self + 0x08);
    if (head == nullptr) {
        return;
    }
    *reinterpret_cast<uint8_t**>(self + 0x08) = *reinterpret_cast<uint8_t**>(head + 0x08);
    *reinterpret_cast<uint32_t*>(head) = value;
    ++*reinterpret_cast<uint32_t*>(self + 0x0C);
}
} // namespace lift_007F6810

// [0x007FC2B0] sub_007FC2B0 (29 bytes)
namespace lift_007FC2B0 {
// @name Vec3Dot
// @class (none)
// @summary Returns the 3-component dot product of two float vectors (y and x terms summed first, then z).
// @field Unknown +0x00 float field_0x00 (read via both pointer args: ecx and eax)
// @field Unknown +0x04 float field_0x04 (read via both pointer args: ecx and eax)
// @field Unknown +0x08 float field_0x08 (read via both pointer args: ecx and eax)
float fn_007FC2B0(const float* a, const float* b) {
    // The original uses x87 extended-precision accumulation and rounds only on the final store.
    // Products of two floats are exact in double, so accumulating in double and rounding once
    // at the end matches that behavior closely.
    const double yy = static_cast<double>(a[1]) * static_cast<double>(b[1]);
    const double xx = static_cast<double>(a[0]) * static_cast<double>(b[0]);
    const double zz = static_cast<double>(a[2]) * static_cast<double>(b[2]);
    const double sum = (yy + xx) + zz;
    return static_cast<float>(sum);
}
} // namespace lift_007FC2B0
