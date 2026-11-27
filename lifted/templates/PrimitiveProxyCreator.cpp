// Lifted C++ translation unit: lifted/templates/PrimitiveProxyCreator.cpp
#include "lift_compat.h"
#include <cstdint>
#include <string>

// [0x004B4C30]
namespace lift_004B4C30 {
// @name ExprParser::PrimitiveProxyCreator<NMData::GraphEngineData, bool, 25>::vfunc_17
// @class ExprParser::PrimitiveProxyCreator<NMData::GraphEngineData, bool, 25>
// @summary Dynamic-casts an input object to NMData::GraphEngineData, throwing on failure, and writes the field pointer at +0x19 and type proxy into the output ValuePtr.
// @field ValuePtr +0x00 void* ptr
// @field ValuePtr +0x04 void* type


extern void* ext_00403560(void* self, const void* src);
extern void* ext_00498F90();
extern void* ext_0049CFF0();
extern void* ext_004BA270();
extern void ext_006A6DD2(void* pExceptionObject, void* pThrowInfo);
extern void* ext_006A6E9E(void* inptr, int32_t vfDelta, void* srcType, void* targetType, int32_t isReference);

extern const uint32_t mem_00924FE4;

struct ValuePtrResult {
    void* ptr;
    void* type;
};

void* __thiscall fn_004B4C30(void* /*self*/, ValuePtrResult* out, void* obj) {
    (void)mem_00924FE4;
    (void)ext_00498F90;
    (void)ext_004BA270;
    void* cast = ext_006A6E9E(
        obj,
        0,
        reinterpret_cast<void*>(static_cast<uintptr_t>(0x00A2E2F8u)),
        reinterpret_cast<void*>(static_cast<uintptr_t>(0x00A377ECu)),
        0
    );
    if (!cast) {
        std::string msg(reinterpret_cast<const char*>(static_cast<uintptr_t>(0x009432ACu)));
        uint8_t ex[32]{};
        ext_00403560(ex, &msg);
        ext_006A6DD2(ex, reinterpret_cast<void*>(static_cast<uintptr_t>(0x009D47A4u)));
    }
    void* typeObj = ext_0049CFF0();
    out->type = typeObj;
    out->ptr = static_cast<uint8_t*>(cast) + 0x19;
    return out;
}
} // namespace lift_004B4C30
