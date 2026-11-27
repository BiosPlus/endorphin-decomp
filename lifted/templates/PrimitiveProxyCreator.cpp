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

// [0x00500150]
namespace lift_00500150 {
// @name ExprParser::PrimitiveProxyCreator<NMData::EvolveParams, bool, 29>::vfunc_17
// @class ExprParser::PrimitiveProxyCreator<NMData::EvolveParams, bool, 29>
// @summary Dynamic-casts input to NMData::EvolveParams, throws on failure, else writes bool* at +0x1D and type ptr to out pair.
// @field ExprParser::PrimitiveProxyCreator<NMData::EvolveParams, bool, 29> +0x00 void* field_0x00
// @field ExprParser::PrimitiveProxyCreator<NMData::EvolveParams, bool, 29> +0x04 void* field_0x04


extern void* ext_006A6E9E(void* inptr, int32_t vfDelta, void* srcType, void* targetType, int32_t isReference);
extern void* ext_00403560(void* self, const void* src);
extern void ext_006A6DD2(void* pExceptionObject, void* pThrowInfo);
extern void* ext_0049CFF0(void);

extern uint32_t mem_00924FE4;

void* fn_00500150(void* self, void* out_pair, void* src_obj) {
    (void)self;
    void* cast_res = ext_006A6E9E(
        src_obj,
        0,
        reinterpret_cast<void*>(static_cast<uintptr_t>(0x00A2E2F8u)),
        reinterpret_cast<void*>(static_cast<uintptr_t>(0x00A40460u)),
        0);

    if (!cast_res) {
        alignas(8) uint8_t str_buf[32]{};
        alignas(8) uint8_t exc_buf[64]{};
        using StringCtorFn = void* (*)(void*, const char*);
        auto str_ctor = reinterpret_cast<StringCtorFn>(static_cast<uintptr_t>(mem_00924FE4));
        str_ctor(str_buf, reinterpret_cast<const char*>(static_cast<uintptr_t>(0x009432ACu)));
        ext_00403560(exc_buf, str_buf);
        ext_006A6DD2(exc_buf, reinterpret_cast<void*>(static_cast<uintptr_t>(0x009D47A4u)));
    }

    void* type_ptr = ext_0049CFF0();
    uint8_t* field_ptr = static_cast<uint8_t*>(cast_res) + 0x1D;
    void** out = static_cast<void**>(out_pair);
    out[0] = field_ptr;
    out[1] = type_ptr;
    return out_pair;
}
} // namespace lift_00500150

// [0x005001F0] ExprParser::PrimitiveProxyCreator<NMData::EvolveParams, bool, 30>::vfunc_17 (151 bytes)
namespace lift_005001F0 {
// @name ExprParser::PrimitiveProxyCreator<NMData::EvolveParams, bool, 30>::vfunc_17
// @class ExprParser::PrimitiveProxyCreator<NMData::EvolveParams, bool, 30>
// @summary Auto-lifted identical-shape clone of 0x00500150 (ExprParser::PrimitiveProxyCreator<NMData::EvolveParams, bool, 29>::vfunc_17).
namespace lift_00500150 {
// @name ExprParser::PrimitiveProxyCreator<NMData::EvolveParams, bool, 29>::vfunc_17
// @class ExprParser::PrimitiveProxyCreator<NMData::EvolveParams, bool, 29>
// @summary Dynamic-casts input to NMData::EvolveParams, throws on failure, else writes bool* at +0x1D and type ptr to out pair.
// @field ExprParser::PrimitiveProxyCreator<NMData::EvolveParams, bool, 29> +0x00 void* field_0x00
// @field ExprParser::PrimitiveProxyCreator<NMData::EvolveParams, bool, 29> +0x04 void* field_0x04


extern void* ext_006A6E9E(void* inptr, int32_t vfDelta, void* srcType, void* targetType, int32_t isReference);
extern void* ext_00403560(void* self, const void* src);
extern void ext_006A6DD2(void* pExceptionObject, void* pThrowInfo);
extern void* ext_0049CFF0(void);

extern uint32_t mem_00924FE4;

void* fn_005001F0(void* self, void* out_pair, void* src_obj) {
    (void)self;
    void* cast_res = ext_006A6E9E(
        src_obj,
        0,
        reinterpret_cast<void*>(static_cast<uintptr_t>(0x00A2E2F8u)),
        reinterpret_cast<void*>(static_cast<uintptr_t>(0x00A40460u)),
        0);

    if (!cast_res) {
        alignas(8) uint8_t str_buf[32]{};
        alignas(8) uint8_t exc_buf[64]{};
        using StringCtorFn = void* (*)(void*, const char*);
        auto str_ctor = reinterpret_cast<StringCtorFn>(static_cast<uintptr_t>(mem_00924FE4));
        str_ctor(str_buf, reinterpret_cast<const char*>(static_cast<uintptr_t>(0x009432ACu)));
        ext_00403560(exc_buf, str_buf);
        ext_006A6DD2(exc_buf, reinterpret_cast<void*>(static_cast<uintptr_t>(0x009D47A4u)));
    }

    void* type_ptr = ext_0049CFF0();
    uint8_t* field_ptr = static_cast<uint8_t*>(cast_res) + 0x1E;
    void** out = static_cast<void**>(out_pair);
    out[0] = field_ptr;
    out[1] = type_ptr;
    return out_pair;
}
} // namespace lift_00500150
} // namespace lift_005001F0

// [0x00500850] ExprParser::PrimitiveProxyCreator<NMData::EvolveParams, float, 4>::vfunc_17 (151 bytes)
namespace lift_00500850 {
// @name ExprParser::PrimitiveProxyCreator<NMData::EvolveParams, float, 4>::vfunc_17
// @class ExprParser::PrimitiveProxyCreator<NMData::EvolveParams, float, 4>
// @summary Auto-lifted identical-shape clone of 0x00500150 (ExprParser::PrimitiveProxyCreator<NMData::EvolveParams, bool, 29>::vfunc_17).
namespace lift_00500150 {
// @name ExprParser::PrimitiveProxyCreator<NMData::EvolveParams, bool, 29>::vfunc_17
// @class ExprParser::PrimitiveProxyCreator<NMData::EvolveParams, bool, 29>
// @summary Dynamic-casts input to NMData::EvolveParams, throws on failure, else writes bool* at +0x1D and type ptr to out pair.
// @field ExprParser::PrimitiveProxyCreator<NMData::EvolveParams, bool, 29> +0x00 void* field_0x00
// @field ExprParser::PrimitiveProxyCreator<NMData::EvolveParams, bool, 29> +0x04 void* field_0x04


extern void* ext_006A6E9E(void* inptr, int32_t vfDelta, void* srcType, void* targetType, int32_t isReference);
extern void* ext_00403560(void* self, const void* src);
extern void ext_006A6DD2(void* pExceptionObject, void* pThrowInfo);
extern void* ext_004BA270(void);

extern uint32_t mem_00924FE4;

void* fn_00500850(void* self, void* out_pair, void* src_obj) {
    (void)self;
    void* cast_res = ext_006A6E9E(
        src_obj,
        0,
        reinterpret_cast<void*>(static_cast<uintptr_t>(0x00A2E2F8u)),
        reinterpret_cast<void*>(static_cast<uintptr_t>(0x00A40460u)),
        0);

    if (!cast_res) {
        alignas(8) uint8_t str_buf[32]{};
        alignas(8) uint8_t exc_buf[64]{};
        using StringCtorFn = void* (*)(void*, const char*);
        auto str_ctor = reinterpret_cast<StringCtorFn>(static_cast<uintptr_t>(mem_00924FE4));
        str_ctor(str_buf, reinterpret_cast<const char*>(static_cast<uintptr_t>(0x009432ACu)));
        ext_00403560(exc_buf, str_buf);
        ext_006A6DD2(exc_buf, reinterpret_cast<void*>(static_cast<uintptr_t>(0x009D47A4u)));
    }

    void* type_ptr = ext_004BA270();
    uint8_t* field_ptr = static_cast<uint8_t*>(cast_res) + 0x4;
    void** out = static_cast<void**>(out_pair);
    out[0] = field_ptr;
    out[1] = type_ptr;
    return out_pair;
}
} // namespace lift_00500150
} // namespace lift_00500850

