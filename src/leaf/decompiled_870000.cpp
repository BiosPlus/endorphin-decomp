// Decompiled translation unit: src/leaf/decompiled_870000.cpp

// [0x00871D00] sub_00871D00 (25 bytes)
extern "C" void ext_00871C50();

extern "C" __declspec(naked) void __fastcall fn_00871D00(void* self) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        mov esi, ecx
    loop_00871D08:
        push edi
        mov ecx, esi
        call ext_00871C50
        test al, al
        jne loop_00871D08
        pop edi
        pop esi
        ret 4
    }
}

// [0x00871090] sub_00871090 (26 bytes)
extern "C" void ext_00870E90();
extern "C" void ext_00870EF0();

extern "C" __declspec(naked) void __stdcall fn_00871090(unsigned char arg) {
    __asm {
        call ext_00870E90
        cmp al, byte ptr [esp + 0x4]
        je match_008710A5
        call ext_00870EF0
        xor al, al
        ret 4
    match_008710A5:
        mov al, 1
        ret 4
    }
}

// [0x008703D0] sub_008703D0 (27 bytes)
extern "C" void __cdecl ext_0049FE40(int, int, int, int);

extern "C" void __fastcall fn_008703D0(void* self, int edx_unused, int a1, int a2) {
    ext_0049FE40(a1, (int)self + 4, a2, 1);
}

// [0x00871E00] sub_00871E00 (27 bytes)
extern "C" void ext_00871BD0();
extern "C" void ext_00871D00();

extern "C" __declspec(naked) void __fastcall fn_00871E00(void* self) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        push edi
        mov esi, ecx
        call ext_00871BD0
        push edi
        mov ecx, esi
        call ext_00871D00
        pop edi
        pop esi
        ret 4
    }
}

extern "C" void ext_006A5EDE();
extern "C" int mem_009251B4;

// [0x008727FB] sub_008727FB (38 bytes)
extern "C" __declspec(naked) void __fastcall fn_008727FB(void* self, int edx_unused, int a1, int a2) {
    __asm {
        call ext_006A5EDE
        mov ecx, dword ptr [esp + 0x4]
        test ecx, ecx
        mov edx, dword ptr [esp + 0x8]
        mov byte ptr [eax + 0x14], cl
        mov dword ptr [eax + 0x44], edx
        jne skip_0087281B
        push -0x3
        call dword ptr [mem_009251B4]
        pop ecx
    skip_0087281B:
        xor eax, eax
        inc eax
        ret 0x8
    }
}

// [0x00870320] sub_00870320 (38 bytes)
extern "C" void ext_0049D360();
extern "C" void ext_0055DA20();

extern "C" __declspec(naked) void __fastcall fn_00870320(void* self) {
    __asm {
        push ecx
        add ecx, 0x4
        push esi
        push ecx
        mov dword ptr [esp + 0x8], 0x0
        call ext_0049D360
        mov esi, dword ptr [esp + 0x10]
        push eax
        mov ecx, esi
        call ext_0055DA20
        mov eax, esi
        pop esi
        pop ecx
        ret 0x4
    }
}

// [0x00871890] sub_00871890 (39 bytes)
extern "C" __declspec(naked) void __fastcall fn_00871890(void* self, int edx_unused, void* src) {
    __asm {
        mov eax, ecx
        mov ecx, dword ptr [esp + 0x4]
        mov dword ptr [eax], 0x99f138
        mov edx, dword ptr [ecx + 0x4]
        mov dword ptr [eax + 0x4], edx
        mov edx, dword ptr [ecx + 0x8]
        mov dword ptr [eax + 0x8], edx
        mov edx, dword ptr [ecx + 0xc]
        mov dword ptr [eax + 0xc], edx
        mov ecx, dword ptr [ecx + 0x10]
        mov dword ptr [eax + 0x10], ecx
        ret 4
    }
}

