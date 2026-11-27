// Lifted C++ translation unit: lifted/NMData/ValuePtrData.cpp
#include "lift_compat.h"
// Known callee 0x006A6E9E: thunk_MSVCR80___RTDynamicCast (IAT jump thunk forwarding to MSVCR80!__RTDynamicCast.)
// Signature: void* __RTDynamicCast(void* inptr, long VfDelta, void* SrcType, void* TargetType, int isReference)
extern "C" void* ext_006A6E9E(void* inptr, long vfDelta, const void* srcType, const void* targetType, int isReference);
// Known callee 0x0067A050: sub_0067A050 (ecx = a2, stack arg = pointer to self+0x50; returns eax).
extern "C" uint32_t ext_0067A050(uint32_t a2, void* subobject);

extern "C" uint32_t ext_0067A050(uint32_t a2, void* subobject);
// @name NMData::ValuePtrData::vfunc_19
// @class NMData::ValuePtrData
// @summary If field +0x4C is set, calls its vtable slot 24 with &field+0x48, dynamic-casts the result; returns 0x67 if arg==0x67 else 0x66 on cast success, otherwise arg.
// @field NMData::ValuePtrData +0x48 uint8_t field_0x48 (embedded sub-object; address only, passed to virtual call)
// @field NMData::ValuePtrData +0x4C void* field_0x4c (object pointer; vtable dispatched)
uint32_t fn_00682C20(void* self, uint32_t arg) {
    void* obj = lift_field<void*>(self, 0x4C);
    if (obj == nullptr) {
        return arg;
    }

    void** vtbl = *reinterpret_cast<void***>(obj);
    void* sub = reinterpret_cast<uint8_t*>(self) + 0x48;
    using VCall = void* (*)(void* self, void* arg);
    void* result = reinterpret_cast<VCall>(vtbl[0x60 / sizeof(void*)])(obj, sub);

    void* cast = ext_006A6E9E(
        result,
        0L,
        reinterpret_cast<const void*>(static_cast<uintptr_t>(0xA2E2F8u)),
        reinterpret_cast<const void*>(static_cast<uintptr_t>(0xA2E2D8u)),
        0);
    if (cast == nullptr) {
        return arg;
    }
    return (arg == 0x67u) ? 0x67u : 0x66u;
}

// [0x00682CE0] NMData::ValuePtrData::vfunc_17 (85 bytes)
// @name NMData::ValuePtrData::vfunc_17
// @class NMData::ValuePtrData
// @summary If a1 == 0x280: returns 0x46 when the object at +0x28 reports vfunc slot 12 == 5; otherwise, when +0x64 is set and a3 is non-null, stores ext_0067A050(a2, self+0x50) into *a3. Returns a1 in all non-0x46 paths.
// @field NMData::ValuePtrData +0x28 void* field_0x28
// @field NMData::ValuePtrData +0x50 uint8_t field_0x50 (embedded sub-object; address only)
// @field NMData::ValuePtrData +0x64 uint32_t field_0x64
uint32_t fn_00682CE0(void* self, uint32_t a1, uint32_t a2, uint32_t* a3) {
    using VFn = uint32_t (*)(void*);

    if (a1 != 0x280) {
        return a1;
    }

    void* obj = lift_field<void*>(self, 0x28);
    if (obj != nullptr) {
        void** vtbl = lift_field<void**>(obj, 0);
        VFn fn = reinterpret_cast<VFn>(vtbl[0x30 / sizeof(void*)]);
        if (fn(obj) == 5) {
            return 0x46;
        }
    }

    if (lift_field<uint32_t>(self, 0x64) != 0 && a3 != nullptr) {
        void* subobject = static_cast<uint8_t*>(self) + 0x50;
        *a3 = ext_0067A050(a2, subobject);
    }

    return a1;
}

