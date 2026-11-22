// Lifted C++ translation unit: lifted/classes/FBXIO.cpp
#include "lift_compat.h"
extern "C" int ext_00640390(int self_arg, int a1, int a2);
extern "C" void ext_00553720(void* self, int a1);
extern "C" int mem_00A9EED4;
// Known callee 0x0047B170: sub_0047B170 (thiscall on list; appends one float by const ref)
extern "C" void __thiscall ext_0047B170(void* self, const float* value);
// Known callee 0x0041CD60: sub_0041CD60 (thiscall on list; returns element count)
extern "C" int32_t __thiscall ext_0041CD60(void* self);
extern "C" const float mem_00944238; // 120.0f
extern "C" const float mem_0094423C; // 60.0f
extern "C" const float mem_009563EC; // 50.0f
extern "C" const float mem_0092944C; // 30.0f
extern "C" const float mem_0095894C; // 29.97f
extern "C" const float mem_00958948; // 25.0f
extern "C" const float mem_00958944; // 24.0f
extern "C" const float mem_00993838; // 0.0f

extern "C" void __thiscall ext_0047B170(void* self, const float* value);
// Known callee 0x0041CD60: sub_0041CD60 (thiscall on list; returns element count)
extern "C" int32_t __thiscall ext_0041CD60(void* self);
extern "C" const float mem_00944238; // 120.0f
extern "C" const float mem_0094423C; // 60.0f
extern "C" const float mem_009563EC; // 50.0f
extern "C" const float mem_0092944C; // 30.0f
extern "C" const float mem_0095894C; // 29.97f
extern "C" const float mem_00958948; // 25.0f
extern "C" const float mem_00958944; // 24.0f
extern "C" const float mem_00993838; // 0.0f
// [0x00562A30]
// @name FBXIO::vfunc_13
// @class FBXIO
// @summary Initializes FBXIO state if needed and forwards arg1 to ext_0055E990
// @field FBXIO +0x1f8 uint8_t field_0x1f8
// @field FBXIO +0x214 uint8_t field_0x214

#include "lift_compat.h"

extern "C" {
    uint8_t __thiscall ext_0055F4E0(uintptr_t self);
    uint8_t __cdecl ext_006629B0(uintptr_t ptr);
    void __thiscall ext_005605A0(uintptr_t self);
    void __thiscall ext_005619C0(uintptr_t self);
    void __thiscall ext_0055E990(uintptr_t self, uint32_t arg1);
}

void __thiscall fn_00562A30(uintptr_t self, uint32_t arg1) {
    if (ext_0055F4E0(self) == 0) {
        return;
    }

    if (*reinterpret_cast<const uint8_t*>(self + 0x214) == 0 ||
        ext_006629B0(self + 0x1F8) == 0) {
        ext_005605A0(self);
    }

    ext_005619C0(self);
    ext_0055E990(self, arg1);
}

// [0x005607E0] FBXIO::vfunc_33 (305 bytes)
// @name FBXIO::vfunc_33
// @class FBXIO
// @summary Fills list with the 7 standard rates (120,60,50,30,29.97,25,24) and returns the index of the first entry <= this->field_0x174, else the last index (-1 if empty).
// @field FBXIO +0x174 float field_0x174
int32_t __thiscall fn_005607E0(void* self, int32_t /*stack arg +4, unused*/, void* list) {
    // Append the seven rate constants to the list (in this order).
    const float rates[7] = {
        mem_00944238, mem_0094423C, mem_009563EC, mem_0092944C,
        mem_0095894C, mem_00958948, mem_00958944,
    };
    for (const float& r : rates) {
        ext_0047B170(list, &r);
    }

    const float current = *reinterpret_cast<const float*>(static_cast<const char*>(self) + 0x174);

    // Scan the list for the first entry whose (entry - current) is <= 0.
    // Note: NaN differences fall through (continue scanning), matching the original x87 test.
    const int32_t count = ext_0041CD60(list);
    for (int32_t i = 0; i < count; ++i) {
        float* const* head = reinterpret_cast<float* const*>(static_cast<char*>(list) + 4);
        float* const* tail = reinterpret_cast<float* const*>(static_cast<char*>(list) + 8);
        float* begin = *head;
        float* end = *tail;
        if (begin == nullptr) {
            std::abort(); // original calls _invalid_parameter_noinfo
        }
        const std::ptrdiff_t size = (reinterpret_cast<char*>(end) - reinterpret_cast<char*>(begin)) / 4;
        if (static_cast<std::ptrdiff_t>(i) >= size) {
            std::abort(); // original bounds check failure
        }
        const float diff = begin[i] - current;
        if (diff < mem_00993838 || diff == mem_00993838) {
            return i;
        }
    }

    // Fallback: last index, or -1 when the list is empty.
    float* begin = *reinterpret_cast<float* const*>(static_cast<char*>(list) + 4);
    if (begin == nullptr) {
        return -1;
    }
    float* end = *reinterpret_cast<float* const*>(static_cast<char*>(list) + 8);
    const int32_t size = static_cast<int32_t>(
        (reinterpret_cast<char*>(end) - reinterpret_cast<char*>(begin)) / 4);
    return size - 1;
}
