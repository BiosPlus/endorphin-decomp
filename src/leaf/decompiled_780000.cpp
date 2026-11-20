// Decompiled translation unit: src/leaf/decompiled_780000.cpp
extern "C" void ext_006A5C5C();
extern "C" void ext_006D2250();
extern "C" void ext_00783800();

extern "C" void ext_006D2250();
extern "C" void ext_00783800();
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
extern "C" void ext_00782E70();
extern "C" void ext_00782F20();

extern "C" void ext_00782F20();
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
extern "C" void ext_00789620();
extern "C" void ext_00789650();
extern "C" void ext_00789670();
extern "C" void ext_0078C220();

extern "C" void ext_00789650();
extern "C" void ext_00789670();
extern "C" void ext_0078C220();
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
extern "C" void ext_0078BFD0();
extern "C" void ext_0078C230();

extern "C" void ext_0078C230();
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
extern "C" void ext_007895C0();
extern "C" void ext_0078C000();

extern "C" void ext_0078C000();
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
extern "C" void ext_00782D00();
extern "C" int mem_00925208;

extern "C" int mem_00925208;
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
extern "C" void ext_0078A660();
extern "C" void ext_0078A8B0();

extern "C" void ext_0078A8B0();
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
extern "C" int mem_00925198;
extern "C" int mem_00B608B8;
extern "C" int mem_00B608C0;
extern "C" int mem_00B608BC;
extern "C" int mem_00B608C4;

extern "C" int mem_00B608C0;
extern "C" int mem_00B608BC;
extern "C" int mem_00B608C4;
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
extern "C" int mem_009252AC;
extern "C" void ext_006E73B0();
extern "C" int mem_00996EDC;

extern "C" int mem_00996EDC;
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
extern "C" void ext_007853D0();
extern "C" void ext_00788C40();

extern "C" void ext_00788C40();
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
extern "C" void ext_007865D0();
extern "C" void ext_0078D420();
extern "C" int mem_0092A278;

extern "C" int mem_0092A278;
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
extern "C" int mem_009252C8;
extern "C" void ext_0078C080();
extern "C" void ext_0078C260();

extern "C" void ext_0078C260();
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
extern "C" void ext_006CD310();
extern "C" void ext_00789A30();

extern "C" void ext_00789A30();
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
extern "C" void ext_006B9D70();
extern "C" void ext_006D2160();

extern "C" void ext_006D2160();
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
extern "C" void ext_007831E0();
extern "C" int mem_0099708C;

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

// [0x00782B10] sub_00782B10 (32 bytes)
extern "C" char mem_00AAF2A4;
extern "C" char mem_00AAF2AC;
extern "C" __declspec(naked) void __cdecl fn_00782B10(int sel) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        sub eax, 0x0
        je L_00782b25
        dec eax
        je L_00782b1f
        xor eax, eax
        ret
    L_00782b1f:
        mov eax, offset mem_00AAF2AC
        ret
    L_00782b25:
        mov eax, offset mem_00AAF2A4
        ret
        nop
        nop
        nop
        nop
        nop
    }
}

// [0x00782B60] sub_00782B60 (32 bytes)
extern "C" char mem_00AAF2BC;
extern "C" char mem_00AAF2C4;
extern "C" __declspec(naked) void __cdecl fn_00782B60(int sel) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        sub eax, 0x0
        je L_00782b75
        dec eax
        je L_00782b6f
        xor eax, eax
        ret
    L_00782b6f:
        mov eax, offset mem_00AAF2C4
        ret
    L_00782b75:
        mov eax, offset mem_00AAF2BC
        ret
        nop
        nop
        nop
        nop
        nop
    }
}

// [0x00782B80] sub_00782B80 (32 bytes)
extern "C" char mem_00AAF2CC;
extern "C" char mem_00AAF2D8;
extern "C" __declspec(naked) void __cdecl fn_00782B80(int sel) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        sub eax, 0x0
        je L_00782b95
        dec eax
        je L_00782b8f
        xor eax, eax
        ret
    L_00782b8f:
        mov eax, offset mem_00AAF2D8
        ret
    L_00782b95:
        mov eax, offset mem_00AAF2CC
        ret
        nop
        nop
        nop
        nop
        nop
    }
}

// [0x00782CB0] sub_00782CB0 (32 bytes)
extern "C" char mem_00AAF348;
extern "C" char mem_00AAF354;
extern "C" __declspec(naked) void __cdecl fn_00782CB0(int sel) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        sub eax, 0x0
        je L_00782cc5
        dec eax
        je L_00782cbf
        xor eax, eax
        ret
    L_00782cbf:
        mov eax, offset mem_00AAF354
        ret
    L_00782cc5:
        mov eax, offset mem_00AAF348
        ret
        nop
        nop
        nop
        nop
        nop
    }
}

// [0x00782D00] sub_00782D00 (32 bytes)
extern "C" __declspec(naked) void __fastcall fn_00782D00(void* self) {
    __asm {
        mov edx, dword ptr [esp + 0x4]
        mov eax, ecx
        xor ecx, ecx
        mov byte ptr [eax + 0x11], cl
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 0x4], ecx
        mov dword ptr [eax + 0x8], ecx
        mov dword ptr [eax + 0xc], edx
        mov byte ptr [eax + 0x10], cl
        ret 0x4
    }
}

// [0x007833F0] sub_007833F0 (32 bytes)
// [0x007833F0]
extern "C" int mem_00925264;
extern "C" __declspec(naked) void __fastcall fn_007833F0(void* self) {
    __asm {
        mov eax, dword ptr [ecx + 4]
        mov dl, byte ptr [eax + 4]
        test dl, dl
        je done
        mov byte ptr [eax + 4], 0
        mov eax, dword ptr [ecx + 4]
        mov ecx, dword ptr [eax]
        push ecx
        call dword ptr [mem_00925264]
        pop ecx
    done:
        ret
    }
}

// [0x00783800] sub_00783800 (32 bytes)
extern "C" __declspec(naked) void __fastcall fn_00783800(void* self) {
    __asm {
        __asm _emit 0x8b __asm _emit 0x01                   // mov eax, dword ptr [ecx]
        __asm _emit 0x33 __asm _emit 0xd2                   // xor edx, edx
        __asm _emit 0x3b __asm _emit 0xc2                   // cmp eax, edx
        __asm _emit 0x89 __asm _emit 0x51 __asm _emit 0x08  // mov dword ptr [ecx + 0x8], edx
        __asm _emit 0x89 __asm _emit 0x51 __asm _emit 0x0c  // mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x74 __asm _emit 0x0c                   // je  +0x0c (to ret)
        __asm _emit 0x89 __asm _emit 0x50 __asm _emit 0x08  // mov dword ptr [eax + 0x8], edx
        __asm _emit 0x89 __asm _emit 0x50 __asm _emit 0x0c  // mov dword ptr [eax + 0xc], edx
        __asm _emit 0x8b __asm _emit 0x00                   // mov eax, dword ptr [eax]
        __asm _emit 0x3b __asm _emit 0xc2                   // cmp eax, edx
        __asm _emit 0x75 __asm _emit 0xf4                   // jne -0x0c (loop body)
        __asm _emit 0xc3                                    // ret
    }
}

// [0x00783820] sub_00783820 (32 bytes)
extern "C" __declspec(naked) void __fastcall fn_00783820(void* self) {
    __asm {
        mov eax, dword ptr [ecx]
        xor edx, edx
        cmp eax, edx
        mov dword ptr [ecx + 4], edx
        je done_00783820
    loop_00783820:
        mov dword ptr [eax + 4], edx
        mov eax, dword ptr [eax]
        cmp eax, edx
        jne loop_00783820
    done_00783820:
        ret
    }
}

// [0x00784620] sub_00784620 (32 bytes)
extern "C" __declspec(naked) void __fastcall fn_00784620(void* self) {
    __asm {
        mov edx, dword ptr [esp + 0x4]
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 0x4], ecx
        mov dword ptr [eax + 0x8], ecx
        mov dword ptr [eax + 0xc], edx
        mov byte ptr [eax + 0x10], cl
        ret 0x4
    }
}

// [0x00785450] sub_00785450 (32 bytes)
extern "C" void __fastcall fn_00785450(void* self, int edx_unused, int* src) {
    int* dst = (int*)self;
    dst[4] = src[0];
    dst[5] = src[1];
}

// [0x00785480] sub_00785480 (32 bytes)
extern "C" void __fastcall fn_00785480(void* self, int edx_unused, int* src) {
    int* dst = (int*)self;
    dst[6] = src[0];
    dst[7] = src[1];
}

// [0x007857F0] sub_007857F0 (32 bytes)
extern "C" void __fastcall fn_007857F0(void* self) {
    int* p = (int*)self;
    p[4] = 1;
    p[5] = (int)0x80000000;
    p[6] = -1;
    p[7] = 0x7fffffff;
}

// [0x00788C70] sub_00788C70 (32 bytes)
extern "C" void* __fastcall fn_00788C70(void* self) {
    unsigned int* p = (unsigned int*)self;
    p[0] = 0;
    p[1] = 0;
    p[2] = 0;
    p[3] = 0;
    p[4] = 0;
    p[5] = 0;
    p[6] = 0;
    return self;
}

// [0x00789650] sub_00789650 (32 bytes)
extern "C" __declspec(naked) void __fastcall fn_00789650(void* self) {
    __asm {
        mov eax, ecx
        mov ecx, dword ptr [eax + 8]
        test ecx, ecx
        je short L_null
        mov eax, dword ptr [ecx]
        jmp dword ptr [eax + 36]
L_null:
        mov ecx, dword ptr [eax + 20]
        mov edx, dword ptr [ecx]
        jmp dword ptr [edx + 56]
    }
}

// [0x0078D4C0] sub_0078D4C0 (32 bytes)
extern "C" int __fastcall fn_0078D4C0(void* self, int edx_unused, int a1, int a2) {
    int* row = *(int**)((char*)self + a1 * 24 + 0x10);
    return *(int*)row[a2];
}

// [0x00782F00] sub_00782F00 (32 bytes)
extern "C" void ext_00782F70();
extern "C" __declspec(naked) void* __fastcall fn_00782F00(void* self, int edx_unused, int idx) {
    __asm {
        push esi
        mov esi, ecx
        call ext_00782F70
        mov eax, dword ptr [esi]
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        lea eax, [eax + 8*ecx + 0x4]
        ret 0x4
    }
}

// [0x0078C240] sub_0078C240 (32 bytes)
extern "C" void ext_0078C220();
extern "C" void ext_0078C230();
extern "C" __declspec(naked) void __fastcall fn_0078C240(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        mov esi, ecx
        push eax
        call ext_0078C220
        push eax
        mov ecx, esi
        call ext_0078C230
        pop esi
        ret 0x4
    }
}

// [0x0078C260] sub_0078C260 (32 bytes)
extern "C" int __stdcall ext_0078C240(int a1);

extern "C" int __stdcall fn_0078C260(int a1) {
    int esi = a1;
    return esi - ext_0078C240(esi);
}

// [0x00783860] sub_00783860 (32 bytes)
extern "C" void ext_006D2130();

extern "C" __declspec(naked) void* __fastcall fn_00783860(void* self) {
    __asm {
        push esi
        push 4
        mov esi, ecx
        push 0x10
        call ext_006D2130
        lea eax, [esi + 0x10]
        mov dword ptr [esi + 0x18], 0
        mov dword ptr [esi + 0x14], eax
        mov eax, esi
        pop esi
        ret
    }
}

// [0x00789920] sub_00789920 (32 bytes)
extern "C" void ext_00789980();
extern "C" __declspec(naked) void __fastcall fn_00789920(void* self) {
    __asm {
        cmp dword ptr [ecx + 0xc], 0x1
        jne short not_match
        call ext_00789980
        cmp eax, 0xc704dd7b
        jne short not_match
        mov al, 0x1
        ret
not_match:
        xor al, al
        ret
    }
}

// [0x0078D720] sub_0078D720 (32 bytes)
extern "C" __declspec(naked) void* __fastcall fn_0078D720(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        push 0x4
        mov esi, ecx
        push eax
        call ext_006D2130
        lea ecx, [esi + 0x10]
        mov eax, esi
        mov dword ptr [esi + 0x14], ecx
        pop esi
        ret 0x4
    }
}

// [0x00789C40] sub_00789C40 (32 bytes)
extern "C" __declspec(naked) void __fastcall fn_00789C40(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push 0x0
        push eax
        add ecx, 0x4
        call ext_00782EC0
        ret 0x4
    }
}

// [0x00789C60] sub_00789C60 (32 bytes)
extern "C" __declspec(naked) void __fastcall fn_00789C60(void* self) {
    __asm {
        mov edx, dword ptr [esp + 4]
        lea eax, [esp + 4]
        push eax
        push edx
        add ecx, 4
        call ext_00782EC0
        mov eax, dword ptr [esp + 4]
        ret 4
    }
}

// [0x00789C80] sub_00789C80 (32 bytes)
extern "C" __declspec(naked) void __fastcall fn_00789C80(void* self, int edx_unused, int a1, int a2) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        mov edx, dword ptr [esp + 0x4]
        push eax
        push edx
        add ecx, 0x4
        call ext_00782E70
        ret 0x8
    }
}

// [0x00780130] sub_00780130 (48 bytes)
extern "C" void __fastcall fn_00780130(void* self, int edx_unused, int a1, int a2, int a3) {
    char* p = (char*)self;
    *(int*)(p + 0x124) = a1;
    *(int*)(p + 0x128) = a2;
    *(int*)(p + 0x12c) = a3;
}

// [0x00782B30] sub_00782B30 (48 bytes)
extern "C" __declspec(naked) int __cdecl fn_00782B30(int arg) {
    __asm {
        mov eax, dword ptr [esp + 4]
        sub eax, 0
        je L_zero
        dec eax
        je L_one
        dec eax
        je L_two
        xor eax, eax
        ret
    L_two:
        mov eax, 0xaaf2c4
        ret
    L_one:
        mov eax, 0xaaf2bc
        ret
    L_zero:
        mov eax, 0xaaf2b8
        ret
    }
}

// [0x00782BA0] sub_00782BA0 (48 bytes)
extern "C" __declspec(naked) int __cdecl fn_00782BA0(int arg) {
    __asm {
        mov eax, dword ptr [esp + 4]
        sub eax, 0
        je L_zero
        dec eax
        je L_one
        dec eax
        je L_two
        xor eax, eax
        ret
    L_two:
        mov eax, 0xaaf2ec
        ret
    L_one:
        mov eax, 0xaaf2e4
        ret
    L_zero:
        mov eax, 0xaaf2bc
        ret
    }
}

// [0x00782BD0] sub_00782BD0 (48 bytes)
extern "C" __declspec(naked) int __cdecl fn_00782BD0(int arg) {
    __asm {
        mov eax, dword ptr [esp + 4]
        sub eax, 0
        je L_zero
        dec eax
        je L_one
        dec eax
        je L_two
        xor eax, eax
        ret
    L_two:
        mov eax, 0xaaf2fc
        ret
    L_one:
        mov eax, 0xaaf2f4
        ret
    L_zero:
        mov eax, 0xaaf2bc
        ret
    }
}

// [0x00782C80] sub_00782C80 (48 bytes)
extern "C" __declspec(naked) int __cdecl fn_00782C80(int arg) {
    __asm {
        mov eax, dword ptr [esp + 4]
        sub eax, 0
        je L_zero
        dec eax
        je L_one
        dec eax
        je L_two
        xor eax, eax
        ret
    L_two:
        mov eax, 0xaaf338
        ret
    L_one:
        mov eax, 0xaaf330
        ret
    L_zero:
        mov eax, 0xaaf328
        ret
    }
}

// [0x00782CD0] sub_00782CD0 (48 bytes)
extern "C" __declspec(naked) int __cdecl fn_00782CD0(int arg) {
    __asm {
        mov eax, dword ptr [esp + 4]
        sub eax, 0
        je L_zero
        dec eax
        je L_one
        dec eax
        je L_two
        xor eax, eax
        ret
    L_two:
        mov eax, 0xaaf378
        ret
    L_one:
        mov eax, 0xaaf36c
        ret
    L_zero:
        mov eax, 0xaaf360
        ret
    }
}

// [0x00783540] sub_00783540 (48 bytes)
extern "C" int mem_00925268;
extern "C" __declspec(naked) int __fastcall fn_00783540(void* self, int edx_unused, int a1, int a2) {
    __asm {
        mov eax, dword ptr [ecx + 0x4]
        mov cl, byte ptr [eax + 0x4]
        test cl, cl
        je short L_zero
        mov eax, dword ptr [eax]
        mov ecx, dword ptr [esp + 0x8]
        mov edx, dword ptr [esp + 0x4]
        push eax
        push ecx
        push 0x1
        push edx
        call dword ptr [mem_00925268]
        add esp, 0x10
        ret 0x8
L_zero:
        xor eax, eax
        ret 0x8
    }
}

// [0x007837A0] sub_007837A0 (48 bytes)
extern "C" __declspec(naked) void __fastcall fn_007837A0(void* self) {
    __asm {
        mov eax, dword ptr [ecx + 0x8]
        inc eax
        mov dword ptr [ecx + 0x8], eax
        mov eax, dword ptr [ecx + 0xc]
        inc eax
        mov dword ptr [ecx + 0xc], eax
        mov eax, dword ptr [ecx]
        test eax, eax
        je fn_007837A0_done
    fn_007837A0_loop:
        mov ecx, dword ptr [eax + 0x8]
        inc ecx
        mov dword ptr [eax + 0x8], ecx
        mov ecx, dword ptr [eax + 0xc]
        inc ecx
        mov dword ptr [eax + 0xc], ecx
        mov eax, dword ptr [eax]
        test eax, eax
        jne fn_007837A0_loop
    fn_007837A0_done:
        ret
    }
}

// [0x007837D0] sub_007837D0 (48 bytes)
extern "C" __declspec(naked) void __fastcall fn_007837D0(void* self, int edx_unused, int a1) {
    __asm {
        mov edx, dword ptr [esp + 0x4]
    l_007837D4:
        mov eax, dword ptr [ecx + 0x8]
        cmp edx, eax
        jge l_007837DF
        __asm _emit 0x48
        mov dword ptr [ecx + 0x8], eax
    l_007837DF:
        mov eax, dword ptr [ecx + 0xc]
        cmp edx, eax
        jge l_007837EA
        __asm _emit 0x48
        mov dword ptr [ecx + 0xc], eax
    l_007837EA:
        mov ecx, dword ptr [ecx]
        test ecx, ecx
        jne l_007837D4
        ret 0x4
    }
}

// [0x00784720] sub_00784720 (48 bytes)
extern "C" __declspec(naked) void __fastcall fn_00784720(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi]
        test eax, eax
        je short L_skip_free
        push eax
        call dword ptr [mem_009251D8]
        add esp, 0x4
        mov dword ptr [esi], 0x0
L_skip_free:
        mov dword ptr [esi + 0x4], 0x0
        mov dword ptr [esi + 0x8], 0x0
        mov byte ptr [esi + 0x10], 0x0
        pop esi
        ret
    }
}

// [0x007847B0] sub_007847B0 (48 bytes)
extern "C" __declspec(naked) int __fastcall fn_007847B0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov al, byte ptr [esi + 0x10]
        test al, al
        je loc_7847d5
        mov eax, dword ptr [esi + 0x4]
        mov ecx, dword ptr [esi]
        push 0x784790
        push 0x8
        push eax
        push ecx
        call dword ptr [mem_00925298]
        add esp, 0x10
        mov byte ptr [esi + 0x10], 0x0
    loc_7847d5:
        xor eax, eax
        pop esi
        ret
    }
}

// [0x00788C40] sub_00788C40 (48 bytes)
extern "C" void ext_007857F0();
extern "C" void __fastcall fn_00788C40(void* self) {
    unsigned char* p = (unsigned char*)self;
    *(unsigned char*)(p + 0x78) = 1;
    *(unsigned int*)(p + 0x10) = 1;
    *(unsigned int*)(p + 0x14) = 0x80000000u;
    *(unsigned int*)(p + 0x18) = 0xffffffffu;
    *(unsigned int*)(p + 0x1c) = 0x7fffffffu;
    ext_007857F0();
}

extern "C" int mem_0092416C; /* u32 0x0062D568 */
extern "C" int mem_00924170; /* u32 0x0062D578 */

// [0x00788DF0] sub_00788DF0 (48 bytes)
extern "C" __declspec(naked) unsigned char __fastcall fn_00788DF0(void* self) {
    __asm {
        push ebx
        push esi
        push edi
        mov edi, dword ptr [mem_0092416C]
        mov esi, ecx
        push 1
        xor bl, bl
        call edi
        mov ecx, dword ptr [esi]
        lea eax, [esi + 0x4]
        push eax
        push ecx
        call dword ptr [mem_00924170]
        test eax, eax
        je short L_788E14_fn00788DF0
        mov bl, 0x1
L_788E14_fn00788DF0:
        push 0
        call edi
        pop edi
        mov al, bl
        pop esi
        pop ebx
        ret
    }
}

extern "C" int mem_009241CC; /* u32 0x00628198 */

// [0x00788E20] sub_00788E20 (48 bytes)
extern "C" __declspec(naked) void __fastcall fn_00788E20(void* self) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [mem_0092416C]
        mov esi, ecx
        push 1
        call edi
        mov eax, dword ptr [esi]
        push eax
        call dword ptr [mem_009241CC]
        push 0
        mov dword ptr [esi], 0
        call edi
        mov byte ptr [esi + 0x654], 0
        pop edi
        pop esi
        ret
    }
}

// [0x00788E50] sub_00788E50 (48 bytes)
extern "C" int mem_009241F8;
extern "C" __declspec(naked) char* __fastcall fn_00788E50(void* self) {
    __asm {
        push esi
        push 0x0
        lea esi, [ecx + 0x254]
        push 0x0
        push 0x400
        push esi
        add ecx, 0x30
        push -0x1
        push ecx
        push 0x0
        push 0xfde9
        call dword ptr [mem_009241F8]
        mov eax, esi
        pop esi
        ret
    }
}

// [0x00789590] sub_00789590 (48 bytes)
// [0x00789590]
extern "C" __declspec(naked) void __fastcall fn_00789590(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 8]
        test ecx, ecx
        je short L_else_00789590
        mov eax, dword ptr [ecx]
        call dword ptr [eax + 10h]
        mov dword ptr [esi + 0Ch], 0
        pop esi
        ret
L_else_00789590:
        mov ecx, dword ptr [esi + 14h]
        mov edx, dword ptr [ecx]
        call dword ptr [edx + 0Ch]
        mov dword ptr [esi + 0Ch], 0
        pop esi
        ret
    }
}

// [0x0078C410] sub_0078C410 (48 bytes)
extern "C" __declspec(naked) void __fastcall fn_0078C410(void* self) {
    __asm {
        mov eax, dword ptr [ecx + 0x20]
        test eax, eax
        je ret53
        mov edx, dword ptr [esp + 0x4]
        push esi
        mov esi, dword ptr [ecx + 0x28]
        cmp edx, esi
        pop esi
        jge ret53
        mov ecx, dword ptr [ecx + 0x2c]
        mov edx, dword ptr [ecx + 4*edx]
        mov al, byte ptr [edx + eax - 1]
        ret 4
ret53:
        mov al, 0x53
        ret 4
    }
}

// [0x0078D4E0] sub_0078D4E0 (48 bytes)
extern "C" __declspec(naked) void* __fastcall fn_0078D4E0(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        mov edx, dword ptr [esp + 0x8]
        lea eax, [eax + 2*eax]
        mov ecx, dword ptr [ecx + 8*eax + 0x10]
        mov eax, dword ptr [ecx + 4*edx]
        mov ecx, dword ptr [esp + 0xc]
        shl ecx, 0x4
        mov eax, dword ptr [eax + 0x10]
        add eax, ecx
        ret 0xc
    }
}

// [0x0078CA30] sub_0078CA30 (48 bytes)
extern "C" void ext_006D2130();
extern "C" __declspec(naked) void __fastcall fn_0078CA30(void* self) {
    __asm {
        push esi
        push 4
        mov esi, ecx
        push 0x10
        call ext_006D2130
        lea eax, [esi + 0x10]
        mov dword ptr [esi + 0x18], 0xffffffff
        mov dword ptr [esi + 0x14], eax
        mov dword ptr [esi + 0x1c], 0
        mov eax, esi
        pop esi
        ret
    }
}

extern "C" void ext_006BC380();
extern "C" void ext_00789C40();

// [0x00789BB0] sub_00789BB0 (48 bytes)
extern "C" __declspec(naked) void __fastcall fn_00789BB0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        push edi
        mov eax, dword ptr [esi]
        cmp eax, -1
        jle short L_none
        mov edi, eax
        call ext_006BC380
        cmp edi, eax
        jge short L_none
        push edi
        mov ecx, esi
        call ext_00789C40
        pop edi
        pop esi
        ret
L_none:
        pop edi
        xor eax, eax
        pop esi
        ret
    }
}

// [0x0078CB90] sub_0078CB90 (48 bytes)
extern "C" void ext_006E7460();
extern "C" void ext_0078CB70();
extern "C" __declspec(naked) int __fastcall fn_0078CB90(void* self) {
    __asm {
        push esi
        mov esi, ecx
        push edi
        mov eax, dword ptr [esi + 0x18]
        cmp eax, -1
        jle short L_ret0
        mov edi, eax
        call ext_006E7460
        cmp edi, eax
        jge short L_ret0
        push edi
        mov ecx, esi
        call ext_0078CB70
        pop edi
        pop esi
        ret
L_ret0:
        pop edi
        xor eax, eax
        pop esi
        ret
    }
}

// [0x0078CBE0] sub_0078CBE0 (48 bytes)
extern "C" void ext_006E7460();
extern "C" void ext_0078CB70();
extern "C" __declspec(naked) int __fastcall fn_0078CBE0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        push edi
        mov eax, dword ptr [esi + 0x1c]
        cmp eax, -1
        jle short L_ret0
        mov edi, eax
        call ext_006E7460
        cmp edi, eax
        jge short L_ret0
        push edi
        mov ecx, esi
        call ext_0078CB70
        pop edi
        pop esi
        ret
