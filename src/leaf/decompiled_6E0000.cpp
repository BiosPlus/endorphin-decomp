// Decompiled translation unit: src/leaf/decompiled_6E0000.cpp

#include <math.h>
extern "C" void ext_006D2390();
extern "C" void ext_006D80A0();
extern "C" void ext_006E89B0();

extern "C" void ext_006D80A0();
extern "C" void ext_006E89B0();
extern "C" __declspec(naked) void __fastcall fn_006E0900(void* self) {
    __asm {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr [eax + 0x10], ecx
        mov dword ptr [eax + 0x8], ecx
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 0x18], ecx
        mov dword ptr [eax + 0x14], ecx
        mov dword ptr [eax + 0xc], ecx
        mov dword ptr [eax + 0x4], ecx
        mov dword ptr [eax + 0x1c], 0x3ff00000
        ret
    }
}

extern "C" void ext_006B9EC0();
extern "C" void ext_006E7440();
extern "C" void ext_006E8810();

extern "C" void ext_006E8810();
extern "C" __declspec(naked) void __fastcall fn_006E6350(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        add ecx, 0x4c
        push eax
        call ext_006B9EC0
        ret 4
    }
}
extern "C" int mem_0092A278;
extern "C" int mem_00993D00;
extern "C" void ext_006B9D10();
extern "C" void ext_006E7470();

extern "C" void ext_006E7470();
extern "C" __declspec(naked) void __fastcall fn_006E7430(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        add ecx, 0x8
        push eax
        call ext_006B9EC0
        ret 4
    }
}
extern "C" void ext_006E9610();
extern "C" int __fastcall ext_00710300(void* ecx_arg);

extern "C" int __fastcall ext_00710300(void* ecx_arg);
extern "C" __declspec(naked) void __fastcall fn_006E6880(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi]
        test ecx, ecx
        je done
        mov edx, dword ptr [esp + 0xc]
        mov eax, dword ptr [ecx]
        push edx
        mov edx, dword ptr [esp + 0xc]
        push edx
        call dword ptr [eax + 0x80]
        mov ecx, dword ptr [esi + 0x4]
        test ecx, ecx
        je done
        mov eax, dword ptr [ecx]
        push esi
        call dword ptr [eax + 0x128]
done:
        pop esi
        ret 8
    }
}
extern "C" int mem_00AA96F8;
extern "C" void ext_006B9D80();

extern "C" void ext_006B9D80();
extern "C" __declspec(naked) void __fastcall fn_006E8750(void* self, int edx_unused, double a1) {
    __asm {
        mov ecx, dword ptr [ecx]
        fld qword ptr [esp + 0x4]
        fcomp qword ptr [ecx + 0x50]
        fnstsw ax
        test ah, 0x1
        je short L_store_arg
        mov eax, dword ptr [ecx + 0x50]
        mov dword ptr [ecx + 0x58], eax
        mov edx, dword ptr [ecx + 0x54]
        mov dword ptr [ecx + 0x5c], edx
        ret 0x8
L_store_arg:
        mov eax, dword ptr [esp + 0x4]
        mov edx, dword ptr [esp + 0x8]
        mov dword ptr [ecx + 0x58], eax
        mov dword ptr [ecx + 0x5c], edx
        ret 0x8
    }
}

extern "C" int mem_00925284;
extern "C" int mem_00B5E0C8;
extern "C" int mem_00B5E0CC;
extern "C" int mem_00B5E0C0;
extern "C" int mem_00B5DD98;
extern "C" int mem_00B5DD9C;
extern "C" int mem_00B5DD90;
extern "C" void ext_00711D40();
extern "C" void ext_006C8B30();
extern "C" void ext_006C8A70();

extern "C" void ext_006C8A70();
// Two incremental-link style thunks: each jumps over 11 nop padding to a body.
// Body 1: copy the double at *_HUGE into mem_00B5DD98/9C.
// Body 2: store -(*_HUGE) into mem_00B5DD90.
extern "C" __declspec(naked) void __fastcall fn_006E6360(void* self) {
    __asm {
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
        mov dword ptr [mem_00B5DD98], ecx
        mov dword ptr [mem_00B5DD9C], edx
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
        fstp qword ptr [mem_00B5DD90]
        ret
    }
}

// [0x006E7730] sub_006E7730 (80 bytes)
extern "C" void ext_007641C0();
extern "C" void ext_006B9D70();

extern "C" __declspec(naked) void __fastcall fn_006E7730(void* self) {
    __asm {
        push -1
        push 0x008B967B
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        lea ecx, [esi + 0x90]
        mov dword ptr [esp + 0x10], 0x0
        call ext_007641C0
        lea ecx, [esi + 0x8]
        mov dword ptr [esp + 0x10], -1
        call ext_006B9D70
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x006E4CD0] sub_006E4CD0 (95 bytes)
extern "C" double mem_00993CC8;
extern "C" double mem_00993828;
extern "C" double mem_009324A8;
extern "C" double mem_00993CC0;
extern "C" double mem_0092A270;
extern "C" int mem_00925294;
extern "C" __declspec(naked) double __cdecl fn_006E4CD0(double a, double b) {
    __asm {
        fld qword ptr [esp + 0xc]
        fsub qword ptr [esp + 0x4]
        lea eax, [esp + 0xc]
        push eax
        fmul qword ptr [mem_00993CC8]
        sub esp, 0x8
        fstp qword ptr [esp]
        call dword ptr [mem_00925294]
        fcom qword ptr [mem_00993828]
        add esp, 0xc
        fnstsw ax
        test ah, 0x41
        jne short L_skip_inc
        fld qword ptr [esp + 0xc]
        fadd qword ptr [mem_0092A270]
        fstp qword ptr [esp + 0xc]
L_skip_inc:
        fcomp qword ptr [mem_009324A8]
        fld qword ptr [esp + 0xc]
        fnstsw ax
        test ah, 0x1
        je short L_skip_dec
        fsub qword ptr [mem_0092A270]
L_skip_dec:
        fmul qword ptr [mem_00993CC0]
        fadd qword ptr [esp + 0x4]
        ret
    }
}

// [0x006EA340] sub_006EA340 (112 bytes)
// Thunk layout: body 1 at +0x00 returns [ecx+0xF0]; body 2 at +0x10 returns 10;
// jmp at +0x20 to body 3 at +0x30 copies the double at *_HUGE into mem_00B5E0C8/CC;
// jmp at +0x50 to body 4 at +0x60 stores -(*_HUGE) into mem_00B5E0C0.
extern "C" __declspec(naked) void __fastcall fn_006EA340(void* self) {
    __asm {
        mov eax, dword ptr [ecx + 0xf0]
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
        mov eax, 0x0a
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
        mov dword ptr [mem_00B5E0C8], ecx
        mov dword ptr [mem_00B5E0CC], edx
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
        fstp qword ptr [mem_00B5E0C0]
        ret
    }
}

// [0x006E9C30] sub_006E9C30 (112 bytes)
// Three-thunk layout: body 1 at +0x00 returns this->[+0x1c][arg]; jmp at +0x20 -> body 2 at +0x30 copies the double at *_HUGE into mem_00B5DF30/34;
// jmp at +0x50 -> body 3 at +0x60 stores -(*_HUGE) into mem_00B5DF28.
extern "C" void ext_006E7460();
extern "C" int mem_00925284;
extern "C" int mem_00B5DF30;
extern "C" int mem_00B5DF34;
extern "C" int mem_00B5DF28;
extern "C" __declspec(naked) void __fastcall fn_006E9C30(void* self) {
    __asm {
        mov eax, dword ptr [ecx + 0x1c]
        mov ecx, dword ptr [esp + 4]
        mov ecx, dword ptr [eax + 4*ecx]
        call ext_006E7460
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
        mov dword ptr [mem_00B5DF30], ecx
        mov dword ptr [mem_00B5DF34], edx
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
        fstp qword ptr [mem_00B5DF28]
        ret
    }
}

// [0x006E3EA0] sub_006E3EA0 (256 bytes)
extern "C" void ext_006CA6A0();
extern "C" void ext_006E3F40();

extern "C" __declspec(naked) void __fastcall fn_006E3EA0(void* self, int edx_unused, void* a1) {
    __asm {
        push esi
        mov esi, ecx
        push edi
        mov eax, dword ptr [esi]
        call dword ptr [eax + 0x14]
        xor ecx, ecx
        cmp eax, ecx
        jne loc_6e3eb9
        cmp dword ptr [esi + 0x38], ecx
        je loc_6e3eb9
        mov eax, 1

    loc_6e3eb9:
        mov esi, dword ptr [esi + 0x54]
        cmp esi, 4
        ja loc_6e3f27
        _emit 0xff
        _emit 0x24
        _emit 0xb5
        _emit 0x2c
        _emit 0x3f
        _emit 0x6e
        _emit 0x00

    loc_6e3ec8:
        cmp eax, ecx
        jle loc_6e3f27
        mov edi, dword ptr [esp + 0xc]
        mov ecx, eax
        and ecx, 0x1fffffff
        shl ecx, 1
        xor eax, eax
        rep stosd
        pop edi
        pop esi
        ret 4

    loc_6e3ee3:
        cmp eax, ecx
        jle loc_6e3f27
        mov esi, dword ptr [esp + 0xc]
        mov dword ptr [esi], ecx
        _emit 0x8d
        _emit 0x0c
        _emit 0xc5
        _emit 0xfb
        _emit 0xff
        _emit 0xff
        _emit 0xff
        shr ecx, 2
        lea edi, [esi + 8]
        mov dword ptr [esi + 4], 0x3ff00000
        rep movsd
        pop edi
        pop esi
        ret 4

    loc_6e3f08:
        mov eax, dword ptr [esp + 0xc]
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 8], ecx
        mov dword ptr [eax + 0x10], ecx
        mov dword ptr [eax + 0x18], ecx
        mov dword ptr [eax + 4], ecx
        mov dword ptr [eax + 0xc], ecx
        mov dword ptr [eax + 0x14], ecx
        mov dword ptr [eax + 0x1c], 0x3ff00000

    loc_6e3f27:
        pop edi
        pop esi
        ret 4

        // Jump table at 0x6E3F2C
        _emit 0xc8
        _emit 0x3e
        _emit 0x6e
        _emit 0x00

        _emit 0xc8
        _emit 0x3e
        _emit 0x6e
        _emit 0x00

        _emit 0xc8
        _emit 0x3e
        _emit 0x6e
        _emit 0x00

        _emit 0xe3
        _emit 0x3e
        _emit 0x6e
        _emit 0x00

        _emit 0x08
        _emit 0x3f
        _emit 0x6e
        _emit 0x00

        // Subroutine at 0x6E3F40
        mov eax, dword ptr [esp + 4]
        push ebx
        xor ebx, ebx
        push esi
        test al, al
        push edi
        mov esi, ecx
        je loc_6e3f5e
        mov ecx, dword ptr [esi + 0x40]
        test ecx, ecx
        je loc_6e3f5e
        push eax
        call ext_006E3F40
        mov ebx, eax

    loc_6e3f5e:
        mov ecx, dword ptr [esi + 0x38]
        test ecx, ecx
        je loc_6e3f6c
        call ext_006CA6A0
        add ebx, eax

    loc_6e3f6c:
        mov eax, dword ptr [esi]
        mov ecx, esi
        xor edi, edi
        call dword ptr [eax + 0x14]
        test eax, eax
        jle loc_6e3f98

    loc_6e3f79:
        mov edx, dword ptr [esi]
        push 0
        push edi
        mov ecx, esi
        call dword ptr [edx + 0x18]
        mov ecx, eax
        call ext_006E3F40
        add ebx, eax
        mov eax, dword ptr [esi]
        mov ecx, esi
        inc edi
        call dword ptr [eax + 0x14]
        cmp edi, eax
        jl loc_6e3f79

    loc_6e3f98:
        pop edi
        mov eax, ebx
        pop esi
        pop ebx
        ret 4
    }
}

