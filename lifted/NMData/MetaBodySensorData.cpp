// Lifted C++ translation unit: lifted/NMData/MetaBodySensorData.cpp
#include "lift_compat.h"
extern "C" void ext_006105E0(void* a, void* b, uint32_t c);

// [0x00610780] NMData::MetaBodySensorData::vfunc_8 (37 bytes)
// @name NMData::MetaBodySensorData::vfunc_8
// @class NMData::MetaBodySensorData
// @summary Forwards the incoming pointer with the address of this+0x154 and a zero flag to ext_006105E0, then returns the incoming pointer.
// @field MetaBodySensorData +0x154 void* field_0x154
void* fn_00610780(void* self, void* arg)
{
    void* sub = static_cast<uint8_t*>(self) + 0x154;
    ext_006105E0(arg, sub, 0u);
    return arg;
}

// [0x0060EA90] NMData::MetaBodySensorData::vfunc_21 (157 bytes)
namespace lift_0060EA90 {
extern void ext_0060E890(void* self, void* arg);
// Known callee 0x0063EFE0: sub_0063EFE0 (Searches a vector of item pointers at +0x3c for an item whose std::string at +0x04 matches the given C-string, returning it or a sentinel at 0x00B53A34.)
extern uint32_t ext_0063EFE0(void* self, uint32_t name);
// Known callee 0x004275E0: assignVirtualString (Calls vtable[2] on obj to obtain a temporary std::string, assigns it to dst, and destroys the temporary.)
extern void ext_004275E0(void* dst, uint32_t obj);
// Known callee 0x0053F5F0: parseIntFromStringProp (Calls ext_004275C0 to get a string, converts it with atoi, and stores the integer at *out.)
extern void ext_0053F5F0(void* obj, int32_t* out);
extern uint32_t mem_00A9F7F4;
extern uint32_t mem_00A9F7FC;
extern uint32_t mem_00A9F554;
extern uint32_t mem_00A9F6D4;

// @name NMData::MetaBodySensorData::vfunc_21
// @class MetaBodySensorData
// @summary Calls the vtable slot at +0xF8 on self, runs SensorData::vfunc_21 on arg, then fills four string-valued members (+0x180/+0x19c/+0x1bc from property lookups) and parses an int property into the +0x1b8 subobject.
// @field MetaBodySensorData +0x00 void* field_0x00
// @field MetaBodySensorData +0x180 std::string field_0x180
// @field MetaBodySensorData +0x19c std::string field_0x19c
// @field MetaBodySensorData +0x1b8 void* field_0x1b8
// @field MetaBodySensorData +0x1bc std::string field_0x1bc
void fn_0060EA90(void* self, void* arg) {
    // vtable[+0xF8] call on self; return value unused in the original.
    void* vtbl = lift_field<void*>(self, 0);
    void (*vfunc)(void*) = lift_field<void (*)(void*)>(vtbl, 0xF8);
    vfunc(self);

    ext_0060E890(self, arg);

    uint8_t* base = static_cast<uint8_t*>(self);

    uint32_t v0 = ext_0063EFE0(arg, mem_00A9F7F4);
    ext_004275E0(base + 0x180, v0);

    uint32_t v1 = ext_0063EFE0(arg, mem_00A9F7FC);
    ext_004275E0(base + 0x19c, v1);

    uint32_t v2 = ext_0063EFE0(arg, mem_00A9F554);
    ext_004275E0(base + 0x1bc, v2);

    uint32_t v3 = ext_0063EFE0(arg, mem_00A9F6D4);
    // The original reuses its stack argument slot as the out-parameter here.
    int32_t out = static_cast<int32_t>(v3);
    ext_0053F5F0(base + 0x1b8, &out);
}
} // namespace lift_0060EA90

