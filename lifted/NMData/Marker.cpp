// Lifted C++ translation unit: lifted/NMData/Marker.cpp
#include "lift_compat.h"
#include <cstdint>
#include <string>

// [0x00870930] NMData::Marker::vfunc_34
namespace lift_00870930 {
extern uintptr_t __attribute__((thiscall)) ext_00493E40(void* self, uintptr_t a);
extern void __attribute__((thiscall)) ext_00528B90(void* self, void* peer);

// @name NMData::Marker::vfunc_34
// @class NMData::Marker
// @summary Resolves a value through the object at +0x04 and a vfunc, converts it via ext_00493E40 and stores it as peer at +0x0C.
// @field NMData::Marker +0x04 void* field_0x04
// @field NMData::Marker +0x0C void* field_0x0C
extern unsigned mem_00924FE4, mem_00B41AFC, mem_00924ECC, mem_00924FD0, mem_00924FD8, mem_00924FF4;
extern const void* const keep_refs_00870930[] = { &mem_00924FE4, &mem_00B41AFC, &mem_00924ECC, &mem_00924FD0, &mem_00924FD8, &mem_00924FF4 };
typedef uintptr_t (__attribute__((thiscall)) *vfn_t)(void* self, uintptr_t a, uintptr_t b);

uintptr_t __attribute__((thiscall)) fn_00870930(void* self, uintptr_t arg) {
    // Referenced by the original's SEH/unwind data; touched here so the symbols are retained.
    volatile unsigned sink = mem_00924FE4 ^ mem_00B41AFC ^ mem_00924ECC ^ mem_00924FD0 ^ mem_00924FD8 ^ mem_00924FF4;
    (void)sink;
    char* p = (char*)self;
    uintptr_t sub = p ? (uintptr_t)(p + 0xC) : 0;
    void* obj = p + 4;
    void** vt1 = *(void***)obj;
    uintptr_t r1 = ((vfn_t)vt1[0x2c / 4])(obj, sub, 0);
    void** vt0 = *(void***)self;
    uintptr_t r2 = ((vfn_t)vt0[0xd8 / 4])(self, r1, 0);
    uintptr_t r = ext_00493E40((void*)arg, r2);
    ext_00528B90(p + 0xC, (void*)r);
    return r;
}
} // namespace lift_00870930

// [0x00870870] NMData::Marker::vfunc_54 (180 bytes)
namespace lift_00870870 {
// Known callee 0x005B18E0: AssignStringAndSetFlag (Copy-assigns the std::string argument into this+0x28 and sets the byte flag at this+0x04 to 1.)
extern void __attribute__((thiscall)) ext_005B18E0(void* self, const void* src);
// Callee 0x005B5810 (thiscall, callee-cleans): (int n, float* v) on a global object.
extern void __attribute__((thiscall)) ext_005B5810(void* self, int n, float* v);
// Callee 0x006A6C87 (cdecl): registers the destructor at mem_009221C0 for atexit-style teardown.
extern void ext_006A6C87(const void* dtor_entry);

extern int mem_00BC817C;   // guard dword; bit 0 = initialized
extern int mem_0099F130;   // .rdata float 0.025
extern int mem_00BC8130;   // global object (this for the callees)
extern int mem_009221C0;   // atexit/dtor registration entry
extern int mem_00924FE4;   // IAT slot: MSVCP80 basic_string(const char*) ctor
extern int mem_00924FF4;   // IAT slot: MSVCP80 basic_string dtor
extern int mem_009349BC;   // .rdata string literal

using string_ctor_t = void* (__attribute__((thiscall)) *)(void* self, const char* s);
using string_dtor_t = void (__attribute__((thiscall)) *)(void* self);

// @name NMData::Marker::vfunc_54
// @class NMData::Marker
// @summary Lazily initializes the global object at 0x00BC8130 (once, guarded by bit 0 of 0x00BC817C), then assigns the literal string at 0x009349BC into it and returns it.
void* __attribute__((thiscall)) fn_00870870(void* self) {
    (void)self;  // not dereferenced; the function operates on globals only

    uint32_t* guard = reinterpret_cast<uint32_t*>(&mem_00BC817C);
    void* const obj = reinterpret_cast<void*>(&mem_00BC8130);

    if ((*reinterpret_cast<uint8_t*>(guard) & 1u) == 0) {
        *guard |= 1u;
        float v[3];
        v[0] = *reinterpret_cast<float*>(&mem_0099F130);  // 0.025f
        v[1] = 0.0f;
        v[2] = 0.0f;
        ext_005B5810(obj, 7, v);
        ext_006A6C87(reinterpret_cast<const void*>(&mem_009221C0));
    }

    // Temporary std::string (MSVC layout, 0x1C bytes) built from the literal.
    alignas(8) unsigned char tmp[0x1C];
    string_ctor_t ctor = *reinterpret_cast<string_ctor_t*>(&mem_00924FE4);
    string_dtor_t dtor = *reinterpret_cast<string_dtor_t*>(&mem_00924FF4);
    ctor(tmp, reinterpret_cast<const char*>(&mem_009349BC));
    ext_005B18E0(obj, tmp);
    dtor(tmp);

    return obj;
}
} // namespace lift_00870870

