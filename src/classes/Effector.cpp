// Decompiled translation unit: src/classes/Effector.cpp

extern "C" void ext_00603090();
extern "C" void ext_006A6E9E();

// [0x006036D0] Effector::vfunc_19 (18 bytes)
extern "C" void __fastcall fn_006036D0(void* self, int edx_unused, float* p) {
    typedef void (__thiscall *Fn)(void*, float);
    ((Fn)ext_00603090)(self, *p);
}

// [0x00602F50] Effector::vfunc_4 (29 bytes)
extern "C" void __fastcall fn_00602F50(void* self, int edx_unused, int a1) {
    typedef void* (__cdecl *Fn)(void*, int, void*, void*, int);
    ((Fn)ext_006A6E9E)(*(void**)((char*)self + 4), 0, (void*)0xA93730, (void*)0xA2E2F8, 0);
}

// [0x006033B0] Effector::vfunc_30 (43 bytes)
extern "C" __declspec(naked) void __fastcall fn_006033B0(void* self, int edx_unused, float a1) {
    __asm {
        fldz
        fcom dword ptr [ecx + 54h]
        fnstsw ax
        test ah, 41h
        jne L_nonneg
L_store:
        fstp dword ptr [ecx + 54h]
        ret 4
L_nonneg:
        fstp st(0)
        fld dword ptr [ecx + 54h]
        fld dword ptr [esp + 4]
        fcom st(1)
        fnstsw ax
        fstp st(1)
        test ah, 5
        jnp L_store
        fstp st(0)
        ret 4
    }
}

// [0x00603370] Effector::vfunc_28 (56 bytes)
extern "C" __declspec(naked) void __fastcall fn_00603370(void* self, int edx_unused, float a1) {
    __asm {
        fld dword ptr [esp + 4]
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 64h]
        push ecx
        fstp dword ptr [esp]
        call edx
        mov eax, dword ptr [esi]
        fld dword ptr [esp + 8]
        mov edx, dword ptr [eax + 68h]
        push ecx
        mov ecx, esi
        fstp dword ptr [esp]
        call edx
        fld dword ptr [esp + 8]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 6Ch]
        push ecx
        mov ecx, esi
        fstp dword ptr [esp]
        call edx
        pop esi
        ret 4
    }
}

// [0x00603020] Effector::vfunc_12 (100 bytes)
extern "C" void ext_006A6E9E();

extern "C" __declspec(naked) void __fastcall fn_00603020(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        push 1
        push 0A93790h
        push 0A93768h
        push 0
        push eax
        mov esi, ecx
        call ext_006A6E9E
        mov ecx, dword ptr [eax + 44h]
        mov dword ptr [esi + 34h], ecx
        mov edx, dword ptr [eax + 48h]
        mov dword ptr [esi + 4Ch], edx
        mov ecx, dword ptr [eax + 4Ch]
        mov dword ptr [esi + 50h], ecx
        mov edx, dword ptr [eax + 50h]
        mov dword ptr [esi + 54h], edx
        mov ecx, dword ptr [eax + 54h]
        mov dword ptr [esi + 58h], ecx
        mov edx, dword ptr [eax + 58h]
        mov dword ptr [esi + 5Ch], edx
        mov ecx, dword ptr [eax + 48h]
        mov dword ptr [esi + 38h], ecx
        mov edx, dword ptr [eax + 4Ch]
        mov dword ptr [esi + 3Ch], edx
        mov ecx, dword ptr [eax + 50h]
        mov dword ptr [esi + 40h], ecx
        mov edx, dword ptr [eax + 54h]
        mov dword ptr [esi + 44h], edx
        mov eax, dword ptr [eax + 58h]
        add esp, 14h
        mov dword ptr [esi + 48h], eax
        pop esi
        ret 4
    }
}
