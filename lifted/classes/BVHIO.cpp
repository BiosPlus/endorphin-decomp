// Lifted C++ translation unit: lifted/classes/BVHIO.cpp
#include "lift_compat.h"
#include <fstream>
#include <string>

#include <string>
// @name BVHIO::vfunc_3
// @class BVHIO
// @summary Formats or resolves a path/string using sub_00640390 and delegates to NMFileIO::vfunc_3, returning arg0.

#include "lift_compat.h"

extern uint32_t mem_00A9ED4C;
extern uint32_t __thiscall ext_00640390(void* self, uint32_t a1, uint32_t a2);
extern uint32_t __thiscall ext_00553720(void* self, uint32_t a1);

void* __thiscall fn_0056DA30(void* self, void* arg0) {
    uint32_t val = ext_00640390(arg0, mem_00A9ED4C, 0);
    ext_00553720(self, val);
    return arg0;
}
#include <stdexcept>
#include <vector>

#include <vector>
// @name BVHIO::exportBVH
// @class BVHIO
// @summary Exports hierarchy and motion data to a BVH file.
// @field BVHIO +0x16c int32_t startFrame
// @field BVHIO +0x170 int32_t endFrame
// @field BVHIO +0x414 uint32_t skeletonData
// @field BVHIO +0x420 uint32_t timeline
// @field BVHIO +0x424 uint32_t progressCallback

#include "lift_compat.h"
#include <cstdint>
#include <fstream>
#include <ostream>
#include <string>

extern void __thiscall ext_00662120(uint32_t self);
extern void __thiscall ext_00661F70(uint32_t self, int32_t frame);
extern std::ostream& __cdecl ext_00435D00(std::ostream* os, const char* str);
extern void __thiscall ext_0056DE10(void* self, uint32_t node, std::ostream* os, std::string prefix);
extern uint8_t __thiscall ext_00553760(void* self);
extern float __thiscall ext_00661A40(uint32_t self);
extern void __thiscall ext_0056E8F0(void* self, uint32_t node, std::ostream* os);
extern uint8_t __thiscall ext_00661E80(uint32_t self);
extern void __thiscall ext_00403560(void* ex, std::string* msg);
extern void __cdecl ext_006A6DD2(void* ex, uint32_t throwInfo);

