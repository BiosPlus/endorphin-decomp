// Decompiled translation unit: src/leaf/decompiled_700000.cpp
extern "C" const char* __fastcall ext_00706380(void* self);
extern "C" void ext_006CD320();
extern "C" void ext_006E7440();

extern "C" void ext_006E7440();
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
extern "C" void ext_0070CF00();
extern "C" void ext_006E7460();

extern "C" void ext_006E7460();
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
extern "C" void ext_0070E160();
extern "C" void ext_006B9D70();
extern "C" void ext_0077FA20();

extern "C" void ext_0077FA20();
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
extern "C" void ext_00712000();
extern "C" void ext_00704EC0();
extern "C" void ext_00704FD0();

extern "C" void ext_00704FD0();
extern "C" int __fastcall ext_006BADB0(void* obj);
extern "C" void ext_006B9EC0();
extern "C" void __fastcall fn_0070EA70(void* self, int edx_unused, void* a1) {
    if (a1) {
        *(void**)((char*)self + 8) = a1;
        int v = ext_006BADB0(a1);
        ((void (__thiscall *)(void*, int))ext_006B9EC0)((char*)self + 12, v);
    }
}
extern "C" void ext_006FA8F0();
extern "C" void __stdcall ext_006FA920(void* a1);
extern "C" int mem_00B5D268;
extern "C" void ext_0070FB00();
extern "C" int mem_00B5D2C0;
extern "C" void ext_006D2250();
extern "C" void* mem_009251D8;

extern "C" void* mem_009251D8;
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
extern "C" void ext_006DD040();
extern "C" void ext_00711A50();

extern "C" void ext_00711A50();
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
extern "C" void ext_006FAD00();
extern "C" void ext_006FAC10();
extern "C" void ext_007055F0();
extern "C" int mem_00B5EB78;

extern "C" int mem_00B5EB78;
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

// [0x0070BB60] sub_0070BB60 (32 bytes)
extern "C" void ext_006B9EC0();
extern "C" __declspec(naked) void __fastcall fn_0070BB60(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        add ecx, 0xf4
        push eax
        call ext_006B9EC0
        ret 0x4
    }
}

// [0x0070C350] sub_0070C350 (32 bytes)
extern "C" void ext_0070BE00();
extern "C" __declspec(naked) void __stdcall fn_0070C350(int a1, int a2) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        mov edx, dword ptr [esp + 0x4]
        push eax
        push edx
        call ext_0070BE00
        ret 0x8
    }
}

// [0x0070C380] sub_0070C380 (32 bytes)
extern "C" void ext_0070BEA0();
extern "C" __declspec(naked) void __stdcall fn_0070C380(int a1, int a2) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        mov edx, dword ptr [esp + 0x4]
        push eax
        push edx
        call ext_0070BEA0
        ret 0x8
    }
}

// [0x0070E390] sub_0070E390 (32 bytes)
extern "C" void ext_00717720();

extern "C" __declspec(naked) void* __fastcall fn_0070E390(void* self, int edx_unused, void* a1) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        add ecx, 0xd0
        push ecx
        mov ecx, esi
        call ext_00717720
        mov eax, esi
        pop esi
        ret 0x4
    }
}

// [0x0070E3B0] sub_0070E3B0 (32 bytes)
extern "C" void ext_0070E390();

extern "C" __declspec(naked) void __fastcall fn_0070E3B0(void* self, int edx_unused, void* a1) {
    __asm {
        add ecx, 0xd0
        push ecx
        mov ecx, dword ptr [esp + 0x8]
        call ext_0070E390
        ret 0x4
    }
}

// [0x0070EC30] sub_0070EC30 (32 bytes)
extern "C" void ext_007873F0();
extern "C" __declspec(naked) void __fastcall fn_0070EC30(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        add ecx, 0x168
        push eax
        call ext_007873F0
        ret 0x4
    }
}

// [0x0070EC50] sub_0070EC50 (32 bytes)
extern "C" __declspec(naked) void __fastcall fn_0070EC50(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        add ecx, 0x148
        push eax
        call ext_007873F0
        ret 0x4
    }
}

// [0x0070EC70] sub_0070EC70 (32 bytes)
extern "C" void ext_007873F0();
extern "C" __declspec(naked) void __fastcall fn_0070EC70(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        add ecx, 0x188
        push eax
        call ext_007873F0
        ret 0x4
    }
}

// [0x0070EC90] sub_0070EC90 (32 bytes)
extern "C" void ext_007873F0();
extern "C" __declspec(naked) void __fastcall fn_0070EC90(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        add ecx, 0x1c8
        push eax
        call ext_007873F0
        ret 0x4
    }
}

// [0x0070ECB0] sub_0070ECB0 (32 bytes)
extern "C" __declspec(naked) void __fastcall fn_0070ECB0(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        add ecx, 0x1a8
        push eax
        call ext_007873F0
        ret 0x4
    }
}

// [0x0070ECD0] sub_0070ECD0 (32 bytes)
extern "C" __declspec(naked) void __fastcall fn_0070ECD0(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        add ecx, 0x1e8
        push eax
        call ext_007873F0
        ret 0x4
    }
}

// [0x0070ECF0] sub_0070ECF0 (32 bytes)
extern "C" void ext_007873F0();
extern "C" __declspec(naked) void __fastcall fn_0070ECF0(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        add ecx, 0x228
        push eax
        call ext_007873F0
        ret 0x4
    }
}

// [0x0070ED10] sub_0070ED10 (32 bytes)
extern "C" __declspec(naked) void __fastcall fn_0070ED10(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        add ecx, 0x208
        push eax
        call ext_007873F0
        ret 0x4
    }
}

// [0x0070ED30] sub_0070ED30 (32 bytes)
extern "C" void ext_007873F0();
extern "C" __declspec(naked) void __fastcall fn_0070ED30(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        add ecx, 0x248
        push eax
        call ext_007873F0
        ret 0x4
    }
}

// [0x0070ED50] sub_0070ED50 (32 bytes)
extern "C" __declspec(naked) void __fastcall fn_0070ED50(void* self, int edx_unused, void* a1) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        add ecx, 0x168
        push ecx
        mov ecx, esi
        call ext_007873F0
        mov eax, esi
        pop esi
        ret 0x4
    }
}

// [0x0070ED70] sub_0070ED70 (32 bytes)
extern "C" __declspec(naked) void __fastcall fn_0070ED70(void* self, int edx_unused, void* a1) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        add ecx, 0x148
        push ecx
        mov ecx, esi
        call ext_007873F0
        mov eax, esi
        pop esi
        ret 0x4
    }
}

// [0x0070ED90] sub_0070ED90 (32 bytes)
extern "C" __declspec(naked) void* __fastcall fn_0070ED90(void* self, int edx_unused, void* a1) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        add ecx, 0x188
        push ecx
        mov ecx, esi
        call ext_007873F0
        mov eax, esi
        pop esi
        ret 0x4
    }
}

// [0x0070EDB0] sub_0070EDB0 (32 bytes)
extern "C" void ext_007873F0();
extern "C" __declspec(naked) void* __fastcall fn_0070EDB0(void* self, int edx_unused, void* a1) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        add ecx, 0x1c8
        push ecx
        mov ecx, esi
        call ext_007873F0
        mov eax, esi
        pop esi
        ret 0x4
    }
}

// [0x0070EDD0] sub_0070EDD0 (32 bytes)
extern "C" __declspec(naked) void* __fastcall fn_0070EDD0(void* self, int edx_unused, void* a1) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        add ecx, 0x1a8
        push ecx
        mov ecx, esi
        call ext_007873F0
        mov eax, esi
        pop esi
        ret 0x4
    }
}

// [0x0070EDF0] sub_0070EDF0 (32 bytes)
extern "C" __declspec(naked) void* __fastcall fn_0070EDF0(void* self, int edx_unused, void* a1) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        add ecx, 0x1e8
        push ecx
        mov ecx, esi
        call ext_007873F0
        mov eax, esi
        pop esi
        ret 0x4
    }
}

// [0x0070EE10] sub_0070EE10 (32 bytes)
extern "C" void ext_007873F0();
extern "C" __declspec(naked) void* __fastcall fn_0070EE10(void* self, int edx_unused, void* a1) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        add ecx, 0x228
        push ecx
        mov ecx, esi
        call ext_007873F0
        mov eax, esi
        pop esi
        ret 0x4
    }
}

// [0x0070EE30] sub_0070EE30 (32 bytes)
extern "C" void ext_007873F0();
extern "C" __declspec(naked) void* __fastcall fn_0070EE30(void* self, int edx_unused, void* a1) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        add ecx, 0x208
        push ecx
        mov ecx, esi
        call ext_007873F0
        mov eax, esi
        pop esi
        ret 0x4
    }
}

// [0x0070EE50] sub_0070EE50 (32 bytes)
extern "C" __declspec(naked) void* __fastcall fn_0070EE50(void* self, int edx_unused, void* a1) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        add ecx, 0x248
        push ecx
        mov ecx, esi
        call ext_007873F0
        mov eax, esi
        pop esi
        ret 0x4
    }
}

// [0x0070EE70] sub_0070EE70 (32 bytes)
extern "C" void ext_007873F0();
extern "C" __declspec(naked) void* __fastcall fn_0070EE70(void* self, int edx_unused, void* a1) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        add ecx, 0x290
        push ecx
        mov ecx, esi
        call ext_007873F0
        mov eax, esi
        pop esi
        ret 0x4
    }
}

// [0x0070EE90] sub_0070EE90 (32 bytes)
extern "C" void ext_007873F0();
extern "C" __declspec(naked) void* __fastcall fn_0070EE90(void* self, int edx_unused, void* a1) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        add ecx, 0x270
        push ecx
        mov ecx, esi
        call ext_007873F0
        mov eax, esi
        pop esi
        ret 0x4
    }
}

// [0x0070EEB0] sub_0070EEB0 (32 bytes)
extern "C" __declspec(naked) void* __fastcall fn_0070EEB0(void* self, int edx_unused, void* a1) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        add ecx, 0x2b0
        push ecx
        mov ecx, esi
        call ext_007873F0
        mov eax, esi
        pop esi
        ret 0x4
    }
}

// [0x00702430] sub_00702430 (48 bytes)
extern "C" void __fastcall fn_00702430(void* self, int edx_unused, int a1, int a2, int a3, int a4) {
    char* p = (char*)self;
    *(int*)(p + 0xf8) = a1;
    *(int*)(p + 0xfc) = a3;
    *(int*)(p + 0x100) = a2;
    *(int*)(p + 0x104) = a4;
}

// [0x00702750] sub_00702750 (48 bytes)
extern "C" void __fastcall fn_00702750(void* self, int edx_unused, int a1, int a2) {
    char* p = (char*)self;
    char* sub = *(char**)(p + 0x268);
    *(int*)(sub + 0x490) = a1;
    sub = *(char**)(p + 0x268);
    *(int*)(sub + 0x518) = a2;
}

// [0x007027C0] sub_007027C0 (48 bytes)
extern "C" __declspec(naked) void __fastcall fn_007027C0(void* self) {
    __asm {
        mov ecx, dword ptr [ecx + 0x268]
        push esi
        add ecx, 0x168
        push 0
        push 0
        push 0
        mov eax, dword ptr [ecx]
        lea esi, [ecx + 0x80]
        push esi
        call dword ptr [eax + 0x88]
        mov eax, dword ptr [esi]
        pop esi
        ret
    }
}

// [0x0070EBC0] sub_0070EBC0 (48 bytes)
extern "C" __declspec(naked) void* __fastcall fn_0070EBC0(void* self, int edx_unused, void* arg) {
    __asm {
        push ecx
        push esi
        mov esi, dword ptr [esp + 0xc]
        add ecx, 0xac
        mov dword ptr [esp + 0x4], 0
        push ecx
        mov ecx, esi
        call ext_006B9D20
        mov eax, esi
        pop esi
        pop ecx
        ret 0x4
    }
}

// [0x0070EBF0] sub_0070EBF0 (48 bytes)
extern "C" __declspec(naked) void* __fastcall fn_0070EBF0(void* self, int edx_unused, void* arg) {
    __asm {
        push ecx
        push esi
        mov esi, dword ptr [esp + 0xc]
        add ecx, 0xf8
        mov dword ptr [esp + 0x4], 0
        push ecx
        mov ecx, esi
        call ext_006B9D20
        mov eax, esi
        pop esi
        pop ecx
        ret 0x4
    }
}

extern "C" void ext_00717570();

// [0x0070F210] sub_0070F210 (48 bytes)
extern "C" __declspec(naked) void* __fastcall fn_0070F210(void* self, int edx_unused, void* arg) {
    __asm {
        lea eax, [ecx + 0x188]
        push esi
        mov esi, dword ptr [esp + 0x8]
        lea edx, [ecx + 0x168]
        push eax
        add ecx, 0x148
        push edx
        push ecx
        mov ecx, esi
        call ext_00717570
        mov eax, esi
        pop esi
        ret 0x4
    }
}

// [0x0070F240] sub_0070F240 (48 bytes)
extern "C" __declspec(naked) void* __fastcall fn_0070F240(void* self, int edx_unused, void* arg) {
    __asm {
        lea eax, [ecx + 0x1e8]
        push esi
        mov esi, dword ptr [esp + 0x8]
        lea edx, [ecx + 0x1c8]
        push eax
        add ecx, 0x1a8
        push edx
        push ecx
        mov ecx, esi
        call ext_00717570
        mov eax, esi
        pop esi
        ret 0x4
    }
}

// [0x0070F270] sub_0070F270 (48 bytes)
// [0x0070F270] sub_0070F270 (48 bytes)
extern "C" __declspec(naked) void* __fastcall fn_0070F270(void* self, int edx_unused, void* arg) {
    __asm {
        lea eax, [ecx + 0x248]
        push esi
        mov esi, dword ptr [esp + 0x8]
        lea edx, [ecx + 0x228]
        push eax
        add ecx, 0x208
        push edx
        push ecx
        mov ecx, esi
        call ext_00717570
        mov eax, esi
        pop esi
        ret 0x4
    }
}

// [0x0070F2A0] sub_0070F2A0 (48 bytes)
extern "C" __declspec(naked) void* __fastcall fn_0070F2A0(void* self, int edx_unused, void* arg) {
    __asm {
        lea eax, [ecx + 0x2b0]
        push esi
        mov esi, dword ptr [esp + 0x8]
        lea edx, [ecx + 0x290]
        push eax
        add ecx, 0x270
        push edx
        push ecx
        mov ecx, esi
        call ext_00717570
        mov eax, esi
        pop esi
        ret 0x4
    }
}

// [0x007094A0] sub_007094A0 (64 bytes)
extern "C" int mem_00B5EB78;

extern "C" __declspec(naked) void* __cdecl fn_007094A0(void* arg) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        mov eax, dword ptr [esi + 0x8]
        test eax, eax
        je done_walk
    walk_loop:
        mov esi, eax
        mov eax, dword ptr [esi + 0x8]
        test eax, eax
        jne walk_loop
    done_walk:
        test esi, esi
        je fail
        mov ecx, dword ptr [mem_00B5EB78]
        mov eax, dword ptr [esi]
        push ecx
        mov ecx, esi
        call dword ptr [eax + 0x14]
        test al, al
        je fail
        mov eax, esi
        pop esi
        ret
    fail:
        xor eax, eax
        pop esi
        ret
    }
}

// [0x0070CE90] sub_0070CE90 (64 bytes)
extern "C" __declspec(naked) void __fastcall fn_0070CE90(void* self, int idx) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        mov esi, ecx
        test edi, edi
        jl short L_fail
        call ext_006CD320
        cmp edi, eax
        jge short L_fail
        mov eax, dword ptr [esi + 0x50]
        mov eax, dword ptr [eax + 4*edi]
        pop edi
        pop esi
        ret 4
L_fail:
        push 0
        lea ecx, [esi + 0x150]
        call ext_006E7440
        pop edi
        xor eax, eax
        pop esi
        ret 4
    }
}

// [0x0070CF10] sub_0070CF10 (64 bytes)
extern "C" void ext_0070CF00();
extern "C" __declspec(naked) void __fastcall fn_0070CF10(void* self, int idx) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        mov esi, ecx
        test edi, edi
        jl short L_fail
        call ext_0070CF00
        cmp edi, eax
        jge short L_fail
        mov eax, dword ptr [esi + 0x68]
        mov eax, dword ptr [eax + 4*edi]
        pop edi
        pop esi
        ret 4
L_fail:
        push 0
        lea ecx, [esi + 0x150]
        call ext_006E7440
        pop edi
        xor eax, eax
        pop esi
        ret 4
    }
}

// [0x0070CF50] sub_0070CF50 (64 bytes)
extern "C" __declspec(naked) int __fastcall fn_0070CF50(void* self, int edx_unused, int a1) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        mov esi, ecx
        test edi, edi
        jl fail
        call ext_0070CF00
        cmp edi, eax
        jge fail
        mov eax, dword ptr [esi + 0x80]
        mov ecx, dword ptr [eax + 4*edi]
        call ext_006E7460
        pop edi
        pop esi
        ret 4
    fail:
        push 0
        lea ecx, [esi + 0x150]
        call ext_006E7440
        pop edi
        xor eax, eax
        pop esi
        ret 4
    }
}

// [0x007023A0] sub_007023A0 (64 bytes)
extern "C" void ext_006B9EC0();
extern "C" void ext_007022C0();

extern "C" __declspec(naked) void __fastcall fn_007023A0(void* self, int edx_unused, const char* s) {
    __asm {
        push ebx
        push esi
        mov esi, dword ptr [esp + 0xc]
        mov ebx, ecx
        test esi, esi
        je fail
        push edi
        mov edi, esi
        or ecx, -1
        xor eax, eax
        repne scasb
        not ecx
        dec ecx
        pop edi
        je fail
        push esi
        lea ecx, [ebx + 0x160]
        call ext_006B9EC0
        push esi
        mov ecx, ebx
        call ext_007022C0
        pop esi
        mov al, 1
        pop ebx
        ret 4
    fail:
        pop esi
        xor al, al
        pop ebx
        ret 4
    }
}

// [0x0070D8A0] sub_0070D8A0 (64 bytes)
extern "C" void ext_0070D8E0();

extern "C" __declspec(naked) void __fastcall fn_0070D8A0(void* self) {
    __asm {
        push ebx
        mov ebx, ecx
        push esi
        push edi
        mov eax, dword ptr [ebx + 0x4]
        test eax, eax
        je out_
        call ext_0070CF00
        mov edi, eax
        xor esi, esi
        test edi, edi
        jle out_
        push ebp
        mov ebp, dword ptr [esp + 0x14]
    loop_:
        push esi
        push ebp
        mov ecx, ebx
        call ext_0070D8E0
        inc esi
        cmp esi, edi
        jl loop_
        pop ebp
    out_:
        pop edi
        pop esi
        pop ebx
        ret 4
    }
}

// [0x0070DCC0] sub_0070DCC0 (64 bytes)
extern "C" __declspec(naked) void __fastcall fn_0070DCC0(void* self) {
    __asm {
        push ebx
        mov ebx, ecx
        push esi
        push edi
        mov eax, dword ptr [ebx + 0x4]
        test eax, eax
        je done
        call ext_0070CF00
        mov edi, eax
        xor esi, esi
        test edi, edi
        jle done
        push ebp
        mov ebp, dword ptr [esp + 0x14]
    loop_top:
        push esi
        push ebp
        mov ecx, ebx
        call ext_0070E160
        inc esi
        cmp esi, edi
        jl loop_top
        pop ebp
    done:
        pop edi
        pop esi
        pop ebx
        ret 0x4
    }
}

// [0x0070DC80] sub_0070DC80 (64 bytes)
extern "C" void ext_0070DDB0();
extern "C" __declspec(naked) void __fastcall fn_0070DC80(void* self, int edx_unused, int a1) {
    __asm {
        push ebx
        mov ebx, ecx
        push esi
        push edi
        mov eax, dword ptr [ebx + 0x4]
        test eax, eax
        je done
        call ext_0070CF00
        mov edi, eax
        xor esi, esi
        test edi, edi
        jle done
        push ebp
        mov ebp, dword ptr [esp + 0x14]
    loop_top:
        push esi
        push ebp
        mov ecx, ebx
        call ext_0070DDB0
        inc esi
        cmp esi, edi
        jl loop_top
        pop ebp
    done:
        pop edi
        pop esi
        pop ebx
        ret 0x4
    }
}

// [0x00702360] sub_00702360 (64 bytes)
extern "C" void ext_006B9EC0();
extern "C" void ext_00702220();

extern "C" __declspec(naked) char __fastcall fn_00702360(void* self, int edx_unused, const char* s) {
    __asm {
        push ebx
        push esi
        mov esi, dword ptr [esp + 0xc]
        mov ebx, ecx
        test esi, esi
        je zero
        push edi
        mov edi, esi
        or ecx, -1
        xor eax, eax
        repne scasb
        not ecx
        dec ecx
        pop edi
        je zero
        push esi
        lea ecx, [ebx + 0x114]
        call ext_006B9EC0
        push esi
        mov ecx, ebx
        call ext_00702220
        pop esi
        mov al, 1
        pop ebx
        ret 4
    zero:
        pop esi
        xor al, al
        pop ebx
        ret 4
    }
}

// [0x0070EAB0] sub_0070EAB0 (64 bytes)
extern "C" int __fastcall ext_006BADB0(void* obj);
extern "C" void ext_006B9EC0();

extern "C" __declspec(naked) void __fastcall fn_0070EAB0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 0x8]
        test ecx, ecx
        mov dword ptr [esi + 0x5c], ecx
        je fallback
        call ext_006BADB0
        push eax
        lea ecx, [esi + 0x60]
        call ext_006B9EC0
        pop esi
        ret 0x4
    fallback:
        push 0xb5d2c0
        lea ecx, [esi + 0x60]
        call ext_006B9EC0
        pop esi
        ret 0x4
    }
}

// [0x0070CF90] sub_0070CF90 (64 bytes)
extern "C" void ext_0070CFD0();
extern "C" void ext_006DEEC0();
extern "C" __declspec(naked) int __fastcall fn_0070CF90(void* self, int edx_unused, int a1, int a2) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr [esp + 0xc]
        push eax
        push ecx
        mov ecx, edi
        xor esi, esi
        call ext_0070CFD0
        test eax, eax
        je cf90_fail
        mov ecx, eax
        call ext_006DEEC0
        mov esi, eax
        test esi, esi
        jne cf90_done
    cf90_fail:
        push 9
        lea ecx, [edi + 0x150]
        call ext_006E7440
    cf90_done:
        mov eax, esi
        pop edi
        pop esi
        ret 8
    }
}

// [0x0070EB00] sub_0070EB00 (64 bytes)
extern "C" int __fastcall ext_006BADB0(void* obj);
extern "C" void ext_006B9EC0();
extern "C" __declspec(naked) void __fastcall fn_0070EB00(void* self) {
    __asm {
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], 0
        mov ecx, dword ptr [esi + 0x5c]
        test ecx, ecx
        je skip
        call ext_006BADB0
        push eax
        lea ecx, [esi + 0x60]
        call ext_006B9EC0
    skip:
        add esi, 0x60
        push esi
        mov esi, dword ptr [esp + 0x10]
        mov ecx, esi
        call ext_006B9D20
        mov eax, esi
        pop esi
        pop ecx
        ret 0x4
    }
}

// [0x0070E3D0] sub_0070E3D0 (64 bytes)
extern "C" void ext_006FE010();
extern "C" void ext_0070E3B0();
extern "C" void ext_0070E410();
extern "C" void ext_0070E490();

extern "C" __declspec(naked) void* __fastcall fn_0070E3D0(void* self, int edx_unused, void* a1) {
    __asm {
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr [esp + 0xc]
        mov eax, dword ptr [esi + 0x8]
        push eax
        push edi
        call ext_006FE010
        push edi
        mov ecx, esi
        call ext_0070E410
        push edi
        mov ecx, esi
        call ext_0070E490
        push edi
        mov ecx, esi
        call ext_0070E3B0
        mov eax, esi
        pop edi
        pop esi
        ret 0x4
    }
}

// [0x0070F2E0] sub_0070F2E0 (80 bytes)
extern "C" void ext_006D2170();
extern "C" __declspec(naked) void __fastcall fn_0070F2E0(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        test eax, eax
        mov esi, ecx
        jl done
        mov edx, dword ptr [esi + 0x2d0]
        lea ecx, [esi + 0x2d0]
        mov dword ptr [esp + 0x8], eax
        lea eax, [esp + 0x8]
        push eax
        push edx
        call ext_006D2170
        mov eax, dword ptr [esp + 0xc]
        mov edx, dword ptr [esp + 0x10]
        lea ecx, [esi + 0x2e8]
        mov dword ptr [esp + 0xc], eax
        mov dword ptr [esp + 0x10], edx
        lea eax, [esp + 0xc]
        mov edx, dword ptr [ecx]
        push eax
        push edx
        call ext_006D2170
    done:
        pop esi
        ret 0xc
    }
}

// [0x0070C010] sub_0070C010 (80 bytes)
extern "C" void ext_006D80A0();
extern "C" void ext_0070BB80();

extern "C" __declspec(naked) void __fastcall fn_0070C010(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8b9338
        push eax
        mov dword ptr fs:[0x0], esp
        lea eax, [esp + 0x10]
        mov dword ptr [esp + 0x8], 0
        push eax
        call ext_0070BB80
        lea ecx, [esp + 0x10]
        mov dword ptr [esp + 0x8], -1
        call ext_006D80A0
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x00
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret 0x20
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
    }
}

// [0x0070C0E0] sub_0070C0E0 (80 bytes)
extern "C" void ext_006D80A0();
extern "C" void ext_0070BC20();
extern "C" int mem_008B9338;

extern "C" __declspec(naked) void __fastcall fn_0070C0E0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8b9338
        push eax
        mov dword ptr fs:[0], esp
        lea eax, [esp + 0x10]
        mov dword ptr [esp + 0x8], 0
        push eax
        call ext_0070BC20
        lea ecx, [esp + 0x10]
        mov dword ptr [esp + 0x8], -1
        call ext_006D80A0
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x00
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x20
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
    }
}

// [0x0070C280] sub_0070C280 (80 bytes)
extern "C" void ext_006D80A0();
extern "C" void ext_0070BD60();
extern "C" int mem_008B9338;

extern "C" __declspec(naked) void __fastcall fn_0070C280(void* self) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8b9338
        push eax
        mov dword ptr fs:[0], esp
        lea eax, [esp + 0x10]
        mov dword ptr [esp + 0x8], 0
        push eax
        call ext_0070BD60
        lea ecx, [esp + 0x10]
        mov dword ptr [esp + 0x8], -1
        call ext_006D80A0
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x00
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x20
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
    }
}

// [0x0070C1B0] sub_0070C1B0 (80 bytes)
extern "C" void ext_006D80A0();
extern "C" void ext_0070BCC0();
extern "C" int mem_008B9338;

extern "C" __declspec(naked) void __fastcall fn_0070C1B0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8b9338
        push eax
        mov dword ptr fs:[0], esp
        lea eax, [esp + 0x10]
        mov dword ptr [esp + 0x8], 0
        push eax
        call ext_0070BCC0
        lea ecx, [esp + 0x10]
        mov dword ptr [esp + 0x8], -1
        call ext_006D80A0
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x00
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x20
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
    }
}

// [0x0070BF00] sub_0070BF00 (80 bytes)
extern "C" void ext_006C98F0();
extern "C" void ext_006C9F70();
extern "C" void ext_006DC460();
extern "C" int mem_00995B48;
extern "C" int mem_0092A278;
extern "C" int mem_0092A270;
extern "C" __declspec(naked) void __fastcall fn_0070BF00(void* self) {
    __asm {
        call ext_006DC460
        mov ecx, eax
        call ext_006C98F0
        mov ecx, eax
        call ext_006C9F70
        fmul qword ptr [mem_00995B48]
        fcom qword ptr [mem_0092A278]
        fnstsw ax
        test ah, 0x01
        je check_upper
        fstp st(0)
        fld qword ptr [mem_0092A278]
        ret
    check_upper:
        fcom qword ptr [mem_0092A270]
        fnstsw ax
        test ah, 0x41
        jne keep
        fstp st(0)
        fld qword ptr [mem_0092A270]
    keep:
        ret
    }
}

// [0x00702A00] sub_00702A00 (80 bytes)
extern "C" void ext_006C9620();
extern "C" void ext_006C9640();
extern "C" void ext_006C9660();
extern "C" void ext_006C9F70();
extern "C" void ext_006DC460();

