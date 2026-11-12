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

// [0x00649360] ExprParser::WriteMethodType<RelationshipRPROMagnet, float, {public: void __thiscall RelationshipRPROMagnet::setCachedDesiredPositionZ(float), 0}>::vfunc_48 (113 bytes)
extern "C" void ext_00648E60();

extern "C" __declspec(naked) void __fastcall fn_00649360(void* self, int edx_unused, void** a1, void** a2, void* a3) {
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
        call ext_00648E60
        cmp dword ptr [esi + 0x4], 0
        lea eax, [esp + 0x14]
        je L_else_00649360
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
    L_else_00649360:
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

// [0x00649410] ExprParser::WriteMethodType<RelationshipRPROMagnet, float, {public: void __thiscall RelationshipRPROMagnet::setCachedDesiredOrientationAlpha(float), 0}>::vfunc_48 (113 bytes)
extern "C" void ext_00648E70();

extern "C" __declspec(naked) void __fastcall fn_00649410(void* self, int edx_unused, void** a1, void** a2, void* a3) {
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
        call ext_00648E70
        cmp dword ptr [esi + 0x4], 0
        lea eax, [esp + 0x14]
        je L_else_00649410
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
    L_else_00649410:
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

// [0x006494C0] ExprParser::WriteMethodType<RelationshipRPROMagnet, float, {public: void __thiscall RelationshipRPROMagnet::setCachedDesiredOrientationBeta(float), 0}>::vfunc_48 (113 bytes)
extern "C" void ext_00648E80();

extern "C" __declspec(naked) void __fastcall fn_006494C0(void* self, int edx_unused, void** a1, void** a2, void* a3) {
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
        call ext_00648E80
        cmp dword ptr [esi + 0x4], 0
        lea eax, [esp + 0x14]
        je L_else_006494C0
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
    L_else_006494C0:
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

// [0x00649570] ExprParser::WriteMethodType<RelationshipRPROMagnet, float, {public: void __thiscall RelationshipRPROMagnet::setCachedDesiredOrientationGamma(float), 0}>::vfunc_48 (113 bytes)
extern "C" void ext_00648E90();

extern "C" __declspec(naked) void __fastcall fn_00649570(void* self, int edx_unused, void** a1, void** a2, void* a3) {
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
        call ext_00648E90
        cmp dword ptr [esi + 0x4], 0
        lea eax, [esp + 0x14]
        je L_else_00649570
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
    L_else_00649570:
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

// [0x00649B70] ExprParser::WriteMethodType<RelationshipRPROMagnet, float, {public: void __thiscall RelationshipRPROMagnet::setRotationAxisX(float), 0}>::vfunc_48 (113 bytes)
extern "C" void ext_00648E00();

extern "C" __declspec(naked) void __fastcall fn_00649B70(void* self, int edx_unused, void** a1, void** a2, void* a3) {
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
        call ext_00648E00
        cmp dword ptr [esi + 0x4], 0
        lea eax, [esp + 0x14]
        je L_else_00649B70
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
    L_else_00649B70:
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

// [0x00649C20] ExprParser::WriteMethodType<RelationshipRPROMagnet, float, {public: void __thiscall RelationshipRPROMagnet::setRotationAxisY(float), 0}>::vfunc_48 (113 bytes)
extern "C" void ext_00648E10();

extern "C" __declspec(naked) void __fastcall fn_00649C20(void* self, int edx_unused, void** a1, void** a2, void* a3) {
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
        call ext_00648E10
        cmp dword ptr [esi + 0x4], 0
        lea eax, [esp + 0x14]
        je L_else_00649C20
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
    L_else_00649C20:
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

// [0x00649CD0] ExprParser::WriteMethodType<RelationshipRPROMagnet, float, {public: void __thiscall RelationshipRPROMagnet::setRotationAxisZ(float), 0}>::vfunc_48 (113 bytes)
extern "C" void ext_00648E20();

extern "C" __declspec(naked) void __fastcall fn_00649CD0(void* self, int edx_unused, void** a1, void** a2, void* a3) {
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
        call ext_00648E20
        cmp dword ptr [esi + 0x4], 0
        lea eax, [esp + 0x14]
        je L_else_00649CD0
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
    L_else_00649CD0:
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

// [0x00649DF0] ExprParser::WriteMethodType<RelationshipRPROMagnet, float, {public: void __thiscall RelationshipRPROMagnet::setPositionStrength(float), 0}>::vfunc_48 (113 bytes)
extern "C" __declspec(naked) void __fastcall fn_00649DF0(void* self, int edx_unused, void** a1, void** a2, void* a3) {
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
        call ext_00649010
        cmp dword ptr [esi + 0x4], 0
        lea eax, [esp + 0x14]
        je L_else_00649DF0
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
    L_else_00649DF0:
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

// [0x0064CA80] ExprParser::WriteMethodType<RelationshipRPROMagnet, float, {public: void __thiscall RelationshipRPROMagnet::rotateAroundAxis(float), 0}>::vfunc_48 (113 bytes)
extern "C" __declspec(naked) void __fastcall fn_0064CA80(void* self, int edx_unused, void** a1, void** a2, void* a3) {
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
        call ext_0064C950
        cmp dword ptr [esi + 0x4], 0
        lea eax, [esp + 0x14]
        je L_else_0064CA80
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
    L_else_0064CA80:
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

// [0x0064CB90] ExprParser::WriteMethodType<RelationshipRPROMagnet, float, {public: void __thiscall RelationshipRPROMagnet::rotateAroundLocalAxis(float), 0}>::vfunc_48 (113 bytes)
extern "C" __declspec(naked) void __fastcall fn_0064CB90(void* self, int edx_unused, void** a1, void** a2, void* a3) {
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
        call ext_0064CB00
        cmp dword ptr [esi + 0x4], 0
        lea eax, [esp + 0x14]
        je L_else_0064CB90
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
    L_else_0064CB90:
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

// [0x0066C350] ExprParser::WriteMethodType<NM::Vector3, float, &public: void __thiscall NM::Vector3::radRotateX(float)>::vfunc_41 (37 bytes)
extern "C" void ext_0067C3D0();

extern "C" __declspec(naked) void __fastcall fn_0066C350(void* self, void* edx_unused, void** a1, void** a2) {
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
        call ext_0067C3D0
        pop esi
        ret 0x8
    }
}

// [0x0064EB50] ExprParser::WriteMethodType<SkeletalJoint, float, {public: void __thiscall SkeletalJoint::setDesiredTwist(float), 0}>::vfunc_48 (113 bytes)
extern "C" void ext_0064DE80();

extern "C" __declspec(naked) void __fastcall fn_0064EB50(void* self, int edx_unused, void** a1, void** a2, void* a3) {
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
        call ext_0064DE80
        cmp dword ptr [esi + 0x4], 0
        lea eax, [esp + 0x14]
        je L_else_0064EB50
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
    L_else_0064EB50:
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

// [0x0064EC00] ExprParser::WriteMethodType<SkeletalJoint, float, {public: void __thiscall SkeletalJoint::setDesiredSwing1(float), 0}>::vfunc_48 (113 bytes)
extern "C" void ext_0064DEA0();

extern "C" __declspec(naked) void __fastcall fn_0064EC00(void* self, int edx_unused, void** a1, void** a2, void* a3) {
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
        call ext_0064DEA0
        cmp dword ptr [esi + 0x4], 0
        lea eax, [esp + 0x14]
        je L_else_0064EC00
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
    L_else_0064EC00:
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

// [0x0064ECB0] ExprParser::WriteMethodType<SkeletalJoint, float, {public: void __thiscall SkeletalJoint::setDesiredSwing2(float), 0}>::vfunc_48 (113 bytes)
extern "C" void ext_0064DEC0();

extern "C" __declspec(naked) void __fastcall fn_0064ECB0(void* self, int edx_unused, void** a1, void** a2, void* a3) {
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
        call ext_0064DEC0
        cmp dword ptr [esi + 0x4], 0
        lea eax, [esp + 0x14]
        je L_else_0064ECB0
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
    L_else_0064ECB0:
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

// [0x0064EE00] ExprParser::WriteMethodType<SkeletalJoint, float, {public: void __thiscall SkeletalJoint::setHardLimitRadius(float), 0}>::vfunc_48 (113 bytes)
extern "C" void ext_0064DC20();

extern "C" __declspec(naked) void __fastcall fn_0064EE00(void* self, int edx_unused, void** a1, void** a2, void* a3) {
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
        call ext_0064DC20
        cmp dword ptr [esi + 0x4], 0
        lea eax, [esp + 0x14]
        je L_else_0064EE00
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
    L_else_0064EE00:
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

// [0x0064EEB0] ExprParser::WriteMethodType<SkeletalJoint, float, {public: void __thiscall SkeletalJoint::setHardLimitTwistAngle(float), 0}>::vfunc_48 (113 bytes)
extern "C" void ext_0064DC40();

extern "C" __declspec(naked) void __fastcall fn_0064EEB0(void* self, int edx_unused, void** a1, void** a2, void* a3) {
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
        call ext_0064DC40
        cmp dword ptr [esi + 0x4], 0
        lea eax, [esp + 0x14]
        je L_else_0064EEB0
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
    L_else_0064EEB0:
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

// [0x0064EF60] ExprParser::WriteMethodType<SkeletalJoint, float, {public: void __thiscall SkeletalJoint::setHardLimitSwingAngle1(float), 0}>::vfunc_48 (113 bytes)
extern "C" void ext_0064DC60();

extern "C" __declspec(naked) void __fastcall fn_0064EF60(void* self, int edx_unused, void** a1, void** a2, void* a3) {
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
        call ext_0064DC60
        cmp dword ptr [esi + 0x4], 0
        lea eax, [esp + 0x14]
        je L_else_0064EF60
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
    L_else_0064EF60:
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

// [0x0064F010] ExprParser::WriteMethodType<SkeletalJoint, float, {public: void __thiscall SkeletalJoint::setHardLimitSwingAngle2(float), 0}>::vfunc_48 (113 bytes)
extern "C" __declspec(naked) void __fastcall fn_0064F010(void* self, int edx_unused, void** a1, void** a2, void* a3) {
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
        call ext_0064DC80
        cmp dword ptr [esi + 0x4], 0
        lea eax, [esp + 0x14]
        je L_else_0064F010
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
    L_else_0064F010:
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

// [0x0064F0C0] ExprParser::WriteMethodType<SkeletalJoint, float, {public: void __thiscall SkeletalJoint::setSoftLimitRadius(float), 0}>::vfunc_48 (113 bytes)
extern "C" __declspec(naked) void __fastcall fn_0064F0C0(void* self, int edx_unused, void** a1, void** a2, void* a3) {
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
        call ext_0064DCA0
        cmp dword ptr [esi + 0x4], 0
        lea eax, [esp + 0x14]
        je L_else_0064F0C0
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
    L_else_0064F0C0:
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

// [0x0064F170] ExprParser::WriteMethodType<SkeletalJoint, float, {public: void __thiscall SkeletalJoint::setSoftLimitTwistAngle(float), 0}>::vfunc_48 (113 bytes)
extern "C" void ext_0064DCC0();

extern "C" __declspec(naked) void __fastcall fn_0064F170(void* self, int edx_unused, void** a1, void** a2, void* a3) {
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
        call ext_0064DCC0
        cmp dword ptr [esi + 0x4], 0
        lea eax, [esp + 0x14]
        je L_else_0064F170
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
    L_else_0064F170:
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

// [0x0064F240] ExprParser::WriteMethodType<SkeletalJoint, float, {public: void __thiscall SkeletalJoint::setSoftLimitSwingAngle1(float), 0}>::vfunc_48 (113 bytes)
extern "C" void ext_0064DCE0();

extern "C" __declspec(naked) void __fastcall fn_0064F240(void* self, int edx_unused, void** a1, void** a2, void* a3) {
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
        call ext_0064DCE0
        cmp dword ptr [esi + 0x4], 0
        lea eax, [esp + 0x14]
        je L_else_0064F240
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
    L_else_0064F240:
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

// [0x0064F2F0] ExprParser::WriteMethodType<SkeletalJoint, float, {public: void __thiscall SkeletalJoint::setSoftLimitSwingAngle2(float), 0}>::vfunc_48 (113 bytes)
extern "C" void ext_0064DD00();

extern "C" __declspec(naked) void __fastcall fn_0064F2F0(void* self, int edx_unused, void** a1, void** a2, void* a3) {
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
        call ext_0064DD00
        cmp dword ptr [esi + 0x4], 0
        lea eax, [esp + 0x14]
        je L_else_0064F2F0
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
    L_else_0064F2F0:
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

// [0x0064F3A0] ExprParser::WriteMethodType<SkeletalJoint, float, {public: void __thiscall SkeletalJoint::setSoftLimitRadialStiffness(float), 0}>::vfunc_48 (113 bytes)
extern "C" void ext_0064DD20();

extern "C" __declspec(naked) void __fastcall fn_0064F3A0(void* self, int edx_unused, void** a1, void** a2, void* a3) {
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
        call ext_0064DD20
        cmp dword ptr [esi + 0x4], 0
        lea eax, [esp + 0x14]
        je L_else_0064F3A0
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
    L_else_0064F3A0:
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

// [0x0064F450] ExprParser::WriteMethodType<SkeletalJoint, float, {public: void __thiscall SkeletalJoint::setSoftLimitTwistStiffness(float), 0}>::vfunc_48 (113 bytes)
extern "C" void ext_0064DD40();

extern "C" __declspec(naked) void __fastcall fn_0064F450(void* self, int edx_unused, void** a1, void** a2, void* a3) {
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
        call ext_0064DD40
        cmp dword ptr [esi + 0x4], 0
        lea eax, [esp + 0x14]
        je L_else_0064F450
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
    L_else_0064F450:
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

// [0x0064F500] ExprParser::WriteMethodType<SkeletalJoint, float, {public: void __thiscall SkeletalJoint::setSoftLimitSwingStiffness(float), 0}>::vfunc_48 (113 bytes)
extern "C" void ext_0064DD60();

extern "C" __declspec(naked) void __fastcall fn_0064F500(void* self, int edx_unused, void** a1, void** a2, void* a3) {
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
        call ext_0064DD60
        cmp dword ptr [esi + 0x4], 0
        lea eax, [esp + 0x14]
        je L_else_0064F500
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
    L_else_0064F500:
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

// [0x0064F5B0] ExprParser::WriteMethodType<SkeletalJoint, float, {public: void __thiscall SkeletalJoint::setSoftLimitRadialDamping(float), 0}>::vfunc_48 (113 bytes)
extern "C" void ext_0064DD80();

extern "C" __declspec(naked) void __fastcall fn_0064F5B0(void* self, int edx_unused, void** a1, void** a2, void* a3) {
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
        call ext_0064DD80
        cmp dword ptr [esi + 0x4], 0
        lea eax, [esp + 0x14]
        je L_else_0064F5B0
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
    L_else_0064F5B0:
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

// [0x0064F660] ExprParser::WriteMethodType<SkeletalJoint, float, {public: void __thiscall SkeletalJoint::setSoftLimitTwistDamping(float), 0}>::vfunc_48 (113 bytes)
extern "C" void ext_0064DDA0();

extern "C" __declspec(naked) void __fastcall fn_0064F660(void* self, int edx_unused, void** a1, void** a2, void* a3) {
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
        call ext_0064DDA0
        cmp dword ptr [esi + 0x4], 0
        lea eax, [esp + 0x14]
        je L_else_0064F660
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
    L_else_0064F660:
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

// [0x0064F710] ExprParser::WriteMethodType<SkeletalJoint, float, {public: void __thiscall SkeletalJoint::setSoftLimitSwingDamping(float), 0}>::vfunc_48 (113 bytes)
extern "C" void ext_0064DDC0();

extern "C" __declspec(naked) void __fastcall fn_0064F710(void* self, int edx_unused, void** a1, void** a2, void* a3) {
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
        call ext_0064DDC0
        cmp dword ptr [esi + 0x4], 0
        lea eax, [esp + 0x14]
        je L_else_0064F710
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
    L_else_0064F710:
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

// [0x00650EF0] ExprParser::WriteMethodType<EffectorGroup, float, &[thunk]: __thiscall EffectorGroup::`vcall'{88, {flat}}>::vfunc_48 (113 bytes)
extern "C" void ext_005F35C0();

extern "C" __declspec(naked) void __fastcall fn_00650EF0(void* self, int edx_unused, void** a1, void** a2, void* a3) {
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
        call ext_005F35C0
        cmp dword ptr [esi + 0x4], 0
        lea eax, [esp + 0x14]
        je L_else_00650EF0
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
    L_else_00650EF0:
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

// [0x00650F70] ExprParser::WriteMethodType<Effector, float, &[thunk]: __thiscall EffectorBase::`vcall'{112, {flat}}>::vfunc_48 (113 bytes)
extern "C" void ext_006036B0();

extern "C" __declspec(naked) void __fastcall fn_00650F70(void* self, int edx_unused, void** a1, void** a2, void* a3) {
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
        call ext_006036B0
        cmp dword ptr [esi + 0x4], 0
        lea eax, [esp + 0x14]
        je L_else_00650F70
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
    L_else_00650F70:
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

// [0x00650FF0] ExprParser::WriteMethodType<Effector, float, &[thunk]: __thiscall Effector::`vcall'{100, {flat}}>::vfunc_48 (113 bytes)
extern "C" void ext_006036C0();

extern "C" __declspec(naked) void __fastcall fn_00650FF0(void* self, int edx_unused, void** a1, void** a2, void* a3) {
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
        call ext_006036C0
        cmp dword ptr [esi + 0x4], 0
        lea eax, [esp + 0x14]
        je L_else_00650FF0
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
    L_else_00650FF0:
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

// [0x00651070] ExprParser::WriteMethodType<EffectorGroup, float, &[thunk]: __thiscall EffectorGroup::`vcall'{92, {flat}}>::vfunc_48 (113 bytes)
extern "C" void ext_0064F8E0();

extern "C" __declspec(naked) void __fastcall fn_00651070(void* self, int edx_unused, void** a1, void** a2, void* a3) {
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
        call ext_0064F8E0
        cmp dword ptr [esi + 0x4], 0
        lea eax, [esp + 0x14]
        je L_else_00651070
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
    L_else_00651070:
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

// [0x00651120] ExprParser::WriteMethodType<SkeletalJoint, float, {[thunk]: __thiscall SkeletalJoint::`vcall'{116, {flat}}, 0}>::vfunc_48 (113 bytes)
extern "C" void ext_0064F910();

extern "C" __declspec(naked) void __fastcall fn_00651120(void* self, int edx_unused, void** a1, void** a2, void* a3) {
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
        call ext_0064F910
        cmp dword ptr [esi + 0x4], 0
        lea eax, [esp + 0x14]
        je L_else_00651120
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
    L_else_00651120:
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

// [0x006511D0] ExprParser::WriteMethodType<SkeletalJoint, float, {[thunk]: __thiscall SkeletalJoint::`vcall'{104, {flat}}, 0}>::vfunc_48 (113 bytes)
extern "C" void ext_0064F930();

extern "C" __declspec(naked) void __fastcall fn_006511D0(void* self, int edx_unused, void** a1, void** a2, void* a3) {
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
        call ext_0064F930
        cmp dword ptr [esi + 0x4], 0
        lea eax, [esp + 0x14]
        je L_else_006511D0
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
    L_else_006511D0:
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

// [0x006512B0] ExprParser::WriteMethodType<EffectorBase, float, &[thunk]: __thiscall EffectorBase::`vcall'{120, {flat}}>::vfunc_48 (113 bytes)
extern "C" void ext_0064F940();

extern "C" __declspec(naked) void __fastcall fn_006512B0(void* self, int edx_unused, void** a1, void** a2, void* a3) {
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
        call ext_0064F940
        cmp dword ptr [esi + 0x4], 0
        lea eax, [esp + 0x14]
        je L_else_006512B0
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
    L_else_006512B0:
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

// [0x00651360] ExprParser::WriteMethodType<SkeletalJoint, float, {[thunk]: __thiscall SkeletalJoint::`vcall'{108, {flat}}, 0}>::vfunc_48 (113 bytes)
extern "C" void ext_005C3640();

extern "C" __declspec(naked) void __fastcall fn_00651360(void* self, int edx_unused, void** a1, void** a2, void* a3) {
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
        call ext_005C3640
        cmp dword ptr [esi + 0x4], 0
        lea eax, [esp + 0x14]
        je L_else_00651360
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
    L_else_00651360:
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

// [0x0066C380] ExprParser::WriteMethodType<NM::Vector3, float, &public: void __thiscall NM::Vector3::radRotateX(float)>::vfunc_48 (113 bytes)
extern "C" void ext_0067C3D0();

extern "C" __declspec(naked) void __fastcall fn_0066C380(void* self, int edx_unused, void** a1, void** a2, void* a3) {
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
        call ext_0067C3D0
        cmp dword ptr [esi + 0x4], 0
        lea eax, [esp + 0x14]
        je L_else_0066C380
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
    L_else_0066C380:
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

// [0x0066C430] ExprParser::WriteMethodType<NM::Vector3, float, &public: void __thiscall NM::Vector3::radRotateY(float)>::vfunc_48 (113 bytes)
extern "C" void ext_0067C450();

extern "C" __declspec(naked) void __fastcall fn_0066C430(void* self, int edx_unused, void** a1, void** a2, void* a3) {
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
        call ext_0067C450
        cmp dword ptr [esi + 0x4], 0
        lea eax, [esp + 0x14]
        je L_else_0066C430
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
    L_else_0066C430:
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

// [0x0066C4E0] ExprParser::WriteMethodType<NM::Vector3, float, &public: void __thiscall NM::Vector3::radRotateZ(float)>::vfunc_48 (113 bytes)
extern "C" void ext_0067C4D0();

extern "C" __declspec(naked) void __fastcall fn_0066C4E0(void* self, int edx_unused, void** a1, void** a2, void* a3) {
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
        call ext_0067C4D0
        cmp dword ptr [esi + 0x4], 0
        lea eax, [esp + 0x14]
        je L_else_0066C4E0
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
    L_else_0066C4E0:
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

// [0x00603480] ExprParser::WriteMethodType<EffectorBase, bool, &public: void __thiscall EffectorBase::setEnabled(bool)>::vfunc_48 (121 bytes)
extern "C" __declspec(naked) void __fastcall fn_00603480(void* self, int edx_unused, void** a1, void** a2, void* a3) {
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
        test al, al
        mov ecx, dword ptr [edi + 0x4]
        mov edx, dword ptr [ecx]
        je L_false_00603480
        mov eax, dword ptr [edx + 0x18]
        jmp L_call_00603480
    L_false_00603480:
        mov eax, dword ptr [edx + 0x1c]
    L_call_00603480:
        call eax
        cmp dword ptr [esi + 0x4], 0
        lea eax, [esp + 0x14]
        je L_else_00603480
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
    L_else_00603480:
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

extern "C" void ext_0067A670();
extern "C" int mem_00AD9E48;
extern "C" int mem_00AD9E44;

// [0x00489440] ExprParser::WriteMethodType<NMData::DesiredPoseEventData, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, {public: void __thiscall NMData::DesiredPoseEventData::loadPoseDataFromFile(class std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &), 0}>::vfunc_40 (122 bytes)
extern "C" __declspec(naked) void __fastcall fn_00489440(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x884b9e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00AD9E48], al
        jne L_guarded
        or dword ptr [mem_00AD9E48], eax
        mov ecx, offset mem_00AD9E44
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00AD9E44], 0x0093D4FC
        mov dword ptr [eax + 0x4], offset mem_00AD9E44
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00AD9E44
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x004894C0] ExprParser::WriteMethodType<NMData::DesiredPoseEventData, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, {public: void __thiscall NMData::DesiredPoseEventData::loadPoseImport(class std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AD9E50;
extern "C" int mem_00AD9E4C;
extern "C" __declspec(naked) void __fastcall fn_004894C0(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x884bbe
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00AD9E50], al
        jne L_guarded
        or dword ptr [mem_00AD9E50], eax
        mov ecx, offset mem_00AD9E4C
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00AD9E4C], 0x0093D5D4
        mov dword ptr [eax + 0x4], offset mem_00AD9E4C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00AD9E4C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x00489580] ExprParser::WriteMethodType<NMData::DesiredPoseEventData, float, {public: void __thiscall NMData::DesiredPoseEventData::fireWithStrength(float), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AD9E58;
extern "C" int mem_00AD9E54;

extern "C" __declspec(naked) void __fastcall fn_00489580(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x884bde
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00AD9E58], al
        jne L_guarded
        or dword ptr [mem_00AD9E58], eax
        mov ecx, offset mem_00AD9E54
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00AD9E54], 0x0093D6AC
        mov dword ptr [eax + 0x4], offset mem_00AD9E54
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00AD9E54
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x00489600] ExprParser::WriteMethodType<NMData::DesiredPoseEventData, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, {public: void __thiscall NMData::DesiredPoseEventData::setCharacterNameFromFSM(class std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AD9E60;
extern "C" int mem_00AD9E5C;

extern "C" __declspec(naked) void __fastcall fn_00489600(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x884bfe
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00AD9E60], al
        jne L_guarded
        or dword ptr [mem_00AD9E60], eax
        mov ecx, offset mem_00AD9E5C
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00AD9E5C], 0x0093D784
        mov dword ptr [eax + 0x4], offset mem_00AD9E5C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00AD9E5C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x00489680] ExprParser::WriteMethodType<NMData::DesiredPoseEventData, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, {public: void __thiscall NMData::DesiredPoseEventData::setStrengthFromFSM(class std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AD9E68;
extern "C" int mem_00AD9E64;

extern "C" __declspec(naked) void __fastcall fn_00489680(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x884c1e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00AD9E68], al
        jne L_guarded
        or dword ptr [mem_00AD9E68], eax
        mov ecx, offset mem_00AD9E64
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00AD9E64], 0x0093D85C
        mov dword ptr [eax + 0x4], offset mem_00AD9E64
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00AD9E64
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x00489700] ExprParser::WriteMethodType<NMData::DesiredPoseEventData, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, {public: void __thiscall NMData::DesiredPoseEventData::setRootFromFSM(class std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AD9E70;
extern "C" int mem_00AD9E6C;

extern "C" __declspec(naked) void __fastcall fn_00489700(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x884c3e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00AD9E70], al
        jne L_guarded
        or dword ptr [mem_00AD9E70], eax
        mov ecx, offset mem_00AD9E6C
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00AD9E6C], 0x0093D934
        mov dword ptr [eax + 0x4], offset mem_00AD9E6C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00AD9E6C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x00489780] ExprParser::WriteMethodType<NMData::DesiredPoseEventData, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, {public: void __thiscall NMData::DesiredPoseEventData::addJointWithChildren(class std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AD9E78;
extern "C" int mem_00AD9E74;

extern "C" __declspec(naked) void __fastcall fn_00489780(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x884c5e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00AD9E78], al
        jne L_guarded
        or dword ptr [mem_00AD9E78], eax
        mov ecx, offset mem_00AD9E74
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00AD9E74], 0x0093DA0C
        mov dword ptr [eax + 0x4], offset mem_00AD9E74
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00AD9E74
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x00489800] ExprParser::WriteMethodType<NMData::DesiredPoseEventData, float, {public: void __thiscall NMData::DesiredPoseEventData::setEntryBlendPeriodFromFSM(float), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AD9E80;
extern "C" int mem_00AD9E7C;

extern "C" __declspec(naked) void __fastcall fn_00489800(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x884c7e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00AD9E80], al
        jne L_guarded
        or dword ptr [mem_00AD9E80], eax
        mov ecx, offset mem_00AD9E7C
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00AD9E7C], 0x0093DAE4
        mov dword ptr [eax + 0x4], offset mem_00AD9E7C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00AD9E7C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x004CB480] ExprParser::WriteMethodType<NMData::MetaBodyConstraintData, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, {public: void __thiscall NMData::MetaBodyConstraintData::setLockTypeString(class std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AE44D4;
extern "C" int mem_00AE44D0;

extern "C" __declspec(naked) void __fastcall fn_004CB480(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x88c14e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00AE44D4], al
        jne L_guarded
        or dword ptr [mem_00AE44D4], eax
        mov ecx, offset mem_00AE44D0
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00AE44D0], 0x0094682c
        mov dword ptr [eax + 0x4], offset mem_00AE44D0
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00AE44D0
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x004CB500] ExprParser::WriteMethodType<NMData::MetaBodyConstraintData, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, {public: void __thiscall NMData::MetaBodyConstraintData::addMetaBodyFromFSM(class std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AE44DC;
extern "C" int mem_00AE44D8;

extern "C" __declspec(naked) void __fastcall fn_004CB500(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x88c16e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00AE44DC], al
        jne L_guarded
        or dword ptr [mem_00AE44DC], eax
        mov ecx, offset mem_00AE44D8
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00AE44D8], 0x00946904
        mov dword ptr [eax + 0x4], offset mem_00AE44D8
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00AE44D8
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x00500290] ExprParser::WriteMethodType<EvolveEngine, float, {private: void __thiscall EvolveEngine::stopWithFitness(float), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00AEB2E0;
extern "C" int mem_00AEB2DC;

extern "C" __declspec(naked) void __fastcall fn_00500290(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x89133e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00AEB2E0], al
        jne L_guarded
        or dword ptr [mem_00AEB2E0], eax
        mov ecx, offset mem_00AEB2DC
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00AEB2DC], 0x0094ecdc
        mov dword ptr [eax + 0x4], offset mem_00AEB2DC
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00AEB2DC
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x005956F0] ExprParser::WriteMethodType<World, float, {private: void __thiscall World::setGravity(float), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B413C0;
extern "C" int mem_00B413BC;

extern "C" __declspec(naked) void __fastcall fn_005956F0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8a0bae
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B413C0], al
        jne L_guarded
        or dword ptr [mem_00B413C0], eax
        mov ecx, offset mem_00B413BC
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B413BC], 0x0095d55c
        mov dword ptr [eax + 0x4], offset mem_00B413BC
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B413BC
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x00595770] ExprParser::WriteMethodType<World, float, {private: void __thiscall World::setFriction(float), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B413C8;
extern "C" int mem_00B413C4;

extern "C" __declspec(naked) void __fastcall fn_00595770(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8a0bce
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B413C8], al
        jne L_guarded
        or dword ptr [mem_00B413C8], eax
        mov ecx, offset mem_00B413C4
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B413C4], 0x0095d70c
        mov dword ptr [eax + 0x4], offset mem_00B413C4
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B413C4
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

extern "C" void ext_0067A670();
extern "C" int mem_00B414B0;
extern "C" int mem_00B414AC;

// [0x0059F6C0] ExprParser::WriteMethodType<NMData::CharacterData, ValuePtr const &, {public: void __thiscall NMData::CharacterData::setPoseFromFSM(class ValuePtr const &), 0}>::vfunc_40 (122 bytes)
extern "C" __declspec(naked) void __fastcall fn_0059F6C0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8a169e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B414B0], al
        jne L_guarded
        or dword ptr [mem_00B414B0], eax
        mov ecx, offset mem_00B414AC
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B414AC], 0x0095e1d4
        mov dword ptr [eax + 0x4], offset mem_00B414AC
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B414AC
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x0059F740] ExprParser::WriteMethodType<NMData::CharacterData, int, {public: void __thiscall NMData::CharacterData::setPhysicsLevelFromFSM(int), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B414B8;
extern "C" int mem_00B414B4;

extern "C" __declspec(naked) void __fastcall fn_0059F740(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8a16be
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B414B8], al
        jne L_guarded
        or dword ptr [mem_00B414B8], eax
        mov ecx, offset mem_00B414B4
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B414B4], 0x0095e2ac
        mov dword ptr [eax + 0x4], offset mem_00B414B4
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B414B4
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x005B7490] ExprParser::WriteMethodType<NMData::MetaBodyData, NM::Vector3 const &, {public: void __thiscall NMData::MetaBodyData::applyImpulseViaVelocity(class NM::Vector3 const &), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B43C68;
extern "C" int mem_00B43C64;

extern "C" __declspec(naked) void __fastcall fn_005B7490(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8a3a5e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B43C68], al
        jne L_guarded
        or dword ptr [mem_00B43C68], eax
        mov ecx, offset mem_00B43C64
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B43C64], 0x00960bdc
        mov dword ptr [eax + 0x4], offset mem_00B43C64
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B43C64
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x005B7BC0] ExprParser::WriteMethodType<NMData::MetaBodyData, NM::Vector3 const &, {public: void __thiscall NMData::MetaBodyData::addForce(class NM::Vector3 const &), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B43C70;
extern "C" int mem_00B43C6C;

extern "C" __declspec(naked) void __fastcall fn_005B7BC0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8a3a7e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B43C70], al
        jne L_guarded
        or dword ptr [mem_00B43C70], eax
        mov ecx, offset mem_00B43C6C
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B43C6C], 0x0096144c
        mov dword ptr [eax + 0x4], offset mem_00B43C6C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B43C6C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x005B7CE0] ExprParser::WriteMethodType<NMData::MetaBodyData, NM::Vector3 const &, {public: void __thiscall NMData::MetaBodyData::addTorque(class NM::Vector3 const &), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B43C78;
extern "C" int mem_00B43C74;

extern "C" __declspec(naked) void __fastcall fn_005B7CE0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8a3a9e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B43C78], al
        jne L_guarded
        or dword ptr [mem_00B43C78], eax
        mov ecx, offset mem_00B43C74
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B43C74], 0x009615fc
        mov dword ptr [eax + 0x4], offset mem_00B43C74
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B43C74
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x005B7E00] ExprParser::WriteMethodType<NMData::MetaBodyData, NM::Vector3 const &, {public: void __thiscall NMData::MetaBodyData::addImpulse(class NM::Vector3 const &), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B43C80;
extern "C" int mem_00B43C7C;

extern "C" __declspec(naked) void __fastcall fn_005B7E00(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8a3abe
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B43C80], al
        jne L_guarded
        or dword ptr [mem_00B43C80], eax
        mov ecx, offset mem_00B43C7C
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B43C7C], 0x009617ac
        mov dword ptr [eax + 0x4], offset mem_00B43C7C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B43C7C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x005C5F30] ExprParser::WriteMethodType<NMData::CollisionModelDataBase, NM::Vector3 const &, {protected: void __thiscall NMData::CollisionModelDataBase::addForce(class NM::Vector3 const &), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B4442C;
extern "C" int mem_00B44428;

extern "C" __declspec(naked) void __fastcall fn_005C5F30(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8a460e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B4442C], al
        jne L_guarded
        or dword ptr [mem_00B4442C], eax
        mov ecx, offset mem_00B44428
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B44428], 0x00963eec
        mov dword ptr [eax + 0x4], offset mem_00B44428
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B44428
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x005C5FB0] ExprParser::WriteMethodType<NMData::CollisionModelDataBase, NM::Vector3 const &, {protected: void __thiscall NMData::CollisionModelDataBase::addTorque(class NM::Vector3 const &), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B44434;
extern "C" int mem_00B44430;

extern "C" __declspec(naked) void __fastcall fn_005C5FB0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8a462e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B44434], al
        jne L_guarded
        or dword ptr [mem_00B44434], eax
        mov ecx, offset mem_00B44430
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B44430], 0x0096409c
        mov dword ptr [eax + 0x4], offset mem_00B44430
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B44430
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x005C6030] ExprParser::WriteMethodType<NMData::CollisionModelDataBase, NM::Vector3 const &, {protected: void __thiscall NMData::CollisionModelDataBase::addImpulse(class NM::Vector3 const &), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B4443C;
extern "C" int mem_00B44438;

extern "C" __declspec(naked) void __fastcall fn_005C6030(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8a464e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B4443C], al
        jne L_guarded
        or dword ptr [mem_00B4443C], eax
        mov ecx, offset mem_00B44438
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B44438], 0x0096424c
        mov dword ptr [eax + 0x4], offset mem_00B44438
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B44438
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x005F3A70] ExprParser::WriteMethodType<EffectorGroup, float, &public: void __thiscall EffectorGroup::setForceCaps(float)>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B46830;
extern "C" int mem_00B4682C;

extern "C" __declspec(naked) void __fastcall fn_005F3A70(void* self, int edx_unused, float a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8a704e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B46830], al
        jne L_guarded
        or dword ptr [mem_00B46830], eax
        mov ecx, offset mem_00B4682C
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B4682C], 0x0096c554
        mov dword ptr [eax + 0x4], offset mem_00B4682C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B4682C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x005F3AF0] ExprParser::WriteMethodType<EffectorGroup, float, &public: void __thiscall EffectorGroup::setGradientCaps(float)>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B46838;
extern "C" int mem_00B46834;

extern "C" __declspec(naked) void __fastcall fn_005F3AF0(void* self, int edx_unused, float a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8a706e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B46838], al
        jne L_guarded
        or dword ptr [mem_00B46838], eax
        mov ecx, offset mem_00B46834
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B46834], 0x0096c62c
        mov dword ptr [eax + 0x4], offset mem_00B46834
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B46834
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x005F3B70] ExprParser::WriteMethodType<EffectorGroup, float, &public: void __thiscall EffectorGroup::setGradients(float)>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B46840;
extern "C" int mem_00B4683C;

extern "C" __declspec(naked) void __fastcall fn_005F3B70(void* self, int edx_unused, float a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8a708e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B46840], al
        jne L_guarded
        or dword ptr [mem_00B46840], eax
        mov ecx, offset mem_00B4683C
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B4683C], 0x0096c704
        mov dword ptr [eax + 0x4], offset mem_00B4683C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B4683C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x005F3BF0] ExprParser::WriteMethodType<EffectorGroup, float, &public: void __thiscall EffectorGroup::setAll(float)>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B46848;
extern "C" int mem_00B46844;

extern "C" __declspec(naked) void __fastcall fn_005F3BF0(void* self, int edx_unused, float a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8a70ae
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B46848], al
        jne L_guarded
        or dword ptr [mem_00B46848], eax
        mov ecx, offset mem_00B46844
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B46844], 0x0096c7dc
        mov dword ptr [eax + 0x4], offset mem_00B46844
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B46844
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x005F3C70] ExprParser::WriteMethodType<EffectorGroup, float, &[thunk]: __thiscall EffectorGroup::`vcall'{88, {flat}}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B46850;
extern "C" int mem_00B4684C;

extern "C" __declspec(naked) void __fastcall fn_005F3C70(void* self, int edx_unused, float a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8a70ce
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B46850], al
        jne L_guarded
        or dword ptr [mem_00B46850], eax
        mov ecx, offset mem_00B4684C
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B4684C], 0x0096c8b4
        mov dword ptr [eax + 0x4], offset mem_00B4684C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B4684C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x005F3CF0] ExprParser::WriteMethodType<EffectorGroup, float, &[thunk]: __thiscall EffectorGroup::`vcall'{92, {flat}}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B46858;
extern "C" int mem_00B46854;

extern "C" __declspec(naked) void __fastcall fn_005F3CF0(void* self, int edx_unused, float a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8a70ee
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B46858], al
        jne L_guarded
        or dword ptr [mem_00B46858], eax
        mov ecx, offset mem_00B46854
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B46854], 0x0096c98c
        mov dword ptr [eax + 0x4], offset mem_00B46854
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B46854
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x005F3D70] ExprParser::WriteMethodType<EffectorGroup, float, &[thunk]: __thiscall EffectorGroup::`vcall'{96, {flat}}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B46860;
extern "C" int mem_00B4685C;

extern "C" __declspec(naked) void __fastcall fn_005F3D70(void* self, int edx_unused, float a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8a710e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B46860], al
        jne L_guarded
        or dword ptr [mem_00B46860], eax
        mov ecx, offset mem_00B4685C
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B4685C], 0x0096ca64
        mov dword ptr [eax + 0x4], offset mem_00B4685C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B4685C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x005F3DF0] ExprParser::WriteMethodType<EffectorGroup, float, &[thunk]: __thiscall EffectorGroup::`vcall'{84, {flat}}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B46868;
extern "C" int mem_00B46864;

extern "C" __declspec(naked) void __fastcall fn_005F3DF0(void* self, int edx_unused, float a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8a712e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B46868], al
        jne L_guarded
        or dword ptr [mem_00B46868], eax
        mov ecx, offset mem_00B46864
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B46864], 0x0096cb3c
        mov dword ptr [eax + 0x4], offset mem_00B46864
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B46864
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x006077D0] ExprParser::WriteMethodType<EffectorBase, bool, &[thunk]: __thiscall EffectorBase::`vcall'{68, {flat}}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B477A0;
extern "C" int mem_00B4779C;

extern "C" __declspec(naked) void __fastcall fn_006077D0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8a800e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B477A0], al
        jne L_guarded
        or dword ptr [mem_00B477A0], eax
        mov ecx, offset mem_00B4779C
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B4779C], 0x009705dc
        mov dword ptr [eax + 0x4], offset mem_00B4779C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B4779C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x00607850] ExprParser::WriteMethodType<EffectorBase, bool, &public: void __thiscall EffectorBase::setEnabled(bool)>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B477A8;
extern "C" int mem_00B477A4;

extern "C" __declspec(naked) void __fastcall fn_00607850(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8a802e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B477A8], al
        jne L_guarded
        or dword ptr [mem_00B477A8], eax
        mov ecx, offset mem_00B477A4
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B477A4], 0x009706b4
        mov dword ptr [eax + 0x4], offset mem_00B477A4
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B477A4
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x006078D0] ExprParser::WriteMethodType<EffectorBase, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, &[thunk]: __thiscall EffectorBase::`vcall'{64, {flat}}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B477B0;
extern "C" int mem_00B477AC;

extern "C" __declspec(naked) void __fastcall fn_006078D0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8a804e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B477B0], al
        jne L_guarded
        or dword ptr [mem_00B477B0], eax
        mov ecx, offset mem_00B477AC
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B477AC], 0x0097078c
        mov dword ptr [eax + 0x4], offset mem_00B477AC
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B477AC
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x00607950] ExprParser::WriteMethodType<EffectorBase, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, &[thunk]: __thiscall EffectorBase::`vcall'{60, {flat}}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B477B8;
extern "C" int mem_00B477B4;

extern "C" __declspec(naked) void __fastcall fn_00607950(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8a806e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B477B8], al
        jne L_guarded
        or dword ptr [mem_00B477B8], eax
        mov ecx, offset mem_00B477B4
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B477B4], 0x00970864
        mov dword ptr [eax + 0x4], offset mem_00B477B4
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B477B4
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x006079D0] ExprParser::WriteMethodType<EffectorBase, NM::Vector4 const &, &[thunk]: __thiscall EffectorBase::`vcall'{76, {flat}}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B477C0;
extern "C" int mem_00B477BC;

extern "C" __declspec(naked) void __fastcall fn_006079D0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8a808e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B477C0], al
        jne L_guarded
        or dword ptr [mem_00B477C0], eax
        mov ecx, offset mem_00B477BC
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B477BC], 0x0097093c
        mov dword ptr [eax + 0x4], offset mem_00B477BC
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B477BC
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x00607A50] ExprParser::WriteMethodType<EffectorBase, NM::Vector4 const &, &[thunk]: __thiscall EffectorBase::`vcall'{80, {flat}}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B477C8;
extern "C" int mem_00B477C4;

extern "C" __declspec(naked) void __fastcall fn_00607A50(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8a80ae
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B477C8], al
        jne L_guarded
        or dword ptr [mem_00B477C8], eax
        mov ecx, offset mem_00B477C4
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B477C4], 0x00970a14
        mov dword ptr [eax + 0x4], offset mem_00B477C4
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B477C4
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x00607AD0] ExprParser::WriteMethodType<EffectorBase, float, &[thunk]: __thiscall EffectorBase::`vcall'{112, {flat}}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B477D0;
extern "C" int mem_00B477CC;

