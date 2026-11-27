// Lifted C++ translation unit: lifted/NMData/EvolveEngineData.cpp
#include "lift_compat.h"
#include <new>
#include <string>
extern "C" const char* mem_00A9EEA0;
extern "C" void ext_004FD870(void* self);
extern "C" void ext_0050E990(void* self);

extern "C" void ext_0050E990(void* self);
// @name NMData::EvolveEngineData::vfunc_6
// @class NMData::EvolveEngineData
// @summary Constructs a std::string in the caller-supplied buffer from the literal pointer in mem_00A9EEA0.
void fn_004BED30(void* self) {
    new (self) std::string(mem_00A9EEA0);
}
#include <cstdint>

// [0x004FDA70] NMData::EvolveEngineData::vfunc_7 (21 bytes)
// @name NMData::EvolveEngineData::vfunc_7
// @class NMData::EvolveEngineData
// @summary Forwards to the initializers for the sub-objects at this+0x0C and this+0x2C.
// @field EvolveEngineData +0x0C <unknown> field_0x0C
// @field EvolveEngineData +0x2C <unknown> field_0x2C
void fn_004FDA70(void* self) {
    auto* base = reinterpret_cast<uint8_t*>(self);
    ext_004FD870(base + 0x0C);
    ext_0050E990(base + 0x2C);
}

// [0x004BED30] NMData::EvolveEngineData::vfunc_6 (35 bytes)
namespace lift_004BED30 {
extern int mem_00A9EEA0;
extern int mem_00924FE4;

// @name NMData::EvolveEngineData::vfunc_6
// @class NMData::EvolveEngineData
// @summary Constructs a std::string in the caller-supplied return slot from the C string whose address is stored in mem_00A9EEA0, and returns that slot.
void* fn_004BED30(void* self) {
    // Original calls the MSVCP80 basic_string(const char*) constructor through the
    // import slot mem_00924FE4; the portable std::string constructor below replaces it.
    static_cast<void>(&mem_00924FE4);
    const char* text = reinterpret_cast<const char*>(static_cast<std::uintptr_t>(mem_00A9EEA0));
    new (self) std::string(text);
    return self;
}
} // namespace lift_004BED30

// [0x005004C0]
namespace lift_005004C0 {
// @name NMData::EvolveEngineData::vfunc_13_off_8
// @class NMData::EvolveEngineData
// @summary Looks up a property/symbol by name on EvolveEngineData and writes the result into the output object.
// @field NMData::EvolveEngineData +0x04 uint8_t field_0x04
// @field NMData::EvolveEngineData +0x24 uint8_t field_0x24
// @field NMData::EvolveEngineData +0x9C uint8_t field_0x9C
// @field NMData::EvolveEngineData +0xD8 uint8_t field_0xD8
// @field NMData::EvolveEngineData +0xE4 uint8_t field_0xE4
// @field NMData::EvolveEngineData +0x124 uint8_t field_0x124
// @field NMData::EvolveEngineData +0x134 uint32_t field_0x134

    extern const char* mem_00A9EEA4;
    extern const char* mem_00A9EFC0;
    extern const char* mem_00A9F304;
    extern const char* mem_00A9F3B4;
    extern const char mem_0094EE3C[];
    extern const char mem_0094EE24[];
    extern bool (__cdecl *mem_00924FC0)(const void*, const char*);

    void* __cdecl ext_0046F7D0(void* obj);
    uint32_t __cdecl ext_00500120(void* ptr);
    void __thiscall ext_0055DA20(void* self, uint32_t a, void* b);
    void __thiscall ext_00661650(void* self, void* arg);

void* __thiscall fn_005004C0(void* self, void* ret_buf, const void* name) {
    auto* base = static_cast<uint8_t*>(self);

    if (mem_00924FC0(name, mem_00A9EEA4)) {
        ext_00661650(ret_buf, base + 0x04);
        return ret_buf;
    }
    if (mem_00924FC0(name, mem_0094EE3C)) {
        ext_00661650(ret_buf, base + 0x24);
        return ret_buf;
    }
    if (mem_00924FC0(name, mem_00A9EFC0)) {
        void* arg = (base + 0xD8 != nullptr) ? (base + 0xE4) : nullptr;
        ext_00661650(ret_buf, arg);
        return ret_buf;
    }
    if (mem_00924FC0(name, mem_00A9F304)) {
        ext_00661650(ret_buf, base + 0x9C);
        return ret_buf;
    }
    if (mem_00924FC0(name, mem_00A9F3B4)) {
        void* field_ptr = base + 0x124;
        uint32_t val = ext_00500120(field_ptr);
        ext_0055DA20(ret_buf, val, field_ptr);
        return ret_buf;
    }
    if (mem_00924FC0(name, mem_0094EE24)) {
        uint32_t val = lift_field<uint32_t>(self, 0x134);
        ext_00661650(ret_buf, reinterpret_cast<void*>(static_cast<uintptr_t>(val)));
        return ret_buf;
    }

    ext_0046F7D0(ret_buf);
    return ret_buf;
}
} // namespace lift_005004C0