extern "C" __declspec(naked) void __fastcall fn_00702A00(void* self) {
    __asm {
        push esi
        push edi
        call ext_006DC460
        mov esi, eax
        mov ecx, esi
        call ext_006C9620
        mov ecx, eax
        call ext_006C9F70
        mov edi, dword ptr [esp + 0xc]
        mov ecx, esi
        fstp qword ptr [edi]
        call ext_006C9640
        mov ecx, eax
        call ext_006C9F70
        fstp qword ptr [edi + 0x8]
        mov ecx, esi
        call ext_006C9660
        mov ecx, eax
        call ext_006C9F70
        fstp qword ptr [edi + 0x10]
        mov eax, edi
        pop edi
        pop esi
        ret 0x4
    }
}

// [0x00700990] sub_00700990 (80 bytes)
extern "C" void ext_006C9490();
extern "C" void ext_006C94B0();
extern "C" void ext_006C94D0();
extern "C" void ext_006C9F70();
extern "C" void ext_006DC460();
extern "C" __declspec(naked) void* __fastcall fn_00700990(void* self, int edx_unused, double* out) {
    __asm {
        mov ecx, dword ptr [ecx + 0x4]
        push esi
        push edi
        call ext_006DC460
        mov esi, eax
        mov ecx, esi
        call ext_006C9490
        mov ecx, eax
        call ext_006C9F70
        mov edi, dword ptr [esp + 0xc]
        mov ecx, esi
        fstp qword ptr [edi]
        call ext_006C94B0
        mov ecx, eax
        call ext_006C9F70
        fstp qword ptr [edi + 0x8]
        mov ecx, esi
        call ext_006C94D0
        mov ecx, eax
        call ext_006C9F70
        fstp qword ptr [edi + 0x10]
        mov eax, edi
        pop edi
        pop esi
        ret 4
    }
}

// [0x00702AA0] sub_00702AA0 (80 bytes)
extern "C" void ext_006C96E0();
extern "C" void ext_006C9700();
extern "C" void ext_006C9720();
extern "C" void ext_006C9F70();
extern "C" void ext_006DC460();

extern "C" __declspec(naked) void __fastcall fn_00702AA0(void* self) {
    __asm {
        push esi
        push edi
        call ext_006DC460
        mov esi, eax
        mov ecx, esi
        call ext_006C96E0
        mov ecx, eax
        call ext_006C9F70
        mov edi, dword ptr [esp + 0xc]
        mov ecx, esi
        fstp qword ptr [edi]
        call ext_006C9700
        mov ecx, eax
        call ext_006C9F70
        fstp qword ptr [edi + 0x8]
        mov ecx, esi
        call ext_006C9720
        mov ecx, eax
        call ext_006C9F70
        fstp qword ptr [edi + 0x10]
        mov eax, edi
        pop edi
        pop esi
        ret 0x4
    }
}

// [0x0070BBD0] sub_0070BBD0 (80 bytes)
extern "C" void ext_006C97B0();
extern "C" void ext_006C97D0();
extern "C" void ext_006C97F0();
extern "C" void ext_006C9F70();
extern "C" void ext_006DC460();

extern "C" __declspec(naked) void __fastcall fn_0070BBD0(void* self) {
    __asm {
        push esi
        push edi
        call ext_006DC460
        mov esi, eax
        mov ecx, esi
        call ext_006C97B0
        mov ecx, eax
        call ext_006C9F70
        mov edi, dword ptr [esp + 0xc]
        mov ecx, esi
        fstp qword ptr [edi]
        call ext_006C97D0
        mov ecx, eax
        call ext_006C9F70
        fstp qword ptr [edi + 0x8]
        mov ecx, esi
        call ext_006C97F0
        mov ecx, eax
        call ext_006C9F70
        fstp qword ptr [edi + 0x10]
        mov eax, edi
        pop edi
        pop esi
        ret 0x4
    }
}

// [0x0070BC70] sub_0070BC70 (80 bytes)
extern "C" void ext_006C9810();
extern "C" void ext_006C9830();
extern "C" void ext_006C9850();
extern "C" void ext_006C9F70();
extern "C" void ext_006DC460();

extern "C" __declspec(naked) void __fastcall fn_0070BC70(void* self) {
    __asm {
        push esi
        push edi
        call ext_006DC460
        mov esi, eax
        mov ecx, esi
        call ext_006C9810
        mov ecx, eax
        call ext_006C9F70
        mov edi, dword ptr [esp + 0xc]
        mov ecx, esi
        fstp qword ptr [edi]
        call ext_006C9830
        mov ecx, eax
        call ext_006C9F70
        fstp qword ptr [edi + 0x8]
        mov ecx, esi
        call ext_006C9850
        mov ecx, eax
        call ext_006C9F70
        fstp qword ptr [edi + 0x10]
        mov eax, edi
        pop edi
        pop esi
        ret 0x4
    }
}

// [0x00702A50] sub_00702A50 (80 bytes)
extern "C" void ext_006C9680();
extern "C" void ext_006C96A0();
extern "C" void ext_006C96C0();
extern "C" void ext_006C9F70();
extern "C" void ext_006DC460();

extern "C" __declspec(naked) void* __fastcall fn_00702A50(void* self, int edx_unused, double* out) {
    __asm {
        push esi
        push edi
        call ext_006DC460
        mov esi, eax
        mov ecx, esi
        call ext_006C9680
        mov ecx, eax
        call ext_006C9F70
        mov edi, dword ptr [esp + 0xc]
        mov ecx, esi
        fstp qword ptr [edi]
        call ext_006C96A0
        mov ecx, eax
        call ext_006C9F70
        fstp qword ptr [edi + 0x8]
        mov ecx, esi
        call ext_006C96C0
        mov ecx, eax
        call ext_006C9F70
        fstp qword ptr [edi + 0x10]
        mov eax, edi
        pop edi
        pop esi
        ret 4
    }
}

// [0x0070BD10] sub_0070BD10 (80 bytes)
extern "C" void ext_006C9870();
extern "C" void ext_006C9890();
extern "C" void ext_006C98B0();
extern "C" void ext_006C9F70();
extern "C" void ext_006DC460();

extern "C" __declspec(naked) void __fastcall fn_0070BD10(void* self) {
    __asm {
        push esi
        push edi
        call ext_006DC460
        mov esi, eax
        mov ecx, esi
        call ext_006C9870
        mov ecx, eax
        call ext_006C9F70
        mov edi, dword ptr [esp + 0xc]
        mov ecx, esi
        fstp qword ptr [edi]
        call ext_006C9890
        mov ecx, eax
        call ext_006C9F70
        fstp qword ptr [edi + 0x8]
        mov ecx, esi
        call ext_006C98B0
        mov ecx, eax
        call ext_006C9F70
        fstp qword ptr [edi + 0x10]
        mov eax, edi
        pop edi
        pop esi
        ret 0x4
    }
}

// [0x0070BDB0] sub_0070BDB0 (80 bytes)
extern "C" void ext_006C9750();
extern "C" void ext_006C9770();
extern "C" void ext_006C9790();
extern "C" void ext_006C9F70();
extern "C" void ext_006DC460();

extern "C" __declspec(naked) void __fastcall fn_0070BDB0(void* self) {
    __asm {
        push esi
        push edi
        call ext_006DC460
        mov esi, eax
        mov ecx, esi
        call ext_006C9750
        mov ecx, eax
        call ext_006C9F70
        mov edi, dword ptr [esp + 0xc]
        mov ecx, esi
        fstp qword ptr [edi]
        call ext_006C9770
        mov ecx, eax
        call ext_006C9F70
        fstp qword ptr [edi + 0x8]
        mov ecx, esi
        call ext_006C9790
        mov ecx, eax
        call ext_006C9F70
        fstp qword ptr [edi + 0x10]
        mov eax, edi
        pop edi
        pop esi
        ret 0x4
    }
}

// [0x00708CC0] sub_00708CC0 (80 bytes)
extern "C" void ext_00708C10();
extern "C" void ext_00711A80();

extern "C" __declspec(naked) void __fastcall fn_00708CC0(void* self, int edx_unused, void* a1) {
    __asm {
        push ebx
        push esi
        mov esi, ecx
        xor eax, eax
        push edi
        mov edx, dword ptr [esi + 0xc0]
        test edx, edx
        jle done
        mov ebx, dword ptr [esi + 0xd0]
        mov edi, dword ptr [esp + 0x10]
        mov ecx, ebx
    scan:
        cmp dword ptr [ecx], edi
        je found
        inc eax
        add ecx, 0x4
        cmp eax, edx
        jl scan
        pop edi
        pop esi
        pop ebx
        ret 4
    found:
        mov ecx, dword ptr [ebx + 4*eax]
        call ext_00711A80
        test al, al
        je done
        push edi
        mov ecx, esi
        call ext_00708C10
    done:
        pop edi
        pop esi
        pop ebx
        ret 4
    }
}

// [0x00700AC0] sub_00700AC0 (80 bytes)
extern "C" void ext_006C94F0();
extern "C" void ext_006CD330();
extern "C" void ext_006DC460();
extern "C" void ext_00708000();

extern "C" __declspec(naked) void __fastcall fn_00700AC0(void* self, int edx_unused, double a1) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x4]
        test ecx, ecx
        je skip
        call ext_006DC460
        fld qword ptr [esp + 0x8]
        push ecx
        mov ecx, eax
        fstp dword ptr [esp]
        call ext_006C94F0
        mov ecx, eax
        call ext_006CD330
    skip:
        mov ecx, dword ptr [esi + 0xc]
        push 0xaa8cf4
        call ext_00708000
        mov ecx, dword ptr [esp + 0xc]
        mov edx, dword ptr [eax]
        push ecx
        mov ecx, dword ptr [esp + 0xc]
        push ecx
        mov ecx, eax
        call dword ptr [edx + 0x80]
        pop esi
        ret 8
    }
}

// [0x00700B10] sub_00700B10 (80 bytes)
extern "C" void ext_006C9500();
extern "C" void ext_006CD330();
extern "C" void ext_006DC460();
extern "C" void ext_00708000();

extern "C" __declspec(naked) void __fastcall fn_00700B10(void* self, int edx_unused, double a1) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x4]
        test ecx, ecx
        je skip
        call ext_006DC460
        fld qword ptr [esp + 0x8]
        push ecx
        mov ecx, eax
        fstp dword ptr [esp]
        call ext_006C9500
        mov ecx, eax
        call ext_006CD330
    skip:
        mov ecx, dword ptr [esi + 0xc]
        push 0xaa8d00
        call ext_00708000
        mov ecx, dword ptr [esp + 0xc]
        mov edx, dword ptr [eax]
        push ecx
        mov ecx, dword ptr [esp + 0xc]
        push ecx
        mov ecx, eax
        call dword ptr [edx + 0x80]
        pop esi
        ret 8
    }
}

// [0x00702AF0] sub_00702AF0 (80 bytes)
extern "C" void ext_006C9740();
extern "C" void ext_006CD330();
extern "C" void ext_006DC460();
extern "C" void ext_00708000();

extern "C" __declspec(naked) void __fastcall fn_00702AF0(void* self, int edx_unused, double a1) {
    __asm {
        push esi
        mov esi, ecx
        call ext_006DC460
        fld qword ptr [esp + 0x8]
        push ecx
        mov ecx, eax
        fstp dword ptr [esp]
        call ext_006C9740
        mov ecx, eax
        call ext_006CD330
        mov ecx, dword ptr [esi + 0x268]
        push 0xaabae4
        call ext_00708000
        mov ecx, dword ptr [esp + 0xc]
        mov edx, dword ptr [eax]
        push ecx
        mov ecx, dword ptr [esp + 0xc]
        push ecx
        mov ecx, eax
        call dword ptr [edx + 0x80]
        pop esi
        ret 8
    }
}

// [0x007025C0] sub_007025C0 (96 bytes)
extern "C" __declspec(naked) void __fastcall fn_007025C0(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        mov esi, dword ptr [ecx + 0x10c]
        mov edx, 0x1
        cmp esi, edx
        mov dword ptr [ecx + 0x110], eax
        pop esi
        jne out_
        sub eax, 0x0
        je case0_
        dec eax
        je case1_
        dec eax
        jne out_
        mov eax, dword ptr [ecx + 0x268]
        mov dword ptr [eax + 0x380], edx
        ret 0x4
    case1_:
        mov ecx, dword ptr [ecx + 0x268]
        mov dword ptr [ecx + 0x380], 0x3
        ret 0x4
    case0_:
        mov edx, dword ptr [ecx + 0x268]
        mov dword ptr [edx + 0x380], 0x2
    out_:
        ret 0x4
    }
}

// [0x00708D10] sub_00708D10 (96 bytes)
extern "C" void ext_00711A80();

extern "C" __declspec(naked) void __fastcall fn_00708D10(void* self) {
    __asm {
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        xor ebx, ebx
        xor esi, esi
        mov eax, dword ptr [edi + 0xc0]
        test eax, eax
        jle done
        mov ebp, dword ptr [esp + 0x14]
    loop_top:
        mov eax, dword ptr [edi + 0xd0]
        mov ecx, dword ptr [eax + 4*esi]
        call ext_00711A80
        test al, al
        je next
        cmp ebp, ebx
        je found
        inc ebx
    next:
        mov eax, dword ptr [edi + 0xc0]
        inc esi
        cmp esi, eax
        jl loop_top
    done:
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 4
    found:
        mov ecx, dword ptr [edi + 0xd0]
        pop edi
        mov eax, dword ptr [ecx + 4*esi]
        pop esi
        pop ebp
        pop ebx
        ret 4
    }
}

// [0x0070BEA0] sub_0070BEA0 (96 bytes)
extern "C" void ext_006C98F0();
extern "C" void ext_006CD330();
extern "C" void ext_006DC460();
extern "C" int mem_0092A278;
extern "C" int mem_0092A270;
extern "C" int mem_00995B40;
extern "C" __declspec(naked) void __fastcall fn_0070BEA0(void* self, int edx_unused, double a1) {
    __asm {
        call ext_006DC460
        fld qword ptr [esp + 4]
        fcomp qword ptr [mem_0092A278]
        mov ecx, eax
        fnstsw ax
        test ah, 0x1
        je L_small
        fld qword ptr [mem_0092A278]
        jmp L_scale
    L_small:
        fld qword ptr [esp + 4]
        fcomp qword ptr [mem_0092A270]
        fnstsw ax
        test ah, 0x41
        jne L_arg
        fld qword ptr [mem_0092A270]
        jmp L_scale
    L_arg:
        fld qword ptr [esp + 4]
    L_scale:
        fmul qword ptr [mem_00995B40]
        push ecx
        fstp dword ptr [esp]
        call ext_006C98F0
        mov ecx, eax
        call ext_006CD330
        ret 8
    }
}

// [0x00700840] sub_00700840 (112 bytes)
extern "C" __declspec(naked) void __fastcall fn_00700840(void* self) {
    __asm {
        push -1
        push 0x8bb883
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 4], esi
        mov dword ptr [esi], 0x9952f8
        mov ecx, dword ptr [esi + 0xc]
        push 0
        mov dword ptr [esp + 0x14], 1
        mov eax, dword ptr [ecx]
        call dword ptr [eax + 4]
        lea ecx, [esi + 0x10]
        mov byte ptr [esp + 0x10], 0
        call ext_006B9D70
        mov ecx, esi
        mov dword ptr [esp + 0x10], -1
        call ext_0077FA20
        mov ecx, dword ptr [esp + 8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x0070D2A0] sub_0070D2A0 (112 bytes)
extern "C" void ext_0077FA70();
extern "C" void ext_006FE1C0();
extern "C" void ext_006D2250();
extern "C" void ext_006A5C5C();
extern "C" __declspec(naked) void __fastcall fn_0070D2A0(void* self) {
    __asm {
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr [esi + 0x4]
        call ext_0077FA70
        mov ebx, dword ptr [esi + 0x58]
        lea ebp, [esi + 0x58]
        mov dword ptr [esi + 0x4], edi
        xor edi, edi
        test ebx, ebx
        jle L_after_loop1
    L_loop1:
        mov eax, dword ptr [esi + 0x68]
        mov ecx, dword ptr [eax + 4*edi]
        call ext_006FE1C0
        inc edi
        cmp edi, ebx
        jl L_loop1
    L_after_loop1:
        mov ecx, ebp
        call ext_006D2250
        lea ebx, [esi + 0x70]
        mov esi, dword ptr [esi + 0x70]
        test esi, esi
        je L_end
    L_loop2:
        mov ecx, dword ptr [ebx + 0x10]
        dec esi
        mov edi, dword ptr [ecx + 4*esi]
        test edi, edi
        je L_skip
        mov ecx, edi
        call ext_006B9D70
        push edi
        call ext_006A5C5C
        add esp, 4
    L_skip:
        test esi, esi
        jne L_loop2
    L_end:
        mov ecx, ebx
        call ext_006D2250
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}

// [0x00708000] sub_00708000 (128 bytes)
extern "C" __declspec(naked) void* __fastcall fn_00708000(void* self, int edx_unused, void* arg) {
    __asm {
        push ecx
        push ebx
        mov ebx, ecx
        push ebp
        xor ebp, ebp
        mov eax, dword ptr [ebx + 0xc0]
        push esi
        test eax, eax
        push edi
        mov dword ptr [esp + 0x10], eax
        jle t00_done
t00_outer:
        mov eax, dword ptr [ebx + 0xd0]
        mov esi, dword ptr [esp + 0x18]
        mov edi, dword ptr [eax + 4*ebp]
        mov ecx, edi
        call ext_00712000
t00_cmp:
        mov dl, byte ptr [eax]
        mov cl, dl
        cmp dl, byte ptr [esi]
        jne t00_ne
        test cl, cl
        je t00_eqz
        mov dl, byte ptr [eax + 1]
        mov cl, dl
        cmp dl, byte ptr [esi + 1]
        jne t00_ne
        add eax, 2
        add esi, 2
        test cl, cl
        jne t00_cmp
t00_eqz:
        xor eax, eax
        jmp t00_after
t00_ne:
        sbb eax, eax
        sbb eax, -1
t00_after:
        test eax, eax
        je t00_found
        mov eax, dword ptr [esp + 0x10]
        inc ebp
        cmp ebp, eax
        jl t00_outer
t00_done:
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        pop ecx
        ret 0x4
t00_found:
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 0x4
    }
}

// [0x00706A70] sub_00706A70 (128 bytes)
extern "C" void ext_006FA5A0();
extern "C" void ext_006FC6E0();
extern "C" int mem_00B5E400;
extern "C" __declspec(naked) void __fastcall fn_00706A70(void* self, int edx_unused, int a1, int a2) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        push esi
        cmp eax, -0x1
        mov esi, ecx
        je L_alt
        cmp eax, dword ptr [mem_00B5E400]
        je L_alt
        push eax
        call ext_006FC6E0
        add esp, 0x4
        mov ecx, esi
        push eax
        call ext_006FA5A0
        mov ecx, dword ptr [eax + 0x14]
        mov esi, dword ptr [esp + 0x8]
        add eax, 0x10
        add ecx, esi
        mov edx, dword ptr [eax]
        lea ecx, [ecx + 2*ecx]
        mov eax, dword ptr [edx + 4*ecx + 0x4]
        lea ecx, [edx + 4*ecx]
        test eax, eax
        je L_zero
        mov edx, dword ptr [eax]
        mov esi, dword ptr [ecx]
        cmp edx, esi
        jne L_zero
        mov eax, dword ptr [eax + 0x4]
        pop esi
        ret 0x8
    L_alt:
        mov eax, dword ptr [esi + 0x14]
        mov ecx, dword ptr [esp + 0x8]
        add eax, ecx
        mov ecx, dword ptr [esi + 0x10]
        lea eax, [eax + 2*eax]
        lea ecx, [ecx + 4*eax]
        mov eax, dword ptr [ecx + 0x4]
        test eax, eax
        je L_zero
        mov edx, dword ptr [eax]
        mov esi, dword ptr [ecx]
        cmp edx, esi
        jne L_zero
        mov eax, dword ptr [eax + 0x4]
        pop esi
        ret 0x8
    L_zero:
        xor eax, eax
        pop esi
        ret 0x8
    }
}

// [0x0070EB40] sub_0070EB40 (128 bytes)
extern "C" void ext_006B9D70();
extern "C" void ext_006B9E60();
extern "C" int mem_008BC8E0;
extern "C" __declspec(naked) void __fastcall fn_0070EB40(void* self) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push offset mem_008BC8E0
        push eax
        mov dword ptr fs:[0], esp
        push esi
        mov esi, ecx
        lea eax, [esp + 0x14]
        lea ecx, [esi + 0xac]
        push eax
        mov dword ptr [esp + 0x10], 1
        call ext_006B9E60
        lea ecx, [esp + 0x60]
        push ecx
        lea ecx, [esi + 0xf8]
        call ext_006B9E60
        lea ecx, [esp + 0x14]
        mov byte ptr [esp + 0xc], 0
        call ext_006B9D70
        lea ecx, [esp + 0x60]
        mov dword ptr [esp + 0xc], 0xffffffff
        call ext_006B9D70
        mov ecx, dword ptr [esp + 0x4]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x98
    }
}

// [0x0070BF50] sub_0070BF50 (128 bytes)
extern "C" void ext_006C98E0();
extern "C" void ext_006CD330();
extern "C" void ext_006DC460();
extern "C" int mem_0092A278;
extern "C" int mem_0092A270;

// Clamp of the double argument between mem_0092A278 (lower) and mem_0092A270 (upper),
// then passed as a float to sub_006C98E0; its result is the self for sub_006CD330.
extern "C" __declspec(naked) void __fastcall fn_0070BF50(void* self) {
    __asm {
        call ext_006DC460
        fld qword ptr [esp + 0x4]
        fcomp qword ptr [mem_0092A278]
        mov ecx, eax
        fnstsw ax
        test ah, 0x1
        je L_hi
        fld qword ptr [mem_0092A278]
        push ecx
        fstp dword ptr [esp]
        call ext_006C98E0
        mov ecx, eax
        call ext_006CD330
        ret 0x8
    L_hi:
        fld qword ptr [esp + 0x4]
        fcomp qword ptr [mem_0092A270]
        fnstsw ax
        test ah, 0x41
        jne L_mid
        fld qword ptr [mem_0092A270]
        push ecx
        fstp dword ptr [esp]
        call ext_006C98E0
        mov ecx, eax
        call ext_006CD330
        ret 0x8
    L_mid:
        fld qword ptr [esp + 0x4]
        push ecx
        fstp dword ptr [esp]
        call ext_006C98E0
        mov ecx, eax
        call ext_006CD330
        ret 0x8
    }
}

// [0x0070BE00] sub_0070BE00 (128 bytes)
extern "C" void ext_006C98D0();
extern "C" void ext_006CD330();
extern "C" void ext_006DC460();
extern "C" int mem_0092A278;
extern "C" int mem_0092A270; /* double 1 */

// Clamp the double argument to [mem_0092A278, 1.0], pass it as a float to
// sub_006C98D0 (ecx = sub_006DC460 result), then tail-call sub_006CD330 with its result in ecx.
extern "C" __declspec(naked) void __fastcall fn_0070BE00(void* self) {
    __asm {
        call ext_006DC460
        fld qword ptr [esp + 0x4]
        fcomp qword ptr [mem_0092A278]
        mov ecx, eax
        fnstsw ax
        test ah, 0x1
        je second
        fld qword ptr [mem_0092A278]
        push ecx
        fstp dword ptr [esp]
        call ext_006C98D0
        mov ecx, eax
        call ext_006CD330
        ret 0x8
    second:
        fld qword ptr [esp + 0x4]
        fcomp qword ptr [mem_0092A270]
        fnstsw ax
        test ah, 0x41
        jne third
        fld qword ptr [mem_0092A270]
        push ecx
        fstp dword ptr [esp]
        call ext_006C98D0
        mov ecx, eax
        call ext_006CD330
        ret 0x8
    third:
        fld qword ptr [esp + 0x4]
        push ecx
        fstp dword ptr [esp]
        call ext_006C98D0
        mov ecx, eax
        call ext_006CD330
        ret 0x8
    }
}

// [0x00702C60] sub_00702C60 (128 bytes)
extern "C" void ext_006D2370();
extern "C" void ext_006D23F0();
extern "C" void ext_006D80A0();
extern "C" void ext_00702A00();
extern "C" int mem_008BFD88;

extern "C" __declspec(naked) void __fastcall fn_00702C60(void* self) {
    __asm {
        push -1
        push offset mem_008BFD88
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x28
        push esi
        mov esi, ecx
        lea ecx, [esp + 0xc]
        call ext_006D2370
        lea eax, [esp + 0xc]
        mov ecx, esi
        push eax
        mov dword ptr [esp + 0x38], 0
        call ext_00702A00
        push 1
        lea ecx, [esp + 0x10]
        call ext_006D23F0
        mov ecx, dword ptr [eax]
        mov dword ptr [esp + 0x34], -1
        mov dword ptr [esp + 0x4], ecx
        lea ecx, [esp + 0xc]
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [esp + 0x8], edx
        call ext_006D80A0
        mov ecx, dword ptr [esp + 0x2c]
        pop esi
        _emit 0xdd
        _emit 0x44
        _emit 0x24
        _emit 0x00
        mov dword ptr fs:[0], ecx
        add esp, 0x34
        ret
    }
}

// [0x00702E60] sub_00702E60 (128 bytes)
extern "C" int mem_008BFD88;
extern "C" void ext_006D2370();
extern "C" void ext_006D23F0();
extern "C" void ext_006D80A0();
extern "C" void ext_00702AA0();
extern "C" __declspec(naked) void __fastcall fn_00702E60(void* self) {
    __asm {
        push -1
        push offset mem_008BFD88
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x28
        push esi
        mov esi, ecx
        lea ecx, [esp + 0xc]
        call ext_006D2370
        lea eax, [esp + 0xc]
        mov ecx, esi
        push eax
        mov dword ptr [esp + 0x38], 0
        call ext_00702AA0
        push 0
        lea ecx, [esp + 0x10]
        call ext_006D23F0
        mov ecx, dword ptr [eax]
        mov dword ptr [esp + 0x34], -1
        mov dword ptr [esp + 0x4], ecx
        lea ecx, [esp + 0xc]
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [esp + 0x8], edx
        call ext_006D80A0
        mov ecx, dword ptr [esp + 0x2c]
        pop esi
        _emit 0xdd
        _emit 0x44
        _emit 0x24
        _emit 0x00
        mov dword ptr fs:[0], ecx
        add esp, 0x34
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
    }
}

// [0x00702D60] sub_00702D60 (128 bytes)
extern "C" void ext_006D2370();
extern "C" void ext_006D23F0();
extern "C" void ext_006D80A0();
extern "C" void ext_00702A50();
extern "C" int mem_008BFD88;
extern "C" __declspec(naked) void __fastcall fn_00702D60(void* self) {
    __asm {
        push -1
        push offset mem_008BFD88
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x28
        push esi
        mov esi, ecx
        lea ecx, [esp + 0xc]
        call ext_006D2370
        lea eax, [esp + 0xc]
        mov ecx, esi
        push eax
        mov dword ptr [esp + 0x38], 0
        call ext_00702A50
        push 2
        lea ecx, [esp + 0x10]
        call ext_006D23F0
        mov ecx, dword ptr [eax]
        mov dword ptr [esp + 0x34], 0xffffffff
        mov dword ptr [esp + 0x4], ecx
        lea ecx, [esp + 0xc]
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [esp + 0x8], edx
        call ext_006D80A0
        mov ecx, dword ptr [esp + 0x2c]
        pop esi
        _emit 0xdd
        _emit 0x44
        _emit 0x24
        _emit 0x00
        mov dword ptr fs:[0], ecx
        add esp, 0x34
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
    }
}

// [0x00702BE0] sub_00702BE0 (128 bytes)
extern "C" void ext_006D2370();
extern "C" void ext_006D23F0();
extern "C" void ext_006D80A0();
extern "C" void ext_00702A00();
extern "C" int mem_008BFD88;
extern "C" __declspec(naked) void __fastcall fn_00702BE0(void* self) {
    __asm {
        push -1
        push offset mem_008BFD88
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x28
        push esi
        mov esi, ecx
        lea ecx, [esp + 0xc]
        call ext_006D2370
        lea eax, [esp + 0xc]
        mov ecx, esi
        push eax
        mov dword ptr [esp + 0x38], 0
        call ext_00702A00
        push 0
        lea ecx, [esp + 0x10]
        call ext_006D23F0
        mov ecx, dword ptr [eax]
        mov dword ptr [esp + 0x34], -1
        mov dword ptr [esp + 0x4], ecx
        lea ecx, [esp + 0xc]
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [esp + 0x8], edx
        call ext_006D80A0
        mov ecx, dword ptr [esp + 0x2c]
        pop esi
        _emit 0xdd
        _emit 0x44
        _emit 0x24
        _emit 0x00
        mov dword ptr fs:[0], ecx
        add esp, 0x34
        ret
    }
}

