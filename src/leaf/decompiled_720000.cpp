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
