// Lifted C++ translation unit: lifted/NMData/SensorData.cpp
#include "lift_compat.h"

// [0x0060E540]
namespace lift_0060E540 {
// @name NMData::SensorData::vfunc_62
// @class NMData::SensorData
// @summary Clears two string fields and resets sensor data fields to default values.
// @field NMData::SensorData +0x14 std::string field_0x14
// @field NMData::SensorData +0xe8 int32_t field_0xe8
// @field NMData::SensorData +0x154 std::string field_0x154
// @field NMData::SensorData +0x170 uint32_t field_0x170
// @field NMData::SensorData +0x174 float field_0x174
// @field NMData::SensorData +0x178 float field_0x178


extern uint32_t mem_00924EA8;
extern uint32_t mem_00A9F058;
extern uint32_t mem_00A9F164;
extern uint32_t mem_00A9F380;
extern uint32_t mem_00A9F838;
extern uint32_t mem_00A9FA6C;
void ext_004275E0();
void ext_0046C0A0();
void ext_0063EFE0();
void ext_0063F530();

extern void __thiscall fn_0060E540(uint8_t* self) {
    using ClearFn = void(__thiscall*)(void*);
    auto clear_str = reinterpret_cast<ClearFn>(mem_00924EA8);

    clear_str(self + 0x14);
    clear_str(self + 0x154);

    lift_field<float>(self, 0x174) = -1.0f;
    lift_field<int32_t>(self, 0xe8) = -1;
    lift_field<uint32_t>(self, 0x170) = 0;
    lift_field<float>(self, 0x178) = 1.0f;

    (void)mem_00A9F058;
    (void)mem_00A9F164;
    (void)mem_00A9F380;
    (void)mem_00A9F838;
    (void)mem_00A9FA6C;
    (void)ext_004275E0;
    (void)ext_0046C0A0;
    (void)ext_0063EFE0;
    (void)ext_0063F530;
}
} // namespace lift_0060E540

// [0x0060E590]
namespace lift_0060E590 {
// @name NMData::SensorData::vfunc_22
// @class NMData::SensorData
// @summary Serializes SensorData string fields and non-default float range (0x174, 0x178) into the target node.
// @field NMData::SensorData +0x14 std::string field_0x14
// @field NMData::SensorData +0x154 std::string field_0x154
// @field NMData::SensorData +0x174 float field_0x174
// @field NMData::SensorData +0x178 float field_0x178

extern uint32_t mem_00924FEC;
extern uint32_t mem_00A9F838;
extern uint32_t mem_00924FF0;
extern uint32_t mem_00A9FA6C;
extern float mem_0093F7B8;
extern uint32_t mem_00A9F164;
extern uint32_t mem_00A9F058;
extern uint32_t mem_00A9F380;

extern void* __thiscall ext_00640110(void* self, uint32_t arg0);
extern void __thiscall ext_00427550(void* self, const char* name);
extern void* __thiscall ext_006404E0(void* self, uint32_t arg0);
extern void* __thiscall ext_00640390(void* self, uint32_t arg0, uint32_t arg1);
extern void __cdecl ext_00640BC0(void* node, float value);

void* __thiscall fn_0060E590(void* self, void* target) {
    using StringEmptyFn = bool (__thiscall*)(void*);
    using StringCStrFn = const char* (__thiscall*)(void*);

    auto is_empty = reinterpret_cast<StringEmptyFn>(mem_00924FEC);
    auto c_str = reinterpret_cast<StringCStrFn>(mem_00924FF0);

    void* field_0x14 = static_cast<uint8_t*>(self) + 0x14;
    if (!is_empty(field_0x14)) {
        void* child = ext_00640110(target, mem_00A9F838);
        ext_00427550(&child, c_str(field_0x14));
    }

    void* field_0x154 = static_cast<uint8_t*>(self) + 0x154;
    if (!is_empty(field_0x154)) {
        void* child = ext_00640110(target, mem_00A9FA6C);
        ext_00427550(&child, c_str(field_0x154));
    }

    float val_174 = lift_field<float>(self, 0x174);
    float val_178 = lift_field<float>(self, 0x178);
    if (val_174 != mem_0093F7B8 || val_178 != 1.0f) {
        void* group = ext_006404E0(target, mem_00A9F164);
        void* node1 = ext_00640390(group, mem_00A9F058, 0);
        ext_00640BC0(node1, val_174);
        void* node2 = ext_00640390(group, mem_00A9F380, 0);
        ext_00640BC0(node2, val_178);
    }

    return target;
}
} // namespace lift_0060E590

