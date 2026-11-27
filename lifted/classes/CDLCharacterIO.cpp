// Lifted C++ translation unit: lifted/classes/CDLCharacterIO.cpp
#include "lift_compat.h"
extern "C" void* ext_00640390(void* object, const char* key, uint32_t flags);
extern "C" void ext_00553720(void* self, void* arg);
extern "C" const char mem_0092FE0C[];
#include <fstream>
#include <iostream>
#include <stdexcept>
#include <string>

#include <iostream>
#include <stdexcept>
#include <string>
// @summary Auto-lifted identical-shape clone of 0x005731A0 (OBJIO::vfunc_3).
void* fn_00570350(void* self, void* arg) {
    void* resolved = ext_00640390(arg, mem_0092FE0C, 0);
    ext_00553720(self, resolved);
    return arg;
}
#include <cstdint>

// [0x00571B90]
namespace lift_00571B90 {
// @name CDLCharacterIO::vfunc_10
// @class CDLCharacterIO
// @summary Open a character file, initialize progress/logging, parse sections, and throw on failure.
// @field CDLCharacterIO +0x414 void* field_0x414
// @field CDLCharacterIO +0x424 void* field_0x424

void* ext_00403560(void* self, const void* src);
void* ext_00435D00(void* stream, const char* str);
void ext_00553640(void* self);
uint32_t ext_005705E0(void* self, const void* filename);
bool ext_00570790(void* self, void* ifs);
bool ext_00571970(void* self, void* ifs);
bool ext_005B65D0(void* self, void* ifs);
void ext_006A6DD2(void);
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

void fn_00571B90(void* self, const std::string* filename) {
    (void)mem_00924E90;
    (void)mem_00924E98;
    (void)mem_00924ECC;
    (void)mem_00924FA0;
    (void)mem_00924FCC;
    (void)mem_00924FE4;
    (void)mem_00924FF0;
    (void)mem_00924FF4;
    (void)mem_009250C4;
    (void)mem_009250C8;
    (void)mem_009250CC;
    (void)mem_009250DC;
    void* obj414 = lift_field<void*>(self, 0x414);
    void* sub = static_cast<char*>(obj414) + 4;
    auto** sub_vtbl = *reinterpret_cast<void***>(sub);
    reinterpret_cast<void(__thiscall*)(void*)>(sub_vtbl[0x84 / 4])(sub);

    std::ifstream ifs(filename->c_str(), std::ios::in);
    if (!ifs) {
        std::string msg = std::string(reinterpret_cast<const char*>(0x959054)) + *filename +
                          reinterpret_cast<const char*>(0x941F08);
        uint8_t exc[0x28]{};
        ext_00403560(exc, &msg);
        *reinterpret_cast<uint32_t*>(exc) = 0x9570DC;
        ext_006A6DD2();
        return;
    }

    void* obj424 = lift_field<void*>(self, 0x424);
    if (obj424 != nullptr) {
        uint32_t val = ext_005705E0(self, filename);
        auto** vtbl424 = *reinterpret_cast<void***>(obj424);
        reinterpret_cast<void(__thiscall*)(void*, uint32_t, uint32_t)>(vtbl424[2])(obj424, 0, val);

        std::string status(reinterpret_cast<const char*>(0x9596B4));
        vtbl424 = *reinterpret_cast<void***>(obj424);
        reinterpret_cast<void(__thiscall*)(void*, const std::string*)>(vtbl424[3])(obj424, &status);
    }

    auto* out = static_cast<std::ostream*>(ext_00435D00(&std::cout, reinterpret_cast<const char*>(0x959698)));
    *out << std::endl;

    if (ext_00570790(self, &ifs) && ext_005B65D0(self, &ifs) && ext_00571970(self, &ifs)) {
        ifs.close();
        ext_00553640(self);
        return;
    }

    ifs.close();
    std::string msg = std::string(reinterpret_cast<const char*>(0x959648)) + *filename +
                      reinterpret_cast<const char*>(0x941F08);
    uint8_t exc[0x28]{};
    ext_00403560(exc, &msg);
    *reinterpret_cast<uint32_t*>(exc) = 0x9570DC;
    ext_006A6DD2();
}
} // namespace lift_00571B90
