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
