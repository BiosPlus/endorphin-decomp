// Decompiled translation unit: src/leaf/decompiled_870000.cpp

#include <string>

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

// [0x00870F40] sub_00870F40 (66 bytes)
extern "C" void ext_00870E90();

extern "C" __declspec(naked) void __fastcall fn_00870F40(void* self) {
    __asm {
        push ebx
        mov ebx, dword ptr [ecx + 0x10]
        push ebp
        mov ebp, dword ptr [ecx + 0x14]
        push esi
        mov esi, dword ptr [esp + 0x10]
        cmp byte ptr [esi], 0x0
        push edi
        mov edi, dword ptr [ecx + 0x8]
        je done_true_00870F67
    loop_00870F56:
        call ext_00870E90
        cmp al, byte ptr [esi]
        jne mismatch_00870F70
        add esi, 0x1
        cmp byte ptr [esi], 0x0
        jne loop_00870F56
    done_true_00870F67:
        pop edi
        pop esi
        pop ebp
        mov al, 0x1
        pop ebx
        ret 0x4
    mismatch_00870F70:
        mov dword ptr [ecx + 0x8], edi
        pop edi
        pop esi
        mov dword ptr [ecx + 0x14], ebp
        pop ebp
        mov dword ptr [ecx + 0x10], ebx
        xor al, al
        pop ebx
        ret 0x4
    }
}

// [0x00870F90] sub_00870F90 (74 bytes)
extern "C" __declspec(naked) void __stdcall fn_00870F90(int* out) {
    __asm {
        call ext_00870E90
        mov dl, al
        sub dl, 0x30
        cmp dl, 0x9
        jbe parse_digits_00870FA4
        xor al, al
        ret 4
    parse_digits_00870FA4:
        push esi
        mov esi, dword ptr [esp + 0x8]
        mov dword ptr [esi], 0
        nop
    loop_00870FB0:
        mov dl, al
        sub dl, 0x30
        cmp dl, 0x9
        ja done_00870FCF
        mov edx, dword ptr [esi]
        movsx eax, al
        lea edx, [edx + 4*edx]
        lea edx, [eax + 2*edx - 0x30]
        mov dword ptr [esi], edx
        call ext_00870E90
        jmp loop_00870FB0
    done_00870FCF:
        call ext_00870EF0
        mov al, 1
        pop esi
        ret 4
    }
}

// [0x008712A0] sub_008712A0 (137 bytes)
extern "C" void ext_0063E050();

extern "C" __declspec(naked) bool __stdcall fn_008712A0(void* a1, int a2) {
    __asm {
        sub esp, 0x10
        mov ecx, dword ptr [esp + 0x14]
        mov eax, dword ptr [ecx + 0x8]
        mov edx, dword ptr [ecx + 0x10]
        mov dword ptr [esp + 0x4], eax
        mov eax, dword ptr [ecx + 0x14]
        mov dword ptr [esp], ecx
        mov dword ptr [esp + 0x8], edx
        mov dword ptr [esp + 0xc], eax
        call ext_00870E90
        cmp al, 0x61
        jl first_upper_008712A0
        cmp al, 0x7a
        jle loop_008712DF
    first_upper_008712A0:
        sub al, 0x41
        cmp al, 0x19
        jbe loop_008712DF
        call ext_00870EF0
        xor al, al
        add esp, 0x10
        ret 8
    loop_008712DF:
        call ext_00870E90
        cmp al, 0x61
        jl check_upper_008712EC
        cmp al, 0x7a
        jle loop_008712DF
    check_upper_008712EC:
        mov dl, al
        sub dl, 0x41
        cmp dl, 0x19
        jbe loop_008712DF
        mov dl, al
        sub dl, 0x30
        cmp dl, 0x9
        jbe loop_008712DF
        cmp al, 0x5f
        je loop_008712DF
        cmp al, 0x2e
        je loop_008712DF
        cmp al, 0x2d
        je loop_008712DF
        call ext_00870EF0
        mov eax, dword ptr [esp + 0x18]
        push 0
        push eax
        lea ecx, [esp + 0x8]
        call ext_0063E050
        mov al, 0x1
        add esp, 0x10
        ret 8
    }
}

