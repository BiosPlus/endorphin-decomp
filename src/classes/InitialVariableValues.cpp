// Decompiled translation unit: src/classes/InitialVariableValues.cpp

extern "C" int mem_00925134;
extern "C" int mem_00924FE0;

// [0x005272C0] InitialVariableValues::vfunc_25 (76 bytes)
extern "C" __declspec(naked) void* __fastcall fn_005272C0(void* self) {
    __asm {
        push ecx
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x40]
        test ecx, ecx
        push edi
        mov edi, dword ptr [esp + 0x18]
        mov dword ptr [esp + 0x8], 0x0
        je short invalid_index
        mov eax, dword ptr [esi + 0x44]
        sub eax, ecx
        sar eax, 0x2
        cmp edi, eax
        jb short index_ok
    invalid_index:
        call dword ptr [mem_00925134]
    index_ok:
        mov eax, dword ptr [esi + 0x40]
        mov ecx, dword ptr [eax + 4*edi]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x24]
        call eax
        mov esi, dword ptr [esp + 0x10]
        push eax
        mov ecx, esi
        call dword ptr [mem_00924FE0]
        pop edi
        mov eax, esi
        pop esi
        pop ecx
        ret 0xc
    }
}

// [0x00507450] InitialVariableValues::vfunc_15 (57 bytes)
extern "C" void ext_00505A10();
extern "C" void ext_00671F30();

extern "C" __declspec(naked) int __fastcall fn_00507450(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push ecx
        cmp dword ptr [esp + 0xc], 0x361
        push esi
        mov esi, dword ptr [esp + 0xc]
        mov dword ptr [esp + 0x4], 0x0
        jne short not_magic
        push ecx
        push esi
        call ext_00505A10
        add esp, 0x8
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    not_magic:
        push esi
        call ext_00671F30
        add esp, 0x4
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    }
}

extern "C" void ext_0046F7D0();
extern "C" void ext_005049B0();
extern "C" void ext_00527660();
extern "C" void ext_0055DA20();
extern "C" void ext_00661650();
extern "C" int mem_00A9F3B4;
extern "C" int mem_00924FC0;
extern "C" int mem_00AED318;
extern "C" int mem_00AED314;
extern "C" int mem_00A9EDB4;

// [0x00527740] InitialVariableValues::vfunc_13 (201 bytes)
extern "C" __declspec(naked) void* __fastcall fn_00527740(void* self, int edx_unused, void* ret_val, void* name) {
    __asm {
        push ecx
        mov eax, dword ptr [mem_00A9F3B4]
        push ebx
        mov ebx, dword ptr [mem_00924FC0]
        push esi
        push edi
        mov edi, dword ptr [esp + 0x18]
        push eax
        push edi
        mov esi, ecx
        mov dword ptr [esp + 0x14], 0x0
        call ebx
        add esp, 0x8
        test al, al
        je short loc_005277A4
        mov eax, 0x1
        test byte ptr [mem_00AED318], al
        jne short loc_00527785
        or dword ptr [mem_00AED318], eax
        call ext_00527660
        mov dword ptr [mem_00AED314], eax
    loc_00527785:
        mov ecx, dword ptr [mem_00AED314]
        add esi, 0x3c
        push esi
        mov esi, dword ptr [esp + 0x18]
        push ecx
        mov ecx, esi
        call ext_0055DA20
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        pop ecx
        ret 0x8

    loc_005277A4:
        mov edx, dword ptr [mem_00A9EDB4]
        push edx
        push edi
        call ebx
        add esp, 0x8
        test al, al
        je short loc_005277F3
        mov eax, dword ptr [esi + 0x24]
        test eax, eax
        lea ecx, [esi + 0x20]
        je short loc_005277F3
        mov edx, dword ptr [ecx + 0x8]
        sub edx, eax
        mov eax, 0x4ec4ec4f
        imul edx
        sar edx, 0x5
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        je short loc_005277F3
        push 0x0
        call ext_005049B0
        mov esi, dword ptr [esp + 0x14]
        push eax
        mov ecx, esi
        call ext_00661650
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        pop ecx
        ret 0x8

    loc_005277F3:
        mov esi, dword ptr [esp + 0x14]
        push esi
        call ext_0046F7D0
        add esp, 0x4
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        pop ecx
        ret 0x8
    }
}

extern "C" void ext_0066A820();
extern "C" int mem_00924FF0;

