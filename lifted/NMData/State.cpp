// Lifted C++ translation unit: lifted/NMData/State.cpp
#include "lift_compat.h"
#include <new>
#include <string>
extern "C" const char* mem_00AA237C;
#include <cstring>

// [0x0049FA70] NMData::State::vfunc_6 (35 bytes)
// @name NMData::State::vfunc_6
// @class NMData::State
// @summary Constructs a std::string in the caller-supplied buffer from the literal pointer in mem_00AA237C.
void fn_0049FA70(void* self) {
    new (self) std::string(mem_00AA237C);
}

// [0x0049FAC0] NMData::State::vfunc_2_off_8 (42 bytes)
// @name NMData::State::vfunc_2_off_8
// @class NMData::State
// @summary Copies the four dwords at this+0xE0..0xEC into the caller-supplied 16-byte output buffer.
// @field NMData::State +0xE0 float field_0xE0
// @field NMData::State +0xE4 float field_0xE4
// @field NMData::State +0xE8 float field_0xE8
// @field NMData::State +0xEC float field_0xEC
void fn_0049FAC0(void* self, void* out) {
    std::memcpy(out, static_cast<const uint8_t*>(self) + 0xE0, 16);
}

// [0x0049AF70] NMData::State::vfunc_10_off_8 (84 bytes)
// @name NMData::State::vfunc_10_off_8
// @class NMData::State
// @summary Returns true if the 2D point pt[0..1] lies inside the box (e0,e4)-(e8,ec) stored in this.
// @field NMData::State +0xE0 float field_0xE0
// @field NMData::State +0xE4 float field_0xE4
// @field NMData::State +0xE8 float field_0xE8
// @field NMData::State +0xEC float field_0xEC
bool fn_0049AF70(void* self, const float* pt) {
    const float x = pt[0];
    const float y = pt[1];
    const float minX = lift_field<float>(self, 0xE0);
    const float minY = lift_field<float>(self, 0xE4);
    const float maxX = lift_field<float>(self, 0xE8);
    const float maxY = lift_field<float>(self, 0xEC);
    // Ordered comparisons: NaN inputs yield false, matching the original fcom checks.
    return minX <= x && x <= maxX && minY <= y && y <= maxY;
}

// [0x0049FCF0]
namespace lift_0049FCF0 {
extern void __thiscall ext_0040ECB0(void* self, uint32_t value);

// @name NMData::State::vfunc_6_off_10
// @class NMData::State
// @summary Walks the circular intrusive list headed at this+0xD0; for each node whose byte at +0x6D is zero, calls virtual slot 1 on the node's embedded object at +0x10 and passes the result to ext_0040ECB0(arg, result).
// @field NMData::State +0xD0 void* list_sentinel
// @field ListNode +0x00 ListNode* next
// @field ListNode +0x10 void* embedded_obj
// @field ListNode +0x6D uint8_t skip_flag
extern void __thiscall fn_0049FCF0(void* self, void* arg) {
    auto* const sentinel = *reinterpret_cast<uint8_t**>(reinterpret_cast<uint8_t*>(self) + 0xD0);
    auto* node = *reinterpret_cast<uint8_t**>(sentinel);

    while (node != sentinel) {
        if (*(node + 0x6D) == 0) {
            void* obj = node + 0x10;
            void** vtbl = *reinterpret_cast<void***>(obj);
            using SlotFn = uint32_t(__thiscall*)(void*);
            const uint32_t value = reinterpret_cast<SlotFn>(vtbl[1])(obj);
            ext_0040ECB0(arg, value);
        }
        node = *reinterpret_cast<uint8_t**>(node);
    }
}
} // namespace lift_0049FCF0

// [0x0049FC80]
namespace lift_0049FC80 {
// @name NMData::State::vfunc_7_off_10
// @class NMData::State
// @summary Iterates over vector at +0x10C, calls vfunc +0x24 on each element, and passes result to sub_0040ECB0
// @field NMData::State +0x10C void* field_0x10C


extern void __thiscall ext_0040ECB0(uint32_t self, uint32_t arg);

void __thiscall fn_0049FC80(uint32_t self, uint32_t arg0) {
    uintptr_t vec = (uintptr_t)self + 0x10C;
    uint32_t it = *(uint32_t*)(vec + 0x4);
    while (it != *(uint32_t*)(vec + 0x8)) {
        uint32_t elem = *(uint32_t*)(uintptr_t)it;
        uint32_t vtable = *(uint32_t*)(uintptr_t)elem;
        typedef uint32_t (__thiscall *vfunc_t)(uint32_t);
        vfunc_t vfunc = (vfunc_t)(uintptr_t)(*(uint32_t*)(uintptr_t)(vtable + 0x24));
        uint32_t res = vfunc(elem);
        ext_0040ECB0(arg0, res);
        it += 4;
    }
}
} // namespace lift_0049FC80

