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

// [0x006035B0] ExprParser::ROWriteMethodType<Effector, float, &[thunk]: __thiscall Effector::`vcall'{100, {flat}}>::vfunc_16 (30 bytes)
extern "C" void ext_006A6E9E();

extern "C" __declspec(naked) void __fastcall fn_006035B0(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push 0
        push 0xa93750
        push 0xa2e2f8
        push 0
        push eax
        call ext_006A6E9E
        add esp, 0x14
        ret 4
    }
}

// [0x006274D0] ExprParser::ROWriteMethodType<Sensors::SensorAbsoluteOrientation, int, &public: void __thiscall Sensors::SensorAbsoluteOrientation::setReference(int)>::vfunc_16 (30 bytes)
extern "C" void ext_006A6E9E();

extern "C" __declspec(naked) void __fastcall fn_006274D0(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push 0
        push 0xa93424
        push 0xa2e2f8
        push 0
        push eax
        call ext_006A6E9E
        add esp, 0x14
        ret 4
    }
}

// [0x0062A0A0] ExprParser::ROWriteMethodType<Sensors::SensorMetaBodyRelativeTime, float, &public: void __thiscall Sensors::SensorMetaBodyRelativeTime::resetTime(float)>::vfunc_16 (30 bytes)
extern "C" void ext_006A6E9E();

extern "C" __declspec(naked) void __fastcall fn_0062A0A0(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push 0
        push 0xa93644
        push 0xa2e2f8
        push 0
        push eax
        call ext_006A6E9E
        add esp, 0x14
        ret 4
    }
}

// [0x0062A0F0] ExprParser::ROWriteMethodType<Sensors::SensorRelativeTime, float, &public: void __thiscall Sensors::SensorRelativeTime::resetTime(float)>::vfunc_16 (30 bytes)
extern "C" void ext_006A6E9E();

extern "C" __declspec(naked) void __fastcall fn_0062A0F0(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push 0
        push 0xa97cf8
        push 0xa2e2f8
        push 0
        push eax
        call ext_006A6E9E
        add esp, 0x14
        ret 4
    }
}

// [0x0062A560] ExprParser::ROWriteMethodType<Sensors::SensorIntegral, float, &public: void __thiscall Sensors::SensorIntegral::insert(float)>::vfunc_16 (30 bytes)
extern "C" void ext_006A6E9E();

extern "C" __declspec(naked) void __fastcall fn_0062A560(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push 0
        push 0xa93678
        push 0xa2e2f8
        push 0
        push eax
        call ext_006A6E9E
        add esp, 0x14
        ret 4
    }
}

// [0x00630CE0] ExprParser::ROWriteMethodType<EffectorSkeletal, std::basic_string<char, std::char_traits<char>, std::allocator<char>> const &, &[thunk]: __thiscall EffectorSkeletal::`vcall'{60, {flat}}>::vfunc_16 (30 bytes)
extern "C" void ext_006A6E9E();

extern "C" __declspec(naked) void __stdcall fn_00630CE0(void* self) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push 0
        push 0a947d0h
        push 0a2e2f8h
        push 0
        push eax
        call ext_006A6E9E
        add esp, 14h
        ret 4
    }
}

// [0x0063CA50] ExprParser::ROWriteMethodType<EffectorWithMemory, float, &public: void __thiscall EffectorWithMemory::setIntegralGradient(float)>::vfunc_16 (30 bytes)
extern "C" void ext_006A6E9E();

extern "C" __declspec(naked) void __stdcall fn_0063CA50(void* self) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push 0
        push 0a947f0h
        push 0a2e2f8h
        push 0
        push eax
        call ext_006A6E9E
        add esp, 14h
        ret 4
    }
}
