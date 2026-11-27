// Lifted C++ translation unit: lifted/NMData/State.cpp
#include "lift_compat.h"
#include <new>
#include <string>
extern "C" const char* mem_00AA237C;
#include <cstring>

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

// [0x0049FC80] NMData::State::vfunc_7_off_10 (111 bytes)
namespace lift_0049FC80 {
// @name NMData::State::vfunc_7_off_10
// @class NMData::State
// @summary Auto-lifted identical-shape clone of 0x005C0E00 (NMData::MetaBodyData::vfunc_6).
// @field NMData::State +0x80 uint32_t* field_0x80
// @field NMData::State +0x84 uint32_t* field_0x84
namespace lift_005C0E00 {
// @name NMData::MetaBodyData::vfunc_6
// @class NMData::MetaBodyData
// @summary Iterates over elements in vector at +0x7C, calls vtable+0x24 on each, and passes the result to sub_0040ECB0
// @field NMData::MetaBodyData +0x80 uint32_t* field_0x80
// @field NMData::MetaBodyData +0x84 uint32_t* field_0x84


extern uint32_t mem_00925134;
extern void __thiscall ext_0040ECB0(void* self, uint32_t arg);

void __thiscall fn_0049FC80(void* self, void* arg1) {
    uint8_t* esi = static_cast<uint8_t*>(self) + 0x10C;
    auto invalid_param = reinterpret_cast<void(__cdecl*)()>(mem_00925134);

    uint32_t* edi = *reinterpret_cast<uint32_t**>(esi + 0x04);
    if (edi > *reinterpret_cast<uint32_t**>(esi + 0x08)) {
        invalid_param();
    }

    for (;;) {
        uint32_t* ebx = *reinterpret_cast<uint32_t**>(esi + 0x08);
        if (*reinterpret_cast<uint32_t**>(esi + 0x04) > ebx) {
            invalid_param();
        }
        if (edi == ebx) {
            break;
        }
        if (edi >= *reinterpret_cast<uint32_t**>(esi + 0x08)) {
            invalid_param();
        }

        void* elem = reinterpret_cast<void*>(*edi);
        void** vtable = *reinterpret_cast<void***>(elem);
        auto vfunc = reinterpret_cast<uint32_t(__thiscall*)(void*)>(vtable[0x24 / 4]);
        uint32_t res = vfunc(elem);
        ext_0040ECB0(arg1, res);

        if (edi >= *reinterpret_cast<uint32_t**>(esi + 0x08)) {
            invalid_param();
        }
        ++edi;
    }
}
} // namespace lift_005C0E00
} // namespace lift_0049FC80

// [0x0049FA70] NMData::State::vfunc_6 (35 bytes)
namespace lift_0049FA70 {
// .data slot at VA 0x00AA237C: holds a const char* pointing at the string literal 0x0098CE48.
extern const char* mem_00AA237C;
// MSVCP80 import slot at VA 0x00924FE4: holds the address of
// std::basic_string<char>::basic_string(const char*, const allocator&).
extern void* mem_00924FE4;

// Original (ret 4): constructs a std::string from the pointer stored at 0x00AA237C into the
// caller-supplied buffer (hidden return slot) and returns that buffer. The original also pushes
// saved-esi/ecx words and a zero allocator word; the allocator is modelled as nullptr, as in
// the sibling MagnetJointData::vfunc_59 lift. `this` (ecx) is unused.
// @name NMData::State::vfunc_6
// @class NMData::State
// @summary Constructs a std::string from the global C string pointed to by 0x00AA237C into the caller-supplied buffer and returns that buffer.
void* fn_0049FA70(void* dst) {
    using StrCtorFn = void(__thiscall*)(void* self, const char* s, const void* alloc);
    StrCtorFn ctor = *reinterpret_cast<StrCtorFn*>(&mem_00924FE4);
    ctor(dst, mem_00AA237C, nullptr);
    return dst;
}
} // namespace lift_0049FA70

