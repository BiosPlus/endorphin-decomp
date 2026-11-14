// Decompiled translation unit: src/templates/GenericLoader.cpp

// [0x005AA3F0] GenericLoader<NMData::CharacterData, {public: void __thiscall NMData::CharacterData::loadUserEditableParts(class AdvXMLParser::Element const &), 0}>::vfunc_0 (36 bytes)
extern "C" void __fastcall ext_0065C660(void* self);
extern "C" void ext_006A5C5C(void* p);

extern "C" void* __fastcall fn_005AA3F0(void* self, int edx_unused, int flags) {
    void** p = (void**)self;
    *p = (void*)0x0095EEC8;
    ext_0065C660(self);
    if (flags & 1) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x005AA420] GenericLoader<NMData::CharacterData, {public: void __thiscall NMData::CharacterData::loadNonEditableParts(class AdvXMLParser::Element const &), 0}>::vfunc_0 (36 bytes)
extern "C" void* __fastcall fn_005AA420(void* self, int edx_unused, int flags) {
    void** p = (void**)self;
    *p = (void*)0x0095EEF4;
    ext_0065C660(self);
    if (flags & 1) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x005AA2C0] GenericLoader<NMData::CharacterData, {public: void __thiscall NMData::CharacterData::loadUserEditableParts(class AdvXMLParser::Element const &), 0}>::vfunc_1 (138 bytes)
extern "C" void ext_005A5AD0();
extern "C" void ext_0063F530();

extern "C" void __fastcall fn_005AA2C0(void* self, int edx_unused, int a1) {
    struct Obj { int pad0; int f4; int f8; int fc; };
    Obj* o = (Obj*)self;
    int ecx_v = a1;
    if (o->f8 != 0) {
        int r = ((int (__stdcall*)(int, int, int))ext_0063F530)(o->f8, 0, 1);
        if (r == 0xb53a34 || r == 0xb53b30 || r == 0xb53ab0 || r == 0xb53a70 || r == 0xb53af0)
            r = 0xb53b30;
        ecx_v = r;
    }
    if (o->fc != 0) {
        int r = ((int (__stdcall*)(int, int, int))ext_0063F530)(o->fc, 0, 1);
        if (r == 0xb53a34 || r == 0xb53b30 || r == 0xb53ab0 || r == 0xb53a70 || r == 0xb53af0)
            r = 0xb53b30;
        ecx_v = r;
    }
    ((void (__thiscall*)(void*, int))ext_005A5AD0)((void*)o->f4, ecx_v);
}
