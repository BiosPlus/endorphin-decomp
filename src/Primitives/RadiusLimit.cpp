// Decompiled translation unit: src/Primitives/RadiusLimit.cpp

// [0x0053C090] Primitives::RadiusLimit::vfunc_28 (42 bytes)
extern "C" void ext_005B11D0();
extern "C" void ext_0053DF00();
extern "C" void ext_0063E036();

typedef float* (__thiscall *GetFloatPtrFn)(void* ecx_this, int arg);
typedef void (__stdcall *GluSphereFn)(void* quadric, double radius, int slices, int stacks);

extern "C" void __fastcall fn_0053C090(void* self, int edx_unused, int a1) {
    char* p = reinterpret_cast<char*>(self);
    void* sub = *reinterpret_cast<void**>(p + 0x20);
    float* radius_ptr = ((GetFloatPtrFn)ext_005B11D0)(sub, 3);
    double radius = (double)(*radius_ptr);
    GluSphereFn gluSphere = (GluSphereFn)ext_0063E036;
    gluSphere(*reinterpret_cast<void**>(p + 0x48), radius,
              *reinterpret_cast<int*>(p + 0x3c), *reinterpret_cast<int*>(p + 0x44));
}

// [0x0053DF90] Primitives::RadiusLimit::vfunc_25 (49 bytes)
extern "C" void __fastcall fn_0053DF90(void* self, int edx_unused, int a1, void* a2, int a3) {
    ((void (__thiscall*)(void*, int, void*, int))ext_0053DF00)(self, a1, a2, a3);
    unsigned char* s = (unsigned char*)self;
    unsigned char* o = (unsigned char*)a2;
    *(int*)(s + 0x3c) = *(int*)(o + 0x80);
    *(int*)(s + 0x44) = *(int*)(o + 0x84);
}

// [0x0053D1E0] Primitives::RadiusLimit::vfunc_23 (57 bytes)
extern "C" void ext_0053A5E0();
extern "C" void ext_0053AD70();

extern "C" __declspec(naked) void __fastcall fn_0053D1E0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        call ext_0053AD70
        mov ecx, dword ptr [esp + 0xc]
        sub esp, 0x8
        mov eax, esp
        mov dword ptr [eax + 0x4], ecx
        mov ecx, esi
        mov dword ptr [eax], 0x93a444
        call ext_0053A5E0
        mov eax, dword ptr [esi + 0x20]
        test eax, eax
        je skip_set
        cmp byte ptr [eax + 0x4], 0x0
        je skip_set
        mov byte ptr [esi + 0x4], 0x1
skip_set:
        mov al, byte ptr [esi + 0x4]
        pop esi
        ret 0x8
    }
}
