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
