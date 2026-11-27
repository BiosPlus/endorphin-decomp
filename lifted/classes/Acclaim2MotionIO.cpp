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

// [0x00582BC0]
namespace lift_00582BC0 {
// @name Acclaim2MotionIO::vfunc_11
// @class Acclaim2MotionIO
// @summary Loads/processes Acclaim motion data, initializes skeleton/channels, and imports motion frames.
// @field Acclaim2MotionIO +0x64 float field_0x64
// @field Acclaim2MotionIO +0x78 float field_0x78
// @field Acclaim2MotionIO +0x7C float field_0x7c
// @field Acclaim2MotionIO +0x80 float field_0x80
// @field Acclaim2MotionIO +0x84 uint32_t field_0x84
// @field Acclaim2MotionIO +0x88 uint32_t field_0x88
// @field Acclaim2MotionIO +0x8C uint32_t field_0x8c
// @field Acclaim2MotionIO +0xCC uint32_t field_0xcc
// @field Acclaim2MotionIO +0x108 uint32_t field_0x108
// @field Acclaim2MotionIO +0x10C uint32_t field_0x10c
// @field Acclaim2MotionIO +0x110 uint32_t field_0x110
// @field Acclaim2MotionIO +0x114 uint8_t field_0x114
// @field Acclaim2MotionIO +0x414 void* field_0x414
// @field Acclaim2MotionIO +0x418 void* field_0x418
// @field Acclaim2MotionIO +0x420 void* field_0x420
// @field Acclaim2MotionIO +0x424 void* field_0x424
// @field Acclaim2MotionIO +0x42C uint8_t field_0x42c
// @field Acclaim2MotionIO +0x438 uint32_t field_0x438
// @field Acclaim2MotionIO +0x46C float field_0x46c
// @field Acclaim2MotionIO +0x4A8 float field_0x4a8
// @field Acclaim2MotionIO +0x4AC float field_0x4ac
// @field Acclaim2MotionIO +0x4B0 float field_0x4b0
// @field Acclaim2MotionIO +0x4B4 uint32_t field_0x4b4
// @field Acclaim2MotionIO +0x4B8 uint32_t field_0x4b8
// @field Acclaim2MotionIO +0x4BC uint32_t field_0x4bc
// @field Acclaim2MotionIO +0x4C0 uint8_t field_0x4c0
// @field Acclaim2MotionIO +0x4C1 uint8_t field_0x4c1
// @field Acclaim2MotionIO +0x4C2 uint8_t field_0x4c2
// @field Acclaim2MotionIO +0x4C4 uint32_t field_0x4c4
// @field Acclaim2MotionIO +0x500 uint8_t field_0x500
// @field Acclaim2MotionIO +0x510 uint8_t field_0x510
// @field Acclaim2MotionIO +0x54C uint32_t field_0x54c
// @field Acclaim2MotionIO +0x550 uint8_t field_0x550
// @field Acclaim2MotionIO +0x560 uint8_t field_0x560
// @field Acclaim2MotionIO +0x568 uint8_t field_0x568


struct MsvcString28 {
    uint8_t data[28];
};

struct MsvcVec {
    void* proxy;
    uint8_t* first;
    uint8_t* last;
    uint8_t* end;
};

struct TempPairVec {
    void* proxy;
    uint8_t* first;
    uint8_t* last;
    uint8_t* end;
};

struct TempWrapper {
    uint32_t val;
    MsvcString28 str;
};

struct TempException {
    void* vftable;
    void* std_exc_data[2];
    MsvcString28 msg;
};

void __thiscall ext_00421C00(void* self);
void* __cdecl ext_00430EF0(void* first, void* last, const void* value);
void* __thiscall ext_0049EEE0(void* self, void* arg);
void __thiscall ext_00555D70(void* self, void* a, void* b, int c, void* d, void* e);
void __thiscall ext_005576F0(void* self);
void __thiscall ext_0055D0F0(void* self);
void __thiscall ext_0055D2C0(void* self, void* arg);
void* __thiscall ext_0057BB20(void* self, void* value);
void __thiscall ext_005828C0(void* self, void* arg);
void* __thiscall ext_005A0F70(void* self, void* arg);
void __thiscall ext_00661A10(void* self, float val);
void* __cdecl ext_00664ED0(void* self);
void __thiscall ext_0067E470(void* self, MsvcString28 str, void* arg);
void __cdecl ext_006A5C5C(void* ptr);
[[noreturn]] void __stdcall ext_006A6DD2(void* exc, void* throwInfo);

extern void(__thiscall* mem_00924EA8)(void* str);
extern bool(__cdecl* mem_00924FC0)(const void* a, const char* b);
extern bool(__cdecl* mem_00924FC4)(const void* a, const void* b);
extern void*(__thiscall* mem_00924FE0)(void* str, const void* other);
extern void*(__thiscall* mem_00924FE4)(void* str, const char* s);
extern const char*(__thiscall* mem_00924FF0)(const void* str);
extern void(__thiscall* mem_00924FF4)(void* str);
extern void*(__thiscall* mem_00925130)(void* self, const char* const* msg);
extern void(__cdecl* mem_00925134)(void);
extern double(__cdecl* mem_009251F0)(const char* s);

void __thiscall fn_00582BC0(void* self, void* arg0) {
    if (lift_field<uint8_t>(self, 0x560) == 0) {
        TempWrapper tmp;
        ext_0057BB20(&tmp, reinterpret_cast<uint8_t*>(self) + 0x46C);
        ext_005828C0(&tmp, arg0);
        mem_00924EA8(reinterpret_cast<uint8_t*>(self) + 0x568);
        ext_00421C00(&tmp);
    }

    if (lift_field<uint8_t>(self, 0x4C1) != 0) {
        float f = lift_field<float>(self, 0x4AC);
        lift_field<uint32_t>(self, 0x84) = lift_field<uint32_t>(self, 0x4B4);
        lift_field<float>(self, 0x7C) = f;
    }

    if (lift_field<uint8_t>(self, 0x4C0) != 0) {
        float f = lift_field<float>(self, 0x4B0);
        lift_field<uint32_t>(self, 0x88) = lift_field<uint32_t>(self, 0x4B8);
        lift_field<float>(self, 0x80) = f;
    }

    if (lift_field<uint8_t>(self, 0x4C2) != 0) {
        float f = lift_field<float>(self, 0x4A8);
        lift_field<uint32_t>(self, 0x8C) = lift_field<uint32_t>(self, 0x4BC);
        lift_field<float>(self, 0x78) = f;
    }

    if (lift_field<uint32_t>(self, 0x438) == 0) {
        ext_0055D2C0(reinterpret_cast<uint8_t*>(self) + 0x42C, lift_field<void*>(self, 0x418));
        lift_field<void*>(self, 0x414) = lift_field<void*>(self, 0x418);
    }

    void* progress = lift_field<void*>(self, 0x424);
    if (progress != nullptr) {
        MsvcString28 s;
        mem_00924FE4(&s, reinterpret_cast<const char*>(0x0095A0FC));
        void* p = lift_field<void*>(self, 0x424);
        void** vtbl = *reinterpret_cast<void***>(p);
        reinterpret_cast<void(__thiscall*)(void*, void*)>(vtbl[3])(p, &s);
        mem_00924FF4(&s);

        uint32_t count = lift_field<uint32_t>(self, 0x4C4);
        uint32_t total;
        if (lift_field<uint8_t>(self, 0x114) != 0) {
            uint32_t a = lift_field<uint32_t>(self, 0x10C);
            uint32_t b = lift_field<uint32_t>(self, 0x110);
            uint32_t c = lift_field<uint32_t>(self, 0x108);
            total = (count - 1) * a + c + (b + 3) * count;
        } else {
            total = count * 3;
        }
        p = lift_field<void*>(self, 0x424);
        vtbl = *reinterpret_cast<void***>(p);
        reinterpret_cast<void(__thiscall*)(void*, uint32_t, uint32_t)>(vtbl[2])(p, 0, total);

        mem_00924FE4(&s, reinterpret_cast<const char*>(0x0095A0E0));
        p = lift_field<void*>(self, 0x424);
        vtbl = *reinterpret_cast<void***>(p);
        reinterpret_cast<void(__thiscall*)(void*, void*)>(vtbl[3])(p, &s);
        mem_00924FF4(&s);
    }

    ext_00661A10(lift_field<void*>(self, 0x420), lift_field<float>(self, 0x64));

    uint8_t* obj414 = reinterpret_cast<uint8_t*>(lift_field<void*>(self, 0x414));
    void* obj160 = obj414 + 0x160;
    void** vtbl160 = *reinterpret_cast<void***>(obj160);
    void* str18 = reinterpret_cast<void*(__thiscall*)(void*)>(vtbl160[9])(obj160);

    uint32_t mode = lift_field<uint32_t>(self, 0xCC);
    if (mode == 1 || mode == 0) {
        obj414 = reinterpret_cast<uint8_t*>(lift_field<void*>(self, 0x414));
        void* obj8 = obj414 + 0x8;
        void** vtbl8 = *reinterpret_cast<void***>(obj8);
        uint8_t* target14 = reinterpret_cast<uint8_t*(__thiscall*)(void*, void*)>(vtbl8[3])(obj8, lift_field<void*>(self, 0x420));

        MsvcVec* vec500 = reinterpret_cast<MsvcVec*>(reinterpret_cast<uint8_t*>(self) + 0x500);
        if (vec500->first > vec500->last) {
            mem_00925134();
        }
        for (uint8_t* it = vec500->first; ; it += 0x1C) {
            if (vec500->first > vec500->last) {
                mem_00925134();
            }
            if (it == vec500->last) {
                break;
            }
            if (it >= vec500->last) {
                mem_00925134();
            }
            MsvcVec* sub = reinterpret_cast<MsvcVec*>(it + 0x0C);
            bool apply = true;
            if (sub->first != nullptr && (sub->last - sub->first) / 0x1C != 0) {
                if (sub->first > sub->last) {
                    mem_00925134();
                }
                void* found = ext_00430EF0(sub->first, sub->last, str18);
                if (found == sub->last) {
                    apply = false;
                }
            }
            if (apply) {
                *reinterpret_cast<float*>(target14 + 0x30) = *reinterpret_cast<float*>(it + 0x00);
                *reinterpret_cast<float*>(target14 + 0x34) = *reinterpret_cast<float*>(it + 0x04);
                *reinterpret_cast<float*>(target14 + 0x38) = *reinterpret_cast<float*>(it + 0x08);
                *reinterpret_cast<float*>(target14 + 0x3C) = 1.0f;
            }
            if (it >= vec500->last) {
                mem_00925134();
            }
        }

        MsvcVec* vec510 = reinterpret_cast<MsvcVec*>(reinterpret_cast<uint8_t*>(self) + 0x510);
        if (vec510->first > vec510->last) {
            mem_00925134();
        }
        for (uint8_t* it = vec510->first; ; it += 0x38) {
            if (vec510->first > vec510->last) {
                mem_00925134();
            }
            if (it == vec510->last) {
                break;
            }
            if (it >= vec510->last) {
                mem_00925134();
            }
            MsvcVec* sub = reinterpret_cast<MsvcVec*>(it + 0x28);
            bool apply = true;
            if (sub->first != nullptr && (sub->last - sub->first) / 0x1C != 0) {
                if (sub->first > sub->last) {
                    mem_00925134();
                }
                uint8_t* s_it = sub->first;
                while (s_it != sub->last) {
                    if (mem_00924FC4(s_it, str18)) {
                        break;
                    }
                    s_it += 0x1C;
                }
                if (s_it == sub->last) {
                    apply = false;
                }
            }
            if (apply) {
                MsvcString28 nameCopy;
                mem_00924FE0(&nameCopy, it + 0x0C);
                ext_0067E470(target14, nameCopy, it);
            }
            if (it >= vec510->last) {
                mem_00925134();
            }
        }
    }

    MsvcVec* vec550 = reinterpret_cast<MsvcVec*>(reinterpret_cast<uint8_t*>(self) + 0x550);
    if (vec550->first > vec550->last) {
        mem_00925134();
    }
    uint32_t frameIdx = 0;
    for (uint8_t* frameIt = vec550->first; ; frameIt += 0x3C) {
        if (vec550->first > vec550->last) {
            mem_00925134();
        }
        if (frameIt == vec550->last) {
            break;
        }
        if (frameIt >= vec550->last) {
            mem_00925134();
        }

        frameIdx += 1;
        void* prog = lift_field<void*>(self, 0x424);
        if (prog != nullptr) {
            void** vtbl = *reinterpret_cast<void***>(prog);
            reinterpret_cast<void(__thiscall*)(void*, uint32_t)>(vtbl[1])(prog, frameIdx);
        }

        void* ctx = lift_field<void*>(self, 0x438);
        if (ctx == nullptr) {
            ctx = reinterpret_cast<uint8_t*>(self) + 0x42C;
        }
        ext_0055D0F0(ctx);

        MsvcVec* boneVec = reinterpret_cast<MsvcVec*>(frameIt + 0x1C);
        if (boneVec->first > boneVec->last) {
            mem_00925134();
        }
        for (uint8_t* boneIt = boneVec->first; ; boneIt += 0x2C) {
            if (boneVec->first > boneVec->last) {
                mem_00925134();
            }
            if (boneIt == boneVec->last) {
                break;
            }
            if (boneIt >= boneVec->last) {
                mem_00925134();
            }

            void* boneObj = ext_005A0F70(lift_field<void*>(self, 0x414), boneIt);
            if (boneObj != nullptr) {
                void* boneObj2 = ext_005A0F70(lift_field<void*>(self, 0x414), boneIt);
                if (boneObj2 != nullptr) {
                    TempPairVec pairs;
                    ext_0049EEE0(&pairs, reinterpret_cast<uint8_t*>(boneObj) + 0x168);

                    MsvcVec* valVec = reinterpret_cast<MsvcVec*>(boneIt + 0x1C);
                    if (valVec->first > valVec->last) {
                        mem_00925134();
                    }
                    uint32_t valCount = 0;
                    if (valVec->first != nullptr) {
                        valCount = static_cast<uint32_t>((valVec->last - valVec->first) / 0x3C);
                    }
                    uint32_t pairCount = 0;
                    if (pairs.first != nullptr) {
                        pairCount = static_cast<uint32_t>((pairs.last - pairs.first) >> 3);
                    }
                    if (valCount < pairCount) {
                        MsvcString28 errStr;
                        mem_00924FE4(&errStr, reinterpret_cast<const char*>(0x0095A0CC));
                        const char* errCStr = mem_00924FF0(&errStr);
                        TempException exc;
                        mem_00925130(&exc, &errCStr);
                        exc.vftable = reinterpret_cast<void*>(0x00928EF0);
                        mem_00924FE0(&exc.msg, &errStr);
                        exc.std_exc_data[0] = reinterpret_cast<void*>(0x009570DC);
                        ext_006A6DD2(&exc, reinterpret_cast<void*>(0x009F8908));
                    }

                    uint8_t* v_it = valVec->first;
                    if (lift_field<uint32_t>(self, 0x54C) == 0) {
                        for (uint8_t* p_it = pairs.first; p_it != pairs.last; p_it += 8, v_it += 0x3C) {
                            const char* s = mem_00924FF0(v_it + 0x20);
                            *reinterpret_cast<float*>(p_it + 4) = static_cast<float>(mem_009251F0(s));
                        }
                    } else {
                        while (v_it != valVec->last) {
                            for (uint8_t* p_it = pairs.first; p_it != pairs.last; p_it += 8) {
                                MsvcString28 upperStr;
                                mem_00924FE0(&upperStr, v_it + 4);
                                ext_00664ED0(&upperStr);
                                uint32_t dof = *reinterpret_cast<uint32_t*>(p_it);
                                if ((mem_00924FC0(&upperStr, reinterpret_cast<const char*>(0x0095919C)) && dof == 0) ||
                                    (mem_00924FC0(&upperStr, reinterpret_cast<const char*>(0x00959198)) && dof == 1) ||
                                    (mem_00924FC0(&upperStr, reinterpret_cast<const char*>(0x00959194)) && dof == 2) ||
                                    (mem_00924FC0(&upperStr, reinterpret_cast<const char*>(0x00959190)) && dof == 3) ||
                                    (mem_00924FC0(&upperStr, reinterpret_cast<const char*>(0x0095918C)) && dof == 4) ||
                                    (mem_00924FC0(&upperStr, reinterpret_cast<const char*>(0x00959188)) && dof == 5) ||
                                    (mem_00924FC0(&upperStr, reinterpret_cast<const char*>(0x0092F1B8)) && dof == 6)) {
                                    const char* s = mem_00924FF0(v_it + 0x20);
                                    *reinterpret_cast<float*>(p_it + 4) = static_cast<float>(mem_009251F0(s));
                                }
                                mem_00924FF4(&upperStr);
                            }
                            v_it += 0x3C;
                        }
                    }

                    void** boneVtbl = *reinterpret_cast<void***>(boneObj);
                    bool flag = reinterpret_cast<bool(__thiscall*)(void*)>(boneVtbl[0x70 / 4])(boneObj);
                    ext_00555D70(self, &pairs, boneObj2, flag ? 0 : 1, str18, nullptr);
                    if (pairs.first != nullptr) {
                        ext_006A5C5C(pairs.first);
                    }
                }
            }
        }
    }

    if (lift_field<uint32_t>(self, 0x438) == 0) {
        ext_005576F0(self);
    }
}
} // namespace lift_00582BC0
