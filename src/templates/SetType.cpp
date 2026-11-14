// Decompiled translation unit: src/templates/SetType.cpp

// [0x004B9D30] Properties::SetType<PointainerWithUndo<PointainerSet<NMData::MaterialInteraction>>, Properties::GetTerminalParent>::vfunc_11 (32 bytes)
extern "C" void ext_004B7620();

extern "C" __declspec(naked) void __fastcall fn_004B9D30(void* self, int edx_unused, void* a1, void* a2, void* a3, int a4) {
    __asm {
        mov eax, dword ptr [esp + 0x10]
        mov ecx, dword ptr [esp + 0xc]
        mov edx, dword ptr [ecx + 0x4]
        mov ecx, dword ptr [esp + 0x4]
        mov ecx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [esp + 0xc]
        push edx
        push eax
        call ext_004B7620
        ret 0x10
    }
}

// [0x004BBD10] Properties::SetType<PointainerWithUndo<PointainerSet<NMData::MaterialInteraction>>, Properties::GetTerminalParent>::vfunc_12 (78 bytes)
extern "C" void ext_004BB160();
extern "C" void ext_004BA920();
extern "C" void ext_00493D90();
extern "C" int mem_00925134;

extern "C" __declspec(naked) int __fastcall fn_004BBD10(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        sub esp, 0x8
        push ebx
        push ebp
        mov ebp, dword ptr [mem_00925134]
        push esi
        mov esi, dword ptr [eax]
        mov ebx, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], ebx
        push edi
        jbe L_004BBD2D
        call ebp
    L_004BBD2D:
        mov ecx, dword ptr [esp + 0x20]
        push ecx
        lea edx, [esp + 0x14]
        push edx
        mov ecx, esi
        call ext_004BB160
        mov edi, eax
        mov eax, dword ptr [edi]
        test eax, eax
        je L_004BBD4A
        cmp eax, esi
        je L_004BBD4C
    L_004BBD4A:
        call ebp
    L_004BBD4C:
        xor eax, eax
        cmp dword ptr [edi + 0x4], ebx
        pop edi
        pop esi
        pop ebp
        sete al
        pop ebx
        add esp, 0x8
        ret 0x8
    }
}

// [0x004BAF90] Properties::SetType<PointainerWithUndo<PointainerSet<NMData::MaterialInteraction>>, Properties::GetTerminalParent>::vfunc_3 (208 bytes)
extern "C" __declspec(naked) void __fastcall fn_004BAF90(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -0x8
        push -0x1
        push 0x008b40d8
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x18
        mov eax, dword ptr [ebp + 0x8]
        push ebx
        mov ebx, dword ptr [eax]
        push esi
        mov esi, dword ptr [ebx + 0x4]
        cmp esi, dword ptr [ebx + 0x8]
        push edi
        mov dword ptr [esp + 0x14], ebx
        jbe L_004BAFC8
        call dword ptr [mem_00925134]
    L_004BAFC8:
        mov edi, dword ptr [ebp + 0xc]
        jmp L_004BAFD0
        _emit 0x8d
        _emit 0x49
        _emit 0x00
    L_004BAFD0:
        mov ebx, dword ptr [ebx + 0x8]
        mov ecx, dword ptr [esp + 0x14]
        cmp dword ptr [ecx + 0x4], ebx
        jbe L_004BAFE2
        call dword ptr [mem_00925134]
    L_004BAFE2:
        cmp esi, ebx
        je L_004BB04C
        mov edx, dword ptr [esp + 0x14]
        cmp esi, dword ptr [edx + 0x8]
        jb L_004BAFF5
        call dword ptr [mem_00925134]
    L_004BAFF5:
        mov eax, dword ptr [esi]
        push eax
        lea ecx, [esp + 0x1c]
        push ecx
        lea ecx, [esp + 0x1b]
        call ext_004BA920
        mov ecx, dword ptr [eax + 0x4]
        mov edx, dword ptr [edi]
        mov eax, dword ptr [eax]
        mov edx, dword ptr [edx]
        push ecx
        push eax
        mov ecx, edi
        mov dword ptr [esp + 0x34], 0x0
        call edx
        lea ecx, [esp + 0x18]
        mov bl, al
        mov dword ptr [esp + 0x2c], -0x1
        call ext_00493D90
        test bl, bl
        je L_004BB04C
        mov eax, dword ptr [esp + 0x14]
        cmp esi, dword ptr [eax + 0x8]
        jb L_004BB043
        call dword ptr [mem_00925134]
    L_004BB043:
        mov ebx, dword ptr [esp + 0x14]
        add esi, 0x4
        jmp L_004BAFD0
    L_004BB04C:
        mov ecx, dword ptr [esp + 0x24]
        pop edi
        pop esi
        mov dword ptr fs:[0x0], ecx
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0x8
    }
}

