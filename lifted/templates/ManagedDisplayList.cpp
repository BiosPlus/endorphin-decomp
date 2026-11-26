// Lifted C++ translation unit: lifted/templates/ManagedDisplayList.cpp
#include "lift_compat.h"

// [0x00533E90] sub_00533E90 (54 bytes)
namespace lift_00533E90 {
// Known callee 0x00532B40: Unknown::dtor_00532B40 (Sets vtable to 0x009543E4 and unlinks peer at +0x08 if it points back to this at +0x04.)
extern void ext_00532B40(void* self);

// Known callee 0x006A5C5C: thunk_MFC80_ord_764 (IAT jump thunk forwarding to MFC80!ord_764; used as operator delete(this) when flag bit 0 is set.)
extern void ext_006A5C5C(void* p);

// IAT slot 0x009253E8 -> OPENGL32!glDeleteLists
extern void (*mem_009253E8)(GLuint list, GLsizei range);

// @name ManagedDisplayList<UtilityGraphics::Grid>::vfunc_0
// @class ManagedDisplayList<UtilityGraphics::Grid>
// @summary Scalar deleting destructor: releases the GL display list, runs the base dtor, optionally frees the object, and returns this.
// @field ManagedDisplayList<UtilityGraphics::Grid> +0x00 void* vptr
// @field ManagedDisplayList<UtilityGraphics::Grid> +0x30 GLuint displayList
void* fn_00533E90(void* self, uint32_t flags) {
    uint8_t* obj = reinterpret_cast<uint8_t*>(self);

    // mov dword ptr [esi], 0x9547FC  (vptr reset to ManagedDisplayList vtable)
    *reinterpret_cast<void**>(obj + 0x00) = reinterpret_cast<void*>(static_cast<uintptr_t>(0x009547FCu));

    GLuint list = lift_field<GLuint>(obj, 0x30);
    if (list != 0) {
        mem_009253E8(list, 1);
    }

    // Base-class destructor (Renderable / DirtyOrCleanBase chain).
    ext_00532B40(self);

    if (flags & 1) {
        ext_006A5C5C(self);
    }

    return self;
}
} // namespace lift_00533E90

// [0x00533ED0] ManagedDisplayList<RenderableList>::vfunc_0 (54 bytes)
namespace lift_00533ED0 {
// @name ManagedDisplayList<RenderableList>::vfunc_0
// @class ManagedDisplayList<RenderableList>
// @summary Auto-lifted identical-shape clone of 0x00533E90 (ManagedDisplayList<UtilityGraphics::Grid>::vfunc_0).
// @field ManagedDisplayList<RenderableList> +0x0 void* vptr
// @field ManagedDisplayList<RenderableList> +0x2C GLuint field_0x2C
namespace lift_00533E90 {
// Known callee 0x00532B40: Unknown::dtor_00532B40 (Sets vtable to 0x009543E4 and unlinks peer at +0x08 if it points back to this at +0x04.)
extern void ext_0054C5E0(void* self);

// Known callee 0x006A5C5C: thunk_MFC80_ord_764 (IAT jump thunk forwarding to MFC80!ord_764; used as operator delete(this) when flag bit 0 is set.)
extern void ext_006A5C5C(void* p);

// IAT slot 0x009253E8 -> OPENGL32!glDeleteLists
extern void (*mem_009253E8)(GLuint list, GLsizei range);

// @name ManagedDisplayList<UtilityGraphics::Grid>::vfunc_0
// @class ManagedDisplayList<UtilityGraphics::Grid>
// @summary Scalar deleting destructor: releases the GL display list, runs the base dtor, optionally frees the object, and returns this.
// @field ManagedDisplayList<UtilityGraphics::Grid> +0x00 void* vptr
// @field ManagedDisplayList<UtilityGraphics::Grid> +0x30 GLuint displayList
void* fn_00533ED0(void* self, uint32_t flags) {
    uint8_t* obj = reinterpret_cast<uint8_t*>(self);

    // mov dword ptr [esi], 0x9547FC  (vptr reset to ManagedDisplayList vtable)
    *reinterpret_cast<void**>(obj + 0x00) = reinterpret_cast<void*>(static_cast<uintptr_t>(0x954864u));

    GLuint list = lift_field<GLuint>(obj, 0x2C);
    if (list != 0) {
        mem_009253E8(list, 1);
    }

    // Base-class destructor (Renderable / DirtyOrCleanBase chain).
    ext_0054C5E0(self);

    if (flags & 1) {
        ext_006A5C5C(self);
    }

    return self;
}
} // namespace lift_00533E90
} // namespace lift_00533ED0

