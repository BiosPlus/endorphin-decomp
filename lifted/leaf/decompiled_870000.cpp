// Lifted C++ translation unit: lifted/leaf/decompiled_870000.cpp
#include "lift_compat.h"
#include <new>
#include <string>
#include <cstring>

#include <string>
#include <cstring>
// @summary Epilogue fragment: pops saved edi, esi and ebx from the stack; no portable C++ equivalent for the register restore, so the body is empty.
void fn_00870E86(void* self) {
    // Intentionally empty. The three instructions are `pop edi; pop esi; pop ebx`,
    // which restore callee-saved registers from the caller's frame. They have no
    // observable effect expressible in portable C++; the frame they belong to is
    // not part of this 3-byte range.
    (void)self;
}

// [0x008703F0] sub_008703F0 (111 bytes)
namespace lift_008703F0 {
// @name sub_008703F0
// @summary Auto-lifted identical-shape clone of 0x0049FC80 (NMData::State::vfunc_7_off_10).
namespace lift_0049FC80 {
// @name NMData::State::vfunc_7_off_10
// @class NMData::State
// @summary Iterates over vector at +0x10C, calls vfunc +0x24 on each element, and passes result to sub_0040ECB0
// @field NMData::State +0x10C void* field_0x10C


extern void __thiscall ext_0040ECB0(uint32_t self, uint32_t arg);

void __thiscall fn_008703F0(uint32_t self, uint32_t arg0) {
    uintptr_t vec = (uintptr_t)self + 0x4;
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
} // namespace lift_008703F0

// [0x008727FB]
namespace lift_008727FB {
extern uint8_t* ext_006A5EDE(void);
extern int (*mem_009251B4)(int);

// @name initAppLocaleAndFlags
// @summary Sets app state fields from arguments, optionally resets multibyte codepage to -3, and returns 1
// @field AppState +0x14 uint8_t field_0x14
// @field AppState +0x44 uint32_t field_0x44
extern int __stdcall fn_008727FB(uint32_t arg1, uint32_t arg2) {
    uint8_t* app = ext_006A5EDE();
    *(uint8_t*)(app + 0x14) = (uint8_t)(arg1 & 0xFFu);
    *(uint32_t*)(app + 0x44) = arg2;
    if (arg1 == 0) {
        mem_009251B4(-3);
    }
    return 1;
}
} // namespace lift_008727FB

// [0x00870320]
namespace lift_00870320 {
DWORD ext_0049D360(void* arg);
void ext_0055DA20(DWORD* self, DWORD a, DWORD b);

// @name initPairWithMemberLookup
// @summary Calls ext_0049D360 on (this + 4) and initializes outPair with (result, this + 4), returning outPair.
// @field Unknown +0x04 DWORD field_0x04
DWORD* fn_00870320(void* self, DWORD* outPair) {
    DWORD* member = reinterpret_cast<DWORD*>(reinterpret_cast<BYTE*>(self) + 4);
    DWORD res = ext_0049D360(member);
    ext_0055DA20(outPair, res, static_cast<DWORD>(reinterpret_cast<uintptr_t>(member)));
    return outPair;
}
} // namespace lift_00870320

// [0x00871890] sub_00871890 (39 bytes)
namespace lift_00871890 {
// @name copyConstructVtable20
// @summary Copy-constructs a 20-byte object: installs vtable 0x0099F138 at +0x00, copies +0x04..+0x10 from source, returns this.
// @field object +0x00 void* vtable
// @field object +0x04 uint32_t field_0x04
// @field object +0x08 uint32_t field_0x08
// @field object +0x0C uint32_t field_0x0C
// @field object +0x10 uint32_t field_0x10
void* fn_00871890(void* self, const void* src) {
    lift_field<uint32_t>(self, 0x00) = 0x0099F138u;
    lift_field<uint32_t>(self, 0x04) = lift_field<const uint32_t>(src, 0x04);
    lift_field<uint32_t>(self, 0x08) = lift_field<const uint32_t>(src, 0x08);
    lift_field<uint32_t>(self, 0x0C) = lift_field<const uint32_t>(src, 0x0C);
    lift_field<uint32_t>(self, 0x10) = lift_field<const uint32_t>(src, 0x10);
    return self;
}
} // namespace lift_00871890

// [0x00870F40]
namespace lift_00870F40 {
// @name StreamReader::matchString
// @class StreamReader
// @summary Matches a null-terminated string against the stream, restoring state on mismatch.
// @field StreamReader +0x08 uint32_t field_0x08
// @field StreamReader +0x10 uint32_t field_0x10
// @field StreamReader +0x14 uint32_t field_0x14


extern uint8_t __thiscall ext_00870E90(void* self);

bool __thiscall sub_00870F40(void* self, const char* str) {
    auto* base = static_cast<uint8_t*>(self);
    uint32_t saved_0x10 = *reinterpret_cast<uint32_t*>(base + 0x10);
    uint32_t saved_0x14 = *reinterpret_cast<uint32_t*>(base + 0x14);
    uint32_t saved_0x08 = *reinterpret_cast<uint32_t*>(base + 0x08);

    while (*str != '\0') {
        uint8_t ch = ext_00870E90(self);
        if (ch != static_cast<uint8_t>(*str)) {
            *reinterpret_cast<uint32_t*>(base + 0x08) = saved_0x08;
            *reinterpret_cast<uint32_t*>(base + 0x14) = saved_0x14;
            *reinterpret_cast<uint32_t*>(base + 0x10) = saved_0x10;
            return false;
        }
        ++str;
    }
    return true;
}
} // namespace lift_00870F40

// [0x00870E40] sub_00870E40 (70 bytes)
namespace lift_00870E40 {
// Known callee 0x0063E960: sub_0063E960_ctor (initializes vtable at +0x00 to 0x0097CC34 and returns this).
extern void* ext_0063E960(void* this_ptr);
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk to MSVCR80!_CxxThrowException; never returns).
extern void ext_006A6DD2(void* exception_object, uint32_t throw_info);

// @name sub_00870E40
// @summary Builds a 0x14-byte exception object from this-fields +0x10/+0x08/+0x04/+0x14 and a stack argument, then throws it.
// @field self +0x04 uint32_t field_0x04
// @field self +0x08 uint32_t field_0x08
// @field self +0x10 uint32_t field_0x10
// @field self +0x14 uint32_t field_0x14
void fn_00870E40(void* self, uint32_t arg1) {
    // Read this-fields before the constructor call, matching the original order.
    const uint32_t field_0x10 = lift_field<uint32_t>(self, 0x10);
    const uint32_t size_delta = lift_field<uint32_t>(self, 0x08) - lift_field<uint32_t>(self, 0x04);
    const uint32_t field_0x14 = lift_field<uint32_t>(self, 0x14);

    // Exception object storage (MSVC layout: vtable, arg1, field_0x10, field_0x14, size_delta).
    alignas(4) uint8_t exc[0x14] = {};
    ext_0063E960(exc);

    lift_field<uint32_t>(exc, 0x00) = 0x0099F138;   // exception type vtable/RTTI tag
    lift_field<uint32_t>(exc, 0x04) = arg1;
    lift_field<uint32_t>(exc, 0x08) = field_0x10;
    lift_field<uint32_t>(exc, 0x0C) = field_0x14;
    lift_field<uint32_t>(exc, 0x10) = size_delta;

    ext_006A6DD2(exc, 0x00A2572C);
}
} // namespace lift_00870E40

// [0x00870EF0]
namespace lift_00870EF0 {
// @name TextCursor::StepBackOneLine_00870EF0
// @class TextCursor
// @summary Steps a backward text cursor to the start of the previous line (LF or CRLF terminated), tracking a line counter; resets to buffer start and line state when the start is reached.
// @field TextCursor +0x04 uint32_t field_0x04
// @field TextCursor +0x08 uint32_t cursor
// @field TextCursor +0x0C uint32_t field_0x0C
// @field TextCursor +0x10 uint32_t field_0x10
// @field TextCursor +0x14 uint32_t field_0x14
// @field TextCursor +0x18 uint32_t field_0x18
namespace {
inline uint8_t load_u8(uint32_t addr) {
    return *reinterpret_cast<const uint8_t*>(static_cast<uintptr_t>(addr));
}
}  // namespace

void fn_00870EF0(void* self) {
    uint32_t& cursor = lift_field<uint32_t>(self, 0x08);
    const uint32_t limit = lift_field<uint32_t>(self, 0x0C);
    if (cursor > limit) {
        return;
    }

    const uint32_t begin = lift_field<uint32_t>(self, 0x04);
    if (static_cast<uint32_t>(cursor - 1) < begin) {
        // Already at (or before) the buffer start: reset cursor and line state.
        cursor = begin;
        lift_field<uint32_t>(self, 0x18) = 1;
        lift_field<uint32_t>(self, 0x10) = 1;
        lift_field<uint32_t>(self, 0x14) = 1;
        return;
    }

    cursor -= 1;
    if (load_u8(cursor) == 0x0A) {  // LF
        if (cursor > begin && load_u8(cursor - 1) == 0x0D) {  // CR before LF
            cursor -= 1;
        }
        lift_field<uint32_t>(self, 0x10) -= 1;
    }
    lift_field<uint32_t>(self, 0x14) = lift_field<uint32_t>(self, 0x18);
}
} // namespace lift_00870EF0

// [0x008710B0] sub_008710B0 (61 bytes)
namespace lift_008710B0 {
// Returns the character under the backward cursor (in AL) and advances it.
extern uint8_t ext_00870E90();
// Known callee 0x00870EF0: TextCursor::StepBackOneLine_00870EF0 (Steps a backward text cursor to the start of the previous line (LF or CRLF terminated), tracking a line counter; resets to buffer start and line state when the start is reached.)
extern void ext_00870EF0();

static inline bool is_text_whitespace(uint8_t c) {
    return c == 0x20 || c == 0x09 || c == 0x0D || c == 0x0A;  // space, tab, CR, LF
}

// @name TextCursor::SkipBlankLinesBack_008710B0
// @class TextCursor
// @summary Reads backward past whitespace; if the first character read is non-whitespace, steps back one line and returns 0, otherwise skips the remaining whitespace, steps back one line and returns 1.
uint8_t fn_008710B0(void* self) {
    (void)self;
    uint8_t c = ext_00870E90();
    if (!is_text_whitespace(c)) {
        ext_00870EF0();
        return 0;
    }
    do {
        c = ext_00870E90();
    } while (is_text_whitespace(c));
    ext_00870EF0();
    return 1;
}
} // namespace lift_008710B0
