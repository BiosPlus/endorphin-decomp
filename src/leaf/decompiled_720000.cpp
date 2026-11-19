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