// [0x006E0390] sub_006E0390 (559 bytes)
extern "C" int mem_00993808;
extern "C" int mem_00996d70;
extern "C" int mem_00996d74;
extern "C" int mem_00996d78;
extern "C" __declspec(naked) void __fastcall fn_006E0390(void* self) {
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x30
        push    ebx
        mov     ebx, dword ptr [ebp + 0x24]
        push    esi
        push    edi
        test    bl, 0x2
        lea     eax, [ebp - 0x10]
        je      L_006E0415
        fld     qword ptr [ebp + 0xc]
        fchs
        fmul    qword ptr [mem_00993808]
        mov     dword ptr [ebp + 0x24], eax
        fstp    qword ptr [ebp - 0x30]
        fld     qword ptr [ebp - 0x30]
        fsincos
        mov     eax, dword ptr [ebp + 0x24]
        fstp    qword ptr [eax]
        fstp    qword ptr [ebp - 0x28]
        fld     qword ptr [ebp - 0x28]
        fstp    qword ptr [ebp - 0x18]
        fld     qword ptr [ebp + 0x14]
        fchs
        fmul    qword ptr [mem_00993808]
        lea     ecx, [ebp + 0xc]
        mov     dword ptr [ebp + 0x24], ecx
        fstp    qword ptr [ebp + 0x14]
        fld     qword ptr [ebp + 0x14]
        fsincos
        mov     eax, dword ptr [ebp + 0x24]
        fstp    qword ptr [eax]
        fstp    qword ptr [ebp - 0x30]
        fld     qword ptr [ebp - 0x30]
        fstp    qword ptr [ebp + 0x14]
        fld     qword ptr [ebp + 0x1c]
        fchs
        fmul    qword ptr [mem_00993808]
        lea     edx, [ebp - 0x8]
        mov     dword ptr [ebp + 0x24], edx
        fstp    qword ptr [ebp + 0x1c]
        fld     qword ptr [ebp + 0x1c]
        fsincos
        mov     eax, dword ptr [ebp + 0x24]
        fstp    qword ptr [eax]
        fstp    qword ptr [ebp - 0x30]
        fld     qword ptr [ebp - 0x30]
        jmp     L_006E047E
    L_006E0415:
        fld     qword ptr [ebp + 0xc]
        fmul    qword ptr [mem_00993808]
        mov     dword ptr [ebp + 0x24], eax
        fstp    qword ptr [ebp - 0x30]
        fld     qword ptr [ebp - 0x30]
        fsincos
        mov     eax, dword ptr [ebp + 0x24]
        fstp    qword ptr [eax]
        fstp    qword ptr [ebp - 0x28]
        fld     qword ptr [ebp - 0x28]
        fstp    qword ptr [ebp - 0x18]
        fld     qword ptr [ebp + 0x14]
        fmul    qword ptr [mem_00993808]
        lea     ecx, [ebp + 0xc]
        mov     dword ptr [ebp + 0x24], ecx
        fstp    qword ptr [ebp + 0x14]
        fld     qword ptr [ebp + 0x14]
        fsincos
        mov     eax, dword ptr [ebp + 0x24]
        fstp    qword ptr [eax]
        fstp    qword ptr [ebp - 0x30]
        fld     qword ptr [ebp - 0x30]
        fstp    qword ptr [ebp + 0x14]
        fld     qword ptr [ebp + 0x1c]
        fmul    qword ptr [mem_00993808]
        lea     edx, [ebp - 0x8]
        mov     dword ptr [ebp + 0x24], edx
        fstp    qword ptr [ebp + 0x1c]
        fld     qword ptr [ebp + 0x1c]
        fsincos
        mov     eax, dword ptr [ebp + 0x24]
        fstp    qword ptr [eax]
        fstp    qword ptr [ebp - 0x30]
        fld     qword ptr [ebp - 0x30]
    L_006E047E:
        fld     qword ptr [ebp - 0x8]
        fmul    qword ptr [ebp - 0x10]
        lea     eax, [ebx + 2*ebx]
        shl     eax, 0x2
        fstp    qword ptr [ebp - 0x20]
        mov     ecx, dword ptr [eax + mem_00996d70]
        mov     edx, dword ptr [eax + mem_00996d74]
        fld     st(0)
        fmul    qword ptr [ebp - 0x10]
        mov     esi, dword ptr [eax + mem_00996d78]
        test    bl, 0x1
        fstp    qword ptr [ebp - 0x28]
        fld     qword ptr [ebp - 0x8]
        fmul    qword ptr [ebp - 0x18]
        fstp    qword ptr [ebp - 0x30]
        fld     st(0)
        fmul    qword ptr [ebp - 0x18]
        fstp    qword ptr [ebp + 0x1c]
        je      L_006E0541
        fld     qword ptr [ebp + 0xc]
        mov     eax, dword ptr [ebp + 0x8]
        lea     edi, [ecx + 4*ecx]
        fstp    qword ptr [eax + 8*edi]
        fld     qword ptr [ebp + 0x14]
        fmul    qword ptr [ebp - 0x18]
        lea     edi, [ecx + 4*edx]
        fstp    qword ptr [eax + 8*edi]
        fld     qword ptr [ebp + 0x14]
        fmul    qword ptr [ebp - 0x10]
        lea     edi, [ecx + 4*esi]
        fstp    qword ptr [eax + 8*edi]
        lea     edi, [edx + 4*ecx]
        lea     ecx, [esi + 4*ecx]
        fmul    qword ptr [ebp + 0x14]
        fstp    qword ptr [eax + 8*edi]
        fld     qword ptr [ebp + 0x1c]
        fmul    qword ptr [ebp + 0xc]
        lea     edi, [edx + 4*edx]
        fsubr   qword ptr [ebp - 0x20]
        fstp    qword ptr [eax + 8*edi]
        fld     qword ptr [ebp - 0x28]
        fmul    qword ptr [ebp + 0xc]
        lea     edi, [edx + 4*esi]
        lea     edx, [esi + 4*edx]
        fchs
        fsub    qword ptr [ebp - 0x30]
        fstp    qword ptr [eax + 8*edi]
        fld     qword ptr [ebp - 0x8]
        fmul    qword ptr [ebp + 0x14]
        pop     edi
        fchs
        fstp    qword ptr [eax + 8*ecx]
        fld     qword ptr [ebp - 0x30]
        fmul    qword ptr [ebp + 0xc]
        lea     ecx, [esi + 4*esi]
        pop     esi
        pop     ebx
        fadd    qword ptr [ebp - 0x28]
        fstp    qword ptr [eax + 8*edx]
        fld     qword ptr [ebp - 0x20]
        fmul    qword ptr [ebp + 0xc]
        fsub    qword ptr [ebp + 0x1c]
        fstp    qword ptr [eax + 8*ecx]
        mov     esp, ebp
        pop     ebp
        ret
    L_006E0541:
        fld     qword ptr [ebp - 0x8]
        fmul    qword ptr [ebp + 0xc]
        mov     eax, dword ptr [ebp + 0x8]
        lea     edi, [ecx + 4*ecx]
        fstp    qword ptr [eax + 8*edi]
        fld     qword ptr [ebp - 0x30]
        fmul    qword ptr [ebp + 0x14]
        lea     edi, [ecx + 4*edx]
        fsub    qword ptr [ebp - 0x28]
        fstp    qword ptr [eax + 8*edi]
        fld     qword ptr [ebp - 0x20]
        fmul    qword ptr [ebp + 0x14]
        lea     edi, [ecx + 4*esi]
        fadd    qword ptr [ebp + 0x1c]
        fstp    qword ptr [eax + 8*edi]
        lea     edi, [edx + 4*ecx]
        lea     ecx, [esi + 4*ecx]
        fmul    qword ptr [ebp + 0xc]
        fstp    qword ptr [eax + 8*edi]
        fld     qword ptr [ebp + 0x1c]
        fmul    qword ptr [ebp + 0x14]
        lea     edi, [edx + 4*edx]
        fadd    qword ptr [ebp - 0x20]
        fstp    qword ptr [eax + 8*edi]
        fld     qword ptr [ebp - 0x28]
        fmul    qword ptr [ebp + 0x14]
        lea     edi, [edx + 4*esi]
        lea     edx, [esi + 4*edx]
        fsub    qword ptr [ebp - 0x30]
        fstp    qword ptr [eax + 8*edi]
        fld     qword ptr [ebp + 0x14]
        fchs
        fstp    qword ptr [eax + 8*ecx]
        fld     qword ptr [ebp + 0xc]
        fmul    qword ptr [ebp - 0x18]
        lea     ecx, [esi + 4*esi]
        pop     edi
        pop     esi
        pop     ebx
        fstp    qword ptr [eax + 8*edx]
        fld     qword ptr [ebp + 0xc]
        fmul    qword ptr [ebp - 0x10]
        fstp    qword ptr [eax + 8*ecx]
        mov     esp, ebp
        pop     ebp
        ret
    }
}

// [0x006E3970] sub_006E3970 (31 bytes)
extern "C" void ext_006E3970();
extern "C" void __fastcall ext_006E3990(void* self, int edx_unused, int a1, int a2);
extern "C" __declspec(naked) void __fastcall fn_006E3970(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x40]
        test ecx, ecx
        je done
        call ext_006E3970
        mov ecx, dword ptr [esi + 0x40]
        push 0
        mov eax, dword ptr [ecx + 0x58]
        push eax
        call ext_006E3990
    done:
        pop esi
        ret
    }
}

// [0x006E5750] sub_006E5750 (96 bytes)
extern "C" void ext_006E5730();
extern "C" __declspec(naked) void __fastcall fn_006E5750(void* self) {
    __asm {
        push esi
        mov esi, ecx
        push edi
        mov eax, dword ptr [esi + 0x98]
        test eax, eax
        je loc_6e57ab
        mov ecx, dword ptr [esp + 0xc]
        mov edx, dword ptr [eax]
        mov edi, dword ptr [eax + 0x8]
        or edx, ecx
        inc edi
        mov dword ptr [eax], edx
        mov dword ptr [eax + 0x8], edi
        mov edx, dword ptr [esi + 0x5c]
        mov eax, dword ptr [esi + 0x98]
        inc edx
        mov dword ptr [esi + 0x5c], edx
        mov cl, byte ptr [eax + 0x40]
        test cl, cl
        je loc_6e57ab
        mov edi, dword ptr [eax + 0x10]
        dec edi
        js loc_6e57a4
    loc_6e5789:
        mov eax, dword ptr [esi + 0x98]
        mov ecx, dword ptr [eax + 0x38]
        mov edx, dword ptr [eax + 0x20]
        mov ecx, dword ptr [ecx + 4*edi]
        push ecx
        push eax
        push esi
        call dword ptr [edx + 4*edi]
        add esp, 0xc
        dec edi
        jns loc_6e5789
    loc_6e57a4:
        mov ecx, esi
        call ext_006E5730
    loc_6e57ab:
        pop edi
        pop esi
        ret 4
    }
}

// [0x006E7000] sub_006E7000 (96 bytes)
extern "C" void ext_00711DB0();

extern "C" __declspec(naked) void __fastcall fn_006E7000(void* self) {
    __asm {
        mov eax, ecx
        push esi
        xor esi, esi
        mov ecx, dword ptr [eax]
        test ecx, ecx
        je loc_6e7052
        call ext_00711DB0
        dec eax
        cmp eax, 0xe
        ja loc_6e705c
        xor ecx, ecx
        mov cl, byte ptr [eax + 0x6e7078]
        jmp dword ptr [4*ecx + 0x6e7060]
    loc_6e7025:
        mov esi, 0x4
        mov eax, esi
        pop esi
        ret
    loc_6e702e:
        mov esi, 0x1
        mov eax, esi
        pop esi
        ret
    loc_6e7037:
        mov esi, 0x2
        mov eax, esi
        pop esi
        ret
    loc_6e7040:
        mov esi, 0x3
        mov eax, esi
        pop esi
        ret
    loc_6e7049:
        mov esi, 0x5
        mov eax, esi
        pop esi
        ret
    loc_6e7052:
        mov eax, dword ptr [eax + 0x8]
        test eax, eax
        je loc_6e705c
        mov esi, dword ptr [eax + 0x4c]
    loc_6e705c:
        mov eax, esi
        pop esi
        ret
    }
}

// [0x006E8BF0] sub_006E8BF0 (111 bytes)
extern "C" void ext_006D2170();
extern "C" void ext_006E7440();

extern "C" __declspec(naked) void __fastcall fn_006E8BF0(void* self, int edx_unused, int a1) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp+8]
        push esi
        push edi
        mov edi, ecx
        test ebx, ebx
        jne L_nonzero
        push ebx
        lea ecx, [edi+94h]
        call ext_006E7440
        pop edi
        pop esi
        xor al, al
        pop ebx
        ret 4
    L_nonzero:
        mov edx, dword ptr [edi+4]
        lea ecx, [edi+4]
        xor eax, eax
        test edx, edx
        jle L_notfound
        mov esi, dword ptr [ecx+10h]
    L_loop:
        cmp dword ptr [esi], ebx
        je L_found
        inc eax
        add esi, 4
        cmp eax, edx
        jl L_loop
    L_notfound:
        mov edx, dword ptr [ecx]
        lea eax, [esp+10h]
        push eax
        push edx
        mov dword ptr [esp+18h], ebx
        call ext_006D2170
        pop edi
        pop esi
        mov al, 1
        pop ebx
        ret 4
    L_found:
        cmp eax, -1
        je L_notfound
        push 1
        lea ecx, [edi+94h]
        call ext_006E7440
        pop edi
        pop esi
        xor al, al
        pop ebx
        ret 4
    }
}

// [0x006EA6D0] sub_006EA6D0 (112 bytes)
extern "C" void ext_006B9D10();
extern "C" void ext_006D2370();
extern "C" void ext_006EA740();
extern "C" __declspec(naked) void __fastcall fn_006EA6D0(void* self) {
    __asm {
        push -1
        push 0x008b995f
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 4], esi
        lea ecx, [esi + 4]
        call ext_006B9D10
        lea ecx, [esi + 50h]
        mov dword ptr [esp + 10h], 0
        call ext_006D2370
        lea ecx, [esi + 70h]
        mov byte ptr [esp + 10h], 1
        call ext_006D2370
        lea ecx, [esi + 90h]
        mov byte ptr [esp + 10h], 2
        call ext_006D2370
        mov ecx, esi
        mov byte ptr [esp + 10h], 3
        call ext_006EA740
        mov ecx, dword ptr [esp + 8]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 10h
        ret
    }
}

// [0x006E8910] sub_006E8910 (159 bytes)
extern "C" __declspec(naked) void* __fastcall fn_006E8910(void* self) {
    __asm {
        push -0x1
        push 0x8b982b
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        push edi
        mov edi, ecx
        mov al, byte ptr [esp + 0x1c]
        sub esp, 0x48
        mov esi, esp
        lea ecx, [esp + 0x6c]
        mov dword ptr [esp + 0x50], esp
        push ecx
        lea ecx, [esi + 0x8]
        mov dword ptr [esp + 0x60], 0x0
        mov dword ptr [esp + 0x54], esi
        mov byte ptr [esi], al
        call ext_006D2390
        lea edx, [esp + 0x8c]
        lea ecx, [esi + 0x28]
        push edx
        mov byte ptr [esp + 0x60], 0x1
        call ext_006D2390
        mov eax, dword ptr [edi]
        mov ecx, edi
        push eax
        mov byte ptr [esp + 0x60], 0x0
        call ext_006E89B0
        mov esi, eax
        lea ecx, [esp + 0x44]
        mov dword ptr [esp + 0x14], 0x2
        call ext_006D80A0
        lea ecx, [esp + 0x24]
        mov dword ptr [esp + 0x14], 0xffffffff
        call ext_006D80A0
        mov ecx, dword ptr [esp + 0xc]
        mov eax, esi
        pop edi
        mov dword ptr fs:[0x0], ecx
        pop esi
        add esp, 0x10
        ret 0x48
    }
}

// [0x006E8C60] sub_006E8C60 (175 bytes)
extern "C" void ext_006D2200();
extern "C" void ext_006E7440();
extern "C" void ext_006E7460();

extern "C" __declspec(naked) unsigned char __fastcall fn_006E8C60(void* self, int edx_unused, void* a1) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 8]
        push esi
        test ebx, ebx
        push edi
        mov esi, ecx
        jne short loc_6E8C81
        push ebx
        lea ecx, [esi + 0x94]
        call ext_006E7440
        pop edi
        pop esi
        xor al, al
        pop ebx
        ret 4

    loc_6E8C81:
        mov ecx, dword ptr [esi + 4]
        lea edi, [esi + 4]
        xor eax, eax
        test ecx, ecx
        jle short loc_6E8CB6
        mov edx, dword ptr [edi + 0x10]

    loc_6E8C90:
        cmp dword ptr [edx], ebx
        je short loc_6E8CB1
        inc eax
        add edx, 4
        cmp eax, ecx
        jl short loc_6E8C90
        push 2
        lea ecx, [esi + 0x94]
        call ext_006E7440
        pop edi
        pop esi
        xor al, al
        pop ebx
        ret 4

    loc_6E8CB1:
        cmp eax, -1
        jne short loc_6E8CCB

    loc_6E8CB6:
        push 2
        lea ecx, [esi + 0x94]
        call ext_006E7440
        pop edi
        pop esi
        xor al, al
        pop ebx
        ret 4

    loc_6E8CCB:
        mov ecx, esi
        call ext_006E7460
        cmp ebx, eax
        jne short loc_6E8CDC
        mov dword ptr [esi], 0

    loc_6E8CDC:
        mov edx, dword ptr [edi]
        xor eax, eax
        test edx, edx
        jle short loc_6E8D07
        mov ecx, dword ptr [edi + 0x10]

    loc_6E8CE7:
        cmp dword ptr [ecx], ebx
        je short loc_6E8CFB
        inc eax
        add ecx, 4
        cmp eax, edx
        jl short loc_6E8CE7
        pop edi
        pop esi
        mov al, 1
        pop ebx
        ret 4

    loc_6E8CFB:
        test eax, eax
        jl short loc_6E8D07
        push eax
        mov ecx, edi
        call ext_006D2200

    loc_6E8D07:
        pop edi
        pop esi
        mov al, 1
        pop ebx
        ret 4
    }
}

// [0x006E3FA0] sub_006E3FA0 (287 bytes)
extern "C" void ext_006CE720();
extern "C" void ext_006CE800();
extern "C" void ext_006DEBA0();
extern "C" void ext_006DEEC0();
extern "C" void ext_006DEED0();
extern "C" void ext_006E40C0();

