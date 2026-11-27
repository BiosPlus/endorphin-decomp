// Lifted C++ translation unit: lifted/ExprParser/ExpressionContainerType.cpp
#include "lift_compat.h"
extern "C" void* ext_006999B0(void* arg);
// Helper sub_006999B0 (60 bytes): takes one stack argument, returns an object pointer in eax.
// Callee-cleans its single argument (stdcall-style), inferred from the caller not adjusting esp.
extern "C" void* __stdcall ext_006999B0(void* arg);

// Callee-cleans its single argument (stdcall-style), inferred from the caller not adjusting esp.
extern "C" void* __stdcall ext_006999B0(void* arg);
// @class ExprParser::ExpressionContainerType
// @summary Gets object via vfunc_24, dynamic_casts it, and invokes vfunc_1 if non-null
#include "lift_compat.h"

extern "C" void* __cdecl ext_006A6E9E(void* ptr, int32_t vfDelta, void* srcType, void* dstType, int32_t isReference);

void __thiscall fn_00699100(void* self, void* arg0, void* arg1) {
    void** vtable = *reinterpret_cast<void***>(self);
    using VFunc24 = void*(__thiscall*)(void*, void*);
    void* obj = reinterpret_cast<VFunc24>(vtable[0x60 / 4])(self, arg0);

    void* casted = ext_006A6E9E(
        obj,
        0,
        reinterpret_cast<void*>(0x00A2E2F8),
        reinterpret_cast<void*>(0x00A2E1FC),
        0
    );
    if (casted) {
        void** casted_vt = *reinterpret_cast<void***>(casted);
        using VFunc1 = void(__thiscall*)(void*, void*);
        reinterpret_cast<VFunc1>(casted_vt[1])(casted, arg1);
    }
}
extern "C" void* ext_006999B0(void* self);

// [0x00699140]
// @name ExprParser::ExpressionContainerType::vfunc_32
// @class ExprParser::ExpressionContainerType
// @summary Gets object via vfunc_24, dynamic_casts it, and invokes vfunc_3 if non-null
#include "lift_compat.h"

extern "C" void* __cdecl ext_006A6E9E(void* ptr, int32_t vfDelta, void* srcType, void* dstType, int32_t isReference);

void __thiscall fn_00699140(void* self, void* arg0, void* arg1) {
    void** vtable = *reinterpret_cast<void***>(self);
    using VFunc24 = void*(__thiscall*)(void*, void*);
    void* obj = reinterpret_cast<VFunc24>(vtable[0x60 / 4])(self, arg0);

    void* casted = ext_006A6E9E(
        obj,
        0,
        reinterpret_cast<void*>(0x00A2E2F8),
        reinterpret_cast<void*>(0x00A2E1FC),
        0
    );
    if (casted) {
        void** casted_vt = *reinterpret_cast<void***>(casted);
        using VFunc3 = void(__thiscall*)(void*, void*);
        reinterpret_cast<VFunc3>(casted_vt[3])(casted, arg1);
    }
}

// [0x0067A7D0] ExprParser::ExpressionContainerType::vfunc_43 (66 bytes)
// @name ExprParser::ExpressionContainerType::vfunc_43
// @class ExprParser::ExpressionContainerType
// @summary Sums vfunc_1 results of self->+0x04 (on self) and arg->+0x04 (on arg), then passes the sum to self->+0x04 vfunc_7 along with self.
// @field ExprParser::ExpressionContainerType +0x04 void* field_0x04
// @field Unknown +0x04 void* field_0x04
void fn_0067A7D0(void* self, void* arg) {
    using FloatGetter = float (*)(void* thisObj, void* a);
    using FloatSetter = void (*)(void* thisObj, void* a, float value);

    // Read vtable slot `idx` of the object at `obj`.
    auto vslot = [](void* obj, size_t idx) -> void* {
        return (*static_cast<void***>(obj))[idx];
    };

    // a = self->+0x04->vfunc_1(self)
    void* selfSub = lift_field<void*>(self, 0x04);
    float a = reinterpret_cast<FloatGetter>(vslot(selfSub, 1))(selfSub, self);

    // b = arg->+0x04->vfunc_1(arg)
    void* argSub = lift_field<void*>(arg, 0x04);
    float b = reinterpret_cast<FloatGetter>(vslot(argSub, 1))(argSub, arg);

    float sum = b + a;

    // Tail call in the original: self->+0x04->vfunc_7(self, sum).
    // The original returns whatever that callee leaves in st0; that value is not modelled here.
    void* selfSubAgain = lift_field<void*>(self, 0x04);
    reinterpret_cast<FloatSetter>(vslot(selfSubAgain, 7))(selfSubAgain, self, sum);
}

