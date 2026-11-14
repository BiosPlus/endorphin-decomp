// Decompiled translation unit: src/Primitives/Hinge.cpp

extern "C" void ext_0053A930();
extern "C" int mem_009553B0;

// [0x0053BED0] Primitives::Hinge::vfunc_30 (26 bytes)
extern "C" __declspec(naked) void __fastcall fn_0053BED0(void* self, int edx_unused, int a1, int a2) {
    __asm {
        mov edx, dword ptr [esp + 8]
        sub esp, 8
        mov eax, esp
        mov dword ptr [eax], offset mem_009553B0
        mov dword ptr [eax + 4], edx
        call ext_0053A930
        ret 8
    }
}

// [0x0053CB60] Primitives::Hinge::vfunc_28 (1281 bytes)
extern "C" int mem_0092546C;
extern "C" int mem_00925520;
extern "C" int mem_00925414;
extern "C" int mem_00955A30;
extern "C" int mem_009254CC;
extern "C" int mem_00925490;
extern "C" int mem_00955C78;
extern "C" int mem_00955C70;
extern "C" int mem_00955C68;
extern "C" int mem_00955C60;
extern "C" int mem_0092548C;
extern "C" int mem_00925488;
extern "C" int mem_00955A38;
extern "C" int mem_00955C58;
extern "C" int mem_0092C528;
extern "C" int mem_009254AC;
extern "C" int mem_0093F7B8;
extern "C" int mem_009253D0;
extern "C" int mem_00925404;
extern "C" int mem_0092552C;

