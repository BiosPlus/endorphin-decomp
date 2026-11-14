// Decompiled translation unit: src/leaf/decompiled_710000.cpp
extern "C" void ext_00714580();

// [0x0071DE80] sub_0071DE80 (32 bytes)
// Stores two stack args into the object at self->[0x10] (+0x160, +0x164), then sets self->byte[0xC] = 1 (ret 8).
extern "C" __declspec(naked) void __fastcall fn_0071DE80(void* self, int edx_unused, int a1, int a2) {
    __asm {
        mov eax, dword ptr [ecx + 0x10]
        mov edx, dword ptr [esp + 0x4]
        push esi
        mov esi, dword ptr [esp + 0xc]
        mov dword ptr [eax + 0x160], edx
        mov dword ptr [eax + 0x164], esi
        mov byte ptr [ecx + 0xc], 0x1
        pop esi
        ret 0x8
    }
}

// [0x00711DA0] sub_00711DA0 (15 bytes)
// Calls sub_0071E680 (this in ecx), then stores the stack arg at [eax+0x28] of the callee's returned pointer (ret 4).
extern "C" void ext_0071E680();
extern "C" __declspec(naked) void __fastcall fn_00711DA0(void* self, int edx_unused, int a1) {
    __asm {
        call ext_0071E680
        mov ecx, dword ptr [esp + 0x4]
        mov dword ptr [eax + 0x28], ecx
        ret 0x4
    }
}

// [0x00711A70] sub_00711A70 (15 bytes)
extern "C" void __stdcall ext_00711CF0(int a1, int a2);
extern "C" void __stdcall fn_00711A70(int a1) {
    ext_00711CF0(0x20, a1);
}

// [0x00712150] sub_00712150 (16 bytes)
extern "C" int ext_00711DB0();
extern "C" bool __fastcall fn_00712150(void* self) {
    return ext_00711DB0() == 0x11;
}

// [0x00714910] sub_00714910 (16 bytes)
extern "C" void ext_007873F0();

extern "C" __declspec(naked) void __fastcall fn_00714910(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        add ecx, 0x8
        push eax
        call ext_007873F0
        ret 0x4
    }
}

// [0x00714940] sub_00714940 (16 bytes)
extern "C" __declspec(naked) void __fastcall fn_00714940(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        add ecx, 0x28
        push eax
        call ext_007873F0
        ret 0x4
    }
}

// [0x0071B010] sub_0071B010 (16 bytes)
extern "C" __declspec(naked) void __fastcall fn_0071B010(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        add ecx, 0x10
        push eax
        call ext_007873F0
        ret 0x4
    }
}

// [0x0071B040] sub_0071B040 (16 bytes)
extern "C" __declspec(naked) void __fastcall fn_0071B040(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        add ecx, 0x30
        push eax
        call ext_007873F0
        ret 0x4
    }
}

// [0x0071C320] sub_0071C320 (16 bytes)
extern "C" void ext_006B9EC0();
extern "C" __declspec(naked) void __fastcall fn_0071C320(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        add ecx, 0x50
        push eax
        call ext_006B9EC0
        ret 0x4
    }
}

// [0x0071C300] sub_0071C300 (31 bytes)
extern "C" void ext_006B9950();
extern "C" void ext_006E7460();

extern "C" __declspec(naked) void __fastcall fn_0071C300(void* self) {
    __asm {
        push esi
        lea esi, [ecx + 0x9c]
        mov ecx, esi
        call ext_006B9950
        test al, al
        je short L_0071C316
        xor eax, eax
        pop esi
        ret
L_0071C316:
        mov ecx, esi
        call ext_006E7460
        pop esi
        ret
    }
}

// [0x00711DC0] sub_00711DC0 (32 bytes)
extern "C" void ext_0071E680();
extern "C" __declspec(naked) void __fastcall fn_00711DC0(void* self, int edx_unused, int a1) {
    __asm {
        call ext_0071E680
        mov ecx, dword ptr [esp + 4]
        mov dword ptr [eax + 0xc], ecx
        ret 4
        __asm _emit 0x90                    // nop (padding inside the 32-byte unit)
        __asm _emit 0x8B __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x04   // mov edx, [esp+4]
        __asm _emit 0x8B __asm _emit 0x01                                     // mov eax, [ecx]
        __asm _emit 0x52                                                      // push edx
        __asm _emit 0xFF __asm _emit 0x90 __asm _emit 0x90 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00  // call [eax+0x90]
        __asm _emit 0xC2 __asm _emit 0x04 __asm _emit 0x00                    // ret 4
    }
}

// [0x00711D40] sub_00711D40 (47 bytes)
// Calls sub_0071E680 (this in ecx), saves its result, invokes vtable slot 0x50 of stack arg 2 with self as the one arg,
// then stores stack args 1, 3, 4 into the returned object at +0x04, +0x10, +0x14 (ret 0x10).
extern "C" void ext_0071E680();
extern "C" __declspec(naked) void __fastcall fn_00711D40(void* self, int edx_unused, int a1, int a2, int a3, int a4) {
    __asm {
        push esi
        push edi
        mov edi, ecx
        call ext_0071E680
        mov ecx, dword ptr [esp + 0x10]
        mov esi, eax
        push edi
        mov eax, dword ptr [ecx]
        call dword ptr [eax + 0x50]
        mov ecx, dword ptr [esp + 0xc]
        mov edx, dword ptr [esp + 0x14]
        mov eax, dword ptr [esp + 0x18]
        mov dword ptr [esi + 0x4], ecx
        mov dword ptr [esi + 0x10], edx
        mov dword ptr [esi + 0x14], eax
        pop edi
        pop esi
        ret 0x10
    }
}

// [0x0071C210] sub_0071C210 (63 bytes)
extern "C" int mem_00996640;
extern "C" int mem_00993828;
extern "C" int mem_00993C80;

extern "C" __declspec(naked) double __fastcall fn_0071C210(void* self, int edx_unused, double a1, double a2, double a3) {
    __asm {
        mov eax, dword ptr [ecx + 0xc]
        cmp dword ptr [eax + 0x408], 0x2
        jne other
        fld qword ptr [esp + 0xc]
        fmul qword ptr [mem_00996640]
        jmp done
    other:
        fld qword ptr [esp + 0x4]
        fmul qword ptr [mem_00996640]
        fmul qword ptr [eax + 0xd28]
    done:
        fdiv qword ptr [esp + 0x14]
        fmul qword ptr [mem_00993828]
        fld1
        fpatan
        fmul qword ptr [mem_00993C80]
        ret 0x18
    }
}

// [0x00710520] sub_00710520 (96 bytes)
// Two-thunk layout: body 1 at +0x00 returns mem_00B5EEB8; body 2 at +0x20 copies the double at *_HUGE into mem_00B5F070/74 via jmp over nop padding;
// body 3 at +0x40 stores -(*_HUGE) into mem_00B5F068.
extern "C" int mem_00B5EEB8;
extern "C" int mem_00925284;
extern "C" int mem_00B5F070;
extern "C" int mem_00B5F074;
extern "C" int mem_00B5F068;
extern "C" __declspec(naked) void __fastcall fn_00710520(void* self) {
    __asm {
        mov eax, dword ptr [mem_00B5EEB8]
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
        mov dword ptr [mem_00B5F070], ecx
        mov dword ptr [mem_00B5F074], edx
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
        fstp qword ptr [mem_00B5F068]
        ret
    }
}

// [0x00714AE0] sub_00714AE0 (96 bytes)
extern "C" int mem_00925284;
extern "C" int mem_00B5FA90;
extern "C" int mem_00B5FA94;
extern "C" int mem_00B5FA88;