// [0x0049E000]
namespace lift_0049E000 {
// @name NMData::State::vfunc_21_off_8
// @class NMData::State
// @summary Checks whether the rectangle returned for the element at +0xE0 has positive width and height.
// @field NMData::State +0xE0 float field_0xE0


extern void* __thiscall ext_00498B60(void* self, void* out_rect, void* arg0);

uint8_t __thiscall fn_0049E000(void* self, void* arg0) {
    float buf[4];
    float* rect = static_cast<float*>(ext_00498B60(static_cast<uint8_t*>(self) + 0xE0, buf, arg0));
    float width = rect[2] - rect[0];
    if (width > 0.0f) {
        float height = rect[3] - rect[1];
        if (height > 0.0f) {
            return 1;
        }
    }
    return 0;
}
} // namespace lift_0049E000

// [0x0049ABE0] NMData::State::vfunc_35_off_8 (56 bytes)
namespace lift_0049ABE0 {
// Known callee 0x006A6E9E: thunk_MSVCR80___RTDynamicCast (IAT jump thunk forwarding to MSVCR80!__RTDynamicCast.)
// Signature: void* __RTDynamicCast(void* input, int srcIsPolymorphic, void* srcType, void* targetType, int isReference)
extern void* ext_006A6E9E(void* input, int srcIsPolymorphic, void* srcType, void* targetType, int isReference);

// @name NMData::State::castArg2AndInvokeVSlot10
// @class NMData::State
// @summary Dynamic-casts arg2 to a polymorphic target type; if non-null, calls vtable slot 10 on it with (arg1, this-8).
void fn_0049ABE0(void* self, DWORD arg1, DWORD arg2) {
    void* adjusted = static_cast<unsigned char*>(self) - 8;
    void* casted = ext_006A6E9E(reinterpret_cast<void*>(static_cast<uintptr_t>(arg2)), 0,
                                reinterpret_cast<void*>(static_cast<uintptr_t>(0xA303F4u)),
                                reinterpret_cast<void*>(static_cast<uintptr_t>(0xA30418u)), 0);
    if (casted == nullptr) {
        return;
    }
    void* const* vtbl = *reinterpret_cast<void* const* const*>(casted);
    auto slot10 = reinterpret_cast<void(__thiscall*)(void*, DWORD, void*)>(vtbl[10]);
    slot10(casted, arg1, adjusted);
}
} // namespace lift_0049ABE0

// [0x0049DF50] NMData::State::vfunc_14_off_10 (77 bytes)
namespace lift_0049DF50 {
// Known callee 0x0046F7D0: sub_00467320 (Auto-lifted identical-shape clone of 0x00437DE0 (callSub00437DC0WithOne).)
extern void ext_0046F7D0(DWORD arg);
// Known callee 0x0049D360: sub_0049D360 (35B), takes one stack arg (callee pops), returns in EAX.
extern DWORD ext_0049D360(DWORD arg);
// Known callee 0x0055DA20: initDwordPair (Stores two stack-passed DWORDs into the object at ECX and returns that object pointer (callee pops 8 bytes).)
extern void* ext_0055DA20(void* self, DWORD a, DWORD b);

// @name NMData::State::vfunc_14_off_10
// @class NMData::State
// @summary Returns arg1 after forwarding it to 0x0046F7D0 unless byte +0x54 is zero and arg2 == 0x1B3, in which case it initializes the sub-object at +0x10C and returns arg2.
// @field NMData::State +0x54 BYTE field_0x54
// @field NMData::State +0x10C void* field_0x10C
DWORD fn_0049DF50(void* self, DWORD arg1, DWORD arg2) {
    if (lift_field<uint8_t>(self, 0x54) == 0 && arg2 == 0x1B3) {
        // Address of this+0x10C is passed to 0x0049D360.
        DWORD sub = static_cast<DWORD>(reinterpret_cast<uintptr_t>(
            reinterpret_cast<uint8_t*>(self) + 0x10C));
        DWORD t = ext_0049D360(sub);

        // Original pushes eax and the caller's saved ESI as the two stack DWORDs.
        // The caller's ESI is not recoverable here; 0 is a placeholder.
        ext_0055DA20(reinterpret_cast<void*>(static_cast<uintptr_t>(arg2)), t, 0);
        return arg2;
    }

    ext_0046F7D0(arg1);
    return arg1;
}
} // namespace lift_0049DF50