// [0x00700A40] sub_00700A40 (128 bytes)
extern "C" void ext_006C9490();
extern "C" void ext_006C94B0();
extern "C" void ext_006C94D0();
extern "C" void ext_006CD330();
extern "C" void ext_006DC460();
extern "C" void ext_00708000();
extern "C" __declspec(naked) void __fastcall fn_00700A40(void* self, int edx_unused, void* a1) {
    __asm {
        push ebx
        mov ebx, ecx
        push esi
        mov esi, dword ptr [esp + 0xc]
        mov ecx, dword ptr [ebx + 0x4]
        test ecx, ecx
        je skip
        push edi
        call ext_006DC460
        fld qword ptr [esi]
        mov edi, eax
        push ecx
        mov ecx, edi
        fstp dword ptr [esp]
        call ext_006C9490
        mov ecx, eax
        call ext_006CD330
        fld qword ptr [esi + 0x8]
        push ecx
        mov ecx, edi
        fstp dword ptr [esp]
        call ext_006C94B0
        mov ecx, eax
        call ext_006CD330
        fld qword ptr [esi + 0x10]
        push ecx
        mov ecx, edi
        fstp dword ptr [esp]
        call ext_006C94D0
        mov ecx, eax
        call ext_006CD330
        pop edi
    skip:
        mov ecx, dword ptr [ebx + 0xc]
        push 0xaa8cec
        call ext_00708000
        mov edx, dword ptr [eax]
        push 0
        push 0
        push 0
        push esi
        mov ecx, eax
        call dword ptr [edx + 0x8c]
        pop esi
        pop ebx
        ret 0x4
    }
}

// [0x00702DE0] sub_00702DE0 (128 bytes)
extern "C" void ext_006D23B0();
extern "C" void ext_006D80A0();
extern "C" void ext_00702950();
extern "C" __declspec(naked) void __fastcall fn_00702DE0(void* self, int edx_unused, int a1, int a2, int a3, int a4) {
    __asm {
        push -1
        push 0x8bfd88
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x20
        mov eax, dword ptr [esp + 0x3c]
        mov edx, dword ptr [esp + 0x34]
        push esi
        push 0x3ff00000
        mov esi, ecx
        push 0
        mov ecx, dword ptr [esp + 0x44]
        push 0x3ff00000
        push 0
        push eax
        mov eax, dword ptr [esp + 0x48]
        push ecx
        push edx
        push eax
        lea ecx, [esp + 0x24]
        call ext_006D23B0
        lea ecx, [esp + 0x4]
        mov dword ptr [esp + 0x2c], 0
        push ecx
        mov ecx, esi
        call ext_00702950
        lea ecx, [esp + 0x4]
        mov dword ptr [esp + 0x2c], -1
        call ext_006D80A0
        mov ecx, dword ptr [esp + 0x24]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x2c
        ret 0x10
    }
}

// [0x00702B60] sub_00702B60 (128 bytes)
extern "C" void ext_006D23B0();
extern "C" void ext_006D80A0();
extern "C" void ext_007027F0();

extern "C" __declspec(naked) void __fastcall fn_00702B60(void* self) {
    __asm {
        push -1
        push 8bfd88h
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 20h
        mov eax, dword ptr [esp + 3Ch]
        mov edx, dword ptr [esp + 34h]
        push esi
        push 3ff00000h
        mov esi, ecx
        push 0
        mov ecx, dword ptr [esp + 44h]
        push 0
        push 0
        push eax
        mov eax, dword ptr [esp + 48h]
        push ecx
        push edx
        push eax
        lea ecx, [esp + 24h]
        call ext_006D23B0
        lea ecx, [esp + 4]
        mov dword ptr [esp + 2Ch], 0
        push ecx
        mov ecx, esi
        call ext_007027F0
        lea ecx, [esp + 4]
        mov dword ptr [esp + 2Ch], -1
        call ext_006D80A0
        mov ecx, dword ptr [esp + 24h]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 2Ch
        ret 10h
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
    }
}

// [0x0070E410] sub_0070E410 (128 bytes)
extern "C" void ext_0070CE90();
extern "C" void ext_0070CED0();
extern "C" void ext_0070CEF0();
extern "C" void ext_0070F350();
extern "C" void ext_006D37B0();
extern "C" __declspec(naked) void __fastcall fn_0070E410(void* self, int edx_unused, int arg) {
    __asm {
        push ebx
        push ebp
        push esi
        push edi
        mov esi, ecx
        call ext_006CD320
        mov ebx, eax
        xor edi, edi
        test ebx, ebx
        jle L1
    L2:
        mov eax, dword ptr [esi + 0x8]
        push edi
        mov ecx, esi
        mov ebp, dword ptr [eax]
        call ext_0070CE90
        mov ecx, dword ptr [esi + 0x8]
        push eax
        call dword ptr [ebp + 0x7c]
        inc edi
        cmp edi, ebx
        jl L2
    L1:
        mov ecx, esi
        call ext_0070CEF0
        mov ecx, dword ptr [esp + 0x14]
        call ext_006CD320
        mov ebp, eax
        xor edi, edi
        test ebp, ebp
        jle L4
    L3:
        mov ecx, dword ptr [esi + 0x8]
        call ext_006D37B0
        mov ecx, dword ptr [esp + 0x14]
        push edi
        mov ebx, eax
        call ext_0070CE90
        push eax
        mov ecx, ebx
        call ext_0070F350
        push ebx
        mov ecx, esi
        call ext_0070CED0
        inc edi
        cmp edi, ebp
        jl L3
    L4:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x4
    }
}

// [0x0070E2F0] sub_0070E2F0 (144 bytes)
extern "C" void ext_00708000();
extern "C" void ext_00710F80();
extern "C" void ext_00711CF0();
extern "C" void ext_00712A80();
extern "C" void ext_00712FC0();
extern "C" void ext_0071E680();

extern "C" __declspec(naked) void __fastcall fn_0070E2F0(void* self, int edx_unused, void* arg) {
    __asm {
        mov ecx, dword ptr [ecx + 0x4]
        push ebx
        test ecx, ecx
        push edi
        je short done
        mov eax, dword ptr [ecx]
        call dword ptr [eax + 0xc]
        mov ebx, dword ptr [esp + 0xc]
        mov edi, eax
        mov ecx, ebx
        call ext_006E7460
        push eax
        mov ecx, edi
        call ext_00708000
        test eax, eax
        jne short done
        push ebp
        push esi
        push 0xaabebc
        call ext_00712FC0
        mov esi, eax
        push esi
        call ext_00712A80
        add esp, 0x8
        mov ebp, dword ptr [edi]
        mov ecx, ebx
        push 0x0
        push 0x0
        push 0x0
        push esi
        push eax
        call ext_006E7460
        push eax
        mov ecx, edi
        call dword ptr [ebp + 0xdc]
        mov esi, eax
        push 0x1
        push 0x2
        mov ecx, esi
        call ext_0071E680
        mov ecx, eax
        call ext_00710F80
        push 0x1
        push 0x8
        mov ecx, esi
        call ext_00711CF0
        mov edx, dword ptr [esi]
        push 0x0
        push 0x0
        mov ecx, esi
        call dword ptr [edx + 0x80]
        pop esi
        pop ebp
    done:
        pop edi
        pop ebx
        ret 0x4
    }
}

// [0x00702220] sub_00702220 (160 bytes)
extern "C" void ext_00704DB0();
extern "C" void ext_00704EB0();

extern "C" __declspec(naked) void __fastcall fn_00702220(void* self, int edx_unused, const char* arg) {
    __asm {
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov eax, dword ptr [esi]
        call dword ptr [eax + 0xc]
        mov ecx, dword ptr [eax + 0x14]
        test ecx, ecx
        jle L_end
        mov edx, dword ptr [esi]
        mov ecx, esi
        call dword ptr [edx + 0xc]
        mov ecx, dword ptr [eax + 0x10]
        mov eax, dword ptr [ecx + 0x4]
        test eax, eax
        je L_zero
        mov edx, dword ptr [eax]
        mov esi, dword ptr [ecx]
        cmp edx, esi
        jne L_zero
        mov eax, dword ptr [eax + 0x4]
        jmp L_have
    L_zero:
        xor eax, eax
    L_have:
        mov edx, dword ptr [eax]
        mov ecx, eax
        call dword ptr [edx + 0x12c]
        mov edi, eax
        test edi, edi
        je L_end
        push ebx
        mov ecx, edi
        call ext_00704EB0
        mov ebp, dword ptr [esp + 0x14]
        mov esi, eax
        mov ecx, ebp
    L_loop:
        mov dl, byte ptr [ecx]
        mov bl, byte ptr [esi]
        mov al, dl
        cmp dl, bl
        jne L_diff
        test al, al
        je L_eq
        mov dl, byte ptr [ecx + 0x1]
        mov bl, byte ptr [esi + 0x1]
        mov al, dl
        cmp dl, bl
        jne L_diff
        add ecx, 0x2
        add esi, 0x2
        test al, al
        jne L_loop
    L_eq:
        xor eax, eax
        jmp L_fin
    L_diff:
        sbb eax, eax
        sbb eax, -1
    L_fin:
        test eax, eax
        pop ebx
        je L_end
        push ebp
        mov ecx, edi
        call ext_00704DB0
    L_end:
        pop edi
        pop esi
        pop ebp
        ret 0x4
    }
}

// [0x007022C0] sub_007022C0 (160 bytes)
extern "C" __declspec(naked) void __fastcall fn_007022C0(void* self, int edx_unused, const char* arg) {
    __asm {
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov eax, dword ptr [esi]
        call dword ptr [eax + 0xc]
        mov ecx, dword ptr [eax + 0x14]
        test ecx, ecx
        jle short f7022C0_end
        mov edx, dword ptr [esi]
        mov ecx, esi
        call dword ptr [edx + 0xc]
        mov ecx, dword ptr [eax + 0x10]
        mov eax, dword ptr [ecx + 0x4]
        test eax, eax
        je short f7022C0_zero
        mov edx, dword ptr [eax]
        mov esi, dword ptr [ecx]
        cmp edx, esi
        jne short f7022C0_zero
        mov eax, dword ptr [eax + 0x4]
        jmp short f7022C0_have
f7022C0_zero:
        xor eax, eax
f7022C0_have:
        mov edx, dword ptr [eax]
        mov ecx, eax
        call dword ptr [edx + 0x12c]
        mov edi, eax
        test edi, edi
        je short f7022C0_end
        push ebx
        mov ecx, edi
        call ext_00704FD0
        mov ebp, dword ptr [esp + 0x14]
        mov esi, eax
        mov ecx, ebp
f7022C0_loop:
        mov dl, byte ptr [ecx]
        mov bl, byte ptr [esi]
        mov al, dl
        cmp dl, bl
        jne short f7022C0_ne
        test al, al
        je short f7022C0_eq
        mov dl, byte ptr [ecx + 0x1]
        mov bl, byte ptr [esi + 0x1]
        mov al, dl
        cmp dl, bl
        jne short f7022C0_ne
        add ecx, 0x2
        add esi, 0x2
        test al, al
        jne short f7022C0_loop
f7022C0_eq:
        xor eax, eax
        jmp short f7022C0_done
f7022C0_ne:
        sbb eax, eax
        sbb eax, -1
f7022C0_done:
        test eax, eax
        pop ebx
        je short f7022C0_end
        push ebp
        mov ecx, edi
        call ext_00704EC0
f7022C0_end:
        pop edi
        pop esi
        pop ebp
        ret 0x4
    }
}

// [0x0070DD00] sub_0070DD00 (176 bytes)
extern "C" void ext_006A5C5C();
extern "C" void ext_006B9D70();
extern "C" void ext_006D2250();

extern "C" __declspec(naked) void __fastcall fn_0070DD00(void* self) {
    __asm {
        push ebx
        push ebp
        mov ebp, ecx
        push esi
        push edi
        mov esi, dword ptr [ebp + 0x88]
        lea ebx, [ebp + 0x88]
        test esi, esi
        je loc_70dd35
    loc_70dd16:
        mov eax, dword ptr [ebx + 0x10]
        dec esi
        mov edi, dword ptr [eax + 4*esi]
        test edi, edi
        je loc_70dd31
        mov ecx, edi
        call ext_006B9D70
        push edi
        call ext_006A5C5C
        add esp, 0x4
    loc_70dd31:
        test esi, esi
        jne loc_70dd16
    loc_70dd35:
        mov ecx, ebx
        call ext_006D2250
        mov esi, dword ptr [ebp + 0xa0]
        lea ebx, [ebp + 0xa0]
        test esi, esi
        je loc_70dd6b
    loc_70dd4c:
        mov ecx, dword ptr [ebx + 0x10]
        dec esi
        mov edi, dword ptr [ecx + 4*esi]
        test edi, edi
        je loc_70dd67
        mov ecx, edi
        call ext_006B9D70
        push edi
        call ext_006A5C5C
        add esp, 0x4
    loc_70dd67:
        test esi, esi
        jne loc_70dd4c
    loc_70dd6b:
        mov ecx, ebx
        call ext_006D2250
        mov esi, dword ptr [ebp + 0xb8]
        lea ebx, [ebp + 0xb8]
        test esi, esi
        je loc_70dda1
    loc_70dd82:
        mov edx, dword ptr [ebx + 0x10]
        dec esi
        mov edi, dword ptr [edx + 4*esi]
        test edi, edi
        je loc_70dd9d
        mov ecx, edi
        call ext_006B9D70
        push edi
        call ext_006A5C5C
        add esp, 0x4
    loc_70dd9d:
        test esi, esi
        jne loc_70dd82
    loc_70dda1:
        mov ecx, ebx
        call ext_006D2250
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
        nop
        nop
        nop
    }
}

// [0x00704C10] sub_00704C10 (12 bytes)
extern "C" void ext_006A6C87();
extern "C" void __fastcall fn_00704C10(void* self) {
    ((void (__cdecl *)(void*))ext_006A6C87)((void*)0x00704C20);
}

// [0x00707970] sub_00707970 (13 bytes)
extern "C" __declspec(naked) void __stdcall fn_00707970(void* a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push eax
        call ext_006FA8F0
        ret 4
    }
}

// [0x00704D60] sub_00704D60 (19 bytes)
extern "C" void ext_006D3B50();

extern "C" __declspec(naked) void __fastcall fn_00704D60(void* self) {
    __asm {
        mov eax, dword ptr [esp + 4]
        mov ecx, dword ptr [ecx + 0xb4]
        push eax
        call ext_006D3B50
        ret 4
    }
}

// [0x0070AF30] sub_0070AF30 (19 bytes)
extern "C" void ext_006DC8E0();

extern "C" __declspec(naked) void __fastcall fn_0070AF30(void* self) {
    __asm {
        mov eax, dword ptr [esp + 4]
        mov ecx, dword ptr [ecx + 0x4f8]
        push eax
        call ext_006DC8E0
        ret 4
    }
}

// [0x00704B00] sub_00704B00 (19 bytes)
extern "C" void ext_006DC8E0();
extern "C" __declspec(naked) void __fastcall fn_00704B00(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        mov ecx, dword ptr [ecx + 0x7c8]
        push eax
        call ext_006DC8E0
        ret 4
    }
}

// [0x00707980] sub_00707980 (13 bytes)
extern "C" __declspec(naked) void __stdcall fn_00707980(void* a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push eax
        call ext_006FA920
        ret 0x4
    }
}

// [0x00701DF0] sub_00701DF0 (19 bytes)
extern "C" void ext_006DC8E0();

extern "C" __declspec(naked) void __fastcall fn_00701DF0(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        mov ecx, dword ptr [ecx + 0x6f0]
        push eax
        call ext_006DC8E0
        ret 4
    }
}

// [0x00706230] sub_00706230 (19 bytes)
extern "C" void __fastcall fn_00706230(void* self) {
    void* p = *(void**)((char*)self + 0x50);
    ((void (__thiscall *)(void*))ext_006E7460)(p ? p : &mem_00B5D268);
}

// [0x00701460] sub_00701460 (21 bytes)
extern "C" int __cdecl ext_006FC3A0(void*, int);
extern "C" int mem_00B5E75C;
extern "C" void __cdecl fn_00701460() {
    mem_00B5E75C = ext_006FC3A0((void*)0xb5e760, -1);
}

// [0x00704BF0] sub_00704BF0 (18 bytes)
extern "C" void ext_006E73B0();
extern "C" int mem_00AABBEC;
extern "C" int mem_00B5E948;

extern "C" void __fastcall fn_00704BF0(void* self) {
    __asm {
        push 1
        push offset mem_00AABBEC
        mov ecx, offset mem_00B5E948
        call ext_006E73B0
    }
}

// [0x00703FC0] sub_00703FC0 (21 bytes)
extern "C" int __cdecl ext_006FC3A0(void*, int);
extern "C" int mem_00B5E9B8;
extern "C" void __cdecl fn_00703FC0() {
    mem_00B5E9B8 = ext_006FC3A0((void*)0xb5e9a8, -1);
}

// [0x007001F0] sub_007001F0 (21 bytes)
extern "C" int __cdecl ext_006FC3A0(void*, int);
extern "C" int mem_00B5E5C0;
extern "C" void __cdecl fn_007001F0() {
    mem_00B5E5C0 = ext_006FC3A0((void*)0xb5e5c8, -1);
}

// [0x007052D0] sub_007052D0 (21 bytes)
extern "C" int __cdecl ext_006FC3A0(void*, int);
extern "C" int mem_00B5EB78;
extern "C" void __cdecl fn_007052D0() {
    mem_00B5EB78 = ext_006FC3A0((void*)0xb5eb50, 1);
}

// [0x00709B60] sub_00709B60 (21 bytes)
extern "C" int __cdecl ext_006FC3A0(void*, int);
extern "C" int mem_00B5EB48;

extern "C" void __cdecl fn_00709B60() {
    mem_00B5EB48 = ext_006FC3A0((void*)0x00B5EB68, -1);
}

// [0x00700FA0] sub_00700FA0 (33 bytes)
extern "C" void ext_006B9D80();
extern "C" __declspec(naked) void* __fastcall fn_00700FA0(void* self, int edx_unused, void* a1) {
    __asm {
        push ecx
        push esi
        mov esi, dword ptr [esp + 0xc]
        push 0xaaba0c
        mov ecx, esi
        mov dword ptr [esp + 0x8], 0x0
        call ext_006B9D80
        mov eax, esi
        pop esi
        pop ecx
        ret 0x4
    }
}

// [0x0070B0C0] sub_0070B0C0 (33 bytes)
extern "C" int mem_00B5D2C0;
extern "C" void ext_006B9D80();
extern "C" __declspec(naked) void* __fastcall fn_0070B0C0(void* self, int edx_unused, void* a1) {
    __asm {
        push ecx
        push esi
        mov esi, dword ptr [esp + 0xc]
        push offset mem_00B5D2C0
        mov ecx, esi
        mov dword ptr [esp + 0x8], 0x0
        call ext_006B9D80
        mov eax, esi
        pop esi
        pop ecx
        ret 0x4
    }
}

// [0x00704FF0] sub_00704FF0 (33 bytes)
extern "C" void ext_006B9D80();
extern "C" __declspec(naked) void* __fastcall fn_00704FF0(void* self, int edx_unused, void* a1) {
    __asm {
        push ecx
        push esi
        mov esi, dword ptr [esp + 0xc]
        push 0xaabd1c
        mov ecx, esi
        mov dword ptr [esp + 0x8], 0x0
        call ext_006B9D80
        mov eax, esi
        pop esi
        pop ecx
        ret 0x4
    }
}

// [0x0070FB00] sub_0070FB00 (30 bytes)
extern "C" void ext_007052F0();
extern "C" int mem_00995B78;

extern "C" __declspec(naked) void* __fastcall fn_0070FB00(void* self, int edx_unused, int arg) {
    __asm {
        push esi
        mov esi, ecx
        call ext_007052F0
        mov eax, dword ptr [esp + 0x8]
        mov dword ptr [esi], offset mem_00995B78
        mov dword ptr [esi + 0xe0], eax
        mov eax, esi
        pop esi
        ret 0x4
    }
}

// [0x00705620] sub_00705620 (30 bytes)
extern "C" void ext_00732CB0();
extern "C" void ext_00783BC0();

extern "C" __declspec(naked) void __fastcall fn_00705620(void* self, int edx_unused, void* arg) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 8]
        test ecx, ecx
        je skip
        push esi
        call ext_00783BC0
    skip:
        push 0
        mov ecx, esi
        call ext_00732CB0
        pop esi
        ret 4
    }
}

// [0x00705760] sub_00705760 (35 bytes)
extern "C" __declspec(naked) void __fastcall fn_00705760(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x84]
        mov eax, dword ptr [esi]
        and ecx, -0x2
        push ecx
        mov ecx, esi
        call dword ptr [eax + 0xbc]
        mov dword ptr [esi + 0xdc], 0x0
        pop esi
        ret
    }
}

// [0x00703CB0] sub_00703CB0 (36 bytes)
extern "C" int mem_00B5E9E8;
extern "C" int mem_00B5E9F0;
extern "C" int mem_00B5E9F8;
extern "C" void __cdecl fn_00703CB0(void) {
    double* p = *(double**)&mem_00925284;
    *(double*)&mem_00B5E9E8 = -*p;
    *(double*)&mem_00B5E9F0 = -*p;
    *(double*)&mem_00B5E9F8 = -*p;
}

// [0x00701150] sub_00701150 (36 bytes)
extern "C" int mem_00B5E7F0;
extern "C" int mem_00B5E7F8;
extern "C" int mem_00B5E800;
extern "C" void __cdecl fn_00701150(void) {
    *(double*)&mem_00B5E7F0 = -*(double*)mem_00925284;
    *(double*)&mem_00B5E7F8 = -*(double*)mem_00925284;
    *(double*)&mem_00B5E800 = -*(double*)mem_00925284;
}

// [0x0070C930] sub_0070C930 (36 bytes)
extern "C" int mem_00B5ED60;
extern "C" int mem_00B5ED68;
extern "C" int mem_00B5ED70;
extern "C" void __cdecl fn_0070C930() {
    double* p = *(double**)&mem_00925284;
    *(double*)&mem_00B5ED60 = -*p;
    *(double*)&mem_00B5ED68 = -*p;
    *(double*)&mem_00B5ED70 = -*p;
}

// [0x0070A2F0] sub_0070A2F0 (36 bytes)
extern "C" int mem_00B5EBE0;
extern "C" int mem_00B5EBE8;
extern "C" int mem_00B5EBF0;

extern "C" void __cdecl fn_0070A2F0() {
    double* p = *(double**)&mem_00925284;
    *(double*)&mem_00B5EBE0 = -*p;
    *(double*)&mem_00B5EBE8 = -*p;
    *(double*)&mem_00B5EBF0 = -*p;
}

// [0x0070F7D0] sub_0070F7D0 (36 bytes)
extern "C" int mem_00B5EEF8;
extern "C" int mem_00B5EF00;
extern "C" int mem_00B5EF08;

extern "C" void __cdecl fn_0070F7D0() {
    double* p = *(double**)&mem_00925284;
    *(double*)&mem_00B5EEF8 = -*p;
    *(double*)&mem_00B5EF00 = -*p;
    *(double*)&mem_00B5EF08 = -*p;
}

// [0x007001B0] sub_007001B0 (41 bytes)
extern "C" int mem_00B5E5C8;
extern "C" int mem_00B5E5D0;
extern "C" int mem_00B5E5CC;
extern "C" int mem_00B5E5D4;

extern "C" void __cdecl fn_007001B0() {
    mem_00B5E5C8 = 0xb5e5c0;
    mem_00B5E5D0 = 0xaab954;
    mem_00B5E5CC = 0xb5eb50;
    mem_00B5E5D4 = 0;
}

// [0x00703F80] sub_00703F80 (41 bytes)
extern "C" int mem_00B5E9A8;
extern "C" int mem_00B5E9B0;
extern "C" int mem_00B5E9AC;
extern "C" int mem_00B5E9B4;
extern "C" void __cdecl fn_00703F80() {
    mem_00B5E9A8 = 0xb5e9b8;
    mem_00B5E9B0 = 0xaabbf0;
    mem_00B5E9AC = 0xb5f050;
    mem_00B5E9B4 = 0;
}

// [0x00709B20] sub_00709B20 (41 bytes)
extern "C" int mem_00B5EB68;
extern "C" int mem_00B5EB70;
extern "C" int mem_00B5EB6C;
extern "C" int mem_00B5EB74;

extern "C" void __cdecl fn_00709B20() {
    mem_00B5EB68 = 0xb5eb48;
    mem_00B5EB70 = 0xaabd48;
    mem_00B5EB6C = 0xb5eb50;
    mem_00B5EB74 = 0;
}

// [0x0070A5C0] sub_0070A5C0 (41 bytes)
extern "C" int mem_00B5EBA8;
extern "C" int mem_00B5EBB0;
extern "C" int mem_00B5EBAC;
extern "C" int mem_00B5EBB4;
extern "C" void __cdecl fn_0070A5C0() {
    mem_00B5EBA8 = 0xb5eba0;
    mem_00B5EBB0 = 0xaabd74;
    mem_00B5EBAC = 0xb5f050;
    mem_00B5EBB4 = 0;
}

// [0x00705290] sub_00705290 (41 bytes)
extern "C" int mem_00B5EB50;
extern "C" int mem_00B5EB58;
extern "C" int mem_00B5EB54;
extern "C" int mem_00B5EB5C;

extern "C" void __cdecl fn_00705290() {
    mem_00B5EB50 = 0xb5eb78;
    mem_00B5EB58 = 0xaabd5c;
    mem_00B5EB54 = 0xb5e3f0;
    mem_00B5EB5C = 0;
}

// [0x00709B90] sub_00709B90 (41 bytes)
extern "C" int mem_00B5EB88;
extern "C" int mem_00B5EB90;
extern "C" int mem_00B5EB8C;
extern "C" int mem_00B5EB94;

extern "C" void __cdecl fn_00709B90() {
    mem_00B5EB88 = 0xb5eb60;
    mem_00B5EB90 = 0xaabd3c;
    mem_00B5EB8C = 0xb5eb68;
    mem_00B5EB94 = 0;
}

// [0x0070FAA0] sub_0070FAA0 (41 bytes)
extern "C" int mem_00B5EEC0;
extern "C" int mem_00B5EEC8;
extern "C" int mem_00B5EEC4;
extern "C" int mem_00B5EECC;

extern "C" void __cdecl fn_0070FAA0() {
    mem_00B5EEC0 = 0xb5eeb8;
    mem_00B5EEC8 = 0xaabecc;
    mem_00B5EEC4 = 0xb5f050;
    mem_00B5EECC = 0;
}

// [0x00701420] sub_00701420 (41 bytes)
extern "C" int mem_00B5E760;
extern "C" int mem_00B5E768;
extern "C" int mem_00B5E764;
extern "C" int mem_00B5E76C;

extern "C" void __cdecl fn_00701420() {
    mem_00B5E760 = 0xb5e75c;
    mem_00B5E768 = 0xaaba1c;
    mem_00B5E764 = 0xb5f050;
    mem_00B5E76C = 0;
}

// [0x0070FBA0] sub_0070FBA0 (43 bytes)
extern "C" void ext_00707A90();

extern "C" __declspec(naked) void __stdcall fn_0070FBA0() {
    __asm {
        mov eax, dword ptr [esp + 0x1c]
        mov edx, dword ptr [esp + 0x18]
        push eax
        mov eax, dword ptr [esp + 0x18]
        push edx
        mov edx, dword ptr [esp + 0x18]
        push eax
        mov eax, dword ptr [esp + 0x18]
        push edx
        mov edx, dword ptr [esp + 0x18]
        push eax
        mov eax, dword ptr [esp + 0x18]
        push edx
        push eax
        call ext_00707A90
        ret 0x1c
    }
}

// [0x007055F0] sub_007055F0 (43 bytes)
extern "C" int __stdcall ext_006FBC70(int a1);
extern "C" __declspec(naked) int __stdcall fn_007055F0(int a1, int* a2) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        test eax, eax
        je fallback
        mov edx, dword ptr [eax]
        push esi
        mov esi, dword ptr [esp + 0x8]
        cmp edx, esi
        pop esi
        jne fallback
        mov eax, dword ptr [eax + 0x4]
        push eax
        call ext_006FBC70
        ret 0x8
    fallback:
        xor eax, eax
        push eax
        call ext_006FBC70
        ret 0x8
    }
}