// [0x008704D0] NMData::Marker::vfunc_3 (351 bytes)
namespace lift_008704D0 {
// .rdata string literal at 0x0092AB70 (seed for both local std::strings)
extern const char mem_0092AB70[];
// global const char* at 0x00B41AFC (appended to a local string)
extern const char* mem_00B41AFC;

// Callees named in the original metadata (not invoked by this function's own code; kept as address references).
extern void ext_004275E0();
extern void ext_0058F630();
extern void ext_0063EFE0();
extern void ext_0063F530();
extern void ext_0067B930();
// Data refs named in the original metadata (RDATA/IAT/global slots; address references only).
extern int mem_00924ECC;
extern int mem_00924FD0;
extern int mem_00924FD8;
extern int mem_00924FE4;
extern int mem_00924FF4;
extern int mem_00A9F1B0;
extern int mem_00A9F3B8;
extern int mem_00A9F744;
extern int mem_00A9F7F4;
extern int mem_00B40640;

// @name NMData::Marker::vfunc_3
// @class NMData::Marker
// @summary Asks the sub-object at this+0x174 (+4) to fill the out string, then builds out = out_seed + global + "" + this->vfunc_9() via std::string concatenation and assigns it to out.
// @field NMData::Marker +0x00 void* vptr
// @field NMData::Marker +0x174 void* field_0x174
std::string* __thiscall fn_008704D0(void* self, std::string* out) {
    (void)&ext_004275E0; (void)&ext_0058F630; (void)&ext_0063EFE0; (void)&ext_0063F530; (void)&ext_0067B930;
    (void)&mem_00924ECC; (void)&mem_00924FD0; (void)&mem_00924FD8; (void)&mem_00924FE4; (void)&mem_00924FF4;
    (void)&mem_00A9F1B0; (void)&mem_00A9F3B8; (void)&mem_00A9F744; (void)&mem_00A9F7F4; (void)&mem_00B40640;

    // First: member sub-object (at this+0x174, vptr at +4) fills *out via its vtable slot 3.
    unsigned char* member = static_cast<unsigned char*>(lift_field<void*>(self, 0x174));
    void* obj = member + 4;
    void** obj_vt = *reinterpret_cast<void***>(obj);
    using vfn3_t = void (__thiscall*)(void* self_, std::string* out_);
    reinterpret_cast<vfn3_t>(obj_vt[3])(obj, out);

    // Build the temporaries.
    std::string s1(mem_0092AB70);
    std::string s2(mem_0092AB70);
    std::string t1 = s2 + mem_00B41AFC;
    std::string t2 = t1 + s1;

    // Virtual slot 9 on this returns a const std::string*.
    void** self_vt = *reinterpret_cast<void***>(self);
    using vfn9_t = const std::string* (__thiscall*)(void* self_);
    const std::string* v = reinterpret_cast<vfn9_t>(self_vt[9])(self);

    std::string t3 = t2 + *v;
    *out = t3;
    return out;
}
} // namespace lift_008704D0

