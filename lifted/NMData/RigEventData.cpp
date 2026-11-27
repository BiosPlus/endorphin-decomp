// Lifted C++ translation unit: lifted/NMData/RigEventData.cpp
#include "lift_compat.h"
#include <string>
extern "C" void* __thiscall ext_006404E0(void* self, void* arg);
extern "C" void* mem_00A9F218;
#include <cstring>
extern "C" void ext_00661650(void* self);
extern "C" void ext_004C2070(void* self, void* arg1, uint32_t arg2);

extern "C" void ext_00661650(void* self);
extern "C" void ext_004C2070(void* self, void* arg1, uint32_t arg2);
// @class NMData::RigEventData
// @summary Auto-lifted identical-shape clone of 0x004DDED0 (NMData::AnimationEventData::vfunc_59).
// @field NMData::RigEventData +0x0 void** vptr
extern "C" void __thiscall fn_004D3D00(void* self, void* a) {
    using VFn = void(__thiscall*)(void* self, void* arg);
    void* g = mem_00A9F218;
    void* r = ext_006404E0(a, g);
    void** vt = *reinterpret_cast<void***>(self);
    reinterpret_cast<VFn>(vt[22])(self, r);
}
#include <new>
extern "C" void* ext_006A5C62(size_t size);
extern "C" void* ext_004DC710(void* self, void* owner);

extern "C" void* ext_006A5C62(size_t size);
extern "C" void* ext_004DC710(void* self, void* owner);
// @class NMData::RigEventData
// @summary Auto-lifted identical-shape clone of 0x0058F6B0 (NMData::AxisDefineSensorData::vfunc_14).
void* fn_004D3C20(void* self, void* arg1, uint32_t arg2) {
    if (arg2 == 0x14B) {
        ext_00661650(arg1);
    } else {
        ext_004C2070(self, arg1, arg2);
    }
    return arg1;
}
#include <cstdint>

// [0x004DCB20] NMData::RigEventData::vfunc_17_off_C (99 bytes)
// @name NMData::RigEventData::vfunc_17_off_C
// @class NMData::RigEventData
// @summary Auto-lifted identical-shape clone of 0x004CFC30 (NMData::IncarnationEventData::vfunc_17_off_C).
void* fn_004DCB20(void* self) {
    void* mem = ext_006A5C62(0x464);
    if (mem == nullptr) {
        return nullptr;
    }
    void* owner = static_cast<unsigned char*>(self) - 0xC;
    return ext_004DC710(mem, owner);
}

// [0x004D3C60]
namespace lift_004D3C60 {
// @name NMData::RigEventData::vfunc_13
// @class NMData::RigEventData
// @summary Returns property/value at +0x398 if name matches 0x948360, otherwise initializes default out_result
// @field NMData::RigEventData +0x398 uint8_t field_0x398


extern uint32_t mem_00924FC0;
extern void __thiscall ext_00661650(void* self, const void* src);
extern void __cdecl ext_0046F7D0(void* out_result);

void* __thiscall fn_004D3C60(void* self, void* out_result, const void* name) {
    using StdStringEqCStrFn = uint8_t(__cdecl*)(const void*, const char*);
    auto str_eq = reinterpret_cast<StdStringEqCStrFn>(static_cast<uintptr_t>(mem_00924FC0));

    if (str_eq(name, reinterpret_cast<const char*>(0x00948360)) != 0) {
        ext_00661650(out_result, static_cast<const uint8_t*>(self) + 0x398);
        return out_result;
    }

    ext_0046F7D0(out_result);
    return out_result;
}
} // namespace lift_004D3C60

// [0x004D4730]
namespace lift_004D4730 {
// @name NMData::RigEventData::vfunc_1_off_184
// @class NMData::RigEventData
// @summary Checks whether the string returned by sub_004D40E0 differs from the global string at 0x00A34650.


extern void* __thiscall ext_004D40E0(void* self, void* out_str);

extern uint32_t mem_00A34650;
extern uint32_t mem_00924FC8;
extern uint32_t mem_00924FF4;

uint8_t __thiscall fn_004D4730(void* self) {
    uint8_t str_buf[28];
    void* rig_event = reinterpret_cast<uint8_t*>(self) - 0x184;
    void* str_ptr = ext_004D40E0(rig_event, str_buf);

    using op_neq_fn = uint8_t(__cdecl*)(void*, uint32_t);
    auto op_neq = reinterpret_cast<op_neq_fn>(static_cast<uintptr_t>(mem_00924FC8));
    uint8_t result = op_neq(str_ptr, mem_00A34650);

    using dtor_fn = void(__thiscall*)(void*);
    auto dtor = reinterpret_cast<dtor_fn>(static_cast<uintptr_t>(mem_00924FF4));
    dtor(str_buf);

    return result;
}
} // namespace lift_004D4730