// [0x0060E6C0] NMData::MetaBodySensorData::vfunc_22 (228 bytes)
namespace lift_0060E6C0 {
extern void* __thiscall ext_006404E0(void* self, void* arg);
extern void __thiscall ext_0060E590(void* self, void* arg);
extern void* __thiscall ext_00640110(void* self, void* arg);
// Known callee 0x00427550: ResetChildAndAssignName (Clears the owned objects of the object referenced by this+0x00, then assigns the given C string as the child name via assignOrCreateChild.)
extern void ext_00427550(void* self, const char* name);
// Known callee 0x00640A50: FormatAndAssignChildName (Formats the int argument into a 16-byte buffer with sprintf and assigns the result as the child name of the object referenced by the first argument.)
extern void ext_00640A50(void* unused, int a1);
extern uint32_t mem_00A9F268;
extern uint32_t mem_00924FF0;
extern uint32_t mem_00924FEC;
extern uint32_t mem_00A9F7F4;
extern uint32_t mem_00A9F7FC;
extern uint32_t mem_00A9F554;
extern uint32_t mem_00A9F6D4;

// @name NMData::MetaBodySensorData::vfunc_22
// @class NMData::MetaBodySensorData
// @summary Assigns child names from the non-empty string members (+0x180/+0x19c/+0x1bc) and the int at +0x1b8 onto objects looked up via sub-calls; returns a1.
// @field NMData::MetaBodySensorData +0x180 std::string field_0x180
// @field NMData::MetaBodySensorData +0x19c std::string field_0x19c
// @field NMData::MetaBodySensorData +0x1b8 int32_t field_0x1b8
// @field NMData::MetaBodySensorData +0x1bc std::string field_0x1bc
void* fn_0060E6C0(void* self, void* a1) {
    // MSVCP80 std::string member functions, called through their IAT slots (thiscall).
    using CStrFn = const char* (__thiscall*)(void* self);
    using EmptyFn = bool (__thiscall*)(void* self);
    auto str_c_str = [](void* s) -> const char* {
        return (*reinterpret_cast<CStrFn*>(&mem_00924FF0))(s);
    };
    auto str_empty = [](void* s) -> bool {
        return (*reinterpret_cast<EmptyFn*>(&mem_00924FEC))(s);
    };

    void* const cfg = ext_006404E0(a1, reinterpret_cast<void*>(static_cast<uintptr_t>(mem_00A9F268)));
    ext_0060E590(self, cfg);

    // Sets the child name of the object returned by ext_00640110(cfg, src) to the string at str_obj.
    auto set_child_name = [&](void* str_obj, uint32_t src) {
        void* obj = ext_00640110(cfg, reinterpret_cast<void*>(static_cast<uintptr_t>(src)));
        const char* name = str_c_str(str_obj);
        ext_00427550(&obj, name);
    };

    set_child_name(&lift_field<uint8_t>(self, 0x180), mem_00A9F7F4);

    if (!str_empty(&lift_field<uint8_t>(self, 0x19c))) {
        set_child_name(&lift_field<uint8_t>(self, 0x19c), mem_00A9F7FC);
    }

    if (!str_empty(&lift_field<uint8_t>(self, 0x1bc))) {
        set_child_name(&lift_field<uint8_t>(self, 0x1bc), mem_00A9F554);
    }

    if (lift_field<int32_t>(self, 0x1b8) != 0) {
        void* obj = ext_00640110(cfg, reinterpret_cast<void*>(static_cast<uintptr_t>(mem_00A9F6D4)));
        ext_00640A50(obj, lift_field<int32_t>(self, 0x1b8));
    }

    return a1;
}
} // namespace lift_0060E6C0