// [0x007004C0] sub_007004C0 (44 bytes)
extern "C" int mem_00B5E5C0;
extern "C" int mem_00B5EB78;
extern "C" int mem_00B5E400;
extern "C" __declspec(naked) void __fastcall fn_007004C0(void* self) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        mov ecx, dword ptr [mem_00B5E5C0]
        cmp eax, ecx
        jne L_007004D3
        mov al, 0x1
        ret 0x4
    L_007004D3:
        cmp eax, dword ptr [mem_00B5EB78]
        jne L_007004E0
        mov al, 0x1
        ret 0x4
    L_007004E0:
        cmp eax, dword ptr [mem_00B5E400]
        sete al
        ret 0x4
    }
}

// [0x007006B0] sub_007006B0 (44 bytes)
extern "C" int mem_00AABA00;
extern "C" int mem_00AAB9F0;
extern "C" int mem_00AAB9E4;
extern "C" __declspec(naked) void* __stdcall fn_007006B0(int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        sub eax, 0x0
        je L_case0
        dec eax
        je L_case1
        dec eax
        je L_case2
        xor eax, eax
        ret 0x4
    L_case2:
        mov eax, offset mem_00AABA00
        ret 0x4
    L_case1:
        mov eax, offset mem_00AAB9F0
        ret 0x4
    L_case0:
        mov eax, offset mem_00AAB9E4
        ret 0x4
    }
}

// [0x00704BB0] sub_00704BB0 (44 bytes)
extern "C" int mem_00AABD00;
extern "C" int mem_00AABD08;
extern "C" int mem_00AABD10;

extern "C" __declspec(naked) void* __stdcall fn_00704BB0(int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        sub eax, 0x0
        je L_case0
        dec eax
        je L_case1
        dec eax
        je L_case2
        xor eax, eax
        ret 0x4
    L_case2:
        mov eax, offset mem_00AABD10
        ret 0x4
    L_case1:
        mov eax, offset mem_00AABD08
        ret 0x4
    L_case0:
        mov eax, offset mem_00AABD00
        ret 0x4
    }
}

// [0x0070FE80] sub_0070FE80 (43 bytes)
extern "C" void ext_0070FBA0();

extern "C" __declspec(naked) void __stdcall fn_0070FE80() {
    __asm {
        mov eax, dword ptr [esp + 0x1c]
        mov edx, dword ptr [esp + 0x18]
        push eax
        mov eax, dword ptr [esp + 0x18]
        push edx
        mov edx, dword ptr [esp + 0x18]
        push eax
        mov eax, dword ptr [esp + 0x18]
        push edx
        mov edx, dword ptr [esp + 0x18]
        push eax
        mov eax, dword ptr [esp + 0x18]
        push edx
        push eax
        call ext_0070FBA0
        ret 0x1c
    }
}

// [0x00706CD0] sub_00706CD0 (45 bytes)
extern "C" __declspec(naked) void* __fastcall fn_00706CD0(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [ecx + 0x4]
        mov edx, dword ptr [esp + 0x4]
        mov ecx, dword ptr [ecx]
        add eax, edx
        lea eax, [eax + 2*eax]
        lea ecx, [ecx + 4*eax]
        mov eax, dword ptr [ecx + 0x4]
        test eax, eax
        je done
        mov edx, dword ptr [eax]
        push esi
        mov esi, dword ptr [ecx]
        cmp edx, esi
        pop esi
        jne done
        mov eax, dword ptr [eax + 0x4]
        ret 0x4
    done:
        xor eax, eax
        ret 0x4
    }
}

// [0x0070FBF0] sub_0070FBF0 (45 bytes)
extern "C" __declspec(naked) void __fastcall fn_0070FBF0(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        mov esi, ecx
        push eax
        call ext_0070FB00
        mov dword ptr [esi + 0xe8], 0
        mov dword ptr [esi], 0x995cac
        mov dword ptr [esi + 0xec], 0x40490000
        mov eax, esi
        pop esi
        ret 0x4
    }
}

// [0x007011F0] sub_007011F0 (46 bytes)
extern "C" int mem_00925284;
extern "C" double mem_00B5E828;
extern "C" double mem_00B5E830;
extern "C" double mem_00B5E838;
extern "C" double mem_00B5E840;

extern "C" void __cdecl fn_007011F0() {
    mem_00B5E828 = -*(double*)mem_00925284;
    mem_00B5E830 = -*(double*)mem_00925284;
    mem_00B5E838 = -*(double*)mem_00925284;
    mem_00B5E840 = -*(double*)mem_00925284;
}

// [0x0070F870] sub_0070F870 (46 bytes)
extern "C" int mem_00B5EF30;
extern "C" int mem_00B5EF38;
extern "C" int mem_00B5EF40;
extern "C" int mem_00B5EF48;
extern "C" void __cdecl fn_0070F870() {
    double* p = *(double**)&mem_00925284;
    *(double*)&mem_00B5EF30 = -*p;
    *(double*)&mem_00B5EF38 = -*p;
    *(double*)&mem_00B5EF40 = -*p;
    *(double*)&mem_00B5EF48 = -*p;
}

// [0x0070C9D0] sub_0070C9D0 (46 bytes)
extern "C" int mem_00925284;
extern "C" int mem_00B5ED98;
extern "C" int mem_00B5EDA0;
extern "C" int mem_00B5EDA8;
extern "C" int mem_00B5EDB0;

extern "C" void __cdecl fn_0070C9D0() {
    double* p = *(double**)&mem_00925284;
    *(double*)&mem_00B5ED98 = -*p;
    *(double*)&mem_00B5EDA0 = -*p;
    *(double*)&mem_00B5EDA8 = -*p;
    *(double*)&mem_00B5EDB0 = -*p;
}

// [0x0070A390] sub_0070A390 (46 bytes)
extern "C" int mem_00B5EC18;
extern "C" int mem_00B5EC20;
extern "C" int mem_00B5EC28;
extern "C" int mem_00B5EC30;

extern "C" void __cdecl fn_0070A390() {
    double* p = *(double**)&mem_00925284;
    *(double*)&mem_00B5EC18 = -*p;
    *(double*)&mem_00B5EC20 = -*p;
    *(double*)&mem_00B5EC28 = -*p;
    *(double*)&mem_00B5EC30 = -*p;
}

// [0x00703D50] sub_00703D50 (46 bytes)
extern "C" int mem_00B5EA20;
extern "C" int mem_00B5EA28;
extern "C" int mem_00B5EA30;
extern "C" int mem_00B5EA38;
extern "C" void __cdecl fn_00703D50() {
    double* p = *(double**)&mem_00925284;
    *(double*)&mem_00B5EA20 = -*p;
    *(double*)&mem_00B5EA28 = -*p;
    *(double*)&mem_00B5EA30 = -*p;
    *(double*)&mem_00B5EA38 = -*p;
}

// [0x0070D400] sub_0070D400 (46 bytes)
extern "C" void ext_006FE1C0();
extern "C" void ext_0077FA70();
extern "C" __declspec(naked) void __fastcall fn_0070D400(void* self) {
    __asm {
        push ebx
        push esi
        push edi
        mov edi, ecx
        call ext_006FE1C0
        mov ebx, dword ptr [edi + 0x58]
        xor esi, esi
        test ebx, ebx
        jle done
    loop_top:
        mov eax, dword ptr [edi + 0x68]
        mov ecx, dword ptr [eax + esi*4]
        call ext_006FE1C0
        inc esi
        cmp esi, ebx
        jl loop_top
    done:
        mov ecx, edi
        call ext_0077FA70
        pop edi
        pop esi
        pop ebx
        ret
    }
}

// [0x0070D7A0] sub_0070D7A0 (52 bytes)
extern "C" void ext_0070D7E0();
extern "C" void ext_00732CB0();
extern "C" __declspec(naked) void __fastcall fn_0070D7A0(void* self, int edx_unused, int a1) {
    __asm {
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        call ext_0070CF00
        mov ebp, dword ptr [esp + 0x14]
        mov ebx, eax
        xor esi, esi
        test ebx, ebx
        jle tail
    loop_top:
        push esi
        push ebp
        mov ecx, edi
        call ext_0070D7E0
        inc esi
        cmp esi, ebx
        jl loop_top
    tail:
        push ebp
        mov ecx, edi
        call ext_00732CB0
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x4
    }
}

// [0x007051B0] sub_007051B0 (53 bytes)
extern "C" __declspec(naked) void __fastcall fn_007051B0(void* self) {
    __asm {
        mov eax, dword ptr [ecx + 0xf0]
        test eax, eax
        je done
        mov byte ptr [eax + 0x7cc], 0
        mov eax, dword ptr [ecx + 0xf0]
        push offset mem_00B5D2C0
        mov byte ptr [eax + 0x7cd], 1
        mov ecx, dword ptr [ecx + 0xf0]
        add ecx, 0x7d0
        call ext_006B9EC0
    done:
        ret
    }
}

// [0x00708D70] sub_00708D70 (55 bytes)
extern "C" void ext_00711A80();

extern "C" __declspec(naked) int __fastcall fn_00708D70(void* self) {
    __asm {
        push    ebx
        push    esi
        push    edi
        mov     edi, ecx
        xor     ebx, ebx
        xor     esi, esi
        mov     eax, dword ptr [edi + 0xc0]
        test    eax, eax
        jle     loc_708da1

    loc_708d83:
        mov     eax, dword ptr [edi + 0xd0]
        mov     ecx, dword ptr [eax + 4*esi]
        call    ext_00711A80
        test    al, al
        je      loc_708d96
        inc     ebx

    loc_708d96:
        mov     eax, dword ptr [edi + 0xc0]
        inc     esi
        cmp     esi, eax
        jl      loc_708d83

    loc_708da1:
        pop     edi
        mov     eax, ebx
        pop     esi
        pop     ebx
        ret
    }
}

// [0x0070D430] sub_0070D430 (52 bytes)
extern "C" void ext_00732CB0();
extern "C" void ext_0070D470();
extern "C" __declspec(naked) void __fastcall fn_0070D430(void* self, int edx_unused, int a1) {
    __asm {
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 0xc]
        push esi
        push edi
        mov edi, ecx
        push ebp
        call ext_00732CB0
        mov ecx, edi
        call ext_0070CF00
        mov ebx, eax
        xor esi, esi
        test ebx, ebx
        jle done
    loop_top:
        push esi
        push ebp
        mov ecx, edi
        call ext_0070D470
        inc esi
        cmp esi, ebx
        jl loop_top
    done:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x4
    }
}

// [0x00701E80] sub_00701E80 (53 bytes)
extern "C" __declspec(naked) void* __stdcall fn_00701E80(unsigned int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        cmp eax, 0x3
        ja loc_701eb0
        jmp dword ptr [4*eax + 0x701eb8]
        mov eax, 0xaabb78
        ret 0x4
        mov eax, 0xaabb6c
        ret 0x4
        mov eax, 0xaabb60
        ret 0x4
        mov eax, 0xaabb54
        ret 0x4
loc_701eb0:
        xor eax, eax
        ret 0x4
    }
}

// [0x00701990] sub_00701990 (57 bytes)
extern "C" int mem_00B5E75C;
extern "C" int mem_00B5F060;
extern "C" int mem_00B5EB78;
extern "C" int mem_00B5E400;

extern "C" __declspec(naked) void __fastcall fn_00701990(void* self) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        mov ecx, dword ptr [mem_00B5E75C]
        cmp eax, ecx
        jne L_007019A3
        mov al, 0x1
        ret 0x4
    L_007019A3:
        cmp eax, dword ptr [mem_00B5F060]
        jne L_007019B0
        mov al, 0x1
        ret 0x4
    L_007019B0:
        cmp eax, dword ptr [mem_00B5EB78]
        jne L_007019BD
        mov al, 0x1
        ret 0x4
    L_007019BD:
        cmp eax, dword ptr [mem_00B5E400]
        sete al
        ret 0x4
    }
}

// [0x0070AAD0] sub_0070AAD0 (57 bytes)
extern "C" int mem_00B5EBA0;
extern "C" int mem_00B5F060;
extern "C" int mem_00B5EB78;
extern "C" int mem_00B5E400;
extern "C" __declspec(naked) void __fastcall fn_0070AAD0(void* self) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        mov ecx, dword ptr [mem_00B5EBA0]
        cmp eax, ecx
        jne L_0070AAE3
        mov al, 0x1
        ret 0x4
    L_0070AAE3:
        cmp eax, dword ptr [mem_00B5F060]
        jne L_0070AAF0
        mov al, 0x1
        ret 0x4
    L_0070AAF0:
        cmp eax, dword ptr [mem_00B5EB78]
        jne L_0070AAFD
        mov al, 0x1
        ret 0x4
    L_0070AAFD:
        cmp eax, dword ptr [mem_00B5E400]
        sete al
        ret 0x4
    }
}

// [0x00704A20] sub_00704A20 (57 bytes)
extern "C" void* mem_009251D8;
extern "C" __declspec(naked) void __fastcall fn_00704A20(void* self, int edx_unused, int arg0) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x81c]
        test eax, eax
        je loc_704a41
        push eax
        call dword ptr [mem_009251D8]
        add esp, 0x4
        mov dword ptr [esi + 0x81c], 0x0
loc_704a41:
        mov eax, dword ptr [esi]
        mov ecx, esi
        call dword ptr [eax + 0x10]
        test esi, esi
        je loc_704a55
        mov edx, dword ptr [esi]
        push 0x1
        mov ecx, esi
        call dword ptr [edx + 0x8]
loc_704a55:
        pop esi
        ret 0x4
    }
}

// [0x0070FB20] sub_0070FB20 (57 bytes)
extern "C" int mem_00B5EEB8;
extern "C" int mem_00B5F060;
extern "C" int mem_00B5EB78;
extern "C" int mem_00B5E400;

extern "C" __declspec(naked) void __fastcall fn_0070FB20(void* self) {
    __asm {
        __asm _emit 0x8B __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 // mov eax, dword ptr [esp + 0x4]
        mov ecx, dword ptr [mem_00B5EEB8]
        __asm _emit 0x3B __asm _emit 0xC1 // cmp eax, ecx
        __asm _emit 0x75 __asm _emit 0x05 // jne +5
        __asm _emit 0xB0 __asm _emit 0x01 // mov al, 0x1
        __asm _emit 0xC2 __asm _emit 0x04 __asm _emit 0x00 // ret 0x4
        cmp eax, dword ptr [mem_00B5F060]
        __asm _emit 0x75 __asm _emit 0x05 // jne +5
        __asm _emit 0xB0 __asm _emit 0x01 // mov al, 0x1
        __asm _emit 0xC2 __asm _emit 0x04 __asm _emit 0x00 // ret 0x4
        cmp eax, dword ptr [mem_00B5EB78]
        __asm _emit 0x75 __asm _emit 0x05 // jne +5
        __asm _emit 0xB0 __asm _emit 0x01 // mov al, 0x1
        __asm _emit 0xC2 __asm _emit 0x04 __asm _emit 0x00 // ret 0x4
        cmp eax, dword ptr [mem_00B5E400]
        __asm _emit 0x0F __asm _emit 0x94 __asm _emit 0xC0 // sete al
        __asm _emit 0xC2 __asm _emit 0x04 __asm _emit 0x00 // ret 0x4
    }
}

// [0x007045A0] sub_007045A0 (57 bytes)
extern "C" int mem_00B5E9B8;
extern "C" int mem_00B5F060;
extern "C" int mem_00B5EB78;
extern "C" int mem_00B5E400;

extern "C" __declspec(naked) void __fastcall fn_007045A0(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        mov ecx, dword ptr [mem_00B5E9B8]
        cmp eax, ecx
        jne L_007045B3
        mov al, 0x1
        ret 0x4
    L_007045B3:
        cmp eax, dword ptr [mem_00B5F060]
        jne L_007045C0
        mov al, 0x1
        ret 0x4
    L_007045C0:
        cmp eax, dword ptr [mem_00B5EB78]
        jne L_007045CD
        mov al, 0x1
        ret 0x4
    L_007045CD:
        cmp eax, dword ptr [mem_00B5E400]
        sete al
        ret 0x4
    }
}

// [0x0070D310] sub_0070D310 (53 bytes)
extern "C" void ext_006C9F70();
extern "C" void ext_006DC460();
extern "C" void ext_0070CF90();
extern "C" int mem_0092A278;

extern "C" double __fastcall fn_0070D310(void* self, int edx_unused, void* arg) {
    void* obj = *(void**)((char*)self + 4);
    if (obj) {
        void* a = ((void* (__thiscall*)(void*))ext_006DC460)(obj);
        void* res = ((void* (__thiscall*)(void*, void*, void*))ext_0070CF90)(self, a, arg);
        if (res) {
            return ((double (__thiscall*)(void*))ext_006C9F70)(res);
        }
    }
    return *(double*)&mem_0092A278;
}

// [0x0070AC00] sub_0070AC00 (60 bytes)
extern "C" __declspec(naked) void __fastcall fn_0070AC00(void* self, int edx_unused, void* out) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        mov edx, dword ptr [ecx + 0x200]
        mov dword ptr [eax], edx
        mov edx, dword ptr [ecx + 0x204]
        mov dword ptr [eax + 0x4], edx
        mov edx, dword ptr [ecx + 0x208]
        mov dword ptr [eax + 0x8], edx
        mov edx, dword ptr [ecx + 0x20c]
        mov dword ptr [eax + 0xc], edx
        mov edx, dword ptr [ecx + 0x210]
        mov dword ptr [eax + 0x10], edx
        mov ecx, dword ptr [ecx + 0x214]
        mov dword ptr [eax + 0x14], ecx
        ret 0x4
    }
}

// [0x0070AC80] sub_0070AC80 (60 bytes)
extern "C" __declspec(naked) void __fastcall fn_0070AC80(void* self, int edx_unused, void* out) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        mov edx, dword ptr [ecx + 0x2a0]
        mov dword ptr [eax], edx
        mov edx, dword ptr [ecx + 0x2a4]
        mov dword ptr [eax + 0x4], edx
        mov edx, dword ptr [ecx + 0x2a8]
        mov dword ptr [eax + 0x8], edx
        mov edx, dword ptr [ecx + 0x2ac]
        mov dword ptr [eax + 0xc], edx
        mov edx, dword ptr [ecx + 0x2b0]
        mov dword ptr [eax + 0x10], edx
        mov ecx, dword ptr [ecx + 0x2b4]
        mov dword ptr [eax + 0x14], ecx
        ret 0x4
    }
}

// [0x007057F0] sub_007057F0 (62 bytes)
extern "C" int mem_00B5EB80;
extern "C" __declspec(naked) void __fastcall fn_007057F0(void* self, int edx_unused, unsigned char a1) {
    __asm {
        mov al, byte ptr [esp + 0x4]
        mov dl, byte ptr [ecx + 0x70]
        cmp dl, al
        je done
        test al, al
        mov byte ptr [ecx + 0x70], al
        je second
        mov eax, dword ptr [ecx]
        push -1
        push 0
        push offset mem_00B5EB80
        push 0x13
        call dword ptr [eax + 0xa4]
        ret 0x4
    second:
        mov edx, dword ptr [ecx]
        push -1
        push 0
        push offset mem_00B5EB80
        push 0x14
        call dword ptr [edx + 0xa4]
    done:
        ret 0x4
    }
}

// [0x00702700] sub_00702700 (58 bytes)
extern "C" __declspec(naked) int __fastcall fn_00702700(void* self) {
    __asm {
        _emit 0x8b
        _emit 0x81
        _emit 0x68
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x8b
        _emit 0x80
        _emit 0x60
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x48
        _emit 0x83
        _emit 0xf8
        _emit 0x04
        _emit 0x77
        _emit 0x25
        _emit 0xff
        _emit 0x24
        _emit 0x85
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xb8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xc3
        _emit 0xb8
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xc3
        _emit 0xb8
        _emit 0x03
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xc3
        _emit 0xb8
        _emit 0x04
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xc3
        _emit 0xb8
        _emit 0x05
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xc3
        _emit 0x33
        _emit 0xc0
        _emit 0xc3
    }
}

// [0x0070AD00] sub_0070AD00 (60 bytes)
extern "C" __declspec(naked) void* __fastcall fn_0070AD00(void* self, int edx_unused, void* out) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        mov edx, dword ptr [ecx + 0x340]
        mov dword ptr [eax], edx
        mov edx, dword ptr [ecx + 0x344]
        mov dword ptr [eax + 0x4], edx
        mov edx, dword ptr [ecx + 0x348]
        mov dword ptr [eax + 0x8], edx
        mov edx, dword ptr [ecx + 0x34c]
        mov dword ptr [eax + 0xc], edx
        mov edx, dword ptr [ecx + 0x350]
        mov dword ptr [eax + 0x10], edx
        mov ecx, dword ptr [ecx + 0x354]
        mov dword ptr [eax + 0x14], ecx
        ret 0x4
    }
}

// [0x0070AB80] sub_0070AB80 (60 bytes)
extern "C" __declspec(naked) void* __fastcall fn_0070AB80(void* self, int edx_unused, void* out) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        mov edx, dword ptr [ecx + 0x160]
        mov dword ptr [eax], edx
        mov edx, dword ptr [ecx + 0x164]
        mov dword ptr [eax + 0x4], edx
        mov edx, dword ptr [ecx + 0x168]
        mov dword ptr [eax + 0x8], edx
        mov edx, dword ptr [ecx + 0x16c]
        mov dword ptr [eax + 0xc], edx
        mov edx, dword ptr [ecx + 0x170]
        mov dword ptr [eax + 0x10], edx
        mov ecx, dword ptr [ecx + 0x174]
        mov dword ptr [eax + 0x14], ecx
        ret 0x4
    }
}

// [0x0070ACC0] sub_0070ACC0 (63 bytes)
extern "C" __declspec(naked) void __fastcall fn_0070ACC0(void* self) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        mov edx, dword ptr [esp + 0x8]
        mov dword ptr [ecx + 0x340], eax
        mov eax, dword ptr [esp + 0xc]
        mov dword ptr [ecx + 0x344], edx
        mov edx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x348], eax
        mov eax, dword ptr [esp + 0x14]
        mov dword ptr [ecx + 0x34c], edx
        mov edx, dword ptr [esp + 0x18]
        mov dword ptr [ecx + 0x350], eax
        mov dword ptr [ecx + 0x354], edx
        ret 0x20
    }
}

// [0x0070AB40] sub_0070AB40 (63 bytes)
extern "C" void __fastcall fn_0070AB40(void* self, int edx_unused, int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8) {
    char* p = (char*)self;
    *(int*)(p + 0x160) = a1;
    *(int*)(p + 0x164) = a2;
    *(int*)(p + 0x168) = a3;
    *(int*)(p + 0x16c) = a4;
    *(int*)(p + 0x170) = a5;
    *(int*)(p + 0x174) = a6;
}

// [0x00701A80] sub_00701A80 (63 bytes)
extern "C" void __fastcall fn_00701A80(void* self, int edx_unused, int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8) {
    char* p = (char*)self;
    *(int*)(p + 0x5a0) = a1;
    *(int*)(p + 0x5a4) = a2;
    *(int*)(p + 0x5a8) = a3;
    *(int*)(p + 0x5ac) = a4;
    *(int*)(p + 0x5b0) = a5;
    *(int*)(p + 0x5b4) = a6;
}

// [0x0070ABC0] sub_0070ABC0 (63 bytes)
extern "C" void __fastcall fn_0070ABC0(void* self, int edx_unused, int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8) {
    char* p = (char*)self;
    *(int*)(p + 0x200) = a1;
    *(int*)(p + 0x204) = a2;
    *(int*)(p + 0x208) = a3;
    *(int*)(p + 0x20c) = a4;
    *(int*)(p + 0x210) = a5;
    *(int*)(p + 0x214) = a6;
}

// [0x0070AC40] sub_0070AC40 (63 bytes)
extern "C" void __fastcall fn_0070AC40(void* self, int edx_unused, int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8) {
    char* p = (char*)self;
    *(int*)(p + 0x2a0) = a1;
    *(int*)(p + 0x2a4) = a2;
    *(int*)(p + 0x2a8) = a3;
    *(int*)(p + 0x2ac) = a4;
    *(int*)(p + 0x2b0) = a5;
    *(int*)(p + 0x2b4) = a6;
}

// [0x00701B10] sub_00701B10 (63 bytes)
extern "C" void __fastcall fn_00701B10(void* self, int edx_unused, int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8) {
    char* p = (char*)self;
    *(int*)(p + 0x640) = a1;
    *(int*)(p + 0x644) = a2;
    *(int*)(p + 0x648) = a3;
    *(int*)(p + 0x64c) = a4;
    *(int*)(p + 0x650) = a5;
    *(int*)(p + 0x654) = a6;
}

// [0x00709100] sub_00709100 (62 bytes)
extern "C" void ext_00708FF0();
extern "C" __declspec(naked) void __fastcall fn_00709100(void* self, int edx_unused, int a1, int flags) {
    __asm {
        push ebx
        mov bl, byte ptr [esp + 0xc]
        push esi
        push edi
        mov edi, dword ptr [esp + 0x10]
        mov esi, ecx
        test bl, 0x1
        je skip1
        mov eax, dword ptr [esi]
        push edi
        call dword ptr [eax + 0xfc]
    skip1:
        test bl, 0x4
        je skip2
        push edi
        mov ecx, esi
        call ext_00708FF0
    skip2:
        test bl, 0x8
        je skip3
        mov edx, dword ptr [esi]
        push edi
        mov ecx, esi
        call dword ptr [edx + 0x100]
    skip3:
        pop edi
        pop esi
        pop ebx
        ret 0x8
    }
}

// [0x007051F0] sub_007051F0 (68 bytes)
extern "C" __declspec(naked) void __fastcall fn_007051F0(void* self) {
    __asm {
        sub esp, 0x8
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x50]
        test eax, eax
        je skip
        mov ecx, dword ptr [esi + 0x8]
        lea edx, [esp + 0x4]
        push edx
        call eax
        mov ecx, dword ptr [eax]
        mov dword ptr [esi + 0x80], ecx
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [esi + 0x84], edx
    skip:
        mov eax, dword ptr [esp + 0x10]
        mov ecx, dword ptr [esi + 0x80]
        mov dword ptr [eax], ecx
        mov edx, dword ptr [esi + 0x84]
        mov dword ptr [eax + 0x4], edx
        pop esi
        add esp, 0x8
        ret 0x10
    }
}

// [0x00700F50] sub_00700F50 (68 bytes)
extern "C" void ext_006D2170();
extern "C" __declspec(naked) void __fastcall fn_00700F50(void* self, int edx_unused, void* a1) {
    __asm {
        push ebx
        mov ebx, ecx
        push ebp
        push esi
        mov eax, dword ptr [ebx + 0xc]
        xor esi, esi
        mov ebp, dword ptr [eax + 0xc0]
        test ebp, ebp
        jle done
        push edi
        mov edi, dword ptr [esp + 0x14]
    loop_top:
        mov ecx, dword ptr [ebx + 0xc]
        mov edx, dword ptr [ecx + 0xd0]
        lea ecx, [esp + 0x14]
        push ecx
        mov ecx, edi
        mov eax, dword ptr [edx + 4*esi]
        mov edx, dword ptr [edi]
        push edx
        mov dword ptr [esp + 0x1c], eax
        call ext_006D2170
        inc esi
        cmp esi, ebp
        jl loop_top
        pop edi
    done:
        pop esi
        pop ebp
        pop ebx
        ret 0x4
    }
}

// [0x00701E20] sub_00701E20 (69 bytes)
extern "C" __declspec(naked) void* __stdcall fn_00701E20(unsigned int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        cmp eax, 0x5
        ja loc_701e60
        jmp dword ptr [4*eax + 0x701e68]
        mov eax, 0xaa8cec
        ret 0x4
        mov eax, 0xaabb38
        ret 0x4
        mov eax, 0xaabb2c
        ret 0x4
        mov eax, 0xaabb20
        ret 0x4
        mov eax, 0xaabb14
        ret 0x4
        mov eax, 0xaabafc
        ret 0x4
    loc_701e60:
        xor eax, eax
        ret 0x4
    }
}

// [0x00708C10] sub_00708C10 (65 bytes)
extern "C" __declspec(naked) int __fastcall fn_00708C10(void* self, int edx_unused, int arg) {
    __asm {
        push esi
        mov esi, dword ptr [ecx + 0xc0]
        xor eax, eax
        test esi, esi
        push edi
        jle not_found
        mov edx, dword ptr [ecx + 0xd0]
        mov edi, dword ptr [esp + 0xc]
    loop_start:
        cmp dword ptr [edx], edi
        je found
        inc eax
        add edx, 4
        cmp eax, esi
        jl loop_start
    not_found:
        pop edi
        pop esi
        mov eax, 1
        ret 4
    found:
        cmp eax, -1
        je not_found
        mov edx, dword ptr [ecx]
        push eax
        call dword ptr [edx + 0xe8]
        pop edi
        pop esi
        ret 4
    }
}