L_ret0:
        pop edi
        xor eax, eax
        pop esi
        ret
    }
}

// [0x00784DD0] sub_00784DD0 (48 bytes)
extern "C" __declspec(naked) void __stdcall fn_00784DD0(void* a1, void* a2, void* a3, void* a4) {
    __asm {
        mov eax, dword ptr [esp + 8]
        mov ecx, dword ptr [esp + 4]
        push 0
        push eax
        call ext_00782E70
        test eax, eax
        je fn_00784DD0_fail
        mov ecx, dword ptr [esp + 0xc]
        push 0
        push ecx
        mov ecx, eax
        call ext_00782E70
        test eax, eax
        jne fn_00784DD0_done
fn_00784DD0_fail:
        mov eax, dword ptr [esp + 0x10]
fn_00784DD0_done:
        ret 0x10
    }
}

// [0x0078BFD0] sub_0078BFD0 (48 bytes)
extern "C" void __cdecl ext_0078B450(void* a1, void* a2, int a3, int a4, int a5);
extern "C" __declspec(naked) void __fastcall fn_0078BFD0(void* self, int edx_unused, int a1, int a2) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        mov edx, dword ptr [esp + 0x4]
        push eax
        push 0x80
        lea eax, [ecx + 0x74]
        push edx
        add ecx, 0x4c
        push eax
        push ecx
        call ext_0078B450
        add esp, 0x14
        ret 0x8
    }
}

// [0x0078C000] sub_0078C000 (48 bytes)
extern "C" void ext_0078B750();
extern "C" __declspec(naked) void __fastcall fn_0078C000(void* self, int edx_unused, int a1, int a2) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        mov edx, dword ptr [esp + 0x4]
        push eax
        push 0x80
        lea eax, [ecx + 0x74]
        push edx
        add ecx, 0x4c
        push eax
        push ecx
        call ext_0078B750
        add esp, 0x14
        ret 0x8
    }
}

// [0x0078CD00] sub_0078CD00 (48 bytes)
extern "C" __declspec(naked) void __fastcall fn_0078CD00(void* self) {
    __asm {
        mov eax, dword ptr [mem_00B60DBC]
        push esi
        push edi
        xor esi, esi
        mov edi, dword ptr [eax]
        test edi, edi
        jle loc_78CD25
    loc_78CD0F:
        mov ecx, dword ptr [mem_00B60DBC]
        mov edx, dword ptr [ecx + 0x10]
        mov ecx, dword ptr [edx + 4*esi]
        call ext_0078CEF0
        inc esi
        cmp esi, edi
        jl loc_78CD0F
    loc_78CD25:
        pop edi
        pop esi
        ret
    }
}

// [0x0078ABA0] sub_0078ABA0 (48 bytes)
extern "C" void ext_00789AD0();
extern "C" __declspec(naked) void __fastcall fn_0078ABA0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr [esi + 0x3c]
        test edi, edi
        je done
        mov ecx, edi
        call ext_00789AD0
        push edi
        call ext_006A5C5C
        add esp, 4
done:
        mov dword ptr [esi + 0x3c], 0
        mov eax, esi
        pop edi
        pop esi
        ret
    }
}

// [0x007873F0] sub_007873F0 (64 bytes)
extern "C" void* __fastcall fn_007873F0(void* self, int edx_unused, const int* src) {
    int* dst = (int*)self;
    dst[0] = src[0];
    dst[1] = src[1];
    dst[2] = src[2];
    dst[3] = src[3];
    dst[4] = src[4];
    dst[5] = src[5];
    dst[6] = src[6];
    dst[7] = src[7];
    return self;
}

// [0x00789940] sub_00789940 (64 bytes)
extern "C" __declspec(naked) void __fastcall fn_00789940(void* self) {
    __asm {
        xor edx, edx
        push esi
        add ecx, 0x18
    fn_00789940_outer:
        mov eax, edx
        mov esi, 0x8
        shl eax, 0x18
    fn_00789940_inner:
        test eax, 0x80000000
        je fn_00789940_shl
        add eax, eax
        xor eax, 0x04C11DB7
        jmp fn_00789940_next
    fn_00789940_shl:
        shl eax, 1
    fn_00789940_next:
        dec esi
        jne fn_00789940_inner
        mov dword ptr [ecx], eax
        inc edx
        add ecx, 0x4
        cmp edx, 0x100
        jl fn_00789940_outer
        pop esi
        ret
    }
}

// [0x007892B0] sub_007892B0 (64 bytes)
extern "C" __declspec(naked) void __fastcall fn_007892B0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x8]
        mov dword ptr [esi], 0x996fa0
        test ecx, ecx
        je L_skip1
        mov al, byte ptr [esi + 0x10]
        test al, al
        je L_clear1
        test ecx, ecx
        je L_clear1
        mov eax, dword ptr [ecx]
        push 0x1
        call dword ptr [eax]
    L_clear1:
        mov dword ptr [esi + 0x8], 0x0
    L_skip1:
        mov ecx, dword ptr [esi + 0x14]
        test ecx, ecx
        je L_done
        mov edx, dword ptr [ecx]
        push 0x1
        call dword ptr [edx]
        mov dword ptr [esi + 0x14], 0x0
    L_done:
        pop esi
        ret
    }
}

// [0x00780090] sub_00780090 (64 bytes)
extern "C" __declspec(naked) void __fastcall fn_00780090(void* self) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        push edi
        mov edi, dword ptr [esp + 0x10]
        mov dword ptr [ecx], eax
        lea edx, [ecx + 0x4]
        or ecx, -0x1
        xor eax, eax
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        mov esi, edi
        mov edi, edx
        shr ecx, 0x2
        rep movsd
        mov ecx, eax
        and ecx, 0x3
        rep movsb
        pop edi
        pop esi
        ret 0x8
    }
}

// [0x0078D510] sub_0078D510 (64 bytes)
extern "C" __declspec(naked) int __fastcall fn_0078D510(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        mov eax, dword ptr [esp + 4]
        mov edx, dword ptr [esp + 8]
        push esi
        lea eax, [eax + 2*eax]
        mov ecx, dword ptr [ecx + 8*eax + 10h]
        xor eax, eax
        mov edx, dword ptr [ecx + 4*edx]
        mov ecx, dword ptr [edx]
        test ecx, ecx
        jle short L_end
        mov edx, dword ptr [edx + 10h]
        mov esi, dword ptr [esp + 10h]
    L_loop:
        cmp dword ptr [edx], esi
        je short L_done
        inc eax
        add edx, 10h
        cmp eax, ecx
        jl short L_loop
    L_end:
        or eax, -1
    L_done:
        pop esi
        ret 0Ch
    }
}

// [0x00782EC0] sub_00782EC0 (64 bytes)
extern "C" void ext_00782F70();

extern "C" __declspec(naked) unsigned int __fastcall fn_00782EC0(void* self, int edx_unused, int idx, unsigned int* out) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        mov esi, ecx
        test edi, edi
        jl fail
        cmp edi, dword ptr [esi + 0x4]
        jge fail
        call ext_00782F70
        mov eax, dword ptr [esp + 0x10]
        test eax, eax
        je skip
        mov ecx, dword ptr [esi]
        mov edx, dword ptr [ecx + 8*edi]
        mov dword ptr [eax], edx
    skip:
        mov eax, dword ptr [esi]
        mov eax, dword ptr [eax + 8*edi + 0x4]
        pop edi
        pop esi
        ret 8
    fail:
        pop edi
        xor eax, eax
        pop esi
        ret 8
    }
}

// [0x007839B0] sub_007839B0 (64 bytes)
extern "C" __declspec(naked) void __fastcall fn_007839B0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        push edi
        xor edi, edi
        cmp dword ptr [esi], 0
        jle L_after_loop
    L_loop_top:
        mov eax, dword ptr [esi + 0x10]
        mov ecx, dword ptr [eax + 4*edi]
        push ecx
        call ext_006A5C5C
        mov eax, dword ptr [esi]
        add esp, 4
        inc edi
        cmp edi, eax
        jl L_loop_top
    L_after_loop:
        mov ecx, esi
        call ext_006D2250
        mov ecx, dword ptr [esi + 0x18]
        pop edi
        test ecx, ecx
        pop esi
        je L_skip
        call ext_00783800
    L_skip:
        xor eax, eax
        ret
    }
}

// [0x007833B0] sub_007833B0 (64 bytes)
extern "C" void ext_00783160();
extern "C" void ext_006B9EC0();
extern "C" __declspec(naked) void __fastcall fn_007833B0(void* self, int edx_unused, int a1, int a2) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr [esp + 0xc]
        push eax
        mov ecx, dword ptr [esi + 0x4]
        push edi
        push ecx
        call ext_00783160
        mov edx, dword ptr [esi + 0x4]
        add esp, 0xc
        lea ecx, [esi + 0xc]
        push edi
        mov byte ptr [edx + 0x4], al
        call ext_006B9EC0
        mov eax, dword ptr [esi + 0x4]
        pop edi
        pop esi
        mov al, byte ptr [eax + 0x4]
        ret 0x8
    }
}

// [0x00782E30] sub_00782E30 (64 bytes)
extern "C" __declspec(naked) bool __fastcall fn_00782E30(void* self, int edx_unused, int a1) {
    __asm {
        push ecx
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 0xc]
        lea eax, [esp + 0x4]
        push eax
        push ecx
        mov ecx, esi
        mov dword ptr [esp + 0xc], 0x0
        call ext_00782E70
        test eax, eax
        je fail_00782E30
        mov edx, dword ptr [esp + 0x4]
        mov ecx, esi
        push edx
        call ext_00782F20
        mov al, 0x1
        pop esi
        pop ecx
        ret 0x4
    fail_00782E30:
        xor al, al
        pop esi
        pop ecx
        ret 0x4
    }
}

// [0x007857A0] sub_007857A0 (80 bytes)
extern "C" __declspec(naked) void __fastcall fn_007857A0(void* self, int edx_unused, int a1, int a2) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        push ebx
        push esi
        mov esi, ecx
        test eax, eax
        mov bl, 0x1
        jle short L_exit
        push ebp
        push edi
        mov edi, dword ptr [esp + 0x14]
        mov ebp, eax
L_loop:
        test bl, bl
        je short L_path2
        mov ecx, dword ptr [edi]
        mov eax, dword ptr [esi]
        push ecx
        mov ecx, esi
        call dword ptr [eax + 0x10]
        jmp short L_next
L_path2:
        mov eax, dword ptr [edi]
        mov edx, dword ptr [esi]
        push eax
        mov ecx, esi
        call dword ptr [edx + 0x10]
        mov bl, al
L_next:
        add edi, 0x4
        dec ebp
        jne short L_loop
        pop edi
        pop ebp
        mov al, bl
        pop esi
        pop ebx
        ret 0x8
L_exit:
        mov al, bl
        pop esi
        pop ebx
        ret 0x8
    }
}

// [0x00782F20] sub_00782F20 (80 bytes)
extern "C" void ext_00782F70();
extern "C" int mem_009251D8; /* "&|b" */
extern "C" int mem_0092528C; /* u32 0x0062D370 */
extern "C" __declspec(naked) void __fastcall fn_00782F20(void* self, int edx_unused, int a1) {
    __asm {
        push ebx
        push esi
        push edi
        mov esi, ecx
        call ext_00782F70
        mov edi, dword ptr [esi + 0xc]
        mov ebx, dword ptr [esp + 0x10]
        imul edi, dword ptr [esi + 0x8]
        mov eax, dword ptr [esi]
        sub edi, ebx
        dec edi
        mov ecx, dword ptr [eax + ebx*8]
        push ecx
        call dword ptr [mem_009251D8]
        mov eax, dword ptr [esi]
        lea edx, [edi*8]
        push edx
        lea ecx, [eax + ebx*8 + 0x8]
        lea edx, [eax + ebx*8]
        push ecx
        push edx
        call dword ptr [mem_0092528C]
        mov eax, dword ptr [esi + 0x4]
        add esp, 0x10
        dec eax
        mov dword ptr [esi + 0x4], eax
        pop edi
        pop esi
        pop ebx
        ret 0x4
    }
}

// [0x0078C1D0] sub_0078C1D0 (80 bytes)
extern "C" __declspec(naked) void __fastcall fn_0078C1D0(void* self) {
    __asm {
        push esi
        push edi
        mov esi, ecx
        call ext_00789650
        push 0
        push 2
        mov ecx, esi
        mov edi, eax
        call ext_00789620
        mov ecx, esi
        call ext_00789650
        cmp eax, dword ptr [esi + 4]
        jae short L_big
        push edi
        mov ecx, esi
        mov dword ptr [esi + 0x28], 0xffffffff
        call ext_00789670
        pop edi
        pop esi
        ret
L_big:
        dec eax
        mov ecx, esi
        push eax
        call ext_0078C220
        push edi
        mov ecx, esi
        mov dword ptr [esi + 0x28], eax
        call ext_00789670
        pop edi
        pop esi
        ret
    }
}

// [0x0078C030] sub_0078C030 (80 bytes)
extern "C" void ext_0078C150();
extern "C" __declspec(naked) void __fastcall fn_0078C030(void* self, int edx_unused, int a1, int a2, int a3, int a4) {
    __asm {
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr [esp + 0xc]
        cmp edi, dword ptr [esi + 0x28]
        jle short L_cont
        pop edi
        xor al, al
        pop esi
        ret 0x10
L_cont:
        cmp edi, dword ptr [esi + 0x20]
        je short L_same
        push edi
        mov ecx, esi
        call ext_0078C150
        mov dword ptr [esi + 0x20], edi
L_same:
        mov ecx, dword ptr [esp + 0x14]
        mov eax, dword ptr [esp + 0x10]
        mov edi, dword ptr [esp + 0x18]
        mov edx, ecx
        lea esi, [eax + esi + 0x2c]
        mov al, 1
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        pop edi
        pop esi
        ret 0x10
    }
}

// [0x00784110] sub_00784110 (80 bytes)
extern "C" void ext_0071E680();
extern "C" void ext_007841B0();

extern "C" __declspec(naked) void __fastcall fn_00784110(void* self, int edx_unused, int a1) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0x8]
        push ebp
        push edi
        mov eax, dword ptr [ebx + 0xc0]
        xor edi, edi
        test eax, eax
        mov ebp, ecx
        jle L_end
        push esi
L_loop:
        mov eax, dword ptr [ebx + 0xd0]
        mov esi, dword ptr [eax + 4*edi]
        mov ecx, esi
        call ext_0071E680
        mov ecx, dword ptr [eax]
        shr ecx, 0x4
        test cl, 0x1
        je L_skip
        push esi
        mov ecx, ebp
        call ext_007841B0
L_skip:
        mov eax, dword ptr [ebx + 0xc0]
        inc edi
        cmp edi, eax
        jl L_loop
        pop esi
L_end:
        pop edi
        pop ebp
        pop ebx
        ret 0x4
    }
}

// [0x00783AF0] sub_00783AF0 (80 bytes)
extern "C" int mem_008C1C88;
extern "C" void ext_006B9D70();
extern "C" void ext_00783B40();
extern "C" __declspec(naked) void __fastcall fn_00783AF0(void* self) {
    __asm {
        push -1
        push offset mem_008C1C88
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        mov dword ptr [esp + 0x10], 0
        call ext_00783B40
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

// [0x00783D60] sub_00783D60 (80 bytes)
extern "C" void ext_007AD5E0();
extern "C" void ext_007ADDF0();

extern "C" __declspec(naked) void* __fastcall fn_00783D60(void* self, int edx_unused, void* a1, int a2, int a3) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0x8]
        push esi
        push edi
        mov edi, dword ptr [ebx]
        mov esi, ecx
        test edi, edi
        je L1
        cmp dword ptr [edi + 0x8], 0x1
        jle L1
        mov ecx, ebx
        call ext_007ADDF0
        mov eax, dword ptr [ebx]
        sub eax, edi
        sar eax, 0x2
        lea esi, [esi + 4*eax]
L1:
        mov ecx, dword ptr [esi]
        cmp dword ptr [ecx + 0x8], 0x1
        jle L2
        mov ecx, esi
        call ext_007AD5E0
L2:
        mov edx, dword ptr [esi]
        mov ecx, dword ptr [esp + 0x14]
        mov eax, dword ptr [esp + 0x18]
        pop edi
        mov dword ptr [edx + 4*ecx + 0xc], eax
        mov eax, esi
        pop esi
        pop ebx
        ret 0xc
    }
}

// [0x00782E70] sub_00782E70 (80 bytes)
extern "C" void ext_00782F70();
extern "C" void ext_00783020();
extern "C" __declspec(naked) void __fastcall fn_00782E70(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push esi
        mov esi, ecx
        call ext_00782F70
        mov eax, dword ptr [esp + 0x8]
        mov ecx, esi
        push eax
        call ext_00783020
        test eax, eax
        je short L_fail
        mov ecx, dword ptr [esp + 0xc]
        test ecx, ecx
        je short L_ret
        push edi
        mov edi, dword ptr [esi]
        mov edx, eax
        sub edx, edi
        pop edi
        shr edx, 0x3
        mov dword ptr [ecx], edx
L_ret:
        mov eax, dword ptr [eax + 0x4]
        pop esi
        ret 0x8
L_fail:
        mov eax, dword ptr [esp + 0xc]
        test eax, eax
        je short L_zero
        mov dword ptr [eax], 0xffffffff
L_zero:
        xor eax, eax
        pop esi
        ret 0x8
    }
}

// [0x00784160] sub_00784160 (80 bytes)
extern "C" void ext_0071E680();
extern "C" void ext_007842E0();

extern "C" __declspec(naked) void __fastcall fn_00784160(void* self, int edx_unused, int a1) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0x8]
        push ebp
        push edi
        mov eax, dword ptr [ebx + 0xc0]
        xor edi, edi
        test eax, eax
        mov ebp, ecx
        jle short L_end
        push esi
L_loop:
        mov eax, dword ptr [ebx + 0xd0]
        mov esi, dword ptr [eax + 4*edi]
        mov ecx, esi
        call ext_0071E680
        mov ecx, dword ptr [eax]
        shr ecx, 0x4
        test cl, 0x1
        je short L_skip
        push esi
        mov ecx, ebp
        call ext_007842E0
L_skip:
        mov eax, dword ptr [ebx + 0xc0]
        inc edi
        cmp edi, eax
        jl short L_loop
        pop esi
L_end:
        pop edi
        pop ebp
        pop ebx
        ret 0x4
    }
}

// [0x007846D0] sub_007846D0 (80 bytes)
extern "C" void ext_007847B0();
extern "C" void ext_007847E0();
extern "C" __declspec(naked) void __fastcall fn_007846D0(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push esi
        mov esi, ecx
        call ext_007847B0
        mov eax, dword ptr [esp + 0x8]
        mov ecx, esi
        push eax
        call ext_007847E0
        test eax, eax
        je short L_fail
        mov ecx, dword ptr [esp + 0xc]
        test ecx, ecx
        je short L_ok
        push edi
        mov edi, dword ptr [esi]
        mov edx, eax
        sub edx, edi
        pop edi
        shr edx, 0x3
        mov dword ptr [ecx], edx
L_ok:
        mov eax, dword ptr [eax + 0x4]
        pop esi
        ret 0x8
L_fail:
        mov eax, dword ptr [esp + 0xc]
        test eax, eax
        je short L_zero
        mov dword ptr [eax], 0xffffffff
L_zero:
        xor eax, eax
        pop esi
        ret 0x8
    }
}

// [0x007800D0] sub_007800D0 (96 bytes)
extern "C" void __fastcall fn_007800D0(void* self, int edx_unused, int a1, int a2, int a3, int a4, int a5, int a6, int a7, unsigned char a8, unsigned char a9) {
    char* p = (char*)self;
    *(int*)(p + 0x104) = a1;
    *(int*)(p + 0x108) = a2;
    *(int*)(p + 0x10c) = a3;
    *(int*)(p + 0x110) = a4;
    *(int*)(p + 0x114) = a5;
    *(int*)(p + 0x118) = a6;
    *(int*)(p + 0x11c) = a7;
    *(unsigned char*)(p + 0x120) = a9;
    *(unsigned char*)(p + 0x121) = a8;
}

// [0x00782D30] sub_00782D30 (96 bytes)
extern "C" int mem_009251D8;
extern "C" __declspec(naked) void __fastcall fn_00782D30(void* self) {
    __asm {
        push esi
        mov esi, ecx
        cmp dword ptr [esi], 0x0
        je short L_clear
        mov eax, dword ptr [esi + 0x4]
        push ebp
        mov ebp, dword ptr [mem_009251D8]
        push edi
        xor edi, edi
        test eax, eax
        jle short L_freeArr
L_loop:
        mov eax, dword ptr [esi]
        mov ecx, dword ptr [eax + 8*edi]
        push ecx
        call ebp
        mov edx, dword ptr [esi]
        add esp, 0x4
        mov dword ptr [edx + 8*edi], 0x0
        mov eax, dword ptr [esi + 0x4]
        inc edi
        cmp edi, eax
        jl short L_loop
L_freeArr:
        mov eax, dword ptr [esi]
        push eax
        call ebp
        add esp, 0x4
        mov dword ptr [esi], 0x0
        pop edi
        pop ebp
L_clear:
        mov dword ptr [esi + 0x4], 0x0
        mov dword ptr [esi + 0x8], 0x0
        mov byte ptr [esi + 0x10], 0x0
        pop esi
        ret
    }
}

// [0x00783D00] sub_00783D00 (96 bytes)
extern "C" int mem_00B6167C;
extern "C" __declspec(naked) void __fastcall fn_00783D00(void* self, int edx_unused, int* out) {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr [edi]
        mov esi, dword ptr [eax + 0x4]
        dec esi
        js L_zero
        lea eax, [eax + 4*esi + 0xc]
L_loop:
        cmp dword ptr [eax], 0x0
        jne L_found
        dec esi
        sub eax, 0x4
        test esi, esi
        jge L_loop
L_zero:
        pop edi
        xor al, al
        pop esi
        mov esp, ebp
        pop ebp
        ret 0x4
L_found:
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 0x4], eax
        mov ecx, dword ptr [ebp - 0x4]
        xor eax, eax
        bsr edx, ecx
        setne al
        dec eax
        or eax, edx
        mov ecx, dword ptr [edi]
        pop edi
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [mem_00B6167C]
        add edx, esi
        pop esi
        shl edx, cl
        add edx, eax
        mov eax, dword ptr [ebp + 0x8]
        mov dword ptr [eax], edx
        mov al, 0x1
        mov esp, ebp
        pop ebp
        ret 0x4
    }
}

// [0x0078C690] sub_0078C690 (96 bytes)
extern "C" int mem_009251E4;
extern "C" __declspec(naked) int __fastcall fn_0078C690(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push ebp
        mov ebp, esp
        mov eax, dword ptr [ecx + 0x20]
        test eax, eax
        je short L_alt
        mov edx, dword ptr [ebp + 0x8]
        push esi
        mov esi, dword ptr [ecx + 0x28]
        cmp edx, esi
        pop esi
        jge short L_zero
        mov ecx, dword ptr [ecx + 0x2c]
        mov edx, dword ptr [ecx + 4*edx]
        mov cl, byte ptr [ebp + 0xc]
        test cl, cl
        mov eax, dword ptr [edx + eax]
        mov dword ptr [ebp + 0x8], eax
        je short L_ret
        mov eax, dword ptr [ebp + 0x8]
        bswap eax
        pop ebp
        ret 0x8
L_alt:
        mov eax, dword ptr [ebp + 0x8]
        mov edx, dword ptr [ecx + 0x4]
        cmp eax, edx
        jge short L_zero
        mov ecx, dword ptr [ecx + 0x14]
        mov edx, dword ptr [ecx + 4*eax]
        push edx
        call dword ptr [mem_009251E4]
        add esp, 0x4
        pop ebp
        ret 0x8
L_zero:
        xor eax, eax
L_ret:
        pop ebp
        ret 0x8
    }
}

// [0x0078C8C0] sub_0078C8C0 (96 bytes)
extern "C" __declspec(naked) void __fastcall fn_0078C8C0(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        push ebp
        mov ebp, esp
        push esi
        mov esi, dword ptr [ebp + 0x10]
        push edi
        mov dword ptr [esi], 0x0
        mov eax, dword ptr [ecx + 0x20]
        test eax, eax
        je short L_fail
        mov edx, dword ptr [ebp + 0x8]
        mov edi, dword ptr [ecx + 0x28]
        cmp edx, edi
        jge short L_fail
        mov edi, dword ptr [ecx + 0x2c]
        push ebx
        mov bl, byte ptr [ebp + 0xc]
        mov edi, dword ptr [edi + 4*edx]
        test bl, bl
        mov eax, dword ptr [edi + eax]
        pop ebx
        mov dword ptr [ebp + 0x10], eax
        je short L_noswap
        mov eax, dword ptr [ebp + 0x10]
        bswap eax
L_noswap:
        test eax, eax
        je short L_fail
        mov dword ptr [esi], eax
        mov eax, dword ptr [ecx + 0x2c]
        pop edi
        pop esi
        mov edx, dword ptr [eax + 4*edx]
        mov eax, dword ptr [ecx + 0x20]
        lea eax, [edx + eax + 0x4]
        pop ebp
        ret 0xc
L_fail:
        pop edi
        xor eax, eax
        pop esi
        pop ebp
        ret 0xc
    }
}

// [0x00780030] sub_00780030 (96 bytes)
extern "C" void ext_006A5C62();
extern "C" void ext_0077FFD0();