// [0x005008F0] ExprParser::PrimitiveProxyCreator<NMData::EvolveParams, int, 16>::vfunc_17 (151 bytes)
namespace lift_005008F0 {
// @name ExprParser::PrimitiveProxyCreator<NMData::EvolveParams, int, 16>::vfunc_17
// @class ExprParser::PrimitiveProxyCreator<NMData::EvolveParams, int, 16>
// @summary Auto-lifted identical-shape clone of 0x00500150 (ExprParser::PrimitiveProxyCreator<NMData::EvolveParams, bool, 29>::vfunc_17).
namespace lift_00500150 {
// @name ExprParser::PrimitiveProxyCreator<NMData::EvolveParams, bool, 29>::vfunc_17
// @class ExprParser::PrimitiveProxyCreator<NMData::EvolveParams, bool, 29>
// @summary Dynamic-casts input to NMData::EvolveParams, throws on failure, else writes bool* at +0x1D and type ptr to out pair.
// @field ExprParser::PrimitiveProxyCreator<NMData::EvolveParams, bool, 29> +0x00 void* field_0x00
// @field ExprParser::PrimitiveProxyCreator<NMData::EvolveParams, bool, 29> +0x04 void* field_0x04


extern void* ext_006A6E9E(void* inptr, int32_t vfDelta, void* srcType, void* targetType, int32_t isReference);
extern void* ext_00403560(void* self, const void* src);
extern void ext_006A6DD2(void* pExceptionObject, void* pThrowInfo);
extern void* ext_0049DA40(void);

extern uint32_t mem_00924FE4;

void* fn_005008F0(void* self, void* out_pair, void* src_obj) {
    (void)self;
    void* cast_res = ext_006A6E9E(
        src_obj,
        0,
        reinterpret_cast<void*>(static_cast<uintptr_t>(0x00A2E2F8u)),
        reinterpret_cast<void*>(static_cast<uintptr_t>(0x00A40460u)),
        0);

    if (!cast_res) {
        alignas(8) uint8_t str_buf[32]{};
        alignas(8) uint8_t exc_buf[64]{};
        using StringCtorFn = void* (*)(void*, const char*);
        auto str_ctor = reinterpret_cast<StringCtorFn>(static_cast<uintptr_t>(mem_00924FE4));
        str_ctor(str_buf, reinterpret_cast<const char*>(static_cast<uintptr_t>(0x009432ACu)));
        ext_00403560(exc_buf, str_buf);
        ext_006A6DD2(exc_buf, reinterpret_cast<void*>(static_cast<uintptr_t>(0x009D47A4u)));
    }

    void* type_ptr = ext_0049DA40();
    uint8_t* field_ptr = static_cast<uint8_t*>(cast_res) + 0x10;
    void** out = static_cast<void**>(out_pair);
    out[0] = field_ptr;
    out[1] = type_ptr;
    return out_pair;
}
} // namespace lift_00500150
} // namespace lift_005008F0

// [0x00500990] ExprParser::PrimitiveProxyCreator<NMData::EvolveParams, int, 8>::vfunc_17 (151 bytes)
namespace lift_00500990 {
// @name ExprParser::PrimitiveProxyCreator<NMData::EvolveParams, int, 8>::vfunc_17
// @class ExprParser::PrimitiveProxyCreator<NMData::EvolveParams, int, 8>
// @summary Auto-lifted identical-shape clone of 0x00500150 (ExprParser::PrimitiveProxyCreator<NMData::EvolveParams, bool, 29>::vfunc_17).
namespace lift_00500150 {
// @name ExprParser::PrimitiveProxyCreator<NMData::EvolveParams, bool, 29>::vfunc_17
// @class ExprParser::PrimitiveProxyCreator<NMData::EvolveParams, bool, 29>
// @summary Dynamic-casts input to NMData::EvolveParams, throws on failure, else writes bool* at +0x1D and type ptr to out pair.
// @field ExprParser::PrimitiveProxyCreator<NMData::EvolveParams, bool, 29> +0x00 void* field_0x00
// @field ExprParser::PrimitiveProxyCreator<NMData::EvolveParams, bool, 29> +0x04 void* field_0x04


extern void* ext_006A6E9E(void* inptr, int32_t vfDelta, void* srcType, void* targetType, int32_t isReference);
extern void* ext_00403560(void* self, const void* src);
extern void ext_006A6DD2(void* pExceptionObject, void* pThrowInfo);
extern void* ext_0049DA40(void);

extern uint32_t mem_00924FE4;

void* fn_00500990(void* self, void* out_pair, void* src_obj) {
    (void)self;
    void* cast_res = ext_006A6E9E(
        src_obj,
        0,
        reinterpret_cast<void*>(static_cast<uintptr_t>(0x00A2E2F8u)),
        reinterpret_cast<void*>(static_cast<uintptr_t>(0x00A40460u)),
        0);

    if (!cast_res) {
        alignas(8) uint8_t str_buf[32]{};
        alignas(8) uint8_t exc_buf[64]{};
        using StringCtorFn = void* (*)(void*, const char*);
        auto str_ctor = reinterpret_cast<StringCtorFn>(static_cast<uintptr_t>(mem_00924FE4));
        str_ctor(str_buf, reinterpret_cast<const char*>(static_cast<uintptr_t>(0x009432ACu)));
        ext_00403560(exc_buf, str_buf);
        ext_006A6DD2(exc_buf, reinterpret_cast<void*>(static_cast<uintptr_t>(0x009D47A4u)));
    }

    void* type_ptr = ext_0049DA40();
    uint8_t* field_ptr = static_cast<uint8_t*>(cast_res) + 0x8;
    void** out = static_cast<void**>(out_pair);
    out[0] = field_ptr;
    out[1] = type_ptr;
    return out_pair;
}
} // namespace lift_00500150
} // namespace lift_00500990

// [0x00500A30] ExprParser::PrimitiveProxyCreator<NMData::EvolveParams, int, 12>::vfunc_17 (151 bytes)
namespace lift_00500A30 {
// @name ExprParser::PrimitiveProxyCreator<NMData::EvolveParams, int, 12>::vfunc_17
// @class ExprParser::PrimitiveProxyCreator<NMData::EvolveParams, int, 12>
// @summary Auto-lifted identical-shape clone of 0x00500150 (ExprParser::PrimitiveProxyCreator<NMData::EvolveParams, bool, 29>::vfunc_17).
namespace lift_00500150 {
// @name ExprParser::PrimitiveProxyCreator<NMData::EvolveParams, bool, 29>::vfunc_17
// @class ExprParser::PrimitiveProxyCreator<NMData::EvolveParams, bool, 29>
// @summary Dynamic-casts input to NMData::EvolveParams, throws on failure, else writes bool* at +0x1D and type ptr to out pair.
// @field ExprParser::PrimitiveProxyCreator<NMData::EvolveParams, bool, 29> +0x00 void* field_0x00
// @field ExprParser::PrimitiveProxyCreator<NMData::EvolveParams, bool, 29> +0x04 void* field_0x04


extern void* ext_006A6E9E(void* inptr, int32_t vfDelta, void* srcType, void* targetType, int32_t isReference);
extern void* ext_00403560(void* self, const void* src);
extern void ext_006A6DD2(void* pExceptionObject, void* pThrowInfo);
extern void* ext_0049DA40(void);

extern uint32_t mem_00924FE4;

void* fn_00500A30(void* self, void* out_pair, void* src_obj) {
    (void)self;
    void* cast_res = ext_006A6E9E(
        src_obj,
        0,
        reinterpret_cast<void*>(static_cast<uintptr_t>(0x00A2E2F8u)),
        reinterpret_cast<void*>(static_cast<uintptr_t>(0x00A40460u)),
        0);

    if (!cast_res) {
        alignas(8) uint8_t str_buf[32]{};
        alignas(8) uint8_t exc_buf[64]{};
        using StringCtorFn = void* (*)(void*, const char*);
        auto str_ctor = reinterpret_cast<StringCtorFn>(static_cast<uintptr_t>(mem_00924FE4));
        str_ctor(str_buf, reinterpret_cast<const char*>(static_cast<uintptr_t>(0x009432ACu)));
        ext_00403560(exc_buf, str_buf);
        ext_006A6DD2(exc_buf, reinterpret_cast<void*>(static_cast<uintptr_t>(0x009D47A4u)));
    }

    void* type_ptr = ext_0049DA40();
    uint8_t* field_ptr = static_cast<uint8_t*>(cast_res) + 0xC;
    void** out = static_cast<void**>(out_pair);
    out[0] = field_ptr;
    out[1] = type_ptr;
    return out_pair;
}
} // namespace lift_00500150
} // namespace lift_00500A30

// [0x00500AD0] ExprParser::PrimitiveProxyCreator<NMData::EvolveParams, int, 24>::vfunc_17 (151 bytes)
namespace lift_00500AD0 {
// @name ExprParser::PrimitiveProxyCreator<NMData::EvolveParams, int, 24>::vfunc_17
// @class ExprParser::PrimitiveProxyCreator<NMData::EvolveParams, int, 24>
// @summary Auto-lifted identical-shape clone of 0x00500150 (ExprParser::PrimitiveProxyCreator<NMData::EvolveParams, bool, 29>::vfunc_17).
namespace lift_00500150 {
// @name ExprParser::PrimitiveProxyCreator<NMData::EvolveParams, bool, 29>::vfunc_17
// @class ExprParser::PrimitiveProxyCreator<NMData::EvolveParams, bool, 29>
// @summary Dynamic-casts input to NMData::EvolveParams, throws on failure, else writes bool* at +0x1D and type ptr to out pair.
// @field ExprParser::PrimitiveProxyCreator<NMData::EvolveParams, bool, 29> +0x00 void* field_0x00
// @field ExprParser::PrimitiveProxyCreator<NMData::EvolveParams, bool, 29> +0x04 void* field_0x04


extern void* ext_006A6E9E(void* inptr, int32_t vfDelta, void* srcType, void* targetType, int32_t isReference);
extern void* ext_00403560(void* self, const void* src);
extern void ext_006A6DD2(void* pExceptionObject, void* pThrowInfo);
extern void* ext_0049DA40(void);

extern uint32_t mem_00924FE4;

void* fn_00500AD0(void* self, void* out_pair, void* src_obj) {
    (void)self;
    void* cast_res = ext_006A6E9E(
        src_obj,
        0,
        reinterpret_cast<void*>(static_cast<uintptr_t>(0x00A2E2F8u)),
        reinterpret_cast<void*>(static_cast<uintptr_t>(0x00A40460u)),
        0);

    if (!cast_res) {
        alignas(8) uint8_t str_buf[32]{};
        alignas(8) uint8_t exc_buf[64]{};
        using StringCtorFn = void* (*)(void*, const char*);
        auto str_ctor = reinterpret_cast<StringCtorFn>(static_cast<uintptr_t>(mem_00924FE4));
        str_ctor(str_buf, reinterpret_cast<const char*>(static_cast<uintptr_t>(0x009432ACu)));
        ext_00403560(exc_buf, str_buf);
        ext_006A6DD2(exc_buf, reinterpret_cast<void*>(static_cast<uintptr_t>(0x009D47A4u)));
    }

    void* type_ptr = ext_0049DA40();
    uint8_t* field_ptr = static_cast<uint8_t*>(cast_res) + 0x18;
    void** out = static_cast<void**>(out_pair);
    out[0] = field_ptr;
    out[1] = type_ptr;
    return out_pair;
}
} // namespace lift_00500150
} // namespace lift_00500AD0