extern "C" __declspec(naked) void __fastcall fn_006E3FA0(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push ebx
        push esi
        push edi
        mov edi, dword ptr [esp + 0x10]
        mov esi, ecx
        mov eax, dword ptr [edi + 0x90]
        mov dword ptr [esi + 0x90], eax
        mov ecx, dword ptr [edi + 0x94]
        mov dword ptr [esi + 0x94], ecx
        mov edx, dword ptr [edi + 0x64]
        mov dword ptr [esi + 0x64], edx
        mov eax, dword ptr [edi + 0x68]
        mov ecx, edi
        mov dword ptr [esi + 0x68], eax
        lea eax, [esi + 0x70]
        sub ecx, esi
        mov edx, 4

    loc_6e3fd9:
        mov ebx, dword ptr [ecx + eax]
        mov dword ptr [eax], ebx
        mov ebx, dword ptr [ecx + eax + 4]
        mov dword ptr [eax + 4], ebx
        add eax, 8
        dec edx
        jne loc_6e3fd9
        mov ecx, edi
        call ext_006DEEC0
        test eax, eax
        je loc_6e405e
        mov al, byte ptr [esp + 0x14]
        test al, al
        je loc_6e401c
        push 1
        mov ecx, edi
        call ext_006DEEC0
        push eax
        mov ecx, esi
        call ext_006DEED0
        push 0
        push 0
        mov ecx, edi
        call ext_006DEED0
        jmp loc_6e405e

    loc_6e401c:
        mov ecx, dword ptr [esi + 0x38]
        test ecx, ecx
        jne loc_6e4053
        mov ecx, 0x7fffffff
        or eax, -1
        push 0
        mov ebx, 0x80000000
        push ecx
        mov edx, 1
        push eax
        push ebx
        push edx
        mov ecx, edi
        call ext_006DEEC0
        mov ecx, eax
        call ext_006CE800
        push eax
        mov ecx, esi
        call ext_006DEED0
        jmp loc_6e405e

    loc_6e4053:
        mov edx, dword ptr [edi + 0x38]
        push 1
        push edx
        call ext_006CE720

    loc_6e405e:
        mov eax, dword ptr [edi + 0x54]
        push 0
        push eax
        mov ecx, esi
        call ext_006DEBA0
        mov edx, dword ptr [esi]
        mov ecx, esi
        xor ebx, ebx
        call dword ptr [edx + 0x14]
        test eax, eax
        jle loc_6e40b9

    loc_6e4078:
        mov eax, dword ptr [esi]
        push ebx
        mov ecx, esi
        call dword ptr [eax + 0x18]
        test eax, eax
        je loc_6e40ad
        mov edx, dword ptr [edi]
        push ebx
        mov ecx, edi
        call dword ptr [edx + 0x18]
        test eax, eax
        je loc_6e40ad
        mov eax, dword ptr [esp + 0x14]
        mov edx, dword ptr [edi]
        push eax
        push ebx
        mov ecx, edi
        call dword ptr [edx + 0x18]
        push eax
        mov eax, dword ptr [esi]
        push ebx
        mov ecx, esi
        call dword ptr [eax + 0x18]
        mov ecx, eax
        call ext_006E40C0

    loc_6e40ad:
        mov edx, dword ptr [esi]
        mov ecx, esi
        inc ebx
        call dword ptr [edx + 0x14]
        cmp ebx, eax
        jl loc_6e4078

    loc_6e40b9:
        pop edi
        pop esi
        pop ebx
        ret 8
    }
}

// [0x006E0920] sub_006E0920 (32 bytes)
extern "C" void* __fastcall fn_006E0920(void* self) {
    int* p = (int*)self;
    p[4] = 0;
    p[2] = 0;
    p[0] = 0;
    p[5] = 0;
    p[3] = 0;
    p[1] = 0;
    return self;
}

// [0x006E5730] sub_006E5730 (32 bytes)
extern "C" void __fastcall fn_006E5730(void* self) {
    int* p = *(int**)((char*)self + 0x98);
    if (p != 0) {
        p[0] = 0;
        p[2] = 0;
        p[3] = 0;
    }
}

// [0x006E62A0] sub_006E62A0 (32 bytes)
extern "C" __declspec(naked) void __fastcall fn_006E62A0(void* self, int edx_unused, int value) {
    __asm {
        mov eax, dword ptr [ecx + 0x40]
        mov edx, dword ptr [esp + 0x4]
        test eax, eax
        mov dword ptr [ecx + 0x60], edx
        je done_6E62A0
    loop_6E62A0:
        mov dword ptr [eax + 0x60], edx
        mov eax, dword ptr [eax + 0x40]
        test eax, eax
        jne loop_6E62A0
    done_6E62A0:
        ret 4
    }
}

// [0x006E67C0] sub_006E67C0 (32 bytes)
extern "C" __declspec(naked) void __fastcall fn_006E67C0(void* self) {
    __asm {
        mov edx, dword ptr [esp + 0x4]
        mov eax, ecx
        mov ecx, dword ptr [esp + 0x8]
        mov dword ptr [eax], ecx
        xor ecx, ecx
        mov dword ptr [eax + 0x4], ecx
        mov dword ptr [eax + 0x8], ecx
        mov dword ptr [eax + 0xc], edx
        ret 0x8
    }
}

// [0x006E6AD0] sub_006E6AD0 (32 bytes)
extern "C" __declspec(naked) void __fastcall fn_006E6AD0(void* self, int edx_unused, double* out) {
    __asm {
        mov ecx, dword ptr [ecx]
        test ecx, ecx
        je done
        mov eax, dword ptr [ecx]
        call dword ptr [eax + 0x7c]
        mov ecx, dword ptr [esp + 0x4]
        fstp qword ptr [ecx]
done:
        ret 0x4
    }
}

// [0x006E6E40] sub_006E6E40 (32 bytes)
extern "C" bool __fastcall fn_006E6E40(void* self, int edx_unused, int a1) {
    bool r = false;
    if (a1 != 0) {
        int v = *(int*)self;
        if (v != 0 && a1 == v) r = true;
    }
    return r;
}

// [0x006E86C0] sub_006E86C0 (32 bytes)
extern "C" void __fastcall fn_006E86C0(void* self, int edx_unused, int a1, int a2) {
    char* obj = *(char**)self;
    *(int*)(obj + 0x60) = a1;
    *(int*)(obj + 0x64) = a2;
}

// [0x006E8A20] sub_006E8A20 (32 bytes)
extern "C" __declspec(naked) void __fastcall fn_006E8A20(int* self, int edx_unused, int a1) {
    __asm {
        mov eax, ecx
        mov ecx, dword ptr [esp + 0x4]
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 0x4], 0x1
        ret 0x4
    }
}

// [0x006EF810] sub_006EF810 (32 bytes)
extern "C" __declspec(naked) void __fastcall fn_006EF810(void* self, int edx_unused, unsigned int flags) {
    __asm {
        _emit 0x8b
        _emit 0x41
        _emit 0x34
        _emit 0x8b
        _emit 0x54
        _emit 0x24
        _emit 0x04
        _emit 0x24
        _emit 0xf8
        _emit 0x0b
        _emit 0xc2
        _emit 0x89
        _emit 0x41
        _emit 0x34
        _emit 0xc2
        _emit 0x04
        _emit 0x00
    }
}

// [0x006E5710] sub_006E5710 (32 bytes)
extern "C" void ext_006DEEB0();
extern "C" __declspec(naked) void __fastcall fn_006E5710(void* self, int edx_unused, int a1) {
    __asm {
        call ext_006DEEB0
        mov ecx, dword ptr [esp + 0x4]
        neg eax
        sbb eax, eax
        and eax, ecx
        ret 0x4
    }
}

// [0x006E9AE0] sub_006E9AE0 (32 bytes)
extern "C" void ext_006C95F0();
extern "C" void ext_006C9F70();
extern "C" void ext_006DC460();
extern "C" void ext_00872828();
extern "C" __declspec(naked) void __fastcall fn_006E9AE0(void* self) {
    __asm {
        mov ecx, dword ptr [ecx + 0x4]
        call ext_006DC460
        mov ecx, eax
        call ext_006C95F0
        mov ecx, eax
        call ext_006C9F70
        jmp ext_00872828
    }
}

// [0x006E5EC0] sub_006E5EC0 (32 bytes)
extern "C" void ext_006E5EE0();
extern "C" __declspec(naked) void __fastcall fn_006E5EC0(void* self) {
    __asm {
        mov eax, dword ptr [esp + 0Ch]
        mov ecx, dword ptr [esp + 8]
        mov edx, dword ptr [esp + 4]
        push eax
        push 1
        push ecx
        push 0
        push edx
        call ext_006E5EE0
        add esp, 14h
        ret
    }
}

// [0x006E6320] sub_006E6320 (32 bytes)
extern "C" __declspec(naked) void __fastcall fn_006E6320(void* self, int edx_unused, int a1) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        mov esi, ecx
        push edi
        call ext_006B9EC0
        push edi
        lea ecx, [esi + 0x4c]
        call ext_006B9EC0
        pop edi
        pop esi
        ret 4
    }
}

extern "C" void ext_006E7340();

// [0x006E7390] sub_006E7390 (32 bytes)
extern "C" __declspec(naked) void* __fastcall fn_006E7390(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        mov esi, ecx
        push eax
        call ext_006E7340
        mov eax, esi
        pop esi
        ret 0x4
    }
}

// [0x006E7440] sub_006E7440 (32 bytes)
extern "C" __declspec(naked) void __fastcall fn_006E7440(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        mov edx, dword ptr [ecx + 0x54]
        mov dword ptr [ecx], eax
        add ecx, 8
        mov eax, dword ptr [edx + 4*eax]
        push eax
        call ext_006B9EC0
        ret 4
    }
}

// [0x006E7410] sub_006E7410 (32 bytes)
extern "C" void ext_006E7430();
extern "C" void ext_006E7440();

extern "C" __declspec(naked) void __fastcall fn_006E7410(void* self, int edx_unused, int a1, int a2) {
    __asm {
        mov eax, dword ptr [esp+4]
        push esi
        mov esi, ecx
        push eax
        call ext_006E7440
        mov ecx, dword ptr [esp+0xc]
        push ecx
        mov ecx, esi
        call ext_006E7430
        pop esi
        ret 8
    }
}

// [0x006E7470] sub_006E7470 (32 bytes)
extern "C" void ext_006B9EC0();

extern "C" __declspec(naked) void __fastcall fn_006E7470(void* self) {
    __asm {
        mov dword ptr [ecx], -1
        push 0b5d2c0h
        add ecx, 8h
        call ext_006B9EC0
        ret
    }
}

// [0x006E67E0] sub_006E67E0 (32 bytes)
extern "C" void ext_006A5C5C();
extern "C" void __fastcall ext_006E6800(void* self);

extern "C" __declspec(naked) void __fastcall fn_006E67E0(void* self) {
    __asm {
        push esi
        mov esi, dword ptr [ecx + 0x8]
        test esi, esi
        je done_006E67E0
        mov ecx, esi
        call ext_006E6800
        push esi
        call ext_006A5C5C
        add esp, 4
    done_006E67E0:
        pop esi
        ret
    }
}

// [0x006E0090] sub_006E0090 (48 bytes)
extern "C" __declspec(naked) void __cdecl fn_006E0090(void* dst, void* src) {
    __asm {
        mov ecx, dword ptr [esp + 0x8]
        mov eax, dword ptr [esp + 0x4]
        fld qword ptr [ecx]
        fchs
        fstp qword ptr [eax]
        fld qword ptr [ecx + 0x8]
        fchs
        fstp qword ptr [eax + 0x8]
        fld qword ptr [ecx + 0x10]
        fchs
        fstp qword ptr [eax + 0x10]
        mov edx, dword ptr [ecx + 0x18]
        mov dword ptr [eax + 0x18], edx
        mov ecx, dword ptr [ecx + 0x1c]
        mov dword ptr [eax + 0x1c], ecx
        ret
    }
}

// [0x006E00C0] sub_006E00C0 (48 bytes)
extern "C" __declspec(naked) void __cdecl fn_006E00C0(double* dst, const double* src, double s) {
    __asm {
        fld     qword ptr [esp + 0xc]
        mov     ecx, dword ptr [esp + 0x8]
        mov     eax, dword ptr [esp + 0x4]
        fld     st(0)
        fmul    qword ptr [ecx]
        fstp    qword ptr [eax]
        fld     st(0)
        fmul    qword ptr [ecx + 0x8]
        fstp    qword ptr [eax + 0x8]
        fld     st(0)
        fmul    qword ptr [ecx + 0x10]
        fstp    qword ptr [eax + 0x10]
        fmul    qword ptr [ecx + 0x18]
        fstp    qword ptr [eax + 0x18]
        ret
    }
}

// [0x006E3660] sub_006E3660 (48 bytes)
extern "C" __declspec(naked) void __cdecl fn_006E3660(double* dst, const double* a, const double* b) {
    __asm {
        mov ecx, dword ptr [esp + 0x8]
        mov edx, dword ptr [esp + 0xc]
        mov eax, dword ptr [esp + 0x4]
        fld qword ptr [ecx]
        fadd qword ptr [edx]
        fstp qword ptr [eax]
        fld qword ptr [ecx + 0x8]
        fadd qword ptr [edx + 0x8]
        fstp qword ptr [eax + 0x8]
        fld qword ptr [ecx + 0x10]
        fadd qword ptr [edx + 0x10]
        fstp qword ptr [eax + 0x10]
        fld qword ptr [ecx + 0x18]
        fadd qword ptr [edx + 0x18]
        fstp qword ptr [eax + 0x18]
        ret
    }
}

// [0x006E3760] sub_006E3760 (48 bytes)
extern "C" __declspec(naked) void __cdecl fn_006E3760(double* dst, const double* a, const double* b, int n) {
    __asm {
        mov eax, dword ptr [esp + 4]
        mov ecx, dword ptr [esp + 10h]
        push esi
        lea esi, [eax + ecx*8]
        cmp eax, esi
        jae done
        mov edx, dword ptr [esp + 10h]
        mov ecx, dword ptr [esp + 0Ch]
    loop_top:
        fld qword ptr [ecx]
        fadd qword ptr [edx]
        add eax, 8
        add ecx, 8
        add edx, 8
        cmp eax, esi
        fstp qword ptr [eax - 8]
        jb loop_top
    done:
        pop esi
        ret
    }
}

// [0x006E3790] sub_006E3790 (48 bytes)
extern "C" __declspec(naked) void __cdecl fn_006E3790(double* dst, const double* src, double scalar, int n) {
    __asm {
        mov eax, dword ptr [esp + 4]
        mov ecx, dword ptr [esp + 0x14]
        lea edx, [eax + 8*ecx]
        cmp eax, edx
        jae done
        mov ecx, dword ptr [esp + 8]
loop_top:
        fld qword ptr [esp + 0xc]
        fmul qword ptr [ecx]
        add eax, 8
        add ecx, 8
        cmp eax, edx
        fstp qword ptr [eax - 8]
        jb loop_top
done:
        ret
    }
}

// [0x006E6850] sub_006E6850 (48 bytes)
extern "C" __declspec(naked) void __fastcall fn_006E6850(void* self, int edx_unused, int a1) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi]
        test ecx, ecx
        je done
        mov edx, dword ptr [esp + 0x8]
        mov eax, dword ptr [ecx]
        and edx, 0xff
        push edx
        call dword ptr [eax + 0x78]
        mov ecx, dword ptr [esi + 0x4]
        test ecx, ecx
        je done
        mov eax, dword ptr [ecx]
        push esi
        call dword ptr [eax + 0x128]
done:
        pop esi
        ret 4
    }
}

// [0x006E6970] sub_006E6970 (48 bytes)
// [0x006E6970]
extern "C" __declspec(naked) void __fastcall fn_006E6970(void* self, int edx_unused, int a1) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi]
        test ecx, ecx
        je done_6E6970
        mov edx, dword ptr [esp + 0x8]
        mov eax, dword ptr [ecx]
        push edx
        call dword ptr [eax + 0x78]
        mov ecx, dword ptr [esi + 0x4]
        test ecx, ecx
        je done_6E6970
        mov eax, dword ptr [ecx]
        push esi
        call dword ptr [eax + 0x128]