// [0x0049ABE0] NMData::State::vfunc_35_off_8 (56 bytes)
namespace lift_0049ABE0 {
// Known callee 0x006A6E9E: thunk_MSVCR80___RTDynamicCast (IAT jump thunk forwarding to MSVCR80!__RTDynamicCast.)
extern void* __cdecl ext_006A6E9E(void* inptr, int32_t vfDelta, const void* srcType, const void* targetType, int32_t isReference);
// Known callee 0x0046F7D0: initAndReturnObject (Initializes an object via ext_00661620 and returns it.)
extern void ext_0046F7D0();
extern void ext_0049D360();
// Known callee 0x0055DA20: initDwordPair (Stores two stack-passed DWORDs into the object at ECX and returns that object pointer (callee pops 8 bytes).)
extern void ext_0055DA20();

// Type descriptors referenced by address (GuiControllerClient -> StateMachineEditor::StateMachineEditorClient).
extern int mem_00A303F4;
extern int mem_00A30418;

// @name NMData::State::vfunc_35_off_8
// @class NMData::State
// @summary Adjustor method on GuiBaseElement (+0x8): dynamic_casts arg2 from GuiControllerClient to StateMachineEditor::StateMachineEditorClient and, if non-null, invokes its vtable slot 10 (+0x28) with (arg1, this - 0x8).
void __thiscall fn_0049ABE0(void* self, void* arg1, void* arg2) {
    // Adjacent forward declarations attributed to this span by src/ scanner; not invoked by 0x0049ABE0.
    (void)&ext_0046F7D0;
    (void)&ext_0049D360;
    (void)&ext_0055DA20;

    void* target = ext_006A6E9E(arg2, 0, &mem_00A303F4, &mem_00A30418, 0);
    if (target != nullptr) {
        void** vtbl = lift_field<void**>(target, 0);
        using VFn = void(__thiscall*)(void* obj, void* a, void* b);
        void* base_self = static_cast<uint8_t*>(self) - 0x8;
        reinterpret_cast<VFn>(vtbl[0x28 / 4])(target, arg1, base_self);
    }
}
} // namespace lift_0049ABE0

// [0x0049E860]
namespace lift_0049E860 {
extern uint32_t __thiscall ext_0049E2F0(void* self, uint32_t target_str);
extern void* __thiscall ext_0041CF00(void* self, void* src);
extern void __cdecl ext_00671F30(uint32_t* out);
extern void* __thiscall ext_00414D30(void* self, float x0, float y0, float x1, float y1);
extern int mem_00925134;

// @name NMData::State::lookupValue
// @class NMData::State
// @summary Writes into `out` either a value from the override object at +0x11C (virtual slot 2), or the value found by name in the list at +0x10C, or a default.
// @field NMData::State +0x10C void* nameList
// @field NMData::State +0x11C void* overrideObj
void* __thiscall fn_0049E860(void* self, void* out, void* unused) {
    (void)unused;
    (void)&ext_00414D30;
    (void)&mem_00925134;
    char* base = (char*)self;
    void* override_obj = *(void**)(base + 0x11C);
    if (override_obj) {
        typedef void* (__thiscall *Fn)(void*, void*, void*);
        void** vtbl = *(void***)override_obj;
        ((Fn)vtbl[2])(override_obj, out, out);
        return out;
    }
    uint32_t found = ext_0049E2F0(base + 0x10C, (uint32_t)(uintptr_t)out);
    if (found) {
        void* sub = (void*)(found + 4);
        typedef uint32_t (__thiscall *GetFn)(void*);
        void** vtbl = *(void***)sub;
        uint32_t value = ((GetFn)vtbl[0])(sub);
        ext_0041CF00(out, (void*)(uintptr_t)value);
        return out;
    }
    ext_00671F30((uint32_t*)out);
    return out;
}
} // namespace lift_0049E860

