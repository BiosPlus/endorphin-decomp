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
