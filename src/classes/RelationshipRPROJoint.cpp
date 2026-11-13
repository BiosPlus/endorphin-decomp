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

// [0x006596B0] RelationshipRPROJoint::vfunc_8 (187 bytes)
extern "C" void ext_0067DAD0();
extern "C" void ext_00694D80();

extern "C" __declspec(naked) void __fastcall fn_006596B0(void* self, int edx_unused, int a1) {
    __asm {
        sub esp, 0x70
        fld1
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0xbc]
        fst dword ptr [esp + 0x30]
        fldz
        push esi
        fst dword ptr [esp + 0x38]
        lea edx, [esp + 0x34]
        fst dword ptr [esp + 0x3c]
        push edx
        fst dword ptr [esp + 0x44]
        fst dword ptr [esp + 0x48]
        fst dword ptr [esp + 0x50]
        fst dword ptr [esp + 0x54]
        fst dword ptr [esp + 0x58]
        fst dword ptr [esp + 0x5c]
        fst dword ptr [esp + 0x64]
        fst dword ptr [esp + 0x68]
        fst dword ptr [esp + 0x6c]
        fstp dword ptr [esp + 0x70]
        fst dword ptr [esp + 0x4c]
        fst dword ptr [esp + 0x60]
        fstp dword ptr [esp + 0x74]
        call eax
        mov esi, dword ptr [esp + 0x78]
        fldz
        cmp esi, 0x3
        jae loc_659764
        fst dword ptr [esp + 0xc]
        lea ecx, [esp + 0x10]
        fst dword ptr [esp + 0x8]
        push ecx
        fst dword ptr [esp + 0x8]
        lea ecx, [esp + 0x38]
        fst dword ptr [esp + 0x1c]
        fst dword ptr [esp + 0x18]
        fst dword ptr [esp + 0x28]
        fst dword ptr [esp + 0x20]
        fst dword ptr [esp + 0x30]
        fstp dword ptr [esp + 0x2c]
        fld1
        fst dword ptr [esp + 0x14]
        fst dword ptr [esp + 0x24]
        fstp dword ptr [esp + 0x34]
        call ext_0067DAD0
        lea edx, [esp + 0x4]
        push edx
        lea ecx, [esp + 0x14]
        call ext_00694D80
        fld dword ptr [esp + esi*4 + 0x4]
loc_659764:
        pop esi
        add esp, 0x70
        ret 0x4
    }
}

// [0x00659770] RelationshipRPROJoint::vfunc_48 (285 bytes)
extern "C" void ext_00480920();
extern "C" void ext_00647F00();
extern "C" void ext_0065C340();
extern "C" void ext_0065C590();
extern "C" void ext_007C97A0();
extern "C" int mem_00B55748;

extern "C" __declspec(naked) void __fastcall fn_00659770(void* self, int edx_unused, int a1, int a2) {
    __asm {
        sub esp, 0x8
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 0x14]
        mov eax, dword ptr [ebp + 0x228]
        push esi
        mov esi, ecx
        xor ecx, ecx
        cmp eax, ecx
        push edi
        je loc_6597a3
        mov eax, dword ptr [eax + 0x158]
        mov edx, dword ptr [eax + 0xac]
        mov eax, dword ptr [edx + 0xa4]
        mov edx, dword ptr [eax]
        mov dword ptr [esp + 0x1c], edx
        jmp loc_6597a7
loc_6597a3:
        mov dword ptr [esp + 0x1c], ecx
loc_6597a7:
        mov eax, dword ptr [ebp + 0x22c]
        cmp eax, ecx
        je loc_6597cb
        mov eax, dword ptr [eax + 0x158]
        mov ecx, dword ptr [eax + 0xac]
        mov edx, dword ptr [ecx + 0xa4]
        mov eax, dword ptr [edx]
        mov dword ptr [esp + 0x10], eax
        jmp loc_6597cf
loc_6597cb:
        mov dword ptr [esp + 0x10], ecx
loc_6597cf:
        mov ecx, dword ptr [mem_00B55748]
        mov ebx, dword ptr [ecx + 0x28]
        mov edx, dword ptr [ebx + 0x40]
        lea edi, [esi + 0x68]
        push edx
        mov ecx, edi
        call ext_0065C340
        mov eax, dword ptr [esi + 0xf4]
        push eax
        call ext_007D8700
        mov edx, dword ptr [esp + 0x24]
        mov dword ptr [esp + 0x18], eax
        mov eax, dword ptr [ebp + 0x4]
        mov eax, dword ptr [eax + 0x14]
        lea ecx, [ebp + 0x4]
        add esp, 0x4
        push edx
        call eax
        mov ecx, dword ptr [ebp + 0x22c]
        mov edx, dword ptr [ecx + 0x158]
        mov ecx, dword ptr [edx + 0xac]
        mov dword ptr [esp + 0x20], eax
        call ext_00647F00
        cmp dword ptr [esp + 0x1c], 0x0
        mov dword ptr [esi + 0x6c], eax
        je loc_65984b
        mov eax, dword ptr [ebp + 0x228]
        mov ecx, dword ptr [eax + 0x158]
        mov ecx, dword ptr [ecx + 0xac]
        call ext_00647F00
        mov byte ptr [esi + 0x70], 0x1
        jmp loc_659854
loc_65984b:
        call ext_00480920
        mov byte ptr [esi + 0x70], 0x0
loc_659854:
        mov edx, dword ptr [esp + 0x20]
        mov ecx, dword ptr [esp + 0x1c]
        mov dword ptr [edi], eax
        mov eax, dword ptr [esp + 0x10]
        push edx
        push eax
        push ecx
        mov ecx, edi
        call ext_0065C590
        mov eax, dword ptr [ebx + 0x38]
        lea edx, [eax + 0x1]
        push eax
        mov eax, dword ptr [esp + 0x18]
        push eax
        mov dword ptr [ebx + 0x38], edx
        call ext_007C97A0
        add esp, 0x8
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x8
        ret 0x8
    }
}