// [0x0050B0C0] ExprParser::PrimitiveProxyCreator<NMData::TaskTemplateParam, std::basic_string<char, std::char_traits<char>, std::allocator<char>>, 4>::vfunc_17 (151 bytes)
namespace lift_0050B0C0 {
// @name ExprParser::PrimitiveProxyCreator<NMData::TaskTemplateParam, std::basic_string<char, std::char_traits<char>, std::allocator<char>>, 4>::vfunc_17
// @class ExprParser::PrimitiveProxyCreator<NMData::TaskTemplateParam, std::basic_string<char, std::char_traits<char>, std::allocator<char>>, 4>
// @summary Auto-lifted identical-shape clone of 0x00500150 (ExprParser::PrimitiveProxyCreator<NMData::EvolveParams, bool, 29>::vfunc_17).
namespace lift_00500150 {
// @name ExprParser::PrimitiveProxyCreator<NMData::EvolveParams, bool, 29>::vfunc_17
// @class ExprParser::PrimitiveProxyCreator<NMData::EvolveParams, bool, 29>
// @summary Dynamic-casts input to NMData::EvolveParams, throws on failure, else writes bool* at +0x1D and type ptr to out pair.
// @field ExprParser::PrimitiveProxyCreator<NMData::EvolveParams, bool, 29> +0x00 void* field_0x00
// @field ExprParser::PrimitiveProxyCreator<NMData::EvolveParams, bool, 29> +0x04 void* field_0x04


extern void* ext_006A6E9E(void* inptr, int32_t vfDelta, void* srcType, void* targetType, int32_t isReference);
extern void* ext_00403560(void* self, const void* src);
extern void ext_006A6DD2(void* pExceptionObject, void* pThrowInfo);
extern void* ext_00498F90(void);

extern uint32_t mem_00924FE4;

void* fn_0050B0C0(void* self, void* out_pair, void* src_obj) {
    (void)self;
    void* cast_res = ext_006A6E9E(
        src_obj,
        0,
        reinterpret_cast<void*>(static_cast<uintptr_t>(0x00A2E2F8u)),
        reinterpret_cast<void*>(static_cast<uintptr_t>(0xA40F04u)),
        0);

    if (!cast_res) {
        alignas(8) uint8_t str_buf[32]{};
        alignas(8) uint8_t exc_buf[64]{};
        using StringCtorFn = void* (*)(void*, const char*);
        auto str_ctor = reinterpret_cast<StringCtorFn>(static_cast<uintptr_t>(mem_00924FE4));
        str_ctor(str_buf, reinterpret_cast<const char*>(static_cast<uintptr_t>(0x009432ACu)));
        ext_00403560(exc_buf, str_buf);
        ext_006A6DD2(exc_buf, reinterpret_cast<void*>(static_cast<uintptr_t>(0x009D47A4u)));
    }

    void* type_ptr = ext_00498F90();
    uint8_t* field_ptr = static_cast<uint8_t*>(cast_res) + 0x4;
    void** out = static_cast<void**>(out_pair);
    out[0] = field_ptr;
    out[1] = type_ptr;
    return out_pair;
}
} // namespace lift_00500150
} // namespace lift_0050B0C0

// [0x0050B160] ExprParser::PrimitiveProxyCreator<NMData::TaskTemplateParam, float, 32>::vfunc_17 (151 bytes)
namespace lift_0050B160 {
// @name ExprParser::PrimitiveProxyCreator<NMData::TaskTemplateParam, float, 32>::vfunc_17
// @class ExprParser::PrimitiveProxyCreator<NMData::TaskTemplateParam, float, 32>
// @summary Auto-lifted identical-shape clone of 0x00500150 (ExprParser::PrimitiveProxyCreator<NMData::EvolveParams, bool, 29>::vfunc_17).
namespace lift_00500150 {
// @name ExprParser::PrimitiveProxyCreator<NMData::EvolveParams, bool, 29>::vfunc_17
// @class ExprParser::PrimitiveProxyCreator<NMData::EvolveParams, bool, 29>
// @summary Dynamic-casts input to NMData::EvolveParams, throws on failure, else writes bool* at +0x1D and type ptr to out pair.
// @field ExprParser::PrimitiveProxyCreator<NMData::EvolveParams, bool, 29> +0x00 void* field_0x00
// @field ExprParser::PrimitiveProxyCreator<NMData::EvolveParams, bool, 29> +0x04 void* field_0x04


extern void* ext_006A6E9E(void* inptr, int32_t vfDelta, void* srcType, void* targetType, int32_t isReference);
extern void* ext_00403560(void* self, const void* src);
extern void ext_006A6DD2(void* pExceptionObject, void* pThrowInfo);
extern void* ext_004BA270(void);

extern uint32_t mem_00924FE4;

void* fn_0050B160(void* self, void* out_pair, void* src_obj) {
    (void)self;
    void* cast_res = ext_006A6E9E(
        src_obj,
        0,
        reinterpret_cast<void*>(static_cast<uintptr_t>(0x00A2E2F8u)),
        reinterpret_cast<void*>(static_cast<uintptr_t>(0xA40F04u)),
        0);

    if (!cast_res) {
        alignas(8) uint8_t str_buf[32]{};
        alignas(8) uint8_t exc_buf[64]{};
        using StringCtorFn = void* (*)(void*, const char*);
        auto str_ctor = reinterpret_cast<StringCtorFn>(static_cast<uintptr_t>(mem_00924FE4));
        str_ctor(str_buf, reinterpret_cast<const char*>(static_cast<uintptr_t>(0x009432ACu)));
        ext_00403560(exc_buf, str_buf);
        ext_006A6DD2(exc_buf, reinterpret_cast<void*>(static_cast<uintptr_t>(0x009D47A4u)));
    }

    void* type_ptr = ext_004BA270();
    uint8_t* field_ptr = static_cast<uint8_t*>(cast_res) + 0x20;
    void** out = static_cast<void**>(out_pair);
    out[0] = field_ptr;
    out[1] = type_ptr;
    return out_pair;
}
} // namespace lift_00500150
} // namespace lift_0050B160

// [0x0050B200] ExprParser::PrimitiveProxyCreator<NMData::TaskTemplateParam, float, 36>::vfunc_17 (151 bytes)
namespace lift_0050B200 {
// @name ExprParser::PrimitiveProxyCreator<NMData::TaskTemplateParam, float, 36>::vfunc_17
// @class ExprParser::PrimitiveProxyCreator<NMData::TaskTemplateParam, float, 36>
// @summary Auto-lifted identical-shape clone of 0x00500150 (ExprParser::PrimitiveProxyCreator<NMData::EvolveParams, bool, 29>::vfunc_17).
namespace lift_00500150 {
// @name ExprParser::PrimitiveProxyCreator<NMData::EvolveParams, bool, 29>::vfunc_17
// @class ExprParser::PrimitiveProxyCreator<NMData::EvolveParams, bool, 29>
// @summary Dynamic-casts input to NMData::EvolveParams, throws on failure, else writes bool* at +0x1D and type ptr to out pair.
// @field ExprParser::PrimitiveProxyCreator<NMData::EvolveParams, bool, 29> +0x00 void* field_0x00
// @field ExprParser::PrimitiveProxyCreator<NMData::EvolveParams, bool, 29> +0x04 void* field_0x04


extern void* ext_006A6E9E(void* inptr, int32_t vfDelta, void* srcType, void* targetType, int32_t isReference);
extern void* ext_00403560(void* self, const void* src);
extern void ext_006A6DD2(void* pExceptionObject, void* pThrowInfo);
extern void* ext_004BA270(void);

extern uint32_t mem_00924FE4;

void* fn_0050B200(void* self, void* out_pair, void* src_obj) {
    (void)self;
    void* cast_res = ext_006A6E9E(
        src_obj,
        0,
        reinterpret_cast<void*>(static_cast<uintptr_t>(0x00A2E2F8u)),
        reinterpret_cast<void*>(static_cast<uintptr_t>(0xA40F04u)),
        0);

    if (!cast_res) {
        alignas(8) uint8_t str_buf[32]{};
        alignas(8) uint8_t exc_buf[64]{};
        using StringCtorFn = void* (*)(void*, const char*);
        auto str_ctor = reinterpret_cast<StringCtorFn>(static_cast<uintptr_t>(mem_00924FE4));
        str_ctor(str_buf, reinterpret_cast<const char*>(static_cast<uintptr_t>(0x009432ACu)));
        ext_00403560(exc_buf, str_buf);
        ext_006A6DD2(exc_buf, reinterpret_cast<void*>(static_cast<uintptr_t>(0x009D47A4u)));
    }

    void* type_ptr = ext_004BA270();
    uint8_t* field_ptr = static_cast<uint8_t*>(cast_res) + 0x24;
    void** out = static_cast<void**>(out_pair);
    out[0] = field_ptr;
    out[1] = type_ptr;
    return out_pair;
}
} // namespace lift_00500150
} // namespace lift_0050B200

