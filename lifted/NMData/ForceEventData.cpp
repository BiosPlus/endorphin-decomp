// Lifted C++ translation unit: lifted/NMData/ForceEventData.cpp
#include "lift_compat.h"
extern "C" void __thiscall ext_004C64D0(void* self, uint32_t arg);
#include <string>
extern "C" void* __thiscall ext_006404E0(void* self, void* arg);
extern "C" void* mem_00A9EF28;

extern "C" void* __thiscall ext_006404E0(void* self, void* arg);
extern "C" void* mem_00A9EF28;
// @class NMData::ForceEventData
// @summary Reads the dword at this+0x184; if non-zero, calls ext_004C64D0 on the subobject at this+0x184 with a single zero argument.
// @field NMData::ForceEventData +0x184 uint32_t field_0x184
void fn_004C66F0(void* self) {
    void* sub = static_cast<uint8_t*>(self) + 0x184;
    if (lift_field<uint32_t>(self, 0x184) != 0) {
        ext_004C64D0(sub, 0);
    }
}
#include <new>
extern "C" void* ext_006A5C62(size_t size);
extern "C" void* ext_004C6520(void* self, void* owner);

extern "C" void* ext_006A5C62(size_t size);
extern "C" void* ext_004C6520(void* self, void* owner);
// @class NMData::ForceEventData
// @summary Auto-lifted identical-shape clone of 0x004DDED0 (NMData::AnimationEventData::vfunc_59).
// @field NMData::ForceEventData +0x0 void** vptr
extern "C" void __thiscall fn_004C4DD0(void* self, void* a) {
    using VFn = void(__thiscall*)(void* self, void* arg);
    void* g = mem_00A9EF28;
    void* r = ext_006404E0(a, g);
    void** vt = *reinterpret_cast<void***>(self);
    reinterpret_cast<VFn>(vt[22])(self, r);
}
#include <cstdint>
#include <cstddef>
#include <cstring>

// [0x004C4E40] NMData::ForceEventData::vfunc_60 (34 bytes)
// @name NMData::ForceEventData::NotifyEvent0x266
// @class NMData::ForceEventData
// @summary Invokes virtual slot 15 (vtable +0x3C) on self with (arg, 0x266, 0), then returns arg.
// @field NMData::ForceEventData +0x00 void** vtable
void* fn_004C4E40(void* self, void* arg) {
    void** vtbl = lift_field<void**>(self, 0x00);
    using Slot15 = void (*)(void* self, void* arg, uint32_t id, uint32_t flags);
    Slot15 slot = reinterpret_cast<Slot15>(vtbl[15]);
    slot(self, arg, 0x266u, 0u);
    return arg;
}

// [0x004C6710] NMData::ForceEventData::vfunc_17_off_C (99 bytes)
// @name NMData::ForceEventData::vfunc_17_off_C
// @class NMData::ForceEventData
// @summary Auto-lifted identical-shape clone of 0x004CFC30 (NMData::IncarnationEventData::vfunc_17_off_C).
void* fn_004C6710(void* self) {
    void* mem = ext_006A5C62(0x18C);
    if (mem == nullptr) {
        return nullptr;
    }
    void* owner = static_cast<unsigned char*>(self) - 0xC;
    return ext_004C6520(mem, owner);
}

// [0x004C1B20]
// @name NMData::ForceEventData::vfunc_73
// @class NMData::ForceEventData
// @summary Stores a [first, second] int pair into the event's range fields, widening an empty range by one, then calls ext_004C0340.
// @field NMData::ForceEventData +0x15c int32_t field_0x15c
// @field NMData::ForceEventData +0x160 int32_t field_0x160

// ext_004C0340: sub_004C0340 (thiscall, this in ECX, no stack args)
void __thiscall ext_004C0340(void* self);

void __thiscall vfunc_73(void* self, const int32_t* range) {
    int32_t first = range[0];
    int32_t second = range[1];

    lift_field<int32_t>(self, 0x15c) = first;
    lift_field<int32_t>(self, 0x160) = second;

    if (first >= second) {
        lift_field<int32_t>(self, 0x160) = first + 1;
    }

    ext_004C0340(self);
}

// [0x004C5350]
namespace lift_004C5350 {
// @name NMData::ForceEventData::vfunc_6_off_C
// @class NMData::ForceEventData
// @summary Computes a 4D vector with x=y=z from a subobject's float property and w=0.0f.
// @field NMData::ForceEventData +0x4 void** TransformInterface_vptr


extern uint32_t mem_00B40640;
extern float __thiscall ext_004C50C0(void* self);

void* __thiscall fn_004C5350(void* self, float* out_vec) {
    uint8_t* ti = static_cast<uint8_t*>(self) - 8;
    void** vtable = *reinterpret_cast<void***>(ti);
    using VFunc2 = void* (__thiscall*)(void*, uint32_t);
    auto vfunc = reinterpret_cast<VFunc2>(vtable[2]);
    void* obj = vfunc(ti, mem_00B40640);
    float val = ext_004C50C0(obj);
    out_vec[0] = val;
    out_vec[1] = val;
    out_vec[2] = val;
    out_vec[3] = 0.0f;
    return out_vec;
}
} // namespace lift_004C5350

