// Lifted C++ translation unit: lifted/leaf/decompiled_4F0000.cpp
#include "lift_compat.h"

// [0x004F28C0] sub_004F28C0 (25 bytes)
namespace lift_004F28C0 {
// Known callee 0x0065C650: CriticalSectionLock::leave (Releases the critical section pointed to by the first field)
extern void __thiscall ext_0065C650(void* self);
// Known callee 0x006A5C5C: thunk_MFC80_ord_764 (IAT jump thunk forwarding to MFC80!ord_764.)
extern void __cdecl ext_006A5C5C(void* arg);

// @name ReleaseNestedCriticalSection
// @summary If the pointer stored at self is non-null, leave the critical section stored in that object's first field, then pass the object to MFC80 ord_764.
// @field Unknown +0x00 void* field_0x00
void fn_004F28C0(void* self) {
    uint32_t obj = *static_cast<uint32_t*>(self);
    if (obj == 0) {
        return;
    }
    uint32_t cs = *reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(obj));
    ext_0065C650(reinterpret_cast<void*>(static_cast<uintptr_t>(cs)));
    ext_006A5C5C(reinterpret_cast<void*>(static_cast<uintptr_t>(obj)));
}
} // namespace lift_004F28C0

// [0x004F27E0]
namespace lift_004F27E0 {
// @name descriptiveName_004F27E0
// @summary Thiscall initializer: calls ext_004F4D20(this, arg1, arg2), stores the @MO vtable at +0x00, returns this.
// @field Unknown +0x00 DWORD vtable

extern void ext_004F4D20(void* self, DWORD arg1, DWORD arg2);
extern const char mem_0094C42C[];

__thiscall void* fn_004F27E0(void* self, DWORD arg1, DWORD arg2) {
    ext_004F4D20(self, arg1, arg2);
    *reinterpret_cast<DWORD*>(self) = static_cast<DWORD>(reinterpret_cast<uintptr_t>(mem_0094C42C));
    return self;
}
} // namespace lift_004F27E0

// [0x004F4ED0] sub_004F4ED0 (44 bytes)
namespace lift_004F4ED0 {
// Callee 0x004F4EA0: sub_004F4EA0 (__thiscall, returns float via x87; see fn_004F8240 usage)
extern float ext_004F4EA0(void* self);

// @name NMData::SkeletalCalibrationVariables::vfunc_13 (acos ratio helper)
// @class NMData::SkeletalCalibrationVariables (inferred from callee ext_004F4EA0; not confirmed)
// @summary Returns acos(field_0x04 / callee(self)) as a float, with intermediate float rounding as in the original x87 code.
// @field NMData::SkeletalCalibrationVariables +0x04 float field_0x04
float fn_004F4ED0(void* self) {
    // fld dword [ecx+4] -> fstp dword -> fld dword: round the field through float.
    const float num = lift_field<float>(self, 4);
    // fstp qword: widen to double; call callee (ecx = self); fdivr: num / result.
    const double quotient = static_cast<double>(num) / static_cast<double>(ext_004F4EA0(self));
    // fstp dword: round quotient to float; then CIacos on the reloaded value; fstp dword.
    const float ratio = static_cast<float>(quotient);
    return static_cast<float>(std::acos(static_cast<double>(ratio)));
}
} // namespace lift_004F4ED0

// [0x004FDEF0]
namespace lift_004FDEF0 {
// @name sub_004FDEF0_dtor
// @class sub_004FDEF0_Class
// @summary Destroys two std::string members at +0x34 and +0x18, then calls base destructor sub_00665810.
// @field sub_004FDEF0_Class +0x18 void* field_0x18
// @field sub_004FDEF0_Class +0x34 void* field_0x34


extern void __fastcall ext_00665810(void* self);
extern uintptr_t mem_00924FF4;

extern void __fastcall fn_004FDEF0(void* self) {
    uint8_t* base = static_cast<uint8_t*>(self);
    auto dtor_string = reinterpret_cast<void(__fastcall*)(void*)>(mem_00924FF4);
    dtor_string(base + 0x34);
    dtor_string(base + 0x18);
    ext_00665810(self);
}
} // namespace lift_004FDEF0

// [0x004F91F0]
namespace lift_004F91F0 {
// @name initStaticObjectOnce
// @summary One-time initializer for the static object at 0x00AE9F24 guarded by the bit in 0x00AE9F28; returns the object's address.
// @field mem_00AE9F28 bit0 guard flag (set before the constructor runs)

extern DWORD mem_00AE9F28;
extern DWORD mem_00AE9F24;

DWORD ext_0067A670(void* self, DWORD value);

DWORD initStaticObjectOnce() {
    if ((mem_00AE9F28 & 1u) == 0) {
        mem_00AE9F28 |= 1u;
        ext_0067A670(reinterpret_cast<void*>(0x00AE9F24u), 0u);
        mem_00AE9F24 = 0x0094D03Cu;
    }
    return 0x00AE9F24u;
}
} // namespace lift_004F91F0

// [0x004F9250] sub_004F9250 (87 bytes)
namespace lift_004F9250 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (Calls ext_00672000 on self (thiscall, ECX = self), then stores the single stack argument into the first DWORD of self; returns that value.)
extern DWORD ext_0067A670(void* self, DWORD value);
extern DWORD mem_00AE9F30; // init guard flags (bit 0 = initialized)
extern DWORD mem_00AE9F2C; // function-local static object storage

// @name getLazyStaticObject
// @summary Lazily initializes a function-local static object once and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_004F9250() {
    if ((mem_00AE9F30 & 1u) == 0) {
        mem_00AE9F30 |= 1u;
        ext_0067A670(&mem_00AE9F2C, 0u);
        mem_00AE9F2C = 0x0094D1ECu;
    }
    return &mem_00AE9F2C;
}
} // namespace lift_004F9250

// [0x004F92B0]
namespace lift_004F92B0 {
extern DWORD mem_00AE9F38;
extern DWORD mem_00AE9F34;
void __thiscall ext_0067A670(void* self);

// @name getStaticSingleton_004F92B0
// @summary Lazily initializes a static object at 0x00AE9F34 guarded by 0x00AE9F38 and returns its address.
void* fn_004F92B0() {
    if ((mem_00AE9F38 & 1u) == 0u) {
        mem_00AE9F38 |= 1u;
        ext_0067A670(&mem_00AE9F34);
        mem_00AE9F34 = 0x0094D39Cu;
    }
    return &mem_00AE9F34;
}
} // namespace lift_004F92B0

// [0x004F9510]
namespace lift_004F9510 {
// @name InitPairWithZeroCall
// @summary Calls ext_004F91F0(0) and stores arg2 and the result into a 2-dword output struct, returning out.

extern uint32_t ext_004F91F0(uint32_t arg);

void* fn_004F9510(void* out, uint32_t val) {
    uint32_t res = ext_004F91F0(0);
    uint32_t* p = static_cast<uint32_t*>(out);
    p[0] = val;
    p[1] = res;
    return out;
}
} // namespace lift_004F9510

// [0x004F9530]
namespace lift_004F9530 {
// @name initPairWithLazyStatic
// @summary Initializes a 2-DWORD struct with a given value and the lazy static object pointer, returning the struct pointer.

extern void* ext_004F9250();

extern void* fn_004F9530(void* outPair, DWORD value) {
    void* lazyObj = ext_004F9250();
    DWORD* fields = static_cast<DWORD*>(outPair);
    fields[0] = value;
    fields[1] = static_cast<DWORD>(reinterpret_cast<uintptr_t>(lazyObj));
    return outPair;
}
} // namespace lift_004F9530

// [0x004F9370]
namespace lift_004F9370 {
extern uint32_t mem_00AE9F48;
extern uint32_t mem_00AE9F44;
extern DWORD __thiscall ext_0067A670(void* self);

// @name getStaticObject_004F9370
// @summary Lazily initializes and returns the static object at 0x00AE9F44.
void* fn_004F9370() {
    if ((mem_00AE9F48 & 1u) == 0) {
        mem_00AE9F48 |= 1u;
        ext_0067A670(&mem_00AE9F44);
        mem_00AE9F44 = 0x0094D6FCu;
    }
    return &mem_00AE9F44;
}
} // namespace lift_004F9370

// [0x004F93D0]
namespace lift_004F93D0 {
extern uint32_t mem_00AE9F50;
extern uint32_t mem_00AE9F4C;
extern void ext_0067A670(void* self);

// @name getStaticObject_004F93D0
// @summary Lazily initializes and returns a pointer to static object mem_00AE9F4C
void* fn_004F93D0() {
    if ((mem_00AE9F50 & 1u) == 0) {
        mem_00AE9F50 |= 1u;
        ext_0067A670(&mem_00AE9F4C);
        mem_00AE9F4C = 0x0094D8ACu;
    }
    return &mem_00AE9F4C;
}
} // namespace lift_004F93D0

// [0x004F9430]
namespace lift_004F9430 {
// @name getSingleton_004F9430
// @summary Lazily initializes and returns the singleton object at 0x00AE9F54.


extern uint32_t mem_00AE9F58;
extern uint32_t mem_00AE9F54;
extern void __thiscall ext_0067A670(void* self);

void* __cdecl fn_004F9430() {
    if ((mem_00AE9F58 & 1u) == 0u) {
        mem_00AE9F58 |= 1u;
        ext_0067A670(&mem_00AE9F54);
        mem_00AE9F54 = 0x0094DA5Cu;
    }
    return &mem_00AE9F54;
}
} // namespace lift_004F9430