extern "C" __declspec(naked) void __fastcall fn_00607AD0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8a80ce
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B477D0], al
        jne L_guarded
        or dword ptr [mem_00B477D0], eax
        mov ecx, offset mem_00B477CC
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B477CC], 0x00970aec
        mov dword ptr [eax + 0x4], offset mem_00B477CC
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B477CC
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x00607B50] ExprParser::WriteMethodType<EffectorBase, float, &[thunk]: __thiscall EffectorBase::`vcall'{120, {flat}}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B477D8;
extern "C" int mem_00B477D4;

extern "C" __declspec(naked) void __fastcall fn_00607B50(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8a80ee
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B477D8], al
        jne L_guarded
        or dword ptr [mem_00B477D8], eax
        mov ecx, offset mem_00B477D4
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B477D4], 0x00970bc4
        mov dword ptr [eax + 0x4], offset mem_00B477D4
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B477D4
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x00607BD0] ExprParser::WriteMethodType<Effector, float, &[thunk]: __thiscall EffectorBase::`vcall'{112, {flat}}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B477E0;
extern "C" int mem_00B477DC;

extern "C" __declspec(naked) void __fastcall fn_00607BD0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8a810e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B477E0], al
        jne L_guarded
        or dword ptr [mem_00B477E0], eax
        mov ecx, offset mem_00B477DC
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B477DC], 0x00970c9c
        mov dword ptr [eax + 0x4], offset mem_00B477DC
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B477DC
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x00607C50] ExprParser::WriteMethodType<Effector, float, &[thunk]: __thiscall Effector::`vcall'{100, {flat}}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B477E8;
extern "C" int mem_00B477E4;

extern "C" __declspec(naked) void __fastcall fn_00607C50(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8a812e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B477E8], al
        jne L_guarded
        or dword ptr [mem_00B477E8], eax
        mov ecx, offset mem_00B477E4
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B477E4], 0x00970d74
        mov dword ptr [eax + 0x4], offset mem_00B477E4
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B477E4
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x00607CD0] ExprParser::WriteMethodType<Effector, float, &public: void __thiscall Effector::setDesiredVelocity(float)>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B477F0;
extern "C" int mem_00B477EC;

extern "C" __declspec(naked) void __fastcall fn_00607CD0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8a814e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B477F0], al
        jne L_guarded
        or dword ptr [mem_00B477F0], eax
        mov ecx, offset mem_00B477EC
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B477EC], 0x00970e4c
        mov dword ptr [eax + 0x4], offset mem_00B477EC
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B477EC
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x00627A20] ExprParser::WriteMethodType<Sensors::SensorAbsoluteOrientation, int, &public: void __thiscall Sensors::SensorAbsoluteOrientation::setReference(int)>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B4D7C8;
extern "C" int mem_00B4D7C4;

extern "C" __declspec(naked) void __fastcall fn_00627A20(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8ab8de
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B4D7C8], al
        jne L_guarded
        or dword ptr [mem_00B4D7C8], eax
        mov ecx, offset mem_00B4D7C4
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B4D7C4], 0x00977dec
        mov dword ptr [eax + 0x4], offset mem_00B4D7C4
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B4D7C4
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x0062A1D0] ExprParser::WriteMethodType<Sensors::SensorRelativeTime, float, &public: void __thiscall Sensors::SensorRelativeTime::resetTime(float)>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B515C8;
extern "C" int mem_00B515C4;

extern "C" __declspec(naked) void __fastcall fn_0062A1D0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8ad2fe
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B515C8], al
        jne L_guarded
        or dword ptr [mem_00B515C8], eax
        mov ecx, offset mem_00B515C4
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B515C4], 0x0097887c
        mov dword ptr [eax + 0x4], offset mem_00B515C4
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B515C4
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x0062A250] ExprParser::WriteMethodType<Sensors::SensorMetaBodyRelativeTime, float, &public: void __thiscall Sensors::SensorMetaBodyRelativeTime::resetTime(float)>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B515D0;
extern "C" int mem_00B515CC;

extern "C" __declspec(naked) void __fastcall fn_0062A250(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8ad31e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B515D0], al
        jne L_guarded
        or dword ptr [mem_00B515D0], eax
        mov ecx, offset mem_00B515CC
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B515CC], 0x00978954
        mov dword ptr [eax + 0x4], offset mem_00B515CC
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B515CC
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x0062A750] ExprParser::WriteMethodType<Sensors::SensorIntegral, int, &public: void __thiscall Sensors::SensorIntegral::resize(int)>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B51C28;
extern "C" int mem_00B51C24;

extern "C" __declspec(naked) void __fastcall fn_0062A750(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8ad64e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B51C28], al
        jne L_guarded
        or dword ptr [mem_00B51C28], eax
        mov ecx, offset mem_00B51C24
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B51C24], 0x00978db4
        mov dword ptr [eax + 0x4], offset mem_00B51C24
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B51C24
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x0062A7D0] ExprParser::WriteMethodType<Sensors::SensorIntegral, float, &public: void __thiscall Sensors::SensorIntegral::insert(float)>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B51C30;
extern "C" int mem_00B51C2C;

extern "C" __declspec(naked) void __fastcall fn_0062A7D0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8ad66e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B51C30], al
        jne L_guarded
        or dword ptr [mem_00B51C30], eax
        mov ecx, offset mem_00B51C2C
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B51C2C], 0x00978e8c
        mov dword ptr [eax + 0x4], offset mem_00B51C2C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B51C2C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x0063AF70] ExprParser::WriteMethodType<EffectorSkeletal, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, &[thunk]: __thiscall EffectorSkeletal::`vcall'{60, {flat}}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B52A98;
