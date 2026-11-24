// Lifted C++ translation unit: lifted/leaf/tiny_6B0000.cpp
#include "lift_compat.h"
extern "C" int mem_00991168;
extern "C" int mem_009911A4;
extern "C" void __fastcall ext_006B06A0(void* self);

extern "C" void __fastcall ext_006B06A0(void* self);
// @name sub_006B0050
// @summary Stores address of mem_00991168 into field at offset +0x0.
extern "C" void __fastcall fn_006B0050(void* self) {
    lift_field<void*>(self, 0x0) = &mem_00991168;
}
extern "C" int mem_009914A0;
extern "C" int mem_00991564;
extern "C" void __fastcall ext_006A601C(void* self);

extern "C" void __fastcall ext_006A601C(void* self);
// @name sub_006B02C0
// @summary Destructor tail-call: restores vtable mem_009911A4 and tail-calls base destructor sub_006B06A0.
extern "C" void __fastcall fn_006B02C0(void* self) {
    lift_field<void*>(self, 0x0) = &mem_009911A4;
    ext_006B06A0(self);
}
extern "C" int mem_009916A8;
extern "C" int mem_0099090C;
extern "C" int mem_00991768;
extern "C" void __fastcall ext_006B0C60(void* self);

extern "C" void __fastcall ext_006B0C60(void* self);
// @name sub_006B1190
// @summary Returns address of global mem_009914A0.
extern "C" void* __cdecl fn_006B1190(void) {
    return &mem_009914A0;
}
extern "C" int mem_00991784;
extern "C" int mem_009917A0;
extern "C" int mem_009917BC;
extern "C" int mem_009917D8;
extern "C" int mem_009917F4;
extern "C" int mem_00991810;
extern "C" int mem_00991830;
extern "C" int mem_00991974;
extern "C" void __fastcall ext_006AF490(void* self);

extern "C" void __fastcall ext_006AF490(void* self);
// @name sub_006B16C0
// @summary Destructor tail-call: restores vtable mem_00991564 and tail-calls base destructor thunk_MFC80_ord_753.
extern "C" void __fastcall fn_006B16C0(void* self) {
    lift_field<void*>(self, 0x0) = &mem_00991564;
    ext_006A601C(self);
}
extern "C" int mem_009919BC;
extern "C" void __fastcall ext_006AEB40(void* self);

extern "C" void __fastcall ext_006AEB40(void* self);
// @name sub_006B1810
// @summary Returns address of global mem_009916A8.
extern "C" void* __cdecl fn_006B1810(void) {
    return &mem_009916A8;
}
extern "C" int mem_009919EC;
extern "C" int mem_00991A14;
extern "C" int mem_00991A38;
extern "C" int mem_00991A6C;
extern "C" void __fastcall ext_006A6310(void* self);

extern "C" void __fastcall ext_006A6310(void* self);
// @name sub_006B19C0
// @summary Stores address of mem_0099090C into field at offset +0x0.
extern "C" void __fastcall fn_006B19C0(void* self) {
    lift_field<void*>(self, 0x0) = &mem_0099090C;
}
extern "C" int mem_00991BA8;
extern "C" int mem_00991DA0;
extern "C" int mem_00991E54;
extern "C" void __fastcall ext_008727C0(void* self);

extern "C" void __fastcall ext_008727C0(void* self);
// @name sub_006B1AC0
// @summary Destructor tail-call: restores vtable mem_00991768 and tail-calls base destructor sub_006B0C60.
extern "C" void __fastcall fn_006B1AC0(void* self) {
    lift_field<void*>(self, 0x0) = &mem_00991768;
    ext_006B0C60(self);
}
extern "C" int mem_00991F94;
extern "C" int mem_0099216C;
extern "C" void __fastcall ext_006A5FFE(void* self);
extern "C" int mem_00992540;
extern "C" int mem_00992780;
extern "C" void __fastcall ext_006B84A0(void* self);
extern "C" int mem_00992A88;
extern "C" int mem_00992C4C;
extern "C" int mem_00992CBC;
extern "C" void __fastcall ext_006B95D0(void* self);

