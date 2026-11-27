// Lifted C++ translation unit: lifted/NMData/RigNode.cpp
#include "lift_compat.h"
#include <string>
#include <new>
extern "C" void* ext_006A5C62(size_t size);
extern "C" void* ext_005ABA70(void* self, void* owner);

// [0x005ABB70] NMData::RigNode::vfunc_17_off_C (99 bytes)
// @name NMData::RigNode::vfunc_17_off_C
// @class NMData::RigNode
// @summary Auto-lifted identical-shape clone of 0x004CFC30 (NMData::IncarnationEventData::vfunc_17_off_C).
void* fn_005ABB70(void* self) {
    void* mem = ext_006A5C62(0x194);
    if (mem == nullptr) {
        return nullptr;
    }
    void* owner = static_cast<unsigned char*>(self) - 0xC;
    return ext_005ABA70(mem, owner);
}

// [0x005AA900] NMData::RigNode::vfunc_14 (210 bytes)
namespace lift_005AA900 {
// Known callee 0x0058F6B0: NMData::AxisDefineSensorData::vfunc_14 (Returns arg1; if arg2 == 0x199 calls sub_00661650 on arg1, otherwise calls AnimatableTransform::vfunc_13 on self with (arg1, arg2).)
extern void* __thiscall ext_0058F6B0(void* self, void* arg1, uint32_t arg2);
// sub_00661680 (38B): thiscall on obj with (count, pointer) args.
extern void __thiscall ext_00661680(void* self, uint32_t count, void* p);
// Known callee 0x0046F7D0: initAndReturnObject (Initializes an object via ext_00661620 and returns it.)
extern void* ext_0046F7D0(void* obj);

// @name NMData::RigNode::vfunc_14
// @class NMData::RigNode
// @summary Dispatches on arg2: 0x134/0x0D gated by a virtual check on the sub-object at +0x190 and mode at +0x154 to ext_00661680; other values forward to ext_0058F6B0; the fallback initializes arg1 via ext_0046F7D0. Always returns arg1.
// @field NMData::RigNode +0x154 uint32_t field_0x154
// @field NMData::RigNode +0x158 uint8_t field_0x158
// @field NMData::RigNode +0x164 uint8_t field_0x164
// @field NMData::RigNode +0x190 void* field_0x190
void* fn_005AA900(void* self, void* arg1, uint32_t arg2) {
    if (arg2 != 0x0D && arg2 != 0x134) {
        ext_0058F6B0(self, arg1, arg2);
        return arg1;
    }

    // Gate: sub-object at +0x190 must exist and its vtable[1] must return true.
    bool ok = false;
    void* gate = lift_field<void*>(self, 0x190);
    if (gate != nullptr) {
        using GateFn = uint8_t (__thiscall*)(void*);
        void** vtbl = *reinterpret_cast<void***>(gate);
        ok = reinterpret_cast<GateFn>(vtbl[1])(gate) != 0;
    }

    if (ok) {
        uint32_t mode = lift_field<uint32_t>(self, 0x154);
        if (arg2 == 0x134) {
            if (mode == 1 || mode == 3) {
                ext_00661680(arg1, 3, reinterpret_cast<uint8_t*>(self) + 0x158);
                return arg1;
            }
        } else { // arg2 == 0x0D
            if (mode == 2 || mode == 3) {
                ext_00661680(arg1, 3, reinterpret_cast<uint8_t*>(self) + 0x164);
                return arg1;
            }
        }
    }

    ext_0046F7D0(arg1);
    return arg1;
}
} // namespace lift_005AA900

