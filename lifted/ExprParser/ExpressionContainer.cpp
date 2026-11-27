// Lifted C++ translation unit: lifted/ExprParser/ExpressionContainer.cpp
#include "lift_compat.h"

// [0x0069A1F0]
namespace lift_0069A1F0 {
// @name ExprParser::ExpressionContainer::vfunc_2
// @class ExprParser::ExpressionContainer
// @summary Looks up an expression entry by key and initializes the output handle with the matching element or an empty handle.
// @field ExprParser::ExpressionContainer +0x08 uint8_t field_0x08
// @field ExprParser::ExpressionContainer +0x1C uint8_t* field_0x1c
// @field ExprParser::ExpressionContainer +0x20 uint8_t* field_0x20

uint32_t* __thiscall ext_0057CCE0(void* self, uint32_t key);
void* __cdecl ext_006721F0(void* out, void* elem);
void __cdecl ext_00671F30(void* out);
extern void (__cdecl* mem_00925134)();

void* __thiscall fn_0069A1F0(void* self, void* out, uint32_t key) {
    uint8_t* base = static_cast<uint8_t*>(self);
    uint32_t* idx_ptr = ext_0057CCE0(base + 0x08, key);
    if (!idx_ptr) {
        ext_00671F30(out);
        return out;
    }

    uint8_t* vec_begin = lift_field<uint8_t*>(base, 0x1C);
    uint32_t idx = *idx_ptr;
    if (!vec_begin) {
        mem_00925134();
    } else {
        uint8_t* vec_end = lift_field<uint8_t*>(base, 0x20);
        int32_t count = static_cast<int32_t>(vec_end - vec_begin) >> 3;
        if (idx >= static_cast<uint32_t>(count)) {
            mem_00925134();
        }
    }

    vec_begin = lift_field<uint8_t*>(base, 0x1C);
    ext_006721F0(out, vec_begin + idx * 8);
    return out;
}
} // namespace lift_0069A1F0

// [0x0069B070]
namespace lift_0069B070 {
// @name ExprParser::ExpressionContainer::vfunc_10
// @class ExprParser::ExpressionContainer
// @summary Dynamic-casts the argument to RTTI type 0x00AA3D80; if the cast succeeds, invokes three sub-object helpers pairing this+0x08/+0x18/+0x28 with the cast result's +0x08/+0x18/+0x28.
// @field ExprParser::ExpressionContainer +0x08 uint8_t field_0x08
// @field ExprParser::ExpressionContainer +0x18 uint8_t field_0x18
// @field ExprParser::ExpressionContainer +0x28 uint8_t field_0x28

extern int mem_00A2E2F8;
extern int mem_00AA3D80;

// Known callee 0x006A6E9E: thunk_MSVCR80___RTDynamicCast (IAT jump thunk forwarding to MSVCR80!__RTDynamicCast.)
extern void* ext_006A6E9E(void* inptr, int vfDelta, const void* srcType, const void* targetType, int isReference);
// Known callee 0x0069A590: sub_0069A590 (366B)
extern void __thiscall ext_0069A590(void* self, void* other);
// Known callee 0x00490C80: sub_00490C80 (317B)
extern void __thiscall ext_00490C80(void* self, void* other);
// Known callee 0x00491150: sub_00491150 (82B)
extern void __thiscall ext_00491150(void* self, void* other);

// Lifted from ExprParser::ExpressionContainer::vfunc_10 (0x0069B070), 0x78 bytes, __thiscall with one stack arg.
void __thiscall fn_0069B070(void* self, void* arg) {
    uint8_t* self_b = static_cast<uint8_t*>(self);
    uint8_t* esi = static_cast<uint8_t*>(ext_006A6E9E(arg, 0, &mem_00A2E2F8, &mem_00AA3D80, 0));
    if (esi == nullptr) {
        return;
    }
    ext_0069A590(self_b + 0x08, esi + 0x08);
    ext_00490C80(self_b + 0x18, esi + 0x18);
    ext_00491150(self_b + 0x28, esi + 0x28);
}
} // namespace lift_0069B070