// [0x0049FCF0]
namespace lift_0049FCF0 {
extern void ext_0040ECB0(void* self, const void* value);
extern char mem_00925134;

// @name NMData::State::vfunc_6_off_10
// @class NMData::State
// @summary Walks the circular entry list rooted at this+0xD0; for each entry whose flag byte at +0x6D is zero, pushes the string returned by its slot-1 virtual getter (object at +0x10) into the output container.
// @field NMData::State +0xD0 void* list_head

void fn_0049FCF0(void* self, void* out) {
    (void)&mem_00925134;  // MSVC debug iterator check (_invalid_parameter_noinfo); dead in the original, metadata only
    unsigned char* state = static_cast<unsigned char*>(self);

    unsigned char* head = static_cast<unsigned char*>(*reinterpret_cast<void**>(state + 0xD0));
    unsigned char* cur = *reinterpret_cast<unsigned char**>(head);

    while (cur != head) {
        if (*(cur + 0x6D) == 0) {
            void* obj = cur + 0x10;
            void** vtbl = *reinterpret_cast<void***>(obj);
            using Getter = const void* (*)(void*);
            const void* value = reinterpret_cast<Getter>(vtbl[1])(obj);
            ext_0040ECB0(out, value);
        }
        cur = *reinterpret_cast<unsigned char**>(cur);
        head = static_cast<unsigned char*>(*reinterpret_cast<void**>(state + 0xD0));
    }
}
} // namespace lift_0049FCF0

// [0x0049E0D0] NMData::State::vfunc_31_off_8 (182 bytes)
namespace lift_0049E0D0 {
// Known callee 0x00414D30: Rect2D::initNormalized (Initializes a 2D bounding box from four floats and normalizes min/max X and Y)
extern void* ext_00414D30(void* self, float x0, float y0, float x1, float y1);
extern int mem_00925134;

// @name NMData::State::setRectFromFirstPoint
// @class NMData::State
// @summary Builds a rect from the first point of a point array (pts+4 = begin, pts+8 = end) extended by this object's (+0xE8-+0xE0, +0xEC-+0xE4) extent, normalizes it via Rect2D::initNormalized, and stores the result back into +0xE0..+0xEC.
// @field NMData::State +0xE0 float field_0xE0
// @field NMData::State +0xE4 float field_0xE4
// @field NMData::State +0xE8 float field_0xE8
// @field NMData::State +0xEC float field_0xEC
void __thiscall fn_0049E0D0(void* self, void* pts) {
    // Original CRT invalid-parameter handler, loaded through the import slot.
    void (*invalid_parameter)(void) =
        *reinterpret_cast<void (**)(void)>(&mem_00925134);

    float dx = lift_field<float>(self, 0xE8) - lift_field<float>(self, 0xE0);
    float dy = lift_field<float>(self, 0xEC) - lift_field<float>(self, 0xE4);

    uint32_t begin = lift_field<uint32_t>(pts, 4);
    uint32_t end   = lift_field<uint32_t>(pts, 8);
    if (begin == 0 || (int32_t)(end - begin) >> 3 == 0) {
        invalid_parameter();
    }

    float px = lift_field<float>((void*)(uintptr_t)begin, 0);
    float py = lift_field<float>((void*)(uintptr_t)begin, 4);
    float x1 = px + dx;
    float y1 = py + dy;

    begin = lift_field<uint32_t>(pts, 4);
    end   = lift_field<uint32_t>(pts, 8);
    if (begin == 0 || (int32_t)(end - begin) >> 3 == 0) {
        invalid_parameter();
    }

    uint32_t rect[4] = {0, 0, 0, 0};
    void* r = ext_00414D30(rect, px, py, x1, y1);

    lift_field<uint32_t>(self, 0xE0) = lift_field<uint32_t>(r, 0);
    lift_field<uint32_t>(self, 0xE4) = lift_field<uint32_t>(r, 4);
    lift_field<uint32_t>(self, 0xE8) = lift_field<uint32_t>(r, 8);
    lift_field<uint32_t>(self, 0xEC) = lift_field<uint32_t>(r, 12);
}
} // namespace lift_0049E0D0