extern "C" void __fastcall ext_006B95D0(void* self);
// @name sub_006B1C20
// @summary Destructor tail-call: restores vtable mem_00991784 and tail-calls base destructor sub_006B0C60.
extern "C" void __fastcall fn_006B1C20(void* self) {
    lift_field<void*>(self, 0x0) = &mem_00991784;
    ext_006B0C60(self);
}
extern "C" int mem_00992F5C;
extern "C" int mem_00992FC8;
extern "C" int mem_0099304C;
extern "C" void __fastcall ext_006A64A2(void* self);

extern "C" void __fastcall ext_006A64A2(void* self);
// @name sub_006B1E80
// @summary Destructor tail-call: restores vtable mem_009917A0 and tail-calls base destructor sub_006B0C60.
extern "C" void __fastcall fn_006B1E80(void* self) {
    lift_field<void*>(self, 0x0) = &mem_009917A0;
    ext_006B0C60(self);
}
extern "C" void ext_006B9970(void);
extern "C" void __fastcall ext_006BAC20(void* self);
extern "C" void __cdecl ext_006A5C5C(void* ptr);

extern "C" void __cdecl ext_006A5C5C(void* ptr);
// @name sub_006B20C0
// @summary Destructor tail-call: restores vtable mem_009917BC and tail-calls base destructor sub_006B0C60.
extern "C" void __fastcall fn_006B20C0(void* self) {
    lift_field<void*>(self, 0x0) = &mem_009917BC;
    ext_006B0C60(self);
}
extern "C" void __fastcall ext_006E6340(void* self);
extern "C" void __fastcall ext_006C9330(void* self);
extern "C" void __fastcall ext_006BB540(void* self);
extern "C" void __fastcall ext_006E7460(void* self);
extern "C" void __fastcall ext_006E9420(void* self);
#include <cstdint>

// [0x006B2270] sub_006B2270 (11 bytes)
// @name sub_006B2270
// @summary Destructor tail-call: restores vtable mem_009917D8 and tail-calls base destructor sub_006B0C60.
extern "C" void __fastcall fn_006B2270(void* self) {
    lift_field<void*>(self, 0x0) = &mem_009917D8;
    ext_006B0C60(self);
}

// [0x006B2420] sub_006B2420 (11 bytes)
// @name sub_006B2420
// @summary Destructor tail-call: restores vtable mem_009917F4 and tail-calls base destructor sub_006B0C60.
extern "C" void __fastcall fn_006B2420(void* self) {
    lift_field<void*>(self, 0x0) = &mem_009917F4;
    ext_006B0C60(self);
}

// [0x006B25B0] sub_006B25B0 (11 bytes)
// @name sub_006B25B0
// @summary Destructor tail-call: restores vtable mem_00991810 and tail-calls base destructor sub_006B0C60.
extern "C" void __fastcall fn_006B25B0(void* self) {
    lift_field<void*>(self, 0x0) = &mem_00991810;
    ext_006B0C60(self);
}

// [0x006B2930] sub_006B2930 (11 bytes)
// @name sub_006B2930
// @summary Destructor tail-call: restores vtable mem_00991830 and tail-calls base destructor sub_006B0C60.
extern "C" void __fastcall fn_006B2930(void* self) {
    lift_field<void*>(self, 0x0) = &mem_00991830;
    ext_006B0C60(self);
}

// [0x006B3350] sub_006B3350 (11 bytes)
// @name sub_006B3350
// @summary Destructor tail-call: restores vtable mem_00991974 and tail-calls base destructor sub_006AF490.
extern "C" void __fastcall fn_006B3350(void* self) {
    lift_field<void*>(self, 0x0) = &mem_00991974;
    ext_006AF490(self);
}