// [0x0050B2A0] ExprParser::PrimitiveProxyCreator<NMData::TaskParam, std::basic_string<char, std::char_traits<char>, std::allocator<char>>, 4>::vfunc_17 (151 bytes)
namespace lift_0050B2A0 {
// @name ExprParser::PrimitiveProxyCreator<NMData::TaskParam, std::basic_string<char, std::char_traits<char>, std::allocator<char>>, 4>::vfunc_17
// @class ExprParser::PrimitiveProxyCreator<NMData::TaskParam, std::basic_string<char, std::char_traits<char>, std::allocator<char>>, 4>
// @summary Auto-lifted identical-shape clone of 0x00500150 (ExprParser::PrimitiveProxyCreator<NMData::EvolveParams, bool, 29>::vfunc_17).
namespace lift_00500150 {
// @name ExprParser::PrimitiveProxyCreator<NMData::EvolveParams, bool, 29>::vfunc_17
// @class ExprParser::PrimitiveProxyCreator<NMData::EvolveParams, bool, 29>
// @summary Dynamic-casts input to NMData::EvolveParams, throws on failure, else writes bool* at +0x1D and type ptr to out pair.
// @field ExprParser::PrimitiveProxyCreator<NMData::EvolveParams, bool, 29> +0x00 void* field_0x00
// @field ExprParser::PrimitiveProxyCreator<NMData::EvolveParams, bool, 29> +0x04 void* field_0x04


extern void* ext_006A6E9E(void* inptr, int32_t vfDelta, void* srcType, void* targetType, int32_t isReference);
extern void* ext_00403560(void* self, const void* src);
extern void ext_006A6DD2(void* pExceptionObject, void* pThrowInfo);
extern void* ext_00498F90(void);

extern uint32_t mem_00924FE4;

void* fn_0050B2A0(void* self, void* out_pair, void* src_obj) {
    (void)self;
    void* cast_res = ext_006A6E9E(
        src_obj,
        0,
        reinterpret_cast<void*>(static_cast<uintptr_t>(0x00A2E2F8u)),
        reinterpret_cast<void*>(static_cast<uintptr_t>(0xA40F2Cu)),
        0);

    if (!cast_res) {
        alignas(8) uint8_t str_buf[32]{};
        alignas(8) uint8_t exc_buf[64]{};
        using StringCtorFn = void* (*)(void*, const char*);
        auto str_ctor = reinterpret_cast<StringCtorFn>(static_cast<uintptr_t>(mem_00924FE4));
        str_ctor(str_buf, reinterpret_cast<const char*>(static_cast<uintptr_t>(0x009432ACu)));
        ext_00403560(exc_buf, str_buf);
        ext_006A6DD2(exc_buf, reinterpret_cast<void*>(static_cast<uintptr_t>(0x009D47A4u)));
    }

    void* type_ptr = ext_00498F90();
    uint8_t* field_ptr = static_cast<uint8_t*>(cast_res) + 0x4;
    void** out = static_cast<void**>(out_pair);
    out[0] = field_ptr;
    out[1] = type_ptr;
    return out_pair;
}
} // namespace lift_00500150
} // namespace lift_0050B2A0

// [0x0050B340] ExprParser::PrimitiveProxyCreator<NMData::TaskParam, float, 32>::vfunc_17 (151 bytes)
namespace lift_0050B340 {
// @name ExprParser::PrimitiveProxyCreator<NMData::TaskParam, float, 32>::vfunc_17
// @class ExprParser::PrimitiveProxyCreator<NMData::TaskParam, float, 32>
// @summary Auto-lifted identical-shape clone of 0x00500150 (ExprParser::PrimitiveProxyCreator<NMData::EvolveParams, bool, 29>::vfunc_17).
namespace lift_00500150 {
// @name ExprParser::PrimitiveProxyCreator<NMData::EvolveParams, bool, 29>::vfunc_17
// @class ExprParser::PrimitiveProxyCreator<NMData::EvolveParams, bool, 29>
// @summary Dynamic-casts input to NMData::EvolveParams, throws on failure, else writes bool* at +0x1D and type ptr to out pair.
// @field ExprParser::PrimitiveProxyCreator<NMData::EvolveParams, bool, 29> +0x00 void* field_0x00
// @field ExprParser::PrimitiveProxyCreator<NMData::EvolveParams, bool, 29> +0x04 void* field_0x04


extern void* ext_006A6E9E(void* inptr, int32_t vfDelta, void* srcType, void* targetType, int32_t isReference);
extern void* ext_00403560(void* self, const void* src);
extern void ext_006A6DD2(void* pExceptionObject, void* pThrowInfo);
extern void* ext_004BA270(void);

extern uint32_t mem_00924FE4;

void* fn_0050B340(void* self, void* out_pair, void* src_obj) {
    (void)self;
    void* cast_res = ext_006A6E9E(
        src_obj,
        0,
        reinterpret_cast<void*>(static_cast<uintptr_t>(0x00A2E2F8u)),
        reinterpret_cast<void*>(static_cast<uintptr_t>(0xA40F2Cu)),
        0);

    if (!cast_res) {
        alignas(8) uint8_t str_buf[32]{};
        alignas(8) uint8_t exc_buf[64]{};
        using StringCtorFn = void* (*)(void*, const char*);
        auto str_ctor = reinterpret_cast<StringCtorFn>(static_cast<uintptr_t>(mem_00924FE4));
        str_ctor(str_buf, reinterpret_cast<const char*>(static_cast<uintptr_t>(0x009432ACu)));
        ext_00403560(exc_buf, str_buf);
        ext_006A6DD2(exc_buf, reinterpret_cast<void*>(static_cast<uintptr_t>(0x009D47A4u)));
    }

    void* type_ptr = ext_004BA270();
    uint8_t* field_ptr = static_cast<uint8_t*>(cast_res) + 0x20;
    void** out = static_cast<void**>(out_pair);
    out[0] = field_ptr;
    out[1] = type_ptr;
    return out_pair;
}
} // namespace lift_00500150
} // namespace lift_0050B340

// [0x0050EA20] ExprParser::PrimitiveProxyCreator<NMData::PopulationData, int, 4>::vfunc_17 (151 bytes)
namespace lift_0050EA20 {
// @name ExprParser::PrimitiveProxyCreator<NMData::PopulationData, int, 4>::vfunc_17
// @class ExprParser::PrimitiveProxyCreator<NMData::PopulationData, int, 4>
// @summary Auto-lifted identical-shape clone of 0x00500150 (ExprParser::PrimitiveProxyCreator<NMData::EvolveParams, bool, 29>::vfunc_17).
namespace lift_00500150 {
// @name ExprParser::PrimitiveProxyCreator<NMData::EvolveParams, bool, 29>::vfunc_17
// @class ExprParser::PrimitiveProxyCreator<NMData::EvolveParams, bool, 29>
// @summary Dynamic-casts input to NMData::EvolveParams, throws on failure, else writes bool* at +0x1D and type ptr to out pair.
// @field ExprParser::PrimitiveProxyCreator<NMData::EvolveParams, bool, 29> +0x00 void* field_0x00
// @field ExprParser::PrimitiveProxyCreator<NMData::EvolveParams, bool, 29> +0x04 void* field_0x04


extern void* ext_006A6E9E(void* inptr, int32_t vfDelta, void* srcType, void* targetType, int32_t isReference);
extern void* ext_00403560(void* self, const void* src);
extern void ext_006A6DD2(void* pExceptionObject, void* pThrowInfo);
extern void* ext_0049DA40(void);

extern uint32_t mem_00924FE4;

void* fn_0050EA20(void* self, void* out_pair, void* src_obj) {
    (void)self;
    void* cast_res = ext_006A6E9E(
        src_obj,
        0,
        reinterpret_cast<void*>(static_cast<uintptr_t>(0x00A2E2F8u)),
        reinterpret_cast<void*>(static_cast<uintptr_t>(0xA41ADCu)),
        0);

    if (!cast_res) {
        alignas(8) uint8_t str_buf[32]{};
        alignas(8) uint8_t exc_buf[64]{};
        using StringCtorFn = void* (*)(void*, const char*);
        auto str_ctor = reinterpret_cast<StringCtorFn>(static_cast<uintptr_t>(mem_00924FE4));
        str_ctor(str_buf, reinterpret_cast<const char*>(static_cast<uintptr_t>(0x009432ACu)));
        ext_00403560(exc_buf, str_buf);
        ext_006A6DD2(exc_buf, reinterpret_cast<void*>(static_cast<uintptr_t>(0x009D47A4u)));
    }

    void* type_ptr = ext_0049DA40();
    uint8_t* field_ptr = static_cast<uint8_t*>(cast_res) + 0x4;
    void** out = static_cast<void**>(out_pair);
    out[0] = field_ptr;
    out[1] = type_ptr;
    return out_pair;
}
} // namespace lift_00500150
} // namespace lift_0050EA20