void __thiscall fn_0056EAC0(void* self, const std::string* filename) {
    uint8_t* base = static_cast<uint8_t*>(self);
    std::ofstream out(filename->c_str(), std::ios::out);
    if (!out) {
        std::string msg = std::string(reinterpret_cast<const char*>(0x009592E0)) + *filename +
                          reinterpret_cast<const char*>(0x00958ECC);
        uint8_t ex[36] = {};
        ext_00403560(ex, &msg);
        *reinterpret_cast<uint32_t*>(ex) = 0x009570DC;
        ext_006A6DD2(ex, 0x009F8908);
        return;
    }

    uint32_t timeline = *reinterpret_cast<uint32_t*>(base + 0x420);
    ext_00662120(timeline);
    timeline = *reinterpret_cast<uint32_t*>(base + 0x420);
    ext_00661F70(timeline, 1);

    uint32_t progress = *reinterpret_cast<uint32_t*>(base + 0x424);
    if (progress != 0) {
        std::string status(reinterpret_cast<const char*>(0x00959384));
        uint32_t* vtable = *reinterpret_cast<uint32_t**>(progress);
        auto fn = reinterpret_cast<void(__thiscall*)(uint32_t, std::string*)>(vtable[3]);
        fn(progress, &status);
    }

    ext_00435D00(&out, reinterpret_cast<const char*>(0x00959378)) << std::endl;

    uint32_t rootNode = *reinterpret_cast<uint32_t*>(base + 0x414) + 0x160;
    ext_00435D00(&out, reinterpret_cast<const char*>(0x00959370));
    ext_0056DE10(self, rootNode, &out, std::string());

    if (ext_00553760(self) != 0) {
        ext_00435D00(&out, reinterpret_cast<const char*>(0x009592AC)) << std::endl;

        int32_t startFrame = *reinterpret_cast<int32_t*>(base + 0x16C);
        int32_t endFrame = *reinterpret_cast<int32_t*>(base + 0x170);
        int32_t frameCount = endFrame - startFrame + 1;
        ext_00435D00(&out, reinterpret_cast<const char*>(0x00959364)) << frameCount << std::endl;

        float frameTime = ext_00661A40(*reinterpret_cast<uint32_t*>(base + 0x420));
        ext_00435D00(&out, reinterpret_cast<const char*>(0x00959354)) << frameTime << std::endl;

        progress = *reinterpret_cast<uint32_t*>(base + 0x424);
        if (progress != 0) {
            uint32_t* vtable = *reinterpret_cast<uint32_t**>(progress);
            auto setRange = reinterpret_cast<void(__thiscall*)(uint32_t, int32_t, int32_t)>(vtable[2]);
            setRange(progress, startFrame, endFrame);

            std::string status(reinterpret_cast<const char*>(0x00959338));
            auto setStatus = reinterpret_cast<void(__thiscall*)(uint32_t, std::string*)>(vtable[3]);
            setStatus(progress, &status);
        }

        ext_00661F70(*reinterpret_cast<uint32_t*>(base + 0x420), startFrame + 1);

        do {
            progress = *reinterpret_cast<uint32_t*>(base + 0x424);
            if (progress != 0) {
                uint32_t tl = *reinterpret_cast<uint32_t*>(base + 0x420);
                uint32_t iter = *reinterpret_cast<uint32_t*>(tl + 0xC);
                int32_t curFrame = *reinterpret_cast<int32_t*>(iter + 0x8);
                uint32_t* vtable = *reinterpret_cast<uint32_t**>(progress);
                auto setPos = reinterpret_cast<void(__thiscall*)(uint32_t, int32_t)>(vtable[1]);
                setPos(progress, curFrame);
            }

            ext_0056E8F0(self, rootNode, &out);
            out << std::endl;

            uint32_t tl = *reinterpret_cast<uint32_t*>(base + 0x420);
            uint32_t iter = *reinterpret_cast<uint32_t*>(tl + 0xC);
            int32_t curFrame = *reinterpret_cast<int32_t*>(iter + 0x8);
            int32_t limit = *reinterpret_cast<int32_t*>(base + 0x170) + 1;
            if (curFrame >= limit) {
                break;
            }
        } while (ext_00661E80(*reinterpret_cast<uint32_t*>(base + 0x420)) != 0);
    }

    out.close();
}

