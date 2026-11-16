// Decompiled translation unit: src/leaf/decompiled_700000.cpp
extern "C" const char* __fastcall ext_00706380(void* self);

// [0x007057B0] sub_007057B0 (16 bytes)
extern "C" void __stdcall ext_00783FD0(void* a1);

extern "C" __declspec(naked) void __fastcall fn_007057B0(void* self) {
    __asm {
        mov eax, ecx
        mov ecx, dword ptr [eax + 0x40]
        test ecx, ecx
        je done
        push eax
        call ext_00783FD0
    done:
        ret
    }
}

// [0x00703BE0] sub_00703BE0 (112 bytes)
// Four thunk bodies: body 1 at +0x00 returns ecx+0x1f8; body 2 at +0x10 returns [ecx+0x268];
// jmp at +0x20 to body 3 at +0x30 copies the double at *_HUGE into mem_00B5E9C8/CC;
// jmp at +0x50 to body 4 at +0x60 stores -(*_HUGE) into mem_00B5E9C0.
extern "C" int mem_00925284;
extern "C" int mem_00B5E9C8;
extern "C" int mem_00B5E9CC;
extern "C" int mem_00B5E9C0;
extern "C" __declspec(naked) void __fastcall fn_00703BE0(void* self) {
    __asm {
        lea eax, [ecx + 0x1f8]
        ret
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        mov eax, dword ptr [ecx + 0x268]
        ret
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0xe9
        _emit 0x0b
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        mov eax, dword ptr [mem_00925284]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [mem_00B5E9C8], ecx
        mov dword ptr [mem_00B5E9CC], edx
        ret
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0xe9
        _emit 0x0b
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        mov eax, dword ptr [mem_00925284]
        fld qword ptr [eax]
        fchs
        fstp qword ptr [mem_00B5E9C0]
        ret
    }
}

extern "C" void ext_006B9D20();

// [0x0070EA90] sub_0070EA90 (32 bytes)
extern "C" __declspec(naked) void* __fastcall fn_0070EA90(void* self, int edx_unused, void* arg) {
    __asm {
        push ecx
        push esi
        mov esi, dword ptr [esp + 0xc]
        add ecx, 0xc
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

// [0x0070EA70] sub_0070EA70 (32 bytes)
extern "C" int __fastcall ext_006BADB0(void* obj);
extern "C" void ext_006B9EC0();
extern "C" void __fastcall fn_0070EA70(void* self, int edx_unused, void* a1) {
    if (a1) {
        *(void**)((char*)self + 8) = a1;
        int v = ext_006BADB0(a1);
        ((void (__thiscall *)(void*, int))ext_006B9EC0)((char*)self + 12, v);
    }
}

// [0x00708BD0] sub_00708BD0 (64 bytes)
extern "C" void ext_00708C10();
extern "C" void ext_00711BC0();
extern "C" void ext_00712150();
extern "C" void ext_00712160();
extern "C" void ext_007121A0();
extern "C" __declspec(naked) void __fastcall fn_00708BD0(void* self, int edx_unused, void* arg) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 8]
        push edi
        mov ecx, ebx
        call ext_00712150
        test al, al
        jne loc_708C0B
        mov ecx, ebx
        call ext_00712160
        mov edi, eax
        dec edi
        js loc_708C0B
        push esi
loc_708BEE:
        push edi
        mov ecx, ebx
        call ext_007121A0
        mov esi, eax
        mov ecx, esi
        call ext_00711BC0
        push esi
        mov ecx, eax
        call ext_00708C10
        dec edi
        jns loc_708BEE
        pop esi
loc_708C0B:
        pop edi
        pop ebx
        ret 4
    }
}

extern "C" void ext_006C97B0();
extern "C" void ext_006C97D0();
extern "C" void ext_006C97F0();
extern "C" void ext_006CD330();
extern "C" void ext_006DC460();

// [0x0070BB80] sub_0070BB80 (80 bytes)
extern "C" __declspec(naked) void __fastcall fn_0070BB80(void* self, int edx_unused, void* arg1) {
    __asm {
        push esi
        push edi
        call ext_006DC460
        mov edi, dword ptr [esp + 0x0c]
        mov esi, eax
        push ecx
        mov ecx, esi
        fld qword ptr [edi]
        fstp dword ptr [esp]
        call ext_006C97B0
        mov ecx, eax
        call ext_006CD330
        fld qword ptr [edi + 0x08]
        push ecx
        mov ecx, esi
        fstp dword ptr [esp]
        call ext_006C97D0
        mov ecx, eax
        call ext_006CD330
        fld qword ptr [edi + 0x10]
        push ecx
        mov ecx, esi
        fstp dword ptr [esp]
        call ext_006C97F0
        mov ecx, eax
        call ext_006CD330
        pop edi
        pop esi
        ret 4
    }
}

// [0x0070BC20] sub_0070BC20 (80 bytes)
extern "C" void ext_006C9810();
extern "C" void ext_006C9830();
extern "C" void ext_006C9850();
extern "C" void ext_006CD330();
extern "C" void ext_006DC460();
extern "C" __declspec(naked) void __fastcall fn_0070BC20(void* self, int edx_unused, void* arg1) {
    __asm {
        push esi
        push edi
        call ext_006DC460
        mov edi, dword ptr [esp + 0x0c]
        mov esi, eax
        push ecx
        mov ecx, esi
        fld qword ptr [edi]
        fstp dword ptr [esp]
        call ext_006C9810
        mov ecx, eax
        call ext_006CD330
        fld qword ptr [edi + 0x08]
        push ecx
        mov ecx, esi
        fstp dword ptr [esp]
        call ext_006C9830
        mov ecx, eax
        call ext_006CD330
        fld qword ptr [edi + 0x10]
        push ecx
        mov ecx, esi
        fstp dword ptr [esp]
        call ext_006C9850
        mov ecx, eax
        call ext_006CD330
        pop edi
        pop esi
        ret 4
    }
}

