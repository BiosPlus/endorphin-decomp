// Lifted C++ translation unit: lifted/leaf/tiny_710000.cpp
#include "lift_compat.h"
extern "C" void __fastcall ext_007100F0(void* self);
extern "C" void __cdecl ext_006A5C5C(void* ptr);
extern "C" void __fastcall ext_00711220(void* self);
extern "C" int32_t mem_00B5F220;
extern "C" int32_t mem_00B5F1F0;
extern "C" int mem_00B5F1E8;
extern "C" int32_t mem_00AAB8E4;
extern "C" void __fastcall ext_00712580(void* self);
extern "C" int mem_00995FE8;
extern "C" int mem_00AAC03C;
extern "C" void __fastcall ext_00714060(void* self);
extern "C" int32_t mem_00B5FA80;
extern "C" int32_t mem_00B5FA78;
extern "C" int mem_00B5FA70;
extern "C" void __fastcall ext_007152D0(void* self);
extern "C" void __fastcall ext_00715450(void* self);
extern "C" void __fastcall ext_00717D60(void* self);
extern "C" int32_t mem_00B5FC88;
extern "C" int32_t mem_00B5FC98;
extern "C" int mem_00B5FC90;
extern "C" void __fastcall ext_0071A1F0(void* self);
extern "C" void __fastcall ext_0071A970(void* self);
extern "C" int32_t mem_00B5FE20;
extern "C" int32_t mem_00B5FE30;
extern "C" int mem_00B5FE28;
extern "C" void __fastcall ext_0071DD00(void* self);
extern "C" void __fastcall ext_0071DDF0(void* self);
extern "C" void __fastcall ext_0071E510(void* self);
extern "C" void __fastcall ext_0071F060(void* self);
extern "C" void __fastcall ext_006D2250(void* self);

// [0x007100D0] sub_007100D0 (30 bytes)
// @name sub_007100D0
// @summary MSVC scalar deleting destructor: calls sub_007100F0 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_007100D0(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_007100F0(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x007102F0] sub_007102F0 (16 bytes)
// @name sub_007102F0
// @summary Setter storing uint8_t argument into field at offset +0x150.
extern "C" void __fastcall fn_007102F0(void* self, int edx_unused, uint8_t value) {
    (void)edx_unused;
    lift_field<uint8_t>(self, 0x150) = value;
}

// [0x00710300] sub_00710300 (16 bytes)
// @name sub_00710300
// @summary Getter returning int32_t field at offset +0x154.
extern "C" int32_t __fastcall fn_00710300(void* self) {
    return static_cast<int32_t>(lift_field<int32_t>(self, 0x154));
}

// [0x00711200] sub_00711200 (30 bytes)
// @name sub_00711200
// @summary MSVC scalar deleting destructor: calls sub_00711220 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_00711200(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_00711220(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x00712520] sub_00712520 (6 bytes)
// @name sub_00712520
// @summary Returns global int32 value from mem_00B5F220.
extern "C" int32_t __cdecl fn_00712520(void) {
    return mem_00B5F220;
}

// [0x00712530] sub_00712530 (6 bytes)
// @name sub_00712530
// @summary Returns global int32 value from mem_00B5F1F0.
extern "C" int32_t __cdecl fn_00712530(void) {
    return mem_00B5F1F0;
}

// [0x00712540] sub_00712540 (6 bytes)
// @name sub_00712540
// @summary Returns address of global mem_00B5F1E8.
extern "C" void* __cdecl fn_00712540(void) {
    return &mem_00B5F1E8;
}

// [0x00712550] sub_00712550 (6 bytes)
// @name sub_00712550
// @summary Returns global int32 value from mem_00AAB8E4.
extern "C" int32_t __cdecl fn_00712550(void) {
    return mem_00AAB8E4;
}

// [0x00712560] sub_00712560 (30 bytes)
// @name sub_00712560
// @summary MSVC scalar deleting destructor: calls sub_00712580 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_00712560(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_00712580(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x00712580] sub_00712580 (16 bytes)
// @name sub_00712580
// @summary Destructor tail-call: restores vtable mem_00995FE8 and tail-calls base destructor sub_00711220.
extern "C" void __fastcall fn_00712580(void* self) {
    lift_field<void*>(self, 0x0) = &mem_00995FE8;
    ext_00711220(self);
}

// [0x00712A20] sub_00712A20 (16 bytes)
// @name sub_00712A20
// @summary Returns constant 0x2.
extern "C" int32_t __cdecl fn_00712A20(void) {
    return 0x2;
}

// [0x00712A30] sub_00712A30 (16 bytes)
// @name sub_00712A30
// @summary Returns constant 0x5.
extern "C" int32_t __cdecl fn_00712A30(void) {
    return 0x5;
}

// [0x00712A40] sub_00712A40 (16 bytes)
// @name sub_00712A40
// @summary Returns constant 0xD.
extern "C" int32_t __cdecl fn_00712A40(void) {
    return 0xD;
}

// [0x00712A50] sub_00712A50 (16 bytes)
// @name sub_00712A50
// @summary Returns constant 0xF.
extern "C" int32_t __cdecl fn_00712A50(void) {
    return 0xF;
}

// [0x00712A60] sub_00712A60 (16 bytes)
// @name sub_00712A60
// @summary Returns constant 0xE.
extern "C" int32_t __cdecl fn_00712A60(void) {
    return 0xE;
}

// [0x00712A70] sub_00712A70 (16 bytes)
// @name sub_00712A70
// @summary Returns constant 0x11.
extern "C" int32_t __cdecl fn_00712A70(void) {
    return 0x11;
}

// [0x00713580] sub_00713580 (8 bytes)
// @name sub_00713580
// @summary Returns address of global mem_00AAC03C.
extern "C" void* __stdcall fn_00713580(int a1) {
    return &mem_00AAC03C;
}

// [0x00713930] sub_00713930 (30 bytes)
// @name sub_00713930
// @summary MSVC scalar deleting destructor: calls sub_00714060 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_00713930(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_00714060(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x00714970] sub_00714970 (16 bytes)
// @name sub_00714970
// @summary Setter storing uint8_t argument into field at offset +0xDC.
extern "C" void __fastcall fn_00714970(void* self, int edx_unused, uint8_t value) {
    (void)edx_unused;
    lift_field<uint8_t>(self, 0xDC) = value;
}

// [0x00714980] sub_00714980 (16 bytes)
// @name sub_00714980
// @summary Getter returning uint8_t field at offset +0xDC.
extern "C" uint8_t __fastcall fn_00714980(void* self) {
    return static_cast<uint8_t>(lift_field<uint8_t>(self, 0xDC));
}

// [0x007149B0] sub_007149B0 (16 bytes)
// @name sub_007149B0
// @summary Getter returning uint8_t field at offset +0xDD.
extern "C" uint8_t __fastcall fn_007149B0(void* self) {
    return static_cast<uint8_t>(lift_field<uint8_t>(self, 0xDD));
}

// [0x007149C0] sub_007149C0 (16 bytes)
// @name sub_007149C0
// @summary Setter storing uint8_t argument into field at offset +0xDE.
extern "C" void __fastcall fn_007149C0(void* self, int edx_unused, uint8_t value) {
    (void)edx_unused;
    lift_field<uint8_t>(self, 0xDE) = value;
}

// [0x007149D0] sub_007149D0 (16 bytes)
// @name sub_007149D0
// @summary Getter returning uint8_t field at offset +0xDE.
extern "C" uint8_t __fastcall fn_007149D0(void* self) {
    return static_cast<uint8_t>(lift_field<uint8_t>(self, 0xDE));
}