extern "C" __declspec(naked) void __fastcall fn_00780030(void* self, int edx_unused, int a1) {
    __asm {
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x10]
        mov ebx, ecx
        lea eax, [esi + 8*esi]
        mov dword ptr [ebx], esi
        lea ecx, [esi + 2*eax]
        shl ecx, 0x4
        push ecx
        call ext_006A5C62
        mov ebp, eax
        add esp, 0x4
        test ebp, ebp
        je short L_null
        lea eax, [esi - 0x1]
        push edi
        test eax, eax
        mov edi, ebp
        jl short L_done
        lea esi, [eax + 0x1]
L_loop:
        mov ecx, edi
        call ext_0077FFD0
        add edi, 0x130
        dec esi
        jne short L_loop
L_done:
        pop edi
        mov dword ptr [ebx + 0x4], ebp
        pop esi
        mov eax, ebx
        pop ebp
        pop ebx
        ret 0x4
L_null:
        xor eax, eax
        pop esi
        mov dword ptr [ebx + 0x4], eax
        mov eax, ebx
        pop ebp
        pop ebx
        ret 0x4
    }
}

// [0x00783880] sub_00783880 (96 bytes)
extern "C" void ext_006D2160();
extern "C" void ext_00783820();
extern "C" void ext_007839B0();
extern "C" __declspec(naked) void __fastcall fn_00783880(void* self) {
    __asm {
        push -1
        push 0x8c1558
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        mov dword ptr [esp + 0x10], 0
        call ext_007839B0
        mov ecx, dword ptr [esi + 0x18]
        test ecx, ecx
        je short L_skip
        call ext_00783820
L_skip:
        mov ecx, esi
        mov dword ptr [esp + 0x10], -1
        call ext_006D2160
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x007838E0] sub_007838E0 (96 bytes)
extern "C" void ext_006A5C62();
extern "C" void ext_006D2170();
extern "C" void ext_007837A0();
extern "C" void ext_00783840();
extern "C" __declspec(naked) void __fastcall fn_007838E0(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        push esi
        mov esi, ecx
        push 0x10
        call ext_006A5C62
        add esp, 0x4
        test eax, eax
        je short L_zero
        mov ecx, dword ptr [esp + 0x10]
        mov edx, dword ptr [esp + 0xc]
        push ecx
        mov ecx, dword ptr [esp + 0xc]
        push 0x0
        push edx
        push ecx
        mov ecx, eax
        call ext_00783840
        jmp short L_join
L_zero:
        xor eax, eax
L_join:
        lea edx, [esp + 0x10]
        mov ecx, esi
        push edx
        push 0x0
        mov dword ptr [esp + 0x18], eax
        call ext_006D2170
        mov ecx, dword ptr [esi + 0x18]
        pop esi
        test ecx, ecx
        je short L_end
        call ext_007837A0
L_end:
        xor eax, eax
        ret 0xc
    }
}

// [0x0078D2D0] sub_0078D2D0 (96 bytes)
extern "C" void ext_006A6D5C();
extern "C" void ext_0078D6B0();
extern "C" __declspec(naked) void __fastcall fn_0078D2D0(void* self) {
    __asm {
        push -1
        push 0x008c17a3
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        mov dword ptr [esp + 0x10], 0
        call ext_0078D6B0
        push 0x0074adf0
        push 2
        push 0x18
        push esi
        mov dword ptr [esp + 0x20], 0xffffffff
        call ext_006A6D5C
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x0078C080] sub_0078C080 (96 bytes)
extern "C" void ext_0078C0E0();
extern "C" void ext_0078C150();
extern "C" __declspec(naked) void __fastcall fn_0078C080(void* self, int edx_unused, int a1, int a2, int a3, int a4) {
    __asm {
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x10]
        mov ebx, dword ptr [esp + 0x18]
        mov ebp, dword ptr [esp + 0x14]
        push edi
        mov edi, ecx
        mov eax, dword ptr [edi + 0x20]
        cmp esi, eax
        je L_skip
        cmp eax, -1
        je L_a
        push eax
        call ext_0078C0E0
L_a:
        test ebp, ebp
        jne L_b
        cmp ebx, 0x10
        jge L_c
L_b:
        push esi
        mov ecx, edi
        call ext_0078C150
L_c:
        mov dword ptr [edi + 0x20], esi
L_skip:
        mov esi, dword ptr [esp + 0x20]
        mov ecx, ebx
        mov eax, ecx
        lea edi, [edi + ebp + 0x2c]
        shr ecx, 2
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x10
    }
}

// [0x0078D740] sub_0078D740 (96 bytes)
extern "C" void ext_006A5C62();
extern "C" void ext_0078D7A0();

extern "C" __declspec(naked) void __fastcall fn_0078D740(void* self) {
    __asm {
        push -1
        push 0x008b8fdb
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push 0x250
        call ext_006A5C62
        add esp, 4
        __asm _emit 0x89 __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x00
        test eax, eax
        mov dword ptr [esp + 0xc], 0
        je short L_null
        mov ecx, eax
        call ext_0078D7A0
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

// [0x00789BE0] sub_00789BE0 (96 bytes)
extern "C" void ext_00789AD0();
extern "C" void ext_00789C40();
extern "C" void ext_0078CB80();
extern "C" void ext_006BC380();
extern "C" void ext_006A5C5C();
extern "C" __declspec(naked) void __fastcall fn_00789BE0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr [esi + 0x3c]
        test edi, edi
        je short L_skip1
        mov ecx, edi
        call ext_00789AD0
        push edi
        call ext_006A5C5C
        add esp, 0x4
L_skip1:
        mov ecx, esi
        mov dword ptr [esi + 0x3c], 0x0
        mov dword ptr [esi], 0x0
        xor edi, edi
        call ext_006BC380
        test eax, eax
        jle short L_end
L_loop:
        push edi
        mov ecx, esi
        call ext_00789C40
        mov ecx, eax
        call ext_0078CB80
        mov ecx, esi
        inc edi
        call ext_006BC380
        cmp edi, eax
        jl short L_loop
L_end:
        pop edi
        pop esi
        ret
    }
}

// [0x0078D550] sub_0078D550 (112 bytes)
extern "C" int mem_0092A278;

struct D550Elem {
    int x0;
    int x1;
    double d;
};

struct D550Row {
    int count;
    int p4;
    int p8;
    int pc;
    D550Elem* elems;
};

extern "C" __declspec(naked) double __fastcall fn_0078D550(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        mov edx, dword ptr [esp + 0x8]
        fld qword ptr [mem_0092A278]
        lea eax, [eax + 2*eax]
        sub esp, 0x10
        mov ecx, dword ptr [ecx + 8*eax + 0x10]
        mov eax, dword ptr [ecx + 4*edx]
        mov ecx, dword ptr [eax]
        test ecx, ecx
        jle L_end
        mov eax, dword ptr [eax + 0x10]
        mov dl, byte ptr [esp + 0x1c]
        push esi
        push edi
L_loop:
        mov esi, eax
        test dl, dl
        mov edi, dword ptr [esi]
        mov dword ptr [esp + 0x8], edi
        mov edi, dword ptr [esi + 0x4]
        mov dword ptr [esp + 0xc], edi
        mov edi, dword ptr [esi + 0x8]
        mov dword ptr [esp + 0x10], edi
        mov esi, dword ptr [esi + 0xc]
        mov dword ptr [esp + 0x14], esi
        fld qword ptr [esp + 0x10]
        je L_skip
        fstp st(0)
        fld qword ptr [esp + 0x10]
        fabs
L_skip:
        add eax, 0x10
        dec ecx
        faddp st(1), st
        jne L_loop
        pop edi
        pop esi
L_end:
        add esp, 0x10
        ret 0xc
    }
}

// [0x00785E00] sub_00785E00 (112 bytes)
extern "C" void ext_007857F0();
extern "C" __declspec(naked) void __fastcall fn_00785E00(void* self) {
    __asm {
        mov edx, 0x8d4fdf3b
        mov eax, 0x3f826e97
        mov dword ptr [ecx + 0x78], edx
        mov dword ptr [ecx + 0x80], edx
        mov dword ptr [ecx + 0xa0], edx
        mov dword ptr [ecx + 0x88], edx
        mov dword ptr [ecx + 0x90], edx
        mov dword ptr [ecx + 0x98], 0xd2f1a9fc
        mov dword ptr [ecx + 0x7c], eax
        mov dword ptr [ecx + 0x84], eax
        mov byte ptr [ecx + 0xa8], 0
        mov byte ptr [ecx + 0xa9], 0
        mov dword ptr [ecx + 0xa4], eax
        mov dword ptr [ecx + 0x8c], eax
        mov dword ptr [ecx + 0x94], eax
        mov dword ptr [ecx + 0x9c], 0x3f70624d
        jmp ext_007857F0
    }
}

// [0x0078D1F0] sub_0078D1F0 (112 bytes)
extern "C" __declspec(naked) void __cdecl fn_0078D1F0(void* out, int n) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        push ebx
        push ebp
        push esi
        lea esi, [eax - 0x1]
        lea ebp, [eax + 2*eax - 0x6]
        mov eax, dword ptr [esp + 0x10]
        push edi
        xor edi, edi
        mov edx, 0x3
        mov ebx, 0x2
        mov dword ptr [eax], edi
        mov dword ptr [eax + 0x4], 0x1
        cmp esi, edx
        mov dword ptr [eax + 0x8], ebx
        mov ecx, edx
        jl short L_exit
        add eax, 0xc
L_top:
        mov dword ptr [eax], ebx
        add eax, 0x4
        inc ecx
        mov dword ptr [eax], edx
        add eax, 0x4
        inc ecx
        mov dword ptr [eax], edi
        inc ecx
        add eax, 0x4
        cmp ecx, ebp
        je short L_exit
        mov dword ptr [eax], edi
        add eax, 0x4
        inc ecx
        mov ebx, edx
        mov dword ptr [eax], edx
        add eax, 0x4
        inc ecx
        mov edi, esi
        mov dword ptr [eax], esi
        inc ecx
        add eax, 0x4
        inc edx
        dec esi
        cmp edx, esi
        jle short L_top
L_exit:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}

// [0x00780160] sub_00780160 (112 bytes)
extern "C" __declspec(naked) int __fastcall fn_00780160(void* self, int edx_unused, const char* name) {
    __asm {
        push ebx
        mov ebx, dword ptr [ecx]
        push ebp
        or eax, -1
        xor ebp, ebp
        push esi
        test ebx, ebx
        push edi
        jle short L_out
        mov edi, dword ptr [ecx + 4]
        add edi, 4
L_outer:
        mov esi, dword ptr [esp + 0x14]
        mov ecx, edi
L_cmp:
        mov al, byte ptr [ecx]
        mov dl, al
        cmp al, byte ptr [esi]
        jne short L_ne
        test dl, dl
        je short L_eq0
        mov al, byte ptr [ecx + 1]
        mov dl, al
        cmp al, byte ptr [esi + 1]
        jne short L_ne
        add ecx, 2
        add esi, 2
        test dl, dl
        jne short L_cmp
L_eq0:
        xor ecx, ecx
        jmp short L_after
L_ne:
        sbb ecx, ecx
        sbb ecx, -1
L_after:
        test ecx, ecx
        je short L_found
        inc ebp
        add edi, 0x130
        cmp ebp, ebx
        jl short L_outer
        pop edi
        pop esi
        pop ebp
        or eax, -1
        pop ebx
        ret 0x4
L_found:
        mov eax, ebp
L_out:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x4
    }
}

// [0x00783A80] sub_00783A80 (112 bytes)
extern "C" void ext_006A5C62();
extern "C" void ext_00782D00();
extern "C" int mem_00B608DC;
extern "C" int mem_00AAF3B1;
extern "C" __declspec(naked) void __fastcall fn_00783A80(void* self) {
    __asm {
        push -1
        push 0x8b8fdb
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
        push ecx
        mov eax, dword ptr [mem_00B608DC]
        test eax, eax
        jne short L_end
        mov cl, byte ptr [mem_00AAF3B1]
        test cl, cl
        je short L_end
        push 0x14
        call ext_006A5C62
        add esp, 0x4
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x00
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
        mov dword ptr [mem_00B608DC], eax
        mov byte ptr [mem_00AAF3B1], 0x0
L_end:
        mov ecx, dword ptr [esp + 0x4]
        _emit 0x64
        _emit 0x89
        _emit 0x0d
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        add esp, 0x10
        ret
    }
}

// [0x0078C280] sub_0078C280 (112 bytes)
extern "C" void ext_006B9D10();
extern "C" void ext_006D2130();
extern "C" __declspec(naked) void __fastcall fn_0078C280(void* self) {
    __asm {
        push -1
        push 0x8c16eb
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push ebx
        push esi
        mov esi, ecx
        push edi
        push 4
        push 0x10
        lea edi, [esi + 4]
        mov dword ptr [esp + 0x14], esi
        mov ecx, edi
        call ext_006D2130
        lea eax, [edi + 0x10]
        mov dword ptr [edi + 0x14], eax
        xor ebx, ebx
        lea ecx, [esi + 0x38]
        mov dword ptr [esp + 0x18], ebx
        call ext_006B9D10
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [esi], ebx
        mov dword ptr [esi + 0x1c], ebx
        mov dword ptr [esi + 0x20], ebx
        mov byte ptr [esi + 0x34], bl
        mov dword ptr [esi + 0x24], ebx
        mov dword ptr [esi + 0x28], ebx
        mov dword ptr [esi + 0x2c], ebx
        mov dword ptr [esi + 0x30], ebx
        mov eax, esi
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00783270] sub_00783270 (112 bytes)
extern "C" void ext_006B9D70();
extern "C" void ext_007833F0();
extern "C" __declspec(naked) void __fastcall fn_00783270(void* self) {
    __asm {
        push -1
        push 0x8c153b
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        mov dword ptr [esi], 0x996e80
        mov dword ptr [esp + 0x10], 0
        call ext_007833F0
        mov eax, dword ptr [esi + 0x4]
        push eax
        call ext_006A5C5C
        add esp, 0x4
        lea ecx, [esi + 0xc]
        mov dword ptr [esi + 0x4], 0
        mov dword ptr [esp + 0x10], 0xffffffff
        call ext_006B9D70
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00783940] sub_00783940 (112 bytes)
extern "C" void ext_006D2200();
extern "C" void ext_007837D0();
extern "C" __declspec(naked) void __fastcall fn_00783940(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push ebx
        mov ebx, ecx
        push ebp
        push esi
        mov edx, dword ptr [ebx]
        xor esi, esi
        test edx, edx
        push edi
        mov eax, 1
        jle short L_ret0
        mov ecx, dword ptr [ebx + 0x10]
        mov eax, dword ptr [esp + 0x18]
        mov ebp, dword ptr [esp + 0x14]
L_loop:
        mov edi, dword ptr [ecx]
        cmp dword ptr [edi], ebp
        jne short L_next
        cmp dword ptr [edi + 0x4], eax
        je short L_found
L_next:
        inc esi
        add ecx, 0x4
        cmp esi, edx
        jl short L_loop
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        ret 0x8
L_found:
        push esi
        mov ecx, ebx
        call ext_006D2200
        push edi
        call ext_006A5C5C
        mov ecx, dword ptr [ebx + 0x18]
        add esp, 0x4
        xor edi, edi
        test ecx, ecx
        je short L_done
        push esi
        call ext_007837D0
L_done:
        mov eax, edi
L_ret0:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x8
    }
}

// [0x0078D6B0] sub_0078D6B0 (112 bytes)
extern "C" void ext_0074ADF0();
extern "C" __declspec(naked) void __fastcall fn_0078D6B0(void* self) {
    __asm {
        push ebx
        mov ebx, ecx
        push esi
        push edi
        mov esi, dword ptr [ebx]
        test esi, esi
        je short L_after1
L_loop1:
        mov eax, dword ptr [ebx + 0x10]
        dec esi
        mov edi, dword ptr [eax + 4*esi]
        test edi, edi
        je short L_skip1
        mov ecx, edi
        call ext_0074ADF0
        push edi
        call ext_006A5C5C
        add esp, 4
L_skip1:
        test esi, esi
        jne short L_loop1
L_after1:
        mov ecx, ebx
        call ext_006D2250
        mov esi, dword ptr [ebx + 0x18]
        add ebx, 0x18
        test esi, esi
        je short L_after2
L_loop2:
        mov ecx, dword ptr [ebx + 0x10]
        dec esi
        mov edi, dword ptr [ecx + 4*esi]
        test edi, edi
        je short L_skip2
        mov ecx, edi
        call ext_0074ADF0
        push edi
        call ext_006A5C5C
        add esp, 4
L_skip2:
        test esi, esi
        jne short L_loop2
L_after2:
        mov ecx, ebx
        call ext_006D2250
        pop edi
        pop esi
        pop ebx
        ret
    }
}

// [0x0078CC90] sub_0078CC90 (112 bytes)
extern "C" void ext_0078CD00();
extern "C" void ext_0078CEB0();
extern "C" void ext_0074ADF0();
extern "C" int mem_00B60DBC;

extern "C" __declspec(naked) void __fastcall fn_0078CC90(void* self) {
    __asm {
        call ext_0078CD00
        mov eax, dword ptr [mem_00B60DBC]
        test eax, eax
        je short L_done
        push ebx
        mov ebx, dword ptr [eax]
        push esi
        push edi
        xor edi, edi
        test ebx, ebx
        jle short L_after
L_loop:
        mov ecx, dword ptr [eax + 0x10]
        mov esi, dword ptr [ecx + edi*4]
        test esi, esi
        je short L_skip
        mov ecx, esi
        call ext_0078CEB0
        push esi
        call ext_006A5C5C
        mov eax, dword ptr [mem_00B60DBC]
        add esp, 4
L_skip:
        inc edi
        cmp edi, ebx
        jl short L_loop
L_after:
        mov esi, eax
        test esi, esi
        je short L_skip2
        mov ecx, esi
        call ext_0074ADF0
        push esi
        call ext_006A5C5C
        add esp, 4
L_skip2:
        pop edi
        pop esi
        mov dword ptr [mem_00B60DBC], 0
        pop ebx
L_done:
        ret
    }
}

// [0x0078C0E0] sub_0078C0E0 (112 bytes)
extern "C" __declspec(naked) void __fastcall fn_0078C0E0(void* self, int edx_unused, int a1) {
    __asm {
        push ebx
        push esi
        mov esi, ecx
        push edi
        lea edi, [esi + 0x3c]
        lea eax, [esi + 0x2c]
        push edi
        push eax
        call ext_0078BFD0
        mov eax, dword ptr [esi + 0x24]
        mov ebx, dword ptr [esp + 0x10]
        cmp eax, -1
        je short L_10B
        lea ecx, [ebx - 1]
        cmp eax, ecx
        jne short L_10B
        cmp dword ptr [esi + 0x18], 2
        je short L_11B
L_10B:
        push ebx
        mov ecx, esi
        call ext_0078C230
        push eax
        mov ecx, esi
        call ext_00789670
L_11B:
        push 0x10
        push edi
        mov ecx, esi
        call fn_007895F0
        cmp eax, 0x10
        jne short L_13E
        mov eax, dword ptr [esi + 0x28]
        mov dword ptr [esi + 0x24], ebx
        cmp ebx, eax
        mov dword ptr [esi + 0x18], 2
        jle short L_13E
        mov dword ptr [esi + 0x28], ebx
L_13E:
        pop edi
        pop esi
        pop ebx
        ret 0x4
    }
}

// [0x0078D0C0] sub_0078D0C0 (112 bytes)
extern "C" void ext_0078CF70();
extern "C" void ext_0078D130();

extern "C" __declspec(naked) int __fastcall fn_0078D0C0(void* self, int edx_unused, void* a1, void* a2, int a3) {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov eax, dword ptr [ebp + 0x10]
        mov edx, dword ptr [ebp + 0x8]
        push ebx
        push edi
        push eax
        push edx
        mov dword ptr [ebp - 4], ecx
        call ext_0078CF70
        mov ebx, dword ptr [ebp + 0xc]
        mov edi, eax
        test ebx, ebx
        mov dword ptr [ebp - 8], edi
        je short L_ret_early
        mov eax, dword ptr [ebx - 8]
        push esi
        mov dword ptr [ebp + 0xc], eax
        mov edx, dword ptr [ebp + 0x10]
        mov ecx, dword ptr [ebp + 0xc]
        sub edx, ecx
        sbb eax, eax
        and eax, edx
        add eax, ecx
        mov ecx, eax
        mov esi, ebx
        mov edx, ecx
        mov eax, dword ptr [ebp + 0x8]
        shr ecx, 2
        rep movsd
        mov ecx, edx
        push ebx
        and ecx, 3
        push eax
        rep movsb
        mov ecx, dword ptr [ebp - 4]
        call ext_0078D130
        mov eax, dword ptr [ebp - 8]
        pop esi
        pop edi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0xc
L_ret_early:
        mov eax, edi
        pop edi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0xc
    }
}

// [0x00784650] sub_00784650 (128 bytes)
extern "C" int mem_00925208;
extern "C" int mem_00925290;
extern "C" __declspec(naked) void __fastcall fn_00784650(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push esi
        mov esi, ecx
        push edi
        mov eax, dword ptr [esi + 8]
        mov ecx, dword ptr [esi + 0xc]
        mov edx, eax
        mov edi, dword ptr [esi + 4]
        imul edx, ecx
        cmp edi, edx
        jne short L_store
        test eax, eax
        jne short L_realloc
        lea eax, [ecx*8]
        mov dword ptr [esi + 8], 1
        push eax
        call dword ptr [mem_00925208]
        add esp, 4
        jmp short L_setbase
L_realloc:
        inc eax
        mov dword ptr [esi + 8], eax
        imul eax, ecx
        mov ecx, dword ptr [esi]
        shl eax, 3
        push eax
        push ecx
        call dword ptr [mem_00925290]
        add esp, 8
L_setbase:
        mov dword ptr [esi], eax
L_store:
        mov edx, dword ptr [esi + 4]
        mov eax, dword ptr [esi]
        mov ecx, dword ptr [esp + 0xc]
        pop edi
        mov dword ptr [eax + edx*8], ecx
        mov edx, dword ptr [esi + 4]
        mov eax, dword ptr [esi]
        mov ecx, dword ptr [esp + 0xc]
        mov dword ptr [eax + edx*8 + 4], ecx
        mov eax, dword ptr [esi + 4]
        inc eax
        mov byte ptr [esi + 0x10], 1
        mov dword ptr [esi + 4], eax
        xor eax, eax
        pop esi
        ret 8
    }
}

// [0x00783160] sub_00783160 (128 bytes)
extern "C" int mem_009241FC;
extern "C" int mem_00925190;
extern "C" void ext_006A7270();
extern "C" __declspec(naked) void __fastcall fn_00783160(void* self) {
    __asm {
        mov eax, 0x1000
        call ext_006A7270
        mov ecx, dword ptr [esp + 0x1008]
        push esi
        mov esi, dword ptr [mem_009241FC]
        lea eax, [esp + 0x804]
        push 0x400
        push eax
        push -1
        push ecx
        push 0
        push 0xfde9
        call esi
        mov eax, dword ptr [esp + 0x1010]
        lea edx, [esp + 0x4]
        push 0x400
        push edx
        push -1
        push eax
        push 0
        push 0xfde9
        call esi
        lea ecx, [esp + 0x4]
        lea edx, [esp + 0x804]
        push ecx
        push edx
        call dword ptr [mem_00925190]
        mov ecx, dword ptr [esp + 0x1010]
        add esp, 0x8
        xor edx, edx
        test eax, eax
        setne dl
        mov dword ptr [ecx], eax
        mov al, dl
        pop esi
        add esp, 0x1000
        ret
    }
}

// [0x0078CEF0] sub_0078CEF0 (128 bytes)
extern "C" int mem_009242E0;
extern "C" int mem_009251D8;
extern "C" int mem_009241BC;

// Locks self->lock (EnterCriticalSection), frees every node in each bucket of
// self->buckets[0..self->count) (free() via IAT), zeroes the bucket heads,
// zeroes self->[0x20]/[0x24], then unlocks (LeaveCriticalSection).
extern "C" __declspec(naked) void __fastcall fn_0078CEF0(void* self) {
    __asm {
        push ecx
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov esi, dword ptr [edi]
        push esi
        mov dword ptr [esp + 0x10], esi
        call dword ptr [mem_009242E0]
        mov eax, dword ptr [edi + 0x4]
        test eax, eax
        je short L_0078CEF0_unlock
        mov eax, dword ptr [edi + 0xc]
        xor ebx, ebx
        test eax, eax
        jbe short L_0078CEF0_unlock
        push ebp
        mov ebp, dword ptr [mem_009251D8]
L_0078CEF0_bucket:
        mov eax, dword ptr [edi + 0x4]
        mov eax, dword ptr [eax + ebx*4]
        test eax, eax
        je short L_0078CEF0_clear
L_0078CEF0_node:
        mov esi, dword ptr [eax]
        push eax
        call ebp
        add esp, 0x4
        mov eax, esi
        test esi, esi
        jne short L_0078CEF0_node
L_0078CEF0_clear:
        mov ecx, dword ptr [edi + 0x4]
        inc ebx
        mov dword ptr [ecx + ebx*4 - 0x4], 0
        mov eax, dword ptr [edi + 0xc]
        cmp ebx, eax
        jb short L_0078CEF0_bucket
        mov esi, dword ptr [esp + 0x10]
        pop ebp
L_0078CEF0_unlock:
        push esi
        mov dword ptr [edi + 0x20], 0
        mov dword ptr [edi + 0x24], 0
        call dword ptr [mem_009241BC]
        pop edi
        pop esi
        pop ebx
        pop ecx
        ret
    }
}

// [0x0078CAF0] sub_0078CAF0 (128 bytes)
extern "C" void ext_006A5C62();
extern "C" void ext_006D2170();
extern "C" void ext_0078C280();

