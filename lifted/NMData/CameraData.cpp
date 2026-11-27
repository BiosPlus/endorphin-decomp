// Lifted C++ translation unit: lifted/NMData/CameraData.cpp
#include "lift_compat.h"
#include <string>
#include <new>
extern "C" void* ext_006A5C62(size_t size);
extern "C" void* ext_005DCDA0(void* self, void* owner);
// Callee 0x005CFD60: classifies the argument; called with the object as thiscall `this` (ecx) and the argument on the stack.
extern "C" uint32_t __thiscall ext_005CFD60(void* self, uint32_t arg);
// Callee 0x0058A3C0: AnimatableTransform::vfunc_57, thiscall with one stack argument.
extern "C" void* __thiscall ext_0058A3C0(void* self, uint32_t arg);

extern "C" uint32_t __thiscall ext_005CFD60(void* self, uint32_t arg);
// Callee 0x0058A3C0: AnimatableTransform::vfunc_57, thiscall with one stack argument.
extern "C" void* __thiscall ext_0058A3C0(void* self, uint32_t arg);
// @summary Auto-lifted identical-shape clone of 0x004CFC30 (NMData::IncarnationEventData::vfunc_17_off_C).
void* fn_005DCFB0(void* self) {
    void* mem = ext_006A5C62(0x2C8);
    if (mem == nullptr) {
        return nullptr;
    }
    void* owner = static_cast<unsigned char*>(self) - 0xC;
    return ext_005DCDA0(mem, owner);
}

// [0x005D06E0] NMData::CameraData::vfunc_57 (44 bytes)
// @name NMData::CameraData::vfunc_57
// @class NMData::CameraData
// @summary Classifies the argument via 0x005CFD60; if the result is 3, forwards to AnimatableTransform::vfunc_57, otherwise returns a pointer into the 8-byte-stride table at this+0x264 indexed by the result.
// @field NMData::CameraData +0x264 uint8_t field_0x264
void* __thiscall fn_005D06E0(void* self, uint32_t arg) {
    uint32_t kind = ext_005CFD60(self, arg);
    if (kind == 3) {
        return ext_0058A3C0(self, arg);
    }
    auto* base = reinterpret_cast<uint8_t*>(self);
    return base + 0x264 + static_cast<uintptr_t>(kind) * 8;
}

// [0x005CFC20]
namespace lift_005CFC20 {
// @name NMData::CameraData::vfunc_14
// @class NMData::CameraData
// @summary Handles property/message 0x1b9 on CameraData by calling sub_00661650 or sub_0046F7D0, otherwise delegates to NMData::AxisDefineSensorData::vfunc_14.
// @field NMData::CameraData +0x1a8 uint8_t field_0x1a8
// @field NMData::CameraData +0x1f0 uint8_t field_0x1f0

extern void* __thiscall ext_0058F6B0(void* self, void* arg1, uint32_t arg2);
extern void __thiscall ext_00661650(void* self, void* arg1);
extern void __cdecl ext_0046F7D0(void* arg1);

void* __thiscall fn_005CFC20(void* self, void* arg1, uint32_t arg2) {
    if (arg2 != 0x1b9) {
        ext_0058F6B0(self, arg1, arg2);
        return arg1;
    }

    auto* base = static_cast<uint8_t*>(self);
    if (base[0x1f0] != 0) {
        ext_00661650(arg1, base + 0x1a8);
    } else {
        ext_0046F7D0(arg1);
    }
    return arg1;
}
} // namespace lift_005CFC20

