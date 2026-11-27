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
