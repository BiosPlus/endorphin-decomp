// Lifted C++ translation unit: lifted/classes/RuntimeEngine.cpp
#include "lift_compat.h"
// Known callee 0x0046F930: sub_0046F930 (65B). Signature not recovered; passed the adjusted this.
extern "C" void ext_0046F930(void* self);

// [0x0046FA30] RuntimeEngine::vfunc_0_off_C (11 bytes)
// @name RuntimeEngine::vfunc_0_off_C
// @class RuntimeEngine
// @summary Adjusts this from the +0xC (BaseEventListener) subobject back to RuntimeEngine and forwards to 0x0046F930.
void fn_0046FA30(void* self) {
    // Thunk: non-primary base subobject adjustment (this -= 12), then tail-forward.
    void* adjusted = static_cast<unsigned char*>(self) - 12;
    ext_0046F930(adjusted);
}

// [0x004757A0]
namespace lift_004757A0 {
// Known callees (signatures recovered from call sites):
//   0x005A6300: thiscall, ecx = obj+4 subobject, one stack arg (pointer to a void* slot).
//   0x0046F930: thiscall, ecx = adjusted this (RuntimeEngine).
extern void ext_005A6300(void* self, void** slot);
extern void ext_0046F930(void* self);

// @name RuntimeEngine::vfunc_0_off_8
// @class RuntimeEngine
// @summary Thunk from the +0x8 (SelectionListener) subobject: queries a1 via vtable slot 0x54; if it returns non-null, forwards obj+4 and a slot holding (this-8 ? this+4 : null) to 0x005A6300, then calls 0x0046F930 on this-8.
void fn_004757A0(void* self, void* a1) {
    // Original: esi = this (secondary subobject). The thunk adjusts this by -8 to reach RuntimeEngine.
    unsigned char* esi = static_cast<unsigned char*>(self);

    // Query a1 through its vtable slot at byte offset 0x54 (index 21).
    void** vtbl = *reinterpret_cast<void***>(a1);
    using QueryFn = void* (*)(void* self);
    void* obj = reinterpret_cast<QueryFn>(vtbl[0x54 / sizeof(void*)])(a1);
    if (obj == nullptr) {
        return;
    }

    // Adjusted RuntimeEngine pointer. When non-null, the slot receives the +0x0C (BaseEventListener) subobject.
    unsigned char* engine = esi - 8;
    void* slot = (engine != nullptr) ? static_cast<void*>(esi + 4) : nullptr;

    ext_005A6300(static_cast<unsigned char*>(obj) + 4, &slot);
    ext_0046F930(engine);
}
} // namespace lift_004757A0

