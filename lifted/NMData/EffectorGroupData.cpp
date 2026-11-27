// Lifted C++ translation unit: lifted/NMData/EffectorGroupData.cpp
#include "lift_compat.h"
#include <new>
#include <string>
extern "C" const char* mem_00A9EE68;
extern "C" const char mem_00972450[];
extern "C" const char mem_0093BF0C[];

extern "C" const char mem_0093BF0C[];
// @name NMData::EffectorGroupData::vfunc_8
// @class NMData::EffectorGroupData
// @summary Constructs a std::string in the caller's hidden return buffer from the C string pointed to by mem_00A9EE68; this is never read (thiscall, one stack arg, ret 4).
std::string* fn_0060D4D0(void* self, std::string* out) {
    (void)self;
    new (out) std::string(mem_00A9EE68);
    return out;
}

// [0x0060D3A0] NMData::EffectorGroupData::vfunc_22 (53 bytes)
namespace lift_0060D3A0 {
// Base-class copy helper at 0x0060C530 (NMData::EffectorBaseData::vfunc_21).
extern void ext_0060C530(void* self, void* src);
// String-property copy helper at 0x004C1B50 (127 bytes). Original ABI is thiscall
// with a stack-allocated receiver and three stack args; modelled as
// (destination, source value, property key), matching the EffectorBaseData helper.
extern void ext_004C1B50(void* dst, const void* value, const char* key);
// Property-key string literal "m_childEffectorNames" in .rdata.
extern int mem_009723D4;

// @name NMData::EffectorGroupData::vfunc_22
// @class NMData::EffectorGroupData
// @summary Copies the base EffectorBaseData properties from src into self, then copies the m_childEffectorNames string property.
// @field NMData::EffectorGroupData +0x44 undefined field_0x44
void fn_0060D3A0(void* self, void* src, void* arg2, void* arg3) {
    // arg2 and arg3 are forwarded to the base copy in the original ABI but are
    // not consumed by the modelled helper; they are ignored here.
    (void)arg2;
    (void)arg3;

    // Base-class property copy (m_name, m_jointName).
    ext_0060C530(self, src);

    // Copy m_childEffectorNames: dst = self + 0x44, value = src + 0x44.
    uint8_t* dst = static_cast<uint8_t*>(self);
    uint8_t* from = static_cast<uint8_t*>(src);
    ext_004C1B50(dst + 0x44, from + 0x44,
                 reinterpret_cast<const char*>(&mem_009723D4));
}
} // namespace lift_0060D3A0

// [0x0060DB20] NMData::EffectorGroupData::vfunc_0 (96 bytes)
namespace lift_0060DB20 {
// sub_004026E0 (StringArray::ReleaseElements): thiscall, this = sub-object at +0x44, no stack args.
extern void __thiscall ext_004026E0(void* self);
// sub_0060BA10 (ConstructStringsThenCallBase): thiscall, this = self, no stack args.
extern void __thiscall ext_0060BA10(void* self);
// thunk_MFC80_ord_764: cdecl, one stack arg (the object pointer). Used as the delete path.
extern void ext_006A5C5C(void* p);

// @name NMData::EffectorGroupData::vfunc_0
// @class NMData::EffectorGroupData
// @summary Scalar deleting destructor: releases the array at +0x44, runs the base-construct/teardown helper on self, then frees self when bit 0 of the flags argument is set; returns self.
// @field NMData::EffectorGroupData +0x44 uint8_t field_0x44
void* __thiscall fn_0060DB20(void* self, uint32_t flags) {
    ext_004026E0(static_cast<unsigned char*>(self) + 0x44);
    ext_0060BA10(self);
    if (flags & 1) {
        ext_006A5C5C(self);
    }
    return self;
}
} // namespace lift_0060DB20

// [0x0060D4D0] NMData::EffectorGroupData::vfunc_8 (35 bytes)
namespace lift_0060D4D0 {
extern const char* mem_00A9EE68;

// @name NMData::EffectorGroupData::vfunc_8
// @class NMData::EffectorGroupData
// @summary Auto-lifted identical-shape clone of 0x0047DB90 (NMData::SceneData::vfunc_6).
namespace lift_0047DB90 {
// Pointer-sized global holding the address of the C-string literal used below.
extern const char* const mem_00A9EE68;
// IAT slot for the MSVC std::string(const char*, allocator) constructor import.
// The portable std::string constructor below replaces the call; the slot is only referenced here.
extern int mem_00924FE4;

// @name NMData::SceneData::vfunc_6
// @class NMData::SceneData
// @summary Returns a std::string constructed from the C-string pointer stored in mem_00A9F23C; does not read self.
// (no self fields are accessed by this function)
std::string fn_0060D4D0(const void* /*self*/) {
    static_cast<void>(&mem_00924FE4);
    return std::string(mem_00A9EE68);
}
} // namespace lift_0047DB90
} // namespace lift_0060D4D0