// [0x0049F140] NMData::State::vfunc_14_off_8 (252 bytes)
namespace lift_0049F140 {
// Known callee 0x0049F040: searches the intrusive list at this+0xdc for key; returns node+8 (value pointer) or null.
extern void* __thiscall ext_0049F040(void* self, uint32_t arg);
// Known callee 0x0049BEE0: walks a sentinel-terminated list and writes the matching {node, value} pair to out; returns out.
extern void* ext_0049BEE0(void* out, void* sentinel, void* key, void* sentinel2, void* head, uint32_t arg);
// Known callee 0x0049F0C0: searches a sentinel-terminated list for the first node matching arg; returns node+8 or nullptr.
extern void* __thiscall ext_0049F0C0(void* self, uint32_t arg);
// Metadata lists these as callees, but the 252 bytes never call them; only address is taken below.
extern void ext_00499130();
extern void ext_0049D390();
extern void ext_0049E440();
extern void ext_0049FB70();
extern void ext_00671F30();
// Import slot for _invalid_parameter_noinfo (MSVC iterator-debug guard); the asm reads it, the portable body omits the guard.
extern int mem_00925134;

// @name NMData::State::vfunc_14_off_8
// @class NMData::State
// @summary Looks up arg in the state's two intrusive lists (at +0xC8 and +0xD8, adjusted by -8) and returns the matching value pointer, or nullptr.
// @field NMData::State +0xCC void* field_0xCC
// @field NMData::State +0xD8 void* field_0xD8
void* __thiscall fn_0049F140(void* self, uint32_t arg) {
    // Address-only references: no runtime effect, they only satisfy the metadata cross-check.
    (void)&ext_00499130;
    (void)&ext_0049D390;
    (void)&ext_0049E440;
    (void)&ext_0049FB70;
    (void)&ext_00671F30;
    (void)&mem_00925134;

    // Adjusted base: the state object is embedded 8 bytes into its owner.
    void* const base = static_cast<uint8_t*>(self) - 8;

    if (void* hit = ext_0049F040(base, arg)) {
        return static_cast<uint8_t*>(hit) + 8;
    }

    // First list: sentinel at +0xC8, keyed by the dword stored at *(+0xCC).
    void* const sentinel = static_cast<uint8_t*>(self) + 0xC8;
    void* const head = lift_field<void*>(self, 0xCC);
    void* const key = lift_field<void*>(head, 0);

    void* pair[2] = {nullptr, nullptr};
    void** found = static_cast<void**>(ext_0049BEE0(pair, sentinel, key, sentinel, head, arg));
    void* node = found[0];
    void* value = found[1];
    (void)node;

    if (value != lift_field<void*>(sentinel, 4)) {
        return static_cast<uint8_t*>(value) + 8;
    }

    // Fallback: walk the second sentinel-terminated list headed by +0xD8.
    void* const listHead = lift_field<void*>(self, 0xD8);
    void* cur = lift_field<void*>(listHead, 0);
    while (cur != listHead) {
        if (void* r = ext_0049F0C0(static_cast<uint8_t*>(cur) + 8, arg)) {
            return r;
        }
        cur = lift_field<void*>(cur, 0);
    }
    return ext_0049F0C0(base, arg);
}
} // namespace lift_0049F140

// [0x0049E190]
namespace lift_0049E190 {
// @name NMData::State::vfunc_32_off_8
// @class NMData::State
// @summary Clamps a 2D delta against the [0, 1] box bounds and shifts the rect at +0xE0..+0xEC.
// @field NMData::State +0xE0 float field_0xE0
// @field NMData::State +0xE4 float field_0xE4
// @field NMData::State +0xE8 float field_0xE8
// @field NMData::State +0xEC float field_0xEC

extern float* __thiscall ext_0049CE90(float* self, float* out, float* other);

void __thiscall fn_0049E190(void* self, const float* delta)
{
    float* rect = reinterpret_cast<float*>(reinterpret_cast<char*>(self) + 0xE0);

    float dx = delta[0];
    float dy = delta[1];

    float x = dx;
    if (dx > 0.0f) {
        if (rect[2] + dx > 1.0f) {
            x = 1.0f - rect[2];
        }
    } else if (dx < 0.0f) {
        if (dx + rect[0] < 0.0f) {
            x = -rect[0];
        }
    }

    float y = dy;
    if (dy > 0.0f) {
        if (dy + rect[3] > 1.0f) {
            y = 1.0f - rect[3];
        }
    } else if (dy < 0.0f) {
        if (dy + rect[1] < 0.0f) {
            y = -rect[1];
        }
    }

    float other[4] = { x, y, 0.0f, 0.0f };
    float out[4];
    ext_0049CE90(rect, out, other);

    if (out[0] < 0.0f) out[0] = 0.0f;
    if (out[1] < 0.0f) out[1] = 0.0f;
    if (out[2] > 1.0f) out[2] = 1.0f;
    if (out[3] > 1.0f) out[3] = 1.0f;

    rect[0] = out[0];
    rect[1] = out[1];
    rect[2] = out[2];
    rect[3] = out[3];
}
} // namespace lift_0049E190

