// Decompiled translation unit: src/leaf/decompiled_790000.cpp

extern "C" unsigned char mem_00B61150;
extern "C" int mem_00B6114C;
extern "C" void __cdecl ext_0079EBB0(int);
extern "C" void ext_007148E0();
extern "C" void ext_00714AE0();
extern "C" void ext_006C3390();

extern "C" void ext_006C3390();
// Returns table[arg & 0xFF] (4-byte entries at mem_00B6114C) if (unsigned char)arg < mem_00B61150, else 0.
extern "C" __declspec(naked) int __cdecl fn_0079EAC0(int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        mov cl, byte ptr [mem_00B61150]
        cmp al, cl
        jae short L_zero
        mov ecx, dword ptr [mem_00B6114C]
        and eax, 0xff
        mov eax, dword ptr [ecx + 4*eax]
        ret
L_zero:
        xor eax, eax
        ret
    }
}
extern "C" void ext_0079B140();
extern "C" void ext_007AF580();

extern "C" void ext_007AF580();
extern "C" void ext_0079EBE0();
extern "C" int mem_00925184;

extern "C" __declspec(naked) int __cdecl fn_0079EEC0() {
    __asm {
        call ext_0079EBE0
        push eax
        call dword ptr [mem_00925184]
        add esp, 0x4
        ret
    }
}
extern "C" int mem_009251D8; /* "&|b" */
extern "C" void __stdcall ext_007856F0(int a1, int a2);
extern "C" void ext_007857A0();
extern "C" void ext_00791FF0();
extern "C" void __cdecl ext_00798750(void*, unsigned int);
extern "C" void ext_007AF080();
extern "C" int mem_00924268;
extern "C" void ext_00783940();
extern "C" void ext_007838E0();
extern "C" void ext_00796740();
extern "C" void ext_0079B750();
extern "C" void ext_007AF0C0(void*, int);

extern "C" void ext_007AF0C0(void*, int);
extern "C" __declspec(naked) int __cdecl fn_0079AFE0(void* dst, int c, unsigned int n) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        mov ecx, dword ptr [esp + 0xc]
        and eax, 0xff
        push ebx
        mov bl, al
        mov edx, ecx
        mov bh, bl
        push edi
        mov edi, dword ptr [esp + 0xc]
        mov eax, ebx
        shl eax, 0x10
        mov ax, bx
        shr ecx, 0x2
        rep stosd
        mov ecx, edx
        and ecx, 0x3
        rep stosb
        pop edi
        pop ebx
        ret
    }
}

// [0x00798DB0] sub_00798DB0 (239 bytes)
extern "C" void ext_0079AF40();
extern "C" void ext_0079B010();
extern "C" void ext_006A6EEC();
extern "C" void ext_00872828();
extern "C" int mem_0092A270;
extern "C" int mem_00997458;
extern "C" int mem_00997450;
extern "C" int mem_00993828;
extern "C" int mem_009251DC;

extern "C" __declspec(naked) void __cdecl fn_00798DB0(void* self) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -0x8
        sub esp, 0x14
        push ebx
        push esi
        mov esi, dword ptr [ebp + 0x8]
        push edi
        mov edi, 0x1
        mov cl, byte ptr [esi + 0x28]
        shl edi, cl
        mov dword ptr [esp + 0x10], edi
        lea eax, [edi + edi]
        push eax
        mov dword ptr [esp + 0x20], eax
        call ext_0079AF40
        mov ebx, 0x1
        add esp, 0x4
        mov dword ptr [esi + 0xe0], eax
        cmp edi, ebx
        mov word ptr [eax], 0x0
        mov dword ptr [esp + 0xc], ebx
        jle short L_after
        fild dword ptr [esp + 0x10]
        fsub qword ptr [mem_0092A270]
        fstp qword ptr [esp + 0x10]
L_loop:
        fild dword ptr [esp + 0xc]
        fdiv qword ptr [esp + 0x10]
        fld qword ptr [mem_00997458]
        call ext_006A6EEC
        fmul qword ptr [mem_00997450]
        sub esp, 0x8
        fadd qword ptr [mem_00993828]
        fstp qword ptr [esp]
        call dword ptr [mem_009251DC]
        add esp, 0x8
        call ext_00872828
        mov ecx, dword ptr [esi + 0xe0]
        inc ebx
        cmp ebx, edi
        mov dword ptr [esp + 0xc], ebx
        mov word ptr [ecx + 2*ebx - 0x2], ax
        jl short L_loop
L_after:
        xor edx, edx
        xor eax, eax
        mov dx, word ptr [esi + 0x78]
        mov ax, word ptr [esi + 0x36]
        sub eax, edx
        cmp eax, 0x1
        jle short L_end
        mov edi, dword ptr [esp + 0x1c]
        push edi
        call ext_0079AF40
        mov ecx, dword ptr [esi + 0xe0]
        push edi
        push ecx
        push eax
        mov dword ptr [esi + 0xe4], eax
        call ext_0079B010
        push edi
        call ext_0079AF40
        mov edx, dword ptr [esi + 0xe0]
        push edi
        push edx
        push eax
        mov dword ptr [esi + 0xe8], eax
        call ext_0079B010
        add esp, 0x20
L_end:
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}

extern "C" double mem_00993840;

// [0x00791210] sub_00791210 (495 bytes)
extern "C" __declspec(naked) void __fastcall fn_00791210(void* self, int edx_unused, const void* src) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        mov edx, dword ptr [eax]
        mov dword ptr [ecx + 0x68], edx
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [ecx + 0x6c], edx
        mov edx, dword ptr [eax + 0x8]
        mov dword ptr [ecx + 0x70], edx
        mov edx, dword ptr [eax + 0xc]
        mov dword ptr [ecx + 0x74], edx
        mov edx, dword ptr [eax + 0x10]
        mov dword ptr [ecx + 0x78], edx
        mov edx, dword ptr [eax + 0x14]
        mov dword ptr [ecx + 0x7c], edx
        mov edx, dword ptr [eax + 0x18]
        mov dword ptr [ecx + 0x80], edx
        mov edx, dword ptr [eax + 0x1c]
        mov dword ptr [ecx + 0x84], edx
        mov edx, dword ptr [eax + 0x20]
        mov dword ptr [ecx + 0x88], edx
        mov edx, dword ptr [eax + 0x24]
        mov dword ptr [ecx + 0x8c], edx
        mov edx, dword ptr [eax + 0x28]
        mov dword ptr [ecx + 0x90], edx
        mov edx, dword ptr [eax + 0x2c]
        mov dword ptr [ecx + 0x94], edx
        mov edx, dword ptr [eax + 0x30]
        mov dword ptr [ecx + 0x98], edx
        mov edx, dword ptr [eax + 0x34]
        mov dword ptr [ecx + 0x9c], edx
        mov edx, dword ptr [eax + 0x38]
        mov dword ptr [ecx + 0xa0], edx
        mov edx, dword ptr [eax + 0x3c]
        mov dword ptr [ecx + 0xa4], edx
        mov edx, dword ptr [eax + 0x40]
        mov dword ptr [ecx + 0xa8], edx
        mov edx, dword ptr [eax + 0x44]
        mov dword ptr [ecx + 0xac], edx
        mov edx, dword ptr [eax + 0x48]
        mov dword ptr [ecx + 0xb0], edx
        mov edx, dword ptr [eax + 0x4c]
        mov dword ptr [ecx + 0xb4], edx
        mov edx, dword ptr [eax + 0x50]
        mov dword ptr [ecx + 0xb8], edx
        mov edx, dword ptr [eax + 0x54]
        mov dword ptr [ecx + 0xbc], edx
        mov edx, dword ptr [eax + 0x58]
        mov dword ptr [ecx + 0xc0], edx
        mov edx, dword ptr [eax + 0x5c]
        mov dword ptr [ecx + 0xc4], edx
        mov edx, dword ptr [eax + 0x60]
        mov dword ptr [ecx + 0xc8], edx
        mov edx, dword ptr [eax + 0x64]
        mov dword ptr [ecx + 0xcc], edx
        mov edx, dword ptr [eax + 0x68]
        fld qword ptr [ecx + 0x68]
        mov dword ptr [ecx + 0xd0], edx
        mov edx, dword ptr [eax + 0x6c]
        fmul qword ptr [mem_00993840]
        mov dword ptr [ecx + 0xd4], edx
        mov edx, dword ptr [eax + 0x70]
        mov dword ptr [ecx + 0xd8], edx
        mov edx, dword ptr [eax + 0x74]
        mov dword ptr [ecx + 0xdc], edx
        mov edx, dword ptr [eax + 0x78]
        mov dword ptr [ecx + 0xe0], edx
        mov eax, dword ptr [eax + 0x7c]
        fstp qword ptr [ecx + 0x168]
        fld qword ptr [ecx + 0x70]
        fadd st, st(0)
        mov edx, dword ptr [ecx + 0x78]
        mov dword ptr [ecx + 0xe4], eax
        mov eax, dword ptr [ecx + 0x7c]
        mov dword ptr [ecx + 0x178], edx
        mov dword ptr [ecx + 0x17c], eax
        fstp qword ptr [ecx + 0x170]
        fld qword ptr [ecx + 0x88]
        fmul qword ptr [mem_00993840]
        fstp qword ptr [ecx + 0x180]
        fld qword ptr [ecx + 0x90]
        fadd st, st(0)
        fstp qword ptr [ecx + 0x188]
        fld qword ptr [ecx + 0xa8]
        fmul qword ptr [mem_00993840]
        mov edx, dword ptr [ecx + 0x98]
        mov eax, dword ptr [ecx + 0x9c]
        mov dword ptr [ecx + 0x190], edx
        mov edx, dword ptr [ecx + 0xb8]
        mov dword ptr [ecx + 0x194], eax
        mov eax, dword ptr [ecx + 0xbc]
        fstp qword ptr [ecx + 0x198]
        fld qword ptr [ecx + 0xb0]
        fadd st, st(0)
        mov dword ptr [ecx + 0x1a8], edx
        mov edx, dword ptr [ecx + 0xd8]
        mov dword ptr [ecx + 0x1ac], eax
        mov eax, dword ptr [ecx + 0xdc]
        mov dword ptr [ecx + 0x1c0], edx
        mov dword ptr [ecx + 0x1c4], eax
        fstp qword ptr [ecx + 0x1a0]
        fld qword ptr [ecx + 0xc8]
        fmul qword ptr [mem_00993840]
        mov dword ptr [ecx + 0x5c], 0x1
        fstp qword ptr [ecx + 0x1b0]
        fld qword ptr [ecx + 0xd0]
        fadd st, st(0)
        fstp qword ptr [ecx + 0x1b8]
        ret 0x4
    }
}

// [0x00798FD0] sub_00798FD0 (31 bytes)
extern "C" void ext_00798F10();
extern "C" __declspec(naked) void __cdecl fn_00798FD0(int a1, int a2, int a3) {
    __asm {
        mov eax, dword ptr [esp + 0xc]
        mov edx, dword ptr [esp + 0x8]
        lea ecx, [4 * eax]
        mov eax, dword ptr [esp + 0x4]
        push ecx
        push edx
        push eax
        call ext_00798F10
        add esp, 0xc
        ret
    }
}

extern "C" void ext_007994D0();

// [0x007994A0] sub_007994A0 (47 bytes)
extern "C" __declspec(naked) int __cdecl fn_007994A0(void* self) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        push esi
        call ext_007994D0
        xor eax, eax
        add esp, 4
        mov dword ptr [esi + 0x10], eax
        mov dword ptr [esi + 0x14], eax
        mov dword ptr [esi + 0x170], eax
        or eax, -1
        mov dword ptr [esi + 0x164], eax
        mov dword ptr [esi + 0x16C], eax
        xor eax, eax
        pop esi
        ret
    }
}

// [0x00799010] sub_00799010 (48 bytes)
extern "C" int __cdecl ext_00799040(void* a0, void* a1);

extern "C" __declspec(naked) int __cdecl fn_00799010(void* a0, void* a1, void* a2) {
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        push    edi
        mov     edi, dword ptr [esp + 0x10]
        push    edi
        push    esi
        call    ext_00799040
        add     esp, 0x8
        test    eax, eax
        je      ret_zero
        mov     eax, dword ptr [esp + 0x14]
        push    eax
        push    edi
        push    esi
        call    dword ptr [esi + 0x21c]
        add     esp, 0xc
        pop     edi
        pop     esi
        ret
    ret_zero:
        pop     edi
        xor     eax, eax
        pop     esi
        ret
    }
}

// [0x0079E900] sub_0079E900 (56 bytes)
extern "C" void ext_0079E800();
extern "C" void ext_0079E5E0();
extern "C" __declspec(naked) void __fastcall fn_0079E900(void* self) {
    __asm {
        call ext_0079E800
        test eax, eax
        je done
        call ext_0079E800
        mov edx, dword ptr [eax]
        push 0
        push 3
        mov ecx, eax
        call dword ptr [edx]
        mov ecx, dword ptr [esp + 8]
        mov edx, dword ptr [eax]
        push ecx
        mov ecx, dword ptr [esp + 8]
        push ecx
        push 0x34538402
        mov ecx, eax
        call dword ptr [edx + 0xc]
    done:
        ret
        __asm _emit 0x90
        sub ecx, 4
        jmp ext_0079E5E0
    }
}

// [0x0079D740] sub_0079D740 (95 bytes)
extern "C" void ext_006A5C62();
extern "C" void ext_0079D7C0();

extern "C" __declspec(naked) void __fastcall fn_0079D740(void* self) {
    __asm {
        push -1
        push 0x008B8FDB
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push 0x1C8
        call ext_006A5C62
        add esp, 4
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x00
        test eax, eax
        mov dword ptr [esp + 0xC], 0
        je label_null
        mov ecx, eax
        call ext_0079D7C0
        jmp label_cont
    label_null:
        xor eax, eax
    label_cont:
        mov edx, dword ptr [eax]
        push 0
        push 0xC
        mov ecx, eax
        mov dword ptr [esp + 0x14], 0xFFFFFFFF
        call dword ptr [edx]
        mov ecx, dword ptr [esp + 4]
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

extern "C" void ext_0079B140();

// [0x0079A230] sub_0079A230 (96 bytes)
extern "C" __declspec(naked) int __cdecl fn_0079A230(void* arg1, int len, const char* buf) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        push ebx
        mov ebx, dword ptr [esp + 0x8]
        xor edx, edx
        push esi
        push edi
        mov dx, word ptr [ebx + 0x4e]
        test eax, eax
        mov ecx, edx
        jle L_fail
        mov edi, dword ptr [esp + 0x18]
        test ecx, ecx
        lea esi, [eax + edi]
        mov eax, edi
        jle L_done
    L_outer:
        cmp byte ptr [eax], 0x0
        je L_next
    L_inner:
        cmp eax, esi
        jae L_fail
        inc eax
        cmp byte ptr [eax], 0x0
        jne L_inner
    L_next:
        inc eax
        dec ecx
        test ecx, ecx
        jg L_outer
    L_done:
        sub eax, edi
        pop edi
        pop esi
        pop ebx
        ret
    L_fail:
        mov eax, edx
        sub eax, ecx
        mov ecx, dword ptr [ebx]
        push eax
        push edx
        push ecx
        push 0xaafbbc
        push 0xaafa78
        call ext_0079B140
        add esp, 0x14
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        ret
    }
}

// [0x0079FDA0] sub_0079FDA0 (159 bytes)
extern "C" void ext_0079FD80();
extern "C" void ext_0079FE40();
extern "C" void ext_007AA510();
extern "C" void ext_007B27D0();
extern "C" void ext_007B3250();
extern "C" int mem_00B61219;

extern "C" __declspec(naked) void __fastcall fn_0079FDA0(void* self) {
    __asm {
        sub esp, 0x8
        push edi
        mov edi, dword ptr [esp + 0x10]
        test edi, edi
        mov dword ptr [esp + 0x4], 0x0
        jne L_0079FDC7
        push 0x2
        call ext_007AA510
        mov al, byte ptr [mem_00B61219]
        add esp, 0x4
        test al, al
        je L_0079FE3A
    L_0079FDC7:
        lea eax, [esp + 0x4]
        push esi
        push eax
        push edi
        call ext_0079FD80
        mov ecx, dword ptr [esp + 0x10]
        mov eax, dword ptr [esp + 0x20]
        add esp, 0x8
        cmp eax, dword ptr [ecx]
        jae L_0079FE2C
        mov ecx, dword ptr [ecx + 0x8]
        lea edx, [esp + 0x14]
        push edx
        push 0xb003
        mov esi, dword ptr [ecx + 4*eax]
        push esi
        push edi
        call ext_007B27D0
        mov eax, dword ptr [esp + 0x24]
        add esp, 0x10
        test eax, eax
        je L_0079FE2C
        lea eax, [esp + 0xc]
        push eax
        push 0xb004
        push esi
        push edi
        call ext_007B27D0
        mov ecx, dword ptr [esp + 0x2c]
        mov edx, dword ptr [esp + 0x1c]
        mov eax, dword ptr [esp + 0x24]
        push ecx
        push edx
        push eax
        call ext_0079FE40
        add esp, 0x1c
    L_0079FE2C:
        lea ecx, [esp + 0x8]
        push ecx
        call ext_007B3250
        add esp, 0x4
        pop esi
    L_0079FE3A:
        pop edi
        add esp, 0x8
        ret
    }
}

// [0x0079BAA0] sub_0079BAA0 (208 bytes)
extern "C" void ext_006D80A0();
extern "C" void ext_006B9D80();
extern "C" void ext_006A6C87();
extern "C" void ext_006B9D70();
extern "C" int mem_00B5D2C0;
extern "C" int mem_00B60F60;
extern "C" int mem_00925284;
extern "C" int mem_00B60FC8;
extern "C" int mem_00B60FCC;
extern "C" int mem_00B60FC0;

extern "C" __declspec(naked) void __fastcall fn_0079BAA0(void* self) {
    __asm {
        mov eax, offset fn_0079BAA0 + 0x30
        mov dword ptr [ecx + 0xe0], offset ext_006D80A0
        mov dword ptr [ecx + 0xe4], eax
        mov dword ptr [ecx + 0xe8], eax
        mov dword ptr [ecx + 0xec], eax
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
        nop
        nop
        nop
        nop
        nop
        mov eax, dword ptr [esp + 0x18]
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
        nop
        nop
        _emit 0xe8
        _emit 0x0b
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xe9
        _emit 0x16
        _emit 0x00
        _emit 0x00
        _emit 0x00
        nop
        nop
        nop
        nop
        nop
        nop
        push offset mem_00B5D2C0
        mov ecx, offset mem_00B60F60
        call ext_006B9D80
        ret
        push offset fn_0079BAA0 + 0x70
        call ext_006A6C87
        pop ecx
        ret
        nop
        nop
        nop
        nop
        mov ecx, offset mem_00B60F60
        jmp ext_006B9D70
        nop
        nop
        nop
        nop
        nop
        nop
        _emit 0xe9
        _emit 0x0b
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
        mov eax, dword ptr [mem_00925284]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov dword ptr [mem_00B60FC8], ecx
        mov dword ptr [mem_00B60FCC], edx
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
        _emit 0xe9
        _emit 0x0b
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
        mov eax, dword ptr [mem_00925284]
        fld qword ptr [eax]
        fchs
        fstp qword ptr [mem_00B60FC0]
        ret
    }
}

extern "C" void ext_0079AC80();
extern "C" void ext_0079B140();
extern "C" void ext_007B1920();
extern "C" int mem_009241FC;
extern "C" int mem_00924190;

// [0x0079AE50] sub_0079AE50 (239 bytes)
extern "C" __declspec(naked) int __cdecl fn_0079AE50(int a1, int a2) {
    __asm {
        sub esp, 0x800
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 0x810]
        push esi
        push edi
        push 0x99748c
        push ebp
        call ext_007B1920
        mov esi, eax
        add esp, 0x8
        cmp esi, 0x102
        jg L_79ae93
        je L_79ae85
        sub eax, 0x0
        je L_79ae8c
        sub eax, 0x2
        jne L_79aea3
L_79ae85:
        mov ebx, 0x4
        jmp L_79aeb5
L_79ae8c:
        mov ebx, 0x3
        jmp L_79aeb5
L_79ae93:
        cmp esi, 0x202
        je L_79aeb0
        cmp esi, 0x302
        je L_79aeb0
L_79aea3:
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x800
        ret
L_79aeb0:
        mov ebx, 0x2
L_79aeb5:
        mov edi, dword ptr [esp + 0x814]
        lea eax, [esp + 0x10]
        push 0x400
        push eax
        push -1
        push edi
        push 0
        push 0xfde9
        call dword ptr [mem_009241FC]
        mov ecx, esi
        push 0
        neg ecx
        sbb ecx, ecx
        lea edx, [esp + 0x14]
        and ecx, 0x7f
        inc ecx
        neg esi
        sbb esi, esi
        push ecx
        and esi, 0x40000000
        push ebx
        push 0
        add esi, 0x80000000
        push 1
        push esi
        push edx
        call dword ptr [mem_00924190]
        cmp eax, -1
        jne L_79af29
        push edi
        push 0xaafc30
        push 0x99748c
        call ext_0079B140
        add esp, 0xc
        xor eax, eax
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x800
        ret
L_79af29:
        push ebp
        push edi
        push eax
        call ext_0079AC80
        add esp, 0xc
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x800
        ret
    }
}

// [0x0079D9B0] sub_0079D9B0 (248 bytes)
extern "C" void ext_006B9EC0();
extern "C" void ext_0079D700();
extern "C" __declspec(naked) void __fastcall fn_0079D9B0(void* self) {
    __asm {
        xor eax, eax
        mov dword ptr [ecx + 0xe8], eax
        mov byte ptr [ecx + 0xec], al
        mov byte ptr [ecx + 0xed], al
        mov dword ptr [ecx + 0x168], eax
        mov dword ptr [ecx + 0xf0], 1
        mov edx, dword ptr [ecx + 0x168]
        mov dword ptr [ecx + edx * 8 + 0xf4], eax
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
        nop
        nop
        nop
        nop
        nop
        mov al, byte ptr [ecx + 0xed]
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
        mov byte ptr [ecx + 0xed], 1
        mov al, byte ptr [ecx + 0xec]
        ret
        nop
        nop
        mov byte ptr [ecx + 0xec], 1
        ret
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        mov eax, dword ptr [esp + 4]
        push esi
        mov esi, ecx
        push eax
        lea ecx, [esi + 0x50]
        call ext_006B9EC0
        push 0xb5d2c0
        lea ecx, [esi + 0x9c]
        call ext_006B9EC0
        pop esi
        ret 4
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
        nop
        push esi
        mov esi, ecx
        push 0xb5d2c0
        lea ecx, [esi + 0x50]
        call ext_006B9EC0
        push 0xb5d2c0
        lea ecx, [esi + 0x9c]
        call ext_006B9EC0
        pop esi
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
        nop
        nop
        nop
        nop
        nop
        mov eax, 0xb5d2c0
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
        nop
        xor eax, eax
        ret 0x10
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
        sub ecx, 4
        jmp ext_0079D700
    }
}

extern "C" int mem_0092A278;
extern "C" int mem_00997100;

// [0x00796B60] sub_00796B60 (255 bytes)
extern "C" __declspec(naked) double __cdecl fn_00796B60(double x, int i, unsigned int k, const double* t) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -8
        sub esp, 0x14
        mov ecx, dword ptr [ebp + 0x14]
        push ebx
        push esi
        cmp ecx, 1
        push edi
        ja loc_796BAF
        mov ecx, dword ptr [ebp + 0x18]
        mov edx, dword ptr [ebp + 0x10]
        fld qword ptr [ebp + 8]
        fcomp qword ptr [ecx + edx*8]
        fnstsw ax
        test ah, 1
        jne loc_796BA2
        fld qword ptr [ebp + 8]
        fcomp qword ptr [ecx + edx*8 + 8]
        fnstsw ax
        test ah, 1
        je loc_796BA2
        fld qword ptr [mem_0092A270]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    loc_796BA2:
        fld qword ptr [mem_0092A278]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    loc_796BAF:
        mov edi, dword ptr [ebp + 0x10]
        mov esi, dword ptr [ebp + 0x18]
        lea eax, [edi + ecx]
        fld qword ptr [esi + eax*8 - 8]
        fsub qword ptr [esi + edi*8]
        lea ebx, [esi + eax*8]
        fst qword ptr [esp + 0x10]
        fcomp qword ptr [mem_00997100]
        fnstsw ax
        test ah, 0x41
        jne loc_796BFC
        mov edx, dword ptr [ebp + 8]
        dec ecx
        push esi
        push ecx
        mov ecx, dword ptr [ebp + 0xC]
        push edi
        push ecx
        push edx
        call fn_00796B60
        fld qword ptr [ebp + 8]
        fsub qword ptr [esi + edi*8]
        mov ecx, dword ptr [ebp + 0x14]
        add esp, 0x14
        fdiv qword ptr [esp + 0x10]
        fmulp st(1), st
        fstp qword ptr [esp + 0x10]
        jmp loc_796C0C
    loc_796BFC:
        mov dword ptr [esp + 0x10], 0
        mov dword ptr [esp + 0x14], 0
    loc_796C0C:
        fld qword ptr [ebx]
        fsub qword ptr [esi + edi*8 + 8]
        inc edi
        fst qword ptr [esp + 0x18]
        fcomp qword ptr [mem_00997100]
        fnstsw ax
        test ah, 0x41
        jne loc_796C4E
        mov eax, dword ptr [ebp + 0xC]
        dec ecx
        push esi
        push ecx
        mov ecx, dword ptr [ebp + 8]
        push edi
        push eax
        push ecx
        call fn_00796B60
        fld qword ptr [ebx]
        fsub qword ptr [ebp + 8]
        add esp, 0x14
        fdiv qword ptr [esp + 0x18]
        fmulp st(1), st
        fadd qword ptr [esp + 0x10]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    loc_796C4E:
        fld qword ptr [mem_0092A278]
        fadd qword ptr [esp + 0x10]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}

// [0x00792900] sub_00792900 (352 bytes)
extern "C" void ext_006A5C5C();
extern "C" void ext_0078D850();
extern "C" unsigned char mem_008C17D8;
extern "C" unsigned char mem_00997388;
extern "C" unsigned char mem_00792A60;

