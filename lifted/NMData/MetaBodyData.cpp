// Lifted C++ translation unit: lifted/NMData/MetaBodyData.cpp
#include "lift_compat.h"
#include <new>
#include <string>
extern "C" void __thiscall ext_0058A370(void* self, void* a, void* b);
extern "C" const float* ext_005B11F0(void* self);
extern "C" const float* __thiscall ext_005B11F0(void* self);

// [0x005B64A0] NMData::MetaBodyData::vfunc_2 (32 bytes)
// @name NMData::MetaBodyData::vfunc_2
// @class NMData::MetaBodyData
// @summary Auto-lifted identical-shape clone of 0x005C32B0 (NMData::FluidObjectData::vfunc_15).
void* __thiscall fn_005B64A0(void* self, void* a, void* b) {
    ext_0058A370(self, a, b);
    return a;
}

// [0x005B6880]
// @name NMData::MetaBodyData::vfunc_6_off_C
// @class NMData::MetaBodyData
// @summary If field_0x14C is non-null, copy the xyz of the vec3 returned by ext_005B11F0(field+0x24) into the out vec4 and zero its w component.
// @field NMData::MetaBodyData +0x14C void* field_0x14C
void fn_005B6880(void* self, float* out) {
    void* p = lift_field<void*>(self, 0x14C);
    if (p == nullptr) {
        return;
    }
    const float* src = ext_005B11F0(static_cast<uint8_t*>(p) + 0x24);
    const float x = src[0];
    const float y = src[1];
    const float z = src[2];
    out[0] = x;
    out[1] = y;
    out[2] = z;
    out[3] = 0.0f;
}

// [0x005B6E70]
// @name NMData::MetaBodyData::vfunc_36
// @class NMData::MetaBodyData
// @summary Scales the RenderObjectOwner vector at +0xC by *scale and updates the render object at +0x10 if +0x158 is non-null.
// @field NMData::MetaBodyData +0x0C void* renderObjectOwner_vptr
// @field NMData::MetaBodyData +0x10 void* renderObject
// @field NMData::MetaBodyData +0x158 void* field_0x158
void __thiscall fn_005B6E70(void* this_ptr, const float* scale) {
    auto* base = static_cast<uint8_t*>(this_ptr);
    void* field_0x158 = *reinterpret_cast<void**>(base + 0x158);
    if (!field_0x158) {
        return;
    }

    float vec[4] = {0.0f, 0.0f, 0.0f, 0.0f};
    void* owner = base + 0xC;
    void** owner_vtbl = *reinterpret_cast<void***>(owner);

    using GetVecFn = void(__thiscall*)(void*, float*);
    reinterpret_cast<GetVecFn>(owner_vtbl[6])(owner, vec);

    const float s = *scale;
    vec[0] *= s;
    vec[1] *= s;
    vec[2] *= s;

    owner_vtbl = *reinterpret_cast<void***>(owner);
    using SetVecFn = void(__thiscall*)(void*, float*);
    reinterpret_cast<SetVecFn>(owner_vtbl[5])(owner, vec);

    void* render_obj = *reinterpret_cast<void**>(base + 0x10);
    if (render_obj) {
        void** render_vtbl = *reinterpret_cast<void***>(render_obj);
        auto* renderer_sub = static_cast<uint8_t*>(field_0x158) + 0x24;
        const float* arg = ext_005B11F0(renderer_sub);
        using RenderUpdateFn = void(__thiscall*)(void*, const float*);
        reinterpret_cast<RenderUpdateFn>(render_vtbl[13])(render_obj, arg);
    }
}

// [0x005B6F00]
// @name NMData::MetaBodyData::vfunc_38
// @class NMData::MetaBodyData
// @summary Scales a dimension of the render object's bounding/transform vector and updates the attached object.
// @field NMData::MetaBodyData +0x0C void* field_0x0C
// @field NMData::MetaBodyData +0x10 void* field_0x10
// @field NMData::MetaBodyData +0x158 void* field_0x158

#include "lift_compat.h"

extern "C" const float* __thiscall ext_005B11F0(void* self);

void __thiscall fn_005B6F00(void* self, const float* scale) {
    uint8_t* obj = static_cast<uint8_t*>(self);
    uint8_t* field_158 = *reinterpret_cast<uint8_t**>(obj + 0x158);
    if (!field_158) {
        return;
    }

    float vec[4] = {0.0f, 0.0f, 0.0f, 0.0f};
    void* sub_0c = obj + 0x0C;
    void** vtbl_0c = *reinterpret_cast<void***>(sub_0c);
    using GetVecFn = void(__thiscall*)(void*, float*);
    reinterpret_cast<GetVecFn>(vtbl_0c[0x18 / 4])(sub_0c, vec);

    uint32_t mode = *reinterpret_cast<uint32_t*>(field_158 + 0x2C);
    void* sub_24 = field_158 + 0x24;
    if (mode == 5 || mode == 4) {
        vec[1] *= *scale;
    } else if (mode == 2) {
        vec[2] *= *scale;
    }

    vtbl_0c = *reinterpret_cast<void***>(sub_0c);
    using SetVecFn = void(__thiscall*)(void*, float*);
    reinterpret_cast<SetVecFn>(vtbl_0c[0x14 / 4])(sub_0c, vec);

    void* field_10 = *reinterpret_cast<void**>(obj + 0x10);
    if (field_10) {
        void** vtbl_10 = *reinterpret_cast<void***>(field_10);
        const float* res = ext_005B11F0(sub_24);
        using UpdateFn = void(__thiscall*)(void*, const float*);
        reinterpret_cast<UpdateFn>(vtbl_10[0x34 / 4])(field_10, res);
    }
}