// [0x0070BCC0] sub_0070BCC0 (80 bytes)
extern "C" void ext_006C9870();
extern "C" void ext_006C9890();
extern "C" void ext_006C98B0();
extern "C" void ext_006CD330();
extern "C" void ext_006DC460();
extern "C" __declspec(naked) void __fastcall fn_0070BCC0(void* self, int edx_unused, void* arg1) {
    __asm {
        push esi
        push edi
        call ext_006DC460
        mov edi, dword ptr [esp + 0x0c]
        mov esi, eax
        push ecx
        mov ecx, esi
        fld qword ptr [edi]
        fstp dword ptr [esp]
        call ext_006C9870
        mov ecx, eax
        call ext_006CD330
        fld qword ptr [edi + 0x08]
        push ecx
        mov ecx, esi
        fstp dword ptr [esp]
        call ext_006C9890
        mov ecx, eax
        call ext_006CD330
        fld qword ptr [edi + 0x10]
        push ecx
        mov ecx, esi
        fstp dword ptr [esp]
        call ext_006C98B0
        mov ecx, eax
        call ext_006CD330
        pop edi
        pop esi
        ret 4
    }
}

// [0x0070BD60] sub_0070BD60 (80 bytes)
extern "C" void ext_006C9750();
extern "C" void ext_006C9770();
extern "C" void ext_006C9790();
extern "C" void ext_006CD330();
extern "C" void ext_006DC460();
extern "C" __declspec(naked) void __fastcall fn_0070BD60(void* self, int edx_unused, void* arg1) {
    __asm {
        push esi
        push edi
        call ext_006DC460
        mov edi, dword ptr [esp + 0x0c]
        mov esi, eax
        push ecx
        mov ecx, esi
        fld qword ptr [edi]
        fstp dword ptr [esp]
        call ext_006C9750
        mov ecx, eax
        call ext_006CD330
        fld qword ptr [edi + 0x08]
        push ecx
        mov ecx, esi
        fstp dword ptr [esp]
        call ext_006C9770
        mov ecx, eax
        call ext_006CD330
        fld qword ptr [edi + 0x10]
        push ecx
        mov ecx, esi
        fstp dword ptr [esp]
        call ext_006C9790
        mov ecx, eax
        call ext_006CD330
        pop edi
        pop esi
        ret 4
    }
}

// [0x0070C860] sub_0070C860 (112 bytes)
extern "C" void ext_006B9EC0();
extern "C" int mem_00925284;
extern "C" int mem_00B5ED40;
extern "C" int mem_00B5ED44;
extern "C" int mem_00B5ED38;
extern "C" __declspec(naked) void __fastcall fn_0070C860(void* self) {
    __asm {
        push esi
        mov esi, ecx
        push 0xaabd8c
        lea ecx, [esi + 0xf4]
        call ext_006B9EC0
        mov byte ptr [esi + 0x198], 0
        pop esi
        ret
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0xe9
        _emit 0x0b
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        mov eax, dword ptr [mem_00925284]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [mem_00B5ED40], ecx
        mov dword ptr [mem_00B5ED44], edx
        ret
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0xe9
        _emit 0x0b
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        mov eax, dword ptr [mem_00925284]
        fld qword ptr [eax]
        fchs
        fstp qword ptr [mem_00B5ED38]
        ret
    }
}

// [0x0070C060] sub_0070C060 (127 bytes)
extern "C" void ext_006D80A0();
extern "C" void ext_0070BBD0();
extern "C" void ext_0077FB40();

extern "C" __declspec(naked) void __fastcall fn_0070C060(void* self) {
    __asm {
        push -1
        push 0x8c1a5f
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x24
        push ebp
        push esi
        mov esi, ecx
        push edi
        lea ecx, [esp + 0x10]
        mov dword ptr [esp + 0xc], 0
        call ext_0077FB40
        lea eax, [esp + 0x10]
        mov ecx, esi
        push eax
        mov dword ptr [esp + 0x3c], 1
        call ext_0070BBD0
        mov ebp, dword ptr [esp + 0x40]
        mov ecx, 8
        lea esi, [esp + 0x10]
        mov edi, ebp
        rep movsd
        mov dword ptr [esp + 0xc], 1
        lea ecx, [esp + 0x10]
        mov byte ptr [esp + 0x38], 0
        call ext_006D80A0
        mov ecx, dword ptr [esp + 0x30]
        pop edi
        mov eax, ebp
        pop esi
        pop ebp
        mov dword ptr fs:[0], ecx
        add esp, 0x30
        ret 4
    }
}

// [0x0070C130] sub_0070C130 (127 bytes)
extern "C" void ext_0070BC70();

extern "C" __declspec(naked) void __fastcall fn_0070C130(void* self) {
    __asm {
        push -1
        push 0x8c1a5f
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x24
        push ebp
        push esi
        mov esi, ecx
        push edi
        lea ecx, [esp + 0x10]
        mov dword ptr [esp + 0xc], 0
        call ext_0077FB40
        lea eax, [esp + 0x10]
        mov ecx, esi
        push eax
        mov dword ptr [esp + 0x3c], 1
        call ext_0070BC70
        mov ebp, dword ptr [esp + 0x40]
        mov ecx, 8
        lea esi, [esp + 0x10]
        mov edi, ebp
        rep movsd
        mov dword ptr [esp + 0xc], 1
        lea ecx, [esp + 0x10]
        mov byte ptr [esp + 0x38], 0
        call ext_006D80A0
        mov ecx, dword ptr [esp + 0x30]
        pop edi
        mov eax, ebp
        pop esi
        pop ebp
        mov dword ptr fs:[0], ecx
        add esp, 0x30
        ret 4
    }
}

extern "C" void ext_0070BD10();

// [0x0070C200] sub_0070C200 (127 bytes)
extern "C" __declspec(naked) void __fastcall fn_0070C200(void* self) {
    __asm {
        push -1
        push 0x8c1a5f
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x24
        push ebp
        push esi
        mov esi, ecx
        push edi
        lea ecx, [esp + 0x10]
        mov dword ptr [esp + 0xc], 0
        call ext_0077FB40
        lea eax, [esp + 0x10]
        mov ecx, esi
        push eax
        mov dword ptr [esp + 0x3c], 1
        call ext_0070BD10
        mov ebp, dword ptr [esp + 0x40]
        mov ecx, 8
        lea esi, [esp + 0x10]
        mov edi, ebp
        rep movsd
        mov dword ptr [esp + 0xc], 1
        lea ecx, [esp + 0x10]
        mov byte ptr [esp + 0x38], 0
        call ext_006D80A0
        mov ecx, dword ptr [esp + 0x30]
        pop edi
        mov eax, ebp
        pop esi
        pop ebp
        mov dword ptr fs:[0], ecx
        add esp, 0x30
        ret 4
    }
}

