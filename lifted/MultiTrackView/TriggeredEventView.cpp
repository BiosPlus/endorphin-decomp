// Lifted C++ translation unit: lifted/MultiTrackView/TriggeredEventView.cpp
#include "lift_compat.h"
#include <new>
#include <string>
// Callee sub_0043DCF0 (99B): single stack arg (-1), no caller cleanup, returns a pointer in eax.
extern "C" void* ext_0043DCF0(int32_t arg);

extern "C" void* ext_0043DCF0(int32_t arg);
// @name MultiTrackView::TriggeredEventView::GetTypeName
// @class MultiTrackView::TriggeredEventView
// @summary Constructs std::string "TriggeredEventView" in the caller's return slot and returns that slot (self is unused).
// @field MultiTrackView::TriggeredEventView +0x00 (unused) self is not dereferenced
void* fn_004602B0(void* self, void* ret_slot) {
    (void)self;
    std::string* out = static_cast<std::string*>(ret_slot);
    new (out) std::string("TriggeredEventView");
    return out;
}
// Callees use MSVC thiscall (ecx = member object, one stack argument).
// Portable form: the object is passed explicitly as the first parameter.
extern "C" void ext_00460540(void* self, void* arg);
// Known callee 0x006A5E72: thunk_MFC80_ord_6090 (IAT jump thunk forwarding to MFC80!ord_6090.)
extern "C" void ext_006A5E72(void* self, uint32_t arg);

// Portable form: the object is passed explicitly as the first parameter.
extern "C" void ext_00460540(void* self, void* arg);
// Known callee 0x006A5E72: thunk_MFC80_ord_6090 (IAT jump thunk forwarding to MFC80!ord_6090.)
extern "C" void ext_006A5E72(void* self, uint32_t arg);
// @field MultiTrackView::TriggeredEventView +0x00 (unused) self is not dereferenced
void fn_0045D8B0(void* self, void* ret_slot) {
    (void)self;
    void* obj = ext_0043DCF0(-1);
    int32_t value = lift_field<int32_t>(obj, 0x4C);
    lift_field<uint32_t>(ret_slot, 0) = 0u;
    lift_field<int32_t>(ret_slot, 4) = value + 9;
}
#include <cstdint>

// [0x0045E470] MultiTrackView::TriggeredEventView::vfunc_80 (36 bytes)
// @name MultiTrackView::TriggeredEventView::ForwardToMemberWithArg
// @class MultiTrackView::TriggeredEventView
// @summary Forwards the argument to the member object at +0x2D0 via ext_00460540, then calls ext_006A5E72 on that member with 5.
// @field MultiTrackView::TriggeredEventView +0x2D0 void* field_0x2D0
void fn_0045E470(void* self, void* arg) {
    void* member = lift_field<void*>(self, 0x2D0);
    ext_00460540(member, arg);
    member = lift_field<void*>(self, 0x2D0);
    ext_006A5E72(member, 5u);
}

// [0x0043CAB0] MultiTrackView::TriggeredEventView::vfunc_69 (66 bytes)
namespace lift_0043CAB0 {
extern void ext_0041C710();
// Known callee 0x006A5DB2: thunk_MFC80_ord_5073 (IAT jump thunk forwarding to MFC80!ord_5073.)
extern void ext_006A5DB2();

// @name MultiTrackView::TriggeredEventView::vfunc_69
// @class MultiTrackView::TriggeredEventView
// @summary If a1 == 0x2A3 and the sub-object at +0x64 passes ext_0041C710, return 1; otherwise forward all four args to the MFC80 base handler.
// @field MultiTrackView::TriggeredEventView +0x64 uint8_t field_0x64
uint32_t fn_0043CAB0(void* self, uint32_t a1, uint32_t a2, uint32_t a3, uint32_t a4) {
    using SubCheckFn = uint8_t (*)(void*);
    using ForwardFn = uint32_t (*)(void*, uint32_t, uint32_t, uint32_t, uint32_t);

    if (a1 == 0x2A3) {
        void* sub = reinterpret_cast<uint8_t*>(self) + 0x64;
        if (reinterpret_cast<SubCheckFn>(ext_0041C710)(sub) != 0) {
            return 1;
        }
    }

    return reinterpret_cast<ForwardFn>(ext_006A5DB2)(self, a1, a2, a3, a4);
}
} // namespace lift_0043CAB0

