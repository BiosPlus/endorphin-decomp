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

// [0x00649D50] ExprParser::WriteMethodType<RelationshipRPROMagnet, bool, {public: void __thiscall RelationshipRPROMagnet::setRotationMode(bool), 0}>::vfunc_41 (34 bytes)
extern "C" void ext_00648E30();

extern "C" __declspec(naked) void __stdcall fn_00649D50(void** self, void** a1) {
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
        call ext_00648E30
        pop esi
        ret 0x8
    }
}

// [0x0064F790] ExprParser::WriteMethodType<SkeletalJoint, NM::Vector3 const &, {public: void __thiscall SkeletalJoint::setDriveAngularVel(class NM::Vector3 const &), 0}>::vfunc_41 (34 bytes)
extern "C" void ext_0064DDE0();

extern "C" __declspec(naked) void __stdcall fn_0064F790(void** self, void** a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        mov esi, dword ptr [eax]
        mov eax, dword ptr [esp + 0xc]
        mov ecx, dword ptr [eax + 0x4]
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [edx + 0x14]
        call eax
        push eax
        mov ecx, esi
        call ext_0064DDE0
        pop esi
        ret 0x8
    }
}

// [0x0064F840] ExprParser::WriteMethodType<SkeletalJoint, NM::Vector4 const &, {public: void __thiscall SkeletalJoint::setDriveQuaternion(class NM::Vector4 const &), 0}>::vfunc_41 (34 bytes)
extern "C" void ext_00402040();

extern "C" __declspec(naked) void __stdcall fn_0064F840(void** self, void** a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        mov esi, dword ptr [eax]
        mov eax, dword ptr [esp + 0xc]
        mov ecx, dword ptr [eax + 0x4]
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [edx + 0x18]
        call eax
        push eax
        mov ecx, esi
        call ext_00402040
        pop esi
        ret 0x8
    }
}

// [0x00650D80] ExprParser::WriteMethodType<SkeletalJoint, int, {[thunk]: __thiscall SkeletalJoint::`vcall'{84, {flat}}, 0}>::vfunc_41 (34 bytes)
extern "C" void ext_0064F900();

extern "C" __declspec(naked) void __fastcall fn_00650D80(void* self, void* edx_unused, void** a1, void** a2) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        mov esi, dword ptr [eax]
        mov eax, dword ptr [esp + 0xc]
        mov ecx, dword ptr [eax + 0x4]
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [edx + 0x8]
        call eax
        push eax
        mov ecx, esi
        call ext_0064F900
        pop esi
        ret 0x8
    }
}

// [0x00650E20] ExprParser::WriteMethodType<SkeletalJoint, int, {[thunk]: __thiscall SkeletalJoint::`vcall'{80, {flat}}, 0}>::vfunc_41 (34 bytes)
extern "C" void ext_006036A0();

extern "C" void __fastcall fn_00650E20(void* self, void* edx_unused, void** a1, void** a2) {
    void* obj = *a1;
    void** p = (void**)a2[1];
    typedef int (__thiscall *VFn)(void*, void**);
    typedef void (__thiscall *ExtFn)(void*, int);
    int r = ((VFn)(*(void***)p)[2])(p, a2);
    ((ExtFn)ext_006036A0)(obj, r);
}

// [0x006513E0] ExprParser::WriteMethodType<SkeletalJoint, NM::Vector3 const &, {[thunk]: __thiscall SkeletalJoint::`vcall'{132, {flat}}, 0}>::vfunc_41 (34 bytes)
extern "C" void ext_0064F920();

extern "C" __declspec(naked) void __fastcall fn_006513E0(void* self, void* edx_unused, void** a1, void** a2) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        mov esi, dword ptr [eax]
        mov eax, dword ptr [esp + 0xc]
        mov ecx, dword ptr [eax + 0x4]
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [edx + 0x14]
        call eax
        push eax
        mov ecx, esi
        call ext_0064F920
        pop esi
        ret 0x8
    }
}

// [0x0068BC60] ExprParser::WriteMethodType<Randomizer, int, {public: void __thiscall Randomizer::setSeed(int), 0}>::vfunc_41 (34 bytes)
extern "C" void ext_006B0C30();

extern "C" __declspec(naked) void __fastcall fn_0068BC60(void* self, void* edx_unused, void** a1, void** a2) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        mov esi, dword ptr [eax]
        mov eax, dword ptr [esp + 0xc]
        mov ecx, dword ptr [eax + 0x4]
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [edx + 0x8]
        call eax
        push eax
        mov ecx, esi
        call ext_006B0C30
        pop esi
        ret 0x8
    }
}

// [0x00487420] ExprParser::WriteMethodType<NMData::DesiredPoseEventData, float, {public: void __thiscall NMData::DesiredPoseEventData::setEntryBlendPeriodFromFSM(float), 0}>::vfunc_41 (37 bytes)
extern "C" void ext_00486C10();

extern "C" __declspec(naked) void __stdcall fn_00487420(void* self, void* a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        mov esi, dword ptr [eax]
        mov eax, dword ptr [esp + 0xc]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [edx + 4]
        call eax
        push ecx
        mov ecx, esi
        fstp dword ptr [esp]
        call ext_00486C10
        pop esi
        ret 8
    }
}

// [0x0048AD50] ExprParser::WriteMethodType<NMData::DesiredPoseEventData, float, {public: void __thiscall NMData::DesiredPoseEventData::fireWithStrength(float), 0}>::vfunc_41 (37 bytes)
extern "C" void ext_0048ABD0();

extern "C" __declspec(naked) void __stdcall fn_0048AD50(void* self, void* a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        mov esi, dword ptr [eax]
        mov eax, dword ptr [esp + 0xc]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [edx + 4]
        call eax
        push ecx
        mov ecx, esi
        fstp dword ptr [esp]
        call ext_0048ABD0
        pop esi
        ret 8
    }
}

// [0x004FE0C0] ExprParser::WriteMethodType<EvolveEngine, float, {private: void __thiscall EvolveEngine::stopWithFitness(float), 0}>::vfunc_41 (37 bytes)
extern "C" void ext_004FDC80();
extern "C" __declspec(naked) void __fastcall fn_004FE0C0(void* self, void* edx_unused, void** a1, void** a2) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        mov esi, dword ptr [eax]
        mov eax, dword ptr [esp + 0xc]
        mov ecx, dword ptr [eax + 0x4]
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [edx + 0x4]
        call eax
        push ecx
        mov ecx, esi
        fstp dword ptr [esp]
        call ext_004FDC80
        pop esi
        ret 0x8
    }
}

// [0x00594470] ExprParser::WriteMethodType<World, float, {private: void __thiscall World::setGravity(float), 0}>::vfunc_41 (37 bytes)
extern "C" void ext_00594080();

extern "C" __declspec(naked) void __stdcall fn_00594470(void* self, void* a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        mov esi, dword ptr [eax]
        mov eax, dword ptr [esp + 0xc]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [edx + 4]
        call eax
        push ecx
        mov ecx, esi
        fstp dword ptr [esp]
        call ext_00594080
        pop esi
        ret 8
    }
}

// [0x00594520] ExprParser::WriteMethodType<World, float, {private: void __thiscall World::setFriction(float), 0}>::vfunc_41 (37 bytes)
extern "C" void ext_005940A0();

extern "C" __declspec(naked) void __stdcall fn_00594520(void* self, void* a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        mov esi, dword ptr [eax]
        mov eax, dword ptr [esp + 0xc]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [edx + 4]
        call eax
        push ecx
        mov ecx, esi
        fstp dword ptr [esp]
        call ext_005940A0
        pop esi
        ret 8
    }
}

extern "C" void ext_0064F8E0();

// [0x005F35D0] ExprParser::WriteMethodType<EffectorGroup, float, &[thunk]: __thiscall EffectorGroup::`vcall'{92, {flat}}>::vfunc_41 (37 bytes)
extern "C" __declspec(naked) void __fastcall fn_005F35D0(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        mov esi, dword ptr [eax]
        mov eax, dword ptr [esp + 0xc]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [edx + 4]
        call eax
        push ecx
        mov ecx, esi
        fstp dword ptr [esp]
        call ext_0064F8E0
        pop esi
        ret 8
    }
}

extern "C" void ext_0064F900();

// [0x005F3680] ExprParser::WriteMethodType<EffectorGroup, float, &[thunk]: __thiscall EffectorGroup::`vcall'{84, {flat}}>::vfunc_41 (37 bytes)
extern "C" __declspec(naked) void __fastcall fn_005F3680(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        mov esi, dword ptr [eax]
        mov eax, dword ptr [esp + 0xc]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [edx + 4]
        call eax
        push ecx
        mov ecx, esi
        fstp dword ptr [esp]
        call ext_0064F900
        pop esi
        ret 8
    }
}

// [0x00605360] ExprParser::WriteMethodType<Effector, float, &[thunk]: __thiscall EffectorBase::`vcall'{112, {flat}}>::vfunc_41 (37 bytes)
extern "C" void ext_006036B0();

extern "C" __declspec(naked) void __stdcall fn_00605360(void** self, void** a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        mov esi, dword ptr [eax]
        mov eax, dword ptr [esp + 0xc]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [edx + 4]
        call eax
        push ecx
        mov ecx, esi
        fstp dword ptr [esp]
        call ext_006036B0
        pop esi
        ret 8
    }
}

// [0x00605390] ExprParser::WriteMethodType<Effector, float, &[thunk]: __thiscall Effector::`vcall'{100, {flat}}>::vfunc_41 (37 bytes)
extern "C" void ext_006036C0();

extern "C" __declspec(naked) void __stdcall fn_00605390(void* self, void* a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        mov esi, dword ptr [eax]
        mov eax, dword ptr [esp + 0xc]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [edx + 4]
        call eax
        push ecx
        mov ecx, esi
        fstp dword ptr [esp]
        call ext_006036C0
        pop esi
        ret 8
    }
}

// [0x00629F40] ExprParser::WriteMethodType<Sensors::SensorRelativeTime, float, &public: void __thiscall Sensors::SensorRelativeTime::resetTime(float)>::vfunc_41 (37 bytes)
extern "C" void ext_00629EB0();

extern "C" __declspec(naked) void __stdcall fn_00629F40(void* self, void* a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        mov esi, dword ptr [eax]
        mov eax, dword ptr [esp + 0xc]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [edx + 4]
        call eax
        push ecx
        mov ecx, esi
        fstp dword ptr [esp]
        call ext_00629EB0
        pop esi
        ret 8
    }
}

// [0x00629FF0] ExprParser::WriteMethodType<Sensors::SensorMetaBodyRelativeTime, float, &public: void __thiscall Sensors::SensorMetaBodyRelativeTime::resetTime(float)>::vfunc_41 (37 bytes)
extern "C" void ext_00629F10();

extern "C" __declspec(naked) void __stdcall fn_00629FF0(void* self, void* a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        mov esi, dword ptr [eax]
        mov eax, dword ptr [esp + 0xc]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [edx + 4]
        call eax
        push ecx
        mov ecx, esi
        fstp dword ptr [esp]
        call ext_00629F10
        pop esi
        ret 8
    }
}

// [0x006491D0] ExprParser::WriteMethodType<RelationshipRPROMagnet, float, {public: void __thiscall RelationshipRPROMagnet::setCachedDesiredPositionX(float), 0}>::vfunc_41 (37 bytes)
extern "C" void ext_00648E40();

