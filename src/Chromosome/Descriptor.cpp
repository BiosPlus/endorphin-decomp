// Decompiled translation unit: src/Chromosome/Descriptor.cpp

struct XMLNode {
    int get(int key) {
        return ((int (__thiscall*)(void*, int))0x0063EFE0)(this, key);
    }
};

extern "C" void ext_004275E0(void* dst, int val);
extern "C" void ext_0046C0A0(void* dst, int* pVal);
extern "C" void ext_004A2500();
extern "C" void ext_0053F5F0(int* local, int* pVal);
extern "C" void ext_0063EFE0();
extern "C" void ext_00640110();
extern "C" void ext_00640AA0();
extern "C" void ext_00640BC0();
extern "C" void ext_00427550();

extern "C" int mem_00924FF0;
extern "C" int mem_00A9F654;
extern "C" int mem_00A9F658;
extern "C" int mem_00A9F838;
extern "C" int mem_00A9F79C;
extern "C" int mem_00A9FA9C;
extern "C" int mem_00A9F798;
extern "C" int mem_00A9FA98;
extern "C" int mem_00A9F824;
extern "C" int mem_00A9F820;
extern "C" int mem_00A9F834;
extern "C" int mem_00A9F830;
extern "C" int mem_00A9F658;
extern "C" int mem_00A9F654;
extern "C" int mem_00A9F55C;

// [0x00511530] Chromosome::Descriptor::vfunc_1 (439 bytes)
extern "C" void __fastcall fn_00511530(void* self, int edx_unused, XMLNode* a1) {
    int local;
    int tmp;
    char* base = (char*)self;

    ext_004275E0(base + 0x08, ((int (__thiscall*)(void*, int))ext_0063EFE0)(a1, mem_00A9F838));

    tmp = ((int (__thiscall*)(void*, int))ext_0063EFE0)(a1, mem_00A9F79C);
    ext_0046C0A0(base + 0x40, &tmp);

    tmp = ((int (__thiscall*)(void*, int))ext_0063EFE0)(a1, mem_00A9FA9C);
    ext_0046C0A0(base + 0x44, &tmp);

    tmp = ((int (__thiscall*)(void*, int))ext_0063EFE0)(a1, mem_00A9F798);
    ext_0046C0A0(base + 0x48, &tmp);

    tmp = ((int (__thiscall*)(void*, int))ext_0063EFE0)(a1, mem_00A9FA98);
    ext_0046C0A0(base + 0x4C, &tmp);

    tmp = ((int (__thiscall*)(void*, int))ext_0063EFE0)(a1, mem_00A9F824);
    ext_0046C0A0(base + 0x38, &tmp);

    tmp = ((int (__thiscall*)(void*, int))ext_0063EFE0)(a1, mem_00A9F820);
    ext_0046C0A0(base + 0x3C, &tmp);

    tmp = ((int (__thiscall*)(void*, int))ext_0063EFE0)(a1, mem_00A9F834);
    ext_0046C0A0(base + 0x28, &tmp);

    tmp = ((int (__thiscall*)(void*, int))ext_0063EFE0)(a1, mem_00A9F830);
    ext_0046C0A0(base + 0x2C, &tmp);

    tmp = ((int (__thiscall*)(void*, int))ext_0063EFE0)(a1, mem_00A9F658);
    ext_0046C0A0(base + 0x30, &tmp);

    tmp = ((int (__thiscall*)(void*, int))ext_0063EFE0)(a1, mem_00A9F654);
    ext_0046C0A0(base + 0x34, &tmp);

    tmp = ((int (__thiscall*)(void*, int))ext_0063EFE0)(a1, mem_00A9F55C);
    ext_0053F5F0(&local, &tmp);
    ((void (__thiscall*)(void*, int))ext_004A2500)(self, local);
}

// [0x005116F0] Chromosome::Descriptor::vfunc_3 (375 bytes)
extern "C" __declspec(naked) void __fastcall fn_005116F0(void* self) {
    __asm {
        mov eax, dword ptr [mem_00A9F838]
        push esi
        push edi
        mov edi, dword ptr [esp + 0Ch]
        mov esi, ecx
        push eax
        mov ecx, edi
        call ext_00640110
        lea ecx, [esi + 8]
        mov dword ptr [esp + 0Ch], eax
        call dword ptr [mem_00924FF0]
        push eax
        lea ecx, [esp + 10h]
        call ext_00427550
        mov ecx, dword ptr [mem_00A9F79C]
        push ecx
        mov ecx, edi
        call ext_00640110
        fld dword ptr [esi + 40h]
        push ecx
        fstp dword ptr [esp]
        push eax
        call ext_00640BC0
        mov edx, dword ptr [mem_00A9FA9C]
        add esp, 8
        push edx
        mov ecx, edi
        call ext_00640110
        fld dword ptr [esi + 44h]
        push ecx
        fstp dword ptr [esp]
        push eax
        call ext_00640BC0
        mov eax, dword ptr [mem_00A9F798]
        add esp, 8
        push eax
        mov ecx, edi
        call ext_00640110
        fld dword ptr [esi + 48h]
        push ecx
        fstp dword ptr [esp]
        push eax
        call ext_00640BC0
        mov ecx, dword ptr [mem_00A9FA98]
        add esp, 8
        push ecx
        mov ecx, edi
        call ext_00640110
        fld dword ptr [esi + 4Ch]
        push ecx
        fstp dword ptr [esp]
        push eax
        call ext_00640BC0
        mov edx, dword ptr [mem_00A9F55C]
        add esp, 8
        push edx
        mov ecx, edi
        call ext_00640110
        mov ecx, dword ptr [esi + 24h]
        push ecx
        push eax
        call ext_00640AA0
        mov edx, dword ptr [mem_00A9F824]
        add esp, 8
        push edx
        mov ecx, edi
        call ext_00640110
        fld dword ptr [esi + 38h]
        push ecx
        fstp dword ptr [esp]
        push eax
        call ext_00640BC0
        mov eax, dword ptr [mem_00A9F820]
        add esp, 8
        push eax
        mov ecx, edi
        call ext_00640110
        fld dword ptr [esi + 3Ch]
        push ecx
        fstp dword ptr [esp]
        push eax
        call ext_00640BC0
        mov ecx, dword ptr [mem_00A9F834]
        add esp, 8
        push ecx
        mov ecx, edi
        call ext_00640110
        fld dword ptr [esi + 28h]
        push ecx
        fstp dword ptr [esp]
        push eax
        call ext_00640BC0
        mov edx, dword ptr [mem_00A9F830]
        add esp, 8
        push edx
        mov ecx, edi
        call ext_00640110
        fld dword ptr [esi + 2Ch]
        push ecx
        fstp dword ptr [esp]
        push eax
        call ext_00640BC0
        mov eax, dword ptr [mem_00A9F658]
        add esp, 8
        push eax
        mov ecx, edi
        call ext_00640110
        fld dword ptr [esi + 30h]
        push ecx
        fstp dword ptr [esp]
        push eax
        call ext_00640BC0
        mov ecx, dword ptr [mem_00A9F654]
        add esp, 8
        push ecx
        mov ecx, edi
        call ext_00640110
        fld dword ptr [esi + 34h]
        push ecx
        fstp dword ptr [esp]
        push eax
        call ext_00640BC0
        add esp, 8
        mov eax, edi
        pop edi
        pop esi
        ret 4
    }
}