// [0x0045DAC0] MultiTrackView::TriggeredEventView::vfunc_85 (51 bytes)
namespace lift_0045DAC0 {
// Global-value lookup: returns the int32 stored in mem_00AD7CD8.
extern int32_t ext_00468180(void);
// Nested-field lookup: returns a 32-bit object pointer (this+0x18 -> +0xC chain).
extern uint32_t ext_00468660(uint32_t this_ptr);
// Forwarding call: thiscall on the object from ext_00468180(), one int32 stack arg.
extern void ext_004686A0(void* this_ptr, int32_t value);

// @name MultiTrackView::TriggeredEventView::vfunc_85
// @class MultiTrackView::TriggeredEventView
// @summary Queries an object's virtual slot, adds a signed 16-bit argument, clamps the sum at zero, and forwards it to another global-derived object.
void fn_0045DAC0(void* self, int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3) {
    (void)self;
    (void)arg0;
    (void)arg2;
    (void)arg3;

    // ecx = ext_00468180(); obj = ext_00468660(ecx)
    const uint32_t global_val = static_cast<uint32_t>(ext_00468180());
    const uint32_t obj_addr = ext_00468660(global_val);
    void* obj = reinterpret_cast<void*>(static_cast<uintptr_t>(obj_addr));

    // Virtual call through vtable slot at byte offset 0x9C (32-bit vtable => index 39).
    void** vtable = *reinterpret_cast<void***>(obj);
    constexpr std::size_t kSlotIndex = 0x9C / 4;
    using QueryFn = int32_t (*)(void*);
    const int32_t queried = reinterpret_cast<QueryFn>(vtable[kSlotIndex])(obj);

    // Sign-extend the low 16 bits of the second stack argument and add (wrapping add).
    const int32_t delta = static_cast<int32_t>(static_cast<int16_t>(arg1));
    int32_t sum = static_cast<int32_t>(static_cast<uint32_t>(queried) + static_cast<uint32_t>(delta));

    // Clamp negative results to zero.
    if (sum < 0) {
        sum = 0;
    }

    // Forward to the object returned by a second ext_00468180() call.
    const uint32_t target_addr = static_cast<uint32_t>(ext_00468180());
    ext_004686A0(reinterpret_cast<void*>(static_cast<uintptr_t>(target_addr)), sum);
}
} // namespace lift_0045DAC0

// [0x004602B0] MultiTrackView::TriggeredEventView::vfunc_6_off_254 (34 bytes)
namespace lift_004602B0 {
extern uint32_t mem_00924FE4;     // IAT slot: std::basic_string<char>::basic_string(const char*, const allocator&)
extern const char mem_009381E8[]; // .rdata C-string literal passed to the string constructor

// @name MultiTrackView::TriggeredEventView::vfunc_6_off_254
// @class MultiTrackView::TriggeredEventView
// @summary Constructs a std::string from the literal at 0x009381E8 in the caller-supplied out object and returns out; the vtable this pointer is unused.
void* __stdcall fn_004602B0(void* out) {
    using StringCtorFn = void(__thiscall*)(void* self, const char* str, const void* alloc);
    auto ctor = reinterpret_cast<StringCtorFn>(static_cast<uintptr_t>(mem_00924FE4));
    ctor(out, mem_009381E8, nullptr);
    return out;
}
} // namespace lift_004602B0