// [0x0070C2D0] sub_0070C2D0 (127 bytes)
extern "C" void ext_0070BDB0();

extern "C" __declspec(naked) void __fastcall fn_0070C2D0(void* self) {
    __asm {
        push -1
        push 0x8c1a5f
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x24
        push ebp
        push esi
        mov esi, ecx
        push edi
        lea ecx, [esp + 0x10]
        mov dword ptr [esp + 0xc], 0
        call ext_0077FB40
        lea eax, [esp + 0x10]
        mov ecx, esi
        push eax
        mov dword ptr [esp + 0x3c], 1
        call ext_0070BDB0
        mov ebp, dword ptr [esp + 0x40]
        mov ecx, 8
        lea esi, [esp + 0x10]
        mov edi, ebp
        rep movsd
        mov dword ptr [esp + 0xc], 1
        lea ecx, [esp + 0x10]
        mov byte ptr [esp + 0x38], 0
        call ext_006D80A0
        mov ecx, dword ptr [esp + 0x30]
        pop edi
        mov eax, ebp
        pop esi
        pop ebp
        mov dword ptr fs:[0], ecx
        add esp, 0x30
        ret 4
    }
}

// [0x00702CE0] sub_00702CE0 (128 bytes)
extern "C" void ext_006D23B0();
extern "C" void ext_006D80A0();
extern "C" void ext_007028A0();
extern "C" int mem_008BFD88;

extern "C" __declspec(naked) void __fastcall fn_00702CE0(void* self, int edx_unused, double a, double b, double c) {
    __asm {
        push -1
        push offset mem_008BFD88
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x20
        mov eax, dword ptr [esp + 0x44]
        mov edx, dword ptr [esp + 0x3c]
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 0x44]
        push 0x3ff00000
        push 0
        push eax
        mov eax, dword ptr [esp + 0x48]
        push ecx
        mov ecx, dword ptr [esp + 0x48]
        push edx
        mov edx, dword ptr [esp + 0x48]
        push eax
        push ecx
        push edx
        lea ecx, [esp + 0x24]
        call ext_006D23B0
        lea eax, [esp + 4]
        mov ecx, esi
        push eax
        mov dword ptr [esp + 0x30], 0
        call ext_007028A0
        lea ecx, [esp + 4]
        mov dword ptr [esp + 0x2c], -1
        call ext_006D80A0
        mov ecx, dword ptr [esp + 0x24]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x2c
        ret 0x18
    }
}

// [0x007005B0] sub_007005B0 (159 bytes)
extern "C" void ext_00712580();
extern "C" void ext_00711220();
extern "C" void ext_00705450();

