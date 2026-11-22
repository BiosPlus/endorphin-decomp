// Lifted C++ translation unit: lifted/classes/FBXIO.cpp
#include "lift_compat.h"
extern "C" int ext_00640390(int self_arg, int a1, int a2);
extern "C" void ext_00553720(void* self, int a1);
extern "C" int mem_00A9EED4;
// Known callee 0x0047B170: sub_0047B170 (thiscall on list; appends one float by const ref)
extern "C" void __thiscall ext_0047B170(void* self, const float* value);
// Known callee 0x0041CD60: sub_0041CD60 (thiscall on list; returns element count)
extern "C" int32_t __thiscall ext_0041CD60(void* self);
extern "C" const float mem_00944238; // 120.0f
extern "C" const float mem_0094423C; // 60.0f
extern "C" const float mem_009563EC; // 50.0f
extern "C" const float mem_0092944C; // 30.0f
extern "C" const float mem_0095894C; // 29.97f
extern "C" const float mem_00958948; // 25.0f
extern "C" const float mem_00958944; // 24.0f
extern "C" const float mem_00993838; // 0.0f

extern "C" void __thiscall ext_0047B170(void* self, const float* value);
// Known callee 0x0041CD60: sub_0041CD60 (thiscall on list; returns element count)
extern "C" int32_t __thiscall ext_0041CD60(void* self);
extern "C" const float mem_00944238; // 120.0f
extern "C" const float mem_0094423C; // 60.0f
extern "C" const float mem_009563EC; // 50.0f
extern "C" const float mem_0092944C; // 30.0f
extern "C" const float mem_0095894C; // 29.97f
extern "C" const float mem_00958948; // 25.0f
extern "C" const float mem_00958944; // 24.0f
extern "C" const float mem_00993838; // 0.0f
// @name FBXIO::vfunc_10
// @class FBXIO
// @summary Loads/imports an FBX file using the configured scene/IO helpers and throws on failure.
// @field FBXIO +0xa4 int32_t field_0xa4
// @field FBXIO +0x414 void* field_0x414
// @field FBXIO +0x420 void* field_0x420
// @field FBXIO +0x424 void* field_0x424
// @field FBXIO +0x46c uint32_t field_0x46c
// @field FBXIO +0x470 void* field_0x470
extern "C" {
void* __cdecl ext_00663B30(void* dst, const char* src);
void __fastcall ext_00662120(void* self);
void __thiscall ext_0055E490(void* self, void* arg1, void* arg2, const char* arg3);
void __thiscall ext_0055F2C0(void* self, const void* arg1);
void __thiscall ext_006D2130(void* self, uint32_t a, uint32_t b);
void __thiscall ext_006BC970(void* self, void* arg1);
int32_t __fastcall ext_006E7460(void* self);
void __thiscall ext_006BC800(void* self, int32_t arg1);
uint8_t __fastcall ext_00562A80(void* self);
void __thiscall ext_0055E180(void* self, void* arg1);
void __thiscall ext_00403560(void* self, void* arg1);
void __stdcall ext_006A6DD2(void* exc, uint32_t throw_info);
void __fastcall ext_006D2160(void* self);
extern uint32_t mem_00924FE4;
extern uint32_t mem_00924FF4;
extern uint32_t mem_00924FE0;
extern uint32_t mem_00924FF0;
extern uint32_t mem_00924FD0;
extern uint32_t mem_00B37F40;
}

// @class FBXIO
// @summary Loads/imports an FBX file using the configured scene/IO helpers and throws on failure.
// @field FBXIO +0xa4 int32_t field_0xa4
// @field FBXIO +0x414 void* field_0x414
// @field FBXIO +0x420 void* field_0x420
// @field FBXIO +0x424 void* field_0x424
// @field FBXIO +0x46c uint32_t field_0x46c
// @field FBXIO +0x470 void* field_0x470
extern "C" {
void* __cdecl ext_00663B30(void* dst, const char* src);
void __fastcall ext_00662120(void* self);
void __thiscall ext_0055E490(void* self, void* arg1, void* arg2, const char* arg3);
void __thiscall ext_0055F2C0(void* self, const void* arg1);
void __thiscall ext_006D2130(void* self, uint32_t a, uint32_t b);
void __thiscall ext_006BC970(void* self, void* arg1);
int32_t __fastcall ext_006E7460(void* self);
void __thiscall ext_006BC800(void* self, int32_t arg1);
uint8_t __fastcall ext_00562A80(void* self);
void __thiscall ext_0055E180(void* self, void* arg1);
void __thiscall ext_00403560(void* self, void* arg1);
void __stdcall ext_006A6DD2(void* exc, uint32_t throw_info);
void __fastcall ext_006D2160(void* self);
extern uint32_t mem_00924FE4;
extern uint32_t mem_00924FF4;
extern uint32_t mem_00924FE0;
extern uint32_t mem_00924FF0;
extern uint32_t mem_00924FD0;
extern uint32_t mem_00B37F40;
}
}