// [0x00715160] sub_00715160 (6 bytes)
// @name sub_00715160
// @summary Returns global int32 value from mem_00B5FA80.
extern "C" int32_t __cdecl fn_00715160(void) {
    return mem_00B5FA80;
}

// [0x00715170] sub_00715170 (6 bytes)
// @name sub_00715170
// @summary Returns global int32 value from mem_00B5FA78.
extern "C" int32_t __cdecl fn_00715170(void) {
    return mem_00B5FA78;
}

// [0x00715180] sub_00715180 (6 bytes)
// @name sub_00715180
// @summary Returns address of global mem_00B5FA70.
extern "C" void* __cdecl fn_00715180(void) {
    return &mem_00B5FA70;
}

// [0x007152B0] sub_007152B0 (30 bytes)
// @name sub_007152B0
// @summary MSVC scalar deleting destructor: calls sub_007152D0 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_007152B0(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_007152D0(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x00715430] sub_00715430 (30 bytes)
// @name sub_00715430
// @summary MSVC scalar deleting destructor: calls sub_00715450 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_00715430(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_00715450(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x00715550] sub_00715550 (16 bytes)
// @name sub_00715550
// @summary Getter returning int32_t field at offset +0xC.
extern "C" int32_t __fastcall fn_00715550(void* self) {
    return static_cast<int32_t>(lift_field<int32_t>(self, 0xC));
}

// [0x00717D40] sub_00717D40 (30 bytes)
// @name sub_00717D40
// @summary MSVC scalar deleting destructor: calls sub_00717D60 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_00717D40(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_00717D60(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x00718010] sub_00718010 (16 bytes)
// @name sub_00718010
// @summary Getter returning int32_t field at offset +0x1C8.
extern "C" int32_t __fastcall fn_00718010(void* self) {
    return static_cast<int32_t>(lift_field<int32_t>(self, 0x1C8));
}

// [0x00718020] sub_00718020 (16 bytes)
// @name sub_00718020
// @summary Getter returning int32_t field at offset +0x1CC.
extern "C" int32_t __fastcall fn_00718020(void* self) {
    return static_cast<int32_t>(lift_field<int32_t>(self, 0x1CC));
}

// [0x00718090] sub_00718090 (16 bytes)
// @name sub_00718090
// @summary Setter storing int32_t argument into field at offset +0x1D8.
extern "C" void __fastcall fn_00718090(void* self, int edx_unused, int32_t value) {
    (void)edx_unused;
    lift_field<int32_t>(self, 0x1D8) = value;
}

// [0x007180A0] sub_007180A0 (16 bytes)
// @name sub_007180A0
// @summary Getter returning int32_t field at offset +0x1D0.
extern "C" int32_t __fastcall fn_007180A0(void* self) {
    return static_cast<int32_t>(lift_field<int32_t>(self, 0x1D0));
}

// [0x007180B0] sub_007180B0 (16 bytes)
// @name sub_007180B0
// @summary Getter returning int32_t field at offset +0x1D4.
extern "C" int32_t __fastcall fn_007180B0(void* self) {
    return static_cast<int32_t>(lift_field<int32_t>(self, 0x1D4));
}

// [0x007180C0] sub_007180C0 (16 bytes)
// @name sub_007180C0
// @summary Setter storing uint8_t argument into field at offset +0x1DC.
extern "C" void __fastcall fn_007180C0(void* self, int edx_unused, uint8_t value) {
    (void)edx_unused;
    lift_field<uint8_t>(self, 0x1DC) = value;
}

// [0x007180D0] sub_007180D0 (16 bytes)
// @name sub_007180D0
// @summary Getter returning uint8_t field at offset +0x1DC.
extern "C" uint8_t __fastcall fn_007180D0(void* self) {
    return static_cast<uint8_t>(lift_field<uint8_t>(self, 0x1DC));
}

// [0x007180E0] sub_007180E0 (16 bytes)
// @name sub_007180E0
// @summary Setter storing uint8_t argument into field at offset +0x1DD.
extern "C" void __fastcall fn_007180E0(void* self, int edx_unused, uint8_t value) {
    (void)edx_unused;
    lift_field<uint8_t>(self, 0x1DD) = value;
}

// [0x007180F0] sub_007180F0 (16 bytes)
// @name sub_007180F0
// @summary Getter returning uint8_t field at offset +0x1DD.
extern "C" uint8_t __fastcall fn_007180F0(void* self) {
    return static_cast<uint8_t>(lift_field<uint8_t>(self, 0x1DD));
}

// [0x00719A90] sub_00719A90 (6 bytes)
// @name sub_00719A90
// @summary Returns global int32 value from mem_00B5FC88.
extern "C" int32_t __cdecl fn_00719A90(void) {
    return mem_00B5FC88;
}

// [0x00719AA0] sub_00719AA0 (6 bytes)
// @name sub_00719AA0
// @summary Returns global int32 value from mem_00B5FC98.
extern "C" int32_t __cdecl fn_00719AA0(void) {
    return mem_00B5FC98;
}

// [0x00719AB0] sub_00719AB0 (6 bytes)
// @name sub_00719AB0
// @summary Returns address of global mem_00B5FC90.
extern "C" void* __cdecl fn_00719AB0(void) {
    return &mem_00B5FC90;
}

// [0x0071A1D0] sub_0071A1D0 (30 bytes)
// @name sub_0071A1D0
// @summary MSVC scalar deleting destructor: calls sub_0071A1F0 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_0071A1D0(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_0071A1F0(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x0071A950] sub_0071A950 (30 bytes)
// @name sub_0071A950
// @summary MSVC scalar deleting destructor: calls sub_0071A970 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_0071A950(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_0071A970(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x0071AA10] sub_0071AA10 (16 bytes)
// @name sub_0071AA10
// @summary Returns constant 0x7.
extern "C" int32_t __cdecl fn_0071AA10(void) {
    return 0x7;
}

// [0x0071C570] sub_0071C570 (16 bytes)
// @name sub_0071C570
// @summary Setter storing uint8_t argument into field at offset +0xE8.
extern "C" void __fastcall fn_0071C570(void* self, int edx_unused, uint8_t value) {
    (void)edx_unused;
    lift_field<uint8_t>(self, 0xE8) = value;
}

// [0x0071C580] sub_0071C580 (16 bytes)
// @name sub_0071C580
// @summary Getter returning uint8_t field at offset +0xE8.
extern "C" uint8_t __fastcall fn_0071C580(void* self) {
    return static_cast<uint8_t>(lift_field<uint8_t>(self, 0xE8));
}

// [0x0071C5D0] sub_0071C5D0 (16 bytes)
// @name sub_0071C5D0
// @summary Setter storing uint8_t argument into field at offset +0xE9.
extern "C" void __fastcall fn_0071C5D0(void* self, int edx_unused, uint8_t value) {
    (void)edx_unused;
    lift_field<uint8_t>(self, 0xE9) = value;
}

// [0x0071C5E0] sub_0071C5E0 (16 bytes)
// @name sub_0071C5E0
// @summary Getter returning uint8_t field at offset +0xE9.
extern "C" uint8_t __fastcall fn_0071C5E0(void* self) {
    return static_cast<uint8_t>(lift_field<uint8_t>(self, 0xE9));
}

// [0x0071C610] sub_0071C610 (16 bytes)
// @name sub_0071C610
// @summary Setter storing uint8_t argument into field at offset +0xEA.
extern "C" void __fastcall fn_0071C610(void* self, int edx_unused, uint8_t value) {
    (void)edx_unused;
    lift_field<uint8_t>(self, 0xEA) = value;
}

