// Lifted C++ translation unit: lifted/clones/auto_clones_7A0000.cpp
#include "lift_compat.h"

// [0x007AE070]
namespace lift_007AE070 {
// @name sub_007AE070
// @summary Calls ext_007AE080 and tail-calls ext_007AE090


extern void ext_007AE080(void);
extern void ext_007AE090(void);

void fn_007AE070(void) {
    ext_007AE080();
    ext_007AE090();
}
} // namespace lift_007AE070

// [0x007AE0B0]
namespace lift_007AE0B0 {
extern void ext_007AE0C0(void);
extern void ext_007AE0D0(void);

// @name sub_007AE0B0
// @summary Calls sub_007AE0C0 and tail-calls sub_007AE0D0.
void fn_007AE0B0(void) {
    ext_007AE0C0();
    ext_007AE0D0();
}
} // namespace lift_007AE0B0

// [0x007AE0F0]
namespace lift_007AE0F0 {
extern void ext_007AE100(void);
extern void ext_007AE110(void);

// @name sub_007AE0F0
// @summary Calls ext_007AE100 and tail-calls ext_007AE110.
void fn_007AE0F0(void) {
    ext_007AE100();
    ext_007AE110();
}
} // namespace lift_007AE0F0
