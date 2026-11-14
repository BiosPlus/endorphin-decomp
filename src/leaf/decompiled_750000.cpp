// Decompiled translation unit: src/leaf/decompiled_750000.cpp

extern "C" void ext_006B9E60();
extern "C" void ext_006A73CC();
extern "C" int mem_00993CC0;
extern "C" int mem_00993C78;

// [0x00755020] sub_00755020 (16 bytes)
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
