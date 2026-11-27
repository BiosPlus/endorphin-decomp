// Lifted C++ translation unit: lifted/NMData/BackGroundData.cpp
#include "lift_compat.h"
#include <new>
#include <string>
extern "C" const char* mem_00A9ED98;
// Callee sub_005A7FA0 takes (arg, 0); its full signature is not yet recovered.
extern "C" void ext_005A7FA0(void* arg, int flag);

extern "C" void ext_005A7FA0(void* arg, int flag);
// @name NMData::BackGroundData::vfunc_6
// @class NMData::BackGroundData
// @summary Returns a std::string (via hidden out-pointer) constructed from the C string at global mem_00A9ED98; this is unused.
std::string* fn_005A98F0(void* self, std::string* out) {
    (void)self;
    new (out) std::string(mem_00A9ED98);
    return out;
}
#include <cstdint>

// [0x0059DD70] NMData::BackGroundData::vfunc_4_off_10 (40 bytes)
// @name NMData::BackGroundData::vfunc_4_off_10
// @class NMData::BackGroundData
// @summary Scales the float at +0x4dc by the float pointed to by the argument and forwards the product to virtual slot 0x64 of the sub-object at this-0x0C (stdcall, ret 4; ECX = this).
// @field NMData::BackGroundData +0x4dc float field_0x4dc
void fn_0059DD70(void* self, const float* scale) {
    const float product = lift_field<float>(self, 0x4dc) * *scale;
    uint8_t* base = static_cast<uint8_t*>(self) - 0x0C;
    void** vtbl = *reinterpret_cast<void***>(base);
    void* slotAddr = *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(vtbl) + 0x64);
    auto slot = reinterpret_cast<void (*)(void*, float)>(slotAddr);
    slot(base, product);
}

// [0x005A9960] NMData::BackGroundData::vfunc_1 (15 bytes)
// @name NMData::BackGroundData::vfunc_1
// @class NMData::BackGroundData
// @summary Stdcall (ret 4) thunk: forwards its single argument to ext_005A7FA0 together with a zero flag.
void fn_005A9960(void* arg) {
    ext_005A7FA0(arg, 0);
}

// [0x005A5400]
namespace lift_005A5400 {
// Imports / externals used by this function.
extern void ext_00479C80(void* self, void* a1, uint32_t a2, void* a3, uint32_t a4,
                             void* a5, void* a6, void* a7);
extern void (*mem_00925134)(); // MSVCR80!_invalid_parameter_noinfo (IAT slot)

// @name NMData::BackGroundData::vfunc_6_off_4
// @class NMData::BackGroundData
// @summary Validates the argument's range fields (+4 <= +8), then forwards the argument and this-owned state to ext_00479C80.
// @field NMData::BackGroundData +0x540 void* field_0x540
// @field NMData::BackGroundData +0x544 void* field_0x544
void fn_005A5400(void* self, void* arg) {
    void* ebp = lift_field<void*>(self, 0x544);
    void* esi = reinterpret_cast<uint8_t*>(self) + 0x540;
    uint32_t ebx = lift_field<uint32_t>(arg, 0x8);

    if (lift_field<uint32_t>(arg, 0x4) > ebx) {
        mem_00925134(); // _invalid_parameter_noinfo; does not return
    }

    uint32_t local = lift_field<uint32_t>(ebp, 0);

    ext_00479C80(arg, arg, ebx, esi, local, esi, ebp, arg);
}
} // namespace lift_005A5400

// [0x0059F490]
namespace lift_0059F490 {
extern uint8_t ext_0059E060(void* self);
extern void ext_00661650(void* self, void* arg1);
extern void* ext_0058F6B0(void* self, void* arg1, uint32_t arg2);

// @name NMData::BackGroundData::vfunc_14_off_4
// @class NMData::BackGroundData
// @summary Handles property 0x14B if ext_0059E060 succeeds by calling ext_00661650 on field at +0x61C; otherwise delegates to ext_0058F6B0.
// @field NMData::BackGroundData +0x61C void* field_0x61c
void* fn_0059F490(void* self, void* arg1, uint32_t arg2) {
    if (arg2 == 0x14B && ext_0059E060(static_cast<uint8_t*>(self) - 4) != 0) {
        ext_00661650(arg1, static_cast<uint8_t*>(self) + 0x61C);
        return arg1;
    }
    ext_0058F6B0(self, arg1, arg2);
    return arg1;
}
} // namespace lift_0059F490

