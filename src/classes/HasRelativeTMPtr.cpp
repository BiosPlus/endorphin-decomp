// Decompiled translation unit: src/classes/HasRelativeTMPtr.cpp

extern "C" void ext_004875A0();
extern "C" int mem_009253D0;

// [0x0053A7A0] HasRelativeTMPtr::vfunc_2 (24 bytes)
extern "C" int __fastcall fn_0053A7A0(void* self, int edx_unused, int a1) {
    unsigned char* p = (unsigned char*)self;
    int field4 = *(int*)(p + 4);
    void* field8 = *(void**)(p + 8);
    typedef void (__thiscall *Fn)(void*, int, int);
    ((Fn)ext_004875A0)(field8, a1, field4);
    return a1;
}

// [0x00532290] HasRelativeTMPtr::vfunc_10 (39 bytes)
extern "C" void __fastcall fn_00532290(void* self, int edx_unused, void* a1) {
    unsigned char* p = (unsigned char*)self;
    typedef void (__thiscall *Fn)(void*, int);
    void** vt = *(void***)a1;
    ((Fn)vt[4])(a1, *(int*)(p + 4));
    vt = *(void***)a1;
    ((Fn)vt[4])(a1, *(int*)(p + 8));
}

// [0x005322C0] HasRelativeTMPtr::vfunc_12 (45 bytes)
extern "C" void __fastcall fn_005322C0(void* self, int edx_unused, void* a1) {
    unsigned char* p = (unsigned char*)self;
    typedef void (__thiscall *Fn)(void*, int);
    void** vt = *(void***)a1;
    ((Fn)vt[7])(a1, *(int*)(p + 4) + 0x30);
    vt = *(void***)a1;
    ((Fn)vt[7])(a1, *(int*)(p + 8) + 0x30);
}

// [0x00532240] HasRelativeTMPtr::vfunc_13 (73 bytes)
extern "C" __declspec(naked) void __fastcall fn_00532240(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x4]
        fld dword ptr [eax + 0x38]
        add eax, 0x30
        push edi
        mov edi, dword ptr [mem_009253D0]
        sub esp, 0xc
        fstp dword ptr [esp + 0x8]
        fld dword ptr [eax + 0x4]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [eax]
        fstp dword ptr [esp]
        call edi
        mov eax, dword ptr [esi + 0x8]
        fld dword ptr [eax + 0x38]
        add eax, 0x30
        sub esp, 0xc
        fstp dword ptr [esp + 0x8]
        fld dword ptr [eax + 0x4]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [eax]
        fstp dword ptr [esp]
        call edi
        pop edi
        pop esi
        ret
    }
}
