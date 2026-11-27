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
