// Decompiled translation unit: src/leaf/decompiled_710000.cpp
extern "C" void ext_00714580();
extern "C" void ext_0071E680();
extern "C" void ext_006DEEC0();
extern "C" void ext_00708080();
extern "C" void ext_00710F80();

extern "C" void ext_00710F80();
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
extern "C" void ext_00708000();
extern "C" void ext_006DC460();
extern "C" void ext_006C9580();
extern "C" void ext_006CD330();

extern "C" void ext_006DC460();
extern "C" void ext_006C9580();
extern "C" void ext_006CD330();
extern "C" __declspec(naked) void __fastcall fn_00711DA0(void* self, int edx_unused, int a1) {
    __asm {
        call ext_0071E680
        mov ecx, dword ptr [esp + 0x4]
        mov dword ptr [eax + 0x28], ecx
        ret 0x4
    }
}
extern "C" int mem_009251D8; /* "&|b" */
extern "C" int mem_00925208; /* u32 0x00627CA8 */

extern "C" int mem_00925208; /* u32 0x00627CA8 */
extern "C" void __stdcall ext_00711CF0(int a1, int a2);
extern "C" void __stdcall fn_00711A70(int a1) {
    ext_00711CF0(0x20, a1);
}
extern "C" void ext_006E7460();
extern "C" void ext_00711A80();

extern "C" void ext_00711A80();
extern "C" int ext_00711DB0();
extern "C" bool __fastcall fn_00712150(void* self) {
    return ext_00711DB0() == 0x11;
}
extern "C" void ext_006A6C87();
extern "C" void ext_006B9D80();
extern "C" void ext_006FA030();
extern "C" void ext_00710F10();

extern "C" void ext_00710F10();
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
extern "C" void ext_006FBC90();
extern "C" void ext_006FBCE0();

extern "C" void ext_006FBCE0();
extern "C" __declspec(naked) void __fastcall fn_00714940(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        add ecx, 0x28
        push eax
        call ext_007873F0
        ret 0x4
    }
}
extern "C" void ext_006FB650();
extern "C" void ext_006FB670();

extern "C" void ext_006FB670();
extern "C" __declspec(naked) void __fastcall fn_0071B010(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        add ecx, 0x10
        push eax
        call ext_007873F0
        ret 0x4
    }
}
extern "C" void ext_006FB690();
extern "C" void ext_006FB6B0();

extern "C" void ext_006FB6B0();
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

// [0x0071B110] sub_0071B110 (944 bytes)
extern "C" void __fastcall ext_0071B500(void* self, int edx, int, double, double);
extern "C" void __fastcall ext_0071B6F0(void* self, int edx, double);
extern "C" double __fastcall ext_0071B780(void* self, int edx, int, int, double);

extern "C" __declspec(naked) void __fastcall fn_0071B110(void* self, int edx, int mode) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        mov esi, ecx
        dec eax
        push edi
        cmp eax, 9
        mov ecx, dword ptr [esi + 0xc]
        mov edi, dword ptr [ecx + 0x380]
        ja L_default
        _emit 0xff
        _emit 0x24
        _emit 0x85
        _emit 0xc0
        _emit 0xb4
        _emit 0x71
        _emit 0x00

    L_case1:
        push 0x407e0000
        push 0
        push 0x40840000
        push 0
        push 2
        mov ecx, esi
        call ext_0071B500
        push 0x3ff55555
        push 0x55530aed
        push 0x1e0
        push 0x280
        mov ecx, esi
        call ext_0071B780
        sub esp, 8
        mov ecx, esi
        fstp qword ptr [esp]
        call ext_0071B6F0
        mov ecx, dword ptr [esi + 0xc]
        mov dword ptr [ecx + 0x490], 2
    L_check_edi:
        mov eax, edi
        dec eax
        je L_edi_1
        sub eax, 2
        je L_edi_3
        dec eax
        jne L_ret
        mov eax, dword ptr [esi + 0xc]
        pop edi
        fld qword ptr [eax + 0x518]
        fdiv qword ptr [eax + 0x5a0]
        fstp qword ptr [eax + 0x518]
        mov ecx, dword ptr [esi + 0xc]
        pop esi
        mov dword ptr [ecx + 0x380], 4
        ret 4

    L_case2:
        push 0x407e6000
        push 0
        push 0x40868000
        push 0
        push 2
        mov ecx, esi
        call ext_0071B500
        push 0x3ff55555
        push 0x55530aed
        push 0x1e6
        push 0x2d0
        mov ecx, esi
        call ext_0071B780
        sub esp, 8
        mov ecx, esi
        fstp qword ptr [esp]
        call ext_0071B6F0
        mov edx, dword ptr [esi + 0xc]
        mov dword ptr [edx + 0x490], 1
        jmp L_check_edi

    L_case3:
        push 0x407e6000
        push 0
        push 0x4081d000
        push 0
        push 2
        mov ecx, esi
        call ext_0071B500
        push 0x3ff55555
        push 0x55530aed
        push 0x1e6
        push 0x23a
        mov ecx, esi
        call ext_0071B780
        sub esp, 8
        mov ecx, esi
        fstp qword ptr [esp]
        call ext_0071B6F0
        mov eax, dword ptr [esi + 0xc]
        mov dword ptr [eax + 0x490], 3
        jmp L_check_edi

    L_case4:
        push 0x40820000
        push 0
        push 0x40868000
        push 0
        push 2
        mov ecx, esi
        call ext_0071B500
        push 0x3ff55555
        push 0x55530aed
        push 0x240
        push 0x2d0
        mov ecx, esi
        call ext_0071B780
        sub esp, 8
        mov ecx, esi
        fstp qword ptr [esp]
        call ext_0071B6F0
        mov ecx, dword ptr [esi + 0xc]
        mov dword ptr [ecx + 0x490], 4
        jmp L_check_edi

    L_case5:
        push 0x4090e000
        push 0
        push 0x409e0000
        push 0
        push 2
        mov ecx, esi
        call ext_0071B500
        push 0x3ffc71c7
        push 0x1c6c6ed4
        push 0x438
        push 0x780
        mov ecx, esi
        call ext_0071B780
        sub esp, 8
        mov ecx, esi
        fstp qword ptr [esp]
        call ext_0071B6F0
        mov edx, dword ptr [esi + 0xc]
        mov dword ptr [edx + 0x490], 5
        jmp L_check_edi

    L_case6:
        push 0x407e0000
        push 0
        push 0x40840000
        push 0
        push 2
        mov ecx, esi
        call ext_0071B500
        push 0x3ff55555
        push 0x55530aed
        push 0x1e0
        push 0x280
        mov ecx, esi
        call ext_0071B780
        sub esp, 8
        mov ecx, esi
        fstp qword ptr [esp]
        call ext_0071B6F0
        mov eax, dword ptr [esi + 0xc]
        mov dword ptr [eax + 0x490], 6
        jmp L_check_edi

    L_case7:
        push 0x40690000
        push 0
        push 0x40740000
        push 0
        push 2
        mov ecx, esi
        call ext_0071B500
        push 0x3ff55555
        push 0x55530aed
        push 0xc8
        push 0x140
        mov ecx, esi
        call ext_0071B780
        sub esp, 8
        mov ecx, esi
        fstp qword ptr [esp]
        call ext_0071B6F0
        mov ecx, dword ptr [esi + 0xc]
        mov dword ptr [ecx + 0x490], 7
        jmp L_check_edi

    L_case8:
        push 0x406e0000
        push 0
        push 0x40740000
        push 0
        push 2
        mov ecx, esi
        call ext_0071B500
        push 0x3ff55555
        push 0x55530aed
        push 0xf0
        push 0x140
        mov ecx, esi
        call ext_0071B780
        sub esp, 8
        mov ecx, esi
        fstp qword ptr [esp]
        call ext_0071B6F0
        mov edx, dword ptr [esi + 0xc]
        mov dword ptr [edx + 0x490], 8
        jmp L_check_edi

    L_case9:
        push 0x40900000
        push 0
        push 0x40940000
        push 0
        push 2
        mov ecx, esi
        call ext_0071B500
        push 0x3ff55555
        push 0x55530aed
        push 0x400
        push 0x500
        mov ecx, esi
        call ext_0071B780
        sub esp, 8
        mov ecx, esi
        fstp qword ptr [esp]
        call ext_0071B6F0
        mov eax, dword ptr [esi + 0xc]
        mov dword ptr [eax + 0x490], 0xa
        jmp L_check_edi

    L_default:
        pop edi
        mov dword ptr [ecx + 0x490], 0
        pop esi
        ret 4

    L_edi_3:
        mov eax, dword ptr [esi + 0xc]
        pop edi
        fld qword ptr [eax + 0x5a0]
        fdiv qword ptr [eax + 0x518]
        fstp qword ptr [eax + 0x5a0]
        mov edx, dword ptr [esi + 0xc]
        pop esi
        mov dword ptr [edx + 0x380], 3
        ret 4

    L_edi_1:
        mov eax, dword ptr [esi + 0xc]
        fld qword ptr [eax + 0x518]
        fdiv qword ptr [eax + 0x5a0]
        fmul qword ptr [eax + 0x628]
        fstp qword ptr [eax + 0x518]
        mov eax, dword ptr [esi + 0xc]
        mov dword ptr [eax + 0x5a0], 0
        mov dword ptr [eax + 0x5a4], 0x3ff00000
        mov ecx, dword ptr [esi + 0xc]
        mov dword ptr [ecx + 0x380], 1
    L_ret:
        pop edi
        pop esi
        ret 4
    }
}

// [0x00711BA0] sub_00711BA0 (16 bytes)
extern "C" void ext_0071E680();
extern "C" __declspec(naked) void __cdecl fn_00711BA0() {
    __asm {
        call ext_0071E680
        fld qword ptr [eax + 0x18]
        ret
    }
}

// [0x00711BB0] sub_00711BB0 (16 bytes)
extern "C" __declspec(naked) void __cdecl fn_00711BB0() {
    __asm {
        call ext_0071E680
        fld qword ptr [eax + 0x20]
        ret
    }
}

// [0x00711DB0] sub_00711DB0 (16 bytes)
extern "C" __declspec(naked) void __cdecl fn_00711DB0() {
    __asm {
        call ext_0071E680
        mov	eax, dword ptr [eax + 0x28]
        ret
    }
}

// [0x00711FD0] sub_00711FD0 (16 bytes)
extern "C" void ext_0071E680();
extern "C" __declspec(naked) void __cdecl fn_00711FD0() {
    __asm {
        call ext_0071E680
        mov	eax, dword ptr [eax + 0x8]
        ret
    }
}

// [0x00712000] sub_00712000 (16 bytes)
extern "C" void ext_0071E680();
extern "C" __declspec(naked) void __cdecl fn_00712000() {
    __asm {
        call ext_0071E680
        mov	eax, dword ptr [eax + 0x4]
        ret
    }
}

// [0x00712240] sub_00712240 (16 bytes)
extern "C" int mem_00AABF1C;

// [0x00712240]
extern "C" __declspec(naked) int __cdecl fn_00712240() {
    __asm {
        call ext_00711DB0
        mov eax, dword ptr [eax*4 + mem_00AABF1C]
        ret
    }
}

// [0x00711A40] sub_00711A40 (16 bytes)
extern "C" void ext_00711A20();
extern "C" __declspec(naked) void __cdecl fn_00711A40() {
    __asm {
        push 0x8
        call ext_00711A20
        ret
    }
}

// [0x00711A50] sub_00711A50 (16 bytes)
extern "C" __declspec(naked) void __cdecl fn_00711A50() {
    __asm {
        push 0x2
        call ext_00711A20
        ret
    }
}

// [0x00711A60] sub_00711A60 (16 bytes)
extern "C" __declspec(naked) void __cdecl fn_00711A60() {
    __asm {
        push 0x1
        call ext_00711A20
        ret
    }
}

// [0x00711A80] sub_00711A80 (16 bytes)
extern "C" __declspec(naked) void __cdecl fn_00711A80() {
    __asm {
        push 0x40
        call ext_00711A20
        ret
    }
}

// [0x00711A90] sub_00711A90 (16 bytes)
extern "C" void ext_00711D20();
extern "C" __declspec(naked) void __cdecl fn_00711A90() {
    __asm {
        push 0x8
        call ext_00711D20
        ret
    }
}

// [0x00714570] sub_00714570 (16 bytes)
extern "C" void ext_00714580();

extern "C" __declspec(naked) void* __fastcall fn_00714570(void* self) {
    __asm {
        push esi
        mov esi, ecx
        call ext_00714580
        mov eax, esi
        pop esi
        ret
    }
}

// [0x0071C630] sub_0071C630 (16 bytes)
extern "C" void ext_0071CE40();
extern "C" __declspec(naked) void __stdcall fn_0071C630(void* self) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push eax
        call ext_0071CE40
        ret 0x4
    }
}

// [0x00711BC0] sub_00711BC0 (32 bytes)
extern "C" int __fastcall fn_00711BC0(void* self) {
    __asm {
        mov ecx, dword ptr [ecx + 0x8]
        test ecx, ecx
        je short L_null
        mov eax, dword ptr [ecx]
        push 0
        push 0x98abd146
        call dword ptr [eax]
        ret
L_null:
        xor eax, eax
    }
}

// [0x00711D20] sub_00711D20 (32 bytes)
extern "C" __declspec(naked) int __fastcall fn_00711D20(void* self, int edx_unused, int mask) {
    __asm {
        mov eax, dword ptr [ecx + 0x78]
        mov ecx, dword ptr [esp + 0x4]
        and eax, ecx
        neg eax
        sbb eax, eax
        neg eax
        ret 0x4
    }
}

// [0x00714860] sub_00714860 (32 bytes)
extern "C" void __fastcall fn_00714860(void* self, int edx_unused, unsigned char a1, unsigned char a2, unsigned char a3) {
    unsigned char* p = (unsigned char*)self;
    p[0] = a1;
    p[1] = a2;
    p[2] = a3;
}

// [0x00714880] sub_00714880 (32 bytes)
extern "C" __declspec(naked) void __fastcall fn_00714880(void* self, int edx_unused, unsigned char* a1, unsigned char* a2, unsigned char* a3) {
    __asm {
        mov edx, dword ptr [esp + 0x4]
        mov al, byte ptr [ecx]
        mov byte ptr [edx], al
        mov edx, dword ptr [esp + 0x8]
        mov al, byte ptr [ecx + 0x1]
        mov byte ptr [edx], al
        mov al, byte ptr [ecx + 0x2]
        mov ecx, dword ptr [esp + 0xc]
        mov byte ptr [ecx], al
        ret 0xc
    }
}

