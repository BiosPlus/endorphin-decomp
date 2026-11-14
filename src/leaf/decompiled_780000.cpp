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

// [0x00787870] sub_00787870 (5071 bytes)
extern "C" void ext_006A5C62();
extern "C" void ext_006A73BA();
extern "C" void ext_006C4220();
extern "C" void ext_006C4440();
extern "C" void ext_006C7BC0();
extern "C" void ext_006C8200();
extern "C" void ext_006C9AB0();
extern "C" void ext_006C9E80();
extern "C" void ext_006C9F00();
extern "C" void ext_006CA020();
extern "C" void ext_006CA140();
extern "C" void ext_006CA500();
extern "C" void ext_006CA540();
extern "C" void ext_006CA6A0();
extern "C" void ext_006CE720();
extern "C" void ext_006D2810();
extern "C" void ext_006DADE0();
extern "C" void ext_006DAE00();
extern "C" void ext_006DDF00();
extern "C" void ext_006DE060();
extern "C" void ext_006DE1C0();
extern "C" void ext_006DE4B0();
extern "C" void ext_006DE7C0();
extern "C" void ext_006DEBA0();
extern "C" void ext_006DEEC0();
extern "C" void ext_006DEED0();
extern "C" void ext_006DFFF0();
extern "C" void ext_006E0050();
extern "C" void ext_006E0090();
extern "C" void ext_006E00C0();
extern "C" void ext_006E00F0();
extern "C" void ext_006E01F0();
extern "C" void ext_006E0390();
extern "C" void ext_006E0810();
extern "C" void ext_006E0920();
extern "C" void ext_006E0940();
extern "C" void ext_006E3A50();
extern "C" void ext_006E4240();
extern "C" void ext_006E7410();
extern "C" void ext_006E7440();
extern "C" void ext_00785450();
extern "C" void ext_00785480();
extern "C" void ext_007854A0();
extern "C" void ext_00785550();
extern "C" void ext_007AE190();
extern "C" void ext_007AE1F0();
extern "C" void ext_007AE280();
extern "C" void ext_007AE420();
extern "C" int mem_00993C98;
extern "C" int mem_0092A278;
extern "C" int mem_00996F98;
extern "C" int mem_00996F90;
extern "C" int mem_00993828;
extern "C" int mem_0092A270;
extern "C" int mem_00993C90;
extern "C" int mem_00993C88;
extern "C" int mem_0093F7B0;
extern "C" int mem_00993C80;
extern "C" int mem_009937F8;
extern "C" int mem_00AAC084;