// [0x004F9310]
namespace lift_004F9310 {
// @name getStaticSingleton_004F9310
// @summary Lazily initializes and returns the static singleton object at 0x00AE9F3C.


extern uint32_t mem_00AE9F40;
extern uint32_t mem_00AE9F3C;

extern void __thiscall ext_0067A670(void* self);

void* fn_004F9310() {
    if ((mem_00AE9F40 & 1u) == 0) {
        mem_00AE9F40 |= 1u;
        ext_0067A670(&mem_00AE9F3C);
        mem_00AE9F3C = 0x0094D54Cu;
    }
    return &mem_00AE9F3C;
}
} // namespace lift_004F9310

// [0x004FF940]
namespace lift_004FF940 {
// @name getStaticSingleton_004FF940
// @summary Lazily initializes and returns the static singleton object at 0x00AEB274.


extern uint32_t mem_00AEB278;
extern uint32_t mem_00AEB274;

extern void __thiscall ext_0067A670(void* self);

void* fn_004FF940() {
    if ((mem_00AEB278 & 1u) == 0) {
        mem_00AEB278 |= 1u;
        ext_0067A670(&mem_00AEB274);
        mem_00AEB274 = 0x0094E29Cu;
    }
    return &mem_00AEB274;
}
} // namespace lift_004FF940

// [0x004F9490]
namespace lift_004F9490 {
extern uint32_t mem_00AE9F60;
extern uint32_t mem_00AE9F5C;
extern uint32_t mem_0094DC0C;
extern void ext_0067A670(void* self);

// @name getOrInitSingleton_004F9490
// @summary Lazily initializes the global object at 0x00AE9F5C once and returns its address.
void* fn_004F9490() {
    if ((static_cast<uint8_t>(mem_00AE9F60) & 1u) == 0u) {
        mem_00AE9F60 |= 1u;
        ext_0067A670(&mem_00AE9F5C);
        mem_00AE9F5C = reinterpret_cast<uintptr_t>(&mem_0094DC0C);
    }
    return &mem_00AE9F5C;
}
} // namespace lift_004F9490

// [0x004FF9A0]
namespace lift_004FF9A0 {
extern void ext_0067A670(void* self);
extern DWORD mem_00AEB280;
extern DWORD mem_00AEB27C;

// @name getSingleton_004FF9A0
// @summary Lazily initializes and returns the singleton object at 0x00AEB27C.
void* fn_004FF9A0() {
    if ((mem_00AEB280 & 1) == 0) {
        mem_00AEB280 |= 1;
        ext_0067A670(&mem_00AEB27C);
        mem_00AEB27C = 0x0094E374;
    }
    return &mem_00AEB27C;
}
} // namespace lift_004FF9A0

// [0x004FF8E0]
namespace lift_004FF8E0 {
// @name getSingleton_004FF8E0
// @summary Lazily initializes and returns the singleton object at 0x00AEB26C.

extern void* mem_00AEB270;
extern void* mem_00AEB26C;
extern void __thiscall ext_0067A670(void* self);

void* fn_004FF8E0() {
    auto* guard = reinterpret_cast<uint32_t*>(mem_00AEB270);
    if ((*guard & 1) == 0) {
        *guard |= 1;
        ext_0067A670(mem_00AEB26C);
        *reinterpret_cast<uint32_t*>(mem_00AEB26C) = 0x0094E1C4;
    }
    return mem_00AEB26C;
}
} // namespace lift_004FF8E0

// [0x004F95B0] sub_004F95B0 (30 bytes)
namespace lift_004F95B0 {
// Known callee 0x004F93D0: getStaticObject_004F93D0 (Lazily initializes and returns a pointer to static object mem_00AE9F4C)
extern void* ext_004F93D0();

// @name storeValueAndStaticObject
// @summary Writes `value` into out[0] and the lazily-initialized static object pointer into out[1].
void fn_004F95B0(uint32_t* out, uint32_t value) {
    void* obj = ext_004F93D0();
    out[0] = value;
    out[1] = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(obj));
}
} // namespace lift_004F95B0

// [0x004F95D0] sub_004F95D0 (30 bytes)
namespace lift_004F95D0 {
// Known callee 0x004F9430: getSingleton_004F9430 (Lazily initializes and returns the singleton object at 0x00AE9F54.)
extern void* ext_004F9430();

// @name storeValueAndSingleton
// @summary Writes a 32-bit value into out[0] and the lazily-created singleton pointer into out[1].
void fn_004F95D0(void* out, uint32_t value) {
    uint32_t singleton = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(ext_004F9430()));
    lift_field<uint32_t>(out, 0) = value;
    lift_field<uint32_t>(out, 4) = singleton;
}
} // namespace lift_004F95D0

// [0x004F9570] sub_004F9570 (30 bytes)
namespace lift_004F9570 {
// Known callee 0x004F9310: getStaticSingleton_004F9310 (Lazily initializes and returns the static singleton object at 0x00AE9F3C.)
extern void* ext_004F9310();

// @name pairWithStaticSingleton
// @summary Stores value in dst[0] and the lazily-initialized static singleton in dst[1]; returns dst.
void* fn_004F9570(void** dst, void* value) {
    void* singleton = ext_004F9310();
    dst[0] = value;
    dst[1] = singleton;
    return dst;
}
} // namespace lift_004F9570

// [0x004F9590] sub_004F9590 (30 bytes)
namespace lift_004F9590 {
// Known callee 0x004F9370: getStaticObject_004F9370 (Lazily initializes and returns the static object at 0x00AE9F44.)
extern void* ext_004F9370();

// @name storePairWithStaticObject
// @summary Writes value into out[0] and the lazily-initialized static object pointer into out[1].
void fn_004F9590(DWORD* out, DWORD value) {
    void* obj = ext_004F9370();
    out[0] = value;
    out[1] = static_cast<DWORD>(reinterpret_cast<uintptr_t>(obj));
}
} // namespace lift_004F9590

// [0x004F9550] sub_004F9550 (30 bytes)
namespace lift_004F9550 {
// Known callee 0x004F92B0: getStaticSingleton_004F92B0 (Lazily initializes a static object at 0x00AE9F34 guarded by 0x00AE9F38 and returns its address.)
extern void* ext_004F92B0();

// @name storeValueAndStaticSingleton
// @summary Stores the given value in out[0] and the address of the lazily-initialized static singleton in out[1].
// Note: no class context; out is treated as a raw two-word record, so no @class or @field lines are emitted.
void fn_004F9550(uint32_t* out, uint32_t value) {
    void* singleton = ext_004F92B0();
    out[0] = value;
    out[1] = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(singleton));
}
} // namespace lift_004F9550

// [0x004F95F0] sub_004F95F0 (30 bytes)
namespace lift_004F95F0 {
// Known callee 0x004F9490: getOrInitSingleton_004F9490 (Lazily initializes the global object at 0x00AE9F5C once and returns its address.)
// The original code pushes a single 0 argument before the call, so the callee is declared with one DWORD parameter.
extern void* ext_004F9490(DWORD arg);

// @name storeValueAndInitSingleton
// @summary Writes value into out[0] and the lazily-initialized singleton address (via ext_004F9490) into out[1].
// Note: no class context; out is treated as a raw two-word record, so no @class or @field lines are emitted.
void fn_004F95F0(DWORD* out, DWORD value) {
    void* singleton = ext_004F9490(0);
    out[0] = value;
    out[1] = static_cast<DWORD>(reinterpret_cast<uintptr_t>(singleton));
}
} // namespace lift_004F95F0

// [0x004FFA00] sub_004FFA00 (87 bytes)
namespace lift_004FFA00 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (Calls ext_00672000 on self (thiscall, ECX = self), then stores the single stack argument into the first DWORD of self; returns that value.)
extern DWORD ext_0067A670(void* self, DWORD value);
extern DWORD mem_00AEB288;
extern DWORD mem_00AEB284;

// @name ensureStaticSingletonInitialized_004FFA00
// @summary One-time initializer for the global singleton at 0x00AEB284; sets its first DWORD to vtable 0x0094E44C and returns its address.
void* fn_004FFA00() {
    // The original wraps this in an SEH frame (fs:[0] push/pop) for MSVC
    // thread-safe static init; that scaffolding is dropped here.
    constexpr DWORD kInitBit = 0x1;
    constexpr DWORD kVtable = 0x0094E44C;

    if ((mem_00AEB288 & kInitBit) == 0) {
        mem_00AEB288 |= kInitBit;
        ext_0067A670(&mem_00AEB284, 0);
        mem_00AEB284 = kVtable;
    }
    return &mem_00AEB284;
}
} // namespace lift_004FFA00

// [0x004F9190] sub_004F9190 (87 bytes)
namespace lift_004F9190 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (Calls ext_00672000 on self (thiscall, ECX = self), then stores the single stack argument into the first DWORD of self; returns that value.)
extern DWORD ext_0067A670(void* self, DWORD value);
extern int mem_00AE9F20;
extern int mem_00AE9F1C;

