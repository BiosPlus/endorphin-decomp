// Decompiled translation unit: src/leaf/decompiled_780000.cpp

// [0x00783840] sub_00783840 (32 bytes)
// Stores four stack args into self->[0], [4], [8], [0xC]; ret 0x10.
extern "C" __declspec(naked) void __fastcall fn_00783840(void* self, int edx_unused, int a1, int a2, int a3, int a4) {
    __asm {
        mov edx, dword ptr [esp + 0x8]
        mov eax, ecx
        mov ecx, dword ptr [esp + 0x4]
        mov dword ptr [eax], ecx
        mov ecx, dword ptr [esp + 0xc]
        mov dword ptr [eax + 0x4], edx
        mov edx, dword ptr [esp + 0x10]
        mov dword ptr [eax + 0x8], ecx
        mov dword ptr [eax + 0xc], edx
        ret 0x10
    }
}

// [0x007895C0] sub_007895C0 (48 bytes)
// Forwards two stack args to a virtual on self->[8] (vtbl+0x14) if non-null,
// otherwise to a virtual on self->[0x14] (vtbl+0x10); ret 0x8.
extern "C" __declspec(naked) void __fastcall fn_007895C0(void* self, int edx_unused, int a1, int a2) {
    __asm {
        mov eax, ecx
        mov ecx, dword ptr [eax + 0x8]
        test ecx, ecx
        je short L_null
        mov edx, dword ptr [esp + 0x8]
        mov eax, dword ptr [ecx]
        push edx
        mov edx, dword ptr [esp + 0x8]
        push edx
        call dword ptr [eax + 0x14]
        ret 0x8
L_null:
        mov edx, dword ptr [esp + 0x8]
        mov ecx, dword ptr [eax + 0x14]
        push edx
        mov edx, dword ptr [esp + 0x8]
        mov eax, dword ptr [ecx]
        push edx
        call dword ptr [eax + 0x10]
        ret 0x8
    }
}

// [0x007895F0] sub_007895F0 (48 bytes)
// Forwards two stack args to a virtual on self->[8] (vtbl+0x1c) if non-null,
// otherwise to a virtual on self->[0x14] (vtbl+0x30); ret 0x8.
extern "C" __declspec(naked) void __fastcall fn_007895F0(void* self, int edx_unused, int a1, int a2) {
    __asm {
        mov eax, ecx
        mov ecx, dword ptr [eax + 0x8]
        test ecx, ecx
        je short L_null
        mov edx, dword ptr [esp + 0x8]
        mov eax, dword ptr [ecx]
        push edx
        mov edx, dword ptr [esp + 0x8]
        push edx
        call dword ptr [eax + 0x1c]
        ret 0x8
L_null:
        mov edx, dword ptr [esp + 0x8]
        mov ecx, dword ptr [eax + 0x14]
        push edx
        mov edx, dword ptr [esp + 0x8]
        mov eax, dword ptr [ecx]
        push edx
        call dword ptr [eax + 0x30]
        ret 0x8
    }
}

// [0x00789620] sub_00789620 (48 bytes)
extern "C" __declspec(naked) int __fastcall fn_00789620(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        mov eax, ecx
        mov ecx, dword ptr [eax + 8]
        test ecx, ecx
        je short L_no_inner
        mov edx, dword ptr [esp + 8]
        mov eax, dword ptr [ecx]
        push edx
        mov edx, dword ptr [esp + 8]
        push edx
        call dword ptr [eax + 20h]
        ret 8
L_no_inner:
        mov edx, dword ptr [esp + 8]
        mov ecx, dword ptr [eax + 14h]
        push edx
        mov edx, dword ptr [esp + 8]
        mov eax, dword ptr [ecx]
        push edx
        call dword ptr [eax + 34h]
        ret 8
    }
}

// [0x00783570] sub_00783570 (63 bytes)
extern "C" int mem_009252C4;
extern "C" __declspec(naked) void __fastcall fn_00783570(void* self, int edx_unused, int a1, int a2) {
    __asm {
        mov edx, dword ptr [ecx + 0x4]
        mov al, byte ptr [edx + 0x4]
        test al, al
        je done
        mov eax, dword ptr [esp + 0x4]
        xor ecx, ecx
        sub eax, ecx
        je zero
        dec eax
        je one
        dec eax
        jne go
        mov ecx, 0x2
        jmp go
    one:
        mov ecx, 0x1
        jmp go
    zero:
        xor ecx, ecx
    go:
        mov eax, dword ptr [esp + 0x8]
        push ecx
        mov ecx, dword ptr [edx]
        push eax
        push ecx
        call dword ptr [mem_009252C4]
        add esp, 0xc
    done:
        ret 0x8
    }
}

extern "C" int mem_00925184;
extern "C" int mem_009252C4;

