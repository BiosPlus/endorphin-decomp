// Lifted C++ translation unit: lifted/AdvXMLParser/auto_tiny.cpp
#include "lift_compat.h"
extern "C" void __fastcall ext_0063E0F0(void* self);
extern "C" void __cdecl ext_006A5C5C(void* ptr);
extern "C" void __fastcall ext_0063E970(void* self);
extern "C" void __fastcall ext_0063E9E0(void* self);
extern "C" void __fastcall ext_0063F3B0(void* self);
extern "C" void __fastcall ext_0063F750(void* self);
extern "C" void __fastcall ext_0063F9C0(void* self);
extern "C" void __fastcall ext_00870E30(void* self);

// [0x0063EA30] AdvXMLParser::CharRef::vfunc_0 (30 bytes)
// @name AdvXMLParser::CharRef::vfunc_0
// @class AdvXMLParser::CharRef
// @summary MSVC scalar deleting destructor: calls sub_0063E0F0 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_0063EA30(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_0063E0F0(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x0063EB30] AdvXMLParser::Exception::vfunc_0 (30 bytes)
// @name AdvXMLParser::Exception::vfunc_0
// @class AdvXMLParser::Exception
// @summary MSVC scalar deleting destructor: calls sub_0063E970 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_0063EB30(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_0063E970(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x0063EB50] AdvXMLParser::CData::vfunc_0 (30 bytes)
// @name AdvXMLParser::CData::vfunc_0
// @class AdvXMLParser::CData
// @summary MSVC scalar deleting destructor: calls sub_0063E9E0 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_0063EB50(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_0063E9E0(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x0063F8B0] AdvXMLParser::Attribute::vfunc_0 (30 bytes)
// @name AdvXMLParser::Attribute::vfunc_0
// @class AdvXMLParser::Attribute
// @summary MSVC scalar deleting destructor: calls sub_0063F3B0 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_0063F8B0(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_0063F3B0(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x0063FA90] AdvXMLParser::Document::vfunc_0 (30 bytes)
// @name AdvXMLParser::Document::vfunc_0
// @class AdvXMLParser::Document
// @summary MSVC scalar deleting destructor: calls sub_0063F750 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_0063FA90(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_0063F750(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x0063FCC0] AdvXMLParser::Element::vfunc_0 (30 bytes)
// @name AdvXMLParser::Element::vfunc_0
// @class AdvXMLParser::Element
// @summary MSVC scalar deleting destructor: calls sub_0063F9C0 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_0063FCC0(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_0063F9C0(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x00871870] AdvXMLParser::Parser::vfunc_0 (30 bytes)
// @name AdvXMLParser::Parser::vfunc_0
// @class AdvXMLParser::Parser
// @summary MSVC scalar deleting destructor: calls sub_00870E30 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_00871870(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_00870E30(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}