// Three-thunk layout: body 1 at +0x00 returns [ecx+0xD8];
// body 2 at +0x20 copies the double at *_HUGE into mem_00B5FA90/94 via jmp over nop padding;
// body 3 at +0x50 stores -(*_HUGE) into mem_00B5FA88.
extern "C" __declspec(naked) void __fastcall fn_00714AE0(void* self) {
    __asm {
        mov eax, dword ptr [ecx + 0xd8]
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
        mov dword ptr [mem_00B5FA90], ecx
        mov dword ptr [mem_00B5FA94], edx
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
        fstp qword ptr [mem_00B5FA88]
        ret
    }
}

// [0x00714920] sub_00714920 (32 bytes)
extern "C" void ext_006D2390();
extern "C" __declspec(naked) void __fastcall fn_00714920(void* self) {
    __asm {
        push ecx
        push esi
        mov esi, dword ptr [esp + 0xc]
        add ecx, 0x8
        mov dword ptr [esp + 0x4], 0x0
        push ecx
        mov ecx, esi
        call ext_006D2390
        mov eax, esi
        pop esi
        pop ecx
        ret 0x4
    }
}

// [0x00714950] sub_00714950 (32 bytes)
extern "C" __declspec(naked) void __fastcall fn_00714950(void* self) {
    __asm {
        push ecx
        push esi
        mov esi, dword ptr [esp + 0xc]
        add ecx, 0x28
        mov dword ptr [esp + 0x4], 0x0
        push ecx
        mov ecx, esi
        call ext_006D2390
        mov eax, esi
        pop esi
        pop ecx
        ret 0x4
    }
}

extern "C" void ext_007155B0();

// [0x00715770] sub_00715770 (32 bytes)
extern "C" __declspec(naked) void __fastcall fn_00715770(void* self, int edx_unused, void* arg0) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        push edi
        mov eax, ecx
        sub esp, 0x20
        mov ecx, 8
        mov edi, esp
        rep movsd
        mov ecx, eax
        call ext_007155B0
        pop edi
        pop esi
        ret 4
    }
}

// [0x0071B020] sub_0071B020 (32 bytes)
extern "C" void ext_006D2390();
extern "C" __declspec(naked) void* __fastcall fn_0071B020(void* self, int edx_unused, void* arg) {
    __asm {
        push ecx
        push esi
        mov esi, dword ptr [esp + 0xc]
        add ecx, 0x10
        mov dword ptr [esp + 0x4], 0x0
        push ecx
        mov ecx, esi
        call ext_006D2390
        mov eax, esi
        pop esi
        pop ecx
        ret 0x4
    }
}

// [0x0071B050] sub_0071B050 (32 bytes)
extern "C" __declspec(naked) void* __fastcall fn_0071B050(void* self, int edx_unused, void* arg) {
    __asm {
        push ecx
        push esi
        mov esi, dword ptr [esp + 0xc]
        add ecx, 0x30
        mov dword ptr [esp + 0x4], 0x0
        push ecx
        mov ecx, esi
        call ext_006D2390
        mov eax, esi
        pop esi
        pop ecx
        ret 0x4
    }
}

// [0x00710FB0] sub_00710FB0 (48 bytes)
extern "C" void ext_00710FE0();
extern "C" int mem_009251D8;

extern "C" __declspec(naked) void __fastcall fn_00710FB0(void* self, int edx_unused, void* arg) {
    __asm {
        push esi
        mov esi, ecx
        test byte ptr [esi], 0x20
        je L_00710FC9
        mov eax, dword ptr [esi + 0x4]
        test eax, eax
        je L_00710FC9
        push eax
        call dword ptr [mem_009251D8]
        add esp, 0x4
L_00710FC9:
        mov edx, dword ptr [esi]
        mov eax, dword ptr [esp + 0x8]
        or edx, 0x20
        push eax
        mov ecx, esi
        mov dword ptr [esi], edx
        call ext_00710FE0
        pop esi
        ret 0x4
    }
}

// [0x0071CA10] sub_0071CA10 (48 bytes)
extern "C" void ext_006C9520();
extern "C" void ext_006DC460();
extern "C" void ext_006C9F70();
extern "C" void ext_00708000();
extern "C" __declspec(naked) void __fastcall fn_0071CA10(void* self) {
    __asm {
        mov eax, ecx
        mov ecx, dword ptr [eax + 4]
        test ecx, ecx
        je short L_NULL_0071CA10
        call ext_006DC460
        mov ecx, eax
        call ext_006C9520
        mov ecx, eax
        jmp ext_006C9F70
    L_NULL_0071CA10:
        mov ecx, dword ptr [eax + 0Ch]
        push 0AA8D10h
        call ext_00708000
        mov edx, dword ptr [eax]
        mov ecx, eax
        jmp dword ptr [edx + 7Ch]
    }
}

// [0x0071CA40] sub_0071CA40 (48 bytes)
extern "C" void ext_006C9530();
extern "C" void ext_006DC460();
extern "C" void ext_00708000();
extern "C" void ext_006C9F70();
extern "C" __declspec(naked) void __fastcall fn_0071CA40(void* self) {
    __asm {
        mov eax, ecx
        mov ecx, dword ptr [eax + 4]
        test ecx, ecx
        je short L_NULL_0071CA40
        call ext_006DC460
        mov ecx, eax
        call ext_006C9530
        mov ecx, eax
        jmp ext_006C9F70
    L_NULL_0071CA40:
        mov ecx, dword ptr [eax + 0Ch]
        push 0AA8D1Ch
        call ext_00708000
        mov edx, dword ptr [eax]
        mov ecx, eax
        jmp dword ptr [edx + 7Ch]
    }
}

// [0x0071CA70] sub_0071CA70 (48 bytes)
extern "C" void ext_006C9540();
extern "C" void ext_006DC460();
extern "C" void ext_00708000();
extern "C" void ext_006C9F70();
extern "C" __declspec(naked) void __fastcall fn_0071CA70(void* self) {
    __asm {
        mov eax, ecx
        mov ecx, dword ptr [eax + 4]
        test ecx, ecx
        je short L_NULL_0071CA70
        call ext_006DC460
        mov ecx, eax
        call ext_006C9540
        mov ecx, eax
        jmp ext_006C9F70
    L_NULL_0071CA70:
        mov ecx, dword ptr [eax + 0Ch]
        push 0AA8D2Ch
        call ext_00708000
        mov edx, dword ptr [eax]
        mov ecx, eax
        jmp dword ptr [edx + 7Ch]
    }
}

// [0x0071CAA0] sub_0071CAA0 (48 bytes)
extern "C" void ext_006C9550();
extern "C" void ext_006DC460();
extern "C" void ext_00708000();
extern "C" void ext_006C9F70();
extern "C" __declspec(naked) void __fastcall fn_0071CAA0(void* self) {
    __asm {
        mov eax, ecx
        mov ecx, dword ptr [eax + 4]
        test ecx, ecx
        je short L_NULL_0071CAA0
        call ext_006DC460
        mov ecx, eax
        call ext_006C9550
        mov ecx, eax
        jmp ext_006C9F70
    L_NULL_0071CAA0:
        mov ecx, dword ptr [eax + 0Ch]
        push 0AA8D3Ch
        call ext_00708000
        mov edx, dword ptr [eax]
        mov ecx, eax
        jmp dword ptr [edx + 7Ch]
    }
}