// [0x0045DEB0] MultiTrackView::TriggeredEventView::vfunc_81 (242 bytes)
namespace lift_0045DEB0 {
// Callees (differentially tested against endorphin.exe; do not inline)
extern uint32_t ext_00594000(void);                          // sub_00594000: returns global object pointer (mem_00B40D08)
extern uint32_t ext_00468180(void);                          // sub_00468180: returns global object pointer (mem_00AD7CD8)
extern uint32_t ext_00468660(void* self);                    // sub_00468660: auto-lifted clone of AVIIO::vfunc_23
extern int32_t  ext_00477F30(void* self);                    // getMaxField0x160: max int32 at +0x160 over vector at +0x30 (0 if none > 0)
extern void     ext_0043DD60(void* self, double a, double b); // Unknown::clampAndDispatchFloatPair
extern int32_t  ext_006A6DE0(double v);                      // sub_006A6DE0: takes value from FPU stack, returns int32

// Data
extern const double mem_00937FC0;  // .rdata double 1.05 (qword 0x3FF0CCCCC0000000)
extern uintptr_t    mem_00925688;  // IAT slot: USER32!InvalidateRect

static inline void* as_ptr(uint32_t v) {
    return reinterpret_cast<void*>(static_cast<uintptr_t>(v));
}

// @name MultiTrackView::TriggeredEventView::vfunc_81
// @class MultiTrackView::TriggeredEventView
// @summary Computes a clamped max of four int values (ebx, edi, esi, vfunc result - 1), scales it by 1.05 via sub_006A6DE0 (default 300 if zero), clamps to >= 300, dispatches it to clampAndDispatchFloatPair, then invalidates the owning window.
// @field MultiTrackView::TriggeredEventView +0x20 HWND field_0x20
void fn_0045DEB0(void* self) {
    // ebx = sub_00594000()->[+0x26c]->[+0x1ec]
    void* root1 = as_ptr(ext_00594000());
    int32_t ebx = lift_field<int32_t>(as_ptr(lift_field<uint32_t>(root1, 0x26c)), 0x1ec);

    // edi = sub_00594000()->[+0x26c]->[+0x1e4]
    void* root2 = as_ptr(ext_00594000());
    int32_t edi = lift_field<int32_t>(as_ptr(lift_field<uint32_t>(root2, 0x26c)), 0x1e4);

    // esi = getMaxField0x160(sub_00594000()->[+0x26c])
    void* root3 = as_ptr(ext_00594000());
    int32_t esi = ext_00477F30(as_ptr(lift_field<uint32_t>(root3, 0x26c)));

    // n = obj->vfunc[+0xa0]() - 1, where obj = sub_00468660(sub_00468180())
    void* obj = as_ptr(ext_00468660(as_ptr(ext_00468180())));
    void** vtbl = lift_field<void**>(obj, 0);
    using VFn = int32_t (*)(void*);
    int32_t n = reinterpret_cast<VFn>(lift_field<void*>(vtbl, 0xa0))(obj) - 1;

    // Chain of signed max operations
    int32_t a = (esi < n) ? n : esi;
    int32_t b = (edi < a) ? a : edi;
    int32_t c = (ebx < b) ? b : ebx;

    // Scale: c * 1.05 via sub_006A6DE0, or 300 when c == 0; then clamp to >= 300
    int32_t r;
    if (c != 0) {
        r = ext_006A6DE0(static_cast<double>(c) * mem_00937FC0);
    } else {
        r = 300;
    }
    int32_t d = (r < 300) ? 300 : r;

    // clampAndDispatchFloatPair(self, 0.0, (double)d)
    ext_0043DD60(self, 0.0, static_cast<double>(d));

    // InvalidateRect(self->[+0x20], NULL, TRUE)
    using InvalidateRectFn = int32_t (*)(void*, const void*, int32_t);
    auto invalidate = reinterpret_cast<InvalidateRectFn>(mem_00925688);
    invalidate(as_ptr(lift_field<uint32_t>(self, 0x20)), nullptr, 1);
}
} // namespace lift_0045DEB0