// [0x0069ACC0]
namespace lift_0069ACC0 {
// @name ExprParser::ExpressionContainer::vfunc_1_off_4
// @class ExprParser::ExpressionContainer
// @summary Loads expression definitions from an XML node and populates the expression container.
// @field ExprParser::ExpressionContainer +0x04 uint8_t[] field_0x04
// @field ExprParser::ExpressionContainer +0x08 uint8_t field_0x08
// @field ExprParser::ExpressionContainer +0x0c uint32_t field_0x0c
// @field ExprParser::ExpressionContainer +0x14 uint8_t[] field_0x14
// @field ExprParser::ExpressionContainer +0x24 uint8_t[] field_0x24


extern uint32_t mem_00AA23B8;
extern uint32_t mem_00AA2354;
extern uint32_t mem_00AA23D0;
extern uint32_t mem_00AA2404;
extern uint32_t mem_00AA2400;
extern uint32_t mem_00AA23DC;
extern uint32_t mem_00B599BC;

extern uint32_t (__thiscall *ext_0063EFE0)(void* self, uint32_t name);
extern void (__thiscall *ext_00427A60)(void* self);
extern void* (__thiscall *ext_004275C0)(void* self, void* out_str);
extern void (__cdecl *ext_0053F5F0)(int32_t* out, void* src);
extern uint32_t (__cdecl *ext_00671100)(int32_t val);
extern uint32_t (__cdecl *ext_00671490)(void* str);
extern void (__cdecl *ext_006824E0)(void* node, void* out_str, int32_t flag, uint32_t attr_name);
extern void (__thiscall *ext_0069ABD0)(void* self, void* name_str, void* entry, int32_t flag);
extern void (__thiscall *ext_0067FAB0)(void* self, int32_t count);
extern void (__thiscall *ext_004E3D30)(void* self, uint32_t val);

extern void* (__thiscall *ext_00924FDC)(void* self, void* other);
extern void (__thiscall *ext_00924FF4)(void* self);
extern uint8_t (__cdecl *ext_00924FC0)(void* str, const char* cstr);
extern const char* (__thiscall *ext_00924FF0)(void* self);
extern int32_t (__cdecl *ext_009251E4)(const char* str);
extern void (__thiscall *ext_00924FE8)(void* self);
extern void (__cdecl *ext_00925134)();

struct CheckedVecIter {
    void* container;
    void* parent;
    uint8_t* ptr;
};

void __thiscall fn_0069ACC0(uint8_t* self, uint8_t* xml_node) {
    uint8_t temp_str[0x1C];

    uint32_t attr_ptr = ext_0063EFE0(xml_node, mem_00AA23B8);
    void* attr_obj = reinterpret_cast<void*>(static_cast<uintptr_t>(attr_ptr));
    auto vtable_attr = *reinterpret_cast<uint32_t**>(attr_obj);
    auto vfunc_4 = reinterpret_cast<void* (__thiscall*)(void*, void*)>(vtable_attr[1]);
    void* s = vfunc_4(attr_obj, temp_str);
    ext_00924FDC(self + 0x24, s);
    ext_00924FF4(temp_str);

    uint8_t* children_vec = xml_node + 0x24;
    uint8_t* children_begin = *reinterpret_cast<uint8_t**>(children_vec + 0x04);
    uint8_t* children_end = *reinterpret_cast<uint8_t**>(children_vec + 0x08);
    if (children_begin > children_end) {
        ext_00925134();
    }
    CheckedVecIter it_cur{children_vec, children_vec, children_begin};
    ext_00427A60(&it_cur);

    CheckedVecIter it_end{children_vec, children_vec, *reinterpret_cast<uint8_t**>(children_vec + 0x08)};
    ext_00427A60(&it_end);

    while (it_cur.ptr < it_end.ptr) {
        uint8_t* child = *reinterpret_cast<uint8_t**>(it_cur.ptr);
        if (ext_00924FC0(child + 0x04, reinterpret_cast<const char*>(static_cast<uintptr_t>(mem_00AA2354))) != 0) {
            uint32_t a_ptr = ext_0063EFE0(child, mem_00AA23D0);
            void* a_obj = reinterpret_cast<void*>(static_cast<uintptr_t>(a_ptr));
            void* a_str = ext_004275C0(&a_obj, temp_str);
            const char* cstr = ext_00924FF0(a_str);
            int32_t parsed_int = ext_009251E4(cstr);
            ext_00924FF4(temp_str);

            uint32_t b_ptr = ext_0063EFE0(child, mem_00AA2404);
            uint32_t val_edi = 0;
            if (b_ptr == 0x00B53A34u || b_ptr == 0x00B53B30u || b_ptr == 0x00B53AB0u ||
                b_ptr == 0x00B53A70u || b_ptr == 0x00B53AF0u) {
                uint32_t c_ptr = ext_0063EFE0(child, mem_00AA2400);
                void* c_obj = reinterpret_cast<void*>(static_cast<uintptr_t>(c_ptr));
                auto vtable_c = *reinterpret_cast<uint32_t**>(c_obj);
                auto vfunc_8 = reinterpret_cast<void* (__thiscall*)(void*, void*)>(vtable_c[2]);
                void* c_str = vfunc_8(c_obj, temp_str);
                val_edi = ext_00671490(c_str);
                ext_00924FF4(temp_str);
            } else {
                uint32_t b2_ptr = ext_0063EFE0(child, mem_00AA2404);
                void* b2_obj = reinterpret_cast<void*>(static_cast<uintptr_t>(b2_ptr));
                int32_t int_out = 0;
                ext_0053F5F0(&int_out, &b2_obj);
                val_edi = ext_00671100(int_out);
            }

            uint8_t str_buf[0x1C];
            ext_00924FE8(str_buf);
            ext_006824E0(child, str_buf, 1, mem_00AA23DC);

            uint32_t g_ptr = mem_00B599BC;
            uint32_t pair_a[2] = {0, g_ptr};
            uint32_t tmp_val = 0;
            uint32_t* res_ptr = &tmp_val;
            if (g_ptr != 0) {
                void* g_obj = reinterpret_cast<void*>(static_cast<uintptr_t>(g_ptr));
                auto vtable_g = *reinterpret_cast<uint32_t**>(g_obj);
                auto vfunc_70 = reinterpret_cast<uint32_t* (__thiscall*)(void*, uint32_t*, uint32_t*)>(vtable_g[0x70 / 4]);
                res_ptr = vfunc_70(g_obj, &tmp_val, pair_a);
            }

            uint32_t entry[4] = {
                static_cast<uint32_t>(parsed_int),
                val_edi,
                *res_ptr,
                pair_a[1]
            };
            ext_0069ABD0(self + 0x04, str_buf, entry, 1);

            if (entry[3] != 0) {
                void* e_obj = reinterpret_cast<void*>(static_cast<uintptr_t>(entry[3]));
                auto vtable_e = *reinterpret_cast<uint32_t**>(e_obj);
                auto vfunc_78 = reinterpret_cast<void (__thiscall*)(void*, uint32_t*)>(vtable_e[0x78 / 4]);
                vfunc_78(e_obj, &entry[2]);
            }
            if (pair_a[1] != 0) {
                void* p_obj = reinterpret_cast<void*>(static_cast<uintptr_t>(pair_a[1]));
                auto vtable_p = *reinterpret_cast<uint32_t**>(p_obj);
                auto vfunc_78 = reinterpret_cast<void (__thiscall*)(void*, uint32_t*)>(vtable_p[0x78 / 4]);
                vfunc_78(p_obj, &pair_a[0]);
            }
            ext_00924FF4(str_buf);
        }

        it_cur.ptr += 4;
        ext_00427A60(&it_cur);
    }

    uint8_t* vec = self + 0x04;
    uint32_t begin_addr = *reinterpret_cast<uint32_t*>(self + 0x08);
    int32_t count = 0;
    if (begin_addr != 0) {
        uint32_t end_addr = *reinterpret_cast<uint32_t*>(vec + 0x08);
        count = static_cast<int32_t>(end_addr - begin_addr) / 0x2C;
    }
    ext_0067FAB0(self + 0x14, count);

    uint8_t* cur = *reinterpret_cast<uint8_t**>(vec + 0x04);
    uint8_t* end = *reinterpret_cast<uint8_t**>(vec + 0x08);
    while (cur != end) {
        void* item_obj = *reinterpret_cast<void**>(cur + 0x20);
        auto vtable_item = *reinterpret_cast<uint32_t**>(item_obj);
        auto vfunc_48 = reinterpret_cast<uint32_t (__thiscall*)(void*, uint32_t)>(vtable_item[0x48 / 4]);
        uint32_t val = vfunc_48(item_obj, 0);
        ext_004E3D30(self + 0x14, val);
        cur += 0x2C;
    }
}
} // namespace lift_0069ACC0