// [0x005C0E00]
namespace lift_005C0E00 {
// @name NMData::MetaBodyData::vfunc_6
// @class NMData::MetaBodyData
// @summary Iterates over elements in vector at +0x7C, calls vtable+0x24 on each, and passes the result to sub_0040ECB0
// @field NMData::MetaBodyData +0x80 uint32_t* field_0x80
// @field NMData::MetaBodyData +0x84 uint32_t* field_0x84


extern uint32_t mem_00925134;
extern void __thiscall ext_0040ECB0(void* self, uint32_t arg);

void __thiscall fn_005C0E00(void* self, void* arg1) {
    uint8_t* esi = static_cast<uint8_t*>(self) + 0x7C;
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

// [0x005BFC90]
namespace lift_005BFC90 {
// @name NMData::MetaBodyData::vfunc_14
// @class NMData::MetaBodyData
// @summary Handles property/data queries (0xB8, 0x39, 0x8C) on MetaBodyData, delegating to AxisDefineSensorData::vfunc_14 otherwise.
// @field NMData::MetaBodyData +0x158 void* field_0x158
// @field NMData::MetaBodyData +0x15C void* field_0x15C
// @field NMData::MetaBodyData +0x160 void* field_0x160
// @field NMData::MetaBodyData +0x168 void* field_0x168
// @field NMData::MetaBodyData +0x16C void* field_0x16C


extern void* __thiscall ext_0058F6B0(void* self, void* arg1, uint32_t arg2);
extern void __thiscall ext_00661650(void* self, void* arg1);
extern void __thiscall ext_00673C20(void* iter);
extern void (*mem_00925134)();

namespace {

struct CheckedIter {
    void* container;
    void* node;
};

void* find_matching_entry(void* self, uint32_t container_offset) {
    char* edi = reinterpret_cast<char*>(self) + container_offset;
    void* head = *reinterpret_cast<void**>(edi + 4);
    CheckedIter iter;
    iter.container = edi;
    iter.node = *reinterpret_cast<void**>(head);

    while (true) {
        void* end_node = *reinterpret_cast<void**>(edi + 4);
        if (iter.container == nullptr || iter.container != edi) {
            mem_00925134();
        }
        if (iter.node == end_node) {
            return nullptr;
        }
        if (iter.container == nullptr) {
            mem_00925134();
        }
        if (iter.node == *reinterpret_cast<void**>(reinterpret_cast<char*>(iter.container) + 4)) {
            mem_00925134();
        }
        void* entry = *reinterpret_cast<void**>(reinterpret_cast<char*>(iter.node) + 0x28);
        if (*reinterpret_cast<uint32_t*>(reinterpret_cast<char*>(entry) + 0x15C) == 0) {
            return entry;
        }
        ext_00673C20(&iter);
    }
}

}  // namespace

void* __thiscall fn_005BFC90(void* self, void* arg1, uint32_t arg2) {
    if (arg2 == 0xB8) {
        void* val = lift_field<void*>(self, 0x158);
        if (val != nullptr) {
            ext_00661650(arg1, val);
            return arg1;
        }
    }

    if (arg2 == 0x39 || arg2 == 0xB8) {
        void* entry = find_matching_entry(self, 0x15C);
        if (entry != nullptr) {
            ext_00661650(arg1, entry);
            return arg1;
        }
    }

    if (arg2 == 0x8C || arg2 == 0x39 || arg2 == 0xB8) {
        void* entry = find_matching_entry(self, 0x168);
        if (entry != nullptr) {
            ext_00661650(arg1, entry);
            return arg1;
        }
    }

    ext_0058F6B0(self, arg1, arg2);
    return arg1;
}
} // namespace lift_005BFC90

// [0x005C1410] NMData::MetaBodyData::vfunc_17_off_C (148 bytes)
namespace lift_005C1410 {
extern void* ext_006A5C62(size_t size);                  // thunk_MFC80_ord_762 (operator new, cdecl)
extern void* __thiscall ext_005C1060(void* self, void* arg);  // sub_005C1060
extern int mem_00B40640;

// @name NMData::MetaBodyData::vfunc_17_off_C
// @class NMData::MetaBodyData
// @summary Allocates a 0x220-byte object, initialises it via sub_005C1060, copies 64 bytes from the TransformInterface-supplied buffer into the new object's buffer, then calls its slot 1 with flag 0.
// @field NMData::MetaBodyData +0x04 void* transformInterface_vptr
void* __thiscall fn_005C1410(void* self) {
    // self is the subobject at MetaBodyData +0x0C; the full object starts 0x0C bytes earlier.
    auto* esi = static_cast<uint8_t*>(self);
    auto* obj = esi - 0x0C;

    void* result = ext_006A5C62(0x220);
    if (result) {
        result = ext_005C1060(result, obj);
    }

    // Source buffer: TransformInterface (obj+0x04) vtable slot 5, arg = mem_00B40640.
    void** iface_vtbl = *reinterpret_cast<void***>(esi - 0x08);
    using SrcFn = void*(__thiscall*)(void*, int);
    void* src = reinterpret_cast<SrcFn>(iface_vtbl[5])(esi - 0x08, mem_00B40640);

    // Destination buffer: result+0x04 subobject, vtable slot 11.
    auto* sub = static_cast<uint8_t*>(result) + 0x04;
    void** sub_vtbl = *reinterpret_cast<void***>(sub);
    using DstFn = void*(__thiscall*)(void*);
    void* dst = reinterpret_cast<DstFn>(sub_vtbl[11])(sub);

    // rep movsd, ecx = 0x10 dwords.
    std::memcpy(dst, src, 0x10 * sizeof(uint32_t));

    // Destructor-style call on the subobject: vtable slot 1 with flag 0.
    sub_vtbl = *reinterpret_cast<void***>(sub);
    using FlagFn = void(__thiscall*)(void*, int);
    reinterpret_cast<FlagFn>(sub_vtbl[1])(sub, 0);

    return result;
}
} // namespace lift_005C1410

// [0x005BFBD0] NMData::MetaBodyData::vfunc_5_off_C (188 bytes)
namespace lift_005BFBD0 {
// Known callee 0x005B11F0: OglRenderer::vfunc_118 (4B) (thiscall; ecx = this, returns float* in eax).
extern float* ext_005B11F0(void* self);
// Known callee 0x005B1B60: Unknown::copyVec4AndSetFlag04 (lifted; copies four floats from src into self+0x10..0x1c and sets the flag byte at self+0x04 to 1).
extern void ext_005B1B60(void* self, const void* src);
// Known callee 0x005BFA80: sub_005BFA80 (329B) (thiscall; ecx = self-0xC, args: (sub, out_vec3*)).
extern void ext_005BFA80(void* self, void* sub, float* out);

// @name NMData::MetaBodyData::vfunc_5_off_C
// @class NMData::MetaBodyData
// @summary Divides the src float triple by the sub-object's reference vector, copies the reference into the sub-object, optionally notifies the object at +0x04 via vtable slot 0x34, and forwards the result to sub_005BFA80.
// @field NMData::MetaBodyData +0x04 void* field_0x04
// @field NMData::MetaBodyData +0x14C void* field_0x14C
void fn_005BFBD0(void* self, const float* src) {
    void* sub_ptr = lift_field<void*>(self, 0x14C);
    if (sub_ptr == nullptr) {
        return;
    }

    uint8_t* sub = reinterpret_cast<uint8_t*>(sub_ptr) + 0x24;

    // Reference vector p = sub->vfunc_118()
    float* p = ext_005B11F0(sub);
    float p0 = p[0];
    float p1 = p[1];
    float p2 = p[2];

    // Copy the source into the sub-object.
    ext_005B1B60(sub, src);

    float r[3];
    r[0] = src[0] / p0;
    r[1] = 0.0f;
    r[2] = 0.0f;

    int32_t type = lift_field<int32_t>(sub, 0x8);
    if (type == 4 || type == 5) {
        r[1] = 0.0f;
        r[2] = src[1] / p1;
    } else {
        r[1] = src[1] / p1;
        r[2] = src[2] / p2;
    }

    void* obj = lift_field<void*>(self, 0x4);
    if (obj != nullptr) {
        float* p3 = ext_005B11F0(sub);
        void* vt = lift_field<void*>(obj, 0);
        auto hook = lift_field<void (*)(void*, float*)>(vt, 0x34);
        hook(obj, p3);
    }

    ext_005BFA80(static_cast<uint8_t*>(self) - 0xC, sub, r);
}
} // namespace lift_005BFBD0

// [0x005B8D90]
namespace lift_005B8D90 {
// Known callee 0x00435D00 (ext_00435D00): one stack arg, returns eax; applied three times to the stream result.
extern uint32_t ext_00435D00(uint32_t);

// MSVCP80 IAT slots (values hold the imported function pointers).
extern int mem_00924E4C;  // basic_ostringstream::ctor(openmode)
extern int mem_00924E94;  // std::operator<<(ostream&, ...) family
extern int mem_00B4171C;  // global operand pushed into the stream chain
extern int mem_00924FF4;  // basic_string::~basic_string
extern int mem_00924E54;  // basic_ostringstream::str (sret)
extern int mem_00924E58;  // basic_ostringstream::~basic_ostringstream

// @name NMData::MetaBodyData::vfunc_3
// @class NMData::MetaBodyData
// @summary Formats a value from the sub-object at +0x20c into a temporary ostringstream, writes it through the MSVCP stream chain and the ext_00435D00 helper, and returns the resulting string via the sret pointer.
// @field NMData::MetaBodyData +0x00 void* vtable
// @field NMData::MetaBodyData +0x20c void* subObject
void* fn_005B8D90(void* self, void* out) {
    alignas(8) uint8_t oss[0x100];   // local basic_ostringstream object
    alignas(8) uint8_t tmp[0x20];    // local basic_string

    auto imp = [](int slot) {
        return reinterpret_cast<void*>(static_cast<uintptr_t>(static_cast<uint32_t>(slot)));
    };

    using ctor_t  = void(__thiscall*)(void*, int);
    using dtor_t  = void(__thiscall*)(void*);
    using str_t   = void*(__thiscall*)(void*, void*);
    using strdt_t = void(__thiscall*)(void*);
    using ins_t   = void*(*)(void*, uint32_t);
    using vfn3_t  = uint32_t(__thiscall*)(void*, void*);
    using vfn9_t  = uint32_t(__thiscall*)(void*);

    // oss(2)
    reinterpret_cast<ctor_t>(imp(mem_00924E4C))(oss, 2);

    // sub = self->[0x20c]->[0x18c]; inner = sub+4; r = inner->vtbl[3](&tmp)
    uint8_t* obj   = *reinterpret_cast<uint8_t**>(static_cast<uint8_t*>(self) + 0x20c);
    uint8_t* sub   = *reinterpret_cast<uint8_t**>(obj + 0x18c);
    uint8_t* inner = sub + 0x4;
    void** vt      = *reinterpret_cast<void***>(inner);
    uint32_t edi   = reinterpret_cast<vfn3_t>(vt[3])(inner, tmp);

    // A = self->vtbl[9]()
    void** selfVt = *reinterpret_cast<void***>(self);
    uint32_t a    = reinterpret_cast<vfn9_t>(selfVt[9])(self);

    // stream chain: os = operator<<(oss, edi); then ext_00435D00 applied three times
    uint32_t os = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(
        reinterpret_cast<ins_t>(imp(mem_00924E94))(oss, edi)));
    os = ext_00435D00(os);
    os = ext_00435D00(os);
    os = ext_00435D00(os);
    os = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(
        reinterpret_cast<ins_t>(imp(mem_00924E94))(reinterpret_cast<void*>(static_cast<uintptr_t>(os)),
                                                   static_cast<uint32_t>(mem_00B4171C))));
    (void)a;

    // dispose temporary string, then str() into the sret buffer
    reinterpret_cast<strdt_t>(imp(mem_00924FF4))(tmp);
    reinterpret_cast<str_t>(imp(mem_00924E54))(oss, out);
    reinterpret_cast<dtor_t>(imp(mem_00924E58))(oss);

    return out;
}
} // namespace lift_005B8D90