extern "C" __declspec(naked) void __fastcall fn_0053CB60(void* self, int edx_unused, int a1) {
    __asm {
        sub esp, 18h
        push ebx
        push ebp
        push esi
        push edi
        push 4
        mov edi, ecx
        call dword ptr [mem_0092546C]
        fld1
        push ecx
        fstp dword ptr [esp]
        call dword ptr [mem_00925520]
        call dword ptr [mem_00925414]
        fldz
        sub esp, 10h
        fst dword ptr [esp + 0ch]
        fld1
        fstp dword ptr [esp + 8]
        fstp dword ptr [esp + 4]
        fld dword ptr [mem_00955A30]
        fstp dword ptr [esp]
        call dword ptr [mem_009254CC]
        fld dword ptr [edi + 3Ch]
        mov ebx, dword ptr [mem_00925490]
        fmul qword ptr [mem_00955C78]
        push 1
        fstp dword ptr [esp + 24h]
        fld dword ptr [edi + 3Ch]
        fmul qword ptr [mem_00955C70]
        fstp dword ptr [esp + 20h]
        fld dword ptr [edi + 3Ch]
        fmul qword ptr [mem_00955C68]
        fstp dword ptr [esp + 1Ch]
        fld dword ptr [edi + 3Ch]
        fmul qword ptr [mem_00955C60]
        fstp dword ptr [esp + 18h]
        call ebx
        fld dword ptr [esp + 14h]
        mov esi, dword ptr [mem_0092548C]
        fchs
        sub esp, 0Ch
        fstp dword ptr [esp + 30h]
        fld dword ptr [esp + 30h]
        fstp dword ptr [esp + 8]
        fldz
        fst dword ptr [esp + 4]
        fstp dword ptr [esp]
        call esi
        fld dword ptr [esp + 18h]
        sub esp, 0Ch
        fchs
        fstp dword ptr [esp + 8]
        fldz
        fst dword ptr [esp + 4]
        fstp dword ptr [esp]
        call esi
        fld dword ptr [esp + 1Ch]
        sub esp, 0Ch
        fchs
        fstp dword ptr [esp + 8]
        fldz
        fst dword ptr [esp + 4]
        fstp dword ptr [esp]
        call esi
        fld dword ptr [esp + 20h]
        sub esp, 0Ch
        fchs
        fstp dword ptr [esp + 8]
        fldz
        fst dword ptr [esp + 4]
        fstp dword ptr [esp]
        call esi
        fld dword ptr [esp + 20h]
        sub esp, 0Ch
        fstp dword ptr [esp + 8]
        fldz
        fst dword ptr [esp + 4]
        fstp dword ptr [esp]
        call esi
        fld dword ptr [esp + 1Ch]
        sub esp, 0Ch
        fstp dword ptr [esp + 8]
        fldz
        fst dword ptr [esp + 4]
        fstp dword ptr [esp]
        call esi
        fld dword ptr [esp + 18h]
        sub esp, 0Ch
        fstp dword ptr [esp + 8]
        fldz
        fst dword ptr [esp + 4]
        fstp dword ptr [esp]
        call esi
        fld dword ptr [esp + 14h]
        sub esp, 0Ch
        fstp dword ptr [esp + 8]
        fldz
        fst dword ptr [esp + 4]
        fstp dword ptr [esp]
        call esi
        mov ebp, dword ptr [mem_00925488]
        call ebp
        test dword ptr [edi + 1Ch], 20000h
        je L_53D011
        fld dword ptr [edi + 3Ch]
        push 7
        fmul qword ptr [mem_00955A38]
        fstp dword ptr [esp + 14h]
        fld dword ptr [edi + 3Ch]
        fmul qword ptr [mem_00955C58]
        fstp dword ptr [esp + 24h]
        fld dword ptr [edi + 3Ch]
        fmul qword ptr [mem_0092C528]
        fstp dword ptr [esp + 18h]
        call ebx
        fldz
        mov ebx, dword ptr [mem_009254AC]
        sub esp, 0Ch
        fst dword ptr [esp + 8]
        fstp dword ptr [esp + 4]
        fld1
        fstp dword ptr [esp]
        call ebx
        fld dword ptr [esp + 10h]
        fchs
        sub esp, 0Ch
        fstp dword ptr [esp + 28h]
        fld dword ptr [esp + 28h]
        fstp dword ptr [esp + 8]
        fldz
        fstp dword ptr [esp + 4]
        fld dword ptr [esp + 20h]
        fstp dword ptr [esp]
        call esi
        fld dword ptr [esp + 1Ch]
        sub esp, 0Ch
        fstp dword ptr [esp + 8]
        fld dword ptr [esp + 2Ch]
        fstp dword ptr [esp + 4]
        fld dword ptr [esp + 20h]
        fstp dword ptr [esp]
        call esi
        fld dword ptr [esp + 10h]
        sub esp, 0Ch
        fstp dword ptr [esp + 8]
        fld dword ptr [esp + 2Ch]
        fstp dword ptr [esp + 4]
        fld dword ptr [esp + 20h]
        fstp dword ptr [esp]
        call esi
        fld dword ptr [esp + 10h]
        sub esp, 0Ch
        fstp dword ptr [esp + 8]
        fldz
        fstp dword ptr [esp + 4]
        fld dword ptr [esp + 20h]
        fstp dword ptr [esp]
        call esi
        fldz
        sub esp, 0Ch
        fst dword ptr [esp + 8]
        fstp dword ptr [esp + 4]
        fld dword ptr [mem_0093F7B8]
        fstp dword ptr [esp]
        call ebx
        fld dword ptr [esp + 14h]
        fchs
        sub esp, 0Ch
        fstp dword ptr [esp + 24h]
        fld dword ptr [esp + 1Ch]
        fstp dword ptr [esp + 8]
        fldz
        fstp dword ptr [esp + 4]
        fld dword ptr [esp + 24h]
        fstp dword ptr [esp]
        call esi
        fld dword ptr [esp + 10h]
        sub esp, 0Ch
        fstp dword ptr [esp + 8]
        fld dword ptr [esp + 2Ch]
        fstp dword ptr [esp + 4]
        fld dword ptr [esp + 24h]
        fstp dword ptr [esp]
        call esi
        sub esp, 0Ch
        fld dword ptr [esp + 28h]
        fstp dword ptr [esp + 8]
        fld dword ptr [esp + 2Ch]
        fstp dword ptr [esp + 4]
        fld dword ptr [esp + 24h]
        fstp dword ptr [esp]
        call esi
        fld dword ptr [esp + 1Ch]
        sub esp, 0Ch
        fstp dword ptr [esp + 8]
        fldz
        fstp dword ptr [esp + 4]
        fld dword ptr [esp + 24h]
        fstp dword ptr [esp]
        call esi
        fld1
        sub esp, 0Ch
        fstp dword ptr [esp + 8]
        fldz
        fst dword ptr [esp + 4]
        fstp dword ptr [esp]
        call ebx
        fld dword ptr [esp + 10h]
        sub esp, 0Ch
        fstp dword ptr [esp + 8]
        fldz
        fstp dword ptr [esp + 4]
        fld dword ptr [esp + 20h]
        fstp dword ptr [esp]
        call esi
        fld dword ptr [esp + 10h]
        sub esp, 0Ch
        fstp dword ptr [esp + 8]
        fld dword ptr [esp + 2Ch]
        fstp dword ptr [esp + 4]
        fld dword ptr [esp + 20h]
        fstp dword ptr [esp]
        call esi
        fld dword ptr [esp + 10h]
        sub esp, 0Ch
        fstp dword ptr [esp + 8]
        fld dword ptr [esp + 2Ch]
        fstp dword ptr [esp + 4]
        fld dword ptr [esp + 24h]
        fstp dword ptr [esp]
        call esi
        fld dword ptr [esp + 10h]
        sub esp, 0Ch
        fstp dword ptr [esp + 8]
        fldz
        fstp dword ptr [esp + 4]
        fld dword ptr [esp + 24h]
        fstp dword ptr [esp]
        call esi
        fld dword ptr [mem_0093F7B8]
        sub esp, 0Ch
        fstp dword ptr [esp + 8]
        fldz
        fst dword ptr [esp + 4]
        fstp dword ptr [esp]
        call ebx
        fld dword ptr [esp + 1Ch]
        sub esp, 0Ch
        fstp dword ptr [esp + 8]
        fldz
        fstp dword ptr [esp + 4]
        fld dword ptr [esp + 24h]
        fstp dword ptr [esp]
        call esi
        fld dword ptr [esp + 1Ch]
        sub esp, 0Ch
        fstp dword ptr [esp + 8]
        fld dword ptr [esp + 2Ch]
        fstp dword ptr [esp + 4]
        fld dword ptr [esp + 24h]
        fstp dword ptr [esp]
        call esi
        fld dword ptr [esp + 1Ch]
        sub esp, 0Ch
        fstp dword ptr [esp + 8]
        fld dword ptr [esp + 2Ch]
        fstp dword ptr [esp + 4]
        fld dword ptr [esp + 20h]
        fstp dword ptr [esp]
        call esi
        fld dword ptr [esp + 1Ch]
        sub esp, 0Ch
        fstp dword ptr [esp + 8]
        fldz
        fstp dword ptr [esp + 4]
        fld dword ptr [esp + 20h]
        fstp dword ptr [esp]
        call esi
        fldz
        sub esp, 0Ch
        fst dword ptr [esp + 8]
        fld dword ptr [mem_0093F7B8]
        fstp dword ptr [esp + 4]
        fstp dword ptr [esp]
        call ebx
        fld dword ptr [esp + 1Ch]
        sub esp, 0Ch
        fstp dword ptr [esp + 8]
        fldz
        fstp dword ptr [esp + 4]
        fld dword ptr [esp + 24h]
        fstp dword ptr [esp]
        call esi
        fld dword ptr [esp + 10h]
        sub esp, 0Ch
        fstp dword ptr [esp + 8]
        fldz
        fstp dword ptr [esp + 4]
        fld dword ptr [esp + 24h]
        fstp dword ptr [esp]
        call esi
        fld dword ptr [esp + 10h]
        sub esp, 0Ch
        fstp dword ptr [esp + 8]
        fldz
        fstp dword ptr [esp + 4]
        fld dword ptr [esp + 20h]
        fstp dword ptr [esp]
        call esi
        fld dword ptr [esp + 1Ch]
        sub esp, 0Ch
        fstp dword ptr [esp + 8]
        fldz
        fstp dword ptr [esp + 4]
        fld dword ptr [esp + 20h]
        fstp dword ptr [esp]
        call esi
        fldz
        sub esp, 0Ch
        fst dword ptr [esp + 8]
        fld1
        fstp dword ptr [esp + 4]
        fstp dword ptr [esp]
        call ebx
        fld dword ptr [esp + 1Ch]
        sub esp, 0Ch
        fstp dword ptr [esp + 8]
        fld dword ptr [esp + 2Ch]
        fstp dword ptr [esp + 4]
        fld dword ptr [esp + 24h]
        fstp dword ptr [esp]
        call esi
        fld dword ptr [esp + 10h]
        sub esp, 0Ch
        fstp dword ptr [esp + 8]
        fld dword ptr [esp + 2Ch]
        fstp dword ptr [esp + 4]
        fld dword ptr [esp + 24h]
        fstp dword ptr [esp]
        call esi
        fld dword ptr [esp + 10h]
        sub esp, 0Ch
        fstp dword ptr [esp + 8]
        fld dword ptr [esp + 2Ch]
        fstp dword ptr [esp + 4]
        fld dword ptr [esp + 20h]
        fstp dword ptr [esp]
        call esi
        fld dword ptr [esp + 1Ch]
        sub esp, 0Ch
        fstp dword ptr [esp + 8]
        fld dword ptr [esp + 2Ch]
        fstp dword ptr [esp + 4]
        fld dword ptr [esp + 20h]
        fstp dword ptr [esp]
        call esi
        call ebp
    L_53D011:
        mov eax, dword ptr [edi + 0A0h]
        mov edx, dword ptr [eax + 58h]
        lea ecx, [edi + 0A0h]
        push 1
        call edx
        fld dword ptr [esp + 24h]
        sub esp, 0Ch
        fstp dword ptr [esp + 8]
        fldz
        fst dword ptr [esp + 4]
        fstp dword ptr [esp]
        call dword ptr [mem_009253D0]
        mov eax, dword ptr [edi + 5Ch]
        mov edx, dword ptr [eax + 58h]
        lea ecx, [edi + 5Ch]
        push 1
        call edx
        call dword ptr [mem_00925404]
        call dword ptr [mem_0092552C]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 18h
        ret 4
    }
}