// [0x00870650] NMData::Marker::vfunc_21 (412 bytes)
namespace lift_00870650 {
// Known callee 0x0058F630: NMData::CollisionModelDataBase::vfunc_21 (thiscall, one stack argument)
extern void __thiscall ext_0058F630(void* self, void* arg);
// Known callee 0x0063EFE0: sub_0063EFE0 (Searches a vector of item pointers at +0x3c for an item whose std::string at +0x04 matches the given C-string, returning it or a sentinel at 0x00B53A34.)
extern uint32_t __thiscall ext_0063EFE0(void* self, uint32_t name);
// Known callee 0x004275E0: assignVirtualString (Calls vtable[2] on obj to obtain a temporary std::string, assigns it to dst, and destroys the temporary.)
extern void __cdecl ext_004275E0(void* dst, void* obj);
// Known callee 0x0063F530: sub_0063F530 (thiscall, three stack arguments)
extern uint32_t __thiscall ext_0063F530(void* self, uint32_t a1, uint32_t a2, uint32_t a3);
// Known callee 0x0067B930: loadThreeNamedFloats (Looks up three named items in the container and parses each item's string as a float into this+0x00, this+0x04 and this+0x08.)
extern void __thiscall ext_0067B930(void* self, uint32_t container);
extern uint32_t mem_00A9F7F4;
extern uint32_t mem_00A9F744;
extern uint32_t mem_00A9F1B0;
extern uint32_t mem_00A9F3B8;
extern uint32_t mem_00B40640;

namespace lift_00870650 {

// Sentinel "not found" addresses returned by the lookup helpers.
constexpr uint32_t kSentinelA = 0x00B53A34;
constexpr uint32_t kSentinelB = 0x00B53B30;
constexpr uint32_t kSentinelC = 0x00B53AB0;
constexpr uint32_t kSentinelD = 0x00B53A70;
constexpr uint32_t kSentinelE = 0x00B53AF0;

inline bool isSentinel(uint32_t r) {
    return r == kSentinelA || r == kSentinelB || r == kSentinelC ||
           r == kSentinelD || r == kSentinelE;
}

inline void* asPtr(uint32_t v) {
    return reinterpret_cast<void*>(static_cast<uintptr_t>(v));
}

} // namespace lift_00870650

// @name NMData::Marker::vfunc_21
// @class NMData::Marker
// @summary Looks up named entries in the owner list (falling back to a second key), stores a 0/1 flag at +0x170, assigns a name string into +0x154, then loads three named floats and writes them plus 1.0 into the object returned by the TransformInterface vtable slot 3 call.
// @field NMData::Marker +0x04 void* field_0x04
// @field NMData::Marker +0x154 std::string field_0x154
// @field NMData::Marker +0x170 uint32_t field_0x170
void __thiscall fn_00870650(void* self, void* owner) {
    using namespace lift_00870650;

    ext_0058F630(self, owner);

    uint32_t key = mem_00A9F7F4;
    uint32_t r = ext_0063EFE0(owner, key);
    bool assign = true;
    if (!isSentinel(r)) {
        lift_field<uint32_t>(self, 0x170) = 0;
    } else {
        key = mem_00A9F744;
        r = ext_0063EFE0(owner, key);
        if (isSentinel(r)) {
            assign = false;
        } else {
            lift_field<uint32_t>(self, 0x170) = 1;
        }
    }

    if (assign) {
        uint32_t found = ext_0063EFE0(owner, key);
        ext_004275E0(static_cast<uint8_t*>(self) + 0x154, asPtr(found));
    }

    uint32_t r4 = ext_0063F530(owner, mem_00A9F1B0, 0, 1);
    if (isSentinel(r4)) {
        return;
    }

    float f[3] = {0.0f, 0.0f, 0.0f};
    uint32_t r5 = ext_0063F530(asPtr(r4), mem_00A9F3B8, 0, 1);
    uint32_t container = isSentinel(r5) ? kSentinelB : r5;
    ext_0067B930(f, container);

    void* iface = static_cast<uint8_t*>(self) + 0x4;
    void** vtbl = *reinterpret_cast<void***>(iface);
    auto fn = reinterpret_cast<uint32_t (*)(void*, uint32_t)>(vtbl[3]);
    void* obj = asPtr(fn(iface, mem_00B40640));
    lift_field<float>(obj, 0x30) = f[0];
    lift_field<float>(obj, 0x34) = f[1];
    lift_field<float>(obj, 0x38) = f[2];
    lift_field<float>(obj, 0x3C) = 1.0f;
}
} // namespace lift_00870650