// [0x005C16C0] NMData::MetaBodyData::vfunc_0_off_154 (233 bytes)
namespace lift_005C16C0 {
extern void ext_005C1310(void* self, uint32_t arg0, float arg1);
// Known callee 0x00647F00: sub_00647F00 (Auto-lifted identical-shape clone of 0x00648480 (GetIndirectField_0x5c_0x00).)
extern void* ext_00647F00(void* self);
extern void ext_00647FB0(void* self, const float* arg0);
extern void ext_0067DAD0(void* self, const float* arg0);
extern uint32_t mem_00B40640;

// @name NMData::MetaBodyData::vfunc_0_off_154
// @class NMData::MetaBodyData
// @summary RuntimeEngineEventListener thunk: clamps a float in [0,1] and forwards it, with a global, to ext_005C1310 after refreshing a transform matrix.
// @field NMData::MetaBodyData +0x04 void* field_0x04
// @field NMData::MetaBodyData +0x158 void* field_0x158
// @field NMData::MetaBodyData +0x20C void* field_0x20C
void fn_005C16C0(void* self) {
    // self is the RuntimeEngineEventListener subobject at MetaBodyData+0x154.
    uint8_t* obj = reinterpret_cast<uint8_t*>(self) - 0x154;

    if (lift_field<void*>(obj, 0x158) == nullptr) {
        return;
    }

    // TransformInterface subobject at MetaBodyData+0x04; virtual slot 5 (+0x14).
    uint8_t* tif = reinterpret_cast<uint8_t*>(obj) + 0x04;
    void** vtbl = *reinterpret_cast<void***>(tif);
    using VFn = void* (__thiscall*)(void* self, uint32_t arg0);
    void* xf = reinterpret_cast<VFn>(vtbl[5])(tif, mem_00B40640);

    float buf[9] = {1.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, 1.0f};
    ext_0067DAD0(xf, buf);

    void* dst = ext_00647F00(lift_field<void*>(lift_field<void*>(obj, 0x158), 0xAC));
    std::memcpy(dst, xf, 64);

    ext_00647FB0(lift_field<void*>(lift_field<void*>(obj, 0x158), 0xAC), buf);

    void* p20c = lift_field<void*>(obj, 0x20C);
    void* p18c = lift_field<void*>(p20c, 0x18C);
    float f = lift_field<float>(p18c, 0x604);

    // Clamp to [0,1]; NaN passes through unchanged (matches the x87 compare path).
    float clamped = f;
    if (f < 0.0f) {
        clamped = 0.0f;
    } else if (f > 1.0f) {
        clamped = 1.0f;
    }

    ext_005C1310(obj, mem_00B40640, clamped);
}
} // namespace lift_005C16C0