// [0x004D3D50] NMData::RigEventData::vfunc_0_off_154 (121 bytes)
namespace lift_004D3D50 {
// Known callee 0x00494000: sub_00494000 (setDwordTriple: stores three args into the first three DWORDs of the object and returns it.)
extern void* ext_00494000(void* self, uint32_t arg1, uint32_t arg2, uint32_t arg3);
// Known callee 0x004940E0: sub_004940E0 (Unknown::ToggleMaskIfTestMismatch: XORs mask into the dword at [this] when the bit test differs from flag.)
extern void ext_004940E0(void* self, uint32_t mask, uint8_t flag);

// @name NMData::RigEventData::vfunc_0_off_154
// @class NMData::RigEventData
// @summary Builds a 3-dword record via setDwordTriple, applies two mask toggles to arg1, copies it to arg2, and stores 6 into arg3 and arg4.
void fn_004D3D50(void* self, uint32_t* a1, uint32_t* a2, uint32_t* a3, uint32_t* a4) {
    (void)self; // ECX is overwritten before use in the original.

    uint32_t tmp[3];
    uint32_t* r = static_cast<uint32_t*>(ext_00494000(tmp, 0, 0, 0x40));

    a1[0] = r[0];
    a1[1] = r[1];
    a1[2] = r[2];

    ext_004940E0(a1, 0x1000, 1);
    ext_004940E0(a1, 0x2000, 1);

    a1[1] = 2;

    a2[0] = a1[0];
    a2[1] = a1[1];
    a2[2] = a1[2];

    *a3 = 6;
    *a4 = 6;
}
} // namespace lift_004D3D50

// [0x004DC450] NMData::RigEventData::vfunc_34 (151 bytes)
namespace lift_004DC450 {
extern void ext_004DC370(void* self);
// Known callee 0x00493E40: forwardVtableSlot194 (Dereferences a pointer-to-pointer held in self, then tail-jumps to the)
extern void* ext_00493E40(void* self, void* arg);
// Known callee 0x00528B90: Unknown::setPeerWithBackLink (Stores the argument at this+0x04; if it is non-null, writes this into argument+0x08.)
extern void ext_00528B90(void* self, void* peer);
extern int mem_00B40640;

// @name NMData::RigEventData::vfunc_34
// @class NMData::RigEventData
// @summary Looks up a helper object via the transform interface vtable and the self vtable, then links it back to this and stores this+0x348 into its +0x20 slot.
// @field NMData::RigEventData +0x00 void** vptr
// @field NMData::RigEventData +0x04 void* field_0x04
void* fn_004DC450(void* self, void* arg0) {
    // Kept as byte-offset vtable reads: slot index = byte offset / sizeof(void*) is not portable
    // across the 32-bit original and 64-bit builds.
    auto vslot = [](void* obj, std::ptrdiff_t byteOff) -> void* {
        void** vt = *reinterpret_cast<void***>(obj);
        return *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(vt) + byteOff);
    };

    ext_004DC370(self);

    void* sub = self ? static_cast<uint8_t*>(self) + 0xC : nullptr;

    // Interface subobject at self+0x04; call its vtable slot at +0xC.
    void* iface = static_cast<uint8_t*>(self) + 0x4;
    auto fnIface = reinterpret_cast<void* (*)(void*, void*, void*, int)>(vslot(iface, 0xC));
    void* globalArg = reinterpret_cast<void*>(static_cast<std::intptr_t>(mem_00B40640));
    void* r1 = fnIface(iface, globalArg, sub, 0);

    // Self vtable slot at +0xD8 with r1 as argument.
    auto fnSelf = reinterpret_cast<void* (*)(void*, void*)>(vslot(self, 0xD8));
    void* r2 = fnSelf(self, r1);

    void* edi = ext_00493E40(arg0, r2);
    if (edi) {
        ext_00528B90(sub, edi);
        lift_field<void*>(edi, 0x20) = static_cast<uint8_t*>(self) + 0x348;
    }
    return edi;
}
} // namespace lift_004DC450

// [0x004DCD80]
namespace lift_004DCD80 {
extern uint8_t mem_00AE6004[];
extern void ext_0040ECB0(void* self, const void* value);
extern void ext_004DCC80(void* self, const void* value);

// @name NMData::RigEventData::vfunc_83
// @class NMData::RigEventData
// @summary Appends global string at 0x00AE6004 to field_0x16C and calls helper 0x004DCC80 with it
// @field NMData::RigEventData +0x16C void* field_0x16C
void fn_004DCD80(void* self) {
    uint8_t* base = static_cast<uint8_t*>(self);
    ext_0040ECB0(base + 0x16C, mem_00AE6004);
    ext_004DCC80(self, mem_00AE6004);
}
} // namespace lift_004DCD80