// [0x005607E0] FBXIO::vfunc_33 (305 bytes)
// @name FBXIO::vfunc_33
// @class FBXIO
// @summary Fills list with the 7 standard rates (120,60,50,30,29.97,25,24) and returns the index of the first entry <= this->field_0x174, else the last index (-1 if empty).
// @field FBXIO +0x174 float field_0x174
int32_t __thiscall fn_005607E0(void* self, int32_t /*stack arg +4, unused*/, void* list) {
    // Append the seven rate constants to the list (in this order).
    const float rates[7] = {
        mem_00944238, mem_0094423C, mem_009563EC, mem_0092944C,
        mem_0095894C, mem_00958948, mem_00958944,
    };
    for (const float& r : rates) {
        ext_0047B170(list, &r);
    }

    const float current = *reinterpret_cast<const float*>(static_cast<const char*>(self) + 0x174);

    // Scan the list for the first entry whose (entry - current) is <= 0.
    // Note: NaN differences fall through (continue scanning), matching the original x87 test.
    const int32_t count = ext_0041CD60(list);
    for (int32_t i = 0; i < count; ++i) {
        float* const* head = reinterpret_cast<float* const*>(static_cast<char*>(list) + 4);
        float* const* tail = reinterpret_cast<float* const*>(static_cast<char*>(list) + 8);
        float* begin = *head;
        float* end = *tail;
        if (begin == nullptr) {
            std::abort(); // original calls _invalid_parameter_noinfo
        }
        const std::ptrdiff_t size = (reinterpret_cast<char*>(end) - reinterpret_cast<char*>(begin)) / 4;
        if (static_cast<std::ptrdiff_t>(i) >= size) {
            std::abort(); // original bounds check failure
        }
        const float diff = begin[i] - current;
        if (diff < mem_00993838 || diff == mem_00993838) {
            return i;
        }
    }

    // Fallback: last index, or -1 when the list is empty.
    float* begin = *reinterpret_cast<float* const*>(static_cast<char*>(list) + 4);
    if (begin == nullptr) {
        return -1;
    }
    float* end = *reinterpret_cast<float* const*>(static_cast<char*>(list) + 8);
    const int32_t size = static_cast<int32_t>(
        (reinterpret_cast<char*>(end) - reinterpret_cast<char*>(begin)) / 4);
    return size - 1;
}

// [0x00560300]
// @name FBXIO::vfunc_14
// @class FBXIO
// @summary Loads an FBX file, extracts scene/take names, and initializes FBX import state
// @field FBXIO +0x40 uint8_t[4] field_0x40
// @field FBXIO +0x90 uint8_t field_0x90
// @field FBXIO +0x94 uint8_t[4] field_0x94
// @field FBXIO +0x27c void* field_0x27c
// @field FBXIO +0x46c void* field_0x46c
// @field FBXIO +0x470 void* field_0x470
// @field FBXIO +0x4b8 void* field_0x4b8

#include "lift_compat.h"

extern "C" {
void __thiscall ext_00406940(void* self, void* vec);
void __thiscall ext_0040ECB0(void* vec, void* str);
void __thiscall ext_0055F3D0(void* self, void* subobj, int32_t arg);
void __cdecl ext_006A5C5C(void* ptr);
int32_t __fastcall ext_006BC370(void* self);
void* __fastcall ext_006D3DF0(void* self);
int32_t __fastcall ext_006D5C30(void* self);
const char* __fastcall ext_006D5C40(void* self);
uint8_t __thiscall ext_006D5FD0(void* self, void* arg0, int32_t arg1);
void __thiscall ext_006D6AD0(void* self, const char* str);
void __thiscall ext_006D6B10(void* self, void* arg0, void* arg1, void* arg2);
void __thiscall ext_0055E490(void* self, void* out0, void* out1, const char* path);
void __thiscall ext_0055E180(void* self, void* arg);
void __thiscall ext_006D2130(void* self, int32_t arg0, int32_t arg1);
void __thiscall ext_006BC970(void* self, void* out_vec);
int32_t __fastcall ext_006E7460(void* self);
void __thiscall ext_006D2160(void* self);

extern void* mem_00924FF0; // std::string::c_str
extern void* mem_00924FE4; // std::string::basic_string(const char*)
extern void* mem_00924FF4; // std::string::~basic_string
}