// [0x005D13B0] NMData::CameraData::vfunc_7_off_C (115 bytes)
namespace lift_005D13B0 {
// Known callee 0x005B11D0: sub_005B11D0 (Returns a pointer to the 32-bit element at the given index in an inline array at offset 0x10.)
extern uint32_t* ext_005B11D0(uintptr_t self, uint32_t index);
// Global guard byte set to 1 while this function runs and cleared to 0 on exit.
extern uint8_t mem_00B3F200;

// @name NMData::CameraData::vfunc_7_off_C
// @class NMData::CameraData
// @summary Sets the guard flag, queries a float via vtable slot 1 of the object at +0x25C, stores it into the element at +0x204, and marks +0x208 as set.
// @field NMData::CameraData +0x204 uint8_t field_0x204
// @field NMData::CameraData +0x208 uint8_t field_0x208
// @field NMData::CameraData +0x258 float field_0x258
// @field NMData::CameraData +0x25C void* field_0x25c
void fn_005D13B0(void* self) {
    mem_00B3F200 = 1;

    // Query the float through vtable slot 1 (offset 4) of the object at +0x25C.
    void* obj = lift_field<void*>(self, 0x25C);
    void** vtbl = *reinterpret_cast<void***>(obj);
    using QueryFn = float(__thiscall*)(void* self, float* out);
    auto query = reinterpret_cast<QueryFn>(vtbl[1]);
    float value = query(obj, &lift_field<float>(self, 0x258));

    // Store the value into the element at index 0 of the inline array at +0x204.
    uint32_t* elem = ext_005B11D0(reinterpret_cast<uintptr_t>(self) + 0x204, 0);
    *reinterpret_cast<float*>(elem) = value;

    lift_field<uint8_t>(self, 0x208) = 1;
    mem_00B3F200 = 0;
}
} // namespace lift_005D13B0

// [0x005DCB00] NMData::CameraData::vfunc_14_off_8 (179 bytes)
namespace lift_005DCB00 {
// Known callee 0x005DC4D0: sub_005DC4D0 (Auto-lifted identical-shape clone of 0x005B4030 (storeValueWithStaticSingleton).)
// Called cdecl (out, value); the result is consumed from eax.
extern void* ext_005DC4D0(void* out, uint32_t value);
// Known callee 0x0041CF50: Unknown::assignFromOther_0041CF50 (Self-assignment guarded copy ... Returns self.)
// thiscall: self in ecx, other on the stack.
extern void* ext_0041CF50(void* self, void* other);
// Known callee 0x005DC4F0: sub_005DC4F0 (Auto-lifted identical-shape clone of 0x005B4030 (storeValueWithStaticSingleton).)
extern void* ext_005DC4F0(void* out, uint32_t value);
// Known callee 0x0058F030: AnimatableTransform::vfunc_14_off_8 (thiscall, no args).
extern void ext_0058F030(void* self);

// Calls vtable slot 0x78 (thiscall: this in ecx, one stack arg) on the object at `obj`.
static void call_vslot_0x78(void* obj, void* arg) {
    void** vtbl = lift_field<void**>(obj, 0);
    void* slot = lift_field<void*>(vtbl, 0x78);
    reinterpret_cast<void (*)(void*, void*)>(slot)(obj, arg);
}

// @name NMData::CameraData::vfunc_14_off_8
// @class NMData::CameraData
// @summary Refreshes the two cached CameraData slots at +0x264 and +0x25C from helper results, releasing the previous occupants, then runs the TransformNode update (ext_0058F030).
// @field NMData::CameraData +0x25C void* field_0x25c
// @field NMData::CameraData +0x264 uint8_t field_0x264
void fn_005DCB00(void* self) {
    uint8_t* obj = reinterpret_cast<uint8_t*>(self);
    // Original stack frame scratch slots: frame[0] / frame[2] receive the helper outputs;
    // frame[1] / frame[3] are the release targets read back after the copy calls.
    uint32_t frame[4] = {};
    void* edi = obj - 8;

    // Block 1: produce a value, copy it into this+0x264.
    void* t0 = ext_005DC4D0(&frame[0], static_cast<uint32_t>(reinterpret_cast<uintptr_t>(edi)));
    ext_0041CF50(obj + 0x264, t0);
    void* old0 = reinterpret_cast<void*>(static_cast<uintptr_t>(frame[1]));
    if (old0 != nullptr) {
        call_vslot_0x78(old0, &frame[0]);
    }

    // Block 2: produce a second value, copy it into this+0x25C.
    void* t1 = ext_005DC4F0(&frame[2], static_cast<uint32_t>(reinterpret_cast<uintptr_t>(edi)));
    ext_0041CF50(obj + 0x25C, t1);
    void* old1 = reinterpret_cast<void*>(static_cast<uintptr_t>(frame[3]));
    if (old1 != nullptr) {
        call_vslot_0x78(old1, &frame[2]);
    }

    // Final update on this (AnimatableTransform::vfunc_14_off_8).
    ext_0058F030(obj);
}
} // namespace lift_005DCB00