// [0x007835B0] sub_007835B0 (64 bytes)
// Two-part unit: ftell wrapper on self->[4]->[4] (ret), then fseek(file, arg, 0) wrapper (ret 0x4).
extern "C" __declspec(naked) void __fastcall fn_007835B0(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [ecx + 0x4]
        mov cl, byte ptr [eax + 0x4]
        test cl, cl
        je short L_tell_null
        mov eax, dword ptr [eax]
        push eax
        call dword ptr [mem_00925184]
        add esp, 0x4
        ret
L_tell_null:
        xor eax, eax
        ret
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        mov eax, dword ptr [ecx + 0x4]
        mov cl, byte ptr [eax + 0x4]
        test cl, cl
        je short L_seek_null
        mov ecx, dword ptr [esp + 0x4]
        mov edx, dword ptr [eax]
        push 0x0
        push ecx
        push edx
        call dword ptr [mem_009252C4]
        add esp, 0xc
L_seek_null:
        ret 0x4
    }
}

// [0x00788C90] sub_00788C90 (112 bytes)
// Calls GetLocalTime into a stack SYSTEMTIME, then copies year/month/day/hour/minute/second/ms
// (each masked to 16 bits) into out[0..6] as dwords; ret 0.
extern "C" int mem_00924164;
extern "C" __declspec(naked) void __cdecl fn_00788C90(void* out) {
    __asm {
        sub esp, 0x14
        _emit 0x8d
        _emit 0x44
        _emit 0x24
        _emit 0x00
        push eax
        call dword ptr [mem_00924164]
        _emit 0x8b
        _emit 0x4c
        _emit 0x24
        _emit 0x00
        mov eax, dword ptr [esp + 0x18]
        mov edx, dword ptr [esp + 0x2]
        and ecx, 0xffff
        mov dword ptr [eax], ecx
        mov ecx, dword ptr [esp + 0x6]
        and edx, 0xffff
        and ecx, 0xffff
        mov dword ptr [eax + 0x4], edx
        mov edx, dword ptr [esp + 0x8]
        mov dword ptr [eax + 0x8], ecx
        mov ecx, dword ptr [esp + 0xa]
        and edx, 0xffff
        and ecx, 0xffff
        mov dword ptr [eax + 0xc], edx
        mov edx, dword ptr [esp + 0xc]
        mov dword ptr [eax + 0x10], ecx
        mov ecx, dword ptr [esp + 0xe]
        and edx, 0xffff
        and ecx, 0xffff
        mov dword ptr [eax + 0x14], edx
        mov dword ptr [eax + 0x18], ecx
        add esp, 0x14
        ret
    }
}

extern "C" int mem_00925284;
extern "C" int mem_00B60B38;
extern "C" int mem_00B60B3C;
extern "C" int mem_00B60B30;

// [0x00787430] sub_00787430 (144 bytes)
// Copies eight stack args into self->[0..0x1C]; ret 0x20. The block also holds two
// linker-incremental thunks (jmp -> body at +0x50: copies _HUGE pair to globals;
// jmp -> body at +0x80: loads -_HUGE as double into a global), reproduced byte-for-byte.
extern "C" __declspec(naked) void __fastcall fn_00787430(void* self, int edx_unused, int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        mov edx, dword ptr [esp + 0x8]
        mov dword ptr [ecx], eax
        mov eax, dword ptr [esp + 0xc]
        mov dword ptr [ecx + 0x4], edx
        mov edx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x8], eax
        mov eax, dword ptr [esp + 0x14]
        mov dword ptr [ecx + 0xc], edx
        mov edx, dword ptr [esp + 0x18]
        mov dword ptr [ecx + 0x10], eax
        mov eax, dword ptr [esp + 0x1c]
        mov dword ptr [ecx + 0x14], edx
        mov edx, dword ptr [esp + 0x20]
        mov dword ptr [ecx + 0x18], eax
        mov dword ptr [ecx + 0x1c], edx
        ret 0x20
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0xe9
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
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
        mov eax, dword ptr [mem_00925284]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [mem_00B60B38], ecx
        mov dword ptr [mem_00B60B3C], edx
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
        __asm _emit 0xe9
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
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
        mov eax, dword ptr [mem_00925284]
        fld qword ptr [eax]
        fchs
        fstp qword ptr [mem_00B60B30]
        ret
    }
}