extern "C" __declspec(naked) void __fastcall fn_00792900(void* self) {
    __asm {
        push -1
        push offset mem_008C17D8
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [esp + 0x8], esi
        mov dword ptr [esi], offset mem_00997388
        mov eax, dword ptr [esi + 0x278]
        xor edi, edi
        cmp eax, edi
        mov dword ptr [esp + 0x14], edi
        mov dword ptr [esi + 0x250], edi
        mov dword ptr [esi + 0x268], edi
        mov dword ptr [esi + 0x264], edi
        mov dword ptr [esi + 0x254], edi
        mov dword ptr [esi + 0x25c], edi
        mov dword ptr [esi + 0x260], edi
        je short L_skip1
        push eax
        call ext_006A5C5C
        add esp, 4
L_skip1:
        mov eax, dword ptr [esi + 0x27c]
        mov dword ptr [esi + 0x278], edi
        cmp eax, edi
        je short L_skip2
        push eax
        call ext_006A5C5C
        add esp, 4
L_skip2:
        mov eax, dword ptr [esi + 0x258]
        mov dword ptr [esi + 0x27c], edi
        cmp eax, edi
        je short L_skip3
        push eax
        call ext_006A5C5C
        add esp, 4
L_skip3:
        mov ecx, esi
        mov dword ptr [esi + 0x258], edi
        mov dword ptr [esp + 0x14], 0xffffffff
        call ext_0078D850
        mov ecx, dword ptr [esp + 0xc]
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
L_case_entry:
        mov eax, dword ptr [esp + 0x4]
        cmp eax, 0x5
        ja L_default
        jmp dword ptr [eax*4 + mem_00792A60]
L_c0:
        mov eax, dword ptr [esp + 0x8]
        mov dword ptr [ecx + 0x250], eax
        xor eax, eax
        mov dword ptr [ecx + 0x28], eax
        mov dword ptr [ecx + 0x2c], eax
        ret 0x8
L_c1:
        mov edx, dword ptr [esp + 0x8]
        xor eax, eax
        mov dword ptr [ecx + 0x264], edx
        mov dword ptr [ecx + 0x5c], 0x1
        mov dword ptr [ecx + 0x28], eax
        mov dword ptr [ecx + 0x2c], eax
        ret 0x8
L_c2:
        mov eax, dword ptr [esp + 0x8]
        mov dword ptr [ecx + 0x5c], 0x1
        mov dword ptr [ecx + 0x268], eax
        xor eax, eax
        mov dword ptr [ecx + 0x28], eax
        mov dword ptr [ecx + 0x2c], eax
        ret 0x8
L_c3:
        mov edx, dword ptr [esp + 0x8]
        xor eax, eax
        mov dword ptr [ecx + 0x25c], edx
        mov dword ptr [ecx + 0x28], eax
        mov dword ptr [ecx + 0x2c], eax
        ret 0x8
L_c4:
        mov eax, dword ptr [esp + 0x8]
        mov dword ptr [ecx + 0x260], eax
        xor eax, eax
        mov dword ptr [ecx + 0x28], eax
        mov dword ptr [ecx + 0x2c], eax
        ret 0x8
L_c5:
        mov edx, dword ptr [esp + 0x8]
        mov dword ptr [ecx + 0x254], edx
L_default:
        xor eax, eax
        mov dword ptr [ecx + 0x28], eax
        mov dword ptr [ecx + 0x2c], eax
        ret 0x8
    }
}

// [0x00798330] sub_00798330 (383 bytes)
extern "C" int ext_00798220(void*, int, void*, int, const char*);
extern "C" int ext_007984B0(void*, int, unsigned int);
extern "C" int ext_00798570(void*, int);
extern "C" void ext_0079AF50(void*);
extern "C" void ext_007AF0C0(void*, int);

extern "C" __declspec(naked) void __cdecl fn_00798330() {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0xc]
        push esi
        mov esi, dword ptr [esp + 0xc]
        push edi
        mov eax, dword ptr [esi + 0xd4]
        mov edi, dword ptr [eax + 4*ebx]
        test edi, edi
        jg L_798360
        mov ecx, dword ptr [esi]
        push ebx
        push edi
        push 0xaaf844
        push ecx
        call ext_0079B140
        add esp, 0x10
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        ret
    L_798360:
        mov eax, dword ptr [esi + 0xc]
        test ah, 0x8
        je L_79840b
        xor edx, edx
        mov dx, word ptr [esi + 0x4a]
        _emit 0x85
        _emit 0xd0 // test eax, edx
        jne L_79837f
        test ah, 0x1
        je L_79840b
    L_79837f:
        test ah, 0x2
        je L_798397
        mov eax, dword ptr [esi + 0x1d8]
        test eax, eax
        je L_798397
        push eax
        call ext_0079AF50
        add esp, 0x4
    L_798397:
        mov eax, dword ptr [esi + 0xc]
        and ah, -0x3
        mov dword ptr [esi + 0xc], eax
        mov eax, dword ptr [esi + 0xd0]
        mov ecx, dword ptr [eax + 4*ebx]
        mov eax, dword ptr [esi + 0x1ec]
        lea edx, [ecx + edi]
        cmp edx, eax
        jbe L_7983e0
        sub eax, ecx
        push edi
        push eax
        mov eax, dword ptr [esi]
        push ebx
        push eax
        push 0xaaf94c
        push 0x99740c
        call ext_0079B140
        add esp, 0x18
        mov dword ptr [esi + 0x16c], 0xffffffff
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        ret
    L_7983e0:
        mov eax, dword ptr [esi + 0x1e8]
        mov dword ptr [esi + 0x1dc], edi
        mov ecx, dword ptr [esi + 0xd0]
        push ebx
        push esi
        mov edx, dword ptr [ecx + 4*ebx]
        add edx, eax
        mov dword ptr [esi + 0x1d8], edx
        call ext_00798570
        add esp, 0x8
        pop edi
        pop esi
        pop ebx
        ret
    L_79840b:
        cmp edi, dword ptr [esi + 0x1dc]
        jle L_79845e
        test ah, 0x2
        mov dword ptr [esi + 0x16c], 0xffffffff
        jne L_79843e
        mov eax, dword ptr [esi]
        push ebx
        push eax
        push 0xaaf920
        push 0x99740c
        call ext_0079B140
        add esp, 0x10
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        ret
    L_79843e:
        lea ecx, [edi + 0x3ff]
        shr ecx, 0xa
        shl ecx, 0xa
        push ecx
        push 0x0
        push esi
        call ext_007984B0
        add esp, 0xc
        test eax, eax
        jne L_79845e
        pop edi
        pop esi
        pop ebx
        ret
    L_79845e:
        mov edx, dword ptr [esi + 0x1d8]
        push 0x99740c
        push edi
        push edx
        push ebx
        push esi
        call ext_00798220
        add esp, 0x14
        cmp eax, edi
        je L_79847f
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        ret
    L_79847f:
        mov eax, dword ptr [esi + 0xc]
        xor ecx, ecx
        mov cx, word ptr [esi + 0x4a]
        _emit 0x85
        _emit 0xc8 // test eax, ecx
        jne L_7984a1
        test ah, 0x1
        jne L_7984a1
        mov edx, dword ptr [esi + 0x1d8]
        push edi
        push edx
        call ext_007AF0C0
        add esp, 0x8
    L_7984a1:
        push ebx
        push esi
        call ext_00798570
        add esp, 0x8
        pop edi
        pop esi
        pop ebx
        ret
    }
}

extern "C" void ext_006B9D80();
extern "C" void ext_0079BAA0();
extern "C" void ext_007AA8F0();
extern "C" void ext_007AA930();
extern "C" void ext_007AA950();
extern "C" void ext_007AA970();
extern "C" void ext_007AA990();
extern "C" void ext_007AAA00();

// [0x0079F390] sub_0079F390 (1024 bytes)
extern "C" __declspec(naked) void __fastcall fn_0079F390(void* self) {
    __asm {
        push ecx
        push esi
        mov esi, ecx
        call ext_0079BAA0

        push 0x0
        push 0x1
        mov ecx, esi
        call ext_007AA8F0
        push 0x1
        push 0x1
        mov ecx, esi
        call ext_007AA930
        push 0x2
        push 0x1
        mov ecx, esi
        call ext_007AA950
        push 0x1
        push 0x1
        mov ecx, esi
        call ext_007AA970
        sub esp, 0x4c
        mov ecx, esp
        mov dword ptr [esp + 0x50], esp
        push 0xab0004
        call ext_006B9D80
        push 0x1
        mov ecx, esi
        call ext_007AA990
        push 0x0
        push 0x1
        mov ecx, esi
        call ext_007AAA00

        push 0x1
        push 0x7
        mov ecx, esi
        call ext_007AA8F0
        push 0x1
        push 0x7
        mov ecx, esi
        call ext_007AA930
        push 0x2
        push 0x7
        mov ecx, esi
        call ext_007AA950
        push 0x1
        push 0x7
        mov ecx, esi
        call ext_007AA970
        sub esp, 0x4c
        mov ecx, esp
        mov dword ptr [esp + 0x50], esp
        push 0xaadc04
        call ext_006B9D80
        push 0x7
        mov ecx, esi
        call ext_007AA990
        push 0x0
        push 0x7
        mov ecx, esi
        call ext_007AAA00

        push 0x1
        push 0x8
        mov ecx, esi
        call ext_007AA8F0
        push 0x1
        push 0x8
        mov ecx, esi
        call ext_007AA930
        push 0x2
        push 0x8
        mov ecx, esi
        call ext_007AA950
        push 0x1
        push 0x8
        mov ecx, esi
        call ext_007AA970
        sub esp, 0x4c
        mov ecx, esp
        mov dword ptr [esp + 0x50], esp
        push 0xaafff4
        call ext_006B9D80
        push 0x8
        mov ecx, esi
        call ext_007AA990
        push 0x7
        push 0x8
        mov ecx, esi
        call ext_007AAA00

        push 0x1
        push 0x9
        mov ecx, esi
        call ext_007AA8F0
        push 0x1
        push 0x9
        mov ecx, esi
        call ext_007AA930
        push 0x2
        push 0x9
        mov ecx, esi
        call ext_007AA950
        push 0x1
        push 0x9
        mov ecx, esi
        call ext_007AA970
        sub esp, 0x4c
        mov ecx, esp
        mov dword ptr [esp + 0x50], esp
        push 0xaaffec
        call ext_006B9D80
        push 0x9
        mov ecx, esi
        call ext_007AA990
        push 0x0
        push 0x9
        mov ecx, esi
        call ext_007AAA00

        push 0x1
        push 0xa
        mov ecx, esi
        call ext_007AA8F0
        push 0x1
        push 0xa
        mov ecx, esi
        call ext_007AA930
        push 0x2
        push 0xa
        mov ecx, esi
        call ext_007AA950
        push 0x1
        push 0xa
        mov ecx, esi
        call ext_007AA970
        sub esp, 0x4c
        mov ecx, esp
        mov dword ptr [esp + 0x50], esp
        push 0xaaffe0
        call ext_006B9D80
        push 0xa
        mov ecx, esi
        call ext_007AA990
        push 0x0
        push 0xa
        mov ecx, esi
        call ext_007AAA00

        push 0x1
        push 0xb
        mov ecx, esi
        call ext_007AA8F0
        push 0x1
        push 0xb
        mov ecx, esi
        call ext_007AA930
        push 0x2
        push 0xb
        mov ecx, esi
        call ext_007AA950
        push 0x1
        push 0xb
        mov ecx, esi
        call ext_007AA970
        sub esp, 0x4c
        mov ecx, esp
        mov dword ptr [esp + 0x50], esp
        push 0xaaffd8
        call ext_006B9D80
        push 0xb
        mov ecx, esi
        call ext_007AA990
        push 0x0
        push 0xb
        mov ecx, esi
        call ext_007AAA00

        push 0x1
        push 0xc
        mov ecx, esi
        call ext_007AA8F0
        push 0x1
        push 0xc
        mov ecx, esi
        call ext_007AA930
        push 0x2
        push 0xc
        mov ecx, esi
        call ext_007AA950
        push 0x1
        push 0xc
        mov ecx, esi
        call ext_007AA970
        sub esp, 0x4c
        mov ecx, esp
        mov dword ptr [esp + 0x50], esp
        push 0xaacab8
        call ext_006B9D80
        push 0xc
        mov ecx, esi
        call ext_007AA990
        push 0x0
        push 0xc
        mov ecx, esi
        call ext_007AAA00

        push 0x1
        push 0xd
        mov ecx, esi
        call ext_007AA8F0
        push 0x1
        push 0xd
        mov ecx, esi
        call ext_007AA930
        push 0x2
        push 0xd
        mov ecx, esi
        call ext_007AA950
        push 0x1
        push 0xd
        mov ecx, esi
        call ext_007AA970
        sub esp, 0x4c
        mov ecx, esp
        mov dword ptr [esp + 0x50], esp
        push 0xaaffc8
        call ext_006B9D80
        push 0xd
        mov ecx, esi
        call ext_007AA990
        push 0x0
        push 0xd
        mov ecx, esi
        call ext_007AAA00

        push 0x1
        push 0xe
        mov ecx, esi
        call ext_007AA8F0
        push 0x1
        push 0xe
        mov ecx, esi
        call ext_007AA930
        push 0x2
        push 0xe
        mov ecx, esi
        call ext_007AA950
        push 0x1
        push 0xe
        mov ecx, esi
        call ext_007AA970
        sub esp, 0x4c
        mov ecx, esp
        mov dword ptr [esp + 0x50], esp
        push 0xaaffc0
        call ext_006B9D80
        push 0xe
        mov ecx, esi
        call ext_007AA990
        push 0x0
        push 0xe
        mov ecx, esi
        call ext_007AAA00

        push 0x0
        push 0xf
        mov ecx, esi
        call ext_007AA8F0
        push 0x1
        push 0xf
        mov ecx, esi
        call ext_007AA930
        push 0x0
        push 0xf
        mov ecx, esi
        call ext_007AA950
        push 0x1
        push 0xf
        mov ecx, esi
        call ext_007AA970
        sub esp, 0x4c
        mov ecx, esp
        mov dword ptr [esp + 0x50], esp
        push 0xaaffb4
        call ext_006B9D80
        push 0xf
        mov ecx, esi
        call ext_007AA990
        push 0x0
        push 0xf
        mov ecx, esi
        call ext_007AAA00

        push 0x1
        push 0x10
        mov ecx, esi
        call ext_007AA8F0
        push 0x1
        push 0x10
        mov ecx, esi
        call ext_007AA930
        push 0x2
        push 0x10
        mov ecx, esi
        call ext_007AA950
        push 0x1
        push 0x10
        mov ecx, esi
        call ext_007AA970
        sub esp, 0x4c
        mov ecx, esp
        mov dword ptr [esp + 0x50], esp
        push 0xaaffa4
        call ext_006B9D80
        push 0x10
        mov ecx, esi
        call ext_007AA990
        push 0x0
        push 0x10
        mov ecx, esi
        call ext_007AAA00

        push 0x1
        push 0x11
        mov ecx, esi
        call ext_007AA8F0
        push 0x1
        push 0x11
        mov ecx, esi
        call ext_007AA930
        push 0x1
        push 0x11
        mov ecx, esi
        call ext_007AA950
        push 0x1
        push 0x11
        mov ecx, esi
        call ext_007AA970
        sub esp, 0x4c
        mov ecx, esp
        mov dword ptr [esp + 0x50], esp
        push 0xaaff94
        call ext_006B9D80
        push 0x11
        mov ecx, esi
        call ext_007AA990
        push 0x0
        push 0x11
        mov ecx, esi
        call ext_007AAA00

        lea eax, [esi + 0x7d4]
        xor ecx, ecx
        pop esi
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 0x4], ecx
        mov dword ptr [eax + 0x8], ecx
        pop ecx
        ret
    }
}

extern "C" void ext_007AA510();
extern "C" int mem_00925208;
extern "C" int mem_00B61219;
extern "C" int mem_0099793C;
extern "C" int mem_009251D8;
extern "C" int mem_0092522C;
extern "C" int mem_00997950;
extern "C" int mem_00997954;
extern "C" int mem_00997958;

// [0x0079F790] sub_0079F790 (1327 bytes)
extern "C" __declspec(naked) void __cdecl fn_0079F790() {
    __asm {
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 0xc]
        push esi
        xor esi, esi
        push edi
        mov eax, dword ptr [ebp]
        mov edi, dword ptr [esp + 0x18]
        cmp eax, esi
        jne loc_79F84B
        push 0x84
        call dword ptr [mem_00925208]
        add esp, 0x4
        cmp eax, esi
        mov dword ptr [ebp], eax
        jne loc_79F7D5
        push 0x1
        call ext_007AA510
        mov al, byte ptr [mem_00B61219]
        add esp, 0x4
        test al, al
        je loc_79FCBA
loc_79F7D5:
        mov eax, dword ptr [ebp]
        mov byte ptr [eax], 0x0
        mov ecx, dword ptr [ebp]
        mov byte ptr [ecx + 0xb], 0x0
        mov edx, dword ptr [ebp]
        mov word ptr [edx + 0x24], si
        mov eax, dword ptr [ebp]
        mov word ptr [eax + 0x22], si
        mov ecx, dword ptr [ebp]
        mov eax, dword ptr [esp + 0x1c]
        mov dword ptr [ecx + 0x28], edi
        mov edx, dword ptr [ebp]
        mov dword ptr [edx + 0x38], eax
        mov ecx, dword ptr [ebp]
        mov edx, dword ptr [esp + 0x20]
        mov dword ptr [ecx + 0x48], edx
        mov eax, dword ptr [ebp]
        mov edx, dword ptr [esp + 0x24]
        mov byte ptr [eax + 0x58], 0x0
        mov ecx, dword ptr [ebp]
        mov dword ptr [ecx + 0x70], edx
        mov eax, dword ptr [ebp]
        mov dword ptr [eax + 0x30], esi
        mov ecx, dword ptr [ebp]
        mov dword ptr [ecx + 0x34], esi
        mov edx, dword ptr [ebp]
        mov dword ptr [edx + 0x40], esi
        mov eax, dword ptr [ebp]
        mov dword ptr [eax + 0x44], esi
        mov ecx, dword ptr [ebp]
        mov dword ptr [ecx + 0x50], esi
        mov edx, dword ptr [ebp]
        mov dword ptr [edx + 0x54], esi
        mov eax, dword ptr [ebp]
        mov dword ptr [eax + 0x78], esi
        mov ecx, dword ptr [ebp]
        mov dword ptr [ecx + 0x7c], esi
loc_79F84B:
        cmp edi, esi
        je loc_79F97C
        mov edx, dword ptr [ebp]
        mov ax, word ptr [mem_0099793C]
        mov word ptr [edx + 0x2c], ax
        mov ecx, dword ptr [ebp]
        mov dword ptr [ecx + 0x28], edi
        mov edx, dword ptr [ebp]
        mov eax, dword ptr [edx + 0x30]
        cmp eax, esi
        je loc_79F884
        mov edi, dword ptr [mem_009251D8]
        push eax
        call edi
        mov eax, dword ptr [ebp]
        add esp, 0x4
        mov dword ptr [eax + 0x30], esi
        jmp loc_79F88A
loc_79F884:
        mov edi, dword ptr [mem_009251D8]
loc_79F88A:
        mov ecx, dword ptr [ebp]
        mov eax, dword ptr [ecx + 0x34]
        cmp eax, esi
        je loc_79F8A0
        push eax
        call edi
        mov edx, dword ptr [ebp]
        add esp, 0x4
        mov dword ptr [edx + 0x34], esi
loc_79F8A0:
        mov eax, dword ptr [ebp]
        mov ebx, dword ptr [mem_0092522C]
        push 0x1c
        mov ecx, dword ptr [eax + 0x28]
        push ecx
        call ebx
        mov edx, dword ptr [ebp]
        add esp, 0x8
        mov dword ptr [edx + 0x30], eax
        mov eax, dword ptr [ebp]
        cmp dword ptr [eax + 0x30], esi
        jne loc_79F8D9
        push 0x1
        call ext_007AA510
        mov al, byte ptr [mem_00B61219]
        add esp, 0x4
        test al, al
        je loc_79FCBA
loc_79F8D9:
        mov eax, dword ptr [ebp]
        xor edx, edx
        cmp dword ptr [eax + 0x28], esi
        jbe loc_79F910
        xor ebx, ebx
loc_79F8E5:
        mov edi, dword ptr [eax + 0x30]
        mov ecx, 0x7
        add edi, ebx
        mov esi, 0x997980
        rep movsd
        mov eax, dword ptr [ebp]
        inc edx
        add ebx, 0x1c
        cmp edx, dword ptr [eax + 0x28]
        jb loc_79F8E5
        mov edi, dword ptr [mem_009251D8]
        mov ebx, dword ptr [mem_0092522C]
        xor esi, esi
loc_79F910:
        mov ecx, dword ptr [ebp]
        push 0xc
        mov edx, dword ptr [ecx + 0x28]
        push edx
        call ebx
        mov ecx, dword ptr [ebp]
        add esp, 0x8
        mov dword ptr [ecx + 0x34], eax
        mov edx, dword ptr [ebp]
        cmp dword ptr [edx + 0x34], esi
        jne loc_79F943
        push 0x1
        call ext_007AA510
        mov al, byte ptr [mem_00B61219]
        add esp, 0x4
        test al, al
        je loc_79FCBA
loc_79F943:
        mov eax, dword ptr [ebp]
        xor ecx, ecx
        cmp dword ptr [eax + 0x28], esi
        jbe loc_79F988
        xor edx, edx
loc_79F94F:
        mov eax, dword ptr [eax + 0x34]
        mov ebx, dword ptr [mem_00997950]
        add eax, edx
        inc ecx
        add edx, 0xc
        mov dword ptr [eax], ebx
        mov ebx, dword ptr [mem_00997954]
        mov dword ptr [eax + 0x4], ebx
        mov ebx, dword ptr [mem_00997958]
        mov dword ptr [eax + 0x8], ebx
        mov eax, dword ptr [ebp]
        cmp ecx, dword ptr [eax + 0x28]
        jb loc_79F94F
        jmp loc_79F982
loc_79F97C:
        mov edi, dword ptr [mem_009251D8]
loc_79F982:
        mov ebx, dword ptr [mem_0092522C]
loc_79F988:
        mov eax, dword ptr [esp + 0x1c]
        cmp eax, esi
        je loc_79FA8F
        mov ecx, dword ptr [ebp]
        mov dx, word ptr [mem_0099793C]
        mov word ptr [ecx + 0x3c], dx
        mov ecx, dword ptr [ebp]
        mov dword ptr [ecx + 0x38], eax
        mov edx, dword ptr [ebp]
        mov eax, dword ptr [edx + 0x40]
        cmp eax, esi
        je loc_79F9BE
        push eax
        call edi
        mov eax, dword ptr [ebp]
        add esp, 0x4
        mov dword ptr [eax + 0x40], esi
loc_79F9BE:
        mov ecx, dword ptr [ebp]
        mov eax, dword ptr [ecx + 0x44]
        cmp eax, esi
        je loc_79F9D4
        push eax
        call edi
        mov edx, dword ptr [ebp]
        add esp, 0x4
        mov dword ptr [edx + 0x44], esi
loc_79F9D4:
        mov eax, dword ptr [ebp]
        push 0x1c
        mov ecx, dword ptr [eax + 0x38]
        push ecx
        call ebx
        mov edx, dword ptr [ebp]
        add esp, 0x8
        mov dword ptr [edx + 0x40], eax
        mov eax, dword ptr [ebp]
        cmp dword ptr [eax + 0x40], esi
        jne loc_79FA07
        push 0x1
        call ext_007AA510
        mov al, byte ptr [mem_00B61219]
        add esp, 0x4
        test al, al
        je loc_79FCBA
loc_79FA07:
        mov eax, dword ptr [ebp]
        xor edx, edx
        cmp dword ptr [eax + 0x38], esi
        jbe loc_79FA3E
        xor ebx, ebx
loc_79FA13:
        mov edi, dword ptr [eax + 0x40]
        mov ecx, 0x7
        add edi, ebx
        mov esi, 0x997980
        rep movsd
        mov eax, dword ptr [ebp]
        inc edx
        add ebx, 0x1c
        cmp edx, dword ptr [eax + 0x38]
        jb loc_79FA13
        mov edi, dword ptr [mem_009251D8]
        mov ebx, dword ptr [mem_0092522C]
        xor esi, esi
loc_79FA3E:
        mov ecx, dword ptr [ebp]
        push 0x4
        mov edx, dword ptr [ecx + 0x38]
        push edx
        call ebx
        mov ecx, dword ptr [ebp]
        add esp, 0x8
        mov dword ptr [ecx + 0x44], eax
        mov edx, dword ptr [ebp]
        cmp dword ptr [edx + 0x44], esi
        jne loc_79FA71
        push 0x1
        call ext_007AA510
        mov al, byte ptr [mem_00B61219]
        add esp, 0x4
        test al, al
        je loc_79FCBA
loc_79FA71:
        mov eax, dword ptr [ebp]
        xor ecx, ecx
        cmp dword ptr [eax + 0x38], esi
        jbe loc_79FA8F
loc_79FA7B:
        mov eax, dword ptr [eax + 0x44]
        inc ecx
        mov dword ptr [eax + 4*ecx - 0x4], 0x42700000
        mov eax, dword ptr [ebp]
        cmp ecx, dword ptr [eax + 0x38]
        jb loc_79FA7B
loc_79FA8F:
        mov eax, dword ptr [esp + 0x20]
        cmp eax, esi
        je loc_79FB92
        mov ecx, dword ptr [ebp]
        mov dx, word ptr [mem_0099793C]
        mov word ptr [ecx + 0x4c], dx
        mov ecx, dword ptr [ebp]
        mov dword ptr [ecx + 0x48], eax
        mov edx, dword ptr [ebp]
        mov eax, dword ptr [edx + 0x50]
        cmp eax, esi
        je loc_79FAC5
        push eax
        call edi
        mov eax, dword ptr [ebp]
        add esp, 0x4
        mov dword ptr [eax + 0x50], esi
loc_79FAC5:
        mov ecx, dword ptr [ebp]
        mov eax, dword ptr [ecx + 0x54]
        cmp eax, esi
        je loc_79FADB
        push eax
        call edi
        mov edx, dword ptr [ebp]
        add esp, 0x4
        mov dword ptr [edx + 0x54], esi
loc_79FADB:
        mov eax, dword ptr [ebp]
        push 0x1c
        mov ecx, dword ptr [eax + 0x48]
        push ecx
        call ebx
        mov edx, dword ptr [ebp]
        add esp, 0x8
        mov dword ptr [edx + 0x50], eax
        mov eax, dword ptr [ebp]
        cmp dword ptr [eax + 0x50], esi
        jne loc_79FB0E
        push 0x1
        call ext_007AA510
        mov al, byte ptr [mem_00B61219]
        add esp, 0x4
        test al, al
        je loc_79FCBA
loc_79FB0E:
        mov eax, dword ptr [ebp]
        xor edx, edx
        cmp dword ptr [eax + 0x48], esi
        jbe loc_79FB45
        xor ebx, ebx
loc_79FB1A:
        mov edi, dword ptr [eax + 0x50]
        mov ecx, 0x7
        add edi, ebx
        mov esi, 0x997980
        rep movsd
        mov eax, dword ptr [ebp]
        inc edx
        add ebx, 0x1c
        cmp edx, dword ptr [eax + 0x48]
        jb loc_79FB1A
        mov edi, dword ptr [mem_009251D8]
        mov ebx, dword ptr [mem_0092522C]
        xor esi, esi
loc_79FB45:
        mov ecx, dword ptr [ebp]
        push 0x4
        mov edx, dword ptr [ecx + 0x48]
        push edx
        call ebx
        mov ecx, dword ptr [ebp]
        add esp, 0x8
        mov dword ptr [ecx + 0x54], eax
        mov edx, dword ptr [ebp]
        cmp dword ptr [edx + 0x54], esi
        jne loc_79FB78
        push 0x1
        call ext_007AA510
        mov al, byte ptr [mem_00B61219]
        add esp, 0x4
        test al, al
        je loc_79FCBA
loc_79FB78:
        mov eax, dword ptr [ebp]
        xor ecx, ecx
        cmp dword ptr [eax + 0x48], esi
        jbe loc_79FB92
loc_79FB82:
        mov eax, dword ptr [eax + 0x54]
        inc ecx
        mov dword ptr [eax + 4*ecx - 0x4], esi
        mov eax, dword ptr [ebp]
        cmp ecx, dword ptr [eax + 0x48]
        jb loc_79FB82
loc_79FB92:
        mov eax, dword ptr [esp + 0x24]
        cmp eax, esi
        je loc_79FCBA
        mov ecx, dword ptr [ebp]
        mov dx, word ptr [mem_0099793C]
        mov word ptr [ecx + 0x74], dx
        mov ecx, dword ptr [ebp]
        mov word ptr [ecx + 0x82], si
        mov edx, dword ptr [ebp]
        mov word ptr [edx + 0x80], si
        mov ecx, dword ptr [ebp]
        mov dword ptr [ecx + 0x70], eax
        mov edx, dword ptr [ebp]
        mov eax, dword ptr [edx + 0x78]
        cmp eax, esi
        je loc_79FBDC
        push eax
        call edi
        mov eax, dword ptr [ebp]
        add esp, 0x4
        mov dword ptr [eax + 0x78], esi
loc_79FBDC:
        mov ecx, dword ptr [ebp]
        mov eax, dword ptr [ecx + 0x7c]
        cmp eax, esi
        je loc_79FBF2
        push eax
        call edi
        mov edx, dword ptr [ebp]
        add esp, 0x4
        mov dword ptr [edx + 0x7c], esi
loc_79FBF2:
        mov eax, dword ptr [ebp]
        push 0x1c
        mov ecx, dword ptr [eax + 0x70]
        push ecx
        call ebx
        mov edx, dword ptr [ebp]
        add esp, 0x8
        mov dword ptr [edx + 0x78], eax
        mov eax, dword ptr [ebp]
        cmp dword ptr [eax + 0x78], esi
        jne loc_79FC25
        push 0x1
        call ext_007AA510
        mov al, byte ptr [mem_00B61219]
        add esp, 0x4
        test al, al
        je loc_79FCBA
loc_79FC25:
        mov eax, dword ptr [ebp]
        xor edx, edx
        cmp dword ptr [eax + 0x70], esi
        jbe loc_79FC56
        xor ebx, ebx
loc_79FC31:
        mov edi, dword ptr [eax + 0x78]
        mov ecx, 0x7
        add edi, ebx
        mov esi, 0x997980
        rep movsd
        mov eax, dword ptr [ebp]
        inc edx
        add ebx, 0x1c
        cmp edx, dword ptr [eax + 0x70]
        jb loc_79FC31
        mov ebx, dword ptr [mem_0092522C]
        xor esi, esi
loc_79FC56:
        mov ecx, dword ptr [ebp]
        push 0xc
        mov edx, dword ptr [ecx + 0x70]
        push edx
        call ebx
        mov ecx, dword ptr [ebp]
        add esp, 0x8
        mov dword ptr [ecx + 0x7c], eax
        mov edx, dword ptr [ebp]
        cmp dword ptr [edx + 0x7c], esi
        jne loc_79FC85
        push 0x1
        call ext_007AA510
        mov al, byte ptr [mem_00B61219]
        add esp, 0x4
        test al, al
        je loc_79FCBA
loc_79FC85:
        mov eax, dword ptr [ebp]
        xor ecx, ecx
        cmp dword ptr [eax + 0x70], esi
        jbe loc_79FCBA
loc_79FC8F:
        mov eax, dword ptr [eax + 0x7c]
        mov edx, dword ptr [mem_00997950]
        add eax, esi
        inc ecx
        add esi, 0xc
        mov dword ptr [eax], edx
        mov edx, dword ptr [mem_00997954]
        mov dword ptr [eax + 0x4], edx
        mov edx, dword ptr [mem_00997958]
        mov dword ptr [eax + 0x8], edx
        mov eax, dword ptr [ebp]
        cmp ecx, dword ptr [eax + 0x70]
        jb loc_79FC8F
loc_79FCBA:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}