// @name initAndGetStaticSingleton_004F9190
// @summary Guarded one-time initializer: on first call sets guard bit 0 of mem_00AE9F20, runs the 0x0067A670 helper on the object at mem_00AE9F1C, writes its vtable-like value 0x94CE8C, and returns the object's address.
void* fn_004F9190() {
    // The original wraps this in an x86 SEH frame (fs:[0] push/restore with a
    // cleanup handler at 0x008904EE). That exception-frame plumbing is not
    // reproduced here; only the guard and initialization logic are kept.
    if (mem_00AE9F20 & 1) {
        return &mem_00AE9F1C;
    }
    mem_00AE9F20 |= 1;
    ext_0067A670(&mem_00AE9F1C, 0);
    mem_00AE9F1C = 0x0094CE8C;
    return &mem_00AE9F1C;
}
} // namespace lift_004F9190

// [0x004FFA60] sub_004FFA60 (87 bytes)
namespace lift_004FFA60 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (Calls ext_00672000 on self (thiscall, ECX = self), then stores the single stack argument into the first DWORD of self; returns that value.)
extern DWORD ext_0067A670(void* self, DWORD value);
extern DWORD mem_00AEB290;
extern DWORD mem_00AEB28C;

// @name getStaticSingletonAddress_004FFA60
// @summary Lazily initializes the static singleton at 0x00AEB28C (guarded by bit 0 of 0x00AEB290) and returns its address.
void* fn_004FFA60() {
    if ((mem_00AEB290 & 1u) == 0) {
        mem_00AEB290 |= 1u;
        // The original passes the saved previous SEH frame as the stack argument; its
        // value is discarded because the first DWORD is overwritten below.
        ext_0067A670(&mem_00AEB28C, 0);
        mem_00AEB28C = 0x0094E524u;
    }
    return &mem_00AEB28C;
}
} // namespace lift_004FFA60

// [0x004FFB20] sub_004FFB20 (87 bytes)
namespace lift_004FFB20 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (Calls ext_00672000 on self (thiscall, ECX = self), then stores the single stack argument into the first DWORD of self; returns that value.)
extern void ext_0067A670();
extern DWORD mem_00AEB2A0;
extern DWORD mem_00AEB29C;

// @name getOrInitStaticSingleton_004FFB20
// @summary Returns the address of the global singleton at 0x00AEB29C, initializing it once (guarded by bit 0 of 0x00AEB2A0).
void* fn_004FFB20() {
    // One-time initialization guard: bit 0 of the flag DWORD marks "initialized".
    if ((mem_00AEB2A0 & 1u) == 0) {
        mem_00AEB2A0 |= 1u;
        // Object constructor step: 0x0067A670 writes 0 into the object's first DWORD.
        ext_0067A670();
        // Then the first DWORD is set to the vtable/tag value 0x0094E6D4.
        mem_00AEB29C = 0x0094E6D4u;
    }
    return &mem_00AEB29C;
}
} // namespace lift_004FFB20

// [0x004FFB80] sub_004FFB80 (87 bytes)
namespace lift_004FFB80 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (Calls ext_00672000 on self (thiscall, ECX = self), then stores the single stack argument into the first DWORD of self; returns that value.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);
extern DWORD mem_00AEB2A8;
extern DWORD mem_00AEB2A4;

// @name initStaticSingletonOnce_004FFB80
// @summary Lazily initializes the static object at mem_00AEB2A4 once (guarded by bit 0 of mem_00AEB2A8) and returns its address.
void* fn_004FFB80() {
    if ((mem_00AEB2A8 & 1u) == 0) {
        mem_00AEB2A8 |= 1u;
        ext_0067A670(reinterpret_cast<void*>(&mem_00AEB2A4), 0u);
        mem_00AEB2A4 = 0x0094E7ACu;
    }
    return reinterpret_cast<void*>(&mem_00AEB2A4);
}
} // namespace lift_004FFB80

// [0x004FFAC0] sub_004FFAC0 (87 bytes)
namespace lift_004FFAC0 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (calls ext_00672000 on self (thiscall, ECX = self), then stores the single stack argument into the first DWORD of self; returns that value.)
extern DWORD ext_0067A670(void* self, DWORD value);
extern int mem_00AEB298;
extern int mem_00AEB294;

// @name getStaticSingleton_004FFAC0
// @summary One-time guarded initializer for the static object at 0x00AEB294; returns its address.
// @field field_0x00 +0x00 DWORD field_0x00
void* fn_004FFAC0() {
    // Bit 0 of mem_00AEB298 guards one-time initialization.
    if ((mem_00AEB298 & 1) == 0) {
        mem_00AEB298 |= 1;
        ext_0067A670(reinterpret_cast<void*>(&mem_00AEB294), 0);
        *reinterpret_cast<DWORD*>(&mem_00AEB294) = 0x0094E5FC;
    }
    return reinterpret_cast<void*>(&mem_00AEB294);
}
} // namespace lift_004FFAC0

// [0x004FFBE0] sub_004FFBE0 (87 bytes)
namespace lift_004FFBE0 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (Calls ext_00672000 on self (thiscall, ECX = self), then stores the single stack argument into the first DWORD of self; returns that value.)
extern DWORD ext_0067A670(void* self, DWORD value);
extern DWORD mem_00AEB2B0;
extern DWORD mem_00AEB2AC;

// @name initStaticSingletonWithVtable_004FFBE0
// @summary One-time guarded initialization of the static object at 0x00AEB2AC; returns its address.
// @field StaticObject +0x00 DWORD field_0x00
void* fn_004FFBE0() {
    // Guard bit 0 of mem_00AEB2B0: construct the static object only once.
    if ((mem_00AEB2B0 & 1u) == 0) {
        mem_00AEB2B0 |= 1u;
        ext_0067A670(&mem_00AEB2AC, 0);
        mem_00AEB2AC = 0x0094E884u;
    }
    return &mem_00AEB2AC;
}
} // namespace lift_004FFBE0

// [0x004F94F0] sub_004F94F0 (30 bytes)
namespace lift_004F94F0 {
// Known callee 0x004F9190: initAndGetStaticSingleton_004F9190 (Guarded one-time initializer: on first call sets guard bit 0 of mem_00AE9F20, runs the 0x0067A670 helper on the object at mem_00AE9F1C, writes its vtable-like value 0x94CE8C, and returns the object's address.)
extern void* ext_004F9190(uint32_t flag);

// @name storePairWithStaticSingleton
// @summary Writes value to pair[0] and the address of the guarded static singleton (from ext_004F9190(0)) to pair[1].
// @field Unknown +0x00 uint32_t field_0x00
// @field Unknown +0x04 uint32_t field_0x04
void fn_004F94F0(uint32_t* pair, uint32_t value) {
    const uint32_t singleton = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(ext_004F9190(0)));
    pair[0] = value;
    pair[1] = singleton;
}
} // namespace lift_004F94F0

// [0x004FFC40] sub_004FFC40 (87 bytes)
namespace lift_004FFC40 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack argument; stores the argument into the first DWORD of self and returns it).
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);
extern int mem_00AEB2B8;  // init guard; bit 0 = initialized/initializing
extern int mem_00AEB2B4;  // static object storage (first DWORD = vtable pointer)

// @name getOrInitStaticVtableObject_004FFC40
// @summary Lazily initializes the static object at mem_00AEB2B4 (guard bit 0 in mem_00AEB2B8), then returns its address.
// The original wraps the body in an MSVC SEH frame (fs:[0] push/pop); that frame is runtime
// bookkeeping with no portable equivalent and is omitted here.
void* fn_004FFC40() {
    if ((mem_00AEB2B8 & 1) == 0) {
        // Mark as initializing before running the constructor so re-entry sees it as done.
        mem_00AEB2B8 |= 1;
        ext_0067A670(&mem_00AEB2B4, 0);
        mem_00AEB2B4 = 0x0094E95C;  // vtable pointer
    }
    return &mem_00AEB2B4;
}
} // namespace lift_004FFC40

// [0x004FFD00] sub_004FFD00 (87 bytes)
namespace lift_004FFD00 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (Calls ext_00672000 on self (thiscall, ECX = self), then stores the single stack argument into the first DWORD of self; returns that value.)
extern DWORD ext_0067A670(void* self, DWORD value);
extern int mem_00AEB2C8;
extern int mem_00AEB2C4;

// @name initStaticObjectWithVtable_004FFD00
// @summary One-time guarded init of global object at 0x00AEB2C4: runs ctor 0x0067A670 then sets vtable 0x0094EB0C; returns the object's address.
// @field Unknown_AEB2C4 +0x00 DWORD field_0x00
void* fn_004FFD00(void* /*unused*/) {
    void* obj = &mem_00AEB2C4;

    // Init guard: bit 0 of the flag DWORD at 0x00AEB2C8 marks "already initialized".
    if ((lift_field<BYTE>(&mem_00AEB2C8, 0) & 1) == 0) {
        lift_field<DWORD>(&mem_00AEB2C8, 0) |= 1;
        ext_0067A670(obj, 0);
        lift_field<DWORD>(obj, 0) = 0x0094EB0C;
    }

    return obj;
}
} // namespace lift_004FFD00

