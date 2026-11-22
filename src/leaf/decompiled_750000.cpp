// Decompiled translation unit: src/leaf/decompiled_750000.cpp

extern "C" void ext_006B9E60();
extern "C" void ext_006A73CC();
extern "C" int mem_00993CC0;
extern "C" int mem_00993C78;
extern "C" void ext_006B9D20();
extern "C" void ext_006B9D70();

extern "C" void ext_006B9D70();
extern "C" void __fastcall fn_00755020(void* self, int edx_unused, void* a1) {
    typedef void (__thiscall *Callee)(void* self, void* a1);
    Callee callee = (Callee)ext_006B9E60;
    callee(a1, (char*)self + 0x60);
}

// [0x0075C720] sub_0075C720 (288 bytes)
extern "C" __declspec(naked) int __cdecl fn_0075C720(const double* a1, const double* a2, double eps) {
    __asm {
        sub esp, 0x30
        push esi
        mov esi, dword ptr [esp + 0x38]
        push edi
        fld qword ptr [esi]
        fld qword ptr [mem_00993CC0]
        call ext_006A73CC
        fstp qword ptr [esp + 0x8]
        fld qword ptr [esi + 0x8]
        fld qword ptr [mem_00993CC0]
        call ext_006A73CC
        fstp qword ptr [esp + 0x10]
        fld qword ptr [esi + 0x10]
        fld qword ptr [mem_00993CC0]
        call ext_006A73CC
        mov edi, dword ptr [esp + 0x40]
        fstp qword ptr [esp + 0x18]
        fld qword ptr [edi]
        fld qword ptr [mem_00993CC0]
        call ext_006A73CC
        fstp qword ptr [esp + 0x20]
        fld qword ptr [edi + 0x8]
        fld qword ptr [mem_00993CC0]
        call ext_006A73CC
        fstp qword ptr [esp + 0x28]
        fld qword ptr [edi + 0x10]
        fld qword ptr [mem_00993CC0]
        call ext_006A73CC
        fld qword ptr [esi]
        fsub qword ptr [edi]
        fabs
        fcomp qword ptr [esp + 0x44]
        fnstsw ax
        test ah, 0x41
        je loc_75C7CA
        fld qword ptr [esi + 0x8]
        fsub qword ptr [edi + 0x8]
        fabs
        fcomp qword ptr [esp + 0x44]
        fnstsw ax
        test ah, 0x41
        je loc_75C7CA
        fld qword ptr [esi + 0x10]
        fsub qword ptr [edi + 0x10]
        fabs
        fcomp qword ptr [esp + 0x44]
        fnstsw ax
        test ah, 0x41
        jne loc_75C829

loc_75C7CA:
        fld qword ptr [esp + 0x8]
        fsub qword ptr [esp + 0x20]
        fabs
        fsub qword ptr [mem_00993C78]
        fabs
        fcomp qword ptr [esp + 0x44]
        fnstsw ax
        test ah, 0x41
        je loc_75C833
        fld qword ptr [esp + 0x28]
        fadd qword ptr [esp + 0x10]
        fabs
        fsub qword ptr [mem_00993C78]
        fabs
        fcomp qword ptr [esp + 0x44]
        fnstsw ax
        test ah, 0x41
        je loc_75C833
        fld qword ptr [esp + 0x18]
        fsub st, st(1)
        fabs
        fsub qword ptr [mem_00993C78]
        fabs
        fcomp qword ptr [esp + 0x44]
        fnstsw ax
        test ah, 0x41
        fstp st(0)
        je loc_75C835
        pop edi
        xor eax, eax
        pop esi
        add esp, 0x30
        ret

loc_75C829:
        pop edi
        xor eax, eax
        fstp st(0)
        pop esi
        add esp, 0x30
        ret

loc_75C833:
        fstp st(0)

loc_75C835:
        pop edi
        mov eax, 0x1
        pop esi
        add esp, 0x30
        ret
    }
}

// [0x0075B400] sub_0075B400 (47 bytes)
extern "C" void ext_007275F0();
extern "C" void ext_00727C80();
extern "C" void ext_007283B0();
extern "C" __declspec(naked) void __fastcall fn_0075B400(void* self, int edx_unused, int a1) {
    __asm {
        push esi
        mov esi, dword ptr [ecx + 0xac]
        add esi, 0x4
        push 0xaacd0c
        mov ecx, esi
        call ext_007275F0
        push 0xc2
        mov ecx, esi
        call ext_00727C80
        mov ecx, esi
        call ext_007283B0
        mov al, 0x1
        pop esi
        ret 0x4
    }
}

// [0x007577E0] sub_007577E0 (80 bytes)
extern "C" void ext_007275F0();
extern "C" void ext_007283B0();
extern "C" void ext_00728410();
extern "C" void ext_007284D0();
extern "C" void ext_00757830();

extern "C" __declspec(naked) void __fastcall fn_007577E0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        push 0xaad51c
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_007275F0
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_00728410
        mov eax, dword ptr [esp + 0x8]
        mov ecx, esi
        push eax
        call ext_00757830
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_007284D0
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_007283B0
        pop esi
        ret 0x4
    }
}

// [0x0075D2E0] sub_0075D2E0 (128 bytes)
extern "C" void ext_006BADB0();
extern "C" void ext_006C2860();
extern "C" void ext_006C28D0();
extern "C" void ext_007275F0();
extern "C" void ext_007279A0();
extern "C" void ext_007283B0();
extern "C" int mem_00AAD8F4;

extern "C" __declspec(naked) bool __fastcall fn_0075D2E0(void* self, int, void* arg0) {
    __asm {
        push ebx
        push edi
        mov edi, dword ptr [esp + 0xc]
        mov ebx, ecx
        push 0x0
        mov ecx, edi
        call ext_006C2860
        test eax, eax
        je L_ret
        mov ecx, dword ptr [ebx + 0xac]
        push esi
        push offset mem_00AAD8F4
        add ecx, 0x4
        call ext_007275F0
        xor esi, esi
        mov ecx, edi
        push esi
        call ext_006C2860
        test eax, eax
        jle L_done_loop
    L_loop:
        push esi
        mov ecx, edi
        call ext_006C28D0
        mov ecx, eax
        call ext_006BADB0
        mov ecx, dword ptr [ebx + 0xac]
        push eax
        add ecx, 0x4
        call ext_007279A0
        push 0x0
        mov ecx, edi
        inc esi
        call ext_006C2860
        cmp esi, eax
        jl L_loop
    L_done_loop:
        mov ecx, dword ptr [ebx + 0xac]
        add ecx, 0x4
        call ext_007283B0
        pop esi
        pop edi
        mov al, 0x1
        pop ebx
        ret 0x4
    L_ret:
        pop edi
        mov al, 0x1
        pop ebx
        ret 0x4
    }
}

// [0x00756F80] sub_00756F80 (143 bytes)
extern "C" void ext_006C28D0();
extern "C" void ext_0075B310();
extern "C" double mem_009334D8;

extern "C" __declspec(naked) bool __fastcall fn_00756F80(void* self, int edx_unused, void* a1) {
    __asm {
        push ecx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov eax, dword ptr [esi + 0xbc]
        mov ecx, dword ptr [esi + 0xb0]
        mov dword ptr [esp + 0xc], eax
        inc eax
        fild dword ptr [esp + 0xc]
        mov dword ptr [esi + 0xbc], eax
        mov eax, dword ptr [ecx]
        fmul qword ptr [mem_009334D8]
        fidiv dword ptr [esi + 0xc0]
        fstp dword ptr [esp + 0xc]
        mov edx, dword ptr [esp + 0xc]
        push edx
        push 0x0
        push 0x0
        push 0x0
        call dword ptr [eax + 0x8]
        mov ebp, dword ptr [esp + 0x14]
        xor edi, edi
        push edi
        mov ecx, ebp
        call ext_006C2860
        test eax, eax
        jle L_done
        push ebx
    L_loop:
        push edi
        mov ecx, ebp
        call ext_006C28D0
        mov ebx, eax
        mov ecx, esi
        push ebx
        call ext_0075B310
        push ebx
        mov ecx, esi
        call fn_00756F80
        push 0x0
        mov ecx, ebp
        inc edi
        call ext_006C2860
        cmp edi, eax
        jl L_loop
        pop ebx
        pop edi
        pop esi
        mov al, 0x1
        pop ebp
        pop ecx
        ret 0x4
    L_done:
        pop edi
        pop esi
        mov al, 0x1
        pop ebp
        pop ecx
        ret 0x4
    }
}

// [0x00756EE0] sub_00756EE0 (160 bytes)
extern "C" void ext_006C2860();
extern "C" void ext_006C28D0();
extern "C" void ext_0075D360();
extern "C" double mem_009334D8;
extern "C" int mem_00AAD264;

extern "C" __declspec(naked) bool __fastcall fn_00756EE0(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        push ecx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov eax, dword ptr [esi + 0xbc]
        mov ecx, dword ptr [esi + 0xb0]
        mov dword ptr [esp + 0xc], eax
        inc eax
        fild dword ptr [esp + 0xc]
        mov dword ptr [esi + 0xbc], eax
        mov eax, dword ptr [ecx]
        fmul qword ptr [mem_009334D8]
        fidiv dword ptr [esi + 0xc0]
        fstp dword ptr [esp + 0xc]
        mov edx, dword ptr [esp + 0xc]
        push edx
        push 0x0
        push 0x0
        push 0x0
        call dword ptr [eax + 0x8]
        mov ebp, dword ptr [esp + 0x14]
        xor edi, edi
        push edi
        mov ecx, ebp
        call ext_006C2860
        test eax, eax
        jle L_done
        push ebx
    L_loop:
        push edi
        mov ecx, ebp
        call ext_006C28D0
        mov ebx, eax
        mov eax, dword ptr [esp + 0x1c]
        push 0x0
        push offset mem_00AAD264
        push eax
        push ebx
        mov ecx, esi
        call ext_0075D360
        mov ecx, dword ptr [esp + 0x1c]
        push ecx
        push ebx
        mov ecx, esi
        call fn_00756EE0
        push 0x0
        mov ecx, ebp
        inc edi
        call ext_006C2860
        cmp edi, eax
        jl L_loop
        pop ebx
        pop edi
        pop esi
        mov al, 0x1
        pop ebp
        pop ecx
        ret 0x8
    L_done:
        pop edi
        pop esi
        mov al, 0x1
        pop ebp
        pop ecx
        ret 0x8
    }
}

// [0x007573E0] sub_007573E0 (320 bytes)
extern "C" void ext_006BC7D0();
extern "C" void ext_006D80A0();
extern "C" void ext_006E85D0();
extern "C" void ext_00727FE0();
extern "C" __declspec(naked) void __fastcall fn_007573E0(void* self, int edx_unused, int a1) {
    __asm {
        push -1
        push 0x8bfd88
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x20
        push esi
        mov esi, ecx
        push edi
        push 0xaad4b8
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_007275F0
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_00728410
        mov edi, dword ptr [esi + 0xac]
        push 0xaacd0c
        add edi, 0x4
        mov ecx, edi
        call ext_007275F0
        push 0x65
        mov ecx, edi
        call ext_00727C80
        mov ecx, edi
        call ext_007283B0
        mov ecx, dword ptr [esi + 0xac]
        push 0xaad4a4
        add ecx, 0x4
        call ext_007275F0
        mov ecx, dword ptr [esp + 0x38]
        lea eax, [esp + 0x8]
        push eax
        call ext_006BC7D0
        mov ecx, eax
        call ext_006E85D0
        mov ecx, dword ptr [esp + 0xc]
        mov edx, dword ptr [esp + 0x8]
        push ecx
        mov ecx, dword ptr [esi + 0xac]
        push edx
        add ecx, 0x4
        mov dword ptr [esp + 0x38], 0x0
        call ext_00727FE0
        mov eax, dword ptr [esp + 0x14]
        mov ecx, dword ptr [esp + 0x10]
        push eax
        push ecx
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_00727FE0
        mov edx, dword ptr [esp + 0x1c]
        mov eax, dword ptr [esp + 0x18]
        mov ecx, dword ptr [esi + 0xac]
        push edx
        push eax
        add ecx, 0x4
        call ext_00727FE0
        mov ecx, dword ptr [esp + 0x24]
        mov edx, dword ptr [esp + 0x20]
        push ecx
        mov ecx, dword ptr [esi + 0xac]
        push edx
        add ecx, 0x4
        call ext_00727FE0
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_007283B0
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_007284D0
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_007283B0
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x30], 0xffffffff
        call ext_006D80A0
        mov ecx, dword ptr [esp + 0x28]
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x2c
        ret 0x4
    }
}

extern "C" void ext_006B9D70();
extern "C" void ext_006B9D80();
extern "C" void ext_006BA1C0();
extern "C" void ext_006BA220();
extern "C" void ext_006BA320();
extern "C" void ext_006BADB0();
extern "C" void ext_006BC370();
extern "C" void ext_006C2860();
extern "C" void ext_006C28D0();
extern "C" void ext_006C59F0();
extern "C" int mem_00925284;
extern "C" int mem_00B60428;
extern "C" int mem_00B6042C;
extern "C" int mem_00B60420;

// [0x00755030] sub_00755030 (416 bytes)
extern "C" __declspec(naked) void __fastcall fn_00755030(void* self) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        push 0x0
        mov ecx, esi
        call ext_006BC370
        mov ecx, eax
        call ext_006C2860
        cmp eax, 0x1
        je L_755050
    L_75504A:
        xor eax, eax
        pop esi
        ret 0x4
    L_755050:
        push 0x0
        mov ecx, esi
        call ext_006BC370
        mov ecx, eax
        call ext_006C28D0
        mov esi, eax
        push 0x0
        mov ecx, esi
        call ext_006C59F0
        test al, al
        jne L_755095
    L_75506F:
        push 0x0
        mov ecx, esi
        call ext_006C2860
        cmp eax, 0x1
        jne L_75504A
        push 0x0
        mov ecx, esi
        call ext_006C28D0
        mov esi, eax
        push 0x0
        mov ecx, esi
        call ext_006C59F0
        test al, al
        je L_75506F
    L_755095:
        mov eax, esi
        pop esi
        ret 0x4
        nop
        nop
        nop
        nop
        nop
        push -0x1
        push 0x008bcb18
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x54
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 0x6c]
        push esi
        push edi
        mov edi, ecx
        mov ecx, ebp
        mov byte ptr [esp + 0x13], 0x1
        call ext_006BADB0
        push eax
        lea ecx, [esp + 0x1c]
        call ext_006B9D80
        xor esi, esi
        lea ecx, [esp + 0x18]
        push esi
        push 0x00aae890
        mov dword ptr [esp + 0x74], esi
        call ext_006BA320
        mov ebx, dword ptr [esp + 0x78]
        cmp eax, -0x1
        je L_755113
        push 0x00aad1bc
        mov ecx, ebx
        call ext_006BA220
        lea eax, [esp + 0x18]
        mov ecx, ebx
        push eax
        call ext_006BA1C0
        mov byte ptr [esp + 0x13], 0x0
    L_755113:
        push esi
        mov ecx, ebp
        call ext_006C2860
        test eax, eax
        mov dword ptr [esp + 0x14], eax
        jle L_755153
        jmp L_755129
    L_755125:
        mov ebx, dword ptr [esp + 0x78]
    L_755129:
        mov edx, dword ptr [edi]
        push ebx
        push esi
        mov ecx, ebp
        mov dword ptr [esp + 0x7c], edx
        call ext_006C28D0
        mov edx, dword ptr [esp + 0x78]
        push eax
        mov ecx, edi
        call dword ptr [edx + 0x1c]
        test al, al
        jne L_75514A
        mov byte ptr [esp + 0x13], al
    L_75514A:
        mov eax, dword ptr [esp + 0x14]
        inc esi
        cmp esi, eax
        jl L_755125
    L_755153:
        lea ecx, [esp + 0x18]
        mov dword ptr [esp + 0x6c], 0xffffffff
        call ext_006B9D70
        mov ecx, dword ptr [esp + 0x64]
        mov al, byte ptr [esp + 0x13]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0x60
        ret 0x8
        nop
        nop
        nop
        _emit 0xE9
        _emit 0x0B
        _emit 0x00
        _emit 0x00
        _emit 0x00
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
    L_755190:
        mov eax, dword ptr [mem_00925284]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [mem_00B60428], ecx
        mov dword ptr [mem_00B6042C], edx
        ret
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        _emit 0xE9
        _emit 0x0B
        _emit 0x00
        _emit 0x00
        _emit 0x00
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
    L_7551C0:
        mov eax, dword ptr [mem_00925284]
        fld qword ptr [eax]
        fchs
        fstp qword ptr [mem_00B60420]
        ret
    }
}

extern "C" void ext_006A5C5C();
extern "C" void ext_006A5C62();
extern "C" void ext_006D2170();
extern "C" void ext_007515F0();
extern "C" void ext_00754200();
extern "C" void ext_00754760();
extern "C" void ext_00782E70();
extern "C" int mem_0092521C;

// [0x00753CA0] sub_00753CA0 (624 bytes)
extern "C" __declspec(naked) void __fastcall fn_00753CA0(void* self, void* dummy, void* a1, void* a2) {
    __asm {
        sub esp, 0x24
        push ebx
        push ebp
        push esi
        push edi
        mov esi, ecx
        xor ebx, ebx
        push 0x4d8
        mov dword ptr [esp + 0x20], esi
        mov dword ptr [esp + 0x1c], ebx
        call ext_006A5C62
        push 0x4d8
        mov ebp, eax
        call ext_006A5C62
        add esp, 0x8
        mov edi, eax
        lea eax, [esp + 0x18]
        mov ecx, esi
        push ebp
        push eax
        mov dword ptr [esp + 0x1c], edi
        mov dword ptr [esp + 0x34], ebx
        mov dword ptr [esp + 0x38], ebx
        mov dword ptr [esp + 0x18], ebx
        mov dword ptr [esp + 0x28], ebx
        mov dword ptr [esp + 0x2c], ebx
        mov dword ptr [esp + 0x30], ebx
        call ext_007515F0
        test al, al
        je loc_753d98

        mov ebx, dword ptr [mem_0092521C]

    loc_753d05:
        mov ecx, dword ptr [esp + 0x18]
        lea eax, [ecx - 0x8]
        cmp eax, 0x40
        ja loc_753d7b
        xor edx, edx
        mov dl, byte ptr [eax + 0x753f2c]
        jmp dword ptr [edx * 4 + 0x753f10]

    loc_753d20:
        mov edi, ebp
        or ecx, -1
        xor eax, eax
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        mov esi, edi
        mov edi, dword ptr [esp + 0x14]
        shr ecx, 2
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        mov edi, dword ptr [esp + 0x14]
        mov esi, dword ptr [esp + 0x1c]
        jmp loc_753d7b

    loc_753d4b:
        lea ecx, [esp + 0x2c]
        push ecx
        push 0xaae640
        jmp loc_753d75

    loc_753d57:
        lea edx, [esp + 0x10]
        jmp loc_753d6f

    loc_753d5d:
        lea eax, [esp + 0x20]
        push eax
        jmp loc_753d70

    loc_753d64:
        lea ecx, [esp + 0x24]
        push ecx
        jmp loc_753d70

    loc_753d6b:
        lea edx, [esp + 0x28]

    loc_753d6f:
        push edx

    loc_753d70:
        push 0xaa86a4

    loc_753d75:
        push ebp
        call ebx
        add esp, 0xc

    loc_753d7b:
        mov eax, dword ptr [esp + 0x18]
        test eax, eax
        je loc_753db1
        lea eax, [esp + 0x18]
        push ebp
        push eax
        mov ecx, esi
        call ext_007515F0
        test al, al
        jne loc_753d05

    loc_753d98:
        push ebp
        call ext_006A5C5C
        push edi
        call ext_006A5C5C
        add esp, 0x8
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x24
        ret 8

    loc_753db1:
        mov eax, dword ptr [esp + 0x10]
        test eax, eax
        jne loc_753dd0
        push 0
        push edi
        lea ecx, [esi + 0x128]
        call ext_00782E70
        cdq
        xor eax, edx
        sub eax, edx
        mov dword ptr [esp + 0x10], eax

    loc_753dd0:
        mov esi, dword ptr [esp + 0x38]
        push 0
        push edi
        mov ecx, esi
        call ext_00782E70
        mov edi, dword ptr [esp + 0x3c]
        mov ebx, eax
        test ebx, ebx
        jne loc_753e04
        mov ebx, dword ptr [esp + 0x14]
        mov ecx, dword ptr [esp + 0x1c]
        push edi
        push esi
        push ebx
        call ext_00754760
        push 0
        push ebx
        mov ecx, esi
        call ext_00782E70
        mov ebx, eax

    loc_753e04:
        mov ecx, dword ptr [esp + 0x14]
        push 0
        push ecx
        mov ecx, edi
        call ext_00782E70
        mov edx, dword ptr [ebx]
        mov esi, eax
        mov dword ptr [esp + 0x38], edx
        mov edi, 0xaae870
        mov eax, ebp

    loc_753e21:
        mov dl, byte ptr [eax]
        mov cl, dl
        cmp dl, byte ptr [edi]
        jne loc_753e45
        test cl, cl
        je loc_753e41
        mov dl, byte ptr [eax + 1]
        mov cl, dl
        cmp dl, byte ptr [edi + 1]
        jne loc_753e45
        add eax, 2
        add edi, 2
        test cl, cl
        jne loc_753e21

    loc_753e41:
        xor eax, eax
        jmp loc_753e4a

    loc_753e45:
        sbb eax, eax
        sbb eax, -1

    loc_753e4a:
        test eax, eax
        jne loc_753e7e
        mov eax, dword ptr [esp + 0x10]
        mov edi, dword ptr [esp + 0x38]
        mov ecx, dword ptr [esp + 0x1c]
        push eax
        push edi
        push esi
        push ebx
        call ext_00754200
        test al, al
        je loc_753e82

    loc_753e67:
        mov ecx, dword ptr [esp + 0x10]
        push ecx
        mov ecx, dword ptr [esp + 0x20]
        push edi
        push esi
        push ebx
        call ext_00754200
        test al, al
        jne loc_753e67
        jmp loc_753e82

    loc_753e7e:
        mov edi, dword ptr [esp + 0x38]

    loc_753e82:
        cmp dword ptr [esp + 0x20], 9
        jne loc_753ef3
        mov eax, dword ptr [esi]
        mov ebx, dword ptr [ebx]
        lea edx, [esp + 0x38]
        mov ecx, esi
        push edx
        push eax
        mov dword ptr [esp + 0x40], 3
        call ext_006D2170
        mov ecx, dword ptr [esp + 0x10]
        mov eax, dword ptr [esi]
        lea edx, [esp + 0x38]
        mov dword ptr [esp + 0x38], ecx
        push edx
        push eax
        mov ecx, esi
        call ext_006D2170
        mov edx, dword ptr [esi]
        lea ecx, [esp + 0x38]
        push ecx
        push edx
        mov ecx, esi
        mov dword ptr [esp + 0x40], edi
        call ext_006D2170
        mov ecx, dword ptr [esi]
        lea eax, [esp + 0x38]
        push eax
        dec ebx
        push ecx
        mov ecx, esi
        mov dword ptr [esp + 0x40], ebx
        call ext_006D2170
        mov eax, dword ptr [esi]
        lea edx, [esp + 0x38]
        push edx
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0x40], edi
        call ext_006D2170

    loc_753ef3:
        push ebp
        call ext_006A5C5C
        mov ecx, dword ptr [esp + 0x18]
        push ecx
        call ext_006A5C5C
        add esp, 8
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x24
        ret 8
    }
}

// [0x007509E0] sub_007509E0 (1215 bytes)
extern "C" void ext_006A5C5C();
extern "C" void ext_006A5C62();
extern "C" void ext_006C27E0();
extern "C" void ext_006C2F50();
extern "C" void ext_006C3210();
extern "C" void ext_006C3280();
extern "C" void ext_006C32F0();
extern "C" void ext_006D2130();
extern "C" void ext_006D2160();
extern "C" void ext_006D2170();
extern "C" void ext_006D23B0();
extern "C" void ext_006D3560();
extern "C" void ext_006D80A0();
extern "C" void ext_00750EA0();
extern "C" void ext_007515F0();
extern "C" void ext_00752240();
extern "C" void ext_007531B0();
extern "C" void ext_00753F70();
extern "C" void ext_00754870();
extern "C" int mem_008BF8C8;
extern "C" int mem_00AAE85C;
extern "C" int mem_00AAE854;
extern "C" int mem_00AAE84C;
extern "C" int mem_00AAE844;
extern "C" int mem_00AAE834;
extern "C" int mem_00AAE83C;
extern "C" int mem_0092A270;
extern "C" int mem_0092A278;

extern "C" __declspec(naked) void __fastcall fn_007509E0(void* self) {
    __asm {
        push -0x1
        push offset mem_008BF8C8
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x60
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        push 0x20
        push 0x10
        lea ecx, [esp + 0x40]
        call ext_006D2130
        lea eax, [esp + 0x48]
        mov dword ptr [esp + 0x4c], eax
        xor ebx, ebx
        push 0x4
        push 0x10
        lea ecx, [esp + 0x28]
        mov dword ptr [esp + 0x80], ebx
        call ext_006D2130
        lea ecx, [esp + 0x30]
        mov dword ptr [esp + 0x34], ecx
        push 0x4d8
        mov byte ptr [esp + 0x7c], 0x1
        mov byte ptr [esp + 0x16], 0x1
        mov byte ptr [esp + 0x17], bl
        mov dword ptr [esp + 0x18], ebx
        call ext_006A5C62
        add esp, 0x4
        mov ebp, eax
        mov eax, dword ptr [esp + 0x20]
        lea edx, [esp + 0x18]
        push edx
        push eax
        lea ecx, [esp + 0x28]
        mov dword ptr [esp + 0x20], ebx
        call ext_006D2170
        mov edx, dword ptr [esp + 0x20]
        lea ecx, [esp + 0x18]
        push ecx
        push edx
        lea ecx, [esp + 0x28]
        mov dword ptr [esp + 0x20], ebx
        call ext_006D2170
        mov eax, dword ptr [esp + 0x84]
        mov ecx, dword ptr [edi + 0x4]
        push eax
        call ext_006D3560
        cmp eax, ebx
        mov dword ptr [esp + 0x84], eax
        push ebp
        je loc_750C84
    loc_750AA0:
        lea ecx, [esp + 0x18]
        push ecx
        mov ecx, edi
        call ext_007515F0
        test al, al
        je loc_750C83
    loc_750AB4:
        cmp dword ptr [esp + 0x14], ebx
        jne loc_750C6E
        mov esi, offset mem_00AAE85C
        mov eax, ebp
    loc_750AC5:
        mov dl, byte ptr [eax]
        mov cl, dl
        cmp dl, byte ptr [esi]
        jne loc_750AE9
        cmp cl, bl
        je loc_750AE5
        mov dl, byte ptr [eax + 0x1]
        mov cl, dl
        cmp dl, byte ptr [esi + 0x1]
        jne loc_750AE9
        add eax, 0x2
        add esi, 0x2
        cmp cl, bl
        jne loc_750AC5
    loc_750AE5:
        xor eax, eax
        jmp loc_750AEE
    loc_750AE9:
        sbb eax, eax
        sbb eax, -0x1
    loc_750AEE:
        cmp eax, ebx
        jne loc_750B0C
        lea eax, [esp + 0x20]
        lea ecx, [esp + 0x38]
        push eax
        push ecx
        mov ecx, edi
        mov byte ptr [esp + 0x1a], bl
        call ext_00753F70
        jmp loc_750C00
    loc_750B0C:
        mov esi, offset mem_00AAE854
        mov eax, ebp
    loc_750B13:
        mov dl, byte ptr [eax]
        mov cl, dl
        cmp dl, byte ptr [esi]
        jne loc_750B37
        cmp cl, bl
        je loc_750B33
        mov dl, byte ptr [eax + 0x1]
        mov cl, dl
        cmp dl, byte ptr [esi + 0x1]
        jne loc_750B37
        add eax, 0x2
        add esi, 0x2
        cmp cl, bl
        jne loc_750B13
    loc_750B33:
        xor eax, eax
        jmp loc_750B3C
    loc_750B37:
        sbb eax, eax
        sbb eax, -0x1
    loc_750B3C:
        cmp eax, ebx
        jne loc_750B5A
        lea eax, [esp + 0x20]
        lea ecx, [esp + 0x38]
        push eax
        push ecx
        mov ecx, edi
        mov byte ptr [esp + 0x1a], bl
        call ext_007531B0
        jmp loc_750C00
    loc_750B5A:
        mov esi, offset mem_00AAE84C
        mov eax, ebp
    loc_750B61:
        mov dl, byte ptr [eax]
        mov cl, dl
        cmp dl, byte ptr [esi]
        jne loc_750B85
        cmp cl, bl
        je loc_750B81
        mov dl, byte ptr [eax + 0x1]
        mov cl, dl
        cmp dl, byte ptr [esi + 0x1]
        jne loc_750B85
        add eax, 0x2
        add esi, 0x2
        cmp cl, bl
        jne loc_750B61
    loc_750B81:
        xor eax, eax
        jmp loc_750B8A
    loc_750B85:
        sbb eax, eax
        sbb eax, -0x1
    loc_750B8A:
        cmp eax, ebx
        jne loc_750BA5
        lea eax, [esp + 0x20]
        lea ecx, [esp + 0x38]
        push eax
        push ecx
        mov ecx, edi
        mov byte ptr [esp + 0x1a], bl
        call ext_00752240
        jmp loc_750C00
    loc_750BA5:
        mov esi, offset mem_00AAE844
        mov eax, ebp
    loc_750BAC:
        mov dl, byte ptr [eax]
        mov cl, dl
        cmp dl, byte ptr [esi]
        jne loc_750BD0
        cmp cl, bl
        je loc_750BCC
        mov dl, byte ptr [eax + 0x1]
        mov cl, dl
        cmp dl, byte ptr [esi + 0x1]
        jne loc_750BD0
        add eax, 0x2
        add esi, 0x2
        cmp cl, bl
        jne loc_750BAC
    loc_750BCC:
        xor eax, eax
        jmp loc_750BD5
    loc_750BD0:
        sbb eax, eax
        sbb eax, -0x1
    loc_750BD5:
        cmp eax, ebx
        jne loc_750C06
        cmp byte ptr [esp + 0x8c], bl
        je loc_750BEC
        mov eax, dword ptr [esp + 0x80]
        push eax
        jmp loc_750BF9
    loc_750BEC:
        mov ecx, dword ptr [esp + 0x84]
        mov byte ptr [esp + 0x13], 0x1
        push ecx
    loc_750BF9:
        mov ecx, edi
        call ext_00750EA0
    loc_750C00:
        cmp dword ptr [esp + 0x14], ebx
        jne loc_750C6E
    loc_750C06:
        mov esi, offset mem_00AAE834
        mov eax, ebp
    loc_750C0D:
        mov dl, byte ptr [eax]
        mov cl, dl
        cmp dl, byte ptr [esi]
        jne loc_750C31
        cmp cl, bl
        je loc_750C2D
        mov dl, byte ptr [eax + 0x1]
        mov cl, dl
        cmp dl, byte ptr [esi + 0x1]
        jne loc_750C31
        add eax, 0x2
        add esi, 0x2
        cmp cl, bl
        jne loc_750C0D
    loc_750C2D:
        xor eax, eax
        jmp loc_750C36
    loc_750C31:
        sbb eax, eax
        sbb eax, -0x1
    loc_750C36:
        cmp eax, ebx
        je loc_750CB1
        mov esi, offset mem_00AAE83C
        mov eax, ebp
    loc_750C41:
        mov dl, byte ptr [eax]
        mov cl, dl
        cmp dl, byte ptr [esi]
        jne loc_750C65
        cmp cl, bl
        je loc_750C61
        mov dl, byte ptr [eax + 0x1]
        mov cl, dl
        cmp dl, byte ptr [esi + 0x1]
        jne loc_750C65
        add eax, 0x2
        add esi, 0x2
        cmp cl, bl
        jne loc_750C41
    loc_750C61:
        xor eax, eax
        jmp loc_750C6A
    loc_750C65:
        sbb eax, eax
        sbb eax, -0x1
    loc_750C6A:
        cmp eax, ebx
        je loc_750CB1
    loc_750C6E:
        lea eax, [esp + 0x14]
        push ebp
        push eax
        mov ecx, edi
        call ext_007515F0
        test al, al
        jne loc_750AB4
    loc_750C83:
        push ebp
    loc_750C84:
        call ext_006A5C5C
        add esp, 0x4
        lea ecx, [esp + 0x20]
        mov byte ptr [esp + 0x78], bl
        call ext_006D2160
        lea ecx, [esp + 0x38]
        mov dword ptr [esp + 0x78], 0xffffffff
        call ext_006D2160
        xor al, al
        jmp loc_750E8A
    loc_750CB1:
        cmp byte ptr [esp + 0x12], bl
        je loc_750CD4
        cmp byte ptr [esp + 0x13], bl
        jne loc_750CF6
        mov ecx, dword ptr [edi + 0x4]
        mov eax, dword ptr [esp + 0x84]
        push 0x1
        push eax
        mov edx, dword ptr [ecx]
        call dword ptr [edx + 0x74]
        jmp loc_750E61
    loc_750CD4:
        lea ecx, [esp + 0x20]
        lea edx, [esp + 0x38]
        push ecx
        push edx
        mov ecx, edi
        call ext_00754870
        cmp eax, ebx
        je loc_750CF6
        mov ecx, dword ptr [esp + 0x84]
        push eax
        call ext_006C2F50
    loc_750CF6:
        mov esi, dword ptr [esp + 0x88]
        mov edi, 0x3ff00000
        fld qword ptr [esi + 0x18]
        fst qword ptr [esp + 0x18]
        fcomp qword ptr [mem_0092A270]
        fnstsw ax
        test ah, 0x40
        je loc_750D2A
        cmp dword ptr [esi + 0x20], ebx
        jne loc_750D2A
        cmp dword ptr [esi + 0x24], edi
        jne loc_750D2A
        cmp dword ptr [esi + 0x28], ebx
        jne loc_750D2A
        cmp dword ptr [esi + 0x2c], edi
        je loc_750D76
    loc_750D2A:
        fld qword ptr [esi + 0x20]
        mov eax, dword ptr [esi + 0x2c]
        mov ecx, dword ptr [esi + 0x28]
        mov edx, dword ptr [esp + 0x1c]
        push edi
        push ebx
        sub esp, 0x8
        fchs
        fstp qword ptr [esp]
        push eax
        mov eax, dword ptr [esp + 0x2c]
        push ecx
        push edx
        push eax
        lea ecx, [esp + 0x70]
        call ext_006D23B0
        lea ecx, [esp + 0x50]
        mov byte ptr [esp + 0x78], 0x2
        push ecx
        mov ecx, dword ptr [esp + 0x88]
        call ext_006C32F0
        lea ecx, [esp + 0x50]
        mov byte ptr [esp + 0x78], 0x1
        call ext_006D80A0
    loc_750D76:
        mov edx, dword ptr [esi + 0x30]
        mov eax, dword ptr [esi + 0x34]
        mov dword ptr [esp + 0x18], edx
        mov dword ptr [esp + 0x1c], eax
        fld qword ptr [esp + 0x18]
        fcomp qword ptr [mem_0092A278]
        fnstsw ax
        test ah, 0x40
        jne loc_750DCE
        mov ecx, dword ptr [esp + 0x1c]
        push edi
        push ebx
        push ebx
        push ebx
        push ecx
        push edx
        push ebx
        push ebx
        lea ecx, [esp + 0x70]
        call ext_006D23B0
        mov ecx, dword ptr [esp + 0x84]
        lea eax, [esp + 0x50]
        push eax
        mov byte ptr [esp + 0x7c], 0x3
        call ext_006C3280
        lea ecx, [esp + 0x50]
        mov byte ptr [esp + 0x78], 0x1
        call ext_006D80A0
    loc_750DCE:
        fld qword ptr [esi]
        fst qword ptr [esp + 0x18]
        fcomp qword ptr [mem_0092A278]
        fnstsw ax
        test ah, 0x40
        je loc_750E01
        fld qword ptr [esi + 0x8]
        fcomp qword ptr [mem_0092A278]
        fnstsw ax
        test ah, 0x40
        je loc_750E01
        fld qword ptr [esi + 0x10]
        fcomp qword ptr [mem_0092A278]
        fnstsw ax
        test ah, 0x40
        jne loc_750E4D
    loc_750E01:
        fld qword ptr [esi + 0x8]
        mov ecx, dword ptr [esi + 0x14]
        mov edx, dword ptr [esi + 0x10]
        mov eax, dword ptr [esp + 0x1c]
        push edi
        push ebx
        sub esp, 0x8
        fchs
        fstp qword ptr [esp]
        push ecx
        mov ecx, dword ptr [esp + 0x2c]
        push edx
        push eax
        push ecx
        lea ecx, [esp + 0x70]
        call ext_006D23B0
        mov ecx, dword ptr [esp + 0x84]
        lea edx, [esp + 0x50]
        push edx
        mov byte ptr [esp + 0x7c], 0x4
        call ext_006C3210
        lea ecx, [esp + 0x50]
        mov byte ptr [esp + 0x78], 0x1
        call ext_006D80A0
    loc_750E4D:
        mov eax, dword ptr [esp + 0x84]
        mov ecx, dword ptr [esp + 0x80]
        push eax
        call ext_006C27E0
    loc_750E61:
        push ebp
        call ext_006A5C5C
        add esp, 0x4
        lea ecx, [esp + 0x20]
        mov byte ptr [esp + 0x78], bl
        call ext_006D2160
        lea ecx, [esp + 0x38]
        mov dword ptr [esp + 0x78], 0xffffffff
        call ext_006D2160
        mov al, 0x1
    loc_750E8A:
        mov ecx, dword ptr [esp + 0x70]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0x6c
        ret 0x10
    }
}