// [0x0060D5A0] NMData::EffectorGroupData::vfunc_19 (67 bytes)
namespace lift_0060D5A0 {
// Known callee 0x0060BB50: NMData::EffectorBaseData::vfunc_19 (Clears two std::string members (at +0x04 and +0x20) of the object.)
extern void __thiscall ext_0060BB50(void* self);
// Known callee 0x00406510: Unknown::copyStringRangeTruncate (Copies a std::string range through sub_00406090, destroys the old tail past the new end, stores the new end at this+0x08 and writes {a2, a3} to the sret pair at a1.)
extern uint32_t __thiscall ext_00406510(void* self, void* a1, void* a2, uint32_t a3, void* a4, uint32_t a5);
// RDATA slot 0x00925134: pointer to the CRT invalid-parameter handler (MSVCR80 _invalid_parameter_noinfo).
extern uint32_t mem_00925134;

// @name NMData::EffectorGroupData::vfunc_19
// @class NMData::EffectorGroupData
// @summary Clears the base-class strings, range-checks the string range at this+0x44 against this+0x4c, then calls copyStringRangeTruncate on it.
// @field EffectorGroupData +0x48 uint32_t field_0x48
// @field EffectorGroupData +0x4C uint32_t field_0x4c
void fn_0060D5A0(void* self) {
    ext_0060BB50(self);

    const uint32_t tail = lift_field<uint32_t>(self, 0x4C);
    auto invalid_param = reinterpret_cast<void (*)()>(mem_00925134);

    void* range = &lift_field<uint8_t>(self, 0x44);
    if (lift_field<uint32_t>(range, 0x4) > tail) {
        invalid_param();
    }
    const uint32_t begin = lift_field<uint32_t>(range, 0x4);
    if (begin > lift_field<uint32_t>(range, 0x8)) {
        invalid_param();
    }

    // sret pair written by the callee; the caller discards it.
    uint32_t sret[2] = {0, 0};
    ext_00406510(range, sret, range, begin, range, tail);
}
} // namespace lift_0060D5A0

// [0x0060D500]
namespace lift_0060D500 {
// @name NMData::EffectorGroupData::vfunc_20
// @class NMData::EffectorGroupData
// @summary Returns (literal_A + this->field_0x04 + literal_B) as a std::string.
// @field NMData::EffectorGroupData +0x04 std::string field_0x04

extern const char mem_00972450[];
extern const char mem_0093BF0C[];
// MSVCP80 IAT slots used by the original (basic_string ctor / operator+ / dtor).
extern void* mem_00924ECC;
extern void* mem_00924FD0;
extern void* mem_00924FE4;
extern void* mem_00924FF4;

// Original is __thiscall with a hidden return slot (std::string) as the first
// stack argument; the trailing second stack argument is unused by the body.
// Portable form: self is the EffectorGroupData instance, result is returned by value.
// The MSVCP80 import calls (ctor, operator+ x2, dtor) are expressed with std::string.
std::string NMData_EffectorGroupData_vfunc_20(const void* self) {
    (void)&mem_00924ECC;
    (void)&mem_00924FD0;
    (void)&mem_00924FE4;
    (void)&mem_00924FF4;
    std::string a(mem_00972450);
    const std::string& name = lift_field<std::string>(self, 0x04);
    std::string tmp = a + name;
    return tmp + std::string(mem_0093BF0C);
}
} // namespace lift_0060D500