// [0x004FFCA0] sub_004FFCA0 (87 bytes)
namespace lift_004FFCA0 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (Calls ext_00672000 on self (thiscall, ECX = self), then stores the single stack argument into the first DWORD of self; returns that value.)
extern void ext_0067A670();
extern DWORD mem_00AEB2C0; // guard word; bit 0 = initialized/initializing
extern DWORD mem_00AEB2BC; // static object storage; first DWORD is its vtable pointer

// @name getOrInitStaticSingletonWithVtable_004FFCA0
// @summary Returns the address of a static singleton, constructing it once (guarded by bit 0 of mem_00AEB2C0) and then writing its vtable pointer 0x0094EA34.
// @field StaticObject_00AEB2BC +0x00 DWORD field_0x00
void* fn_004FFCA0() {
    // The fs:[0] SEH frame setup/teardown is compiler EH bookkeeping and is not
    // needed for the portable form; only the guarded init and return remain.
    if ((mem_00AEB2C0 & 1u) == 0) {
        mem_00AEB2C0 |= 1u;
        ext_0067A670();                 // construct/initialize object at &mem_00AEB2BC
        mem_00AEB2BC = 0x0094EA34u;     // install vtable pointer
    }
    return &mem_00AEB2BC;
}
} // namespace lift_004FFCA0

// [0x004FDCA0]
namespace lift_004FDCA0 {
// @name InitOnceGlobalString_004FDCA0
// @summary One-time initializer for global string mem_00AEB22C; registers a cleanup callback on first call and returns its address.

extern void* ext_0066AD10(void* out_str, uint8_t flag);
extern int ext_006A6C87(void* fn);
extern uint32_t mem_00AEB248;
extern uint8_t mem_00AEB22C[];

void* fn_004FDCA0() {
    // Guard bit 0 of mem_00AEB248: run initialization only once.
    if ((mem_00AEB248 & 1u) == 0u) {
        mem_00AEB248 |= 1u;
        // Original pushes 0x00A40484 as the second argument; passed through as its low byte (uint8_t flag).
        ext_0066AD10(static_cast<void*>(mem_00AEB22C), static_cast<uint8_t>(0x00A40484u));
        ext_006A6C87(reinterpret_cast<void*>(static_cast<uintptr_t>(0x00919C80u)));
    }
    return static_cast<void*>(mem_00AEB22C);
}
} // namespace lift_004FDCA0

// [0x004FDD00] sub_004FDD00 (95 bytes)
namespace lift_004FDD00 {
// Known callee 0x0066AD10: sub_0066AD10 (Auto-lifted identical-shape clone of 0x00497860 (forwardMakeBoolString).)
extern void* ext_0066AD10(void* out_str, uint8_t flag);
// Known callee 0x006A6C87: sub_006A6C87 (18 bytes); takes one pointer argument (registration of 0x00919C90).
extern void ext_006A6C87(void* arg);
extern uint32_t mem_00AEB268;  // one-time-init guard dword; bit 0 = initialized
extern uint8_t mem_00AEB24C;   // function-local static object

// @name StaticInitOnce_004FDD00
// @summary One-time initializer for a function-local static; returns the address of the static object at 0x00AEB24C.
void* fn_004FDD00() {
    // Guard check: if bit 0 of the guard dword is already set, skip initialization.
    if ((mem_00AEB268 & 1u) == 0) {
        mem_00AEB268 |= 1u;
        // Original pushes: 0x00A353F8 then 0x00AEB24C; cdecl args are (&obj, 0x00A353F8).
        // Only the low byte reaches the callee's uint8_t parameter.
        ext_0066AD10(&mem_00AEB24C, static_cast<uint8_t>(0xA353F8u));
        // Original pushes 0x00919C90 and calls 0x006A6C87 (registers a teardown with that address).
        ext_006A6C87(reinterpret_cast<void*>(static_cast<uintptr_t>(0x00919C90u)));
    }
    return &mem_00AEB24C;
}
} // namespace lift_004FDD00

// [0x004F0A90] sub_004F0A90 (102 bytes)
namespace lift_004F0A90 {
// Known callee 0x00661980: setVtable_0093BFB4 (Stores the vtable address 0x0093BFB4 into the first dword of the object pointed to by ECX (this).)
extern void ext_00661980(void* self);

// @name Unknown::ctor_004F0A90
// @class Unknown
// @summary Constructor: sets own vtable, constructs embedded subobject at +0x4 (its own vtable), stores stack arg at +0x8, zeroes +0x10..+0x28 slots, returns this.
// @field Unknown +0x00 uint32_t vtable
// @field Unknown +0x04 uint32_t subobjectVtable
// @field Unknown +0x08 uint32_t arg
// @field Unknown +0x10 uint32_t field_0x10
// @field Unknown +0x14 uint32_t field_0x14
// @field Unknown +0x18 uint32_t field_0x18
// @field Unknown +0x20 uint32_t field_0x20
// @field Unknown +0x24 uint32_t field_0x24
// @field Unknown +0x28 uint32_t field_0x28
//
// The original SEH frame push/pop (fs:[0] chain, -1 state) is omitted: it only
// affects exception unwinding and has no effect on the observable result.
// Stack-argument convention: the caller pushes one dword (ret 4).
void* fn_004F0A90(void* self, uint32_t arg) {
    uint8_t* const obj = static_cast<uint8_t*>(self);

    // Provisional vtable for the base while the subobject is constructed.
    lift_field<uint32_t>(obj, 0x00) = 0x009443BC;

    // Subobject at this+4 (ECX = edi) stores its own vtable into its first dword.
    ext_00661980(obj + 0x04);

    lift_field<uint32_t>(obj, 0x08) = arg;

    // Final vtables: base at +0, subobject at +4.
    lift_field<uint32_t>(obj, 0x00) = 0x0094C14C;
    lift_field<uint32_t>(obj, 0x04) = 0x0094C0F4;

    lift_field<uint32_t>(obj, 0x10) = 0;
    lift_field<uint32_t>(obj, 0x14) = 0;
    lift_field<uint32_t>(obj, 0x18) = 0;
    lift_field<uint32_t>(obj, 0x20) = 0;
    lift_field<uint32_t>(obj, 0x24) = 0;
    lift_field<uint32_t>(obj, 0x28) = 0;

    return obj;
}
} // namespace lift_004F0A90

// [0x004FDAA0]
namespace lift_004FDAA0 {
// @name sub_004FDAA0
// @summary Constructor-like initialization: copies a std::string at +0x00, queries vtable+0x70 on arg2->+0x04 if non-null, and stores results at +0x1C and +0x20
// @field Self +0x00 std::string name
// @field Self +0x1C uint32_t field_0x1C
// @field Self +0x20 uint32_t field_0x20


extern uint32_t mem_00924FE0;

using std_string_copy_ctor_t = uint32_t(__thiscall*)(void* self, uint32_t src);
using vfunc_70_t = uint32_t*(__thiscall*)(void* self, uint32_t* out, uint32_t arg2);

uint32_t __thiscall sub_004FDAA0(void* self, uint32_t arg1, uint32_t arg2) {
    uint8_t* base = static_cast<uint8_t*>(self);

    auto copy_ctor = reinterpret_cast<std_string_copy_ctor_t>(static_cast<uintptr_t>(mem_00924FE0));
    copy_ctor(base, arg1);

    uint32_t obj = *reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(arg2) + 0x4);
    uint32_t out_val = 0;
    uint32_t* val_ptr = &out_val;

    if (obj != 0) {
        void* obj_ptr = reinterpret_cast<void*>(static_cast<uintptr_t>(obj));
        uint32_t* vtable = *reinterpret_cast<uint32_t**>(obj_ptr);
        auto vfunc = reinterpret_cast<vfunc_70_t>(static_cast<uintptr_t>(vtable[0x70 / 4]));
        val_ptr = vfunc(obj_ptr, &out_val, arg2);
    }

    *reinterpret_cast<uint32_t*>(base + 0x1C) = *val_ptr;
    *reinterpret_cast<uint32_t*>(base + 0x20) = *reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(arg2) + 0x4);

    return static_cast<uint32_t>(reinterpret_cast<uintptr_t>(self));
}
} // namespace lift_004FDAA0

// [0x004FDE90]
namespace lift_004FDE90 {
extern void __fastcall ext_00665810(void* self);
extern const uint32_t mem_00924FF4;

// @name sub_004FDE90
// @summary Deletes the child object at +0x18 if non-null, then calls ext_00665810.
// @field Self +0x18 void* field_0x18
extern void __fastcall fn_004FDE90(void* self) {
    (void)mem_00924FF4;
    void* obj = *reinterpret_cast<void**>(reinterpret_cast<uintptr_t>(self) + 0x18);
    if (obj != nullptr) {
        void** vtable = *reinterpret_cast<void***>(obj);
        using DeletingDtor = void (__thiscall*)(void*, int);
        reinterpret_cast<DeletingDtor>(vtable[0])(obj, 1);
    }
    ext_00665810(self);
}
} // namespace lift_004FDE90

