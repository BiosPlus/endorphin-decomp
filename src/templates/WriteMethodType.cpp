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

// [0x00604930] ExprParser::WriteMethodType<EffectorBase, bool, &[thunk]: __thiscall EffectorBase::`vcall'{68, {flat}}>::vfunc_41 (34 bytes)
extern "C" void ext_0062A580();

extern "C" __declspec(naked) void __stdcall fn_00604930(void** self, void** a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        mov esi, dword ptr [eax]
        mov eax, dword ptr [esp + 0xc]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [edx + 0xc]
        call eax
        mov ecx, esi
        push eax
        call ext_0062A580
        pop esi
        ret 8
    }
}

// [0x00604BA0] ExprParser::WriteMethodType<EffectorBase, NM::Vector4 const &, &[thunk]: __thiscall EffectorBase::`vcall'{76, {flat}}>::vfunc_41 (34 bytes)
extern "C" void ext_00603680();

extern "C" __declspec(naked) void __stdcall fn_00604BA0(void** self, void** a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        mov esi, dword ptr [eax]
        mov eax, dword ptr [esp + 0xc]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [edx + 0x18]
        call eax
        push eax
        mov ecx, esi
        call ext_00603680
        pop esi
        ret 8
    }
}

// [0x00604C40] ExprParser::WriteMethodType<EffectorBase, NM::Vector4 const &, &[thunk]: __thiscall EffectorBase::`vcall'{80, {flat}}>::vfunc_41 (34 bytes)
extern "C" void ext_006036A0();

extern "C" __declspec(naked) void __stdcall fn_00604C40(void** self, void** a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        mov esi, dword ptr [eax]
        mov eax, dword ptr [esp + 0xc]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [edx + 0x18]
        call eax
        push eax
        mov ecx, esi
        call ext_006036A0
        pop esi
        ret 8
    }
}

// [0x006276F0] ExprParser::WriteMethodType<Sensors::SensorAbsoluteOrientation, int, &public: void __thiscall Sensors::SensorAbsoluteOrientation::setReference(int)>::vfunc_41 (34 bytes)
extern "C" void ext_00627510();

typedef int (__thiscall *VCallFn_006276F0)(void* self, void* a1);
typedef void (__thiscall *CallFn_006276F0)(void* self, int a1);

extern "C" void __stdcall fn_006276F0(void** self, void** a1) {
    void* obj = *self;
    void* sub = a1[1];
    int r = ((VCallFn_006276F0)((*(void***)sub)[2]))(sub, a1);
    ((CallFn_006276F0)ext_00627510)(obj, r);
}

// [0x00649690] ExprParser::WriteMethodType<RelationshipRPROMagnet, bool, {public: void __thiscall RelationshipRPROMagnet::setEnabled(bool), 0}>::vfunc_41 (34 bytes)
extern "C" void ext_00648EA0();

extern "C" __declspec(naked) void __stdcall fn_00649690(void** self, void** a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        mov esi, dword ptr [eax]
        mov eax, dword ptr [esp + 0xc]
        mov ecx, dword ptr [eax + 0x4]
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [edx + 0xc]
        call eax
        mov ecx, esi
        push eax
        call ext_00648EA0
        pop esi
        ret 0x8
    }
}
