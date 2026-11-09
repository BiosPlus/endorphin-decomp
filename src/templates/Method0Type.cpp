// Decompiled translation unit: src/templates/Method0Type.cpp

extern "C" void ext_00671100();
extern "C" void ext_0048ABF0();
extern "C" void ext_0048ABB0();
extern "C" void ext_004CA560();
extern "C" void ext_004CCAF0();
extern "C" void ext_004CCB00();
extern "C" void ext_00493D90();
extern "C" void ext_0048A9F0();

// [0x005C3380] ExprParser::Method0Type<NM::Vector3, &public: void __thiscall NM::Vector3::normalize2(void)>::vfunc_13 (13 bytes)
extern "C" __declspec(naked) void __stdcall fn_005C3380(int a1) {
    __asm {
        push 0x10
        call ext_00671100
        add esp, 4
        ret 4
    }
}

// [0x0048B1F0] ExprParser::Method0Type<NMData::DesiredPoseEventData, {public: void __thiscall NMData::DesiredPoseEventData::endEvent(void), 0}>::vfunc_41 (14 bytes)
extern "C" __declspec(naked) void __stdcall fn_0048B1F0(void* a1, int a2) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        mov ecx, dword ptr [eax]
        call ext_0048ABF0
        ret 0x8
    }
}

// [0x004CB470] ExprParser::Method0Type<NMData::DesiredPoseEventData, {[thunk]: __thiscall NMData::DesiredPoseEventData::`vcall'{352, {flat}}, 0}>::vfunc_41 (14 bytes)
extern "C" __declspec(naked) void __stdcall fn_004CB470(void* a1, int a2) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        mov ecx, dword ptr [eax]
        call ext_004CA560
        ret 0x8
    }
}

// [0x004CCD10] ExprParser::Method0Type<NMData::MetaBodyConstraintData, {public: void __thiscall NMData::MetaBodyConstraintData::fireEnable(void), 0}>::vfunc_41 (14 bytes)
extern "C" void __stdcall fn_004CCD10(void* a1, int a2) {
    void* obj = *(void**)a1;
    ((void (__fastcall*)(void*))ext_004CCAF0)(obj);
}

// [0x004CCDB0] ExprParser::Method0Type<NMData::MetaBodyConstraintData, {public: void __thiscall NMData::MetaBodyConstraintData::fireDisable(void), 0}>::vfunc_41 (14 bytes)
extern "C" void __stdcall fn_004CCDB0(void* a1, int a2) {
    void* obj = *(void**)a1;
    ((void (__fastcall*)(void*))ext_004CCB00)(obj);
}

extern "C" void ext_005B72E0();

// [0x005BB360] ExprParser::Method0Type<NMData::MetaBodyData, {public: void __thiscall NMData::MetaBodyData::resetForcesAndImpulses(void), 0}>::vfunc_41 (14 bytes)
extern "C" void __fastcall fn_005BB360(void* self, int edx_unused, void* a1, int a2) {
    void* obj = *(void**)a1;
    ((void (__fastcall*)(void*))ext_005B72E0)(obj);
}

extern "C" void ext_005C3170();

// [0x005C6240] ExprParser::Method0Type<NMData::CollisionModelDataBase, {protected: void __thiscall NMData::CollisionModelDataBase::resetForcesAndImpulses(void), 0}>::vfunc_41 (14 bytes)
extern "C" void __fastcall fn_005C6240(void* self, int edx_unused, void* a1, int a2) {
    void* obj = *(void**)a1;
    ((void (__fastcall*)(void*))ext_005C3170)(obj);
}

// [0x0060A0C0] ExprParser::Method0Type<NMData::DisabledCollisionPairList, {public: void __thiscall NMData::DisabledCollisionPairList::addSelectedCollisionModels(void), 0}>::vfunc_41 (14 bytes)
extern "C" void __stdcall fn_0060A0C0(void* a1, int a2) {
    void* obj = *(void**)a1;
    ((void (__fastcall*)(void*))ext_00493D90)(obj);
}

// [0x0048B0B0] ExprParser::Method0Type<NMData::DesiredPoseEventData, {public: void __thiscall NMData::DesiredPoseEventData::capturePoseForBlend(void), 0}>::vfunc_41 (14 bytes)
extern "C" __declspec(naked) void __stdcall fn_0048B0B0(void* a1, int a2) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        mov ecx, dword ptr [eax]
        call ext_0048A9F0
        ret 0x8
    }
}

// [0x0048B150] ExprParser::Method0Type<NMData::DesiredPoseEventData, {public: void __thiscall NMData::DesiredPoseEventData::fire(void), 0}>::vfunc_41 (14 bytes)
extern "C" __declspec(naked) void __stdcall fn_0048B150(void* a1, int a2) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        mov ecx, dword ptr [eax]
        call ext_0048ABB0
        ret 0x8
    }
}
