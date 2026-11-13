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