// [0x007148A0] sub_007148A0 (32 bytes)
// Stores stack arg1 at self->[+0x3], stack arg3 at self->[+0x5] (via al), stack arg2 at self->[+0x4] (via dl); ret 0xc.
extern "C" __declspec(naked) void __fastcall fn_007148A0(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        mov al, byte ptr [esp + 0x4]
        mov dl, byte ptr [esp + 0x8]
        mov byte ptr [ecx + 0x3], al
        mov al, byte ptr [esp + 0xc]
        mov byte ptr [ecx + 0x4], dl
        mov byte ptr [ecx + 0x5], al
        ret 0xc
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

// [0x007148C0] sub_007148C0 (32 bytes)
extern "C" __declspec(naked) void __fastcall fn_007148C0(void* self, int edx_unused, unsigned char* a1, unsigned char* a2, unsigned char* a3) {
    __asm {
        mov edx, dword ptr [esp + 0x4]
        mov al, byte ptr [ecx + 0x3]
        mov byte ptr [edx], al
        mov edx, dword ptr [esp + 0x8]
        mov al, byte ptr [ecx + 0x4]
        mov byte ptr [edx], al
        mov al, byte ptr [ecx + 0x5]
        mov ecx, dword ptr [esp + 0xc]
        mov byte ptr [ecx], al
        ret 0xc
    }
}

// [0x00715580] sub_00715580 (32 bytes)
extern "C" void __fastcall fn_00715580(void* self, int edx_unused, int a1, int a2) {
    char* p = *(char**)((char*)self + 0x10);
    *(int*)(p + 0x1e8) = a1;
    *(int*)(p + 0x1ec) = a2;
}

// [0x00717EA0] sub_00717EA0 (32 bytes)
extern "C" void __fastcall fn_00717EA0(void* self, int edx_unused, int a1, int a2) {
    *(int*)((char*)self + 0x1a8) = a1;
    *(int*)((char*)self + 0x1ac) = a2;
}

// [0x0071C0E0] sub_0071C0E0 (32 bytes)
extern "C" __declspec(naked) void __fastcall fn_0071C0E0(void* self, int edx_unused, int a1, int a2) {
    __asm {
        mov eax, dword ptr [ecx + 0xc]
        mov ecx, dword ptr [esp + 0x4]
        mov edx, dword ptr [esp + 0x8]
        mov dword ptr [eax + 0x2f8], ecx
        mov dword ptr [eax + 0x2fc], edx
        ret 0x8
    }
}

// [0x0071C3B0] sub_0071C3B0 (32 bytes)
extern "C" __declspec(naked) void __fastcall fn_0071C3B0(void* self, int edx_unused, int a1, int a2) {
    __asm {
        mov eax, dword ptr [ecx + 0xc]
        mov ecx, dword ptr [esp + 0x4]
        mov edx, dword ptr [esp + 0x8]
        mov dword ptr [eax + 0x1520], ecx
        mov dword ptr [eax + 0x1524], edx
        ret 0x8
    }
}

// [0x0071C480] sub_0071C480 (32 bytes)
extern "C" __declspec(naked) void __fastcall fn_0071C480(void* self, int edx_unused, int a1, int a2) {
    __asm {
        mov eax, dword ptr [ecx + 0xc]
        mov ecx, dword ptr [esp + 0x4]
        mov edx, dword ptr [esp + 0x8]
        mov dword ptr [eax + 0xfd0], ecx
        mov dword ptr [eax + 0xfd4], edx
        ret 0x8
    }
}

// [0x0071C8A0] sub_0071C8A0 (32 bytes)
extern "C" __declspec(naked) int __fastcall fn_0071C8A0(void* self) {
    __asm {
        mov eax, dword ptr [ecx + 0xc]
        xor ecx, ecx
        mov dl, byte ptr [eax + 0x18d8]
        test dl, dl
        sete cl
        mov eax, ecx
        ret
    }
}

// [0x0071C8E0] sub_0071C8E0 (32 bytes)
extern "C" __declspec(naked) void __fastcall fn_0071C8E0(void* self, int edx_unused, int a1, int a2) {
    __asm {
        mov eax, dword ptr [ecx + 0xc]
        mov ecx, dword ptr [esp + 0x4]
        mov edx, dword ptr [esp + 0x8]
        mov dword ptr [eax + 0x1c08], ecx
        mov dword ptr [eax + 0x1c0c], edx
        ret 0x8
    }
}

// [0x0071C9B0] sub_0071C9B0 (32 bytes)
extern "C" __declspec(naked) void __fastcall fn_0071C9B0(void* self, int edx_unused, int a1, int a2) {
    __asm {
        mov eax, dword ptr [ecx + 0xc]
        mov ecx, dword ptr [esp + 0x4]
        mov edx, dword ptr [esp + 0x8]
        mov dword ptr [eax + 0x1af8], ecx
        mov dword ptr [eax + 0x1afc], edx
        ret 0x8
    }
}

// [0x0071C9E0] sub_0071C9E0 (32 bytes)
extern "C" __declspec(naked) void __fastcall fn_0071C9E0(void* self, int edx_unused, int a1, int a2) {
    __asm {
        mov eax, dword ptr [ecx + 0xc]
        mov ecx, dword ptr [esp + 0x4]
        mov edx, dword ptr [esp + 0x8]
        mov dword ptr [eax + 0x1a70], ecx
        mov dword ptr [eax + 0x1a74], edx
        ret 0x8
    }
}

// [0x0071F070] sub_0071F070 (32 bytes)
extern "C" __declspec(naked) char* __fastcall fn_0071F070(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        mov esi, ecx
        push eax
        mov edx, dword ptr [esi]
        mov dword ptr [esi + 0x4], eax
        call dword ptr [edx + 0x8]
        lea eax, [esi + 0x8]
        pop esi
        ret 0x4
    }
}

// [0x00711A20] sub_00711A20 (32 bytes)
extern "C" void ext_0071E680();
extern "C" __declspec(naked) void __fastcall fn_00711A20(void* self, int edx_unused, int a1) {
    __asm {
        call ext_0071E680
        mov ecx, dword ptr [esp + 0x4]
        mov edx, dword ptr [eax]
        __asm _emit 0x85
        __asm _emit 0xd1
        setne al
        ret 0x4
    }
}

// [0x0071DE60] sub_0071DE60 (32 bytes)
extern "C" void ext_0071DEB0();
extern "C" __declspec(naked) void __fastcall fn_0071DE60(void* self) {
    __asm {
        push esi
        mov esi, ecx
        call ext_0071DEB0
        mov eax, dword ptr [esi + 0x10]
        fstp qword ptr [eax + 0x160]
        mov byte ptr [esi + 0xc], 0
        pop esi
        ret
    }
}

// [0x0071C330] sub_0071C330 (32 bytes)
extern "C" __declspec(naked) void __fastcall fn_0071C330(void* self) {
    __asm {
        push esi
        lea esi, [ecx + 0x50]
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

// [0x00714990] sub_00714990 (32 bytes)
extern "C" void __stdcall ext_006C78B0(int arg);

extern "C" __declspec(naked) void __fastcall fn_00714990(void* self, int edx_unused, int arg) {
    __asm {
        mov eax, dword ptr [esp + 4]
        mov byte ptr [ecx + 0xdd], al
        mov ecx, dword ptr [ecx + 0xd8]
        test ecx, ecx
        je short done_00714990
        push eax
        call ext_006C78B0
    done_00714990:
        ret 4
    }
}

extern "C" void ext_006C3210();

// [0x0071AF70] sub_0071AF70 (32 bytes)
extern "C" __declspec(naked) void __fastcall fn_0071AF70(void* self, int edx_unused, int a1) {
    __asm {
        mov ecx, dword ptr [ecx + 0x4]
        test ecx, ecx
        je done
        mov eax, dword ptr [esp + 0x4]
        push eax
        call ext_006C3210
done:
        ret 0x4
    }
}

// [0x0071B070] sub_0071B070 (32 bytes)
extern "C" void ext_0071CDA0();
extern "C" __declspec(naked) void __stdcall fn_0071B070(int a1, int a2) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        mov edx, dword ptr [esp + 0x4]
        push eax
        push edx
        call ext_0071CDA0
        ret 0x8
    }
}

// [0x0071B090] sub_0071B090 (32 bytes)
extern "C" __declspec(naked) void __fastcall fn_0071B090(void* self) {
    __asm {
        mov ecx, dword ptr [ecx + 0x0c]
        push 0xaa8d5c
        call ext_00708000
        mov edx, dword ptr [eax]
        mov ecx, eax
        jmp dword ptr [edx + 0x7c]
    }
}

// [0x0071B0B0] sub_0071B0B0 (32 bytes)
extern "C" void ext_0071CDF0();
extern "C" __declspec(naked) void __stdcall fn_0071B0B0(int a1, int a2) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        mov edx, dword ptr [esp + 0x4]
        push eax
        push edx
        call ext_0071CDF0
        ret 0x8
    }
}

// [0x0071B0D0] sub_0071B0D0 (32 bytes)
extern "C" void ext_00708000();

extern "C" __declspec(naked) void __fastcall fn_0071B0D0(void* self) {
    __asm {
        mov ecx, dword ptr [ecx + 0x0c]
        push 0xaa8d64
        call ext_00708000
        mov edx, dword ptr [eax]
        mov ecx, eax
        jmp dword ptr [edx + 0x7c]
    }
}

// [0x0071C2E0] sub_0071C2E0 (32 bytes)
extern "C" void ext_006B9EC0();
extern "C" __declspec(naked) void __fastcall fn_0071C2E0(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        add ecx, 0x9c
        push eax
        call ext_006B9EC0
        ret 0x4
    }
}

// [0x0071C6E0] sub_0071C6E0 (32 bytes)
extern "C" void ext_0077FD70();

extern "C" __declspec(naked) void __fastcall fn_0071C6E0(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        add ecx, 0xf0
        push eax
        call ext_0077FD70
        ret 0x4
    }
}

// [0x00711FE0] sub_00711FE0 (32 bytes)
extern "C" void ext_007110C0();
extern "C" void ext_0071E680();
extern "C" __declspec(naked) void __fastcall fn_00711FE0(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push eax
        call ext_0071E680
        mov ecx, eax
        call ext_007110C0
        ret 0x4
    }
}

// [0x00712F40] sub_00712F40 (32 bytes)
extern "C" void ext_006A5C5C();
extern "C" void ext_00712F60();

extern "C" __declspec(naked) void* __fastcall fn_00712F40(void* self, int edx_unused, int flag) {
    __asm {
        push esi
        mov esi, ecx
        call ext_00712F60
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

// [0x00710F50] sub_00710F50 (48 bytes)
extern "C" int mem_009251D8;
extern "C" __declspec(naked) void __fastcall fn_00710F50(void* self) {
    __asm {
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr [mem_009251D8]
        test byte ptr [esi], 0x20
        je short L_free2
        mov eax, dword ptr [esi + 4]
        test eax, eax
        je short L_free2
        push eax
        call edi
        add esp, 4
    L_free2:
        mov eax, dword ptr [esi + 8]
        push eax
        call edi
        add esp, 4
        pop edi
        pop esi
        ret
    }
}

// [0x00710F80] sub_00710F80 (48 bytes)
extern "C" __declspec(naked) void __fastcall fn_00710F80(void* self, int edx_unused, int a1, int a2) {
    __asm {
        mov al, byte ptr [esp + 0x8]
        test al, al
        je short L_clear_00710F80
        mov eax, dword ptr [esp + 0x4]
        mov edx, dword ptr [ecx]
        or edx, eax
        mov dword ptr [ecx], edx
        ret 0x8
    L_clear_00710F80:
        mov edx, dword ptr [esp + 0x4]
        mov eax, dword ptr [ecx]
        not edx
        and eax, edx
        mov dword ptr [ecx], eax
        ret 0x8
    }
}

// [0x00711CF0] sub_00711CF0 (48 bytes)
extern "C" __declspec(naked) void __fastcall fn_00711CF0(void* self, int edx_unused, unsigned int mask, unsigned char set) {
    __asm {
        mov al, byte ptr [esp + 8]
        test al, al
        je clear_bits
        mov eax, dword ptr [esp + 4]
        mov edx, dword ptr [ecx + 0x78]
        or edx, eax
        mov dword ptr [ecx + 0x78], edx
        ret 8
clear_bits:
        mov edx, dword ptr [esp + 4]
        mov eax, dword ptr [ecx + 0x78]
        not edx
        and eax, edx
        mov dword ptr [ecx + 0x78], eax
        ret 8
    }
}

// [0x007148E0] sub_007148E0 (48 bytes)
extern "C" __declspec(naked) void __fastcall fn_007148E0(void* self) {
    __asm {
        cmp byte ptr [ecx], 0
        jne ret1
        mov al, byte ptr [ecx + 1]
        test al, al
        jne ret1
        mov al, byte ptr [ecx + 2]
        test al, al
        jne ret1
        mov al, byte ptr [ecx + 3]
        test al, al
        jne ret1
        mov al, byte ptr [ecx + 4]
        test al, al
        jne ret1
        mov al, byte ptr [ecx + 5]
        test al, al
        jne ret1
        xor al, al
        ret
ret1:
        mov al, 1
        ret
    }
}

// [0x00715520] sub_00715520 (48 bytes)
extern "C" __declspec(naked) void __fastcall fn_00715520(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        mov esi, ecx
        push edi
        cmp eax, dword ptr [esi + 0xc]
        je done
        mov edi, dword ptr [esi + 0x4]
        mov dword ptr [esi + 0xc], eax
        test edi, edi
        je done
        mov eax, dword ptr [esi]
        mov ecx, esi
        call dword ptr [eax + 0xc]
        mov edx, dword ptr [esi]
        push edi
        mov ecx, esi
        call dword ptr [edx + 0x8]
done:
        pop edi
        pop esi
        ret 0x4
    }
}

// [0x00715BE0] sub_00715BE0 (48 bytes)
extern "C" __declspec(naked) void __cdecl fn_00715BE0(void* dst, const void* src) {
    __asm {
        mov ecx, dword ptr [esp + 0x8]
        mov eax, dword ptr [esp + 0x4]
        mov edx, dword ptr [ecx]
        mov dword ptr [eax], edx
        mov edx, dword ptr [ecx + 0x4]
        mov dword ptr [eax + 0x4], edx
        mov edx, dword ptr [ecx + 0x8]
        mov dword ptr [eax + 0x8], edx
        mov edx, dword ptr [ecx + 0xc]
        mov dword ptr [eax + 0xc], edx
        mov edx, dword ptr [ecx + 0x10]
        mov dword ptr [eax + 0x10], edx
        mov ecx, dword ptr [ecx + 0x14]
        mov dword ptr [eax + 0x14], ecx
        ret
    }
}

// [0x00718030] sub_00718030 (48 bytes)
extern "C" int __fastcall fn_00718030(void* self) {
    unsigned char* p = (unsigned char*)self;
    int edx = *(int*)(p + 0x1a8);
    int eax = *(int*)(p + 0x1b0) + edx;
    int ecx = *(int*)(p + 0x1c0);
    if (ecx == 0 || ecx == 1) {
        eax = eax + edx - 1;
    }
    return eax;
}

// [0x00718060] sub_00718060 (48 bytes)
// [0x00718060] sub_00718060 (48 bytes)
extern "C" int __fastcall fn_00718060(void* self) {
    unsigned char* p = (unsigned char*)self;
    int edx = *(int*)(p + 0x1ac);
    int eax = *(int*)(p + 0x1b4) + edx;
    int ecx = *(int*)(p + 0x1c4);
    if (ecx == 0 || ecx == 1) {
        eax = eax + edx - 1;
    }
    return eax;
}

// [0x0071C700] sub_0071C700 (48 bytes)
extern "C" __declspec(naked) void __fastcall fn_0071C700(void* self, int edx_unused, void* a1) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0x8]
        push esi
        push edi
        lea esi, [ecx + 0xf0]
        mov ecx, 0x8
        mov edi, eax
        rep movsd
        pop edi
        mov dword ptr [esp + 0x4], 0
        pop esi
        pop ecx
        ret 0x4
    }
}

// [0x0071C870] sub_0071C870 (48 bytes)
extern "C" __declspec(naked) void __fastcall fn_0071C870(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        test eax, eax
        jne short L_71C885
        mov eax, dword ptr [ecx + 0xc]
        mov byte ptr [eax + 0x18d8], 0x1
        ret 0x4
    L_71C885:
        cmp eax, 0x1
        jne short L_71C894
        mov ecx, dword ptr [ecx + 0xc]
        mov byte ptr [ecx + 0x18d8], 0x0
    L_71C894:
        ret 0x4
    }
}

