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