extern "C" __declspec(naked) void __fastcall fn_007005B0(void* self) {
    __asm {
        push -0x1
        push 0x8bb82e
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        lea ecx, [esi + 0x388]
        mov dword ptr [esp + 0x10], 0x5
        call ext_00712580
        lea ecx, [esi + 0x300]
        mov byte ptr [esp + 0x10], 0x4
        call ext_00711220
        lea ecx, [esi + 0x278]
        mov byte ptr [esp + 0x10], 0x3
        call ext_00711220
        lea ecx, [esi + 0x1f0]
        mov byte ptr [esp + 0x10], 0x2
        call ext_00711220
        lea ecx, [esi + 0x168]
        mov byte ptr [esp + 0x10], 0x1
        call ext_00711220
        lea ecx, [esi + 0xe0]
        mov byte ptr [esp + 0x10], 0x0
        call ext_00711220
        mov ecx, esi
        mov dword ptr [esp + 0x10], 0xffffffff
        call ext_00705450
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00709BF0] sub_00709BF0 (160 bytes)
extern "C" __declspec(naked) void* __fastcall fn_00709BF0(void* self, int /*edx*/, const char* name) {
    __asm {
        push    ebx
        push    ebp
        mov     ebp, ecx
        push    esi
        push    edi
        xor     edi, edi
        mov     eax, dword ptr [ebp + 0xe0]
        test    eax, eax
        jle     L_not_found
        mov     ebx, dword ptr [esp + 0x14]
    L_loop:
        mov     eax, dword ptr [ebp + 0xf0]
        mov     ecx, dword ptr [eax + 8*edi + 0x4]
        lea     eax, [eax + 8*edi]
        test    ecx, ecx
        je      L_next
        mov     ecx, dword ptr [ecx]
        mov     edx, dword ptr [eax]
        cmp     ecx, edx
        jne     L_next
        mov     ecx, dword ptr [eax + 0x4]
        test    ecx, ecx
        je      L_zero
        mov     edx, dword ptr [ecx]
        mov     esi, dword ptr [eax]
        cmp     edx, esi
        jne     L_zero
        mov     ecx, dword ptr [ecx + 0x4]
        jmp     L_call
    L_zero:
        xor     ecx, ecx
    L_call:
        mov     esi, ebx
        call    ext_00706380
    L_strcmp:
        mov     dl, byte ptr [eax]
        mov     cl, dl
        cmp     dl, byte ptr [esi]
        jne     L_strcmp_diff
        test    cl, cl
        je      L_strcmp_eq
        mov     dl, byte ptr [eax + 0x1]
        mov     cl, dl
        cmp     dl, byte ptr [esi + 0x1]
        jne     L_strcmp_diff
        add     eax, 0x2
        add     esi, 0x2
        test    cl, cl
        jne     L_strcmp
    L_strcmp_eq:
        xor     eax, eax
        jmp     L_strcmp_end
    L_strcmp_diff:
        sbb     eax, eax
        sbb     eax, -0x1
    L_strcmp_end:
        test    eax, eax
        je      L_found
    L_next:
        mov     eax, dword ptr [ebp + 0xe0]
        inc     edi
        cmp     edi, eax
        jl      L_loop
    L_not_found:
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0xb5eb80
        pop     ebx
        ret     0x4
    L_found:
        mov     eax, dword ptr [ebp + 0xf0]
        lea     eax, [eax + 8*edi]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x4
    }
}

// [0x0070A1F0] sub_0070A1F0 (160 bytes)
extern "C" void ext_006B9D70();
extern "C" void ext_00711220();
extern "C" int mem_00925284;
extern "C" int mem_00B5EBC0;
extern "C" int mem_00B5EBC4;
extern "C" int mem_00B5EBB8;
extern "C" __declspec(naked) void __fastcall fn_0070A1F0(void* self) {
    __asm {
        push -1
        push 008bc298h
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 4], esi
        lea ecx, [esi + 80h]
        mov dword ptr [esp + 10h], 0
        call ext_006B9D70
        mov ecx, esi
        mov dword ptr [esp + 10h], -1
        call ext_00711220
        mov ecx, dword ptr [esp + 8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 10h
        ret
        _emit 0x90
        _emit 0xE9
        _emit 0x0B
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        mov eax, dword ptr [mem_00925284]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov dword ptr [mem_00B5EBC0], ecx
        mov dword ptr [mem_00B5EBC4], edx
        ret
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0xE9
        _emit 0x0B
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        mov eax, dword ptr [mem_00925284]
        fld qword ptr [eax]
        fchs
        fstp qword ptr [mem_00B5EBB8]
        ret
    }
}

// [0x00701F70] sub_00701F70 (159 bytes)
extern "C" void ext_006A6C87();
extern "C" void ext_006E73B0();
extern "C" void ext_00701F70();
extern "C" void ext_00701FC0();
extern "C" void ext_007641C0();
extern "C" int mem_00B5E758;
extern "C" __declspec(naked) void __fastcall fn_00701F70(void* self) {
    __asm {
        mov eax, dword ptr [esp + 4]
        sub eax, 0
        je L_a
        dec eax
        je L_b
        xor eax, eax
        ret 4
    L_b:
        mov eax, 0x00AABBCC
        ret 4
    L_a:
        mov eax, 0x00AABBC4
        ret 4
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        mov eax, dword ptr [esp + 4]
        push eax
        call ext_00701F70
        ret 4
        _emit 0x90
        _emit 0x90
        _emit 0x90
        call ext_00701FC0
        _emit 0xE9
        _emit 0x26
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        push 1
        _emit 0x68
        _emit 0x18
        _emit 0xBA
        _emit 0xAA
        _emit 0x00
        _emit 0xB9
        _emit 0x70
        _emit 0xE7
        _emit 0xB5
        _emit 0x00
        call ext_006E73B0
        ret
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x68
        _emit 0xF0
        _emit 0x1F
        _emit 0x70
        _emit 0x00
        call ext_006A6C87
        pop ecx
        ret
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        mov cl, byte ptr [mem_00B5E758]
        mov al, 1
        _emit 0x84
        _emit 0xC8
        jne L_end
        or cl, al
        mov byte ptr [mem_00B5E758], cl
        _emit 0xB9
        _emit 0x70
        _emit 0xE7
        _emit 0xB5
        _emit 0x00
        jmp ext_007641C0
    L_end:
        ret
    }
}

// [0x00708B00] sub_00708B00 (208 bytes)
extern "C" void ext_006D2170();
extern "C" void ext_006D2200();
extern "C" void ext_00711A60();
extern "C" __declspec(naked) int __fastcall fn_00708B00(void* self, int edx_unused, int a1) {
    __asm {
        push ebx
        push esi
        push edi
        mov edi, dword ptr [esp + 0x10]
        mov esi, ecx
        push 0x0
        mov ecx, edi
        mov ebx, dword ptr [esi]
        call ext_00711A60
        push eax
        push edi
        push 0x8
        mov ecx, esi
        call dword ptr [ebx + 0xd0]
        mov edx, dword ptr [esi + 0xc0]
        lea ecx, [esi + 0xc0]
        lea eax, [esp + 0x10]
        mov dword ptr [esp + 0x10], edi
        push eax
        push edx
        call ext_006D2170
        mov ebx, dword ptr [esi]
        push 0x0
        mov ecx, edi
        call ext_00711A60
        push eax
        push edi
        push 0xb
        mov ecx, esi
        call dword ptr [ebx + 0xd0]
        pop edi
        pop esi
        or eax, -1
        pop ebx
        ret 4
        nop
        nop
        nop
        nop
        nop
        push ebx
        mov ebx, dword ptr [esp + 0x8]
        push esi
        cmp ebx, -0x1
        mov esi, ecx
        jle short L_neg_708B00
        mov eax, dword ptr [esi + 0xd0]
        push ebp
        mov ebp, dword ptr [esi]
        push edi
        mov edi, dword ptr [eax + 4*ebx]
        push 0x0
        mov ecx, edi
        call ext_00711A60
        push eax
        push edi
        push 0x9
        mov ecx, esi
        call dword ptr [ebp + 0xd0]
        mov edx, dword ptr [esi]
        push edi
        mov ecx, esi
        call dword ptr [edx + 0xec]
        push ebx
        lea ecx, [esi + 0xc0]
        call ext_006D2200
        mov ebx, dword ptr [esi]
        push 0x0
        mov ecx, edi
        call ext_00711A60
        push eax
        push edi
        push 0xc
        mov ecx, esi
        call dword ptr [ebx + 0xd0]
        pop edi
        pop ebp
        pop esi
        xor eax, eax
        pop ebx
        ret 4
    L_neg_708B00:
        pop esi
        mov eax, 0x1
        pop ebx
        ret 4
    }
}

extern "C" void ext_006FB650();
extern "C" void ext_00710F80();
extern "C" void ext_007111D0();
extern "C" void ext_00711D40();
extern "C" void ext_00711DA0();
extern "C" void ext_00711DC0();
extern "C" void ext_00711F00();
extern "C" void ext_00712A70();
extern "C" void ext_0071E680();

// [0x0070A030] sub_0070A030 (208 bytes)
extern "C" __declspec(naked) void __fastcall fn_0070A030(void* self) {
    __asm {
        push -1
        push 0x8bc298
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        push ecx
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov [esp+0xc], esi
        call ext_007111D0
        mov ebx, [esp+0x20]
        mov edi, [esp+0x24]
        mov eax, [esp+0x34]
        push 0
        push 0
        push ebx
        push edi
        mov ecx, esi
        mov dword ptr [esp+0x28], 0
        mov dword ptr [esi], 0x994d90
        mov [esi+0x78], eax
        call ext_00711D40
        push 0
        push edi
        mov ecx, esi
        call ext_00711F00
        push 0
        call ext_00712A70
        add esp, 4
        mov ecx, esi
        push eax
        call ext_00711DA0
        mov ecx, [esp+0x2c]
        push ecx
        push 0x40
        mov ecx, esi
        call ext_0071E680
        mov ecx, eax
        call ext_00710F80
        push 1
        push 1
        mov ecx, esi
        call ext_0071E680
        mov ecx, eax
        call ext_00710F80
        mov edx, [esp+0x28]
        mov ecx, esi
        push edx
        call ext_00711DC0
        mov eax, [esp+0x30]
        test eax, eax
        je skip_fb650
        push 0
        push eax
        mov ecx, esi
        call ext_006FB650
    skip_fb650:
        mov eax, [ebx]
        push esi
        mov ecx, ebx
        call dword ptr [eax+0xe0]
        mov ecx, [esp+0x10]
        mov eax, esi
        pop edi
        pop esi
        pop ebx
        mov fs:[0], ecx
        add esp, 0x10
        ret 0x18
    }
}

extern "C" void ext_006F9B20();

// [0x0070A100] sub_0070A100 (208 bytes)
extern "C" __declspec(naked) void __fastcall fn_0070A100(void* self) {
    __asm {
        push -1
        push 0x8bc298
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        push ecx
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov [esp+0xc], esi
        call ext_007111D0
        mov ebx, [esp+0x20]
        mov edi, [esp+0x24]
        mov eax, [esp+0x34]
        push 0
        push 0
        push ebx
        push edi
        mov ecx, esi
        mov dword ptr [esp+0x28], 0
        mov dword ptr [esi], 0x994d90
        mov [esi+0x78], eax
        call ext_00711D40
        push 0
        push edi
        mov ecx, esi
        call ext_00711F00
        push 0
        call ext_006F9B20
        add esp, 4
        mov ecx, esi
        push eax
        call ext_00711DA0
        mov ecx, [esp+0x2c]
        push ecx
        push 0x40
        mov ecx, esi
        call ext_0071E680
        mov ecx, eax
        call ext_00710F80
        push 1
        push 1
        mov ecx, esi
        call ext_0071E680
        mov ecx, eax
        call ext_00710F80
        mov edx, [esp+0x28]
        mov ecx, esi
        push edx
        call ext_00711DC0
        mov eax, [esp+0x30]
        test eax, eax
        je skip_fb650
        push 0
        push eax
        mov ecx, esi
        call ext_006FB650
    skip_fb650:
        mov eax, [ebx]
        push esi
        mov ecx, ebx
        call dword ptr [eax+0xe0]
        mov ecx, [esp+0x10]
        mov eax, esi
        pop edi
        pop esi
        pop ebx
        mov fs:[0], ecx
        add esp, 0x10
        ret 0x18
    }
}

extern "C" void ext_006B9D10();
extern "C" void ext_006E9AD0();
// [0x00709E30] sub_00709E30 (224 bytes)
extern "C" __declspec(naked) void __fastcall fn_00709E30(void* self, int edx_unused) {
    __asm {
        push -1
        push 0x8bc286
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        push ecx
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [esp + 0Ch], esi
        call ext_007111D0
        lea ecx, [esi + 80h]
        mov dword ptr [esp + 18h], 0
        call ext_006B9D10
        mov ebx, dword ptr [esp + 20h]
        mov edi, dword ptr [esp + 24h]
        mov eax, dword ptr [esp + 34h]
        push 0
        push 0
        push ebx
        push edi
        mov ecx, esi
        mov byte ptr [esp + 28h], 1
        mov dword ptr [esi], 995904h
        mov dword ptr [esi + 78h], eax
        call ext_00711D40
        push 0
        push edi
        mov ecx, esi
        call ext_00711F00
        push 0
        call ext_006E9AD0
        add esp, 4
        mov ecx, esi
        push eax
        call ext_00711DA0
        mov ecx, dword ptr [esp + 2Ch]
        push ecx
        push 40h
        mov ecx, esi
        call ext_0071E680
        mov ecx, eax
        call ext_00710F80
        push 1
        push 1
        mov ecx, esi
        call ext_0071E680
        mov ecx, eax
        call ext_00710F80
        mov edx, dword ptr [esp + 28h]
        mov ecx, esi
        push edx
        call ext_00711DC0
        mov eax, dword ptr [esp + 30h]
        test eax, eax
        je SHORT L_709EEF_30
        push 0
        push eax
        mov ecx, esi
        call ext_006FB650
    L_709EEF_30:
        mov eax, dword ptr [ebx]
        push esi
        mov ecx, ebx
        call dword ptr [eax + 0E0h]
        mov ecx, dword ptr [esp + 10h]
        mov eax, esi
        pop edi
        pop esi
        pop ebx
        mov fs:[0], ecx
        add esp, 10h
        ret 18h
    }
}

// [0x0070E490] sub_0070E490 (224 bytes)
extern "C" void ext_006B9D70();
extern "C" void ext_006B9D80();
extern "C" void ext_006D3880();
extern "C" void ext_006E7460();
extern "C" void ext_0070CF00();
extern "C" void ext_0070CF10();
extern "C" void ext_0070CF50();
extern "C" void ext_0070D0B0();
extern "C" void ext_0070D2A0();
extern "C" void ext_0072B2D0();

extern "C" __declspec(naked) void __fastcall fn_0070E490(void* self, int edx_unused, void* arg) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -0x1
        push 0x008bcb18
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x50
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        call ext_0070CF00
        mov ebx, eax
        xor esi, esi
        test ebx, ebx
        jle L_70E4D7
    L_70E4BB:
        mov eax, dword ptr [edi + 0x8]
        push esi
        mov ecx, edi
        mov ebp, dword ptr [eax]
        call ext_0070CF10
        mov ecx, dword ptr [edi + 0x8]
        push eax
        call dword ptr [ebp + 0x84]
        inc esi
        cmp esi, ebx
        jl L_70E4BB
    L_70E4D7:
        mov ecx, edi
        call ext_0070D2A0
        mov ebp, dword ptr [esp + 0x70]
        mov ecx, ebp
        call ext_0070CF00
        xor esi, esi
        mov dword ptr [esp + 0x10], eax
        test eax, eax
        jle L_70E55B
    L_70E4F3:
        mov ecx, dword ptr [edi + 0x8]
        call ext_006D3880
        push esi
        mov ecx, ebp
        mov ebx, eax
        call ext_0070CF10
        push esi
        mov ecx, ebp
        mov dword ptr [esp + 0x74], eax
        call ext_0070CF50
        push eax
        lea ecx, [esp + 0x18]
        call ext_006B9D80
        mov ecx, dword ptr [esp + 0x70]
        mov dword ptr [esp + 0x68], 0x0
        push ecx
        mov ecx, ebx
        call ext_0072B2D0
        lea ecx, [esp + 0x14]
        call ext_006E7460
        push eax
        push ebx
        mov ecx, edi
        call ext_0070D0B0
        lea ecx, [esp + 0x14]
        mov dword ptr [esp + 0x68], 0xffffffff
        call ext_006B9D70
        mov eax, dword ptr [esp + 0x10]
        inc esi
        cmp esi, eax
        jl L_70E4F3
    L_70E55B:
        mov ecx, dword ptr [esp + 0x60]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0x5c
        ret 0x4
    }
}

