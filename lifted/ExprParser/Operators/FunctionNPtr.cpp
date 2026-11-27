// Lifted C++ translation unit: lifted/ExprParser/Operators/FunctionNPtr.cpp
#include "lift_compat.h"

// [0x006A2670] ExprParser::Operators::FunctionNPtr::vfunc_2 (718 bytes)
namespace lift_006A2670 {
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk forwarding to MSVCR80!_CxxThrowException.)
extern void ext_006A6DD2();
// Known callee 0x004ECA40: Vector8::operator[] (Bounds-checked element access for an 8-byte-stride vector). __thiscall(self, index).
extern uint32_t ext_004ECA40(void* self, uint32_t index);
// Known callee 0x0041CF00: Unknown::CopyFromSource_0041CF00 (Copies a (value, object) pair into self.)
extern void* ext_0041CF00(void* self, void* src);
// sub_004ECB40 (247B, not lifted yet). __thiscall(self, out); result is handed on as the "other" operand of ext_0041CF50.
extern void* ext_004ECB40(void* self, void* out);
// Known callee 0x0041CF50: Unknown::assignFromOther_0041CF50 (Self-assignment guarded copy; returns self.)
extern void* ext_0041CF50(void* self, void* other);
// Known callee 0x00401CC0: FwdChildVfunc_78 (releases the sub-object at +0x04 through its vslot 0x78.)
extern void ext_00401CC0(void* self);
// Known callee 0x0048A120: ForEachEntryDispatchVirtual_0048A120 (Walks 8-byte entries [begin, end); dispatches vslot 0x78 on each entry's +4 object.)
extern void ext_0048A120(uint8_t* begin, uint8_t* end);
// _invalid_parameter_noinfo IAT slot (only referenced for the abort path).
extern int mem_00925134;

// Virtual dispatch through the vtable pointer at obj+0. slot_off is the byte offset of the slot (0x30 = vfunc 12).
template <typename R, typename... A>
static R vcall(void* obj, uint32_t slot_off, A... args) {
    void** vtbl = *reinterpret_cast<void***>(obj);
    using Fn = R (__thiscall*)(void*, A...);
    return reinterpret_cast<Fn>(vtbl[slot_off / 4])(obj, args...);
}

static inline void* as_ptr(uint32_t v) {
    return reinterpret_cast<void*>(static_cast<uintptr_t>(v));
}