// [0x005A98F0] NMData::BackGroundData::vfunc_6 (35 bytes)
namespace lift_005A98F0 {
extern const char* mem_00A9ED98;

// @name NMData::BackGroundData::vfunc_6
// @class NMData::BackGroundData
// @summary Auto-lifted identical-shape clone of 0x0047DB90 (NMData::SceneData::vfunc_6).
namespace lift_0047DB90 {
// Pointer-sized global holding the address of the C-string literal used below.
extern const char* const mem_00A9ED98;
// IAT slot for the MSVC std::string(const char*, allocator) constructor import.
// The portable std::string constructor below replaces the call; the slot is only referenced here.
extern int mem_00924FE4;

// @name NMData::SceneData::vfunc_6
// @class NMData::SceneData
// @summary Returns a std::string constructed from the C-string pointer stored in mem_00A9F23C; does not read self.
// (no self fields are accessed by this function)
std::string fn_005A98F0(const void* /*self*/) {
    static_cast<void>(&mem_00924FE4);
    return std::string(mem_00A9ED98);
}
} // namespace lift_0047DB90
} // namespace lift_005A98F0

// [0x005A9880]
namespace lift_005A9880 {
// IAT slot for the MSVC std::string(const char*, allocator) constructor import.
// The portable std::string copy constructor below replaces the call; the slot is only referenced here.
extern int mem_00924FE0;

// @name NMData::BackGroundData::vfunc_3_off_4
// @class NMData::BackGroundData
// @summary Calls virtual slot 9 (vtable +0x24) on self and copy-constructs the returned std::string into the hidden out-pointer.
// @field NMData::BackGroundData +0x00 void** vtable
std::string* fn_005A9880(void* self, std::string* out) {
    static_cast<void>(&mem_00924FE0);
    void** vtbl = *reinterpret_cast<void***>(self);
    using slot9_fn = const std::string* (*)(void* self, void* arg, int flag);
    auto slot9 = reinterpret_cast<slot9_fn>(vtbl[9]);
    // NOTE: the original pushes the caller's esi as the first stack argument (not defined by this
    // function); passed as nullptr here. The second stack argument is 0.
    const std::string* src = slot9(self, nullptr, 0);
    new (out) std::string(*src);
    return out;
}
} // namespace lift_005A9880

// [0x0059FF60] NMData::BackGroundData::vfunc_10_off_10 (109 bytes)
namespace lift_0059FF60 {
// IAT slot for MSVCR80!_invalid_parameter_noinfo (debug iterator-range guard).
extern void* mem_00925134;

// Virtual slots are reached through the vtable at byte offsets 0x24 and 0x28
// (slots 9 and 10 on the original 32-bit MSVC layout). Calls are __thiscall;
// lift_compat.h defines that macro to nothing off-MSVC.
using VSlot9Fn  = void(__thiscall*)(void* self, void* arg);
using VSlot10Fn = void(__thiscall*)(void* self, void* arg, int flag);

// @name NMData::BackGroundData::vfunc_10_off_10
// @class NMData::BackGroundData
// @summary For each element pointer in the +0x74..+0x78 range, calls vslot 9(arg) and vslot 10(arg, 1) on the element's +0x0C subobject.
// @field NMData::BackGroundData +0x74 void** field_0x74
// @field NMData::BackGroundData +0x78 void** field_0x78
void fn_0059FF60(void* self, void* arg) {
    // Iterator over the element-pointer range; the end bound is re-read each pass.
    void** it = lift_field<void**>(self, 0x74);
    while (it != lift_field<void**>(self, 0x78)) {
        // Range guard: the iterator must be strictly before end (MSVC debug check).
        if (!(it < lift_field<void**>(self, 0x78)))
            reinterpret_cast<void (*)()>(mem_00925134)();

        void* elem = *it;
        void* sub = &lift_field<void*>(elem, 0x0C);

        void* vtbl = lift_field<void*>(sub, 0);
        lift_field<VSlot9Fn>(vtbl, 0x24)(sub, arg);

        sub = &lift_field<void*>(*it, 0x0C);
        vtbl = lift_field<void*>(sub, 0);
        lift_field<VSlot10Fn>(vtbl, 0x28)(sub, arg, 1);

        ++it;
    }
}
} // namespace lift_0059FF60