namespace {

struct RawStdString {
    uint8_t data[0x1c];
};

struct RawStdStringVector {
    uint32_t allocator_pad;
    RawStdString* begin;
    RawStdString* end;
    RawStdString* cap;
};

struct RawArray {
    int32_t count;
    uint8_t pad[0x0c];
    void** items;
    void* inline_ptr;
};

using CStrFn = const char* (__thiscall*)(void*);
using StrCtorFn = void (__thiscall*)(void*, const char*);
using StrDtorFn = void (__thiscall*)(void*);
using Vfunc0Fn = void (__thiscall*)(void*, const char*);
using Vfunc84Fn = void (__thiscall*)(void*);

} // namespace

extern "C" uint32_t __thiscall fn_00560300(void* self, void* arg0) {
    uint8_t* self_bytes = reinterpret_cast<uint8_t*>(self);
    void* subobj_27c = self_bytes + 0x27c;
    void** vtable_27c = *reinterpret_cast<void***>(subobj_27c);
    reinterpret_cast<Vfunc84Fn>(vtable_27c[0x84 / 4])(subobj_27c);

    void** slot_470 = reinterpret_cast<void**>(self_bytes + 0x470);
    void** slot_46c = reinterpret_cast<void**>(self_bytes + 0x46c);

    CStrFn c_str = reinterpret_cast<CStrFn>(mem_00924FF0);
    StrCtorFn str_ctor = reinterpret_cast<StrCtorFn>(mem_00924FE4);
    StrDtorFn str_dtor = reinterpret_cast<StrDtorFn>(mem_00924FF4);

    const char* path_cstr = c_str(arg0);
    ext_0055E490(self, slot_46c, slot_470, path_cstr);

    void* importer = ext_006D3DF0(*slot_46c);
    void** importer_vtable = *reinterpret_cast<void***>(importer);
    const char* path_cstr2 = c_str(arg0);
    reinterpret_cast<Vfunc0Fn>(importer_vtable[0])(importer, path_cstr2);

    const char* str_40 = c_str(self_bytes + 0x40);
    ext_006D6AD0(importer, str_40);

    uint8_t ok = ext_006D5FD0(importer, *slot_470, 0);
    if (!ok) {
        int32_t err = ext_006D5C30(importer);
        if (err == 9) {
            self_bytes[0x90] = 1;
            ext_0055E180(self, slot_46c);
            return 1;
        }
        const char* err_str = ext_006D5C40(importer);
        RawStdString tmp_err;
        str_ctor(&tmp_err, err_str);
        ext_0055E180(self, slot_46c);
        str_dtor(&tmp_err);
        return 0;
    }

    self_bytes[0x90] = 0;
    uint32_t local_18 = 0;
    uint32_t local_14 = 0;
    ext_006D6B10(importer, &arg0, &local_18, &local_14);

    *reinterpret_cast<void**>(self_bytes + 0x4b8) = arg0;

    RawArray arr{};
    ext_006D2130(&arr, 0x10, 4);
    arr.inline_ptr = &arr.items;
    ext_006BC970(*slot_470, &arr);

    RawStdStringVector vec{};
    vec.begin = nullptr;
    vec.end = nullptr;
    vec.cap = nullptr;

    for (int32_t i = 0; i < arr.count; ++i) {
        const char* item_name = reinterpret_cast<const char*>(ext_006E7460(arr.items[i]));
        RawStdString tmp_str;
        str_ctor(&tmp_str, item_name);
        ext_0040ECB0(&vec, &tmp_str);
        str_dtor(&tmp_str);
    }

    ext_00406940(self_bytes + 0x94, &vec);

    vtable_27c = *reinterpret_cast<void***>(subobj_27c);
    reinterpret_cast<Vfunc84Fn>(vtable_27c[0x84 / 4])(subobj_27c);

    int32_t val = ext_006BC370(*slot_470);
    ext_0055F3D0(self, subobj_27c, val);
    ext_0055E180(self, slot_46c);

    if (vec.begin != nullptr) {
        for (RawStdString* it = vec.begin; it != vec.end; ++it) {
            str_dtor(it);
        }
        ext_006A5C5C(vec.begin);
    }
    vec.begin = nullptr;
    vec.end = nullptr;
    vec.cap = nullptr;

    ext_006D2160(&arr);
    return 0;
}

