// Decompiled translation unit: src/leaf/decompiled_720000.cpp

// [0x0072DB90] sub_0072DB90 (32 bytes)
// Reads sub-object at self->[0xAC]. If its byte [0x1B] is nonzero, returns 2;
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

// [0x00725A90] sub_00725A90 (79 bytes)
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

// [0x007266F0] sub_007266F0 (31 bytes)
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

// [0x0072CB00] sub_0072CB00 (32 bytes)
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

// [0x0072BF40] sub_0072BF40 (47 bytes)
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

// [0x00726940] sub_00726940 (63 bytes)
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

// [0x0072B1E0] sub_0072B1E0 (64 bytes)
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
