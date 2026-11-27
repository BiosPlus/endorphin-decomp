// Lifted C++ translation unit: lifted/classes/EffectorGroup.cpp
#include "lift_compat.h"

// [0x005F40C0]
namespace lift_005F40C0 {
// @name EffectorGroup::vfunc_22
// @class EffectorGroup
// @summary Forwards vfunc_22(float) to each child effector in the group, optionally filtered by global set mem_00B46790
// @field EffectorGroup +0x2c std::vector<void*> field_0x2c


extern uint32_t ext_005F3E70(void* iter_container, void* first, void* expected_container, void* last, void* key_ptr, void* pred);
extern void* mem_00B46790;
extern void (*mem_00925134)();

void __thiscall fn_005F40C0(void* self, float arg) {
    uint8_t* vec = static_cast<uint8_t*>(self) + 0x2c;
    void** it = *reinterpret_cast<void***>(vec + 0x4);
    void** end = *reinterpret_cast<void***>(vec + 0x8);
    if (it > end) {
        mem_00925134();
    }

    for (; it != end; ++it) {
        void* filter = mem_00B46790;
        bool should_call = true;
        if (filter != nullptr) {
            uint8_t* filter_bytes = static_cast<uint8_t*>(filter);
            void* first = *reinterpret_cast<void**>(filter_bytes + 0x4);
            void* last = *reinterpret_cast<void**>(filter_bytes + 0x8);
            uint32_t found = ext_005F3E70(filter, first, filter, last, it, reinterpret_cast<void*>(static_cast<uintptr_t>(*reinterpret_cast<uint32_t*>(&arg))));
            should_call = (static_cast<uint8_t>(found) != 0);
        }
        if (should_call) {
            void* child = *it;
            void** vtable = *reinterpret_cast<void***>(child);
            auto vfunc = reinterpret_cast<void(__thiscall*)(void*, float)>(vtable[0x58 / 4]);
            vfunc(child, arg);
        }
    }
}
} // namespace lift_005F40C0

// [0x005F41B0] EffectorGroup::vfunc_23 (236 bytes)
namespace lift_005F41B0 {
// @name EffectorGroup::vfunc_23
// @class EffectorGroup
// @summary Auto-lifted identical-shape clone of 0x005F40C0 (EffectorGroup::vfunc_22).
// @field EffectorGroup +0x2C std::vector<void*> field_0x2c
namespace lift_005F40C0 {
// @name EffectorGroup::vfunc_22
// @class EffectorGroup
// @summary Forwards vfunc_22(float) to each child effector in the group, optionally filtered by global set mem_00B46790
// @field EffectorGroup +0x2c std::vector<void*> field_0x2c


extern uint32_t ext_005F3E70(void* iter_container, void* first, void* expected_container, void* last, void* key_ptr, void* pred);
extern void* mem_00B46790;
extern void (*mem_00925134)();

void __thiscall fn_005F41B0(void* self, float arg) {
    uint8_t* vec = static_cast<uint8_t*>(self) + 0x2c;
    void** it = *reinterpret_cast<void***>(vec + 0x4);
    void** end = *reinterpret_cast<void***>(vec + 0x8);
    if (it > end) {
        mem_00925134();
    }

    for (; it != end; ++it) {
        void* filter = mem_00B46790;
        bool should_call = true;
        if (filter != nullptr) {
            uint8_t* filter_bytes = static_cast<uint8_t*>(filter);
            void* first = *reinterpret_cast<void**>(filter_bytes + 0x4);
            void* last = *reinterpret_cast<void**>(filter_bytes + 0x8);
            uint32_t found = ext_005F3E70(filter, first, filter, last, it, reinterpret_cast<void*>(static_cast<uintptr_t>(*reinterpret_cast<uint32_t*>(&arg))));
            should_call = (static_cast<uint8_t>(found) != 0);
        }
        if (should_call) {
            void* child = *it;
            void** vtable = *reinterpret_cast<void***>(child);
            auto vfunc = reinterpret_cast<void(__thiscall*)(void*, float)>(vtable[0x5C / 4]);
            vfunc(child, arg);
        }
    }
}
} // namespace lift_005F40C0
} // namespace lift_005F41B0