done_6E6970:
        pop esi
        ret 0x4
    }
}

// [0x006E7190] sub_006E7190 (48 bytes)
extern "C" void ext_00711BB0();
extern "C" int mem_00925284;
extern "C" __declspec(naked) void __fastcall fn_006E7190(void* self) {
    __asm {
        mov eax, ecx
        mov ecx, dword ptr [mem_00925284]
        fld qword ptr [ecx]
        mov ecx, dword ptr [eax]
        test ecx, ecx
        je short L_006E71A7
        fstp st(0)
        jmp ext_00711BB0
L_006E71A7:
        mov eax, dword ptr [eax + 8]
        test eax, eax
        je short L_006E71B6
        fstp st(0)
        fld qword ptr [eax + 0xa8]
L_006E71B6:
        ret
    }
}

// [0x006E85D0] sub_006E85D0 (48 bytes)
extern "C" __declspec(naked) void __fastcall fn_006E85D0(void* self, int edx_unused, int a1) {
    __asm {
        push ecx
        mov eax, ecx
        push esi
        push edi
        mov ecx, 0x8
        mov esi, dword ptr [eax]
        mov eax, dword ptr [esp + 0x10]
        mov edi, eax
        mov dword ptr [esp + 0x8], 0x0
        rep movsd
        pop edi
        pop esi
        pop ecx
        ret 4
    }
}

// [0x006E8670] sub_006E8670 (48 bytes)
extern "C" __declspec(naked) void __fastcall fn_006E8670(void* self, int edx_unused, void* dst) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0x8]
        push esi
        mov esi, dword ptr [ecx]
        push edi
        add esi, 0x28
        mov ecx, 0x8
        mov edi, eax
        mov dword ptr [esp + 0x8], 0x0
        rep movsd
        pop edi
        pop esi
        pop ecx
        ret 0x4
    }
}

// [0x006E72A0] sub_006E72A0 (48 bytes)
extern "C" void ext_006D2130();
extern "C" int mem_00993CE0;

extern "C" __declspec(naked) void __fastcall fn_006E72A0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        push edi
        push 4
        lea edi, [esi + 4]
        push 0x10
        mov ecx, edi
        call ext_006D2130
        lea eax, [edi + 0x10]
        mov dword ptr [edi + 0x14], eax
        mov dword ptr [esi], offset mem_00993CE0
        mov eax, esi
        pop edi
        pop esi
        ret
    }
}

// [0x006E8E20] sub_006E8E20 (48 bytes)
extern "C" __declspec(naked) void __fastcall fn_006E8E20(void* self) {
    __asm {
        mov eax, dword ptr [esp + 4]
        test eax, eax
        jl short L_006E8E38
        cmp eax, dword ptr [ecx + 0x1c]
        jge short L_006E8E38
        mov ecx, dword ptr [ecx + 0x2c]
        mov edx, dword ptr [ecx + 4*eax]
        mov eax, dword ptr [edx]
        ret 4
L_006E8E38:
        push 3
        add ecx, 0x94
        call ext_006E7440
        xor eax, eax
        ret 4
    }
}

// [0x006E9000] sub_006E9000 (48 bytes)
extern "C" __declspec(naked) void __fastcall fn_006E9000(void* self) {
    __asm {
        mov eax, dword ptr [esp + 4]
        test eax, eax
        jl short L_006E9018
        cmp eax, dword ptr [ecx + 0x34]
        jge short L_006E9018
        mov ecx, dword ptr [ecx + 0x44]
        mov edx, dword ptr [ecx + 4*eax]
        mov eax, dword ptr [edx]
        ret 4
L_006E9018:
        push 3
        add ecx, 0x94
        call ext_006E7440
        xor eax, eax
        ret 4
    }
}

// [0x006E91E0] sub_006E91E0 (48 bytes)
extern "C" __declspec(naked) void __fastcall fn_006E91E0(void* self) {
    __asm {
        mov eax, dword ptr [esp + 4]
        test eax, eax
        jl short L_006E91F8
        cmp eax, dword ptr [ecx + 0x4c]
        jge short L_006E91F8
        mov ecx, dword ptr [ecx + 0x5c]
        mov edx, dword ptr [ecx + 4*eax]
        mov eax, dword ptr [edx]
        ret 4
L_006E91F8:
        push 3
        add ecx, 0x94
        call ext_006E7440
        xor eax, eax
        ret 4
    }
}

// [0x006E9430] sub_006E9430 (48 bytes)
extern "C" __declspec(naked) void __fastcall fn_006E9430(void* self) {
    __asm {
        mov eax, dword ptr [esp + 4]
        test eax, eax
        jl short L_006E9448
        cmp eax, dword ptr [ecx + 0x64]
        jge short L_006E9448
        mov ecx, dword ptr [ecx + 0x74]
        mov edx, dword ptr [ecx + 4*eax]
        mov eax, dword ptr [edx]
        ret 4
L_006E9448:
        push 3
        add ecx, 0x94
        call ext_006E7440
        xor eax, eax
        ret 4
    }
}

// [0x006E40C0] sub_006E40C0 (48 bytes)
extern "C" void ext_006E3FA0();
extern "C" void ext_006E40F0();
extern "C" __declspec(naked) void __fastcall fn_006E40C0(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0x8]
        push esi
        push edi
        mov edi, dword ptr [esp + 0x14]
        mov esi, ecx
        push edi
        push ebx
        call ext_006E3FA0
        push edi
        push ebx
        mov ecx, esi
        call ext_006E40F0
        pop edi
        pop esi
        pop ebx
        ret 0x8
    }
}

// [0x006E8440] sub_006E8440 (48 bytes)
extern "C" void ext_006A5C5C();
extern "C" void __fastcall ext_006E8470(void* self);

extern "C" __declspec(naked) void __fastcall fn_006E8440(void* self) {
    __asm {
        push esi
        push edi
        mov edi, ecx
        mov esi, dword ptr [edi]
        test esi, esi
        je done_006E8440
        mov ecx, esi
        call ext_006E8470
        push esi
        call ext_006A5C5C
        add esp, 4
    done_006E8440:
        mov dword ptr [edi], 0
        pop edi
        pop esi
        ret
    }
}

// [0x006E0050] sub_006E0050 (64 bytes)
extern "C" __declspec(naked) void __cdecl fn_006E0050(void* out, double d, int a0, int a1, int a2, int a3, int a4, int a5) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        mov ecx, dword ptr [esp + 0x10]
        mov edx, dword ptr [esp + 0x14]
        fld qword ptr [esp + 0x8]
        mov dword ptr [eax + 0x8], ecx
        mov ecx, dword ptr [esp + 0x18]
        fstp qword ptr [eax]
        mov dword ptr [eax + 0xc], edx
        mov edx, dword ptr [esp + 0x1c]
        mov dword ptr [eax + 0x10], ecx
        mov ecx, dword ptr [esp + 0x20]
        mov dword ptr [eax + 0x14], edx
        mov edx, dword ptr [esp + 0x24]
        mov dword ptr [eax + 0x18], ecx
        mov dword ptr [eax + 0x1c], edx
        ret
    }
}

// [0x006E8820] sub_006E8820 (64 bytes)
extern "C" __declspec(naked) void* __fastcall fn_006E8820(void* self, int edx_unused, int a1) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        mov esi, ecx
        test edi, edi
        jl fail
        call ext_006E8810
        cmp edi, eax
        jge fail
        mov eax, dword ptr [esi]
        lea ecx, [edi + 8*edi]
        pop edi
        pop esi
        mov edx, dword ptr [eax + 0x88]
        lea eax, [edx + 8*ecx]
        ret 4
    fail:
        mov ecx, dword ptr [esi]
        push 0
        add ecx, 0x90
        call ext_006E7440
        pop edi
        xor eax, eax
        pop esi
        ret 4
    }
}

// [0x006E7150] sub_006E7150 (64 bytes)
extern "C" void ext_00711B50();

extern "C" __declspec(naked) void __fastcall fn_006E7150(void* self) {
    __asm {
        mov eax, dword ptr [ecx + 0x8]
        test eax, eax
        je skip1
        mov edx, dword ptr [esp + 0x4]
        push esi
        mov esi, dword ptr [esp + 0xc]
        mov dword ptr [eax + 0xa8], edx
        mov dword ptr [eax + 0xac], esi
        pop esi
    skip1:
        mov ecx, dword ptr [ecx]
        test ecx, ecx
        je skip2
        mov eax, dword ptr [esp + 0x8]
        mov edx, dword ptr [esp + 0x4]
        push eax
        push edx
        call ext_00711B50
    skip2:
        ret 8
    }
}

// [0x006EA300] sub_006EA300 (64 bytes)
extern "C" void ext_006E9500();
extern "C" void ext_006E9580();
extern "C" void ext_006EA340();
extern "C" __declspec(naked) void __fastcall fn_006EA300(void* self, int edx_unused, int a1) {
    __asm {
        push esi
        push edi
        mov esi, ecx
        call ext_006EA340
        mov edi, dword ptr [esp + 0xc]
        cmp eax, edi
        je done
        mov ecx, dword ptr [esi + 0xf0]
        test ecx, ecx
        je skip1
        push esi
        call ext_006E9580
skip1:
        test edi, edi
        mov dword ptr [esi + 0xf0], edi
        je done
        push esi
        mov ecx, edi
        call ext_006E9500
done:
        pop edi
        mov al, 1
        pop esi
        ret 4
    }
}

// [0x006E6260] sub_006E6260 (64 bytes)
extern "C" void ext_006DECD0();
extern "C" void __fastcall ext_006E3990(void* self, int edx_unused, int a1, int a2);
extern "C" void ext_006E5750();
extern "C" void ext_006E6260();

extern "C" __declspec(naked) void __fastcall fn_006E6260(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x40]
        mov byte ptr [esi + 0x10], al
        test ecx, ecx
        je skip_child
        push eax
        call ext_006E6260
skip_child:
        push 1
        push 0
        mov ecx, esi
        call ext_006DECD0
        mov ecx, eax
        call ext_006E3990
        push 0x10
        mov ecx, esi
        call ext_006DECD0
        mov ecx, eax
        call ext_006E5750
        pop esi
        ret 4
    }
}

// [0x006E86F0] sub_006E86F0 (80 bytes)
extern "C" __declspec(naked) void __fastcall fn_006E86F0(void* self, int edx_unused, double a1) {
    __asm {
        mov ecx, dword ptr [ecx]
        fld qword ptr [esp + 4]
        fcomp qword ptr [ecx + 0x58]
        fnstsw ax
        test ah, 0x41
        jne L_other
        mov eax, dword ptr [ecx + 0x58]
        mov dword ptr [ecx + 0x50], eax
        mov edx, dword ptr [ecx + 0x5c]
        mov dword ptr [ecx + 0x54], edx
        ret 8
    L_other:
        fld qword ptr [esp + 4]
        fcomp qword ptr [mem_0092A278]
        fnstsw ax
        test ah, 0x1
        je L_copy
        xor eax, eax
        mov dword ptr [ecx + 0x50], eax
        mov dword ptr [ecx + 0x54], eax
        ret 8
    L_copy:
        mov eax, dword ptr [esp + 4]
        mov edx, dword ptr [esp + 8]
        mov dword ptr [ecx + 0x50], eax
        mov dword ptr [ecx + 0x54], edx
        ret 8
    }
}

// [0x006E0940] sub_006E0940 (80 bytes)
extern "C" double mem_00993828;
extern "C" __declspec(naked) void __cdecl fn_006E0940(void* out, void* in) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        mov ecx, dword ptr [esp + 0x4]
        fld qword ptr [eax]
        fmul qword ptr [eax + 0x8]
        fld qword ptr [eax + 0x10]
        fmul qword ptr [eax + 0x18]
        fsubp st(1), st
        fadd st(0), st
        fstp qword ptr [ecx]
        fld qword ptr [eax]
        fld qword ptr [eax + 0x10]
        fld st(1)
        fmul st, st(2)
        fsubr qword ptr [mem_00993828]
        fld st(1)
        fmul st, st(2)
        fsubp st(1), st
        fadd st(0), st
        fstp qword ptr [ecx + 0x8]
        fstp st(0)
        fstp st(0)
        fld qword ptr [eax + 0x10]
        fmul qword ptr [eax + 0x8]
        fld qword ptr [eax + 0x18]
        fmul qword ptr [eax]
        faddp st(1), st
        fadd st(0), st
        fstp qword ptr [ecx + 0x10]
        ret
    }
}

// [0x006E87B0] sub_006E87B0 (80 bytes)
extern "C" __declspec(naked) void __fastcall fn_006E87B0(void* self, int edx_unused, double a1) {
    __asm {
        fld qword ptr [esp + 4]
        fcomp qword ptr [mem_0092A278]
        fnstsw ax
        test ah, 1
        je L_006E87CF
        fld qword ptr [mem_0092A278]
        mov eax, dword ptr [ecx]
        fstp qword ptr [eax + 0x70]
        ret 8
L_006E87CF:
        fld qword ptr [esp + 4]
        fcomp qword ptr [mem_00993D00]
        fnstsw ax
        test ah, 0x41
        jne L_006E87EE
        fld qword ptr [mem_00993D00]
        mov eax, dword ptr [ecx]
        fstp qword ptr [eax + 0x70]
        ret 8
L_006E87EE:
        fld qword ptr [esp + 4]
        mov eax, dword ptr [ecx]
        fstp qword ptr [eax + 0x70]
        ret 8
    }
}

// [0x006E6800] sub_006E6800 (80 bytes)
extern "C" void ext_006B9D70();
extern "C" int mem_008C1C88;
extern "C" __declspec(naked) void __fastcall fn_006E6800(void* self) {
    __asm {
        push -1
        push offset mem_008C1C88
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 4], esi
        lea ecx, [esi + 0x50]
        mov dword ptr [esp + 0x10], 0
        call ext_006B9D70
        mov ecx, esi
        mov dword ptr [esp + 0x10], -1
        call ext_006B9D70
        mov ecx, dword ptr [esp + 8]
        pop esi
        mov fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x006E7340] sub_006E7340 (80 bytes)
extern "C" void ext_006E7460();
extern "C" __declspec(naked) void __fastcall fn_006E7340(void* self, int edx_unused, int a1) {
    __asm {
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov eax, dword ptr [esi]
        call dword ptr [eax + 0x10]
        mov ebx, dword ptr [esp + 0x10]
        xor edi, edi
        mov eax, dword ptr [ebx + 0x4]
        test eax, eax
        jle L_done
        push ebp
    L_loop:
        mov ecx, dword ptr [ebx + 0x14]
        mov ecx, dword ptr [ecx + edi*4]
        mov ebp, dword ptr [ecx + 0x4c]
        call ext_006E7460
        mov edx, dword ptr [esi]
        push ebp
        push eax
        mov eax, dword ptr [esi + 0x4]
        push eax
        mov ecx, esi
        call dword ptr [edx + 0x8]
        mov eax, dword ptr [ebx + 0x4]
        inc edi
        cmp edi, eax
        jl L_loop
        pop ebp
    L_done:
        pop edi
        pop esi
        pop ebx
        ret 4
    }
}

// [0x006E8580] sub_006E8580 (80 bytes)
extern "C" void ext_0077FD70();
extern "C" __declspec(naked) void __fastcall fn_006E8580(void* self, int edx_unused, int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x008b9338
        push eax
        mov dword ptr fs:[0], esp
        mov ecx, dword ptr [ecx]
        lea eax, [esp + 0x10]
        push eax
        mov dword ptr [esp + 0xc], 0
        call ext_0077FD70
        lea ecx, [esp + 0x10]
        mov dword ptr [esp + 0x8], 0xffffffff
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
    }
}