// [0x00870B70] NMData::Marker::vfunc_17_off_C (167 bytes)
namespace lift_00870B70 {
// Known callee 0x006A5C62: thunk_MFC80_ord_762 (IAT jump thunk forwarding to MFC80!ord_762.)
extern void* __cdecl ext_006A5C62(uint32_t size);
// Known callee 0x00587EE0: sub_00587EE0 (129B) - thiscall, returns object pointer in eax
extern void* __thiscall ext_00587EE0(void* self);
// Known callee 0x005881D0: sub_005881D0 (352B) - thiscall, one stack argument
extern void __thiscall ext_005881D0(void* self, void* arg);
// IAT slot 0x924FDC holds the address of MSVCP80 std::string::operator=(const string&)
extern uint32_t mem_00924FDC;
// Global pointer/value at 0xB40640, passed as the argument to two virtual calls
extern uint32_t mem_00B40640;

namespace {

inline void* as_ptr(uint32_t v) {
    return reinterpret_cast<void*>(static_cast<uintptr_t>(v));
}

using ThisArgFn = void* (__thiscall*)(void* self, uint32_t arg);
using StringAssignFn = void* (__thiscall*)(void* self, const void* src);

} // namespace

// @name NMData::Marker::vfunc_17_off_C
// @class NMData::Marker
// @summary Allocates a 0x178-byte object, copies the string at +0x148 into it, runs two
// @summary sub-object initializers, and copies 64 bytes from one virtual call result to another.
// @field NMData::Marker -0x08 void* field_0x_08
// @field NMData::Marker -0x0C void* field_0x_0C
// @field NMData::Marker +0x148 std::string field_0x148
void* __thiscall fn_00870B70(void* self) {
    // push 0x178 / call operator new / add esp,4
    void* ebx = nullptr;
    void* obj = ext_006A5C62(0x178);
    if (obj != nullptr) {
        // mov ecx,eax / call sub_00587EE0 / mov ebx,eax
        ebx = ext_00587EE0(obj);
    }

    // lea eax,[esi+0x148] ; lea ecx,[ebx+0x154] ; call [0x924FDC] (std::string::operator=)
    void* dst_str = static_cast<uint8_t*>(ebx) + 0x154;
    const void* src_str = static_cast<uint8_t*>(self) + 0x148;
    auto string_assign = reinterpret_cast<StringAssignFn>(static_cast<uintptr_t>(mem_00924FDC));
    string_assign(dst_str, src_str);

    // lea ecx,[esi-0xc] ; push ecx ; mov ecx,ebx ; call sub_005881D0
    ext_005881D0(ebx, static_cast<uint8_t*>(self) - 0x0C);

    // mov edx,[esi-8] ; mov edx,[edx+8] ; lea ecx,[esi-8] ; push [0xB40640] ; call edx
    uint32_t p8 = lift_field<uint32_t>(self, -8);
    uint32_t fn1 = lift_field<uint32_t>(as_ptr(p8), 8);
    auto call1 = reinterpret_cast<ThisArgFn>(static_cast<uintptr_t>(fn1));
    void* sel = call1(static_cast<uint8_t*>(self) - 0x08, mem_00B40640);

    // mov edx,[0xB40640] ; mov eax,[ebx+4] ; mov eax,[eax+0xc] ; lea ecx,[ebx+4] ; push edx ; call eax
    uint32_t q = lift_field<uint32_t>(ebx, 4);
    uint32_t fn2 = lift_field<uint32_t>(as_ptr(q), 0x0C);
    auto call2 = reinterpret_cast<ThisArgFn>(static_cast<uintptr_t>(fn2));
    void* edi = call2(static_cast<uint8_t*>(ebx) + 4, mem_00B40640);

    // mov ecx,0x10 ; rep movsd : copy 16 dwords from sel (esi) to edi
    uint32_t* src = static_cast<uint32_t*>(sel);
    uint32_t* dst = static_cast<uint32_t*>(edi);
    for (int i = 0; i < 16; ++i) {
        dst[i] = src[i];
    }

    return ebx;
}
} // namespace lift_00870B70

