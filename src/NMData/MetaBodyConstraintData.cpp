// Decompiled translation unit: src/NMData/MetaBodyConstraintData.cpp

// [0x004CD090] NMData::MetaBodyConstraintData::vfunc_87 (58 bytes)
extern "C" void ext_004CCC60();
extern "C" void ext_0046AC30();
extern "C" void ext_006A5C5C();

extern "C" __declspec(naked) void __fastcall fn_004CD090(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 180h]
        test ecx, ecx
        je short L_done
        push edi
        call ext_004CCC60
        mov edi, dword ptr [esi + 180h]
        test edi, edi
        je short L_clear
        mov ecx, edi
        call ext_0046AC30
        push edi
        call ext_006A5C5C
        add esp, 4
    L_clear:
        mov dword ptr [esi + 180h], 0
        pop edi
    L_done:
        pop esi
        ret
    }
}

// [0x004CC5B0] NMData::MetaBodyConstraintData::vfunc_15 (88 bytes)
extern "C" void ext_004C3410();
extern "C" void ext_004CBBB0();
extern "C" void ext_00671F30();

extern "C" void* __fastcall fn_004CC5B0(void* self, int edx_unused, void* a1, int a2) {
    volatile int dummy = 0;
    switch (a2) {
    case 0x2d4:
        ((void (__cdecl*)(void*))ext_00671F30)(a1);
        break;
    case 0x2f1:
        if (*(int*)((char*)self + 0x184) == 3) {
            ((void (__cdecl*)(void*, void*))ext_004CBBB0)(a1, self);
        } else {
            ((void (__cdecl*)(void*))ext_00671F30)(a1);
        }
        break;
    default:
        ((void (__thiscall*)(void*, void*, int))ext_004C3410)(self, a1, a2);
        break;
    }
    return a1;
}

// [0x004CA380] NMData::MetaBodyConstraintData::vfunc_59 (34 bytes)
extern "C" void ext_006404E0();
extern "C" int mem_00A9F314;
extern "C" __declspec(naked) void __fastcall fn_004CA380(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [mem_00A9F314]
        push esi
        push edi
        mov esi, ecx
        mov ecx, dword ptr [esp + 0Ch]
        mov edi, dword ptr [esi]
        push eax
        call ext_006404E0
        mov edx, dword ptr [edi + 58h]
        push eax
        mov ecx, esi
        call edx
        pop edi
        pop esi
        ret 4
    }
}

// [0x004CD0D0] NMData::MetaBodyConstraintData::vfunc_90 (188 bytes)
extern "C" void ext_004026E0();
extern "C" void ext_00594000();
extern "C" void ext_00599E70();
extern "C" void ext_004C2760();
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_004CD0D0(void* self) {
    __asm {
        push -1
        push 0x88bc71
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x2c
        push esi
        push edi
        xor edi, edi
        mov esi, ecx
        mov dword ptr [esp + 0xc], edi
        mov dword ptr [esp + 0x10], edi
        mov dword ptr [esp + 0x14], edi
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x13c]
        lea ecx, [esp + 0x8]
        push ecx
        mov ecx, esi
        mov dword ptr [esp + 0x40], edi
        call edx
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x3c], 0xffffffff
        call ext_004026E0
        call ext_00594000
        cmp eax, edi
        je short L_done
        mov eax, dword ptr [esi + 0x168]
        cmp eax, edi
        jne short L_has_p
        call ext_00594000
        mov ecx, eax
        call ext_00599E70
        jmp short L_check_obj
    L_has_p:
        mov eax, dword ptr [eax + 0x38c]
    L_check_obj:
        cmp eax, edi
        je short L_done
        mov edx, dword ptr [eax]
        mov edx, dword ptr [edx + 0xc]
        lea ecx, [esp + 0x18]
        push ecx
        mov ecx, eax
        call edx
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0x40], 1
        call ext_004C2760
        lea ecx, [esp + 0x18]
        mov dword ptr [esp + 0x3c], 0xffffffff
        call dword ptr [mem_00924FF4]
    L_done:
        mov ecx, dword ptr [esp + 0x34]
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x38
        ret
    }
}

extern "C" void __fastcall ext_004CC720(void* self);
extern "C" void __fastcall ext_004CC9E0(void* self);