// [0x005C01A0] NMData::MetaBodyData::vfunc_4_off_C (85 bytes)
namespace lift_005C01A0 {
// Callee sub_005B1AB0 (165B): thiscall, one stack argument; signature not yet recovered.
extern void ext_005B1AB0(void* self, uint32_t arg);
// Known callee 0x005BEDD0: Unknown::notifyAcceptingEntries (Walks the intrusive list whose sentinel is at +0x15C; for each entry whose object at node+0x28 accepts (vtable +0x6C), forwards arg to its subobject at +0x0C (vtable +0x10).)
extern void ext_005BEDD0(void* self, uint32_t arg);
// Callee sub_005BFA80 (329B): thiscall, two stack arguments; signature not yet recovered.
extern void ext_005BFA80(void* self, void* a1, uint32_t a2);
// Known callee 0x005B11F0: OglRenderer::vfunc_118 (4B); thiscall, returns a value in EAX.
extern void* ext_005B11F0(void* self);

// @name NMData::MetaBodyData::vfunc_4_off_C
// @class NMData::MetaBodyData
// @summary Stdcall (ret 4) method: if the sub-object at +0x14C is set, forwards the argument to ext_005B1AB0 on its +0x24 subobject, then virtual slot 0x34 of the object at +0x04 (fed by ext_005B11F0); finally forwards to ext_005BFA80 and ext_005BEDD0 on this-0x0C.
// @field NMData::MetaBodyData +0x04 void* field_0x04
// @field NMData::MetaBodyData +0x14C void* field_0x14C
void fn_005C01A0(void* self, uint32_t arg) {
    void* sub = lift_field<void*>(self, 0x14C);
    if (sub == nullptr) {
        return;
    }

    void* subEdi = static_cast<uint8_t*>(sub) + 0x24;
    ext_005B1AB0(subEdi, arg);

    void* obj = lift_field<void*>(self, 0x04);
    if (obj != nullptr) {
        void** vtbl = *reinterpret_cast<void***>(obj);
        void* r = ext_005B11F0(subEdi);
        void* slotAddr = *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(vtbl) + 0x34);
        auto slot = reinterpret_cast<void (*)(void*, void*)>(slotAddr);
        slot(obj, r);
    }

    void* base = static_cast<uint8_t*>(self) - 0x0C;
    ext_005BFA80(base, subEdi, arg);
    ext_005BEDD0(base, arg);
}
} // namespace lift_005C01A0

// [0x005B8D00]
namespace lift_005B8D00 {
uintptr_t ext_00493E40(void* self);
void ext_00528B90(void* self, void* peer);
uintptr_t ext_005B5AF0(uintptr_t arg);

// @name NMData::MetaBodyData::vfunc_34
// @class NMData::MetaBodyData
// @summary Creates or retrieves a render object via TransformInterface, links it to RenderObjectOwner, and returns it.
// @field NMData::MetaBodyData +0x04 void* transformInterface_vptr
// @field NMData::MetaBodyData +0x0C void* renderObjectOwner_vptr
// @field NMData::MetaBodyData +0x158 void* field_0x158
void* fn_005B8D00(void* self, void* arg0) {
    uint8_t* base = static_cast<uint8_t*>(self);
    void* field_158 = *reinterpret_cast<void**>(base + 0x158);
    void* transform_iface = base + 0x04;
    void* render_owner = base + 0x0C;

    void** vtable = *reinterpret_cast<void***>(transform_iface);
    using VFunc11 = uintptr_t (*)(void* self, void* owner, uint32_t zero);
    VFunc11 fn = reinterpret_cast<VFunc11>(vtable[0x2C / 4]);
    uintptr_t vcall_res = fn(transform_iface, render_owner, 0);

    uintptr_t result;
    if (field_158 != nullptr) {
        result = ext_00493E40(arg0);
        uint8_t* sub = static_cast<uint8_t*>(*reinterpret_cast<void**>(base + 0x158));
        *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(result) + 0x20) = sub + 0x24;
    } else {
        uintptr_t tmp = ext_005B5AF0(vcall_res);
        (void)tmp;
        result = ext_00493E40(arg0);
    }

    ext_00528B90(render_owner, reinterpret_cast<void*>(result));
    return reinterpret_cast<void*>(result);
}
} // namespace lift_005B8D00

// [0x005C00E0] NMData::MetaBodyData::vfunc_33 (178 bytes)
namespace lift_005C00E0 {
// Known callee 0x0050BE20: Vector_eraseTailChecked (Validates the vector's begin/end/bound pointers, deletes the owned elements through ext_00536230, then erases the tail range via ext_00596660.)
extern void ext_0050BE20(void* self);
// Callee 0x005A0910: sub_005A0910 (86B, unnamed; thiscall with four stack args)
extern void ext_005A0910(void* self, void* a0, void* a1, void* a2, void* a3);
// Known callee 0x005AE480: ReleaseChainNodes (Recursively releases a sibling chain: for each node, releases its child chain, destroys its string member, and invokes the cleanup thunk.)
extern void ext_005AE480(void* self, void* first);
// Callee 0x0058A1A0: AnimatableTransform::vfunc_33 (22B), tail-called with this.
extern void ext_0058A1A0(void* self);

// @name NMData::MetaBodyData::vfunc_33
// @class NMData::MetaBodyData
// @summary Releases the owned object at +0x158, clears the two intrusive list members at +0x15C and +0x168 through ext_005A0910/ext_005AE480, then tail-calls ext_0058A1A0.
// @field NMData::MetaBodyData +0x158 void* field_0x158
// @field NMData::MetaBodyData +0x160 void* field_0x160
// @field NMData::MetaBodyData +0x164 uint32_t field_0x164
// @field NMData::MetaBodyData +0x16C void* field_0x16C
// @field NMData::MetaBodyData +0x170 uint32_t field_0x170
// @field NMData::MetaBodyData +0x174 void* field_0x174
void fn_005C00E0(void* self) {
    // if (self->field_0x158) self->field_0x158->vtable[0](1);  (virtual deleting dtor)
    void* owned = lift_field<void*>(self, 0x158);
    if (owned != nullptr) {
        void** vtable = *reinterpret_cast<void***>(owned);
        reinterpret_cast<void (*)(void*, int)>(vtable[0])(owned, 1);
    }
    lift_field<void*>(self, 0x158) = nullptr;

    // Vector_eraseTailChecked(&self->field_0x174)
    ext_0050BE20(reinterpret_cast<uint8_t*>(self) + 0x174);

    // First list at self+0x15C: head pointer at +4, size at +8.
    void* list1 = reinterpret_cast<uint8_t*>(self) + 0x15C;
    void* p1 = lift_field<void*>(self, 0x160);
    void* q1 = *static_cast<void**>(p1);
    ext_005A0910(list1, list1, q1, list1, p1);
    ext_005AE480(list1, lift_field<void*>(lift_field<void*>(list1, 4), 4));

    // Reset list1 to empty (sentinel head points to itself).
    void* h = lift_field<void*>(list1, 4);
    lift_field<void*>(h, 4) = h;
    h = lift_field<void*>(list1, 4);
    lift_field<uint32_t>(list1, 8) = 0;
    lift_field<void*>(h, 0) = h;
    h = lift_field<void*>(list1, 4);
    lift_field<void*>(h, 8) = h;

    // Second list at self+0x168: head pointer at +4, size at +8.
    void* list2 = reinterpret_cast<uint8_t*>(self) + 0x168;
    void* p2 = lift_field<void*>(self, 0x16C);
    void* q2 = *static_cast<void**>(p2);
    ext_005A0910(list2, list2, q2, list2, p2);
    ext_005AE480(list2, lift_field<void*>(lift_field<void*>(list2, 4), 4));

    // Reset list2 to empty.
    h = lift_field<void*>(list2, 4);
    lift_field<void*>(h, 4) = h;
    h = lift_field<void*>(list2, 4);
    lift_field<uint32_t>(list2, 8) = 0;
    lift_field<void*>(h, 0) = h;
    h = lift_field<void*>(list2, 4);
    lift_field<void*>(h, 8) = h;

    // Tail call AnimatableTransform::vfunc_33 with this = self.
    ext_0058A1A0(self);
}
} // namespace lift_005C00E0