// [0x0071CAD0] sub_0071CAD0 (48 bytes)
extern "C" void ext_006C9560();
extern "C" void ext_006DC460();
extern "C" void ext_00708000();
extern "C" void ext_006C9F70();
extern "C" __declspec(naked) void __fastcall fn_0071CAD0(void* self) {
    __asm {
        mov eax, ecx
        mov ecx, dword ptr [eax + 4]
        test ecx, ecx
        je short L_NULL_0071CAD0
        call ext_006DC460
        mov ecx, eax
        call ext_006C9560
        mov ecx, eax
        jmp ext_006C9F70
    L_NULL_0071CAD0:
        mov ecx, dword ptr [eax + 0Ch]
        push 0AA8D4Ch
        call ext_00708000
        mov edx, dword ptr [eax]
        mov ecx, eax
        jmp dword ptr [edx + 7Ch]
    }
}

// [0x007121A0] sub_007121A0 (160 bytes)
extern "C" void ext_006FC6E0();
extern "C" void ext_006FA5A0();
extern "C" int mem_00B5F1F8;
extern "C" int mem_00B5E400;

extern "C" __declspec(naked) void* __fastcall fn_007121A0(void* self, int edx_unused, int idx) {
    __asm {
        push esi
        mov esi, ecx
        test esi, esi
        push edi
        je L_ret_zero
        mov eax, dword ptr [mem_00B5F1F8]
        cmp eax, -1
        je L_use_self_1
        cmp eax, dword ptr [mem_00B5E400]
        je L_use_self_1
        push eax
        call ext_006FC6E0
        add esp, 4
        mov ecx, esi
        push eax
        call ext_006FA5A0
        mov ecx, dword ptr [eax + 0x18]
        mov eax, dword ptr [mem_00B5F1F8]
        jmp L_check_idx
    L_use_self_1:
        mov ecx, dword ptr [esi + 0x18]
    L_check_idx:
        mov edi, dword ptr [esp + 0xC]
        cmp edi, ecx
        jge L_ret_zero
        cmp eax, -1
        je L_use_self_2
        cmp eax, dword ptr [mem_00B5E400]
        je L_use_self_2
        push eax
        call ext_006FC6E0
        add esp, 4
        mov ecx, esi
        push eax
        call ext_006FA5A0
        mov ecx, dword ptr [eax + 0x14]
        add eax, 0x10
        add ecx, edi
        mov edx, dword ptr [eax]
        lea ecx, [ecx + ecx * 2]
        lea ecx, [edx + ecx * 4]
    L_check_ptr:
        mov eax, dword ptr [ecx + 4]
        test eax, eax
        je L_ret_zero
        mov edx, dword ptr [eax]
        mov esi, dword ptr [ecx]
        cmp edx, esi
        jne L_ret_zero
        mov eax, dword ptr [eax + 4]
        pop edi
        pop esi
        ret 4
    L_use_self_2:
        mov eax, dword ptr [esi + 0x14]
        mov ecx, dword ptr [esi + 0x10]
        add eax, edi
        lea eax, [eax + eax * 2]
        lea ecx, [ecx + eax * 4]
        jmp L_check_ptr
    L_ret_zero:
        pop edi
        xor eax, eax
        pop esi
        ret 4
    }
}

// [0x0071C2A0] sub_0071C2A0 (64 bytes)
extern "C" void ext_006FB650();
extern "C" void ext_006FC200();

extern "C" __declspec(naked) void __fastcall fn_0071C2A0(void* self, int edx_unused, void* arg1) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 0x8]
        push edi
        test ecx, ecx
        je short loc_71C2DB
        mov eax, dword ptr [ecx]
        call dword ptr [eax + 0xc]
        mov edi, eax
        test edi, edi
        je short loc_71C2DB
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [ecx]
        call dword ptr [edx + 0xc]
        mov esi, eax
        test esi, esi
        je short loc_71C2DB
        push edi
        mov ecx, esi
        call ext_006FC200
        test al, al
        jne short loc_71C2DB
        push 0
        push edi
        mov ecx, esi
        call ext_006FB650
    loc_71C2DB:
        pop edi
        pop esi
        ret 4
    }
}

// [0x0071BFD0] sub_0071BFD0 (79 bytes)
extern "C" void ext_0071B920();
extern "C" int mem_0099DEC8;

extern "C" __declspec(naked) void __fastcall fn_0071BFD0(void* self, int edx_unused, double arg_0) {
    __asm {
        mov edx, dword ptr [ecx + 0Ch]
        fld qword ptr [esp + 4]
        fcomp qword ptr [edx + 0B90h]
        fnstsw ax
        test ah, 40h
        jne loc_71C01C
        fld qword ptr [esp + 4]
        fcomp qword ptr [mem_0099DEC8]
        fnstsw ax
        test ah, 41h
        jne loc_71C009
        fld qword ptr [esp + 4]
        push 0
        fstp qword ptr [edx + 0B90h]
        call ext_0071B920
        ret 8
    loc_71C009:
        fld qword ptr [mem_0099DEC8]
        push 0
        fstp qword ptr [edx + 0B90h]
        call ext_0071B920
    loc_71C01C:
        ret 8
    }
}

// [0x0071C030] sub_0071C030 (79 bytes)
extern "C" __declspec(naked) void __fastcall fn_0071C030(void* self, int edx_unused, double arg_0) {
    __asm {
        mov edx, dword ptr [ecx + 0Ch]
        fld qword ptr [esp + 4]
        fcomp qword ptr [edx + 0C18h]
        fnstsw ax
        test ah, 40h
        jne loc_71C07C
        fld qword ptr [esp + 4]
        fcomp qword ptr [mem_0099DEC8]
        fnstsw ax
        test ah, 41h
        jne loc_71C069
        fld qword ptr [esp + 4]
        push 0
        fstp qword ptr [edx + 0C18h]
        call ext_0071B920
        ret 8
    loc_71C069:
        fld qword ptr [mem_0099DEC8]
        push 0
        fstp qword ptr [edx + 0C18h]
        call ext_0071B920
    loc_71C07C:
        ret 8
    }
}

// [0x0071C090] sub_0071C090 (79 bytes)
extern "C" __declspec(naked) void __fastcall fn_0071C090(void* self, int edx_unused, double arg_0) {
    __asm {
        mov edx, dword ptr [ecx + 0Ch]
        fld qword ptr [esp + 4]
        fcomp qword ptr [edx + 0D28h]
        fnstsw ax
        test ah, 40h
        jne loc_71C0DC
        fld qword ptr [esp + 4]
        fcomp qword ptr [mem_0099DEC8]
        fnstsw ax
        test ah, 41h
        jne loc_71C0C9
        fld qword ptr [esp + 4]
        push 0
        fstp qword ptr [edx + 0D28h]
        call ext_0071B920
        ret 8
    loc_71C0C9:
        fld qword ptr [mem_0099DEC8]
        push 0
        fstp qword ptr [edx + 0D28h]
        call ext_0071B920
    loc_71C0DC:
        ret 8
    }
}

// [0x0071DD00] sub_0071DD00 (79 bytes)
extern "C" void ext_00705450();
extern "C" void ext_00711220();