// [0x0056E630] BVHIO::vfunc_11 (689 bytes)
namespace lift_0056E630 {
// Callee prototypes (thiscall on MSVC; plain member-style on other compilers).
extern int32_t __thiscall ext_0055D0F0(void* self);
extern void __thiscall ext_0056E1C0(void* self, void* elem, std::istream& in, int32_t t);
extern void __thiscall ext_00661A10(void* self, float value);
extern void __thiscall ext_005576F0(void* self);

namespace {

// Virtual slot dispatch on a polymorphic sub-object stored at a field.
template <typename Fn>
Fn vtable_slot(void* obj, size_t slot) {
    void** vt = *reinterpret_cast<void***>(obj);
    return reinterpret_cast<Fn>(vt[slot]);
}

using VtableIntInt = void(__thiscall*)(void*, int32_t, int32_t);  // slot 2
using VtableInt = void(__thiscall*)(void*, int32_t);              // slot 1
using VtableString = void(__thiscall*)(void*, const std::string*); // slot 3

// Loads a 32-bit pointer-sized field and reinterprets it as an object address.
void* field_object(uint8_t* base, ptrdiff_t offset) {
    return reinterpret_cast<void*>(static_cast<uintptr_t>(lift_field<uint32_t>(base, offset)));
}

}  // namespace

// @name BVHIO::vfunc_11
// @class BVHIO
// @summary Parses a BVH motion header from a file (frame count, frame time), notifies the progress object, reads per-frame values through sub_0056E1C0, then sets the timeline frame rate from 1/frameTime.
// @field BVHIO +0x108 int32_t field_0x108
// @field BVHIO +0x10c int32_t field_0x10c
// @field BVHIO +0x110 int32_t field_0x110
// @field BVHIO +0x114 uint8_t field_0x114
// @field BVHIO +0x420 uint32_t timeline
// @field BVHIO +0x424 uint32_t progressCallback
// @field BVHIO +0x42c uint8_t field_0x42c
// @field BVHIO +0x46c uint8_t field_0x46c
// @field BVHIO +0x470 uint32_t field_0x470
// @field BVHIO +0x474 uint32_t field_0x474
void __thiscall fn_0056E630(void* self, const std::string* filename) {
    uint8_t* base = static_cast<uint8_t*>(self);
    std::ifstream in(filename->c_str(), std::ios::in);
    std::string token;

    // Skip tokens until the frame-count tag (0x009592D8).
    while (in >> token) {
        if (token == reinterpret_cast<const char*>(0x009592D8)) {
            break;
        }
    }

    int32_t frames = 0;
    in >> frames;

    void* progress = field_object(base, 0x424);
    if (progress != nullptr) {
        if (lift_field<uint8_t>(base, 0x114) != 0) {
            int32_t total = (lift_field<int32_t>(base, 0x110) + 3) * frames +
                            (frames - 1) * lift_field<int32_t>(base, 0x10c) +
                            lift_field<int32_t>(base, 0x108);
            vtable_slot<VtableIntInt>(progress, 2)(progress, 0, total);
        } else {
            vtable_slot<VtableIntInt>(progress, 2)(progress, 0, frames * 3);
        }
        std::string tag(reinterpret_cast<const char*>(0x009592BC));
        vtable_slot<VtableString>(progress, 3)(progress, &tag);
    }

    // Skip tokens until the frame-time tag (0x009592B4), then read frame time.
    while (in >> token) {
        if (token == reinterpret_cast<const char*>(0x009592B4)) {
            break;
        }
    }

    float frameTime = 0.0f;
    in >> frameTime;

    if (frames - 1 >= 0) {
        int32_t t = 0;
        do {
            t = ext_0055D0F0(base + 0x42c);

            uintptr_t cursor = lift_field<uint32_t>(base, 0x470);
            uintptr_t end = lift_field<uint32_t>(base, 0x474);
            for (; cursor != end; cursor += 4) {
                void* elem = *reinterpret_cast<void**>(cursor);
                ext_0056E1C0(self, elem, in, t);
            }

            void* prog = field_object(base, 0x424);
            if (prog != nullptr) {
                vtable_slot<VtableInt>(prog, 1)(prog, t);
            }
        } while (t <= frames - 1);
    }

    float fps = 1.0f / frameTime;
    void* timeline = field_object(base, 0x420);
    ext_00661A10(timeline, fps);
    ext_005576F0(self);
}
} // namespace lift_0056E630

