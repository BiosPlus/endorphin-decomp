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

// [0x0054C260] ManagedDisplayList<RenderableList>::vfunc_2 (76 bytes)
namespace lift_0054C260 {
// @name ManagedDisplayList<RenderableList>::vfunc_2
// @class ManagedDisplayList<RenderableList>
// @summary Walks the pointer range at this+0x18..this+0x1C and calls virtual slot 2 (no args) on each element.
// @field ManagedDisplayList<RenderableList> +0x18 void** field_0x18
// @field ManagedDisplayList<RenderableList> +0x1C void** field_0x1C
void fn_0054C260(void* self) {
    uint8_t* obj = reinterpret_cast<uint8_t*>(self);

    void** cur = lift_field<void**>(obj, 0x18);
    while (cur != lift_field<void**>(obj, 0x1C)) {
        void* elem = *cur;
        void** vtbl = *reinterpret_cast<void***>(elem);
        using Slot2Fn = void(__thiscall*)(void*);
        reinterpret_cast<Slot2Fn>(vtbl[2])(elem);
        ++cur;
    }
}
} // namespace lift_0054C260

// [0x0054C490] ManagedDisplayList<RenderableList>::vfunc_24 (76 bytes)
namespace lift_0054C490 {
// @name ManagedDisplayList<RenderableList>::vfunc_24
// @class ManagedDisplayList<RenderableList>
// @summary Walks the element pointer vector at +0x18..+0x1C and calls virtual slot 24 (byte offset 0x60) on each element.
// @field ManagedDisplayList<RenderableList> +0x18 void** field_0x18
// @field ManagedDisplayList<RenderableList> +0x1C void** field_0x1C
extern void __thiscall fn_0054C490(void* self) {
    auto* base = static_cast<uint8_t*>(self);

    // Iterate over the pointer range [begin, end). The end bound is re-read
    // on every iteration, matching the original code's behavior.
    void** cur = *reinterpret_cast<void***>(base + 0x18);
    while (cur != *reinterpret_cast<void***>(base + 0x1C)) {
        void* elem = *cur;
        void** vtbl = *reinterpret_cast<void***>(elem);
        auto fn = reinterpret_cast<void(__thiscall*)(void*)>(vtbl[24]);
        fn(elem);
        ++cur;
    }
}
} // namespace lift_0054C490

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

// [0x0054C030]
namespace lift_0054C030 {
// @name ManagedDisplayList<RenderableList>::vfunc_16
// @class ManagedDisplayList<RenderableList>
// @summary Sums the result of vfunc_16 across all elements in the display list vector.
// @field ManagedDisplayList<RenderableList> +0x18 void** field_0x18
// @field ManagedDisplayList<RenderableList> +0x1C void** field_0x1C


uint32_t __thiscall fn_0054C030(void* self) {
    uint8_t* base = static_cast<uint8_t*>(self);
    void** begin = *reinterpret_cast<void***>(base + 0x18);
    void** end = *reinterpret_cast<void***>(base + 0x1C);
    uint32_t total = 0;

    for (void** it = begin; it != end; ++it) {
        void* elem = *it;
        void** vtable = *reinterpret_cast<void***>(elem);
        auto vfunc = reinterpret_cast<uint32_t(__thiscall*)(void*)>(vtable[0x40 / 4]);
        total += vfunc(elem);
    }

    return total;
}
} // namespace lift_0054C030

// [0x0054C0F0]
namespace lift_0054C0F0 {
// @name ManagedDisplayList<RenderableList>::vfunc_18
// @class ManagedDisplayList<RenderableList>
// @summary Calls vtable slot 18 on each entry in [field_0x18, field_0x1C); returns 1 on the first nonzero result, else 0.
// @field ManagedDisplayList<RenderableList> +0x18 void** field_0x18
// @field ManagedDisplayList<RenderableList> +0x1C void** field_0x1C

int vfunc_18(void* self, void* arg) {
    auto* base = reinterpret_cast<unsigned char*>(self);
    void** p = *reinterpret_cast<void***>(base + 0x18);   // field_0x18: range begin
    void** end = *reinterpret_cast<void***>(base + 0x1C); // field_0x1C: range end

    for (; p != end; ++p) {
        void* obj = *p;
        void** vtbl = *reinterpret_cast<void***>(obj);
        auto fn = reinterpret_cast<int (*)(void*, void*)>(vtbl[18]); // vtable +0x48
        if (fn(obj, arg) != 0) {
            return 1;
        }
    }
    return 0;
}
} // namespace lift_0054C0F0

