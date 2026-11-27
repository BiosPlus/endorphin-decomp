// Lifted C++ translation unit: lifted/NMData/SeverEventData.cpp
#include "lift_compat.h"
#include <string>
extern "C" void* __thiscall ext_006404E0(void* self, void* arg);
extern "C" void* mem_00A9F274;
#include <new>
extern "C" void* ext_006A5C62(size_t size);
extern "C" void* ext_004C7FA0(void* self, void* owner);

extern "C" void* ext_006A5C62(size_t size);
extern "C" void* ext_004C7FA0(void* self, void* owner);
// @class NMData::SeverEventData
// @summary Auto-lifted identical-shape clone of 0x004DDED0 (NMData::AnimationEventData::vfunc_59).
// @field NMData::SeverEventData +0x0 void** vptr
extern "C" void __thiscall fn_004C7190(void* self, void* a) {
    using VFn = void(__thiscall*)(void* self, void* arg);
    void* g = mem_00A9F274;
    void* r = ext_006404E0(a, g);
    void** vt = *reinterpret_cast<void***>(self);
    reinterpret_cast<VFn>(vt[22])(self, r);
}
extern "C" void ext_00437AD0(void* self);
extern "C" void ext_004C7F50(void* self, uint32_t arg1);

extern "C" void ext_004C7F50(void* self, uint32_t arg1);
// @name NMData::SeverEventData::vfunc_84
// @class NMData::SeverEventData
// @summary Stdcall (ret 4, ECX = this): if the sever target at +0x19C is set, the enabled flag at +0x17C is true, and the argument matches the key at +0x15C, calls virtual slot 0 on the target.
// @field NMData::SeverEventData +0x15C uint32_t field_0x15c
// @field NMData::SeverEventData +0x17C uint8_t field_0x17c
// @field NMData::SeverEventData +0x19C void* field_0x19c
void fn_004C7870(void* self, uint32_t key) {
    void* target = lift_field<void*>(self, 0x19C);
    if (target == nullptr) {
        return;
    }
    if (lift_field<uint8_t>(self, 0x17C) == 0) {
        return;
    }
    if (key != lift_field<uint32_t>(self, 0x15C)) {
        return;
    }
    void** vtbl = *reinterpret_cast<void***>(target);
    auto slot0 = reinterpret_cast<void (*)(void*)>(vtbl[0]);
    slot0(target);
}
#include <cstdint>
#include <cstddef>

#include <cstddef>
// @name NMData::SeverEventData::vfunc_17_off_C
// @class NMData::SeverEventData
// @summary Auto-lifted identical-shape clone of 0x004CFC30 (NMData::IncarnationEventData::vfunc_17_off_C).
void* fn_004C8180(void* self) {
    void* mem = ext_006A5C62(0x1A0);
    if (mem == nullptr) {
        return nullptr;
    }
    void* owner = static_cast<unsigned char*>(self) - 0xC;
    return ext_004C7FA0(mem, owner);
}

// [0x004C8160] NMData::SeverEventData::vfunc_87 (29 bytes)
// @name NMData::SeverEventData::vfunc_87
// @class NMData::SeverEventData
// @summary If the dispatcher slot at +0x19C is non-null, notify it via ext_00437AD0, then call ext_004C7F50 on the slot with argument 0.
// @field NMData::SeverEventData +0x19C void* field_0x19c
void fn_004C8160(void* self) {
    void* dispatcher = lift_field<void*>(self, 0x19C);
    if (dispatcher != nullptr) {
        ext_00437AD0(dispatcher);
    }
    ext_004C7F50(&lift_field<void*>(self, 0x19C), 0);
}

// [0x004C2070]
namespace lift_004C2070 {
// @name NMData::SeverEventData::vfunc_14
// @class NMData::SeverEventData
// @summary Dispatches property/event query on SeverEventData; handles 0x8c/0x117 via sub_004C1BF0 and sub_0055DA20, otherwise delegates to vfunc_14 base.
// @field NMData::SeverEventData +0x16c uint8_t field_0x16c

extern void* __stdcall ext_004C1BF0(void* ptr);
extern void __thiscall ext_0055DA20(void* self, void* arg1);
extern void* __thiscall ext_0058F6B0(void* self, void* arg1, uint32_t arg2);

extern void* __thiscall fn_004C2070(void* self, void* arg1, uint32_t arg2) {
    if (arg2 == 0x8c || arg2 == 0x117) {
        void* val = ext_004C1BF0(static_cast<uint8_t*>(self) + 0x16c);
        ext_0055DA20(arg1, val);
        return arg1;
    }
    ext_0058F6B0(self, arg1, arg2);
    return arg1;
}
} // namespace lift_004C2070