// [0x00711D70] sub_00711D70 (48 bytes)
extern "C" void ext_0071E680();
extern "C" __declspec(naked) void __fastcall fn_00711D70(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push esi
        mov esi, ecx
        call ext_0071E680
        mov ecx, dword ptr [esp + 0x8]
        mov dword ptr [eax + 0x4], ecx
        mov ecx, esi
        call ext_0071E680
        mov edx, dword ptr [esp + 0xc]
        pop esi
        mov dword ptr [eax + 0x28], edx
        ret 0x8
    }
}

// [0x007156B0] sub_007156B0 (48 bytes)
extern "C" void ext_006C9600();
extern "C" void ext_006DC460();
extern "C" void ext_006C9F70();
extern "C" int mem_0092A278;

// [0x007156B0]
extern "C" __declspec(naked) void __fastcall fn_007156B0(void* self) {
    __asm {
        cmp dword ptr [ecx + 0xc], 2
        jne short fn_007156B0_fp
        mov ecx, dword ptr [ecx + 4]
        call ext_006DC460
        mov ecx, eax
        call ext_006C9600
        mov ecx, eax
        jmp ext_006C9F70
    fn_007156B0_fp:
        fld qword ptr [mem_0092A278]
        ret
    }
}

// [0x00715710] sub_00715710 (48 bytes)
extern "C" void ext_006C9610();
extern "C" void ext_006DC460();
extern "C" void ext_006C9F70();
extern "C" int mem_0092A278;
extern "C" __declspec(naked) void __fastcall fn_00715710(void* self) {
    __asm {
        cmp dword ptr [ecx + 0xc], 2
        jne short fn_00715710_fp
        mov ecx, dword ptr [ecx + 4]
        call ext_006DC460
        mov ecx, eax
        call ext_006C9610
        mov ecx, eax
        jmp ext_006C9F70
    fn_00715710_fp:
        fld qword ptr [mem_0092A278]
        ret
    }
}

// [0x007156E0] sub_007156E0 (48 bytes)
extern "C" void ext_006C9600();
extern "C" void ext_006CD330();
extern "C" void ext_006DC460();
extern "C" __declspec(naked) void __fastcall fn_007156E0(void* self) {
    __asm {
        cmp dword ptr [ecx + 0Ch], 2
        jne short L_RET_007156E0
        mov ecx, dword ptr [ecx + 4]
        call ext_006DC460
        fld qword ptr [esp + 4]
        push ecx
        mov ecx, eax
        fstp dword ptr [esp]
        call ext_006C9600
        mov ecx, eax
        call ext_006CD330
    L_RET_007156E0:
        ret 8
    }
}

// [0x00715740] sub_00715740 (48 bytes)
extern "C" void ext_006C9610();
extern "C" void ext_006CD330();
extern "C" void ext_006DC460();
extern "C" __declspec(naked) void __fastcall fn_00715740(void* self) {
    __asm {
        cmp dword ptr [ecx + 0Ch], 2
        jne short L_RET_00715740
        mov ecx, dword ptr [ecx + 4]
        call ext_006DC460
        fld qword ptr [esp + 4]
        push ecx
        mov ecx, eax
        fstp dword ptr [esp]
        call ext_006C9610
        mov ecx, eax
        call ext_006CD330
    L_RET_00715740:
        ret 8
    }
}

// [0x00713020] sub_00713020 (48 bytes)
extern "C" void ext_00712FC0();
extern "C" void ext_00715550();
extern "C" void ext_00782D90();
extern "C" int mem_00B5FA68;

extern "C" __declspec(naked) void __fastcall fn_00713020(void* self) {
    __asm {
        push ebx
        push esi
        push edi
        mov edi, dword ptr [esp + 0x10]
        mov ecx, edi
        call ext_00715550
        mov esi, eax
        push esi
        call ext_00712FC0
        mov ecx, dword ptr [mem_00B5FA68]
        add esp, 4
        mov ebx, eax
        push edi
        push esi
        call ext_00782D90
        pop edi
        mov eax, ebx
        pop esi
        pop ebx
        ret
    }
}

// [0x00710F10] sub_00710F10 (64 bytes)
extern "C" __declspec(naked) void __fastcall fn_00710F10(void* self) {
    __asm {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr [eax + 0x18], ecx
        mov dword ptr [eax + 0x20], ecx
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 0x10], ecx
        mov dword ptr [eax + 0x14], ecx
        mov dword ptr [eax + 0x2c], ecx
        mov dword ptr [eax + 0x4], 0xb5d2c0
        mov dword ptr [eax + 0x8], ecx
        mov dword ptr [eax + 0x28], ecx
        mov dword ptr [eax + 0xc], ecx
        mov word ptr [eax + 0x30], 0xffff
        mov dword ptr [eax + 0x1c], ecx
        mov dword ptr [eax + 0x24], 0x40590000
        ret
    }
}

// [0x00715670] sub_00715670 (64 bytes)
extern "C" void ext_006D2A30();

extern "C" __declspec(naked) void __fastcall fn_00715670(void* self, int edx_unused, void* a1) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 0x8]
        call ext_006D2A30
        mov ecx, dword ptr [esi + 0x10]
        mov edx, dword ptr [eax]
        add ecx, 0x398
        pop esi
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [ecx + 0x4], edx
        mov edx, dword ptr [eax + 0x8]
        mov dword ptr [ecx + 0x8], edx
        mov edx, dword ptr [eax + 0xc]
        mov dword ptr [ecx + 0xc], edx
        mov edx, dword ptr [eax + 0x10]
        mov dword ptr [ecx + 0x10], edx
        mov eax, dword ptr [eax + 0x14]
        mov dword ptr [ecx + 0x14], eax
        ret 0x4
    }
}

// [0x00712160] sub_00712160 (64 bytes)
extern "C" void ext_006FA5A0();
extern "C" void ext_006FC6E0();
extern "C" int mem_00B5F1F8;
extern "C" int mem_00B5E400;

extern "C" __declspec(naked) void __fastcall fn_00712160(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x34]
        and eax, 0x8
        cmp al, 0x8
        jne L_712171
        xor eax, eax
        pop esi
        ret
    L_712171:
        mov eax, dword ptr [mem_00B5F1F8]
        cmp eax, -1
        je L_712199
        cmp eax, dword ptr [mem_00B5E400]
        je L_712199
        push eax
        call ext_006FC6E0
        add esp, 4
        mov ecx, esi
        push eax
        call ext_006FA5A0
        mov eax, dword ptr [eax + 0x18]
        pop esi
        ret
    L_712199:
        mov eax, dword ptr [esi + 0x18]
        pop esi
        ret
    }
}

// [0x0071FC30] sub_0071FC30 (64 bytes)
extern "C" void ext_00784750();
extern "C" int mem_00B5FFC0;

extern "C" __declspec(naked) int __cdecl fn_0071FC30(int orig) {
    __asm {
        mov ecx, dword ptr [mem_00B5FFC0]
        push esi
        test ecx, ecx
        push edi
        je fn_0071FC30_none
        mov eax, dword ptr [ecx + 4]
        xor esi, esi
        test eax, eax
        jle fn_0071FC30_none
        mov edi, dword ptr [esp + 12]
    fn_0071FC30_loop:
        lea eax, [esp + 12]
        push eax
        push esi
        call ext_00784750
        cmp dword ptr [esp + 12], edi
        je fn_0071FC30_found
        mov ecx, dword ptr [mem_00B5FFC0]
        inc esi
        cmp esi, dword ptr [ecx + 4]
        jl fn_0071FC30_loop
    fn_0071FC30_none:
        xor eax, eax
    fn_0071FC30_found:
        pop edi
        pop esi
        ret
    }
}

// [0x0071C3E0] sub_0071C3E0 (80 bytes)
extern "C" __declspec(naked) void __fastcall fn_0071C3E0(void* self, int edx_unused, unsigned int flags) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        mov esi, dword ptr [ecx + 0ch]
        mov dl, al
        and dl, 1
        mov byte ptr [esi + 1278h], dl
        mov esi, dword ptr [ecx + 0ch]
        mov edx, eax
        _emit 0xd1
        _emit 0xea
        and dl, 1
        mov byte ptr [esi + 1388h], dl
        mov esi, dword ptr [ecx + 0ch]
        mov edx, eax
        shr edx, 2
        and dl, 1
        mov byte ptr [esi + 1410h], dl
        mov ecx, dword ptr [ecx + 0ch]
        shr eax, 3
        and al, 1
        pop esi
        mov byte ptr [ecx + 1300h], al
        ret 4
    }
}

// [0x0071C430] sub_0071C430 (80 bytes)
extern "C" __declspec(naked) int __fastcall fn_0071C430(void* self) {
    __asm {
        mov eax, dword ptr [ecx + 0xc]
        push ebx
        xor ecx, ecx
        mov bl, byte ptr [eax + 0x1300]
        test bl, bl
        mov bl, byte ptr [eax + 0x1410]
        setne cl
        shl ecx, 1
        xor edx, edx
        test bl, bl
        mov bl, byte ptr [eax + 0x1388]
        setne dl
        or ecx, edx
        xor edx, edx
        shl ecx, 1
        test bl, bl
        mov bl, byte ptr [eax + 0x1278]
        setne dl
        or ecx, edx
        xor edx, edx
        shl ecx, 1
        test bl, bl
        setne dl
        or ecx, edx
        pop ebx
        mov eax, ecx
        ret
    }
}

// [0x0071C250] sub_0071C250 (80 bytes)
extern "C" int mem_00993C98; /* double 0.008726646259971648 */
extern "C" int mem_00993828; /* double 0.5 */
extern "C" __declspec(naked) void __fastcall fn_0071C250(void* self) {
    __asm {
        mov eax, dword ptr [ecx + 0xc]
        cmp dword ptr [eax + 0x408], 2
        jne L_0071C250_other
        fld qword ptr [esp + 0xc]
        fmul qword ptr [mem_00996640]
        jmp L_0071C250_join
L_0071C250_other:
        fld qword ptr [esp + 0x4]
        fmul qword ptr [mem_00996640]
        fmul qword ptr [eax + 0xd28]
L_0071C250_join:
        fld qword ptr [esp + 0x14]
        fmul qword ptr [mem_00993C98]
        fptan
        fstp st(0)
        fdivp st(1), st
        fmul qword ptr [mem_00993828]
        ret 0x18
    }
}

// [0x007155B0] sub_007155B0 (80 bytes)
extern "C" void ext_006D80A0();

extern "C" __declspec(naked) void __fastcall fn_007155B0(void* self) {
    __asm {
        sub esp, 0x20
        fld qword ptr [esp + 0x24]
        fld qword ptr [esp + 0x2c]
        mov eax, dword ptr [ecx + 0x10]
        fstp qword ptr [esp + 0x8]
        fld qword ptr [esp + 0x34]
        mov ecx, dword ptr [esp + 0x8]
        mov edx, dword ptr [esp + 0xc]
        add eax, 0x270
        fstp qword ptr [esp + 0x10]
        mov dword ptr [eax + 0x8], ecx
        mov ecx, dword ptr [esp + 0x10]
        fstp qword ptr [eax]
        mov dword ptr [eax + 0xc], edx
        mov edx, dword ptr [esp + 0x14]
        mov dword ptr [eax + 0x10], ecx
        lea ecx, [esp + 0x24]
        mov dword ptr [eax + 0x14], edx
        call ext_006D80A0
        add esp, 0x20
        ret 0x20
    }
}

// [0x00711B50] sub_00711B50 (80 bytes)
extern "C" __declspec(naked) void __fastcall fn_00711B50(void* self) {
    __asm {
        push esi
        mov esi, ecx
        call ext_0071E680
        fld qword ptr [eax + 0x20]
        fcomp qword ptr [esp + 0x8]
        fnstsw ax
        test ah, 0x40
        jne short L_done_00711B50
        mov ecx, esi
        call ext_0071E680
        mov ecx, dword ptr [esp + 0x8]
        mov edx, dword ptr [esp + 0xc]
        mov dword ptr [eax + 0x20], ecx
        push 0
        push 0
        push 0
        mov dword ptr [eax + 0x24], edx
        mov eax, dword ptr [esi]
        push esi
        push 0x1f
        push 0
        mov ecx, esi
        call dword ptr [eax + 0x3c]
L_done_00711B50:
        mov al, 1
        pop esi
        ret 8
    }
}

// [0x00711B00] sub_00711B00 (80 bytes)
extern "C" __declspec(naked) void __fastcall fn_00711B00(void* self, int edx_unused, double a1) {
    __asm {
        push esi
        mov esi, ecx
        call ext_0071E680
        fld qword ptr [eax + 0x18]
        fcomp qword ptr [esp + 0x8]
        fnstsw ax
        test ah, 0x40
        jne done
        mov ecx, esi
        call ext_0071E680
        mov ecx, dword ptr [esp + 0x8]
        mov edx, dword ptr [esp + 0xc]
        mov dword ptr [eax + 0x18], ecx
        push 0
        push 0
        push 0
        mov dword ptr [eax + 0x1c], edx
        mov eax, dword ptr [esi]
        push esi
        push 0x1f
        push 0
        mov ecx, esi
        call dword ptr [eax + 0x3c]
    done:
        mov al, 0x1
        pop esi
        ret 0x8
    }
}

// [0x0071FD10] sub_0071FD10 (80 bytes)
extern "C" __declspec(naked) void __cdecl fn_0071FD10(void* self, double* out, double* a, double* b) {
    __asm {
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 0xc]
        push esi
        push edi
        mov ecx, ebp
        call ext_006DEEC0
        mov esi, dword ptr [esp + 0x20]
        mov ebx, dword ptr [esp + 0x1c]
        mov edi, dword ptr [esp + 0x18]
        test eax, eax
        je skip_first
        fld qword ptr [ebx]
        fadd qword ptr [esi]
        fstp qword ptr [edi]
skip_first:
        mov eax, dword ptr [ebp]
        mov ecx, ebp
        call dword ptr [eax + 0x14]
        test eax, eax
        jle done
        mov edx, ebx
        mov ecx, esi
        sub edx, esi
        sub edi, esi
loop_top:
        fld qword ptr [edx + ecx]
        fmul qword ptr [ecx]
        add ecx, 8
        dec eax
        fstp qword ptr [edi + ecx - 8]
        jne loop_top
done:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}

// [0x0071FCC0] sub_0071FCC0 (80 bytes)
extern "C" __declspec(naked) void __cdecl fn_0071FCC0(void* self, double* out, double* a, double* b) {
    __asm {
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 0xc]
        push esi
        push edi
        mov ecx, ebp
        call ext_006DEEC0
        mov esi, dword ptr [esp + 0x20]
        mov ebx, dword ptr [esp + 0x1c]
        mov edi, dword ptr [esp + 0x18]
        test eax, eax
        je skip_first
        fld qword ptr [ebx]
        fadd qword ptr [esi]
        fstp qword ptr [edi]
skip_first:
        mov eax, dword ptr [ebp]
        mov ecx, ebp
        call dword ptr [eax + 0x14]
        test eax, eax
        jle done
        mov edx, ebx
        mov ecx, esi
        sub edx, esi
        sub edi, esi
loop_top:
        fld qword ptr [edx + ecx]
        fadd qword ptr [ecx]
        add ecx, 8
        dec eax
        fstp qword ptr [edi + ecx - 8]
        jne loop_top
done:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}