// [0x0060DA60] NMData::EffectorGroupData::vfunc_12 (179 bytes)
namespace lift_0060DA60 {
// Known callee 0x0040ECB0: push_back of one 28-byte std::string onto a vector-like container at this+0x44.
extern void ext_0040ECB0(void* self, const void* value);
// Known callee 0x0060B910: constructor (stamps base vtable, default-constructs std::string members, returns this).
extern void* ext_0060B910(void* self);
// Known callee 0x006A5C62: IAT thunk to MFC80!ord_762 (operator new, cdecl, size on stack).
extern void* ext_006A5C62(size_t size);
// Pointer slot to MSVCR80!_invalid_parameter_noinfo (debug iterator checks; metadata-only here).
extern int mem_00925134;

// @name NMData::EffectorGroupData::vfunc_12
// @class NMData::EffectorGroupData
// @summary Factory: allocates a 0x54-byte EffectorGroupData, constructs it, stamps the vtable, clears the +0x44 vector-like container fields, and returns it (nullptr if allocation fails).
// @field NMData::EffectorGroupData +0x00 uint32_t vtable
// @field NMData::EffectorGroupData +0x44 uint32_t field_0x44
// @field NMData::EffectorGroupData +0x48 uint32_t field_0x48
// @field NMData::EffectorGroupData +0x4C uint32_t field_0x4C
// @field NMData::EffectorGroupData +0x50 uint32_t field_0x50
void* fn_0060DA60() {
    void* obj = ext_006A5C62(0x54);
    if (obj == nullptr) {
        // The original reads [0+0x48] here (faults); unreachable with a throwing operator new.
        return nullptr;
    }

    (void)&mem_00925134;  // debug-check slot only; not a real access in the portable lift
    ext_0060B910(obj);

    lift_field<uint32_t>(obj, 0x00) = 0x009723F4u;  // EffectorGroupData vtable
    lift_field<uint32_t>(obj, 0x48) = 0;
    lift_field<uint32_t>(obj, 0x4C) = 0;
    lift_field<uint32_t>(obj, 0x50) = 0;

    // Loop over the container range [end, cap) at +0x48..+0x4C, pushing each
    // 28-byte element into the container at +0x44. The MSVC debug iterator
    // checks (invalid_parameter calls via mem_00925134) are omitted.
    uint32_t cur = lift_field<uint32_t>(obj, 0x48);
    for (;;) {
        uint32_t last = lift_field<uint32_t>(obj, 0x4C);
        if (cur == last) {
            break;
        }
        ext_0040ECB0(static_cast<uint8_t*>(obj) + 0x44,
                     reinterpret_cast<const void*>(static_cast<uintptr_t>(cur)));
        cur += 0x1C;
    }

    return obj;
}
} // namespace lift_0060DA60

// [0x0060D5F0]
namespace lift_0060D5F0 {
// @name NMData::EffectorGroupData::vfunc_13
// @class NMData::EffectorGroupData
// @summary Populates field_0x04 and vector at +0x44 from matching elements in source container
// @field NMData::EffectorGroupData +0x04 std::string field_0x04
// @field NMData::EffectorGroupData +0x44 uint8_t[12] field_0x44


extern uint32_t __thiscall ext_0063EFE0(void* self, uint32_t name);
extern void __cdecl ext_004275E0(void* dst, uint32_t obj);
extern void __thiscall ext_00427A60(void* self);
extern void __thiscall ext_0040ECB0(void* self, const void* value);

extern uint32_t mem_00A9F838;
extern uint32_t mem_00A9EE64;
extern void (__cdecl *mem_00925134)();
extern uint8_t (__cdecl *mem_00924FC0)(const void* str, uint32_t cstr);
extern void (__thiscall *mem_00924FF4)(void* str);

struct CheckedVecIter {
    uint32_t container0;
    uint32_t container1;
    uint32_t ptr;
};

void __thiscall fn_0060D5F0(void* self, void* src) {
    uint8_t* self_b = static_cast<uint8_t*>(self);
    uint8_t* src_b = static_cast<uint8_t*>(src);

    uint32_t item = ext_0063EFE0(src_b, mem_00A9F838);
    ext_004275E0(self_b + 0x04, item);

    uint8_t* vec = src_b + 0x24;
    uint32_t begin_ptr = lift_field<uint32_t>(vec, 0x04);
    uint32_t end_ptr = lift_field<uint32_t>(vec, 0x08);
    if (begin_ptr > end_ptr) {
        mem_00925134();
    }

    CheckedVecIter it;
    it.container0 = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(vec));
    it.container1 = it.container0;
    it.ptr = begin_ptr;
    ext_00427A60(&it);

    uint32_t end_val = lift_field<uint32_t>(vec, 0x08);
    if (lift_field<uint32_t>(vec, 0x04) > end_val) {
        mem_00925134();
    }

