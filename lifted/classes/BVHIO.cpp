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
#include <cstddef>
#include <cstdlib>

#include <cstdlib>
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

// [0x0056EAC0]
namespace lift_0056EAC0 {
// @name BVHIO::vfunc_13
// @class BVHIO
// @summary Export skeleton hierarchy and motion frames to a BVH file.
// @field BVHIO +0x16C int32_t startFrame
// @field BVHIO +0x170 int32_t endFrame
// @field BVHIO +0x414 uint32_t skeletonData
// @field BVHIO +0x420 uint32_t timeline
// @field BVHIO +0x424 uint32_t progressCallback


void __thiscall ext_00662120(void* self);
void __thiscall ext_00661F70(void* self, int32_t arg1);
std::ostream& __cdecl ext_00435D00(std::ostream& os, const char* str);
void __thiscall ext_0056DE10(void* self, void* node, std::ostream* os, std::string prefix);
uint8_t __thiscall ext_00553760(void* self);
float __thiscall ext_00661A40(void* self);
void __thiscall ext_0056E8F0(void* self, void* node, std::ostream* os);
uint8_t __thiscall ext_00661E80(void* self);
void __thiscall ext_00403560(void* self, const void* src);
void __stdcall ext_006A6DD2(void* ex, void* throwInfo);

extern uint32_t mem_00924E5C;
extern uint32_t mem_00924E90;
extern uint32_t mem_00924E98;
extern uint32_t mem_00924ECC;
extern uint32_t mem_00924FCC;
extern uint32_t mem_00924FE4;
extern uint32_t mem_00924FE8;
extern uint32_t mem_00924FF0;
extern uint32_t mem_00924FF4;
extern uint32_t mem_00925004;
extern uint32_t mem_00925008;
extern uint32_t mem_00925010;
extern uint32_t mem_009250DC;
extern uint32_t mem_009250E0;
extern uint32_t mem_00925134;

void __thiscall fn_0056EAC0(void* self, const std::string* filename) {
    (void)mem_00924E5C;
    (void)mem_00924E90;
    (void)mem_00924E98;
    (void)mem_00924ECC;
    (void)mem_00924FCC;
    (void)mem_00924FE4;
    (void)mem_00924FE8;
    (void)mem_00924FF0;
    (void)mem_00924FF4;
    (void)mem_00925004;
    (void)mem_00925008;
    (void)mem_00925010;
    (void)mem_009250DC;
    (void)mem_009250E0;
    (void)mem_00925134;
    std::ofstream ofs(filename->c_str(), std::ios::out);
    if (!ofs) {
        std::string msg = std::string(reinterpret_cast<const char*>(0x009592E0)) + *filename +
                          reinterpret_cast<const char*>(0x00958ECC);
        uint8_t ex[36]{};
        ext_00403560(ex, &msg);
        *reinterpret_cast<uint32_t*>(ex) = 0x009570DC;
        ext_006A6DD2(ex, reinterpret_cast<void*>(0x009F8908));
        return;
    }

    void* timeline = lift_field<void*>(self, 0x420);
    ext_00662120(timeline);
    ext_00661F70(timeline, 1);

    void* progressCallback = lift_field<void*>(self, 0x424);
    if (progressCallback != nullptr) {
        std::string status(reinterpret_cast<const char*>(0x00959384));
        void** vtable = *reinterpret_cast<void***>(progressCallback);
        auto fn = reinterpret_cast<void(__thiscall*)(void*, std::string*)>(vtable[3]);
        fn(progressCallback, &status);
    }

    ext_00435D00(ofs, reinterpret_cast<const char*>(0x00959378)) << std::endl;

    void* skeletonNode = static_cast<uint8_t*>(lift_field<void*>(self, 0x414)) + 0x160;
    ext_00435D00(ofs, reinterpret_cast<const char*>(0x00959370));
    ext_0056DE10(self, skeletonNode, &ofs, std::string());

    if (!ext_00553760(self)) {
        ofs.close();
        return;
    }

    ext_00435D00(ofs, reinterpret_cast<const char*>(0x009592AC)) << std::endl;

    int32_t startFrame = lift_field<int32_t>(self, 0x16C);
    int32_t endFrame = lift_field<int32_t>(self, 0x170);
    int32_t frameCount = endFrame - startFrame + 1;
    ext_00435D00(ofs, reinterpret_cast<const char*>(0x00959364)) << frameCount << std::endl;

    float frameTime = ext_00661A40(lift_field<void*>(self, 0x420));
    ext_00435D00(ofs, reinterpret_cast<const char*>(0x00959354)) << frameTime << std::endl;

    progressCallback = lift_field<void*>(self, 0x424);
    if (progressCallback != nullptr) {
        void** vtable = *reinterpret_cast<void***>(progressCallback);
        auto setRange = reinterpret_cast<void(__thiscall*)(void*, int32_t, int32_t)>(vtable[2]);
        setRange(progressCallback, startFrame, endFrame);

        std::string status(reinterpret_cast<const char*>(0x00959338));
        auto setStatus = reinterpret_cast<void(__thiscall*)(void*, std::string*)>(vtable[3]);
        setStatus(progressCallback, &status);
    }

    ext_00661F70(lift_field<void*>(self, 0x420), lift_field<int32_t>(self, 0x16C) + 1);

    while (true) {
        progressCallback = lift_field<void*>(self, 0x424);
        if (progressCallback != nullptr) {
            void* tl = lift_field<void*>(self, 0x420);
            void* cursor = lift_field<void*>(tl, 0x0C);
            int32_t currentFrame = lift_field<int32_t>(cursor, 0x08);
            void** vtable = *reinterpret_cast<void***>(progressCallback);
            auto setProgress = reinterpret_cast<void(__thiscall*)(void*, int32_t)>(vtable[1]);
            setProgress(progressCallback, currentFrame);
        }

        ext_0056E8F0(self, skeletonNode, &ofs);
        ofs << std::endl;

        void* tl = lift_field<void*>(self, 0x420);
        void* cursor = lift_field<void*>(tl, 0x0C);
        int32_t currentFrame = lift_field<int32_t>(cursor, 0x08);
        if (currentFrame >= lift_field<int32_t>(self, 0x170) + 1) {
            break;
        }
        if (!ext_00661E80(tl)) {
            break;
        }
    }

    ofs.close();
}
} // namespace lift_0056EAC0