// [0x004CCAA0] NMData::MetaBodyConstraintData::vfunc_84 (74 bytes)
extern "C" void __fastcall fn_004CCAA0(void* self, int edx_unused, int frame) {
    void* obj = *(void**)((char*)self + 0x180);
    if (obj && *((char*)self + 0x17c)) {
        if (frame >= *(int*)((char*)self + 0x15c) && frame < *(int*)((char*)self + 0x160)) {
            ext_004CC720(obj);
        } else if (frame >= *(int*)((char*)self + 0x160) || frame < *(int*)((char*)self + 0x15c)) {
            ext_004CC9E0(obj);
        }
    }
}

// [0x004CA310] NMData::MetaBodyConstraintData::vfunc_14 (90 bytes)
extern "C" void ext_004C2070();
extern "C" void ext_00661680();

extern "C" __declspec(naked) void* __fastcall fn_004CA310(void* self, int edx_unused, void* a1, int a2) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0xc]
        cmp eax, 0xd
        push esi
        mov esi, dword ptr [esp + 0xc]
        mov dword ptr [esp + 0x4], 0
        je L_194
        cmp eax, 0x134
        je L_188
        push eax
        push esi
        call ext_004C2070
        mov eax, esi
        pop esi
        pop ecx
        ret 8
    L_188:
        add ecx, 0x188
        push ecx
        push 3
        mov ecx, esi
        call ext_00661680
        mov eax, esi
        pop esi
        pop ecx
        ret 8
    L_194:
        add ecx, 0x194
        push ecx
        push 3
        mov ecx, esi
        call ext_00661680
        mov eax, esi
        pop esi
        pop ecx
        ret 8
    }
}

// [0x004CD020] NMData::MetaBodyConstraintData::vfunc_17_off_C (99 bytes)
extern "C" void ext_004CCE20();
extern "C" void ext_006A5C62();

extern "C" __declspec(naked) void __fastcall fn_004CD020(void* self) {
    __asm {
        push -1
        push 08a7a5bh
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        push ecx
        push esi
        push 1a4h
        mov esi, ecx
        call ext_006A5C62
        add esp, 4
        mov [esp+4], eax
        test eax, eax
        mov dword ptr [esp+10h], 0
        je fn_004CD020_null
        add esi, -0ch
        push esi
        mov ecx, eax
        call ext_004CCE20
        pop esi
        mov ecx, [esp+4]
        mov fs:[0], ecx
        add esp, 10h
        ret
    fn_004CD020_null:
        mov ecx, [esp+8]
        xor eax, eax
        pop esi
        mov fs:[0], ecx
        add esp, 10h
        ret
    }
}

extern "C" void* ext_00427550(void* self, int edx, const char* s);
extern "C" void ext_004C1DE0(void* self, int edx, void* a1);
extern "C" void* ext_004CA5E0(void* self);
extern "C" void* ext_00640110(void* self, int edx, int a1);
extern "C" void* ext_00640390(void* self, int edx, int a1, int a2);
extern "C" void ext_00640A80(void* a1, int a2);
extern "C" void ext_0067F040(void* a1, void* a2);
extern "C" int mem_00A9F74C;
extern "C" int mem_00A9F788;
extern "C" int mem_00924FF0;
extern "C" int mem_00A9F1B8;
extern "C" int mem_00A9ED1C;

// [0x004CA6A0] NMData::MetaBodyConstraintData::vfunc_22 (164 bytes)
extern "C" __declspec(naked) void* __fastcall fn_004CA6A0(void* self, int edx, void* a1) {
    __asm {
        mov     eax, dword ptr [mem_00A9F74C]
        push    ebx
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x10]
        mov     esi, ecx
        push    eax
        mov     ecx, edi
        call    ext_00640110
        movzx   ecx, byte ptr [esi + 0x1A0]
        push    ecx
        push    eax
        call    ext_00640A80
        add     esp, 8
        push    edi
        mov     ecx, esi
        call    ext_004C1DE0
        mov     edx, dword ptr [mem_00A9F788]
        push    edx
        mov     ecx, edi
        call    ext_00640110
        mov     ecx, esi
        mov     ebx, eax
        call    ext_004CA5E0
        mov     ecx, eax
        mov     dword ptr [esp + 0x10], ebx
        call    dword ptr [mem_00924FF0]
        push    eax
        lea     ecx, [esp + 0x14]
        call    ext_00427550
        mov     ecx, dword ptr [mem_00A9F1B8]
        lea     eax, [esi + 0x188]
        push    eax
        push    0
        push    ecx
        mov     ecx, edi
        call    ext_00640390
        push    eax
        call    ext_0067F040
        mov     edx, dword ptr [mem_00A9ED1C]
        add     esp, 8
        add     esi, 0x194
        push    esi
        push    0
        push    edx
        mov     ecx, edi
        call    ext_00640390
        push    eax
        call    ext_0067F040
        add     esp, 8
        mov     eax, edi
        pop     edi
        pop     esi
        pop     ebx
        ret     4
    }
}

