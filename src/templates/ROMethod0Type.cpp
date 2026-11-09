// Decompiled translation unit: src/templates/ROMethod0Type.cpp

// [0x00486F00] ExprParser::ROMethod0Type<NM::Vector3, &public: void __thiscall NM::Vector3::normalize2(void)>::vfunc_0 (30 bytes)
extern "C" void ext_006720C0();

extern "C" __declspec(naked) void* __fastcall fn_00486F00(void* self, int edx_unused, void* a1, int a2) {
    __asm {
        push ecx
        push esi
        mov esi, dword ptr [esp + 0xc]
        push 0x0
        mov ecx, esi
        mov dword ptr [esp + 0x8], 0x0
        call ext_006720C0
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    }
}