// [0x00796C60] sub_00796C60 (5359 bytes)
extern "C" void ext_00796740();
extern "C" void ext_00796B60();
extern "C" __declspec(naked) void __fastcall fn_00796C60(void* self) {
    __asm {
        push    ebp
        mov     ebp, esp
        and     esp, -0x8
        sub     esp, 0x24
        mov     ecx, dword ptr [ebp + 0x14]
        push    ebx
        push    esi
        cmp     ecx, 0x1
        push    edi
        ja      loc_796CAF
        mov     ecx, dword ptr [ebp + 0x18]
        mov     edx, dword ptr [ebp + 0x10]
        fld     qword ptr [ebp + 0x8]
        fcomp   qword ptr [ecx + 8*edx]
        fnstsw  ax
        test    ah, 0x1
        jne     loc_796CA2
        fld     qword ptr [ebp + 0x8]
        fcomp   qword ptr [ecx + 8*edx + 0x8]
        fnstsw  ax
        test    ah, 0x1
        je      loc_796CA2
        fld     qword ptr [mem_0092A270]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
loc_796CA2:
        fld     qword ptr [mem_0092A278]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
loc_796CAF:
        mov     edi, dword ptr [ebp + 0x10]
        mov     esi, dword ptr [ebp + 0x18]
        mov     ebx, dword ptr [ebp + 0xc]
        lea     eax, [edi + ecx]
        fld     qword ptr [esi + 8*eax - 0x8]
        fsub    qword ptr [esi + 8*edi]
        lea     edx, [esi + 8*eax]
        mov     dword ptr [esp + 0x10], edx
        fst     qword ptr [esp + 0x20]
        fcomp   qword ptr [mem_00997100]
        fnstsw  ax
        test    ah, 0x41
        jne     loc_796D21
        lea     eax, [ecx - 0x1]
        mov     ecx, dword ptr [ebp + 0x8]
        push    esi
        push    eax
        push    edi
        push    ebx
        push    ecx
        call    fn_00796C60
        fld     qword ptr [ebp + 0x8]
        fsub    qword ptr [esi + 8*edi]
        mov     edx, dword ptr [ebp + 0x14]
        push    esi
        lea     eax, [edx - 0x1]
        fmulp   st(1), st
        push    eax
        mov     eax, dword ptr [ebp + 0x8]
        push    edi
        push    ebx
        fstp    qword ptr [esp + 0x3c]
        push    eax
        call    ext_00796B60
        fadd    qword ptr [esp + 0x40]
        mov     edx, dword ptr [esp + 0x38]
        mov     ecx, dword ptr [ebp + 0x14]
        add     esp, 0x28
        fdiv    qword ptr [esp + 0x20]
        fstp    qword ptr [esp + 0x20]
        jmp     loc_796D31
loc_796D21:
        mov     dword ptr [esp + 0x20], 0x0
        mov     dword ptr [esp + 0x24], 0x0
loc_796D31:
        fld     qword ptr [edx]
        fsub    qword ptr [esi + 8*edi + 0x8]
        inc     edi
        fst     qword ptr [esp + 0x28]
        fcomp   qword ptr [mem_00997100]
        fnstsw  ax
        test    ah, 0x41
        jne     loc_796D93
        lea     eax, [ecx - 0x1]
        mov     ecx, dword ptr [ebp + 0x8]
        push    esi
        push    eax
        push    edi
        push    ebx
        push    ecx
        mov     dword ptr [esp + 0x2c], eax
        call    fn_00796C60
        mov     edx, dword ptr [esp + 0x24]
        mov     eax, dword ptr [esp + 0x2c]
        mov     ecx, dword ptr [ebp + 0x8]
        push    esi
        fld     qword ptr [edx]
        fsub    qword ptr [ebp + 0x8]
        push    eax
        push    edi
        push    ebx
        push    ecx
        fmulp   st(1), st
        fstp    qword ptr [esp + 0x38]
        call    ext_00796B60
        fsubr   qword ptr [esp + 0x38]
        add     esp, 0x28
        fdiv    qword ptr [esp + 0x28]
        fadd    qword ptr [esp + 0x20]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
loc_796D93:
        fld     qword ptr [mem_0092A278]
        fadd    qword ptr [esp + 0x20]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
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
        nop
        nop
        nop
        push    ebp
        mov     ebp, esp
        and     esp, -0x8
        sub     esp, 0x60
        push    ebx
        push    ebp
        push    esi
        mov     esi, ecx
        push    edi
        mov     eax, dword ptr [esi + 0x238]
        test    eax, eax
        je      loc_796DD2
        push    eax
        call    ext_006A5C5C
        add     esp, 0x4
loc_796DD2:
        mov     eax, dword ptr [esi + 0x240]
        test    eax, eax
        je      loc_796DE5
        push    eax
        call    ext_006A5C5C
        add     esp, 0x4
loc_796DE5:
        mov     eax, dword ptr [esi + 0x27c]
        test    eax, eax
        je      loc_796DF8
        push    eax
        call    ext_006A5C5C
        add     esp, 0x4
loc_796DF8:
        mov     eax, dword ptr [esi + 0xc]
        mov     ecx, dword ptr [esi + 0x4c]
        cmp     eax, 0x1
        mov     eax, dword ptr [esi + 0x14]
        push    eax
        je      loc_796E2B
        mov     edx, dword ptr [esi + 0x268]
        add     ecx, eax
        push    ecx
        push    edx
        mov     ecx, esi
        call    ext_00796740
        mov     dword ptr [esi + 0x270], eax
        imul    eax, dword ptr [esi + 0x1c]
        lea     eax, [4*eax + 0x4]
        jmp     loc_796E4B
loc_796E2B:
        lea     edx, [ecx + 2*eax - 0x1]
        mov     eax, dword ptr [esi + 0x268]
        push    edx
        push    eax
        mov     ecx, esi
        call    ext_00796740
        mov     dword ptr [esi + 0x270], eax
        imul    eax, dword ptr [esi + 0x1c]
        shl     eax, 0x2
loc_796E4B:
        mov     ecx, eax
        mov     dword ptr [esi + 0x22c], eax
        shl     ecx, 0x3
        push    ecx
        call    ext_006A5C62
        mov     edx, dword ptr [esi + 0x22c]
        mov     dword ptr [esi + 0x238], eax
        shl     edx, 0x3
        push    edx
        mov     edi, eax
        call    ext_006A5C62
        mov     dword ptr [esi + 0x240], eax
        mov     ebx, eax
        mov     eax, dword ptr [esi + 0x270]
        shl     eax, 0x2
        push    eax
        call    ext_006A5C62
        mov     edx, dword ptr [esi + 0x270]
        add     esp, 0xc
        xor     ecx, ecx
        mov     dword ptr [esi + 0x27c], eax
        test    edx, edx
        mov     dword ptr [esp + 0x14], ecx
        mov     dword ptr [esp + 0x1c], edx
        je      loc_797173
loc_796EAB:
        mov     eax, dword ptr [esi + 0x270]
        cmp     edx, eax
        jne     loc_796EC7
        mov     ebp, dword ptr [esi + 0x27c]
        sub     eax, edx
        mov     dword ptr [ebp + 4*eax], 0x0
        jmp     loc_796ED7
loc_796EC7:
        mov     ebp, dword ptr [esi + 0x27c]
        sub     eax, edx
        mov     dword ptr [ebp + 4*eax], 0x1
loc_796ED7:
        mov     ebp, dword ptr [esi + 0x14]
        mov     eax, ecx
        add     eax, ebp
        mov     ebp, dword ptr [esi + 0x268]
        fld     qword ptr [ebp + 8*eax]
        fsub    qword ptr [ebp + 8*eax - 0x8]
        lea     eax, [ebp + 8*eax]
        fcomp   qword ptr [mem_00997100]
        fnstsw  ax
        test    ah, 0x1
        je      loc_796F3F
loc_796EFD:
        mov     eax, dword ptr [esi + 0x270]
        mov     ebp, dword ptr [esi + 0x27c]
        sub     eax, edx
        lea     eax, [ebp + 4*eax]
        mov     ebp, dword ptr [eax]
        inc     ebp
        inc     ecx
        mov     dword ptr [eax], ebp
        mov     ebp, dword ptr [esi + 0x14]
        mov     eax, ecx
        add     eax, ebp
        mov     ebp, dword ptr [esi + 0x268]
        fld     qword ptr [ebp + 8*eax]
        fsub    qword ptr [ebp + 8*eax - 0x8]
        lea     eax, [ebp + 8*eax]
        fcomp   qword ptr [mem_00997100]
        fnstsw  ax
        test    ah, 0x1
        jne     loc_796EFD
        mov     dword ptr [esp + 0x14], ecx
loc_796F3F:
        mov     ebp, dword ptr [esi + 0x14]
        mov     eax, ecx
        add     eax, ebp
        mov     ebp, dword ptr [esi + 0x268]
        mov     dword ptr [esp + 0x2c], 0x0
        cmp     edx, 0x1
        lea     eax, [ebp + 8*eax]
        mov     dword ptr [esp + 0x18], eax
        mov     ebp, dword ptr [eax - 0x8]
        mov     eax, dword ptr [eax - 0x4]
        mov     dword ptr [esp + 0x20], ebp
        mov     ebp, dword ptr [esp + 0x18]
        mov     dword ptr [esp + 0x24], eax
        mov     eax, dword ptr [esi + 0x1c]
        fld     qword ptr [ebp]
        fsub    qword ptr [esp + 0x20]
        mov     dword ptr [esp + 0x28], eax
        fild    qword ptr [esp + 0x28]
        fadd    qword ptr [mem_00997100]
        fdivp   st(1), st
        fstp    qword ptr [esp + 0x68]
        jne     loc_796F97
        cmp     dword ptr [esi + 0xc], edx
        je      loc_796F97
        inc     eax
loc_796F97:
        test    eax, eax
        je      loc_797163
        mov     dword ptr [esp + 0x18], eax
loc_796FA3:
        mov     edx, dword ptr [esi + 0x268]
        mov     eax, dword ptr [esi + 0x14]
        mov     ebp, dword ptr [esp + 0x24]
        push    edx
        push    eax
        push    ecx
        mov     ecx, dword ptr [esp + 0x2c]
        push    ebp
        push    ecx
        call    ext_00796B60
        mov     edx, dword ptr [esi + 0x268]
        mov     eax, dword ptr [esi + 0x14]
        mov     ecx, dword ptr [esp + 0x28]
        push    edx
        mov     edx, dword ptr [esp + 0x38]
        push    eax
        fstp    qword ptr [esp + 0x4c]
        lea     eax, [ecx + 0x1]
        push    eax
        push    ebp
        push    edx
        call    ext_00796B60
        mov     eax, dword ptr [esi + 0x268]
        mov     edx, dword ptr [esp + 0x3c]
        mov     ecx, dword ptr [esi + 0x14]
        push    eax
        fstp    qword ptr [esp + 0x64]
        lea     eax, [edx + 0x2]
        push    ecx
        push    eax
        mov     eax, dword ptr [esp + 0x54]
        push    ebp
        push    eax
        call    ext_00796B60
        mov     ecx, dword ptr [esi + 0x268]
        mov     eax, dword ptr [esp + 0x50]
        mov     edx, dword ptr [esi + 0x14]
        push    ecx
        mov     ecx, dword ptr [esp + 0x60]
        add     eax, 0x3
        fstp    qword ptr [esp + 0x80]
        push    edx
        push    eax
        push    ebp
        push    ecx
        call    ext_00796B60
        mov     edx, dword ptr [esi + 0x268]
        mov     eax, dword ptr [esi + 0x14]
        mov     ecx, dword ptr [esp + 0x64]
        add     esp, 0x50
        fstp    qword ptr [esp + 0x48]
        push    edx
        mov     edx, dword ptr [esp + 0x24]
        push    eax
        push    ecx
        push    ebp
        push    edx
        call    fn_00796C60
        mov     eax, dword ptr [esi + 0x268]
        mov     edx, dword ptr [esp + 0x28]
        mov     ecx, dword ptr [esi + 0x14]
        push    eax
        fstp    qword ptr [esp + 0x68]
        lea     eax, [edx + 0x1]
        push    ecx
        push    eax
        mov     eax, dword ptr [esp + 0x40]
        push    ebp
        push    eax
        call    fn_00796C60
        mov     ecx, dword ptr [esi + 0x268]
        mov     eax, dword ptr [esp + 0x3c]
        mov     edx, dword ptr [esi + 0x14]
        push    ecx
        mov     ecx, dword ptr [esp + 0x4c]
        add     eax, 0x2
        fstp    qword ptr [esp + 0x84]
        push    edx
        push    eax
        push    ebp
        push    ecx
        call    fn_00796C60
        mov     edx, dword ptr [esi + 0x268]
        mov     eax, dword ptr [esi + 0x14]
        mov     ecx, dword ptr [esp + 0x50]
        push    edx
        mov     edx, dword ptr [esp + 0x60]
        push    eax
        fstp    qword ptr [esp + 0xa4]
        lea     eax, [ecx + 0x3]
        push    eax
        push    ebp
        push    edx
        call    fn_00796C60
        mov     eax, dword ptr [esp + 0x80]
        mov     ecx, dword ptr [esp + 0x84]
        mov     edx, dword ptr [esp + 0x88]
        mov     dword ptr [edi], eax
        mov     eax, dword ptr [esp + 0x8c]
        mov     dword ptr [edi + 0x4], ecx
        mov     ecx, dword ptr [esp + 0x90]
        add     edi, 0x8
        add     ebx, 0x8
        add     esp, 0x50
        mov     dword ptr [edi], edx
        mov     edx, dword ptr [esp + 0x44]
        mov     dword ptr [edi + 0x4], eax
        mov     eax, dword ptr [esp + 0x48]
        add     edi, 0x8
        add     ebx, 0x8
        add     ebx, 0x8
        mov     dword ptr [edi], ecx
        mov     ecx, dword ptr [esp + 0x4c]
        mov     dword ptr [edi + 0x4], edx
        mov     edx, dword ptr [esp + 0x50]
        add     edi, 0x8
        add     ebx, 0x8
        mov     dword ptr [edi], eax
        mov     eax, dword ptr [esp + 0x54]
        mov     dword ptr [edi + 0x4], ecx
        mov     ecx, dword ptr [esp + 0x58]
        mov     dword ptr [ebx - 0x20], edx
        mov     edx, dword ptr [esp + 0x5c]
        mov     dword ptr [ebx - 0x1c], eax
        mov     eax, dword ptr [esp + 0x60]
        mov     dword ptr [ebx - 0x18], ecx
        mov     ecx, dword ptr [esp + 0x64]
        mov     dword ptr [ebx - 0x14], edx
        mov     dword ptr [ebx - 0x10], eax
        mov     dword ptr [ebx - 0xc], ecx
        mov     eax, dword ptr [esp + 0x18]
        fstp    qword ptr [ebx - 0x8]
        fld     qword ptr [esp + 0x68]
        fadd    qword ptr [esp + 0x20]
        mov     ecx, dword ptr [esp + 0x14]
        add     edi, 0x8
        dec     eax
        mov     dword ptr [esp + 0x18], eax
        fstp    qword ptr [esp + 0x20]
        jne     loc_796FA3
        mov     edx, dword ptr [esp + 0x1c]
loc_797163:
        inc     ecx
        dec     edx
        mov     dword ptr [esp + 0x14], ecx
        mov     dword ptr [esp + 0x1c], edx
        jne     loc_796EAB
loc_797173:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
        nop
        nop
        nop
        nop
        nop
        push    ebp
        mov     ebp, esp
        and     esp, -0x8
        sub     esp, 0x28
        push    ebx
        push    ebp
        push    esi
        mov     esi, ecx
        push    edi
        mov     eax, dword ptr [esi + 0x244]
        test    eax, eax
        je      loc_7971A2
        push    eax
        call    ext_006A5C5C
        add     esp, 0x4
loc_7971A2:
        mov     ecx, dword ptr [esi + 0x18]
        mov     eax, dword ptr [esi + 0x8]
        imul    ecx, dword ptr [esi + 0x26c]
        mov     ebx, 0x1
        cmp     eax, ebx
        je      loc_7971B9
        inc     ecx
loc_7971B9:
        mov     eax, dword ptr [esi + 0x1c]
        mov     edx, dword ptr [esi + 0xc]
        dec     eax
        imul    eax, ecx
        add     eax, ecx
        imul    eax, dword ptr [esi + 0x270]
        cmp     edx, ebx
        mov     dword ptr [esi + 0x274], eax
        je      loc_7971DE
        add     eax, ecx
        mov     dword ptr [esi + 0x274], eax
loc_7971DE:
        mov     eax, dword ptr [esi + 0x274]
        shl     eax, 0x4
        mov     dword ptr [esi + 0x230], eax
        shl     eax, 0x3
        push    eax
        call    ext_006A5C62
        mov     ebp, dword ptr [esi + 0x270]
        mov     edi, dword ptr [esi + 0x26c]
        mov     edx, dword ptr [esi + 0x238]
        add     esp, 0x4
        test    ebp, ebp
        mov     dword ptr [esi + 0x244], eax
        mov     dword ptr [esp + 0x1c], edi
        mov     dword ptr [esp + 0x18], ebp
        jbe     loc_797392
loc_797221:
        mov     ecx, dword ptr [esi + 0x1c]
        cmp     ebp, ebx
        jne     loc_79722E
        cmp     dword ptr [esi + 0xc], ebx
        je      loc_79722E
        inc     ecx
loc_79722E:
        test    ecx, ecx
        jbe     loc_797387
        mov     dword ptr [esp + 0x14], ecx
loc_79723A:
        fld     qword ptr [edx]
        fld     qword ptr [edx + 0x8]
        add     edx, 0x8
        mov     ecx, dword ptr [esi + 0x234]
        add     edx, 0x8
        mov     dword ptr [esp + 0x10], edi
        fld     qword ptr [edx]
        fld     qword ptr [edx + 0x8]
        add     edx, 0x8
        add     edx, 0x8
        test    edi, edi
        jbe     loc_79739A
loc_797262:
        mov     ebp, dword ptr [esp + 0x10]
        mov     edi, dword ptr [esi + 0x18]
        cmp     ebp, ebx
        jne     loc_797273
        cmp     dword ptr [esi + 0x8], ebx
        je      loc_797273
        inc     edi
loc_797273:
        test    edi, edi
        jbe     loc_797359
loc_79727B:
        fld     qword ptr [ecx]
        fld     qword ptr [ecx + 0x8]
        add     ecx, 0x8
        add     eax, 0x8
        fst     qword ptr [esp + 0x30]
        fld     qword ptr [ecx + 0x8]
        add     ecx, 0x8
        add     eax, 0x8
        fst     qword ptr [esp + 0x28]
        mov     ebx, dword ptr [ecx + 0x8]
        mov     ebp, dword ptr [ecx + 0xc]
        fld     st(2)
        fmul    st, st(7)
        add     ecx, 0x8
        mov     dword ptr [esp + 0x20], ebx
        mov     dword ptr [esp + 0x24], ebp
        add     eax, 0x8
        add     ecx, 0x8
        fstp    qword ptr [eax - 0x18]
        fld     st(1)
        fmul    st, st(7)
        add     eax, 0x8
        add     eax, 0x8
        fstp    qword ptr [eax - 0x20]
        add     eax, 0x8
        fld     st(0)
        fmul    st, st(7)
        add     eax, 0x8
        add     eax, 0x8
        fstp    qword ptr [eax - 0x30]
        fld     qword ptr [esp + 0x20]
        fmul    st, st(7)
        add     eax, 0x8
        add     eax, 0x8
        fstp    qword ptr [eax - 0x38]
        fld     st(2)
        fmul    st, st(6)
        add     eax, 0x8
        add     eax, 0x8
        fstp    qword ptr [eax - 0x40]
        fld     st(1)
        fmul    st, st(6)
        add     eax, 0x8
        add     eax, 0x8
        fstp    qword ptr [eax - 0x48]
        add     eax, 0x8
        fmul    st, st(5)
        add     eax, 0x8
        dec     edi
        fstp    qword ptr [eax - 0x50]
        fld     qword ptr [esp + 0x20]
        fmul    st, st(5)
        fstp    qword ptr [eax - 0x48]
        fld     st(1)
        fmul    st, st(4)
        fstp    qword ptr [eax - 0x40]
        fmul    st, st(3)
        fstp    qword ptr [eax - 0x38]
        fld     qword ptr [esp + 0x28]
        fmul    st, st(3)
        fstp    qword ptr [eax - 0x30]
        fld     qword ptr [esp + 0x20]
        fmul    st, st(3)
        fstp    qword ptr [eax - 0x28]
        fmul    st, st(1)
        fstp    qword ptr [eax - 0x20]
        fld     qword ptr [esp + 0x30]
        fmul    st, st(1)
        fstp    qword ptr [eax - 0x18]
        fld     qword ptr [esp + 0x28]
        fmul    st, st(1)
        fstp    qword ptr [eax - 0x10]
        fld     qword ptr [esp + 0x20]
        fmul    st, st(1)
        fstp    qword ptr [eax - 0x8]
        jne     loc_79727B
        mov     ebx, 0x1
loc_797359:
        mov     edi, dword ptr [esp + 0x10]
        dec     edi
        mov     dword ptr [esp + 0x10], edi
        jne     loc_797262
        mov     edi, dword ptr [esp + 0x1c]
        fstp    st(0)
        fstp    st(0)
        fstp    st(0)
        fstp    st(0)
loc_797374:
        mov     ecx, dword ptr [esp + 0x14]
        dec     ecx
        mov     dword ptr [esp + 0x14], ecx
        jne     loc_79723A
        mov     ebp, dword ptr [esp + 0x18]
loc_797387:
        dec     ebp
        mov     dword ptr [esp + 0x18], ebp
        jne     loc_797221
loc_797392:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
loc_79739A:
        fstp    st(0)
        fstp    st(0)
        fstp    st(0)
        fstp    st(0)
        jmp     loc_797374
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
        nop
        push    ebp
        mov     ebp, esp
        and     esp, -0x8
        sub     esp, 0x28
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, ecx
        mov     eax, dword ptr [edi + 0x248]
        test    eax, eax
        je      loc_7973D2
        push    eax
        call    ext_006A5C5C
        add     esp, 0x4
loc_7973D2:
        mov     eax, dword ptr [edi + 0x230]
        shl     eax, 0x3
        push    eax
        call    ext_006A5C62
        mov     esi, dword ptr [edi + 0x270]
        mov     edx, dword ptr [edi + 0x238]
        add     esp, 0x4
        mov     dword ptr [edi + 0x248], eax
        test    esi, esi
        mov     dword ptr [esp + 0x1c], esi
        jbe     loc_797576
        mov     ebp, 0x1
loc_797407:
        mov     ecx, dword ptr [edi + 0x1c]
        cmp     esi, ebp
        jne     loc_797414
        cmp     dword ptr [edi + 0xc], ebp
        je      loc_797414
        inc     ecx
loc_797414:
        test    ecx, ecx
        jbe     loc_79756B
        mov     dword ptr [esp + 0x18], ecx
loc_797420:
        fld     qword ptr [edx]
        fld     qword ptr [edx + 0x8]
        add     edx, 0x8
        mov     ebx, dword ptr [edi + 0x26c]
        add     edx, 0x8
        mov     ecx, dword ptr [edi + 0x23c]
        mov     dword ptr [esp + 0x14], ebx
        fld     qword ptr [edx]
        fld     qword ptr [edx + 0x8]
        add     edx, 0x8
        add     edx, 0x8
        test    ebx, ebx
        jbe     loc_797550
loc_79744E:
        mov     esi, dword ptr [edi + 0x18]
        cmp     ebx, ebp
        jne     loc_79745B
        cmp     dword ptr [edi + 0x8], ebp
        je      loc_79745B
        inc     esi
loc_79745B:
        test    esi, esi
        jbe     loc_797545
loc_797463:
        fld     qword ptr [ecx]
        fld     qword ptr [ecx + 0x8]
        add     ecx, 0x8
        add     eax, 0x8
        fst     qword ptr [esp + 0x30]
        fld     qword ptr [ecx + 0x8]
        add     ecx, 0x8
        add     eax, 0x8
        fst     qword ptr [esp + 0x28]
        mov     ebx, dword ptr [ecx + 0x8]
        mov     ebp, dword ptr [ecx + 0xc]
        fld     st(2)
        fmul    st, st(7)
        add     ecx, 0x8
        mov     dword ptr [esp + 0x20], ebx
        mov     dword ptr [esp + 0x24], ebp
        add     eax, 0x8
        add     ecx, 0x8
        fstp    qword ptr [eax - 0x18]
        fld     st(1)
        fmul    st, st(7)
        add     eax, 0x8
        add     eax, 0x8
        fstp    qword ptr [eax - 0x20]
        add     eax, 0x8
        fld     st(0)
        fmul    st, st(7)
        add     eax, 0x8
        add     eax, 0x8
        fstp    qword ptr [eax - 0x30]
        fld     qword ptr [esp + 0x20]
        fmul    st, st(7)
        add     eax, 0x8
        add     eax, 0x8
        fstp    qword ptr [eax - 0x38]
        fld     st(2)
        fmul    st, st(6)
        add     eax, 0x8
        add     eax, 0x8
        fstp    qword ptr [eax - 0x40]
        fld     st(1)
        fmul    st, st(6)
        add     eax, 0x8
        add     eax, 0x8
        fstp    qword ptr [eax - 0x48]
        add     eax, 0x8
        fmul    st, st(5)
        add     eax, 0x8
        dec     esi
        fstp    qword ptr [eax - 0x50]
        fld     qword ptr [esp + 0x20]
        fmul    st, st(5)
        fstp    qword ptr [eax - 0x48]
        fld     st(1)
        fmul    st, st(4)
        fstp    qword ptr [eax - 0x40]
        fmul    st, st(3)
        fstp    qword ptr [eax - 0x38]
        fld     qword ptr [esp + 0x28]
        fmul    st, st(3)
        fstp    qword ptr [eax - 0x30]
        fld     qword ptr [esp + 0x20]
        fmul    st, st(3)
        fstp    qword ptr [eax - 0x28]
        fmul    st, st(1)
        fstp    qword ptr [eax - 0x20]
        fld     qword ptr [esp + 0x30]
        fmul    st, st(1)
        fstp    qword ptr [eax - 0x18]
        fld     qword ptr [esp + 0x28]
        fmul    st, st(1)
        fstp    qword ptr [eax - 0x10]
        fld     qword ptr [esp + 0x20]
        fmul    st, st(1)
        fstp    qword ptr [eax - 0x8]
        jne     loc_797463
        mov     ebx, dword ptr [esp + 0x14]
        mov     ebp, 0x1
loc_797545:
        dec     ebx
        mov     dword ptr [esp + 0x14], ebx
        jne     loc_79744E
loc_797550:
        mov     ecx, dword ptr [esp + 0x18]
        fstp    st(0)
        fstp    st(0)
        fstp    st(0)
        dec     ecx
        fstp    st(0)
        mov     dword ptr [esp + 0x18], ecx
        jne     loc_797420
        mov     esi, dword ptr [esp + 0x1c]
loc_79756B:
        dec     esi
        mov     dword ptr [esp + 0x1c], esi
        jne     loc_797407
loc_797576:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
        nop
        nop
        push    ebp
        mov     ebp, esp
        and     esp, -0x8
        sub     esp, 0x28
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, ecx
        mov     eax, dword ptr [edi + 0x24c]
        test    eax, eax
        je      loc_7975A2
        push    eax
        call    ext_006A5C5C
        add     esp, 0x4
loc_7975A2:
        mov     eax, dword ptr [edi + 0x230]
        shl     eax, 0x3
        push    eax
        call    ext_006A5C62
        mov     esi, dword ptr [edi + 0x270]
        mov     edx, dword ptr [edi + 0x240]
        add     esp, 0x4
        mov     dword ptr [edi + 0x24c], eax
        test    esi, esi
        mov     dword ptr [esp + 0x1c], esi
        jbe     loc_797746
        mov     ebp, 0x1
loc_7975D7:
        mov     ecx, dword ptr [edi + 0x1c]
        cmp     esi, ebp
        jne     loc_7975E4
        cmp     dword ptr [edi + 0xc], ebp
        je      loc_7975E4
        inc     ecx
loc_7975E4:
        test    ecx, ecx
        jbe     loc_79773B
        mov     dword ptr [esp + 0x18], ecx
loc_7975F0:
        fld     qword ptr [edx]
        fld     qword ptr [edx + 0x8]
        add     edx, 0x8
        mov     ebx, dword ptr [edi + 0x26c]
        add     edx, 0x8
        mov     ecx, dword ptr [edi + 0x234]
        mov     dword ptr [esp + 0x14], ebx
        fld     qword ptr [edx]
        fld     qword ptr [edx + 0x8]
        add     edx, 0x8
        add     edx, 0x8
        test    ebx, ebx
        jbe     loc_797720
loc_79761E:
        mov     esi, dword ptr [edi + 0x18]
        cmp     ebx, ebp
        jne     loc_79762B
        cmp     dword ptr [edi + 0x8], ebp
        je      loc_79762B
        inc     esi
loc_79762B:
        test    esi, esi
        jbe     loc_797715
loc_797633:
        fld     qword ptr [ecx]
        fld     qword ptr [ecx + 0x8]
        add     ecx, 0x8
        add     eax, 0x8
        fst     qword ptr [esp + 0x30]
        fld     qword ptr [ecx + 0x8]
        add     ecx, 0x8
        add     eax, 0x8
        fst     qword ptr [esp + 0x28]
        mov     ebx, dword ptr [ecx + 0x8]
        mov     ebp, dword ptr [ecx + 0xc]
        fld     st(2)
        fmul    st, st(7)
        add     ecx, 0x8
        mov     dword ptr [esp + 0x20], ebx
        mov     dword ptr [esp + 0x24], ebp
        add     eax, 0x8
        add     ecx, 0x8
        fstp    qword ptr [eax - 0x18]
        fld     st(1)
        fmul    st, st(7)
        add     eax, 0x8
        add     eax, 0x8
        fstp    qword ptr [eax - 0x20]
        add     eax, 0x8
        fld     st(0)
        fmul    st, st(7)
        add     eax, 0x8
        add     eax, 0x8
        fstp    qword ptr [eax - 0x30]
        fld     qword ptr [esp + 0x20]
        fmul    st, st(7)
        add     eax, 0x8
        add     eax, 0x8
        fstp    qword ptr [eax - 0x38]
        fld     st(2)
        fmul    st, st(6)
        add     eax, 0x8
        add     eax, 0x8
        fstp    qword ptr [eax - 0x40]
        fld     st(1)
        fmul    st, st(6)
        add     eax, 0x8
        add     eax, 0x8
        fstp    qword ptr [eax - 0x48]
        add     eax, 0x8
        fmul    st, st(5)
        add     eax, 0x8
        dec     esi
        fstp    qword ptr [eax - 0x50]
        fld     qword ptr [esp + 0x20]
        fmul    st, st(5)
        fstp    qword ptr [eax - 0x48]
        fld     st(1)
        fmul    st, st(4)
        fstp    qword ptr [eax - 0x40]
        fmul    st, st(3)
        fstp    qword ptr [eax - 0x38]
        fld     qword ptr [esp + 0x28]
        fmul    st, st(3)
        fstp    qword ptr [eax - 0x30]
        fld     qword ptr [esp + 0x20]
        fmul    st, st(3)
        fstp    qword ptr [eax - 0x28]
        fmul    st, st(1)
        fstp    qword ptr [eax - 0x20]
        fld     qword ptr [esp + 0x30]
        fmul    st, st(1)
        fstp    qword ptr [eax - 0x18]
        fld     qword ptr [esp + 0x28]
        fmul    st, st(1)
        fstp    qword ptr [eax - 0x10]
        fld     qword ptr [esp + 0x20]
        fmul    st, st(1)
        fstp    qword ptr [eax - 0x8]
        jne     loc_797633
        mov     ebx, dword ptr [esp + 0x14]
        mov     ebp, 0x1
loc_797715:
        dec     ebx
        mov     dword ptr [esp + 0x14], ebx
        jne     loc_79761E
loc_797720:
        mov     ecx, dword ptr [esp + 0x18]
        fstp    st(0)
        fstp    st(0)
        fstp    st(0)
        dec     ecx
        fstp    st(0)
        mov     dword ptr [esp + 0x18], ecx
        jne     loc_7975F0
        mov     esi, dword ptr [esp + 0x1c]
loc_79773B:
        dec     esi
        mov     dword ptr [esp + 0x1c], esi
        jne     loc_7975D7
loc_797746:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
        nop
        nop
        push    ebp
        mov     ebp, esp
        and     esp, -0x8
        sub     esp, 0xa0
        push    ebx
        push    ebp
        push    esi
        mov     esi, ecx
        push    edi
        mov     dword ptr [esp + 0x74], esi
        mov     eax, dword ptr [esi + 0x258]
        test    eax, eax
        je      loc_797779
        push    eax
        call    ext_006A5C5C
        add     esp, 0x4
loc_797779:
        mov     eax, dword ptr [esi + 0x230]
        lea     eax, [eax + 2*eax]
        shr     eax, 0x4
        shl     eax, 0x3
        push    eax
        call    ext_006A5C62
        mov     dword ptr [esi + 0x258], eax
        mov     dword ptr [esp + 0x58], eax
        mov     eax, dword ptr [esi + 0x230]
        add     esp, 0x4
        lea     eax, [eax + 2*eax]
        shr     eax, 0x4
        je      loc_7977C2
        mov     ecx, 0xc197d784
loc_7977AE:
        mov     edx, dword ptr [esi + 0x258]
        dec     eax
        mov     dword ptr [edx + 8*eax], 0x0
        mov     dword ptr [edx + 8*eax + 0x4], ecx
        jne     loc_7977AE
loc_7977C2:
        mov     eax, dword ptr [esi + 0x244]
        mov     ecx, dword ptr [esi + 0x248]
        mov     edx, dword ptr [esi + 0x24c]
        mov     dword ptr [esp + 0x24], eax
        mov     eax, dword ptr [esi + 0x270]
        mov     dword ptr [esp + 0x98], ecx
        mov     ecx, dword ptr [esi + 0x26c]
        xor     ebx, ebx
        test    eax, eax
        mov     dword ptr [esp + 0x44], edx
        mov     dword ptr [esp + 0xa4], ecx
        mov     dword ptr [esp + 0x64], eax
        jbe     loc_798147
        mov     edi, 0x1
loc_797809:
        mov     edx, dword ptr [esi + 0x270]
        mov     ebp, dword ptr [esi + 0x27c]
        sub     edx, eax
        add     ebx, dword ptr [ebp + 4*edx]
        mov     edx, dword ptr [esi + 0x1c]
        cmp     eax, edi
        mov     dword ptr [esp + 0x28], edx
        jne     loc_797830
        cmp     dword ptr [esi + 0xc], edi
        je      loc_797830
        inc     edx
        mov     dword ptr [esp + 0x28], edx
loc_797830:
        test    edx, edx
        jbe     loc_79813C
loc_797838:
        test    ecx, ecx
        mov     dword ptr [esp + 0x10], 0x0
        mov     dword ptr [esp + 0x2c], ecx
        jbe     loc_79812D
loc_79784C:
        mov     edx, dword ptr [esi + 0x26c]
        mov     ebp, dword ptr [esi + 0x278]
        sub     edx, ecx
        mov     eax, 0xaaaaaaab
        mul     dword ptr [ebp + 4*edx]
        mov     ebp, dword ptr [esp + 0x10]
        mov     eax, dword ptr [esi + 0x18]
        shr     edx, 1
        add     ebp, edx
        cmp     ecx, edi
        mov     dword ptr [esp + 0x10], ebp
        mov     dword ptr [esp + 0x20], eax
        jne     loc_797884
        cmp     dword ptr [esi + 0x8], edi
        je      loc_797884
        inc     eax
        mov     dword ptr [esp + 0x20], eax
loc_797884:
        test    eax, eax
        jbe     loc_798117
        jmp     loc_797892
loc_79788E:
        mov     esi, dword ptr [esp + 0x74]
loc_797892:
        mov     ecx, dword ptr [esi + 0x4c]
        mov     edi, ebx
        cmp     ebx, ecx
        jb      loc_79789D
        sub     edi, ecx
loc_79789D:
        mov     eax, dword ptr [esi + 0x48]
        mov     edx, dword ptr [esp + 0x10]
        cmp     edx, eax
        jb      loc_7978AA
        sub     edx, eax
loc_7978AA:
        mov     ebp, eax
        mov     esi, dword ptr [esi + 0x250]
        imul    ebp, edi
        add     ebp, edx
        cmp     ebx, ecx
        mov     edi, ebx
        fld     qword ptr [esi + 8*ebp]
        fstp    qword ptr [esp + 0x88]
        jb      loc_7978C9
        sub     edi, ecx
loc_7978C9:
        mov     edx, dword ptr [esp + 0x10]
        inc     edx
        cmp     edx, eax
        jb      loc_7978D4
        sub     edx, eax
loc_7978D4:
        mov     ebp, eax
        imul    ebp, edi
        add     ebp, edx
        cmp     ebx, ecx
        mov     edx, ebx
        fld     qword ptr [esi + 8*ebp]
        fstp    qword ptr [esp + 0x78]
        jb      loc_7978EA
        sub     edx, ecx
loc_7978EA:
        mov     ebp, dword ptr [esp + 0x10]
        lea     edi, [ebp + 0x2]
        cmp     edi, eax
        mov     dword ptr [esp + 0x14], edi
        jb      loc_7978FB
        sub     edi, eax
loc_7978FB:
        imul    edx, eax
        add     edx, edi
        cmp     ebx, ecx
        fld     qword ptr [esi + 8*edx]
        mov     edx, ebx
        fstp    qword ptr [esp + 0x90]
        jb      loc_797912
        sub     edx, ecx
loc_797912:
        lea     edi, [ebp + 0x3]
        cmp     edi, eax
        mov     dword ptr [esp + 0x18], edi
        jb      loc_79791F
        sub     edi, eax
loc_79791F:
        imul    edx, eax
        add     edx, edi
        lea     ebp, [ebx + 0x1]
        cmp     ebp, ecx
        fld     qword ptr [esi + 8*edx]
        mov     edx, ebp
        fstp    qword ptr [esp + 0x80]
        jb      loc_797939
        sub     edx, ecx
loc_797939:
        mov     edi, dword ptr [esp + 0x10]
        cmp     edi, eax
        jb      loc_797943
        sub     edi, eax
loc_797943:
        imul    edx, eax
        add     edx, edi
        cmp     ebp, ecx
        fld     qword ptr [esi + 8*edx]
        mov     edx, ebp
        fstp    qword ptr [esp + 0x58]
        jb      loc_797957
        sub     edx, ecx
loc_797957:
        mov     edi, dword ptr [esp + 0x10]
        inc     edi
        cmp     edi, eax
        mov     dword ptr [esp + 0x1c], edi
        jb      loc_797966
        sub     edi, eax
loc_797966:
        imul    edx, eax
        add     edx, edi
        cmp     ebp, ecx
        fld     qword ptr [esi + 8*edx]
        mov     edx, ebp
        fstp    qword ptr [esp + 0x48]
        jb      loc_79797A
        sub     edx, ecx
loc_79797A:
        mov     edi, dword ptr [esp + 0x14]
        cmp     edi, eax
        jb      loc_797984
        sub     edi, eax
loc_797984:
        imul    edx, eax
        add     edx, edi
        cmp     ebp, ecx
        fld     qword ptr [esi + 8*edx]
        mov     edx, ebp
        fstp    qword ptr [esp + 0x38]
        jb      loc_797998
        sub     edx, ecx
loc_797998:
        mov     edi, dword ptr [esp + 0x18]
        cmp     edi, eax
        jb      loc_7979A2
        sub     edi, eax
loc_7979A2:
        imul    edx, eax
        add     edx, edi
        lea     ebp, [ebx + 0x2]
        cmp     ebp, ecx
        fld     qword ptr [esi + 8*edx]
        mov     edx, ebp
        fstp    qword ptr [esp + 0x30]
        jb      loc_7979B9
        sub     edx, ecx
loc_7979B9:
        mov     edi, dword ptr [esp + 0x10]
        cmp     edi, eax
        jb      loc_7979C3
        sub     edi, eax
loc_7979C3:
        imul    edx, eax
        add     edx, edi
        cmp     ebp, ecx
        fld     qword ptr [esi + 8*edx]
        mov     edx, ebp
        fstp    qword ptr [esp + 0x68]
        jb      loc_7979D7
        sub     edx, ecx
loc_7979D7:
        mov     edi, dword ptr [esp + 0x1c]
        cmp     edi, eax
        jb      loc_7979E1
        sub     edi, eax
loc_7979E1:
        imul    edx, eax
        add     edx, edi
        cmp     ebp, ecx
        fld     qword ptr [esi + 8*edx]
        mov     edx, ebp
        jb      loc_7979F1
        sub     edx, ecx
loc_7979F1:
        mov     edi, dword ptr [esp + 0x14]
        cmp     edi, eax
        jb      loc_7979FB
        sub     edi, eax
loc_7979FB:
        imul    edx, eax
        add     edx, edi
        cmp     ebp, ecx
        fld     qword ptr [esi + 8*edx]
        mov     edx, ebp
        jb      loc_797A0B
        sub     edx, ecx
loc_797A0B:
        mov     edi, dword ptr [esp + 0x18]
        cmp     edi, eax
        jb      loc_797A15
        sub     edi, eax
loc_797A15:
        imul    edx, eax
        add     edx, edi
        lea     ebp, [ebx + 0x3]
        cmp     ebp, ecx
        fld     qword ptr [esi + 8*edx]
        mov     edx, ebp
        jb      loc_797A28
        sub     edx, ecx
loc_797A28:
        mov     edi, dword ptr [esp + 0x10]
        cmp     edi, eax
        jb      loc_797A32
        sub     edi, eax
loc_797A32:
        imul    edx, eax
        add     edx, edi
        cmp     ebp, ecx
        fld     qword ptr [esi + 8*edx]
        mov     edx, ebp
        jb      loc_797A42
        sub     edx, ecx
loc_797A42:
        mov     edi, dword ptr [esp + 0x1c]
        cmp     edi, eax
        jb      loc_797A4C
        sub     edi, eax
loc_797A4C:
        imul    edx, eax
        add     edx, edi
        cmp     ebp, ecx
        fld     qword ptr [esi + 8*edx]
        mov     edx, ebp
        jb      loc_797A5C
        sub     edx, ecx
loc_797A5C:
        mov     edi, dword ptr [esp + 0x14]
        cmp     edi, eax
        jb      loc_797A66
        sub     edi, eax
loc_797A66:
        imul    edx, eax
        add     edx, edi
        cmp     ebp, ecx
        fld     qword ptr [esi + 8*edx]
        mov     edx, ebp
        jb      loc_797A76
        sub     edx, ecx
loc_797A76:
        mov     edi, dword ptr [esp + 0x18]
        cmp     edi, eax
        jb      loc_797A80
        sub     edi, eax
loc_797A80:
        imul    edx, eax
        add     edx, edi
        cmp     ebx, ecx
        fld     qword ptr [esi + 8*edx]
        mov     edx, dword ptr [esp + 0x24]
        fmul    qword ptr [edx + 0x78]
        fxch    st(2)
        fmul    qword ptr [edx + 0x68]
        faddp   st(2), st
        fxch    st(2)
        fmul    qword ptr [edx + 0x60]
        faddp   st(1), st
        fxch    st(2)
        fmul    qword ptr [edx + 0x58]
        faddp   st(2), st
        fxch    st(2)
        fmul    qword ptr [edx + 0x50]
        faddp   st(1), st
        fxch    st(2)
        fmul    qword ptr [edx + 0x48]
        faddp   st(2), st
        fld     qword ptr [esp + 0x68]
        fmul    qword ptr [edx + 0x40]
        faddp   st(2), st
        fld     qword ptr [esp + 0x30]
        fmul    qword ptr [edx + 0x38]
        faddp   st(2), st
        fld     qword ptr [esp + 0x38]
        fmul    qword ptr [edx + 0x30]
        faddp   st(2), st
        fld     qword ptr [esp + 0x48]
        fmul    qword ptr [edx + 0x28]
        faddp   st(2), st
        fld     qword ptr [esp + 0x58]
        fmul    qword ptr [edx + 0x20]
        faddp   st(2), st
        fld     qword ptr [esp + 0x80]
        fmul    qword ptr [edx + 0x18]
        faddp   st(2), st
        fld     qword ptr [esp + 0x90]
        fmul    qword ptr [edx + 0x10]
        faddp   st(2), st
        fld     qword ptr [esp + 0x78]
        fmul    qword ptr [edx + 0x8]
        faddp   st(2), st
        fmul    qword ptr [edx + 0x70]
        faddp   st(1), st
        fld     qword ptr [esp + 0x88]
        fmul    qword ptr [edx]
        mov     edx, ebx
        faddp   st(1), st
        jb      loc_797B18
        sub     edx, ecx
loc_797B18:
        mov     edi, dword ptr [esp + 0x10]
        cmp     edi, eax
        jb      loc_797B22
        sub     edi, eax
loc_797B22:
        imul    edx, eax
        add     edx, edi
        cmp     ebx, ecx
        fld     qword ptr [esi + 8*edx]
        mov     edx, ebx
        fstp    qword ptr [esp + 0xa8]
        jb      loc_797B39
        sub     edx, ecx
loc_797B39:
        mov     edi, dword ptr [esp + 0x1c]
        cmp     edi, eax
        jb      loc_797B43
        sub     edi, eax
loc_797B43:
        imul    edx, eax
        add     edx, edi
        cmp     ebx, ecx
        fld     qword ptr [esi + 8*edx]
        mov     edx, ebx
        fstp    qword ptr [esp + 0x68]
        jb      loc_797B57
        sub     edx, ecx
loc_797B57:
        mov     edi, dword ptr [esp + 0x14]
        cmp     edi, eax
        jb      loc_797B61
        sub     edi, eax
loc_797B61:
        imul    edx, eax
        add     edx, edi
        cmp     ebx, ecx
        fld     qword ptr [esi + 8*edx]
        mov     edx, ebx
        fstp    qword ptr [esp + 0x30]
        jb      loc_797B75
        sub     edx, ecx
loc_797B75:
        mov     edi, dword ptr [esp + 0x18]
        cmp     edi, eax
        jb      loc_797B7F
        sub     edi, eax
loc_797B7F:
        imul    edx, eax
        add     edx, edi
        fld     qword ptr [esi + 8*edx]
        lea     edx, [ebx + 0x1]
        fstp    qword ptr [esp + 0x38]
        cmp     edx, ecx
        lea     edx, [ebx + 0x1]
        jb      loc_797B97
        sub     edx, ecx
loc_797B97:
        mov     edi, dword ptr [esp + 0x10]
        cmp     edi, eax
        jb      loc_797BA1
        sub     edi, eax
loc_797BA1:
        imul    edx, eax
        add     edx, edi
        fld     qword ptr [esi + 8*edx]
        lea     edx, [ebx + 0x1]
        fstp    qword ptr [esp + 0x48]
        cmp     edx, ecx
        lea     edx, [ebx + 0x1]
        jb      loc_797BB9
        sub     edx, ecx
loc_797BB9:
        mov     edi, dword ptr [esp + 0x1c]
        cmp     edi, eax
        jb      loc_797BC3
        sub     edi, eax
loc_797BC3:
        imul    edx, eax
        add     edx, edi
        fld     qword ptr [esi + 8*edx]
        lea     edx, [ebx + 0x1]
        fstp    qword ptr [esp + 0x58]
        cmp     edx, ecx
        lea     edx, [ebx + 0x1]
        jb      loc_797BDB
        sub     edx, ecx
loc_797BDB:
        mov     edi, dword ptr [esp + 0x14]
        cmp     edi, eax
        jb      loc_797BE5
        sub     edi, eax
loc_797BE5:
        imul    edx, eax
        add     edx, edi
        fld     qword ptr [esi + 8*edx]
        lea     edx, [ebx + 0x1]
        fstp    qword ptr [esp + 0x80]
        cmp     edx, ecx
        lea     edx, [ebx + 0x1]
        jb      loc_797C00
        sub     edx, ecx
loc_797C00:
        mov     edi, dword ptr [esp + 0x18]
        cmp     edi, eax
        jb      loc_797C0A
        sub     edi, eax
loc_797C0A:
        imul    edx, eax
        add     edx, edi
        fld     qword ptr [esi + 8*edx]
        lea     edx, [ebx + 0x2]
        fstp    qword ptr [esp + 0x90]
        cmp     edx, ecx
        lea     edx, [ebx + 0x2]
        jb      loc_797C25
        sub     edx, ecx
loc_797C25:
        mov     edi, dword ptr [esp + 0x10]
        cmp     edi, eax
        jb      loc_797C2F
        sub     edi, eax
loc_797C2F:
        imul    edx, eax
        add     edx, edi
        fld     qword ptr [esi + 8*edx]
        lea     edx, [ebx + 0x2]
        fstp    qword ptr [esp + 0x78]
        cmp     edx, ecx
        lea     edx, [ebx + 0x2]
        jb      loc_797C47
        sub     edx, ecx
loc_797C47:
        mov     edi, dword ptr [esp + 0x1c]
        cmp     edi, eax
        jb      loc_797C51
        sub     edi, eax
loc_797C51:
        imul    edx, eax
        add     edx, edi
        fld     qword ptr [esi + 8*edx]
        lea     edx, [ebx + 0x2]
        fstp    qword ptr [esp + 0x88]
        cmp     edx, ecx
        lea     edx, [ebx + 0x2]
        jb      loc_797C6C
        sub     edx, ecx
loc_797C6C:
        mov     edi, dword ptr [esp + 0x14]
        cmp     edi, eax
        jb      loc_797C76
        sub     edi, eax
loc_797C76:
        imul    edx, eax
        add     edx, edi
        fld     qword ptr [esi + 8*edx]
        lea     edx, [ebx + 0x2]
        cmp     edx, ecx
        lea     edx, [ebx + 0x2]
        jb      loc_797C8A
        sub     edx, ecx
loc_797C8A:
        mov     edi, dword ptr [esp + 0x18]
        cmp     edi, eax
        jb      loc_797C94
        sub     edi, eax
loc_797C94:
        imul    edx, eax
        add     edx, edi
        cmp     ebp, ecx
        fld     qword ptr [esi + 8*edx]
        mov     edx, ebp
        jb      loc_797CA4
        sub     edx, ecx
loc_797CA4:
        mov     edi, dword ptr [esp + 0x10]
        cmp     edi, eax
        jb      loc_797CAE
        sub     edi, eax
loc_797CAE:
        imul    edx, eax
        add     edx, edi
        cmp     ebp, ecx
        fld     qword ptr [esi + 8*edx]
        mov     edx, ebp
        jb      loc_797CBE
        sub     edx, ecx
loc_797CBE:
        mov     edi, dword ptr [esp + 0x1c]
        cmp     edi, eax
        jb      loc_797CC8
        sub     edi, eax
loc_797CC8:
        imul    edx, eax
        add     edx, edi
        cmp     ebp, ecx
        fld     qword ptr [esi + 8*edx]
        mov     edx, ebp
        jb      loc_797CD8
        sub     edx, ecx
loc_797CD8:
        mov     edi, dword ptr [esp + 0x14]
        cmp     edi, eax
        jb      loc_797CE2
        sub     edi, eax
loc_797CE2:
        imul    edx, eax
        add     edx, edi
        cmp     ebp, ecx
        fld     qword ptr [esi + 8*edx]
        mov     edx, ebp
        jb      loc_797CF2
        sub     edx, ecx
loc_797CF2:
        mov     edi, dword ptr [esp + 0x18]
        cmp     edi, eax
        jb      loc_797CFC
        sub     edi, eax
loc_797CFC:
        imul    edx, eax
        mov     ebp, dword ptr [esp + 0x98]
        add     edx, edi
        cmp     ebx, ecx
        fld     qword ptr [esi + 8*edx]
        fmul    qword ptr [ebp + 0x78]
        fxch    st(1)
        fmul    qword ptr [ebp + 0x70]
        mov     edx, ebx
        faddp   st(1), st
        fxch    st(1)
        fmul    qword ptr [ebp + 0x68]
        faddp   st(1), st
        fxch    st(1)
        fmul    qword ptr [ebp + 0x60]
        faddp   st(1), st
        fxch    st(1)
        fmul    qword ptr [ebp + 0x58]
        faddp   st(1), st
        fxch    st(1)
        fmul    qword ptr [ebp + 0x50]
        faddp   st(1), st
        fld     qword ptr [esp + 0x88]
        fmul    qword ptr [ebp + 0x48]
        faddp   st(1), st
        fld     qword ptr [esp + 0x78]
        fmul    qword ptr [ebp + 0x40]
        faddp   st(1), st
        fld     qword ptr [esp + 0x90]
        fmul    qword ptr [ebp + 0x38]
        faddp   st(1), st
        fld     qword ptr [esp + 0x80]
        fmul    qword ptr [ebp + 0x30]
        faddp   st(1), st
        fld     qword ptr [esp + 0x58]
        fmul    qword ptr [ebp + 0x28]
        faddp   st(1), st
        fld     qword ptr [esp + 0x48]
        fmul    qword ptr [ebp + 0x20]
        faddp   st(1), st
        fld     qword ptr [esp + 0x38]
        fmul    qword ptr [ebp + 0x18]
        faddp   st(1), st
        fld     qword ptr [esp + 0x30]
        fmul    qword ptr [ebp + 0x10]
        faddp   st(1), st
        fld     qword ptr [esp + 0x68]
        fmul    qword ptr [ebp + 0x8]
        faddp   st(1), st
        fld     qword ptr [esp + 0xa8]
        fmul    qword ptr [ebp]
        faddp   st(1), st
        jb      loc_797D9F
        sub     edx, ecx
loc_797D9F:
        mov     edi, dword ptr [esp + 0x10]
        cmp     edi, eax
        jb      loc_797DA9
        sub     edi, eax
loc_797DA9:
        imul    edx, eax
        add     edx, edi
        cmp     ebx, ecx
        fld     qword ptr [esi + 8*edx]
        mov     edx, ebx
        fstp    qword ptr [esp + 0x98]
        jb      loc_797DC0
        sub     edx, ecx
loc_797DC0:
        mov     edi, dword ptr [esp + 0x10]
        inc     edi
        cmp     edi, eax
        mov     edi, dword ptr [esp + 0x10]
        inc     edi
        jb      loc_797DD0
        sub     edi, eax
loc_797DD0:
        imul    edx, eax
        add     edx, edi
        cmp     ebx, ecx
        fld     qword ptr [esi + 8*edx]
        mov     edx, ebx
        fstp    qword ptr [esp + 0x68]
        jb      loc_797DE4
        sub     edx, ecx
loc_797DE4:
        mov     edi, dword ptr [esp + 0x10]
        add     edi, 0x2
        cmp     edi, eax
        mov     edi, dword ptr [esp + 0x10]
        jb      loc_797DFA
        add     edi, 0x2
        sub     edi, eax
        jmp     loc_797DFD
loc_797DFA:
        add     edi, 0x2
loc_797DFD:
        imul    edx, eax
        add     edx, edi
        cmp     ebx, ecx
        fld     qword ptr [esi + 8*edx]
        mov     edx, ebx
        fstp    qword ptr [esp + 0x30]
        jb      loc_797E11
        sub     edx, ecx
loc_797E11:
        mov     edi, dword ptr [esp + 0x10]
        add     edi, 0x3
        cmp     edi, eax
        mov     edi, dword ptr [esp + 0x10]
        jb      loc_797E27
        add     edi, 0x3
        sub     edi, eax
        jmp     loc_797E2A
loc_797E27:
        add     edi, 0x3
loc_797E2A:
        imul    edx, eax
        add     edx, edi
        fld     qword ptr [esi + 8*edx]
        lea     edx, [ebx + 0x1]
        fstp    qword ptr [esp + 0x38]
        cmp     edx, ecx
        lea     edx, [ebx + 0x1]
        jb      loc_797E42
        sub     edx, ecx
loc_797E42:
        mov     edi, dword ptr [esp + 0x10]
        cmp     edi, eax
        jb      loc_797E4C
        sub     edi, eax
loc_797E4C:
        imul    edx, eax
        add     edx, edi
        fld     qword ptr [esi + 8*edx]
        lea     edx, [ebx + 0x1]
        fstp    qword ptr [esp + 0x48]
        cmp     edx, ecx
        lea     edx, [ebx + 0x1]
        jb      loc_797E64
        sub     edx, ecx
loc_797E64:
        mov     edi, dword ptr [esp + 0x10]
        inc     edi
        cmp     edi, eax
        mov     edi, dword ptr [esp + 0x10]
        inc     edi
        jb      loc_797E74
        sub     edi, eax
loc_797E74:
        imul    edx, eax
        add     edx, edi
        fld     qword ptr [esi + 8*edx]
        lea     edx, [ebx + 0x1]
        fstp    qword ptr [esp + 0x58]
        cmp     edx, ecx
        lea     edx, [ebx + 0x1]
        jb      loc_797E8C
        sub     edx, ecx
loc_797E8C:
        mov     edi, dword ptr [esp + 0x10]
        add     edi, 0x2
        cmp     edi, eax
        mov     edi, dword ptr [esp + 0x10]
        jb      loc_797EA2
        add     edi, 0x2
        sub     edi, eax
        jmp     loc_797EA5
loc_797EA2:
        add     edi, 0x2
loc_797EA5:
        imul    edx, eax
        add     edx, edi
        fld     qword ptr [esi + 8*edx]
        lea     edx, [ebx + 0x1]
        fstp    qword ptr [esp + 0x80]
        cmp     edx, ecx
        lea     edx, [ebx + 0x1]
        jb      loc_797EC0
        sub     edx, ecx
loc_797EC0:
        mov     edi, dword ptr [esp + 0x10]
        add     edi, 0x3
        cmp     edi, eax
        mov     edi, dword ptr [esp + 0x10]
        jb      loc_797ED6
        add     edi, 0x3
        sub     edi, eax
        jmp     loc_797ED9
loc_797ED6:
        add     edi, 0x3
loc_797ED9:
        imul    edx, eax
        add     edx, edi
        fld     qword ptr [esi + 8*edx]
        lea     edx, [ebx + 0x2]
        fstp    qword ptr [esp + 0x90]
        cmp     edx, ecx
        lea     edx, [ebx + 0x2]
        jb      loc_797EF4
        sub     edx, ecx
loc_797EF4:
        mov     edi, dword ptr [esp + 0x10]
        cmp     edi, eax
        jb      loc_797EFE
        sub     edi, eax
loc_797EFE:
        imul    edx, eax
        add     edx, edi
        fld     qword ptr [esi + 8*edx]
        lea     edx, [ebx + 0x2]
        fstp    qword ptr [esp + 0x78]
        cmp     edx, ecx
        lea     edx, [ebx + 0x2]
        jb      loc_797F16
        sub     edx, ecx
loc_797F16:
        mov     edi, dword ptr [esp + 0x10]
        inc     edi
        cmp     edi, eax
        mov     edi, dword ptr [esp + 0x10]
        inc     edi
        jb      loc_797F26
        sub     edi, eax
loc_797F26:
        imul    edx, eax
        add     edx, edi
        fld     qword ptr [esi + 8*edx]
        lea     edx, [ebx + 0x2]
        fstp    qword ptr [esp + 0x88]
        cmp     edx, ecx
        lea     edx, [ebx + 0x2]
        jb      loc_797F41
        sub     edx, ecx
loc_797F41:
        mov     edi, dword ptr [esp + 0x10]
        add     edi, 0x2
        cmp     edi, eax
        mov     edi, dword ptr [esp + 0x10]
        jb      loc_797F57
        add     edi, 0x2
        sub     edi, eax
        jmp     loc_797F5A
loc_797F57:
        add     edi, 0x2
loc_797F5A:
        imul    edx, eax
        add     edx, edi
        fld     qword ptr [esi + 8*edx]
        lea     edx, [ebx + 0x2]
        fstp    qword ptr [esp + 0xa8]
        cmp     edx, ecx
        lea     edx, [ebx + 0x2]
        jb      loc_797F75
        sub     edx, ecx
loc_797F75:
        mov     edi, dword ptr [esp + 0x10]
        add     edi, 0x3
        cmp     edi, eax
        mov     edi, dword ptr [esp + 0x10]
        jb      loc_797F8B
        add     edi, 0x3
        sub     edi, eax
        jmp     loc_797F8E
loc_797F8B:
        add     edi, 0x3
loc_797F8E:
        imul    edx, eax
        add     edx, edi
        fld     qword ptr [esi + 8*edx]
        lea     edx, [ebx + 0x3]
        cmp     edx, ecx
        lea     edx, [ebx + 0x3]
        jb      loc_797FA2
        sub     edx, ecx
loc_797FA2:
        mov     edi, dword ptr [esp + 0x10]
        cmp     edi, eax
        jb      loc_797FAC
        sub     edi, eax
loc_797FAC:
        imul    edx, eax
        add     edx, edi
        fld     qword ptr [esi + 8*edx]
        lea     edx, [ebx + 0x3]
        cmp     edx, ecx
        lea     edx, [ebx + 0x3]
        jb      loc_797FC0
        sub     edx, ecx
loc_797FC0:
        mov     edi, dword ptr [esp + 0x10]
        inc     edi
        cmp     edi, eax
        mov     edi, dword ptr [esp + 0x10]
        inc     edi
        jb      loc_797FD0
        sub     edi, eax
loc_797FD0:
        imul    edx, eax
        add     edx, edi
        fld     qword ptr [esi + 8*edx]
        lea     edx, [ebx + 0x3]
        cmp     edx, ecx
        lea     edx, [ebx + 0x3]
        jb      loc_797FE4
        sub     edx, ecx
loc_797FE4:
        mov     edi, dword ptr [esp + 0x10]
        add     edi, 0x2
        cmp     edi, eax
        mov     edi, dword ptr [esp + 0x10]
        jb      loc_797FFA
        add     edi, 0x2
        sub     edi, eax
        jmp     loc_797FFD
loc_797FFA:
        add     edi, 0x2
loc_797FFD:
        imul    edx, eax
        add     edx, edi
        fld     qword ptr [esi + 8*edx]
        lea     edx, [ebx + 0x3]
        cmp     edx, ecx
        lea     edx, [ebx + 0x3]
        jb      loc_798011
        sub     edx, ecx
loc_798011:
        mov     ecx, dword ptr [esp + 0x10]
        add     ecx, 0x3
        cmp     ecx, eax
        jb      loc_79801E
        sub     ecx, eax
loc_79801E:
        imul    edx, eax
        mov     eax, dword ptr [esp + 0x44]
        add     edx, ecx
        mov     ecx, dword ptr [esp + 0x54]
        add     eax, 0x80
        fld     qword ptr [esi + 8*edx]
        fmul    qword ptr [eax - 0x8]
        fxch    st(1)
        fmul    qword ptr [eax - 0x10]
        mov     esi, dword ptr [esp + 0x24]
        add     ecx, 0x8
        add     ecx, 0x8
        mov     dword ptr [esp + 0x44], eax
        faddp   st(1), st
        fxch    st(1)
        fmul    qword ptr [eax - 0x18]
        add     ecx, 0x8
        add     esi, 0x80
        add     ebp, 0x80
        mov     dword ptr [esp + 0x54], ecx
        faddp   st(1), st
        fxch    st(1)
        fmul    qword ptr [eax - 0x20]
        mov     dword ptr [esp + 0x24], esi
        faddp   st(1), st
        fxch    st(1)
        fmul    qword ptr [eax - 0x28]
        faddp   st(1), st
        fld     qword ptr [esp + 0xa8]
        fmul    qword ptr [eax - 0x30]
        faddp   st(1), st
        fld     qword ptr [esp + 0x88]
        fmul    qword ptr [eax - 0x38]
        faddp   st(1), st
        fld     qword ptr [esp + 0x78]
        fmul    qword ptr [eax - 0x40]
        faddp   st(1), st
        fld     qword ptr [esp + 0x90]
        fmul    qword ptr [eax - 0x48]
        faddp   st(1), st
        fld     qword ptr [esp + 0x80]
        fmul    qword ptr [eax - 0x50]
        faddp   st(1), st
        fld     qword ptr [esp + 0x58]
        fmul    qword ptr [eax - 0x58]
        faddp   st(1), st
        fld     qword ptr [esp + 0x48]
        fmul    qword ptr [eax - 0x60]
        faddp   st(1), st
        fld     qword ptr [esp + 0x38]
        fmul    qword ptr [eax - 0x68]
        faddp   st(1), st
        fld     qword ptr [esp + 0x30]
        fmul    qword ptr [eax - 0x70]
        faddp   st(1), st
        fld     qword ptr [esp + 0x68]
        fmul    qword ptr [eax - 0x78]
        faddp   st(1), st
        fld     qword ptr [esp + 0x98]
        fmul    qword ptr [eax - 0x80]
        mov     eax, dword ptr [esp + 0x20]
        mov     dword ptr [esp + 0x98], ebp
        dec     eax
        faddp   st(1), st
        fxch    st(2)
        fstp    qword ptr [ecx - 0x18]
        mov     dword ptr [esp + 0x20], eax
        fstp    qword ptr [ecx - 0x10]
        fstp    qword ptr [ecx - 0x8]
        jne     loc_79788E
        mov     ecx, dword ptr [esp + 0x2c]
        mov     esi, dword ptr [esp + 0x74]
        mov     edi, 0x1
loc_798117:
        dec     ecx
        mov     dword ptr [esp + 0x2c], ecx
        jne     loc_79784C
        mov     eax, dword ptr [esp + 0x64]
        mov     ecx, dword ptr [esp + 0xa4]
loc_79812D:
        mov     edx, dword ptr [esp + 0x28]
        dec     edx
        mov     dword ptr [esp + 0x28], edx
        jne     loc_797838
loc_79813C:
        dec     eax
        mov     dword ptr [esp + 0x64], eax
        jne     loc_797809
loc_798147:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }
}