// [0x0071C620] sub_0071C620 (16 bytes)
// @name sub_0071C620
// @summary Getter returning uint8_t field at offset +0xEA.
extern "C" uint8_t __fastcall fn_0071C620(void* self) {
    return static_cast<uint8_t>(lift_field<uint8_t>(self, 0xEA));
}

// [0x0071C910] sub_0071C910 (16 bytes)
// @name sub_0071C910
// @summary Setter storing int32_t argument into field at offset +0x110.
extern "C" void __fastcall fn_0071C910(void* self, int edx_unused, int32_t value) {
    (void)edx_unused;
    lift_field<int32_t>(self, 0x110) = value;
}

// [0x0071C920] sub_0071C920 (16 bytes)
// @name sub_0071C920
// @summary Getter returning int32_t field at offset +0x110.
extern "C" int32_t __fastcall fn_0071C920(void* self) {
    return static_cast<int32_t>(lift_field<int32_t>(self, 0x110));
}

// [0x0071DCB0] sub_0071DCB0 (6 bytes)
// @name sub_0071DCB0
// @summary Returns global int32 value from mem_00B5FE20.
extern "C" int32_t __cdecl fn_0071DCB0(void) {
    return mem_00B5FE20;
}

// [0x0071DCC0] sub_0071DCC0 (6 bytes)
// @name sub_0071DCC0
// @summary Returns global int32 value from mem_00B5FE30.
extern "C" int32_t __cdecl fn_0071DCC0(void) {
    return mem_00B5FE30;
}

// [0x0071DCD0] sub_0071DCD0 (6 bytes)
// @name sub_0071DCD0
// @summary Returns address of global mem_00B5FE28.
extern "C" void* __cdecl fn_0071DCD0(void) {
    return &mem_00B5FE28;
}

// [0x0071DCE0] sub_0071DCE0 (30 bytes)
// @name sub_0071DCE0
// @summary MSVC scalar deleting destructor: calls sub_0071DD00 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_0071DCE0(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_0071DD00(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x0071DDD0] sub_0071DDD0 (30 bytes)
// @name sub_0071DDD0
// @summary MSVC scalar deleting destructor: calls sub_0071DDF0 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_0071DDD0(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_0071DDF0(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x0071DE50] sub_0071DE50 (16 bytes)
// @name sub_0071DE50
// @summary Returns constant 0x1.
extern "C" int32_t __cdecl fn_0071DE50(void) {
    return 0x1;
}

// [0x0071E4F0] sub_0071E4F0 (30 bytes)
// @name sub_0071E4F0
// @summary MSVC scalar deleting destructor: calls sub_0071E510 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_0071E4F0(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_0071E510(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x0071E670] sub_0071E670 (16 bytes)
// @name sub_0071E670
// @summary Returns pointer to subobject/field at offset +0x28.
extern "C" void* __fastcall fn_0071E670(void* self) {
    return static_cast<char*>(self) + 0x28;
}

// [0x0071E680] sub_0071E680 (16 bytes)
// @name sub_0071E680
// @summary Returns pointer to subobject/field at offset +0x40.
extern "C" void* __fastcall fn_0071E680(void* self) {
    return static_cast<char*>(self) + 0x40;
}

// [0x0071E690] sub_0071E690 (16 bytes)
// @name sub_0071E690
// @summary Returns pointer to subobject/field at offset +0x58.
extern "C" void* __fastcall fn_0071E690(void* self) {
    return static_cast<char*>(self) + 0x58;
}

// [0x0071E6A0] sub_0071E6A0 (16 bytes)
// @name sub_0071E6A0
// @summary Returns pointer to subobject/field at offset +0x70.
extern "C" void* __fastcall fn_0071E6A0(void* self) {
    return static_cast<char*>(self) + 0x70;
}

// [0x0071E6B0] sub_0071E6B0 (16 bytes)
// @name sub_0071E6B0
// @summary Returns pointer to subobject/field at offset +0x88.
extern "C" void* __fastcall fn_0071E6B0(void* self) {
    return static_cast<char*>(self) + 0x88;
}

// [0x0071E6C0] sub_0071E6C0 (16 bytes)
// @name sub_0071E6C0
// @summary Returns pointer to subobject/field at offset +0xA0.
extern "C" void* __fastcall fn_0071E6C0(void* self) {
    return static_cast<char*>(self) + 0xA0;
}

// [0x0071E6D0] sub_0071E6D0 (16 bytes)
// @name sub_0071E6D0
// @summary Returns pointer to subobject/field at offset +0xB8.
extern "C" void* __fastcall fn_0071E6D0(void* self) {
    return static_cast<char*>(self) + 0xB8;
}

// [0x0071F040] sub_0071F040 (30 bytes)
// @name sub_0071F040
// @summary MSVC scalar deleting destructor: calls sub_0071F060 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_0071F040(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_0071F060(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x0071F090] sub_0071F090 (8 bytes)
// @name sub_0071F090
// @summary This-adjustor thunk: adjusts `this` by +0x8 and tail-calls sub_006D2250.
extern "C" void __fastcall fn_0071F090(void* self) {
    ext_006D2250(static_cast<char*>(self) + 0x8);
}

// [0x00712950] sub_00712950 (7 bytes)
// @name sub_00712950
// @summary Auto-lifted identical-shape clone of 0x0078CBD0 (sub_0078CBD0).
extern "C" void __fastcall fn_00712950(void* self) {
    int32_t* counter = reinterpret_cast<int32_t*>(static_cast<unsigned char*>(self) + 0x88);
    ++(*counter);
}

// [0x00715190] sub_00715190 (23 bytes)
// @name sub_00715190
// @summary Auto-lifted identical-shape clone of 0x0052EFA0 (Primitives::Animation::vfunc_14).
void fn_00715190(void* self, uint32_t a0, uint32_t a1) {
    lift_field<uint32_t>(self, 0x1E8) = a0;
    lift_field<uint32_t>(self, 0x1EC) = a1;
}

// [0x00719AC0] sub_00719AC0 (23 bytes)
// @name sub_00719AC0
// @summary Auto-lifted identical-shape clone of 0x0052EFA0 (Primitives::Animation::vfunc_14).
void fn_00719AC0(void* self, uint32_t a0, uint32_t a1) {
    lift_field<uint32_t>(self, 0x2F8) = a0;
    lift_field<uint32_t>(self, 0x2FC) = a1;
}

// [0x00719B20] sub_00719B20 (23 bytes)
// @name sub_00719B20
// @summary Auto-lifted identical-shape clone of 0x0052EFA0 (Primitives::Animation::vfunc_14).
void fn_00719B20(void* self, uint32_t a0, uint32_t a1) {
    lift_field<uint32_t>(self, 0x628) = a0;
    lift_field<uint32_t>(self, 0x62C) = a1;
}

// [0x00719C90] sub_00719C90 (23 bytes)
// @name sub_00719C90
// @summary Auto-lifted identical-shape clone of 0x0052EFA0 (Primitives::Animation::vfunc_14).
void fn_00719C90(void* self, uint32_t a0, uint32_t a1) {
    lift_field<uint32_t>(self, 0xA80) = a0;
    lift_field<uint32_t>(self, 0xA84) = a1;
}

// [0x00719CC0] sub_00719CC0 (23 bytes)
// @name sub_00719CC0
// @summary Auto-lifted identical-shape clone of 0x0052EFA0 (Primitives::Animation::vfunc_14).
void fn_00719CC0(void* self, uint32_t a0, uint32_t a1) {
    lift_field<uint32_t>(self, 0xB08) = a0;
    lift_field<uint32_t>(self, 0xB0C) = a1;
}