// [0x004BBD60] Properties::SetType<PointainerWithUndo<PointainerSet<NMData::MaterialPair>>, Properties::GetPropertySource>::vfunc_12 (78 bytes)
extern "C" void ext_004BB230();
extern "C" __declspec(naked) int __fastcall fn_004BBD60(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        sub esp, 0x8
        push ebx
        push ebp
        mov ebp, dword ptr [mem_00925134]
        push esi
        mov esi, dword ptr [eax]
        mov ebx, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], ebx
        push edi
        jbe L_004BBD7D
        call ebp
    L_004BBD7D:
        mov ecx, dword ptr [esp + 0x20]
        push ecx
        lea edx, [esp + 0x14]
        push edx
        mov ecx, esi
        call ext_004BB230
        mov edi, eax
        mov eax, dword ptr [edi]
        test eax, eax
        je L_004BBD9A
        cmp eax, esi
        je L_004BBD9C
    L_004BBD9A:
        call ebp
    L_004BBD9C:
        xor eax, eax
        cmp dword ptr [edi + 0x4], ebx
        pop edi
        pop esi
        pop ebp
        sete al
        pop ebx
        add esp, 0x8
        ret 0x8
    }
}

// [0x00500C50] Properties::SetType<PointainerWithUndo<PointainerSet<NMData::ValuePtrData>>, Properties::GetTerminalParent>::vfunc_3 (208 bytes)
extern "C" void ext_005007C0();
extern "C" __declspec(naked) void __fastcall fn_00500C50(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -0x8
        push -0x1
        push 0x008b40d8
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x18
        mov eax, dword ptr [ebp + 0x8]
        push ebx
        mov ebx, dword ptr [eax]
        push esi
        mov esi, dword ptr [ebx + 0x4]
        cmp esi, dword ptr [ebx + 0x8]
        push edi
        mov dword ptr [esp + 0x14], ebx
        jbe L_00500C88
        call dword ptr [mem_00925134]
    L_00500C88:
        mov edi, dword ptr [ebp + 0xc]
        jmp L_00500C90
        _emit 0x8d
        _emit 0x49
        _emit 0x00
    L_00500C90:
        mov ebx, dword ptr [ebx + 0x8]
        mov ecx, dword ptr [esp + 0x14]
        cmp dword ptr [ecx + 0x4], ebx
        jbe L_00500CA2
        call dword ptr [mem_00925134]
    L_00500CA2:
        cmp esi, ebx
        je L_00500D0C
        mov edx, dword ptr [esp + 0x14]
        cmp esi, dword ptr [edx + 0x8]
        jb L_00500CB5
        call dword ptr [mem_00925134]
    L_00500CB5:
        mov eax, dword ptr [esi]
        push eax
        lea ecx, [esp + 0x1c]
        push ecx
        lea ecx, [esp + 0x1b]
        call ext_005007C0
        mov ecx, dword ptr [eax + 0x4]
        mov edx, dword ptr [edi]
        mov eax, dword ptr [eax]
        mov edx, dword ptr [edx]
        push ecx
        push eax
        mov ecx, edi
        mov dword ptr [esp + 0x34], 0x0
        call edx
        lea ecx, [esp + 0x18]
        mov bl, al
        mov dword ptr [esp + 0x2c], -0x1
        call ext_00493D90
        test bl, bl
        je L_00500D0C
        mov eax, dword ptr [esp + 0x14]
        cmp esi, dword ptr [eax + 0x8]
        jb L_00500D03
        call dword ptr [mem_00925134]
    L_00500D03:
        mov ebx, dword ptr [esp + 0x14]
        add esi, 0x4
        jmp L_00500C90
    L_00500D0C:
        mov ecx, dword ptr [esp + 0x24]
        pop edi
        pop esi
        mov dword ptr fs:[0x0], ecx
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0x8
    }
}


// [0x004B9D50] Properties::SetType<PointainerWithUndo<PointainerSet<NMData::MaterialPair>>, Properties::GetPropertySource>::vfunc_11 (32 bytes)
extern "C" void ext_004B7860();