// [0x005A6010] NMData::BackGroundData::vfunc_58_off_4 (276 bytes)
namespace lift_005A6010 {
// Known callee 0x00406510: Unknown::copyStringRangeTruncate (Copies a std::string range through sub_00406090, destroys the old tail past the new end, stores the new end at this+0x08 and writes {a2, a3} to the sret pair at a1.)
extern uint32_t ext_00406510(void* self, void* sret, void* a2, uint32_t a3, void* a4, uint32_t a5);
// Known callee 0x0040ECB0: Unknown::PushBackString_0040ECB0 (push_back of one 28-byte std::string onto a vector-like container.)
extern void ext_0040ECB0(void* self, const void* value);
// Known callee 0x00673C20: sub_00673C20 (Auto-lifted identical-shape clone of 0x00667030 (advanceCursorSkipFlagged).)
extern void ext_00673C20(void* self);

// MSVCP80 std::string entry points, read from their IAT slots (values are the function addresses).
extern void* const mem_00924FE0; // MSVCP80 basic_string(const basic_string&) copy ctor
extern void* const mem_00924FEC; // MSVCP80 basic_string::empty
extern void* const mem_00924FF4; // MSVCP80 basic_string::~basic_string
// MSVCRT _invalid_parameter_noinfo IAT slot: only used by MSVC debug iterator guards (boilerplate, omitted).
extern void* const mem_00925134;

static inline uint32_t addr_of(const void* p) {
    return static_cast<uint32_t>(reinterpret_cast<uintptr_t>(p));
}

static inline void* ptr_of(uint32_t a) {
    return reinterpret_cast<void*>(static_cast<uintptr_t>(a));
}

// @name NMData::BackGroundData::vfunc_58_off_4
// @class NMData::BackGroundData
// @summary Refills the string range in arg from this+0x594 list nodes: each node's sub-object (node+0x28) yields a std::string via virtual slot 9, and non-empty copies are push_backed into arg; the cursor is advanced via ext_00673C20 until it reaches the list terminator.
// @field NMData::BackGroundData +0x594 uint32_t field_0x594
// @field NMData::BackGroundData +0x598 void* field_0x598
// @field Unknown::StringRange +0x04 uint32_t field_0x04
// @field Unknown::StringRange +0x08 uint32_t field_0x08
// @field Unknown::ListNode +0x28 void* field_0x28
void fn_005A6010(void* self, void* arg) {
    using PFN_getString = const void* (__thiscall*)(void* self);
    using PFN_copyString = void (__thiscall*)(void* self, const void* src);
    using PFN_emptyString = bool (__thiscall*)(const void* self);
    using PFN_dtorString = void (__thiscall*)(void* self);

    // Debug-iterator guard slot (_invalid_parameter_noinfo) is not reached on valid input; referenced only.
    (void)&mem_00925134;

    // Read the range bounds from the argument object (+0x04 first, +0x08 last).
    const uint32_t range_first = lift_field<uint32_t>(arg, 0x04);
    const uint32_t range_last = lift_field<uint32_t>(arg, 0x08);

    // Copies the range into arg via ext_00406510; the sret pair it writes is unused by this function.
    uint32_t sret_pair[2] = {0u, 0u};
    (void)ext_00406510(arg, sret_pair, arg, range_first, arg, range_last);

    // Cursor {container, node}: container is the list sentinel at this+0x594,
    // node is the first element pointed to by *(this+0x598).
    uint32_t cursor[2];
    cursor[0] = addr_of(static_cast<uint8_t*>(self) + 0x594);
    cursor[1] = lift_field<uint32_t>(ptr_of(lift_field<uint32_t>(self, 0x598)), 0);

    for (;;) {
        // Terminator is the sentinel's +4 slot; stop when the node reaches it.
        const uint32_t terminator = lift_field<uint32_t>(ptr_of(cursor[0]), 0x04);
        if (cursor[1] == terminator) {
            break;
        }

        // Element sub-object at node+0x28; its virtual slot 9 (offset 0x24) returns a const std::string*.
        void* const node = ptr_of(cursor[1]);
        void* const item = ptr_of(lift_field<uint32_t>(node, 0x28));
        void* const vtable = ptr_of(lift_field<uint32_t>(item, 0x00));
        const auto get_string = reinterpret_cast<PFN_getString>(ptr_of(lift_field<uint32_t>(vtable, 0x24)));
        const void* const src = get_string(item);

        // Local 28-byte std::string copy of *src.
        alignas(8) uint8_t tmp[28];
        reinterpret_cast<PFN_copyString>(mem_00924FE0)(tmp, src);
        if (!reinterpret_cast<PFN_emptyString>(mem_00924FEC)(tmp)) {
            ext_0040ECB0(arg, tmp);
        }
        reinterpret_cast<PFN_dtorString>(mem_00924FF4)(tmp);

        ext_00673C20(cursor);
    }
}
} // namespace lift_005A6010