// [0x00719CF0] sub_00719CF0 (23 bytes)
// @name sub_00719CF0
// @summary Auto-lifted identical-shape clone of 0x0052EFA0 (Primitives::Animation::vfunc_14).
void fn_00719CF0(void* self, uint32_t a0, uint32_t a1) {
    lift_field<uint32_t>(self, 0xB90) = a0;
    lift_field<uint32_t>(self, 0xB94) = a1;
}

// [0x00719D20] sub_00719D20 (23 bytes)
// @name sub_00719D20
// @summary Auto-lifted identical-shape clone of 0x0052EFA0 (Primitives::Animation::vfunc_14).
void fn_00719D20(void* self, uint32_t a0, uint32_t a1) {
    lift_field<uint32_t>(self, 0xC18) = a0;
    lift_field<uint32_t>(self, 0xC1C) = a1;
}

// [0x00719D50] sub_00719D50 (23 bytes)
// @name sub_00719D50
// @summary Auto-lifted identical-shape clone of 0x0052EFA0 (Primitives::Animation::vfunc_14).
void fn_00719D50(void* self, uint32_t a0, uint32_t a1) {
    lift_field<uint32_t>(self, 0xCA0) = a0;
    lift_field<uint32_t>(self, 0xCA4) = a1;
}

// [0x00719D80] sub_00719D80 (23 bytes)
// @name sub_00719D80
// @summary Auto-lifted identical-shape clone of 0x0052EFA0 (Primitives::Animation::vfunc_14).
void fn_00719D80(void* self, uint32_t a0, uint32_t a1) {
    lift_field<uint32_t>(self, 0xD28) = a0;
    lift_field<uint32_t>(self, 0xD2C) = a1;
}

// [0x00719E30] sub_00719E30 (23 bytes)
// @name sub_00719E30
// @summary Auto-lifted identical-shape clone of 0x0052EFA0 (Primitives::Animation::vfunc_14).
void fn_00719E30(void* self, uint32_t a0, uint32_t a1) {
    lift_field<uint32_t>(self, 0xFD0) = a0;
    lift_field<uint32_t>(self, 0xFD4) = a1;
}

// [0x00719F80] sub_00719F80 (23 bytes)
// @name sub_00719F80
// @summary Auto-lifted identical-shape clone of 0x0052EFA0 (Primitives::Animation::vfunc_14).
void fn_00719F80(void* self, uint32_t a0, uint32_t a1) {
    lift_field<uint32_t>(self, 0x1520) = a0;
    lift_field<uint32_t>(self, 0x1524) = a1;
}

// [0x0071A010] sub_0071A010 (23 bytes)
// @name sub_0071A010
// @summary Auto-lifted identical-shape clone of 0x0052EFA0 (Primitives::Animation::vfunc_14).
void fn_0071A010(void* self, uint32_t a0, uint32_t a1) {
    lift_field<uint32_t>(self, 0x1740) = a0;
    lift_field<uint32_t>(self, 0x1744) = a1;
}

// [0x0071A0E0] sub_0071A0E0 (23 bytes)
// @name sub_0071A0E0
// @summary Auto-lifted identical-shape clone of 0x0052EFA0 (Primitives::Animation::vfunc_14).
void fn_0071A0E0(void* self, uint32_t a0, uint32_t a1) {
    lift_field<uint32_t>(self, 0x1A70) = a0;
    lift_field<uint32_t>(self, 0x1A74) = a1;
}

// [0x0071A110] sub_0071A110 (23 bytes)
// @name sub_0071A110
// @summary Auto-lifted identical-shape clone of 0x0052EFA0 (Primitives::Animation::vfunc_14).
void fn_0071A110(void* self, uint32_t a0, uint32_t a1) {
    lift_field<uint32_t>(self, 0x1AF8) = a0;
    lift_field<uint32_t>(self, 0x1AFC) = a1;
}

// [0x0071A160] sub_0071A160 (23 bytes)
// @name sub_0071A160
// @summary Auto-lifted identical-shape clone of 0x0052EFA0 (Primitives::Animation::vfunc_14).
void fn_0071A160(void* self, uint32_t a0, uint32_t a1) {
    lift_field<uint32_t>(self, 0x1C08) = a0;
    lift_field<uint32_t>(self, 0x1C0C) = a1;
}

// [0x00713860]
namespace lift_00713860 {
extern uint8_t mem_00B5F410[];
extern void ext_00714060(void* self);

// @name tailcall_00714060_global_00B5F410
// @summary Tail-calls sub_00714060 with global object mem_00B5F410 in ecx.
void sub_00713860() {
    ext_00714060(mem_00B5F410);
}
} // namespace lift_00713860

// [0x007138A0]
namespace lift_007138A0 {
// @name sub_007138A0
// @summary Tail-calls sub_00714060 with global object mem_00B5F8A0 as this


extern uint8_t mem_00B5F8A0[];
extern void __thiscall ext_00714060(void* self);

extern void sub_007138A0() {
    ext_00714060(mem_00B5F8A0);
}
} // namespace lift_007138A0

// [0x007137E0]
namespace lift_007137E0 {
// @name initSingleton_007137E0
// @summary Tail-calls sub_00714060 with global object at 0x00B5F888 in ecx.


extern uint8_t mem_00B5F888[];
extern void __thiscall ext_00714060(void* self);

void sub_007137E0() {
    ext_00714060(mem_00B5F888);
}
} // namespace lift_007137E0

// [0x00713820]
namespace lift_00713820 {
extern uint8_t mem_00B5F708[];
extern void ext_00714060(void* ecx);

// @name initGlobal_00B5F708
// @summary Tail-calls sub_00714060 with global object mem_00B5F708 in ecx.
void sub_00713820(void) {
    ext_00714060(mem_00B5F708);
}
} // namespace lift_00713820

// [0x00713920]
namespace lift_00713920 {
extern void* mem_00B5F798;
extern void ext_00714060(void* self);

// @name thunk_sub_00714060
// @summary Tail-calls sub_00714060 with global mem_00B5F798 as this pointer
void sub_00713920() {
    ext_00714060(mem_00B5F798);
}
} // namespace lift_00713920

// [0x007138E0]
namespace lift_007138E0 {
extern uint8_t mem_00B5F7E0[];
extern int32_t (__thiscall *ext_00714060)(void* self);

// @name tailCall_00714060_with_00B5F7E0
// @summary Tail-calls sub_00714060 with global object mem_00B5F7E0 as this
int32_t sub_007138E0(void) {
    return ext_00714060(mem_00B5F7E0);
}
} // namespace lift_007138E0

// [0x00713980]
namespace lift_00713980 {
extern uint8_t mem_00B5F3E0[];
extern void __thiscall ext_00714060(void* self);

// @name sub_00713980_tailcall_00714060
// @summary Tail-calls sub_00714060 with global object mem_00B5F3E0 as this
void __cdecl sub_00713980() {
    ext_00714060(mem_00B5F3E0);
}
} // namespace lift_00713980

// [0x007139C0]
namespace lift_007139C0 {
// @name initGlobal_00B5F498
// @summary Tail-calls ext_00714060 with global object mem_00B5F498 as this.

extern uint8_t mem_00B5F498[];
extern void __thiscall ext_00714060(void* self);

void __cdecl sub_007139C0() {
    ext_00714060(mem_00B5F498);
}
} // namespace lift_007139C0

// [0x00713A00]
namespace lift_00713A00 {
// @name sub_00713A00
// @summary Tail-call wrapper that passes global 0x00B5F5F0 in ecx to sub_00714060.


extern uint8_t mem_00B5F5F0[];
extern void ext_00714060(void* self);

void fn_00713A00() {
    ext_00714060(mem_00B5F5F0);
}
} // namespace lift_00713A00

