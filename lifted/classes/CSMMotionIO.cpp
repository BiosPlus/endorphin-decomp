// Lifted C++ translation unit: lifted/classes/CSMMotionIO.cpp
#include "lift_compat.h"
extern "C" void* ext_00640390(void* object, const char* key, uint32_t flags);
extern "C" void ext_00553720(void* self, void* arg);
extern "C" const char mem_0092A0D4[];
#include <cstddef>
#include <cstdint>
#include <fstream>
#include <string>
#include <vector>

#include <cstdint>
#include <fstream>
#include <string>
#include <vector>
void* fn_00571DF0(void* self, void* arg) {
    void* resolved = ext_00640390(arg, mem_0092A0D4, 0);
    ext_00553720(self, resolved);
    return arg;
}
#include <iostream>

// [0x005722F0]
namespace lift_005722F0 {
// @name CSMMotionIO::vfunc_13
// @class CSMMotionIO
// @summary Export motion data to a file using an output file stream and optional progress callback.
// @field CSMMotionIO +0x16C int32_t field_0x16c
// @field CSMMotionIO +0x170 int32_t field_0x170
// @field CSMMotionIO +0x414 void* field_0x414
// @field CSMMotionIO +0x420 void* field_0x420
// @field CSMMotionIO +0x424 void* field_0x424


    uint8_t __thiscall ext_00553760(void* self);
    void* __cdecl ext_00435D00(void* ostream, const char* str);
    void __cdecl ext_00663DB0(const char* path);
    void* __thiscall ext_00403560(void* self, const void* src);
    void __stdcall ext_006A6DD2(void* pExceptionObject, void* pThrowInfo);
    void __thiscall ext_00571E80(void* self, void* ofs, int32_t frame);
    void __thiscall ext_00661F70(void* subobj, int32_t index);
    void __thiscall ext_005720D0(void* self, void* ofs, int32_t frame);
    uint8_t __thiscall ext_00661E80(void* subobj);

    extern uint32_t mem_00924E90;
    extern uint32_t mem_00924FA0;
    extern uint32_t mem_00924E98;
    extern uint32_t mem_00924FF0;
    extern uint32_t mem_009250B4;
    extern uint32_t mem_009250B8;
    extern uint32_t mem_009250C0;
    extern uint32_t mem_00924FE4;
    extern uint32_t mem_00924FD0;
    extern uint32_t mem_00924FF4;
    extern uint32_t mem_00925134;
    extern uint32_t mem_009250E0;
    extern uint32_t mem_00925004;

void __thiscall fn_005722F0(void* self, const void* filename_str) {
    (void)mem_00924E90;
    (void)mem_00924FA0;
    (void)mem_00924E98;
    (void)mem_00924FF0;
    (void)mem_009250B4;
    (void)mem_009250B8;
    (void)mem_009250C0;
    (void)mem_00924FE4;
    (void)mem_00924FD0;
    (void)mem_00924FF4;
    (void)mem_00925134;
    (void)mem_009250E0;
    (void)mem_00925004;

    void* field_0x414 = lift_field<void*>(self, 0x414);
    if (lift_field<int32_t>(field_0x414, 0x5E8) == 0) {
        ext_00435D00(&std::cout, reinterpret_cast<const char*>(0x009597B0));
        std::cout << std::endl;
        return;
    }

    if (!ext_00553760(self)) {
        ext_00435D00(&std::cout, reinterpret_cast<const char*>(0x0095978C));
        std::cout << std::endl;
        return;
    }

    const std::string* filename = reinterpret_cast<const std::string*>(filename_str);
    ext_00663DB0(filename->c_str());

    std::ofstream ofs;
    ofs.open(filename->c_str(), std::ios::out | std::ios::trunc);
    if (!ofs) {
        std::string msg = std::string(reinterpret_cast<const char*>(0x0095975C))
                        + *filename
                        + std::string(reinterpret_cast<const char*>(0x0095977C));
        uint8_t exc_buf[64]{};
        ext_00403560(exc_buf, &msg);
        lift_field<uint32_t>(exc_buf, 0x0) = 0x009570DC;
        ext_006A6DD2(exc_buf, reinterpret_cast<void*>(0x009F8908));
    }

    ext_00571E80(self, &ofs, 0);

    int32_t start_frame = lift_field<int32_t>(self, 0x16C);
    void* field_0x420 = lift_field<void*>(self, 0x420);
    ext_00661F70(field_0x420, start_frame + 1);

    void* progress = lift_field<void*>(self, 0x424);
    if (progress != nullptr) {
        std::string label(reinterpret_cast<const char*>(0x00959740));
        using SetLabelFn = void(__thiscall*)(void*, const std::string*);
        using SetRangeFn = void(__thiscall*)(void*, int32_t, int32_t);
        void** vtable = lift_field<void**>(progress, 0x0);
        reinterpret_cast<SetLabelFn>(vtable[3])(progress, &label);
        reinterpret_cast<SetRangeFn>(vtable[2])(progress, start_frame, lift_field<int32_t>(self, 0x170));
    }

    int32_t step = 0;
    do {
        step += 1;
        ext_005720D0(self, &ofs, step);

        progress = lift_field<void*>(self, 0x424);
        if (progress != nullptr) {
            using SetPosFn = void(__thiscall*)(void*, int32_t);
            void** vtable = lift_field<void**>(progress, 0x0);
            reinterpret_cast<SetPosFn>(vtable[1])(progress, step);
        }

        void* cursor_obj = lift_field<void*>(self, 0x420);
        void* header = lift_field<void*>(cursor_obj, 0x8);
        void* node = lift_field<void*>(cursor_obj, 0xC);
        if (header == nullptr || node == lift_field<void*>(header, 0x4)) {
            break;
        }
        if (lift_field<int32_t>(node, 0x8) >= lift_field<int32_t>(self, 0x170) + 1) {
            break;
        }
    } while (ext_00661E80(lift_field<void*>(self, 0x420)));

    ofs.close();
}
} // namespace lift_005722F0