// [0x008716C0] sub_008716C0 (146 bytes)
extern "C" int mem_00925118;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_008716C0(void* self, int edx_unused, void* arg) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -0x1
        push 0x8b56f9
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x1c
        push esi
        mov esi, dword ptr [esp + 0x30]
        mov eax, dword ptr [esi + 0x18]
        push edi
        push 0x9
        mov edi, ecx
        lea ecx, [esi + 0x4]
        push 0x99f154
        push eax
        push 0x0
        call dword ptr [mem_00925118]
        test eax, eax
        jne L_end_008716C0
        mov edx, dword ptr [esi]
        mov edx, dword ptr [edx + 0x8]
        lea eax, [esp + 0x8]
        push eax
        mov ecx, esi
        call edx
        mov ecx, dword ptr [eax + 0x14]
        push 0x8
        push 0x99f148
        push ecx
        push 0x0
        mov ecx, eax
        mov dword ptr [esp + 0x3c], 0x0
        call dword ptr [mem_00925118]
        test eax, eax
        sete dl
        lea ecx, [esp + 0x8]
        mov byte ptr [edi + 0x4c], dl
        mov dword ptr [esp + 0x2c], 0xffffffff
        call dword ptr [mem_00924FF4]
    L_end_008716C0:
        mov ecx, dword ptr [esp + 0x24]
        pop edi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x28
        ret 0x4
    }
}

// [0x00870FE0] sub_00870FE0 (163 bytes)
extern "C" __declspec(naked) bool __fastcall fn_00870FE0(void* self, int edx_unused, unsigned int* out) {
    __asm {
        call ext_00870E90
        mov dl, al
        sub dl, 0x30
        cmp dl, 0x9
        jbe hex_00871004
        cmp al, 0x61
        jl  chk_upper_00870FF7
        cmp al, 0x66
        jle hex_00871004
    chk_upper_00870FF7:
        cmp al, 0x41
        jl  bad_00870FFF
        cmp al, 0x46
        jle hex_00871004
    bad_00870FFF:
        xor al, al
        ret 4
    hex_00871004:
        push esi
        mov esi, dword ptr [esp + 0x8]
        mov dword ptr [esi], 0x0
        nop
    loop_00871010:
        mov dl, al
        sub dl, 0x30
        cmp dl, 0x9
        jbe digit_0087102F
        cmp al, 0x61
        jl  chk_upper_00871022
        cmp al, 0x66
        jle lower_0087102A
    chk_upper_00871022:
        cmp al, 0x41
        jl  end_00871078
        cmp al, 0x46
        jg  end_00871078
    lower_0087102A:
        cmp dl, 0x9
        ja  alpha_00871045
    digit_0087102F:
        mov edx, dword ptr [esi]
        movsx eax, al
        sub eax, 0x30
        shl edx, 0x4
        add edx, eax
        mov dword ptr [esi], edx
        call ext_00870E90
        jmp loop_00871010
    alpha_00871045:
        mov dl, al
        sub dl, 0x61
        cmp dl, 0x5
        movsx eax, al
        ja  upper_00871065
        mov edx, dword ptr [esi]
        sub eax, 0x57
        shl edx, 0x4
        add edx, eax
        mov dword ptr [esi], edx
        call ext_00870E90
        jmp loop_00871010
    upper_00871065:
        mov edx, dword ptr [esi]
        sub eax, 0x37
        shl edx, 0x4
        add edx, eax
        mov dword ptr [esi], edx
        call ext_00870E90
        jmp loop_00871010
    end_00871078:
        call ext_00870EF0
        mov al, 0x1
        pop esi
        ret 4
    }
}

// [0x008711F0] sub_008711F0 (171 bytes)
extern "C" void ext_0063E050();

