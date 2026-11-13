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