// [0x00758890] sub_00758890 (1712 bytes)
extern "C" void ext_008BFB47();
extern "C" void ext_006B9950();
extern "C" void ext_006B9D70();
extern "C" void ext_006BADB0();
extern "C" void ext_006D2370();
extern "C" void ext_006D80A0();
extern "C" void ext_006E7460();
extern "C" void ext_006EA6D0();
extern "C" void ext_006F7680();
extern "C" void ext_007025B0();
extern "C" void ext_007275F0();
extern "C" void ext_007279A0();
extern "C" void ext_00727FE0();
extern "C" void ext_007283B0();
extern "C" void ext_007873F0();
extern "C" void ext_00787430();
extern "C" int mem_00AAD728;
extern "C" int mem_00AAD720;
extern "C" int mem_00AAD714;
extern "C" int mem_00AAD708;
extern "C" int mem_00AAD6FC;
extern "C" int mem_00AAD6F0;
extern "C" int mem_00AAD6E4;
extern "C" int mem_00AAD6D8;
extern "C" int mem_00AAD6CC;
extern "C" int mem_00AAD6C0;
extern "C" int mem_00AAD6B4;
extern "C" __declspec(naked) void __fastcall fn_00758890(void* self, int edx_unused, int a1, int a2, int a3, int a4) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -0x8
        push -0x1
        push offset ext_008BFB47
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x124
        push ebx
        push esi
        mov esi, ecx
        push edi
        lea ecx, [esp + 0x78]
        call ext_006EA6D0
        lea ecx, [esp + 0x38]
        mov dword ptr [esp + 0x138], 0x0
        call ext_006D2370
        lea ecx, [esp + 0x18]
        mov byte ptr [esp + 0x138], 0x1
        call ext_006D2370
        lea ecx, [esp + 0x58]
        mov byte ptr [esp + 0x138], 0x2
        call ext_006D2370
        mov ecx, dword ptr [ebp + 0xc]
        lea eax, [esp + 0x78]
        push eax
        push ecx
        mov ecx, dword ptr [ebp + 0x8]
        mov byte ptr [esp + 0x140], 0x3
        call ext_006F7680
        mov bl, byte ptr [ebp + 0x14]
        test al, al
        je loc_7589EC
        mov ecx, dword ptr [esp + 0x78]
        test ecx, ecx
        je loc_75892B
        call ext_007025B0
        cmp eax, dword ptr [ebp + 0x10]
        je loc_75893C
    loc_75892B:
        lea ecx, [esp + 0x7c]
        call ext_006B9950
        test al, al
        jne loc_7589EC
    loc_75893C:
        mov ecx, dword ptr [esp + 0x78]
        test ecx, ecx
        je loc_758975
        call ext_006BADB0
        mov edi, dword ptr [esi + 0xac]
        push offset mem_00AAD728
        add edi, 0x4
        mov dword ptr [esp + 0x10], eax
        mov ecx, edi
        call ext_007275F0
        mov edx, dword ptr [esp + 0xc]
        mov ecx, edi
        push edx
        call ext_007279A0
        mov ecx, edi
        call ext_007283B0
    loc_758975:
        lea ecx, [esp + 0x7c]
        call ext_006B9950
        test al, al
        jne loc_7589B7
        lea ecx, [esp + 0x7c]
        call ext_006E7460
        mov edi, dword ptr [esi + 0xac]
        push offset mem_00AAD720
        add edi, 0x4
        mov dword ptr [esp + 0x10], eax
        mov ecx, edi
        call ext_007275F0
        mov eax, dword ptr [esp + 0xc]
        mov ecx, edi
        push eax
        call ext_007279A0
        mov ecx, edi
        call ext_007283B0
    loc_7589B7:
        lea ecx, [esp + 0xc8]
        push ecx
        lea ecx, [esp + 0x3c]
        call ext_007873F0
        lea edx, [esp + 0xe8]
        lea ecx, [esp + 0x18]
        push edx
        call ext_007873F0
        lea eax, [esp + 0x108]
        lea ecx, [esp + 0x58]
        push eax
        call ext_007873F0
        jmp loc_758A51
    loc_7589EC:
        push 0x3ff00000
        push 0x0
        push 0x0
        push 0x0
        push 0x0
        push 0x0
        push 0x0
        push 0x0
        lea ecx, [esp + 0x58]
        call ext_00787430
        push 0x3ff00000
        push 0x0
        push 0x0
        push 0x0
        push 0x0
        push 0x0
        push 0x0
        push 0x0
        lea ecx, [esp + 0x38]
        call ext_00787430
        push 0x3ff00000
        push 0x0
        push 0x3ff00000
        push 0x0
        push 0x3ff00000
        push 0x0
        push 0x3ff00000
        push 0x0
        lea ecx, [esp + 0x78]
        call ext_00787430
        test bl, bl
        je loc_758EA3
    loc_758A51:
        mov edi, dword ptr [esi + 0xac]
        mov ecx, dword ptr [esp + 0x38]
        mov edx, dword ptr [esp + 0x3c]
        add edi, 0x4
        mov dword ptr [esp + 0xc], ecx
        push offset mem_00AAD714
        mov ecx, edi
        mov dword ptr [esp + 0x14], edx
        call ext_007275F0
        mov eax, dword ptr [esp + 0x10]
        mov ecx, dword ptr [esp + 0xc]
        push eax
        push ecx
        mov ecx, edi
        call ext_00727FE0
        mov ecx, edi
        call ext_007283B0
        mov edi, dword ptr [esi + 0xac]
        mov edx, dword ptr [esp + 0x40]
        mov eax, dword ptr [esp + 0x44]
        add edi, 0x4
        push offset mem_00AAD708
        mov ecx, edi
        mov dword ptr [esp + 0x10], edx
        mov dword ptr [esp + 0x14], eax
        call ext_007275F0
        mov ecx, dword ptr [esp + 0x10]
        mov edx, dword ptr [esp + 0xc]
        push ecx
        push edx
        mov ecx, edi
        call ext_00727FE0
        mov ecx, edi
        call ext_007283B0
        mov edi, dword ptr [esi + 0xac]
        mov ecx, dword ptr [esp + 0x4c]
        mov eax, dword ptr [esp + 0x48]
        add edi, 0x4
        mov dword ptr [esp + 0x10], ecx
        push offset mem_00AAD6FC
        mov ecx, edi
        mov dword ptr [esp + 0x10], eax
        call ext_007275F0
        mov edx, dword ptr [esp + 0x10]
        mov eax, dword ptr [esp + 0xc]
        push edx
        push eax
        mov ecx, edi
        call ext_00727FE0
        mov ecx, edi
        call ext_007283B0
        mov edi, dword ptr [esi + 0xac]
        mov ecx, dword ptr [esp + 0x18]
        mov edx, dword ptr [esp + 0x1c]
        add edi, 0x4
        mov dword ptr [esp + 0xc], ecx
        push offset mem_00AAD6F0
        mov ecx, edi
        mov dword ptr [esp + 0x14], edx
        call ext_007275F0
        mov eax, dword ptr [esp + 0x10]
        mov ecx, dword ptr [esp + 0xc]
        push eax
        push ecx
        mov ecx, edi
        call ext_00727FE0
        mov ecx, edi
        call ext_007283B0
        mov edi, dword ptr [esi + 0xac]
        mov edx, dword ptr [esp + 0x20]
        mov eax, dword ptr [esp + 0x24]
        add edi, 0x4
        push offset mem_00AAD6E4
        mov ecx, edi
        mov dword ptr [esp + 0x10], edx
        mov dword ptr [esp + 0x14], eax
        call ext_007275F0
        mov ecx, dword ptr [esp + 0x10]
        mov edx, dword ptr [esp + 0xc]
        push ecx
        push edx
        mov ecx, edi
        call ext_00727FE0
        mov ecx, edi
        call ext_007283B0
        mov edi, dword ptr [esi + 0xac]
        mov ecx, dword ptr [esp + 0x2c]
        mov eax, dword ptr [esp + 0x28]
        add edi, 0x4
        mov dword ptr [esp + 0x10], ecx
        push offset mem_00AAD6D8
        mov ecx, edi
        mov dword ptr [esp + 0x10], eax
        call ext_007275F0
        mov edx, dword ptr [esp + 0x10]
        mov eax, dword ptr [esp + 0xc]
        push edx
        push eax
        mov ecx, edi
        call ext_00727FE0
        mov ecx, edi
        call ext_007283B0
        mov edi, dword ptr [esi + 0xac]
        mov ecx, dword ptr [esp + 0x58]
        mov edx, dword ptr [esp + 0x5c]
        add edi, 0x4
        mov dword ptr [esp + 0xc], ecx
        push offset mem_00AAD6CC
        mov ecx, edi
        mov dword ptr [esp + 0x14], edx
        call ext_007275F0
        mov eax, dword ptr [esp + 0x10]
        mov ecx, dword ptr [esp + 0xc]
        push eax
        push ecx
        mov ecx, edi
        call ext_00727FE0
        mov ecx, edi
        call ext_007283B0
        mov edi, dword ptr [esi + 0xac]
        mov edx, dword ptr [esp + 0x60]
        mov eax, dword ptr [esp + 0x64]
        add edi, 0x4
        push offset mem_00AAD6C0
        mov ecx, edi
        mov dword ptr [esp + 0x10], edx
        mov dword ptr [esp + 0x14], eax
        call ext_007275F0
        mov ecx, dword ptr [esp + 0x10]
        mov edx, dword ptr [esp + 0xc]
        push ecx
        push edx
        mov ecx, edi
        call ext_00727FE0
        mov ecx, edi
        call ext_007283B0
        mov edi, dword ptr [esi + 0xac]
        mov ecx, dword ptr [esp + 0x6c]
        mov eax, dword ptr [esp + 0x68]
        add edi, 0x4
        mov dword ptr [esp + 0x10], ecx
        push offset mem_00AAD6B4
        mov ecx, edi
        mov dword ptr [esp + 0x10], eax
        call ext_007275F0
        mov edx, dword ptr [esp + 0x10]
        mov eax, dword ptr [esp + 0xc]
        push edx
        push eax
        mov ecx, edi
        call ext_00727FE0
        mov ecx, edi
        call ext_007283B0
        test bl, bl
        je loc_758EA3
        mov edi, dword ptr [esi + 0xac]
        mov ecx, dword ptr [esp + 0x38]
        mov edx, dword ptr [esp + 0x3c]
        add edi, 0x4
        mov dword ptr [esp + 0xc], ecx
        push offset mem_00AAD714
        mov ecx, edi
        mov dword ptr [esp + 0x14], edx
        call ext_007275F0
        mov eax, dword ptr [esp + 0x10]
        mov ecx, dword ptr [esp + 0xc]
        push eax
        push ecx
        mov ecx, edi
        call ext_00727FE0
        mov ecx, edi
        call ext_007283B0
        mov edi, dword ptr [esi + 0xac]
        mov edx, dword ptr [esp + 0x40]
        mov eax, dword ptr [esp + 0x44]
        add edi, 0x4
        push offset mem_00AAD708
        mov ecx, edi
        mov dword ptr [esp + 0x10], edx
        mov dword ptr [esp + 0x14], eax
        call ext_007275F0
        mov ecx, dword ptr [esp + 0x10]
        mov edx, dword ptr [esp + 0xc]
        push ecx
        push edx
        mov ecx, edi
        call ext_00727FE0
        mov ecx, edi
        call ext_007283B0
        mov edi, dword ptr [esi + 0xac]
        mov ecx, dword ptr [esp + 0x4c]
        mov eax, dword ptr [esp + 0x48]
        add edi, 0x4
        mov dword ptr [esp + 0x10], ecx
        push offset mem_00AAD6FC
        mov ecx, edi
        mov dword ptr [esp + 0x10], eax
        call ext_007275F0
        mov edx, dword ptr [esp + 0x10]
        mov eax, dword ptr [esp + 0xc]
        push edx
        push eax
        mov ecx, edi
        call ext_00727FE0
        mov ecx, edi
        call ext_007283B0
        mov edi, dword ptr [esi + 0xac]
        mov ecx, dword ptr [esp + 0x18]
        mov edx, dword ptr [esp + 0x1c]
        add edi, 0x4
        mov dword ptr [esp + 0xc], ecx
        push offset mem_00AAD6F0
        mov ecx, edi
        mov dword ptr [esp + 0x14], edx
        call ext_007275F0
        mov eax, dword ptr [esp + 0x10]
        mov ecx, dword ptr [esp + 0xc]
        push eax
        push ecx
        mov ecx, edi
        call ext_00727FE0
        mov ecx, edi
        call ext_007283B0
        mov edi, dword ptr [esi + 0xac]
        mov edx, dword ptr [esp + 0x20]
        mov eax, dword ptr [esp + 0x24]
        add edi, 0x4
        push offset mem_00AAD6E4
        mov ecx, edi
        mov dword ptr [esp + 0x10], edx
        mov dword ptr [esp + 0x14], eax
        call ext_007275F0
        mov ecx, dword ptr [esp + 0x10]
        mov edx, dword ptr [esp + 0xc]
        push ecx
        push edx
        mov ecx, edi
        call ext_00727FE0
        mov ecx, edi
        call ext_007283B0
        mov edi, dword ptr [esi + 0xac]
        mov ecx, dword ptr [esp + 0x2c]
        mov eax, dword ptr [esp + 0x28]
        add edi, 0x4
        mov dword ptr [esp + 0x10], ecx
        push offset mem_00AAD6D8
        mov ecx, edi
        mov dword ptr [esp + 0x10], eax
        call ext_007275F0
        mov edx, dword ptr [esp + 0x10]
        mov eax, dword ptr [esp + 0xc]
        push edx
        push eax
        mov ecx, edi
        call ext_00727FE0
        mov ecx, edi
        call ext_007283B0
        mov edi, dword ptr [esi + 0xac]
        mov ecx, dword ptr [esp + 0x58]
        mov edx, dword ptr [esp + 0x5c]
        add edi, 0x4
        mov dword ptr [esp + 0xc], ecx
        push offset mem_00AAD6CC
        mov ecx, edi
        mov dword ptr [esp + 0x14], edx
        call ext_007275F0
        mov eax, dword ptr [esp + 0x10]
        mov ecx, dword ptr [esp + 0xc]
        push eax
        push ecx
        mov ecx, edi
        call ext_00727FE0
        mov ecx, edi
        call ext_007283B0
        mov edi, dword ptr [esi + 0xac]
        mov edx, dword ptr [esp + 0x60]
        mov eax, dword ptr [esp + 0x64]
        add edi, 0x4
        push offset mem_00AAD6C0
        mov ecx, edi
        mov dword ptr [esp + 0x10], edx
        mov dword ptr [esp + 0x14], eax
        call ext_007275F0
        mov ecx, dword ptr [esp + 0x10]
        mov edx, dword ptr [esp + 0xc]
        push ecx
        push edx
        mov ecx, edi
        call ext_00727FE0
        mov ecx, edi
        call ext_007283B0
        mov esi, dword ptr [esi + 0xac]
        mov ecx, dword ptr [esp + 0x6c]
        mov eax, dword ptr [esp + 0x68]
        add esi, 0x4
        mov dword ptr [esp + 0x10], ecx
        push offset mem_00AAD6B4
        mov ecx, esi
        mov dword ptr [esp + 0x10], eax
        call ext_007275F0
        mov edx, dword ptr [esp + 0x10]
        mov eax, dword ptr [esp + 0xc]
        push edx
        push eax
        mov ecx, esi
        call ext_00727FE0
        mov ecx, esi
        call ext_007283B0
    loc_758EA3:
        lea ecx, [esp + 0x58]
        mov byte ptr [esp + 0x138], 0x2
        call ext_006D80A0
        lea ecx, [esp + 0x18]
        mov byte ptr [esp + 0x138], 0x1
        call ext_006D80A0
        lea ecx, [esp + 0x38]
        mov byte ptr [esp + 0x138], 0x0
        call ext_006D80A0
        lea ecx, [esp + 0x108]
        mov dword ptr [esp + 0x138], 0x6
        call ext_006D80A0
        lea ecx, [esp + 0xe8]
        mov byte ptr [esp + 0x138], 0x5
        call ext_006D80A0
        lea ecx, [esp + 0xc8]
        mov byte ptr [esp + 0x138], 0x4
        call ext_006D80A0
        lea ecx, [esp + 0x7c]
        mov dword ptr [esp + 0x138], -0x1
        call ext_006B9D70
        mov ecx, dword ptr [esp + 0x130]
        pop edi
        pop esi
        mov dword ptr fs:[0x0], ecx
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0x10
    }
}

extern "C" void ext_006D2370();
extern "C" void ext_006D23F0();
extern "C" void ext_006D80A0();
extern "C" void ext_007275F0();
extern "C" void ext_00727C80();
extern "C" void ext_00727FE0();
extern "C" void ext_007283B0();
extern "C" void ext_00728410();
extern "C" void ext_007284D0();
extern "C" void ext_007873F0();
extern "C" void ext_0079DD30();
extern "C" void ext_0079DDC0();
extern "C" void ext_0079DEC0();
extern "C" void ext_0079DFC0();
extern "C" void ext_0079E130();
extern "C" void ext_0079E2E0();
extern "C" void ext_0079E450();
extern "C" void ext_0079E480();
extern "C" void ext_0079E520();
extern "C" void ext_0079E5D0();
extern "C" int mem_0092A278;
extern "C" int mem_0092A270;

// [0x0075B4B0] sub_0075B4B0 (4160 bytes)
extern "C" __declspec(naked) void __fastcall fn_0075B4B0(void* self) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -0x8
        push -0x1
        push 0x8bfcd8
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x64
        push ebx
        push esi
        mov esi, ecx
        push edi
        push 0xaadab0
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_007275F0
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_00728410
        mov eax, dword ptr [ebp + 0x8]
        lea ecx, [esp + 0x20]
        mov eax, dword ptr [eax + 0x4c8]
        push eax
        call ext_0079DD30
        lea ecx, [esp + 0x30]
        call ext_006D2370
        push 0x0
        lea ecx, [esp + 0x24]
        mov dword ptr [esp + 0x7c], 0x0
        call ext_0079DDC0
        mov bl, al
        push 0x1
        lea ecx, [esp + 0x24]
        mov byte ptr [esp + 0x18], bl
        call ext_0079DDC0
        push 0x2
        lea ecx, [esp + 0x24]
        mov byte ptr [esp + 0x10], al
        call ext_0079DDC0
        mov edi, dword ptr [esi + 0xac]
        push 0xaadaa8
        add edi, 0x4
        mov byte ptr [esp + 0x14], al
        mov ecx, edi
        call ext_007275F0
        mov ecx, dword ptr [esp + 0x14]
        and ecx, 0xff
        push ecx
        mov ecx, edi
        call ext_00727C80
        mov ecx, edi
        call ext_007283B0
        mov edi, dword ptr [esi + 0xac]
        push 0xaadaa0
        add edi, 0x4
        mov ecx, edi
        call ext_007275F0
        mov edx, dword ptr [esp + 0xc]
        mov ecx, edi
        and edx, 0xff
        push edx
        call ext_00727C80
        mov ecx, edi
        call ext_007283B0
        mov edi, dword ptr [esi + 0xac]
        push 0xaada98
        add edi, 0x4
        mov ecx, edi
        call ext_007275F0
        mov eax, dword ptr [esp + 0x10]
        mov ecx, edi
        and eax, 0xff
        push eax
        call ext_00727C80
        mov ecx, edi
        call ext_007283B0
        test bl, bl
        jne L_75B60E
        push 0x0
        lea ecx, [esp + 0x24]
        call ext_0079DEC0
        mov edi, dword ptr [esi + 0xac]
        and eax, 0xff
        add edi, 0x4
        push 0xaada90
        mov ecx, edi
        mov ebx, eax
        call ext_007275F0
        push ebx
        mov ecx, edi
        call ext_00727C80
        mov ecx, edi
        call ext_007283B0
        mov bl, byte ptr [esp + 0x14]
    L_75B60E:
        mov al, byte ptr [esp + 0xc]
        test al, al
        jne L_75B650
        push 0x1
        lea ecx, [esp + 0x24]
        call ext_0079DEC0
        mov edi, dword ptr [esi + 0xac]
        and eax, 0xff
        add edi, 0x4
        push 0xaada88
        mov ecx, edi
        mov ebx, eax
        call ext_007275F0
        push ebx
        mov ecx, edi
        call ext_00727C80
        mov ecx, edi
        call ext_007283B0
        mov bl, byte ptr [esp + 0x14]
    L_75B650:
        mov al, byte ptr [esp + 0x10]
        test al, al
        jne L_75B692
        push 0x2
        lea ecx, [esp + 0x24]
        call ext_0079DEC0
        mov edi, dword ptr [esi + 0xac]
        and eax, 0xff
        add edi, 0x4
        push 0xaada80
        mov ecx, edi
        mov ebx, eax
        call ext_007275F0
        push ebx
        mov ecx, edi
        call ext_00727C80
        mov ecx, edi
        call ext_007283B0
        mov bl, byte ptr [esp + 0x14]
    L_75B692:
        lea ecx, [esp + 0x50]
        push 0x0
        push ecx
        lea ecx, [esp + 0x28]
        call ext_0079DFC0
        push eax
        lea ecx, [esp + 0x34]
        mov byte ptr [esp + 0x7c], 0x1
        call ext_007873F0
        lea ecx, [esp + 0x50]
        mov byte ptr [esp + 0x78], 0x0
        call ext_006D80A0
        test bl, bl
        jne L_75B7E4
        push 0x0
        lea ecx, [esp + 0x34]
        call ext_006D23F0
        fld qword ptr [eax]
        fcomp qword ptr [mem_0092A278]
        fnstsw ax
        test ah, 0x40
        jne L_75B726
        push 0x0
        lea ecx, [esp + 0x34]
        call ext_006D23F0
        mov edx, dword ptr [eax]
        mov edi, dword ptr [esi + 0xac]
        add edi, 0x4
        push 0xaada74
        mov eax, dword ptr [eax + 0x4]
        mov ecx, edi
        mov dword ptr [esp + 0x18], edx
        mov dword ptr [esp + 0x1c], eax
        call ext_007275F0
        mov ecx, dword ptr [esp + 0x18]
        mov edx, dword ptr [esp + 0x14]
        push ecx
        push edx
        mov ecx, edi
        call ext_00727FE0
        mov ecx, edi
        call ext_007283B0
    L_75B726:
        push 0x1
        lea ecx, [esp + 0x34]
        call ext_006D23F0
        fld qword ptr [eax]
        fcomp qword ptr [mem_0092A278]
        fnstsw ax
        test ah, 0x40
        jne L_75B785
        push 0x1
        lea ecx, [esp + 0x34]
        call ext_006D23F0
        mov ecx, dword ptr [eax]
        mov edi, dword ptr [esi + 0xac]
        add edi, 0x4
        mov dword ptr [esp + 0x14], ecx
        mov edx, dword ptr [eax + 0x4]
        push 0xaada68
        mov ecx, edi
        mov dword ptr [esp + 0x1c], edx
        call ext_007275F0
        mov eax, dword ptr [esp + 0x18]
        mov ecx, dword ptr [esp + 0x14]
        push eax
        push ecx
        mov ecx, edi
        call ext_00727FE0
        mov ecx, edi
        call ext_007283B0
    L_75B785:
        push 0x2
        lea ecx, [esp + 0x34]
        call ext_006D23F0
        fld qword ptr [eax]
        fcomp qword ptr [mem_0092A278]
        fnstsw ax
        test ah, 0x40
        jne L_75B7E4
        push 0x2
        lea ecx, [esp + 0x34]
        call ext_006D23F0
        mov edx, dword ptr [eax]
        mov edi, dword ptr [esi + 0xac]
        add edi, 0x4
        push 0xaada5c
        mov eax, dword ptr [eax + 0x4]
        mov ecx, edi
        mov dword ptr [esp + 0x18], edx
        mov dword ptr [esp + 0x1c], eax
        call ext_007275F0
        mov ecx, dword ptr [esp + 0x18]
        mov edx, dword ptr [esp + 0x14]
        push ecx
        push edx
        mov ecx, edi
        call ext_00727FE0
        mov ecx, edi
        call ext_007283B0
    L_75B7E4:
        lea eax, [esp + 0x50]
        push 0x1
        push eax
        lea ecx, [esp + 0x28]
        call ext_0079DFC0
        push eax
        lea ecx, [esp + 0x34]
        mov byte ptr [esp + 0x7c], 0x2
        call ext_007873F0
        lea ecx, [esp + 0x50]
        mov byte ptr [esp + 0x78], 0x0
        call ext_006D80A0
        mov al, byte ptr [esp + 0xc]
        test al, al
        jne L_75B93A
        push 0x0
        lea ecx, [esp + 0x34]
        call ext_006D23F0
        fld qword ptr [eax]
        fcomp qword ptr [mem_0092A278]
        fnstsw ax
        test ah, 0x40
        jne L_75B87C
        push 0x0
        lea ecx, [esp + 0x34]
        call ext_006D23F0
        mov ecx, dword ptr [eax]
        mov edi, dword ptr [esi + 0xac]
        add edi, 0x4
        mov dword ptr [esp + 0x14], ecx
        mov edx, dword ptr [eax + 0x4]
        push 0xaada50
        mov ecx, edi
        mov dword ptr [esp + 0x1c], edx
        call ext_007275F0
        mov eax, dword ptr [esp + 0x18]
        mov ecx, dword ptr [esp + 0x14]
        push eax
        push ecx
        mov ecx, edi
        call ext_00727FE0
        mov ecx, edi
        call ext_007283B0
    L_75B87C:
        push 0x1
        lea ecx, [esp + 0x34]
        call ext_006D23F0
        fld qword ptr [eax]
        fcomp qword ptr [mem_0092A278]
        fnstsw ax
        test ah, 0x40
        jne L_75B8DB
        push 0x1
        lea ecx, [esp + 0x34]
        call ext_006D23F0
        mov edx, dword ptr [eax]
        mov edi, dword ptr [esi + 0xac]
        add edi, 0x4
        push 0xaada44
        mov eax, dword ptr [eax + 0x4]
        mov ecx, edi
        mov dword ptr [esp + 0x18], edx
        mov dword ptr [esp + 0x1c], eax
        call ext_007275F0
        mov ecx, dword ptr [esp + 0x18]
        mov edx, dword ptr [esp + 0x14]
        push ecx
        push edx
        mov ecx, edi
        call ext_00727FE0
        mov ecx, edi
        call ext_007283B0
    L_75B8DB:
        push 0x2
        lea ecx, [esp + 0x34]
        call ext_006D23F0
        fld qword ptr [eax]
        fcomp qword ptr [mem_0092A278]
        fnstsw ax
        test ah, 0x40
        jne L_75B93A
        push 0x2
        lea ecx, [esp + 0x34]
        call ext_006D23F0
        mov ecx, dword ptr [eax]
        mov edi, dword ptr [esi + 0xac]
        add edi, 0x4
        mov dword ptr [esp + 0x14], ecx
        mov edx, dword ptr [eax + 0x4]
        push 0xaada38
        mov ecx, edi
        mov dword ptr [esp + 0x1c], edx
        call ext_007275F0
        mov eax, dword ptr [esp + 0x18]
        mov ecx, dword ptr [esp + 0x14]
        push eax
        push ecx
        mov ecx, edi
        call ext_00727FE0
        mov ecx, edi
        call ext_007283B0
    L_75B93A:
        lea edx, [esp + 0x50]
        push 0x2
        push edx
        lea ecx, [esp + 0x28]
        call ext_0079DFC0
        push eax
        lea ecx, [esp + 0x34]
        mov byte ptr [esp + 0x7c], 0x3
        call ext_007873F0
        lea ecx, [esp + 0x50]
        mov byte ptr [esp + 0x78], 0x0
        call ext_006D80A0
        mov al, byte ptr [esp + 0x10]
        test al, al
        jne L_75BA90
        push 0x0
        lea ecx, [esp + 0x34]
        call ext_006D23F0
        fld qword ptr [eax]
        fcomp qword ptr [mem_0092A270]
        fnstsw ax
        test ah, 0x40
        jne L_75B9D2
        push 0x0
        lea ecx, [esp + 0x34]
        call ext_006D23F0
        mov ecx, dword ptr [eax]
        mov edi, dword ptr [esi + 0xac]
        add edi, 0x4
        mov dword ptr [esp + 0x14], ecx
        mov edx, dword ptr [eax + 0x4]
        push 0xaada2c
        mov ecx, edi
        mov dword ptr [esp + 0x1c], edx
        call ext_007275F0
        mov eax, dword ptr [esp + 0x18]
        mov ecx, dword ptr [esp + 0x14]
        push eax
        push ecx
        mov ecx, edi
        call ext_00727FE0
        mov ecx, edi
        call ext_007283B0
    L_75B9D2:
        push 0x1
        lea ecx, [esp + 0x34]
        call ext_006D23F0
        fld qword ptr [eax]
        fcomp qword ptr [mem_0092A270]
        fnstsw ax
        test ah, 0x40
        jne L_75BA31
        push 0x1
        lea ecx, [esp + 0x34]
        call ext_006D23F0
        mov edx, dword ptr [eax]
        mov edi, dword ptr [esi + 0xac]
        add edi, 0x4
        push 0xaada20
        mov eax, dword ptr [eax + 0x4]
        mov ecx, edi
        mov dword ptr [esp + 0x18], edx
        mov dword ptr [esp + 0x1c], eax
        call ext_007275F0
        mov ecx, dword ptr [esp + 0x18]
        mov edx, dword ptr [esp + 0x14]
        push ecx
        push edx
        mov ecx, edi
        call ext_00727FE0
        mov ecx, edi
        call ext_007283B0
    L_75BA31:
        push 0x2
        lea ecx, [esp + 0x34]
        call ext_006D23F0
        fld qword ptr [eax]
        fcomp qword ptr [mem_0092A270]
        fnstsw ax
        test ah, 0x40
        jne L_75BA90
        push 0x2
        lea ecx, [esp + 0x34]
        call ext_006D23F0
        mov ecx, dword ptr [eax]
        mov edi, dword ptr [esi + 0xac]
        add edi, 0x4
        mov dword ptr [esp + 0x14], ecx
        mov edx, dword ptr [eax + 0x4]
        push 0xaada14
        mov ecx, edi
        mov dword ptr [esp + 0x1c], edx
        call ext_007275F0
        mov eax, dword ptr [esp + 0x18]
        mov ecx, dword ptr [esp + 0x14]
        push eax
        push ecx
        mov ecx, edi
        call ext_00727FE0
        mov ecx, edi
        call ext_007283B0
    L_75BA90:
        lea edx, [esp + 0x50]
        push 0x0
        push edx
        lea ecx, [esp + 0x28]
        call ext_0079E130
        push eax
        lea ecx, [esp + 0x34]
        mov byte ptr [esp + 0x7c], 0x4
        call ext_007873F0
        lea ecx, [esp + 0x50]
        mov byte ptr [esp + 0x78], 0x0
        call ext_006D80A0
        test bl, bl
        jne L_75BBE2
        push 0x0
        lea ecx, [esp + 0x34]
        call ext_006D23F0
        fld qword ptr [eax]
        fcomp qword ptr [mem_0092A278]
        fnstsw ax
        test ah, 0x40
        jne L_75BB24
        push 0x0
        lea ecx, [esp + 0x34]
        call ext_006D23F0
        mov ecx, dword ptr [eax]
        mov edi, dword ptr [esi + 0xac]
        add edi, 0x4
        mov dword ptr [esp + 0x14], ecx
        mov edx, dword ptr [eax + 0x4]
        push 0xaada0c
        mov ecx, edi
        mov dword ptr [esp + 0x1c], edx
        call ext_007275F0
        mov eax, dword ptr [esp + 0x18]
        mov ecx, dword ptr [esp + 0x14]
        push eax
        push ecx
        mov ecx, edi
        call ext_00727FE0
        mov ecx, edi
        call ext_007283B0
    L_75BB24:
        push 0x1
        lea ecx, [esp + 0x34]
        call ext_006D23F0
        fld qword ptr [eax]
        fcomp qword ptr [mem_0092A278]
        fnstsw ax
        test ah, 0x40
        jne L_75BB83
        push 0x1
        lea ecx, [esp + 0x34]
        call ext_006D23F0
        mov edx, dword ptr [eax]
        mov edi, dword ptr [esi + 0xac]
        add edi, 0x4
        push 0xaada04
        mov eax, dword ptr [eax + 0x4]
        mov ecx, edi
        mov dword ptr [esp + 0x18], edx
        mov dword ptr [esp + 0x1c], eax
        call ext_007275F0
        mov ecx, dword ptr [esp + 0x18]
        mov edx, dword ptr [esp + 0x14]
        push ecx
        push edx
        mov ecx, edi
        call ext_00727FE0
        mov ecx, edi
        call ext_007283B0
    L_75BB83:
        push 0x2
        lea ecx, [esp + 0x34]
        call ext_006D23F0
        fld qword ptr [eax]
        fcomp qword ptr [mem_0092A278]
        fnstsw ax
        test ah, 0x40
        jne L_75BBE2
        push 0x2
        lea ecx, [esp + 0x34]
        call ext_006D23F0
        mov ecx, dword ptr [eax]
        mov edi, dword ptr [esi + 0xac]
        add edi, 0x4
        mov dword ptr [esp + 0x14], ecx
        mov edx, dword ptr [eax + 0x4]
        push 0xaad9fc
        mov ecx, edi
        mov dword ptr [esp + 0x1c], edx
        call ext_007275F0
        mov eax, dword ptr [esp + 0x18]
        mov ecx, dword ptr [esp + 0x14]
        push eax
        push ecx
        mov ecx, edi
        call ext_00727FE0
        mov ecx, edi
        call ext_007283B0
    L_75BBE2:
        lea edx, [esp + 0x50]
        push 0x1
        push edx
        lea ecx, [esp + 0x28]
        call ext_0079E130
        push eax
        lea ecx, [esp + 0x34]
        mov byte ptr [esp + 0x7c], 0x5
        call ext_007873F0
        lea ecx, [esp + 0x50]
        mov byte ptr [esp + 0x78], 0x0
        call ext_006D80A0
        mov al, byte ptr [esp + 0xc]
        test al, al
        jne L_75BD38
        push 0x0
        lea ecx, [esp + 0x34]
        call ext_006D23F0
        fld qword ptr [eax]
        fcomp qword ptr [mem_0092A278]
        fnstsw ax
        test ah, 0x40
        jne L_75BC7A
        push 0x0
        lea ecx, [esp + 0x34]
        call ext_006D23F0
        mov ecx, dword ptr [eax]
        mov edi, dword ptr [esi + 0xac]
        add edi, 0x4
        mov dword ptr [esp + 0x14], ecx
        mov edx, dword ptr [eax + 0x4]
        push 0xaad9f4
        mov ecx, edi
        mov dword ptr [esp + 0x1c], edx
        call ext_007275F0
        mov eax, dword ptr [esp + 0x18]
        mov ecx, dword ptr [esp + 0x14]
        push eax
        push ecx
        mov ecx, edi
        call ext_00727FE0
        mov ecx, edi
        call ext_007283B0
    L_75BC7A:
        push 0x1
        lea ecx, [esp + 0x34]
        call ext_006D23F0
        fld qword ptr [eax]
        fcomp qword ptr [mem_0092A278]
        fnstsw ax
        test ah, 0x40
        jne L_75BCD9
        push 0x1
        lea ecx, [esp + 0x34]
        call ext_006D23F0
        mov edx, dword ptr [eax]
        mov edi, dword ptr [esi + 0xac]
        add edi, 0x4
        push 0xaad9ec
        mov eax, dword ptr [eax + 0x4]
        mov ecx, edi
        mov dword ptr [esp + 0x18], edx
        mov dword ptr [esp + 0x1c], eax
        call ext_007275F0
        mov ecx, dword ptr [esp + 0x18]
        mov edx, dword ptr [esp + 0x14]
        push ecx
        push edx
        mov ecx, edi
        call ext_00727FE0
        mov ecx, edi
        call ext_007283B0
    L_75BCD9:
        push 0x2
        lea ecx, [esp + 0x34]
        call ext_006D23F0
        fld qword ptr [eax]
        fcomp qword ptr [mem_0092A278]
        fnstsw ax
        test ah, 0x40
        jne L_75BD38
        push 0x2
        lea ecx, [esp + 0x34]
        call ext_006D23F0
        mov ecx, dword ptr [eax]
        mov edi, dword ptr [esi + 0xac]
        add edi, 0x4
        mov dword ptr [esp + 0x14], ecx
        mov edx, dword ptr [eax + 0x4]
        push 0xaad9e4
        mov ecx, edi
        mov dword ptr [esp + 0x1c], edx
        call ext_007275F0
        mov eax, dword ptr [esp + 0x18]
        mov ecx, dword ptr [esp + 0x14]
        push eax
        push ecx
        mov ecx, edi
        call ext_00727FE0
        mov ecx, edi
        call ext_007283B0
    L_75BD38:
        lea edx, [esp + 0x50]
        push 0x2
        push edx
        lea ecx, [esp + 0x28]
        call ext_0079E130
        push eax
        lea ecx, [esp + 0x34]
        mov byte ptr [esp + 0x7c], 0x6
        call ext_007873F0
        lea ecx, [esp + 0x50]
        mov byte ptr [esp + 0x78], 0x0
        call ext_006D80A0
        mov al, byte ptr [esp + 0x10]
        test al, al
        jne L_75BE8E
        push 0x0
        lea ecx, [esp + 0x34]
        call ext_006D23F0
        fld qword ptr [eax]
        fcomp qword ptr [mem_0092A270]
        fnstsw ax
        test ah, 0x40
        jne L_75BDD0
        push 0x0
        lea ecx, [esp + 0x34]
        call ext_006D23F0
        mov ecx, dword ptr [eax]
        mov edi, dword ptr [esi + 0xac]
        add edi, 0x4
        mov dword ptr [esp + 0x14], ecx
        mov edx, dword ptr [eax + 0x4]
        push 0xaad9dc
        mov ecx, edi
        mov dword ptr [esp + 0x1c], edx
        call ext_007275F0
        mov eax, dword ptr [esp + 0x18]
        mov ecx, dword ptr [esp + 0x14]
        push eax
        push ecx
        mov ecx, edi
        call ext_00727FE0
        mov ecx, edi
        call ext_007283B0
    L_75BDD0:
        push 0x1
        lea ecx, [esp + 0x34]
        call ext_006D23F0
        fld qword ptr [eax]
        fcomp qword ptr [mem_0092A270]
        fnstsw ax
        test ah, 0x40
        jne L_75BE2F
        push 0x1
        lea ecx, [esp + 0x34]
        call ext_006D23F0
        mov edx, dword ptr [eax]
        mov edi, dword ptr [esi + 0xac]
        add edi, 0x4
        push 0xaad9d4
        mov eax, dword ptr [eax + 0x4]
        mov ecx, edi
        mov dword ptr [esp + 0x18], edx
        mov dword ptr [esp + 0x1c], eax
        call ext_007275F0
        mov ecx, dword ptr [esp + 0x18]
        mov edx, dword ptr [esp + 0x14]
        push ecx
        push edx
        mov ecx, edi
        call ext_00727FE0
        mov ecx, edi
        call ext_007283B0
    L_75BE2F:
        push 0x2
        lea ecx, [esp + 0x34]
        call ext_006D23F0
        fld qword ptr [eax]
        fcomp qword ptr [mem_0092A270]
        fnstsw ax
        test ah, 0x40
        jne L_75BE8E
        push 0x2
        lea ecx, [esp + 0x34]
        call ext_006D23F0
        mov ecx, dword ptr [eax]
        mov edi, dword ptr [esi + 0xac]
        add edi, 0x4
        mov dword ptr [esp + 0x14], ecx
        mov edx, dword ptr [eax + 0x4]
        push 0xaad9cc
        mov ecx, edi
        mov dword ptr [esp + 0x1c], edx
        call ext_007275F0
        mov eax, dword ptr [esp + 0x18]
        mov ecx, dword ptr [esp + 0x14]
        push eax
        push ecx
        mov ecx, edi
        call ext_00727FE0
        mov ecx, edi
        call ext_007283B0
    L_75BE8E:
        lea edx, [esp + 0x50]
        push 0x0
        push edx
        lea ecx, [esp + 0x28]
        call ext_0079E2E0
        push eax
        lea ecx, [esp + 0x34]
        mov byte ptr [esp + 0x7c], 0x7
        call ext_007873F0
        lea ecx, [esp + 0x50]
        mov byte ptr [esp + 0x78], 0x0
        call ext_006D80A0
        test bl, bl
        jne L_75BFE0
        push 0x0
        lea ecx, [esp + 0x34]
        call ext_006D23F0
        fld qword ptr [eax]
        fcomp qword ptr [mem_0092A278]
        fnstsw ax
        test ah, 0x40
        jne L_75BF22
        push 0x0
        lea ecx, [esp + 0x34]
        call ext_006D23F0
        mov ecx, dword ptr [eax]
        mov edi, dword ptr [esi + 0xac]
        add edi, 0x4
        mov dword ptr [esp + 0x14], ecx
        mov edx, dword ptr [eax + 0x4]
        push 0xaad9c4
        mov ecx, edi
        mov dword ptr [esp + 0x1c], edx
        call ext_007275F0
        mov eax, dword ptr [esp + 0x18]
        mov ecx, dword ptr [esp + 0x14]
        push eax
        push ecx
        mov ecx, edi
        call ext_00727FE0
        mov ecx, edi
        call ext_007283B0
    L_75BF22:
        push 0x1
        lea ecx, [esp + 0x34]
        call ext_006D23F0
        fld qword ptr [eax]
        fcomp qword ptr [mem_0092A278]
        fnstsw ax
        test ah, 0x40
        jne L_75BF81
        push 0x1
        lea ecx, [esp + 0x34]
        call ext_006D23F0
        mov edx, dword ptr [eax]
        mov edi, dword ptr [esi + 0xac]
        add edi, 0x4
        push 0xaad9bc
        mov eax, dword ptr [eax + 0x4]
        mov ecx, edi
        mov dword ptr [esp + 0x18], edx
        mov dword ptr [esp + 0x1c], eax
        call ext_007275F0
        mov ecx, dword ptr [esp + 0x18]
        mov edx, dword ptr [esp + 0x14]
        push ecx
        push edx
        mov ecx, edi
        call ext_00727FE0
        mov ecx, edi
        call ext_007283B0
    L_75BF81:
        push 0x2
        lea ecx, [esp + 0x34]
        call ext_006D23F0
        fld qword ptr [eax]
        fcomp qword ptr [mem_0092A278]
        fnstsw ax
        test ah, 0x40
        jne L_75BFE0
        push 0x2
        lea ecx, [esp + 0x34]
        call ext_006D23F0
        mov ecx, dword ptr [eax]
        mov edi, dword ptr [esi + 0xac]
        add edi, 0x4
        mov dword ptr [esp + 0x14], ecx
        mov edx, dword ptr [eax + 0x4]
        push 0xaad9b4
        mov ecx, edi
        mov dword ptr [esp + 0x1c], edx
        call ext_007275F0
        mov eax, dword ptr [esp + 0x18]
        mov ecx, dword ptr [esp + 0x14]
        push eax
        push ecx
        mov ecx, edi
        call ext_00727FE0
        mov ecx, edi
        call ext_007283B0
    L_75BFE0:
        lea edx, [esp + 0x50]
        push 0x1
        push edx
        lea ecx, [esp + 0x28]
        call ext_0079E2E0
        push eax
        lea ecx, [esp + 0x34]
        mov byte ptr [esp + 0x7c], 0x8
        call ext_007873F0
        lea ecx, [esp + 0x50]
        mov byte ptr [esp + 0x78], 0x0
        call ext_006D80A0
        mov bl, byte ptr [esp + 0xc]
        test bl, bl
        jne L_75C136
        push 0x0
        lea ecx, [esp + 0x34]
        call ext_006D23F0
        fld qword ptr [eax]
        fcomp qword ptr [mem_0092A278]
        fnstsw ax
        test ah, 0x40
        jne L_75C078
        push 0x0
        lea ecx, [esp + 0x34]
        call ext_006D23F0
        mov ecx, dword ptr [eax]
        mov edi, dword ptr [esi + 0xac]
        add edi, 0x4
        mov dword ptr [esp + 0x14], ecx
        mov edx, dword ptr [eax + 0x4]
        push 0xaad9ac
        mov ecx, edi
        mov dword ptr [esp + 0x1c], edx
        call ext_007275F0
        mov eax, dword ptr [esp + 0x18]
        mov ecx, dword ptr [esp + 0x14]
        push eax
        push ecx
        mov ecx, edi
        call ext_00727FE0
        mov ecx, edi
        call ext_007283B0
    L_75C078:
        push 0x1
        lea ecx, [esp + 0x34]
        call ext_006D23F0
        fld qword ptr [eax]
        fcomp qword ptr [mem_0092A278]
        fnstsw ax
        test ah, 0x40
        jne L_75C0D7
        push 0x1
        lea ecx, [esp + 0x34]
        call ext_006D23F0
        mov edx, dword ptr [eax]
        mov edi, dword ptr [esi + 0xac]
        add edi, 0x4
        push 0xaad9a4
        mov eax, dword ptr [eax + 0x4]
        mov ecx, edi
        mov dword ptr [esp + 0x18], edx
        mov dword ptr [esp + 0x1c], eax
        call ext_007275F0
        mov ecx, dword ptr [esp + 0x18]
        mov edx, dword ptr [esp + 0x14]
        push ecx
        push edx
        mov ecx, edi
        call ext_00727FE0
        mov ecx, edi
        call ext_007283B0
    L_75C0D7:
        push 0x2
        lea ecx, [esp + 0x34]
        call ext_006D23F0
        fld qword ptr [eax]
        fcomp qword ptr [mem_0092A278]
        fnstsw ax
        test ah, 0x40
        jne L_75C136
        push 0x2
        lea ecx, [esp + 0x34]
        call ext_006D23F0
        mov ecx, dword ptr [eax]
        mov edi, dword ptr [esi + 0xac]
        add edi, 0x4
        mov dword ptr [esp + 0x14], ecx
        mov edx, dword ptr [eax + 0x4]
        push 0xaad99c
        mov ecx, edi
        mov dword ptr [esp + 0x1c], edx
        call ext_007275F0
        mov eax, dword ptr [esp + 0x18]
        mov ecx, dword ptr [esp + 0x14]
        push eax
        push ecx
        mov ecx, edi
        call ext_00727FE0
        mov ecx, edi
        call ext_007283B0
    L_75C136:
        lea edx, [esp + 0x50]
        push 0x2
        push edx
        lea ecx, [esp + 0x28]
        call ext_0079E2E0
        push eax
        lea ecx, [esp + 0x34]
        mov byte ptr [esp + 0x7c], 0x9
        call ext_007873F0
        lea ecx, [esp + 0x50]
        mov byte ptr [esp + 0x78], 0x0
        call ext_006D80A0
        mov al, byte ptr [esp + 0x10]
        test al, al
        jne L_75C28C
        push 0x0
        lea ecx, [esp + 0x34]
        call ext_006D23F0
        fld qword ptr [eax]
        fcomp qword ptr [mem_0092A270]
        fnstsw ax
        test ah, 0x40
        jne L_75C1CE
        push 0x0
        lea ecx, [esp + 0x34]
        call ext_006D23F0
        mov ecx, dword ptr [eax]
        mov edi, dword ptr [esi + 0xac]
        add edi, 0x4
        mov dword ptr [esp + 0x14], ecx
        mov edx, dword ptr [eax + 0x4]
        push 0xaad994
        mov ecx, edi
        mov dword ptr [esp + 0x1c], edx
        call ext_007275F0
        mov eax, dword ptr [esp + 0x18]
        mov ecx, dword ptr [esp + 0x14]
        push eax
        push ecx
        mov ecx, edi
        call ext_00727FE0
        mov ecx, edi
        call ext_007283B0
    L_75C1CE:
        push 0x1
        lea ecx, [esp + 0x34]
        call ext_006D23F0
        fld qword ptr [eax]
        fcomp qword ptr [mem_0092A270]
        fnstsw ax
        test ah, 0x40
        jne L_75C22D
        push 0x1
        lea ecx, [esp + 0x34]
        call ext_006D23F0
        mov edx, dword ptr [eax]
        mov edi, dword ptr [esi + 0xac]
        add edi, 0x4
        push 0xaad98c
        mov eax, dword ptr [eax + 0x4]
        mov ecx, edi
        mov dword ptr [esp + 0x18], edx
        mov dword ptr [esp + 0x1c], eax
        call ext_007275F0
        mov ecx, dword ptr [esp + 0x18]
        mov edx, dword ptr [esp + 0x14]
        push ecx
        push edx
        mov ecx, edi
        call ext_00727FE0
        mov ecx, edi
        call ext_007283B0
    L_75C22D:
        push 0x2
        lea ecx, [esp + 0x34]
        call ext_006D23F0
        fld qword ptr [eax]
        fcomp qword ptr [mem_0092A270]
        fnstsw ax
        test ah, 0x40
        jne L_75C28C
        push 0x2
        lea ecx, [esp + 0x34]
        call ext_006D23F0
        mov ecx, dword ptr [eax]
        mov edi, dword ptr [esi + 0xac]
        add edi, 0x4
        mov dword ptr [esp + 0x14], ecx
        mov edx, dword ptr [eax + 0x4]
        push 0xaad984
        mov ecx, edi
        mov dword ptr [esp + 0x1c], edx
        call ext_007275F0
        mov eax, dword ptr [esp + 0x18]
        mov ecx, dword ptr [esp + 0x14]
        push eax
        push ecx
        mov ecx, edi
        call ext_00727FE0
        mov ecx, edi
        call ext_007283B0
    L_75C28C:
        test bl, bl
        jne L_75C309
        lea ecx, [esp + 0x20]
        call ext_0079E450
        cmp eax, 0x1
        je L_75C2CD
        lea ecx, [esp + 0x20]
        call ext_0079E450
        mov edi, dword ptr [esi + 0xac]
        push 0xaad97c
        add edi, 0x4
        mov ebx, eax
        mov ecx, edi
        call ext_007275F0
        push ebx
        mov ecx, edi
        call ext_00727C80
        mov ecx, edi
        call ext_007283B0
    L_75C2CD:
        lea ecx, [esp + 0x20]
        call ext_0079E480
        test eax, eax
        je L_75C309
        lea ecx, [esp + 0x20]
        call ext_0079E480
        mov edi, dword ptr [esi + 0xac]
        push 0xaad970
        add edi, 0x4
        mov ebx, eax
        mov ecx, edi
        call ext_007275F0
        push ebx
        mov ecx, edi
        call ext_00727C80
        mov ecx, edi
        call ext_007283B0
    L_75C309:
        lea edx, [esp + 0x50]
        lea ecx, [esp + 0x20]
        push edx
        call ext_0079E520
        push eax
        lea ecx, [esp + 0x34]
        mov byte ptr [esp + 0x7c], 0xa
        call ext_007873F0
        lea ecx, [esp + 0x50]
        mov byte ptr [esp + 0x78], 0x0
        call ext_006D80A0
        mov al, byte ptr [esp + 0xc]
        test al, al
        jne L_75C4AD
        push 0x0
        lea ecx, [esp + 0x34]
        call ext_006D23F0
        fld qword ptr [eax]
        fcomp qword ptr [mem_0092A278]
        fnstsw ax
        test ah, 0x40
        jne L_75C39F
        push 0x0
        lea ecx, [esp + 0x34]
        call ext_006D23F0
        mov ecx, dword ptr [eax]
        mov edi, dword ptr [esi + 0xac]
        add edi, 0x4
        mov dword ptr [esp + 0x14], ecx
        mov edx, dword ptr [eax + 0x4]
        push 0xaad968
        mov ecx, edi
        mov dword ptr [esp + 0x1c], edx
        call ext_007275F0
        mov eax, dword ptr [esp + 0x18]
        mov ecx, dword ptr [esp + 0x14]
        push eax
        push ecx
        mov ecx, edi
        call ext_00727FE0
        mov ecx, edi
        call ext_007283B0
    L_75C39F:
        push 0x1
        lea ecx, [esp + 0x34]
        call ext_006D23F0
        fld qword ptr [eax]
        fcomp qword ptr [mem_0092A278]
        fnstsw ax
        test ah, 0x40
        jne L_75C3FE
        push 0x1
        lea ecx, [esp + 0x34]
        call ext_006D23F0
        mov edx, dword ptr [eax]
        mov edi, dword ptr [esi + 0xac]
        add edi, 0x4
        push 0xaad960
        mov eax, dword ptr [eax + 0x4]
        mov ecx, edi
        mov dword ptr [esp + 0x18], edx
        mov dword ptr [esp + 0x1c], eax
        call ext_007275F0
        mov ecx, dword ptr [esp + 0x18]
        mov edx, dword ptr [esp + 0x14]
        push ecx
        push edx
        mov ecx, edi
        call ext_00727FE0
        mov ecx, edi
        call ext_007283B0
    L_75C3FE:
        push 0x2
        lea ecx, [esp + 0x34]
        call ext_006D23F0
        fld qword ptr [eax]
        fcomp qword ptr [mem_0092A278]
        fnstsw ax
        test ah, 0x40
        jne L_75C45D
        push 0x2
        lea ecx, [esp + 0x34]
        call ext_006D23F0
        mov ecx, dword ptr [eax]
        mov edi, dword ptr [esi + 0xac]
        add edi, 0x4
        mov dword ptr [esp + 0x14], ecx
        mov edx, dword ptr [eax + 0x4]
        push 0xaad958
        mov ecx, edi
        mov dword ptr [esp + 0x1c], edx
        call ext_007275F0
        mov eax, dword ptr [esp + 0x18]
        mov ecx, dword ptr [esp + 0x14]
        push eax
        push ecx
        mov ecx, edi
        call ext_00727FE0
        mov ecx, edi
        call ext_007283B0
    L_75C45D:
        lea ecx, [esp + 0x20]
        call ext_0079E5D0
        fcomp qword ptr [mem_0092A270]
        fnstsw ax
        test ah, 0x40
        jne L_75C4AD
        lea ecx, [esp + 0x20]
        call ext_0079E5D0
        mov edi, dword ptr [esi + 0xac]
        push 0xaa8aa4
        fstp qword ptr [esp + 0x18]
        add edi, 0x4
        mov ecx, edi
        call ext_007275F0
        mov edx, dword ptr [esp + 0x18]
        mov eax, dword ptr [esp + 0x14]
        push edx
        push eax
        mov ecx, edi
        call ext_00727FE0
        mov ecx, edi
        call ext_007283B0
    L_75C4AD:
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_007284D0
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_007283B0
        lea ecx, [esp + 0x30]
        mov dword ptr [esp + 0x78], 0xffffffff
        call ext_006D80A0
        mov ecx, dword ptr [esp + 0x70]
        pop edi
        pop esi
        mov al, 0x1
        mov dword ptr fs:[0x0], ecx
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0x4
    }
}

