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

// [0x00571B90] CDLCharacterIO::vfunc_10 (565 bytes)
namespace lift_00571B90 {
extern void ext_00553640(void* self);
extern void* ext_005705E0(void* self, const std::string* path);
extern bool ext_00570790(void* self, const std::string* path);
extern bool ext_00571970(void* self, const std::string* path);
extern bool ext_005B65D0(void* self, const std::string* out);

// @name CDLCharacterIO::LoadFromPath
// @class CDLCharacterIO
// @summary Opens the file named by the std::string argument, runs the load steps through the member/callee chain, and throws std::runtime_error on any failure.
// @field CDLCharacterIO +0x414 void* field_0x414
// @field CDLCharacterIO +0x424 void* field_0x424
void fn_00571B90(void* self, const std::string& path) {
    // Virtual call through sub-object at +0x414 (vtable slot 0x84, no args).
    void* sub = lift_field<void*>(self, 0x414);
    void* subObj = static_cast<uint8_t*>(sub) + 4;
    void* subVt = *reinterpret_cast<void**>(subObj);
    auto subFn = reinterpret_cast<void (*)(void*)>(lift_field<void*>(subVt, 0x84));
    subFn(subObj);

    // Open the file for reading (mode = ios::in).
    std::ifstream ifs(path.c_str(), std::ios::in);
    if (!ifs) {
        std::string msg = std::string("<literal 0x959054 not recovered>") + path;
        throw std::runtime_error(msg);
    }

    // Optional handler at +0x424.
    if (lift_field<void*>(self, 0x424) != nullptr) {
        void* arg = ext_005705E0(self, &path);
        void* obj = lift_field<void*>(self, 0x424);
        void* vt = *reinterpret_cast<void**>(obj);
        auto slot2 = reinterpret_cast<void (*)(void*, void*, int)>(lift_field<void*>(vt, 0x08));
        slot2(obj, arg, 0);

        std::string tag("<literal 0x9596b4 not recovered>");
        vt = *reinterpret_cast<void**>(obj);
        auto slot3 = reinterpret_cast<void (*)(void*, const std::string*)>(lift_field<void*>(vt, 0x0C));
        slot3(obj, &tag);
    }

    std::cout << "<literal 0x959698 not recovered>" << std::endl;

    // Validation steps; any failure throws.
    if (!ext_00570790(self, &path)) {
        std::string msg = std::string("<literal 0x959648 not recovered>") + path;
        throw std::runtime_error(msg);
    }
    if (!ext_005B65D0(self, &path)) {
        std::string msg = std::string("<literal 0x959648 not recovered>") + path;
        throw std::runtime_error(msg);
    }
    if (!ext_00571970(self, &path)) {
        std::string msg = std::string("<literal 0x959648 not recovered>") + path;
        throw std::runtime_error(msg);
    }

    // Success: finish the load.
    ext_00553640(self);
}
} // namespace lift_00571B90
