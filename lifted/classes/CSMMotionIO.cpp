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

// [0x00572CC0] CSMMotionIO::vfunc_11 (1157 bytes)
namespace lift_00572CC0 {
// Callee externs (signatures inferred from call sites in the disassembly).
extern void ext_004F15A0(void* self, const void* first, const void* last); // sub_004F15A0: consumes parsed block

// Keyword string literals referenced by the parser (contents not recovered).
extern const char mem_009597FC[]; // block marker
extern const char mem_009597F0[]; // int tag A (low index)
extern const char mem_009597E4[]; // int tag B (high index)
extern const char mem_009597DC[]; // int tag C (config int)
extern const char mem_009597D4[]; // skip tag (consumes one extra token)

// One parsed record: three floats (xyz) followed by four reserved dwords (0x1C bytes).
struct MotionRecord {
    float xyz[3];
    uint32_t reserved[4];
};
static_assert(sizeof(MotionRecord) == 0x1C, "record stride must be 0x1C");

// @name CSMMotionIO::vfunc_11
// @class CSMMotionIO
// @summary Parses a keyword-tagged text motion file and hands the decoded record range to the consumer.
// @field none (self is stored but no fields are accessed directly)
void fn_00572CC0(void* self, const std::string& path) {
    std::ifstream in(path.c_str(), std::ios::in);
    std::string tok;
    int lo = 0;
    int hi = 0;
    int cfg = 0;

    // Token dispatch loop: keep consuming tags while they are recognized.
    while (in >> tok) {
        if (tok == mem_009597F0) {
            if (!(in >> lo)) break;
        } else if (tok == mem_009597E4) {
            if (!(in >> hi)) break;
        } else if (tok == mem_009597DC) {
            if (!(in >> cfg)) break;
        } else if (tok == mem_009597D4) {
            std::string skipped;
            if (!(in >> skipped)) break;
        } else if (tok != mem_009597FC) {
            break;
        }
    }

    std::vector<MotionRecord> records;
    if (lo <= hi) {
        records.reserve(static_cast<std::size_t>(hi - lo + 1));
        for (int i = lo; i <= hi; ++i) {
            MotionRecord rec{};
            for (int k = 0; k < 3; ++k) {
                if (!(in >> rec.xyz[k])) {
                    break;
                }
            }
            records.push_back(rec);
        }
    }

    if (!records.empty()) {
        const MotionRecord* first = records.data();
        const MotionRecord* last = first + records.size();
        ext_004F15A0(self, first, last);
    }
    (void)cfg;
}
} // namespace lift_00572CC0

// [0x005722F0] CSMMotionIO::vfunc_13 (661 bytes)
namespace lift_005722F0 {
// Known callee 0x00553760: sub_00553760 (31B), thiscall(this) -> bool.
extern bool ext_00553760(void* self);
// Known callee 0x00571E80: sub_00571E80 (591B), thiscall(this, std::ofstream&).
extern void ext_00571E80(void* self, std::ofstream& out);
// Known callee 0x00661F70: sub_00661F70 (262B), thiscall(container, int count).
extern void ext_00661F70(void* container, int count);
// Known callee 0x005720D0: sub_005720D0 (544B), thiscall(this, std::ofstream&, int index).
extern void ext_005720D0(void* self, std::ofstream& out, int index);
// Known callee 0x00661E80: sub_00661E80 (138B), thiscall(container) -> bool (advance).
extern bool ext_00661E80(void* container);
// Known callee 0x00663DB0: sub_00663DB0 (468B), cdecl(const char*).
extern void ext_00663DB0(const char* name);

// @name CSMMotionIO::vfunc_13
// @class CSMMotionIO
// @summary Validates field_0x414 and this, opens path for writing (throws on failure), writes a header via the sink at field_0x424, emits one record per index through the container at field_0x420, and closes the file.
// @field CSMMotionIO +0x414 void* field_0x414
// @field CSMMotionIO +0x420 void* field_0x420
// @field CSMMotionIO +0x424 void* field_0x424
// @field CSMMotionIO +0x16c int32_t field_0x16c
// @field CSMMotionIO +0x170 int32_t field_0x170
void fn_005722F0(void* self, const std::string& path) {
    // Sink (+0x424) is a C++ object with a MSVC-style vtable: [0] dtor, [1], [2], [3].
    // Slots are invoked through raw function pointers taking the object as first argument.
    auto slot = [](void* obj, int n) -> void* {
        return reinterpret_cast<void**>(*reinterpret_cast<void***>(obj))[n];
    };

    void* P = lift_field<void*>(self, 0x414);
    const int32_t flag = lift_field<int32_t>(P, 0x5e8);
    if (flag == 0) {
        // Original logs a debug string (.rdata 0x009597B0) to stdout and returns.
        std::puts("<rdata 0x009597B0>");
        return;
    }
    if (!ext_00553760(self)) {
        // Original logs a debug string (.rdata 0x0095978C) to stdout and returns.
        std::puts("<rdata 0x0095978C>");
        return;
    }

    ext_00663DB0(path.c_str());

    std::ofstream out;
    out.open(path.c_str(), std::ios::out | std::ios::trunc);
    if (!out) {
        // Original builds a message from .rdata strings 0x0095977C / 0x0095975C plus the
        // path and throws an exception object (type info at 0x009F8908). The exception
        // class is not recovered; std::string carries the message here.
        throw std::string("<rdata 0x0095977C>") + path + std::string("<rdata 0x0095975C>");
    }

    ext_00571E80(self, out);

    const int32_t count = lift_field<int32_t>(self, 0x16c) + 1;
    void* container = lift_field<void*>(self, 0x420);
    ext_00661F70(container, count);

    void* sink = lift_field<void*>(self, 0x424);
    if (sink != nullptr) {
        const std::string header("<rdata 0x00959740>");
        // slot 3: void (const std::string&)
        reinterpret_cast<void (*)(void*, const std::string*)>(slot(sink, 3))(sink, &header);
        // slot 2: void (int, int)
        reinterpret_cast<void (*)(void*, int, int)>(slot(sink, 2))(
            sink, lift_field<int32_t>(self, 0x16c), lift_field<int32_t>(self, 0x170));
    }

    int index = 0;
    do {
        ++index;
        ext_005720D0(self, out, index);

        sink = lift_field<void*>(self, 0x424);
        if (sink != nullptr) {
            // slot 1: void (int)
            reinterpret_cast<void (*)(void*, int)>(slot(sink, 1))(sink, index);
        }

        container = lift_field<void*>(self, 0x420);
        // Original asserts (_invalid_parameter_noinfo) on null / degenerate container links.
        void* begin = lift_field<void*>(container, 0x8);
        if (begin == nullptr) {
            std::abort();
        }
        void* end = lift_field<void*>(container, 0xc);
        if (end == lift_field<void*>(begin, 0x4)) {
            std::abort();
        }

        end = lift_field<void*>(container, 0xc);
        const int32_t endIndex = lift_field<int32_t>(end, 0x8);
        if (endIndex >= lift_field<int32_t>(self, 0x170) + 1) {
            break;
        }
    } while (ext_00661E80(lift_field<void*>(self, 0x420)));

    out.close();
}
} // namespace lift_005722F0