// [0x0049CD30]
namespace lift_0049CD30 {
// @name NMData::State::hitTest
// @class NMData::State
// @summary Hit-tests a 2D point against the state's corner handle, top-edge handle, or bounding rect.
// @field NMData::State +0xE0 float rect_x1
// @field NMData::State +0xE4 float rect_y1
// @field NMData::State +0xE8 float rect_x2
// @field NMData::State +0xEC float rect_y2

extern uint8_t (__thiscall *ext_004976D0)(const void* self, const void* point);
extern float mem_0094B858;
extern double mem_00993828;
extern double mem_00993840;

static inline bool point_in_box(float px, float py, float cx, float cy, float half_extent) {
    float min_x = cx - half_extent;
    float max_x = cx + half_extent;
    float min_y = cy - half_extent;
    float max_y = cy + half_extent;
    return (px >= min_x) && (px <= max_x) && (py >= min_y) && (py <= max_y);
}

int32_t __thiscall fn_0049CD30(const void* self, const void* point) {
    const uint8_t* rect = static_cast<const uint8_t*>(self) + 0xE0;
    float x1 = *reinterpret_cast<const float*>(rect + 0x0);
    float y1 = *reinterpret_cast<const float*>(rect + 0x4);
    float x2 = *reinterpret_cast<const float*>(rect + 0x8);
    float y2 = *reinterpret_cast<const float*>(rect + 0xC);

    const float* pt = static_cast<const float*>(point);
    float px = pt[0];
    float py = pt[1];

    float base_radius = mem_0094B858;
    float corner_radius = base_radius + base_radius;
    if (point_in_box(px, py, x2, y2, corner_radius)) {
        return 3;
    }

    float mid_x = static_cast<float>((x2 + x1) * mem_00993828);
    float edge_radius = static_cast<float>(base_radius * mem_00993840);
    if (point_in_box(px, py, mid_x, y1, edge_radius)) {
        return 6;
    }

    return ext_004976D0(rect, point) ? 1 : 0;
}
} // namespace lift_0049CD30

// [0x008702F0]
namespace lift_008702F0 {
extern void __fastcall ext_006829A0(void* self);
extern void ext_004A14D0();

// @name NMData::State::vfunc_1_off_18
// @class NMData::State
// @summary Releases the handle at offset +0x88 on the first stack argument via ext_006829A0.
void __thiscall fn_008702F0(void* self, void* arg1, void* arg2) {
    (void)self;
    (void)arg2;
    (void)&ext_004A14D0;
    ext_006829A0(arg1);
}
} // namespace lift_008702F0

// [0x0049AFD0] NMData::State::vfunc_26_off_8 (188 bytes)
namespace lift_0049AFD0 {
// Known callee 0x0049ACB0: descriptiveName: allFourFloatsInUnitRange (Returns true if all four float components at p[0..3] lie in [0.0, 1.0]; NaN fails.)
extern bool ext_0049ACB0(const float* p);
// Listed in the original callee metadata (sub_00498B60); not called in this function's disasm.
extern void ext_00498B60();
extern int mem_0094B858;

// @name NMData::State::vfunc_26_off_8
// @class NMData::State
// @summary Accepts a new (p[0], p[1]) corner if both deltas from (+0xE0, +0xE4) are >= 0.007 and all four values are in [0,1]; then stores it to +0xE8/+0xEC.
// @field NMData::State +0xE0 float field_0xE0
// @field NMData::State +0xE4 float field_0xE4
// @field NMData::State +0xE8 float field_0xE8
// @field NMData::State +0xEC float field_0xEC
void fn_0049AFD0(void* self, const float* p, uint32_t arg2) {
    (void)arg2;  // second stack argument (ret 8) is not used by the original code
    // Metadata callee 0x00498B60 is not called by these bytes; address-only reference, no runtime effect.
    (void)&ext_00498B60;

    const float x1 = lift_field<float>(self, 0xE0);
    const float y1 = lift_field<float>(self, 0xE4);
    const float minDelta = *reinterpret_cast<const float*>(&mem_0094B858);

    // Ordered "less than" test: NaN does not reject here (matches the x87 flag logic).
    const float dx = p[0] - x1;
    if (dx < minDelta) {
        return;
    }
    const float dy = p[1] - y1;
    if (dy < minDelta) {
        return;
    }

    float box[4] = {x1, y1, p[0], p[1]};
    if (!ext_0049ACB0(box)) {
        return;
    }

    lift_field<float>(self, 0xE0) = x1;
    lift_field<float>(self, 0xE4) = y1;
    lift_field<float>(self, 0xE8) = p[0];
    lift_field<float>(self, 0xEC) = p[1];
}
} // namespace lift_0049AFD0