// [0x0079EBE0] sub_0079EBE0 (16 bytes)
extern "C" void ext_0079EBD0();
extern "C" __declspec(naked) int __cdecl fn_0079EBE0() {
    __asm {
        call ext_0079EBD0
        mov eax, [eax]
        ret
    }
}

// [0x00790D80] sub_00790D80 (32 bytes)
extern "C" void __fastcall fn_00790D80(void* self, int edx_unused, int a1) {
    *(int*)((char*)self + 0x28) = 0;
    *(int*)((char*)self + 0x10) = a1;
}

// [0x00790E00] sub_00790E00 (32 bytes)
extern "C" void __fastcall fn_00790E00(void* self, int edx_unused, int a1) {
    char* p = (char*)self;
    *(int*)(p + 0x5c) = 1;
    *(int*)(p + 0x20) = a1;
    *(int*)(p + 0x28) = 0;
}

// [0x0079B140] sub_0079B140 (32 bytes)
extern "C" int mem_00AAFC2C;
extern "C" __declspec(naked) void __fastcall fn_0079B140(void* self) {
    __asm {
        mov eax, dword ptr [mem_00AAFC2C]
        test eax, eax
        je done
        mov edx, dword ptr [esp + 8]
        lea ecx, [esp + 0xc]
        push ecx
        mov ecx, dword ptr [esp + 8]
        push edx
        push ecx
        call eax
        add esp, 0xc
    done:
        ret
    }
}