// [0x005A0BF0] NMData::BackGroundData::vfunc_1_off_4 (284 bytes)
namespace lift_005A0BF0 {
// Callees
extern int ext_00586140(void* self, const void* arg0);
extern int ext_005DF5C0(void* self, const void* key);
extern void* ext_005A06F0(void* self, const void* key);

// Rodata/global name pointers (char* values pushed as std::string ctor arguments)
extern const char* mem_00B41854;
extern const char* mem_00B4171C;
extern const char* mem_00B41B00;
extern const char* mem_00B41B04;
extern const char* mem_00B41AFC;

// Import thunk slots for MSVCP80 string ctors; replaced by std::string construction.
extern int mem_00924FE0;
extern int mem_00924FE4;

// @name NMData::BackGroundData::vfunc_1_off_4
// @class NMData::BackGroundData
// @summary Copies the argument string, checks the sub-object at +0x540 and the base-class handler, then dispatches the argument to five named registry entries via their vtable slot 1, returning nonzero on the first failure.
// @field NMData::BackGroundData +0x540 void* field_0x540
int fn_005A0BF0(void* self, const std::string& arg0) {
    (void)&mem_00924FE0;
    (void)&mem_00924FE4;

    {
        std::string key(arg0);
        if (ext_005DF5C0(static_cast<uint8_t*>(self) + 0x540, &key) != 0) {
            return 1;
        }
    }

    if (ext_00586140(self, &arg0) != 0) {
        return 1;
    }

    const char* const names[] = {
        mem_00B41854,
        mem_00B4171C,
        mem_00B41B00,
        mem_00B41B04,
        mem_00B41AFC,
    };

    for (const char* name : names) {
        std::string key(name);
        void* obj = ext_005A06F0(static_cast<uint8_t*>(self) + 0x540, &key);
        void** vtbl = *reinterpret_cast<void***>(obj);
        auto slot1 = reinterpret_cast<int (*)(void*, const void*)>(vtbl[1]);
        if (slot1(obj, &arg0) != 0) {
            return 1;
        }
    }

    return 0;
}
} // namespace lift_005A0BF0