// [0x00670CB0] ExprParser::ExpressionContainerType::vfunc_1 (24 bytes)
// @name ExprParser::ExpressionContainerType::vfunc_1
// @class ExprParser::ExpressionContainerType
// @summary Resolves arg via ext_006999B0, then tail-dispatches to vtable slot 1 of the result's +0x04 object, passing the result as the argument.
// @field Unknown +0x04 void* field_0x04
void* fn_00670CB0(void* a1) {
    // Helper returns the resolved object; its +0x04 member is the dispatch target.
    void* x = ext_006999B0(a1);
    void* obj = lift_field<void*>(x, 0x04);
    // Original is a tail jump (jmp eax) through vtable slot 1 (offset 0x04).
    void** vtbl = *static_cast<void***>(obj);
    auto fn = reinterpret_cast<void* (*)(void*, void*)>(vtbl[1]);
    return fn(obj, x);
}

// [0x00670CD0] ExprParser::ExpressionContainerType::vfunc_2 (24 bytes)
// @name ExprParser::ExpressionContainerType::vfunc_2
// @class ExprParser::ExpressionContainerType
// @summary Resolves arg via ext_006999B0, then tail-calls vtable slot 2 of the result's +0x04 subobject with the result as argument.
// @field Unknown +0x04 void* field_0x04
void* fn_00670CD0(void* a) {
    void* r = ext_006999B0(a);

    // r->+0x04 is a subobject pointer (SymbolSource base); its vtable slot 2 (+0x08) is the target.
    char* sub = *reinterpret_cast<char**>(static_cast<char*>(r) + 0x04);
    void** vtbl = *reinterpret_cast<void***>(sub);

    using VFn = void* (__thiscall*)(void* self, void* arg);
    return reinterpret_cast<VFn>(vtbl[2])(sub, r);
}

// [0x00670D40] ExprParser::ExpressionContainerType::vfunc_5 (24 bytes)
// @name ExprParser::ExpressionContainerType::vfunc_5
// @class ExprParser::ExpressionContainerType
// @summary Resolves self via ext_006999B0, then tail-dispatches to vtable slot 5 of the sub-object at +0x04.
// @field ExprParser::ExpressionContainerType +0x00 void* vtable (not accessed directly by this function)
// @field <unknown: returned by ext_006999B0> +0x04 void* field_0x04 (sub-object pointer)
// @field <unknown: returned by ext_006999B0> +0x00 void* field_0x00 (sub-object vtable; slot 5 at +0x14 is called)
void* fn_00670D40(void* self) {
    // push self; call ext_006999B0 -> eax
    void* obj = ext_006999B0(self);

    // ecx = obj->+0x04 (sub-object); edx = sub-object's vtable
    void* sub = lift_field<void*>(obj, 0x04);
    void** vtbl = *reinterpret_cast<void***>(sub);

    // [esp+4] = obj; jmp vtbl[5] with ecx == sub (thiscall-style tail call)
    using Slot5Fn = void* (*)(void* self_this, void* arg);
    auto slot5 = reinterpret_cast<Slot5Fn>(vtbl[5]);
    return slot5(sub, obj);
}

// [0x00670CF0]
// @name ExprParser::ExpressionContainerType::vfunc_3
// @class ExprParser::ExpressionContainerType
// @summary Resolves a helper object from self, then tail-dispatches vtable slot 3 on its sub-object at +0x04 with the helper as argument.
// @field ExprParser::ExpressionContainerType +0x04 void* field_0x04 (type of ext_006999B0 result unknown; +0x04 sub-object pointer used as this)
void* fn_00670CF0(void* self) {
    void* r = ext_006999B0(self);
    void* obj = lift_field<void*>(r, 0x04);
    void* vtbl = lift_field<void*>(obj, 0x00);
    auto slot3 = reinterpret_cast<void* (*)(void*, void*)>(lift_field<void*>(vtbl, 0x0c));
    return slot3(obj, r);
}

// [0x00670D60]
// @name ExprParser::ExpressionContainerType::vfunc_6
// @class ExprParser::ExpressionContainerType
// @summary Resolves a helper object from self, then tail-dispatches vtable slot 6 on its sub-object at +0x04 with the helper as argument.
// @field ExprParser::ExpressionContainerType +0x04 void* field_0x04 (type of ext_006999B0 result unknown; +0x04 sub-object pointer used as this)
void* fn_00670D60(void* self) {
    void* r = ext_006999B0(self);
    void* obj = lift_field<void*>(r, 0x04);
    void* vtbl = lift_field<void*>(obj, 0x00);
    auto slot6 = reinterpret_cast<void* (*)(void*, void*)>(lift_field<void*>(vtbl, 0x18));
    return slot6(obj, r);
}

