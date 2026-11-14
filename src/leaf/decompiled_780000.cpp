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