// [0x0071FC70] sub_0071FC70 (80 bytes)
extern "C" int mem_00B5FFC0;
extern "C" void ext_00784750();

extern "C" __declspec(naked) void __fastcall fn_0071FC70(void* self) {
    __asm {
        mov ecx, dword ptr [mem_00B5FFC0]
        push esi
        test ecx, ecx
        push edi
        je L_fail
        mov edi, dword ptr [esp + 0x10]
        test edi, edi
        je L_fail
        mov eax, dword ptr [ecx + 4]
        xor esi, esi
        test eax, eax
        jle L_fail
L_loop:
        lea eax, [esp + 0x10]
        push eax
        push esi
        call ext_00784750
        cmp eax, edi
        je L_found
        mov ecx, dword ptr [mem_00B5FFC0]
        inc esi
        cmp esi, dword ptr [ecx + 4]
        jl L_loop
L_fail:
        pop edi
        xor al, al
        pop esi
        ret
L_found:
        mov ecx, dword ptr [esp + 0xc]
        mov edx, dword ptr [esp + 0x10]
        pop edi
        mov al, 1
        mov dword ptr [ecx], edx
        pop esi
        ret
    }
}

// [0x00710B20] sub_00710B20 (80 bytes)
extern "C" __declspec(naked) void __fastcall fn_00710B20(void* self) {
    __asm {
        mov eax, dword ptr [esp + 0x18]
        mov edx, dword ptr [esp + 0x14]
        push esi
        push eax
        mov eax, dword ptr [esp + 0x14]
        push edx
        mov edx, dword ptr [esp + 0x14]
        push 0
        push eax
        mov eax, dword ptr [esp + 0x18]
        push edx
        push eax
        call ext_00708080
        mov esi, eax
        test esi, esi
        je done
        mov al, byte ptr [esp + 0x14]
        test al, al
        je done
        push 1
        push 2
        mov ecx, esi
        call ext_0071E680
        mov ecx, eax
        call ext_00710F80
done:
        mov eax, esi
        pop esi
        ret 0x18
    }
}

// [0x0071CC60] sub_0071CC60 (80 bytes)
extern "C" void ext_00708000();
extern "C" void ext_006DC460();
extern "C" void ext_006C9530();
extern "C" void ext_006CD330();

extern "C" __declspec(naked) void __fastcall fn_0071CC60(void* self, int edx_unused, double a1) {
    __asm {
        push esi
        mov esi, ecx
        push 0xaa8d1c
        mov ecx, dword ptr [esi + 0xc]
        call ext_00708000
        mov ecx, dword ptr [esp + 0xc]
        mov edx, dword ptr [eax]
        push ecx
        mov ecx, dword ptr [esp + 0xc]
        push ecx
        mov ecx, eax
        call dword ptr [edx + 0x80]
        mov ecx, dword ptr [esi + 0x4]
        pop esi
        test ecx, ecx
        je done
        call ext_006DC460
        fld qword ptr [esp + 0x4]
        push ecx
        mov ecx, eax
        fstp dword ptr [esp]
        call ext_006C9530
        mov ecx, eax
        call ext_006CD330
done:
        ret 0x8
    }
}

// [0x0071CC10] sub_0071CC10 (80 bytes)
extern "C" void ext_00708000();
extern "C" void ext_006DC460();
extern "C" void ext_006C9520();
extern "C" void ext_006CD330();

extern "C" __declspec(naked) void __fastcall fn_0071CC10(void* self, int edx_unused, double a1) {
    __asm {
        push esi
        mov esi, ecx
        push 0xaa8d10
        mov ecx, dword ptr [esi + 0xc]
        call ext_00708000
        mov ecx, dword ptr [esp + 0xc]
        mov edx, dword ptr [eax]
        push ecx
        mov ecx, dword ptr [esp + 0xc]
        push ecx
        mov ecx, eax
        call dword ptr [edx + 0x80]
        mov ecx, dword ptr [esi + 0x4]
        pop esi
        test ecx, ecx
        je done
        call ext_006DC460
        fld qword ptr [esp + 0x4]
        push ecx
        mov ecx, eax
        fstp dword ptr [esp]
        call ext_006C9520
        mov ecx, eax
        call ext_006CD330
    done:
        ret 0x8
    }
}

// [0x0071CDA0] sub_0071CDA0 (80 bytes)
extern "C" void ext_00708000();
extern "C" void ext_006DC460();
extern "C" void ext_006C9570();
extern "C" void ext_006CD330();

extern "C" __declspec(naked) void __fastcall fn_0071CDA0(void* self, int edx_unused, double a1) {
    __asm {
        push esi
        mov esi, ecx
        push 0xaa8d5c
        mov ecx, dword ptr [esi + 0xc]
        call ext_00708000
        mov ecx, dword ptr [esp + 0xc]
        mov edx, dword ptr [eax]
        push ecx
        mov ecx, dword ptr [esp + 0xc]
        push ecx
        mov ecx, eax
        call dword ptr [edx + 0x80]
        mov ecx, dword ptr [esi + 0x4]
        pop esi
        test ecx, ecx
        je done
        call ext_006DC460
        fld qword ptr [esp + 0x4]
        push ecx
        mov ecx, eax
        fstp dword ptr [esp]
        call ext_006C9570
        mov ecx, eax
        call ext_006CD330
    done:
        ret 0x8
    }
}

// [0x0071CCB0] sub_0071CCB0 (80 bytes)
extern "C" void ext_00708000();
extern "C" void ext_006DC460();
extern "C" void ext_006C9540();
extern "C" void ext_006CD330();

extern "C" __declspec(naked) void __fastcall fn_0071CCB0(void* self, int edx_unused, double a1) {
    __asm {
        push esi
        mov esi, ecx
        push 0xaa8d2c
        mov ecx, dword ptr [esi + 0xc]
        call ext_00708000
        mov ecx, dword ptr [esp + 0xc]
        mov edx, dword ptr [eax]
        push ecx
        mov ecx, dword ptr [esp + 0xc]
        push ecx
        mov ecx, eax
        call dword ptr [edx + 0x80]
        mov ecx, dword ptr [esi + 0x4]
        pop esi
        test ecx, ecx
        je done
        call ext_006DC460
        fld qword ptr [esp + 0x4]
        push ecx
        mov ecx, eax
        fstp dword ptr [esp]
        call ext_006C9540
        mov ecx, eax
        call ext_006CD330
    done:
        ret 0x8
    }
}

// [0x0071CDF0] sub_0071CDF0 (80 bytes)
extern "C" __declspec(naked) void __fastcall fn_0071CDF0(void* self, int edx_unused, double a1) {
    __asm {
        push esi
        mov esi, ecx
        push 0xaa8d64
        mov ecx, dword ptr [esi + 0xc]
        call ext_00708000
        mov ecx, dword ptr [esp + 0xc]
        mov edx, dword ptr [eax]
        push ecx
        mov ecx, dword ptr [esp + 0xc]
        push ecx
        mov ecx, eax
        call dword ptr [edx + 0x80]
        mov ecx, dword ptr [esi + 0x4]
        pop esi
        test ecx, ecx
        je done
        call ext_006DC460
        fld qword ptr [esp + 0x4]
        push ecx
        mov ecx, eax
        fstp dword ptr [esp]
        call ext_006C9580
        mov ecx, eax
        call ext_006CD330
    done:
        ret 0x8
    }
}

// [0x0071CD00] sub_0071CD00 (80 bytes)
extern "C" void ext_00708000();
extern "C" void ext_006DC460();
extern "C" void ext_006C9550();
extern "C" void ext_006CD330();

extern "C" __declspec(naked) void __fastcall fn_0071CD00(void* self, int edx_unused, double a1) {
    __asm {
        push esi
        mov esi, ecx
        push 0xaa8d3c
        mov ecx, dword ptr [esi + 0xc]
        call ext_00708000
        mov ecx, dword ptr [esp + 0xc]
        mov edx, dword ptr [eax]
        push ecx
        mov ecx, dword ptr [esp + 0xc]
        push ecx
        mov ecx, eax
        call dword ptr [edx + 0x80]
        mov ecx, dword ptr [esi + 0x4]
        pop esi
        test ecx, ecx
        je done
        call ext_006DC460
        fld qword ptr [esp + 0x4]
        push ecx
        mov ecx, eax
        fstp dword ptr [esp]
        call ext_006C9550
        mov ecx, eax
        call ext_006CD330
    done:
        ret 0x8
    }
}

// [0x0071CD50] sub_0071CD50 (80 bytes)
extern "C" void ext_00708000();
extern "C" void ext_006DC460();
extern "C" void ext_006C9560();
extern "C" void ext_006CD330();

extern "C" __declspec(naked) void __fastcall fn_0071CD50(void* self, int edx_unused, double a1) {
    __asm {
        push esi
        mov esi, ecx
        push 0xaa8d4c
        mov ecx, dword ptr [esi + 0xc]
        call ext_00708000
        mov ecx, dword ptr [esp + 0xc]
        mov edx, dword ptr [eax]
        push ecx
        mov ecx, dword ptr [esp + 0xc]
        push ecx
        mov ecx, eax
        call dword ptr [edx + 0x80]
        mov ecx, dword ptr [esi + 0x4]
        pop esi
        test ecx, ecx
        je done
        call ext_006DC460
        fld qword ptr [esp + 0x4]
        push ecx
        mov ecx, eax
        fstp dword ptr [esp]
        call ext_006C9560
        mov ecx, eax
        call ext_006CD330
    done:
        ret 0x8
    }
}

// [0x00712250] sub_00712250 (96 bytes)
extern "C" __declspec(naked) int __cdecl fn_00712250(const char* s) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push ebx
        push ebp
        push esi
        push edi
        xor ebp, ebp
        mov edi, 0xaabf1c
    outer_top:
        mov esi, dword ptr [edi]
        mov ecx, eax
    cmp_top:
        mov bl, byte ptr [ecx]
        mov dl, bl
        cmp bl, byte ptr [esi]
        jne cmp_diff
        test dl, dl
        je cmp_end
        mov bl, byte ptr [ecx + 0x1]
        mov dl, bl
        cmp bl, byte ptr [esi + 0x1]
        jne cmp_diff
        add ecx, 0x2
        add esi, 0x2
        test dl, dl
        jne cmp_top
    cmp_end:
        xor ecx, ecx
        jmp cmp_result
    cmp_diff:
        sbb ecx, ecx
        sbb ecx, -1
    cmp_result:
        test ecx, ecx
        je found
        add edi, 0x4
        inc ebp
        cmp edi, 0xaabf68
        jl outer_top
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret
    found:
        pop edi
        mov eax, ebp
        pop esi
        pop ebp
        pop ebx
        ret
    }
}

// [0x0071B780] sub_0071B780 (96 bytes)
// Maps zero args to 1 (u = a1 ? a1 : 1, v = a2 ? a2 : 1), then returns a3 / (u / v). Stdcall, ret 0x10.
extern "C" __declspec(naked) double __stdcall fn_0071B780(int a1, int a2, double a3) {
    __asm {
        sub esp, 0x8
        mov edx, dword ptr [esp + 0xc]
        push esi
        mov esi, dword ptr [esp + 0x14]
        cmp edx, 0x1
        sbb eax, eax
        push edi
        neg eax
        dec eax
        cmp esi, 0x1
        sbb ecx, ecx
        mov edi, eax
        neg ecx
        not eax
        dec ecx
        and edi, edx
        and eax, 0x1
        mov edx, ecx
        or edi, eax
        xor eax, eax
        not ecx
        and edx, esi
        and ecx, 0x1
        mov dword ptr [esp + 0x8], edi
        mov dword ptr [esp + 0xc], eax
        fild qword ptr [esp + 0x8]
        or edx, ecx
        mov dword ptr [esp + 0xc], eax
        mov dword ptr [esp + 0x8], edx
        pop edi
        fild qword ptr [esp + 0x4]
        pop esi
        _emit 0xde
        _emit 0xf9
        fdivr qword ptr [esp + 0x14]
        add esp, 0x8
        ret 0x10
    }
}

// [0x0071C750] sub_0071C750 (96 bytes)
extern "C" __declspec(naked) void __fastcall fn_0071C750(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        mov edx, dword ptr [ecx + 0xc]
        push esi
        mov esi, dword ptr [eax]
        mov dword ptr [edx + 0x738], esi
        mov esi, dword ptr [eax + 0x4]
        mov dword ptr [edx + 0x73c], esi
        mov edx, dword ptr [ecx + 0xc]
        mov esi, dword ptr [eax + 0x8]
        mov dword ptr [edx + 0x740], esi
        mov esi, dword ptr [eax + 0xc]
        mov dword ptr [edx + 0x744], esi
        mov edx, dword ptr [ecx + 0xc]
        mov esi, dword ptr [eax + 0x10]
        mov dword ptr [edx + 0x748], esi
        mov esi, dword ptr [eax + 0x14]
        mov dword ptr [edx + 0x74c], esi
        mov ecx, dword ptr [ecx + 0xc]
        mov edx, dword ptr [eax + 0x18]
        pop esi
        mov dword ptr [ecx + 0x750], edx
        mov eax, dword ptr [eax + 0x1c]
        mov dword ptr [ecx + 0x754], eax
        ret 0x4
    }
}

// [0x0071DDF0] sub_0071DDF0 (96 bytes)
extern "C" void ext_0077FA20();
extern "C" __declspec(naked) void __fastcall fn_0071DDF0(void* self) {
    __asm {
        push -1
        push 0x8bd4a8
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        mov dword ptr [esi], 0x996778
        mov ecx, dword ptr [esi + 0x10]
        push 0
        mov dword ptr [esp + 0x14], 0
        mov eax, dword ptr [ecx]
        call dword ptr [eax + 0x4]
        mov ecx, esi
        mov dword ptr [esp + 0x10], -1
        call ext_0077FA20
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x0071C1B0] sub_0071C1B0 (96 bytes)
extern "C" void ext_0071C210();
extern "C" int mem_0092A270; /* double 1 */
extern "C" int mem_00996638; /* double 179 */
extern "C" __declspec(naked) void __fastcall fn_0071C1B0(void* self) {
    __asm {
        mov eax, dword ptr [ecx + 0xc]
        mov edx, dword ptr [eax + 0x2fc]
        push edx
        mov edx, dword ptr [eax + 0x2f8]
        push edx
        mov edx, dword ptr [eax + 0xc1c]
        push edx
        mov edx, dword ptr [eax + 0xc18]
        push edx
        mov edx, dword ptr [eax + 0xb94]
        mov eax, dword ptr [eax + 0xb90]
        push edx
        push eax
        call ext_0071C210
        fcom qword ptr [mem_0092A270]
        fnstsw ax
        test ah, 0x1
        je short L_below
        fstp st(0)
        fld qword ptr [mem_0092A270]
        ret
L_below:
        fcom qword ptr [mem_00996638]
        fnstsw ax
        test ah, 0x41
        jne short L_done
        fstp st(0)
        fld qword ptr [mem_00996638]
L_done:
        ret
    }
}

// [0x00712FC0] sub_00712FC0 (96 bytes)
extern "C" int mem_00AAC13C;
extern "C" int mem_00AAC0A0;
extern "C" int mem_00B5FA68;
extern "C" void ext_00782E70();
extern "C" __declspec(naked) void __cdecl fn_00712FC0(const char* s) {
    __asm {
        push ebx
        push esi
        push edi
        mov edi, dword ptr [esp + 0x10]
        mov esi, offset mem_00AAC13C
        mov eax, edi
L_loop:
        mov dl, byte ptr [eax]
        mov bl, byte ptr [esi]
        mov cl, dl
        cmp dl, bl
        jne L_ne
        test cl, cl
        je L_eq
        mov dl, byte ptr [eax + 1]
        mov bl, byte ptr [esi + 1]
        mov cl, dl
        cmp dl, bl
        jne L_ne
        add eax, 2
        add esi, 2
        test cl, cl
        jne L_loop
L_eq:
        xor eax, eax
        jmp L_done
L_ne:
        sbb eax, eax
        sbb eax, -1
L_done:
        test eax, eax
        jne L_call
        mov eax, dword ptr [mem_00AAC0A0]
        pop edi
        pop esi
        pop ebx
        ret
L_call:
        mov ecx, dword ptr [mem_00B5FA68]
        push 0
        push edi
        call ext_00782E70
        pop edi
        pop esi
        pop ebx
        ret
    }
}

// [0x00711AA0] sub_00711AA0 (96 bytes)
extern "C" __declspec(naked) bool __fastcall fn_00711AA0(void* self, int edx_unused, double a1, double a2) {
    __asm {
        push esi
        mov esi, ecx
        call ext_0071E680
        mov ecx, eax
        fld qword ptr [ecx + 0x18]
        fcomp qword ptr [esp + 0x8]
        fnstsw ax
        test ah, 0x40
        je L_store
        fld qword ptr [ecx + 0x20]
        fcomp qword ptr [esp + 0x10]
        fnstsw ax
        test ah, 0x40
        jne L_done
L_store:
        mov eax, dword ptr [esp + 0x8]
        mov edx, dword ptr [esp + 0xc]
        mov dword ptr [ecx + 0x18], eax
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x1c], edx
        mov edx, dword ptr [esp + 0x14]
        push 0
        push 0
        mov dword ptr [ecx + 0x20], eax
        push 0
        mov dword ptr [ecx + 0x24], edx
        mov eax, dword ptr [esi]
        push esi
        push 0x1f
        push 0
        mov ecx, esi
        call dword ptr [eax + 0x3c]
L_done:
        mov al, 0x1
        pop esi
        ret 0x10
    }
}