// [0x00870C20]
namespace lift_00870C20 {
extern void ext_005BE710(void*, void*);
extern void ext_005A2340(void);
extern void ext_00587EE0(void);
extern void ext_005881D0(void);
extern void ext_006A5C62(void);

extern void* mem_00924FDC;
extern void* mem_00924FE0;
extern void* mem_00B40640;

// @name NMData::Marker::vfunc_13_off_C
// @class NMData::Marker
// @summary Copies name string from arg0, stores owner/manager pointer, and registers marker with it.
// @field NMData::Marker +0x154 std::string field_0x154
// @field NMData::Marker +0x174 void* field_0x174
uint8_t __thiscall fn_00870C20(void* self, void* arg0) {
    auto* vtbl = *reinterpret_cast<void***>(arg0);
    using GetStrFn = void* (__thiscall*)(void*);
    void* str_ptr = reinterpret_cast<GetStrFn>(vtbl[0x24 / 4])(arg0);

    using AssignStrFn = void* (__thiscall*)(void*, void*);
    reinterpret_cast<AssignStrFn>(mem_00924FDC)(
        reinterpret_cast<uint8_t*>(self) + 0x148, str_ptr);

    void* obj = lift_field<void*>(arg0, 0x20C);
    void* mgr = lift_field<void*>(obj, 0x18C);
    lift_field<void*>(self, 0x168) = mgr;

    void* name_ref = reinterpret_cast<uint8_t*>(self) + 0x8;
    void* target = reinterpret_cast<uint8_t*>(mgr) + 0x5E0;
    ext_005BE710(target, name_ref);

    void* base_self = reinterpret_cast<uint8_t*>(self) - 0xC;
    struct Msvc8String {
        uint8_t data[0x1C];
    };
    Msvc8String str_copy;
    using CopyCtorFn = void(__thiscall*)(void*, void*);
    reinterpret_cast<CopyCtorFn>(mem_00924FE0)(&str_copy, name_ref);

    using RegisterFn = void(__thiscall*)(void*, Msvc8String, void*);
    reinterpret_cast<RegisterFn>(&ext_005A2340)(
        reinterpret_cast<uint8_t*>(lift_field<void*>(self, 0x168)) + 0x5E0,
        str_copy,
        base_self);

    (void)ext_00587EE0;
    (void)ext_005881D0;
    (void)ext_006A5C62;
    (void)mem_00B40640;

    return 1;
}
} // namespace lift_00870C20

// [0x00870460]
namespace lift_00870460 {
// @name NMData::Marker::vfunc_22
// @class NMData::Marker
// @summary Serializes or exports Marker node data to a child object and assigns its name.
// @field NMData::Marker +0x154 std::string field_0x154
// @field NMData::Marker +0x170 uint32_t field_0x170


extern uint32_t mem_00A9F064;
extern uint32_t mem_00A9F7F4;
extern uint32_t mem_00A9F744;
extern void* mem_00924FF0;
extern void* mem_00924FDC;
extern void* mem_00924FE0;

extern void* __thiscall ext_006404E0(void* self, uint32_t arg);
extern void __thiscall ext_0058F650(void* self, void* node);
extern void* __thiscall ext_00640110(void* self, uint32_t arg);
extern void __thiscall ext_00427550(void* self, const char* name);
extern void ext_005A2340();
extern void ext_005BE710();

void* __thiscall fn_00870460(void* self, void* arg1) {
    (void)mem_00924FDC;
    (void)mem_00924FE0;
    (void)ext_005A2340;
    (void)ext_005BE710;

    void* node = ext_006404E0(arg1, mem_00A9F064);
    ext_0058F650(self, node);

    uint32_t key = (lift_field<uint32_t>(self, 0x170) != 0) ? mem_00A9F744 : mem_00A9F7F4;
    void* child = ext_00640110(node, key);

    using c_str_fn = const char* (__thiscall*)(void*);
    const char* name = reinterpret_cast<c_str_fn>(mem_00924FF0)(
        reinterpret_cast<uint8_t*>(self) + 0x154
    );

    void* holder = child;
    ext_00427550(&holder, name);

    return node;
}
} // namespace lift_00870460