// [0x0056E310]
namespace lift_0056E310 {
// @name BVHIO::vfunc_14
// @class BVHIO
// @summary Parses a BVH file hierarchy (ROOT/JOINT nodes) from a file stream and initializes the skeleton/timeline.
// @field BVHIO +0x27C uint32_t field_0x27C


extern void* ext_0058F200(void* self);
extern void* ext_006A5C62(uint32_t size);
extern void ext_00587920(void* self, void* node, uint32_t flag);
extern void ext_0056DCA0(void* self, void* node, void* stream);
extern void* ext_006A6E9E(void* ptr, int32_t vfDelta, uint32_t srcType, uint32_t targetType, int32_t isReference);
extern void ext_005557A0(void* self, void* castedNode, void* obj27c);
extern void ext_00401D20(void* self);

extern uint32_t mem_00924FF0;
extern uint32_t mem_009250C4;
extern uint32_t mem_00924FE8;
extern uint32_t mem_009250EC;
extern uint32_t mem_009250DC;
extern uint32_t mem_00924FC8;
extern uint32_t mem_00924FC0;
extern uint32_t mem_00925134;
extern uint32_t mem_00924FF4;
extern uint32_t mem_009250CC;

static void init_bvh_node_vtables(uint8_t* node) {
    lift_field<uint32_t>(node, 0x00) = 0x0092912Cu;
    lift_field<uint32_t>(node, 0x04) = 0x009290E4u;
    lift_field<uint32_t>(node, 0x08) = 0x009290A4u;
    lift_field<uint32_t>(node, 0x0C) = 0x00929054u;
    lift_field<uint32_t>(node, 0x150) = 0x00929040u;
}

extern uint32_t __thiscall fn_0056E310(void* self, void* filePathStr) {
    void* obj27c = static_cast<uint8_t*>(self) + 0x27C;
    uint32_t obj27c_vtable = *static_cast<uint32_t*>(obj27c);
    reinterpret_cast<void(__thiscall*)(void*)>(
        *reinterpret_cast<uint32_t*>(obj27c_vtable + 0x84)
    )(obj27c);

    const char* pathCStr = reinterpret_cast<const char*(__thiscall*)(void*)>(mem_00924FF0)(filePathStr);

    uint8_t ifs[0x8C]{};
    reinterpret_cast<void(__thiscall*)(void*, const char*, int32_t, int32_t, int32_t)>(mem_009250C4)(
        ifs, pathCStr, 1, 0x40, 1
    );

    uint8_t rootNode[0x154]{};
    ext_0058F200(rootNode);
    init_bvh_node_vtables(rootNode);

    uint8_t token[0x1C]{};
    reinterpret_cast<void(__thiscall*)(void*)>(mem_00924FE8)(token);

    int32_t rootCount = 0;
    void* curNode = nullptr;

    void* strm = reinterpret_cast<void*(__cdecl*)(void*, void*)>(mem_009250EC)(ifs, token);
    void* iosPtr = static_cast<uint8_t*>(strm) + *reinterpret_cast<int32_t*>(*reinterpret_cast<uint32_t*>(strm) + 4);
    while (reinterpret_cast<void*(__thiscall*)(void*)>(mem_009250DC)(iosPtr) != nullptr) {
        if (!reinterpret_cast<bool(__cdecl*)(void*, uint32_t)>(mem_00924FC8)(token, 0x009592ACu)) {
            break;
        }

        if (reinterpret_cast<bool(__cdecl*)(void*, uint32_t)>(mem_00924FC0)(token, 0x009592A4u)) {
            rootCount += 1;
            uint8_t* node = static_cast<uint8_t*>(ext_006A5C62(0x154));
            if (node != nullptr) {
                ext_0058F200(node);
                lift_field<uint32_t>(node, 0x150) = 0x00928EACu;
                init_bvh_node_vtables(node);
            }
            ext_00587920(rootNode, node, 1);
            curNode = node;
            ext_0056DCA0(self, node, ifs);
        } else if (reinterpret_cast<bool(__cdecl*)(void*, uint32_t)>(mem_00924FC0)(token, 0x00959278u)) {
            uint8_t* node = static_cast<uint8_t*>(ext_006A5C62(0x154));
            if (node != nullptr) {
                ext_0058F200(node);
                lift_field<uint32_t>(node, 0x150) = 0x00928EACu;
                init_bvh_node_vtables(node);
            }
            ext_00587920(curNode, node, 1);
            ext_0056DCA0(self, node, ifs);
        }

        strm = reinterpret_cast<void*(__cdecl*)(void*, void*)>(mem_009250EC)(ifs, token);
        iosPtr = static_cast<uint8_t*>(strm) + *reinterpret_cast<int32_t*>(*reinterpret_cast<uint32_t*>(strm) + 4);
    }

    if (rootCount == 1) {
        uint32_t beginPtr = lift_field<uint32_t>(rootNode, 0x80);
        uint32_t endPtr = lift_field<uint32_t>(rootNode, 0x84);
        if (beginPtr > endPtr) {
            reinterpret_cast<void(__cdecl*)()>(mem_00925134)();
        }
        if (beginPtr >= endPtr) {
            reinterpret_cast<void(__cdecl*)()>(mem_00925134)();
        }
        curNode = reinterpret_cast<void*>(static_cast<uintptr_t>(*reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(beginPtr))));
    } else {
        curNode = rootNode;
    }