// [0x004DB020] NMData::RigEventData::vfunc_84 (74 bytes)
namespace lift_004DB020 {
extern void ext_004DA060();
extern void ext_004DA740(uint8_t b192, uint8_t b193, int32_t arg);

// @name NMData::RigEventData::vfunc_84
// @class NMData::RigEventData
// @summary Range-checks an int argument against this+0x15C/0x160 when enabled (this+0x17C, this+0x18C set) and dispatches to ext_004DA740 with flag bytes; otherwise calls ext_004DA060.
// @field NMData::RigEventData +0x15C int32_t field_0x15C
// @field NMData::RigEventData +0x160 int32_t field_0x160
// @field NMData::RigEventData +0x17C uint8_t field_0x17C
// @field NMData::RigEventData +0x18C uint32_t field_0x18C
// @field NMData::RigEventData +0x192 uint8_t field_0x192
// @field NMData::RigEventData +0x193 uint8_t field_0x193
void fn_004DB020(void* self, int32_t arg) {
    if (lift_field<uint32_t>(self, 0x18C) == 0) {
        return;
    }
    if (lift_field<uint8_t>(self, 0x17C) == 0) {
        return;
    }
    if (arg < lift_field<int32_t>(self, 0x15C) || arg >= lift_field<int32_t>(self, 0x160)) {
        ext_004DA060();
        return;
    }
    ext_004DA740(lift_field<uint8_t>(self, 0x192),
                 lift_field<uint8_t>(self, 0x193),
                 arg);
}
} // namespace lift_004DB020

// [0x004DC600] NMData::RigEventData::vfunc_0_off_180 (89 bytes)
namespace lift_004DC600 {
extern int mem_00925134;  // CRT _invalid_parameter_noinfo import slot
extern void __thiscall ext_004D3E40(void* self);
extern void __thiscall ext_004DB070(void* self, uint32_t arg);
// Known callee 0x00594000: sub_00594000 (Returns global int32 value from mem_00B40D08.)
// Asm pushes one stack argument (the begin pointer value), cdecl.
extern int32_t __cdecl ext_00594000(uint32_t arg);
// Known callee 0x00594620: sub_00594620 (Member forwarding thunk: loads subobject pointer at +0x26C and tail-calls sub_0047A4A0.)
// Asm passes its argument in ecx (__fastcall) and returns a pointer in eax.
extern uint32_t __fastcall ext_00594620(uint32_t self);

// @name NMData::RigEventData::vfunc_0_off_180
// @class NMData::RigEventData
// @summary Listener thunk: runs ext_004D3E40 on the owning RigEventData, validates the 28-byte entry vector at +0x170/+0x174, then forwards the first entry through ext_00594000/ext_00594620 and calls ext_004DB070 with the non-null result.
// @field NMData::RigEventData +0x170 uint32_t field_0x170
// @field NMData::RigEventData +0x174 uint32_t field_0x174
void fn_004DC600(void* self) {
    // `self` is the SelectionVariable::Listener subobject at RigEventData+0x180;
    // the owning RigEventData object starts 0x180 bytes before it.
    uint8_t* base = static_cast<uint8_t*>(self) - 0x180;
    ext_004D3E40(base);

    const uint32_t begin = lift_field<uint32_t>(self, -0x10);  // RigEventData+0x170
    const uint32_t end = lift_field<uint32_t>(self, -0x0C);    // RigEventData+0x174
    const int32_t count = static_cast<int32_t>(end - begin) / 28;

    // Original: if begin == 0 or count == 0, call _invalid_parameter_noinfo (never returns).
    if (begin == 0 || count == 0) {
        (void)&mem_00925134;  // metadata-only: MSVCR80!_invalid_parameter_noinfo IAT slot
        std::abort();
    }

    const int32_t g = ext_00594000(begin);
    const uint32_t r = ext_00594620(static_cast<uint32_t>(g));
    if (r != 0) {
        ext_004DB070(base, r);
    }
}
} // namespace lift_004DC600

