// Lifted C++ translation unit: lifted/NMData/IncarnationEventData.cpp
#include "lift_compat.h"
#include <string>
extern "C" void* __thiscall ext_006404E0(void* self, void* arg);
extern "C" void* mem_00A9EFB8;
#include <new>
extern "C" void __thiscall ext_004C2070(void* self, void* a, void* b);

extern "C" void __thiscall ext_004C2070(void* self, void* a, void* b);
// @name NMData::IncarnationEventData::vfunc_59
// @class NMData::IncarnationEventData
// @summary Auto-lifted identical-shape clone of 0x004DDED0 (NMData::AnimationEventData::vfunc_59).
// @field NMData::IncarnationEventData +0x0 void** vptr
extern "C" void __thiscall fn_004CE710(void* self, void* a) {
    using VFn = void(__thiscall*)(void* self, void* arg);
    void* g = mem_00A9EFB8;
    void* r = ext_006404E0(a, g);
    void** vt = *reinterpret_cast<void***>(self);
    reinterpret_cast<VFn>(vt[22])(self, r);
}
// thiscall helper at 0x004CE8D0 (sub_004CE8D0): takes the object as `this`.
extern "C" void ext_004CE8D0(void* self);
// Known callee 0x006A5C5C: thunk_MFC80_ord_764 (IAT jump thunk forwarding to MFC80!ord_764).
// cdecl, single pointer argument (pushed as edi, then add esp,4).
extern "C" void ext_006A5C5C(void* p);

extern "C" void ext_004CE8D0(void* self);
// Known callee 0x006A5C5C: thunk_MFC80_ord_764 (IAT jump thunk forwarding to MFC80!ord_764).
// cdecl, single pointer argument (pushed as edi, then add esp,4).
extern "C" void ext_006A5C5C(void* p);
void* __thiscall fn_004CE830(void* self, void* a, void* b) {
    ext_004C2070(self, a, b);
    return a;
}
// Known callee 0x006A5C62: thunk_MFC80_ord_762 (IAT jump thunk forwarding to MFC80!ord_762.)
// Used here as operator new(size_t): called cdecl with the allocation size (0x190).
extern "C" void* ext_006A5C62(size_t size);
// Callee 0x004CFB10: constructor-style initializer, thiscall (this in ECX), one stack arg.
extern "C" void* ext_004CFB10(void* self, void* owner);

// Used here as operator new(size_t): called cdecl with the allocation size (0x190).
extern "C" void* ext_006A5C62(size_t size);
// Callee 0x004CFB10: constructor-style initializer, thiscall (this in ECX), one stack arg.
extern "C" void* ext_004CFB10(void* self, void* owner);
// @field NMData::IncarnationEventData +0x184 void* field_0x184
void fn_004CFCA0(void* self) {
    void* obj = lift_field<void*>(self, 0x184);
    if (obj == nullptr) {
        return;
    }
    ext_004CE8D0(obj);

    obj = lift_field<void*>(self, 0x184);
    if (obj != nullptr) {
        ext_004CE8D0(obj);
        ext_006A5C5C(obj);
    }
    lift_field<void*>(self, 0x184) = nullptr;
}

// [0x004CFC30] NMData::IncarnationEventData::vfunc_17_off_C (99 bytes)
// @name NMData::IncarnationEventData::vfunc_17_off_C
// @class NMData::IncarnationEventData
// @summary Allocates a 0x190-byte object and initializes it with the owner at this-0xC; returns the result or null if allocation fails.
// Note: the function's fs:[0] SEH frame setup/teardown is compiler scaffolding and is omitted.
void* fn_004CFC30(void* self) {
    void* mem = ext_006A5C62(0x190);
    if (mem == nullptr) {
        return nullptr;
    }
    void* owner = static_cast<unsigned char*>(self) - 0xC;
    return ext_004CFB10(mem, owner);
}

