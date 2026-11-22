// Lifted C++ translation unit: lifted/classes/OBJIO.cpp
#include "lift_compat.h"
// sub_00640390: thiscall(ecx=object, key, flags) -> resolved pointer (eax)
extern "C" void* ext_00640390(void* object, const char* key, uint32_t flags);
// NMFileIO::vfunc_3: thiscall(ecx=this, arg) (stdcall-style, callee cleans stack)
extern "C" void ext_00553720(void* self, void* arg);
// String constant pushed at 0x92FE24
extern "C" const char mem_0092FE24[];

// [0x005731A0] OBJIO::vfunc_3 (37 bytes)
// @name OBJIO::vfunc_3
// @class OBJIO
// @summary Resolves a pointer from the argument object via sub_00640390 using the constant key at 0x92FE24, forwards it to NMFileIO::vfunc_3 on this, and returns the argument.
void* fn_005731A0(void* self, void* arg) {
    void* resolved = ext_00640390(arg, mem_0092FE24, 0);
    ext_00553720(self, resolved);
    return arg;
}

// [0x005746E0]
// @name OBJIO::vfunc_12
// @class OBJIO
// @summary Loads an OBJ file into a new scene object, applies scale/orientation, and registers it.
// @field OBJIO +0x5c uint8_t field_0x5c
// @field OBJIO +0x70 uint8_t field_0x70
// @field OBJIO +0x3d0 uint32_t field_0x3d0
// @field OBJIO +0x420 uint32_t field_0x420

extern "C" uint32_t ext_00403560(uint32_t, uint32_t);
extern "C" uint32_t ext_00435D00(uint32_t, uint32_t);
extern "C" float ext_00554D40(uint32_t, float);
extern "C" void ext_00573550(uint32_t, uint32_t, uint32_t);
extern "C" uint8_t ext_00573EB0(uint32_t, uint32_t, uint32_t);
extern "C" void ext_00587920(uint32_t, uint32_t, uint32_t);
extern "C" uint32_t ext_005B11D0(uint32_t, uint32_t);
extern "C" void ext_005B18E0(uint32_t, uint32_t);
extern "C" void ext_005B5A70(uint32_t, uint32_t);
extern "C" uint32_t ext_006201B0(uint32_t);
extern "C" void ext_0067E650(uint32_t);
extern "C" uint32_t ext_006A5C62(uint32_t);
extern "C" void ext_006A6DD2(uint32_t, uint32_t);

extern uint32_t mem_00924E90;
extern uint32_t mem_00924E98;
extern uint32_t mem_00924ECC;
extern uint32_t mem_00924FA0;
extern uint32_t mem_00924FCC;
extern uint32_t mem_00924FE4;
extern uint32_t mem_00924FF0;
extern uint32_t mem_00924FF4;
extern uint32_t mem_009250C4;
extern uint32_t mem_009250C8;
extern uint32_t mem_009250CC;
extern uint32_t mem_009250DC;
extern float mem_00957768;