// [0x0079DD30] sub_0079DD30 (32 bytes)
extern "C" __declspec(naked) void __fastcall fn_0079DD30(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, ecx
        mov ecx, dword ptr [esp + 0x4]
        mov dword ptr [eax + 0x8], 0x0
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 0xc], 0x3ff00000
        ret 0x4
    }
}

// [0x0079E5B0] sub_0079E5B0 (32 bytes)
extern "C" void __fastcall fn_0079E5B0(void* self, int edx_unused, int a1, int a2) {
    *(int*)((char*)self + 0x8) = a1;
    *(int*)((char*)self + 0xc) = a2;
}

extern "C" int mem_00B61148;
extern "C" unsigned char mem_00B61151;

// [0x0079EBB0] sub_0079EBB0 (32 bytes)
extern "C" void __cdecl fn_0079EBB0(void* self) {
    mem_00B61148 = (int)self;
    mem_00B61151 = ((unsigned char*)self)[0xc];
}

// [0x00798FF0] sub_00798FF0 (32 bytes)
extern "C" void __cdecl fn_00798FF0(void* a0, void* a1, void* a2) {
    fn_00799010(a0, a1, &a2);
}

// [0x0079D7A0] sub_0079D7A0 (32 bytes)
extern "C" int ext_0079D740(void);
extern "C" int mem_00B61140;
extern "C" __declspec(naked) void __cdecl fn_0079D7A0() {
    __asm {
        mov eax, dword ptr [mem_00B61140]
        test eax, eax
        jne done
        call ext_0079D740
        mov dword ptr [mem_00B61140], eax
done:
        ret
    }
}

// [0x0079EED0] sub_0079EED0 (32 bytes)
extern "C" int mem_009252C4;
extern "C" __declspec(naked) void __cdecl fn_0079EED0() {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push 0x0
        push eax
        call ext_0079EBE0
        push eax
        call dword ptr [mem_009252C4]
        add esp, 0xc
        ret
    }
}

// [0x00798EF0] sub_00798EF0 (32 bytes)
extern "C" void ext_00798910(void* a0, void* a1, void* a2);
extern "C" void __cdecl fn_00798EF0(void* a0, void* a1, void* a2) {
    ext_00798910(a0, a1, &a2);
}

extern "C" void ext_00798F10();

// [0x00798F90] sub_00798F90 (32 bytes)
extern "C" __declspec(naked) void __cdecl fn_00798F90() {
    __asm {
        mov eax, dword ptr [esp + 0xc]
        mov ecx, dword ptr [esp + 0x8]
        mov edx, dword ptr [esp + 0x4]
        push eax
        push ecx
        push edx
        call ext_00798F10
        add esp, 0xc
        ret
    }
}

// [0x00798FB0] sub_00798FB0 (32 bytes)
extern "C" __declspec(naked) void __cdecl fn_00798FB0(void) {
    __asm {
        mov eax, dword ptr [esp + 0xc]
        mov edx, dword ptr [esp + 0x8]
        lea ecx, [eax + eax]
        mov eax, dword ptr [esp + 0x4]
        push ecx
        push edx
        push eax
        call ext_00798F10
        add esp, 0xc
        ret
    }
}

// [0x007990D0] sub_007990D0 (32 bytes)
extern "C" void ext_007990F0(void* a0, void* a1, void* a2);
extern "C" void __cdecl fn_007990D0(void* a0, void* a1, void* a2) {
    ext_007990F0(a0, a1, &a2);
}

// [0x0079C3F0] sub_0079C3F0 (32 bytes)
extern "C" void ext_00782E30();
extern "C" __declspec(naked) void __fastcall fn_0079C3F0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        mov ecx, dword ptr [ecx + 0xf64]
        push eax
        call ext_00782E30
        ret 0x4
    }
}

// [0x0079E8A0] sub_0079E8A0 (32 bytes)
extern "C" void __stdcall ext_0079E6F0(int a, int b);
extern "C" int mem_00B61144;

extern "C" __declspec(naked) void __cdecl fn_0079E8A0(int a, int b) {
    __asm {
        mov ecx, dword ptr [mem_00B61144]
        test ecx, ecx
        je done
        mov eax, dword ptr [esp + 0x8]
        mov edx, dword ptr [esp + 0x4]
        push eax
        push edx
        call ext_0079E6F0
done:
        ret
    }
}

// [0x0079FD60] sub_0079FD60 (32 bytes)
extern "C" void ext_007B2A10();

extern "C" __declspec(naked) void __cdecl fn_0079FD60(void) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push 0xb003
        push eax
        call ext_007B2A10
        add esp, 8
        ret
    }
}

// [0x0079FD80] sub_0079FD80 (32 bytes)
extern "C" void ext_007B2A60(void* a, int b, void* c);

extern "C" void __cdecl fn_0079FD80(void* a, void* c) {
    ext_007B2A60(a, 0xb003, c);
}

// [0x00798840] sub_00798840 (48 bytes)
extern "C" __declspec(naked) unsigned int __cdecl fn_00798840(void* self) {
    __asm {
        mov ecx, dword ptr [esp + 0x4]
        xor eax, eax
        mov ax, word ptr [ecx + 0x40]
        imul eax, dword ptr [ecx + 0x24]
        cmp word ptr [ecx + 0x72], 0x1
        jne short L_00798860
        xor edx, edx
        mov dx, word ptr [ecx + 0x4e]
        mov ecx, edx
        imul eax, ecx
    L_00798860:
        add eax, 0x7
        shr eax, 0x3
        ret
    }
}