// [0x005ABC10] NMData::RigNode::vfunc_34 (200 bytes)
namespace lift_005ABC10 {
// Known callee 0x00493E40: forwardVtableSlot194 (Dereferences a pointer-to-pointer held in self, then tail-jumps to the)
extern void ext_00493E40();
// Known callee 0x00528B90: Unknown::setPeerWithBackLink (Stores the argument at this+0x04; if it is non-null, writes this into argument+0x08.)
extern void ext_00528B90();
extern void ext_005B5780();
extern void ext_006A6C87();
extern int mem_00B42264;
extern int mem_00B40640;
extern int mem_00B42218;

// @name NMData::RigNode::vfunc_34
// @class NMData::RigNode
// @summary One-time guarded init of a static object at mem_00B42218, then wires a peer
//          (obtained via forwardVtableSlot194) back to this node's +0x0C subobject and
//          invokes the peer's vtable slot 11 with flags 0x80000 / 1. Returns the peer.
// @field NMData::RigNode +0x00 void* field_0x00
// @field NMData::RigNode +0x04 void* field_0x04
// @field NMData::RigNode +0x0C void* field_0x0C
void* fn_005ABC10(void* self, void* frame_slot_0x24) {
    // SEH frame (push -1 / handler / fs:[0] chain) dropped; no exception state is modelled.

    // test byte [0xb42264],1 ; jne -> skip one-time init
    if ((mem_00B42264 & 1) == 0) {
        // or dword [0xb42264],1  (mark guard as taken)
        mem_00B42264 |= 1;
        // push 0xc ; mov ecx,0xb42218 ; call sub_005B5780   (thiscall, one arg = 0xc)
        using CtorFn = void (*)(void* obj, uint32_t arg);
        reinterpret_cast<CtorFn>(&ext_005B5780)(&mem_00B42218, 0x0c);
        // push 0x91da00 ; call sub_006A6C87 ; add esp,4      (cdecl)
        using RegFn = void (*)(uint32_t arg);
        reinterpret_cast<RegFn>(&ext_006A6C87)(0x0091da00);
    }

    // mov eax,[esi] ; mov edx,[eax+0xec] ; push 0xb42218 ; call edx   (vtable slot 59)
    void** vtbl = lift_field<void**>(self, 0x00);
    using VSlot59 = void (*)(void* self, void* arg);
    reinterpret_cast<VSlot59>(lift_field<void*>(vtbl, 0xec))(self, &mem_00B42218);

    // mov eax,[esi+4] ; mov edx,[0xb40640] ; mov eax,[eax+0xc]
    void* inner = lift_field<void*>(self, 0x04);
    uint32_t gval = static_cast<uint32_t>(mem_00B40640);
    void* callTarget = lift_field<void*>(inner, 0x0C);

    // push 0 ; lea ecx,[esi+4] ; lea edi,[esi+0xc] ; push edi ; push edx ; call eax
    void* edi = static_cast<char*>(self) + 0x0C; // lea edi,[esi+0xc] (address, not a load)
    using Call3 = uintptr_t (*)(void* thisPtr, uint32_t a, void* b, uint32_t c);
    uintptr_t eax = reinterpret_cast<Call3>(callTarget)(
        static_cast<char*>(self) + 0x04, gval, edi, 0u);

    // mov ecx,[esp+0x24] -> frame slot (see note in header comment)
    void* ecxSlot = frame_slot_0x24;

    // push eax ; push 0xb42218 ; call sub_00493E40   (self = ecxSlot)
    using FwdFn = uintptr_t (*)(void* self, uintptr_t arg1, void* arg2);
    uintptr_t esiVal = reinterpret_cast<FwdFn>(&ext_00493E40)(ecxSlot, eax, &mem_00B42218);
    void* peer = reinterpret_cast<void*>(esiVal);

    // push esi ; mov ecx,edi ; call sub_00528B90   (setPeerWithBackLink(this=self+0xc, peer))
    using SetPeerFn = void (*)(void* self, void* peer);
    reinterpret_cast<SetPeerFn>(&ext_00528B90)(edi, peer);

    // mov edx,[esi] ; mov eax,[edx+0x2c] ; push 1 ; push 0x80000 ; mov ecx,esi ; call eax
    void** peerVtbl = lift_field<void**>(peer, 0x00);
    using PeerSlot11 = void (*)(void* self, uint32_t a, uint32_t b);
    reinterpret_cast<PeerSlot11>(lift_field<void*>(peerVtbl, 0x2c))(peer, 0x00080000u, 1u);

    // SEH chain restore (mov fs:[0],ecx) dropped; return peer in eax.
    return peer;
}
} // namespace lift_005ABC10