// [0x0078C3B0] sub_0078C3B0 (96 bytes)
extern "C" void ext_006A5C62();
extern "C" void ext_006D2170();
extern "C" __declspec(naked) void __fastcall fn_0078C3B0(void* self, int edx_unused, const char* s) {
    __asm {
        push ebx
        mov ebx, ecx
        mov eax, dword ptr [ebx + 0x20]
        test eax, eax
        jne done
        push esi
        mov esi, dword ptr [esp + 0xc]
        push edi
        mov edi, esi
        or ecx, -1
        xor eax, eax
        repne scasb
        not ecx
        push ecx
        call ext_006A5C62
        mov edx, eax
        mov edi, esi
        or ecx, -1
        xor eax, eax
        add esp, 4
        mov dword ptr [esp + 0x10], edx
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        mov esi, edi
        mov edi, edx
        lea edx, [esp + 0x10]
        shr ecx, 2
        rep movsd
        mov ecx, eax
        push edx
        and ecx, 3
        rep movsb
        mov eax, dword ptr [ebx + 0x4]
        lea ecx, [ebx + 0x4]
        push eax
        call ext_006D2170
        pop edi
        pop esi
    done:
        pop ebx
        ret 4
    }
}

// [0x00782F70] sub_00782F70 (175 bytes)
extern "C" int mem_00925298;
extern "C" int mem_009251D0;
extern "C" void ext_00782FC0();
extern "C" void ext_00782FE0();
extern "C" __declspec(naked) void __fastcall fn_00782F70(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov al, byte ptr [esi+10h]
        test al, al
        je ret_label
        mov al, byte ptr [esi+11h]
        test al, al
        je strcmp_path
        mov eax, dword ptr [esi+4]
        mov ecx, dword ptr [esi]
        push offset ext_00782FE0
        push 8
        push eax
        push ecx
        call dword ptr [mem_00925298]
        add esp, 10h
        mov byte ptr [esi+10h], 0
        pop esi
        ret
    strcmp_path:
        mov edx, dword ptr [esi+4]
        mov eax, dword ptr [esi]
        push offset ext_00782FC0
        push 8
        push edx
        push eax
        call dword ptr [mem_00925298]
        add esp, 10h
        mov byte ptr [esi+10h], 0
    ret_label:
        pop esi
        ret
        nop
        nop
        nop
        nop
        nop
        mov eax, dword ptr [esp+8]
        mov edx, dword ptr [esp+4]
        mov ecx, dword ptr [eax]
        mov eax, dword ptr [edx]
        push ecx
        push eax
        call dword ptr [mem_009251D0]
        add esp, 8
        ret
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        mov eax, dword ptr [esp+8]
        mov ecx, dword ptr [esp+4]
        push ebx
        push esi
        mov esi, dword ptr [eax]
        mov eax, dword ptr [ecx]
    cmp_loop:
        mov dl, byte ptr [eax]
        mov bl, byte ptr [esi]
        mov cl, dl
        cmp dl, bl
        jne cmp_ne
        test cl, cl
        je cmp_eq
        mov dl, byte ptr [eax+1]
        mov bl, byte ptr [esi+1]
        mov cl, dl
        cmp dl, bl
        jne cmp_ne
        add eax, 2
        add esi, 2
        test cl, cl
        jne cmp_loop
    cmp_eq:
        pop esi
        xor eax, eax
        pop ebx
        ret
    cmp_ne:
        sbb eax, eax
        pop esi
        sbb eax, -1
        pop ebx
        ret
    }
}