extern "C" __declspec(naked) void __fastcall fn_0078CAF0(void* self) {
    __asm {
        push -1
        push 0x8b8fdb
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        push 0x84
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp + 4], eax
        test eax, eax
        mov dword ptr [esp + 0x10], 0
        je short L_null
        mov ecx, eax
        call ext_0078C280
        jmp short L_join
L_null:
        xor eax, eax
L_join:
        mov ecx, dword ptr [esi]
        mov dword ptr [esp + 4], eax
        lea eax, [esp + 4]
        mov dword ptr [esp + 0x10], 0xffffffff
        push eax
        push ecx
        mov ecx, esi
        call ext_006D2170
        mov eax, dword ptr [esi]
        mov ecx, dword ptr [esp + 8]
        dec eax
        mov dword ptr [esi + 0x18], eax
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x0078CC10] sub_0078CC10 (128 bytes)
extern "C" void ext_006A5C62();
extern "C" void ext_006D2130();
extern "C" void ext_0078CD30();
extern "C" int mem_00B60DBC;
extern "C" __declspec(naked) void __fastcall fn_0078CC10(void* self) {
    __asm {
        push -1
        push 0x8b8fdb
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        push 0x18
        call ext_006A5C62
        mov esi, eax
        add esp, 4
        mov dword ptr [esp + 0x4], esi
        test esi, esi
        mov dword ptr [esp + 0x10], 0
        je short L_null
        push 4
        push 0x10
        mov ecx, esi
        call ext_006D2130
        lea eax, [esi + 0x10]
        mov dword ptr [esi + 0x14], eax
        jmp short L_done
L_null:
        xor esi, esi
L_done:
        push 0
        push 0
        push 2
        push 0x20000
        mov dword ptr [esp + 0x20], -1
        mov dword ptr [mem_00B60DBC], esi
        call ext_0078CD30
        mov ecx, dword ptr [esp + 0x18]
        add esp, 0x10
        mov al, 1
        mov dword ptr fs:[0x0], ecx
        pop esi
        add esp, 0x10
        ret
    }
}

// [0x0078C150] sub_0078C150 (128 bytes)
extern "C" __declspec(naked) void __fastcall fn_0078C150(void* self, int edx_unused, int a1) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0x8]
        push esi
        mov esi, ecx
        cmp ebx, dword ptr [esi + 0x28]
        jle short L_172
        xor eax, eax
        add esi, 0x2c
        mov dword ptr [esi], eax
        mov dword ptr [esi + 0x4], eax
        mov dword ptr [esi + 0x8], eax
        mov dword ptr [esi + 0xc], eax
        pop esi
        pop ebx
        ret 0x4
L_172:
        mov eax, dword ptr [esi + 0x24]
        cmp eax, -1
        je short L_187
        lea ecx, [ebx - 1]
        cmp eax, ecx
        jne short L_187
        cmp dword ptr [esi + 0x18], 1
        je short L_197
L_187:
        push ebx
        mov ecx, esi
        call ext_0078C230
        push eax
        mov ecx, esi
        call ext_00789670
L_197:
        push edi
        lea edi, [esi + 0x3c]
        push 0x10
        push edi
        mov ecx, esi
        call ext_007895C0
        lea edx, [esi + 0x2c]
        mov ecx, esi
        push edx
        push edi
        mov dword ptr [esi + 0x24], ebx
        mov dword ptr [esi + 0x18], 1
        call ext_0078C000
        pop edi
        pop esi
        pop ebx
        ret 0x4
    }
}

// [0x00784D50] sub_00784D50 (128 bytes)
extern "C" void ext_00782EC0();
extern "C" void ext_00782D20();
extern "C" void ext_00782D30();
extern "C" void ext_006A5C5C();
extern "C" int mem_009251D8; /* "&|b" */
// Entry reads its single argument from the stack (ret 0x4); ecx is not used on entry.
extern "C" __declspec(naked) void __stdcall fn_00784D50(void* a1) {
    __asm {
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 0xc]
        xor ebx, ebx
        mov eax, dword ptr [ebp + 0x4]
        test eax, eax
        jle L_tail
        push esi
        push edi
L_outer:
        push 0x0
        push ebx
        mov ecx, ebp
        call ext_00782EC0
        mov esi, eax
        test esi, esi
        je L_outer_next
        mov eax, dword ptr [esi + 0x4]
        xor edi, edi
        test eax, eax
        jle L_after_inner
L_inner:
        push 0x0
        push edi
        mov ecx, esi
        call ext_00782EC0
        test eax, eax
        je L_inner_next
        push eax
        call dword ptr [mem_009251D8]
        add esp, 0x4
L_inner_next:
        mov eax, dword ptr [esi + 0x4]
        inc edi
        cmp edi, eax
        jl L_inner
L_after_inner:
        mov ecx, esi
        call ext_00782D30
        mov ecx, esi
        call ext_00782D20
        push esi
        call ext_006A5C5C
        add esp, 0x4
L_outer_next:
        mov eax, dword ptr [ebp + 0x4]
        inc ebx
        cmp ebx, eax
        jl L_outer
        pop edi
        pop esi
L_tail:
        mov ecx, ebp
        call ext_00782D30
        pop ebp
        pop ebx
        ret 0x4
    }
}

// [0x00783B40] sub_00783B40 (128 bytes)
extern "C" void ext_00783A80();
extern "C" void ext_006E7460();
extern "C" void ext_00782E70();
extern "C" void ext_00783940();
extern "C" void ext_00783880();
extern "C" void ext_006A5C5C();
extern "C" void ext_00782E30();
extern "C" __declspec(naked) void __fastcall fn_00783B40(void* self) {
    __asm {
        push esi
        push edi
        mov edi, ecx
        call ext_00783A80
        test eax, eax
        je L_fail
        push 0
        mov ecx, edi
        call ext_006E7460
        push eax
        call ext_00783A80
        mov ecx, eax
        call ext_00782E70
        mov esi, eax
        mov eax, dword ptr [edi + 0x50]
        test eax, eax
        je L_fail
        test esi, esi
        je L_fail
        push eax
        mov eax, dword ptr [edi + 0x4c]
        push eax
        mov ecx, esi
        call ext_00783940
        mov ecx, esi
        call ext_006E7460
        test eax, eax
        jne L_clear
        mov ecx, esi
        call ext_00783880
        push esi
        call ext_006A5C5C
        add esp, 4
        mov ecx, edi
        call ext_006E7460
        push eax
        call ext_00783A80
        mov ecx, eax
        call ext_00782E30
L_clear:
        mov dword ptr [edi + 0x50], 0
        pop edi
        mov al, 1
        pop esi
        ret
L_fail:
        pop edi
        xor al, al
        pop esi
        ret
    }
}

// [0x0078B3D0] sub_0078B3D0 (128 bytes)
extern "C" void ext_0078ABD0();

extern "C" __declspec(naked) void __cdecl fn_0078B3D0(void* p, int mode, void* a3) {
    __asm {
        push ebx
        push esi
        mov esi, dword ptr [esp + 0xc]
        test esi, esi
        jne L_nonnull
        pop esi
        mov eax, 0xfffffff9
        pop ebx
        ret
L_nonnull:
        mov bl, byte ptr [esp + 0x10]
        cmp bl, 0x1
        je L_ok
        cmp bl, 0x2
        je L_ok
        cmp bl, 0x3
        je L_ok
        pop esi
        mov eax, 0xfffffffc
        pop ebx
        ret
L_ok:
        cmp bl, 0x1
        mov dword ptr [esi + 0x14], 0x48534946
        je L_store
        mov eax, dword ptr [esp + 0x14]
        test eax, eax
        je L_store
        lea ecx, [esi + 0x18]
        push 0x0
        push ecx
        push eax
        push 0x80
        call ext_0078ABD0
        add esp, 0x10
        test eax, eax
        je L_copy
        pop esi
        mov eax, 0xfffffff8
        pop ebx
        ret
L_copy:
        lea eax, [esi + 0x1]
        mov ecx, 0x4
L_loop:
        mov edx, dword ptr [eax + 0x17]
        mov dword ptr [eax], edx
        add eax, 0x4
        dec ecx
        jne L_loop
L_store:
        mov byte ptr [esi], bl
        pop esi
        mov eax, 0x1
        pop ebx
        ret
    }
}

// [0x0078C830] sub_0078C830 (144 bytes)
extern "C" int mem_0092521C;
extern "C" __declspec(naked) void __fastcall fn_0078C830(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov edx, dword ptr [ecx + 0x20]
        test edx, edx
        je L_873
        mov eax, dword ptr [ebp + 0x8]
        push esi
        mov esi, dword ptr [ecx + 0x28]
        cmp eax, esi
        pop esi
        jge L_8B0
        mov ecx, dword ptr [ecx + 0x2c]
        mov ecx, dword ptr [ecx + 4*eax]
        mov eax, dword ptr [ecx + edx]
        mov dword ptr [ebp - 0x8], eax
        mov edx, dword ptr [ecx + edx + 0x4]
        mov cl, byte ptr [ebp + 0xc]
        test cl, cl
        mov dword ptr [ebp - 0x4], edx
        je L_8B4
        mov edx, dword ptr [ebp - 0x8]
        mov eax, dword ptr [ebp - 0x4]
        bswap edx
        bswap eax
        mov esp, ebp
        pop ebp
        ret 0x8
L_873:
        mov eax, dword ptr [ebp + 0x8]
        mov edx, dword ptr [ecx + 0x4]
        cmp eax, edx
        jge L_8B0
        mov ecx, dword ptr [ecx + 0x14]
        lea edx, [ebp - 0x8]
        mov dword ptr [ebp - 0x8], 0
        mov dword ptr [ebp - 0x4], 0
        push edx
        mov edx, dword ptr [ecx + 4*eax]
        push 0xaa92d4
        push edx
        call dword ptr [mem_0092521C]
        mov eax, dword ptr [ebp - 0x8]
        mov edx, dword ptr [ebp - 0x4]
        add esp, 0xc
        mov esp, ebp
        pop ebp
        ret 0x8
L_8B0:
        xor eax, eax
        xor edx, edx
L_8B4:
        mov esp, ebp
        pop ebp
        ret 0x8
    }
}

// [0x0078B180] sub_0078B180 (144 bytes)
// Reads two stack args (at esp+0x18 / esp+0x1c after pushes); ecx is preserved.
extern "C" __declspec(naked) void __fastcall fn_0078B180(void* self) {
    __asm {
        push ecx
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        xor ebx, ebx
L_outer:
        mov eax, dword ptr [esp + 0x18]
        test ebx, ebx
        jne short L_skip
        mov eax, dword ptr [esp + 0x1c]
L_skip:
        xor edi, eax
        mov ebp, 4
L_loop:
        mov ecx, edi
        shr ecx, 0x18
        mov byte ptr [esp + 0x10], cl
        mov al, cl
        mov edx, dword ptr [esp + 0x10]
        and al, 0x80
        and edx, 0xff
        neg al
        sbb eax, eax
        mov esi, edx
        and eax, 0x14d
        and esi, 0x7f
        and eax, 0xff
        and cl, 0x1
        shl esi, 1
        xor esi, eax
        mov eax, edx
        neg cl
        sbb ecx, ecx
        and ecx, 0xa6
        shr eax, 1
        xor ecx, eax
        xor ecx, esi
        mov eax, ecx
        shl eax, 8
        xor eax, esi
        shl eax, 8
        xor eax, ecx
        xor eax, edi
        shl eax, 8
        xor eax, edx
        dec ebp
        mov edi, eax
        jne short L_loop
        inc ebx
        cmp ebx, 2
        jl short L_outer

        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret
    }
}

// [0x0078D130] sub_0078D130 (144 bytes)
extern "C" int mem_009242E0;
extern "C" int mem_009241BC;
extern "C" __declspec(naked) void __fastcall fn_0078D130(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        push ebx
        push ebp
        push esi
        mov ebx, dword ptr [eax - 0x8]
        mov esi, ecx
        add eax, -0x8
        xor ecx, ecx
        mov ebp, dword ptr [esi]
        push edi
        mov cl, byte ptr [eax + 0x4]
        mov edi, eax
        push ebp
        sub edi, ecx
        call dword ptr [mem_009242E0]
        mov eax, dword ptr [esi + 0x4]
        test eax, eax
        je L_fail
        cmp ebx, 0x8
        jb L_fail
        cmp ebx, dword ptr [esi + 0x8]
        jae L_fail
        mov ecx, dword ptr [esi + 0x1c]
        test ecx, ecx
        je L_skip
        cmp dword ptr [esi + 0x20], ecx
        ja L_fail
L_skip:
        mov ecx, dword ptr [esi + 0x10]
        push ebp
        shr ebx, cl
        mov edx, dword ptr [eax + ebx*4]
        mov dword ptr [edi], edx
        mov eax, dword ptr [esi + 0x4]
        mov dword ptr [eax + ebx*4], edi
        call dword ptr [mem_009241BC]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x8
L_fail:
        push ebp
        call dword ptr [mem_009241BC]
        mov ecx, dword ptr [esp + 0x14]
        push edi
        mov edx, dword ptr [ecx]
        call dword ptr [edx + 0xc]
        mov ecx, dword ptr [esi + 0x20]
        mov eax, dword ptr [esi + 0x24]
        sub ecx, ebx
        dec eax
        mov dword ptr [esi + 0x20], ecx
        mov dword ptr [esi + 0x24], eax
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x8
    }
}

// [0x0078D420] sub_0078D420 (144 bytes)
extern "C" void ext_006D2170();

extern "C" __declspec(naked) void __fastcall fn_0078D420(void* self, int edx_unused, int a1, int a2, int a3, int a4) {
    __asm {
        sub esp, 20h
        push ebx
        mov ebx, dword ptr [esp + 28h]
        push ebp
        mov eax, dword ptr [esp + 34h]
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 3Ch]
        mov ebp, dword ptr [esp + 10h]
        mov edx, dword ptr [esi + 10h]
        mov dword ptr [esp + 18h], ecx
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 24h], eax
        mov ecx, dword ptr [edx + ebx*4]
        mov edx, dword ptr [esp + 18h]
        mov dword ptr [esp + 28h], edx
        lea eax, [esp + 1Ch]
        mov edx, dword ptr [ecx]
        push edi
        mov edi, dword ptr [esp + 38h]
        push eax
        push edx
        mov dword ptr [esp + 28h], edi
        mov dword ptr [esp + 2Ch], ebp
        call ext_006D2170
        mov eax, dword ptr [esi + 28h]
        mov edx, dword ptr [esp + 18h]
        mov dword ptr [esp + 28h], edx
        lea edx, [esp + 20h]
        mov ecx, dword ptr [eax + edi*4]
        mov eax, dword ptr [esp + 1Ch]
        mov dword ptr [esp + 2Ch], eax
        push edx
        mov eax, dword ptr [ecx]
        mov dword ptr [esp + 24h], ebx
        push eax
        mov dword ptr [esp + 2Ch], ebp
        call ext_006D2170
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 20h
        ret 10h
    }
}

// [0x007839F0] sub_007839F0 (144 bytes)
extern "C" void ext_00783790();
extern "C" __declspec(naked) void __fastcall fn_007839F0(void* self, int edx_unused, int a1, int a2) {
    __asm {
        sub esp, 0x10
        push ebx
        push esi
        mov esi, ecx
        push edi
        lea ecx, [esp + 0xc]
        call ext_00783790
        mov eax, dword ptr [esi + 0x18]
        lea ecx, [esp + 0xc]
        mov dword ptr [esp + 0xc], eax
        mov eax, dword ptr [esi]
        mov dword ptr [esi + 0x18], ecx
        mov ecx, dword ptr [esp + 0x18]
        dec eax
        mov dword ptr [esp + 0x10], esi
        cmp eax, ecx
        mov dword ptr [esp + 0x14], eax
        jl short L_end
        mov edi, dword ptr [esp + 0x24]
        mov ebx, dword ptr [esp + 0x20]
    L_loop:
        mov ecx, dword ptr [esp + 0x10]
        test ecx, ecx
        je short L_skip
        mov edx, dword ptr [esi + 0x10]
        push edi
        push ebx
        mov eax, dword ptr [edx + 4*eax]
        mov ecx, dword ptr [eax]
        call dword ptr [eax + 0x4]
        test edi, edi
        je short L_cont
        mov al, byte ptr [edi + 0x4]
        test al, al
        jne short L_end
    L_cont:
        mov eax, dword ptr [esp + 0x14]
        mov ecx, dword ptr [esp + 0x18]
        dec eax
        cmp eax, ecx
        mov dword ptr [esp + 0x14], eax
        jge short L_loop
    L_end:
        mov eax, dword ptr [esp + 0x10]
        test eax, eax
        je short L_skip
        mov eax, dword ptr [esp + 0xc]
        mov dword ptr [esi + 0x18], eax
    L_skip:
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        add esp, 0x10
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
    }
}

// [0x00783700] sub_00783700 (144 bytes)
extern "C" void ext_006E7460();
extern "C" void ext_006B9D70();
extern "C" int mem_009241FC;
extern "C" int mem_0092519C;
extern "C" __declspec(naked) void __fastcall fn_00783700(void* self) {
    __asm {
        push -1
        push 0x8bdc58
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x800
        push esi
        lea eax, [esp + 0x4]
        push 0x400
        push eax
        push -1
        lea ecx, [esp + 0x820]
        mov dword ptr [esp + 0x818], 0
        call ext_006E7460
        push eax
        push 0
        push 0xfde9
        call dword ptr [mem_009241FC]
        lea ecx, [esp + 0x4]
        push ecx
        call dword ptr [mem_0092519C]
        add esp, 0x4
        lea ecx, [esp + 0x814]
        mov esi, eax
        mov dword ptr [esp + 0x80c], 0xffffffff
        call ext_006B9D70
        mov ecx, dword ptr [esp + 0x804]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x80c
        ret
    }
}

// [0x0078CE20] sub_0078CE20 (144 bytes)
extern "C" void ext_006A5C62();
extern "C" void ext_0078D1C0();
extern "C" int mem_009241C0;
extern "C" int mem_00925208;
extern "C" __declspec(naked) void __fastcall fn_0078CE20(void* self, int edx_unused, int a1, int a2, int a3, int a4) {
    __asm {
        push esi
        push edi
        mov esi, ecx
        push 0x18
        call ext_006A5C62
        mov edi, eax
        add esp, 4
        test edi, edi
        je short L_null_cs
        push edi
        call dword ptr [mem_009241C0]
        mov eax, edi
        jmp short L_store
L_null_cs:
        xor eax, eax
L_store:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [esi], eax
        mov eax, dword ptr [esp + 0xc]
        push ecx
        mov dword ptr [esi + 0x8], eax
        mov dword ptr [esi + 0x10], ecx
        shr eax, cl
        mov dword ptr [esi + 0xc], eax
        call ext_0078D1C0
        mov edx, dword ptr [esi + 0xc]
        mov ecx, dword ptr [esp + 0x1c]
        mov dword ptr [esi + 0x14], eax
        mov eax, dword ptr [esp + 0x18]
        shl edx, 2
        push edx
        mov dword ptr [esi + 0x18], eax
        mov dword ptr [esi + 0x1c], ecx
        mov dword ptr [esi + 0x20], 0
        mov dword ptr [esi + 0x24], 0
        call dword ptr [mem_00925208]
        mov ecx, dword ptr [esi + 0xc]
        mov edi, eax
        shl ecx, 2
        mov edx, ecx
        xor eax, eax
        shr ecx, 2
        mov dword ptr [esi + 0x4], edi
        add esp, 8
        rep stosd
        mov ecx, edx
        and ecx, 3
        rep stosb
        mov eax, esi
        pop edi
        pop esi
        ret 0x10
    }
}

// [0x0078CA60] sub_0078CA60 (144 bytes)
extern "C" void ext_006E7460();
extern "C" void ext_0078CB70();
extern "C" void ext_0078C2F0();
extern "C" void ext_006A5C5C();
extern "C" void ext_006D2250();
extern "C" void ext_006D2160();
extern "C" __declspec(naked) void __fastcall fn_0078CA60(void* self) {
    __asm {
        push -1
        push 8c1558h
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push ebx
        push edi
        mov edi, ecx
        mov dword ptr [esp + 8], edi
        mov dword ptr [esp + 14h], 0
        xor ebx, ebx
        call ext_006E7460
        test eax, eax
        jle L_after_loop
        push esi
    L_loop:
        push ebx
        mov ecx, edi
        call ext_0078CB70
        mov esi, eax
        test esi, esi
        je L_skip
        mov ecx, esi
        call ext_0078C2F0
        push esi
        call ext_006A5C5C
        add esp, 4
    L_skip:
        mov ecx, edi
        inc ebx
        call ext_006E7460
        cmp ebx, eax
        jl L_loop
        pop esi
    L_after_loop:
        mov ecx, edi
        call ext_006D2250
        mov ecx, edi
        mov dword ptr [esp + 14h], 0ffffffffh
        call ext_006D2160
        mov ecx, dword ptr [esp + 0ch]
        pop edi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 10h
        ret
    }
}

// [0x00782D90] sub_00782D90 (160 bytes)
// Appends an 8-byte {char* copy-of-string, int value} entry to a growable array
// at self->[0] (cap at [8], count at [4], stride multiplier at [0xc]); sets dirty flag [0x10].
extern "C" int mem_00925290;
extern "C" int mem_00925208;
extern "C" __declspec(naked) void __fastcall fn_00782D90(void* self, int edx_unused, const char* name, int value) {
    __asm {
        push ebx
        mov ebx, ecx
        push ebp
        push esi
        mov eax, dword ptr [ebx + 0x8]
        mov ecx, dword ptr [ebx + 0xc]
        mov edx, eax
        mov esi, dword ptr [ebx + 0x4]
        imul edx, ecx
        cmp esi, edx
        push edi
        jne short L_nogrow
        inc eax
        mov dword ptr [ebx + 0x8], eax
        imul eax, ecx
        shl eax, 3
        push eax
        mov eax, dword ptr [ebx]
        push eax
        call dword ptr [mem_00925290]
        add esp, 0x8
        mov dword ptr [ebx], eax
L_nogrow:
        mov esi, dword ptr [esp + 0x14]
        or ecx, -1
        mov edi, esi
        xor eax, eax
        repne scasb
        not ecx
        push ecx
        call dword ptr [mem_00925208]
        mov ecx, dword ptr [ebx + 0x4]
        mov edx, dword ptr [ebx]
        mov edi, esi
        add esp, 0x4
        mov dword ptr [edx + ecx*8], eax
        or ecx, -1
        xor eax, eax
        mov edx, dword ptr [ebx + 0x4]
        repne scasb
        mov ebp, dword ptr [ebx]
        not ecx
        sub edi, ecx
        mov eax, ecx
        mov esi, edi
        mov edi, dword ptr [ebp + edx*8]
        shr ecx, 0x2
        rep movsd
        mov ecx, eax
        mov eax, dword ptr [esp + 0x18]
        and ecx, 0x3
        rep movsb
        mov ecx, dword ptr [ebx + 0x4]
        mov edx, dword ptr [ebx]
        pop edi
        pop esi
        mov dword ptr [edx + ecx*8 + 0x4], eax
        mov eax, dword ptr [ebx + 0x4]
        inc eax
        mov byte ptr [ebx + 0x10], 0x1
        mov dword ptr [ebx + 0x4], eax
        pop ebp
        pop ebx
        ret 0x8
    }
}

// [0x00789A30] sub_00789A30 (160 bytes)
extern "C" __declspec(naked) void __fastcall fn_00789A30(void* self, int edx_unused, int a1, int a2, int a3, int a4, int a5) {
    __asm {
        push ebx
        push esi
        mov esi, ecx
        push 0x14
        lea ecx, [esi + 0x4]
        call ext_00782D00
        mov eax, dword ptr [esp + 0xc]
        mov ecx, dword ptr [esp + 0x10]
        mov dl, byte ptr [esp + 0x18]
        mov dword ptr [esi + 0x18], eax
        mov al, byte ptr [esp + 0x14]
        xor ebx, ebx
        cmp al, bl
        mov dword ptr [esi + 0x1c], ecx
        mov byte ptr [esi + 0x20], al
        mov byte ptr [esi + 0x21], dl
        jne short L_else
        push 0x1000
        mov dword ptr [esi + 0x2c], 0x1000
        mov dword ptr [esi + 0x30], ebx
        mov dword ptr [esi + 0x34], ebx
        call dword ptr [mem_00925208]
        mov dword ptr [esi + 0x24], eax
        add esp, 0x4
        mov byte ptr [eax], bl
        jmp short L_join
L_else:
        mov dword ptr [esi + 0x2c], ebx
        mov dword ptr [esi + 0x30], ebx
        mov dword ptr [esi + 0x34], ebx
        mov dword ptr [esi + 0x24], ebx
L_join:
        cmp byte ptr [esi + 0x20], bl
        je short L_alt
        mov eax, dword ptr [esp + 0x1c]
        cmp eax, ebx
        je short L_alt
        mov dword ptr [esi + 0x24], eax
        mov byte ptr [esi + 0x28], bl
        mov byte ptr [esi + 0x38], bl
        mov dword ptr [esi], ebx
        mov dword ptr [esi + 0x3c], ebx
        mov dword ptr [esi + 0x40], ebx
        mov eax, esi
        pop esi
        pop ebx
        ret 0x14
L_alt:
        mov byte ptr [esi + 0x28], 0x1
        mov byte ptr [esi + 0x38], bl
        mov dword ptr [esi], ebx
        mov dword ptr [esi + 0x3c], ebx
        mov dword ptr [esi + 0x40], ebx
        mov eax, esi
        pop esi
        pop ebx
        ret 0x14
    }
}