extern "C" __declspec(naked) void __stdcall fn_006491D0(void* a, void* b) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        mov esi, dword ptr [eax]
        mov eax, dword ptr [esp + 0xc]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [edx + 4]
        call eax
        push ecx
        mov ecx, esi
        fstp dword ptr [esp]
        call ext_00648E40
        pop esi
        ret 8
    }
}

// [0x00649280] ExprParser::WriteMethodType<RelationshipRPROMagnet, float, {public: void __thiscall RelationshipRPROMagnet::setCachedDesiredPositionY(float), 0}>::vfunc_41 (37 bytes)
extern "C" void ext_00648E50();

extern "C" __declspec(naked) void __stdcall fn_00649280(void* a, void* b) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        mov esi, dword ptr [eax]
        mov eax, dword ptr [esp + 0xc]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [edx + 4]
        call eax
        push ecx
        mov ecx, esi
        fstp dword ptr [esp]
        call ext_00648E50
        pop esi
        ret 8
    }
}

// [0x00649330] ExprParser::WriteMethodType<RelationshipRPROMagnet, float, {public: void __thiscall RelationshipRPROMagnet::setCachedDesiredPositionZ(float), 0}>::vfunc_41 (37 bytes)
extern "C" void ext_00648E60();

extern "C" __declspec(naked) void __stdcall fn_00649330(void** self, void** a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        mov esi, dword ptr [eax]
        mov eax, dword ptr [esp + 0xc]
        mov ecx, dword ptr [eax + 0x4]
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [edx + 0x4]
        call eax
        push ecx
        mov ecx, esi
        fstp dword ptr [esp]
        call ext_00648E60
        pop esi
        ret 0x8
    }
}

// [0x006493E0] ExprParser::WriteMethodType<RelationshipRPROMagnet, float, {public: void __thiscall RelationshipRPROMagnet::setCachedDesiredOrientationAlpha(float), 0}>::vfunc_41 (37 bytes)
extern "C" void ext_00648E70();

extern "C" __declspec(naked) void __stdcall fn_006493E0(void** self, void** a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        mov esi, dword ptr [eax]
        mov eax, dword ptr [esp + 0xc]
        mov ecx, dword ptr [eax + 0x4]
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [edx + 0x4]
        call eax
        push ecx
        mov ecx, esi
        fstp dword ptr [esp]
        call ext_00648E70
        pop esi
        ret 0x8
    }
}

// [0x00649490] ExprParser::WriteMethodType<RelationshipRPROMagnet, float, {public: void __thiscall RelationshipRPROMagnet::setCachedDesiredOrientationBeta(float), 0}>::vfunc_41 (37 bytes)
extern "C" void ext_00648E80();

extern "C" __declspec(naked) void __fastcall fn_00649490(void* self, int edx_unused, void** a, void** b) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        mov esi, dword ptr [eax]
        mov eax, dword ptr [esp + 0xc]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [edx + 4]
        call eax
        push ecx
        mov ecx, esi
        fstp dword ptr [esp]
        call ext_00648E80
        pop esi
        ret 8
    }
}

// [0x00649540] ExprParser::WriteMethodType<RelationshipRPROMagnet, float, {public: void __thiscall RelationshipRPROMagnet::setCachedDesiredOrientationGamma(float), 0}>::vfunc_41 (37 bytes)
extern "C" void ext_00648E90();

extern "C" __declspec(naked) void __fastcall fn_00649540(void* self, int edx_unused, void** a, void** b) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        mov esi, dword ptr [eax]
        mov eax, dword ptr [esp + 0xc]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [edx + 4]
        call eax
        push ecx
        mov ecx, esi
        fstp dword ptr [esp]
        call ext_00648E90
        pop esi
        ret 8
    }
}

// [0x00649B40] ExprParser::WriteMethodType<RelationshipRPROMagnet, float, {public: void __thiscall RelationshipRPROMagnet::setRotationAxisX(float), 0}>::vfunc_41 (37 bytes)
extern "C" void ext_00648E00();

extern "C" __declspec(naked) void __fastcall fn_00649B40(void* self, int edx_unused, void** a, void** b) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        mov esi, dword ptr [eax]
        mov eax, dword ptr [esp + 0xc]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [edx + 4]
        call eax
        push ecx
        mov ecx, esi
        fstp dword ptr [esp]
        call ext_00648E00
        pop esi
        ret 8
    }
}

// [0x00649BF0] ExprParser::WriteMethodType<RelationshipRPROMagnet, float, {public: void __thiscall RelationshipRPROMagnet::setRotationAxisY(float), 0}>::vfunc_41 (37 bytes)
extern "C" void ext_00648E10();

extern "C" __declspec(naked) void __fastcall fn_00649BF0(void* self, int edx_unused, void** a, void** b) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        mov esi, dword ptr [eax]
        mov eax, dword ptr [esp + 0xc]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [edx + 4]
        call eax
        push ecx
        mov ecx, esi
        fstp dword ptr [esp]
        call ext_00648E10
        pop esi
        ret 8
    }
}

// [0x00649CA0] ExprParser::WriteMethodType<RelationshipRPROMagnet, float, {public: void __thiscall RelationshipRPROMagnet::setRotationAxisZ(float), 0}>::vfunc_41 (37 bytes)
extern "C" void ext_00648E20();

extern "C" __declspec(naked) void __fastcall fn_00649CA0(void* self, int edx_unused, void** a, void** b) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        mov esi, dword ptr [eax]
        mov eax, dword ptr [esp + 0xc]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [edx + 4]
        call eax
        push ecx
        mov ecx, esi
        fstp dword ptr [esp]
        call ext_00648E20
        pop esi
        ret 8
    }
}

extern "C" void ext_0064C950();

// [0x0064CA50] ExprParser::WriteMethodType<RelationshipRPROMagnet, float, {public: void __thiscall RelationshipRPROMagnet::rotateAroundAxis(float), 0}>::vfunc_41 (37 bytes)
extern "C" __declspec(naked) void __stdcall fn_0064CA50(void* self, void* a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        mov esi, dword ptr [eax]
        mov eax, dword ptr [esp + 0Ch]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [edx + 4]
        call eax
        push ecx
        mov ecx, esi
        fstp dword ptr [esp]
        call ext_0064C950
        pop esi
        ret 8
    }
}

extern "C" void ext_0064CB00();

// [0x0064CB60] ExprParser::WriteMethodType<RelationshipRPROMagnet, float, {public: void __thiscall RelationshipRPROMagnet::rotateAroundLocalAxis(float), 0}>::vfunc_41 (37 bytes)
extern "C" __declspec(naked) void __stdcall fn_0064CB60(void* self, void* a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        mov esi, dword ptr [eax]
        mov eax, dword ptr [esp + 0Ch]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [edx + 4]
        call eax
        push ecx
        mov ecx, esi
        fstp dword ptr [esp]
        call ext_0064CB00
        pop esi
        ret 8
    }
}

// [0x0064EB20] ExprParser::WriteMethodType<SkeletalJoint, float, {public: void __thiscall SkeletalJoint::setDesiredTwist(float), 0}>::vfunc_41 (37 bytes)
extern "C" void ext_0064DE80();

extern "C" __declspec(naked) void __stdcall fn_0064EB20(void* self, void* a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        mov esi, dword ptr [eax]
        mov eax, dword ptr [esp + 0xc]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [edx + 4]
        call eax
        push ecx
        mov ecx, esi
        fstp dword ptr [esp]
        call ext_0064DE80
        pop esi
        ret 8
    }
}

// [0x0064EBD0] ExprParser::WriteMethodType<SkeletalJoint, float, {public: void __thiscall SkeletalJoint::setDesiredSwing1(float), 0}>::vfunc_41 (37 bytes)
extern "C" void ext_0064DEA0();

extern "C" __declspec(naked) void __stdcall fn_0064EBD0(void* self, void* a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        mov esi, dword ptr [eax]
        mov eax, dword ptr [esp + 0xc]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [edx + 4]
        call eax
        push ecx
        mov ecx, esi
        fstp dword ptr [esp]
        call ext_0064DEA0
        pop esi
        ret 8
    }
}

// [0x0064EC80] ExprParser::WriteMethodType<SkeletalJoint, float, {public: void __thiscall SkeletalJoint::setDesiredSwing2(float), 0}>::vfunc_41 (37 bytes)
extern "C" void ext_0064DEC0();

extern "C" __declspec(naked) void __stdcall fn_0064EC80(void* self, void* a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        mov esi, dword ptr [eax]
        mov eax, dword ptr [esp + 0xc]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [edx + 4]
        call eax
        push ecx
        mov ecx, esi
        fstp dword ptr [esp]
        call ext_0064DEC0
        pop esi
        ret 8
    }
}

// [0x0064EDD0] ExprParser::WriteMethodType<SkeletalJoint, float, {public: void __thiscall SkeletalJoint::setHardLimitRadius(float), 0}>::vfunc_41 (37 bytes)
extern "C" void ext_0064DC20();

extern "C" __declspec(naked) void __stdcall fn_0064EDD0(void* self, void* a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        mov esi, dword ptr [eax]
        mov eax, dword ptr [esp + 0xc]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [edx + 4]
        call eax
        push ecx
        mov ecx, esi
        fstp dword ptr [esp]
        call ext_0064DC20
        pop esi
        ret 8
    }
}

extern "C" void ext_00649050();

// [0x00649120] ExprParser::WriteMethodType<RelationshipRPROMagnet, float, {public: void __thiscall RelationshipRPROMagnet::setOrientationStrength(float), 0}>::vfunc_41 (37 bytes)
extern "C" __declspec(naked) void __fastcall fn_00649120(void* self, int edx_unused, void** a1, void** a2) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        mov esi, dword ptr [eax]
        mov eax, dword ptr [esp + 0xc]
        mov ecx, dword ptr [eax + 0x4]
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [edx + 0x4]
        call eax
        push ecx
        mov ecx, esi
        fstp dword ptr [esp]
        call ext_00649050
        pop esi
        ret 0x8
    }
}

// [0x0064EE80] ExprParser::WriteMethodType<SkeletalJoint, float, {public: void __thiscall SkeletalJoint::setHardLimitTwistAngle(float), 0}>::vfunc_41 (37 bytes)
extern "C" void ext_0064DC40();

extern "C" __declspec(naked) void __stdcall fn_0064EE80(void* self, void* a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        mov esi, dword ptr [eax]
        mov eax, dword ptr [esp + 0xc]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [edx + 4]
        call eax
        push ecx
        mov ecx, esi
        fstp dword ptr [esp]
        call ext_0064DC40
        pop esi
        ret 8
    }
}

// [0x0064EF30] ExprParser::WriteMethodType<SkeletalJoint, float, {public: void __thiscall SkeletalJoint::setHardLimitSwingAngle1(float), 0}>::vfunc_41 (37 bytes)
extern "C" void ext_0064DC60();

extern "C" __declspec(naked) void __fastcall fn_0064EF30(void* self, void* edx_unused, void** a1, void** a2) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        mov esi, dword ptr [eax]
        mov eax, dword ptr [esp + 0xc]
        mov ecx, dword ptr [eax + 0x4]
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [edx + 0x4]
        call eax
        push ecx
        mov ecx, esi
        fstp dword ptr [esp]
        call ext_0064DC60
        pop esi
        ret 0x8
    }
}

// [0x0064EFE0] ExprParser::WriteMethodType<SkeletalJoint, float, {public: void __thiscall SkeletalJoint::setHardLimitSwingAngle2(float), 0}>::vfunc_41 (37 bytes)
extern "C" void ext_0064DC80();

