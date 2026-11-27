// Lifted C++ translation unit: lifted/NMData/TriggeredEventData.cpp
#include "lift_compat.h"
#include <cstdint>

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

// [0x004C24C0]
namespace lift_004C24C0 {
// @name NMData::TriggeredEventData::vfunc_21
// @class NMData::TriggeredEventData
// @summary Loads TriggeredEventData properties from XML/data node and updates event/name state.
// @field NMData::TriggeredEventData +0x14 uint8_t[28] name
// @field NMData::TriggeredEventData +0x15C int32_t field_0x15C
// @field NMData::TriggeredEventData +0x160 int32_t field_0x160
// @field NMData::TriggeredEventData +0x164 int32_t field_0x164
// @field NMData::TriggeredEventData +0x168 uint32_t field_0x168
// @field NMData::TriggeredEventData +0x16C void* field_0x16C
// @field NMData::TriggeredEventData +0x17C uint8_t field_0x17C


void __thiscall ext_0058F630(void* self, void* node);
uint32_t __thiscall ext_0063EFE0(void* self, const char* name);
void __cdecl ext_0053F5F0(void* out, void* prop);
void __cdecl ext_00427640(void* out, void* prop);
uint32_t __thiscall ext_0063F530(void* self, const char* name, uint32_t a, uint32_t b);
void __cdecl ext_0049F540(uint32_t prop, void* out, const char* key, uint32_t flags);
void __cdecl ext_004275E0(void* dst, uint32_t prop);
uint32_t __thiscall ext_0047A4A0(void* mgr, void* str);
uint32_t __thiscall ext_0047A880(void* mgr, void* obj);

extern const char* mem_00A9F9B8;
extern const char* mem_00A9F610;
extern const char* mem_00A9F604;
extern const char* mem_00A9F144;
extern const char* mem_00A9F140;
extern const char* mem_00A9F554;
extern const char mem_00944DFC[];
extern uint8_t* mem_00AE29D0;
extern int32_t mem_009849B0;
extern uint8_t mem_00AE2C28[];

extern void (__thiscall* mem_00924FE8)(void* str);
extern bool (__thiscall* mem_00924FEC)(const void* str);
extern void* (__cdecl* mem_00924FD0)(void* dst, const void* lhs, const void* rhs);
extern void* (__thiscall* mem_00924FDC)(void* dst, const void* src);
extern void (__thiscall* mem_00924FF4)(void* str);

static bool is_sentinel(uint32_t val) {
    return val == 0x00B53A34 || val == 0x00B53B30 || val == 0x00B53AB0 ||
           val == 0x00B53A70 || val == 0x00B53AF0;
}

void __thiscall fn_004C24C0(void* self, void* node) {
    ext_0058F630(self, node);

    uint32_t prop = ext_0063EFE0(node, mem_00A9F9B8);
    ext_0053F5F0(reinterpret_cast<uint8_t*>(self) + 0x15C, &prop);

    prop = ext_0063EFE0(node, mem_00A9F610);
    ext_0053F5F0(reinterpret_cast<uint8_t*>(self) + 0x160, &prop);

    uint32_t check = ext_0063EFE0(node, mem_00944DFC);
    if (!is_sentinel(check)) {
        prop = ext_0063EFE0(node, mem_00944DFC);
        ext_0053F5F0(reinterpret_cast<uint8_t*>(self) + 0x164, &prop);
    } else if (mem_00AE29D0 != nullptr && lift_field<int32_t>(mem_00AE29D0, 0x538) < 10) {
        using VFunc174 = void(__thiscall*)(void*);
        void** vtable = *reinterpret_cast<void***>(self);
        reinterpret_cast<VFunc174>(vtable[0x174 / 4])(self);
    }

    check = ext_0063EFE0(node, mem_00A9F604);
    if (!is_sentinel(check)) {
        prop = ext_0063EFE0(node, mem_00A9F604);
        ext_00427640(reinterpret_cast<uint8_t*>(self) + 0x17C, &prop);
    }

    uint32_t val = ext_0063F530(node, mem_00A9F144, 0, 1);
    if (is_sentinel(val)) {
        val = 0x00B53B30;
    }
    ext_0049F540(val, reinterpret_cast<uint8_t*>(self) + 0x16C, mem_00A9F140, 0);

    using VFunc16C = void(__thiscall*)(void*);
    void** vtable = *reinterpret_cast<void***>(self);
    reinterpret_cast<VFunc16C>(vtable[0x16C / 4])(self);

    alignas(4) uint8_t str_buf[28];
    mem_00924FE8(str_buf);

    uint32_t name_prop = ext_0063EFE0(node, mem_00A9F554);
    ext_004275E0(str_buf, name_prop);

    if (mem_00AE29D0 != nullptr) {
        uint32_t res = 0;
        if (!mem_00924FEC(str_buf)) {
            res = ext_0047A4A0(mem_00AE29D0, str_buf);
        } else {
            res = ext_0047A880(mem_00AE29D0, self);
        }
        lift_field<uint32_t>(self, 0x168) = res;

        if (mem_00AE29D0 != nullptr && lift_field<int32_t>(mem_00AE29D0, 0x538) < mem_009849B0) {
            using VFuncF8 = int32_t(__thiscall*)(void*);
            int32_t idx = reinterpret_cast<VFuncF8>(vtable[0xF8 / 4])(self);
            if (idx != 2 && idx != 8 && idx != 7) {
                uint8_t* prefix = mem_00AE2C28 + idx * 28;
                uint8_t* self_name = reinterpret_cast<uint8_t*>(self) + 0x14;
                alignas(4) uint8_t tmp_buf[28];
                mem_00924FD0(tmp_buf, prefix, self_name);
                mem_00924FDC(self_name, tmp_buf);
                mem_00924FF4(tmp_buf);
            }
        }
    }

    mem_00924FF4(str_buf);
}
} // namespace lift_004C24C0