extern "C" __declspec(naked) void __fastcall fn_004B9D50(void* self, int edx_unused, void* a1, void* a2, void* a3, int a4) {
    __asm {
        mov eax, dword ptr [esp + 0x10]
        mov ecx, dword ptr [esp + 0xc]
        mov edx, dword ptr [ecx + 0x4]
        mov ecx, dword ptr [esp + 0x4]
        mov ecx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [esp + 0xc]
        push edx
        push eax
        call ext_004B7860
        ret 0x10
    }
}

// [0x00500030] Properties::SetType<PointainerWithUndo<PointainerSet<NMData::ValuePtrData>>, Properties::GetTerminalParent>::vfunc_11 (32 bytes)
extern "C" void ext_004FE000();

extern "C" __declspec(naked) void __fastcall fn_00500030(void* self, int edx_unused, void* a1, void* a2, void* a3, int a4) {
    __asm {
        mov eax, dword ptr [esp + 0x10]
        mov ecx, dword ptr [esp + 0xc]
        mov edx, dword ptr [ecx + 0x4]
        mov ecx, dword ptr [esp + 0x4]
        mov ecx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [esp + 0xc]
        push edx
        push eax
        call ext_004FE000
        ret 0x10
    }
}

// [0x00500D20] Properties::SetType<PointainerWithUndo<PointainerSet<NMData::ValuePtrData>>, Properties::GetTerminalParent>::vfunc_10 (126 bytes)
extern "C" void ext_004FDF80();
extern "C" void ext_006616B0();
extern "C" void ext_006A6E9E();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_00500D20(void* self, int edx_unused, void* a1, void* a2, void* a3, void* a4) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        mov esi, dword ptr [esp + 0x10]
        push edi
        mov edi, dword ptr [eax]
        mov ecx, esi
        call ext_006616B0
        test al, al
        jne L_00500D20_vec
        mov esi, dword ptr [esi + 0x4]
        jmp L_00500D20_cast
    L_00500D20_vec:
        mov eax, dword ptr [edi + 0x4]
        test eax, eax
        je L_00500D20_done
        mov esi, dword ptr [edi + 0x8]
        mov ecx, esi
        sub ecx, eax
        sar ecx, 0x2
        je L_00500D20_done
        cmp eax, esi
        push ebx
        mov ebx, dword ptr [mem_00925134]
        jbe L_00500D20_c1
        call ebx
    L_00500D20_c1:
        cmp esi, dword ptr [edi + 0x4]
        ja L_00500D20_c2
        call ebx
    L_00500D20_c2:
        add esi, -0x4
        cmp esi, dword ptr [edi + 0x8]
        jb L_00500D20_c3
        call ebx
    L_00500D20_c3:
        mov esi, dword ptr [esi]
        pop ebx
    L_00500D20_cast:
        mov edx, dword ptr [esp + 0x18]
        push 0x0
        push 0xa40728
        push 0xa2e2d8
        push 0x0
        push edx
        call ext_006A6E9E
        add esp, 0x14
        push eax
        mov eax, dword ptr [esp + 0x14]
        push esi
        push eax
        mov ecx, edi
        call ext_004FDF80
    L_00500D20_done:
        pop edi
        pop esi
        ret 0x10
    }
}

// [0x004BB0E0] Properties::SetType<PointainerWithUndo<PointainerSet<NMData::MaterialPair>>, Properties::GetPropertySource>::vfunc_10 (126 bytes)
extern "C" void ext_004B77E0();
extern "C" void ext_006616B0();
extern "C" void ext_006A6E9E();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_004BB0E0(void* self, int edx_unused, void* a1, void* a2, void* a3, void* a4) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        mov esi, dword ptr [esp + 0x10]
        push edi
        mov edi, dword ptr [eax]
        mov ecx, esi
        call ext_006616B0
        test al, al
        jne L_004BB0E0_vec
        mov esi, dword ptr [esi + 0x4]
        jmp L_004BB0E0_cast
    L_004BB0E0_vec:
        mov eax, dword ptr [edi + 0x4]
        test eax, eax
        je L_004BB0E0_done
        mov esi, dword ptr [edi + 0x8]
        mov ecx, esi
        sub ecx, eax
        sar ecx, 0x2
        je L_004BB0E0_done
        cmp eax, esi
        push ebx
        mov ebx, dword ptr [mem_00925134]
        jbe L_004BB0E0_c1
        call ebx
    L_004BB0E0_c1:
        cmp esi, dword ptr [edi + 0x4]
        ja L_004BB0E0_c2
        call ebx
    L_004BB0E0_c2:
        add esi, -0x4
        cmp esi, dword ptr [edi + 0x8]
        jb L_004BB0E0_c3
        call ebx
    L_004BB0E0_c3:
        mov esi, dword ptr [esi]
        pop ebx
    L_004BB0E0_cast:
        mov edx, dword ptr [esp + 0x18]
        push 0x0
        push 0xa39448
        push 0xa2e2d8
        push 0x0
        push edx
        call ext_006A6E9E
        add esp, 0x14
        push eax
        mov eax, dword ptr [esp + 0x14]
        push esi
        push eax
        mov ecx, edi
        call ext_004B77E0
    L_004BB0E0_done:
        pop edi
        pop esi
        ret 0x10
    }
}