// [0x00701C10] sub_00701C10 (239 bytes)
extern "C" __declspec(naked) void __fastcall fn_00701C10(void* self) {
    __asm {
        push -1
        push 0x8bb9e4
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 4], esi
        lea ecx, [esi + 0x660]
        mov dword ptr [esp + 0x10], 0xa
        call ext_00712580
        lea ecx, [esi + 0x5c0]
        mov byte ptr [esp + 0x10], 9
        call ext_00711220
        lea ecx, [esi + 0x520]
        mov byte ptr [esp + 0x10], 8
        call ext_00711220
        lea ecx, [esi + 0x498]
        mov byte ptr [esp + 0x10], 7
        call ext_00711220
        lea ecx, [esi + 0x410]
        mov byte ptr [esp + 0x10], 6
        call ext_00711220
        lea ecx, [esi + 0x388]
        mov byte ptr [esp + 0x10], 5
        call ext_00711220
        lea ecx, [esi + 0x300]
        mov byte ptr [esp + 0x10], 4
        call ext_00711220
        lea ecx, [esi + 0x278]
        mov byte ptr [esp + 0x10], 3
        call ext_00711220
        lea ecx, [esi + 0x1f0]
        mov byte ptr [esp + 0x10], 2
        call ext_00711220
        lea ecx, [esi + 0x168]
        mov byte ptr [esp + 0x10], 1
        call ext_00711220
        lea ecx, [esi + 0xe0]
        mov byte ptr [esp + 0x10], 0
        call ext_00711220
        mov ecx, esi
        mov dword ptr [esp + 0x10], 0xffffffff
        call ext_00705450
        mov ecx, dword ptr [esp + 8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x007052F0] sub_007052F0 (240 bytes)
extern "C" void ext_006D2130();
extern "C" void ext_006FA030();
extern "C" int mem_008BBDD4;
extern "C" int mem_00995744;

extern "C" __declspec(naked) void __fastcall fn_007052F0(void* self) {
    __asm {
        push -1
        push offset mem_008BBDD4
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [esp + 0xc], esi
        call ext_006FA030
        xor ebx, ebx
        lea edi, [esi + 0x8c]
        mov dword ptr [esi + 0x40], ebx
        mov dword ptr [esi + 0x44], 0xfffffffe
        push 0x10
        mov dword ptr [esi + 0x4c], ebx
        mov dword ptr [esi + 0x48], ebx
        push 0x10
        mov ecx, edi
        mov dword ptr [esp + 0x20], ebx
        mov dword ptr [esi + 0x50], ebx
        mov dword ptr [esi + 0x54], ebx
        mov dword ptr [esi + 0x58], ebx
        mov dword ptr [esi + 0x5c], ebx
        mov dword ptr [esi + 0x60], ebx
        mov byte ptr [esi + 0x64], 1
        mov dword ptr [esi + 0x68], ebx
        mov dword ptr [esi + 0x6c], ebx
        mov byte ptr [esi + 0x70], bl
        mov dword ptr [esi + 0x74], 0x13df
        mov dword ptr [esi + 0x78], ebx
        mov dword ptr [esi + 0x7c], ebx
        mov dword ptr [esi + 0x80], ebx
        mov dword ptr [esi + 0x84], ebx
        mov dword ptr [esi + 0x88], ebx
        call ext_006D2130
        lea eax, [edi + 0x10]
        mov dword ptr [edi + 0x14], eax
        lea edi, [esi + 0xa4]
        push 4
        push 0x10
        mov ecx, edi
        mov byte ptr [esp + 0x20], 1
        call ext_006D2130
        lea ecx, [edi + 0x10]
        mov dword ptr [edi + 0x14], ecx
        lea edi, [esi + 0xc0]
        push 4
        push 0x10
        mov ecx, edi
        mov byte ptr [esp + 0x20], 2
        mov dword ptr [esi + 0xbc], ebx
        call ext_006D2130
        mov ecx, dword ptr [esp + 0x10]
        lea edx, [edi + 0x10]
        mov dword ptr [edi + 0x14], edx
        mov dword ptr [esi + 0xd8], ebx
        mov dword ptr [esi + 0xdc], ebx
        mov dword ptr [esi], offset mem_00995744
        mov eax, esi
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00704DB0] sub_00704DB0 (255 bytes)
extern "C" void ext_00702360();
extern "C" void ext_00704EB0();

extern "C" __declspec(naked) void __fastcall fn_00704DB0(void* self, int edx_unused, const char* s) {
    __asm {
        push ebp
        mov ebp, dword ptr [esp + 0x8]
        push esi
        push edi
        test ebp, ebp
        mov esi, ecx
        je L_false
        mov edi, ebp
        or ecx, -1
        xor eax, eax
        repne scasb
        not ecx
        dec ecx
        je L_false
        push ebx
        mov ecx, esi
        call ext_00704EB0
        test eax, eax
        je L_skip
        mov ecx, esi
        mov edi, ebp
        call ext_00704EB0
    L_cmp:
        mov dl, byte ptr [eax]
        mov bl, byte ptr [edi]
        mov cl, dl
        cmp dl, bl
        jne L_neq
        test cl, cl
        je L_eq
        mov dl, byte ptr [eax + 0x1]
        mov bl, byte ptr [edi + 0x1]
        mov cl, dl
        cmp dl, bl
        jne L_neq
        add eax, 0x2
        add edi, 0x2
        test cl, cl
        jne L_cmp
    L_eq:
        xor eax, eax
        jmp L_cmpdone
    L_neq:
        sbb eax, eax
        sbb eax, -1
    L_cmpdone:
        test eax, eax
        je L_true
    L_skip:
        mov ecx, dword ptr [esi + 0xf0]
        push ebp
        mov eax, dword ptr [ecx]
        call dword ptr [eax + 0x150]
        mov edx, dword ptr [esi]
        mov ecx, esi
        xor edi, edi
        call dword ptr [edx + 0xc]
        mov ecx, dword ptr [eax + 0x18]
        test ecx, ecx
        jle L_true
    L_loop:
        mov eax, dword ptr [esi]
        mov ecx, esi
        call dword ptr [eax + 0xc]
        mov ecx, dword ptr [eax + 0x14]
        add eax, 0x10
        add ecx, edi
        mov edx, dword ptr [eax]
        lea ecx, [ecx + 2*ecx]
        mov eax, dword ptr [edx + 4*ecx + 0x4]
        lea ecx, [edx + 4*ecx]
        test eax, eax
        je L_zero
        mov edx, dword ptr [eax]
        mov ebx, dword ptr [ecx]
        cmp edx, ebx
        jne L_zero
        mov eax, dword ptr [eax + 0x4]
        jmp L_obj
    L_zero:
        xor eax, eax
    L_obj:
        mov edx, dword ptr [eax]
        mov ecx, eax
        call dword ptr [edx + 0x12c]
        mov ebx, eax
        mov ecx, ebx
        mov eax, dword ptr [ebx]
        call dword ptr [eax + 0x8]
        cmp eax, 0x2
        jne L_next
        mov ecx, esi
        call ext_00704EB0
        push eax
        mov ecx, ebx
        call ext_00702360
    L_next:
        mov edx, dword ptr [esi]
        mov ecx, esi
        inc edi
        call dword ptr [edx + 0xc]
        cmp edi, dword ptr [eax + 0x18]
        jl L_loop
    L_true:
        pop ebx
        pop edi
        pop esi
        mov al, 0x1
        pop ebp
        ret 0x4
    L_false:
        pop edi
        pop esi
        xor al, al
        pop ebp
        ret 0x4
    }
}

// [0x007023E0] sub_007023E0 (32 bytes)
extern "C" void __fastcall fn_007023E0(void* self, int edx_unused, char a1) {
    char* p = *(char**)((char*)self + 0x268);
    *(p + 0x408) = a1;
}

// [0x00702620] sub_00702620 (32 bytes)
extern "C" __declspec(naked) void __fastcall fn_00702620(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        mov ecx, dword ptr [ecx + 0x268]
        test eax, eax
        sete al
        mov byte ptr [ecx + 0x270], al
        ret 0x4
    }
}

// [0x00702640] sub_00702640 (32 bytes)
extern "C" __declspec(naked) int __fastcall fn_00702640(void* self) {
    __asm {
        mov eax, dword ptr [ecx + 0x268]
        xor ecx, ecx
        mov dl, byte ptr [eax + 0x270]
        test dl, dl
        sete cl
        mov eax, ecx
        ret
    }
}

// [0x007027A0] sub_007027A0 (32 bytes)
extern "C" void __fastcall fn_007027A0(char* self, int edx_unused, int a1) {
    *(int*)(*(char**)(self + 0x268) + 0x1e8) = a1;
}

// [0x00705190] sub_00705190 (32 bytes)
extern "C" __declspec(naked) void __fastcall fn_00705190(void* self) {
    __asm {
        mov ecx, dword ptr [ecx + 0xf0]
        add ecx, 0x7d0
        jmp ext_006E7460
    }
}

// [0x00706AF0] sub_00706AF0 (32 bytes)
extern "C" int mem_00B5D268;
extern "C" __declspec(naked) void __fastcall fn_00706AF0(void* self) {
    __asm {
        mov eax, dword ptr [ecx + 0x58]
        test eax, eax
        jne short L_has_value
        mov eax, offset mem_00B5D268
    L_has_value:
        mov ecx, eax
        jmp ext_006E7460
    }
}

// [0x00706EF0] sub_00706EF0 (32 bytes)
extern "C" __declspec(naked) void __fastcall fn_00706EF0(void* self) {
    __asm {
        mov eax, dword ptr [ecx + 0x5c]
        test eax, eax
        jne short L_has_value
        mov eax, offset mem_00B5D268
    L_has_value:
        mov ecx, eax
        jmp ext_006E7460
    }
}

// [0x00708AE0] sub_00708AE0 (32 bytes)
extern "C" void* __fastcall fn_00708AE0(void* self) {
    int* p = (int*)self;
    p[6] = 0;
    p[4] = 0;
    p[2] = 0;
    p[0] = 0;
    p[7] = 0;
    p[5] = 0;
    p[3] = 0;
    p[1] = 0;
    return self;
}

// [0x00703B80] sub_00703B80 (32 bytes)
extern "C" void ext_0074AE20();
extern "C" __declspec(naked) void __fastcall fn_00703B80(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        add ecx, 0x258
        push eax
        call ext_0074AE20
        ret 0x4
    }
}