// [0x00713A40]
namespace lift_00713A40 {
extern uint8_t mem_00B5F780[];
extern void __thiscall ext_00714060(void* thisPtr);

// @name thunk_sub_00714060
// @summary Tail-call thunk passing global object mem_00B5F780 as this to sub_00714060
void sub_00713A40() {
    ext_00714060(mem_00B5F780);
}
} // namespace lift_00713A40

// [0x00713760] sub_00713760 (10 bytes)
namespace lift_00713760 {
// @name sub_00713760
// @summary Auto-lifted identical-shape clone of 0x007AE0A0 (sub_007AE0A0).
namespace lift_007AE0A0 {
// @name sub_007AE0A0
// @summary Sets ECX to global mem_00B616B8 and tail-calls ext_006B9D70.


void ext_00714060(void);

extern uint8_t mem_00B5F810[];

extern void fn_00713760(void) {
    (void)mem_00B5F810;
    ext_00714060();
}
} // namespace lift_007AE0A0
} // namespace lift_00713760

// [0x007137A0] sub_007137A0 (10 bytes)
namespace lift_007137A0 {
// @name sub_007137A0
// @summary Auto-lifted identical-shape clone of 0x007AE0A0 (sub_007AE0A0).
namespace lift_007AE0A0 {
// @name sub_007AE0A0
// @summary Sets ECX to global mem_00B616B8 and tail-calls ext_006B9D70.


void ext_00714060(void);

extern uint8_t mem_00B5F7B0[];

extern void fn_007137A0(void) {
    (void)mem_00B5F7B0;
    ext_00714060();
}
} // namespace lift_007AE0A0
} // namespace lift_007137A0

// [0x00713A80] sub_00713A80 (10 bytes)
namespace lift_00713A80 {
// @name sub_00713A80
// @summary Auto-lifted identical-shape clone of 0x007AE0A0 (sub_007AE0A0).
namespace lift_007AE0A0 {
// @name sub_007AE0A0
// @summary Sets ECX to global mem_00B616B8 and tail-calls ext_006B9D70.


void ext_00714060(void);

extern uint8_t mem_00B5F650[];

extern void fn_00713A80(void) {
    (void)mem_00B5F650;
    ext_00714060();
}
} // namespace lift_007AE0A0
} // namespace lift_00713A80

// [0x00713AC0] sub_00713AC0 (10 bytes)
namespace lift_00713AC0 {
// @name sub_00713AC0
// @summary Auto-lifted identical-shape clone of 0x007AE0A0 (sub_007AE0A0).
namespace lift_007AE0A0 {
// @name sub_007AE0A0
// @summary Sets ECX to global mem_00B616B8 and tail-calls ext_006B9D70.


void ext_00714060(void);

extern uint8_t mem_00B5F608[];

extern void fn_00713AC0(void) {
    (void)mem_00B5F608;
    ext_00714060();
}
} // namespace lift_007AE0A0
} // namespace lift_00713AC0

// [0x00713B00] sub_00713B00 (10 bytes)
namespace lift_00713B00 {
// @name sub_00713B00
// @summary Auto-lifted identical-shape clone of 0x007AE0A0 (sub_007AE0A0).
namespace lift_007AE0A0 {
// @name sub_007AE0A0
// @summary Sets ECX to global mem_00B616B8 and tail-calls ext_006B9D70.


void ext_00714060(void);

extern uint8_t mem_00B5F620[];

extern void fn_00713B00(void) {
    (void)mem_00B5F620;
    ext_00714060();
}
} // namespace lift_007AE0A0
} // namespace lift_00713B00

// [0x00713B40] sub_00713B40 (10 bytes)
namespace lift_00713B40 {
// @name sub_00713B40
// @summary Auto-lifted identical-shape clone of 0x007AE0A0 (sub_007AE0A0).
namespace lift_007AE0A0 {
// @name sub_007AE0A0
// @summary Sets ECX to global mem_00B616B8 and tail-calls ext_006B9D70.


void ext_00714060(void);

extern uint8_t mem_00B5F428[];

extern void fn_00713B40(void) {
    (void)mem_00B5F428;
    ext_00714060();
}
} // namespace lift_007AE0A0
} // namespace lift_00713B40

// [0x00713B80] sub_00713B80 (10 bytes)
namespace lift_00713B80 {
// @name sub_00713B80
// @summary Auto-lifted identical-shape clone of 0x007AE0A0 (sub_007AE0A0).
namespace lift_007AE0A0 {
// @name sub_007AE0A0
// @summary Sets ECX to global mem_00B616B8 and tail-calls ext_006B9D70.


void ext_00714060(void);

extern uint8_t mem_00B5F440[];

extern void fn_00713B80(void) {
    (void)mem_00B5F440;
    ext_00714060();
}
} // namespace lift_007AE0A0
} // namespace lift_00713B80

// [0x00713BC0] sub_00713BC0 (10 bytes)
namespace lift_00713BC0 {
// @name sub_00713BC0
// @summary Auto-lifted identical-shape clone of 0x007AE0A0 (sub_007AE0A0).
namespace lift_007AE0A0 {
// @name sub_007AE0A0
// @summary Sets ECX to global mem_00B616B8 and tail-calls ext_006B9D70.


void ext_00714060(void);

extern uint8_t mem_00B5F6D8[];

extern void fn_00713BC0(void) {
    (void)mem_00B5F6D8;
    ext_00714060();
}
} // namespace lift_007AE0A0
} // namespace lift_00713BC0

// [0x00713C00] sub_00713C00 (10 bytes)
namespace lift_00713C00 {
// @name sub_00713C00
// @summary Auto-lifted identical-shape clone of 0x007AE0A0 (sub_007AE0A0).
namespace lift_007AE0A0 {
// @name sub_007AE0A0
// @summary Sets ECX to global mem_00B616B8 and tail-calls ext_006B9D70.


void ext_00714060(void);

extern uint8_t mem_00B5F4C8[];

extern void fn_00713C00(void) {
    (void)mem_00B5F4C8;
    ext_00714060();
}
} // namespace lift_007AE0A0
} // namespace lift_00713C00

// [0x00713C40] sub_00713C40 (10 bytes)
namespace lift_00713C40 {
// @name sub_00713C40
// @summary Auto-lifted identical-shape clone of 0x007AE0A0 (sub_007AE0A0).
namespace lift_007AE0A0 {
// @name sub_007AE0A0
// @summary Sets ECX to global mem_00B616B8 and tail-calls ext_006B9D70.


void ext_00714060(void);

extern uint8_t mem_00B5F398[];

extern void fn_00713C40(void) {
    (void)mem_00B5F398;
    ext_00714060();
}
} // namespace lift_007AE0A0
} // namespace lift_00713C40

// [0x00713C80] sub_00713C80 (10 bytes)
namespace lift_00713C80 {
// @name sub_00713C80
// @summary Auto-lifted identical-shape clone of 0x007AE0A0 (sub_007AE0A0).
namespace lift_007AE0A0 {
// @name sub_007AE0A0
// @summary Sets ECX to global mem_00B616B8 and tail-calls ext_006B9D70.


void ext_00714060(void);

extern uint8_t mem_00B5F738[];

extern void fn_00713C80(void) {
    (void)mem_00B5F738;
    ext_00714060();
}
} // namespace lift_007AE0A0
} // namespace lift_00713C80