// [0x00501D40]
namespace lift_00501D40 {
void ext_0065F550(void* self, void* arg);
void ext_0040ECB0(void* self, const void* value);
extern void (*mem_00925134)(void);

// @name NMData::EvolveEngineData::vfunc_7_off_8
// @class NMData::EvolveEngineData
// @summary Calls base vfunc_7 and appends the result of vfunc_9 for each element in the vector at +0x124.
// @field NMData::EvolveEngineData +0x124 void* field_0x124
void fn_00501D40(void* self, void* arg) {
  ext_0065F550(self, arg);

  uint8_t* vec = static_cast<uint8_t*>(self) + 0x124;
  uint32_t* it = *reinterpret_cast<uint32_t**>(vec + 0x4);
  uint32_t* end = *reinterpret_cast<uint32_t**>(vec + 0x8);

  if (it > end) {
    mem_00925134();
  }

  for (;;) {
    end = *reinterpret_cast<uint32_t**>(vec + 0x8);
    if (*reinterpret_cast<uint32_t**>(vec + 0x4) > end) {
      mem_00925134();
    }
    if (it == end) {
      break;
    }
    if (it >= *reinterpret_cast<uint32_t**>(vec + 0x8)) {
      mem_00925134();
    }

    void* elem = reinterpret_cast<void*>(*it);
    void** vtable = *reinterpret_cast<void***>(elem);
    using VFunc9 = const void* (*)(void*);
    VFunc9 vfunc9 = reinterpret_cast<VFunc9>(vtable[0x24 / sizeof(void*)]);
    const void* str = vfunc9(elem);

    ext_0040ECB0(arg, str);

    if (it >= *reinterpret_cast<uint32_t**>(vec + 0x8)) {
      mem_00925134();
    }
    ++it;
  }
}
} // namespace lift_00501D40

// [0x005012A0] NMData::EvolveEngineData::vfunc_2_off_8 (245 bytes)
namespace lift_005012A0 {
// Callees (MSVC __thiscall / __stdcall ABIs, preserved from the original).
extern void* __thiscall ext_005010D0(void* self);
extern void* __thiscall ext_00685900(void* self, void* out, uint32_t a, uint32_t b);
extern void __thiscall ext_00679030(void* self);
extern void* __stdcall ext_006798D0(void* a, void* sub, void* b, void* guard);
extern void* __thiscall ext_0041CF50(void* self, void* other);

// Global compared against the first word of arg1 (.data pointer sentinel).
extern uint32_t mem_00B599BC;

namespace {

template <class T>
inline T& at(void* base, std::size_t off) {
    return *reinterpret_cast<T*>(static_cast<uint8_t*>(base) + off);
}

}  // namespace

// @name NMData::EvolveEngineData::vfunc_2_off_8
// @class NMData::EvolveEngineData
// @summary Initialises the helper object built from this+0x138 and arg2, then, when arg1's first field is empty or matches the sentinel, obtains a replacement value from either a sub-object vtable slot or a helper call, assigns it into arg1 and releases the previous value; returns arg1.
// @field NMData::EvolveEngineData +0x124 uint8_t field_0x124
// @field NMData::EvolveEngineData +0x138 void* field_0x138
void* __thiscall fn_005012A0(void* self, void* arg1, void* arg2) {
    auto* base = static_cast<uint8_t*>(self);

    // Guard: (self != 8) ? self : nullptr.
    void* guard = (reinterpret_cast<uintptr_t>(self) != 8u) ? self : nullptr;

    // Sub-object pointer at this+0x138, offset by 0x10 when present.
    void* sub_pre = at<void*>(base, 0x138);
    void* sub_arg = (sub_pre != nullptr) ? static_cast<uint8_t*>(sub_pre) + 0x10 : nullptr;

    void* built = ext_006798D0(arg1, sub_arg, arg2, guard);
    ext_00679030(built);

    // Local slot; passed by address as an out parameter to the callees below.
    uintptr_t flag = 1;

    const uint32_t arg1_f04 = at<uint32_t>(arg1, 0x04);
    if (arg1_f04 != 0 && arg1_f04 != mem_00B599BC) {
        return arg1;
    }

    // Local slot receiving the replacement object from the vtable path.
    void* b = nullptr;
    void* other = nullptr;

    void* sub_now = at<void*>(base, 0x138);
    if (sub_now != nullptr) {
        uint8_t* sub = static_cast<uint8_t*>(sub_now) + 0x10;
        void* vt = *reinterpret_cast<void**>(sub);
        using Slot2Fn = void* (__thiscall*)(void* self, void* out);
        auto fn = reinterpret_cast<Slot2Fn>(*reinterpret_cast<void**>(static_cast<uint8_t*>(vt) + 0x8));
        other = fn(sub, &b);
    } else {
        void* p = ext_005010D0(base + 0x124);
        if (p == nullptr) {
            return arg1;
        }
        other = ext_00685900(p, &flag, 0, 0);
    }

    ext_0041CF50(arg1, other);

    if (b != nullptr) {
        void* vt = *reinterpret_cast<void**>(b);
        using Slot30Fn = void (__thiscall*)(void* self, void* out);
        auto fn = reinterpret_cast<Slot30Fn>(*reinterpret_cast<void**>(static_cast<uint8_t*>(vt) + 0x78));
        fn(b, &flag);
    }

    return arg1;
}
} // namespace lift_005012A0

