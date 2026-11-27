// Lifted C++ translation unit: lifted/NMData/EffectorWithMemoryData.cpp
#include "lift_compat.h"
// Imported MSVCP80 std::string helpers (MSVC mangled names in the original binary).
// Declared with opaque 32-bit string-object pointers; layout is MSVC std::string (SSO, 0x18 bytes).
extern "C" void* __thiscall ext_string_ctor_cstr(void* self, const char* s);
extern "C" void* ext_string_concat_str_str(void* result, const void* lhs, const void* rhs);
extern "C" void* ext_string_concat_str_cstr(void* result, const void* lhs, const char* rhs);
extern "C" void __thiscall ext_string_dtor(void* self);
// Read-only C string literals in .rdata.
extern "C" const char mem_00972218[];
extern "C" const char mem_0093BF0C[];
#include <string>
#include <cstdint>

// [0x0060C2C0] NMData::EffectorWithMemoryData::vfunc_20 (157 bytes)
namespace lift_0060C2C0 {
// .rdata string literals (0x00972218 prefix, 0x0093BF0C suffix).
extern const char mem_00972218[];
extern const char mem_0093BF0C[];
// MSVCP80 IAT slots (std::string ctor / concat / dtor). Replaced by portable std::string ops below.
extern void* mem_00924ECC;
extern void* mem_00924FD0;
extern void* mem_00924FE4;
extern void* mem_00924FF4;

// @name NMData::EffectorWithMemoryData::vfunc_20
// @class NMData::EffectorWithMemoryData
// @summary Builds a descriptive std::string: literal prefix + this member string at +0x04 + literal suffix, returned by value.
// @field NMData::EffectorWithMemoryData +0x04 std::string field_0x04
std::string fn_0060C2C0(void* self) {
    (void)&mem_00924ECC;
    (void)&mem_00924FD0;
    (void)&mem_00924FE4;
    (void)&mem_00924FF4;
    auto* base = static_cast<unsigned char*>(self);
    const auto& member = *reinterpret_cast<const std::string*>(base + 0x04);
    std::string result = std::string(mem_00972218) + member;
    return result + std::string(mem_0093BF0C);
}
} // namespace lift_0060C2C0

// [0x0060D3E0] NMData::EffectorWithMemoryData::vfunc_15 (140 bytes)
namespace lift_0060D3E0 {
// Known callee 0x006A5C62: thunk_MFC80_ord_762 (IAT jump thunk forwarding to MFC80!ord_762.)
// cdecl allocator, called with 0x88 bytes.
extern void* ext_006A5C62(size_t size);
// Known callee 0x00607E70: sub_00607E70 (85B). Thiscall, no stack args; constructs the new object.
extern void __thiscall ext_00607E70(void* self);
// Known callee 0x0060CDE0: NMData::EffectorData::vfunc_15 (If arg3 is null, allocates and constructs a 0x60-byte object; then fills it from arg1 and this, invokes its vtable slot 0x30 with this, stores it at this+0x40 and returns it.)
extern void* __thiscall ext_0060CDE0(void* self, void* arg1, uint32_t arg2, void* arg3);

// @name NMData::EffectorWithMemoryData::vfunc_15
// @class NMData::EffectorWithMemoryData
// @summary Stdcall (ret 0xC, ECX = this): allocates and constructs a 0x88-byte object, copies this+0x5C (float) into object+0x60 and this+0x60 into object+0x68, then forwards to NMData::EffectorData::vfunc_15 with the new object as arg3 and returns its result.
// @field NMData::EffectorWithMemoryData +0x5C float field_0x5c
// @field NMData::EffectorWithMemoryData +0x60 uint32_t field_0x60
extern void* __thiscall fn_0060D3E0(void* self, void* arg1, uint32_t arg2, void* arg3) {
    // arg3 is pushed by the original but never read here (ret 0xC only cleans it up).
    (void)arg3;

    // The original's SEH frame setup/teardown (fs:[0] push/restore, state-byte writes) is
    // compiler boilerplate and is not reproduced.
    void* obj = ext_006A5C62(0x88);
    if (obj != nullptr) {
        ext_00607E70(obj);
    }

    lift_field<uint32_t>(obj, 0x68) = lift_field<uint32_t>(self, 0x60);
    lift_field<float>(obj, 0x60) = lift_field<float>(self, 0x5C);

    return ext_0060CDE0(self, arg1, arg2, obj);
}
} // namespace lift_0060D3E0

