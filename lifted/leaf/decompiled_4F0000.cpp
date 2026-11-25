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

// [0x004FDE90] sub_004FDE90 (83 bytes)
namespace lift_004FDE90 {
// Known callee 0x00665810: sub_00665810 (Stores address of mem_00987A04 into field at offset +0x0.)
extern void __fastcall ext_00665810(void* self);

// @name Unknown::releaseChildAndResetBase_004FDE90
// @class Unknown
// @summary Releases the object at +0x18 via its virtual slot 0 (deleting dtor, flag 1), then calls the base-reset helper on self.
// @field Unknown +0x18 void* field_0x18
void fn_004FDE90(void* self) {
    void* child = lift_field<void*>(self, 0x18);
    if (child != nullptr) {
        void** vtbl = *reinterpret_cast<void***>(child);
        using ScalarDtorFn = void (*)(void* thisPtr, int flags);
        reinterpret_cast<ScalarDtorFn>(vtbl[0])(child, 1);
    }
    ext_00665810(self);
}
} // namespace lift_004FDE90

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