// [0x0043C6D0]
namespace lift_0043C6D0 {
// @name MultiTrackView::TriggeredEventView::vfunc_79
// @class MultiTrackView::TriggeredEventView
// @summary Allocates and registers nine view-element objects into the container at +0x64.
// @field MultiTrackView::TriggeredEventView +0x64 uint8_t field_0x64


extern void* ext_006A5C62(uint32_t size);
extern void __thiscall ext_0041C9A0(void* self, uint32_t index, void* item);
extern void* __thiscall ext_00442990(void* self, void* arg1, void* arg2);
extern void* __thiscall ext_00442B60(void* self, void* arg1, void* arg2);
extern void* __thiscall ext_00442B80(void* self, void* arg1, void* arg2);
extern void* __thiscall ext_00442BB0(void* self, void* arg1, void* arg2);
extern void* __thiscall ext_00442BD0(void* self, void* arg1, void* arg2);
extern void* __thiscall ext_00442C40(void* self, void* arg1, void* arg2);
extern void* __thiscall ext_00443960(void* self, void* arg1, void* arg2);
extern void* __thiscall ext_004436B0(void* self, void* arg1, void* arg2);
extern void* __thiscall ext_00443700(void* self, void* arg1, void* arg2);

void __thiscall fn_0043C6D0(void* self) {
    void* container = reinterpret_cast<uint8_t*>(self) + 0x64;

    using CtorFn = void* (__thiscall*)(void*, void*, void*);
    struct Entry {
        uint32_t size;
        CtorFn ctor;
    };

    const Entry entries[] = {
        {0x14, ext_00442990},
        {0x0C, ext_00442B60},
        {0x18, ext_00442B80},
        {0x0C, ext_00442BB0},
        {0x0C, ext_00442BD0},
        {0x0C, ext_00442C40},
        {0x38, ext_00443960},
        {0x14, ext_004436B0},
        {0x14, ext_00443700},
    };

    for (uint32_t i = 0; i < 9; ++i) {
        void* mem = ext_006A5C62(entries[i].size);
        void* obj = mem ? entries[i].ctor(mem, container, self) : nullptr;
        ext_0041C9A0(container, i, obj);
    }
}
} // namespace lift_0043C6D0

// [0x0045F0A0] MultiTrackView::TriggeredEventView::vfunc_3_off_24C (176 bytes)
namespace lift_0045F0A0 {
// Callees (differentially tested against endorphin.exe; do not inline).
// MSVC thiscall: ecx = object, remaining args on the stack. Portable form passes `this` first.
// sub_0045E920: this-adjustor thunk (+0x258) tail-calling sub_0045E700; returns an object pointer.
extern void* ext_0045E920(void* self, void* arg);
// sub_0045E9D0: 132-byte helper taking one stack arg.
extern void ext_0045E9D0(void* self, void* arg);
// eraseInt32Range: erases [first,last) from the int32 buffer at self; writes 2-pointer result to out.
extern void ext_00596660(void* self, void** out, void* a2, int32_t* first, void* a4, int32_t* last);
// GetPointerChainDword10: returns the DWORD at +0x10 of the pointer at self+0x44, or 0 if null.
extern uint32_t ext_004407B0(void* self);
// sub_00440730: 49-byte helper taking only this.
extern void ext_00440730(void* self);
// MSVCR80!__RTDynamicCast via IAT thunk: (in, vfDelta, srcType, targetType, isReference).
extern void* ext_006A6E9E(uintptr_t in, int32_t vf_delta, const void* src_type, const void* target_type, int32_t is_reference);

// Data
extern uint32_t mem_00925134;  // IAT slot: MSVCR80!_invalid_parameter_noinfo
extern int mem_00A2E968;   // .data u32 0x009908FC (RTTI type descriptor slot)
extern int mem_00A2E99C;   // .data u32 0x009908FC (RTTI type descriptor slot)

// @name MultiTrackView::TriggeredEventView::vfunc_3_off_24C
// @class MultiTrackView::TriggeredEventView
// @summary Calls a virtual on arg, re-registers arg with the object at this-0x24C, clears the int32 range at this-0x1BC, and if the thunk returns a non-null object, RTTI-casts a value from it and runs two helpers.
// @field MultiTrackView::TriggeredEventView +0xFFFFFFFC void* field_0xFFFFFFFC
// @field MultiTrackView::TriggeredEventView +0x1B4 int32_t* field_0x1B4
// @field MultiTrackView::TriggeredEventView +0x1B8 int32_t* field_0x1B8
void fn_0045F0A0(void* self, void* arg) {
    uint8_t* base = static_cast<uint8_t*>(self);

    // arg->vtable[0xFC / 4]() — result discarded.
    void** arg_vtable = lift_field<void**>(arg, 0);
    reinterpret_cast<void (*)(void*)>(arg_vtable[63])(arg);

    // ebp = thunk(this - 0x24C, arg)
    void* found = ext_0045E920(base - 0x24C, arg);

    // Range vector embedded at this - 0x1BC: begin at +4, end at +8.
    uint8_t* range = base - 0x1BC;
    int32_t* begin = lift_field<int32_t*>(range, 4);
    int32_t* end = lift_field<int32_t*>(range, 8);
    if (begin > end) {
        // Range precondition failed: MSVCR80!_invalid_parameter_noinfo (IAT slot), no return value.
        reinterpret_cast<void (*)()>(static_cast<uintptr_t>(mem_00925134))();
    }

    // eraseInt32Range(range, out, range, begin, range, end) — clears [begin, end).
    void* out[2] = {nullptr, nullptr};
    ext_00596660(range, out, range, begin, range, end);

    if (found != nullptr) {
        // RTTI cast of the DWORD from the chain lookup on `found`.
        const uint32_t value = ext_004407B0(found);
        ext_006A6E9E(static_cast<uintptr_t>(value), 0,
                     &mem_00A2E99C, &mem_00A2E968, 0);
        ext_00440730(found);
        ext_0045E9D0(base + 0x0C, arg);
    }

    // Tail: (this - 4)->vtable[1](this - 4) — virtual call on the sub-object at this-4.
    uint8_t* sub = base - 4;
    void** sub_vtable = lift_field<void**>(sub, 0);
    reinterpret_cast<void (*)(void*)>(sub_vtable[1])(sub);
}
} // namespace lift_0045F0A0