// [0x005C05C0] NMData::MetaBodyData::vfunc_12_off_C (288 bytes)
namespace lift_005C05C0 {
// MSVC 2005 std::string: 28 bytes, opaque layout.
struct MsvcString {
    uint8_t raw[0x1C];
};

// Callees (thiscall in the original; `self` is passed explicitly here).
extern void ext_005C0360(void* self);
// Known callee 0x00481BD0: ZeroMatchingDwordRange (Zeroes every uint32_t in [self->+0x08, self->+0x0C) equal to value; calls the invalid-parameter handler if begin > end.)
extern void ext_00481BD0(void* self, uint32_t value);
extern void ext_00587520(void* self, void* arg1, void* arg2);
extern void ext_005BFEE0(void* self, MsvcString str);

// MSVCP80 std::string IAT slots (function pointers loaded from the import table).
extern void (*mem_00924FE4)(void* self, const char* s);    // basic_string(const char*)
extern void* (*mem_00924FDC)(void* self, const void* src); // basic_string::operator=(const basic_string&)
extern void (*mem_00924FF4)(void* self);                   // basic_string::~basic_string
extern void (*mem_00924FE0)(void* self, const void* src);  // basic_string(const basic_string&)
extern const char mem_00928B5D[];                          // .rdata string literal used by this function

// Virtual call through the vtable of `obj`; `slotOffset` is the byte offset into the vtable.
inline bool vcall_bool(void* obj, ptrdiff_t slotOffset) {
    using VFn = bool (*)(void* self);
    void* vtbl = lift_field<void*>(obj, 0);
    void* fn = lift_field<void*>(vtbl, slotOffset);
    return reinterpret_cast<VFn>(fn)(obj);
}

// @name MetaBodyData::vfunc_12_off_C
// @class NMData::MetaBodyData
// @summary Conditionally tears down a subobject through its vtable, then clears related state and copies a name string.
// @field NMData::MetaBodyData +0x08 MsvcString field_0x08
// @field NMData::MetaBodyData +0x200 void* field_0x200
// (offsets are relative to `self`, the sub-object at MetaBodyData+0xC, as accessed in the original asm)
bool fn_005C05C0(void* self, void* arg1, void* arg2) {
    void* a = lift_field<void*>(self, 0x200);
    void* b = lift_field<void*>(a, 0x18C);
    if (b != nullptr) {
        if (!vcall_bool(b, 0x40)) {
            return false;
        }
        if (vcall_bool(b, 0x28)) {
            void* a2 = lift_field<void*>(self, 0x200);
            if (a2 != nullptr && vcall_bool(a2, 0x70)) {
                return false;
            }
        }
    }

    void* outer = static_cast<uint8_t*>(self) - 0xC;
    ext_005C0360(outer);
    ext_00481BD0(arg2, static_cast<uint32_t>(reinterpret_cast<uintptr_t>(outer)));
    ext_00587520(self, arg1, arg2);

    void* a3 = lift_field<void*>(self, 0x200);
    lift_field<uint32_t>(a3, 0x22C) = 0;

    MsvcString tmp;
    mem_00924FE4(&tmp, mem_00928B5D);
    mem_00924FDC(&lift_field<MsvcString>(a3, 0x1B4), &tmp);
    mem_00924FF4(&tmp);

    MsvcString copy;
    mem_00924FE0(&copy, static_cast<uint8_t*>(self) + 0x8);
    // The asm passes `this+0x598` of the vfunc_16 object `b` as the callee's self.
    ext_005BFEE0(static_cast<uint8_t*>(b) + 0x598, copy);

    return true;
}
} // namespace lift_005C05C0

// [0x005BE840]
namespace lift_005BE840 {
// @name NMData::MetaBodyData::vfunc_22
// @class NMData::MetaBodyData
// @summary Creates a serialized/cloned node via ext_006404E0 and populates it with MetaBodyData fields and sub-objects
// @field NMData::MetaBodyData +0x158 void* field_0x158
// @field NMData::MetaBodyData +0x15C void* field_0x15C
// @field NMData::MetaBodyData +0x168 void* field_0x168
// @field NMData::MetaBodyData +0x174 void* field_0x174


extern uint32_t mem_00A9F0C4;

extern void* __thiscall ext_006404E0(void* self, uint32_t arg);
extern void __thiscall ext_0058F650(void* self, void* node);
extern void __cdecl ext_00585C10(void* field_ptr, void* node, uint32_t a, uint32_t b, uint32_t c);
extern void __cdecl ext_005A09D0(void* field_ptr, void* node, uint32_t a, uint32_t b, uint32_t c);
extern void __thiscall ext_005CE560(void* self, void* node);

void* __thiscall fn_005BE840(void* self, void* arg1) {
    uint8_t* base = static_cast<uint8_t*>(self);
    void* node = ext_006404E0(arg1, mem_00A9F0C4);
    ext_0058F650(self, node);
    ext_00585C10(base + 0x174, node, 0, 0, 0);
    ext_005A09D0(base + 0x15C, node, 0, 0, 0);
    ext_005A09D0(base + 0x168, node, 0, 0, 0);

    void* sub = *reinterpret_cast<void**>(base + 0x158);
    if (sub != nullptr) {
        ext_005CE560(sub, node);
    }

    return node;
}
} // namespace lift_005BE840