// [0x00703BB0] sub_00703BB0 (32 bytes)
extern "C" __declspec(naked) void __fastcall fn_00703BB0(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        add ecx, 0x248
        push eax
        call ext_0074AE20
        ret 0x4
    }
}

// [0x00705790] sub_00705790 (32 bytes)
extern "C" void ext_006FA350();
extern "C" __declspec(naked) void __fastcall fn_00705790(void* self, int edx_unused, unsigned int a1, unsigned int a2) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        cmp eax, 0x98abd146
        je short L_self
        mov edx, dword ptr [esp + 0x8]
        push edx
        push eax
        call ext_006FA350
        ret 8
    L_self:
        mov eax, ecx
        ret 8
    }
}

extern "C" void ext_006B9960();

// [0x00705D70] sub_00705D70 (32 bytes)
extern "C" __declspec(naked) void __fastcall fn_00705D70(void* self) {
    __asm {
        mov ecx, dword ptr [esp + 0x8]
        call ext_006B9960
        mov ecx, dword ptr [esp + 0x4]
        test ecx, ecx
        je done
        mov eax, dword ptr [ecx]
        jmp dword ptr [eax + 0x84]
done:
        ret
    }
}

// [0x0070CED0] sub_0070CED0 (32 bytes)
extern "C" __declspec(naked) void __fastcall fn_0070CED0(void* self) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        add ecx, 0x40
        mov dword ptr [esp + 0x4], eax
        lea edx, [esp + 0x4]
        mov eax, dword ptr [ecx]
        push edx
        push eax
        call ext_006D2170
        ret 0x4
    }
}