// [0x0045FB00]
namespace lift_0045FB00 {
// @name MultiTrackView::TriggeredEventView::vfunc_86
// @class MultiTrackView::TriggeredEventView
// @summary Formats event label strings into a vector and returns the selected field value.
// @field MultiTrackView::TriggeredEventView +0x258 void* field_0x258


void* __cdecl ext_00404F00(void* out_str, int32_t value);
void __thiscall ext_0043F9E0(void* self, void* value);
uint32_t __thiscall ext_004407C0(void* self);
int32_t __thiscall ext_00441020(void* self);
int32_t __thiscall ext_00441040(void* self);
void* __thiscall ext_0045E690(void* self, void* key);
void* __cdecl ext_006A6E9E(void* ptr, int32_t vf_delta, void* src_type, void* dst_type, int32_t is_ref);

extern uint32_t mem_009242F0;
extern uint32_t mem_009242F4;
extern uint32_t mem_00924300;
extern uint32_t mem_00924ED0;
extern uint32_t mem_00924FD4;
extern uint32_t mem_00924FD8;
extern uint32_t mem_00924FE0;
extern uint32_t mem_00924FE4;
extern uint32_t mem_00924FF0;
extern uint32_t mem_00924FF4;

namespace {
using str_ctor_cstr_t = void* (__thiscall*)(void*, const char*);
using str_ctor_copy_t = void* (__thiscall*)(void*, const void*);
using str_cstr_t = const char* (__thiscall*)(const void*);
using str_assign_cstr_t = void* (__thiscall*)(void*, const char*);
using str_append_cstr_t = void* (__thiscall*)(void*, const char*);
using str_append_str_t = void* (__thiscall*)(void*, const void*);
using str_dtor_t = void (__thiscall*)(void*);
using cstr_ctor_t = void* (__thiscall*)(void*, const char*);
using cstr_dtor_t = void (__thiscall*)(void*);
using cstr_get_t = const char* (__thiscall*)(void*);

inline void push_cstr(void* vec, const void* std_str) {
    uint8_t cstr[8];
    const char* s = reinterpret_cast<str_cstr_t>(mem_00924FF0)(std_str);
    reinterpret_cast<cstr_ctor_t>(mem_009242F0)(cstr, s);
    ext_0043F9E0(vec, cstr);
    reinterpret_cast<cstr_dtor_t>(mem_009242F4)(cstr);
}

inline void append_int(void* std_str, int32_t val) {
    uint8_t tmp[32];
    void* p = ext_00404F00(tmp, val);
    reinterpret_cast<str_append_str_t>(mem_00924FD8)(std_str, p);
    reinterpret_cast<str_dtor_t>(mem_00924FF4)(tmp);
}
} // namespace

uint32_t __thiscall fn_0045FB00(void* self, void* arg1, void* arg2) {
    void* edi = ext_0045E690(&lift_field<uint8_t>(self, 0x258), arg1);
    uint8_t str[32];

    if (edi == nullptr) {
        void* cast_res = ext_006A6E9E(
            arg1,
            0,
            reinterpret_cast<void*>(0x00A2F6F8),
            reinterpret_cast<void*>(0x00A30548),
            0
        );
        if (cast_res != nullptr) {
            reinterpret_cast<str_ctor_cstr_t>(mem_00924FE4)(str, reinterpret_cast<const char*>(0x00938018));
            push_cstr(arg2, str);

            reinterpret_cast<str_assign_cstr_t>(mem_00924FD4)(str, reinterpret_cast<const char*>(0x00938010));
            append_int(str, ext_00441020(arg1));
            push_cstr(arg2, str);

            uint32_t res = ext_004407C0(arg1);
            reinterpret_cast<str_dtor_t>(mem_00924FF4)(str);
            return res;
        } else {
            void* p = lift_field<void*>(arg1, 0x44);
            const char* s = reinterpret_cast<cstr_get_t>(mem_00924300)(&lift_field<uint8_t>(p, 0x8));
            reinterpret_cast<str_ctor_cstr_t>(mem_00924FE4)(str, s);
            push_cstr(arg2, str);

            int32_t v1 = ext_00441020(arg1);
            int32_t v2 = ext_00441040(arg1);
            if (v1 != v2) {
                reinterpret_cast<str_assign_cstr_t>(mem_00924FD4)(str, reinterpret_cast<const char*>(0x00938004));
                append_int(str, ext_00441020(arg1));
                reinterpret_cast<str_append_cstr_t>(mem_00924ED0)(str, reinterpret_cast<const char*>(0x0092F150));
                append_int(str, ext_00441040(arg1));
                push_cstr(arg2, str);
            }

            uint32_t res = ext_004407C0(arg1);
            reinterpret_cast<str_dtor_t>(mem_00924FF4)(str);
            return res;
        }
    } else {
        reinterpret_cast<str_ctor_copy_t>(mem_00924FE0)(str, &lift_field<uint8_t>(arg1, 0xC));
        push_cstr(arg2, str);

        using vfn_t = int32_t(__thiscall*)(void*);
        void** vtable = *reinterpret_cast<void***>(edi);
        int32_t kind = reinterpret_cast<vfn_t>(vtable[0xF8 / sizeof(void*)])(edi);
        if (kind == 0 || kind == 3 || kind == 5) {
            reinterpret_cast<str_assign_cstr_t>(mem_00924FD4)(str, reinterpret_cast<const char*>(0x00938010));
            append_int(str, lift_field<int32_t>(edi, 0x15C));
        } else {
            reinterpret_cast<str_assign_cstr_t>(mem_00924FD4)(str, reinterpret_cast<const char*>(0x00938004));
            append_int(str, lift_field<int32_t>(edi, 0x15C));
            reinterpret_cast<str_append_cstr_t>(mem_00924ED0)(str, reinterpret_cast<const char*>(0x0092F150));
            append_int(str, lift_field<int32_t>(edi, 0x160));
        }

        push_cstr(arg2, str);
        uint32_t res = ext_004407C0(arg1);
        reinterpret_cast<str_dtor_t>(mem_00924FF4)(str);
        return res;
    }
}
} // namespace lift_0045FB00
