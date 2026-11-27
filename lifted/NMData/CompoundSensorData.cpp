// Lifted C++ translation unit: lifted/NMData/CompoundSensorData.cpp
#include "lift_compat.h"
extern "C" void ext_00610730(void* a1, void* subobject);

// [0x006108F0] NMData::CompoundSensorData::vfunc_8 (37 bytes)
// @name NMData::CompoundSensorData::vfunc_8
// @class NMData::CompoundSensorData
// @summary Forwards a1 and the address of the embedded subobject at this+0x154 to ext_00610730, then returns a1.
// @field NMData::CompoundSensorData +0x154 void* field_0x154
void* fn_006108F0(void* self, void* a1) {
    void* subobject = &lift_field<uint8_t>(self, 0x154);
    ext_00610730(a1, subobject);
    return a1;
}

// [0x0060F640]
namespace lift_0060F640 {
extern void __thiscall ext_0060E540(uint8_t* self);
extern uint32_t __thiscall ext_00406510(void* self, uint32_t a1, uint32_t a2, uint32_t a3, uint32_t a4, uint32_t a5);
extern uint32_t mem_00925134;
extern uint32_t mem_00924EA8;

// @name NMData::CompoundSensorData::vfunc_62
// @class NMData::CompoundSensorData
// @summary Resets base sensor data, clears the vector at +0x180, and clears the string at +0x190.
// @field NMData::CompoundSensorData +0x180 uint32_t field_0x180
// @field NMData::CompoundSensorData +0x184 uint32_t field_0x184
// @field NMData::CompoundSensorData +0x188 uint32_t field_0x188
// @field NMData::CompoundSensorData +0x190 uint8_t field_0x190
extern void __thiscall fn_0060F640(uint8_t* self) {
    ext_0060E540(self);

    uint8_t* vec = self + 0x180;
    uint32_t end_ptr = lift_field<uint32_t>(self, 0x188);
    if (lift_field<uint32_t>(self, 0x184) > end_ptr) {
        reinterpret_cast<void(__cdecl*)()>(mem_00925134)();
    }

    uint32_t begin_ptr = lift_field<uint32_t>(vec, 0x04);
    if (begin_ptr > lift_field<uint32_t>(vec, 0x08)) {
        reinterpret_cast<void(__cdecl*)()>(mem_00925134)();
    }

    uint32_t sret[2] = {};
    ext_00406510(
        vec,
        static_cast<uint32_t>(reinterpret_cast<uintptr_t>(sret)),
        static_cast<uint32_t>(reinterpret_cast<uintptr_t>(vec)),
        begin_ptr,
        static_cast<uint32_t>(reinterpret_cast<uintptr_t>(vec)),
        end_ptr);

    reinterpret_cast<void(__thiscall*)(void*)>(mem_00924EA8)(self + 0x190);
}
} // namespace lift_0060F640