    CheckedVecIter end_it;
    end_it.container0 = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(vec));
    end_it.container1 = end_it.container0;
    end_it.ptr = end_val;
    ext_00427A60(&end_it);

    while (true) {
        uint32_t cont = it.container1;
        if (cont == 0 || cont != end_it.container1) {
            mem_00925134();
        }
        uint32_t cur = it.ptr;
        if (cur >= end_it.ptr) {
            break;
        }
        if (cont == 0) {
            mem_00925134();
        }
        uint8_t* cont_b = reinterpret_cast<uint8_t*>(static_cast<uintptr_t>(cont));
        if (cur >= lift_field<uint32_t>(cont_b, 0x08)) {
            mem_00925134();
        }

        uint8_t* elem = *reinterpret_cast<uint8_t**>(static_cast<uintptr_t>(cur));
        if (mem_00924FC0(elem + 0x04, mem_00A9EE64) != 0) {
            if (cur >= lift_field<uint32_t>(cont_b, 0x08)) {
                mem_00925134();
            }
            uint8_t* obj = *reinterpret_cast<uint8_t**>(static_cast<uintptr_t>(cur));
            void** vtable = *reinterpret_cast<void***>(obj);
            using VFunc2 = void* (__thiscall *)(void*, void*);
            uint8_t tmp_str[28];
            void* str_ret = reinterpret_cast<VFunc2>(vtable[2])(obj, tmp_str);
            ext_0040ECB0(self_b + 0x44, str_ret);
            mem_00924FF4(tmp_str);
        }

        if (cur >= lift_field<uint32_t>(cont_b, 0x08)) {
            mem_00925134();
        }
        it.ptr = cur + 4;
        ext_00427A60(&it);
    }
}
} // namespace lift_0060D5F0

// [0x0060D280] NMData::EffectorGroupData::vfunc_14 (281 bytes)
namespace lift_0060D280 {
extern void ext_00427550(void* self, const char* name);
extern void ext_0063F8D0(void* self);
extern void* ext_00640110(void* self, uint32_t value);
extern void ext_00640270(void* self, void* name);
extern void* ext_006404E0(void* self, uint32_t value);
extern uint32_t mem_00A9EE64;
extern uint32_t mem_00A9EE68;
extern uint32_t mem_00A9F838;
extern int mem_00924FE4; // MSVCP80 string(const char*) ctor import: metadata only
extern int mem_00924FF0; // MSVCP80 string::c_str import: metadata only
extern int mem_00924FF4; // MSVCP80 string dtor import: metadata only
extern int mem_00925134; // MSVCR80 _invalid_parameter_noinfo import: metadata only

// @name NMData::EffectorGroupData::vfunc_14
// @class NMData::EffectorGroupData
// @summary Re-binds the child name from this+0x04 under the object from sub_006404E0(arg), then for each 28-byte std::string in the list at this+0x48..+0x4C clears the owned objects and assigns that string as a child via assignOrCreateChild.
// @field NMData::EffectorGroupData +0x04 std::string field_0x04
// @field NMData::EffectorGroupData +0x48 uint32_t field_0x48
// @field NMData::EffectorGroupData +0x4C uint32_t field_0x4C
void fn_0060D280(void* self, void* arg) {
    // Import slots: std::string ctor/c_str/dtor and invalid-parameter guards are
    // replaced by std::string and plain bounds; these refs are metadata only.
    (void)&mem_00924FE4;
    (void)&mem_00924FF0;
    (void)&mem_00924FF4;
    (void)&mem_00925134;

    void* obj = ext_006404E0(arg, mem_00A9EE68);
    void* slot = ext_00640110(obj, mem_00A9F838);

    const char* name = reinterpret_cast<std::string*>(
        reinterpret_cast<uint8_t*>(self) + 0x04)->c_str();
    ext_00427550(&slot, name);

    // Element iteration over the list at this+0x48 (begin) .. this+0x4C (end), stride 0x1C.
    uintptr_t it = static_cast<uintptr_t>(lift_field<uint32_t>(self, 0x48));
    const uintptr_t end = static_cast<uintptr_t>(lift_field<uint32_t>(self, 0x4C));

    while (it != end) {
        void* owner = ext_006404E0(obj, mem_00A9EE64);
        const char* s = reinterpret_cast<std::string*>(it)->c_str();
        ext_0063F8D0(owner);
        {
            std::string child_name(s);
            ext_00640270(owner, &child_name);
        }
        it += 0x1C;
    }
    // Original returns with eax still holding the first stack argument; no value is consumed by callers here.
}
} // namespace lift_0060D280