extern "C" void ext_00757180();
extern "C" void ext_007573E0();
extern "C" void ext_00757520();

// [0x00757150] sub_00757150 (48 bytes)
extern "C" __declspec(naked) void __fastcall fn_00757150(void* self, int edx_unused, int a1) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        mov esi, ecx
        push edi
        call ext_007573E0
        push edi
        mov ecx, esi
        call ext_00757180
        push edi
        mov ecx, esi
        call ext_00757520
        pop edi
        pop esi
        ret 4
    }
}

// [0x0075B310] sub_0075B310 (64 bytes)
extern "C" void ext_0075B350();
extern "C" void ext_0075B3A0();
extern "C" void ext_0075D230();
extern "C" void ext_0075D2E0();
extern "C" void ext_00777FC0();

extern "C" __declspec(naked) bool __fastcall fn_0075B310(void* self) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        mov esi, ecx
        push edi
        call ext_0075B350
        push edi
        mov ecx, esi
        call ext_0075B3A0
        push edi
        mov ecx, esi
        call ext_0075D230
        push edi
        mov ecx, esi
        call ext_0075D2E0
        push edi
        mov ecx, esi
        call ext_00777FC0
        pop edi
        mov al, 0x1
        pop esi
        ret 0x4
    }
}

// [0x0075B350] sub_0075B350 (80 bytes)
extern "C" void ext_006BADB0();
extern "C" void ext_007275F0();
extern "C" void ext_007279A0();
extern "C" void ext_00728410();
extern "C" int mem_00AAD264;

extern "C" __declspec(naked) bool __fastcall fn_0075B350(void* self, int, void* arg0) {
    __asm {
        push esi
        mov esi, ecx
        push offset mem_00AAD264
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_007275F0
        mov ecx, dword ptr [esp + 0x8]
        call ext_006BADB0
        mov ecx, dword ptr [esi + 0xac]
        push eax
        add ecx, 0x4
        call ext_007279A0
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_00728410
        mov al, 0x1
        pop esi
        ret 0x4
    }
}

// [0x00754FA0] sub_00754FA0 (96 bytes)
extern "C" void ext_006B9D70();
extern "C" void ext_007641C0();

extern "C" __declspec(naked) void __fastcall fn_00754FA0(void* self) {
    __asm {
        push -1
        push 0x8bdd3b
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 4], esi
        mov dword ptr [esi], 0x996bf0
        lea ecx, [esi + 0x60]
        mov dword ptr [esp + 0x10], 0
        call ext_006B9D70
        lea ecx, [esi + 8]
        mov dword ptr [esp + 0x10], -1
        call ext_007641C0
        mov ecx, dword ptr [esp + 8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00757D60] sub_00757D60 (96 bytes)
extern "C" __declspec(naked) void __fastcall fn_00757D60(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8c1b08
        push eax
        mov dword ptr fs:[0x0], esp
        push esi
        mov esi, ecx
        mov eax, dword ptr [esp + 0x14]
        lea ecx, [esp + 0x18]
        push ecx
        lea ecx, [esi + 0x4]
        mov dword ptr [esp + 0x10], 0x0
        mov dword ptr [esi], eax
        call ext_006B9D20
        lea ecx, [esp + 0x18]
        mov dword ptr [esp + 0xc], 0xffffffff
        call ext_006B9D70
        mov ecx, dword ptr [esp + 0x4]
        mov eax, esi
        mov dword ptr fs:[0x0], ecx
        pop esi
        add esp, 0xc
        ret 0x50
    }
}

// [0x0075E200] sub_0075E200 (96 bytes)
extern "C" void ext_007275F0();
extern "C" void ext_007279A0();
extern "C" void ext_007283B0();

extern "C" __declspec(naked) void __fastcall fn_0075E200(void* self, int edx_unused, int a1) {
    __asm {
        push esi
        push edi
        mov edi, ecx
        push 0xaa8e24
        mov esi, dword ptr [edi + 0xac]
        add esi, 0x4
        mov ecx, esi
        call ext_007275F0
        push 0xaad0d0
        mov ecx, esi
        call ext_007279A0
        mov ecx, esi
        call ext_007283B0
        mov esi, dword ptr [edi + 0xac]
        push 0xaaeb08
        add esi, 0x4
        mov ecx, esi
        call ext_007275F0
        push 0xaac354
        mov ecx, esi
        call ext_007279A0
        mov ecx, esi
        call ext_007283B0
        pop edi
        mov al, 0x1
        pop esi
        ret 0x4
    }
}

// [0x0075B3A0] sub_0075B3A0 (96 bytes)
extern "C" void ext_0075B400();
extern "C" void ext_0075B430();
extern "C" void ext_0075B4B0();
extern "C" void ext_0075C4F0();
extern "C" void ext_0075C840();
extern "C" void ext_0075CFE0();
extern "C" void ext_0075D180();
extern "C" void ext_00778060();
extern "C" void ext_00778160();

extern "C" __declspec(naked) void __fastcall fn_0075B3A0(void* self, int edx_unused, void* a1) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        mov esi, ecx
        push edi
        call ext_0075B400
        push edi
        mov ecx, esi
        call ext_0075B430
        push edi
        mov ecx, esi
        call ext_00778060
        push edi
        mov ecx, esi
        call ext_00778160
        push edi
        mov ecx, esi
        call ext_0075B4B0
        push edi
        mov ecx, esi
        call ext_0075C4F0
        push edi
        mov ecx, esi
        call ext_0075C840
        push edi
        mov ecx, esi
        call ext_0075CFE0
        push edi
        mov ecx, esi
        call ext_0075D180
        pop edi
        mov al, 1
        pop esi
        ret 4
    }
}

// [0x00757EC0] sub_00757EC0 (112 bytes)
extern "C" void ext_00715550();
extern "C" void ext_007275F0();
extern "C" void ext_007283B0();
extern "C" void ext_00728410();
extern "C" void ext_007284D0();
extern "C" void ext_00757F30();

extern "C" __declspec(naked) void __fastcall fn_00757EC0(void* self, int edx_unused, void* a1) {
    __asm {
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 0Ch]
        push esi
        mov esi, ecx
        push edi
        mov ecx, ebp
        call ext_00715550
        mov ebx, eax
        xor edi, edi
        test ebx, ebx
        jle done
    loop_top:
        mov ecx, dword ptr [esi + 0ACh]
        push 0AAD244h
        add ecx, 4
        call ext_007275F0
        mov ecx, dword ptr [esi + 0ACh]
        add ecx, 4
        call ext_00728410
        push edi
        push ebp
        mov ecx, esi
        call ext_00757F30
        mov ecx, dword ptr [esi + 0ACh]
        add ecx, 4
        call ext_007284D0
        mov ecx, dword ptr [esi + 0ACh]
        add ecx, 4
        call ext_007283B0
        inc edi
        cmp edi, ebx
        jl loop_top
    done:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
    }
}

// [0x00757520] sub_00757520 (112 bytes)
extern "C" void ext_006BC7D0();
extern "C" void ext_006E8810();
extern "C" void ext_007275F0();
extern "C" void ext_007283B0();
extern "C" void ext_00728410();
extern "C" void ext_007284D0();
extern "C" void ext_00757590();

extern "C" __declspec(naked) void __fastcall fn_00757520(void* self, int edx_unused, int a1) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        mov esi, ecx
        mov ecx, edi
        call ext_006BC7D0
        mov ecx, eax
        call ext_006E8810
        test eax, eax
        jle short L_fn_00757520_end
        mov ecx, dword ptr [esi + 0xac]
        push 0xaad494
        add ecx, 4
        call ext_007275F0
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 4
        call ext_00728410
        push edi
        mov ecx, esi
        call ext_00757590
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 4
        call ext_007284D0
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 4
        call ext_007283B0
L_fn_00757520_end:
        pop edi
        pop esi
        ret 4
    }
}

// [0x0075B430] sub_0075B430 (128 bytes)
extern "C" void ext_006EF8D0();
extern "C" void ext_007275F0();
extern "C" void ext_00727C80();
extern "C" void ext_007283B0();
extern "C" void ext_006C2F40();

extern "C" __declspec(naked) unsigned char __fastcall fn_0075B430(void* self, int edx_unused, void* a1) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0x8]
        push esi
        push edi
        mov edi, ecx
        mov ecx, ebx
        call ext_006EF8D0
        mov esi, dword ptr [edi + 0xac]
        push 0xaad91c
        add esi, 0x4
        mov byte ptr [esp + 0x14], al
        mov ecx, esi
        call ext_007275F0
        mov eax, dword ptr [esp + 0x10]
        mov ecx, esi
        and eax, 0xff
        push eax
        call ext_00727C80
        mov ecx, esi
        call ext_007283B0
        mov ecx, ebx
        call ext_006C2F40
        mov esi, dword ptr [edi + 0xac]
        push 0xaad910
        add esi, 0x4
        mov ebx, eax
        mov ecx, esi
        call ext_007275F0
        push ebx
        mov ecx, esi
        call ext_00727C80
        mov ecx, esi
        call ext_007283B0
        pop edi
        pop esi
        mov al, 0x1
        pop ebx
        ret 0x4
    }
}

// [0x00750940] sub_00750940 (160 bytes)
extern "C" void ext_007509E0();

extern "C" __declspec(naked) void __stdcall fn_00750940(void* a0, void* a1) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -0x8
        sub esp, 0x38
        mov edx, dword ptr [ebp + 0xc]
        __asm _emit 0x8d __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x00
        push 0x1
        push eax
        mov eax, dword ptr [ebp + 0x8]
        push edx
        push eax
        mov dword ptr [esp + 0x10], 0x0
        mov dword ptr [esp + 0x14], 0x0
        mov dword ptr [esp + 0x18], 0x0
        mov dword ptr [esp + 0x1c], 0x0
        mov dword ptr [esp + 0x20], 0x0
        mov dword ptr [esp + 0x24], 0x0
        mov dword ptr [esp + 0x28], 0x0
        mov dword ptr [esp + 0x2c], 0x3ff00000
        mov dword ptr [esp + 0x30], 0x0
        mov dword ptr [esp + 0x34], 0x3ff00000
        mov dword ptr [esp + 0x38], 0x0
        mov dword ptr [esp + 0x3c], 0x3ff00000
        mov dword ptr [esp + 0x40], 0x0
        mov dword ptr [esp + 0x44], 0x0
        call ext_007509E0
        mov esp, ebp
        pop ebp
        ret 0x8
        __asm _emit 0x90 __asm _emit 0x90 __asm _emit 0x90 __asm _emit 0x90
        __asm _emit 0x90 __asm _emit 0x90 __asm _emit 0x90 __asm _emit 0x90
        __asm _emit 0x90 __asm _emit 0x90 __asm _emit 0x90 __asm _emit 0x90
        __asm _emit 0x90
    }
}

// [0x007552D0] sub_007552D0 (46 bytes)
extern "C" int mem_00925284;
extern "C" double mem_00B60480;
extern "C" double mem_00B60488;
extern "C" double mem_00B60490;
extern "C" double mem_00B60498;

extern "C" void __cdecl fn_007552D0() {
    mem_00B60480 = -*(double*)mem_00925284;
    mem_00B60488 = -*(double*)mem_00925284;
    mem_00B60490 = -*(double*)mem_00925284;
    mem_00B60498 = -*(double*)mem_00925284;
}

// [0x00754F20] sub_00754F20 (93 bytes)
extern "C" void ext_006B9D10();
extern "C" void ext_006E73B0();

extern "C" __declspec(naked) void __fastcall fn_00754F20(void* self, int edx_unused, int a1) {
    __asm {
        push -1
        push 008bdd3bh
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        mov eax, dword ptr [esp + 14h]
        push esi
        mov esi, ecx
        push 6
        push 00aae878h
        mov dword ptr [esp + 0ch], esi
        lea ecx, [esi + 8]
        mov dword ptr [esi + 4], eax
        call ext_006E73B0
        lea ecx, [esi + 60h]
        mov dword ptr [esp + 10h], 0
        call ext_006B9D10
        mov ecx, dword ptr [esp + 8]
        mov dword ptr [esi], 00996bf0h
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 10h
        ret 4
    }
}

// [0x007555B0] sub_007555B0 (121 bytes)
extern "C" void ext_00754FA0();
extern "C" void ext_00774E10();
extern "C" void ext_00784640();
extern "C" __declspec(naked) void __fastcall fn_007555B0(void* self) {
    __asm {
        push -1
        push 0x8c1164
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov [esp+4], esi
        mov dword ptr [esi], 0x996c10
        mov eax, [esi+0xac]
        mov dword ptr [esp+0x10], 2
        test eax, eax
        je l1
        call ext_00774E10
    l1:
        lea ecx, [esi+0xd8]
        mov byte ptr [esp+0x10], 1
        call ext_00784640
        lea ecx, [esi+0xc4]
        mov byte ptr [esp+0x10], 0
        call ext_00784640
        mov ecx, esi
        mov dword ptr [esp+0x10], 0xffffffff
        call ext_00754FA0
        mov ecx, [esp+8]
        pop esi
        mov fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00755440] sub_00755440 (166 bytes)
// [VA] 0x00755440
extern "C" int mem_00925284;
extern "C" double mem_00B60520;
extern "C" double mem_00B60528;
extern "C" double mem_00B60530;
extern "C" double mem_00B60538;
extern "C" double mem_00B60540;
extern "C" double mem_00B60548;
extern "C" double mem_00B60550;
extern "C" double mem_00B60558;
extern "C" double mem_00B60560;
extern "C" double mem_00B60568;
extern "C" double mem_00B60570;
extern "C" double mem_00B60578;
extern "C" double mem_00B60580;
extern "C" double mem_00B60588;
extern "C" double mem_00B60590;
extern "C" double mem_00B60598;
extern "C" void __cdecl fn_00755440() {
    double* h = (double*)mem_00925284;
    mem_00B60520 = -*h;
    mem_00B60528 = -*h;
    mem_00B60530 = -*h;
    mem_00B60538 = -*h;
    mem_00B60540 = -*h;
    mem_00B60548 = -*h;
    mem_00B60550 = -*h;
    mem_00B60558 = -*h;
    mem_00B60560 = -*h;
    mem_00B60568 = -*h;
    mem_00B60570 = -*h;
    mem_00B60578 = -*h;
    mem_00B60580 = -*h;
    mem_00B60588 = -*h;
    mem_00B60590 = -*h;
    mem_00B60598 = -*h;
}

// [0x0075D180] sub_0075D180 (176 bytes)
extern "C" void ext_006C7230();
extern "C" void ext_006D2130();
extern "C" void ext_006D2160();
extern "C" void ext_0079C4F0();
extern "C" void ext_0079D6D0();

extern "C" __declspec(naked) void __fastcall fn_0075D180(void* self) {
    __asm {
        mov eax, fs:[0]
        push -1
        push 0x8be5c8
        push eax
        mov fs:[0], esp
        sub esp, 18h
        push edi
        mov edi, ecx
        mov ecx, dword ptr [edi + 0ach]
        call ext_0079D6D0
        test al, al
        jne short L_75D215
        push esi
        push 4
        push 10h
        lea ecx, [esp + 10h]
        call ext_006D2130
        lea eax, [esp + 18h]
        mov dword ptr [esp + 1ch], eax
        mov esi, dword ptr [esp + 30h]
        mov dword ptr [esp + 28h], 0
        mov ecx, esi
        call ext_006C7230
        mov edx, dword ptr [esi]
        lea eax, [esp + 8]
        push eax
        mov ecx, esi
        call dword ptr [edx + 10h]
        lea ecx, [esp + 8]
        push ecx
        mov ecx, dword ptr [edi + 0ach]
        call ext_0079C4F0
        lea ecx, [esp + 8]
        mov dword ptr [esp + 28h], -1
        call ext_006D2160
        pop esi
        mov al, 1
        pop edi
        mov ecx, dword ptr [esp + 18h]
        mov fs:[0], ecx
        add esp, 24h
        ret 4
    L_75D215:
        mov ecx, dword ptr [esp + 1ch]
        mov al, 1
        pop edi
        mov fs:[0], ecx
        add esp, 24h
        ret 4
    }
}

// [0x0075D230] sub_0075D230 (176 bytes)
extern "C" void ext_006C9360();
extern "C" void ext_006DC460();
extern "C" void ext_006E57B0();
extern "C" void ext_0079D6D0();
extern "C" __declspec(naked) void __fastcall fn_0075D230(void* self) {
    __asm {
        push ecx
        push ebx
        mov ebx, dword ptr [esp + 0xc]
        mov dword ptr [esp + 0x4], ecx
        push edi
        mov ecx, ebx
        xor edi, edi
        call ext_006DC460
        mov ecx, eax
        call ext_006C9360
        mov edx, dword ptr [eax]
        mov ecx, eax
        call dword ptr [edx + 0x14]
        test eax, eax
        jle L_neg
        push ebp
        push esi
    L_loop:
        mov eax, dword ptr [esp + 0x10]
        mov eax, dword ptr [eax + 0xac]
        test eax, eax
        je L_null
        lea ebp, [eax + 0x4]
        jmp L_cont
    L_null:
        xor ebp, ebp
    L_cont:
        mov ecx, ebx
        call ext_006DC460
        mov ecx, eax
        call ext_006C9360
        mov ecx, dword ptr [esp + 0x10]
        mov esi, eax
        mov ecx, dword ptr [ecx + 0xac]
        call ext_0079D6D0
        mov edx, dword ptr [esi]
        push eax
        push 1
        push 0xaa9470
        push 1
        push 1
        push 1
        push ebp
        push edi
        mov ecx, esi
        call dword ptr [edx + 0x18]
        mov ecx, eax
        call ext_006E57B0
        mov ecx, ebx
        inc edi
        call ext_006DC460
        mov ecx, eax
        call ext_006C9360
        mov edx, dword ptr [eax]
        mov ecx, eax
        call dword ptr [edx + 0x14]
        cmp edi, eax
        jl L_loop
        pop esi
        pop ebp
        pop edi
        mov al, 1
        pop ebx
        pop ecx
        ret 4
    L_neg:
        pop edi
        mov al, 1
        pop ebx
        pop ecx
        ret 4
    }
}

// [0x00759960] sub_00759960 (208 bytes)
extern "C" void ext_006B9D80();
extern "C" void ext_006BADB0();
extern "C" void ext_006F9080();
extern "C" void ext_006F90D0();
extern "C" void ext_007025B0();
extern "C" void ext_00724BF0();
extern "C" void ext_007275F0();
extern "C" void ext_007283B0();
extern "C" void ext_00728410();
extern "C" void ext_007284D0();
extern "C" __declspec(naked) void __fastcall fn_00759960(void* self, int edx_unused, void* a1, void* a2, int a3) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp+10h]
        lea eax, [esp+10h]
        mov esi, ecx
        push 1
        mov ecx, dword ptr [esp+10h]
        push eax
        push edi
        call ext_006F9080
        test al, al
        je L_end_00759960
        mov ecx, dword ptr [esp+10h]
        call ext_007025B0
        cmp eax, dword ptr [esp+14h]
        jne L_end_00759960
        mov ecx, dword ptr [esi+0ach]
        push 0aad6ach
        add ecx, 4
        call ext_007275F0
        mov ecx, dword ptr [esi+0ach]
        add ecx, 4
        call ext_00728410
        push edi
        call ext_006F90D0
        sub esp, 48h
        mov ecx, esp
        mov dword ptr [esp+58h], esp
        push eax
        call ext_006B9D80
        mov ecx, dword ptr [esi+0ach]
        push 0aad720h
        add ecx, 4
        call ext_00724BF0
        mov ecx, dword ptr [esp+10h]
        call ext_006BADB0
        sub esp, 4ch
        mov ecx, esp
        mov dword ptr [esp+58h], esp
        push eax
        call ext_006B9D80
        mov ecx, dword ptr [esi+0ach]
        push 0aad728h
        add ecx, 4
        call ext_00724BF0
        mov ecx, dword ptr [esi+0ach]
        add ecx, 4
        call ext_007284D0
        mov ecx, dword ptr [esi+0ach]
        add ecx, 4
        call ext_007283B0
    L_end_00759960:
        pop edi
        pop esi
        ret 0ch
    }
}