extern "C" int mem_00B52A94;

extern "C" __declspec(naked) void __fastcall fn_0063AF70(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8ae22e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B52A98], al
        jne L_guarded
        or dword ptr [mem_00B52A98], eax
        mov ecx, offset mem_00B52A94
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B52A94], 0x0097a1c4
        mov dword ptr [eax + 0x4], offset mem_00B52A94
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B52A94
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x0063CC60] ExprParser::WriteMethodType<EffectorWithMemory, float, &public: void __thiscall EffectorWithMemory::setIntegralGradient(float)>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B53188;
extern "C" int mem_00B53184;

extern "C" __declspec(naked) void __fastcall fn_0063CC60(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8ae91e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B53188], al
        jne L_guarded
        or dword ptr [mem_00B53188], eax
        mov ecx, offset mem_00B53184
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B53184], 0x0097c91c
        mov dword ptr [eax + 0x4], offset mem_00B53184
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B53184
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x0064C100] ExprParser::WriteMethodType<RelationshipRPROMagnet, float, {public: void __thiscall RelationshipRPROMagnet::setRotationAxisX(float), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B55840;
extern "C" int mem_00B5583C;

extern "C" __declspec(naked) void __fastcall fn_0064C100(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8b023e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B55840], al
        jne L_guarded
        or dword ptr [mem_00B55840], eax
        mov ecx, offset mem_00B5583C
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B5583C], 0x0097f3f4
        mov dword ptr [eax + 0x4], offset mem_00B5583C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B5583C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x0064C180] ExprParser::WriteMethodType<RelationshipRPROMagnet, float, {public: void __thiscall RelationshipRPROMagnet::setRotationAxisY(float), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B55848;
extern "C" int mem_00B55844;

extern "C" __declspec(naked) void __fastcall fn_0064C180(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8b025e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B55848], al
        jne L_guarded
        or dword ptr [mem_00B55848], eax
        mov ecx, offset mem_00B55844
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B55844], 0x0097f4cc
        mov dword ptr [eax + 0x4], offset mem_00B55844
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B55844
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x0064C200] ExprParser::WriteMethodType<RelationshipRPROMagnet, float, {public: void __thiscall RelationshipRPROMagnet::setRotationAxisZ(float), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B55850;
extern "C" int mem_00B5584C;

extern "C" __declspec(naked) void __fastcall fn_0064C200(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8b027e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B55850], al
        jne L_guarded
        or dword ptr [mem_00B55850], eax
        mov ecx, offset mem_00B5584C
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B5584C], 0x0097f5a4
        mov dword ptr [eax + 0x4], offset mem_00B5584C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B5584C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x0064C280] ExprParser::WriteMethodType<RelationshipRPROMagnet, float, {public: void __thiscall RelationshipRPROMagnet::rotateAroundAxis(float), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B55858;
extern "C" int mem_00B55854;

extern "C" __declspec(naked) void __fastcall fn_0064C280(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8b029e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B55858], al
        jne L_guarded
        or dword ptr [mem_00B55858], eax
        mov ecx, offset mem_00B55854
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B55854], 0x0097f67c
        mov dword ptr [eax + 0x4], offset mem_00B55854
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B55854
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x0064C300] ExprParser::WriteMethodType<RelationshipRPROMagnet, float, {public: void __thiscall RelationshipRPROMagnet::rotateAroundLocalAxis(float), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B55860;
extern "C" int mem_00B5585C;

extern "C" __declspec(naked) void __fastcall fn_0064C300(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8b02be
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B55860], al
        jne L_guarded
        or dword ptr [mem_00B55860], eax
        mov ecx, offset mem_00B5585C
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B5585C], 0x0097f754
        mov dword ptr [eax + 0x4], offset mem_00B5585C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B5585C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x0064C380] ExprParser::WriteMethodType<RelationshipRPROMagnet, bool, {public: void __thiscall RelationshipRPROMagnet::setRotationMode(bool), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B55868;
extern "C" int mem_00B55864;

extern "C" __declspec(naked) void __fastcall fn_0064C380(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8b02de
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B55868], al
        jne L_guarded
        or dword ptr [mem_00B55868], eax
        mov ecx, offset mem_00B55864
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B55864], 0x0097f82c
        mov dword ptr [eax + 0x4], offset mem_00B55864
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B55864
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x0064C400] ExprParser::WriteMethodType<RelationshipRPROMagnet, float, {public: void __thiscall RelationshipRPROMagnet::setPositionStrength(float), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B55870;
extern "C" int mem_00B5586C;

extern "C" __declspec(naked) void __fastcall fn_0064C400(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8b02fe
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B55870], al
        jne L_guarded
        or dword ptr [mem_00B55870], eax
        mov ecx, offset mem_00B5586C
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B5586C], 0x0097f904
        mov dword ptr [eax + 0x4], offset mem_00B5586C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B5586C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x0064C480] ExprParser::WriteMethodType<RelationshipRPROMagnet, float, {public: void __thiscall RelationshipRPROMagnet::setOrientationStrength(float), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B55878;
extern "C" int mem_00B55874;

extern "C" __declspec(naked) void __fastcall fn_0064C480(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8b031e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B55878], al
        jne L_guarded
        or dword ptr [mem_00B55878], eax
        mov ecx, offset mem_00B55874
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B55874], 0x0097f9dc
        mov dword ptr [eax + 0x4], offset mem_00B55874
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B55874
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x0064C500] ExprParser::WriteMethodType<RelationshipRPROMagnet, float, {public: void __thiscall RelationshipRPROMagnet::setCachedDesiredPositionX(float), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B55880;
extern "C" int mem_00B5587C;

extern "C" __declspec(naked) void __fastcall fn_0064C500(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8b033e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B55880], al
        jne L_guarded
        or dword ptr [mem_00B55880], eax
        mov ecx, offset mem_00B5587C
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B5587C], 0x0097fab4
        mov dword ptr [eax + 0x4], offset mem_00B5587C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B5587C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x0064C580] ExprParser::WriteMethodType<RelationshipRPROMagnet, float, {public: void __thiscall RelationshipRPROMagnet::setCachedDesiredPositionY(float), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B55888;
extern "C" int mem_00B55884;

extern "C" __declspec(naked) void __fastcall fn_0064C580(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8b035e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B55888], al
        jne L_guarded
        or dword ptr [mem_00B55888], eax
        mov ecx, offset mem_00B55884
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B55884], 0x0097fb8c
        mov dword ptr [eax + 0x4], offset mem_00B55884
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B55884
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x0064C600] ExprParser::WriteMethodType<RelationshipRPROMagnet, float, {public: void __thiscall RelationshipRPROMagnet::setCachedDesiredPositionZ(float), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B55890;
extern "C" int mem_00B5588C;

extern "C" __declspec(naked) void __fastcall fn_0064C600(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8b037e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B55890], al
        jne L_guarded
        or dword ptr [mem_00B55890], eax
        mov ecx, offset mem_00B5588C
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B5588C], 0x0097fc64
        mov dword ptr [eax + 0x4], offset mem_00B5588C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B5588C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x0064C680] ExprParser::WriteMethodType<RelationshipRPROMagnet, float, {public: void __thiscall RelationshipRPROMagnet::setCachedDesiredOrientationAlpha(float), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B55898;
extern "C" int mem_00B55894;

extern "C" __declspec(naked) void __fastcall fn_0064C680(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8b039e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B55898], al
        jne L_guarded
        or dword ptr [mem_00B55898], eax
        mov ecx, offset mem_00B55894
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B55894], 0x0097fd3c
        mov dword ptr [eax + 0x4], offset mem_00B55894
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B55894
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x0064C700] ExprParser::WriteMethodType<RelationshipRPROMagnet, float, {public: void __thiscall RelationshipRPROMagnet::setCachedDesiredOrientationBeta(float), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B558A0;
extern "C" int mem_00B5589C;

extern "C" __declspec(naked) void __fastcall fn_0064C700(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8b03be
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B558A0], al
        jne L_guarded
        or dword ptr [mem_00B558A0], eax
        mov ecx, offset mem_00B5589C
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B5589C], 0x0097fe14
        mov dword ptr [eax + 0x4], offset mem_00B5589C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B5589C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x0064C780] ExprParser::WriteMethodType<RelationshipRPROMagnet, float, {public: void __thiscall RelationshipRPROMagnet::setCachedDesiredOrientationGamma(float), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B558A8;
extern "C" int mem_00B558A4;

extern "C" __declspec(naked) void __fastcall fn_0064C780(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8b03de
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B558A8], al
        jne L_guarded
        or dword ptr [mem_00B558A8], eax
        mov ecx, offset mem_00B558A4
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B558A4], 0x0097feec
        mov dword ptr [eax + 0x4], offset mem_00B558A4
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B558A4
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x0064C800] ExprParser::WriteMethodType<RelationshipRPROMagnet, bool, {public: void __thiscall RelationshipRPROMagnet::applyCachedSettings(bool), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B558B0;
extern "C" int mem_00B558AC;

extern "C" __declspec(naked) void __fastcall fn_0064C800(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8b03fe
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B558B0], al
        jne L_guarded
        or dword ptr [mem_00B558B0], eax
        mov ecx, offset mem_00B558AC
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B558AC], 0x0097ffc4
        mov dword ptr [eax + 0x4], offset mem_00B558AC
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B558AC
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x0064C880] ExprParser::WriteMethodType<RelationshipRPROMagnet, bool, {public: void __thiscall RelationshipRPROMagnet::setEnabled(bool), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B558B8;
extern "C" int mem_00B558B4;

extern "C" __declspec(naked) void __fastcall fn_0064C880(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8b041e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B558B8], al
        jne L_guarded
        or dword ptr [mem_00B558B8], eax
        mov ecx, offset mem_00B558B4
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B558B4], 0x0098009c
        mov dword ptr [eax + 0x4], offset mem_00B558B4
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B558B4
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x00655330] ExprParser::WriteMethodType<SkeletalJoint, NM::Vector3 const &, {public: void __thiscall SkeletalJoint::setDesiredTwistAndSwingAngles(class NM::Vector3 const &), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B56048;
extern "C" int mem_00B56044;

extern "C" __declspec(naked) void __fastcall fn_00655330(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8b0c3e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B56048], al
        jne L_guarded
        or dword ptr [mem_00B56048], eax
        mov ecx, offset mem_00B56044
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B56044], 0x0098274c
        mov dword ptr [eax + 0x4], offset mem_00B56044
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B56044
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x006553B0] ExprParser::WriteMethodType<SkeletalJoint, float, {public: void __thiscall SkeletalJoint::setDesiredTwist(float), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B56050;
extern "C" int mem_00B5604C;

extern "C" __declspec(naked) void __fastcall fn_006553B0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8b0c5e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B56050], al
        jne L_guarded
        or dword ptr [mem_00B56050], eax
        mov ecx, offset mem_00B5604C
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B5604C], 0x00982824
        mov dword ptr [eax + 0x4], offset mem_00B5604C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B5604C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x00655430] ExprParser::WriteMethodType<SkeletalJoint, float, {public: void __thiscall SkeletalJoint::setDesiredSwing1(float), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B56058;
extern "C" int mem_00B56054;

extern "C" __declspec(naked) void __fastcall fn_00655430(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8b0c7e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B56058], al
        jne L_guarded
        or dword ptr [mem_00B56058], eax
        mov ecx, offset mem_00B56054
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B56054], 0x009828fc
        mov dword ptr [eax + 0x4], offset mem_00B56054
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B56054
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

