// Lifted C++ translation unit: lifted/NMData/EffectorWithModesData.cpp
#include "lift_compat.h"
#include <string>
// Literal strings at 0x00972290 and 0x0093BF0C are .rdata constants whose
// contents are not recovered; they are referenced here by their VA-derived names.
extern "C" const char str_00972290[];
extern "C" const char str_0093BF0C[];
// Base-class vfunc_19 (NMData::EffectorData::vfunc_19), called on the same object first.
extern "C" void ext_0060BDF0(void* self);
// .rdata C string literal at 0x009719C4; contents not recovered.
extern "C" const char str_009719C4[];

extern "C" void ext_0060BDF0(void* self);
// .rdata C string literal at 0x009719C4; contents not recovered.
extern "C" const char str_009719C4[];
// @summary Builds a descriptive std::string: literal prefix + this member string at +0x04 + literal suffix, returned by value.
// @field NMData::EffectorWithModesData +0x04 std::string field_0x04
std::string fn_0060C3D0(void* self) {
    auto* base = static_cast<unsigned char*>(self);
    const auto& member = *reinterpret_cast<const std::string*>(base + 0x04);
    std::string result = std::string(str_00972290) + member;
    return result + std::string(str_0093BF0C);
}
#include <new>

// [0x0060C490] NMData::EffectorWithModesData::vfunc_19 (48 bytes)
namespace lift_0060C490 {
// Known callee 0x0060BDF0: NMData::EffectorData::vfunc_19 (Runs the base-class vfunc_19, clears the dword at +0x44, then tail-calls the sub-object initializer at this+0x48.)
extern void ext_0060BDF0(void* self);
// IAT slot for MSVCP80 std::string::operator=(const char*); the portable std::string assignment below replaces the indirect call.
extern void* mem_00924FD4;
// .rdata string literal pushed as the std::string assignment source (0x009719C4).
extern const char mem_009719C4[];
// .rdata float constant 10.0f (u32 0x41200000).
extern const float mem_009518E0;

// @name NMData::EffectorWithModesData::vfunc_19
// @class NMData::EffectorWithModesData
// @summary Runs the base EffectorData::vfunc_19, then resets the string at +0x60 to a literal and sets +0x5C=20, +0x7C=0.0f, +0x80=10.0f.
// @field NMData::EffectorWithModesData +0x5C int field_0x5C
// @field NMData::EffectorWithModesData +0x60 std::string field_0x60
// @field NMData::EffectorWithModesData +0x7C float field_0x7C
// @field NMData::EffectorWithModesData +0x80 float field_0x80
void fn_0060C490(void* self) {
    ext_0060BDF0(self);
    (void)mem_00924FD4;
    lift_field<std::string>(self, 0x60) = mem_009719C4;
    lift_field<float>(self, 0x7C) = 0.0f;
    lift_field<int32_t>(self, 0x5C) = 0x14;
    lift_field<float>(self, 0x80) = mem_009518E0;
}
} // namespace lift_0060C490

// [0x0060C3D0] NMData::EffectorWithModesData::vfunc_20 (157 bytes)
namespace lift_0060C3D0 {
extern const char mem_00972290[];
extern const char mem_0093BF0C[];

// @name NMData::EffectorWithModesData::vfunc_20
// @class NMData::EffectorWithModesData
// @summary Auto-lifted identical-shape clone of 0x00626850 (NMData::EffectorSkeletalData::vfunc_20).
// @field NMData::EffectorWithModesData +0x4 std::string field_0x04
namespace lift_00626850 {
// .rdata string literals (contents not recovered).
extern const char mem_00972290[];
extern const char mem_0093BF0C[];
// IAT slots for the MSVCP80 string ctor/operator+/dtor the original called through.
// Replaced by std::string operations; referenced only as metadata for the differential check.
extern int mem_00924FD0;
extern int mem_00924ECC;
extern int mem_00924FE4;
extern int mem_00924FF4;

// @name NMData::EffectorSkeletalData::vfunc_20
// @class NMData::EffectorSkeletalData
// @summary Builds the string (literal 0x009777A0 + this->field_0x04 + literal 0x0093BF0C) into the caller's result slot and returns that slot.
// @field NMData::EffectorSkeletalData +0x04 std::string field_0x04
// Stack arg 2 (ret 8) is never read by the original.
std::string* fn_0060C3D0(void* self, std::string* ret, void* unused) {
    (void)unused;
    (void)&mem_00924FD0;
    (void)&mem_00924ECC;
    (void)&mem_00924FE4;
    (void)&mem_00924FF4;
    auto* member = reinterpret_cast<std::string*>(static_cast<char*>(self) + 0x04);
    std::string prefixed = std::string(mem_00972290) + *member;
    new (ret) std::string(prefixed + mem_0093BF0C);
    return ret;
}
} // namespace lift_00626850
} // namespace lift_0060C3D0