// [0x00715450] sub_00715450 (96 bytes)
extern "C" void ext_0077FA20();
extern "C" __declspec(naked) void __fastcall fn_00715450(void* self) {
    __asm {
        push -1
        push 0x8bd4a8
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        mov dword ptr [esi], 0x9962e0
        mov ecx, dword ptr [esi + 0x10]
        push 0
        mov dword ptr [esp + 0x14], 0
        mov eax, dword ptr [ecx]
        call dword ptr [eax + 0x4]
        mov ecx, esi
        mov dword ptr [esp + 0x10], -1
        call ext_0077FA20
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00714580] sub_00714580 (112 bytes)
extern "C" void __fastcall fn_00714580(void* self) {
    unsigned char* p = (unsigned char*)self;
    *(unsigned int*)(p + 0x78) = 0;
    *(unsigned int*)(p + 0x50) = 0;
    *(unsigned int*)(p + 0x28) = 0;
    *(unsigned int*)(p + 0x00) = 0;
    *(unsigned int*)(p + 0x70) = 0;
    *(unsigned int*)(p + 0x68) = 0;
    *(unsigned int*)(p + 0x60) = 0;
    *(unsigned int*)(p + 0x58) = 0;
    *(unsigned int*)(p + 0x48) = 0;
    *(unsigned int*)(p + 0x40) = 0;
    *(unsigned int*)(p + 0x38) = 0;
    *(unsigned int*)(p + 0x30) = 0;
    *(unsigned int*)(p + 0x20) = 0;
    *(unsigned int*)(p + 0x18) = 0;
    *(unsigned int*)(p + 0x10) = 0;
    *(unsigned int*)(p + 0x08) = 0;
    *(unsigned int*)(p + 0x7c) = 0x3ff00000u;
    *(unsigned int*)(p + 0x54) = 0x3ff00000u;
    *(unsigned int*)(p + 0x2c) = 0x3ff00000u;
    *(unsigned int*)(p + 0x04) = 0x3ff00000u;
    *(unsigned int*)(p + 0x74) = 0;
    *(unsigned int*)(p + 0x6c) = 0;
    *(unsigned int*)(p + 0x64) = 0;
    *(unsigned int*)(p + 0x5c) = 0;
    *(unsigned int*)(p + 0x4c) = 0;
    *(unsigned int*)(p + 0x44) = 0;
    *(unsigned int*)(p + 0x3c) = 0;
    *(unsigned int*)(p + 0x34) = 0;
    *(unsigned int*)(p + 0x24) = 0;
    *(unsigned int*)(p + 0x1c) = 0;
    *(unsigned int*)(p + 0x14) = 0;
    *(unsigned int*)(p + 0x0c) = 0;
}

// [0x007154B0] sub_007154B0 (112 bytes)
extern "C" void __fastcall fn_007154B0(void* self) {
    unsigned char* c = (unsigned char*)self;
    unsigned char* a = *(unsigned char**)(c + 0x10);
    *(unsigned int*)(c + 0xc) = 0;
    *(unsigned int*)(a + 0x160) = 0;
    a = *(unsigned char**)(c + 0x10);
    *(unsigned int*)(a + 0x1e8) = 0;
    *(unsigned int*)(a + 0x1ec) = 0x40590000u;
    a = *(unsigned char**)(c + 0x10);
    a += 0x270;
    *(unsigned int*)(a + 0x0) = 0;
    *(unsigned int*)(a + 0x8) = 0;
    *(unsigned int*)(a + 0x10) = 0;
    *(unsigned int*)(a + 0x4) = 0x3ff00000u;
    *(unsigned int*)(a + 0xc) = 0;
    *(unsigned int*)(a + 0x14) = 0;
    a = *(unsigned char**)(c + 0x10);
    *(unsigned char*)(a + 0x310) = 0;
    a = *(unsigned char**)(c + 0x10);
    a += 0x398;
    *(unsigned int*)(a + 0x0) = 0;
    *(unsigned int*)(a + 0x8) = 0;
    *(unsigned int*)(a + 0x10) = 0;
    *(unsigned int*)(a + 0x4) = 0;
    *(unsigned int*)(a + 0xc) = 0;
    *(unsigned int*)(a + 0x14) = 0;
}

// [0x0071F570] sub_0071F570 (112 bytes)
extern "C" void ext_006CA020();
extern "C" void ext_006CAA90();
extern "C" void ext_0071F2A0();
extern "C" void ext_00789BA0();
extern "C" __declspec(naked) void __cdecl fn_0071F570(void) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x18]
        test esi, esi
        push edi
        je done
        mov eax, dword ptr [esp + 0x10]
        mov ecx, dword ptr [esp + 0xc]
        push 0x0
        push eax
        push ecx
        mov ecx, esi
        call ext_006CAA90
        mov edi, eax
        mov ecx, esi
        push edi
        call ext_006CA020
        fld qword ptr [esp + 0x14]
        push ecx
        mov ecx, eax
        fstp dword ptr [esp]
        call ext_00789BA0
        cmp byte ptr [esp + 0x24], 0x1
        jne done
        mov edx, dword ptr [esp + 0x34]
        mov eax, dword ptr [esp + 0x30]
        mov ecx, dword ptr [esp + 0x2c]
        push edx
        mov edx, dword ptr [esp + 0x2c]
        push eax
        mov eax, dword ptr [esp + 0x28]
        push ecx
        push edx
        push eax
        push esi
        push edi
        call ext_0071F2A0
        add esp, 0x1c
    done:
        pop edi
        pop esi
        ret
    }
}

// [0x0071B7E0] sub_0071B7E0 (128 bytes)
extern "C" int mem_00993868; /* double 0.001 */
extern "C" int mem_00996630; /* double 600000 */
extern "C" __declspec(naked) void __fastcall fn_0071B7E0(void* self, int edx_unused, int a1, int a2) {
    __asm {
        fld qword ptr [esp + 0x4]
        fcomp qword ptr [mem_00993868]
        fnstsw ax
        test ah, 0x1
        je short L_small
        fld qword ptr [mem_00993868]
        jmp short L_join
L_small:
        fld qword ptr [esp + 0x4]
        fcomp qword ptr [mem_00996630]
        fnstsw ax
        test ah, 0x41
        jne short L_mid
        fld qword ptr [mem_00996630]
        jmp short L_join
L_mid:
        fld qword ptr [esp + 0x4]
L_join:
        mov eax, dword ptr [ecx + 0xc]
        fstp qword ptr [eax + 0xa80]
        mov ecx, dword ptr [ecx + 0xc]
        fld qword ptr [ecx + 0xb08]
        fld qword ptr [ecx + 0xa80]
        fst qword ptr [esp + 0x4]
        fcomp st(1)
        fnstsw ax
        test ah, 0x41
        jne short L_store_old
        mov edx, dword ptr [esp + 0x4]
        mov eax, dword ptr [esp + 0x8]
        mov dword ptr [ecx + 0xb08], edx
        mov dword ptr [ecx + 0xb0c], eax
        fstp st(0)
        ret 0x8
L_store_old:
        fstp qword ptr [ecx + 0xb08]
        ret 0x8
    }
}

// [0x0071B870] sub_0071B870 (128 bytes)
extern "C" int mem_00993868; /* double 0.001 */
extern "C" int mem_00996630; /* double 600000 */
extern "C" __declspec(naked) void __fastcall fn_0071B870(void* self, int edx_unused, int a1, int a2) {
    __asm {
        fld qword ptr [esp + 0x4]
        fcomp qword ptr [mem_00993868]
        fnstsw ax
        test ah, 0x1
        je L_hi
        fld qword ptr [mem_00993868]
        jmp L_store
L_hi:
        fld qword ptr [esp + 0x4]
        fcomp qword ptr [mem_00996630]
        fnstsw ax
        test ah, 0x41
        jne L_keep
        fld qword ptr [mem_00996630]
        jmp L_store
L_keep:
        fld qword ptr [esp + 0x4]
L_store:
        mov eax, dword ptr [ecx + 0xc]
        fstp qword ptr [eax + 0xb08]
        mov ecx, dword ptr [ecx + 0xc]
        fld qword ptr [ecx + 0xb08]
        fld qword ptr [ecx + 0xa80]
        fst qword ptr [esp + 0x4]
        fcomp st(1)
        fnstsw ax
        test ah, 0x1
        je L_else
        mov edx, dword ptr [esp + 0x4]
        mov eax, dword ptr [esp + 0x8]
        mov dword ptr [ecx + 0xa80], edx
        mov dword ptr [ecx + 0xa84], eax
        fstp st(0)
        ret 0x8
L_else:
        fstp qword ptr [ecx + 0xa80]
        ret 0x8
    }
}

// [0x007110C0] sub_007110C0 (128 bytes)
extern "C" __declspec(naked) void __fastcall fn_007110C0(void* self, int edx_unused, const char* src) {
    __asm {
        push ebx
        mov ebx, ecx
        push esi
        push edi
        mov eax, dword ptr [ebx + 0x8]
        push eax
        call dword ptr [mem_009251D8]
        mov esi, dword ptr [esp + 0x14]
        add esp, 0x4
        test esi, esi
        je short null_src
        mov edi, esi
        or ecx, -0x1
        xor eax, eax
        repne scasb
        not ecx
        dec ecx
        je short null_src
        mov edi, esi
        or ecx, -0x1
        repne scasb
        not ecx
        push ecx
        call dword ptr [mem_00925208]
        mov edx, eax
        mov edi, esi
        or ecx, -0x1
        xor eax, eax
        add esp, 0x4
        mov dword ptr [ebx + 0x8], edx
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
        pop ebx
        ret 0x4
null_src:
        pop edi
        mov dword ptr [ebx + 0x8], 0x0
        pop esi
        pop ebx
        ret 0x4
    }
}

// [0x0071B6F0] sub_0071B6F0 (128 bytes)
extern "C" void ext_0071B110();
extern "C" int mem_009520D8; /* double 0.05 */
extern "C" int mem_00996628; /* double 20 */
extern "C" __declspec(naked) void __fastcall fn_0071B6F0(void* self, int edx_unused, double a1) {
    __asm {
        mov edx, dword ptr [ecx + 0xc]
        fld qword ptr [esp + 0x4]
        fcomp qword ptr [edx + 0x628]
        fnstsw ax
        test ah, 0x40
        jne done
        fld qword ptr [esp + 0x4]
        fcomp qword ptr [mem_009520D8]
        fnstsw ax
        test ah, 0x1
        je notless
        fld qword ptr [mem_009520D8]
        push 0x0
        fstp qword ptr [edx + 0x628]
        call ext_0071B110
        ret 0x8
    notless:
        fld qword ptr [esp + 0x4]
        fcomp qword ptr [mem_00996628]
        fnstsw ax
        test ah, 0x41
        jne inrange
        fld qword ptr [mem_00996628]
        push 0x0
        fstp qword ptr [edx + 0x628]
        call ext_0071B110
        ret 0x8
    inrange:
        fld qword ptr [esp + 0x4]
        push 0x0
        fstp qword ptr [edx + 0x628]
        call ext_0071B110
    done:
        ret 0x8
    }
}

// [0x00711BE0] sub_00711BE0 (128 bytes)
extern "C" __declspec(naked) void __fastcall fn_00711BE0(void* self, int edx_unused, int a1) {
    __asm {
        push esi
        push edi
        mov esi, ecx
        call ext_00711A80
        test al, al
        mov ecx, esi
        je L_00711C2D
    L_00711BEF:
        call ext_0071E680
        mov ecx, dword ptr [eax + 0x2c]
        test ecx, ecx
        je L_00711C55
        mov ecx, esi
        call ext_0071E680
        mov eax, dword ptr [eax + 0x2c]
        mov edi, dword ptr [esp + 0xc]
        cmp edi, dword ptr [eax + 0x4]
        jge L_00711C55
        mov ecx, esi
        call ext_0071E680
        mov eax, dword ptr [eax + 0x2c]
        cmp edi, dword ptr [eax + 0x4]
        jge L_00711C55
        mov eax, dword ptr [eax + 0x14]
        mov ecx, dword ptr [eax + 4*edi]
        call ext_006E7460
        pop edi
        pop esi
        ret 0x4
    L_00711C2D:
        call ext_0071E680
        mov ecx, dword ptr [eax]
        shr ecx, 0x9
        test cl, 0x1
        mov ecx, esi
        je L_00711BEF
        call ext_0071E680
        mov edx, dword ptr [esp + 0xc]
        mov eax, dword ptr [eax + 0x2c]
        mov ecx, dword ptr [esi + 0x8]
        push edx
        call eax
        pop edi
        pop esi
        ret 0x4
    L_00711C55:
        pop edi
        xor eax, eax
        pop esi
        ret 0x4
    }
}

// [0x00711C60] sub_00711C60 (144 bytes)
extern "C" void ext_006A5C62();
extern "C" void ext_006E72A0();
extern "C" __declspec(naked) void __fastcall fn_00711C60(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -0x1
        push 0x8b8fbb
        push eax
        mov dword ptr fs:[0x0], esp
        push esi
        push edi
        mov edi, ecx
        call ext_0071E680
        mov ecx, dword ptr [eax + 0x2c]
        test ecx, ecx
        jne L_done
        mov al, byte ptr [esp + 0x18]
        test al, al
        je L_done
        push 0x1c
        call ext_006A5C62
        add esp, 0x4
        mov dword ptr [esp + 0x18], eax
        test eax, eax
        mov dword ptr [esp + 0x10], 0x0
        je L_null
        mov ecx, eax
        call ext_006E72A0
        mov esi, eax
        jmp L_after
L_null:
        xor esi, esi
L_after:
        mov ecx, edi
        mov dword ptr [esp + 0x10], 0xffffffff
        call ext_0071E680
        mov dword ptr [eax + 0x2c], esi
L_done:
        mov ecx, edi
        call ext_0071E680
        mov ecx, dword ptr [esp + 0x8]
        mov eax, dword ptr [eax + 0x2c]
        pop edi
        mov dword ptr fs:[0x0], ecx
        pop esi
        add esp, 0xc
        ret 0x4
    }
}