extern "C" int mem_00B56060;
extern "C" int mem_00B5605C;

// [0x006554B0] ExprParser::WriteMethodType<SkeletalJoint, float, {public: void __thiscall SkeletalJoint::setDesiredSwing2(float), 0}>::vfunc_40 (122 bytes)
extern "C" __declspec(naked) void __fastcall fn_006554B0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8b0c9e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B56060], al
        jne L_guarded
        or dword ptr [mem_00B56060], eax
        mov ecx, offset mem_00B5605C
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B5605C], 0x009829d4
        mov dword ptr [eax + 0x4], offset mem_00B5605C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B5605C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x00655530] ExprParser::WriteMethodType<SkeletalJoint, NM::Vector3 const &, {public: void __thiscall SkeletalJoint::setDesiredTwistAndSwing(class NM::Vector3 const &), 0}>::vfunc_40 (122 bytes)
extern "C" int mem_00B56068;
extern "C" int mem_00B56064;

extern "C" __declspec(naked) void __fastcall fn_00655530(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8b0cbe
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B56068], al
        jne L_guarded
        or dword ptr [mem_00B56068], eax
        mov ecx, offset mem_00B56064
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B56064], 0x00982aac
        mov dword ptr [eax + 0x4], offset mem_00B56064
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B56064
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x006555B0] ExprParser::WriteMethodType<SkeletalJoint, int, {[thunk]: __thiscall SkeletalJoint::`vcall'{84, {flat}}, 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B56070;
extern "C" int mem_00B5606C;

extern "C" __declspec(naked) void __fastcall fn_006555B0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8b0cde
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B56070], al
        jne L_guarded
        or dword ptr [mem_00B56070], eax
        mov ecx, offset mem_00B5606C
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B5606C], 0x00982b84
        mov dword ptr [eax + 0x4], offset mem_00B5606C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B5606C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x00655630] ExprParser::WriteMethodType<SkeletalJoint, int, {[thunk]: __thiscall SkeletalJoint::`vcall'{80, {flat}}, 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B56078;
extern "C" int mem_00B56074;

extern "C" __declspec(naked) void __fastcall fn_00655630(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8b0cfe
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B56078], al
        jne L_guarded
        or dword ptr [mem_00B56078], eax
        mov ecx, offset mem_00B56074
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B56074], 0x00982c5c
        mov dword ptr [eax + 0x4], offset mem_00B56074
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B56074
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x006556B0] ExprParser::WriteMethodType<SkeletalJoint, float, {public: void __thiscall SkeletalJoint::setHardLimitRadius(float), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B56080;
extern "C" int mem_00B5607C;

extern "C" __declspec(naked) void __fastcall fn_006556B0(void* self, int edx_unused, float a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8b0d1e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B56080], al
        jne L_guarded
        or dword ptr [mem_00B56080], eax
        mov ecx, offset mem_00B5607C
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B5607C], 0x00982d34
        mov dword ptr [eax + 0x4], offset mem_00B5607C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B5607C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x00655730] ExprParser::WriteMethodType<SkeletalJoint, float, {public: void __thiscall SkeletalJoint::setHardLimitTwistAngle(float), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B56088;
extern "C" int mem_00B56084;

extern "C" __declspec(naked) void __fastcall fn_00655730(void* self, int edx_unused, float a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8b0d3e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B56088], al
        jne L_guarded
        or dword ptr [mem_00B56088], eax
        mov ecx, offset mem_00B56084
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B56084], 0x00982e0c
        mov dword ptr [eax + 0x4], offset mem_00B56084
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B56084
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x006557B0] ExprParser::WriteMethodType<SkeletalJoint, float, {public: void __thiscall SkeletalJoint::setHardLimitSwingAngle1(float), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B5608C;
extern "C" int mem_00B56090;

extern "C" __declspec(naked) void __fastcall fn_006557B0(void* self, int edx_unused, float a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8b0d5e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B56090], al
        jne L_guarded
        or dword ptr [mem_00B56090], eax
        mov ecx, offset mem_00B5608C
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B5608C], 0x00982ee4
        mov dword ptr [eax + 0x4], offset mem_00B5608C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B5608C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x00655830] ExprParser::WriteMethodType<SkeletalJoint, float, {public: void __thiscall SkeletalJoint::setHardLimitSwingAngle2(float), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B56098;
extern "C" int mem_00B56094;

extern "C" __declspec(naked) void __fastcall fn_00655830(void* self, int edx_unused, float a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8b0d7e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B56098], al
        jne L_guarded
        or dword ptr [mem_00B56098], eax
        mov ecx, offset mem_00B56094
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B56094], 0x00982fbc
        mov dword ptr [eax + 0x4], offset mem_00B56094
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B56094
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x006558B0] ExprParser::WriteMethodType<SkeletalJoint, float, {public: void __thiscall SkeletalJoint::setSoftLimitRadius(float), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B560A0;
extern "C" int mem_00B5609C;

extern "C" __declspec(naked) void __fastcall fn_006558B0(void* self, int edx_unused, float a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8b0d9e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B560A0], al
        jne L_guarded
        or dword ptr [mem_00B560A0], eax
        mov ecx, offset mem_00B5609C
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B5609C], 0x00983094
        mov dword ptr [eax + 0x4], offset mem_00B5609C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B5609C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x00655930] ExprParser::WriteMethodType<SkeletalJoint, float, {public: void __thiscall SkeletalJoint::setSoftLimitTwistAngle(float), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B560A8;
extern "C" int mem_00B560A4;

extern "C" __declspec(naked) void __fastcall fn_00655930(void* self, int edx_unused, float a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8b0dbe
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B560A8], al
        jne L_guarded
        or dword ptr [mem_00B560A8], eax
        mov ecx, offset mem_00B560A4
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B560A4], 0x0098316c
        mov dword ptr [eax + 0x4], offset mem_00B560A4
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B560A4
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x006559B0] ExprParser::WriteMethodType<SkeletalJoint, float, {public: void __thiscall SkeletalJoint::setSoftLimitSwingAngle1(float), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B560B0;
extern "C" int mem_00B560AC;

extern "C" __declspec(naked) void __fastcall fn_006559B0(void* self, int edx_unused, float a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8b0dde
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B560B0], al
        jne L_guarded
        or dword ptr [mem_00B560B0], eax
        mov ecx, offset mem_00B560AC
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B560AC], 0x00983244
        mov dword ptr [eax + 0x4], offset mem_00B560AC
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B560AC
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x00655A30] ExprParser::WriteMethodType<SkeletalJoint, float, {public: void __thiscall SkeletalJoint::setSoftLimitSwingAngle2(float), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B560B8;
extern "C" int mem_00B560B4;

extern "C" __declspec(naked) void __fastcall fn_00655A30(void* self, int edx_unused, float a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8b0dfe
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B560B8], al
        jne L_guarded
        or dword ptr [mem_00B560B8], eax
        mov ecx, offset mem_00B560B4
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B560B4], 0x0098331c
        mov dword ptr [eax + 0x4], offset mem_00B560B4
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B560B4
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x00655AB0] ExprParser::WriteMethodType<SkeletalJoint, float, {public: void __thiscall SkeletalJoint::setSoftLimitRadialStiffness(float), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B560C0;
extern "C" int mem_00B560BC;

extern "C" __declspec(naked) void __fastcall fn_00655AB0(void* self, int edx_unused, float a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8b0e1e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B560C0], al
        jne L_guarded
        or dword ptr [mem_00B560C0], eax
        mov ecx, offset mem_00B560BC
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B560BC], 0x009833f4
        mov dword ptr [eax + 0x4], offset mem_00B560BC
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B560BC
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x00655B30] ExprParser::WriteMethodType<SkeletalJoint, float, {public: void __thiscall SkeletalJoint::setSoftLimitTwistStiffness(float), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B560C8;
extern "C" int mem_00B560C4;

extern "C" __declspec(naked) void __fastcall fn_00655B30(void* self, int edx_unused, float a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8b0e3e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B560C8], al
        jne L_guarded
        or dword ptr [mem_00B560C8], eax
        mov ecx, offset mem_00B560C4
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B560C4], 0x009834cc
        mov dword ptr [eax + 0x4], offset mem_00B560C4
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B560C4
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x00655BB0] ExprParser::WriteMethodType<SkeletalJoint, float, {public: void __thiscall SkeletalJoint::setSoftLimitSwingStiffness(float), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B560D0;
extern "C" int mem_00B560CC;

extern "C" __declspec(naked) void __fastcall fn_00655BB0(void* self, int edx_unused, float a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8b0e5e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B560D0], al
        jne L_guarded
        or dword ptr [mem_00B560D0], eax
        mov ecx, offset mem_00B560CC
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B560CC], 0x009835a4
        mov dword ptr [eax + 0x4], offset mem_00B560CC
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B560CC
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x00655C30] ExprParser::WriteMethodType<SkeletalJoint, float, {public: void __thiscall SkeletalJoint::setSoftLimitRadialDamping(float), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B560D8;
extern "C" int mem_00B560D4;

extern "C" __declspec(naked) void __fastcall fn_00655C30(void* self, int edx_unused, float a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8b0e7e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B560D8], al
        jne L_guarded
        or dword ptr [mem_00B560D8], eax
        mov ecx, offset mem_00B560D4
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B560D4], 0x0098367c
        mov dword ptr [eax + 0x4], offset mem_00B560D4
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B560D4
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x00655CB0] ExprParser::WriteMethodType<SkeletalJoint, float, {public: void __thiscall SkeletalJoint::setSoftLimitTwistDamping(float), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B560E0;
extern "C" int mem_00B560DC;

extern "C" __declspec(naked) void __fastcall fn_00655CB0(void* self, int edx_unused, float a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8b0e9e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B560E0], al
        jne L_guarded
        or dword ptr [mem_00B560E0], eax
        mov ecx, offset mem_00B560DC
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B560DC], 0x00983754
        mov dword ptr [eax + 0x4], offset mem_00B560DC
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B560DC
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x00655D30] ExprParser::WriteMethodType<SkeletalJoint, float, {public: void __thiscall SkeletalJoint::setSoftLimitSwingDamping(float), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B560E8;
extern "C" int mem_00B560E4;

extern "C" __declspec(naked) void __fastcall fn_00655D30(void* self, int edx_unused, float a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8b0ebe
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B560E8], al
        jne L_guarded
        or dword ptr [mem_00B560E8], eax
        mov ecx, offset mem_00B560E4
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B560E4], 0x0098382c
        mov dword ptr [eax + 0x4], offset mem_00B560E4
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B560E4
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x00655DB0] ExprParser::WriteMethodType<SkeletalJoint, float, {[thunk]: __thiscall SkeletalJoint::`vcall'{88, {flat}}, 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B560F0;
extern "C" int mem_00B560EC;

extern "C" __declspec(naked) void __fastcall fn_00655DB0(void* self, int edx_unused, float a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8b0ede
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B560F0], al
        jne L_guarded
        or dword ptr [mem_00B560F0], eax
        mov ecx, offset mem_00B560EC
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B560EC], 0x00983904
        mov dword ptr [eax + 0x4], offset mem_00B560EC
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B560EC
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x00655E30] ExprParser::WriteMethodType<SkeletalJoint, float, {[thunk]: __thiscall SkeletalJoint::`vcall'{112, {flat}}, 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B560F8;
extern "C" int mem_00B560F4;

extern "C" __declspec(naked) void __fastcall fn_00655E30(void* self, int edx_unused, float a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8b0efe
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B560F8], al
        jne L_guarded
        or dword ptr [mem_00B560F8], eax
        mov ecx, offset mem_00B560F4
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B560F4], 0x009839DC
        mov dword ptr [eax + 0x4], offset mem_00B560F4
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B560F4
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x00655EB0] ExprParser::WriteMethodType<SkeletalJoint, float, {[thunk]: __thiscall SkeletalJoint::`vcall'{100, {flat}}, 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B56100;
extern "C" int mem_00B560FC;

extern "C" __declspec(naked) void __fastcall fn_00655EB0(void* self, int edx_unused, float a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8b0f1e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B56100], al
        jne L_guarded
        or dword ptr [mem_00B56100], eax
        mov ecx, offset mem_00B560FC
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B560FC], 0x00983AB4
        mov dword ptr [eax + 0x4], offset mem_00B560FC
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B560FC
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x00655F30] ExprParser::WriteMethodType<SkeletalJoint, float, {[thunk]: __thiscall SkeletalJoint::`vcall'{92, {flat}}, 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B56108;
extern "C" int mem_00B56104;

extern "C" __declspec(naked) void __fastcall fn_00655F30(void* self, int edx_unused, float a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8b0f3e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B56108], al
        jne L_guarded
        or dword ptr [mem_00B56108], eax
        mov ecx, offset mem_00B56104
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B56104], 0x00983B8C
        mov dword ptr [eax + 0x4], offset mem_00B56104
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B56104
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x00655FB0] ExprParser::WriteMethodType<SkeletalJoint, float, {[thunk]: __thiscall SkeletalJoint::`vcall'{116, {flat}}, 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B56110;
extern "C" int mem_00B5610C;

extern "C" __declspec(naked) void __fastcall fn_00655FB0(void* self, int edx_unused, float a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8b0f5e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B56110], al
        jne L_guarded
        or dword ptr [mem_00B56110], eax
        mov ecx, offset mem_00B5610C
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B5610C], 0x00983C64
        mov dword ptr [eax + 0x4], offset mem_00B5610C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B5610C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x00656030] ExprParser::WriteMethodType<SkeletalJoint, float, {[thunk]: __thiscall SkeletalJoint::`vcall'{104, {flat}}, 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B56118;
extern "C" int mem_00B56114;

extern "C" __declspec(naked) void __fastcall fn_00656030(void* self, int edx_unused, float a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8b0f7e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B56118], al
        jne L_guarded
        or dword ptr [mem_00B56118], eax
        mov ecx, offset mem_00B56114
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B56114], 0x00983D3C
        mov dword ptr [eax + 0x4], offset mem_00B56114
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B56114
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x006560B0] ExprParser::WriteMethodType<SkeletalJoint, float, {[thunk]: __thiscall SkeletalJoint::`vcall'{96, {flat}}, 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B56120;
extern "C" int mem_00B5611C;

extern "C" __declspec(naked) void __fastcall fn_006560B0(void* self, int edx_unused, float a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8b0f9e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B56120], al
        jne L_guarded
        or dword ptr [mem_00B56120], eax
        mov ecx, offset mem_00B5611C
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B5611C], 0x00983E14
        mov dword ptr [eax + 0x4], offset mem_00B5611C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B5611C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x00656130] ExprParser::WriteMethodType<SkeletalJoint, float, {[thunk]: __thiscall SkeletalJoint::`vcall'{120, {flat}}, 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B56128;
extern "C" int mem_00B56124;

extern "C" __declspec(naked) void __fastcall fn_00656130(void* self, int edx_unused, float a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8b0fbe
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B56128], al
        jne L_guarded
        or dword ptr [mem_00B56128], eax
        mov ecx, offset mem_00B56124
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B56124], 0x00983EEC
        mov dword ptr [eax + 0x4], offset mem_00B56124
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B56124
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x006561B0] ExprParser::WriteMethodType<SkeletalJoint, float, {[thunk]: __thiscall SkeletalJoint::`vcall'{108, {flat}}, 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B5612C;
extern "C" int mem_00B56130;

extern "C" __declspec(naked) void __fastcall fn_006561B0(void* self, int edx_unused, float a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8b0fde
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B56130], al
        jne L_guarded
        or dword ptr [mem_00B56130], eax
        mov ecx, offset mem_00B5612C
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B5612C], 0x00983FC4
        mov dword ptr [eax + 0x4], offset mem_00B5612C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B5612C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x00656230] ExprParser::WriteMethodType<SkeletalJoint, NM::Vector3 const &, {[thunk]: __thiscall SkeletalJoint::`vcall'{132, {flat}}, 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B56138;
extern "C" int mem_00B56134;

extern "C" __declspec(naked) void __fastcall fn_00656230(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8b0ffe
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B56138], al
        jne L_guarded
        or dword ptr [mem_00B56138], eax
        mov ecx, offset mem_00B56134
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B56134], 0x0098409c
        mov dword ptr [eax + 0x4], offset mem_00B56134
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B56134
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x006562B0] ExprParser::WriteMethodType<SkeletalJoint, NM::Vector3 const &, {public: void __thiscall SkeletalJoint::setDriveAngularVel(class NM::Vector3 const &), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B56140;
extern "C" int mem_00B5613C;

extern "C" __declspec(naked) void __fastcall fn_006562B0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8b101e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B56140], al
        jne L_guarded
        or dword ptr [mem_00B56140], eax
        mov ecx, offset mem_00B5613C
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B5613C], 0x00984174
        mov dword ptr [eax + 0x4], offset mem_00B5613C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B5613C
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x00656330] ExprParser::WriteMethodType<SkeletalJoint, NM::Vector4 const &, {public: void __thiscall SkeletalJoint::setDriveQuaternion(class NM::Vector4 const &), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B56148;
extern "C" int mem_00B56144;

extern "C" __declspec(naked) void __fastcall fn_00656330(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8b103e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B56148], al
        jne L_guarded
        or dword ptr [mem_00B56148], eax
        mov ecx, offset mem_00B56144
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B56144], 0x0098424c
        mov dword ptr [eax + 0x4], offset mem_00B56144
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B56144
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x0066D630] ExprParser::WriteMethodType<NM::Vector3, float, &public: void __thiscall NM::Vector3::radRotateX(float)>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B596CC;
extern "C" int mem_00B596C8;