extern "C" __declspec(naked) void __fastcall fn_0071DD00(void* self) {
    __asm {
        push -1
        push 0x008BD488
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        lea ecx, [esi + 0xe0]
        mov dword ptr [esp + 0x10], 0x0
        call ext_00711220
        mov ecx, esi
        mov dword ptr [esp + 0x10], -1
        call ext_00705450
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00715600] sub_00715600 (80 bytes)
extern "C" void ext_0077FB70();
extern "C" __declspec(naked) void __fastcall fn_00715600(void* self) {
    __asm {
        push ecx
        mov eax, dword ptr [ecx + 0x10]
        push esi
        mov esi, dword ptr [esp + 0xc]
        push 0x3ff00000
        mov ecx, dword ptr [eax + 0x284]
        mov edx, dword ptr [eax + 0x280]
        push 0x0
        push ecx
        mov ecx, dword ptr [eax + 0x27c]
        push edx
        mov edx, dword ptr [eax + 0x278]
        push ecx
        mov ecx, dword ptr [eax + 0x274]
        push edx
        mov edx, dword ptr [eax + 0x270]
        push ecx
        push edx
        mov ecx, esi
        mov dword ptr [esp + 0x24], 0x0
        call ext_0077FB70
        mov eax, esi
        pop esi
        pop ecx
        ret 0x4
    }
}

// [0x0071AF90] sub_0071AF90 (127 bytes)
extern "C" void ext_006C3250();
extern "C" void ext_006D2370();
extern "C" void ext_006D2390();
extern "C" void ext_006D80A0();
extern "C" __declspec(naked) void __fastcall fn_0071AF90(void* self, int edx_unused, void* a1) {
    __asm {
        push -1
        push 08c1a5fh
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 24h
        push esi
        mov esi, ecx
        lea ecx, [esp + 8]
        mov dword ptr [esp + 4], 0
        call ext_006D2370
        mov ecx, dword ptr [esi + 4]
        mov dword ptr [esp + 30h], 1
        test ecx, ecx
        je L_skip_0071AF90
        lea eax, [esp + 8]
        push eax
        call ext_006C3250
    L_skip_0071AF90:
        mov esi, dword ptr [esp + 38h]
        lea ecx, [esp + 8]
        push ecx
        mov ecx, esi
        call ext_006D2390
        mov dword ptr [esp + 4], 1
        lea ecx, [esp + 8]
        mov byte ptr [esp + 30h], 0
        call ext_006D80A0
        mov ecx, dword ptr [esp + 28h]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 30h
        ret 4
    }
}

// [0x00710B70] sub_00710B70 (128 bytes)
extern "C" void ext_00708C10();
extern "C" int mem_00B5F218;
extern "C" int mem_00B5F21C;
extern "C" int mem_00B5F210;
extern "C" __declspec(naked) void __fastcall fn_00710B70(void* self) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        test esi, esi
        je loc_710b91
        mov eax, dword ptr [esi]
        test eax, eax
        je loc_710b91
        push eax
        call ext_00708C10
        mov dword ptr [esi], 0
        mov al, 1
        pop esi
        ret 4
loc_710b91:
        xor al, al
        pop esi
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
        mov edx, dword ptr [eax + 4]
        mov dword ptr [mem_00B5F218], ecx
        mov dword ptr [mem_00B5F21C], edx
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
        fstp qword ptr [mem_00B5F210]
        ret
    }
}

extern "C" void ext_006A5C62();
extern "C" void ext_00713020();
extern "C" void ext_00782D00();
extern "C" int mem_00B5FA68;

// [0x00712EB0] sub_00712EB0 (144 bytes)
extern "C" __declspec(naked) void* __fastcall fn_00712EB0(int* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8b8fbb
        push eax
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr fs:[0], esp
        push esi
        mov esi, ecx
        mov dword ptr [esi], 0x9960c8
        mov dword ptr [esi + 4], 0
        mov dword ptr [esi + 8], 0
        mov dword ptr [esi + 0xc], eax
        mov dword ptr [esi + 0x10], esi
        mov eax, dword ptr [mem_00B5FA68]
        test eax, eax
        jne L_712f23
        push 0x14
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp + 0x14], eax
        test eax, eax
        mov dword ptr [esp + 0xc], 0
        je L_712f14
        push 0x14
        mov ecx, eax
        call ext_00782D00
        jmp L_712f16
    L_712f14:
        xor eax, eax
    L_712f16:
        mov dword ptr [esp + 0xc], -1
        mov dword ptr [mem_00B5FA68], eax
    L_712f23:
        push esi
        call ext_00713020
        mov ecx, dword ptr [esp + 8]
        add esp, 4
        mov eax, esi
        mov dword ptr fs:[0], ecx
        pop esi
        add esp, 0xc
        ret 4
    }
}

// [0x00715E10] sub_00715E10 (160 bytes)
extern "C" void* __fastcall fn_00715E10(void* self, int edx_unused, const void* src) {
    ext_00714580();
    unsigned int* d = (unsigned int*)self;
    const unsigned int* s = (const unsigned int*)src;
    d[0x00/4] = s[0x00/4];
    d[0x04/4] = s[0x04/4];
    d[0x08/4] = s[0x08/4];
    d[0x0c/4] = s[0x0c/4];
    d[0x10/4] = s[0x10/4];
    d[0x14/4] = s[0x14/4];
    d[0x20/4] = s[0x20/4];
    d[0x24/4] = s[0x24/4];
    d[0x28/4] = s[0x28/4];
    d[0x2c/4] = s[0x2c/4];
    d[0x30/4] = s[0x30/4];
    d[0x34/4] = s[0x34/4];
    d[0x40/4] = s[0x40/4];
    d[0x44/4] = s[0x44/4];
    d[0x48/4] = s[0x48/4];
    d[0x4c/4] = s[0x4c/4];
    d[0x50/4] = s[0x50/4];
    d[0x54/4] = s[0x54/4];
    d[0x60/4] = s[0x60/4];
    d[0x64/4] = s[0x64/4];
    d[0x68/4] = s[0x68/4];
    d[0x6c/4] = s[0x6c/4];
    d[0x70/4] = s[0x70/4];
    d[0x74/4] = s[0x74/4];
    return self;
}

// [0x00713F70] sub_00713F70 (160 bytes)
extern "C" void ext_006A6C87();
extern "C" void ext_007131E0();
extern "C" void ext_00713F70();
extern "C" void ext_00713FB0();
extern "C" void ext_00714060();
extern "C" int mem_00AAC08C;

extern "C" __declspec(naked) void* __fastcall fn_00713F70(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        mov esi, ecx
        push eax
        call ext_007131E0
        mov dword ptr [esi], 0x996140
        mov ecx, dword ptr [mem_00AAC08C]
        mov dword ptr [esi + 0x10], ecx
        mov eax, esi
        pop esi
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

        call ext_00713FB0
        _emit 0xe9
        _emit 0x16
        _emit 0x00
        _emit 0x00
        _emit 0x00

        nop
        nop
        nop
        nop
        nop
        nop

    L_713fb0:
        push 0xaac234
        mov ecx, 0xb5f4e0
        call fn_00713F70
        ret

    L_713fc0:
        push 0x713fd0
        call ext_006A6C87
        pop ecx
        ret

        nop
        nop
        nop
        nop

    L_713fd0:
        mov ecx, 0xb5f4e0
        jmp ext_00714060

        nop
        nop
        nop
        nop
        nop
        nop

    L_713fe0:
        mov eax, dword ptr [esp + 0x4]
        cmp eax, 0x3
        ja L_714008
        _emit 0xff
        _emit 0x24
        _emit 0x85
        _emit 0x10
        _emit 0x40
        _emit 0x71
        _emit 0x00

    L_case0:
        mov eax, 0xaac23c
        ret 0x4

    L_case1:
        mov eax, 0xaa8c98
        ret 0x4

    L_case2:
        mov eax, 0xaac238
        ret 0x4

    L_714008:
        mov eax, 0xaac03c
        ret 0x4
    }
}