// [0x00789670] sub_00789670 (416 bytes)
extern "C" void ext_006A7270();
extern "C" int mem_009252B8;
extern "C" __declspec(naked) void __fastcall fn_00789670(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, ecx
        mov ecx, dword ptr [eax + 0x8]
        test ecx, ecx
        je short L1_child0
        mov edx, dword ptr [esp + 0x4]
        mov eax, dword ptr [ecx]
        push edx
        call dword ptr [eax + 0x28]
        ret 0x4
L1_child0:
        mov ecx, dword ptr [eax + 0x14]
        mov edx, dword ptr [esp + 0x4]
        push edx
        mov eax, dword ptr [ecx]
        call dword ptr [eax + 0x3c]
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
        mov eax, ecx
        mov ecx, dword ptr [eax + 0x8]
        test ecx, ecx
        je short L2_child0
        mov eax, dword ptr [ecx]
        jmp dword ptr [eax + 0x2c]
L2_child0:
        mov ecx, dword ptr [eax + 0x14]
        mov edx, dword ptr [ecx]
        jmp dword ptr [edx + 0x40]
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
        mov eax, ecx
        mov ecx, dword ptr [eax + 0x8]
        test ecx, ecx
        je short L3_child0
        mov eax, dword ptr [ecx]
        jmp dword ptr [eax + 0x30]
L3_child0:
        mov ecx, dword ptr [eax + 0x14]
        mov edx, dword ptr [ecx]
        jmp dword ptr [edx + 0x48]
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
        mov eax, ecx
        mov ecx, dword ptr [eax + 0x8]
        test ecx, ecx
        je short L4_child0
        mov eax, dword ptr [ecx]
        jmp dword ptr [eax + 0x34]
L4_child0:
        mov ecx, dword ptr [eax + 0x14]
        mov edx, dword ptr [ecx]
        jmp dword ptr [edx + 0x4c]
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
        mov eax, ecx
        mov ecx, dword ptr [eax + 0x8]
        test ecx, ecx
        je short L5_child0
        mov eax, dword ptr [ecx]
        jmp dword ptr [eax + 0x38]
L5_child0:
        mov ecx, dword ptr [eax + 0x14]
        mov edx, dword ptr [ecx]
        jmp dword ptr [edx + 0x50]
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
        mov eax, 0x4000
        call ext_006A7270
        mov ecx, dword ptr [esp + 0x4008]
        push esi
        lea eax, dword ptr [esp + 0x4010]
        push edi
        push eax
        lea edx, dword ptr [esp + 0xc]
        push ecx
        push edx
        call dword ptr [mem_009252B8]
        mov eax, dword ptr [esp + 0x4018]
        add esp, 0xc
        mov edx, dword ptr [eax + 0x8]
        test edx, edx
        je short L6_fallback
        lea edi, dword ptr [esp + 0x8]
        or ecx, -1
        xor eax, eax
        mov esi, dword ptr [edx]
        repne scasb
        not ecx
        dec ecx
        lea eax, dword ptr [esp + 0x8]
        push ecx
        push eax
        mov ecx, edx
        call dword ptr [esi + 0x1c]
        pop edi
        pop esi
        add esp, 0x4000
        ret
L6_fallback:
        mov edx, dword ptr [eax + 0x14]
        lea edi, dword ptr [esp + 0x8]
        or ecx, -1
        xor eax, eax
        repne scasb
        mov esi, dword ptr [edx]
        not ecx
        dec ecx
        push ecx
        lea ecx, dword ptr [esp + 0xc]
        push ecx
        mov ecx, edx
        call dword ptr [esi + 0x30]
        pop edi
        pop esi
        add esp, 0x4000
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
        mov eax, ecx
        mov ecx, dword ptr [eax + 0x8]
        test ecx, ecx
        je short L7_child0
        mov edx, dword ptr [esp + 0x4]
        mov eax, dword ptr [ecx]
        push edx
        call dword ptr [eax + 0x40]
        ret 0x4
L7_child0:
        mov ecx, dword ptr [eax + 0x14]
        mov edx, dword ptr [esp + 0x4]
        push edx
        mov eax, dword ptr [ecx]
        call dword ptr [eax + 0x58]
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
        mov eax, ecx
        mov ecx, dword ptr [eax + 0x8]
        test ecx, ecx
        je short L8_child0
        mov edx, dword ptr [esp + 0x8]
        mov eax, dword ptr [ecx]
        push edx
        mov edx, dword ptr [esp + 0x8]
        push edx
        call dword ptr [eax + 0x18]
        ret 0x8
L8_child0:
        mov edx, dword ptr [esp + 0x8]
        mov ecx, dword ptr [eax + 0x14]
        push edx
        mov edx, dword ptr [esp + 0x8]
        mov eax, dword ptr [ecx]
        push edx
        call dword ptr [eax + 0x14]
        ret 0x8
    }
}

// [0x007865D0] sub_007865D0 (31 bytes)
extern "C" void ext_00722170();
extern "C" void ext_00722180();
extern "C" void ext_007857F0();
extern "C" __declspec(naked) void __fastcall fn_007865D0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        call ext_00722170
        fstp qword ptr [esi + 0x78]
        call ext_00722180
        mov ecx, esi
        mov byte ptr [esi + 0x80], al
        call ext_007857F0
        pop esi
        ret
    }
}

extern "C" void ext_006A5C5C();
extern "C" void ext_0078CEF0();
extern "C" int mem_009251D8;
extern "C" int mem_009242E4;

// [0x0078CEB0] sub_0078CEB0 (64 bytes)
extern "C" __declspec(naked) void __fastcall fn_0078CEB0(void* self) {
    __asm {
        push esi
        push edi
        mov esi, ecx
        call ext_0078CEF0
        mov eax, dword ptr [esi + 4]
        test eax, eax
        je loc_78CED1
        push eax
        call dword ptr [mem_009251D8]
        add esp, 4
        mov dword ptr [esi + 4], 0
    loc_78CED1:
        mov edi, dword ptr [esi]
        test edi, edi
        je loc_78CEE7
        push edi
        call dword ptr [mem_009242E4]
        push edi
        call ext_006A5C5C
        add esp, 4
    loc_78CEE7:
        mov dword ptr [esi], 0
        pop edi
        pop esi
        ret
    }
}

// [0x0078C440] sub_0078C440 (80 bytes)
extern "C" void ext_0078C410();