// [0x00699220] ExprParser::ExpressionContainerType::vfunc_29 (49 bytes)
namespace lift_00699220 {
// Known callee 0x00699180: sub_00699180 (17B). Takes `this` in ecx, returns it in eax.
extern void* ext_00699180(void* self);
// Known callee 0x006A5C62: thunk_MFC80_ord_762 (IAT jump thunk forwarding to MFC80!ord_762.)
// Called cdecl with one size argument (push 0xC; add esp,4); returns allocated pointer in eax.
extern void* ext_006A5C62(size_t size);

// @name ExprParser::ExpressionContainerType::vfunc_29
// @class ExprParser::ExpressionContainerType
// @summary Allocates a 12-byte object, runs its initializer, and stores it into the out-slot with a ref count of +1 (null slot if allocation fails).
void fn_00699220(void* self, void** out) {
    (void)self; // ecx is not read by the original function.

    void* obj = ext_006A5C62(12);
    if (obj != nullptr) {
        ext_00699180(obj);
        // Original increments the refcount stored at obj+0x04 on the new object.
        lift_field<int32_t>(obj, 0x04) += 1;
        *out = obj;
    } else {
        // Original falls through to `add [eax+4], 1` with eax == 0 here, which
        // faults on the real target. That fault is not reproduced; the slot is cleared.
        *out = nullptr;
    }
}
} // namespace lift_00699220

// [0x00670D10] ExprParser::ExpressionContainerType::vfunc_4 (39 bytes)
namespace lift_00670D10 {
// Helper 0x006999B0: takes two stack arguments (stdcall, callee-cleans 8 bytes), returns a pointer in eax.
extern void* __stdcall ext_006999B0(void* arg0, void* arg1);
// Known callee 0x0041CEB0: UnknownClass::forwardToSubobjectSlot4 (thiscall; self in ecx, arg1 on stack).
extern void* __thiscall ext_0041CEB0(void* self, void* arg1);

// @name ExprParser::ExpressionContainerType::vfunc_4
// @class ExprParser::ExpressionContainerType
// @summary Calls helper 0x006999B0 with (arg2, arg1), forwards its result as self to 0x0041CEB0 with arg1, and returns arg1.
void* __thiscall fn_00670D10(void* self, void* arg1, void* arg2) {
    (void)self;
    void* helperResult = ext_006999B0(arg2, arg1);
    ext_0041CEB0(helperResult, arg1);
    return arg1;
}
} // namespace lift_00670D10

// [0x0066C0B0]
namespace lift_0066C0B0 {
// @name ExprParser::ExpressionContainerType::vfunc_0
// @class ExprParser::ExpressionContainerType
// @summary Copies a value-pointer pair from arg1, resolving field_0x00 via field_0x04's vtable slot 0x70 when non-null.
// @field ExprParser::ExpressionContainerType +0x04 void* field_0x04


extern void ext_0041CF50();
extern void ext_004ECB40();

void* __thiscall fn_0066C0B0(void* self, void* sret, void* arg1) {
    (void)self;
    if (false) {
        ext_0041CF50();
        ext_004ECB40();
    }
    void* obj = lift_field<void*>(arg1, 0x04);
    uint32_t val = 0;
    if (obj != nullptr) {
        using Vfn70 = uint32_t* (__thiscall*)(void*, void**, void*);
        void** vtable = *reinterpret_cast<void***>(obj);
        auto fn = reinterpret_cast<Vfn70>(vtable[0x70 / 4]);
        void* tmp = arg1;
        uint32_t* res = fn(obj, &tmp, arg1);
        val = *res;
    }
    lift_field<uint32_t>(sret, 0x00) = val;
    lift_field<void*>(sret, 0x04) = obj;
    return sret;
}
} // namespace lift_0066C0B0