// [0x0054C1F0] ManagedDisplayList<RenderableList>::vfunc_1 (104 bytes)
namespace lift_0054C1F0 {
// @name ManagedDisplayList<RenderableList>::vfunc_1
// @class ManagedDisplayList<RenderableList>
// @summary Invokes virtual slot 1 (with one argument) on every element of the object pointer vector at +0x18..+0x1C.
// @field ManagedDisplayList<RenderableList> +0x00 void* vptr
// @field ManagedDisplayList<RenderableList> +0x18 void** field_0x18
// @field ManagedDisplayList<RenderableList> +0x1C void** field_0x1C
void fn_0054C1F0(void* self, void* arg) {
    // Original is a thiscall with one stack argument (ret 4).
    // Walk [begin, end) with end re-read each iteration, as the original does.
    for (void** it = lift_field<void**>(self, 0x18);
         it != lift_field<void**>(self, 0x1C);
         ++it) {
        void* obj = *it;
        void** vtbl = *reinterpret_cast<void***>(obj);
        auto slot1 = reinterpret_cast<void (*)(void*, void*)>(vtbl[1]);
        slot1(obj, arg);
    }
}
} // namespace lift_0054C1F0

// [0x0054C420]
namespace lift_0054C420 {
// @name ManagedDisplayList<RenderableList>::vfunc_14
// @class ManagedDisplayList<RenderableList>
// @summary Calls virtual slot 14 (+0x38) on every element of the display list's pointer array, forwarding the two stack arguments.
// @field ManagedDisplayList<RenderableList> +0x18 void** field_0x18
// @field ManagedDisplayList<RenderableList> +0x1C void** field_0x1C

namespace {
using ElementVFn = void (*)(void* self, void* a, void* b);
}

void fn_0054C420(void* self, void* a, void* b) {
    auto* base = reinterpret_cast<uint8_t*>(self);
    void** cur = *reinterpret_cast<void***>(base + 0x18);
    void** const end = *reinterpret_cast<void***>(base + 0x1C);

    for (; cur != end; ++cur) {
        void* elem = *cur;
        void** vtable = *reinterpret_cast<void***>(elem);
        auto fn = reinterpret_cast<ElementVFn>(vtable[0x38 / sizeof(void*)]);
        fn(elem, a, b);
    }
}
} // namespace lift_0054C420

// [0x0054C330] ManagedDisplayList<RenderableList>::vfunc_11 (109 bytes)
namespace lift_0054C330 {
// @name ManagedDisplayList<RenderableList>::vfunc_11
// @class ManagedDisplayList<RenderableList>
// @summary Iterates the managed element pointer vector (begin/end at +0x18/+0x1C) and invokes each element's virtual slot 11 with the two stack arguments, in order.
// @field ManagedDisplayList<RenderableList> +0x18 void** field_0x18
// @field ManagedDisplayList<RenderableList> +0x1C void** field_0x1C
//
// Note: the MSVCR80 _invalid_parameter_noinfo checks in the original are
// iterator-debug bounds assertions; they are omitted here because they are
// unreachable for a well-formed vector.
void fn_0054C330(void* self, uint32_t arg1, uint32_t arg2) {
    // The end pointer is re-read every iteration, as the original does, since
    // a virtual call may modify the vector.
    for (void** it = lift_field<void**>(self, 0x18);
         it != lift_field<void**>(self, 0x1C);
         ++it) {
        void* element = *it;
        void** vtbl = *reinterpret_cast<void***>(element);
        using VSlot11 = void(__thiscall*)(void* self, uint32_t a, uint32_t b);
        reinterpret_cast<VSlot11>(vtbl[11])(element, arg1, arg2);
    }
}
} // namespace lift_0054C330