// [0x0060C910] NMData::EffectorWithMemoryData::vfunc_13 (175 bytes)
namespace lift_0060C910 {
// Known callee 0x0060C640: NMData::EffectorData::vfunc_13 (thiscall: ECX = this, stack arg1).
// Initializes base data from arg1, then reads float/int/bool attributes into this+0x44..+0x58.
extern void __thiscall ext_0060C640(void* self, void* arg1);
// Known callee 0x0063F530 (thiscall: ECX = arg1; stack: name, 0, 1). Returns a pointer-sized
// lookup result in EAX.
extern uint32_t __thiscall ext_0063F530(void* self, const char* name, uint32_t zero, uint32_t one);
// Known callee 0x0053F5F0: parseIntFromStringProp (ECX = &slot; stack: out, &slot).
// Calls ext_004275C0 to get a string, converts it with atoi, and stores the integer at *out.
extern void __thiscall ext_0053F5F0(void* slot, void* out, void* slot_arg);
// Known callee 0x0046C0A0: parseFloatFromString (ECX = &slot; stack: out, &slot).
// Calls ext_004275C0 to get a std::string, converts it with atof, and stores the float at *out.
extern void __thiscall ext_0046C0A0(void* slot, float* out, void* slot_arg);

// .data globals holding C string pointers (attribute names).
extern uint32_t mem_00A9F0BC;
extern uint32_t mem_00A9EFEC;
// Sentinel objects compared by address against the lookup result (immediates in the original).
extern int mem_00B53A34;
extern int mem_00B53B30;
extern int mem_00B53AB0;
extern int mem_00B53A70;
extern int mem_00B53AF0;

namespace {
constexpr uint32_t kSentinelA34 = 0x00B53A34u;
constexpr uint32_t kSentinelB30 = 0x00B53B30u;
constexpr uint32_t kSentinelAB0 = 0x00B53AB0u;
constexpr uint32_t kSentinelA70 = 0x00B53A70u;
constexpr uint32_t kSentinelAF0 = 0x00B53AF0u;

// Any of the sentinel objects is replaced by the default sentinel kSentinelB30.
uint32_t normalize_sentinel(uint32_t r) {
    if (r == kSentinelA34 || r == kSentinelB30 || r == kSentinelAB0 || r == kSentinelA70 ||
        r == kSentinelAF0) {
        return kSentinelB30;
    }
    return r;
}
} // namespace

// @name NMData::EffectorWithMemoryData::vfunc_13
// @class NMData::EffectorWithMemoryData
// @summary Stdcall (ret 4, ECX = this): runs NMData::EffectorData::vfunc_13 on arg1, then reads a float (this+0x5C) and a uint32 (this+0x60) attribute via the name lookup, normalizing sentinel results.
// @field NMData::EffectorWithMemoryData +0x5C float field_0x5c
// @field NMData::EffectorWithMemoryData +0x60 uint32_t field_0x60
void __thiscall fn_0060C910(void* self, void* arg1) {
    // Address-only references to sentinel globals (see normalize_sentinel).
    (void)&mem_00B53A34;
    (void)&mem_00B53B30;
    (void)&mem_00B53AB0;
    (void)&mem_00B53A70;
    (void)&mem_00B53AF0;

    ext_0060C640(self, arg1);

    // Integer attribute into this+0x60.
    const char* name_int = reinterpret_cast<const char*>(static_cast<uintptr_t>(mem_00A9F0BC));
    uint32_t slot = normalize_sentinel(ext_0063F530(arg1, name_int, 0, 1));
    ext_0053F5F0(&slot, &lift_field<uint32_t>(self, 0x60), &slot);

    // Float attribute into this+0x5C.
    const char* name_float = reinterpret_cast<const char*>(static_cast<uintptr_t>(mem_00A9EFEC));
    slot = normalize_sentinel(ext_0063F530(arg1, name_float, 0, 1));
    ext_0046C0A0(&slot, &lift_field<float>(self, 0x5C), &slot);
}
} // namespace lift_0060C910