// [0x00713D10] sub_00713D10 (160 bytes)
extern "C" void ext_006A6C87();
extern "C" void ext_007131E0();
extern "C" void ext_00713D50();
extern "C" void ext_00714060();
extern "C" int mem_00AAC08C;

extern "C" __declspec(naked) void* __fastcall fn_00713D10(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        mov esi, ecx
        push eax
        call ext_007131E0
        mov dword ptr [esi], 0x996104
        mov ecx, dword ptr [mem_00AAC08C]
        mov dword ptr [esi + 0x10], ecx
        mov eax, esi
        pop esi
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

        call ext_00713D50
        _emit 0xe9
        _emit 0x16
        _emit 0x00
        _emit 0x00
        _emit 0x00

        nop
        nop
        nop
        nop
        nop
        nop

    L_713d50:
        push 0xaa8cec
        mov ecx, 0xb5f858
        call fn_00713D10
        ret

    L_713d60:
        push 0x713d70
        call ext_006A6C87
        pop ecx
        ret

        nop
        nop
        nop
        nop

    L_713d70:
        mov ecx, 0xb5f858
        jmp ext_00714060

        nop
        nop
        nop
        nop
        nop
        nop

    L_713d80:
        mov eax, dword ptr [esp + 0x4]
        cmp eax, 0x3
        ja L_713da8
        _emit 0xff
        _emit 0x24
        _emit 0x85
        _emit 0xb0
        _emit 0x3d
        _emit 0x71
        _emit 0x00

    L_case0:
        mov eax, 0xaac1f8
        ret 0x4

    L_case1:
        mov eax, 0xaac1f4
        ret 0x4

    L_case2:
        mov eax, 0xaac1f0
        ret 0x4

    L_713da8:
        mov eax, 0xaac03c
        ret 0x4
    }
}

// [0x00713050] sub_00713050 (208 bytes)
extern "C" void ext_00712EB0();
extern "C" void ext_00713120();
extern "C" int mem_009251F0;
extern "C" int mem_00B5FA6C;
extern "C" int mem_00925218;
extern "C" int mem_009252D0;

extern "C" __declspec(naked) void __fastcall fn_00713050(void* self) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        mov esi, ecx
        push eax
        call ext_00712EB0
        mov dword ptr [esi], 0x9960dc
        mov dword ptr [esi + 0x8], 0x1
        mov dword ptr [esi + 0x4], 0x8
        mov eax, esi
        pop esi
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
        mov eax, dword ptr [esp + 0x4]
        push eax
        call dword ptr [mem_009251F0]
        mov ecx, dword ptr [esp + 0xc]
        add esp, 0x4
        mov al, 0x1
        fstp qword ptr [ecx]
        ret 0x8
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        mov al, byte ptr [mem_00B5FA6C]
        sub esp, 0x138
        test al, al
        push esi
        mov esi, dword ptr [mem_00925218]
        push edi
        jne L_7130d3
        call ext_00713120
        push eax
        push 0xaac144
        push 0xb5f564
        call esi
        add esp, 0xc
        mov byte ptr [mem_00B5FA6C], 0x1
    L_7130d3:
        mov eax, dword ptr [esp + 0x14c]
        mov ecx, dword ptr [eax + 0x4]
        mov edx, dword ptr [eax]
        push ecx
        push edx
        lea eax, [esp + 0x10]
        push 0xb5f564
        push eax
        call esi
        mov esi, dword ptr [esp + 0x158]
        mov edi, dword ptr [esp + 0x154]
        lea edx, [esp + 0x18]
        lea ecx, [esi - 0x1]
        push ecx
        push edx
        push edi
        call dword ptr [mem_009252D0]
        add esp, 0x1c
        mov byte ptr [edi + esi - 0x1], 0x0
        mov al, 0x1
        pop edi
        pop esi
        add esp, 0x138
        ret 0xc
    }
}

// [0x00711220] sub_00711220 (224 bytes)
extern "C" void ext_00710F50();
extern "C" void ext_00711A80();
extern "C" void ext_006FA230();
extern "C" __declspec(naked) void __fastcall fn_00711220(void* self) {
    __asm {
        push -1
        push 0x008BCB43
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        mov dword ptr [esi], 0x00995F50
        mov dword ptr [esp + 0x10], 0x1
        call ext_00711A80
        test al, al
        je skip_a
        mov ecx, esi
        call ext_0071E680
        mov eax, dword ptr [eax + 0x2c]
        test eax, eax
        je skip_a
        mov edx, dword ptr [eax]
        push 0x1
        mov ecx, eax
        call dword ptr [edx]
skip_a:
        lea ecx, [esi + 0x40]
        call ext_00710F50
        mov ecx, esi
        mov dword ptr [esp + 0x10], 0xFFFFFFFF
        call ext_006FA230
        mov ecx, dword ptr [esp + 0x8]
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
        nop
        nop
        push ecx
        push esi
        mov esi, ecx
        call ext_00711DB0
        dec eax
        cmp eax, 0xF
        ja fail_b
        xor ecx, ecx
        mov cl, byte ptr [eax + 0x0071130C]
        jmp dword ptr [ecx * 4 + 0x00711300]
case_b:
        mov edx, dword ptr [esi]
        push 0x0
        push 0x0
        lea eax, [esp + 0xC]
        push 0x0
        push eax
        mov ecx, esi
        call dword ptr [edx + 0x88]
        mov eax, dword ptr [esp + 0x4]
        pop esi
        and eax, 0xFF
        pop ecx
        ret
case_c:
        mov edx, dword ptr [esi]
        push 0x0
        push 0x0
        lea eax, [esp + 0xC]
        push 0x0
        push eax
        mov ecx, esi
        call dword ptr [edx + 0x88]
        mov eax, dword ptr [esp + 0x4]
        pop esi
        pop ecx
        ret
fail_b:
        xor eax, eax
        pop esi
        pop ecx
        ret
    }
}

// [0x0071F480] sub_0071F480 (240 bytes)
extern "C" void ext_006CA6A0();
extern "C" void ext_006DEEC0();
extern "C" void ext_0071F2A0();
extern "C" void ext_0071F480();
extern "C" __declspec(naked) void __fastcall fn_0071F480(void* self) {
    __asm {
        push ebx
        push esi
        mov esi, dword ptr [esp+0ch]
        push edi
        test esi, esi
        je L_ret
        mov ebx, dword ptr [esp+14h]
        test ebx, ebx
        je L_ret
        mov eax, dword ptr [esp+1ch]
        test eax, eax
        jl L_ret
        jg L_pos
        mov eax, dword ptr [esp+18h]
        test eax, eax
        jbe L_ret
L_pos:
        mov eax, dword ptr [esi]
        mov ecx, esi
        call dword ptr [eax+14h]
        mov edx, dword ptr [ebx]
        mov ecx, ebx
        mov edi, eax
        call dword ptr [edx+14h]
        cmp edi, eax
        jne L_ret
        mov ecx, esi
        call ext_006DEEC0
        mov edi, eax
        test edi, edi
        jne L_nz
        mov eax, dword ptr [esi]
        mov ecx, esi
        call dword ptr [eax+14h]
        test eax, eax
        jle L_ret
L_loop1:
        mov ecx, dword ptr [esp+24h]
        mov edx, dword ptr [esp+20h]
        mov eax, dword ptr [esp+1ch]
        push ecx
        mov ecx, dword ptr [esp+1ch]
        push edx
        mov edx, dword ptr [ebx]
        push eax
        push ecx
        push edi
        mov ecx, ebx
        call dword ptr [edx+18h]
        push eax
        mov eax, dword ptr [esi]
        push edi
        mov ecx, esi
        call dword ptr [eax+18h]
        push eax
        call ext_0071F480
        mov edx, dword ptr [esi]
        add esp, 18h
        mov ecx, esi
        inc edi
        call dword ptr [edx+14h]
        cmp edi, eax
        jl L_loop1
        pop edi
        pop esi
        pop ebx
        ret
L_nz:
        mov ecx, ebx
        call ext_006DEEC0
        mov ebx, eax
        test ebx, ebx
        je L_ret
        mov ecx, edi
        xor esi, esi
        call ext_006CA6A0
        test eax, eax
        jle L_ret
L_loop2:
        mov eax, dword ptr [esp+24h]
        mov ecx, dword ptr [esp+20h]
        mov edx, dword ptr [esp+1ch]
        push eax
        mov eax, dword ptr [esp+1ch]
        push ecx
        push edx
        push eax
        push ebx
        push edi
        push esi
        call ext_0071F2A0
        add esp, 1ch
        mov ecx, edi
        inc esi
        call ext_006CA6A0
        cmp esi, eax
        jl L_loop2
L_ret:
        pop edi
        pop esi
        pop ebx
        ret
    }
}

