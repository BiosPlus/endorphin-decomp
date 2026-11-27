// Lifted C++ translation unit: lifted/classes/Acclaim2MotionIO.cpp
#include "lift_compat.h"
// Virtual dispatch helper: calls vtable slot `Slot` of `obj`, passing obj as the implicit this.
template <typename R, std::size_t Slot, typename... A>
inline R lift_vcall(void* obj, A... args) {
    void** vt = lift_field<void**>(obj, 0);
    using Fn = R (*)(void*, A...);
    return reinterpret_cast<Fn>(vt[Slot])(obj, args...);
}
// Known callee 0x00553720: NMFileIO::vfunc_3 (Forwards the single argument to sub_00552B00 on two embedded sub-objects (+0x5C and +0x16C) and returns it.)
extern "C" void* ext_00553720(void* self, void* arg);
// Callee 0x00640390: sub_00640390 (332B), thiscall on arg with two stack args (mem value, 0); returns a value in eax.
extern "C" void* ext_00640390(void* self, uint32_t value, uint32_t flags);
extern "C" uint32_t mem_00A9ECE8;

extern "C" void* ext_00553720(void* self, void* arg);
// Callee 0x00640390: sub_00640390 (332B), thiscall on arg with two stack args (mem value, 0); returns a value in eax.
extern "C" void* ext_00640390(void* self, uint32_t value, uint32_t flags);
extern "C" uint32_t mem_00A9ECE8;
// @field Acclaim2MotionIO +0x00 void* vtable
// @field Acclaim2MotionIO +0x584 void* field_0x584
bool fn_0055BBF0(void* self) {
    if (!lift_vcall<bool, 57>(self)) // vtable +0xE4
        return false;
    void* sub = lift_field<void*>(self, 0x584);
    return lift_vcall<bool, 48>(sub); // vtable +0xC0 (tail call)
}

// [0x00582B60] Acclaim2MotionIO::vfunc_3 (38 bytes)
// @name Acclaim2MotionIO::vfunc_3
// @class Acclaim2MotionIO
// @summary Looks up a result via sub_00640390 using the global at mem_00A9ECE8, passes it to NMFileIO::vfunc_3 on this, and returns the original argument.
// @field Acclaim2MotionIO +0x00 void* vtable (no direct field access in this function; self is only passed through to ext_00553720)
void* fn_00582B60(void* self, void* arg) {
    const uint32_t value = mem_00A9ECE8;
    void* result = ext_00640390(arg, value, 0);
    ext_00553720(self, result);
    return arg;
}