// [0x0060CE80] NMData::EffectorWithMemoryData::vfunc_22 (126 bytes)
namespace lift_0060CE80 {
// __thiscall helpers: self = ecx, remaining args pushed (callee pops).
extern void ext_0060C820(void* self, void* a1, void* a2, void* a3);
extern void ext_0060C070(void* self, void* p0, void* p1, const char* name);
extern void ext_00487A30(void* self, float p0, float p1, const char* name);
// Known callee 0x006A6E9E: thunk_MSVCR80___RTDynamicCast (cdecl, 5 args).
extern void* ext_006A6E9E(void* inptr, ptrdiff_t vfDelta, void* srcType, void* targetType, int isReference);
extern int mem_00A94EC4;
extern int mem_00A93790;
extern int mem_00972380;
extern int mem_0097236C;

// @name NMData::EffectorWithMemoryData::vfunc_22
// @class NMData::EffectorWithMemoryData
// @summary Dynamic-casts a1 to EffectorWithMemoryData, then forwards this/other memory span and integral gradient to two helpers.
// @field NMData::EffectorWithMemoryData +0x5C float m_integralGradient
// @field NMData::EffectorWithMemoryData +0x60 uint32_t m_memorySpan
void fn_0060CE80(void* self, void* a1, void* a2, void* a3) {
    ext_0060C820(self, a1, a2, a3);

    void* other = ext_006A6E9E(a1, 0, &mem_00A93790, &mem_00A94EC4, 1);

    uint32_t selfMemorySpan = lift_field<uint32_t>(self, 0x60);
    uint32_t otherMemorySpan = lift_field<uint32_t>(other, 0x60);
    ext_0060C070(&a2,
                 &selfMemorySpan,
                 &otherMemorySpan,
                 reinterpret_cast<const char*>(&mem_00972380));

    float selfIntegralGradient = lift_field<float>(self, 0x5C);
    float otherIntegralGradient = lift_field<float>(other, 0x5C);
    ext_00487A30(&a2,
                 selfIntegralGradient,
                 otherIntegralGradient,
                 reinterpret_cast<const char*>(&mem_0097236C));
}
} // namespace lift_0060CE80

// [0x0060BF00]
namespace lift_0060BF00 {
// @name NMData::EffectorWithMemoryData::vfunc_14
// @class NMData::EffectorWithMemoryData
// @summary Serializes EffectorWithMemoryData fields (memorySpan and integralGradient) into child nodes of the serialized EffectorData node.
// @field NMData::EffectorWithMemoryData +0x5C float m_integralGradient
// @field NMData::EffectorWithMemoryData +0x60 uint32_t m_memorySpan


extern uint32_t mem_00A9FA6C;
extern uint32_t mem_00A9F0BC;
extern uint32_t mem_00A9EFEC;

extern void __thiscall ext_00427550(void* self, const char* name);
extern void* __thiscall ext_0060BCF0(void* self, void* parent);
extern void* __thiscall ext_00640110(void* self, uint32_t key);
extern void* __thiscall ext_00640390(void* self, uint32_t key, uint32_t flag);
extern void ext_00640AA0(void* node, uint32_t value);
extern void ext_00640BC0(void* node, float value);
extern void ext_00607E70();
extern void* ext_0060CDE0(void* self, void* arg1, uint32_t arg2, void* arg3);
extern void ext_006A5C62(void);

void* __thiscall fn_0060BF00(void* self, void* parent) {
    void* node = ext_0060BCF0(self, parent);

    void* child = ext_00640110(node, mem_00A9FA6C);
    ext_00427550(&child, reinterpret_cast<const char*>(0x009719D8));

    void* span_node = ext_00640390(node, mem_00A9F0BC, 0);
    ext_00640AA0(span_node, lift_field<uint32_t>(self, 0x60));

    void* grad_node = ext_00640390(node, mem_00A9EFEC, 0);
    ext_00640BC0(grad_node, lift_field<float>(self, 0x5C));

    volatile uintptr_t keep_callees = reinterpret_cast<uintptr_t>(&ext_00607E70)
        ^ reinterpret_cast<uintptr_t>(&ext_0060CDE0)
        ^ reinterpret_cast<uintptr_t>(&ext_006A5C62);
    (void)keep_callees;

    return parent;
}
} // namespace lift_0060BF00