// [0x0059E080] NMData::BackGroundData::vfunc_25_off_4 (337 bytes)
namespace lift_0059E080 {
// Known callee 0x00410390: sub_00410390 (Checks virtual predicate at +0x28 and compares string at +0x458 against three known values)
extern void ext_00410390();
// Known callee 0x00410420: checkVirtualPredicateAndStrEq (Returns 0 if the virtual predicate at vtable+0x28 is true or ext_00410390 returns true; otherwise returns 1.)
extern void ext_00410420();
// Known callee 0x00492520: fn_00492520 (select field by selector: 0 -> +0x0C, 1 -> +0x10, else 0) (Returns one of two 32-bit fields of self based on a selector argument; returns 0 for other selectors.)
extern void ext_00492520();
// Known callee 0x00492540: isFieldZero (Returns true if the 32-bit value at offset 0 of the object is zero.)
extern void ext_00492540();
// Known callee 0x00493EE0: dispatchVirtualSlot154OfPointedObject (Loads the object pointer stored at *ecx; if non-null, calls its vtable slot at +0x154 with the object as this and returns that result (tail call).)
extern void ext_00493EE0();
// Known callee 0x00586660: Unknown::CallVirtual8COnSelfAndElements (Invokes the virtual slot 0x8c on self, then on every pointer element in the range [self+0x80, self+0x84).)
extern void ext_00586660();
extern void ext_00586D00();
// Known callee 0x00594000: sub_00594000 (Returns global int32 value from mem_00B40D08.)
extern void ext_00594000();
// Known callee 0x0059DE20: sub_00594000 (Returns global int32 value from mem_00B40D08.)
extern void ext_0059DE20();
// Known callee 0x0059DE40: MinFloatPtr (Returns the pointer to the smaller float: returns b if *a > *b, otherwise a (NaN-safe: a is returned when unordered).)
extern void ext_0059DE40();
extern void ext_006AD940();
extern int mem_00955998;
extern int mem_009324A4;

// @name NMData::BackGroundData::vfunc_25_off_4
// @class NMData::BackGroundData
// @summary Guarded update: clamps the float argument and field_0x4e8 against zero, refreshes field_0x4e8 and calls TransitionFactorSource vslot 0x94 with a {p/field_0x4e8, p/field_0x4e8, p/field_0x4e8, 1} vector, then runs follow-up calls.
// @field NMData::BackGroundData +0x15C void** field_0x15c
// @field NMData::BackGroundData +0x4E8 float field_0x4e8
// @field NMData::BackGroundData +0x5F4 void* field_0x5f4
void fn_0059E080(void* self, float p) {
    float a = std::bit_cast<float>(mem_00955998);  // 2.0f
    float b = std::bit_cast<float>(mem_009324A4);  // 0.5f
    uint8_t* const s = static_cast<uint8_t*>(self);
    void* const edi = s - 4;

    // Early out: self->field_0x5f4->field_0x26c must be non-null and its field 0 must be non-zero.
    void* const obj = lift_field<void*>(self, 0x5F4);
    if (obj == nullptr) return;
    void* const sub = lift_field<void*>(obj, 0x26C);
    void* const t0 = reinterpret_cast<void* (*)(void*)>(&ext_006AD940)(sub);
    if (reinterpret_cast<uint8_t (*)(void*)>(&ext_00492540)(t0)) return;

    // Early out: p <= 0 or field_0x4e8 <= 0 (ordered compares; NaN continues).
    if (0.0f >= p) return;
    if (0.0f >= lift_field<float>(self, 0x4E8)) return;

    if (reinterpret_cast<uint8_t (*)(void*)>(&ext_00410420)(edi)) {
        // ext_0059DE20 is called as float*(float*, float*) per the disassembly; its CALLEES
        // metadata looks copied from ext_00594000 and should be re-verified.
        p = *reinterpret_cast<float* (*)(float*, float*)>(&ext_0059DE20)(&p, &b);
        p = *reinterpret_cast<float* (*)(float*, float*)>(&ext_0059DE40)(&p, &a);
    }

    const float x = p / lift_field<float>(self, 0x4E8);
    float vec[4] = {x, x, x, 1.0f};

    // Virtual call: vtable of the TransitionFactorSource subobject at +0x15C, slot +0x94, this = self+0x15C.
    void* const vt = lift_field<void*>(self, 0x15C);
    void* const slot94 = *reinterpret_cast<void* const*>(static_cast<uint8_t*>(vt) + 0x94);
    reinterpret_cast<void (*)(void*, float*)>(slot94)(s + 0x15C, vec);

    lift_field<float>(self, 0x4E8) = p;

    if (reinterpret_cast<uint8_t (*)(void*)>(&ext_00410390)(edi)) {
        void* const o = lift_field<void*>(self, 0x5F4);
        if (o != nullptr) {
            void* const s2 = lift_field<void*>(o, 0x26C);
            void* const t1 = reinterpret_cast<void* (*)(void*)>(&ext_006AD940)(s2);
            const int32_t r = reinterpret_cast<int32_t (*)(void*, int32_t)>(&ext_00492520)(t1, 0);
            if (r != 0) {
                void* const dst = reinterpret_cast<void*>(static_cast<uintptr_t>(static_cast<uint32_t>(r)));
                lift_field<float>(dst, 0x4F0) = lift_field<float>(self, 0x4E8);
            }
        }
    }

    reinterpret_cast<void (*)(void*)>(&ext_00586D00)(self);
    reinterpret_cast<void (*)(void*)>(&ext_00586660)(self);
    const int32_t g = reinterpret_cast<int32_t (*)()>(&ext_00594000)();
    void* const tail = reinterpret_cast<void*>(static_cast<uintptr_t>(static_cast<uint32_t>(g) + 0x258u));
    reinterpret_cast<void* (*)(void*)>(&ext_00493EE0)(tail);
}
} // namespace lift_0059E080

// [0x0059F420]
namespace lift_0059F420 {
extern uint8_t __thiscall ext_0059E060(void* self);
extern void* __thiscall ext_006AD940(void* self);
extern uint8_t __thiscall ext_004925B0(void* self, uint32_t arg0);
extern void __thiscall ext_00481BD0(void* self, uint32_t value);
extern void __thiscall ext_0059A660(void* self, void* arg0);

// @name NMData::BackGroundData::vfunc_12_off_10
// @class NMData::BackGroundData
// @summary Removes this object's TransformNode from arg1's dword range and notifies field_0x5f8 if not active
// @field NMData::BackGroundData +0x5F8 void* field_0x5f8
uint8_t __thiscall fn_0059F420(void* self, void* arg0, void* arg1) {
    (void)arg0;
    uint8_t* subobj = static_cast<uint8_t*>(self);
    void* obj = subobj - 0x10;
    void* field_5f8 = lift_field<void*>(subobj, 0x5E8);

    if (ext_0059E060(obj) != 0) {
        return 0;
    }

    void* resolved = ext_006AD940(lift_field<void*>(field_5f8, 0x26C));
    if (ext_004925B0(resolved, static_cast<uint32_t>(reinterpret_cast<uintptr_t>(obj))) != 0) {
        return 0;
    }

    void* transform_node = (obj != nullptr) ? static_cast<void*>(subobj - 0xC) : nullptr;
    ext_00481BD0(arg1, static_cast<uint32_t>(reinterpret_cast<uintptr_t>(transform_node)));
    ext_0059A660(field_5f8, subobj + 0x8);
    return 1;
}
} // namespace lift_0059F420