// [0x0056FD30] BVHIO::vfunc_10 (953 bytes)
namespace lift_0056FD30 {
// Callees (original addresses kept; signatures inferred from call sites).
extern void ext_0055D600(void* self);                    // guard acquire on this+0x42c
extern void ext_0055D2C0(void* self, uint32_t skeleton); // guard release on this+0x42c
extern void ext_004F0FB0(void* self, uint32_t value);    // list-like insert on this+0x480
extern bool ext_0056FAA0(void* self, void* ifs);         // validate/parse opened stream
extern void ext_005A3610(void* self);                    // skeleton cleanup
extern void ext_005EED30(void* self, void* out);         // collect joint pointers into vector
extern void* ext_00663B30(void* out, const char* cstr);  // path helper, returns std::string*

// Data globals.
extern int mem_00B37F40; // load counter

// String constants (contents not recovered yet).
extern const std::string kStr_00B3B704;
extern const std::string kStr_00B3B934;
extern const std::string kStr_009593B8; // error prefix (open failure)
extern const std::string kStr_00959408; // error prefix (validation failure)
extern const std::string kStr_00941F08; // error suffix

namespace {

inline uint8_t* ptr_from(uint32_t v) {
    return reinterpret_cast<uint8_t*>(static_cast<uintptr_t>(v));
}

inline uint32_t addr_of(const void* p) {
    return static_cast<uint32_t>(reinterpret_cast<uintptr_t>(p));
}

// Virtual slot call on an object whose first dword is its vtable pointer.
inline void vcall0(void* obj, int slot) {
    void** vt = *static_cast<void***>(obj);
    reinterpret_cast<void (*)(void*)>(vt[slot])(obj);
}

inline void vcall1(void* obj, int slot, void* arg) {
    void** vt = *static_cast<void***>(obj);
    reinterpret_cast<void (*)(void*, void*)>(vt[slot])(obj, arg);
}

} // namespace

// @name BVHIO::vfunc_10
// @class BVHIO
// @summary Opens the BVH file at path, refreshes per-joint cached values on the skeleton, and throws std::runtime_error if the file cannot be opened or fails validation.
// @field BVHIO +0x414 uint32_t skeletonData
// @field BVHIO +0x42c uint32_t field_0x42c
// @field BVHIO +0x480 uint32_t field_0x480
// @field BVHIO +0x484 uint32_t field_0x484
// @field BVHIO +0x488 uint32_t field_0x488
void fn_0056FD30(void* self, const std::string& path) {
    uint8_t* base = static_cast<uint8_t*>(self);

    ext_0055D600(base + 0x42c);

    const uint32_t skelWord = lift_field<uint32_t>(self, 0x414);
    uint8_t* skel = ptr_from(skelWord);
    uint8_t* skelSub = skel + 4;
    vcall0(skelSub, 33); // +0x84

    std::string tmp70 = kStr_00B3B704;
    (void)tmp70;

    std::string tmp34;
    const std::string* resolved =
        static_cast<const std::string*>(ext_00663B30(&tmp34, path.c_str()));
    const std::string joined = *resolved + kStr_00B3B934;
    (void)joined;

    std::string tmp74;
    std::string tmp90;
    vcall1(skelSub, 23, &tmp74); // +0x5C
    vcall1(skelSub, 24, &tmp90); // +0x60

    mem_00B37F40 += 1;

    // Append an entry to the list-like container at +0x480, then reset its sentinel.
    const uint32_t listValue = lift_field<uint32_t>(ptr_from(lift_field<uint32_t>(self, 0x484)), 4);
    ext_004F0FB0(base + 0x480, listValue);

    uint8_t* head = ptr_from(lift_field<uint32_t>(self, 0x484));
    lift_field<uint32_t>(head, 4) = addr_of(head);
    lift_field<uint32_t>(self, 0x488) = 0;
    lift_field<uint32_t>(head, 0) = addr_of(head);
    lift_field<uint32_t>(head, 8) = addr_of(head);

    std::ifstream ifs(path.c_str(), std::ios::in);
    if (!ifs) {
        std::string msg = kStr_009593B8 + path + kStr_00941F08;
        throw std::runtime_error(msg);
    }

    if (!ext_0056FAA0(self, &ifs)) {
        ifs.close();
        std::string msg = kStr_00959408 + path + kStr_00941F08;
        throw std::runtime_error(msg);
    }

    std::vector<void*> joints;
    ext_005EED30(skel + 0x160, &joints);

    for (void* entry : joints) {
        if (lift_field<uint32_t>(entry, 0x228) != 0) {
            continue;
        }
        uint8_t* sub = ptr_from(lift_field<uint32_t>(entry, 0x190));
        lift_field<uint32_t>(entry, 0x228) = lift_field<uint32_t>(sub, 0x22c);
        lift_field<std::string>(entry, 0x198) = lift_field<std::string>(sub, 0x1b4);
    }

    ifs.close();
    ext_0055D2C0(base + 0x42c, skelWord);
    ext_005A3610(skel);
}
} // namespace lift_0056FD30