// [0x004F0FB0]
namespace lift_004F0FB0 {
// @name TreeMap::eraseSubtree
// @class TreeMap
// @summary Recursively erases a red-black tree node and its left/right subtrees, freeing associated value buffer and string key.
// @field TreeNode +0x00 void* left
// @field TreeNode +0x08 void* right
// @field TreeNode +0x0C std::string key
// @field TreeNode +0x2C void* value_ptr
// @field TreeNode +0x30 uint32_t field_0x30
// @field TreeNode +0x34 uint32_t field_0x34
// @field TreeNode +0x39 uint8_t is_nil


extern void ext_006A5C5C(void* ptr);
extern uintptr_t mem_00924FF4;

void __thiscall fn_004F0FB0(void* self, void* node) {
    uint8_t* cur = static_cast<uint8_t*>(node);
    if (lift_field<uint8_t>(cur, 0x39) != 0) {
        return;
    }

    do {
        void* right = lift_field<void*>(cur, 0x08);
        fn_004F0FB0(self, right);

        uint8_t* next = lift_field<uint8_t*>(cur, 0x00);
        uint8_t* key_ptr = cur + 0x0C;

        void* val_ptr = lift_field<void*>(cur, 0x2C);
        if (val_ptr != nullptr) {
            ext_006A5C5C(val_ptr);
        }

        lift_field<uint32_t>(key_ptr, 0x20) = 0;
        lift_field<uint32_t>(key_ptr, 0x24) = 0;
        lift_field<uint32_t>(key_ptr, 0x28) = 0;

        using DtorFn = void(__thiscall*)(void*);
        reinterpret_cast<DtorFn>(mem_00924FF4)(key_ptr);

        ext_006A5C5C(cur);
        cur = next;
    } while (lift_field<uint8_t>(cur, 0x39) == 0);
}
} // namespace lift_004F0FB0

// [0x004FDE10] sub_004FDE10 (127 bytes)
namespace lift_004FDE10 {
// Known callee 0x006657F0: Unknown::InitVtblAndArg (Stores the vtable pointer (0x00987A04), a stack argument at +0x04, and zeroes +0x08/+0x0C; returns self.)
extern void* ext_006657F0(void* self, uint32_t arg);
// IAT slot holding the std::string copy-constructor thunk (MSVCP80).
extern int mem_00924FE0;

// @name Unknown::InitFromArgs
// @class Unknown
// @summary Four-argument initializer: runs base init, stores vtable and two args, then copy-constructs two std::string members (one from a virtual call on a3, one from a4).
// @field Unknown +0x00 uint32_t vtbl
// @field Unknown +0x08 uint32_t field_0x08
// @field Unknown +0x10 uint32_t field_0x10
// @field Unknown +0x14 uint32_t field_0x14
// @field Unknown +0x18 std::string field_0x18
// @field Unknown +0x34 std::string field_0x34
void* fn_004FDE10(void* self, uint32_t a1, uint32_t a2, uint32_t a3, uint32_t a4) {
    // Base-class initialization (ecx = self, stack arg 0).
    ext_006657F0(self, 0);

    lift_field<uint32_t>(self, 0x10) = a1;
    lift_field<uint32_t>(self, 0x00) = 0x0094EC8C; // vtable
    lift_field<uint32_t>(self, 0x14) = a3;

    // Virtual call slot 9 (offset 0x24) on a3; its result is the source string for +0x18.
    void* obj = reinterpret_cast<void*>(static_cast<uintptr_t>(a3));
    void** vtbl = *reinterpret_cast<void***>(obj);
    auto vfn = reinterpret_cast<void* (*)(void*)>(vtbl[9]);
    const void* src1 = vfn(obj);

    // std::string copy-construct through the IAT slot.
    using CopyCtor = void (*)(void* dst, const void* src);
    CopyCtor copy_ctor = *reinterpret_cast<CopyCtor*>(&mem_00924FE0);
    copy_ctor(static_cast<uint8_t*>(self) + 0x18, src1);
    copy_ctor(static_cast<uint8_t*>(self) + 0x34,
              reinterpret_cast<const void*>(static_cast<uintptr_t>(a4)));

    lift_field<uint32_t>(self, 0x08) = a2;
    return self;
}
} // namespace lift_004FDE10

// [0x004FDB40] sub_004FDB40 (129 bytes)
namespace lift_004FDB40 {
extern int mem_00924FDC;

// @name FillElementRangeWithValue
// @summary Assigns value into each 36-byte element in [first, last): string assign via import, then rebinds the 0x1c/0x20 handle slots.
// @field ElementRecord36 +0x1c void* field_0x1c
// @field ElementRecord36 +0x20 void* field_0x20
void fn_004FDB40(void* first, void* last, const void* value) {
    auto* const src = static_cast<unsigned char*>(const_cast<void*>(value));
    auto* const end = static_cast<unsigned char*>(last);

    using StringAssignFn = void* (__thiscall*)(void* self, const void* rhs);
    using VirtualReleaseFn = void (__thiscall*)(void* self, void* slot);
    using VirtualGetFn = void* (__thiscall*)(void* self, void** out, const void* in);

    for (auto* p = static_cast<unsigned char*>(first); p != end; p += 0x24) {
        // Import thunk (MSVCP80 basic_string::operator=): element string = *value.
        reinterpret_cast<StringAssignFn>(static_cast<uintptr_t>(mem_00924FDC))(p, src);

        // Skip the handle rebind when the destination is the source value itself.
        if (p + 0x1c == src + 0x1c)
            continue;

        // Release the old 0x20 object via vtable slot 30 (0x78), passing &p->field_0x1c.
        void* old20 = lift_field<void*>(p, 0x20);
        if (old20 != nullptr) {
            void** vt = *static_cast<void***>(old20);
            reinterpret_cast<VirtualReleaseFn>(vt[30])(old20, &lift_field<void*>(p, 0x1c));
        }

        // Copy the 0x20 pointer from the source element.
        void* src20 = lift_field<void*>(src, 0x20);
        lift_field<void*>(p, 0x20) = src20;

        // New 0x1c value: query src20 via vtable slot 28 (0x70) into a temp, then load it.
        void* newVal = nullptr;
        if (src20 != nullptr) {
            void** vt = *static_cast<void***>(src20);
            void* tmp = nullptr;
            void* ret = reinterpret_cast<VirtualGetFn>(vt[28])(src20, &tmp, src + 0x1c);
            newVal = *static_cast<void**>(ret);
        }
        lift_field<void*>(p, 0x1c) = newVal;
    }
}
} // namespace lift_004FDB40

// [0x004F0430]
namespace lift_004F0430 {
// Known callee 0x004EFDF0: StringPairList::clear (clears all nodes of a doubly-linked string-pair list and resets size to zero).
extern void ext_004EFDF0(void* self);
// Known callee 0x006A5C5C: thunk_MFC80_ord_764 (IAT jump thunk forwarding to MFC80!ord_764; releases a heap block).
extern void ext_006A5C5C(void* p);

// @name Unknown::clearStringPairsAndRelease
// @summary Clears the embedded StringPairList at +0x18, releases its head block at +0x1C, releases the block at +0x0C if set, and zeroes the +0x0C/+0x10/+0x14 slots.
// @field Unknown +0x0C uint32_t field_0x0C
// @field Unknown +0x10 uint32_t field_0x10
// @field Unknown +0x14 uint32_t field_0x14
// @field Unknown +0x18 StringPairList stringPairs
// @field Unknown +0x1C uint32_t stringPairsHead
void fn_004F0430(void* self) {
    // Clear the embedded StringPairList at this+0x18.
    ext_004EFDF0(static_cast<uint8_t*>(self) + 0x18);

    // Release the list's head block at this+0x1C and clear the slot.
    uint32_t& head = lift_field<uint32_t>(self, 0x1C);
    ext_006A5C5C(reinterpret_cast<void*>(static_cast<uintptr_t>(head)));
    head = 0;

    // Release the block at this+0x0C if present, then clear the slots.
    uint32_t& p0c = lift_field<uint32_t>(self, 0x0C);
    if (p0c != 0) {
        ext_006A5C5C(reinterpret_cast<void*>(static_cast<uintptr_t>(p0c)));
    }
    lift_field<uint32_t>(self, 0x0C) = 0;
    lift_field<uint32_t>(self, 0x10) = 0;
    lift_field<uint32_t>(self, 0x14) = 0;
}
} // namespace lift_004F0430