// [0x006E8620] sub_006E8620 (80 bytes)
extern "C" void ext_0077FD70();
extern "C" __declspec(naked) void __fastcall fn_006E8620(void* self, int edx_unused) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8b9338
        push eax
        mov dword ptr fs:[0], esp
        mov ecx, dword ptr [ecx]
        lea eax, [esp + 0x10]
        push eax
        add ecx, 0x28
        mov dword ptr [esp + 0xc], 0
        call ext_0077FD70
        lea ecx, [esp + 0x10]
        mov dword ptr [esp + 0x8], -1
        call ext_006D80A0
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x00
        mov dword ptr fs:[0], ecx
        add esp, 0xc
        ret 0x20
        __asm _emit 0x90
        __asm _emit 0x90
    }
}

// [0x006E6DE0] sub_006E6DE0 (96 bytes)
extern "C" void ext_0071E680();
extern "C" __declspec(naked) void __fastcall fn_006E6DE0(void* self, int edx_unused, int a1) {
    __asm {
        mov edx, ecx
        xor al, al
        mov ecx, dword ptr [edx]
        test ecx, ecx
        je L_else_6E6DE0
        mov edx, dword ptr [esp + 4]
        dec edx
        je L_case1_6E6DE0
        dec edx
        je L_case2_6E6DE0
        sub edx, 2
        jne L_ret_6E6DE0
        call ext_0071E680
        mov eax, dword ptr [eax]
        shr eax, 7
        and al, 1
        ret 4
    L_case2_6E6DE0:
        call ext_0071E680
        mov eax, dword ptr [eax]
        shr eax, 6
        and al, 1
        ret 4
    L_case1_6E6DE0:
        call ext_0071E680
        mov eax, dword ptr [eax]
        shr eax, 1
        and al, 1
        ret 4
    L_else_6E6DE0:
        mov edx, dword ptr [edx + 8]
        test edx, edx
        je L_ret_6E6DE0
        mov eax, dword ptr [esp + 4]
        mov ecx, dword ptr [edx + 0xb0]
        __asm _emit 0x85
        __asm _emit 0xc8
        setne al
    L_ret_6E6DE0:
        ret 4
    }
}

// [0x006E73B0] sub_006E73B0 (96 bytes)
extern "C" __declspec(naked) void __fastcall fn_006E73B0(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push -1
        push 0x8b967b
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        mov eax, dword ptr [esp + 0x18]
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        lea ecx, [esi + 0x8]
        mov dword ptr [esi + 0x4], eax
        call ext_006B9D10
        mov ecx, dword ptr [esp + 0x18]
        mov dword ptr [esp + 0x10], 0
        mov dword ptr [esi + 0x54], ecx
        mov ecx, esi
        call ext_006E7470
        mov ecx, dword ptr [esp + 0x8]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 8
    }
}

// [0x006E62C0] sub_006E62C0 (96 bytes)
extern "C" void ext_006B9D10();
extern "C" void ext_006E6320();
extern "C" __declspec(naked) void __fastcall fn_006E62C0(void* self, int edx_unused, int a1) {
    __asm {
        push -1
        push 0x8bb3e3
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 4], esi
        call ext_006B9D10
        lea ecx, [esi + 0x4c]
        mov dword ptr [esp + 0x10], 0
        call ext_006B9D10
        mov eax, dword ptr [esp + 0x18]
        mov ecx, esi
        push eax
        mov byte ptr [esp + 0x14], 1
        call ext_006E6320
        mov ecx, dword ptr [esp + 8]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 4
    }
}

// [0x006E6D70] sub_006E6D70 (112 bytes)
extern "C" void ext_0071E680();
extern "C" void ext_00710F80();
extern "C" __declspec(naked) void __fastcall fn_006E6D70(void* self, int edx_unused, int a1, int a2) {
    __asm {
        mov eax, dword ptr [ecx + 0x8]
        mov edx, dword ptr [esp + 0x4]
        push ebx
        mov ebx, dword ptr [esp + 0xc]
        test eax, eax
        push esi
        je L_6DA1
        test bl, bl
        je L_6D8D
        or dword ptr [eax + 0xb0], edx
        jmp L_6DA1
L_6D8D:
        mov esi, edx
        push edi
        mov edi, dword ptr [eax + 0xb0]
        not esi
        and edi, esi
        mov dword ptr [eax + 0xb0], edi
        pop edi
L_6DA1:
        mov ecx, dword ptr [ecx]
        test ecx, ecx
        je L_6DCF
        xor eax, eax
        test dl, 0x1
        je L_6DB3
        mov eax, 0x2
L_6DB3:
        test dl, 0x2
        je L_6DBA
        or al, 0x40
L_6DBA:
        test dl, 0x4
        je L_6DC1
        or al, 0x80
L_6DC1:
        push ebx
        push eax
        call ext_0071E680
        mov ecx, eax
        call ext_00710F80
L_6DCF:
        pop esi
        pop ebx
        ret 8
    }
}

// [0x006E9610] sub_006E9610 (112 bytes)
extern "C" int __fastcall ext_00710300(void* ecx_arg);

extern "C" __declspec(naked) int __fastcall fn_006E9610(void* self, int edx_unused, int n) {
    __asm {
        push ecx
        push ebp
        mov ebp, dword ptr [esp + 0xc]
        push esi
        xor esi, esi
        push edi
        cmp ebp, 3
        mov edi, ecx
        mov dword ptr [esp + 0xc], esi
        jl L_6E9610_a
        pop edi
        pop esi
        xor eax, eax
        pop ebp
        pop ecx
        ret 4
L_6E9610_a:
        cmp ebp, esi
        push ebx
        jne L_6E9610_b
        mov eax, dword ptr [edi + 0x7c]
        pop ebx
        pop edi
        pop esi
        mov dword ptr [esp + 4], eax
        pop ebp
        pop ecx
        ret 4
L_6E9610_b:
        mov ebx, dword ptr [edi + 0x7c]
        cmp ebx, esi
        jle L_6E9610_d
L_6E9610_c:
        mov ecx, dword ptr [edi + 0x8c]
        mov edx, dword ptr [ecx + 4 * esi]
        mov ecx, dword ptr [edx]
        call ext_00710300
        cmp eax, ebp
        jne L_6E9610_e
        inc dword ptr [esp + 0x10]
L_6E9610_e:
        inc esi
        cmp esi, ebx
        jl L_6E9610_c
L_6E9610_d:
        mov eax, dword ptr [esp + 0x10]
        pop ebx
        pop edi
        pop esi
        pop ebp
        pop ecx
        ret 4
    }
}

// [0x006E72D0] sub_006E72D0 (112 bytes)
extern "C" void ext_006D2130();
extern "C" void ext_006E7340();
extern "C" __declspec(naked) void __fastcall fn_006E72D0(void* self) {
    __asm {
        push -1
        push 008b9658h
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        push edi
        push 4
        lea edi, [esi + 4]
        push 10h
        mov ecx, edi
        mov dword ptr [esp + 10h], esi
        call ext_006D2130
        lea eax, [edi + 10h]
        mov dword ptr [edi + 14h], eax
        mov ecx, dword ptr [esp + 1ch]
        mov dword ptr [esp + 14h], 0
        push ecx
        mov ecx, esi
        mov dword ptr [esi], 00993ce0h
        call ext_006E7340
        mov ecx, dword ptr [esp + 0ch]
        mov eax, esi
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 10h
        ret 4
    }
}

// [0x006E8470] sub_006E8470 (112 bytes)
extern "C" void ext_007641C0();
extern "C" void ext_006D2160();
extern "C" void ext_006D80A0();
extern "C" __declspec(naked) void __fastcall fn_006E8470(void* self) {
    __asm {
        push -1
        push 0x8b97fe
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
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        lea ecx, [esi + 0x90]
        mov dword ptr [esp + 0x10], 0x2
        call ext_007641C0
        lea ecx, [esi + 0x78]
        mov byte ptr [esp + 0x10], 0x1
        call ext_006D2160
        lea ecx, [esi + 0x28]
        mov byte ptr [esp + 0x10], 0x0
        call ext_006D80A0
        mov ecx, esi
        mov dword ptr [esp + 0x10], 0xffffffff
        call ext_006D80A0
        mov ecx, dword ptr [esp + 0x8]
        pop esi
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

// [0x006E89B0] sub_006E89B0 (112 bytes)
extern "C" void ext_006D2170();
extern "C" void ext_006D80A0();
extern "C" __declspec(naked) void __fastcall fn_006E89B0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8b9850
        push eax
        mov dword ptr fs:[0], esp
        push esi
        mov edx, dword ptr [esp + 0x14]
        lea eax, [esp + 0x18]
        push eax
        push edx
        mov dword ptr [esp + 0x14], 0
        call ext_006D2170
        mov esi, eax
        lea ecx, [esp + 0x40]
        mov dword ptr [esp + 0xc], 1
        call ext_006D80A0
        lea ecx, [esp + 0x20]
        mov dword ptr [esp + 0xc], -1
        call ext_006D80A0
        mov ecx, dword ptr [esp + 0x4]
        mov eax, esi
        mov dword ptr fs:[0], ecx
        pop esi
        add esp, 0xc
        ret 0x4c
    }
}

// [0x006EA740] sub_006EA740 (128 bytes)
extern "C" void ext_006B9960();
extern "C" void ext_00787430();
extern "C" __declspec(naked) void __fastcall fn_006EA740(void* self) {
    __asm {
        push esi
        mov esi, ecx
        lea ecx, [esi + 0x4]
        mov dword ptr [esi], 0x0
        call ext_006B9960
        push 0x3ff00000
        push 0x0
        push 0x0
        push 0x0
        push 0x0
        push 0x0
        push 0x0
        push 0x0
        lea ecx, [esi + 0x50]
        call ext_00787430
        push 0x3ff00000
        push 0x0
        push 0x0
        push 0x0
        push 0x0
        push 0x0
        push 0x0
        push 0x0
        lea ecx, [esi + 0x70]
        call ext_00787430
        push 0x3ff00000
        push 0x0
        push 0x3ff00000
        push 0x0
        push 0x3ff00000
        push 0x0
        push 0x3ff00000
        push 0x0
        lea ecx, [esi + 0x90]
        call ext_00787430
        mov dword ptr [esi + 0xb0], 0x0
        pop esi
        ret
    }
}

// [0x006E90D0] sub_006E90D0 (128 bytes)
extern "C" void ext_006A5C62();
extern "C" void ext_006D2170();
extern "C" void ext_006E8A20();

extern "C" __declspec(naked) void __fastcall fn_006E90D0(void* self, int edx_unused, int a1) {
    __asm {
        mov edx, dword ptr [ecx + 0x34]
        push ebx
        push ebp
        push esi
        mov ebx, dword ptr [esp + 0x10]
        push edi
        lea edi, [ecx + 0x34]
        xor eax, eax
        test edx, edx
        jle notfound
        mov ecx, dword ptr [ecx + 0x44]
        mov esi, ecx
    scan:
        mov ebp, dword ptr [esi]
        cmp dword ptr [ebp], ebx
        je found
        inc eax
        add esi, 4
        cmp eax, edx
        jl scan
    notfound:
        push 8
        call ext_006A5C62
        add esp, 4
        test eax, eax
        je zero
        push ebx
        mov ecx, eax
        call ext_006E8A20
        jmp done
    found:
        mov eax, dword ptr [ecx + 4 * eax]
        pop edi
        pop esi
        pop ebp
        mov ecx, dword ptr [eax + 4]
        pop ebx
        inc ecx
        mov dword ptr [eax + 4], ecx
        mov al, 1
        ret 4
    zero:
        xor eax, eax
    done:
        mov ecx, dword ptr [edi]
        mov dword ptr [esp + 0x14], eax
        lea eax, [esp + 0x14]
        push eax
        push ecx
        mov ecx, edi
        call ext_006D2170
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        ret 4
    }
}

// [0x006E9500] sub_006E9500 (128 bytes)
extern "C" void ext_006A5C62();
extern "C" void ext_006D2170();
extern "C" void ext_006E8A20();
extern "C" __declspec(naked) void __fastcall fn_006E9500(void* self, int edx_unused, int a1) {
    __asm {
        mov edx, dword ptr [ecx + 0x64]
        push ebx
        push ebp
        push esi
        mov ebx, dword ptr [esp + 0x10]
        push edi
        lea edi, [ecx + 0x64]
        xor eax, eax
        test edx, edx
        jle L_notfound
        mov ecx, dword ptr [ecx + 0x74]
        mov esi, ecx
    L_loop:
        mov ebp, dword ptr [esi]
        cmp dword ptr [ebp], ebx
        je L_found
        inc eax
        add esi, 4
        cmp eax, edx
        jl L_loop
    L_notfound:
        push 8
        call ext_006A5C62
        add esp, 4
        test eax, eax
        je L_zero
        push ebx
        mov ecx, eax
        call ext_006E8A20
        jmp L_common
    L_found:
        mov eax, dword ptr [ecx + 4 * eax]
        pop edi
        pop esi
        pop ebp
        mov ecx, dword ptr [eax + 4]
        pop ebx
        inc ecx
        mov dword ptr [eax + 4], ecx
        mov al, 1
        ret 4
    L_zero:
        xor eax, eax
    L_common:
        mov ecx, dword ptr [edi]
        mov dword ptr [esp + 0x14], eax
        lea eax, [esp + 0x14]
        push eax
        push ecx
        mov ecx, edi
        call ext_006D2170
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        ret 4
    }
}

// [0x006E97C0] sub_006E97C0 (128 bytes)
extern "C" void ext_006A5C62();
extern "C" void ext_006D2170();
extern "C" void ext_006E8A20();

extern "C" __declspec(naked) void __fastcall fn_006E97C0(void* self, int edx_unused, int a1) {
    __asm {
        mov edx, dword ptr [ecx + 0x7c]
        push ebx
        push ebp
        push esi
        mov ebx, dword ptr [esp + 0x10]
        push edi
        lea edi, [ecx + 0x7c]
        xor eax, eax
        test edx, edx
        jle notfound
        mov ecx, dword ptr [ecx + 0x8c]
        mov esi, ecx
    scan:
        mov ebp, dword ptr [esi]
        cmp dword ptr [ebp], ebx
        je found
        inc eax
        add esi, 4
        cmp eax, edx
        jl scan
    notfound:
        push 8
        call ext_006A5C62
        add esp, 4
        test eax, eax
        je zero
        push ebx
        mov ecx, eax
        call ext_006E8A20
        jmp done
    found:
        mov eax, dword ptr [ecx + 4 * eax]
        pop edi
        pop esi
        pop ebp
        mov ecx, dword ptr [eax + 4]
        pop ebx
        inc ecx
        mov dword ptr [eax + 4], ecx
        mov al, 1
        ret 4
    zero:
        xor eax, eax
    done:
        mov ecx, dword ptr [edi]
        mov dword ptr [esp + 0x14], eax
        lea eax, [esp + 0x14]
        push eax
        push ecx
        mov ecx, edi
        call ext_006D2170
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        ret 4
    }
}

