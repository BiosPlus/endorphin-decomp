// Decompiled translation unit: src/leaf/decompiled_720000.cpp
extern "C" int ext_00789BB0();
extern "C" void ext_0078C410();
extern "C" int ext_0078CBE0();

extern "C" void ext_0078C410();
extern "C" int ext_0078CBE0();
// otherwise returns 1 if byte [0x19] is nonzero, else 0.
extern "C" __declspec(naked) int __fastcall fn_0072DB90(void* self) {
    __asm {
        mov eax, dword ptr [ecx + 0xac]
        mov cl, byte ptr [eax + 0x1b]
        test cl, cl
        je short L_check19
        mov eax, 0x2
        ret
L_check19:
        mov dl, byte ptr [eax + 0x19]
        xor ecx, ecx
        test dl, dl
        setne cl
        mov eax, ecx
        ret
    }
}
extern "C" void ext_0078C6F0();
extern "C" int mem_0092A278;

extern "C" int mem_0092A278;
extern "C" __declspec(naked) void __cdecl fn_00725A90(int value, int* out_a, int* out_b, int* out_c) {
    __asm {
        mov ecx, dword ptr [esp + 0x4]
        mov eax, 0x10624dd3
        imul ecx
        sar edx, 0x6
        mov eax, edx
        push esi
        shr eax, 0x1f
        add edx, eax
        mov eax, dword ptr [esp + 0xc]
        mov esi, 0x3e8
        mov dword ptr [eax], edx
        mov eax, ecx
        cdq
        idiv esi
        mov eax, 0x51eb851f
        pop esi
        imul edx
        sar edx, 0x5
        mov eax, edx
        shr eax, 0x1f
        add edx, eax
        mov eax, dword ptr [esp + 0xc]
        mov dword ptr [eax], edx
        mov eax, ecx
        cdq
        mov ecx, 0x64
        idiv ecx
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [eax], edx
        ret
    }
}

extern "C" int __fastcall ext_00789C60(void* obj, int edx_unused, int arg);
extern "C" int mem_00B5D2C0;
extern "C" void ext_006A5C5C();
extern "C" void ext_006B9D70();

extern "C" void ext_006B9D70();
extern "C" __declspec(naked) int __fastcall fn_007266F0(void* self, int edx_unused, int arg) {
    __asm {
        mov ecx, dword ptr [ecx + 0x250]
        test ecx, ecx
        je short L_null
        mov eax, dword ptr [esp + 0x4]
        push eax
        call ext_00789C60
        ret 0x4
    L_null:
        mov eax, offset mem_00B5D2C0
        ret 0x4
    }
}

extern "C" void ext_006B9D20();
extern "C" void ext_006A5C62();
extern "C" void ext_00782D00();

extern "C" void ext_00782D00();
extern "C" __declspec(naked) void* __fastcall fn_0072CB00(void* self, int edx_unused, void* arg) {
    __asm {
        push ecx
        push esi
        mov esi, dword ptr [esp + 0xc]
        add ecx, 0x18
        mov dword ptr [esp + 0x4], 0x0
        push ecx
        mov ecx, esi
        call ext_006B9D20
        mov eax, esi
        pop esi
        pop ecx
        ret 0x4
    }
}
extern "C" void ext_006D2170();
extern "C" void ext_006D2250();

extern "C" void ext_006D2250();
extern "C" void ext_006B9D10();
extern "C" void* __fastcall fn_0072BF40(void* self) {
    unsigned char* esi = (unsigned char*)self;
    *(int*)(esi + 0x00) = 0;
    *(int*)(esi + 0x04) = 0;
    *(int*)(esi + 0x08) = 0;
    *(int*)(esi + 0x0C) = 3;
    *(int*)(esi + 0x10) = 0;
    *(unsigned char*)(esi + 0x14) = 1;
    ((void (__fastcall*)(void*))ext_006B9D10)(esi + 0x18);
    *(unsigned char*)(esi + 0x64) = 0;
    *(unsigned char*)(esi + 0x65) = 0;
    return esi;
}

extern "C" int ext_00789BB0();
extern "C" int ext_0078C3A0();
extern "C" int ext_0078CBE0();
// Isolated WIP translation unit for fn_00724BF0
extern "C" void ext_0077F9E0();
extern "C" void ext_006B9E60();
extern "C" void ext_006E7440();
extern "C" void ext_00728880();

extern "C" void ext_00728880();
extern "C" int __fastcall fn_00726940(void* self) {
    int esi = ((int (__fastcall *)(void*))ext_00789BB0)(*(void**)((char*)self + 0x250));
    if (!esi || !((int (__fastcall *)(int))ext_0078CBE0)(esi)) {
        return 0;
    }
    int edi = *(int*)(((int (__fastcall *)(int))ext_0078CBE0)(esi) + 0x1c);
    return ((int (__fastcall *)(int))ext_0078C3A0)(((int (__fastcall *)(int))ext_0078CBE0)(esi)) - edi;
}

extern "C" void ext_006A5C5C();
extern "C" void ext_006A5C62();
extern "C" void ext_0072B180();
extern "C" void ext_006CD320();
extern "C" void ext_006DECA0();

extern "C" void ext_006DECA0();
extern "C" __declspec(naked) void __fastcall fn_0072B1E0(void* self, int edx_unused, int arg) {
    __asm {
        push    esi
        mov     esi, ecx
        push    edi
        mov     edi, dword ptr [esi]
        mov     eax, dword ptr [edi + 0x8]
        push    eax
        call    ext_006A5C5C
        mov     edx, dword ptr [esp + 0x10]
        mov     dword ptr [edi + 0x8], 0
        mov     ecx, dword ptr [esi]
        add     esp, 4
        mov     dword ptr [ecx + 0x4], edx
        mov     esi, dword ptr [esi]
        mov     ecx, esi
        call    ext_0072B180
        test    eax, eax
        je      loc_72b21b
        push    eax
        call    ext_006A5C62
        add     esp, 4
        mov     dword ptr [esi + 0x8], eax
loc_72b21b:
        pop     edi
        pop     esi
        ret     4
    }
}

// [0x00722CA0] sub_00722CA0 (95 bytes)
extern "C" void ext_006CA6A0();
extern "C" void ext_007221A0();
extern "C" void ext_00722570();
extern "C" __declspec(naked) void __cdecl fn_00722CA0(void* out, int a1, void* obj, int a3) {
    __asm {
        sub esp, 0x10
        push esi
        mov esi, dword ptr [esp + 0x20]
        mov ecx, esi
        call ext_006CA6A0
        test eax, eax
        jle fail_path
        mov eax, dword ptr [esp + 0x24]
        lea ecx, [esp + 0x4]
        push eax
        push esi
        lea edx, [esp + 0x14]
        push ecx
        push edx
        call ext_007221A0
        mov edx, dword ptr [esp + 0x2c]
        lea eax, [esp + 0x14]
        lea ecx, [esp + 0x1c]
        push eax
        mov eax, dword ptr [esp + 0x2c]
        push ecx
        push edx
        push eax
        call ext_00722570
        add esp, 0x20
        pop esi
        add esp, 0x10
        ret
    fail_path:
        mov eax, dword ptr [esp + 0x18]
        pop esi
        mov dword ptr [eax], 0x0
        mov dword ptr [eax + 0x4], 0x0
        add esp, 0x10
        ret
    }
}

// [0x00722D00] sub_00722D00 (95 bytes)
extern "C" void ext_006CA6A0();
extern "C" void ext_007221A0();
extern "C" void ext_007222D0();
extern "C" __declspec(naked) void __cdecl fn_00722D00(void* out, int a1, void* obj, int a3) {
    __asm {
        sub esp, 0x10
        push esi
        mov esi, dword ptr [esp + 0x20]
        mov ecx, esi
        call ext_006CA6A0
        test eax, eax
        jle fail_path
        mov eax, dword ptr [esp + 0x24]
        lea ecx, [esp + 0x4]
        push eax
        push esi
        lea edx, [esp + 0x14]
        push ecx
        push edx
        call ext_007221A0
        mov edx, dword ptr [esp + 0x2c]
        lea eax, [esp + 0x14]
        lea ecx, [esp + 0x1c]
        push eax
        mov eax, dword ptr [esp + 0x2c]
        push ecx
        push edx
        push eax
        call ext_007222D0
        add esp, 0x20
        pop esi
        add esp, 0x10
        ret
    fail_path:
        mov eax, dword ptr [esp + 0x18]
        pop esi
        mov dword ptr [eax], 0x0
        mov dword ptr [eax + 0x4], 0x0
        add esp, 0x10
        ret
    }
}

// [0x00722D60] sub_00722D60 (95 bytes)
extern "C" void ext_006CA6A0();
extern "C" void ext_007221A0();
extern "C" void ext_00722A50();
extern "C" __declspec(naked) void __cdecl fn_00722D60(void* out, int a1, void* obj, int a3) {
    __asm {
        sub esp, 0x10
        push esi
        mov esi, dword ptr [esp + 0x20]
        mov ecx, esi
        call ext_006CA6A0
        test eax, eax
        jle fail_path
        mov eax, dword ptr [esp + 0x24]
        lea ecx, [esp + 0x4]
        push eax
        push esi
        lea edx, [esp + 0x14]
        push ecx
        push edx
        call ext_007221A0
        mov edx, dword ptr [esp + 0x2c]
        lea eax, [esp + 0x14]
        lea ecx, [esp + 0x1c]
        push eax
        mov eax, dword ptr [esp + 0x2c]
        push ecx
        push edx
        push eax
        call ext_00722A50
        add esp, 0x20
        pop esi
        add esp, 0x10
        ret
    fail_path:
        mov eax, dword ptr [esp + 0x18]
        pop esi
        mov dword ptr [eax], 0x0
        mov dword ptr [eax + 0x4], 0x0
        add esp, 0x10
        ret
    }
}

// [0x00722DC0] sub_00722DC0 (95 bytes)
extern "C" void ext_006CA6A0();
extern "C" void ext_007221A0();
extern "C" void ext_007227B0();
extern "C" __declspec(naked) void __cdecl fn_00722DC0(void* out, int a1, void* obj, int a3) {
    __asm {
        sub esp, 0x10
        push esi
        mov esi, dword ptr [esp + 0x20]
        mov ecx, esi
        call ext_006CA6A0
        test eax, eax
        jle fail_path
        mov eax, dword ptr [esp + 0x24]
        lea ecx, [esp + 0x4]
        push eax
        push esi
        lea edx, [esp + 0x14]
        push ecx
        push edx
        call ext_007221A0
        mov edx, dword ptr [esp + 0x2c]
        lea eax, [esp + 0x14]
        lea ecx, [esp + 0x1c]
        push eax
        mov eax, dword ptr [esp + 0x2c]
        push ecx
        push edx
        push eax
        call ext_007227B0
        add esp, 0x20
        pop esi
        add esp, 0x10
        ret
    fail_path:
        mov eax, dword ptr [esp + 0x18]
        pop esi
        mov dword ptr [eax], 0x0
        mov dword ptr [eax + 0x4], 0x0
        add esp, 0x10
        ret
    }
}

// [0x00726710] sub_00726710 (96 bytes)
extern "C" void ext_006E7460();
extern "C" void ext_00789BA0();
extern "C" void ext_00789C40();
extern "C" void ext_0078CBC0();

extern "C" __declspec(naked) bool __fastcall fn_00726710(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push ebx
        mov ebx, ecx
        push esi
        push edi
        mov ecx, dword ptr [ebx + 0x250]
        test ecx, ecx
        je fail
        mov edi, dword ptr [esp + 0x10]
        push edi
        call ext_00789C40
        mov esi, eax
        test esi, esi
        je fail
        mov ecx, dword ptr [ebx + 0x250]
        push edi
        call ext_00789BA0
        mov ecx, esi
        call ext_006E7460
        mov ecx, dword ptr [esp + 0x14]
        cmp ecx, eax
        jge fail
        push ecx
        mov ecx, esi
        call ext_0078CBC0
        mov ecx, esi
        call ext_0078CBE0
        pop edi
        mov dword ptr [eax + 0x1c], 0
        pop esi
        mov al, 1
        pop ebx
        ret 8
    fail:
        pop edi
        pop esi
        xor al, al
        pop ebx
        ret 8
    }
}

extern "C" void ext_00726770();
extern "C" void ext_00726840();
extern "C" void ext_00726CB0();

// [0x00726D40] sub_00726D40 (111 bytes)
extern "C" __declspec(naked) void __fastcall fn_00726D40(void* self) {
    __asm {
        sub esp, 0x18
        mov eax, dword ptr [esp + 0x20]
        push ebx
        push ebp
        push esi
        push edi
        xor ebp, ebp
        mov esi, ecx
        push eax
        xor edi, edi
        xor ebx, ebx
        mov dword ptr [esp + 0x28], ebp
        call ext_00726770
        test al, al
        je short loc_726D90
        lea ecx, [esp + 0x10]
        push ecx
        mov ecx, esi
        call ext_00726CB0
        mov edi, dword ptr [eax]
        mov ebx, dword ptr [eax + 0x4]
        lea edx, [esp + 0x10]
        mov ecx, esi
        push edx
        call ext_00726CB0
        mov ecx, dword ptr [eax]
        mov eax, dword ptr [eax + 0x4]
        mov ebp, ecx
        mov ecx, esi
        mov dword ptr [esp + 0x24], eax
        call ext_00726840
    loc_726D90:
        mov eax, dword ptr [esp + 0x2c]
        mov edx, dword ptr [esp + 0x24]
        mov ecx, eax
        mov dword ptr [ecx], edi
        pop edi
        pop esi
        mov dword ptr [ecx + 0x4], ebx
        mov dword ptr [ecx + 0x8], ebp
        pop ebp
        pop ebx
        mov dword ptr [ecx + 0xc], edx
        add esp, 0x18
        ret 8
    }
}

// [0x0072BEC0] sub_0072BEC0 (128 bytes)
extern "C" void ext_006BA780();
extern "C" void ext_007146C0();

extern "C" __declspec(naked) int __fastcall fn_0072BEC0(void* self, int edx_unused, void* a1, void* a2, void* a3) {
    __asm {
        push ecx
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 0x18]
        push esi
        push edi
        mov dword ptr [esp + 0x10], ecx
        mov dword ptr [ebp], 0xffffffff
        mov eax, dword ptr [ecx + 0x150]
        test eax, eax
        jne short loc_72bee8
    loc_72bede:
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        pop ecx
        ret 0xc
    loc_72bee8:
        mov bl, 1
        xor esi, esi
        jmp short loc_72bef2
    loc_72beee:
        mov ecx, dword ptr [esp + 0x10]
    loc_72bef2:
        cmp esi, dword ptr [ecx + 0x150]
        jge short loc_72bf30
        mov eax, dword ptr [ecx + 0x160]
        mov ecx, dword ptr [esp + 0x18]
        mov edi, dword ptr [eax + esi * 4]
        push edi
        call ext_006BA780
        test al, al
        je short loc_72bf27
        mov ecx, dword ptr [esp + 0x1c]
        add edi, 0x50
        push edi
        xor bl, bl
        mov dword ptr [ebp], esi
        call ext_007146C0
        test al, al
        jne short loc_72bede
    loc_72bf27:
        mov eax, dword ptr [ebp]
        inc esi
        cmp eax, -1
        je short loc_72beee
    loc_72bf30:
        xor eax, eax
        pop edi
        cmp bl, 1
        pop esi
        pop ebp
        pop ebx
        sete al
        pop ecx
        ret 0xc
    }
}

// [0x0072B330] sub_0072B330 (144 bytes)
extern "C" void ext_006B9D80();
extern "C" void ext_0077FA20();
extern "C" int mem_00925284;
extern "C" int mem_00996834;
extern "C" int mem_00AAD0D0;
extern "C" int mem_00B60110;
extern "C" int mem_00B60114;
extern "C" int mem_00B60108;

extern "C" __declspec(naked) void __fastcall fn_0072B330(void* self) {
    __asm {
        mov dword ptr [ecx], offset mem_00996834
        jmp ext_0077FA20
        nop
        nop
        nop
        nop
        nop
        push ecx
        push esi
        mov esi, dword ptr [esp + 0xc]
        push offset mem_00AAD0D0
        mov ecx, esi
        mov dword ptr [esp + 0x8], 0x0
        call ext_006B9D80
        mov eax, esi
        pop esi
        pop ecx
        ret 0x4
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
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [mem_00B60110], ecx
        mov dword ptr [mem_00B60114], edx
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
        fstp qword ptr [mem_00B60108]
        ret
    }
}

// [0x00724C60] sub_00724C60 (160 bytes)
extern "C" void ext_006E7440();

extern "C" __declspec(naked) void __fastcall fn_00724C60(void* self) {
    __asm {
        sub esp, 0x8
        push esi
        mov esi, ecx
        mov byte ptr [esp + 0x6], 0x0
        mov byte ptr [esp + 0x7], 0x1a
        mov eax, dword ptr [esi + 0x4]
        mov byte ptr [esp + 0x5], 0x0
        cmp eax, 0x1770
        mov dword ptr [esp + 0x8], 0xbb8
        jb short L_skip_max
        mov dword ptr [esp + 0x8], eax
    L_skip_max:
        mov al, byte ptr [esi + 0x15]
        test al, al
        je short L_after_block
        mov ecx, dword ptr [esi + 0x10]
        push 0x14
        push 0xaacdf4
        mov eax, dword ptr [ecx]
        call dword ptr [eax + 0x1c]
        mov ecx, dword ptr [esi + 0x10]
        lea eax, [esp + 0x6]
        push 0x1
        push eax
        mov edx, dword ptr [ecx]
        call dword ptr [edx + 0x1c]
        mov ecx, dword ptr [esi + 0x10]
        lea eax, [esp + 0x7]
        push 0x1
        push eax
        mov edx, dword ptr [ecx]
        call dword ptr [edx + 0x1c]
        mov ecx, dword ptr [esi + 0x10]
        mov byte ptr [esp + 0x5], 0x0
        lea eax, [esp + 0x5]
        push 0x1
        mov edx, dword ptr [ecx]
        push eax
        call dword ptr [edx + 0x1c]
        mov ecx, dword ptr [esi + 0x10]
        lea eax, [esp + 0x8]
        push 0x4
        push eax
        mov edx, dword ptr [ecx]
        call dword ptr [edx + 0x1c]
    L_after_block:
        mov ecx, dword ptr [esi + 0x10]
        mov edx, dword ptr [ecx]
        call dword ptr [edx + 0x30]
        test eax, eax
        je short L_done
        push 0xb
        lea ecx, [esi + 0xef0]
        call ext_006E7440
    L_done:
        pop esi
        add esp, 0x8
        ret
    }
}

// [0x0072D520] sub_0072D520 (256 bytes)
extern "C" void ext_0072CF30();
extern "C" void ext_00782D00();
extern "C" void ext_006D2130();
extern "C" __declspec(naked) void __fastcall fn_0072D520(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push -1
        push 0x8bdddc
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        push ecx
        mov eax, dword ptr [esp + 0x14]
        push ebx
        push esi
        push edi
        mov esi, ecx
        push eax
        mov dword ptr [esp + 0x10], esi
        call ext_0072CF30
        mov ecx, dword ptr [esp + 0x24]
        xor eax, eax
        mov dword ptr [esi + 0xb0], ecx
        push 0x14
        lea ecx, [esi + 0xb8]
        mov dword ptr [esp + 0x1c], eax
        mov dword ptr [esi + 0xac], eax
        mov dword ptr [esi + 0xb4], eax
        call ext_00782D00
        mov bl, 1
        push 0x14
        lea ecx, [esi + 0xcc]
        mov byte ptr [esp + 0x1c], bl
        call ext_00782D00
        push 0x14
        lea ecx, [esi + 0xe0]
        mov byte ptr [esp + 0x1c], 2
        call ext_00782D00
        push 0x14
        lea ecx, [esi + 0xf4]
        mov byte ptr [esp + 0x1c], 3
        call ext_00782D00
        lea ecx, [esi + 0x10c]
        mov byte ptr [esp + 0x18], 4
        call ext_006B9D10
        lea ecx, [esi + 0x158]
        mov byte ptr [esp + 0x18], 5
        call ext_006B9D10
        lea edi, [esi + 0x1b8]
        push 4
        push 0x10
        mov ecx, edi
        mov byte ptr [esp + 0x20], 6
        call ext_006D2130
        lea edx, [edi + 0x10]
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [edi + 0x14], edx
        mov dword ptr [esi], 0x996b38
        mov byte ptr [esi + 0xc9], bl
        mov byte ptr [esi + 0xdd], bl
        mov byte ptr [esi + 0xf1], bl
        mov byte ptr [esi + 0x105], bl
        mov byte ptr [esi + 0x108], 0
        mov eax, esi
        pop edi
        pop esi
        pop ebx
        mov fs:[0], ecx
        add esp, 0x10
        ret 0x8
    }
}

extern "C" void ext_006CD320();
extern "C" void ext_006D2130();
extern "C" void ext_006D2160();
extern "C" void ext_006D2170();
extern "C" void ext_006D7A90();
extern "C" void ext_0070CE90();
extern "C" void ext_0070CED0();
extern "C" void ext_0070CEF0();
extern "C" void ext_0072A990();

// [0x0072A850] sub_0072A850 (319 bytes)
__declspec(naked) void __fastcall fn_0072A850(void* self) {
    __asm {
        push -0x1
        push 0x8bdaa0
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x34
        push ebx
        push ebp
        push esi
        push edi
        mov ebp, ecx
        push 0x4
        push 0x10
        lea ecx, [esp + 0x34]
        call ext_006D2130
        lea eax, [esp + 0x3c]
        mov dword ptr [esp + 0x40], eax
        xor esi, esi
        push 0x4
        push 0x10
        lea ecx, [esp + 0x1c]
        mov dword ptr [esp + 0x54], esi
        call ext_006D2130
        lea ecx, [esp + 0x24]
        mov dword ptr [esp + 0x28], ecx
        mov ebx, dword ptr [esp + 0x54]
        mov byte ptr [esp + 0x4c], 0x1
        mov ecx, ebx
        call ext_006CD320
        mov edi, eax
        test edi, edi
        jle L_loop1_end
    L_loop1:
        push esi
        mov ecx, ebx
        call ext_0070CE90
        mov dword ptr [esp + 0x10], eax
        mov eax, dword ptr [esp + 0x2c]
        lea edx, [esp + 0x10]
        lea ecx, [esp + 0x2c]
        push edx
        push eax
        call ext_006D2170
        inc esi
        cmp esi, edi
        jl L_loop1
    L_loop1_end:
        mov esi, dword ptr [esp + 0x58]
        mov ecx, esi
        call ext_006CD320
        xor edi, edi
        mov dword ptr [esp + 0x58], eax
        test eax, eax
        jle L_loop2_end
    L_loop2:
        mov ecx, dword ptr [ebp]
        push edi
        mov ebx, dword ptr [ecx]
        mov ecx, esi
        call ext_0070CE90
        mov ecx, dword ptr [ebp]
        push eax
        call dword ptr [ebx + 0x7c]
        mov eax, dword ptr [esp + 0x58]
        inc edi
        cmp edi, eax
        jl L_loop2
        mov ebx, dword ptr [esp + 0x54]
    L_loop2_end:
        mov ecx, esi
        call ext_0070CEF0
        mov edx, dword ptr [esp + 0x5c]
        mov ecx, esi
        push edx
        call ext_006D7A90
        push eax
        lea eax, [esp + 0x1c]
        push eax
        mov ecx, ebx
        call ext_006D7A90
        lea ecx, [esp + 0x38]
        push eax
        push ecx
        mov ecx, ebp
        call ext_0072A990
        mov eax, dword ptr [esp + 0x14]
        xor edi, edi
        test eax, eax
        mov ebx, eax
        jle L_loop3_end
    L_loop3:
        mov edx, dword ptr [esp + 0x24]
        mov ecx, esi
        mov eax, dword ptr [edx + 4*edi]
        push eax
        call ext_0070CED0
        inc edi
        cmp edi, ebx
        jl L_loop3
    L_loop3_end:
        lea ecx, [esp + 0x14]
        mov byte ptr [esp + 0x4c], 0x0
        call ext_006D2160
        lea ecx, [esp + 0x2c]
        mov dword ptr [esp + 0x4c], 0xffffffff
        call ext_006D2160
        mov ecx, dword ptr [esp + 0x44]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0x40
        ret 0xc
    }
}

// [0x00726030] sub_00726030 (336 bytes)
extern "C" void ext_006B99C0();
extern "C" void ext_006B9D70();
extern "C" void ext_006B9D80();
extern "C" void ext_006B9E60();
extern "C" void ext_006B9EC0();
extern "C" void ext_006BA0C0();
extern "C" void ext_006E7460();
extern "C" int mem_008BDC8B;
extern "C" int mem_00AACFD4;

extern "C" __declspec(naked) void __fastcall fn_00726030(void* self) {
    __asm {
        push -1
        push offset mem_008BDC8B
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0A4h
        push ebp
        push esi
        push edi
        push offset mem_00AACFD4
        lea ecx, [esp + 1Ch]
        mov dword ptr [esp + 0BCh], 0
        call ext_006B9D80
        lea ecx, [esp + 0C0h]
        mov byte ptr [esp + 0B8h], 1
        call ext_006B99C0
        lea ecx, [esp + 18h]
        mov ebp, eax
        call ext_006B99C0
        lea ecx, [esp + 0C0h]
        mov dword ptr [esp + 14h], eax
        call ext_006E7460
        mov al, byte ptr [eax]
        mov edi, dword ptr [esp + 10Ch]
        lea ecx, [esp + 12h]
        xor al, 40h
        push ecx
        mov ecx, edi
        mov byte ptr [esp + 16h], al
        mov byte ptr [esp + 17h], 0
        call ext_006B9EC0
        mov esi, 1
        cmp ebp, esi
        jle short L_done
        push ebx
    L_loop:
        lea ecx, [esp + 1Ch]
        call ext_006E7460
        mov ecx, eax
        mov eax, esi
        cdq
        idiv dword ptr [esp + 18h]
        mov bl, byte ptr [ecx + edx]
        lea ecx, [esp + 0C4h]
        call ext_006E7460
        mov dl, byte ptr [eax + esi]
        mov ecx, edi
        mov byte ptr [esp + 13h], dl
        call ext_006E7460
        mov al, byte ptr [eax + esi - 1]
        mov dl, byte ptr [esp + 13h]
        xor al, dl
        lea ecx, [esp + 68h]
        xor al, bl
        mov byte ptr [esp + 15h], 0
        mov byte ptr [esp + 14h], al
        lea eax, [esp + 14h]
        push eax
        push edi
        push ecx
        call ext_006BA0C0
        add esp, 0Ch
        push eax
        mov ecx, edi
        mov byte ptr [esp + 0C0h], 2
        call ext_006B9E60
        lea ecx, [esp + 68h]
        mov byte ptr [esp + 0BCh], 1
        call ext_006B9D70
        inc esi
        cmp esi, ebp
        jl short L_loop
        pop ebx
    L_done:
        lea ecx, [esp + 18h]
        mov byte ptr [esp + 0B8h], 0
        call ext_006B9D70
        lea ecx, [esp + 0C0h]
        mov dword ptr [esp + 0B8h], 0FFFFFFFFh
        call ext_006B9D70
        mov ecx, dword ptr [esp + 0B0h]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs:[0], ecx
        add esp, 0B0h
        ret 50h
    }
}

extern "C" void ext_006E7410();
extern "C" void ext_00724850();
extern "C" void ext_00724C60();
extern "C" void ext_00724D00();
extern "C" void ext_00724E80();
extern "C" void ext_00725650();
extern "C" void ext_007289E0();
extern "C" void ext_00789810();
extern "C" void ext_0078BA20();
extern "C" int mem_008BD7CC;
extern "C" int mem_00925218;
extern "C" int mem_00AACE50;

// [0x00724670] sub_00724670 (480 bytes)
extern "C" __declspec(naked) void __fastcall fn_00724670(void* self, int edx_unused, void* arg1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push offset mem_008BD7CC
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x414
        push esi
        mov esi, ecx
        push edi
        mov ecx, dword ptr [esi + 0x10]
        mov eax, dword ptr [ecx]
        call dword ptr [eax + 0x2c]
        test al, al
        je loc_724804
        mov al, byte ptr [esi + 0x15]
        mov ecx, esi
        test al, al
        je short loc_7246AF
        call ext_00724C60
        jmp short loc_7246B4
    loc_7246AF:
        call ext_00724D00
    loc_7246B4:
        mov ecx, dword ptr [esp + 0x42c]
        mov dword ptr [esi + 0x1c8], 1
        push ecx
        mov ecx, esi
        call ext_00724850
        mov al, byte ptr [esi + 0x15]
        test al, al
        je loc_724794
        mov al, byte ptr [esi + 0x17]
        test al, al
        je loc_724794
        mov ecx, esi
        call ext_007289E0
        push 0x418
        mov dword ptr [esi + 0x264], 0
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp + 8], eax
        test eax, eax
        mov dword ptr [esp + 0x424], 0
        je short loc_724727
        mov edx, dword ptr [esi + 0x10]
        push 1
        push 2
        push edx
        push 0
        mov ecx, eax
        call ext_00789810
        jmp short loc_724729
    loc_724727:
        xor eax, eax
    loc_724729:
        mov dword ptr [esi + 0x10], eax
        lea eax, [esp + 0xc]
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0x428], 0xffffffff
        call ext_00724E80
        mov ecx, dword ptr [esi + 0x10]
        mov edx, dword ptr [ecx]
        call dword ptr [edx + 0x24]
        push 0x1198
        mov edi, eax
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp + 8], eax
        test eax, eax
        mov dword ptr [esp + 0x424], 1
        je short loc_724784
        mov ecx, dword ptr [esi + 0x10]
        push 1
        push 2
        push ecx
        lea edx, [esp + 0x18]
        push edi
        push edx
        mov ecx, eax
        call ext_0078BA20
        jmp short loc_724786
    loc_724784:
        xor eax, eax
    loc_724786:
        mov dword ptr [esp + 0x424], 0xffffffff
        mov dword ptr [esi + 0x10], eax
    loc_724794:
        mov ecx, dword ptr [esi + 0x10]
        mov eax, dword ptr [ecx]
        call dword ptr [eax + 0x30]
        test eax, eax
        je short loc_7247B2
        push 0xb
        lea ecx, [esi + 0xef0]
        call ext_006E7440
        jmp loc_724835
    loc_7247B2:
        mov ecx, dword ptr [esi + 0x10]
        lea edi, [esi + 0x194]
        mov edx, dword ptr [ecx]
        call dword ptr [edx + 0x24]
        mov dword ptr [esp + 8], eax
        mov eax, dword ptr [edi]
        lea ecx, [esp + 8]
        push ecx
        push eax
        mov ecx, edi
        call ext_006D2170
        mov edx, dword ptr [esi + 4]
        lea ecx, [esi + 0x1ac]
        mov dword ptr [esp + 8], edx
        mov dword ptr [esi + 0x1c4], eax
        mov eax, dword ptr [ecx]
        lea edx, [esp + 8]
        push edx
        push eax
        call ext_006D2170
        mov ecx, esi
        mov dword ptr [esi + 0x1c4], eax
        call ext_00725650
        mov al, 1
        jmp short loc_724837
    loc_724804:
        lea ecx, [esi + 0xfc]
        call ext_006E7460
        push eax
        lea eax, [esp + 0x20]
        push offset mem_00AACE50
        push eax
        call dword ptr [mem_00925218]
        add esp, 0xc
        lea ecx, [esp + 0x1c]
        push ecx
        push 4
        lea ecx, [esi + 0xef0]
        call ext_006E7410
    loc_724835:
        xor al, al
    loc_724837:
        mov ecx, dword ptr [esp + 0x41c]
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x420
        ret 4
    }
}

// [0x007294F0] sub_007294F0 (576 bytes)
extern "C" void ext_006C2F50();
extern "C" void ext_006C30A0();
extern "C" void ext_006C30F0();
extern "C" void ext_006C3120();
extern "C" void ext_006C3150();
extern "C" void ext_006CE720();
extern "C" void ext_006CE800();
extern "C" void ext_006D2130();
extern "C" void ext_006D2160();
extern "C" void ext_006D2170();
extern "C" void ext_006D2250();
extern "C" void ext_006DC510();
extern "C" void ext_006DC550();
extern "C" void ext_0070CF00();
extern "C" void ext_0070CF90();
extern "C" void ext_00728DF0();
extern "C" void ext_007290D0();
extern "C" void ext_00729280();

extern "C" __declspec(naked) void __fastcall fn_007294F0(void* self) {
    __asm {
        push -1
        push 0x8be5c8
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x34
        push ebx
        mov ebx, dword ptr [esp + 0x48]
        push esi
        mov esi, ecx
        mov ecx, ebx
        mov dword ptr [esp + 0x18], esi
        call ext_006C30A0
        push 0x4
        push 0x10
        lea ecx, [esp + 0x2c]
        mov dword ptr [esp + 0x18], eax
        call ext_006D2130
        lea eax, [esp + 0x34]
        mov dword ptr [esp + 0x38], eax
        mov ecx, ebx
        mov dword ptr [esp + 0x44], 0x0
        call ext_006C30F0
        test eax, eax
        mov ecx, ebx
        je short L_729558
        call ext_006C30F0
        push eax
        mov ecx, esi
        call ext_00728DF0
        jmp short L_72958E
L_729558:
        call ext_006C3150
        test eax, eax
        mov ecx, ebx
        je short L_729572
        call ext_006C3150
        push eax
        mov ecx, esi
        call ext_007290D0
        jmp short L_72958E
L_729572:
        call ext_006C3120
        test eax, eax
        je L_72970A
        mov ecx, ebx
        call ext_006C3120
        push eax
        mov ecx, esi
        call ext_00729280
L_72958E:
        push ebp
        mov ebp, 0x1
        push edi
        mov ecx, ebx
        mov dword ptr [esp + 0x14], eax
        mov dword ptr [esp + 0x10], ebp
        call ext_006DC550
        cmp eax, ebp
        mov dword ptr [esp + 0x1c], eax
        jle short L_72962A
L_7295AC:
        push ebp
        mov ecx, ebx
        call ext_006DC510
        mov ecx, dword ptr [esp + 0x18]
        mov dword ptr [esp + 0x24], eax
        xor esi, esi
        call ext_0070CF00
        mov edi, eax
        test edi, edi
        jle short L_729619
        or ebx, -1
        mov ebp, 0x7fffffff
L_7295D1:
        mov ecx, dword ptr [esp + 0x24]
        push ebp
        mov eax, 0x80000000
        push ebx
        push eax
        mov eax, 0x1
        push eax
        push esi
        push ecx
        mov ecx, dword ptr [esp + 0x30]
        call ext_0070CF90
        mov ecx, eax
        call ext_006CE800
        mov dword ptr [esp + 0x28], eax
        mov eax, dword ptr [esp + 0x2c]
        lea edx, [esp + 0x28]
        lea ecx, [esp + 0x2c]
        push edx
        push eax
        call ext_006D2170
        inc esi
        cmp esi, edi
        jl short L_7295D1
        mov ebp, dword ptr [esp + 0x10]
        mov ebx, dword ptr [esp + 0x54]
L_729619:
        mov eax, dword ptr [esp + 0x1c]
        inc ebp
        cmp ebp, eax
        mov dword ptr [esp + 0x10], ebp
        jl short L_7295AC
        mov esi, dword ptr [esp + 0x20]
L_72962A:
        mov ecx, dword ptr [esp + 0x14]
        push ecx
        mov ecx, ebx
        call ext_006C2F50
        mov edi, 0x1
        mov ecx, ebx
        mov dword ptr [esp + 0x10], edi
        call ext_006DC550
        cmp eax, edi
        mov dword ptr [esp + 0x1c], eax
        jle short L_7296AF
        jmp short L_729654
L_729650:
        mov ebx, dword ptr [esp + 0x54]
L_729654:
        push edi
        mov ecx, ebx
        call ext_006DC510
        mov ecx, dword ptr [esp + 0x18]
        mov ebp, eax
        xor esi, esi
        call ext_0070CF00
        mov ebx, eax
        test ebx, ebx
        jle short L_72969E
        dec edi
        imul edi, ebx
        shl edi, 0x2
L_729676:
        mov edx, dword ptr [esp + 0x3c]
        mov ecx, dword ptr [esp + 0x14]
        push 0x1
        mov eax, dword ptr [edi + edx]
        push eax
        push esi
        push ebp
        call ext_0070CF90
        mov ecx, eax
        call ext_006CE720
        inc esi
        add edi, 0x4
        cmp esi, ebx
        jl short L_729676
        mov edi, dword ptr [esp + 0x10]
L_72969E:
        mov eax, dword ptr [esp + 0x1c]
        inc edi
        cmp edi, eax
        mov dword ptr [esp + 0x10], edi
        jl short L_729650
        mov esi, dword ptr [esp + 0x20]
L_7296AF:
        mov ecx, dword ptr [esi]
        mov edx, dword ptr [esp + 0x18]
        push edx
        mov eax, dword ptr [ecx]
        call dword ptr [eax + 0x78]
        mov esi, dword ptr [esp + 0x2c]
        pop edi
        test esi, esi
        pop ebp
        je short L_7296DB
L_7296C5:
        mov eax, dword ptr [esp + 0x34]
        dec esi
        mov ecx, dword ptr [eax + 4*esi]
        test ecx, ecx
        je short L_7296D7
        mov edx, dword ptr [ecx]
        push 0x1
        call dword ptr [edx]
L_7296D7:
        test esi, esi
        jne short L_7296C5
L_7296DB:
        lea ecx, [esp + 0x24]
        call ext_006D2250
        lea ecx, [esp + 0x24]
        mov dword ptr [esp + 0x44], 0xffffffff
        call ext_006D2160
        pop esi
        mov al, 0x1
        pop ebx
        mov ecx, dword ptr [esp + 0x34]
        mov dword ptr fs:[0], ecx
        add esp, 0x40
        ret 0x4
L_72970A:
        lea ecx, [esp + 0x24]
        mov dword ptr [esp + 0x44], 0xffffffff
        call ext_006D2160
        mov ecx, dword ptr [esp + 0x3c]
        pop esi
        xor al, al
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x40
        ret 0x4
    }
}

// [0x0072CFB0] sub_0072CFB0 (592 bytes)
extern "C" void ext_006BA1C0();
extern "C" void ext_006BA220();
extern "C" void ext_006BADB0();
extern "C" void ext_0071E380();
extern "C" void ext_0071E510();
extern "C" void ext_0071E660();
extern "C" void ext_0071E680();
extern "C" void ext_0071F070();
extern "C" void ext_007641C0();
extern "C" int mem_008BDD3B;
extern "C" int mem_008BDD71;
extern "C" int mem_00996B1C;
extern "C" int mem_00AAD1BC;
extern "C" int mem_00B602A0;
extern "C" int mem_00B602A8;
extern "C" int mem_00B602AC;

extern "C" __declspec(naked) void __fastcall fn_0072CFB0(void* self) {
    __asm {
        push -1
        push offset mem_008BDD3B
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 4], esi
        mov dword ptr [esi], offset mem_00996B1C
        lea ecx, [esi + 0x60]
        mov dword ptr [esp + 0x10], 0
        call ext_006B9D70
        lea ecx, [esi + 8]
        mov dword ptr [esp + 0x10], 0xffffffff
        call ext_007641C0
        mov ecx, dword ptr [esp + 8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
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
        push -1
        push offset mem_008BDD71
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x1b8
        push ebx
        push ebp
        xor ebp, ebp
        lea ecx, [esp + 0xa4]
        push ebp
        call ext_0071E380
        push 1
        push ebp
        lea ecx, [esp + 0xac]
        mov dword ptr [esp + 0x1d0], ebp
        call ext_0071E660
        push ebp
        push 1
        lea ecx, [esp + 0xac]
        call ext_0071E660
        push ebp
        push 2
        lea ecx, [esp + 0xac]
        call ext_0071E660
        mov eax, dword ptr [esp + 0x1d0]
        lea ecx, [esp + 0xa4]
        push eax
        call ext_0071F070
        lea ecx, [esp + 0xa4]
        call ext_0071E680
        mov ebx, eax
        mov eax, dword ptr [ebx]
        cmp eax, ebp
        mov dword ptr [esp + 8], eax
        jne L_72D0BA
        lea ecx, [esp + 0xa4]
        mov dword ptr [esp + 0x1c8], 0xffffffff
        call ext_0071E510
        mov al, 1
        jmp L_72D194
    L_72D0BA:
        push edi
        xor edi, edi
        cmp eax, ebp
        jle L_72D17A
        push esi
    L_72D0C6:
        mov ecx, dword ptr [ebx + 0x10]
        mov ecx, dword ptr [ecx + ebp]
        call ext_006BADB0
        push eax
        lea ecx, [esp + 0x64]
        call ext_006B9D80
        xor esi, esi
        mov byte ptr [esp + 0x1d0], 1
        test ebp, ebp
        jle L_72D135
    L_72D0E9:
        mov edx, dword ptr [ebx + 0x10]
        mov ecx, dword ptr [edx + 4*esi]
        call ext_006BADB0
        push eax
        lea ecx, [esp + 0x18]
        call ext_006B9D80
        lea eax, [esp + 0x14]
        lea ecx, [esp + 0x60]
        push eax
        mov byte ptr [esp + 0x1d4], 2
        call ext_006BA780
        test al, al
        mov byte ptr [esp + 0x1d0], 1
        lea ecx, [esp + 0x14]
        jne L_72D130
        call ext_006B9D70
        inc esi
        cmp esi, edi
        jl L_72D0E9
        jmp L_72D135
    L_72D130:
        call ext_006B9D70
    L_72D135:
        cmp esi, edi
        jne L_72D158
        mov esi, dword ptr [esp + 0x1dc]
        push offset mem_00AAD1BC
        mov ecx, esi
        call ext_006BA220
        lea ecx, [esp + 0x60]
        push ecx
        mov ecx, esi
        call ext_006BA1C0
    L_72D158:
        lea ecx, [esp + 0x60]
        mov byte ptr [esp + 0x1d0], 0
        call ext_006B9D70
        mov eax, dword ptr [esp + 0x10]
        inc edi
        add ebp, 4
        cmp edi, eax
        jl L_72D0C6
        pop esi
    L_72D17A:
        lea ecx, [esp + 0xa8]
        mov dword ptr [esp + 0x1cc], 0xffffffff
        call ext_0071E510
        xor al, al
        pop edi
    L_72D194:
        mov ecx, dword ptr [esp + 0x1c0]
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x1c4
        ret 8
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
        mov dword ptr [mem_00B602A8], ecx
        mov dword ptr [mem_00B602AC], edx
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
        fstp qword ptr [mem_00B602A0]
        ret
    }
}

// [0x00728AD0] sub_00728AD0 (608 bytes)
extern "C" void ext_006B9950();
extern "C" void ext_006B9D20();
extern "C" void ext_006B9D70();
extern "C" void ext_006B9D80();
extern "C" void ext_006B9EC0();
extern "C" void ext_006BA1C0();
extern "C" void ext_006BA220();
extern "C" void ext_006BA320();
extern "C" void ext_006BA660();
extern "C" void ext_006BA890();
extern "C" void ext_006BA920();
extern "C" int mem_008BD985;
extern "C" int mem_00AAD068;
extern "C" int mem_00AAD0C4;

extern "C" __declspec(naked) void __fastcall fn_00728AD0(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        push -1
        push offset mem_008BD985
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0xa0
        mov eax, dword ptr [esp + 0xb4]
        push ebx
        push esi
        push eax
        lea ecx, [esp + 0x14]
        mov dword ptr [esp + 0x10], 0
        call ext_006B9D80
        mov ebx, 1
        lea ecx, [esp + 0x10]
        mov dword ptr [esp + 0xb0], ebx
        call ext_006B9950
        test al, al
        jne L_end
        lea ecx, [esp + 0x5c]
        push ebx
        push ecx
        lea ecx, [esp + 0x18]
        call ext_006BA890
        push offset mem_00AAD068
        mov ecx, eax
        mov byte ptr [esp + 0xb4], 2
        call ext_006BA660
        test eax, eax
        lea ecx, [esp + 0x5c]
        mov byte ptr [esp + 0xb0], bl
        sete byte ptr [esp + 0xb]
        call ext_006B9D70
        mov al, byte ptr [esp + 0xb]
        push ebx
        test al, al
        je short L_else1
        lea edx, [esp + 0x60]
        lea ecx, [esp + 0x14]
        push edx
        call ext_006BA920
        push offset mem_00AAD068
        mov ecx, eax
        mov byte ptr [esp + 0xb4], 3
        call ext_006BA660
        test eax, eax
        lea ecx, [esp + 0x5c]
        mov byte ptr [esp + 0xb0], bl
        setne byte ptr [esp + 0xb]
        call ext_006B9D70
        mov al, byte ptr [esp + 0xb]
        test al, al
        je L_end
        push offset mem_00AAD068
        lea ecx, [esp + 0x14]
        call ext_006BA220
        jmp L_end
    L_else1:
        lea eax, [esp + 0x60]
        lea ecx, [esp + 0x14]
        push eax
        call ext_006BA920
        push offset mem_00AAD068
        mov ecx, eax
        mov byte ptr [esp + 0xb4], 4
        call ext_006BA660
        test eax, eax
        lea ecx, [esp + 0x5c]
        mov byte ptr [esp + 0xb0], bl
        sete byte ptr [esp + 0xb]
        call ext_006B9D70
        mov al, byte ptr [esp + 0xb]
        test al, al
        je L_alt
        lea ecx, [esp + 0x5c]
        push ebx
        push ecx
        lea ecx, [esp + 0x18]
        call ext_006BA890
        push offset mem_00AAD068
        mov ecx, eax
        mov byte ptr [esp + 0xb4], 5
        call ext_006BA660
        test eax, eax
        lea ecx, [esp + 0x5c]
        mov byte ptr [esp + 0xb0], bl
        setne byte ptr [esp + 0xb]
        call ext_006B9D70
        mov al, byte ptr [esp + 0xb]
        test al, al
        je L_end
        lea edx, [esp + 0x10]
        lea ecx, [esp + 0x5c]
        push edx
        call ext_006B9D20
        push offset mem_00AAD068
        lea ecx, [esp + 0x14]
        mov byte ptr [esp + 0xb4], 6
        call ext_006B9EC0
        lea eax, [esp + 0x5c]
        lea ecx, [esp + 0x10]
        push eax
        call ext_006BA1C0
        mov byte ptr [esp + 0xb0], bl
        lea ecx, [esp + 0x5c]
        jmp short L_ce8
    L_alt:
        push 0
        push offset mem_00AAD0C4
        lea ecx, [esp + 0x18]
        call ext_006BA320
        cmp eax, -1
        je short L_end
        lea ecx, [esp + 0x10]
        push ecx
        lea ecx, [esp + 0x60]
        call ext_006B9D20
        push offset mem_00AAD068
        lea ecx, [esp + 0x14]
        mov byte ptr [esp + 0xb4], 7
        call ext_006B9EC0
        lea edx, [esp + 0x5c]
        lea ecx, [esp + 0x10]
        push edx
        call ext_006BA1C0
        push offset mem_00AAD068
        lea ecx, [esp + 0x14]
        call ext_006BA220
        mov byte ptr [esp + 0xb0], bl
        lea ecx, [esp + 0x5c]
    L_ce8:
        call ext_006B9D70
    L_end:
        mov esi, dword ptr [esp + 0xb8]
        lea eax, [esp + 0x10]
        push eax
        mov ecx, esi
        call ext_006B9D20
        mov dword ptr [esp + 0xc], ebx
        lea ecx, [esp + 0x10]
        mov byte ptr [esp + 0xb0], 0
        call ext_006B9D70
        mov ecx, dword ptr [esp + 0xa8]
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0xac
        ret 8
    }
}

extern "C" void ext_006B99C0();
extern "C" void ext_006B9D10();
extern "C" void ext_006B9D70();
extern "C" void ext_006B9E60();
extern "C" void ext_006D2160();
extern "C" void ext_006E7410();
extern "C" void ext_006E7460();
extern "C" void ext_006FE2A0();
extern "C" void ext_006FEFF0();
extern "C" void ext_00723060();
extern "C" void ext_00728D40();
extern "C" void ext_00728D50();
extern "C" void ext_0072CFB0();
extern "C" void ext_0072DAD0();
extern "C" void ext_00782D20();
extern "C" void ext_00788C70();
extern "C" void ext_0079BE90();
extern "C" int mem_0092A278;

// [0x0072D640] sub_0072D640 (1088 bytes)
extern "C" __declspec(naked) void __fastcall fn_0072D640(void* self) {
    __asm {
        push -1
        push 0x8bde5a
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 4], esi
        mov dword ptr [esi], 0x996b38
        mov eax, dword ptr [esi + 0xac]
        mov dword ptr [esp + 0x10], 7
        test eax, eax
        je L_72d67a
        call ext_0072DAD0
    L_72d67a:
        lea ecx, [esi + 0x1b8]
        mov byte ptr [esp + 0x10], 6
        call ext_006D2160
        lea ecx, [esi + 0x158]
        mov byte ptr [esp + 0x10], 5
        call ext_006B9D70
        lea ecx, [esi + 0x10c]
        mov byte ptr [esp + 0x10], 4
        call ext_006B9D70
        lea ecx, [esi + 0xf4]
        mov byte ptr [esp + 0x10], 3
        call ext_00782D20
        lea ecx, [esi + 0xe0]
        mov byte ptr [esp + 0x10], 2
        call ext_00782D20
        lea ecx, [esi + 0xcc]
        mov byte ptr [esp + 0x10], 1
        call ext_00782D20
        lea ecx, [esi + 0xb8]
        mov byte ptr [esp + 0x10], 0
        call ext_00782D20
        mov ecx, esi
        mov dword ptr [esp + 0x10], -1
        call ext_0072CFB0
        mov ecx, dword ptr [esp + 8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
        nop
        nop
        nop
        nop
        nop
        nop
        nop

        mov eax, dword ptr fs:[0]
        push -1
        push 0x8bded0
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x1c0
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0xac]
        mov byte ptr [esi + 0x108], 0
        test eax, eax
        jne L_72d74b
        call ext_0079BE90
        mov dword ptr [esi + 0xac], eax
    L_72d74b:
        lea eax, [esp + 0x130]
        push eax
        call ext_006FEFF0
        add esp, 4
        mov ecx, dword ptr [esp + 0x1d8]
        mov dword ptr [esp + 0x1d0], 0
        push ecx
        lea ecx, [esp + 0x134]
        call ext_006E7460
        lea edx, [esp + 0x180]
        push eax
        push edx
        call ext_006FE2A0
        add esp, 0xc
        mov ebx, 1
        lea ecx, [esp + 0xc]
        mov byte ptr [esp + 0x1d0], bl
        call ext_006B9D10
        lea ecx, [esp + 0x58]
        mov byte ptr [esp + 0x1d0], 2
        call ext_006B9D10
        lea ecx, [esp + 0xbc]
        mov byte ptr [esp + 0x1d0], 3
        call ext_00788C70
        lea ecx, [esp + 0xd8]
        call ext_006B9D10
        lea eax, [esp + 8]
        lea ecx, [esp + 0x17c]
        push eax
        push 0
        push 0
        mov byte ptr [esp + 0x1dc], 4
        call ext_006E7460
        mov ecx, dword ptr [esi + 0xac]
        push eax
        add ecx, 4
        call ext_00723060
        test al, al
        jne L_72d8fd
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 4
        call ext_00728D40
        cmp eax, 4
        ja L_72d87d
        jmp dword ptr [eax*4 + 0x72da08]
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 4
        call ext_00728D50
        push eax
        push 0
        jmp L_72d88e
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 4
        call ext_00728D50
        push eax
        push ebx
        jmp L_72d88e
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 4
        call ext_00728D50
        push eax
        push 2
        jmp L_72d88e
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 4
        call ext_00728D50
        push eax
        push 4
        jmp L_72d88e
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 4
        call ext_00728D50
        push eax
        push 3
        jmp L_72d88e
    L_72d87d:
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 4
        call ext_00728D50
        push eax
        push 7
    L_72d88e:
        lea ecx, [esi + 8]
        call ext_006E7410
        lea ecx, [esp + 0xd8]
        mov byte ptr [esp + 0x1d0], 5
        call ext_006B9D70
        lea ecx, [esp + 0x58]
        mov byte ptr [esp + 0x1d0], 6
        call ext_006B9D70
        lea ecx, [esp + 0xc]
        mov byte ptr [esp + 0x1d0], bl
        call ext_006B9D70
        lea ecx, [esp + 0x17c]
        mov byte ptr [esp + 0x1d0], 0
        call ext_006B9D70
        lea ecx, [esp + 0x130]
        mov dword ptr [esp + 0x1d0], -1
        call ext_006B9D70
        xor al, al
        jmp L_72d9ee
    L_72d8fd:
        fld qword ptr [esp + 0xa8]
        fcomp qword ptr [mem_0092A278]
        fnstsw ax
        test ah, 0x40
        jne L_72d98c
        fld qword ptr [esp + 0xb0]
        fcomp qword ptr [mem_0092A278]
        fnstsw ax
        test ah, 0x40
        jne L_72d98c
        lea ecx, [esp + 0x58]
        call ext_006B99C0
        test eax, eax
        je L_72d98c
        lea ecx, [esp + 0xc]
        mov byte ptr [esi + 0x108], bl
        push ecx
        lea ecx, [esi + 0x10c]
        call ext_006B9E60
        lea edx, [esp + 0x58]
        lea ecx, [esi + 0x158]
        push edx
        call ext_006B9E60
        mov eax, dword ptr [esp + 0xa8]
        mov edx, dword ptr [esp + 0xb0]
        mov ecx, dword ptr [esp + 0xac]
        mov dword ptr [esi + 0x1a8], eax
        mov eax, dword ptr [esp + 0xb4]
        mov dword ptr [esi + 0x1b0], edx
        mov dword ptr [esi + 0x1ac], ecx
        mov dword ptr [esi + 0x1b4], eax
    L_72d98c:
        lea ecx, [esp + 0xd8]
        mov byte ptr [esp + 0x1d0], 7
        call ext_006B9D70
        lea ecx, [esp + 0x58]
        mov byte ptr [esp + 0x1d0], 8
        call ext_006B9D70
        lea ecx, [esp + 0xc]
        mov byte ptr [esp + 0x1d0], bl
        call ext_006B9D70
        lea ecx, [esp + 0x17c]
        mov byte ptr [esp + 0x1d0], 0
        call ext_006B9D70
        lea ecx, [esp + 0x130]
        mov dword ptr [esp + 0x1d0], -1
        call ext_006B9D70
        mov al, bl
    L_72d9ee:
        mov ecx, dword ptr [esp + 0x1c8]
        pop esi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x1cc
        ret 4
        nop
        _emit 0x1f
        _emit 0xd8
        _emit 0x72
        _emit 0x00
        _emit 0x32
        _emit 0xd8
        _emit 0x72
        _emit 0x00
        _emit 0x44
        _emit 0xd8
        _emit 0x72
        _emit 0x00
        _emit 0x6a
        _emit 0xd8
        _emit 0x72
        _emit 0x00
        _emit 0x57
        _emit 0xd8
        _emit 0x72
        _emit 0x00
        nop
        nop
        nop
        nop
        push -1
        push 0x8bdef3
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 4], esi
        lea ecx, [esi + 0xd0]
        mov dword ptr [esp + 0x10], 0
        call ext_006B9D70
        lea ecx, [esi + 0x50]
        mov dword ptr [esp + 0x10], 1
        call ext_006B9D70
        lea ecx, [esi + 4]
        mov dword ptr [esp + 0x10], -1
        call ext_006B9D70
        mov ecx, dword ptr [esp + 8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

extern "C" void ext_006A5C5C(); extern "C" void ext_006A5C62(); extern "C" void ext_006B9D20(); extern "C" void ext_006B9D70(); extern "C" void ext_006BADC0(); extern "C" void ext_006BC0D0(); extern "C" void ext_006BC0F0(); extern "C" void ext_006BC370(); extern "C" void ext_006BC7E0(); extern "C" void ext_006BD760(); extern "C" void ext_006BDB10(); extern "C" void ext_006BDEA0(); extern "C" void ext_006BE7D0(); extern "C" void ext_006C3180(); extern "C" void ext_006C31B0(); extern "C" void ext_006D2130(); extern "C" void ext_006D2160(); extern "C" void ext_006D2170(); extern "C" void ext_006D2250(); extern "C" void ext_006E7440(); extern "C" void ext_006E8090(); extern "C" void ext_00724FA0(); extern "C" void ext_00726690(); extern "C" void ext_00726770(); extern "C" void ext_00726840(); extern "C" void ext_00726860(); extern "C" void ext_007268D0(); extern "C" void ext_0072CF10(); extern "C" void ext_0072FDD0(); extern "C" void ext_0072FEB0(); extern "C" void ext_00730040(); extern "C" void ext_00730670(); extern "C" void ext_00730830(); extern "C" void ext_00731870(); extern "C" void ext_00731CE0(); extern "C" void ext_00731EA0(); extern "C" void ext_00731F10(); extern "C" void ext_00732160(); extern "C" void ext_007327E0(); extern "C" void ext_00732CB0(); extern "C" void ext_00732CC0(); extern "C" void ext_00735300(); extern "C" void ext_007355B0(); extern "C" void ext_00735700(); extern "C" void ext_00735CD0(); extern "C" void ext_00735F30(); extern "C" void ext_00736190(); extern "C" void ext_00741F20(); extern "C" void ext_00742D10(); extern "C" void ext_00742DD0(); extern "C" void ext_00782D00(); extern "C" void ext_00782D30(); extern "C" void ext_00782F00(); extern "C" void ext_00782F20(); extern "C" void ext_0079C220(); extern "C" void ext_0079C3F0(); extern "C" void ext_0079C410(); extern "C" void ext_0079D6D0(); extern "C" void ext_0079D7A0(); extern "C" int mem_00B60288;

// [0x0072DEF0] sub_0072DEF0 (1663 bytes)
extern "C" __declspec(naked) void __fastcall fn_0072DEF0(void* self) {
    __asm {
        push -0x1
        push 0x8bdf56
        mov eax, fs:[0x0]
        push eax
        mov fs:[0x0], esp
        sub esp, 0x40
        push ebx
        push ebp
        push esi
        mov esi, ecx
        xor eax, eax
        push edi
        mov dword ptr [esp + 0x14], eax
        mov byte ptr [esp + 0x13], 0x1
        mov ebp, 0x1
        mov dword ptr [esp + 0x18], eax
        xor bl, bl
        mov dword ptr [esi + 0xb4], eax
        call ext_0079D7A0
        mov edx, dword ptr [eax]
        mov ecx, eax
        call dword ptr [edx + 0x48]
        mov edi, dword ptr [esp + 0x64]
        test edi, edi
        je L_72df50
        mov ecx, dword ptr [mem_00B60288]
        mov eax, dword ptr [edi]
        push ecx
        mov ecx, edi
        call dword ptr [eax + 0x14]
        test al, al
        jne L_72df68
    L_72df50:
        push 0x6
        lea ecx, [esi + 0x8]
        call ext_006E7440
        mov edi, dword ptr [esp + 0x68]
        mov byte ptr [esp + 0x13], 0x0
        jmp L_72dff7
    L_72df68:
        mov dword ptr [esi + 0xb4], edi
        mov edi, dword ptr [esp + 0x68]
        test edi, edi
        je L_72e036
        mov edx, dword ptr [esi + 0xac]
        mov dword ptr [esi + 0xac], edi
        mov eax, dword ptr [edi + 0xf64]
        push 0x14
        mov dword ptr [esp + 0x18], edx
        mov bl, 0x1
        mov dword ptr [esp + 0x1c], eax
        call ext_006A5C62
        add esp, 0x4
        mov dword ptr [esp + 0x64], eax
        test eax, eax
        mov dword ptr [esp + 0x58], 0x0
        je L_72dfbb
        push 0x14
        mov ecx, eax
        call ext_00782D00
        jmp L_72dfbd
    L_72dfbb:
        xor eax, eax
    L_72dfbd:
        mov dword ptr [edi + 0xf64], eax
        mov dword ptr [esp + 0x58], 0xffffffff
        mov byte ptr [eax + 0x11], 0x1
    L_72dfcf:
        mov eax, dword ptr [esi + 0xb4]
        mov ecx, dword ptr [eax + 0xf0]
        test ecx, ecx
        jle L_72dff7
        mov eax, dword ptr [eax + 0x100]
    L_72dfe5:
        mov edx, dword ptr [eax]
        cmp byte ptr [edx + 0xe4], 0x0
        je L_72dff1
        inc ebp
    L_72dff1:
        add eax, 0x4
        dec ecx
        jne L_72dfe5
    L_72dff7:
        call ext_0079D7A0
        mov edx, dword ptr [eax]
        push ebp
        mov ecx, eax
        call dword ptr [edx + 0x60]
        mov al, byte ptr [esp + 0x13]
        test al, al
        je L_72e09f
        mov eax, dword ptr [esi + 0xac]
        cmp dword ptr [eax + 0x1c8], -0x1
        jne L_72e051
        lea ecx, [eax + 0x4]
        call ext_00724FA0
        push 0x0
        mov ecx, esi
        mov byte ptr [esp + 0x17], al
        call ext_0072FDD0
        jmp L_72e05d
    L_72e036:
        mov eax, dword ptr [esi + 0xac]
        test eax, eax
        jne L_72dfcf
        push 0x3
        lea ecx, [esi + 0x8]
        call ext_006E7440
        mov byte ptr [esp + 0x13], 0x0
        jmp L_72dff7
    L_72e051:
        test bl, bl
        jne L_72e05d
        lea ecx, [eax + 0x4]
        call ext_00726690
    L_72e05d:
        mov al, byte ptr [esp + 0x13]
        test al, al
        je L_72e09f
        test bl, bl
        jne L_72e09f
        mov eax, dword ptr [esi + 0xb4]
        sub esp, 0x4c
        add eax, 0x15c
        mov ecx, esp
        mov dword ptr [esp + 0xb0], esp
        push eax
        call ext_006B9D20
        mov ecx, esi
        call ext_00742D10
        test al, al
        jne L_72e09f
        push 0x5
        lea ecx, [esi + 0x8]
        call ext_006E7440
        mov byte ptr [esp + 0x13], bl
    L_72e09f:
        mov ebp, dword ptr [esp + 0x60]
        mov ecx, ebp
        call ext_006BC0F0
        lea ebx, [esi + 0xb8]
        mov ecx, ebx
        call ext_00782D30
        lea ecx, [esi + 0xcc]
        call ext_00782D30
        lea ecx, [esi + 0xe0]
        call ext_00782D30
        lea ecx, [esi + 0xf4]
        call ext_00782D30
        push 0x4
        push 0x10
        lea ecx, [esp + 0x40]
        call ext_006D2130
        lea ecx, [esp + 0x48]
        mov dword ptr [esp + 0x4c], ecx
        mov al, byte ptr [esp + 0x13]
        mov dword ptr [esp + 0x58], 0x1
        test al, al
        je L_72e4a1
        lea edx, [esp + 0x38]
        mov ecx, esi
        push edx
        push ebp
        call ext_0072FEB0
        test al, al
        mov byte ptr [esp + 0x13], al
        je L_72e4a1
        push ebp
        mov ecx, esi
        call ext_00731EA0
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_00726690
        mov ecx, dword ptr [esi + 0xac]
        call ext_0079D6D0
        test al, al
        jne L_72e14e
        lea eax, [esp + 0x38]
        mov ecx, esi
        push eax
        push ebp
        call ext_00730040
        jmp L_72e155
    L_72e14e:
        mov ecx, esi
        call ext_00730670
    L_72e155:
        mov ecx, ebp
        mov byte ptr [esp + 0x13], al
        call ext_006BC370
        test eax, eax
        je L_72e1b1
        mov ecx, dword ptr [esi + 0xac]
        push 0xaad1fc
        call ext_0079C410
        test eax, eax
        je L_72e188
        mov ecx, dword ptr [esi + 0xac]
        push 0xaad1fc
        call ext_0079C3F0
    L_72e188:
        mov ecx, ebp
        call ext_006BC370
        mov edx, dword ptr [eax]
        mov ecx, eax
        call dword ptr [edx + 0xc]
        mov edx, dword ptr [eax]
        push 0x0
        push 0x0
        mov ecx, eax
        call dword ptr [edx]
        mov ecx, dword ptr [esi + 0xac]
        push eax
        push 0xaad1fc
        call ext_0079C220
    L_72e1b1:
        mov al, byte ptr [esp + 0x13]
        test al, al
        je L_72e4a1
        mov ecx, ebp
        call ext_006BC370
        push eax
        mov ecx, esi
        call ext_00731870
        mov ecx, dword ptr [esi + 0xac]
        mov byte ptr [esp + 0x13], al
        call ext_0079D6D0
        test al, al
        jne L_72e2fc
        push 0x4
        push 0x10
        lea ecx, [esp + 0x28]
        call ext_006D2130
        lea eax, [esp + 0x30]
        mov dword ptr [esp + 0x34], eax
        mov eax, dword ptr [esi + 0xbc]
        mov byte ptr [esp + 0x58], 0x2
        test eax, eax
        mov dword ptr [esp + 0x64], 0x0
        jle L_72e299
    L_72e213:
        mov ecx, dword ptr [esp + 0x64]
        push ecx
        mov ecx, ebx
        call ext_00782F00
        mov edi, dword ptr [eax]
        mov ecx, edi
        call ext_006C3180
        test eax, eax
        je L_72e254
        push eax
        mov ecx, edi
        sub esp, 0x4c
        mov edx, esp
        mov dword ptr [esp + 0x6c], esp
        push edx
        call ext_006BADC0
        mov ecx, ebp
        mov byte ptr [esp + 0xa8], 0x2
        call ext_006BC7E0
        mov ecx, eax
        call ext_006E8090
    L_72e254:
        mov ecx, edi
        call ext_006C31B0
        test eax, eax
        je L_72e282
        push edi
        mov ecx, ebp
        call ext_006BC0D0
        mov edx, dword ptr [esp + 0x20]
        mov eax, dword ptr [esp + 0x64]
        lea ecx, [esp + 0x60]
        mov dword ptr [esp + 0x60], eax
        push ecx
        push edx
        lea ecx, [esp + 0x28]
        call ext_006D2170
    L_72e282:
        mov eax, dword ptr [esp + 0x64]
        mov ecx, dword ptr [esi + 0xbc]
        inc eax
        cmp eax, ecx
        mov dword ptr [esp + 0x64], eax
        jl L_72e213
    L_72e299:
        mov eax, dword ptr [esp + 0x20]
        xor edi, edi
        dec eax
        test eax, eax
        jle L_72e2ea
    L_72e2a4:
        mov ecx, dword ptr [esp + 0x30]
        mov edx, dword ptr [esi + 0x4]
        push 0x1
        mov eax, dword ptr [ecx + 4*edi]
        mov edx, dword ptr [edx]
        push eax
        mov ecx, ebx
        mov dword ptr [esp + 0x6c], edx
        call ext_00782F00
        mov eax, dword ptr [eax]
        mov edx, dword ptr [esp + 0x68]
        mov ecx, dword ptr [esi + 0x4]
        push eax
        call dword ptr [edx + 0x74]
        mov eax, dword ptr [esp + 0x30]
        lea ebx, [esi + 0xb8]
        mov ecx, ebx
        mov eax, dword ptr [eax + 4*edi]
        push eax
        call ext_00782F20
        mov ecx, dword ptr [esp + 0x20]
        inc edi
        dec ecx
        cmp edi, ecx
        jl L_72e2a4
    L_72e2ea:
        lea ecx, [esp + 0x20]
        mov byte ptr [esp + 0x58], 0x1
        call ext_006D2160
        mov edi, dword ptr [esp + 0x68]
    L_72e2fc:
        mov al, byte ptr [esp + 0x13]
        test al, al
        je L_72e4a1
        push ebp
        mov ecx, esi
        call ext_00731CE0
        test al, al
        mov byte ptr [esp + 0x13], al
        je L_72e4a1
        push ebp
        mov ecx, esi
        call ext_00735CD0
        push ebp
        mov ecx, esi
        call ext_00735F30
        mov ecx, dword ptr [esi + 0xb4]
        push 0x2
        call ext_0072CF10
        test al, al
        je L_72e34a
        push 0xb5d2c0
        push ebp
        mov ecx, esi
        call ext_00736190
    L_72e34a:
        mov ecx, dword ptr [esi + 0xb4]
        push 0x6
        call ext_0072CF10
        test al, al
        je L_72e363
        push ebp
        mov ecx, esi
        call ext_007327E0
    L_72e363:
        mov ecx, dword ptr [esi + 0xb4]
        push 0x8
        call ext_0072CF10
        test al, al
        je L_72e38c
        push ebp
        mov ecx, esi
        call ext_00732CB0
        push ebp
        mov ecx, esi
        call ext_00732CB0
        push ebp
        mov ecx, esi
        call ext_00732CC0
    L_72e38c:
        push ebp
        mov ecx, esi
        call ext_00742DD0
        mov ecx, dword ptr [esi + 0xb4]
        push 0x9
        call ext_0072CF10
        test al, al
        je L_72e423
        mov ecx, dword ptr [esi + 0xac]
        call ext_0079D6D0
        test al, al
        jne L_72e413
        mov ecx, dword ptr [esi + 0xac]
        push 0xaad1f0
        add ecx, 0x4
        call ext_00726770
        test al, al
        je L_72e423
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_00726860
        test al, al
        je L_72e403
        push ebp
        mov ecx, esi
        call ext_00732160
        push ebp
        mov ecx, esi
        call ext_00735300
        push ebp
        mov ecx, esi
        call ext_007355B0
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_007268D0
    L_72e403:
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_00726840
        jmp L_72e423
    L_72e413:
        push ebp
        mov ecx, esi
        call ext_00732160
        push ebp
        mov ecx, esi
        call ext_00735700
    L_72e423:
        mov ecx, dword ptr [esi + 0xac]
        call ext_0079D6D0
        test al, al
        jne L_72e439
        mov ecx, esi
        call ext_00741F20
    L_72e439:
        mov ecx, dword ptr [esi + 0xb4]
        push 0x7
        call ext_0072CF10
        test al, al
        je L_72e466
        mov edx, dword ptr [esi + 0xb4]
        mov eax, dword ptr [edx + 0xf0]
        test eax, eax
        jle L_72e466
        push ebp
        mov ecx, esi
        call ext_00730830
        mov byte ptr [esp + 0x13], al
    L_72e466:
        mov al, byte ptr [esp + 0x13]
        test al, al
        je L_72e4a1
        mov ecx, dword ptr [esi + 0xac]
        call ext_0079D6D0
        test al, al
        jne L_72e499
        mov ecx, ebp
        call ext_006BD760
        mov ecx, ebp
        call ext_006BDB10
        mov ecx, ebp
        call ext_006BDEA0
        mov ecx, ebp
        call ext_006BE7D0
    L_72e499:
        push ebp
        mov ecx, esi
        call ext_00731F10
    L_72e4a1:
        test edi, edi
        je L_72e4af
        mov eax, dword ptr [esp + 0x14]
        mov dword ptr [esi + 0xac], eax
    L_72e4af:
        mov ebx, dword ptr [esp + 0x38]
        test ebx, ebx
        je L_72e501
    L_72e4b7:
        mov ecx, dword ptr [esp + 0x48]
        dec ebx
        mov edi, dword ptr [ecx + 4*ebx]
        test edi, edi
        mov dword ptr [esp + 0x64], edi
        je L_72e4f9
        lea ecx, [edi + 0x98]
        mov byte ptr [esp + 0x58], 0x5
        call ext_006B9D70
        lea ecx, [edi + 0x4c]
        mov byte ptr [esp + 0x58], 0x4
        call ext_006B9D70
        mov ecx, edi
        mov byte ptr [esp + 0x58], 0x1
        call ext_006B9D70
        push edi
        call ext_006A5C5C
        add esp, 0x4
    L_72e4f9:
        test ebx, ebx
        jne L_72e4b7
        mov edi, dword ptr [esp + 0x68]
    L_72e501:
        lea ecx, [esp + 0x38]
        call ext_006D2250
        mov dword ptr [esi + 0xb4], 0x0
        call ext_0079D7A0
        mov edx, dword ptr [eax]
        mov ecx, eax
        call dword ptr [edx + 0x68]
        call ext_0079D7A0
        mov edx, dword ptr [eax]
        mov ecx, eax
        call dword ptr [edx + 0x4c]
        mov esi, dword ptr [esp + 0x18]
        test esi, esi
        je L_72e545
        mov ecx, dword ptr [edi + 0xf64]
        call ext_00782D30
        mov dword ptr [edi + 0xf64], esi
    L_72e545:
        lea ecx, [esp + 0x38]
        mov dword ptr [esp + 0x58], 0xffffffff
        call ext_006D2160
        mov ecx, dword ptr [esp + 0x50]
        mov al, byte ptr [esp + 0x13]
        pop edi
        pop esi
        pop ebp
        mov fs:[0x0], ecx
        pop ebx
        add esp, 0x4c
        ret 0xc
    }
}

// [0x00724FA0] sub_00724FA0 (16 bytes)
extern "C" void ext_00724FE0();
extern "C" __declspec(naked) void __cdecl fn_00724FA0() {
    __asm {
        push 0x0
        call ext_00724FE0
        ret
    }
}

// [0x00724FD0] sub_00724FD0 (16 bytes)
extern "C" __declspec(naked) void __stdcall fn_00724FD0(int) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        inc eax
        push eax
        call ext_00724FE0
        ret 0x4
    }
}

// [0x00722020] sub_00722020 (32 bytes)
extern "C" int mem_00B5FFB8;
extern "C" int mem_00B5FFBC;
extern "C" void __cdecl fn_00722020(int* dst) {
    dst[0] = mem_00B5FFB8;
    dst[1] = mem_00B5FFBC;
}

// [0x00724FB0] sub_00724FB0 (32 bytes)
extern "C" __declspec(naked) int __fastcall fn_00724FB0(void* self) {
    __asm {
        mov eax, dword ptr [ecx + 0x194]
        xor ecx, ecx
        dec eax
        test eax, eax
        setg cl
        dec ecx
        not ecx
        and eax, ecx
        ret
    }
}

// [0x007266A0] sub_007266A0 (32 bytes)
extern "C" void ext_006BC380();
extern "C" __declspec(naked) void __fastcall fn_007266A0(void* self) {
    __asm {
        mov ecx, dword ptr [ecx + 0x250]
        test ecx, ecx
        je fn_007266A0_zero
        jmp ext_006BC380
fn_007266A0_zero:
        xor eax, eax
        ret
    }
}

// [0x0072CEB0] sub_0072CEB0 (32 bytes)
extern "C" __declspec(naked) void __fastcall fn_0072CEB0(void* self, int edx_unused, int idx, int val) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        test eax, eax
        jl done
        cmp eax, 0x6
        jge done
        mov edx, dword ptr [esp + 0x8]
        mov dword ptr [ecx + 4*eax + 0x1b8], edx
done:
        ret 0x8
    }
}

// [0x0072CED0] sub_0072CED0 (32 bytes)
extern "C" __declspec(naked) int __fastcall fn_0072CED0(void* self, int edx_unused, int idx) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        test eax, eax
        jl zero_path
        cmp eax, 0x6
        jge zero_path
        mov eax, dword ptr [ecx + 4*eax + 0x1b8]
        ret 0x4
zero_path:
        xor eax, eax
        ret 0x4
    }
}

// [0x0072CEF0] sub_0072CEF0 (32 bytes)
extern "C" __declspec(naked) void __fastcall fn_0072CEF0(void* self, int edx_unused, int idx, unsigned char val) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        test eax, eax
        jl short done_0072CEF0
        cmp eax, 0xd
        jge short done_0072CEF0
        mov dl, byte ptr [esp + 0x8]
        mov byte ptr [eax + ecx + 0x1a9], dl
    done_0072CEF0:
        ret 0x8
    }
}

// [0x0072CF10] sub_0072CF10 (32 bytes)
extern "C" __declspec(naked) unsigned char __fastcall fn_0072CF10(unsigned char* self, int edx_unused, int index) {
    __asm {
        mov eax, dword ptr [esp + 4]
        test eax, eax
        jl short L_0072CF27
        cmp eax, 0dh
        jge short L_0072CF27
        mov al, byte ptr [eax + ecx + 1a9h]
        ret 4
L_0072CF27:
        xor al, al
        ret 4
    }
}

// [0x0072B2D0] sub_0072B2D0 (32 bytes)
extern "C" void ext_006FE010();
extern "C" __declspec(naked) void __fastcall fn_0072B2D0(void* self, int edx_unused, int a1) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 0x8]
        mov eax, dword ptr [esi + 0x8]
        push eax
        push ecx
        mov ecx, esi
        call ext_006FE010
        mov eax, esi
        pop esi
        ret 0x4
    }
}

// [0x0072D620] sub_0072D620 (32 bytes)
extern "C" void ext_0072D640();
extern "C" __declspec(naked) void* __fastcall fn_0072D620(void* self, int edx_unused, int flag) {
    __asm {
        push esi
        mov esi, ecx
        call ext_0072D640
        test byte ptr [esp + 0x8], 0x1
        je done
        push esi
        call ext_006A5C5C
        add esp, 0x4
    done:
        mov eax, esi
        pop esi
        ret 0x4
    }
}

// [0x00726840] sub_00726840 (32 bytes)
extern "C" void ext_0078CBD0();

extern "C" void __fastcall fn_00726840(void* self) {
    void* p = *(void**)((char*)self + 0x250);
    if (p) {
        void* r = (void*)((int (__fastcall *)(void*))ext_00789BB0)(p);
        if (r) {
            ((void (__fastcall *)(void*))ext_0078CBD0)(r);
            return;
        }
    }
}

// [0x00728DC0] sub_00728DC0 (32 bytes)
extern "C" void ext_0078CC90();
extern "C" void ext_006FC720();
extern "C" int mem_00B60018;

extern "C" __declspec(naked) void __cdecl fn_00728DC0() {
    __asm {
        mov eax, dword ptr [mem_00B60018]
        dec eax
        mov dword ptr [mem_00B60018], eax
        jne short done
        call ext_0078CC90
        jmp ext_006FC720
    done:
        ret
    }
}

// [0x0072BDD0] sub_0072BDD0 (32 bytes)
extern "C" void ext_0072BC70();
extern "C" __declspec(naked) void __stdcall fn_0072BDD0(int) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push eax
        call ext_0072BC70
        test eax, eax
        je short L_null
        add eax, 0x50
        ret 0x4
    L_null:
        mov eax, 0xb60020
        ret 0x4
    }
}

// [0x0072BDF0] sub_0072BDF0 (32 bytes)
extern "C" void ext_0072BC70();
extern "C" unsigned char __stdcall fn_0072BDF0(void* a1) {
    void* r = ((void* (__stdcall*)(void*))ext_0072BC70)(a1);
    if (r != 0) {
        return *(unsigned char*)((char*)r + 0xd0);
    }
    return 0;
}

// [0x0072BDB0] sub_0072BDB0 (32 bytes)
extern "C" void ext_0072BC70();
extern "C" __declspec(naked) void __stdcall fn_0072BDB0(void* a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push eax
        call ext_0072BC70
        test eax, eax
        mov ecx, eax
        jne L_0072BDC5
        mov ecx, 0xb600b8
    L_0072BDC5:
        call ext_006E7460
        ret 4
    }
}

// [0x00725A60] sub_00725A60 (48 bytes)
extern "C" int __fastcall fn_00725A60(void* self, int edx_unused, int idx) {
    if (idx < 0 || idx >= *(int*)((char*)self + 0x1ac)) {
        return 0;
    }
    int* arr = *(int**)((char*)self + 0x1bc);
    return arr[idx];
}

// [0x00725DE0] sub_00725DE0 (48 bytes)
extern "C" __declspec(naked) void __stdcall fn_00725DE0(unsigned char* p, unsigned char* q) {
    __asm {
        mov ecx, dword ptr [esp + 4]
        push ebx
        push esi
        mov esi, dword ptr [esp + 0x10]
        push edi
        mov dl, 0x40
        sub esi, ecx
        mov edi, 0x10
    loop_00725DF4:
        mov al, byte ptr [esi + ecx]
        mov bl, byte ptr [ecx]
        xor al, bl
        xor al, dl
        mov byte ptr [ecx], al
        inc ecx
        dec edi
        mov dl, al
        jne short loop_00725DF4
        pop edi
        pop esi
        pop ebx
        ret 8
    }
}

// [0x00725E10] sub_00725E10 (48 bytes)
extern "C" __declspec(naked) void __stdcall fn_00725E10(void* p, void* q) {
    __asm {
        mov ecx, dword ptr [esp + 0x4]
        push ebx
        push esi
        mov esi, dword ptr [esp + 0x10]
        push edi
        mov bl, 0x40
        sub esi, ecx
        mov edi, 0x10
loop_00725E24:
        mov dl, byte ptr [ecx]
        mov al, byte ptr [esi + ecx]
        xor al, dl
        xor al, bl
        mov bl, dl
        mov byte ptr [ecx], al
        inc ecx
        dec edi
        jne loop_00725E24
        pop edi
        pop esi
        pop ebx
        ret 8
    }
}

// [0x00728D60] sub_00728D60 (48 bytes)
extern "C" void __cdecl fn_00728D60(char* self) {
    if (self) {
        int v = *(int*)(self + 0x11c);
        if (v != 0x1770 && v != 0x16a8) {
            *(int*)(self + 0x11c) = 0x1770;
        }
    }
}

// [0x0072B180] sub_0072B180 (48 bytes)
// [0x0072B180] sub_0072B180 (48 bytes)
extern "C" __declspec(naked) void __fastcall fn_0072B180(void* self) {
    __asm {
        push esi
        mov esi, dword ptr [ecx]
        mov ecx, dword ptr [ecx + 4]
        xor eax, eax
        xor edx, edx
        test esi, esi
        setne dl
        add edx, 3
        sub ecx, 40h
        pop esi
        je short L_0072B1A3
        sub ecx, 40h
        jne short L_0072B1A8
        shl edx, 0Eh
        mov eax, edx
        ret
    L_0072B1A3:
        shl edx, 0Ch
        mov eax, edx
    L_0072B1A8:
        ret
    }
}

// [0x0072BC70] sub_0072BC70 (48 bytes)
extern "C" __declspec(naked) int __fastcall fn_0072BC70(void* self, int edx_unused, int idx) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        test eax, eax
        jl short L_zero
        cmp eax, dword ptr [ecx + 0x150]
        jge short L_zero
        mov ecx, dword ptr [ecx + 0x160]
        mov eax, dword ptr [ecx + 4*eax]
        ret 0x4
    L_zero:
        xor eax, eax
        ret 0x4
    }
}

// [0x0072B220] sub_0072B220 (48 bytes)
extern "C" void ext_006A5C62();
extern "C" __declspec(naked) void* __fastcall fn_0072B220(void* self) {
    __asm {
        push esi
        mov esi, ecx
        push 0xc
        call ext_006A5C62
        xor ecx, ecx
        add esp, 0x4
        cmp eax, ecx
        je alloc_null
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 0x4], ecx
        mov dword ptr [eax + 0x8], ecx
        mov dword ptr [esi], eax
        mov eax, esi
        pop esi
        ret
    alloc_null:
        xor eax, eax
        mov dword ptr [esi], eax
        mov eax, esi
        pop esi
        ret
    }
}

// [0x0072B250] sub_0072B250 (48 bytes)
extern "C" __declspec(naked) void __fastcall fn_0072B250(void* self) {
    __asm {
        push esi
        mov esi, dword ptr [ecx]
        test esi, esi
        je done
        mov eax, dword ptr [esi + 8]
        push eax
        call ext_006A5C5C
        push esi
        mov dword ptr [esi + 8], 0
        call ext_006A5C5C
        add esp, 8
    done:
        pop esi
        ret
    }
}

// [0x007266C0] sub_007266C0 (48 bytes)
extern "C" void ext_00789C80();
extern "C" __declspec(naked) void __fastcall fn_007266C0(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        mov ecx, dword ptr [ecx + 0x250]
        push 0
        push eax
        call ext_00789C80
        test eax, eax
        je short L_none
        mov ecx, eax
        call ext_006E7460
        ret 4
L_none:
        xor eax, eax
        ret 4
    }
}

// [0x0072DBB0] sub_0072DBB0 (48 bytes)
extern "C" void ext_00725A60();
extern "C" void ext_00725A90();
extern "C" __declspec(naked) int __fastcall fn_0072DBB0(void* self, int edx_unused) {
    __asm {
        mov eax, dword ptr [esp + 0xc]
        mov edx, dword ptr [esp + 0x8]
        mov ecx, dword ptr [ecx + 0xac]
        push eax
        mov eax, dword ptr [esp + 0x8]
        push edx
        push eax
        push 0x0
        add ecx, 0x4
        call ext_00725A60
        push eax
        call ext_00725A90
        add esp, 0x10
        ret 0xc
    }
}

// [0x007264F0] sub_007264F0 (48 bytes)
extern "C" void ext_007262E0();
extern "C" __declspec(naked) void* __fastcall fn_007264F0(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0xc]
        push esi
        mov esi, dword ptr [esp + 0xc]
        push 0xaacc5c
        push eax
        push esi
        mov dword ptr [esp + 0x10], 0
        call ext_007262E0
        mov eax, esi
        pop esi
        pop ecx
        ret 8
    }
}

// [0x00726520] sub_00726520 (48 bytes)
extern "C" __declspec(naked) void* __fastcall fn_00726520(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0xc]
        push esi
        mov esi, dword ptr [esp + 0xc]
        push 0xaacffc
        push eax
        push esi
        mov dword ptr [esp + 0x10], 0
        call ext_007262E0
        mov eax, esi
        pop esi
        pop ecx
        ret 8
    }
}

// [0x00728200] sub_00728200 (48 bytes)
extern "C" void ext_007281B0();
extern "C" __declspec(naked) void __fastcall fn_00728200(void* self) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        push esi
        mov esi, ecx
        push eax
        mov ecx, dword ptr [esp + 0xc]
        push ecx
        mov ecx, esi
        call ext_007281B0
        mov edx, dword ptr [esp + 0x14]
        mov eax, dword ptr [esp + 0x10]
        push edx
        push eax
        mov ecx, esi
        call ext_007281B0
        pop esi
        ret 0x10
    }
}

extern "C" void ext_00723A40();
extern "C" void ext_00725940();

// [0x00723920] sub_00723920 (48 bytes)
extern "C" __declspec(naked) bool __fastcall fn_00723920(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x10]
        test ecx, ecx
        je short L_skip
        mov eax, dword ptr [ecx]
        call dword ptr [eax + 0x2c]
        test al, al
        je short L_skip
        mov ecx, esi
        call ext_00725940
        mov ecx, dword ptr [esi + 0x10]
        mov edx, dword ptr [ecx]
        call dword ptr [edx + 0x10]
    L_skip:
        mov ecx, esi
        call ext_00723A40
        mov al, 1
        pop esi
        ret
    }
}

extern "C" void ext_0078ABA0();

// [0x007268D0] sub_007268D0 (48 bytes)
extern "C" __declspec(naked) void __fastcall fn_007268D0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x250]
        test ecx, ecx
        je L_7268f3
        call ext_006CD320
        test eax, eax
        je L_7268f3
        mov ecx, eax
        mov dword ptr [esi + 0x250], eax
        call ext_0078ABA0
    L_7268f3:
        pop esi
        ret
    }
}

// [0x00728230] sub_00728230 (48 bytes)
extern "C" void ext_00728260();
extern "C" void ext_00728370();
extern "C" __declspec(naked) void __fastcall fn_00728230(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push esi
        mov esi, ecx
        push edi
        mov al, byte ptr [esi + 0x15]
        test al, al
        je L_728256
        mov edi, dword ptr [esp + 0x10]
        push edi
        call ext_00728260
        test al, al
        je L_728256
        mov eax, dword ptr [esp + 0xc]
        push edi
        push eax
        mov ecx, esi
        call ext_00728370
    L_728256:
        pop edi
        pop esi
        ret 8
    }
}

// [0x00728D90] sub_00728D90 (48 bytes)
extern "C" void ext_006FC700();
extern "C" void ext_0078CC10();
extern "C" int mem_00B60018;
extern "C" __declspec(naked) void __cdecl fn_00728D90() {
    __asm {
        mov eax, dword ptr [mem_00B60018]
        test eax, eax
        jne short L_skip_00728DA3
        call ext_006FC700
        call ext_0078CC10
    L_skip_00728DA3:
        mov eax, dword ptr [mem_00B60018]
        inc eax
        mov dword ptr [mem_00B60018], eax
        mov al, 1
        ret
    }
}

// [0x0072A720] sub_0072A720 (48 bytes)
extern "C" void ext_006D36F0();
extern "C" void ext_006FE020();
extern "C" void ext_0070E3B0();
extern "C" __declspec(naked) void __fastcall fn_0072A720(void* self) {
    __asm {
        mov ecx, dword ptr [ecx]
        push esi
        push edi
        call ext_006D36F0
        mov edi, dword ptr [esp + 0xc]
        mov esi, eax
        push edi
        mov ecx, esi
        call ext_006FE020
        push edi
        mov ecx, esi
        call ext_0070E3B0
        mov eax, esi
        pop edi
        pop esi
        ret 0x4
    }
}

// [0x00722660] sub_00722660 (64 bytes)
extern "C" int mem_009334D8;  /* double 100 */
extern "C" int mem_009939D8;  /* float 89128.96 / u32 0x47AE147B */
extern "C" int mem_00993828;  /* double 0.5 */

extern "C" __declspec(naked) void __cdecl fn_00722660(void) {
    __asm {
        fld     qword ptr [mem_009334D8]
        fsub    qword ptr [esp + 4]
        fmul    qword ptr [mem_009939D8]
        fmul    qword ptr [esp + 0x14]
        fld     qword ptr [esp + 4]
        fadd    qword ptr [mem_009334D8]
        fmul    qword ptr [mem_009939D8]
        fmul    qword ptr [esp + 0xc]
        faddp   st(1), st
        fmul    qword ptr [mem_00993828]
        ret
    }
}

// [0x00725300] sub_00725300 (64 bytes)
extern "C" __declspec(naked) int __fastcall fn_00725300(void* self, int edx_unused, int a1) {
    __asm {
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov ecx, dword ptr [esi + 0x10]
        mov eax, dword ptr [ecx]
        call dword ptr [eax + 0x24]
        mov ecx, dword ptr [esi + 0x10]
        mov edi, eax
        mov eax, dword ptr [esp + 0x10]
        push 0x10
        mov edx, dword ptr [ecx]
        push eax
        call dword ptr [edx + 0x14]
        mov ecx, dword ptr [esi + 0x10]
        push edi
        mov ebx, eax
        mov edx, dword ptr [ecx]
        call dword ptr [edx + 0x28]
        pop edi
        mov eax, ebx
        pop esi
        pop ebx
        ret 0x4
    }
}

// [0x00728370] sub_00728370 (64 bytes)
extern "C" void ext_006E7410();

extern "C" __declspec(naked) bool __fastcall fn_00728370(void* self, int edx_unused, int arg1, int arg2) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        test eax, eax
        jne short L_nonzero
        push 0xaad070
        push 0xa
        add ecx, 0xef0
        call ext_006E7410
        xor al, al
        ret 0x8
    L_nonzero:
        mov dl, byte ptr [ecx + 0x15]
        test dl, dl
        je short L_done
        mov ecx, dword ptr [ecx + 0x10]
        push esi
        mov esi, dword ptr [esp + 0xc]
        mov edx, dword ptr [ecx]
        push esi
        push eax
        call dword ptr [edx + 0x1c]
        pop esi
    L_done:
        mov al, 0x1
        ret 0x8
    }
}

// [0x007299C0] sub_007299C0 (64 bytes)
extern "C" void ext_006D23F0();

extern "C" __declspec(naked) void __stdcall fn_007299C0(void* self) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0x8]
        push edi
        mov edi, dword ptr [ebx + 0x28]
        test edi, edi
        jle done
        push esi
        xor esi, esi
loop_top:
        mov ecx, dword ptr [ebx + 0x38]
        push 0x3
        add ecx, esi
        call ext_006D23F0
        mov dword ptr [eax], 0x0
        add esi, 0x20
        dec edi
        mov dword ptr [eax + 0x4], 0x3ff00000
        jne loop_top
        pop esi
done:
        pop edi
        pop ebx
        ret 0x4
    }
}

// [0x00726980] sub_00726980 (64 bytes)
extern "C" __declspec(naked) void __fastcall fn_00726980(void* self) {
    __asm {
        mov ecx, [ecx+0x250]
        push esi
        call ext_00789BB0
        mov esi, eax
        test esi, esi
        je fail
        mov ecx, esi
        call ext_0078CBE0
        test eax, eax
        je fail
        mov ecx, esi
        call ext_0078CBE0
        mov eax, [eax+0x1c]
        mov ecx, esi
        push eax
        call ext_0078CBE0
        mov ecx, eax
        call ext_0078C410
        pop esi
        ret
fail:
        mov al, 0x53
        pop esi
        ret
    }
}

// [0x007269C0] sub_007269C0 (64 bytes)
extern "C" int ext_00789BB0();
extern "C" int ext_0078CBE0();
extern "C" int ext_0078C440();

extern "C" __declspec(naked) int __fastcall fn_007269C0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x250]
        call ext_00789BB0
        test eax, eax
        je fail
        mov ecx, eax
        call ext_0078CBE0
        test eax, eax
        je fail
        mov ecx, dword ptr [eax + 0x1c]
        inc ecx
        mov dword ptr [eax + 0x1c], ecx
        mov dl, byte ptr [esi + 0x16]
        dec ecx
        push edx
        push ecx
        mov ecx, eax
        call ext_0078C440
        pop esi
        ret
    fail:
        xor al, al
        pop esi
        ret
    }
}

// [0x00726900] sub_00726900 (64 bytes)
extern "C" int ext_00789BB0();
extern "C" int ext_0078CBE0();
extern "C" int ext_0078C3A0();

extern "C" __declspec(naked) int __fastcall fn_00726900(void* self) {
    __asm {
        mov     ecx, dword ptr [ecx + 0x250]
        push    esi
        call    ext_00789BB0
        mov     esi, eax
        test    esi, esi
        je      short ret_zero
        mov     ecx, esi
        call    ext_0078CBE0
        test    eax, eax
        je      short ret_zero
        mov     ecx, esi
        call    ext_0078CBE0
        mov     ecx, eax
        call    ext_0078C3A0
        pop     esi
        ret
ret_zero:
        xor     eax, eax
        pop     esi
        ret
    }
}

// [0x0072AE30] sub_0072AE30 (64 bytes)
extern "C" void ext_0078D4B0();
extern "C" void ext_0078D550();

extern "C" __declspec(naked) void __stdcall fn_0072AE30(void* self) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0x8]
        push esi
        push edi
        push 0x1
        mov ecx, ebx
        call ext_0078D4B0
        mov edi, eax
        xor esi, esi
        test edi, edi
        jle short L_done
L_loop:
        push 0x1
        push esi
        push 0x1
        mov ecx, ebx
        call ext_0078D550
        inc esi
        cmp esi, edi
        _emit 0xdd
        _emit 0xd8
        jl short L_loop
L_done:
        pop edi
        pop esi
        pop ebx
        ret 0x4
    }
}

// [0x00726A00] sub_00726A00 (64 bytes)
extern "C" void ext_00726770();
extern "C" void ext_00726840();
extern "C" void ext_007269C0();

extern "C" __declspec(naked) unsigned char __fastcall fn_00726A00(void* self, int edx_unused, int a1, unsigned char a2) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        mov esi, ecx
        push eax
        call ext_00726770
        test al, al
        je short L_false
        push ebx
        mov ecx, esi
        call ext_007269C0
        mov ecx, esi
        mov bl, al
        call ext_00726840
        mov al, bl
        pop ebx
        pop esi
        ret 0x8
L_false:
        mov al, byte ptr [esp + 0xc]
        pop esi
        ret 0x8
    }
}

// [0x00726B40] sub_00726B40 (64 bytes)
extern "C" void ext_00726770();
extern "C" void ext_00726840();
extern "C" void ext_00726AE0();
extern "C" __declspec(naked) int __fastcall fn_00726B40(void* self, int edx_unused, int a1, int a2) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        mov esi, ecx
        push eax
        call ext_00726770
        test al, al
        je short L_ret_a2
        push edi
        mov ecx, esi
        call ext_00726AE0
        mov ecx, esi
        mov edi, eax
        call ext_00726840
        mov eax, edi
        pop edi
        pop esi
        ret 0x8
L_ret_a2:
        mov eax, dword ptr [esp + 0xc]
        pop esi
        ret 0x8
    }
}

// [0x00726C20] sub_00726C20 (64 bytes)
extern "C" void ext_00726770();
extern "C" void ext_00726840();
extern "C" void ext_00726BE0();

extern "C" __declspec(naked) void __fastcall fn_00726C20(void* self) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        mov esi, ecx
        push eax
        call ext_00726770
        test al, al
        je short L_zero
        mov ecx, esi
        call ext_00726BE0
        fstp qword ptr [esp + 0xc]
        mov ecx, esi
        call ext_00726840
        fld qword ptr [esp + 0xc]
        pop esi
        ret 0xc
L_zero:
        fld qword ptr [esp + 0xc]
        pop esi
        ret 0xc
    }
}

// [0x00726BE0] sub_00726BE0 (64 bytes)
extern "C" __declspec(naked) void __fastcall fn_00726BE0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x250]
        call ext_00789BB0
        test eax, eax
        je short L_fail
        mov ecx, eax
        call ext_0078CBE0
        test eax, eax
        je short L_fail
        mov ecx, dword ptr [eax + 0x1c]
        inc ecx
        mov dword ptr [eax + 0x1c], ecx
        mov dl, byte ptr [esi + 0x16]
        dec ecx
        push edx
        push ecx
        mov ecx, eax
        call ext_0078C6F0
        pop esi
        ret
L_fail:
        fld qword ptr [mem_0092A278]
        pop esi
        ret
    }
}

// [0x00726AA0] sub_00726AA0 (64 bytes)
extern "C" void ext_00726770();
extern "C" void ext_00726840();
extern "C" void ext_00726A40();
extern "C" __declspec(naked) int __fastcall fn_00726AA0(void* self, int edx_unused, int a1, int a2) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        mov esi, ecx
        push eax
        call ext_00726770
        test al, al
        je short L_00726AC9
        push edi
        mov ecx, esi
        call ext_00726A40
        mov ecx, esi
        mov edi, eax
        call ext_00726840
        mov eax, edi
        pop edi
        pop esi
        ret 0x8
L_00726AC9:
        mov eax, dword ptr [esp + 0xc]
        pop esi
        ret 0x8
    }
}

// [0x0072C820] sub_0072C820 (80 bytes)
extern "C" __declspec(naked) void __cdecl fn_0072C820(unsigned char* src, unsigned char* dst, int len, int count) {
    __asm {
        mov eax, dword ptr [esp + 0x10]
        xor edx, edx
        test eax, eax
        jbe L_ret
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 0x10]
        push esi
        push edi
        mov edi, dword ptr [esp + 0x1c]
        and edi, 0xffff
        mov dword ptr [esp + 0x20], eax
L_outer:
        test edi, edi
        jbe L_skip
        mov ecx, dword ptr [esp + 0x14]
        lea eax, [edx + ebp]
        sub ecx, ebp
        mov esi, edi
L_inner:
        mov bl, byte ptr [ecx + eax]
        mov byte ptr [eax], bl
        inc eax
        dec esi
        jne L_inner
L_skip:
        mov eax, dword ptr [esp + 0x20]
        add edx, edi
        dec eax
        mov dword ptr [esp + 0x20], eax
        jne L_outer
        pop edi
        pop esi
        pop ebp
        pop ebx
L_ret:
        ret
    }
}

// [0x00724E30] sub_00724E30 (80 bytes)
extern "C" __declspec(naked) void __fastcall fn_00724E30(void* self, int edx_unused, void* out_ret) {
    __asm {
        mov ecx, dword ptr [ecx + 0x10]
        sub esp, 0xa0
        __asm _emit 0x8d __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x00
        mov eax, dword ptr [ecx]
        push 0xa0
        push edx
        call dword ptr [eax + 0x14]
        mov eax, dword ptr [esp + 0xa4]
        mov ecx, dword ptr [esp + 0x26]
        mov edx, dword ptr [esp + 0x2a]
        mov dword ptr [eax], ecx
        mov ecx, dword ptr [esp + 0x2e]
        mov dword ptr [eax + 0x4], edx
        mov edx, dword ptr [esp + 0x32]
        mov dword ptr [eax + 0x8], ecx
        mov dword ptr [eax + 0xc], edx
        add esp, 0xa0
        ret 0x4
        __asm _emit 0x90 __asm _emit 0x90 __asm _emit 0x90 __asm _emit 0x90 __asm _emit 0x90 __asm _emit 0x90 __asm _emit 0x90 __asm _emit 0x90 __asm _emit 0x90 __asm _emit 0x90 __asm _emit 0x90 __asm _emit 0x90 __asm _emit 0x90
    }
}

// [0x0072DA80] sub_0072DA80 (80 bytes)
extern "C" void ext_006B9D70();
extern "C" __declspec(naked) void __fastcall fn_0072DA80(void* self) {
    __asm {
        push -1
        push 0x8bdf0b
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        lea ecx, [esi + 0x50]
        mov dword ptr [esp + 0x10], 0
        call ext_006B9D70
        lea ecx, [esi + 0x4]
        mov dword ptr [esp + 0x10], -1
        call ext_006B9D70
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x0072B130] sub_0072B130 (80 bytes)
extern "C" void ext_006B9960();
extern "C" __declspec(naked) void __fastcall fn_0072B130(void* self) {
    __asm {
        push esi
        mov esi, ecx
        call ext_006B9960
        lea ecx, [esi + 0x4c]
        call ext_006B9960
        lea ecx, [esi + 0x98]
        call ext_006B9960
        lea ecx, [esi + 0xe4]
        call ext_006B9960
        lea ecx, [esi + 0x130]
        call ext_006B9960
        lea ecx, [esi + 0x17c]
        call ext_006B9960
        mov dword ptr [esi + 0x1c8], 0
        pop esi
        ret
    }
}

// [0x0072C060] sub_0072C060 (80 bytes)
extern "C" void ext_006B9D70();
extern "C" void ext_006B9E60();

extern "C" __declspec(naked) void __fastcall fn_0072C060(void* self, int edx_unused) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 8bdc58h
        push eax
        mov dword ptr fs:[0], esp
        lea eax, [esp + 10h]
        add ecx, 18h
        push eax
        mov dword ptr [esp + 0ch], 0
        call ext_006B9E60
        lea ecx, [esp + 10h]
        mov dword ptr [esp + 8], -1
        call ext_006B9D70
        __asm _emit 0x8B __asm _emit 0x4C __asm _emit 0x24 __asm _emit 0x00 // mov ecx, dword ptr [esp + 0]
        mov dword ptr fs:[0], ecx
        add esp, 0ch
        ret 4ch
    }
}

// [0x007257F0] sub_007257F0 (80 bytes)
extern "C" void ext_00725840();
extern "C" void ext_00725BE0();

extern "C" __declspec(naked) void __fastcall fn_007257F0(void* self) {
    __asm {
        sub esp, 0x10
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x00
        push esi
        __asm _emit 0x8b
        __asm _emit 0xf1
        push eax
        call ext_00725BE0
        mov ecx, dword ptr [esi + 0x10]
        lea eax, [esp + 0x4]
        push 0x10
        push eax
        mov edx, dword ptr [ecx]
        call dword ptr [edx + 0x1c]
        mov eax, dword ptr [esi + 0x1c4]
        xor ecx, ecx
        test eax, eax
        jle short L_skip
        mov ecx, dword ptr [esi + 0x1a4]
        mov ecx, dword ptr [ecx + 4*eax]
L_skip:
        mov edx, dword ptr [esi + 0x1bc]
        mov eax, dword ptr [edx + 4*eax]
        push eax
        push ecx
        __asm _emit 0x8b
        __asm _emit 0xce
        call ext_00725840
        pop esi
        add esp, 0x10
        ret
    }
}

// [0x00726C60] sub_00726C60 (80 bytes)
extern "C" void ext_00726770();
extern "C" void ext_00726840();
extern "C" void ext_00726CB0();
extern "C" __declspec(naked) void __fastcall fn_00726C60(void* self, int edx_unused, int* out, int arg) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        sub esp, 0x8
        push ebx
        push esi
        push edi
        mov esi, ecx
        push eax
        xor edi, edi
        xor ebx, ebx
        call ext_00726770
        test al, al
        je short L_done_00726C60
        lea ecx, [esp + 0xc]
        push ecx
        mov ecx, esi
        call ext_00726CB0
        mov edi, dword ptr [eax]
        mov ebx, dword ptr [eax + 0x4]
        mov ecx, esi
        call ext_00726840
L_done_00726C60:
        mov eax, dword ptr [esp + 0x18]
        mov dword ptr [eax], edi
        pop edi
        mov dword ptr [eax + 0x4], ebx
        pop esi
        pop ebx
        add esp, 0x8
        ret 0x8
    }
}

// [0x007281B0] sub_007281B0 (80 bytes)
extern "C" void ext_006DADE0();
extern "C" void ext_00725A60();
extern "C" void ext_00727E30();
extern "C" void ext_00727FE0();

extern "C" __declspec(naked) void __fastcall fn_007281B0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x1c4]
        push eax
        call ext_00725A60
        cmp eax, 0x7d1
        jl short L_small
        mov eax, dword ptr [esp + 0xc]
        mov ecx, dword ptr [esp + 0x8]
        push eax
        push ecx
        mov ecx, esi
        call ext_00727E30
        pop esi
        ret 0x8
L_small:
        lea ecx, [esp + 0x8]
        call ext_006DADE0
        sub esp, 0x8
        mov ecx, esi
        fstp qword ptr [esp]
        call ext_00727FE0
        pop esi
        ret 0x8
    }
}

// [0x00728570] sub_00728570 (96 bytes)
extern "C" void ext_006E7460();
extern "C" __declspec(naked) void __fastcall fn_00728570(void* self) {
    __asm {
        push esi
        mov esi, ecx
        push edi
        lea ecx, [esi + 0xef0]
        call ext_006E7460
        cmp eax, -1
        jg short L_end
        mov ecx, dword ptr [esi + 0x10]
        test ecx, ecx
        je short L_end
        mov eax, dword ptr [ecx]
        call dword ptr [eax + 0x2c]
        test al, al
        je short L_end
        mov al, byte ptr [esi + 0x15]
        test al, al
        jne short L_end
        mov eax, dword ptr [esi + 0xee4]
        xor edi, edi
        test eax, eax
        jle short L_end
L_loop:
        mov eax, dword ptr [esi + 0x10]
        push 0xaad0b8
        push eax
        mov ecx, dword ptr [eax]
        call dword ptr [ecx + 0x3c]
        mov eax, dword ptr [esi + 0xee4]
        add esp, 8
        inc edi
        cmp edi, eax
        jl short L_loop
L_end:
        pop edi
        pop esi
        ret
    }
}

// [0x0072BF70] sub_0072BF70 (96 bytes)
extern "C" __declspec(naked) void __fastcall fn_0072BF70(void* self) {
    __asm {
        push -1
        push 0x8bdc3b
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        mov eax, dword ptr [esi + 0x10]
        mov dword ptr [esp + 0x10], 0
        test eax, eax
        je short L_skip
        push eax
        call ext_006A5C5C
        add esp, 0x4
L_skip:
        lea ecx, [esi + 0x18]
        mov byte ptr [esi + 0x64], 0
        mov dword ptr [esp + 0x10], 0xffffffff
        call ext_006B9D70
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x0072C0B0] sub_0072C0B0 (96 bytes)
extern "C" __declspec(naked) void __fastcall fn_0072C0B0(void* self, int edx_unused, int arg) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8b8fbb
        push eax
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr fs:[0x0], esp
        push esi
        mov esi, ecx
        push 0x14
        mov dword ptr [esi + 0x4], eax
        call ext_006A5C62
        add esp, 0x4
        mov dword ptr [esp + 0x14], eax
        test eax, eax
        mov dword ptr [esp + 0xc], 0x0
        je short L_null
        push 0x14
        mov ecx, eax
        call ext_00782D00
        jmp short L_store
L_null:
        xor eax, eax
L_store:
        mov ecx, dword ptr [esp + 0x4]
        mov dword ptr [esi], eax
        mov eax, esi
        mov dword ptr fs:[0x0], ecx
        pop esi
        add esp, 0xc
        ret 0x4
    }
}

// [0x00724610] sub_00724610 (96 bytes)
extern "C" __declspec(naked) void __fastcall fn_00724610(void* self) {
    __asm {
        push ecx
        push ebx
        push esi
        mov esi, ecx
        push edi
        lea edi, [esi + 0x194]
        mov ecx, edi
        call ext_006D2250
        lea ebx, [esi + 0x1ac]
        mov ecx, ebx
        call ext_006D2250
        mov ecx, dword ptr [esi + 0x10]
        mov eax, dword ptr [ecx]
        call dword ptr [eax + 0x24]
        mov edx, dword ptr [edi]
        lea ecx, [esp + 0xc]
        push ecx
        push edx
        mov ecx, edi
        mov dword ptr [esp + 0x14], eax
        call ext_006D2170
        mov edx, dword ptr [ebx]
        mov eax, dword ptr [esi + 0x4]
        lea ecx, [esp + 0xc]
        mov dword ptr [esp + 0xc], eax
        push ecx
        push edx
        mov ecx, ebx
        call ext_006D2170
        pop edi
        pop esi
        mov al, 0x1
        pop ebx
        pop ecx
        ret
    }
}

// [0x007283B0] sub_007283B0 (96 bytes)
extern "C" __declspec(naked) void __fastcall fn_007283B0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        push edi
        lea edi, [esi + 0xef0]
        mov ecx, edi
        call ext_006E7460
        cmp eax, -1
        jg short L_ret
        mov ecx, dword ptr [esi + 0x10]
        mov eax, dword ptr [ecx]
        call dword ptr [eax + 0x2c]
        test al, al
        je short L_ret
        mov al, byte ptr [esi + 0x15]
        test al, al
        jne short L_skip
        mov eax, dword ptr [esi + 0x10]
        push 0xaad034
        push eax
        mov ecx, dword ptr [eax]
        call dword ptr [ecx + 0x3c]
        add esp, 8
L_skip:
        mov ecx, dword ptr [esi + 0x10]
        mov dword ptr [esi + 0x25c], 0
        mov edx, dword ptr [ecx]
        call dword ptr [edx + 0x30]
        test eax, eax
        je short L_ret
        push 0xb
        mov ecx, edi
        call ext_006E7440
L_ret:
        pop edi
        pop esi
        ret
    }
}

// [0x00726AE0] sub_00726AE0 (96 bytes)
extern "C" void ext_0078C690();

extern "C" __declspec(naked) int __fastcall fn_00726AE0(void* self) {
    __asm {
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr [edi + 0x250]
        call ext_00789BB0
        mov esi, eax
        test esi, esi
        je short L_fail
        mov ecx, esi
        call ext_0078CBE0
        test eax, eax
        je short L_fail
        mov ecx, esi
        call ext_0078CBE0
        mov ecx, dword ptr [eax + 0x1c]
        inc ecx
        mov dword ptr [eax + 0x1c], ecx
        mov ecx, esi
        call ext_0078CBE0
        mov eax, dword ptr [eax + 0x1c]
        mov cl, byte ptr [edi + 0x16]
        dec eax
        push ecx
        push eax
        mov ecx, esi
        call ext_0078CBE0
        mov ecx, eax
        call ext_0078C690
        pop edi
        pop esi
        ret
    L_fail:
        pop edi
        xor eax, eax
        pop esi
        ret
    }
}

// [0x00729A00] sub_00729A00 (96 bytes)
extern "C" void ext_006B99C0();
extern "C" void ext_006D23F0();
extern "C" void ext_006FDF30();
extern "C" void ext_006FDF90();

extern "C" __declspec(naked) void __fastcall fn_00729A00(void* self, int edx_unused, int arg) {
    __asm {
        push ebx
        push esi
        mov esi, dword ptr [esp + 0xc]
        push edi
        push 0x1
        mov ecx, esi
        call ext_006FDF30
        test eax, eax
        jle short L_end
        push 0x1
        push 0x0
        mov ecx, esi
        call ext_006FDF90
        mov ecx, eax
        call ext_006B99C0
        mov edi, eax
        add edi, 0x8
        mov ebx, dword ptr [edi]
        test ebx, ebx
        jle short L_end
        xor esi, esi
L_loop:
        mov ecx, dword ptr [edi + 0x10]
        push 0x3
        add ecx, esi
        call ext_006D23F0
        mov dword ptr [eax], 0x0
        add esi, 0x20
        dec ebx
        mov dword ptr [eax + 0x4], 0x3ff00000
        jne short L_loop
L_end:
        pop edi
        pop esi
        pop ebx
        ret 0x4
    }
}

// [0x00726770] sub_00726770 (96 bytes)
extern "C" void ext_00732CB0();
extern "C" void ext_00789C80();
extern "C" void ext_00789BA0();
extern "C" __declspec(naked) int __fastcall fn_00726770(void* self, int edx_unused, int arg) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        mov esi, ecx
        push edi
        call ext_00732CB0
        mov ecx, dword ptr [esi + 0x250]
        lea eax, [esp + 0xc]
        push eax
        push edi
        call ext_00789C80
        mov edi, eax
        test edi, edi
        je short L_fail_726770
        mov ecx, dword ptr [esp + 0xc]
        push ecx
        mov ecx, dword ptr [esi + 0x250]
        call ext_00789BA0
        mov ecx, edi
        call ext_0078CBE0
        test eax, eax
        je short L_fail_726770
        mov ecx, edi
        call ext_0078CBE0
        mov dword ptr [eax + 0x1c], 0
        pop edi
        mov al, 1
        pop esi
        ret 0x4
    L_fail_726770:
        pop edi
        xor al, al
        pop esi
        ret 0x4
    }
}

// [0x0072CB90] sub_0072CB90 (96 bytes)
extern "C" void ext_0072CBF0();

extern "C" __declspec(naked) void __fastcall fn_0072CB90(void* self) {
    __asm {
        push -1
        push 0x008b8fdb
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push 0x1d0
        call ext_006A5C62
        add esp, 4
        __asm _emit 0x89 __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x00
        test eax, eax
        mov dword ptr [esp + 0xc], 0
        je short L_null
        mov ecx, eax
        call ext_0072CBF0
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

// [0x00726A40] sub_00726A40 (96 bytes)
extern "C" void ext_0078C490();
extern "C" __declspec(naked) void __fastcall fn_00726A40(void* self) {
    __asm {
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr [edi + 0x250]
        call ext_00789BB0
        mov esi, eax
        test esi, esi
        je short L_fail
        mov ecx, esi
        call ext_0078CBE0
        test eax, eax
        je short L_fail
        mov ecx, esi
        call ext_0078CBE0
        mov ecx, dword ptr [eax + 0x1c]
        inc ecx
        mov dword ptr [eax + 0x1c], ecx
        mov ecx, esi
        call ext_0078CBE0
        mov eax, dword ptr [eax + 0x1c]
        mov cl, byte ptr [edi + 0x16]
        dec eax
        push ecx
        push eax
        mov ecx, esi
        call ext_0078CBE0
        mov ecx, eax
        call ext_0078C490
        pop edi
        pop esi
        ret
    L_fail:
        pop edi
        mov eax, offset mem_00B5D2C0
        pop esi
        ret
    }
}

// [0x00725440] sub_00725440 (96 bytes)
extern "C" void ext_006B9EC0();
extern "C" void ext_00726770();
extern "C" void ext_00726840();
extern "C" void ext_00726A40();
extern "C" __declspec(naked) void __fastcall fn_00725440(void* self) {
    __asm {
        push esi
        mov esi, ecx
        push 0xaacf70
        call ext_00726770
        test al, al
        jne short L_slow
        push 0xaacf68
        mov ecx, esi
        call ext_00726770
        test al, al
        jne short L_slow
        push 0xb5d2c0
        lea ecx, [esi + 0x1ec]
        call ext_006B9EC0
        mov byte ptr [esi + 0x1e8], 0x0
        pop esi
        ret
    L_slow:
        mov ecx, esi
        call ext_00726A40
        push eax
        lea ecx, [esi + 0x1ec]
        call ext_006B9EC0
        mov ecx, esi
        call ext_00726840
        mov byte ptr [esi + 0x1e8], 0x1
        pop esi
        ret
    }
}

// [0x00726B80] sub_00726B80 (96 bytes)
extern "C" void ext_0078C830();
extern "C" __declspec(naked) void __fastcall fn_00726B80(void* self) {
    __asm {
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr [edi + 0x250]
        call ext_00789BB0
        mov esi, eax
        test esi, esi
        je short L_fail
        mov ecx, esi
        call ext_0078CBE0
        test eax, eax
        je short L_fail
        mov ecx, esi
        call ext_0078CBE0
        mov ecx, dword ptr [eax + 0x1c]
        inc ecx
        mov dword ptr [eax + 0x1c], ecx
        mov ecx, esi
        call ext_0078CBE0
        mov eax, dword ptr [eax + 0x1c]
        mov cl, byte ptr [edi + 0x16]
        dec eax
        push ecx
        push eax
        mov ecx, esi
        call ext_0078CBE0
        mov ecx, eax
        call ext_0078C830
        pop edi
        pop esi
        ret
    L_fail:
        pop edi
        xor eax, eax
        xor edx, edx
        pop esi
        ret
    }
}

// [0x0072FD70] sub_0072FD70 (96 bytes)
extern "C" int mem_008BDC58;
extern "C" void ext_006E7460();
extern "C" void ext_007279A0();
extern "C" void ext_006B9D70();

extern "C" __declspec(naked) void __fastcall fn_0072FD70(void* self, int edx_unused, int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push offset mem_008BDC58
        push eax
        mov dword ptr fs:[0x0], esp
        push esi
        mov esi, ecx
        lea ecx, [esp + 0x14]
        mov dword ptr [esp + 0xc], 0
        call ext_006E7460
        push eax
        mov ecx, esi
        call ext_007279A0
        lea ecx, [esp + 0x14]
        mov dword ptr [esp + 0xc], -1
        call ext_006B9D70
        mov ecx, dword ptr [esp + 0x4]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret 0x4c
    }
}

// [0x00725AE0] sub_00725AE0 (112 bytes)
extern "C" void ext_006B9D80();
extern "C" int mem_00925218;
extern "C" __declspec(naked) void __fastcall fn_00725AE0(void* self, int edx_unused, void* arg) {
    __asm {
        sub esp, 0x1c
        mov eax, dword ptr [ecx + 0x1e4]
        mov edx, dword ptr [ecx + 0x1e0]
        push esi
        push eax
        mov eax, dword ptr [ecx + 0x1dc]
        push edx
        mov edx, dword ptr [ecx + 0x1d8]
        push eax
        mov eax, dword ptr [ecx + 0x1d4]
        push edx
        mov edx, dword ptr [ecx + 0x1d0]
        push eax
        mov eax, dword ptr [ecx + 0x1cc]
        push edx
        push eax
        lea ecx, [esp + 0x24]
        push 0xaacf78
        push ecx
        mov dword ptr [esp + 0x28], 0x0
        call dword ptr [mem_00925218]
        mov esi, dword ptr [esp + 0x48]
        add esp, 0x24
        lea edx, [esp + 0x8]
        mov ecx, esi
        push edx
        call ext_006B9D80
        mov eax, esi
        pop esi
        add esp, 0x1c
        ret 0x4
    }
}

// [0x00726E20] sub_00726E20 (112 bytes)
extern "C" void ext_0078C8C0();
extern "C" __declspec(naked) int __fastcall fn_00726E20(void* self, int edx_unused, int* out) {
    __asm {
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr [edi + 0x250]
        call ext_00789BB0
        mov ebx, dword ptr [esp + 0x14]
        mov esi, eax
        xor ebp, ebp
        test esi, esi
        mov dword ptr [ebx], ebp
        je short L_ret0
        mov ecx, esi
        call ext_0078CBE0
        test eax, eax
        je short L_ret0
        mov ecx, esi
        call ext_0078CBE0
        mov ecx, dword ptr [eax + 0x1c]
        inc ecx
        mov dword ptr [eax + 0x1c], ecx
        mov ecx, esi
        call ext_0078CBE0
        mov eax, dword ptr [eax + 0x1c]
        mov cl, byte ptr [edi + 0x16]
        push ebx
        dec eax
        push ecx
        push eax
        mov ecx, esi
        call ext_0078CBE0
        mov ecx, eax
        call ext_0078C8C0
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x4
    L_ret0:
        pop edi
        mov eax, ebp
        pop esi
        pop ebp
        pop ebx
        ret 0x4
    }
}

// [0x00726DB0] sub_00726DB0 (112 bytes)
extern "C" void ext_00726770();
extern "C" void ext_00726840();
extern "C" void ext_00726BE0();
extern "C" __declspec(naked) void __fastcall fn_00726DB0(void* self, int edx_unused, int a1, int a2, int a3, int a4) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push ebx
        push esi
        mov ebx, ecx
        push eax
        call ext_00726770
        test al, al
        je L_else
        push edi
        mov edi, dword ptr [esp + 0x1c]
        test edi, edi
        jbe L_end1
        mov esi, dword ptr [esp + 0x14]
    L_loop:
        mov ecx, ebx
        call ext_00726BE0
        fstp qword ptr [esi]
        add esi, 0x8
        dec edi
        jne L_loop
    L_end1:
        mov ecx, ebx
        call ext_00726840
        pop edi
        pop esi
        pop ebx
        ret 0x10
    L_else:
        mov ecx, dword ptr [esp + 0x14]
        test ecx, ecx
        je L_ret
        mov edx, dword ptr [esp + 0x18]
        test edx, edx
        jbe L_ret
        mov eax, dword ptr [esp + 0x10]
        sub ecx, eax
    L_copy:
        mov esi, dword ptr [ecx + eax]
        mov dword ptr [eax], esi
        mov esi, dword ptr [ecx + eax + 0x4]
        mov dword ptr [eax + 0x4], esi
        add eax, 0x8
        dec edx
        jne L_copy
    L_ret:
        pop esi
        pop ebx
        ret 0x10
    }
}

// [0x00723B30] sub_00723B30 (112 bytes)
extern "C" void ext_00723920();
extern "C" void ext_006A5C62();
extern "C" void ext_00789260();
extern "C" __declspec(naked) void __fastcall fn_00723B30(void* self) {
    __asm {
        push -1
        push 0x8b8fdb
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        call ext_00723920
        push 0x18
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp + 4], eax
        test eax, eax
        mov dword ptr [esp + 0x10], 0
        je short L_null
        push 1
        push 0
        push 0
        push 0
        mov ecx, eax
        call ext_00789260
        jmp short L_store
    L_null:
        xor eax, eax
    L_store:
        mov ecx, dword ptr [esp + 0x8]
        mov dword ptr [esi + 0xc], eax
        mov dword ptr [esi + 0x10], eax
        mov byte ptr [esi + 0xf48], 0
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00724BF0] sub_00724BF0 (112 bytes)
extern "C" void ext_006B9D70();
extern "C" void ext_006E7460();
extern "C" void ext_007275F0();
extern "C" void ext_007279A0();
extern "C" void ext_007283B0();

extern "C" __declspec(naked) void __fastcall fn_00724BF0(void* self, int edx_unused, int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7, int arg8, int arg9, int arg10, int arg11, int arg12, int arg13, int arg14, int arg15, int arg16, int arg17, int arg18, int arg19, int arg20) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8c1b08
        push eax
        mov dword ptr fs:[0x0], esp
        push esi
        push edi
        mov esi, ecx
        lea ecx, [esp + 0x1c]
        mov dword ptr [esp + 0x10], 0x0
        call ext_006E7460
        mov edi, eax
        mov eax, dword ptr [esp + 0x18]
        push eax
        mov ecx, esi
        call ext_007275F0
        push edi
        mov ecx, esi
        call ext_007279A0
        mov ecx, esi
        call ext_007283B0
        lea ecx, [esp + 0x1c]
        mov dword ptr [esp + 0x10], 0xffffffff
        call ext_006B9D70
        mov ecx, dword ptr [esp + 0x8]
        pop edi
        mov dword ptr fs:[0x0], ecx
        pop esi
        add esp, 0xc
        ret 0x50
    }
}

// [0x007267D0] sub_007267D0 (112 bytes)
extern "C" void ext_00732CB0();
extern "C" void ext_00789BA0();
extern "C" void ext_00789C80();
extern "C" void ext_006E7460();
extern "C" void ext_0078CBC0();
extern "C" __declspec(naked) int __fastcall fn_007267D0(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        push edi
        mov edi, ecx
        push esi
        call ext_00732CB0
        mov ecx, dword ptr [edi + 0x250]
        lea eax, [esp + 0xc]
        push eax
        push esi
        call ext_00789C80
        mov esi, eax
        test esi, esi
        je short L_fail
        mov ecx, dword ptr [esp + 0xc]
        push ecx
        mov ecx, dword ptr [edi + 0x250]
        call ext_00789BA0
        mov ecx, esi
        call ext_006E7460
        mov ecx, dword ptr [esp + 0x10]
        cmp ecx, eax
        jge short L_fail
        push ecx
        mov ecx, esi
        call ext_0078CBC0
        mov ecx, esi
        call ext_0078CBE0
        mov dword ptr [eax + 0x1c], 0
        pop edi
        mov al, 1
        pop esi
        ret 0x8
    L_fail:
        pop edi
        xor al, al
        pop esi
        ret 0x8
    }
}

// [0x00726860] sub_00726860 (112 bytes)
extern "C" void ext_006E7440();
extern "C" void ext_006E7460();
extern "C" void ext_0078A640();
extern "C" void ext_0078AAF0();

extern "C" __declspec(naked) void __fastcall fn_00726860(void* self) {
    __asm {
        push esi
        mov esi, ecx
        push edi
        mov ecx, dword ptr [esi + 0x250]
        call ext_00789BB0
        mov edi, eax
        test edi, edi
        je short L_fail
        mov ecx, edi
        call ext_0078CBE0
        test eax, eax
        je short L_fail
        mov ecx, edi
        call ext_0078CBE0
        mov ecx, eax
        call ext_006E7460
        test eax, eax
        je short L_fail
        mov ecx, dword ptr [esi + 0x250]
        push eax
        call ext_0078AAF0
        mov ecx, eax
        mov dword ptr [esi + 0x250], eax
        call ext_0078A640
        test al, al
        je short L_clear
        pop edi
        mov al, 0x1
        pop esi
        ret
L_clear:
        push 0x0
        lea ecx, [esi + 0xef0]
        call ext_006E7440
L_fail:
        pop edi
        xor al, al
        pop esi
        ret
    }
}

// [0x00724E80] sub_00724E80 (128 bytes)
extern "C" int mem_009251B8;
extern "C" int mem_00925180;
extern "C" int mem_009252B4;

extern "C" __declspec(naked) void __fastcall fn_00724E80(void* self, int edx_unused, int arg) {
    __asm {
        sub esp, 0xa0
        push ebx
        push ebp
        push esi
        push edi
        mov ebp, ecx
        push 0x0
        call dword ptr [mem_009251B8]
        push eax
        call dword ptr [mem_00925180]
        mov ebx, dword ptr [mem_009252B4]
        add esp, 0x8
        lea esi, [esp + 0x10]
        mov edi, 0x50
    L_fill:
        call ebx
        mov word ptr [esi], ax
        add esi, 0x2
        dec edi
        jne short L_fill
        mov ecx, dword ptr [ebp + 0x10]
        lea edx, [esp + 0x10]
        push 0xa0
        push edx
        mov eax, dword ptr [ecx]
        call dword ptr [eax + 0x1c]
        mov eax, dword ptr [esp + 0xb4]
        mov ecx, dword ptr [esp + 0x36]
        mov edx, dword ptr [esp + 0x3a]
        pop edi
        mov dword ptr [eax], ecx
        mov ecx, dword ptr [esp + 0x3a]
        pop esi
        pop ebp
        mov dword ptr [eax + 0x4], edx
        mov edx, dword ptr [esp + 0x36]
        pop ebx
        mov dword ptr [eax + 0x8], ecx
        mov dword ptr [eax + 0xc], edx
        add esp, 0xa0
        ret 0x4
    }
}

// [0x00725D60] sub_00725D60 (128 bytes)
extern "C" void ext_006B9D80();
extern "C" int mem_00925218;
extern "C" __declspec(naked) void __fastcall fn_00725D60(void* self) {
    __asm {
        sub esp, 0x18
        mov eax, dword ptr [ecx + 0x1dc]
        mov edx, dword ptr [ecx + 0x1cc]
        push esi
        push eax
        push edx
        mov edx, dword ptr [ecx + 0x1e4]
        mov eax, 0x66666667
        mov dword ptr [esp + 0xc], 0x0
        imul edx
        sar edx, 0x2
        mov eax, edx
        shr eax, 0x1f
        add edx, eax
        mov eax, dword ptr [ecx + 0x1d8]
        push edx
        mov edx, dword ptr [ecx + 0x1d4]
        push edx
        mov edx, dword ptr [ecx + 0x1d0]
        push eax
        mov eax, dword ptr [ecx + 0x1e0]
        push edx
        push eax
        lea ecx, [esp + 0x24]
        push 0xaacfb4
        push ecx
        call dword ptr [mem_00925218]
        mov esi, dword ptr [esp + 0x44]
        add esp, 0x24
        lea edx, [esp + 0x8]
        mov ecx, esi
        push edx
        call ext_006B9D80
        mov eax, esi
        pop esi
        add esp, 0x18
        ret 0x4
    }
}

// [0x0072B0A0] sub_0072B0A0 (128 bytes)
extern "C" void ext_006B9E60();
extern "C" __declspec(naked) void* __fastcall fn_0072B0A0(void* self, int edx_unused, void* other) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        mov esi, ecx
        push edi
        call ext_006B9E60
        lea eax, [edi + 0x4c]
        lea ecx, [esi + 0x4c]
        push eax
        call ext_006B9E60
        lea ecx, [edi + 0x98]
        push ecx
        lea ecx, [esi + 0x98]
        call ext_006B9E60
        lea edx, [edi + 0xe4]
        lea ecx, [esi + 0xe4]
        push edx
        call ext_006B9E60
        lea eax, [edi + 0x130]
        lea ecx, [esi + 0x130]
        push eax
        call ext_006B9E60
        lea ecx, [edi + 0x17c]
        push ecx
        lea ecx, [esi + 0x17c]
        call ext_006B9E60
        mov edx, dword ptr [edi + 0x1c8]
        mov eax, esi
        mov dword ptr [esi + 0x1c8], edx
        pop edi
        pop esi
        ret 0x4
    }
}

// [0x0072BFD0] sub_0072BFD0 (128 bytes)
extern "C" __declspec(naked) void __fastcall fn_0072BFD0(void* self, int edx_unused, int a1, int a2, int a3, int a4, int a5) {
    __asm {
        movsx eax, byte ptr [esp + 0x14]
        mov edx, dword ptr [esp + 0x10]
        push ebx
        mov bl, byte ptr [esp + 0x10]
        push esi
        mov esi, ecx
        push edi
        mov ecx, dword ptr [esp + 0x10]
        mov edi, dword ptr [esp + 0x14]
        test ecx, ecx
        mov dword ptr [esi], ecx
        mov dword ptr [esi + 0x4], edi
        mov dword ptr [esi + 0x8], edx
        mov dword ptr [esi + 0xc], eax
        mov dword ptr [esi + 0x10], 0x0
        jle L_fail
        test edi, edi
        jle L_fail
        test edx, edx
        je L_chk
        cmp edx, 0x1
        jne L_fail
    L_chk:
        cmp eax, 0x1
        jge L_one
    L_fail:
        test bl, bl
        je L_one
        xor edx, edx
        jmp L_store
    L_one:
        mov edx, 0x1
    L_store:
        test dl, dl
        mov byte ptr [esi + 0x64], dl
        je L_end
        test bl, bl
        je L_end
        imul eax, ecx
        imul eax, edi
        push eax
        call ext_006A5C62
        add esp, 0x4
        mov dword ptr [esi + 0x10], eax
    L_end:
        mov byte ptr [esi + 0x65], bl
        pop edi
        pop esi
        pop ebx
        ret 0x14
    }
}

// [0x00722730] sub_00722730 (128 bytes)
extern "C" void ext_00722660();
extern "C" void ext_00722720();
extern "C" int mem_009967F0;
extern "C" int mem_00996800;

extern "C" __declspec(naked) void __fastcall fn_00722730(void* self) {
    __asm {
        sub esp, 0x8
        fld qword ptr [esp + 0x14]
        fcomp qword ptr [esp + 0x1c]
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x18
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        fnstsw ax
        test ah, 0x41
        je short L_skip
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
    L_skip:
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x00
        sub esp, 0x8
        fstp qword ptr [esp]
        fld qword ptr [esp + 0x14]
        fadd qword ptr [mem_009967F0]
        sub esp, 0x8
        fmul qword ptr [mem_00996800]
        fstp qword ptr [esp]
        call ext_00722720
        mov eax, dword ptr [esp + 0x30]
        mov ecx, dword ptr [esp + 0x2c]
        mov edx, dword ptr [esp + 0x28]
        push eax
        mov eax, dword ptr [esp + 0x28]
        push ecx
        mov ecx, dword ptr [esp + 0x28]
        push edx
        mov edx, dword ptr [esp + 0x28]
        push eax
        fstp qword ptr [esp + 0x20]
        push ecx
        push edx
        call ext_00722660
        fadd qword ptr [esp + 0x28]
        add esp, 0x30
        ret
    }
}

// [0x00722BA0] sub_00722BA0 (128 bytes)
extern "C" void ext_00722660();
extern "C" void ext_00722720();
extern "C" int mem_009967F0; /* double 500 */
extern "C" int mem_009967F8; /* double 0.002 */
extern "C" __declspec(naked) void __fastcall fn_00722BA0(void* self) {
    __asm {
        sub esp, 0x8
        fld qword ptr [esp + 0x14]
        fcomp qword ptr [esp + 0x1c]
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x00
        _emit 0xe8
        _emit 0x03
        _emit 0x00
        _emit 0x00
        fnstsw ax
        test ah, 0x1
        _emit 0x74
        _emit 0x08
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x00
        _emit 0x18
        _emit 0xfc
        _emit 0xff
        _emit 0xff
        _emit 0xdb
        _emit 0x44
        _emit 0x24
        _emit 0x00
        sub esp, 0x8
        fstp qword ptr [esp]
        fld qword ptr [esp + 0x14]
        fsub qword ptr [mem_009967F0]
        sub esp, 0x8
        fmul qword ptr [mem_009967F8]
        fstp qword ptr [esp]
        call ext_00722720
        mov eax, dword ptr [esp + 0x30]
        mov ecx, dword ptr [esp + 0x2c]
        mov edx, dword ptr [esp + 0x28]
        push eax
        mov eax, dword ptr [esp + 0x28]
        push ecx
        mov ecx, dword ptr [esp + 0x28]
        push edx
        mov edx, dword ptr [esp + 0x28]
        push eax
        fstp qword ptr [esp + 0x20]
        push ecx
        push edx
        call ext_00722660
        fadd qword ptr [esp + 0x28]
        add esp, 0x30
        ret
    }
}

// [0x00722C20] sub_00722C20 (128 bytes)
extern "C" void ext_00722660();
extern "C" void ext_00722720();
extern "C" int mem_009967F0; /* double 500 */
extern "C" int mem_00996800; /* double -0.002 */
extern "C" __declspec(naked) double __cdecl fn_00722C20(double a, double b, int c, int d) {
    __asm {
        sub esp, 0x8
        fld qword ptr [esp + 0x14]
        fcomp qword ptr [esp + 0x1c]
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x00
        _emit 0x18
        _emit 0xfc
        _emit 0xff
        _emit 0xff
        fnstsw ax
        test ah, 0x1
        je short L_skip
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x00
        _emit 0xe8
        _emit 0x03
        _emit 0x00
        _emit 0x00
    L_skip:
        _emit 0xdb
        _emit 0x44
        _emit 0x24
        _emit 0x00
        sub esp, 0x8
        fstp qword ptr [esp]
        fld qword ptr [esp + 0x14]
        fadd qword ptr [mem_009967F0]
        sub esp, 0x8
        fmul qword ptr [mem_00996800]
        fstp qword ptr [esp]
        call ext_00722720
        mov eax, dword ptr [esp + 0x30]
        mov ecx, dword ptr [esp + 0x2c]
        mov edx, dword ptr [esp + 0x28]
        push eax
        mov eax, dword ptr [esp + 0x28]
        push ecx
        mov ecx, dword ptr [esp + 0x28]
        push edx
        mov edx, dword ptr [esp + 0x28]
        push eax
        fstp qword ptr [esp + 0x20]
        push ecx
        push edx
        call ext_00722660
        fadd qword ptr [esp + 0x28]
        add esp, 0x30
        ret
    }
}

// [0x007226A0] sub_007226A0 (128 bytes)
extern "C" void ext_00722660();
extern "C" void ext_00722720();
extern "C" int mem_009967F0; /* double 500 */
extern "C" int mem_009967F8; /* double 0.002 */
extern "C" __declspec(naked) void __cdecl fn_007226A0(double a, double x, double y) {
    __asm {
        sub esp, 0x8
        fld qword ptr [esp + 0x14]
        fcomp qword ptr [esp + 0x1c]
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        fnstsw ax
        test ah, 0x41
        je short L_sign_pos
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x18
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
L_sign_pos:
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x00
        sub esp, 0x8
        fstp qword ptr [esp]
        fld qword ptr [esp + 0x14]
        fsub qword ptr [mem_009967F0]
        sub esp, 0x8
        fmul qword ptr [mem_009967F8]
        fstp qword ptr [esp]
        call ext_00722720
        mov eax, dword ptr [esp + 0x30]
        mov ecx, dword ptr [esp + 0x2c]
        mov edx, dword ptr [esp + 0x28]
        push eax
        mov eax, dword ptr [esp + 0x28]
        push ecx
        mov ecx, dword ptr [esp + 0x28]
        push edx
        mov edx, dword ptr [esp + 0x28]
        push eax
        fstp qword ptr [esp + 0x20]
        push ecx
        push edx
        call ext_00722660
        fadd qword ptr [esp + 0x28]
        add esp, 0x30
        ret
    }
}

// [0x0072EF40] sub_0072EF40 (128 bytes)
extern "C" void ext_00726770();
extern "C" void ext_00726840();
extern "C" void ext_00726860();
extern "C" void ext_007268D0();
extern "C" void ext_0072FA60();
extern "C" __declspec(naked) void __fastcall fn_0072EF40(void* self) {
    __asm {
        push esi
        mov esi, ecx
        push 0x00aad2d8
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_00726770
        test al, al
        je L_end
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_00726860
        test al, al
        je L_skip
        mov eax, dword ptr [esi + 0xb4]
        mov eax, dword ptr [eax + 0x154]
        test eax, eax
        je L_noflush
        mov ecx, dword ptr [esi + 0x4]
        push eax
        mov edx, dword ptr [ecx]
        call dword ptr [edx + 0xa4]
    L_noflush:
        mov ecx, esi
        call ext_0072FA60
        mov ecx, dword ptr [esi + 0xb4]
        mov dword ptr [ecx + 0x154], eax
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_007268D0
    L_skip:
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_00726840
    L_end:
        pop esi
        ret
    }
}

// [0x00726610] sub_00726610 (128 bytes)
extern "C" void ext_006B9E60();
extern "C" void ext_006E7460();
extern "C" void ext_006FE2A0();
extern "C" __declspec(naked) void __fastcall fn_00726610(void* self, int edx_unused, int arg) {
    __asm {
        push -1
        push 0x8bcb18
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x4c
        mov eax, dword ptr [esp + 0x5c]
        push esi
        mov esi, ecx
        push eax
        lea ecx, [esi + 0x18]
        call ext_006E7460
        lea ecx, [esp + 0x8]
        push eax
        push ecx
        call ext_006FE2A0
        add esp, 0xc
        add esi, 0x148
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0x5c], 0x0
        call ext_006B9E60
        lea ecx, [esp + 0x4]
        mov dword ptr [esp + 0x58], 0xffffffff
        call ext_006B9D70
        mov ecx, esi
        call ext_006E7460
        mov ecx, dword ptr [esp + 0x50]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x58
        ret 0x4
    }
}

// [0x0072AF80] sub_0072AF80 (144 bytes)
extern "C" __declspec(naked) void __fastcall fn_0072AF80(void* self) {
    __asm {
        push -1
        push 0x8bdb6d
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        call ext_006B9D10
        lea ecx, [esi + 0x4c]
        mov dword ptr [esp + 0x10], 0x0
        call ext_006B9D10
        lea ecx, [esi + 0x98]
        mov byte ptr [esp + 0x10], 0x1
        call ext_006B9D10
        lea ecx, [esi + 0xe4]
        mov byte ptr [esp + 0x10], 0x2
        call ext_006B9D10
        lea ecx, [esi + 0x130]
        mov byte ptr [esp + 0x10], 0x3
        call ext_006B9D10
        lea ecx, [esi + 0x17c]
        mov byte ptr [esp + 0x10], 0x4
        call ext_006B9D10
        mov ecx, dword ptr [esp + 0x8]
        mov dword ptr [esi + 0x1c8], 0x0
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x0072B010] sub_0072B010 (144 bytes)
extern "C" __declspec(naked) void __fastcall fn_0072B010(void* self) {
    __asm {
        push -1
        push 0x8bdb6d
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        lea ecx, [esi + 0x17c]
        mov dword ptr [esp + 0x10], 0x4
        call ext_006B9D70
        lea ecx, [esi + 0x130]
        mov byte ptr [esp + 0x10], 0x3
        call ext_006B9D70
        lea ecx, [esi + 0xe4]
        mov byte ptr [esp + 0x10], 0x2
        call ext_006B9D70
        lea ecx, [esi + 0x98]
        mov byte ptr [esp + 0x10], 0x1
        call ext_006B9D70
        lea ecx, [esi + 0x4c]
        mov byte ptr [esp + 0x10], 0x0
        call ext_006B9D70
        mov ecx, esi
        mov dword ptr [esp + 0x10], 0xffffffff
        call ext_006B9D70
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00725B50] sub_00725B50 (144 bytes)
extern "C" void ext_006E7460();
extern "C" void ext_006B9D70();
extern "C" int mem_0092521C;
extern "C" __declspec(naked) void __fastcall fn_00725B50(void* self, int edx_unused) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -0x1
        push 0x8bdc58
        push eax
        mov dword ptr fs:[0x0], esp
        lea eax, [ecx + 0x1e4]
        lea edx, [ecx + 0x1e0]
        push eax
        push edx
        lea eax, [ecx + 0x1dc]
        lea edx, [ecx + 0x1d8]
        push eax
        push edx
        lea eax, [ecx + 0x1d4]
        lea edx, [ecx + 0x1d0]
        push eax
        add ecx, 0x1cc
        push edx
        push ecx
        push 0xaacf9c
        lea ecx, [esp + 0x30]
        mov dword ptr [esp + 0x28], 0x0
        call ext_006E7460
        push eax
        call dword ptr [mem_0092521C]
        add esp, 0x24
        lea ecx, [esp + 0x10]
        mov dword ptr [esp + 0x8], 0xffffffff
        call ext_006B9D70
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x00
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret 0x4c
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

// [0x00726CB0] sub_00726CB0 (144 bytes)
extern "C" void ext_006DAE00();
extern "C" void ext_00725A60();
extern "C" void ext_00726980();
extern "C" void ext_00726B80();
extern "C" void ext_00726BE0();
extern "C" __declspec(naked) void __fastcall fn_00726CB0(void* self, int edx_unused, void* out) {
    __asm {
        sub esp, 0x8
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], 0x0
        mov dword ptr [esp + 0x8], 0x0
        mov al, byte ptr [esi + 0x15]
        test al, al
        je short L_path_b
        call ext_00726980
        cmp al, 0x4c
        je short L_path_a
        mov al, byte ptr [esi + 0x15]
        test al, al
        jne short L_path_c
    L_path_b:
        mov eax, dword ptr [esi + 0x1c4]
        mov ecx, esi
        push eax
        call ext_00725A60
        cmp eax, 0x7d1
        jl short L_path_c
    L_path_a:
        mov ecx, esi
        call ext_00726B80
        mov ecx, eax
        mov eax, dword ptr [esp + 0x10]
        pop esi
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 0x4], edx
        add esp, 0x8
        ret 0x4
    L_path_c:
        mov ecx, esi
        call ext_00726BE0
        sub esp, 0x8
        lea ecx, [esp + 0xc]
        fstp qword ptr [esp]
        call ext_006DAE00
        mov eax, dword ptr [esp + 0x10]
        mov ecx, dword ptr [esp + 0x4]
        mov edx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 0x4], edx
        add esp, 0x8
        ret 0x4
    }
}

// [0x0072ADA0] sub_0072ADA0 (144 bytes)
extern "C" void ext_0070F2D0();
extern "C" void ext_0070F330();
extern "C" void ext_0070F340();
extern "C" void ext_0078D420();

extern "C" __declspec(naked) void __fastcall fn_0072ADA0(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -0x8
        sub esp, 0xc
        mov eax, dword ptr [ebp + 0x8]
        push ebx
        xor ebx, ebx
        push esi
        mov eax, dword ptr [eax]
        push edi
        test eax, eax
        mov dword ptr [esp + 0x14], eax
        jle short L_0072ADA0_end
    L_0072ADA0_outer:
        mov ecx, dword ptr [ebp + 0x8]
        mov edx, dword ptr [ecx + 0x10]
        mov esi, dword ptr [edx + ebx*4]
        mov ecx, esi
        call ext_0070F2D0
        mov edi, eax
        mov ecx, esi
        mov dword ptr [esp + 0x10], edi
        call ext_0070F330
        mov ecx, esi
        mov dword ptr [esp + 0xc], eax
        call ext_0070F340
        test edi, edi
        jle short L_0072ADA0_next
        mov edi, dword ptr [esp + 0xc]
        mov esi, eax
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [esp + 0xc], eax
    L_0072ADA0_inner:
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edi]
        push ecx
        mov ecx, dword ptr [ebp + 0xc]
        push edx
        push eax
        push ebx
        call ext_0078D420
        mov eax, dword ptr [esp + 0xc]
        add esi, 0x8
        add edi, 0x4
        dec eax
        mov dword ptr [esp + 0xc], eax
        jne short L_0072ADA0_inner
    L_0072ADA0_next:
        mov eax, dword ptr [esp + 0x14]
        inc ebx
        cmp ebx, eax
        jl short L_0072ADA0_outer
    L_0072ADA0_end:
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0x8
    }
}

// [0x007287E0] sub_007287E0 (160 bytes)
extern "C" void ext_006E7440();
extern "C" void ext_006E7460();
extern "C" void ext_00728570();
extern "C" __declspec(naked) void __fastcall fn_007287E0(void* self) {
    __asm {
        push ebx
        push esi
        mov esi, ecx
        lea ebx, [esi + 0xef0]
        mov ecx, ebx
        call ext_006E7460
        cmp eax, -1
        jg L_epilogue
        mov ecx, dword ptr [esi + 0x10]
        test ecx, ecx
        je L_fail3
        mov eax, dword ptr [ecx]
        call dword ptr [eax + 0x2c]
        test al, al
        je L_fail3
        mov al, byte ptr [esi + 0x15]
        test al, al
        jne L_vcall30
        push edi
        mov ecx, esi
        call ext_00728570
        mov edi, dword ptr [esp + 0x10]
        cmp byte ptr [edi], 0
        je L_after_str
        mov eax, dword ptr [esi + 0x10]
        push 0xaad0c0
        push eax
        mov ecx, dword ptr [eax]
        call dword ptr [ecx + 0x3c]
        mov eax, dword ptr [esi + 0x10]
        add esp, 8
        mov edx, dword ptr [eax]
        push edi
        push eax
        call dword ptr [edx + 0x3c]
        add esp, 8
L_after_str:
        mov eax, dword ptr [esi + 0x10]
        push 0xaad034
        push eax
        mov ecx, dword ptr [eax]
        call dword ptr [ecx + 0x3c]
        add esp, 8
        pop edi
L_vcall30:
        mov ecx, dword ptr [esi + 0x10]
        mov edx, dword ptr [ecx]
        call dword ptr [edx + 0x30]
        test eax, eax
        je L_epilogue
        push 0xb
        mov ecx, ebx
        call ext_006E7440
        pop esi
        pop ebx
        ret 0x4
L_fail3:
        push 0x3
        mov ecx, ebx
        call ext_006E7440
L_epilogue:
        pop esi
        pop ebx
        ret 0x4
    }
}

// [0x00724F00] sub_00724F00 (160 bytes)
extern "C" void ext_006A5C5C();
extern "C" void ext_006B9EC0();
extern "C" void ext_00789AD0();
extern "C" void ext_00789BE0();
extern "C" int mem_00B5D2C0;
extern "C" __declspec(naked) void __fastcall fn_00724F00(void* self) {
    __asm {
        push ebx
        push esi
        mov esi, ecx
        xor ebx, ebx
        push edi
        cmp dword ptr [esi + 0x1c4], ebx
        jne short L_else
        cmp byte ptr [esi + 0x254], bl
        je short L_else
        mov ecx, dword ptr [esi + 0x258]
        call ext_00789BE0
        jmp short L_common
L_else:
        mov edi, dword ptr [esi + 0x24c]
        cmp edi, ebx
        je short L_common
        mov ecx, edi
        call ext_00789AD0
        push edi
        call ext_006A5C5C
        add esp, 0x4
L_common:
        push offset mem_00B5D2C0
        lea ecx, [esi + 0x1ec]
        mov dword ptr [esi + 0x24c], ebx
        mov dword ptr [esi + 0x250], ebx
        mov dword ptr [esi + 0x1c4], 0xffffffff
        mov dword ptr [esi + 0x1c8], ebx
        mov byte ptr [esi + 0x1e8], bl
        call ext_006B9EC0
        mov dword ptr [esi + 0x25c], ebx
        mov dword ptr [esi + 0x260], ebx
        mov dword ptr [esi + 0x264], ebx
        mov dword ptr [esi + 0xee4], ebx
        mov dword ptr [esi + 0xee8], ebx
        mov dword ptr [esi + 0xeec], ebx
        pop edi
        pop esi
        mov al, 1
        pop ebx
        ret
    }
}

// [0x007284D0] sub_007284D0 (160 bytes)
extern "C" void ext_006E7440();
extern "C" void ext_006E7460();
extern "C" void ext_00728570();
extern "C" void ext_007289E0();
extern "C" __declspec(naked) void __fastcall fn_007284D0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        push edi
        lea edi, [esi + 0xef0]
        mov ecx, edi
        call ext_006E7460
        cmp eax, -1
        jg L_end
        mov ecx, dword ptr [esi + 0x10]
        mov eax, dword ptr [ecx]
        call dword ptr [eax + 0x2c]
        test al, al
        je L_end
        mov al, byte ptr [esi + 0x15]
        test al, al
        jne L_else
        mov eax, dword ptr [esi + 0xee4]
        mov ecx, esi
        dec eax
        mov dword ptr [esi + 0xee4], eax
        call ext_00728570
        mov eax, dword ptr [esi + 0x10]
        push 0xaad0b4
        push eax
        mov ecx, dword ptr [eax]
        call dword ptr [ecx + 0x3c]
        add esp, 0x8
        mov dword ptr [esi + 0x25c], 0x0
        jmp L_after
    L_else:
        mov ecx, esi
        call ext_007289E0
        mov ecx, dword ptr [esi + 0x260]
        mov eax, dword ptr [esi + 0xee4]
        dec ecx
        dec eax
        mov dword ptr [esi + 0x260], ecx
        mov dword ptr [esi + 0xee4], eax
    L_after:
        mov ecx, dword ptr [esi + 0x10]
        mov edx, dword ptr [ecx]
        call dword ptr [edx + 0x30]
        test eax, eax
        je L_end
        push 0xb
        mov ecx, edi
        call ext_006E7440
    L_end:
        pop edi
        pop esi
        ret
    }
}

// [0x0072B7F0] sub_0072B7F0 (19 bytes)
extern "C" void ext_006DC8E0();

extern "C" __declspec(naked) void __fastcall fn_0072B7F0(void* self) {
    __asm {
        mov eax, dword ptr [esp + 4]
        mov ecx, dword ptr [ecx + 0xe0]
        push eax
        call ext_006DC8E0
        ret 4
    }
}

// [0x0072B280] sub_0072B280 (25 bytes)
extern "C" void ext_006D7880();
extern "C" __declspec(naked) void* __fastcall fn_0072B280(void* self, int edx_unused, void* arg1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        mov esi, ecx
        push eax
        call ext_006D7880
        mov dword ptr [esi], 0x996810
        mov eax, esi
        pop esi
        ret 0x4
    }
}

// [0x0072B2F0] sub_0072B2F0 (25 bytes)
extern "C" __declspec(naked) void* __fastcall fn_0072B2F0(void* self, int edx_unused, int arg) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        mov esi, ecx
        push eax
        call ext_0077F9E0
        mov dword ptr [esi], 0x996834
        mov eax, esi
        pop esi
        ret 0x4
    }
}

// [0x0072B750] sub_0072B750 (30 bytes)
extern "C" void ext_007052F0();
extern "C" __declspec(naked) void* __fastcall fn_0072B750(void* self, int edx_unused, int arg) {
    __asm {
        push esi
        mov esi, ecx
        call ext_007052F0
        mov eax, dword ptr [esp + 0x8]
        mov dword ptr [esi], 0x996858
        mov dword ptr [esi + 0xe0], eax
        mov eax, esi
        pop esi
        ret 0x4
    }
}

// [0x0072B6F0] sub_0072B6F0 (41 bytes)
extern "C" int mem_00B600A8;
extern "C" int mem_00B600B0;
extern "C" int mem_00B600AC;
extern "C" int mem_00B600B4;

extern "C" void __cdecl fn_0072B6F0() {
    mem_00B600A8 = 0xb600a0;
    mem_00B600B0 = 0xaad0e0;
    mem_00B600AC = 0xb5f050;
    mem_00B600B4 = 0;
}

// [0x0072CB30] sub_0072CB30 (41 bytes)
extern "C" int mem_00B60290;
extern "C" int mem_00B60298;
extern "C" int mem_00B60294;
extern "C" int mem_00B6029C;

extern "C" void __cdecl fn_0072CB30() {
    mem_00B60290 = 0xb60288;
    mem_00B60298 = 0xaad178;
    mem_00B60294 = 0xb60fb0;
    mem_00B6029C = 0;
}

// [0x0072B4C0] sub_0072B4C0 (46 bytes)
extern "C" int mem_00925284;
extern "C" int mem_00B60168;
extern "C" int mem_00B60170;
extern "C" int mem_00B60178;
extern "C" int mem_00B60180;

extern "C" void __cdecl fn_0072B4C0() {
    double* p = *(double**)&mem_00925284;
    *(double*)&mem_00B60168 = -*p;
    *(double*)&mem_00B60170 = -*p;
    *(double*)&mem_00B60178 = -*p;
    *(double*)&mem_00B60180 = -*p;
}

// [0x0072D300] sub_0072D300 (46 bytes)
extern "C" int mem_00925284;
extern "C" double mem_00B60300;
extern "C" double mem_00B60308;
extern "C" double mem_00B60310;
extern "C" double mem_00B60318;

extern "C" void __cdecl fn_0072D300() {
    mem_00B60300 = -*(double*)mem_00925284;
    mem_00B60308 = -*(double*)mem_00925284;
    mem_00B60310 = -*(double*)mem_00925284;
    mem_00B60318 = -*(double*)mem_00925284;
}

// [0x0072CC90] sub_0072CC90 (57 bytes)
extern "C" int mem_00B60288;
extern "C" int mem_00B60F58;
extern "C" int mem_00B5EB78;
extern "C" int mem_00B5E400;
extern "C" __declspec(naked) void __fastcall fn_0072CC90(void* self) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        mov ecx, dword ptr [mem_00B60288]
        cmp eax, ecx
        jne short L_next1
        mov al, 0x1
        ret 0x4
    L_next1:
        cmp eax, dword ptr [mem_00B60F58]
        jne short L_next2
        mov al, 0x1
        ret 0x4
    L_next2:
        cmp eax, dword ptr [mem_00B5EB78]
        jne short L_next3
        mov al, 0x1
        ret 0x4
    L_next3:
        cmp eax, dword ptr [mem_00B5E400]
        sete al
        ret 0x4
    }
}

// [0x0072B770] sub_0072B770 (57 bytes)
extern "C" int mem_00B600A0;
extern "C" int mem_00B5F060;
extern "C" int mem_00B5EB78;
extern "C" int mem_00B5E400;

extern "C" __declspec(naked) void __fastcall fn_0072B770(void* self) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        mov ecx, dword ptr [mem_00B600A0]
        cmp eax, ecx
        jne short L_check2
        mov al, 0x1
        ret 0x4
    L_check2:
        cmp eax, dword ptr [mem_00B5F060]
        jne short L_check3
        mov al, 0x1
        ret 0x4
    L_check3:
        cmp eax, dword ptr [mem_00B5EB78]
        jne short L_check4
        mov al, 0x1
        ret 0x4
    L_check4:
        cmp eax, dword ptr [mem_00B5E400]
        sete al
        ret 0x4
    }
}

// [0x0072DBE0] sub_0072DBE0 (97 bytes)
extern "C" __declspec(naked) unsigned char __fastcall fn_0072DBE0(void* self, int dummy_edx, void* a1, void* a2, void* a3, void* a4) {
    __asm {
        push esi
        mov esi, ecx
        mov al, byte ptr [esi + 0x108]
        test al, al
        je L_exit
        mov ecx, dword ptr [esp + 0x8]
        lea eax, [esi + 0x10c]
        push eax
        call ext_006B9E60
        lea ecx, [esi + 0x158]
        push ecx
        mov ecx, dword ptr [esp + 0x10]
        call ext_006B9E60
        mov eax, dword ptr [esp + 0x10]
        mov edx, dword ptr [esi + 0x1a8]
        mov dword ptr [eax], edx
        mov ecx, dword ptr [esi + 0x1ac]
        mov dword ptr [eax + 0x4], ecx
        mov eax, dword ptr [esp + 0x14]
        mov edx, dword ptr [esi + 0x1b0]
        mov dword ptr [eax], edx
        mov ecx, dword ptr [esi + 0x1b4]
        mov dword ptr [eax + 0x4], ecx
    L_exit:
        mov al, byte ptr [esi + 0x108]
        pop esi
        ret 0x10
    }
}

// [0x0072CF30] sub_0072CF30 (93 bytes)
extern "C" void ext_006E73B0();

extern "C" __declspec(naked) void __fastcall fn_0072CF30(void* self, int edx_unused, int a1) {
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
        push 8
        push 00aad18ch
        mov dword ptr [esp + 0ch], esi
        lea ecx, [esi + 8]
        mov dword ptr [esi + 4], eax
        call ext_006E73B0
        lea ecx, [esi + 60h]
        mov dword ptr [esp + 10h], 0
        call ext_006B9D10
        mov ecx, dword ptr [esp + 8]
        mov dword ptr [esi], 00996b1ch
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 10h
        ret 4
    }
}

// [0x0072BA60] sub_0072BA60 (139 bytes)
extern "C" void ext_006B9D20();
extern "C" void ext_006B9D70();
extern "C" void ext_006B9D80();
extern "C" void ext_006B9EC0();
extern "C" int mem_008B93DF;
extern "C" int mem_00AAD100;
extern "C" int mem_00AAD0F4;

extern "C" __declspec(naked) void* __fastcall fn_0072BA60(void* self, int edx_unused, void* out) {
    __asm {
        push    -0x1
        push    offset mem_008B93DF
        mov     eax, dword ptr fs:[0x0]
        push    eax
        mov     dword ptr fs:[0x0], esp
        sub     esp, 0x50
        push    esi
        mov     esi, ecx
        push    offset mem_00AAD100
        lea     ecx, [esp + 0xc]
        mov     dword ptr [esp + 0x8], 0x0
        call    ext_006B9D80
        mov     al, byte ptr [esi + 0x14c]
        mov     dword ptr [esp + 0x5c], 0x1
        cmp     al, 0x72
        jne     short L_skip
        push    offset mem_00AAD0F4
        lea     ecx, [esp + 0xc]
        call    ext_006B9EC0
    L_skip:
        mov     esi, dword ptr [esp + 0x64]
        lea     eax, [esp + 0x8]
        push    eax
        mov     ecx, esi
        call    ext_006B9D20
        mov     dword ptr [esp + 0x4], 0x1
        lea     ecx, [esp + 0x8]
        mov     byte ptr [esp + 0x5c], 0x0
        call    ext_006B9D70
        mov     ecx, dword ptr [esp + 0x54]
        mov     eax, esi
        pop     esi
        mov     dword ptr fs:[0x0], ecx
        add     esp, 0x5c
        ret     0x4
    }
}

// [0x00720260] sub_00720260 (119 bytes)
extern "C" void ext_0071FCC0();
extern "C" void ext_0071FD10();
extern "C" void ext_0071FD60();
extern "C" void ext_00720170();
extern "C" __declspec(naked) void __cdecl fn_00720260() {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        mov ecx, dword ptr [eax + 0x54]
        cmp ecx, 0x4
        ja short L_ret
        jmp dword ptr [ecx * 4 + 0x7202d8]
        mov ecx, dword ptr [esp + 0x10]
        mov edx, dword ptr [esp + 0xc]
        push ecx
        mov ecx, dword ptr [esp + 0xc]
        push edx
        push ecx
        push eax
        call ext_0071FCC0
        add esp, 0x10
        ret
        mov edx, dword ptr [esp + 0x10]
        mov ecx, dword ptr [esp + 0xc]
        push edx
        mov edx, dword ptr [esp + 0xc]
        push ecx
        push edx
        push eax
        call ext_0071FD10
        add esp, 0x10
        ret
        mov ecx, dword ptr [esp + 0x10]
        mov edx, dword ptr [esp + 0xc]
        push ecx
        mov ecx, dword ptr [esp + 0xc]
        push edx
        push ecx
        push eax
        call ext_0071FD60
        add esp, 0x10
        ret
        mov edx, dword ptr [esp + 0x10]
        mov ecx, dword ptr [esp + 0xc]
        push edx
        mov edx, dword ptr [esp + 0xc]
        push ecx
        push edx
        push eax
        call ext_00720170
        add esp, 0x10
    L_ret:
        ret
    }
}

// [0x0072DAD0] sub_0072DAD0 (162 bytes)
extern "C" void ext_006E7410();
extern "C" void ext_006E7440();
extern "C" void ext_00723920();
extern "C" void ext_00728D40();
extern "C" void ext_00728D50();
extern "C" __declspec(naked) void __fastcall fn_0072DAD0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0xac]
        test eax, eax
        jne L_nonnull
        push 3
        lea ecx, [esi + 0x8]
        call ext_006E7440
        xor al, al
        pop esi
        ret
    L_nonnull:
        lea ecx, [eax + 0x4]
        call ext_00723920
        test al, al
        jne L_true
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_00728D40
        cmp eax, 0x3
        je L_eq3
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_00728D50
        push eax
        push 0x7
        lea ecx, [esi + 0x8]
        call ext_006E7410
        jmp L_after
    L_eq3:
        push 0x3
        lea ecx, [esi + 0x8]
        call ext_006E7440
    L_after:
        mov eax, dword ptr [esi + 0xac]
        test eax, eax
        je L_skip1
        lea ecx, [eax + 0x4]
        push 0x1
        mov eax, dword ptr [ecx]
        call dword ptr [eax]
    L_skip1:
        mov dword ptr [esi + 0xac], 0x0
        xor al, al
        pop esi
        ret
    L_true:
        mov eax, dword ptr [esi + 0xac]
        test eax, eax
        je L_skip2
        mov edx, dword ptr [eax + 0x4]
        lea ecx, [eax + 0x4]
        push 0x1
        call dword ptr [edx]
    L_skip2:
        mov dword ptr [esi + 0xac], 0x0
        mov al, 0x1
        pop esi
        ret
    }
}

// [0x0072BBC0] sub_0072BBC0 (163 bytes)
extern "C" void ext_006B9D80();
extern "C" void ext_006B9D70();
extern "C" void ext_00711A50();
extern "C" void ext_00712000();
extern "C" void ext_006DD040();
extern "C" int mem_008BCB18;
extern "C" __declspec(naked) void __fastcall fn_0072BBC0(void* self, int edx_unused, int arg) {
    __asm {
        push -1
        push offset mem_008BCB18
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x50
        push ebx
        push edi
        mov edi, ecx
        xor ebx, ebx
        mov eax, dword ptr [edi + 0xf0]
        mov eax, dword ptr [eax + 0xc0]
        test eax, eax
        mov dword ptr [esp + 8], eax
        jle L_end
        push ebp
        mov ebp, dword ptr [esp + 0x6c]
        push esi
    L_loop:
        mov ecx, dword ptr [edi + 0xf0]
        mov edx, dword ptr [ecx + 0xd0]
        mov esi, dword ptr [edx + 4*ebx]
        mov ecx, esi
        call ext_00711A50
        test al, al
        je L_next
        mov ecx, esi
        call ext_00712000
        push eax
        lea ecx, [esp + 0x18]
        call ext_006B9D80
        push ebp
        push esi
        mov ecx, edi
        mov dword ptr [esp + 0x70], 0
        call ext_006DD040
        lea ecx, [esp + 0x14]
        mov dword ptr [esp + 0x68], 0xffffffff
        call ext_006B9D70
    L_next:
        mov eax, dword ptr [esp + 0x10]
        inc ebx
        cmp ebx, eax
        jl L_loop
        pop esi
        pop ebp
    L_end:
        mov ecx, dword ptr [esp + 0x58]
        pop edi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x5c
        ret 4
    }
}

// [0x0072D470] sub_0072D470 (166 bytes)
// [VA] 0x0072D470
extern "C" int mem_00925284;
extern "C" double mem_00B603A0;
extern "C" double mem_00B603A8;
extern "C" double mem_00B603B0;
extern "C" double mem_00B603B8;
extern "C" double mem_00B603C0;
extern "C" double mem_00B603C8;
extern "C" double mem_00B603D0;
extern "C" double mem_00B603D8;
extern "C" double mem_00B603E0;
extern "C" double mem_00B603E8;
extern "C" double mem_00B603F0;
extern "C" double mem_00B603F8;
extern "C" double mem_00B60400;
extern "C" double mem_00B60408;
extern "C" double mem_00B60410;
extern "C" double mem_00B60418;
extern "C" void __cdecl fn_0072D470() {
    double* h = (double*)mem_00925284;
    mem_00B603A0 = -*h;
    mem_00B603A8 = -*h;
    mem_00B603B0 = -*h;
    mem_00B603B8 = -*h;
    mem_00B603C0 = -*h;
    mem_00B603C8 = -*h;
    mem_00B603D0 = -*h;
    mem_00B603D8 = -*h;
    mem_00B603E0 = -*h;
    mem_00B603E8 = -*h;
    mem_00B603F0 = -*h;
    mem_00B603F8 = -*h;
    mem_00B60400 = -*h;
    mem_00B60408 = -*h;
    mem_00B60410 = -*h;
    mem_00B60418 = -*h;
}

// [0x0072B630] sub_0072B630 (166 bytes)
extern "C" int mem_00925284;
extern "C" double mem_00B60208;
extern "C" double mem_00B60210;
extern "C" double mem_00B60218;
extern "C" double mem_00B60220;
extern "C" double mem_00B60228;
extern "C" double mem_00B60230;
extern "C" double mem_00B60238;
extern "C" double mem_00B60240;
extern "C" double mem_00B60248;
extern "C" double mem_00B60250;
extern "C" double mem_00B60258;
extern "C" double mem_00B60260;
extern "C" double mem_00B60268;
extern "C" double mem_00B60270;
extern "C" double mem_00B60278;
extern "C" double mem_00B60280;

extern "C" void __cdecl fn_0072B630() {
    double* h = (double*)mem_00925284;
    mem_00B60208 = -*h;
    mem_00B60210 = -*h;
    mem_00B60218 = -*h;
    mem_00B60220 = -*h;
    mem_00B60228 = -*h;
    mem_00B60230 = -*h;
    mem_00B60238 = -*h;
    mem_00B60240 = -*h;
    mem_00B60248 = -*h;
    mem_00B60250 = -*h;
    mem_00B60258 = -*h;
    mem_00B60260 = -*h;
    mem_00B60268 = -*h;
    mem_00B60270 = -*h;
    mem_00B60278 = -*h;
    mem_00B60280 = -*h;
}

// [0x0072BE10] sub_0072BE10 (176 bytes)
extern "C" int __fastcall ext_006BC730(void* self, int edx_unused);
extern "C" void* __fastcall ext_006BC740(void* self, int edx_unused, int idx);
extern "C" unsigned char __fastcall ext_0072BEC0(void* self, int edx_unused, int a1, int a2, int a3);

extern "C" __declspec(naked) int __fastcall fn_0072BE10(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        push ecx
        push ebx
        push ebp
        mov ebp, ecx
        push esi
        push edi
        cmp byte ptr [ebp + 0x14c], 0x62
        jne short L_final
        mov eax, dword ptr [ebp + 0xb4]
        xor ebx, ebx
        mov ecx, dword ptr [eax + 0x4]
        test ecx, ecx
        jle short L_final
    L_outer:
        mov eax, dword ptr [eax + 0x14]
        xor edi, edi
        mov esi, dword ptr [eax + ebx*4]
        mov ecx, esi
        call ext_006BC730
        test eax, eax
        jle short L_next
    L_inner:
        push edi
        mov ecx, esi
        call ext_006BC740
        cmp eax, ebp
        je short L_skip
        cmp byte ptr [eax + 0x14c], 0x62
        jne short L_skip
        mov edx, dword ptr [esp + 0x1c]
        lea ecx, [esp + 0x10]
        push ecx
        mov ecx, dword ptr [esp + 0x1c]
        push edx
        push ecx
        mov ecx, eax
        call ext_0072BEC0
        test al, al
        je short L_retfalse
    L_skip:
        mov ecx, esi
        inc edi
        call ext_006BC730
        cmp edi, eax
        jl short L_inner
    L_next:
        mov eax, dword ptr [ebp + 0xb4]
        inc ebx
        cmp ebx, dword ptr [eax + 0x4]
        jl short L_outer
    L_final:
        mov edx, dword ptr [esp + 0x20]
        mov eax, dword ptr [esp + 0x1c]
        mov ecx, dword ptr [esp + 0x18]
        push edx
        push eax
        push ecx
        mov ecx, ebp
        call ext_0072BEC0
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 0xc
    L_retfalse:
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        pop ecx
        ret 0xc
    }
}

// [0x0072CE00] sub_0072CE00 (176 bytes)
extern "C" void ext_0079BAA0();
extern "C" void ext_006BE890();
extern "C" void ext_006D2250();
extern "C" void ext_006B9960();

extern "C" __declspec(naked) void __fastcall fn_0072CE00(void* self) {
    __asm {
        push ebx
        push esi
        push edi
        mov esi, ecx
        call ext_0079BAA0
        mov edi, dword ptr [esi + 0xf0]
        lea ebx, [esi + 0xf0]
        test edi, edi
        je L_after_loop
        push ebp
    L_loop:
        mov eax, dword ptr [ebx + 0x10]
        dec edi
        mov ebp, dword ptr [eax + 4*edi]
        test ebp, ebp
        je L_skip
        mov ecx, ebp
        call ext_006BE890
        push ebp
        call ext_006A5C5C
        add esp, 0x4
    L_skip:
        test edi, edi
        jne L_loop
        pop ebp
    L_after_loop:
        mov ecx, ebx
        call ext_006D2250
        lea ecx, [esi + 0x108]
        call ext_006B9960
        lea ecx, [esi + 0x15c]
        mov dword ptr [esi + 0x154], 0
        mov byte ptr [esi + 0x158], 0
        call ext_006B9960
        lea edi, [esi + 0x1b8]
        mov ecx, 6
        xor eax, eax
        mov byte ptr [esi + 0x1a8], 0
        rep stosd
        mov ecx, 0x1010101
        pop edi
        mov dword ptr [esi + 0x1a9], ecx
        mov dword ptr [esi + 0x1ad], ecx
        mov dword ptr [esi + 0x1b1], ecx
        mov byte ptr [esi + 0x1b5], cl
        mov byte ptr [esi + 0x1b4], al
        mov byte ptr [esi + 0x1b5], al
        pop esi
        pop ebx
        ret
    }
}

// [0x0072CBF0] sub_0072CBF0 (145 bytes)
extern "C" void ext_0079B9C0();
extern "C" void ext_006D2130();
extern "C" void ext_0072CE00();
extern "C" int mem_008BDCD2;
extern "C" int mem_009969F0;

extern "C" __declspec(naked) void* __fastcall fn_0072CBF0(void* self) {
    __asm {
        push -1
        push offset mem_008BDCD2
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [esp + 0x8], esi
        call ext_0079B9C0
        lea edi, [esi + 0xf0]
        push 4
        push 0x10
        mov ecx, edi
        mov dword ptr [esp + 0x1c], 0
        call ext_006D2130
        lea eax, [edi + 0x10]
        mov dword ptr [edi + 0x14], eax
        lea ecx, [esi + 0x108]
        mov byte ptr [esp + 0x14], 1
        call ext_006B9D10
        lea ecx, [esi + 0x15c]
        mov byte ptr [esp + 0x14], 2
        mov dword ptr [esi + 0x154], 0
        call ext_006B9D10
        mov ecx, esi
        mov byte ptr [esp + 0x14], 3
        mov dword ptr [esi], offset mem_009969F0
        call ext_0072CE00
        mov ecx, dword ptr [esp + 0xc]
        mov eax, esi
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00728410] sub_00728410 (192 bytes)
extern "C" void ext_006E7410();
extern "C" void ext_006E7440();
extern "C" void ext_006E7460();
extern "C" int mem_00AAD034;
extern "C" int mem_00AAD040;
extern "C" int mem_00AAD0B0;
extern "C" __declspec(naked) void __fastcall fn_00728410(void* self) {
    __asm {
        push esi
        mov esi, ecx
        push edi
        lea edi, [esi + 0xef0]
        mov ecx, edi
        call ext_006E7460
        cmp eax, -1
        jg L_end
        mov ecx, dword ptr [esi + 0x10]
        mov eax, dword ptr [ecx]
        call dword ptr [eax + 0x2c]
        test al, al
        je L_end
        mov eax, dword ptr [esi + 0x25c]
        test eax, eax
        jne L_skip1
        push offset mem_00AAD040
        push 0xa
        mov ecx, edi
        call ext_006E7410
    L_skip1:
        mov al, byte ptr [esi + 0x15]
        mov dword ptr [esi + 0x25c], 0
        test al, al
        jne L_else
        mov eax, dword ptr [esi + 0x10]
        push offset mem_00AAD0B0
        push eax
        mov ecx, dword ptr [eax]
        call dword ptr [ecx + 0x3c]
        mov eax, dword ptr [esi + 0x10]
        add esp, 8
        mov edx, dword ptr [eax]
        push offset mem_00AAD034
        push eax
        call dword ptr [edx + 0x3c]
        add esp, 8
        jmp L_after
    L_else:
        mov edx, dword ptr [esi + 0x260]
        inc edx
        mov eax, edx
        mov dword ptr [esi + 0x260], edx
        shl eax, 4
        mov dword ptr [eax + esi + 0x264], 0
    L_after:
        mov edx, dword ptr [esi + 0xee4]
        mov ecx, dword ptr [esi + 0x10]
        inc edx
        mov dword ptr [esi + 0xee4], edx
        mov eax, dword ptr [ecx]
        call dword ptr [eax + 0x30]
        test eax, eax
        je L_end
        push 0xb
        mov ecx, edi
        call ext_006E7440
    L_end:
        pop edi
        pop esi
        ret
    }
}

// [0x0072C110] sub_0072C110 (192 bytes)
extern "C" void ext_006B9D70();
extern "C" void ext_006E7460();
extern "C" void ext_006FE570();
extern "C" void ext_00782E70();
extern "C" int mem_008BCB18;
extern "C" __declspec(naked) void __fastcall fn_0072C110(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        push -1
        push offset mem_008BCB18
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x4c
        push esi
        push edi
        mov edi, dword ptr [esp + 0x68]
        mov esi, ecx
        mov ecx, edi
        call ext_006E7460
        push eax
        lea eax, [esp + 0xc]
        push eax
        call ext_006FE570
        add esp, 0x8
        push 0x0
        lea ecx, [esp + 0xc]
        mov dword ptr [esp + 0x60], 0x0
        call ext_006E7460
        mov ecx, dword ptr [esi]
        push eax
        call ext_00782E70
        test eax, eax
        je short L_fail
        mov ecx, dword ptr [esp + 0x6c]
        mov edx, dword ptr [esp + 0x64]
        push ecx
        push edi
        push edx
        call eax
        add esp, 0xc
        test eax, eax
        jne short L_fail
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x5c], 0xffffffff
        call ext_006B9D70
        pop edi
        mov al, 0x1
        pop esi
        mov ecx, dword ptr [esp + 0x4c]
        mov dword ptr fs:[0], ecx
        add esp, 0x58
        ret 0xc
    L_fail:
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x5c], 0xffffffff
        call ext_006B9D70
        mov ecx, dword ptr [esp + 0x54]
        pop edi
        xor al, al
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x58
        ret 0xc
    }
}

// [0x0072BAF0] sub_0072BAF0 (180 bytes)
extern "C" void ext_006E72A0();
extern "C" void ext_006E72D0();
extern "C" void ext_006D2160();

extern "C" __declspec(naked) void __fastcall fn_0072BAF0(void* self) {
    __asm {
        push -1
        push 0x8bbd97
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x20
        push ebp
        push esi
        push edi
        lea ecx, [esp + 0x10]
        mov dword ptr [esp + 0xc], 0
        call ext_006E72A0
        mov ebp, dword ptr [esp + 0x3c]
        lea eax, [esp + 0x10]
        mov esi, 1
        push eax
        mov ecx, ebp
        mov dword ptr [esp + 0x38], esi
        call ext_006E72D0
        mov dword ptr [esp + 0xc], esi
        mov dword ptr [esp + 0x10], 0x993ce0
        mov eax, dword ptr [esp + 0x14]
        xor edi, edi
        test eax, eax
        mov dword ptr [esp + 0x34], 2
        jle short L_after_loop
L_loop:
        mov ecx, dword ptr [esp + 0x24]
        mov esi, dword ptr [ecx + 4*edi]
        test esi, esi
        je short L_skip
        mov ecx, esi
        call ext_006B9D70
        push esi
        call ext_006A5C5C
        add esp, 4
L_skip:
        mov eax, dword ptr [esp + 0x14]
        inc edi
        cmp edi, eax
        jl short L_loop
L_after_loop:
        lea ecx, [esp + 0x14]
        call ext_006D2250
        lea ecx, [esp + 0x14]
        mov byte ptr [esp + 0x34], 0
        call ext_006D2160
        mov ecx, dword ptr [esp + 0x2c]
        pop edi
        mov eax, ebp
        pop esi
        pop ebp
        mov dword ptr fs:[0], ecx
        add esp, 0x2c
        ret 4
    }
}

// [0x0072FA60] sub_0072FA60 (192 bytes)
extern "C" int mem_008BCB18;
extern "C" int mem_00AAD3A8;
extern "C" int mem_00B5D2C0;
extern "C" int mem_00AA8E24;
extern "C" void ext_00726770();
extern "C" void ext_00726860();
extern "C" void ext_00726AA0();
extern "C" void ext_006B9D80();
extern "C" void ext_0072F8D0();
extern "C" void ext_007268D0();
extern "C" void ext_006B9D70();
extern "C" void ext_00726840();
extern "C" __declspec(naked) int __fastcall fn_0072FA60(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push offset mem_008BCB18
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x4c
        push esi
        mov esi, ecx
        push edi
        push offset mem_00AAD3A8
        mov ecx, dword ptr [esi + 0xac]
        xor edi, edi
        add ecx, 0x4
        call ext_00726770
        test al, al
        je short L_epilog
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_00726860
        test al, al
        je short L_cleanup
        mov ecx, dword ptr [esi + 0xac]
        push offset mem_00B5D2C0
        add ecx, 0x4
        push offset mem_00AA8E24
        call ext_00726AA0
        push eax
        lea ecx, [esp + 0xc]
        call ext_006B9D80
        lea eax, [esp + 0x8]
        mov ecx, esi
        push eax
        mov dword ptr [esp + 0x60], edi
        call ext_0072F8D0
        mov ecx, dword ptr [esi + 0xac]
        mov edi, eax
        add ecx, 0x4
        call ext_007268D0
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x5c], 0xffffffff
        call ext_006B9D70
    L_cleanup:
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_00726840
    L_epilog:
        mov ecx, dword ptr [esp + 0x54]
        mov eax, edi
        pop edi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x58
        ret
    }
}

// [0x00726550] sub_00726550 (192 bytes)
extern "C" void ext_006BA0C0();
extern "C" void ext_006E7460();
extern "C" void ext_006FEE60();
extern "C" __declspec(naked) void __fastcall fn_00726550(void* self, int edx_unused, int arg) {
    __asm {
        push -0x1
        push 0x8bc263
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x98
        push esi
        mov esi, ecx
        push 0xaa9444
        lea ecx, [esp + 0x54]
        lea eax, [esi + 0x18]
        push eax
        push ecx
        call ext_006BA0C0
        add esp, 0xc
        mov edx, dword ptr [esp + 0xac]
        mov ecx, eax
        push edx
        mov dword ptr [esp + 0xa8], 0x0
        call ext_006E7460
        push eax
        lea eax, [esp + 0xc]
        push eax
        call ext_006FEE60
        add esp, 0xc
        add esi, 0x148
        push eax
        mov ecx, esi
        mov byte ptr [esp + 0xa8], 0x1
        call ext_006B9E60
        lea ecx, [esp + 0x4]
        mov byte ptr [esp + 0xa4], 0x0
        call ext_006B9D70
        lea ecx, [esp + 0x50]
        mov dword ptr [esp + 0xa4], 0xffffffff
        call ext_006B9D70
        mov ecx, esi
        call ext_006E7460
        mov ecx, dword ptr [esp + 0x9c]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0xa4
        ret 0x4
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
    }
}

// [0x0072B990] sub_0072B990 (199 bytes)
extern "C" void ext_006A5C5C();
extern "C" void ext_006B9D70();
extern "C" void ext_006D2160();
extern "C" void ext_006D80A0();
extern "C" void ext_006DC2C0();
extern "C" void ext_007641C0();

extern "C" __declspec(naked) void __fastcall fn_0072B990(void* self) {
    __asm {
        push -0x1
        push 0x8bdbec
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x8
        push ebx
        push ebp
        push edi
        mov edi, ecx
        mov dword ptr [esp + 0xc], edi
        mov dword ptr [edi], 0x996988
        mov ecx, dword ptr [edi + 0xf0]
        push 0x0
        mov dword ptr [esp + 0x20], 0x2
        mov eax, dword ptr [ecx]
        call dword ptr [eax + 0x4]
        mov eax, dword ptr [edi + 0x150]
        lea ebx, [edi + 0x150]
        xor ebp, ebp
        test eax, eax
        jle L_after_loop
        push esi
    L_loop:
        mov ecx, dword ptr [edi + 0x160]
        mov esi, dword ptr [ecx + 4*ebp]
        test esi, esi
        mov dword ptr [esp + 0x14], esi
        je L_skip
        lea ecx, [esi + 0x50]
        mov byte ptr [esp + 0x20], 0x3
        call ext_006D80A0
        mov ecx, esi
        mov byte ptr [esp + 0x20], 0x2
        call ext_006B9D70
        push esi
        call ext_006A5C5C
        add esp, 0x4
    L_skip:
        mov eax, dword ptr [ebx]
        inc ebp
        cmp ebp, eax
        jl L_loop
        pop esi
    L_after_loop:
        mov ecx, ebx
        mov byte ptr [esp + 0x1c], 0x1
        call ext_006D2160
        lea ecx, [edi + 0xf4]
        mov byte ptr [esp + 0x1c], 0x0
        call ext_007641C0
        mov ecx, edi
        mov dword ptr [esp + 0x1c], 0xffffffff
        call ext_006DC2C0
        mov ecx, dword ptr [esp + 0x14]
        pop edi
        pop ebp
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0x14
        ret
    }
}

// [0x00724190] sub_00724190 (208 bytes)
extern "C" int mem_009251D0;
extern "C" __declspec(naked) void __fastcall fn_00724190(void* self) {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        push ebx
        push esi
        mov esi, ecx
        xor bl, bl
        push edi
        mov byte ptr [ebp-2], bl
        mov ecx, dword ptr [esi+10h]
        mov eax, dword ptr [ecx]
        call dword ptr [eax+2Ch]
        test al, al
        je L_ret_bl
        mov ecx, dword ptr [esi+10h]
        mov edx, dword ptr [ecx]
        call dword ptr [edx+24h]
        mov ecx, dword ptr [esi+10h]
        mov edi, eax
        lea edx, [ebp-24h]
        push 15h
        mov eax, dword ptr [ecx]
        push edx
        call dword ptr [eax+14h]
        lea eax, [ebp-24h]
        push 0AACDF4h
        push eax
        call dword ptr [mem_009251D0]
        add esp, 8
        test eax, eax
        jne short L_skip1
        mov byte ptr [ebp-2], 1
L_skip1:
        mov ecx, dword ptr [esi+10h]
        lea eax, [ebp-3]
        push 1
        push eax
        mov edx, dword ptr [ecx]
        call dword ptr [edx+14h]
        mov ecx, dword ptr [esi+10h]
        lea eax, [ebp-1]
        push 1
        push eax
        mov edx, dword ptr [ecx]
        call dword ptr [edx+14h]
        mov cl, byte ptr [ebp-1]
        lea eax, [ebp-8]
        test cl, cl
        mov ecx, dword ptr [esi+10h]
        push 4
        push eax
        mov edx, dword ptr [ecx]
        setne bl
        call dword ptr [edx+14h]
        test bl, bl
        je short L_skip2
        mov eax, dword ptr [ebp-8]
        bswap eax
        mov dword ptr [ebp-8], eax
L_skip2:
        mov al, byte ptr [ebp-2]
        cmp al, 1
        jne short L_else
        mov ecx, dword ptr [ebp-8]
        mov byte ptr [esi+16h], bl
        mov dword ptr [esi+4], ecx
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
L_else:
        mov ecx, dword ptr [esi+10h]
        push edi
        mov edx, dword ptr [ecx]
        call dword ptr [edx+28h]
        mov al, byte ptr [ebp-2]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
L_ret_bl:
        pop edi
        mov al, bl
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}

// [0x00725C90] sub_00725C90 (208 bytes)
extern "C" void ext_006B9D70();
extern "C" void ext_006E7460();
extern "C" void ext_00725D60();
extern "C" void ext_00725E10();

extern "C" __declspec(naked) void __fastcall fn_00725C90(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        push -1
        push 0x8bcb18
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x4c
        push ebx
        push esi
        lea eax, [esp + 0x8]
        push edi
        mov ebx, ecx
        push eax
        call ext_00725D60
        lea ecx, [esp + 0xc]
        mov dword ptr [esp + 0x60], 0
        call ext_006E7460
        mov esi, dword ptr [esp + 0x68]
        push eax
        push esi
        mov ecx, ebx
        call ext_00725E10
        push 0xaacb2c
        push esi
        mov ecx, ebx
        call ext_00725E10
        lea ecx, [esp + 0xc]
        call ext_006E7460
        push eax
        push esi
        mov ecx, ebx
        call ext_00725E10
        lea ecx, [esp + 0xc]
        call ext_006E7460
        mov edi, dword ptr [esp + 0x6c]
        push eax
        push edi
        mov ecx, ebx
        call ext_00725E10
        mov ecx, 0x4
        xor edx, edx
        repe cmpsd
        pop edi
        pop esi
        pop ebx
        mov dword ptr [esp + 0x54], -1
        __asm _emit 0x8d
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x00
        je short L_equal
        call ext_006B9D70
        xor al, al
        mov ecx, dword ptr [esp + 0x4c]
        mov dword ptr fs:[0], ecx
        add esp, 0x58
        ret 0x8
    L_equal:
        call ext_006B9D70
        mov ecx, dword ptr [esp + 0x4c]
        mov al, 0x1
        mov dword ptr fs:[0], ecx
        add esp, 0x58
        ret 0x8
    }
}

// [0x0072B890] sub_0072B890 (220 bytes)
extern "C" void ext_006A5C62();
extern "C" void ext_006D2130();
extern "C" void ext_006DC200();
extern "C" void ext_006E73B0();
extern "C" void ext_006E7460();
extern "C" void ext_00714580();
extern "C" void ext_0072B750();

extern "C" __declspec(naked) void __fastcall fn_0072B890(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        push -1
        push 0x8bdbaf
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 0x1c]
        push edi
        lea edi, [esi + 0xf4]
        mov dword ptr [esp + 0x8], esi
        push edi
        call ext_006E7460
        push eax
        mov eax, dword ptr [esp + 0x24]
        push eax
        mov ecx, esi
        call ext_006DC200
        push 1
        push 0xaad0dc
        mov ecx, edi
        mov dword ptr [esp + 0x1c], 0
        call ext_006E73B0
        mov cl, byte ptr [esp + 0x24]
        lea edi, [esi + 0x150]
        neg cl
        sbb cl, cl
        push 4
        and cl, -0x10
        push 0x10
        add cl, 0x72
        mov byte ptr [esp + 0x1c], 1
        mov byte ptr [esi + 0x14c], cl
        mov ecx, edi
        call ext_006D2130
        lea edx, [edi + 0x10]
        mov dword ptr [edi + 0x14], edx
        push 0xe4
        mov byte ptr [esp + 0x18], 2
        mov dword ptr [esi], 0x996988
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp + 0x24], eax
        test eax, eax
        mov byte ptr [esp + 0x14], 3
        je short L_null
        push esi
        mov ecx, eax
        call ext_0072B750
        jmp short L_after
    L_null:
        xor eax, eax
    L_after:
        mov ecx, 0xb60020
        mov byte ptr [esp + 0x14], 2
        mov dword ptr [esi + 0xf0], eax
        call ext_00714580
        mov ecx, dword ptr [esp + 0xc]
        mov eax, esi
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 0xc
    }
}

// [0x00725BE0] sub_00725BE0 (176 bytes)
extern "C" int mem_00AACB1C;
extern "C" int mem_00AACB20;
extern "C" int mem_00AACB24;
extern "C" int mem_00AACB28;
extern "C" int mem_00AACB2C;
extern "C" void ext_006B9D70();
extern "C" void ext_006E7460();
extern "C" void ext_00725D60();
extern "C" void ext_00725DE0();
extern "C" __declspec(naked) void __fastcall fn_00725BE0(void* self, int edx_unused, void* out) {
    __asm {
        push -1
        push 0x8bcb18
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x4c
        push esi
        lea eax, [esp + 0x4]
        push edi
        mov esi, ecx
        push eax
        call ext_00725D60
        mov edi, dword ptr [esp + 0x64]
        mov edx, dword ptr [mem_00AACB1C]
        mov ecx, edi
        mov dword ptr [esp + 0x5c], 0x0
        mov dword ptr [ecx], edx
        mov eax, dword ptr [mem_00AACB20]
        mov dword ptr [ecx + 0x4], eax
        mov edx, dword ptr [mem_00AACB24]
        mov dword ptr [ecx + 0x8], edx
        mov eax, dword ptr [mem_00AACB28]
        mov dword ptr [ecx + 0xc], eax
        lea ecx, [esp + 0x8]
        call ext_006E7460
        push eax
        push edi
        mov ecx, esi
        call ext_00725DE0
        push offset mem_00AACB2C
        push edi
        mov ecx, esi
        call ext_00725DE0
        lea ecx, [esp + 0x8]
        call ext_006E7460
        push eax
        push edi
        mov ecx, esi
        call ext_00725DE0
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x5c], 0xffffffff
        call ext_006B9D70
        mov ecx, dword ptr [esp + 0x54]
        pop edi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x58
        ret 0x4
    }
}

// [0x0072CD20] sub_0072CD20 (224 bytes)
extern "C" void ext_006A5C5C();
extern "C" void ext_006B9D70();
extern "C" void ext_006D2160();
extern "C" void ext_006D2250();
extern "C" void ext_0079BA90();
extern "C" int mem_008BDD25;
extern "C" int mem_009969F0;

extern "C" __declspec(naked) void __fastcall fn_0072CD20(void* self) {
    __asm {
        push -1
        push offset mem_008BDD25
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x8
        push ebx
        mov ebx, ecx
        push ebp
        push edi
        mov dword ptr [esp + 0xc], ebx
        mov dword ptr [ebx], offset mem_009969F0
        mov edi, dword ptr [ebx + 0xf0]
        lea ebp, [ebx + 0xf0]
        test edi, edi
        mov dword ptr [esp + 0x1c], 0x3
        je short L_after
        push esi
    L_loop:
        mov eax, dword ptr [ebp + 0x10]
        dec edi
        mov esi, dword ptr [eax + 4*edi]
        test esi, esi
        mov dword ptr [esp + 0x14], esi
        je short L_next
        lea ecx, [esi + 0x98]
        mov byte ptr [esp + 0x20], 0x5
        call ext_006B9D70
        lea ecx, [esi + 0x4c]
        mov byte ptr [esp + 0x20], 0x4
        call ext_006B9D70
        mov ecx, esi
        mov byte ptr [esp + 0x20], 0x3
        call ext_006B9D70
        push esi
        call ext_006A5C5C
        add esp, 0x4
    L_next:
        test edi, edi
        jne short L_loop
        pop esi
    L_after:
        mov ecx, ebp
        call ext_006D2250
        lea ecx, [ebx + 0x15c]
        mov byte ptr [esp + 0x1c], 0x2
        call ext_006B9D70
        lea ecx, [ebx + 0x108]
        mov byte ptr [esp + 0x1c], 0x1
        call ext_006B9D70
        mov ecx, ebp
        mov byte ptr [esp + 0x1c], 0x0
        call ext_006D2160
        mov ecx, ebx
        mov dword ptr [esp + 0x1c], 0xffffffff
        call ext_0079BA90
        mov ecx, dword ptr [esp + 0x14]
        pop edi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x14
        ret
    }
}

// [0x0072FDD0] sub_0072FDD0 (224 bytes)
extern "C" void ext_00724FA0();
extern "C" void ext_00725940();
extern "C" void ext_007266C0();
extern "C" void ext_0072DBB0();
extern "C" void ext_0079C210();

extern "C" __declspec(naked) void __fastcall fn_0072FDD0(void* self) {
    __asm {
        sub esp, 0xc
        lea eax, [esp + 0x8]
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x00
        push ebx
        push esi
        mov esi, ecx
        push eax
        lea ecx, [esp + 0x10]
        push ecx
        push edx
        mov ecx, esi
        call ext_0072DBB0
        mov eax, dword ptr [esp + 0x8]
        cmp eax, 0x5
        jne L_else
        mov eax, dword ptr [esp + 0xc]
        cmp eax, 0x8
        jne L_else
        mov eax, dword ptr [esp + 0x10]
        test eax, eax
        jne L_nz
        mov al, byte ptr [esp + 0x18]
        test al, al
        sete bl
        test al, al
        je L_b
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_00724FA0
        mov bl, al
    L_b:
        test bl, bl
        je L_c
        mov ecx, dword ptr [esi + 0xac]
        push 0xaad3cc
        add ecx, 0x4
        call ext_007266C0
        test eax, eax
        jne L_x
        push 0x1
        jmp L_y
    L_x:
        push 0x0
    L_y:
        mov ecx, dword ptr [esi + 0xac]
        call ext_0079C210
    L_c:
        mov al, byte ptr [esp + 0x18]
        test al, al
        je L_end
        test bl, bl
        je L_end
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_00725940
        pop esi
        pop ebx
        add esp, 0xc
        ret 0x4
    L_else:
        jge L_nz
        mov ecx, dword ptr [esi + 0xac]
        push 0x1
        call ext_0079C210
        pop esi
        pop ebx
        add esp, 0xc
        ret 0x4
    L_nz:
        mov ecx, dword ptr [esi + 0xac]
        push 0x0
        call ext_0079C210
    L_end:
        pop esi
        pop ebx
        add esp, 0xc
        ret 0x4
    }
}

// [0x00722F80] sub_00722F80 (224 bytes)
extern "C" void ext_006D2160();
extern "C" void ext_00723920();
extern "C" void ext_007641C0();
extern "C" void ext_00782D20();
extern "C" int mem_008BD636;
extern "C" int mem_00996808;

extern "C" __declspec(naked) void __fastcall fn_00722F80(void* self) {
    __asm {
        push    -0x1
        push    offset mem_008BD636
        mov     eax, dword ptr fs:[0x0]
        push    eax
        mov     dword ptr fs:[0x0], esp
        push    ecx
        push    esi
        mov     esi, ecx
        mov     dword ptr [esp + 0x4], esi
        mov     dword ptr [esi], offset mem_00996808
        mov     dword ptr [esp + 0x10], 0x9
        call    ext_00723920
        lea     ecx, [esi + 0xef0]
        mov     byte ptr [esp + 0x10], 0x8
        call    ext_007641C0
        lea     ecx, [esi + 0x238]
        mov     byte ptr [esp + 0x10], 0x7
        call    ext_00782D20
        lea     ecx, [esi + 0x1ec]
        mov     byte ptr [esp + 0x10], 0x6
        call    ext_006B9D70
        lea     ecx, [esi + 0x1ac]
        mov     byte ptr [esp + 0x10], 0x5
        call    ext_006D2160
        lea     ecx, [esi + 0x194]
        mov     byte ptr [esp + 0x10], 0x4
        call    ext_006D2160
        lea     ecx, [esi + 0x148]
        mov     byte ptr [esp + 0x10], 0x3
        call    ext_006B9D70
        lea     ecx, [esi + 0xfc]
        mov     byte ptr [esp + 0x10], 0x2
        call    ext_006B9D70
        lea     ecx, [esi + 0xb0]
        mov     byte ptr [esp + 0x10], 0x1
        call    ext_006B9D70
        lea     ecx, [esi + 0x64]
        mov     byte ptr [esp + 0x10], 0x0
        call    ext_006B9D70
        lea     ecx, [esi + 0x18]
        mov     dword ptr [esp + 0x10], -0x1
        call    ext_006B9D70
        mov     ecx, dword ptr [esp + 0x8]
        pop     esi
        mov     dword ptr fs:[0x0], ecx
        add     esp, 0x10
        ret
    }
}

// [0x00723950] sub_00723950 (224 bytes)
extern "C" void ext_00789810();
extern "C" void ext_00789920();
extern "C" void ext_006E7440();
extern "C" void ext_007892B0();

extern "C" __declspec(naked) int __fastcall fn_00723950(void* self) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8bd74b
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x418
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 0x8], 0x1
        je L_ret1
        mov ecx, dword ptr [esi + 0xc]
        test ecx, ecx
        je L_ret1
        mov eax, dword ptr [ecx]
        call dword ptr [eax + 0x2c]
        test al, al
        je L_ret1
        mov al, byte ptr [esi + 0x15]
        test al, al
        je short L_ret1
        mov al, byte ptr [esi + 0x17]
        test al, al
        je short L_ret1
        mov ecx, dword ptr [esi + 0xc]
        push 0x0
        push 0x1
        push ecx
        push 0x0
        lea ecx, [esp + 0x14]
        call ext_00789810
        lea ecx, [esp + 0x4]
        mov dword ptr [esp + 0x424], 0x0
        call ext_00789920
        test al, al
        jne short L_destroy_ret1
        push 0x6
        lea ecx, [esi + 0xef0]
        call ext_006E7440
        lea ecx, [esp + 0x4]
        mov dword ptr [esp + 0x424], 0xffffffff
        call ext_007892B0
        xor al, al
        pop esi
        mov ecx, dword ptr [esp + 0x418]
        mov dword ptr fs:[0], ecx
        add esp, 0x424
        ret
    L_destroy_ret1:
        lea ecx, [esp + 0x4]
        mov dword ptr [esp + 0x424], 0xffffffff
        call ext_007892B0
    L_ret1:
        mov ecx, dword ptr [esp + 0x41c]
        mov al, 0x1
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x424
        ret
    }
}

// [0x00720170] sub_00720170 (240 bytes)
extern "C" __declspec(naked) void __fastcall fn_00720170(void* self) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -0x8
        sub esp, 0x40
        mov eax, dword ptr [ebp + 0x10]
        fld qword ptr [eax]
        fld qword ptr [eax + 0x8]
        fld qword ptr [eax + 0x10]
        fld qword ptr [eax + 0x18]
        mov eax, dword ptr [ebp + 0x14]
        fld qword ptr [eax]
        fld qword ptr [eax + 0x8]
        fld qword ptr [eax + 0x10]
        fstp qword ptr [esp + 0x30]
        fld qword ptr [eax + 0x18]
        fstp qword ptr [esp + 0x38]
        fld qword ptr [esp + 0x30]
        fmul st, st(5)
        fld qword ptr [esp + 0x38]
        fmul st, st(7)
        mov eax, dword ptr [ebp + 0xc]
        faddp st(1), st
        fld st(3)
        fmul st, st(3)
        faddp st(1), st
        fld st(1)
        fmul st, st(5)
        fsubp st(1), st
        __asm _emit 0xdd
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x00
        fld st(0)
        fmul st, st(3)
        fld qword ptr [esp + 0x30]
        fmul st, st(7)
        fsubp st(1), st
        fld qword ptr [esp + 0x38]
        fmul st, st(6)
        faddp st(1), st
        fld st(4)
        fmul st, st(3)
        faddp st(1), st
        fstp qword ptr [esp + 0x8]
        fld qword ptr [esp + 0x30]
        fmul st, st(3)
        fld st(1)
        fmul st, st(7)
        mov ecx, dword ptr [esp + 0x8]
        mov edx, dword ptr [esp + 0xc]
        mov dword ptr [eax + 0x8], ecx
        mov dword ptr [eax + 0xc], edx
        faddp st(1), st
        fld st(5)
        fmul st, st(3)
        fsubp st(1), st
        fld qword ptr [esp + 0x38]
        fmul st, st(5)
        faddp st(1), st
        fstp qword ptr [esp + 0x10]
        fld qword ptr [esp + 0x38]
        fmul st, st(3)
        fxch st(2)
        fmul st, st(6)
        mov ecx, dword ptr [esp + 0x10]
        mov edx, dword ptr [esp + 0x14]
        mov dword ptr [eax + 0x10], ecx
        fsubp st(2), st
        fmul st, st(4)
        fsubp st(1), st
        fld qword ptr [esp + 0x30]
        fmul st, st(3)
        fsubp st(1), st
        fstp qword ptr [esp + 0x18]
        fstp st(0)
        fstp st(0)
        fstp st(0)
        fstp st(0)
        __asm _emit 0xdd
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x00
        fstp qword ptr [eax]
        mov ecx, dword ptr [esp + 0x18]
        mov dword ptr [eax + 0x14], edx
        mov edx, dword ptr [esp + 0x1c]
        mov dword ptr [eax + 0x18], ecx
        mov dword ptr [eax + 0x1c], edx
        mov esp, ebp
        pop ebp
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
    }
}

// [0x00722570] sub_00722570 (240 bytes)
extern "C" void ext_00722660();
extern "C" void ext_007226A0();
extern "C" void ext_00722730();
extern "C" int mem_009967F0;
extern "C" int mem_009967E8;

extern "C" __declspec(naked) void __cdecl fn_00722570(double* out, double* a, double* b, double* c) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -8
        sub esp, 8
        mov ecx, dword ptr [ebp + 0xc]
        cmp dword ptr [ecx], 0
        jne L_general
        cmp dword ptr [ecx + 4], 0x40590000
        jne L_check_neg
        mov eax, dword ptr [ebp + 0x10]
        mov ecx, dword ptr [ebp + 0x8]
        mov edx, dword ptr [eax]
        mov dword ptr [ecx], edx
        mov eax, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], eax
        mov esp, ebp
        pop ebp
        ret
L_check_neg:
        cmp dword ptr [ecx], 0
        jne L_general
        cmp dword ptr [ecx + 4], 0xc0590000
        jne L_general
        mov eax, dword ptr [ebp + 0x14]
        mov ecx, dword ptr [ebp + 0x8]
        mov edx, dword ptr [eax]
        mov dword ptr [ecx], edx
        mov eax, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], eax
        mov esp, ebp
        pop ebp
        ret
L_general:
        fld qword ptr [ecx]
        _emit 0xdd
        _emit 0x54
        _emit 0x24
        _emit 0x00
        fcomp qword ptr [mem_009967F0]
        fnstsw ax
        test ah, 0x41
        jne L_le500
        mov eax, dword ptr [ebp + 0x14]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [eax]
        mov eax, dword ptr [ebp + 0x10]
        push ecx
        push edx
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [eax]
        mov eax, dword ptr [esp + 0xc]
        push ecx
        mov ecx, dword ptr [esp + 0xc]
        push edx
        push eax
        push ecx
        call ext_007226A0
        mov edx, dword ptr [ebp + 0x8]
        add esp, 0x18
        fstp qword ptr [edx]
        mov esp, ebp
        pop ebp
        ret
L_le500:
        fld qword ptr [ecx]
        _emit 0xdd
        _emit 0x54
        _emit 0x24
        _emit 0x00
        fcomp qword ptr [mem_009967E8]
        fnstsw ax
        test ah, 0x1
        mov eax, dword ptr [ebp + 0x14]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [eax]
        mov eax, dword ptr [ebp + 0x10]
        push ecx
        push edx
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [eax]
        mov eax, dword ptr [esp + 0xc]
        push ecx
        mov ecx, dword ptr [esp + 0xc]
        push edx
        push eax
        push ecx
        je L_call660
        call ext_00722730
        mov edx, dword ptr [ebp + 0x8]
        add esp, 0x18
        fstp qword ptr [edx]
        mov esp, ebp
        pop ebp
        ret
L_call660:
        call ext_00722660
        mov edx, dword ptr [ebp + 0x8]
        add esp, 0x18
        fstp qword ptr [edx]
        mov esp, ebp
        pop ebp
        ret
    }
}

// [0x007289E0] sub_007289E0 (240 bytes)
extern "C" __declspec(naked) void __fastcall fn_007289E0(void* self) {
    __asm {
        push ecx
        push esi
        mov esi, ecx
        mov al, byte ptr [esi + 0x15]
        test al, al
        je L_skip
        mov ecx, dword ptr [esi + 0x10]
        mov byte ptr [esp + 0x7], 0x0
        push edi
        mov eax, dword ptr [ecx]
        call dword ptr [eax + 0x24]
        mov edi, eax
        mov ecx, esi
        push edi
        call ext_00728880
        mov ecx, dword ptr [esi + 0x260]
        push 0x4
        shl ecx, 0x4
        mov dword ptr [ecx + esi + 0x264], edi
        mov edx, dword ptr [esi + 0x260]
        shl edx, 0x4
        mov dword ptr [edx + esi + 0x268], 0x0
        mov eax, dword ptr [esi + 0x260]
        shl eax, 0x4
        mov dword ptr [eax + esi + 0x26c], 0x0
        mov ecx, dword ptr [esi + 0x260]
        add ecx, 0x27
        shl ecx, 0x4
        mov dword ptr [ecx + esi], 0x0
        mov eax, dword ptr [esi + 0x260]
        mov ecx, dword ptr [esi + 0x10]
        shl eax, 0x4
        mov edx, dword ptr [ecx]
        lea eax, [eax + esi + 0x268]
        push eax
        call dword ptr [edx + 0x1c]
        mov eax, dword ptr [esi + 0x260]
        mov ecx, dword ptr [esi + 0x10]
        shl eax, 0x4
        mov edx, dword ptr [ecx]
        push 0x4
        lea eax, [eax + esi + 0x26c]
        push eax
        call dword ptr [edx + 0x1c]
        mov eax, dword ptr [esi + 0x260]
        mov ecx, dword ptr [esi + 0x10]
        add eax, 0x27
        push 0x4
        mov edx, dword ptr [ecx]
        shl eax, 0x4
        add eax, esi
        push eax
        call dword ptr [edx + 0x1c]
        mov ecx, dword ptr [esi + 0x10]
        lea eax, [esp + 0xb]
        push 0x1
        push eax
        mov edx, dword ptr [ecx]
        call dword ptr [edx + 0x1c]
        pop edi
    L_skip:
        mov ecx, dword ptr [esi + 0x10]
        mov edx, dword ptr [ecx]
        call dword ptr [edx + 0x30]
        test eax, eax
        je L_end
        push 0xb
        lea ecx, [esi + 0xef0]
        call ext_006E7440
    L_end:
        pop esi
        pop ecx
        ret
    }
}

// [0x00725F40] sub_00725F40 (240 bytes)
extern "C" void ext_006B9D10();
extern "C" void ext_006B9D70();
extern "C" void ext_006B9D80();
extern "C" void ext_006E7460();
extern "C" void ext_00726030();
extern "C" void ext_007275F0();
extern "C" void ext_007279A0();
extern "C" void ext_007283B0();

extern "C" __declspec(naked) int __fastcall fn_00725F40(void* self, int edx_unused, int arg) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8bcb18
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x4c
        push esi
        mov esi, ecx
        push edi
        mov al, byte ptr [esi + 0x1e8]
        test al, al
        jne L_fail
        mov al, byte ptr [esi + 0x15]
        test al, al
        je L_fail
        mov edi, dword ptr [esp + 0x64]
        test edi, edi
        je L_fail
        mov eax, dword ptr [esi + 0x250]
        mov ecx, dword ptr [esi + 0x24c]
        cmp eax, ecx
        jne L_fail
        push 0xaacf70
        mov ecx, esi
        call ext_007275F0
        lea ecx, [esp + 0x8]
        call ext_006B9D10
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x5c], 0x0
        push ecx
        sub esp, 0x4c
        mov ecx, esp
        mov dword ptr [esp + 0xb4], esp
        push edi
        call ext_006B9D80
        mov ecx, esi
        call ext_00726030
        lea ecx, [esp + 0x8]
        call ext_006E7460
        push eax
        mov ecx, esi
        call ext_007279A0
        mov ecx, esi
        call ext_007283B0
        lea ecx, [esp + 0x8]
        mov byte ptr [esi + 0x1e8], 0x1
        mov dword ptr [esp + 0x5c], 0xffffffff
        call ext_006B9D70
        mov al, 0x1
        mov ecx, dword ptr [esp + 0x54]
        mov dword ptr fs:[0x0], ecx
        pop edi
        pop esi
        add esp, 0x58
        ret 0x4
    L_fail:
        mov ecx, dword ptr [esp + 0x54]
        pop edi
        xor al, al
        mov dword ptr fs:[0x0], ecx
        pop esi
        add esp, 0x58
        ret 0x4
    }
}

// [0x00723A40] sub_00723A40 (240 bytes)
extern "C" void ext_006B9EC0();
extern "C" void ext_00724F00();
extern "C" void ext_00782D30();
extern "C" void ext_00789AD0();
extern "C" __declspec(naked) void __fastcall fn_00723A40(void* self) {
    __asm {
        push ebx
        push esi
        mov esi, ecx
        xor ebx, ebx
        mov ecx, dword ptr [esi + 0x10]
        mov byte ptr [esi + 0x14], bl
        cmp ecx, ebx
        mov byte ptr [esi + 0x15], bl
        mov byte ptr [esi + 0x16], bl
        mov byte ptr [esi + 0x17], bl
        mov dword ptr [esi + 0x4], 0x1770
        mov dword ptr [esi + 0x8], ebx
        je short L_skip_release
        mov eax, dword ptr [ecx]
        push 0x1
        call dword ptr [eax]
    L_skip_release:
        push offset mem_00B5D2C0
        lea ecx, [esi + 0x18]
        mov dword ptr [esi + 0xc], ebx
        mov dword ptr [esi + 0x10], ebx
        call ext_006B9EC0
        push offset mem_00B5D2C0
        lea ecx, [esi + 0x64]
        call ext_006B9EC0
        push offset mem_00B5D2C0
        lea ecx, [esi + 0xb0]
        call ext_006B9EC0
        push offset mem_00B5D2C0
        lea ecx, [esi + 0xfc]
        call ext_006B9EC0
        push offset mem_00B5D2C0
        lea ecx, [esi + 0x148]
        call ext_006B9EC0
        lea ecx, [esi + 0x194]
        call ext_006D2250
        lea ecx, [esi + 0x1ac]
        call ext_006D2250
        lea ecx, [esi + 0x238]
        call ext_00782D30
        mov ecx, esi
        call ext_00724F00
        cmp byte ptr [esi + 0x254], bl
        je short L_clear_flag
        push edi
        mov edi, dword ptr [esi + 0x258]
        cmp edi, ebx
        je short L_no_obj
        mov ecx, edi
        call ext_00789AD0
        push edi
        call ext_006A5C5C
        add esp, 0x4
    L_no_obj:
        mov dword ptr [esi + 0x258], ebx
        mov byte ptr [esi + 0x254], bl
        mov byte ptr [esi + 0xf48], bl
        pop edi
        pop esi
        pop ebx
        ret
    L_clear_flag:
        mov byte ptr [esi + 0xf48], bl
        pop esi
        pop ebx
        ret
    }
}

// [0x00725340] sub_00725340 (256 bytes)
extern "C" int mem_00AACB3C;
extern "C" __declspec(naked) void __fastcall fn_00725340(void* self, int edx_unused, int a1, int* a2, int* a3) {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0x98
        push ebx
        mov ebx, dword ptr [ebp + 0x8]
        mov eax, ebx
        push esi
        mov esi, ecx
        and eax, 0xf
        sub ebx, eax
        mov dword ptr [ebp - 0x8], esi
        mov ecx, dword ptr [esi + 0x10]
        sub ebx, 0x90
        push ebx
        push 0x0
        mov edx, dword ptr [ecx]
        call dword ptr [edx + 0x20]
        mov ecx, dword ptr [esi + 0x10]
        lea edx, [ebp - 0x98]
        push 0x80
        push edx
        mov eax, dword ptr [ecx]
        call dword ptr [eax + 0x14]
        cmp eax, 0x80
        sete al
        test al, al
        mov byte ptr [ebp - 0x1], al
        je L_end2
        mov al, byte ptr [esi + 0x16]
        test al, al
        je short L_s1
        mov eax, dword ptr [ebp - 0x98]
        bswap eax
        mov dword ptr [ebp - 0x98], eax
        mov al, byte ptr [esi + 0x16]
        test al, al
        je short L_s1
        mov eax, dword ptr [ebp - 0x94]
        bswap eax
        mov dword ptr [ebp - 0x94], eax
    L_s1:
        mov ecx, dword ptr [esi + 0x10]
        lea edx, [ebp - 0x18]
        push 0x10
        push edx
        mov eax, dword ptr [ecx]
        call dword ptr [eax + 0x14]
        cmp eax, 0x10
        sete al
        test al, al
        mov byte ptr [ebp - 0x1], al
        je short L_end2
        push edi
        mov ecx, 0x4
        mov edi, offset mem_00AACB3C
        lea esi, [ebp - 0x18]
        xor eax, eax
        repe cmpsd
        sete al
        test al, al
        mov byte ptr [ebp - 0x1], al
        pop edi
        je short L_416
        mov eax, dword ptr [ebp + 0xc]
        mov ecx, dword ptr [ebp - 0x98]
        test ecx, ecx
        mov dword ptr [eax], 0x0
        jbe short L_540b
        sub ebx, ecx
        mov dword ptr [eax], ebx
    L_540b:
        mov ecx, dword ptr [ebp + 0x10]
        mov edx, dword ptr [ebp - 0x94]
        mov dword ptr [ecx], edx
    L_416:
        mov esi, dword ptr [ebp - 0x8]
    L_end2:
        mov ecx, dword ptr [esi + 0x10]
        mov edx, dword ptr [ebp + 0x8]
        push edx
        push 0x0
        mov eax, dword ptr [ecx]
        call dword ptr [eax + 0x20]
        mov al, byte ptr [ebp - 0x1]
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0xc
    }
}

// [0x00725840] sub_00725840 (256 bytes)
extern "C" __declspec(naked) void __fastcall fn_00725840(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0x90
        push ebx
        push esi
        mov ebx, ecx
        push edi
        mov ecx, 0x20
        xor eax, eax
        lea edi, [ebp - 0x90]
        rep stosd
        mov ecx, dword ptr [ebx + 0x10]
        mov eax, dword ptr [ecx]
        call dword ptr [eax + 0x24]
        mov edi, eax
        mov esi, 0x10
        mov ecx, edi
        and ecx, 0xf
        sub esi, ecx
        je short L_aligned
        mov ecx, dword ptr [ebx + 0x10]
        xor edx, edx
        mov dword ptr [ebp - 0x10], edx
        push esi
        mov dword ptr [ebp - 0xc], edx
        mov dword ptr [ebp - 0x8], edx
        mov dword ptr [ebp - 0x4], edx
        mov eax, dword ptr [ecx]
        lea edx, [ebp - 0x10]
        push edx
        call dword ptr [eax + 0x1c]
        cmp eax, esi
        je short L_aligned
        pop edi
        pop esi
        xor al, al
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0x8
    L_aligned:
        mov eax, dword ptr [ebp + 0x8]
        test eax, eax
        jbe short L_store1
        cmp eax, edi
        jae short L_store1
        sub esi, eax
        add esi, edi
        mov dword ptr [ebp - 0x90], esi
    L_store1:
        mov eax, dword ptr [ebp + 0xc]
        mov dword ptr [ebp - 0x8c], eax
        mov al, byte ptr [ebx + 0x16]
        test al, al
        je short L_noswap
        mov eax, dword ptr [ebp - 0x90]
        bswap eax
        mov dword ptr [ebp - 0x90], eax
        mov eax, dword ptr [ebp - 0x8c]
        bswap eax
        mov dword ptr [ebp - 0x8c], eax
    L_noswap:
        mov ecx, dword ptr [ebx + 0x10]
        lea eax, [ebp - 0x90]
        push 0x80
        push eax
        mov edx, dword ptr [ecx]
        call dword ptr [edx + 0x1c]
        mov ecx, dword ptr [ebx + 0x10]
        push 0x10
        push 0xaacb3c
        mov edx, dword ptr [ecx]
        call dword ptr [edx + 0x1c]
        mov ecx, dword ptr [ebx + 0x10]
        mov eax, dword ptr [ecx]
        call dword ptr [eax + 0x30]
        test eax, eax
        je short L_ret1
        push 0xb
        lea ecx, [ebx + 0xef0]
        call ext_006E7440
        pop edi
        pop esi
        xor al, al
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0x8
    L_ret1:
        pop edi
        pop esi
        mov al, 0x1
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0x8
    }
}

// [0x00725E40] sub_00725E40 (256 bytes)
extern "C" void ext_006B9D80();
extern "C" void ext_006BA780();
extern "C" void ext_00726180();
extern "C" __declspec(naked) int __fastcall fn_00725E40(void* self, int edx_unused, int arg) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8b9073
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x9c
        push ebx
        push esi
        mov esi, ecx
        xor ebx, ebx
        cmp byte ptr [esi + 0x1e8], bl
        je L_false
        lea ecx, [esp + 0xc]
        call ext_006B9D10
        lea eax, [esp + 0xc]
        lea edx, [esi + 0x1ec]
        push eax
        mov dword ptr [esp + 0xb0], ebx
        sub esp, 0x4c
        mov ecx, esp
        mov dword ptr [esp + 0x58], esp
        push edx
        call ext_006B9D20
        mov ecx, esi
        call ext_00726180
        mov eax, dword ptr [esp + 0xb4]
        lea ecx, [esp + 0x58]
        push eax
        call ext_006B9D80
        lea ecx, [esp + 0xc]
        mov byte ptr [esp + 0xac], 0x1
        push ecx
        lea ecx, [esp + 0x5c]
        call ext_006BA780
        test al, al
        je short L_fail
        lea ecx, [esp + 0x58]
        mov byte ptr [esi + 0x1e8], bl
        mov byte ptr [esp + 0xac], bl
        call ext_006B9D70
        lea ecx, [esp + 0xc]
        mov dword ptr [esp + 0xac], 0xffffffff
        call ext_006B9D70
    L_false:
        mov al, 1
    L_epilogue:
        mov ecx, dword ptr [esp + 0xa4]
        pop esi
        mov dword ptr fs:[0x0], ecx
        pop ebx
        add esp, 0xa8
        ret 0x4
    L_fail:
        lea ecx, [esp + 0x58]
        mov byte ptr [esp + 0xac], bl
        call ext_006B9D70
        lea ecx, [esp + 0xc]
        mov dword ptr [esp + 0xac], 0xffffffff
        call ext_006B9D70
        xor al, al
        jmp short L_epilogue
    }
}

// [0x0072A750] sub_0072A750 (256 bytes)
extern "C" void ext_006D3880();
extern "C" void ext_006D7970();
extern "C" void ext_006D7990();
extern "C" void ext_006D7AA0();
extern "C" void ext_006DEEC0();
extern "C" void ext_0070CF00();
extern "C" void ext_0070CF10();
extern "C" void ext_0070CF50();
extern "C" void ext_0070D0B0();
extern "C" void ext_007299C0();
extern "C" void ext_00729A00();
extern "C" void ext_0072B2D0();
extern "C" __declspec(naked) void __fastcall fn_0072A750(void* self) {
    __asm {
        sub esp, 0x8
        push ebx
        push ebp
        mov ebp, ecx
        mov ecx, dword ptr [esp + 0x14]
        mov dword ptr [esp + 0x8], ebp
        call ext_0070CF00
        xor ebx, ebx
        mov dword ptr [esp + 0xc], eax
        test eax, eax
        jle L_end
        push esi
        mov esi, dword ptr [esp + 0x20]
        push edi
    L_loop:
        mov eax, dword ptr [esp + 0x2c]
        mov ecx, dword ptr [esp + 0x28]
        mov edi, dword ptr [esi]
        push eax
        push ecx
        mov ecx, dword ptr [esp + 0x24]
        push ebx
        call ext_0070CF10
        mov ecx, eax
        call ext_006DEEC0
        push eax
        mov ecx, esi
        call dword ptr [edi + 0x40]
        mov ecx, dword ptr [ebp]
        call ext_006D3880
        mov ecx, dword ptr [esp + 0x1c]
        push ebx
        mov edi, eax
        call ext_0070CF10
        push eax
        mov ecx, edi
        call ext_0072B2D0
        mov edx, dword ptr [esi]
        mov ecx, esi
        call dword ptr [edx + 0x30]
        mov ebp, eax
        mov eax, dword ptr [esi]
        mov ecx, esi
        call dword ptr [eax + 0x2c]
        imul ebp, eax
        push ebp
        mov ecx, edi
        call ext_006D7970
        push 0x0
        mov ecx, edi
        call ext_006D7990
        mov ebp, dword ptr [esi]
        mov ecx, edi
        call ext_006DEEC0
        push eax
        mov ecx, esi
        call dword ptr [ebp + 0x28]
        mov ebp, dword ptr [esi]
        mov ecx, edi
        call ext_006D7AA0
        push eax
        mov ecx, esi
        call dword ptr [ebp + 0x34]
        mov ebp, dword ptr [esp + 0x10]
        push edi
        mov ecx, ebp
        call ext_007299C0
        push edi
        mov ecx, ebp
        call ext_00729A00
        mov edx, dword ptr [esi]
        push 0x0
        mov ecx, esi
        call dword ptr [edx + 0x4]
        mov ecx, dword ptr [esp + 0x1c]
        push ebx
        call ext_0070CF50
        mov ecx, dword ptr [esp + 0x20]
        push eax
        push edi
        call ext_0070D0B0
        mov eax, dword ptr [esp + 0x14]
        inc ebx
        cmp ebx, eax
        jl L_loop
        pop edi
        pop esi
    L_end:
        pop ebp
        pop ebx
        add esp, 0x8
        ret 0x14
    }
}

// [0x00728260] sub_00728260 (272 bytes)
extern "C" void ext_006E7410();
extern "C" void ext_006E7440();
extern "C" void ext_006E7460();
extern "C" int mem_00AAD040;
extern "C" __declspec(naked) void __fastcall fn_00728260(void* self, int edx_unused, int arg) {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0x8
        push esi
        mov esi, ecx
        push edi
        lea edi, [esi + 0xef0]
        mov ecx, edi
        call ext_006E7460
        cmp eax, -1
        jle short L_286
        pop edi
        xor al, al
        pop esi
        mov esp, ebp
        pop ebp
        ret 0x4
    L_286:
        mov ecx, dword ptr [esi + 0x10]
        mov eax, dword ptr [ecx]
        call dword ptr [eax + 0x2c]
        test al, al
        jne short L_29a
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ret 0x4
    L_29a:
        mov eax, dword ptr [esi + 0x25c]
        test eax, eax
        jne short L_2bc
        push offset mem_00AAD040
        push 0xa
        mov ecx, edi
        call ext_006E7410
        pop edi
        xor al, al
        pop esi
        mov esp, ebp
        pop ebp
        ret 0x4
    L_2bc:
        mov al, byte ptr [esi + 0x15]
        test al, al
        je short L_334
        mov ecx, dword ptr [esi + 0x10]
        mov byte ptr [ebp - 0x1], 0x52
        lea eax, [ebp - 0x1]
        push 0x1
        mov edx, dword ptr [ecx]
        push eax
        call dword ptr [edx + 0x1c]
        mov al, byte ptr [esi + 0x16]
        test al, al
        je short L_2f0
        mov eax, dword ptr [ebp + 0x8]
        bswap eax
        mov ecx, dword ptr [esi + 0x10]
        mov dword ptr [ebp - 0x8], eax
        push 0x4
        lea eax, [ebp - 0x8]
        mov edx, dword ptr [ecx]
        jmp short L_2fa
    L_2f0:
        mov ecx, dword ptr [esi + 0x10]
        push 0x4
        lea eax, [ebp + 0x8]
        mov edx, dword ptr [ecx]
    L_2fa:
        push eax
        call dword ptr [edx + 0x1c]
        mov ecx, dword ptr [esi + 0x260]
        shl ecx, 0x4
        mov edx, dword ptr [ecx + esi + 0x26c]
        lea eax, [ecx + esi + 0x26c]
        inc edx
        mov dword ptr [eax], edx
        mov edx, dword ptr [esi + 0x260]
        mov ecx, dword ptr [ebp + 0x8]
        add edx, 0x27
        shl edx, 0x4
        add ecx, 0x5
        lea eax, [edx + esi]
        mov edx, dword ptr [edx + esi]
        add edx, ecx
        mov dword ptr [eax], edx
    L_334:
        mov edx, dword ptr [esi + 0x25c]
        mov ecx, dword ptr [esi + 0x10]
        inc edx
        mov dword ptr [esi + 0x25c], edx
        mov edx, dword ptr [ecx]
        call dword ptr [edx + 0x30]
        test eax, eax
        je short L_360
        push 0xb
        mov ecx, edi
        call ext_006E7440
        pop edi
        xor al, al
        pop esi
        mov esp, ebp
        pop ebp
        ret 0x4
    L_360:
        pop edi
        mov al, 0x1
        pop esi
        mov esp, ebp
        pop ebp
        ret 0x4
    }
}

// [0x0072AE70] sub_0072AE70 (272 bytes)
extern "C" void ext_0070F2E0();
extern "C" void ext_0078D4B0();
extern "C" void ext_0078D4C0();
extern "C" void ext_0078D4E0();
extern "C" int mem_0092522C;
extern "C" int mem_0092A278;
extern "C" int mem_009251D8;
extern "C" __declspec(naked) void __fastcall fn_0072AE70(void* self, int edx_unused, int a1, int a2, int a3, int a4) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -8
        sub esp, 0x1c
        mov ecx, dword ptr [ebp + 0x10]
        push ebx
        push esi
        push edi
        push 0x1
        call ext_0078D4B0
        mov esi, eax
        push 0x8
        push esi
        mov dword ptr [esp + 0x24], esi
        call dword ptr [mem_0092522C]
        mov ecx, dword ptr [ebp + 0xc]
        add esp, 0x8
        mov dword ptr [esp + 0x14], eax
        mov eax, dword ptr [ebp + 0x8]
        push eax
        push 0x0
        call ext_0078D4C0
        test eax, eax
        mov dword ptr [esp + 0x18], eax
        mov dword ptr [esp + 0x10], 0x0
        jle L_after
    L_outer:
        mov ecx, dword ptr [esp + 0x10]
        mov edx, dword ptr [ebp + 0x8]
        push ecx
        mov ecx, dword ptr [ebp + 0xc]
        push edx
        push 0x0
        call ext_0078D4E0
        mov edi, dword ptr [eax]
        mov ecx, dword ptr [eax + 0x8]
        mov edx, dword ptr [eax + 0xc]
        mov dword ptr [esp + 0x20], ecx
        mov ecx, dword ptr [ebp + 0x10]
        push edi
        push 0x0
        mov dword ptr [esp + 0x2c], edx
        call ext_0078D4C0
        mov ebx, eax
        xor esi, esi
        test ebx, ebx
        jle L_inner_end
    L_inner:
        mov ecx, dword ptr [ebp + 0x10]
        push esi
        push edi
        push 0x0
        call ext_0078D4E0
        fld qword ptr [esp + 0x20]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [esp + 0x14]
        fmul qword ptr [eax + 0x8]
        lea ecx, [edx + 8 * ecx]
        inc esi
        cmp esi, ebx
        fabs
        fadd qword ptr [ecx]
        fstp qword ptr [ecx]
        jl L_inner
    L_inner_end:
        mov eax, dword ptr [esp + 0x10]
        mov ecx, dword ptr [esp + 0x18]
        inc eax
        cmp eax, ecx
        mov dword ptr [esp + 0x10], eax
        jl L_outer
        mov esi, dword ptr [esp + 0x1c]
    L_after:
        xor edi, edi
        test esi, esi
        jle L_end
        mov ebx, dword ptr [esp + 0x14]
    L_loop2:
        fld qword ptr [ebx]
        fst qword ptr [esp + 0x20]
        fcomp qword ptr [mem_0092A278]
        fnstsw ax
        test ah, 0x40
        jne L_skip
        mov eax, dword ptr [esp + 0x24]
        mov ecx, dword ptr [esp + 0x20]
        push eax
        push ecx
        mov ecx, dword ptr [ebp + 0x14]
        push edi
        call ext_0070F2E0
    L_skip:
        inc edi
        add ebx, 0x8
        cmp edi, esi
        jl L_loop2
    L_end:
        mov edx, dword ptr [esp + 0x14]
        push edx
        call dword ptr [mem_009251D8]
        add esp, 0x4
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0x10
    }
}

// [0x0072BCA0] sub_0072BCA0 (272 bytes)
extern "C" void ext_006B9D80();
extern "C" void ext_0072BE10();
extern "C" void ext_006B9D70();
extern "C" void ext_006B9D10();
extern "C" void ext_00714570();
extern "C" void ext_006B9EC0();
extern "C" void ext_007145F0();
extern "C" void ext_006D2170();
extern "C" __declspec(naked) int __fastcall fn_0072BCA0(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        push -1
        push 0x8bdc1b
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x4c
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 0x64]
        push esi
        push edi
        mov edi, ecx
        push ebp
        lea ecx, [esp + 0x14]
        call ext_006B9D80
        mov ebx, dword ptr [esp + 0x70]
        lea eax, [esp + 0x6c]
        push eax
        lea ecx, [esp + 0x14]
        push ebx
        push ecx
        mov ecx, edi
        mov dword ptr [esp + 0x70], 0
        call ext_0072BE10
        test al, al
        jne short L_ok
        lea ecx, [esp + 0x10]
        mov dword ptr [esp + 0x64], -1
        call ext_006B9D70
        or eax, -1
        jmp L_epilogue
    L_ok:
        mov esi, dword ptr [esp + 0x6c]
        cmp esi, -1
        jne short L_nonnew
        push 0xd8
        call ext_006A5C62
        mov esi, eax
        add esp, 4
        mov dword ptr [esp + 0x70], esi
        test esi, esi
        mov byte ptr [esp + 0x64], 1
        je short L_null
        mov ecx, esi
        call ext_006B9D10
        lea ecx, [esi + 0x50]
        mov byte ptr [esp + 0x64], 2
        call ext_00714570
        jmp short L_after
    L_null:
        xor esi, esi
    L_after:
        push ebp
        mov ecx, esi
        mov byte ptr [esp + 0x68], 0
        call ext_006B9EC0
        push ebx
        lea ecx, [esi + 0x50]
        call ext_007145F0
        mov dl, byte ptr [esp + 0x74]
        lea ecx, [edi + 0x150]
        mov byte ptr [esi + 0xd0], dl
        lea edx, [esp + 0x74]
        mov eax, dword ptr [ecx]
        push edx
        push eax
        mov dword ptr [esp + 0x7c], esi
        call ext_006D2170
        mov esi, eax
    L_nonnew:
        lea ecx, [esp + 0x10]
        mov dword ptr [esp + 0x64], -1
        call ext_006B9D70
        mov eax, esi
    L_epilogue:
        mov ecx, dword ptr [esp + 0x5c]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x58
        ret 0xc
    }
}

// [0x00724260] sub_00724260 (288 bytes)
extern "C" void ext_00725340();
extern "C" __declspec(naked) void __fastcall fn_00724260(void* self) {
    __asm {
        sub esp, 0xc
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        lea ebp, [esi + 0x194]
        mov ecx, ebp
        call ext_006D2250
        lea edi, [esi + 0x1ac]
        mov ecx, edi
        call ext_006D2250
        mov ecx, dword ptr [esi + 0x10]
        mov eax, dword ptr [ecx]
        call dword ptr [eax + 0x24]
        mov edx, dword ptr [ebp]
        lea ecx, [esp + 0x18]
        push ecx
        push edx
        mov ecx, ebp
        mov dword ptr [esp + 0x20], eax
        call ext_006D2170
        mov edx, dword ptr [edi]
        mov eax, dword ptr [esi + 0x4]
        lea ecx, [esp + 0x18]
        mov dword ptr [esp + 0x18], eax
        push ecx
        push edx
        mov ecx, edi
        call ext_006D2170
        mov ecx, dword ptr [esi + 0x10]
        xor ebx, ebx
        push ebx
        push 0x2
        mov eax, dword ptr [ecx]
        call dword ptr [eax + 0x20]
        mov ecx, dword ptr [esi + 0x10]
        mov dword ptr [esp + 0x10], ebx
        mov dword ptr [esp + 0x14], ebx
        mov edx, dword ptr [ecx]
        call dword ptr [edx + 0x24]
        mov ebx, eax
    L_loop:
        lea eax, [esp + 0x14]
        lea ecx, [esp + 0x10]
        push eax
        push ecx
        push ebx
        mov ecx, esi
        call ext_00725340
        test al, al
        je L_end
        mov eax, dword ptr [esp + 0x10]
        cmp eax, ebx
        jae L_end
        test eax, eax
        je L_zero
        lea edx, [esp + 0x18]
        mov ecx, ebp
        push edx
        push 0x1
        mov dword ptr [esp + 0x20], eax
        call ext_006D2170
        mov eax, dword ptr [esp + 0x14]
        test eax, eax
        jbe L_small
        mov dword ptr [esp + 0x18], eax
        lea eax, [esp + 0x18]
        push eax
        push 0x1
        mov ecx, edi
        call ext_006D2170
        mov ebx, dword ptr [esp + 0x10]
        jmp L_loop
    L_small:
        lea ecx, [esp + 0x18]
        mov dword ptr [esp + 0x18], 0xfa0
        push ecx
        push 0x1
        mov ecx, edi
        call ext_006D2170
        mov ebx, dword ptr [esp + 0x10]
        jmp L_loop
    L_zero:
        mov eax, dword ptr [esp + 0x14]
        test eax, eax
        jbe L_end
        mov edx, dword ptr [esi + 0x1bc]
        mov dword ptr [edx], eax
    L_end:
        mov edx, dword ptr [esi + 0x1a4]
        mov ecx, dword ptr [esi + 0x10]
        mov edx, dword ptr [edx]
        mov eax, dword ptr [ecx]
        push edx
        push 0
        call dword ptr [eax + 0x20]
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0xc
        ret
    }
}

// [0x00725940] sub_00725940 (288 bytes)
extern "C" int mem_00AACF60;
extern "C" int mem_00AACF58;
extern "C" int mem_00AACF48;
extern "C" void ext_00724F00();
extern "C" void ext_00724FB0();
extern "C" void ext_00725650();
extern "C" void ext_007257F0();
extern "C" void ext_00726770();
extern "C" void ext_00726840();
extern "C" void ext_007289E0();
extern "C" void ext_00789BE0();
extern "C" __declspec(naked) void __fastcall fn_00725940(void* self) {
    __asm {
        push ecx
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x1c8]
        cmp eax, 0x1
        jne near ptr L_not1
        mov al, byte ptr [esi + 0x15]
        test al, al
        je near ptr L_52
        cmp dword ptr [esi + 0x1c4], -1
        je near ptr L_52
        jmp near ptr L_44
    L_not1:
        test eax, eax
        jne near ptr L_52
        mov al, byte ptr [esi + 0x15]
        test al, al
        je near ptr L_52
        cmp dword ptr [esi + 0x8], 0x2
        jne near ptr L_52
        mov eax, dword ptr [esi + 0x1c4]
        test eax, eax
        jne near ptr L_52
        mov ecx, esi
        call ext_00724FB0
        test eax, eax
        jne near ptr L_52
        mov ecx, dword ptr [esi + 0x24c]
        push ebx
        call ext_00789BE0
        xor bl, bl
        push offset mem_00AACF60
        mov ecx, esi
        mov byte ptr [esp + 0xf], bl
        call ext_00726770
        test al, al
        jne short L_d8
        push offset mem_00AACF58
        mov ecx, esi
        call ext_00726770
        test al, al
        je short L_e1
    L_d8:
        mov ecx, esi
        call ext_00726840
        mov bl, 0x1
    L_e1:
        push offset mem_00AACF48
        mov ecx, esi
        call ext_00726770
        test al, al
        je short L_fc
        mov ecx, esi
        call ext_00726840
        mov al, 0x1
        jmp short L_00
    L_fc:
        mov al, byte ptr [esp + 0xb]
    L_00:
        test bl, bl
        pop ebx
        jne near ptr L_52
        test al, al
        jne near ptr L_52
        mov ecx, dword ptr [esi + 0x10]
        mov dword ptr [esi + 0x1c8], 0x1
        mov dword ptr [esi + 0x25c], 0x0
        mov dword ptr [esi + 0x260], 0x0
        mov dword ptr [esi + 0x264], 0x0
        mov eax, dword ptr [ecx]
        push -0xd
        push 0x2
        call dword ptr [eax + 0x20]
        mov ecx, esi
        call ext_00725650
    L_44:
        mov ecx, esi
        call ext_007289E0
        mov ecx, esi
        call ext_007257F0
    L_52:
        mov ecx, esi
        call ext_00724F00
        pop esi
        pop ecx
        ret
    }
}

// [0x0072DDD0] sub_0072DDD0 (288 bytes)
extern "C" void ext_006E7440();
extern "C" void ext_00724FA0();
extern "C" void ext_00725940();
extern "C" void ext_0072CB90();
extern "C" void ext_0072E570();
extern "C" void ext_0072EFC0();
extern "C" void ext_0072F230();
extern "C" void ext_0072FDD0();
extern "C" __declspec(naked) void __fastcall fn_0072DDD0(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, ecx
        xor ebp, ebp
        push edi
        mov dword ptr [esi + 0xb4], ebp
        mov bl, 0x1
        call ext_0072CB90
        mov edi, eax
        test edi, edi
        je L_fail
        mov eax, dword ptr [esp + 0x18]
        mov dword ptr [esi + 0xb4], edi
        test eax, eax
        je L_nothat
        mov ebp, dword ptr [esi + 0xac]
        mov dword ptr [esi + 0xac], eax
L_loop:
        mov eax, dword ptr [esi + 0xac]
        cmp dword ptr [eax + 0x1c8], -1
        jne L_else
        lea ecx, [esp + 0x10]
        push ecx
        mov ecx, esi
        call ext_0072EFC0
        test al, al
        jne L_match
        mov al, byte ptr [esp + 0x1c]
        test al, al
        je L_fail
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_00724FA0
        mov bl, al
        test bl, bl
        je L_end
        push 0x0
        mov ecx, esi
        call ext_0072FDD0
        mov ecx, esi
        call ext_0072E570
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_00725940
        push 0x0
        mov ecx, esi
        call ext_0072F230
        jmp L_end
L_nothat:
        mov eax, dword ptr [esi + 0xac]
        test eax, eax
        jne L_loop
        push 0x3
        lea ecx, [esi + 0x8]
        call ext_006E7440
        xor bl, bl
        jmp L_after
L_match:
        push 0x1
        mov ecx, esi
        call ext_0072FDD0
        jmp L_end
L_else:
        mov al, byte ptr [esp + 0x1c]
        test al, al
        je L_fail
        mov ecx, esi
        call ext_0072E570
        jmp L_end
L_fail:
        xor bl, bl
L_end:
        mov eax, dword ptr [esp + 0x18]
        test eax, eax
        je L_after
        mov dword ptr [esi + 0xac], ebp
L_after:
        test bl, bl
        mov dword ptr [esi + 0xb4], 0x0
        jne L_ret_edi
        test edi, edi
        je L_noRelease
        mov edx, dword ptr [edi]
        push 0x0
        mov ecx, edi
        call dword ptr [edx + 0x4]
L_noRelease:
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        pop ecx
        ret 0x8
L_ret_edi:
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 0x8
    }
}

// [0x00720D80] sub_00720D80 (288 bytes)
// Recursive helper: 7 stack args, cdecl (caller pops 0x1c).
extern "C" void ext_006CD320();
extern "C" void ext_006E3870();
extern "C" void ext_00720260();
extern "C" void ext_00720D80();

extern "C" __declspec(naked) void __cdecl fn_00720D80(int a0, int a1, int a2, int a3, int a4, int a5, int a6) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -0x8
        sub esp, 0x24
        push ebx
        mov ebx, dword ptr [ebp + 0x18]
        push esi
        mov esi, dword ptr [ebp + 0x8]
        test ebx, ebx
        push edi
        mov dword ptr [esp + 0x10], 0x0
        mov dword ptr [esp + 0x14], 0x0
        mov dword ptr [esp + 0x18], 0x0
        mov dword ptr [esp + 0x1c], 0x0
        mov dword ptr [esp + 0x20], 0x0
        mov dword ptr [esp + 0x24], 0x0
        mov dword ptr [esp + 0x28], 0x0
        mov dword ptr [esp + 0x2c], 0x0
        je short L_else
        mov eax, dword ptr [ebx + 0x10]
        mov edi, dword ptr [ebp + 0x1c]
        mov ecx, dword ptr [esi + 0x58]
        mov eax, dword ptr [eax + 4*edi]
        cmp ecx, eax
        je short L_else
        jle short L_le
        mov ecx, dword ptr [ebp + 0x20]
        mov edx, dword ptr [ebp + 0x14]
        mov eax, dword ptr [ebp + 0x10]
        inc edi
        push ecx
        mov ecx, dword ptr [ebp + 0xc]
        push edi
        push ebx
        push edx
        push eax
        push ecx
        push esi
        call ext_00720D80
        add esp, 0x1c
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    L_le:
        cmp ecx, eax
        jge short L_epi
        mov ecx, esi
        call ext_006CD320
        test eax, eax
        je short L_epi
        mov edx, dword ptr [ebp + 0x20]
        mov eax, dword ptr [ebp + 0x14]
        mov ecx, dword ptr [ebp + 0x10]
        push edx
        mov edx, dword ptr [ebp + 0xc]
        push edi
        push ebx
        push eax
        push ecx
        push edx
        jmp short L_call
    L_else:
        mov eax, dword ptr [ebp + 0x20]
        mov ecx, dword ptr [esi + 0x58]
        mov edx, dword ptr [ebp + 0x14]
        push eax
        mov eax, dword ptr [ebp + 0x10]
        push ecx
        push edx
        lea ecx, [esp + 0x1c]
        push eax
        push ecx
        mov ecx, esi
        call ext_006E3870
        mov edi, dword ptr [ebp + 0xc]
        lea edx, [esp + 0x10]
        push edx
        push edi
        push edi
        push esi
        call ext_00720260
        add esp, 0x10
        mov ecx, esi
        call ext_006CD320
        test eax, eax
        je short L_epi
        mov ecx, dword ptr [ebp + 0x1c]
        mov eax, dword ptr [ebp + 0x20]
        mov edx, dword ptr [ebp + 0x14]
        inc ecx
        push eax
        mov eax, dword ptr [ebp + 0x10]
        push ecx
        push ebx
        push edx
        push eax
        push edi
    L_call:
        mov ecx, esi
        call ext_006CD320
        push eax
        call ext_00720D80
        add esp, 0x1c
    L_epi:
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}

// [0x00724D00] sub_00724D00 (304 bytes)
extern "C" void ext_006B9EC0();
extern "C" void ext_006BA220();
extern "C" void ext_006BA260();
extern "C" void ext_006E7460();
extern "C" void ext_00725A90();
extern "C" void ext_007287E0();
extern "C" int mem_008BCB18;
extern "C" int mem_00AACF40;
extern "C" int mem_00AA93A0;
extern "C" int mem_00AACF30;
extern "C" int mem_00AACEE4;
extern "C" int mem_00AACECC;
extern "C" int mem_00AACE94;

extern "C" __declspec(naked) void __fastcall fn_00724D00(void* self) {
    __asm {
        push -1
        push offset mem_008BCB18
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x58
        push esi
        mov esi, ecx
        push edi
        lea ecx, [esp + 0x14]
        call ext_006B9D10
        lea eax, [esp + 0x10]
        lea ecx, [esp + 0xc]
        push eax
        mov eax, dword ptr [esi + 0x4]
        lea edx, [esp + 0xc]
        push ecx
        xor edi, edi
        push edx
        push eax
        mov dword ptr [esp + 0x78], edi
        mov dword ptr [esp + 0x18], edi
        mov dword ptr [esp + 0x1c], edi
        mov dword ptr [esp + 0x20], edi
        call ext_00725A90
        add esp, 0x10
        lea ecx, [esp + 0x14]
        push offset mem_00AACF40
        call ext_006B9EC0
        mov ecx, dword ptr [esp + 0x8]
        push ecx
        lea ecx, [esp + 0x18]
        call ext_006BA260
        push offset mem_00AA93A0
        lea ecx, [esp + 0x18]
        call ext_006BA220
        mov edx, dword ptr [esp + 0xc]
        lea ecx, [esp + 0x14]
        push edx
        call ext_006BA260
        push offset mem_00AA93A0
        lea ecx, [esp + 0x18]
        call ext_006BA220
        mov eax, dword ptr [esp + 0x10]
        lea ecx, [esp + 0x14]
        push eax
        call ext_006BA260
        push offset mem_00AACF30
        lea ecx, [esp + 0x18]
        call ext_006BA220
        lea ecx, [esp + 0x14]
        mov dword ptr [esi + 0x1c8], 1
        call ext_006E7460
        push eax
        mov ecx, esi
        call ext_007287E0
        push offset mem_00AACEE4
        mov ecx, esi
        call ext_007287E0
        push offset mem_00AACECC
        mov ecx, esi
        call ext_007287E0
        push offset mem_00AACE94
        mov ecx, esi
        call ext_007287E0
        push offset mem_00B5D2C0
        mov ecx, esi
        call ext_007287E0
        lea ecx, [esp + 0x14]
        mov dword ptr [esi + 0x1c8], edi
        mov dword ptr [esp + 0x68], -1
        call ext_006B9D70
        mov ecx, dword ptr [esp + 0x60]
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x64
        ret
    }
}

// [0x00722040] sub_00722040 (304 bytes)
extern "C" void ext_00785450();
extern "C" void ext_00785480();
extern "C" void ext_00786270();
extern "C" void ext_007862F0();
extern "C" void ext_00786300();
extern "C" void ext_007877E0();
extern "C" void ext_00787860();
extern "C" void ext_00787870();
extern "C" int mem_00AACAD8;

extern "C" __declspec(naked) void __fastcall fn_00722040(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8bd5a6
        push eax
        mov eax, dword ptr [mem_00AACAD8]
        mov dword ptr fs:[0x0], esp
        sub esp, 0x108
        dec eax
        je L_case1
        dec eax
        jne L_epilogue
        lea ecx, [esp + 0x80]
        call ext_00786270
        lea eax, [esp + 0x11c]
        lea ecx, [esp + 0x80]
        push eax
        mov dword ptr [esp + 0x114], 0x0
        call ext_00785450
        lea ecx, [esp + 0x124]
        push ecx
        lea ecx, [esp + 0x84]
        call ext_00785480
        mov edx, dword ptr [esp + 0x118]
        push 0x1
        push edx
        lea ecx, [esp + 0x88]
        call ext_00786300
        lea ecx, [esp + 0x80]
        mov dword ptr [esp + 0x110], 0xffffffff
        call ext_007862F0
        mov ecx, dword ptr [esp + 0x108]
        mov dword ptr fs:[0x0], ecx
        add esp, 0x114
        ret
    L_case1:
        __asm _emit 0x8d __asm _emit 0x4c __asm _emit 0x24 __asm _emit 0x00
        call ext_007877E0
        lea eax, [esp + 0x11c]
        __asm _emit 0x8d __asm _emit 0x4c __asm _emit 0x24 __asm _emit 0x00
        push eax
        mov dword ptr [esp + 0x114], 0x1
        call ext_00785450
        lea ecx, [esp + 0x124]
        push ecx
        lea ecx, [esp + 0x4]
        call ext_00785480
        mov edx, dword ptr [esp + 0x118]
        push 0x1
        push edx
        lea ecx, [esp + 0x8]
        call ext_00787870
        __asm _emit 0x8d __asm _emit 0x4c __asm _emit 0x24 __asm _emit 0x00
        mov dword ptr [esp + 0x110], 0xffffffff
        call ext_00787860
    L_epilogue:
        mov ecx, dword ptr [esp + 0x108]
        mov dword ptr fs:[0x0], ecx
        add esp, 0x114
        ret
    }
}

// [0x007221A0] sub_007221A0 (304 bytes)
extern "C" void ext_006C9E80();
extern "C" void ext_006C9F00();
extern "C" void ext_006CA020();
extern "C" void ext_006CA6A0();
extern "C" void ext_006DADE0();
extern "C" void ext_006DBE10();

extern "C" __declspec(naked) void __fastcall fn_007221A0(void* self) {
    __asm {
        sub esp, 0x18
        push ebx
        mov ebx, dword ptr [esp + 0x28]
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x34]
        push edi
        push esi
        mov ecx, ebx
        call ext_006CA020
        mov ecx, ebx
        mov edi, eax
        call ext_006CA6A0
        dec eax
        cmp esi, eax
        mov dword ptr [esp + 0x34], eax
        jge short L_else
        lea eax, [esi + 0x1]
        mov ecx, ebx
        push eax
        call ext_006CA020
        mov ebp, eax
        mov ecx, ebp
        call ext_006C9E80
        fstp dword ptr [esp + 0x38]
        mov ecx, edi
        call ext_006C9E80
        fsubr dword ptr [esp + 0x38]
        lea ecx, [esp + 0x10]
        push ecx
        mov ecx, edi
        fstp dword ptr [esp + 0x3c]
        call ext_006C9F00
        push eax
        lea edx, [esp + 0x1c]
        lea eax, [esp + 0x24]
        push edx
        push eax
        mov ecx, ebp
        call ext_006C9F00
        mov ecx, eax
        call ext_006DBE10
        mov ecx, eax
        call ext_006DADE0
        fdivr dword ptr [esp + 0x38]
        mov eax, dword ptr [esp + 0x30]
        fstp qword ptr [eax]
        jmp short L_after
    L_else:
        mov eax, dword ptr [esp + 0x30]
    L_after:
        mov ebp, dword ptr [esp + 0x2c]
        test esi, esi
        jle short L_tail
        lea ecx, [esi - 0x1]
        push ecx
        mov ecx, ebx
        call ext_006CA020
        mov ecx, edi
        mov ebx, eax
        call ext_006C9E80
        fstp dword ptr [esp + 0x38]
        mov ecx, ebx
        call ext_006C9E80
        fsubr dword ptr [esp + 0x38]
        lea edx, [esp + 0x20]
        mov ecx, ebx
        push edx
        fstp dword ptr [esp + 0x3c]
        call ext_006C9F00
        push eax
        lea eax, [esp + 0x1c]
        lea ecx, [esp + 0x14]
        push eax
        push ecx
        mov ecx, edi
        call ext_006C9F00
        mov ecx, eax
        call ext_006DBE10
        mov ecx, eax
        call ext_006DADE0
        fdivr dword ptr [esp + 0x38]
        mov eax, dword ptr [esp + 0x30]
        fstp qword ptr [ebp]
    L_tail:
        test esi, esi
        jne short L_nonzero
        mov edx, dword ptr [eax]
        pop edi
        mov dword ptr [ebp], edx
        mov eax, dword ptr [eax + 0x4]
        mov dword ptr [ebp + 0x4], eax
        pop esi
        pop ebp
        pop ebx
        add esp, 0x18
        ret
    L_nonzero:
        cmp esi, dword ptr [esp + 0x34]
        jne short L_skipcopy
        mov ecx, dword ptr [ebp]
        mov dword ptr [eax], ecx
        mov edx, dword ptr [ebp + 0x4]
        mov dword ptr [eax + 0x4], edx
    L_skipcopy:
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x18
        ret
    }
}

// [0x00722E20] sub_00722E20 (309 bytes)
extern "C" void ext_006D2130();
extern "C" void ext_006E73B0();
extern "C" void ext_00723A40();
extern "C" void ext_00788C70();
extern "C" __declspec(naked) void __fastcall fn_00722E20(void* self) {
    __asm {
        push -0x1
        push 0x8bd636
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push ebx
        push esi
        mov esi, ecx
        xor ebx, ebx
        push edi
        mov dword ptr [esp + 0xc], esi
        lea ecx, [esi + 0x18]
        mov dword ptr [esi + 0xc], ebx
        mov dword ptr [esi + 0x10], ebx
        call ext_006B9D10
        lea ecx, [esi + 0x64]
        mov dword ptr [esp + 0x18], ebx
        call ext_006B9D10
        lea ecx, [esi + 0xb0]
        mov byte ptr [esp + 0x18], 0x1
        call ext_006B9D10
        lea ecx, [esi + 0xfc]
        mov byte ptr [esp + 0x18], 0x2
        call ext_006B9D10
        lea ecx, [esi + 0x148]
        mov byte ptr [esp + 0x18], 0x3
        call ext_006B9D10
        lea edi, [esi + 0x194]
        push 0x4
        push 0x10
        mov ecx, edi
        mov byte ptr [esp + 0x20], 0x4
        call ext_006D2130
        lea eax, [edi + 0x10]
        mov dword ptr [edi + 0x14], eax
        lea edi, [esi + 0x1ac]
        push 0x4
        push 0x10
        mov ecx, edi
        mov byte ptr [esp + 0x20], 0x5
        call ext_006D2130
        lea ecx, [edi + 0x10]
        mov dword ptr [edi + 0x14], ecx
        lea ecx, [esi + 0x1cc]
        mov byte ptr [esp + 0x18], 0x6
        mov dword ptr [esi + 0x1c4], 0xffffffff
        call ext_00788C70
        lea ecx, [esi + 0x1ec]
        call ext_006B9D10
        push 0x14
        lea ecx, [esi + 0x238]
        mov byte ptr [esp + 0x1c], 0x7
        call ext_00782D00
        push 0xd
        push 0xaacb4c
        lea ecx, [esi + 0xef0]
        mov byte ptr [esp + 0x20], 0x8
        mov dword ptr [esi + 0x24c], ebx
        mov dword ptr [esi + 0x250], ebx
        mov byte ptr [esi + 0x254], bl
        mov dword ptr [esi + 0x258], ebx
        call ext_006E73B0
        mov ecx, esi
        mov byte ptr [esp + 0x18], 0x9
        mov byte ptr [esi + 0xf48], bl
        mov dword ptr [esi], 0x996808
        call ext_00723A40
        mov ecx, dword ptr [esp + 0x10]
        mov eax, esi
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret
    }
}

// [0x0072DC80] sub_0072DC80 (326 bytes)
extern "C" void ext_006D3D30();
extern "C" void ext_006F9CD0();
extern "C" void ext_00724FB0();
extern "C" void ext_0072B0A0();
extern "C" void ext_0072B130();
extern "C" void ext_0072CB90();
extern "C" void ext_0072EFC0();
extern "C" void ext_0072F230();

extern "C" __declspec(naked) void __fastcall fn_0072DC80(void* self, int edx_unused, int arg) {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push edi
        mov edi, ecx
        mov eax, dword ptr [edi + 0ach]
        test eax, eax
        je L_ret
        cmp dword ptr [eax + 1c8h], -1
        jne L_ret
        push esi
        call ext_0072CB90
        mov esi, eax
        lea eax, [ebp - 4]
        push eax
        mov ecx, edi
        mov dword ptr [ebp - 0ch], esi
        mov dword ptr [ebp - 4], 0
        mov dword ptr [edi + 0b4h], esi
        call ext_0072EFC0
        test al, al
        je L_clear
        mov ecx, dword ptr [edi + 0b4h]
        push ebx
        mov ebx, dword ptr [ebp + 8]
        mov ecx, dword ptr [ecx + 154h]
        mov eax, dword ptr [ebx + 154h]
        test ecx, ecx
        je L_nocx
        test eax, eax
        je L_callB130
        push eax
        jmp L_callB0A0
    L_callB130:
        call ext_0072B130
        jmp L_after_b
    L_nocx:
        test eax, eax
        je L_after_b
        mov ecx, dword ptr [edi + 4h]
        call ext_006D3D30
        mov edx, dword ptr [edi + 0b4h]
        mov dword ptr [edx + 154h], eax
        mov ecx, dword ptr [edi + 0b4h]
        mov eax, dword ptr [ebx + 154h]
        mov ecx, dword ptr [ecx + 154h]
        push eax
    L_callB0A0:
        call ext_0072B0A0
    L_after_b:
        mov eax, dword ptr [edi + 0b4h]
        mov edx, dword ptr [ebx + 0f0h]
        mov dword ptr [ebp + 8], edx
        mov ecx, dword ptr [eax + 0f0h]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp + 8]
        xor eax, eax
        sub edx, ecx
        setg al
        dec eax
        and eax, edx
        add eax, ecx
        xor esi, esi
        mov dword ptr [ebp + 8], eax
        test eax, eax
        jle L_after_loop
    L_loop:
        mov edx, dword ptr [ebx + 100h]
        mov ecx, dword ptr [edi + 0b4h]
        mov eax, dword ptr [edx + 4*esi]
        mov edx, dword ptr [ecx + 100h]
        push eax
        mov ecx, dword ptr [edx + 4*esi]
        call ext_006F9CD0
        mov eax, dword ptr [ebp + 8]
        inc esi
        cmp esi, eax
        jl L_loop
    L_after_loop:
        mov ecx, dword ptr [edi + 0ach]
        add ecx, 4
        call ext_00724FB0
        mov ecx, dword ptr [ebp - 4]
        dec eax
        cmp ecx, eax
        sete al
        mov byte ptr [ebp + 8], al
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, edi
        call ext_0072F230
        mov esi, dword ptr [ebp - 0ch]
        pop ebx
    L_clear:
        mov dword ptr [edi + 0b4h], 0
        mov edx, dword ptr [esi]
        push 0
        mov ecx, esi
        call dword ptr [edx + 4]
        pop esi
    L_ret:
        xor al, al
        pop edi
        mov esp, ebp
        pop ebp
        ret 4
    }
}

// [0x00728880] sub_00728880 (352 bytes)
extern "C" __declspec(naked) void __fastcall fn_00728880(void* self, int edx_unused, int arg) {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0xc
        push esi
        mov esi, ecx
        mov al, byte ptr [esi + 0x15]
        test al, al
        je L_end2
        mov eax, dword ptr [esi + 0x260]
        shl eax, 0x4
        mov ecx, dword ptr [eax + esi + 0x264]
        test ecx, ecx
        je L_end2
        mov ecx, dword ptr [esi + 0x10]
        push edi
        mov edx, dword ptr [ecx]
        call dword ptr [edx + 0x24]
        mov edx, dword ptr [esi + 0x260]
        mov ecx, dword ptr [esi + 0x10]
        shl edx, 0x4
        mov edi, eax
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [edx + esi + 0x264]
        push edx
        call dword ptr [eax + 0x28]
        mov eax, dword ptr [esi + 0x260]
        mov ecx, dword ptr [ebp + 0x8]
        shl eax, 0x4
        mov dword ptr [eax + esi + 0x268], ecx
        mov al, byte ptr [esi + 0x16]
        test al, al
        je L_else
        mov edx, dword ptr [esi + 0x260]
        shl edx, 0x4
        mov eax, dword ptr [edx + esi + 0x268]
        mov dword ptr [ebp - 0xc], eax
        mov eax, dword ptr [ebp - 0xc]
        bswap eax
        mov ecx, dword ptr [esi + 0x260]
        mov dword ptr [ebp + 0x8], eax
        shl ecx, 0x4
        mov edx, dword ptr [ecx + esi + 0x26c]
        mov dword ptr [ebp - 0xc], edx
        mov eax, dword ptr [ebp - 0xc]
        bswap eax
        mov dword ptr [ebp - 0x4], eax
        mov eax, dword ptr [esi + 0x260]
        add eax, 0x27
        shl eax, 0x4
        mov ecx, dword ptr [eax + esi]
        mov dword ptr [ebp - 0xc], ecx
        mov eax, dword ptr [ebp - 0xc]
        bswap eax
        mov ecx, dword ptr [esi + 0x10]
        mov dword ptr [ebp - 0x8], eax
        lea eax, [ebp + 0x8]
        push 0x4
        mov edx, dword ptr [ecx]
        push eax
        call dword ptr [edx + 0x1c]
        mov ecx, dword ptr [esi + 0x10]
        lea eax, [ebp - 0x4]
        push 0x4
        push eax
        mov edx, dword ptr [ecx]
        call dword ptr [edx + 0x1c]
        mov ecx, dword ptr [esi + 0x10]
        push 0x4
        lea eax, [ebp - 0x8]
        mov edx, dword ptr [ecx]
        jmp L_common
    L_else:
        mov eax, dword ptr [esi + 0x260]
        mov ecx, dword ptr [esi + 0x10]
        shl eax, 0x4
        mov edx, dword ptr [ecx]
        push 0x4
        lea eax, [eax + esi + 0x268]
        push eax
        call dword ptr [edx + 0x1c]
        mov eax, dword ptr [esi + 0x260]
        mov ecx, dword ptr [esi + 0x10]
        shl eax, 0x4
        mov edx, dword ptr [ecx]
        push 0x4
        lea eax, [eax + esi + 0x26c]
        push eax
        call dword ptr [edx + 0x1c]
        mov eax, dword ptr [esi + 0x260]
        mov ecx, dword ptr [esi + 0x10]
        add eax, 0x27
        push 0x4
        mov edx, dword ptr [ecx]
        shl eax, 0x4
        add eax, esi
    L_common:
        push eax
        call dword ptr [edx + 0x1c]
        mov ecx, dword ptr [esi + 0x10]
        push edi
        mov edx, dword ptr [ecx]
        call dword ptr [edx + 0x28]
        pop edi
    L_end2:
        mov ecx, dword ptr [esi + 0x10]
        mov eax, dword ptr [ecx]
        call dword ptr [eax + 0x30]
        test eax, eax
        je L_done
        push 0xb
        lea ecx, [esi + 0xef0]
        call ext_006E7440
    L_done:
        pop esi
        mov esp, ebp
        pop ebp
        ret 0x4
    }
}

// [0x00726180] sub_00726180 (352 bytes)
extern "C" int mem_008BDC8B;
extern "C" int mem_00AACFD4;
extern "C" void ext_006B99C0();
extern "C" void ext_006B9D70();
extern "C" void ext_006B9D80();
extern "C" void ext_006B9E60();
extern "C" void ext_006B9EC0();
extern "C" void ext_006BA0C0();
extern "C" void ext_006E7460();

extern "C" __declspec(naked) void __fastcall fn_00726180(void* self) {
    __asm {
        push -1
        push offset mem_008BDC8B
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0A4h
        push ebp
        push esi
        push edi
        push offset mem_00AACFD4
        lea ecx, [esp + 1Ch]
        mov dword ptr [esp + 0BCh], 0
        call ext_006B9D80
        lea ecx, [esp + 0C0h]
        mov byte ptr [esp + 0B8h], 1
        call ext_006B99C0
        lea ecx, [esp + 18h]
        mov ebp, eax
        call ext_006B99C0
        lea ecx, [esp + 0C0h]
        mov dword ptr [esp + 14h], eax
        call ext_006E7460
        mov al, byte ptr [eax]
        mov edi, dword ptr [esp + 10Ch]
        lea ecx, [esp + 12h]
        xor al, 40h
        push ecx
        mov ecx, edi
        mov byte ptr [esp + 16h], al
        mov byte ptr [esp + 17h], 0
        call ext_006B9EC0
        mov esi, 1
        cmp ebp, esi
        jle L_end
        push ebx
    L_loop:
        lea ecx, [esp + 1Ch]
        call ext_006E7460
        mov ecx, eax
        mov eax, esi
        cdq
        idiv dword ptr [esp + 18h]
        mov bl, byte ptr [ecx + edx]
        lea ecx, [esp + 0C4h]
        call ext_006E7460
        mov dl, byte ptr [eax + esi]
        lea ecx, [esp + 0C4h]
        mov byte ptr [esp + 13h], dl
        call ext_006E7460
        mov al, byte ptr [eax + esi - 1]
        mov dl, byte ptr [esp + 13h]
        xor al, dl
        lea ecx, [esp + 68h]
        xor al, bl
        mov byte ptr [esp + 15h], 0
        mov byte ptr [esp + 14h], al
        lea eax, [esp + 14h]
        push eax
        push edi
        push ecx
        call ext_006BA0C0
        add esp, 0Ch
        push eax
        mov ecx, edi
        mov byte ptr [esp + 0C0h], 2
        call ext_006B9E60
        lea ecx, [esp + 68h]
        mov byte ptr [esp + 0BCh], 1
        call ext_006B9D70
        inc esi
        cmp esi, ebp
        jl L_loop
        pop ebx
    L_end:
        lea ecx, [esp + 18h]
        mov byte ptr [esp + 0B8h], 0
        call ext_006B9D70
        lea ecx, [esp + 0C0h]
        mov dword ptr [esp + 0B8h], 0FFFFFFFFh
        call ext_006B9D70
        mov ecx, dword ptr [esp + 0B0h]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs:[0], ecx
        add esp, 0B0h
        ret 50h
    }
}

// [0x0072F760] sub_0072F760 (368 bytes)
extern "C" void ext_006BB7C0();
extern "C" void ext_007275F0();
extern "C" void ext_00727C80();
extern "C" void ext_007283B0();
extern "C" void ext_00728410();
extern "C" void ext_007284D0();
extern "C" void ext_0072B1B0();
extern "C" void ext_0072B1C0();
extern "C" void ext_0072B1D0();

extern "C" int mem_00AAD34C;
extern "C" int mem_00AACD0C;
extern "C" int mem_00AAD344;
extern "C" int mem_00AA9190;
extern "C" int mem_00AAD334;
extern "C" int mem_00AAD328;

extern "C" __declspec(naked) bool __fastcall fn_0072F760(void* self, int edx_unused, void* arg) {
    __asm {
        push ecx
        push ebx
        mov ebx, dword ptr [esp + 0xc]
        push esi
        mov esi, ecx
        mov ecx, ebx
        call ext_0072B1C0
        test eax, eax
        je L_early_ret
        push ebp
        push edi
        mov ecx, ebx
        call ext_006BB7C0
        mov ecx, ebx
        mov dword ptr [esp + 0x10], eax
        call ext_0072B1D0
        mov ecx, dword ptr [esi + 0xac]
        push offset mem_00AAD34C
        add ecx, 0x4
        mov ebp, eax
        call ext_007275F0
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_00728410
        mov edi, dword ptr [esi + 0xac]
        push offset mem_00AACD0C
        add edi, 0x4
        mov ecx, edi
        call ext_007275F0
        push 0x64
        mov ecx, edi
        call ext_00727C80
        mov ecx, edi
        call ext_007283B0
        mov ecx, ebx
        call ext_0072B1B0
        mov edi, dword ptr [esi + 0xac]
        push offset mem_00AAD344
        add edi, 0x4
        mov dword ptr [esp + 0x1c], eax
        mov ecx, edi
        call ext_007275F0
        mov eax, dword ptr [esp + 0x18]
        mov ecx, edi
        push eax
        call ext_00727C80
        mov ecx, edi
        call ext_007283B0
        mov ecx, ebx
        call ext_0072B1C0
        mov edi, dword ptr [esi + 0xac]
        push offset mem_00AA9190
        add edi, 0x4
        mov ebx, eax
        mov ecx, edi
        call ext_007275F0
        push ebx
        mov ecx, edi
        call ext_00727C80
        mov ecx, edi
        call ext_007283B0
        mov edi, dword ptr [esi + 0xac]
        push offset mem_00AAD334
        add edi, 0x4
        mov ecx, edi
        call ext_007275F0
        push 0x0
        mov ecx, edi
        call ext_00727C80
        mov ecx, edi
        call ext_007283B0
        mov ecx, dword ptr [esi + 0xac]
        push offset mem_00AAD328
        add ecx, 0x4
        call ext_007275F0
        xor edi, edi
        test ebp, ebp
        jbe short L_after_loop
    L_loop:
        mov edx, dword ptr [esp + 0x10]
        xor ecx, ecx
        mov cl, byte ptr [edi + edx]
        push ecx
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_00727C80
        inc edi
        cmp edi, ebp
        jb short L_loop
    L_after_loop:
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_007283B0
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_007284D0
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_007283B0
        pop edi
        pop ebp
        pop esi
        mov al, 0x1
        pop ebx
        pop ecx
        ret 0x4
    L_early_ret:
        pop esi
        mov al, 0x1
        pop ebx
        pop ecx
        ret 0x4
    }
}

// [0x00722A50] sub_00722A50 (336 bytes)
extern "C" void ext_00722660();
extern "C" void ext_007226A0();
extern "C" void ext_00722730();
extern "C" void ext_00722BA0();
extern "C" void ext_00722C20();
extern "C" int mem_009967F0;
extern "C" int mem_009967E8;
extern "C" __declspec(naked) void __cdecl fn_00722A50(double* out, const double* a, const double* b, const double* c) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -0x8
        sub esp, 0x18
        push esi
        mov ecx, dword ptr [ebp + 0x14]
        mov edx, dword ptr [ebp + 0x10]
        mov esi, dword ptr [ebp + 0x8]
        push edi
        mov edi, dword ptr [ebp + 0xc]
        cmp dword ptr [edi], 0x0
        jne short L_check_neg100
        cmp dword ptr [edi + 0x4], 0x40590000
        jne short L_check_neg100
        mov eax, dword ptr [ecx]
        mov dword ptr [esi], eax
        mov eax, dword ptr [ecx + 0x4]
        jmp short L_store_hi
    L_check_neg100:
        cmp dword ptr [edi], 0x0
        jne short L_check_500
        cmp dword ptr [edi + 0x4], 0xc0590000
        jne short L_check_500
        mov eax, dword ptr [edx]
        mov dword ptr [esi], eax
        mov eax, dword ptr [edx + 0x4]
    L_store_hi:
        mov dword ptr [esi + 0x4], eax
    L_check_500:
        fld qword ptr [edi]
        fst qword ptr [esp + 0x10]
        fcomp qword ptr [mem_009967F0]
        fnstsw ax
        test ah, 0x41
        jne short L_check_neg500
        fld qword ptr [edx]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ecx + 0x4]
        fst qword ptr [esp + 0x18]
        mov dword ptr [esp + 0x8], edx
        mov dword ptr [esp + 0xc], eax
        fcomp qword ptr [esp + 0x8]
        mov ecx, dword ptr [esp + 0x1c]
        mov edx, dword ptr [esp + 0x18]
        push ecx
        mov ecx, dword ptr [esp + 0xc]
        push edx
        mov edx, dword ptr [esp + 0x1c]
        fnstsw ax
        test ah, 0x40
        mov eax, dword ptr [esp + 0x14]
        push eax
        mov eax, dword ptr [esp + 0x1c]
        push ecx
        push edx
        push eax
        je short L_call_26A0
        call ext_00722BA0
        fstp qword ptr [esi]
        add esp, 0x18
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ret
    L_call_26A0:
        call ext_007226A0
        fstp qword ptr [esi]
        add esp, 0x18
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ret
    L_check_neg500:
        fld qword ptr [edi]
        fst qword ptr [esp + 0x10]
        fcomp qword ptr [mem_009967E8]
        fnstsw ax
        test ah, 0x1
        je short L_call_2660
        fld qword ptr [edx]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ecx + 0x4]
        fst qword ptr [esp + 0x18]
        mov dword ptr [esp + 0x8], edx
        mov dword ptr [esp + 0xc], eax
        fcomp qword ptr [esp + 0x8]
        mov ecx, dword ptr [esp + 0x1c]
        mov edx, dword ptr [esp + 0x18]
        push ecx
        mov ecx, dword ptr [esp + 0xc]
        push edx
        mov edx, dword ptr [esp + 0x1c]
        fnstsw ax
        test ah, 0x40
        mov eax, dword ptr [esp + 0x14]
        push eax
        mov eax, dword ptr [esp + 0x1c]
        push ecx
        push edx
        push eax
        je short L_call_2730
        call ext_00722C20
        fstp qword ptr [esi]
        add esp, 0x18
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ret
    L_call_2730:
        call ext_00722730
        fstp qword ptr [esi]
        add esp, 0x18
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ret
    L_call_2660:
        mov eax, dword ptr [edx + 0x4]
        mov edx, dword ptr [edx]
        push eax
        mov eax, dword ptr [ecx + 0x4]
        mov ecx, dword ptr [ecx]
        push edx
        mov edx, dword ptr [esp + 0x1c]
        push eax
        mov eax, dword ptr [esp + 0x1c]
        push ecx
        push edx
        push eax
        call ext_00722660
        fstp qword ptr [esi]
        add esp, 0x18
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}

// [0x007205F0] sub_007205F0 (400 bytes)
extern "C" __declspec(naked) void __cdecl fn_007205F0() {
    __asm {
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr [esp + 0x18]
        test edi, edi
        jne L_720689
        mov esi, dword ptr [esp + 0x14]
        test esi, esi
        je L_720635
        mov edi, dword ptr [esp + 0x20]
        mov ebx, dword ptr [esp + 0x1c]
    L_720610:
        cmp dword ptr [esi + 0x58], ebx
        jge L_72063A
        mov ecx, dword ptr [edi]
        lea eax, [esp + 0x1c]
        push eax
        push ecx
        mov ecx, edi
        mov dword ptr [esp + 0x24], esi
        call ext_006D2170
        mov ecx, esi
        call ext_006CD320
        mov esi, eax
        test esi, esi
        jne L_720610
    L_720635:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    L_72063A:
        test esi, esi
        je L_720635
    L_72063E:
        cmp dword ptr [esi + 0x58], ebx
        jg L_720655
        mov ecx, esi
        call ext_006CD320
        mov esi, eax
        test esi, esi
        jne L_72063E
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    L_720655:
        test esi, esi
        je L_720635
        mov edi, dword ptr [esp + 0x24]
    L_72065D:
        mov eax, dword ptr [esi + 0x58]
        test eax, eax
        je L_720635
        mov eax, dword ptr [edi]
        lea edx, [esp + 0x1c]
        push edx
        push eax
        mov ecx, edi
        mov dword ptr [esp + 0x24], esi
        call ext_006D2170
        mov ecx, esi
        call ext_006CD320
        mov esi, eax
        test esi, esi
        jne L_72065D
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    L_720689:
        mov ecx, dword ptr [edi + 0x10]
        mov ebx, dword ptr [esp + 0x14]
        xor esi, esi
        mov eax, dword ptr [ecx]
        mov ecx, ebx
        push eax
        call ext_006DECA0
        test eax, eax
        jne L_7206BA
    L_7206A0:
        mov edx, dword ptr [edi]
        dec edx
        cmp esi, edx
        jge L_720635
        mov eax, dword ptr [edi + 0x10]
        inc esi
        xor ecx, ecx
        mov eax, dword ptr [eax + 4 * esi]
        push eax
        call ext_006DECA0
        test eax, eax
        je L_7206A0
    L_7206BA:
        mov ebp, dword ptr [esp + 0x20]
    L_7206BE:
        mov ecx, dword ptr [eax + 0x58]
        mov edx, dword ptr [esp + 0x1c]
        cmp ecx, edx
        jge L_7206FD
        mov dword ptr [esp + 0x14], eax
        mov eax, dword ptr [ebp]
        lea edx, [esp + 0x14]
        mov ecx, ebp
        push edx
        push eax
        call ext_006D2170
    L_7206DD:
        mov ecx, dword ptr [edi]
        dec ecx
        cmp esi, ecx
        jge L_720635
        mov edx, dword ptr [edi + 0x10]
        inc esi
        mov ecx, ebx
        mov eax, dword ptr [edx + 4 * esi]
        push eax
        call ext_006DECA0
        test eax, eax
        je L_7206DD
        jmp L_7206BE
    L_7206FD:
        test eax, eax
        je L_720635
    L_720705:
        mov ecx, dword ptr [esp + 0x1c]
        mov edx, dword ptr [eax + 0x58]
        cmp edx, ecx
        jg L_720730
    L_720710:
        mov edx, dword ptr [edi]
        dec edx
        cmp esi, edx
        jge L_720635
        mov eax, dword ptr [edi + 0x10]
        inc esi
        mov ecx, ebx
        mov eax, dword ptr [eax + 4 * esi]
        push eax
        call ext_006DECA0
        test eax, eax
        je L_720710
        jmp L_720705
    L_720730:
        test eax, eax
        je L_720635
        mov ebp, dword ptr [esp + 0x24]
    L_72073C:
        mov ecx, dword ptr [eax + 0x58]
        test ecx, ecx
        je L_720635
        mov edx, dword ptr [ebp]
        lea ecx, [esp + 0x1c]
        push ecx
        push edx
        mov ecx, ebp
        mov dword ptr [esp + 0x24], eax
        call ext_006D2170
    L_72075B:
        mov eax, dword ptr [edi]
        dec eax
        cmp esi, eax
        jge L_720635
        mov ecx, dword ptr [edi + 0x10]
        inc esi
        mov eax, dword ptr [ecx + 4 * esi]
        mov ecx, ebx
        push eax
        call ext_006DECA0
        test eax, eax
        je L_72075B
        jmp L_72073C
    }
}

// [0x0072F8D0] sub_0072F8D0 (400 bytes)
extern "C" void ext_006B9EC0(); extern "C" void ext_006BA6C0(); extern "C" void ext_006D3D30();
extern "C" void ext_00726770(); extern "C" void ext_00726840(); extern "C" void ext_00726860();
extern "C" void ext_007268D0(); extern "C" void ext_00726AA0(); extern "C" void ext_00726B40();
extern "C" void ext_0072B120(); extern "C" void ext_007313F0();
extern "C" __declspec(naked) void* __fastcall fn_0072F8D0(void* self, int edx_unused, int arg) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 0x8]
        push edi
        push 0xaad39c
        xor edi, edi
        call ext_006BA6C0
        test eax, eax
        jne Lend
        mov ecx, dword ptr [esi + 0x4]
        call ext_006D3D30
        mov ecx, dword ptr [esi + 0xac]
        push 0
        push 0xaacd0c
        add ecx, 4
        mov edi, eax
        call ext_00726B40
        mov ecx, esi
        call ext_007313F0
        push eax
        mov ecx, edi
        call ext_0072B120
        mov ecx, dword ptr [esi + 0xac]
        push 0xaad390
        add ecx, 4
        call ext_00726770
        test al, al
        je Lend
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 4
        call ext_00726860
        test al, al
        je Lfin
        mov ecx, dword ptr [esi + 0xac]
        push 0
        push 0xaacd0c
        add ecx, 4
        call ext_00726B40
        mov ecx, dword ptr [esi + 0xac]
        push 0xb5d2c0
        add ecx, 4
        push 0xaad388
        call ext_00726AA0
        push eax
        mov ecx, edi
        call ext_006B9EC0
        mov ecx, dword ptr [esi + 0xac]
        push 0xb5d2c0
        add ecx, 4
        push 0xaad380
        call ext_00726AA0
        push eax
        lea ecx, [edi + 0x4c]
        call ext_006B9EC0
        mov ecx, dword ptr [esi + 0xac]
        push 0xb5d2c0
        add ecx, 4
        push 0xaad378
        call ext_00726AA0
        push eax
        lea ecx, [edi + 0x98]
        call ext_006B9EC0
        mov ecx, dword ptr [esi + 0xac]
        push 0xb5d2c0
        add ecx, 4
        push 0xaad36c
        call ext_00726AA0
        push eax
        lea ecx, [edi + 0xe4]
        call ext_006B9EC0
        mov ecx, dword ptr [esi + 0xac]
        push 0xb5d2c0
        add ecx, 4
        push 0xaad360
        call ext_00726AA0
        push eax
        lea ecx, [edi + 0x130]
        call ext_006B9EC0
        mov ecx, dword ptr [esi + 0xac]
        push 0xb5d2c0
        add ecx, 4
        push 0xaad358
        call ext_00726AA0
        push eax
        lea ecx, [edi + 0x17c]
        call ext_006B9EC0
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 4
        call ext_007268D0
    Lfin:
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 4
        call ext_00726840
    Lend:
        mov eax, edi
        pop edi
        pop esi
        ret 4
    }
}

// [0x00725650] sub_00725650 (416 bytes)
extern "C" void ext_006B9D10();
extern "C" void ext_006B9D70();
extern "C" void ext_006B9D80();
extern "C" void ext_006B9EC0();
extern "C" void ext_006BA220();
extern "C" void ext_006E7460();
extern "C" void ext_00724BF0();
extern "C" void ext_00725AE0();
extern "C" void ext_00725D60();
extern "C" void ext_00725DE0();
extern "C" void ext_007275F0();
extern "C" void ext_00728230();
extern "C" void ext_007283B0();
extern "C" int mem_00AACB1C;
extern "C" int mem_00AACB24;
extern "C" int mem_00AACB20;
extern "C" int mem_00AACB28;
extern "C" int mem_00AACF60;
extern "C" int mem_00AACF48;
extern "C" int mem_00AACE80;
extern "C" int mem_00AACE78;
extern "C" int mem_00AACE6C;
extern "C" int mem_00AACCCC;

extern "C" __declspec(naked) bool __fastcall fn_00725650(void* self) {
    __asm {
        push    -1
        push    0x8c008e
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0xf8
        push    ebx
        lea     eax, [esp + 0xb0]
        push    esi
        mov     esi, ecx
        push    eax
        call    ext_00725AE0
        lea     ecx, [esp + 0x68]
        mov     dword ptr [esp + 0x108], 0
        push    ecx
        mov     ecx, esi
        call    ext_00725D60
        mov     edx, dword ptr [mem_00AACB1C]
        mov     ecx, dword ptr [mem_00AACB24]
        mov     eax, dword ptr [mem_00AACB20]
        mov     dword ptr [esp + 0xc], edx
        mov     edx, dword ptr [mem_00AACB28]
        mov     dword ptr [esp + 0x14], ecx
        lea     ecx, [esp + 0x68]
        mov     byte ptr [esp + 0x108], 1
        mov     dword ptr [esp + 0x10], eax
        mov     dword ptr [esp + 0x18], edx
        call    ext_006E7460
        push    eax
        lea     eax, [esp + 0x10]
        push    eax
        mov     ecx, esi
        call    ext_00725DE0
        mov     al, byte ptr [esi + 0x15]
        test    al, al
        je      short L_skip1
        push    offset mem_00AACF60
        mov     ecx, esi
        call    ext_007275F0
        lea     ecx, [esp + 0xc]
        push    0x10
        push    ecx
        mov     ecx, esi
        call    ext_00728230
        mov     ecx, esi
        call    ext_007283B0
L_skip1:
        lea     ecx, [esp + 0xb4]
        call    ext_006E7460
        sub     esp, 0x4c
        mov     ecx, esp
        mov     dword ptr [esp + 0x54], esp
        push    eax
        call    ext_006B9D80
        push    offset mem_00AACF48
        mov     ecx, esi
        call    ext_00724BF0
        lea     ecx, [esp + 0x1c]
        call    ext_006B9D10
        push    offset mem_00AACE80
        lea     ecx, [esp + 0x20]
        mov     byte ptr [esp + 0x10c], 2
        call    ext_006B9EC0
        push    offset mem_00AACE78
        lea     ecx, [esp + 0x20]
        call    ext_006BA220
        push    offset mem_00AACE6C
        lea     ecx, [esp + 0x20]
        call    ext_006BA220
        lea     ecx, [esp + 0x1c]
        call    ext_006E7460
        sub     esp, 0x4c
        mov     ecx, esp
        mov     dword ptr [esp + 0x54], esp
        push    eax
        call    ext_006B9D80
        push    offset mem_00AACCCC
        mov     ecx, esi
        call    ext_00724BF0
        lea     ecx, [esi + 0xef0]
        call    ext_006E7460
        cmp     eax, -1
        lea     ecx, [esp + 0x1c]
        sete    bl
        mov     byte ptr [esp + 0x108], 1
        call    ext_006B9D70
        lea     ecx, [esp + 0x68]
        mov     byte ptr [esp + 0x108], 0
        call    ext_006B9D70
        lea     ecx, [esp + 0xb4]
        mov     dword ptr [esp + 0x108], 0xffffffff
        call    ext_006B9D70
        mov     ecx, dword ptr [esp + 0x100]
        mov     al, bl
        pop     esi
        mov     dword ptr fs:[0], ecx
        pop     ebx
        add     esp, 0x104
        ret
    }
}

// [0x00727C80] sub_00727C80 (432 bytes)
extern "C" void ext_006E7410();
extern "C" void ext_006E7440();
extern "C" void ext_006E7460();
extern "C" int mem_00925218;

extern "C" __declspec(naked) void __fastcall fn_00727C80(void* self, int edx_unused, int arg) {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0x408
        push ebx
        push esi
        mov esi, ecx
        lea ebx, [esi + 0xef0]
        mov ecx, ebx
        call ext_006E7460
        cmp eax, -1
        jg L_end
        mov ecx, dword ptr [esi + 0x10]
        mov eax, dword ptr [ecx]
        call dword ptr [eax + 0x2c]
        test al, al
        je L_end
        mov eax, dword ptr [esi + 0x25c]
        test eax, eax
        jne L_skip1
        push 0xaad040
        push 0xa
        mov ecx, ebx
        call ext_006E7410
L_skip1:
        mov al, byte ptr [esi + 0x15]
        push edi
        test al, al
        jne L_7d8e
        cmp dword ptr [esi + 0x25c], 1
        jle L_7cf2
        mov ecx, dword ptr [ebp + 8]
        lea edx, [ebp - 0x408]
        push ecx
        push 0xaad094
        push edx
        jmp L_sprintf
L_7cf2:
        mov eax, dword ptr [ebp + 8]
        lea ecx, [ebp - 0x408]
        push eax
        push 0xaa86a4
        push ecx
L_sprintf:
        call dword ptr [mem_00925218]
        mov eax, dword ptr [esi + 0x10]
        add esp, 0xc
        lea ecx, [ebp - 0x408]
        mov edx, dword ptr [eax]
        push ecx
        push eax
        call dword ptr [edx + 0x3c]
        lea edi, [ebp - 0x408]
        or ecx, -1
        xor eax, eax
        add esp, 8
        repne scasb
        mov edx, dword ptr [esi + 0xeec]
        not ecx
        dec ecx
        add edx, ecx
        mov eax, edx
        mov dword ptr [esi + 0xeec], edx
        cmp eax, 0x78
        jle L_7dfa
        mov eax, dword ptr [esi + 0x10]
        push 0xaad034
        push eax
        mov edx, dword ptr [eax]
        call dword ptr [edx + 0x3c]
        mov eax, dword ptr [esi + 0xee8]
        add esp, 8
        xor edi, edi
        test eax, eax
        jle L_7d80
L_loop:
        mov eax, dword ptr [esi + 0x10]
        push 0xaa9490
        push eax
        mov ecx, dword ptr [eax]
        call dword ptr [ecx + 0x3c]
        mov eax, dword ptr [esi + 0xee8]
        add esp, 8
        inc edi
        cmp edi, eax
        jl L_loop
L_7d80:
        mov edx, dword ptr [esi + 0xee8]
        mov dword ptr [esi + 0xeec], edx
        jmp L_7dfa
L_7d8e:
        mov ecx, dword ptr [esi + 0x10]
        mov byte ptr [ebp - 1], 0x49
        lea edx, [ebp - 1]
        push 1
        mov eax, dword ptr [ecx]
        push edx
        call dword ptr [eax + 0x1c]
        mov al, byte ptr [esi + 0x16]
        test al, al
        je L_7dbb
        mov eax, dword ptr [ebp + 8]
        bswap eax
        mov ecx, dword ptr [esi + 0x10]
        mov dword ptr [ebp - 8], eax
        push 4
        lea edx, [ebp - 8]
        mov eax, dword ptr [ecx]
        jmp L_7dc5
L_7dbb:
        mov ecx, dword ptr [esi + 0x10]
        push 4
        lea edx, [ebp + 8]
        mov eax, dword ptr [ecx]
L_7dc5:
        push edx
        call dword ptr [eax + 0x1c]
        mov eax, dword ptr [esi + 0x260]
        shl eax, 4
        mov ecx, dword ptr [eax + esi + 0x26c]
        lea eax, [eax + esi + 0x26c]
        inc ecx
        mov dword ptr [eax], ecx
        mov ecx, dword ptr [esi + 0x260]
        add ecx, 0x27
        shl ecx, 4
        lea eax, [ecx + esi]
        mov ecx, dword ptr [ecx + esi]
        add ecx, 5
        mov dword ptr [eax], ecx
L_7dfa:
        mov edx, dword ptr [esi + 0x25c]
        mov ecx, dword ptr [esi + 0x10]
        inc edx
        mov dword ptr [esi + 0x25c], edx
        mov edx, dword ptr [ecx]
        call dword ptr [edx + 0x30]
        test eax, eax
        pop edi
        je L_end
        push 0xb
        mov ecx, ebx
        call ext_006E7440
L_end:
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 4
    }
}

// [0x00727E30] sub_00727E30 (432 bytes)
extern "C" void ext_006E7410();
extern "C" void ext_006E7440();
extern "C" void ext_006E7460();
extern "C" int mem_00925218;
extern "C" __declspec(naked) void __fastcall fn_00727E30(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0x40c
        push ebx
        push esi
        mov esi, ecx
        lea ebx, [esi + 0xef0]
        mov ecx, ebx
        call ext_006E7460
        cmp eax, -1
        jg L_end
        mov ecx, dword ptr [esi + 0x10]
        mov eax, dword ptr [ecx]
        call dword ptr [eax + 0x2c]
        test al, al
        je L_end
        mov eax, dword ptr [esi + 0x25c]
        test eax, eax
        jne L_skip_init
        push 0xaad040
        push 0xa
        mov ecx, ebx
        call ext_006E7410
L_skip_init:
        mov al, byte ptr [esi + 0x15]
        push edi
        test al, al
        jne L_f39
        mov eax, dword ptr [esi + 0x25c]
        mov ecx, dword ptr [ebp + 0xc]
        mov edx, dword ptr [ebp + 0x8]
        cmp eax, 0x1
        push ecx
        push edx
        jle L_small
        push 0xaad098
        jmp L_fmt_done
L_small:
        push 0xaa92d4
L_fmt_done:
        lea eax, [ebp - 0x40c]
        push eax
        call dword ptr [mem_00925218]
        mov eax, dword ptr [esi + 0x10]
        add esp, 0x10
        lea edx, [ebp - 0x40c]
        mov ecx, dword ptr [eax]
        push edx
        push eax
        call dword ptr [ecx + 0x3c]
        lea edi, [ebp - 0x40c]
        or ecx, -1
        xor eax, eax
        add esp, 0x8
        repne scasb
        mov edx, dword ptr [esi + 0xeec]
        not ecx
        dec ecx
        add edx, ecx
        mov eax, edx
        mov dword ptr [esi + 0xeec], edx
        cmp eax, 0x78
        jle L_add
        mov eax, dword ptr [esi + 0x10]
        push 0xaad034
        push eax
        mov ecx, dword ptr [eax]
        call dword ptr [ecx + 0x3c]
        mov eax, dword ptr [esi + 0xee8]
        add esp, 0x8
        xor edi, edi
        test eax, eax
        jle L_after_loop
L_loop:
        mov eax, dword ptr [esi + 0x10]
        push 0xaa9490
        push eax
        mov edx, dword ptr [eax]
        call dword ptr [edx + 0x3c]
        mov eax, dword ptr [esi + 0xee8]
        add esp, 0x8
        inc edi
        cmp edi, eax
        jl L_loop
L_after_loop:
        mov eax, dword ptr [esi + 0xee8]
        mov dword ptr [esi + 0xeec], eax
        jmp L_add
L_f39:
        mov ecx, dword ptr [esi + 0x10]
        mov byte ptr [ebp - 0x1], 0x4c
        lea eax, [ebp - 0x1]
        push 0x1
        mov edx, dword ptr [ecx]
        push eax
        call dword ptr [edx + 0x1c]
        mov al, byte ptr [esi + 0x16]
        test al, al
        je L_plain
        mov edx, dword ptr [ebp + 0x8]
        mov eax, dword ptr [ebp + 0xc]
        bswap edx
        bswap eax
        mov ecx, dword ptr [esi + 0x10]
        mov dword ptr [ebp - 0x8], edx
        mov dword ptr [ebp - 0xc], eax
        push 0x8
        mov edx, dword ptr [ecx]
        lea eax, [ebp - 0xc]
        jmp L_emit
L_plain:
        mov ecx, dword ptr [esi + 0x10]
        push 0x8
        lea eax, [ebp + 0x8]
        mov edx, dword ptr [ecx]
L_emit:
        push eax
        call dword ptr [edx + 0x1c]
        mov ecx, dword ptr [esi + 0x260]
        shl ecx, 0x4
        lea eax, [ecx + esi + 0x26c]
        mov ecx, dword ptr [ecx + esi + 0x26c]
        inc ecx
        mov dword ptr [eax], ecx
        mov edx, dword ptr [esi + 0x260]
        add edx, 0x27
        shl edx, 0x4
        mov ecx, dword ptr [edx + esi]
        lea eax, [edx + esi]
        add ecx, 0x9
        mov dword ptr [eax], ecx
L_add:
        mov edx, dword ptr [esi + 0x25c]
        mov ecx, dword ptr [esi + 0x10]
        inc edx
        mov dword ptr [esi + 0x25c], edx
        mov eax, dword ptr [ecx]
        call dword ptr [eax + 0x30]
        test eax, eax
        pop edi
        je L_end
        push 0xb
        mov ecx, ebx
        call ext_006E7440
L_end:
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0x8
    }
}

// [0x007254A0] sub_007254A0 (432 bytes)
extern "C" void ext_006D2170();
extern "C" void ext_006D2200();
extern "C" void ext_00725340();
extern "C" void ext_00725650();
extern "C" void ext_00725840();

extern "C" __declspec(naked) void __fastcall fn_007254A0(void* self, int edx_unused, int arg) {
    __asm {
        sub esp, 8
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 10h]
        test ecx, ecx
        je short L_254A0_7bd
        mov eax, dword ptr [ecx]
        call dword ptr [eax + 2ch]
        test al, al
        jne short L_254A0_7bd
        pop esi
        add esp, 8
        ret 4
L_254A0_7bd:
        cmp dword ptr [esi + 1c4h], -1
        je short L_254A0_7cf
        xor al, al
        pop esi
        add esp, 8
        ret 4
L_254A0_7cf:
        mov al, byte ptr [esi + 15h]
        test al, al
        jne short L_254A0_7df
        xor al, al
        pop esi
        add esp, 8
        ret 4
L_254A0_7df:
        mov eax, dword ptr [esi + 8]
        push ebx
        cmp eax, 1
        push edi
        jne short L_254A0_7f0
        mov bl, al
        jmp L_254A0_7fa
L_254A0_7f0:
        cmp eax, 2
        jne L_254A0_7da
        mov al, byte ptr [esi + 17h]
        test al, al
        jne L_254A0_7da
        mov ecx, dword ptr [esi + 10h]
        push 0
        push 2
        mov edx, dword ptr [ecx]
        call dword ptr [edx + 20h]
        mov ecx, dword ptr [esi + 10h]
        mov eax, dword ptr [ecx]
        call dword ptr [eax + 24h]
        lea ecx, [esp + 10h]
        lea edx, [esp + 0ch]
        push ecx
        push edx
        push eax
        mov ecx, esi
        mov dword ptr [esp + 18h], 0
        mov dword ptr [esp + 1ch], 0
        call ext_00725340
        test al, al
        je L_254A0_7e7
        mov al, byte ptr [esp + 18h]
        mov bl, 1
        test al, al
        je L_254A0_7fa
        mov eax, dword ptr [esp + 0ch]
        test eax, eax
        je L_254A0_7fa
        mov ecx, dword ptr [esi + 10h]
        push eax
        push 0
        mov edx, dword ptr [ecx]
        call dword ptr [edx + 20h]
        mov ecx, dword ptr [esi + 10h]
        mov edx, dword ptr [esp + 0ch]
        push edx
        mov eax, dword ptr [ecx]
        call dword ptr [eax + 40h]
        mov eax, dword ptr [esi + 194h]
        lea edi, [esi + 194h]
        mov edx, dword ptr [esi + 4]
        dec eax
        mov dword ptr [esi + 1c4h], eax
        mov ecx, dword ptr [esi + 1bch]
        mov dword ptr [ecx + eax*4], edx
L_254A0_593:
        mov ecx, esi
        mov dword ptr [esi + 1c8h], 1
        call ext_00725650
        test al, al
        jne L_254A0_7dc
        mov eax, dword ptr [edi]
        mov ecx, edi
        dec eax
        push eax
        call ext_006D2200
        mov edx, dword ptr [esi + 1ach]
        lea ecx, [esi + 1ach]
        dec edx
        push edx
        call ext_006D2200
        mov dword ptr [esi + 1c4h], -1
        mov dword ptr [esi + 1c8h], 0
L_254A0_7da:
        xor bl, bl
L_254A0_7dc:
        mov al, bl
        pop edi
        pop ebx
        pop esi
        add esp, 8
        ret 4
L_254A0_7e7:
        mov eax, dword ptr [esi + 4]
        mov ecx, esi
        push eax
        push 0
        call ext_00725840
        mov bl, al
        test bl, bl
        je L_254A0_7dc
L_254A0_7fa:
        mov ecx, dword ptr [esi + 10h]
        lea edi, [esi + 194h]
        mov edx, dword ptr [ecx]
        call dword ptr [edx + 24h]
        mov dword ptr [esp + 18h], eax
        mov eax, dword ptr [edi]
        lea ecx, [esp + 18h]
        push ecx
        push eax
        mov ecx, edi
        call ext_006D2170
        mov edx, dword ptr [esi + 4]
        lea ecx, [esi + 1ach]
        mov dword ptr [esp + 18h], edx
        mov dword ptr [esi + 1c4h], eax
        mov eax, dword ptr [ecx]
        lea edx, [esp + 18h]
        push edx
        push eax
        call ext_006D2170
        mov dword ptr [esi + 1c4h], eax
        jmp L_254A0_593
    }
}

// [0x00723490] sub_00723490 (432 bytes)
extern "C" void ext_00723B30();
extern "C" void ext_00723BA0();
extern "C" void ext_006B9D70();
extern "C" void ext_006B9E60();
extern "C" void ext_006B9EC0();
extern "C" void ext_006E7410();
extern "C" void ext_006E7460();
extern "C" void ext_006FE2A0();
extern "C" void ext_006FE4B0();
extern "C" void ext_006FE610();
extern "C" int mem_00925218;

extern "C" __declspec(naked) void __fastcall fn_00723490(void* self, int edx_unused, int a1, int a2, int a3, int a4) {
    __asm {
        push -1
        push 0x8bd6d1
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x44c
        push ebx
        push ebp
        push esi
        push edi
        mov esi, ecx
        call ext_00723B30
        mov edi, dword ptr [esp + 0x46c]
        lea ecx, [esi + 0x64]
        push edi
        call ext_006B9EC0
        lea eax, [esp + 0x10]
        push edi
        push eax
        call ext_006FE610
        add esp, 0x8
        lea ebx, [esi + 0x18]
        push eax
        mov ecx, ebx
        mov dword ptr [esp + 0x468], 0
        call ext_006B9E60
        or ebp, -1
        lea ecx, [esp + 0x10]
        mov dword ptr [esp + 0x464], ebp
        call ext_006B9D70
        push 1
        lea ecx, [esp + 0x14]
        push edi
        push ecx
        call ext_006FE4B0
        add esp, 0xc
        lea edi, [esi + 0xb0]
        push eax
        mov ecx, edi
        mov dword ptr [esp + 0x468], 1
        call ext_006B9E60
        lea ecx, [esp + 0x10]
        mov dword ptr [esp + 0x464], ebp
        call ext_006B9D70
        mov ecx, edi
        call ext_006E7460
        push eax
        mov ecx, ebx
        call ext_006E7460
        lea edx, [esp + 0x14]
        push eax
        push edx
        call ext_006FE2A0
        add esp, 0xc
        lea edi, [esi + 0xfc]
        mov ebx, 2
        push eax
        mov ecx, edi
        mov dword ptr [esp + 0x468], ebx
        call ext_006B9E60
        lea ecx, [esp + 0x10]
        mov dword ptr [esp + 0x464], ebp
        call ext_006B9D70
        mov eax, dword ptr [esi + 0x10]
        push 0xaacc48
        mov ecx, edi
        mov ebp, dword ptr [eax]
        call ext_006E7460
        mov ecx, dword ptr [esi + 0x10]
        push eax
        call dword ptr [ebp + 0x8]
        mov ecx, dword ptr [esi + 0x10]
        mov edx, dword ptr [ecx]
        call dword ptr [edx + 0x2c]
        test al, al
        jne short L_success
        mov eax, dword ptr [esi + 0x10]
        push 0xaab92c
        mov ecx, edi
        mov ebx, dword ptr [eax]
        call ext_006E7460
        mov ecx, dword ptr [esi + 0x10]
        push eax
        call dword ptr [ebx + 0x8]
        mov dword ptr [esi + 0x8], 0
        jmp short L_after_success
L_success:
        mov dword ptr [esi + 0x8], ebx
L_after_success:
        mov ecx, dword ptr [esi + 0x10]
        mov edx, dword ptr [ecx]
        call dword ptr [edx + 0x2c]
        test al, al
        jne short L_tail
        mov ecx, edi
        call ext_006E7460
        push eax
        lea eax, [esp + 0x60]
        push 0xaacc18
        push eax
        call dword ptr [mem_00925218]
        add esp, 0xc
        lea ecx, [esp + 0x5c]
        push ecx
        push 3
        lea ecx, [esi + 0xef0]
        call ext_006E7410
        xor al, al
        jmp short L_epilogue
L_tail:
        mov edx, dword ptr [esp + 0x478]
        mov eax, dword ptr [esp + 0x474]
        mov ecx, dword ptr [esp + 0x470]
        push edx
        push eax
        push ecx
        push 0
        mov ecx, esi
        call ext_00723BA0
L_epilogue:
        mov ecx, dword ptr [esp + 0x45c]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x458
        ret 0x10
    }
}

// [0x007290D0] sub_007290D0 (432 bytes)
extern "C" void ext_006D7970();
extern "C" void ext_006D7990();
extern "C" void ext_006D7A90();
extern "C" void ext_006D7AA0();
extern "C" void ext_006DE130();
extern "C" void ext_006DEEC0();
extern "C" void ext_007299C0();
extern "C" void ext_00729A00();
extern "C" void ext_00729A60();
extern "C" void ext_0072A720();
extern "C" void ext_0072A750();
extern "C" void ext_0072A850();
extern "C" void ext_0078D260();
extern "C" void ext_0078D2D0();
extern "C" void ext_00792600();

extern "C" __declspec(naked) void __fastcall fn_007290D0(void* self, int edx_unused, void* arg) {
    __asm {
        push -1
        push 0x8bd998
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x34
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr [esp + 0x54]
        mov dword ptr [esp + 0x10], ecx
        push edi
        call ext_0072A720
        mov ecx, dword ptr [edi + 0x1a8]
        mov ebx, eax
        mov eax, dword ptr [edi + 0x1ac]
        push eax
        push ecx
        call ext_00792600
        mov esi, eax
        mov al, byte ptr [edi + 0x1c0]
        add esp, 8
        test al, al
        je short L_1129
        mov eax, dword ptr [esi]
        push 1
        mov ecx, esi
        call dword ptr [eax + 8]
        jmp short L_1132
    L_1129:
        mov edx, dword ptr [esi]
        push 0
        mov ecx, esi
        call dword ptr [edx + 8]
    L_1132:
        mov al, byte ptr [edi + 0x1c1]
        test al, al
        je short L_1147
        mov eax, dword ptr [esi]
        push 1
        mov ecx, esi
        call dword ptr [eax + 0xc]
        jmp short L_1150
    L_1147:
        mov edx, dword ptr [esi]
        push 0
        mov ecx, esi
        call dword ptr [edx + 0xc]
    L_1150:
        mov eax, dword ptr [edi + 0x1b8]
        mov edx, dword ptr [esi]
        push eax
        mov ecx, esi
        call dword ptr [edx + 0x10]
        mov eax, dword ptr [edi + 0x1bc]
        mov edx, dword ptr [esi]
        push eax
        mov ecx, esi
        call dword ptr [edx + 0x14]
        mov eax, dword ptr [edi + 0x1b4]
        mov ecx, dword ptr [edi + 0x1b0]
        mov ebp, dword ptr [esi]
        push eax
        push ecx
        mov ecx, edi
        call ext_006DEEC0
        push eax
        mov ecx, esi
        call dword ptr [ebp + 0x40]
        mov eax, dword ptr [esi]
        mov ecx, esi
        call dword ptr [eax + 0x30]
        mov edx, dword ptr [esi]
        mov ecx, esi
        mov ebp, eax
        call dword ptr [edx + 0x2c]
        imul ebp, eax
        push ebp
        mov ecx, ebx
        call ext_006D7970
        push 0
        mov ecx, ebx
        call ext_006D7990
        mov ebp, dword ptr [esi]
        mov ecx, ebx
        call ext_006DEEC0
        push eax
        mov ecx, esi
        call dword ptr [ebp + 0x28]
        mov ebp, dword ptr [esi]
        mov ecx, ebx
        call ext_006D7AA0
        push eax
        mov ecx, esi
        call dword ptr [ebp + 0x34]
        mov ebp, dword ptr [esp + 0x10]
        push ebx
        mov ecx, ebp
        call ext_007299C0
        push ebx
        mov ecx, ebp
        call ext_00729A00
        mov ecx, ebx
        call ext_006D7A90
        push eax
        mov ecx, edi
        call ext_006D7A90
        push eax
        lea ecx, [esp + 0x1c]
        call ext_0078D260
        mov eax, dword ptr [esi]
        lea ecx, [esp + 0x14]
        push ecx
        mov ecx, esi
        mov dword ptr [esp + 0x50], 0
        call dword ptr [eax + 4]
        mov eax, dword ptr [edi + 0x1b4]
        mov ecx, dword ptr [edi + 0x1b0]
        push eax
        push ecx
        push esi
        push ebx
        push edi
        mov ecx, ebp
        call ext_0072A750
        lea edx, [esp + 0x14]
        push edx
        push ebx
        push edi
        mov ecx, ebp
        call ext_0072A850
        mov eax, dword ptr [esi]
        push 0
        mov ecx, esi
        call dword ptr [eax + 0x30]
        mov edx, dword ptr [esi]
        push eax
        mov ecx, esi
        call dword ptr [edx + 0x2c]
        push eax
        push esi
        push ebx
        mov ecx, ebp
        call ext_00729A60
        push 0
        mov ecx, esi
        call ext_006DE130
        lea ecx, [esp + 0x14]
        mov dword ptr [esp + 0x4c], -1
        call ext_0078D2D0
        mov ecx, dword ptr [esp + 0x44]
        pop edi
        pop esi
        mov eax, ebx
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x40
        ret 4
    }
}

// [0x00725180] sub_00725180 (384 bytes)
extern "C" void ext_006B9D20();
extern "C" void ext_006B9D70();
extern "C" void ext_006B9D80();
extern "C" void ext_00724FB0();
extern "C" void ext_00725300();
extern "C" void ext_00725B50();
extern "C" void ext_00725C90();
extern "C" void ext_00726770();
extern "C" void ext_00726840();
extern "C" void ext_00726A40();
extern "C" void ext_00726E20();
extern "C" int mem_008BCB18;
extern "C" int mem_00AACF60;
extern "C" int mem_00AACF58;
extern "C" int mem_00AACF48;
extern "C" __declspec(naked) void __fastcall fn_00725180(void* self) {
    __asm {
        push -1
        push offset mem_008BCB18
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x78
        push ebx
        push ebp
        push esi
        push edi
        xor bl, bl
        mov ebp, ecx
        push offset mem_00AACF60
        mov byte ptr [esp + 0x17], bl
        call ext_00726770
        test al, al
        je short L1
        lea eax, [esp + 0x14]
        mov ecx, ebp
        push eax
        mov dword ptr [esp + 0x18], 0x10
        call ext_00726E20
        mov ecx, dword ptr [eax]
        mov dword ptr [esp + 0x28], ecx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [esp + 0x2c], edx
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [esp + 0x30], ecx
        mov edx, dword ptr [eax + 0xc]
        mov dword ptr [esp + 0x34], edx
        jmp short L2
    L1:
        push offset mem_00AACF58
        mov ecx, ebp
        call ext_00726770
        test al, al
        je short L3
        mov ecx, ebp
        call ext_00726A40
        mov edi, eax
        or ecx, -1
        xor eax, eax
        lea edx, [esp + 0x28]
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        mov esi, edi
        mov edi, edx
        shr ecx, 2
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
    L2:
        mov ecx, ebp
        call ext_00726840
        mov bl, 1
    L3:
        push offset mem_00AACF48
        mov ecx, ebp
        call ext_00726770
        test al, al
        je short L4
        mov ecx, ebp
        call ext_00726A40
        push eax
        lea ecx, [esp + 0x40]
        call ext_006B9D80
        mov ecx, ebp
        mov dword ptr [esp + 0x90], 0
        call ext_00726840
        sub esp, 0x4c
        lea edx, [esp + 0x88]
        mov ecx, esp
        mov dword ptr [esp + 0x60], esp
        push edx
        mov byte ptr [esp + 0x63], 1
        call ext_006B9D20
        mov ecx, ebp
        call ext_00725B50
        lea ecx, [esp + 0x3c]
        mov dword ptr [esp + 0x90], 0xffffffff
        call ext_006B9D70
    L4:
        lea eax, [esp + 0x18]
        mov ecx, ebp
        push eax
        call ext_00725300
        test bl, bl
        mov esi, eax
        je short L5
        mov al, byte ptr [esp + 0x13]
        test al, al
        je short L5
        cmp esi, 0x10
        jne short L6
        lea ecx, [esp + 0x28]
        lea edx, [esp + 0x18]
        push ecx
        push edx
        mov ecx, ebp
        call ext_00725C90
        jmp short L8
    L5:
        cmp bl, byte ptr [esp + 0x13]
        je short L7
        xor al, al
        jmp short L8
    L7:
        mov ecx, ebp
        call ext_00724FB0
        cmp dword ptr [ebp + 0x1c4], eax
        jne short L9
        test esi, esi
        je short L9
    L6:
        xor al, al
        jmp short L8
    L9:
        mov al, 1
    L8:
        mov ecx, dword ptr [esp + 0x88]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs:[0], ecx
        pop ebx
        add esp, 0x84
        ret
    }
}

// [0x0072FEB0] sub_0072FEB0 (400 bytes)
extern "C" void ext_006B9D80();
extern "C" void ext_006B9E60();
extern "C" void ext_00726770();
extern "C" void ext_00726840();
extern "C" void ext_00726860();
extern "C" void ext_007268D0();
extern "C" void ext_00726A40();
extern "C" void ext_00743440();
extern "C" void ext_0079D6D0();
extern "C" void ext_008BE016();
extern "C" int mem_00AAD3CC;
extern "C" int mem_00AAD3D8;
extern "C" __declspec(naked) void __fastcall fn_0072FEB0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push offset ext_008BE016
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x4c
        push edi
        mov edi, ecx
        mov ecx, dword ptr [edi+0xac]
        call ext_0079D6D0
        test al, al
        jne L23
        mov ecx, dword ptr [edi+0xac]
        push offset mem_00AAD3CC
        add ecx, 4
        call ext_00726770
        test al, al
        je L23
        mov ecx, dword ptr [edi+0xac]
        add ecx, 4
        call ext_00726860
        test al, al
        je L15
        mov ecx, dword ptr [edi+0xac]
        push offset mem_00AAD3D8
        add ecx, 4
        call ext_00726770
        test al, al
        je L07
        push ebx
        push ebp
        mov ebp, dword ptr [esp+0x6c]
        push esi
        xor ebx, ebx
L33:
        mov ecx, dword ptr [edi+0xac]
        add ecx, 4
        call ext_00726A40
        push eax
        lea ecx, [esp+0x14]
        call ext_006B9D80
        lea eax, [esp+0x10]
        push ebp
        push eax
        mov dword ptr [esp+0x6c], ebx
        call ext_00743440
        add esp, 8
        cmp eax, -1
        jne LCA
        push 0xe4
        call ext_006A5C62
        mov esi, eax
        add esp, 4
        mov dword ptr [esp+0x70], esi
        cmp esi, ebx
        mov byte ptr [esp+0x64], 1
        je LA4
        mov ecx, esi
        call ext_006B9D10
        lea ecx, [esi+0x4c]
        mov byte ptr [esp+0x64], 2
        call ext_006B9D10
        lea ecx, [esi+0x98]
        mov byte ptr [esp+0x64], 3
        call ext_006B9D10
        jmp LA6
LA4:
        xor esi, esi
LA6:
        lea ecx, [esp+0x10]
        mov byte ptr [esp+0x64], bl
        push ecx
        mov ecx, esi
        call ext_006B9E60
        mov eax, dword ptr [ebp]
        lea edx, [esp+0x70]
        push edx
        push eax
        mov ecx, ebp
        mov dword ptr [esp+0x78], esi
        call ext_006D2170
LCA:
        mov ecx, dword ptr [edi+0xac]
        add ecx, 4
        call ext_00726840
        lea ecx, [esp+0x10]
        mov dword ptr [esp+0x64], 0xffffffff
        call ext_006B9D70
        mov ecx, dword ptr [edi+0xac]
        push offset mem_00AAD3D8
        add ecx, 4
        call ext_00726770
        test al, al
        jne L33
        pop esi
        pop ebp
        pop ebx
L07:
        mov ecx, dword ptr [edi+0xac]
        add ecx, 4
        call ext_007268D0
L15:
        mov ecx, dword ptr [edi+0xac]
        add ecx, 4
        call ext_00726840
L23:
        mov ecx, dword ptr [esp+0x50]
        mov al, 1
        pop edi
        mov dword ptr fs:[0], ecx
        add esp, 0x58
        ret 8
    }
}

// [0x00727FE0] sub_00727FE0 (464 bytes)
extern "C" void ext_006E7410();
extern "C" void ext_006E7440();
extern "C" void ext_006E7460();
extern "C" int mem_00925218;

extern "C" __declspec(naked) void __fastcall fn_00727FE0(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0x41c
        push ebx
        push esi
        mov esi, ecx
        lea ebx, [esi + 0xef0]
        mov ecx, ebx
        call ext_006E7460
        cmp eax, -1
        jg L_end
        mov ecx, dword ptr [esi + 0x10]
        mov eax, dword ptr [ecx]
        call dword ptr [eax + 0x2c]
        test al, al
        je L_end
        mov eax, dword ptr [esi + 0x25c]
        test eax, eax
        jne L_skip_init
        push 0xaad040
        push 0xa
        mov ecx, ebx
        call ext_006E7410
L_skip_init:
        mov al, byte ptr [esi + 0x15]
        push edi
        test al, al
        jne L_else
        mov eax, dword ptr [esi + 0x25c]
        mov ecx, dword ptr [ebp + 0xc]
        mov edx, dword ptr [ebp + 0x8]
        cmp eax, 0x1
        push ecx
        push edx
        jle L_fmt2
        push 0xaad0a8
        jmp L_fmt_go
L_fmt2:
        push 0xaad0a0
L_fmt_go:
        lea eax, [ebp - 0x41c]
        push eax
        call dword ptr [mem_00925218]
        mov eax, dword ptr [esi + 0x10]
        add esp, 0x10
        lea edx, [ebp - 0x41c]
        mov ecx, dword ptr [eax]
        push edx
        push eax
        call dword ptr [ecx + 0x3c]
        lea edi, [ebp - 0x41c]
        or ecx, -0x1
        xor eax, eax
        add esp, 0x8
        repne scasb
        mov edx, dword ptr [esi + 0xeec]
        not ecx
        dec ecx
        add edx, ecx
        mov eax, edx
        mov dword ptr [esi + 0xeec], edx
        cmp eax, 0x78
        jle L_tail
        mov eax, dword ptr [esi + 0x10]
        push 0xaad034
        push eax
        mov ecx, dword ptr [eax]
        call dword ptr [ecx + 0x3c]
        mov eax, dword ptr [esi + 0xee8]
        add esp, 0x8
        xor edi, edi
        test eax, eax
        jle L_loopend
L_loop_body:
        mov eax, dword ptr [esi + 0x10]
        push 0xaa9490
        push eax
        mov edx, dword ptr [eax]
        call dword ptr [edx + 0x3c]
        mov eax, dword ptr [esi + 0xee8]
        add esp, 0x8
        inc edi
        cmp edi, eax
        jl L_loop_body
L_loopend:
        mov eax, dword ptr [esi + 0xee8]
        mov dword ptr [esi + 0xeec], eax
        jmp L_tail
L_else:
        mov ecx, dword ptr [esi + 0x10]
        mov byte ptr [ebp - 0x1], 0x44
        lea eax, [ebp - 0x1]
        push 0x1
        mov edx, dword ptr [ecx]
        push eax
        call dword ptr [edx + 0x1c]
        mov al, byte ptr [esi + 0x16]
        test al, al
        je L_nobuf
        mov ecx, dword ptr [ebp + 0x8]
        mov edx, dword ptr [ebp + 0xc]
        mov dword ptr [ebp - 0x14], ecx
        mov dword ptr [ebp - 0x10], edx
        mov edx, dword ptr [ebp - 0x14]
        mov ecx, dword ptr [ebp - 0x10]
        bswap edx
        bswap ecx
        mov dword ptr [ebp - 0x14], ecx
        mov dword ptr [ebp - 0x10], edx
        fld qword ptr [ebp - 0x14]
        fstp qword ptr [ebp - 0x1c]
        mov ecx, dword ptr [ebp - 0x18]
        mov eax, dword ptr [ebp - 0x1c]
        mov dword ptr [ebp - 0x8], ecx
        mov ecx, dword ptr [esi + 0x10]
        mov dword ptr [ebp - 0xc], eax
        push 0x8
        mov edx, dword ptr [ecx]
        lea eax, [ebp - 0xc]
        jmp L_join
L_nobuf:
        mov ecx, dword ptr [esi + 0x10]
        push 0x8
        lea eax, [ebp + 0x8]
        mov edx, dword ptr [ecx]
L_join:
        push eax
        call dword ptr [edx + 0x1c]
        mov ecx, dword ptr [esi + 0x260]
        shl ecx, 0x4
        lea eax, [ecx + esi + 0x26c]
        mov ecx, dword ptr [ecx + esi + 0x26c]
        inc ecx
        mov dword ptr [eax], ecx
        mov edx, dword ptr [esi + 0x260]
        add edx, 0x27
        shl edx, 0x4
        mov ecx, dword ptr [edx + esi]
        lea eax, [edx + esi]
        add ecx, 0x9
        mov dword ptr [eax], ecx
L_tail:
        mov edx, dword ptr [esi + 0x25c]
        mov ecx, dword ptr [esi + 0x10]
        inc edx
        mov dword ptr [esi + 0x25c], edx
        mov eax, dword ptr [ecx]
        call dword ptr [eax + 0x30]
        test eax, eax
        pop edi
        je L_end
        push 0xb
        mov ecx, ebx
        call ext_006E7440
L_end:
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0x8
    }
}

// [0x00727400] sub_00727400 (496 bytes)
extern "C" void ext_006B9F80();
extern "C" void ext_006B9E60();
extern "C" void ext_006B9D70();
extern "C" void ext_006BA0C0();
extern "C" void ext_006E7460();
extern "C" void ext_00782E70();
extern "C" void ext_00788D00();
extern "C" void ext_00788D10();
extern "C" void ext_00788D20();
extern "C" void ext_00788E20();
extern "C" void ext_00788E80();
extern "C" int mem_00925218;

extern "C" __declspec(naked) void __fastcall fn_00727400(void* self, int edx_unused, int a1, int a2, int a3, int a4) {
    __asm {
        push -1
        push 0x8bd8e7
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x74c
        mov eax, dword ptr [esp + 0x760]
        push ebx
        mov ebx, dword ptr [esp + 0x760]
        push ebp
        mov ebp, ecx
        push esi
        push eax
        lea ecx, [esp + 0x20]
        push ebx
        push ecx
        call ext_006B9F80
        add esp, 0xc
        mov esi, dword ptr [esp + 0x770]
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0x764], 0
        call ext_006B9E60
        lea ecx, [esp + 0x1c]
        mov dword ptr [esp + 0x760], 0xffffffff
        call ext_006B9D70
        push 0
        mov ecx, esi
        add ebp, 0x238
        call ext_006E7460
        push eax
        mov ecx, ebp
        call ext_00782E70
        test eax, eax
        je L_end
        push edi
        mov edi, 1
L_loop:
        push edi
        lea edx, [esp + 0x14]
        push 0xaad004
        push edx
        call dword ptr [mem_00925218]
        lea eax, [esp + 0x1c]
        lea ecx, [esp + 0xc4]
        push eax
        push ebx
        push ecx
        call ext_006BA0C0
        mov edx, dword ptr [esp + 0x788]
        mov dword ptr [esp + 0x77c], 1
        push edx
        push eax
        lea eax, [esp + 0x40]
        push eax
        call ext_006B9F80
        add esp, 0x24
        push eax
        mov ecx, esi
        mov byte ptr [esp + 0x768], 2
        call ext_006B9E60
        lea ecx, [esp + 0x20]
        mov byte ptr [esp + 0x764], 1
        call ext_006B9D70
        lea ecx, [esp + 0xb8]
        mov dword ptr [esp + 0x764], 0xffffffff
        call ext_006B9D70
        push 0
        mov ecx, esi
        inc edi
        call ext_006E7460
        push eax
        mov ecx, ebp
        call ext_00782E70
        test eax, eax
        jne L_loop
        mov al, byte ptr [esp + 0x778]
        pop edi
        test al, al
        je L_end
        lea ecx, [esp + 0xc]
        lea edx, [esp + 0x68]
        push ecx
        push ebx
        push edx
        call ext_006BA0C0
        add esp, 0xc
        mov ebx, 3
        lea ecx, [esp + 0x100]
        mov dword ptr [esp + 0x760], ebx
        call ext_00788D00
        lea ecx, [esp + 0x68]
        mov byte ptr [esp + 0x760], 4
        call ext_006E7460
        push eax
        lea ecx, [esp + 0x104]
        call ext_00788D20
        test al, al
        jne L_skip
        lea ecx, [esp + 0x68]
        call ext_006E7460
        push eax
        lea ecx, [esp + 0x104]
        call ext_00788E80
        test al, al
        je short L_skip
        lea ecx, [esp + 0x100]
        call ext_00788E20
L_skip:
        lea ecx, [esp + 0x100]
        mov byte ptr [esp + 0x760], bl
        call ext_00788D10
        lea ecx, [esp + 0x68]
        mov dword ptr [esp + 0x760], 0xffffffff
        call ext_006B9D70
L_end:
        mov ecx, dword ptr [esp + 0x758]
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x758
        ret 0x10
    }
}

// [0x007275F0] sub_007275F0 (528 bytes)
extern "C" void ext_006B9D70();
extern "C" void ext_006E7410();
extern "C" void ext_006E7440();
extern "C" void ext_006E7460();
extern "C" void ext_00728570();
extern "C" void ext_00728880();
extern "C" void ext_00728AD0();
extern "C" __declspec(naked) void __fastcall fn_007275F0(void* self, int edx_unused, int arg) {
    __asm {
        push -1
        push 08bcb18h
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 50h
        push esi
        mov esi, ecx
        push edi
        lea edi, [esi + 0ef0h]
        mov ecx, edi
        mov dword ptr [esp + 8], edi
        call ext_006E7460
        cmp eax, -1
        jg L_275_end
        mov ecx, dword ptr [esi + 10h]
        mov eax, dword ptr [ecx]
        call dword ptr [eax + 2Ch]
        test al, al
        je L_275_end
        mov eax, dword ptr [esi + 25Ch]
        push ebx
        xor ebx, ebx
        cmp eax, ebx
        je L_275_skip1
        push 0aad00ch
        push 0ah
        mov ecx, edi
        call ext_006E7410
    L_275_skip1:
        mov al, byte ptr [esi + 15h]
        mov dword ptr [esi + 25Ch], 1
        cmp al, bl
        jne L_275_else
        mov ecx, esi
        call ext_00728570
        mov ecx, dword ptr [esp + 6ch]
        lea edx, [esp + 10h]
        push ecx
        push edx
        mov ecx, esi
        call ext_00728AD0
        mov eax, dword ptr [esi + 10h]
        mov dword ptr [esp + 64h], ebx
        lea ecx, [esp + 10h]
        mov ebx, dword ptr [eax]
        call ext_006E7460
        mov ecx, dword ptr [esi + 10h]
        push eax
        push ecx
        call dword ptr [ebx + 3Ch]
        mov eax, dword ptr [esi + 10h]
        add esp, 8
        mov edx, dword ptr [eax]
        push 0aad008h
        push eax
        call dword ptr [edx + 3Ch]
        add esp, 8
        lea ecx, [esp + 10h]
        mov dword ptr [esp + 64h], 0ffffffffh
        call ext_006B9D70
        jmp L_275_tail
    L_275_else:
        push ebp
        mov ebp, dword ptr [esp + 70h]
        mov edi, ebp
        or ecx, -1
        xor eax, eax
        repne scasb
        not ecx
        dec ecx
        cmp cl, bl
        mov byte ptr [esp + 70h], cl
        je L_275_a
        cmp byte ptr [ebp], 22h
        jne L_275_a
        inc ebp
        add cl, -2
        mov byte ptr [esp + 70h], cl
    L_275_a:
        mov ecx, dword ptr [esi + 10h]
        mov eax, dword ptr [ecx]
        call dword ptr [eax + 24h]
        mov edi, eax
        mov ecx, esi
        push edi
        call ext_00728880
        mov ecx, dword ptr [esi + 260h]
        push 4
        shl ecx, 4
        mov dword ptr [ecx + esi + 264h], edi
        mov edx, dword ptr [esi + 260h]
        shl edx, 4
        mov dword ptr [edx + esi + 268h], ebx
        mov eax, dword ptr [esi + 260h]
        shl eax, 4
        mov dword ptr [eax + esi + 26Ch], ebx
        mov ecx, dword ptr [esi + 260h]
        add ecx, 27h
        shl ecx, 4
        mov dword ptr [ecx + esi], ebx
        mov eax, dword ptr [esi + 260h]
        mov ecx, dword ptr [esi + 10h]
        shl eax, 4
        mov edx, dword ptr [ecx]
        lea eax, [eax + esi + 268h]
        push eax
        call dword ptr [edx + 1Ch]
        mov eax, dword ptr [esi + 260h]
        mov ecx, dword ptr [esi + 10h]
        shl eax, 4
        mov edx, dword ptr [ecx]
        push 4
        lea eax, [eax + esi + 26Ch]
        push eax
        call dword ptr [edx + 1Ch]
        mov eax, dword ptr [esi + 260h]
        mov ecx, dword ptr [esi + 10h]
        add eax, 27h
        push 4
        mov edx, dword ptr [ecx]
        shl eax, 4
        add eax, esi
        push eax
        call dword ptr [edx + 1Ch]
        mov ecx, dword ptr [esi + 10h]
        lea eax, [esp + 70h]
        push 1
        push eax
        mov edx, dword ptr [ecx]
        call dword ptr [edx + 1Ch]
        mov eax, dword ptr [esp + 70h]
        mov ecx, dword ptr [esi + 10h]
        and eax, 0ffh
        mov edx, dword ptr [ecx]
        push eax
        push ebp
        call dword ptr [edx + 1Ch]
        mov edi, dword ptr [esp + 10h]
        pop ebp
    L_275_tail:
        mov eax, dword ptr [esi + 0ee4h]
        mov ecx, eax
        imul ecx, eax
        lea eax, [ecx + 4]
        mov dword ptr [esi + 0ee8h], eax
        mov dword ptr [esi + 0eech], eax
        mov esi, dword ptr [esi + 10h]
        mov ecx, esi
        mov edx, dword ptr [esi]
        call dword ptr [edx + 30h]
        test eax, eax
        pop ebx
        je L_275_end
        push 0bh
        mov ecx, edi
        call ext_006E7440
    L_275_end:
        mov ecx, dword ptr [esp + 58h]
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 5ch
        ret 4
    }
}

// [0x007285D0] sub_007285D0 (528 bytes)
extern "C" void ext_006E7460();
extern "C" void ext_00728260();
extern "C" void ext_00728370();
extern "C" void ext_00782D90();
extern "C" void ext_00782E70();
extern "C" void ext_007831E0();
extern "C" void ext_00783270();
extern "C" void ext_007832E0();
extern "C" void ext_007833F0();
extern "C" void ext_00783410();
extern "C" void ext_00783570();
extern "C" void ext_007835B0();
extern "C" int mem_00925208;
extern "C" int mem_009251D8;

extern "C" __declspec(naked) bool __fastcall fn_007285D0(void* self, int edx_unused,
    int a0, int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9,
    int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19,
    int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27, int a28, int a29,
    int a30, int a31, int a32, int a33, int a34, int a35, int a36, int a37) {
    __asm {
        push -1
        push 0x8bd918
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        sub esp, 0x58
        push ebx
        push esi
        mov ebx, ecx
        lea ecx, [esp+0x8]
        mov dword ptr [esp+0x68], 1
        call ext_007831E0
        mov al, byte ptr [ebx+0x15]
        mov byte ptr [esp+0x68], 2
        test al, al
        je L_7286F9
        push 0
        push 0
        lea ecx, [esp+0x78]
        call ext_006E7460
        push eax
        lea ecx, [esp+0x14]
        call ext_007832E0
        test al, al
        jne L_72864A
        push 0
        push 0
        lea ecx, [esp+0xc4]
        call ext_006E7460
        push eax
        lea ecx, [esp+0x14]
        call ext_007832E0
        test al, al
        je L_7286F9
L_72864A:
        push 0
        lea ecx, [esp+0x74]
        lea esi, [ebx+0x238]
        call ext_006E7460
        push eax
        mov ecx, esi
        call ext_00782E70
        test eax, eax
        je L_7286AC
        lea ecx, [esp+0x8]
        mov byte ptr [esp+0x68], 1
        call ext_00783270
        lea ecx, [esp+0x70]
        mov byte ptr [esp+0x68], 0
        call ext_006B9D70
        lea ecx, [esp+0xbc]
        mov dword ptr [esp+0x68], 0xffffffff
        call ext_006B9D70
        pop esi
        mov al, 1
        pop ebx
        mov ecx, dword ptr [esp+0x58]
        mov fs:[0], ecx
        add esp, 0x64
        ret 0x98
L_7286AC:
        push 1
        lea ecx, [esp+0x74]
        call ext_006E7460
        push eax
        mov ecx, esi
        call ext_00782D90
        push 0
        push 2
        lea ecx, [esp+0x10]
        call ext_00783570
        lea ecx, [esp+0x8]
        call ext_007835B0
        push 0
        push 0
        lea ecx, [esp+0x10]
        mov esi, eax
        call ext_00783570
        push esi
        mov ecx, ebx
        call ext_00728260
        test al, al
        jne L_72873E
        lea ecx, [esp+0x8]
        call ext_007833F0
L_7286F9:
        lea ecx, [esp+0x8]
        mov byte ptr [esp+0x68], 1
        call ext_00783270
        lea ecx, [esp+0x70]
        mov byte ptr [esp+0x68], 0
        call ext_006B9D70
        lea ecx, [esp+0xbc]
        mov dword ptr [esp+0x68], 0xffffffff
        call ext_006B9D70
        pop esi
        xor al, al
        pop ebx
        mov ecx, dword ptr [esp+0x58]
        mov fs:[0], ecx
        add esp, 0x64
        ret 0x98
L_72873E:
        push ebp
        push 0x80000
        call dword ptr [mem_00925208]
        add esp, 4
        mov ebp, eax
        test esi, esi
        jle L_72877E
        push edi
L_728754:
        cmp esi, 0x80000
        mov edi, esi
        jl L_728763
        mov edi, 0x80000
L_728763:
        push edi
        push ebp
        lea ecx, [esp+0x18]
        call ext_00783410
        push edi
        push ebp
        mov ecx, ebx
        call ext_00728370
        sub esi, edi
        test esi, esi
        jg L_728754
        pop edi
L_72877E:
        lea ecx, [esp+0xc]
        call ext_007833F0
        push ebp
        call dword ptr [mem_009251D8]
        add esp, 4
        lea ecx, [esp+0xc]
        mov byte ptr [esp+0x6c], 1
        call ext_00783270
        lea ecx, [esp+0x74]
        mov byte ptr [esp+0x6c], 0
        call ext_006B9D70
        lea ecx, [esp+0xc0]
        mov dword ptr [esp+0x6c], 0xffffffff
        call ext_006B9D70
        mov ecx, dword ptr [esp+0x64]
        pop ebp
        pop esi
        mov al, 1
        pop ebx
        mov fs:[0], ecx
        add esp, 0x64
        ret 0x98
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
    }
}

// [0x007262E0] sub_007262E0 (528 bytes)
extern "C" void ext_006B99C0();
extern "C" void ext_006B9D10();
extern "C" void ext_006B9D20();
extern "C" void ext_006B9D70();
extern "C" void ext_006B9D80();
extern "C" void ext_006B9E60();
extern "C" void ext_006BA0C0();
extern "C" void ext_006E7410();
extern "C" void ext_006E7460();
extern "C" void ext_006FE3E0();
extern "C" void ext_00788D00();
extern "C" void ext_00788D10();
extern "C" void ext_00788D20();
extern "C" void ext_00788E20();
extern "C" void ext_00788E80();
extern "C" int mem_00925218;

extern "C" __declspec(naked) void* __fastcall fn_007262E0(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        push -1
        push 0x8bd826
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0xaf4
        push ebx
        push esi
        mov esi, ecx
        push edi
        lea ecx, [esp + 0xa8]
        mov dword ptr [esp + 0xc], 0
        call ext_00788D00
        mov ebx, 1
        lea ecx, [esp + 0x10]
        mov dword ptr [esp + 0xb08], ebx
        call ext_006B9D10
        mov eax, dword ptr [esp + 0xb18]
        lea ecx, [esi + 0x64]
        push eax
        mov byte ptr [esp + 0xb0c], 2
        call ext_006E7460
        lea ecx, [esp + 0x60]
        push eax
        push ecx
        call ext_006FE3E0
        add esp, 0xc
        push eax
        lea ecx, [esp + 0x14]
        mov byte ptr [esp + 0xb0c], 3
        call ext_006B9E60
        lea ecx, [esp + 0x5c]
        mov byte ptr [esp + 0xb08], 2
        call ext_006B9D70
        lea ecx, [esp + 0x10]
        call ext_006B99C0
        test eax, eax
        je L_end1
        lea ecx, [esp + 0x10]
        call ext_006E7460
        lea ecx, [esp + 0x10]
        mov edi, eax
        call ext_006B99C0
        cmp byte ptr [edi + eax - 1], 0x5c
        je L_end1
        lea ecx, [esp + 0x10]
        call ext_006E7460
        lea ecx, [esp + 0x10]
        mov edi, eax
        call ext_006B99C0
        cmp byte ptr [edi + eax - 1], 0x2f
        je L_end1
        lea edx, [esp + 0x10]
        push 0xaa9444
        lea eax, [esp + 0x60]
        push edx
        push eax
        call ext_006BA0C0
        add esp, 0xc
        push eax
        lea ecx, [esp + 0x14]
        mov byte ptr [esp + 0xb0c], 4
        call ext_006B9E60
        lea ecx, [esp + 0x5c]
        mov byte ptr [esp + 0xb08], 2
        call ext_006B9D70
    L_end1:
        lea ecx, [esp + 0x10]
        call ext_006E7460
        push eax
        lea ecx, [esp + 0xac]
        call ext_00788D20
        test al, al
        jne L_fail
        mov al, byte ptr [esp + 0xb14]
        test al, al
        je L_else
        lea ecx, [esp + 0x10]
        call ext_006E7460
        push eax
        lea ecx, [esp + 0xac]
        call ext_00788E80
        test al, al
        jne L_fail
        lea ecx, [esp + 0x10]
        call ext_006E7460
        push eax
        lea ecx, [esp + 0x704]
        push 0xaacfdc
        push ecx
        call dword ptr [mem_00925218]
        add esp, 0xc
        lea edx, [esp + 0x700]
        lea ecx, [esi + 0xef0]
        push edx
        push 5
        call ext_006E7410
        jmp L_join
    L_else:
        mov esi, dword ptr [esp + 0xb10]
        push 0xb5d2c0
        mov ecx, esi
        call ext_006B9D80
        mov dword ptr [esp + 0xc], ebx
        jmp L_tail
    L_fail:
        lea ecx, [esp + 0xa8]
        call ext_00788E20
    L_join:
        mov esi, dword ptr [esp + 0xb10]
        lea eax, [esp + 0x10]
        push eax
        mov ecx, esi
        call ext_006B9D20
        mov dword ptr [esp + 0xc], ebx
    L_tail:
        lea ecx, [esp + 0x10]
        mov byte ptr [esp + 0xb08], bl
        call ext_006B9D70
        lea ecx, [esp + 0xa8]
        mov byte ptr [esp + 0xb08], 0
        call ext_00788D10
        mov ecx, dword ptr [esp + 0xb00]
        mov eax, esi
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0xb00
        ret 0xc
    }
}

// [0x00727800] sub_00727800 (416 bytes)
extern "C" void ext_006E7410();
extern "C" void ext_006E7460();
extern "C" int mem_00925218;
extern "C" char str_00AAD040[];
extern "C" char str_00AAD03C[];
extern "C" char str_00AAD038[];
extern "C" char str_00AAD034[];
extern "C" char str_00AA9490[];
extern "C" __declspec(naked) void __fastcall fn_00727800(void* self, int, char ch) {
    __asm {
        sub esp, 0x404
        push ebx
        push esi
        mov esi, ecx
        lea ebx, [esi + 0xef0]
        mov ecx, ebx
        call ext_006E7460
        cmp eax, -1
        jg L_end
        mov ecx, dword ptr [esi + 0x10]
        mov eax, dword ptr [ecx]
        call dword ptr [eax + 0x2c]
        test al, al
        je L_end
        mov eax, dword ptr [esi + 0x25c]
        test eax, eax
        jne L_a
        push offset str_00AAD040
        push 0xa
        mov ecx, ebx
        call ext_006E7410
L_a:
        mov al, byte ptr [esi + 0x15]
        push edi
        test al, al
        jne L_c
        cmp dword ptr [esi + 0x25c], 1
        jle L_b
        movsx ecx, byte ptr [esp + 0x414]
        push ecx
        lea edx, [esp + 0x14]
        push offset str_00AAD03C
        push edx
        jmp L_p
L_b:
        movsx eax, byte ptr [esp + 0x414]
        push eax
        lea ecx, [esp + 0x14]
        push offset str_00AAD038
        push ecx
L_p:
        call dword ptr [mem_00925218]
        mov eax, dword ptr [esi + 0x10]
        add esp, 0xc
        lea ecx, [esp + 0x10]
        mov edx, dword ptr [eax]
        push ecx
        push eax
        call dword ptr [edx + 0x3c]
        lea edi, [esp + 0x18]
        or ecx, -1
        xor eax, eax
        add esp, 8
        repne scasb
        mov edx, dword ptr [esi + 0xeec]
        not ecx
        dec ecx
        add edx, ecx
        mov eax, edx
        mov dword ptr [esi + 0xeec], edx
        cmp eax, 0x78
        jle L_d
        mov eax, dword ptr [esi + 0x10]
        push offset str_00AAD034
        push eax
        mov edx, dword ptr [eax]
        call dword ptr [edx + 0x3c]
        mov eax, dword ptr [esi + 0xee8]
        add esp, 8
        xor edi, edi
        test eax, eax
        jle L_e
L_loop:
        mov eax, dword ptr [esi + 0x10]
        push offset str_00AA9490
        push eax
        mov ecx, dword ptr [eax]
        call dword ptr [ecx + 0x3c]
        mov eax, dword ptr [esi + 0xee8]
        add esp, 8
        inc edi
        cmp edi, eax
        jl L_loop
L_e:
        mov edx, dword ptr [esi + 0xee8]
        mov dword ptr [esi + 0xeec], edx
        jmp L_d
L_c:
        mov ecx, dword ptr [esi + 0x10]
        mov byte ptr [esp + 0xf], 0x43
        lea edx, [esp + 0xf]
        push 1
        mov eax, dword ptr [ecx]
        push edx
        call dword ptr [eax + 0x1c]
        mov ecx, dword ptr [esi + 0x10]
        lea edx, [esp + 0x414]
        push 1
        push edx
        mov eax, dword ptr [ecx]
        call dword ptr [eax + 0x1c]
        mov eax, dword ptr [esi + 0x260]
        shl eax, 4
        mov ecx, dword ptr [eax + esi + 0x26c]
        lea eax, [eax + esi + 0x26c]
        inc ecx
        mov dword ptr [eax], ecx
        mov ecx, dword ptr [esi + 0x260]
        add ecx, 0x27
        shl ecx, 4
        lea eax, [ecx + esi]
        mov ecx, dword ptr [ecx + esi]
        add ecx, 2
        mov dword ptr [eax], ecx
L_d:
        mov edx, dword ptr [esi + 0x25c]
        mov ecx, dword ptr [esi + 0x10]
        inc edx
        mov dword ptr [esi + 0x25c], edx
        mov edx, dword ptr [ecx]
        call dword ptr [edx + 0x30]
        test eax, eax
        pop edi
        je L_end
        push 0xb
        mov ecx, ebx
        call ext_006E7440
L_end:
        pop esi
        pop ebx
        add esp, 0x404
        ret 4
    }
}

// [0x00724FE0] sub_00724FE0 (416 bytes)
extern "C" void ext_006E7440();
extern "C" void ext_00724F00();
extern "C" void ext_00725180();
extern "C" void ext_00725440();
extern "C" void ext_00789A30();
extern "C" void ext_0078A640();
extern "C" __declspec(naked) char __fastcall fn_00724FE0(void* self, int edx_unused, int arg) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8b8fbb
        push eax
        mov dword ptr fs:[0x0], esp
        push esi
        mov esi, ecx
        push edi
        cmp dword ptr [esi+0x1c4], -1
        je L1
        xor al, al
        mov ecx, dword ptr [esp+8]
        mov dword ptr fs:[0x0], ecx
        pop edi
        pop esi
        add esp, 0xc
        ret 4
L1:     mov eax, dword ptr [esi+0x194]
        mov edi, dword ptr [esp+0x18]
        cmp eax, edi
        jg L2
        push 7
        lea ecx, [esi+0xef0]
        call ext_006E7440
        xor al, al
        mov ecx, dword ptr [esp+8]
        mov dword ptr fs:[0x0], ecx
        pop edi
        pop esi
        add esp, 0xc
        ret 4
L2:     test edi, edi
        mov dword ptr [esi+0x1c4], edi
        jne L3
        mov al, byte ptr [esi+0x254]
        test al, al
        je L3
        mov eax, dword ptr [esi+0x258]
        mov dword ptr [esi+0x24c], eax
        mov dword ptr [esi+0x250], eax
        jmp L9
L3:     push 0x44
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp+0x18], eax
        test eax, eax
        mov dword ptr [esp+0x10], 0
        je L4
        mov cl, byte ptr [esi+0x16]
        mov dl, byte ptr [esi+0x15]
        push 0
        push ecx
        mov ecx, dword ptr [esi+0x1a4]
        push edx
        mov edx, dword ptr [ecx+edi*4]
        mov ecx, dword ptr [esi+0x10]
        push edx
        push ecx
        mov ecx, eax
        call ext_00789A30
        jmp L5
L4:     xor eax, eax
L5:     mov ecx, eax
        mov dword ptr [esp+0x10], -1
        mov dword ptr [esi+0x24c], eax
        mov dword ptr [esi+0x250], eax
        call ext_0078A640
        test al, al
        jne L6
        mov ecx, esi
        call ext_00724F00
        push 0
        lea ecx, [esi+0xef0]
        call ext_006E7440
        xor al, al
        mov ecx, dword ptr [esp+8]
        mov dword ptr fs:[0x0], ecx
        pop edi
        pop esi
        add esp, 0xc
        ret 4
L6:     mov al, byte ptr [esi+0x15]
        test al, al
        je L7
        mov ecx, esi
        call ext_00725180
        test al, al
        jne L7
        mov ecx, esi
        call ext_00724F00
        push 0
        lea ecx, [esi+0xef0]
        call ext_006E7440
        xor al, al
        mov ecx, dword ptr [esp+8]
        mov dword ptr fs:[0x0], ecx
        pop edi
        pop esi
        add esp, 0xc
        ret 4
L7:     mov eax, dword ptr [esi+0x1c4]
        test eax, eax
        jne L9
        mov edx, dword ptr [esi+0x24c]
        mov byte ptr [esi+0x254], 1
        mov dword ptr [esi+0x258], edx
L9:     mov al, byte ptr [esi+0x15]
        test al, al
        je L10
        mov ecx, esi
        call ext_00725440
L10:    mov ecx, dword ptr [esp+8]
        mov dword ptr [esi+0x1c8], 0
        pop edi
        mov al, 1
        mov dword ptr fs:[0x0], ecx
        pop esi
        add esp, 0xc
        ret 4
    }
}

// [0x0072C600] sub_0072C600 (544 bytes)
// cdecl(src, dst, n, width, const float* coeffs, flag): per-row YCbCr -> 3-byte pixel conversion
// (row stride = width + 2; the last two bytes of each row are the chroma pair).
extern "C" void ext_00872828();
extern "C" int mem_009969E8;
extern "C" int mem_009969E0;
extern "C" int mem_009969D8;
extern "C" int mem_009969D0;
extern "C" int mem_009969C8;
extern "C" int mem_0092C518;
extern "C" int mem_0092A278;

extern "C" __declspec(naked) void __cdecl fn_0072C600(const unsigned char* src, unsigned char* dst, unsigned int n, unsigned int w, const float* coeffs, unsigned char flag) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -8
        sub esp, 0x3c
        mov eax, dword ptr [ebp + 0x10]
        push ebx
        xor ecx, ecx
        push esi
        push edi
        mov edi, dword ptr [ebp + 0xc]
        cmp eax, ecx
        mov dword ptr [esp + 0x18], ecx
        mov dword ptr [esp + 0x10], ecx
        jbe L_done
        mov esi, dword ptr [ebp + 0x14]
        and esi, 0xffff
        mov dword ptr [esp + 0x14], esi
        jmp short L_rowstart
L_rowcont:
        mov ecx, dword ptr [esp + 0x10]
L_rowstart:
        xor ebx, ebx
        test esi, esi
        jbe L_rowend
        mov eax, dword ptr [ebp + 0x8]
        add esi, ecx
        add ecx, eax
        mov dword ptr [esp + 0x1c], ecx
        jmp short L_pix
L_pixrow:
        mov eax, dword ptr [ebp + 0x8]
L_pix:
        mov edx, dword ptr [esp + 0x1c]
        xor ecx, ecx
        mov cl, byte ptr [edx + ebx]
        xor edx, edx
        mov dl, byte ptr [esi + eax + 0x1]
        mov dword ptr [esp + 0x20], ecx
        fild dword ptr [esp + 0x20]
        xor ecx, ecx
        mov cl, byte ptr [esi + eax]
        mov al, byte ptr [ebp + 0x1c]
        fstp qword ptr [esp + 0x30]
        mov dword ptr [esp + 0x20], ecx
        fild dword ptr [esp + 0x20]
        mov dword ptr [esp + 0x20], edx
        fild dword ptr [esp + 0x20]
        test al, al
        fstp qword ptr [esp + 0x28]
        je L_zero
        mov eax, dword ptr [ebp + 0x18]
        fld dword ptr [eax + 0x8]
        _emit 0xd8
        _emit 0xe9
        fstp qword ptr [esp + 0x20]
        _emit 0xdd
        _emit 0xd8
        fld dword ptr [eax]
        fsubr qword ptr [esp + 0x30]
        fmul qword ptr [mem_009969E8]
        fst qword ptr [esp + 0x38]
        fld qword ptr [esp + 0x20]
        fmul qword ptr [mem_009969E0]
        _emit 0xde
        _emit 0xc1
        fld dword ptr [eax + 0x10]
        fsubr qword ptr [esp + 0x28]
        fld qword ptr [esp + 0x20]
        fmul qword ptr [mem_009969D8]
        fsubr qword ptr [esp + 0x38]
        _emit 0xd9
        _emit 0xc1
        fmul qword ptr [mem_009969D0]
        _emit 0xde
        _emit 0xe9
        fstp qword ptr [esp + 0x28]
        fmul qword ptr [mem_009969C8]
        fadd qword ptr [esp + 0x38]
        fst qword ptr [esp + 0x20]
        fcomp qword ptr [mem_0092C518]
        fnstsw ax
        test ah, 0x41
        jne short L_bchk
        mov dword ptr [esp + 0x20], 0x0
        mov dword ptr [esp + 0x24], 0x406fe000
        jmp short L_g
L_bchk:
        fld qword ptr [esp + 0x20]
        fcomp qword ptr [mem_0092A278]
        fnstsw ax
        test ah, 0x1
        je short L_g
        mov dword ptr [esp + 0x20], 0x0
        mov dword ptr [esp + 0x24], 0x0
L_g:
        fld qword ptr [esp + 0x28]
        fcomp qword ptr [mem_0092C518]
        fnstsw ax
        test ah, 0x41
        jne short L_gchk
        mov dword ptr [esp + 0x28], 0x0
        mov dword ptr [esp + 0x2c], 0x406fe000
        jmp short L_r
L_gchk:
        fld qword ptr [esp + 0x28]
        fcomp qword ptr [mem_0092A278]
        fnstsw ax
        test ah, 0x1
        je short L_r
        mov dword ptr [esp + 0x28], 0x0
        mov dword ptr [esp + 0x2c], 0x0
L_r:
        fcom qword ptr [mem_0092C518]
        fnstsw ax
        test ah, 0x41
        jne short L_rchk
        _emit 0xdd
        _emit 0xd8
        fld qword ptr [mem_0092C518]
        jmp short L_rdone
L_rchk:
        fcom qword ptr [mem_0092A278]
        fnstsw ax
        test ah, 0x1
        je short L_rdone
        _emit 0xdd
        _emit 0xd8
        fld qword ptr [mem_0092A278]
L_rdone:
        mov eax, dword ptr [esp + 0x20]
        mov edx, dword ptr [esp + 0x28]
        mov ecx, dword ptr [esp + 0x24]
        mov dword ptr [esp + 0x30], eax
        mov eax, dword ptr [esp + 0x2c]
        mov dword ptr [esp + 0x40], edx
        fstp qword ptr [esp + 0x28]
        mov dword ptr [esp + 0x44], eax
        mov dword ptr [esp + 0x34], ecx
        fld qword ptr [esp + 0x40]
L_zero:
        fld qword ptr [esp + 0x30]
        call ext_00872828
        mov byte ptr [edi], al
        inc edi
        call ext_00872828
        fld qword ptr [esp + 0x28]
        mov byte ptr [edi], al
        inc edi
        call ext_00872828
        mov byte ptr [edi], al
        mov eax, dword ptr [esp + 0x14]
        inc edi
        inc ebx
        cmp ebx, eax
        jb L_pixrow
        mov ecx, dword ptr [esp + 0x10]
        mov esi, eax
L_rowend:
        mov eax, dword ptr [esp + 0x18]
        lea ecx, [ecx + esi + 0x2]
        mov dword ptr [esp + 0x10], ecx
        mov ecx, dword ptr [ebp + 0x10]
        add eax, esi
        cmp eax, ecx
        mov dword ptr [esp + 0x18], eax
        jb L_rowcont
L_done:
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}

// [0x0072FB20] sub_0072FB20 (592 bytes)
extern "C" void ext_006B9D80();
extern "C" void ext_006E7460();
extern "C" void ext_00718010();
extern "C" void ext_00724BF0();
extern "C" void ext_007275F0();
extern "C" void ext_00727C80();
extern "C" void ext_007283B0();
extern "C" void ext_00728410();
extern "C" void ext_007284D0();
extern "C" void ext_0072F760();
extern "C" void ext_0072FD70();
extern "C" int mem_00AAD3A8;
extern "C" int mem_00AAD3B4;
extern "C" int mem_00AAD39C;
extern "C" int mem_00AA8E24;
extern "C" int mem_00AACD0C;
extern "C" int mem_00AAD390;
extern "C" int mem_00AAD388;
extern "C" int mem_00AAD380;
extern "C" int mem_00AAD378;
extern "C" int mem_00AAD36C;
extern "C" int mem_00AAD360;
extern "C" int mem_00AAD358;

extern "C" __declspec(naked) void __fastcall fn_0072FB20(void* self, int edx_unused, int arg) {
    __asm {
        push ebx
        push esi
        push edi
        mov edi, dword ptr [esp + 0x10]
        test edi, edi
        mov esi, ecx
        je L_end
        mov ecx, dword ptr [esi + 0xac]
        push offset mem_00AAD3A8
        add ecx, 0x4
        call ext_007275F0
        sub esp, 0x4c
        mov ecx, esp
        mov dword ptr [esp + 0x5c], esp
        push offset mem_00AAD3B4
        call ext_006B9D80
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_0072FD70
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_00728410
        sub esp, 0x4c
        mov ecx, esp
        mov dword ptr [esp + 0x5c], esp
        push offset mem_00AAD39C
        call ext_006B9D80
        mov ecx, dword ptr [esi + 0xac]
        push offset mem_00AA8E24
        add ecx, 0x4
        call ext_00724BF0
        mov ebx, dword ptr [esi + 0xac]
        push offset mem_00AACD0C
        add ebx, 0x4
        mov ecx, ebx
        call ext_007275F0
        push 0x64
        mov ecx, ebx
        call ext_00727C80
        mov ecx, ebx
        call ext_007283B0
        mov ecx, edi
        call ext_00718010
        test eax, eax
        je L_skip
        mov ecx, edi
        call ext_00718010
        push eax
        mov ecx, esi
        call ext_0072F760
L_skip:
        mov ecx, dword ptr [esi + 0xac]
        push offset mem_00AAD390
        add ecx, 0x4
        call ext_007275F0
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_00728410
        mov ebx, dword ptr [esi + 0xac]
        push offset mem_00AACD0C
        add ebx, 0x4
        mov ecx, ebx
        call ext_007275F0
        push 0x64
        mov ecx, ebx
        call ext_00727C80
        mov ecx, ebx
        call ext_007283B0
        mov ecx, edi
        call ext_006E7460
        sub esp, 0x4c
        mov ecx, esp
        mov dword ptr [esp + 0x5c], esp
        push eax
        call ext_006B9D80
        mov ecx, dword ptr [esi + 0xac]
        push offset mem_00AAD388
        add ecx, 0x4
        call ext_00724BF0
        lea ecx, [edi + 0x4c]
        call ext_006E7460
        sub esp, 0x4c
        mov ecx, esp
        mov dword ptr [esp + 0x5c], esp
        push eax
        call ext_006B9D80
        mov ecx, dword ptr [esi + 0xac]
        push offset mem_00AAD380
        add ecx, 0x4
        call ext_00724BF0
        lea ecx, [edi + 0x98]
        call ext_006E7460
        sub esp, 0x4c
        mov ecx, esp
        mov dword ptr [esp + 0x5c], esp
        push eax
        call ext_006B9D80
        mov ecx, dword ptr [esi + 0xac]
        push offset mem_00AAD378
        add ecx, 0x4
        call ext_00724BF0
        lea ecx, [edi + 0xe4]
        call ext_006E7460
        sub esp, 0x4c
        mov ecx, esp
        mov dword ptr [esp + 0x5c], esp
        push eax
        call ext_006B9D80
        mov ecx, dword ptr [esi + 0xac]
        push offset mem_00AAD36C
        add ecx, 0x4
        call ext_00724BF0
        lea ecx, [edi + 0x130]
        call ext_006E7460
        sub esp, 0x4c
        mov ecx, esp
        mov dword ptr [esp + 0x5c], esp
        push eax
        call ext_006B9D80
        mov ecx, dword ptr [esi + 0xac]
        push offset mem_00AAD360
        add ecx, 0x4
        call ext_00724BF0
        lea ecx, [edi + 0x17c]
        call ext_006E7460
        sub esp, 0x4c
        mov ecx, esp
        mov dword ptr [esp + 0x5c], esp
        push eax
        call ext_006B9D80
        mov ecx, dword ptr [esi + 0xac]
        push offset mem_00AAD358
        add ecx, 0x4
        call ext_00724BF0
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_007284D0
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_007283B0
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_007284D0
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_007283B0
L_end:
        pop edi
        pop esi
        pop ebx
        ret 0x4
    }
}

// [0x0072EFC0] sub_0072EFC0 (624 bytes)
extern "C" void ext_00724FB0();
extern "C" void ext_00724FD0();
extern "C" void ext_00725940();
extern "C" void ext_00726770();
extern "C" void ext_00726840();
extern "C" void ext_00726860();
extern "C" void ext_007268D0();
extern "C" void ext_00726B40();
extern "C" void ext_0072CEB0();
extern "C" void ext_0072E9D0();
extern "C" void ext_0072FA60();
extern "C" int mem_00AAD320;
extern "C" int mem_00AACD0C;
extern "C" int mem_00AAD314;
extern "C" int mem_00AAD300;
extern "C" int mem_00AAD2F0;
extern "C" int mem_00AAD264;
extern "C" int mem_00AAD250;
extern "C" int mem_00AAA374;
extern "C" int mem_00AAA380;
extern "C" int mem_00AAD21C;
extern "C" int mem_00AAD214;

extern "C" __declspec(naked) void __fastcall fn_0072EFC0(void* self, int edx_unused, int* out) {
    __asm {
        push esi
        mov esi, ecx
        push edi
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_00724FB0
        mov edi, eax
        dec edi
        js L_ret_false
L_loop:
        mov ecx, dword ptr [esi + 0xac]
        push edi
        add ecx, 0x4
        call ext_00724FD0
        test al, al
        je L_next
        mov ecx, dword ptr [esi + 0xac]
        push offset mem_00AAD320
        add ecx, 0x4
        call ext_00726770
        test al, al
        jne L_found
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_00725940
L_next:
        dec edi
        jns L_loop
L_ret_false:
        pop edi
        xor al, al
        pop esi
        ret 0x4
L_found:
        mov eax, dword ptr [esp + 0xc]
        mov dword ptr [eax], edi
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_00726860
        test al, al
        je L_F200
        mov ecx, dword ptr [esi + 0xac]
        push 0x64
        push offset mem_00AACD0C
        add ecx, 0x4
        call ext_00726B40
        mov ecx, dword ptr [esi + 0xac]
        push 0
        add ecx, 0x4
        push offset mem_00AAD314
        mov edi, eax
        call ext_00726B40
        mov edx, dword ptr [esi + 0xb4]
        push 0
        test eax, eax
        setne cl
        mov byte ptr [edx + 0x1a8], cl
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        push offset mem_00AAD300
        call ext_00726B40
        mov ecx, dword ptr [esi + 0xb4]
        push offset mem_00AAD2F0
        test eax, eax
        setne al
        mov byte ptr [ecx + 0x158], al
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_00726770
        test al, al
        je L_1B7
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_00726860
        test al, al
        je L_1A9
        mov ecx, dword ptr [esi + 0xac]
        push 0
        push offset mem_00AAD264
        add ecx, 0x4
        call ext_00726B40
        mov ecx, dword ptr [esi + 0xb4]
        push eax
        push 0
        call ext_0072CEB0
        mov ecx, dword ptr [esi + 0xac]
        push 0
        push offset mem_00AAD250
        add ecx, 0x4
        call ext_00726B40
        mov ecx, dword ptr [esi + 0xb4]
        push eax
        push 1
        call ext_0072CEB0
        mov ecx, dword ptr [esi + 0xac]
        push 0
        push offset mem_00AAA374
        add ecx, 0x4
        call ext_00726B40
        mov ecx, dword ptr [esi + 0xb4]
        push eax
        push 2
        call ext_0072CEB0
        mov ecx, dword ptr [esi + 0xac]
        push 0
        push offset mem_00AAA380
        add ecx, 0x4
        call ext_00726B40
        mov ecx, dword ptr [esi + 0xb4]
        push eax
        push 3
        call ext_0072CEB0
        mov ecx, dword ptr [esi + 0xac]
        push 0
        push offset mem_00AAD21C
        add ecx, 0x4
        call ext_00726B40
        mov ecx, dword ptr [esi + 0xb4]
        push eax
        push 4
        call ext_0072CEB0
        mov ecx, dword ptr [esi + 0xac]
        push 0
        push offset mem_00AAD214
        add ecx, 0x4
        call ext_00726B40
        mov ecx, dword ptr [esi + 0xb4]
        push eax
        push 5
        call ext_0072CEB0
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_007268D0
L_1A9:
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_00726840
L_1B7:
        cmp edi, 0x65
        jl L_1EB
        mov edx, dword ptr [esi + 0xb4]
        mov eax, dword ptr [edx + 0x154]
        test eax, eax
        je L_1D8
        mov ecx, dword ptr [esi + 0x4]
        push eax
        mov edx, dword ptr [ecx]
        call dword ptr [edx + 0xa4]
L_1D8:
        mov ecx, esi
        call ext_0072FA60
        mov ecx, dword ptr [esi + 0xb4]
        mov dword ptr [ecx + 0x154], eax
L_1EB:
        mov ecx, esi
        call ext_0072E9D0
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_007268D0
L_F200:
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_00726840
        mov ecx, dword ptr [esi + 0xac]
        add ecx, 0x4
        call ext_00725940
        pop edi
        mov al, 0x1
        pop esi
        ret 0x4
    }
}

// [0x00729280] sub_00729280 (624 bytes)
extern "C" void ext_006A5C5C();
extern "C" void ext_006A5C62();
extern "C" void ext_006D7970();
extern "C" void ext_006D7990();
extern "C" void ext_006D7A90();
extern "C" void ext_006D7AA0();
extern "C" void ext_006DE130();
extern "C" void ext_006DEEC0();
extern "C" void ext_00718010();
extern "C" void ext_00718020();
extern "C" void ext_007299C0();
extern "C" void ext_00729A00();
extern "C" void ext_00729A60();
extern "C" void ext_0072A720();
extern "C" void ext_0072A750();
extern "C" void ext_0072A850();
extern "C" void ext_0078D260();
extern "C" void ext_0078D2D0();
extern "C" void ext_00792810();
extern "C" int mem_008BD998;

extern "C" __declspec(naked) void __fastcall fn_00729280(void* self, int edx_unused, int arg) {
    __asm {
        push -1
        push offset mem_008BD998
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x40
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr [esp + 0x60]
        mov dword ptr [esp + 0x1c], ecx
        push edi
        call ext_0072A720
        mov ecx, dword ptr [edi + 0x1a8]
        mov ebx, eax
        mov eax, dword ptr [edi + 0x1ac]
        push eax
        push ecx
        call ext_00792810
        mov esi, eax
        mov eax, dword ptr [edi + 0x1c0]
        add esp, 0x8
        cmp eax, 0x2
        jne short L_729280_a
        mov eax, dword ptr [esi]
        push 0
        mov ecx, esi
        call dword ptr [eax + 0x8]
        jmp short L_729280_b
L_729280_a:
        mov edx, dword ptr [esi]
        push 1
        mov ecx, esi
        call dword ptr [edx + 0x8]
L_729280_b:
        cmp dword ptr [edi + 0x1c4], 0x2
        jne short L_729280_c
        mov eax, dword ptr [esi]
        push 0
        mov ecx, esi
        call dword ptr [eax + 0xc]
        jmp short L_729280_d
L_729280_c:
        mov edx, dword ptr [esi]
        push 1
        mov ecx, esi
        call dword ptr [edx + 0xc]
L_729280_d:
        mov eax, dword ptr [edi + 0x1b8]
        mov edx, dword ptr [esi]
        push eax
        mov ecx, esi
        call dword ptr [edx + 0x10]
        mov eax, dword ptr [edi + 0x1bc]
        mov edx, dword ptr [esi]
        push eax
        mov ecx, esi
        call dword ptr [edx + 0x14]
        mov eax, dword ptr [edi + 0x1b4]
        mov ecx, dword ptr [edi + 0x1b0]
        mov ebp, dword ptr [esi]
        push eax
        push ecx
        mov ecx, edi
        call ext_006DEEC0
        push eax
        mov ecx, esi
        call dword ptr [ebp + 0x40]
        mov ebp, dword ptr [esi]
        mov ecx, edi
        call ext_00718010
        push eax
        push 0x1
        mov ecx, esi
        call dword ptr [ebp + 0x44]
        mov ebp, dword ptr [esi]
        mov ecx, edi
        call ext_00718020
        push eax
        push 0x2
        mov ecx, esi
        call dword ptr [ebp + 0x44]
        mov ecx, edi
        call ext_006D7A90
        mov ecx, edi
        mov ebp, eax
        call ext_006DEEC0
        add eax, 0x18
        mov dword ptr [esp + 0x60], eax
        lea eax, [ebp * 8]
        push eax
        call ext_006A5C62
        lea ecx, [ebp + ebp * 2]
        mov dword ptr [esp + 0x1c], eax
        shl ecx, 0x3
        push ecx
        call ext_006A5C62
        mov edx, dword ptr [esp + 0x20]
        add esp, 0x8
        mov dword ptr [esp + 0x14], eax
        mov eax, edx
        test ebp, ebp
        je short L_729280_e
        mov dword ptr [esp + 0x10], ebp
L_729280_f:
        mov ecx, dword ptr [esp + 0x60]
        add eax, 0x8
        mov ebp, dword ptr [ecx]
        add ecx, 0x20
        mov dword ptr [eax - 0x8], ebp
        mov ebp, dword ptr [ecx - 0x1c]
        mov dword ptr [esp + 0x60], ecx
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [eax - 0x4], ebp
        dec ecx
        mov dword ptr [esp + 0x10], ecx
        jne short L_729280_f
L_729280_e:
        mov eax, dword ptr [esi]
        push edx
        push 0
        mov ecx, esi
        call dword ptr [eax + 0x44]
        mov eax, dword ptr [esp + 0x14]
        mov edx, dword ptr [esi]
        push eax
        push 0x5
        mov ecx, esi
        call dword ptr [edx + 0x44]
        mov edx, dword ptr [esi]
        mov ecx, esi
        call dword ptr [edx + 0x30]
        mov ebp, eax
        mov eax, dword ptr [esi]
        mov ecx, esi
        call dword ptr [eax + 0x2c]
        imul ebp, eax
        push ebp
        mov ecx, ebx
        call ext_006D7970
        push 0
        mov ecx, ebx
        call ext_006D7990
        mov ebp, dword ptr [esi]
        mov ecx, ebx
        call ext_006DEEC0
        push eax
        mov ecx, esi
        call dword ptr [ebp + 0x28]
        mov ebp, dword ptr [esi]
        mov ecx, ebx
        call ext_006D7AA0
        push eax
        mov ecx, esi
        call dword ptr [ebp + 0x34]
        mov ebp, dword ptr [esp + 0x1c]
        push ebx
        mov ecx, ebp
        call ext_007299C0
        push ebx
        mov ecx, ebp
        call ext_00729A00
        mov ecx, ebx
        call ext_006D7A90
        push eax
        mov ecx, edi
        call ext_006D7A90
        push eax
        lea ecx, [esp + 0x28]
        call ext_0078D260
        mov edx, dword ptr [esi]
        lea eax, [esp + 0x20]
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0x5c], 0x0
        call dword ptr [edx + 0x4]
        mov eax, dword ptr [edi + 0x1b4]
        mov ecx, dword ptr [edi + 0x1b0]
        push eax
        push ecx
        push esi
        push ebx
        push edi
        mov ecx, ebp
        call ext_0072A750
        lea ecx, [esp + 0x20]
        push ecx
        push ebx
        push edi
        mov ecx, ebp
        call ext_0072A850
        mov edx, dword ptr [esi]
        push 0
        mov ecx, esi
        call dword ptr [edx + 0x30]
        push eax
        mov eax, dword ptr [esi]
        mov ecx, esi
        call dword ptr [eax + 0x2c]
        push eax
        push esi
        push ebx
        mov ecx, ebp
        call ext_00729A60
        push 0
        mov ecx, esi
        call ext_006DE130
        mov ecx, dword ptr [esp + 0x14]
        push ecx
        call ext_006A5C5C
        mov edx, dword ptr [esp + 0x1c]
        push edx
        call ext_006A5C5C
        add esp, 0x8
        lea ecx, [esp + 0x20]
        mov dword ptr [esp + 0x58], 0xffffffff
        call ext_0078D2D0
        mov ecx, dword ptr [esp + 0x50]
        pop edi
        pop esi
        mov eax, ebx
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x4c
        ret 0x4
    }
}

// [0x00729730] sub_00729730 (656 bytes)
extern "C" void ext_006CD320();
extern "C" void ext_006D3750();
extern "C" void ext_006DEEC0();
extern "C" void ext_0070CE90();
extern "C" void ext_0070F2D0();
extern "C" void ext_0070F330();
extern "C" void ext_00718010();
extern "C" void ext_00718020();
extern "C" void ext_007180A0();
extern "C" void ext_007180B0();
extern "C" void ext_00718100();
extern "C" void ext_007873F0();
extern "C" int mem_0092522C;
extern "C" int mem_009251D8;

extern "C" __declspec(naked) void __fastcall fn_00729730(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        sub esp, 0x24
        push esi
        mov esi, dword ptr [esp + 0x2c]
        test esi, esi
        jne L_729745
        xor eax, eax
        pop esi
        add esp, 0x24
        ret 0xc
L_729745:
        mov ecx, dword ptr [ecx]
        push ebx
        push ebp
        push edi
        call ext_006D3750
        mov ebp, eax
        push esi
        mov ecx, ebp
        call ext_00718100
        mov al, byte ptr [esp + 0x3c]
        test al, al
        jne L_72976d
        mov cl, byte ptr [esp + 0x40]
        test cl, cl
        je L_7299a8
L_72976d:
        mov edi, dword ptr [ebp + 0x1b4]
        mov ebx, dword ptr [ebp + 0x1b0]
        test al, al
        mov dword ptr [esp + 0x10], edi
        je L_729924
        mov ecx, dword ptr [ebp + 0x1bc]
        mov eax, dword ptr [ebp + 0x1a8]
        mov edx, dword ptr [ebp + 0x1b8]
        mov esi, dword ptr [ebp + 0x1ac]
        mov dword ptr [esp + 0x1c], ecx
        mov ecx, dword ptr [ebp + 0x1c0]
        mov dword ptr [esp + 0x38], eax
        mov eax, dword ptr [ebp + 0x1c4]
        mov dword ptr [esp + 0x20], ecx
        mov ecx, ebp
        mov dword ptr [esp + 0x18], edx
        mov dword ptr [esp + 0x14], eax
        call ext_00718020
        mov ecx, ebp
        mov dword ptr [esp + 0x24], eax
        call ext_00718010
        mov ecx, ebp
        mov dword ptr [esp + 0x28], eax
        call ext_007180B0
        mov ecx, ebp
        mov dword ptr [esp + 0x2c], eax
        call ext_007180A0
        mov ecx, ebp
        mov dword ptr [esp + 0x30], eax
        call ext_006DEEC0
        mov edx, dword ptr [esp + 0x38]
        mov ecx, dword ptr [esp + 0x18]
        mov dword ptr [ebp + 0x1b4], edi
        imul edi, ebx
        mov dword ptr [esp + 0x3c], eax
        mov eax, dword ptr [esp + 0x1c]
        mov dword ptr [ebp + 0x1ac], edx
        mov edx, dword ptr [esp + 0x14]
        mov dword ptr [ebp + 0x1b8], eax
        mov eax, dword ptr [esp + 0x20]
        mov dword ptr [ebp + 0x1bc], ecx
        mov ecx, dword ptr [esp + 0x24]
        mov dword ptr [ebp + 0x1c0], edx
        mov edx, dword ptr [esp + 0x28]
        mov dword ptr [ebp + 0x1c4], eax
        mov eax, dword ptr [esp + 0x2c]
        mov dword ptr [ebp + 0x1c8], ecx
        mov ecx, dword ptr [esp + 0x30]
        push 0x20
        push edi
        mov dword ptr [ebp + 0x1a8], esi
        mov dword ptr [ebp + 0x1b0], ebx
        mov dword ptr [ebp + 0x1cc], edx
        mov dword ptr [ebp + 0x1d0], eax
        mov dword ptr [ebp + 0x1d4], ecx
        call dword ptr [mem_0092522C]
        mov esi, dword ptr [esp + 0x44]
        mov ecx, edi
        shl ecx, 0x5
        mov edx, ecx
        mov edi, eax
        shr ecx, 0x2
        rep movsd
        mov ecx, edx
        add esp, 0x8
        and ecx, 0x3
        mov dword ptr [esp + 0x30], eax
        test ebx, ebx
        rep movsb
        jle L_729916
        mov edx, dword ptr [esp + 0x10]
        mov edi, dword ptr [esp + 0x3c]
        mov ecx, edx
        mov dword ptr [esp + 0x38], eax
        shl ecx, 0x5
        mov dword ptr [esp + 0x2c], ecx
        mov dword ptr [esp + 0x18], edi
        mov dword ptr [esp + 0x1c], ebx
L_7298b1:
        test edx, edx
        jle L_7298f6
        mov eax, dword ptr [esp + 0x38]
        mov esi, ebx
        shl esi, 0x5
        mov dword ptr [esp + 0x3c], eax
        mov dword ptr [esp + 0x14], edx
L_7298c6:
        mov ecx, dword ptr [esp + 0x3c]
        push ecx
        mov ecx, edi
        call ext_007873F0
        mov ecx, dword ptr [esp + 0x3c]
        mov eax, dword ptr [esp + 0x14]
        add edi, 0x20
        add ecx, esi
        dec eax
        mov dword ptr [esp + 0x3c], ecx
        mov dword ptr [esp + 0x14], eax
        jne L_7298c6
        mov eax, dword ptr [esp + 0x30]
        mov ecx, dword ptr [esp + 0x2c]
        mov edx, dword ptr [esp + 0x10]
L_7298f6:
        mov esi, dword ptr [esp + 0x38]
        mov edi, dword ptr [esp + 0x18]
        add esi, 0x20
        add edi, ecx
        mov dword ptr [esp + 0x38], esi
        mov esi, dword ptr [esp + 0x1c]
        dec esi
        mov dword ptr [esp + 0x18], edi
        mov dword ptr [esp + 0x1c], esi
        jne L_7298b1
L_729916:
        push eax
        call dword ptr [mem_009251D8]
        mov edi, dword ptr [esp + 0x14]
        add esp, 0x4
L_729924:
        mov al, byte ptr [esp + 0x40]
        test al, al
        je L_7299a8
        mov ecx, ebp
        call ext_006CD320
        test eax, eax
        mov dword ptr [esp + 0x38], eax
        mov dword ptr [esp + 0x40], 0x0
        jle L_7299a8
L_729943:
        mov edx, dword ptr [esp + 0x40]
        mov ecx, ebp
        push edx
        call ext_0070CE90
        mov esi, eax
        mov ecx, esi
        call ext_0070F2D0
        mov ecx, esi
        mov dword ptr [esp + 0x3c], eax
        call ext_0070F330
        mov ecx, dword ptr [esp + 0x3c]
        test ecx, ecx
        jle L_729997
        mov esi, eax
        mov eax, ecx
        mov dword ptr [esp + 0x3c], eax
L_729973:
        mov ecx, dword ptr [esi]
        add esi, 0x4
        mov eax, ecx
        cdq
        idiv ebx
        mov edx, eax
        imul edx, ebx
        sub ecx, edx
        imul ecx, edi
        add ecx, eax
        mov eax, dword ptr [esp + 0x3c]
        mov dword ptr [esi - 0x4], ecx
        dec eax
        mov dword ptr [esp + 0x3c], eax
        jne L_729973
L_729997:
        mov eax, dword ptr [esp + 0x40]
        mov ecx, dword ptr [esp + 0x38]
        inc eax
        cmp eax, ecx
        mov dword ptr [esp + 0x40], eax
        jl L_729943
L_7299a8:
        mov eax, ebp
        pop edi
        pop ebp
        pop ebx
        pop esi
        add esp, 0x24
        ret 0xc
    }
}

// [0x0072C870] sub_0072C870 (656 bytes)
extern "C" int mem_008BDC8B;
extern "C" int mem_00AAD140;
extern "C" int mem_00AAC1C0;
extern "C" int mem_00AAD124;
extern "C" int mem_00AAD118;
extern "C" void ext_006B9D70();
extern "C" void ext_006B9D80();
extern "C" void ext_006BA1C0();
extern "C" void ext_006E7460();
extern "C" void ext_0072CB00();
extern "C" void ext_00798870();
extern "C" void ext_00798FF0();
extern "C" void ext_0079AE50();
extern "C" void ext_0079B140();
extern "C" void ext_0079B160();

extern "C" __declspec(naked) void __fastcall fn_0072C870(void* self) {
    __asm {
        push -1
        push offset mem_008BDC8B
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0a4h
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr [esp + 114h]
        mov dword ptr [esp + 0bch], 0
        mov ebx, 2
        mov eax, dword ptr [edi]
        mov ebp, dword ptr [edi + 4]
        movsx cx, byte ptr [edi + 0ch]
        mov dword ptr [esp + 14h], eax
        mov eax, dword ptr [edi + 8]
        cmp eax, 1
        mov word ptr [esp + 18h], cx
        jne L_after_ebx6
        mov ebx, 6
    L_after_ebx6:
        push offset mem_00AAD140
        lea ecx, [esp + 20h]
        call ext_006B9D80
        lea edx, [esp + 68h]
        mov ecx, edi
        push edx
        mov byte ptr [esp + 0c0h], 1
        call ext_0072CB00
        push eax
        lea ecx, [esp + 20h]
        mov byte ptr [esp + 0c0h], 2
        call ext_006BA1C0
        lea ecx, [esp + 68h]
        mov byte ptr [esp + 0bch], 1
        call ext_006B9D70
        push offset mem_00AAC1C0
        lea ecx, [esp + 0c8h]
        call ext_006E7460
        push eax
        call ext_0079AE50
        mov esi, eax
        add esp, 8
        test esi, esi
        mov byte ptr [esp + 13h], 0
        je L_skip_all
        mov eax, dword ptr [esp + 14h]
        push eax
        push 100h
        push esi
        call ext_00798FF0
        add esp, 0ch
        push ebp
        push 101h
        push esi
        call ext_00798FF0
        mov ebp, dword ptr [esp + 24h]
        add esp, 0ch
        and ebp, 0ffffh
        push ebp
        push 115h
        push esi
        call ext_00798FF0
        add esp, 0ch
        push 8
        push 102h
        push esi
        call ext_00798FF0
        mov cl, byte ptr [esp + 11ch]
        add esp, 0ch
        neg cl
        sbb ecx, ecx
        and ecx, 7
        inc ecx
        push ecx
        push 103h
        push esi
        call ext_00798FF0
        add esp, 0ch
        and ebx, 0ffffh
        push ebx
        push 106h
        push esi
        call ext_00798FF0
        add esp, 0ch
        push 1
        push 112h
        push esi
        call ext_00798FF0
        add esp, 0ch
        push 1
        push 116h
        push esi
        call ext_00798FF0
        add esp, 0ch
        push 1
        push 11ch
        push esi
        call ext_00798FF0
        add esp, 0ch
        push 40520000h
        push 0
        push 11ah
        push esi
        call ext_00798FF0
        add esp, 10h
        push 40520000h
        push 0
        push 11bh
        push esi
        call ext_00798FF0
        add esp, 10h
        push 0
        push 0feh
        push esi
        call ext_00798FF0
        add esp, 0ch
        push 2
        push 128h
        push esi
        call ext_00798FF0
        add esp, 0ch
        cmp word ptr [esp + 18h], 4
        jne L_skip_152
        lea edx, [esp + 18h]
        mov word ptr [esp + 18h], 1
        push edx
        push 1
        push 152h
        push esi
        call ext_00798FF0
        add esp, 10h
    L_skip_152:
        mov ecx, dword ptr [edi + 4]
        mov eax, dword ptr [edi + 10h]
        xor ebx, ebx
        test ecx, ecx
        jle L_loop_end
        imul ebp, dword ptr [esp + 14h]
        mov dword ptr [esp + 14h], ebp
        mov ebp, eax
    L_loop:
        push 0
        push ebx
        push ebp
        push esi
        call ext_0079B160
        add esp, 10h
        test eax, eax
        je L_loop_fail
        mov ecx, dword ptr [esp + 14h]
        mov eax, dword ptr [edi + 4]
        inc ebx
        add ebp, ecx
        cmp ebx, eax
        jl L_loop
        jmp L_loop_end
    L_loop_fail:
        push offset mem_00AAD124
        push offset mem_00AAD118
        call ext_0079B140
        add esp, 8
    L_loop_end:
        mov edx, dword ptr [edi + 4]
        push esi
        cmp ebx, edx
        sete byte ptr [esp + 17h]
        call ext_00798870
        add esp, 4
    L_skip_all:
        lea ecx, [esp + 1ch]
        mov byte ptr [esp + 0bch], 0
        call ext_006B9D70
        lea ecx, [esp + 0c4h]
        mov dword ptr [esp + 0bch], -1
        call ext_006B9D70
        mov ecx, dword ptr [esp + 0b4h]
        mov al, byte ptr [esp + 13h]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0b0h
        ret
    }
}

// [0x00724380] sub_00724380 (656 bytes)
extern "C" int mem_0092521C;
extern "C" int mem_009251D0;
extern "C" __declspec(naked) int __fastcall fn_00724380(void* self) {
    __asm {
        sub esp, 0x410
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        xor bl, bl
        mov ecx, dword ptr [esi + 0x10]
        mov eax, dword ptr [ecx]
        call dword ptr [eax + 0x2c]
        test al, al
        je L_fail
        mov ecx, dword ptr [esi + 0x10]
        mov edx, dword ptr [ecx]
        call dword ptr [edx + 0x24]
        mov ecx, dword ptr [esi + 0x10]
        mov edi, eax
        lea edx, [esp + 0x20]
        push 0x40
        mov eax, dword ptr [ecx]
        push edx
        call dword ptr [eax + 0x18]
        mov ecx, dword ptr [esi + 0x10]
        push edi
        mov eax, dword ptr [ecx]
        call dword ptr [eax + 0x28]
        lea ecx, [esp + 0x120]
        lea edx, [esp + 0x220]
        push ecx
        lea eax, [esp + 0x20]
        push edx
        lea ecx, [esp + 0x1b]
        push eax
        lea edx, [esp + 0x24]
        mov edi, dword ptr [mem_0092521C]
        push ecx
        lea eax, [esp + 0x21]
        push edx
        lea ecx, [esp + 0x28]
        push eax
        lea edx, [esp + 0x338]
        push ecx
        lea eax, [esp + 0x2e]
        push edx
        push eax
        lea ecx, [esp + 0x44]
        push 0xaace38
        push ecx
        call edi
        add esp, 0x2c
        cmp eax, 0x9
        je short L_check
        lea edx, [esp + 0x120]
        lea eax, [esp + 0x220]
        push edx
        lea ecx, [esp + 0x1c]
        push eax
        lea edx, [esp + 0x19]
        push ecx
        lea eax, [esp + 0x20]
        push edx
        lea ecx, [esp + 0x330]
        push eax
        lea edx, [esp + 0x26]
        push ecx
        push edx
        lea eax, [esp + 0x3c]
        push 0xaace24
        push eax
        mov byte ptr [esp + 0x37], 0x2e
        mov dword ptr [esp + 0x40], 0x0
        mov bl, 0x1
        call edi
        add esp, 0x24
        cmp eax, 0x7
        jne L_fail
L_check:
        cmp byte ptr [esp + 0x12], 0x3b
        jne L_fail
        cmp byte ptr [esp + 0x11], 0x2e
        jne L_fail
        cmp byte ptr [esp + 0x13], 0x2e
        jne L_fail
        mov edi, dword ptr [mem_009251D0]
        lea ecx, [esp + 0x220]
        push 0xaace1c
        push ecx
        call edi
        add esp, 0x8
        test eax, eax
        jne L_fail
        lea edx, [esp + 0x120]
        push 0xaace14
        push edx
        call edi
        add esp, 0x8
        test eax, eax
        jne L_fail
        mov ebp, dword ptr [esp + 0x18]
        mov eax, dword ptr [esp + 0x14]
        test bl, bl
        je L_B5BB
        mov edi, 0xaace0c
        lea ecx, [esp + 0x320]
L_loop:
        mov bl, byte ptr [ecx]
        mov dl, bl
        cmp bl, byte ptr [edi]
        jne short L_ne
        test dl, dl
        je short L_eqend
        mov bl, byte ptr [ecx + 0x1]
        mov dl, bl
        cmp bl, byte ptr [edi + 0x1]
        jne short L_ne
        add ecx, 0x2
        add edi, 0x2
        test dl, dl
        jne short L_loop
L_eqend:
        xor ecx, ecx
        jmp short L_cmpdone
L_ne:
        sbb ecx, ecx
        sbb ecx, -1
L_cmpdone:
        test ecx, ecx
        jne L_B5BB
        cmp eax, 0x1
        jne short L_not1
        cmp ebp, 0x5
        jne L_B5BB
        mov dword ptr [esi + 0x4], 0x3e8
        pop edi
        pop esi
        pop ebp
        __asm _emit 0x8a
        __asm _emit 0xc0
        pop ebx
        add esp, 0x410
        ret
L_not1:
        cmp eax, 0x2
        jne short L_not2
        cmp ebp, 0x7
        jne L_B5BB
        mov dword ptr [esi + 0x4], 0x7d1
        pop edi
        pop esi
        pop ebp
        mov al, 0x1
        pop ebx
        add esp, 0x410
        ret
L_not2:
        cmp eax, 0x3
        jne short L_not3
        test ebp, ebp
        jne short L_B5BB
        mov dword ptr [esi + 0x4], 0xbb8
        pop edi
        pop esi
        pop ebp
        mov al, 0x1
        pop ebx
        add esp, 0x410
        ret
L_not3:
        cmp eax, 0x4
        jne short L_B5BB
        test ebp, ebp
        jne short L_4nz
        mov dword ptr [esi + 0x4], 0xfa0
        pop edi
        pop esi
        pop ebp
        mov al, 0x1
        pop ebx
        add esp, 0x410
        ret
L_4nz:
        cmp ebp, 0x1
        jne short L_4not1
        mov dword ptr [esi + 0x4], 0xfa1
        pop edi
        pop esi
        pop ebp
        mov al, 0x1
        pop ebx
        add esp, 0x410
        ret
L_4not1:
        cmp ebp, 0x5
        jne short L_B5BB
        mov dword ptr [esi + 0x4], 0xfd2
        pop edi
        pop esi
        pop ebp
        mov al, 0x1
        pop ebx
        add esp, 0x410
        ret
L_B5BB:
        xor edx, edx
        mov ecx, 0x418936
        div ecx
        mov eax, ebp
        mov edi, 0xa
        mov ebx, 0x64
        mov ecx, edx
        cdq
        idiv edi
        mov eax, dword ptr [esp + 0x1c]
        mov edi, edx
        cdq
        idiv ebx
        lea eax, [ecx + 4 * ecx]
        lea eax, [edi + 2 * eax]
        pop edi
        lea eax, [eax + 4 * eax]
        lea ecx, [eax + 4 * eax]
        mov al, 0x1
        lea edx, [edx + 4 * ecx]
        mov dword ptr [esi + 0x4], edx
        pop esi
        pop ebp
        pop ebx
        add esp, 0x410
        ret
L_fail:
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 0x410
        ret
    }
}

// [0x007227B0] sub_007227B0 (672 bytes)
extern "C" void ext_00722570();
extern "C" void ext_00722A50();
extern "C" int mem_0098F3E0;
extern "C" int mem_0092A278;
extern "C" int mem_009967E0;
extern "C" int mem_009967D8;
extern "C" int mem_009967D0;
extern "C" int mem_00993828;
extern "C" int mem_0093F7B0;
extern "C" int mem_009967C8;
extern "C" int mem_0099D180;
extern "C" int mem_009334D8;

extern "C" __declspec(naked) void __cdecl fn_007227B0(double* out, double* p, double* a, double* b) {
    __asm {
        push    ebp
        mov     ebp, esp
        and     esp, -8
        sub     esp, 1Ch
        push    ebx
        push    esi
        mov     esi, dword ptr [ebp + 10h]
        push    edi
        mov     edi, dword ptr [ebp + 14h]
        fld     qword ptr [esi]
        fcomp   qword ptr [edi]
        fnstsw  ax
        test    ah, 41h
        je      L_1
        mov     bl, 1
        jmp     L_2
L_1:
        xor     bl, bl
L_2:
        push    edi
        lea     eax, [esp + 1Ch]
        push    esi
        lea     ecx, [esp + 18h]
        push    eax
        push    ecx
        mov     dword ptr [esp + 20h], 0
        mov     dword ptr [esp + 24h], 0
        mov     dword ptr [esp + 30h], 0
        mov     dword ptr [esp + 34h], 0
        mov     dword ptr [esp + 28h], 0
        mov     dword ptr [esp + 2Ch], 407F4000h
        call    ext_00722570
        push    edi
        lea     edx, [esp + 2Ch]
        push    esi
        lea     eax, [esp + 38h]
        push    edx
        push    eax
        call    ext_00722A50
        fld     qword ptr [esp + 30h]
        fabs
        fcomp   qword ptr mem_0098F3E0
        add     esp, 20h
        fnstsw  ax
        test    ah, 1
        je      L_3
        mov     dword ptr [esp + 10h], 0
        mov     dword ptr [esp + 14h], 0
L_3:
        fld     qword ptr [esp + 20h]
        fld     st(0)
        fabs
        fcomp   qword ptr mem_0098F3E0
        fnstsw  ax
        test    ah, 1
        je      L_4
        fstp    st(0)
        fld     qword ptr mem_0092A278
L_4:
        mov     ecx, dword ptr [ebp + 0Ch]
        fld     qword ptr [ecx]
        fabs
        fcomp   qword ptr mem_0098F3E0
        fnstsw  ax
        test    ah, 1
        je      L_5
        mov     dword ptr [ecx], 0
        mov     dword ptr [ecx + 4], 0
L_5:
        fcomp   qword ptr [ecx]
        test    bl, bl
        fnstsw  ax
        je      L_6
        test    ah, 1
        jne     L_7
        fld     qword ptr [ecx]
        fcomp   qword ptr [esp + 10h]
        fnstsw  ax
        test    ah, 1
        jne     L_10
        jmp     L_11
L_6:
        test    ah, 41h
        jne     L_9
L_7:
        neg     bl
        sbb     ebx, ebx
        and     ebx, 7D0h
        add     ebx, 0FFFFFC18h
        mov     dword ptr [esp + 10h], ebx
        fild    dword ptr [esp + 10h]
        fst     qword ptr [esp + 20h]
        fld     st(0)
        fmul    qword ptr mem_009967E0
        fstp    qword ptr [esp + 10h]
        fld     qword ptr [edi]
        fsub    qword ptr [esi]
        fmul    qword ptr mem_009967D8
        fxch    st(1)
        fmul    qword ptr mem_009967D0
        faddp   st(1), st
        fld     qword ptr [esi]
        fadd    qword ptr [edi]
        fmul    qword ptr mem_00993828
        fadd    qword ptr [esp + 20h]
        fsub    qword ptr [ecx]
        fld     st(1)
        fmul    st, st(2)
        fxch    st(1)
        fmul    qword ptr [esp + 10h]
        fmul    qword ptr mem_0093F7B0
        fsubp   st(1), st
        fsqrt
        fld     qword ptr [esp + 10h]
        fadd    st(0), st
        fld     st(2)
        fchs
        fsub    st, st(2)
        fdiv    st, st(1)
        fstp    qword ptr [esp + 20h]
        fxch    st(1)
        fsubrp  st(2), st
        fxch    st(1)
        fdiv    st, st(1)
        fxch    st(1)
        fstp    st(0)
        fcom    qword ptr [esp + 20h]
        fnstsw  ax
        test    ah, 41h
        je      L_8
        fstp    st(0)
        fld     qword ptr [esp + 20h]
L_8:
        mov     ecx, dword ptr [ebp + 8]
        fstp    qword ptr [ecx]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
L_9:
        fld     qword ptr [ecx]
        fcomp   qword ptr [esp + 10h]
        fnstsw  ax
        test    ah, 41h
        jne     L_11
L_10:
        neg     bl
        sbb     ebx, ebx
        and     ebx, 0FFFFF830h
        add     ebx, 3E8h
        mov     dword ptr [esp + 10h], ebx
        fild    dword ptr [esp + 10h]
        fst     qword ptr [esp + 20h]
        fld     st(0)
        fmul    qword ptr mem_009967E0
        fstp    qword ptr [esp + 10h]
        fld     qword ptr [edi]
        fsub    qword ptr [esi]
        fmul    qword ptr mem_009967D8
        fxch    st(1)
        fmul    qword ptr mem_009967C8
        faddp   st(1), st
        fld     qword ptr [esi]
        fadd    qword ptr [edi]
        fmul    qword ptr mem_00993828
        fadd    qword ptr [esp + 20h]
        fsub    qword ptr [ecx]
        fld     st(1)
        fmul    st, st(2)
        fxch    st(1)
        fmul    qword ptr [esp + 10h]
        fmul    qword ptr mem_0093F7B0
        fsubp   st(1), st
        fsqrt
        fld     qword ptr [esp + 10h]
        fadd    st(0), st
        fld     st(2)
        fchs
        fsub    st, st(2)
        fdiv    st, st(1)
        fstp    qword ptr [esp + 20h]
        fxch    st(1)
        fsubrp  st(2), st
        fxch    st(1)
        fdiv    st, st(1)
        fxch    st(1)
        fstp    st(0)
        fcom    qword ptr [esp + 20h]
        fnstsw  ax
        test    ah, 1
        jne     L_12
        fstp    st(0)
        fld     qword ptr [esp + 20h]
L_12:
        mov     edx, dword ptr [ebp + 8]
        fstp    qword ptr [edx]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
L_11:
        fld     qword ptr [esi]
        fcomp   qword ptr [edi]
        fnstsw  ax
        test    ah, 40h
        je      L_13
        mov     eax, dword ptr [ebp + 8]
        mov     dword ptr [eax], 0
        mov     dword ptr [eax + 4], 0
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
L_13:
        fld     qword ptr [ecx]
        fmul    qword ptr mem_0099D180
        fld     qword ptr [esi]
        fmul    qword ptr mem_009334D8
        mov     eax, dword ptr [ebp + 8]
        fsubp   st(1), st
        fld     qword ptr [edi]
        fmul    qword ptr mem_009334D8
        fsubp   st(1), st
        fld     qword ptr [edi]
        fsub    qword ptr [esi]
        pop     edi
        pop     esi
        fdivp   st(1), st
        pop     ebx
        fstp    qword ptr [eax]
        mov     esp, ebp
        pop     ebp
        ret
    }
}

// [0x00723BA0] sub_00723BA0 (672 bytes)
extern "C" void ext_00724190();
extern "C" void ext_00724380();
extern "C" void ext_006E7460();
extern "C" void ext_006E7410();
extern "C" void ext_00723E40();
extern "C" void ext_006B9D10();
extern "C" void ext_006B9EC0();
extern "C" void ext_006BA260();
extern "C" void ext_006BA220();
extern "C" void ext_00725A90();
extern "C" void ext_006D2250();
extern "C" void ext_006D2170();
extern "C" void ext_006B9D70();
extern "C" void ext_00723950();
extern "C" void ext_00724E30();
extern "C" void ext_006A5C62();
extern "C" void ext_0078BA20();
extern "C" void ext_00724260();
extern "C" void ext_00724610();
extern "C" void ext_00724FA0();
extern "C" int mem_00925218;

extern "C" __declspec(naked) void __fastcall fn_00723BA0(void* self, int edx_unused, int a1, int a2, int a3, int a4) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8bd779
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x470
        push ebx
        push esi
        push edi
        mov edi, dword ptr [esp + 0x498]
        xor ebx, ebx
        mov esi, ecx
        cmp edi, ebx
        je short L_a
        mov byte ptr [edi + 0xb0], bl
        mov byte ptr [edi], bl
L_a:
        mov ecx, esi
        call ext_00724190
        test al, al
        je short L_b
        mov byte ptr [esi + 0x15], 0x1
        jmp short L_3e
L_b:
        mov ecx, esi
        call ext_00724380
        test al, al
        jne short L_3b
        cmp byte ptr [esp + 0x48c], bl
        je short L_34
        lea ecx, [esi + 0xfc]
        call ext_006E7460
        push eax
        lea eax, [esp + 0x80]
        push 0xaacca0
        push eax
        call dword ptr [mem_00925218]
        add esp, 0xc
        lea ecx, [esp + 0x7c]
        push ecx
        push ebx
        lea ecx, [esi + 0xef0]
        call ext_006E7410
        xor al, al
        jmp near ptr L_end
L_34:
        mov dword ptr [esi + 0x4], 0x3e8
L_3b:
        mov byte ptr [esi + 0x15], bl
L_3e:
        cmp dword ptr [esi + 0x4], 0x7d0
        jb short L_4d
        mov byte ptr [esi + 0x14], 0x1
        jmp short L_50
L_4d:
        mov byte ptr [esi + 0x14], bl
L_50:
        mov ecx, dword ptr [esi + 0x10]
        mov edx, dword ptr [ecx]
        call dword ptr [edx + 0x24]
        mov dword ptr [esp + 0x1c], eax
        lea eax, [esp + 0x1c]
        push edi
        push eax
        mov ecx, esi
        call ext_00723E40
        test al, al
        je near ptr L_end
        mov ecx, dword ptr [esi + 0x10]
        mov eax, dword ptr [esp + 0x1c]
        push eax
        mov edx, dword ptr [ecx]
        call dword ptr [edx + 0x28]
        lea ecx, [esp + 0x10]
        lea edx, [esp + 0x18]
        push ecx
        mov ecx, dword ptr [esi + 0x4]
        lea eax, [esp + 0x10]
        push edx
        push eax
        push ecx
        mov dword ptr [esp + 0x1c], ebx
        mov dword ptr [esp + 0x28], ebx
        mov dword ptr [esp + 0x20], ebx
        call ext_00725A90
        mov eax, dword ptr [esp + 0x1c]
        add esp, 0x10
        cmp eax, 0x6
        jle near ptr L_379
        lea ecx, [esp + 0x20]
        call ext_006B9D10
        push 0xaacc8c
        lea ecx, [esp + 0x24]
        mov dword ptr [esp + 0x488], ebx
        call ext_006B9EC0
        mov edx, dword ptr [esp + 0xc]
        lea ecx, [esp + 0x20]
        push edx
        call ext_006BA260
        push 0xaa93a0
        lea ecx, [esp + 0x24]
        call ext_006BA220
        mov eax, dword ptr [esp + 0x18]
        lea ecx, [esp + 0x20]
        push eax
        call ext_006BA260
        push 0xaa93a0
        lea ecx, [esp + 0x24]
        call ext_006BA220
        mov ecx, dword ptr [esp + 0x10]
        push ecx
        lea ecx, [esp + 0x24]
        call ext_006BA260
        push 0xaacc68
        lea ecx, [esp + 0x24]
        call ext_006BA220
        lea ecx, [esp + 0x20]
        call ext_006E7460
        push eax
        push 0x1
        lea ecx, [esi + 0xef0]
        call ext_006E7410
        lea edi, [esi + 0x1ac]
        mov ecx, edi
        call ext_006D2250
        mov eax, dword ptr [edi]
        mov esi, dword ptr [esi + 0x4]
        lea edx, [esp + 0x14]
        mov ecx, edi
        push edx
        push eax
        mov dword ptr [esp + 0x1c], esi
        call ext_006D2170
        lea ecx, [esp + 0x20]
        mov dword ptr [esp + 0x484], -1
        call ext_006B9D70
        xor al, al
        jmp near ptr L_end
L_379:
        cmp byte ptr [esi + 0x17], bl
        je short L_3f6
        cmp byte ptr [esp + 0x490], bl
        je short L_399
        mov ecx, esi
        call ext_00723950
        cmp al, bl
        jne short L_399
        xor al, al
        jmp near ptr L_end
L_399:
        lea eax, [esp + 0x6c]
        mov ecx, esi
        push eax
        call ext_00724E30
        mov ecx, dword ptr [esi + 0x10]
        mov edx, dword ptr [ecx]
        call dword ptr [edx + 0x24]
        push 0x1198
        mov edi, eax
        call ext_006A5C62
        add esp, 0x4
        mov dword ptr [esp + 0x14], eax
        cmp eax, ebx
        mov dword ptr [esp + 0x484], 0x1
        je short L_3e6
        mov ecx, dword ptr [esi + 0x10]
        push 0x1
        push 0x1
        push ecx
        lea edx, [esp + 0x78]
        push edi
        push edx
        mov ecx, eax
        call ext_0078BA20
        jmp short L_3e8
L_3e6:
        xor eax, eax
L_3e8:
        mov dword ptr [esp + 0x484], -1
        mov dword ptr [esi + 0x10], eax
L_3f6:
        mov al, byte ptr [esi + 0x15]
        mov ecx, esi
        cmp al, bl
        je short L_406
        call ext_00724260
        jmp short L_40b
L_406:
        call ext_00724610
L_40b:
        cmp byte ptr [esp + 0x494], bl
        je short L_41d
        mov ecx, esi
        call ext_00724FA0
        jmp short L_end
L_41d:
        mov al, 0x1
L_end:
        mov ecx, dword ptr [esp + 0x47c]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0x47c
        ret 0x10
    }
}

// [0x007222D0] sub_007222D0 (672 bytes)
extern "C" void ext_00722570();
extern "C" void ext_00722A50();
extern "C" int mem_0098F3E0;
extern "C" int mem_009967E0;
extern "C" int mem_009967D8;
extern "C" int mem_009967D0;
extern "C" int mem_00993828;
extern "C" int mem_0093F7B0;
extern "C" int mem_009967C8;
extern "C" int mem_0099D180;
extern "C" int mem_009334D8;

extern "C" __declspec(naked) void __cdecl fn_007222D0(void* out, void* x, void* a, void* b) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, 0FFFFFFF8h
        sub esp, 1Ch
        push ebx
        push esi
        mov esi, dword ptr [ebp+10h]
        push edi
        mov edi, dword ptr [ebp+14h]
        fld qword ptr [esi]
        fcomp qword ptr [edi]
        fnstsw ax
        test ah, 41h
        jne short s22_xor
        mov bl, 1
        jmp short s22_push
s22_xor:
        xor bl, bl
s22_push:
        push edi
        lea eax, [esp+1Ch]
        push esi
        lea ecx, [esp+28h]
        push eax
        push ecx
        mov dword ptr [esp+30h], 0
        mov dword ptr [esp+34h], 0
        mov dword ptr [esp+20h], 0
        mov dword ptr [esp+24h], 0
        mov dword ptr [esp+28h], 0
        mov dword ptr [esp+2Ch], 407f4000h
        call ext_00722570
        push edi
        lea edx, [esp+2Ch]
        push esi
        lea eax, [esp+28h]
        push edx
        push eax
        call ext_00722A50
        fld qword ptr [esp+40h]
        _emit 0D9h
        _emit 0C0h
        fabs
        fcomp qword ptr [mem_0098F3E0]
        add esp, 20h
        fnstsw ax
        test ah, 1
        je short s22_c365
        _emit 0DDh
        _emit 0D8h
        fld qword ptr [mem_0092A278]
s22_c365:
        fld qword ptr [esp+10h]
        fabs
        fcomp qword ptr [mem_0098F3E0]
        fnstsw ax
        test ah, 1
        je short s22_c388
        mov dword ptr [esp+10h], 0
        mov dword ptr [esp+14h], 0
s22_c388:
        mov ecx, dword ptr [ebp+0Ch]
        fld qword ptr [ecx]
        fabs
        fcomp qword ptr [mem_0098F3E0]
        fnstsw ax
        test ah, 1
        je short s22_c3a9
        mov dword ptr [ecx], 0
        mov dword ptr [ecx+4], 0
s22_c3a9:
        fcomp qword ptr [ecx]
        test bl, bl
        fnstsw ax
        je short s22_c3cc
        test ah, 1
        jne short s22_c3d5
        fld qword ptr [ecx]
        fcomp qword ptr [esp+10h]
        fnstsw ax
        test ah, 1
        jne s22_L481
        jmp s22_L51c
s22_c3cc:
        test ah, 41h
        jne s22_L470
s22_c3d5:
        _emit 0F6h
        _emit 0DBh
        sbb ebx, ebx
        and ebx, 7D0h
        add ebx, 0FFFFFC18h
        mov dword ptr [esp+10h], ebx
        fild dword ptr [esp+10h]
        fst qword ptr [esp+20h]
        _emit 0D9h
        _emit 0C0h
        fmul qword ptr [mem_009967E0]
        fstp qword ptr [esp+10h]
        fld qword ptr [esi]
        fsub qword ptr [edi]
        fmul qword ptr [mem_009967D8]
        _emit 0D9h
        _emit 0C9h
        fmul qword ptr [mem_009967D0]
        _emit 0DEh
        _emit 0C1h
        fld qword ptr [esi]
        fadd qword ptr [edi]
        fmul qword ptr [mem_00993828]
        fadd qword ptr [esp+20h]
        fsub qword ptr [ecx]
        _emit 0D9h
        _emit 0C1h
        _emit 0D8h
        _emit 0CAh
        _emit 0D9h
        _emit 0C9h
        fmul qword ptr [esp+10h]
        fmul qword ptr [mem_0093F7B0]
        _emit 0DEh
        _emit 0E9h
        _emit 0D9h
        _emit 0FAh
        fld qword ptr [esp+10h]
        _emit 0DCh
        _emit 0C0h
        _emit 0D9h
        _emit 0C2h
        _emit 0D9h
        _emit 0E0h
        _emit 0D8h
        _emit 0E2h
        _emit 0D8h
        _emit 0F1h
        fstp qword ptr [esp+20h]
        _emit 0D9h
        _emit 0C9h
        _emit 0DEh
        _emit 0E2h
        _emit 0D9h
        _emit 0C9h
        _emit 0D8h
        _emit 0F1h
        _emit 0D9h
        _emit 0C9h
        _emit 0DDh
        _emit 0D8h
        fcom qword ptr [esp+20h]
        fnstsw ax
        test ah, 41h
        je short s22_c464
        _emit 0DDh
        _emit 0D8h
        fld qword ptr [esp+20h]
s22_c464:
        mov ecx, dword ptr [ebp+8]
        fstp qword ptr [ecx]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
s22_L470:
        fld qword ptr [ecx]
        fcomp qword ptr [esp+10h]
        fnstsw ax
        test ah, 41h
        jne s22_L51c
s22_L481:
        _emit 0F6h
        _emit 0DBh
        sbb ebx, ebx
        and ebx, 0FFFFF830h
        add ebx, 3E8h
        mov dword ptr [esp+10h], ebx
        fild dword ptr [esp+10h]
        fst qword ptr [esp+20h]
        _emit 0D9h
        _emit 0C0h
        fmul qword ptr [mem_009967E0]
        fstp qword ptr [esp+10h]
        fld qword ptr [esi]
        fsub qword ptr [edi]
        fmul qword ptr [mem_009967D8]
        _emit 0D9h
        _emit 0C9h
        fmul qword ptr [mem_009967C8]
        _emit 0DEh
        _emit 0C1h
        fld qword ptr [esi]
        fadd qword ptr [edi]
        fmul qword ptr [mem_00993828]
        fadd qword ptr [esp+20h]
        fsub qword ptr [ecx]
        _emit 0D9h
        _emit 0C1h
        _emit 0D8h
        _emit 0CAh
        _emit 0D9h
        _emit 0C9h
        fmul qword ptr [esp+10h]
        fmul qword ptr [mem_0093F7B0]
        _emit 0DEh
        _emit 0E9h
        _emit 0D9h
        _emit 0FAh
        fld qword ptr [esp+10h]
        _emit 0DCh
        _emit 0C0h
        _emit 0D9h
        _emit 0C2h
        _emit 0D9h
        _emit 0E0h
        _emit 0D8h
        _emit 0E2h
        _emit 0D8h
        _emit 0F1h
        fstp qword ptr [esp+20h]
        _emit 0D9h
        _emit 0C9h
        _emit 0DEh
        _emit 0E2h
        _emit 0D9h
        _emit 0C9h
        _emit 0D8h
        _emit 0F1h
        _emit 0D9h
        _emit 0C9h
        _emit 0DDh
        _emit 0D8h
        fcom qword ptr [esp+20h]
        fnstsw ax
        test ah, 1
        jne short s22_L510
        _emit 0DDh
        _emit 0D8h
        fld qword ptr [esp+20h]
s22_L510:
        mov edx, dword ptr [ebp+8]
        fstp qword ptr [edx]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
s22_L51c:
        fld qword ptr [esi]
        fcomp qword ptr [edi]
        fnstsw ax
        test ah, 40h
        je short s22_L53e
        mov eax, dword ptr [ebp+8]
        mov dword ptr [eax], 0
        mov dword ptr [eax+4], 0
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
s22_L53e:
        fld qword ptr [ecx]
        fmul qword ptr [mem_0099D180]
        fld qword ptr [esi]
        fmul qword ptr [mem_009334D8]
        mov eax, dword ptr [ebp+8]
        _emit 0DEh
        _emit 0E9h
        fld qword ptr [edi]
        fmul qword ptr [mem_009334D8]
        _emit 0DEh
        _emit 0E9h
        fld qword ptr [esi]
        fsub qword ptr [edi]
        pop edi
        pop esi
        _emit 0DEh
        _emit 0F9h
        pop ebx
        fstp qword ptr [eax]
        mov esp, ebp
        pop ebp
        ret
    }
}

// [0x00728DF0] sub_00728DF0 (736 bytes)
extern "C" void ext_006D36F0();
extern "C" void ext_006D82F0();
extern "C" void ext_006D2250();
extern "C" void ext_006D81F0();
extern "C" void ext_006D8200();
extern "C" void ext_006D8210();
extern "C" void ext_006D86C0();
extern "C" void ext_006D8680();
extern "C" void ext_006D8980();
extern "C" void ext_006D8940();
extern "C" void ext_0078D1F0();
extern "C" void ext_006D7ED0();
extern "C" void ext_006D86F0();
extern "C" void ext_006D8280();
extern "C" void ext_006D80B0();
extern "C" void ext_006D80A0();

extern "C" __declspec(naked) void* __fastcall fn_00728DF0(void* self, int edx_unused, void* arg) {
    __asm {
        sub esp, 0x81c
        mov ecx, dword ptr [ecx]
        push ebx
        push ebp
        push esi
        push edi
        call ext_006D36F0
        mov esi, dword ptr [esp + 0x830]
        mov ebx, eax
        push esi
        mov ecx, ebx
        call ext_006D82F0
        lea ecx, [ebx + 0x1c4]
        call ext_006D2250
        lea ecx, [ebx + 0x1dc]
        call ext_006D2250
        mov ecx, esi
        call ext_006D81F0
        mov ecx, esi
        mov dword ptr [esp + 0x28], eax
        call ext_006D8200
        mov ebp, eax
        mov eax, dword ptr [esp + 0x28]
        xor edi, edi
        cmp eax, edi
        mov dword ptr [esp + 0x10], edi
        jle L_end
L_outer:
        mov eax, dword ptr [esp + 0x10]
        mov ecx, esi
        push eax
        call ext_006D8210
        mov dword ptr [esp + 0x20], eax
        xor eax, eax
        mov ecx, esi
        mov dword ptr [esp + 0x24], eax
        mov dword ptr [esp + 0x1c], eax
        call ext_006D86C0
        cmp eax, 3
        jne L_skip1
        mov ecx, esi
        call ext_006D8680
        mov ecx, dword ptr [esp + 0x10]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [esp + 0x24], edx
L_skip1:
        mov ecx, esi
        call ext_006D8980
        cmp eax, 3
        jne L_skip2
        mov ecx, esi
        call ext_006D8940
        mov ecx, dword ptr [esp + 0x10]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [esp + 0x1c], edx
L_skip2:
        mov eax, dword ptr [esp + 0x20]
        cmp eax, 3
        jle L_small
        push eax
        lea eax, [esp + 0x30]
        push eax
        call ext_0078D1F0
        mov ecx, dword ptr [esp + 0x28]
        add esp, 8
        lea eax, [ecx - 2]
        test eax, eax
        jle L_c
        lea esi, [esp + 0x2c]
        mov dword ptr [esp + 0x14], eax
L_loop:
        mov edx, dword ptr [esp + 0x1c]
        mov eax, dword ptr [esp + 0x24]
        push -1
        push edx
        push eax
        mov ecx, ebx
        call ext_006D7ED0
        mov ecx, dword ptr [esp + 0x830]
        call ext_006D86F0
        cmp eax, 2
        jne L_d
        mov eax, dword ptr [esi]
        mov ecx, dword ptr [esp + 0x10]
        push eax
        push ecx
        mov ecx, dword ptr [esp + 0x838]
        mov dword ptr [esp + 0x20], eax
        add esi, 4
        call ext_006D8280
        mov edx, dword ptr [esp + 0x18]
        push eax
        add edx, edi
        mov ecx, ebx
        mov eax, dword ptr [ebp + edx*4]
        push eax
        call ext_006D80B0
        mov eax, dword ptr [esi]
        mov ecx, dword ptr [esp + 0x10]
        push eax
        push ecx
        mov ecx, dword ptr [esp + 0x838]
        mov dword ptr [esp + 0x20], eax
        add esi, 4
        call ext_006D8280
        mov edx, dword ptr [esp + 0x18]
        push eax
        add edx, edi
        mov ecx, ebx
        mov eax, dword ptr [ebp + edx*4]
        push eax
        call ext_006D80B0
        mov eax, dword ptr [esi]
        mov ecx, dword ptr [esp + 0x10]
        push eax
        push ecx
        mov ecx, dword ptr [esp + 0x838]
        mov dword ptr [esp + 0x20], eax
        add esi, 4
        call ext_006D8280
        mov edx, dword ptr [esp + 0x18]
        push eax
        add edx, edi
        mov eax, dword ptr [ebp + edx*4]
        jmp L_g
L_d:
        mov ecx, dword ptr [esi]
        push -1
        add ecx, edi
        add esi, 4
        mov eax, dword ptr [ebp + ecx*4]
        mov ecx, ebx
        push eax
        call ext_006D80B0
        mov edx, dword ptr [esi]
        push -1
        add edx, edi
        mov ecx, ebx
        add esi, 4
        mov eax, dword ptr [ebp + edx*4]
        push eax
        call ext_006D80B0
        mov eax, dword ptr [esi]
        push -1
        add eax, edi
        add esi, 4
        mov eax, dword ptr [ebp + eax*4]
L_g:
        push eax
        mov ecx, ebx
        call ext_006D80B0
        mov ecx, ebx
        call ext_006D80A0
        mov eax, dword ptr [esp + 0x14]
        dec eax
        mov dword ptr [esp + 0x14], eax
        jne L_loop
        mov esi, dword ptr [esp + 0x830]
L_c:
        add edi, dword ptr [esp + 0x20]
        jmp L_inc
L_small:
        mov ecx, dword ptr [esp + 0x1c]
        mov edx, dword ptr [esp + 0x24]
        push -1
        push ecx
        push edx
        mov ecx, ebx
        call ext_006D7ED0
        mov ecx, esi
        call ext_006D86F0
        cmp eax, 2
        mov eax, dword ptr [ebp + edi*4]
        jne L_e
        mov ecx, dword ptr [esp + 0x10]
        push 0
        push ecx
        mov ecx, esi
        mov dword ptr [esp + 0x1c], eax
        inc edi
        call ext_006D8280
        mov edx, dword ptr [esp + 0x14]
        push eax
        push edx
        mov ecx, ebx
        call ext_006D80B0
        mov ecx, dword ptr [esp + 0x10]
        mov eax, dword ptr [ebp + edi*4]
        push 1
        push ecx
        mov ecx, esi
        mov dword ptr [esp + 0x1c], eax
        inc edi
        call ext_006D8280
        mov edx, dword ptr [esp + 0x14]
        push eax
        push edx
        mov ecx, ebx
        call ext_006D80B0
        mov ecx, dword ptr [esp + 0x10]
        mov eax, dword ptr [ebp + edi*4]
        push 2
        push ecx
        mov ecx, esi
        mov dword ptr [esp + 0x1c], eax
        inc edi
        call ext_006D8280
        mov edx, dword ptr [esp + 0x14]
        push eax
        push edx
        jmp L_f
L_e:
        push -1
        push eax
        mov ecx, ebx
        inc edi
        call ext_006D80B0
        mov eax, dword ptr [ebp + edi*4]
        push -1
        push eax
        mov ecx, ebx
        inc edi
        call ext_006D80B0
        mov eax, dword ptr [ebp + edi*4]
        push -1
        inc edi
        push eax
L_f:
        mov ecx, ebx
        call ext_006D80B0
        mov ecx, ebx
        call ext_006D80A0
L_inc:
        mov eax, dword ptr [esp + 0x10]
        mov ecx, dword ptr [esp + 0x28]
        inc eax
        cmp eax, ecx
        mov dword ptr [esp + 0x10], eax
        jl L_outer
L_end:
        pop edi
        pop esi
        mov eax, ebx
        pop ebp
        pop ebx
        add esp, 0x81c
        ret 4
    }
}

// [0x00723640] sub_00723640 (736 bytes)
extern "C" void ext_006B9D10();
extern "C" void ext_006B9D70();
extern "C" void ext_006B9D80();
extern "C" void ext_006B9E60();
extern "C" void ext_006BA220();
extern "C" void ext_006BA3D0();
extern "C" void ext_006BA6C0();
extern "C" void ext_006E7460();
extern "C" void ext_006FE4B0();
extern "C" void ext_006FE570();
extern "C" void ext_006FE610();
extern "C" void ext_00723B30();
extern "C" void ext_00724670();
extern "C" void ext_00728D60();
extern "C" void ext_00788C90();
extern "C" void ext_00788D00();
extern "C" void ext_00788D10();
extern "C" void ext_00788F40();
extern "C" int mem_009252CC;
extern "C" __declspec(naked) void __fastcall fn_00723640(void* self, int edx_unused, int a1, int a2, int a3, int a4) {
    __asm {
        push -1
        push 0x8bd72d
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x788
        push ebx
        push ebp
        push esi
        push edi
        mov esi, ecx
        call ext_00723B30
        lea eax, [esi + 0x1cc]
        push eax
        call ext_00788C90
        mov ebp, dword ptr [esp + 0x7ac]
        add esp, 0x4
        lea ecx, [esp + 0x10]
        push ebp
        call ext_006B9D80
        mov al, byte ptr [esp + 0x7ac]
        mov dword ptr [esp + 0x7a0], 0x0
        test al, al
        mov byte ptr [esi + 0x15], al
        je short L_a
        mov al, byte ptr [esp + 0x7b0]
        test al, al
        je short L_a
        mov eax, 0x1
        jmp short L_b
L_a:
        xor eax, eax
L_b:
        mov edi, dword ptr [esp + 0x7b4]
        mov byte ptr [esi + 0x17], al
        test edi, edi
        je short L_c
        push edi
        call ext_00728D60
        mov ecx, dword ptr [edi + 0x11c]
        add esp, 0x4
        mov dword ptr [esi + 0x4], ecx
L_c:
        lea ecx, [esp + 0x10]
        call ext_006E7460
        lea edx, [esp + 0x5c]
        push eax
        push edx
        call ext_006FE570
        add esp, 0x8
        push 0xaa9014
        mov ecx, eax
        mov byte ptr [esp + 0x7a4], 0x1
        call ext_006BA6C0
        test eax, eax
        je short L_x
        lea ecx, [esp + 0x10]
        call ext_006E7460
        push eax
        lea eax, [esp + 0xf8]
        push eax
        call ext_006FE570
        add esp, 0x8
        push 0xaacc64
        mov ecx, eax
        mov byte ptr [esp + 0x7a4], 0x2
        call ext_006BA6C0
        lea ecx, [esp + 0xf4]
        mov edi, eax
        mov byte ptr [esp + 0x7a0], 0x1
        call ext_006B9D70
        test edi, edi
        je short L_x
        mov bl, 0x1
        jmp short L_f2
L_x:
        xor bl, bl
L_f2:
        lea ecx, [esp + 0x5c]
        mov byte ptr [esp + 0x7a0], 0x0
        call ext_006B9D70
        test bl, bl
        je short L_g
        push 0xaacc4c
        lea ecx, [esp + 0x14]
        call ext_006BA220
L_g:
        lea ecx, [esp + 0x10]
        lea edi, [esi + 0x64]
        push ecx
        mov ecx, edi
        call ext_006B9E60
        lea ecx, [esp + 0x10]
        call ext_006E7460
        lea edx, [esp + 0x5c]
        push eax
        push edx
        call ext_006FE610
        add esp, 0x8
        push eax
        lea ecx, [esi + 0x18]
        mov byte ptr [esp + 0x7a4], 0x3
        call ext_006B9E60
        lea ecx, [esp + 0x5c]
        mov byte ptr [esp + 0x7a0], 0x0
        call ext_006B9D70
        push 0x1
        lea eax, [esp + 0x60]
        push ebp
        push eax
        call ext_006FE4B0
        add esp, 0xc
        push eax
        lea ecx, [esi + 0xb0]
        mov byte ptr [esp + 0x7a4], 0x4
        call ext_006B9E60
        lea ecx, [esp + 0x5c]
        mov byte ptr [esp + 0x7a0], 0x0
        call ext_006B9D70
        lea ecx, [esp + 0x10]
        lea ebp, [esi + 0xfc]
        push ecx
        mov ecx, ebp
        call ext_006B9E60
        mov ecx, edi
        call ext_006E7460
        push eax
        call dword ptr [mem_009252CC]
        add esp, 0x4
        lea ecx, [esp + 0x140]
        call ext_00788D00
        lea ecx, [esp + 0xa8]
        mov byte ptr [esp + 0x7a0], 0x5
        call ext_006B9D10
        lea edx, [esp + 0x10]
        lea ecx, [esp + 0xa8]
        push edx
        mov byte ptr [esp + 0x7a4], 0x6
        call ext_006B9E60
        push 0x0
        push 0xaacc5c
        push 0xaacc4c
        lea ecx, [esp + 0xb4]
        call ext_006BA3D0
        lea ecx, [esp + 0xa8]
        call ext_006E7460
        push eax
        lea ecx, [esp + 0x144]
        call ext_00788F40
        mov al, byte ptr [esi + 0x15]
        test al, al
        je short L_h
        mov eax, dword ptr [esi + 0x10]
        push 0xaacc58
        mov edi, dword ptr [eax]
        jmp short L_i
L_h:
        mov ecx, dword ptr [esi + 0x10]
        push 0xaacc54
        mov edi, dword ptr [ecx]
L_i:
        mov ecx, ebp
        call ext_006E7460
        mov ecx, dword ptr [esi + 0x10]
        push eax
        call dword ptr [edi + 0x8]
        mov edx, dword ptr [esp + 0x7b4]
        mov ecx, esi
        push edx
        mov dword ptr [esi + 0x8], 0x1
        call ext_00724670
        lea ecx, [esp + 0xa8]
        mov bl, al
        mov byte ptr [esp + 0x7a0], 0x5
        call ext_006B9D70
        lea ecx, [esp + 0x140]
        mov byte ptr [esp + 0x7a0], 0x0
        call ext_00788D10
        lea ecx, [esp + 0x10]
        mov dword ptr [esp + 0x7a0], 0xffffffff
        call ext_006B9D70
        mov ecx, dword ptr [esp + 0x798]
        pop edi
        pop esi
        mov al, bl
        pop ebp
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0x794
        ret 0x10
    }
}