// [0x005AAB90] NMData::RigNode::vfunc_21 (384 bytes)
namespace lift_005AAB90 {
// Known callee 0x004275E0: assignVirtualString (cdecl; copies the string returned by obj's vtable[2] into dst)
extern void __cdecl ext_004275E0(void* dst, void* obj);
// Known callee 0x00427640: checkStringEqualsConst (cdecl; two stack args, obj at +0x18c and out-bool pointer)
extern void __cdecl ext_00427640(void* obj, uint8_t* out);
// Callee 0x0058F630: NMData::CollisionModelDataBase::vfunc_21 (thiscall on the original this, one stack arg; result unused)
extern void __thiscall ext_0058F630(void* self, void* arg);
// Known callee 0x005AAA00: FindStringInTable (thiscall on this; key pointer; returns table index or 0)
extern int32_t __thiscall ext_005AAA00(void* self, const void* key);
// Known callee 0x0063EFE0: sub_0063EFE0 (thiscall on container; C-string name; returns item pointer or sentinel)
extern void* __thiscall ext_0063EFE0(void* self, const char* name);
// Known callee 0x0063F530: sub_0063F530 (thiscall on container; key, 0, 1; returns a sentinel-or-value code)
extern uint32_t __thiscall ext_0063F530(void* self, uintptr_t key, int a, int b);
// Known callee 0x0067EFD0: sub_0067EFD0 (cdecl; out slot and key; returns pointer to a float triple)
extern const float* __cdecl ext_0067EFD0(void* out, uintptr_t key);
// MSVC std::string destructor, reached through the import slot at 0x00924FF4
extern int mem_00924FF4;
// Data cells holding C-string / key pointers
extern int mem_00A9F6BC;
extern int mem_00A9F7F4;
extern int mem_00A9F1B8;
extern int mem_00A9ED1C;

// @name NMData::RigNode::vfunc_21
// @class NMData::RigNode
// @summary Looks up named items in the owning container, caches a table index at +0x154, and copies float triples into +0x158..+0x16C.
// @field NMData::RigNode +0x154 int32_t field_0x154
// @field NMData::RigNode +0x158 float field_0x158
// @field NMData::RigNode +0x15C float field_0x15C
// @field NMData::RigNode +0x160 float field_0x160
// @field NMData::RigNode +0x164 float field_0x164
// @field NMData::RigNode +0x168 float field_0x168
// @field NMData::RigNode +0x16C float field_0x16C
// @field NMData::RigNode +0x170 std::string field_0x170
// @field NMData::RigNode +0x18C uint8_t field_0x18C
void __thiscall fn_005AAB90(void* self, void* arg) {
    auto* base = static_cast<uint8_t*>(self);

    // Sentinel codes returned by sub_0063F530 are folded to one value before use.
    const auto normalize = [](uint32_t r) -> uint32_t {
        if (r == 0x00B53A34u || r == 0x00B53B30u || r == 0x00B53AB0u ||
            r == 0x00B53A70u || r == 0x00B53AF0u) {
            return 0x00B53B30u;
        }
        return r;
    };

    ext_0058F630(self, arg);

    // Item A: vtable[2] yields a temporary std::string (sret into tmp), whose address is the key.
    const char* nameA = reinterpret_cast<const char*>(static_cast<uintptr_t>(mem_00A9F6BC));
    void* itemA = ext_0063EFE0(arg, nameA);
    alignas(8) uint8_t tmp[0x1C];
    void** vtblA = *static_cast<void***>(itemA);
    auto vfnA = reinterpret_cast<void* (__thiscall*)(void*, void*)>(vtblA[2]);
    void* keyA = vfnA(itemA, tmp);
    lift_field<int32_t>(self, 0x154) = ext_005AAA00(self, keyA);

    // Destroy the temporary std::string through the import slot.
    using DtorFn = void(__thiscall*)(void*);
    reinterpret_cast<DtorFn>(static_cast<uintptr_t>(mem_00924FF4))(tmp);

    // Item C: assign its string into self+0x170.
    const char* nameC = reinterpret_cast<const char*>(static_cast<uintptr_t>(mem_00A9F7F4));
    void* itemC = ext_0063EFE0(arg, nameC);
    ext_004275E0(base + 0x170, itemC);

    // Item D: its address is stored in a slot that the string check writes a bool into.
    void* itemD = ext_0063EFE0(arg, reinterpret_cast<const char*>(static_cast<uintptr_t>(0x0095EF48u)));
    uint32_t slot = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(itemD));
    ext_00427640(base + 0x18C, reinterpret_cast<uint8_t*>(&slot));

    // First float triple -> +0x158, +0x15C, +0x160.
    const char* keyB = reinterpret_cast<const char*>(static_cast<uintptr_t>(mem_00A9F1B8));
    uint32_t r1 = normalize(ext_0063F530(arg, reinterpret_cast<uintptr_t>(keyB), 0, 1));
    uint32_t scratch1 = 0;
    const float* p1 = ext_0067EFD0(&scratch1, r1);
    lift_field<float>(self, 0x158) = p1[0];
    lift_field<float>(self, 0x15C) = p1[1];
    lift_field<float>(self, 0x160) = p1[2];

