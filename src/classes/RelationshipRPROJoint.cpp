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

// [0x00659C90] RelationshipRPROJoint::vfunc_47 (141 bytes)
extern "C" void __cdecl ext_007C9A60(int, int, float*);
extern "C" void* __cdecl ext_007D8700(void*);
extern "C" void __cdecl ext_007C9370(int, void*);
extern "C" double mem_00A9EBE0;
extern "C" float mem_00968ED8;

struct Dummy659C90 {
    void m1(float* v);
    void m2(float f);
    void m3(float f);
};
#pragma comment(linker, "/alternatename:?m1@Dummy659C90@@QAEXPAM@Z=_ext_0067E510")
#pragma comment(linker, "/alternatename:?m2@Dummy659C90@@QAEXM@Z=_ext_0067E7B0")
#pragma comment(linker, "/alternatename:?m3@Dummy659C90@@QAEXM@Z=_ext_0064B900")

extern "C" void __fastcall fn_00659C90(void* self, int edx_unused, Dummy659C90* a1) {
    float vec[4];
    vec[3] = 0.0f;
    vec[2] = 0.0f;
    vec[1] = 0.0f;
    vec[0] = 0.0f;
    ext_007C9A60(*(int*)((char*)self + 0xf4), 0, vec);
    a1->m1(vec);
    float f = (float)mem_00A9EBE0;
    a1->m2(f);
    a1->m3(mem_00968ED8);
    int x = *(int*)((char*)self + 0xf4);
    ext_007C9370((int)ext_007D8700((void*)x), (char*)a1 + 0x30);
}