// [0x0079EA60] sub_0079EA60 (48 bytes)
extern "C" int mem_00B6114C;
extern "C" int mem_009977EC;
extern "C" __declspec(naked) void __cdecl fn_0079EA60(void* self) {
    __asm {
        mov eax, dword ptr [esp + 4]
        mov edx, dword ptr [mem_00B6114C]
        xor ecx, ecx
        mov cl, byte ptr [eax + 0ch]
        lea ecx, [edx + 4*ecx]
        cmp eax, dword ptr [ecx]
        jne short done
        mov dword ptr [ecx], 0
        mov cl, byte ptr [mem_009977EC]
        mov byte ptr [eax + 0ch], cl
done:
        ret
    }
}

// [0x0079EA90] sub_0079EA90 (48 bytes)
extern "C" __declspec(naked) void __cdecl fn_0079EA90(unsigned int a) {
    __asm {
        mov eax, dword ptr [esp + 4]
        mov cl, byte ptr [mem_00B61150]
        cmp al, cl
        ja short done_0079EA90
        mov ecx, dword ptr [mem_00B6114C]
        and eax, 0xff
        mov edx, dword ptr [ecx + 4*eax]
        push edx
        call ext_0079EBB0
        pop ecx
done_0079EA90:
        ret
    }
}

extern "C" void ext_0079EAC0();
extern "C" int mem_009977EC; /* u32 0x0000FCFF */
extern "C" int mem_00997749; /* u32 0x02000000 */

// [0x0079EB80] sub_0079EB80 (48 bytes)
extern "C" __declspec(naked) int __cdecl fn_0079EB80(int v) {
    __asm {
        mov eax, dword ptr [esp + 4]
        mov cl, byte ptr [mem_009977EC]
        cmp al, cl
        jne short L_0079EB94
        mov al, byte ptr [mem_00997749]
        ret
    L_0079EB94:
        push eax
        call ext_0079EAC0
        add esp, 4
        neg eax
        sbb eax, eax
        neg eax
        ret
    }
}

// [0x00798F60] sub_00798F60 (48 bytes)
extern "C" __declspec(naked) int __cdecl fn_00798F60(void* a, const char* s) {
    __asm {
        mov edx, dword ptr [esp + 8]
        push edi
        mov edi, edx
        or ecx, -1
        xor eax, eax
        repne scasb
        mov eax, dword ptr [esp + 8]
        not ecx
        push ecx
        push edx
        push eax
        call ext_00798F10
        add esp, 0Ch
        pop edi
        ret
    }
}

extern "C" void ext_006C33C0();
extern "C" void ext_00714AE0();

// [0x0079E450] sub_0079E450 (48 bytes)
extern "C" __declspec(naked) void __fastcall fn_0079E450(void* self) {
    __asm {
        push ecx
        mov ecx, dword ptr [ecx]
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x00
        push esi
        push eax
        push 0
        mov esi, 1
        call ext_00714AE0
        mov ecx, eax
        call ext_006C33C0
        cmp dword ptr [esp + 4], 6
        jne not_six
        xor eax, eax
        pop esi
        pop ecx
        ret
not_six:
        mov eax, esi
        pop esi
        pop ecx
        ret
    }
}

// [0x0079E480] sub_0079E480 (48 bytes)
extern "C" __declspec(naked) void __fastcall fn_0079E480(void* self) {
    __asm {
        push ecx
        mov ecx, dword ptr [ecx]
        push esi
        lea eax, [esp + 4]
        xor esi, esi
        push eax
        push esi
        call ext_00714AE0
        mov ecx, eax
        call ext_006C33C0
        mov eax, dword ptr [esp + 4]
        cmp eax, 6
        mov eax, 1
        je done
        mov eax, esi
done:
        pop esi
        pop ecx
        ret
    }
}

// [0x00792600] sub_00792600 (48 bytes)
extern "C" void ext_0078D740();
extern "C" void ext_00792630();
extern "C" void ext_00792720();
extern "C" __declspec(naked) void __fastcall fn_00792600(void* self) {
    __asm {
        push esi
        call ext_0078D740
        mov esi, eax
        mov eax, dword ptr [esp + 0x8]
        push eax
        push esi
        call ext_00792630
        mov ecx, dword ptr [esp + 0x14]
        push ecx
        push esi
        call ext_00792720
        add esp, 0x10
        mov eax, esi
        pop esi
        ret
    }
}

// [0x00798710] sub_00798710 (64 bytes)
extern "C" __declspec(naked) unsigned int __cdecl fn_00798710(void* self) {
    __asm {
        mov ecx, dword ptr [esp + 4]
        push esi
        mov esi, dword ptr [ecx + 0x50]
        cmp esi, -1
        jne fn00798710_div
        mov edx, dword ptr [ecx + 0x28]
        xor eax, eax
        test edx, edx
        setne al
        jmp fn00798710_tail
fn00798710_div:
        mov eax, dword ptr [ecx + 0x28]
        xor edx, edx
        lea eax, [eax + esi - 1]
        div esi
fn00798710_tail:
        cmp word ptr [ecx + 0x72], 2
        pop esi
        jne fn00798710_done
        xor edx, edx
        mov dx, word ptr [ecx + 0x4e]
        mov ecx, edx
        imul ecx, eax
        mov eax, ecx
fn00798710_done:
        ret
    }
}

// [0x0079DEC0] sub_0079DEC0 (64 bytes)
extern "C" __declspec(naked) void __fastcall fn_0079DEC0(void* self, int edx_unused, int which) {
    __asm {
        mov edx, dword ptr [esp + 4]
        xor al, al
        sub edx, 0
        je  L_case0
        dec edx
        je  L_case1
        dec edx
        jne L_ret
        mov ecx, dword ptr [ecx]
        add ecx, 0x90
        call ext_007148E0
        ret 4
    L_case1:
        mov ecx, dword ptr [ecx]
        add ecx, 0x48
        call ext_007148E0
        ret 4
    L_case0:
        mov ecx, dword ptr [ecx]
        call ext_007148E0
    L_ret:
        ret 4
    }
}

// [0x0079E410] sub_0079E410 (64 bytes)
extern "C" __declspec(naked) void __fastcall fn_0079E410(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        test eax, eax
        jne nonzero
        mov ecx, dword ptr [ecx]
        push 6
        push 0
        call ext_00714AE0
        mov ecx, eax
        call ext_006C3390
        ret 4
nonzero:
        mov ecx, dword ptr [ecx]
        push 0
        push 0
        call ext_00714AE0
        mov ecx, eax
        call ext_006C3390
        ret 4
    }
}

// [0x0079E8C0] sub_0079E8C0 (64 bytes)
extern "C" void ext_0079E800();
extern "C" __declspec(naked) void __fastcall fn_0079E8C0(void* self) {
    __asm {
        call ext_0079E800
        test eax, eax
        je short L_end
        call ext_0079E800
        mov edx, dword ptr [eax]
        push 0x0
        push 0x3
        mov ecx, eax
        call dword ptr [edx]
        mov ecx, dword ptr [esp + 0x8]
        mov edx, dword ptr [eax]
        push 0x7fffffff
        push ecx
        mov ecx, dword ptr [esp + 0xc]
        push ecx
        push 0x34538402
        mov ecx, eax
        call dword ptr [edx + 0x8]
L_end:
        ret
    }
}

// [0x0079DDC0] sub_0079DDC0 (64 bytes)
extern "C" void ext_00714980();
extern "C" void ext_007149B0();
extern "C" void ext_007149D0();

extern "C" __declspec(naked) bool __fastcall fn_0079DDC0(void* self, int edx_unused, int mode) {
    __asm {
        mov edx, dword ptr [esp + 0x4]
        mov al, 1
        _emit 0x83
        _emit 0xEA
        _emit 0x00
        je short L_case0
        dec edx
        je short L_case1
        dec edx
        jne short L_ret
        mov ecx, dword ptr [ecx]
        call ext_007149D0
        test al, al
        sete al
        ret 4
L_case1:
        mov ecx, dword ptr [ecx]
        call ext_007149B0
        test al, al
        sete al
        ret 4
L_case0:
        mov ecx, dword ptr [ecx]
        call ext_00714980
        test al, al
        sete al
L_ret:
        ret 4
    }
}

// [0x00798EA0] sub_00798EA0 (80 bytes)
extern "C" void ext_0079AF40();

extern "C" __declspec(naked) void __cdecl fn_00798EA0(void* self) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        push 0x18
        call ext_0079AF40
        add esp, 0x4
        mov dword ptr [esi + 0xdc], eax
        xor eax, eax
L_loop:
        mov ecx, dword ptr [esi + 0xdc]
        mov edx, 0x1
        mov dword ptr [eax + ecx], 0x0
        mov cl, byte ptr [esi + 0x28]
        shl edx, cl
        mov ecx, dword ptr [esi + 0xdc]
        add eax, 0x8
        dec edx
        cmp eax, 0x18
        mov dword ptr [esp + 0x8], edx
        fild dword ptr [esp + 0x8]
        fstp dword ptr [eax + ecx - 0x4]
        jl short L_loop
        pop esi
        ret
    }
}

// [0x007986B0] sub_007986B0 (96 bytes)
extern "C" void ext_0079B140();
extern "C" __declspec(naked) int __cdecl fn_007986B0(void* self, unsigned a2, unsigned a3) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        push esi
        mov esi, dword ptr [esp + 0x8]
        xor edx, edx
        div dword ptr [esi + 0x50]
        cmp word ptr [esi + 0x72], 0x2
        jne short L_ret
        mov dx, word ptr [esi + 0x4e]
        mov ecx, dword ptr [esp + 0x10]
        cmp cx, dx
        jb short L_mul
        mov eax, dword ptr [esi]
        and edx, 0xffff
        and ecx, 0xffff
        push edx
        push ecx
        push 0xaafa2c
        push eax
        call ext_0079B140
        add esp, 0x10
        xor eax, eax
        pop esi
        ret
L_mul:
        mov edx, dword ptr [esi + 0xc8]
        and ecx, 0xffff
        imul edx, ecx
        add eax, edx
L_ret:
        pop esi
        ret
    }
}

// [0x007990F0] sub_007990F0 (96 bytes)
extern "C" void ext_007AF580();
extern "C" __declspec(naked) int __cdecl fn_007990F0(int a1, int a2, int a3) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        push edi
        mov edi, dword ptr [esp + 0x10]
        push 0x0
        push edi
        push esi
        call ext_007AF580
        add esp, 0xc
        test eax, eax
        je L_zero
        cmp edi, 0xffff
        ja L_call
        xor edx, edx
        mov dx, word ptr [eax + 0xc]
        mov eax, 0x1
        mov ecx, edx
        and ecx, 0x1f
        shl eax, cl
        shr edx, 0x5
        test dword ptr [esi + 4*edx + 0x18], eax
        je L_zero
L_call:
        mov ecx, dword ptr [esp + 0x14]
        push ecx
        push edi
        push esi
        call dword ptr [esi + 0x220]
        add esp, 0xc
        pop edi
        pop esi
        ret
L_zero:
        pop edi
        xor eax, eax
        pop esi
        ret
    }
}

// [0x0079EBF0] sub_0079EBF0 (96 bytes)
extern "C" int mem_00925208;
extern "C" int mem_00B61219;
extern "C" int mem_009977EC;
extern "C" int mem_00997749;
extern "C" void ext_007AA510();

extern "C" __declspec(naked) void __cdecl fn_0079EBF0(void* out) {
    __asm {
        push ebx
        push esi
        push 0x1c
        call dword ptr [mem_00925208]
        mov esi, dword ptr [esp + 0x10]
        xor ebx, ebx
        add esp, 4
        cmp eax, ebx
        mov dword ptr [esi], eax
        jne short L_init
        push 1
        call ext_007AA510
        mov al, byte ptr [mem_00B61219]
        add esp, 4
        cmp al, bl
        je short L_done
L_init:
        mov eax, dword ptr [esi]
        mov dword ptr [eax], ebx
        mov ecx, dword ptr [esi]
        mov dword ptr [ecx + 4], ebx
        mov edx, dword ptr [esi]
        mov dword ptr [edx + 8], ebx
        mov eax, dword ptr [esi]
        mov cl, byte ptr [mem_009977EC]
        mov byte ptr [eax + 0xc], cl
        mov edx, dword ptr [esi]
        mov dword ptr [edx + 0x10], ebx
        mov eax, dword ptr [esi]
        mov dword ptr [eax + 0x14], ebx
        mov ecx, dword ptr [esi]
        mov dl, byte ptr [mem_00997749]
        mov byte ptr [ecx + 0x18], dl
L_done:
        pop esi
        pop ebx
        ret
    }
}

// [0x0079BE90] sub_0079BE90 (96 bytes)
extern "C" void ext_006A5C62();
extern "C" void ext_0079BEF0();

extern "C" __declspec(naked) void __fastcall fn_0079BE90(void* self) {
    __asm {
        push -1
        push 0x008b8fdb
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push 0xf8c
        call ext_006A5C62
        add esp, 4
        __asm _emit 0x89 __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x00
        test eax, eax
        mov dword ptr [esp + 0xc], 0
        je short L_null
        mov ecx, eax
        call ext_0079BEF0
        mov ecx, dword ptr [esp + 4]
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    L_null:
        mov ecx, dword ptr [esp + 4]
        xor eax, eax
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
        __asm _emit 0x90 __asm _emit 0x90 __asm _emit 0x90
        __asm _emit 0x90 __asm _emit 0x90 __asm _emit 0x90
    }
}

// [0x0079F230] sub_0079F230 (96 bytes)
extern "C" void ext_006A5C62();
extern "C" void ext_0079F290();

extern "C" __declspec(naked) void __fastcall fn_0079F230(void* self) {
    __asm {
        push -1
        push 0x008b8fdb
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push 0x7e0
        call ext_006A5C62
        add esp, 4
        __asm _emit 0x89 __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x00
        test eax, eax
        mov dword ptr [esp + 0xc], 0
        je short L_null
        mov ecx, eax
        call ext_0079F290
        mov ecx, dword ptr [esp + 4]
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    L_null:
        mov ecx, dword ptr [esp + 4]
        xor eax, eax
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
        __asm _emit 0x90 __asm _emit 0x90 __asm _emit 0x90
        __asm _emit 0x90 __asm _emit 0x90 __asm _emit 0x90
    }
}

// [0x0079A1C0] sub_0079A1C0 (112 bytes)
extern "C" void ext_00798FB0();

extern "C" __declspec(naked) int __cdecl fn_0079A1C0(void* a1, void* a2, void* a3) {
    __asm {
        mov ecx, dword ptr [esp + 0x8]
        mov edx, dword ptr [esp + 0xc]
        add ecx, 0x4
        push ebx
        mov ebx, dword ptr [esp + 0x8]
        push esi
        mov eax, dword ptr [ecx - 0x4]
        push edi
        mov si, ax
        mov dword ptr [edx], eax
        cmp si, word ptr [ebx + 0x36]
        jbe short L_cont
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        ret
L_cont:
        mov edi, dword ptr [ecx]
        test eax, eax
        jle short L_scan
        test edi, edi
        jne short L_scan
L_fail:
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        ret
L_scan:
        xor ecx, ecx
        test eax, eax
        jle short L_store
        mov edx, edi
L_loop:
        cmp word ptr [edx], 0x2
        ja short L_fail
        inc ecx
        add edx, 0x2
        cmp ecx, eax
        jl short L_loop
L_store:
        mov word ptr [ebx + 0x78], si
        and esi, 0xffff
        push esi
        add ebx, 0x7c
        push edi
        push ebx
        call ext_00798FB0
        add esp, 0xc
        mov eax, 0x1
        pop edi
        pop esi
        pop ebx
        ret
    }
}

// [0x0079E4B0] sub_0079E4B0 (112 bytes)
extern "C" void ext_006C3520();
extern "C" void ext_006D2390();
extern "C" void ext_006D80A0();

extern "C" __declspec(naked) void __fastcall fn_0079E4B0(void* self, int edx_unused, int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8) {
    __asm {
        push -1
        push 0x008b9300
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        sub esp, 0x20
        lea eax, [esp + 0x38]
        mov ecx, esp
        mov dword ptr [esp + 0x24], esp
        push eax
        mov dword ptr [esp + 0x34], 0
        call ext_006D2390
        mov ecx, dword ptr [esi]
        push 0
        mov byte ptr [esp + 0x34], 0
        call ext_00714AE0
        mov ecx, eax
        call ext_006C3520
        lea ecx, [esp + 0x18]
        mov dword ptr [esp + 0x10], -1
        call ext_006D80A0
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 0x20
    }
}

// [0x0079DD50] sub_0079DD50 (112 bytes)
extern "C" void ext_006C33F0();
extern "C" void ext_00714970();
extern "C" void ext_00714990();
extern "C" void ext_007149C0();

extern "C" __declspec(naked) void __fastcall fn_0079DD50(void* self, int edx_unused, int a1, int a2) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        sub eax, 0x0
        mov esi, ecx
        je short L_case0
        dec eax
        je short L_case1
        dec eax
        jne short L_end
        mov dl, byte ptr [esp + 0xc]
        mov ecx, dword ptr [esi]
        test dl, dl
        sete al
        push eax
        call ext_007149C0
        pop esi
        ret 0x8
L_case1:
        push ebx
        mov bl, byte ptr [esp + 0x10]
        test bl, bl
        sete cl
        push ecx
        mov ecx, dword ptr [esi]
        call ext_00714990
        test bl, bl
        pop ebx
        jne short L_end
        mov ecx, dword ptr [esi]
        push 0x1
        push 0x0
        call ext_00714AE0
        mov ecx, eax
        call ext_006C33F0
        pop esi
        ret 0x8
L_case0:
        mov cl, byte ptr [esp + 0xc]
        test cl, cl
        mov ecx, dword ptr [esi]
        sete dl
        push edx
        call ext_00714970
L_end:
        pop esi
        ret 0x8
    }
}

// [0x0079EF70] sub_0079EF70 (112 bytes)
extern "C" void ext_0079EA60();
extern "C" void ext_007AA510();
extern "C" int mem_00925264;
extern "C" int mem_009252CC;
extern "C" int mem_009251D8;

extern "C" __declspec(naked) void __cdecl fn_0079EF70(void* self) {
    __asm {
        push ebx
        push esi
        mov esi, dword ptr [esp + 0xc]
        xor ebx, ebx
        test esi, esi
        je L_done
        mov eax, dword ptr [esi]
        test eax, eax
        je short L_skip
        push eax
        call dword ptr [mem_00925264]
        mov ebx, eax
        mov al, byte ptr [esi + 0x18]
        add esp, 4
        test al, al
        je short L_skip
        mov eax, dword ptr [esi + 4]
        push eax
        call dword ptr [mem_009252CC]
        add esp, 4
L_skip:
        push edi
        push esi
        call ext_0079EA60
        mov ecx, dword ptr [esi + 4]
        mov edi, dword ptr [mem_009251D8]
        push ecx
        call edi
        mov edx, dword ptr [esi + 0x10]
        push edx
        call edi
        push esi
        call edi
        add esp, 0x10
        test ebx, ebx
        pop edi
        je short L_done
        push 0xc
        call ext_007AA510
        add esp, 4
L_done:
        pop esi
        pop ebx
        ret
    }
}

// [0x00798570] sub_00798570 (128 bytes)
extern "C" __declspec(naked) void __cdecl fn_00798570(void* self, unsigned int v) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        test byte ptr [esi + 0xc], 0x20
        jne short L_set
        push esi
        call dword ptr [esi + 0x18c]
        add esp, 0x4
        test eax, eax
        jne short L_or
        pop esi
        ret
L_or:
        mov eax, dword ptr [esi + 0xc]
        or al, 0x20
        mov dword ptr [esi + 0xc], eax
L_set:
        mov ecx, dword ptr [esp + 0xc]
        xor edx, edx
        mov eax, ecx
        mov dword ptr [esi + 0x16c], ecx
        div dword ptr [esi + 0xc8]
        mov eax, dword ptr [esi + 0x1d8]
        imul edx, dword ptr [esi + 0x50]
        mov dword ptr [esi + 0x164], edx
        mov dword ptr [esi + 0x1e0], eax
        mov edx, dword ptr [esi + 0xd4]
        mov eax, dword ptr [edx + 4*ecx]
        xor edx, edx
        mov dword ptr [esi + 0x1e4], eax
        mov eax, ecx
        div dword ptr [esi + 0xc8]
        push eax
        push esi
        call dword ptr [esi + 0x190]
        add esp, 0x8
        pop esi
        ret
    }
}

// [0x0079EEF0] sub_0079EEF0 (128 bytes)
extern "C" unsigned char mem_00B61218;
extern "C" unsigned char mem_00B61151;
extern "C" int mem_00B61219;
extern "C" int mem_009251D8;
extern "C" void ext_0079EF70();
extern "C" __declspec(naked) void __fastcall fn_0079EEF0(void* self) {
    __asm {
        push ecx
        mov al, byte ptr [mem_00B61150]
        push ebx
        xor bl, bl
        test al, al
        mov byte ptr [esp + 0x4], bl
        jbe L_end
L_loop:
        mov eax, dword ptr [esp + 0x4]
        mov ecx, dword ptr [mem_00B6114C]
        and eax, 0xff
        mov edx, dword ptr [ecx + 4*eax]
        push edx
        call ext_0079EF70
        mov al, byte ptr [mem_00B61218]
        add esp, 0x4
        test al, al
        je L_next
        mov al, byte ptr [mem_00B61219]
        test al, al
        je L_done
L_next:
        mov al, byte ptr [mem_00B61150]
        inc bl
        cmp bl, al
        mov byte ptr [esp + 0x4], bl
        jb L_loop
L_end:
        mov eax, dword ptr [mem_00B6114C]
        push eax
        call dword ptr [mem_009251D8]
        add esp, 0x4
        mov dword ptr [mem_00B6114C], 0
        mov byte ptr [mem_00B61150], 0
        mov byte ptr [mem_00B61151], 0
L_done:
        pop ebx
        pop ecx
        ret
    }
}

// [0x0079E260] sub_0079E260 (128 bytes)
extern "C" void ext_006D80A0();
extern "C" void ext_00714940();
extern "C" __declspec(naked) void __fastcall fn_0079E260(void* self) {
    __asm {
        mov eax, fs:[0]
        push -1
        push 0x8c08e8
        push eax
        mov fs:[0], esp
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [esp + 0x8], 0
        _emit 0x83
        _emit 0xe8
        _emit 0x00
        je short L_case0
        dec eax
        je short L_case1
        dec eax
        jne short L_done
        mov ecx, dword ptr [ecx]
        lea eax, [esp + 0x14]
        push eax
        add ecx, 0x90
        jmp short L_call
L_case1:
        mov ecx, dword ptr [ecx]
        lea edx, [esp + 0x14]
        push edx
        add ecx, 0x48
        jmp short L_call
L_case0:
        mov ecx, dword ptr [ecx]
        lea eax, [esp + 0x14]
        push eax
L_call:
        call ext_00714940
L_done:
        lea ecx, [esp + 0x14]
        mov dword ptr [esp + 0x8], 0xffffffff
        call ext_006D80A0
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x00
        mov fs:[0], ecx
        add esp, 0xc
        ret 0x24
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
    }
}

// [0x0079E0B0] sub_0079E0B0 (128 bytes)
extern "C" void ext_006D80A0();
extern "C" void ext_00714910();
extern "C" __declspec(naked) void __fastcall fn_0079E0B0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8c08e8
        push eax
        mov dword ptr fs:[0x0], esp
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [esp + 0x8], 0x0
        sub eax, 0x0
        je short L_case0
        dec eax
        je short L_case1
        dec eax
        jne short L_default
        mov ecx, dword ptr [ecx]
        lea eax, [esp + 0x14]
        push eax
        add ecx, 0x90
        jmp short L_call
L_case1:
        mov ecx, dword ptr [ecx]
        lea edx, [esp + 0x14]
        push edx
        add ecx, 0x48
        jmp short L_call
L_case0:
        mov ecx, dword ptr [ecx]
        lea eax, [esp + 0x14]
        push eax
L_call:
        call ext_00714910
L_default:
        lea ecx, [esp + 0x14]
        mov dword ptr [esp + 0x8], 0xffffffff
        call ext_006D80A0
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x00
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret 0x24
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
    }
}

// [0x0079AF60] sub_0079AF60 (128 bytes)
extern "C" int mem_00924194;
extern "C" int mem_009241F0;
extern "C" int mem_009241E8;

// GlobalReAlloc-like helper: src = arg1 (stack), newSize = arg2 (stack).
// Allocates newSize bytes, copies min(oldSize, newSize) bytes (copies newSize when
// oldSize >= newSize, oldSize otherwise), frees src, returns the new handle (0 on failure).
extern "C" __declspec(naked) void* __cdecl fn_0079AF60(void* src, unsigned int newSize) {
    __asm {
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 0xc]
        push esi
        push edi
        push ebp
        call dword ptr [mem_00924194]
        mov esi, dword ptr [esp + 0x18]
        mov edi, eax
        cmp edi, esi
        push esi
        push 0
        jl short L_grow
        call dword ptr [mem_009241F0]
        mov ebx, eax
        test ebx, ebx
        je short L_done
        mov ecx, esi
        mov esi, ebp
        mov eax, ecx
        mov edi, ebx
        shr ecx, 2
        rep movsd
        mov ecx, eax
        push ebp
        and ecx, 3
        rep movsb
        call dword ptr [mem_009241E8]
        pop edi
        pop esi
        mov eax, ebx
        pop ebp
        pop ebx
        ret
L_grow:
        call dword ptr [mem_009241F0]
        mov ebx, eax
        test ebx, ebx
        je short L_done
        mov ecx, edi
        mov esi, ebp
        mov edx, ecx
        mov edi, ebx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        push ebp
        and ecx, 3
        rep movsb
        call dword ptr [mem_009241E8]
L_done:
        pop edi
        pop esi
        mov eax, ebx
        pop ebp
        pop ebx
        ret
    }
}

// [0x0079E950] sub_0079E950 (128 bytes)
extern "C" void ext_007AA510();
extern "C" int mem_009977ED;
extern "C" int mem_0092522C;
extern "C" int mem_00B61219;
extern "C" unsigned char mem_00B61151;