// [0x0060F6A0] NMData::CompoundSensorData::vfunc_21 (382 bytes)
namespace lift_0060F6A0 {
// Known callee 0x0060E890: NMData::SensorData::vfunc_21 (thiscall, one argument)
extern void ext_0060E890(void* self, uint32_t arg);
// Known callee 0x0063F530: thiscall lookup helper (three arguments, returns item or sentinel)
extern uint32_t ext_0063F530(void* self, uint32_t a0, uint32_t a1, uint32_t a2);
// Known callee 0x0063EFE0: thiscall vector search by C-string name (returns item or sentinel)
extern uint32_t ext_0063EFE0(void* self, uint32_t name);
// Known callee 0x004275E0: cdecl assignVirtualString(dst, obj)
extern void ext_004275E0(void* dst, uint32_t obj);
// Known callee 0x00427A60: thiscall advanceIteratorUntilMatch(iter)
extern void ext_00427A60(void* iter);
// Known callee 0x0040ECB0: thiscall push_back of one std::string (this, value)
extern void ext_0040ECB0(void* self, uint32_t value);
// Imports / data slots (values hold the target addresses)
extern int mem_00A9EFE8;   // default key passed to ext_0063F530
extern int mem_00A9F7F4;   // name passed to ext_0063EFE0
extern int mem_00925134;   // CRT invalid-parameter handler (boilerplate)
extern int mem_00A9F268;   // C-string compared against each element name
extern int mem_00924FC0;   // MSVCP80 std::string operator==(const string&, const char*)
extern int mem_00924FF4;   // MSVCP80 std::string destructor

namespace {

// Three-word checked iterator frame: {container, proxy, pointer}.
struct CheckedIter {
    uint32_t container;
    uint32_t proxy;
    uint32_t ptr;
};

inline void* addr(uint32_t v) {
    return reinterpret_cast<void*>(static_cast<uintptr_t>(v));
}

inline uint32_t slot_value(int v) {
    return static_cast<uint32_t>(v);
}

inline void invalid_parameter() {
    using Handler = void (*)();
    reinterpret_cast<Handler>(addr(slot_value(mem_00925134)))();
}

inline bool string_equals(void* lhs, const char* rhs) {
    using EqFn = bool (*)(void*, const char*);
    return reinterpret_cast<EqFn>(addr(slot_value(mem_00924FC0)))(lhs, rhs);
}

inline void string_destroy(void* str) {
    using DtorFn = void (*)(void*);
    reinterpret_cast<DtorFn>(addr(slot_value(mem_00924FF4)))(str);
}

}  // namespace

// @name NMData::CompoundSensorData::vfunc_21
// @class NMData::CompoundSensorData
// @summary Looks up a named item, then walks its pointer vector at +0x24 pushing each element whose name matches a global string into the +0x180 list.
// @field NMData::CompoundSensorData +0x000 void** vtable
// @field NMData::CompoundSensorData +0x180 uint32_t field_0x180
// @field NMData::CompoundSensorData +0x190 uint8_t field_0x190
void fn_0060F6A0(void* self, uint32_t arg) {
    uint8_t* ebx = static_cast<uint8_t*>(self);

    // Virtual call at vtable +0xF8 (slot 62) on this; result unused.
    void** vtbl = *reinterpret_cast<void***>(ebx);
    reinterpret_cast<void (*)(void*)>(vtbl[62])(ebx);

    ext_0060E890(ebx, arg);

    uint32_t key = slot_value(mem_00A9EFE8);
    uint32_t found = ext_0063F530(addr(arg), key, 0, 1);

    uint32_t item;
    if (found == 0xB53A34 || found == 0xB53B30 || found == 0xB53AB0 ||
        found == 0xB53A70 || found == 0xB53AF0) {
        item = 0xB53B30;
    } else {
        item = found;
    }

    uint32_t name = slot_value(mem_00A9F7F4);
    uint32_t obj = ext_0063EFE0(addr(arg), name);
    ext_004275E0(ebx + 0x190, obj);

    // Iterate the item's vector: begin at +0x28, end at +0x2C (vector base at +0x24).
    void* itemp = addr(item);
    uint32_t vec = item + 0x24;

    uint32_t cur = lift_field<uint32_t>(itemp, 0x28);
    uint32_t end = lift_field<uint32_t>(itemp, 0x2C);
    if (cur > end) {
        invalid_parameter();
    }

    CheckedIter a{vec, vec, cur};
    ext_00427A60(&a);

    end = lift_field<uint32_t>(itemp, 0x2C);
    if (lift_field<uint32_t>(itemp, 0x28) > end) {
        invalid_parameter();
    }

    CheckedIter b{vec, vec, end};
    ext_00427A60(&b);

    for (;;) {
        // Iterator compatibility: both must share a non-null proxy.
        if (a.proxy == 0 || a.proxy != b.proxy) {
            invalid_parameter();
        }

        uint32_t p = a.ptr;
        if (p >= b.ptr) {
            break;
        }

        if (a.proxy == 0) {
            invalid_parameter();
        }
        if (p >= lift_field<uint32_t>(addr(a.proxy), 8)) {
            invalid_parameter();
        }

        uint32_t elem = lift_field<uint32_t>(addr(p), 0);
        uint32_t target = slot_value(mem_00A9F268);
        bool match = string_equals(addr(elem + 4), reinterpret_cast<const char*>(addr(target)));

        if (match) {
            if (p >= lift_field<uint32_t>(addr(a.proxy), 8)) {
                invalid_parameter();
            }

            void** elemVtbl = *reinterpret_cast<void***>(addr(elem));
            uint8_t tmp[32] = {};
            using ToStrFn = uint32_t (*)(void*, void*);
            uint32_t str = reinterpret_cast<ToStrFn>(elemVtbl[2])(addr(elem), tmp);

            ext_0040ECB0(ebx + 0x180, str);
            string_destroy(tmp);
        }

        if (p >= lift_field<uint32_t>(addr(a.proxy), 8)) {
            invalid_parameter();
        }
        a.ptr = p + 4;
        ext_00427A60(&a);
    }
}
} // namespace lift_0060F6A0