extern "C" __declspec(naked) bool __fastcall fn_008711F0(void* self, int edx_unused, void* a1, int a2) {
    __asm {
        sub esp, 0x10
        mov ecx, dword ptr [esp + 0x14]
        mov eax, dword ptr [ecx + 0x8]
        mov edx, dword ptr [ecx + 0x10]
        mov dword ptr [esp + 0x4], eax
        mov eax, dword ptr [ecx + 0x14]
        mov dword ptr [esp], ecx
        mov dword ptr [esp + 0x8], edx
        mov dword ptr [esp + 0xc], eax
        call ext_00870E90
        cmp al, 0x61
        jl first_upper_008711F0
        cmp al, 0x7a
        jle loop_008711F0
    first_upper_008711F0:
        mov dl, al
        sub dl, 0x41
        cmp dl, 0x19
        jbe loop_008711F0
        mov dl, al
        sub dl, 0x30
        cmp dl, 0x9
        jbe loop_008711F0
        cmp al, 0x5f
        je loop_008711F0
        cmp al, 0x2e
        je loop_008711F0
        cmp al, 0x3a
        je loop_008711F0
        cmp al, 0x2d
        je loop_008711F0
        call ext_00870EF0
        xor al, al
        add esp, 0x10
        ret 8
    loop_008711F0:
        call ext_00870E90
        cmp al, 0x61
        jl check_upper_008711F0
        cmp al, 0x7a
        jle loop_008711F0
    check_upper_008711F0:
        mov dl, al
        sub dl, 0x41
        cmp dl, 0x19
        jbe loop_008711F0
        mov dl, al
        sub dl, 0x30
        cmp dl, 0x9
        jbe loop_008711F0
        cmp al, 0x5f
        je loop_008711F0
        cmp al, 0x2e
        je loop_008711F0
        cmp al, 0x3a
        je loop_008711F0
        cmp al, 0x2d
        je loop_008711F0
        call ext_00870EF0
        mov eax, dword ptr [esp + 0x18]
        push 0
        push eax
        lea ecx, [esp + 0x8]
        call ext_0063E050
        mov al, 0x1
        add esp, 0x10
        ret 8
    }
}

// [0x00871130] sub_00871130 (177 bytes)
extern "C" void ext_00870E90();
extern "C" void ext_00870EF0();
extern "C" void ext_0063E050();

extern "C" __declspec(naked) bool __fastcall fn_00871130(void* self, int edx_unused, void* a1) {
    __asm {
        sub esp, 0x10
        mov eax, dword ptr [ecx + 0x8]
        mov edx, dword ptr [ecx + 0x10]
        mov dword ptr [esp + 0x4], eax
        mov eax, dword ptr [ecx + 0x14]
        mov dword ptr [esp], ecx
        mov dword ptr [esp + 0x8], edx
        mov dword ptr [esp + 0xc], eax
        call ext_00870E90
        cmp al, 0x61
        jl first_upper_00871130
        cmp al, 0x7a
        jle loop_00871130
    first_upper_00871130:
        mov dl, al
        sub dl, 0x41
        cmp dl, 0x19
        jbe loop_00871130
        cmp al, 0x5f
        je loop_00871130
        cmp al, 0x3a
        je loop_00871130
        call ext_00870EF0
        xor al, al
        add esp, 0x10
        ret 0x4
    loop_00871130:
        cmp al, 0x41
        jb check_lower_00871130
        cmp al, 0x5a
        jbe next_00871130
    check_lower_00871130:
        cmp al, 0x61
        jb check_hi_00871130
        cmp al, 0x7a
        jbe next_00871130
    check_hi_00871130:
        cmp al, 0xc0
        jb check_hi2_00871130
        cmp al, 0xd6
        jbe next_00871130
    check_hi2_00871130:
        cmp al, 0xd8
        jb check_hi3_00871130
        cmp al, 0xf6
        jbe next_00871130
    check_hi3_00871130:
        cmp al, 0xf8
        jb check_digit_00871130
        cmp al, 0xff
        jbe next_00871130
    check_digit_00871130:
        mov dl, al
        sub dl, 0x30
        cmp dl, 0x9
        jbe next_00871130
        cmp al, 0x2e
        je next_00871130
        cmp al, 0x2d
        je next_00871130
        cmp al, 0x5f
        je next_00871130
        cmp al, 0x3a
        je next_00871130
        cmp al, 0xb7
        jne fail_00871130
    next_00871130:
        call ext_00870E90
        jmp loop_00871130
    fail_00871130:
        call ext_00870EF0
        mov eax, dword ptr [esp + 0x14]
        push 0x0
        push eax
        lea ecx, [esp + 0x8]
        call ext_0063E050
        mov al, 0x1
        add esp, 0x10
        ret 0x4
    }
}