// [0x00784A00] sub_00784A00 (160 bytes)
extern "C" void ext_006A5C5C();
extern "C" void ext_006B9D70();
extern "C" void ext_00782D20();
extern "C" void ext_00784D50();
extern "C" void ext_007851B0();
extern "C" __declspec(naked) void __fastcall fn_00784A00(void* self) {
    __asm {
        push -1
        push 0x8bb3e3
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [esp + 0x8], esi
        mov eax, dword ptr [esi + 0x1098]
        mov dword ptr [esp + 0x14], 1
        test eax, eax
        je L_skip
        mov cl, byte ptr [esi + 0x109c]
        test cl, cl
        je L_a
        push eax
        mov ecx, esi
        call ext_007851B0
L_a:
        mov eax, dword ptr [esi + 0x1098]
        mov ecx, esi
        push eax
        call ext_00784D50
        mov edi, dword ptr [esi + 0x1098]
        test edi, edi
        je L_skip
        mov ecx, edi
        call ext_00782D20
        push edi
        call ext_006A5C5C
        add esp, 4
L_skip:
        lea ecx, [esi + 0x4c]
        mov byte ptr [esp + 0x14], 0
        call ext_006B9D70
        mov ecx, esi
        mov dword ptr [esp + 0x14], 0xffffffff
        call ext_006B9D70
        mov ecx, dword ptr [esp + 0xc]
        pop edi
        pop esi
        mov fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00786300] sub_00786300 (160 bytes)
extern "C" void ext_006DE7C0();
extern "C" void ext_006DEEC0();
extern "C" void ext_006E7410();
extern "C" void ext_007865F0();

extern "C" __declspec(naked) void __fastcall fn_00786300(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push ebx
        push esi
        mov esi, dword ptr [esp + 0xc]
        push edi
        mov edi, ecx
        cmp dword ptr [esi + 0x54], 0x2
        jne short L_fail
        push 0xaa8ca8
        mov ecx, esi
        mov bl, 0x1
        call ext_006DE7C0
        test eax, eax
        je short L_a
        mov ecx, eax
        call ext_006DEEC0
        test eax, eax
        setne bl
    L_a:
        push 0xaa8ca4
        mov ecx, esi
        call ext_006DE7C0
        test eax, eax
        je short L_b
        test bl, bl
        je short L_c
        mov ecx, eax
        call ext_006DEEC0
        test eax, eax
        je short L_c
        mov bl, 0x1
        jmp short L_b
    L_c:
        xor bl, bl
    L_b:
        push 0xaa8ca0
        mov ecx, esi
        call ext_006DE7C0
        test eax, eax
        je short L_d
        test bl, bl
        je short L_fail
        mov ecx, eax
        call ext_006DEEC0
        test eax, eax
        jne short L_call
    L_fail:
        push 0xaaf4a0
        push 0x2
        lea ecx, [edi + 0x20]
        call ext_006E7410
        pop edi
        pop esi
        xor al, al
        pop ebx
        ret 0x8
    L_d:
        test bl, bl
        je short L_fail
    L_call:
        push esi
        mov ecx, edi
        call ext_007865F0
        pop edi
        pop esi
        pop ebx
        ret 0x8
    }
}

// [0x007856F0] sub_007856F0 (176 bytes)
extern "C" void ext_006DEEC0();

extern "C" __declspec(naked) void __fastcall fn_007856F0(void* self, int edx_unused, void* a1, int a2) {
    __asm {
        push    ecx
        push    ebx
        mov     ebx, dword ptr [esp + 0x10]
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x14]
        push    edi
        test    bl, bl
        mov     edi, ecx
        mov     byte ptr [esp + 0x13], 0x1
        je      L_78575F
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        xor     ebp, ebp
        call    dword ptr [eax + 0x14]
        test    eax, eax
        jle     L_78575F
        jmp     L_78571B
L_785717:
        mov     ebx, dword ptr [esp + 0x1c]
L_78571B:
        mov     al, byte ptr [esp + 0x13]
        mov     edx, dword ptr [edi]
        test    al, al
        mov     eax, dword ptr [esi]
        push    ebx
        push    ebp
        mov     ecx, esi
        je      L_78573E
        mov     dword ptr [esp + 0x20], edx
        call    dword ptr [eax + 0x18]
        mov     edx, dword ptr [esp + 0x1c]
        push    eax
        mov     ecx, edi
        call    dword ptr [edx + 0x18]
        jmp     L_785753
L_78573E:
        mov     dword ptr [esp + 0x20], edx
        call    dword ptr [eax + 0x18]
        mov     edx, dword ptr [esp + 0x1c]
        push    eax
        mov     ecx, edi
        call    dword ptr [edx + 0x18]
        mov     byte ptr [esp + 0x13], al
L_785753:
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        inc     ebp
        call    dword ptr [eax + 0x14]
        cmp     ebp, eax
        jl      L_785717
L_78575F:
        mov     ecx, esi
        call    ext_006DEEC0
        test    eax, eax
        je      L_78578F
        mov     bl, byte ptr [esp + 0x13]
        mov     edx, dword ptr [edi]
        test    bl, bl
        push    eax
        mov     ecx, edi
        je      L_785784
        call    dword ptr [edx + 0x10]
        pop     edi
        pop     esi
        mov     al, bl
        pop     ebp
        pop     ebx
        pop     ecx
        ret     0x8
L_785784:
        call    dword ptr [edx + 0x10]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret     0x8
L_78578F:
        mov     al, byte ptr [esp + 0x13]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret     0x8
        nop
        nop
        nop
        nop
        nop
    }
}

// [0x00780250] sub_00780250 (11 bytes)
extern "C" __declspec(naked) void __fastcall fn_00780250(void* self) {
    __asm {
        mov eax, dword ptr [ecx + 0x4]
        push eax
        call ext_006A5C5C
        pop ecx
        ret
    }
}

// [0x0078A640] sub_0078A640 (17 bytes)
extern "C" __declspec(naked) void __fastcall fn_0078A640(void* self) {
    __asm {
        mov al, byte ptr [ecx + 0x20]
        test al, al
        je short L_false
        jmp ext_0078A660
L_false:
        jmp ext_0078A8B0
    }
}

// [0x007865B0] sub_007865B0 (20 bytes)
extern "C" void ext_006E7410();
extern "C" __declspec(naked) void __fastcall fn_007865B0(void* self, int edx_unused, int a1) {
    __asm {
        push 0xaaf4a0
        push 0x2
        add ecx, 0x20
        call ext_006E7410
        xor al, al
        ret 0x4
    }
}

// [0x00783440] sub_00783440 (40 bytes)
extern "C" int mem_009252C0;
extern "C" __declspec(naked) void __fastcall fn_00783440(void* self, int edx_unused, int a1, int a2) {
    __asm {
        mov eax, dword ptr [ecx + 0x4]
        mov cl, byte ptr [eax + 0x4]
        test cl, cl
        je short L_null
        mov eax, dword ptr [eax]
        mov ecx, dword ptr [esp + 0x8]
        mov edx, dword ptr [esp + 0x4]
        push eax
        push ecx
        push edx
        call dword ptr [mem_009252C0]
        add esp, 0xc
        ret 0x8
L_null:
        xor eax, eax
        ret 0x8
    }
}

// [0x0078BEC0] sub_0078BEC0 (37 bytes)
extern "C" __declspec(naked) int __fastcall fn_0078BEC0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi]
        call dword ptr [eax + 0x2c]
        test al, al
        je short L_zero
        mov ecx, esi
        call ext_00789650
        cmp eax, -1
        jne short L_ret_1c
        or eax, eax
        pop esi
        ret
    L_ret_1c:
        mov eax, dword ptr [esi + 0x1c]
        pop esi
        ret
    L_zero:
        xor eax, eax
        pop esi
        ret
    }
}

// [0x007836D0] sub_007836D0 (39 bytes)
extern "C" __declspec(naked) int __fastcall fn_007836D0(void* self, int edx_unused, int size) {
    __asm {
        mov eax, dword ptr [ecx + 0x4]
        mov cl, byte ptr [eax + 0x4]
        test cl, cl
        je short L_fail
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [esp + 0x4]
        push ecx
        mov eax, dword ptr [edx + 0x10]
        push eax
        call dword ptr [mem_00925198]
        add esp, 0x8
        ret 0x4
    L_fail:
        or eax, -0x1
        ret 0x4
    }
}

// [0x00782C40] sub_00782C40 (43 bytes)
extern "C" int __cdecl fn_00782C40(unsigned int idx) {
    switch (idx) {
    case 0: return 0xaaf318;
    case 1: return 0xaaf2e4;
    case 2: return 0xaaf320;
    case 3: return 0xaaf304;
    default: return 0;
    }
}

// [0x00783410] sub_00783410 (42 bytes)
extern "C" int mem_009252AC;
extern "C" __declspec(naked) int __fastcall fn_00783410(void* self, int edx_unused, int a1, int a2) {
    __asm {
        mov eax, dword ptr [ecx + 0x4]
        mov cl, byte ptr [eax + 0x4]
        test cl, cl
        je short L_null
        mov eax, dword ptr [eax]
        mov ecx, dword ptr [esp + 0x8]
        mov edx, dword ptr [esp + 0x4]
        push eax
        push ecx
        push 0x1
        push edx
        call dword ptr [mem_009252AC]
        add esp, 0x10
        ret 0x8
L_null:
        xor eax, eax
        ret 0x8
    }
}

// [0x00783090] sub_00783090 (41 bytes)
extern "C" void __cdecl fn_00783090() {
    mem_00B608B8 = 0xb608b4;
    mem_00B608C0 = 0xaaf39c;
    mem_00B608BC = 0xb5e3f0;
    mem_00B608C4 = 0;
}

// [0x00783510] sub_00783510 (43 bytes)
extern "C" __declspec(naked) unsigned char __fastcall fn_00783510(void* self, int edx_unused, void* dst) {
    __asm {
        mov eax, dword ptr [ecx + 0x4]
        mov cl, byte ptr [eax + 0x4]
        test cl, cl
        je short L_fail
        mov eax, dword ptr [eax]
        push esi
        mov esi, dword ptr [esp + 0x8]
        push eax
        push 1
        push 1
        push esi
        call dword ptr [mem_009252AC]
        mov al, byte ptr [esi]
        add esp, 0x10
        pop esi
        ret 4
    L_fail:
        xor al, al
        ret 4
    }
}

// [0x00782C00] sub_00782C00 (43 bytes)
extern "C" int mem_00AAF318;
extern "C" int mem_00AAF2F4;
extern "C" int mem_00AAF30C;
extern "C" int mem_00AAF304;
extern "C" void* __cdecl fn_00782C00(unsigned int a) {
    switch (a) {
        case 0: return &mem_00AAF318;
        case 1: return &mem_00AAF2F4;
        case 2: return &mem_00AAF30C;
        case 3: return &mem_00AAF304;
        default: return 0;
    }
}

// [0x007875C0] sub_007875C0 (46 bytes)
extern "C" double mem_00B60B90;
extern "C" double mem_00B60B98;
extern "C" double mem_00B60BA0;
extern "C" double mem_00B60BA8;

extern "C" void __cdecl fn_007875C0() {
    mem_00B60B90 = -*(double*)mem_00925284;
    mem_00B60B98 = -*(double*)mem_00925284;
    mem_00B60BA0 = -*(double*)mem_00925284;
    mem_00B60BA8 = -*(double*)mem_00925284;
}

// [0x00789260] sub_00789260 (46 bytes)
extern "C" __declspec(naked) void* __fastcall fn_00789260(void* self, int edx_unused, int a1, int a2, int a3, int a4) {
    __asm {
        mov edx, dword ptr [esp + 0x8]
        mov eax, ecx
        mov ecx, dword ptr [esp + 0x4]
        mov dword ptr [eax + 0x4], ecx
        mov ecx, dword ptr [esp + 0xc]
        mov dword ptr [eax + 0x8], edx
        mov dl, byte ptr [esp + 0x10]
        mov dword ptr [eax + 0xc], ecx
        mov byte ptr [eax + 0x10], dl
        mov dword ptr [eax + 0x14], 0x0
        mov dword ptr [eax], 0x996fa0
        ret 0x10
    }
}

// [0x00786050] sub_00786050 (46 bytes)
extern "C" int mem_00B60A10;
extern "C" int mem_00B60A18;
extern "C" int mem_00B60A20;
extern "C" int mem_00B60A28;

extern "C" __declspec(naked) void __cdecl fn_00786050() {
    __asm {
        mov eax, dword ptr [mem_00925284]
        fld qword ptr [eax]
        fchs
        fstp qword ptr [mem_00B60A10]
        fld qword ptr [eax]
        fchs
        fstp qword ptr [mem_00B60A18]
        fld qword ptr [eax]
        fchs
        fstp qword ptr [mem_00B60A20]
        fld qword ptr [eax]
        fchs
        fstp qword ptr [mem_00B60A28]
        ret
    }
}

// [0x007853D0] sub_007853D0 (54 bytes)
extern "C" __declspec(naked) void* __fastcall fn_007853D0(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        mov edx, dword ptr [esp + 0x8]
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [esi + 0x8], eax
        xor eax, eax
        mov dword ptr [esi + 0x10], eax
        mov dword ptr [esi + 0x14], eax
        push ecx
        mov dword ptr [esi + 0x18], eax
        push edx
        lea ecx, [esi + 0x20]
        mov dword ptr [esi + 0x1c], eax
        call ext_006E73B0
        mov dword ptr [esi], offset mem_00996EDC
        mov eax, esi
        pop esi
        ret 0xc
    }
}

// [0x00784750] sub_00784750 (55 bytes)
extern "C" void ext_007847B0();
extern "C" __declspec(naked) void __fastcall fn_00784750(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        mov esi, ecx
        test edi, edi
        jl short L_fail
        cmp edi, dword ptr [esi + 0x4]
        jge short L_fail
        call ext_007847B0
        mov eax, dword ptr [esp + 0x10]
        test eax, eax
        je short L_skip
        mov ecx, dword ptr [esi]
        mov edx, dword ptr [ecx + edi * 8]
        mov dword ptr [eax], edx
L_skip:
        mov eax, dword ptr [esi]
        mov eax, dword ptr [eax + edi * 8 + 4]
        pop edi
        pop esi
        ret 0x8
L_fail:
        pop edi
        xor eax, eax
        pop esi
        ret 0x8
    }
}

// [0x007847E0] sub_007847E0 (57 bytes)
extern "C" int mem_0092529C;
extern "C" __declspec(naked) void* __fastcall fn_007847E0(void* self, int edx_unused, int key) {
    __asm {
        sub esp, 0x8
        mov eax, dword ptr [esp + 0xc]
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x00
        mov eax, dword ptr [ecx + 0x4]
        test eax, eax
        jle L_ret_null
        mov ecx, dword ptr [ecx]
        push 0x784790
        push 0x8
        push eax
        lea edx, [esp + 0xc]
        push ecx
        push edx
        call dword ptr [mem_0092529C]
        add esp, 0x14
        add esp, 0x8
        ret 0x4
    L_ret_null:
        xor eax, eax
        add esp, 0x8
        ret 0x4
    }
}

// [0x0078BEF0] sub_0078BEF0 (58 bytes)
extern "C" __declspec(naked) void __fastcall fn_0078BEF0(void* self, int edx_unused, void* arg) {
    __asm {
        push esi
        mov esi, ecx
        push edi
        mov eax, dword ptr [esi]
        call dword ptr [eax + 0x2c]
        test al, al
        je short L_exit
        mov edx, dword ptr [esi]
        mov ecx, esi
        call dword ptr [edx + 0x34]
        mov edi, dword ptr [esp + 0xc]
        mov ecx, esi
        push edi
        call ext_00789670
        mov eax, dword ptr [esi]
        mov ecx, esi
        mov dword ptr [esi + 0x24], 0xffffffff
        call dword ptr [eax + 0x30]
        test eax, eax
        jne short L_exit
        mov dword ptr [esi + 0x1c], edi
L_exit:
        pop edi
        pop esi
        ret 0x4
    }
}

// [0x00783470] sub_00783470 (66 bytes)
extern "C" int mem_009252AC;
extern "C" __declspec(naked) void __fastcall fn_00783470(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push ebp
        mov ebp, esp
        mov eax, dword ptr [ecx + 0x4]
        mov cl, byte ptr [eax + 0x4]
        test cl, cl
        je short L_null
        mov eax, dword ptr [eax]
        push esi
        mov esi, dword ptr [ebp + 0x8]
        push eax
        push 0x1
        push 0x4
        push esi
        call dword ptr [mem_009252AC]
        mov al, byte ptr [ebp + 0xc]
        add esp, 0x10
        test al, al
        je short L_noswap
        mov ecx, dword ptr [esi]
        mov dword ptr [ebp + 0xc], ecx
        mov eax, dword ptr [ebp + 0xc]
        bswap eax
        mov dword ptr [esi], eax
L_noswap:
        mov eax, dword ptr [esi]
        pop esi
        pop ebp
        ret 0x8
L_null:
        xor eax, eax
        pop ebp
        ret 0x8
    }
}

// [0x007834C0] sub_007834C0 (71 bytes)
extern "C" __declspec(naked) unsigned short __fastcall fn_007834C0(void* self, int edx_unused, unsigned short* out, unsigned char swap_bytes) {
    __asm {
        push ebp
        mov ebp, esp
        mov eax, dword ptr [ecx + 0x4]
        mov cl, byte ptr [eax + 0x4]
        test cl, cl
        je short L_zero
        mov eax, dword ptr [eax]
        push esi
        mov esi, dword ptr [ebp + 0x8]
        push eax
        push 0x1
        push 0x2
        push esi
        call dword ptr [mem_009252AC]
        mov al, byte ptr [ebp + 0xc]
        add esp, 0x10
        test al, al
        je short L_ret
        mov cx, word ptr [esi]
        mov dword ptr [ebp + 0xc], ecx
        mov ax, word ptr [ebp + 0xc]
        xchg al, ah
        mov word ptr [esi], ax
    L_ret:
        mov ax, word ptr [esi]
        pop esi
        pop ebp
        ret 0x8
    L_zero:
        xor ax, ax
        pop ebp
        ret 0x8
    }
}

// [0x007856A0] sub_007856A0 (72 bytes)
extern "C" __declspec(naked) void __fastcall fn_007856A0(void* self, int edx_unused, int a1, int a2) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        push ebx
        push esi
        mov esi, ecx
        test eax, eax
        mov bl, 0x1
        jle short L_exit
        push ebp
        push edi
        mov edi, dword ptr [esp + 0x14]
        mov ebp, eax
L_loop:
        test bl, bl
        je short L_path2
        mov ecx, dword ptr [edi]
        mov eax, dword ptr [esi]
        push ecx
        mov ecx, esi
        call dword ptr [eax + 0x4]
        jmp short L_next
L_path2:
        mov eax, dword ptr [edi]
        mov edx, dword ptr [esi]
        push eax
        mov ecx, esi
        call dword ptr [edx + 0x4]
        mov bl, al
L_next:
        add edi, 0x4
        dec ebp
        jne short L_loop
        pop edi
        pop ebp
        mov al, bl
        pop esi
        pop ebx
        ret 0x8
L_exit:
        mov al, bl
        pop esi
        pop ebx
        ret 0x8
    }
}

// [0x0078BF70] sub_0078BF70 (84 bytes)
extern "C" int mem_009252B8;
extern "C" void ext_006A7270();
extern "C" __declspec(naked) void __fastcall fn_0078BF70(void* self) {
    __asm {
        mov eax, 0x4000
        call ext_006A7270
        mov ecx, dword ptr [esp + 0x4008]
        push esi
        lea eax, [esp + 0x4010]
        push edi
        push eax
        lea edx, [esp + 0xc]
        push ecx
        push edx
        call dword ptr [mem_009252B8]
        lea edi, [esp + 0x14]
        or ecx, -1
        xor eax, eax
        add esp, 0xc
        mov edx, dword ptr [esp + 0x400c]
        repne scasb
        mov esi, dword ptr [edx]
        lea eax, [esp + 0x8]
        not ecx
        push ecx
        push eax
        mov ecx, edx
        call dword ptr [esi + 0x1c]
        pop edi
        pop esi
        add esp, 0x4000
        ret
    }
}

// [0x007877E0] sub_007877E0 (85 bytes)
extern "C" __declspec(naked) void* __fastcall fn_007877E0(void* self) {
    __asm {
        push -0x1
        push 0x8c1b28
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        push 0x4
        mov esi, ecx
        push 0xaaf520
        push 0xaaf550
        mov dword ptr [esp + 0x10], esi
        call ext_007853D0
        mov ecx, esi
        mov dword ptr [esp + 0x10], 0x0
        mov dword ptr [esi], 0x996f6c
        call ext_00788C40
        mov ecx, dword ptr [esp + 0x8]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00786270] sub_00786270 (85 bytes)
extern "C" __declspec(naked) void* __fastcall fn_00786270(void* self) {
    __asm {
        push -1
        push 0x8c1b28
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        push 4
        mov esi, ecx
        push 0xaaf45c
        push 0xaaf490
        mov dword ptr [esp + 0x10], esi
        call ext_007853D0
        mov ecx, esi
        mov dword ptr [esp + 0x10], 0
        mov dword ptr [esi], 0x996f30
        call ext_007865D0
        mov ecx, dword ptr [esp + 8]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00785810] sub_00785810 (85 bytes)
extern "C" void ext_007853D0();
extern "C" void ext_00785E00();
// SEH-protected constructor-style body: installs an EH frame (handler 0x8c1b28),
// calls 0x7853D0 with (2, 0xaaf410, 0xaaf418), clears the try level, sets vtable 0x996f00,
// calls 0x785E00, restores the previous frame and returns self in eax.
extern "C" __declspec(naked) void* __fastcall fn_00785810(void* self) {
    __asm {
        push -1
        push 0x8c1b28
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        push 2
        mov esi, ecx
        push 0xaaf410
        push 0xaaf418
        mov dword ptr [esp + 0x10], esi
        call ext_007853D0
        mov ecx, esi
        mov dword ptr [esp + 0x10], 0
        mov dword ptr [esi], 0x996f00
        call ext_00785E00
        mov ecx, dword ptr [esp + 0x8]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x0078FF40] sub_0078FF40 (85 bytes)
extern "C" __declspec(naked) void __stdcall fn_0078FF40(void* a0, const double* a1, const int* a2, int a3) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -8
        sub esp, 0xc
        push ebx
        push esi
        mov esi, dword ptr [ebp + 0x10]
        push edi
        mov edi, dword ptr [ebp + 0xc]
        mov ebx, 0x10
    L_loop:
        fld qword ptr [edi]
        fst qword ptr [esp + 0x10]
        fcomp qword ptr [mem_0092A278]
        fnstsw ax
        test ah, 0x40
        jne short L_skip
        mov eax, dword ptr [esp + 0x14]
        mov ecx, dword ptr [esp + 0x10]
        mov edx, dword ptr [ebp + 0x14]
        push eax
        mov eax, dword ptr [esi]
        push ecx
        mov ecx, dword ptr [ebp + 0x8]
        push edx
        push eax
        call ext_0078D420
    L_skip:
        add edi, 8
        add esi, 4
        dec ebx
        jne short L_loop
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0x10
    }
}

// [0x00783670] sub_00783670 (83 bytes)
extern "C" __declspec(naked) void __cdecl fn_00783670(void* self, const char* fmt, ...) {
    __asm {
        mov eax, 0x4000
        call ext_006A7270
        push esi
        mov esi, dword ptr [esp + 0x4008]
        mov eax, dword ptr [esi + 0x4]
        mov cl, byte ptr [eax + 0x4]
        test cl, cl
        je short done
        mov edx, dword ptr [esp + 0x400c]
        lea ecx, [esp + 0x4010]
        push ecx
        lea eax, [esp + 0x8]
        push edx
        push eax
        call dword ptr [mem_009252B8]
        mov ecx, dword ptr [esi + 0x4]
        lea eax, [esp + 0x10]
        mov edx, dword ptr [ecx]
        push edx
        push eax
        call dword ptr [mem_009252C8]
        add esp, 0x14
    done:
        pop esi
        add esp, 0x4000
        ret
    }
}

// [0x0078BE60] sub_0078BE60 (89 bytes)
extern "C" __declspec(naked) void __fastcall fn_0078BE60(void* self, int edx_unused, int a1, int a2) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        cmp eax, 0x1
        mov esi, ecx
        jne short L_check2
        mov ecx, dword ptr [esi + 0x1c]
        mov edx, dword ptr [esp + 0xc]
        mov eax, dword ptr [esi]
        add ecx, edx
        push ecx
        mov ecx, esi
        call dword ptr [eax + 0x28]
        pop esi
        ret 0x8
    L_check2:
        cmp eax, 0x2
        jne short L_other
        push 0x0
        push eax
        mov ecx, esi
        call ext_00789620
        mov ecx, esi
        call ext_00789650
        mov ecx, dword ptr [esp + 0xc]
        mov edx, dword ptr [esi]
        add eax, ecx
        mov ecx, esi
        push eax
        call dword ptr [edx + 0x28]
        pop esi
        ret 0x8
    L_other:
        mov eax, dword ptr [esp + 0xc]
        mov edx, dword ptr [esi]
        push eax
        mov ecx, esi
        call dword ptr [edx + 0x28]
        pop esi
        ret 0x8
    }
}

// [0x00783020] sub_00783020 (95 bytes)
extern "C" int mem_0092529C;
extern "C" void ext_00782FC0();
extern "C" void ext_00782FE0();
extern "C" __declspec(naked) void* __fastcall fn_00783020(void* self, int edx_unused, int key) {
    __asm {
        sub esp, 0x8
        mov eax, dword ptr [esp + 0xc]
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x00
        mov eax, dword ptr [ecx + 0x4]
        test eax, eax
        je short L_zero
        mov dl, byte ptr [ecx + 0x11]
        test dl, dl
        je short L_strcmp
        mov ecx, dword ptr [ecx]
        push offset ext_00782FE0
        push 8
        push eax
        lea edx, dword ptr [esp + 0xc]
        push ecx
        push edx
        call dword ptr [mem_0092529C]
        add esp, 0x14
        add esp, 0x8
        ret 0x4
    L_strcmp:
        push offset ext_00782FC0
        push 8
        push eax
        mov eax, dword ptr [ecx]
        lea ecx, dword ptr [esp + 0xc]
        push eax
        push ecx
        call dword ptr [mem_0092529C]
        add esp, 0x14
        add esp, 0x8
        ret 0x4
    L_zero:
        xor eax, eax
        add esp, 0x8
        ret 0x4
    }
}