// [0x004BB060] Properties::SetType<PointainerWithUndo<PointainerSet<NMData::MaterialInteraction>>, Properties::GetTerminalParent>::vfunc_10 (126 bytes)
extern "C" void ext_004BA440();
extern "C" void ext_006616B0();
extern "C" void ext_006A6E9E();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_004BB060(void* self, int edx_unused, void* a1, void* a2, void* a3, void* a4) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        mov esi, dword ptr [esp + 0x10]
        push edi
        mov edi, dword ptr [eax]
        mov ecx, esi
        call ext_006616B0
        test al, al
        jne L_004BB060_vec
        mov esi, dword ptr [esi + 0x4]
        jmp L_004BB060_cast
    L_004BB060_vec:
        mov eax, dword ptr [edi + 0x4]
        test eax, eax
        je L_004BB060_done
        mov esi, dword ptr [edi + 0x8]
        mov ecx, esi
        sub ecx, eax
        sar ecx, 0x2
        je L_004BB060_done
        cmp eax, esi
        push ebx
        mov ebx, dword ptr [mem_00925134]
        jbe L_004BB060_c1
        call ebx
    L_004BB060_c1:
        cmp esi, dword ptr [edi + 0x4]
        ja L_004BB060_c2
        call ebx
    L_004BB060_c2:
        add esi, -0x4
        cmp esi, dword ptr [edi + 0x8]
        jb L_004BB060_c3
        call ebx
    L_004BB060_c3:
        mov esi, dword ptr [esi]
        pop ebx
    L_004BB060_cast:
        mov edx, dword ptr [esp + 0x18]
        push 0x0
        push 0xa393e8
        push 0xa2e2d8
        push 0x0
        push edx
        call ext_006A6E9E
        add esp, 0x14
        push eax
        mov eax, dword ptr [esp + 0x14]
        push esi
        push eax
        mov ecx, edi
        call ext_004BA440
    L_004BB060_done:
        pop edi
        pop esi
        ret 0x10
    }
}

// [0x004BC040] Properties::SetType<PointainerWithUndo<PointainerSet<NMData::MaterialInteraction>>, Properties::GetTerminalParent>::vfunc_9 (254 bytes)
extern "C" void ext_004B6CC0();
extern "C" void ext_004BA920();
extern "C" void ext_004BB300();
extern "C" void ext_004BBDB0();
extern "C" void ext_00688670();
extern "C" void ext_006A5C62();
extern "C" void ext_006A6E9E();
extern "C" int mem_00924FE0;
extern "C" int mem_00924FDC;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_004BC040(void* self) {
    __asm {
        push    -1
        push    0x88a335
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x20
        push    esi
        mov     dword ptr [esp + 0x4], 0
        mov     eax, dword ptr [esp + 0x38]
        mov     esi, ecx
        mov     ecx, dword ptr [esp + 0x44]
        push    edi
        mov     edi, dword ptr [eax]
        call    ext_00688670
        add     eax, 8
        push    eax
        lea     ecx, [esp + 0x10]
        call    dword ptr [mem_00924FE0]
        lea     ecx, [esp + 0xc]
        push    ecx
        push    edi
        mov     ecx, esi
        mov     dword ptr [esp + 0x38], 1
        call    ext_004BB300
        push    0x34
        call    ext_006A5C62
        add     esp, 4
        mov     dword ptr [esp + 0x3c], eax
        test    eax, eax
        mov     byte ptr [esp + 0x30], 2
        je      L_null
        mov     ecx, eax
        call    ext_004B6CC0
        mov     esi, eax
        jmp     L_after_new
    L_null:
        xor     esi, esi
    L_after_new:
        mov     dword ptr [esp + 0x3c], esi
        lea     edx, [esp + 0xc]
        push    edx
        mov     ecx, esi
        mov     byte ptr [esp + 0x34], 3
        call    dword ptr [mem_00924FDC]
        mov     eax, dword ptr [esp + 0x4c]
        push    0
        push    0xa393e8
        push    0xa2e2d8
        push    0
        push    eax
        call    ext_006A6E9E
        mov     ecx, dword ptr [esp + 0x54]
        add     esp, 0x14
        push    eax
        push    0
        push    esi
        push    ecx
        mov     ecx, edi
        mov     dword ptr [esp + 0x4c], 0
        call    ext_004BBDB0
        mov     esi, dword ptr [esp + 0x38]
        push    eax
        push    esi
        lea     ecx, [esp + 0x44]
        call    ext_004BA920
        lea     ecx, [esp + 0xc]
        mov     dword ptr [esp + 0x8], 1
        mov     byte ptr [esp + 0x30], 0
        call    dword ptr [mem_00924FF4]
        mov     ecx, dword ptr [esp + 0x28]
        pop     edi
        mov     eax, esi
        pop     esi
        mov     dword ptr fs:[0], ecx
        add     esp, 0x2c
        ret     0x18
    }
}

