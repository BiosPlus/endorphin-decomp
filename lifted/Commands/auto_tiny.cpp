// Lifted C++ translation unit: lifted/Commands/auto_tiny.cpp
#include "lift_compat.h"
extern "C" void __fastcall ext_00485D80(void* self);
extern "C" void __cdecl ext_006A5C5C(void* ptr);
extern "C" void __fastcall ext_00486520(void* self);
extern "C" void __fastcall ext_0048E310(void* self);
extern "C" void __fastcall ext_0048F070(void* self);
extern "C" void __fastcall ext_0048F590(void* self);
extern "C" void __fastcall ext_0048FA40(void* self);
extern "C" void __fastcall ext_004FDE90(void* self);
extern "C" void __fastcall ext_005ACD80(void* self);
extern "C" void __fastcall ext_006A02B0(void* self);

// [0x00485E20] Commands::BufferTransformsCommand::vfunc_0 (30 bytes)
// @name Commands::BufferTransformsCommand::vfunc_0
// @class Commands::BufferTransformsCommand
// @summary MSVC scalar deleting destructor: calls sub_00485D80 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_00485E20(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_00485D80(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x00486660] Commands::ReshapeCommand::vfunc_0 (30 bytes)
// @name Commands::ReshapeCommand::vfunc_0
// @class Commands::ReshapeCommand
// @summary MSVC scalar deleting destructor: calls sub_00486520 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_00486660(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_00486520(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x0048E790] Commands::DestroyTriggeredEventCommand::vfunc_0 (30 bytes)
// @name Commands::DestroyTriggeredEventCommand::vfunc_0
// @class Commands::DestroyTriggeredEventCommand
// @summary MSVC scalar deleting destructor: calls sub_0048E310 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_0048E790(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_0048E310(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x0048F0D0] Commands::BufferPoseCommand::vfunc_0 (30 bytes)
// @name Commands::BufferPoseCommand::vfunc_0
// @class Commands::BufferPoseCommand
// @summary MSVC scalar deleting destructor: calls sub_0048F070 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_0048F0D0(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_0048F070(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x0048F600] Commands::CreateTriggeredEventCommand::vfunc_0 (30 bytes)
// @name Commands::CreateTriggeredEventCommand::vfunc_0
// @class Commands::CreateTriggeredEventCommand
// @summary MSVC scalar deleting destructor: calls sub_0048F590 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_0048F600(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_0048F590(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x0048FAA0] Commands::BufferChannelsCommand::vfunc_0 (30 bytes)
// @name Commands::BufferChannelsCommand::vfunc_0
// @class Commands::BufferChannelsCommand
// @summary MSVC scalar deleting destructor: calls sub_0048FA40 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_0048FAA0(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_0048FA40(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x004FE080] Commands::RemoveCollisionModelCommand::vfunc_0 (30 bytes)
// @name Commands::RemoveCollisionModelCommand::vfunc_0
// @class Commands::RemoveCollisionModelCommand
// @summary MSVC scalar deleting destructor: calls sub_004FDE90 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_004FE080(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_004FDE90(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x005AD0C0] Commands::MirrorCollisionModelCommand::vfunc_0 (30 bytes)
// @name Commands::MirrorCollisionModelCommand::vfunc_0
// @class Commands::MirrorCollisionModelCommand
// @summary MSVC scalar deleting destructor: calls sub_005ACD80 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_005AD0C0(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_005ACD80(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x006A0340] Commands::ChangePropertyCommand::vfunc_0 (30 bytes)
// @name Commands::ChangePropertyCommand::vfunc_0
// @class Commands::ChangePropertyCommand
// @summary MSVC scalar deleting destructor: calls sub_006A02B0 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_006A0340(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_006A02B0(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}