// [0x00713CC0] sub_00713CC0 (10 bytes)
namespace lift_00713CC0 {
// @name sub_00713CC0
// @summary Auto-lifted identical-shape clone of 0x007AE0A0 (sub_007AE0A0).
namespace lift_007AE0A0 {
// @name sub_007AE0A0
// @summary Sets ECX to global mem_00B616B8 and tail-calls ext_006B9D70.


void ext_00714060(void);

extern uint8_t mem_00B5F720[];

extern void fn_00713CC0(void) {
    (void)mem_00B5F720;
    ext_00714060();
}
} // namespace lift_007AE0A0
} // namespace lift_00713CC0

// [0x00713D00] sub_00713D00 (10 bytes)
namespace lift_00713D00 {
// @name sub_00713D00
// @summary Auto-lifted identical-shape clone of 0x007AE0A0 (sub_007AE0A0).
namespace lift_007AE0A0 {
// @name sub_007AE0A0
// @summary Sets ECX to global mem_00B616B8 and tail-calls ext_006B9D70.


void ext_00714060(void);

extern uint8_t mem_00B5F5D8[];

extern void fn_00713D00(void) {
    (void)mem_00B5F5D8;
    ext_00714060();
}
} // namespace lift_007AE0A0
} // namespace lift_00713D00

// [0x00713E20] sub_00713E20 (10 bytes)
namespace lift_00713E20 {
// @name sub_00713E20
// @summary Auto-lifted identical-shape clone of 0x007AE0A0 (sub_007AE0A0).
namespace lift_007AE0A0 {
// @name sub_007AE0A0
// @summary Sets ECX to global mem_00B616B8 and tail-calls ext_006B9D70.


void ext_00714060(void);

extern uint8_t mem_00B5F870[];

extern void fn_00713E20(void) {
    (void)mem_00B5F870;
    ext_00714060();
}
} // namespace lift_007AE0A0
} // namespace lift_00713E20

// [0x00713EB0] sub_00713EB0 (10 bytes)
namespace lift_00713EB0 {
// @name sub_00713EB0
// @summary Auto-lifted identical-shape clone of 0x007AE0A0 (sub_007AE0A0).
namespace lift_007AE0A0 {
// @name sub_007AE0A0
// @summary Sets ECX to global mem_00B616B8 and tail-calls ext_006B9D70.


void ext_00714060(void);

extern uint8_t mem_00B5F768[];

extern void fn_00713EB0(void) {
    (void)mem_00B5F768;
    ext_00714060();
}
} // namespace lift_007AE0A0
} // namespace lift_00713EB0

// [0x00713F20] sub_00713F20 (10 bytes)
namespace lift_00713F20 {
// @name sub_00713F20
// @summary Auto-lifted identical-shape clone of 0x007AE0A0 (sub_007AE0A0).
namespace lift_007AE0A0 {
// @name sub_007AE0A0
// @summary Sets ECX to global mem_00B616B8 and tail-calls ext_006B9D70.


void ext_00714060(void);

extern uint8_t mem_00B5F750[];

extern void fn_00713F20(void) {
    (void)mem_00B5F750;
    ext_00714060();
}
} // namespace lift_007AE0A0
} // namespace lift_00713F20

// [0x00714050] sub_00714050 (10 bytes)
namespace lift_00714050 {
// @name sub_00714050
// @summary Auto-lifted identical-shape clone of 0x007AE0A0 (sub_007AE0A0).
namespace lift_007AE0A0 {
// @name sub_007AE0A0
// @summary Sets ECX to global mem_00B616B8 and tail-calls ext_006B9D70.


void ext_00714060(void);

extern uint8_t mem_00B5F668[];

extern void fn_00714050(void) {
    (void)mem_00B5F668;
    ext_00714060();
}
} // namespace lift_007AE0A0
} // namespace lift_00714050

// [0x007140A0] sub_007140A0 (10 bytes)
namespace lift_007140A0 {
// @name sub_007140A0
// @summary Auto-lifted identical-shape clone of 0x007AE0A0 (sub_007AE0A0).
namespace lift_007AE0A0 {
// @name sub_007AE0A0
// @summary Sets ECX to global mem_00B616B8 and tail-calls ext_006B9D70.


void ext_00714060(void);

extern uint8_t mem_00B5F5A8[];

extern void fn_007140A0(void) {
    (void)mem_00B5F5A8;
    ext_00714060();
}
} // namespace lift_007AE0A0
} // namespace lift_007140A0

// [0x00714110] sub_00714110 (10 bytes)
namespace lift_00714110 {
// @name sub_00714110
// @summary Auto-lifted identical-shape clone of 0x007AE0A0 (sub_007AE0A0).
namespace lift_007AE0A0 {
// @name sub_007AE0A0
// @summary Sets ECX to global mem_00B616B8 and tail-calls ext_006B9D70.


void ext_00714060(void);

extern uint8_t mem_00B5F698[];

extern void fn_00714110(void) {
    (void)mem_00B5F698;
    ext_00714060();
}
} // namespace lift_007AE0A0
} // namespace lift_00714110

// [0x00714150] sub_00714150 (10 bytes)
namespace lift_00714150 {
// @name sub_00714150
// @summary Auto-lifted identical-shape clone of 0x007AE0A0 (sub_007AE0A0).
namespace lift_007AE0A0 {
// @name sub_007AE0A0
// @summary Sets ECX to global mem_00B616B8 and tail-calls ext_006B9D70.


void ext_00714060(void);

extern uint8_t mem_00B5F828[];

extern void fn_00714150(void) {
    (void)mem_00B5F828;
    ext_00714060();
}
} // namespace lift_007AE0A0
} // namespace lift_00714150

// [0x00714190] sub_00714190 (10 bytes)
namespace lift_00714190 {
// @name sub_00714190
// @summary Auto-lifted identical-shape clone of 0x007AE0A0 (sub_007AE0A0).
namespace lift_007AE0A0 {
// @name sub_007AE0A0
// @summary Sets ECX to global mem_00B616B8 and tail-calls ext_006B9D70.


void ext_00714060(void);

extern uint8_t mem_00B5F4F8[];

extern void fn_00714190(void) {
    (void)mem_00B5F4F8;
    ext_00714060();
}
} // namespace lift_007AE0A0
} // namespace lift_00714190

// [0x007141D0] sub_007141D0 (10 bytes)
namespace lift_007141D0 {
// @name sub_007141D0
// @summary Auto-lifted identical-shape clone of 0x007AE0A0 (sub_007AE0A0).
namespace lift_007AE0A0 {
// @name sub_007AE0A0
// @summary Sets ECX to global mem_00B616B8 and tail-calls ext_006B9D70.


void ext_00714060(void);

extern uint8_t mem_00B5F3C8[];

extern void fn_007141D0(void) {
    (void)mem_00B5F3C8;
    ext_00714060();
}
} // namespace lift_007AE0A0
} // namespace lift_007141D0

// [0x00714210] sub_00714210 (10 bytes)
namespace lift_00714210 {
// @name sub_00714210
// @summary Auto-lifted identical-shape clone of 0x007AE0A0 (sub_007AE0A0).
namespace lift_007AE0A0 {
// @name sub_007AE0A0
// @summary Sets ECX to global mem_00B616B8 and tail-calls ext_006B9D70.


void ext_00714060(void);

extern uint8_t mem_00B5F6C0[];

extern void fn_00714210(void) {
    (void)mem_00B5F6C0;
    ext_00714060();
}
} // namespace lift_007AE0A0
} // namespace lift_00714210

// [0x00714250] sub_00714250 (10 bytes)
namespace lift_00714250 {
// @name sub_00714250
// @summary Auto-lifted identical-shape clone of 0x007AE0A0 (sub_007AE0A0).
namespace lift_007AE0A0 {
// @name sub_007AE0A0
// @summary Sets ECX to global mem_00B616B8 and tail-calls ext_006B9D70.


void ext_00714060(void);

extern uint8_t mem_00B5F7C8[];

extern void fn_00714250(void) {
    (void)mem_00B5F7C8;
    ext_00714060();
}
} // namespace lift_007AE0A0
} // namespace lift_00714250