// [0x004BC140] Properties::SetType<PointainerWithUndo<PointainerSet<NMData::MaterialPair>>, Properties::GetPropertySource>::vfunc_9 (255 bytes)
extern "C" void ext_00494FF0();
extern "C" void ext_004B7210();
extern "C" void ext_004BB410();
extern "C" void ext_004BBE30();
extern "C" void ext_00688670();
extern "C" void ext_006A5C62();
extern "C" void ext_006A6E9E();
extern "C" int mem_00924FE0;
extern "C" int mem_00924FDC;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_004BC140(void* self) {
    __asm {
        push    -1
        push    0x8913c5
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x20
        push    esi
        mov     dword ptr [esp + 0x4], 0
        mov     eax, dword ptr [esp + 0x38]
        mov     esi, ecx
        mov     ecx, dword ptr [esp + 0x44]
        push    edi
        mov     edi, dword ptr [eax]
        call    ext_00688670
        add     eax, 8
        push    eax
        lea     ecx, [esp + 0x10]
        call    dword ptr [mem_00924FE0]
        lea     ecx, [esp + 0xc]
        push    ecx
        push    edi
        mov     ecx, esi
        mov     dword ptr [esp + 0x38], 1
        call    ext_004BB410
        push    0x74
        call    ext_006A5C62
        add     esp, 4
        mov     dword ptr [esp + 0x3c], eax
        test    eax, eax
        mov     byte ptr [esp + 0x30], 2
        je      L_004BC1B8
        mov     ecx, eax
        call    ext_004B7210
        mov     esi, eax
        jmp     L_004BC1BA
    L_004BC1B8:
        xor     esi, esi
    L_004BC1BA:
        mov     dword ptr [esp + 0x3c], esi
        lea     edx, [esp + 0xc]
        push    edx
        lea     ecx, [esi + 4]
        mov     byte ptr [esp + 0x34], 3
        call    dword ptr [mem_00924FDC]
        mov     eax, dword ptr [esp + 0x4c]
        push    0
        push    0xa39448
        push    0xa2e2d8
        push    0
        push    eax
        call    ext_006A6E9E
        mov     ecx, dword ptr [esp + 0x54]
        add     esp, 0x14
        push    eax
        push    0
        push    esi
        push    ecx
        mov     ecx, edi
        mov     dword ptr [esp + 0x4c], 0
        call    ext_004BBE30
        mov     esi, dword ptr [esp + 0x38]
        push    eax
        push    esi
        lea     ecx, [esp + 0x44]
        call    ext_00494FF0
        lea     ecx, [esp + 0xc]
        mov     dword ptr [esp + 0x8], 1
        mov     byte ptr [esp + 0x30], 0
        call    dword ptr [mem_00924FF4]
        mov     ecx, dword ptr [esp + 0x28]
        pop     edi
        mov     eax, esi
        pop     esi
        mov     dword ptr fs:[0], ecx
        add     esp, 0x2c
        ret     0x18
    }
}