// [0x00712A80] sub_00712A80 (272 bytes)
// Maps a handle-like value (stack arg) to a small code: calls sub_006D91C0(arg) and compares arg against
// several globals, then the returned value against others; falls back to 0xC or 0 (ret 0).
extern "C" void ext_006D91C0();
extern "C" int mem_00AAC0A0;
extern "C" int mem_00AAC0D8;
extern "C" int mem_00AAC09C;
extern "C" int mem_00AAC0E0;
extern "C" int mem_00AAC0E4;
extern "C" int mem_00AAC0DC;
extern "C" int mem_00AAC088;
extern "C" int mem_00AAC084;
extern "C" int mem_00AAC08C;
extern "C" int mem_00AAC090;
extern "C" int mem_00925284;
extern "C" int mem_00B5F6B8;
extern "C" int mem_00B5F6BC;
extern "C" int mem_00B5F6B0;
extern "C" __declspec(naked) void __fastcall fn_00712A80(void* self) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        xor eax, eax
        test esi, esi
        je L_end
        mov ecx, esi
        call ext_006D91C0
        cmp esi, dword ptr [mem_00AAC0A0]
        jne L_c0d8
        mov eax, 0x10
        pop esi
        ret
    L_c0d8:
        cmp esi, dword ptr [mem_00AAC0D8]
        jne L_c09c
        mov eax, 0x2
        pop esi
        ret
    L_c09c:
        cmp esi, dword ptr [mem_00AAC09C]
        jne L_c0e0
        mov eax, 0x1
        pop esi
        ret
    L_c0e0:
        cmp esi, dword ptr [mem_00AAC0E0]
        jne L_c0e4
        mov eax, 0xe
        pop esi
        ret
    L_c0e4:
        cmp esi, dword ptr [mem_00AAC0E4]
        jne L_c0dc
        mov eax, 0xf
        pop esi
        ret
    L_c0dc:
        cmp esi, dword ptr [mem_00AAC0DC]
        jne L_eax_c088
        mov eax, 0x6
        pop esi
        ret
    L_eax_c088:
        cmp eax, dword ptr [mem_00AAC088]
        jne L_eax_c084
        mov eax, 0x7
        pop esi
        ret
    L_eax_c084:
        cmp eax, dword ptr [mem_00AAC084]
        jne L_eax_c08c
        mov eax, 0x4
        pop esi
        ret
    L_eax_c08c:
        cmp eax, dword ptr [mem_00AAC08C]
        jne L_fallback
        mov eax, 0xd
        pop esi
        ret
    L_fallback:
        mov esi, dword ptr [mem_00AAC090]
        xor ecx, ecx
        cmp eax, esi
        setne cl
        dec ecx
        and ecx, 0xc
        mov eax, ecx
    L_end:
        pop esi
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
        nop
        __asm _emit 0xe9
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
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
        mov dword ptr [mem_00B5F6B8], ecx
        mov dword ptr [mem_00B5F6BC], edx
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
        __asm _emit 0xe9
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
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
        fstp qword ptr [mem_00B5F6B0]
        ret
    }
}

// [0x007131E0] sub_007131E0 (383 bytes)
// Window covers adjacent routines: 0x7131E0 ctor-like (ret 4), 0x713210 strtod-based parser,
// 0x713270 sprintf/strncpy formatter, 0x713310 zero-init, 0x713330 string-table lookup.
extern "C" void ext_00712EB0();
extern "C" void ext_00713120();
extern "C" int mem_00925224;
extern "C" int mem_00925218;
extern "C" int mem_009252D0;
extern "C" int mem_00B5FA6D;

extern "C" __declspec(naked) void* __fastcall fn_007131E0(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        mov esi, ecx
        push eax
        call ext_00712EB0
        mov dword ptr [esi], 0x996154
        mov dword ptr [esi + 0x8], 0x3
        mov dword ptr [esi + 0x4], 0x18
        mov eax, esi
        pop esi
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

        push ebx
        push esi
        mov esi, dword ptr [esp + 0xc]
        push edi
        cmp byte ptr [esi], 0x7b
        je L_713224
    L_71321C:
        pop edi
        pop esi
        xor al, al
        pop ebx
        ret 0x8
    L_713224:
        mov ebx, dword ptr [esp + 0x14]
        xor edi, edi
    L_71322A:
        lea eax, [esp + 0x10]
        inc esi
        push eax
        push esi
        call dword ptr [mem_00925224]
        mov eax, dword ptr [esp + 0x18]
        add esp, 0x8
        fstp qword ptr [ebx]
        cmp esi, eax
        je L_71321C
        cmp byte ptr [eax], 0x2c
        je L_71324E
        cmp edi, 0x2
        jl L_71321C
    L_71324E:
        inc edi
        add ebx, 0x8
        cmp edi, 0x3
        mov esi, eax
        jl L_71322A
        mov cl, byte ptr [eax]
        pop edi
        cmp cl, 0x7d
        pop esi
        sete al
        pop ebx
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

        mov al, byte ptr [mem_00B5FA6D]
        sub esp, 0x3ac
        test al, al
        push esi
        mov esi, dword ptr [mem_00925218]
        push edi
        jne L_7132A5
        call ext_00713120
        push eax
        push eax
        push eax
        push 0xaac17c
        push 0xb5f50c
        call esi
        add esp, 0x14
        mov byte ptr [mem_00B5FA6D], 0x1
    L_7132A5:
        mov eax, dword ptr [esp + 0x3c0]
        sub esp, 0x8
        sub esp, 0x8
        fld qword ptr [eax + 0x10]
        mov ecx, dword ptr [eax + 0x4]
        mov edx, dword ptr [eax]
        fstp qword ptr [esp + 0x8]
        fld qword ptr [eax + 0x8]
        fstp qword ptr [esp]
        push ecx
        push edx
        lea eax, [esp + 0x20]
        push 0xb5f50c
        push eax
        call esi
        mov esi, dword ptr [esp + 0x3dc]
        mov edi, dword ptr [esp + 0x3d8]
        lea edx, [esp + 0x28]
        lea ecx, [esi - 0x1]
        push ecx
        push edx
        push edi
        call dword ptr [mem_009252D0]
        add esp, 0x2c
        mov byte ptr [edi + esi - 0x1], 0x0
        mov al, 0x1
        pop edi
        pop esi
        add esp, 0x3ac
        ret 0xc
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

        mov eax, dword ptr [esp + 0x4]
        xor ecx, ecx
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 0x8], ecx
        mov dword ptr [eax + 0x10], ecx
        mov dword ptr [eax + 0x4], ecx
        mov dword ptr [eax + 0xc], ecx
        mov dword ptr [eax + 0x14], ecx
        mov al, 0x1
        ret 0x4
        nop
        nop
        nop
        nop

        mov eax, dword ptr [esp + 0x4]
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x00
        je L_713357
        dec eax
        je L_71334F
        dec eax
        je L_713347
        mov eax, 0xaac03c
        ret 0x4
    L_713347:
        mov eax, 0xaac19c
        ret 0x4
    L_71334F:
        mov eax, 0xaac198
        ret 0x4
    L_713357:
        mov eax, 0xaac194
        ret 0x4
    }
}

