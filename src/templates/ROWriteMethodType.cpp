// Decompiled translation unit: src/templates/ROWriteMethodType.cpp

// [0x0051A4D0] ExprParser::ROWriteMethodType<EffectorBase, NM::Vector4 const &, &[thunk]: __thiscall EffectorBase::`vcall'{76, {flat}}>::vfunc_13 (13 bytes)
extern "C" void ext_00671100();

extern "C" __declspec(naked) void __fastcall fn_0051A4D0(void* self, int edx_unused, int a1) {
    __asm {
        push 8
        call ext_00671100
        _emit 0x83
        _emit 0xC4
        _emit 0x04
        ret 4
    }
}

// [0x0059E9B0] ExprParser::ROWriteMethodType<NMData::CharacterData, ValuePtr const &, {public: void __thiscall NMData::CharacterData::setPoseFromFSM(class ValuePtr const &), 0}>::vfunc_13 (13 bytes)
extern "C" __declspec(naked) void __fastcall fn_0059E9B0(void* self, int edx_unused, int a1) {
    __asm {
        push 0x16
        call ext_00671100
        _emit 0x83
        _emit 0xC4
        _emit 0x04
        ret 4
    }
}

// [0x0064F830] ExprParser::ROWriteMethodType<NM::Vector3, NM::Vector3 const &, &public: void __thiscall NM::Vector3::convertEtoTS(class NM::Vector3 const &)>::vfunc_13 (13 bytes)
extern "C" __declspec(naked) void __fastcall fn_0064F830(void* self, int edx_unused, int a1) {
    __asm {
        push 4
        call ext_00671100
        _emit 0x83
        _emit 0xC4
        _emit 0x04
        ret 4
    }
}

// [0x004FDB20] ExprParser::ROWriteMethodType<EvolveEngine, float, {private: void __thiscall EvolveEngine::stopWithFitness(float), 0}>::vfunc_16 (30 bytes)
extern "C" void ext_006A6E9E();

extern "C" __declspec(naked) void __fastcall fn_004FDB20(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push 0
        push 0xa402c4
        push 0xa2e2f8
        push 0
        push eax
        call ext_006A6E9E
        add esp, 0x14
        ret 4
    }
}

// [0x0059EB40] ExprParser::ROWriteMethodType<NMData::CharacterData, ValuePtr const &, {public: void __thiscall NMData::CharacterData::setPoseFromFSM(class ValuePtr const &), 0}>::vfunc_16 (30 bytes)
extern "C" __declspec(naked) void* __fastcall fn_0059EB40(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push 0
        push 0xa2fb54
        push 0xa2e2f8
        push 0
        push eax
        call ext_006A6E9E
        add esp, 0x14
        ret 4
    }
}

// [0x005F35A0] ExprParser::ROWriteMethodType<EffectorGroup, float, &[thunk]: __thiscall EffectorGroup::`vcall'{84, {flat}}>::vfunc_16 (30 bytes)
extern "C" void ext_006A6E9E();

extern "C" __declspec(naked) void __fastcall fn_005F35A0(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push 0
        push 0xa912f8
        push 0xa2e2f8
        push 0
        push eax
        call ext_006A6E9E
        add esp, 0x14
        ret 4
    }
}

// [0x00603420] ExprParser::ROWriteMethodType<EffectorBase, NM::Vector4 const &, &[thunk]: __thiscall EffectorBase::`vcall'{76, {flat}}>::vfunc_16 (30 bytes)
extern "C" void ext_006A6E9E();

extern "C" __declspec(naked) void __fastcall fn_00603420(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push 0
        push 0xa93714
        push 0xa2e2f8
        push 0
        push eax
        call ext_006A6E9E
        add esp, 0x14
        ret 4
    }
}