// [0x005F42A0] EffectorGroup::vfunc_24 (236 bytes)
namespace lift_005F42A0 {
// @name EffectorGroup::vfunc_24
// @class EffectorGroup
// @summary Auto-lifted identical-shape clone of 0x005F40C0 (EffectorGroup::vfunc_22).
// @field EffectorGroup +0x2C std::vector<void*> field_0x2c
namespace lift_005F40C0 {
// @name EffectorGroup::vfunc_22
// @class EffectorGroup
// @summary Forwards vfunc_22(float) to each child effector in the group, optionally filtered by global set mem_00B46790
// @field EffectorGroup +0x2c std::vector<void*> field_0x2c


extern uint32_t ext_005F3E70(void* iter_container, void* first, void* expected_container, void* last, void* key_ptr, void* pred);
extern void* mem_00B46790;
extern void (*mem_00925134)();

void __thiscall fn_005F42A0(void* self, float arg) {
    uint8_t* vec = static_cast<uint8_t*>(self) + 0x2c;
    void** it = *reinterpret_cast<void***>(vec + 0x4);
    void** end = *reinterpret_cast<void***>(vec + 0x8);
    if (it > end) {
        mem_00925134();
    }

    for (; it != end; ++it) {
        void* filter = mem_00B46790;
        bool should_call = true;
        if (filter != nullptr) {
            uint8_t* filter_bytes = static_cast<uint8_t*>(filter);
            void* first = *reinterpret_cast<void**>(filter_bytes + 0x4);
            void* last = *reinterpret_cast<void**>(filter_bytes + 0x8);
            uint32_t found = ext_005F3E70(filter, first, filter, last, it, reinterpret_cast<void*>(static_cast<uintptr_t>(*reinterpret_cast<uint32_t*>(&arg))));
            should_call = (static_cast<uint8_t>(found) != 0);
        }
        if (should_call) {
            void* child = *it;
            void** vtable = *reinterpret_cast<void***>(child);
            auto vfunc = reinterpret_cast<void(__thiscall*)(void*, float)>(vtable[0x60 / 4]);
            vfunc(child, arg);
        }
    }
}
} // namespace lift_005F40C0
} // namespace lift_005F42A0

// [0x005F4390] EffectorGroup::vfunc_21 (236 bytes)
namespace lift_005F4390 {
// @name EffectorGroup::vfunc_21
// @class EffectorGroup
// @summary Auto-lifted identical-shape clone of 0x005F40C0 (EffectorGroup::vfunc_22).
// @field EffectorGroup +0x2C std::vector<void*> field_0x2c
namespace lift_005F40C0 {
// @name EffectorGroup::vfunc_22
// @class EffectorGroup
// @summary Forwards vfunc_22(float) to each child effector in the group, optionally filtered by global set mem_00B46790
// @field EffectorGroup +0x2c std::vector<void*> field_0x2c


extern uint32_t ext_005F3E70(void* iter_container, void* first, void* expected_container, void* last, void* key_ptr, void* pred);
extern void* mem_00B46790;
extern void (*mem_00925134)();

void __thiscall fn_005F4390(void* self, float arg) {
    uint8_t* vec = static_cast<uint8_t*>(self) + 0x2c;
    void** it = *reinterpret_cast<void***>(vec + 0x4);
    void** end = *reinterpret_cast<void***>(vec + 0x8);
    if (it > end) {
        mem_00925134();
    }

    for (; it != end; ++it) {
        void* filter = mem_00B46790;
        bool should_call = true;
        if (filter != nullptr) {
            uint8_t* filter_bytes = static_cast<uint8_t*>(filter);
            void* first = *reinterpret_cast<void**>(filter_bytes + 0x4);
            void* last = *reinterpret_cast<void**>(filter_bytes + 0x8);
            uint32_t found = ext_005F3E70(filter, first, filter, last, it, reinterpret_cast<void*>(static_cast<uintptr_t>(*reinterpret_cast<uint32_t*>(&arg))));
            should_call = (static_cast<uint8_t>(found) != 0);
        }
        if (should_call) {
            void* child = *it;
            void** vtable = *reinterpret_cast<void***>(child);
            auto vfunc = reinterpret_cast<void(__thiscall*)(void*, float)>(vtable[0x54 / 4]);
            vfunc(child, arg);
        }
    }
}
} // namespace lift_005F40C0
} // namespace lift_005F4390
