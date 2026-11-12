// Decompiled translation unit: src/classes/Effector.cpp

extern "C" void ext_00603090();
extern "C" void ext_006A6E9E();
extern "C" int mem_00A93710;
extern "C" int mem_0092A270;

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

extern "C" void ext_00603230();

// [0x00603720] Effector::vfunc_33 (72 bytes)
extern "C" __declspec(naked) void __fastcall fn_00603720(void* self) {
    __asm {
        push esi
        mov esi, ecx
        call ext_00603230
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 34h]
        mov ecx, esi
        call edx
        mov ecx, dword ptr [esi + 4]
        sub esp, 8
        test al, al
        je L_zero
        fld dword ptr [esi + 54h]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [esi + 34h]
        fstp qword ptr [esp]
        mov eax, dword ptr [eax + 0ch]
        push edx
        call eax
        jmp L_tail
L_zero:
        fldz
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [esi + 34h]
        fstp qword ptr [esp]
        mov edx, dword ptr [edx + 0ch]
        push eax
        call edx
L_tail:
        mov ecx, dword ptr [esi + 4]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        pop esi
        jmp edx
    }
}

extern "C" void ext_00603130();

// [0x006031E0] Effector::vfunc_18 (71 bytes)
extern "C" void __fastcall fn_006031E0(void* self) {
    char* s = (char*)self;
    struct S20 { int d[5]; };
    *(S20*)(s + 0x4c) = *(S20*)(s + 0x38);
    void* obj = *(void**)(s + 4);
    typedef float (__thiscall *VFunc)(void*, int);
    typedef void (__thiscall *Callee)(void*, float);
    ((Callee)ext_00603130)(self, ((VFunc)(*(void***)obj)[8])(obj, *(int*)(s + 0x34)));
    typedef void (__thiscall *TailFunc)(void*);
    ((TailFunc)(*(void***)self)[33])(self);
}

// [0x00603770] Effector::vfunc_14 (181 bytes)
extern "C" __declspec(naked) void __fastcall fn_00603770(void* self) {
    __asm {
        sub esp, 0ch
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi+4]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [esi+34h]
        mov eax, dword ptr [eax+9Ch]
        push edx
        call eax
        fadd dword ptr [mem_00A93710]
        mov ecx, dword ptr [esi+4]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [esi+34h]
        fstp dword ptr [esp+8]
        mov edx, dword ptr [edx+98h]
        push eax
        call edx
        fsub dword ptr [mem_00A93710]
        mov ecx, dword ptr [esi+4]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [esi+34h]
        fstp dword ptr [esp+0ch]
        mov eax, dword ptr [eax+20h]
        push edx
        call eax
        fstp dword ptr [esp+4]
        fld dword ptr [esp+4]
        pop esi
        fld dword ptr [esp+4]
        fcom st(1)
        fnstsw ax
        fld dword ptr [esp+8]
        test ah, 41h
        jne short L_603770_a
        fstp st(2)
        fst dword ptr [esp]
        jmp short L_603770_b
L_603770_a:
        fcom st(2)
        fnstsw ax
        fstp st(2)
        test ah, 5
        jp short L_603770_b
        fxch st(1)
        fst dword ptr [esp]
        fxch st(1)
L_603770_b:
        fld dword ptr [esp]
        mov eax, dword ptr [esp+10h]
        fsub st, st(1)
        fxch st(2)
        fsubrp st(1), st
        fstp dword ptr [esp+8]
        fdiv dword ptr [esp+8]
        fstp dword ptr [esp+8]
        fld dword ptr [esp+8]
        fadd st(0), st
        fsub qword ptr [mem_0092A270]
        fstp dword ptr [eax]
        fldz
        fst dword ptr [eax+4]
        fst dword ptr [eax+8]
        fstp dword ptr [eax+0ch]
        add esp, 0ch
        ret 4
    }
}