extern "C" __declspec(naked) void __fastcall fn_0064EFE0(void* self, void* edx_unused, void** a1, void** a2) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        mov esi, dword ptr [eax]
        mov eax, dword ptr [esp + 0xc]
        mov ecx, dword ptr [eax + 0x4]
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [edx + 0x4]
        call eax
        push ecx
        mov ecx, esi
        fstp dword ptr [esp]
        call ext_0064DC80
        pop esi
        ret 0x8
    }
}

// [0x0064F090] ExprParser::WriteMethodType<SkeletalJoint, float, {public: void __thiscall SkeletalJoint::setSoftLimitRadius(float), 0}>::vfunc_41 (37 bytes)
extern "C" void ext_0064DCA0();

extern "C" __declspec(naked) void __fastcall fn_0064F090(void* self, void* edx_unused, void** a1, void** a2) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        mov esi, dword ptr [eax]
        mov eax, dword ptr [esp + 0xc]
        mov ecx, dword ptr [eax + 0x4]
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [edx + 0x4]
        call eax
        push ecx
        mov ecx, esi
        fstp dword ptr [esp]
        call ext_0064DCA0
        pop esi
        ret 0x8
    }
}

// [0x0064F140] ExprParser::WriteMethodType<SkeletalJoint, float, {public: void __thiscall SkeletalJoint::setSoftLimitTwistAngle(float), 0}>::vfunc_41 (37 bytes)
extern "C" void ext_0064DCC0();

extern "C" __declspec(naked) void __fastcall fn_0064F140(void* self, void* edx_unused, void** a1, void** a2) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        mov esi, dword ptr [eax]
        mov eax, dword ptr [esp + 0xc]
        mov ecx, dword ptr [eax + 0x4]
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [edx + 0x4]
        call eax
        push ecx
        mov ecx, esi
        fstp dword ptr [esp]
        call ext_0064DCC0
        pop esi
        ret 0x8
    }
}

// [0x0064F210] ExprParser::WriteMethodType<SkeletalJoint, float, {public: void __thiscall SkeletalJoint::setSoftLimitSwingAngle1(float), 0}>::vfunc_41 (37 bytes)
extern "C" void ext_0064DCE0();

extern "C" __declspec(naked) void __fastcall fn_0064F210(void* self, void* edx_unused, void** a1, void** a2) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        mov esi, dword ptr [eax]
        mov eax, dword ptr [esp + 0xc]
        mov ecx, dword ptr [eax + 0x4]
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [edx + 0x4]
        call eax
        push ecx
        mov ecx, esi
        fstp dword ptr [esp]
        call ext_0064DCE0
        pop esi
        ret 0x8
    }
}

// [0x0064F2C0] ExprParser::WriteMethodType<SkeletalJoint, float, {public: void __thiscall SkeletalJoint::setSoftLimitSwingAngle2(float), 0}>::vfunc_41 (37 bytes)
extern "C" void ext_0064DD00();

extern "C" __declspec(naked) void __fastcall fn_0064F2C0(void* self, void* edx_unused, void** a1, void** a2) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        mov esi, dword ptr [eax]
        mov eax, dword ptr [esp + 0xc]
        mov ecx, dword ptr [eax + 0x4]
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [edx + 0x4]
        call eax
        push ecx
        mov ecx, esi
        fstp dword ptr [esp]
        call ext_0064DD00
        pop esi
        ret 0x8
    }
}

// [0x0064F370] ExprParser::WriteMethodType<SkeletalJoint, float, {public: void __thiscall SkeletalJoint::setSoftLimitRadialStiffness(float), 0}>::vfunc_41 (37 bytes)
extern "C" void ext_0064DD20();

extern "C" __declspec(naked) void __fastcall fn_0064F370(void* self, int edx_unused, void** a0, void** a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        mov esi, dword ptr [eax]
        mov eax, dword ptr [esp + 0xc]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [edx + 4]
        call eax
        push ecx
        mov ecx, esi
        fstp dword ptr [esp]
        call ext_0064DD20
        pop esi
        ret 8
    }
}

// [0x0064F420] ExprParser::WriteMethodType<SkeletalJoint, float, {public: void __thiscall SkeletalJoint::setSoftLimitTwistStiffness(float), 0}>::vfunc_41 (37 bytes)
extern "C" void ext_0064DD40();

extern "C" __declspec(naked) void __fastcall fn_0064F420(void* self, int edx_unused, void** a0, void** a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        mov esi, dword ptr [eax]
        mov eax, dword ptr [esp + 0xc]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [edx + 4]
        call eax
        push ecx
        mov ecx, esi
        fstp dword ptr [esp]
        call ext_0064DD40
        pop esi
        ret 8
    }
}

// [0x0064F4D0] ExprParser::WriteMethodType<SkeletalJoint, float, {public: void __thiscall SkeletalJoint::setSoftLimitSwingStiffness(float), 0}>::vfunc_41 (37 bytes)
extern "C" void ext_0064DD60();

extern "C" __declspec(naked) void __fastcall fn_0064F4D0(void* self, int edx_unused, void** a0, void** a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        mov esi, dword ptr [eax]
        mov eax, dword ptr [esp + 0xc]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [edx + 4]
        call eax
        push ecx
        mov ecx, esi
        fstp dword ptr [esp]
        call ext_0064DD60
        pop esi
        ret 8
    }
}

// [0x0064F580] ExprParser::WriteMethodType<SkeletalJoint, float, {public: void __thiscall SkeletalJoint::setSoftLimitRadialDamping(float), 0}>::vfunc_41 (37 bytes)
extern "C" void ext_0064DD80();

extern "C" __declspec(naked) void __fastcall fn_0064F580(void* self, int edx_unused, void** a0, void** a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        mov esi, dword ptr [eax]
        mov eax, dword ptr [esp + 0xc]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [edx + 4]
        call eax
        push ecx
        mov ecx, esi
        fstp dword ptr [esp]
        call ext_0064DD80
        pop esi
        ret 8
    }
}

// [0x0064F630] ExprParser::WriteMethodType<SkeletalJoint, float, {public: void __thiscall SkeletalJoint::setSoftLimitTwistDamping(float), 0}>::vfunc_41 (37 bytes)
extern "C" void ext_0064DDA0();

extern "C" __declspec(naked) void __fastcall fn_0064F630(void* self, int edx_unused, void** a0, void** a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        mov esi, dword ptr [eax]
        mov eax, dword ptr [esp + 0xc]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [edx + 4]
        call eax
        push ecx
        mov ecx, esi
        fstp dword ptr [esp]
        call ext_0064DDA0
        pop esi
        ret 8
    }
}

// [0x0064F6E0] ExprParser::WriteMethodType<SkeletalJoint, float, {public: void __thiscall SkeletalJoint::setSoftLimitSwingDamping(float), 0}>::vfunc_41 (37 bytes)
extern "C" void ext_0064DDC0();

extern "C" __declspec(naked) void __fastcall fn_0064F6E0(void* self, int edx_unused, void** a0, void** a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        mov esi, dword ptr [eax]
        mov eax, dword ptr [esp + 0xc]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [edx + 4]
        call eax
        push ecx
        mov ecx, esi
        fstp dword ptr [esp]
        call ext_0064DDC0
        pop esi
        ret 8
    }
}

// [0x00650EC0] ExprParser::WriteMethodType<EffectorGroup, float, &[thunk]: __thiscall EffectorGroup::`vcall'{88, {flat}}>::vfunc_41 (37 bytes)
extern "C" void ext_005F35C0();

extern "C" void __fastcall fn_00650EC0(void* self, void* edx_unused, void** a1, void** a2) {
    void* obj = *a1;
    void** p = (void**)a2[1];
    typedef float (__thiscall *VFn)(void*, void**);
    typedef void (__thiscall *ExtFn)(void*, float);
    ((ExtFn)ext_005F35C0)(obj, ((VFn)(*(void***)p)[1])(p, a2));
}

// [0x006510F0] ExprParser::WriteMethodType<SkeletalJoint, float, {[thunk]: __thiscall SkeletalJoint::`vcall'{116, {flat}}, 0}>::vfunc_41 (37 bytes)
extern "C" void ext_0064F910();

extern "C" __declspec(naked) void __stdcall fn_006510F0(void* x, void* y) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        mov esi, dword ptr [eax]
        mov eax, dword ptr [esp + 0xc]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [edx + 4]
        call eax
        push ecx
        mov ecx, esi
        fstp dword ptr [esp]
        call ext_0064F910
        pop esi
        ret 8
    }
}

// [0x006511A0] ExprParser::WriteMethodType<SkeletalJoint, float, {[thunk]: __thiscall SkeletalJoint::`vcall'{104, {flat}}, 0}>::vfunc_41 (37 bytes)
extern "C" void ext_0064F930();

extern "C" __declspec(naked) void __stdcall fn_006511A0(void* x, void* y) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        mov esi, dword ptr [eax]
        mov eax, dword ptr [esp + 0xc]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [edx + 4]
        call eax
        push ecx
        mov ecx, esi
        fstp dword ptr [esp]
        call ext_0064F930
        pop esi
        ret 8
    }
}

// [0x00651250] ExprParser::WriteMethodType<EffectorGroup, float, &[thunk]: __thiscall EffectorGroup::`vcall'{96, {flat}}>::vfunc_41 (37 bytes)
extern "C" void ext_0064F8F0();

extern "C" __declspec(naked) void __stdcall fn_00651250(void** self, void** a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        mov esi, dword ptr [eax]
        mov eax, dword ptr [esp + 0xc]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [edx + 4]
        call eax
        push ecx
        mov ecx, esi
        fstp dword ptr [esp]
        call ext_0064F8F0
        pop esi
        ret 8
    }
}

extern "C" void ext_0064F940();

// [0x00651280] ExprParser::WriteMethodType<EffectorBase, float, &[thunk]: __thiscall EffectorBase::`vcall'{120, {flat}}>::vfunc_41 (37 bytes)
extern "C" __declspec(naked) void __fastcall fn_00651280(void* self, void* edx_unused, void** a1, void** a2) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        mov esi, dword ptr [eax]
        mov eax, dword ptr [esp + 0xc]
        mov ecx, dword ptr [eax + 0x4]
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [edx + 0x4]
        call eax
        push ecx
        mov ecx, esi
        fstp dword ptr [esp]
        call ext_0064F940
        pop esi
        ret 0x8
    }
}

extern "C" void ext_005C3640();

// [0x00651330] ExprParser::WriteMethodType<SkeletalJoint, float, {[thunk]: __thiscall SkeletalJoint::`vcall'{108, {flat}}, 0}>::vfunc_41 (37 bytes)
extern "C" __declspec(naked) void __fastcall fn_00651330(void* self, void* edx_unused, void** a1, void** a2) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        mov esi, dword ptr [eax]
        mov eax, dword ptr [esp + 0xc]
        mov ecx, dword ptr [eax + 0x4]
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [edx + 0x4]
        call eax
        push ecx
        mov ecx, esi
        fstp dword ptr [esp]
        call ext_005C3640
        pop esi
        ret 0x8
    }
}

// [0x00603440] ExprParser::WriteMethodType<EffectorBase, bool, &public: void __thiscall EffectorBase::setEnabled(bool)>::vfunc_41 (49 bytes)
extern "C" __declspec(naked) void __stdcall fn_00603440(void** self, void** a1) {
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
        test al, al
        mov ecx, dword ptr [esi + 4]
        mov edx, dword ptr [ecx]
        je L1
        mov eax, dword ptr [edx + 0x18]
        call eax
        pop esi
        ret 8
    L1:
        mov eax, dword ptr [edx + 0x1c]
        call eax
        pop esi
        ret 8
    }
}