// [0x0050EAC0] ExprParser::PrimitiveProxyCreator<NMData::PopulationData, float, 12>::vfunc_17 (151 bytes)
namespace lift_0050EAC0 {
// @name ExprParser::PrimitiveProxyCreator<NMData::PopulationData, float, 12>::vfunc_17
// @class ExprParser::PrimitiveProxyCreator<NMData::PopulationData, float, 12>
// @summary Auto-lifted identical-shape clone of 0x00500150 (ExprParser::PrimitiveProxyCreator<NMData::EvolveParams, bool, 29>::vfunc_17).
namespace lift_00500150 {
// @name ExprParser::PrimitiveProxyCreator<NMData::EvolveParams, bool, 29>::vfunc_17
// @class ExprParser::PrimitiveProxyCreator<NMData::EvolveParams, bool, 29>
// @summary Dynamic-casts input to NMData::EvolveParams, throws on failure, else writes bool* at +0x1D and type ptr to out pair.
// @field ExprParser::PrimitiveProxyCreator<NMData::EvolveParams, bool, 29> +0x00 void* field_0x00
// @field ExprParser::PrimitiveProxyCreator<NMData::EvolveParams, bool, 29> +0x04 void* field_0x04


extern void* ext_006A6E9E(void* inptr, int32_t vfDelta, void* srcType, void* targetType, int32_t isReference);
extern void* ext_00403560(void* self, const void* src);
extern void ext_006A6DD2(void* pExceptionObject, void* pThrowInfo);
extern void* ext_004BA270(void);

extern uint32_t mem_00924FE4;

void* fn_0050EAC0(void* self, void* out_pair, void* src_obj) {
    (void)self;
    void* cast_res = ext_006A6E9E(
        src_obj,
        0,
        reinterpret_cast<void*>(static_cast<uintptr_t>(0x00A2E2F8u)),
        reinterpret_cast<void*>(static_cast<uintptr_t>(0xA41ADCu)),
        0);

    if (!cast_res) {
        alignas(8) uint8_t str_buf[32]{};
        alignas(8) uint8_t exc_buf[64]{};
        using StringCtorFn = void* (*)(void*, const char*);
        auto str_ctor = reinterpret_cast<StringCtorFn>(static_cast<uintptr_t>(mem_00924FE4));
        str_ctor(str_buf, reinterpret_cast<const char*>(static_cast<uintptr_t>(0x009432ACu)));
        ext_00403560(exc_buf, str_buf);
        ext_006A6DD2(exc_buf, reinterpret_cast<void*>(static_cast<uintptr_t>(0x009D47A4u)));
    }

    void* type_ptr = ext_004BA270();
    uint8_t* field_ptr = static_cast<uint8_t*>(cast_res) + 0xC;
    void** out = static_cast<void**>(out_pair);
    out[0] = field_ptr;
    out[1] = type_ptr;
    return out_pair;
}
} // namespace lift_00500150
} // namespace lift_0050EAC0

// [0x0050EB60] ExprParser::PrimitiveProxyCreator<NMData::PopulationData, std::basic_string<char, std::char_traits<char>, std::allocator<char>>, 60>::vfunc_17 (151 bytes)
namespace lift_0050EB60 {
// @name ExprParser::PrimitiveProxyCreator<NMData::PopulationData, std::basic_string<char, std::char_traits<char>, std::allocator<char>>, 60>::vfunc_17
// @class ExprParser::PrimitiveProxyCreator<NMData::PopulationData, std::basic_string<char, std::char_traits<char>, std::allocator<char>>, 60>
// @summary Auto-lifted identical-shape clone of 0x00500150 (ExprParser::PrimitiveProxyCreator<NMData::EvolveParams, bool, 29>::vfunc_17).
namespace lift_00500150 {
// @name ExprParser::PrimitiveProxyCreator<NMData::EvolveParams, bool, 29>::vfunc_17
// @class ExprParser::PrimitiveProxyCreator<NMData::EvolveParams, bool, 29>
// @summary Dynamic-casts input to NMData::EvolveParams, throws on failure, else writes bool* at +0x1D and type ptr to out pair.
// @field ExprParser::PrimitiveProxyCreator<NMData::EvolveParams, bool, 29> +0x00 void* field_0x00
// @field ExprParser::PrimitiveProxyCreator<NMData::EvolveParams, bool, 29> +0x04 void* field_0x04


extern void* ext_006A6E9E(void* inptr, int32_t vfDelta, void* srcType, void* targetType, int32_t isReference);
extern void* ext_00403560(void* self, const void* src);
extern void ext_006A6DD2(void* pExceptionObject, void* pThrowInfo);
extern void* ext_00498F90(void);

extern uint32_t mem_00924FE4;

void* fn_0050EB60(void* self, void* out_pair, void* src_obj) {
    (void)self;
    void* cast_res = ext_006A6E9E(
        src_obj,
        0,
        reinterpret_cast<void*>(static_cast<uintptr_t>(0x00A2E2F8u)),
        reinterpret_cast<void*>(static_cast<uintptr_t>(0xA41ADCu)),
        0);

    if (!cast_res) {
        alignas(8) uint8_t str_buf[32]{};
        alignas(8) uint8_t exc_buf[64]{};
        using StringCtorFn = void* (*)(void*, const char*);
        auto str_ctor = reinterpret_cast<StringCtorFn>(static_cast<uintptr_t>(mem_00924FE4));
        str_ctor(str_buf, reinterpret_cast<const char*>(static_cast<uintptr_t>(0x009432ACu)));
        ext_00403560(exc_buf, str_buf);
        ext_006A6DD2(exc_buf, reinterpret_cast<void*>(static_cast<uintptr_t>(0x009D47A4u)));
    }

    void* type_ptr = ext_00498F90();
    uint8_t* field_ptr = static_cast<uint8_t*>(cast_res) + 0x3C;
    void** out = static_cast<void**>(out_pair);
    out[0] = field_ptr;
    out[1] = type_ptr;
    return out_pair;
}
} // namespace lift_00500150
} // namespace lift_0050EB60

// [0x0050EC00] ExprParser::PrimitiveProxyCreator<NMData::PopulationData, float, 28>::vfunc_17 (151 bytes)
namespace lift_0050EC00 {
// @name ExprParser::PrimitiveProxyCreator<NMData::PopulationData, float, 28>::vfunc_17
// @class ExprParser::PrimitiveProxyCreator<NMData::PopulationData, float, 28>
// @summary Auto-lifted identical-shape clone of 0x00500150 (ExprParser::PrimitiveProxyCreator<NMData::EvolveParams, bool, 29>::vfunc_17).
namespace lift_00500150 {
// @name ExprParser::PrimitiveProxyCreator<NMData::EvolveParams, bool, 29>::vfunc_17
// @class ExprParser::PrimitiveProxyCreator<NMData::EvolveParams, bool, 29>
// @summary Dynamic-casts input to NMData::EvolveParams, throws on failure, else writes bool* at +0x1D and type ptr to out pair.
// @field ExprParser::PrimitiveProxyCreator<NMData::EvolveParams, bool, 29> +0x00 void* field_0x00
// @field ExprParser::PrimitiveProxyCreator<NMData::EvolveParams, bool, 29> +0x04 void* field_0x04


extern void* ext_006A6E9E(void* inptr, int32_t vfDelta, void* srcType, void* targetType, int32_t isReference);
extern void* ext_00403560(void* self, const void* src);
extern void ext_006A6DD2(void* pExceptionObject, void* pThrowInfo);
extern void* ext_004BA270(void);

extern uint32_t mem_00924FE4;

void* fn_0050EC00(void* self, void* out_pair, void* src_obj) {
    (void)self;
    void* cast_res = ext_006A6E9E(
        src_obj,
        0,
        reinterpret_cast<void*>(static_cast<uintptr_t>(0x00A2E2F8u)),
        reinterpret_cast<void*>(static_cast<uintptr_t>(0xA41ADCu)),
        0);

    if (!cast_res) {
        alignas(8) uint8_t str_buf[32]{};
        alignas(8) uint8_t exc_buf[64]{};
        using StringCtorFn = void* (*)(void*, const char*);
        auto str_ctor = reinterpret_cast<StringCtorFn>(static_cast<uintptr_t>(mem_00924FE4));
        str_ctor(str_buf, reinterpret_cast<const char*>(static_cast<uintptr_t>(0x009432ACu)));
        ext_00403560(exc_buf, str_buf);
        ext_006A6DD2(exc_buf, reinterpret_cast<void*>(static_cast<uintptr_t>(0x009D47A4u)));
    }

    void* type_ptr = ext_004BA270();
    uint8_t* field_ptr = static_cast<uint8_t*>(cast_res) + 0x1C;
    void** out = static_cast<void**>(out_pair);
    out[0] = field_ptr;
    out[1] = type_ptr;
    return out_pair;
}
} // namespace lift_00500150
} // namespace lift_0050EC00