// [0x00708FF0] sub_00708FF0 (65 bytes)
extern "C" void ext_00708D70();
extern "C" void ext_00708D10();
extern "C" __declspec(naked) void __fastcall fn_00708FF0(void* self, int edx_unused, void* a1) {
    __asm {
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr [esp + 0x14]
        mov ebp, ecx
        test edi, edi
        je done
        mov ecx, edi
        call ext_00708D70
        mov ebx, eax
        xor esi, esi
        test ebx, ebx
        jle done
    loop_start:
        push esi
        mov ecx, edi
        call ext_00708D10
        test eax, eax
        je next_iter
        mov edx, dword ptr [ebp]
        push eax
        mov ecx, ebp
        call dword ptr [edx + 0xf4]
    next_iter:
        inc esi
        cmp esi, ebx
        jl loop_start
    done:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x4
    }
}

// [0x00707F50] sub_00707F50 (73 bytes)
extern "C" __declspec(naked) bool __fastcall fn_00707F50(void* self, int dummy_edx, int arg1, int arg2) {
    __asm {
        push ebx
        push esi
        mov esi, dword ptr [ecx + 0x8c]
        xor edx, edx
        push edi
        test esi, esi
        jle done_false
        mov eax, dword ptr [ecx + 0x9c]
        mov ebx, dword ptr [esp + 0x14]
        mov edi, dword ptr [esp + 0x10]
    loop_start:
        mov ecx, dword ptr [eax]
        cmp ecx, edi
        jne check_reverse
        cmp dword ptr [eax + 0x4], ebx
        je done_true
    check_reverse:
        cmp ecx, ebx
        jne next_iter
        cmp dword ptr [eax + 0x4], edi
        je done_true
    next_iter:
        inc edx
        add eax, 0x10
        cmp edx, esi
        jl loop_start
    done_false:
        pop edi
        pop esi
        xor al, al
        pop ebx
        ret 0x8
    done_true:
        pop edi
        pop esi
        mov al, 0x1
        pop ebx
        ret 0x8
    }
}

// [0x00701AC0] sub_00701AC0 (74 bytes)
extern "C" __declspec(naked) void __fastcall fn_00701AC0(void* self, void* dummy, void* out) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        mov edx, dword ptr [ecx + 0x5a0]
        mov dword ptr [eax], edx
        mov edx, dword ptr [ecx + 0x5a4]
        mov dword ptr [eax + 0x4], edx
        mov edx, dword ptr [ecx + 0x5a8]
        mov dword ptr [eax + 0x8], edx
        mov edx, dword ptr [ecx + 0x5ac]
        mov dword ptr [eax + 0xc], edx
        mov edx, dword ptr [ecx + 0x5b0]
        mov dword ptr [eax + 0x10], edx
        mov ecx, dword ptr [ecx + 0x5b4]
        mov dword ptr [eax + 0x18], 0
        mov dword ptr [eax + 0x14], ecx
        mov dword ptr [eax + 0x1c], 0x3ff00000
        ret 0x4
    }
}

// [0x00701B50] sub_00701B50 (74 bytes)
extern "C" __declspec(naked) void __fastcall fn_00701B50(void* self, void* dummy, void* out) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        mov edx, dword ptr [ecx + 0x640]
        mov dword ptr [eax], edx
        mov edx, dword ptr [ecx + 0x644]
        mov dword ptr [eax + 0x4], edx
        mov edx, dword ptr [ecx + 0x648]
        mov dword ptr [eax + 0x8], edx
        mov edx, dword ptr [ecx + 0x64c]
        mov dword ptr [eax + 0xc], edx
        mov edx, dword ptr [ecx + 0x650]
        mov dword ptr [eax + 0x10], edx
        mov ecx, dword ptr [ecx + 0x654]
        mov dword ptr [eax + 0x18], 0x0
        mov dword ptr [eax + 0x14], ecx
        mov dword ptr [eax + 0x1c], 0x3ff00000
        ret 0x4
    }
}

// [0x00703CF0] sub_00703CF0 (74 bytes)
extern "C" int mem_00B5EA00;
extern "C" int mem_00B5EA04;
extern "C" int mem_00B5EA08;
extern "C" int mem_00B5EA0C;
extern "C" int mem_00B5EA10;
extern "C" int mem_00B5EA14;
extern "C" int mem_00B5EA18;
extern "C" int mem_00B5EA1C;

extern "C" __declspec(naked) void __fastcall fn_00703CF0(void* self) {
    __asm {
        mov eax, dword ptr [mem_00925284]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [mem_00B5EA00], ecx
        mov dword ptr [mem_00B5EA04], edx
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [mem_00B5EA08], ecx
        mov dword ptr [mem_00B5EA0C], edx
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [mem_00B5EA10], ecx
        mov dword ptr [mem_00B5EA14], edx
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [mem_00B5EA18], ecx
        mov dword ptr [mem_00B5EA1C], edx
        ret
    }
}

// [0x00700B60] sub_00700B60 (74 bytes)
extern "C" void ext_006C9510();
extern "C" void ext_006CD330();
extern "C" void ext_006DC460();
extern "C" void ext_00708000();

extern "C" __declspec(naked) void __fastcall fn_00700B60(void* self, int edx_unused, double a1) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x4]
        test ecx, ecx
        je skip
        call ext_006DC460
        fld qword ptr [esp + 0x8]
        push ecx
        mov ecx, eax
        fstp dword ptr [esp]
        call ext_006C9510
        mov ecx, eax
        call ext_006CD330
    skip:
        mov ecx, dword ptr [esi + 0xc]
        push 0xaa8d0c
        call ext_00708000
        mov ecx, dword ptr [esp + 0xc]
        mov edx, dword ptr [eax]
        push ecx
        mov ecx, dword ptr [esp + 0xc]
        push ecx
        mov ecx, eax
        call dword ptr [edx + 0x80]
        pop esi
        ret 8
    }
}

// [0x00707FB0] sub_00707FB0 (77 bytes)
extern "C" __declspec(naked) void __fastcall fn_00707FB0(void* self) {
    __asm {
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr [esi + 0xa4]
        lea ebp, [esi + 0xa4]
        dec edi
        js loc_707ff2
        push ebx
        mov ebx, dword ptr [mem_009251D8]
    loc_707fcb:
        mov ecx, dword ptr [esi + 0xb4]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [ecx + 4*edi]
        mov ecx, esi
        push edx
        call dword ptr [eax + 0xd8]
        mov eax, dword ptr [esi + 0xb4]
        mov ecx, dword ptr [eax + 4*edi]
        push ecx
        call ebx
        add esp, 4
        dec edi
        jns loc_707fcb
        pop ebx
    loc_707ff2:
        mov ecx, ebp
        call ext_006D2250
        pop edi
        pop esi
        pop ebp
        ret
    }
}

// [0x007050F0] sub_007050F0 (75 bytes)
extern "C" __declspec(naked) void __fastcall fn_007050F0(void* self, int edx_unused, void* arg) {
    __asm {
        push ebx
        push ebp
        push edi
        mov edi, ecx
        xor ebx, ebx
        mov eax, dword ptr [edi + 0xf0]
        mov ebp, dword ptr [eax + 0xc0]
        test ebp, ebp
        jle done
        push esi
    loop_start:
        mov ecx, dword ptr [edi + 0xf0]
        mov edx, dword ptr [ecx + 0xd0]
        mov esi, dword ptr [edx + 4*ebx]
        mov ecx, esi
        call ext_00711A50
        test al, al
        je skip
        mov eax, dword ptr [esp + 0x14]
        mov ecx, edi
        push eax
        push esi
        call ext_006DD040
    skip:
        inc ebx
        cmp ebx, ebp
        jl loop_start
        pop esi
    done:
        pop edi
        pop ebp
        pop ebx
        ret 0x4
    }
}

// [0x00701190] sub_00701190 (74 bytes)
extern "C" int mem_00B5E808;
extern "C" int mem_00B5E80C;
extern "C" int mem_00B5E810;
extern "C" int mem_00B5E814;
extern "C" int mem_00B5E818;
extern "C" int mem_00B5E81C;
extern "C" int mem_00B5E820;
extern "C" int mem_00B5E824;

extern "C" __declspec(naked) void __fastcall fn_00701190(void* self) {
    __asm {
        mov eax, dword ptr [mem_00925284]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [mem_00B5E808], ecx
        mov dword ptr [mem_00B5E80C], edx
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [mem_00B5E810], ecx
        mov dword ptr [mem_00B5E814], edx
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [mem_00B5E818], ecx
        mov dword ptr [mem_00B5E81C], edx
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [mem_00B5E820], ecx
        mov dword ptr [mem_00B5E824], edx
        ret
    }
}

// [0x00708C60] sub_00708C60 (84 bytes)
extern "C" void ext_00711A20();
extern "C" void ext_006FBC90();
extern "C" void ext_006FBCE0();
extern "C" __declspec(naked) void __fastcall fn_00708C60(void* self, int edx_unused, int idx) {
    __asm {
        mov edx, dword ptr [ecx + 0xd0]
        mov eax, dword ptr [esp + 0x4]
        push esi
        push eax
        mov esi, dword ptr [edx + 4*eax]
        mov edx, dword ptr [ecx]
        call dword ptr [edx + 0xe4]
        test eax, eax
        jne ret_one
        push 1
        mov ecx, esi
        call ext_00711A20
        test al, al
        je not_zero
        mov eax, dword ptr [esi]
        push 0
        mov ecx, esi
        call dword ptr [eax + 4]
        xor eax, eax
        pop esi
        ret 4
    not_zero:
        mov ecx, esi
        call ext_006FBC90
        mov ecx, esi
        call ext_006FBCE0
        xor eax, eax
        pop esi
        ret 4
    ret_one:
        mov eax, 1
        pop esi
        ret 4
    }
}

// [0x00701D00] sub_00701D00 (84 bytes)
extern "C" void ext_00710F80();
extern "C" void ext_00711CF0();
extern "C" void ext_00712A80();
extern "C" void ext_00712FC0();
extern "C" void ext_0071E680();
extern "C" __declspec(naked) void __fastcall fn_00701D00(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        push esi
        push edi
        mov esi, ecx
        push eax
        call ext_00712FC0
        mov edi, eax
        push edi
        call ext_00712A80
        add esp, 0x8
        mov edx, dword ptr [esi]
        mov ecx, esi
        push 0x0
        push 0x0
        push 0x0
        push edi
        push eax
        mov eax, dword ptr [esp + 0x20]
        push eax
        call dword ptr [edx + 0xdc]
        mov esi, eax
        push 0x1
        push 0x2
        mov ecx, esi
        call ext_0071E680
        mov ecx, eax
        call ext_00710F80
        push 0x1
        push 0x8
        mov ecx, esi
        call ext_00711CF0
        pop edi
        pop esi
        ret 0x8
    }
}

// [0x00704B30] sub_00704B30 (85 bytes)
extern "C" __declspec(naked) void __stdcall fn_00704B30(unsigned int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        cmp eax, 0x7
        ja t704b30_default
        _emit 0xff
        _emit 0x24
        _emit 0x85
        _emit 0x88
        _emit 0x4b
        _emit 0x70
        _emit 0x00
    t704b30_c0:
        mov eax, 0xaab920
        ret 0x4
    t704b30_c1:
        mov eax, 0xaabcf8
        ret 0x4
    t704b30_c2:
        mov eax, 0xaabce8
        ret 0x4
    t704b30_c3:
        mov eax, 0xaabcd8
        ret 0x4
    t704b30_c4:
        mov eax, 0xaabcc8
        ret 0x4
    t704b30_c5:
        mov eax, 0xaabcb8
        ret 0x4
    t704b30_c6:
        mov eax, 0xaabca4
        ret 0x4
    t704b30_c7:
        mov eax, 0xaabc90
        ret 0x4
    t704b30_default:
        xor eax, eax
        ret 0x4
    }
}

// [0x00706DD0] sub_00706DD0 (87 bytes)
extern "C" void ext_006A5C62();
extern "C" void ext_006B9D10();

extern "C" __declspec(naked) void __fastcall fn_00706DD0(void* self) {
    __asm {
        push -1
        push 0x008B8FDB
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push 0x4c
        call ext_006A5C62
        add esp, 4
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x00
        test eax, eax
        mov dword ptr [esp + 0xc], 0
        je L_null
        mov ecx, eax
        call ext_006B9D10
        mov ecx, dword ptr [esp + 0x4]
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    L_null:
        mov ecx, dword ptr [esp + 0x4]
        xor eax, eax
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00704D00] sub_00704D00 (87 bytes)
extern "C" int mem_008BBD58;
extern "C" int mem_00995708;
extern "C" void ext_006DC2C0();

extern "C" __declspec(naked) void __fastcall fn_00704D00(void* self) {
    __asm {
        push -0x1
        push offset mem_008BBD58
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        mov dword ptr [esi], offset mem_00995708
        mov ecx, dword ptr [esi + 0xf0]
        push 0x0
        mov dword ptr [esp + 0x14], 0x0
        mov eax, dword ptr [ecx]
        call dword ptr [eax + 0x4]
        mov ecx, esi
        mov dword ptr [esp + 0x10], 0xffffffff
        call ext_006DC2C0
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00700650] sub_00700650 (82 bytes)
extern "C" void ext_00712FC0();
extern "C" void ext_00712A80();
extern "C" void ext_0071E680();
extern "C" void ext_00710F80();
extern "C" void ext_00711CF0();
extern "C" __declspec(naked) void __fastcall fn_00700650(void* self, int edx_unused, void* a1) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 8]
        push esi
        push edi
        mov esi, ecx
        push ebx
        call ext_00712FC0
        mov edi, eax
        push edi
        call ext_00712A80
        mov edx, dword ptr [esi]
        add esp, 8
        mov ecx, esi
        push 0
        push 0
        push 0
        push edi
        push eax
        push ebx
        call dword ptr [edx + 0xdc]
        mov esi, eax
        push 1
        push 2
        mov ecx, esi
        call ext_0071E680
        mov ecx, eax
        call ext_00710F80
        push 1
        push 8
        mov ecx, esi
        call ext_00711CF0
        pop edi
        pop esi
        pop ebx
        ret 4
    }
}

// [0x00709AB0] sub_00709AB0 (94 bytes)
extern "C" __declspec(naked) bool __fastcall fn_00709AB0(void* self, int edx_unused, int arg1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        test eax, eax
        jne ret_false
        mov eax, dword ptr [ecx + 0x14]
        test eax, eax
        jne ret_false
        mov eax, dword ptr [ecx + 0x18]
        cmp eax, 0x1
        jg ret_false
        jne check_arr
        mov eax, dword ptr [ecx + 0x4c]
        mov edx, dword ptr [ecx + 0x48]
        test eax, eax
        je ret_false
        cmp dword ptr [eax], edx
        jne ret_false
    check_arr:
        mov eax, dword ptr [ecx + 0xc0]
        dec eax
        js ret_true
        mov ecx, dword ptr [ecx + 0xd0]
        lea edx, [ecx + 4*eax]
    loop_start:
        mov ecx, dword ptr [edx]
        mov esi, dword ptr [ecx + 0x18]
        test esi, esi
        jne ret_false
        mov esi, dword ptr [ecx + 0x14]
        test esi, esi
        jne ret_false
        dec eax
        sub edx, 0x4
        test eax, eax
        jge loop_start
    ret_true:
        mov al, 0x1
        pop esi
        ret 0x4
    ret_false:
        xor al, al
        pop esi
        ret 0x4
    }
}

// [0x00701ED0] sub_00701ED0 (109 bytes)
extern "C" __declspec(naked) void* __stdcall fn_00701ED0(unsigned int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        cmp eax, 0xa
        ja t701ed0_default
        jmp dword ptr [4*eax + 0x701f40]
        mov eax, 0xaab920
        ret 0x4
        mov eax, 0xaabbc0
        ret 0x4
        mov eax, 0xaa8ca0
        ret 0x4
        mov eax, 0xaa8ca8
        ret 0x4
        mov eax, 0xaa8ca4
        ret 0x4
        mov eax, 0xaabbb4
        ret 0x4
        mov eax, 0xaabba8
        ret 0x4
        mov eax, 0xaabb9c
        ret 0x4
        mov eax, 0xaabb90
        ret 0x4
        mov eax, 0xaabb8c
        ret 0x4
        mov eax, 0xaabb84
        ret 0x4
    t701ed0_default:
        xor eax, eax
        ret 0x4
    }
}

// [0x00707990] sub_00707990 (115 bytes)
extern "C" __declspec(naked) void __fastcall fn_00707990(void* self) {
    __asm {
        push ebx
        push ebp
        mov ebx, dword ptr [esp + 0x1c]
        mov ebp, dword ptr [esp + 0x18]
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr [esp + 0x28]
        mov eax, dword ptr [esi + 0x4c]
        test eax, eax
        je L_call
        mov eax, dword ptr [eax]
        mov ecx, dword ptr [esi + 0x48]
        cmp eax, ecx
        jne L_call
        mov eax, dword ptr [esi + 0x4c]
        test eax, eax
        je L_zero
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [esi + 0x48]
        cmp ecx, edx
        jne L_zero
        mov ecx, dword ptr [eax + 0x4]
        jmp L_have
L_zero:
        xor ecx, ecx
L_have:
        mov eax, dword ptr [esp + 0x1c]
        mov edx, dword ptr [ecx]
        push edi
        push ebx
        push ebp
        push eax
        mov eax, dword ptr [esp + 0x28]
        push eax
        mov eax, dword ptr [esp + 0x28]
        push eax
        call dword ptr [edx + 0x12c]
L_call:
        mov ecx, dword ptr [esp + 0x1c]
        mov edx, dword ptr [esp + 0x18]
        mov eax, dword ptr [esp + 0x14]
        push edi
        push ebx
        push ebp
        push ecx
        push edx
        push eax
        mov ecx, esi
        call ext_006FAD00
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x18
    }
}

// [0x00709F10] sub_00709F10 (115 bytes)
extern "C" void ext_006B9D70();
extern "C" void ext_006B9E60();

extern "C" __declspec(naked) void __fastcall fn_00709F10(void* self, int edx_unused, void* a1, int a2, int a3, int a4) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -0x1
        push 0x8bcb18
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x4c
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x50]
        test eax, eax
        je loc_709F61
        mov ecx, dword ptr [esi + 0x8]
        lea edx, [esp + 0x4]
        push edx
        call eax
        push eax
        lea ecx, [esi + 0x80]
        mov dword ptr [esp + 0x5c], 0x0
        call ext_006B9E60
        lea ecx, [esp + 0x4]
        mov dword ptr [esp + 0x58], 0xffffffff
        call ext_006B9D70
    loc_709F61:
        mov ecx, dword ptr [esp + 0x60]
        add esi, 0x80
        push esi
        call ext_006B9E60
        mov ecx, dword ptr [esp + 0x50]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x58
        ret 0x10
    }
}

// [0x00707A10] sub_00707A10 (115 bytes)
extern "C" __declspec(naked) void __fastcall fn_00707A10(void* self, int edx_unused, int a1, int a2, int a3, int a4, int a5, int a6) {
    __asm {
        push    ebx
        push    ebp
        mov     ebx, dword ptr [esp + 0x1c]
        mov     ebp, dword ptr [esp + 0x18]
        push    esi
        mov     esi, ecx
        push    edi
        mov     edi, dword ptr [esp + 0x28]
        mov     eax, dword ptr [esi + 0x4c]
        test    eax, eax
        je      loc_707A63
        mov     eax, dword ptr [eax]
        mov     ecx, dword ptr [esi + 0x48]
        cmp     eax, ecx
        jne     loc_707A63
        mov     eax, dword ptr [esi + 0x4c]
        test    eax, eax
        je      loc_707A47
        mov     ecx, dword ptr [eax]
        mov     edx, dword ptr [esi + 0x48]
        cmp     ecx, edx
        jne     loc_707A47
        mov     ecx, dword ptr [eax + 0x4]
        jmp     loc_707A49
loc_707A47:
        xor     ecx, ecx
loc_707A49:
        mov     eax, dword ptr [esp + 0x1c]
        mov     edx, dword ptr [ecx]
        push    edi
        push    ebx
        push    ebp
        push    eax
        mov     eax, dword ptr [esp + 0x28]
        push    eax
        mov     eax, dword ptr [esp + 0x28]
        push    eax
        call    dword ptr [edx + 0x128]
loc_707A63:
        mov     ecx, dword ptr [esp + 0x1c]
        mov     edx, dword ptr [esp + 0x18]
        mov     eax, dword ptr [esp + 0x14]
        push    edi
        push    ebx
        push    ebp
        push    ecx
        push    edx
        push    eax
        mov     ecx, esi
        call    ext_006FAC10
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x18
    }
}

// [0x0070B040] sub_0070B040 (119 bytes)
extern "C" void ext_006DC2C0();
extern "C" void ext_007641C0();
extern "C" void ext_006B9D70();
extern "C" __declspec(naked) void __fastcall fn_0070B040(void* self) {
    __asm {
        push -1
        push 0x8bc424
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        mov dword ptr [esi], 0x995b04
        mov ecx, dword ptr [esi + 0xf0]
        push 0
        mov dword ptr [esp + 0x14], 2
        mov eax, dword ptr [ecx]
        call dword ptr [eax + 0x4]
        lea ecx, [esi + 0x140]
        mov byte ptr [esp + 0x10], 1
        call ext_007641C0
        lea ecx, [esi + 0xf4]
        mov byte ptr [esp + 0x10], 0
        call ext_006B9D70
        mov ecx, esi
        mov dword ptr [esp + 0x10], 0xffffffff
        call ext_006DC2C0
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00702EE0] sub_00702EE0 (117 bytes)
extern "C" void ext_006D2370();
extern "C" void ext_006D23F0();
extern "C" void ext_006D80A0();
extern "C" void ext_00702AA0();
extern "C" int mem_008BFD88;
extern "C" __declspec(naked) void __fastcall fn_00702EE0(void* self) {
    __asm {
        push -1
        push offset mem_008BFD88
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x28
        push esi
        mov esi, ecx
        lea ecx, [esp + 0xc]
        call ext_006D2370
        lea eax, [esp + 0xc]
        mov ecx, esi
        push eax
        mov dword ptr [esp + 0x38], 0
        call ext_00702AA0
        push 1
        lea ecx, [esp + 0x10]
        call ext_006D23F0
        mov ecx, dword ptr [eax]
        mov dword ptr [esp + 0x34], -1
        mov dword ptr [esp + 0x4], ecx
        lea ecx, [esp + 0xc]
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [esp + 0x8], edx
        call ext_006D80A0
        mov ecx, dword ptr [esp + 0x2c]
        pop esi
        _emit 0xdd
        _emit 0x44
        _emit 0x24
        _emit 0x00
        mov dword ptr fs:[0], ecx
        add esp, 0x34
        ret
    }
}

// [0x007073D0] sub_007073D0 (126 bytes)
extern "C" __declspec(naked) void __fastcall fn_007073D0(void* self) {
    __asm {
        push ecx
        push ebx
        push ebp
        mov ebp, ecx
        push esi
        push edi
        mov eax, dword ptr [ebp + 0x14]
        dec eax
        js done
        lea ebx, [eax + 2*eax]
        shl ebx, 0x2
        inc eax
        mov dword ptr [esp + 0x10], eax
loop_top:
        mov eax, dword ptr [ebp + 0x10]
        sub esp, 0x8
        add eax, ebx
        mov esi, esp
        mov ecx, dword ptr [eax + 0x4]
        test ecx, ecx
        je clear
        mov edx, dword ptr [ecx]
        mov edi, dword ptr [eax]
        cmp edx, edi
        jne clear
        mov edi, dword ptr [ecx + 0x4]
        test edi, edi
        je clear
        mov ecx, dword ptr [mem_00B5EB78]
        mov eax, dword ptr [edi]
        push ecx
        mov ecx, edi
        call dword ptr [eax + 0x14]
        test al, al
        je clear
        mov edi, dword ptr [edi + 0x4]
        mov dword ptr [esi + 0x4], edi
        mov edx, dword ptr [edi]
        mov dword ptr [esi], edx
        jmp after
clear:
        mov dword ptr [esi], 0x0
        mov dword ptr [esi + 0x4], 0x0
after:
        mov ecx, ebp
        call ext_007055F0
        mov eax, dword ptr [esp + 0x10]
        sub ebx, 0xc
        dec eax
        mov dword ptr [esp + 0x10], eax
        jne loop_top
done:
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret
    }
}

// [0x00700EC0] sub_00700EC0 (132 bytes)
extern "C" void ext_006C9360();
extern "C" void ext_00732CB0();
extern "C" __declspec(naked) void __fastcall fn_00700EC0(void* self) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 8]
        push esi
        push edi
        mov edi, ecx
        mov ecx, ebx
        call ext_006C9360
        mov esi, eax
        push 0xaa8cec
        mov ecx, esi
        mov eax, dword ptr [esi]
        call dword ptr [eax + 0x28]
        cmp eax, -1
        je l_00700EEB
        mov edx, dword ptr [esi]
        push eax
        mov ecx, esi
        call dword ptr [edx + 0x10]
l_00700EEB:
        mov eax, dword ptr [esi]
        push 0xaa8cf4
        mov ecx, esi
        call dword ptr [eax + 0x28]
        cmp eax, -1
        je l_00700F04
        mov edx, dword ptr [esi]
        push eax
        mov ecx, esi
        call dword ptr [edx + 0x10]
l_00700F04:
        mov eax, dword ptr [esi]
        push 0xaa8d00
        mov ecx, esi
        call dword ptr [eax + 0x28]
        cmp eax, -1
        je l_00700F1D
        mov edx, dword ptr [esi]
        push eax
        mov ecx, esi
        call dword ptr [edx + 0x10]
l_00700F1D:
        mov eax, dword ptr [esi]
        push 0xaa8d0c
        mov ecx, esi
        call dword ptr [eax + 0x28]
        cmp eax, -1
        je l_00700F36
        mov edx, dword ptr [esi]
        push eax
        mov ecx, esi
        call dword ptr [edx + 0x10]
l_00700F36:
        push ebx
        mov ecx, edi
        call ext_00732CB0
        pop edi
        pop esi
        pop ebx
        ret 4
    }
}

// [0x00702660] sub_00702660 (131 bytes)
extern "C" __declspec(naked) void __fastcall fn_00702660(void* self) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        dec eax
        cmp eax, 0x4
        ja def_case
        jmp dword ptr [eax*4 + 0x7026e4]
    c_one:
        mov ecx, dword ptr [ecx + 0x268]
        mov dword ptr [ecx + 0x160], 0x3
        ret 0x4
    c_two:
        mov edx, dword ptr [ecx + 0x268]
        mov dword ptr [edx + 0x160], 0x4
        ret 0x4
    c_three:
        mov eax, dword ptr [ecx + 0x268]
        mov dword ptr [eax + 0x160], 0x1
        ret 0x4
    c_four:
        mov ecx, dword ptr [ecx + 0x268]
        mov dword ptr [ecx + 0x160], 0x2
        ret 0x4
    c_five:
        mov edx, dword ptr [ecx + 0x268]
        mov dword ptr [edx + 0x160], 0x5
        ret 0x4
    def_case:
        mov eax, dword ptr [ecx + 0x268]
        mov dword ptr [eax + 0x160], 0x0
        ret 0x4
    }
}

// [0x0070AEA0] sub_0070AEA0 (140 bytes)
extern "C" void ext_006B9D80();
extern "C" void ext_006E8E50();
extern "C" void ext_006E8EF0();
extern "C" void ext_007025B0();
extern "C" void ext_00707A90();
extern "C" void ext_0070AF50();
extern "C" __declspec(naked) void __fastcall fn_0070AEA0(void* self, int edx_unused, void* a1, int a2, void* a3, int a4, int a5, int a6, int a7) {
    __asm {
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 0x14]
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr [esp + 0x24]
        cmp ebp, esi
        jne aeA_tail
        cmp dword ptr [esp + 0x18], 0x5
        jne aeA_tail
        mov eax, dword ptr [edi]
        mov ecx, edi
        call dword ptr [eax + 0x12c]
        mov ecx, eax
        call ext_007025B0
        mov ecx, esi
        mov ebx, eax
        call ext_0070AF50
        mov ecx, eax
        call ext_006BADB0
        sub esp, 0x4c
        mov ecx, esp
        mov dword ptr [esp + 0x68], esp
        push eax
        call ext_006B9D80
        mov ecx, ebx
        call ext_006E8E50
        test eax, eax
        jne aeA_tail
        mov ecx, esi
        call ext_0070AF50
        push eax
        mov ecx, ebx
        call ext_006E8EF0
    aeA_tail:
        mov ecx, dword ptr [esp + 0x2c]
        mov edx, dword ptr [esp + 0x28]
        mov eax, dword ptr [esp + 0x20]
        push ecx
        mov ecx, dword ptr [esp + 0x1c]
        push edx
        mov edx, dword ptr [esp + 0x1c]
        push edi
        push eax
        push ebp
        push ecx
        push edx
        mov ecx, esi
        call ext_00707A90
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x1c
    }
}