// [0x0075F4A0] sub_0075F4A0 (224 bytes)
extern "C" void ext_006E9AE0();
extern "C" void ext_007275F0();
extern "C" void ext_007279A0();
extern "C" void ext_00727C80();
extern "C" void ext_007283B0();
extern "C" __declspec(naked) bool __fastcall fn_0075F4A0(void* self) {
    __asm {
        push ebx
        push esi
        mov esi, ecx
        push edi
        push 0xaaeb1c
        mov edi, dword ptr [esi + 0xac]
        add edi, 4
        mov ecx, edi
        call ext_007275F0
        push 0xaaeb14
        mov ecx, edi
        call ext_007279A0
        mov ecx, edi
        call ext_007283B0
        mov edi, dword ptr [esi + 0xac]
        push 0xaacd0c
        add edi, 4
        mov ecx, edi
        call ext_007275F0
        push 0x64
        mov ecx, edi
        call ext_00727C80
        mov ecx, edi
        call ext_007283B0
        mov edi, dword ptr [esi + 0xac]
        push 0xaa8e74
        add edi, 4
        mov ecx, edi
        call ext_007275F0
        push 0xaa873c
        mov ecx, edi
        call ext_007279A0
        mov ecx, edi
        call ext_007283B0
        mov ecx, dword ptr [esp + 0x10]
        call ext_006E9AE0
        mov edi, dword ptr [esi + 0xac]
        push 0xaad450
        add edi, 4
        mov ebx, eax
        mov ecx, edi
        call ext_007275F0
        push ebx
        mov ecx, edi
        call ext_00727C80
        mov ecx, edi
        call ext_007283B0
        mov esi, dword ptr [esi + 0xac]
        push 0xaacd68
        add esi, 4
        mov ecx, esi
        call ext_007275F0
        push 0x64
        mov ecx, esi
        call ext_00727C80
        mov ecx, esi
        call ext_007283B0
        pop edi
        pop esi
        mov al, 1
        pop ebx
        ret 4
    }
}

// [0x00759C60] sub_00759C60 (224 bytes)
extern "C" void ext_006BC730();
extern "C" void ext_006BC740();
extern "C" void ext_007275F0();
extern "C" void ext_006BADB0();
extern "C" void ext_006B9D80();
extern "C" void ext_0072FD70();
extern "C" void ext_00728410();
extern "C" void ext_00724BF0();
extern "C" void ext_00759D40();
extern "C" void ext_007284D0();
extern "C" void ext_007283B0();

extern "C" __declspec(naked) void __fastcall fn_00759C60(void* self) {
    __asm {
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 0x14]
        push edi
        call ext_006BC730
        mov ebx, eax
        xor ebp, ebp
        test ebx, ebx
        jle done_loop
loop_top:
        mov ecx, dword ptr [esp + 0x18]
        push ebp
        call ext_006BC740
        mov ecx, dword ptr [esi + 0xac]
        push 0xaad3fc
        add ecx, 4
        mov edi, eax
        call ext_007275F0
        mov ecx, edi
        call ext_006BADB0
        sub esp, 0x4c
        mov ecx, esp
        mov dword ptr [esp + 0x5c], esp
        push eax
        call ext_006B9D80
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 4
        call ext_0072FD70
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 4
        call ext_00728410
        mov al, byte ptr [edi + 0x14c]
        cmp al, 0x62
        mov eax, 0xaad100
        je skip_alt
        mov eax, 0xaad0f4
skip_alt:
        sub esp, 0x4c
        mov ecx, esp
        mov dword ptr [esp + 0x5c], esp
        push eax
        call ext_006B9D80
        mov ecx, dword ptr [esi + 0xac]
        push 0xaa8e24
        add ecx, 4
        call ext_00724BF0
        push edi
        mov ecx, esi
        call ext_00759D40
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 4
        call ext_007284D0
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 4
        call ext_007283B0
        inc ebp
        cmp ebp, ebx
        jl loop_top
done_loop:
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
    }
}

// [0x0075D650] sub_0075D650 (240 bytes)
extern "C" void ext_006FDF30();
extern "C" void ext_007275F0();
extern "C" void ext_00727C80();
extern "C" void ext_007283B0();
extern "C" void ext_00728410();
extern "C" void ext_007284D0();
extern "C" void ext_0075D740();

extern "C" __declspec(naked) void __fastcall fn_0075D650(void* self, int edx_unused, int a1) {
    __asm {
        sub     esp, 8
        push    ebx
        mov     ebx, dword ptr [esp + 0x10]
        push    ebp
        push    esi
        push    edi
        mov     edi, ecx
        xor     ebp, ebp
        push    3
        mov     ecx, ebx
        mov     dword ptr [esp + 0x14], ebp
        call    ext_006FDF30
        mov     esi, eax
        mov     eax, dword ptr [ebx]
        mov     ecx, ebx
        mov     dword ptr [esp + 0x14], esi
        mov     byte ptr [esp + 0x1c], 1
        call    dword ptr [eax]
        cmp     eax, 4
        jne     skip_ebp
        mov     ebp, 1
skip_ebp:
        cmp     ebp, esi
        jge     done_loop
loop_top:
        mov     ecx, dword ptr [edi + 0xac]
        push    0xaadcbc
        add     ecx, 4
        call    ext_007275F0
        mov     ecx, dword ptr [edi + 0xac]
        add     ecx, 4
        call    ext_00728410
        mov     esi, dword ptr [edi + 0xac]
        push    0xaaeafc
        add     esi, 4
        mov     ecx, esi
        call    ext_007275F0
        mov     ecx, dword ptr [esp + 0x10]
        push    ecx
        mov     ecx, esi
        call    ext_00727C80
        mov     ecx, esi
        call    ext_007283B0
        push    ebp
        push    ebx
        mov     ecx, edi
        call    ext_0075D740
        test    al, al
        je      clear_flag
        mov     al, byte ptr [esp + 0x1c]
        mov     byte ptr [esp + 0x1c], 1
        test    al, al
        jne     after_flag
clear_flag:
        mov     byte ptr [esp + 0x1c], 0
after_flag:
        mov     ecx, dword ptr [edi + 0xac]
        add     ecx, 4
        call    ext_007284D0
        mov     ecx, dword ptr [edi + 0xac]
        add     ecx, 4
        call    ext_007283B0
        mov     ecx, dword ptr [esp + 0x10]
        mov     eax, dword ptr [esp + 0x14]
        inc     ebp
        inc     ecx
        cmp     ebp, eax
        mov     dword ptr [esp + 0x10], ecx
        jl      loop_top
done_loop:
        mov     al, byte ptr [esp + 0x1c]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 8
        ret     4
    }
}

// [0x007596B0] sub_007596B0 (240 bytes)
extern "C" void ext_006B9950();
extern "C" void ext_006B9D70();
extern "C" void ext_006BADB0();
extern "C" void ext_006E7460();
extern "C" void ext_006F8A70();
extern "C" void ext_006F8EE0();
extern "C" void ext_007025B0();
extern "C" void ext_007275F0();
extern "C" void ext_007279A0();
extern "C" void ext_007283B0();

extern "C" __declspec(naked) void __fastcall fn_007596B0(void* self) {
    __asm {
        push -1
        push 0x008bfb68
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x50
        push ebx
        push esi
        push edi
        mov edi, ecx
        lea ecx, [esp + 0xc]
        call ext_006F8A70
        mov ecx, dword ptr [esp + 0x70]
        lea eax, [esp + 0xc]
        push eax
        push ecx
        mov ecx, dword ptr [esp + 0x74]
        mov dword ptr [esp + 0x6c], 0
        call ext_006F8EE0
        test al, al
        je L_end
        mov ecx, dword ptr [esp + 0xc]
        test ecx, ecx
        je L_skip1
        call ext_007025B0
        cmp eax, dword ptr [esp + 0x74]
        jne L_skip1
        mov ecx, dword ptr [esp + 0xc]
        call ext_006BADB0
        mov esi, dword ptr [edi + 0xac]
        push 0x00aad728
        add esi, 4
        mov ebx, eax
        mov ecx, esi
        call ext_007275F0
        push ebx
        mov ecx, esi
        call ext_007279A0
        mov ecx, esi
        call ext_007283B0
    L_skip1:
        lea ecx, [esp + 0x10]
        call ext_006B9950
        test al, al
        jne L_end
        lea ecx, [esp + 0x10]
        call ext_006E7460
        mov esi, dword ptr [edi + 0xac]
        push 0x00aad720
        add esi, 4
        mov ebx, eax
        mov ecx, esi
        call ext_007275F0
        push ebx
        mov ecx, esi
        call ext_007279A0
        mov ecx, esi
        call ext_007283B0
    L_end:
        lea ecx, [esp + 0x10]
        mov dword ptr [esp + 0x64], -1
        call ext_006B9D70
        mov ecx, dword ptr [esp + 0x5c]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x5c
        ret 0xc
    }
}

// [0x00757DC0] sub_00757DC0 (256 bytes)
extern "C" void ext_006E7460();
extern "C" void ext_007275F0();
extern "C" void ext_007279A0();
extern "C" void ext_00727C80();
extern "C" void ext_007283B0();
extern "C" __declspec(naked) void __fastcall fn_00757DC0(void* self, int edx_unused, int a1) {
    __asm {
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        push 0xaacd0c
        mov edi, dword ptr [esi + 0xac]
        add edi, 0x4
        mov ecx, edi
        call ext_007275F0
        push 0xfa
        mov ecx, edi
        call ext_00727C80
        mov ecx, edi
        call ext_007283B0
        mov ebx, dword ptr [esp + 0x14]
        mov ecx, ebx
        call ext_006E7460
        mov edi, dword ptr [esi + 0xac]
        push 0xaad558
        add edi, 0x4
        mov ebp, eax
        mov ecx, edi
        call ext_007275F0
        push ebp
        mov ecx, edi
        call ext_007279A0
        mov ecx, edi
        call ext_007283B0
        lea ecx, [ebx + 0x4c]
        call ext_006E7460
        mov edi, dword ptr [esi + 0xac]
        push 0xaad54c
        add edi, 0x4
        mov ebp, eax
        mov ecx, edi
        call ext_007275F0
        push ebp
        mov ecx, edi
        call ext_007279A0
        mov ecx, edi
        call ext_007283B0
        mov ecx, dword ptr [esi + 0xac]
        push 0xaad53c
        add ecx, 0x4
        call ext_007275F0
        mov ecx, dword ptr [esi + 0xac]
        xor eax, eax
        mov al, byte ptr [ebx + 0x98]
        add ecx, 0x4
        push eax
        call ext_00727C80
        xor ecx, ecx
        mov cl, byte ptr [ebx + 0x99]
        push ecx
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_00727C80
        mov ecx, dword ptr [esi + 0xac]
        xor edx, edx
        mov dl, byte ptr [ebx + 0x9a]
        add ecx, 0x4
        push edx
        call ext_00727C80
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_007283B0
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x4
    }
}

// [0x00754760] sub_00754760 (264 bytes)
extern "C" void ext_006A5C62();
extern "C" void ext_006D2130();
extern "C" void ext_006D2170();
extern "C" void ext_00782D90();

extern "C" __declspec(naked) bool __fastcall fn_00754760(void* self, int edx_unused, void* a1, void* a2, void* a3) {
    __asm {
        push -1
        push 08bf9f6h
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        sub esp, 8
        push esi
        push edi
        push 18h
        call ext_006A5C62
        mov esi, eax
        add esp, 4
        mov [esp+0ch], esi
        test esi, esi
        mov dword ptr [esp+18h], 0
        je L_alloc2
        push 20h
        push 10h
        mov ecx, esi
        call ext_006D2130
        lea eax, [esi+10h]
        mov edi, esi
        mov [esi+14h], eax
        jmp L_after1
L_alloc2:
        xor edi, edi
L_after1:
        push 18h
        mov dword ptr [esp+1ch], 0ffffffffh
        call ext_006A5C62
        mov esi, eax
        add esp, 4
        mov [esp+0ch], esi
        test esi, esi
        mov dword ptr [esp+18h], 1
        je L_null2
        push 4
        push 10h
        mov ecx, esi
        call ext_006D2130
        lea ecx, [esi+10h]
        mov [esi+14h], ecx
        jmp L_after2
L_null2:
        xor esi, esi
L_after2:
        test edi, edi
        mov dword ptr [esp+18h], 0ffffffffh
        je L_fail
        test esi, esi
        je L_fail
        mov eax, [esi]
        lea edx, [esp+8]
        push edx
        push eax
        mov ecx, esi
        mov dword ptr [esp+10h], 0
        call ext_006D2170
        mov edx, [esi]
        lea ecx, [esp+0ch]
        push ecx
        push edx
        mov ecx, esi
        mov dword ptr [esp+14h], 0
        call ext_006D2170
        mov ecx, [esp+24h]
        push edi
        mov edi, [esp+24h]
        push edi
        call ext_00782D90
        mov ecx, [esp+28h]
        push esi
        push edi
        call ext_00782D90
        pop edi
        mov al, 1
        pop esi
        mov ecx, [esp+8]
        mov fs:[0], ecx
        add esp, 14h
        ret 0ch
L_fail:
        mov ecx, [esp+10h]
        pop edi
        xor al, al
        pop esi
        mov fs:[0], ecx
        add esp, 14h
        ret 0ch
    }
}

// [0x00759B50] sub_00759B50 (272 bytes)
extern "C" void ext_006D3DB0();
extern "C" void ext_006D5110();
extern "C" void ext_006D6EF0();
extern "C" void ext_0072CBF0();
extern "C" void ext_0072CD20();
extern "C" void ext_0072CEF0();

extern "C" __declspec(naked) void __fastcall fn_00759B50(void* self) {
    __asm {
        push -1
        push 008bfb8bh
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 1d0h
        push esi
        mov esi, ecx
        push edi
        mov ecx, dword ptr [esi + 4]
        call ext_006D3DB0
        lea ecx, [esp + 8]
        mov edi, eax
        call ext_0072CBF0
        push 0
        push 0
        lea ecx, [esp + 10h]
        mov dword ptr [esp + 1e8h], 0
        call ext_0072CEF0
        push 0
        push 1
        lea ecx, [esp + 10h]
        call ext_0072CEF0
        push 0
        push 2
        lea ecx, [esp + 10h]
        call ext_0072CEF0
        push 0
        push 5
        lea ecx, [esp + 10h]
        call ext_0072CEF0
        push 0
        push 6
        lea ecx, [esp + 10h]
        call ext_0072CEF0
        push 0
        push 0ah
        lea ecx, [esp + 10h]
        call ext_0072CEF0
        push 0
        push 7
        lea ecx, [esp + 10h]
        call ext_0072CEF0
        push 0
        push 9
        lea ecx, [esp + 10h]
        call ext_0072CEF0
        push 0
        push 0ch
        lea ecx, [esp + 10h]
        call ext_0072CEF0
        mov eax, dword ptr [esi + 0ach]
        mov edx, dword ptr [esp + 1e8h]
        push eax
        lea ecx, [esp + 0ch]
        mov eax, dword ptr [edx + 0b8h]
        push ecx
        push eax
        mov ecx, edi
        call ext_006D6EF0
        mov ecx, dword ptr [esi + 4]
        push edi
        call ext_006D5110
        lea ecx, [esp + 8]
        mov dword ptr [esp + 1e0h], 0ffffffffh
        call ext_0072CD20
        mov ecx, dword ptr [esp + 1d8h]
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 1dch
        ret 4
    }
}

// [0x0075FD20] sub_0075FD20 (272 bytes)
extern "C" void ext_006D81F0();
extern "C" void ext_006FDF90();
extern "C" void ext_00715550();
extern "C" void ext_007275F0();
extern "C" void ext_007279A0();
extern "C" void ext_00727C80();
extern "C" void ext_007283B0();
extern "C" __declspec(naked) void __fastcall fn_0075FD20(void* self) {
    __asm {
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 0xc]
        push esi
        push edi
        mov edi, ecx
        push 3
        push 0
        mov ecx, ebp
        call ext_006FDF90
        test eax, eax
        je L_0075FDB5
        push 3
        push 0
        mov ecx, ebp
        call ext_006FDF90
        mov ecx, eax
        call ext_00715550
        mov ecx, dword ptr [eax]
        mov eax, ecx
        sub eax, 3
        je L_0075FDEF
        dec eax
        je L_0075FDBE
        xor ebx, ebx
        cmp ecx, 3
        jne L_0075FDB5
L_0075FD62:
        mov ecx, dword ptr [edi + 0xac]
        push 0xaadc60
        add ecx, 4
        call ext_007275F0
        xor esi, esi
        test ebx, ebx
        jle L_0075FDA7
L_0075FD7B:
        push 3
        push 0
        mov ecx, ebp
        call ext_006FDF90
        mov ecx, eax
        call ext_00715550
        mov eax, dword ptr [eax + 0x30]
        mov ecx, dword ptr [eax + 4 * esi]
        push ecx
        mov ecx, dword ptr [edi + 0xac]
        add ecx, 4
        call ext_00727C80
        inc esi
        cmp esi, ebx
        jl L_0075FD7B
L_0075FDA7:
        mov ecx, dword ptr [edi + 0xac]
        add ecx, 4
        call ext_007283B0
L_0075FDB5:
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        ret 4
L_0075FDBE:
        mov edi, dword ptr [edi + 0xac]
        push 0xaadd14
        add edi, 4
        mov ecx, edi
        call ext_007275F0
        push 0xaadfc4
        mov ecx, edi
        call ext_007279A0
        mov ecx, edi
        call ext_007283B0
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        ret 4
L_0075FDEF:
        mov esi, dword ptr [edi + 0xac]
        push 0xaadd14
        add esi, 4
        mov ecx, esi
        call ext_007275F0
        push 0xaadfd4
        mov ecx, esi
        call ext_007279A0
        mov ecx, esi
        call ext_007283B0
        mov ecx, ebp
        call ext_006D81F0
        mov ebx, eax
        jmp L_0075FD62
    }
}

// [0x00759A30] sub_00759A30 (288 bytes)
extern "C" void ext_006B9D80();
extern "C" void ext_006BADB0();
extern "C" void ext_006BC600();
extern "C" void ext_006BC610();
extern "C" void ext_00724BF0();
extern "C" void ext_007275F0();
extern "C" void ext_007283B0();
extern "C" void ext_00728410();
extern "C" void ext_007284D0();
extern "C" void ext_0072FD70();
extern "C" void ext_00759B50();

extern "C" __declspec(naked) void __fastcall fn_00759A30(void* self) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0x8]
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov ecx, ebx
        call ext_006BC600
        mov ebp, eax
        test ebp, ebp
        jne L_nonzero
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
L_nonzero:
        xor edi, edi
        test ebp, ebp
        jle L_done
L_loop:
        mov ecx, dword ptr [esi + 0xac]
        push 0xaad3fc
        add ecx, 4
        call ext_007275F0
        push edi
        mov ecx, ebx
        call ext_006BC610
        mov ecx, eax
        call ext_006BADB0
        sub esp, 0x4c
        mov ecx, esp
        mov dword ptr [esp + 0x60], esp
        push eax
        call ext_006B9D80
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 4
        call ext_0072FD70
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 4
        call ext_00728410
        sub esp, 0x4c
        mov ecx, esp
        mov dword ptr [esp + 0x60], esp
        push 0xaad3ec
        call ext_006B9D80
        mov ecx, dword ptr [esi + 0xac]
        push 0xaa8e24
        add ecx, 4
        call ext_00724BF0
        mov ecx, dword ptr [esi + 0xac]
        push 0xaad7e0
        add ecx, 4
        call ext_007275F0
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 4
        call ext_00728410
        push edi
        mov ecx, ebx
        call ext_006BC610
        push eax
        mov ecx, esi
        call ext_00759B50
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 4
        call ext_007284D0
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 4
        call ext_007283B0
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 4
        call ext_007284D0
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 4
        call ext_007283B0
        inc edi
        cmp edi, ebp
        jl L_loop
L_done:
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        ret 4
    }
}

// [0x0075DB50] sub_0075DB50 (288 bytes)
extern "C" void ext_0071DEA0();
extern "C" void ext_007275F0();
extern "C" void ext_007279A0();
extern "C" void ext_00727C80();
extern "C" void ext_00727FE0();
extern "C" void ext_007283B0();
extern "C" void ext_00728410();
extern "C" void ext_007284D0();

extern "C" __declspec(naked) bool __fastcall fn_0075DB50(void* self, int edx_unused, int a1) {
    __asm {
        sub esp, 8
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp+16]
        push edi
        test ecx, ecx
        mov dword ptr [esp+8], 0
        mov dword ptr [esp+12], 0x40590000
        je L_skip
        call ext_0071DEA0
        fstp qword ptr [esp+8]
    L_skip:
        mov edi, dword ptr [esi+172]
        push 0xaa8e24
        add edi, 4
        mov ecx, edi
        call ext_007275F0
        push 0xaa8cc4
        mov ecx, edi
        call ext_007279A0
        mov ecx, edi
        call ext_007283B0
        mov edi, dword ptr [esi+172]
        push 0xaaeb08
        add edi, 4
        mov ecx, edi
        call ext_007275F0
        push 0xaa8cc4
        mov ecx, edi
        call ext_007279A0
        mov ecx, edi
        call ext_007283B0
        mov ecx, dword ptr [esi+172]
        push 0xaadb18
        add ecx, 4
        call ext_007275F0
        mov ecx, dword ptr [esi+172]
        add ecx, 4
        call ext_00728410
        mov edi, dword ptr [esi+172]
        push 0xaacd0c
        add edi, 4
        mov ecx, edi
        call ext_007275F0
        push 100
        mov ecx, edi
        call ext_00727C80
        mov ecx, edi
        call ext_007283B0
        mov edi, dword ptr [esi+172]
        push 0xaa9190
        add edi, 4
        mov ecx, edi
        call ext_007275F0
        mov eax, dword ptr [esp+12]
        mov ecx, dword ptr [esp+8]
        push eax
        push ecx
        mov ecx, edi
        call ext_00727FE0
        mov ecx, edi
        call ext_007283B0
        mov ecx, dword ptr [esi+172]
        add ecx, 4
        call ext_007284D0
        mov ecx, dword ptr [esi+172]
        add ecx, 4
        call ext_007283B0
        pop edi
        mov al, 1
        pop esi
        add esp, 8
        ret 4
    }
}

// [0x00751230] sub_00751230 (290 bytes)
extern "C" void ext_006A5C5C();
extern "C" void ext_006A5C62();
extern "C" void ext_007515F0();
extern "C" int mem_00925184;
extern "C" int mem_0092521C;
extern "C" int mem_009252C4;

extern "C" __declspec(naked) void __fastcall fn_00751230(void* self, int edx_unused, void* a1, void* a2, void* a3, void* a4) {
    __asm {
        push ecx
        push ebx
        push ebp
        push esi
        push edi
        xor ebx, ebx
        mov edi, ecx
        push 4D8h
        mov dword ptr [esp+14h], ebx
        call ext_006A5C62
        mov esi, eax
        mov eax, dword ptr [edi+0ACh]
        push eax
        call dword ptr [mem_00925184]
        mov ebp, eax
        mov eax, dword ptr [esp+20h]
        mov ecx, dword ptr [esp+2Ch]
        add esp, 8
        mov dword ptr [eax], ebx
        mov dword ptr [eax+4], ebx
        mov eax, dword ptr [esp+1Ch]
        lea edx, [esp+10h]
        push esi
        push edx
        mov dword ptr [eax], ebx
        mov dword ptr [eax+4], ebx
        mov eax, dword ptr [esp+28h]
        mov dword ptr [eax], ebx
        mov dword ptr [eax+4], ebx
        mov dword ptr [ecx], ebx
        mov ecx, edi
        call ext_007515F0
        test al, al
        jne L_7512A0
L_75128D:
        push esi
        call ext_006A5C5C
        add esp, 4
        xor al, al
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 10h
L_7512A0:
        cmp dword ptr [esp+10h], ebx
        je L_751330
        mov ebx, dword ptr [mem_0092521C]
L_7512B0:
        mov eax, dword ptr [edi+0ACh]
        push eax
        call dword ptr [mem_00925184]
        mov ecx, dword ptr [esp+14h]
        mov ebp, eax
        add esp, 4
        lea eax, [ecx-0Ah]
        cmp eax, 3Ch
        ja L_751311
        xor edx, edx
        mov dl, byte ptr [eax+0751368h]
        jmp dword ptr [edx*4+0751354h]
L_7512DD:
        mov eax, dword ptr [esp+18h]
        push eax
        push 0AAE640h
        jmp L_75130B
L_7512E9:
        mov ecx, dword ptr [esp+1Ch]
        push ecx
        push 0AAE640h
        jmp L_75130B
L_7512F5:
        mov edx, dword ptr [esp+20h]
        push edx
        push 0AAE640h
        jmp L_75130B
L_751301:
        mov eax, dword ptr [esp+24h]
        push eax
        push 0AA86A4h
L_75130B:
        push esi
        call ebx
        add esp, 0Ch
L_751311:
        lea ecx, [esp+10h]
        push esi
        push ecx
        mov ecx, edi
        call ext_007515F0
        test al, al
        je L_75128D
        mov eax, dword ptr [esp+10h]
        test eax, eax
        jne L_7512B0
        xor ebx, ebx
L_751330:
        mov edx, dword ptr [edi+0ACh]
        push ebx
        push ebp
        push edx
        call dword ptr [mem_009252C4]
        push esi
        call ext_006A5C5C
        add esp, 10h
        mov al, 1
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 10h
    }
}

extern "C" __declspec(naked) void tbl_00751352() {
    __asm {
        _emit 08Bh
        _emit 0FFh
        _emit 0DDh
        _emit 012h
        _emit 075h
        _emit 000h
        _emit 0E9h
        _emit 012h
        _emit 075h
        _emit 000h
        _emit 0F5h
        _emit 012h
        _emit 075h
        _emit 000h
        _emit 001h
        _emit 013h
        _emit 075h
        _emit 000h
        _emit 011h
        _emit 013h
        _emit 075h
        _emit 000h
        _emit 000h
        _emit 004h
        _emit 004h
        _emit 004h
        _emit 004h
        _emit 004h
        _emit 004h
        _emit 004h
        _emit 004h
        _emit 004h
        _emit 001h
        _emit 004h
        _emit 004h
        _emit 004h
        _emit 004h
        _emit 004h
        _emit 004h
        _emit 004h
        _emit 004h
        _emit 004h
        _emit 002h
        _emit 004h
        _emit 004h
        _emit 004h
        _emit 004h
        _emit 004h
        _emit 004h
        _emit 004h
        _emit 004h
        _emit 004h
        _emit 004h
        _emit 004h
        _emit 004h
        _emit 004h
        _emit 004h
        _emit 004h
        _emit 004h
        _emit 004h
        _emit 004h
        _emit 004h
        _emit 004h
        _emit 004h
        _emit 004h
        _emit 004h
        _emit 004h
        _emit 004h
        _emit 004h
        _emit 004h
        _emit 004h
        _emit 004h
        _emit 004h
        _emit 004h
        _emit 004h
        _emit 004h
        _emit 004h
        _emit 004h
        _emit 004h
        _emit 004h
        _emit 004h
        _emit 004h
        _emit 003h
    }
}

// [0x0075D520] sub_0075D520 (304 bytes)
extern "C" void ext_006B9D80();
extern "C" void ext_006CD320();
extern "C" void ext_006D91C0();
extern "C" void ext_006FD480();
extern "C" void ext_006FD600();
extern "C" void ext_006FD980();
extern "C" void ext_006FDD40();
extern "C" void ext_0070CE90();
extern "C" void ext_0070CF00();
extern "C" void ext_0070CF10();
extern "C" void ext_0070CF50();
extern "C" void ext_0075D650();
extern "C" void ext_00761720();
extern "C" void ext_00762070();
extern "C" void ext_00762570();
extern "C" void ext_00762ED0();

extern "C" __declspec(naked) void __fastcall fn_0075D520(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8bfd28
        push eax
        mov dword ptr fs:[0x0], esp
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x1c]
        push edi
        mov ebp, ecx
        xor edi, edi
        push edi
        mov ecx, esi
        call ext_006FD980
        test eax, eax
        jle L_A
    L_B:
        push 0
        push edi
        mov ecx, esi
        call ext_006FDD40
        push eax
        mov ecx, ebp
        call ext_00762070
        push 0
        mov ecx, esi
        inc edi
        call ext_006FD980
        cmp edi, eax
        jl L_B
    L_A:
        mov ecx, esi
        xor ebx, ebx
        call ext_006D91C0
        test eax, eax
        jle L_C
    L_D:
        push ebx
        mov ecx, esi
        xor edi, edi
        call ext_006FD480
        test eax, eax
        jle L_E
    L_F:
        push ebx
        push edi
        mov ecx, esi
        call ext_006FD600
        push eax
        mov ecx, ebp
        call ext_00761720
        push ebx
        mov ecx, esi
        inc edi
        call ext_006FD480
        cmp edi, eax
        jl L_F
    L_E:
        mov ecx, esi
        inc ebx
        call ext_006D91C0
        cmp ebx, eax
        jl L_D
    L_C:
        mov ecx, esi
        xor edi, edi
        call ext_006CD320
        test eax, eax
        jle L_G
    L_H:
        push edi
        mov ecx, esi
        call ext_0070CE90
        push eax
        mov ecx, ebp
        call ext_00762570
        mov ecx, esi
        inc edi
        call ext_006CD320
        cmp edi, eax
        jl L_H
    L_G:
        mov ecx, esi
        xor edi, edi
        call ext_0070CF00
        test eax, eax
        jle L_I
        or ebx, -1
    L_J:
        push esi
        push edi
        mov ecx, esi
        call ext_0070CF50
        sub esp, 0x4c
        mov ecx, esp
        mov dword ptr [esp + 0x70], esp
        push eax
        call ext_006B9D80
        push edi
        mov ecx, esi
        mov dword ptr [esp + 0x6c], ebx
        call ext_0070CF10
        push eax
        mov ecx, ebp
        call ext_00762ED0
        mov ecx, esi
        inc edi
        call ext_0070CF00
        cmp edi, eax
        jl L_J
    L_I:
        push esi
        mov ecx, ebp
        call ext_0075D650
        mov ecx, dword ptr [esp + 0x10]
        pop edi
        pop esi
        pop ebp
        mov al, 1
        mov dword ptr fs:[0x0], ecx
        pop ebx
        add esp, 0xc
        ret 4
    }
}

// [0x00757010] sub_00757010 (320 bytes)
extern "C" void ext_006B99C0();
extern "C" void ext_006B9D80();
extern "C" void ext_006BADB0();
extern "C" void ext_006BC380();
extern "C" void ext_006D2130();
extern "C" void ext_006D2160();
extern "C" void ext_006D59B0();
extern "C" void ext_006E8D10();
extern "C" void ext_007275F0();
extern "C" void ext_007283B0();
extern "C" void ext_00728410();
extern "C" void ext_007284D0();
extern "C" void ext_0072FD70();
extern "C" void ext_0075B3A0();
extern "C" int mem_008BE5C8;
extern "C" int mem_00AAD45C;
extern "C" int mem_00AAD440;

extern "C" __declspec(naked) void __fastcall fn_00757010(void* self) {
    __asm {
        push -1
        push offset mem_008BE5C8
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x18
        push ebx
        push esi
        push edi
        mov esi, ecx
        push 4
        push 0x10
        lea ecx, [esp + 0x14]
        call ext_006D2130
        lea eax, [esp + 0x1c]
        mov dword ptr [esp + 0x20], eax
        mov edi, dword ptr [esp + 0x34]
        push 1
        lea ecx, [esp + 0x10]
        push 7
        push ecx
        mov ecx, edi
        mov dword ptr [esp + 0x38], 0
        call ext_006B99C0
        mov ecx, eax
        call ext_006E8D10
        mov eax, dword ptr [esp + 0xc]
        test eax, eax
        je L_end
        mov ecx, dword ptr [esi + 0xac]
        push offset mem_00AAD45C
        add ecx, 4
        call ext_007275F0
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 4
        call ext_00728410
        mov ecx, edi
        call ext_006BC380
        push eax
        mov ecx, esi
        call ext_0075B3A0
        mov ecx, dword ptr [esi + 0xac]
        push offset mem_00AAD440
        add ecx, 4
        call ext_007275F0
        mov ebx, dword ptr [esp + 0xc]
        xor edi, edi
        test ebx, ebx
        jle L_after_loop
    L_loop:
        push edi
        lea ecx, [esp + 0x10]
        call ext_006D59B0
        mov ecx, dword ptr [eax]
        call ext_006BADB0
        sub esp, 0x4c
        mov ecx, esp
        mov dword ptr [esp + 0x80], esp
        push eax
        call ext_006B9D80
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 4
        call ext_0072FD70
        inc edi
        cmp edi, ebx
        jl L_loop
    L_after_loop:
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 4
        call ext_007283B0
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 4
        call ext_007284D0
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 4
        call ext_007283B0
    L_end:
        lea ecx, [esp + 0xc]
        mov dword ptr [esp + 0x2c], -1
        call ext_006D2160
        mov ecx, dword ptr [esp + 0x24]
        pop edi
        pop esi
        mov al, 1
        mov dword ptr fs:[0], ecx
        pop ebx
        add esp, 0x24
        ret 4
    }
}

// [0x0075CFE0] sub_0075CFE0 (329 bytes)
extern "C" void ext_006C3030();
extern "C" void ext_006C3040();
extern "C" void ext_0072CF10();
extern "C" void ext_0075DB50();
extern "C" void ext_0075DC70();
extern "C" void ext_0075E200();
extern "C" void ext_0075E260();
extern "C" void ext_0075F4A0();
extern "C" void ext_0075F580();
extern "C" void ext_00760490();
extern "C" void ext_00760700();
extern "C" void ext_00760CD0();
extern "C" void ext_007611C0();

extern "C" __declspec(naked) void __fastcall fn_0075CFE0(void* self, int edx_unused, void* a1) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        push edi
        mov edi, ecx
        mov ecx, esi
        call ext_006C3030
        test eax, eax
        push 0
        je L_D11B
        mov ecx, dword ptr [edi + 0xb4]
        call ext_0072CF10
        test al, al
        mov ecx, esi
        je L_D068
        call ext_006C3030
        mov edx, dword ptr [eax]
        mov ecx, eax
        call dword ptr [edx]
        dec eax
        cmp eax, 9
        ja L_D122
        jmp dword ptr [eax * 4 + 0x75d12c]

    L_D026:
        mov ecx, esi
        call ext_006C3030
        push eax
        mov ecx, edi
        call ext_00760490
        pop edi
        mov al, 1
        pop esi
        ret 4

    L_D03C:
        mov ecx, esi
        call ext_006C3030
        push eax
        mov ecx, edi
        call ext_00760700
        pop edi
        mov al, 1
        pop esi
        ret 4

    L_D052:
        mov ecx, esi
        call ext_006C3030
        push eax
        mov ecx, edi
        call ext_00760CD0
        pop edi
        mov al, 1
        pop esi
        ret 4

    L_D068:
        call ext_006C3030
        mov edx, dword ptr [eax]
        mov ecx, eax
        call dword ptr [edx]
        dec eax
        cmp eax, 9
        ja L_D119
        jmp dword ptr [eax * 4 + 0x75d154]

    L_D084:
        mov ecx, esi
        call ext_006C3040
        push eax
        mov ecx, edi
        call ext_0075DB50
        pop edi
        mov al, 1
        pop esi
        ret 4

    L_D09A:
        push esi
        mov ecx, edi
        call ext_0075DC70
        pop edi
        mov al, 1
        pop esi
        ret 4

    L_D0A9:
        push 0
        mov ecx, esi
        call ext_006C3030
        push eax
        mov ecx, edi
        call ext_0075E260
        pop edi
        mov al, 1
        pop esi
        ret 4

    L_D0C1:
        mov ecx, esi
        call ext_006C3030
        push eax
        mov ecx, edi
        call ext_0075F4A0
        pop edi
        mov al, 1
        pop esi
        ret 4

    L_D0D7:
        mov ecx, esi
        call ext_006C3030
        push eax
        mov ecx, edi
        call ext_0075F580
        pop edi
        mov al, 1
        pop esi
        ret 4

    L_D0ED:
        mov ecx, esi
        call ext_006C3030
        push eax
        mov ecx, edi
        call ext_007611C0
        pop edi
        mov al, 1
        pop esi
        ret 4

    L_D103:
        mov ecx, esi
        call ext_006C3030
        push eax
        mov ecx, edi
        call ext_0075E200
        pop edi
        mov al, 1
        pop esi
        ret 4

    L_D119:
        push 0
    L_D11B:
        mov ecx, edi
        call ext_0075DB50
    L_D122:
        pop edi
        mov al, 1
        pop esi
        ret 4
    }
}

// [0x0075FBC0] sub_0075FBC0 (352 bytes)
extern "C" void ext_006BC380();
extern "C" void ext_006D7A90();
extern "C" void ext_006D81F0();
extern "C" void ext_006D8680();
extern "C" void ext_006D86C0();
extern "C" void ext_006FD980();
extern "C" void ext_006FDF70();
extern "C" void ext_007275F0();
extern "C" void ext_007279A0();
extern "C" void ext_00727C80();
extern "C" void ext_007283B0();

extern "C" int mem_00AADFEC;
extern "C" int mem_00AADFCC;
extern "C" int mem_00AADFD4;
extern "C" int mem_00AADFE0;
extern "C" int mem_00AADC04;

