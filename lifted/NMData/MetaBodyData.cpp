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