// [0x00572CC0]
namespace lift_00572CC0 {
// @name CSMMotionIO::vfunc_11
// @class CSMMotionIO
// @summary Reads motion data from a file stream into a bone-name map and frame/joint arrays.
// @field CSMMotionIO +0x5c uint8_t[4] field_0x5c

void* __fastcall ext_00555470(void* self);
void __fastcall ext_00572B90(void* self, void* key, void* out);
void ext_006A5C5C(void* ptr);
void __fastcall ext_0040ECB0(void* self, const void* value);
void __fastcall ext_00554EB0(void* self, void* a, float x, float y, float z);
void __fastcall ext_00539FB0(void* self, void* vec3);
void __fastcall ext_004F15A0(void* self, void* a, void* b, void* c, void* d);
void* ext_00571E20(void);
void __fastcall ext_0041FF30(void* self, void* msg, int32_t val);
void ext_006A6DD2(void* exc, uint32_t throw_info);

extern uint32_t mem_00924FF0;
extern uint32_t mem_009250C4;
extern uint32_t mem_00924FE8;
extern uint32_t mem_00924FC8;
extern uint32_t mem_009250EC;
extern uint32_t mem_00924FC0;
extern uint32_t mem_009250D4;
extern uint32_t mem_009250DC;
extern uint32_t mem_00924FEC;
extern uint32_t mem_009250F0;
extern uint32_t mem_00924FF4;
extern uint32_t mem_009250CC;
extern uint32_t mem_00925134;

void __fastcall fn_00572CC0(void* self, void* arg0) {
    uint8_t map_obj[20] = {};
    *(uint32_t*)(map_obj + 0) = 0x009597D0;
    void* head = ext_00555470(map_obj + 4);
    *(void**)(map_obj + 8) = head;
    *((uint8_t*)head + 0x39) = 1;
    *(void**)((uint8_t*)head + 4) = head;
    *(void**)head = head;
    *(void**)((uint8_t*)head + 8) = head;
    *(uint32_t*)(map_obj + 12) = 0;

    uint8_t vec_obj[16] = {};
    uint8_t ifstream_obj[144] = {};
    uint8_t token_str[28] = {};
    int32_t start_frame = 0;
    int32_t end_frame = 0;
    int32_t extra_int = 0;

    using c_str_fn = const char* (__fastcall*)(void*);
    using ifstream_ctor_fn = void (__fastcall*)(void*, const char*, int32_t, int32_t);
    using str_ctor_fn = void (__fastcall*)(void*);
    using str_ne_fn = bool (__cdecl*)(const void*, const char*);
    using str_eq_fn = bool (__cdecl*)(const void*, const char*);
    using istream_read_str_fn = void* (__cdecl*)(void*, void*);
    using istream_read_int_fn = void* (__fastcall*)(void*, int32_t*);
    using istream_read_float_fn = void* (__fastcall*)(void*, float*);
    using ios_bool_fn = void* (__fastcall*)(void*);
    using str_empty_fn = bool (__fastcall*)(const void*);
    using str_dtor_fn = void (__fastcall*)(void*);
    using ifstream_dtor_fn = void (__fastcall*)(void*);
    using invalid_param_fn = void (__cdecl*)(void);

    const char* filename = ((c_str_fn)(uintptr_t)mem_00924FF0)(arg0);
    ((ifstream_ctor_fn)(uintptr_t)mem_009250C4)(ifstream_obj, filename, 1, 0x40);
    ((str_ctor_fn)(uintptr_t)mem_00924FE8)(token_str);

    auto str_ne = (str_ne_fn)(uintptr_t)mem_00924FC8;
    auto read_str = (istream_read_str_fn)(uintptr_t)mem_009250EC;
    auto str_eq = (str_eq_fn)(uintptr_t)mem_00924FC0;
    auto read_int = (istream_read_int_fn)(uintptr_t)mem_009250D4;
    auto ios_ok = (ios_bool_fn)(uintptr_t)mem_009250DC;
    auto str_empty = (str_empty_fn)(uintptr_t)mem_00924FEC;
    auto read_float = (istream_read_float_fn)(uintptr_t)mem_009250F0;
    auto invalid_param = (invalid_param_fn)(uintptr_t)mem_00925134;

    while (str_ne(token_str, (const char*)0x009597FC)) {
        read_str(ifstream_obj, token_str);
        if (str_eq(token_str, (const char*)0x009597F0)) {
            read_int(ifstream_obj, &start_frame);
        } else if (str_eq(token_str, (const char*)0x009597E4)) {
            read_int(ifstream_obj, &end_frame);
        } else if (str_eq(token_str, (const char*)0x009597DC)) {
            read_int(ifstream_obj, &extra_int);
        } else if (str_eq(token_str, (const char*)0x009597D4)) {
            void* strm = read_str(ifstream_obj, token_str);
            uint32_t vtbl = *(uint32_t*)strm;
            uint32_t ios_off = *(uint32_t*)(vtbl + 4);
            if (ios_ok((uint8_t*)strm + ios_off)) {
                while (str_ne(token_str, (const char*)0x009597FC)) {
                    if (!str_empty(token_str)) {
                        uint8_t tmp[16] = {};
                        ext_00572B90(map_obj + 4, token_str, tmp);
                        void* tmp_ptr = *(void**)(tmp + 4);
                        if (tmp_ptr != nullptr) {
                            ext_006A5C5C(tmp_ptr);
                        }
                        ext_0040ECB0(vec_obj, token_str);
                    }
                    void* s2 = read_str(ifstream_obj, token_str);
                    uint32_t vtbl2 = *(uint32_t*)s2;
                    uint32_t ios_off2 = *(uint32_t*)(vtbl2 + 4);
                    if (!ios_ok((uint8_t*)s2 + ios_off2)) {
                        break;
                    }
                }
            }
        }
    }

    float vec3[3] = {0.0f, 0.0f, 0.0f};
    int32_t frame_idx = start_frame;
    while (frame_idx <= end_frame) {
        int32_t frame_num = 0;
        read_int(ifstream_obj, &frame_num);
        uint8_t* cur = *(uint8_t**)(vec_obj + 4);
        uint8_t* end = *(uint8_t**)(vec_obj + 8);
        if (cur > end) {
            invalid_param();
            end = *(uint8_t**)(vec_obj + 8);
        }
        while (cur != end) {
            for (int i = 0; i < 3; ++i) {
                read_float(ifstream_obj, &vec3[i]);
            }
            ext_00554EB0((uint8_t*)self + 0x5C, &frame_num, vec3[0], vec3[1], vec3[2]);
            if (cur >= *(uint8_t**)(vec_obj + 8)) {
                invalid_param();
            }
            using map_lookup_fn = void* (__fastcall*)(void*, uint8_t*);
            uint32_t map_vtbl = *(uint32_t*)map_obj;
            void* node = ((map_lookup_fn)(uintptr_t)(*(uint32_t*)map_vtbl))(map_obj, cur);
            if (!node) {
                void* msg = ext_00571E20();
                uint8_t exc[64] = {};
                ext_0041FF30(exc, msg, (int32_t)(uintptr_t)cur);
                ext_006A6DD2(exc, 0x009D3748);
            }
            ext_00539FB0(node, vec3);
            if (cur >= *(uint8_t**)(vec_obj + 8)) {
                invalid_param();
            }
            cur += 0x1C;
            end = *(uint8_t**)(vec_obj + 8);
        }
        ++frame_idx;
    }

    ((str_dtor_fn)(uintptr_t)mem_00924FF4)(token_str);
    ((ifstream_dtor_fn)(uintptr_t)mem_009250CC)(ifstream_obj);

    uint8_t* vec_begin = *(uint8_t**)(vec_obj + 4);
    if (vec_begin != nullptr) {
        uint8_t* vec_end = *(uint8_t**)(vec_obj + 8);
        for (uint8_t* p = vec_begin; p != vec_end; p += 0x1C) {
            ((str_dtor_fn)(uintptr_t)mem_00924FF4)(p);
        }
        ext_006A5C5C(vec_begin);
    }

    void* map_head = *(void**)(map_obj + 8);
    void* map_root = *(void**)map_head;
    uint8_t dummy_out[16] = {};
    uint8_t cleanup_map[20] = {};
    *(uint32_t*)(cleanup_map + 0) = 0x009597D0;
    ext_004F15A0(map_obj, dummy_out, cleanup_map, map_root, map_head);
    ext_006A5C5C(*(void**)(map_obj + 8));
}
} // namespace lift_00572CC0