// [0x004CA1C0]
namespace lift_004CA1C0 {
// @name NMData::SeverEventData::vfunc_88
// @class NMData::SeverEventData
// @summary Updates field_0x19c, frees the previous object if changed, and initializes the new one.
// @field NMData::SeverEventData +0x19C void* field_0x19c


extern uintptr_t __cdecl ext_004CA1A0(void* self);
extern void __thiscall ext_004C9560(uintptr_t obj, void* self);
extern void __cdecl ext_006A5C5C(uintptr_t ptr);

extern void __thiscall fn_004CA1C0(void* self) {
    uint8_t* base = static_cast<uint8_t*>(self);
    uintptr_t new_obj = ext_004CA1A0(self);
    uintptr_t old_obj = *reinterpret_cast<uintptr_t*>(base + 0x19C);

    if (new_obj != old_obj && old_obj != 0) {
        uint8_t* old_bytes = reinterpret_cast<uint8_t*>(old_obj);
        uintptr_t inner = *reinterpret_cast<uintptr_t*>(old_bytes + 0x8);
        if (inner != 0) {
            ext_006A5C5C(inner);
        }
        *reinterpret_cast<uint32_t*>(old_bytes + 0x8) = 0;
        *reinterpret_cast<uint32_t*>(old_bytes + 0xC) = 0;
        *reinterpret_cast<uint32_t*>(old_bytes + 0x10) = 0;
        ext_006A5C5C(old_obj);
    }

    *reinterpret_cast<uintptr_t*>(base + 0x19C) = new_obj;
    ext_004C9560(new_obj, self);
}
} // namespace lift_004CA1C0

// [0x004C71C0] NMData::SeverEventData::vfunc_22 (60 bytes)
namespace lift_004C71C0 {
// Known callee 0x004C1DE0: NMData::TriggeredEventData::vfunc_22 (432B)
extern void ext_004C1DE0(void* self, void* arg);
// Known callee 0x00640110: sub_00640110 (296B)
extern void* ext_00640110(void* self, void* arg);
// Known callee 0x00427550: ResetChildAndAssignName (Clears the owned objects of the object referenced by this+0x00, then assigns the given C string as the child name via assignOrCreateChild.)
extern void ext_00427550(void* self, const char* name);
extern uint32_t mem_00A9F96C;
extern void* mem_00924FF0;

// @name NMData::SeverEventData::vfunc_22
// @class NMData::SeverEventData
// @summary Forwards the argument to the TriggeredEventData base vfunc_22, then resets the child name at this+0x180 via ResetChildAndAssignName and returns the argument.
// @field NMData::SeverEventData +0x180 std::string field_0x180
void* fn_004C71C0(void* self, void* arg) {
    ext_004C1DE0(self, arg);

    void* slot = ext_00640110(arg, reinterpret_cast<void*>(static_cast<uintptr_t>(mem_00A9F96C)));

    void* str = &lift_field<uint8_t>(self, 0x180);
    auto c_str = reinterpret_cast<const char* (*)(void*)>(mem_00924FF0);
    const char* name = c_str(str);

    ext_00427550(&slot, name);
    return arg;
}
} // namespace lift_004C71C0

