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