// [0x004C4FA0]
namespace lift_004C4FA0 {
// @name NMData::ForceEventData::vfunc_2_off_C
// @class NMData::ForceEventData
// @summary Translates the TransformInterface subobject's matrix by the given 3D vector and notifies the base object.
// @field NMData::ForceEventData +0x4 void** TransformInterface_vptr

extern uint32_t mem_00B40640;
extern void __thiscall ext_00586D00(void* self);

void __thiscall fn_004C4FA0(void* self, const float* delta) {
    uint8_t* base = static_cast<uint8_t*>(self) - 0xC;
    void* transform_iface = base + 0x4;
    void** vtable = *reinterpret_cast<void***>(transform_iface);

    float matrix[16];
    auto get_tm = reinterpret_cast<void(__thiscall*)(void*, float*, int32_t, uint32_t)>(vtable[4]);
    get_tm(transform_iface, matrix, 0, mem_00B40640);

    matrix[12] += delta[0];
    matrix[13] += delta[1];
    matrix[14] += delta[2];

    auto set_tm = reinterpret_cast<void(__thiscall*)(void*, int32_t, float*, uint32_t)>(vtable[0]);
    set_tm(transform_iface, 0, matrix, mem_00B40640);

    ext_00586D00(base);
}
} // namespace lift_004C4FA0

// [0x004C60D0] NMData::ForceEventData::vfunc_14 (91 bytes)
namespace lift_004C60D0 {
// Known callee 0x004C2070: NMData::SeverEventData::vfunc_14 (thiscall, 2 stack args, callee-cleaned)
extern void* ext_004C2070(void* self, void* arg1, uint32_t arg2);
// Callee 0x004C5FE0: signature not recovered; assumed uint32_t(uint32_t), callee-cleaned
extern uint32_t ext_004C5FE0(uint32_t arg);
// Known callee 0x0055DA20: initDwordPair (stores two stack DWORDs into ECX object, returns it)
extern void* ext_0055DA20(void* self, uint32_t a, uint32_t b);
// Known callee 0x007D8700: identity on its first stack argument
extern uint32_t ext_007D8700(uint32_t arg0);
extern uint32_t mem_00B40640;

// @name NMData::ForceEventData::vfunc_14
// @class NMData::ForceEventData
// @summary If id != 0x94, forwards to SeverEventData::vfunc_14 and returns arg1; if id == 0x94, calls TransformInterface vfunc[3] on the global, post-processes the result, and returns the id as the object pointer.
// @field ForceEventData +0x04 void** TransformInterface_vptr
void* fn_004C60D0(void* self, void* arg1, uint32_t id) {
    if (id != 0x94) {
        ext_004C2070(self, arg1, id);
        return arg1;
    }

    // TransformInterface subobject lives at this+4; its vptr is at +0x4.
    char* tif = static_cast<char*>(self) + 0x4;
    void** vtbl = *reinterpret_cast<void***>(tif);
    using VFunc3 = uint32_t (*)(void* thisPtr, uint32_t arg);
    uint32_t v = reinterpret_cast<VFunc3>(vtbl[3])(tif, mem_00B40640);

    uint32_t r = ext_004C5FE0(ext_007D8700(v));

    void* obj = reinterpret_cast<void*>(static_cast<uintptr_t>(id));
    // NOTE: the original passes the caller's saved ESI as the second stack
    // argument (a prologue save-slot artifact). It is not recoverable in
    // portable C++, so 0 is passed here.
    ext_0055DA20(obj, r, 0);
    return obj;
}
} // namespace lift_004C60D0

// [0x004C4EA0]
namespace lift_004C4EA0 {
// @name NMData::ForceEventData::vfunc_0_off_154
// @class NMData::ForceEventData
// @summary Fills out-record a1 and a2 with a 3-dword triple (8,0,0) from setDwordTriple, applies mask toggles to each (a1: 0x1000 and 0x2000, a2: 0x1000), and writes 6 to the dwords at a3 and a4.

extern void* ext_00494000(void* self, uint32_t arg1, uint32_t arg2, uint32_t arg3);
extern void ext_004940E0(void* self, uint32_t mask, uint8_t flag);

void fn_004C4EA0(void* self, uint32_t* a1, uint32_t* a2, uint32_t* a3, uint32_t* a4) {
    (void)self; // ECX is overwritten before any use; no this-relative fields are accessed.

    // First record: a1 <- (8, 0, 0), then toggle masks 0x1000 and 0x2000.
    uint32_t tmp1[3] = {0, 0, 0};
    uint32_t* t1 = static_cast<uint32_t*>(ext_00494000(tmp1, 8, 0, 0));
    a1[0] = t1[0];
    a1[1] = t1[1];
    a1[2] = t1[2];
    ext_004940E0(a1, 0x1000, 1);
    ext_004940E0(a1, 0x2000, 1);

    // Second record: a2 <- (8, 0, 0), then toggle mask 0x1000.
    uint32_t tmp2[3] = {0, 0, 0};
    uint32_t* t2 = static_cast<uint32_t*>(ext_00494000(tmp2, 8, 0, 0));
    a2[0] = t2[0];
    a2[1] = t2[1];
    a2[2] = t2[2];
    ext_004940E0(a2, 0x1000, 1);

    *a3 = 6;
    *a4 = 6;
}
} // namespace lift_004C4EA0

