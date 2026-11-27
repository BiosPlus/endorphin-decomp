// Lifted C++ translation unit: lifted/ExprParser/Operators/FunctionN.cpp
#include "lift_compat.h"
#include <stdexcept>

// [0x006A2420] ExprParser::Operators::FunctionN::vfunc_2 (590 bytes)
namespace lift_006A2420 {
// Known callee 0x004ECA40: Vector8::operator[] (bounds-checked element access, returns entry address).
extern void* ext_004ECA40(void* self, uint32_t index);
// Known callee 0x00699930: identical-shape clone of NMData::RealChannel::vfunc_9 (returns element count).
extern int32_t ext_00699930(void* self);
// Known callee 0x004ECB40: unrecovered helper, takes entry address and out-slot, returns pointer.
extern void* ext_004ECB40(void* self, uint32_t* out);
// Known callee 0x00699950: bounds-checked element assignment (Unknown::assignElement_00699950).
extern void* ext_00699950(void* self, int32_t index, void* other);
// Known callee 0x00699FA0: unrecovered helper, (self, n).
extern void ext_00699FA0(void* self, int32_t n);
// Known callee 0x006997D0: unrecovered helper, (self) returns pointer.
extern void* ext_006997D0(void* self);
// Known callee 0x0041CF50: Unknown::assignFromOther_0041CF50 (self-assignment guarded copy).
extern void* ext_0041CF50(void* self, void* other);
// Known callee 0x0048A120: ForEachEntryDispatchVirtual_0048A120 (cdecl, 3 args as pushed by caller).
extern void ext_0048A120(void* begin, void* end, void* ctx);
// Known callee 0x006A6E9E: thunk_MSVCR80___RTDynamicCast (cdecl, 5 args).
extern void* ext_006A6E9E(void* inptr, ptrdiff_t vfDelta, void* srcType, void* targetType, int isRef);
// RTTI type descriptors referenced by the dynamic_cast.
extern int mem_00A2E2F8;
extern int mem_00AA3D80;
// IAT slot for MSVCR80!_invalid_parameter_noinfo (bounds-check failure handler).
extern int mem_00925134;

// @name ExprParser::Operators::FunctionN::vfunc_2
// @class ExprParser::Operators::FunctionN
// @summary Walks the function's argument vector (8-byte entries, object at +4), finds the last argument reporting kind 6, dynamic-casts its child result, then shifts the remaining arguments into the child and trims both vectors.
// @field ExprParser::Operators::FunctionN +0x04 uint8_t* argsBegin
// @field ExprParser::Operators::FunctionN +0x08 uint8_t* argsEnd

namespace {

inline uintptr_t rd32(const void* base, ptrdiff_t off) {
    return lift_field<uint32_t>(base, off);
}

inline void* ptr_at(const void* base, ptrdiff_t off) {
    return reinterpret_cast<void*>(rd32(base, off));
}

// Virtual slot at byte offset `slot` of the object's vtable (32-bit layout).
inline void* vslot(void* obj, ptrdiff_t slot) {
    return reinterpret_cast<void*>(rd32(ptr_at(obj, 0), slot));
}

inline int32_t vcall_int(void* obj, ptrdiff_t slot) {
    using Fn = int32_t (*)(void*);
    return reinterpret_cast<Fn>(vslot(obj, slot))(obj);
}

inline void* vcall_ptr_arg(void* obj, ptrdiff_t slot, void* arg) {
    using Fn = void* (*)(void*, void*);
    return reinterpret_cast<Fn>(vslot(obj, slot))(obj, arg);
}

// Element count of the 8-byte-stride vector at self+4 (begin) / self+8 (end).
inline int32_t arg_count(const void* self) {
    uint32_t b = lift_field<uint32_t>(self, 4);
    uint32_t e = lift_field<uint32_t>(self, 8);
    if (b == 0) {
        return 0;
    }
    return static_cast<int32_t>(e - b) >> 3;
}

// Bounds-checked entry address (the original calls _invalid_parameter_noinfo on failure).
inline void* arg_entry(void* self, int32_t idx) {
    uint32_t b = lift_field<uint32_t>(self, 4);
    if (b == 0 || static_cast<uint32_t>(idx) >= static_cast<uint32_t>(arg_count(self))) {
        (void)&mem_00925134;  // original: call [0x925134] (_invalid_parameter_noinfo)
        std::abort();
    }
    return reinterpret_cast<void*>(static_cast<uintptr_t>(b) + 8u * static_cast<uint32_t>(idx));
}

} // namespace

// `outVec` (first stack arg) is a vector of 4-byte entries whose last entry is dropped at the end.
// `self` (second stack arg) is the FunctionN whose argument vector is walked.
void fn_006A2420(void* outVec, void* self) {
    const int32_t count = arg_count(self);
    if (lift_field<uint32_t>(self, 4) == 0 || count < 1) {
        throw std::runtime_error("FunctionN: empty argument list");
    }

    // Find the last argument whose kind (vslot 0x30) is 6.
    int32_t i = count - 1;
    for (; i >= 0; --i) {
        void* obj = ptr_at(arg_entry(self, i), 4);
        if (vcall_int(obj, 0x30) == 6) {
            break;
        }
    }
    if (i < 0) {
        throw std::runtime_error("FunctionN: no matching argument");
    }
    {
        void* obj = ptr_at(arg_entry(self, i), 4);
        if (vcall_int(obj, 0x30) != 6) {
            throw std::runtime_error("FunctionN: argument kind changed");
        }
    }

    void* elem = ext_004ECA40(self, static_cast<uint32_t>(i));
    void* child = ptr_at(elem, 4);
    void* x = vcall_ptr_arg(child, 0x60, elem);
    void* target = ext_006A6E9E(x, 0, &mem_00A2E2F8, &mem_00AA3D80, 0);
    if (target == nullptr) {
        throw std::runtime_error("FunctionN: dynamic_cast failed");
    }

    i += 1;
    const int32_t n2 = ext_00699930(target);
    const int32_t rem = count - i;
    if (rem > n2) {
        throw std::runtime_error("FunctionN: argument count overflow");
    }

    for (int32_t k = 0; k < rem; ++k) {
        uint32_t tmp = 0;
        void* entry = arg_entry(self, i + k);
        void* other = ext_004ECB40(entry, &tmp);
        (void)ext_00699950(target, k, other);
    }

    if (rem < n2) {
        ext_00699FA0(target, rem);
    }
    void* other = ext_006997D0(target);
    (void)ext_0041CF50(elem, other);

    // Pop `rem` trailing entries from the argument vector.
    for (int32_t j = rem; j > 0; --j) {
        uint32_t b = lift_field<uint32_t>(self, 4);
        if (b == 0) {
            continue;
        }
        uint32_t e = lift_field<uint32_t>(self, 8);
        if ((static_cast<int32_t>(e - b) >> 3) == 0) {
            continue;
        }
        ext_0048A120(reinterpret_cast<void*>(static_cast<uintptr_t>(e - 8)),
                     reinterpret_cast<void*>(static_cast<uintptr_t>(e)), self);
        lift_field<uint32_t>(self, 8) = e - 8;
    }

    // Trim the last 4-byte entry of the out vector.
    uint32_t ob = lift_field<uint32_t>(outVec, 4);
    if (ob != 0) {
        uint32_t oe = lift_field<uint32_t>(outVec, 8);
        if ((static_cast<int32_t>(oe - ob) >> 2) != 0) {
            lift_field<uint32_t>(outVec, 8) = oe - 4;
        }
    }
}
} // namespace lift_006A2420
