// Decompiled translation unit: src/templates/WriteMethodType.cpp

extern "C" void ext_005A45A0();

// [0x005A46C0] ExprParser::WriteMethodType<NMData::CharacterData, ValuePtr const &, {public: void __thiscall NMData::CharacterData::setPoseFromFSM(class ValuePtr const &), 0}>::vfunc_41 (19 bytes)
extern "C" __declspec(naked) void __stdcall fn_005A46C0(void* self, void* a1) {
    __asm {
        mov eax, dword ptr [esp + 8]
        mov ecx, dword ptr [esp + 4]
        mov ecx, dword ptr [ecx]
        push eax
        call ext_005A45A0
        ret 8
    }
}

// [0x005B73F0] ExprParser::WriteMethodType<NMData::MetaBodyData, NM::Vector3 const &, {public: void __thiscall NMData::MetaBodyData::applyImpulseViaVelocity(class NM::Vector3 const &), 0}>::vfunc_41 (34 bytes)
extern "C" void ext_005B6780();

typedef int (__thiscall *VCallFn_005B73F0)(void* self, void* a1);
typedef void (__thiscall *CallFn_005B73F0)(void* self, int a1);

extern "C" void __stdcall fn_005B73F0(void** self, void** a1) {
    void* obj = *self;
    void* sub = a1[1];
    int r = ((VCallFn_005B73F0)((*(void***)sub)[5]))(sub, a1);
    ((CallFn_005B73F0)ext_005B6780)(obj, r);
}