// [0x004C63A0] NMData::ForceEventData::vfunc_15 (80 bytes)
namespace lift_004C63A0 {
// Known callee 0x004C3410: NMData::DesiredPoseEventData::vfunc_15 (__thiscall: self in ecx, out and key on the stack).
extern DWORD* __thiscall ext_004C3410(void* self, DWORD* out, DWORD key);
// Known callee 0x004C6360: storeValueAndStaticObjectPtr (__cdecl: dst, value).
extern void __cdecl ext_004C6360(DWORD* dst, DWORD value);
// Known callee 0x004C6380: storeValueAndStaticObjectPtr_004C6380 (__cdecl: dst, value).
extern void __cdecl ext_004C6380(DWORD* dst, DWORD value);

// @name NMData::ForceEventData::vfunc_15
// @class NMData::ForceEventData
// @summary Dispatches on a 32-bit key: 0x266 and 0x2FF call the matching static-pair store helper with (out, this); any other key forwards to DesiredPoseEventData::vfunc_15. Returns out.
DWORD* __thiscall fn_004C63A0(void* self, DWORD* out, DWORD key) {
    const DWORD thisValue = static_cast<DWORD>(reinterpret_cast<uintptr_t>(self));

    if (key == 0x266) {
        ext_004C6360(out, thisValue);
    } else if (key == 0x2FF) {
        ext_004C6380(out, thisValue);
    } else {
        ext_004C3410(self, out, key);
    }
    return out;
}
} // namespace lift_004C63A0

// [0x004C51E0] NMData::ForceEventData::vfunc_54 (204 bytes)
namespace lift_004C51E0 {
// Known callee 0x005B18E0: AssignStringAndSetFlag (copy-assigns the std::string argument into this+0x28 and sets the byte flag at this+0x04 to 1). thiscall, callee-cleans.
extern void ext_005B18E0(void* self, const void* src);
// Callee 0x005B5810 (thiscall, callee-cleans): (int n, float* v) on the global object.
extern void ext_005B5810(void* self, int n, float* v);
// Callee 0x006A6C87 (cdecl): registers the destructor entry at mem_009189D0 for atexit-style teardown.
extern void ext_006A6C87(const void* dtor_entry);

extern int mem_00AE36F4;   // guard dword; bit 0 = initialized
extern int mem_00AE36A8;   // global object (this for the callees; returned)
extern int mem_00A3A108;   // .data float 50
extern int mem_0092C508;   // .rdata double 0.1
extern int mem_009453D0;   // .rdata double 0.07
extern int mem_00924FE4;   // IAT slot: MSVCP80 basic_string(const char*) ctor
extern int mem_00924FF4;   // IAT slot: MSVCP80 basic_string dtor
extern int mem_00934804;   // .rdata string literal
extern int mem_009189D0;   // dtor registration entry

typedef void* (__attribute__((thiscall)) *string_ctor_t)(void* self, const char* s);
typedef void (__attribute__((thiscall)) *string_dtor_t)(void* self);

// @name NMData::ForceEventData::vfunc_54
// @class NMData::ForceEventData
// @summary Once-only (guarded by bit 0 of mem_00AE36F4) initialization of the global object at 0x00AE36A8 with four derived float constants, then assigns the literal string at 0x00934804 into it and returns that object.
void* __attribute__((thiscall)) fn_004C51E0(void* self) {
    (void)self;  // not dereferenced; the function operates on globals only

    uint32_t* guard = reinterpret_cast<uint32_t*>(&mem_00AE36F4);
    void* const obj = reinterpret_cast<void*>(&mem_00AE36A8);

    // v[0] = 1/50, v[1] = v[0], v[2] = 0.1 * v[0], v[3] = 0.07 * v[0]
    float v[4];
    v[0] = 1.0f / *reinterpret_cast<float*>(&mem_00A3A108);
    v[1] = v[0];
    v[2] = static_cast<float>(*reinterpret_cast<double*>(&mem_0092C508) * static_cast<double>(v[0]));
    v[3] = static_cast<float>(*reinterpret_cast<double*>(&mem_009453D0) * static_cast<double>(v[0]));

    if ((*reinterpret_cast<uint8_t*>(guard) & 1u) == 0) {
        *guard |= 1u;
        ext_005B5810(obj, 14, &v[1]);
        ext_006A6C87(reinterpret_cast<const void*>(&mem_009189D0));
    }

    // Temporary std::string (MSVC layout, 0x1C bytes) built from the literal.
    alignas(8) unsigned char tmp[0x1C];
    string_ctor_t ctor = *reinterpret_cast<string_ctor_t*>(&mem_00924FE4);
    string_dtor_t dtor = *reinterpret_cast<string_dtor_t*>(&mem_00924FF4);
    ctor(tmp, reinterpret_cast<const char*>(&mem_00934804));
    ext_005B18E0(obj, tmp);
    dtor(tmp);

    return obj;
}
} // namespace lift_004C51E0