// [0x00701D60] sub_00701D60 (140 bytes)
extern "C" void ext_006B9D80();
extern "C" void ext_006E9030();
extern "C" void ext_006E90D0();
extern "C" void ext_00701E10();
extern "C" void ext_007025B0();
extern "C" void ext_00707A90();

extern "C" __declspec(naked) void __fastcall fn_00701D60(void* self) {
    __asm {
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 0x14]
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr [esp + 0x24]
        cmp ebp, esi
        jne loc_701dc3
        cmp dword ptr [esp + 0x18], 5
        jne loc_701dc3
        mov eax, dword ptr [edi]
        mov ecx, edi
        call dword ptr [eax + 0x12c]
        mov ecx, eax
        call ext_007025B0
        mov ecx, esi
        mov ebx, eax
        call ext_00701E10
        mov ecx, eax
        call ext_006BADB0
        sub esp, 0x4c
        mov ecx, esp
        mov dword ptr [esp + 0x68], esp
        push eax
        call ext_006B9D80
        mov ecx, ebx
        call ext_006E9030
        test eax, eax
        jne loc_701dc3
        mov ecx, esi
        call ext_00701E10
        push eax
        mov ecx, ebx
        call ext_006E90D0
loc_701dc3:
        mov ecx, dword ptr [esp + 0x2c]
        mov edx, dword ptr [esp + 0x28]
        mov eax, dword ptr [esp + 0x20]
        push ecx
        mov ecx, dword ptr [esp + 0x1c]
        push edx
        mov edx, dword ptr [esp + 0x1c]
        push edi
        push eax
        push ebp
        push ecx
        push edx
        mov ecx, esi
        call ext_00707A90
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x1c
    }
}

// [0x00704A70] sub_00704A70 (143 bytes)
// Logic: buf = self->[0x81c]; if (!buf) buf = malloc(strlen(src)+1);
//        else if (strlen(buf) < strlen(src)) buf = realloc(buf, strlen(src)+1);
//        store buf (only on malloc/realloc paths); copy src incl. NUL into buf.
extern "C" int mem_00925208;
extern "C" int mem_00925290;
extern "C" __declspec(naked) void __fastcall fn_00704A70(void* self, int edx_unused, const char* src) {
    __asm {
        push ebx
        mov ebx, ecx
        push esi
        push edi
        mov edx, dword ptr [ebx + 0x81c]
        test edx, edx
        jne fn70_nonnull
        mov esi, dword ptr [esp + 0x10]
        or ecx, -1
        mov edi, esi
        xor eax, eax
        repne scasb
        not ecx
        push ecx
        call dword ptr [mem_00925208]
        add esp, 4
        jmp fn70_store
fn70_nonnull:
        mov edi, edx
        or ecx, -1
        xor eax, eax
        mov esi, dword ptr [esp + 0x10]
        repne scasb
        not ecx
        dec ecx
        push ebp
        mov ebp, ecx
        mov edi, esi
        or ecx, -1
        repne scasb
        not ecx
        dec ecx
        cmp ebp, ecx
        pop ebp
        jae fn70_copy
        mov edi, esi
        or ecx, -1
        repne scasb
        not ecx
        push ecx
        push edx
        call dword ptr [mem_00925290]
        add esp, 8
fn70_store:
        mov dword ptr [ebx + 0x81c], eax
fn70_copy:
        mov edi, esi
        or ecx, -1
        xor eax, eax
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        mov esi, edi
        mov edi, dword ptr [ebx + 0x81c]
        shr ecx, 2
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        pop edi
        pop esi
        pop ebx
        ret 4
    }
}

// [0x00709F90] sub_00709F90 (148 bytes)
extern "C" void ext_006B9E60();
extern "C" void ext_006BC380();
extern "C" void ext_0071E680();
extern "C" __declspec(naked) void __fastcall fn_00709F90(void* self, int edx_unused, void* a1, void* a2, int a3, int a4) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8bfd28
        push eax
        mov dword ptr fs:[0x0], esp
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr [esp + 0x1c]
        mov eax, dword ptr [esi]
        lea ebx, [esi + 0x80]
        push 0x0
        push ebx
        push edi
        push esi
        push 0x14
        push 0x0
        call dword ptr [eax + 0x38]
        mov eax, dword ptr [esi + 0x54]
        test eax, eax
        je no_branch
        sub esp, 0x4c
        mov ecx, esp
        mov dword ptr [esp + 0x68], esp
        push edi
        call ext_006B9D20
        mov ecx, esi
        mov dword ptr [esp + 0x60], 0xffffffff
        call ext_0071E680
        mov ecx, esi
        mov ebx, eax
        call ext_006BC380
        mov ecx, eax
        call dword ptr [ebx + 0x14]
        jmp after_branch
no_branch:
        push edi
        mov ecx, ebx
        call ext_006B9E60
after_branch:
        mov edx, dword ptr [esi]
        push 0x0
        push 0x0
        push edi
        push esi
        push 0x15
        push 0x0
        mov ecx, esi
        call dword ptr [edx + 0x38]
        mov ecx, dword ptr [esp + 0xc]
        pop edi
        pop esi
        mov dword ptr fs:[0x0], ecx
        pop ebx
        add esp, 0xc
        ret 0x10
    }
}

// [0x00705640] sub_00705640 (146 bytes)
extern "C" void ext_006FBC50();
extern "C" void ext_006FBC90();
extern "C" void ext_006FBCE0();
extern "C" __declspec(naked) void __fastcall fn_00705640(void* self) {
    __asm {
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov ebx, dword ptr [esi + 0xc0]
        dec ebx
        js L_after_loop1
L_loop1:
        mov eax, dword ptr [esi + 0xd0]
        mov edi, dword ptr [eax + 4*ebx]
        mov ecx, edi
        call ext_006FBC90
        mov ecx, edi
        call ext_006FBCE0
        dec ebx
        jns L_loop1
L_after_loop1:
        mov ecx, esi
        call ext_006FBC90
        mov edi, dword ptr [esi + 0x18]
        dec edi
        js L_done
L_loop2:
        mov ebx, dword ptr [esi + 0x14]
        mov edx, dword ptr [esi + 0x10]
        mov eax, edi
        add eax, ebx
        lea ecx, [eax + 2*eax]
        mov eax, dword ptr [edx + 4*ecx + 0x4]
        test eax, eax
        lea ecx, [edx + 4*ecx]
        je L_null1
        mov edx, dword ptr [eax]
        mov ebx, dword ptr [ecx]
        cmp edx, ebx
        jne L_null1
        mov eax, dword ptr [eax + 0x4]
        jmp L_have1
L_null1:
        xor eax, eax
L_have1:
        mov ecx, dword ptr [esi + 0x4c]
        mov edx, dword ptr [esi + 0x48]
        test ecx, ecx
        je L_null2
        cmp dword ptr [ecx], edx
        jne L_null2
        mov ecx, dword ptr [ecx + 0x4]
        jmp L_have2
L_null2:
        xor ecx, ecx
L_have2:
        cmp eax, ecx
        je L_skip
        push eax
        mov ecx, esi
        call ext_006FBC50
L_skip:
        mov eax, dword ptr [esi + 0x18]
        cmp edi, eax
        jg L_gt
        dec edi
        jmp L_adj
L_gt:
        lea edi, [eax - 1]
L_adj:
        test edi, edi
        jge L_loop2
L_done:
        pop edi
        pop esi
        pop ebx
        ret
    }
}

// [0x00704C40] sub_00704C40 (148 bytes)
extern "C" void ext_006DC200();
extern "C" void ext_006A5C62();
extern "C" void ext_00703FE0();
extern "C" void ext_006DCB40();
extern "C" void ext_007051B0();

extern "C" __declspec(naked) void* __fastcall fn_00704C40(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        push -0x1
        push 0x8bbd43
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        mov eax, dword ptr [esp + 0x18]
        push esi
        mov esi, ecx
        push 0xb5e948
        mov ecx, dword ptr [esp + 0x1c]
        push eax
        push ecx
        mov ecx, esi
        mov dword ptr [esp + 0x10], esi
        call ext_006DC200
        push 0x870
        mov dword ptr [esp + 0x14], 0x0
        mov dword ptr [esi], 0x995708
        call ext_006A5C62
        add esp, 0x4
        mov dword ptr [esp + 0x1c], eax
        test eax, eax
        mov byte ptr [esp + 0x10], 0x1
        je loc_704ca5
        push esi
        mov ecx, eax
        call ext_00703FE0
        jmp loc_704ca7
    loc_704ca5:
        xor eax, eax
    loc_704ca7:
        mov ecx, esi
        mov byte ptr [esp + 0x10], 0x0
        mov dword ptr [esi + 0xf0], eax
        call ext_006DCB40
        mov ecx, esi
        call ext_007051B0
        mov ecx, dword ptr [esp + 0x8]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret 0x8
    }
}

// [0x007056E0] sub_007056E0 (83 bytes)
extern "C" void ext_006FA300();
extern "C" void ext_007057B0();
extern "C" void ext_00711CF0();
extern "C" int mem_00B5EB80;
extern "C" __declspec(naked) void __fastcall fn_007056E0(void* self) {
    __asm {
        push esi
        push 1
        mov esi, ecx
        push 8
        call ext_00711CF0
        mov ecx, dword ptr [esi + 0x84]
        mov eax, dword ptr [esi]
        and ecx, -2
        push ecx
        mov ecx, esi
        call dword ptr [eax + 0xbc]
        mov edx, dword ptr [esi]
        push -1
        push 0
        push offset mem_00B5EB80
        push 1
        mov ecx, esi
        call dword ptr [edx + 0xa4]
        mov eax, dword ptr [esi]
        mov ecx, esi
        call dword ptr [eax + 0x78]
        mov edx, dword ptr [esi]
        mov ecx, esi
        call dword ptr [edx + 0x74]
        mov ecx, esi
        call ext_007057B0
        mov ecx, esi
        call ext_006FA300
        pop esi
        ret
    }
}

// [0x00707460] sub_00707460 (159 bytes)
extern "C" void ext_007839F0();
extern "C" __declspec(naked) void __fastcall fn_00707460(void* self, int edx_unused, int a1, int a2, int a3, int a4) {
    __asm {
        sub esp, 0x20
        push ebx
        push esi
        mov esi, dword ptr [esp + 0x2c]
        xor ebx, ebx
        cmp esi, ecx
        mov byte ptr [esp + 0xc], bl
        mov dword ptr [esp + 0x18], ebx
        mov dword ptr [esp + 0x14], ebx
        mov dword ptr [esp + 0x20], ebx
        mov dword ptr [esp + 0x1c], ebx
        mov dword ptr [esp + 0x8], 0x52362
        mov dword ptr [esp + 0x24], ebx
        jne done
        mov eax, dword ptr [esp + 0x30]
        cmp ecx, ebx
        mov dword ptr [esp + 0x24], eax
        je l1
        mov eax, dword ptr [ecx + 0x4]
        mov edx, dword ptr [eax]
        jmp l2
    l1:
        xor edx, edx
        xor eax, eax
    l2:
        mov dword ptr [esp + 0x14], edx
        mov edx, dword ptr [esp + 0x34]
        mov dword ptr [esp + 0x18], eax
        mov eax, dword ptr [edx + 0x4]
        cmp eax, ebx
        je l3
        push ebp
        mov ebp, dword ptr [edx]
        push edi
        mov edi, dword ptr [eax]
        cmp edi, ebp
        pop edi
        pop ebp
        jne l3
        mov eax, dword ptr [eax + 0x4]
        cmp eax, ebx
        je l3
        mov eax, dword ptr [eax + 0x4]
        mov edx, dword ptr [eax]
        jmp l4
    l3:
        xor edx, edx
        xor eax, eax
    l4:
        mov ecx, dword ptr [ecx + 0x68]
        mov dword ptr [esp + 0x1c], edx
        cmp ecx, ebx
        mov dword ptr [esp + 0x20], eax
        mov dword ptr [esp + 0x10], esi
        je done
        lea edx, [esp + 0x8]
        push edx
        push ebx
        call ext_007839F0
    done:
        pop esi
        mov al, 1
        pop ebx
        add esp, 0x20
        ret 0x10
    }
}

// [0x007000F0] sub_007000F0 (166 bytes)
// [VA] 0x007000F0
extern "C" double mem_00B5E6D8;
extern "C" double mem_00B5E6E0;
extern "C" double mem_00B5E6E8;
extern "C" double mem_00B5E6F0;
extern "C" double mem_00B5E6F8;
extern "C" double mem_00B5E700;
extern "C" double mem_00B5E708;
extern "C" double mem_00B5E710;
extern "C" double mem_00B5E718;
extern "C" double mem_00B5E720;
extern "C" double mem_00B5E728;
extern "C" double mem_00B5E730;
extern "C" double mem_00B5E738;
extern "C" double mem_00B5E740;
extern "C" double mem_00B5E748;
extern "C" double mem_00B5E750;
extern "C" void __cdecl fn_007000F0() {
    double* h = *(double**)&mem_00925284;
    mem_00B5E6D8 = -*h;
    mem_00B5E6E0 = -*h;
    mem_00B5E6E8 = -*h;
    mem_00B5E6F0 = -*h;
    mem_00B5E6F8 = -*h;
    mem_00B5E700 = -*h;
    mem_00B5E708 = -*h;
    mem_00B5E710 = -*h;
    mem_00B5E718 = -*h;
    mem_00B5E720 = -*h;
    mem_00B5E728 = -*h;
    mem_00B5E730 = -*h;
    mem_00B5E738 = -*h;
    mem_00B5E740 = -*h;
    mem_00B5E748 = -*h;
    mem_00B5E750 = -*h;
}

// [0x00701360] sub_00701360 (166 bytes)
// [VA] 0x00701360
extern "C" double mem_00B5E8C8;
extern "C" double mem_00B5E8D0;
extern "C" double mem_00B5E8D8;
extern "C" double mem_00B5E8E0;
extern "C" double mem_00B5E8E8;
extern "C" double mem_00B5E8F0;
extern "C" double mem_00B5E8F8;
extern "C" double mem_00B5E900;
extern "C" double mem_00B5E908;
extern "C" double mem_00B5E910;
extern "C" double mem_00B5E918;
extern "C" double mem_00B5E920;
extern "C" double mem_00B5E928;
extern "C" double mem_00B5E930;
extern "C" double mem_00B5E938;
extern "C" double mem_00B5E940;
extern "C" void __cdecl fn_00701360() {
    double* h = (double*)mem_00925284;
    mem_00B5E8C8 = -*h;
    mem_00B5E8D0 = -*h;
    mem_00B5E8D8 = -*h;
    mem_00B5E8E0 = -*h;
    mem_00B5E8E8 = -*h;
    mem_00B5E8F0 = -*h;
    mem_00B5E8F8 = -*h;
    mem_00B5E900 = -*h;
    mem_00B5E908 = -*h;
    mem_00B5E910 = -*h;
    mem_00B5E918 = -*h;
    mem_00B5E920 = -*h;
    mem_00B5E928 = -*h;
    mem_00B5E930 = -*h;
    mem_00B5E938 = -*h;
    mem_00B5E940 = -*h;
}

// [0x00703EC0] sub_00703EC0 (166 bytes)
extern "C" double mem_00B5EAC0;
extern "C" double mem_00B5EAC8;
extern "C" double mem_00B5EAD0;
extern "C" double mem_00B5EAD8;
extern "C" double mem_00B5EAE0;
extern "C" double mem_00B5EAE8;
extern "C" double mem_00B5EAF0;
extern "C" double mem_00B5EAF8;
extern "C" double mem_00B5EB00;
extern "C" double mem_00B5EB08;
extern "C" double mem_00B5EB10;
extern "C" double mem_00B5EB18;
extern "C" double mem_00B5EB20;
extern "C" double mem_00B5EB28;
extern "C" double mem_00B5EB30;
extern "C" double mem_00B5EB38;
extern "C" void __cdecl fn_00703EC0() {
    double* h = *(double**)&mem_00925284;
    mem_00B5EAC0 = -*h;
    mem_00B5EAC8 = -*h;
    mem_00B5EAD0 = -*h;
    mem_00B5EAD8 = -*h;
    mem_00B5EAE0 = -*h;
    mem_00B5EAE8 = -*h;
    mem_00B5EAF0 = -*h;
    mem_00B5EAF8 = -*h;
    mem_00B5EB00 = -*h;
    mem_00B5EB08 = -*h;
    mem_00B5EB10 = -*h;
    mem_00B5EB18 = -*h;
    mem_00B5EB20 = -*h;
    mem_00B5EB28 = -*h;
    mem_00B5EB30 = -*h;
    mem_00B5EB38 = -*h;
}

// [0x0070F9E0] sub_0070F9E0 (166 bytes)
extern "C" int mem_00925284;
extern "C" double mem_00B5EFD0;
extern "C" double mem_00B5EFD8;
extern "C" double mem_00B5EFE0;
extern "C" double mem_00B5EFE8;
extern "C" double mem_00B5EFF0;
extern "C" double mem_00B5EFF8;
extern "C" double mem_00B5F000;
extern "C" double mem_00B5F008;
extern "C" double mem_00B5F010;
extern "C" double mem_00B5F018;
extern "C" double mem_00B5F020;
extern "C" double mem_00B5F028;
extern "C" double mem_00B5F030;
extern "C" double mem_00B5F038;
extern "C" double mem_00B5F040;
extern "C" double mem_00B5F048;
extern "C" void __cdecl fn_0070F9E0() {
    double* h = (double*)mem_00925284;
    mem_00B5EFD0 = -*h;
    mem_00B5EFD8 = -*h;
    mem_00B5EFE0 = -*h;
    mem_00B5EFE8 = -*h;
    mem_00B5EFF0 = -*h;
    mem_00B5EFF8 = -*h;
    mem_00B5F000 = -*h;
    mem_00B5F008 = -*h;
    mem_00B5F010 = -*h;
    mem_00B5F018 = -*h;
    mem_00B5F020 = -*h;
    mem_00B5F028 = -*h;
    mem_00B5F030 = -*h;
    mem_00B5F038 = -*h;
    mem_00B5F040 = -*h;
    mem_00B5F048 = -*h;
}

// [0x0070CB40] sub_0070CB40 (166 bytes)
// [VA] 0x0070CB40
extern "C" double mem_00B5EE38;
extern "C" double mem_00B5EE40;
extern "C" double mem_00B5EE48;
extern "C" double mem_00B5EE50;
extern "C" double mem_00B5EE58;
extern "C" double mem_00B5EE60;
extern "C" double mem_00B5EE68;
extern "C" double mem_00B5EE70;
extern "C" double mem_00B5EE78;
extern "C" double mem_00B5EE80;
extern "C" double mem_00B5EE88;
extern "C" double mem_00B5EE90;
extern "C" double mem_00B5EE98;
extern "C" double mem_00B5EEA0;
extern "C" double mem_00B5EEA8;
extern "C" double mem_00B5EEB0;
extern "C" void __cdecl fn_0070CB40() {
    double* h = (double*)mem_00925284;
    mem_00B5EE38 = -*h;
    mem_00B5EE40 = -*h;
    mem_00B5EE48 = -*h;
    mem_00B5EE50 = -*h;
    mem_00B5EE58 = -*h;
    mem_00B5EE60 = -*h;
    mem_00B5EE68 = -*h;
    mem_00B5EE70 = -*h;
    mem_00B5EE78 = -*h;
    mem_00B5EE80 = -*h;
    mem_00B5EE88 = -*h;
    mem_00B5EE90 = -*h;
    mem_00B5EE98 = -*h;
    mem_00B5EEA0 = -*h;
    mem_00B5EEA8 = -*h;
    mem_00B5EEB0 = -*h;
}

// [0x0070A500] sub_0070A500 (166 bytes)
extern "C" int mem_00925284;
extern "C" double mem_00B5ECB8;
extern "C" double mem_00B5ECC0;
extern "C" double mem_00B5ECC8;
extern "C" double mem_00B5ECD0;
extern "C" double mem_00B5ECD8;
extern "C" double mem_00B5ECE0;
extern "C" double mem_00B5ECE8;
extern "C" double mem_00B5ECF0;
extern "C" double mem_00B5ECF8;
extern "C" double mem_00B5ED00;
extern "C" double mem_00B5ED08;
extern "C" double mem_00B5ED10;
extern "C" double mem_00B5ED18;
extern "C" double mem_00B5ED20;
extern "C" double mem_00B5ED28;
extern "C" double mem_00B5ED30;
extern "C" void __cdecl fn_0070A500() {
    double* h = (double*)mem_00925284;
    mem_00B5ECB8 = -*h;
    mem_00B5ECC0 = -*h;
    mem_00B5ECC8 = -*h;
    mem_00B5ECD0 = -*h;
    mem_00B5ECD8 = -*h;
    mem_00B5ECE0 = -*h;
    mem_00B5ECE8 = -*h;
    mem_00B5ECF0 = -*h;
    mem_00B5ECF8 = -*h;
    mem_00B5ED00 = -*h;
    mem_00B5ED08 = -*h;
    mem_00B5ED10 = -*h;
    mem_00B5ED18 = -*h;
    mem_00B5ED20 = -*h;
    mem_00B5ED28 = -*h;
    mem_00B5ED30 = -*h;
}

// [0x0070ADF0] sub_0070ADF0 (175 bytes)
extern "C" void ext_00705450();
extern "C" void ext_00711220();
extern "C" void ext_008BC3AC();
extern "C" __declspec(naked) void __fastcall fn_0070ADF0(void* self) {
    __asm {
        push -1
        push offset ext_008BC3AC
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 4], esi
        lea ecx, [esi + 0x470]
        mov dword ptr [esp + 0x10], 6
        call ext_00711220
        lea ecx, [esi + 0x3e8]
        mov byte ptr [esp + 0x10], 5
        call ext_00711220
        lea ecx, [esi + 0x360]
        mov byte ptr [esp + 0x10], 4
        call ext_00711220
        lea ecx, [esi + 0x2c0]
        mov byte ptr [esp + 0x10], 3
        call ext_00711220
        lea ecx, [esi + 0x220]
        mov byte ptr [esp + 0x10], 2
        call ext_00711220
        lea ecx, [esi + 0x180]
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

// [0x0070DAA0] sub_0070DAA0 (176 bytes)
extern "C" void ext_006B9D10();
extern "C" void ext_006B9D20();
extern "C" void ext_006B9D70();
extern "C" void ext_006B9EC0();
extern "C" void ext_008BC5B5();
extern "C" int mem_00925218;
extern "C" __declspec(naked) void* __fastcall fn_0070DAA0(void* self, int edx_unused, int a, int b) {
    __asm {
        push -1
        push offset ext_008BC5B5
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x150
        lea ecx, [esp + 4]
       
        _emit 0xc7
        _emit 0x44
        _emit 0x24
        _emit 0x00
        _emit 0
        _emit 0
        _emit 0
        _emit 0
        call ext_006B9D10
        mov eax, dword ptr [esp + 0x164]
        mov dword ptr [esp + 0x158], 1
        test eax, eax
        jl skip
        inc eax
        push eax
        lea eax, [esp + 0x54]
        push 0xaabe90
        push eax
        call dword ptr [mem_00925218]
        add esp, 0xc
        lea ecx, [esp + 0x50]
        push ecx
        lea ecx, [esp + 8]
        call ext_006B9EC0
    skip:
        push esi
        mov esi, dword ptr [esp + 0x164]
        lea edx, [esp + 8]
        mov ecx, esi
        push edx
        call ext_006B9D20
        mov dword ptr [esp + 4], 1
        lea ecx, [esp + 8]
        mov byte ptr [esp + 0x15c], 0
        call ext_006B9D70
        mov ecx, dword ptr [esp + 0x154]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x15c
        ret 8
    }
}

// [0x007027F0] sub_007027F0 (176 bytes)
extern "C" void ext_006C9620();
extern "C" void ext_006C9640();
extern "C" void ext_006C9660();
extern "C" void ext_00708000();
extern "C" __declspec(naked) void __fastcall fn_007027F0(void* self, int edx_unused, void* arg1) {
    __asm {
        sub esp, 0x20
        push ebx
        push esi
        push edi
        mov ebx, ecx
        call ext_006DC460
        mov esi, dword ptr [esp + 0x30]
        mov edi, eax
        push ecx
        mov ecx, edi
        fld qword ptr [esi]
        fstp dword ptr [esp]
        call ext_006C9620
        mov ecx, eax
        call ext_006CD330
        fld qword ptr [esi + 0x08]
        push ecx
        mov ecx, edi
        fstp dword ptr [esp]
        call ext_006C9640
        mov ecx, eax
        call ext_006CD330
        fld qword ptr [esi + 0x10]
        push ecx
        mov ecx, edi
        fstp dword ptr [esp]
        call ext_006C9660
        mov ecx, eax
        call ext_006CD330
        fld qword ptr [esi]
        fstp qword ptr [esp + 0x0c]
        fld qword ptr [esi + 0x08]
        mov ecx, dword ptr [ebx + 0x268]
        push 0xaa8d90
        fstp qword ptr [esp + 0x18]
        fld qword ptr [esi + 0x10]
        fstp qword ptr [esp + 0x20]
        mov dword ptr [esp + 0x28], 0x0
        mov dword ptr [esp + 0x2c], 0x3ff00000
        call ext_00708000
        mov edx, dword ptr [eax]
        push 0x0
        push 0x0
        lea ecx, [esp + 0x14]
        push 0x0
        push ecx
        mov ecx, eax
        call dword ptr [edx + 0x8c]
        pop edi
        pop esi
        pop ebx
        add esp, 0x20
        ret 0x4
    }
}

// [0x007028A0] sub_007028A0 (176 bytes)
extern "C" void ext_006C9680();
extern "C" void ext_006C96A0();
extern "C" void ext_006C96C0();
extern "C" void ext_006CD330();
extern "C" void ext_006DC460();
extern "C" void ext_00708000();
extern "C" __declspec(naked) void __fastcall fn_007028A0(void* self, int edx_unused, void* arg1) {
    __asm {
        sub esp, 0x20
        push ebx
        push esi
        push edi
        mov ebx, ecx
        call ext_006DC460
        mov esi, dword ptr [esp + 0x30]
        mov edi, eax
        push ecx
        mov ecx, edi
        fld qword ptr [esi]
        fstp dword ptr [esp]
        call ext_006C9680
        mov ecx, eax
        call ext_006CD330
        fld qword ptr [esi + 0x08]
        push ecx
        mov ecx, edi
        fstp dword ptr [esp]
        call ext_006C96A0
        mov ecx, eax
        call ext_006CD330
        fld qword ptr [esi + 0x10]
        push ecx
        mov ecx, edi
        fstp dword ptr [esp]
        call ext_006C96C0
        mov ecx, eax
        call ext_006CD330
        fld qword ptr [esi]
        fstp qword ptr [esp + 0x0c]
        fld qword ptr [esi + 0x08]
        mov ecx, dword ptr [ebx + 0x268]
        push 0xaa8d9c
        fstp qword ptr [esp + 0x18]
        fld qword ptr [esi + 0x10]
        fstp qword ptr [esp + 0x20]
        mov dword ptr [esp + 0x28], 0
        mov dword ptr [esp + 0x2c], 0x3ff00000
        call ext_00708000
        mov edx, dword ptr [eax]
        push 0
        push 0
        lea ecx, [esp + 0x14]
        push 0
        push ecx
        mov ecx, eax
        call dword ptr [edx + 0x8c]
        pop edi
        pop esi
        pop ebx
        add esp, 0x20
        ret 0x4
    }
}

// [0x0070D350] sub_0070D350 (170 bytes)
extern "C" void __stdcall ext_0077FA30(void* a1);
extern "C" void ext_0070CF50();
extern "C" void ext_006B9D80();
extern "C" void ext_007025B0();
extern "C" void ext_006FE0D0();
extern "C" void ext_0070E2F0();
extern "C" void ext_006B9D70();

extern "C" __declspec(naked) void __fastcall fn_0070D350(void* self, int edx_unused, void* arg1) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8bcb18
        push eax
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr fs:[0x0], esp
        sub esp, 0x4c
        push ebp
        push esi
        push edi
        mov edi, ecx
        push eax
        call ext_0077FA30
        mov ebp, dword ptr [edi + 0x58]
        xor esi, esi
        test ebp, ebp
        jle after_loop
        push ebx
loop_top:
        push esi
        mov ecx, edi
        call ext_0070CF50
        push eax
        lea ecx, [esp + 0x14]
        call ext_006B9D80
        mov ecx, dword ptr [edi + 0x68]
        mov dword ptr [esp + 0x64], 0
        lea ebx, [ecx + 4 * esi]
        mov ecx, dword ptr [esp + 0x6c]
        call ext_007025B0
        mov ecx, dword ptr [ebx]
        push eax
        call ext_006FE0D0
        lea edx, [esp + 0x10]
        mov ecx, edi
        push edx
        call ext_0070E2F0
        lea ecx, [esp + 0x10]
        mov dword ptr [esp + 0x64], -1
        call ext_006B9D70
        inc esi
        cmp esi, ebp
        jl loop_top
        pop ebx
after_loop:
        mov ecx, dword ptr [esp + 0x68]
        call ext_007025B0
        push eax
        mov ecx, edi
        call ext_006FE0D0
        mov ecx, dword ptr [esp + 0x58]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs:[0x0], ecx
        add esp, 0x58
        ret 4
    }
}