// [0x006E9BB0] sub_006E9BB0 (128 bytes)
extern "C" void ext_006A5C62();
extern "C" void ext_006B9D80();
extern "C" void ext_006D2170();
extern "C" __declspec(naked) void __fastcall fn_006E9BB0(void* self, int edx_unused, int a1) {
    __asm {
        push -1
        push 0x008b8fdb
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        push esi
        mov esi, ecx
        push 0x4c
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp + 4], eax
        test eax, eax
        mov dword ptr [esp + 0x10], 0
        je short L_null
        mov ecx, dword ptr [esp + 0x18]
        push ecx
        mov ecx, eax
        call ext_006B9D80
        jmp short L_join
L_null:
        xor eax, eax
L_join:
        lea ecx, [esi + 0xc]
        mov dword ptr [esp + 0x18], eax
        lea edx, [esp + 0x18]
        mov dword ptr [esp + 0x10], 0xffffffff
        mov eax, dword ptr [ecx]
        push edx
        push eax
        call ext_006D2170
        mov ecx, dword ptr [esp + 8]
        pop esi
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0x10
        ret 4
    }
}

// [0x006E8EF0] sub_006E8EF0 (128 bytes)
extern "C" void ext_006A5C62();
extern "C" void ext_006D2170();
extern "C" void ext_006E8A20();

extern "C" __declspec(naked) bool __fastcall fn_006E8EF0(void* self, int edx_unused, int key) {
    __asm {
        mov edx, dword ptr [ecx + 0x1c]
        push ebx
        push ebp
        push esi
        mov ebx, dword ptr [esp + 0x10]
        push edi
        lea edi, [ecx + 0x1c]
        xor eax, eax
        test edx, edx
        jle short NOTFOUND_6E8EF0
        mov ecx, dword ptr [ecx + 0x2c]
        mov esi, ecx
    LOOP_6E8EF0:
        mov ebp, dword ptr [esi]
        cmp dword ptr [ebp], ebx
        je short FOUND_6E8EF0
        inc eax
        add esi, 4
        cmp eax, edx
        jl short LOOP_6E8EF0
    NOTFOUND_6E8EF0:
        push 8
        call ext_006A5C62
        add esp, 4
        test eax, eax
        je short ZERO_6E8EF0
        push ebx
        mov ecx, eax
        call ext_006E8A20
        jmp short DONE_6E8EF0
    FOUND_6E8EF0:
        mov eax, dword ptr [ecx + 4*eax]
        pop edi
        pop esi
        pop ebp
        mov ecx, dword ptr [eax + 4]
        pop ebx
        inc ecx
        mov dword ptr [eax + 4], ecx
        mov al, 1
        ret 4
    ZERO_6E8EF0:
        xor eax, eax
    DONE_6E8EF0:
        mov ecx, dword ptr [edi]
        mov dword ptr [esp + 0x14], eax
        lea eax, [esp + 0x14]
        push eax
        push ecx
        mov ecx, edi
        call ext_006D2170
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        ret 4
    }
}

// [0x006E41C0] sub_006E41C0 (128 bytes)
extern "C" void ext_006CFD30();
extern "C" void ext_006DEEC0();
extern "C" __declspec(naked) void __fastcall fn_006E41C0(void* self, int edx_unused, double a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11) {
    __asm {
        fld qword ptr [esp + 0x20]
        push ebx
        push ebp
        fstp dword ptr [esp + 0x28]
        fld qword ptr [esp + 0x20]
        mov ebp, dword ptr [esp + 0x1c]
        push esi
        fstp dword ptr [esp + 0x24]
        push edi
        mov edi, dword ptr [esp + 0x14]
        mov ebx, ecx
        xor esi, esi
loop_top_006E41C0:
        mov eax, dword ptr [esp + 0x3c]
        mov ecx, dword ptr [esp + 0x38]
        mov edx, dword ptr [esp + 0x30]
        push eax
        mov eax, dword ptr [esp + 0x2c]
        push ecx
        mov ecx, dword ptr [esp + 0x28]
        push edx
        mov edx, dword ptr [esp + 0x28]
        push eax
        mov eax, dword ptr [esp + 0x28]
        push ebp
        push ecx
        push edx
        mov edx, dword ptr [edi]
        push eax
        push esi
        mov ecx, edi
        call dword ptr [edx + 0x18]
        mov ecx, eax
        call ext_006DEEC0
        push eax
        mov eax, dword ptr [ebx]
        push esi
        mov ecx, ebx
        call dword ptr [eax + 0x18]
        mov ecx, eax
        call ext_006DEEC0
        mov ecx, eax
        call ext_006CFD30
        inc esi
        cmp esi, 4
        jl loop_top_006E41C0
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x2c
    }
}

// [0x006E8DA0] sub_006E8DA0 (128 bytes)
extern "C" void ext_006C2860();
extern "C" void ext_006C28D0();
extern "C" void ext_006C3030();
extern "C" void ext_006D2170();
extern "C" void ext_006E8DA0();
extern "C" __declspec(naked) void __fastcall fn_006E8DA0(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        push ecx
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr [esp + 0x20]
        mov dword ptr [esp + 0x10], ecx
        test edi, edi
        je L_end
        mov ecx, edi
        call ext_006C3030
        mov ebp, dword ptr [esp + 0x18]
        test eax, eax
        je L_skip
        mov ecx, edi
        call ext_006C3030
        mov edx, dword ptr [eax]
        mov ecx, eax
        call dword ptr [edx]
        cmp eax, dword ptr [esp + 0x1c]
        jne L_skip
        mov ecx, dword ptr [ebp]
        lea eax, [esp + 0x20]
        push eax
        push ecx
        mov ecx, ebp
        mov dword ptr [esp + 0x28], edi
        call ext_006D2170
L_skip:
        push 0
        mov ecx, edi
        call ext_006C2860
        mov ebx, eax
        xor esi, esi
        test ebx, ebx
        jle L_end
L_loop:
        push esi
        mov ecx, edi
        call ext_006C28D0
        mov edx, dword ptr [esp + 0x1c]
        mov ecx, dword ptr [esp + 0x10]
        push eax
        push edx
        push ebp
        call ext_006E8DA0
        inc esi
        cmp esi, ebx
        jl L_loop
L_end:
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 0xc
    }
}

// [0x006E9730] sub_006E9730 (144 bytes)
extern "C" __declspec(naked) void __fastcall fn_006E9730(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x10]
        xor ebp, ebp
        push edi
        test esi, esi
        mov edi, ecx
        jl L_zero
        mov ebx, dword ptr [esp + 0x18]
        push ebx
        call ext_006E9610
        cmp esi, eax
        jge L_zero
        test ebx, ebx
        jl L_zero
        cmp ebx, 3
        jge L_zero
        mov ebp, dword ptr [edi + 0x7c]
        xor esi, esi
        test ebp, ebp
        mov dword ptr [esp + 0x18], esi
        jle L_end
    L_loop:
        test ebx, ebx
        je L_nofilter
        mov eax, dword ptr [edi + 0x8c]
        mov ecx, dword ptr [eax + esi*4]
        mov ecx, dword ptr [ecx]
        call ext_00710300
        cmp ebx, eax
        jne L_next
    L_nofilter:
        mov edx, dword ptr [esp + 0x18]
        mov eax, dword ptr [esp + 0x14]
        cmp edx, eax
        je L_found
        mov eax, edx
        inc eax
        mov dword ptr [esp + 0x18], eax
    L_next:
        inc esi
        cmp esi, ebp
        jl L_loop
    L_end:
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 8
    L_found:
        mov eax, dword ptr [edi + 0x8c]
        pop edi
        mov ecx, dword ptr [eax + esi*4]
        pop esi
        pop ebp
        pop ebx
        mov eax, dword ptr [ecx]
        ret 8
    L_zero:
        pop edi
        mov eax, ebp
        pop esi
        pop ebp
        pop ebx
        ret 8
    }
}

// [0x006E9390] sub_006E9390 (144 bytes)
extern "C" void ext_006A5C5C();
extern "C" void ext_006D2200();
extern "C" void ext_006E7440();
extern "C" __declspec(naked) void __fastcall fn_006E9390(void* self, int edx_unused, int a1) {
    __asm {
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [ecx + 0x4c]
        push edi
        lea edi, dword ptr [ecx + 0x4c]
        xor eax, eax
        test esi, esi
        jle notfound
        mov edx, dword ptr [ecx + 0x5c]
        mov ebx, dword ptr [esp + 0x14]
loop_top:
        mov ebp, dword ptr [edx]
        cmp dword ptr [ebp], ebx
        je found
        inc eax
        add edx, 4
        cmp eax, esi
        jl loop_top
notfound:
        push 9
        add ecx, 0x94
        call ext_006E7440
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        ret 4
found:
        mov edx, dword ptr [ecx + 0x5c]
        mov edx, dword ptr [edx + 4*eax]
        mov ebx, dword ptr [edx + 4]
        dec ebx
        mov dword ptr [edx + 4], ebx
        mov edx, dword ptr [ecx + 0x5c]
        mov edx, dword ptr [edx + 4*eax]
        mov esi, dword ptr [edx + 4]
        test esi, esi
        je zero_ref
        push 8
        add ecx, 0x94
        call ext_006E7440
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        ret 4
zero_ref:
        mov ecx, dword ptr [edi + 0x10]
        push eax
        mov esi, dword ptr [ecx + 4*eax]
        mov ecx, edi
        call ext_006D2200
        push esi
        call ext_006A5C5C
        add esp, 4
        mov al, 1
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
    }
}

// [0x006E8F70] sub_006E8F70 (144 bytes)
extern "C" void ext_006A5C5C();
extern "C" void ext_006D2200();
extern "C" void ext_006E7440();
extern "C" __declspec(naked) void __fastcall fn_006E8F70(void* self, int edx_unused, int a1) {
    __asm {
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [ecx + 0x1c]
        push edi
        lea edi, [ecx + 0x1c]
        xor eax, eax
        test esi, esi
        jle fn8f70_notfound
        mov edx, dword ptr [ecx + 0x2c]
        mov ebx, dword ptr [esp + 0x14]
fn8f70_loop:
        mov ebp, dword ptr [edx]
        cmp dword ptr [ebp], ebx
        je fn8f70_found
        inc eax
        add edx, 4
        cmp eax, esi
        jl fn8f70_loop
fn8f70_notfound:
        push 5
        add ecx, 0x94
        call ext_006E7440
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        ret 4
fn8f70_found:
        mov edx, dword ptr [ecx + 0x2c]
        mov edx, dword ptr [edx + 4*eax]
        mov ebx, dword ptr [edx + 4]
        dec ebx
        mov dword ptr [edx + 4], ebx
        mov edx, dword ptr [ecx + 0x2c]
        mov edx, dword ptr [edx + 4*eax]
        mov esi, dword ptr [edx + 4]
        test esi, esi
        je fn8f70_zero
        push 4
        add ecx, 0x94
        call ext_006E7440
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        ret 4
fn8f70_zero:
        mov ecx, dword ptr [edi + 0x10]
        push eax
        mov esi, dword ptr [ecx + 4*eax]
        mov ecx, edi
        call ext_006D2200
        push esi
        call ext_006A5C5C
        add esp, 4
        mov al, 1
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
    }
}

// [0x006E9580] sub_006E9580 (144 bytes)
extern "C" void ext_006A5C5C();
extern "C" void ext_006D2200();
extern "C" void ext_006E7440();
extern "C" __declspec(naked) void __fastcall fn_006E9580(void* self, int edx_unused, int a1) {
    __asm {
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [ecx + 0x64]
        push edi
        lea edi, [ecx + 0x64]
        xor eax, eax
        test esi, esi
        jle notfound
        mov edx, dword ptr [ecx + 0x74]
        mov ebx, dword ptr [esp + 0x14]
loop1:
        mov ebp, dword ptr [edx]
        cmp dword ptr [ebp], ebx
        je found
        inc eax
        add edx, 4
        cmp eax, esi
        jl loop1
notfound:
        push 0xc
        add ecx, 0x94
        call ext_006E7440
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        ret 4
found:
        mov edx, dword ptr [ecx + 0x74]
        mov edx, dword ptr [edx + 4*eax]
        mov ebx, dword ptr [edx + 4]
        dec ebx
        mov dword ptr [edx + 4], ebx
        mov edx, dword ptr [ecx + 0x74]
        mov edx, dword ptr [edx + 4*eax]
        mov esi, dword ptr [edx + 4]
        test esi, esi
        je zero
        push 0xb
        add ecx, 0x94
        call ext_006E7440
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        ret 4
zero:
        mov ecx, dword ptr [edi + 0x10]
        push eax
        mov esi, dword ptr [ecx + 4*eax]
        mov ecx, edi
        call ext_006D2200
        push esi
        call ext_006A5C5C
        add esp, 4
        mov al, 1
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
    }
}

// [0x006E9150] sub_006E9150 (144 bytes)
extern "C" void ext_006A5C5C();
extern "C" void ext_006D2200();
extern "C" void ext_006E7440();
extern "C" __declspec(naked) void __fastcall fn_006E9150(void* self, int edx_unused, int a1) {
    __asm {
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [ecx + 0x34]
        push edi
        lea edi, [ecx + 0x34]
        xor eax, eax
        test esi, esi
        jle notfound
        mov edx, dword ptr [ecx + 0x44]
        mov ebx, dword ptr [esp + 0x14]
    scan_loop:
        mov ebp, dword ptr [edx]
        cmp dword ptr [ebp], ebx
        je found
        inc eax
        add edx, 0x4
        cmp eax, esi
        jl scan_loop
    notfound:
        push 0x7
        add ecx, 0x94
        call ext_006E7440
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        ret 0x4
    found:
        mov edx, dword ptr [ecx + 0x44]
        mov edx, dword ptr [edx + 4*eax]
        mov ebx, dword ptr [edx + 0x4]
        dec ebx
        mov dword ptr [edx + 0x4], ebx
        mov edx, dword ptr [ecx + 0x44]
        mov edx, dword ptr [edx + 4*eax]
        mov esi, dword ptr [edx + 0x4]
        test esi, esi
        je zero_count
        push 0x6
        add ecx, 0x94
        call ext_006E7440
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        ret 0x4
    zero_count:
        mov ecx, dword ptr [edi + 0x10]
        push eax
        mov esi, dword ptr [ecx + 4*eax]
        mov ecx, edi
        call ext_006D2200
        push esi
        call ext_006A5C5C
        add esp, 0x4
        mov al, 0x1
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x4
    }
}

// [0x006E8D10] sub_006E8D10 (144 bytes)
extern "C" void ext_006C3030();
extern "C" void ext_006D2170();
extern "C" void ext_006D2250();
extern "C" void ext_006E8DA0();

extern "C" __declspec(naked) void __fastcall fn_006E8D10(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0x8]
        push esi
        mov esi, ecx
        push edi
        mov ecx, ebx
        call ext_006D2250
        mov al, byte ptr [esp + 0x18]
        test al, al
        je loop_setup
        mov eax, dword ptr [esi]
        mov ecx, dword ptr [esp + 0x14]
        push eax
        push ecx
        push ebx
        mov ecx, esi
        call ext_006E8DA0
        pop edi
        pop esi
        pop ebx
        ret 0xc
loop_setup:
        mov eax, dword ptr [esi + 0x4]
        xor edi, edi
        test eax, eax
        jle done
        push ebp
        mov ebp, dword ptr [esp + 0x18]
loop_top:
        mov edx, dword ptr [esi + 0x14]
        mov ecx, dword ptr [edx + 4 * edi]
        call ext_006C3030
        test eax, eax
        je next
        mov eax, dword ptr [esi + 0x14]
        mov ecx, dword ptr [eax + 4 * edi]
        call ext_006C3030
        mov edx, dword ptr [eax]
        mov ecx, eax
        call dword ptr [edx]
        cmp eax, ebp
        jne next
        mov eax, dword ptr [esi + 0x14]
        lea edx, [esp + 0x1c]
        push edx
        mov ecx, dword ptr [eax + 4 * edi]
        mov eax, dword ptr [ebx]
        mov dword ptr [esp + 0x20], ecx
        push eax
        mov ecx, ebx
        call ext_006D2170