extern "C" __declspec(naked) void __fastcall fn_0078C440(void* self) {
    __asm {
        push esi
        mov esi, ecx
        push edi
        mov eax, dword ptr [esi + 0x20]
        test eax, eax
        je L_nofirst
        mov edi, dword ptr [esp + 0xc]
        mov eax, dword ptr [esi + 0x28]
        cmp edi, eax
        jge L_ret0
        push edi
        call ext_0078C410
        cmp al, 0x43
        jne L_ret0
        mov eax, dword ptr [esi + 0x2c]
        mov edx, dword ptr [esi + 0x20]
        mov ecx, dword ptr [eax + 4*edi]
        pop edi
        pop esi
        mov al, byte ptr [ecx + edx]
        ret 0x8
    L_nofirst:
        mov eax, dword ptr [esp + 0xc]
        mov ecx, dword ptr [esi + 0x4]
        cmp eax, ecx
        jge L_ret0
        mov ecx, dword ptr [esi + 0x14]
        pop edi
        pop esi
        mov edx, dword ptr [ecx + 4*eax]
        mov al, byte ptr [edx]
        ret 0x8
    L_ret0:
        pop edi
        xor al, al
        pop esi
        ret 0x8
    }
}

// [0x007801D0] sub_007801D0 (127 bytes)
extern "C" void ext_007802A0();
extern "C" __declspec(naked) void __fastcall fn_007801D0(void* self) {
    __asm {
        push ecx
        push esi
        push edi
        mov edi, ecx
        mov dword ptr [edi], 0xffffffff
        call ext_007802A0
        mov esi, eax
        mov eax, dword ptr [esi]
        shl eax, 4
        push eax
        call ext_006A5C62
        mov dword ptr [edi+4], eax
        mov eax, dword ptr [esi]
        xor ecx, ecx
        add esp, 4
        cmp eax, ecx
        mov dword ptr [esp+8], ecx
        jle done_7801D0
        push ebx
        push ebp
        xor eax, eax
    loop_7801D0:
        mov edx, dword ptr [esi+4]
        mov ebx, dword ptr [edi+4]
        add ecx, 16
        mov edx, dword ptr [eax+edx+292]
        add eax, 304
        mov dword ptr [ecx+ebx-16], edx
        mov edx, dword ptr [esi+4]
        mov ebx, dword ptr [edi+4]
        mov ebp, dword ptr [eax+edx-8]
        mov dword ptr [ecx+ebx-8], ebp
        mov edx, dword ptr [eax+edx-4]
        mov dword ptr [ecx+ebx-4], edx
        mov edx, dword ptr [esp+16]
        mov ebx, dword ptr [esi]
        inc edx
        cmp edx, ebx
        mov dword ptr [esp+16], edx
        jl loop_7801D0
        pop ebp
        mov eax, edi
        pop ebx
        pop edi
        pop esi
        pop ecx
        ret
    done_7801D0:
        mov eax, edi
        pop edi
        pop esi
        pop ecx
        ret
    }
}

// [0x00789CA0] sub_00789CA0 (128 bytes)
extern "C" void ext_006A5C62();
extern "C" void ext_00782D90();
extern "C" void ext_00782E70();
extern "C" void ext_0078CA30();
extern "C" void ext_0078CAF0();
extern "C" int mem_008B8FBB;

extern "C" __declspec(naked) void __fastcall fn_00789CA0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -0x1
        push offset mem_008B8FBB
        push eax
        mov dword ptr fs:[0x0], esp
        push ebx
        mov ebx, dword ptr [esp + 0x14]
        push esi
        push edi
        lea edi, [ecx + 0x4]
        push 0x0
        push ebx
        mov ecx, edi
        call ext_00782E70
        mov esi, eax
        test esi, esi
        jne L_00789D03
        push 0x20
        call ext_006A5C62
        add esp, 0x4
        mov dword ptr [esp + 0x1c], eax
        test eax, eax
        mov dword ptr [esp + 0x14], esi
        je L_00789CEE
        mov ecx, eax
        call ext_0078CA30
        jmp L_00789CF0
    L_00789CEE:
        xor eax, eax
    L_00789CF0:
        push eax
        push ebx
        mov ecx, edi
        mov dword ptr [esp + 0x1c], 0xffffffff
        mov esi, eax
        call ext_00782D90
    L_00789D03:
        mov ecx, esi
        call ext_0078CAF0
        mov ecx, dword ptr [esp + 0xc]
        mov eax, esi
        pop edi
        pop esi
        mov dword ptr fs:[0x0], ecx
        pop ebx
        add esp, 0xc
        ret 0x4
    }
}