// [0x007008F0] sub_007008F0 (32 bytes)
extern "C" void ext_006B9950();
extern "C" void ext_006E7460();
extern "C" __declspec(naked) void __fastcall fn_007008F0(void* self) {
    __asm {
        push esi
        lea esi, [ecx + 0x10]
        mov ecx, esi
        call ext_006B9950
        test al, al
        je second
        xor eax, eax
        pop esi
        ret
    second:
        mov ecx, esi
        call ext_006E7460
        pop esi
        ret
    }
}

// [0x007009E0] sub_007009E0 (32 bytes)
extern "C" void ext_006C94F0();
extern "C" void ext_006DC460();
extern "C" void ext_006C9F70();
extern "C" __declspec(naked) void __fastcall fn_007009E0(void* self) {
    __asm {
        mov ecx, dword ptr [ecx + 0x4]
        call ext_006DC460
        mov ecx, eax
        call ext_006C94F0
        mov ecx, eax
        jmp ext_006C9F70
    }
}

// [0x00700A00] sub_00700A00 (32 bytes)
extern "C" void ext_006C9500();
extern "C" void ext_006DC460();
extern "C" void ext_006C9F70();
extern "C" __declspec(naked) void __fastcall fn_00700A00(void* self) {
    __asm {
        mov ecx, dword ptr [ecx + 0x4]
        call ext_006DC460
        mov ecx, eax
        call ext_006C9500
        mov ecx, eax
        jmp ext_006C9F70
    }
}