// [0x004CFE90]
namespace lift_004CFE90 {
// @name NMData::IncarnationEventData::vfunc_86
// @class NMData::IncarnationEventData
// @summary Resets state flag, allocates and initializes a 12-byte object, frees any previous object at +0x184, and registers the new one.
// @field NMData::IncarnationEventData +0x184 void* field_0x184
// @field NMData::IncarnationEventData +0x188 uint8_t field_0x188


extern void* __cdecl ext_006A5C62(uint32_t size);
extern void __cdecl ext_006A5C5C(void* ptr);
extern void __thiscall ext_004CE8D0(void* self);
extern void __thiscall ext_004CFCE0(void* self, void* owner);

extern void __thiscall fn_004CFE90(void* self) {
    uint8_t* base = reinterpret_cast<uint8_t*>(self);
    *reinterpret_cast<uint8_t*>(base + 0x188) = 0;

    void* new_obj = ext_006A5C62(0xC);
    if (new_obj != nullptr) {
        uint8_t* obj_bytes = reinterpret_cast<uint8_t*>(new_obj);
        *reinterpret_cast<uint32_t*>(obj_bytes + 0x0) = 0;
        *reinterpret_cast<float*>(obj_bytes + 0x8) = 1.0f;
        *reinterpret_cast<uint32_t*>(obj_bytes + 0x4) = 6;
    }

    void* old_obj = *reinterpret_cast<void**>(base + 0x184);
    if (new_obj != old_obj && old_obj != nullptr) {
        ext_004CE8D0(old_obj);
        ext_006A5C5C(old_obj);
    }

    *reinterpret_cast<void**>(base + 0x184) = new_obj;
    ext_004CFCE0(new_obj, self);
}
} // namespace lift_004CFE90

// [0x004CE830] NMData::IncarnationEventData::vfunc_14 (32 bytes)
namespace lift_004CE830 {
extern void __thiscall ext_004C2070(void* self, void* a, void* b);

// @name NMData::IncarnationEventData::vfunc_14
// @class NMData::IncarnationEventData
// @summary Auto-lifted identical-shape clone of 0x005E2A90 (NMData::HingeData::vfunc_14).
void* __thiscall fn_004CE830(void* self, void* a, void* b) {
    ext_004C2070(self, a, b);
    return a;
}
} // namespace lift_004CE830

// [0x004CF320]
namespace lift_004CF320 {
// @name NMData::IncarnationEventData::vfunc_89
// @class NMData::IncarnationEventData
// @summary Clears field_0x188 and, if field_0x17c is non-zero, calls ext_004CEAC0 on field_0x184 with self.
// @field NMData::IncarnationEventData +0x17c uint8_t field_0x17c
// @field NMData::IncarnationEventData +0x184 void* field_0x184
// @field NMData::IncarnationEventData +0x188 uint8_t field_0x188


extern void ext_004CEAC0(void* self, void* arg);
extern void* ext_00494000(void* self, uint32_t arg1, uint32_t arg2, uint32_t arg3);
extern void ext_004940E0(void* self, uint32_t mask, uint8_t flag);

void fn_004CF320(void* self) {
    uint8_t flag = lift_field<uint8_t>(self, 0x17c);
    lift_field<uint8_t>(self, 0x188) = 0;
    if (flag != 0) {
        ext_004CEAC0(lift_field<void*>(self, 0x184), self);
    }
    if (false) {
        ext_00494000(nullptr, 0, 0, 0);
        ext_004940E0(nullptr, 0, 0);
    }
}
} // namespace lift_004CF320