next:
        mov eax, dword ptr [esi + 0x4]
        inc edi
        cmp edi, eax
        jl loop_top
        pop ebp
done:
        pop edi
        pop esi
        pop ebx
        ret 0xc
    }
}

// [0x006E9A40] sub_006E9A40 (144 bytes)
extern "C" int mem_008B98D3;
extern "C" int mem_00993D08;
extern "C" void ext_006A5C5C();
extern "C" void ext_006B9D70();
extern "C" void ext_006D2160();
extern "C" void ext_006D2250();
extern "C" void ext_0077FA20();
extern "C" __declspec(naked) void __fastcall fn_006E9A40(void* self) {
    __asm {
        push -1
        push offset mem_008B98D3
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push ebx
        push ebp
        mov ebp, ecx
        push esi
        mov dword ptr [esp + 0xc], ebp
        mov dword ptr [ebp], offset mem_00993D08
        mov esi, dword ptr [ebp + 0xc]
        lea ebx, [ebp + 0xc]
        test esi, esi
        mov dword ptr [esp + 0x18], 1
        je L_after
        push edi
L_loop:
        mov eax, dword ptr [ebx + 0x10]
        dec esi
        mov edi, dword ptr [eax + esi*4]
        test edi, edi
        je L_skip
        mov ecx, edi
        call ext_006B9D70
        push edi
        call ext_006A5C5C
        add esp, 4
L_skip:
        test esi, esi
        jne L_loop
        pop edi
L_after:
        mov ecx, ebx
        call ext_006D2250
        mov ecx, ebx
        mov byte ptr [esp + 0x18], 0
        call ext_006D2160
        mov ecx, ebp
        mov dword ptr [esp + 0x18], 0xffffffff
        call ext_0077FA20
        mov ecx, dword ptr [esp + 0x10]
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x006E50C0] sub_006E50C0 (144 bytes)
extern "C" void ext_006CAE80();
extern "C" void ext_006E4D30();
extern "C" void ext_006E50C0();
extern "C" __declspec(naked) void __fastcall fn_006E50C0(void* self) {
    __asm {
        sub esp, 0x20
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 0x30]
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr [esp + 0x3c]
        mov ecx, dword ptr [esi + 0x38]
        test ecx, ecx
        je L1
        fld qword ptr [edi]
        mov eax, dword ptr [esp + 0x34]
        push ecx
        fstp dword ptr [esp]
        push ebp
        push eax
        call ext_006CAE80
        add edi, 8
L1:
        mov al, byte ptr [esp + 0x40]
        test al, al
        je L2
        mov ecx, dword ptr [esp + 0x34]
        push ebp
        push ecx
        lea edx, [esp + 0x18]
        push edi
        push edx
        mov ecx, esi
        call ext_006E4D30
        lea edi, [esp + 0x10]
L2:
        mov eax, dword ptr [esi]
        mov ecx, esi
        xor ebx, ebx
        call dword ptr [eax + 0x14]
        test eax, eax
        jle L3
L4:
        mov ecx, dword ptr [esp + 0x34]
        mov edx, dword ptr [esi]
        push 0
        push edi
        push ebp
        push ecx
        push ebx
        mov ecx, esi
        call dword ptr [edx + 0x18]
        mov ecx, eax
        call ext_006E50C0
        mov edi, eax
        mov eax, dword ptr [esi]
        mov ecx, esi
        inc ebx
        call dword ptr [eax + 0x14]
        cmp ebx, eax
        jl L4
L3:
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x20
        ret 0x10
    }
}

// [0x006E84E0] sub_006E84E0 (160 bytes)
extern "C" void ext_0077FC70();
extern "C" void ext_006E8900();
extern "C" __declspec(naked) void __fastcall fn_006E84E0(void* self) {
    __asm {
        push ebx
        xor ebx, ebx
        push esi
        push ebx
        push ebx
        push 0x3fd99999
        push 0x9999999a
        mov esi, ecx
        push 0x3fd99999
        push 0x9999999a
        mov ecx, dword ptr [esi]
        push 0x3fd99999
        push 0x9999999a
        call ext_0077FC70
        mov eax, dword ptr [esi]
        push ebx
        push ebx
        push 0x3ff00000
        push ebx
        mov byte ptr [eax + 0x20], bl
        mov ecx, dword ptr [esi]
        push 0x3ff00000
        push ebx
        push 0x3ff00000
        push ebx
        add ecx, 0x28
        call ext_0077FC70
        mov ecx, dword ptr [esi]
        mov dword ptr [ecx + 0x48], ebx
        mov edx, dword ptr [esi]
        mov dword ptr [edx + 0x50], 0x33333333
        mov dword ptr [edx + 0x54], 0x3fd33333
        mov eax, dword ptr [esi]
        mov dword ptr [eax + 0x58], ebx
        mov dword ptr [eax + 0x5c], 0x408f4000
        mov ecx, dword ptr [esi]
        mov dword ptr [ecx + 0x60], 0xd2f1a9fc
        mov dword ptr [ecx + 0x64], 0x3f60624d
        mov edx, dword ptr [esi]
        mov ecx, esi
        mov byte ptr [edx + 0x68], bl
        mov eax, dword ptr [esi]
        mov dword ptr [eax + 0x70], ebx
        mov dword ptr [eax + 0x74], ebx
        call ext_006E8900
        pop esi
        pop ebx
        ret
    }
}

// [0x006E8860] sub_006E8860 (160 bytes)
extern "C" void ext_006E8910();
extern "C" __declspec(naked) void __fastcall fn_006E8860(void* self, int edx_unused, unsigned char a1) {
    __asm {
        push -1
        push 0x8b982b
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        push edi
        mov edi, ecx
        mov al, byte ptr [esp + 0x1c]
        sub esp, 0x48
        mov esi, esp
        lea ecx, [esp + 0x6c]
        mov dword ptr [esp + 0x50], esp
        push ecx
        lea ecx, [esi + 0x8]
        mov dword ptr [esp + 0x60], 0
        mov dword ptr [esp + 0x54], esi
        mov byte ptr [esi], al
        call ext_006D2390
        lea edx, [esp + 0x8c]
        lea ecx, [esi + 0x28]
        push edx
        mov byte ptr [esp + 0x60], 1
        call ext_006D2390
        mov ecx, dword ptr [edi]
        mov byte ptr [esp + 0x5c], 0
        add ecx, 0x78
        call ext_006E8910
        lea ecx, [esp + 0x44]
        mov dword ptr [esp + 0x14], 2
        call ext_006D80A0
        lea ecx, [esp + 0x24]
        mov dword ptr [esp + 0x14], -1
        call ext_006D80A0
        mov ecx, dword ptr [esp + 0xc]
        pop edi
        mov dword ptr fs:[0], ecx
        pop esi
        add esp, 0x10
        ret 0x48
    }
}

// [0x006E9840] sub_006E9840 (160 bytes)
extern "C" void ext_006A5C5C();
extern "C" void ext_006D2200();
extern "C" void ext_006E7440();

extern "C" __declspec(naked) void __fastcall fn_006E9840(void* self, int edx_unused, int a1) {
    __asm {
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [ecx + 0x7c]
        push edi
        lea edi, [ecx + 0x7c]
        xor eax, eax
        test esi, esi
        jle notfound
        mov edx, dword ptr [ecx + 0x8c]
        mov ebx, dword ptr [esp + 0x14]
    loop1:
        mov ebp, dword ptr [edx]
        cmp dword ptr [ebp], ebx
        je found
        inc eax
        add edx, 4
        cmp eax, esi
        jl loop1
    notfound:
        push 0xf
        add ecx, 0x94
        call ext_006E7440
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        ret 4
    found:
        mov edx, dword ptr [ecx + 0x8c]
        mov edx, dword ptr [edx + 4*eax]
        mov ebx, dword ptr [edx + 4]
        dec ebx
        mov dword ptr [edx + 4], ebx
        mov edx, dword ptr [ecx + 0x8c]
        mov edx, dword ptr [edx + 4*eax]
        mov esi, dword ptr [edx + 4]
        test esi, esi
        je release
        push 0xe
        add ecx, 0x94
        call ext_006E7440
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        ret 4
    release:
        mov ecx, dword ptr [edi + 0x10]
        push eax
        mov esi, dword ptr [ecx + 4*eax]
        mov ecx, edi
        call ext_006D2200
        push esi
        call ext_006A5C5C
        add esp, 4
        mov al, 1
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
    }
}

// [0x006E8E50] sub_006E8E50 (160 bytes)
extern "C" void ext_006B9D70();
extern "C" void ext_006BA660();
extern "C" void ext_006BADB0();
extern "C" void ext_006E7440();

extern "C" __declspec(naked) void __fastcall fn_006E8E50(void* self, int edx_unused) {
    __asm {
        mov eax, fs:[0]
        push -1
        push 0x8bdc58
        push eax
        mov fs:[0], esp
        push ebx
        push ebp
        push esi
        push edi
        mov ebx, ecx
        mov ebp, dword ptr [ebx + 0x1c]
        xor esi, esi
        cmp ebp, esi
        mov dword ptr [esp + 0x18], esi
        jle after_loop
loop_top:
        mov eax, dword ptr [ebx + 0x2c]
        mov ecx, dword ptr [eax + esi*4]
        mov edi, dword ptr [ecx]
        mov ecx, edi
        call ext_006BADB0
        push eax
        lea ecx, [esp + 0x24]
        call ext_006BA660
        test eax, eax
        je no_match
        inc esi
        cmp esi, ebp
        jl loop_top
after_loop:
        push 5
        lea ecx, [ebx + 0x94]
        call ext_006E7440
        lea ecx, [esp + 0x20]
        mov dword ptr [esp + 0x18], -1
        call ext_006B9D70
        xor eax, eax
epilogue:
        mov ecx, dword ptr [esp + 0x10]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs:[0], ecx
        pop ebx
        add esp, 0xc
        ret 0x4c
no_match:
        lea ecx, [esp + 0x20]
        mov dword ptr [esp + 0x18], -1
        call ext_006B9D70
        mov eax, edi
        jmp epilogue
    }
}

// [0x006E9210] sub_006E9210 (160 bytes)
extern "C" void ext_006B9D70();
extern "C" void ext_006BA660();
extern "C" void ext_006BADB0();
extern "C" void ext_006E7440();

extern "C" __declspec(naked) void __fastcall fn_006E9210(void* self, int edx_unused) {
    __asm {
        mov eax, fs:[0]
        push -1
        push 0x8bdc58
        push eax
        mov fs:[0], esp
        push ebx
        push ebp
        push esi
        push edi
        mov ebx, ecx
        mov ebp, dword ptr [ebx + 0x4c]
        xor esi, esi
        cmp ebp, esi
        mov dword ptr [esp + 0x18], esi
        jle after_loop
    loop_top:
        mov eax, dword ptr [ebx + 0x5c]
        mov ecx, dword ptr [eax + esi*4]
        mov edi, dword ptr [ecx]
        mov ecx, edi
        call ext_006BADB0
        push eax
        lea ecx, [esp + 0x24]
        call ext_006BA660
        test eax, eax
        je no_match
        inc esi
        cmp esi, ebp
        jl loop_top
    after_loop:
        push 9
        lea ecx, [ebx + 0x94]
        call ext_006E7440
        lea ecx, [esp + 0x20]
        mov dword ptr [esp + 0x18], -1
        call ext_006B9D70
        xor eax, eax
    epilogue:
        mov ecx, dword ptr [esp + 0x10]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs:[0], ecx
        pop ebx
        add esp, 0xc
        ret 0x4c
    no_match:
        lea ecx, [esp + 0x20]
        mov dword ptr [esp + 0x18], -1
        call ext_006B9D70
        mov eax, edi
        jmp epilogue
    }
}

// [0x006E9030] sub_006E9030 (160 bytes)
extern "C" void ext_006B9D70();
extern "C" void ext_006BA660();
extern "C" void ext_006BADB0();
extern "C" void ext_006E7440();

extern "C" __declspec(naked) void __fastcall fn_006E9030(void* self, int edx_unused) {
    __asm {
        mov eax, fs:[0]
        push -1
        push 0x8bdc58
        push eax
        mov fs:[0], esp
        push ebx
        push ebp
        push esi
        push edi
        mov ebx, ecx
        mov ebp, dword ptr [ebx + 0x34]
        xor esi, esi
        cmp ebp, esi
        mov dword ptr [esp + 0x18], esi
        jle after_loop
loop_top:
        mov eax, dword ptr [ebx + 0x44]
        mov ecx, dword ptr [eax + esi*4]
        mov edi, dword ptr [ecx]
        mov ecx, edi
        call ext_006BADB0
        push eax
        lea ecx, [esp + 0x24]
        call ext_006BA660
        test eax, eax
        je no_match
        inc esi
        cmp esi, ebp
        jl loop_top
after_loop:
        push 7
        lea ecx, [ebx + 0x94]
        call ext_006E7440
        lea ecx, [esp + 0x20]
        mov dword ptr [esp + 0x18], 0xffffffff
        call ext_006B9D70
        xor eax, eax
epilogue_ecx:
        mov ecx, dword ptr [esp + 0x10]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs:[0], ecx
        pop ebx
        add esp, 0xc
        ret 0x4c
no_match:
        lea ecx, [esp + 0x20]
        mov dword ptr [esp + 0x18], 0xffffffff
        call ext_006B9D70
        mov eax, edi
        jmp epilogue_ecx
    }
}

// [0x006E9460] sub_006E9460 (160 bytes)
extern "C" void ext_006B9D10();
extern "C" void ext_006B9D70();
extern "C" void ext_006B9EC0();
extern "C" void ext_006BA7C0();
extern "C" void ext_006BADB0();
extern "C" __declspec(naked) void __fastcall fn_006E9460(void* self, int edx_unused, int a1) {
    __asm {
        push -1
        push 0x8bcb18
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x50
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        lea ecx, [esp + 0x14]
        call ext_006B9D10
        mov ebx, dword ptr [edi + 0x64]
        xor esi, esi
        cmp ebx, esi
        mov dword ptr [esp + 0x68], esi
        mov dword ptr [esp + 0x10], esi
        jle after_loop
        mov ebp, dword ptr [esp + 0x70]
loop_top:
        mov eax, dword ptr [edi + 0x74]
        mov ecx, dword ptr [eax + 4*esi]
        mov ecx, dword ptr [ecx]
        call ext_006BADB0
        push eax
        lea ecx, [esp + 0x18]
        call ext_006B9EC0
        push ebp
        lea ecx, [esp + 0x18]
        call ext_006BA7C0
        test al, al
        jne found
        inc esi
        cmp esi, ebx
        jl loop_top
        jmp after_loop
found:
        mov edx, dword ptr [edi + 0x74]
        mov eax, dword ptr [edx + 4*esi]
        mov ecx, dword ptr [eax]
        mov dword ptr [esp + 0x10], ecx
after_loop:
        lea ecx, [esp + 0x14]
        mov dword ptr [esp + 0x68], 0xffffffff
        call ext_006B9D70
        mov ecx, dword ptr [esp + 0x60]
        mov eax, dword ptr [esp + 0x10]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x5c
        ret 4
    }
}

// [0x006E6E60] sub_006E6E60 (160 bytes)
extern "C" void ext_00712000();
extern "C" void ext_006B9D20();
extern "C" void ext_006B9D70();
extern "C" void ext_006B9E60();
extern "C" void ext_006B9EC0();
extern "C" void ext_006B9D10();