    uint32_t curNodeVtable = *static_cast<uint32_t*>(curNode);
    uint32_t nodeProp = reinterpret_cast<uint32_t(__thiscall*)(void*)>(
        *reinterpret_cast<uint32_t*>(curNodeVtable + 0x24)
    )(curNode);

    uint32_t obj27cVtable = *static_cast<uint32_t*>(obj27c);
    reinterpret_cast<void(__thiscall*)(void*, uint32_t)>(
        *reinterpret_cast<uint32_t*>(obj27cVtable + 0x5C)
    )(obj27c, nodeProp);

    void* casted = ext_006A6E9E(curNode, 0, 0x00A2E2BCu, 0x00A2E264u, 0);
    ext_005557A0(self, casted, obj27c);

    reinterpret_cast<void(__thiscall*)(void*)>(mem_00924FF4)(token);
    ext_00401D20(rootNode);
    reinterpret_cast<void(__thiscall*)(void*)>(mem_009250CC)(ifs);

    return 0;
}
} // namespace lift_0056E310

// [0x0056FD30]
namespace lift_0056FD30 {
// @name BVHIO::vfunc_10
// @class BVHIO
// @summary Loads a BVH motion file into the associated skeleton data, initializing hierarchy and channels.
// @field BVHIO +0x414 uint32_t skeletonData
// @field BVHIO +0x42C uint8_t field_0x42C
// @field BVHIO +0x480 uint8_t field_0x480

extern uint32_t mem_00B37F40;
extern uint32_t mem_00924ECC;
extern uint32_t mem_00924FCC;
extern uint32_t mem_00924FD0;
extern uint32_t mem_00924FDC;
extern uint32_t mem_00924FE0;
extern uint32_t mem_00924FF0;
extern uint32_t mem_00924FF4;
extern uint32_t mem_009250C4;
extern uint32_t mem_009250C8;
extern uint32_t mem_009250CC;
extern uint32_t mem_009250DC;
extern uint32_t mem_00925134;

void __thiscall ext_0055D600(void* self);
void* __cdecl ext_00663B30(void* out_str, const char* path);
void __thiscall ext_004F0FB0(void* self, void* node);
bool __thiscall ext_0056FAA0(void* self, void* stream);
void* __thiscall ext_00403560(void* self, const void* src);
void __cdecl ext_006A6DD2(void* pExceptionObject, void* pThrowInfo);
void __thiscall ext_005EED30(void* self, void* out_vec);
void __thiscall ext_0055D2C0(void* self, void* skeleton_data);
void __thiscall ext_005A3610(void* self);
void __cdecl ext_006A5C5C(void* ptr);

void __thiscall fn_0056FD30(void* self, const std::string* filename) {
    (void)mem_00924ECC; (void)mem_00924FCC; (void)mem_00924FD0; (void)mem_00924FDC;
    (void)mem_00924FE0; (void)mem_00924FF0; (void)mem_00924FF4; (void)mem_009250C4;
    (void)mem_009250C8; (void)mem_009250CC; (void)mem_009250DC; (void)mem_00925134;
    uint8_t* self_bytes = reinterpret_cast<uint8_t*>(self);
    ext_0055D600(self_bytes + 0x42C);

    uint8_t* skeleton_data = lift_field<uint8_t*>(self, 0x414);
    if (skeleton_data) {
        void* iface = skeleton_data + 4;
        uint32_t* vtbl = *reinterpret_cast<uint32_t**>(iface);
        using vfunc_84_t = void(__thiscall*)(void*);
        reinterpret_cast<vfunc_84_t>(vtbl[0x84 / 4])(iface);
    }

    std::string str1 = *reinterpret_cast<const std::string*>(0x00B3B704);
    std::string dir_str;
    ext_00663B30(&dir_str, filename->c_str());
    std::string str2 = dir_str + *reinterpret_cast<const std::string*>(0x00B3B934);

    if (skeleton_data) {
        void* iface = skeleton_data + 4;
        uint32_t* vtbl = *reinterpret_cast<uint32_t**>(iface);
        using vfunc_str_t = void(__thiscall*)(void*, const std::string*);
        reinterpret_cast<vfunc_str_t>(vtbl[0x5C / 4])(iface, &str1);
        reinterpret_cast<vfunc_str_t>(vtbl[0x60 / 4])(iface, &str2);
    }

    mem_00B37F40 += 1;

    uint8_t* tree_map = self_bytes + 0x480;
    uint8_t* tree_head = lift_field<uint8_t*>(tree_map, 0x04);
    void* tree_root = lift_field<void*>(tree_head, 0x04);
    ext_004F0FB0(tree_map, tree_root);

    tree_head = lift_field<uint8_t*>(tree_map, 0x04);
    *reinterpret_cast<uint8_t**>(tree_head + 0x04) = tree_head;
    *reinterpret_cast<uint32_t*>(tree_map + 0x08) = 0;
    *reinterpret_cast<uint8_t**>(tree_head + 0x00) = tree_head;
    *reinterpret_cast<uint8_t**>(tree_head + 0x08) = tree_head;

    std::ifstream file(filename->c_str(), std::ios::in);
    if (!file) {
        std::string err_msg = std::string(reinterpret_cast<const char*>(0x009593B8)) + *filename +
                              reinterpret_cast<const char*>(0x00941F08);
        uint8_t exc_buf[64];
        ext_00403560(exc_buf, &err_msg);
        *reinterpret_cast<uint32_t*>(exc_buf) = 0x009570DC;
        ext_006A6DD2(exc_buf, reinterpret_cast<void*>(0x009F8908));
        return;
    }

    if (!ext_0056FAA0(self, &file)) {
        file.close();
        std::string err_msg = std::string(reinterpret_cast<const char*>(0x00959408)) + *filename +
                              reinterpret_cast<const char*>(0x00941F08);
        uint8_t exc_buf[64];
        ext_00403560(exc_buf, &err_msg);
        *reinterpret_cast<uint32_t*>(exc_buf) = 0x009570DC;
        ext_006A6DD2(exc_buf, reinterpret_cast<void*>(0x009F8908));
        return;
    }

    struct RawVec {
        uint32_t proxy;
        uint8_t** first;
        uint8_t** last;
        uint8_t** end;
    } vec{0, nullptr, nullptr, nullptr};

    ext_005EED30(lift_field<uint8_t*>(self, 0x414) + 0x160, &vec);

    for (uint8_t** it = vec.first; it != vec.last; ++it) {
        uint8_t* node = *it;
        if (lift_field<uint32_t>(node, 0x228) == 0) {
            uint8_t* parent = lift_field<uint8_t*>(node, 0x190);
            *reinterpret_cast<uint32_t*>(node + 0x228) = lift_field<uint32_t>(parent, 0x22C);
            *reinterpret_cast<std::string*>(node + 0x198) = *reinterpret_cast<const std::string*>(parent + 0x1B4);
        }
    }

    file.close();
    ext_0055D2C0(self_bytes + 0x42C, lift_field<void*>(self, 0x414));
    ext_005A3610(lift_field<void*>(self, 0x414));

    if (vec.first) {
        ext_006A5C5C(vec.first);
    }
}
} // namespace lift_0056FD30