extern "C" __declspec(naked) bool __fastcall fn_0075FBC0(void* self, int edx_unused, void* arg0) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0x8]
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ecx, ebx
        call ext_006D86C0
        dec eax
        je loc_75FC33
        mov esi, dword ptr [edi + 0xac]
        sub eax, 2
        je loc_75FC08
        add esi, 4
        push offset mem_00AADFEC
        mov ecx, esi
        call ext_007275F0
        push offset mem_00AADFCC
        mov ecx, esi
        call ext_007279A0
        mov ecx, esi
        call ext_007283B0
        mov ebp, 1
        jmp loc_75FC64

    loc_75FC08:
        add esi, 4
        push offset mem_00AADFEC
        mov ecx, esi
        call ext_007275F0
        push offset mem_00AADFD4
        mov ecx, esi
        call ext_007279A0
        mov ecx, esi
        call ext_007283B0
        mov ecx, ebx
        call ext_006D81F0
        jmp loc_75FC62

    loc_75FC33:
        mov esi, dword ptr [edi + 0xac]
        push offset mem_00AADFEC
        add esi, 4
        mov ecx, esi
        call ext_007275F0
        push offset mem_00AADFE0
        mov ecx, esi
        call ext_007279A0
        mov ecx, esi
        call ext_007283B0
        mov ecx, ebx
        call ext_006D7A90

    loc_75FC62:
        mov ebp, eax

    loc_75FC64:
        push 0
        mov ecx, ebx
        mov dword ptr [esp + 0x18], 0
        call ext_006FDF70
        mov esi, eax
        test esi, esi
        je loc_75FC94
        mov ecx, esi
        call ext_006BC380
        test eax, eax
        je loc_75FC94
        mov ecx, esi
        call ext_006BC380
        mov eax, dword ptr [eax + 4]
        mov dword ptr [esp + 0x14], eax

    loc_75FC94:
        mov ecx, dword ptr [edi + 0xac]
        push offset mem_00AADC04
        add ecx, 4
        call ext_007275F0
        xor esi, esi
        test ebp, ebp
        jle loc_75FD01

    loc_75FCAD:
        push 0
        mov ecx, ebx
        call ext_006FD980
        test eax, eax
        je loc_75FCEB
        mov eax, dword ptr [esp + 0x14]
        cmp eax, 2
        je loc_75FCC8
        cmp eax, 1
        jne loc_75FCDF

    loc_75FCC8:
        mov ecx, ebx
        call ext_006D8680
        test eax, eax
        je loc_75FCDF
        mov ecx, ebx
        call ext_006D8680
        mov eax, dword ptr [eax + esi * 4]
        jmp loc_75FCED

    loc_75FCDF:
        push 0
        mov ecx, ebx
        call ext_006FD980
        dec eax
        jmp loc_75FCED

    loc_75FCEB:
        xor eax, eax

    loc_75FCED:
        mov ecx, dword ptr [edi + 0xac]
        push eax
        add ecx, 4
        call ext_00727C80
        inc esi
        cmp esi, ebp
        jl loc_75FCAD

    loc_75FD01:
        mov ecx, dword ptr [edi + 0xac]
        add ecx, 4
        call ext_007283B0
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        ret 4
    }
}

// [0x00759540] sub_00759540 (368 bytes)
extern "C" void ext_006B9950();
extern "C" void ext_006F7700();
extern "C" void ext_006F7710();
extern "C" void ext_006F7730();
extern "C" void ext_006F7750();
extern "C" void ext_006F8A70();
extern "C" void ext_006F8EE0();
extern "C" void ext_007025B0();
extern "C" void ext_007275F0();
extern "C" void ext_007279A0();
extern "C" void ext_007283B0();
extern "C" void ext_00728410();
extern "C" void ext_007284D0();
extern "C" void ext_007596B0();

extern "C" __declspec(naked) void __fastcall fn_00759540(void* self) {
    __asm {
        push -1
        push 0x008bfb68
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x54
        mov eax, dword ptr [esp + 0x68]
        push esi
        push edi
        mov esi, ecx
        push eax
        call ext_006F7700
        add esp, 4
        xor edi, edi
        test eax, eax
        mov dword ptr [esp + 8], eax
        jle L_exit
        push ebx
        push ebp
    L_loop:
        mov ecx, dword ptr [esp + 0x78]
        push edi
        push ecx
        call ext_006F7710
        add esp, 8
        lea ecx, [esp + 0x14]
        mov ebp, eax
        call ext_006F8A70
        mov ecx, dword ptr [esp + 0x74]
        lea edx, [esp + 0x14]
        push edx
        push ebp
        mov dword ptr [esp + 0x74], 0
        call ext_006F8EE0
        mov bl, al
        test bl, bl
        je L_check_a4
        mov ecx, dword ptr [esp + 0x14]
        test ecx, ecx
        je L_check_inner
        call ext_007025B0
        cmp eax, dword ptr [esp + 0x7c]
        je L_set_bl_1
    L_check_inner:
        lea ecx, [esp + 0x18]
        call ext_006B9950
        test al, al
        je L_set_bl_1
        xor bl, bl
        jmp L_check_a4
    L_set_bl_1:
        mov bl, 1
    L_check_a4:
        mov al, byte ptr [esp + 0x80]
        test al, al
        je L_xor_al
        mov eax, dword ptr [esp + 0x78]
        push edi
        push eax
        call ext_006F7750
        add esp, 8
        cmp eax, 0xfa0
        jg L_xor_al
        mov al, 1
        jmp L_check_flags
    L_xor_al:
        xor al, al
    L_check_flags:
        test bl, bl
        jne L_do_write
        test al, al
        je L_dtor
    L_do_write:
        mov ecx, dword ptr [esi + 0xac]
        push 0x00aad6ac
        add ecx, 4
        call ext_007275F0
        mov ecx, dword ptr [esp + 0x78]
        push edi
        push ecx
        call ext_006F7730
        mov ecx, dword ptr [esi + 0xac]
        add esp, 8
        add ecx, 4
        push eax
        call ext_007279A0
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 4
        call ext_00728410
        mov edx, dword ptr [esp + 0x7c]
        mov eax, dword ptr [esp + 0x74]
        push edx
        push ebp
        push eax
        mov ecx, esi
        call ext_007596B0
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 4
        call ext_007284D0
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 4
        call ext_007283B0
    L_dtor:
        lea ecx, [esp + 0x18]
        mov dword ptr [esp + 0x6c], -1
        call ext_006B9D70
        mov eax, dword ptr [esp + 0x10]
        inc edi
        cmp edi, eax
        jl L_loop
        pop ebp
        pop ebx
    L_exit:
        mov ecx, dword ptr [esp + 0x5c]
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x60
        ret 0x10
    }
}

// [0x0075D360] sub_0075D360 (448 bytes)
extern "C" void ext_006BADB0();
extern "C" void ext_006C9360();
extern "C" void ext_006C98F0();
extern "C" void ext_006CA940();
extern "C" void ext_006DC460();
extern "C" void ext_006DC480();
extern "C" void ext_006E57B0();
extern "C" void ext_007275F0();
extern "C" void ext_007279A0();
extern "C" void ext_00727FE0();
extern "C" void ext_007283B0();
extern "C" void ext_00728410();
extern "C" void ext_007284D0();
extern "C" void ext_0079D6D0();

extern "C" __declspec(naked) void __fastcall fn_0075D360(void* self) {
    __asm {
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 0xc]
        mov ebx, ecx
        mov ecx, dword ptr [esp + 0x10]
        mov eax, dword ptr [ebp]
        push ecx
        mov ecx, ebp
        call dword ptr [eax + 0x28]
        cmp al, 0x1
        jne L_fail_0075D360
        mov edx, dword ptr [esp + 0x14]
        mov ecx, dword ptr [ebx + 0xac]
        push esi
        push edx
        add ecx, 0x4
        call ext_007275F0
        mov ecx, ebp
        call ext_006BADB0
        mov ecx, dword ptr [ebx + 0xac]
        push eax
        add ecx, 0x4
        call ext_007279A0
        mov ecx, dword ptr [ebx + 0xac]
        add ecx, 0x4
        call ext_00728410
        mov esi, dword ptr [ebx + 0xac]
        push 0xaacd0c
        add esi, 0x4
        mov ecx, esi
        call ext_007275F0
        push 0x3ff19999
        push 0x9999999a
        mov ecx, esi
        call ext_00727FE0
        mov ecx, esi
        call ext_007283B0
        mov ecx, ebp
        call ext_006DC480
        mov ecx, ebp
        mov esi, eax
        call ext_006DC460
        cmp esi, eax
        je L_skip1_0075D360
        mov ecx, ebp
        call ext_006DC480
        mov ecx, eax
        call ext_006C9360
        mov edx, dword ptr [eax]
        mov ecx, eax
        call dword ptr [edx + 0x14]
        mov esi, eax
        mov al, byte ptr [esp + 0x1c]
        test al, al
        mov dword ptr [esp + 0x14], esi
        je L_44b_0075D360
        mov ecx, ebp
        call ext_006DC480
        mov ecx, eax
        call ext_006C98F0
        test eax, eax
        je L_44b_0075D360
        push 0x42c80000
        push 0x0
        mov ecx, ebp
        call ext_006DC480
        mov ecx, eax
        call ext_006C98F0
        mov ecx, eax
        call ext_006CA940
    L_44b_0075D360:
        push edi
        xor edi, edi
        test esi, esi
        jle L_4b3_0075D360
    L_452_0075D360:
        mov eax, dword ptr [ebx + 0xac]
        test eax, eax
        je L_465_0075D360
        add eax, 0x4
        mov dword ptr [esp + 0x14], eax
        jmp L_46d_0075D360
    L_465_0075D360:
        mov dword ptr [esp + 0x14], 0x0
    L_46d_0075D360:
        mov ecx, ebp
        call ext_006DC480
        mov ecx, eax
        call ext_006C9360
        mov ecx, dword ptr [ebx + 0xac]
        mov esi, eax
        call ext_0079D6D0
        mov edx, dword ptr [esi]
        push eax
        mov eax, dword ptr [esp + 0x18]
        push 0x1
        push 0xaa9470
        push 0x1
        push 0x1
        push 0x0
        push eax
        push edi
        mov ecx, esi
        call dword ptr [edx + 0x18]
        mov ecx, eax
        call ext_006E57B0
        mov eax, dword ptr [esp + 0x18]
        inc edi
        cmp edi, eax
        jl L_452_0075D360
    L_4b3_0075D360:
        mov al, byte ptr [esp + 0x20]
        pop edi
        test al, al
        je L_4ea_0075D360
        mov ecx, ebp
        call ext_006DC480
        mov ecx, eax
        call ext_006C98F0
        test eax, eax
        je L_4ea_0075D360
        push 0x3c23d70a
        push 0x0
        mov ecx, ebp
        call ext_006DC480
        mov ecx, eax
        call ext_006C98F0
        mov ecx, eax
        call ext_006CA940
    L_4ea_0075D360:
    L_skip1_0075D360:
        mov ecx, dword ptr [ebx + 0xac]
        add ecx, 0x4
        call ext_007284D0
        mov ecx, dword ptr [ebx + 0xac]
        add ecx, 0x4
        call ext_007283B0
        pop esi
        pop ebp
        mov al, 0x1
        pop ebx
        ret 0x10
    L_fail_0075D360:
        pop ebp
        xor al, al
        pop ebx
        ret 0x10
    }
}

// [0x007597A0] sub_007597A0 (448 bytes)
extern "C" void ext_006B9D80();
extern "C" void ext_006BADB0();
extern "C" void ext_006F8AF0();
extern "C" void ext_006F8FB0();
extern "C" void ext_006F90D0();
extern "C" void ext_007025B0();
extern "C" void ext_00724BF0();
extern "C" void ext_007275F0();
extern "C" void ext_00727C80();
extern "C" void ext_007283B0();
extern "C" void ext_00728410();
extern "C" void ext_007284D0();

extern "C" __declspec(naked) void __fastcall fn_007597A0(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        sub esp, 0xc
        push ebx
        push esi
        mov esi, ecx
        push edi
        lea ecx, [esp + 0xc]
        call ext_006F8AF0
        mov edi, dword ptr [esp + 0x20]
        mov ecx, dword ptr [esp + 0x1c]
        lea eax, [esp + 0xc]
        push eax
        push edi
        call ext_006F8FB0
        test al, al
        je fn007597A0_out
        mov ecx, dword ptr [esp + 0xc]
        call ext_007025B0
        cmp eax, dword ptr [esp + 0x24]
        jne fn007597A0_out
        mov ecx, dword ptr [esi + 0xac]
        push 0xaad6ac
        add ecx, 0x4
        call ext_007275F0
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_00728410
        push edi
        call ext_006F90D0
        sub esp, 0x48
        mov ecx, esp
        mov dword ptr [esp + 0x6c], esp
        push eax
        call ext_006B9D80
        mov ecx, dword ptr [esi + 0xac]
        push 0xaad720
        add ecx, 0x4
        call ext_00724BF0
        mov ecx, dword ptr [esp + 0xc]
        call ext_006BADB0
        sub esp, 0x4c
        mov ecx, esp
        mov dword ptr [esp + 0x6c], esp
        push eax
        call ext_006B9D80
        mov ecx, dword ptr [esi + 0xac]
        push 0xaad728
        add ecx, 0x4
        call ext_00724BF0
        mov edi, dword ptr [esi + 0xac]
        mov ebx, dword ptr [esp + 0x10]
        add edi, 0x4
        push 0xaad7d0
        mov ecx, edi
        and ebx, 0xff
        call ext_007275F0
        push ebx
        mov ecx, edi
        call ext_00727C80
        mov ecx, edi
        call ext_007283B0
        mov edi, dword ptr [esi + 0xac]
        mov ebx, dword ptr [esp + 0x11]
        add edi, 0x4
        push 0xaad7c8
        mov ecx, edi
        and ebx, 0xff
        call ext_007275F0
        push ebx
        mov ecx, edi
        call ext_00727C80
        mov ecx, edi
        call ext_007283B0
        mov edi, dword ptr [esi + 0xac]
        mov ebx, dword ptr [esp + 0x12]
        add edi, 0x4
        push 0xaad7c0
        mov ecx, edi
        and ebx, 0xff
        call ext_007275F0
        push ebx
        mov ecx, edi
        call ext_00727C80
        mov ecx, edi
        call ext_007283B0
        mov edi, dword ptr [esi + 0xac]
        mov ebx, dword ptr [esp + 0x13]
        add edi, 0x4
        push 0xaad7ac
        mov ecx, edi
        and ebx, 0xff
        call ext_007275F0
        push ebx
        mov ecx, edi
        call ext_00727C80
        mov ecx, edi
        call ext_007283B0
        mov ebx, dword ptr [esp + 0x14]
        mov edi, dword ptr [esi + 0xac]
        and ebx, 0xff
        add edi, 0x4
        push 0xaad798
        mov ecx, edi
        call ext_007275F0
        push ebx
        mov ecx, edi
        call ext_00727C80
        mov ecx, edi
        call ext_007283B0
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_007284D0
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_007283B0
    fn007597A0_out:
        pop edi
        pop esi
        pop ebx
        add esp, 0xc
        ret 0xc
    }
}

// [0x007586C0] sub_007586C0 (464 bytes)
extern "C" void ext_006B9950();
extern "C" void ext_006B9D70();
extern "C" void ext_006D80A0();
extern "C" void ext_006EA6D0();
extern "C" void ext_006F7680();
extern "C" void ext_006F7700();
extern "C" void ext_006F7710();
extern "C" void ext_006F7730();
extern "C" void ext_006F7750();
extern "C" void ext_007025B0();
extern "C" void ext_007275F0();
extern "C" void ext_007279A0();
extern "C" void ext_007283B0();
extern "C" void ext_00728410();
extern "C" void ext_007284D0();
extern "C" void ext_00758890();

extern "C" __declspec(naked) void __fastcall fn_007586C0(void* self, int edx_unused, void* a1, int a2, int a3, int a4) {
    __asm {
        push -1
        push 0x008bb186
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0xc0
        mov eax, dword ptr [esp + 0xd4]
        push esi
        push edi
        mov esi, ecx
        push eax
        call ext_006F7700
        add esp, 4
        xor edi, edi
        test eax, eax
        mov dword ptr [esp + 0xc], eax
        jle L_exit_7586C0
        push ebx
        push ebp
    L_loop_7586C0:
        mov ecx, dword ptr [esp + 0xe4]
        push edi
        push ecx
        call ext_006F7710
        add esp, 8
        lea ecx, [esp + 0x18]
        mov ebp, eax
        call ext_006EA6D0
        mov ecx, dword ptr [esp + 0xe0]
        lea edx, [esp + 0x18]
        push edx
        push ebp
        mov dword ptr [esp + 0xe0], 0
        call ext_006F7680
        mov bl, al
        test bl, bl
        je L_after_7586C0
        mov ecx, dword ptr [esp + 0x18]
        test ecx, ecx
        je L_skip_7586C0
        call ext_007025B0
        cmp eax, dword ptr [esp + 0xe8]
        je L_setone_7586C0
    L_skip_7586C0:
        lea ecx, [esp + 0x1c]
        call ext_006B9950
        test al, al
        je L_setone_7586C0
        xor bl, bl
        jmp L_after_7586C0
    L_setone_7586C0:
        mov bl, 1
    L_after_7586C0:
        mov al, byte ptr [esp + 0xec]
        test al, al
        je L_zero_7586C0
        mov eax, dword ptr [esp + 0xe4]
        push edi
        push eax
        call ext_006F7750
        add esp, 8
        cmp eax, 0xfa0
        jg L_zero_7586C0
        mov al, 1
        jmp L_join_7586C0
    L_zero_7586C0:
        xor al, al
    L_join_7586C0:
        test bl, bl
        mov byte ptr [esp + 0x10], al
        jne L_work_7586C0
        test al, al
        je L_next_7586C0
    L_work_7586C0:
        mov ecx, dword ptr [esi + 0xac]
        push 0x00aad6ac
        add ecx, 4
        call ext_007275F0
        mov ecx, dword ptr [esp + 0xe4]
        push edi
        push ecx
        call ext_006F7730
        mov ecx, dword ptr [esi + 0xac]
        add esp, 8
        add ecx, 4
        push eax
        call ext_007279A0
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 4
        call ext_00728410
        mov edx, dword ptr [esp + 0x10]
        mov eax, dword ptr [esp + 0xe8]
        mov ecx, dword ptr [esp + 0xe0]
        push edx
        push eax
        push ebp
        push ecx
        mov ecx, esi
        call ext_00758890
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 4
        call ext_007284D0
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 4
        call ext_007283B0
    L_next_7586C0:
        lea ecx, [esp + 0xa8]
        mov dword ptr [esp + 0xd8], 3
        call ext_006D80A0
        lea ecx, [esp + 0x88]
        mov byte ptr [esp + 0xd8], 2
        call ext_006D80A0
        lea ecx, [esp + 0x68]
        mov byte ptr [esp + 0xd8], 1
        call ext_006D80A0
        lea ecx, [esp + 0x1c]
        mov dword ptr [esp + 0xd8], 0xffffffff
        call ext_006B9D70
        mov eax, dword ptr [esp + 0x14]
        inc edi
        cmp edi, eax
        jl L_loop_7586C0
        pop ebp
        pop ebx
    L_exit_7586C0:
        mov ecx, dword ptr [esp + 0xc8]
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0xcc
        ret 0x10
    }
}

// [0x00758F40] sub_00758F40 (400 bytes)
extern "C" void ext_006B9D80(); extern "C" void ext_00724BF0(); extern "C" void ext_007275F0(); extern "C" void ext_00727C80(); extern "C" void ext_00727FE0(); extern "C" void ext_007283B0(); extern "C" void ext_00728410(); extern "C" void ext_007284D0(); extern "C" void ext_0077FE40(); extern "C" void ext_0077FE50(); extern "C" void ext_0077FEB0(); extern "C" void ext_0077FED0(); extern "C" void ext_0077FF70(); extern "C" void ext_0077FFB0();
extern "C" __declspec(naked) void __fastcall fn_00758F40(void* self, int edx_unused, int a1) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -8
        sub esp, 0x14
        push ebx
        push esi
        push edi
        mov esi, ecx
        call ext_0077FE40
        xor edi, edi
        mov dword ptr [esp+0x1c], eax
        test eax, eax
        jle done
      top:
        mov ecx, dword ptr [esi+0xac]
        push 0xaad76c
        add ecx, 4
        call ext_007275F0
        mov ecx, dword ptr [esi+0xac]
        add ecx, 4
        call ext_00728410
        push edi
        call ext_0077FE50
        sub esp, 0x48
        mov ecx, esp
        mov dword ptr [esp+0x5c], esp
        push eax
        call ext_006B9D80
        mov ecx, dword ptr [esi+0xac]
        push 0xaad720
        add ecx, 4
        call ext_00724BF0
        mov ecx, dword ptr [ebp+8]
        push edi
        call ext_0077FF70
        mov ebx, dword ptr [esi+0xac]
        push 0xaad764
        add ebx, 4
        mov dword ptr [esp+0x14], eax
        mov ecx, ebx
        call ext_007275F0
        mov eax, dword ptr [esp+0x10]
        mov ecx, ebx
        push eax
        call ext_00727C80
        mov ecx, ebx
        call ext_007283B0
        push edi
        call ext_0077FEB0
        mov ebx, dword ptr [esi+0xac]
        add esp, 4
        fstp qword ptr [esp+0x10]
        add ebx, 4
        push 0xaad750
        mov ecx, ebx
        call ext_007275F0
        mov ecx, dword ptr [esp+0x14]
        mov edx, dword ptr [esp+0x10]
        push ecx
        push edx
        mov ecx, ebx
        call ext_00727FE0
        mov ecx, ebx
        call ext_007283B0
        push edi
        call ext_0077FED0
        mov ebx, dword ptr [esi+0xac]
        add esp, 4
        fstp qword ptr [esp+0x10]
        add ebx, 4
        push 0xaad74c
        mov ecx, ebx
        call ext_007275F0
        mov eax, dword ptr [esp+0x14]
        mov ecx, dword ptr [esp+0x10]
        push eax
        push ecx
        mov ecx, ebx
        call ext_00727FE0
        mov ecx, ebx
        call ext_007283B0
        mov ecx, dword ptr [ebp+8]
        push 0
        push edi
        call ext_0077FFB0
        mov ebx, dword ptr [esi+0xac]
        push 0xaad754
        fstp qword ptr [esp+0x14]
        add ebx, 4
        mov ecx, ebx
        call ext_007275F0
        mov edx, dword ptr [esp+0x14]
        mov eax, dword ptr [esp+0x10]
        push edx
        push eax
        mov ecx, ebx
        call ext_00727FE0
        mov ecx, ebx
        call ext_007283B0
        mov ecx, dword ptr [esi+0xac]
        add ecx, 4
        call ext_007284D0
        mov ecx, dword ptr [esi+0xac]
        add ecx, 4
        call ext_007283B0
        mov eax, dword ptr [esp+0x1c]
        inc edi
        cmp edi, eax
        jl top
      done:
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 4
    }
}

// [0x00759EC0] sub_00759EC0 (496 bytes)
extern "C" void ext_006BADB0();
extern "C" void ext_006BC440();
extern "C" void ext_00715550();
extern "C" void ext_007275F0();
extern "C" void ext_007279A0();
extern "C" void ext_00727C80();
extern "C" void ext_00727FE0();
extern "C" void ext_007283B0();
extern "C" void ext_00728410();
extern "C" void ext_007284D0();

extern "C" __declspec(naked) void __fastcall fn_00759EC0(void* self, int edx_unused, void* a1) {
    __asm {
        push ebp
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp+0Ch]
        call ext_00715550
        mov ebp, eax
        test ebp, ebp
        je done
        mov ecx, dword ptr [esi+0ACh]
        push ebx
        push edi
        push 0AAD230h
        add ecx, 4
        call ext_007275F0
        mov ecx, dword ptr [esi+0ACh]
        add ecx, 4
        call ext_00728410
        mov edi, dword ptr [esi+0ACh]
        push 0AACD0Ch
        add edi, 4
        mov ecx, edi
        call ext_007275F0
        push 40100000h
        push 0
        mov ecx, edi
        call ext_00727FE0
        mov ecx, edi
        call ext_007283B0
        mov ecx, dword ptr [esi+0ACh]
        push 0AAD228h
        add ecx, 4
        call ext_007275F0
        mov ecx, dword ptr [esi+0ACh]
        push 0AAE984h
        add ecx, 4
        call ext_007279A0
        mov ecx, dword ptr [esi+0ACh]
        add ecx, 4
        call ext_00728410
        xor ebx, ebx
        test ebp, ebp
        jle tail
    loopTop:
        mov ecx, dword ptr [esi+0ACh]
        push 0AAD21Ch
        add ecx, 4
        call ext_007275F0
        mov ecx, dword ptr [esp+14h]
        push ebx
        call ext_006BC440
        mov ecx, eax
        call ext_006BADB0
        mov ecx, dword ptr [esi+0ACh]
        push eax
        add ecx, 4
        call ext_007279A0
        mov ecx, dword ptr [esi+0ACh]
        add ecx, 4
        call ext_00728410
        mov edi, dword ptr [esi+0ACh]
        push 0AA8E24h
        add edi, 4
        mov ecx, edi
        call ext_007275F0
        push 0AAA374h
        mov ecx, edi
        call ext_007279A0
        mov ecx, edi
        call ext_007283B0
        mov edi, dword ptr [esi+0ACh]
        push 0AAD91Ch
        add edi, 4
        mov ecx, edi
        call ext_007275F0
        push 1
        mov ecx, edi
        call ext_00727C80
        mov ecx, edi
        call ext_007283B0
        mov edi, dword ptr [esi+0ACh]
        push 0AAE97Ch
        add edi, 4
        mov ecx, edi
        call ext_007275F0
        push 0AAB3D8h
        mov ecx, edi
        call ext_007279A0
        mov ecx, edi
        call ext_007283B0
        mov edi, dword ptr [esi+0ACh]
        push 0AAE970h
        add edi, 4
        mov ecx, edi
        call ext_007275F0
        push 0AAA374h
        mov ecx, edi
        call ext_007279A0
        mov ecx, edi
        call ext_007283B0
        mov ecx, dword ptr [esi+0ACh]
        add ecx, 4
        call ext_007284D0
        mov ecx, dword ptr [esi+0ACh]
        add ecx, 4
        call ext_007283B0
        inc ebx
        cmp ebx, ebp
        jl loopTop
    tail:
        mov ecx, dword ptr [esi+0ACh]
        add ecx, 4
        call ext_007284D0
        mov ecx, dword ptr [esi+0ACh]
        add ecx, 4
        call ext_007283B0
        mov ecx, dword ptr [esi+0ACh]
        add ecx, 4
        call ext_007284D0
        mov ecx, dword ptr [esi+0ACh]
        add ecx, 4
        call ext_007283B0
        pop edi
        pop ebx
    done:
        pop esi
        pop ebp
        ret 4
    }
}

// [0x0075F810] sub_0075F810 (400 bytes)
extern "C" void ext_006D80A0();
extern "C" void ext_006D7A90();
extern "C" void ext_006DEEC0();
extern "C" void ext_0070E390();
extern "C" void ext_00714570();
extern "C" void ext_007275F0();
extern "C" void ext_00727FE0();
extern "C" void ext_007283B0();
extern "C" void ext_008BCCEB();
extern "C" int mem_00AADFB8;
extern "C" __declspec(naked) void __fastcall fn_0075F810(void* self, int edx_unused, int a1) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -8
        push -1
        push offset ext_008BCCEB
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0xa4
        push ebx
        push esi
        mov esi, ecx
        push edi
        lea ecx, [esp+0x30]
        call ext_00714570
        mov edi, dword ptr [ebp+8]
        lea eax, [esp+0x30]
        xor ebx, ebx
        push eax
        mov ecx, edi
        mov dword ptr [esp+0xbc], ebx
        call ext_0070E390
        mov ecx, dword ptr [esi+0xac]
        push offset mem_00AADFB8
        add ecx, 4
        call ext_007275F0
        mov ecx, edi
        call ext_006D7A90
        test eax, eax
        jle done
        mov dword ptr [esp+0xc], ebx
    loop_top:
        mov ecx, edi
        call ext_006DEEC0
        add eax, dword ptr [esp+0xc]
        fld qword ptr [eax]
        fld qword ptr [eax+8]
        fld qword ptr [eax+0x10]
        fld qword ptr [esp+0x70]
        fmul st, st(1)
        fld qword ptr [esp+0x50]
        fmul st, st(3)
        faddp st(1), st
        fld qword ptr [esp+0x30]
        fmul st, st(4)
        faddp st(1), st
        fadd qword ptr [esp+0x90]
        fstp qword ptr [esp+0x10]
        fld qword ptr [esp+0x78]
        fmul st, st(1)
        fld qword ptr [esp+0x38]
        fmul st, st(4)
        mov ecx, dword ptr [esp+0x14]
        mov edx, dword ptr [esp+0x10]
        push ecx
        mov ecx, dword ptr [esi+0xac]
        faddp st(1), st
        fld qword ptr [esp+0x5c]
        fmul st, st(3)
        push edx
        add ecx, 4
        faddp st(1), st
        fadd qword ptr [esp+0xa0]
        fstp qword ptr [esp+0x20]
        fld qword ptr [esp+0x88]
        fmul st, st(1)
        fld qword ptr [esp+0x48]
        fmul st, st(4)
        faddp st(1), st
        fld qword ptr [esp+0x68]
        fmul st, st(3)
        faddp st(1), st
        fadd qword ptr [esp+0xa8]
        fstp qword ptr [esp+0x28]
        fstp st(0)
        fstp st(0)
        fstp st(0)
        call ext_00727FE0
        mov eax, dword ptr [esp+0x1c]
        mov ecx, dword ptr [esp+0x18]
        push eax
        push ecx
        mov ecx, dword ptr [esi+0xac]
        add ecx, 4
        call ext_00727FE0
        mov edx, dword ptr [esp+0x24]
        mov eax, dword ptr [esp+0x20]
        mov ecx, dword ptr [esi+0xac]
        push edx
        push eax
        add ecx, 4
        call ext_00727FE0
        mov edx, dword ptr [esp+0xc]
        mov ecx, edi
        add edx, 0x20
        inc ebx
        mov dword ptr [esp+0xc], edx
        call ext_006D7A90
        cmp ebx, eax
        jl loop_top
    done:
        mov ecx, dword ptr [esi+0xac]
        add ecx, 4
        call ext_007283B0
        lea ecx, [esp+0x30]
        mov dword ptr [esp+0xb8], 0xffffffff
        call ext_006D80A0
        mov ecx, dword ptr [esp+0xb0]
        pop edi
        pop esi
        mov al, 1
        mov dword ptr fs:[0], ecx
        pop ebx
        mov esp, ebp
        pop ebp
        ret 4
    }
}

// [0x0075F9A0] sub_0075F9A0 (544 bytes)
extern "C" void ext_006B99C0();
extern "C" void ext_006C4440();
extern "C" void ext_006C7DB0();
extern "C" void ext_006D7AA0();
extern "C" void ext_006D80A0();
extern "C" void ext_006FDF90();
extern "C" void ext_0070E390();
extern "C" void ext_00714570();
extern "C" void ext_007275F0();
extern "C" void ext_00727FE0();
extern "C" void ext_007283B0();
extern "C" __declspec(naked) void __fastcall fn_0075F9A0(void* self) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -8
        push -1
        push 0x8bcceb
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x13c
        push ebx
        push esi
        mov esi, ecx
        push edi
        lea ecx, [esp + 0xc8]
        call ext_00714570
        mov edi, dword ptr [ebp + 8]
        lea eax, [esp + 0xc8]
        xor ebx, ebx
        push eax
        mov ecx, edi
        mov dword ptr [esp + 0x154], ebx
        call ext_0070E390
        lea ecx, [esp + 0xc8]
        lea edx, [esp + 0xb0]
        push ecx
        push edx
        call ext_006C7DB0
        lea eax, [esp + 0xb8]
        lea ecx, [esp + 0x38]
        push eax
        push ecx
        mov dword ptr [esp + 0xb0], ebx
        mov dword ptr [esp + 0xb4], ebx
        mov dword ptr [esp + 0xa8], ebx
        mov dword ptr [esp + 0xac], ebx
        mov dword ptr [esp + 0xa0], ebx
        mov dword ptr [esp + 0xa4], ebx
        mov dword ptr [esp + 0x98], ebx
        mov dword ptr [esp + 0x9c], ebx
        mov dword ptr [esp + 0x78], ebx
        mov dword ptr [esp + 0x7c], ebx
        mov dword ptr [esp + 0x58], ebx
        mov dword ptr [esp + 0x5c], ebx
        mov dword ptr [esp + 0xb8], ebx
        mov dword ptr [esp + 0xbc], 0x3ff00000
        call ext_006C4440
        add esp, 0x10
        mov ecx, edi
        call ext_006D7AA0
        test eax, eax
        je L_end
        push 1
        push ebx
        mov ecx, edi
        call ext_006FDF90
        mov ecx, eax
        call ext_006B99C0
        mov ecx, dword ptr [esi + 0xac]
        push 0xaadc44
        add ecx, 4
        mov edi, eax
        call ext_007275F0
        cmp dword ptr [edi + 8], ebx
        jle L_skip
        mov dword ptr [esp + 0xc], ebx
L_loop:
        mov eax, dword ptr [esp + 0xc]
        mov ecx, dword ptr [edi + 0x18]
        add eax, ecx
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 4
        fld qword ptr [eax]
        fld qword ptr [eax + 8]
        fld qword ptr [eax + 0x10]
        fld qword ptr [esp + 0x70]
        fmul st, st(1)
        fld qword ptr [esp + 0x50]
        fmul st, st(3)
        faddp st(1), st
        fld qword ptr [esp + 0x30]
        fmul st, st(4)
        faddp st(1), st
        fstp qword ptr [esp + 0x10]
        fld qword ptr [esp + 0x78]
        fmul st, st(1)
        fld qword ptr [esp + 0x38]
        fmul st, st(4)
        mov edx, dword ptr [esp + 0x14]
        mov eax, dword ptr [esp + 0x10]
        push edx
        push eax
        faddp st(1), st
        fld qword ptr [esp + 0x60]
        fmul st, st(3)
        faddp st(1), st
        fstp qword ptr [esp + 0x20]
        fld qword ptr [esp + 0x88]
        fmul st, st(1)
        fld qword ptr [esp + 0x48]
        fmul st, st(4)
        faddp st(1), st
        fld qword ptr [esp + 0x68]
        fmul st, st(3)
        faddp st(1), st
        fstp qword ptr [esp + 0x28]
        fstp st(0)
        fstp st(0)
        fstp st(0)
        call ext_00727FE0
        mov ecx, dword ptr [esp + 0x1c]
        mov edx, dword ptr [esp + 0x18]
        push ecx
        mov ecx, dword ptr [esi + 0xac]
        push edx
        add ecx, 4
        call ext_00727FE0
        mov eax, dword ptr [esp + 0x24]
        mov ecx, dword ptr [esp + 0x20]
        push eax
        push ecx
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 4
        call ext_00727FE0
        mov ecx, dword ptr [esp + 0xc]
        mov eax, dword ptr [edi + 8]
        inc ebx
        add ecx, 0x20
        cmp ebx, eax
        mov dword ptr [esp + 0xc], ecx
        jl L_loop
L_skip:
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 4
        call ext_007283B0
L_end:
        lea ecx, [esp + 0xc8]
        mov dword ptr [esp + 0x150], 0xffffffff
        call ext_006D80A0
        mov ecx, dword ptr [esp + 0x148]
        pop edi
        pop esi
        mov al, 1
        mov dword ptr fs:[0], ecx
        pop ebx
        mov esp, ebp
        pop ebp
        ret 4
    }
}

// [0x00753F70] sub_00753F70 (559 bytes)
extern "C" void ext_006A5C5C();
extern "C" void ext_006A5C62();
extern "C" void ext_006D2170();
extern "C" void ext_007515F0();
extern "C" void ext_00754200();
extern "C" void ext_00782E70();
extern "C" int mem_0092521C;