// [0x004C6E60] NMData::ForceEventData::vfunc_88 (230 bytes)
namespace lift_004C6E60 {
// Known callee 0x00528BB0: descriptiveName_00528BB0 (forwardVirtual0x2CIfNonNull) (If this->field_0x04 is non-null, tail-dispatch virtual slot 0x2C/4 on it with the same args; otherwise return 0 (callee pops 8 bytes).)
extern uint32_t __thiscall ext_00528BB0(void* self, uint32_t arg0, uint32_t arg1);
// Known callee 0x00528BF0: forwardVirtual0x30IfNonNull (If this->field_0x04 is non-null, tail-calls its vtable slot 12 (+0x30) with the same stack arguments; otherwise returns popping 0xC bytes.)
extern void __thiscall ext_00528BF0(void* self, uint32_t a0, uint32_t a1, uint32_t a2);
// Known callee 0x00594000: sub_00594000 (Returns global int32 value from mem_00B40D08.)
extern int32_t __cdecl ext_00594000(void);
// Known callee 0x006A5C62: thunk_MFC80_ord_762 (IAT jump thunk forwarding to MFC80!ord_762; cdecl allocator, returns block pointer.)
extern void* ext_006A5C62(size_t size);
// Known callee 0x006A5C5C: thunk_MFC80_ord_764 (IAT jump thunk forwarding to MFC80!ord_764; cdecl free.)
extern void ext_006A5C5C(void* p);
// Known callee 0x004C6E30: sub_004C6E30 (44B) (thiscall; receives the new block as ecx and the owner as its single stack argument.)
extern void __thiscall ext_004C6E30(void* self, void* owner);
extern int mem_00B40640;

// @name NMData::ForceEventData::ResetOwnedBlock0x18
// @class NMData::ForceEventData
// @summary Calls two helpers on this+0xC, clears flag +0x188, allocates a 0x18-byte block (filled with TransformInterface vslot 3 result and 0.0f), frees the previous block at +0x184, stores the new block there, and calls ext_004C6E30(block, this).
// @field NMData::ForceEventData +0x04 void** TransformInterface_vptr
// @field NMData::ForceEventData +0x184 uint32_t field_0x184
// @field NMData::ForceEventData +0x188 uint8_t field_0x188
void fn_004C6E60(void* self) {
    uint8_t* const base = static_cast<uint8_t*>(self);
    void* const sub = base + 0x0C;

    // Two helper calls on the +0x0C subobject.
    ext_00528BB0(sub, 0x200u, 1u);
    const int32_t g = ext_00594000() + 0x168;
    ext_00528BF0(sub, 0x200u, 1u, static_cast<uint32_t>(g));

    lift_field<uint8_t>(self, 0x188) = 0;

    void* block = ext_006A5C62(0x18);
    if (block != nullptr) {
        // Virtual slot 3 (+0x0C) on the TransformInterface subobject at +0x04,
        // passing the global mem_00B40640 as its single argument.
        void** tiVptr = lift_field<void**>(self, 0x04);
        using Slot3 = uint32_t (*)(void* self, int arg);
        const uint32_t r = reinterpret_cast<Slot3>(tiVptr[3])(base + 0x04, mem_00B40640);

        lift_field<float>(block, 0x14) = 0.0f;
        lift_field<uint32_t>(block, 0x04) = 0;
        lift_field<uint32_t>(block, 0x08) = 0;
        lift_field<uint32_t>(block, 0x0C) = 0;
        lift_field<uint32_t>(block, 0x10) = r;
    }

    // Free the previous block at +0x184 unless it is the same as the new one (or null).
    const uint32_t oldDw = lift_field<uint32_t>(self, 0x184);
    void* old = reinterpret_cast<void*>(static_cast<uintptr_t>(oldDw));
    if (old != block && old != nullptr) {
        const uint32_t innerDw = lift_field<uint32_t>(old, 0x04);
        if (innerDw != 0) {
            ext_006A5C5C(reinterpret_cast<void*>(static_cast<uintptr_t>(innerDw)));
        }
        lift_field<uint32_t>(old, 0x04) = 0;
        lift_field<uint32_t>(old, 0x08) = 0;
        lift_field<uint32_t>(old, 0x0C) = 0;
        ext_006A5C5C(old);
    }

    lift_field<uint32_t>(self, 0x184) = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(block));
    ext_004C6E30(block, self);
}
} // namespace lift_004C6E60