// [0x006B3AB0] sub_006B3AB0 (11 bytes)
// @name sub_006B3AB0
// @summary Destructor tail-call: restores vtable mem_009919BC and tail-calls base destructor sub_006AEB40.
extern "C" void __fastcall fn_006B3AB0(void* self) {
    lift_field<void*>(self, 0x0) = &mem_009919BC;
    ext_006AEB40(self);
}

// [0x006B3CB0] sub_006B3CB0 (11 bytes)
// @name sub_006B3CB0
// @summary Destructor tail-call: restores vtable mem_009919EC and tail-calls base destructor sub_006AEB40.
extern "C" void __fastcall fn_006B3CB0(void* self) {
    lift_field<void*>(self, 0x0) = &mem_009919EC;
    ext_006AEB40(self);
}

// [0x006B4080] sub_006B4080 (11 bytes)
// @name sub_006B4080
// @summary Destructor tail-call: restores vtable mem_00991A14 and tail-calls base destructor sub_006AEB40.
extern "C" void __fastcall fn_006B4080(void* self) {
    lift_field<void*>(self, 0x0) = &mem_00991A14;
    ext_006AEB40(self);
}

// [0x006B4420] sub_006B4420 (11 bytes)
// @name sub_006B4420
// @summary Destructor tail-call: restores vtable mem_00991A38 and tail-calls base destructor sub_006AEB40.
extern "C" void __fastcall fn_006B4420(void* self) {
    lift_field<void*>(self, 0x0) = &mem_00991A38;
    ext_006AEB40(self);
}

// [0x006B4860] sub_006B4860 (11 bytes)
// @name sub_006B4860
// @summary Destructor tail-call: restores vtable mem_00991A6C and tail-calls base destructor thunk_MFC80_ord_760.
extern "C" void __fastcall fn_006B4860(void* self) {
    lift_field<void*>(self, 0x0) = &mem_00991A6C;
    ext_006A6310(self);
}

// [0x006B4C00] sub_006B4C00 (6 bytes)
// @name sub_006B4C00
// @summary Returns address of global mem_00991BA8.
extern "C" void* __cdecl fn_006B4C00(void) {
    return &mem_00991BA8;
}

// [0x006B4E00] sub_006B4E00 (6 bytes)
// @name sub_006B4E00
// @summary Returns address of global mem_00991DA0.
extern "C" void* __cdecl fn_006B4E00(void) {
    return &mem_00991DA0;
}

// [0x006B4E20] sub_006B4E20 (11 bytes)
// @name sub_006B4E20
// @summary Destructor tail-call: restores vtable mem_00991E54 and tail-calls base destructor thunk_MFC80_ord_599.
extern "C" void __fastcall fn_006B4E20(void* self) {
    lift_field<void*>(self, 0x0) = &mem_00991E54;
    ext_008727C0(self);
}

// [0x006B4F80] sub_006B4F80 (6 bytes)
// @name sub_006B4F80
// @summary Returns address of global mem_00991F94.
extern "C" void* __cdecl fn_006B4F80(void) {
    return &mem_00991F94;
}

// [0x006B6050] sub_006B6050 (6 bytes)
// @name sub_006B6050
// @summary Returns address of global mem_0099216C.
extern "C" void* __cdecl fn_006B6050(void) {
    return &mem_0099216C;
}

// [0x006B6260] sub_006B6260 (11 bytes)
// @name sub_006B6260
// @summary This-adjustor thunk: adjusts `this` by +0x120 and tail-calls thunk_MFC80_ord_1280.
extern "C" void __fastcall fn_006B6260(void* self) {
    ext_006A5FFE(static_cast<char*>(self) + 0x120);
}

// [0x006B6960] sub_006B6960 (6 bytes)
// @name sub_006B6960
// @summary Returns address of global mem_00992540.
extern "C" void* __cdecl fn_006B6960(void) {
    return &mem_00992540;
}

