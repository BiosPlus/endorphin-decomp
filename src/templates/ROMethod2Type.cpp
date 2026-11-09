// Decompiled translation unit: src/templates/ROMethod2Type.cpp

// [0x006922F0] ExprParser::ROMethod2Type<NM::Vector3, NM::Vector3 const &, NM::Vector3 const &, &public: void __thiscall NM::Vector3::cartesianAtoB_E(class NM::Vector3 const &, NM::Vector3 const &)>::vfunc_49 (30 bytes)
extern "C" void ext_00671F30();

extern "C" __declspec(naked) void __fastcall fn_006922F0(void* self) {
    __asm {
        push ecx
        push esi
        mov esi, dword ptr [esp + 0xc]
        push esi
        mov dword ptr [esp + 0x8], 0x0
        call ext_00671F30
        add esp, 0x4
        mov eax, esi
        pop esi
        pop ecx
        ret 0x10
    }
}
