// Decompiled translation unit: src/NMData/CollisionModelDataBase.cpp

// [0x0058F630] NMData::CollisionModelDataBase::vfunc_21 (27 bytes)
extern "C" void ext_00589E30();
extern "C" void ext_0058EB60();

// Callee signatures: __thiscall, one stack argument each (ret 4 convention).
typedef void (__thiscall *ThisCallArg1)(void* self, int a1);

extern "C" void __fastcall fn_0058F630(void* self, int edx_unused, int a1) {
    (void)edx_unused;
    ((ThisCallArg1)ext_00589E30)(self, a1);
    ((ThisCallArg1)ext_0058EB60)(self, a1);
}

// [0x0058F650] NMData::CollisionModelDataBase::vfunc_22 (29 bytes)
extern "C" void ext_00586C70();
extern "C" void ext_0058A1C0();

extern "C" int __fastcall fn_0058F650(void* self, int edx_unused, int a1) {
    (void)edx_unused;
    ((ThisCallArg1)ext_00586C70)(self, a1);
    ((ThisCallArg1)ext_0058A1C0)(self, a1);
    return a1;
}

// [0x005C3010] NMData::CollisionModelDataBase::vfunc_15 (32 bytes)
extern "C" void ext_005DF1F0();

extern "C" __declspec(naked) int __fastcall fn_005C3010(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0xc]
        push esi
        mov esi, dword ptr [esp + 0xc]
        push eax
        push esi
        mov dword ptr [esp + 0xc], 0
        call ext_005DF1F0
        mov eax, esi
        pop esi
        pop ecx
        ret 8
    }
}

// [0x005C3660] NMData::CollisionModelDataBase::vfunc_33 (46 bytes)
extern "C" void ext_0058A1A0();

extern "C" void __fastcall fn_005C3660(void* self) {
    unsigned char* p = (unsigned char*)self;
    void* obj = *(void**)(p + 0x15c);
    if (obj) {
        void** vt = *(void***)obj;
        ((void (__thiscall *)(void*, int))vt[0])(obj, 1);
    }
    *(void**)(p + 0x15c) = 0;
    *(unsigned char*)(p + 0x160) = 1;
    ((void (__fastcall *)(void*))ext_0058A1A0)(self);
}