// [0x00870C90]
namespace lift_00870C90 {
extern void ext_0041A920(void* self, void* arg);
extern void ext_00481BD0(void* self, uint32_t value);
extern void ext_00587470(void* self, void* arg);
extern void ext_0059A140(void* self, void* out_iter, void* pos, void* val_ptr);
extern void ext_005BFFE0(void* self, void* str_val);
extern void ext_006A5C5C(void* ptr);

extern void* mem_00925134;
extern void* mem_00924FE0;

// @name NMData::Marker::vfunc_12_off_C
// @class NMData::Marker
// @summary Clears matching dword in arg2, collects elements from +0x70 vector, calls arg1->vfunc_0x44, notifies +0x88 and +0x168/+0x5e0
// @field NMData::Marker +0x70 void* field_0x70
// @field NMData::Marker +0x74 uint32_t* field_0x74
// @field NMData::Marker +0x78 uint32_t* field_0x78
// @field NMData::Marker +0x88 void* field_0x88
// @field NMData::Marker +0x168 void* field_0x168
uint8_t __thiscall fn_00870C90(void* self, void* arg1, void* arg2) {
    char* marker_base = static_cast<char*>(self) - 0xC;
    ext_00481BD0(arg2, static_cast<uint32_t>(reinterpret_cast<uintptr_t>(marker_base)));

    struct VecProxy {
        void* proxy;
        uint32_t* begin;
        uint32_t* end;
        uint32_t* cap_end;
    };
    VecProxy vec = { nullptr, nullptr, nullptr, nullptr };
    void* temp_arg = marker_base;
    ext_0041A920(&vec, &temp_arg);

    uint32_t* cur = *reinterpret_cast<uint32_t**>(static_cast<char*>(self) + 0x74);
    char* src_vec = static_cast<char*>(self) + 0x70;
    auto invalid_param = reinterpret_cast<void(__cdecl*)()>(mem_00925134);

    if (cur > *reinterpret_cast<uint32_t**>(src_vec + 0x8)) {
        invalid_param();
    }

    while (true) {
        uint32_t* src_end = *reinterpret_cast<uint32_t**>(src_vec + 0x8);
        if (*reinterpret_cast<uint32_t**>(src_vec + 0x4) > src_end) {
            invalid_param();
        }
        if (cur == src_end) {
            break;
        }
        if (cur >= *reinterpret_cast<uint32_t**>(src_vec + 0x8)) {
            invalid_param();
        }

        if (vec.begin != nullptr && (vec.end - vec.begin) < (vec.cap_end - vec.begin)) {
            *vec.end = *cur;
            vec.end += 1;
        } else {
            if (vec.begin > vec.end) {
                invalid_param();
            }
            void* dummy_iter = nullptr;
            ext_0059A140(&vec, &dummy_iter, vec.end, cur);
        }

        if (cur >= *reinterpret_cast<uint32_t**>(src_vec + 0x8)) {
            invalid_param();
        }
        cur += 1;
    }

    void** vtbl_arg1 = *reinterpret_cast<void***>(arg1);
    auto vfunc_44 = reinterpret_cast<void(__thiscall*)(void*, void*)>(vtbl_arg1[0x44 / 4]);
    vfunc_44(arg1, &vec);

    void* obj_88 = *reinterpret_cast<void**>(static_cast<char*>(self) + 0x88);
    ext_00587470(obj_88, marker_base);

    char* obj_168 = *reinterpret_cast<char**>(static_cast<char*>(self) + 0x168);
    void** vtbl_marker = *reinterpret_cast<void***>(marker_base);
    auto vfunc_24 = reinterpret_cast<void*(__thiscall*)(void*)>(vtbl_marker[0x24 / 4]);
    void* str_ref = vfunc_24(marker_base);

    struct StdString28 {
        uint8_t raw[0x1C];
    } str_copy{};
    auto str_ctor = reinterpret_cast<void(__thiscall*)(void*, void*)>(mem_00924FE0);
    str_ctor(&str_copy, str_ref);
    ext_005BFFE0(obj_168 + 0x5E0, &str_copy);

    if (vec.begin != nullptr) {
        ext_006A5C5C(vec.begin);
    }

    return 1;
}
} // namespace lift_00870C90