// [0x006B6980] sub_006B6980 (8 bytes)
// @name sub_006B6980
// @summary This-adjustor thunk: adjusts `this` by +0x58 and tail-calls thunk_MFC80_ord_1280.
extern "C" void __fastcall fn_006B6980(void* self) {
    ext_006A5FFE(static_cast<char*>(self) + 0x58);
}

// [0x006B7B70] sub_006B7B70 (6 bytes)
// @name sub_006B7B70
// @summary Returns address of global mem_00992780.
extern "C" void* __cdecl fn_006B7B70(void) {
    return &mem_00992780;
}

// [0x006B7DE0] sub_006B7DE0 (11 bytes)
// @name sub_006B7DE0
// @summary This-adjustor thunk: adjusts `this` by +0x88 and tail-calls sub_006B84A0.
extern "C" void __fastcall fn_006B7DE0(void* self) {
    ext_006B84A0(static_cast<char*>(self) + 0x88);
}

// [0x006B81C0] sub_006B81C0 (6 bytes)
// @name sub_006B81C0
// @summary Returns address of global mem_00992A88.
extern "C" void* __cdecl fn_006B81C0(void) {
    return &mem_00992A88;
}

// [0x006B8450] sub_006B8450 (6 bytes)
// @name sub_006B8450
// @summary Returns address of global mem_00992C4C.
extern "C" void* __cdecl fn_006B8450(void) {
    return &mem_00992C4C;
}

// [0x006B85F0] sub_006B85F0 (11 bytes)
// @name sub_006B85F0
// @summary Destructor tail-call: restores vtable mem_00992CBC and tail-calls base destructor sub_006B95D0.
extern "C" void __fastcall fn_006B85F0(void* self) {
    lift_field<void*>(self, 0x0) = &mem_00992CBC;
    ext_006B95D0(self);
}

// [0x006B8CC0] sub_006B8CC0 (6 bytes)
// @name sub_006B8CC0
// @summary Returns address of global mem_00992F5C.
extern "C" void* __cdecl fn_006B8CC0(void) {
    return &mem_00992F5C;
}

// [0x006B95B0] sub_006B95B0 (6 bytes)
// @name sub_006B95B0
// @summary Returns address of global mem_00992FC8.
extern "C" void* __cdecl fn_006B95B0(void) {
    return &mem_00992FC8;
}

// [0x006B95D0] sub_006B95D0 (11 bytes)
// @name sub_006B95D0
// @summary Destructor tail-call: restores vtable mem_0099304C and tail-calls base destructor thunk_MFC80_ord_657.
extern "C" void __fastcall fn_006B95D0(void* self) {
    lift_field<void*>(self, 0x0) = &mem_0099304C;
    ext_006A64A2(self);
}

// [0x006B99C0] sub_006B99C0 (16 bytes)
// @name sub_006B99C0
// @summary Getter returning int32_t field at offset +0x4.
extern "C" int32_t __fastcall fn_006B99C0(void* self) {
    return static_cast<int32_t>(lift_field<int32_t>(self, 0x4));
}

// [0x006B9D70] sub_006B9D70 (16 bytes)
// @name sub_006B9D70
// @summary Pure jump thunk forwarding to sub_006B9970.
extern "C" void fn_006B9D70(void) {
    ext_006B9970();
}

// [0x006BAC00] sub_006BAC00 (30 bytes)
// @name sub_006BAC00
// @summary MSVC scalar deleting destructor: calls sub_006BAC20 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_006BAC00(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_006BAC20(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x006BADB0] sub_006BADB0 (8 bytes)
// @name sub_006BADB0
// @summary This-adjustor thunk: adjusts `this` by +0x4 and tail-calls sub_006E6340.
extern "C" void __fastcall fn_006BADB0(void* self) {
    ext_006E6340(static_cast<char*>(self) + 0x4);
}

