// Lifted C++ translation unit: lifted/NMData/TopLevelState.cpp
#include "lift_compat.h"
extern "C" void ext_004EBC80(uint32_t value, void* subobject);

// [0x004EBE10] NMData::TopLevelState::vfunc_1 (20 bytes)
// @name NMData::TopLevelState::vfunc_1
// @class NMData::TopLevelState
// @summary Forwards its single stack argument and the address of the subobject at +0x14C to ext_004EBC80.
// @field NMData::TopLevelState +0x14C uint8_t field_0x14C (address only, not read or written here)
void fn_004EBE10(void* self, uint32_t value) {
    void* subobject = static_cast<uint8_t*>(self) + 0x14C;
    ext_004EBC80(value, subobject);
}

// [0x004EBD50]
namespace lift_004EBD50 {
// @name NMData::TopLevelState::vfunc_3
// @class NMData::TopLevelState
// @summary Conditionally updates a child name from field_0x14C before delegating to NMData::State::vfunc_3.
// @field NMData::TopLevelState +0x14C uint8_t field_0x14C


extern uint32_t mem_00B5A0B8;
extern uint32_t mem_00AA23C8;
extern void* mem_00924FF0;

    void __thiscall ext_00682860(void* self);
    void __thiscall ext_006826D0(void* self, void* arg);
    void* __thiscall ext_00640110(void* self, uint32_t arg);
    void __thiscall ext_00427550(void* self, const char* name);
    uint32_t __thiscall ext_0049DBF0(void* self, void* arg);
    void __thiscall ext_006828F0(void* self);

uint32_t __thiscall fn_004EBD50(void* self, void* arg0) {
    if (mem_00B5A0B8 == 0) {
        return ext_0049DBF0(self, arg0);
    }

    uint8_t local_obj[0x28];
    ext_00682860(local_obj);

    void* field_14c = reinterpret_cast<uint8_t*>(self) + 0x14C;
    ext_006826D0(local_obj, field_14c);

    void* orig_arg = arg0;
    arg0 = ext_00640110(orig_arg, mem_00AA23C8);

    using c_str_fn = const char* (__thiscall*)(void*);
    const char* name = reinterpret_cast<c_str_fn>(mem_00924FF0)(field_14c);
    ext_00427550(&arg0, name);

    uint32_t result = ext_0049DBF0(self, orig_arg);
    ext_006828F0(local_obj);
    return result;
}
} // namespace lift_004EBD50
