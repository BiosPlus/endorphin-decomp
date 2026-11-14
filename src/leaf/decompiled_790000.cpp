// Decompiled translation unit: src/leaf/decompiled_790000.cpp

extern "C" unsigned char mem_00B61150;
extern "C" int mem_00B6114C;

// [0x0079EAC0] sub_0079EAC0 (32 bytes)
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

// [0x0079EEC0] sub_0079EEC0 (16 bytes)
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

// [0x0079AFE0] sub_0079AFE0 (48 bytes)
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