extern "C" __declspec(naked) void __fastcall fn_0066D630(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8b357e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B596CC], al
        jne L_guarded
        or dword ptr [mem_00B596CC], eax
        mov ecx, offset mem_00B596C8
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B596C8], 0x0098909c
        mov dword ptr [eax + 0x4], offset mem_00B596C8
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B596C8
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x0066D6B0] ExprParser::WriteMethodType<NM::Vector3, float, &public: void __thiscall NM::Vector3::radRotateY(float)>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B596D4;
extern "C" int mem_00B596D0;

extern "C" __declspec(naked) void __fastcall fn_0066D6B0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8b359e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B596D4], al
        jne L_guarded
        or dword ptr [mem_00B596D4], eax
        mov ecx, offset mem_00B596D0
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B596D0], 0x0098924c
        mov dword ptr [eax + 0x4], offset mem_00B596D0
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B596D0
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x0066D730] ExprParser::WriteMethodType<NM::Vector3, float, &public: void __thiscall NM::Vector3::radRotateZ(float)>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B596DC;
extern "C" int mem_00B596D8;

extern "C" __declspec(naked) void __fastcall fn_0066D730(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8b35be
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B596DC], al
        jne L_guarded
        or dword ptr [mem_00B596DC], eax
        mov ecx, offset mem_00B596D8
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B596D8], 0x009893fc
        mov dword ptr [eax + 0x4], offset mem_00B596D8
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B596D8
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x0066D7B0] ExprParser::WriteMethodType<NM::Vector3, NM::Vector3 const &, &public: void __thiscall NM::Vector3::createCrossProductOrientationTS(class NM::Vector3 const &)>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B596E4;
extern "C" int mem_00B596E0;