// [0x00682C70]
namespace lift_00682C70 {
extern void __cdecl ext_0046F7D0(void* arg1);
extern void __thiscall ext_00661650(void* self, void* arg1);
extern void* __cdecl ext_006A6E9E(void* inptr, int32_t vf_delta, void* src_type, void* target_type, int32_t is_reference);

// @name NMData::ValuePtrData::vfunc_14
// @class NMData::ValuePtrData
// @summary Queries sub-object at +0x4C, dynamic-casts result, and initializes arg1 via ext_00661650 or fallback ext_0046F7D0.
// @field NMData::ValuePtrData +0x48 uint8_t field_0x48
// @field NMData::ValuePtrData +0x4C void* field_0x4c

extern void* __thiscall fn_00682C70(void* self, void* arg1, uint32_t arg2) {
    uint8_t* base = reinterpret_cast<uint8_t*>(self);
    if (arg2 == 0x67 || arg2 == 0x66) {
        void* obj = *reinterpret_cast<void**>(base + 0x4C);
        if (obj != nullptr) {
            void** vtable = *reinterpret_cast<void***>(obj);
            using VFunc60 = void* (__thiscall*)(void*, void*);
            VFunc60 vfunc = reinterpret_cast<VFunc60>(vtable[0x60 / sizeof(void*)]);
            void* res = vfunc(obj, base + 0x48);
            void* casted = ext_006A6E9E(
                res,
                0,
                reinterpret_cast<void*>(0x00A2E2F8),
                reinterpret_cast<void*>(0x00A2E2D8),
                0
            );
            if (casted != nullptr) {
                ext_00661650(arg1, casted);
                return arg1;
            }
        }
    }
    ext_0046F7D0(arg1);
    return arg1;
}
} // namespace lift_00682C70

// [0x00685F80] NMData::ValuePtrData::vfunc_15 (172 bytes)
namespace lift_00685F80 {
// Known callee 0x00671F30: sub_00671F30 (Zeroes the first dword of the output buffer and stores the global mem_00B599BC into the second dword.)
extern void ext_00671F30(DWORD* out);
// Known callee 0x006836F0: sub_006836F0 (Auto-lifted identical-shape clone of 0x0046F6A0 (StoreValueAndSingleton).)
extern DWORD ext_006836F0(DWORD* dst, DWORD value);
// Known callee 0x00685BA0: sub_00685BA0 (Auto-lifted identical-shape clone of 0x0046F6A0 (StoreValueAndSingleton).)
extern DWORD ext_00685BA0(DWORD* dst, DWORD value);
// Known callee 0x00685BC0: sub_00685BC0 (Auto-lifted identical-shape clone of 0x0046F6A0 (StoreValueAndSingleton).)
extern DWORD ext_00685BC0(DWORD* dst, DWORD value);
// Known callee 0x00685BE0: sub_00685BE0 (Auto-lifted identical-shape clone of 0x0046F6A0 (StoreValueAndSingleton).)
extern DWORD ext_00685BE0(DWORD* dst, DWORD value);
// Known callee 0x00685C00: sub_00685C00 (Auto-lifted identical-shape clone of 0x0046F6A0 (StoreValueAndSingleton).)
extern DWORD ext_00685C00(DWORD* dst, DWORD value);

// @name NMData::ValuePtrData::vfunc_15
// @class NMData::ValuePtrData
// @summary Dispatches on a signed selector value to one of five constructor helpers (passing this as the second argument), otherwise zeroes the output dword; always returns dst.
// The original never reads fields of `this` directly; it forwards it (ECX) as the second argument to the helpers.
DWORD fn_00685F80(void* self, DWORD* dst, DWORD value) {
    const DWORD self_value = static_cast<DWORD>(reinterpret_cast<uintptr_t>(self));
    const int32_t sel = static_cast<int32_t>(value);

    if (sel > 0x2f6) {
        if (sel == 0x361) {
            ext_00685BC0(dst, self_value);
        } else if (sel == 0x386) {
            ext_006836F0(dst, self_value);
        } else {
            ext_00671F30(dst);
        }
    } else if (sel == 0x2f6) {
        ext_00685C00(dst, self_value);
    } else if (sel == 0x280) {
        ext_00685BE0(dst, self_value);
    } else if (sel == 0x2d4) {
        ext_00685BA0(dst, self_value);
    } else {
        ext_00671F30(dst);
    }

    return static_cast<DWORD>(reinterpret_cast<uintptr_t>(dst));
}
} // namespace lift_00685F80