// [0x004F0250] sub_004F0250 (78 bytes)
namespace lift_004F0250 {
// Known callee 0x00596660: eraseInt32Range (Validates (self-pointer) args, erases [first,last) from a 4-byte-element buffer by shifting the tail down, sets end, and writes a 2-pointer result to out.)
extern void ext_00596660(void* self, void** out, void* a2, int32_t* first, void* a4, int32_t* last);
// Known callee 0x004EFDF0: StringPairList::clear (Clears all nodes in a doubly-linked list of string pairs and resets size to zero.)
extern void ext_004EFDF0(void* self);
// Data slot at 0x00925134 holding the invalid-parameter handler pointer (MSVCR80!_invalid_parameter_noinfo).
extern uint32_t mem_00925134;

// @name clearStringPairsAndEraseInt32Range
// @summary Clears the StringPairList at +0x18, zeroes two counters, then erases the [first,last) int32 range of the sub-object at +0x08 (with validity checks).
// @field Unknown +0x0C uint32_t rangeFirst
// @field Unknown +0x10 uint32_t rangeLast
// @field Unknown +0x18 StringPairList pairs
// @field Unknown +0x24 uint32_t field_0x24
// @field Unknown +0x28 uint32_t field_0x28
void fn_004F0250(void* self) {
    uint8_t* const base = static_cast<uint8_t*>(self);

    // mov dword ptr [esi+0x28], 0 ; mov dword ptr [esi+0x24], 0
    lift_field<uint32_t>(base, 0x28) = 0;
    lift_field<uint32_t>(base, 0x24) = 0;

    // lea ecx,[esi+0x18] ; call ext_004EFDF0   (StringPairList::clear)
    ext_004EFDF0(base + 0x18);

    // mov edi,[esi+0x10]  -> last end pointer
    const uint32_t last = lift_field<uint32_t>(base, 0x10);

    // mov ebp,[0x925134]  -> invalid-parameter handler
    auto invalid_parameter = reinterpret_cast<void (*)()>(static_cast<uintptr_t>(mem_00925134));

    // esi = self + 8 : sub-object whose range is [ [esi+4], [esi+8] )
    uint8_t* const vec = base + 0x08;

    // cmp [esi+4], edi ; jbe ok ; call ebp
    if (lift_field<uint32_t>(vec, 0x4) > last) {
        invalid_parameter();
    }

    // mov ebx,[esi+4]  -> first
    const uint32_t first = lift_field<uint32_t>(vec, 0x4);

    // cmp ebx,[esi+8] ; jbe ok ; call ebp
    if (first > lift_field<uint32_t>(vec, 0x8)) {
        invalid_parameter();
    }

    // push edi / esi / ebx / esi ; lea eax,[esp+0x20] ; push eax ; mov ecx,esi ; call ext_00596660
    // 2-pointer result scratch lives in the 8-byte frame reserved by the original `sub esp,8`.
    void* result[2] = {nullptr, nullptr};
    ext_00596660(vec,
                 result,
                 vec,
                 reinterpret_cast<int32_t*>(static_cast<uintptr_t>(first)),
                 vec,
                 reinterpret_cast<int32_t*>(static_cast<uintptr_t>(last)));
}
} // namespace lift_004F0250

// [0x004FDBD0] sub_004FDBD0 (137 bytes)
namespace lift_004FDBD0 {
// IAT slot (0x924FDC) holding MSVCP80 basic_string<char>::operator=(const basic_string&).
extern int mem_00924FDC;
extern void* __thiscall ext_MSVCP80_string_assign(void* self, const void* src);

static inline void* as_ptr(uint32_t addr) {
    return reinterpret_cast<void*>(static_cast<uintptr_t>(addr));
}

static inline uint32_t& u32_at(uint32_t base, uint32_t offset) {
    return *static_cast<uint32_t*>(as_ptr(base + offset));
}

// @name copy_backward_records_36B
// @summary Backward-copies the 36-byte records in [first, last) so they end at d_last (copy-assigning each string at +0x00, the u32 at +0x1C, and the pointer at +0x20 via its vtable); returns the new begin of the destination range.
// @field Unknown +0x00 std::string field_0x00
// @field Unknown +0x1C uint32_t field_0x1c
// @field Unknown +0x20 uint32_t field_0x20
void* __cdecl fn_004FDBD0(void* first, void* last, void* d_last) {
    const uint32_t lo = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(first));
    uint32_t src = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(last));
    uint32_t dst = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(d_last));

    if (src == lo) {
        return d_last;
    }

    do {
        src -= 0x24;
        dst -= 0x24;

        // Assign the record's string: dst.field_0x00 = src.field_0x00.
        // The original calls through the IAT slot mem_00924FDC; the thunk is ext_MSVCP80_string_assign.
        (void)&mem_00924FDC;
        ext_MSVCP80_string_assign(as_ptr(dst), as_ptr(src));

        // Self-assignment guard (dst == src means the +0x1C slots coincide).
        if (dst != src) {
            // Release the old pointer held at dst+0x20 via vtable slot 30 (0x78),
            // passing the address of dst+0x1C as the out-parameter.
            const uint32_t old_obj = u32_at(dst, 0x20);
            if (old_obj != 0) {
                void** vtbl = static_cast<void**>(*static_cast<void**>(as_ptr(old_obj)));
                using Slot30 = void(__thiscall*)(void*, void*);
                reinterpret_cast<Slot30>(vtbl[30])(as_ptr(old_obj), as_ptr(dst + 0x1C));
            }

            // Copy the pointer at src+0x20 into dst+0x20 (raw copy, no refcount).
            const uint32_t src_obj = u32_at(src, 0x20);
            u32_at(dst, 0x20) = src_obj;

            // Clone-style read via vtable slot 28 (0x70) on src_obj, then store the result at dst+0x1C.
            uint32_t value = 0;
            if (src_obj != 0) {
                void** vtbl = static_cast<void**>(*static_cast<void**>(as_ptr(src_obj)));
                using Slot28 = void*(__thiscall*)(void*, void*, void*);
                uint32_t tmp = 0;
                void* result = reinterpret_cast<Slot28>(vtbl[28])(
                    as_ptr(src_obj), &tmp, as_ptr(src + 0x1C));
                value = *static_cast<uint32_t*>(result);
            }
            u32_at(dst, 0x1C) = value;
        }
    } while (src != lo);

    return as_ptr(dst);
}
} // namespace lift_004FDBD0

// [0x004FFE90] sub_004FFE90 (93 bytes)
namespace lift_004FFE90 {
// Known callee 0x004FDBD0: copy_backward_records_36B (Backward-copies the 36-byte records in [first, last) so they end at d_last (copy-assigning each string at +0x00, the u32 at +0x1C, and the pointer at +0x20 via its vtable); returns the new begin of the destination range.)
extern void* ext_004FDBD0(void* first, void* last, void* d_last);

// @name backwardCopy36B_destBegin
// @summary Backward-copies 36-byte records [first, last) to end at dest, then returns dest minus the byte span of whole 36-byte records.
void* fn_004FFE90(void* first, void* last, void* dest) {
    const int32_t span = static_cast<int32_t>(
        static_cast<uint32_t>(reinterpret_cast<uintptr_t>(last) - reinterpret_cast<uintptr_t>(first)));
    const int32_t count = span / 36;

    (void)ext_004FDBD0(first, last, dest);

    return static_cast<uint8_t*>(dest) - static_cast<ptrdiff_t>(36) * count;
}
} // namespace lift_004FFE90

// [0x004F0340] sub_004F0340 (138 bytes)
namespace lift_004F0340 {
// Import slot holding MSVCR80!_invalid_parameter_noinfo (called with no arguments).
extern void(__cdecl* mem_00925134)(void);
// Element destructor-like callee, thiscall with one argument in ECX.
extern void __fastcall ext_00493D90(void* self);

// @name Unknown::eraseRange8 (descriptive; owner class not yet identified)
// @class Unknown
// @summary Erases the 8-byte-element range [first,last) from a vector-like container whose end pointer is at +0x08: moves the tail down onto first, destroys the now-stale trailing elements via ext_00493D90, updates end, and returns the pair {first-or-a2, first} through the hidden out pointer. Calls invalid_parameter when the first sentinel is null or differs from the second sentinel.
// @field Unknown +0x08 uint8_t* field_0x08
uint8_t** fn_004F0340(void* self, uint8_t** out, uint8_t* sentinelA, uint8_t* first,
                      uint8_t* sentinelB, uint8_t* last) {
    using InvalidParamFn = void (*)();

    if (sentinelA == nullptr || sentinelA != sentinelB) {
        auto invalidParam = reinterpret_cast<InvalidParamFn>(mem_00925134);
        invalidParam();
    }

    uint8_t** endSlot = reinterpret_cast<uint8_t**>(static_cast<uint8_t*>(self) + 0x08);
    uint8_t* end = *endSlot;

    if (first != last) {
        // Shift the tail [last, end) down so it starts at first, 8 bytes at a time.
        uint8_t* newEnd = first + (end - last);
        if (last != end) {
            for (uint8_t* src = last, *dst = first; src != end; src += 8, dst += 8) {
                std::memcpy(dst, src, 8);
            }
        }

        // Destroy the stale trailing elements [newEnd, end).
        for (uint8_t* p = newEnd; p != end; p += 8) {
            ext_00493D90(p);
        }

        *endSlot = newEnd;
        out[0] = first;
        out[1] = first;
        return out;
    }

    out[0] = sentinelA;
    out[1] = first;
    return out;
}
} // namespace lift_004F0340

