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
