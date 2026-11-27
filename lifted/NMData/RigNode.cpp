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