// [0x005BF770]
namespace lift_005BF770 {
// @name NMData::MetaBodyData::vfunc_13_off_C
// @class NMData::MetaBodyData
// @summary Initializes a MetaBodyData subobject, creates and configures its associated object, and updates child lists.
// @field NMData::MetaBodyData +0x08 void* field_0x08
// @field NMData::MetaBodyData +0x14C void* field_0x14C
// @field NMData::MetaBodyData +0x150 void* field_0x150
// @field NMData::MetaBodyData +0x154 void* field_0x154
// @field NMData::MetaBodyData +0x15C void* field_0x15C
// @field NMData::MetaBodyData +0x160 void* field_0x160
// @field NMData::MetaBodyData +0x200 void* field_0x200


    void __cdecl ext_005BE710(void* a1, void* a2);
    void* __cdecl ext_006A5C62(uint32_t size);
    void __thiscall ext_005EEEF0(void* self);
    void __thiscall ext_005A35D0(void* self, void* a1);
    void __thiscall ext_005EE9A0(void* self, void* a1);
    void __thiscall ext_005A3540(void* self, void* a1);
    void __thiscall ext_00587920(void* self, void* a1, uint32_t a2);
    void __thiscall ext_00673C20(void* iter);
    void __thiscall ext_005BE460(void* self, void* a1, void* a2);

    extern uint32_t mem_00924FDC;
    extern uint32_t mem_00A9F004;
    extern uint32_t mem_00924ECC;
    extern uint32_t mem_00924FF4;
    extern uint32_t mem_00925134;
    extern uint8_t mem_00B44014[];

struct MsvcListIter {
    void* container;
    void* node;
};

extern uint8_t __thiscall fn_005BF770(void* self_off_C, void* arg0) {
    char* esi = static_cast<char*>(self_off_C);
    void* str_ptr = esi + 0x8;

    using StringAssignFn = void* (__thiscall*)(void*, const void*);
    reinterpret_cast<StringAssignFn>(static_cast<uintptr_t>(mem_00924FDC))(str_ptr, mem_00B44014);

    char* arg0_sub = *reinterpret_cast<char**>(static_cast<char*>(arg0) + 0x20c);
    char* ebp = *reinterpret_cast<char**>(arg0_sub + 0x18c);
    ext_005BE710(ebp + 0x598, str_ptr);

    char* edi = static_cast<char*>(ext_006A5C62(0x2f8));
    if (edi != nullptr) {
        ext_005EEEF0(edi);
        *reinterpret_cast<uint32_t*>(edi + 0x0) = 0x958674;
        *reinterpret_cast<uint32_t*>(edi + 0x4) = 0x95862c;
        *reinterpret_cast<uint32_t*>(edi + 0x8) = 0x9585ec;
        *reinterpret_cast<uint32_t*>(edi + 0xc) = 0x95859c;
        *reinterpret_cast<uint32_t*>(edi + 0x150) = 0x958584;
        *reinterpret_cast<uint32_t*>(edi + 0x154) = 0x95857c;
    }

    uint8_t temp_str[32];
    using StringConcatFn = void* (__cdecl*)(void*, void*, uint32_t);
    void* concat_res = reinterpret_cast<StringConcatFn>(static_cast<uintptr_t>(mem_00924ECC))(
        temp_str, str_ptr, mem_00A9F004);

    void** vtable = *reinterpret_cast<void***>(edi);
    using Vfunc5CFn = void (__thiscall*)(void*, void*);
    reinterpret_cast<Vfunc5CFn>(vtable[0x5c / 4])(edi, concat_res);

    using StringDtorFn = void (__thiscall*)(void*);
    reinterpret_cast<StringDtorFn>(static_cast<uintptr_t>(mem_00924FF4))(temp_str);

    ext_005A35D0(ebp, edi);
    void* ebp_160 = ebp + 0x160;
    ext_005EE9A0(ebp_160, edi);

    char* base_obj = esi - 0xc;
    ext_005A3540(ebp, base_obj);

    *reinterpret_cast<void**>(esi + 0x200) = edi;
    *reinterpret_cast<void**>(edi + 0x190) = ebp_160;

    char* obj200 = *reinterpret_cast<char**>(esi + 0x200);
    *reinterpret_cast<uint32_t*>(obj200 + 0x228) = *reinterpret_cast<uint32_t*>(obj200 + 0x22c);

    obj200 = *reinterpret_cast<char**>(esi + 0x200);
    reinterpret_cast<StringAssignFn>(static_cast<uintptr_t>(mem_00924FDC))(
        obj200 + 0x198, obj200 + 0x1b4);

    obj200 = *reinterpret_cast<char**>(esi + 0x200);
    *reinterpret_cast<void**>(obj200 + 0x22c) = base_obj;

    obj200 = *reinterpret_cast<char**>(esi + 0x200);
    reinterpret_cast<StringAssignFn>(static_cast<uintptr_t>(mem_00924FDC))(
        obj200 + 0x1b4, esi + 0x8);

    obj200 = *reinterpret_cast<char**>(esi + 0x200);
    ext_00587920(obj200, base_obj, 0);

    obj200 = *reinterpret_cast<char**>(esi + 0x200);
    *reinterpret_cast<uint8_t*>(obj200 + 0x178) = 0;

    void* list1_container = esi + 0x150;
    void* list1_end = *reinterpret_cast<void**>(esi + 0x154);
    MsvcListIter iter1{list1_container, *reinterpret_cast<void**>(list1_end)};
    using InvalidParamFn = void (__cdecl*)();
    auto invalid_param = reinterpret_cast<InvalidParamFn>(static_cast<uintptr_t>(mem_00925134));
    while (iter1.node != *reinterpret_cast<void**>(esi + 0x154)) {
        if (iter1.container == nullptr || iter1.node == *reinterpret_cast<void**>(esi + 0x154)) {
            invalid_param();
        }
        char* item = *reinterpret_cast<char**>(static_cast<char*>(iter1.node) + 0x28);
        *reinterpret_cast<void**>(item + 0x164) = base_obj;
        *reinterpret_cast<uint8_t*>(item + 0x19c) = 1;
        *reinterpret_cast<uint8_t*>(item + 0x19d) = 1;
        *reinterpret_cast<uint8_t*>(item + 0x19e) = 1;
        ext_00587920(base_obj, item, 0);
        ext_00673C20(&iter1);
    }

    void* list2_container = esi + 0x15c;
    void* list2_end = *reinterpret_cast<void**>(esi + 0x160);
    MsvcListIter iter2{list2_container, *reinterpret_cast<void**>(list2_end)};
    while (iter2.node != *reinterpret_cast<void**>(esi + 0x160)) {
        char* item = *reinterpret_cast<char**>(static_cast<char*>(iter2.node) + 0x28);
        *reinterpret_cast<void**>(item + 0x164) = base_obj;
        ext_00587920(base_obj, item, 0);
        ext_00673C20(&iter2);
    }

    char* field_14c = *reinterpret_cast<char**>(esi + 0x14c);
    if (field_14c != nullptr) {
        obj200 = *reinterpret_cast<char**>(esi + 0x200);
        ext_005BE460(base_obj, *reinterpret_cast<void**>(obj200 + 0x18c), field_14c + 0x24);
    }

    return 1;
}
} // namespace lift_005BF770