// [0x0050ECA0] ExprParser::PrimitiveProxyCreator<NMData::PopulationData, int, 8>::vfunc_17 (151 bytes)
namespace lift_0050ECA0 {
// @name ExprParser::PrimitiveProxyCreator<NMData::PopulationData, int, 8>::vfunc_17
// @class ExprParser::PrimitiveProxyCreator<NMData::PopulationData, int, 8>
// @summary Auto-lifted identical-shape clone of 0x00500150 (ExprParser::PrimitiveProxyCreator<NMData::EvolveParams, bool, 29>::vfunc_17).
namespace lift_00500150 {
// @name ExprParser::PrimitiveProxyCreator<NMData::EvolveParams, bool, 29>::vfunc_17
// @class ExprParser::PrimitiveProxyCreator<NMData::EvolveParams, bool, 29>
// @summary Dynamic-casts input to NMData::EvolveParams, throws on failure, else writes bool* at +0x1D and type ptr to out pair.
// @field ExprParser::PrimitiveProxyCreator<NMData::EvolveParams, bool, 29> +0x00 void* field_0x00
// @field ExprParser::PrimitiveProxyCreator<NMData::EvolveParams, bool, 29> +0x04 void* field_0x04


extern void* ext_006A6E9E(void* inptr, int32_t vfDelta, void* srcType, void* targetType, int32_t isReference);
extern void* ext_00403560(void* self, const void* src);
extern void ext_006A6DD2(void* pExceptionObject, void* pThrowInfo);
extern void* ext_0049DA40(void);

extern uint32_t mem_00924FE4;

void* fn_0050ECA0(void* self, void* out_pair, void* src_obj) {
    (void)self;
    void* cast_res = ext_006A6E9E(
        src_obj,
        0,
        reinterpret_cast<void*>(static_cast<uintptr_t>(0x00A2E2F8u)),
        reinterpret_cast<void*>(static_cast<uintptr_t>(0xA41ADCu)),
        0);

    if (!cast_res) {
        alignas(8) uint8_t str_buf[32]{};
        alignas(8) uint8_t exc_buf[64]{};
        using StringCtorFn = void* (*)(void*, const char*);
        auto str_ctor = reinterpret_cast<StringCtorFn>(static_cast<uintptr_t>(mem_00924FE4));
        str_ctor(str_buf, reinterpret_cast<const char*>(static_cast<uintptr_t>(0x009432ACu)));
        ext_00403560(exc_buf, str_buf);
        ext_006A6DD2(exc_buf, reinterpret_cast<void*>(static_cast<uintptr_t>(0x009D47A4u)));
    }

    void* type_ptr = ext_0049DA40();
    uint8_t* field_ptr = static_cast<uint8_t*>(cast_res) + 0x8;
    void** out = static_cast<void**>(out_pair);
    out[0] = field_ptr;
    out[1] = type_ptr;
    return out_pair;
}
} // namespace lift_00500150
} // namespace lift_0050ECA0

// [0x00514320] ExprParser::PrimitiveProxyCreator<Chromosome::Descriptor, float, 56>::vfunc_17 (151 bytes)
namespace lift_00514320 {
// @name ExprParser::PrimitiveProxyCreator<Chromosome::Descriptor, float, 56>::vfunc_17
// @class ExprParser::PrimitiveProxyCreator<Chromosome::Descriptor, float, 56>
// @summary Auto-lifted identical-shape clone of 0x00500150 (ExprParser::PrimitiveProxyCreator<NMData::EvolveParams, bool, 29>::vfunc_17).
namespace lift_00500150 {
// @name ExprParser::PrimitiveProxyCreator<NMData::EvolveParams, bool, 29>::vfunc_17
// @class ExprParser::PrimitiveProxyCreator<NMData::EvolveParams, bool, 29>
// @summary Dynamic-casts input to NMData::EvolveParams, throws on failure, else writes bool* at +0x1D and type ptr to out pair.
// @field ExprParser::PrimitiveProxyCreator<NMData::EvolveParams, bool, 29> +0x00 void* field_0x00
// @field ExprParser::PrimitiveProxyCreator<NMData::EvolveParams, bool, 29> +0x04 void* field_0x04


extern void* ext_006A6E9E(void* inptr, int32_t vfDelta, void* srcType, void* targetType, int32_t isReference);
extern void* ext_00403560(void* self, const void* src);
extern void ext_006A6DD2(void* pExceptionObject, void* pThrowInfo);
extern void* ext_004BA270(void);

extern uint32_t mem_00924FE4;

void* fn_00514320(void* self, void* out_pair, void* src_obj) {
    (void)self;
    void* cast_res = ext_006A6E9E(
        src_obj,
        0,
        reinterpret_cast<void*>(static_cast<uintptr_t>(0x00A2E2F8u)),
        reinterpret_cast<void*>(static_cast<uintptr_t>(0xA40D68u)),
        0);

    if (!cast_res) {
        alignas(8) uint8_t str_buf[32]{};
        alignas(8) uint8_t exc_buf[64]{};
        using StringCtorFn = void* (*)(void*, const char*);
        auto str_ctor = reinterpret_cast<StringCtorFn>(static_cast<uintptr_t>(mem_00924FE4));
        str_ctor(str_buf, reinterpret_cast<const char*>(static_cast<uintptr_t>(0x009432ACu)));
        ext_00403560(exc_buf, str_buf);
        ext_006A6DD2(exc_buf, reinterpret_cast<void*>(static_cast<uintptr_t>(0x009D47A4u)));
    }

    void* type_ptr = ext_004BA270();
    uint8_t* field_ptr = static_cast<uint8_t*>(cast_res) + 0x38;
    void** out = static_cast<void**>(out_pair);
    out[0] = field_ptr;
    out[1] = type_ptr;
    return out_pair;
}
} // namespace lift_00500150
} // namespace lift_00514320

// [0x005143C0] ExprParser::PrimitiveProxyCreator<Chromosome::Descriptor, float, 60>::vfunc_17 (151 bytes)
namespace lift_005143C0 {
// @name ExprParser::PrimitiveProxyCreator<Chromosome::Descriptor, float, 60>::vfunc_17
// @class ExprParser::PrimitiveProxyCreator<Chromosome::Descriptor, float, 60>
// @summary Auto-lifted identical-shape clone of 0x00500150 (ExprParser::PrimitiveProxyCreator<NMData::EvolveParams, bool, 29>::vfunc_17).
namespace lift_00500150 {
// @name ExprParser::PrimitiveProxyCreator<NMData::EvolveParams, bool, 29>::vfunc_17
// @class ExprParser::PrimitiveProxyCreator<NMData::EvolveParams, bool, 29>
// @summary Dynamic-casts input to NMData::EvolveParams, throws on failure, else writes bool* at +0x1D and type ptr to out pair.
// @field ExprParser::PrimitiveProxyCreator<NMData::EvolveParams, bool, 29> +0x00 void* field_0x00
// @field ExprParser::PrimitiveProxyCreator<NMData::EvolveParams, bool, 29> +0x04 void* field_0x04


extern void* ext_006A6E9E(void* inptr, int32_t vfDelta, void* srcType, void* targetType, int32_t isReference);
extern void* ext_00403560(void* self, const void* src);
extern void ext_006A6DD2(void* pExceptionObject, void* pThrowInfo);
extern void* ext_004BA270(void);

extern uint32_t mem_00924FE4;

void* fn_005143C0(void* self, void* out_pair, void* src_obj) {
    (void)self;
    void* cast_res = ext_006A6E9E(
        src_obj,
        0,
        reinterpret_cast<void*>(static_cast<uintptr_t>(0x00A2E2F8u)),
        reinterpret_cast<void*>(static_cast<uintptr_t>(0xA40D68u)),
        0);

    if (!cast_res) {
        alignas(8) uint8_t str_buf[32]{};
        alignas(8) uint8_t exc_buf[64]{};
        using StringCtorFn = void* (*)(void*, const char*);
        auto str_ctor = reinterpret_cast<StringCtorFn>(static_cast<uintptr_t>(mem_00924FE4));
        str_ctor(str_buf, reinterpret_cast<const char*>(static_cast<uintptr_t>(0x009432ACu)));
        ext_00403560(exc_buf, str_buf);
        ext_006A6DD2(exc_buf, reinterpret_cast<void*>(static_cast<uintptr_t>(0x009D47A4u)));
    }

    void* type_ptr = ext_004BA270();
    uint8_t* field_ptr = static_cast<uint8_t*>(cast_res) + 0x3C;
    void** out = static_cast<void**>(out_pair);
    out[0] = field_ptr;
    out[1] = type_ptr;
    return out_pair;
}
} // namespace lift_00500150
} // namespace lift_005143C0

// [0x00514460] ExprParser::PrimitiveProxyCreator<Chromosome::Descriptor, float, 40>::vfunc_17 (151 bytes)
namespace lift_00514460 {
// @name ExprParser::PrimitiveProxyCreator<Chromosome::Descriptor, float, 40>::vfunc_17
// @class ExprParser::PrimitiveProxyCreator<Chromosome::Descriptor, float, 40>
// @summary Auto-lifted identical-shape clone of 0x00500150 (ExprParser::PrimitiveProxyCreator<NMData::EvolveParams, bool, 29>::vfunc_17).
namespace lift_00500150 {
// @name ExprParser::PrimitiveProxyCreator<NMData::EvolveParams, bool, 29>::vfunc_17
// @class ExprParser::PrimitiveProxyCreator<NMData::EvolveParams, bool, 29>
// @summary Dynamic-casts input to NMData::EvolveParams, throws on failure, else writes bool* at +0x1D and type ptr to out pair.
// @field ExprParser::PrimitiveProxyCreator<NMData::EvolveParams, bool, 29> +0x00 void* field_0x00
// @field ExprParser::PrimitiveProxyCreator<NMData::EvolveParams, bool, 29> +0x04 void* field_0x04


extern void* ext_006A6E9E(void* inptr, int32_t vfDelta, void* srcType, void* targetType, int32_t isReference);
extern void* ext_00403560(void* self, const void* src);
extern void ext_006A6DD2(void* pExceptionObject, void* pThrowInfo);
extern void* ext_004BA270(void);

extern uint32_t mem_00924FE4;

void* fn_00514460(void* self, void* out_pair, void* src_obj) {
    (void)self;
    void* cast_res = ext_006A6E9E(
        src_obj,
        0,
        reinterpret_cast<void*>(static_cast<uintptr_t>(0x00A2E2F8u)),
        reinterpret_cast<void*>(static_cast<uintptr_t>(0xA40D68u)),
        0);

    if (!cast_res) {
        alignas(8) uint8_t str_buf[32]{};
        alignas(8) uint8_t exc_buf[64]{};
        using StringCtorFn = void* (*)(void*, const char*);
        auto str_ctor = reinterpret_cast<StringCtorFn>(static_cast<uintptr_t>(mem_00924FE4));
        str_ctor(str_buf, reinterpret_cast<const char*>(static_cast<uintptr_t>(0x009432ACu)));
        ext_00403560(exc_buf, str_buf);
        ext_006A6DD2(exc_buf, reinterpret_cast<void*>(static_cast<uintptr_t>(0x009D47A4u)));
    }

    void* type_ptr = ext_004BA270();
    uint8_t* field_ptr = static_cast<uint8_t*>(cast_res) + 0x28;
    void** out = static_cast<void**>(out_pair);
    out[0] = field_ptr;
    out[1] = type_ptr;
    return out_pair;
}
} // namespace lift_00500150
} // namespace lift_00514460