// [0x00709D70] sub_00709D70 (179 bytes)
extern "C" void ext_006BC380();
extern "C" void ext_0071E680();

extern "C" __declspec(naked) void __fastcall fn_00709D70(void* self, int edx_unused, void* a1, void* a2, void* a3, void* a4) {
    __asm {
        push ebx
        push esi
        mov esi, dword ptr [esp + 0xc]
        push edi
        mov edi, ecx
        push 0x0
        mov eax, dword ptr [edi]
        lea ebx, [edi + 0x80]
        push ebx
        push esi
        push edi
        push 0x14
        push 0x0
        call dword ptr [eax + 0x38]
        mov eax, dword ptr [edi + 0x54]
        test eax, eax
        je loc_709DDE
        mov ecx, dword ptr [esi]
        sub esp, 0x20
        mov eax, esp
        mov dword ptr [eax], ecx
        mov edx, dword ptr [esi + 0x4]
        mov dword ptr [eax + 0x4], edx
        mov ecx, dword ptr [esi + 0x8]
        mov dword ptr [eax + 0x8], ecx
        mov edx, dword ptr [esi + 0xc]
        mov dword ptr [eax + 0xc], edx
        mov ecx, dword ptr [esi + 0x10]
        mov dword ptr [eax + 0x10], ecx
        mov edx, dword ptr [esi + 0x14]
        mov dword ptr [eax + 0x14], edx
        mov ecx, dword ptr [esi + 0x18]
        mov dword ptr [eax + 0x18], ecx
        mov edx, dword ptr [esi + 0x1c]
        mov ecx, edi
        mov dword ptr [eax + 0x1c], edx
        call ext_0071E680
        mov ecx, edi
        mov ebx, eax
        call ext_006BC380
        mov ecx, eax
        call dword ptr [ebx + 0x14]
        jmp loc_709E0C
loc_709DDE:
        mov eax, dword ptr [esi]
        mov dword ptr [ebx], eax
        mov ecx, dword ptr [esi + 0x4]
        mov dword ptr [ebx + 0x4], ecx
        mov edx, dword ptr [esi + 0x8]
        mov dword ptr [ebx + 0x8], edx
        mov eax, dword ptr [esi + 0xc]
        mov dword ptr [ebx + 0xc], eax
        mov ecx, dword ptr [esi + 0x10]
        mov dword ptr [ebx + 0x10], ecx
        mov edx, dword ptr [esi + 0x14]
        mov dword ptr [ebx + 0x14], edx
        mov eax, dword ptr [esi + 0x18]
        mov dword ptr [ebx + 0x18], eax
        mov ecx, dword ptr [esi + 0x1c]
        mov dword ptr [ebx + 0x1c], ecx
loc_709E0C:
        mov edx, dword ptr [edi]
        push 0x0
        push 0x0
        push esi
        push edi
        push 0x15
        push 0x0
        mov ecx, edi
        call dword ptr [edx + 0x38]
        pop edi
        pop esi
        pop ebx
        ret 0x10
    }
}

// [0x00702950] sub_00702950 (176 bytes)
extern "C" void ext_006C96E0();
extern "C" void ext_006C9700();
extern "C" void ext_006C9720();
extern "C" void ext_006CD330();
extern "C" void ext_006DC460();
extern "C" void ext_00708000();
extern "C" char mem_00AA8DA8;

extern "C" __declspec(naked) void __fastcall fn_00702950(void* self, int edx_unused, void* arg1) {
    __asm {
        sub esp, 0x20
        push ebx
        push esi
        push edi
        mov ebx, ecx
        call ext_006DC460
        mov esi, dword ptr [esp + 0x30]
        mov edi, eax
        push ecx
        mov ecx, edi
        fld qword ptr [esi]
        fstp dword ptr [esp]
        call ext_006C96E0
        mov ecx, eax
        call ext_006CD330
        fld qword ptr [esi + 0x08]
        push ecx
        mov ecx, edi
        fstp dword ptr [esp]
        call ext_006C9700
        mov ecx, eax
        call ext_006CD330
        fld qword ptr [esi + 0x10]
        push ecx
        mov ecx, edi
        fstp dword ptr [esp]
        call ext_006C9720
        mov ecx, eax
        call ext_006CD330
        fld qword ptr [esi]
        fstp qword ptr [esp + 0x0c]
        fld qword ptr [esi + 0x08]
        mov ecx, dword ptr [ebx + 0x268]
        push offset mem_00AA8DA8
        fstp qword ptr [esp + 0x18]
        fld qword ptr [esi + 0x10]
        fstp qword ptr [esp + 0x20]
        mov dword ptr [esp + 0x28], 0x0
        mov dword ptr [esp + 0x2c], 0x3ff00000
        call ext_00708000
        mov edx, dword ptr [eax]
        push 0x0
        push 0x0
        lea ecx, [esp + 0x14]
        push 0x0
        push ecx
        mov ecx, eax
        call dword ptr [edx + 0x8c]
        pop edi
        pop esi
        pop ebx
        add esp, 0x20
        ret 0x4
    }
}

// [0x00709CB0] sub_00709CB0 (181 bytes)
extern "C" __declspec(naked) void __fastcall fn_00709CB0(void* self) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -0x8
        sub esp, 0x24
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x50]
        test eax, eax
        je done
        mov ecx, dword ptr [esi + 0x8]
        lea edx, [esp + 0x8]
        push edx
        call eax
        mov ecx, dword ptr [eax]
        mov dword ptr [esi + 0x80], ecx
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [esi + 0x84], edx
        mov ecx, dword ptr [eax + 0x8]
        mov dword ptr [esi + 0x88], ecx
        mov edx, dword ptr [eax + 0xc]
        mov dword ptr [esi + 0x8c], edx
        mov ecx, dword ptr [eax + 0x10]
        mov dword ptr [esi + 0x90], ecx
        mov edx, dword ptr [eax + 0x14]
        mov dword ptr [esi + 0x94], edx
        mov ecx, dword ptr [eax + 0x18]
        mov dword ptr [esi + 0x98], ecx
        mov edx, dword ptr [eax + 0x1c]
        mov dword ptr [esi + 0x9c], edx
    done:
        mov eax, dword ptr [ebp + 0x8]
        mov ecx, dword ptr [esi + 0x80]
        mov dword ptr [eax], ecx
        mov edx, dword ptr [esi + 0x84]
        mov dword ptr [eax + 0x4], edx
        mov ecx, dword ptr [esi + 0x88]
        mov dword ptr [eax + 0x8], ecx
        mov edx, dword ptr [esi + 0x8c]
        mov dword ptr [eax + 0xc], edx
        mov ecx, dword ptr [esi + 0x90]
        mov dword ptr [eax + 0x10], ecx
        mov edx, dword ptr [esi + 0x94]
        mov dword ptr [eax + 0x14], edx
        mov ecx, dword ptr [esi + 0x98]
        mov dword ptr [eax + 0x18], ecx
        mov edx, dword ptr [esi + 0x9c]
        mov dword ptr [eax + 0x1c], edx
        pop esi
        mov esp, ebp
        pop ebp
        ret 0x10
    }
}

// [0x00706E30] sub_00706E30 (188 bytes)
extern "C" void ext_00706DD0();
extern "C" void ext_006A5C5C();
extern "C" void ext_006B9D70();
extern "C" void ext_006B9EC0();
extern "C" void ext_006E7460();
extern "C" int mem_00B5EB80;
extern "C" __declspec(naked) void __fastcall fn_00706E30(void* self, int edx_unused, void* arg) {
    __asm {
        push esi
        mov esi, ecx
        push edi
        mov eax, dword ptr [esi + 0x58]
        test eax, eax
        jne L1
        call ext_00706DD0
    L1:
        mov edi, dword ptr [esp + 0xc]
        push ebx
        push -1
        mov dword ptr [esi + 0x58], eax
        mov eax, dword ptr [esi]
        push edi
        push offset mem_00B5EB80
        push 0xb
        mov ecx, esi
        call dword ptr [eax + 0xa4]
        mov ecx, dword ptr [esi + 0x58]
        mov ebx, dword ptr [esi]
        push 0
        call ext_006E7460
        push eax
        push edi
        push esi
        push 0x1d
        push 0
        mov ecx, esi
        call dword ptr [ebx + 0x3c]
        mov ecx, dword ptr [esi + 0x58]
        push edi
        call ext_006B9EC0
        mov edx, dword ptr [esi]
        push 1
        mov ecx, esi
        call dword ptr [edx + 0xa0]
        mov eax, dword ptr [esi]
        push -1
        push edi
        push offset mem_00B5EB80
        push 0xf
        mov ecx, esi
        call dword ptr [eax + 0xa4]
        mov ecx, dword ptr [esi + 0x58]
        mov edi, dword ptr [esi]
        push 0
        push 0
        call ext_006E7460
        push eax
        push esi
        push 0x1d
        push 0
        mov ecx, esi
        call dword ptr [edi + 0x3c]
        mov edi, dword ptr [esi + 0x58]
        pop ebx
        test edi, edi
        je L2
        mov ecx, edi
        call ext_006E7460
        cmp byte ptr [eax], 0
        jne L2
        mov ecx, edi
        call ext_006B9D70
        push edi
        call ext_006A5C5C
        add esp, 4
        xor eax, eax
        mov dword ptr [esi + 0x58], eax
        pop edi
        pop esi
        ret 4
    L2:
        mov dword ptr [esi + 0x58], edi
        pop edi
        pop esi
        ret 4
    }
}

// [0x0070AF60] sub_0070AF60 (187 bytes)
extern "C" void ext_006A5C62();
extern "C" void ext_006B9D10();
extern "C" void ext_006DC200();
extern "C" void ext_006DCB40();
extern "C" void ext_006E73B0();
extern "C" void ext_0070A620();
extern "C" void ext_0070C860();
extern "C" void ext_008BC3EF();
extern "C" int mem_00AABD70;
extern "C" int mem_00995B04;

extern "C" __declspec(naked) void* __fastcall fn_0070AF60(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        push -0x1
        push offset ext_008BC3EF
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        mov eax, dword ptr [esp + 0x18]
        push esi
        mov esi, ecx
        push edi
        mov ecx, dword ptr [esp + 0x1c]
        mov dword ptr [esp + 0x8], esi
        lea edi, [esi + 0x140]
        push edi
        push eax
        push ecx
        mov ecx, esi
        call ext_006DC200
        lea ecx, [esi + 0xf4]
        mov dword ptr [esp + 0x14], 0x0
        call ext_006B9D10
        push 0x1
        push offset mem_00AABD70
        mov ecx, edi
        mov byte ptr [esp + 0x1c], 0x1
        call ext_006E73B0
        push 0x500
        mov byte ptr [esp + 0x18], 0x2
        mov dword ptr [esi], offset mem_00995B04
        call ext_006A5C62
        add esp, 0x4
        mov dword ptr [esp + 0x20], eax
        test eax, eax
        mov byte ptr [esp + 0x14], 0x3
        je loc_70AFEB
        push esi
        mov ecx, eax
        call ext_0070A620
        jmp loc_70AFED
    loc_70AFEB:
        xor eax, eax
    loc_70AFED:
        mov ecx, esi
        mov byte ptr [esp + 0x14], 0x2
        mov dword ptr [esi + 0xf0], eax
        call ext_006DCB40
        mov ecx, esi
        call ext_0070C860
        mov ecx, dword ptr [esp + 0xc]
        mov eax, esi
        pop edi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret 0x8
    }
}

// [0x00702130] sub_00702130 (192 bytes)
extern "C" void ext_006D80A0();
extern "C" void ext_006B9D70();
extern "C" void ext_006DC2C0();
extern "C" __declspec(naked) void __fastcall fn_00702130(void* self) {
    __asm {
        push -1
        push 0x8bbacc
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        mov dword ptr [esi], 0x99549c
        mov ecx, dword ptr [esi + 0x268]
        push 0
        mov dword ptr [esp + 0x14], 0x6
        mov eax, dword ptr [ecx]
        call dword ptr [eax + 0x4]
        lea ecx, [esi + 0x258]
        mov byte ptr [esp + 0x10], 0x5
        call ext_006D80A0
        lea ecx, [esi + 0x248]
        mov byte ptr [esp + 0x10], 0x4
        call ext_006D80A0
        lea ecx, [esi + 0x1f8]
        mov byte ptr [esp + 0x10], 0x3
        call ext_006B9D70
        lea ecx, [esi + 0x1ac]
        mov byte ptr [esp + 0x10], 0x2
        call ext_006B9D70
        lea ecx, [esi + 0x160]
        mov byte ptr [esp + 0x10], 0x1
        call ext_006B9D70
        lea ecx, [esi + 0x114]
        mov byte ptr [esp + 0x10], 0x0
        call ext_006B9D70
        mov ecx, esi
        mov dword ptr [esp + 0x10], 0xffffffff
        call ext_006DC2C0
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x0070D7E0] sub_0070D7E0 (192 bytes)
extern "C" void ext_006B9D10();
extern "C" void ext_006B9D70();
extern "C" void ext_006B9EC0();
extern "C" void ext_006C9360();
extern "C" void ext_0070CF50();
extern "C" int mem_008BCB18;
extern "C" __declspec(naked) void __fastcall fn_0070D7E0(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        push -1
        push offset mem_008BCB18
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x4c
        push esi
        push edi
        mov edi, ecx
        lea ecx, [esp + 0x8]
        call ext_006B9D10
        mov ecx, dword ptr [esp + 0x64]
        mov dword ptr [esp + 0x5c], 0
        call ext_006C9360
        mov esi, eax
        mov eax, dword ptr [esp + 0x68]
        push eax
        mov ecx, edi
        call ext_0070CF50
        push eax
        lea ecx, [esp + 0xc]
        call ext_006B9EC0
        mov edi, dword ptr [esi]
        lea ecx, [esp + 0x8]
        call ext_006E7460
        push eax
        mov ecx, esi
        call dword ptr [edi + 0x28]
        or edi, -1
        cmp eax, edi
        je slow_path
        mov edx, dword ptr [esi]
        push eax
        mov ecx, esi
        call dword ptr [edx + 0x10]
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x5c], edi
        call ext_006B9D70
        pop edi
        mov al, 1
        pop esi
        mov ecx, dword ptr [esp + 0x4c]
        mov dword ptr fs:[0], ecx
        add esp, 0x58
        ret 8
    slow_path:
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x5c], edi
        call ext_006B9D70
        mov ecx, dword ptr [esp + 0x54]
        pop edi
        xor al, al
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x58
        ret 8
    }
}

// [0x00709040] sub_00709040 (192 bytes)
extern "C" void ext_00711A50();
extern "C" void ext_00711A80();
extern "C" void ext_00711AA0();
extern "C" void ext_00711BA0();
extern "C" void ext_00711BB0();
extern "C" void ext_00711DB0();
extern "C" void ext_00712000();
extern "C" void ext_00712010();
extern "C" void ext_007120B0();
extern "C" void ext_00712A80();
extern "C" __declspec(naked) void __fastcall fn_00709040(void* self, int edx_unused, void* arg) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        push edi
        mov edi, ecx
        test esi, esi
        je L_fail
        push ebx
        push ebp
        mov ecx, esi
        xor ebx, ebx
        call ext_00711DB0
        cmp eax, 0x11
        jne L_mid
        mov ecx, esi
        call ext_007120B0
        mov ebx, eax
L_mid:
        mov ecx, esi
        call ext_00711A50
        mov ebp, dword ptr [edi]
        push ebx
        test al, al
        mov ecx, esi
        je L_else
        call ext_00711A80
        push eax
        mov ecx, esi
        call ext_00711A50
        push eax
        mov ecx, esi
        call ext_00712010
        push eax
        mov ecx, esi
        call ext_00712010
        push eax
        call ext_00712A80
        add esp, 0x4
        jmp L_join
L_else:
        call ext_00711A80
        push eax
        mov ecx, esi
        call ext_00711A50
        push eax
        push 0x0
        mov ecx, esi
        call ext_00711DB0
L_join:
        push eax
        mov ecx, esi
        call ext_00712000
        push eax
        mov ecx, edi
        call dword ptr [ebp + 0xdc]
        mov edi, eax
        pop ebp
        test edi, edi
        pop ebx
        je L_fail
        mov ecx, esi
        call ext_00711BB0
        sub esp, 0x8
        mov ecx, esi
        fstp qword ptr [esp]
        call ext_00711BA0
        sub esp, 0x8
        mov ecx, edi
        fstp qword ptr [esp]
        call ext_00711AA0
        mov eax, edi
        pop edi
        pop esi
        ret 0x4
L_fail:
        pop edi
        xor eax, eax
        pop esi
        ret 0x4
    }
}

// [0x00706D00] sub_00706D00 (201 bytes)
extern "C" void ext_006A5C5C();
extern "C" void ext_006B9D70();
extern "C" void ext_006B9EC0();
extern "C" void ext_006BA7E0();
extern "C" void ext_006E7460();
extern "C" void ext_00706DD0();
extern "C" int mem_00B5EB80;
extern "C" __declspec(naked) void __fastcall fn_00706D00(void* self, int edx_unused, void* arg) {
    __asm {
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr [esp + 0xc]
        mov ecx, dword ptr [esi + 0x50]
        test ecx, ecx
        je L1
        push edi
        call ext_006BA7E0
        test al, al
        je L_done
    L1:
        mov eax, dword ptr [esi + 0x50]
        test eax, eax
        jne L2
        call ext_00706DD0
    L2:
        push ebx
        push -1
        mov dword ptr [esi + 0x50], eax
        mov eax, dword ptr [esi]
        push edi
        push offset mem_00B5EB80
        push 0xa
        mov ecx, esi
        call dword ptr [eax + 0xa4]
        mov ecx, dword ptr [esi + 0x50]
        mov ebx, dword ptr [esi]
        push 0
        call ext_006E7460
        push eax
        push edi
        push esi
        push 0x1b
        push 0
        mov ecx, esi
        call dword ptr [ebx + 0x3c]
        mov ecx, dword ptr [esi + 0x50]
        push edi
        call ext_006B9EC0
        mov edx, dword ptr [esi]
        push 0
        mov ecx, esi
        call dword ptr [edx + 0xa0]
        mov eax, dword ptr [esi]
        push -1
        push edi
        push offset mem_00B5EB80
        push 0xe
        mov ecx, esi
        call dword ptr [eax + 0xa4]
        mov ecx, dword ptr [esi + 0x50]
        mov edi, dword ptr [esi]
        push 0
        push 0
        call ext_006E7460
        push eax
        push esi
        push 0x1c
        push 0
        mov ecx, esi
        call dword ptr [edi + 0x3c]
        mov edi, dword ptr [esi + 0x50]
        pop ebx
        test edi, edi
        je L3
        mov ecx, edi
        call ext_006E7460
        cmp byte ptr [eax], 0
        jne L3
        mov ecx, edi
        call ext_006B9D70
        push edi
        call ext_006A5C5C
        add esp, 4
        xor edi, edi
    L3:
        mov dword ptr [esi + 0x50], edi
    L_done:
        pop edi
        pop esi
        ret 4
    }
}

// [0x00700FD0] sub_00700FD0 (203 bytes)
extern "C" void ext_006A5C5C();
extern "C" void ext_006B9D70();
extern "C" void ext_006D2160();
extern "C" void ext_006D2250();
extern "C" void ext_006E72A0();
extern "C" void ext_006E72D0();
extern "C" __declspec(naked) void __fastcall fn_00700FD0(void* self) {
    __asm {
        push -1
        push 0x8bbd97
        _emit 0x64
        _emit 0xa1
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        push eax
        _emit 0x64
        _emit 0x89
        _emit 0x25
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        sub esp, 0x20
        push ebp
        push esi
        push edi
        lea ecx, [esp + 0x10]
        mov dword ptr [esp + 0xc], 0x0
        call ext_006E72A0
        mov eax, dword ptr [esp + 0x14]
        mov edx, dword ptr [esp + 0x10]
        push 0x0
        mov esi, 0x1
        push 0xaaba0c
        push eax
        lea ecx, [esp + 0x1c]
        mov dword ptr [esp + 0x40], esi
        call dword ptr [edx + 0x8]
        mov ebp, dword ptr [esp + 0x3c]
        lea eax, [esp + 0x10]
        push eax
        _emit 0x8b
        _emit 0xcd
        call ext_006E72D0
        mov dword ptr [esp + 0xc], esi
        mov dword ptr [esp + 0x10], 0x993ce0
        mov eax, dword ptr [esp + 0x14]
        xor edi, edi
        test eax, eax
        mov dword ptr [esp + 0x34], 0x2
        jle after_loop
loop_top:
        mov ecx, dword ptr [esp + 0x24]
        mov esi, dword ptr [ecx + 4*edi]
        test esi, esi
        je skip_item
        _emit 0x8b
        _emit 0xce
        call ext_006B9D70
        push esi
        call ext_006A5C5C
        add esp, 0x4
skip_item:
        mov eax, dword ptr [esp + 0x14]
        inc edi
        cmp edi, eax
        jl loop_top
after_loop:
        lea ecx, [esp + 0x14]
        call ext_006D2250
        lea ecx, [esp + 0x14]
        mov byte ptr [esp + 0x34], 0x0
        call ext_006D2160
        mov ecx, dword ptr [esp + 0x2c]
        pop edi
        _emit 0x8b
        _emit 0xc5
        pop esi
        pop ebp
        _emit 0x64
        _emit 0x89
        _emit 0x0d
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        add esp, 0x2c
        ret 0x4
    }
}

// [0x00705020] sub_00705020 (203 bytes)
extern "C" void ext_006E72A0();
extern "C" void ext_006E72D0();
extern "C" void ext_006B9D70();
extern "C" void ext_006A5C5C();
extern "C" void ext_006D2250();
extern "C" void ext_006D2160();
extern "C" int mem_008BBD97;
extern "C" int mem_00AABD1C;
extern "C" int mem_00993CE0;
extern "C" __declspec(naked) void __fastcall fn_00705020(void* self) {
    __asm {
        push -1
        push offset mem_008BBD97
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
        mov eax, dword ptr [esp + 0x14]
        mov edx, dword ptr [esp + 0x10]
        push 0
        mov esi, 1
        push offset mem_00AABD1C
        push eax
        lea ecx, [esp + 0x1c]
        mov dword ptr [esp + 0x40], esi
        call dword ptr [edx + 0x8]
        mov ebp, dword ptr [esp + 0x3c]
        lea eax, [esp + 0x10]
        push eax
        mov ecx, ebp
        call ext_006E72D0
        mov dword ptr [esp + 0xc], esi
        mov dword ptr [esp + 0x10], offset mem_00993CE0
        mov eax, dword ptr [esp + 0x14]
        xor edi, edi
        test eax, eax
        mov dword ptr [esp + 0x34], 2
        jle done_loop
    loop_top:
        mov ecx, dword ptr [esp + 0x24]
        mov esi, dword ptr [ecx + 4 * edi]
        test esi, esi
        je skip_item
        mov ecx, esi
        call ext_006B9D70
        push esi
        call ext_006A5C5C
        add esp, 4
    skip_item:
        mov eax, dword ptr [esp + 0x14]
        inc edi
        cmp edi, eax
        jl loop_top
    done_loop:
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

// [0x00706F10] sub_00706F10 (206 bytes)
extern "C" void ext_006B9D70();
extern "C" void ext_00705B60();
extern "C" void ext_00706AF0();
extern "C" void ext_00706B10();
extern "C" __declspec(naked) void __fastcall fn_00706F10(void* self, int edx_unused, unsigned int a1, unsigned int a2) {
    __asm {
        push -1
        push 0x8bcb18
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x50
        mov al, byte ptr [esp + 0x64]
        push esi
        test al, al
        mov esi, ecx
        mov dword ptr [esp + 0x4], 0
        je L_else
        lea eax, [esp + 0x8]
        push edi
        push eax
        call ext_00706B10
        mov edi, eax
        mov edx, dword ptr [esi]
        mov ecx, esi
        mov dword ptr [esp + 0x60], 0
        call dword ptr [edx + 0x8c]
        push eax
        mov ecx, edi
        call ext_006E7460
        mov esi, dword ptr [esp + 0x6c]
        push eax
        push 0xb5d2c0
        push 0xb5d2c0
        push esi
        call ext_00705B60
        add esp, 0x14
        lea ecx, [esp + 0xc]
        mov dword ptr [esp + 0x60], -1
        call ext_006B9D70
        mov eax, esi
        pop edi
        pop esi
        mov ecx, dword ptr [esp + 0x50]
        mov dword ptr fs:[0], ecx
        add esp, 0x5c
        ret 0x8
    L_else:
        mov eax, dword ptr [esi]
        mov ecx, esi
        call dword ptr [eax + 0x8c]
        push eax
        mov ecx, esi
        call ext_00706AF0
        mov esi, dword ptr [esp + 0x68]
        push eax
        push 0xb5d2c0
        push 0xb5d2c0
        push esi
        call ext_00705B60
        mov ecx, dword ptr [esp + 0x68]
        add esp, 0x14
        mov eax, esi
        mov dword ptr fs:[0], ecx
        pop esi
        add esp, 0x5c
        ret 0x8
    }
}

// [0x0070EED0] sub_0070EED0 (208 bytes)
extern "C" void ext_006D80A0();
extern "C" void ext_00716070();
extern "C" void ext_00716110();
extern "C" void ext_007165E0();
extern "C" void ext_007873F0();
extern "C" __declspec(naked) void __fastcall fn_0070EED0(void* self, int edx_unused, void* arg) {
    __asm {
        push -1
        push 0x8bc908
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x40
        push esi
        push edi
        mov edi, dword ptr [esp + 0x58]
        mov esi, ecx
        lea eax, [esp + 0x8]
        mov ecx, edi
        push eax
        call ext_00716110
        push eax
        lea ecx, [esi + 0x168]
        mov dword ptr [esp + 0x54], 0x0
        call ext_007873F0
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x50], 0xffffffff
        call ext_006D80A0
        lea ecx, [esp + 0x8]
        push ecx
        mov ecx, edi
        call ext_00716070
        push eax
        lea ecx, [esi + 0x148]
        mov dword ptr [esp + 0x54], 0x1
        call ext_007873F0
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x50], 0xffffffff
        call ext_006D80A0
        lea edx, [esp + 0x28]
        mov ecx, edi
        push edx
        call ext_007165E0
        push eax
        lea ecx, [esi + 0x188]
        mov dword ptr [esp + 0x54], 0x2
        call ext_007873F0
        lea ecx, [esp + 0x28]
        mov dword ptr [esp + 0x50], 0xffffffff
        call ext_006D80A0
        mov ecx, dword ptr [esp + 0x48]
        pop edi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x4c
        ret 0x4
    }
}

// [0x0070F140] sub_0070F140 (208 bytes)
extern "C" void ext_006D80A0();
extern "C" void ext_00716070();
extern "C" void ext_00716110();
extern "C" void ext_007165E0();
extern "C" void ext_007873F0();
extern "C" __declspec(naked) void __fastcall fn_0070F140(void* self) {
    __asm {
        push -1
        push 0x8bc908
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x40
        push esi
        push edi
        mov edi, dword ptr [esp + 0x58]
        mov esi, ecx
        lea eax, [esp + 0x8]
        mov ecx, edi
        push eax
        mov byte ptr [esi + 0x268], 0x1
        call ext_00716110
        push eax
        lea ecx, [esi + 0x290]
        mov dword ptr [esp + 0x54], 0x0
        call ext_007873F0
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x50], 0xffffffff
        call ext_006D80A0
        lea ecx, [esp + 0x8]
        push ecx
        mov ecx, edi
        call ext_00716070
        push eax
        lea ecx, [esi + 0x270]
        mov dword ptr [esp + 0x54], 0x1
        call ext_007873F0
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x50], 0xffffffff
        call ext_006D80A0
        lea edx, [esp + 0x28]
        mov ecx, edi
        push edx
        call ext_007165E0
        push eax
        lea ecx, [esi + 0x2b0]
        mov dword ptr [esp + 0x54], 0x2
        call ext_007873F0
        lea ecx, [esp + 0x28]
        mov dword ptr [esp + 0x50], 0xffffffff
        call ext_006D80A0
        mov ecx, dword ptr [esp + 0x48]
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x4c
        ret 0x4
    }
}