// [0x00717890] sub_00717890 (144 bytes)
extern "C" void ext_00714570();
extern "C" void ext_006C3FB0();
extern "C" void ext_00715E10();
extern "C" void ext_006D80A0();

extern "C" __declspec(naked) void __fastcall fn_00717890(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push -1
        push 0x8bcceb
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x84
        push esi
        mov esi, ecx
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x4], 0x0
        call ext_00714570
        mov eax, dword ptr [esp + 0x9c]
        lea ecx, [esp + 0x8]
        push eax
        push esi
        push ecx
        mov dword ptr [esp + 0x9c], 0x0
        call ext_006C3FB0
        mov esi, dword ptr [esp + 0xa4]
        add esp, 0xc
        lea edx, [esp + 0x8]
        mov ecx, esi
        push edx
        call ext_00715E10
        lea ecx, [esp + 0x8]
        call ext_006D80A0
        mov ecx, dword ptr [esp + 0x88]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x90
        ret 0x8
    }
}

// [0x00717720] sub_00717720 (160 bytes)
extern "C" void* __fastcall fn_00717720(void* self, int edx_unused, void* src) {
    int* d = (int*)self;
    int* s = (int*)src;
    d[0x00 / 4] = s[0x00 / 4];
    d[0x04 / 4] = s[0x04 / 4];
    d[0x08 / 4] = s[0x08 / 4];
    d[0x0c / 4] = s[0x0c / 4];
    d[0x10 / 4] = s[0x10 / 4];
    d[0x14 / 4] = s[0x14 / 4];
    d[0x20 / 4] = s[0x20 / 4];
    d[0x24 / 4] = s[0x24 / 4];
    d[0x28 / 4] = s[0x28 / 4];
    d[0x2c / 4] = s[0x2c / 4];
    d[0x30 / 4] = s[0x30 / 4];
    d[0x34 / 4] = s[0x34 / 4];
    d[0x40 / 4] = s[0x40 / 4];
    d[0x44 / 4] = s[0x44 / 4];
    d[0x48 / 4] = s[0x48 / 4];
    d[0x4c / 4] = s[0x4c / 4];
    d[0x50 / 4] = s[0x50 / 4];
    d[0x54 / 4] = s[0x54 / 4];
    d[0x60 / 4] = s[0x60 / 4];
    d[0x64 / 4] = s[0x64 / 4];
    d[0x68 / 4] = s[0x68 / 4];
    d[0x6c / 4] = s[0x6c / 4];
    d[0x70 / 4] = s[0x70 / 4];
    d[0x74 / 4] = s[0x74 / 4];
    return self;
}

// [0x0071C110] sub_0071C110 (160 bytes)
extern "C" void ext_0071C250();
extern "C" int mem_0092A270; /* double 1 */
extern "C" int mem_00996638; /* double 179 */
extern "C" __declspec(naked) void __fastcall fn_0071C110(void* self, int edx_unused, double a1) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -8
        sub esp, 0ch
        fld qword ptr [ebp+8]
        fcomp qword ptr [mem_0092A270]
        push esi
        mov esi, ecx
        fnstsw ax
        test ah, 1
        je L_71C13E
        mov dword ptr [esp+8], 0
        mov dword ptr [esp+0ch], 3ff00000h
        jmp L_71C16E
L_71C13E:
        fld qword ptr [ebp+8]
        fcomp qword ptr [mem_00996638]
        fnstsw ax
        test ah, 41h
        jne L_71C160
        mov dword ptr [esp+8], 0
        mov dword ptr [esp+0ch], 40666000h
        jmp L_71C16E
L_71C160:
        mov eax, dword ptr [ebp+8]
        mov ecx, dword ptr [ebp+0ch]
        mov dword ptr [esp+8], eax
        mov dword ptr [esp+0ch], ecx
L_71C16E:
        mov eax, dword ptr [esi+0ch]
        mov edx, dword ptr [esp+0ch]
        mov ecx, dword ptr [esp+8]
        push edx
        mov edx, dword ptr [eax+0c1ch]
        push ecx
        mov ecx, dword ptr [eax+0c18h]
        push edx
        mov edx, dword ptr [eax+0b94h]
        mov eax, dword ptr [eax+0b90h]
        push ecx
        push edx
        push eax
        mov ecx, esi
        call ext_0071C250
        mov ecx, dword ptr [esi+0ch]
        pop esi
        fstp qword ptr [ecx+2f8h]
        mov esp, ebp
        pop ebp
        ret 8
    }
}

// [0x00716070] sub_00716070 (160 bytes)
extern "C" void ext_006D2370();
extern "C" void ext_006D2390();
extern "C" void ext_006D80A0();
extern "C" __declspec(naked) void __fastcall fn_00716070(void* self) {
    __asm {
        push -1
        push 0x8c1a5f
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x24
        push esi
        mov esi, ecx
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x4], 0x0
        call ext_006D2370
        mov eax, dword ptr [esi + 0x60]
        mov ecx, dword ptr [esi + 0x64]
        mov edx, dword ptr [esi + 0x68]
        mov dword ptr [esp + 0x8], eax
        mov eax, dword ptr [esi + 0x6c]
        mov dword ptr [esp + 0xc], ecx
        mov ecx, dword ptr [esi + 0x70]
        mov dword ptr [esp + 0x10], edx
        mov edx, dword ptr [esi + 0x74]
        mov esi, dword ptr [esp + 0x38]
        mov dword ptr [esp + 0x14], eax
        lea eax, [esp + 0x8]
        mov dword ptr [esp + 0x18], ecx
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0x34], 0x1
        mov dword ptr [esp + 0x20], edx
        call ext_006D2390
        mov dword ptr [esp + 0x4], 0x1
        lea ecx, [esp + 0x8]
        mov byte ptr [esp + 0x30], 0x0
        call ext_006D80A0
        mov ecx, dword ptr [esp + 0x28]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x30
        ret 0x4
    }
}

// [0x0071C640] sub_0071C640 (160 bytes)
extern "C" void ext_006D80A0();
extern "C" void ext_00708000();
extern "C" void ext_0077FB40();
extern "C" __declspec(naked) void __fastcall fn_0071C640(void* self, int edx_unused, int a1) {
    __asm {
        push -0x1
        push 0x8c1a5f
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x24
        push ebp
        push esi
        mov esi, ecx
        push edi
        lea ecx, [esp + 0x10]
        mov dword ptr [esp + 0xc], 0x0
        call ext_0077FB40
        mov ecx, dword ptr [esi + 0xc]
        push 0xaa8d70
        mov dword ptr [esp + 0x3c], 0x1
        call ext_00708000
        mov edx, dword ptr [eax]
        push 0x0
        push 0x0
        lea ecx, [esp + 0x18]
        push 0x0
        push ecx
        mov ecx, eax
        call dword ptr [edx + 0x88]
        mov ebp, dword ptr [esp + 0x40]
        mov ecx, 0x8
        lea esi, [esp + 0x10]
        mov edi, ebp
        rep movsd
        mov dword ptr [esp + 0xc], 0x1
        lea ecx, [esp + 0x10]
        mov byte ptr [esp + 0x38], 0x0
        call ext_006D80A0
        mov ecx, dword ptr [esp + 0x30]
        pop edi
        mov eax, ebp
        pop esi
        pop ebp
        mov dword ptr fs:[0x0], ecx
        add esp, 0x30
        ret 0x4
    }
}

// [0x0071A970] sub_0071A970 (160 bytes)
extern "C" void ext_006B9D70();
extern "C" void ext_006D80A0();
extern "C" void ext_0077FA20();
extern "C" __declspec(naked) void __fastcall fn_0071A970(void* self) {
    __asm {
        push -1
        push 0x8bd3b5
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        mov dword ptr [esi], 0x996604
        mov ecx, dword ptr [esi + 0xc]
        push 0
        mov dword ptr [esp + 0x14], 0x5
        mov eax, dword ptr [ecx]
        call dword ptr [eax + 0x4]
        lea ecx, [esi + 0xf0]
        mov byte ptr [esp + 0x10], 0x4
        call ext_006D80A0
        lea ecx, [esi + 0x9c]
        mov byte ptr [esp + 0x10], 0x3
        call ext_006B9D70
        lea ecx, [esi + 0x50]
        mov byte ptr [esp + 0x10], 0x2
        call ext_006B9D70
        lea ecx, [esi + 0x30]
        mov byte ptr [esp + 0x10], 0x1
        call ext_006D80A0
        lea ecx, [esi + 0x10]
        mov byte ptr [esp + 0x10], 0x0
        call ext_006D80A0
        mov ecx, esi
        mov dword ptr [esp + 0x10], 0xffffffff
        call ext_0077FA20
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00713750] sub_00713750 (12 bytes)
extern "C" void ext_006A6C87();
extern "C" __declspec(naked) void __fastcall fn_00713750(void* self) {
    __asm {
        push 0x713760
        call ext_006A6C87
        pop ecx
        ret
    }
}

// [0x00713790] sub_00713790 (12 bytes)
extern "C" void ext_006A6C87();
extern "C" void __fastcall fn_00713790(void* self) {
    ((void (__cdecl *)(void*))ext_006A6C87)((void*)0x007137A0);
}

// [0x007137D0] sub_007137D0 (12 bytes)
extern "C" void ext_006A6C87();
extern "C" void __fastcall fn_007137D0(void* self) {
    ((void (__cdecl *)(void*))ext_006A6C87)((void*)0x007137E0);
}

// [0x00713810] sub_00713810 (12 bytes)
extern "C" void ext_006A6C87();
extern "C" __declspec(naked) void __fastcall fn_00713810(void* self) {
    __asm {
        push 0x713820
        call ext_006A6C87
        pop ecx
        ret
    }
}

// [0x00713890] sub_00713890 (12 bytes)
extern "C" void ext_006A6C87();
extern "C" void __fastcall fn_00713890(void* self) {
    ((void (__cdecl *)(void*))ext_006A6C87)((void*)0x007138A0);
}

// [0x00713970] sub_00713970 (12 bytes)
extern "C" void ext_006A6C87();
extern "C" void __fastcall fn_00713970(void* self) {
    ((void (__cdecl *)(void*))ext_006A6C87)((void*)0x00713980);
}

// [0x007138D0] sub_007138D0 (12 bytes)
extern "C" void ext_006A6C87();
extern "C" void __fastcall fn_007138D0(void* self) {
    ((void (__cdecl *)(void*))ext_006A6C87)((void*)0x007138E0);
}

// [0x00713850] sub_00713850 (12 bytes)
extern "C" void ext_006A6C87();
extern "C" void __fastcall fn_00713850(void* self) {
    ((void (__cdecl *)(void*))ext_006A6C87)((void*)0x00713860);
}

// [0x00713910] sub_00713910 (12 bytes)
extern "C" void __fastcall fn_00713910(void* self) {
    ((void (__cdecl *)(void*))ext_006A6C87)((void*)0x00713920);
}

// [0x007139F0] sub_007139F0 (12 bytes)
extern "C" void ext_006A6C87();
extern "C" void __fastcall fn_007139F0(void* self) {
    ((void (__cdecl *)(void*))ext_006A6C87)((void*)0x00713A00);
}

// [0x007139B0] sub_007139B0 (12 bytes)
extern "C" void ext_006A6C87();
extern "C" void __fastcall fn_007139B0(void* self) {
    ((void (__cdecl *)(void*))ext_006A6C87)((void*)0x007139C0);
}

// [0x00713A70] sub_00713A70 (12 bytes)
extern "C" void __fastcall fn_00713A70(void* self) {
    ((void (__cdecl *)(void*))ext_006A6C87)((void*)0x00713A80);
}

// [0x00713AB0] sub_00713AB0 (12 bytes)
extern "C" void __fastcall fn_00713AB0(void* self) {
    ((void (__cdecl *)(void*))ext_006A6C87)((void*)0x00713AC0);
}

// [0x00712690] sub_00712690 (15 bytes)
extern "C" void __fastcall fn_00712690(void* self, int edx_unused, int a1) {
    typedef void (__thiscall *Callee)(void* self, int a, int b);
    ((Callee)ext_00710F80)(static_cast<char*>(self) + 0x40, 0xc, 1);
}

// [0x00713540] sub_00713540 (23 bytes)
extern "C" void ext_006D9FC0();
extern "C" bool __stdcall fn_00713540(int a1, void* a2) {
    ((void (__thiscall*)(void*, int, int, int))ext_006D9FC0)(a2, a1, 0, 2);
    return true;
}

// [0x00713560] sub_00713560 (25 bytes)
struct TargetObj_006D9940 {
    void method_006D9940(int a1, int a2, int a3, int a4);
};

extern "C" bool __fastcall fn_00713560(void* self, int edx_unused, int a1, int a2, TargetObj_006D9940* a3) {
    a3->method_006D9940(a1, 5, 0, 2);
    return true;
}

// [0x00711140] sub_00711140 (26 bytes)
extern "C" void __fastcall fn_00711140(void* self, int edx_unused, int a1) {
    *(int*)((char*)self + 0x2c) = a1;
    ((void (__fastcall *)(void*, int, int, bool))ext_00710F80)(self, edx_unused, 0x200, a1 != 0);
}

// [0x0071A850] sub_0071A850 (33 bytes)
extern "C" __declspec(naked) int __stdcall fn_0071A850(int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        sub eax, 0x0
        je zero_case
        dec eax
        je one_case
        xor eax, eax
        ret 0x4
one_case:
        mov eax, 0xaacaa4
        ret 0x4
zero_case:
        mov eax, 0xaaca94
        ret 0x4
    }
}

// [0x0071D530] sub_0071D530 (33 bytes)
extern "C" void ext_006B9D80();
extern "C" __declspec(naked) void* __fastcall fn_0071D530(void* self, int edx_unused, void* a1) {
    __asm {
        push ecx
        push esi
        mov esi, dword ptr [esp + 0xc]
        push 0xaacab8
        mov ecx, esi
        mov dword ptr [esp + 0x8], 0x0
        call ext_006B9D80
        mov eax, esi
        pop esi
        pop ecx
        ret 0x4
    }
}

// [0x00717DB0] sub_00717DB0 (33 bytes)
extern "C" __declspec(naked) void* __fastcall fn_00717DB0(void* self, int edx_unused, void* a1) {
    __asm {
        push ecx
        push esi
        mov esi, dword ptr [esp + 0xc]
        push 0xaac46c
        mov ecx, esi
        mov dword ptr [esp + 0x8], 0x0
        call ext_006B9D80
        mov eax, esi
        pop esi
        pop ecx
        ret 0x4
    }
}

// [0x0071A820] sub_0071A820 (33 bytes)
extern "C" int mem_00AACA78;
extern "C" int mem_00AACA84;
extern "C" __declspec(naked) void* __stdcall fn_0071A820(int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        sub eax, 0x0
        je L_case0
        dec eax
        je L_case1
        xor eax, eax
        ret 0x4
    L_case1:
        mov eax, offset mem_00AACA84
        ret 0x4
    L_case0:
        mov eax, offset mem_00AACA78
        ret 0x4
    }
}