extern "C" __declspec(naked) void __fastcall fn_00753F70(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        sub esp, 0x24
        push ebx
        push ebp
        push esi
        push edi
        mov esi, ecx
        xor edi, edi
        push 0x4d8
        mov dword ptr [esp + 0x20], esi
        mov dword ptr [esp + 0x18], edi
        call ext_006A5C62
        push 0x4d8
        mov ebp, eax
        call ext_006A5C62
        add esp, 0x8
        mov dword ptr [esp + 0x18], eax
        lea eax, [esp + 0x14]
        mov ecx, esi
        push ebp
        push eax
        mov dword ptr [esp + 0x34], edi
        mov dword ptr [esp + 0x38], edi
        mov dword ptr [esp + 0x18], edi
        mov dword ptr [esp + 0x28], edi
        mov dword ptr [esp + 0x2c], edi
        mov dword ptr [esp + 0x30], edi
        call ext_007515F0
        test al, al
        je FAIL_LBL
mov ebx, dword ptr [mem_0092521C]
LOOP_TOP:
        mov ecx, dword ptr [esp + 0x14]
        lea eax, [ecx - 0x8]
        cmp eax, 0x40
        ja AFTER_LBL
        xor edx, edx
        mov dl, byte ptr [eax + 0x7541bc]
        jmp dword ptr [edx * 4 + 0x7541a0]
CASE_COPY:
        mov edi, ebp
        or ecx, -1
        xor eax, eax
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        mov esi, edi
        mov edi, dword ptr [esp + 0x18]
        shr ecx, 0x2
        rep movsd
        mov ecx, eax
        and ecx, 0x3
        rep movsb
        mov esi, dword ptr [esp + 0x1c]
        xor edi, edi
        jmp AFTER_LBL
CASE_17:
        lea ecx, [esp + 0x2c]
        push ecx
        push 0xaae640
        jmp CALL_LBL
CASE_23:
        lea edx, [esp + 0x10]
        jmp PUSH_EDX_LBL
CASE_29:
        lea eax, [esp + 0x20]
        push eax
        jmp PUSH_CONST_LBL
CASE_30:
        lea ecx, [esp + 0x24]
        push ecx
        jmp PUSH_CONST_LBL
CASE_37:
        lea edx, [esp + 0x28]
PUSH_EDX_LBL:
        push edx
PUSH_CONST_LBL:
        push 0xaa86a4
CALL_LBL:
        push ebp
        call ebx
        add esp, 0xc
AFTER_LBL:
        cmp dword ptr [esp + 0x14], edi
        je CHECK_LBL
        lea eax, [esp + 0x14]
        push ebp
        push eax
        mov ecx, esi
        call ext_007515F0
        test al, al
        jne LOOP_TOP
FAIL_LBL:
        push ebp
        call ext_006A5C5C
        mov ecx, dword ptr [esp + 0x1c]
        push ecx
        call ext_006A5C5C
        add esp, 0x8
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x24
        ret 0x8
CHECK_LBL:
        mov eax, dword ptr [esp + 0x10]
        cmp eax, edi
        jne S1_LBL
        mov edx, dword ptr [esp + 0x18]
        push edi
        push edx
        lea ecx, [esi + 0x128]
        call ext_00782E70
        cdq
        xor eax, edx
        sub eax, edx
        mov dword ptr [esp + 0x10], eax
S1_LBL:
        mov ecx, dword ptr [esp + 0x38]
        mov esi, 0xaae870
        mov edi, dword ptr [ecx]
        mov ecx, ebp
CMP_LOOP:
        mov bl, byte ptr [ecx]
        mov dl, bl
        cmp bl, byte ptr [esi]
        jne CMP_NEQ
        test dl, dl
        je CMP_EQ
        mov bl, byte ptr [ecx + 0x1]
        mov dl, bl
        cmp bl, byte ptr [esi + 0x1]
        jne CMP_NEQ
        add ecx, 0x2
        add esi, 0x2
        test dl, dl
        jne CMP_LOOP
CMP_EQ:
        xor ecx, ecx
        jmp CMP_DONE
CMP_NEQ:
        sbb ecx, ecx
        sbb ecx, -1
CMP_DONE:
        mov esi, dword ptr [esp + 0x3c]
        test ecx, ecx
        jne TAIL_LBL
        mov edx, dword ptr [esp + 0x38]
        mov ebx, dword ptr [esp + 0x1c]
        push eax
        push edi
        push esi
        push edx
        mov ecx, ebx
        call ext_00754200
        test al, al
        je TAIL_LBL
LOOP2:
        mov eax, dword ptr [esp + 0x10]
        mov ecx, dword ptr [esp + 0x38]
        push eax
        push edi
        push esi
        push ecx
        mov ecx, ebx
        call ext_00754200
        test al, al
        jne LOOP2
TAIL_LBL:
        cmp dword ptr [esp + 0x20], 0x9
        jne END_LBL
        mov ecx, dword ptr [esi]
        mov edx, dword ptr [esp + 0x38]
        lea eax, [esp + 0x38]
        mov dword ptr [esp + 0x38], 0x3
        mov ebx, dword ptr [edx]
        push eax
        push ecx
        mov ecx, esi
        call ext_006D2170
        mov ecx, dword ptr [esi]
        mov edx, dword ptr [esp + 0x10]
        lea eax, [esp + 0x38]
        mov dword ptr [esp + 0x38], edx
        push eax
        push ecx
        mov ecx, esi
        call ext_006D2170
        mov eax, dword ptr [esi]
        lea edx, [esp + 0x38]
        push edx
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0x40], edi
        call ext_006D2170
        mov edx, dword ptr [esi]
        lea ecx, [esp + 0x38]
        dec ebx
        push ecx
        push edx
        mov ecx, esi
        mov dword ptr [esp + 0x40], ebx
        call ext_006D2170
        mov ecx, dword ptr [esi]
        lea eax, [esp + 0x38]
        push eax
        push ecx
        mov ecx, esi
        mov dword ptr [esp + 0x40], edi
        call ext_006D2170
END_LBL:
        push ebp
        call ext_006A5C5C
        mov edx, dword ptr [esp + 0x1c]
        push edx
        call ext_006A5C5C
        add esp, 0x8
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x24
        ret 0x8
    }
}

// [0x0075FE30] sub_0075FE30 (576 bytes)
extern "C" void ext_006D23F0();
extern "C" void ext_006D8520();
extern "C" void ext_006D8550();
extern "C" void ext_006FC930();
extern "C" void ext_006FDF90();
extern "C" void ext_007275F0();
extern "C" void ext_007279A0();
extern "C" void ext_00727C80();
extern "C" void ext_00727FE0();
extern "C" void ext_007283B0();
extern "C" void ext_00728410();
extern "C" void ext_007284D0();

extern "C" __declspec(naked) void __fastcall fn_0075FE30(void* self) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -8
        sub esp, 0ch
        push ebx
        push esi
        mov esi, ecx
        push edi
        push 0aae0f4h
        mov ecx, dword ptr [esi+0ach]
        add ecx, 4
        call ext_007275F0
        mov ecx, dword ptr [esi+0ach]
        add ecx, 4
        call ext_00728410
        mov edi, dword ptr [esi+0ach]
        push 0aacd0ch
        add edi, 4
        mov ecx, edi
        call ext_007275F0
        push 0f0h
        mov ecx, edi
        call ext_00727C80
        mov ecx, edi
        call ext_007283B0
        mov ebx, dword ptr [ebp+8]
        mov ecx, ebx
        call ext_006D8520
        xor edi, edi
        push 5
        push edi
        mov ecx, ebx
        mov dword ptr [esp+18h], eax
        mov dword ptr [esp+14h], edi
        call ext_006FDF90
        test eax, eax
        je L_75FEC2
        push 5
        push edi
        mov ecx, ebx
        call ext_006FDF90
        mov ecx, eax
        call ext_006FC930
        mov eax, dword ptr [eax]
        mov dword ptr [esp+0ch], eax
        mov edi, eax
L_75FEC2:
        mov eax, dword ptr [esp+10h]
        test eax, eax
        je L_76001F
        cmp edi, 1
        je L_760000
        cmp edi, 2
        jne L_76001F
        mov edi, dword ptr [esi+0ach]
        push 0aadc2ch
        add edi, 4
        mov ecx, edi
        call ext_007275F0
        push 0aadfd4h
L_75FEFA:
        mov ecx, edi
        call ext_007279A0
        mov ecx, edi
        call ext_007283B0
        mov ecx, ebx
        call ext_006D8550
        mov ecx, dword ptr [esi+0ach]
        mov edi, eax
        push 0aae03ch
        add ecx, 4
        mov dword ptr [esp+18h], edi
        call ext_007275F0
        test edi, edi
        jle L_75FF79
        mov edi, dword ptr [esp+10h]
        mov ebx, dword ptr [esp+14h]
L_75FF34:
        push 0
        mov ecx, edi
        call ext_006D23F0
        mov ecx, dword ptr [eax+4]
        push ecx
        mov ecx, dword ptr [esi+0ach]
        mov edx, dword ptr [eax]
        add ecx, 4
        push edx
        call ext_00727FE0
        push 1
        mov ecx, edi
        call ext_006D23F0
        mov ecx, dword ptr [eax+4]
        push ecx
        mov ecx, dword ptr [esi+0ach]
        mov edx, dword ptr [eax]
        add ecx, 4
        push edx
        call ext_00727FE0
        add edi, 10h
        dec ebx
        jne L_75FF34
        mov ebx, dword ptr [ebp+8]
L_75FF79:
        mov ecx, dword ptr [esi+0ach]
        add ecx, 4
        call ext_007283B0
        cmp dword ptr [esp+0ch], 2
        jne L_760047
        push 5
        push 0
        mov ecx, ebx
        call ext_006FDF90
        mov ecx, eax
        call ext_006FC930
        mov ebx, dword ptr [eax+20h]
        test ebx, ebx
        je L_760047
        mov ecx, dword ptr [esi+0ach]
        push 0aae048h
        add ecx, 4
        call ext_007275F0
        xor edi, edi
        test ebx, ebx
        jle L_75FFF5
L_75FFC8:
        mov ecx, dword ptr [ebp+8]
        push 5
        push 0
        call ext_006FDF90
        mov ecx, eax
        call ext_006FC930
        mov eax, dword ptr [eax+30h]
        mov ecx, dword ptr [eax+edi*4]
        push ecx
        mov ecx, dword ptr [esi+0ach]
        add ecx, 4
        call ext_00727C80
        inc edi
        cmp edi, ebx
        jl L_75FFC8
L_75FFF5:
        mov ecx, dword ptr [esi+0ach]
        add ecx, 4
        jmp L_760042
L_760000:
        mov edi, dword ptr [esi+0ach]
        push 0aadc2ch
        add edi, 4
        mov ecx, edi
        call ext_007275F0
        push 0aadfe0h
        jmp L_75FEFA
L_76001F:
        mov edi, dword ptr [esi+0ach]
        push 0aadc2ch
        add edi, 4
        mov ecx, edi
        call ext_007275F0
        push 0aaeb2ch
        mov ecx, edi
        call ext_007279A0
        mov ecx, edi
L_760042:
        call ext_007283B0
L_760047:
        mov ecx, dword ptr [esi+0ach]
        add ecx, 4
        call ext_007284D0
        mov ecx, dword ptr [esi+0ach]
        add ecx, 4
        call ext_007283B0
        pop edi
        pop esi
        mov al, 1
        pop ebx
        mov esp, ebp
        pop ebp
        ret 4
    }
}

// [0x007513B0] sub_007513B0 (576 bytes)
extern "C" void ext_006A5C5C();
extern "C" void ext_006A5C62();
extern "C" void ext_007515F0();
extern "C" int mem_009252C4;

extern "C" __declspec(naked) void __fastcall fn_007513B0(void* self, int edx_unused, int a1) {
    __asm {
        sub esp, 8
        push ebp
        push esi
        push edi
        mov esi, ecx
        push 4d8h
        mov dword ptr [esp+14h], esi
        mov dword ptr [esp+10h], 0
        call ext_006A5C62
        mov edi, eax
        mov eax, dword ptr [esi+100h]
        add esp, 4
        test eax, eax
        je l_b1
        push 0
        push eax
        mov eax, dword ptr [esi+0ach]
        push eax
        call dword ptr [mem_009252C4]
        add esp, 0ch
        jmp l_b9e
l_b1:
        lea ecx, [esp+0ch]
        push edi
        push ecx
        mov ecx, dword ptr [esp+18h]
        call ext_007515F0
        test al, al
        je l_fail
        mov eax, dword ptr [esp+0ch]
        test eax, eax
        jne l_b1
        mov esi, 0aae810h
        mov eax, edi
l_c1:
        mov dl, byte ptr [eax]
        mov cl, dl
        cmp dl, byte ptr [esi]
        jne l_c1n
        test cl, cl
        je l_c1z
        mov dl, byte ptr [eax+1]
        mov cl, dl
        cmp dl, byte ptr [esi+1]
        jne l_c1n
        add eax, 2
        add esi, 2
        test cl, cl
        jne l_c1
l_c1z:
        xor eax, eax
        jmp l_c1d
l_c1n:
        sbb eax, eax
        sbb eax, -1
l_c1d:
        test eax, eax
        jne l_b1
        mov ecx, dword ptr [esp+10h]
        lea eax, [esp+0ch]
        push edi
        push eax
        call ext_007515F0
        test al, al
        je l_fail
        cmp dword ptr [esp+0ch], 2
        jne l_b1
        mov esi, 0aae800h
        mov eax, edi
l_c2:
        mov dl, byte ptr [eax]
        mov cl, dl
        cmp dl, byte ptr [esi]
        jne l_c2n
        test cl, cl
        je l_c2z
        mov dl, byte ptr [eax+1]
        mov cl, dl
        cmp dl, byte ptr [esi+1]
        jne l_c2n
        add eax, 2
        add esi, 2
        test cl, cl
        jne l_c2
l_c2z:
        xor eax, eax
        jmp l_c2d
l_c2n:
        sbb eax, eax
        sbb eax, -1
l_c2d:
        test eax, eax
        jne l_b1
l_b9e:
        mov ebp, dword ptr [esp+18h]
l_b9e2:
        mov ecx, dword ptr [esp+10h]
        lea eax, [esp+0ch]
        push edi
        push eax
        call ext_007515F0
        test al, al
        je l_fail
        mov eax, dword ptr [esp+0ch]
        test eax, eax
        jne l_b9e2
        mov esi, 0aae818h
        mov eax, edi
l_c3:
        mov dl, byte ptr [eax]
        mov cl, dl
        cmp dl, byte ptr [esi]
        jne l_c3n
        test cl, cl
        je l_c3z
        mov dl, byte ptr [eax+1]
        mov cl, dl
        cmp dl, byte ptr [esi+1]
        jne l_c3n
        add eax, 2
        add esi, 2
        test cl, cl
        jne l_c3
l_c3z:
        xor eax, eax
        jmp l_c3d
l_c3n:
        sbb eax, eax
        sbb eax, -1
l_c3d:
        test eax, eax
        je l_fail
        mov esi, 0aae868h
        mov eax, edi
l_c4:
        mov dl, byte ptr [eax]
        mov cl, dl
        cmp dl, byte ptr [esi]
        jne l_c4n
        test cl, cl
        je l_c4z
        mov dl, byte ptr [eax+1]
        mov cl, dl
        cmp dl, byte ptr [esi+1]
        jne l_c4n
        add eax, 2
        add esi, 2
        test cl, cl
        jne l_c4
l_c4z:
        xor eax, eax
        jmp l_c4d
l_c4n:
        sbb eax, eax
        sbb eax, -1
l_c4d:
        test eax, eax
        jne l_b9e2
l_c4pre:
        mov ecx, dword ptr [esp+10h]
        lea eax, [esp+0ch]
        push edi
        push eax
        call ext_007515F0
        test al, al
        je l_fail
        mov eax, dword ptr [esp+0ch]
        cmp eax, 2
        je l_g1
        test eax, eax
        jne l_c4pre
        mov esi, 0aae834h
        mov eax, edi
l_c5:
        mov dl, byte ptr [eax]
        mov cl, dl
        cmp dl, byte ptr [esi]
        jne l_c5n
        test cl, cl
        je l_c5z
        mov dl, byte ptr [eax+1]
        mov cl, dl
        cmp dl, byte ptr [esi+1]
        jne l_c5n
        add eax, 2
        add esi, 2
        test cl, cl
        jne l_c5
l_c5z:
        xor eax, eax
        jmp l_c5e
l_g1:
        mov esi, ebp
        mov eax, edi
l_c6:
        mov dl, byte ptr [eax]
        mov cl, dl
        cmp dl, byte ptr [esi]
        jne l_c6n
        test cl, cl
        je l_c6z
        mov dl, byte ptr [eax+1]
        mov cl, dl
        cmp dl, byte ptr [esi+1]
        jne l_c6n
        add eax, 2
        add esi, 2
        test cl, cl
        jne l_c6
l_c6z:
        xor eax, eax
        jmp l_c6d
l_c6n:
        sbb eax, eax
        sbb eax, -1
l_c6d:
        test eax, eax
        je l_c7
        jmp l_b9e2
l_c5n:
        sbb eax, eax
        sbb eax, -1
l_c5e:
        test eax, eax
        je l_fail
        jmp l_b9e2
l_c7:
        push edi
        call ext_006A5C5C
        add esp, 4
        mov al, 1
        pop edi
        pop esi
        pop ebp
        add esp, 8
        ret 4
l_fail:
        push edi
        call ext_006A5C5C
        add esp, 4
        xor al, al
        pop edi
        pop esi
        pop ebp
        add esp, 8
        ret 4
    }
}

// [0x0075C4F0] sub_0075C4F0 (560 bytes)
extern "C" void ext_006BADB0();
extern "C" void ext_006C2BB0();
extern "C" void ext_006C2CB0();
extern "C" void ext_006C2D30();
extern "C" void ext_006C2E30();
extern "C" void ext_006D80A0();
extern "C" void ext_007275F0();
extern "C" void ext_007279A0();
extern "C" void ext_00727FE0();
extern "C" void ext_007283B0();
extern "C" void ext_0075C720();
extern "C" __declspec(naked) void __fastcall fn_0075C4F0(void* self, int edx_unused, void* a1) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -8
        sub esp, 0x74
        push ebx
        mov ebx, dword ptr [ebp + 0x8]
        push esi
        mov esi, ecx
        push edi
        mov ecx, ebx
        mov dword ptr [esp + 0x10], esi
        call ext_006C2BB0
        test eax, eax
        je L_c6c4
        mov ecx, ebx
        call ext_006C2BB0
        mov ecx, eax
        call ext_006BADB0
        mov esi, dword ptr [esi + 0xac]
        push 0xaadaf0
        add esi, 0x4
        mov edi, eax
        mov ecx, esi
        call ext_007275F0
        push edi
        mov ecx, esi
        call ext_007279A0
        mov ecx, esi
        call ext_007283B0
        lea eax, [esp + 0x60]
        mov ecx, ebx
        push eax
        call ext_006C2CB0
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [esp + 0x18], ecx
        mov dword ptr [esp + 0x1c], edx
        mov ecx, dword ptr [eax + 0x8]
        mov edx, dword ptr [eax + 0xc]
        mov dword ptr [esp + 0x20], ecx
        mov dword ptr [esp + 0x24], edx
        mov ecx, dword ptr [eax + 0x10]
        mov edx, dword ptr [eax + 0x14]
        mov dword ptr [esp + 0x28], ecx
        lea ecx, [esp + 0x60]
        mov dword ptr [esp + 0x2c], edx
        call ext_006D80A0
        lea eax, [esp + 0x60]
        mov ecx, ebx
        push eax
        call ext_006C2E30
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [esp + 0x48], ecx
        mov dword ptr [esp + 0x4c], edx
        mov ecx, dword ptr [eax + 0x8]
        mov edx, dword ptr [eax + 0xc]
        mov dword ptr [esp + 0x50], ecx
        mov dword ptr [esp + 0x54], edx
        mov ecx, dword ptr [eax + 0x10]
        mov edx, dword ptr [eax + 0x14]
        mov dword ptr [esp + 0x58], ecx
        lea ecx, [esp + 0x60]
        mov dword ptr [esp + 0x5c], edx
        call ext_006D80A0
        push 0x3eb0c6f7
        lea eax, [esp + 0x34]
        push 0xa0b5ed8d
        lea ecx, [esp + 0x20]
        push eax
        push ecx
        mov dword ptr [esp + 0x50], 0x0
        mov dword ptr [esp + 0x54], 0x0
        mov dword ptr [esp + 0x48], 0x0
        mov dword ptr [esp + 0x4c], 0x0
        mov dword ptr [esp + 0x40], 0x0
        mov dword ptr [esp + 0x44], 0x0
        call ext_0075C720
        add esp, 0x10
        test eax, eax
        je L_c65c
        mov edx, dword ptr [esp + 0x10]
        push 0xaadadc
        mov esi, dword ptr [edx + 0xac]
        add esi, 0x4
        mov ecx, esi
        call ext_007275F0
        lea edi, [esp + 0x18]
        mov dword ptr [esp + 0x14], 0x3
    L_loop1:
        mov eax, dword ptr [edi + 0x4]
        mov ecx, dword ptr [edi]
        push eax
        push ecx
        mov ecx, esi
        call ext_00727FE0
        mov eax, dword ptr [esp + 0x14]
        add edi, 0x8
        dec eax
        mov dword ptr [esp + 0x14], eax
        jne L_loop1
        mov ecx, esi
        call ext_007283B0
    L_c65c:
        push 0x3eb0c6f7
        lea edx, [esp + 0x34]
        push 0xa0b5ed8d
        lea eax, [esp + 0x50]
        push edx
        push eax
        call ext_0075C720
        add esp, 0x10
        test eax, eax
        je L_c6c4
        mov ecx, dword ptr [esp + 0x10]
        push 0xaadac8
        mov esi, dword ptr [ecx + 0xac]
        add esi, 0x4
        mov ecx, esi
        call ext_007275F0
        lea edi, [esp + 0x48]
        mov dword ptr [esp + 0x14], 0x3
    L_loop2:
        mov edx, dword ptr [edi + 0x4]
        mov eax, dword ptr [edi]
        push edx
        push eax
        mov ecx, esi
        call ext_00727FE0
        mov eax, dword ptr [esp + 0x14]
        add edi, 0x8
        dec eax
        mov dword ptr [esp + 0x14], eax
        jne L_loop2
        mov ecx, esi
        call ext_007283B0
    L_c6c4:
        mov ecx, ebx
        call ext_006C2D30
        test eax, eax
        je L_c707
        mov ecx, ebx
        call ext_006C2D30
        mov ecx, eax
        call ext_006BADB0
        mov ecx, dword ptr [esp + 0x10]
        push 0xaadab8
        mov edi, eax
        mov esi, dword ptr [ecx + 0xac]
        add esi, 0x4
        mov ecx, esi
        call ext_007275F0
        push edi
        mov ecx, esi
        call ext_007279A0
        mov ecx, esi
        call ext_007283B0
    L_c707:
        pop edi
        pop esi
        mov al, 0x1
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0x4
    }
}

// [0x00757590] sub_00757590 (592 bytes)
extern "C" int mem_00AAE950;
extern "C" int mem_00AAE8FC;
extern "C" int mem_00AACD0C;
extern "C" int mem_00AAD48C;
extern "C" int mem_00AAD484;
extern "C" int mem_00AAD478;
extern "C" int mem_00AAD468;
extern "C" void ext_006BC7D0();
extern "C" void ext_006D23F0();
extern "C" void ext_006E87A0();
extern "C" void ext_006E8800();
extern "C" void ext_006E8810();
extern "C" void ext_006E8820();
extern "C" void ext_007275F0();
extern "C" void ext_00727C80();
extern "C" void ext_00727FE0();
extern "C" void ext_007283B0();
extern "C" void ext_007287E0();
extern "C" __declspec(naked) void __fastcall fn_00757590(void* self) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -8
        sub esp, 0xc
        push ebx
        mov ebx, dword ptr [ebp + 8]
        push esi
        mov esi, ecx
        push edi
        mov ecx, ebx
        call ext_006BC7D0
        mov ecx, eax
        call ext_006E8810
        mov ecx, dword ptr [esi + 0xac]
        push offset mem_00AAE950
        add ecx, 4
        mov dword ptr [esp + 0x14], eax
        call ext_007287E0
        mov ecx, dword ptr [esi + 0xac]
        push offset mem_00AAE8FC
        add ecx, 4
        call ext_007287E0
        mov edi, dword ptr [esi + 0xac]
        push offset mem_00AACD0C
        add edi, 4
        mov ecx, edi
        call ext_007275F0
        push 0x6c
        mov ecx, edi
        call ext_00727C80
        mov ecx, edi
        call ext_007283B0
        mov edi, dword ptr [esi + 0xac]
        push offset mem_00AAD48C
        add edi, 4
        mov ecx, edi
        call ext_007275F0
        mov eax, dword ptr [esp + 0x10]
        mov ecx, edi
        push eax
        call ext_00727C80
        mov ecx, edi
        call ext_007283B0
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [esp + 0xc], 0
        test eax, eax
        jle L_loop_end
L_loop:
        mov ecx, dword ptr [esp + 0xc]
        push ecx
        mov ecx, ebx
        call ext_006BC7D0
        mov ecx, eax
        call ext_006E8820
        mov ecx, dword ptr [esi + 0xac]
        push offset mem_00AAD484
        add ecx, 4
        mov edi, eax
        call ext_007275F0
        lea ebx, [edi + 8]
        push 0
        mov ecx, ebx
        call ext_006D23F0
        mov edx, dword ptr [eax + 4]
        mov ecx, dword ptr [esi + 0xac]
        push edx
        add ecx, 4
        mov eax, dword ptr [eax]
        push eax
        call ext_00727FE0
        push 1
        mov ecx, ebx
        call ext_006D23F0
        mov ecx, dword ptr [eax + 4]
        push ecx
        mov ecx, dword ptr [esi + 0xac]
        mov edx, dword ptr [eax]
        add ecx, 4
        push edx
        call ext_00727FE0
        push 2
        mov ecx, ebx
        call ext_006D23F0
        mov ecx, dword ptr [eax + 4]
        push ecx
        mov ecx, dword ptr [esi + 0xac]
        mov edx, dword ptr [eax]
        add ecx, 4
        push edx
        call ext_00727FE0
        lea ebx, [edi + 0x28]
        push 0
        mov ecx, ebx
        call ext_006D23F0
        mov ecx, dword ptr [eax + 4]
        push ecx
        mov ecx, dword ptr [esi + 0xac]
        mov edx, dword ptr [eax]
        add ecx, 4
        push edx
        call ext_00727FE0
        push 1
        mov ecx, ebx
        call ext_006D23F0
        mov ecx, dword ptr [eax + 4]
        push ecx
        mov ecx, dword ptr [esi + 0xac]
        mov edx, dword ptr [eax]
        add ecx, 4
        push edx
        call ext_00727FE0
        push 2
        mov ecx, ebx
        call ext_006D23F0
        mov ecx, dword ptr [eax + 4]
        push ecx
        mov ecx, dword ptr [esi + 0xac]
        mov edx, dword ptr [eax]
        add ecx, 4
        push edx
        call ext_00727FE0
        mov ecx, dword ptr [esi + 0xac]
        xor eax, eax
        mov al, byte ptr [edi]
        add ecx, 4
        push eax
        call ext_00727C80
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 4
        call ext_007283B0
        mov eax, dword ptr [esp + 0xc]
        mov ecx, dword ptr [esp + 0x10]
        mov ebx, dword ptr [ebp + 8]
        inc eax
        cmp eax, ecx
        mov dword ptr [esp + 0xc], eax
        jl L_loop
L_loop_end:
        mov ecx, ebx
        call ext_006BC7D0
        mov ecx, eax
        call ext_006E87A0
        mov edi, dword ptr [esi + 0xac]
        and eax, 0xff
        add edi, 4
        push offset mem_00AAD478
        mov ecx, edi
        mov dword ptr [esp + 0x14], eax
        call ext_007275F0
        mov ecx, dword ptr [esp + 0x10]
        push ecx
        mov ecx, edi
        call ext_00727C80
        mov ecx, edi
        call ext_007283B0
        mov ecx, ebx
        call ext_006BC7D0
        mov ecx, eax
        call ext_006E8800
        mov esi, dword ptr [esi + 0xac]
        push offset mem_00AAD468
        fstp qword ptr [esp + 0x14]
        add esi, 4
        mov ecx, esi
        call ext_007275F0
        mov edx, dword ptr [esp + 0x14]
        mov eax, dword ptr [esp + 0x10]
        push edx
        push eax
        mov ecx, esi
        call ext_00727FE0
        mov ecx, esi
        call ext_007283B0
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 4
    }
}

// [0x00754870] sub_00754870 (640 bytes)
extern "C" void ext_006D36F0();
extern "C" void ext_006D37E0();
extern "C" void ext_006D7970();
extern "C" void ext_006D7ED0();
extern "C" void ext_006D80A0();
extern "C" void ext_006D80B0();
extern "C" void ext_006D8580();
extern "C" void ext_006DEEC0();
extern "C" void ext_006E7460();
extern "C" void ext_006FDB00();
extern "C" void ext_0070C0E0();
extern "C" void ext_00754AF0();
extern "C" void ext_0077FB40();
extern "C" void ext_007873F0();
extern "C" void ext_006B9D70();
extern "C" void ext_006B9D80();
extern "C" void ext_006BA260();

extern "C" __declspec(naked) void __fastcall fn_00754870(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        push -1
        push 08bfa16h
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        sub esp, 47ch
        mov eax, [esp+48ch]
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov ecx, [eax]
        xor eax, eax
        mov [esp+10h], ecx
        mov ecx, 0ffh
        lea edi, [esp+90h]
        mov dword ptr [esp+8ch], 0
        rep stosd
        mov ecx, [esi+4]
        mov [esp+14h], esi
        call ext_006D36F0
        mov edi, eax
        test edi, edi
        mov [esp+1ch], edi
        jne L_ok
L_fail:
        xor eax, eax
        jmp L_end
L_ok:
        mov edx, [esp+4a0h]
        mov ecx, [esp+10h]
        push ecx
        mov ecx, edi
        mov eax, [edx+10h]
        mov ebx, 2
        mov ebp, [eax]
        call ext_006D7970
        test ebp, ebp
        je L_a
        push 3
        mov ecx, edi
        call ext_006D8580
L_a:
        mov eax, [esp+10h]
        test eax, eax
        jle L_b
        mov edx, eax
        xor ebp, ebp
        mov [esp+10h], edx
L_c:
        mov ecx, [esp+49ch]
        mov eax, ebp
        mov edx, [ecx+10h]
        mov ecx, edi
        add eax, edx
        push eax
        call ext_006DEEC0
        mov ecx, eax
        add ecx, ebp
        call ext_007873F0
        mov eax, [esp+10h]
        add ebp, 20h
        dec eax
        mov [esp+10h], eax
        jne L_c
L_b:
        mov edx, [esp+4a0h]
        mov eax, [edx]
        cmp eax, 2
        mov [esp+18h], eax
        jle L_ret
L_loop:
        mov eax, [esp+4a0h]
        mov ecx, ebx
        inc ebx
        mov eax, [eax+10h]
        mov ecx, [eax+4*ecx]
        cmp ecx, 2
        mov [esp+10h], ecx
        jl L_fail
        mov ecx, ebx
        inc ebx
        mov ebp, [eax+4*ecx]
        test ebp, ebp
        jle L_skip
        mov eax, [esi+4*ebp+13ch]
        test eax, eax
        jne L_have
        lea ecx, [esp+20h]
        call ext_0077FB40
        push 0aad40ch
        lea ecx, [esp+44h]
        mov dword ptr [esp+498h], 0
        call ext_006B9D80
        mov eax, [esi+0fch]
        mov byte ptr [esp+494h], 1
        push eax
        lea ecx, [eax+1]
        mov [esi+0fch], ecx
        lea ecx, [esp+44h]
        call ext_006BA260
        lea ecx, [esp+40h]
        call ext_006E7460
        mov ecx, [esi+4]
        push eax
        call ext_006D37E0
        lea edx, [esp+20h]
        mov ecx, esi
        push edx
        push ebp
        mov [esi+4*ebp+13ch], eax
        call ext_00754AF0
        mov eax, [esp+14h]
        sub esp, 20h
        mov ecx, 8
        lea esi, [esp+40h]
        mov edi, esp
        rep movsd
        mov ecx, [eax+4*ebp+13ch]
        call ext_0070C0E0
        lea ecx, [esp+40h]
        mov byte ptr [esp+494h], 0
        call ext_006B9D70
        lea ecx, [esp+20h]
        mov dword ptr [esp+494h], 0ffffffffh
        call ext_006D80A0
        mov esi, [esp+14h]
        mov edi, [esp+1ch]
L_have:
        mov ecx, [esi+4*ebp+13ch]
        push 0
        push ecx
        mov ecx, edi
        call ext_006FDB00
        test eax, eax
        jl L_skip
        mov [esp+4*ebp+8ch], eax
L_skip:
        mov edx, [esp+4*ebp+8ch]
        push -1
        push -1
        push edx
        mov ecx, edi
        call ext_006D7ED0
        mov ebp, [esp+10h]
        test ebp, ebp
        jle L_d
L_e:
        mov ecx, [esp+4a0h]
        lea eax, [4*ebx]
        push -1
        inc ebx
        mov edx, [ecx+10h]
        mov ecx, edi
        mov eax, [edx+eax]
        push eax
        call ext_006D80B0
        dec ebp
        jne L_e
        mov ebp, [esp+10h]
L_d:
        cmp ebp, 2
        jne L_f
        mov ecx, [esp+4a0h]
        push -1
        mov edx, [ecx+10h]
        mov ecx, edi
        mov eax, [edx+4*ebx-8]
        push eax
        call ext_006D80B0
L_f:
        mov ecx, edi
        call ext_006D80A0
        cmp ebx, [esp+18h]
        jl L_loop
L_ret:
        mov eax, edi
L_end:
        mov ecx, [esp+48ch]
        pop edi
        pop esi
        pop ebp
        mov fs:[0], ecx
        pop ebx
        add esp, 488h
        ret 8
    }
}

// [0x0075F580] sub_0075F580 (656 bytes)
extern "C" void ext_006D80A0();
extern "C" void ext_007008B0();
extern "C" void ext_00700970();
extern "C" void ext_00700990();
extern "C" void ext_007009E0();
extern "C" void ext_00700A00();
extern "C" void ext_00700A20();
extern "C" void ext_007275F0();
extern "C" void ext_007279A0();
extern "C" void ext_00727C80();
extern "C" void ext_00727FE0();
extern "C" void ext_007283B0();
extern "C" void ext_0077FB40();

extern "C" __declspec(naked) void __fastcall fn_0075F580(void* self, int edx_unused, int a1) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -0x8
        push -1
        push 0x008BFD88
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x2c
        push ebx
        push esi
        mov esi, ecx
        push edi
        push 0x00AA8E24
        mov edi, dword ptr [esi + 0xac]
        add edi, 0x4
        mov ecx, edi
        call ext_007275F0
        push 0x00AABA0C
        mov ecx, edi
        call ext_007279A0
        mov ecx, edi
        call ext_007283B0
        mov edi, dword ptr [esi + 0xac]
        push 0x00AAEB08
        add edi, 0x4
        mov ecx, edi
        call ext_007275F0
        push 0x00AABA0C
        mov ecx, edi
        call ext_007279A0
        mov ecx, edi
        call ext_007283B0
        mov edi, dword ptr [esi + 0xac]
        push 0x00AAE104
        add edi, 0x4
        mov ecx, edi
        call ext_007275F0
        push 0x7b
        mov ecx, edi
        call ext_00727C80
        mov ecx, edi
        call ext_007283B0
        mov edi, dword ptr [esi + 0xac]
        push 0x00AADFA4
        add edi, 0x4
        mov ecx, edi
        call ext_007275F0
        push 0xca
        mov ecx, edi
        call ext_00727C80
        mov ecx, edi
        call ext_007283B0
        mov edi, dword ptr [ebp + 0x8]
        mov ecx, edi
        call ext_00700970
        mov ebx, dword ptr [esi + 0xac]
        push 0x00AAB9D8
        add ebx, 0x4
        mov dword ptr [esp + 0x10], eax
        mov ecx, ebx
        call ext_007275F0
        mov eax, dword ptr [esp + 0xc]
        mov ecx, ebx
        push eax
        call ext_00727C80
        mov ecx, ebx
        call ext_007283B0
        mov ecx, edi
        call ext_007008B0
        mov ebx, dword ptr [esi + 0xac]
        and eax, 0xff
        add ebx, 0x4
        push 0x00AADF8C
        mov ecx, ebx
        mov dword ptr [esp + 0x10], eax
        call ext_007275F0
        mov ecx, dword ptr [esp + 0xc]
        push ecx
        mov ecx, ebx
        call ext_00727C80
        mov ecx, ebx
        call ext_007283B0
        mov ecx, dword ptr [esi + 0xac]
        push 0x00AA8CEC
        add ecx, 0x4
        call ext_007275F0
        lea ecx, [esp + 0x18]
        call ext_0077FB40
        lea edx, [esp + 0x18]
        mov ecx, edi
        push edx
        mov dword ptr [esp + 0x44], 0x0
        call ext_00700990
        mov eax, dword ptr [esp + 0x1c]
        mov ecx, dword ptr [esp + 0x18]
        push eax
        push ecx
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_00727FE0
        mov edx, dword ptr [esp + 0x24]
        mov eax, dword ptr [esp + 0x20]
        mov ecx, dword ptr [esi + 0xac]
        push edx
        push eax
        add ecx, 0x4
        call ext_00727FE0
        mov ecx, dword ptr [esp + 0x2c]
        mov edx, dword ptr [esp + 0x28]
        push ecx
        mov ecx, dword ptr [esi + 0xac]
        push edx
        add ecx, 0x4
        call ext_00727FE0
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_007283B0
        mov ecx, edi
        call ext_007009E0
        mov ebx, dword ptr [esi + 0xac]
        push 0x00AA8CF4
        fstp qword ptr [esp + 0x10]
        add ebx, 0x4
        mov ecx, ebx
        call ext_007275F0
        mov eax, dword ptr [esp + 0x10]
        mov ecx, dword ptr [esp + 0xc]
        push eax
        push ecx
        mov ecx, ebx
        call ext_00727FE0
        mov ecx, ebx
        call ext_007283B0
        mov ecx, edi
        call ext_00700A00
        mov ebx, dword ptr [esi + 0xac]
        push 0x00AADF98
        fstp qword ptr [esp + 0x10]
        add ebx, 0x4
        mov ecx, ebx
        call ext_007275F0
        mov edx, dword ptr [esp + 0x10]
        mov eax, dword ptr [esp + 0xc]
        push edx
        push eax
        mov ecx, ebx
        call ext_00727FE0
        mov ecx, ebx
        call ext_007283B0
        mov ecx, edi
        call ext_00700A20
        mov esi, dword ptr [esi + 0xac]
        push 0x00AA8D0C
        fstp qword ptr [esp + 0x10]
        add esi, 0x4
        mov ecx, esi
        call ext_007275F0
        mov ecx, dword ptr [esp + 0x10]
        mov edx, dword ptr [esp + 0xc]
        push ecx
        push edx
        mov ecx, esi
        call ext_00727FE0
        mov ecx, esi
        call ext_007283B0
        lea ecx, [esp + 0x18]
        mov dword ptr [esp + 0x40], 0xffffffff
        call ext_006D80A0
        mov al, 0x1
        mov ecx, dword ptr [esp + 0x38]
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0x4
    }
}