// [0x00514500] ExprParser::PrimitiveProxyCreator<Chromosome::Descriptor, float, 44>::vfunc_17 (151 bytes)
namespace lift_00514500 {
// @name ExprParser::PrimitiveProxyCreator<Chromosome::Descriptor, float, 44>::vfunc_17
// @class ExprParser::PrimitiveProxyCreator<Chromosome::Descriptor, float, 44>
// @summary Auto-lifted identical-shape clone of 0x00500150 (ExprParser::PrimitiveProxyCreator<NMData::EvolveParams, bool, 29>::vfunc_17).
namespace lift_00500150 {
// @name ExprParser::PrimitiveProxyCreator<NMData::EvolveParams, bool, 29>::vfunc_17
// @class ExprParser::PrimitiveProxyCreator<NMData::EvolveParams, bool, 29>
// @summary Dynamic-casts input to NMData::EvolveParams, throws on failure, else writes bool* at +0x1D and type ptr to out pair.
// @field ExprParser::PrimitiveProxyCreator<NMData::EvolveParams, bool, 29> +0x00 void* field_0x00
// @field ExprParser::PrimitiveProxyCreator<NMData::EvolveParams, bool, 29> +0x04 void* field_0x04


extern void* ext_006A6E9E(void* inptr, int32_t vfDelta, void* srcType, void* targetType, int32_t isReference);
extern void* ext_00403560(void* self, const void* src);
extern void ext_006A6DD2(void* pExceptionObject, void* pThrowInfo);
extern void* ext_004BA270(void);

extern uint32_t mem_00924FE4;

void* fn_00514500(void* self, void* out_pair, void* src_obj) {
    (void)self;
    void* cast_res = ext_006A6E9E(
        src_obj,
        0,
        reinterpret_cast<void*>(static_cast<uintptr_t>(0x00A2E2F8u)),
        reinterpret_cast<void*>(static_cast<uintptr_t>(0xA40D68u)),
        0);

    if (!cast_res) {
        alignas(8) uint8_t str_buf[32]{};
        alignas(8) uint8_t exc_buf[64]{};
        using StringCtorFn = void* (*)(void*, const char*);
        auto str_ctor = reinterpret_cast<StringCtorFn>(static_cast<uintptr_t>(mem_00924FE4));
        str_ctor(str_buf, reinterpret_cast<const char*>(static_cast<uintptr_t>(0x009432ACu)));
        ext_00403560(exc_buf, str_buf);
        ext_006A6DD2(exc_buf, reinterpret_cast<void*>(static_cast<uintptr_t>(0x009D47A4u)));
    }

    void* type_ptr = ext_004BA270();
    uint8_t* field_ptr = static_cast<uint8_t*>(cast_res) + 0x2C;
    void** out = static_cast<void**>(out_pair);
    out[0] = field_ptr;
    out[1] = type_ptr;
    return out_pair;
}
} // namespace lift_00500150
} // namespace lift_00514500

// [0x005145A0] ExprParser::PrimitiveProxyCreator<Chromosome::Descriptor, float, 72>::vfunc_17 (151 bytes)
namespace lift_005145A0 {
// @name ExprParser::PrimitiveProxyCreator<Chromosome::Descriptor, float, 72>::vfunc_17
// @class ExprParser::PrimitiveProxyCreator<Chromosome::Descriptor, float, 72>
// @summary Auto-lifted identical-shape clone of 0x00500150 (ExprParser::PrimitiveProxyCreator<NMData::EvolveParams, bool, 29>::vfunc_17).
namespace lift_00500150 {
// @name ExprParser::PrimitiveProxyCreator<NMData::EvolveParams, bool, 29>::vfunc_17
// @class ExprParser::PrimitiveProxyCreator<NMData::EvolveParams, bool, 29>
// @summary Dynamic-casts input to NMData::EvolveParams, throws on failure, else writes bool* at +0x1D and type ptr to out pair.
// @field ExprParser::PrimitiveProxyCreator<NMData::EvolveParams, bool, 29> +0x00 void* field_0x00
// @field ExprParser::PrimitiveProxyCreator<NMData::EvolveParams, bool, 29> +0x04 void* field_0x04


extern void* ext_006A6E9E(void* inptr, int32_t vfDelta, void* srcType, void* targetType, int32_t isReference);
extern void* ext_00403560(void* self, const void* src);
extern void ext_006A6DD2(void* pExceptionObject, void* pThrowInfo);
extern void* ext_004BA270(void);

extern uint32_t mem_00924FE4;

void* fn_005145A0(void* self, void* out_pair, void* src_obj) {
    (void)self;
    void* cast_res = ext_006A6E9E(
        src_obj,
        0,
        reinterpret_cast<void*>(static_cast<uintptr_t>(0x00A2E2F8u)),
        reinterpret_cast<void*>(static_cast<uintptr_t>(0xA40D68u)),
        0);

    if (!cast_res) {
        alignas(8) uint8_t str_buf[32]{};
        alignas(8) uint8_t exc_buf[64]{};
        using StringCtorFn = void* (*)(void*, const char*);
        auto str_ctor = reinterpret_cast<StringCtorFn>(static_cast<uintptr_t>(mem_00924FE4));
        str_ctor(str_buf, reinterpret_cast<const char*>(static_cast<uintptr_t>(0x009432ACu)));
        ext_00403560(exc_buf, str_buf);
        ext_006A6DD2(exc_buf, reinterpret_cast<void*>(static_cast<uintptr_t>(0x009D47A4u)));
    }

    void* type_ptr = ext_004BA270();
    uint8_t* field_ptr = static_cast<uint8_t*>(cast_res) + 0x48;
    void** out = static_cast<void**>(out_pair);
    out[0] = field_ptr;
    out[1] = type_ptr;
    return out_pair;
}
} // namespace lift_00500150
} // namespace lift_005145A0

// [0x00514640] ExprParser::PrimitiveProxyCreator<Chromosome::Descriptor, float, 76>::vfunc_17 (151 bytes)
namespace lift_00514640 {
// @name ExprParser::PrimitiveProxyCreator<Chromosome::Descriptor, float, 76>::vfunc_17
// @class ExprParser::PrimitiveProxyCreator<Chromosome::Descriptor, float, 76>
// @summary Auto-lifted identical-shape clone of 0x00500150 (ExprParser::PrimitiveProxyCreator<NMData::EvolveParams, bool, 29>::vfunc_17).
namespace lift_00500150 {
// @name ExprParser::PrimitiveProxyCreator<NMData::EvolveParams, bool, 29>::vfunc_17
// @class ExprParser::PrimitiveProxyCreator<NMData::EvolveParams, bool, 29>
// @summary Dynamic-casts input to NMData::EvolveParams, throws on failure, else writes bool* at +0x1D and type ptr to out pair.
// @field ExprParser::PrimitiveProxyCreator<NMData::EvolveParams, bool, 29> +0x00 void* field_0x00
// @field ExprParser::PrimitiveProxyCreator<NMData::EvolveParams, bool, 29> +0x04 void* field_0x04


extern void* ext_006A6E9E(void* inptr, int32_t vfDelta, void* srcType, void* targetType, int32_t isReference);
extern void* ext_00403560(void* self, const void* src);
extern void ext_006A6DD2(void* pExceptionObject, void* pThrowInfo);
extern void* ext_004BA270(void);

extern uint32_t mem_00924FE4;

void* fn_00514640(void* self, void* out_pair, void* src_obj) {
    (void)self;
    void* cast_res = ext_006A6E9E(
        src_obj,
        0,
        reinterpret_cast<void*>(static_cast<uintptr_t>(0x00A2E2F8u)),
        reinterpret_cast<void*>(static_cast<uintptr_t>(0xA40D68u)),
        0);

    if (!cast_res) {
        alignas(8) uint8_t str_buf[32]{};
        alignas(8) uint8_t exc_buf[64]{};
        using StringCtorFn = void* (*)(void*, const char*);
        auto str_ctor = reinterpret_cast<StringCtorFn>(static_cast<uintptr_t>(mem_00924FE4));
        str_ctor(str_buf, reinterpret_cast<const char*>(static_cast<uintptr_t>(0x009432ACu)));
        ext_00403560(exc_buf, str_buf);
        ext_006A6DD2(exc_buf, reinterpret_cast<void*>(static_cast<uintptr_t>(0x009D47A4u)));
    }

    void* type_ptr = ext_004BA270();
    uint8_t* field_ptr = static_cast<uint8_t*>(cast_res) + 0x4C;
    void** out = static_cast<void**>(out_pair);
    out[0] = field_ptr;
    out[1] = type_ptr;
    return out_pair;
}
} // namespace lift_00500150
} // namespace lift_00514640