// [0x0078A1A0] sub_0078A1A0 (93 bytes)
extern "C" int mem_0078A200;
extern "C" int mem_0078A20C;
extern "C" __declspec(naked) int __fastcall fn_0078A1A0(void* self, int edx_unused, const char* str, int start) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        lea esi, [eax + 0x1]
        xor al, al
        mov dl, 0x1
        mov cl, byte ptr [esi + edi]
        test cl, cl
        je L_ret_neg1
        push ebx
    L_loop:
        cmp dl, 0x1
        jne L_check_found
        movsx ecx, cl
        cmp ecx, 0x40
        ja L_default
        xor ebx, ebx
        mov bl, byte ptr [ecx + mem_0078A20C]
        jmp dword ptr [4 * ebx + mem_0078A200]
        // case 0:
        xor al, al
        xor dl, dl
        jmp L_next
        // case 1:
        mov al, 0x1
        xor dl, dl
        jmp L_next
    L_default:
        inc esi
    L_next:
        mov cl, byte ptr [esi + edi]
        test cl, cl
        jne L_loop
    L_check_found:
        cmp al, 0x1
        pop ebx
        jne L_ret_neg1
        mov eax, esi
        pop edi
        pop esi
        ret 0x8
    L_ret_neg1:
        pop edi
        or eax, -0x1
        pop esi
        ret 0x8
    }
}

// [0x00789810] sub_00789810 (97 bytes)
extern "C" void ext_00789260();
extern "C" void ext_00789940();
extern "C" int mem_008C16A8;
extern "C" int mem_00996FE4;
// SEH-guarded __thiscall(self, a1..a4) ret 0x10: calls sub_00789260(a1..a4) with ecx=self,
// sets self->vtbl = 0x996fe4, calls sub_00789940 on self, restores the SEH frame, returns self.
extern "C" __declspec(naked) void* __fastcall fn_00789810(void* self, int edx_unused, int a1, int a2, int a3, int a4) {
    __asm {
        push -1
        push offset mem_008C16A8
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        push ecx
        mov eax, dword ptr [esp + 0x20]
        mov edx, dword ptr [esp + 0x18]
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 0x20]
        push eax
        mov eax, dword ptr [esp + 0x1c]
        push ecx
        push edx
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0x14], esi
        call ext_00789260
        mov ecx, esi
        mov dword ptr [esp + 0x10], 0
        mov dword ptr [esi], offset mem_00996FE4
        call ext_00789940
        mov ecx, dword ptr [esp + 0x8]
        mov eax, esi
        pop esi
        mov fs:[0], ecx
        add esp, 0x10
        ret 0x10
    }
}

// [0x0078FED0] sub_0078FED0 (104 bytes)
extern "C" __declspec(naked) void __fastcall fn_0078FED0(
    void* self, int edx_unused,
    int a1, int* a2, unsigned int a3, double* a4, double* a5, double* a6, int* a7)
{
    __asm {
        mov ecx, dword ptr [esp + 0x1c]
        mov eax, dword ptr [esp + 0x18]
        push ebx
        mov ebx, dword ptr [esp + 0xc]
        push ebp
        mov ebp, dword ptr [esp + 0x18]
        push esi
        push edi
        mov edi, dword ptr [esp + 0x24]
        sub ebx, ecx
        sub ebp, edi
        sub eax, edi
        mov esi, edi
        mov dword ptr [esp + 0x2c], eax
        mov dword ptr [esp + 0x24], 0x10
    L_loop:
        mov eax, dword ptr [ebx + ecx]
        mov edx, dword ptr [esp + 0x14]
        sub eax, edx
        xor edx, edx
        sar eax, 0x3
        div dword ptr [esp + 0x1c]
        test edi, edi
        mov dword ptr [ecx], eax
        fld qword ptr [esi + ebp]
        je short L_skip_mul
        fmul qword ptr [esi]
    L_skip_mul:
        mov eax, dword ptr [esp + 0x2c]
        add ecx, 0x4
        fstp qword ptr [eax + esi]
        mov eax, dword ptr [esp + 0x24]
        add esi, 0x8
        dec eax
        mov dword ptr [esp + 0x24], eax
        jne short L_loop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x1c
    }
}

// [0x0078D260] sub_0078D260 (94 bytes)
extern "C" void ext_006A6C99();
extern "C" void ext_0078D330();
extern "C" __declspec(naked) void* __fastcall fn_0078D260(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push -1
        push 0x008c17a3
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        push 0x0074adf0
        push 0x0078d2c0
        mov esi, ecx
        push 2
        push 0x18
        push esi
        mov dword ptr [esp + 0x18], esi
        call ext_006A6C99
        mov eax, dword ptr [esp + 0x1c]
        mov ecx, dword ptr [esp + 0x18]
        push eax
        push ecx
        mov ecx, esi
        mov dword ptr [esp + 0x18], 0
        call ext_0078D330
        mov ecx, dword ptr [esp + 0x8]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 8
    }
}

// [0x0078A20C] sub_0078A20C (106 bytes)
extern "C" void ext_0078A280();
extern "C" void ext_0078A450();
extern "C" __declspec(naked) void __fastcall fn_0078A20C(void* self) {
    __asm {
        _emit 0x00
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x00
        _emit 0x02
        _emit 0x02
        _emit 0x00
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x00
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x00
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x01
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x02
        _emit 0x00
        _emit 0x90
        _emit 0x90
        _emit 0x90
        mov al, byte ptr [ecx + 0x20]
        test al, al
        je short L_fallback
        mov eax, dword ptr [esp + 0x8]
        mov edx, dword ptr [esp + 0x4]
        push eax
        push edx
        call ext_0078A280
        ret 0x8
    L_fallback:
        mov eax, dword ptr [esp + 0x4]
        push eax
        call ext_0078A450
        ret 0x8
    }
}

// [0x0078BDE0] sub_0078BDE0 (121 bytes)
extern "C" __declspec(naked) unsigned int __fastcall fn_0078BDE0(void* self, int edx_unused, void* buf, unsigned int len) {
    __asm {
        push ebx
        push esi
        mov esi, dword ptr [esp + 0x10]
        push edi
        test esi, esi
        mov edi, ecx
        mov ebx, esi
        jbe L_ret0
        mov eax, dword ptr [esp + 0x10]
        test eax, eax
        je L_ret0
        test esi, esi
        je L_done_no_ebp
        push ebp
    L_loop:
        mov eax, dword ptr [edi + 0x1c]
        mov ecx, edi
        push eax
        call ext_0078C220
        mov ecx, dword ptr [edi + 0x1c]
        mov ebp, eax
        push ecx
        mov ecx, edi
        call ext_0078C260
        mov ecx, esi
        mov esi, 0x10
        sub esi, eax
        sub ecx, ebx
        cmp esi, ebx
        jle L_le
        mov esi, ebx
    L_le:
        mov edx, dword ptr [esp + 0x14]
        add ecx, edx
        push ecx
        push esi
        push eax
        push ebp
        mov ecx, edi
        call ext_0078C080
        mov ecx, dword ptr [edi + 0x1c]
        add ecx, esi
        sub ebx, esi
        mov esi, dword ptr [esp + 0x18]
        mov dword ptr [edi + 0x1c], ecx
        jne L_loop
        pop ebp
    L_done_no_ebp:
        mov eax, esi
        pop edi
        sub eax, ebx
        pop esi
        pop ebx
        ret 0x8
    L_ret0:
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        ret 0x8
    }
}

// [0x0078BCD0] sub_0078BCD0 (125 bytes)
extern "C" void ext_0078C030();
extern "C" __declspec(naked) int __fastcall fn_0078BCD0(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push ebx
        push esi
        mov esi, dword ptr [esp + 0x10]
        push edi
        test esi, esi
        mov edi, ecx
        mov ebx, esi
        jbe short L_ret0
        mov eax, dword ptr [esp + 0x10]
        test eax, eax
        je short L_ret0
        push ebp
        jmp short L_loop
    L_adv:
        mov esi, dword ptr [esp + 0x18]
    L_loop:
        mov eax, dword ptr [edi + 0x1c]
        mov ecx, edi
        push eax
        call ext_0078C220
        mov ecx, dword ptr [edi + 0x1c]
        mov ebp, eax
        push ecx
        mov ecx, edi
        call ext_0078C260
        mov ecx, esi
        mov esi, 0x10
        sub esi, eax
        sub ecx, ebx
        cmp esi, ebx
        jbe short L_skip
        mov esi, ebx
    L_skip:
        mov edx, dword ptr [esp + 0x14]
        add ecx, edx
        push ecx
        push esi
        push eax
        push ebp
        mov ecx, edi
        call ext_0078C030
        test al, al
        je short L_end
        mov ecx, dword ptr [edi + 0x1c]
        add ecx, esi
        sub ebx, esi
        mov dword ptr [edi + 0x1c], ecx
        jne short L_adv
    L_end:
        mov eax, dword ptr [esp + 0x18]
        pop ebp
        pop edi
        sub eax, ebx
        pop esi
        pop ebx
        ret 0x8
    L_ret0:
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        ret 0x8
    }
}

// [0x0078D7A0] sub_0078D7A0 (132 bytes)
extern "C" __declspec(naked) void __fastcall fn_0078D7A0(void* self) {
    __asm {
        mov eax, ecx
        mov edx, 4
        xor ecx, ecx
        mov dword ptr [eax + 0x10], edx
        mov dword ptr [eax + 0x14], edx
        mov dword ptr [eax + 0x18], edx
        mov dword ptr [eax + 0x1c], edx
        mov edx, 1
        mov dword ptr [eax], 0x99708c
        mov dword ptr [eax + 0x8], ecx
        mov dword ptr [eax + 0xc], ecx
        mov dword ptr [eax + 0x28], ecx
        mov dword ptr [eax + 0x2c], ecx
        mov dword ptr [eax + 0x30], ecx
        mov dword ptr [eax + 0x34], ecx
        mov dword ptr [eax + 0x48], ecx
        mov dword ptr [eax + 0x4c], ecx
        mov dword ptr [eax + 0x50], ecx
        mov dword ptr [eax + 0x20], edx
        mov dword ptr [eax + 0x24], edx
        mov dword ptr [eax + 0x5c], edx
        mov dword ptr [eax + 0x54], ecx
        mov dword ptr [eax + 0x58], ecx
        mov dword ptr [eax + 0x234], ecx
        mov dword ptr [eax + 0x238], ecx
        mov dword ptr [eax + 0x244], ecx
        mov dword ptr [eax + 0x23c], ecx
        mov dword ptr [eax + 0x240], ecx
        mov dword ptr [eax + 0x248], ecx
        mov dword ptr [eax + 0x24c], ecx
        mov dword ptr [eax + 0x60], edx
        mov byte ptr [eax + 0x64], cl
        mov byte ptr [eax + 0x65], cl
        mov byte ptr [eax + 0x66], cl
        mov byte ptr [eax + 0x67], cl
        ret
    }
}

// [0x0078BD50] sub_0078BD50 (135 bytes)
extern "C" __declspec(naked) char* __fastcall fn_0078BD50(void* self, int edx_unused, char* buf, int maxLen) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0xc]
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        test eax, eax
        mov dword ptr [esp + 0x10], ecx
        jg short L_gt_zero
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        pop ecx
        ret 0x8
    L_gt_zero:
        cmp eax, 0x1
        jne short L_gt_one
        mov eax, dword ptr [esp + 0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr [eax], 0x0
        pop ebx
        pop ecx
        ret 0x8
    L_gt_one:
        mov ebx, dword ptr [esp + 0x18]
        lea ebp, [eax - 0x1]
        test ebp, ebp
        jle short L_done_loop
        mov esi, ebx
        jmp short L_loop_body
    L_loop_top:
        mov ecx, dword ptr [esp + 0x10]
    L_loop_body:
        mov eax, dword ptr [ecx]
        push 0x1
        push esi
        call dword ptr [eax + 0x14]
        cmp eax, 0x1
        jne short L_read_fail
        cmp byte ptr [esi], 0xa
        je short L_newline
        inc edi
        inc esi
        cmp edi, ebp
        jl short L_loop_top
    L_done_loop:
        mov byte ptr [edi + ebx], 0x0
        pop edi
        pop esi
        mov eax, ebx
        pop ebp
        pop ebx
        pop ecx
        ret 0x8
    L_read_fail:
        mov byte ptr [edi + ebx], 0x0
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        pop ecx
        ret 0x8
    L_newline:
        mov byte ptr [edi + ebx + 0x1], 0x0
        pop edi
        pop esi
        mov eax, ebx
        pop ebp
        pop ebx
        pop ecx
        ret 0x8
    }
}

// [0x00785550] sub_00785550 (141 bytes)
extern "C" void ext_006C9F00();
extern "C" void ext_006CA060();
extern "C" void ext_006CA6A0();
extern "C" void ext_006CAEF0();
extern "C" void ext_00872828();
extern "C" __declspec(naked) int __fastcall fn_00785550(void* self, int edx_unused, void* arg) {
    __asm {
        sub esp, 0x10
        push esi
        push edi
        mov edi, dword ptr [esp + 0x1c]
        mov esi, ecx
        mov ecx, edi
        call ext_006CA6A0
        test eax, eax
        jne short L_nonzero
        pop edi
        or eax, -0x1
        pop esi
        add esp, 0x10
        ret 0x4
    L_nonzero:
        lea eax, [esp + 0x10]
        mov ecx, edi
        push eax
        call ext_006CA6A0
        dec eax
        mov ecx, edi
        push eax
        call ext_006CA060
        mov ecx, eax
        call ext_006C9F00
        mov edx, dword ptr [esi + 0x18]
        mov ecx, dword ptr [eax]
        mov eax, dword ptr [eax + 0x4]
        mov dword ptr [esp + 0x8], edx
        mov edx, dword ptr [esi + 0x1c]
        mov dword ptr [esp + 0x10], ecx
        cmp edx, eax
        mov dword ptr [esp + 0x14], eax
        mov dword ptr [esp + 0xc], edx
        jg short L_use_10
        jl short L_use_08
        mov eax, dword ptr [esi + 0x18]
        cmp eax, ecx
        jae short L_use_10
    L_use_08:
        lea eax, [esp + 0x8]
        jmp short L_call_ef0
    L_use_10:
        lea eax, [esp + 0x10]
    L_call_ef0:
        mov ecx, dword ptr [eax]
        mov eax, dword ptr [eax + 0x4]
        push 0x0
        push eax
        push ecx
        mov ecx, edi
        call ext_006CAEF0
        call ext_00872828
        pop edi
        inc eax
        pop esi
        add esp, 0x10
        ret 0x4
    }
}

// [0x007898A0] sub_007898A0 (118 bytes)
extern "C" void ext_00789590();
extern "C" void ext_007895F0();
extern "C" void ext_00789980();

extern "C" __declspec(naked) void __fastcall fn_007898A0(void* self) {
    __asm {
        push ecx
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 0xc], 2
        jne short L_done
        push ebx
        call ext_00789980
        mov ebx, eax
        lea ecx, [esp + 0xb]
        not ebx
        mov eax, ebx
        push 1
        shr eax, 0x18
        push ecx
        mov ecx, esi
        mov byte ptr [esp + 0x13], al
        call ext_007895F0
        mov edx, ebx
        lea eax, [esp + 0xb]
        shr edx, 0x10
        push 1
        push eax
        mov ecx, esi
        mov byte ptr [esp + 0x13], dl
        call ext_007895F0
        mov ecx, ebx
        lea edx, [esp + 0xb]
        shr ecx, 8
        mov byte ptr [esp + 0xb], cl
        push 1
        push edx
        mov ecx, esi
        call ext_007895F0
        lea eax, [esp + 0xb]
        push 1
        push eax
        mov ecx, esi
        mov byte ptr [esp + 0x13], bl
        call ext_007895F0
        pop ebx
    L_done:
        mov ecx, esi
        call ext_00789590
        pop esi
        pop ecx
        ret
    }
}

// [0x007831E0] sub_007831E0 (100 bytes)
extern "C" void ext_006A5C62();
extern "C" void ext_006B9D10();
extern "C" __declspec(naked) void __fastcall fn_007831E0(void* self) {
    __asm {
        push -1
        push 0x8c153b
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        lea ecx, [esi + 0xc]
        call ext_006B9D10
        push 0x8
        mov dword ptr [esp + 0x14], 0
        mov dword ptr [esi], 0x996e80
        call ext_006A5C62
        add esp, 0x4
        test eax, eax
        je short L_null
        mov dword ptr [eax], 0
        mov byte ptr [eax + 0x4], 0
        jmp short L_store
    L_null:
        xor eax, eax
    L_store:
        mov ecx, dword ptr [esp + 0x8]
        mov dword ptr [esi + 0x4], eax
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00784570] sub_00784570 (165 bytes)
extern "C" int mem_00B60930;
extern "C" int mem_00B60934;
extern "C" int mem_00B60938;
extern "C" int mem_00B6093C;
extern "C" int mem_00B60940;
extern "C" int mem_00B60944;
extern "C" int mem_00B60948;
extern "C" int mem_00B6094C;
extern "C" int mem_00B60950;
extern "C" int mem_00B60954;
extern "C" int mem_00B60958;
extern "C" int mem_00B6095C;
extern "C" int mem_00B60960;
extern "C" int mem_00B60964;
extern "C" int mem_00B60968;
extern "C" int mem_00B6096C;
extern "C" int mem_00B60970;
extern "C" int mem_00B60974;
extern "C" int mem_00B60978;
extern "C" int mem_00B6097C;
extern "C" int mem_00B60980;
extern "C" int mem_00B60984;
extern "C" int mem_00B60988;
extern "C" int mem_00B60990;
extern "C" int mem_00B60994;
extern "C" int mem_00B60998;
extern "C" int mem_00B6099C;
extern "C" int mem_00B609A0;
extern "C" int mem_00B609A4;
extern "C" __declspec(naked) void __fastcall fn_00784570(void* self) {
    __asm {
        xor eax, eax
        mov ecx, 0x1
        mov dword ptr [mem_00B60930], eax
        mov dword ptr [mem_00B60934], eax
        mov dword ptr [mem_00B60938], eax
        mov dword ptr [mem_00B6093C], eax
        mov dword ptr [mem_00B60940], eax
        mov dword ptr [mem_00B60944], eax
        mov dword ptr [mem_00B60948], eax
        mov dword ptr [mem_00B6094C], eax
        mov dword ptr [mem_00B60950], eax
        mov dword ptr [mem_00B60954], eax
        mov dword ptr [mem_00B60958], eax
        mov dword ptr [mem_00B6095C], eax
        mov dword ptr [mem_00B60960], eax
        mov dword ptr [mem_00B60964], eax
        mov dword ptr [mem_00B60968], eax
        mov dword ptr [mem_00B6096C], eax
        mov dword ptr [mem_00B60970], eax
        mov dword ptr [mem_00B60974], 0xffffffff
        mov dword ptr [mem_00B60978], eax
        mov dword ptr [mem_00B6097C], ecx
        mov dword ptr [mem_00B60980], ecx
        mov dword ptr [mem_00B60984], eax
        mov dword ptr [mem_00B60988], eax
        mov dword ptr [mem_00B60990], eax
        mov dword ptr [mem_00B60994], eax
        mov byte ptr [mem_00B60998], al
        mov dword ptr [mem_00B6099C], 0xff
        mov dword ptr [mem_00B609A0], eax
        mov byte ptr [mem_00B609A4], al
        ret
    }
}

// [0x007861C0] sub_007861C0 (166 bytes)
extern "C" double mem_00B60AB0;
extern "C" double mem_00B60AB8;
extern "C" double mem_00B60AC0;
extern "C" double mem_00B60AC8;
extern "C" double mem_00B60AD0;
extern "C" double mem_00B60AD8;
extern "C" double mem_00B60AE0;
extern "C" double mem_00B60AE8;
extern "C" double mem_00B60AF0;
extern "C" double mem_00B60AF8;
extern "C" double mem_00B60B00;
extern "C" double mem_00B60B08;
extern "C" double mem_00B60B10;
extern "C" double mem_00B60B18;
extern "C" double mem_00B60B20;
extern "C" double mem_00B60B28;
extern "C" void __cdecl fn_007861C0() {
    double* h = (double*)mem_00925284;
    mem_00B60AB0 = -*h;
    mem_00B60AB8 = -*h;
    mem_00B60AC0 = -*h;
    mem_00B60AC8 = -*h;
    mem_00B60AD0 = -*h;
    mem_00B60AD8 = -*h;
    mem_00B60AE0 = -*h;
    mem_00B60AE8 = -*h;
    mem_00B60AF0 = -*h;
    mem_00B60AF8 = -*h;
    mem_00B60B00 = -*h;
    mem_00B60B08 = -*h;
    mem_00B60B10 = -*h;
    mem_00B60B18 = -*h;
    mem_00B60B20 = -*h;
    mem_00B60B28 = -*h;
}

// [0x00787730] sub_00787730 (166 bytes)
// [VA] 0x00787730
extern "C" int mem_00925284;
extern "C" double mem_00B60C30;
extern "C" double mem_00B60C38;
extern "C" double mem_00B60C40;
extern "C" double mem_00B60C48;
extern "C" double mem_00B60C50;
extern "C" double mem_00B60C58;
extern "C" double mem_00B60C60;
extern "C" double mem_00B60C68;
extern "C" double mem_00B60C70;
extern "C" double mem_00B60C78;
extern "C" double mem_00B60C80;
extern "C" double mem_00B60C88;
extern "C" double mem_00B60C90;
extern "C" double mem_00B60C98;
extern "C" double mem_00B60CA0;
extern "C" double mem_00B60CA8;
extern "C" void __cdecl fn_00787730() {
    double* h = (double*)mem_00925284;
    mem_00B60C30 = -*h;
    mem_00B60C38 = -*h;
    mem_00B60C40 = -*h;
    mem_00B60C48 = -*h;
    mem_00B60C50 = -*h;
    mem_00B60C58 = -*h;
    mem_00B60C60 = -*h;
    mem_00B60C68 = -*h;
    mem_00B60C70 = -*h;
    mem_00B60C78 = -*h;
    mem_00B60C80 = -*h;
    mem_00B60C88 = -*h;
    mem_00B60C90 = -*h;
    mem_00B60C98 = -*h;
    mem_00B60CA0 = -*h;
    mem_00B60CA8 = -*h;
}

// [0x0078AAF0] sub_0078AAF0 (176 bytes)
// SEH-framed wrapper: allocates 0x44-byte object (ext_006A5C62), constructs via ext_00789A30,
// stores result at this->[0x3c], calls ext_006CD310; ret 0x4.
extern "C" __declspec(naked) int __fastcall fn_0078AAF0(void* self, int edx_unused, int a1) {
    __asm {
        push -1
        push 0x8bf9f6
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov al, byte ptr [esi + 0x20]
        test al, al
        je short L_else
        mov eax, dword ptr [esi + 0x24]
        test eax, eax
        je short L_else
        push 0x44
        call ext_006A5C62
        add esp, 0x4
        mov dword ptr [esp + 0x4], eax
        test eax, eax
        mov dword ptr [esp + 0x10], 0x0
        je short L_null
        mov ecx, dword ptr [esi + 0x30]
        mov edx, dword ptr [esi + 0x24]
        add ecx, edx
        push ecx
        jmp short L_common
L_else:
        push 0x44
        call ext_006A5C62
        add esp, 0x4
        mov dword ptr [esp + 0x4], eax
        test eax, eax
        mov dword ptr [esp + 0x10], 0x1
        je short L_null
        push 0x0
L_common:
        mov dl, byte ptr [esi + 0x21]
        mov cl, byte ptr [esi + 0x20]
        push edx
        mov edx, dword ptr [esp + 0x20]
        push ecx
        mov ecx, dword ptr [esi + 0x18]
        push edx
        push ecx
        mov ecx, eax
        call ext_00789A30
        jmp short L_end
L_null:
        xor eax, eax
L_end:
        push esi
        mov ecx, eax
        mov dword ptr [esp + 0x14], 0xffffffff
        mov dword ptr [esi + 0x3c], eax
        call ext_006CD310
        mov ecx, dword ptr [esp + 0x8]
        mov eax, dword ptr [esi + 0x3c]
        pop esi
        mov fs:[0], ecx
        add esp, 0x10
        ret 0x4
    }
}

// [0x00789980] sub_00789980 (176 bytes)
extern "C" void ext_007895C0();
extern "C" void ext_00789620();
extern "C" void ext_00789650();
extern "C" void ext_00789670();

extern "C" __declspec(naked) void __fastcall fn_00789980(void* self) {
    __asm {
        push ecx
        push ebx
        push ebp
        push esi
        push edi
        mov esi, ecx
        call ext_00789650
        push 0x0
        push 0x2
        mov ecx, esi
        mov ebp, eax
        call ext_00789620
        mov ecx, esi
        call ext_00789650
        push 0x0
        push 0x0
        mov ecx, esi
        mov ebx, eax
        call ext_00789620
        lea eax, [ebx - 0x4]
        or edi, -0x1
        test eax, eax
        jle L_skip1
        mov ebx, eax
    L_loop1:
        lea eax, [esp + 0x10]
        push 0x1
        push eax
        mov ecx, esi
        call ext_007895C0
        mov edx, dword ptr [esp + 0x10]
        mov ecx, edi
        shr ecx, 0x18
        and edx, 0xff
        xor ecx, edx
        shl edi, 0x8
        mov eax, dword ptr [esi + 4*ecx + 0x18]
        xor edi, eax
        dec ebx
        jne L_loop1
    L_skip1:
        mov ebx, 0x4
    L_loop2:
        lea ecx, [esp + 0x10]
        push 0x1
        push ecx
        mov ecx, esi
        call ext_007895C0
        mov eax, dword ptr [esp + 0x10]
        mov edx, edi
        shr edx, 0x18
        and eax, 0xff
        xor edx, eax
        shl edi, 0x8
        mov ecx, dword ptr [esi + 4*edx + 0x18]
        xor edi, ecx
        dec ebx
        jne L_loop2
        push ebp
        mov ecx, esi
        call ext_00789670
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret
    }
}

// [0x007854A0] sub_007854A0 (176 bytes)
extern "C" void ext_006C9F00();
extern "C" void ext_006CA060();
extern "C" void ext_006CA6A0();
extern "C" void ext_006CAEF0();
extern "C" void ext_00872828();
extern "C" int mem_0092A270;
extern "C" int mem_0092A278;
extern "C" __declspec(naked) int __fastcall fn_007854A0(void* self, int edx_unused, int a1) {
    __asm {
        sub esp, 0x10
        push esi
        push edi
        mov edi, dword ptr [esp + 0x1c]
        mov esi, ecx
        mov ecx, edi
        call ext_006CA6A0
        test eax, eax
        jne L1
        pop edi
        or eax, -1
        pop esi
        add esp, 0x10
        ret 4
    L1:
        lea eax, dword ptr [esp + 0x10]
        mov ecx, edi
        push eax
        push 0
        call ext_006CA060
        mov ecx, eax
        call ext_006C9F00
        mov edx, dword ptr [esi + 0x10]
        mov ecx, dword ptr [eax]
        mov eax, dword ptr [eax + 4]
        mov dword ptr [esp + 8], edx
        mov edx, dword ptr [esi + 0x14]
        mov dword ptr [esp + 0x10], ecx
        cmp edx, eax
        mov dword ptr [esp + 0x14], eax
        mov dword ptr [esp + 0xc], edx
        jl L2
        jg L3
        mov eax, dword ptr [esi + 0x10]
        cmp eax, ecx
        jbe L2
    L3:
        lea eax, dword ptr [esp + 8]
        jmp L4
    L2:
        lea eax, dword ptr [esp + 0x10]
    L4:
        mov ecx, dword ptr [eax]
        mov eax, dword ptr [eax + 4]
        push 0
        push eax
        push ecx
        mov ecx, edi
        call ext_006CAEF0
        fsub qword ptr [mem_0092A270]
        fld qword ptr [mem_0092A278]
        fcomp st(1)
        fnstsw ax
        test ah, 0x41
        jne L5
        fstp st(0)
        fld qword ptr [mem_0092A278]
    L5:
        call ext_00872828
        pop edi
        pop esi
        add esp, 0x10
        ret 4
    }
}

// [0x0078C2F0] sub_0078C2F0 (176 bytes)
extern "C" __declspec(naked) void __fastcall fn_0078C2F0(void* self) {
    __asm {
        push -1
        push 0x8c1716
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov dword ptr [esp + 0xc], edi
        mov eax, dword ptr [edi + 0x4]
        lea ebx, [edi + 0x4]
        xor esi, esi
        mov dword ptr [esp + 0x18], 0x1
        test eax, eax
        jle short L_loop_end
    L_loop:
        mov eax, dword ptr [edi + 0x14]
        mov eax, dword ptr [eax + 4*esi]
        push eax
        call ext_006A5C5C
        mov eax, dword ptr [ebx]
        add esp, 0x4
        inc esi
        cmp esi, eax
        jl short L_loop
    L_loop_end:
        mov ecx, ebx
        call ext_006D2250
        mov eax, dword ptr [edi + 0x2c]
        mov esi, dword ptr [mem_009251D8]
        test eax, eax
        je short L_free2
        push eax
        call esi
        add esp, 0x4
    L_free2:
        mov eax, dword ptr [edi + 0x20]
        test eax, eax
        je short L_dtors
        mov cl, byte ptr [edi + 0x34]
        test cl, cl
        je short L_dtors
        push eax
        call esi
        add esp, 0x4
    L_dtors:
        lea ecx, [edi + 0x38]
        mov byte ptr [esp + 0x18], 0x0
        call ext_006B9D70
        mov ecx, ebx
        mov dword ptr [esp + 0x18], -1
        call ext_006D2160
        mov ecx, dword ptr [esp + 0x10]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret
    }
}

// [0x0078B320] sub_0078B320 (176 bytes)
// Stack args: a1 (non-null required, else returns -3), a2 (byte, must be 0 or 1), a3 (size 8..256), a4 (optional C-string).
// Plain ret (caller cleans). Byte-for-byte naked body.
extern "C" void ext_0078ABD0();
extern "C" void ext_0078B210();
extern "C" int mem_00AAF7FC;
extern "C" __declspec(naked) void __fastcall fn_0078B320(void* self) {
    __asm {
        push ebx
        push esi
        mov esi, dword ptr [esp + 0xc]
        test esi, esi
        jne L_nonnull
        pop esi
        mov eax, 0xfffffffd
        pop ebx
        ret
    L_nonnull:
        mov al, byte ptr [esp + 0x10]
        test al, al
        je L_flag_ok
        cmp al, 0x1
        je L_flag_ok
        pop esi
        or eax, -1
        pop ebx
        ret
    L_flag_ok:
        mov ebx, dword ptr [esp + 0x14]
        cmp ebx, 0x100
        jg L_fail
        cmp ebx, 0x8
        jl L_fail
        mov byte ptr [esi], al
        lea eax, [ebx + 0x3f]
        and al, 0xc0
        mov dword ptr [esi + 0x4c], 0x48534946
        mov dword ptr [esi + 0x4], eax
        lea eax, [ebx - 0x1]
        cdq
        and edx, 0x3f
        push edi
        add eax, edx
        lea edx, [esi + 0x54]
        sar eax, 0x6
        mov edi, edx
        mov ecx, dword ptr [eax*4 + mem_00AAF7FC]
        xor eax, eax
        mov dword ptr [esi + 0x50], ecx
        mov ecx, 0x8
        rep stosd
        mov byte ptr [esi + 0x48], al
        mov eax, dword ptr [esp + 0x1c]
        test eax, eax
        pop edi
        je L_ok
        cmp byte ptr [eax], 0x0
        je L_ok
        lea ecx, [esi + 0x8]
        push ecx
        push edx
        push eax
        push ebx
        call ext_0078ABD0
        add esp, 0x10
        test eax, eax
        jne L_fail
        push esi
        call ext_0078B210
        add esp, 0x4
        pop esi
        pop ebx
        ret
    L_ok:
        pop esi
        mov eax, 0x1
        pop ebx
        ret
    L_fail:
        pop esi
        mov eax, 0xfffffffe
        pop ebx
        ret
    }
}

// [0x007894D0] sub_007894D0 (185 bytes)
extern "C" void ext_006A5C62();
extern "C" void ext_007AEBA0();

extern "C" __declspec(naked) void __fastcall fn_007894D0(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push -0x1
        push 0x8b8fdb
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x8]
        test ecx, ecx
        je loc_789501
        mov edx, dword ptr [esp + 0x1c]
        mov eax, dword ptr [ecx]
        push edx
        mov edx, dword ptr [esp + 0x1c]
        push edx
        call dword ptr [eax + 0x4]
        jmp loc_78954f
    loc_789501:
        mov ecx, dword ptr [esi + 0x14]
        test ecx, ecx
        je loc_78950e
        mov eax, dword ptr [ecx]
        push 0x1
        call dword ptr [eax]
    loc_78950e:
        push 0x64
        call ext_006A5C62
        add esp, 0x4
        mov dword ptr [esp + 0x4], eax
        test eax, eax
        mov dword ptr [esp + 0x10], 0x0
        je loc_789531
        mov ecx, eax
        call ext_007AEBA0
        jmp loc_789533
    loc_789531:
        xor eax, eax
    loc_789533:
        mov ecx, dword ptr [esp + 0x1c]
        mov dword ptr [esi + 0x14], eax
        mov edx, dword ptr [eax]
        push ecx
        mov ecx, dword ptr [esp + 0x1c]
        mov dword ptr [esp + 0x14], 0xffffffff
        push ecx
        mov ecx, eax
        call dword ptr [edx + 0x64]
    loc_78954f:
        test al, al
        je loc_78956e
        mov dword ptr [esi + 0xc], 0x1
        mov al, 0x1
        pop esi
        mov ecx, dword ptr [esp + 0x4]
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret 0x8
    loc_78956e:
        mov ecx, dword ptr [esp + 0x8]
        mov dword ptr [esi + 0xc], 0x0
        xor al, al
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret 0x8
    }
}