// [0x00527410] InitialVariableValues::vfunc_24 (209 bytes)
extern "C" __declspec(naked) void __fastcall fn_00527410(void* self) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -0x40
        sub esp, 0x34
        push ebx
        push esi
        push edi
        mov edi, ecx
        xor ebx, ebx

    loc_00527420:
        mov ecx, dword ptr [edi + 0x40]
        test ecx, ecx
        je loc_005274D8
        mov eax, dword ptr [edi + 0x44]
        sub eax, ecx
        sar eax, 2
        cmp ebx, eax
        jae loc_005274D8
        test ecx, ecx
        je short loc_0052744B
        mov eax, dword ptr [edi + 0x44]
        sub eax, ecx
        sar eax, 2
        cmp ebx, eax
        jb short loc_00527451

    loc_0052744B:
        call dword ptr [mem_00925134]

    loc_00527451:
        mov eax, dword ptr [edi + 0x40]
        mov ecx, dword ptr [eax + 4*ebx]
        mov eax, dword ptr [edi + 0x24]
        test eax, eax
        mov dword ptr [esp + 0x38], ecx
        je short loc_0052747A
        mov ecx, dword ptr [edi + 0x28]
        sub ecx, eax
        mov eax, 0x4ec4ec4f
        imul ecx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        jne short loc_00527480

    loc_0052747A:
        call dword ptr [mem_00925134]

    loc_00527480:
        mov esi, dword ptr [edi + 0x24]
        mov ecx, dword ptr [esi + 0x8]
        add esi, 4
        test ecx, ecx
        je short loc_00527499
        mov eax, dword ptr [esi + 0x8]
        sub eax, ecx
        sar eax, 3
        cmp ebx, eax
        jb short loc_0052749F

    loc_00527499:
        call dword ptr [mem_00925134]

    loc_0052749F:
        mov ecx, dword ptr [esi + 0x4]
        fld qword ptr [ecx + 8*ebx]
        mov ecx, dword ptr [esp + 0x38]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x24]
        sub esp, 8
        fstp qword ptr [esp]
        call eax
        mov ecx, eax
        call dword ptr [mem_00924FF0]
        mov ecx, dword ptr [ebp + 0x8]
        push eax
        push 0x953358
        push ecx
        call ext_0066A820
        add esp, 0x14
        add ebx, 1
        jmp loc_00527420

    loc_005274D8:
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 4
    }
}

// [0x00527700] InitialVariableValues::vfunc_22 (49 bytes)
extern "C" void ext_005058B0();
extern "C" void ext_005275A0();
extern "C" int mem_00A9F3B0;
extern "C" int mem_00A9F3B4;

extern "C" __declspec(naked) void __fastcall fn_00527700(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [mem_00A9F3B0]
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        push 0
        mov esi, ecx
        mov ecx, dword ptr [mem_00A9F3B4]
        push eax
        push ecx
        lea edx, [esi + 0x3c]
        push edi
        push edx
        call ext_005275A0
        add esp, 0x14
        push edi
        mov ecx, esi
        call ext_005058B0
        pop edi
        pop esi
        ret 4
    }
}

// [0x005282A0] InitialVariableValues::vfunc_21 (109 bytes)
extern "C" void ext_00507D10();
extern "C" void ext_00528150();
extern "C" void ext_0063F530();
extern "C" int mem_00A9F3B4;
extern "C" int mem_00A9F3B0;

extern "C" __declspec(naked) void __fastcall fn_005282A0(void* self, int edx_unused, int a1) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        push edi
        mov esi, ecx
        call ext_00507D10
        mov eax, dword ptr [mem_00A9F3B4]
        push 1
        push 0
        push eax
        mov ecx, edi
        call ext_0063F530
        cmp eax, 0xb53a34
        je L_set
        cmp eax, 0xb53b30
        je L_set
        cmp eax, 0xb53ab0
        je L_set
        cmp eax, 0xb53a70
        je L_set
        cmp eax, 0xb53af0
        jne L_call
    L_set:
        mov eax, 0xb53b30
    L_call:
        mov ecx, dword ptr [mem_00A9F3B0]
        push 1
        push ecx
        lea edx, [esi + 0x3c]
        push edx
        push eax
        call ext_00528150
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x5c]
        add esp, 0x10
        push 0
        mov ecx, esi
        call edx
        pop edi
        pop esi
        ret 4
    }
}


extern "C" void ext_00435D00();
extern "C" void ext_00660A50();
extern "C" void ext_00672080();
extern "C" int mem_00893C60;
extern "C" int mem_00B599BC;
extern "C" int mem_00924E90;
extern "C" int mem_00924FA0;
extern "C" int mem_00924E94;
extern "C" int mem_00924E98;
extern "C" int mem_00953364;

