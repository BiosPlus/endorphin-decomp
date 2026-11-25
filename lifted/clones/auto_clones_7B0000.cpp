// Lifted C++ translation unit: lifted/clones/auto_clones_7B0000.cpp
#include "lift_compat.h"
#include <cstdint>
#include <cstring>

#include <cstring>
namespace lift_007B1E80 {
extern void ext_007B1E90();
extern void ext_007B1EA0();

// @name sub_007B1E80
// @summary Calls sub_007B1E90 and tail-calls sub_007B1EA0.
void fn_007B1E80() {
    ext_007B1E90();
    ext_007B1EA0();
}
} // namespace lift_007B1E80

// [0x007B1F60] sub_007B1F60 (10 bytes)
namespace lift_007B1F60 {
// @name sub_007B1F60
// @summary Auto-lifted identical-shape clone of 0x00704BE0 (sub_00704BE0).
namespace lift_00704BE0 {
// @name sub_00704BE0
// @summary Auto-lifted identical-shape clone of 0x007AE0F0 (sub_007AE0F0).
namespace lift_007AE0F0 {
extern void ext_007B1F70(void);
extern void ext_007B1F80(void);

// @name sub_007AE0F0
// @summary Calls ext_007AE100 and tail-calls ext_007AE110.
void fn_007B1F60(void) {
    ext_007B1F70();
    ext_007B1F80();
}
} // namespace lift_007AE0F0
} // namespace lift_00704BE0
} // namespace lift_007B1F60