// [0x0070EFA0] sub_0070EFA0 (208 bytes)
extern "C" void ext_006D80A0();
extern "C" void ext_00716070();
extern "C" void ext_00716110();
extern "C" void ext_007165E0();
extern "C" void ext_007873F0();
extern "C" __declspec(naked) void __fastcall fn_0070EFA0(void* self, int edx_unused, void* arg) {
    __asm {
        push -1
        push 0x8bc908
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x40
        push esi
        push edi
        mov edi, dword ptr [esp + 0x58]
        mov esi, ecx
        lea eax, [esp + 0x8]
        mov ecx, edi
        push eax
        call ext_00716110
        push eax
        lea ecx, [esi + 0x1c8]
        mov dword ptr [esp + 0x54], 0x0
        call ext_007873F0
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x50], 0xffffffff
        call ext_006D80A0
        lea ecx, [esp + 0x8]
        push ecx
        mov ecx, edi
        call ext_00716070
        push eax
        lea ecx, [esi + 0x1a8]
        mov dword ptr [esp + 0x54], 0x1
        call ext_007873F0
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x50], 0xffffffff
        call ext_006D80A0
        lea edx, [esp + 0x28]
        mov ecx, edi
        push edx
        call ext_007165E0
        push eax
        lea ecx, [esi + 0x1e8]
        mov dword ptr [esp + 0x54], 0x2
        call ext_007873F0
        lea ecx, [esp + 0x28]
        mov dword ptr [esp + 0x50], 0xffffffff
        call ext_006D80A0
        mov ecx, dword ptr [esp + 0x48]
        pop edi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x4c
        ret 0x4
    }
}

// [0x0070CFD0] sub_0070CFD0 (224 bytes)
extern "C" int mem_008BCB18;
extern "C" void ext_006B9D10();
extern "C" void ext_006B9D70();
extern "C" void ext_006B9EC0();
extern "C" void ext_006B99C0();
extern "C" void ext_006C9360();
extern "C" void ext_006DE7C0();
extern "C" void ext_0070CF50();

extern "C" __declspec(naked) int __fastcall fn_0070CFD0(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push -1
        push offset mem_008BCB18
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x4c
        push ebx
        push esi
        mov esi, ecx
        push edi
        lea ecx, [esp + 0xc]
        xor edi, edi
        call ext_006B9D10
        mov eax, dword ptr [esp + 0x6c]
        mov dword ptr [esp + 0x60], edi
        cmp eax, edi
        jge fn0070cfd0_a1
        push edi
        jmp fn0070cfd0_call
fn0070cfd0_a1:
        mov ebx, dword ptr [esp + 0x68]
        cmp ebx, edi
        jne fn0070cfd0_a1nz
        push 1
fn0070cfd0_call:
        lea ecx, [esi + 0x150]
        call ext_006E7440
        lea ecx, [esp + 0xc]
        mov dword ptr [esp + 0x60], 0xffffffff
        call ext_006B9D70
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        mov ecx, dword ptr [esp + 0x4c]
        mov dword ptr fs:[0], ecx
        add esp, 0x58
        ret 8
fn0070cfd0_a1nz:
        push eax
        mov ecx, esi
        call ext_0070CF50
        push eax
        lea ecx, [esp + 0x10]
        call ext_006B9EC0
        lea ecx, [esp + 0xc]
        call ext_006B99C0
        test eax, eax
        je fn0070cfd0_done
        lea ecx, [esp + 0xc]
        call ext_006E7460
        push eax
        mov ecx, ebx
        call ext_006C9360
        mov ecx, eax
        call ext_006DE7C0
        mov edi, eax
fn0070cfd0_done:
        lea ecx, [esp + 0xc]
        mov dword ptr [esp + 0x60], 0xffffffff
        call ext_006B9D70
        mov ecx, dword ptr [esp + 0x58]
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x58
        ret 8
    }
}

// [0x007097C0] sub_007097C0 (227 bytes)
extern "C" void ext_006FA5A0();
extern "C" void ext_006FC6E0();
extern "C" int mem_00B5E400;
extern "C" int mem_00B5EB78;
extern "C" __declspec(naked) void __fastcall fn_007097C0(void* self) {
    __asm {
        sub esp, 0x10
        mov eax, dword ptr [mem_00B5E400]
        push ebx
        push ebp
        push esi
        push edi
        mov esi, ecx
        push eax
        mov dword ptr [esp + 0x14], esi
        call ext_006FC6E0
        add esp, 0x4
        mov ecx, esi
        push eax
        call ext_006FA5A0
        mov ebx, eax
        xor ebp, ebp
        mov edx, dword ptr [ebx + 0x18]
        test edx, edx
        mov dword ptr [esp + 0x18], edx
        jle c_done
        mov eax, dword ptr [ebx + 0x14]
        mov ecx, dword ptr [ebx + 0x10]
        lea eax, [eax + 2*eax]
        lea ecx, [ecx + 4*eax]
        mov eax, dword ptr [ecx + 0x4]
        test eax, eax
        je c_done
        mov esi, dword ptr [eax]
        mov edi, dword ptr [ecx]
        cmp esi, edi
        jne c_done
        mov esi, dword ptr [eax + 0x4]
        test esi, esi
        je c_done
c_loop:
        mov edi, dword ptr [esi + 0x8]
        test edi, edi
        je c_alt
        mov eax, dword ptr [mem_00B5EB78]
        mov edx, dword ptr [edi]
        push eax
        mov ecx, edi
        call dword ptr [edx + 0x14]
        test al, al
        je c_next
        mov ecx, edi
        jmp c_call
c_alt:
        mov eax, dword ptr [mem_00B5EB78]
        mov edx, dword ptr [esi]
        push eax
        mov ecx, esi
        call dword ptr [edx + 0x14]
        test al, al
        je c_next
        mov ecx, esi
c_call:
        test ecx, ecx
        je c_next
        mov eax, dword ptr [esp + 0x10]
        mov edx, dword ptr [ecx]
        push eax
        call dword ptr [edx + 0x11c]
        test al, al
        je c_fail
c_next:
        mov edx, dword ptr [esp + 0x18]
        inc ebp
        js c_done
        cmp ebp, edx
        jge c_done
        mov eax, dword ptr [ebx + 0x14]
        add eax, ebp
        lea ecx, [eax + 2*eax]
        mov eax, dword ptr [ebx + 0x10]
        lea ecx, [eax + 4*ecx]
        mov eax, dword ptr [ecx + 0x4]
        test eax, eax
        je c_done
        mov esi, dword ptr [eax]
        mov edi, dword ptr [ecx]
        cmp esi, edi
        jne c_done
        mov esi, dword ptr [eax + 0x4]
        test esi, esi
        jne c_loop
c_done:
        pop edi
        pop esi
        pop ebp
        mov al, 0x1
        pop ebx
        add esp, 0x10
        ret
c_fail:
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 0x10
        ret
    }
}

// [0x00706FE0] sub_00706FE0 (230 bytes)
extern "C" int mem_00B5E400;
extern "C" int mem_00B5EB78;
extern "C" void ext_006BDAF0();
extern "C" void ext_006FA5A0();
extern "C" void ext_006FC6E0();
extern "C" __declspec(naked) void __fastcall fn_00706FE0(void* self, int edx_unused, void* arg) {
    __asm {
        push ecx
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr [edi]
        mov byte ptr [edi + 0x64], 0x1
        call dword ptr [eax + 0x84]
        mov ebp, eax
        mov al, byte ptr [esp + 0x18]
        test al, al
        je done
        cmp ebp, -0x1
        je done
        xor ebx, ebx
        mov dword ptr [esp + 0x10], ebx
loop_head:
        cmp ebp, dword ptr [mem_00B5E400]
        je self_count
        push ebp
        call ext_006FC6E0
        add esp, 0x4
        mov ecx, edi
        push eax
        call ext_006FA5A0
        mov eax, dword ptr [eax + 0x14]
        jmp cmp_count
self_count:
        mov eax, dword ptr [edi + 0x14]
cmp_count:
        cmp dword ptr [esp + 0x10], eax
        jge done
        cmp ebp, dword ptr [mem_00B5E400]
        je same_branch
        push ebp
        call ext_006FC6E0
        add esp, 0x4
        mov ecx, edi
        push eax
        call ext_006FA5A0
        mov esi, dword ptr [eax + 0x10]
        add esi, ebx
        mov ecx, esi
        call ext_006BDAF0
        test al, al
        je next
        mov ecx, dword ptr [esi + 0x4]
        jmp have_ecx
same_branch:
        mov eax, dword ptr [edi + 0x10]
        add eax, ebx
        mov ecx, dword ptr [eax + 0x4]
        test ecx, ecx
        je next
        mov edx, dword ptr [ecx]
        mov esi, dword ptr [eax]
        cmp edx, esi
        jne next
have_ecx:
        mov esi, dword ptr [ecx + 0x4]
        test esi, esi
        je next
        mov ecx, dword ptr [mem_00B5EB78]
        mov eax, dword ptr [esi]
        push ecx
        mov ecx, esi
        call dword ptr [eax + 0x14]
        test al, al
        je next
        mov esi, dword ptr [esi + 0x4]
        test esi, esi
        je next
        mov ecx, dword ptr [esi + 0x4]
        mov eax, dword ptr [esp + 0x18]
        push eax
        mov edx, dword ptr [ecx]
        call dword ptr [edx + 0xa0]
next:
        mov ecx, dword ptr [esp + 0x10]
        inc ecx
        add ebx, 0xc
        mov dword ptr [esp + 0x10], ecx
        jmp loop_head
done:
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 0x4
    }
}

// [0x0070F070] sub_0070F070 (208 bytes)
extern "C" void ext_006D80A0();
extern "C" void ext_00716070();
extern "C" void ext_00716110();
extern "C" void ext_007165E0();
extern "C" void ext_007873F0();
extern "C" __declspec(naked) void __fastcall fn_0070F070(void* self, int edx_unused, void* arg) {
    __asm {
        push -1
        push 0x8bc908
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x40
        push esi
        push edi
        mov edi, dword ptr [esp + 0x58]
        mov esi, ecx
        lea eax, [esp + 0x8]
        mov ecx, edi
        push eax
        call ext_00716110
        push eax
        lea ecx, [esi + 0x228]
        mov dword ptr [esp + 0x54], 0x0
        call ext_007873F0
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x50], 0xffffffff
        call ext_006D80A0
        lea ecx, [esp + 0x8]
        push ecx
        mov ecx, edi
        call ext_00716070
        push eax
        lea ecx, [esi + 0x208]
        mov dword ptr [esp + 0x54], 0x1
        call ext_007873F0
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x50], 0xffffffff
        call ext_006D80A0
        lea edx, [esp + 0x28]
        mov ecx, edi
        push edx
        call ext_007165E0
        push eax
        lea ecx, [esi + 0x248]
        mov dword ptr [esp + 0x54], 0x2
        call ext_007873F0
        lea ecx, [esp + 0x28]
        mov dword ptr [esp + 0x50], 0xffffffff
        call ext_006D80A0
        mov ecx, dword ptr [esp + 0x48]
        pop edi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x4c
        ret 0x4
    }
}

// [0x007024A0] sub_007024A0 (238 bytes)
extern "C" __declspec(naked) void __fastcall fn_007024A0(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        mov dword ptr [ecx + 0x10c], eax
        dec eax
        cmp eax, 6
        ja loc_70257B
        jmp dword ptr [4*eax + L_tbl]

    loc_7024BB:
        mov eax, dword ptr [ecx + 0x110]
        sub eax, 0
        je loc_7024F6
        dec eax
        je loc_7024E3
        dec eax
        jne loc_70258B
        mov eax, dword ptr [ecx + 0x268]
        mov dword ptr [eax + 0x380], 1
        ret 4

    loc_7024E3:
        mov ecx, dword ptr [ecx + 0x268]
        mov dword ptr [ecx + 0x380], 3
        ret 4

    loc_7024F6:
        mov edx, dword ptr [ecx + 0x268]
        mov dword ptr [edx + 0x380], 2
        ret 4

    loc_702509:
        mov eax, dword ptr [ecx + 0x268]
        mov dword ptr [eax + 0x380], 4
        ret 4

    loc_70251C:
        mov ecx, dword ptr [ecx + 0x268]
        mov dword ptr [ecx + 0x380], 5
        ret 4

    loc_70252F:
        mov edx, dword ptr [ecx + 0x268]
        mov dword ptr [edx + 0x380], 8
        ret 4

    loc_702542:
        mov eax, dword ptr [ecx + 0x268]
        mov dword ptr [eax + 0x380], 9
        ret 4

    loc_702555:
        mov ecx, dword ptr [ecx + 0x268]
        mov dword ptr [ecx + 0x380], 0
        ret 4

    loc_702568:
        mov edx, dword ptr [ecx + 0x268]
        mov dword ptr [edx + 0x380], 6
        ret 4

    loc_70257B:
        mov eax, dword ptr [ecx + 0x268]
        mov dword ptr [eax + 0x380], 10
    loc_70258B:
        ret 4

    L_tbl:
    }
}

// [0x00709250] sub_00709250 (234 bytes)
extern "C" void ext_00708000();
extern "C" void ext_00708D10();
extern "C" void ext_00708D70();
extern "C" void ext_00711A80();
extern "C" void ext_00712000();
extern "C" __declspec(naked) void __fastcall fn_00709250(void* self, int edx_unused, void* arg) {
    __asm {
        sub esp, 0xc
        push ebx
        push esi
        mov esi, dword ptr [esp + 0x18]
        push edi
        mov edi, ecx
        cmp edi, esi
        mov dword ptr [esp + 0xc], edi
        je t9250_ret
        mov eax, dword ptr [esi]
        mov ebx, dword ptr [edi]
        mov ecx, esi
        call dword ptr [eax + 0x18]
        push eax
        mov ecx, edi
        call dword ptr [ebx + 0x14]
        test al, al
        je t9250_ret
        xor ebx, ebx
        mov ecx, esi
        mov dword ptr [esp + 0x10], ebx
        call ext_00708D70
        test eax, eax
        mov dword ptr [esp + 0x14], eax
        jbe t9250_ret
        push ebp
t9250_loop:
        push ebx
        mov ecx, esi
        call ext_00708D10
        mov ebp, eax
        test ebp, ebp
        je short t9250_next
        mov ecx, ebp
        call ext_00712000
        push eax
        mov ecx, edi
        call ext_00708000
        mov ebx, eax
        test ebx, ebx
        je short t9250_next
        mov ecx, ebx
        call ext_00711A80
        test al, al
        je short t9250_next
        mov ecx, ebp
        call ext_00712000
        mov ecx, ebx
        mov edi, eax
        call ext_00712000
        mov esi, eax
        mov ecx, edi
t9250_cmp:
        mov dl, byte ptr [ecx]
        mov al, dl
        cmp dl, byte ptr [esi]
        jne short t9250_diff
        test al, al
        je short t9250_eq
        mov dl, byte ptr [ecx + 0x1]
        mov al, dl
        cmp dl, byte ptr [esi + 0x1]
        jne short t9250_diff
        add ecx, 0x2
        add esi, 0x2
        test al, al
        jne short t9250_cmp
t9250_eq:
        xor eax, eax
        jmp short t9250_res
t9250_diff:
        sbb eax, eax
        sbb eax, -1
t9250_res:
        test eax, eax
        jne short t9250_skip
        mov eax, dword ptr [ebx]
        push ebp
        mov ecx, ebx
        call dword ptr [eax + 0x94]
t9250_skip:
        mov edi, dword ptr [esp + 0x10]
        mov esi, dword ptr [esp + 0x20]
t9250_next:
        mov ebx, dword ptr [esp + 0x14]
        mov eax, dword ptr [esp + 0x18]
        inc ebx
        cmp ebx, eax
        mov dword ptr [esp + 0x14], ebx
        jb t9250_loop
        pop ebp
t9250_ret:
        pop edi
        pop esi
        pop ebx
        add esp, 0xc
        ret 0x4
    }
}

// [0x00702010] sub_00702010 (244 bytes)
extern "C" void ext_006DC200();
extern "C" void ext_006B9D10();
extern "C" void ext_0077FAB0();
extern "C" void ext_006A5C62();
extern "C" void ext_00701480();
extern "C" void ext_006DCB40();
extern "C" void ext_007039C0();
extern "C" int mem_008BBA57;
extern "C" int mem_00B5E770;
extern "C" int mem_0099549C;
extern "C" __declspec(naked) void __fastcall fn_00702010(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        push -1
        push offset mem_008BBA57
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        push ecx
        mov eax, dword ptr [esp + 0x18]
        push esi
        mov esi, ecx
        push offset mem_00B5E770
        mov ecx, dword ptr [esp + 0x1c]
        push eax
        push ecx
        mov ecx, esi
        mov dword ptr [esp + 0x10], esi
        call ext_006DC200
        lea ecx, [esi + 0x114]
        mov dword ptr [esp + 0x10], 0
        call ext_006B9D10
        lea ecx, [esi + 0x160]
        mov byte ptr [esp + 0x10], 1
        call ext_006B9D10
        lea ecx, [esi + 0x1ac]
        mov byte ptr [esp + 0x10], 2
        call ext_006B9D10
        lea ecx, [esi + 0x1f8]
        mov byte ptr [esp + 0x10], 3
        call ext_006B9D10
        lea ecx, [esi + 0x248]
        mov byte ptr [esp + 0x10], 4
        call ext_0077FAB0
        lea ecx, [esi + 0x258]
        mov byte ptr [esp + 0x10], 5
        call ext_0077FAB0
        push 0x6f8
        mov byte ptr [esp + 0x14], 6
        mov dword ptr [esi], offset mem_0099549C
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp + 0x1c], eax
        test eax, eax
        mov byte ptr [esp + 0x10], 7
        je L_zero
        push esi
        mov ecx, eax
        call ext_00701480
        jmp L_join
L_zero:
        xor eax, eax
L_join:
        mov ecx, esi
        mov byte ptr [esp + 0x10], 6
        mov dword ptr [esi + 0x268], eax
        call ext_006DCB40
        mov ecx, esi
        call ext_007039C0
        mov ecx, dword ptr [esp + 0x8]
        mov eax, esi
        pop esi
        mov fs:[0], ecx
        add esp, 0x10
        ret 8
    }
}

// [0x00709140] sub_00709140 (263 bytes)
extern "C" __declspec(naked) void __fastcall fn_00709140(void* self, int edx_unused, void* arg) {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0x10
        push ebx
        mov ebx, dword ptr [ebp + 0x8]
        push esi
        mov esi, ecx
        cmp esi, ebx
        push edi
        mov dword ptr [ebp - 0x10], esi
        je f9_done
        mov eax, dword ptr [ebx]
        mov edi, dword ptr [esi]
        mov ecx, ebx
        call dword ptr [eax + 0x18]
        push eax
        mov ecx, esi
        call dword ptr [edi + 0x14]
        test al, al
        je f9_done
        mov ecx, dword ptr [ebx + 0xc0]
        mov edx, dword ptr [esi + 0xc0]
        xor edi, edi
        mov dword ptr [ebp - 0x8], ecx
        mov dword ptr [ebp - 0x4], edi
        mov dword ptr [ebp - 0xc], edx
        mov edx, dword ptr [ebp - 0xc]
        mov ecx, dword ptr [ebp - 0x8]
        xor eax, eax
        sub edx, ecx
        setg al
        dec eax
        and eax, edx
        add eax, ecx
        test eax, eax
        mov dword ptr [ebp - 0x8], eax
        jbe f9_done
        jmp f9_body
f9_reload:
        mov esi, dword ptr [ebp - 0x10]
        mov ebx, dword ptr [ebp + 0x8]
f9_body:
        mov eax, dword ptr [ebx + 0xd0]
        mov ecx, dword ptr [esi + 0xd0]
        mov ebx, dword ptr [eax + 4*edi]
        mov esi, dword ptr [ecx + 4*edi]
        test ebx, ebx
        mov dword ptr [ebp - 0xc], esi
        je f9_next
        test esi, esi
        je f9_next
        mov ecx, ebx
        call ext_00711A50
        test al, al
        jne f9_next
        mov ecx, esi
        call ext_00711A50
        test al, al
        jne f9_next
        mov ecx, ebx
        call ext_00712000
        mov ecx, esi
        mov edi, eax
        call ext_00712000
        mov esi, eax
        mov ecx, edi
f9_cmp:
        mov dl, byte ptr [ecx]
        mov al, dl
        cmp dl, byte ptr [esi]
        jne f9_diff
        test al, al
        je f9_eq
        mov dl, byte ptr [ecx + 0x1]
        mov al, dl
        cmp dl, byte ptr [esi + 0x1]
        jne f9_diff
        add ecx, 0x2
        add esi, 0x2
        test al, al
        jne f9_cmp
f9_eq:
        xor eax, eax
        jmp f9_after
f9_diff:
        sbb eax, eax
        sbb eax, -1
f9_after:
        test eax, eax
        jne f9_skip2
        mov ecx, dword ptr [ebp - 0xc]
        push ebx
        mov eax, dword ptr [ecx]
        call dword ptr [eax + 0x94]
f9_skip2:
        mov edi, dword ptr [ebp - 0x4]
f9_next:
        mov eax, dword ptr [ebp - 0x8]
        inc edi
        cmp edi, eax
        mov dword ptr [ebp - 0x4], edi
        jb f9_reload
f9_done:
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0x4
    }
}

// [0x00704EC0] sub_00704EC0 (272 bytes)
extern "C" void ext_007023A0();

extern "C" __declspec(naked) void __fastcall fn_00704EC0(void* self, int edx_unused, const char* s) {
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
        mov ecx, dword ptr [esi + 0xf0]
        push ebx
        add ecx, 0x820
        mov edi, ebp
        call ext_006E7460
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
        jmp L_done
    L_neq:
        sbb eax, eax
        sbb eax, -1
    L_done:
        test eax, eax
        je L_ok
        mov ecx, dword ptr [esi + 0xf0]
        push ebp
        add ecx, 0x820
        call ext_006B9EC0
        mov eax, dword ptr [esi]
        mov ecx, esi
        xor edi, edi
        call dword ptr [eax + 0xc]
        mov ecx, dword ptr [eax + 0x18]
        test ecx, ecx
        jle L_ok
    L_loop:
        mov edx, dword ptr [esi]
        mov ecx, esi
        call dword ptr [edx + 0xc]
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
        jmp L_have
    L_zero:
        xor eax, eax
    L_have:
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
        call ext_00704FD0
        push eax
        mov ecx, ebx
        call ext_007023A0
    L_next:
        mov edx, dword ptr [esi]
        mov ecx, esi
        inc edi
        call dword ptr [edx + 0xc]
        cmp edi, dword ptr [eax + 0x18]
        jl L_loop
    L_ok:
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

// [0x00701230] sub_00701230 (278 bytes)
extern "C" int mem_00B5E848;
extern "C" int mem_00B5E84C;
extern "C" int mem_00B5E850;
extern "C" int mem_00B5E854;
extern "C" int mem_00B5E858;
extern "C" int mem_00B5E85C;
extern "C" int mem_00B5E860;
extern "C" int mem_00B5E864;
extern "C" int mem_00B5E868;
extern "C" int mem_00B5E86C;
extern "C" int mem_00B5E870;
extern "C" int mem_00B5E874;
extern "C" int mem_00B5E878;
extern "C" int mem_00B5E87C;
extern "C" int mem_00B5E880;
extern "C" int mem_00B5E884;
extern "C" int mem_00B5E888;
extern "C" int mem_00B5E88C;
extern "C" int mem_00B5E890;
extern "C" int mem_00B5E894;
extern "C" int mem_00B5E898;
extern "C" int mem_00B5E89C;
extern "C" int mem_00B5E8A0;
extern "C" int mem_00B5E8A4;
extern "C" int mem_00B5E8A8;
extern "C" int mem_00B5E8AC;
extern "C" int mem_00B5E8B0;
extern "C" int mem_00B5E8B4;
extern "C" int mem_00B5E8B8;
extern "C" int mem_00B5E8BC;
extern "C" int mem_00B5E8C0;
extern "C" int mem_00B5E8C4;
extern "C" int mem_00925284;

extern "C" __declspec(naked) void __fastcall fn_00701230(void* self) {
    __asm {
        mov eax, dword ptr [mem_00925284]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [mem_00B5E848], ecx
        mov dword ptr [mem_00B5E84C], edx
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [mem_00B5E850], ecx
        mov dword ptr [mem_00B5E854], edx
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [mem_00B5E858], ecx
        mov dword ptr [mem_00B5E85C], edx
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [mem_00B5E860], ecx
        mov dword ptr [mem_00B5E864], edx
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [mem_00B5E868], ecx
        mov dword ptr [mem_00B5E86C], edx
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [mem_00B5E870], ecx
        mov dword ptr [mem_00B5E874], edx
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [mem_00B5E878], ecx
        mov dword ptr [mem_00B5E87C], edx
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [mem_00B5E880], ecx
        mov dword ptr [mem_00B5E884], edx
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [mem_00B5E888], ecx
        mov dword ptr [mem_00B5E88C], edx
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [mem_00B5E890], ecx
        mov dword ptr [mem_00B5E894], edx
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [mem_00B5E898], ecx
        mov dword ptr [mem_00B5E89C], edx
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [mem_00B5E8A0], ecx
        mov dword ptr [mem_00B5E8A4], edx
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [mem_00B5E8A8], ecx
        mov dword ptr [mem_00B5E8AC], edx
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [mem_00B5E8B0], ecx
        mov dword ptr [mem_00B5E8B4], edx
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [mem_00B5E8B8], ecx
        mov dword ptr [mem_00B5E8BC], edx
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [mem_00B5E8C0], ecx
        mov dword ptr [mem_00B5E8C4], edx
        ret
    }
}

// [0x0070CBF0] sub_0070CBF0 (280 bytes)
extern "C" void ext_006D2130();
extern "C" void ext_006D7880();
extern "C" void ext_006E73B0();
extern "C" void ext_0070E380();
extern "C" void ext_00714570();

extern "C" __declspec(naked) void __fastcall fn_0070CBF0(void* self, int edx_unused, void* arg) {
    __asm {
        push -1
        push 0x8bc51f
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        mov eax, dword ptr [esp + 0x14]
        push esi
        push edi
        mov esi, ecx
        push eax
        mov dword ptr [esp + 0xc], esi
        call ext_006D7880
        lea edi, [esi + 0x40]
        push 0x4
        push 0x10
        mov ecx, edi
        mov dword ptr [esp + 0x1c], 0x0
        call ext_006D2130
        lea ecx, [edi + 0x10]
        mov dword ptr [edi + 0x14], ecx
        lea edi, [esi + 0x58]
        push 0x4
        push 0x10
        mov ecx, edi
        mov byte ptr [esp + 0x1c], 0x1
        call ext_006D2130
        lea edx, [edi + 0x10]
        mov dword ptr [edi + 0x14], edx
        lea edi, [esi + 0x70]
        push 0x4
        push 0x10
        mov ecx, edi
        mov byte ptr [esp + 0x1c], 0x2
        call ext_006D2130
        lea eax, [edi + 0x10]
        mov dword ptr [edi + 0x14], eax
        lea edi, [esi + 0x88]
        push 0x4
        push 0x10
        mov ecx, edi
        mov byte ptr [esp + 0x1c], 0x3
        call ext_006D2130
        lea ecx, [edi + 0x10]
        mov dword ptr [edi + 0x14], ecx
        lea edi, [esi + 0xa0]
        push 0x4
        push 0x10
        mov ecx, edi
        mov byte ptr [esp + 0x1c], 0x4
        call ext_006D2130
        lea edx, [edi + 0x10]
        mov dword ptr [edi + 0x14], edx
        lea edi, [esi + 0xb8]
        push 0x4
        push 0x10
        mov ecx, edi
        mov byte ptr [esp + 0x1c], 0x5
        call ext_006D2130
        lea eax, [edi + 0x10]
        mov dword ptr [edi + 0x14], eax
        lea ecx, [esi + 0xd0]
        mov byte ptr [esp + 0x14], 0x6
        call ext_00714570
        push 0xa
        push 0xaabd94
        lea ecx, [esi + 0x150]
        mov byte ptr [esp + 0x1c], 0x7
        call ext_006E73B0
        mov ecx, esi
        mov byte ptr [esp + 0x14], 0x8
        mov dword ptr [esi], 0x995b50
        call ext_0070E380
        mov ecx, dword ptr [esp + 0xc]
        mov eax, esi
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 0x4
    }
}