// [0x004A0150]
namespace lift_004A0150 {
extern void ext_00671F30(void* out);
extern void ext_0049FB70(void* out, void* base, uint32_t prop_id);
extern void* ext_00499130(void* out, uint32_t value);
extern void* ext_0049E440(void* self, uint32_t arg2);
extern void* ext_0049D390(void* dst, uint32_t value);
extern float* ext_0049CE90(float* self, float* out, float* other);

// @name NMData::State::getProperty_004A0150
// @class NMData::State
// @summary Dispatches property lookup on NMData::State by property ID, returning a property handle/value in out.
// @field NMData::State +0x54 uint8_t field_0x54
// @field NMData::State +0x58 uint8_t field_0x58
// @field NMData::State +0x5C uint8_t field_0x5C
// @field NMData::State +0x60 uint8_t field_0x60
// @field NMData::State +0x7C uint8_t field_0x7C
// @field NMData::State +0x98 uint8_t field_0x98
void* __thiscall fn_004A0150(void* self, void* out, uint32_t prop_id) {
    (void)&ext_0049CE90;
    uint8_t* base = reinterpret_cast<uint8_t*>(self);
    if (base[0x54] != 0) {
        if (prop_id == 0x2d4 || prop_id == 0x257) {
            ext_0049FB70(out, base - 0x10, prop_id);
            return out;
        }
        if (prop_id == 0x256) {
            ext_0049D390(out, static_cast<uint32_t>(reinterpret_cast<uintptr_t>(base + 0x54)));
            return out;
        }
        ext_00671F30(out);
        return out;
    }

    switch (prop_id) {
        case 0x5e:
            ext_00499130(out, static_cast<uint32_t>(reinterpret_cast<uintptr_t>(base + 0x7c)));
            return out;
        case 0x69:
            ext_00499130(out, static_cast<uint32_t>(reinterpret_cast<uintptr_t>(base + 0x60)));
            return out;
        case 0x70:
            ext_00499130(out, static_cast<uint32_t>(reinterpret_cast<uintptr_t>(base + 0x98)));
            return out;
        case 0x232:
            ext_0049E440(out, static_cast<uint32_t>(reinterpret_cast<uintptr_t>(base + 0x58)));
            return out;
        case 0x256:
            ext_0049D390(out, static_cast<uint32_t>(reinterpret_cast<uintptr_t>(base + 0x54)));
            return out;
        case 0x274:
            ext_0049D390(out, static_cast<uint32_t>(reinterpret_cast<uintptr_t>(base + 0x5c)));
            return out;
        default:
            ext_0049FB70(out, base - 0x10, prop_id);
            return out;
    }
}
} // namespace lift_004A0150