extern "C" __declspec(naked) void __fastcall fn_00787870(void* self) {
    __asm {
        push ebp
        mov ebp, esp
        push -0x1
        push 0x8c1636
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x46c
        push ebx
        push esi
        mov esi, dword ptr [ebp + 0x8]
        mov ebx, ecx
        push edi
        mov ecx, esi
        mov eax, dword ptr [esi]
        mov dword ptr [ebp - 0x13c], ebx
        call dword ptr [eax + 0x14]
        cmp eax, 0x3
        jne L_007889f1
        mov eax, dword ptr [esi + 0x54]
        cmp eax, 0x2
        jne L_007889e8
        push 0xaa8ca8
        mov ecx, esi
        call ext_006DE7C0
        mov ecx, eax
        call ext_006DEEC0
        push 0xaa8ca4
        mov ecx, esi
        mov dword ptr [ebp - 0x38], eax
        call ext_006DE7C0
        mov ecx, eax
        call ext_006DEEC0
        push 0xaa8ca0
        mov ecx, esi
        mov dword ptr [ebp - 0x34], eax
        call ext_006DE7C0
        mov ecx, eax
        call ext_006DEEC0
        mov ecx, dword ptr [esi + 0x60]
        mov dword ptr [ebp - 0x30], eax
        mov dword ptr [ebp - 0x110], ecx
        mov ecx, dword ptr [ebp - 0x38]
        call ext_006CA6A0
        mov esi, eax
        xor edi, edi
        cmp esi, edi
        mov dword ptr [ebp - 0x10c], esi
        jne L_00787927
        push edi
        lea ecx, [ebx + 0x20]
        call ext_006E7440
        jmp L_00788a00
    L_00787927:
        mov al, byte ptr [ebx + 0x78]
        test al, al
        je L_00787992
        lea ecx, [ebp - 0x478]
        call ext_007AE190
        lea edx, [ebp - 0x38]
        push 0x3
        push edx
        lea ecx, [ebp - 0x478]
        mov dword ptr [ebp - 0x4], edi
        call ext_007AE280
        test al, al
        je L_00787980
        lea eax, [ebx + 0x10]
        lea ecx, [ebp - 0x478]
        push eax
        call ext_00785450
        lea ecx, [ebx + 0x18]
        push ecx
        lea ecx, [ebp - 0x478]
        call ext_00785480
        lea edx, [ebp - 0x38]
        push 0x3
        push edx
        lea ecx, [ebp - 0x478]
        call ext_007AE420
    L_00787980:
        lea ecx, [ebp - 0x478]
        mov dword ptr [ebp - 0x4], 0xffffffff
        call ext_007AE1F0
    L_00787992:
        mov dword ptr [ebp - 0x3c], esi
        mov dword ptr [ebp - 0x204], 0x0
        mov dword ptr [ebp - 0x200], 0x3ff00000
        mov dword ptr [ebp - 0x22c], 0x0
        mov dword ptr [ebp - 0x228], 0x3ff00000
        mov dword ptr [ebp - 0x254], 0x0
        mov dword ptr [ebp - 0x250], 0x3ff00000
        mov dword ptr [ebp - 0x27c], 0x0
        mov dword ptr [ebp - 0x278], 0x3ff00000
        mov dword ptr [ebp - 0x20c], 0x0
        mov dword ptr [ebp - 0x208], 0x0
        mov dword ptr [ebp - 0x214], 0x0
        mov dword ptr [ebp - 0x210], 0x0
        mov dword ptr [ebp - 0x21c], 0x0
        mov dword ptr [ebp - 0x218], 0x0
        mov dword ptr [ebp - 0x224], 0x0
        mov dword ptr [ebp - 0x220], 0x0
        mov dword ptr [ebp - 0x234], 0x0
        mov dword ptr [ebp - 0x230], 0x0
        mov dword ptr [ebp - 0x23c], 0x0
        mov dword ptr [ebp - 0x238], 0x0
        mov dword ptr [ebp - 0x244], 0x0
        mov dword ptr [ebp - 0x240], 0x0
        mov dword ptr [ebp - 0x24c], 0x0
        mov dword ptr [ebp - 0x248], 0x0
        mov dword ptr [ebp - 0x25c], 0x0
        mov dword ptr [ebp - 0x258], 0x0
        mov dword ptr [ebp - 0x264], 0x0
        mov dword ptr [ebp - 0x260], 0x0
        mov dword ptr [ebp - 0x26c], 0x0
        mov dword ptr [ebp - 0x268], 0x0
        mov dword ptr [ebp - 0x274], 0x0
        mov dword ptr [ebp - 0x270], 0x0
        mov dword ptr [ebp - 0x2d4], 0x0
        mov dword ptr [ebp - 0x2d0], 0x3ff00000
        mov dword ptr [ebp - 0x2fc], 0x0
        mov dword ptr [ebp - 0x2f8], 0x3ff00000
        mov dword ptr [ebp - 0x324], 0x0
        mov dword ptr [ebp - 0x320], 0x3ff00000
        mov dword ptr [ebp - 0x34c], 0x0
        mov dword ptr [ebp - 0x348], 0x3ff00000
        mov dword ptr [ebp - 0x2dc], 0x0
        mov dword ptr [ebp - 0x2d8], 0x0
        mov dword ptr [ebp - 0x2e4], 0x0
        mov dword ptr [ebp - 0x2e0], 0x0
        mov dword ptr [ebp - 0x2ec], 0x0
        mov dword ptr [ebp - 0x2e8], 0x0
        mov dword ptr [ebp - 0x2f4], 0x0
        mov dword ptr [ebp - 0x2f0], 0x0
        mov dword ptr [ebp - 0x304], 0x0
        mov dword ptr [ebp - 0x300], 0x0
        mov dword ptr [ebp - 0x30c], 0x0
        mov dword ptr [ebp - 0x308], 0x0
        mov dword ptr [ebp - 0x314], 0x0
        mov dword ptr [ebp - 0x310], 0x0
        mov dword ptr [ebp - 0x31c], 0x0
        mov dword ptr [ebp - 0x318], 0x0
        mov dword ptr [ebp - 0x32c], 0x0
        mov dword ptr [ebp - 0x328], 0x0
        mov dword ptr [ebp - 0x334], 0x0
        mov dword ptr [ebp - 0x330], 0x0
        mov dword ptr [ebp - 0x33c], 0x0
        mov dword ptr [ebp - 0x338], 0x0
        mov dword ptr [ebp - 0x344], 0x0
        mov dword ptr [ebp - 0x340], 0x0
        mov dword ptr [ebp - 0x14c], 0x0
        mov dword ptr [ebp - 0x148], 0x3ff00000
        mov dword ptr [ebp - 0x174], 0x0
        mov dword ptr [ebp - 0x170], 0x3ff00000
        mov dword ptr [ebp - 0x19c], 0x0
        mov dword ptr [ebp - 0x198], 0x3ff00000
        mov dword ptr [ebp - 0x1c4], 0x0
        mov dword ptr [ebp - 0x1c0], 0x3ff00000
        mov dword ptr [ebp - 0x154], 0x0
        mov dword ptr [ebp - 0x150], 0x0
        mov dword ptr [ebp - 0x15c], 0x0
        mov dword ptr [ebp - 0x158], 0x0
        mov dword ptr [ebp - 0x164], 0x0
        mov dword ptr [ebp - 0x160], 0x0
        mov dword ptr [ebp - 0x16c], 0x0
        mov dword ptr [ebp - 0x168], 0x0
        mov eax, dword ptr [ebp - 0x38]
        mov ecx, ebx
        push eax
        mov dword ptr [ebp - 0x17c], 0x0
        mov dword ptr [ebp - 0x178], 0x0
        mov dword ptr [ebp - 0x184], 0x0
        mov dword ptr [ebp - 0x180], 0x0
        mov dword ptr [ebp - 0x18c], 0x0
        mov dword ptr [ebp - 0x188], 0x0
        mov dword ptr [ebp - 0x194], 0x0
        mov dword ptr [ebp - 0x190], 0x0
        mov dword ptr [ebp - 0x1a4], 0x0
        mov dword ptr [ebp - 0x1a0], 0x0
        mov dword ptr [ebp - 0x1ac], 0x0
        mov dword ptr [ebp - 0x1a8], 0x0
        mov dword ptr [ebp - 0x1b4], 0x0
        mov dword ptr [ebp - 0x1b0], 0x0
        mov dword ptr [ebp - 0x1bc], 0x0
        mov dword ptr [ebp - 0x1b8], 0x0
        mov dword ptr [ebp - 0xd8], 0x0
        mov dword ptr [ebp - 0xd4], 0x0
        mov dword ptr [ebp - 0xe0], 0x0
        mov dword ptr [ebp - 0xdc], 0x0
        mov dword ptr [ebp - 0xe8], 0x0
        mov dword ptr [ebp - 0xe4], 0x0
        mov dword ptr [ebp - 0xd0], 0x0
        mov dword ptr [ebp - 0xcc], 0x3ff00000
        mov dword ptr [ebp - 0xf8], 0x0
        mov dword ptr [ebp - 0xf4], 0x0
        mov dword ptr [ebp - 0x100], 0x0
        mov dword ptr [ebp - 0xfc], 0x0
        mov dword ptr [ebp - 0x108], 0x0
        mov dword ptr [ebp - 0x104], 0x0
        mov dword ptr [ebp - 0xf0], 0x0
        mov dword ptr [ebp - 0xec], 0x3ff00000
        mov dword ptr [ebp - 0x24], edi
        mov dword ptr [ebp - 0x20], edi
        call ext_007854A0
        mov ecx, dword ptr [ebp - 0x38]
        mov dword ptr [ebp - 0x10], eax
        push ecx
        mov ecx, ebx
        call ext_00785550
        mov dword ptr [ebp - 0x124], eax
        xor esi, esi
    L_00787e1c:
        push 0x98
        call ext_006A5C62
        add esp, 0x4
        mov dword ptr [ebp - 0x18], eax
        cmp eax, edi
        mov dword ptr [ebp - 0x4], 0x1
        je L_00787e40
        mov ecx, eax
        call ext_006CA140
        jmp L_00787e42
    L_00787e40:
        xor eax, eax
    L_00787e42:
        mov edx, dword ptr [ebp + esi - 0x38]
        push edi
        push edx
        mov ecx, eax
        mov dword ptr [ebp - 0x4], 0xffffffff
        mov dword ptr [ebp + esi - 0xc8], eax
        call ext_006CE720
        add esi, 0x4
        cmp esi, 0xc
        jl L_00787e1c
        lea eax, [ebp - 0x64]
        mov dword ptr [ebp - 0x14], eax
    L_00787e6b:
        mov ecx, dword ptr [ebp - 0x10]
        push ecx
        mov ecx, dword ptr [ebp + edi - 0x38]
        call ext_006CA020
        mov esi, eax
        mov ecx, esi
        mov dword ptr [ebp + edi - 0x130], esi
        call ext_006C9E80
        mov edx, dword ptr [ebp - 0x14]
        mov ebx, dword ptr [ebp + edi - 0xc8]
        mov eax, dword ptr [ebp - 0x10c]
        mov ecx, ebx
        fstp qword ptr [edx]
        push eax
        call ext_006CA500
        mov ecx, dword ptr [ebp - 0x10]
        push ecx
        mov ecx, ebx
        call ext_006CA020
        mov edx, dword ptr [esi]
        mov dword ptr [eax], edx
        mov ecx, dword ptr [esi + 0x8]
        mov dword ptr [eax + 0x8], ecx
        mov edx, dword ptr [esi + 0xc]
        mov dword ptr [eax + 0xc], edx
        mov ecx, dword ptr [esi + 0x10]
        mov dword ptr [eax + 0x10], ecx
        lea ecx, [eax + 0x14]
        sub esi, eax
        mov eax, 0x4
    L_00787ecd:
        mov edx, dword ptr [esi + ecx]
        mov dword ptr [ecx], edx
        add ecx, 0x4
        dec eax
        jne L_00787ecd
        mov edx, dword ptr [ebp - 0x14]
        add edi, 0x4
        add edx, 0x8
        cmp edi, 0xc
        mov dword ptr [ebp - 0x14], edx
        jl L_00787e6b
        mov ecx, dword ptr [ebp - 0x130]
        lea eax, [ebp - 0x2c]
        push eax
        call ext_006C9F00
        mov ecx, eax
        call ext_006DADE0
        mov ecx, dword ptr [ebp - 0x10]
        fstp qword ptr [ebp - 0x84]
        lea eax, [ecx + 0x1]
        mov dword ptr [ebp - 0x10], eax
        mov dword ptr [ebp - 0x14], eax
    L_00787f11:
        lea ebx, [ebp - 0x7c]
        xor esi, esi
    L_00787f16:
        mov edx, dword ptr [ebp - 0x14]
        mov ecx, dword ptr [ebp + esi - 0x38]
        push edx
        call ext_006CA020
        mov ecx, dword ptr [ebp + esi - 0xc8]
        mov edi, eax
        mov eax, dword ptr [ebp - 0x10]
        mov dword ptr [ebp + esi - 0x398], edi
        push eax
        call ext_006CA020
        mov ecx, edi
        mov dword ptr [ebp + esi - 0x130], eax
        call ext_006C9E80
        fstp qword ptr [ebx]
        add esi, 0x4
        add ebx, 0x8
        cmp esi, 0xc
        jl L_00787f16
        lea ecx, [ebp - 0x400]
        push ecx
        mov ecx, dword ptr [ebp - 0x398]
        call ext_006C9F00
        mov ecx, eax
        call ext_006DADE0
        mov esi, dword ptr [ebp - 0x110]
        fstp qword ptr [ebp - 0x118]
        test esi, esi
        jne L_00787f98
        lea edx, [ebp - 0x7c]
        lea eax, [ebp - 0x34c]
        push edx
        push eax
        call ext_006C4440
        add esp, 0x8
        jmp L_00788105
    L_00787f98:
        cmp esi, 0xc
        jne L_00788095
        fld qword ptr [ebp - 0x7c]
        fmul qword ptr [mem_00993C98]
        lea ecx, [ebp - 0x44]
        mov dword ptr [ebp - 0x18], ecx
        fstp qword ptr [ebp - 0x2c]
        fld qword ptr [ebp - 0x2c]
        fsincos
        mov eax, dword ptr [ebp - 0x18]
        fstp qword ptr [eax]
        fstp qword ptr [ebp - 0x144]
        fld qword ptr [ebp - 0x74]
        fmul qword ptr [mem_00993C98]
        lea edx, [ebp - 0x8c]
        mov dword ptr [ebp - 0x18], edx
        fstp qword ptr [ebp - 0x2c]
        fld qword ptr [ebp - 0x2c]
        fsincos
        mov eax, dword ptr [ebp - 0x18]
        fstp qword ptr [eax]
        fstp qword ptr [ebp - 0x29c]
        fld qword ptr [ebp - 0x6c]
        fmul qword ptr [mem_00993C98]
        lea eax, [ebp - 0xac]
        mov dword ptr [ebp - 0x18], eax
        fstp qword ptr [ebp - 0x2c]
        fld qword ptr [ebp - 0x2c]
        fsincos
        mov eax, dword ptr [ebp - 0x18]
        fstp qword ptr [eax]
        fstp qword ptr [ebp - 0x2a4]
        fld qword ptr [ebp - 0xac]
        fmul qword ptr [ebp - 0x8c]
        fld qword ptr [ebp - 0x44]
        sub esp, 0x8
        lea ecx, [ebp - 0x36c]
        fmul st, st(1)
        sub esp, 0x8
        sub esp, 0x8
        fstp qword ptr [esp + 0x10]
        fld qword ptr [ebp - 0x2a4]
        fmul qword ptr [ebp - 0x44]
        fld qword ptr [ebp - 0x29c]
        fmul qword ptr [ebp - 0x144]
        sub esp, 0x8
        fsubp st(1), st
        fstp qword ptr [esp + 0x10]
        fld qword ptr [ebp - 0x2a4]
        fmul qword ptr [ebp - 0x144]
        fld qword ptr [ebp - 0x29c]
        fmul qword ptr [ebp - 0x44]
        faddp st(1), st
        fstp qword ptr [esp + 0x8]
        fld qword ptr [ebp - 0x144]
        fmul st, st(1)
        fstp qword ptr [esp]
        push ecx
        fstp st(0)
        call ext_006E0050
        lea edx, [ebp - 0x36c]
        lea eax, [ebp - 0x34c]
        push edx
        push eax
        call ext_006D2810
        add esp, 0x2c
        jmp L_00788105
    L_00788095:
        lea eax, [esi + 2*esi]
        push esi
        shl eax, 0x2
        mov ecx, dword ptr [eax + 0x996d70]
        mov edx, dword ptr [eax + 0x996d74]
        mov eax, dword ptr [eax + 0x996d78]
        fld qword ptr [ebp + 8*ecx - 0x7c]
        fstp qword ptr [ebp - 0x2c4]
        fld qword ptr [ebp + 8*edx - 0x7c]
        fstp qword ptr [ebp - 0x2bc]
        fld qword ptr [ebp + 8*eax - 0x7c]
        mov eax, dword ptr [ebp - 0x2b8]
        fstp qword ptr [ebp - 0x2b4]
        mov ecx, dword ptr [ebp - 0x2b0]
        mov edx, dword ptr [ebp - 0x2b4]
        push ecx
        mov ecx, dword ptr [ebp - 0x2bc]
        push edx
        mov edx, dword ptr [ebp - 0x2c0]
        push eax
        mov eax, dword ptr [ebp - 0x2c4]
        push ecx
        push edx
        lea ecx, [ebp - 0x34c]
        push eax
        push ecx
        call ext_006E0390
        add esp, 0x20
    L_00788105:
        cmp esi, 0xc
        je L_00788129
        lea edx, [esi + 2*esi]
        lea ecx, [ebp - 0x64]
        lea eax, [4*edx + 0x996d70]
        lea edx, [ebp - 0x7c]
        push eax
        push ecx
        lea eax, [ebp - 0x7c]
        push edx
        push eax
        call ext_006E3A50
        add esp, 0x10
    L_00788129:
        xor eax, eax
    L_0078812b:
        fld qword ptr [ebp + eax - 0x7c]
        fsub qword ptr [ebp + eax - 0x64]
        add eax, 0x8
        lea edx, [ebp - 0x1c4]
        lea ecx, [ebp + eax - 0x1dc]
        fstp qword ptr [ebp + eax - 0x1e4]
        cmp ecx, edx
        jb L_0078812b
        fld qword ptr [mem_0092A278]
        lea eax, [ebp - 0x1dc]
    L_0078815a:
        fld qword ptr [eax]
        fld st(0)
        fmul st, st(1)
        add eax, 0x8
        lea ecx, [ebp - 0x1c4]
        cmp eax, ecx
        faddp st(2), st
        fstp st(0)
        jb L_0078815a
        fcomp qword ptr [mem_00996F98]
        fnstsw ax
        test ah, 0x1
        jne L_00788841
        fld qword ptr [ebp - 0x118]
        fsub qword ptr [ebp - 0x84]
        fcomp qword ptr [mem_00996F90]
        fnstsw ax
        test ah, 0x1
        jne L_00788841
        test esi, esi
        jne L_007881bb
        lea edx, [ebp - 0x64]
        lea eax, [ebp - 0x27c]
        push edx
        push eax
        call ext_006C4440
        add esp, 0x8
        jmp L_00788328
    L_007881bb:
        cmp esi, 0xc
        jne L_007882b8
        fld qword ptr [ebp - 0x64]
        fmul qword ptr [mem_00993C98]
        lea ecx, [ebp - 0x4c]
        mov dword ptr [ebp - 0x18], ecx
        fstp qword ptr [ebp - 0x2c]
        fld qword ptr [ebp - 0x2c]
        fsincos
        mov eax, dword ptr [ebp - 0x18]
        fstp qword ptr [eax]
        fstp qword ptr [ebp - 0x138]
        fld qword ptr [ebp - 0x5c]
        fmul qword ptr [mem_00993C98]
        lea edx, [ebp - 0xbc]
        mov dword ptr [ebp - 0x18], edx
        fstp qword ptr [ebp - 0x2c]
        fld qword ptr [ebp - 0x2c]
        fsincos
        mov eax, dword ptr [ebp - 0x18]
        fstp qword ptr [eax]
        fstp qword ptr [ebp - 0x2cc]
        fld qword ptr [ebp - 0x54]
        fmul qword ptr [mem_00993C98]
        lea eax, [ebp - 0xb4]
        mov dword ptr [ebp - 0x18], eax
        fstp qword ptr [ebp - 0x2c]
        fld qword ptr [ebp - 0x2c]
        fsincos
        mov eax, dword ptr [ebp - 0x18]
        fstp qword ptr [eax]
        fstp qword ptr [ebp - 0x2ac]
        fld qword ptr [ebp - 0xb4]
        fmul qword ptr [ebp - 0xbc]
        fld qword ptr [ebp - 0x4c]
        sub esp, 0x8
        lea ecx, [ebp - 0x38c]
        fmul st, st(1)
        sub esp, 0x8
        sub esp, 0x8
        fstp qword ptr [esp + 0x10]
        fld qword ptr [ebp - 0x2ac]
        fmul qword ptr [ebp - 0x4c]
        fld qword ptr [ebp - 0x2cc]
        fmul qword ptr [ebp - 0x138]
        sub esp, 0x8
        fsubp st(1), st
        fstp qword ptr [esp + 0x10]
        fld qword ptr [ebp - 0x2ac]
        fmul qword ptr [ebp - 0x138]
        fld qword ptr [ebp - 0x2cc]
        fmul qword ptr [ebp - 0x4c]
        faddp st(1), st
        fstp qword ptr [esp + 0x8]
        fld qword ptr [ebp - 0x138]
        fmul st, st(1)
        fstp qword ptr [esp]
        push ecx
        fstp st(0)
        call ext_006E0050
        lea edx, [ebp - 0x38c]
        lea eax, [ebp - 0x27c]
        push edx
        push eax
        call ext_006D2810
        add esp, 0x2c
        jmp L_00788328
    L_007882b8:
        lea eax, [esi + 2*esi]
        push esi
        shl eax, 0x2
        mov ecx, dword ptr [eax + 0x996d70]
        mov edx, dword ptr [eax + 0x996d74]
        mov eax, dword ptr [eax + 0x996d78]
        fld qword ptr [ebp + 8*ecx - 0x64]
        fstp qword ptr [ebp - 0x294]
        fld qword ptr [ebp + 8*edx - 0x64]
        fstp qword ptr [ebp - 0x28c]
        fld qword ptr [ebp + 8*eax - 0x64]
        mov eax, dword ptr [ebp - 0x288]
        fstp qword ptr [ebp - 0x284]
        mov ecx, dword ptr [ebp - 0x280]
        mov edx, dword ptr [ebp - 0x284]
        push ecx
        mov ecx, dword ptr [ebp - 0x28c]
        push edx
        mov edx, dword ptr [ebp - 0x290]
        push eax
        mov eax, dword ptr [ebp - 0x294]
        push ecx
        push edx
        lea ecx, [ebp - 0x27c]
        push eax
        push ecx
        call ext_006E0390
        add esp, 0x20
    L_00788328:
        lea edx, [ebp - 0x34c]
        lea eax, [ebp - 0x27c]
        push edx
        lea ecx, [ebp - 0x1c4]
        push eax
        push ecx
        call ext_006C7BC0
        lea edx, [ebp - 0x1c4]
        lea eax, [ebp - 0xe8]
        push edx
        push eax
        call ext_006E00F0
        fld qword ptr [mem_00993828]
        add esp, 0x14
    L_0078835e:
        fst qword ptr [ebp - 0x2c]
        fld qword ptr [mem_0092A270]
        fsub st, st(1)
        lea ecx, [ebp - 0x108]
        lea edx, [ebp - 0x1c4]
        push ecx
        push edx
        fld st(0)
        fmul qword ptr [ebp - 0x84]
        fld st(2)
        fmul qword ptr [ebp - 0x118]
        faddp st(1), st
        fstp qword ptr [ebp - 0x1c]
        fld qword ptr [ebp - 0xe8]
        fmul st, st(2)
        fstp qword ptr [ebp - 0x108]
        fld qword ptr [ebp - 0xe0]
        fmul st, st(2)
        fstp qword ptr [ebp - 0x100]
        fld qword ptr [ebp - 0xd8]
        fmul st, st(2)
        fstp qword ptr [ebp - 0xf8]
        fld qword ptr [ebp - 0xd0]
        fmul st, st(2)
        fadd st, st(1)
        fstp qword ptr [ebp - 0xf0]
        fstp st(0)
        fstp st(0)
        call ext_006D2810
        lea eax, [ebp - 0x1c4]
        lea ecx, [ebp - 0x27c]
        push eax
        lea edx, [ebp - 0x1c4]
        push ecx
        push edx
        call ext_006C8200
        add esp, 0x14
        mov dword ptr [ebp - 0x94], 0x0
        test esi, esi
        mov dword ptr [ebp - 0x90], 0x0
        mov dword ptr [ebp - 0x9c], 0x0
        mov dword ptr [ebp - 0x98], 0x0
        mov dword ptr [ebp - 0xa4], 0x0
        mov dword ptr [ebp - 0xa0], 0x0
        jne L_00788447
        lea eax, [ebp - 0x1c4]
        lea ecx, [ebp - 0xa4]
        push eax
        push ecx
        call ext_006C4220
        add esp, 0x8
        jmp L_007886d7
    L_00788447:
        cmp esi, 0xc
        jne L_00788676
        fld qword ptr [ebp - 0x1c4]
        fcomp qword ptr [mem_00993C90]
        fnstsw ax
        test ah, 0x41
        jne L_00788635
        fld qword ptr [ebp - 0x1c4]
        fadd qword ptr [mem_0092A270]
        sub esp, 0x8
        lea edx, [ebp - 0x1fc]
        sub esp, 0x8
        fstp qword ptr [esp + 0x8]
        fld qword ptr [ebp - 0x1bc]
        fstp qword ptr [esp]
        fld qword ptr [ebp - 0x1b4]
        fchs
        sub esp, 0x8
        fstp qword ptr [esp]
        push 0x0
        push 0x0
        push edx
        call ext_006E0050
        lea eax, [ebp - 0x1fc]
        push eax
        call ext_006DFFF0
        fdivr qword ptr [mem_0092A270]
        add esp, 0x20
        lea ecx, [ebp - 0x1fc]
        lea edx, [ebp - 0x1fc]
        fstp qword ptr [esp]
        push ecx
        push edx
        call ext_006E00C0
        fld qword ptr [ebp - 0x1ec]
        fmul qword ptr [ebp - 0x1ec]
        add esp, 0x10
        fmul qword ptr [ebp - 0x1f4]
        fmul qword ptr [ebp - 0x1f4]
        fcom qword ptr [mem_00993C88]
        fnstsw ax
        test ah, 0x41
        jne L_00788523
        fld st(0)
        fmul qword ptr [mem_0093F7B0]
        fsubr qword ptr [mem_0092A270]
        fsqrt
        fsubr qword ptr [mem_0092A270]
        fld qword ptr [mem_00993828]
        fdiv st, st(2)
        fmulp st(1), st
        fsqrt
        fstp qword ptr [ebp - 0x120]
        fstp st(0)
        jmp L_00788539
    L_00788523:
        fstp st(0)
        mov dword ptr [ebp - 0x120], 0x0
        mov dword ptr [ebp - 0x11c], 0x3ff00000
    L_00788539:
        fld qword ptr [ebp - 0x120]
        fmul qword ptr [ebp - 0x1ec]
        call ext_006A73BA
        fmul qword ptr [mem_00993C80]
        fstp qword ptr [ebp - 0x94]
        fld qword ptr [ebp - 0x120]
        fmul qword ptr [ebp - 0x1f4]
        call ext_006A73BA
        fmul qword ptr [mem_00993C80]
        lea eax, [ebp - 0x1c4]
        lea ecx, [ebp - 0x3b8]
        push eax
        push ecx
        fstp qword ptr [ebp - 0x9c]
        call ext_006E00F0
        lea edx, [ebp - 0x1fc]
        lea eax, [ebp - 0x1fc]
        push edx
        push eax
        call ext_006E0090
        lea ecx, [ebp - 0x3b8]
        lea edx, [ebp - 0x1fc]
        push ecx
        lea eax, [ebp - 0x3b8]
        push edx
        push eax
        call ext_006E0810
        lea ecx, [ebp - 0x3b8]
        push ecx
        call ext_006DFFF0
        fdivr qword ptr [mem_0092A270]
        add esp, 0x18
        lea edx, [ebp - 0x3b8]
        lea eax, [ebp - 0x3b8]
        fstp qword ptr [esp]
        push edx
        push eax
        call ext_006E00C0
        add esp, 0x10
        lea ecx, [ebp - 0x3f0]
        call ext_006E0920
        lea ecx, [ebp - 0x3b8]
        lea edx, [ebp - 0x3f0]
        push ecx
        push edx
        mov dword ptr [ebp - 0x3d8], 0x0
        mov dword ptr [ebp - 0x3d4], 0x3ff00000
        call ext_006E0940
        fld qword ptr [ebp - 0x3e0]
        fld qword ptr [ebp - 0x3e8]
        fpatan
        add esp, 0x8
        fmul qword ptr [mem_009937F8]
        fstp qword ptr [ebp - 0xa4]
        jmp L_007886fc
    L_00788635:
        mov dword ptr [ebp - 0x94], 0x0
        mov dword ptr [ebp - 0x90], 0x40668000
        mov dword ptr [ebp - 0x9c], 0x0
        mov dword ptr [ebp - 0x98], 0x40668000
        mov dword ptr [ebp - 0xa4], 0x0
        mov dword ptr [ebp - 0xa0], 0x40668000
        jmp L_007886fc
    L_00788676:
        lea ecx, [ebp - 0x3d0]
        call ext_006E0920
        lea eax, [ebp - 0x1c4]
        push esi
        lea ecx, [ebp - 0x3d0]
        push eax
        push ecx
        call ext_006E01F0
        fld qword ptr [ebp - 0x3d0]
        lea eax, [esi + 2*esi]
        add esp, 0xc
        shl eax, 0x2
        mov edx, dword ptr [eax + 0x996d70]
        mov ecx, dword ptr [eax + 0x996d74]
        fstp qword ptr [ebp + 8*edx - 0xa4]
        fld qword ptr [ebp - 0x3c8]
        mov edx, dword ptr [eax + 0x996d78]
        fstp qword ptr [ebp + 8*ecx - 0xa4]
        fld qword ptr [ebp - 0x3c0]
        fstp qword ptr [ebp + 8*edx - 0xa4]
    L_007886d7:
        lea eax, [esi + 2*esi]
        lea edx, [ebp - 0x64]
        lea ecx, [4*eax + 0x996d70]
        lea eax, [ebp - 0xa4]
        push ecx
        push edx
        lea ecx, [ebp - 0xa4]
        push eax
        push ecx
        call ext_006E3A50
        add esp, 0x10
    L_007886fc:
        xor eax, eax
    L_007886fe:
        fld qword ptr [ebp + eax - 0xa4]
        fsub qword ptr [ebp + eax - 0x64]
        add eax, 0x8
        lea ecx, [ebp - 0x1c4]
        lea edx, [ebp + eax - 0x1dc]
        fstp qword ptr [ebp + eax - 0x1e4]
        cmp edx, ecx
        jb L_007886fe
        fld qword ptr [mem_0092A278]
        lea eax, [ebp - 0x1dc]
    L_00788730:
        fld qword ptr [eax]
        fld st(0)
        fmul st, st(1)
        add eax, 0x8
        lea edx, [ebp - 0x1c4]
        cmp eax, edx
        faddp st(2), st
        fstp st(0)
        jb L_00788730
        fcomp qword ptr [mem_00996F98]
        fnstsw ax
        test ah, 0x1
        jne L_00788778
        fld qword ptr [ebp - 0x1c]
        fsub qword ptr [ebp - 0x84]
        fcomp qword ptr [mem_00996F90]
        fnstsw ax
        test ah, 0x1
        jne L_00788778
        fld qword ptr [ebp - 0x2c]
        fmul qword ptr [mem_00993828]
        jmp L_0078835e
    L_00788778:
        mov eax, dword ptr [ebp - 0x1c]
        mov ebx, dword ptr [ebp - 0x3c]
        mov ecx, dword ptr [ebp - 0x18]
        mov dword ptr [ebp - 0x84], eax
        mov eax, dword ptr [ebp - 0x10]
        mov dword ptr [ebp - 0x80], ecx
        inc eax
        cmp ebx, eax
        mov dword ptr [ebp - 0x10], eax
        jg L_007887b7
        add ebx, 0xfa
        lea esi, [ebp - 0xc8]
        mov dword ptr [ebp - 0x3c], ebx
        mov edi, 0x3
    L_007887a9:
        mov ecx, dword ptr [esi]
        push ebx
        call ext_006CA500
        add esi, 0x4
        dec edi
        jne L_007887a9
    L_007887b7:
        mov ebx, dword ptr [ebp - 0x18]
        lea edi, [ebp - 0xa4]
        xor esi, esi
    L_007887c2:
        mov edx, dword ptr [ebp - 0x1c]
        push ebx
        push edx
        lea ecx, [ebp - 0x24]
        call ext_006DAE00
        push 0x0
        push 0x0
        fld qword ptr [edi]
        push 0x3eaaaaab
        push 0x3eaaaaab
        mov eax, dword ptr [ebp - 0x20]
        push 0x0
        push 0x0
        push 0x0
        push 0x100
        push 0x8
        push ecx
        mov ecx, dword ptr [ebp - 0x24]
        fstp dword ptr [esp]
        push eax
        push ecx
        mov ecx, dword ptr [ebp + esi - 0x130]
        call ext_006C9AB0
        mov edx, dword ptr [ebp - 0x10]
        mov ecx, dword ptr [ebp + esi - 0xc8]
        push edx
        call ext_006CA020
        mov dword ptr [ebp + esi - 0x130], eax
        add esi, 0x4
        add edi, 0x8
        cmp esi, 0xc
        jl L_007887c2
        mov ecx, 0x6
        lea esi, [ebp - 0xa4]
        lea edi, [ebp - 0x64]
        rep movsd
        mov esi, dword ptr [ebp - 0x110]
        jmp L_00788105
    L_00788841:
        lea edi, [ebp - 0x7c]
        xor esi, esi
    L_00788846:
        push 0x0
        push 0x0
        fld qword ptr [edi]
        push 0x3eaaaaab
        push 0x3eaaaaab
        push 0x0
        push 0x0
        push 0x0
        push 0x100
        push 0x8
        push ecx
        mov ecx, dword ptr [ebp + esi - 0x398]
        lea eax, [ebp - 0x3f8]
        fstp dword ptr [esp]
        push eax
        call ext_006C9F00
        mov ecx, dword ptr [eax + 0x4]
        push ecx
        mov ecx, dword ptr [ebp + esi - 0x130]
        mov edx, dword ptr [eax]
        push edx
        call ext_006C9AB0
        add esi, 0x4
        add edi, 0x8
        cmp esi, 0xc
        jl L_00788846
        mov eax, dword ptr [ebp - 0x118]
        mov ecx, 0x6
        lea esi, [ebp - 0x7c]
        lea edi, [ebp - 0x64]
        rep movsd
        mov esi, dword ptr [ebp - 0x14]
        mov edi, dword ptr [ebp - 0x3c]
        mov ecx, dword ptr [ebp - 0x114]
        mov dword ptr [ebp - 0x84], eax
        mov eax, dword ptr [ebp - 0x10]
        inc esi
        inc eax
        mov dword ptr [ebp - 0x80], ecx
        cmp edi, eax
        mov dword ptr [ebp - 0x14], esi
        mov dword ptr [ebp - 0x10], eax
        jg L_007888f6
        add edi, 0xfa
        lea esi, [ebp - 0xc8]
        mov dword ptr [ebp - 0x3c], edi
        mov ebx, 0x3
    L_007888e3:
        mov ecx, dword ptr [esi]
        push edi
        call ext_006CA500
        add esi, 0x4
        dec ebx
        jne L_007888e3
        cmp dword ptr [ebp - 0x10], edi
        jge L_00788907
    L_007888f6:
        mov edx, dword ptr [ebp - 0x14]
        mov eax, dword ptr [ebp - 0x124]
        cmp edx, eax
        jl L_00787f11
    L_00788907:
        mov eax, dword ptr [ebp - 0x14]
        mov ecx, dword ptr [ebp - 0x10c]
        cmp eax, ecx
        jl L_00787f11
        mov ecx, dword ptr [ebp + 0x8]
        push -0x1
        push 0x0
        push 0x0
        push 0x0
        call ext_006DE1C0
        mov edi, dword ptr [ebp - 0x10]
        mov ebx, dword ptr [ebp - 0xc8]
        push edi
        mov ecx, ebx
        mov esi, eax
        call ext_006CA540
        mov ecx, dword ptr [ebp - 0xc4]
        push edi
        call ext_006CA540
        push edi
        mov edi, dword ptr [ebp - 0xc0]
        mov ecx, edi
        call ext_006CA540
        mov edx, dword ptr [esi]
        push 0x0
        push ebx
        push 0x0
        mov ecx, esi
        call dword ptr [edx + 0x18]
        mov ecx, eax
        call ext_006DEED0
        mov eax, dword ptr [ebp - 0xc4]
        mov edx, dword ptr [esi]
        push 0x0
        push eax
        push 0x1
        mov ecx, esi
        call dword ptr [edx + 0x18]
        mov ecx, eax
        call ext_006DEED0
        mov eax, dword ptr [esi]
        push 0x0
        push edi
        push 0x2
        mov ecx, esi
        call dword ptr [eax + 0x18]
        mov ecx, eax
        call ext_006DEED0
        mov edi, dword ptr [ebp - 0x13c]
        push 0x1
        push 0x0
        mov ecx, dword ptr [edi + 0x1c]
        mov edx, dword ptr [edi + 0x18]
        mov eax, dword ptr [edi + 0x14]
        push ecx
        mov ecx, dword ptr [edi + 0x10]
        push edx
        push eax
        push ecx
        mov ecx, dword ptr [ebp + 0x8]
        push esi
        call ext_006E4240
        test esi, esi
        je L_007889c3
        mov edx, dword ptr [esi]
        push 0x1
        mov ecx, esi
        call dword ptr [edx]
    L_007889c3:
        mov bl, 0x1
        test bl, bl
        jne L_007889d3
        push 0x1
        lea ecx, [edi + 0x20]
        call ext_006E7440
    L_007889d3:
        pop edi
        mov al, bl
        pop esi
        pop ebx
        mov ecx, dword ptr [ebp - 0xc]
        mov dword ptr fs:[0x0], ecx
        mov esp, ebp
        pop ebp
        ret 0x8
    L_007889e8:
        push 0xaaf594
        push 0x3
        jmp L_007889f8
    L_007889f1:
        push 0xaaf560
        push 0x2
    L_007889f8:
        lea ecx, [ebx + 0x20]
        call ext_006E7410
    L_00788a00:
        mov ecx, dword ptr [ebp - 0xc]
        pop edi
        pop esi
        xor al, al
        pop ebx
        mov dword ptr fs:[0x0], ecx
        mov esp, ebp
        pop ebp
        ret 0x8
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
        mov eax, dword ptr fs:[0x0]
        push -0x1
        push 0x8c166c
        push eax
        mov eax, dword ptr [esp + 0x14]
        mov dword ptr fs:[0x0], esp
        sub esp, 0x280
        push ebx
        mov ebx, 0x3
        push edi
        cmp eax, ebx
        mov edi, ecx
        je L_00788a62
        push 0xaaf5b8
        push 0x2
        lea ecx, [edi + 0x20]
        call ext_006E7410
        xor al, al
        jmp L_00788c0f
    L_00788a62:
        push esi
        push 0x0
        push 0x0
        push 0x0
        push 0xaa8c9c
        push 0xaa8c9c
        lea ecx, [esp + 0x20]
        call ext_006DDF00
        push 0x0
        push 0x2
        lea ecx, [esp + 0x14]
        mov dword ptr [esp + 0x29c], 0x0
        call ext_006DEBA0
        mov eax, dword ptr [mem_00AAC084]
        push 0x0
        push 0x0
        push eax
        push 0xaa8ca8
        push 0xaa8ca8
        lea ecx, [esp + 0x200]
        call ext_006DDF00
        mov ecx, dword ptr [mem_00AAC084]
        push 0x0
        push 0x0
        push ecx
        push 0xaa8ca4
        push 0xaa8ca4
        lea ecx, [esp + 0x160]
        mov byte ptr [esp + 0x2a8], 0x1
        call ext_006DDF00
        mov edx, dword ptr [mem_00AAC084]
        push 0x0
        push 0x0
        push edx
        push 0xaa8ca0
        push 0xaa8ca0
        lea ecx, [esp + 0xc0]
        mov byte ptr [esp + 0x2a8], 0x2
        call ext_006DDF00
        lea eax, [esp + 0x1ec]
        lea ecx, [esp + 0xc]
        push eax
        mov byte ptr [esp + 0x298], bl
        call ext_006DE4B0
        lea ecx, [esp + 0x14c]
        push ecx
        lea ecx, [esp + 0x10]
        call ext_006DE4B0
        lea edx, [esp + 0xac]
        lea ecx, [esp + 0xc]
        push edx
        call ext_006DE4B0
        mov esi, dword ptr [esp + 0x29c]
        push 0x0
        lea ecx, [esp + 0x1f0]
        mov eax, dword ptr [esi]
        push eax
        call ext_006DEED0
        mov ecx, dword ptr [esi + 0x4]
        push 0x0
        push ecx
        lea ecx, [esp + 0x154]
        call ext_006DEED0
        mov edx, dword ptr [esi + 0x8]
        push 0x0
        push edx
        lea ecx, [esp + 0xb4]
        call ext_006DEED0
        mov eax, dword ptr [edi]
        lea ecx, [esp + 0xc]
        push 0x1
        push ecx
        mov ecx, edi
        call dword ptr [eax + 0x18]
        push 0x0
        mov bl, al
        push 0x0
        lea ecx, [esp + 0x1f4]
        call ext_006DEED0
        push 0x0
        push 0x0
        lea ecx, [esp + 0x154]
        call ext_006DEED0
        push 0x0
        push 0x0
        lea ecx, [esp + 0xb4]
        call ext_006DEED0
        lea ecx, [esp + 0xac]
        mov byte ptr [esp + 0x294], 0x2
        call ext_006DE060
        lea ecx, [esp + 0x14c]
        mov byte ptr [esp + 0x294], 0x1
        call ext_006DE060
        lea ecx, [esp + 0x1ec]
        mov byte ptr [esp + 0x294], 0x0
        call ext_006DE060
        lea ecx, [esp + 0xc]
        mov dword ptr [esp + 0x294], 0xffffffff
        call ext_006DE060
        mov al, bl
        pop esi
    L_00788c0f:
        mov ecx, dword ptr [esp + 0x288]
        pop edi
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0x28c
        ret 0x8
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        push 0x2
        add ecx, 0x20
        call ext_006E7440
        xor al, al
        ret 0x4
    }
}
