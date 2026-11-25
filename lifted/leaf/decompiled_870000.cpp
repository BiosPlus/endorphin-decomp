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
#include <cstdint>

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

// [0x00871090] sub_00871090 (26 bytes)
namespace lift_00871090 {
// Known callee 0x00870E90: reads/advances one character from the text cursor (returns it in al).
extern uint8_t __thiscall ext_00870E90(void* self);
// Known callee 0x00870EF0: TextCursor::StepBackOneLine_00870EF0 (Steps a backward text cursor to the start of the previous line (LF or CRLF terminated), tracking a line counter; resets to buffer start and line state when the start is reached.)
extern void __thiscall ext_00870EF0(void* self);

// @name TextCursor::ReadCharOrStepBack_00871090
// @class TextCursor
// @summary Reads one character; returns true if it equals the expected byte, otherwise steps the cursor back one line and returns false.
bool __thiscall fn_00871090(void* self, uint8_t expected) {
    const uint8_t ch = ext_00870E90(self);
    if (ch == expected) {
        return true;
    }
    ext_00870EF0(self);
    return false;
}
} // namespace lift_00871090

// [0x00870F90] sub_00870F90 (74 bytes)
namespace lift_00870F90 {
// Known callee 0x00870E90: sub_00870E90 (advances the text cursor; returns the next byte in AL)
extern uint8_t ext_00870E90();
// Known callee 0x00870EF0: TextCursor::StepBackOneLine_00870EF0 (Steps a backward text cursor to the start of the previous line (LF or CRLF terminated), tracking a line counter; resets to buffer start and line state when the start is reached.)
extern void ext_00870EF0();

// @name TextCursor::ReadDecimalUInt_00870F90
// @summary Reads ASCII decimal digits from the text cursor into the uint32 at out_addr; returns 1 after stepping back one line at the first non-digit, or 0 (no write) if the first byte is not a digit.
uint8_t fn_00870F90(uint32_t out_addr) {
    auto* out = reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(out_addr));

    uint8_t ch = ext_00870E90();
    if (static_cast<uint8_t>(ch - '0') > 9) {
        return 0;
    }

    *out = 0;
    while (static_cast<uint8_t>(ch - '0') <= 9) {
        uint32_t digit = static_cast<uint32_t>(ch - '0');
        *out = *out * 10u + digit;
        ch = ext_00870E90();
    }

    ext_00870EF0();
    return 1;
}
} // namespace lift_00870F90

// [0x008710F0]
namespace lift_008710F0 {
// @name TextCursor::ConsumeEqualsOrRewind_008710F0
// @class TextCursor
// @summary Skips blank lines backward, then consumes '=' if present (skipping blanks again) or restores the saved cursor fields and returns false.
// @field TextCursor +0x08 uint32_t field_0x08
// @field TextCursor +0x10 uint32_t field_0x10
// @field TextCursor +0x14 uint32_t field_0x14

bool ext_008710B0(void* self);
bool ext_00871090(void* self, uint8_t expected);

bool fn_008710F0(void* self) {
    uint8_t* base = static_cast<uint8_t*>(self);
    uint32_t saved_14 = *reinterpret_cast<uint32_t*>(base + 0x14);
    uint32_t saved_08 = *reinterpret_cast<uint32_t*>(base + 0x08);
    uint32_t saved_10 = *reinterpret_cast<uint32_t*>(base + 0x10);

    ext_008710B0(self);

    if (ext_00871090(self, '=')) {
        ext_008710B0(self);
        return true;
    }

    *reinterpret_cast<uint32_t*>(base + 0x10) = saved_10;
    *reinterpret_cast<uint32_t*>(base + 0x08) = saved_08;
    *reinterpret_cast<uint32_t*>(base + 0x14) = saved_14;
    return false;
}
} // namespace lift_008710F0

// [0x008718C0] sub_008718C0 (76 bytes)
namespace lift_008718C0 {
// Known callee 0x00870E40: sub_00870E40 (Builds a 0x14-byte exception object from this-fields +0x10/+0x08/+0x04/+0x14 and a stack argument, then throws it.)
extern void ext_00870E40(void* self, uint32_t arg1);
// Known callee 0x00870F40: StreamReader::matchString (Matches a null-terminated string against the stream, restoring state on mismatch.)
extern bool ext_00870F40(void* self, const char* str);
// Known callee 0x008710F0: TextCursor::ConsumeEqualsOrRewind_008710F0 (Skips blank lines backward, then consumes '=' if present (skipping blanks again) or restores the saved cursor fields and returns false.)
extern bool ext_008710F0(void* self);
// Known callee 0x008710B0: TextCursor::SkipBlankLinesBack_008710B0 (Reads backward past whitespace; if the first character read is non-whitespace, steps back one line and returns 0, otherwise skips the remaining whitespace, steps back one line and returns 1.)
extern bool ext_008710B0(void* self);

namespace {
template <typename T>
T& field_at(void* self, std::uintptr_t off) {
    return *reinterpret_cast<T*>(static_cast<std::uint8_t*>(self) + off);
}
}  // namespace

// @name TextCursor::MatchStringThenEquals_008718C0
// @class TextCursor
// @summary Skips blank lines backward, matches str, then consumes '=' (throws on failure); restores cursor fields if str does not match.
// @field TextCursor +0x08 uint32_t field_0x08
// @field TextCursor +0x10 uint32_t field_0x10
// @field TextCursor +0x14 uint32_t field_0x14
bool fn_008718C0(void* self, const char* str) {
    // Snapshot the cursor fields so they can be restored on a failed match.
    const uint32_t saved08 = field_at<uint32_t>(self, 0x08);
    const uint32_t saved10 = field_at<uint32_t>(self, 0x10);
    const uint32_t saved14 = field_at<uint32_t>(self, 0x14);

    if (!ext_008710B0(self)) {
        return false;
    }

    if (!ext_00870F40(self, str)) {
        field_at<uint32_t>(self, 0x08) = saved08;
        field_at<uint32_t>(self, 0x10) = saved10;
        field_at<uint32_t>(self, 0x14) = saved14;
        return false;
    }

    if (!ext_008710F0(self)) {
        ext_00870E40(self, 3);
    }
    return true;
}
} // namespace lift_008718C0
