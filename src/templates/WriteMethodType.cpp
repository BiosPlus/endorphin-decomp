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

// [0x005B7B20] ExprParser::WriteMethodType<NMData::MetaBodyData, NM::Vector3 const &, {public: void __thiscall NMData::MetaBodyData::addForce(class NM::Vector3 const &), 0}>::vfunc_41 (34 bytes)
extern "C" void ext_005B7240();

typedef int (__thiscall *VCallFn_005B7B20)(void* self, void* a1);
typedef void (__thiscall *CallFn_005B7B20)(void* self, int a1);

extern "C" void __stdcall fn_005B7B20(void** self, void** a1) {
    void* obj = *self;
    void* sub = a1[1];
    int r = ((VCallFn_005B7B20)((*(void***)sub)[5]))(sub, a1);
    ((CallFn_005B7B20)ext_005B7240)(obj, r);
}

// [0x005B7C40] ExprParser::WriteMethodType<NMData::MetaBodyData, NM::Vector3 const &, {public: void __thiscall NMData::MetaBodyData::addTorque(class NM::Vector3 const &), 0}>::vfunc_41 (34 bytes)
extern "C" void ext_005B72C0();

typedef int (__thiscall *VCallFn_005B7C40)(void* self, void* a1);
typedef void (__thiscall *CallFn_005B7C40)(void* self, int a1);

extern "C" void __stdcall fn_005B7C40(void** self, void** a1) {
    void* obj = *self;
    void* sub = a1[1];
    int r = ((VCallFn_005B7C40)((*(void***)sub)[5]))(sub, a1);
    ((CallFn_005B7C40)ext_005B72C0)(obj, r);
}

// [0x005B7D60] ExprParser::WriteMethodType<NMData::MetaBodyData, NM::Vector3 const &, {public: void __thiscall NMData::MetaBodyData::addImpulse(class NM::Vector3 const &), 0}>::vfunc_41 (34 bytes)
extern "C" void ext_005B7280();

typedef int (__thiscall *VCallFn_005B7D60)(void* self, void* a1);
typedef void (__thiscall *CallFn_005B7D60)(void* self, int a1);

extern "C" void __stdcall fn_005B7D60(void** self, void** a1) {
    void* obj = *self;
    void* sub = a1[1];
    int r = ((VCallFn_005B7D60)((*(void***)sub)[5]))(sub, a1);
    ((CallFn_005B7D60)ext_005B7280)(obj, r);
}

// [0x005C3480] ExprParser::WriteMethodType<NMData::CollisionModelDataBase, NM::Vector3 const &, {protected: void __thiscall NMData::CollisionModelDataBase::addTorque(class NM::Vector3 const &), 0}>::vfunc_41 (34 bytes)
extern "C" void ext_005C30F0();

typedef int (__thiscall *VCallFn_005C3480)(void* self, void* a1);
typedef void (__thiscall *CallFn_005C3480)(void* self, int a1);

extern "C" void __stdcall fn_005C3480(void** self, void** a1) {
    void* obj = *self;
    void* sub = a1[1];
    int r = ((VCallFn_005C3480)((*(void***)sub)[5]))(sub, a1);
    ((CallFn_005C3480)ext_005C30F0)(obj, r);
}