extern "C" void fn_005746E0(uint32_t this_ptr, uint32_t arg0) {
    uint8_t ifs_buf[0x100];
    uint32_t ifs = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(ifs_buf));

    using c_str_fn = const char* (__thiscall*)(uint32_t);
    const char* path = reinterpret_cast<c_str_fn>(static_cast<uintptr_t>(mem_00924FF0))(arg0);

    using ifstream_ctor_fn = void (__thiscall*)(uint32_t, const char*, uint32_t, uint32_t, uint32_t);
    reinterpret_cast<ifstream_ctor_fn>(static_cast<uintptr_t>(mem_009250C4))(ifs, path, 1, 0x40, 1);

    uint32_t vbptr = *reinterpret_cast<uint32_t*>(ifs_buf);
    uint32_t ios_off = *reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(vbptr + 4));
    using ios_bool_fn = uint32_t (__thiscall*)(uint32_t);
    uint32_t is_open = reinterpret_cast<ios_bool_fn>(static_cast<uintptr_t>(mem_009250DC))(ifs + ios_off);

    using str_ctor_fn = void (__thiscall*)(uint32_t, const char*);
    using str_dtor_fn = void (__thiscall*)(uint32_t);
    using str_concat_pchar_str_fn = uint32_t (__cdecl*)(uint32_t, uint32_t, uint32_t);
    using str_concat_str_pchar_fn = uint32_t (__cdecl*)(uint32_t, uint32_t, uint32_t);

    if (is_open == 0) {
        uint8_t tmp_str[0x20];
        uint8_t msg_str[0x20];
        uint8_t exc_buf[0x24];
        uint32_t tmp_ptr = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(tmp_str));
        uint32_t msg_ptr = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(msg_str));
        uint32_t exc_ptr = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(exc_buf));

        uint32_t res = reinterpret_cast<str_concat_pchar_str_fn>(static_cast<uintptr_t>(mem_00924FCC))(tmp_ptr, 0x00959848, arg0);
        reinterpret_cast<str_concat_str_pchar_fn>(static_cast<uintptr_t>(mem_00924ECC))(msg_ptr, res, 0x00941F08);
        reinterpret_cast<str_dtor_fn>(static_cast<uintptr_t>(mem_00924FF4))(tmp_ptr);
        ext_00403560(exc_ptr, msg_ptr);
        *reinterpret_cast<uint32_t*>(exc_buf) = 0x009570DC;
        ext_006A6DD2(exc_ptr, 0x009F8908);
        return;
    }

    uint32_t os = ext_00435D00(mem_00924FA0, 0x009598EC);
    using ostream_manip_fn = uint32_t (__thiscall*)(uint32_t, uint32_t);
    reinterpret_cast<ostream_manip_fn>(static_cast<uintptr_t>(mem_00924E98))(os, mem_00924E90);

    float scale = ext_00554D40(this_ptr + 0x5C, 1.0f);

    uint32_t raw_obj = ext_006A5C62(0x1A0);
    uint32_t obj = (raw_obj != 0) ? ext_006201B0(raw_obj) : 0;

    ext_00573550(this_ptr, obj, arg0);

    uint32_t vtable = *reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(obj));
    using get_sub_fn = uint32_t (__thiscall*)(uint32_t);
    uint32_t sub = reinterpret_cast<get_sub_fn>(static_cast<uintptr_t>(*reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(vtable + 0xD8))))(obj);

    uint8_t str_buf[0x20];
    uint32_t str_ptr = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(str_buf));

    reinterpret_cast<str_ctor_fn>(static_cast<uintptr_t>(mem_00924FE4))(str_ptr, reinterpret_cast<const char*>(static_cast<uintptr_t>(0x009598E4)));
    ext_005B5A70(sub, str_ptr);
    reinterpret_cast<str_dtor_fn>(static_cast<uintptr_t>(mem_00924FF4))(str_ptr);

    *reinterpret_cast<float*>(static_cast<uintptr_t>(ext_005B11D0(sub, 2))) = scale;
    *reinterpret_cast<float*>(static_cast<uintptr_t>(ext_005B11D0(sub, 1))) = scale;
    *reinterpret_cast<float*>(static_cast<uintptr_t>(ext_005B11D0(sub, 0))) = scale;

    reinterpret_cast<str_ctor_fn>(static_cast<uintptr_t>(mem_00924FE4))(str_ptr, reinterpret_cast<const char*>(static_cast<uintptr_t>(0x00934B0C)));
    ext_005B18E0(sub, str_ptr);
    reinterpret_cast<str_dtor_fn>(static_cast<uintptr_t>(mem_00924FF4))(str_ptr);

    uint8_t ok = ext_00573EB0(this_ptr, sub, ifs);
    using ifstream_dtor_fn = void (__thiscall*)(uint32_t);
    using ifstream_close_fn = void (__thiscall*)(uint32_t);
    reinterpret_cast<ifstream_close_fn>(static_cast<uintptr_t>(mem_009250C8))(ifs);

    if (ok == 0) {
        uint8_t tmp_str[0x20];
        uint8_t msg_str[0x20];
        uint8_t exc_buf[0x24];
        uint32_t tmp_ptr = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(tmp_str));
        uint32_t msg_ptr = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(msg_str));
        uint32_t exc_ptr = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(exc_buf));

        uint32_t res = reinterpret_cast<str_concat_pchar_str_fn>(static_cast<uintptr_t>(mem_00924FCC))(tmp_ptr, 0x00959898, arg0);
        reinterpret_cast<str_concat_str_pchar_fn>(static_cast<uintptr_t>(mem_00924ECC))(msg_ptr, res, 0x00941F08);
        reinterpret_cast<str_dtor_fn>(static_cast<uintptr_t>(mem_00924FF4))(tmp_ptr);
        ext_00403560(exc_ptr, msg_ptr);
        *reinterpret_cast<uint32_t*>(exc_buf) = 0x009570DC;
        ext_006A6DD2(exc_ptr, 0x009F8908);
        return;
    }

    if (*reinterpret_cast<uint8_t*>(static_cast<uintptr_t>(this_ptr + 0x70)) == 0) {
        uint32_t sub_vtable = *reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(obj + 4));
        using rot_fn = uint32_t (__thiscall*)(uint32_t, uint32_t, float);
        uint32_t rot_ptr = *reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(sub_vtable + 0xC));
        uint32_t res = reinterpret_cast<rot_fn>(static_cast<uintptr_t>(rot_ptr))(
            obj + 4,
            *reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(this_ptr + 0x420)),
            mem_00957768
        );
        ext_0067E650(res);
    }

    ext_00587920(*reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(this_ptr + 0x3D0)), obj, 1);

    reinterpret_cast<ifstream_dtor_fn>(static_cast<uintptr_t>(mem_009250CC))(ifs);
}