// [0x006994A0] ExprParser::ExpressionContainerType::vfunc_18 (428 bytes)
namespace lift_006994A0 {
// Known callee 0x0041CF50: Unknown::assignFromOther_0041CF50 (Self-assignment guarded copy; returns self.)
extern void* __thiscall ext_0041CF50(void* self, void* other);
// Known callee 0x0041E540: sub_0041E540 (Auto-lifted identical-shape clone of 0x004C9860 (initStaticObjectOnce_004C9860).)
extern void* ext_0041E540(void);
// Known callee 0x00595C50: sub_00595C50 (Auto-lifted identical-shape clone of 0x0043D780 (AllocAndInitRecord).)
extern void* __thiscall ext_00595C50(void* self);
// Known callee 0x00598F40: sub_00598F40 (175B)
extern void* __thiscall ext_00598F40(void* self, const void* key, void* value);
// Known callee 0x0059B350: SearchableMap<ValuePtr, GetNameFromAttribute<ValuePtr>>::vfunc_0
extern void* __thiscall ext_0059B350(void* self, const void* key);
// Known callee 0x006720E0: sub_006720E0 (43B)
extern void __thiscall ext_006720E0(void* self, void* arg);
// Known callee 0x00699360: ContainerBase::GetCheckedBegin (returns begin pointer of a 32-byte-element array, else a static sentinel)
extern uint8_t* __thiscall ext_00699360(void* self);
// Known callee 0x006A6C87: sub_006A6C87 (18B) (cdecl, registers a one-shot cleanup callback)
extern void ext_006A6C87(void* fn);

extern uint32_t mem_00B5C944;
extern uint32_t mem_00B5C934;
extern uint32_t mem_00B5C93C;
extern uint32_t mem_00B5C940;
extern uint32_t mem_00B599BC;
extern uint32_t mem_00B5C92C;
extern uint32_t mem_00B5C930;

namespace {
inline void* u32_to_ptr(uint32_t v) {
    return reinterpret_cast<void*>(static_cast<uintptr_t>(v));
}
inline uint32_t ptr_to_u32(const void* p) {
    return static_cast<uint32_t>(reinterpret_cast<uintptr_t>(p));
}
}  // namespace

// @name ExprParser::ExpressionContainerType::vfunc_18
// @class ExprParser::ExpressionContainerType
// @summary Looks up a key in a static searchable map; on miss, queries a virtual slot and registers the result, returning the found value or the static sentinel.
// @field ExpressionContainerType +0x00 void* vtable
void* __thiscall fn_006994A0(void* self, const void* key) {
    void* found = nullptr;

    if (key != nullptr) {
        // One-time static initialisation of the map object.
        if (!(mem_00B5C944 & 1u)) {
            mem_00B5C944 |= 1u;
            mem_00B5C934 = 0x0095DA28u;
            void* head = ext_00595C50(reinterpret_cast<void*>(static_cast<uintptr_t>(0x00B5C938u)));
            mem_00B5C93C = ptr_to_u32(head);
            uint8_t* h = static_cast<uint8_t*>(head);
            h[0x31] = 1;
            *reinterpret_cast<uint32_t*>(h + 0x04) = ptr_to_u32(head);
            *reinterpret_cast<uint32_t*>(h + 0x00) = ptr_to_u32(head);
            *reinterpret_cast<uint32_t*>(h + 0x08) = ptr_to_u32(head);
            mem_00B5C940 = 0;
            ext_006A6C87(u32_to_ptr(0x00921F70u));
        }

        // Lookup in the static map with the key's +0x2C sub-object.
        const uint8_t* keyBytes = static_cast<const uint8_t*>(key);
        const void* subKey = keyBytes + 0x2C;
        found = ext_0059B350(reinterpret_cast<void*>(static_cast<uintptr_t>(0x00B5C934u)), subKey);
        if (found != nullptr) {
            return found;
        }

        // Miss: ask this object's virtual slot 0x5C for a value.
        using VFn23 = void*(__thiscall*)(void* self, void* out, const void* key,
                                         uint32_t a, uint32_t b, uint32_t c);
        void* vt = *static_cast<void**>(self);
        VFn23 slot23 = reinterpret_cast<VFn23>(static_cast<void**>(vt)[0x5C / 4]);
        uint32_t sret[2] = {0, 0};
        void* value = slot23(self, sret, key, 0, 0, 0);

        found = ext_00598F40(reinterpret_cast<void*>(static_cast<uintptr_t>(0x00B5C934u)), subKey, value);

        // Release the temporary returned through the sret slot, if any.
        void* tmpObj = u32_to_ptr(sret[1]);
        if (tmpObj != nullptr) {
            using VFn30 = void(__thiscall*)(void* self, void* arg);
            void** tvt = *static_cast<void***>(tmpObj);
            VFn30 slot30 = reinterpret_cast<VFn30>(tvt[0x78 / 4]);
            slot30(tmpObj, sret);
        }

        if (found != nullptr) {
            return found;
        }
    }

    // Fallback path: lazily initialise the sentinel object at 0xB5C92C.
    if (!(mem_00B5C944 & 2u)) {
        uint32_t cacheBase = mem_00B599BC;
        mem_00B5C944 |= 2u;
        mem_00B5C92C = 0;
        mem_00B5C930 = cacheBase;
        ext_006A6C87(u32_to_ptr(0x00921F50u));
    }

    uint32_t cached = mem_00B5C930;
    if (cached == 0 || cached == mem_00B599BC) {
        void* obj = ext_0041E540();
        uint8_t* begin = ext_00699360(obj);
        if (*reinterpret_cast<uint32_t*>(begin + 0x14) != 0) {
            void* tmp14 = nullptr;
            ext_006720E0(&tmp14, begin);
            uint32_t other[2] = {0, 2};
            ext_0041CF50(reinterpret_cast<void*>(static_cast<uintptr_t>(0x00B5C92Cu)), other);
            if (tmp14 != nullptr) {
                using VFn30 = void(__thiscall*)(void* self, void* arg);
                void** tvt = *static_cast<void***>(tmp14);
                VFn30 slot30 = reinterpret_cast<VFn30>(tvt[0x78 / 4]);
                slot30(tmp14, other);
            }
        }
    }

    return reinterpret_cast<void*>(static_cast<uintptr_t>(0x00B5C92Cu));
}
} // namespace lift_006994A0

