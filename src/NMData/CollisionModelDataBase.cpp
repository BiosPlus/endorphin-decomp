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

// [0x005CCB60] NMData::CollisionModelDataBase::vfunc_17_off_C (99 bytes)
extern "C" void ext_005CCA70();
extern "C" void ext_006A5C62();

extern "C" __declspec(naked) void __fastcall fn_005CCB60(void* self) {
    __asm {
        push -1
        push 08a7a5bh
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        push ecx
        push esi
        push 19ch
        mov esi, ecx
        call ext_006A5C62
        add esp, 4
        mov [esp+4], eax
        test eax, eax
        mov dword ptr [esp+10h], 0
        je fn_005CCB60_null
        add esi, -0ch
        push esi
        mov ecx, eax
        call ext_005CCA70
        pop esi
        mov ecx, [esp+4]
        mov fs:[0], ecx
        add esp, 10h
        ret
    fn_005CCB60_null:
        mov ecx, [esp+8]
        xor eax, eax
        pop esi
        mov fs:[0], ecx
        add esp, 10h
        ret
    }
}