// [0x00473E70] RuntimeEngine::vfunc_1 (1164 bytes)
namespace lift_00473E70 {
// Callees (original addresses). Signatures reflect the register/stack
// convention observed in the disassembly; bodies are not lifted here.
extern uint32_t ext_0063F530(void* self, uint32_t key, uint32_t a, uint32_t b); // thiscall, 3 stack args
extern uint32_t ext_0063EFE0(void* self, uint32_t key);                        // thiscall, 1 stack arg
extern void     ext_0067B930(void* self, uint32_t v);                          // thiscall, 1 stack arg
extern void     ext_0059B800(void* self);                                      // thiscall
extern void     ext_004BD0A0(void* self, uint32_t v);                          // thiscall, 1 stack arg
extern void     ext_00473BE0(void* self, void* c);                             // thiscall (RuntimeEngine), 1 stack arg
extern float    ext_0046F860(void* self);                                      // thiscall, returns float
extern void     ext_0065D0A0(void* self, float f);                             // thiscall, 1 stack arg
extern void     ext_0065D0F0(void* self, uint32_t a, uint32_t b);              // thiscall, 2 stack args
extern void     ext_0046C600(void* self, uint32_t v);                          // thiscall, 1 stack arg
extern void     ext_0053F5F0(void* a, void* b);                                // cdecl, 2 args (out-pointers)
extern void     ext_0046C0A0(void* a, void* b);                                // cdecl, 2 args (out-pointers)
extern void     ext_00427640(void* flag_out, void* value_in);                  // cdecl, 2 args

// Data constants (.data/.rdata slots holding key values).
extern uint32_t mem_00A9EE88;
extern uint32_t mem_00A9EF7C;
extern uint32_t mem_00A9F228;
extern uint32_t mem_00A9F688;
extern uint32_t mem_00A9F8A8;
extern uint32_t mem_00A9F9B4;
extern uint32_t mem_00A9F60C;
extern uint32_t mem_00A9EEB4;

namespace {

// Sentinel handles: any of these is normalized to kNone.
constexpr uint32_t kNone = 0x00B53B30u;
constexpr uint32_t kSentinels[] = {0x00B53A34u, 0x00B53B30u, 0x00B53AB0u,
                                   0x00B53A70u, 0x00B53AF0u};

bool is_sentinel(uint32_t v) {
    for (uint32_t s : kSentinels) {
        if (v == s) return true;
    }
    return false;
}

uint32_t norm(uint32_t v) { return is_sentinel(v) ? kNone : v; }

void* as_ptr(uint32_t v) {
    return reinterpret_cast<void*>(static_cast<uintptr_t>(v));
}

}  // namespace

// @name RuntimeEngine::vfunc_1
// @class RuntimeEngine
// @summary Refreshes per-frame state from the handle in `obj`: resolves normalized
//          handles, dispatches a virtual update on the embedded object at +0xD4, copies
//          an offset vector into the secondary state block, and conditionally updates
//          the flag at +0x12C of the object at +0xF8.
// @field RuntimeEngine +0x0CC void* field_0xCC
// @field RuntimeEngine +0x0D4 object field_0xD4
// @field RuntimeEngine +0x0F8 void* field_0xF8
// @field RuntimeEngine +0x0FC float[3] field_0xFC
// @field RuntimeEngine +0x174 uint32_t field_0x174
// @field RuntimeEngine +0x180 object field_0x180
// @field RuntimeEngine +0x288 object field_0x288
//
// Nested accesses (owner of +0xCC not identified; not emitted as @field):
//   A = *(self+0xCC); B = *(A+0x26C)
//   B+0x1FC uint32 (copied to self+0x174), B+0x231 byte, B+0x530 byte,
//   B+0x1B0 embedded object C; C+0x20 float, C+0x80 byte, C+0x82 byte,
//   C+0x04/+0x08/+0x0C floats (copied from self+0xFC).
void fn_00473E70(void* self, void* obj) {
    uint8_t* s = static_cast<uint8_t*>(self);
    uint32_t s14 = 0;  // stack temp [esp+0x14]
    uint32_t s18 = 0;  // stack temp [esp+0x18]
    uint32_t s20 = 0;  // stack temp [esp+0x20] (also used as a byte flag)

    // Resolve handle in obj for key M1, then dispatch slot 1 on embedded object at +0xD4.
    uint32_t v1 = norm(ext_0063F530(obj, mem_00A9EE88, 0, 1));
    {
        void** vtbl = *reinterpret_cast<void***>(s + 0xD4);
        reinterpret_cast<void (*)(void*, uint32_t)>(vtbl[1])(s + 0xD4, v1);
    }

    // Second chain: v2 = lookup(obj, M1); v3 = lookup(v2, M2).
    uint32_t v2 = norm(ext_0063F530(obj, mem_00A9EE88, 0, 1));
    uint32_t v3 = norm(ext_0063F530(as_ptr(v2), mem_00A9EF7C, 0, 1));
    ext_0067B930(s + 0xFC, v3);

    uint8_t* A = *reinterpret_cast<uint8_t**>(s + 0xCC);
    ext_0059B800(A);
    uint8_t* B = *reinterpret_cast<uint8_t**>(A + 0x26C);

    if (lift_field<uint8_t>(B, 0x530) == 0) {
        uint32_t v4 = norm(ext_0063F530(obj, mem_00A9EE88, 0, 1));
        ext_004BD0A0(B + 0x1B0, v4);
    }

    uint8_t* C = B + 0x1B0;
    ext_00473BE0(self, C);

    if (lift_field<uint8_t>(C, 0x80) == 0) {
        lift_field<float>(C, 0x04) = lift_field<float>(s, 0xFC);
        lift_field<float>(C, 0x08) = lift_field<float>(s, 0x100);
        lift_field<float>(C, 0x0C) = lift_field<float>(s, 0x104);
    }
    if (lift_field<uint8_t>(C, 0x82) == 0) {
        lift_field<float>(C, 0x20) = ext_0046F860(self);
    }

    uint32_t v5 = norm(ext_0063F530(obj, mem_00A9F228, 0, 1));

    lift_field<uint32_t>(s, 0x174) = lift_field<uint32_t>(B, 0x1FC);

    // s20 = lookup(v5, M4); push to 53F5F0 along with the field at +0x288.
    s20 = ext_0063EFE0(as_ptr(v5), mem_00A9F688);
    ext_0053F5F0(s + 0x288, &s20);

    // s20 = lookup(v5, M5); out-value through 46C0A0 into s14.
    s20 = ext_0063EFE0(as_ptr(v5), mem_00A9F8A8);
    ext_0046C0A0(&s14, &s20);

    B = *reinterpret_cast<uint8_t**>(A + 0x26C);
    if (lift_field<uint8_t>(B, 0x231) == 0) {
        ext_0065D0A0(lift_field<void*>(s, 0xF8), std::bit_cast<float>(s14));
    }

    uint32_t esi = norm(ext_0063F530(as_ptr(v5), 0x0093BD80u, 0, 1));
    if (!is_sentinel(esi)) {
        s20 = 0;
        uint32_t r3 = ext_0063EFE0(as_ptr(esi), 0x0093BD70u);
        if (!is_sentinel(r3)) {
            uint32_t r4 = ext_0063EFE0(as_ptr(esi), 0x0093BD70u);
            s14 = r4;
            ext_00427640(&s20, &s14);
        }

        void* f8 = lift_field<void*>(s, 0xF8);
        lift_field<uint8_t>(f8, 0x12C) = static_cast<uint8_t>(s20);

        int32_t ebx = 1;
        uint32_t edi = v5;
        s20 = 1;
        s14 = 0x7FFFFFFFu;
        uint32_t r5 = ext_0063EFE0(as_ptr(esi), mem_00A9F9B4);
        if (!is_sentinel(r5)) {
            uint32_t r6 = ext_0063EFE0(as_ptr(esi), mem_00A9F9B4);
            s18 = r6;
            ext_0053F5F0(&s20, &s18);
            ebx = static_cast<int32_t>(s20);
        }

        uint32_t r7 = ext_0063EFE0(as_ptr(esi), mem_00A9F60C);
        if (!is_sentinel(r7)) {
            s20 = ext_0063EFE0(as_ptr(esi), mem_00A9F60C);
            ext_0053F5F0(&s14, &s20);
            edi = s14;
        }
        // Signed clamp: edi = max(edi, ebx), then forward (ebx, edi) to f8.
        if (static_cast<int32_t>(edi) < ebx) {
            edi = static_cast<uint32_t>(ebx);
        }
        ext_0065D0F0(f8, static_cast<uint32_t>(ebx), edi);
    }

    uint32_t r9 = norm(ext_0063F530(as_ptr(v5), mem_00A9EEB4, 0, 1));
    if (!is_sentinel(r9)) {
        ext_0046C600(s + 0x180, r9);
    }
}
} // namespace lift_00473E70