// [0x006107B0] NMData::MetaBodySensorData::vfunc_59 (313 bytes)
namespace lift_006107B0 {
// Known callee 0x0040C010: CArray::GetAt (thiscall, element at index from a begin/end-pointer array)
extern uint32_t ext_0040C010(void* self, uint32_t index);
// Known callee 0x00594000: sub_00594000 (cdecl, returns global int32 from mem_00B40D08)
extern int32_t ext_00594000();
// Known callee 0x00594620: sub_00594620 (member forwarding thunk, loads subobject at +0x26C)
extern uint32_t ext_00594620(void* self);
// Known callee 0x005DF5C0: sub_005DF5C0 (thiscall lookup, returns object or 0)
extern uint32_t ext_005DF5C0(void* self);
// Known callee 0x005ED5D0: sub_005ED5D0 (thiscall lookup, returns object)
extern uint32_t ext_005ED5D0(void* self);
// Known callee 0x006104E0: sub_006104E0 (takes subobject pointer and a 4-word argument block, returns object)
extern uint32_t ext_006104E0(void* subobj, uint32_t* args);
// MSVCP80 std::string::empty import slot (used via function pointer)
extern int mem_00924FEC;
// MSVCP80 std::string copy-ctor import slot: only feeds unused temporaries; metadata reference only.
extern int mem_00924FE0;

namespace {

inline void* addr(uint32_t v) {
    return reinterpret_cast<void*>(static_cast<uintptr_t>(v));
}

// std::string::empty() via the import slot (thiscall; receiver passed as first arg).
inline bool string_empty(void* s) {
    using EmptyFn = bool (*)(void*);
    return reinterpret_cast<EmptyFn>(addr(static_cast<uint32_t>(mem_00924FEC)))(s);
}

}  // namespace

// @name NMData::MetaBodySensorData::vfunc_59
// @class NMData::MetaBodySensorData
// @summary Resolves an entry from arg1 via lookups gated on two strings, builds a result object through sub_006104E0 using subobject +0x154, calls its vfunc at +0x68, stores the float pair as doubles, and caches the result and value in this.
// @field NMData::MetaBodySensorData +0x154 uint8_t field_0x154
// @field NMData::MetaBodySensorData +0x170 void* field_0x170
// @field NMData::MetaBodySensorData +0x174 float field_0x174
// @field NMData::MetaBodySensorData +0x178 float field_0x178
// @field NMData::MetaBodySensorData +0x19C std::string field_0x19c
// @field NMData::MetaBodySensorData +0x1B8 int32_t field_0x1b8
// @field NMData::MetaBodySensorData +0x1BC std::string field_0x1bc
void* fn_006107B0(void* self, void* a1, uint32_t a2) {
    (void)a2;  // ret 8: second stack argument is not read by this body
    (void)&mem_00924FE0;

    uint8_t* arg = static_cast<uint8_t*>(a1);
    uint8_t* me = static_cast<uint8_t*>(self);

    uint32_t edi = ext_005ED5D0(arg + 0x598);

    uint32_t ebx;
    if (string_empty(me + 0x19C)) {
        ebx = edi;
    } else {
        ebx = ext_005DF5C0(arg + 0x598);
        if (ebx == 0) {
            int32_t g = ext_00594000();
            uint32_t elem = ext_0040C010(addr(static_cast<uint32_t>(g)), 0);
            ebx = ext_005ED5D0(addr(elem + 0x598));
        }
    }

    // Fallback value ([esp+0x1c] in the original) is not recoverable from the disassembly; 0 is used.
    uint32_t s = 0;
    if (!string_empty(me + 0x1BC)) {
        int32_t g = ext_00594000();
        s = ext_00594620(addr(static_cast<uint32_t>(g)));
    }

    uint32_t ebp = lift_field<uint32_t>(me, 0x1B8);
    uint32_t args[4] = {edi, ebx, s, ebp};
    uint32_t result = ext_006104E0(me + 0x154, args);

    void* obj = addr(result);
    void** vtbl = *reinterpret_cast<void***>(obj);
    uint32_t args2[4] = {edi, ebx, s, ebp};
    using VFn = uint32_t (*)(void*, uint32_t*);
    reinterpret_cast<VFn>(vtbl[26])(obj, args2);

    lift_field<double>(obj, 0x18) = static_cast<double>(lift_field<float>(me, 0x174));
    lift_field<double>(obj, 0x20) = static_cast<double>(lift_field<float>(me, 0x178));
    lift_field<uint32_t>(me, 0x1B8) = s;
    lift_field<uint32_t>(me, 0x170) = result;
    return obj;
}
} // namespace lift_006107B0