// [0x004CCFB0] NMData::MetaBodyConstraintData::vfunc_10 (112 bytes)
extern "C" void ext_004CCE20();
extern "C" void ext_006A6E9E();
extern "C" int mem_0088C1B1;
extern "C" int mem_00A32978;
extern "C" int mem_00A2E2F8;
extern "C" __declspec(naked) void __fastcall fn_004CCFB0(void* self, int edx_unused, void* a1) {
    __asm {
        push -1
        push offset mem_0088C1B1
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        mov eax, dword ptr [esp + 0x14]
        push esi
        push edi
        push 0
        push offset mem_00A32978
        push offset mem_00A2E2F8
        mov esi, ecx
        push 0
        push eax
        mov dword ptr [esp + 0x1c], esi
        call ext_006A6E9E
        mov edi, eax
        add esp, 0x14
        test edi, edi
        je short L_done
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx]
        push 0
        mov ecx, esi
        call eax
        mov dword ptr [esp + 0x1c], esi
        push edi
        mov ecx, esi
        mov dword ptr [esp + 0x18], 0
        call ext_004CCE20
L_done:
        mov ecx, dword ptr [esp + 0xc]
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 4
    }
}

// [0x004CE390] NMData::MetaBodyConstraintData::vfunc_88 (136 bytes)
extern "C" void ext_006A5C62();
extern "C" void ext_004CCC30();
extern "C" void ext_0046AC30();
extern "C" void ext_006A5C5C();
extern "C" void ext_004CE040();

extern "C" __declspec(naked) void __fastcall fn_004CE390(void* self) {
    __asm {
        push -1
        push 0x8a7a5b
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        push ecx
        push ebx
        push esi
        push edi
        push 0x30
        mov edi, ecx
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp + 0xc], eax
        test eax, eax
        mov dword ptr [esp + 0x18], 0
        je short L_null
        mov ecx, eax
        call ext_004CCC30
        mov ebx, eax
        jmp short L_join
L_null:
        xor ebx, ebx
L_join:
        mov esi, dword ptr [edi + 0x180]
        cmp ebx, esi
        mov dword ptr [esp + 0x18], -1
        je short L_skip
        test esi, esi
        je short L_skip
        mov ecx, esi
        call ext_0046AC30
        push esi
        call ext_006A5C5C
        add esp, 4
L_skip:
        push edi
        mov ecx, ebx
        mov dword ptr [edi + 0x180], ebx
        call ext_004CE040
        mov ecx, dword ptr [esp + 0x10]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x004CD190] NMData::MetaBodyConstraintData::vfunc_1_off_154 (318 bytes)
extern "C" void ext_004026E0();
extern "C" void ext_004A6970();
extern "C" void ext_004C28C0();
extern "C" void ext_006A5C5C();
extern "C" int mem_00925134;
extern "C" int mem_0088C1D0;