// [0x0060DC00] NMData::EffectorWithModesData::vfunc_15 (184 bytes)
namespace lift_0060DC00 {
// Known callee 0x00608350: Unknown::ctor_00608350 (runs base ctor, sets vtable, builds members; returns this).
extern void* ext_00608350(void* self);
// Known callee 0x0060CDE0: NMData::EffectorData::vfunc_15 (fills and returns a 0x60-byte object stored at this+0x40).
extern void* ext_0060CDE0(void* self, void* arg1, uint32_t arg2, void* arg3);
// Known callee 0x006A5C62: thunk_MFC80_ord_762 (IAT jump thunk forwarding to MFC80!ord_762 = operator new).
extern void* ext_006A5C62(size_t size);
// Unlifted callees (thiscall-style: ecx = self, remaining args on the stack).
extern void ext_0063D5D0(void* self, int32_t value);
extern void ext_0063D460(void* self, void* str);
extern void ext_0063D480(void* self, float value);

// @name NMData::EffectorWithModesData::vfunc_15
// @class NMData::EffectorWithModesData
// @summary Allocates and constructs a 0xB4-byte object, runs setup calls on it from this's +0x5C/+0x60/+0x80 fields, copies this's +0x7C float into it at +0xAC, then forwards to EffectorData::vfunc_15 and returns its result.
// @field NMData::EffectorWithModesData +0x5C int field_0x5C
// @field NMData::EffectorWithModesData +0x60 std::string field_0x60
// @field NMData::EffectorWithModesData +0x7C float field_0x7C
// @field NMData::EffectorWithModesData +0x80 float field_0x80
void* fn_0060DC00(void* self, void* arg1, uint32_t arg2, uint32_t /*arg3: stack slot popped by callee, never read*/) {
    // Allocate the new object (operator new(0xB4)) and construct it if allocation succeeded.
    void* obj = ext_006A5C62(0xB4);
    void* esi = nullptr;
    if (obj != nullptr) {
        esi = ext_00608350(obj);
    }

    // Setup calls on the new object, driven by this's fields.
    ext_0063D5D0(esi, lift_field<int32_t>(self, 0x5C));
    ext_0063D460(esi, static_cast<uint8_t*>(self) + 0x60);
    ext_0063D480(esi, lift_field<float>(self, 0x80));

    // Copy this+0x7C into the new object's +0xAC, then forward to vfunc_15.
    lift_field<float>(esi, 0xAC) = lift_field<float>(self, 0x7C);
    return ext_0060CDE0(self, arg1, arg2, esi);
}
} // namespace lift_0060DC00

