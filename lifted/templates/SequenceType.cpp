// Lifted C++ translation unit: lifted/templates/SequenceType.cpp
#include "lift_compat.h"

// [0x004C2160] Properties::SequenceType<std::vector<std::basic_string<char, std::char_traits<char>, std::allocator<char>>, std::allocator<std::basic_string<char, std::char_traits<char>, std::allocator<char>>>>, Properties::GetConstStringProxy, DeRefValue>::vfunc_3 (61 bytes)
namespace lift_004C2160 {
extern void (*mem_00925134)(void);  // import slot: _invalid_parameter_noinfo (MSVCR80)

// @name Properties::SequenceType::vfunc_3
// @class Properties::SequenceType<std::vector<std::basic_string<char, std::char_traits<char>, std::allocator<char>>, std::allocator<std::basic_string<char, std::char_traits<char>, std::allocator<char>>>>, Properties::GetConstStringProxy, DeRefValue>
// @summary Loads the inner range pointer from self, validates its cur/end fields (cur must not exceed end, else invalid-parameter handler), then continues at 0x004C21A0 (outside the decoded span).
// @field Properties::SequenceType +0x00 void* field_0x00
void fn_004C2160(void* self) {
    // Inner range object pointer stored at self+0x00 (32-bit address).
    void* range = reinterpret_cast<void*>(static_cast<uintptr_t>(lift_field<uint32_t>(self, 0x00)));

    // range+0x04 = current position, range+0x08 = end position (offsets on the inner
    // object, not on the SequenceType; type not recovered).
    uint32_t cur = lift_field<uint32_t>(range, 0x04);
    uint32_t end = lift_field<uint32_t>(range, 0x08);
    if (cur > end) {
        mem_00925134();
    }

    // Control transfers to 0x004C21A0, which lies past the 61-byte span of this
    // symbol. The remaining body is not present in the disassembly provided, so the
    // lift stops here. The second stack argument ([ebp+0x0C]) is read only by that
    // continuation and is therefore not modelled.
}
} // namespace lift_004C2160