// [0x00755630] sub_00755630 (617 bytes)
// Callee externs live below the marker: merge appends new preamble decls into a
// slice aliasing the shard body (tools/work/isolate.go), corrupting the next function.
extern "C" void ext_006B9D10();
extern "C" void ext_006E7410();
extern "C" void ext_006E7460();
extern "C" void ext_006FE2A0();
extern "C" void ext_006FEFF0();
extern "C" void ext_00723640();
extern "C" void ext_00728D40();
extern "C" void ext_00728D50();
extern "C" void ext_00788C70();
extern "C" void ext_0079BE90();
extern "C" void ext_0079C210();
// Naked: function-level SEH frame (fs:[0] chain, scope table 0x8c11d3) and
// state-numbered cleanup of local objects make C++03 codegen mismatch.
extern "C" __declspec(naked) void __fastcall fn_00755630(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -0x1
        push 0x8c11d3
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x1c0
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0xac]
        test eax, eax
        jne L_566c
        call ext_0079BE90
        push 0x1
        mov ecx, eax
        mov dword ptr [esi + 0xac], eax
        call ext_0079C210
    L_566c:
        lea ecx, [esp + 0xa0]
        call ext_006B9D10
        lea ecx, [esp + 0xec]
        mov dword ptr [esp + 0x1cc], 0x0
        call ext_006B9D10
        lea ecx, [esp + 0x150]
        mov dword ptr [esp + 0x1cc], 0x1
        call ext_00788C70
        lea ecx, [esp + 0x16c]
        call ext_006B9D10
        lea eax, [esp + 0x4]
        mov dword ptr [esp + 0x1cc], 0x2
        push eax
        mov byte ptr [esp + 0xa0], 0x0
        mov byte ptr [esp + 0x150], 0x0
        mov dword ptr [esp + 0x1bc], 0x16a8
        call ext_006FEFF0
        add esp, 0x4
        mov ecx, dword ptr [esp + 0x1d4]
        mov byte ptr [esp + 0x1cc], 0x3
        push ecx
        lea ecx, [esp + 0x8]
        call ext_006E7460
        lea edx, [esp + 0x54]
        push eax
        push edx
        call ext_006FE2A0
        add esp, 0xc
        mov eax, dword ptr [esi + 0xb8]
        mov byte ptr [esp + 0x1cc], 0x4
        cmp eax, 0x1
        je L_5728
        cmp eax, 0x2
        je L_5728
        xor ecx, ecx
        jmp L_572d
    L_5728:
        mov ecx, 0x1
    L_572d:
        cmp eax, 0x2
        lea edx, [esp + 0x9c]
        sete al
        push edx
        push eax
        push ecx
        lea ecx, [esp + 0x5c]
        call ext_006E7460
        mov ecx, dword ptr [esi + 0xac]
        push eax
        add ecx, 0x4
        call ext_00723640
        test al, al
        jne L_5818
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_00728D40
        test eax, eax
        je L_5794
        mov ecx, dword ptr [esi + 0xac]
        cmp eax, 0x4
        je L_5787
        add ecx, 0x4
        call ext_00728D50
        push eax
        push 0x5
        jmp L_57a5
    L_5787:
        add ecx, 0x4
        call ext_00728D50
        push eax
        push 0x2
        jmp L_57a5
    L_5794:
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_00728D50
        push eax
        push 0x0
    L_57a5:
        lea ecx, [esi + 0x8]
        call ext_006E7410
        lea ecx, [esp + 0x50]
        mov byte ptr [esp + 0x1cc], 0x3
        call ext_006B9D70
        lea ecx, [esp + 0x4]
        mov byte ptr [esp + 0x1cc], 0x2
        call ext_006B9D70
        lea ecx, [esp + 0x16c]
        mov dword ptr [esp + 0x1cc], 0x5
        call ext_006B9D70
        lea ecx, [esp + 0xec]
        mov dword ptr [esp + 0x1cc], 0x6
        call ext_006B9D70
        lea ecx, [esp + 0xa0]
        mov dword ptr [esp + 0x1cc], 0xffffffff
        call ext_006B9D70
        xor al, al
        jmp L_5881
    L_5818:
        lea ecx, [esp + 0x50]
        mov byte ptr [esp + 0x1cc], 0x3
        call ext_006B9D70
        lea ecx, [esp + 0x4]
        mov byte ptr [esp + 0x1cc], 0x2
        call ext_006B9D70
        lea ecx, [esp + 0x16c]
        mov dword ptr [esp + 0x1cc], 0x7
        call ext_006B9D70
        lea ecx, [esp + 0xec]
        mov dword ptr [esp + 0x1cc], 0x8
        call ext_006B9D70
        lea ecx, [esp + 0xa0]
        mov dword ptr [esp + 0x1cc], 0xffffffff
        call ext_006B9D70
        mov al, 0x1
    L_5881:
        mov ecx, dword ptr [esp + 0x1c4]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x1cc
        ret 0x4
    }
}

// [0x00757180] sub_00757180 (608 bytes)
extern "C" void ext_006BC7D0();
extern "C" void ext_006D80A0();
extern "C" void ext_006E8610();
extern "C" void ext_006E8670();
extern "C" void ext_006E86B0();
extern "C" void ext_006E86E0();
extern "C" void ext_006E8740();
extern "C" void ext_006E8780();
extern "C" void ext_007275F0();
extern "C" void ext_00727C80();
extern "C" void ext_00727FE0();
extern "C" void ext_007283B0();
extern "C" void ext_00728410();
extern "C" void ext_007284D0();
extern "C" __declspec(naked) void __fastcall fn_00757180(void* self, int edx_unused, int a1) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -8
        push -1
        push 0x8bfd88
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x2c
        push ebx
        push esi
        mov esi, ecx
        push edi
        push 0xaad510
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_007275F0
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_00728410
        mov edi, dword ptr [ebp + 0x8]
        mov ecx, edi
        call ext_006BC7D0
        mov ecx, eax
        call ext_006E8610
        mov ebx, dword ptr [esi + 0xac]
        and eax, 0xff
        add ebx, 0x4
        push 0xaad504
        mov ecx, ebx
        mov dword ptr [esp + 0x10], eax
        call ext_007275F0
        mov eax, dword ptr [esp + 0xc]
        mov ecx, ebx
        push eax
        call ext_00727C80
        mov ecx, ebx
        call ext_007283B0
        mov ecx, edi
        call ext_006BC7D0
        mov ecx, eax
        call ext_006E86B0
        mov ebx, dword ptr [esi + 0xac]
        push 0xaad4fc
        add ebx, 0x4
        mov dword ptr [esp + 0x10], eax
        mov ecx, ebx
        call ext_007275F0
        mov ecx, dword ptr [esp + 0xc]
        push ecx
        mov ecx, ebx
        call ext_00727C80
        mov ecx, ebx
        call ext_007283B0
        mov ecx, edi
        call ext_006BC7D0
        mov ecx, eax
        call ext_006E86E0
        mov ebx, dword ptr [esi + 0xac]
        push 0xaad4f0
        fstp qword ptr [esp + 0x10]
        add ebx, 0x4
        mov ecx, ebx
        call ext_007275F0
        mov edx, dword ptr [esp + 0x10]
        mov eax, dword ptr [esp + 0xc]
        push edx
        push eax
        mov ecx, ebx
        call ext_00727FE0
        mov ecx, ebx
        call ext_007283B0
        mov ecx, edi
        call ext_006BC7D0
        mov ecx, eax
        call ext_006E8740
        mov ebx, dword ptr [esi + 0xac]
        push 0xaad4e4
        fstp qword ptr [esp + 0x10]
        add ebx, 0x4
        mov ecx, ebx
        call ext_007275F0
        mov ecx, dword ptr [esp + 0x10]
        mov edx, dword ptr [esp + 0xc]
        push ecx
        push edx
        mov ecx, ebx
        call ext_00727FE0
        mov ecx, ebx
        call ext_007283B0
        mov ecx, edi
        call ext_006BC7D0
        mov ecx, eax
        call ext_006E8780
        mov ebx, dword ptr [esi + 0xac]
        push 0xaad4dc
        fstp qword ptr [esp + 0x10]
        add ebx, 0x4
        mov ecx, ebx
        call ext_007275F0
        mov eax, dword ptr [esp + 0x10]
        mov ecx, dword ptr [esp + 0xc]
        push eax
        push ecx
        mov ecx, ebx
        call ext_00727FE0
        mov ecx, ebx
        call ext_007283B0
        mov ecx, dword ptr [esi + 0xac]
        push 0xaad4d0
        add ecx, 0x4
        call ext_007275F0
        lea edx, [esp + 0x18]
        mov ecx, edi
        push edx
        call ext_006BC7D0
        mov ecx, eax
        call ext_006E8670
        mov eax, dword ptr [esp + 0x1c]
        mov ecx, dword ptr [esp + 0x18]
        push eax
        push ecx
        mov ecx, dword ptr [esi + 0xac]
        mov dword ptr [esp + 0x48], 0
        add ecx, 0x4
        call ext_00727FE0
        mov edx, dword ptr [esp + 0x24]
        mov eax, dword ptr [esp + 0x20]
        mov ecx, dword ptr [esi + 0xac]
        push edx
        push eax
        add ecx, 0x4
        call ext_00727FE0
        mov ecx, dword ptr [esp + 0x2c]
        mov edx, dword ptr [esp + 0x28]
        push ecx
        mov ecx, dword ptr [esi + 0xac]
        push edx
        add ecx, 0x4
        call ext_00727FE0
        mov ecx, dword ptr [esi + 0xac]
        push 0x3ff00000
        push 0x0
        add ecx, 0x4
        call ext_00727FE0
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_007283B0
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_007284D0
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_007283B0
        lea ecx, [esp + 0x18]
        mov dword ptr [esp + 0x40], 0xffffffff
        call ext_006D80A0
        mov ecx, dword ptr [esp + 0x38]
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0x4
    }
}

// [0x0075AFE0] sub_0075AFE0 (816 bytes)
extern "C" void ext_008BFC69();
extern "C" void ext_00726550();
extern "C" void ext_007275F0();
extern "C" void ext_007279A0();
extern "C" void ext_00727C80();
extern "C" void ext_007283B0();
extern "C" void ext_007285D0();
extern "C" void ext_0072BF40();
extern "C" void ext_0072BF70();
extern "C" void ext_0072C050();
extern "C" void ext_0072C060();
extern "C" void ext_0072C110();
extern "C" void ext_0072C870();
extern "C" void ext_0072CB00();
extern "C" void ext_006B9D80();
extern "C" void ext_006E7460();
extern "C" int mem_00AACD0C;
extern "C" int mem_00AAD8DC;
extern "C" int mem_00AAD8C8;
extern "C" int mem_00AAD8BC;
extern "C" int mem_00AAD8A8;
extern "C" int mem_00AAD8A0;
extern "C" __declspec(naked) void __fastcall fn_0075AFE0(void* self) {
    __asm {
        push -1
        push offset ext_008BFC69
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x10c
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        lea ecx, [esp+0x1c]
        call ext_0072BF40
        xor edi, edi
        push 1
        lea ecx, [esp+0x20]
        mov dword ptr [esp+0x128], edi
        call ext_0072C050
        mov ebp, dword ptr [esp+0x12c]
        sub esp, 0x4c
        mov ecx, esp
        mov dword ptr [esp+0x60], esp
        push ebp
        call ext_006B9D20
        lea ecx, [esp+0x68]
        call ext_0072C060
        mov ebx, dword ptr [esp+0x134]
        mov al, byte ptr [esp+0x130]
        test al, al
        mov byte ptr [ebx], 0
        je L_a2
        mov eax, dword ptr [esi+0xac]
        mov cl, byte ptr [eax+0x19]
        test cl, cl
        je L_a2
        mov al, byte ptr [esp+0x80]
        mov byte ptr [esp+0x13], 1
        test al, al
        jne L_d4
    L_6f:
        mov eax, dword ptr [esi+4]
        cmp edi, dword ptr [eax+0x16c]
        jge L_d4
        mov ecx, dword ptr [eax+0x17c]
        lea edx, [esp+0x1c]
        push edx
        push ebp
        mov ecx, dword ptr [ecx+edi*4]
        push 0
        call ext_0072C110
        test al, al
        jne L_a9
        mov al, byte ptr [esp+0x80]
        inc edi
        test al, al
        je L_6f
        jmp L_d4
    L_a2:
        mov byte ptr [esp+0x13], 0
        jmp L_d4
    L_a9:
        mov al, byte ptr [esp+0x81]
        test al, al
        je L_d4
        lea eax, [esp+0x1c]
        push eax
        push 1
        sub esp, 0x4c
        mov ecx, esp
        mov dword ptr [esp+0x68], esp
        push ebp
        call ext_006B9D20
        call ext_0072C870
        add esp, 0x54
        mov byte ptr [ebx], al
    L_d4:
        mov ecx, ebp
        call ext_006E7460
        mov ecx, dword ptr [esi+0xac]
        push eax
        add ecx, 4
        call ext_00726550
        push eax
        lea ecx, [esp+0x88]
        call ext_006B9D80
        mov al, byte ptr [esp+0x13]
        mov byte ptr [esp+0x124], 1
        test al, al
        je L_1c0
        mov edi, dword ptr [esi+0xac]
        push offset mem_00AACD0C
        add edi, 4
        mov ecx, edi
        call ext_007275F0
        push 0x65
        mov ecx, edi
        call ext_00727C80
        mov ecx, edi
        call ext_007283B0
        mov edi, dword ptr [esi+0xac]
        mov cl, byte ptr [esp+0x30]
        add edi, 4
        mov byte ptr [esp+0x14], cl
        push offset mem_00AAD8DC
        mov ecx, edi
        call ext_007275F0
        mov edx, dword ptr [esp+0x14]
        mov ecx, edi
        and edx, 0xff
        push edx
        call ext_00727C80
        mov ecx, edi
        call ext_007283B0
        lea eax, [esp+0xd0]
        lea ecx, [esp+0x1c]
        push eax
        call ext_0072CB00
        mov ecx, eax
        mov byte ptr [esp+0x124], 2
        call ext_006E7460
        mov edi, dword ptr [esi+0xac]
        push offset mem_00AAD8C8
        add edi, 4
        mov ebx, eax
        mov ecx, edi
        call ext_007275F0
        push ebx
        mov ecx, edi
        call ext_007279A0
        mov ecx, edi
        call ext_007283B0
        lea ecx, [esp+0xd0]
        mov byte ptr [esp+0x124], 1
        call ext_006B9D70
    L_1c0:
        mov ecx, ebp
        call ext_006E7460
        mov edi, dword ptr [esi+0xac]
        push offset mem_00AAD8BC
        add edi, 4
        mov ebx, eax
        mov ecx, edi
        call ext_007275F0
        push ebx
        mov ecx, edi
        call ext_007279A0
        mov ecx, edi
        call ext_007283B0
        lea ecx, [esp+0x84]
        call ext_006E7460
        mov edi, dword ptr [esi+0xac]
        push offset mem_00AAD8A8
        add edi, 4
        mov ebx, eax
        mov ecx, edi
        call ext_007275F0
        push ebx
        mov ecx, edi
        call ext_007279A0
        mov ecx, edi
        call ext_007283B0
        mov al, byte ptr [esp+0x13]
        test al, al
        je L_2c3
        mov ecx, dword ptr [esi+0xac]
        push offset mem_00AAD8A0
        add ecx, 4
        call ext_007275F0
        sub esp, 0x4c
        lea edx, [esp+0xd0]
        mov ecx, esp
        mov dword ptr [esp+0x60], esp
        push edx
        call ext_006B9D20
        sub esp, 0x4c
        mov byte ptr [esp+0x1bc], 3
        mov ecx, esp
        mov dword ptr [esp+0xb0], esp
        push ebp
        call ext_006B9D20
        mov ecx, dword ptr [esi+0xac]
        mov byte ptr [esp+0x1bc], 1
        add ecx, 4
        call ext_007285D0
        mov ecx, dword ptr [esi+0xac]
        test al, al
        setne bl
        add ecx, 4
        call ext_007283B0
        lea ecx, [esp+0x84]
        mov byte ptr [esp+0x124], 0
        call ext_006B9D70
        lea ecx, [esp+0x1c]
        mov dword ptr [esp+0x124], 0xffffffff
        call ext_0072BF70
        mov al, bl
        jmp L_2ed
    L_2c3:
        lea ecx, [esp+0x84]
        mov byte ptr [esp+0x124], 0
        call ext_006B9D70
        lea ecx, [esp+0x1c]
        mov dword ptr [esp+0x124], 0xffffffff
        call ext_0072BF70
        mov al, 1
    L_2ed:
        mov ecx, dword ptr [esp+0x11c]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs:[0], ecx
        pop ebx
        add esp, 0x118
        ret 0xc
    }
}

// [0x00750570] sub_00750570 (976 bytes)
extern "C" void ext_006A5C5C();
extern "C" void ext_006A5C62();
extern "C" void ext_006C27E0();
extern "C" void ext_006C2E60();
extern "C" void ext_006C2F50();
extern "C" void ext_006D2160();
extern "C" void ext_006D3560();
extern "C" void ext_006DE460();
extern "C" void ext_006E62C0();
extern "C" void ext_006E6340();
extern "C" void ext_00750EA0();
extern "C" void ext_007515F0();
extern "C" void ext_00751CA0();
extern "C" void ext_00752BF0();
extern "C" void ext_00753CA0();
extern "C" void ext_00754870();
extern "C" void ext_00782D00();
extern "C" void ext_00782D20();
extern "C" void ext_00782E70();
extern "C" void ext_00782EC0();

extern "C" __declspec(naked) void __fastcall fn_00750570(void* self, int edx_unused, void* a1) {
    __asm {
        push -1
        push 0x8bf891
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        sub esp, 0xd8
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        push 0x14
        lea ecx, [esp + 0x2c]
        mov dword ptr [esp + 0x1c], edi
        call ext_00782D00
        xor ebx, ebx
        push 0x14
        lea ecx, [esp + 0x40]
        mov dword ptr [esp + 0xf4], ebx
        call ext_00782D00
        push 0x4d8
        mov byte ptr [esp + 0xf4], 1
        mov dword ptr [esp + 0x14], ebx
        mov dword ptr [esp + 0x18], ebx
        call ext_006A5C62
        add esp, 4
        mov ebp, eax
        lea eax, [esp + 0x14]
        mov ecx, edi
        push ebp
        push eax
        mov dword ptr [esp + 0x2c], ebp
        call ext_007515F0
        test al, al
        je L_fail
    L_5EC:
        cmp dword ptr [esp + 0x14], ebx
        jne L_782

        mov esi, 0xaae85c
        mov eax, ebp
    L_a_loop:
        mov dl, byte ptr [eax]
        mov cl, dl
        cmp dl, byte ptr [esi]
        jne L_a_ne
        test cl, cl
        je L_a_z
        mov dl, byte ptr [eax + 1]
        mov cl, dl
        cmp dl, byte ptr [esi + 1]
        jne L_a_ne
        add eax, 2
        add esi, 2
        test cl, cl
        jne L_a_loop
    L_a_z:
        xor eax, eax
        jmp L_a_done
    L_a_ne:
        sbb eax, eax
        sbb eax, -1
    L_a_done:
        cmp eax, ebx
        jne L_640
        lea eax, [esp + 0x3c]
        lea ecx, [esp + 0x28]
        push eax
        push ecx
        mov ecx, edi
        call ext_00753CA0
        jmp L_714

    L_640:
        mov esi, 0xaae854
        mov eax, ebp
    L_b_loop:
        mov dl, byte ptr [eax]
        mov cl, dl
        cmp dl, byte ptr [esi]
        jne L_b_ne
        test cl, cl
        je L_b_z
        mov dl, byte ptr [eax + 1]
        mov cl, dl
        cmp dl, byte ptr [esi + 1]
        jne L_b_ne
        add eax, 2
        add esi, 2
        test cl, cl
        jne L_b_loop
    L_b_z:
        xor eax, eax
        jmp L_b_done
    L_b_ne:
        sbb eax, eax
        sbb eax, -1
    L_b_done:
        cmp eax, ebx
        jne L_68A
        lea eax, [esp + 0x3c]
        lea ecx, [esp + 0x28]
        push eax
        push ecx
        mov ecx, edi
        call ext_00752BF0
        jmp L_714

    L_68A:
        mov esi, 0xaae84c
        mov eax, ebp
    L_c_loop:
        mov dl, byte ptr [eax]
        mov cl, dl
        cmp dl, byte ptr [esi]
        jne L_c_ne
        test cl, cl
        je L_c_z
        mov dl, byte ptr [eax + 1]
        mov cl, dl
        cmp dl, byte ptr [esi + 1]
        jne L_c_ne
        add eax, 2
        add esi, 2
        test cl, cl
        jne L_c_loop
    L_c_z:
        xor eax, eax
        jmp L_c_done
    L_c_ne:
        sbb eax, eax
        sbb eax, -1
    L_c_done:
        cmp eax, ebx
        jne L_6D1
        lea eax, [esp + 0x3c]
        lea ecx, [esp + 0x28]
        push eax
        push ecx
        mov ecx, edi
        call ext_00751CA0
        jmp L_714

    L_6D1:
        mov esi, 0xaae844
        mov eax, ebp
    L_d_loop:
        mov dl, byte ptr [eax]
        mov cl, dl
        cmp dl, byte ptr [esi]
        jne L_d_ne
        test cl, cl
        je L_d_z
        mov dl, byte ptr [eax + 1]
        mov cl, dl
        cmp dl, byte ptr [esi + 1]
        jne L_d_ne
        add eax, 2
        add esi, 2
        test cl, cl
        jne L_d_loop
    L_d_z:
        xor eax, eax
        jmp L_d_done
    L_d_ne:
        sbb eax, eax
        sbb eax, -1
    L_d_done:
        cmp eax, ebx
        jne L_71A
        mov eax, dword ptr [esp + 0xf8]
        mov ecx, edi
        push eax
        call ext_00750EA0

    L_714:
        cmp dword ptr [esp + 0x14], ebx
        jne L_782

    L_71A:
        mov esi, 0xaae834
        mov eax, ebp
    L_e_loop:
        mov dl, byte ptr [eax]
        mov cl, dl
        cmp dl, byte ptr [esi]
        jne L_e_ne
        test cl, cl
        je L_e_z
        mov dl, byte ptr [eax + 1]
        mov cl, dl
        cmp dl, byte ptr [esi + 1]
        jne L_e_ne
        add eax, 2
        add esi, 2
        test cl, cl
        jne L_e_loop
    L_e_z:
        xor eax, eax
        jmp L_e_done
    L_e_ne:
        sbb eax, eax
        sbb eax, -1
    L_e_done:
        cmp eax, ebx
        je L_7CC

        mov esi, 0xaae83c
        mov eax, ebp
    L_f_loop:
        mov dl, byte ptr [eax]
        mov cl, dl
        cmp dl, byte ptr [esi]
        jne L_f_ne
        test cl, cl
        je L_f_z
        mov dl, byte ptr [eax + 1]
        mov cl, dl
        cmp dl, byte ptr [esi + 1]
        jne L_f_ne
        add eax, 2
        add esi, 2
        test cl, cl
        jne L_f_loop
    L_f_z:
        xor eax, eax
        jmp L_f_done
    L_f_ne:
        sbb eax, eax
        sbb eax, -1
    L_f_done:
        cmp eax, ebx
        je L_7CC

    L_782:
        lea eax, [esp + 0x14]
        push ebp
        push eax
        mov ecx, edi
        call ext_007515F0
        test al, al
        jne L_5EC
    L_fail:
        push ebp
        call ext_006A5C5C
        add esp, 4
        lea ecx, [esp + 0x3c]
        mov byte ptr [esp + 0xf0], 0
        call ext_00782D20
        lea ecx, [esp + 0x28]
        mov dword ptr [esp + 0xf0], -1
        call ext_00782D20
        xor al, al
        jmp L_91E

    L_7CC:
        mov eax, dword ptr [esp + 0x2c]
        xor esi, esi
        cmp eax, ebx
        mov dword ptr [esp + 0x20], eax
        mov dword ptr [esp + 0x1c], esi
        jbe L_8EE
        jmp L_7E8
    L_7E4:
        mov edi, dword ptr [esp + 0x18]
    L_7E8:
        lea ecx, [esp + 0x10]
        push ecx
        push esi
        lea ecx, [esp + 0x30]
        call ext_00782EC0
        mov edx, dword ptr [esp + 0x10]
        push 0
        push edx
        lea ecx, [esp + 0x44]
        mov ebp, eax
        call ext_00782E70
        mov ebx, eax
        mov ecx, edi
        push ebx
        push ebp
        call ext_00754870
        mov edi, eax
        test edi, edi
        je L_8B1
        mov eax, dword ptr [esp + 0x10]
        lea ecx, [esp + 0x50]
        push eax
        call ext_006E62C0
        mov esi, dword ptr [esp + 0x18]
        lea eax, [esp + 0x50]
        push eax
        mov byte ptr [esp + 0xf4], 2
        mov edx, dword ptr [esi + 0x104]
        lea ecx, [esi + 0x104]
        call dword ptr [edx + 8]
        lea ecx, [esp + 0x50]
        call ext_006E6340
        mov ecx, dword ptr [esi + 4]
        push eax
        call ext_006D3560
        mov esi, eax
        test esi, esi
        je L_89C
        push edi
        mov ecx, esi
        call ext_006C2F50
        mov ecx, dword ptr [esp + 0x10]
        mov edx, dword ptr [esp + 0x18]
        push 0
        push ecx
        lea ecx, [edx + 0x128]
        call ext_00782E70
        test eax, eax
        jge L_88F
        push 0
        mov ecx, esi
        call ext_006C2E60
    L_88F:
        mov ecx, dword ptr [esp + 0xf8]
        push esi
        call ext_006C27E0
    L_89C:
        lea ecx, [esp + 0x50]
        mov byte ptr [esp + 0xf0], 1
        call ext_006DE460
        mov esi, dword ptr [esp + 0x1c]
    L_8B1:
        test ebp, ebp
        je L_8C5
        mov ecx, ebp
        call ext_006D2160
        push ebp
        call ext_006A5C5C
        add esp, 4
    L_8C5:
        test ebx, ebx
        je L_8D9
        mov ecx, ebx
        call ext_006D2160
        push ebx
        call ext_006A5C5C
        add esp, 4
    L_8D9:
        mov eax, dword ptr [esp + 0x20]
        inc esi
        cmp esi, eax
        mov dword ptr [esp + 0x1c], esi
        jb L_7E4
        mov ebp, dword ptr [esp + 0x24]
    L_8EE:
        push ebp
        call ext_006A5C5C
        add esp, 4
        lea ecx, [esp + 0x3c]
        mov byte ptr [esp + 0xf0], 0
        call ext_00782D20
        lea ecx, [esp + 0x28]
        mov dword ptr [esp + 0xf0], -1
        call ext_00782D20
        mov al, 1
    L_91E:
        mov ecx, dword ptr [esp + 0xe8]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov fs:[0], ecx
        add esp, 0xe4
        ret 4
    }
}

// [0x00750EA0] sub_00750EA0 (813 bytes)
extern "C" void ext_006A5C62();
extern "C" void ext_006A5C5C();
extern "C" void ext_006DE460();
extern "C" void ext_006E62C0();
extern "C" void ext_006E6340();
extern "C" void ext_007509E0();
extern "C" void ext_00751230();
extern "C" void ext_007513B0();
extern "C" void ext_007515F0();
extern "C" int mem_00925184;
extern "C" int mem_0092521C;
extern "C" int mem_009252C4;

extern "C" __declspec(naked) void __fastcall fn_00750EA0(void* self, int edx_unused, void* a1) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -0x8
        push -0x1
        push 0x8bf8eb
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x104
        push ebx
        push esi
        push edi
        mov esi, ecx
        push 0x4d8
        mov dword ptr [esp + 0x34], esi
        mov dword ptr [esp + 0x18], 0x0
        call ext_006A5C62
        push 0x4d8
        mov ebx, eax
        call ext_006A5C62
        mov dword ptr [esp + 0x18], eax
        mov eax, dword ptr [esi + 0xac]
        push eax
        mov dword ptr [esp + 0x40], 0x0
        mov dword ptr [esp + 0x44], 0x0
        mov dword ptr [esp + 0x48], 0x0
        mov dword ptr [esp + 0x4c], 0x0
        mov dword ptr [esp + 0x50], 0x0
        mov dword ptr [esp + 0x54], 0x0
        mov dword ptr [esp + 0x58], 0x0
        mov dword ptr [esp + 0x5c], 0x3ff00000
        mov dword ptr [esp + 0x60], 0x0
        mov dword ptr [esp + 0x64], 0x3ff00000
        mov dword ptr [esp + 0x68], 0x0
        mov dword ptr [esp + 0x6c], 0x3ff00000
        mov dword ptr [esp + 0x70], 0x0
        mov dword ptr [esp + 0x74], 0x0
        call dword ptr [mem_00925184]
        add esp, 0xc
        lea ecx, [esp + 0x14]
        mov edi, eax
        push ebx
        push ecx
        mov ecx, esi
        call ext_007515F0
        test al, al
        jne loc_750FAB
        push ebx
        call ext_006A5C5C
        mov edx, dword ptr [esp + 0x14]
        push edx
        call ext_006A5C5C
        add esp, 0x8
        xor al, al
        mov ecx, dword ptr [esp + 0x110]
        mov dword ptr fs:[0x0], ecx
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0x4
    loc_750FAB:
        mov eax, dword ptr [esp + 0x14]
        test eax, eax
        je loc_75106E
    loc_750FB7:
        mov eax, dword ptr [esi + 0xac]
        push eax
        call dword ptr [mem_00925184]
        mov ecx, dword ptr [esp + 0x18]
        mov dword ptr [esp + 0x1c], eax
        add esp, 0x4
        lea eax, [ecx - 0x2]
        cmp eax, 0x30
        ja loc_751049
        xor edx, edx
        mov dl, byte ptr [eax + 0x7511f4]
        jmp dword ptr [edx*4 + 0x7511d0]
    loc_750FE6:
        mov edi, ebx
        or ecx, -0x1
        xor eax, eax
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        mov esi, edi
        mov edi, dword ptr [esp + 0x10]
        shr ecx, 0x2
        rep movsd
        mov ecx, eax
        and ecx, 0x3
        rep movsb
        mov esi, dword ptr [esp + 0x30]
        jmp loc_751049
    loc_75100D:
        lea ecx, [esp + 0x34]
        jmp loc_751039
    loc_751013:
        lea edx, [esp + 0x3c]
        push edx
        jmp loc_75103A
    loc_75101A:
        lea eax, [esp + 0x44]
        push eax
        jmp loc_75103A
    loc_751021:
        lea ecx, [esp + 0x4c]
        jmp loc_751039
    loc_751027:
        lea edx, [esp + 0x54]
        push edx
        jmp loc_75103A
    loc_75102E:
        lea eax, [esp + 0x5c]
        push eax
        jmp loc_75103A
    loc_751035:
        lea ecx, [esp + 0x64]
    loc_751039:
        push ecx
    loc_75103A:
        push 0xaae640
        push ebx
        call dword ptr [mem_0092521C]
        add esp, 0xc
    loc_751049:
        lea edx, [esp + 0x14]
        push ebx
        push edx
        mov ecx, esi
        call ext_007515F0
        test al, al
        je loc_7511A1
        mov eax, dword ptr [esp + 0x14]
        test eax, eax
        jne loc_750FB7
        mov edi, dword ptr [esp + 0x18]
    loc_75106E:
        mov eax, dword ptr [esp + 0x10]
        cmp byte ptr [eax], 0x0
        je loc_751165
        push eax
        mov ecx, esi
        call ext_007513B0
        test al, al
        je loc_751165
        lea ecx, [esp + 0x18]
        lea edx, [esp + 0x24]
        push ecx
        lea eax, [esp + 0x70]
        push edx
        lea ecx, [esp + 0x24]
        push eax
        push ecx
        mov ecx, esi
        mov dword ptr [esp + 0x2c], 0x0
        mov dword ptr [esp + 0x30], 0x0
        mov dword ptr [esp + 0x7c], 0x0
        mov dword ptr [esp + 0x80], 0x0
        mov dword ptr [esp + 0x34], 0x0
        mov dword ptr [esp + 0x38], 0x0
        call ext_00751230
        test al, al
        je loc_751165
        mov edx, dword ptr [esp + 0x10]
        lea ecx, [esp + 0x78]
        push edx
        call ext_006E62C0
        mov eax, dword ptr [esi + 0x104]
        lea ecx, [esi + 0x104]
        lea edx, [esp + 0x78]
        mov dword ptr [esp + 0x118], 0x0
        push edx
        call dword ptr [eax + 0x8]
        fld qword ptr [esp + 0x1c]
        fadd qword ptr [esp + 0x34]
        lea eax, [esp + 0x34]
        push 0x0
        push eax
        lea ecx, [esp + 0x80]
        fstp qword ptr [esp + 0x3c]
        fld qword ptr [esp + 0x74]
        fadd qword ptr [esp + 0x44]
        fstp qword ptr [esp + 0x44]
        fld qword ptr [esp + 0x2c]
        fadd qword ptr [esp + 0x4c]
        fstp qword ptr [esp + 0x4c]
        call ext_006E6340
        mov ecx, dword ptr [ebp + 0x8]
        push eax
        push ecx
        mov ecx, esi
        call ext_007509E0
        lea ecx, [esp + 0x78]
        mov dword ptr [esp + 0x118], 0xffffffff
        call ext_006DE460
    loc_751165:
        mov edx, dword ptr [esi + 0xac]
        push 0x0
        push edi
        push edx
        call dword ptr [mem_009252C4]
        push ebx
        call ext_006A5C5C
        mov eax, dword ptr [esp + 0x20]
        push eax
        call ext_006A5C5C
        add esp, 0x14
        mov al, 0x1
        mov ecx, dword ptr [esp + 0x110]
        mov dword ptr fs:[0x0], ecx
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0x4
    loc_7511A1:
        push ebx
        call ext_006A5C5C
        mov eax, dword ptr [esp + 0x14]
        push eax
        call ext_006A5C5C
        mov ecx, dword ptr [esp + 0x118]
        add esp, 0x8
        xor al, al
        mov dword ptr fs:[0x0], ecx
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0x4
    }
}

// [0x007527C0] sub_007527C0 (979 bytes)
extern "C" void ext_006A5C5C();
extern "C" void ext_006A5C62();
extern "C" void ext_006B9D80();
extern "C" void ext_006BA260();
extern "C" void ext_006D2400();
extern "C" void ext_006D36F0();
extern "C" void ext_006D37E0();
extern "C" void ext_006D7970();
extern "C" void ext_006D7ED0();
extern "C" void ext_006D80A0();
extern "C" void ext_006D80B0();
extern "C" void ext_006D8580();
extern "C" void ext_006DEEC0();
extern "C" void ext_006E7460();
extern "C" void ext_006FDB00();
extern "C" void ext_0070C0E0();
extern "C" void ext_007515F0();
extern "C" void ext_00754AF0();
extern "C" void ext_0077FB40();
extern "C" void ext_00782E70();
extern "C" int mem_00925184;
extern "C" int mem_0092521C;
extern "C" int mem_009252C4;

// Switch tables live in .text right after the function in the original binary (VA 0x752B94 / 0x752BB0).
// Kept as C data here so the function body is exactly 979 bytes.
extern "C" const unsigned char idxtbl_75[63] = {
    0x00, 0x06, 0x01, 0x01, 0x01, 0x01, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06,
    0x02, 0x02, 0x02, 0x02, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06,
    0x03, 0x03, 0x03, 0x03,
    0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06,
    0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06,
    0x04, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x05
};
extern "C" const unsigned int jmptbl_75[7] = {
    0x0075289C, 0x0075286C, 0x0075287C, 0x0075288C, 0x007528BF, 0x007528C6, 0x007528DE
};

extern "C" __declspec(naked) void __fastcall fn_007527C0(void* self) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -8
        push -1
        push 8bfdd0h
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0E8h
        push ebx
        push ebp
        push esi
        push edi
        xor esi, esi
        mov ebp, ecx
        push 4D8h
        mov dword ptr [esp+14h], esi
        call ext_006A5C62
        push 4D8h
        mov ebx, eax
        call ext_006A5C62
        mov dword ptr [esp+24h], eax
        mov ecx, 16h
        xor eax, eax
        lea edi, [esp+3Ch]
        mov dword ptr [esp+34h], esi
        mov dword ptr [esp+38h], esi
        rep stosd
        mov eax, dword ptr [ebp+0ACh]
        mov dword ptr [esp+1Ch], esi
        push eax
        mov dword ptr [esp+34h], esi
        call dword ptr [mem_00925184]
        add esp, 0Ch
        lea ecx, [esp+10h]
        mov dword ptr [esp+18h], eax
        push ebx
        push ecx
        mov ecx, ebp
        call ext_007515F0
        test al, al
        je L75290B
L75284D:
        mov eax, dword ptr [esp+10h]
        lea esi, [eax-8]
        cmp esi, 3Eh
        ja L7528DE
        xor edx, edx
        mov dl, byte ptr [esi + idxtbl_75]
        jmp dword ptr [edx*4 + jmptbl_75]
L75286C:
        lea eax, [eax+eax*2-1Eh]
        lea ecx, [esp+eax*8+2Ch]
        push ecx
        push 0AAE640h
        jmp L7528D0