extern "C" __declspec(naked) void __fastcall fn_004CD190(void* self) {
    __asm {
        push -1
        push offset mem_0088C1D0
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 28h
        push ebx
        push ebp
        xor ebp, ebp
        push esi
        push edi
        mov edi, ecx
        mov dword ptr [esp + 1ch], ebp
        mov dword ptr [esp + 20h], ebp
        mov dword ptr [esp + 24h], ebp
        mov esi, dword ptr [esp + 48h]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 34h]
        lea ecx, [esp + 18h]
        push ecx
        mov ecx, esi
        mov dword ptr [esp + 44h], ebp
        call edx
        lea eax, [esp + 18h]
        push eax
        lea ecx, [edi - 154h]
        call ext_004C28C0
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 14h]
        mov ecx, esi
        call eax
        push eax
        lea ecx, [esp + 2ch]
        call ext_004A6970
        mov edi, dword ptr [edi + 30h]
        cmp edi, 4
        mov ebx, dword ptr [esp + 2ch]
        mov byte ptr [esp + 40h], 1
        je short L_1
        cmp edi, 3
        jne L_3
    L_1:
        cmp ebx, ebp
        je L_g
        mov esi, dword ptr [esp + 30h]
        mov ecx, esi
        sub ecx, ebx
        sar ecx, 2
        je L_3
        cmp ebx, esi
        jbe L_a
        call dword ptr [mem_00925134]
    L_a:
        cmp esi, ebx
        lea eax, [esp + 28h]
        mov ebp, eax
        mov dword ptr [esp + 14h], esi
        ja L_b
        call dword ptr [mem_00925134]
    L_b:
        lea edi, [esi - 4]
        cmp edi, dword ptr [ebp + 8]
        jb L_c
        call dword ptr [mem_00925134]
    L_c:
        mov eax, dword ptr [edi]
        mov edx, dword ptr [eax + 0ch]
        lea ecx, [eax + 0ch]
        mov eax, dword ptr [edx + 24h]
        push 7
        call eax
        cmp ebx, esi
        jbe L_d
        call dword ptr [mem_00925134]
    L_d:
        cmp esi, ebx
        lea eax, [esp + 28h]
        mov ebp, eax
        mov dword ptr [esp + 14h], esi
        ja L_e
        call dword ptr [mem_00925134]
    L_e:
        cmp edi, dword ptr [ebp + 8]
        jb L_f
        call dword ptr [mem_00925134]
    L_f:
        mov edi, dword ptr [edi]
        mov edx, dword ptr [edi + 0ch]
        mov eax, dword ptr [edx + 28h]
        lea ecx, [edi + 0ch]
        push 1
        push 7
        call eax
        xor ebp, ebp
    L_3:
        cmp ebx, ebp
        je L_g
        push ebx
        call ext_006A5C5C
        add esp, 4
    L_g:
        lea ecx, [esp + 18h]
        mov dword ptr [esp + 40h], 0ffffffffh
        call ext_004026E0
        mov ecx, dword ptr [esp + 38h]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 34h
        ret 4
    }
}