// [0x00718100] sub_00718100 (400 bytes)
extern "C" void ext_006D7C80();
extern "C" void ext_0070E3D0();
extern "C" void ext_00717DE0();
extern "C" void ext_00717EA0();
extern "C" void ext_00717EC0();
extern "C" void ext_00718010();
extern "C" void ext_00718020();
extern "C" void ext_00718030();
extern "C" void ext_00718060();
extern "C" void ext_00718090();
extern "C" void ext_007180A0();
extern "C" void ext_007180B0();
extern "C" void ext_007180C0();
extern "C" void ext_007180D0();
extern "C" void ext_007180E0();
extern "C" void ext_007180F0();
extern "C" int mem_00925284;
extern "C" int mem_00B5FCA8;
extern "C" int mem_00B5FCAC;
extern "C" int mem_00B5FCA0;
extern "C" __declspec(naked) void __fastcall fn_00718100(void* self, int edx_unused, void* a1) {
    __asm {
        push ebx
        push ebp
        push esi
        push edi
        mov ebp, ecx
        call ext_00717DE0
        mov ebx, dword ptr [esp + 0x14]
        mov ecx, ebx
        call ext_007180D0
        push eax
        mov ecx, ebp
        call ext_007180C0
        mov ecx, ebx
        call ext_007180F0
        push eax
        mov ecx, ebp
        call ext_007180E0
        mov eax, dword ptr [ebx + 0x1d8]
        mov ecx, ebp
        push eax
        call ext_00718090
        mov ecx, dword ptr [ebx + 0x1ac]
        mov edx, dword ptr [ebx + 0x1a8]
        push ecx
        push edx
        mov ecx, ebp
        call ext_00717EA0
        mov eax, dword ptr [ebx + 0x1bc]
        mov ecx, dword ptr [ebx + 0x1b8]
        push eax
        push ecx
        mov ecx, ebp
        call ext_006D7C80
        mov edx, dword ptr [ebx + 0x1c4]
        mov eax, dword ptr [ebx + 0x1b4]
        mov ecx, dword ptr [ebx + 0x1c0]
        push edx
        mov edx, dword ptr [ebx + 0x1b0]
        push eax
        push ecx
        push edx
        mov ecx, ebp
        call ext_00717EC0
        mov ecx, ebx
        call ext_00718030
        mov edi, eax
        mov ecx, ebx
        shl edi, 0x3
        call ext_00718010
        mov dword ptr [esp + 0x14], edi
        mov edi, dword ptr [ebp + 0x1c8]
        mov esi, eax
        mov eax, dword ptr [esp + 0x14]
        mov ecx, eax
        mov edx, ecx
        shr ecx, 0x2
        rep movsd
        mov ecx, edx
        and ecx, 0x3
        rep movsb
        mov ecx, ebx
        call ext_00718060
        mov edi, eax
        mov ecx, ebx
        shl edi, 0x3
        call ext_00718020
        mov dword ptr [esp + 0x14], edi
        mov edi, dword ptr [ebp + 0x1cc]
        mov esi, eax
        mov eax, dword ptr [esp + 0x14]
        mov ecx, eax
        mov edx, ecx
        shr ecx, 0x2
        rep movsd
        mov ecx, edx
        and ecx, 0x3
        rep movsb
        mov eax, dword ptr [ebx + 0x1b0]
        mov ecx, ebx
        mov dword ptr [esp + 0x14], eax
        call ext_007180A0
        mov edi, dword ptr [ebp + 0x1d0]
        mov ecx, dword ptr [esp + 0x14]
        mov esi, eax
        rep movsd
        mov ecx, dword ptr [ebx + 0x1b4]
        mov dword ptr [esp + 0x14], ecx
        mov ecx, ebx
        call ext_007180B0
        mov edi, dword ptr [ebp + 0x1d4]
        mov ecx, dword ptr [esp + 0x14]
        mov esi, eax
        push ebx
        rep movsd
        mov ecx, ebp
        call ext_0070E3D0
        pop edi
        mov eax, ebp
        pop esi
        pop ebp
        pop ebx
        ret 4
        __asm _emit 0x90 __asm _emit 0x90 __asm _emit 0x90 // nop x3
        __asm _emit 0xE9 __asm _emit 0x0B __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // jmp 0x718250
        __asm _emit 0x90 __asm _emit 0x90 __asm _emit 0x90 __asm _emit 0x90 __asm _emit 0x90 // nop x11
        __asm _emit 0x90 __asm _emit 0x90 __asm _emit 0x90 __asm _emit 0x90 __asm _emit 0x90 __asm _emit 0x90
        mov eax, dword ptr [mem_00925284]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [mem_00B5FCA8], ecx
        mov dword ptr [mem_00B5FCAC], edx
        ret
        __asm _emit 0x90 __asm _emit 0x90 __asm _emit 0x90 __asm _emit 0x90 __asm _emit 0x90 // nop x9
        __asm _emit 0x90 __asm _emit 0x90 __asm _emit 0x90 __asm _emit 0x90
        __asm _emit 0xE9 __asm _emit 0x0B __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // jmp 0x718280
        __asm _emit 0x90 __asm _emit 0x90 __asm _emit 0x90 __asm _emit 0x90 __asm _emit 0x90 // nop x11
        __asm _emit 0x90 __asm _emit 0x90 __asm _emit 0x90 __asm _emit 0x90 __asm _emit 0x90 __asm _emit 0x90
        mov eax, dword ptr [mem_00925284]
        fld qword ptr [eax]
        fchs
        fstp qword ptr [mem_00B5FCA0]
        ret
    }
}