// [0x005A1AA0]
namespace lift_005A1AA0 {
// @name NMData::BackGroundData::vfunc_44_off_4
// @class NMData::BackGroundData
// @summary Iterates over the container at +0x5A0 (+0x5A4 from BackGroundData) and calls sub_005E09D0 on each element's +0x28 field if IsResolvedChildStateOneWithNonZeroField8 returns true.
// @field NMData::BackGroundData +0x5A4 void* field_0x5a4


extern int __thiscall ext_0059E060(void* self);
extern void __thiscall ext_005E09D0(void* self);
extern void __thiscall ext_00673C20(void* self);
extern void __thiscall ext_0058A200(void* self);
extern int32_t __cdecl ext_00594000(void);
extern int __thiscall ext_005946C0(void* self);
extern void (__cdecl* mem_00925134)(void);
extern uint32_t mem_00924FF4;

struct IterPair {
    void* container;
    void* node;
};

void __thiscall fn_005A1AA0(void* self) {
    (void)ext_0058A200;
    (void)ext_00594000;
    (void)ext_005946C0;
    (void)mem_00924FF4;
    if (static_cast<uint8_t>(ext_0059E060(static_cast<char*>(self) - 4)) == 0) {
        return;
    }

    char* edi = static_cast<char*>(self) + 0x5A0;
    void* head = *reinterpret_cast<void**>(static_cast<char*>(self) + 0x5A4);
    IterPair iter;
    iter.container = edi;
    iter.node = *reinterpret_cast<void**>(head);

    while (true) {
        void* end_node = *reinterpret_cast<void**>(edi + 4);
        if (iter.container == nullptr || iter.container != edi) {
            mem_00925134();
        }
        if (iter.node == end_node) {
            break;
        }
        if (iter.container == nullptr) {
            mem_00925134();
        }
        if (iter.node == *reinterpret_cast<void**>(static_cast<char*>(iter.container) + 4)) {
            mem_00925134();
        }

        void* elem = *reinterpret_cast<void**>(static_cast<char*>(iter.node) + 0x28);
        ext_005E09D0(elem);
        ext_00673C20(&iter);
    }
}
} // namespace lift_005A1AA0

// [0x0059D6A0]
namespace lift_0059D6A0 {
// @name NMData::BackGroundData::vfunc_56_off_4
// @class NMData::BackGroundData
// @summary Returns a float from field_0x5f4 using a string from TransitionFactorSource(+0x15c) if field_0x5f4 matches ext_00594000(), else 0.0f.
// @field NMData::BackGroundData +0x15c void* field_0x15c
// @field NMData::BackGroundData +0x5f4 int32_t field_0x5f4


extern int32_t __cdecl ext_00594000(void);
extern void* __thiscall ext_0058A200(void* self, void* out_str, int32_t arg);
extern float __thiscall ext_005946C0(void* self, void* arg);
extern uint32_t mem_00924FF4;

float __thiscall fn_0059D6A0(void* self) {
    int32_t f5f4 = lift_field<int32_t>(self, 0x5f4);
    if (f5f4 == 0) {
        return 0.0f;
    }

    int32_t val = ext_00594000();
    if (f5f4 != val) {
        return 0.0f;
    }

    uint8_t str_buf[28] = {};
    void* str_ret = ext_0058A200(static_cast<uint8_t*>(self) + 0x15c, str_buf, 3);
    float result = ext_005946C0(reinterpret_cast<void*>(static_cast<uintptr_t>(static_cast<uint32_t>(f5f4))), str_ret);

    using DtorFn = void(__thiscall*)(void*);
    reinterpret_cast<DtorFn>(static_cast<uintptr_t>(mem_00924FF4))(str_buf);

    return result;
}
} // namespace lift_0059D6A0