// [0x004C65C0] NMData::ForceEventData::vfunc_90 (303 bytes)
namespace lift_004C65C0 {
// @name NMData::ForceEventData::vfunc_90
// @class NMData::ForceEventData
// @summary Fills a temp string-vector via vtbl[79], then resolves a target (this+0x168, or a global-derived fallback); if non-null calls target->vtbl[3] and this->sub_004C2760 with the result, and copies a Vec3 (+0x30) from the target's subobject result into this's subobject result (+0x30).
// @field NMData::ForceEventData +0x04 void** TransformInterface_vptr
// @field NMData::ForceEventData +0x168 void* field_0x168
// @field <unknown target @+0x168> +0x38C void* field_0x38c

// Known callee 0x004026E0: std_vector_string_Tidy (destroys strings, frees buffer, nulls pointers)
extern void __thiscall ext_004026E0(void* vec);
// Known callee 0x00594000: sub_00594000 (cdecl, returns global int32 from mem_00B40D08)
extern int32_t __cdecl ext_00594000(void);
// Known callee 0x00599E70: Unknown::getGrandparentField0x38C (thiscall, returns DWORD)
extern uint32_t __thiscall ext_00599E70(void* self);
// Known callee 0x005DF5C0: sub_005DF5C0 (thiscall, returns pointer)
extern void* __thiscall ext_005DF5C0(void* self);
// Known callee 0x004C2760: sub_004C2760 (thiscall, one stack arg)
extern void __thiscall ext_004C2760(void* self, void* arg);
// Global DWORD passed as argument to this->TransformInterface::vfunc_3
extern uint32_t mem_00B40640;
// CRT import slots (MSVCP80 std::string ctor/dtor thunks); address-only, no runtime effect here.
extern void* mem_00924FE0;
extern void* mem_00924FF4;

void __thiscall fn_004C65C0(void* self) {
    // Out-param: std::vector<std::string> in MSVC layout (begin/end/cap), tidied below.
    (void)&mem_00924FE0;
    (void)&mem_00924FF4;
    void* names[3] = {nullptr, nullptr, nullptr};
    void** selfVt = *reinterpret_cast<void***>(self);
    reinterpret_cast<void(__thiscall*)(void*, void*)>(selfVt[79])(self, names);
    ext_004026E0(names);

    // Original's MSVC std::string temp (copy of a global, unused) and CRT import
    // thunks for its ctor/dtor are omitted: they have no observable effect here.
    const uint32_t ctx = static_cast<uint32_t>(ext_00594000());
    if (ctx == 0) {
        return;
    }

    void* target = lift_field<void*>(self, 0x168);
    void* node = nullptr;
    if (target == nullptr) {
        const uint32_t g = static_cast<uint32_t>(ext_00594000());
        node = reinterpret_cast<void*>(static_cast<uintptr_t>(
            ext_00599E70(reinterpret_cast<void*>(static_cast<uintptr_t>(g)))));
    } else {
        node = ext_005DF5C0(static_cast<uint8_t*>(target) + 0x598);
        if (node == nullptr) {
            node = lift_field<void*>(target, 0x38C);
        }
    }
    if (node == nullptr) {
        return;
    }

    {
        std::string text;
        void** nodeVt = *reinterpret_cast<void***>(node);
        void* r = reinterpret_cast<void*(__thiscall*)(void*, std::string*)>(nodeVt[3])(node, &text);
        ext_004C2760(self, r);
    }

    // node's TransformInterface-like subobject at +0x04: vtbl[5](ctx + 0x1c8)
    uint8_t* nodeSub = static_cast<uint8_t*>(node) + 4;
    void** nodeSubVt = *reinterpret_cast<void***>(nodeSub);
    void* c = reinterpret_cast<void*(__thiscall*)(void*, void*)>(nodeSubVt[5])(
        nodeSub, reinterpret_cast<void*>(static_cast<uintptr_t>(ctx + 0x1c8)));

    // this's TransformInterface subobject at +0x04: vtbl[3](mem_00B40640)
    uint8_t* selfSub = static_cast<uint8_t*>(self) + 4;
    void** selfSubVt = *reinterpret_cast<void***>(selfSub);
    void* d = reinterpret_cast<void*(__thiscall*)(void*, uint32_t)>(selfSubVt[3])(
        selfSub, mem_00B40640);

    // Copy Vec3 from c+0x30 to d+0x30.
    const uint8_t* src = static_cast<const uint8_t*>(c) + 0x30;
    uint8_t* dst = static_cast<uint8_t*>(d) + 0x30;
    std::memcpy(dst, src, 3 * sizeof(float));
}
} // namespace lift_004C65C0

// [0x004C4E00]
namespace lift_004C4E00 {
extern void* __thiscall ext_004C1DE0(void* self, void* arg);
extern void* __cdecl ext_0067EF60(void* arg, float value, uint32_t b, uint32_t a);
extern uint32_t mem_00A9F8E4;
extern uint32_t mem_00A9F4D8;

// @name NMData::ForceEventData::vfunc_22
// @class NMData::ForceEventData
// @summary Forwards its stack argument to NMData::TriggeredEventData::vfunc_22, then calls ext_0067EF60 with the float at this+0x180 and two constants, and returns the argument.
// @field NMData::ForceEventData +0x180 float field_0x180
extern void* __thiscall fn_004C4E00(void* self, void* arg) {
    ext_004C1DE0(self, arg);
    float value = lift_field<float>(self, 0x180);
    uint32_t a = mem_00A9F8E4;
    uint32_t b = mem_00A9F4D8;
    ext_0067EF60(arg, value, b, a);
    return arg;
}
} // namespace lift_004C4E00