extern "C" __declspec(naked) void __fastcall fn_0079E950(void* self) {
    __asm {
        push ecx
        xor eax, eax
        push 4
        mov al, byte ptr [mem_009977ED]
        push eax
        call dword ptr [mem_0092522C]
        add esp, 8
        mov dword ptr [mem_00B6114C], eax
        test eax, eax
        jne short L_init
        push 1
        call ext_007AA510
        mov al, byte ptr [mem_00B61219]
        add esp, 4
        test al, al
        je short L_done
L_init:
        mov cl, byte ptr [mem_009977ED]
        xor al, al
        test cl, cl
        _emit 0x88
        _emit 0x44
        _emit 0x24
        _emit 0x00
        jbe short L_clear
L_loop:
        _emit 0x8B
        _emit 0x4C
        _emit 0x24
        _emit 0x00
        mov edx, dword ptr [mem_00B6114C]
        and ecx, 0xff
        inc al
        _emit 0x88
        _emit 0x44
        _emit 0x24
        _emit 0x00
        mov dword ptr [edx + 4*ecx], 0
        mov cl, byte ptr [mem_009977ED]
        cmp al, cl
        jb short L_loop
L_clear:
        mov byte ptr [mem_00B61150], 0
        mov byte ptr [mem_00B61151], 0
L_done:
        pop ecx
        ret
    }
}

// [0x0079EAE0] sub_0079EAE0 (144 bytes)
extern "C" __declspec(naked) int __cdecl fn_0079EAE0(int a1) {
    __asm {
        push ecx
        mov al, byte ptr [mem_00B61150]
        push ebx
        push ebp
        push esi
        test al, al
        push edi
        mov byte ptr [esp + 0x10], 0x0
        jbe L_end
        mov edx, dword ptr [esp + 0x18]
        mov ebp, dword ptr [mem_00B6114C]
L_loop:
        mov edi, dword ptr [esp + 0x10]
        mov eax, edi
        and eax, 0xff
        mov eax, dword ptr [ebp + 4*eax]
        test eax, eax
        je L_next
        mov eax, dword ptr [eax + 0x4]
        mov esi, edx
L_cmp:
        mov bl, byte ptr [eax]
        mov cl, bl
        cmp bl, byte ptr [esi]
        jne L_ne
        test cl, cl
        je L_eq
        mov bl, byte ptr [eax + 0x1]
        mov cl, bl
        cmp bl, byte ptr [esi + 0x1]
        jne L_ne
        add eax, 0x2
        add esi, 0x2
        test cl, cl
        jne L_cmp
L_eq:
        xor eax, eax
        jmp L_done
L_ne:
        sbb eax, eax
        sbb eax, -1
L_done:
        test eax, eax
        je L_found
L_next:
        mov al, byte ptr [esp + 0x10]
        mov cl, byte ptr [mem_00B61150]
        inc al
        cmp al, cl
        mov byte ptr [esp + 0x10], al
        jb L_loop
L_end:
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        pop ecx
        ret
L_found:
        and edi, 0xff
        mov eax, dword ptr [ebp + 4*edi]
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret
    }
}

// [0x0079ABF0] sub_0079ABF0 (144 bytes)
extern "C" int mem_00B60F40;
extern "C" __declspec(naked) int __cdecl fn_0079ABF0(int a1, int a2) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        sub eax, 0
        je short L_case0
        dec eax
        je short L_case1
        dec eax
        jne short L_default
        mov dword ptr [mem_00B60F40], 0
L_true:
        mov eax, 1
        pop esi
        ret
L_case1:
        mov edx, dword ptr [mem_00B60F40]
        xor eax, eax
        test edx, edx
        jle short L_default
        mov esi, dword ptr [esp + 0xc]
        mov ecx, 0xb60dc0
L_scan1:
        cmp dword ptr [ecx], esi
        je short L_true
        inc eax
        add ecx, 4
        cmp eax, edx
        jl short L_scan1
L_default:
        xor eax, eax
        pop esi
        ret
L_case0:
        mov ecx, dword ptr [mem_00B60F40]
        cmp ecx, 0x5e
        jge short L_default
        mov esi, dword ptr [esp + 0xc]
        xor eax, eax
        test ecx, ecx
        jle short L_append
        mov edx, 0xb60dc0
L_scan0:
        cmp dword ptr [edx], esi
        je short L_true
        inc eax
        add edx, 4
        cmp eax, ecx
        jl short L_scan0
L_append:
        mov dword ptr [4*ecx + 0xb60dc0], esi
        inc ecx
        mov dword ptr [mem_00B60F40], ecx
        mov eax, 1
        pop esi
        ret
    }
}

// [0x00798750] sub_00798750 (144 bytes)
// Plain cdecl (ret, no N): arg1 = struct ptr (ebx), arg2 = multiplier (ebp; -1 means use self+0x28).
extern "C" void ext_00798840();

extern "C" __declspec(naked) unsigned int __cdecl fn_00798750(void* self, int a2) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0x8]
        push ebp
        mov ebp, dword ptr [esp + 0x10]
        cmp ebp, -1
        jne short L_have_mul
        mov ebp, dword ptr [ebx + 0x28]
L_have_mul:
        cmp word ptr [ebx + 0x72], 0x1
        jne short L_slow
        cmp word ptr [ebx + 0x46], 0x6
        jne short L_slow
        mov eax, dword ptr [ebx + 0xc]
        test ah, 0x40
        jne short L_slow
        mov eax, dword ptr [ebx + 0x24]
        push esi
        push edi
        xor edi, edi
        mov di, word ptr [ebx + 0xe4]
        xor edx, edx
        xor esi, esi
        lea eax, [eax + edi - 0x1]
        mov si, word ptr [ebx + 0xe6]
        div edi
        xor edx, edx
        mov dx, word ptr [ebx + 0x40]
        mov ecx, eax
        lea eax, [esi + ebp - 0x1]
        imul ecx, edx
        xor edx, edx
        imul ecx, edi
        div esi
        add ecx, 0x7
        xor edx, edx
        shr ecx, 0x3
        imul eax, esi
        imul esi, edi
        imul ecx, eax
        mov eax, ecx
        pop edi
        div esi
        pop esi
        pop ebp
        pop ebx
        lea eax, [ecx + 2*eax]
        ret
L_slow:
        push ebx
        call ext_00798840
        imul eax, ebp
        add esp, 0x4
        pop ebp
        pop ebx
        ret
    }
}

// [0x00799040] sub_00799040 (144 bytes)
extern "C" __declspec(naked) int __cdecl fn_00799040(void* a1, int a2) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0xc]
        push edi
        mov edi, dword ptr [esp + 0xc]
        push 0
        push esi
        push edi
        call ext_007AF580
        add esp, 0xc
        test eax, eax
        jne L_88
        cmp esi, 0xffff
        mov eax, 0xaafaa0
        ja L_6c
        mov eax, 0xb5d2c0
L_6c:
        push esi
        push eax
        mov eax, dword ptr [edi]
        push eax
        push 0xaafa88
        push 0xaafa78
        call ext_0079B140
        add esp, 0x14
        xor eax, eax
        pop edi
        pop esi
        ret
L_88:
        cmp esi, 0x101
        je L_one
        test byte ptr [edi + 0xc], 0x40
        je L_one
        mov cl, byte ptr [eax + 0xe]
        test cl, cl
        jne L_one
        mov ecx, dword ptr [eax + 0x10]
        mov edx, dword ptr [edi]
        push ecx
        push edx
        push 0xaafa4c
        push 0xaafa78
        call ext_0079B140
        add esp, 0x10
        xor eax, eax
        pop edi
        pop esi
        ret
L_one:
        pop edi
        mov eax, 1
        pop esi
        ret
    }
}

// [0x0079E9D0] sub_0079E9D0 (144 bytes)
extern "C" void ext_0079E950();
extern "C" int mem_009977ED;
extern "C" void ext_007AA510();
extern "C" int mem_00B61219;

extern "C" __declspec(naked) void __cdecl fn_0079E9D0(void* a1) {
    __asm {
        push ecx
        mov ecx, dword ptr [mem_00B6114C]
        test ecx, ecx
        jne short L_have
        call ext_0079E950
        mov ecx, dword ptr [mem_00B6114C]
L_have:
        mov al, byte ptr [mem_00B61150]
        push ebx
        xor bl, bl
        push esi
        test al, al
        mov byte ptr [esp + 0x8], bl
        jbe short L_fall
L_loop:
        mov esi, dword ptr [esp + 0x8]
        mov edx, esi
        and edx, 0xff
        cmp dword ptr [ecx + 4*edx], 0x0
        je short L_chk
        inc bl
        cmp bl, al
        mov byte ptr [esp + 0x8], bl
        jb short L_loop
L_fall:
        mov esi, dword ptr [esp + 0x8]
L_chk:
        cmp bl, byte ptr [mem_009977ED]
        jb short L_store
        push 0x13
        call ext_007AA510
        mov al, byte ptr [mem_00B61219]
        add esp, 0x4
        test al, al
        je short L_ret
        mov ecx, dword ptr [mem_00B6114C]
L_store:
        mov eax, dword ptr [esp + 0x10]
        and esi, 0xff
        mov dword ptr [ecx + 4*esi], eax
        mov byte ptr [eax + 0xc], bl
        mov al, byte ptr [mem_00B61150]
        cmp bl, al
        jne short L_ret
        inc al
        mov byte ptr [mem_00B61150], al
L_ret:
        pop esi
        pop ebx
        pop ecx
        ret
    }
}

// [0x0079E520] sub_0079E520 (144 bytes)
// __thiscall-style (this in ecx, one stack arg, ret 4), with an EH frame (fs:[0] chain).
// Externs are declared below the marker so work check does not hoist them into the shard preamble
// (hoisting triggers an append-aliasing bug in mergeWipIntoShard that clobbers the next function's header).
extern "C" void ext_006C3590();
extern "C" void ext_006D2370();
extern "C" void ext_006D2390();
extern "C" void ext_006D80A0();
extern "C" void ext_007873F0();
extern "C" __declspec(naked) void __fastcall fn_0079E520(void* self, int edx_unused, int a1) {
    __asm {
        push -1
        push 0x8c1a5f
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x24
        push esi
        mov esi, ecx
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x4], 0
        call ext_006D2370
        mov ecx, dword ptr [esi]
        push 0
        mov dword ptr [esp + 0x34], 1
        call ext_00714AE0
        mov ecx, eax
        call ext_006C3590
        push eax
        lea ecx, [esp + 0xc]
        call ext_007873F0
        mov esi, dword ptr [esp + 0x38]
        lea eax, [esp + 0x8]
        push eax
        mov ecx, esi
        call ext_006D2390
        mov dword ptr [esp + 0x4], 1
        lea ecx, [esp + 0x8]
        mov byte ptr [esp + 0x30], 0
        call ext_006D80A0
        mov ecx, dword ptr [esp + 0x28]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x30
        ret 0x4
    }
}

// [0x0079FCC0] sub_0079FCC0 (160 bytes)
extern "C" __declspec(naked) void __cdecl fn_0079FCC0(void* p) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        mov eax, dword ptr [esi]
        test eax, eax
        je L_end
        mov eax, dword ptr [eax + 0x30]
        push edi
        mov edi, dword ptr [mem_009251D8]
        test eax, eax
        je short L1
        push eax
        call edi
        add esp, 0x4
L1:
        mov eax, dword ptr [esi]
        mov eax, dword ptr [eax + 0x34]
        test eax, eax
        je short L2
        push eax
        call edi
        add esp, 0x4
L2:
        mov ecx, dword ptr [esi]
        mov eax, dword ptr [ecx + 0x40]
        test eax, eax
        je short L3
        push eax
        call edi
        add esp, 0x4
L3:
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 0x44]
        test eax, eax
        je short L4
        push eax
        call edi
        add esp, 0x4
L4:
        mov eax, dword ptr [esi]
        mov eax, dword ptr [eax + 0x50]
        test eax, eax
        je short L5
        push eax
        call edi
        add esp, 0x4
L5:
        mov ecx, dword ptr [esi]
        mov eax, dword ptr [ecx + 0x54]
        test eax, eax
        je short L6
        push eax
        call edi
        add esp, 0x4
L6:
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 0x78]
        test eax, eax
        je short L7
        push eax
        call edi
        add esp, 0x4
L7:
        mov eax, dword ptr [esi]
        mov eax, dword ptr [eax + 0x7c]
        test eax, eax
        je short L8
        push eax
        call edi
        add esp, 0x4
L8:
        mov ecx, dword ptr [esi]
        push ecx
        call edi
        add esp, 0x4
        mov dword ptr [esi], 0x0
        pop edi
L_end:
        pop esi
        ret
    }
}

// [0x0079E800] sub_0079E800 (160 bytes)
extern "C" void ext_006A5C62();
extern "C" void ext_0079E620();
extern "C" int mem_00B61144;
extern "C" int mem_00AAFF74;

extern "C" __declspec(naked) void __fastcall fn_0079E800(void* self) {
    __asm {
        push -1
        push 0x8b8fdb
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        mov ecx, dword ptr [mem_00B61144]
        test ecx, ecx
        jne short L_869
        mov al, byte ptr [mem_00AAFF74]
        test al, al
        je short L_880
        push 0x24
        call ext_006A5C62
        add esp, 4
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x00
        test eax, eax
        mov dword ptr [esp + 0xc], 0
        je short L_84C
        mov ecx, eax
        call ext_0079E620
        jmp short L_84E
L_84C:
        xor eax, eax
L_84E:
        mov ecx, eax
        mov dword ptr [esp + 0xc], -1
        test eax, eax
        mov dword ptr [mem_00B61144], ecx
        mov byte ptr [mem_00AAFF74], 0
        je short L_880
L_869:
        mov eax, dword ptr [ecx]
        push 0
        push 0
        call dword ptr [eax]
        mov ecx, dword ptr [esp + 4]
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
L_880:
        mov ecx, dword ptr [esp + 4]
        xor eax, eax
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
    }
}

// [0x00798870] sub_00798870 (160 bytes)
extern "C" void ext_007AF360();
extern "C" void ext_00799150();
extern "C" void ext_0079AF50(void*);

extern "C" __declspec(naked) void __cdecl fn_00798870(void* self) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        mov eax, dword ptr [esi + 0x8]
        test eax, eax
        je short L_skip1
        push esi
        call ext_007AF360
        add esp, 0x4
L_skip1:
        push esi
        call dword ptr [esi + 0x1c0]
        push esi
        call ext_00799150
        mov eax, dword ptr [esi + 0x1d8]
        add esp, 0x8
        test eax, eax
        je short L_skip2
        mov ecx, dword ptr [esi + 0xc]
        test ch, 0x2
        je short L_skip2
        push eax
        call ext_0079AF50
        add esp, 0x4
L_skip2:
        mov eax, dword ptr [esi + 0xc]
        test ah, 0x8
        je short L_skip3
        mov eax, dword ptr [esi + 0x1ec]
        mov ecx, dword ptr [esi + 0x1e8]
        mov edx, dword ptr [esi + 0x1f8]
        push eax
        push ecx
        push edx
        call dword ptr [esi + 0x1f4]
        add esp, 0xc
L_skip3:
        mov eax, dword ptr [esi + 0x1f8]
        push eax
        call dword ptr [esi + 0x208]
        mov eax, dword ptr [esi + 0x214]
        add esp, 0x4
        test eax, eax
        je short L_skip4
        push eax
        call ext_0079AF50
        add esp, 0x4
L_skip4:
        push esi
        call ext_0079AF50
        add esp, 0x4
        pop esi
        ret
    }
}

// [0x00798F10] sub_00798F10 (80 bytes)
extern "C" void ext_0079AF40();
extern "C" void ext_0079AF50(void*);
extern "C" void ext_0079B010();
extern "C" __declspec(naked) void __cdecl fn_00798F10(void** p, void* src, int n) {
    __asm {
        push ebx
        push esi
        mov esi, dword ptr [esp + 0xc]
        push edi
        mov eax, dword ptr [esi]
        test eax, eax
        je short L1
        push eax
        call ext_0079AF50
        add esp, 4
        mov dword ptr [esi], 0
L1:
        mov ebx, dword ptr [esp + 0x14]
        test ebx, ebx
        je short L3
        mov edi, dword ptr [esp + 0x18]
        push edi
        call ext_0079AF40
        add esp, 4
        mov dword ptr [esi], eax
        test eax, eax
        je short L3
        push edi
        push ebx
        push eax
        call ext_0079B010
        add esp, 0xc
L3:
        pop edi
        pop esi
        pop ebx
        ret
    }
}

// [0x0079DB30] sub_0079DB30 (18 bytes)
extern "C" __declspec(naked) void __stdcall fn_0079DB30(int a1, int a2) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        mov edx, dword ptr [esp + 0x4]
        push eax
        push edx
        call ext_007856F0
        ret 0x8
    }
}

// [0x00790EA0] sub_00790EA0 (20 bytes)
extern "C" void ext_00791FF0();

extern "C" __declspec(naked) void __fastcall fn_00790EA0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x60]
        test eax, eax
        je short L_skip
        call ext_00791FF0
L_skip:
        mov al, byte ptr [esi + 0x67]
        pop esi
        ret
    }
}

// [0x00790E40] sub_00790E40 (20 bytes)
extern "C" __declspec(naked) unsigned char __fastcall fn_00790E40(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x60]
        test eax, eax
        je short L_skip
        call ext_00791FF0
L_skip:
        mov al, byte ptr [esi + 0x64]
        pop esi
        ret
    }
}

// [0x0079DB50] sub_0079DB50 (18 bytes)
extern "C" __declspec(naked) void __stdcall fn_0079DB50(int a1, int a2) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        mov edx, dword ptr [esp + 0x4]
        push eax
        push edx
        call ext_007857A0
        ret 0x8
    }
}

// [0x00790E60] sub_00790E60 (20 bytes)
extern "C" __declspec(naked) unsigned char __fastcall fn_00790E60(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x60]
        test eax, eax
        je short L_skip
        call ext_00791FF0
L_skip:
        mov al, byte ptr [esi + 0x65]
        pop esi
        ret
    }
}

// [0x00790E80] sub_00790E80 (20 bytes)
extern "C" __declspec(naked) unsigned char __fastcall fn_00790E80(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x60]
        test eax, eax
        je short L_done
        call ext_00791FF0
    L_done:
        mov al, byte ptr [esi + 0x66]
        pop esi
        ret
    }
}

// [0x00798650] sub_00798650 (24 bytes)
extern "C" void __cdecl ext_007AF010(int, int);

extern "C" void __cdecl fn_00798650(int a1, int a2, int a3) {
    ext_007AF010(a2, a3 / 2);
}

// [0x00798670] sub_00798670 (28 bytes)
extern "C" void ext_007AF040();

extern "C" int __cdecl fn_00798670(int a1, int a2, int a3) {
    return ((int (__cdecl *)(int, int))ext_007AF040)(a2, a3 / 4);
}

// [0x007987E0] sub_007987E0 (27 bytes)
extern "C" void __cdecl fn_007987E0(void* a1) {
    unsigned int val50 = *(unsigned int*)((char*)a1 + 0x50);
    unsigned int val28 = *(unsigned int*)((char*)a1 + 0x28);
    if (val50 > val28) {
        val50 = val28;
    }
    ext_00798750(a1, val50);
}

// [0x00798690] sub_00798690 (28 bytes)
extern "C" int __cdecl fn_00798690(int a1, int a2, int a3) {
    return ((int (__cdecl *)(int, int))ext_007AF080)(a2, a3 / 8);
}

// [0x0079E5E0] sub_0079E5E0 (34 bytes)
extern "C" __declspec(naked) void __fastcall fn_0079E5E0(void* self, int edx_unused, int a1) {
    __asm {
        mov edx, dword ptr [esp + 0x4]
        mov eax, ecx
        sub edx, 0x0
        je short L_ret0
        sub edx, 0x2
        je short L_ret0
        dec edx
        jne short L_zero
        test eax, eax
        je short L_zero
        add eax, 0x4
        ret 0x8
L_zero:
        xor eax, eax
L_ret0:
        ret 0x8
    }
}

// [0x0079C050] sub_0079C050 (34 bytes)
extern "C" void ext_0079C080();
extern "C" void ext_006A5C5C();

extern "C" __declspec(naked) void __fastcall fn_0079C050(void* self) {
    __asm {
        push esi
        mov esi, ecx
        call ext_0079C080
        test byte ptr [esp + 0x8], 0x1
        lea eax, [esi - 0x4]
        je short L_done
        push eax
        call ext_006A5C5C
        add esp, 0x4
        lea eax, [esi - 0x4]
L_done:
        pop esi
        ret 0x4
    }
}

// [0x0079D700] sub_0079D700 (35 bytes)
extern "C" void* __fastcall fn_0079D700(void* self, void* dummy, int a1, int a2) {
    if (a1 == 0 || a1 == 3) {
        return self;
    }
    if (a1 == 12 && self) {
        return (char*)self + 4;
    }
    return 0;
}

// [0x007911E0] sub_007911E0 (39 bytes)
extern "C" __declspec(naked) void __fastcall fn_007911E0(void* self) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        mov edx, dword ptr [esp + 0x8]
        mov dword ptr [ecx + 0x50], eax
        mov eax, dword ptr [esp + 0xc]
        mov dword ptr [ecx + 0x4c], eax
        xor eax, eax
        mov dword ptr [ecx + 0x48], edx
        mov dword ptr [ecx + 0x60], 0x1
        mov dword ptr [ecx + 0x28], eax
        mov dword ptr [ecx + 0x2c], eax
        ret 0xc
    }
}

// [0x0079AD20] sub_0079AD20 (39 bytes)
extern "C" int mem_00924180; /* u32 0x0062D5C0 */
extern "C" __declspec(naked) void __fastcall fn_0079AD20(void* self) {
    __asm {
        mov ecx, dword ptr [esp + 0xc]
        mov edx, dword ptr [esp + 0x8]
        lea eax, [esp + 0xc]
        push 0x0
        push eax
        mov eax, dword ptr [esp + 0xc]
        push ecx
        push edx
        push eax
        call dword ptr [mem_00924180]
        mov ecx, dword ptr [esp + 0xc]
        neg eax
        sbb eax, eax
        and eax, ecx
        ret
    }
}

// [0x0079ACF0] sub_0079ACF0 (39 bytes)
extern "C" __declspec(naked) void fn_0079ACF0() {
    __asm {
        mov ecx, dword ptr [esp + 0xc]
        mov edx, dword ptr [esp + 0x8]
        lea eax, [esp + 0xc]
        push 0x0
        push eax
        mov eax, dword ptr [esp + 0xc]
        push ecx
        push edx
        push eax
        call dword ptr [mem_00924268]
        mov ecx, dword ptr [esp + 0xc]
        neg eax
        sbb eax, eax
        and eax, ecx
        ret
    }
}

// [0x0079E620] sub_0079E620 (41 bytes)
extern "C" void ext_00783860();
extern "C" __declspec(naked) void __fastcall fn_0079E620(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov dword ptr [esi], 0x995080
        lea ecx, [esi + 0x8]
        mov dword ptr [esi + 0x4], 0x995080
        call ext_00783860
        mov dword ptr [esi], 0x99773c
        mov dword ptr [esi + 0x4], 0x99772c
        mov eax, esi
        pop esi
        ret
    }
}

// [0x0079E6C0] sub_0079E6C0 (41 bytes)
extern "C" int __fastcall fn_0079E6C0(void* self, int /*edx*/, int a1, int a2, int a3) {
    if (a1 != 0x34538402) {
        return 1;
    }
    ((void (__thiscall*)(void*, int, int))ext_00783940)((char*)self + 4, a2, a3);
    return 0;
}

// [0x0079BC70] sub_0079BC70 (46 bytes)
extern "C" int mem_00925284;
extern "C" int mem_00B61020;
extern "C" int mem_00B61028;
extern "C" int mem_00B61030;
extern "C" int mem_00B61038;

extern "C" void __cdecl fn_0079BC70() {
    double* p = *(double**)&mem_00925284;
    *(double*)&mem_00B61020 = -*p;
    *(double*)&mem_00B61028 = -*p;
    *(double*)&mem_00B61030 = -*p;
    *(double*)&mem_00B61038 = -*p;
}

// [0x0079E690] sub_0079E690 (46 bytes)
extern "C" int __fastcall fn_0079E690(void* self, int /*edx*/, int a1, int a2, int a3, int a4) {
    if (a1 != 0x34538402) {
        return 1;
    }
    ((void (__thiscall*)(void*, int, int, int))ext_007838E0)((char*)self + 4, a2, a3, 0x7fffffff);
    return 0;
}

// [0x0079C1B0] sub_0079C1B0 (49 bytes)
extern "C" __declspec(naked) void* __fastcall fn_0079C1B0(void* self, int, int id, int) {
    __asm {
        mov eax, ecx
        mov ecx, dword ptr [esp + 0x4]
        test ecx, ecx
        je L_ret
        cmp ecx, 0x33
        je L_case_33
        xor edx, edx
        cmp ecx, 0x3ea
        setne dl
        dec edx
        and eax, edx
        ret 0x8
    L_case_33:
        test eax, eax
        je L_zero
        add eax, 0xf50
        ret 0x8
    L_zero:
        xor eax, eax
    L_ret:
        ret 0x8
    }
}

// [0x0079B030] sub_0079B030 (51 bytes)
extern "C" __declspec(naked) int __cdecl fn_0079B030(const char* s1, const char* s2, size_t n) {
    __asm {
        mov ecx, dword ptr [esp + 0x4]
        push esi
        mov esi, dword ptr [esp + 0x10]
        xor eax, eax
        test esi, esi
        push edi
        lea edx, [esi - 0x1]
        je loc_79b060
        mov esi, dword ptr [esp + 0x10]
        sub esi, ecx
loc_79b049:
        test eax, eax
        jne loc_79b060
        mov al, byte ptr [esi + ecx]
        mov edi, eax
        xor eax, eax
        mov al, byte ptr [ecx]
        sub eax, edi
        inc ecx
        mov edi, edx
        dec edx
        test edi, edi
        jne loc_79b049
loc_79b060:
        pop edi
        pop esi
        ret
    }
}

// [0x00798800] sub_00798800 (52 bytes)
extern "C" void ext_00798840();
extern "C" __declspec(naked) int __cdecl fn_00798800(int a1, int a2) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        cmp eax, 0x1
        jge short L_ret
        mov eax, dword ptr [esp + 0x4]
        push eax
        call ext_00798840
        add esp, 0x4
        mov ecx, 0x1
        test eax, eax
        je short L_skip
        mov ecx, eax
L_skip:
        mov eax, 0x2000
        xor edx, edx
        div ecx
        test eax, eax
        jne short L_ret
        mov eax, 0x1
L_ret:
        ret
    }
}

// [0x0079DAC0] sub_0079DAC0 (54 bytes)
extern "C" void ext_007853D0();
extern "C" int mem_00AAFEEC;
extern "C" int mem_00AAFEF4;
extern "C" int mem_009976F8;