// [0x004F06C0] sub_004F06C0 (59 bytes)
namespace lift_004F06C0 {
// Known callee 0x004F0340: Unknown::eraseRange8 (descriptive; owner class not yet identified) (Erases the 8-byte-element range [first,last) from a vector-like container whose end pointer is at +0x08: moves the tail down onto first, destroys the now-stale trailing elements via ext_00493D90, updates end, and returns the pair {first-or-a2, first} through the hidden out pointer. Calls invalid_parameter when the first sentinel is null or differs from the second sentinel.)
extern uint8_t** __thiscall ext_004F0340(void* self, uint8_t** out, uint8_t* sentinelA,
                                             uint8_t* first, uint8_t* sentinelB, uint8_t* last);

// IAT slot holding MSVCR80!_invalid_parameter_noinfo (loaded into ebp in the original).
extern uint32_t mem_00925134;

// @name Unknown::eraseFromBeginToEnd8
// @class Unknown
// @summary Validates that begin <= end on a vector-like container (fields +0x04/+0x08), then erases [begin, end) via ext_004F0340, using the container itself as both sentinels.
// @field Unknown +0x04 uint8_t* field_0x04
// @field Unknown +0x08 uint8_t* m_end
void fn_004F06C0(void* self) {
    using InvalidParamFn = void (*)();
    auto invalid_parameter = reinterpret_cast<InvalidParamFn>(static_cast<uintptr_t>(mem_00925134));

    // Both checks compare begin against end and call invalid_parameter if begin is above end.
    if (reinterpret_cast<uintptr_t>(lift_field<uint8_t*>(self, 0x04)) >
        reinterpret_cast<uintptr_t>(lift_field<uint8_t*>(self, 0x08))) {
        invalid_parameter();
    }
    if (reinterpret_cast<uintptr_t>(lift_field<uint8_t*>(self, 0x04)) >
        reinterpret_cast<uintptr_t>(lift_field<uint8_t*>(self, 0x08))) {
        invalid_parameter();
    }

    // Hidden out-pointer buffer (the two pointers the callee writes back).
    uint8_t* result[2] = {nullptr, nullptr};
    uint8_t* self_ptr = reinterpret_cast<uint8_t*>(self);
    ext_004F0340(self, result, self_ptr, lift_field<uint8_t*>(self, 0x04), self_ptr,
                 lift_field<uint8_t*>(self, 0x08));
}
} // namespace lift_004F06C0

// [0x004F02A0] sub_004F02A0 (29 bytes)
namespace lift_004F02A0 {
// Known callee 0x004EFDF0: StringPairList::clear (Clears all nodes in a doubly-linked list of string pairs and resets size to zero.)
extern void ext_004EFDF0(void* self);
// Known callee 0x006A5C5C: thunk_MFC80_ord_764 (IAT jump thunk forwarding to MFC80!ord_764.)
extern void ext_006A5C5C(DWORD arg);

// @name StringPairList::clearAndReleaseHandle
// @class StringPairList
// @summary Clears the string pair list, passes the value at +0x04 to MFC80 ord_764, then zeroes +0x04.
// @field StringPairList +0x04 DWORD field_0x04
void fn_004F02A0(void* self) {
    ext_004EFDF0(self);
    DWORD value = lift_field<DWORD>(self, 0x04);
    ext_006A5C5C(value);
    lift_field<DWORD>(self, 0x04) = 0;
}
} // namespace lift_004F02A0

// [0x004F04A0] sub_004F04A0 (103 bytes)
namespace lift_004F04A0 {
// Known callee 0x004EF8B0 (sub_004EF8B0): thiscall, this in ecx, returns eax.
extern uint32_t ext_004EF8B0(void* self);
// Known callee 0x004F0250: clearStringPairsAndEraseInt32Range (thiscall, this in ecx).
extern void ext_004F0250(void* self);

// @name StringPairContainer::StringPairContainer
// @class StringPairContainer
// @summary Constructor-style init: sets vtable, zeroes counters, constructs sub-object at +0x18, stores its result at +0x1C, then clears it via fn_004F0250. Returns this.
// @field StringPairContainer +0x00 uint32_t vftable_ptr
// @field StringPairContainer +0x04 uint32_t field_0x04
// @field StringPairContainer +0x0c uint32_t field_0x0c
// @field StringPairContainer +0x10 uint32_t field_0x10
// @field StringPairContainer +0x14 uint32_t field_0x14
// @field StringPairContainer +0x18 uint8_t field_0x18 (sub-object: StringPairList; first 4 bytes are the callee-initialized region)
// @field StringPairContainer +0x1c uint32_t field_0x1c
// @field StringPairContainer +0x20 uint32_t field_0x20
void* fn_004F04A0(void* self) {
    lift_field<uint32_t>(self, 0x00) = 0x0094C0C8u;
    lift_field<uint32_t>(self, 0x04) = 0;
    lift_field<uint32_t>(self, 0x0C) = 0;
    lift_field<uint32_t>(self, 0x10) = 0;
    lift_field<uint32_t>(self, 0x14) = 0;

    void* sub = static_cast<uint8_t*>(self) + 0x18;
    lift_field<uint32_t>(sub, 0x04) = ext_004EF8B0(sub);
    lift_field<uint32_t>(sub, 0x08) = 0;

    ext_004F0250(self);
    return self;
}
} // namespace lift_004F04A0

// [0x004F1430] sub_004F1430 (98 bytes)
namespace lift_004F1430 {
// Known callee 0x004F0430: Unknown::clearStringPairsAndRelease (Clears the embedded StringPairList at +0x18, releases its head block at +0x1C, releases the block at +0x0C if set, and zeroes the +0x0C/+0x10/+0x14 slots.)
extern void ext_004F0430(void* self);
// Known callee 0x006A5C5C: thunk_MFC80_ord_764 (IAT jump thunk forwarding to MFC80!ord_764; releases a heap block.)
extern void ext_006A5C5C(void* p);
// Data slot at 0x00925134 holding the invalid-parameter handler pointer (MSVCR80!_invalid_parameter_noinfo).
extern uint32_t mem_00925134;

// @name clearAndFreePointerRange
// @summary Walks the 4-byte pointer range [first,last) of a checked container: for each non-null element, clears it via sub_004F0430 and frees it via the MFC80 thunk, with container validity checks.
// @field Unknown +0x08 uint32_t field_0x08
void fn_004F1430(uint32_t container, uint32_t first, uint32_t expected, uint32_t last) {
    // Guest-address dereference helper (addresses are 32-bit values from the original image).
    auto deref = [](uint32_t addr) -> uint32_t& {
        return *reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(addr));
    };
    auto invalidParameter = reinterpret_cast<void (*)()>(static_cast<uintptr_t>(mem_00925134));

    uint32_t cur = first;
    for (;;) {
        // Container must be non-null and match the expected container.
        if (container == 0 || container != expected) {
            invalidParameter();
        }

        if (cur == last) {
            return;
        }

        const uint32_t elemAddr = cur;

        if (container == 0) {
            invalidParameter();
        }
        // cur must be below container's bound at +0x08.
        if (cur >= deref(container + 0x08)) {
            invalidParameter();
        }
        cur += 4;

        if (container == 0) {
            invalidParameter();
        }
        if (elemAddr >= deref(container + 0x08)) {
            invalidParameter();
        }

        const uint32_t obj = deref(elemAddr);
        if (obj == 0) {
            continue;
        }

        // Clear the object (this = obj), then release its block.
        ext_004F0430(reinterpret_cast<void*>(static_cast<uintptr_t>(obj)));
        ext_006A5C5C(reinterpret_cast<void*>(static_cast<uintptr_t>(obj)));
    }
}
} // namespace lift_004F1430

// [0x004F1BD0] sub_004F1BD0 (121 bytes)
namespace lift_004F1BD0 {
// Known callee 0x004F1430: clearAndFreePointerRange (Walks the 4-byte pointer range [first,last) of a checked container: for each non-null element, clears it via sub_004F0430 and frees it via the MFC80 thunk, with container validity checks.)
extern void ext_004F1430(uint32_t container, uint32_t first, uint32_t expected, uint32_t last);
// Known callee 0x006A5C5C: thunk_MFC80_ord_764 (IAT jump thunk forwarding to MFC80!ord_764.)
extern void ext_006A5C5C(uint32_t ptr);
// IAT slot for MSVCR80!_invalid_parameter_noinfo (0x925134)
extern int mem_00925134;

// @name SomeContainer::clearAndReset
// @class SomeContainer
// @summary Clears the pointer range [+0x04, +0x08) of the container via fn_004F1430, frees the element at +0x04 if non-null, then zeroes the three range/capacity fields.
// @field SomeContainer +0x04 uint32_t field_0x04
// @field SomeContainer +0x08 uint32_t field_0x08
// @field SomeContainer +0x0C uint32_t field_0x0C
void fn_004F1BD0(void* self) {
    const uint32_t container = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(self));

    uint32_t end = lift_field<uint32_t>(self, 0x08);
    if (lift_field<uint32_t>(self, 0x04) > end) {
        // Original: call MSVCR80!_invalid_parameter_noinfo via IAT (debug-check abort path).
        (void)&mem_00925134;
    }

    const uint32_t first = lift_field<uint32_t>(self, 0x04);
    if (first > lift_field<uint32_t>(self, 0x08)) {
        (void)&mem_00925134;
    }

    ext_004F1430(container, container, first, end);

    const uint32_t element = lift_field<uint32_t>(self, 0x04);
    if (element != 0) {
        ext_006A5C5C(element);
    }

    lift_field<uint32_t>(self, 0x04) = 0;
    lift_field<uint32_t>(self, 0x08) = 0;
    lift_field<uint32_t>(self, 0x0C) = 0;
}
} // namespace lift_004F1BD0