// [0x005146E0] ExprParser::PrimitiveProxyCreator<Chromosome::Descriptor, float, 48>::vfunc_17 (151 bytes)
namespace lift_005146E0 {
// @name ExprParser::PrimitiveProxyCreator<Chromosome::Descriptor, float, 48>::vfunc_17
// @class ExprParser::PrimitiveProxyCreator<Chromosome::Descriptor, float, 48>
// @summary Auto-lifted identical-shape clone of 0x00500150 (ExprParser::PrimitiveProxyCreator<NMData::EvolveParams, bool, 29>::vfunc_17).
namespace lift_00500150 {
// @name ExprParser::PrimitiveProxyCreator<NMData::EvolveParams, bool, 29>::vfunc_17
// @class ExprParser::PrimitiveProxyCreator<NMData::EvolveParams, bool, 29>
// @summary Dynamic-casts input to NMData::EvolveParams, throws on failure, else writes bool* at +0x1D and type ptr to out pair.
// @field ExprParser::PrimitiveProxyCreator<NMData::EvolveParams, bool, 29> +0x00 void* field_0x00
// @field ExprParser::PrimitiveProxyCreator<NMData::EvolveParams, bool, 29> +0x04 void* field_0x04


extern void* ext_006A6E9E(void* inptr, int32_t vfDelta, void* srcType, void* targetType, int32_t isReference);
extern void* ext_00403560(void* self, const void* src);
extern void ext_006A6DD2(void* pExceptionObject, void* pThrowInfo);
extern void* ext_004BA270(void);

extern uint32_t mem_00924FE4;

void* fn_005146E0(void* self, void* out_pair, void* src_obj) {
    (void)self;
    void* cast_res = ext_006A6E9E(
        src_obj,
        0,
        reinterpret_cast<void*>(static_cast<uintptr_t>(0x00A2E2F8u)),
        reinterpret_cast<void*>(static_cast<uintptr_t>(0xA40D68u)),
        0);

    if (!cast_res) {
        alignas(8) uint8_t str_buf[32]{};
        alignas(8) uint8_t exc_buf[64]{};
        using StringCtorFn = void* (*)(void*, const char*);
        auto str_ctor = reinterpret_cast<StringCtorFn>(static_cast<uintptr_t>(mem_00924FE4));
        str_ctor(str_buf, reinterpret_cast<const char*>(static_cast<uintptr_t>(0x009432ACu)));
        ext_00403560(exc_buf, str_buf);
        ext_006A6DD2(exc_buf, reinterpret_cast<void*>(static_cast<uintptr_t>(0x009D47A4u)));
    }

    void* type_ptr = ext_004BA270();
    uint8_t* field_ptr = static_cast<uint8_t*>(cast_res) + 0x30;
    void** out = static_cast<void**>(out_pair);
    out[0] = field_ptr;
    out[1] = type_ptr;
    return out_pair;
}
} // namespace lift_00500150
} // namespace lift_005146E0

// [0x00514780] ExprParser::PrimitiveProxyCreator<Chromosome::Descriptor, float, 52>::vfunc_17 (151 bytes)
namespace lift_00514780 {
// @name ExprParser::PrimitiveProxyCreator<Chromosome::Descriptor, float, 52>::vfunc_17
// @class ExprParser::PrimitiveProxyCreator<Chromosome::Descriptor, float, 52>
// @summary Auto-lifted identical-shape clone of 0x00500150 (ExprParser::PrimitiveProxyCreator<NMData::EvolveParams, bool, 29>::vfunc_17).
namespace lift_00500150 {
// @name ExprParser::PrimitiveProxyCreator<NMData::EvolveParams, bool, 29>::vfunc_17
// @class ExprParser::PrimitiveProxyCreator<NMData::EvolveParams, bool, 29>
// @summary Dynamic-casts input to NMData::EvolveParams, throws on failure, else writes bool* at +0x1D and type ptr to out pair.
// @field ExprParser::PrimitiveProxyCreator<NMData::EvolveParams, bool, 29> +0x00 void* field_0x00
// @field ExprParser::PrimitiveProxyCreator<NMData::EvolveParams, bool, 29> +0x04 void* field_0x04


extern void* ext_006A6E9E(void* inptr, int32_t vfDelta, void* srcType, void* targetType, int32_t isReference);
extern void* ext_00403560(void* self, const void* src);
extern void ext_006A6DD2(void* pExceptionObject, void* pThrowInfo);
extern void* ext_004BA270(void);

extern uint32_t mem_00924FE4;

void* fn_00514780(void* self, void* out_pair, void* src_obj) {
    (void)self;
    void* cast_res = ext_006A6E9E(
        src_obj,
        0,
        reinterpret_cast<void*>(static_cast<uintptr_t>(0x00A2E2F8u)),
        reinterpret_cast<void*>(static_cast<uintptr_t>(0xA40D68u)),
        0);

    if (!cast_res) {
        alignas(8) uint8_t str_buf[32]{};
        alignas(8) uint8_t exc_buf[64]{};
        using StringCtorFn = void* (*)(void*, const char*);
        auto str_ctor = reinterpret_cast<StringCtorFn>(static_cast<uintptr_t>(mem_00924FE4));
        str_ctor(str_buf, reinterpret_cast<const char*>(static_cast<uintptr_t>(0x009432ACu)));
        ext_00403560(exc_buf, str_buf);
        ext_006A6DD2(exc_buf, reinterpret_cast<void*>(static_cast<uintptr_t>(0x009D47A4u)));
    }

    void* type_ptr = ext_004BA270();
    uint8_t* field_ptr = static_cast<uint8_t*>(cast_res) + 0x34;
    void** out = static_cast<void**>(out_pair);
    out[0] = field_ptr;
    out[1] = type_ptr;
    return out_pair;
}
} // namespace lift_00500150
} // namespace lift_00514780

// [0x00524F80] ExprParser::PrimitiveProxyCreator<NMData::VariableValue, std::basic_string<char, std::char_traits<char>, std::allocator<char>>, 12>::vfunc_17 (151 bytes)
namespace lift_00524F80 {
// @name ExprParser::PrimitiveProxyCreator<NMData::VariableValue, std::basic_string<char, std::char_traits<char>, std::allocator<char>>, 12>::vfunc_17
// @class ExprParser::PrimitiveProxyCreator<NMData::VariableValue, std::basic_string<char, std::char_traits<char>, std::allocator<char>>, 12>
// @summary Auto-lifted identical-shape clone of 0x00500150 (ExprParser::PrimitiveProxyCreator<NMData::EvolveParams, bool, 29>::vfunc_17).
namespace lift_00500150 {
// @name ExprParser::PrimitiveProxyCreator<NMData::EvolveParams, bool, 29>::vfunc_17
// @class ExprParser::PrimitiveProxyCreator<NMData::EvolveParams, bool, 29>
// @summary Dynamic-casts input to NMData::EvolveParams, throws on failure, else writes bool* at +0x1D and type ptr to out pair.
// @field ExprParser::PrimitiveProxyCreator<NMData::EvolveParams, bool, 29> +0x00 void* field_0x00
// @field ExprParser::PrimitiveProxyCreator<NMData::EvolveParams, bool, 29> +0x04 void* field_0x04


extern void* ext_006A6E9E(void* inptr, int32_t vfDelta, void* srcType, void* targetType, int32_t isReference);
extern void* ext_00403560(void* self, const void* src);
extern void ext_006A6DD2(void* pExceptionObject, void* pThrowInfo);
extern void* ext_00498F90(void);

extern uint32_t mem_00924FE4;

void* fn_00524F80(void* self, void* out_pair, void* src_obj) {
    (void)self;
    void* cast_res = ext_006A6E9E(
        src_obj,
        0,
        reinterpret_cast<void*>(static_cast<uintptr_t>(0x00A2E2F8u)),
        reinterpret_cast<void*>(static_cast<uintptr_t>(0xA40D44u)),
        0);

    if (!cast_res) {
        alignas(8) uint8_t str_buf[32]{};
        alignas(8) uint8_t exc_buf[64]{};
        using StringCtorFn = void* (*)(void*, const char*);
        auto str_ctor = reinterpret_cast<StringCtorFn>(static_cast<uintptr_t>(mem_00924FE4));
        str_ctor(str_buf, reinterpret_cast<const char*>(static_cast<uintptr_t>(0x009432ACu)));
        ext_00403560(exc_buf, str_buf);
        ext_006A6DD2(exc_buf, reinterpret_cast<void*>(static_cast<uintptr_t>(0x009D47A4u)));
    }

    void* type_ptr = ext_00498F90();
    uint8_t* field_ptr = static_cast<uint8_t*>(cast_res) + 0xC;
    void** out = static_cast<void**>(out_pair);
    out[0] = field_ptr;
    out[1] = type_ptr;
    return out_pair;
}
} // namespace lift_00500150
} // namespace lift_00524F80