// [0x00872830] sub_00872830 (184 bytes)
extern "C" int mem_00924E28;
extern "C" __declspec(naked) void __fastcall fn_00872830(void* self, int edx_unused, __int64 dividend, __int64 divisor) {
    __asm {
        push ebx
        push edi
        xor edi, edi
        mov eax, dword ptr [esp + 0x10]
        or eax, eax
        jge short L_pos_dividend
        inc edi
        mov edx, dword ptr [esp + 0xc]
        neg eax
        neg edx
        sbb eax, 0
        mov dword ptr [esp + 0x10], eax
        mov dword ptr [esp + 0xc], edx
L_pos_dividend:
        mov eax, dword ptr [esp + 0x18]
        or eax, eax
        jge short L_pos_divisor
        mov edx, dword ptr [esp + 0x14]
        neg eax
        neg edx
        sbb eax, 0
        mov dword ptr [esp + 0x18], eax
        mov dword ptr [esp + 0x14], edx
L_pos_divisor:
        or eax, eax
        jne short L_big_divisor
        mov ecx, dword ptr [esp + 0x14]
        mov eax, dword ptr [esp + 0x10]
        xor edx, edx
        div ecx
        mov eax, dword ptr [esp + 0xc]
        div ecx
        mov eax, edx
        xor edx, edx
        dec edi
        jns short L_negate_result
        jmp short L_done
L_big_divisor:
        mov ebx, eax
        mov ecx, dword ptr [esp + 0x14]
        mov edx, dword ptr [esp + 0x10]
        mov eax, dword ptr [esp + 0xc]
L_shift_loop:
        shr ebx, 1
        rcr ecx, 1
        shr edx, 1
        rcr eax, 1
        or ebx, ebx
        jne short L_shift_loop
        div ecx
        mov ecx, eax
        mul dword ptr [esp + 0x18]
        xchg ecx, eax
        mul dword ptr [esp + 0x14]
        add edx, ecx
        jb short L_adjust
        cmp edx, dword ptr [esp + 0x10]
        ja short L_adjust
        jb short L_subtract
        cmp eax, dword ptr [esp + 0xc]
        jbe short L_subtract
L_adjust:
        sub eax, dword ptr [esp + 0x14]
        sbb edx, dword ptr [esp + 0x18]
L_subtract:
        sub eax, dword ptr [esp + 0xc]
        sbb edx, dword ptr [esp + 0x10]
        dec edi
        jns short L_done
L_negate_result:
        neg edx
        neg eax
        sbb edx, 0
L_done:
        pop edi
        pop ebx
        ret 0x10
        jmp dword ptr [mem_00924E28]
    }
}

// [0x00870A50] sub_00870A50 (117 bytes)
extern "C" void ext_00401D20();
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00870A50(void* self) {
    __asm {
        push -1
        push 0x008a2518
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        mov dword ptr [esi], 0x0095b204
        mov dword ptr [esi + 0x4], 0x0095b1bc
        mov dword ptr [esi + 0x8], 0x0095b17c
        mov dword ptr [esi + 0xc], 0x0095b12c
        mov dword ptr [esi + 0x150], 0x0095b114
        lea ecx, [esi + 0x154]
        mov dword ptr [esp + 0x10], 0
        call dword ptr [mem_00924FF4]
        mov ecx, esi
        mov dword ptr [esp + 0x10], -1
        call ext_00401D20
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x008709B0] sub_008709B0 (148 bytes)
extern "C" void ext_0058F200();
extern "C" void ext_00870650();
extern "C" int mem_00924FE8;

extern "C" __declspec(naked) void __fastcall fn_008709B0(void* self, int edx_unused, int a1) {
    __asm {
        push -1
        push 0x8c1db7
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 4], esi
        call ext_0058F200
        mov dword ptr [esi + 0x150], 0x928eac
        lea ecx, [esi + 0x154]
        mov dword ptr [esp + 0x10], 0
        mov dword ptr [esi], 0x95b204
        mov dword ptr [esi + 4], 0x95b1bc
        mov dword ptr [esi + 8], 0x95b17c
        mov dword ptr [esi + 0xc], 0x95b12c
        mov dword ptr [esi + 0x150], 0x95b114
        call dword ptr [mem_00924FE8]
        mov eax, dword ptr [esp + 0x18]
        push eax
        mov ecx, esi
        mov byte ptr [esp + 0x14], 1
        mov dword ptr [esi + 0x174], 0
        call ext_00870650
        mov ecx, dword ptr [esp + 8]
        mov eax, esi
        pop esi
        mov fs:[0], ecx
        add esp, 0x10
        ret 4
    }
}