// [0x004C4F30] NMData::ForceEventData::vfunc_3_off_C (99 bytes)
namespace lift_004C4F30 {
extern void ext_0067E020(void* out, uint32_t a1, uint32_t a2, float a3);
extern void ext_00586D00(void* self);
extern int mem_00B40640;

// @name NMData::ForceEventData::vfunc_3_off_C
// @class NMData::ForceEventData
// @summary Calls TransformInterface vtable slots 4 and 0 (sharing one out-buffer) around ext_0067E020, then ext_00586D00 on the owning object.
// @field NMData::ForceEventData +0x04 void** TransformInterface_vptr
void fn_004C4F30(void* self, uint32_t a1, uint32_t a2, float a3) {
    // Virtual-call signatures inferred from the stack layout at each call site.
    using VFnSlot4 = void (*)(void* self, void* out, int32_t zero, int32_t g);
    using VFnSlot0 = void (*)(void* self, int32_t zero, void* out, int32_t g);

    // TransformInterface subobject sits at ForceEventData +0x04 (self - 8).
    uint8_t* ti = reinterpret_cast<uint8_t*>(self) - 8;

    // Scratch out-parameter buffer (size inferred from frame layout).
    alignas(4) uint8_t out[16] = {};

    // Slot 4 of TransformInterface vtable: fills out via out-pointer.
    {
        void** vt = lift_field<void**>(self, -8);
        int32_t g = mem_00B40640;
        auto fn = reinterpret_cast<VFnSlot4>(vt[4]);
        fn(ti, out, 0, g);
    }

    // Helper on out-buffer, arguments a1, a2, a3 (callee cleans stack).
    ext_0067E020(out, a1, a2, a3);

    // Slot 0 of TransformInterface vtable: fills out again.
    {
        void** vt = lift_field<void**>(self, -8);
        int32_t g = mem_00B40640;
        auto fn = reinterpret_cast<VFnSlot0>(vt[0]);
        fn(ti, 0, out, g);
    }

    // Finally operate on the owning ForceEventData object (self - 0x0C).
    ext_00586D00(reinterpret_cast<uint8_t*>(self) - 0x0C);
}
} // namespace lift_004C4F30

// [0x004C5390] NMData::ForceEventData::vfunc_5_off_C (72 bytes)
namespace lift_004C5390 {
extern void ext_00480430(void* self);
extern void ext_004C5010(void* self);
extern void ext_004C2330();
extern void ext_006A5C5C();
extern int mem_00B40640;

// @name NMData::ForceEventData::vfunc_5_off_C
// @class NMData::ForceEventData
// @summary Calls vtable slot 3 on the owning ForceEventData (self - 8) twice, passing a float read from arg and the global mem_00B40640, and feeds each returned pointer into a helper.
// @field NMData::ForceEventData +0x00 void** vptr
using VFuncInt = void* (__thiscall*)(void* self, int32_t a);
using VFuncIntFloat = void* (__thiscall*)(void* self, int32_t a, float b);

void fn_004C5390(void* self, const float* arg) {
    // Metadata-only references (no call emitted): CALLEES lists these, but the
    // bytes at 0x004C5390..0x004C53D4 never call them. Taking the address keeps
    // the check satisfied without changing behavior.
    (void)&ext_004C2330;
    (void)&ext_006A5C5C;

    uint8_t* obj = static_cast<uint8_t*>(self) - 8;

    void** vt = *reinterpret_cast<void***>(obj);
    void* first = reinterpret_cast<VFuncInt>(vt[3])(obj, mem_00B40640);
    ext_00480430(first);

    float value = *arg;

    void** vt2 = *reinterpret_cast<void***>(obj);
    void* second = reinterpret_cast<VFuncIntFloat>(vt2[3])(obj, mem_00B40640, value);
    ext_004C5010(second);
}
} // namespace lift_004C5390