// [0x007142C0] sub_007142C0 (10 bytes)
namespace lift_007142C0 {
// @name sub_007142C0
// @summary Auto-lifted identical-shape clone of 0x007AE0A0 (sub_007AE0A0).
namespace lift_007AE0A0 {
// @name sub_007AE0A0
// @summary Sets ECX to global mem_00B616B8 and tail-calls ext_006B9D70.


void ext_00714060(void);

extern uint8_t mem_00B5F5C0[];

extern void fn_007142C0(void) {
    (void)mem_00B5F5C0;
    ext_00714060();
}
} // namespace lift_007AE0A0
} // namespace lift_007142C0

// [0x00714300] sub_00714300 (10 bytes)
namespace lift_00714300 {
// @name sub_00714300
// @summary Auto-lifted identical-shape clone of 0x007AE0A0 (sub_007AE0A0).
namespace lift_007AE0A0 {
// @name sub_007AE0A0
// @summary Sets ECX to global mem_00B616B8 and tail-calls ext_006B9D70.


void ext_00714060(void);

extern uint8_t mem_00B5F6F0[];

extern void fn_00714300(void) {
    (void)mem_00B5F6F0;
    ext_00714060();
}
} // namespace lift_007AE0A0
} // namespace lift_00714300

// [0x00714340] sub_00714340 (10 bytes)
namespace lift_00714340 {
// @name sub_00714340
// @summary Auto-lifted identical-shape clone of 0x007AE0A0 (sub_007AE0A0).
namespace lift_007AE0A0 {
// @name sub_007AE0A0
// @summary Sets ECX to global mem_00B616B8 and tail-calls ext_006B9D70.


void ext_00714060(void);

extern uint8_t mem_00B5F680[];

extern void fn_00714340(void) {
    (void)mem_00B5F680;
    ext_00714060();
}
} // namespace lift_007AE0A0
} // namespace lift_00714340

// [0x00714380] sub_00714380 (10 bytes)
namespace lift_00714380 {
// @name sub_00714380
// @summary Auto-lifted identical-shape clone of 0x007AE0A0 (sub_007AE0A0).
namespace lift_007AE0A0 {
// @name sub_007AE0A0
// @summary Sets ECX to global mem_00B616B8 and tail-calls ext_006B9D70.


void ext_00714060(void);

extern uint8_t mem_00B5F638[];

extern void fn_00714380(void) {
    (void)mem_00B5F638;
    ext_00714060();
}
} // namespace lift_007AE0A0
} // namespace lift_00714380

// [0x007143C0] sub_007143C0 (10 bytes)
namespace lift_007143C0 {
// @name sub_007143C0
// @summary Auto-lifted identical-shape clone of 0x007AE0A0 (sub_007AE0A0).
namespace lift_007AE0A0 {
// @name sub_007AE0A0
// @summary Sets ECX to global mem_00B616B8 and tail-calls ext_006B9D70.


void ext_00714060(void);

extern uint8_t mem_00B5F3F8[];

extern void fn_007143C0(void) {
    (void)mem_00B5F3F8;
    ext_00714060();
}
} // namespace lift_007AE0A0
} // namespace lift_007143C0

// [0x00714430] sub_00714430 (10 bytes)
namespace lift_00714430 {
// @name sub_00714430
// @summary Auto-lifted identical-shape clone of 0x007AE0A0 (sub_007AE0A0).
namespace lift_007AE0A0 {
// @name sub_007AE0A0
// @summary Sets ECX to global mem_00B616B8 and tail-calls ext_006B9D70.


void ext_00714060(void);

extern uint8_t mem_00B5F3B0[];

extern void fn_00714430(void) {
    (void)mem_00B5F3B0;
    ext_00714060();
}
} // namespace lift_007AE0A0
} // namespace lift_00714430

// [0x007144A0] sub_007144A0 (10 bytes)
namespace lift_007144A0 {
// @name sub_007144A0
// @summary Auto-lifted identical-shape clone of 0x007AE0A0 (sub_007AE0A0).
namespace lift_007AE0A0 {
// @name sub_007AE0A0
// @summary Sets ECX to global mem_00B616B8 and tail-calls ext_006B9D70.


void ext_00714060(void);

extern uint8_t mem_00B5F550[];

extern void fn_007144A0(void) {
    (void)mem_00B5F550;
    ext_00714060();
}
} // namespace lift_007AE0A0
} // namespace lift_007144A0

// [0x007144E0] sub_007144E0 (10 bytes)
namespace lift_007144E0 {
// @name sub_007144E0
// @summary Auto-lifted identical-shape clone of 0x007AE0A0 (sub_007AE0A0).
namespace lift_007AE0A0 {
// @name sub_007AE0A0
// @summary Sets ECX to global mem_00B616B8 and tail-calls ext_006B9D70.


void ext_00714060(void);

extern uint8_t mem_00B5F4B0[];

extern void fn_007144E0(void) {
    (void)mem_00B5F4B0;
    ext_00714060();
}
} // namespace lift_007AE0A0
} // namespace lift_007144E0

// [0x00714520] sub_00714520 (10 bytes)
namespace lift_00714520 {
// @name sub_00714520
// @summary Auto-lifted identical-shape clone of 0x007AE0A0 (sub_007AE0A0).
namespace lift_007AE0A0 {
// @name sub_007AE0A0
// @summary Sets ECX to global mem_00B616B8 and tail-calls ext_006B9D70.


void ext_00714060(void);

extern uint8_t mem_00B5F840[];

extern void fn_00714520(void) {
    (void)mem_00B5F840;
    ext_00714060();
}
} // namespace lift_007AE0A0
} // namespace lift_00714520

// [0x00714560] sub_00714560 (10 bytes)
namespace lift_00714560 {
// @name sub_00714560
// @summary Auto-lifted identical-shape clone of 0x007AE0A0 (sub_007AE0A0).
namespace lift_007AE0A0 {
// @name sub_007AE0A0
// @summary Sets ECX to global mem_00B616B8 and tail-calls ext_006B9D70.


void ext_00714060(void);

extern uint8_t mem_00B5F7F8[];

extern void fn_00714560(void) {
    (void)mem_00B5F7F8;
    ext_00714060();
}
} // namespace lift_007AE0A0
} // namespace lift_00714560

// [0x007101E0]
namespace lift_007101E0 {
extern uint32_t mem_read32(uint32_t addr);

// @name forwardVtableSlot4
// @summary Tail-calls vtable slot 4 (+0x10) on the subobject at this+0xf4.
// @field Class +0xf4 uint32_t field_0xf4

void __fastcall sub_007101E0(uint32_t ecx, uint32_t edx) {
    (void)edx;
    uint32_t obj = mem_read32(ecx + 0xf4);
    uint32_t vtable = mem_read32(obj);
    uint32_t fn = mem_read32(vtable + 0x10);
    reinterpret_cast<void(__fastcall *)(uint32_t, uint32_t)>(static_cast<uintptr_t>(fn))(obj, edx);
}
} // namespace lift_007101E0

// [0x00715560] sub_00715560 (16 bytes)
namespace lift_00715560 {
// @name sub_00715560
// @summary Auto-lifted identical-shape clone of 0x004F9840 (VMCSModes::DefaultImplementation::vfunc_16).
namespace lift_004F9840 {
// @name VMCSModes::DefaultImplementation::vfunc_16
// @class VMCSModes::DefaultImplementation
// @summary Stores the argument into the field at +0x3c of the object referenced by this->+0x8.
// @field VMCSModes::DefaultImplementation +0x08 void* delegate_0x8
// @field VMCSModes::DefaultImplementation +0x3c uint32_t field_0x3c
void fn_00715560(void* self, uint32_t value) {
    void* target = lift_field<void*>(self, 0x10);
    lift_field<uint32_t>(target, 0x160) = value;
}
} // namespace lift_004F9840
} // namespace lift_00715560