// [0x00562F80]
void __thiscall fn_00562F80(void* self, const void* arg0) {
    uint8_t* self_bytes = reinterpret_cast<uint8_t*>(self);

    uint8_t str_28[28];
    uint8_t str_44[28];
    uint8_t str_60[28];
    uint8_t str_a4[28];
    uint8_t exc_7c[40];
    uint8_t var_10[16];
    void* var_20[1];
    void* var_24 = nullptr;

    typedef void(__thiscall* str_ctor_cstr_t)(void*, uint32_t);
    typedef void(__thiscall* str_ctor_copy_t)(void*, uint32_t);
    typedef void(__thiscall* str_dtor_t)(void*);
    typedef const char*(__thiscall* str_c_str_t)(const void*);
    typedef void*(__cdecl* str_concat_t)(void*, void*, uint32_t);

    str_ctor_cstr_t str_ctor_cstr = reinterpret_cast<str_ctor_cstr_t>(mem_00924FE4);
    str_ctor_copy_t str_ctor_copy = reinterpret_cast<str_ctor_copy_t>(mem_00924FE0);
    str_dtor_t str_dtor = reinterpret_cast<str_dtor_t>(mem_00924FF4);
    str_c_str_t str_c_str = reinterpret_cast<str_c_str_t>(mem_00924FF0);
    str_concat_t str_concat = reinterpret_cast<str_concat_t>(mem_00924FD0);

    void* field_424 = *reinterpret_cast<void**>(self_bytes + 0x424);
    if (field_424 != nullptr) {
        str_ctor_cstr(str_28, 0x009589D4);
        typedef void(__thiscall* vfunc_0c_t)(void*, void*);
        uint32_t* vtbl = *reinterpret_cast<uint32_t**>(field_424);
        reinterpret_cast<vfunc_0c_t>(vtbl[0x0C / 4])(field_424, str_28);
        str_dtor(str_28);
    }

    uint8_t* field_414 = *reinterpret_cast<uint8_t**>(self_bytes + 0x414);
    {
        typedef void(__thiscall* vfunc_84_t)(void*);
        uint32_t* vtbl = *reinterpret_cast<uint32_t**>(field_414 + 4);
        reinterpret_cast<vfunc_84_t>(vtbl[0x84 / 4])(field_414 + 4);
    }

    str_ctor_copy(str_60, 0x00B392CC);
    const char* cstr = str_c_str(arg0);
    void* tmp_str = ext_00663B30(str_28, cstr);
    str_concat(str_44, tmp_str, 0x00B39614);
    str_dtor(str_28);

    field_414 = *reinterpret_cast<uint8_t**>(self_bytes + 0x414);
    {
        typedef void(__thiscall* vfunc_5c_t)(void*, void*);
        uint32_t* vtbl = *reinterpret_cast<uint32_t**>(field_414 + 4);
        reinterpret_cast<vfunc_5c_t>(vtbl[0x5C / 4])(field_414 + 4, str_60);
    }

    field_414 = *reinterpret_cast<uint8_t**>(self_bytes + 0x414);
    {
        typedef void(__thiscall* vfunc_60_t)(void*, void*);
        uint32_t* vtbl = *reinterpret_cast<uint32_t**>(field_414 + 4);
        reinterpret_cast<vfunc_60_t>(vtbl[0x60 / 4])(field_414 + 4, str_44);
    }

    mem_00B37F40 += 1;

    ext_00662120(*reinterpret_cast<void**>(self_bytes + 0x420));

    void* field_470 = self_bytes + 0x470;
    void* field_46c = self_bytes + 0x46C;
    ext_0055E490(self, field_46c, field_470, str_c_str(arg0));
    ext_0055F2C0(self, arg0);

    ext_006D2130(var_10, 0x10, 4);
    var_24 = var_20;
    ext_006BC970(*reinterpret_cast<void**>(field_470), var_10);

    int32_t idx = *reinterpret_cast<int32_t*>(self_bytes + 0xA4);
    void** arr = reinterpret_cast<void**>(var_20[0]);
    int32_t val = ext_006E7460(arr[idx]);
    ext_006BC800(*reinterpret_cast<void**>(field_470), val);

    uint8_t ok = ext_00562A80(self);
    ext_0055E180(self, field_46c);
    if (!ok) {
        str_ctor_cstr(str_a4, 0x009589B8);
        ext_00403560(exc_7c, str_a4);
        *reinterpret_cast<uint32_t*>(exc_7c) = 0x0095879C;
        ext_006A6DD2(exc_7c, 0x009FA84C);
    }

    ext_006D2160(var_10);
    str_dtor(str_44);
    str_dtor(str_60);
}