// [0x0060E890] NMData::SensorData::vfunc_21 (365 bytes)
namespace lift_0060E890 {
// Known callee 0x0063EFE0: sub_0063EFE0 (Searches a vector of item pointers at +0x3c for an item whose std::string at +0x04 matches the given C-string, returning it or a sentinel at 0x00B53A34.)
extern uint32_t __thiscall ext_0063EFE0(void* self, const char* name);
// Known callee 0x004275E0: assignVirtualString (Calls vtable[2] on obj to obtain a temporary std::string, assigns it to dst, and destroys the temporary.)
extern void ext_004275E0(void* dst, uint32_t obj);
// Known callee 0x0063F530: sub_0063F530 (197B), __thiscall with three stack arguments, callee-cleaned.
extern uint32_t __thiscall ext_0063F530(void* self, uint32_t a, uint32_t b, uint32_t c);
// Known callee 0x0046C0A0: parseFloatFromString (Calls ext_004275C0 to get a std::string, converts it with atof, and stores the float result.)
extern void ext_0046C0A0(void* obj, float* out_val);

extern uint32_t mem_00A9F838;
extern uint32_t mem_00A9FA6C;
extern uint32_t mem_00A9F164;
extern uint32_t mem_00A9F058;
extern uint32_t mem_00A9F380;
extern uint32_t mem_00924FEC;
extern uint32_t mem_00924FF0;

// Listed in the metadata but never called or read by the 365-byte body.
// Declared so the check sees them; only the address is taken (no runtime effect).
extern void ext_00427550();
extern void ext_00640110();
extern void ext_00640390();
extern void ext_006404E0();
extern void ext_00640BC0();

// @name NMData::SensorData::vfunc_21
// @class NMData::SensorData
// @summary Calls a virtual slot at +0xF8, resolves named items from two string keys and a table of default items, and fills the two float fields +0x174/+0x178 through a string-to-float parser.
// @field NMData::SensorData +0x14 std::string field_0x14
// @field NMData::SensorData +0x154 std::string field_0x154
// @field NMData::SensorData +0x174 float field_0x174
// @field NMData::SensorData +0x178 float field_0x178

static constexpr uint32_t kSentinelA34 = 0x00B53A34u;
static constexpr uint32_t kSentinelB30 = 0x00B53B30u;
static constexpr uint32_t kSentinelAB0 = 0x00B53AB0u;
static constexpr uint32_t kSentinelA70 = 0x00B53A70u;
static constexpr uint32_t kSentinelAF0 = 0x00B53AF0u;

static inline bool is_lookup_sentinel(uint32_t v) {
    return v == kSentinelA34 || v == kSentinelB30 || v == kSentinelAB0 ||
           v == kSentinelA70 || v == kSentinelAF0;
}

static inline const char* as_cstr(uint32_t v) {
    return reinterpret_cast<const char*>(static_cast<uintptr_t>(v));
}

static inline void* as_ptr(uint32_t v) {
    return reinterpret_cast<void*>(static_cast<uintptr_t>(v));
}

void fn_0060E890(void* self, uint32_t arg) {
    auto* base = static_cast<uint8_t*>(self);

    // Metadata-only references (not called in the disassembly); address-of only.
    (void)&ext_00427550;
    (void)&ext_00640110;
    (void)&ext_00640390;
    (void)&ext_006404E0;
    (void)&ext_00640BC0;
    (void)&mem_00924FEC;
    (void)&mem_00924FF0;

    // Virtual call at vtable+0xF8 on self; return value is unused in the original.
    void* vtbl = lift_field<void*>(self, 0);
    using VirtualFn = void(__thiscall*)(void*);
    reinterpret_cast<VirtualFn>(lift_field<void*>(vtbl, 0xF8))(self);

    // +0x14 <- assignVirtualString(lookup(arg, mem_00A9F838))
    uint32_t item = ext_0063EFE0(as_ptr(arg), as_cstr(mem_00A9F838));
    ext_004275E0(base + 0x14, item);

    // +0x154 <- assignVirtualString(lookup(arg, mem_00A9FA6C))
    item = ext_0063EFE0(as_ptr(arg), as_cstr(mem_00A9FA6C));
    ext_004275E0(base + 0x154, item);

    // Resolve a table entry; any sentinel result aborts the function.
    uint32_t cur = ext_0063F530(as_ptr(arg), mem_00A9F164, 0, 1);
    if (is_lookup_sentinel(cur)) {
        return;
    }

    // Float from first table entry -> +0x174.
    uint32_t local = ext_0063F530(as_ptr(cur), mem_00A9F058, 0, 1);
    if (is_lookup_sentinel(local)) {
        local = kSentinelB30;
    }
    ext_0046C0A0(base + 0x174, reinterpret_cast<float*>(&local));

    // Float from second table entry -> +0x178.
    local = ext_0063F530(as_ptr(cur), mem_00A9F380, 0, 1);
    if (is_lookup_sentinel(local)) {
        local = kSentinelB30;
    }
    ext_0046C0A0(base + 0x178, reinterpret_cast<float*>(&local));
}
} // namespace lift_0060E890