// [0x006490F0] ExprParser::WriteMethodType<RelationshipRPROMagnet, float, {public: void __thiscall RelationshipRPROMagnet::setPositionStrength(float), 0}>::vfunc_41 (37 bytes)
extern "C" void ext_00649010();

// [0x006490F0] ExprParser::WriteMethodType<RelationshipRPROMagnet, float, {public: void __thiscall RelationshipRPROMagnet::setPositionStrength(float), 0}>::vfunc_41 (37 bytes)
extern "C" __declspec(naked) void __stdcall fn_006490F0(void* a1, void* a2) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        mov esi, dword ptr [eax]
        mov eax, dword ptr [esp + 0xc]
        mov ecx, dword ptr [eax + 0x4]
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [edx + 0x4]
        call eax
        push ecx
        mov ecx, esi
        fstp dword ptr [esp]
        call ext_00649010
        pop esi
        ret 0x8
    }
}

// [0x005C33E0] ExprParser::WriteMethodType<NMData::CollisionModelDataBase, NM::Vector3 const &, {protected: void __thiscall NMData::CollisionModelDataBase::addForce(class NM::Vector3 const &), 0}>::vfunc_41 (34 bytes)
extern "C" void ext_005C3030();
extern "C" __declspec(naked) void __fastcall fn_005C33E0(void* self, int edx_unused, void** a1, void** a2) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        mov esi, dword ptr [eax]
        mov eax, dword ptr [esp + 0xc]
        mov ecx, dword ptr [eax + 0x4]
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [edx + 0x14]
        call eax
        push eax
        mov ecx, esi
        call ext_005C3030
        pop esi
        ret 0x8
    }
}

// [0x005C3520] ExprParser::WriteMethodType<NMData::CollisionModelDataBase, NM::Vector3 const &, {protected: void __thiscall NMData::CollisionModelDataBase::addImpulse(class NM::Vector3 const &), 0}>::vfunc_41 (34 bytes)
extern "C" void ext_005C3090();
extern "C" __declspec(naked) void __fastcall fn_005C3520(void* self, int edx_unused, void** a1, void** a2) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        mov esi, dword ptr [eax]
        mov eax, dword ptr [esp + 0xc]
        mov ecx, dword ptr [eax + 0x4]
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [edx + 0x14]
        call eax
        push eax
        mov ecx, esi
        call ext_005C3090
        pop esi
        ret 0x8
    }
}

// [0x0063CB90] ExprParser::WriteMethodType<EffectorWithMemory, float, &public: void __thiscall EffectorWithMemory::setIntegralGradient(float)>::vfunc_48 (105 bytes)
extern "C" __declspec(naked) void __fastcall fn_0063CB90(void* self, int edx_unused, void** a1, void** a2, void* a3) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0xc]
        push esi
        mov esi, dword ptr [esp + 0x14]
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [ecx]
        push edi
        mov edi, dword ptr [eax]
        mov eax, dword ptr [edx + 0x4]
        push esi
        mov dword ptr [esp + 0xc], 0
        call eax
        fstp dword ptr [edi + 0x60]
        cmp dword ptr [esi + 0x4], 0
        lea eax, [esp + 0x14]
        je L_else_0063CB90
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x70]
        push esi
        push eax
        call edx
        mov ecx, dword ptr [eax]
        mov eax, dword ptr [esp + 0x10]
        mov edx, dword ptr [esi + 0x4]
        pop edi
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 0x4], edx
        pop esi
        pop ecx
        ret 0xc
    L_else_0063CB90:
        mov edx, dword ptr [esi + 0x4]
        mov dword ptr [esp + 0x14], 0
        mov ecx, dword ptr [eax]
        mov eax, dword ptr [esp + 0x10]
        pop edi
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 0x4], edx
        pop esi
        pop ecx
        ret 0xc
    }
}

// [0x00486F90] ExprParser::WriteMethodType<NMData::DesiredPoseEventData, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, {public: void __thiscall NMData::DesiredPoseEventData::loadPoseDataFromFile(class std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &), 0}>::vfunc_41 (106 bytes)
extern "C" void ext_0046E780();
extern "C" void ext_00486AF0();
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00486F90(void* self) {
    __asm {
        push -1
        push 0x8b56f9
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x1c
        mov eax, dword ptr [esp + 0x2c]
        mov edx, dword ptr [esp + 0x2c]
        push esi
        mov esi, dword ptr [eax]
        mov eax, dword ptr [esp + 0x34]
        mov ecx, dword ptr [eax + 0x4]
        push edx
        push eax
        lea eax, [esp + 0xc]
        push eax
        call ext_0046E780
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0x2c], 0
        call ext_00486AF0
        lea ecx, [esp + 0x4]
        mov dword ptr [esp + 0x28], -1
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x20]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x28
        ret 8
    }
}

// [0x004871E0] ExprParser::WriteMethodType<NMData::DesiredPoseEventData, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, {public: void __thiscall NMData::DesiredPoseEventData::setStrengthFromFSM(class std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &), 0}>::vfunc_41 (106 bytes)
extern "C" void ext_004C6F50();

extern "C" __declspec(naked) void __fastcall fn_004871E0(void* self) {
    __asm {
        push -1
        push 0x8b56f9
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x1c
        mov eax, dword ptr [esp + 0x2c]
        mov edx, dword ptr [esp + 0x2c]
        push esi
        mov esi, dword ptr [eax]
        mov eax, dword ptr [esp + 0x34]
        mov ecx, dword ptr [eax + 0x4]
        push edx
        push eax
        lea eax, [esp + 0xc]
        push eax
        call ext_0046E780
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0x2c], 0
        call ext_004C6F50
        lea ecx, [esp + 0x4]
        mov dword ptr [esp + 0x28], -1
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x20]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x28
        ret 8
    }
}

// [0x00487300] ExprParser::WriteMethodType<NMData::DesiredPoseEventData, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, {public: void __thiscall NMData::DesiredPoseEventData::setRootFromFSM(class std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &), 0}>::vfunc_41 (106 bytes)
extern "C" void ext_00402040();
extern "C" void ext_0046E780();
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00487300(void* self) {
    __asm {
        push -1
        push 0x8b56f9
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x1c
        mov eax, dword ptr [esp + 0x2c]
        mov edx, dword ptr [esp + 0x2c]
        push esi
        mov esi, dword ptr [eax]
        mov eax, dword ptr [esp + 0x34]
        mov ecx, dword ptr [eax + 0x4]
        push edx
        push eax
        lea eax, [esp + 0xc]
        push eax
        call ext_0046E780
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0x2c], 0
        call ext_00402040
        lea ecx, [esp + 0x4]
        mov dword ptr [esp + 0x28], -1
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x20]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x28
        ret 8
    }
}

// [0x004CA440] ExprParser::WriteMethodType<NMData::MetaBodyConstraintData, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, {public: void __thiscall NMData::MetaBodyConstraintData::addMetaBodyFromFSM(class std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &), 0}>::vfunc_41 (106 bytes)
extern "C" void ext_0046E780();
extern "C" void ext_004CA300();
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_004CA440(void* self) {
    __asm {
        push -1
        push 0x8b56f9
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x1c
        mov eax, dword ptr [esp + 0x2c]
        mov edx, dword ptr [esp + 0x2c]
        push esi
        mov esi, dword ptr [eax]
        mov eax, dword ptr [esp + 0x34]
        mov ecx, dword ptr [eax + 0x4]
        push edx
        push eax
        lea eax, [esp + 0xc]
        push eax
        call ext_0046E780
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0x2c], 0
        call ext_004CA300
        lea ecx, [esp + 0x4]
        mov dword ptr [esp + 0x28], -1
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x20]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x28
        ret 8
    }
}

// [0x004CA8D0] ExprParser::WriteMethodType<NMData::MetaBodyConstraintData, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, {public: void __thiscall NMData::MetaBodyConstraintData::setLockTypeString(class std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &), 0}>::vfunc_41 (106 bytes)
extern "C" void ext_0046E780();
extern "C" void ext_004CA590();
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_004CA8D0(void* self) {
    __asm {
        push -1
        push 0x8b56f9
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x1c
        mov eax, dword ptr [esp + 0x2c]
        mov edx, dword ptr [esp + 0x2c]
        push esi
        mov esi, dword ptr [eax]
        mov eax, dword ptr [esp + 0x34]
        mov ecx, dword ptr [eax + 0x4]
        push edx
        push eax
        lea eax, [esp + 0xc]
        push eax
        call ext_0046E780
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0x2c], 0
        call ext_004CA590
        lea ecx, [esp + 0x4]
        mov dword ptr [esp + 0x28], -1
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x20]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x28
        ret 8
    }
}

// [0x006049D0] ExprParser::WriteMethodType<EffectorBase, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, &[thunk]: __thiscall EffectorBase::`vcall'{64, {flat}}>::vfunc_41 (106 bytes)
extern "C" void ext_0046E780();
extern "C" void ext_00603690();
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_006049D0(void* self) {
    __asm {
        push -1
        push 0x8b56f9
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x1c
        mov eax, dword ptr [esp + 0x2c]
        mov edx, dword ptr [esp + 0x2c]
        push esi
        mov esi, dword ptr [eax]
        mov eax, dword ptr [esp + 0x34]
        mov ecx, dword ptr [eax + 0x4]
        push edx
        push eax
        lea eax, [esp + 0xc]
        push eax
        call ext_0046E780
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0x2c], 0
        call ext_00603690
        lea ecx, [esp + 0x4]
        mov dword ptr [esp + 0x28], -1
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x20]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x28
        ret 8
    }
}

// [0x006329B0] ExprParser::WriteMethodType<EffectorBase, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, &[thunk]: __thiscall EffectorBase::`vcall'{60, {flat}}>::vfunc_41 (106 bytes)
extern "C" void ext_0046E780();
extern "C" void ext_00603670();
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_006329B0(void* self) {
    __asm {
        push -1
        push 0x8b56f9
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x1c
        mov eax, dword ptr [esp + 0x2c]
        mov edx, dword ptr [esp + 0x2c]
        push esi
        mov esi, dword ptr [eax]
        mov eax, dword ptr [esp + 0x34]
        mov ecx, dword ptr [eax + 0x4]
        push edx
        push eax
        lea eax, [esp + 0xc]
        push eax
        call ext_0046E780
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0x2c], 0
        call ext_00603670
        lea ecx, [esp + 0x4]
        mov dword ptr [esp + 0x28], -1
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x20]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x28
        ret 8
    }
}

// [0x005B7420] ExprParser::WriteMethodType<NMData::MetaBodyData, NM::Vector3 const &, {public: void __thiscall NMData::MetaBodyData::applyImpulseViaVelocity(class NM::Vector3 const &), 0}>::vfunc_48 (110 bytes)
extern "C" __declspec(naked) void __fastcall fn_005B7420(void* self, int edx_unused, void** a1, void** a2, void* a3) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0xc]
        push esi
        mov esi, dword ptr [esp + 0x14]
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [ecx]
        push edi
        mov edi, dword ptr [eax]
        mov eax, dword ptr [edx + 0x14]
        push esi
        mov dword ptr [esp + 0xc], 0
        call eax
        push eax
        mov ecx, edi
        call ext_005B6780
        cmp dword ptr [esi + 0x4], 0
        lea eax, [esp + 0x14]
        je L_else_005B7420
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x70]
        push esi
        push eax
        call edx
        mov ecx, dword ptr [eax]
        mov eax, dword ptr [esp + 0x10]
        mov edx, dword ptr [esi + 0x4]
        pop edi
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 0x4], edx
        pop esi
        pop ecx
        ret 0xc
    L_else_005B7420:
        mov edx, dword ptr [esi + 0x4]
        mov dword ptr [esp + 0x14], 0
        mov ecx, dword ptr [eax]
        mov eax, dword ptr [esp + 0x10]
        pop edi
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 0x4], edx
        pop esi
        pop ecx
        ret 0xc
    }
}