// [0x004F0B10] sub_004F0B10 (143 bytes)
namespace lift_004F0B10 {
// Known callee 0x004026E0: std_vector_string_Tidy (Destroys all std::string elements in a vector, frees the buffer, and resets pointers to null.)
extern void ext_004026E0(void* this_ptr);
// Known callee 0x0065F440: sub_0065F440 (Stores address of mem_0093BF24 into field at offset +0x0.)
extern void ext_0065F440(void* self);
// Known callee 0x006A5C5C: thunk_MFC80_ord_764 (IAT jump thunk forwarding to MFC80!ord_764.)
extern void ext_006A5C5C(void* arg);

// @name Unknown::ResetOwnedBuffers
// @class Unknown
// @summary Tidies the string vector at +0x1C, releases the pointer held at +0x10 (if any), zeroes +0x10..+0x18, then notifies the subobject at +0x04.
// @field Unknown +0x04 void field_0x04
// @field Unknown +0x10 DWORD field_0x10
// @field Unknown +0x14 DWORD field_0x14
// @field Unknown +0x18 DWORD field_0x18
// @field Unknown +0x1C std_vector_string field_0x1C
void fn_004F0B10(void* self) {
    uint8_t* base = static_cast<uint8_t*>(self);

    // Destroy the std::string vector embedded at +0x1C.
    ext_004026E0(base + 0x1C);

    // Release the owned handle at +0x10, if present.
    DWORD held = lift_field<DWORD>(self, 0x10);
    if (held != 0) {
        ext_006A5C5C(reinterpret_cast<void*>(static_cast<uintptr_t>(held)));
    }

    // Reset the three owned fields.
    lift_field<DWORD>(self, 0x10) = 0;
    lift_field<DWORD>(self, 0x14) = 0;
    lift_field<DWORD>(self, 0x18) = 0;

    // Notify the subobject at +0x04 (the null branch passes a null receiver).
    if (self != nullptr) {
        ext_0065F440(base + 0x04);
    } else {
        ext_0065F440(nullptr);
    }
}
} // namespace lift_004F0B10

// [0x004FDD70] sub_004FDD70 (146 bytes)
namespace lift_004FDD70 {
// Known callee 0x006657F0: Unknown::InitVtblAndArg (stdcall-style with one stack arg, thiscall self in ECX)
extern void* __thiscall ext_006657F0(void* self, uint32_t arg);
// Known callee 0x006A6E9E: thunk to MSVCR80!__RTDynamicCast(inptr, vfDelta, srcType, targetType, isReference)
extern void* __cdecl ext_006A6E9E(void* inptr, int32_t vfDelta, const void* srcType, const void* targetType, int32_t isReference);
// Data: vtable for Unknown (0x0094EC74), RTTI type descriptors (0x00A2F4F4 source, 0x00A40528 target)
extern int mem_0094EC74;
extern int mem_00A2F4F4;
extern int mem_00A40528;

// @name Unknown::initVtblAndDynCast
// @class Unknown
// @summary Sets the vtable, stores two stack args, performs RTTI dynamic_cast on the second arg, and falls back to storing it when the cast fails; returns this.
// @field Unknown +0x00 void* vtable
// @field Unknown +0x08 uint32_t field_0x08
// @field Unknown +0x10 uint32_t field_0x10
// @field Unknown +0x14 void* field_0x14
// @field Unknown +0x18 uint32_t field_0x18
// @field Unknown +0x1C uint32_t field_0x1C
// @field Unknown +0x20 uint32_t field_0x20
// @field Unknown +0x24 uint32_t field_0x24
// Original MSVC SEH frame setup/teardown (fs:[0] push/pop, try-level writes) is omitted as boilerplate.
void* fn_004FDD70(void* self, uint32_t a1, uint32_t a2, uint32_t a3, uint32_t a4) {
    ext_006657F0(self, 0);

    lift_field<void*>(self, 0x00) = static_cast<void*>(&mem_0094EC74);
    lift_field<uint32_t>(self, 0x10) = a1;

    void* castResult = ext_006A6E9E(
        reinterpret_cast<void*>(static_cast<uintptr_t>(a2)),
        0,
        static_cast<const void*>(&mem_00A2F4F4),
        static_cast<const void*>(&mem_00A40528),
        0);

    lift_field<void*>(self, 0x14) = castResult;
    lift_field<uint32_t>(self, 0x18) = 0;
    lift_field<uint32_t>(self, 0x1C) = a3;
    lift_field<uint32_t>(self, 0x20) = 0;
    lift_field<uint32_t>(self, 0x24) = a4;

    if (castResult == nullptr) {
        lift_field<uint32_t>(self, 0x08) = a2;
    }

    return self;
}
} // namespace lift_004FDD70

// [0x004FFD90]
namespace lift_004FFD90 {
// Import slot for MSVCP80 std::basic_string<char>::operator= (IAT entry, bound at load time).
// Thiscall: self in ecx, rhs pushed; returns a reference to self.
extern void* (__thiscall* mem_00924FDC)(void* self, const void* rhs);

// Elements are 0x24 bytes: std::string at +0x00, 32-bit handle at +0x20 (MSVC 32-bit
// pointer, held as a vtable-bearing object), and a 32-bit value at +0x1c.
// Vtable slots are byte offsets into the 32-bit vtable (0x70, 0x78).

static inline uint8_t* as_ptr(uint32_t v) {
    return reinterpret_cast<uint8_t*>(static_cast<uintptr_t>(v));
}

// Reads the function pointer stored at byte offset `off` in the object's vtable.
static inline void* vtable_slot(void* obj, uintptr_t off) {
    uint32_t vt = *reinterpret_cast<uint32_t*>(obj);
    uint32_t fn = *reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(vt) + off);
    return reinterpret_cast<void*>(static_cast<uintptr_t>(fn));
}

using ThisCallVoid1 = void(__thiscall*)(void* self, void* arg);
using ThisCallPtr2 = void*(__thiscall*)(void* self, void* out, void* arg);

// @name CopyAssignStringHandleRange
// @class Unknown
// @summary Copy-assigns a range of 0x24-byte elements src[first,last) into dst (element-wise); releases the old dst handle, copies the src handle and its value, and returns dst advanced past the copied elements (dst on empty range).
// @field Unknown +0x00 std::string field_0x00
// @field Unknown +0x1c uint32_t field_0x1c
// @field Unknown +0x20 uint32_t field_0x20
uint8_t* fn_004FFD90(uint8_t* src_first, uint8_t* src_last, uint8_t* dst) {
    if (src_first == src_last) {
        return dst;
    }

    uint8_t* s = src_first;
    uint8_t* d = dst;
    do {
        // dst[i] = src[i] (std::string::operator=)
        mem_00924FDC(d, s);

        if (d + 0x1c != s + 0x1c) {
            uint32_t& dst_handle = lift_field<uint32_t>(d, 0x20);
            uint32_t& src_handle = lift_field<uint32_t>(s, 0x20);

            // Release the old dst handle via vtable slot +0x78.
            if (dst_handle != 0) {
                void* obj = as_ptr(dst_handle);
                reinterpret_cast<ThisCallVoid1>(vtable_slot(obj, 0x78))(obj, d + 0x1c);
            }

            dst_handle = src_handle;

            // Fetch the value from the src handle via vtable slot +0x70; the callee returns
            // a pointer to the result, whose 32-bit contents become dst+0x1c.
            uint32_t value = 0;
            if (src_handle != 0) {
                void* obj = as_ptr(src_handle);
                uint32_t out = 0;
                void* ret = reinterpret_cast<ThisCallPtr2>(vtable_slot(obj, 0x70))(obj, &out, s + 0x1c);
                value = *reinterpret_cast<uint32_t*>(ret);
            }
            lift_field<uint32_t>(d, 0x1c) = value;
        }

        s += 0x24;
        d += 0x24;
    } while (s != src_last);

    return d;
}
} // namespace lift_004FFD90

// [0x004F9EA0] sub_004F9EA0 (95 bytes)
namespace lift_004F9EA0 {
// Known callee 0x00662610: called with (&mem_00AEA594, 0x00A3FFE0) as cdecl args.
extern void ext_00662610(void* obj, uint32_t arg);
// Known callee 0x006A6C87: called with 0x00919A90 as its single cdecl arg
// (registers a destructor-style callback for the static object).
extern void ext_006A6C87(uint32_t arg);
// Init-guard flags word; bit0 marks the static object as initialized/initializing.
extern uint32_t mem_00AEA5B0;
// Static object storage whose address is returned.
extern uint8_t mem_00AEA594[];

// @name initStaticObjectOnce_004F9EA0
// @summary One-time initializer for the static object at mem_00AEA594 guarded by bit0 of mem_00AEA5B0; on first call sets the guard, runs ext_00662610 on the object, registers the cleanup via ext_006A6C87, and returns the object's address. The MSVC SEH frame setup/teardown is compiler bookkeeping and is not modeled.
// @field mem_00AEA5B0 bit0 guard flag (set before the constructor runs)
void* fn_004F9EA0(void) {
    if ((mem_00AEA5B0 & 1u) == 0) {
        mem_00AEA5B0 |= 1u;
        ext_00662610(static_cast<void*>(mem_00AEA594), 0x00A3FFE0u);
        ext_006A6C87(0x00919A90u);
    }
    return static_cast<void*>(mem_00AEA594);
}
} // namespace lift_004F9EA0