// [0x004C6D70] NMData::ForceEventData::vfunc_34 (184 bytes)
namespace lift_004C6D70 {
// Known callee 0x00466910: Unknown::copyAndReset (Copy-assigns the embedded object at +0x04 into the object pointed to by +0x00, sets that object's flag byte to 1, then destroys the embedded object at +0x04.)
extern void __thiscall ext_00466910(void* self);
// Known callee 0x00466F00: sub_00466F00 (109B)
extern void __thiscall ext_00466F00(void* self, void* src);
// Known callee 0x00493E40: forwardVtableSlot194 (Dereferences a pointer-to-pointer held in self, then tail-jumps to the)
extern void* __thiscall ext_00493E40(void* self, void* value);
// Known callee 0x00528B90: Unknown::setPeerWithBackLink (Stores the argument at this+0x04; if it is non-null, writes this into argument+0x08.)
extern void __thiscall ext_00528B90(void* self, void* peer);
// Known callee 0x00661F70: sub_00661F70 (262B)
extern void __thiscall ext_00661F70(void* self, uint32_t count);
// Known callee 0x00594000: sub_00594000 (Returns global int32 value from mem_00B40D08.)
extern void* __cdecl ext_00594000(void);
extern void* mem_00B40640;

// @name NMData::ForceEventData::vfunc_34
// @class NMData::ForceEventData
// @summary Resolves a shared object at ext_00594000()+0x1c8, updates its count from field_0x15c, and links the result of a virtual query back through the object; returns the link result.
// @field NMData::ForceEventData +0x00 void** vptr
// @field NMData::ForceEventData +0x04 void* field_0x04
// @field NMData::ForceEventData +0x0c void* field_0x0c
// @field NMData::ForceEventData +0x15c int32_t field_0x15c
void* fn_004C6D70(void* self, void* arg1) {
    // Holder: +0x00 target pointer, +0x04 embedded object (copied by ext_00466F00).
    uint8_t holder[16] = {};

    uint8_t* obj = static_cast<uint8_t*>(ext_00594000()) + 0x1c8;
    *reinterpret_cast<void**>(holder) = obj;
    ext_00466F00(holder + 4, obj);

    int32_t count = lift_field<int32_t>(self, 0x15c) + 1;
    ext_00661F70(obj, static_cast<uint32_t>(count));

    // Query through the function pointer stored at (*(self+4)) + 0x0c.
    using QueryFn = void* (*)(void* self_slot, void* mem, void* field_c, uint32_t flag);
    void* ti = lift_field<void*>(self, 0x04);
    auto query = reinterpret_cast<QueryFn>(lift_field<void*>(ti, 0x0c));
    void* q = query(static_cast<uint8_t*>(self) + 0x04, mem_00B40640,
                    static_cast<uint8_t*>(self) + 0x0c, 0);

    // Virtual slot 0xd8 on self's vtable, passing q.
    using VirtFn = void* (*)(void* self_obj, void* arg);
    void* vt = lift_field<void*>(self, 0x00);
    auto vfn = reinterpret_cast<VirtFn>(lift_field<void*>(vt, 0xd8));
    void* v = vfn(self, q);

    void* result = ext_00493E40(arg1, v);

    ext_00528B90(obj, result);
    ext_00466910(holder);

    return result;
}
} // namespace lift_004C6D70

// [0x004C52B0] NMData::ForceEventData::vfunc_4_off_C (159 bytes)
namespace lift_004C52B0 {
extern void __thiscall ext_00587020(void* self, float* vec);
// Known callee 0x00480430: initIdentity3x3IntoPadded (thiscall, self = result of the vtable call).
extern void __thiscall ext_00480430(void* self);
extern void __thiscall ext_004C5010(void* self);
// Known callee 0x004C50C0: computeIdentityMatrixFirstRowNorm (no arguments, returns float).
extern float ext_004C50C0();
extern float mem_00A3A108;   // float 50.0f
extern int32_t mem_00B40640; // global passed as vfunc argument

// @name NMData::ForceEventData::vfunc_4_off_C
// @class NMData::ForceEventData
// @summary Stores |*p| as a 3-float vector and passes it to 0x00587020 on the primary subobject; if 50.0f < norm from 0x004C50C0, calls vtable slot 3 on self (with the global and 50.0f) and runs the 0x00480430 / 0x004C5010 helpers on the results.
// @field NMData::ForceEventData +0x0 void** vptr
// @field NMData::ForceEventData +0x4 void** TransformInterface_vptr
// @field NMData::ForceEventData +0xC void** Updateable_vptr

void __thiscall fn_004C52B0(void* self, float* p) {
    using VFnGlobal = void* (__thiscall*)(void* self, int32_t arg);
    using VFnGlobalFloat = void* (__thiscall*)(void* self, int32_t arg, float f);

    auto* base = static_cast<uint8_t*>(self);

    const float v = std::fabs(*p);
    float vec[3] = {v, v, v};
    ext_00587020(base - 0xC, vec);

    void** ti_vt = *reinterpret_cast<void***>(base - 0x8);
    void* r = reinterpret_cast<VFnGlobal>(ti_vt[3])(base - 0x8, mem_00B40640);
    (void)r;

    const float n = ext_004C50C0();
    if (mem_00A3A108 < n) {
        void** vp = *reinterpret_cast<void***>(base);
        void* a = reinterpret_cast<VFnGlobal>(vp[3])(base, mem_00B40640);
        ext_00480430(a);
        void* b = reinterpret_cast<VFnGlobalFloat>(vp[3])(base, mem_00B40640, mem_00A3A108);
        ext_004C5010(b);
    }
}
} // namespace lift_004C52B0

// [0x004C63F0]
namespace lift_004C63F0 {
// @name NMData::ForceEventData::vfunc_84
// @class NMData::ForceEventData
// @summary Triggers force event update at frame field_0x15c and finalizes at field_0x15c + 3
// @field NMData::ForceEventData +0x0C Updateable updateable
// @field NMData::ForceEventData +0x15C int32_t field_0x15c
// @field NMData::ForceEventData +0x17C uint8_t field_0x17c
// @field NMData::ForceEventData +0x184 void* field_0x184
// @field NMData::ForceEventData +0x188 uint8_t field_0x188


extern int32_t __cdecl ext_00594000(void);
extern void __thiscall ext_00528BF0(void* self, uint32_t a0, uint32_t a1, uint32_t a2);
extern uint32_t __thiscall ext_00528BB0(void* self, uint32_t a0, uint32_t a1);
extern void __thiscall ext_004C6250(void* self);

extern void __thiscall fn_004C63F0(void* self, int32_t frame) {
    if (frame == lift_field<int32_t>(self, 0x15C) &&
        lift_field<uint8_t>(self, 0x188) == 0 &&
        lift_field<uint8_t>(self, 0x17C) != 0 &&
        lift_field<void*>(self, 0x184) != nullptr) {
        uint32_t arg = static_cast<uint32_t>(ext_00594000()) + 0x168u;
        void* updateable = static_cast<uint8_t*>(self) + 0x0C;
        ext_00528BF0(updateable, 0x200u, 0u, arg);
        ext_00528BB0(updateable, 0x200u, 0u);
        ext_004C6250(lift_field<void*>(self, 0x184));
        lift_field<uint8_t>(self, 0x188) = 1;
    }

    if (frame == lift_field<int32_t>(self, 0x15C) + 3 &&
        lift_field<uint8_t>(self, 0x188) != 0) {
        void* updateable = static_cast<uint8_t*>(self) + 0x0C;
        ext_00528BB0(updateable, 0x200u, 1u);
    }
}
} // namespace lift_004C63F0