// [0x006BAF70] sub_006BAF70 (16 bytes)
// @name sub_006BAF70
// @summary This-adjustor thunk: adjusts `this` by +0x4 and tail-calls sub_006C9330.
extern "C" void __fastcall fn_006BAF70(void* self) {
    ext_006C9330(static_cast<char*>(self) + 0x4);
}

// [0x006BB0B0] sub_006BB0B0 (16 bytes)
// @name sub_006BB0B0
// @summary Getter returning int32_t field at offset +0x9C.
extern "C" int32_t __fastcall fn_006BB0B0(void* self) {
    return static_cast<int32_t>(lift_field<int32_t>(self, 0x9C));
}

// [0x006BB520] sub_006BB520 (30 bytes)
// @name sub_006BB520
// @summary MSVC scalar deleting destructor: calls sub_006BB540 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_006BB520(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_006BB540(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x006BC370] sub_006BC370 (16 bytes)
// @name sub_006BC370
// @summary Member forwarding thunk: loads subobject pointer at +0x4 and tail-calls sub_006E7460.
extern "C" void __fastcall fn_006BC370(void* self) {
    void* delegate_obj = lift_field<void*>(self, 0x4);
    ext_006E7460(delegate_obj);
}

// [0x006BC380] sub_006BC380 (16 bytes)
// @name sub_006BC380
// @summary Getter returning int32_t field at offset +0x8.
extern "C" int32_t __fastcall fn_006BC380(void* self) {
    return static_cast<int32_t>(lift_field<int32_t>(self, 0x8));
}

// [0x006BC390] sub_006BC390 (16 bytes)
// @name sub_006BC390
// @summary Member forwarding thunk: loads subobject pointer at +0x4 and tail-calls sub_006E9420.
extern "C" void __fastcall fn_006BC390(void* self) {
    void* delegate_obj = lift_field<void*>(self, 0x4);
    ext_006E9420(delegate_obj);
}

// [0x006BC600] sub_006BC600 (16 bytes)
// @name sub_006BC600
// @summary Getter returning int32_t field at offset +0x3C.
extern "C" int32_t __fastcall fn_006BC600(void* self) {
    return static_cast<int32_t>(lift_field<int32_t>(self, 0x3C));
}

// [0x006BC730] sub_006BC730 (16 bytes)
// @name sub_006BC730
// @summary Getter returning int32_t field at offset +0x54.
extern "C" int32_t __fastcall fn_006BC730(void* self) {
    return static_cast<int32_t>(lift_field<int32_t>(self, 0x54));
}

// [0x006BC7B0] sub_006BC7B0 (16 bytes)
// @name sub_006BC7B0
// @summary Getter returning int32_t field at offset +0xDC.
extern "C" int32_t __fastcall fn_006BC7B0(void* self) {
    return static_cast<int32_t>(lift_field<int32_t>(self, 0xDC));
}

// [0x006BC7C0] sub_006BC7C0 (16 bytes)
// @name sub_006BC7C0
// @summary Setter storing int32_t argument into field at offset +0xDC.
extern "C" void __fastcall fn_006BC7C0(void* self, int edx_unused, int32_t value) {
    (void)edx_unused;
    lift_field<int32_t>(self, 0xDC) = value;
}

// [0x006BC7D0] sub_006BC7D0 (16 bytes)
// @name sub_006BC7D0
// @summary Getter returning int32_t field at offset +0x6C.
extern "C" int32_t __fastcall fn_006BC7D0(void* self) {
    return static_cast<int32_t>(lift_field<int32_t>(self, 0x6C));
}

// [0x006BC7E0] sub_006BC7E0 (16 bytes)
// @name sub_006BC7E0
// @summary Getter returning int32_t field at offset +0x70.
extern "C" int32_t __fastcall fn_006BC7E0(void* self) {
    return static_cast<int32_t>(lift_field<int32_t>(self, 0x70));
}