// [0x00870EF0] sub_00870EF0 (76 bytes)
extern "C" __declspec(naked) void __fastcall fn_00870EF0(void* self) {
    __asm {
        mov eax, dword ptr [ecx + 0x8]
        cmp eax, dword ptr [ecx + 0xc]
        ja  done_00870EF0
        mov edx, dword ptr [ecx + 0x4]
        push esi
        lea esi, [eax - 0x1]
        cmp esi, edx
        pop esi
        jae l16_00870EF0
        mov eax, 0x1
        mov dword ptr [ecx + 0x8], edx
        mov dword ptr [ecx + 0x18], eax
        mov dword ptr [ecx + 0x10], eax
        mov dword ptr [ecx + 0x14], eax
        ret
    l16_00870EF0:
        add eax, -0x1
        mov dword ptr [ecx + 0x8], eax
        cmp byte ptr [eax], 0xa
        jne l35_00870EF0
        cmp eax, edx
        jbe l31_00870EF0
        cmp byte ptr [eax - 0x1], 0xd
        jne l31_00870EF0
        add eax, -0x1
        mov dword ptr [ecx + 0x8], eax
    l31_00870EF0:
        add dword ptr [ecx + 0x10], -0x1
    l35_00870EF0:
        mov eax, dword ptr [ecx + 0x18]
        mov dword ptr [ecx + 0x14], eax
    done_00870EF0:
        ret
    }
}

// [0x00870E90] sub_00870E90 (81 bytes)
struct Decomp870E90State {
    unsigned char pad0[8];
    char* cur;   // +0x08
    char* end;   // +0x0c
    int line;    // +0x10
    int col;     // +0x14
    int prevCol; // +0x18
};

extern "C" char __fastcall fn_00870E90(Decomp870E90State* self) {
    char* p = self->cur;
    char* e = self->end;
    if (p >= e) {
        self->cur = e + 1;
        return 0;
    }
    char c = *p;
    p++;
    self->cur = p;
    if (c == 0x0d) {
        if (p < e && *p == 0x0a) {
            p++;
            self->cur = p;
        }
        c = 0x0a;
    }
    self->prevCol = self->col;
    if (c == 0x0a) {
        self->line++;
        self->col = 0;
        return c;
    }
    self->col++;
    return c;
}

// [0x008710B0] sub_008710B0 (61 bytes)
extern "C" __declspec(naked) bool __fastcall fn_008710B0(void* self) {
    __asm {
        call ext_00870E90
        cmp al, 0x20
        je  loop_008710D0
        cmp al, 0x9
        je  loop_008710D0
        cmp al, 0xd
        je  loop_008710D0
        cmp al, 0xa
        je  loop_008710D0
        call ext_00870EF0
        xor al, al
        ret
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
    loop_008710D0:
        call ext_00870E90
        cmp al, 0x20
        je  loop_008710D0
        cmp al, 0x9
        je  loop_008710D0
        cmp al, 0xd
        je  loop_008710D0
        cmp al, 0xa
        je  loop_008710D0
        call ext_00870EF0
        mov al, 1
        ret
    }
}

// [0x008710F0] sub_008710F0 (52 bytes)
extern "C" void ext_008710B0();
extern "C" void ext_00871090();

extern "C" __declspec(naked) void __fastcall fn_008710F0(void* self) {
    __asm {
        push ebx
        mov ebx, dword ptr [ecx + 0x14]
        push esi
        mov esi, dword ptr [ecx + 0x8]
        push edi
        mov edi, dword ptr [ecx + 0x10]
        call ext_008710B0
        push 0x3d
        call ext_00871090
        test al, al
        jne match_00871119
        mov dword ptr [ecx + 0x10], edi
        pop edi
        mov dword ptr [ecx + 0x8], esi
        pop esi
        mov dword ptr [ecx + 0x14], ebx
        pop ebx
        ret
    match_00871119:
        call ext_008710B0
        pop edi
        pop esi
        mov al, 1
        pop ebx
        ret
    }
}