// [0x0078BB40] sub_0078BB40 (176 bytes)
// SEH-guarded __thiscall method (ret 0x54); sets self->[0x18..0x28] and returns bool in al.
extern "C" void ext_006B9D70();
extern "C" void ext_006E7460();
extern "C" void ext_007892F0();
extern "C" void ext_00789670();
extern "C" void ext_0078C1D0();
extern "C" __declspec(naked) void __fastcall fn_0078BB40(void* self, int edx_unused) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8bdc58
        push eax
        mov dword ptr fs:[0], esp
        push esi
        push edi
        mov esi, ecx
        xor eax, eax
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [esp + 0x68]
        mov dword ptr [esp + 0x10], eax
        mov dword ptr [esi + 0x18], eax
        mov eax, dword ptr [esp + 0x64]
        or edi, -1
        mov dword ptr [esi + 0x1c], ecx
        neg eax
        sbb eax, eax
        push edx
        and eax, 0x2
        lea ecx, [esp + 0x1c]
        push eax
        mov dword ptr [esi + 0x20], edi
        mov dword ptr [esi + 0x24], edi
        call ext_006E7460
        push eax
        mov ecx, esi
        call ext_007892F0
        test al, al
        je short L_fail
        mov ecx, esi
        call ext_0078C1D0
        mov ecx, dword ptr [esi + 0x4]
        push ecx
        mov ecx, esi
        call ext_00789670
        lea ecx, [esp + 0x18]
        mov dword ptr [esp + 0x10], edi
        call ext_006B9D70
        mov al, 1
        mov ecx, dword ptr [esp + 0x8]
        mov dword ptr fs:[0], ecx
        pop edi
        pop esi
        add esp, 0xc
        ret 0x54
    L_fail:
        lea ecx, [esp + 0x18]
        mov dword ptr [esi + 0x28], edi
        mov dword ptr [esp + 0x10], edi
        call ext_006B9D70
        mov ecx, dword ptr [esp + 0x8]
        pop edi
        xor al, al
        mov dword ptr fs:[0], ecx
        pop esi
        add esp, 0xc
        ret 0x54
    }
}

extern "C" void ext_006C9C30();
extern "C" void ext_006C9E80();
extern "C" void ext_006CA020();
extern "C" void ext_006D02D0();
extern "C" int mem_00B609B8;
extern "C" int mem_00B609BC;
extern "C" int mem_00B609B0;

// [0x00785E70] sub_00785E70 (224 bytes)
// Stack args: a1 (ebx, passed as this to the callees), a2 (edi), a3 (lower bound),
// a4 (upper bound), a5/a6 (float range). Scans esi from a2+2 down to a2-2 and returns
// 0 as soon as a value fails the float range check, 1 otherwise. Also includes two
// linker-incremental thunks (jmp -> body at +0xA0 copies _HUGE pair to globals;
// jmp -> body at +0xD0 stores -_HUGE as double), reproduced byte-for-byte.
extern "C" __declspec(naked) void __cdecl fn_00785E70(void* a1, int a2, int a3, int a4, float a5, float a6) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0x8]
        push ebp
        push esi
        push edi
        mov edi, dword ptr [esp + 0x18]
        push edi
        mov ecx, ebx
        call ext_006CA020
        mov ecx, eax
        call ext_006C9C30
        test al, 0x8
        je short L_785EA0
        push edi
        mov ecx, ebx
        call ext_006D02D0
        test al, al
        jne short L_785EA0
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
L_785EA0:
        lea esi, [edi + 0x2]
        add edi, -0x2
        cmp esi, edi
        jl short L_785EED
        mov ebp, dword ptr [esp + 0x20]
L_785EAE:
        cmp esi, ebp
        jg short L_785EDD
        cmp esi, dword ptr [esp + 0x1c]
        jl short L_785EDD
        push esi
        mov ecx, ebx
        call ext_006CA020
        mov ecx, eax
        call ext_006C9E80
        fcom dword ptr [esp + 0x24]
        fnstsw ax
        test ah, 0x1
        jne short L_785EE4
        fcomp dword ptr [esp + 0x28]
        fnstsw ax
        test ah, 0x41
        je short L_785EE6
L_785EDD:
        dec esi
        cmp esi, edi
        jl short L_785EED
        jmp short L_785EAE
L_785EE4:
        fstp st(0)
L_785EE6:
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        ret
L_785EED:
        pop edi
        pop esi
        pop ebp
        mov al, 0x1
        pop ebx
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
        __asm _emit 0xe9
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
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
        mov eax, dword ptr [mem_00925284]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [mem_00B609B8], ecx
        mov dword ptr [mem_00B609BC], edx
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
        __asm _emit 0xe9
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
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
        mov eax, dword ptr [mem_00925284]
        fld qword ptr [eax]
        fchs
        fstp qword ptr [mem_00B609B0]
        ret
    }
}

extern "C" void ext_006B9D20();
extern "C" void ext_006B9D70();
extern "C" void ext_006BA370();
extern "C" void ext_00789590();
extern "C" void ext_0078BB40();
extern "C" void ext_0078C0E0();