// [0x006BC7F0] sub_006BC7F0 (16 bytes)
// @name sub_006BC7F0
// @summary Getter returning int32_t field at offset +0x74.
extern "C" int32_t __fastcall fn_006BC7F0(void* self) {
    return static_cast<int32_t>(lift_field<int32_t>(self, 0x74));
}

// [0x006BC960] sub_006BC960 (16 bytes)
// @name sub_006BC960
// @summary This-adjustor thunk: adjusts `this` by +0x78 and tail-calls sub_006E7460.
extern "C" void __fastcall fn_006BC960(void* self) {
    ext_006E7460(static_cast<char*>(self) + 0x78);
}

// [0x006B0040]
namespace lift_006B0040 {
extern uint32_t mem_00991188;

// @name initVtable_006B0040
// @summary Sets the object's vtable pointer at +0x00 to 0x00991188 and returns this.
// @field Object +0x00 uint32_t vptr
void* __thiscall sub_006B0040(void* self) {
    *reinterpret_cast<uint32_t*>(self) = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(&mem_00991188));
    return self;
}
} // namespace lift_006B0040

// [0x006B1830]
namespace lift_006B1830 {
// @name sub_006B1830
// @summary Sets the vftable pointer at +0x00 to 0x00991744 and returns this.
// @field unknown +0x00 uint32_t vftable


extern uint32_t mem_00991744;

void* __thiscall sub_006B1830(void* self) {
    *reinterpret_cast<uint32_t*>(self) = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(&mem_00991744));
    return self;
}
} // namespace lift_006B1830

// [0x006B1900]
namespace lift_006B1900 {
// @name sub_006B1900
// @summary Sets the vtable pointer at offset 0x00 to 0x00991750 and returns this


extern uint8_t mem_00991750[];

void* __thiscall sub_006B1900(void* self) {
    *reinterpret_cast<uint32_t*>(self) = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(mem_00991750));
    return self;
}
} // namespace lift_006B1900

// [0x006B19B0]
namespace lift_006B19B0 {
// @name initVtable_006B19B0
// @summary Initializes object vtable pointer to 0x0099175C and returns this
// @field Object +0x00 uint32_t vtable


extern uint32_t mem_0099175C;

void* __thiscall sub_006B19B0(void* self) {
    *reinterpret_cast<uint32_t*>(self) = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(&mem_0099175C));
    return self;
}
} // namespace lift_006B19B0

// [0x006B98E0] sub_006B98E0 (10 bytes)
namespace lift_006B98E0 {
// @name sub_006B98E0
// @summary Auto-lifted identical-shape clone of 0x007AE0A0 (sub_007AE0A0).
namespace lift_007AE0A0 {
// @name sub_007AE0A0
// @summary Sets ECX to global mem_00B616B8 and tail-calls ext_006B9D70.


void ext_006B9D10(void);

extern uint8_t mem_00B5D268[];

extern void fn_006B98E0(void) {
    (void)mem_00B5D268;
    ext_006B9D10();
}
} // namespace lift_007AE0A0
} // namespace lift_006B98E0

// [0x006B9900] sub_006B9900 (10 bytes)
namespace lift_006B9900 {
// @name sub_006B9900
// @summary Auto-lifted identical-shape clone of 0x007AE0A0 (sub_007AE0A0).
namespace lift_007AE0A0 {
// @name sub_007AE0A0
// @summary Sets ECX to global mem_00B616B8 and tail-calls ext_006B9D70.


void ext_006B9D70(void);

extern uint8_t mem_00B5D268[];

extern void fn_006B9900(void) {
    (void)mem_00B5D268;
    ext_006B9D70();
}
} // namespace lift_007AE0A0
} // namespace lift_006B9900