// [0x005B7B50] ExprParser::WriteMethodType<NMData::MetaBodyData, NM::Vector3 const &, {public: void __thiscall NMData::MetaBodyData::addForce(class NM::Vector3 const &), 0}>::vfunc_48 (110 bytes)
extern "C" __declspec(naked) void __fastcall fn_005B7B50(void* self, int edx_unused, void** a1, void** a2, void* a3) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0xc]
        push esi
        mov esi, dword ptr [esp + 0x14]
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [ecx]
        push edi
        mov edi, dword ptr [eax]
        mov eax, dword ptr [edx + 0x14]
        push esi
        mov dword ptr [esp + 0xc], 0
        call eax
        push eax
        mov ecx, edi
        call ext_005B7240
        cmp dword ptr [esi + 0x4], 0
        lea eax, [esp + 0x14]
        je L_else_005B7B50
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x70]
        push esi
        push eax
        call edx
        mov ecx, dword ptr [eax]
        mov eax, dword ptr [esp + 0x10]
        mov edx, dword ptr [esi + 0x4]
        pop edi
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 0x4], edx
        pop esi
        pop ecx
        ret 0xc
    L_else_005B7B50:
        mov edx, dword ptr [esi + 0x4]
        mov dword ptr [esp + 0x14], 0
        mov ecx, dword ptr [eax]
        mov eax, dword ptr [esp + 0x10]
        pop edi
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 0x4], edx
        pop esi
        pop ecx
        ret 0xc
    }
}

// [0x005B7C70] ExprParser::WriteMethodType<NMData::MetaBodyData, NM::Vector3 const &, {public: void __thiscall NMData::MetaBodyData::addTorque(class NM::Vector3 const &), 0}>::vfunc_48 (110 bytes)
extern "C" __declspec(naked) void __fastcall fn_005B7C70(void* self, int edx_unused, void** a1, void** a2, void* a3) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0xc]
        push esi
        mov esi, dword ptr [esp + 0x14]
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [ecx]
        push edi
        mov edi, dword ptr [eax]
        mov eax, dword ptr [edx + 0x14]
        push esi
        mov dword ptr [esp + 0xc], 0
        call eax
        push eax
        mov ecx, edi
        call ext_005B72C0
        cmp dword ptr [esi + 0x4], 0
        lea eax, [esp + 0x14]
        je L_else_005B7C70
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x70]
        push esi
        push eax
        call edx
        mov ecx, dword ptr [eax]
        mov eax, dword ptr [esp + 0x10]
        mov edx, dword ptr [esi + 0x4]
        pop edi
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 0x4], edx
        pop esi
        pop ecx
        ret 0xc
    L_else_005B7C70:
        mov edx, dword ptr [esi + 0x4]
        mov dword ptr [esp + 0x14], 0
        mov ecx, dword ptr [eax]
        mov eax, dword ptr [esp + 0x10]
        pop edi
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 0x4], edx
        pop esi
        pop ecx
        ret 0xc
    }
}

// [0x005B7D90] ExprParser::WriteMethodType<NMData::MetaBodyData, NM::Vector3 const &, {public: void __thiscall NMData::MetaBodyData::addImpulse(class NM::Vector3 const &), 0}>::vfunc_48 (110 bytes)
extern "C" __declspec(naked) void __fastcall fn_005B7D90(void* self, int edx_unused, void** a1, void** a2, void* a3) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0xc]
        push esi
        mov esi, dword ptr [esp + 0x14]
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [ecx]
        push edi
        mov edi, dword ptr [eax]
        mov eax, dword ptr [edx + 0x14]
        push esi
        mov dword ptr [esp + 0xc], 0
        call eax
        push eax
        mov ecx, edi
        call ext_005B7280
        cmp dword ptr [esi + 0x4], 0
        lea eax, [esp + 0x14]
        je L_else_005B7D90
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x70]
        push esi
        push eax
        call edx
        mov ecx, dword ptr [eax]
        mov eax, dword ptr [esp + 0x10]
        mov edx, dword ptr [esi + 0x4]
        pop edi
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 0x4], edx
        pop esi
        pop ecx
        ret 0xc
    L_else_005B7D90:
        mov edx, dword ptr [esi + 0x4]
        mov dword ptr [esp + 0x14], 0
        mov ecx, dword ptr [eax]
        mov eax, dword ptr [esp + 0x10]
        pop edi
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 0x4], edx
        pop esi
        pop ecx
        ret 0xc
    }
}

// [0x005C3410] ExprParser::WriteMethodType<NMData::CollisionModelDataBase, NM::Vector3 const &, {protected: void __thiscall NMData::CollisionModelDataBase::addForce(class NM::Vector3 const &), 0}>::vfunc_48 (110 bytes)
extern "C" void ext_005C3030();
extern "C" __declspec(naked) void __fastcall fn_005C3410(void* self, int edx_unused, void** a1, void** a2, void* a3) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0xc]
        push esi
        mov esi, dword ptr [esp + 0x14]
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [ecx]
        push edi
        mov edi, dword ptr [eax]
        mov eax, dword ptr [edx + 0x14]
        push esi
        mov dword ptr [esp + 0xc], 0
        call eax
        push eax
        mov ecx, edi
        call ext_005C3030
        cmp dword ptr [esi + 0x4], 0
        lea eax, [esp + 0x14]
        je L_else_005C3410
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x70]
        push esi
        push eax
        call edx
        mov ecx, dword ptr [eax]
        mov eax, dword ptr [esp + 0x10]
        mov edx, dword ptr [esi + 0x4]
        pop edi
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 0x4], edx
        pop esi
        pop ecx
        ret 0xc
    L_else_005C3410:
        mov edx, dword ptr [esi + 0x4]
        mov dword ptr [esp + 0x14], 0
        mov ecx, dword ptr [eax]
        mov eax, dword ptr [esp + 0x10]
        pop edi
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 0x4], edx
        pop esi
        pop ecx
        ret 0xc
    }
}

// [0x005C34B0] ExprParser::WriteMethodType<NMData::CollisionModelDataBase, NM::Vector3 const &, {protected: void __thiscall NMData::CollisionModelDataBase::addTorque(class NM::Vector3 const &), 0}>::vfunc_48 (110 bytes)
extern "C" void ext_005C30F0();
extern "C" __declspec(naked) void __fastcall fn_005C34B0(void* self, int edx_unused, void** a1, void** a2, void* a3) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0xc]
        push esi
        mov esi, dword ptr [esp + 0x14]
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [ecx]
        push edi
        mov edi, dword ptr [eax]
        mov eax, dword ptr [edx + 0x14]
        push esi
        mov dword ptr [esp + 0xc], 0
        call eax
        push eax
        mov ecx, edi
        call ext_005C30F0
        cmp dword ptr [esi + 0x4], 0
        lea eax, [esp + 0x14]
        je L_else_005C34B0
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x70]
        push esi
        push eax
        call edx
        mov ecx, dword ptr [eax]
        mov eax, dword ptr [esp + 0x10]
        mov edx, dword ptr [esi + 0x4]
        pop edi
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 0x4], edx
        pop esi
        pop ecx
        ret 0xc
    L_else_005C34B0:
        mov edx, dword ptr [esi + 0x4]
        mov dword ptr [esp + 0x14], 0
        mov ecx, dword ptr [eax]
        mov eax, dword ptr [esp + 0x10]
        pop edi
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 0x4], edx
        pop esi
        pop ecx
        ret 0xc
    }
}

// [0x005C3550] ExprParser::WriteMethodType<NMData::CollisionModelDataBase, NM::Vector3 const &, {protected: void __thiscall NMData::CollisionModelDataBase::addImpulse(class NM::Vector3 const &), 0}>::vfunc_48 (110 bytes)
extern "C" __declspec(naked) void __fastcall fn_005C3550(void* self, int edx_unused, void** a1, void** a2, void* a3) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0xc]
        push esi
        mov esi, dword ptr [esp + 0x14]
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [ecx]
        push edi
        mov edi, dword ptr [eax]
        mov eax, dword ptr [edx + 0x14]
        push esi
        mov dword ptr [esp + 0xc], 0
        call eax
        push eax
        mov ecx, edi
        call ext_005C3090
        cmp dword ptr [esi + 0x4], 0
        lea eax, [esp + 0x14]
        je L_else_005C3550
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x70]
        push esi
        push eax
        call edx
        mov ecx, dword ptr [eax]
        mov eax, dword ptr [esp + 0x10]
        mov edx, dword ptr [esi + 0x4]
        pop edi
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 0x4], edx
        pop esi
        pop ecx
        ret 0xc
    L_else_005C3550:
        mov edx, dword ptr [esi + 0x4]
        mov dword ptr [esp + 0x14], 0
        mov ecx, dword ptr [eax]
        mov eax, dword ptr [esp + 0x10]
        pop edi
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 0x4], edx
        pop esi
        pop ecx
        ret 0xc
    }
}

// [0x00604960] ExprParser::WriteMethodType<EffectorBase, bool, &[thunk]: __thiscall EffectorBase::`vcall'{68, {flat}}>::vfunc_48 (110 bytes)
extern "C" __declspec(naked) void __fastcall fn_00604960(void* self, int edx_unused, void** a1, void** a2, void* a3) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0xc]
        push esi
        mov esi, dword ptr [esp + 0x14]
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [ecx]
        push edi
        mov edi, dword ptr [eax]
        mov eax, dword ptr [edx + 0xc]
        push esi
        mov dword ptr [esp + 0xc], 0
        call eax
        mov ecx, edi
        push eax
        call ext_0062A580
        cmp dword ptr [esi + 0x4], 0
        lea eax, [esp + 0x14]
        je L_else_00604960
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x70]
        push esi
        push eax
        call edx
        mov ecx, dword ptr [eax]
        mov eax, dword ptr [esp + 0x10]
        mov edx, dword ptr [esi + 0x4]
        pop edi
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 0x4], edx
        pop esi
        pop ecx
        ret 0xc
    L_else_00604960:
        mov edx, dword ptr [esi + 0x4]
        mov dword ptr [esp + 0x14], 0
        mov ecx, dword ptr [eax]
        mov eax, dword ptr [esp + 0x10]
        pop edi
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 0x4], edx
        pop esi
        pop ecx
        ret 0xc
    }
}

// [0x00604BD0] ExprParser::WriteMethodType<EffectorBase, NM::Vector4 const &, &[thunk]: __thiscall EffectorBase::`vcall'{76, {flat}}>::vfunc_48 (110 bytes)
extern "C" void ext_00603680();