// @name ExprParser::Operators::FunctionNPtr::vfunc_2
// @class ExprParser::Operators::FunctionNPtr
// @summary Scans arg2 (8-byte entries {value, object}) for the last entry whose object reports type 0x17, builds a 0-2 argument call from the entries above it, assigns the result into the entry below it, then pops arg2 and one 4-byte slot of arg1.
// @field ArgVector +0x04 uint8_t* field_0x04
// @field ArgVector +0x08 uint8_t* field_0x08
void fn_006A2670(void* self, void* arg1, void* arg2) {
    (void)self; // not read by the original code

    // arg1 / arg2 are vectors: +0x4 begin, +0x8 end.
    uint8_t*& a1_begin = lift_field<uint8_t*>(arg1, 0x4);
    uint8_t*& a1_end   = lift_field<uint8_t*>(arg1, 0x8);
    uint8_t*& a2_begin = lift_field<uint8_t*>(arg2, 0x4);
    uint8_t*& a2_end   = lift_field<uint8_t*>(arg2, 0x8);

    // Object pointer (+0x4) of arg2 entry idx, with the original's bounds check.
    auto entry_obj = [&](ptrdiff_t idx) -> void* {
        ptrdiff_t cnt = a2_begin ? ((a2_end - a2_begin) >> 3) : 0;
        if (a2_begin == nullptr || static_cast<uint32_t>(idx) >= static_cast<uint32_t>(cnt)) {
            (void)&mem_00925134; // _invalid_parameter_noinfo; does not return
            std::abort();
        }
        return lift_field<void*>(a2_begin + 8 * idx, 0x4);
    };

    // Need at least two entries.
    ptrdiff_t n = a2_begin ? ((a2_end - a2_begin) >> 3) : 0;
    if (a2_begin == nullptr || n < 2) {
        ext_006A6DD2();
        return;
    }

    // Scan downward for the last entry whose object reports type 0x17 (vfunc 12).
    ptrdiff_t k = n - 1;
    for (; k >= 0; --k) {
        if (vcall<int>(entry_obj(k), 0x30) == 0x17) {
            break;
        }
    }
    if (k < 1) {
        ext_006A6DD2();
        return;
    }
    // Entry k must still report 0x17.
    if (vcall<int>(entry_obj(k), 0x30) != 0x17) {
        ext_006A6DD2();
        return;
    }

    // Ref = {value @0, obj @4} built from entry k-1.
    alignas(8) uint8_t ref[8] = {};
    void*& ref_obj = lift_field<void*>(ref, 0x4);
    ptrdiff_t km1 = k - 1;
    uint32_t v1 = ext_004ECA40(arg2, static_cast<uint32_t>(km1));
    ext_0041CF00(ref, as_ptr(v1));

    // If ref.obj reports true (vfunc 36), copy-assign through a temp and release the temp.
    if (vcall<uint8_t>(ref_obj, 0x90) != 0) {
        alignas(8) uint8_t tmp[8] = {};
        void* tmp_ret = ext_004ECB40(ref, tmp);
        ext_0041CF50(ref, tmp_ret);
        void*& tmp_obj = lift_field<void*>(tmp, 0x4);
        if (tmp_obj != nullptr) {
            vcall<void>(tmp_obj, 0x78, static_cast<void*>(tmp));
        }
    }

    // r = ref.obj->vfunc_21(&ref) must equal the number of entries above k-1 (N - k - 1).
    int32_t r = vcall<int32_t>(ref_obj, 0x54, static_cast<void*>(ref));
    int32_t rem = static_cast<int32_t>(n - k - 1);
    if (r != rem) {
        ext_006A6DD2();
        return;
    }

    // Element k-1 is the assignment target.
    void* target = as_ptr(ext_004ECA40(arg2, static_cast<uint32_t>(km1)));

    if (r == 1) {
        void* o = ref_obj;
        uint32_t opk1 = ext_004ECA40(arg2, static_cast<uint32_t>(k + 1));
        alignas(8) uint8_t retbuf[8] = {};
        void* res = vcall<void*>(o, 0xC0, static_cast<void*>(retbuf), static_cast<void*>(ref), as_ptr(opk1));
        ext_0041CF50(target, res);
        ext_00401CC0(retbuf);
    } else if (r == 2) {
        void* o = ref_obj;
        uint32_t opk2 = ext_004ECA40(arg2, static_cast<uint32_t>(k + 2));
        uint32_t opk1 = ext_004ECA40(arg2, static_cast<uint32_t>(k + 1));
        alignas(8) uint8_t retbuf[8] = {};
        void* res = vcall<void*>(o, 0xC4, static_cast<void*>(retbuf), static_cast<void*>(ref), as_ptr(opk1), as_ptr(opk2));
        ext_0041CF50(target, res);
        ext_00401CC0(retbuf);
    } else if (r != 0) {
        ext_006A6DD2();
        return;
    }

    // Pop rem+1 entries from arg2, dispatching each one's object through ext_0048A120.
    for (int32_t i = 0; i < rem + 1; ++i) {
        if (a2_begin != nullptr && ((a2_end - a2_begin) >> 3) != 0) {
            ext_0048A120(a2_end - 8, a2_end);
            a2_end -= 8;
        }
    }

    // Pop one 4-byte slot from arg1 when it is non-empty.
    if (a1_begin != nullptr && ((a1_end - a1_begin) >> 2) != 0) {
        a1_end -= 4;
    }

    // Release ref.
    if (ref_obj != nullptr) {
        vcall<void>(ref_obj, 0x78, static_cast<void*>(ref));
    }
}
} // namespace lift_006A2670