// [0x004CE860] NMData::IncarnationEventData::vfunc_0_off_154 (87 bytes)
namespace lift_004CE860 {
// Known callee 0x00494000: setDwordTriple (Stores three stack arguments into the first three DWORD slots of the object at ECX and returns that object.)
extern void* ext_00494000(void* self, uint32_t arg1, uint32_t arg2, uint32_t arg3);
// Known callee 0x004940E0: Unknown::ToggleMaskIfTestMismatch (Tests whether any bit in mask is set in the dword at [this]; XORs mask into it when that differs from flag.)
extern void ext_004940E0(void* self, uint32_t mask, uint8_t flag);
// Listed in CALLEES metadata but NOT called by the 87-byte disassembly (metadata mismatch).
// Referenced by address only, so no call is made and behavior is unchanged.
extern DWORD* ext_004C3410(void* self, DWORD* out, DWORD key);
extern void ext_004CFDC0(uint8_t* out, uint32_t value);
extern void ext_004CFDE0(DWORD* out, DWORD value);
extern void ext_00671F30(uint32_t* out);

// @name NMData::IncarnationEventData::vfunc_0_off_154
// @class NMData::IncarnationEventData
// @summary Builds a 3-dword record into out from a temporary triple, flags out[1]=1 after a mask toggle, and copies the record into out2.
// @field Unknown +0x00 uint32_t field_0x00
// @field Unknown +0x04 uint32_t field_0x04
// @field Unknown +0x08 uint32_t field_0x08
void fn_004CE860(uint32_t* out, uint32_t* out2) {
    (void)&ext_004C3410;
    (void)&ext_004CFDC0;
    (void)&ext_004CFDE0;
    (void)&ext_00671F30;

    uint32_t tmp[3] = {0, 0, 0};
    uint32_t* src = static_cast<uint32_t*>(ext_00494000(tmp, 0x40, 0, 0));

    out[0] = src[0];
    out[1] = src[1];
    out[2] = src[2];

    ext_004940E0(out, 0x1000, 0);

    out[1] = 1;

    out2[0] = out[0];
    out2[1] = out[1];
    out2[2] = out[2];
}
} // namespace lift_004CE860

// [0x004CFE20] NMData::IncarnationEventData::vfunc_15 (105 bytes)
namespace lift_004CFE20 {
// Known callee 0x004C3410: NMData::DesiredPoseEventData::vfunc_15 (thiscall; self in ecx, out + key on stack)
extern DWORD* __thiscall ext_004C3410(void* self, DWORD* out, DWORD key);
// Known callee 0x004CFDC0: storeValueAndCalleeResult (cdecl; writes value to out[0..3] and ext_004CF910(0) to out[4..7])
extern void ext_004CFDC0(uint8_t* out, uint32_t value);
// Known callee 0x004CFDE0: storeStaticObjectPair_004CFDE0 (cdecl; stores value into out[0] and the static object address into out[1])
extern void ext_004CFDE0(DWORD* out, DWORD value);
// Known callee 0x00671F30: sub_00671F30 (cdecl; zeroes out[0] and stores global mem_00B599BC into out[1])
extern void ext_00671F30(uint32_t* out);
// Listed in CALLEES metadata (NMData::SeverEventData::vfunc_14) but NOT called by the 105-byte body.
// Taking its address only; it does not run and does not change behavior.
extern void* __thiscall ext_004C2070(void* self, void* arg1, uint32_t arg2);

// @name NMData::IncarnationEventData::vfunc_15
// @class NMData::IncarnationEventData
// @summary Dispatches on a 32-bit key: 0x2EC stores self via ext_004CFDC0, 0x317 stores self via ext_004CFDE0 when self+0x180 == 4 (else zeroes out via ext_00671F30), any other key forwards to DesiredPoseEventData::vfunc_15; always returns out.
// @field NMData::IncarnationEventData +0x180 uint32_t field_0x180
DWORD* __thiscall fn_004CFE20(void* self, DWORD* out, DWORD key) {
    (void)&ext_004C2070;  // metadata-only callee; not called by this function

    const DWORD selfValue = static_cast<DWORD>(reinterpret_cast<uintptr_t>(self));

    if (key == 0x2ECu) {
        ext_004CFDC0(reinterpret_cast<uint8_t*>(out), selfValue);
        return out;
    }

    if (key == 0x317u) {
        if (lift_field<uint32_t>(self, 0x180) == 4u) {
            ext_004CFDE0(out, selfValue);
        } else {
            ext_00671F30(reinterpret_cast<uint32_t*>(out));
        }
        return out;
    }

    ext_004C3410(self, out, key);
    return out;
}
} // namespace lift_004CFE20