// [0x004DAF20] NMData::RigEventData::vfunc_87 (243 bytes)
namespace lift_004DAF20 {
// Thiscall helpers: first argument is the implicit `this` (ECX).
extern void ext_004DA090(void* self);
extern void ext_004DA2B0(void* self);
// Known callee 0x00528B60: sub_00528B60 (36B) — invoked on element subobject (elem + 0xC).
extern void ext_00528B60(void* self);
// Known callee 0x00594000: sub_00594000 (Returns global int32 value from mem_00B40D08.)
extern int32_t ext_00594000();
// Known callee 0x0065C640: CriticalSectionLock::enter (Enters the CRITICAL_SECTION whose pointer is stored at offset 0 of self.)
extern void ext_0065C640(void* self);
// Known callee 0x0065C650: CriticalSectionLock::leave (Releases the critical section pointed to by the first field)
extern void ext_0065C650(void* self);
// Known callee 0x006A5C5C: thunk_MFC80_ord_764 (cdecl; IAT jump thunk forwarding to MFC80!ord_764, used as delete(ptr).)
extern void ext_006A5C5C(void* ptr);
// IAT slot for MSVCR80!_invalid_parameter_noinfo (debug iterator guards; never taken in valid use, so omitted).
extern int mem_00925134;

// @name NMData::RigEventData::vfunc_87
// @class NMData::RigEventData
// @summary Deletes the object at +0x18C (clearing the slot), then under a critical section calls ext_00528B60 on each element subobject (elem + 0xC) of the array at +0x334..+0x338.
// @field NMData::RigEventData +0x18C void* field_0x18C
// @field NMData::RigEventData +0x334 void** field_0x334
// @field NMData::RigEventData +0x338 void** field_0x338
void fn_004DAF20(void* self) {
    (void)&mem_00925134;  // metadata-only reference (debug-iterator guard IAT slot)

    // Step 1: if a pending object exists, run its method, destroy it and clear the slot.
    if (lift_field<void*>(self, 0x18C) == nullptr) {
        return;
    }
    ext_004DA090(lift_field<void*>(self, 0x18C));

    void* pending = lift_field<void*>(self, 0x18C);
    if (pending != nullptr) {
        ext_004DA2B0(pending);
        ext_006A5C5C(pending);
    }
    lift_field<void*>(self, 0x18C) = nullptr;

    // Step 2: obtain the lock object via a virtual call on the global manager's subobject.
    // Slot 0x1D8 is vtable index 0x76.
    void* manager = reinterpret_cast<void*>(static_cast<uintptr_t>(static_cast<uint32_t>(ext_00594000())));
    void* owner = lift_field<void*>(manager, 0x258);
    void** vtbl = *reinterpret_cast<void***>(owner);
    using GetLockFn = void* (__thiscall*)(void*);
    void* lock = reinterpret_cast<GetLockFn>(vtbl[0x1D8 / sizeof(void*)])(owner);

    ext_0065C640(lock);

    // Step 3: iterate the pointer array [begin, end) and invoke ext_00528B60 on elem + 0xC.
    void** it = lift_field<void**>(self, 0x334);
    void** end = lift_field<void**>(self, 0x338);
    while (it != end) {
        void* elem = *it;
        ext_00528B60(reinterpret_cast<void*>(reinterpret_cast<uintptr_t>(elem) + 0xC));
        ++it;
    }

    ext_0065C650(lock);
}
} // namespace lift_004DAF20

// [0x004DC4F0] NMData::RigEventData::vfunc_1_off_154 (261 bytes)
namespace lift_004DC4F0 {
// Known callee 0x004DA180: sub_004DA180 (thiscall on a std::vector/string-like object, one int arg).
extern void ext_004DA180(void* self, int32_t n);
// Known callee 0x004C28C0: sub_004C28C0 (thiscall on the base object, one pointer arg).
extern void ext_004C28C0(void* self, void* arg);
// Known callee 0x004DB070: sub_004DB070 (thiscall on the base object, one DWORD arg).
extern void ext_004DB070(void* self, uint32_t arg);
// Known callee 0x004026E0: std_vector_string_Tidy (Destroys all std::string elements in a vector, frees the buffer, and resets pointers to null.)
extern void ext_004026E0(void* self);
// IAT slots: mem_00924FE4 = std::string::string(const char*), mem_00925134 = _invalid_parameter_noinfo.
extern int mem_00924FE4;
extern int mem_00925134;

// Entered through the HasDependentSelection base (+0x154): recovers the RigEventData
// pointer as self - 0x154, then walks arg's element list and forwards its first entry
// to ext_004DB070. The original calls arg's vtable slots 7 (list getter) and 15 (fill a
// local std::vector<std::string>), constructs temporary strings, and tidies the local at the end.
// The SEH frame and unwind-state bookkeeping are not modelled.
// @name NMData::RigEventData::vfunc_1_off_154
// @class NMData::RigEventData
// @summary Forwards the first element of arg's list to ext_004DB070 on the RigEventData base (self - 0x154), after filling and tidying a local string vector.
// @field NMData::RigEventData +0x16C void* field_0x16C
void fn_004DC4F0(void* self, void* arg) {
    uint8_t* obj = static_cast<uint8_t*>(self) - 0x154;

    void** vt = *static_cast<void***>(arg);
    using ListGetter = void* (*)(void* self_);
    using Filler = void (*)(void* self_, void* out);
    using StrCtor = void (*)(void* self_, const char* s);
    using InvalidParam = void (*)();

    // First list fetch: bail out unless the list has at least one element.
    void* list = reinterpret_cast<ListGetter>(vt[7])(arg);
    uint32_t begin = lift_field<uint32_t>(list, 4);
    uint32_t end = lift_field<uint32_t>(list, 8);
    if (begin == 0 || (static_cast<int32_t>(end - begin) >> 2) == 0) {
        return;
    }

    // Local std::vector<std::string> (zero-initialised) filled from arg.
    alignas(4) uint8_t tmp_vec[0x1C] = {};
    reinterpret_cast<Filler>(vt[15])(arg, tmp_vec);

    // Temporary std::string built from the literal at VA 0x928B5D.
    alignas(4) uint8_t tmp_str[0x1C] = {};
    auto str_ctor = reinterpret_cast<StrCtor>(static_cast<uintptr_t>(static_cast<uint32_t>(mem_00924FE4)));
    const char* lit = reinterpret_cast<const char*>(static_cast<uintptr_t>(0x928B5DU));
    str_ctor(tmp_str, lit);
    ext_004DA180(tmp_vec, 2);
    ext_004C28C0(obj, tmp_vec);

    str_ctor(tmp_str, lit);
    ext_004DA180(static_cast<uint8_t*>(self) + 0x18, 2);

    // Second list fetch: front element, with the original's begin < end check.
    void* list2 = reinterpret_cast<ListGetter>(vt[7])(arg);
    uint32_t begin2 = lift_field<uint32_t>(list2, 4);
    uint32_t end2 = lift_field<uint32_t>(list2, 8);
    if (!(begin2 < end2)) {
        reinterpret_cast<InvalidParam>(static_cast<uintptr_t>(static_cast<uint32_t>(mem_00925134)))();
    }
    uint32_t elem = *reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(begin2));