// [0x0078BBF0] sub_0078BBF0 (224 bytes)
extern "C" __declspec(naked) void __fastcall fn_0078BBF0(void* self) {
    __asm {
        push -1
        push 0x8bc8e0
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        push ecx
        push ebx
        push esi
        push edi
        mov edi, ecx
        push 0
        push 0xaac1f8
        lea ecx, [esp + 0x74]
        mov dword ptr [esp + 0x20], 1
        call ext_006BA370
        mov esi, eax
        push 0
        inc esi
        push 0xaaf3a8
        neg esi
        sbb esi, esi
        lea ecx, [esp + 0x74]
        and esi, -2
        add esi, 2
        call ext_006BA370
        cmp eax, -1
        lea edx, [esp + 0x20]
        setne al
        mov byte ptr [esp + 0xc], al
        mov ecx, dword ptr [esp + 0xc]
        push ecx
        push esi
        sub esp, 0x4c
        mov ecx, esp
        mov dword ptr [esp + 0x60], esp
        push edx
        call ext_006B9D20
        mov ecx, edi
        call ext_0078BB40
        lea ecx, [esp + 0x20]
        mov bl, al
        mov byte ptr [esp + 0x18], 0
        call ext_006B9D70
        lea ecx, [esp + 0x6c]
        mov dword ptr [esp + 0x18], -1
        call ext_006B9D70
        mov ecx, dword ptr [esp + 0x10]
        pop edi
        mov al, bl
        pop esi
        mov fs:[0], ecx
        pop ebx
        add esp, 0x10
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
        nop
        nop
        nop
        nop
        nop
        nop
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 0xc], 2
        jne l_78bcc7
        mov eax, dword ptr [esi + 0x20]
        cmp eax, -1
        je l_78bcc7
        push eax
        call ext_0078C0E0
    l_78bcc7:
        mov ecx, esi
        call ext_00789590
        pop esi
        ret
    }
}

// [0x0078CD30] sub_0078CD30 (239 bytes)
extern "C" void ext_006A5C62();
extern "C" void ext_006D2170();
extern "C" void ext_0078CE20();
extern "C" int mem_00B60DBC;
extern "C" int mem_00925208;
extern "C" int mem_00925290;
extern "C" int mem_009251D8;

extern "C" __declspec(naked) void __fastcall fn_0078CD30(void* self) {
    __asm {
        push    -1
        push    0x008B8FDB
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        push    ecx
        mov     eax, dword ptr [mem_00B60DBC]
        push    esi
        xor     esi, esi
        cmp     eax, esi
        je      L_0078CDB6
        push    0x28
        call    ext_006A5C62
        add     esp, 4
        mov     dword ptr [esp + 4], eax
        cmp     eax, esi
        mov     dword ptr [esp + 0x10], esi
        je      L_0078CD85
        mov     ecx, dword ptr [esp + 0x24]
        mov     edx, dword ptr [esp + 0x20]
        push    ecx
        mov     ecx, dword ptr [esp + 0x20]
        push    edx
        mov     edx, dword ptr [esp + 0x20]
        push    ecx
        push    edx
        mov     ecx, eax
        call    ext_0078CE20
        mov     esi, eax
    L_0078CD85:
        mov     ecx, dword ptr [mem_00B60DBC]
        lea     eax, [esp + 0x24]
        push    eax
        mov     dword ptr [esp + 0x14], -1
        mov     edx, dword ptr [ecx]
        mov     dword ptr [esp + 0x28], esi
        push    edx
        call    ext_006D2170
        mov     eax, esi
        pop     esi
        mov     ecx, dword ptr [esp + 4]
        mov     dword ptr fs:[0], ecx
        add     esp, 0x10
        ret
    L_0078CDB6:
        mov     ecx, dword ptr [esp + 8]
        xor     eax, eax
        pop     esi
        mov     dword ptr fs:[0], ecx
        add     esp, 0x10
        ret
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        mov     eax, dword ptr [esp + 4]
        push    eax
        call    dword ptr [mem_00925208]
        add     esp, 4
        ret     4
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
        mov     eax, dword ptr [esp + 8]
        mov     ecx, dword ptr [esp + 4]
        push    eax
        push    ecx
        call    dword ptr [mem_00925290]
        add     esp, 8
        ret     8
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
        mov     eax, dword ptr [esp + 4]
        push    eax
        call    dword ptr [mem_009251D8]
        pop     ecx
        ret     4
    }
}

extern "C" void ext_006A7270();
extern "C" void ext_006E7460();
extern "C" void ext_00782EC0();
extern "C" int mem_009252A8;
extern "C" int mem_00925264;
extern "C" int mem_009252C8;
extern "C" int mem_00925218;
extern "C" int mem_009252CC;
extern "C" int mem_009252A4;