// [0x004CD4A0] NMData::MetaBodyConstraintData::vfunc_21 (654 bytes)
extern "C" void ext_004275E0();
extern "C" void ext_00427640();
extern "C" void ext_0049F540();
extern "C" void ext_004C24C0();
extern "C" void ext_004CA590();
extern "C" void ext_0063EFE0();
extern "C" void ext_0063F530();
extern "C" void ext_0067EFD0();
extern "C" int mem_00A9F74C;
extern "C" int mem_00924FE8;
extern "C" int mem_00AE29D0;
extern "C" int mem_00A9F838;
extern "C" int mem_00A9F788;
extern "C" int mem_00A9F1B8;
extern "C" int mem_00A9ED1C;
extern "C" int mem_00A9F0C0;
extern "C" int mem_00A9F0C4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_004CD4A0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8b56f9
        push eax
        mov dword ptr fs:[0], esp
        mov eax, dword ptr [mem_00A9F74C]
        sub esp, 0x28
        push ebx
        mov ebx, dword ptr [esp + 0x3c]
        push esi
        push edi
        mov edi, ecx
        push eax
        mov ecx, ebx
        call ext_0063EFE0
        cmp eax, 0xb53a34
        je short L_set_1
        cmp eax, 0xb53b30
        je short L_set_1
        cmp eax, 0xb53ab0
        je short L_set_1
        cmp eax, 0xb53a70
        je short L_set_1
        cmp eax, 0xb53af0
        jne short L_call_427640
    L_set_1:
        mov byte ptr [edi + 0x1a0], 1
        jmp short L_str_init
    L_call_427640:
        lea ecx, [esp + 0x44]
        push ecx
        lea edx, [edi + 0x1a0]
        push edx
        mov dword ptr [esp + 0x4c], eax
        call ext_00427640
        add esp, 8
    L_str_init:
        lea ecx, [esp + 0x18]
        call dword ptr [mem_00924FE8]
        mov eax, dword ptr [mem_00AE29D0]
        test eax, eax
        mov dword ptr [esp + 0x3c], 0
        je short L_else_str
        cmp dword ptr [eax + 0x538], 5
        jge short L_else_str
        mov eax, dword ptr [mem_00A9F838]
        push eax
        mov ecx, ebx
        call ext_0063EFE0
        push eax
        lea ecx, [esp + 0x1c]
        push ecx
        jmp short L_call_4275E0
    L_else_str:
        mov edx, dword ptr [mem_00A9F788]
        push edx
        mov ecx, ebx
        call ext_0063EFE0
        push eax
        lea eax, [esp + 0x1c]
        push eax
    L_call_4275E0:
        call ext_004275E0
        add esp, 8
        lea ecx, [esp + 0x18]
        push ecx
        mov ecx, edi
        call ext_004CA590
        push ebx
        mov ecx, edi
        call ext_004C24C0
        mov edx, dword ptr [mem_00A9F1B8]
        push 1
        push 0
        push edx
        mov ecx, ebx
        call ext_0063F530
        cmp eax, 0xb53a34
        je short L_esi_magic
        cmp eax, 0xb53b30
        je short L_esi_magic
        cmp eax, 0xb53ab0
        je short L_esi_magic
        cmp eax, 0xb53a70
        je short L_esi_magic
        cmp eax, 0xb53af0
        jne short L_esi_eax
    L_esi_magic:
        mov esi, 0xb53b30
        jmp short L_check_esi_1
    L_esi_eax:
        mov esi, eax
    L_check_esi_1:
        cmp esi, 0xb53a34
        je short L_next_2
        cmp esi, 0xb53b30
        je short L_next_2
        cmp esi, 0xb53ab0
        je short L_next_2
        cmp esi, 0xb53a70
        je short L_next_2
        cmp esi, 0xb53af0
        je short L_next_2
        lea eax, [esp + 0xc]
        push esi
        push eax
        call ext_0067EFD0
        fld dword ptr [eax]
        fstp dword ptr [edi + 0x188]
        add esp, 8
        fld dword ptr [eax + 4]
        fstp dword ptr [edi + 0x18c]
        fld dword ptr [eax + 8]
        fstp dword ptr [edi + 0x190]
    L_next_2:
        mov ecx, dword ptr [mem_00A9ED1C]
        push 1
        push 0
        push ecx
        mov ecx, ebx
        call ext_0063F530
        cmp eax, 0xb53a34
        je short L_eax_magic_2
        cmp eax, 0xb53b30
        je short L_eax_magic_2
        cmp eax, 0xb53ab0
        je short L_eax_magic_2
        cmp eax, 0xb53a70
        je short L_eax_magic_2
        cmp eax, 0xb53af0
        jne short L_check_esi_2
    L_eax_magic_2:
        mov eax, 0xb53b30
    L_check_esi_2:
        cmp esi, 0xb53a34
        je short L_next_3
        cmp esi, 0xb53b30
        je short L_next_3
        cmp esi, 0xb53ab0
        je short L_next_3
        cmp esi, 0xb53a70
        je short L_next_3
        cmp esi, 0xb53af0
        je short L_next_3
        push eax
        lea edx, [esp + 0x10]
        push edx
        call ext_0067EFD0
        fld dword ptr [eax]
        fstp dword ptr [edi + 0x194]
        add esp, 8
        fld dword ptr [eax + 4]
        fstp dword ptr [edi + 0x198]
        fld dword ptr [eax + 8]
        fstp dword ptr [edi + 0x19c]
    L_next_3:
        mov eax, dword ptr [mem_00A9F0C0]
        push 1
        push 0
        push eax
        mov ecx, ebx
        call ext_0063F530
        cmp eax, 0xb53a34
        je short L_eax_magic_3
        cmp eax, 0xb53b30
        je short L_eax_magic_3
        cmp eax, 0xb53ab0
        je short L_eax_magic_3
        cmp eax, 0xb53a70
        je short L_eax_magic_3
        cmp eax, 0xb53af0
        jne short L_check_eax_3
    L_eax_magic_3:
        mov eax, 0xb53b30
    L_check_eax_3:
        cmp eax, 0xb53a34
        je short L_done
        cmp eax, 0xb53b30
        je short L_done
        cmp eax, 0xb53ab0
        je short L_done
        cmp eax, 0xb53a70
        je short L_done
        cmp eax, 0xb53af0
        je short L_done
        mov ecx, dword ptr [mem_00A9F0C4]
        push 0
        push ecx
        add edi, 0x16c
        push edi
        push eax
        call ext_0049F540
        add esp, 0x10
    L_done:
        lea ecx, [esp + 0x18]
        mov dword ptr [esp + 0x3c], -1
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x34]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x34
        ret 4
    }
}
