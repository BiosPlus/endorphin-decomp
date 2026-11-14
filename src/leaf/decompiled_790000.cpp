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