// [0x005A32F0] NMData::BackGroundData::vfunc_2_off_4 (461 bytes)
namespace lift_005A32F0 {
// Virtual dispatch helper: calls vtable slot `Slot` of `obj` (MSVC __thiscall), passing obj as this.
template <typename R, std::size_t Slot, typename... A>
inline R lift_vcall(void* obj, A... args) {
    void** vt = lift_field<void**>(obj, 0);
    using Fn = R (__thiscall*)(void*, A...);
    return reinterpret_cast<Fn>(vt[Slot])(obj, args...);
}

// MSVC std::string storage (0x1C bytes) used for the stack temporaries.
struct MsvcStringStorage {
    alignas(4) unsigned char bytes[0x1C];
};

// (value, object) pair at stack slot esp+0x14: value at +0x00, object at +0x04.
struct ValueObjPair {
    uint32_t value;
    void* obj;
};

// Callees and import slots referenced by the original asm.
extern void* __thiscall ext_0058A370(void* self, void** out, void* key); // AnimatableTransform::vfunc_2 (direct call)
extern void __thiscall ext_0041CF00(void* self, void* src);              // sub_0041CF00 (copy pair into self)
extern uint32_t __thiscall ext_005DF5C0(void* self);                     // sub_005DF5C0 (lookup in +0x564/+0x570)
extern void* __thiscall ext_005A06F0(void* self);                        // sub_005A06F0 (returns object with vtable)
extern void* __thiscall ext_0041CE40(void* self, const char* str);       // sub_0041CE40 (assign C-string to self)

using StrCopyCtorFn = void* (__thiscall*)(void* self, void* other);      // MSVCP80 basic_string copy ctor
using StrCStrCtorFn = void* (__thiscall*)(void* self, const char* s);    // MSVCP80 basic_string(const char*) ctor
using StrCStrFn = const char* (__thiscall*)(void* self);                 // MSVCP80 basic_string::c_str
using StrDtorFn = void(__thiscall*)(void* self);                         // MSVCP80 basic_string dtor

extern StrCopyCtorFn mem_00924FE0;
extern StrCStrCtorFn mem_00924FE4;
extern StrCStrFn mem_00924FF0;
extern StrDtorFn mem_00924FF4;
extern void* mem_00B599BC;          // sentinel object value compared against the result
extern const char* mem_00B41B04;    // const char* constant used as a string source
extern const char mem_0095E77C[];   // string literal pushed in the lookup-by-literal path

// @name NMData::BackGroundData::vfunc_2_off_4
// @class NMData::BackGroundData
// @summary Resolves a named value via AnimatableTransform::vfunc_2 and, when no usable object is found, looks the key up in the +0x564/+0x570 tables and +0x540 provider, assigning a C-string or copying the (value, object) pair into the key-result argument.
// @field NMData::BackGroundData +0x540 void* field_0x540
// @field NMData::BackGroundData +0x564 uint8_t field_0x564
// @field NMData::BackGroundData +0x570 uint8_t field_0x570
void* fn_005A32F0(void* self, void* arg1, void* arg2) {
    (void)arg1; // [ESP+4] is never read by the original code (only ret 8 cleanup).

    uint8_t* const base = static_cast<uint8_t*>(self);

    // Out-pointer for AnimatableTransform::vfunc_2 is the object slot of the pair.
    ValueObjPair pair{};
    pair.obj = nullptr;
    ext_0058A370(self, &pair.obj, arg2);

    if (pair.obj != nullptr && pair.obj != mem_00B599BC) {
        ext_0041CF00(arg2, &pair);
        if (pair.obj != nullptr) {
            lift_vcall<void, 30>(pair.obj, static_cast<void*>(&pair));
        }
        return arg2;
    }

    // Object missing or sentinel: try the +0x564 table with a temporary copy of the key.
    MsvcStringStorage t1;
    mem_00924FE0(&t1, arg2);
    if (ext_005DF5C0(base + 0x564) != 0) {
        const char* s = mem_00924FF0(arg2);
        ext_0041CE40(arg2, const_cast<char*>(s));
        if (pair.obj != nullptr) {
            lift_vcall<void, 30>(pair.obj, static_cast<void*>(&pair));
        }
        return arg2;
    }

    // Try the +0x570 table.
    MsvcStringStorage t2;
    mem_00924FE0(&t2, arg2);
    if (ext_005DF5C0(base + 0x570) != 0) {
        const char* s = mem_00924FF0(arg2);
        ext_0041CE40(arg2, const_cast<char*>(s));
        if (pair.obj != nullptr) {
            lift_vcall<void, 30>(pair.obj, static_cast<void*>(&pair));
        }
        return arg2;
    }

    // Fall back to the +0x540 provider.
    MsvcStringStorage t3;
    mem_00924FE4(&t3, mem_00B41B04);
    void* provider = ext_005A06F0(base + 0x540);
    void* resolved = lift_vcall<void*, 1>(provider, arg2);
    if (resolved == nullptr) {
        ext_0041CF00(arg2, &pair);
        if (pair.obj != nullptr) {
            lift_vcall<void, 30>(pair.obj, static_cast<void*>(&pair));
        }
        return arg2;
    }

    MsvcStringStorage t4;
    mem_00924FE4(&t4, mem_0095E77C);
    lift_vcall<void, 2>(resolved, arg2, static_cast<void*>(&t4));
    mem_00924FF4(&t4);

    if (pair.obj != nullptr) {
        lift_vcall<void, 30>(pair.obj, static_cast<void*>(&pair));
    }
    return self;
}
} // namespace lift_005A32F0