// [0x0060C9C0] NMData::EffectorWithModesData::vfunc_13 (328 bytes)
namespace lift_0060C9C0 {
// Known callee 0x004275E0: assignVirtualString (Calls vtable[2] on obj to obtain a temporary std::string, assigns it to dst, and destroys the temporary.)
extern void ext_004275E0(void* dst, void* obj);
// Known callee 0x0046C0A0: parseFloatFromString (Calls ext_004275C0 to get a std::string, converts it with atof, and stores the float result.)
extern void ext_0046C0A0(void* dst, uint32_t* key);
// Known callee 0x0053F5F0: parseIntFromStringProp (Calls ext_004275C0 to get a string, converts it with atoi, and stores the integer at *out.)
extern void ext_0053F5F0(void* dst, uint32_t* key);
// Known callee 0x0060C640: NMData::EffectorData::vfunc_13 (Initializes base data from arg1, then reads float/int/bool attributes (names from mem_ globals) into this+0x44..+0x58.)
extern void ext_0060C640(void* self, void* arg1);
// Callee 0x0063F530 (thiscall-style, callee cleans 3 stack args; returns a status/value compared against sentinels).
extern uint32_t ext_0063F530(void* self, uint32_t key, int zero, int one);
extern uint32_t mem_00A9F0BC;
extern uint32_t mem_00A9F408;
extern uint32_t mem_00A9F40C;
extern uint32_t mem_00A9F094;

// Maps any of the five sentinel result values to the canonical 0x00B53B30 value; other values pass through.
static uint32_t normalize_result(uint32_t v) {
    switch (v) {
        case 0x00B53A34u:
        case 0x00B53B30u:
        case 0x00B53AB0u:
        case 0x00B53A70u:
        case 0x00B53AF0u:
            return 0x00B53B30u;
        default:
            return v;
    }
}

// @name NMData::EffectorWithModesData::vfunc_13
// @class NMData::EffectorWithModesData
// @summary Initializes base data from arg, then reads string/int/float attributes into this+0x5C, +0x60, +0x7C and +0x80.
// @field NMData::EffectorWithModesData +0x5C int field_0x5C
// @field NMData::EffectorWithModesData +0x60 std::string field_0x60
// @field NMData::EffectorWithModesData +0x7C float field_0x7C
// @field NMData::EffectorWithModesData +0x80 float field_0x80
void fn_0060C9C0(void* self, void* arg1) {
    ext_0060C640(self, arg1);

    uint8_t* base = static_cast<uint8_t*>(self);

    uint32_t v = normalize_result(ext_0063F530(arg1, mem_00A9F0BC, 0, 1));
    ext_0053F5F0(base + 0x5C, &v);

    v = normalize_result(ext_0063F530(arg1, mem_00A9F408, 0, 1));
    ext_004275E0(base + 0x60, reinterpret_cast<void*>(static_cast<uintptr_t>(v)));

    v = normalize_result(ext_0063F530(arg1, mem_00A9F40C, 0, 1));
    ext_0046C0A0(base + 0x80, &v);

    v = normalize_result(ext_0063F530(arg1, mem_00A9F094, 0, 1));
    ext_0046C0A0(base + 0x7C, &v);
}
} // namespace lift_0060C9C0