extern "C" __declspec(naked) void __fastcall fn_00604BD0(void* self, int edx_unused, void** a1, void** a2, void* a3) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0xc]
        push esi
        mov esi, dword ptr [esp + 0x14]
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [ecx]
        push edi
        mov edi, dword ptr [eax]
        mov eax, dword ptr [edx + 0x18]
        push esi
        mov dword ptr [esp + 0xc], 0
        call eax
        push eax
        mov ecx, edi
        call ext_00603680
        cmp dword ptr [esi + 0x4], 0
        lea eax, [esp + 0x14]
        je L_else_00604BD0
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x70]
        push esi
        push eax
        call edx
        mov ecx, dword ptr [eax]
        mov eax, dword ptr [esp + 0x10]
        mov edx, dword ptr [esi + 0x4]
        pop edi
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 0x4], edx
        pop esi
        pop ecx
        ret 0xc
    L_else_00604BD0:
        mov edx, dword ptr [esi + 0x4]
        mov dword ptr [esp + 0x14], 0
        mov ecx, dword ptr [eax]
        mov eax, dword ptr [esp + 0x10]
        pop edi
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 0x4], edx
        pop esi
        pop ecx
        ret 0xc
    }
}

// [0x00604C70] ExprParser::WriteMethodType<EffectorBase, NM::Vector4 const &, &[thunk]: __thiscall EffectorBase::`vcall'{80, {flat}}>::vfunc_48 (110 bytes)
extern "C" void ext_006036A0();

extern "C" __declspec(naked) void __fastcall fn_00604C70(void* self, int edx_unused, void** a1, void** a2, void* a3) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0xc]
        push esi
        mov esi, dword ptr [esp + 0x14]
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [ecx]
        push edi
        mov edi, dword ptr [eax]
        mov eax, dword ptr [edx + 0x18]
        push esi
        mov dword ptr [esp + 0xc], 0
        call eax
        push eax
        mov ecx, edi
        call ext_006036A0
        cmp dword ptr [esi + 0x4], 0
        lea eax, [esp + 0x14]
        je L_else_00604C70
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x70]
        push esi
        push eax
        call edx
        mov ecx, dword ptr [eax]
        mov eax, dword ptr [esp + 0x10]
        mov edx, dword ptr [esi + 0x4]
        pop edi
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 0x4], edx
        pop esi
        pop ecx
        ret 0xc
    L_else_00604C70:
        mov edx, dword ptr [esi + 0x4]
        mov dword ptr [esp + 0x14], 0
        mov ecx, dword ptr [eax]
        mov eax, dword ptr [esp + 0x10]
        pop edi
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 0x4], edx
        pop esi
        pop ecx
        ret 0xc
    }
}

// [0x00627720] ExprParser::WriteMethodType<Sensors::SensorAbsoluteOrientation, int, &public: void __thiscall Sensors::SensorAbsoluteOrientation::setReference(int)>::vfunc_48 (110 bytes)
extern "C" void ext_00627510();

extern "C" __declspec(naked) void __fastcall fn_00627720(void* self, int edx_unused, void** a1, void** a2, void* a3) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0xc]
        push esi
        mov esi, dword ptr [esp + 0x14]
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [ecx]
        push edi
        mov edi, dword ptr [eax]
        mov eax, dword ptr [edx + 0x8]
        push esi
        mov dword ptr [esp + 0xc], 0
        call eax
        push eax
        mov ecx, edi
        call ext_00627510
        cmp dword ptr [esi + 0x4], 0
        lea eax, [esp + 0x14]
        je L_else_00627720
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x70]
        push esi
        push eax
        call edx
        mov ecx, dword ptr [eax]
        mov eax, dword ptr [esp + 0x10]
        mov edx, dword ptr [esi + 0x4]
        pop edi
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 0x4], edx
        pop esi
        pop ecx
        ret 0xc
    L_else_00627720:
        mov edx, dword ptr [esi + 0x4]
        mov dword ptr [esp + 0x14], 0
        mov ecx, dword ptr [eax]
        mov eax, dword ptr [esp + 0x10]
        pop edi
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 0x4], edx
        pop esi
        pop ecx
        ret 0xc
    }
}

// [0x006496C0] ExprParser::WriteMethodType<RelationshipRPROMagnet, bool, {public: void __thiscall RelationshipRPROMagnet::setEnabled(bool), 0}>::vfunc_48 (110 bytes)
extern "C" void ext_00648EA0();

extern "C" __declspec(naked) void __fastcall fn_006496C0(void* self, int edx_unused, void** a1, void** a2, void* a3) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0xc]
        push esi
        mov esi, dword ptr [esp + 0x14]
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [ecx]
        push edi
        mov edi, dword ptr [eax]
        mov eax, dword ptr [edx + 0xc]
        push esi
        mov dword ptr [esp + 0xc], 0
        call eax
        mov ecx, edi
        push eax
        call ext_00648EA0
        cmp dword ptr [esi + 0x4], 0
        lea eax, [esp + 0x14]
        je L_else_006496C0
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x70]
        push esi
        push eax
        call edx
        mov ecx, dword ptr [eax]
        mov eax, dword ptr [esp + 0x10]
        mov edx, dword ptr [esi + 0x4]
        pop edi
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 0x4], edx
        pop esi
        pop ecx
        ret 0xc
    L_else_006496C0:
        mov edx, dword ptr [esi + 0x4]
        mov dword ptr [esp + 0x14], 0
        mov ecx, dword ptr [eax]
        mov eax, dword ptr [esp + 0x10]
        pop edi
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 0x4], edx
        pop esi
        pop ecx
        ret 0xc
    }
}

// [0x00649D80] ExprParser::WriteMethodType<RelationshipRPROMagnet, bool, {public: void __thiscall RelationshipRPROMagnet::setRotationMode(bool), 0}>::vfunc_48 (110 bytes)
extern "C" __declspec(naked) void __fastcall fn_00649D80(void* self, int edx_unused, void** a1, void** a2, void* a3) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0xc]
        push esi
        mov esi, dword ptr [esp + 0x14]
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [ecx]
        push edi
        mov edi, dword ptr [eax]
        mov eax, dword ptr [edx + 0xc]
        push esi
        mov dword ptr [esp + 0xc], 0
        call eax
        mov ecx, edi
        push eax
        call ext_00648E30
        cmp dword ptr [esi + 0x4], 0
        lea eax, [esp + 0x14]
        je L_else_00649D80
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x70]
        push esi
        push eax
        call edx
        mov ecx, dword ptr [eax]
        mov eax, dword ptr [esp + 0x10]
        mov edx, dword ptr [esi + 0x4]
        pop edi
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 0x4], edx
        pop esi
        pop ecx
        ret 0xc
    L_else_00649D80:
        mov edx, dword ptr [esi + 0x4]
        mov dword ptr [esp + 0x14], 0
        mov ecx, dword ptr [eax]
        mov eax, dword ptr [esp + 0x10]
        pop edi
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 0x4], edx
        pop esi
        pop ecx
        ret 0xc
    }
}

// [0x0064F7C0] ExprParser::WriteMethodType<SkeletalJoint, NM::Vector3 const &, {public: void __thiscall SkeletalJoint::setDriveAngularVel(class NM::Vector3 const &), 0}>::vfunc_48 (110 bytes)
extern "C" void ext_0064DDE0();

extern "C" __declspec(naked) void __fastcall fn_0064F7C0(void* self, int edx_unused, void** a1, void** a2, void* a3) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0xc]
        push esi
        mov esi, dword ptr [esp + 0x14]
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [ecx]
        push edi
        mov edi, dword ptr [eax]
        mov eax, dword ptr [edx + 0x14]
        push esi
        mov dword ptr [esp + 0xc], 0
        call eax
        push eax
        mov ecx, edi
        call ext_0064DDE0
        cmp dword ptr [esi + 0x4], 0
        lea eax, [esp + 0x14]
        je L_else_0064F7C0
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x70]
        push esi
        push eax
        call edx
        mov ecx, dword ptr [eax]
        mov eax, dword ptr [esp + 0x10]
        mov edx, dword ptr [esi + 0x4]
        pop edi
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 0x4], edx
        pop esi
        pop ecx
        ret 0xc
    L_else_0064F7C0:
        mov edx, dword ptr [esi + 0x4]
        mov dword ptr [esp + 0x14], 0
        mov ecx, dword ptr [eax]
        mov eax, dword ptr [esp + 0x10]
        pop edi
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 0x4], edx
        pop esi
        pop ecx
        ret 0xc
    }
}

// [0x0064F870] ExprParser::WriteMethodType<SkeletalJoint, NM::Vector4 const &, {public: void __thiscall SkeletalJoint::setDriveQuaternion(class NM::Vector4 const &), 0}>::vfunc_48 (110 bytes)
extern "C" void ext_00402040();

extern "C" __declspec(naked) void __fastcall fn_0064F870(void* self, int edx_unused, void** a1, void** a2, void* a3) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0xc]
        push esi
        mov esi, dword ptr [esp + 0x14]
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [ecx]
        push edi
        mov edi, dword ptr [eax]
        mov eax, dword ptr [edx + 0x18]
        push esi
        mov dword ptr [esp + 0xc], 0
        call eax
        push eax
        mov ecx, edi
        call ext_00402040
        cmp dword ptr [esi + 0x4], 0
        lea eax, [esp + 0x14]
        je L_else_0064F870
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x70]
        push esi
        push eax
        call edx
        mov ecx, dword ptr [eax]
        mov eax, dword ptr [esp + 0x10]
        mov edx, dword ptr [esi + 0x4]
        pop edi
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 0x4], edx
        pop esi
        pop ecx
        ret 0xc
    L_else_0064F870:
        mov edx, dword ptr [esi + 0x4]
        mov dword ptr [esp + 0x14], 0
        mov ecx, dword ptr [eax]
        mov eax, dword ptr [esp + 0x10]
        pop edi
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 0x4], edx
        pop esi
        pop ecx
        ret 0xc
    }
}

// [0x00650DB0] ExprParser::WriteMethodType<SkeletalJoint, int, {[thunk]: __thiscall SkeletalJoint::`vcall'{84, {flat}}, 0}>::vfunc_48 (110 bytes)
extern "C" void ext_0064F900();

extern "C" __declspec(naked) void __fastcall fn_00650DB0(void* self, int edx_unused, void** a1, void** a2, void* a3) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0xc]
        push esi
        mov esi, dword ptr [esp + 0x14]
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [ecx]
        push edi
        mov edi, dword ptr [eax]
        mov eax, dword ptr [edx + 0x8]
        push esi
        mov dword ptr [esp + 0xc], 0
        call eax
        push eax
        mov ecx, edi
        call ext_0064F900
        cmp dword ptr [esi + 0x4], 0
        lea eax, [esp + 0x14]
        je L_else_00650DB0
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x70]
        push esi
        push eax
        call edx
        mov ecx, dword ptr [eax]
        mov eax, dword ptr [esp + 0x10]
        mov edx, dword ptr [esi + 0x4]
        pop edi
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 0x4], edx
        pop esi
        pop ecx
        ret 0xc
    L_else_00650DB0:
        mov edx, dword ptr [esi + 0x4]
        mov dword ptr [esp + 0x14], 0
        mov ecx, dword ptr [eax]
        mov eax, dword ptr [esp + 0x10]
        pop edi
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 0x4], edx
        pop esi
        pop ecx
        ret 0xc
    }
}

// [0x00650E50] ExprParser::WriteMethodType<SkeletalJoint, int, {[thunk]: __thiscall SkeletalJoint::`vcall'{80, {flat}}, 0}>::vfunc_48 (110 bytes)
extern "C" void ext_006036A0();