extern "C" __declspec(naked) void __fastcall fn_0066D7B0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8b35de
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B596E4], al
        jne L_guarded
        or dword ptr [mem_00B596E4], eax
        mov ecx, offset mem_00B596E0
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B596E0], 0x009895ac
        mov dword ptr [eax + 0x4], offset mem_00B596E0
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B596E0
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x0066D830] ExprParser::WriteMethodType<NM::Vector3, NM::Vector3 const &, &public: void __thiscall NM::Vector3::createCrossProductOrientationTSA(class NM::Vector3 const &)>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B596EC;
extern "C" int mem_00B596E8;

extern "C" __declspec(naked) void __fastcall fn_0066D830(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8b35fe
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B596EC], al
        jne L_guarded
        or dword ptr [mem_00B596EC], eax
        mov ecx, offset mem_00B596E8
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B596E8], 0x0098975c
        mov dword ptr [eax + 0x4], offset mem_00B596E8
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B596E8
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x0066D8B0] ExprParser::WriteMethodType<NM::Vector3, NM::Vector3 const &, &public: void __thiscall NM::Vector3::createCrossProductOrientationSE(class NM::Vector3 const &)>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B596F4;
extern "C" int mem_00B596F0;

extern "C" __declspec(naked) void __fastcall fn_0066D8B0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8b361e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B596F4], al
        jne L_guarded
        or dword ptr [mem_00B596F4], eax
        mov ecx, offset mem_00B596F0
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B596F0], 0x0098990c
        mov dword ptr [eax + 0x4], offset mem_00B596F0
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B596F0
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x0066D930] ExprParser::WriteMethodType<NM::Vector3, NM::Vector3 const &, &public: void __thiscall NM::Vector3::createCrossProductOrientationE(class NM::Vector3 const &)>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B596FC;
extern "C" int mem_00B596F8;

