// Lifted C++ translation unit: lifted/NMData/IncarnationEventData.cpp
#include "lift_compat.h"
#include <string>
extern "C" void* __thiscall ext_006404E0(void* self, void* arg);
extern "C" void* mem_00A9EFB8;
#include <new>
extern "C" void __thiscall ext_004C2070(void* self, void* a, void* b);

extern "C" void __thiscall ext_004C2070(void* self, void* a, void* b);
// @name NMData::IncarnationEventData::vfunc_59
// @class NMData::IncarnationEventData
// @summary Auto-lifted identical-shape clone of 0x004DDED0 (NMData::AnimationEventData::vfunc_59).
// @field NMData::IncarnationEventData +0x0 void** vptr
extern "C" void __thiscall fn_004CE710(void* self, void* a) {
    using VFn = void(__thiscall*)(void* self, void* arg);
    void* g = mem_00A9EFB8;
    void* r = ext_006404E0(a, g);
    void** vt = *reinterpret_cast<void***>(self);
    reinterpret_cast<VFn>(vt[22])(self, r);
}
// thiscall helper at 0x004CE8D0 (sub_004CE8D0): takes the object as `this`.
extern "C" void ext_004CE8D0(void* self);
// Known callee 0x006A5C5C: thunk_MFC80_ord_764 (IAT jump thunk forwarding to MFC80!ord_764).
// cdecl, single pointer argument (pushed as edi, then add esp,4).
extern "C" void ext_006A5C5C(void* p);

extern "C" void ext_004CE8D0(void* self);
// Known callee 0x006A5C5C: thunk_MFC80_ord_764 (IAT jump thunk forwarding to MFC80!ord_764).
// cdecl, single pointer argument (pushed as edi, then add esp,4).
extern "C" void ext_006A5C5C(void* p);
void* __thiscall fn_004CE830(void* self, void* a, void* b) {
    ext_004C2070(self, a, b);
    return a;
}

// [0x004CFCA0] NMData::IncarnationEventData::vfunc_87 (58 bytes)
// @name NMData::IncarnationEventData::vfunc_87
// @class NMData::IncarnationEventData
// @summary If the pointer at +0x184 is set, release it (via 0x4CE8D0 and the MFC80 free thunk) and clear the slot.
// @field NMData::IncarnationEventData +0x184 void* field_0x184
void fn_004CFCA0(void* self) {
    void* obj = lift_field<void*>(self, 0x184);
    if (obj == nullptr) {
        return;
    }
    ext_004CE8D0(obj);

    obj = lift_field<void*>(self, 0x184);
    if (obj != nullptr) {
        ext_004CE8D0(obj);
        ext_006A5C5C(obj);
    }
    lift_field<void*>(self, 0x184) = nullptr;
}