// [0x00500BA0]
namespace lift_00500BA0 {
// @name EvolveEngineData::vfunc_3
// @class NMData::EvolveEngineData
// @summary Serializes EvolveEngineData fields and lastBestIndividual to an XML node.
// @field NMData::EvolveEngineData +0x0C void* field_0x0C
// @field NMData::EvolveEngineData +0x2C void* field_0x2C
// @field NMData::EvolveEngineData +0xA8 void** field_0xA8
// @field NMData::EvolveEngineData +0x110 void* field_0x110
// @field NMData::EvolveEngineData +0x12C void* field_0x12C


extern uint32_t mem_00A9EEA4;
extern uint32_t mem_00A9F1A0;
extern uint32_t mem_00A9F304;
extern uint32_t mem_00A9F3B0;
extern uint32_t mem_00A9F3B4;
extern const char* mem_0094EE4C;
extern void* mem_00924FF0;

extern void* (__thiscall* ext_00640390)(void* self, uint32_t name, uint32_t flags);
extern void (__thiscall* ext_004FD9A0)(void* self, void* child);
extern void (__thiscall* ext_0050E680)(void* self, void* child);
extern void (__cdecl* ext_005006E0)(void* field, void* node, uint32_t a, uint32_t b, uint32_t flags);
extern void* (__thiscall* ext_00640110)(void* self, const char* name);
extern void (__thiscall* ext_00427550)(void* self, const char* name);

void* __thiscall fn_00500BA0(void* self, void* node) {
    uint8_t* base = static_cast<uint8_t*>(self);

    void* child0 = ext_00640390(node, mem_00A9EEA4, 0);
    ext_004FD9A0(base + 0x0C, child0);

    void* child1 = ext_00640390(node, mem_00A9F1A0, 0);
    ext_0050E680(base + 0x2C, child1);

    void* child2 = ext_00640390(node, mem_00A9F304, 0);
    void* obj_a8 = base + 0xA8;
    void** vtable_a8 = *reinterpret_cast<void***>(obj_a8);
    auto vfunc3 = reinterpret_cast<void (__thiscall*)(void*, void*)>(vtable_a8[3]);
    vfunc3(obj_a8, child2);

    ext_005006E0(base + 0x12C, node, mem_00A9F3B4, mem_00A9F3B0, 0);

    void* last_best = ext_00640110(node, mem_0094EE4C);
    auto c_str_fn = reinterpret_cast<const char* (__thiscall*)(void*)>(mem_00924FF0);
    const char* name_str = c_str_fn(base + 0x110);
    ext_00427550(&last_best, name_str);

    return node;
}
} // namespace lift_00500BA0