// [0x00527810] InitialVariableValues::vfunc_27 (480 bytes)
extern "C" __declspec(naked) void __fastcall fn_00527810(void* self) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -0x8
        push -0x1
        push offset mem_00893C60
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x1c
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        mov esi, ecx
        mov dword ptr [esp + 0x10], edi
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
loc_527840:
        mov ecx, dword ptr [esi + 0x40]
        test ecx, ecx
        je near ptr loc_5279dd
        mov eax, dword ptr [esi + 0x44]
        sub eax, ecx
        sar eax, 0x2
        cmp edi, eax
        jae near ptr loc_5279dd
        test ecx, ecx
        je short loc_52786b
        mov eax, dword ptr [esi + 0x44]
        sub eax, ecx
        sar eax, 0x2
        cmp edi, eax
        jb short loc_527871
loc_52786b:
        call dword ptr [mem_00925134]
loc_527871:
        mov eax, dword ptr [esi + 0x40]
        mov ebp, dword ptr [eax + 4*edi]
        call ext_00660A50
        mov edx, dword ptr [ebp]
        mov ebx, eax
        mov edi, dword ptr [ebx]
        mov eax, dword ptr [edx + 0x24]
        push 0x0
        push 0x0
        mov ecx, ebp
        add edi, 0x14
        call eax
        mov edx, dword ptr [edi]
        push eax
        lea ecx, [esp + 0x24]
        push ecx
        mov ecx, ebx
        call edx
        mov eax, dword ptr [esp + 0x1c]
        test eax, eax
        mov dword ptr [esp + 0x34], 0x0
        je near ptr loc_52795a
        cmp eax, dword ptr [mem_00B599BC]
        je near ptr loc_52795a
        mov eax, dword ptr [esi + 0x24]
        test eax, eax
        je short loc_5278dc
        mov ecx, dword ptr [esi + 0x28]
        sub ecx, eax
        mov eax, 0x4ec4ec4f
        imul ecx
        sar edx, 0x5
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        jne short loc_5278e2
loc_5278dc:
        call dword ptr [mem_00925134]
loc_5278e2:
        mov edi, dword ptr [esi + 0x24]
        mov ecx, dword ptr [edi + 0x8]
        test ecx, ecx
        je short loc_5278fa
        mov eax, dword ptr [edi + 0xc]
        sub eax, ecx
        sar eax, 0x3
        cmp dword ptr [esp + 0x10], eax
        jb short loc_527900
loc_5278fa:
        call dword ptr [mem_00925134]
loc_527900:
        mov ecx, dword ptr [edi + 0x8]
        mov edx, dword ptr [esp + 0x10]
        fld qword ptr [ecx + 8*edx]
        lea eax, [ecx + 8*edx]
        fstp dword ptr [esp + 0x14]
        push ecx
        fld dword ptr [esp + 0x18]
        lea ecx, [esp + 0x24]
        fstp dword ptr [esp]
        call ext_00672080
        mov ecx, dword ptr [esp + 0x1c]
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0xa4]
        lea edx, [esp + 0x20]
        push edx
        lea edx, [esp + 0x1c]
        push edx
        mov byte ptr [esp + 0x3c], 0x1
        call eax
        mov ecx, dword ptr [esp + 0x24]
        test ecx, ecx
        mov byte ptr [esp + 0x34], 0x0
        je short loc_5279b3
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x78]
        lea eax, [esp + 0x20]
        push eax
        call edx
        jmp short loc_5279b3
loc_52795a:
        mov ecx, dword ptr [esi + 0x40]
        test ecx, ecx
        je short loc_52796f
        mov eax, dword ptr [esi + 0x44]
        sub eax, ecx
        sar eax, 0x2
        cmp dword ptr [esp + 0x10], eax
        jb short loc_527975
loc_52796f:
        call dword ptr [mem_00925134]
loc_527975:
        mov eax, dword ptr [esi + 0x40]
        mov ecx, dword ptr [esp + 0x10]
        mov ecx, dword ptr [eax + 4*ecx]
        mov edx, dword ptr [mem_00924E90]
        mov eax, dword ptr [ecx]
        push edx
        mov edx, dword ptr [eax + 0x24]
        call edx
        push eax
        mov eax, dword ptr [mem_00924FA0]
        push offset mem_00953364
        push eax
        call ext_00435D00
        add esp, 0x8
        push eax
        call dword ptr [mem_00924E94]
        add esp, 0x8
        mov ecx, eax
        call dword ptr [mem_00924E98]
loc_5279b3:
        mov ecx, dword ptr [esp + 0x1c]
        test ecx, ecx
        mov dword ptr [esp + 0x34], 0xffffffff
        je short loc_5279cf
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x78]
        lea eax, [esp + 0x18]
        push eax
        call edx
loc_5279cf:
        add dword ptr [esp + 0x10], 0x1
        mov edi, dword ptr [esp + 0x10]
        jmp near ptr loc_527840
