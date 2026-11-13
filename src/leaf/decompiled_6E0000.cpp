// Decompiled translation unit: src/leaf/decompiled_6E0000.cpp

#include <math.h>

// [0x006E0900] sub_006E0900 (32 bytes)
// Zero-initialise the object's 8 dwords, then store 1.0 (double) at offset 0x18.
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

// [0x006E6350] sub_006E6350 (16 bytes)
extern "C" __declspec(naked) void __fastcall fn_006E6350(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        add ecx, 0x4c
        push eax
        call ext_006B9EC0
        ret 4
    }
}

// [0x006E7430] sub_006E7430 (16 bytes)
extern "C" __declspec(naked) void __fastcall fn_006E7430(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        add ecx, 0x8
        push eax
        call ext_006B9EC0
        ret 4
    }
}

// [0x006E6880] sub_006E6880 (47 bytes)
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

// [0x006E8750] sub_006E8750 (48 bytes)
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

// [0x006E6360] sub_006E6360 (80 bytes)
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