// [0x0054C090]
namespace lift_0054C090 {
extern void (*mem_00925134)();

// @name ManagedDisplayList<RenderableList>::vfunc_17
// @class ManagedDisplayList<RenderableList>
// @summary Sums vfunc_17() across all elements in the RenderableList vector
// @field ManagedDisplayList<RenderableList> +0x18 void** field_0x18
// @field ManagedDisplayList<RenderableList> +0x1C void** field_0x1C
uint32_t __thiscall fn_0054C090(void* self) {
    uint8_t* obj = static_cast<uint8_t*>(self);
    uint8_t* vec = obj + 0x14;
    void** it = *reinterpret_cast<void***>(vec + 0x4);
    uint32_t sum = 0;

    if (it > *reinterpret_cast<void***>(vec + 0x8)) {
        mem_00925134();
    }

    for (;;) {
        void** end = *reinterpret_cast<void***>(vec + 0x8);
        if (*reinterpret_cast<void***>(vec + 0x4) > end) {
            mem_00925134();
        }
        if (it == end) {
            break;
        }
        if (it >= *reinterpret_cast<void***>(vec + 0x8)) {
            mem_00925134();
        }
        void* elem = *it;
        void** vtable = *reinterpret_cast<void***>(elem);
        auto vfunc_17 = reinterpret_cast<uint32_t(__thiscall*)(void*)>(vtable[0x44 / 4]);
        sum += vfunc_17(elem);
        if (it >= *reinterpret_cast<void***>(vec + 0x8)) {
            mem_00925134();
        }
        ++it;
    }

    return sum;
}
} // namespace lift_0054C090

// [0x0054C030] ManagedDisplayList<RenderableList>::vfunc_16 (96 bytes)
namespace lift_0054C030 {
// @name ManagedDisplayList<RenderableList>::vfunc_16
// @class ManagedDisplayList<RenderableList>
// @summary Auto-lifted identical-shape clone of 0x0054C090 (ManagedDisplayList<RenderableList>::vfunc_17).
// @field ManagedDisplayList<RenderableList> +0x18 void** field_0x18
// @field ManagedDisplayList<RenderableList> +0x1C void** field_0x1C
namespace lift_0054C090 {
extern void (*mem_00925134)();

// @name ManagedDisplayList<RenderableList>::vfunc_17
// @class ManagedDisplayList<RenderableList>
// @summary Sums vfunc_17() across all elements in the RenderableList vector
// @field ManagedDisplayList<RenderableList> +0x18 void** field_0x18
// @field ManagedDisplayList<RenderableList> +0x1C void** field_0x1C
uint32_t __thiscall fn_0054C030(void* self) {
    uint8_t* obj = static_cast<uint8_t*>(self);
    uint8_t* vec = obj + 0x14;
    void** it = *reinterpret_cast<void***>(vec + 0x4);
    uint32_t sum = 0;

    if (it > *reinterpret_cast<void***>(vec + 0x8)) {
        mem_00925134();
    }

    for (;;) {
        void** end = *reinterpret_cast<void***>(vec + 0x8);
        if (*reinterpret_cast<void***>(vec + 0x4) > end) {
            mem_00925134();
        }
        if (it == end) {
            break;
        }
        if (it >= *reinterpret_cast<void***>(vec + 0x8)) {
            mem_00925134();
        }
        void* elem = *it;
        void** vtable = *reinterpret_cast<void***>(elem);
        auto vfunc_17 = reinterpret_cast<uint32_t(__thiscall*)(void*)>(vtable[0x40 / 4]);
        sum += vfunc_17(elem);
        if (it >= *reinterpret_cast<void***>(vec + 0x8)) {
            mem_00925134();
        }
        ++it;
    }

    return sum;
}
} // namespace lift_0054C090
} // namespace lift_0054C030

// [0x0054C260]
namespace lift_0054C260 {
// @name ManagedDisplayList<RenderableList>::vfunc_2
// @class ManagedDisplayList<RenderableList>
// @summary Calls virtual slot 2 on each element in the [field_0x18, field_0x1C) pointer range.
// @field ManagedDisplayList<RenderableList> +0x18 void** field_0x18
// @field ManagedDisplayList<RenderableList> +0x1C void** field_0x1C


// _invalid_parameter_noinfo pointer (MSVCR80), used by the iterator range checks.
extern void (*mem_00925134)();

void ManagedDisplayList_RenderableList_vfunc_2(void* self) {
    unsigned char* base = static_cast<unsigned char*>(self);
    void** begin = *reinterpret_cast<void***>(base + 0x18);
    void** end   = *reinterpret_cast<void***>(base + 0x1C);

    if (begin > end) mem_00925134();

    while (begin != end) {
        if (!(begin < end)) mem_00925134();
        void* obj = *begin;
        void** vtable = *reinterpret_cast<void***>(obj);
        auto fn = reinterpret_cast<void (*)(void*)>(vtable[2]);
        fn(obj);
        if (!(begin < end)) mem_00925134();
        ++begin;
    }
}
} // namespace lift_0054C260

// [0x0054C490] ManagedDisplayList<RenderableList>::vfunc_24 (76 bytes)
namespace lift_0054C490 {
extern void (__cdecl* mem_00925134)();

// @name ManagedDisplayList<RenderableList>::vfunc_24
// @class ManagedDisplayList<RenderableList>
// @summary Calls vfunc_24() on every element of the RenderableList vector at +0x18..+0x1C.
// @field ManagedDisplayList<RenderableList> +0x18 void** field_0x18
// @field ManagedDisplayList<RenderableList> +0x1C void** field_0x1C
void fn_0054C490(void* self) {
    void** begin = lift_field<void**>(self, 0x18);
    void** end = lift_field<void**>(self, 0x1C);

    for (void** it = begin; it != end; ++it) {
        if (it > end) {
            mem_00925134();  // debug iterator-range check (_invalid_parameter_noinfo)
        }
        void* elem = *it;
        void** vtable = *reinterpret_cast<void***>(elem);
        auto vfunc_24 = reinterpret_cast<void(__thiscall*)(void*)>(vtable[0x60 / 4]);
        vfunc_24(elem);
    }
}
} // namespace lift_0054C490