extern "C" __declspec(naked) void __fastcall fn_00650E50(void* self, int edx_unused, void** a1, void** a2, void* a3) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0xc]
        push esi
        mov esi, dword ptr [esp + 0x14]
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [ecx]
        push edi
        mov edi, dword ptr [eax]
        mov eax, dword ptr [edx + 0x8]
        push esi
        mov dword ptr [esp + 0xc], 0
        call eax
        push eax
        mov ecx, edi
        call ext_006036A0
        cmp dword ptr [esi + 0x4], 0
        lea eax, [esp + 0x14]
        je L_else_00650E50
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x70]
        push esi
        push eax
        call edx
        mov ecx, dword ptr [eax]
        mov eax, dword ptr [esp + 0x10]
        mov edx, dword ptr [esi + 0x4]
        pop edi
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 0x4], edx
        pop esi
        pop ecx
        ret 0xc
    L_else_00650E50:
        mov edx, dword ptr [esi + 0x4]
        mov dword ptr [esp + 0x14], 0
        mov ecx, dword ptr [eax]
        mov eax, dword ptr [esp + 0x10]
        pop edi
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 0x4], edx
        pop esi
        pop ecx
        ret 0xc
    }
}

// [0x00651410] ExprParser::WriteMethodType<SkeletalJoint, NM::Vector3 const &, {[thunk]: __thiscall SkeletalJoint::`vcall'{132, {flat}}, 0}>::vfunc_48 (110 bytes)
extern "C" void ext_0064F920();

extern "C" __declspec(naked) void __fastcall fn_00651410(void* self, int edx_unused, void** a1, void** a2, void* a3) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0xc]
        push esi
        mov esi, dword ptr [esp + 0x14]
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [ecx]
        push edi
        mov edi, dword ptr [eax]
        mov eax, dword ptr [edx + 0x14]
        push esi
        mov dword ptr [esp + 0xc], 0
        call eax
        push eax
        mov ecx, edi
        call ext_0064F920
        cmp dword ptr [esi + 0x4], 0
        lea eax, [esp + 0x14]
        je L_else_00651410
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x70]
        push esi
        push eax
        call edx
        mov ecx, dword ptr [eax]
        mov eax, dword ptr [esp + 0x10]
        mov edx, dword ptr [esi + 0x4]
        pop edi
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 0x4], edx
        pop esi
        pop ecx
        ret 0xc
    L_else_00651410:
        mov edx, dword ptr [esi + 0x4]
        mov dword ptr [esp + 0x14], 0
        mov ecx, dword ptr [eax]
        mov eax, dword ptr [esp + 0x10]
        pop edi
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 0x4], edx
        pop esi
        pop ecx
        ret 0xc
    }
}

// [0x0068BC90] ExprParser::WriteMethodType<Randomizer, int, {public: void __thiscall Randomizer::setSeed(int), 0}>::vfunc_48 (110 bytes)
extern "C" void ext_006B0C30();

extern "C" __declspec(naked) void __fastcall fn_0068BC90(void* self, int edx_unused, void** a1, void** a2, void* a3) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0xc]
        push esi
        mov esi, dword ptr [esp + 0x14]
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [ecx]
        push edi
        mov edi, dword ptr [eax]
        mov eax, dword ptr [edx + 0x8]
        push esi
        mov dword ptr [esp + 0xc], 0
        call eax
        push eax
        mov ecx, edi
        call ext_006B0C30
        cmp dword ptr [esi + 0x4], 0
        lea eax, [esp + 0x14]
        je L_else_0068BC90
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x70]
        push esi
        push eax
        call edx
        mov ecx, dword ptr [eax]
        mov eax, dword ptr [esp + 0x10]
        mov edx, dword ptr [esi + 0x4]
        pop edi
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 0x4], edx
        pop esi
        pop ecx
        ret 0xc
    L_else_0068BC90:
        mov edx, dword ptr [esi + 0x4]
        mov dword ptr [esp + 0x14], 0
        mov ecx, dword ptr [eax]
        mov eax, dword ptr [esp + 0x10]
        pop edi
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 0x4], edx
        pop esi
        pop ecx
        ret 0xc
    }
}

// [0x00487450] ExprParser::WriteMethodType<NMData::DesiredPoseEventData, float, {public: void __thiscall NMData::DesiredPoseEventData::setEntryBlendPeriodFromFSM(float), 0}>::vfunc_48 (113 bytes)
extern "C" __declspec(naked) void __fastcall fn_00487450(void* self, int edx_unused, void** a1, void** a2, void* a3) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0xc]
        push esi
        mov esi, dword ptr [esp + 0x14]
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [ecx]
        push edi
        mov edi, dword ptr [eax]
        mov eax, dword ptr [edx + 0x4]
        push esi
        mov dword ptr [esp + 0xc], 0
        call eax
        push ecx
        mov ecx, edi
        fstp dword ptr [esp]
        call ext_00486C10
        cmp dword ptr [esi + 0x4], 0
        lea eax, [esp + 0x14]
        je L_else_00487450
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x70]
        push esi
        push eax
        call edx
        mov ecx, dword ptr [eax]
        mov eax, dword ptr [esp + 0x10]
        mov edx, dword ptr [esi + 0x4]
        pop edi
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 0x4], edx
        pop esi
        pop ecx
        ret 0xc
    L_else_00487450:
        mov edx, dword ptr [esi + 0x4]
        mov dword ptr [esp + 0x14], 0
        mov ecx, dword ptr [eax]
        mov eax, dword ptr [esp + 0x10]
        pop edi
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 0x4], edx
        pop esi
        pop ecx
        ret 0xc
    }
}

extern "C" void ext_0048ABD0();

// [0x0048AD80] ExprParser::WriteMethodType<NMData::DesiredPoseEventData, float, {public: void __thiscall NMData::DesiredPoseEventData::fireWithStrength(float), 0}>::vfunc_48 (113 bytes)
extern "C" __declspec(naked) void __fastcall fn_0048AD80(void* self, int edx_unused, void** a1, void** a2, void* a3) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0xc]
        push esi
        mov esi, dword ptr [esp + 0x14]
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [ecx]
        push edi
        mov edi, dword ptr [eax]
        mov eax, dword ptr [edx + 0x4]
        push esi
        mov dword ptr [esp + 0xc], 0
        call eax
        push ecx
        mov ecx, edi
        fstp dword ptr [esp]
        call ext_0048ABD0
        cmp dword ptr [esi + 0x4], 0
        lea eax, [esp + 0x14]
        je L_else_0048AD80
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x70]
        push esi
        push eax
        call edx
        mov ecx, dword ptr [eax]
        mov eax, dword ptr [esp + 0x10]
        mov edx, dword ptr [esi + 0x4]
        pop edi
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 0x4], edx
        pop esi
        pop ecx
        ret 0xc
    L_else_0048AD80:
        mov edx, dword ptr [esi + 0x4]
        mov dword ptr [esp + 0x14], 0
        mov ecx, dword ptr [eax]
        mov eax, dword ptr [esp + 0x10]
        pop edi
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 0x4], edx
        pop esi
        pop ecx
        ret 0xc
    }
}

// [0x004FE0F0] ExprParser::WriteMethodType<EvolveEngine, float, {private: void __thiscall EvolveEngine::stopWithFitness(float), 0}>::vfunc_48 (113 bytes)
extern "C" __declspec(naked) void __fastcall fn_004FE0F0(void* self, int edx_unused, void** a1, void** a2, void* a3) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0xc]
        push esi
        mov esi, dword ptr [esp + 0x14]
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [ecx]
        push edi
        mov edi, dword ptr [eax]
        mov eax, dword ptr [edx + 0x4]
        push esi
        mov dword ptr [esp + 0xc], 0
        call eax
        push ecx
        mov ecx, edi
        fstp dword ptr [esp]
        call ext_004FDC80
        cmp dword ptr [esi + 0x4], 0
        lea eax, [esp + 0x14]
        je L_else_004FE0F0
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x70]
        push esi
        push eax
        call edx
        mov ecx, dword ptr [eax]
        mov eax, dword ptr [esp + 0x10]
        mov edx, dword ptr [esi + 0x4]
        pop edi
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 0x4], edx
        pop esi
        pop ecx
        ret 0xc
    L_else_004FE0F0:
        mov edx, dword ptr [esi + 0x4]
        mov dword ptr [esp + 0x14], 0
        mov ecx, dword ptr [eax]
        mov eax, dword ptr [esp + 0x10]
        pop edi
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 0x4], edx
        pop esi
        pop ecx
        ret 0xc
    }
}

// [0x005944A0] ExprParser::WriteMethodType<World, float, {private: void __thiscall World::setGravity(float), 0}>::vfunc_48 (113 bytes)
extern "C" void ext_00594080();
extern "C" __declspec(naked) void __fastcall fn_005944A0(void* self, int edx_unused, void** a1, void** a2, void* a3) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0xc]
        push esi
        mov esi, dword ptr [esp + 0x14]
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [ecx]
        push edi
        mov edi, dword ptr [eax]
        mov eax, dword ptr [edx + 0x4]
        push esi
        mov dword ptr [esp + 0xc], 0
        call eax
        push ecx
        mov ecx, edi
        fstp dword ptr [esp]
        call ext_00594080
        cmp dword ptr [esi + 0x4], 0
        lea eax, [esp + 0x14]
        je L_else_005944A0
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x70]
        push esi
        push eax
        call edx
        mov ecx, dword ptr [eax]
        mov eax, dword ptr [esp + 0x10]
        mov edx, dword ptr [esi + 0x4]
        pop edi
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 0x4], edx
        pop esi
        pop ecx
        ret 0xc
    L_else_005944A0:
        mov edx, dword ptr [esi + 0x4]
        mov dword ptr [esp + 0x14], 0
        mov ecx, dword ptr [eax]
        mov eax, dword ptr [esp + 0x10]
        pop edi
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 0x4], edx
        pop esi
        pop ecx
        ret 0xc
    }
}

// [0x0066C400] ExprParser::WriteMethodType<NM::Vector3, float, &public: void __thiscall NM::Vector3::radRotateY(float)>::vfunc_41 (37 bytes)
extern "C" void ext_0067C450();

extern "C" __declspec(naked) void __fastcall fn_0066C400(void* self, void* edx_unused, void** a1, void** a2) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        mov esi, dword ptr [eax]
        mov eax, dword ptr [esp + 0xc]
        mov ecx, dword ptr [eax + 0x4]
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [edx + 0x4]
        call eax
        push ecx
        mov ecx, esi
        fstp dword ptr [esp]
        call ext_0067C450
        pop esi
        ret 0x8
    }
}

// [0x00594550] ExprParser::WriteMethodType<World, float, {private: void __thiscall World::setFriction(float), 0}>::vfunc_48 (113 bytes)
extern "C" void ext_005940A0();
extern "C" __declspec(naked) void __fastcall fn_00594550(void* self, int edx_unused, void** a1, void** a2, void* a3) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0xc]
        push esi
        mov esi, dword ptr [esp + 0x14]
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [ecx]
        push edi
        mov edi, dword ptr [eax]
        mov eax, dword ptr [edx + 0x4]
        push esi
        mov dword ptr [esp + 0xc], 0
        call eax
        push ecx
        mov ecx, edi
        fstp dword ptr [esp]
        call ext_005940A0
        cmp dword ptr [esi + 0x4], 0
        lea eax, [esp + 0x14]
        je L_else_00594550
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x70]
        push esi
        push eax
        call edx
        mov ecx, dword ptr [eax]
        mov eax, dword ptr [esp + 0x10]
        mov edx, dword ptr [esi + 0x4]
        pop edi
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 0x4], edx
        pop esi
        pop ecx
        ret 0xc
    L_else_00594550:
        mov edx, dword ptr [esi + 0x4]
        mov dword ptr [esp + 0x14], 0
        mov ecx, dword ptr [eax]
        mov eax, dword ptr [esp + 0x10]
        pop edi
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 0x4], edx
        pop esi
        pop ecx
        ret 0xc
    }
}