// [0x00682A00] NMData::ValuePtrData::vfunc_3_off_8 (208 bytes)
namespace lift_00682A00 {
// Known callee 0x00427550: ResetChildAndAssignName (Clears the owned objects of the object referenced by this+0x00, then assigns the given C string as the child name via assignOrCreateChild.)
extern void ext_00427550(void* self, const char* name);
// Known callee 0x00640110: sub_00640110 (296B)
extern void* ext_00640110(void* self, uint32_t arg);
// Known callee 0x00640A50: FormatAndAssignChildName (Formats the int argument into a 16-byte buffer with sprintf and assigns the result as the child name of the object referenced by the first argument.)
extern void ext_00640A50(void* obj, int32_t value);
// Known callee 0x00662810: sub_00662810 (49B)
extern void ext_00662810(void* self, uint32_t a, void* out);
// Known callee 0x006722D0: sub_006722D0 (Auto-lifted identical-shape clone of 0x006722B0 (sub_0067AEE8).)
extern void ext_006722D0(void* self, void* arg);
// Known callee 0x00682460: sub_00682460 (96B)
extern void ext_00682460(void* self, void* obj, uint32_t a);
extern int mem_00AA23DC;
extern int mem_00AA2404;
extern int mem_00AA23D4;
extern int mem_00AA23E4;
extern int mem_00924FF0;
extern int mem_00AA23A0;
extern int mem_00B5A0B8;

// @name NMData::ValuePtrData::vfunc_3_off_8
// @class NMData::ValuePtrData
// @summary Assigns child names from this+0x20/+0x48/+0x64 and forwards arg to sub-object +0x40 or +0x84 via 0x006722D0; returns arg.
// @field NMData::ValuePtrData +0x04 uint8_t field_0x04 (embedded sub-object; address only)
// @field NMData::ValuePtrData +0x18 uint32_t field_0x18 (flag; nonzero enables 0x00682460 call)
// @field NMData::ValuePtrData +0x20 void* field_0x20 (object pointer; vtable slot 12 dispatched)
// @field NMData::ValuePtrData +0x24 void* field_0x24 (address only, passed to 0x00662810)
// @field NMData::ValuePtrData +0x40 uint8_t field_0x40 (embedded sub-object; address only)
// @field NMData::ValuePtrData +0x48 uint8_t field_0x48 (embedded std::string; c_str() taken)
// @field NMData::ValuePtrData +0x5C uint32_t field_0x5c (flag; nonzero enables name assignment)
// @field NMData::ValuePtrData +0x64 uint8_t field_0x64 (embedded std::string; c_str() taken)
// @field NMData::ValuePtrData +0x78 uint32_t field_0x78 (flag; nonzero enables name assignment)
// @field NMData::ValuePtrData +0x84 void* field_0x84 (object pointer; used as target when mem_00B5A0B8 != 0)
void* fn_00682A00(void* self, void* arg) {
    using CStrFn = const char* (*)(void*);
    using VFn = int32_t (*)(void*);

    if (lift_field<uint32_t>(self, 0x18) != 0) {
        ext_00682460(arg, &lift_field<uint8_t>(self, 0x04),
                     static_cast<uint32_t>(mem_00AA23DC));
    }

    void* name_obj = ext_00640110(arg, static_cast<uint32_t>(mem_00AA2404));
    void* vobj = lift_field<void*>(self, 0x20);
    void** vtable = *reinterpret_cast<void***>(vobj);
    int32_t vresult = reinterpret_cast<VFn>(vtable[12])(vobj);
    ext_00640A50(name_obj, vresult);

    ext_00662810(arg, static_cast<uint32_t>(mem_00AA23D4),
                 &lift_field<void*>(self, 0x24));

    if (lift_field<uint32_t>(self, 0x5C) != 0) {
        void* tmp = ext_00640110(arg, static_cast<uint32_t>(mem_00AA23E4));
        const char* s = (*reinterpret_cast<CStrFn*>(&mem_00924FF0))(
            &lift_field<uint8_t>(self, 0x48));
        ext_00427550(&tmp, s);
    }

    if (lift_field<uint32_t>(self, 0x78) != 0) {
        void* tmp = ext_00640110(arg, static_cast<uint32_t>(mem_00AA23A0));
        const char* s = (*reinterpret_cast<CStrFn*>(&mem_00924FF0))(
            &lift_field<uint8_t>(self, 0x64));
        ext_00427550(&tmp, s);
    }

    void* target_obj = lift_field<void*>(self, 0x84);
    void* target = &lift_field<uint8_t>(self, 0x40);
    if (target_obj != nullptr && mem_00B5A0B8 != 0) {
        target = target_obj;
    }
    ext_006722D0(target, arg);

    return arg;
}
} // namespace lift_00682A00