// [0x007851B0] sub_007851B0 (544 bytes)
extern "C" __declspec(naked) void __fastcall fn_007851B0(void* self) {
    __asm {
        mov     eax, dword ptr fs:[0]
        push    -1
        push    0x8c1616
        push    eax
        mov     eax, 0x20a8
        mov     dword ptr fs:[0], esp
        call    ext_006A7270
        push    ebp
        push    esi
        mov     esi, ecx
        push    edi
        push    esi
        lea     ecx, [esp + 0x20]
        call    ext_006B9D20
        add     esi, 0x4c
        lea     ecx, [esp + 0x68]
        push    esi
        mov     dword ptr [esp + 0x20c0], 0
        call    ext_006B9D20
        push    0xaae64c
        lea     ecx, [esp + 0x20]
        mov     byte ptr [esp + 0x20c0], 1
        call    ext_006E7460
        mov     esi, dword ptr [mem_009252A8]
        push    eax
        call    esi
        add     esp, 8
        mov     edi, eax
        test    edi, edi
        mov     dword ptr [esp + 0x18], edi
        push    0xaaf400
        je      short loc_0078524B
        lea     ecx, [esp + 0x6c]
        call    ext_006E7460
        push    eax
        call    esi
        mov     ebp, eax
        add     esp, 8
        test    ebp, ebp
        jne     short loc_00785264
        push    edi
        call    dword ptr [mem_00925264]
        add     esp, 4
        jmp     loc_00785391

loc_0078524B:
        lea     ecx, [esp + 0x20]
        call    ext_006E7460
        push    eax
        call    esi
        mov     ebp, eax
        add     esp, 8
        test    ebp, ebp
        je      loc_00785391

loc_00785264:
        mov     eax, dword ptr [esp + 0x20c4]
        xor     esi, esi
        mov     dword ptr [esp + 0x14], esi
        mov     ecx, dword ptr [eax + 4]
        test    ecx, ecx
        jle     loc_00785347
        push    ebx
        mov     ebx, dword ptr [mem_009252C8]

loc_00785283:
        lea     ecx, [esp + 0x14]
        mov     dword ptr [esp + 0x14], 0
        push    ecx
        mov     ecx, dword ptr [esp + 0x20cc]
        push    esi
        call    ext_00782EC0
        mov     edi, eax
        test    edi, edi
        je      loc_0078532D
        test    esi, esi
        jle     short loc_007852B6
        push    ebp
        push    0xaad034
        call    ebx
        add     esp, 8

loc_007852B6:
        mov     edx, dword ptr [esp + 0x14]
        lea     eax, [esp + 0xb8]
        push    edx
        push    0xaaf3f8
        push    eax
        call    dword ptr [mem_00925218]
        lea     ecx, [esp + 0xc4]
        push    ebp
        push    ecx
        call    ebx
        mov     eax, dword ptr [edi + 4]
        add     esp, 0x14
        xor     esi, esi
        test    eax, eax
        jle     short loc_00785329

loc_007852E5:
        lea     edx, [esp + 0x10]
        mov     ecx, edi
        push    edx
        push    esi
        mov     dword ptr [esp + 0x18], 0
        call    ext_00782EC0
        push    eax
        mov     eax, dword ptr [esp + 0x14]
        push    eax
        lea     ecx, [esp + 0x10c0]
        push    0xaaf404
        push    ecx
        call    dword ptr [mem_00925218]
        lea     edx, [esp + 0x10c8]
        push    ebp
        push    edx
        call    ebx
        mov     eax, dword ptr [edi + 4]
        add     esp, 0x18
        inc     esi
        cmp     esi, eax
        jl      short loc_007852E5

loc_00785329:
        mov     esi, dword ptr [esp + 0x18]

loc_0078532D:
        mov     eax, dword ptr [esp + 0x20c8]
        inc     esi
        mov     dword ptr [esp + 0x18], esi
        cmp     esi, dword ptr [eax + 4]
        jl      loc_00785283
        mov     edi, dword ptr [esp + 0x1c]
        pop     ebx

loc_00785347:
        mov     esi, dword ptr [mem_00925264]
        test    edi, edi
        je      short loc_00785357
        push    edi
        call    esi
        add     esp, 4

loc_00785357:
        push    ebp
        call    esi
        add     esp, 4
        test    edi, edi
        je      short loc_00785391
        lea     ecx, [esp + 0x1c]
        call    ext_006E7460
        push    eax
        call    dword ptr [mem_009252CC]
        add     esp, 4
        lea     ecx, [esp + 0x1c]
        call    ext_006E7460
        push    eax
        lea     ecx, [esp + 0x6c]
        call    ext_006E7460
        push    eax
        call    dword ptr [mem_009252A4]
        add     esp, 8

loc_00785391:
        lea     ecx, [esp + 0x68]
        mov     byte ptr [esp + 0x20bc], 0
        call    ext_006B9D70
        lea     ecx, [esp + 0x1c]
        mov     dword ptr [esp + 0x20bc], 0xffffffff
        call    ext_006B9D70
        mov     ecx, dword ptr [esp + 0x20b4]
        pop     edi
        pop     esi
        pop     ebp
        mov     dword ptr fs:[0], ecx
        add     esp, 0x20b4
        ret     4
    }
}