// [0x005C0A50]
namespace lift_005C0A50 {
// @name NMData::MetaBodyData::vfunc_21
// @class NMData::MetaBodyData
// @summary Deserializes MetaBodyData child objects, name property, and default sub-object from an input data node.
// @field NMData::MetaBodyData +0x14 MsvcString field_0x14
// @field NMData::MetaBodyData +0x158 void* field_0x158
// @field NMData::MetaBodyData +0x164 uint32_t field_0x164
// @field NMData::MetaBodyData +0x210 uint8_t field_0x210


struct CheckedVecIter {
    void* container;
    void* container2;
    void** ptr;
};

struct MsvcStringStorage {
    uint32_t data[7];
};

extern void __thiscall ext_00427A60(void* self);
extern void __thiscall ext_0058F630(void* self, void* arg0);
extern void __thiscall ext_00593910(void* self, void* arg0);
extern void __thiscall ext_005B6750(void* self, void* arg0);
extern void __thiscall ext_005BF400(void* self, void* arg0);
extern void __thiscall ext_005BF510(void* self, void* arg0);
extern void __thiscall ext_005C0200(void* self, void* arg0);
extern void* __thiscall ext_005CC2F0(void* self);
extern void* __thiscall ext_005CC520(void* self);
extern void* __thiscall ext_005CF150(void* self);
extern void __thiscall ext_005CF4C0(void* self, void* arg0);
extern void* __thiscall ext_006201B0(void* self);
extern void* __thiscall ext_0063EFE0(void* self, const char* name);
extern uint32_t __thiscall ext_0063F530(void* self, void* arg0, uint32_t arg1, uint32_t arg2);
extern void* __cdecl ext_006A5C62(uint32_t size);

extern void (__cdecl* mem_00925134)(void);
extern bool (__cdecl* mem_00924FC0)(const void* str, const char* cstr);
extern void* (__thiscall* mem_00924FDC)(void* dst, const void* src);
extern void (__thiscall* mem_00924FF4)(void* str);
extern void* (__thiscall* mem_00924FE4)(void* str, const char* cstr);

extern const char* mem_00A9EFC8;
extern const char* mem_00A9F34C;
extern const char* mem_00A9EDCC;
extern const char* mem_00A9EF18;
extern const char* mem_00A9EF74;
extern const char* mem_00A9F838;

static bool is_sentinel_node(uint32_t addr) {
    return addr == 0x00B53A34 || addr == 0x00B53B30 || addr == 0x00B53AB0 ||
           addr == 0x00B53A70 || addr == 0x00B53AF0;
}

void __thiscall fn_005C0A50(void* self, void* arg0) {
    ext_0058F630(self, arg0);

    uint8_t* vec = static_cast<uint8_t*>(arg0) + 0x24;
    void** vec_begin = lift_field<void**>(vec, 0x4);
    void** vec_end = lift_field<void**>(vec, 0x8);
    if (vec_begin > vec_end) {
        mem_00925134();
    }

    CheckedVecIter it{vec, vec, vec_begin};
    ext_00427A60(&it);

    void** end_ptr = lift_field<void**>(vec, 0x8);
    if (lift_field<void**>(vec, 0x4) > end_ptr) {
        mem_00925134();
    }

    CheckedVecIter end_it{vec, vec, end_ptr};
    ext_00427A60(&end_it);

    for (;;) {
        if (!it.container || it.container != end_it.container) {
            mem_00925134();
        }
        if (it.ptr >= end_it.ptr) {
            break;
        }
        if (!it.container) {
            mem_00925134();
        }
        uint8_t* it_vec = static_cast<uint8_t*>(it.container);
        if (it.ptr >= lift_field<void**>(it_vec, 0x8)) {
            mem_00925134();
        }

        void* item = *it.ptr;
        void* item_name = static_cast<uint8_t*>(item) + 0x4;

        if (mem_00924FC0(item_name, mem_00A9EFC8)) {
            void* raw = ext_006A5C62(0xB4);
            void* obj = raw ? ext_005CF150(raw) : nullptr;
            ext_005CF4C0(obj, item);
            ext_005B6750(self, obj);

            uint32_t res = ext_0063F530(item, const_cast<char*>(mem_00A9F34C), 0, 1);
            if (!is_sentinel_node(res)) {
                ext_00593910(self, item);
            }
        } else if (mem_00924FC0(item_name, mem_00A9EDCC)) {
            void* raw = ext_006A5C62(0x1A0);
            void* obj = raw ? ext_005CC2F0(raw) : nullptr;
            using Vfunc54 = void (__thiscall*)(void*, void*);
            void** vtable = *reinterpret_cast<void***>(obj);
            reinterpret_cast<Vfunc54>(vtable[0x54 / 4])(obj, item);
            ext_005BF400(self, obj);
        } else if (mem_00924FC0(item_name, mem_00A9EF18)) {
            void* raw = ext_006A5C62(0x19C);
            void* obj = raw ? ext_005CC520(raw) : nullptr;
            using Vfunc54 = void (__thiscall*)(void*, void*);
            void** vtable = *reinterpret_cast<void***>(obj);
            reinterpret_cast<Vfunc54>(vtable[0x54 / 4])(obj, item);
            ext_005BF510(self, obj);
        } else if (mem_00924FC0(item_name, mem_00A9EF74)) {
            void* raw = ext_006A5C62(0x1A0);
            void* obj = raw ? ext_006201B0(raw) : nullptr;
            using Vfunc54 = void (__thiscall*)(void*, void*);
            void** vtable = *reinterpret_cast<void***>(obj);
            reinterpret_cast<Vfunc54>(vtable[0x54 / 4])(obj, item);
            ext_005C0200(self, obj);
        }

        if (it.ptr >= lift_field<void**>(it.container, 0x8)) {
            mem_00925134();
        }
        ++it.ptr;
        ext_00427A60(&it);
    }

    void* found = ext_0063EFE0(arg0, mem_00A9F838);
    MsvcStringStorage temp_str{};
    using Vfunc08 = void* (__thiscall*)(void*, void*);
    void** found_vtable = *reinterpret_cast<void***>(found);
    void* str_val = reinterpret_cast<Vfunc08>(found_vtable[0x8 / 4])(found, &temp_str);
    mem_00924FDC(static_cast<uint8_t*>(self) + 0x14, str_val);
    mem_00924FF4(&temp_str);

    if (lift_field<uint8_t>(self, 0x210) != 0 &&
        lift_field<uint32_t>(self, 0x164) == 0 &&
        lift_field<void*>(self, 0x158) != nullptr) {
        void* raw = ext_006A5C62(0x1A0);
        void* obj = raw ? ext_005CC2F0(raw) : nullptr;
        MsvcStringStorage default_str{};
        mem_00924FE4(&default_str, reinterpret_cast<const char*>(0x0095E8A0));
        using Vfunc5C = void (__thiscall*)(void*, void*);
        void** vtable = *reinterpret_cast<void***>(obj);
        reinterpret_cast<Vfunc5C>(vtable[0x5C / 4])(obj, &default_str);
        mem_00924FF4(&default_str);
        ext_005BF400(self, obj);
    }
}
} // namespace lift_005C0A50

