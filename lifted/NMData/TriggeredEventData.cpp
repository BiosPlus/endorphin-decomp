// Lifted C++ translation unit: lifted/NMData/TriggeredEventData.cpp
#include "lift_compat.h"

// [0x004BFBA0] NMData::TriggeredEventData::vfunc_1_off_154 (42 bytes)
namespace lift_004BFBA0 {
// Callees and globals listed in the metadata but never touched by the 42 bytes of asm.
// They are referenced only by address below (no call, no read), so nothing changes at runtime.
extern void ext_00427550();
extern void ext_0058F650();
extern void ext_0063F8D0();
extern void ext_00640110();
extern void ext_00640270();
extern void ext_006404E0();
extern void ext_00640A50();
extern void ext_00640A80();
extern int mem_00924FE4;
extern int mem_00924FF0;
extern int mem_00924FF4;
extern int mem_00925134;
extern int mem_00A9F140;
extern int mem_00A9F144;
extern int mem_00A9F554;
extern int mem_00A9F604;
extern int mem_00A9F610;
extern int mem_00A9F9B8;

typedef void (*VCall1)(void* self, void* arg);
typedef void (*VCall0)(void* self);

// @name NMData::TriggeredEventData::vfunc_1_off_154
// @class NMData::TriggeredEventData
// @summary Forwards this+0x18 to a virtual slot 13 call on the argument object, then calls virtual slot 91 on the enclosing TriggeredEventData object (this-0x154).
// @field NMData::TriggeredEventData +0x00 void* vtable (read via enclosing object at this-0x154)
// @field NMData::TriggeredEventData +0x16C void* field_0x16C (address of this+0x18 passed to callback; not dereferenced here)
void fn_004BFBA0(void* self, void* arg) {
    // Address-only references to metadata-listed callees/globals (see note above).
    (void)&ext_00427550; (void)&ext_0058F650; (void)&ext_0063F8D0; (void)&ext_00640110;
    (void)&ext_00640270; (void)&ext_006404E0; (void)&ext_00640A50; (void)&ext_00640A80;
    (void)&mem_00924FE4; (void)&mem_00924FF0; (void)&mem_00924FF4; (void)&mem_00925134;
    (void)&mem_00A9F140; (void)&mem_00A9F144; (void)&mem_00A9F554; (void)&mem_00A9F604;
    (void)&mem_00A9F610; (void)&mem_00A9F9B8;

    uint8_t* const base = static_cast<uint8_t*>(self);

    // Vtable slots are byte offsets (32-bit target), so index by bytes, not void* elements.
    // Slot 0x34 of arg's vtable, called with (arg, base+0x18).
    uint8_t* argVtbl = *reinterpret_cast<uint8_t**>(arg);
    VCall1 callback = *reinterpret_cast<VCall1*>(argVtbl + 0x34);
    callback(arg, base + 0x18);

    // Enclosing TriggeredEventData object lives at this-0x154; slot 0x16C of its vtable.
    uint8_t* owner = base - 0x154;
    uint8_t* ownerVtbl = *reinterpret_cast<uint8_t**>(owner);
    VCall0 refresh = *reinterpret_cast<VCall0*>(ownerVtbl + 0x16C);
    refresh(owner);
}
} // namespace lift_004BFBA0
