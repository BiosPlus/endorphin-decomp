// Decompiled translation unit: src/classes/RelationshipRPROJoint.cpp

// [0x006595F0] RelationshipRPROJoint::vfunc_52 (24 bytes)
extern "C" void ext_00645A00();
extern "C" void ext_0065C5E0();

extern "C" __declspec(naked) void __fastcall fn_006595F0(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push esi
        mov esi, ecx
        call ext_00645A00
        lea ecx, [esi + 0x68]
        mov byte ptr [esi + 0x64], 0x0
        call ext_0065C5E0
        pop esi
        ret 0x8
    }
}