L75287C:
        lea edx, [eax+eax*2-3Ch]
        lea eax, [esp+edx*8+34h]
        push eax
        push 0AAE640h
        jmp L7528D0
L75288C:
        lea ecx, [eax+eax*2-5Ah]
        lea edx, [esp+ecx*8+3Ch]
        push edx
        push 0AAE640h
        jmp L7528D0
L75289C:
        mov edi, ebx
        or ecx, -1
        xor eax, eax
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        mov esi, edi
        mov edi, dword ptr [esp+1Ch]
        shr ecx, 2
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        jmp L7528DA
L7528BF:
        lea ecx, [esp+14h]
        push ecx
        jmp L7528CB
L7528C6:
        lea edx, [esp+28h]
        push edx
L7528CB:
        push 0AA86A4h
L7528D0:
        push ebx
        call dword ptr [mem_0092521C]
        add esp, 0Ch
L7528DA:
        mov eax, dword ptr [esp+10h]
L7528DE:
        test eax, eax
        je L752936
        mov eax, dword ptr [ebp+0ACh]
        push eax
        call dword ptr [mem_00925184]
        add esp, 4
        lea ecx, [esp+10h]
        mov dword ptr [esp+18h], eax
        push ebx
        push ecx
        mov ecx, ebp
        call ext_007515F0
        test al, al
        jne L75284D
L75290B:
        push ebx
        call ext_006A5C5C
        mov edx, dword ptr [esp+20h]
        push edx
        call ext_006A5C5C
        add esp, 8
        xor eax, eax
        mov ecx, dword ptr [esp+0F8h]
        mov dword ptr fs:[0], ecx
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov esp, ebp
        pop ebp
        ret
L752936:
        mov eax, dword ptr [esp+18h]
        mov ecx, dword ptr [ebp+0ACh]
        push 0
        push eax
        push ecx
        call dword ptr [mem_009252C4]
        mov ecx, dword ptr [ebp+4]
        add esp, 0Ch
        call ext_006D36F0
        fld qword ptr [esp+5Ch]
        fcomp qword ptr [esp+74h]
        mov esi, eax
        mov dword ptr [esp+20h], esi
        fnstsw ax
        test ah, 40h
        je L752993
        fld qword ptr [esp+64h]
        fcomp qword ptr [esp+7Ch]
        fnstsw ax
        test ah, 40h
        je L752993
        fld qword ptr [esp+6Ch]
        fcomp qword ptr [esp+84h]
        mov dword ptr [esp+18h], 3
        fnstsw ax
        test ah, 40h
        jne L75299B
L752993:
        mov dword ptr [esp+18h], 4
L75299B:
        xor edi, edi
        lea ecx, [esp+8Ch]
        mov dword ptr [esp+24h], edi
        call ext_0077FB40
        mov edx, dword ptr [esp+18h]
        mov ecx, esi
        push edx
        mov dword ptr [esp+104h], edi
        call ext_006D7970
        mov eax, dword ptr [esp+14h]
        cmp eax, edi
        jne L7529E4
        mov eax, dword ptr [esp+1Ch]
        push edi
        push eax
        lea ecx, [ebp+128h]
        call ext_00782E70
        cdq
        xor eax, edx
        sub eax, edx
        mov dword ptr [esp+14h], eax
        cmp eax, edi
L7529E4:
        jle L752AC1
        cmp dword ptr [ebp+eax*4+13Ch], edi
        jne L752A9B
        push 0AAD40Ch
        lea ecx, [esp+0B0h]
        call ext_006B9D80
        mov eax, dword ptr [ebp+0FCh]
        mov byte ptr [esp+100h], 1
        push eax
        lea ecx, [eax+1]
        mov dword ptr [ebp+0FCh], ecx
        lea ecx, [esp+0B0h]
        call ext_006BA260
        lea ecx, [esp+0ACh]
        call ext_006E7460
        mov ecx, dword ptr [ebp+4]
        push eax
        call ext_006D37E0
        mov edx, dword ptr [esp+14h]
        mov dword ptr [ebp+edx*4+13Ch], eax
        mov ecx, dword ptr [esp+14h]
        lea eax, [esp+8Ch]
        push eax
        push ecx
        mov ecx, ebp
        call ext_00754AF0
        mov edx, dword ptr [esp+14h]
        sub esp, 20h
        mov ecx, 8
        lea esi, [esp+0ACh]
        mov edi, esp
        rep movsd
        mov ecx, dword ptr [ebp+edx*4+13Ch]
        call ext_0070C0E0
        lea ecx, [esp+0ACh]
        mov byte ptr [esp+100h], 0
        call ext_006B9D70
        mov esi, dword ptr [esp+20h]
L752A9B:
        push 3
        mov ecx, esi
        call ext_006D8580
        mov eax, dword ptr [esp+14h]
        push 0
        mov ecx, dword ptr [ebp+eax*4+13Ch]
        push ecx
        mov ecx, esi
        call ext_006FDB00
        test eax, eax
        jl L752AC1
        mov dword ptr [esp+24h], eax
L752AC1:
        mov ecx, esi
        call ext_006DEEC0
        mov ebp, dword ptr [esp+18h]
        mov edi, eax
        lea eax, [ebp-1]
        test eax, eax
        jl L752B25
        lea edx, [eax+eax*2]
        lea ebp, [eax+1]
        lea esi, [esp+edx*8+3Ch]
L752ADF:
        mov eax, dword ptr [esi-0Ch]
        mov ecx, dword ptr [esi-10h]
        push eax
        push ecx
        push 0
        mov ecx, edi
        call ext_006D2400
        mov edx, dword ptr [esi+4]
        mov eax, dword ptr [esi]
        push edx
        push eax
        push 1
        mov ecx, edi
        call ext_006D2400
        fld qword ptr [esi-8]
        sub esp, 8
        mov ecx, edi
        fchs
        fstp qword ptr [esp]
        push 2
        call ext_006D2400
        add edi, 20h
        sub esi, 18h
        dec ebp
        jne L752ADF
        mov esi, dword ptr [esp+20h]
        mov ebp, dword ptr [esp+18h]
L752B25:
        mov ecx, dword ptr [esp+24h]
        push -1
        push -1
        push ecx
        mov ecx, esi
        call ext_006D7ED0
        xor edi, edi
        test ebp, ebp
        jle L752B4A
L752B3B:
        push -1
        push edi
        mov ecx, esi
        call ext_006D80B0
        inc edi
        cmp edi, ebp
        jl L752B3B
L752B4A:
        mov ecx, esi
        call ext_006D80A0
        mov edx, dword ptr [esp+1Ch]
        push edx
        call ext_006A5C5C
        push ebx
        call ext_006A5C5C
        add esp, 8
        lea ecx, [esp+8Ch]
        mov dword ptr [esp+100h], 0FFFFFFFFh
        call ext_006D80A0
        mov ecx, dword ptr [esp+0F8h]
        mov eax, esi
        pop edi
        mov dword ptr fs:[0], ecx
        pop esi
        pop ebp
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}

// [0x0075D740] sub_0075D740 (1040 bytes)
extern "C" void ext_006FDF90();
extern "C" void ext_00715550();
extern "C" void ext_006D81F0();
extern "C" void ext_007275F0();
extern "C" void ext_00728410();
extern "C" void ext_00727C80();
extern "C" void ext_007283B0();
extern "C" void ext_006FDFC0();
extern "C" void ext_006FDF70();
extern "C" void ext_006FC930();
extern "C" void ext_006D23F0();
extern "C" void ext_00727FE0();
extern "C" void ext_007284D0();
extern "C" __declspec(naked) void __fastcall fn_0075D740(void* self) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0xc]
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr [esp + 0x18]
        mov esi, ecx
        push 0x3
        push eax
        mov ecx, edi
        call ext_006FDF90
        mov ecx, eax
        call ext_00715550
        mov ebx, eax
        mov eax, dword ptr [ebx]
        test eax, eax
        je LzA
        cmp eax, 0x4
        je LzA
        mov edx, dword ptr [edi]
        mov ecx, edi
        call dword ptr [edx]
        cmp eax, 0x4
        jne LzF1
        mov eax, dword ptr [ebx]
        cmp eax, 0x3
        je LzA
LzF1:
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        pop ecx
        ret 0x8
LzA:
        cmp dword ptr [ebx + 0x4], 0x2
        je LzB
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        pop ecx
        ret 0x8
LzB:
        cmp eax, 0x4
        jne LzC
        cmp dword ptr [ebx + 0x20], 0x1
        jg LzF2
LzC:
        cmp eax, 0x3
        jne LzE
        mov ebp, dword ptr [ebx + 0x20]
        mov ecx, edi
        call ext_006D81F0
        cmp ebp, eax
        je LzE
LzF2:
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        pop ecx
        ret 0x8
LzE:
        mov ecx, dword ptr [esi + 0xac]
        push 0xaadca8
        add ecx, 0x4
        call ext_007275F0
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_00728410
        mov edi, dword ptr [esi + 0xac]
        mov ebp, dword ptr [ebx + 0x38]
        add edi, 0x4
        push 0xaadd00
        mov ecx, edi
        call ext_007275F0
        push ebp
        mov ecx, edi
        call ext_00727C80
        mov ecx, edi
        call ext_007283B0
        mov ecx, dword ptr [esi + 0xac]
        push 0xaadd14
        add ecx, 0x4
        call ext_007275F0
        mov eax, dword ptr [ebx]
        sub eax, 0x0
        je LzZ0
        sub eax, 0x3
        je LzZ3
        dec eax
        jne LzM
        push 0x2
        jmp LzP
LzZ3:
        push 0x6
        jmp LzP
LzZ0:
        push 0x0
LzP:
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_00727C80
LzM:
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_007283B0
        mov edi, dword ptr [esi + 0xac]
        mov eax, dword ptr [ebx + 0x8]
        mov ebp, dword ptr [ebx + 0x20]
        add edi, 0x4
        push 0xaadcf0
        mov ecx, edi
        mov dword ptr [esp + 0x14], eax
        call ext_007275F0
        push ebp
        mov ecx, edi
        call ext_00727C80
        mov ecx, edi
        call ext_007283B0
        mov ecx, dword ptr [esi + 0xac]
        push 0xaadc60
        add ecx, 0x4
        call ext_007275F0
        xor edi, edi
        test ebp, ebp
        jle LzQ
LzLOOP1:
        mov ecx, dword ptr [ebx + 0x30]
        mov eax, dword ptr [ecx + 4*edi]
        mov ecx, dword ptr [esp + 0x10]
        cmp eax, ecx
        jge LzG1
        push eax
        jmp LzH1
LzG1:
        push 0x0
LzH1:
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_00727C80
        inc edi
        cmp edi, ebp
        jl LzLOOP1
LzQ:
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_007283B0
        mov edx, dword ptr [esp + 0x1c]
        mov ebx, dword ptr [esp + 0x18]
        push 0x3
        push edx
        mov ecx, ebx
        call ext_006FDFC0
        mov edi, eax
        mov eax, dword ptr [ebx]
        mov ecx, ebx
        call dword ptr [eax]
        cmp eax, 0x5
        je LzR
        mov edx, dword ptr [ebx]
        mov ecx, ebx
        call dword ptr [edx]
LzR:
        push edi
        mov ecx, ebx
        call ext_006FDF70
        mov ecx, eax
        call ext_006FC930
        test eax, eax
        je LzBIG
        push edi
        mov ecx, ebx
        call ext_006FDF70
        mov ecx, eax
        call ext_006FC930
        mov edi, eax
        mov eax, dword ptr [edi]
        test eax, eax
        je LzS
        cmp eax, 0x1
        je LzS
        cmp eax, 0x2
        je LzS
        mov dword ptr [edi], 0x0
LzS:
        mov ecx, dword ptr [edi + 0x4]
        test ecx, ecx
        je LzT
        cmp ecx, 0x2
        je LzT
        mov dword ptr [edi], 0x0
LzT:
        mov eax, dword ptr [edi]
        cmp eax, 0x1
        jne LzU
        test ecx, ecx
        jne LzV
        mov eax, dword ptr [edi + 0x8]
        mov ecx, dword ptr [ebx + 0x28]
        cmp eax, ecx
        je LzOK
        jmp LzZERO
LzV:
        mov ecx, dword ptr [edi + 0x20]
        mov eax, dword ptr [ebx + 0x28]
        cmp ecx, eax
        je LzOK
        jmp LzZERO
LzU:
        cmp eax, 0x2
        jne LzOK
        mov edx, dword ptr [ebx]
        mov ecx, ebx
        call dword ptr [edx]
        cmp eax, 0x4
        jne LzZERO
        mov eax, dword ptr [edi + 0x4]
        test eax, eax
        jne LzW
        mov eax, dword ptr [edi + 0x8]
        mov ecx, dword ptr [ebx + 0x1dc]
        cmp eax, ecx
        je LzOK
        jmp LzZERO
LzW:
        mov ecx, dword ptr [edi + 0x20]
        mov eax, dword ptr [ebx + 0x1dc]
        cmp ecx, eax
        je LzOK
LzZERO:
        mov dword ptr [edi], 0x0
LzOK:
        test edi, edi
        je LzBIG
        mov ecx, dword ptr [esi + 0xac]
        push 0xaadce8
        add ecx, 0x4
        call ext_007275F0
        mov eax, dword ptr [edi]
        sub eax, 0x0
        je LzX0
        dec eax
        je LzX1
        dec eax
        jne LzX9
        mov eax, dword ptr [edi + 0x4]
        test eax, eax
        jne LzX2
        push 0x7
        jmp LzX3
LzX2:
        push 0x8
        jmp LzX3
LzX1:
        mov eax, dword ptr [edi + 0x4]
        test eax, eax
        jne LzX4
        push 0x3
        jmp LzX3
LzX4:
        push 0x4
        jmp LzX3
LzX0:
        push 0x0
LzX3:
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_00727C80
LzX9:
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_007283B0
        cmp dword ptr [edi], 0x0
        je LzBIG
        mov ebx, dword ptr [esi + 0xac]
        mov ebp, dword ptr [edi + 0x8]
        add ebx, 0x4
        push 0xaadce0
        mov ecx, ebx
        call ext_007275F0
        push ebp
        mov ecx, ebx
        call ext_00727C80
        mov ecx, ebx
        call ext_007283B0
        mov ecx, dword ptr [esi + 0xac]
        push 0xaabbc0
        add ecx, 0x4
        call ext_007275F0
        mov ebp, dword ptr [edi + 0x8]
        test ebp, ebp
        jle LzE2
        xor ebx, ebx
LzLOOP2:
        mov ecx, dword ptr [edi + 0x18]
        push 0x0
        add ecx, ebx
        call ext_006D23F0
        mov edx, dword ptr [eax + 0x4]
        mov ecx, dword ptr [esi + 0xac]
        push edx
        add ecx, 0x4
        mov eax, dword ptr [eax]
        push eax
        call ext_00727FE0
        mov ecx, dword ptr [edi + 0x18]
        push 0x1
        add ecx, ebx
        call ext_006D23F0
        mov ecx, dword ptr [eax + 0x4]
        push ecx
        mov ecx, dword ptr [esi + 0xac]
        mov edx, dword ptr [eax]
        add ecx, 0x4
        push edx
        call ext_00727FE0
        add ebx, 0x10
        dec ebp
        jne LzLOOP2
LzE2:
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_007283B0
        cmp dword ptr [edi + 0x4], 0x2
        jne LzBIG
        mov ebx, dword ptr [esi + 0xac]
        mov ebp, dword ptr [edi + 0x20]
        add ebx, 0x4
        push 0xaadcd4
        mov ecx, ebx
        call ext_007275F0
        push ebp
        mov ecx, ebx
        call ext_00727C80
        mov ecx, ebx
        call ext_007283B0
        mov ecx, dword ptr [esi + 0xac]
        push 0xaadccc
        add ecx, 0x4
        call ext_007275F0
        mov eax, dword ptr [edi + 0x20]
        xor ebx, ebx
        test eax, eax
        mov dword ptr [esp + 0x1c], eax
        jle LzE3
LzLOOP3:
        mov eax, dword ptr [edi + 0x30]
        mov eax, dword ptr [eax + 4*ebx]
        cmp eax, ebp
        jge LzG3
        push eax
        jmp LzH3
LzG3:
        push 0x0
LzH3:
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_00727C80
        mov eax, dword ptr [esp + 0x1c]
        inc ebx
        cmp ebx, eax
        jl LzLOOP3
LzE3:
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_007283B0
LzBIG:
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_007284D0
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_007283B0
        pop edi
        pop esi
        pop ebp
        mov al, 0x1
        pop ebx
        pop ecx
        ret 0x8
    }
}

// [0x00750110] sub_00750110 (1120 bytes)
extern "C" void ext_006A5C5C();
extern "C" void ext_006A5C62();
extern "C" void ext_006C27E0();
extern "C" void ext_006C2F10();
extern "C" void ext_006C2F50();
extern "C" void ext_006D3560();
extern "C" void ext_006DE460();
extern "C" void ext_006E62C0();
extern "C" void ext_006E6340();
extern "C" void ext_00750EA0();
extern "C" void ext_007515F0();
extern "C" void ext_007516A0();
extern "C" void ext_007527C0();
extern "C" void ext_00753720();

extern "C" __declspec(naked) void __fastcall fn_00750110(void* self, int edx_unused, void* a1) {
    __asm {
        push -1
        push 0x8bf861
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x1d0
        push ebp
        push esi
        push edi
        mov ebp, ecx
        push 0x4d8
        mov dword ptr [esp + 0x14], 0
        call ext_006A5C62
        add esp, 4
        mov edi, eax
        lea eax, [esp + 0x10]
        mov ecx, ebp
        push edi
        push eax
        mov dword ptr [esp + 0x14], edi
        call ext_007515F0
        test al, al
        je L7504BF
L750160:
        mov eax, dword ptr [esp + 0x10]
        test eax, eax
        jne L7504AA
        mov esi, 0xaae85c
        mov eax, edi
L750173:
        mov dl, byte ptr [eax]
        mov cl, dl
        cmp dl, byte ptr [esi]
        jne L750197
        test cl, cl
        je L750193
        mov dl, byte ptr [eax + 1]
        mov cl, dl
        cmp dl, byte ptr [esi + 1]
        jne L750197
        add eax, 2
        add esi, 2
        test cl, cl
        jne L750173
L750193:
        xor eax, eax
        jmp L75019C
L750197:
        sbb eax, eax
        sbb eax, -1
L75019C:
        test eax, eax
        jne L750233
        push 0xaae85c
        lea ecx, [esp + 0x18]
        call ext_006E62C0
        mov eax, dword ptr [ebp + 0x104]
        lea ecx, [ebp + 0x104]
        lea edx, [esp + 0x14]
        mov dword ptr [esp + 0x1e4], 0
        push edx
        call dword ptr [eax + 8]
        lea ecx, [esp + 0x14]
        call ext_006E6340
        mov ecx, dword ptr [ebp + 4]
        push eax
        call ext_006D3560
        mov esi, eax
        test esi, esi
        je L7504C6
        mov ecx, ebp
        call ext_00753720
        test eax, eax
        je L75020F
        push eax
        mov ecx, esi
        call ext_006C2F50
        mov ecx, dword ptr [esp + 0x1ec]
        push esi
        call ext_006C27E0
        jmp L75021A
L75020F:
        mov ecx, dword ptr [ebp + 4]
        push 1
        push esi
        mov eax, dword ptr [ecx]
        call dword ptr [eax + 0x74]
L75021A:
        lea ecx, [esp + 0x14]
        mov dword ptr [esp + 0x1e4], -1
        call ext_006DE460
        jmp L75042A
L750233:
        mov eax, dword ptr [esp + 0xc]
        mov esi, 0xaae854
L75023C:
        mov dl, byte ptr [eax]
        mov cl, dl
        cmp dl, byte ptr [esi]
        jne L750260
        test cl, cl
        je L75025C
        mov dl, byte ptr [eax + 1]
        mov cl, dl
        cmp dl, byte ptr [esi + 1]
        jne L750260
        add eax, 2
        add esi, 2
        test cl, cl
        jne L75023C
L75025C:
        xor eax, eax
        jmp L750265
L750260:
        sbb eax, eax
        sbb eax, -1
L750265:
        test eax, eax
        jne L750308
        push 0xaae854
        lea ecx, [esp + 0xb0]
        call ext_006E62C0
        mov eax, dword ptr [ebp + 0x104]
        lea ecx, [ebp + 0x104]
        lea edx, [esp + 0xac]
        mov dword ptr [esp + 0x1e4], 1
        push edx
        call dword ptr [eax + 8]
        lea ecx, [esp + 0xac]
        call ext_006E6340
        mov ecx, dword ptr [ebp + 4]
        push eax
        call ext_006D3560
        mov esi, eax
        test esi, esi
        je L7504EB
        mov ecx, ebp
        call ext_007527C0
        test eax, eax
        je L7502E1
        push eax
        mov ecx, esi
        call ext_006C2F50
        mov ecx, dword ptr [esp + 0x1ec]
        push esi
        call ext_006C27E0
        jmp L7502EC
L7502E1:
        mov ecx, dword ptr [ebp + 4]
        push 1
        push esi
        mov eax, dword ptr [ecx]
        call dword ptr [eax + 0x74]
L7502EC:
        lea ecx, [esp + 0xac]
        mov dword ptr [esp + 0x1e4], -1
        call ext_006DE460
        jmp L75042A
L750308:
        mov eax, dword ptr [esp + 0xc]
        mov esi, 0xaae84c
L750311:
        mov dl, byte ptr [eax]
        mov cl, dl
        cmp dl, byte ptr [esi]
        jne L750335
        test cl, cl
        je L750331
        mov dl, byte ptr [eax + 1]
        mov cl, dl
        cmp dl, byte ptr [esi + 1]
        jne L750335
        add eax, 2
        add esi, 2
        test cl, cl
        jne L750311
L750331:
        xor eax, eax
        jmp L75033A
L750335:
        sbb eax, eax
        sbb eax, -1
L75033A:
        test eax, eax
        jne L7503E5
        push 0xaae84c
        lea ecx, [esp + 0x148]
        call ext_006E62C0
        mov eax, dword ptr [ebp + 0x104]
        lea ecx, [ebp + 0x104]
        lea edx, [esp + 0x144]
        mov dword ptr [esp + 0x1e4], 2
        push edx
        call dword ptr [eax + 8]
        lea ecx, [esp + 0x144]
        call ext_006E6340
        mov ecx, dword ptr [ebp + 4]
        push eax
        call ext_006D3560
        mov esi, eax
        test esi, esi
        je L750513
        mov ecx, ebp
        call ext_007516A0
        mov edi, eax
        test edi, edi
        je L7503C1
        push 1
        mov ecx, esi
        call ext_006C2F10
        push edi
        mov ecx, esi
        call ext_006C2F50
        mov ecx, dword ptr [esp + 0x1ec]
        push esi
        call ext_006C27E0
        jmp L7503CC
L7503C1:
        mov ecx, dword ptr [ebp + 4]
        push 1
        push esi
        mov eax, dword ptr [ecx]
        call dword ptr [eax + 0x74]
L7503CC:
        lea ecx, [esp + 0x144]
        mov dword ptr [esp + 0x1e4], -1
        call ext_006DE460
        jmp L75042A
L7503E5:
        mov eax, dword ptr [esp + 0xc]
        mov esi, 0xaae844
L7503EE:
        mov dl, byte ptr [eax]
        mov cl, dl
        cmp dl, byte ptr [esi]
        jne L750412
        test cl, cl
        je L75040E
        mov dl, byte ptr [eax + 1]
        mov cl, dl
        cmp dl, byte ptr [esi + 1]
        jne L750412
        add eax, 2
        add esi, 2
        test cl, cl
        jne L7503EE
L75040E:
        xor eax, eax
        jmp L750417
L750412:
        sbb eax, eax
        sbb eax, -1
L750417:
        test eax, eax
        jne L750432
        mov eax, dword ptr [esp + 0x1ec]
        mov ecx, ebp
        push eax
        call ext_00750EA0
L75042A:
        mov eax, dword ptr [esp + 0x10]
        test eax, eax
        jne L7504A6
L750432:
        mov eax, dword ptr [esp + 0xc]
        mov esi, 0xaae834
L75043B:
        mov dl, byte ptr [eax]
        mov cl, dl
        cmp dl, byte ptr [esi]
        jne L75045F
        test cl, cl
        je L75045B
        mov dl, byte ptr [eax + 1]
        mov cl, dl
        cmp dl, byte ptr [esi + 1]
        jne L75045F
        add eax, 2
        add esi, 2
        test cl, cl
        jne L75043B
L75045B:
        xor eax, eax
        jmp L750464
L75045F:
        sbb eax, eax
        sbb eax, -1
L750464:
        test eax, eax
        je L75053B
        mov eax, dword ptr [esp + 0xc]
        mov esi, 0xaae83c
L750475:
        mov dl, byte ptr [eax]
        mov cl, dl
        cmp dl, byte ptr [esi]
        jne L750499
        test cl, cl
        je L750495
        mov dl, byte ptr [eax + 1]
        mov cl, dl
        cmp dl, byte ptr [esi + 1]
        jne L750499
        add eax, 2
        add esi, 2
        test cl, cl
        jne L750475
L750495:
        xor eax, eax
        jmp L75049E
L750499:
        sbb eax, eax
        sbb eax, -1
L75049E:
        test eax, eax
        je L75053B
L7504A6:
        mov edi, dword ptr [esp + 0xc]
L7504AA:
        lea eax, [esp + 0x10]
        push edi
        push eax
        mov ecx, ebp
        call ext_007515F0
        test al, al
        jne L750160
L7504BF:
        xor al, al
        jmp L75054A
L7504C6:
        mov ecx, dword ptr [esp + 0xc]
        push ecx
        call ext_006A5C5C
        add esp, 4
        lea ecx, [esp + 0x14]
        mov dword ptr [esp + 0x1e4], -1
        call ext_006DE460
        xor al, al
        jmp L75054A
L7504EB:
        mov edx, dword ptr [esp + 0xc]
        push edx
        call ext_006A5C5C
        add esp, 4
        lea ecx, [esp + 0xac]
        mov dword ptr [esp + 0x1e4], -1
        call ext_006DE460
        xor al, al
        jmp L75054A
L750513:
        mov eax, dword ptr [esp + 0xc]
        push eax
        call ext_006A5C5C
        add esp, 4
        lea ecx, [esp + 0x144]
        mov dword ptr [esp + 0x1e4], -1
        call ext_006DE460
        xor al, al
        jmp L75054A
L75053B:
        mov ecx, dword ptr [esp + 0xc]
        push ecx
        call ext_006A5C5C
        add esp, 4
        mov al, 1
L75054A:
        mov ecx, dword ptr [esp + 0x1dc]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs:[0], ecx
        add esp, 0x1dc
        ret 4
    }
}

// [0x00754AF0] sub_00754AF0 (1072 bytes)
extern "C" int mem_00993CA0; /* double 0.25 */
extern "C" int mem_00996BE8; /* double 0.125 */
extern "C" int mem_00996BE0; /* double 0.134 */
extern "C" int mem_00996BD8; /* double 0.33 */
extern "C" __declspec(naked) void __fastcall fn_00754AF0(void* self, int edx_unused, int n, double* out) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -8
        sub esp, 9Ch
        mov ecx, dword ptr [ebp+8]
        push ebx
        mov ebx, 1
        push esi
        cmp ecx, ebx
        push edi
        jne short L_754B2E
        mov ecx, dword ptr [ebp+0Ch]
        xor eax, eax
        mov dword ptr [ecx], eax
        mov dword ptr [ecx+8], eax
        mov dword ptr [ecx+10h], eax
        mov dword ptr [ecx+4], 3FF00000h
        mov dword ptr [ecx+0Ch], eax
        mov dword ptr [ecx+14h], eax
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 8
L_754B2E:
        mov edi, 2
        cmp ecx, edi
        jne short L_754B5B
        mov ecx, dword ptr [ebp+0Ch]
        xor eax, eax
        mov edx, 3FF00000h
        mov dword ptr [ecx], eax
        mov dword ptr [ecx+8], eax
        mov dword ptr [ecx+10h], eax
        mov dword ptr [ecx+4], edx
        mov dword ptr [ecx+0Ch], edx
        mov dword ptr [ecx+14h], eax
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 8
L_754B5B:
        mov esi, 3
        cmp ecx, esi
        jne short L_754B87
        mov ecx, dword ptr [ebp+0Ch]
        xor eax, eax
        mov dword ptr [ecx], eax
        mov dword ptr [ecx+8], eax
        mov dword ptr [ecx+10h], eax
        mov dword ptr [ecx+4], eax
        mov dword ptr [ecx+0Ch], 3FF00000h
        mov dword ptr [ecx+14h], eax
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 8
L_754B87:
        mov edx, 4
        cmp ecx, edx
        jne short L_754BB4
        mov ecx, dword ptr [ebp+0Ch]
        xor eax, eax
        mov edx, 3FF00000h
        mov dword ptr [ecx], eax
        mov dword ptr [ecx+8], eax
        mov dword ptr [ecx+10h], eax
        mov dword ptr [ecx+4], eax
        mov dword ptr [ecx+0Ch], edx
        mov dword ptr [ecx+14h], edx
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 8
L_754BB4:
        cmp ecx, 5
        jne short L_754BDC
        mov ecx, dword ptr [ebp+0Ch]
        xor eax, eax
        mov dword ptr [ecx], eax
        mov dword ptr [ecx+8], eax
        mov dword ptr [ecx+10h], eax
        mov dword ptr [ecx+4], eax
        mov dword ptr [ecx+0Ch], eax
        mov dword ptr [ecx+14h], 3FF00000h
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 8
L_754BDC:
        cmp ecx, 6
        jne short L_754C05
        mov ecx, dword ptr [ebp+0Ch]
        xor eax, eax
        mov edx, 3FF00000h
        mov dword ptr [ecx], eax
        mov dword ptr [ecx+8], eax
        mov dword ptr [ecx+10h], eax
        mov dword ptr [ecx+4], edx
        mov dword ptr [ecx+0Ch], eax
        mov dword ptr [ecx+14h], edx
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 8
L_754C05:
        cmp ecx, 7
        jne short L_754C2E
        mov ecx, dword ptr [ebp+0Ch]
        xor eax, eax
        mov edx, 3FF00000h
        mov dword ptr [ecx], eax
        mov dword ptr [ecx+8], eax
        mov dword ptr [ecx+10h], eax
        mov dword ptr [ecx+4], edx
        mov dword ptr [ecx+0Ch], edx
        mov dword ptr [ecx+14h], edx
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 8
L_754C2E:
        cmp ecx, 8
        jne short L_754C5A
        mov eax, dword ptr [ebp+0Ch]
        mov edx, 4DD2F1AAh
        mov ecx, 3FE01062h
        mov dword ptr [eax], edx
        mov dword ptr [eax+8], edx
        mov dword ptr [eax+10h], edx
        mov dword ptr [eax+4], ecx
        mov dword ptr [eax+0Ch], ecx
        mov dword ptr [eax+14h], ecx
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 8
L_754C5A:
        cmp ecx, 9
        jne short L_754C86
        mov eax, dword ptr [ebp+0Ch]
        mov edx, 74BC6A7Fh
        mov ecx, 3FE81893h
        mov dword ptr [eax], edx
        mov dword ptr [eax+8], edx
        mov dword ptr [eax+10h], edx
        mov dword ptr [eax+4], ecx
        mov dword ptr [eax+0Ch], ecx
        mov dword ptr [eax+14h], ecx
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 8
L_754C86:
        cmp ecx, 0Ah
        jl L_754ECD
        cmp ecx, 0FAh
        jge L_754ED5
        xor eax, eax
        cmp ecx, 5Ah
        mov dword ptr [esp+20h], edx
        mov dword ptr [esp+24h], edx
        mov dword ptr [esp+28h], edx
        mov dword ptr [esp+2Ch], edx
        mov dword ptr [esp+30h], edx
        mov dword ptr [esp+34h], esi
        mov dword ptr [esp+38h], edi
        mov dword ptr [esp+3Ch], ebx
        mov dword ptr [esp+40h], eax
        mov dword ptr [esp+44h], eax
        mov dword ptr [esp+48h], eax
        mov dword ptr [esp+4Ch], eax
        mov dword ptr [esp+50h], eax
        mov dword ptr [esp+54h], eax
        mov dword ptr [esp+58h], eax
        mov dword ptr [esp+5Ch], eax
        mov dword ptr [esp+60h], eax
        mov dword ptr [esp+64h], ebx
        mov dword ptr [esp+68h], edi
        mov dword ptr [esp+6Ch], esi
        mov dword ptr [esp+70h], edx
        mov dword ptr [esp+74h], edx
        mov dword ptr [esp+78h], edx
        mov dword ptr [esp+7Ch], edx
        mov dword ptr [esp+80h], eax
        mov dword ptr [esp+84h], 3FF00000h
        mov dword ptr [esp+88h], 0CCCCCCCDh
        mov dword ptr [esp+8Ch], 3FE4CCCCh
        mov dword ptr [esp+90h], eax
        mov dword ptr [esp+94h], 3FE00000h
        mov dword ptr [esp+98h], 33333333h
        mov dword ptr [esp+9Ch], 3FD33333h
        mov dword ptr [esp+0A0h], 33333333h
        mov dword ptr [esp+0A4h], 3FC33333h
        jge short L_754D96
        lea edx, [ecx-0Ah]
        mov eax, 66666667h
        imul edx
        sar edx, 2
        mov eax, edx
        shr eax, 1Fh
        add edx, eax
        mov ebx, dword ptr [esp+edx*4+20h]
        mov eax, dword ptr [esp+edx*4+40h]
        mov edi, dword ptr [esp+edx*4+60h]
        mov dword ptr [esp+10h], ebx
        mov dword ptr [esp+0Ch], eax
        mov dword ptr [esp+18h], edi
        jmp short L_754DFD
L_754D96:
        cmp ecx, 0AAh
        jge short L_754DCE
        lea edx, [ecx-5Ah]
        mov eax, 66666667h
        imul edx
        sar edx, 2
        mov eax, edx
        shr eax, 1Fh
        add edx, eax
        mov eax, edx
        mov edi, dword ptr [esp+eax*4+20h]
        mov ebx, dword ptr [esp+eax*4+40h]
        mov eax, dword ptr [esp+eax*4+60h]
        mov dword ptr [esp+18h], edi
        mov dword ptr [esp+10h], ebx
        mov dword ptr [esp+0Ch], eax
        jmp short L_754DFD
L_754DCE:
        lea edx, [ecx-0AAh]
        mov eax, 66666667h
        imul edx
        sar edx, 2
        mov eax, edx
        shr eax, 1Fh
        add edx, eax
        mov eax, dword ptr [esp+edx*4+20h]
        mov edi, dword ptr [esp+edx*4+40h]
        mov ebx, dword ptr [esp+edx*4+60h]
        mov dword ptr [esp+0Ch], eax
        mov dword ptr [esp+18h], edi
        mov dword ptr [esp+10h], ebx
L_754DFD:
        fild dword ptr [esp+10h]
        mov esi, dword ptr [ebp+0Ch]
        mov edx, ecx
        and edx, 80000001h
        fmul qword ptr [mem_00993CA0]
        fld st(0)
        fstp qword ptr [esi]
        fild dword ptr [esp+18h]
        fmul qword ptr [mem_00993CA0]
        fst qword ptr [esp+18h]
        fstp qword ptr [esi+8]
        fild dword ptr [esp+0Ch]
        fmul qword ptr [mem_00993CA0]
        fst qword ptr [esp+10h]
        fstp qword ptr [esi+10h]
        jns short L_754E3F
        dec edx
        or edx, -2
        inc edx
L_754E3F:
        je short L_754E96
        mov edx, 4
        sub edx, ebx
        mov dword ptr [esp+0Ch], edx
        mov edx, 4
        fild dword ptr [esp+0Ch]
        sub edx, edi
        mov dword ptr [esp+0Ch], edx
        mov edx, 4
        fmul qword ptr [mem_00996BE8]
        sub edx, eax
        fadd st, st(1)
        fstp qword ptr [esi]
        fstp st(0)
        fild dword ptr [esp+0Ch]
        mov dword ptr [esp+0Ch], edx
        fmul qword ptr [mem_00996BE8]
        fadd qword ptr [esp+18h]
        fstp qword ptr [esi+8]
        fild dword ptr [esp+0Ch]
        fmul qword ptr [mem_00996BE8]
        fadd qword ptr [esp+10h]
        fstp qword ptr [esi+10h]
        jmp short L_754E98
L_754E96:
        fstp st(0)
L_754E98:
        mov eax, ecx
        mov ecx, 0Ah
        cdq
        idiv ecx
        mov eax, edx
        cdq
        sub eax, edx
        sar eax, 1
        fld qword ptr [esp+eax*8+80h]
        fld st(0)
        fmul qword ptr [esi]
        fstp qword ptr [esi]
        fld st(0)
        fmul qword ptr [esi+8]
        fstp qword ptr [esi+8]
        fmul qword ptr [esi+10h]
        fstp qword ptr [esi+10h]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 8
L_754ECD:
        cmp ecx, 0FAh
        jl short L_754F08
L_754ED5:
        cmp ecx, 100h
        jge short L_754F08
        mov eax, ecx
        mov ecx, 0Ah
        cdq
        idiv ecx
        mov eax, dword ptr [ebp+0Ch]
        mov dword ptr [esp+0Ch], edx
        fild dword ptr [esp+0Ch]
        fmul qword ptr [mem_00996BE0]
        fadd qword ptr [mem_00996BD8]
        fld st(0)
        fstp qword ptr [eax]
        fst qword ptr [eax+8]
        fstp qword ptr [eax+10h]
L_754F08:
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 8
    }
}