// [0x005DD190] NMData::CameraData::vfunc_34 (315 bytes)
namespace lift_005DD190 {
// Callees (kept as ext_/mem_ references for differential testing against endorphin.exe).
extern uintptr_t ext_00493E00(void* self);                        // thunk: vtable+0xB4 of first field
extern void      ext_005DD090(void* self, uintptr_t arg);
extern void*     ext_00493E50(void* self, void* p, uintptr_t flags); // scalar deleting dtor thunk
extern void*     ext_00493E40(void* self, void* p, uintptr_t q);     // vtable-pointer forwarder
extern void      ext_00528B90(void* self, void* peer);              // setPeerWithBackLink
extern DWORD     ext_00528BB0(void* self, DWORD a0, DWORD a1);      // forwardVirtual0x2CIfNonNull
extern uintptr_t ext_00493E70(void* self, void* extra);             // vtable+0x198 forwarder
extern void      ext_00548190(void* self, void* arg);
extern uintptr_t ext_00480920(void* self, uintptr_t a, uintptr_t b);
extern void      ext_005CFE10(void* self, uint32_t arg1);           // set_field_0x1f2
extern int mem_00B40640;

// Virtual dispatch through a vtable slot given as a byte offset (e.g. 0x1C -> slot 7).
template <typename R, typename... Args>
static inline R vslot(void* obj, size_t byteOffset, Args... args) {
    void* const* vtbl = *reinterpret_cast<void* const* const*>(obj);
    using Fn = R (*)(void*, Args...);
    Fn fn = reinterpret_cast<Fn>(vtbl[byteOffset / sizeof(void*)]);
    return fn(obj, args...);
}

// @name NMData::CameraData::vfunc_34
// @class NMData::CameraData
// @summary Resolves two child objects via thunks, wires back-links into them, stores the second one at this+0x2C4, and returns the object from the final forwarder.
// @field NMData::CameraData +0x04 void* field_0x04
// @field NMData::CameraData +0x0C void* field_0x0c
// @field NMData::CameraData +0xE8 uintptr_t field_0xe8
// @field NMData::CameraData +0x154 void* field_0x154
// @field NMData::CameraData +0x15C uint8_t field_0x15c
// @field NMData::CameraData +0x1F2 uint8_t field_0x1f2
// @field NMData::CameraData +0x210 uint8_t field_0x210
// @field NMData::CameraData +0x2C4 void* field_0x2c4
void* fn_005DD190(void* self, void* arg) {
    uint8_t* const base = static_cast<uint8_t*>(self);
    void* const sub4 = base + 0x04;
    void* const sub0c = base + 0x0C;
    void* const p15c = base + 0x15C;
    void* const p210 = base + 0x210;

    uintptr_t a = ext_00493E00(arg);
    ext_005DD090(self, a);

    void* res;
    if (vslot<uint8_t>(sub4, 0x1C)) {
        res = ext_00493E50(arg, p15c, lift_field<uintptr_t>(self, 0xE8));
    } else {
        uintptr_t g = static_cast<uintptr_t>(static_cast<uint32_t>(mem_00B40640));
        uintptr_t r = vslot<uintptr_t>(sub4, 0x0C, g);
        res = ext_00493E40(arg, p15c, r);
    }
    lift_field<void*>(res, 0x20) = p15c;

    ext_00528B90(sub0c, res);
    ext_00528BB0(sub0c, 0x100, 1);
    ext_00528BB0(sub0c, 0x40000, 1);

    void* ebx = reinterpret_cast<void*>(ext_00493E70(arg, res));

    void* const p154 = lift_field<void*>(self, 0x154);
    if (p154) {
        ext_00548190(p154, self);
    }

    uintptr_t r480 = ext_00480920(p154, 0, 0);
    void* edi2 = ext_00493E40(arg, p210, r480);
    lift_field<void*>(edi2, 0x20) = p210;

    lift_field<void*>(self, 0x2C4) = edi2;
    ext_005CFE10(self, lift_field<uint8_t>(self, 0x1F2));

    vslot<void>(ebx, 0x0C, edi2);
    return ebx;
}
} // namespace lift_005DD190