extern "C" void ext_0049E2F0();
extern "C" void ext_00671F30();
extern "C" void ext_00685900();

// [0x00870350] sub_00870350 (66 bytes)
extern "C" __declspec(naked) void* __fastcall fn_00870350(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        push    ecx
        mov     eax, dword ptr [esp + 0xc]
        push    esi
        push    eax
        add     ecx, 0x4
        mov     dword ptr [esp + 0x8], 0x0
        call    ext_0049E2F0
        test    eax, eax
        mov     esi, dword ptr [esp + 0xc]
        je      loc_870382
        push    0x0
        push    0x0
        push    esi
        mov     ecx, eax
        call    ext_00685900
        mov     eax, esi
        pop     esi
        pop     ecx
        ret     0x8
    loc_870382:
        push    esi
        call    ext_00671F30
        add     esp, 0x4
        mov     eax, esi
        pop     esi
        pop     ecx
        ret     0x8
    }
}

// [0x00870300] sub_00870300 (32 bytes)
extern "C" int __cdecl ext_005006E0(void*, int, int, int, int);

extern "C" int __fastcall fn_00870300(void* self, int edx_unused, int a1, int a2, int a3) {
    return ext_005006E0((char*)self + 4, a1, a2, a3, 0);
}

// [0x008726F0] sub_008726F0 (49 bytes)
extern "C" int __cdecl ext_00872650(void*);

extern "C" int __fastcall fn_008726F0(void* self, int edx_unused, int a1, int a2) {
    int* p = (int*)self;
    p[1] = a1;
    p[2] = a1;
    p[3] = a1 + a2;
    p[4] = 1;
    p[5] = 1;
    p[7] = 0;
    return ext_00872650(self);
}

// [0x008718C0] sub_008718C0 (76 bytes)
extern "C" void ext_00870E40();
extern "C" void ext_00870F40();
extern "C" void ext_008710F0();

extern "C" __declspec(naked) void __fastcall fn_008718C0(void* self) {
    __asm {
        push ebx
        mov ebx, dword ptr [ecx + 0x14]
        push esi
        mov esi, dword ptr [ecx + 0x8]
        push edi
        mov edi, dword ptr [ecx + 0x10]
        call ext_008710B0
        test al, al
        je fail_008718EC
        mov eax, dword ptr [esp + 0x10]
        push eax
        call ext_00870F40
        test al, al
        jne match_008718F4
        mov dword ptr [ecx + 0x8], esi
        mov dword ptr [ecx + 0x10], edi
        mov dword ptr [ecx + 0x14], ebx
    fail_008718EC:
        pop edi
        pop esi
        xor al, al
        pop ebx
        ret 4
    match_008718F4:
        call ext_008710F0
        test al, al
        jne success_00871904
        push 3
        call ext_00870E40
    success_00871904:
        pop edi
        pop esi
        mov al, 1
        pop ebx
        ret 4
    }
}

// [0x00871EA0] sub_00871EA0 (93 bytes)
extern "C" void ext_00640240();
extern "C" void ext_00870E40();
extern "C" void ext_00871E20();

extern "C" __declspec(naked) void __fastcall fn_00871EA0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x891da8
        push eax
        mov dword ptr fs:[0], esp
        push esi
        push edi
        mov edi, dword ptr [esp + 0x18]
        mov esi, ecx
        push esi
        push edi
        call ext_00871E20
        add esp, 8
        mov dword ptr [esp + 0x18], eax
        xor ecx, ecx
        cmp eax, ecx
        mov dword ptr [esp + 0x10], ecx
        jne target_871ede
        push 6
        mov ecx, edi
        call ext_00870E40
    target_871ede:
        mov dword ptr [esp + 0x18], ecx
        push eax
        mov ecx, esi
        call ext_00640240
        mov ecx, dword ptr [esp + 8]
        pop edi
        mov dword ptr fs:[0], ecx
        pop esi
        add esp, 0xc
        ret 4
    }
}