// [0x005A5450]
namespace lift_005A5450 {
// @name NMData::BackGroundData::vfunc_20
// @class NMData::BackGroundData
// @summary Calls base CharacterData::vfunc_20, looks up or creates a 0x220-byte background object, initializes it, and marks its +0x8C flag.
// @field NMData::BackGroundData +0x160 void* field_0x160
// @field NMData::BackGroundData +0x314 void* field_0x314
// @field NMData::BackGroundData +0x38C void* field_0x38c
// @field NMData::BackGroundData +0x598 void* field_0x598


struct MsvcString28 {
    uint8_t data[0x1C];
};

    extern void* mem_0093BED0;
    extern void* mem_00924FE4;
    extern void* mem_00924FE0;
    extern void* mem_00924FF4;
    extern void* mem_00924FDC;

    void __thiscall ext_005A4D60(void* self, void* arg0);
    void* __thiscall ext_005DF5C0(void* self, MsvcString28 str);
    void* __cdecl ext_006A5C62(uint32_t size);
    void* __thiscall ext_005C0E70(void* self);
    void __thiscall ext_00587920(void* self, void* obj, uint32_t flag);
    void __thiscall ext_005A3540(void* self, void* obj);

void __thiscall fn_005A5450(void* self, void* arg0) {
    using StrCtorCstrFn = void (__thiscall*)(void*, void*);
    using StrCtorCopyFn = void (__thiscall*)(void*, const void*);
    using StrDtorFn = void (__thiscall*)(void*);
    using StrAssignFn = void* (__thiscall*)(void*, const void*);
    using Vfunc23Fn = void (__thiscall*)(void*, void*);

    ext_005A4D60(self, arg0);

    MsvcString28 local_str;
    ((StrCtorCstrFn)mem_00924FE4)(&local_str, mem_0093BED0);

    MsvcString28 copy_str;
    ((StrCtorCopyFn)mem_00924FE0)(&copy_str, &local_str);

    void* esi = ext_005DF5C0((uint8_t*)self + 0x598, copy_str);
    ((StrDtorFn)mem_00924FF4)(&local_str);

    if (esi == nullptr) {
        void* mem = ext_006A5C62(0x220);
        if (mem != nullptr) {
            esi = ext_005C0E70(mem);
        } else {
            esi = nullptr;
        }

        MsvcString28 local_str2;
        ((StrCtorCstrFn)mem_00924FE4)(&local_str2, mem_0093BED0);
        void** vtable = *(void***)esi;
        ((Vfunc23Fn)vtable[0x5C / 4])(esi, &local_str2);
        ((StrDtorFn)mem_00924FF4)(&local_str2);

        void* ebp = (uint8_t*)self + 0x160;
        *(void**)((uint8_t*)esi + 0x20C) = ebp;

        MsvcString28 local_str3;
        ((StrCtorCstrFn)mem_00924FE4)(&local_str3, mem_0093BED0);
        ((StrAssignFn)mem_00924FDC)((uint8_t*)self + 0x314, &local_str3);
        ((StrDtorFn)mem_00924FF4)(&local_str3);

        *(void**)((uint8_t*)self + 0x38C) = esi;
        ext_00587920(ebp, esi, 0);
        ext_005A3540(self, esi);
    }

    *((uint8_t*)esi + 0x8C) = 1;
}
} // namespace lift_005A5450