extern "C" __declspec(naked) void* __fastcall fn_0079DAC0(void* self) {
    __asm {
        push esi
        push 0x2
        push offset mem_00AAFEEC
        mov esi, ecx
        push offset mem_00AAFEF4
        call ext_007853D0
        xor eax, eax
        mov dword ptr [esi], offset mem_009976F8
        mov dword ptr [esi + 0x78], eax
        mov dword ptr [esi + 0x7c], eax
        mov dword ptr [esi + 0x80], eax
        mov dword ptr [esi + 0x84], 0x3ff00000
        mov eax, esi
        pop esi
        ret
    }
}

// [0x00796740] sub_00796740 (62 bytes)
extern "C" int mem_00997100; /* u32 0xE2308C3A */
extern "C" __declspec(naked) int __fastcall fn_00796740(void* self, int edx_unused, int a0, int a1, int a2) {
    __asm {
        mov edx, dword ptr [esp + 0xc]
        mov eax, dword ptr [esp + 0x8]
        push esi
        sub eax, edx
        lea ecx, [edx - 0x1]
        xor esi, esi
        cmp ecx, eax
        jae short L_done
        mov edx, dword ptr [esp + 0x8]
        sub eax, ecx
        lea edx, [edx + 8*ecx]
        mov ecx, eax
L_loop:
        fld qword ptr [edx + 0x8]
        fsub qword ptr [edx]
        fcomp qword ptr [mem_00997100]
        fnstsw ax
        test ah, 0x41
        jne short L_skip
        inc esi
L_skip:
        add edx, 0x8
        dec ecx
        jne short L_loop
L_done:
        mov eax, esi
        pop esi
        ret 0xc
    }
}

// [0x0079F2E0] sub_0079F2E0 (70 bytes)
extern "C" int mem_00B61168;
extern "C" int mem_00B61230;
extern "C" int mem_00B60F58;
extern "C" int mem_00B5EB78;
extern "C" int mem_00B5E400;

extern "C" __declspec(naked) void __fastcall fn_0079F2E0(void* self) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        mov ecx, dword ptr [mem_00B61168]
        cmp eax, ecx
        jne short L_next1
        mov al, 0x1
        ret 0x4
    L_next1:
        cmp eax, dword ptr [mem_00B61230]
        jne short L_next2
        mov al, 0x1
        ret 0x4
    L_next2:
        cmp eax, dword ptr [mem_00B60F58]
        jne short L_next3
        mov al, 0x1
        ret 0x4
    L_next3:
        cmp eax, dword ptr [mem_00B5EB78]
        jne short L_next4
        mov al, 0x1
        ret 0x4
    L_next4:
        cmp eax, dword ptr [mem_00B5E400]
        sete al
        ret 0x4
    }
}

// [0x0079AD50] sub_0079AD50 (70 bytes)
extern "C" int mem_00924184;

extern "C" __declspec(naked) void fn_0079AD50() {
    __asm {
        mov ecx, dword ptr [esp + 0x8]
        cmp ecx, -0x1
        jne loc_79ad5c
        or eax, ecx
        ret
    loc_79ad5c:
        mov eax, dword ptr [esp + 0xc]
        sub eax, 0x0
        je loc_79ad79
        dec eax
        je loc_79ad72
        dec eax
        jne loc_79ad79
        mov eax, 0x2
        jmp loc_79ad7b
    loc_79ad72:
        mov eax, 0x1
        jmp loc_79ad7b
    loc_79ad79:
        xor eax, eax
    loc_79ad7b:
        push eax
        lea eax, [esp + 0xc]
        push eax
        push ecx
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [esp + 0x14], 0x0
        push ecx
        call dword ptr [mem_00924184]
        ret
    }
}

// [0x00790EE0] sub_00790EE0 (85 bytes)
extern "C" __declspec(naked) void __fastcall fn_00790EE0(void* self) {
    __asm {
        mov eax, dword ptr [ecx + 0x28]
        test eax, eax
        jne L_ret
        mov eax, dword ptr [ecx + 0x8]
        push ebx
        mov ebx, dword ptr [ecx + 0x20]
        push esi
        mov esi, dword ptr [ecx + 0x18]
        push edi
        imul esi, ebx
        cmp eax, 1
        jne L_else
        mov edi, dword ptr [ecx + 0x10]
        mov eax, dword ptr [ecx + 0x48]
        sub eax, edi
        xor edx, edx
        div ebx
        mov edx, esi
        add eax, edi
        pop edi
        dec eax
        imul eax, esi
        add eax, edx
        pop esi
        mov dword ptr [ecx + 0x28], eax
        pop ebx
        ret
L_else:
        mov eax, dword ptr [ecx + 0x48]
        mov edi, dword ptr [ecx + 0x10]
        sub eax, edi
        xor edx, edx
        div ebx
        lea edx, [esi + 1]
        pop edi
        inc eax
        dec eax
        imul eax, esi
        add eax, edx
        pop esi
        mov dword ptr [ecx + 0x28], eax
        pop ebx
L_ret:
        ret
    }
}

// [0x00790F40] sub_00790F40 (85 bytes)
extern "C" __declspec(naked) void __fastcall fn_00790F40(void* self) {
    __asm {
        mov eax, dword ptr [ecx + 0x2c]
        test eax, eax
        jne L_ret
        mov eax, dword ptr [ecx + 0xc]
        push ebx
        mov ebx, dword ptr [ecx + 0x24]
        push esi
        mov esi, dword ptr [ecx + 0x1c]
        push edi
        imul esi, ebx
        cmp eax, 0x1
        jne L_not_one
        mov edi, dword ptr [ecx + 0x14]
        mov eax, dword ptr [ecx + 0x4c]
        sub eax, edi
        xor edx, edx
        div ebx
        mov edx, esi
        add eax, edi
        pop edi
        dec eax
        imul eax, esi
        add eax, edx
        pop esi
        mov dword ptr [ecx + 0x2c], eax
        pop ebx
        ret
L_not_one:
        mov eax, dword ptr [ecx + 0x4c]
        mov edi, dword ptr [ecx + 0x14]
        sub eax, edi
        xor edx, edx
        div ebx
        lea edx, [esi + 0x1]
        pop edi
        inc eax
        dec eax
        imul eax, esi
        add eax, edx
        pop esi
        mov dword ptr [ecx + 0x2c], eax
        pop ebx
L_ret:
        ret
    }
}

// [0x0079D680] sub_0079D680 (72 bytes)
extern "C" void ext_00726E90();
extern "C" void ext_007B2040();
extern "C" void ext_007B2340();

extern "C" __declspec(naked) int __cdecl fn_0079D680() {
    __asm {
        mov     edx, dword ptr [esp + 0xc]
        push    ebx
        lea     eax, [esp + 0x10]
        push    esi
        mov     esi, dword ptr [esp + 0xc]
        push    eax
        mov     eax, dword ptr [esp + 0x14]
        push    edx
        push    eax
        push    esi
        call    ext_00726E90
        mov     bl, al
        test    bl, bl
        je      short L_79d6b3
        mov     ecx, dword ptr [esp + 0x14]
        push    ecx
        push    esi
        call    ext_007B2040
        mov     ecx, eax
        call    ext_007B2340
    L_79d6b3:
        mov     eax, dword ptr [esp + 0x18]
        test    eax, eax
        je      short L_79d6c1
        mov     dl, byte ptr [esp + 0x14]
        mov     byte ptr [eax], dl
    L_79d6c1:
        mov     al, bl
        pop     esi
        pop     ebx
        ret     0x10
    }
}

// [0x00792880] sub_00792880 (86 bytes)
extern "C" void __fastcall ext_0078D7A0(void* self);
extern "C" unsigned char mem_00997388;

extern "C" __declspec(naked) void* __fastcall fn_00792880(void* self) {
    __asm {
        push esi
        mov esi, ecx
        call ext_0078D7A0
        xor eax, eax
        mov dword ptr [esi], offset mem_00997388
        mov dword ptr [esi + 0x250], eax
        mov dword ptr [esi + 0x268], eax
        mov dword ptr [esi + 0x264], eax
        mov dword ptr [esi + 0x26c], eax
        mov dword ptr [esi + 0x270], eax
        mov dword ptr [esi + 0x254], eax
        mov dword ptr [esi + 0x25c], eax
        mov dword ptr [esi + 0x260], eax
        mov dword ptr [esi + 0x278], eax
        mov dword ptr [esi + 0x27c], eax
        mov dword ptr [esi + 0x258], eax
        mov eax, esi
        pop esi
        ret
    }
}

// [0x007985F0] sub_007985F0 (81 bytes)
extern "C" __declspec(naked) int __cdecl fn_007985F0(void* self, int arg1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        cmp dword ptr [eax + 0x8], 0x1
        jne loc_79860d
        mov eax, dword ptr [eax]
        push 0xaafa10
        push eax
        call ext_0079B140
        add esp, 0x8
        xor eax, eax
        ret
    loc_79860d:
        mov edx, dword ptr [eax + 0xc]
        mov ecx, dword ptr [esp + 0x8]
        shr edx, 0xa
        and edx, 0x1
        xor edx, ecx
        je loc_79863b
        test ecx, ecx
        mov ecx, 0xaaf9e4
        jne loc_79862c
        mov ecx, 0xaaf9b8
    loc_79862c:
        mov eax, dword ptr [eax]
        push ecx
        push eax
        call ext_0079B140
        add esp, 0x8
        xor eax, eax
        ret
    loc_79863b:
        mov eax, 0x1
        ret
    }
}

// [0x0079AC80] sub_0079AC80 (99 bytes)
extern "C" void ext_007B1980();
extern "C" __declspec(naked) void __fastcall fn_0079AC80(void* self) {
    __asm {
        mov ecx, dword ptr [esp + 0xc]
        mov al, byte ptr [ecx + 0x1]
        cmp al, 0x75
        je short L_case_u
        test al, al
        je short L_default
        cmp byte ptr [ecx + 0x2], 0x75
        jne short L_default
L_case_u:
        mov edx, 0x6d80a0
        mov eax, 0x6fa8e0
        jmp short L_common
L_default:
        mov edx, 0x79ae40
        mov eax, 0x79add0
L_common:
        push esi
        mov esi, dword ptr [esp + 0x8]
        push edx
        push eax
        mov eax, dword ptr [esp + 0x14]
        push 0x79adc0
        push 0x79ada0
        push 0x79ad50
        push 0x79ad20
        push 0x79acf0
        push esi
        push ecx
        push eax
        call ext_007B1980
        add esp, 0x28
        test eax, eax
        je short L_done
        mov dword ptr [eax + 0x4], esi
L_done:
        pop esi
        ret
    }
}

// [0x0079ADD0] sub_0079ADD0 (107 bytes)
extern "C" void ext_0079ADC0();
extern "C" int mem_0092418C; /* u32 0x0062D5EE */
extern "C" int mem_00924188; /* u32 0x0062D5DE */
extern "C" int mem_009241E0; /* u32 0x0062822A */

extern "C" __declspec(naked) int __cdecl fn_0079ADD0() {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        push edi
        push esi
        call ext_0079ADC0
        mov edi, eax
        add esp, 0x4
        cmp edi, -1
        jne short L_valid
        pop edi
        xor eax, eax
        pop esi
        ret
L_valid:
        push 0x0
        push edi
        push 0x0
        push 0x2
        push 0x0
        push esi
        call dword ptr [mem_0092418C]
        mov esi, eax
        test esi, esi
        jne short L_mapped
        pop edi
        pop esi
        ret
L_mapped:
        push ebx
        push 0x0
        push 0x0
        push 0x0
        push 0x4
        push esi
        call dword ptr [mem_00924188]
        mov ebx, dword ptr [esp + 0x14]
        push esi
        mov dword ptr [ebx], eax
        call dword ptr [mem_009241E0]
        mov eax, dword ptr [ebx]
        pop ebx
        test eax, eax
        jne short L_ok
        pop edi
        xor eax, eax
        pop esi
        ret
L_ok:
        mov eax, dword ptr [esp + 0x14]
        mov dword ptr [eax], edi
        pop edi
        mov eax, 0x1
        pop esi
        ret
    }
}

// [0x00796660] sub_00796660 (110 bytes)
extern "C" __declspec(naked) void __fastcall fn_00796660(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x28]
        test eax, eax
        jne L_end
        mov eax, dword ptr [esi + 0x8]
        mov ecx, dword ptr [esi + 0x48]
        cmp eax, 1
        mov eax, dword ptr [esi + 0x10]
        push edi
        mov edi, dword ptr [esi + 0x18]
        push eax
        je L_else
        mov edx, dword ptr [esi + 0x264]
        add ecx, eax
        push ecx
        push edx
        mov ecx, esi
        call ext_00796740
        mov ecx, eax
        inc edi
        dec ecx
        mov dword ptr [esi + 0x26c], eax
        imul ecx, dword ptr [esi + 0x18]
        lea eax, [ecx + edi]
        pop edi
        mov dword ptr [esi + 0x28], eax
        pop esi
        ret
L_else:
        lea edx, [ecx + 2*eax - 0x1]
        mov eax, dword ptr [esi + 0x264]
        push edx
        push eax
        mov ecx, esi
        call ext_00796740
        mov ecx, eax
        mov dword ptr [esi + 0x26c], eax
        dec ecx
        imul ecx, dword ptr [esi + 0x18]
        lea eax, [ecx + edi]
        pop edi
        mov dword ptr [esi + 0x28], eax
L_end:
        pop esi
        ret
    }
}

// [0x007966D0] sub_007966D0 (110 bytes)
extern "C" void ext_00796740();
extern "C" __declspec(naked) void __fastcall fn_007966D0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x2c]
        test eax, eax
        jne L_end
        mov eax, dword ptr [esi + 0xc]
        mov ecx, dword ptr [esi + 0x4c]
        cmp eax, 1
        mov eax, dword ptr [esi + 0x14]
        push edi
        mov edi, dword ptr [esi + 0x1c]
        push eax
        je L_one
        mov edx, dword ptr [esi + 0x268]
        add ecx, eax
        push ecx
        push edx
        mov ecx, esi
        call ext_00796740
        mov ecx, eax
        inc edi
        dec ecx
        mov dword ptr [esi + 0x270], eax
        imul ecx, dword ptr [esi + 0x1c]
        lea eax, [ecx + edi]
        pop edi
        mov dword ptr [esi + 0x2c], eax
        pop esi
        ret
L_one:
        lea edx, [ecx + 2*eax - 0x1]
        mov eax, dword ptr [esi + 0x268]
        push edx
        push eax
        mov ecx, esi
        call ext_00796740
        mov ecx, eax
        mov dword ptr [esi + 0x270], eax
        dec ecx
        imul ecx, dword ptr [esi + 0x1c]
        lea eax, [ecx + edi]
        pop edi
        mov dword ptr [esi + 0x2c], eax
L_end:
        pop esi
        ret
    }
}

// [0x00792810] sub_00792810 (109 bytes)
extern "C" void ext_006A5C62();
extern "C" void ext_00790D80();
extern "C" void ext_00790DA0();
extern "C" void ext_00792880();

extern "C" __declspec(naked) void* __cdecl fn_00792810(int a1, int a2) {
    __asm {
        push -0x1
        push 0x008B8FDB
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        push 0x280
        call ext_006A5C62
        add esp, 0x4
        mov dword ptr [esp + 0x4], eax
        xor esi, esi
        cmp eax, esi
        mov dword ptr [esp + 0x10], esi
        je short L_after_ctor
        mov ecx, eax
        call ext_00792880
        mov esi, eax
L_after_ctor:
        mov eax, dword ptr [esp + 0x18]
        mov ecx, esi
        push eax
        mov dword ptr [esp + 0x14], 0xffffffff
        call ext_00790D80
        mov ecx, dword ptr [esp + 0x1c]
        push ecx
        mov ecx, esi
        call ext_00790DA0
        mov ecx, dword ptr [esp + 0x8]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret
    }
}

// [0x0079B850] sub_0079B850 (130 bytes)
extern "C" __declspec(naked) int __cdecl fn_0079B850(void* self) {
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        mov     eax, dword ptr [esi + 0x1e4]
        test    eax, eax
        jle     short L_ret1
        mov     ecx, dword ptr [esi + 0xc]
        xor     edx, edx
        mov     dx, word ptr [esi + 0x4a]
        _emit   0x85
        _emit   0xd1
        jne     short L_skip_call
        test    ch, 0x1
        jne     short L_skip_call
        push    eax
        mov     eax, dword ptr [esi + 0x1d8]
        push    eax
        call    ext_007AF0C0
        add     esp, 0x8
    L_skip_call:
        mov     eax, dword ptr [esi + 0xc]
        test    ah, 0x4
        je      short L_use_16c
        mov     eax, dword ptr [esi + 0x184]
        jmp     short L_call_b750
    L_use_16c:
        mov     eax, dword ptr [esi + 0x16c]
    L_call_b750:
        mov     ecx, dword ptr [esi + 0x1e4]
        mov     edx, dword ptr [esi + 0x1d8]
        push    ecx
        push    edx
        push    eax
        push    esi
        call    ext_0079B750
        add     esp, 0x10
        test    eax, eax
        jne     short L_reset
        pop     esi
        ret
    L_reset:
        mov     eax, dword ptr [esi + 0x1d8]
        mov     dword ptr [esi + 0x1e4], 0x0
        mov     dword ptr [esi + 0x1e0], eax
    L_ret1:
        mov     eax, 0x1
        pop     esi
        ret
    }
}

// [0x0079B070] sub_0079B070 (100 bytes)
extern "C" int mem_0092525C; /* u32 0x00627D86 */
extern "C" int mem_009251A8; /* u32 0x0062D4B2 */
extern "C" int mem_009251A4; /* u32 0x0062D4A6 */
extern "C" __declspec(naked) void __fastcall fn_0079B070(void* self) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        mov esi, dword ptr [mem_0092525C]
        test eax, eax
        je short L_skip
        push eax
        mov eax, dword ptr [mem_009251A8]
        add eax, 0x40
        push 0xaafc50
        push eax
        call esi
        add esp, 0xc
L_skip:
        mov ecx, dword ptr [mem_009251A8]
        push 0xaafc44
        add ecx, 0x40
        push ecx
        call esi
        mov edx, dword ptr [esp + 0x18]
        mov ecx, dword ptr [mem_009251A8]
        mov eax, dword ptr [esp + 0x14]
        push edx
        add ecx, 0x40
        push eax
        push ecx
        call dword ptr [mem_009251A4]
        mov edx, dword ptr [mem_009251A8]
        push 0xaafc40
        add edx, 0x40
        push edx
        call esi
        add esp, 0x1c
        pop esi
        ret
    }
}

// [0x0079B0E0] sub_0079B0E0 (82 bytes)
extern "C" int mem_0092525C; /* u32 0x00627D86 */
extern "C" int mem_009251A8; /* u32 0x0062D4B2 */
extern "C" int mem_009251A4; /* u32 0x0062D4A6 */
extern "C" __declspec(naked) void __fastcall fn_0079B0E0(void* self) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        mov esi, dword ptr [mem_0092525C]
        test eax, eax
        je short L_skip
        push eax
        mov eax, dword ptr [mem_009251A8]
        add eax, 0x40
        push 0xaafc50
        push eax
        call esi
        add esp, 0xc
L_skip:
        mov ecx, dword ptr [esp + 0x10]
        mov eax, dword ptr [mem_009251A8]
        mov edx, dword ptr [esp + 0xc]
        push ecx
        add eax, 0x40
        push edx
        push eax
        call dword ptr [mem_009251A4]
        mov ecx, dword ptr [mem_009251A8]
        push 0xaafc40
        add ecx, 0x40
        push ecx
        call esi
        add esp, 0x14
        pop esi
        ret
    }
}

// [0x0079BDE0] sub_0079BDE0 (166 bytes)
// [VA] 0x0079BDE0
extern "C" int mem_00925284;
extern "C" double mem_00B610C0;
extern "C" double mem_00B610C8;
extern "C" double mem_00B610D0;
extern "C" double mem_00B610D8;
extern "C" double mem_00B610E0;
extern "C" double mem_00B610E8;
extern "C" double mem_00B610F0;
extern "C" double mem_00B610F8;
extern "C" double mem_00B61100;
extern "C" double mem_00B61108;
extern "C" double mem_00B61110;
extern "C" double mem_00B61118;
extern "C" double mem_00B61120;
extern "C" double mem_00B61128;
extern "C" double mem_00B61130;
extern "C" double mem_00B61138;
extern "C" void __cdecl fn_0079BDE0() {
    double* h = (double*)mem_00925284;
    mem_00B610C0 = -*h;
    mem_00B610C8 = -*h;
    mem_00B610D0 = -*h;
    mem_00B610D8 = -*h;
    mem_00B610E0 = -*h;
    mem_00B610E8 = -*h;
    mem_00B610F0 = -*h;
    mem_00B610F8 = -*h;
    mem_00B61100 = -*h;
    mem_00B61108 = -*h;
    mem_00B61110 = -*h;
    mem_00B61118 = -*h;
    mem_00B61120 = -*h;
    mem_00B61128 = -*h;
    mem_00B61130 = -*h;
    mem_00B61138 = -*h;
}

// [0x007984B0] sub_007984B0 (192 bytes)
extern "C" void ext_0079AF40();
extern "C" void ext_0079AF50(void*);
extern "C" void ext_0079B140();

extern "C" __declspec(naked) void __cdecl fn_007984B0(void* self) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        mov eax, dword ptr [esi + 0x1d8]
        test eax, eax
        je short L_alloc_check
        mov ecx, dword ptr [esi + 0xc]
        test ch, 0x2
        je short L_clear_ptr
        push eax
        call ext_0079AF50
        add esp, 0x4
L_clear_ptr:
        mov dword ptr [esi + 0x1d8], 0
L_alloc_check:
        mov eax, dword ptr [esp + 0xc]
        test eax, eax
        je short L_round_alloc
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [esi + 0x1d8], eax
        mov eax, dword ptr [esi + 0xc]
        mov dword ptr [esi + 0x1dc], ecx
        and ah, 0xfd
        jmp short L_store_flags
L_round_alloc:
        mov edx, dword ptr [esp + 0x10]
        lea eax, [edx + 0x3ff]
        shr eax, 0xa
        shl eax, 0xa
        push eax
        mov dword ptr [esi + 0x1dc], eax
        call ext_0079AF40
        mov dword ptr [esi + 0x1d8], eax
        mov eax, dword ptr [esi + 0xc]
        add esp, 0x4
        or ah, 0x2
L_store_flags:
        mov dword ptr [esi + 0xc], eax
        mov eax, dword ptr [esi + 0x1d8]
        test eax, eax
        jne short L_ret_one
        mov eax, dword ptr [esi + 0x164]
        mov ecx, dword ptr [esi]
        push eax
        push ecx
        push 0xaaf988
        push 0x99743c
        call ext_0079B140
        add esp, 0x10
        mov dword ptr [esi + 0x1dc], 0
        xor eax, eax
        pop esi
        ret
L_ret_one:
        mov eax, 0x1
        pop esi
        ret
    }
}

// [0x0079DE00] sub_0079DE00 (192 bytes)
extern "C" void ext_00714860();
extern "C" void ext_007148A0();
extern "C" __declspec(naked) void __fastcall fn_0079DE00(void* self, int edx_unused) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x00
        mov esi, ecx
        je short L_case0
        dec eax
        je short L_case1
        dec eax
        jne L_end
        mov ecx, dword ptr [esi]
        add ecx, 0x90
        call ext_007148E0
        cmp al, byte ptr [esp + 0xc]
        je L_end
        mov ecx, dword ptr [esi]
        push 0x1
        push 0x1
        push 0x1
        add ecx, 0x90
        call ext_00714860
        mov ecx, dword ptr [esi]
        push 0x1
        push 0x1
        push 0x1
        add ecx, 0x90
        call ext_007148A0
        pop esi
        ret 0x8
L_case1:
        mov ecx, dword ptr [esi]
        add ecx, 0x48
        call ext_007148E0
        cmp al, byte ptr [esp + 0xc]
        je L_end
        mov ecx, dword ptr [esi]
        push 0x1
        push 0x1
        push 0x1
        add ecx, 0x48
        call ext_00714860
        mov ecx, dword ptr [esi]
        push 0x1
        push 0x1
        push 0x1
        add ecx, 0x48
        call ext_007148A0
        pop esi
        ret 0x8
L_case0:
        mov ecx, dword ptr [esi]
        call ext_007148E0
        cmp al, byte ptr [esp + 0xc]
        je short L_end
        mov ecx, dword ptr [esi]
        push 0x1
        push 0x1
        push 0x1
        call ext_00714860
        mov ecx, dword ptr [esi]
        push 0x1
        push 0x1
        push 0x1
        call ext_007148A0
L_end:
        pop esi
        ret 0x8
    }
}

// [0x0079D7C0] sub_0079D7C0 (193 bytes)
extern "C" void ext_006B9D10();
extern "C" void ext_006D80A0();
extern "C" void ext_00783860();
extern "C" void ext_0079D9B0();
extern "C" __declspec(naked) void __fastcall fn_0079D7C0(void* self) {
    __asm {
        push -1
        push 0x8c197e
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [esp + 0x8], esi
        lea edi, [esi + 0x4]
        mov dword ptr [esi], 0x995080
        lea ecx, [esi + 0x8]
        mov dword ptr [edi], 0x995080
        call ext_006B9D10
        lea ecx, [esi + 0x54]
        mov dword ptr [esp + 0x14], 0
        call ext_006B9D10
        lea ecx, [esi + 0xa0]
        mov byte ptr [esp + 0x14], 1
        call ext_006B9D10
        lea ecx, [esi + 0x174]
        mov byte ptr [esp + 0x14], 2
        call ext_00783860
        lea ecx, [esi + 0x190]
        mov byte ptr [esp + 0x14], 3
        call ext_00783860
        lea ecx, [esi + 0x1ac]
        mov byte ptr [esp + 0x14], 4
        call ext_00783860
        mov ecx, edi
        mov byte ptr [esp + 0x14], 5
        mov dword ptr [esi], 0x9976e4
        mov dword ptr [edi], 0x997678
        mov dword ptr [esi + 0x170], 0
        call ext_006D80A0
        mov ecx, edi
        call ext_0079D9B0
        mov ecx, dword ptr [esp + 0xc]
        mov eax, esi
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}