// [0x006B4090] sub_006B4090 (13 bytes)
namespace lift_006B4090 {
// @name sub_006B4090
// @summary Auto-lifted identical-shape clone of 0x00546860 (RotateTool::vfunc_7).
namespace lift_00546860 {
// @name RotateTool::vfunc_7
// @class RotateTool
// @summary Returns 1 if the int at RotateTool+0xA8 equals 4, otherwise 0.
// @field RotateTool +0xA8 int32_t field_0xA8
int32_t fn_006B4090(void* self) {
    return lift_field<int32_t>(self, 0x4) == 210 ? 1 : 0;
}
} // namespace lift_00546860
} // namespace lift_006B4090

// [0x006B9910]
namespace lift_006B9910 {
// @name Unknown::sub_006B9910
// @class Unknown
// @summary Zero-initializes two dword fields and sets the vtable pointer to mem_00B5D2B8.
// @field Unknown +0x00 uint32_t field_0x00
// @field Unknown +0x04 uint32_t field_0x04
// @field Unknown +0x08 uint32_t field_0x08

extern uint32_t mem_00B5D2B8;

struct Unknown {
    uint32_t field_0x00;
    uint32_t field_0x04;
    uint32_t field_0x08;
};

void sub_006B9910(Unknown* ecx) {
    ecx->field_0x00 = (uint32_t)(uintptr_t)&mem_00B5D2B8;
    ecx->field_0x04 = 0;
    ecx->field_0x08 = 0;
}
} // namespace lift_006B9910

// [0x006B9940] sub_006B9940 (16 bytes)
namespace lift_006B9940 {
// @name Unknown::IsNotTypeTag_B5D2BC
// @class Unknown
// @summary Returns 1 if the first dword of *this differs from the constant 0xB5D2BC (global mem_00B5D2BC), else 0.
// @field Unknown +0x00 uint32_t field_0x00

// Global at VA 0x00B5D2BC; only its address is compared, never its contents.
extern const uint8_t mem_00B5D2BC[];

namespace {
// Compared against the first dword of the object, as in the original `cmp edx, 0xb5d2bc`.
constexpr uint32_t kMem_00B5D2BC_VA = 0x00B5D2BCu;
}

// thiscall in the original: `this` arrives in ecx.
uint32_t fn_006B9940(void* self) {
    const uint32_t first = lift_field<uint32_t>(self, 0x00);
    return first != kMem_00B5D2BC_VA ? 1u : 0u;
}
} // namespace lift_006B9940

// [0x006B9950] sub_006B9950 (16 bytes)
namespace lift_006B9950 {
// @name Unknown::IsField04Zero
// @class Unknown
// @summary Thiscall predicate: returns 1 if the DWORD at this+0x04 is zero, else 0.
// @field Unknown +0x04 uint32_t field_04
int fn_006B9950(void* self) {
    const uint32_t v = lift_field<uint32_t>(self, 0x04);
    return v == 0 ? 1 : 0;
}
} // namespace lift_006B9950

// [0x006BB750] sub_006BB750 (16 bytes)
namespace lift_006BB750 {
// @name StoreDwordThroughIndirectPtr
// @summary Loads the pointer stored at *self and writes the stack argument through it (*(*self) = value); stdcall, ret 4.
// @field (none) - no class instance; self is a pointer to a dword holding the target address, not a class object.
void fn_006BB750(uint32_t** self, uint32_t value) {
    uint32_t* target = *self;
    *target = value;
}
} // namespace lift_006BB750

// [0x006BB780]
namespace lift_006BB780 {
// @name SetPointeeWord4
// @summary Stores the stack argument into the dword at offset +4 of the object pointed to by self's first field (thiscall, callee pops 4 bytes).
// @field Unknown +0x00 void* field_0x00 (pointer to a sub-object; dereferenced to reach the target)
// @field Unknown (pointee) +0x04 uint32_t field_0x04 (written with the argument value)
void __thiscall fn_006BB780(void* self, uint32_t value) {
    void* target = lift_field<void*>(self, 0x00);
    lift_field<uint32_t>(target, 0x04) = value;
}
} // namespace lift_006BB780