    ext_004DB070(obj, elem);
    ext_004026E0(tmp_vec);
}
} // namespace lift_004DC4F0

// [0x004DDD30] NMData::RigEventData::vfunc_88 (194 bytes)
namespace lift_004DDD30 {
extern void* ext_00660A50(void* a, void* b, uint32_t c);
extern void __thiscall ext_004DA820(void* self);
extern void __thiscall ext_004DDA90(void* self, uint32_t a, uint32_t b, uint32_t c, uint32_t d);
// Known callee 0x006A5C5C: thunk_MFC80_ord_764 (IAT jump thunk forwarding to MFC80!ord_764.)
extern void ext_006A5C5C(void* p);
extern void* mem_00925134;
extern uint32_t mem_00B40640;

// @name NMData::RigEventData::vfunc_88
// @class NMData::RigEventData
// @summary Collects a 3-word vector via ext_00660A50 on this+0x16C, then forwards its first elements to ext_004DDA90 and frees the buffer.
// @field NMData::RigEventData +0x16C void* field_0x16C
extern void __thiscall fn_004DDD30(void* self) {
    // SEH frame setup/teardown (fs:[0] push/pop) and CRT _invalid_parameter_noinfo
    // guard are omitted: the guard branch is unreachable because the element count
    // is known non-zero at that point.
    (void)&mem_00925134;

    uint32_t vec[3] = {0, 0, 0};
    void* tmp = ext_00660A50(static_cast<uint8_t*>(self) + 0x16C, vec, 0);
    ext_004DA820(tmp);

    const uint32_t begin = vec[0];
    if (begin == 0) {
        return;
    }

    const uint32_t end = vec[1];
    const int32_t bytes = static_cast<int32_t>(end - begin);
    const int32_t count = bytes >> 2;
    if (count != 0) {
        const auto* elems = reinterpret_cast<const uint32_t*>(static_cast<uintptr_t>(begin));
        const uint32_t first = elems[0];
        const uint32_t second = (count == 2) ? elems[1] : 0u;
        ext_004DDA90(self, first, second, mem_00B40640, mem_00B40640);
    }

    ext_006A5C5C(reinterpret_cast<void*>(static_cast<uintptr_t>(begin)));
}
} // namespace lift_004DDD30

// [0x004DCA50]
namespace lift_004DCA50 {
extern void* mem_00A3464C;
    extern void* mem_00A34650;
    extern void* mem_00924FE4;
    extern void* mem_00924FF4;
    extern void* mem_00925134;