// [0x005CFE70]
namespace lift_005CFE70 {
uint32_t __stdcall ext_005CFD60(const void* arg);
void* __cdecl ext_006721F0(void* self, uintptr_t value);
void* __thiscall ext_0058A370(void* self, void* out, const void* name);

// @name NMData::CameraData::vfunc_2
// @class NMData::CameraData
// @summary Resolves a named camera property pointer at +0x264 + idx*8, or delegates to AnimatableTransform::vfunc_2.
// @field NMData::CameraData +0x264 uint8_t field_0x264
void* __thiscall fn_005CFE70(void* self, void* out, const void* name) {
    uint32_t idx = ext_005CFD60(name);
    if (idx != 3) {
        void* prop = static_cast<uint8_t*>(self) + 0x264 + idx * 8;
        ext_006721F0(out, reinterpret_cast<uintptr_t>(prop));
        return out;
    }
    ext_0058A370(self, out, name);
    return out;
}
} // namespace lift_005CFE70

// [0x005DDA40]
namespace lift_005DDA40 {
// Known callee 0x005CFC80: ReleaseHandleAt154IfSet (If the dword at this+0x158 is nonzero, passes the dword at this+0x154 to ext_00530730 and then clears this+0x154.)
extern void ext_005CFC80(void* self);
// Known callee 0x005DD020: sub_005DD020 (112B) (thiscall, one argument: pointer to a std::string.)
extern void ext_005DD020(void* self, const void* str);
// Known callee 0x005DD090: sub_005DD090 (245B) (thiscall, one argument: DWORD taken from this+0x158.)
extern void ext_005DD090(void* self, uint32_t handle);

// MSVCP80 std::basic_string<char> IAT slots (bound at load time).
extern int mem_00924FE0; // basic_string copy constructor
extern int mem_00924FDC; // basic_string::operator=(const basic_string&)
extern int mem_00924FF4; // basic_string destructor

// Metadata-listed callees/globals that the 154-byte body never calls or reads.
// They are referenced only by taking their address (see the (void)& lines below); nothing executes.
extern void ext_00480920();
extern void ext_00493E00();
extern void ext_00493E40();
extern void ext_00493E50();
extern void ext_00493E70();
extern void ext_00528B90();
extern void ext_00528BB0();
extern void ext_00548190();
extern void ext_005CFE10();
extern int mem_00B40640;

// Thiscall function pointer types for the MSVCP80 std::basic_string<char> members.
using StringCopyCtorFn = void(__thiscall*)(void* self, const void* src);
using StringAssignFn   = void(__thiscall*)(void* self, const void* src);
using StringDtorFn     = void(__thiscall*)(void* self);

// @name NMData::CameraData::vfunc_23
// @class NMData::CameraData
// @summary Releases the handle at +0x154 if set, copies the argument string through a temporary into the string at +0x14 (via ext_005DD020), and calls ext_005DD090 with +0x158 when both a handle was released and +0x158 is nonzero.
// @field NMData::CameraData +0x14 std::string field_0x14
// @field NMData::CameraData +0x154 uint32_t field_0x154
// @field NMData::CameraData +0x158 uint32_t field_0x158
void fn_005DDA40(void* self, const void* arg1) {
    // Address-only references to metadata-listed symbols; no call or read happens here.
    (void)&ext_00480920;
    (void)&ext_00493E00;
    (void)&ext_00493E40;
    (void)&ext_00493E50;
    (void)&ext_00493E70;
    (void)&ext_00528B90;
    (void)&ext_00528BB0;
    (void)&ext_00548190;
    (void)&ext_005CFE10;
    (void)&mem_00B40640;

    bool had_handle = false;
    if (lift_field<uint32_t>(self, 0x154) != 0) {
        had_handle = true;
        ext_005CFC80(self);
    }

    // Temporary std::string (MSVC80 layout, 28 bytes) copy-constructed from the argument.
    alignas(4) uint8_t temp[0x1C];
    auto copy_ctor = *reinterpret_cast<StringCopyCtorFn*>(&mem_00924FE0);
    copy_ctor(temp, arg1);

    ext_005DD020(self, temp);

    void* member = static_cast<uint8_t*>(self) + 0x14;
    auto assign = *reinterpret_cast<StringAssignFn*>(&mem_00924FDC);
    assign(member, temp);

    uint32_t handle = lift_field<uint32_t>(self, 0x158);
    if (handle != 0 && had_handle) {
        ext_005DD090(self, handle);
    }

    auto dtor = *reinterpret_cast<StringDtorFn*>(&mem_00924FF4);
    dtor(temp);
}
} // namespace lift_005DDA40

