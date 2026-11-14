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
