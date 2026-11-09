// Decompiled translation unit: src/templates/Method0Type.cpp

extern "C" void ext_00671100();
extern "C" void ext_0048ABF0();

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