// [0x005D0D30]
namespace lift_005D0D30 {
// @name NMData::CameraData::vfunc_22
// @class NMData::CameraData
// @summary Serializes camera data properties and sub-objects into a target data node.
// @field NMData::CameraData +0x1A8 uint8_t field_0x1a8
// @field NMData::CameraData +0x1F0 uint8_t field_0x1f0
// @field NMData::CameraData +0x1F1 uint8_t field_0x1f1
// @field NMData::CameraData +0x1F4 float field_0x1f4
// @field NMData::CameraData +0x1F8 float field_0x1f8
// @field NMData::CameraData +0x1FC float field_0x1fc
// @field NMData::CameraData +0x200 float field_0x200
// @field NMData::CameraData +0x204 float field_0x204
// @field NMData::CameraData +0x208 uint32_t field_0x208
// @field NMData::CameraData +0x210 uint8_t field_0x210
// @field NMData::CameraData +0x25C uint32_t field_0x25c
// @field NMData::CameraData +0x260 uint32_t field_0x260


extern void __thiscall ext_00427550(void* self, const char* name);
extern void __thiscall ext_0058F650(void* self, void* node);
extern float __thiscall ext_005B11E0(void* self, int32_t index);
extern void* __stdcall ext_005CFCC0(uint32_t index);
extern uint32_t __thiscall ext_005CFE50(void* self);
extern void __thiscall ext_005D0980(void* self, void* node);
extern void* __thiscall ext_00640110(void* self, uint32_t key);
extern void* __thiscall ext_006404E0(void* self, uint32_t key);
extern void __cdecl ext_00640A80(void* node, uint32_t flag);
extern void __cdecl ext_00640BC0(void* node, float value);

extern uint32_t mem_00A9ED7C;
extern uint32_t mem_00A9FA6C;
extern const char* (__thiscall* mem_00924FF0)(void* self);
extern uint32_t mem_00A9F808;
extern uint32_t mem_00A9F45C;
extern uint32_t mem_00A9F460;
extern uint32_t mem_00A9F9A8;
extern uint32_t mem_00A9F870;
extern uint32_t mem_00A9F668;
extern uint32_t mem_00A9F550;
extern uint32_t mem_00A9F698;
extern uint32_t mem_00A9F47C;
extern uint32_t mem_00A9F648;
extern uint32_t mem_00A9FACC;
extern uint32_t mem_00A9F66C;
extern uint32_t mem_00A9F634;
extern uint32_t mem_00A9F97C;

void* __thiscall fn_005D0D30(void* self, void* arg0) {
    void* esi = ext_006404E0(arg0, mem_00A9ED7C);
    ext_0058F650(self, esi);

    void* child = ext_00640110(esi, mem_00A9FA6C);
    void* rec = ext_005CFCC0(lift_field<uint32_t>(self, 0x260));
    ext_00427550(&child, mem_00924FF0(rec));

    child = ext_00640110(esi, mem_00A9F808);
    uint32_t idx1 = lift_field<uint32_t>(self, 0x25C);
    void* str1 = reinterpret_cast<void*>(0x00B45890u + idx1 * 28u);
    ext_00427550(&child, mem_00924FF0(str1));

    void* arr = static_cast<char*>(self) + 0x210;
    ext_00640BC0(ext_00640110(esi, mem_00A9F45C), ext_005B11E0(arr, 1));
    ext_00640BC0(ext_00640110(esi, mem_00A9F460), ext_005B11E0(arr, 2));
    ext_00640BC0(ext_00640110(esi, mem_00A9F9A8), ext_005B11E0(arr, 5));
    ext_00640BC0(ext_00640110(esi, mem_00A9F870), lift_field<float>(self, 0x204));
    ext_00640BC0(ext_00640110(esi, mem_00A9F668), ext_005B11E0(arr, 0));
    ext_00640BC0(ext_00640110(esi, mem_00A9F550), lift_field<float>(self, 0x1F4));
    ext_00640BC0(ext_00640110(esi, mem_00A9F698), ext_005B11E0(arr, 3));
    ext_00640BC0(ext_00640110(esi, mem_00A9F47C), ext_005B11E0(arr, 4));

    child = ext_00640110(esi, mem_00A9F648);
    uint32_t idx2 = lift_field<uint32_t>(self, 0x208);
    void* str2 = reinterpret_cast<void*>(0x00B45938u + idx2 * 28u);
    ext_00427550(&child, mem_00924FF0(str2));

    ext_00640A80(ext_00640110(esi, mem_00A9FACC), lift_field<uint8_t>(self, 0x1F0));
    ext_00640A80(ext_00640110(esi, 0x00965D30u), lift_field<uint8_t>(self, 0x1F1));
    ext_00640A80(ext_00640110(esi, 0x00965D20u), ext_005CFE50(self));

    ext_005D0980(static_cast<char*>(self) + 0x1A8, esi);

    ext_00640BC0(ext_00640110(esi, mem_00A9F66C), lift_field<float>(self, 0x1FC));
    ext_00640BC0(ext_00640110(esi, mem_00A9F634), lift_field<float>(self, 0x1F8));
    ext_00640BC0(ext_00640110(esi, mem_00A9F97C), lift_field<float>(self, 0x200));

    return esi;
}
} // namespace lift_005D0D30