extern "C" __declspec(naked) void __fastcall fn_0066D930(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8b363e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B596FC], al
        jne L_guarded
        or dword ptr [mem_00B596FC], eax
        mov ecx, offset mem_00B596F8
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B596F8], 0x00989abc
        mov dword ptr [eax + 0x4], offset mem_00B596F8
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B596F8
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x0066D9B0] ExprParser::WriteMethodType<NM::Vector3, NM::Vector3 const &, &public: void __thiscall NM::Vector3::convertTStoTSA(class NM::Vector3 const &)>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B59704;
extern "C" int mem_00B59700;

extern "C" __declspec(naked) void __fastcall fn_0066D9B0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8b365e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B59704], al
        jne L_guarded
        or dword ptr [mem_00B59704], eax
        mov ecx, offset mem_00B59700
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B59700], 0x00989c6c
        mov dword ptr [eax + 0x4], offset mem_00B59700
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B59700
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x0066DA30] ExprParser::WriteMethodType<NM::Vector3, NM::Vector3 const &, &public: void __thiscall NM::Vector3::convertTStoE(class NM::Vector3 const &)>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B5970C;
extern "C" int mem_00B59708;

extern "C" __declspec(naked) void __fastcall fn_0066DA30(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8b367e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B5970C], al
        jne L_guarded
        or dword ptr [mem_00B5970C], eax
        mov ecx, offset mem_00B59708
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B59708], 0x00989e1c
        mov dword ptr [eax + 0x4], offset mem_00B59708
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B59708
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x0066DAB0] ExprParser::WriteMethodType<NM::Vector3, NM::Vector3 const &, &public: void __thiscall NM::Vector3::convertTSAtoTS(class NM::Vector3 const &)>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B59714;
extern "C" int mem_00B59710;