// [0x0069A910] ExprParser::ExpressionContainerType::vfunc_23 (187 bytes)
namespace lift_0069A910 {
// Known callee 0x006A5C62: thunk_MFC80_ord_762 (IAT jump thunk forwarding to MFC80!ord_762.)
// cdecl allocator: takes one size argument, returns a pointer in eax.
extern void* __cdecl ext_006A5C62(uint32_t size);
// Known callee 0x0069A7B0 (104B): thiscall, takes the freshly allocated object as this, returns an object pointer.
extern void* __thiscall ext_0069A7B0(void* self);
// Known callee 0x006992E0: Unknown::initOutPairAndSetOwnedFromArg2 (Zeroes out[0], stores self in out[1], calls the virtual method at vtable+0x74 with out, then calls setOwnedObject_006991F0(out[0], arg2); returns out.)
// Callee-cleans its two stack arguments (thiscall).
extern uint32_t __thiscall ext_006992E0(void* self, void* out, void* obj);
// Known callee 0x00699720 (163B): thiscall with two stack arguments.
extern void __thiscall ext_00699720(void* self, void* a, void* b);

// @name ExprParser::ExpressionContainerType::vfunc_23
// @class ExprParser::ExpressionContainerType
// @summary Allocates a 0x84-byte object, initializes it from arg A, optionally finishes it with arg B, and returns the out pointer
// @field ExprParser::ExpressionContainerType +0x48 void* field_0x48
// @field ExprParser::ExpressionContainerType +0x4C void* field_0x4c
uint32_t __thiscall fn_0069A910(void* self, uint32_t flag, void* a, void* b, void* c, void* d) {
    (void)c;
    (void)d;

    // Allocate and construct the 0x84-byte object (null -> nullptr result, as in the asm's xor edi,edi path).
    void* obj = nullptr;
    void* raw = ext_006A5C62(0x84);
    if (raw != nullptr) {
        obj = ext_0069A7B0(raw);
    }

    // x = a->field_0x4c; call x->vfunc_24(a + 0x48)
    void* x = lift_field<void*>(a, 0x4C);
    void** x_vtbl = *reinterpret_cast<void***>(x);
    using VFunc24 = void*(__thiscall*)(void*, void*);
    void* arg_ptr = static_cast<uint8_t*>(a) + 0x48;
    void* r = reinterpret_cast<VFunc24>(x_vtbl[0x60 / sizeof(void*)])(x, arg_ptr);

    // obj->vtable[0x28 / 4](r)
    void** obj_vtbl = *reinterpret_cast<void***>(obj);
    using VFunc10 = void(__thiscall*)(void*, void*);
    reinterpret_cast<VFunc10>(obj_vtbl[0x28 / sizeof(void*)])(obj, r);

    // out = stack-local out pair, filled by initOutPairAndSetOwnedFromArg2(self, out, obj).
    void* out = nullptr;
    ext_006992E0(self, &out, obj);

    // When flag is set, finish the object with arg a and arg b.
    if (static_cast<uint8_t>(flag) != 0) {
        ext_00699720(obj, a, b);
    }

    return static_cast<uint32_t>(reinterpret_cast<uintptr_t>(out));
}
} // namespace lift_0069A910