extern "C" __declspec(naked) void * __fastcall fn_006E6E60(void* self, int edx_unused, int a1) {
    __asm {
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
        mov ecx, dword ptr [esi]
        mov dword ptr [esp + 0x5c], 1
        test ecx, ecx
        je L_alt
        call ext_00712000
        push eax
        lea ecx, [esp + 0xc]
        call ext_006B9EC0
        jmp L_join
L_alt:
        mov esi, dword ptr [esi + 0x8]
        test esi, esi
        je L_join
        push esi
        lea ecx, [esp + 0xc]
        call ext_006B9E60
L_join:
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

// [0x006E8B50] sub_006E8B50 (160 bytes)
extern "C" void ext_006D2160();
extern "C" void ext_006E98E0();
extern "C" void ext_007641C0();
extern "C" __declspec(naked) void __fastcall fn_006E8B50(void* self) {
    __asm {
        push -1
        _emit 0x68
        _emit 0xb0
        _emit 0x98
        _emit 0x8b
        _emit 0x00
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        mov dword ptr [esp + 0x10], 0x6
        call ext_006E98E0
        lea ecx, [esi + 0x94]
        mov byte ptr [esp + 0x10], 0x5
        call ext_007641C0
        lea ecx, [esi + 0x7c]
        mov byte ptr [esp + 0x10], 0x4
        call ext_006D2160
        lea ecx, [esi + 0x64]
        mov byte ptr [esp + 0x10], 0x3
        call ext_006D2160
        lea ecx, [esi + 0x4c]
        mov byte ptr [esp + 0x10], 0x2
        call ext_006D2160
        lea ecx, [esi + 0x34]
        mov byte ptr [esp + 0x10], 0x1
        call ext_006D2160
        lea ecx, [esi + 0x1c]
        mov byte ptr [esp + 0x10], 0x0
        call ext_006D2160
        lea ecx, [esi + 0x4]
        mov dword ptr [esp + 0x10], 0xffffffff
        call ext_006D2160
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x006E37C0] sub_006E37C0 (176 bytes)
extern "C" double mem_0092A270;
extern "C" __declspec(naked) void __cdecl fn_006E37C0(double* dst, const double* a, const double* b, double t, unsigned int n) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -0x8
        sub esp, 0x140
        push esi
        mov esi, dword ptr [ebp + 0x1c]
        lea edx, [esp + 0xa4]
        push edi
        lea ecx, [esp + 8*esi + 0xa8]
        lea eax, [esp + 0xa8]
        cmp edx, ecx
        jae L1
        fld qword ptr [mem_0092A270]
        mov edx, dword ptr [ebp + 0xc]
        lea edi, [esp + 0xa8]
        fsub qword ptr [ebp + 0x14]
        sub edx, edi
    L0:
        fld st(0)
        fmul qword ptr [edx + eax]
        add eax, 0x8
        cmp eax, ecx
        fstp qword ptr [eax - 0x8]
        jb L0
        fstp st(0)
    L1:
        lea ecx, [esp + 8*esi + 0x8]
        lea edx, [esp + 0x8]
        cmp edx, ecx
        lea eax, [esp + 0x8]
        jae L3
        mov edx, dword ptr [ebp + 0x10]
        lea edi, [esp + 0x8]
        sub edx, edi
    L2:
        fld qword ptr [ebp + 0x14]
        fmul qword ptr [edx + eax]
        add eax, 0x8
        cmp eax, ecx
        fstp qword ptr [eax - 0x8]
        jb L2
    L3:
        mov ecx, dword ptr [ebp + 0x8]
        lea edx, [ecx + 8*esi]
        cmp ecx, edx
        jae L5
        xor eax, eax
    L4:
        fld qword ptr [esp + eax + 0x8]
        fadd qword ptr [esp + eax + 0xa8]
        add eax, 0x8
        lea esi, [eax + ecx]
        fstp qword ptr [eax + ecx - 0x8]
        cmp esi, edx
        jb L4
    L5:
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}

// [0x006EA860] sub_006EA860 (21 bytes)
extern "C" int __cdecl ext_006FC3A0(void*, int);
extern "C" int mem_00B5E0A8;

extern "C" void __cdecl fn_006EA860() {
    mem_00B5E0A8 = ext_006FC3A0((void*)0xb5e0b0, -1);
}

// [0x006EA010] sub_006EA010 (21 bytes)
extern "C" int __cdecl ext_006FC3A0(void*, int);
extern "C" int mem_00B5DF20;

extern "C" void __cdecl fn_006EA010() {
    mem_00B5DF20 = ext_006FC3A0((void*)0xb5df10, -1);
}

// [0x006EA030] sub_006EA030 (30 bytes)
extern "C" int mem_00993D2C;
extern "C" void ext_007052F0();
extern "C" __declspec(naked) void __fastcall fn_006EA030(void* self, int edx_unused, int a1) {
    __asm {
        push esi
        mov esi, ecx
        call ext_007052F0
        mov eax, dword ptr [esp + 0x8]
        mov dword ptr [esi], offset mem_00993D2C
        mov dword ptr [esi + 0xe0], eax
        mov eax, esi
        pop esi
        ret 4
    }
}

// [0x006EA200] sub_006EA200 (33 bytes)
extern "C" __declspec(naked) void* __fastcall fn_006EA200(void* self, int edx_unused, void* a1) {
    __asm {
        push ecx
        push esi
        mov esi, dword ptr [esp + 0xc]
        push offset mem_00AA96F8
        mov ecx, esi
        mov dword ptr [esp + 0x8], 0x0
        call ext_006B9D80
        mov eax, esi
        pop esi
        pop ecx
        ret 0x4
    }
}

// [0x006EF830] sub_006EF830 (33 bytes)
extern "C" void ext_006FA950();
extern "C" void ext_006FC6E0();
extern "C" __declspec(naked) void __fastcall fn_006EF830(void* self, int edx_unused, int a1, int a2) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        push esi
        mov esi, ecx
        push eax
        mov ecx, dword ptr [esp + 0xc]
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

// [0x006EFEA0] sub_006EFEA0 (34 bytes)
extern "C" void ext_00711D40();
extern "C" __declspec(naked) void __fastcall fn_006EFEA0(void* self, int edx_unused, int a1, int a2) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        mov edx, dword ptr [esp + 0x4]
        push 0x6c8a60
        push 0x6c8b20
        push eax
        push edx
        add ecx, 0x1e48
        call ext_00711D40
        ret 0x8
    }
}

// [0x006E9B00] sub_006E9B00 (33 bytes)
extern "C" void ext_006C95F0();
extern "C" void ext_006CD330();
extern "C" void ext_006DC460();

extern "C" __declspec(naked) void __fastcall fn_006E9B00(void* self, int edx_unused, int a1) {
    __asm {
        mov ecx, dword ptr [ecx + 0x4]
        call ext_006DC460
        fild dword ptr [esp + 0x4]
        push ecx
        mov ecx, eax
        fstp dword ptr [esp]
        call ext_006C95F0
        mov ecx, eax
        call ext_006CD330
        ret 0x4
    }
}

// [0x006EFF00] sub_006EFF00 (34 bytes)
extern "C" __declspec(naked) void __fastcall fn_006EFF00(void* self, int edx_unused, int a1, int a2) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        mov edx, dword ptr [esp + 0x4]
        push 0x6c8bd0
        push 0x6c8c90
        push eax
        push edx
        add ecx, 0x1ed0
        call ext_00711D40
        ret 0x8
    }
}

// [0x006EFE00] sub_006EFE00 (34 bytes)
extern "C" void ext_00711D40();

extern "C" __declspec(naked) void __fastcall fn_006EFE00(void* self, int edx_unused, int a1, int a2) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        mov edx, dword ptr [esp + 0x4]
        push 0x6c8d60
        push 0x6c8820
        push eax
        push edx
        add ecx, 0x1d38
        call ext_00711D40
        ret 0x8
    }
}

// [0x006EFCB0] sub_006EFCB0 (34 bytes)
extern "C" void ext_00711D40();

extern "C" __declspec(naked) void __fastcall fn_006EFCB0(void* self, int edx_unused, int a1, int a2) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        mov edx, dword ptr [esp + 0x4]
        push 0x6c8a80
        push 0x6c8b40
        push eax
        push edx
        add ecx, 0x1a08
        call ext_00711D40
        ret 0x8
    }
}

// [0x006EFFA0] sub_006EFFA0 (34 bytes)
extern "C" void ext_00711D40();
extern "C" __declspec(naked) void __fastcall fn_006EFFA0(void* self, int edx_unused, int a1, int a2) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        mov edx, dword ptr [esp + 0x4]
        push 0x6c88d0
        push 0x6c8990
        push eax
        push edx
        add ecx, 0x1fe0
        call ext_00711D40
        ret 0x8
    }
}

// [0x006EFD60] sub_006EFD60 (34 bytes)
extern "C" void __fastcall fn_006EFD60(void* self, int edx_unused, int a1, int a2) {
    typedef void (__thiscall *Fn)(void*, int, int, void*, void*);
    ((Fn)ext_00711D40)((char*)self + 0x1c28, a1, a2, (void*)ext_006C8B30, (void*)ext_006C8A70);
}

// [0x006EFDC0] sub_006EFDC0 (34 bytes)
extern "C" void ext_00711D40();
extern "C" __declspec(naked) void __fastcall fn_006EFDC0(void* self) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        mov edx, dword ptr [esp + 0x4]
        push 0x6c8be0
        push 0x6c8ca0
        push eax
        push edx
        add ecx, 0x1cb0
        call ext_00711D40
        ret 0x8
    }
}

// [0x006EFE60] sub_006EFE60 (34 bytes)
extern "C" void ext_00711D40();
extern "C" void ext_006C88E0();
extern "C" void ext_006C89A0();
extern "C" void __fastcall fn_006EFE60(void* self, int edx_unused, int a1, int a2) {
    ((void (__thiscall *)(void*, int, int, void*, void*))ext_00711D40)(
        (char*)self + 0x1dc0, a1, a2, (void*)ext_006C89A0, (void*)ext_006C88E0);
}

// [0x006EFF40] sub_006EFF40 (34 bytes)
extern "C" void __fastcall fn_006EFF40(void* self, int edx_unused, int a1, int a2) {
    ((void (__thiscall*)(void*, int, int, int, int))ext_00711D40)((char*)self + 0x1f58, a1, a2, 0x6c8810, 0x6c8d50);
}

// [0x006EFFE0] sub_006EFFE0 (34 bytes)
extern "C" void ext_00711D40();
extern "C" __declspec(naked) void __fastcall fn_006EFFE0(void* self, int edx_unused, int a1, int a2) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        mov edx, dword ptr [esp + 0x4]
        push 0x6c8a50
        push 0x6c8b10
        push eax
        push edx
        add ecx, 0x2068
        call ext_00711D40
        ret 0x8
    }
}

// [0x006E6410] sub_006E6410 (36 bytes)
extern "C" int mem_00B5DDB8;
extern "C" int mem_00B5DDC0;
extern "C" int mem_00B5DDC8;
extern "C" __declspec(naked) void __cdecl fn_006E6410(void) {
    __asm {
        mov eax, dword ptr [mem_00925284]
        fld qword ptr [eax]
        fchs
        fstp qword ptr [mem_00B5DDB8]
        fld qword ptr [eax]
        fchs
        fstp qword ptr [mem_00B5DDC0]
        fld qword ptr [eax]
        fchs
        fstp qword ptr [mem_00B5DDC8]
        ret
    }
}

// [0x006EA410] sub_006EA410 (36 bytes)
extern "C" int mem_00B5E0E8;
extern "C" int mem_00B5E0F0;
extern "C" int mem_00B5E0F8;
extern "C" __declspec(naked) void __cdecl fn_006EA410(void) {
    __asm {
        mov eax, dword ptr [mem_00925284]
        fld qword ptr [eax]
        fchs
        fstp qword ptr [mem_00B5E0E8]
        fld qword ptr [eax]
        fchs
        fstp qword ptr [mem_00B5E0F0]
        fld qword ptr [eax]
        fchs
        fstp qword ptr [mem_00B5E0F8]
        ret
    }
}

// [0x006EA820] sub_006EA820 (41 bytes)
extern "C" int mem_00B5E0B0;
extern "C" int mem_00B5E0B8;
extern "C" int mem_00B5E0B4;
extern "C" int mem_00B5E0BC;
extern "C" __declspec(naked) void __cdecl fn_006EA820(void) {
    __asm {
        mov dword ptr [mem_00B5E0B0], 0xb5e0a8
        mov dword ptr [mem_00B5E0B8], 0xaaa350
        mov dword ptr [mem_00B5E0B4], 0xb5f050
        mov dword ptr [mem_00B5E0BC], 0
        ret
    }
}

// [0x006E9FD0] sub_006E9FD0 (41 bytes)
extern "C" int mem_00B5DF10;
extern "C" int mem_00B5DF18;
extern "C" int mem_00B5DF14;
extern "C" int mem_00B5DF1C;

extern "C" void __cdecl fn_006E9FD0() {
    mem_00B5DF10 = 0xb5df20;
    mem_00B5DF18 = 0xaa96dc;
    mem_00B5DF14 = 0xb5f050;
    mem_00B5DF1C = 0;
}

// [0x006E7120] sub_006E7120 (41 bytes)
extern "C" void ext_00711BA0();
extern "C" __declspec(naked) void __fastcall fn_006E7120(void* self) {
    __asm {
        mov eax, ecx
        mov ecx, dword ptr [mem_00925284]
        fld qword ptr [ecx]
        mov ecx, dword ptr [eax]
        test ecx, ecx
        fchs
        je short L_zero
        fstp st(0)
        jmp ext_00711BA0
L_zero:
        mov eax, dword ptr [eax + 0x8]
        test eax, eax
        je short L_done
        fstp st(0)
        fld qword ptr [eax + 0xa0]
L_done:
        ret
    }
}

// [0x006E9D00] sub_006E9D00 (36 bytes)
extern "C" int mem_00B5DF50;
extern "C" int mem_00B5DF58;
extern "C" int mem_00B5DF60;
extern "C" __declspec(naked) void __cdecl fn_006E9D00(void) {
    __asm {
        mov eax, dword ptr [mem_00925284]
        fld qword ptr [eax]
        fchs
        fstp qword ptr [mem_00B5DF50]
        fld qword ptr [eax]
        fchs
        fstp qword ptr [mem_00B5DF58]
        fld qword ptr [eax]
        fchs
        fstp qword ptr [mem_00B5DF60]
        ret
    }
}

// [0x006E64B0] sub_006E64B0 (46 bytes)
extern "C" int mem_00B5DDF0;
extern "C" int mem_00B5DDF8;
extern "C" int mem_00B5DE00;
extern "C" int mem_00B5DE08;

extern "C" void __cdecl fn_006E64B0() {
    double* p = *(double**)&mem_00925284;
    *(double*)&mem_00B5DDF0 = -*p;
    *(double*)&mem_00B5DDF8 = -*p;
    *(double*)&mem_00B5DE00 = -*p;
    *(double*)&mem_00B5DE08 = -*p;
}

// [0x006E9DA0] sub_006E9DA0 (46 bytes)
extern "C" double mem_00B5DF88;
extern "C" double mem_00B5DF90;
extern "C" double mem_00B5DF98;
extern "C" double mem_00B5DFA0;

extern "C" void __cdecl fn_006E9DA0() {
    mem_00B5DF88 = -*(double*)mem_00925284;
    mem_00B5DF90 = -*(double*)mem_00925284;
    mem_00B5DF98 = -*(double*)mem_00925284;
    mem_00B5DFA0 = -*(double*)mem_00925284;
}