// [0x0066C4B0] ExprParser::WriteMethodType<NM::Vector3, float, &public: void __thiscall NM::Vector3::radRotateZ(float)>::vfunc_41 (37 bytes)
extern "C" void ext_0067C4D0();

extern "C" __declspec(naked) void __fastcall fn_0066C4B0(void* self, void* edx_unused, void** a1, void** a2) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        mov esi, dword ptr [eax]
        mov eax, dword ptr [esp + 0xc]
        mov ecx, dword ptr [eax + 0x4]
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [edx + 0x4]
        call eax
        push ecx
        mov ecx, esi
        fstp dword ptr [esp]
        call ext_0067C4D0
        pop esi
        ret 0x8
    }
}

// [0x005F3600] ExprParser::WriteMethodType<EffectorGroup, float, &[thunk]: __thiscall EffectorGroup::`vcall'{96, {flat}}>::vfunc_48 (113 bytes)
extern "C" void ext_0064F8F0();
extern "C" __declspec(naked) void __fastcall fn_005F3600(void* self, int edx_unused, void** a1, void** a2, void* a3) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0xc]
        push esi
        mov esi, dword ptr [esp + 0x14]
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [ecx]
        push edi
        mov edi, dword ptr [eax]
        mov eax, dword ptr [edx + 0x4]
        push esi
        mov dword ptr [esp + 0xc], 0
        call eax
        push ecx
        mov ecx, edi
        fstp dword ptr [esp]
        call ext_0064F8F0
        cmp dword ptr [esi + 0x4], 0
        lea eax, [esp + 0x14]
        je L_else_005F3600
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x70]
        push esi
        push eax
        call edx
        mov ecx, dword ptr [eax]
        mov eax, dword ptr [esp + 0x10]
        mov edx, dword ptr [esi + 0x4]
        pop edi
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 0x4], edx
        pop esi
        pop ecx
        ret 0xc
    L_else_005F3600:
        mov edx, dword ptr [esi + 0x4]
        mov dword ptr [esp + 0x14], 0
        mov ecx, dword ptr [eax]
        mov eax, dword ptr [esp + 0x10]
        pop edi
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 0x4], edx
        pop esi
        pop ecx
        ret 0xc
    }
}

// [0x005F36B0] ExprParser::WriteMethodType<EffectorGroup, float, &[thunk]: __thiscall EffectorGroup::`vcall'{84, {flat}}>::vfunc_48 (113 bytes)
extern "C" void ext_0064F900();
extern "C" __declspec(naked) void __fastcall fn_005F36B0(void* self, int edx_unused, void** a1, void** a2, void* a3) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0xc]
        push esi
        mov esi, dword ptr [esp + 0x14]
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [ecx]
        push edi
        mov edi, dword ptr [eax]
        mov eax, dword ptr [edx + 0x4]
        push esi
        mov dword ptr [esp + 0xc], 0
        call eax
        push ecx
        mov ecx, edi
        fstp dword ptr [esp]
        call ext_0064F900
        cmp dword ptr [esi + 0x4], 0
        lea eax, [esp + 0x14]
        je L_else_005F36B0
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x70]
        push esi
        push eax
        call edx
        mov ecx, dword ptr [eax]
        mov eax, dword ptr [esp + 0x10]
        mov edx, dword ptr [esi + 0x4]
        pop edi
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 0x4], edx
        pop esi
        pop ecx
        ret 0xc
    L_else_005F36B0:
        mov edx, dword ptr [esi + 0x4]
        mov dword ptr [esp + 0x14], 0
        mov ecx, dword ptr [eax]
        mov eax, dword ptr [esp + 0x10]
        pop edi
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 0x4], edx
        pop esi
        pop ecx
        ret 0xc
    }
}

// [0x00629F70] ExprParser::WriteMethodType<Sensors::SensorRelativeTime, float, &public: void __thiscall Sensors::SensorRelativeTime::resetTime(float)>::vfunc_48 (113 bytes)
extern "C" void ext_00629EB0();

extern "C" __declspec(naked) void __fastcall fn_00629F70(void* self, int edx_unused, void** a1, void** a2, void* a3) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0xc]
        push esi
        mov esi, dword ptr [esp + 0x14]
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [ecx]
        push edi
        mov edi, dword ptr [eax]
        mov eax, dword ptr [edx + 0x4]
        push esi
        mov dword ptr [esp + 0xc], 0
        call eax
        push ecx
        mov ecx, edi
        fstp dword ptr [esp]
        call ext_00629EB0
        cmp dword ptr [esi + 0x4], 0
        lea eax, [esp + 0x14]
        je L_else_00629F70
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x70]
        push esi
        push eax
        call edx
        mov ecx, dword ptr [eax]
        mov eax, dword ptr [esp + 0x10]
        mov edx, dword ptr [esi + 0x4]
        pop edi
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 0x4], edx
        pop esi
        pop ecx
        ret 0xc
    L_else_00629F70:
        mov edx, dword ptr [esi + 0x4]
        mov dword ptr [esp + 0x14], 0
        mov ecx, dword ptr [eax]
        mov eax, dword ptr [esp + 0x10]
        pop edi
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 0x4], edx
        pop esi
        pop ecx
        ret 0xc
    }
}

// [0x0062A020] ExprParser::WriteMethodType<Sensors::SensorMetaBodyRelativeTime, float, &public: void __thiscall Sensors::SensorMetaBodyRelativeTime::resetTime(float)>::vfunc_48 (113 bytes)
extern "C" void ext_00629F10();

extern "C" __declspec(naked) void __fastcall fn_0062A020(void* self, int edx_unused, void** a1, void** a2, void* a3) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0xc]
        push esi
        mov esi, dword ptr [esp + 0x14]
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [ecx]
        push edi
        mov edi, dword ptr [eax]
        mov eax, dword ptr [edx + 0x4]
        push esi
        mov dword ptr [esp + 0xc], 0
        call eax
        push ecx
        mov ecx, edi
        fstp dword ptr [esp]
        call ext_00629F10
        cmp dword ptr [esi + 0x4], 0
        lea eax, [esp + 0x14]
        je L_else_0062A020
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x70]
        push esi
        push eax
        call edx
        mov ecx, dword ptr [eax]
        mov eax, dword ptr [esp + 0x10]
        mov edx, dword ptr [esi + 0x4]
        pop edi
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 0x4], edx
        pop esi
        pop ecx
        ret 0xc
    L_else_0062A020:
        mov edx, dword ptr [esi + 0x4]
        mov dword ptr [esp + 0x14], 0
        mov ecx, dword ptr [eax]
        mov eax, dword ptr [esp + 0x10]
        pop edi
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 0x4], edx
        pop esi
        pop ecx
        ret 0xc
    }
}

// [0x00649150] ExprParser::WriteMethodType<RelationshipRPROMagnet, float, {public: void __thiscall RelationshipRPROMagnet::setOrientationStrength(float), 0}>::vfunc_48 (113 bytes)
extern "C" void ext_00649050();

extern "C" __declspec(naked) void __fastcall fn_00649150(void* self, int edx_unused, void** a1, void** a2, void* a3) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0xc]
        push esi
        mov esi, dword ptr [esp + 0x14]
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [ecx]
        push edi
        mov edi, dword ptr [eax]
        mov eax, dword ptr [edx + 0x4]
        push esi
        mov dword ptr [esp + 0xc], 0
        call eax
        push ecx
        mov ecx, edi
        fstp dword ptr [esp]
        call ext_00649050
        cmp dword ptr [esi + 0x4], 0
        lea eax, [esp + 0x14]
        je L_else_00649150
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x70]
        push esi
        push eax
        call edx
        mov ecx, dword ptr [eax]
        mov eax, dword ptr [esp + 0x10]
        mov edx, dword ptr [esi + 0x4]
        pop edi
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 0x4], edx
        pop esi
        pop ecx
        ret 0xc
    L_else_00649150:
        mov edx, dword ptr [esi + 0x4]
        mov dword ptr [esp + 0x14], 0
        mov ecx, dword ptr [eax]
        mov eax, dword ptr [esp + 0x10]
        pop edi
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 0x4], edx
        pop esi
        pop ecx
        ret 0xc
    }
}

// [0x00649200] ExprParser::WriteMethodType<RelationshipRPROMagnet, float, {public: void __thiscall RelationshipRPROMagnet::setCachedDesiredPositionX(float), 0}>::vfunc_48 (113 bytes)
extern "C" void ext_00648E40();

extern "C" __declspec(naked) void __fastcall fn_00649200(void* self, int edx_unused, void** a1, void** a2, void* a3) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0xc]
        push esi
        mov esi, dword ptr [esp + 0x14]
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [ecx]
        push edi
        mov edi, dword ptr [eax]
        mov eax, dword ptr [edx + 0x4]
        push esi
        mov dword ptr [esp + 0xc], 0
        call eax
        push ecx
        mov ecx, edi
        fstp dword ptr [esp]
        call ext_00648E40
        cmp dword ptr [esi + 0x4], 0
        lea eax, [esp + 0x14]
        je L_else_00649200
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x70]
        push esi
        push eax
        call edx
        mov ecx, dword ptr [eax]
        mov eax, dword ptr [esp + 0x10]
        mov edx, dword ptr [esi + 0x4]
        pop edi
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 0x4], edx
        pop esi
        pop ecx
        ret 0xc
    L_else_00649200:
        mov edx, dword ptr [esi + 0x4]
        mov dword ptr [esp + 0x14], 0
        mov ecx, dword ptr [eax]
        mov eax, dword ptr [esp + 0x10]
        pop edi
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 0x4], edx
        pop esi
        pop ecx
        ret 0xc
    }
}

// [0x006492B0] ExprParser::WriteMethodType<RelationshipRPROMagnet, float, {public: void __thiscall RelationshipRPROMagnet::setCachedDesiredPositionY(float), 0}>::vfunc_48 (113 bytes)
extern "C" void ext_00648E50();

extern "C" __declspec(naked) void __fastcall fn_006492B0(void* self, int edx_unused, void** a1, void** a2, void* a3) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0xc]
        push esi
        mov esi, dword ptr [esp + 0x14]
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [ecx]
        push edi
        mov edi, dword ptr [eax]
        mov eax, dword ptr [edx + 0x4]
        push esi
        mov dword ptr [esp + 0xc], 0
        call eax
        push ecx
        mov ecx, edi
        fstp dword ptr [esp]
        call ext_00648E50
        cmp dword ptr [esi + 0x4], 0
        lea eax, [esp + 0x14]
        je L_else_006492B0
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x70]
        push esi
        push eax
        call edx
        mov ecx, dword ptr [eax]
        mov eax, dword ptr [esp + 0x10]
        mov edx, dword ptr [esi + 0x4]
        pop edi
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 0x4], edx
        pop esi
        pop ecx
        ret 0xc
    L_else_006492B0:
        mov edx, dword ptr [esi + 0x4]
        mov dword ptr [esp + 0x14], 0
        mov ecx, dword ptr [eax]
        mov eax, dword ptr [esp + 0x10]
        pop edi
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 0x4], edx
        pop esi
        pop ecx
        ret 0xc
    }
}