    void __thiscall ext_004EE590(void* this_ptr, uint32_t arg1);
    void __thiscall ext_004DBBE0(void* this_ptr, void* arg1);
    void __thiscall ext_004D9480(void* this_ptr, void* arg1, void* arg2);
    void __thiscall ext_004026E0(void* this_ptr);
    void __thiscall ext_004C28C0(void* this_ptr);
    void __thiscall ext_004DA180(void* this_ptr);
    void __thiscall ext_004DB070(void* this_ptr);

// @name NMData::RigEventData::vfunc_82
// @class NMData::RigEventData
// @summary Sets the target object at +0x168, updates +0x3e8 if non-null, and invokes 0x4DBBE0 and 0x4D9480 with string constants.
// @field NMData::RigEventData +0x168 void* field_0x168
// @field NMData::RigEventData +0x3e8 uint8_t field_0x3e8
void __thiscall fn_004DCA50(void* this_ptr, void* arg1) {
    lift_field<void*>(this_ptr, 0x168) = arg1;

    if (arg1 != nullptr) {
        void* sub_obj = static_cast<char*>(arg1) + 4;
        void** vtable = *reinterpret_cast<void***>(sub_obj);
        using vfunc_t = uint32_t(__thiscall*)(void*);
        uint32_t val = reinterpret_cast<vfunc_t>(vtable[0x24 / sizeof(void*)])(sub_obj);
        ext_004EE590(static_cast<char*>(this_ptr) + 0x3e8, val);
    }

    using str_ctor_t = void(__thiscall*)(void*, const char*);
    using str_dtor_t = void(__thiscall*)(void*);

    uint8_t str1[0x1C];
    reinterpret_cast<str_ctor_t>(mem_00924FE4)(str1, static_cast<const char*>(mem_00A3464C));
    ext_004DBBE0(this_ptr, str1);
    reinterpret_cast<str_dtor_t>(mem_00924FF4)(str1);

    uint8_t str2[0x1C];
    reinterpret_cast<str_ctor_t>(mem_00924FE4)(str2, static_cast<const char*>(mem_00A34650));
    ext_004D9480(this_ptr, str2, lift_field<void*>(this_ptr, 0x168));
    reinterpret_cast<str_dtor_t>(mem_00924FF4)(str2);

    (void)ext_004026E0;
    (void)ext_004C28C0;
    (void)ext_004DA180;
    (void)ext_004DB070;
    (void)mem_00925134;
}
} // namespace lift_004DCA50

// [0x004D4310]
namespace lift_004D4310 {
// @name NMData::RigEventData::vfunc_22
// @class NMData::RigEventData
// @summary Serializes RigEventData fields to the output node and delegates to TriggeredEventData::vfunc_22.
// @field NMData::RigEventData +0x190 uint8_t field_0x190
// @field NMData::RigEventData +0x191 uint8_t field_0x191
// @field NMData::RigEventData +0x192 uint8_t field_0x192
// @field NMData::RigEventData +0x193 uint8_t field_0x193
// @field NMData::RigEventData +0x194 uint8_t field_0x194
// @field NMData::RigEventData +0x195 uint8_t field_0x195
// @field NMData::RigEventData +0x198 float field_0x198
// @field NMData::RigEventData +0x340 int32_t field_0x340
// @field NMData::RigEventData +0x344 int32_t field_0x344


extern void* mem_00A9FA74;
extern void* mem_00A9F720;
extern void* mem_00A9F71C;
extern void* mem_00A9F734;
extern void* mem_00A9F924;
extern void* mem_00A9F6DC;
extern void* mem_00A9F89C;
extern void* mem_00A9F6A0;
extern void* mem_00A9F690;
extern void* mem_00A9F914;
extern void* mem_00924FF0;
extern void* mem_00924FF4;
extern void* mem_00B40640;

extern void ext_004D3E40(void* self);
extern std::string* ext_004D4060(void* self, std::string* out);
extern std::string* ext_004D40E0(void* self, std::string* out);
extern std::string* ext_004D3A10(void* self, std::string* out);
extern void* ext_00640110(void* self, void* key);
extern void ext_00427550(void* self, const char* name);
extern void ext_00640A80(void* node, uint8_t flag);
extern void ext_00640BC0(void* node, float value);
extern void ext_00640A50(void* node, int32_t value);
extern void ext_004C1DE0(void* self, void* out);
extern uintptr_t ext_00493E40(void* self);
extern void ext_004DC370();
extern void ext_00528B90(void* self, void* peer);

void* fn_004D4310(void* self, void* out) {
    (void)mem_00924FF0;
    (void)mem_00924FF4;
    (void)mem_00B40640;
    (void)ext_00493E40;
    (void)ext_004DC370;
    (void)ext_00528B90;
    ext_004D3E40(self);

    {
        std::string str;
        ext_004D4060(self, &str);
        void* child = ext_00640110(out, mem_00A9FA74);
        ext_00427550(&child, str.c_str());
    }

    {
        std::string str;
        ext_004D40E0(self, &str);
        void* child = ext_00640110(out, reinterpret_cast<void*>(0x00948520));
        ext_00427550(&child, str.c_str());
    }

    ext_00640A80(ext_00640110(out, mem_00A9F720), lift_field<uint8_t>(self, 0x190));
    ext_00640A80(ext_00640110(out, reinterpret_cast<void*>(0x00948514)), lift_field<uint8_t>(self, 0x191));
    ext_00640A80(ext_00640110(out, mem_00A9F71C), lift_field<uint8_t>(self, 0x192));
    ext_00640A80(ext_00640110(out, mem_00A9F734), lift_field<uint8_t>(self, 0x193));
    ext_00640BC0(ext_00640110(out, mem_00A9F924), lift_field<float>(self, 0x198));
    ext_00640A50(ext_00640110(out, mem_00A9F6DC), lift_field<int32_t>(self, 0x344));
    ext_00640A50(ext_00640110(out, mem_00A9F89C), lift_field<int32_t>(self, 0x340));
    ext_00640A80(ext_00640110(out, mem_00A9F6A0), lift_field<uint8_t>(self, 0x194));
    ext_00640A80(ext_00640110(out, mem_00A9F690), lift_field<uint8_t>(self, 0x195));

    {
        std::string str;
        ext_004D3A10(self, &str);
        void* child = ext_00640110(out, mem_00A9F914);
        ext_00427550(&child, str.c_str());
    }

    ext_004C1DE0(self, out);
    return out;
}
} // namespace lift_004D4310