// [0x0071DEB0] sub_0071DEB0 (432 bytes)
// The 432-byte range holds several small routines separated by nop padding: fld [100.0]; ret (+0x00),
// a this-based loop calling sub_006D2170 (+0x10), a ret-4 stub calling sub_006B9D80 (+0x60),
// an SEH-guarded routine (+0x90), and two global-copy/negate tails (+0x170, +0x1A0).
// Written as one naked body so the padding and adjacent blocks are reproduced byte-for-byte.
extern "C" void ext_006A5C5C();
extern "C" void ext_006B9D70();
extern "C" void ext_006B9D80();
extern "C" void ext_006D2160();
extern "C" void ext_006D2170();
extern "C" void ext_006D2250();
extern "C" void ext_006E72A0();
extern "C" void ext_006E72D0();
extern "C" int mem_009334D8;
extern "C" int mem_00925284;
extern "C" int mem_00B5FE40;
extern "C" int mem_00B5FE44;
extern "C" int mem_00B5FE38;
extern "C" __declspec(naked) void __fastcall fn_0071DEB0(void* self) {
    __asm {
        fld qword ptr [mem_009334D8]
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
        push ebx
        mov ebx, ecx
        push ebp
        push esi
        mov eax, dword ptr [ebx + 0x10]
        xor esi, esi
        mov ebp, dword ptr [eax + 0xc0]
        test ebp, ebp
        jle ret_a_done
        push edi
        mov edi, dword ptr [esp + 0x14]
loop_a:
        mov ecx, dword ptr [ebx + 0x10]
        mov edx, dword ptr [ecx + 0xd0]
        lea ecx, [esp + 0x14]
        push ecx
        mov ecx, edi
        mov eax, dword ptr [edx + esi*4]
        mov edx, dword ptr [edi]
        push edx
        mov dword ptr [esp + 0x1c], eax
        call ext_006D2170
        inc esi
        cmp esi, ebp
        jl loop_a
        pop edi
ret_a_done:
        pop esi
        pop ebp
        pop ebx
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
        push ecx
        push esi
        mov esi, dword ptr [esp + 0xc]
        push 0xaa8cc4
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
        push -0x1
        push 0x8bbd97
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
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
        push 0xaa8cc4
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
        mov dword ptr [esp + 0x10], 0x993ce0
        mov eax, dword ptr [esp + 0x14]
        xor edi, edi
        test eax, eax
        mov dword ptr [esp + 0x34], 0x2
        jle c_after_loop
c_loop:
        mov ecx, dword ptr [esp + 0x24]
        mov esi, dword ptr [ecx + edi*4]
        test esi, esi
        je c_skip_call
        mov ecx, esi
        call ext_006B9D70
        push esi
        call ext_006A5C5C
        add esp, 0x4
c_skip_call:
        mov eax, dword ptr [esp + 0x14]
        inc edi
        cmp edi, eax
        jl c_loop
c_after_loop:
        lea ecx, [esp + 0x14]
        call ext_006D2250
        lea ecx, [esp + 0x14]
        mov byte ptr [esp + 0x34], 0x0
        call ext_006D2160
        mov ecx, dword ptr [esp + 0x2c]
        pop edi
        mov eax, ebp
        pop esi
        pop ebp
        mov dword ptr fs:[0], ecx
        add esp, 0x2c
        ret 0x4
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
        mov dword ptr [mem_00B5FE40], ecx
        mov dword ptr [mem_00B5FE44], edx
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
        fstp qword ptr [mem_00B5FE38]
        ret
    }
}

extern "C" void ext_00732CB0();
extern "C" void ext_006C9360();
extern "C" void ext_006CA0E0();
extern "C" void ext_006CA2D0();
extern "C" void ext_006CD330();
extern "C" void ext_006DDC90();
extern "C" void ext_006DEED0();
extern "C" void ext_006DE5F0();
extern "C" void ext_006B9D10();
extern "C" void ext_006B9D20();
extern "C" int mem_00AAC12C; /* u32 0x00B5F550 */
extern "C" int mem_00AAC134; /* u32 0x00B5F840 */
extern "C" int mem_00AAC138; /* u32 0x00B5F7F8 */

// [0x00715790] sub_00715790 (528 bytes)
extern "C" __declspec(naked) void __fastcall fn_00715790(void* self, int edx_unused, int a1) {
    __asm {
        sub esp, 0xc
        push ebx
        push esi
        mov esi, dword ptr [esp + 0x18]
        push edi
        mov edi, ecx
        push esi
        mov dword ptr [esp + 0x10], 0x3f400000
        mov dword ptr [esp + 0x14], 0
        mov dword ptr [esp + 0x18], 0
        call ext_00732CB0
        mov ecx, esi
        call ext_006C9360
        mov edi, dword ptr [edi + 0xc]
        mov esi, eax
        cmp edi, 1
        jne short L_case2
        mov eax, dword ptr [mem_00AAC12C]
        push 0
        push 0
        push eax
        push 0AAC2BCh
        jmp short L_join1
L_case2:
        cmp edi, 2
        jne L_end
        mov eax, dword ptr [mem_00AAC134]
        push 0
        push 1
        push eax
        push 0AAC2C8h
        call ext_006DDC90
        add esp, 0x10
        mov ebx, eax
        call ext_006CA0E0
        mov edi, eax
        push 0
        push edi
        mov ecx, ebx
        call ext_006DEED0
        push 0
        mov ecx, edi
        call ext_006CD330
        lea ecx, [esp + 0xc]
        push ecx
        mov ecx, edi
        call ext_006CA2D0
        mov edx, dword ptr [esi]
        push ebx
        mov ecx, esi
        call dword ptr [edx + 8]
        mov eax, dword ptr [mem_00AAC138]
        push 0
        push 1
        push eax
        push 0AAC2E0h
L_join1:
        call ext_006DDC90
        add esp, 0x10
        mov ebx, eax
        call ext_006CA0E0
        mov edi, eax
        push 0
        push edi
        mov ecx, ebx
        call ext_006DEED0
        push 0
        mov ecx, edi
        call ext_006CD330
        lea ecx, [esp + 0xc]
        push ecx
        mov ecx, edi
        call ext_006CA2D0
        mov edx, dword ptr [esi]
        push ebx
        mov ecx, esi
        call dword ptr [edx + 8]
L_end:
        pop edi
        pop esi
        pop ebx
        add esp, 0xc
        ret 4
        nop
        nop
        nop
        nop
L_part2:
        push ebx
        mov ebx, dword ptr [esp + 0x8]
        push esi
        push edi
        mov edi, ecx
        mov ecx, ebx
        call ext_006C9360
        mov esi, eax
        mov eax, dword ptr [edi + 0xc]
        cmp eax, 1
        jne short L_p2_case2
        mov ecx, dword ptr [mem_00AAC12C]
        mov eax, dword ptr [esi]
        push ecx
        mov ecx, esi
        call dword ptr [eax + 0x20]
        test eax, eax
        je short L_p2_end
        jmp short L_p2_call
L_p2_case2:
        cmp eax, 2
        jne short L_p2_end
        mov eax, dword ptr [mem_00AAC134]
        mov edx, dword ptr [esi]
        push eax
        mov ecx, esi
        call dword ptr [edx + 0x20]
        test eax, eax
        je short L_p2_skip
        push eax
        mov ecx, esi
        call ext_006DE5F0
L_p2_skip:
        mov eax, dword ptr [mem_00AAC138]
        mov edx, dword ptr [esi]
        push eax
        mov ecx, esi
        call dword ptr [edx + 0x20]
        test eax, eax
        je short L_p2_end
L_p2_call:
        push eax
        mov ecx, esi
        call ext_006DE5F0
L_p2_end:
        push ebx
        mov ecx, edi
        call ext_00732CB0
        pop edi
        pop esi
        pop ebx
        ret 4
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
L_part3:
        push -1
        push 0x8b93df
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x50
        push esi
        mov esi, ecx
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x4], 0
        call ext_006B9D10
        mov eax, dword ptr [esi + 0xc]
        mov dword ptr [esp + 0x5c], 1
        cmp eax, 3
        ja short L_p3_default
        jmp dword ptr [eax * 4 + 0x7159a0]
        push 0AAC374h
        jmp short L_p3_common
        push 0AAC368h
        jmp short L_p3_common
        push 0AAC35Ch
        jmp short L_p3_common
L_p3_default:
        push 0AAC354h
L_p3_common:
        lea ecx, [esp + 0xc]
        call ext_006B9EC0
        mov esi, dword ptr [esp + 0x64]
        lea eax, [esp + 0x8]
        push eax
        mov ecx, esi
        call ext_006B9D20
        mov dword ptr [esp + 0x4], 1
        lea ecx, [esp + 0x8]
        mov byte ptr [esp + 0x5c], 0
        call ext_006B9D70
        mov ecx, dword ptr [esp + 0x54]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x5c
        ret 4
    }
}