// [0x00583630]
namespace lift_00583630 {
// @name Acclaim2MotionIO::vfunc_14
// @class Acclaim2MotionIO
// @summary Loads/updates motion properties, resolves motion file path, and applies bone/frame overrides.
// @field Acclaim2MotionIO +0x5c void* field_0x5c
// @field Acclaim2MotionIO +0x60 uint32_t field_0x60
// @field Acclaim2MotionIO +0x64 float field_0x64
// @field Acclaim2MotionIO +0x68 uint32_t field_0x68
// @field Acclaim2MotionIO +0x6c float field_0x6c
// @field Acclaim2MotionIO +0x78 float field_0x78
// @field Acclaim2MotionIO +0x7c float field_0x7c
// @field Acclaim2MotionIO +0x80 float field_0x80
// @field Acclaim2MotionIO +0x84 uint32_t field_0x84
// @field Acclaim2MotionIO +0x88 uint32_t field_0x88
// @field Acclaim2MotionIO +0x8c uint32_t field_0x8c
// @field Acclaim2MotionIO +0x27c void* field_0x27c
// @field Acclaim2MotionIO +0x414 void* field_0x414
// @field Acclaim2MotionIO +0x46c float field_0x46c
// @field Acclaim2MotionIO +0x4a8 float field_0x4a8
// @field Acclaim2MotionIO +0x4ac float field_0x4ac
// @field Acclaim2MotionIO +0x4b0 float field_0x4b0
// @field Acclaim2MotionIO +0x4b4 uint32_t field_0x4b4
// @field Acclaim2MotionIO +0x4b8 uint32_t field_0x4b8
// @field Acclaim2MotionIO +0x4bc uint32_t field_0x4bc
// @field Acclaim2MotionIO +0x4c0 uint8_t field_0x4c0
// @field Acclaim2MotionIO +0x4c1 uint8_t field_0x4c1
// @field Acclaim2MotionIO +0x4c2 uint8_t field_0x4c2
// @field Acclaim2MotionIO +0x4c8 int32_t field_0x4c8
// @field Acclaim2MotionIO +0x4cc uint32_t field_0x4cc
// @field Acclaim2MotionIO +0x4d0 uint32_t field_0x4d0
// @field Acclaim2MotionIO +0x4d4 uint8_t field_0x4d4
// @field Acclaim2MotionIO +0x4f0 void* field_0x4f0
// @field Acclaim2MotionIO +0x530 std::string field_0x530
// @field Acclaim2MotionIO +0x568 std::string field_0x568
// @field Acclaim2MotionIO +0x584 void* field_0x584
// @field Acclaim2MotionIO +0x5e0 void* field_0x5e0
// @field Acclaim2MotionIO +0x800 void* field_0x800


void __thiscall ext_00581D90(void* self);
void* __thiscall ext_0057BB20(void* self, void* value);
void __thiscall ext_005828C0(void* self, void* arg);
void* __cdecl ext_00430EF0(void* first, void* last, const void* value);
void __fastcall ext_00421C00(void* self);
void __thiscall ext_005557A0(void* self, void* arg1, void* arg2);
void* __cdecl ext_00662D00(void* out_str, void* a, void* b);
void __cdecl ext_00663690(const char* cstr, void* out_str, int flag);
uint8_t __cdecl ext_006629B0(void* str);
void __thiscall ext_00406FC0(void* self, void* arg);

extern uintptr_t mem_00924EA8;
extern uintptr_t mem_00924FEC;
extern uintptr_t mem_00924FE8;
extern uintptr_t mem_00924FF0;
extern uintptr_t mem_00924FDC;
extern uintptr_t mem_00924FF4;
extern float mem_00955998;
extern uintptr_t mem_00925134;

int __thiscall fn_00583630(void* self, void* arg0) {
    uint8_t local_obj[0x28]{};
    void* p_46c = static_cast<uint8_t*>(self) + 0x46c;
    ext_00581D90(p_46c);
    ext_0057BB20(local_obj, p_46c);
    ext_005828C0(local_obj, arg0);

    void* p_568 = static_cast<uint8_t*>(self) + 0x568;
    reinterpret_cast<void(__thiscall*)(void*)>(mem_00924EA8)(p_568);

    void* p_530 = static_cast<uint8_t*>(self) + 0x530;
    bool is_empty = reinterpret_cast<bool(__thiscall*)(void*)>(mem_00924FEC)(p_530);
    if (!is_empty) {
        uint8_t tmp_str[0x1c]{};
        reinterpret_cast<void(__thiscall*)(void*)>(mem_00924FE8)(tmp_str);
        const char* cstr = reinterpret_cast<const char*(__thiscall*)(void*)>(mem_00924FF0)(arg0);
        ext_00663690(cstr, tmp_str, 0);

        uint8_t tmp_str2[0x1c]{};
        void* joined = ext_00662D00(tmp_str2, tmp_str, p_530);
        reinterpret_cast<void*(__thiscall*)(void*, void*)>(mem_00924FDC)(p_568, joined);
        reinterpret_cast<void(__thiscall*)(void*)>(mem_00924FF4)(tmp_str2);

        if (ext_006629B0(p_568) != 0) {
            void* p_584 = static_cast<uint8_t*>(self) + 0x584;
            void** vtbl_584 = *reinterpret_cast<void***>(p_584);
            reinterpret_cast<void(__thiscall*)(void*, void*)>(vtbl_584[0x38 / 4])(p_584, p_568);

            void* p_27c = static_cast<uint8_t*>(self) + 0x27c;
            void* p_800 = static_cast<uint8_t*>(self) + 0x800;
            ext_005557A0(self, p_800, p_27c);

            void** vtbl_800 = *reinterpret_cast<void***>(p_800);
            void* ret_24 = reinterpret_cast<void*(__thiscall*)(void*)>(vtbl_800[0x24 / 4])(p_800);

            void** vtbl_27c = *reinterpret_cast<void***>(p_27c);
            void* fn_27c = *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(vtbl_27c) + 0x5c);
            reinterpret_cast<void(__thiscall*)(void*, void*)>(fn_27c)(p_27c, ret_24);

            ext_00406FC0(static_cast<uint8_t*>(self) + 0x5c, static_cast<uint8_t*>(self) + 0x5e0);
        } else {
            reinterpret_cast<void(__thiscall*)(void*)>(mem_00924EA8)(p_568);
        }
        reinterpret_cast<void(__thiscall*)(void*)>(mem_00924FF4)(tmp_str);
    }