// [0x004DBE80]
namespace lift_004DBE80 {
// @name NMData::RigEventData::vfunc_21
// @class NMData::RigEventData
// @summary Loads RigEventData properties from XML/data node, resolves rig/joint/event references, and updates selection/dirty state.
// @field NMData::RigEventData +0x04 void* field_0x04
// @field NMData::RigEventData +0x14 std::string field_0x14
// @field NMData::RigEventData +0x16C void* field_0x16C
// @field NMData::RigEventData +0x170 void* field_0x170
// @field NMData::RigEventData +0x180 void* field_0x180
// @field NMData::RigEventData +0x188 uint8_t field_0x188
// @field NMData::RigEventData +0x190 uint8_t field_0x190
// @field NMData::RigEventData +0x191 uint8_t field_0x191
// @field NMData::RigEventData +0x192 uint8_t field_0x192
// @field NMData::RigEventData +0x193 uint8_t field_0x193
// @field NMData::RigEventData +0x194 uint8_t field_0x194
// @field NMData::RigEventData +0x195 uint8_t field_0x195
// @field NMData::RigEventData +0x198 float field_0x198
// @field NMData::RigEventData +0x19C uint8_t field_0x19C
// @field NMData::RigEventData +0x340 int32_t field_0x340
// @field NMData::RigEventData +0x344 int32_t field_0x344
// @field NMData::RigEventData +0x394 uint32_t field_0x394
// @field NMData::RigEventData +0x398 uint8_t field_0x398
// @field NMData::RigEventData +0x3E8 uint8_t field_0x3E8
// @field NMData::RigEventData +0x400 void* field_0x400
// @field NMData::RigEventData +0x438 uint8_t field_0x438
// @field NMData::RigEventData +0x43C int32_t field_0x43C
// @field NMData::RigEventData +0x440 uint32_t field_0x440


void __thiscall ext_004C24C0(void* self, void* arg);
void __thiscall ext_004DA180(void* self, uint32_t count, std::string val);
void __thiscall ext_004EE590(void* self, void* str_ptr);
uint32_t __thiscall ext_0063EFE0(void* self, const char* name);
void __cdecl ext_004275E0(void* dst, void* obj);
void __thiscall ext_004DA510(void* self);
int32_t __thiscall ext_004D8C30(void* self, void* str_ptr);
void* __thiscall ext_0047A4A0(void* self, void* str_ptr);
void __thiscall ext_004D42A0(void* self, void* arg);
uint32_t __thiscall ext_004D8D70(void* self, void* str_ptr);
uint32_t __thiscall ext_004D4190(void* self);
std::string* __thiscall ext_004D4060(void* self, std::string* out);
void __thiscall ext_004DB940(void* self, void* str_ptr);
void __cdecl ext_00427640(void* out, void* obj_ptr);
void __cdecl ext_0046C0A0(void* out, void* obj_ptr);
void __cdecl ext_0053F5F0(void* out, void* obj_ptr);
void __thiscall ext_004D3940(void* self, std::string val);
void __thiscall ext_00587920(void* self, void* arg0, uint32_t arg1);
void __thiscall ext_00586300(void* self, uint32_t arg0, void* arg1, void* arg2);

extern const char mem_00928B5D[];
extern const char* mem_00A3464C;
extern const char* mem_00A34650;
extern const char* mem_00A34648;
extern void* mem_00AE29D0;
extern int32_t mem_009849B4;
extern const char* mem_00A9FA74;
extern const char mem_00948520[];
extern const char* mem_00A9F720;
extern const char mem_00948514[];
extern const char* mem_00A9F71C;
extern const char* mem_00A9F734;
extern const char* mem_00A9F924;
extern const char* mem_00A9F6DC;
extern const char* mem_00A9F89C;
extern const char* mem_00A9F6A0;
extern const char* mem_00A9F690;
extern const char* mem_00A9F914;
extern void* mem_00B40640;
extern void* mem_00924FCC;
extern void* mem_00924FD4;
extern void* mem_00924FDC;
extern void* mem_00924FE0;
extern void* mem_00924FE4;
extern void* mem_00924FE8;
extern void* mem_00924FF4;
extern void* mem_00925134;

static bool is_sentinel(uint32_t val) {
    return val == 0x00B53A34 || val == 0x00B53B30 || val == 0x00B53AB0 ||
           val == 0x00B53A70 || val == 0x00B53AF0;
}

void __thiscall fn_004DBE80(uint8_t* self, void* arg) {
    (void)mem_00924FCC;
    (void)mem_00924FD4;
    (void)mem_00924FDC;
    (void)mem_00924FE0;
    (void)mem_00924FE4;
    (void)mem_00924FE8;
    (void)mem_00924FF4;
    (void)mem_00925134;
    ext_004C24C0(self, arg);

    ext_004DA180(self + 0x16C, 2, std::string(mem_00928B5D));

    uint8_t* vec_begin = lift_field<uint8_t*>(self, 0x170);
    ext_004EE590(self + 0x3E8, vec_begin);
    ext_004EE590(self + 0x398, vec_begin + 0x1C);

    std::string str1(mem_00A3464C);
    std::string str2(mem_00A34650);

    uint8_t* global_obj = static_cast<uint8_t*>(mem_00AE29D0);
    if (lift_field<int32_t>(global_obj, 0x538) < mem_009849B4) {
        str1 = mem_00A3464C;
        str2 = std::string(mem_00A34648) + lift_field<std::string>(self, 0x14);
    } else {
        uint32_t found1 = ext_0063EFE0(arg, mem_00A9FA74);
        if (!is_sentinel(found1)) {
            ext_004275E0(&str1, reinterpret_cast<void*>(found1));
        }
        uint32_t found2 = ext_0063EFE0(arg, mem_00948520);
        if (!is_sentinel(found2)) {
            ext_004275E0(&str2, reinterpret_cast<void*>(found2));
        }
    }

    ext_004DA510(self);
    lift_field<int32_t>(self, 0x43C) = ext_004D8C30(self, &str1);

    void** vtable_400 = lift_field<void**>(self, 0x400);
    using GetVecFn = uint8_t*(__thiscall*)(void*);
    uint8_t* sub_vec = reinterpret_cast<GetVecFn>(vtable_400[2])(self + 0x400);
    void* elem0 = lift_field<void*>(sub_vec, 0x04);
    void* res = ext_0047A4A0(mem_00AE29D0, elem0);
    ext_004D42A0(self, res);

    uint32_t val_440 = ext_004D8D70(self, &str2);
    lift_field<uint32_t>(self, 0x440) = val_440;
    if (val_440 == ext_004D4190(self)) {
        lift_field<uint32_t>(self, 0x440) = 0;
    }

    std::string tmp;
    ext_004DB940(self, ext_004D4060(self, &tmp));

    uint32_t prop_obj = 0;
    prop_obj = ext_0063EFE0(arg, mem_00A9F720);
    ext_00427640(self + 0x190, &prop_obj);

    prop_obj = ext_0063EFE0(arg, mem_00948514);
    ext_00427640(self + 0x191, &prop_obj);

    prop_obj = ext_0063EFE0(arg, mem_00A9F71C);
    ext_00427640(self + 0x192, &prop_obj);

    prop_obj = ext_0063EFE0(arg, mem_00A9F734);
    ext_00427640(self + 0x193, &prop_obj);

    prop_obj = ext_0063EFE0(arg, mem_00A9F924);
    ext_0046C0A0(self + 0x198, &prop_obj);

    prop_obj = ext_0063EFE0(arg, mem_00A9F6DC);
    ext_0053F5F0(self + 0x344, &prop_obj);

    prop_obj = ext_0063EFE0(arg, mem_00A9F89C);
    ext_0053F5F0(self + 0x340, &prop_obj);

    prop_obj = ext_0063EFE0(arg, mem_00A9F6A0);
    ext_00427640(self + 0x194, &prop_obj);

    prop_obj = ext_0063EFE0(arg, mem_00A9F690);
    ext_00427640(self + 0x195, &prop_obj);

    lift_field<uint32_t>(self, 0x394) = 1;

    uint32_t found3 = ext_0063EFE0(arg, mem_00A9F914);
    if (!is_sentinel(found3)) {
        std::string s;
        uint32_t obj3 = ext_0063EFE0(arg, mem_00A9F914);
        ext_004275E0(&s, reinterpret_cast<void*>(obj3));
        ext_004D3940(self, s);
    }

    ext_00587920(self, self + 0x19C, 0);

    void** vtable_04 = lift_field<void**>(self, 0x04);
    using GetArgFn = void*(__thiscall*)(void*, void*);
    void* a1 = reinterpret_cast<GetArgFn>(vtable_04[3])(self + 0x04, mem_00B40640);
    void* a2 = reinterpret_cast<GetArgFn>(vtable_04[3])(self + 0x04, mem_00B40640);
    ext_00586300(self + 0x19C, 2, a2, a1);

    void** vtable_180 = lift_field<void**>(self, 0x180);
    using NotifyFn = void(__thiscall*)(void*);
    reinterpret_cast<NotifyFn>(vtable_180[0])(self + 0x180);

    lift_field<uint8_t>(self, 0x438) = 0;
    lift_field<uint8_t>(self, 0x188) = 1;
}
} // namespace lift_004DBE80