extern "C" __declspec(naked) void __fastcall fn_0066DAB0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8b369e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B59714], al
        jne L_guarded
        or dword ptr [mem_00B59714], eax
        mov ecx, offset mem_00B59710
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B59710], 0x00989fcc
        mov dword ptr [eax + 0x4], offset mem_00B59710
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B59710
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x0066DB30] ExprParser::WriteMethodType<NM::Vector3, NM::Vector3 const &, &public: void __thiscall NM::Vector3::convertTSAtoE(class NM::Vector3 const &)>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B5971C;
extern "C" int mem_00B59718;

extern "C" __declspec(naked) void __fastcall fn_0066DB30(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8b36be
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B5971C], al
        jne L_guarded
        or dword ptr [mem_00B5971C], eax
        mov ecx, offset mem_00B59718
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B59718], 0x0098a17c
        mov dword ptr [eax + 0x4], offset mem_00B59718
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B59718
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x0066DBB0] ExprParser::WriteMethodType<NM::Vector3, NM::Vector3 const &, &public: void __thiscall NM::Vector3::convertEtoTS(class NM::Vector3 const &)>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B59724;
extern "C" int mem_00B59720;

extern "C" __declspec(naked) void __fastcall fn_0066DBB0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8b36de
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B59724], al
        jne L_guarded
        or dword ptr [mem_00B59724], eax
        mov ecx, offset mem_00B59720
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B59720], 0x0098a32c
        mov dword ptr [eax + 0x4], offset mem_00B59720
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B59720
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x0066DC30] ExprParser::WriteMethodType<NM::Vector3, NM::Vector3 const &, &public: void __thiscall NM::Vector3::convertEtoTSA(class NM::Vector3 const &)>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B5972C;
extern "C" int mem_00B59728;

extern "C" __declspec(naked) void __fastcall fn_0066DC30(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8b36fe
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B5972C], al
        jne L_guarded
        or dword ptr [mem_00B5972C], eax
        mov ecx, offset mem_00B59728
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B59728], 0x0098a4dc
        mov dword ptr [eax + 0x4], offset mem_00B59728
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B59728
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x0066DDD0] ExprParser::WriteMethodType<NM::Vector3, NM::Vector3 const &, &public: void __thiscall NM::Vector3::getOrthonormalVector(class NM::Vector3 const &)>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B5973C;
extern "C" int mem_00B59738;

extern "C" __declspec(naked) void __fastcall fn_0066DDD0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8b373e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B5973C], al
        jne L_guarded
        or dword ptr [mem_00B5973C], eax
        mov ecx, offset mem_00B59738
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B59738], 0x0098a914
        mov dword ptr [eax + 0x4], offset mem_00B59738
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B59738
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x0068C0A0] ExprParser::WriteMethodType<Randomizer, int, {public: void __thiscall Randomizer::setSeed(int), 0}>::vfunc_40 (122 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B5ADC0;
extern "C" int mem_00B5ADBC;

extern "C" __declspec(naked) void __fastcall fn_0068C0A0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8b5b6e
        push eax
        mov eax, 1
        mov dword ptr fs:[0], esp
        test byte ptr [mem_00B5ADC0], al
        jne L_guarded
        or dword ptr [mem_00B5ADC0], eax
        mov ecx, offset mem_00B5ADBC
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [mem_00B5ADBC], 0x0098dff4
        mov dword ptr [eax + 0x4], offset mem_00B5ADBC
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    L_guarded:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x4], offset mem_00B5ADBC
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x4
    }
}

// [0x0064ED30] ExprParser::WriteMethodType<SkeletalJoint, NM::Vector3 const &, {public: void __thiscall SkeletalJoint::setDesiredTwistAndSwing(class NM::Vector3 const &), 0}>::vfunc_41 (34 bytes)
extern "C" void ext_0064DF20();

extern "C" __declspec(naked) void __stdcall fn_0064ED30(void** self, void** a1) {
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
        call ext_0064DF20
        pop esi
        ret 0x8
    }
}

// [0x0064ED60] ExprParser::WriteMethodType<SkeletalJoint, NM::Vector3 const &, {public: void __thiscall SkeletalJoint::setDesiredTwistAndSwing(class NM::Vector3 const &), 0}>::vfunc_48 (110 bytes)
extern "C" __declspec(naked) void __fastcall fn_0064ED60(void* self, int edx_unused, void** a1, void** a2, void* a3) {
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
        call ext_0064DF20
        cmp dword ptr [esi + 0x4], 0
        lea eax, [esp + 0x14]
        je L_else_0064ED60
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
    L_else_0064ED60:
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

// [0x0064EA80] ExprParser::WriteMethodType<SkeletalJoint, NM::Vector3 const &, {public: void __thiscall SkeletalJoint::setDesiredTwistAndSwingAngles(class NM::Vector3 const &), 0}>::vfunc_41 (34 bytes)
extern "C" void ext_0064DEE0();

extern "C" __declspec(naked) void __stdcall fn_0064EA80(void** self, void** a1) {
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
        call ext_0064DEE0
        pop esi
        ret 0x8
    }
}

// [0x0064EAB0] ExprParser::WriteMethodType<SkeletalJoint, NM::Vector3 const &, {public: void __thiscall SkeletalJoint::setDesiredTwistAndSwingAngles(class NM::Vector3 const &), 0}>::vfunc_48 (110 bytes)
extern "C" __declspec(naked) void __fastcall fn_0064EAB0(void* self, int edx_unused, void** a1, void** a2, void* a3) {
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
        call ext_0064DEE0
        cmp dword ptr [esi + 0x4], 0
        lea eax, [esp + 0x14]
        je L_else_0064EAB0
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
    L_else_0064EAB0:
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