    if (lift_field<uint8_t>(self, 0x4d4) != 0) {
        lift_field<float>(self, 0x64) = static_cast<float>(lift_field<int32_t>(self, 0x4c8));
    }

    if (!(mem_00955998 > lift_field<float>(self, 0x46c))) {
        lift_field<float>(self, 0x6c) = 1.0f;
        lift_field<uint32_t>(self, 0x60) = lift_field<uint32_t>(self, 0x4d0);
        uint32_t val_4cc = lift_field<uint32_t>(self, 0x4cc);
        lift_field<uint32_t>(self, 0x5c) = val_4cc;
        lift_field<uint32_t>(self, 0x68) = val_4cc;

        void* obj_414 = lift_field<void*>(self, 0x414);
        if (obj_414 != nullptr) {
            void* obj_160 = static_cast<uint8_t*>(obj_414) + 0x160;
            void** vtbl_160 = *reinterpret_cast<void***>(obj_160);
            void* target_str = reinterpret_cast<void*(__thiscall*)(void*)>(vtbl_160[0x24 / 4])(obj_160);

            struct Entry {
                float val;
                void* vec_alloc;
                uint8_t* names_begin;
                uint8_t* names_end;
                uint8_t* names_cap;
            };
            Entry* it = lift_field<Entry*>(self, 0x4f4);
            Entry* end = lift_field<Entry*>(self, 0x4f8);
            if (it > end) {
                reinterpret_cast<void(__cdecl*)()>(mem_00925134)();
            }
            for (; it != end; ++it) {
                if (it->names_begin == nullptr) {
                    lift_field<float>(self, 0x6c) = it->val;
                } else if (it->names_begin != it->names_end) {
                    void* found = ext_00430EF0(it->names_begin, it->names_end, target_str);
                    if (found != it->names_end) {
                        lift_field<float>(self, 0x6c) = it->val;
                    }
                }
            }
        }
    }

    if (lift_field<uint8_t>(self, 0x4c1) != 0) {
        lift_field<uint32_t>(self, 0x84) = lift_field<uint32_t>(self, 0x4b4);
        lift_field<float>(self, 0x7c) = lift_field<float>(self, 0x4ac);
    }
    if (lift_field<uint8_t>(self, 0x4c0) != 0) {
        lift_field<uint32_t>(self, 0x88) = lift_field<uint32_t>(self, 0x4b8);
        lift_field<float>(self, 0x80) = lift_field<float>(self, 0x4b0);
    }
    if (lift_field<uint8_t>(self, 0x4c2) != 0) {
        lift_field<uint32_t>(self, 0x8c) = lift_field<uint32_t>(self, 0x4bc);
        lift_field<float>(self, 0x78) = lift_field<float>(self, 0x4a8);
    }

    ext_00421C00(local_obj);
    return 0;
}
} // namespace lift_00583630
