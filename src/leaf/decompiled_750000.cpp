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