// [0x0060CF00] NMData::EffectorWithModesData::vfunc_22 (184 bytes)
namespace lift_0060CF00 {
// __thiscall helpers: self = ecx, remaining args pushed (callee pops).
extern void ext_0060C820(void* self, void* a1, void* a2, void* a3);
extern void ext_0060C070(void* self, void* p0, void* p1, const char* name);
// Known callee 0x00486CB0: ThrowIfFirstGreater (If arg1 > arg2 (std::string comparison), builds a temporary std::string from arg3 and throws an exception object constructed from (arg1, arg2, temp). Otherwise returns without effect.)
extern void ext_00486CB0(void* self, const void* arg1, const void* arg2, const char* arg3);
extern void ext_00487A30(void* self, float p0, float p1, const char* name);
// Known callee 0x006A6E9E: thunk_MSVCR80___RTDynamicCast (cdecl, 5 args).
extern void* ext_006A6E9E(void* inptr, ptrdiff_t vfDelta, void* srcType, void* targetType, int isReference);
extern int mem_00A94EF0;
extern int mem_00A93790;
extern int mem_00972380;
extern int mem_009723BC;
extern int mem_009723A0;
extern int mem_00972390;

// @name NMData::EffectorWithModesData::vfunc_22
// @class NMData::EffectorWithModesData
// @summary Dynamic-casts a1 to EffectorWithModesData, then compares this and the other object's fields (+0x5C, +0x60, +0x7C, +0x80) via helper calls.
// @field NMData::EffectorWithModesData +0x5C int field_0x5C
// @field NMData::EffectorWithModesData +0x60 std::string field_0x60
// @field NMData::EffectorWithModesData +0x7C float field_0x7C
// @field NMData::EffectorWithModesData +0x80 float field_0x80
void fn_0060CF00(void* self, void* arg1, void* arg2, void* arg3) {
    // Scratch object passed as `this` to the thiscall helpers (ecx = esp+0x20 in the original).
    alignas(8) uint8_t tmp[0x40] = {};

    ext_0060C820(self, arg1, arg2, arg3);

    void* other = ext_006A6E9E(arg1, 0, &mem_00A93790, &mem_00A94EF0, 1);

    int selfField5C = lift_field<int>(self, 0x5C);
    int otherField5C = lift_field<int>(other, 0x5C);
    ext_0060C070(tmp,
                 &selfField5C,
                 &otherField5C,
                 reinterpret_cast<const char*>(&mem_00972380));

    ext_00486CB0(tmp,
                 static_cast<uint8_t*>(self) + 0x60,
                 static_cast<uint8_t*>(other) + 0x60,
                 reinterpret_cast<const char*>(&mem_009723BC));

    float selfField7C = lift_field<float>(self, 0x7C);
    float otherField7C = lift_field<float>(other, 0x7C);
    ext_00487A30(tmp,
                 selfField7C,
                 otherField7C,
                 reinterpret_cast<const char*>(&mem_009723A0));

    float selfField80 = lift_field<float>(self, 0x80);
    float otherField80 = lift_field<float>(other, 0x80);
    ext_00487A30(tmp,
                 selfField80,
                 otherField80,
                 reinterpret_cast<const char*>(&mem_00972390));
}
} // namespace lift_0060CF00

// [0x0060BF80]
namespace lift_0060BF80 {
// @name NMData::EffectorWithModesData::vfunc_14
// @class NMData::EffectorWithModesData
// @summary Serializes EffectorWithModesData fields into the node returned by EffectorData::vfunc_14.
// @field NMData::EffectorWithModesData +0x5C int field_0x5C
// @field NMData::EffectorWithModesData +0x60 std::string field_0x60
// @field NMData::EffectorWithModesData +0x7C float field_0x7C
// @field NMData::EffectorWithModesData +0x80 float field_0x80

extern void* (__thiscall* const ext_0060BCF0)(void* self, void* node);
extern void* (__thiscall* const ext_00640110)(void* self, uint32_t key);
extern void (__thiscall* const ext_00427550)(void* self, const char* name);
extern void* (__thiscall* const ext_00640390)(void* self, uint32_t key, uint32_t flag);
extern void (__cdecl* const ext_00640AA0)(void* a, uint32_t b);
extern void (__cdecl* const ext_00640BC0)(void* a, float b);

extern uint32_t mem_00A9FA6C;
extern uint32_t mem_00A9F0BC;
extern uint32_t mem_00A9F408;
extern uint32_t mem_00924FF0;
extern uint32_t mem_00A9F40C;
extern uint32_t mem_00A9F094;

void* __thiscall fn_0060BF80(void* self, void* arg1) {
    void* edi = ext_0060BCF0(self, arg1);

    void* tmp = ext_00640110(edi, mem_00A9FA6C);
    ext_00427550(&tmp, reinterpret_cast<const char*>(0x009719CC));

    void* node_5c = ext_00640390(edi, mem_00A9F0BC, 0);
    ext_00640AA0(node_5c, lift_field<uint32_t>(self, 0x5C));

    tmp = ext_00640390(edi, mem_00A9F408, 0);
    using c_str_fn = const char* (__thiscall*)(const void*);
    const char* str_60 = reinterpret_cast<c_str_fn>(mem_00924FF0)(static_cast<const char*>(self) + 0x60);
    ext_00427550(&tmp, str_60);

    void* node_80 = ext_00640390(edi, mem_00A9F40C, 0);
    ext_00640BC0(node_80, lift_field<float>(self, 0x80));

    void* node_7c = ext_00640390(edi, mem_00A9F094, 0);
    ext_00640BC0(node_7c, lift_field<float>(self, 0x7C));

    return arg1;
}
} // namespace lift_0060BF80