// [0x005C14B0]
namespace lift_005C14B0 {
// @name NMData::MetaBodyData::vfunc_16_off_C
// @class NMData::MetaBodyData
// @summary Clones MetaBodyData and creates/attaches its associated render/proxy object
// @field NMData::MetaBodyData +0x8 MsvcString field_0x08
// @field NMData::MetaBodyData +0x200 void* field_0x200
// @field NMData::MetaBodyData +0x20C void* subObject


struct MsvcString {
    uint8_t data[0x1C];
};

void* __cdecl ext_006A5C62(uint32_t size);
void* __thiscall ext_005C1060(void* self, void* src);
void __thiscall ext_00587470(void* self, void* arg0);
void __thiscall ext_005ECBA0(void* self, void* arg0);
int __thiscall ext_005DF5C0(void* self, MsvcString str);
void __thiscall ext_005BFDE0(void* self, MsvcString str);
void __thiscall ext_005BFEE0(void* self, MsvcString str);
void __thiscall ext_005A3540(void* self, void* arg0);
void* __thiscall ext_005EF6D0(void* self);
void __thiscall ext_005EE9A0(void* self, void* arg0);
void __thiscall ext_00587920(void* self, void* arg0, uint32_t arg1);
void __thiscall ext_005A35D0(void* self, void* arg0);

extern MsvcString* (__cdecl* mem_00924ECC)(MsvcString* out, const MsvcString* lhs, const char* rhs);
extern void (__thiscall* mem_00924FDC)(MsvcString* self, const MsvcString* rhs);
extern void (__thiscall* mem_00924FE0)(MsvcString* self, const MsvcString* rhs);
extern void (__thiscall* mem_00924FF4)(MsvcString* self);
extern const char* mem_00A9F004;

void* __thiscall fn_005C14B0(void* self, void* arg0) {
    uint8_t* esi = static_cast<uint8_t*>(self);
    void* raw_meta = ext_006A5C62(0x220);
    void* edi = nullptr;
    if (raw_meta != nullptr) {
        edi = ext_005C1060(raw_meta, esi - 0xC);
    }

    void* obj200 = lift_field<void*>(esi, 0x200);
    void* ecx_190 = lift_field<void*>(obj200, 0x190);
    uint8_t* ebx = lift_field<uint8_t*>(obj200, 0x18C);
    ext_00587470(ecx_190, obj200);

    obj200 = lift_field<void*>(esi, 0x200);
    ext_005ECBA0(lift_field<void*>(obj200, 0x190), obj200);

    obj200 = lift_field<void*>(esi, 0x200);
    auto vfunc_24 = reinterpret_cast<const MsvcString* (__thiscall*)(void*)>(
        (*reinterpret_cast<void***>(obj200))[0x24 / 4]);
    MsvcString tmp1{};
    mem_00924FE0(&tmp1, vfunc_24(obj200));
    uint8_t* ebp = ebx + 0x58C;
    int found = ext_005DF5C0(ebp, tmp1);

    obj200 = lift_field<void*>(esi, 0x200);
    vfunc_24 = reinterpret_cast<const MsvcString* (__thiscall*)(void*)>(
        (*reinterpret_cast<void***>(obj200))[0x24 / 4]);
    MsvcString tmp2{};
    mem_00924FE0(&tmp2, vfunc_24(obj200));
    ext_005BFDE0(found != 0 ? ebp : (ebx + 0x5A4), tmp2);

    void* ebp_arg = arg0;
    void* sub20c = lift_field<void*>(ebp_arg, 0x20C);
    void* ebx_new = lift_field<void*>(sub20c, 0x18C);

    MsvcString tmp3{};
    mem_00924FE0(&tmp3, reinterpret_cast<const MsvcString*>(esi + 0x8));
    ext_005BFEE0(ebx + 0x598, tmp3);

    ext_005A3540(ebx_new, edi);

    void* raw_proxy = ext_006A5C62(0x2F8);
    void* esi_new = nullptr;
    if (raw_proxy != nullptr) {
        esi_new = ext_005EF6D0(raw_proxy);
    }

    auto edi_vfunc_24 = reinterpret_cast<const MsvcString* (__thiscall*)(void*)>(
        (*reinterpret_cast<void***>(edi))[0x24 / 4]);
    MsvcString joined{};
    mem_00924ECC(&joined, edi_vfunc_24(edi), mem_00A9F004);
    auto esi_vfunc_5c = reinterpret_cast<void (__thiscall*)(void*, MsvcString*)>(
        (*reinterpret_cast<void***>(esi_new))[0x5C / 4]);
    esi_vfunc_5c(esi_new, &joined);
    mem_00924FF4(&joined);

    ext_005EE9A0(lift_field<void*>(ebp_arg, 0x20C), esi_new);

    lift_field<void*>(esi_new, 0x228) = ebp_arg;
    auto ebp_vfunc_24 = reinterpret_cast<const MsvcString* (__thiscall*)(void*)>(
        (*reinterpret_cast<void***>(ebp_arg))[0x24 / 4]);
    mem_00924FDC(reinterpret_cast<MsvcString*>(static_cast<uint8_t*>(esi_new) + 0x198), ebp_vfunc_24(ebp_arg));

    lift_field<void*>(esi_new, 0x22C) = edi;
    edi_vfunc_24 = reinterpret_cast<const MsvcString* (__thiscall*)(void*)>(
        (*reinterpret_cast<void***>(edi))[0x24 / 4]);
    mem_00924FDC(reinterpret_cast<MsvcString*>(static_cast<uint8_t*>(esi_new) + 0x1B4), edi_vfunc_24(edi));

    ext_00587920(esi_new, edi, 0);
    lift_field<void*>(edi, 0x20C) = esi_new;
    ext_005A35D0(ebx_new, esi_new);

    return edi;
}
} // namespace lift_005C14B0