// [0x0071A7F0] sub_0071A7F0 (33 bytes)
extern "C" int mem_00AACA54;
extern "C" int mem_00AACA64;
extern "C" __declspec(naked) void* __stdcall fn_0071A7F0(int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        sub eax, 0x0
        je L_case0
        dec eax
        je L_case1
        xor eax, eax
        ret 0x4
    L_case1:
        mov eax, offset mem_00AACA64
        ret 0x4
    L_case0:
        mov eax, offset mem_00AACA54
        ret 0x4
    }
}

// [0x0071A790] sub_0071A790 (33 bytes)
extern "C" int mem_00AAC9F8;
extern "C" int mem_00AACA10;

extern "C" __declspec(naked) void* __stdcall fn_0071A790(int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        sub eax, 0x0
        je case_0
        dec eax
        je case_1
        xor eax, eax
        ret 0x4
    case_1:
        mov eax, offset mem_00AACA10
        ret 0x4
    case_0:
        mov eax, offset mem_00AAC9F8
        ret 0x4
    }
}

// [0x00713490] sub_00713490 (34 bytes)
extern "C" bool __fastcall fn_00713490(void* self, void* dummy_edx, unsigned int* arg) {
    arg[0] = 0;
    arg[2] = 0;
    arg[4] = 0;
    arg[6] = 0;
    arg[1] = 0;
    arg[3] = 0;
    arg[5] = 0;
    arg[7] = 0;
    return true;
}

// [0x007111D0] sub_007111D0 (33 bytes)
extern "C" __declspec(naked) void* __fastcall fn_007111D0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        call ext_006FA030
        lea ecx, [esi + 0x40]
        call ext_00710F10
        mov dword ptr [esi], 0x995f50
        mov dword ptr [esi + 0x78], 0
        mov eax, esi
        pop esi
        ret
    }
}

// [0x007140B0] sub_007140B0 (34 bytes)
extern "C" void ext_007131E0();
extern "C" int mem_00AAC08C; /* u32 0x00B5F888 */
extern "C" __declspec(naked) void __fastcall fn_007140B0(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        mov esi, ecx
        push eax
        call ext_007131E0
        mov dword ptr [esi], 0x996154
        mov ecx, dword ptr [mem_00AAC08C]
        mov dword ptr [esi + 0x10], ecx
        mov eax, esi
        pop esi
        ret 0x4
    }
}

// [0x00713EC0] sub_00713EC0 (34 bytes)
extern "C" void ext_007131E0();
extern "C" int mem_00AAC08C; /* u32 0x00B5F888 */
extern "C" __declspec(naked) void __fastcall fn_00713EC0(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        mov esi, ecx
        push eax
        call ext_007131E0
        mov dword ptr [esi], 0x99612c
        mov ecx, dword ptr [mem_00AAC08C]
        mov dword ptr [esi + 0x10], ecx
        mov eax, esi
        pop esi
        ret 0x4
    }
}

// [0x00714260] sub_00714260 (34 bytes)
extern "C" void ext_00713590();
extern "C" int mem_00AAC094;

extern "C" __declspec(naked) void* __fastcall fn_00714260(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        mov esi, ecx
        push eax
        call ext_00713590
        mov dword ptr [esi], 0x996168
        mov ecx, dword ptr [mem_00AAC094]
        mov dword ptr [esi + 0x10], ecx
        mov eax, esi
        pop esi
        ret 0x4
    }
}

// [0x00713DC0] sub_00713DC0 (34 bytes)
extern "C" void ext_00713360();
extern "C" int mem_00AAC090; /* u32 0x00B5F708 */

extern "C" __declspec(naked) void __fastcall fn_00713DC0(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        mov esi, ecx
        push eax
        call ext_00713360
        mov dword ptr [esi], 0x996118
        mov ecx, dword ptr [mem_00AAC090]
        mov dword ptr [esi + 0x10], ecx
        mov eax, esi
        pop esi
        ret 0x4
    }
}

// [0x00714440] sub_00714440 (34 bytes)
extern "C" void ext_00713050();
extern "C" int mem_00AAC084; /* u32 0x00B5F810 */
extern "C" __declspec(naked) void __fastcall fn_00714440(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        mov esi, ecx
        push eax
        call ext_00713050
        mov dword ptr [esi], 0x9960dc
        mov ecx, dword ptr [mem_00AAC084]
        mov dword ptr [esi + 0x10], ecx
        mov eax, esi
        pop esi
        ret 0x4
    }
}

// [0x00712910] sub_00712910 (34 bytes)
extern "C" __declspec(naked) void __fastcall fn_00712910(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi]
        call dword ptr [eax + 0xd0]
        mov al, byte ptr [esi + 0x34]
        mov ecx, esi
        test al, 0x1
        je L_false
        call ext_006FBC90
        pop esi
        ret
    L_false:
        call ext_006FBCE0
        pop esi
        ret
    }
}

// [0x007143D0] sub_007143D0 (34 bytes)
extern "C" void ext_00713360();
extern "C" int mem_00AAC090; /* u32 0x00B5F708 */

extern "C" __declspec(naked) void* __fastcall fn_007143D0(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        mov esi, ecx
        push eax
        call ext_00713360
        mov dword ptr [esi], 0x99617c
        mov ecx, dword ptr [mem_00AAC090]
        mov dword ptr [esi + 0x10], ecx
        mov eax, esi
        pop esi
        ret 0x4
    }
}

// [0x00713510] sub_00713510 (39 bytes)
extern "C" void ext_00712EB0();
extern "C" __declspec(naked) void __fastcall fn_00713510(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        mov esi, ecx
        push eax
        call ext_00712EB0
        mov dword ptr [esi], 0x9960f0
        mov dword ptr [esi + 0x8], 0x0
        mov dword ptr [esi + 0x4], 0x8
        mov eax, esi
        pop esi
        ret 0x4
    }
}

// [0x00713590] sub_00713590 (39 bytes)
extern "C" void ext_00712EB0();
extern "C" __declspec(naked) void* __fastcall fn_00713590(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        mov esi, ecx
        push eax
        call ext_00712EB0
        mov dword ptr [esi], 0x996168
        mov dword ptr [esi + 0x8], 0x10
        mov dword ptr [esi + 0x4], 0x80
        mov eax, esi
        pop esi
        ret 0x4
    }
}

// [0x00713360] sub_00713360 (39 bytes)
extern "C" void ext_00712EB0();
extern "C" __declspec(naked) void* __fastcall fn_00713360(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        mov esi, ecx
        push eax
        call ext_00712EB0
        mov dword ptr [esi], 0x99617c
        mov dword ptr [esi + 0x8], 0x4
        mov dword ptr [esi + 0x4], 0x20
        mov eax, esi
        pop esi
        ret 0x4
    }
}

// [0x00714E70] sub_00714E70 (41 bytes)
extern "C" int mem_00B5FA70;
extern "C" int mem_00B5FA78;
extern "C" int mem_00B5FA74;
extern "C" int mem_00B5FA7C;

extern "C" void __cdecl fn_00714E70() {
    mem_00B5FA70 = 0xb5fa80;
    mem_00B5FA78 = 0xaac2f8;
    mem_00B5FA74 = 0xb5eb50;
    mem_00B5FA7C = 0;
}

// [0x00713F30] sub_00713F30 (40 bytes)
extern "C" __declspec(naked) void __stdcall fn_00713F30(int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        cmp eax, 0x3
        ja L_00713F50
        jmp dword ptr [4*eax + 0x713F58]
        mov eax, 0xaac224
        ret 0x4
        mov eax, 0xaac220
        ret 0x4
L_00713F50:
        mov eax, 0xaac03c
        ret 0x4
    }
}

// [0x007108B0] sub_007108B0 (41 bytes)
extern "C" int mem_00B5F050;
extern "C" int mem_00B5F058;
extern "C" int mem_00B5F054;
extern "C" int mem_00B5F05C;

extern "C" void __cdecl fn_007108B0() {
    mem_00B5F050 = 0xb5f060;
    mem_00B5F058 = 0xaabf08;
    mem_00B5F054 = 0xb5eb50;
    mem_00B5F05C = 0;
}

// [0x007185C0] sub_007185C0 (41 bytes)
extern "C" int mem_00B5FC90;
extern "C" int mem_00B5FC98;
extern "C" int mem_00B5FC94;
extern "C" int mem_00B5FC9C;

extern "C" void __cdecl fn_007185C0() {
    mem_00B5FC90 = 0xb5fc88;
    mem_00B5FC98 = 0xaac478;
    mem_00B5FC94 = 0xb5eb50;
    mem_00B5FC9C = 0;
}

// [0x0071DB70] sub_0071DB70 (41 bytes)
extern "C" int mem_00B5FE28;
extern "C" int mem_00B5FE30;
extern "C" int mem_00B5FE2C;
extern "C" int mem_00B5FE34;

extern "C" void __cdecl fn_0071DB70() {
    mem_00B5FE28 = 0xb5fe20;
    mem_00B5FE30 = 0xaacac4;
    mem_00B5FE2C = 0xb5eb50;
    mem_00B5FE34 = 0;
}

// [0x00711170] sub_00711170 (41 bytes)
extern "C" int mem_00B5F200;
extern "C" int mem_00B5F208;
extern "C" int mem_00B5F204;
extern "C" int mem_00B5F20C;

extern "C" void __cdecl fn_00711170() {
    mem_00B5F200 = 0xb5f1f8;
    mem_00B5F208 = 0xaabf88;
    mem_00B5F204 = 0xb5e3f0;
    mem_00B5F20C = 0;
}

// [0x00712460] sub_00712460 (41 bytes)
extern "C" int mem_00B5F1E8;
extern "C" int mem_00B5F1F0;
extern "C" int mem_00B5F1EC;
extern "C" int mem_00B5F1F4;

extern "C" void __cdecl fn_00712460() {
    mem_00B5F1E8 = 0xb5f220;
    mem_00B5F1F0 = 0xaabf74;
    mem_00B5F1EC = 0xb5f200;
    mem_00B5F1F4 = 0;
}

// [0x007101F0] sub_007101F0 (43 bytes)
extern "C" __declspec(naked) void* __fastcall fn_007101F0(void* self, int edx_unused, void* a1) {
    __asm {
        push    ecx
        mov     ecx, dword ptr [ecx + 0xf4]
        push    esi
        mov     dword ptr [esp + 0x4], 0x0
        mov     eax, dword ptr [ecx]
        call    dword ptr [eax + 0x130]
        mov     esi, dword ptr [esp + 0xc]
        push    eax
        mov     ecx, esi
        call    ext_006B9D80
        mov     eax, esi
        pop     esi
        pop     ecx
        ret     0x4
    }
}

// [0x007124C0] sub_007124C0 (43 bytes)
extern "C" void ext_007111D0();
extern "C" int mem_00995FE8;
extern "C" __declspec(naked) void* __fastcall fn_007124C0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        call ext_007111D0
        or eax, -0x1
        mov dword ptr [esi + 0x88], 0x0
        mov dword ptr [esi + 0x80], eax
        mov dword ptr [esi + 0x84], eax
        mov dword ptr [esi], offset mem_00995FE8
        mov eax, esi
        pop esi
        ret
    }
}

// [0x0071A5E0] sub_0071A5E0 (44 bytes)
extern "C" int mem_00AAC8B4;
extern "C" int mem_00AAC8CC;
extern "C" int mem_00AAC8D8;
extern "C" __declspec(naked) void* __stdcall fn_0071A5E0(int a1) {
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
        mov eax, offset mem_00AAC8D8
        ret 0x4
    L_case1:
        mov eax, offset mem_00AAC8CC
        ret 0x4
    L_case0:
        mov eax, offset mem_00AAC8B4
        ret 0x4
    }
}

// [0x0071A760] sub_0071A760 (44 bytes)
extern "C" int mem_00AAC9EC;
extern "C" int mem_00AAC9E4;
extern "C" int mem_00AAC9D8;

extern "C" __declspec(naked) void* __stdcall fn_0071A760(int a1) {
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
        mov eax, offset mem_00AAC9EC
        ret 0x4
    L_case1:
        mov eax, offset mem_00AAC9E4
        ret 0x4
    L_case0:
        mov eax, offset mem_00AAC9D8
        ret 0x4
    }
}

// [0x0071A7C0] sub_0071A7C0 (44 bytes)
extern "C" int mem_00AACA24;
extern "C" int mem_00AACA30;
extern "C" int mem_00AACA3C;

extern "C" __declspec(naked) void* __stdcall fn_0071A7C0(int a1) {
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
        mov eax, offset mem_00AACA3C
        ret 0x4
    L_case1:
        mov eax, offset mem_00AACA30
        ret 0x4
    L_case0:
        mov eax, offset mem_00AACA24
        ret 0x4
    }
}

// [0x00718390] sub_00718390 (46 bytes)
extern "C" int mem_00925284;
extern "C" int mem_00B5FD00;
extern "C" int mem_00B5FD08;
extern "C" int mem_00B5FD10;
extern "C" int mem_00B5FD18;

extern "C" void __cdecl fn_00718390() {
    *(double*)&mem_00B5FD00 = -*(double*)mem_00925284;
    *(double*)&mem_00B5FD08 = -*(double*)mem_00925284;
    *(double*)&mem_00B5FD10 = -*(double*)mem_00925284;
    *(double*)&mem_00B5FD18 = -*(double*)mem_00925284;
}

// [0x00712C90] sub_00712C90 (46 bytes)
extern "C" int mem_00925284;
extern "C" int mem_00B5F948;
extern "C" int mem_00B5F950;
extern "C" int mem_00B5F958;
extern "C" int mem_00B5F960;

extern "C" void __cdecl fn_00712C90() {
    double* p = *(double**)&mem_00925284;
    *(double*)&mem_00B5F948 = -*p;
    *(double*)&mem_00B5F950 = -*p;
    *(double*)&mem_00B5F958 = -*p;
    *(double*)&mem_00B5F960 = -*p;
}

// [0x00710680] sub_00710680 (46 bytes)
extern "C" int mem_00925284;
extern "C" int mem_00B5F0C8;
extern "C" int mem_00B5F0D0;
extern "C" int mem_00B5F0D8;
extern "C" int mem_00B5F0E0;

extern "C" void __cdecl fn_00710680() {
    double* p = *(double**)&mem_00925284;
    *(double*)&mem_00B5F0C8 = -*p;
    *(double*)&mem_00B5F0D0 = -*p;
    *(double*)&mem_00B5F0D8 = -*p;
    *(double*)&mem_00B5F0E0 = -*p;
}

// [0x0071E160] sub_0071E160 (46 bytes)
extern "C" int mem_00925284;
extern "C" int mem_00B5FE98;
extern "C" int mem_00B5FEA0;
extern "C" int mem_00B5FEA8;
extern "C" int mem_00B5FEB0;

extern "C" void __cdecl fn_0071E160() {
    double* p = *(double**)&mem_00925284;
    *(double*)&mem_00B5FE98 = -*p;
    *(double*)&mem_00B5FEA0 = -*p;
    *(double*)&mem_00B5FEA8 = -*p;
    *(double*)&mem_00B5FEB0 = -*p;
}

// [0x00714C40] sub_00714C40 (46 bytes)
extern "C" int mem_00925284;
extern "C" int mem_00B5FAE8;
extern "C" int mem_00B5FAF0;
extern "C" int mem_00B5FAF8;
extern "C" int mem_00B5FB00;

extern "C" void __cdecl fn_00714C40() {
    double* p = *(double**)&mem_00925284;
    *(double*)&mem_00B5FAE8 = -*p;
    *(double*)&mem_00B5FAF0 = -*p;
    *(double*)&mem_00B5FAF8 = -*p;
    *(double*)&mem_00B5FB00 = -*p;
}