    // Second float triple -> +0x164, +0x168, +0x16C.
    uint32_t r2 = normalize(ext_0063F530(arg, static_cast<uintptr_t>(mem_00A9ED1C), 0, 1));
    uint32_t scratch2 = 0;
    const float* p2 = ext_0067EFD0(&scratch2, r2);
    lift_field<float>(self, 0x164) = p2[0];
    lift_field<float>(self, 0x168) = p2[1];
    lift_field<float>(self, 0x16C) = p2[2];
}
} // namespace lift_005AAB90

// [0x005AA6C0]
namespace lift_005AA6C0 {
// @name NMData::RigNode::vfunc_22
// @class NMData::RigNode
// @summary Serializes RigNode properties (collision model, type, flag, optional string, and two float/vec3 fields) into a child node.
// @field NMData::RigNode +0x00 void* vtable
// @field NMData::RigNode +0x154 int32_t field_0x154
// @field NMData::RigNode +0x158 float field_0x158
// @field NMData::RigNode +0x164 float field_0x164
// @field NMData::RigNode +0x170 uint8_t field_0x170[28]
// @field NMData::RigNode +0x18C uint8_t field_0x18C

void ext_00427550(void* self, const char* name);
void ext_0058F650(void* self, void* node);
void* ext_00640110(void* self, void* key);
void* ext_00640390(void* self, void* key, int32_t zero, void* data);
void* ext_006404E0(void* self, const char* name);
void ext_00640A80(void* child, uint8_t flag);
void ext_0067F040(void* node);

extern void* mem_00924FEC;
extern void* mem_00924FF0;
extern void* mem_00924FF4;
extern void* mem_00A9ED1C;
extern void* mem_00A9F1B8;
extern void* mem_00A9F6BC;
extern void* mem_00A9F7F4;

void* fn_005AA6C0(void* self, void* arg0) {
    void** vtable = lift_field<void**>(self, 0x00);
    auto vfunc_28 = reinterpret_cast<uint8_t (*)(void*)>(vtable[0x70 / 4]);
    void* edi = nullptr;

    if (vfunc_28(self)) {
        edi = arg0;
    } else {
        uint8_t temp_str[28]{};
        auto vfunc_8 = reinterpret_cast<void* (*)(void*, void*)>(vtable[0x20 / 4]);
        void* str_ptr = vfunc_8(self, temp_str);
        auto c_str_fn = reinterpret_cast<const char* (*)(void*)>(mem_00924FF0);
        const char* name = c_str_fn(str_ptr);
        edi = ext_006404E0(arg0, name);
        auto dtor_fn = reinterpret_cast<void (*)(void*)>(mem_00924FF4);
        dtor_fn(temp_str);
    }

    ext_0058F650(self, edi);

    int32_t idx = lift_field<int32_t>(self, 0x154);
    void* str_entry = reinterpret_cast<uint8_t*>(0x00B42600) + (idx * 28);
    void* child = ext_00640110(edi, mem_00A9F6BC);
    auto c_str_fn = reinterpret_cast<const char* (*)(void*)>(mem_00924FF0);
    ext_00427550(&child, c_str_fn(str_entry));

    void* flag_child = ext_00640110(edi, reinterpret_cast<void*>(0x0095EF48));
    ext_00640A80(flag_child, lift_field<uint8_t>(self, 0x18C));

    void* str_0x170 = static_cast<uint8_t*>(self) + 0x170;
    auto empty_fn = reinterpret_cast<uint8_t (*)(void*)>(mem_00924FEC);
    if (!empty_fn(str_0x170)) {
        void* opt_child = ext_00640110(edi, mem_00A9F7F4);
        ext_00427550(&opt_child, c_str_fn(str_0x170));
    }

    void* res1 = ext_00640390(edi, mem_00A9F1B8, 0, static_cast<uint8_t*>(self) + 0x158);
    ext_0067F040(res1);

    void* res2 = ext_00640390(edi, mem_00A9ED1C, 0, static_cast<uint8_t*>(self) + 0x164);
    ext_0067F040(res2);

    return edi;
}
} // namespace lift_005AA6C0