// [0x0060D780] NMData::EffectorGroupData::vfunc_15 (390 bytes)
namespace lift_0060D780 {
// operator new thunk (thunk_MFC80_ord_762): cdecl, one stack arg (size), returns storage.
extern void* ext_006A5C62(size_t size);
// sub_00602EC0 (ctor): thiscall, this = new'd object; initializes vtable and zeroes fields.
extern void ext_00602EC0(void* self);
// sub_00596660 (eraseInt32Range): erases [first,last) from the int32 vector at obj+0x2c, writes 2-pointer result to out.
extern void ext_00596660(void* self, void** out, void* a2, void* first, void* a4, void* last);
// sub_0059A140: vector<int32_t> insert-at-position slow path (grows storage); result written to out.
extern void ext_0059A140(void* self, void** out, void* vec, void* pos, const int32_t* value);
// sub_005DF5C0: thiscall lookup on a1+0x55c; returns object whose +0x40 is an int32 payload.
extern void* ext_005DF5C0(void* self);
// MSVCP80 std::string copy-constructor IAT slot (dead temporary, see loop body).
extern int mem_00924FE0;
// MSVCRT _invalid_parameter_noinfo IAT slot (bounds asserts in the original; omitted).
extern int mem_00925134;

// @name NMData::EffectorGroupData::vfunc_15
// @class NMData::EffectorGroupData
// @summary Allocates a 0x3c-byte helper object, stores it at self+0x40, and fills its int32 vector with one entry per element of self's string vector (0x1c stride).
// @field NMData::EffectorGroupData +0x40 void* field_0x40
// @field NMData::EffectorGroupData +0x48 void* field_0x48
// @field NMData::EffectorGroupData +0x4C void* field_0x4C
void fn_0060D780(void* self, void* a1, void* a2, void* a3) {
    (void)a2;
    (void)a3;
    // Original bounds-check branches call _invalid_parameter_noinfo via this IAT
    // slot on failure only; the checks are dropped and the slot is kept as metadata.
    (void)&mem_00925134;

    // new(0x3c) and construct. operator new throws on failure in MSVC, so the
    // original null-pointer branch is unreachable and not modelled beyond a guard.
    uint8_t* obj = static_cast<uint8_t*>(ext_006A5C62(0x3c));
    if (obj == nullptr) {
        lift_field<void*>(self, 0x40) = nullptr;
        return;
    }
    ext_00602EC0(obj);
    lift_field<uint32_t>(obj, 0x00) = 0x0097181Cu;   // vtable
    lift_field<int32_t*>(obj, 0x30) = nullptr;        // int32 vector begin
    lift_field<int32_t*>(obj, 0x34) = nullptr;        // int32 vector end
    lift_field<int32_t*>(obj, 0x38) = nullptr;        // int32 vector capacity

    // Int32 vector lives at obj+0x2c (begin +0x30, end +0x34, cap +0x38).
    uint8_t* vec = obj + 0x2c;
    int32_t* vbegin = lift_field<int32_t*>(obj, 0x30);
    int32_t* vend = lift_field<int32_t*>(obj, 0x34);

    // Clear the int32 vector: erase [begin, end).
    void* erase_out[2] = {nullptr, nullptr};
    ext_00596660(vec, erase_out, vec, vbegin, vec, vend);

    // Iterate self's std::string vector: begin at +0x48, end at +0x4C, stride 0x1c.
    uint8_t* p = lift_field<uint8_t*>(self, 0x48);
    uint8_t* last = lift_field<uint8_t*>(self, 0x4C);
    for (; p != last; p += 0x1c) {
        // Original copy-constructs *p into a stack std::string temporary via
        // mem_00924FE0 and never passes it on. The temporary is dead; only the
        // IAT reference is kept so the dependency stays visible.
        (void)&mem_00924FE0;

        uint8_t* rv = static_cast<uint8_t*>(ext_005DF5C0(static_cast<uint8_t*>(a1) + 0x55c));
        int32_t value = lift_field<int32_t>(rv, 0x40);

        int32_t* b = lift_field<int32_t*>(obj, 0x30);
        int32_t* e = lift_field<int32_t*>(obj, 0x34);
        int32_t* c = lift_field<int32_t*>(obj, 0x38);
        bool has_room = (b != nullptr) && (e - b) < (c - b);

        if (has_room) {
            *e = value;
            lift_field<int32_t*>(obj, 0x34) = e + 1;
        } else {
            void* ins_out[2] = {nullptr, nullptr};
            ext_0059A140(vec, ins_out, vec, e, &value);
        }
    }

    lift_field<void*>(self, 0x40) = obj;
}
} // namespace lift_0060D780