// [0x0053BE10] Primitives::Hinge::vfunc_13 (105 bytes)
extern "C" void ext_00538550();
extern "C" void ext_0053A050();
extern "C" int mem_0092C508;
extern "C" int mem_00932470;
extern "C" int mem_009559A0;

extern "C" __declspec(naked) void __fastcall fn_0053BE10(void* self, int edx_unused, int a1) {
    __asm {
        push ecx
        push esi
        mov esi, ecx
        fld dword ptr [esi + 0x3c]
        push 0
        fmul qword ptr [mem_0092C508]
        push 0
        push ecx
        lea ecx, [esi + 0xa0]
        fstp dword ptr [esp + 0x10]
        mov byte ptr [esi + 4], 1
        fld dword ptr [esp + 0x10]
        fstp dword ptr [esp]
        call ext_00538550
        fld dword ptr [esi + 0x3c]
        push 0xa
        fmul qword ptr [mem_00932470]
        push 5
        sub esp, 8
        lea ecx, [esi + 0x5c]
        fstp dword ptr [esp + 0x14]
        fld dword ptr [esp + 0x14]
        fstp dword ptr [esp + 4]
        fld dword ptr [esi + 0x3c]
        fmul qword ptr [mem_009559A0]
        fstp dword ptr [esp + 0x14]
        fld dword ptr [esp + 0x14]
        fstp dword ptr [esp]
        call ext_0053A050
        pop esi
        pop ecx
        ret 4
    }
}