// [0x007832E0] sub_007832E0 (182 bytes)
// Switch on a2 (0..3 select a string literal copied into a local buffer), default path copies
// a second string, then calls vtbl+4 on self->[0] with the buffer and a3. ret 0xc.
extern "C" __declspec(naked) void __fastcall fn_007832E0(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        sub esp, 0x20
        cmp eax, 0x3
        mov edx, ecx
        push ebx
        push ebp
        push esi
        push edi
        ja short L7E_default
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x98
        __asm _emit 0x33
        __asm _emit 0x78
        __asm _emit 0x00
L7E_c0:
        lea ebx, [esp + 0x10]
        mov edi, 0xaac1f8
        jmp short L7E_scan
L7E_c1:
        lea ebx, [esp + 0x10]
        mov edi, 0xaac1c0
        jmp short L7E_scan
L7E_c2:
        lea ebx, [esp + 0x10]
        mov edi, 0xaaf3ac
        jmp short L7E_scan
L7E_c3:
        lea ebx, [esp + 0x10]
        mov edi, 0xaac20c
L7E_scan:
        or ecx, -1
        xor eax, eax
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        mov esi, edi
        mov edi, ebx
        shr ecx, 2
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
L7E_default:
        mov al, byte ptr [esp + 0x3c]
        lea ebx, [esp + 0x10]
        test al, al
        mov edi, 0xaaf3a8
        jne short L7E_go
        mov edi, 0xaac1f0
L7E_go:
        or ecx, -1
        xor eax, eax
        repne scasb
        not ecx
        sub edi, ecx
        mov esi, edi
        mov ebp, ecx
        mov edi, ebx
        or ecx, -1
        repne scasb
        mov ecx, ebp
        dec edi
        shr ecx, 2
        rep movsd
        mov ecx, ebp
        mov eax, dword ptr [edx]
        and ecx, 3
        rep movsb
        lea ecx, [esp + 0x10]
        push ecx
        mov ecx, dword ptr [esp + 0x38]
        push ecx
        mov ecx, edx
        call dword ptr [eax + 0x4]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x20
        ret 0xc
    }
}

// [0x0078D940] sub_0078D940 (191 bytes)
extern "C" void ext_006A5C62();
extern "C" void ext_00791FF0();
extern "C" __declspec(naked) void __fastcall fn_0078D940(void* self, int edx_unused, int a1) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x5c]
        test eax, eax
        je L_skip1
        mov eax, dword ptr [esi]
        call dword ptr [eax + 0x48]
        mov edx, dword ptr [esi]
        mov ecx, esi
        call dword ptr [edx + 0x4c]
        mov eax, dword ptr [esi]
        mov ecx, esi
        call dword ptr [eax + 0x50]
        mov edx, dword ptr [esi]
        mov ecx, esi
        call dword ptr [edx + 0x54]
        mov eax, dword ptr [esi]
        mov ecx, esi
        call dword ptr [eax + 0x58]
        mov edx, dword ptr [esi]
        mov ecx, esi
        call dword ptr [edx + 0x5c]
        mov eax, dword ptr [esi + 0x54]
        test eax, eax
        je L_a
        push eax
        call ext_006A5C5C
        add esp, 4
    L_a:
        mov eax, dword ptr [esi + 0x58]
        test eax, eax
        je L_b
        push eax
        call ext_006A5C5C
        add esp, 4
    L_b:
        mov eax, dword ptr [esi + 0x48]
        imul eax, dword ptr [esi + 0x1c]
        imul eax, dword ptr [esi + 0x18]
        imul eax, dword ptr [esi + 0x4c]
        shl eax, 5
        push eax
        call ext_006A5C62
        mov ecx, dword ptr [esi + 0x48]
        mov dword ptr [esi + 0x54], eax
        imul ecx, dword ptr [esi + 0x1c]
        imul ecx, dword ptr [esi + 0x18]
        imul ecx, dword ptr [esi + 0x4c]
        shl ecx, 5
        push ecx
        call ext_006A5C62
        add esp, 8
        mov dword ptr [esi + 0x58], eax
        mov dword ptr [esi + 0x5c], 0
    L_skip1:
        mov eax, dword ptr [esi + 0x60]
        test eax, eax
        je L_c
        mov ecx, esi
        call ext_00791FF0
    L_c:
        mov edx, dword ptr [esi]
        mov ecx, esi
        call dword ptr [edx + 0x60]
        mov eax, dword ptr [esp + 8]
        test eax, eax
        je L_d
        mov edx, dword ptr [esi]
        push eax
        mov ecx, esi
        call dword ptr [edx + 0x64]
    L_d:
        pop esi
        ret 4
    }
}

// [0x0078ABD0] sub_0078ABD0 (192 bytes)
extern "C" __declspec(naked) int __cdecl fn_0078ABD0(int ebp_arg, const char* str, unsigned int* out, char* dst) {
    __asm {
        push    ebx
        push    ebp
        mov     ebp, dword ptr [esp + 0xc]
        push    esi
        test    ebp, ebp
        push    edi
        jle     L_init_done
        mov     eax, dword ptr [esp + 0x1c]
        xor     ecx, ecx
    L_zero_loop:
        mov     dword ptr [eax], 0
        add     ecx, 0x20
        add     eax, 0x4
        cmp     ecx, ebp
        jl      L_zero_loop
    L_init_done:
        xor     edi, edi
        test    ebp, ebp
        jle     L_success
        mov     eax, dword ptr [esp + 0x18]
        mov     edx, dword ptr [esp + 0x20]
        xor     ebx, ebx
        sub     eax, edx
        mov     dword ptr [esp + 0x14], eax
        jmp     L_loop_entry
    L_loop_body:
        mov     eax, dword ptr [esp + 0x14]
        mov     edx, dword ptr [esp + 0x20]
    L_loop_entry:
        lea     ecx, [edi + edx]
        test    edx, edx
        mov     al, byte ptr [eax + ecx]
        je      L_skip_write
        mov     byte ptr [ecx], al
    L_skip_write:
        cmp     al, '0'
        jl      L_check_lower
        cmp     al, '9'
        jg      L_check_lower
        movsx   esi, al
        sub     esi, 0x30
        jmp     L_have_nibble
    L_check_lower:
        cmp     al, 'a'
        jl      L_check_upper
        cmp     al, 'f'
        jg      L_check_upper
        movsx   esi, al
        sub     esi, 0x57
        jmp     L_have_nibble
    L_check_upper:
        cmp     al, 'A'
        jl      L_error
        cmp     al, 'F'
        jg      L_error
        movsx   esi, al
        sub     esi, 0x37
    L_have_nibble:
        mov     eax, edi
        mov     ecx, dword ptr [esp + 0x1c]
        cdq
        and     edx, 0x7
        add     ebx, 0x4
        add     eax, edx
        sar     eax, 0x3
        lea     eax, [ecx + 4*eax]
        mov     ecx, edi
        xor     ecx, 0x1
        and     ecx, 0x7
        shl     ecx, 0x2
        shl     esi, cl
        mov     ecx, dword ptr [eax]
        or      ecx, esi
        inc     edi
        cmp     ebx, ebp
        mov     dword ptr [eax], ecx
        jl      L_loop_body
    L_success:
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        ret
    L_error:
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0xfffffffe
        pop     ebx
        ret
        nop
        nop
    }
}

// [0x007855E0] sub_007855E0 (189 bytes)
extern "C" void ext_006DEEC0();

extern "C" __declspec(naked) void __fastcall fn_007855E0(void* self, int edx_unused, void* a1, int a2) {
    __asm {
        push    ecx
        push    ebx
        mov     ebx, dword ptr [esp + 0x10]
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x14]
        push    edi
        test    bl, bl
        mov     edi, ecx
        mov     byte ptr [esp + 0x13], 0x1
        je      L_78564F
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        xor     ebp, ebp
        call    dword ptr [eax + 0x14]
        test    eax, eax
        jle     L_78564F
        jmp     L_78560B
L_785607:
        mov     ebx, dword ptr [esp + 0x1c]
L_78560B:
        mov     al, byte ptr [esp + 0x13]
        mov     edx, dword ptr [edi]
        test    al, al
        mov     eax, dword ptr [esi]
        push    ebx
        push    ebp
        mov     ecx, esi
        je      L_78562E
        mov     dword ptr [esp + 0x20], edx
        call    dword ptr [eax + 0x18]
        mov     edx, dword ptr [esp + 0x1c]
        push    eax
        mov     ecx, edi
        call    dword ptr [edx + 0xc]
        jmp     L_785643
L_78562E:
        mov     dword ptr [esp + 0x20], edx
        call    dword ptr [eax + 0x18]
        mov     edx, dword ptr [esp + 0x1c]
        push    eax
        mov     ecx, edi
        call    dword ptr [edx + 0xc]
        mov     byte ptr [esp + 0x13], al
L_785643:
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        inc     ebp
        call    dword ptr [eax + 0x14]
        cmp     ebp, eax
        jl      L_785607
L_78564F:
        mov     ecx, esi
        mov     dword ptr [esp + 0x1c], 0x0
        call    ext_006DEEC0
        test    eax, eax
        mov     dword ptr [esp + 0x1c], eax
        je      L_785691
        mov     bl, byte ptr [esp + 0x13]
        mov     edx, dword ptr [edi]
        lea     eax, [esp + 0x1c]
        push    0x1
        test    bl, bl
        push    eax
        mov     ecx, edi
        je      L_785686
        call    dword ptr [edx + 0x8]
        pop     edi
        pop     esi
        mov     al, bl
        pop     ebp
        pop     ebx
        pop     ecx
        ret     0x8
L_785686:
        call    dword ptr [edx + 0x8]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret     0x8
L_785691:
        mov     al, byte ptr [esp + 0x13]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret     0x8
    }
}

// [0x00788E80] sub_00788E80 (192 bytes)
extern "C" void ext_006B9D10();
extern "C" void ext_006B9D70();
extern "C" void ext_006B9E60();
extern "C" void ext_006E7460();
extern "C" void ext_006FF230();
extern "C" void ext_00788D20();
extern "C" int mem_00925144;
extern "C" __declspec(naked) void __fastcall fn_00788E80(void* self, int edx_unused, int a1) {
    __asm {
        push -1
        push 0x008b9073
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x98
        push ebx
        push esi
        mov esi, ecx
        push edi
        lea ecx, [esp + 0xc]
        call ext_006B9D10
        mov edi, dword ptr [esp + 0xb4]
        lea eax, [esp + 0x58]
        xor ebx, ebx
        push edi
        push eax
        mov dword ptr [esp + 0xb4], ebx
        call ext_006FF230
        add esp, 0x8
        push eax
        lea ecx, [esp + 0x10]
        mov byte ptr [esp + 0xb0], 0x1
        call ext_006B9E60
        lea ecx, [esp + 0x58]
        mov byte ptr [esp + 0xac], bl
        call ext_006B9D70
        lea ecx, [esp + 0xc]
        call ext_006E7460
        push eax
        call dword ptr [mem_00925144]
        add esp, 0x4
        mov ecx, esi
        push edi
        call ext_00788D20
        lea ecx, [esp + 0xc]
        mov bl, al
        mov dword ptr [esp + 0xac], 0xffffffff
        call ext_006B9D70
        mov ecx, dword ptr [esp + 0xa4]
        pop edi
        mov al, bl
        pop esi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0xa4
        ret 0x4
    }
}

// [0x00788D20] sub_00788D20 (208 bytes)
// Stack-probe 0x1000, SetErrorMode(1) around a UTF-8 -> wide conversion of an argument,
// wcsrchr for '*', optional wcscat of a suffix, then FindFirstFileW into self->[0]; ret 0x4.
extern "C" int mem_0092416C;
extern "C" int mem_009241FC;
extern "C" int mem_00925170;
extern "C" int mem_00925164;
extern "C" int mem_00924168;
extern "C" void ext_006A7270();
extern "C" void ext_006FF870();
extern "C" __declspec(naked) void __fastcall fn_00788D20(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, 1000h
        call ext_006A7270
        push ebx
        push ebp
        mov ebp, dword ptr [mem_0092416C]
        push esi
        push edi
        mov esi, ecx
        push 1
        xor bl, bl
        call ebp
        mov ecx, dword ptr [esp + 1014h]
        mov edi, dword ptr [mem_009241FC]
        lea eax, [esp + 10h]
        push 400h
        push eax
        push -1
        push ecx
        push 0
        push 0FDE9h
        call edi
        lea edx, [esp + 10h]
        push 2Ah
        push edx
        call dword ptr [mem_00925170]
        add esp, 8
        test eax, eax
        jne L_skip_suffix
        lea eax, [esp + 810h]
        push 400h
        push eax
        push -1
        push 0AAB938h
        push 0
        push 0FDE9h
        call edi
        lea ecx, [esp + 810h]
        lea edx, [esp + 10h]
        push ecx
        push edx
        call dword ptr [mem_00925164]
        add esp, 8
    L_skip_suffix:
        lea eax, [esp + 10h]
        lea ecx, [esp + 10h]
        push eax
        push ecx
        call ext_006FF870
        add esp, 8
        lea edx, [esi + 4]
        lea eax, [esp + 10h]
        push edx
        push eax
        call dword ptr [mem_00924168]
        cmp eax, -1
        mov dword ptr [esi], eax
        je L_nofile
        mov bl, 1
    L_nofile:
        push 0
        call ebp
        mov byte ptr [esi + 654h], bl
        pop edi
        pop esi
        mov al, bl
        pop ebp
        pop ebx
        add esp, 1000h
        ret 4
    }
}

// [0x00789AD0] sub_00789AD0 (208 bytes)
extern "C" void ext_006A5C5C();
extern "C" void ext_006BC380();
extern "C" void ext_00782D20();
extern "C" void ext_00782D30();
extern "C" void ext_00789AD0();
extern "C" void ext_00789C40();
extern "C" void ext_0078CA60();
extern "C" int mem_009251D8;
extern "C" __declspec(naked) void __fastcall fn_00789AD0(void* self) {
    __asm {
        push -1
        push 0x8c16cb
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [esp + 0xc], esi
        mov edi, dword ptr [esi + 0x3c]
        mov dword ptr [esp + 0x18], 0
        test edi, edi
        je short L_skip1
        mov ecx, edi
        call ext_00789AD0
        push edi
        call ext_006A5C5C
        add esp, 4
    L_skip1:
        mov eax, dword ptr [esi + 0x24]
        mov dword ptr [esi + 0x3c], 0
        test eax, eax
        je short L_skip2
        mov cl, byte ptr [esi + 0x28]
        test cl, cl
        je short L_skip2
        push eax
        call dword ptr [mem_009251D8]
        add esp, 4
    L_skip2:
        mov ecx, esi
        mov dword ptr [esi + 0x24], 0
        xor ebp, ebp
        call ext_006BC380
        test eax, eax
        jle short L_after_loop
    L_loop:
        push ebp
        mov ecx, esi
        call ext_00789C40
        mov edi, eax
        test edi, edi
        je short L_noitem
        mov ecx, edi
        call ext_0078CA60
        push edi
        call ext_006A5C5C
        add esp, 4
    L_noitem:
        mov ecx, esi
        inc ebp
        call ext_006BC380
        cmp ebp, eax
        jl short L_loop
    L_after_loop:
        add esi, 4
        mov ecx, esi
        call ext_00782D30
        mov ecx, esi
        mov dword ptr [esp + 0x18], 0xffffffff
        call ext_00782D20
        mov ecx, dword ptr [esp + 0x10]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x0078C920] sub_0078C920 (216 bytes)
extern "C" __declspec(naked) int __fastcall fn_0078C920(void* self, int edx_unused, int a1, int a2, int a3, int a4, int a5) {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        mov ebx, dword ptr [ebp + 0x8]
        push esi
        push edi
        lea eax, dword ptr [ebx*4]
        mov edi, ecx
        push eax
        xor esi, esi
        mov byte ptr [ebp - 0x1], 0x1
        call dword ptr [mem_00925208]
        add esp, 0x4
        mov dword ptr [edi + 0x2c], eax
        test eax, eax
        jne short L_ok
        pop edi
        pop esi
        xor al, al
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0x14
    L_ok:
        mov edx, dword ptr [ebp + 0xc]
        mov ecx, dword ptr [ebp + 0x10]
        mov al, byte ptr [ebp + 0x18]
        mov dword ptr [edi + 0x24], edx
        xor edx, edx
        mov dword ptr [edi + 0x20], ecx
        test ebx, ebx
        mov dword ptr [edi + 0x28], ebx
        mov dword ptr [edi + 0x30], 0xffffffff
        mov byte ptr [edi + 0x34], al
        jle short L_end
    L_loop:
        mov eax, dword ptr [edi + 0x2c]
        lea ecx, dword ptr [esi + 0x1]
        mov dword ptr [eax + 4*edx], ecx
        mov ecx, dword ptr [edi + 0x20]
        lea eax, dword ptr [ecx + esi]
        movsx ecx, byte ptr [ecx + esi]
        add ecx, -0x43
        cmp ecx, 0x10
        ja short L_def
        xor ebx, ebx
        mov bl, byte ptr [ecx + 0x78ca10]
        jmp dword ptr [ebx*4 + 0x78c9f8]
    L_add2:
        add esi, 0x2
        jmp short L_next
    L_var1:
        mov cl, byte ptr [ebp + 0x14]
        mov eax, dword ptr [eax + 0x1]
        test cl, cl
        mov dword ptr [ebp + 0x18], eax
        je short L_v1
        mov eax, dword ptr [ebp + 0x18]
        bswap eax
    L_v1:
        lea esi, dword ptr [esi + eax + 0x5]
        jmp short L_next
    L_add5:
        add esi, 0x5
        jmp short L_next
    L_add9:
        add esi, 0x9
        jmp short L_next
    L_var2:
        mov cl, byte ptr [ebp + 0x14]
        mov eax, dword ptr [eax + 0x1]
        test cl, cl
        mov dword ptr [ebp + 0x18], eax
        je short L_v2
        mov eax, dword ptr [ebp + 0x18]
        bswap eax
    L_v2:
        lea esi, dword ptr [esi + eax + 0x5]
        jmp short L_next
    L_def:
        mov byte ptr [ebp - 0x1], 0x0
    L_next:
        mov eax, dword ptr [edi + 0x28]
        inc edx
        cmp edx, eax
        jl short L_loop
    L_end:
        mov al, byte ptr [ebp - 0x1]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0x14
    }
}