// [0x0071B100] sub_0071B100 (16 bytes)
namespace lift_0071B100 {
// @name sub_0071B100
// @summary Auto-lifted identical-shape clone of 0x004F9840 (VMCSModes::DefaultImplementation::vfunc_16).
namespace lift_004F9840 {
// @name VMCSModes::DefaultImplementation::vfunc_16
// @class VMCSModes::DefaultImplementation
// @summary Stores the argument into the field at +0x3c of the object referenced by this->+0x8.
// @field VMCSModes::DefaultImplementation +0x08 void* delegate_0x8
// @field VMCSModes::DefaultImplementation +0x3c uint32_t field_0x3c
void fn_0071B100(void* self, uint32_t value) {
    void* target = lift_field<void*>(self, 0xC);
    lift_field<uint32_t>(target, 0x1850) = value;
}
} // namespace lift_004F9840
} // namespace lift_0071B100

// [0x0071BFB0] sub_0071BFB0 (16 bytes)
namespace lift_0071BFB0 {
// @name sub_0071BFB0
// @summary Auto-lifted identical-shape clone of 0x004F9840 (VMCSModes::DefaultImplementation::vfunc_16).
namespace lift_004F9840 {
// @name VMCSModes::DefaultImplementation::vfunc_16
// @class VMCSModes::DefaultImplementation
// @summary Stores the argument into the field at +0x3c of the object referenced by this->+0x8.
// @field VMCSModes::DefaultImplementation +0x08 void* delegate_0x8
// @field VMCSModes::DefaultImplementation +0x3c uint32_t field_0x3c
void fn_0071BFB0(void* self, uint32_t value) {
    void* target = lift_field<void*>(self, 0xC);
    lift_field<uint32_t>(target, 0x408) = value;
}
} // namespace lift_004F9840
} // namespace lift_0071BFB0

// [0x0071C350] sub_0071C350 (16 bytes)
namespace lift_0071C350 {
// @name sub_0071C350
// @summary Auto-lifted identical-shape clone of 0x004F9840 (VMCSModes::DefaultImplementation::vfunc_16).
namespace lift_004F9840 {
// @name VMCSModes::DefaultImplementation::vfunc_16
// @class VMCSModes::DefaultImplementation
// @summary Stores the argument into the field at +0x3c of the object referenced by this->+0x8.
// @field VMCSModes::DefaultImplementation +0x08 void* delegate_0x8
// @field VMCSModes::DefaultImplementation +0x3c uint32_t field_0x3c
void fn_0071C350(void* self, uint32_t value) {
    void* target = lift_field<void*>(self, 0xC);
    lift_field<uint32_t>(target, 0xF48) = value;
}
} // namespace lift_004F9840
} // namespace lift_0071C350

// [0x0071C370] sub_0071C370 (16 bytes)
namespace lift_0071C370 {
// @name sub_0071C370
// @summary Auto-lifted identical-shape clone of 0x004F9840 (VMCSModes::DefaultImplementation::vfunc_16).
namespace lift_004F9840 {
// @name VMCSModes::DefaultImplementation::vfunc_16
// @class VMCSModes::DefaultImplementation
// @summary Stores the argument into the field at +0x3c of the object referenced by this->+0x8.
// @field VMCSModes::DefaultImplementation +0x08 void* delegate_0x8
// @field VMCSModes::DefaultImplementation +0x3c uint32_t field_0x3c
void fn_0071C370(void* self, uint32_t value) {
    void* target = lift_field<void*>(self, 0xC);
    lift_field<uint32_t>(target, 0x1498) = value;
}
} // namespace lift_004F9840
} // namespace lift_0071C370

// [0x0071C4B0] sub_0071C4B0 (16 bytes)
namespace lift_0071C4B0 {
// @name sub_0071C4B0
// @summary Auto-lifted identical-shape clone of 0x004F9840 (VMCSModes::DefaultImplementation::vfunc_16).
namespace lift_004F9840 {
// @name VMCSModes::DefaultImplementation::vfunc_16
// @class VMCSModes::DefaultImplementation
// @summary Stores the argument into the field at +0x3c of the object referenced by this->+0x8.
// @field VMCSModes::DefaultImplementation +0x08 void* delegate_0x8
// @field VMCSModes::DefaultImplementation +0x3c uint32_t field_0x3c
void fn_0071C4B0(void* self, uint32_t value) {
    void* target = lift_field<void*>(self, 0xC);
    lift_field<uint32_t>(target, 0x1058) = value;
}
} // namespace lift_004F9840
} // namespace lift_0071C4B0

// [0x0071C5F0] sub_0071C5F0 (16 bytes)
namespace lift_0071C5F0 {
// @name sub_0071C5F0
// @summary Auto-lifted identical-shape clone of 0x004F9840 (VMCSModes::DefaultImplementation::vfunc_16).
namespace lift_004F9840 {
// @name VMCSModes::DefaultImplementation::vfunc_16
// @class VMCSModes::DefaultImplementation
// @summary Stores the argument into the field at +0x3c of the object referenced by this->+0x8.
// @field VMCSModes::DefaultImplementation +0x08 void* delegate_0x8
// @field VMCSModes::DefaultImplementation +0x3c uint32_t field_0x3c
void fn_0071C5F0(void* self, uint32_t value) {
    void* target = lift_field<void*>(self, 0xC);
    lift_field<uint32_t>(target, 0x16B8) = value;
}
} // namespace lift_004F9840
} // namespace lift_0071C5F0

// [0x0071C930] sub_0071C930 (16 bytes)
namespace lift_0071C930 {
// @name sub_0071C930
// @summary Auto-lifted identical-shape clone of 0x004F9840 (VMCSModes::DefaultImplementation::vfunc_16).
namespace lift_004F9840 {
// @name VMCSModes::DefaultImplementation::vfunc_16
// @class VMCSModes::DefaultImplementation
// @summary Stores the argument into the field at +0x3c of the object referenced by this->+0x8.
// @field VMCSModes::DefaultImplementation +0x08 void* delegate_0x8
// @field VMCSModes::DefaultImplementation +0x3c uint32_t field_0x3c
void fn_0071C930(void* self, uint32_t value) {
    void* target = lift_field<void*>(self, 0xC);
    lift_field<uint32_t>(target, 0x1D18) = value;
}
} // namespace lift_004F9840
} // namespace lift_0071C930

// [0x0071C990] sub_0071C990 (16 bytes)
namespace lift_0071C990 {
// @name sub_0071C990
// @summary Auto-lifted identical-shape clone of 0x004F9840 (VMCSModes::DefaultImplementation::vfunc_16).
namespace lift_004F9840 {
// @name VMCSModes::DefaultImplementation::vfunc_16
// @class VMCSModes::DefaultImplementation
// @summary Stores the argument into the field at +0x3c of the object referenced by this->+0x8.
// @field VMCSModes::DefaultImplementation +0x08 void* delegate_0x8
// @field VMCSModes::DefaultImplementation +0x3c uint32_t field_0x3c
void fn_0071C990(void* self, uint32_t value) {
    void* target = lift_field<void*>(self, 0xC);
    lift_field<uint32_t>(target, 0x19E8) = value;
}
} // namespace lift_004F9840
} // namespace lift_0071C990