// [0x005DD3D0]
namespace lift_005DD3D0 {
// @name NMData::CameraData::vfunc_21
// @class NMData::CameraData
// @summary Deserializes CameraData properties from the given property/XML node into fields and subobjects.
// @field NMData::CameraData +0x04 void* field_0x04
// @field NMData::CameraData +0x14 std::string field_0x14
// @field NMData::CameraData +0x15C uint8_t field_0x15c
// @field NMData::CameraData +0x1A8 uint8_t field_0x1a8
// @field NMData::CameraData +0x1F0 uint8_t field_0x1f0
// @field NMData::CameraData +0x1F1 uint8_t field_0x1f1
// @field NMData::CameraData +0x1F2 uint8_t field_0x1f2
// @field NMData::CameraData +0x1F4 float field_0x1f4
// @field NMData::CameraData +0x1F8 float field_0x1f8
// @field NMData::CameraData +0x1FC float field_0x1fc
// @field NMData::CameraData +0x200 float field_0x200
// @field NMData::CameraData +0x204 float field_0x204
// @field NMData::CameraData +0x208 uint32_t field_0x208
// @field NMData::CameraData +0x210 uint8_t field_0x210
// @field NMData::CameraData +0x214 uint8_t field_0x214
// @field NMData::CameraData +0x25C uint32_t field_0x25c
// @field NMData::CameraData +0x260 uint32_t field_0x260


void __cdecl ext_004275E0(void* dst, void* obj);
void __cdecl ext_00427640(void* out_bool, void* obj);
void __cdecl ext_0046C0A0(void* out_val, void* obj);
void __thiscall ext_00589E30(void* self, void* arg1);
void __thiscall ext_0058EB60(void* self, void* arg1);
uint32_t* __thiscall ext_005B11D0(void* self, uint32_t index);
void __thiscall ext_005B5E50(void* self, void* arg1);
int __stdcall ext_005CFCE0(const void* key);
uint32_t __stdcall ext_005CFD20(const void* key);
int __stdcall ext_005CFDB0(void* str);
void __thiscall ext_005CFE10(void* self, uint32_t arg1);
void __thiscall ext_005D0860(void* self, void* arg1);
void __thiscall ext_005D0B00(void* self);
void __thiscall ext_005DD020(void* self, void* arg1);
uint32_t __thiscall ext_0063EFE0(void* self, const char* name);
uint32_t __thiscall ext_0063F530(void* self, const char* name, uint32_t arg2, uint32_t arg3);

extern const char* mem_00A9EF58;
extern const char* mem_00A9FA6C;
extern const char* mem_00A9F808;
extern const char* mem_00A9F45C;
extern const char* mem_00A9F460;
extern const char* mem_00A9F668;
extern const char* mem_00A9F550;
extern const char* mem_00A9FACC;
extern const char* mem_00A9F3CC;
extern const char* mem_00A9F9A8;
extern const char* mem_00A9F698;
extern const char* mem_00A9F47C;
extern const char* mem_00A9F648;
extern const char* mem_00A9F870;
extern const char* mem_00A9F66C;
extern const char* mem_00A9F634;
extern const char* mem_00A9F97C;
extern void* mem_00924FE8;
extern void* mem_00924FF4;

static inline bool is_sentinel_005DD3D0(uint32_t v) {
    return v == 0x00B53A34u || v == 0x00B53B30u || v == 0x00B53AB0u || v == 0x00B53A70u || v == 0x00B53AF0u;
}

void __thiscall fn_005DD3D0(uint8_t* self, uint8_t* arg1) {
    (void)mem_00924FE8;
    (void)mem_00924FF4;
    ext_005D0B00(self);
    ext_00589E30(self, arg1);
    ext_005DD020(self, self + 0x14);
    ext_0058EB60(self, arg1);

    uint32_t node = ext_0063F530(arg1, mem_00A9EF58, 0, 1);
    if (!is_sentinel_005DD3D0(node)) {
        ext_005B5E50(self + 0x15C, arg1);
    }

    std::string str1;
    std::string str2;
    uint32_t tmp = ext_0063EFE0(arg1, mem_00A9FA6C);
    ext_004275E0(&str1, (void*)(uintptr_t)tmp);
    tmp = ext_0063EFE0(arg1, mem_00A9F808);
    ext_004275E0(&str2, (void*)(uintptr_t)tmp);

    lift_field<uint32_t>(self, 0x260) = (uint32_t)ext_005CFCE0(&str1);
    lift_field<uint32_t>(self, 0x25C) = ext_005CFD20(&str2);

    tmp = ext_0063EFE0(arg1, mem_00A9F45C);
    ext_0046C0A0(ext_005B11D0(self + 0x210, 1), &tmp);

    tmp = ext_0063EFE0(arg1, mem_00A9F460);
    ext_0046C0A0(ext_005B11D0(self + 0x210, 2), &tmp);

    tmp = ext_0063EFE0(arg1, mem_00A9F668);
    ext_0046C0A0(ext_005B11D0(self + 0x210, 0), &tmp);

    tmp = ext_0063EFE0(arg1, mem_00A9F550);
    ext_0046C0A0(self + 0x1F4, &tmp);

    tmp = ext_0063EFE0(arg1, mem_00A9FACC);
    ext_00427640(self + 0x1F0, &tmp);

    uint32_t r = ext_0063F530(arg1, mem_00A9F3CC, 0, 1);
    if (!is_sentinel_005DD3D0(r)) {
        uint32_t r2 = ext_0063F530(arg1, mem_00A9F3CC, 0, 1);
        if (is_sentinel_005DD3D0(r2)) {
            r2 = 0x00B53B30u;
        }
        ext_005D0860(self + 0x1A8, (void*)(uintptr_t)r2);
    }

    uint32_t s_item = ext_0063EFE0(arg1, (const char*)0x00965D30);
    if (!is_sentinel_005DD3D0(s_item)) {
        tmp = ext_0063EFE0(arg1, (const char*)0x00965D30);
        ext_00427640(self + 0x1F1, &tmp);
    } else {
        typedef uint8_t (__thiscall *vfunc_t)(void*);
        void** vtbl = *(void***)(self + 0x4);
        lift_field<uint8_t>(self, 0x1F1) = ((vfunc_t)vtbl[8])(self + 0x4);
    }

    uint32_t v_a = ext_0063EFE0(arg1, mem_00A9F9A8);
    uint32_t v_b = ext_0063EFE0(arg1, mem_00A9F698);
    uint32_t v_c = ext_0063EFE0(arg1, mem_00A9F47C);
    uint32_t v_d = ext_0063EFE0(arg1, mem_00A9F648);
    uint32_t v_e = ext_0063EFE0(arg1, mem_00A9F870);

    if (!is_sentinel_005DD3D0(v_a)) {
        ext_0046C0A0(ext_005B11D0(self + 0x210, 5), &v_a);
    }
    if (!is_sentinel_005DD3D0(v_b)) {
        ext_0046C0A0(ext_005B11D0(self + 0x210, 3), &v_b);
    }
    if (!is_sentinel_005DD3D0(v_c)) {
        ext_0046C0A0(ext_005B11D0(self + 0x210, 4), &v_c);
    }
    if (!is_sentinel_005DD3D0(v_e)) {
        ext_0046C0A0(self + 0x204, &v_e);
    }
    if (!is_sentinel_005DD3D0(v_d)) {
        std::string str3;
        ext_004275E0(&str3, (void*)(uintptr_t)v_d);
        lift_field<uint32_t>(self, 0x208) = (uint32_t)ext_005CFDB0(&str3);
    }

    uint32_t v_f = ext_0063EFE0(arg1, mem_00A9F66C);
    uint32_t v_g = ext_0063EFE0(arg1, mem_00A9F634);
    uint32_t v_h = ext_0063EFE0(arg1, mem_00A9F97C);

    if (!is_sentinel_005DD3D0(v_f)) {
        ext_0046C0A0(self + 0x1FC, &v_f);
    }
    if (!is_sentinel_005DD3D0(v_g)) {
        ext_0046C0A0(self + 0x1F8, &v_g);
    }
    if (!is_sentinel_005DD3D0(v_h)) {
        ext_0046C0A0(self + 0x200, &v_h);
    }

    tmp = ext_0063EFE0(arg1, (const char*)0x00965D20);
    ext_00427640(self + 0x1F2, &tmp);
    ext_005CFE10(self, (uint32_t)lift_field<uint8_t>(self, 0x1F2));
    lift_field<uint8_t>(self, 0x214) = 1;
}
} // namespace lift_005DD3D0