// [0x00710CF0] sub_00710CF0 (46 bytes)
extern "C" int mem_00925284;
extern "C" int mem_00B5F278;
extern "C" int mem_00B5F280;
extern "C" int mem_00B5F288;
extern "C" int mem_00B5F290;

extern "C" void __cdecl fn_00710CF0() {
    double* p = *(double**)&mem_00925284;
    *(double*)&mem_00B5F278 = -*p;
    *(double*)&mem_00B5F280 = -*p;
    *(double*)&mem_00B5F288 = -*p;
    *(double*)&mem_00B5F290 = -*p;
}

// [0x00712860] sub_00712860 (49 bytes)
extern "C" void ext_006FBC50();
extern "C" void ext_006FBC70();
extern "C" __declspec(naked) void __fastcall fn_00712860(void* self, int edx_unused, int a1) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi]
        call dword ptr [eax + 0xd0]
        test byte ptr [esi + 0x34], 0x1
        je short L_no_flag
        mov ecx, dword ptr [esp + 0x8]
        push ecx
        mov ecx, esi
        call ext_006FBC70
        pop esi
        ret 0x4
L_no_flag:
        mov edx, dword ptr [esp + 0x8]
        mov ecx, esi
        push edx
        call ext_006FBC50
        pop esi
        ret 0x4
    }
}

// [0x00712960] sub_00712960 (51 bytes)
extern "C" void ext_006FA950();
extern "C" void ext_006FC6E0();

extern "C" __declspec(naked) void __fastcall fn_00712960(void* self, int edx_unused, int a1, int a2) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 0xc]
        mov dword ptr [esi + 0x84], eax
        mov eax, dword ptr [esi + 0x34]
        and eax, 0x8
        mov dword ptr [esi + 0x80], ecx
        push eax
        push ecx
        call ext_006FC6E0
        add esp, 0x4
        mov ecx, esi
        push eax
        call ext_006FA950
        pop esi
        ret 0x8
    }
}

// [0x00715360] sub_00715360 (53 bytes)
extern "C" __declspec(naked) void* __stdcall fn_00715360(int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        cmp eax, 0x3
        ja L_00715390
        jmp dword ptr [4*eax + 0x715398]
        mov eax, 0xaac34c
        ret 0x4
        mov eax, 0xaac340
        ret 0x4
        mov eax, 0xaac334
        ret 0x4
        mov eax, 0xaac32c
        ret 0x4
L_00715390:
        xor eax, eax
        ret 0x4
    }
}

// [0x00713E30] sub_00713E30 (56 bytes)
extern "C" void* __stdcall fn_00713E30(unsigned int a1) {
    switch (a1) {
        case 0: return (void*)0x00AAC1F8;
        case 1: return (void*)0x00AAC1F4;
        case 2: return (void*)0x00AAC1F0;
        case 3: return (void*)0x00AAC20C;
        default: return (void*)0x00AAC03C;
    }
}

// [0x007134C0] sub_007134C0 (56 bytes)
extern "C" __declspec(naked) void* __stdcall fn_007134C0(int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        cmp eax, 0x3
        ja L_007134f0
        jmp dword ptr [4*eax + 0x7134f8]
        mov eax, 0xaac194
        ret 0x4
        mov eax, 0xaac198
        ret 0x4
        mov eax, 0xaac19c
        ret 0x4
        mov eax, 0xaac1c0
        ret 0x4
L_007134f0:
        mov eax, 0xaac03c
        ret 0x4
    }
}

// [0x00719BB0] sub_00719BB0 (60 bytes)
extern "C" __declspec(naked) void __fastcall fn_00719BB0(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        mov edx, dword ptr [ecx + 0x738]
        mov dword ptr [eax], edx
        mov edx, dword ptr [ecx + 0x73c]
        mov dword ptr [eax + 0x4], edx
        mov edx, dword ptr [ecx + 0x740]
        mov dword ptr [eax + 0x8], edx
        mov edx, dword ptr [ecx + 0x744]
        mov dword ptr [eax + 0xc], edx
        mov edx, dword ptr [ecx + 0x748]
        mov dword ptr [eax + 0x10], edx
        mov ecx, dword ptr [ecx + 0x74c]
        mov dword ptr [eax + 0x14], ecx
        ret 0x4
    }
}

// [0x007151C0] sub_007151C0 (60 bytes)
extern "C" __declspec(naked) void __fastcall fn_007151C0(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        mov edx, dword ptr [ecx + 0x270]
        mov dword ptr [eax], edx
        mov edx, dword ptr [ecx + 0x274]
        mov dword ptr [eax + 0x4], edx
        mov edx, dword ptr [ecx + 0x278]
        mov dword ptr [eax + 0x8], edx
        mov edx, dword ptr [ecx + 0x27c]
        mov dword ptr [eax + 0xc], edx
        mov edx, dword ptr [ecx + 0x280]
        mov dword ptr [eax + 0x10], edx
        mov ecx, dword ptr [ecx + 0x284]
        mov dword ptr [eax + 0x14], ecx
        ret 0x4
    }
}

// [0x0071A580] sub_0071A580 (61 bytes)
extern "C" __declspec(naked) void* __stdcall fn_0071A580(unsigned int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        cmp eax, 0x4
        ja L_0071A5B8
        jmp dword ptr [4*eax + 0x71A5C0]
        mov eax, 0xaac8a8
        ret 0x4
        mov eax, 0xaac89c
        ret 0x4
        mov eax, 0xaac888
        ret 0x4
        mov eax, 0xaac870
        ret 0x4
        mov eax, 0xaac858
        ret 0x4
L_0071A5B8:
        xor eax, eax
        ret 0x4
    }
}

// [0x00719B70] sub_00719B70 (63 bytes)
extern "C" void __fastcall fn_00719B70(void* self, int edx_unused, int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8) {
    char* p = (char*)self;
    *(int*)(p + 0x738) = a1;
    *(int*)(p + 0x73c) = a2;
    *(int*)(p + 0x740) = a3;
    *(int*)(p + 0x744) = a4;
    *(int*)(p + 0x748) = a5;
    *(int*)(p + 0x74c) = a6;
}

// [0x00715220] sub_00715220 (63 bytes)
extern "C" void __fastcall fn_00715220(void* self, int edx_unused, int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8) {
    char* p = (char*)self;
    *(int*)(p + 0x398) = a1;
    *(int*)(p + 0x39c) = a2;
    *(int*)(p + 0x3a0) = a3;
    *(int*)(p + 0x3a4) = a4;
    *(int*)(p + 0x3a8) = a5;
    *(int*)(p + 0x3ac) = a6;
}

// [0x00712740] sub_00712740 (62 bytes)
extern "C" __declspec(naked) void __fastcall fn_00712740(void* self, int edx_unused, int a1) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi]
        call dword ptr [eax + 0xd0]
        mov al, byte ptr [esi + 0x34]
        push 0x0
        test al, 0x1
        je label_else
        mov ecx, dword ptr [esp + 0xc]
        push ecx
        mov ecx, esi
        call ext_006FB650
        and eax, 0xff
        pop esi
        ret 0x4
    label_else:
        mov edx, dword ptr [esp + 0xc]
        mov ecx, esi
        push edx
        call ext_006FB670
        and eax, 0xff
        pop esi
        ret 0x4
    }
}

// [0x007127D0] sub_007127D0 (69 bytes)
extern "C" void ext_006FC100();
extern "C" void ext_006FC160();
extern "C" __declspec(naked) void __fastcall fn_007127D0(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi]
        call dword ptr [eax + 0xd0]
        test byte ptr [esi + 0x34], 0x1
        je short loc_fallback
        mov ecx, dword ptr [esp + 0xc]
        mov edx, dword ptr [esp + 0x8]
        push ecx
        push edx
        mov ecx, esi
        call ext_006FC160
        and eax, 0xff
        pop esi
        ret 0x8
loc_fallback:
        mov eax, dword ptr [esp + 0xc]
        mov ecx, dword ptr [esp + 0x8]
        push eax
        push ecx
        mov ecx, esi
        call ext_006FC100
        and eax, 0xff
        pop esi
        ret 0x8
    }
}

// [0x00712780] sub_00712780 (72 bytes)
extern "C" __declspec(naked) void __fastcall fn_00712780(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi]
        call dword ptr [eax + 0xd0]
        mov al, byte ptr [esi + 0x34]
        push 0x0
        test al, 0x1
        je label_else
        mov ecx, dword ptr [esp + 0x10]
        mov edx, dword ptr [esp + 0xc]
        push ecx
        push edx
        mov ecx, esi
        call ext_006FB690
        and eax, 0xff
        pop esi
        ret 0x8
    label_else:
        mov eax, dword ptr [esp + 0x10]
        mov ecx, dword ptr [esp + 0xc]
        push eax
        push ecx
        mov ecx, esi
        call ext_006FB6B0
        and eax, 0xff
        pop esi
        ret 0x8
    }
}

// [0x00712F60] sub_00712F60 (73 bytes)
extern "C" void ext_006A5C5C();
extern "C" void ext_00782D20();
extern "C" void ext_00782E30();
extern "C" int mem_00B5FA68;

extern "C" __declspec(naked) void __fastcall fn_00712F60(void* self) {
    __asm {
        mov eax, ecx
        push esi
        mov dword ptr [eax], 0x9960c8
        mov ecx, dword ptr [mem_00B5FA68]
        test ecx, ecx
        je L_end
        mov eax, dword ptr [eax + 0xc]
        push eax
        call ext_00782E30
        mov esi, dword ptr [mem_00B5FA68]
        mov eax, dword ptr [esi + 0x4]
        test eax, eax
        jne L_end
        test esi, esi
        je L_null
        mov ecx, esi
        call ext_00782D20
        push esi
        call ext_006A5C5C
        add esp, 0x4
    L_null:
        mov dword ptr [mem_00B5FA68], 0
    L_end:
        pop esi
        ret
    }
}

// [0x007129D0] sub_007129D0 (77 bytes)
extern "C" void ext_006FADF0();

extern "C" __declspec(naked) void __fastcall fn_007129D0(void* self, int edx_unused, int a1, int a2, int a3, int a4, int a5, int a6, int a7) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0xc]
        push esi
        push edi
        mov edi, dword ptr [esp + 0x18]
        mov esi, ecx
        cmp edi, esi
        jne L_skip
        cmp ebx, 0x4
        je L_call_vt
        cmp ebx, 0x8
        jne L_skip
L_call_vt:
        mov eax, dword ptr [esi]
        mov ecx, esi
        call dword ptr [eax + 0xd0]
L_skip:
        mov ecx, dword ptr [esp + 0x28]
        mov edx, dword ptr [esp + 0x24]
        mov eax, dword ptr [esp + 0x20]
        push ecx
        mov ecx, dword ptr [esp + 0x20]
        push edx
        mov edx, dword ptr [esp + 0x18]
        push eax
        push ecx
        push edi
        push ebx
        push edx
        mov ecx, esi
        call ext_006FADF0
        pop edi
        pop esi
        pop ebx
        ret 0x1c
    }
}

// [0x00717D60] sub_00717D60 (79 bytes)
extern "C" void ext_00717DE0();
extern "C" void ext_0070CD30();
extern "C" __declspec(naked) void __fastcall fn_00717D60(void* self) {
    __asm {
        push -1
        push 0x8b9248
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        mov dword ptr [esi], 0x00996310
        mov dword ptr [esp + 0x10], 0
        call ext_00717DE0
        mov ecx, esi
        mov dword ptr [esp + 0x10], 0xffffffff
        call ext_0070CD30
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x007135C0] sub_007135C0 (87 bytes)
extern "C" int mem_00925224;

extern "C" __declspec(naked) bool __stdcall fn_007135C0(const char* str, double* out) {
    __asm {
        push    ebx
        push    esi
        mov     esi, dword ptr [esp + 0xc]
        push    edi
        cmp     byte ptr [esi], 0x7b
        je      loc_7135d4
loc_7135cc:
        pop     edi
        pop     esi
        xor     al, al
        pop     ebx
        ret     0x8

loc_7135d4:
        mov     ebx, dword ptr [esp + 0x14]
        xor     edi, edi

loc_7135da:
        lea     eax, [esp + 0x10]
        inc     esi
        push    eax
        push    esi
        call    dword ptr [mem_00925224]
        mov     eax, dword ptr [esp + 0x18]
        add     esp, 0x8
        fstp    qword ptr [ebx]
        cmp     esi, eax
        je      loc_7135cc
        cmp     byte ptr [eax], 0x2c
        je      loc_7135fe
        cmp     edi, 0xf
        jl      loc_7135cc

loc_7135fe:
        inc     edi
        add     ebx, 0x8
        cmp     edi, 0x10
        mov     esi, eax
        jl      loc_7135da
        mov     cl, byte ptr [eax]
        pop     edi
        cmp     cl, 0x7d
        pop     esi
        sete    al
        pop     ebx
        ret     0x8
    }
}

// [0x00713390] sub_00713390 (87 bytes)
extern "C" int mem_00925224; /* u32 0x00627CF6 */
extern "C" __declspec(naked) bool __stdcall fn_00713390(const char* s, double* out) {
    __asm {
        push ebx
        push esi
        mov esi, dword ptr [esp + 0xc]
        push edi
        cmp byte ptr [esi], 0x7b
        je L_open
L_fail:
        pop edi
        pop esi
        xor al, al
        pop ebx
        ret 0x8
L_open:
        mov ebx, dword ptr [esp + 0x14]
        xor edi, edi
L_loop:
        lea eax, [esp + 0x10]
        inc esi
        push eax
        push esi
        call dword ptr [mem_00925224]
        mov eax, dword ptr [esp + 0x18]
        add esp, 0x8
        fstp qword ptr [ebx]
        cmp esi, eax
        je L_fail
        cmp byte ptr [eax], 0x2c
        je L_comma
        cmp edi, 0x3
        jl L_fail
L_comma:
        inc edi
        add ebx, 0x8
        cmp edi, 0x4
        mov esi, eax
        jl L_loop
        mov cl, byte ptr [eax]
        pop edi
        cmp cl, 0x7d
        pop esi
        sete al
        pop ebx
        ret 0x8
    }
}

// [0x0071E6F0] sub_0071E6F0 (90 bytes)
extern "C" void ext_006C2860();
extern "C" void ext_006C28D0();
extern "C" void ext_006D2170();
extern "C" __declspec(naked) void __fastcall fn_0071E6F0(void* self, int edx_unused, int a1) {
    __asm {
        push ebx
        push esi
        mov ebx, ecx
        push edi
        mov edi, dword ptr [esp + 0x10]
        mov eax, dword ptr [ebx]
        push edi
        call dword ptr [eax + 0xc]
        test al, al
        je L_skip
        mov eax, dword ptr [ebx + 0x8]
        lea ecx, [ebx + 0x8]
        lea edx, [esp + 0x10]
        mov dword ptr [esp + 0x10], edi
        push edx
        push eax
        call ext_006D2170
L_skip:
        xor esi, esi
        mov ecx, edi
        push esi
        call ext_006C2860
        test eax, eax
        jle L_done
L_loop:
        push esi
        mov ecx, edi
        call ext_006C28D0
        mov edx, dword ptr [ebx]
        push eax
        mov ecx, ebx
        call dword ptr [edx + 0x8]
        push 0
        mov ecx, edi
        inc esi
        call ext_006C2860
        cmp esi, eax
        jl L_loop
L_done:
        pop edi
        pop esi
        pop ebx
        ret 0x4
    }
}