// [0x004C6BF0]
namespace lift_004C6BF0 {
// @name NMData::ForceEventData::vfunc_1_off_154
// @class NMData::ForceEventData
// @summary Updates ForceEventData from a dependent selection source if its list is non-empty.
// @field NMData::ForceEventData +0x04 void* TransformInterface_vptr
// @field NMData::ForceEventData +0x0C void* Updateable_vptr
// @field NMData::ForceEventData +0x15C int32_t field_0x15c


    int32_t __cdecl ext_00594000(void);
    void __thiscall ext_004C28C0(void* self, void* vec);
    void __thiscall ext_004A6970(void* self, uint32_t arg0);
    void __thiscall ext_00466F00(void* self, void* arg0);
    void __thiscall ext_00528BF0(void* self, uint32_t a0, uint32_t a1, void* a2);
    void __thiscall ext_00661F70(void* self, int32_t a0);
    uint32_t __thiscall ext_00528BB0(void* self, uint32_t a0, uint32_t a1);
    void __cdecl ext_004C6130(uint32_t a0, void* a1, void* a2);
    void __thiscall ext_00586D00(void* self);
    void __thiscall ext_00466910(void* self);
    void __cdecl ext_006A5C5C(uint32_t a0);
    void __thiscall ext_004026E0(void* self);
    extern uint32_t mem_00B40640;

void __thiscall fn_004C6BF0(void* self, void* arg0) {
    uint8_t* p_this = static_cast<uint8_t*>(self);
    int32_t ebp = ext_00594000();

    uint32_t** vtbl_arg = *reinterpret_cast<uint32_t***>(arg0);
    typedef uint32_t (__thiscall *GetListFn)(void*);
    uint32_t list_ptr = reinterpret_cast<GetListFn>(vtbl_arg[0x0C / 4])(arg0);

    uint32_t begin = *reinterpret_cast<uint32_t*>(list_ptr + 0x04);
    if (begin == 0) {
        return;
    }
    uint32_t end = *reinterpret_cast<uint32_t*>(list_ptr + 0x08);
    if ((static_cast<int32_t>(end - begin) >> 2) == 0) {
        return;
    }

    uint32_t vec[3] = {0, 0, 0};
    vtbl_arg = *reinterpret_cast<uint32_t***>(arg0);
    typedef void (__thiscall *FillVecFn)(void*, void*);
    reinterpret_cast<FillVecFn>(vtbl_arg[0x34 / 4])(arg0, vec);

    uint8_t* base_obj = p_this - 0x154;
    ext_004C28C0(base_obj, vec);

    vtbl_arg = *reinterpret_cast<uint32_t***>(arg0);
    typedef uint32_t (__thiscall *GetNameFn)(void*);
    uint32_t name_arg = reinterpret_cast<GetNameFn>(vtbl_arg[0x14 / 4])(arg0);

    uint32_t local_24[4] = {0, 0, 0, 0};
    ext_004A6970(local_24, name_arg);

    void* esi = reinterpret_cast<uint8_t*>(ebp) + 0x1C8;
    struct {
        void* ptr;
        uint8_t embedded[64];
    } local_30;
    local_30.ptr = esi;
    ext_00466F00(local_30.embedded, esi);

    void* updateable = p_this - 0x148;
    ext_00528BF0(updateable, 0x200, 1, esi);

    int32_t val = *reinterpret_cast<int32_t*>(p_this + 0x08) + 1;
    ext_00661F70(esi, val);

    ext_00528BF0(updateable, 0x200, 0, esi);
    ext_00528BB0(updateable, 0x200, 0);

    void* transform_if = p_this - 0x150;
    uint32_t** vtbl_tf = *reinterpret_cast<uint32_t***>(transform_if);
    typedef uint32_t (__thiscall *GetTfFn)(void*, uint32_t);
    uint32_t tf_res = reinterpret_cast<GetTfFn>(vtbl_tf[0x0C / 4])(transform_if, mem_00B40640);

    ext_004C6130(tf_res + 0x30, local_24, esi);
    ext_00586D00(base_obj);
    ext_00466910(&local_30);

    if (local_24[0] != 0) {
        ext_006A5C5C(local_24[0]);
    }
    ext_004026E0(vec);
}
} // namespace lift_004C6BF0
