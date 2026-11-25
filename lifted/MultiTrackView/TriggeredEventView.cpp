// Lifted C++ translation unit: lifted/MultiTrackView/TriggeredEventView.cpp
#include "lift_compat.h"
#include <new>
#include <string>
// Callee sub_0043DCF0 (99B): single stack arg (-1), no caller cleanup, returns a pointer in eax.
extern "C" void* ext_0043DCF0(int32_t arg);

extern "C" void* ext_0043DCF0(int32_t arg);
// @name MultiTrackView::TriggeredEventView::GetTypeName
// @class MultiTrackView::TriggeredEventView
// @summary Constructs std::string "TriggeredEventView" in the caller's return slot and returns that slot (self is unused).
// @field MultiTrackView::TriggeredEventView +0x00 (unused) self is not dereferenced
void* fn_004602B0(void* self, void* ret_slot) {
    (void)self;
    std::string* out = static_cast<std::string*>(ret_slot);
    new (out) std::string("TriggeredEventView");
    return out;
}
// Callees use MSVC thiscall (ecx = member object, one stack argument).
// Portable form: the object is passed explicitly as the first parameter.
extern "C" void ext_00460540(void* self, void* arg);
// Known callee 0x006A5E72: thunk_MFC80_ord_6090 (IAT jump thunk forwarding to MFC80!ord_6090.)
extern "C" void ext_006A5E72(void* self, uint32_t arg);

// Portable form: the object is passed explicitly as the first parameter.
extern "C" void ext_00460540(void* self, void* arg);
// Known callee 0x006A5E72: thunk_MFC80_ord_6090 (IAT jump thunk forwarding to MFC80!ord_6090.)
extern "C" void ext_006A5E72(void* self, uint32_t arg);
// @field MultiTrackView::TriggeredEventView +0x00 (unused) self is not dereferenced
void fn_0045D8B0(void* self, void* ret_slot) {
    (void)self;
    void* obj = ext_0043DCF0(-1);
    int32_t value = lift_field<int32_t>(obj, 0x4C);
    lift_field<uint32_t>(ret_slot, 0) = 0u;
    lift_field<int32_t>(ret_slot, 4) = value + 9;
}

// [0x0045E470] MultiTrackView::TriggeredEventView::vfunc_80 (36 bytes)
// @name MultiTrackView::TriggeredEventView::ForwardToMemberWithArg
// @class MultiTrackView::TriggeredEventView
// @summary Forwards the argument to the member object at +0x2D0 via ext_00460540, then calls ext_006A5E72 on that member with 5.
// @field MultiTrackView::TriggeredEventView +0x2D0 void* field_0x2D0
void fn_0045E470(void* self, void* arg) {
    void* member = lift_field<void*>(self, 0x2D0);
    ext_00460540(member, arg);
    member = lift_field<void*>(self, 0x2D0);
    ext_006A5E72(member, 5u);
}

// [0x0043CAB0] MultiTrackView::TriggeredEventView::vfunc_69 (66 bytes)
namespace lift_0043CAB0 {
extern void ext_0041C710();
// Known callee 0x006A5DB2: thunk_MFC80_ord_5073 (IAT jump thunk forwarding to MFC80!ord_5073.)
extern void ext_006A5DB2();

// @name MultiTrackView::TriggeredEventView::vfunc_69
// @class MultiTrackView::TriggeredEventView
// @summary If a1 == 0x2A3 and the sub-object at +0x64 passes ext_0041C710, return 1; otherwise forward all four args to the MFC80 base handler.
// @field MultiTrackView::TriggeredEventView +0x64 uint8_t field_0x64
uint32_t fn_0043CAB0(void* self, uint32_t a1, uint32_t a2, uint32_t a3, uint32_t a4) {
    using SubCheckFn = uint8_t (*)(void*);
    using ForwardFn = uint32_t (*)(void*, uint32_t, uint32_t, uint32_t, uint32_t);

    if (a1 == 0x2A3) {
        void* sub = reinterpret_cast<uint8_t*>(self) + 0x64;
        if (reinterpret_cast<SubCheckFn>(ext_0041C710)(sub) != 0) {
            return 1;
        }
    }

    return reinterpret_cast<ForwardFn>(ext_006A5DB2)(self, a1, a2, a3, a4);
}
} // namespace lift_0043CAB0

// [0x0045DAC0] MultiTrackView::TriggeredEventView::vfunc_85 (51 bytes)
namespace lift_0045DAC0 {
// Global-value lookup: returns the int32 stored in mem_00AD7CD8.
extern int32_t ext_00468180(void);
// Nested-field lookup: returns a 32-bit object pointer (this+0x18 -> +0xC chain).
extern uint32_t ext_00468660(uint32_t this_ptr);
// Forwarding call: thiscall on the object from ext_00468180(), one int32 stack arg.
extern void ext_004686A0(void* this_ptr, int32_t value);

// @name MultiTrackView::TriggeredEventView::vfunc_85
// @class MultiTrackView::TriggeredEventView
// @summary Queries an object's virtual slot, adds a signed 16-bit argument, clamps the sum at zero, and forwards it to another global-derived object.
void fn_0045DAC0(void* self, int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3) {
    (void)self;
    (void)arg0;
    (void)arg2;
    (void)arg3;

    // ecx = ext_00468180(); obj = ext_00468660(ecx)
    const uint32_t global_val = static_cast<uint32_t>(ext_00468180());
    const uint32_t obj_addr = ext_00468660(global_val);
    void* obj = reinterpret_cast<void*>(static_cast<uintptr_t>(obj_addr));

    // Virtual call through vtable slot at byte offset 0x9C (32-bit vtable => index 39).
    void** vtable = *reinterpret_cast<void***>(obj);
    constexpr std::size_t kSlotIndex = 0x9C / 4;
    using QueryFn = int32_t (*)(void*);
    const int32_t queried = reinterpret_cast<QueryFn>(vtable[kSlotIndex])(obj);

    // Sign-extend the low 16 bits of the second stack argument and add (wrapping add).
    const int32_t delta = static_cast<int32_t>(static_cast<int16_t>(arg1));
    int32_t sum = static_cast<int32_t>(static_cast<uint32_t>(queried) + static_cast<uint32_t>(delta));

    // Clamp negative results to zero.
    if (sum < 0) {
        sum = 0;
    }

    // Forward to the object returned by a second ext_00468180() call.
    const uint32_t target_addr = static_cast<uint32_t>(ext_00468180());
    ext_004686A0(reinterpret_cast<void*>(static_cast<uintptr_t>(target_addr)), sum);
}
} // namespace lift_0045DAC0

// [0x004602B0] MultiTrackView::TriggeredEventView::vfunc_6_off_254 (34 bytes)
namespace lift_004602B0 {
extern uint32_t mem_00924FE4;     // IAT slot: std::basic_string<char>::basic_string(const char*, const allocator&)
extern const char mem_009381E8[]; // .rdata C-string literal passed to the string constructor

// @name MultiTrackView::TriggeredEventView::vfunc_6_off_254
// @class MultiTrackView::TriggeredEventView
// @summary Constructs a std::string from the literal at 0x009381E8 in the caller-supplied out object and returns out; the vtable this pointer is unused.
void* __stdcall fn_004602B0(void* out) {
    using StringCtorFn = void(__thiscall*)(void* self, const char* str, const void* alloc);
    auto ctor = reinterpret_cast<StringCtorFn>(static_cast<uintptr_t>(mem_00924FE4));
    ctor(out, mem_009381E8, nullptr);
    return out;
}
} // namespace lift_004602B0