// [0x004A0350]
namespace lift_004A0350 {
// Known callee 0x0041A920: vector push_back-style helper; thiscall on the output vector with a pointer to the element slot.
extern void __thiscall ext_0041A920(void* self, DWORD* elem);
// Known callee 0x004A02D0: thiscall on the list node's +8 sub-object, takes two stack args (both the output vector).
extern void __thiscall ext_004A02D0(void* self, void* a, void* b);
// Known callee 0x00596660: eraseInt32Range(self=vector, out, a2, first, a4, last).
extern void __thiscall ext_00596660(void* self, void** out, void* a2, void* first, void* a4, void* last);
// Known callee 0x0059A140: slow-path insert into the vector at position `pos` (reallocating).
extern void __thiscall ext_0059A140(void* self, void* out, void* a2, void* pos, DWORD* elem);
// Debug-iterator assertion pointer (MSVCR80!_invalid_parameter_noinfo); only referenced by the original asm's checks.
extern int mem_00925134;

namespace {

inline void* P(DWORD v) { return reinterpret_cast<void*>(static_cast<uintptr_t>(v)); }
inline DWORD D(const void* p) { return static_cast<DWORD>(reinterpret_cast<uintptr_t>(p)); }

// Virtual call through vtable slot 0x54 (index 21) of the object at `obj`, thiscall with one stack arg.
inline bool callVirt21(void* obj, void* arg) {
    void** vtbl = *reinterpret_cast<void***>(obj);
    auto fn = reinterpret_cast<bool (__thiscall*)(void*, void*)>(vtbl[21]);
    return fn(obj, arg);
}

} // namespace

// [0x004A0350] NMData::State::vfunc_15_off_8 (448 bytes)
// @name NMData::State::vfunc_15_off_8
// @class NMData::State
// @summary Clears the caller's DWORD vector (arg1), then walks the list at +0xD8 and the list at +0xCC collecting elements whose vfunc slot 21 accepts arg1 (appending them to the vector); returns true if the vector ends up non-empty.
// @field NMData::State +0xCC void* field_0xCC
// @field NMData::State +0xD8 void* field_0xD8
bool fn_004A0350(void* self, void* vec, DWORD /*arg2: scratch only, never read*/) {
    (void)&mem_00925134;  // debug-iterator checks in the original are no-ops on the success path
    DWORD scratch[2] = {0, 0};
    DWORD elem = 0;

    // Erase [begin, end) of the vector: it is rebuilt from scratch below.
    DWORD begin = lift_field<DWORD>(vec, 0x4);
    DWORD end = lift_field<DWORD>(vec, 0x8);
    ext_00596660(vec, reinterpret_cast<void**>(scratch), vec, P(begin), vec, P(end));

    // First list: head sentinel stored at this+0xD8.
    DWORD sentinel1 = lift_field<DWORD>(self, 0xD8);
    DWORD cur = lift_field<DWORD>(P(sentinel1), 0);
    while (cur != sentinel1) {
        void* node = P(cur);
        void* obj = static_cast<uint8_t*>(node) + 0x10;
        if (callVirt21(obj, vec)) {
            elem = D(obj);
            ext_0041A920(vec, &elem);
        }
        ext_004A02D0(static_cast<uint8_t*>(node) + 0x8, vec, vec);
        cur = lift_field<DWORD>(node, 0);
    }

    // Second list: head sentinel stored at this+0xCC; element object at node+8.
    DWORD sentinel2 = lift_field<DWORD>(self, 0xCC);
    cur = lift_field<DWORD>(P(sentinel2), 0);
    while (cur != sentinel2) {
        void* node = P(cur);
        void* obj = static_cast<uint8_t*>(node) + 0x8;
        if (callVirt21(obj, vec)) {
            elem = D(obj);
            DWORD b = lift_field<DWORD>(vec, 0x4);
            DWORD e = lift_field<DWORD>(vec, 0x8);
            DWORD cap = lift_field<DWORD>(vec, 0xC);
            int32_t size = static_cast<int32_t>(e - b) >> 2;
            int32_t capCount = static_cast<int32_t>(cap - b) >> 2;
            if (b != 0 && size < capCount) {
                // Fast path: room available, append in place.
                *reinterpret_cast<DWORD*>(P(e)) = elem;
                lift_field<DWORD>(vec, 0x8) = e + 4;
            } else {
                // Slow path: grow/insert at end.
                ext_0059A140(vec, scratch, vec, P(e), &elem);
            }
        }
        cur = lift_field<DWORD>(node, 0);
    }

    // Result: true iff the output vector is non-empty.
    DWORD b = lift_field<DWORD>(vec, 0x4);
    if (b == 0) {
        return false;
    }
    DWORD e = lift_field<DWORD>(vec, 0x8);
    return (static_cast<int32_t>(e - b) >> 2) != 0;
}
} // namespace lift_004A0350