loc_5279dd:
        mov ecx, dword ptr [esp + 0x2c]
        pop edi
        mov dword ptr fs:[0x0], ecx
        pop esi
        pop ebp
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}

// [0x005283C0] InitialVariableValues::vfunc_23 (368 bytes)
extern "C" void ext_004A2500();
extern "C" void ext_00514B20();
extern "C" void ext_00514E00();
extern "C" void ext_005241E0();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FDC;
extern "C" int mem_00924FF4;
extern "C" int mem_009533A4;

extern "C" __declspec(naked) void __fastcall fn_005283C0(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -0x1
        push 0x8b56f9
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        push ebx
        mov ebx, dword ptr [mem_00925134]
        push esi
        push edi
        mov esi, ecx
        xor edi, edi
    loc_5283E5:
        mov ecx, dword ptr [esi + 0x40]
        test ecx, ecx
        je loc_528436
        mov eax, dword ptr [esi + 0x44]
        sub eax, ecx
        sar eax, 0x2
        cmp edi, eax
        jae loc_528436
        test ecx, ecx
        je loc_528408
        mov eax, dword ptr [esi + 0x44]
        sub eax, ecx
        sar eax, 0x2
        cmp edi, eax
        jb loc_52840A
    loc_528408:
        call ebx
    loc_52840A:
        mov eax, dword ptr [esi + 0x40]
        mov ecx, dword ptr [eax + 4*edi]
        mov dword ptr [ecx + 0x4], esi
        mov ecx, dword ptr [esi + 0x40]
        test ecx, ecx
        je loc_528426
        mov eax, dword ptr [esi + 0x44]
        sub eax, ecx
        sar eax, 0x2
        cmp edi, eax
        jb loc_528428
    loc_528426:
        call ebx
    loc_528428:
        mov edx, dword ptr [esi + 0x40]
        mov eax, dword ptr [edx + 4*edi]
        mov dword ptr [eax + 0x8], edi
        add edi, 0x1
        jmp loc_5283E5

    loc_528436:
        sub esp, 0x68
        mov ecx, esp
        mov dword ptr [esp + 0x74], esp
        call ext_00514B20
        lea edi, [esi + 0x20]
        push 0x1
        mov ecx, edi
        call ext_005241E0
        mov eax, dword ptr [esi + 0x40]
        test eax, eax
        jne loc_52845B
        xor esi, esi
        jmp loc_528463
    loc_52845B:
        mov esi, dword ptr [esi + 0x44]
        sub esi, eax
        sar esi, 0x2
    loc_528463:
        mov eax, dword ptr [edi + 0x4]
        test eax, eax
        je loc_528482
        mov ecx, dword ptr [edi + 0x8]
        sub ecx, eax
        mov eax, 0x4ec4ec4f
        imul ecx
        sar edx, 0x5
        mov ecx, edx
        shr ecx, 0x1f
        add ecx, edx
        jne loc_528484
    loc_528482:
        call ebx
    loc_528484:
        mov ecx, dword ptr [edi + 0x4]
        push esi
        add ecx, 0x14
        call ext_004A2500
        push offset mem_009533A4
        lea ecx, [esp + 0x14]
        call dword ptr [mem_00924FE4]
        mov eax, dword ptr [edi + 0x4]
        test eax, eax
        mov dword ptr [esp + 0x34], 0x0
        je loc_5284C6
        mov ecx, dword ptr [edi + 0x8]
        sub ecx, eax
        mov eax, 0x4ec4ec4f
        imul ecx
        sar edx, 0x5
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        jne loc_5284C8
    loc_5284C6:
        call ebx
    loc_5284C8:
        mov eax, dword ptr [edi + 0x4]
        lea ecx, [esp + 0x10]
        add eax, 0x14
        push ecx
        lea ecx, [eax + 0x8]
        call dword ptr [mem_00924FDC]
        lea ecx, [esp + 0x10]
        mov dword ptr [esp + 0x34], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov eax, dword ptr [edi + 0x4]
        test eax, eax
        je loc_52850D
        mov ecx, dword ptr [edi + 0x8]
        sub ecx, eax
        mov eax, 0x4ec4ec4f
        imul ecx
        sar edx, 0x5
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        jne loc_52850F
    loc_52850D:
        call ebx
    loc_52850F:
        mov ecx, dword ptr [esp + 0x3c]
        push ecx
        mov ecx, dword ptr [edi + 0x4]
        call ext_00514E00
        mov ecx, dword ptr [esp + 0x2c]
        pop edi
        pop esi
        mov dword ptr fs:[0x0], ecx
        pop ebx
        add esp, 0x2c
        ret 0x4
    }
}