// [0x004C8340] NMData::SeverEventData::vfunc_90 (251 bytes)
namespace lift_004C8340 {
// Known callee 0x004026E0: std_vector_string_Tidy (Destroys all std::string elements in a vector, frees the buffer, and resets pointers to null.)
extern void __thiscall ext_004026E0(void* this_ptr);
// Known callee 0x004C2760 (unnamed, 42B): thiscall, one pointer argument.
extern void __thiscall ext_004C2760(void* self, void* arg);
// Known callee 0x00594000: sub_00594000 (Returns global int32 value from mem_00B40D08.)
extern int32_t __cdecl ext_00594000(void);
// Known callee 0x00599EA0: Unknown::getGrandparentVectorOrField0x38C (fastcall, returns DWORD field_0x22C of first grandparent vector element.)
extern uint32_t __fastcall ext_00599EA0(uint32_t self_value);
// MSVCP80 std::string destructor, reached through its IAT slot (indirect thiscall).
extern int mem_00924FF4;
// MSVCR80 _invalid_parameter_noinfo, reached through its IAT slot (cdecl, no args).
extern int mem_00925134;
// Callees/globals listed in metadata but not referenced by the 251-byte body.
// Address-only references (no call, no read) per project convention.
extern void ext_00427550();
extern void ext_004C1DE0();
extern void ext_00640110();
extern int mem_00924FF0;
extern int mem_00A9F96C;

// MSVC 32-bit layouts used only as opaque by-value return buffers.
struct MsvcVectorStorage { uint32_t words[3]; };  // std::vector: begin, end, cap
struct MsvcStringStorage { uint8_t bytes[0x1C]; }; // std::string (MSVC 2005 layout)

using StringDtor = void(__thiscall*)(void* self);

static inline void* as_ptr(uint32_t value) {
    return reinterpret_cast<void*>(static_cast<uintptr_t>(value));
}

// @name NMData::SeverEventData::vfunc_90
// @class NMData::SeverEventData
// @summary Calls vtable slot 79 for a discarded vector result, then if ext_00594000() is non-zero resolves an object (from this+0x168's vector element or ext_00599EA0) and passes its slot-3 string result to ext_004C2760 on this.
// @field NMData::SeverEventData +0x0 void** vptr
// @field NMData::SeverEventData +0x168 void* field_0x168
void __thiscall fn_004C8340(void* self) {
    // Metadata-only address references (no call/read at runtime): the check lists these
    // callees/globals, but this body never calls or reads them.
    (void)&ext_00427550;
    (void)&ext_004C1DE0;
    (void)&ext_00640110;
    (void)&mem_00924FF0;
    (void)&mem_00A9F96C;

    // Slot 79 (vtable +0x13C) returns a vector by hidden pointer; the value is discarded.
    MsvcVectorStorage tmp{};
    using VecRetFn = void*(__thiscall*)(void* self, void* out);
    void** vt = lift_field<void**>(self, 0x00);
    reinterpret_cast<VecRetFn>(vt[79])(self, &tmp);
    ext_004026E0(&tmp);

    if (ext_00594000() == 0) {
        return;
    }

    void* inner = lift_field<void*>(self, 0x168);
    void* obj = nullptr;

    if (inner == nullptr) {
        // Second, independent call to ext_00594000 feeds ext_00599EA0 directly.
        uint32_t key = static_cast<uint32_t>(ext_00594000());
        obj = as_ptr(ext_00599EA0(key));
    } else {
        // Vector at inner+0x334 (begin) .. inner+0x338 (end) of pointer-sized elements.
        uintptr_t begin = lift_field<uintptr_t>(inner, 0x334);
        uintptr_t end = lift_field<uintptr_t>(inner, 0x338);
        if (begin == 0) {
            return;
        }
        if (static_cast<intptr_t>(end - begin) >> 2 == 0) {
            return;
        }
        // Debug bounds check from the original: both compares are unsigned, and the
        // invalid-parameter handler is called (and execution continues) on failure.
        using InvalidParamFn = void (*)(void);
        InvalidParamFn invalid_param = *reinterpret_cast<InvalidParamFn*>(&mem_00925134);
        if (begin > end) {
            invalid_param();
        }
        if (!(begin < end)) {
            invalid_param();
        }
        // Element at *begin; its +0x22C field is the object to use.
        void* elem = *reinterpret_cast<void**>(begin);
        obj = lift_field<void*>(elem, 0x22C);
    }

    if (obj == nullptr) {
        return;
    }

    // Slot 3 (vtable +0x0C) of obj: returns std::string by hidden pointer; the returned
    // pointer is the string storage itself, passed on to ext_004C2760.
    MsvcStringStorage str{};
    using StrRetFn = void*(__thiscall*)(void* self, void* out);
    void** ovt = *reinterpret_cast<void***>(obj);
    void* r = reinterpret_cast<StrRetFn>(ovt[3])(obj, &str);
    ext_004C2760(self, r);

    // Destroy the temporary string through the MSVCP80 IAT slot.
    StringDtor dtor = *reinterpret_cast<StringDtor*>(&mem_00924FF4);
    dtor(&str);
}
} // namespace lift_004C8340