// [0x00700A20] sub_00700A20 (32 bytes)
extern "C" void ext_006C9510();
extern "C" void ext_006DC460();
extern "C" void ext_006C9F70();
extern "C" __declspec(naked) void __fastcall fn_00700A20(void* self) {
    __asm {
        mov ecx, dword ptr [ecx + 0x4]
        call ext_006DC460
        mov ecx, eax
        call ext_006C9510
        mov ecx, eax
        jmp ext_006C9F70
    }
}

// [0x0070A1D0] sub_0070A1D0 (32 bytes)
extern "C" void ext_006A5C5C();
extern "C" void ext_0070A1F0();

extern "C" __declspec(naked) void* __fastcall fn_0070A1D0(void* self, int edx_unused, int flag) {
    __asm {
        push esi
        mov esi, ecx
        call ext_0070A1F0
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

// [0x0070BE80] sub_0070BE80 (32 bytes)
extern "C" void ext_006DC460();
extern "C" void ext_006C98D0();
extern "C" void ext_006C9F70();
extern "C" __declspec(naked) void __fastcall fn_0070BE80(void* self) {
    __asm {
        call ext_006DC460
        mov ecx, eax
        call ext_006C98D0
        mov ecx, eax
        jmp ext_006C9F70
    }
}

// [0x0070BFD0] sub_0070BFD0 (32 bytes)
extern "C" void ext_006C98E0();
extern "C" void ext_006DC460();
extern "C" void ext_006C9F70();
extern "C" __declspec(naked) void __fastcall fn_0070BFD0(void* self) {
    __asm {
        call ext_006DC460
        mov ecx, eax
        call ext_006C98E0
        mov ecx, eax
        jmp ext_006C9F70
    }
}

// [0x007008D0] sub_007008D0 (32 bytes)
extern "C" __declspec(naked) bool __fastcall fn_007008D0(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        add ecx, 0x10
        push eax
        call ext_006B9EC0
        mov al, 0x1
        ret 0x4
    }
}

// [0x00702B40] sub_00702B40 (32 bytes)
extern "C" void ext_00708000();

extern "C" __declspec(naked) void __fastcall fn_00702B40(void* self) {
    __asm {
        mov ecx, dword ptr [ecx + 0x268]
        push 0xaabae4
        call ext_00708000
        mov edx, dword ptr [eax]
        mov ecx, eax
        jmp dword ptr [edx + 0x7c]
    }
}

// [0x00703B60] sub_00703B60 (32 bytes)
extern "C" void ext_006B9EC0();
extern "C" __declspec(naked) void __fastcall fn_00703B60(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        add ecx, 0x1ac
        push eax
        call ext_006B9EC0
        ret 0x4
    }
}

// [0x00705170] sub_00705170 (32 bytes)
extern "C" void ext_006B9EC0();
extern "C" __declspec(naked) void __fastcall fn_00705170(void* self) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        mov ecx, dword ptr [ecx + 0xf0]
        push eax
        add ecx, 0x7d0
        call ext_006B9EC0
        ret 0x4
    }
}

// [0x007055D0] sub_007055D0 (32 bytes)
extern "C" void ext_007055F0();
extern "C" __declspec(naked) void __stdcall fn_007055D0(int a1, int a2) {
    __asm {
        mov edx, dword ptr [esp + 0x8]
        sub esp, 0x8
        mov eax, esp
        mov dword ptr [eax + 0x4], edx
        mov edx, dword ptr [esp + 0xc]
        mov dword ptr [eax], edx
        call ext_007055F0
        ret 0x8
    }
}