// [0x0078BA20] sub_0078BA20 (227 bytes)
extern "C" void ext_00789260();
extern "C" void ext_0078B210();
extern "C" void ext_0078B320();
extern "C" void ext_0078B3D0();
extern "C" void ext_0078C1D0();
extern "C" __declspec(naked) void __fastcall fn_0078BA20(void* self, int edx_unused, int a1, int a2, int a3, int a4, int a5) {
    __asm {
        push -1
        push 0x8c16a8
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        mov eax, dword ptr [esp + 0x24]
        push ebx
        mov ebx, dword ptr [esp + 0x1c]
        push esi
        mov esi, ecx
        push edi
        mov ecx, dword ptr [esp + 0x2c]
        mov edi, dword ptr [esp + 0x28]
        push eax
        push ecx
        push edi
        push ebx
        mov ecx, esi
        mov dword ptr [esp + 0x1c], esi
        call ext_00789260
        or eax, -1
        mov dword ptr [esp + 0x18], 0
        mov dword ptr [esi + 0x20], eax
        mov dword ptr [esi + 0x24], eax
        mov dword ptr [esi + 0x28], eax
        mov eax, dword ptr [esi + 0xc]
        test eax, eax
        mov dword ptr [esi + 0x18], 0
        mov dword ptr [esi + 0x1c], ebx
        mov dword ptr [esi], 0x997028
        je short L_skip
        test edi, edi
        je short L_skip
        mov edx, dword ptr [edi]
        mov ecx, edi
        call dword ptr [edx + 0x2c]
        test al, al
        je short L_skip
        mov eax, dword ptr [edi]
        mov ecx, edi
        call dword ptr [eax + 0x24]
        mov ecx, esi
        mov dword ptr [esi + 0x1c], eax
        call ext_0078C1D0
    L_skip:
        push 0
        lea ecx, [esi + 0x4c]
        push 1
        push ecx
        call ext_0078B3D0
        push 0
        lea edi, [esi + 0x74]
        push 0x80
        push 1
        push edi
        call ext_0078B320
        mov eax, dword ptr [esp + 0x3c]
        lea edx, [esi + 0xc8]
        push edi
        mov ecx, dword ptr [eax]
        mov dword ptr [edx], ecx
        mov ecx, dword ptr [eax + 0x4]
        mov dword ptr [edx + 0x4], ecx
        mov ecx, dword ptr [eax + 0x8]
        mov dword ptr [edx + 0x8], ecx
        mov eax, dword ptr [eax + 0xc]
        mov dword ptr [edx + 0xc], eax
        call ext_0078B210
        mov ecx, dword ptr [esp + 0x30]
        add esp, 0x20
        mov eax, esi
        mov dword ptr fs:[0], ecx
        pop edi
        pop esi
        pop ebx
        add esp, 0x10
        ret 0x14
    }
}

// [0x007893E0] sub_007893E0 (232 bytes)
extern "C" void ext_006A5C62();
extern "C" void ext_007831E0();
extern "C" int mem_009252DC;
extern "C" __declspec(naked) void __fastcall fn_007893E0(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push -1
        push 0x8b8fdb
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        push edi
        mov ecx, dword ptr [esi + 0x8]
        test ecx, ecx
        je short L_no_inner
        mov edi, dword ptr [esp + 0x20]
        mov edx, dword ptr [esp + 0x1c]
        mov eax, dword ptr [ecx]
        push edi
        push edx
        call dword ptr [eax + 0x8]
        jmp short L_after
L_no_inner:
        mov ecx, dword ptr [esi + 0x14]
        test ecx, ecx
        je short L_skip_free
        mov eax, dword ptr [ecx]
        push 0x1
        call dword ptr [eax]
L_skip_free:
        push 0x58
        call ext_006A5C62
        add esp, 0x4
        mov dword ptr [esp + 0x8], eax
        test eax, eax
        mov dword ptr [esp + 0x14], 0x0
        je short L_null_obj
        mov ecx, eax
        call ext_007831E0
        jmp short L_store
L_null_obj:
        xor eax, eax
L_store:
        mov edi, dword ptr [esp + 0x20]
        mov ecx, dword ptr [esp + 0x1c]
        mov dword ptr [esi + 0x14], eax
        mov edx, dword ptr [eax]
        push edi
        push ecx
        mov ecx, eax
        mov dword ptr [esp + 0x1c], 0xffffffff
        call dword ptr [edx + 0x4]
L_after:
        test al, al
        je short L_fail
        push 0x72
        push edi
        call dword ptr [mem_009252DC]
        add esp, 0x8
        test eax, eax
        je short L_mode2
        mov dword ptr [esi + 0xc], 0x1
        pop edi
        mov al, 0x1
        pop esi
        mov ecx, dword ptr [esp + 0x4]
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 0x8
L_mode2:
        mov dword ptr [esi + 0xc], 0x2
        pop edi
        mov al, 0x1
        pop esi
        mov ecx, dword ptr [esp + 0x4]
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 0x8
L_fail:
        mov ecx, dword ptr [esp + 0xc]
        mov dword ptr [esi + 0xc], 0x0
        pop edi
        xor al, al
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 0x8
    }
}

// [0x007892F0] sub_007892F0 (230 bytes)
extern "C" __declspec(naked) void __fastcall fn_007892F0(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        push    -1
        push    0x8b8fdb
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        push    ecx
        push    esi
        mov     esi, ecx
        push    edi
        mov     ecx, dword ptr [esi + 8]
        test    ecx, ecx
        je      short L_no_inner
        mov     edx, dword ptr [esp + 0x24]
        mov     edi, dword ptr [esp + 0x20]
        mov     eax, dword ptr [ecx]
        push    edx
        mov     edx, dword ptr [esp + 0x20]
        push    edi
        push    edx
        call    dword ptr [eax + 0xc]
        jmp     short L_after_call

    L_no_inner:
        mov     ecx, dword ptr [esi + 0x14]
        test    ecx, ecx
        je      short L_alloc
        mov     eax, dword ptr [ecx]
        push    1
        call    dword ptr [eax]

    L_alloc:
        push    0x58
        call    ext_006A5C62
        add     esp, 4
        mov     dword ptr [esp + 8], eax
        test    eax, eax
        mov     dword ptr [esp + 0x14], 0
        je      short L_null_obj
        mov     ecx, eax
        call    ext_007831E0
        jmp     short L_after_ctor

    L_null_obj:
        xor     eax, eax

    L_after_ctor:
        mov     ecx, dword ptr [esp + 0x24]
        mov     edi, dword ptr [esp + 0x20]
        push    ecx
        mov     ecx, dword ptr [esp + 0x20]
        mov     dword ptr [esi + 0x14], eax
        mov     edx, dword ptr [eax]
        push    edi
        push    ecx
        mov     ecx, eax
        mov     dword ptr [esp + 0x20], -1
        call    dword ptr [edx + 8]

    L_after_call:
        test    al, al
        je      short L_fail
        test    edi, edi
        jne     short L_ok2
        mov     dword ptr [esi + 0xc], 1
        pop     edi
        mov     al, 1
        pop     esi
        mov     ecx, dword ptr [esp + 4]
        mov     dword ptr fs:[0], ecx
        add     esp, 0x10
        ret     0xc

    L_ok2:
        mov     dword ptr [esi + 0xc], 2
        pop     edi
        mov     al, 1
        pop     esi
        mov     ecx, dword ptr [esp + 4]
        mov     dword ptr fs:[0], ecx
        add     esp, 0x10
        ret     0xc

    L_fail:
        mov     ecx, dword ptr [esp + 0xc]
        mov     dword ptr [esi + 0xc], 0
        pop     edi
        xor     al, al
        pop     esi
        mov     dword ptr fs:[0], ecx
        add     esp, 0x10
        ret     0xc
    }
}

// [0x0078D850] sub_0078D850 (237 bytes)
extern "C" __declspec(naked) void __fastcall fn_0078D850(void* self) {
    __asm {
        push esi
        mov esi, ecx
        push edi
        xor edi, edi
        mov eax, dword ptr [esi + 0x54]
        mov dword ptr [esi], offset mem_0099708C
        cmp eax, edi
        mov dword ptr [esi + 0x30], edi
        mov dword ptr [esi + 0x34], edi
        mov dword ptr [esi + 0x50], edi
        je L_58
        push eax
        call ext_006A5C5C
        add esp, 0x4
    L_58:
        mov eax, dword ptr [esi + 0x58]
        cmp eax, edi
        je L_234
        push eax
        call ext_006A5C5C
        add esp, 0x4
    L_234:
        mov eax, dword ptr [esi + 0x234]
        mov dword ptr [esi + 0x54], edi
        cmp eax, edi
        mov dword ptr [esi + 0x58], edi
        je L_238
        push eax
        call ext_006A5C5C
        add esp, 0x4
    L_238:
        mov eax, dword ptr [esi + 0x238]
        cmp eax, edi
        je L_244
        push eax
        call ext_006A5C5C
        add esp, 0x4
    L_244:
        mov eax, dword ptr [esi + 0x244]
        cmp eax, edi
        je L_23c
        push eax
        call ext_006A5C5C
        add esp, 0x4
    L_23c:
        mov eax, dword ptr [esi + 0x23c]
        cmp eax, edi
        je L_240
        push eax
        call ext_006A5C5C
        add esp, 0x4
    L_240:
        mov eax, dword ptr [esi + 0x240]
        cmp eax, edi
        je L_248
        push eax
        call ext_006A5C5C
        add esp, 0x4
    L_248:
        mov eax, dword ptr [esi + 0x248]
        cmp eax, edi
        je L_24c
        push eax
        call ext_006A5C5C
        add esp, 0x4
    L_24c:
        mov eax, dword ptr [esi + 0x24c]
        cmp eax, edi
        je L_zero
        push eax
        call ext_006A5C5C
        add esp, 0x4
    L_zero:
        mov dword ptr [esi + 0x234], edi
        mov dword ptr [esi + 0x238], edi
        mov dword ptr [esi + 0x244], edi
        mov dword ptr [esi + 0x23c], edi
        mov dword ptr [esi + 0x240], edi
        mov dword ptr [esi + 0x248], edi
        mov dword ptr [esi + 0x24c], edi
        pop edi
        pop esi
        ret
    }
}

// [0x0078D330] sub_0078D330 (240 bytes)
extern "C" void ext_006A5C62();
extern "C" void ext_006D2130();
extern "C" void ext_006D2170();
extern "C" void ext_0078D6B0();

// SEH-framed __thiscall (ret 8): two loops, each allocating 0x18-byte objects
// and calling a ctor/insert helper; loops over arg1 then arg2.
extern "C" __declspec(naked) void __fastcall fn_0078D330(void* self, int edx_unused, int a1, int a2) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8c17c6
        push eax
        mov dword ptr fs:[0], esp
        push ebx
        push esi
        push edi
        mov edi, ecx
        call ext_0078D6B0
        mov eax, dword ptr [esp + 0x1c]
        test eax, eax
        jle short L_second
        mov ebx, eax
    L_loop1:
        push 0x18
        call ext_006A5C62
        mov esi, eax
        add esp, 4
        mov dword ptr [esp + 0x1c], esi
        test esi, esi
        mov dword ptr [esp + 0x14], 0
        je short L_null1
        push 0x10
        push 0x10
        mov ecx, esi
        call ext_006D2130
        lea eax, [esi + 0x10]
        mov dword ptr [esi + 0x14], eax
        jmp short L_after1
    L_null1:
        xor esi, esi
    L_after1:
        mov eax, dword ptr [edi]
        lea ecx, [esp + 0x1c]
        push ecx
        push eax
        mov ecx, edi
        mov dword ptr [esp + 0x1c], -1
        mov dword ptr [esp + 0x24], esi
        call ext_006D2170
        dec ebx
        jne short L_loop1
    L_second:
        mov eax, dword ptr [esp + 0x20]
        test eax, eax
        jle short L_end
        add edi, 0x18
        mov ebx, eax
    L_loop2:
        push 0x18
        call ext_006A5C62
        mov esi, eax
        add esp, 4
        mov dword ptr [esp + 0x1c], esi
        test esi, esi
        mov dword ptr [esp + 0x14], 1
        je short L_null2
        push 0x10
        push 0x10
        mov ecx, esi
        call ext_006D2130
        lea edx, [esi + 0x10]
        mov dword ptr [esi + 0x14], edx
        jmp short L_after2
    L_null2:
        xor esi, esi
    L_after2:
        mov ecx, dword ptr [edi]
        lea eax, [esp + 0x20]
        push eax
        push ecx
        mov ecx, edi
        mov dword ptr [esp + 0x1c], -1
        mov dword ptr [esp + 0x28], esi
        call ext_006D2170
        dec ebx
        jne short L_loop2
    L_end:
        mov ecx, dword ptr [esp + 0xc]
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        pop ebx
        add esp, 0xc
        ret 0x8
    }
}

// [0x0078D5C0] sub_0078D5C0 (240 bytes)
extern "C" void ext_0078D4B0();
extern "C" void ext_0078D4C0();
extern "C" void ext_0078D4E0();
extern "C" void ext_0078D510();
extern "C" void ext_0078D550();
extern "C" int mem_0092A278;
extern "C" __declspec(naked) void __fastcall fn_0078D5C0(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -0x8
        sub esp, 0x1c
        push ebx
        push esi
        mov esi, dword ptr [ebp + 0x8]
        xor eax, eax
        test esi, esi
        push edi
        mov edi, ecx
        sete al
        push esi
        mov dword ptr [esp + 0x18], eax
        call ext_0078D4B0
        xor ebx, ebx
        mov dword ptr [esp + 0x1c], eax
        test eax, eax
        jle L_end
    L_outer:
        mov ecx, dword ptr [ebp + 0xc]
        push ecx
        push ebx
        push esi
        mov ecx, edi
        call ext_0078D550
        fstp qword ptr [esp + 0x20]
        push ebx
        push esi
        mov ecx, edi
        call ext_0078D4C0
        test eax, eax
        mov dword ptr [esp + 0x18], eax
        mov dword ptr [esp + 0x10], 0x0
        jle L_outer_next
    L_inner:
        mov edx, dword ptr [esp + 0x10]
        mov ecx, edi
        push edx
        push ebx
        push esi
        call ext_0078D4E0
        mov ecx, dword ptr [esp + 0x14]
        mov esi, eax
        push ebx
        mov eax, dword ptr [esi]
        push eax
        push ecx
        mov ecx, edi
        call ext_0078D510
        mov edx, dword ptr [esi]
        push eax
        mov eax, dword ptr [esp + 0x18]
        push edx
        push eax
        mov ecx, edi
        call ext_0078D4E0
        fld qword ptr [mem_0092A278]
        fld qword ptr [esp + 0x20]
        fcomp qword ptr [mem_0092A278]
        mov ecx, eax
        fnstsw ax
        test ah, 0x40
        jne L_store
        mov al, byte ptr [ebp + 0xc]
        fstp st(0)
        fld qword ptr [esi + 0x8]
        fdiv qword ptr [esp + 0x20]
        test al, al
        je L_store
        fabs
    L_store:
        fst qword ptr [esi + 0x8]
        mov eax, dword ptr [esp + 0x10]
        mov esi, dword ptr [ebp + 0x8]
        fstp qword ptr [ecx + 0x8]
        mov ecx, dword ptr [esp + 0x18]
        inc eax
        cmp eax, ecx
        mov dword ptr [esp + 0x10], eax
        jl L_inner
    L_outer_next:
        mov eax, dword ptr [esp + 0x1c]
        inc ebx
        cmp ebx, eax
        jl L_outer
    L_end:
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0x8
    }
}

// [0x0078A090] sub_0078A090 (272 bytes)
extern "C" void ext_0078A1A0();
extern "C" int mem_0092531C;
extern "C" __declspec(naked) int __fastcall fn_0078A090(void* self, int edx_unused, int a1, int a2, int a3, int a4, int a5) {
    __asm {
        sub esp, 0x8
        mov edx, dword ptr [esp + 0x10]
        mov eax, dword ptr [esp + 0x14]
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 0x20]
        push esi
        push edi
        mov dword ptr [esp + 0x14], ecx
        mov ecx, dword ptr [esp + 0x2c]
        xor esi, esi
        xor edi, edi
        mov bl, 0x1
        mov dword ptr [edx], edi
        mov dword ptr [eax], 0xffffffff
        mov byte ptr [esp + 0x13], 0x0
        mov byte ptr [ecx], 0x0
        jmp short L_loop
    L_top:
        mov edx, dword ptr [esp + 0x20]
    L_loop:
        mov ecx, dword ptr [esp + 0x1c]
        mov al, byte ptr [esi + ecx]
        cmp al, 0x40
        jne short L_not40
        mov edi, esi
        mov byte ptr [ebp], al
        jmp near ptr L_173
    L_not40:
        cmp al, 0x3a
        jne short L_not3a
        mov edi, esi
        mov byte ptr [ebp], al
        jmp near ptr L_173
    L_not3a:
        cmp al, 0x2c
        jne short L_not2c
        mov edi, esi
        mov byte ptr [ebp], al
        jmp short L_173
    L_not2c:
        cmp al, 0x22
        jne short L_not22
        inc esi
        mov dword ptr [edx], esi
        mov al, byte ptr [esi + ecx]
        cmp al, 0x22
        je short L_q_end
    L_q_scan:
        test al, al
        je short L_q_end
        mov al, byte ptr [esi + ecx + 0x1]
        inc esi
        cmp al, 0x22
        jne short L_q_scan
    L_q_end:
        mov eax, dword ptr [esp + 0x24]
        mov dword ptr [eax], esi
        mov eax, dword ptr [edx]
        cmp eax, esi
        jne short L_q_nz
        mov ecx, dword ptr [esp + 0x2c]
        mov byte ptr [ecx], 0x1
    L_q_nz:
        mov byte ptr [esp + 0x13], 0x0
        jmp short L_175
    L_not22:
        cmp al, 0xa
        je short L_ws
        cmp al, 0xd
        je short L_ws
        movsx edx, al
        push edx
        call dword ptr [mem_0092531C]
        add esp, 0x4
        test eax, eax
        je short L_nonspace
        cmp byte ptr [esp + 0x13], 0x1
        jne short L_ws
        mov eax, dword ptr [esp + 0x1c]
        mov ecx, dword ptr [esp + 0x14]
        push esi
        push eax
        call ext_0078A1A0
        cmp eax, -1
        je short L_ws
        mov edi, eax
        mov byte ptr [ebp], 0x3a
        jmp short L_173
    L_nonspace:
        mov byte ptr [esp + 0x13], 0x1
        jmp short L_175
    L_ws:
        mov edi, esi
        mov byte ptr [ebp], 0x20
    L_173:
        xor bl, bl
    L_175:
        inc esi
        test bl, bl
        jne near ptr L_top
        mov eax, dword ptr [esp + 0x24]
        cmp dword ptr [eax], -1
        jne short L_skip
        mov dword ptr [eax], edi
    L_skip:
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x8
        ret 0x14
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
    }
}

// [0x0078B210] sub_0078B210 (272 bytes)
extern "C" void ext_0078AC90();
extern "C" void ext_0078B180();
// Cdecl(p): fills a 2-level table on the stack from p->[4] and p->[0x50], recursing via ext_0078B180 / ext_0078AC90; returns 1, or -3 on range failure.
extern "C" __declspec(naked) int __cdecl fn_0078B210(void* p) {
    __asm {
        sub esp, 0x28
        push ebp
        mov ebp, dword ptr [esp + 0x30]
        push edi
        mov ecx, dword ptr [ebp + 0x4]
        mov eax, dword ptr [ebp + 0x50]
        mov edx, ecx
        mov dword ptr [esp + 0x8], ecx
        lea edi, [eax + eax + 0x8]
        and edx, 0x8000003f
        mov dword ptr [esp + 0xc], edi
        jns L_skip_fix
        dec edx
        or edx, -0x40
        inc edx
    L_skip_fix:
        jne L_fail
        cmp ecx, 0x80
        jl L_fail
        cmp edi, 0x28
        jg L_fail
        lea eax, [ecx + 0x3f]
        push ebx
        cdq
        and edx, 0x3f
        push esi
        add eax, edx
        xor esi, esi
        mov ebx, eax
        sar ebx, 0x6
        test ebx, ebx
        jle L_after_first
        lea edi, [ebp + 0x58]
        lea ebp, [ebp + 4*ebx + 0x70]
    L_first_loop:
        mov ecx, dword ptr [edi]
        mov eax, dword ptr [edi - 0x4]
        push ecx
        push eax
        mov dword ptr [esp + 4*esi + 0x20], eax
        mov dword ptr [esp + 4*esi + 0x30], ecx
        call ext_0078B180
        add esp, 0x8
        mov dword ptr [ebp], eax
        inc esi
        add edi, 0x8
        sub ebp, 0x4
        cmp esi, ebx
        jl L_first_loop
        mov ecx, dword ptr [esp + 0x10]
        mov ebp, dword ptr [esp + 0x3c]
        mov edi, dword ptr [esp + 0x14]
    L_after_first:
        mov eax, edi
        cdq
        sub eax, edx
        sar eax, 1
        test eax, eax
        jle L_done
        lea edi, [ebp + 0x88]
        xor esi, esi
        mov ebp, eax
        jmp L_body
    L_reload:
        mov ecx, dword ptr [esp + 0x10]
    L_body:
        lea eax, [esp + 0x18]
        push ecx
        push eax
        push esi
        call ext_0078AC90
        mov ecx, dword ptr [esp + 0x1c]
        mov ebx, eax
        lea edx, [esp + 0x34]
        push ecx
        lea eax, [esi + 0x1010101]
        push edx
        push eax
        call ext_0078AC90
        add esp, 0x18
        add esi, 0x2020202
        rol eax, 0x8
        add edi, 0x8
        dec ebp
        lea edx, [ebx + 2*eax]
        lea ecx, [eax + ebx]
        rol edx, 0x9
        mov dword ptr [edi - 0xc], ecx
        mov dword ptr [edi - 0x8], edx
        jne L_reload
    L_done:
        pop esi
        pop ebx
        pop edi
        mov eax, 0x1
        pop ebp
        add esp, 0x28
        ret
    L_fail:
        pop edi
        mov eax, 0xfffffffd
        pop ebp
        add esp, 0x28
        ret
    }
}

// [0x007841B0] sub_007841B0 (304 bytes)
extern "C" void ext_006D2280();
extern "C" void ext_0071E680();
extern "C" void ext_00783D00();
extern "C" void ext_00783D60();
extern "C" void ext_00783DB0();
extern "C" void ext_007AD740();
extern "C" int mem_00B6167C;
extern "C" __declspec(naked) void __fastcall fn_007841B0(void* self, int edx_unused, int a1) {
    __asm {
        sub esp, 0x1c
        push ebx
        push ebp
        push esi
        mov ebx, ecx
        lea eax, [esp + 0xf]
        push edi
        mov ebp, dword ptr [ebx + 0x30]
        push eax
        lea ecx, [esp + 0x20]
        push 0
        push ecx
        lea edx, [esp + 0x2c]
        push 0
        push edx
        mov ecx, ebp
        mov dword ptr [esp + 0x2c], ebx
        mov dword ptr [esp + 0x30], 0
        mov byte ptr [esp + 0x27], 0
        call ext_007AD740
        test al, al
        jne L_found
        mov edi, dword ptr [esp + 0x20]
        jmp L_tail
L_found:
        mov eax, dword ptr [ebp]
        mov dword ptr [esp + 0x14], 0xffffffff
        test eax, eax
        je L_eax_null
        mov eax, dword ptr [eax + 0x4]
        jmp L_eax_done
L_eax_null:
        xor eax, eax
L_eax_done:
        lea esi, [eax - 1]
        test esi, esi
        jl L_done
        lea edi, [esi * 4 + 0xc]
L_loop:
        mov ecx, dword ptr [ebp]
        add ecx, edi
        cmp dword ptr [ecx], 0
        je L_dec
        lea eax, [esp + 0x14]
        push eax
        call ext_00783D00
        test al, al
        jne L_done
L_dec:
        dec esi
        sub edi, 4
        test esi, esi
        jge L_loop
L_done:
        mov ecx, dword ptr [esp + 0x14]
        lea edi, [ecx + 1]
L_tail:
        mov ecx, dword ptr [mem_00B6167C]
        mov ebp, dword ptr [ebx + 0x30]
        mov edx, edi
        lea eax, [esp + 0x24]
        sar edx, cl
        push eax
        mov ecx, ebp
        mov dword ptr [esp + 0x2c], 1
        mov dword ptr [esp + 0x28], edx
        call ext_00783DB0
        test eax, eax
        je L_skip
        mov dword ptr [ebp + 0x4], 0xffffffff
        mov ecx, dword ptr [mem_00B6167C]
        mov esi, dword ptr [eax]
        mov edx, edi
        sar edx, cl
        mov ebx, dword ptr [esi]
        mov ecx, edi
        sub edx, ebx
        and ecx, 0x8000001f
        mov ebx, dword ptr [esi + edx * 4 + 0xc]
        jns L_shift
        dec ecx
        or ecx, 0xffffffe0
        inc ecx
L_shift:
        mov esi, 1
        shl esi, cl
        or esi, ebx
        cmp esi, ebx
        je L_noset
        push esi
        push edx
        push ebp
        mov ecx, eax
        call ext_00783D60
L_noset:
        mov ebx, dword ptr [esp + 0x18]
L_skip:
        mov eax, dword ptr [ebx + 0x34]
        lea ecx, [ebx + 0x34]
        cmp edi, eax
        jl L_nogrow
        mov edx, edi
        sub edx, eax
        inc edx
        push edx
        call ext_006D2280
L_nogrow:
        mov eax, dword ptr [ebx + 0x44]
        mov ecx, dword ptr [esp + 0x30]
        mov dword ptr [eax + edi * 4], ecx
        call ext_0071E680
        mov word ptr [eax + 0x30], di
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x1c
        ret 0x4
    }
}
