// Decompiled translation unit: src/leaf/decompiled_6D0000.cpp

#include <math.h>
#include <stdlib.h>
extern "C" void ext_006A5C62();
extern "C" void ext_006BBCC0();
extern "C" void ext_006D2170();

extern "C" void ext_006BBCC0();
extern "C" void ext_006D2170();
extern "C" __declspec(naked) void __fastcall fn_006DBDF0(void* self, int edx_unused, void* out, void* in) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        push esi
        mov esi, dword ptr [ecx]
        mov edx, dword ptr [eax]
        add edx, esi
        mov esi, dword ptr [eax + 0x4]
        mov eax, dword ptr [ecx + 0x4]
        adc esi, eax
        mov eax, dword ptr [esp + 0x8]
        mov dword ptr [eax], edx
        mov dword ptr [eax + 0x4], esi
        pop esi
        ret 0x8
    }
}
extern "C" void ext_006D7970();
extern "C" void ext_006FDF70();
extern "C" void ext_006B99C0();

extern "C" void ext_006B99C0();
// 64-bit subtract: *out = *this - *in, where out = arg0 and in = arg1 (ret 8).
extern "C" __declspec(naked) void __fastcall fn_006DBE10(void* self, int edx_unused, void* out, void* in) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ecx + 0x4]
        push esi
        mov esi, dword ptr [eax]
        sub edx, esi
        mov esi, dword ptr [eax + 0x4]
        mov eax, dword ptr [esp + 0x8]
        sbb ecx, esi
        pop esi
        mov dword ptr [eax], edx
        mov dword ptr [eax + 0x4], ecx
        ret 0x8
    }
}
extern "C" void ext_006FC930();
extern "C" void ext_006DC550();
extern "C" void __fastcall ext_006E7410(void* self, int edx, int a, const char* b);

extern "C" void __fastcall ext_006E7410(void* self, int edx, int a, const char* b);
extern "C" void __stdcall ext_006DEED0(int a, int b);

extern "C" void __stdcall fn_006DEF20(int a1) {
    ext_006DEED0(a1, 1);
}
extern "C" void ext_006D2200();
extern "C" void ext_00711CF0();
extern "C" void ext_006DE130();
extern "C" void ext_006E5750();

extern "C" void ext_006E5750();
// Stores (__int64)((double)0x0A_C0E8D7B0 * a1) into *self (ret 8).
extern "C" void ext_00872828();
extern "C" __declspec(naked) void __fastcall fn_006DAE00(void* self, int edx_unused, double a1) {
    __asm {
        sub esp, 0x8
        __asm _emit 0xC7 __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x00
        __asm _emit 0xB0 __asm _emit 0xD7 __asm _emit 0xE8 __asm _emit 0xC0
        mov dword ptr [esp + 0x4], 0xa
        __asm _emit 0xDF __asm _emit 0x6C __asm _emit 0x24 __asm _emit 0x00
        push esi
        mov esi, ecx
        fmul qword ptr [esp + 0x10]
        call ext_00872828
        mov dword ptr [esi], eax
        mov dword ptr [esi + 0x4], edx
        pop esi
        add esp, 0x8
        ret 0x8
    }
}
extern "C" void ext_006D80A0();
extern "C" void ext_006D03D0();
extern "C" void ext_006B9D70();
extern "C" void ext_007641C0();

extern "C" void ext_007641C0();
// Linear search over 12 x 32-byte records starting at 0x00B5D910 (key at +0xC).
// Returns the record's dword at +0x10 for the matching key, otherwise 3.
extern "C" int mem_00B5D910;
extern "C" __declspec(naked) int __cdecl fn_006D9790(int key) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        mov eax, 0x3
        xor ecx, ecx
        mov edx, offset mem_00B5D910 + 0xc
    loop_top:
        cmp dword ptr [edx], esi
        je found
        inc ecx
        add edx, 0x20
        cmp ecx, 0xc
        jl loop_top
        pop esi
        ret
    found:
        shl ecx, 0x5
        add ecx, offset mem_00B5D910
        je done
        mov eax, dword ptr [ecx + 0x10]
    done:
        pop esi
        ret
    }
}
extern "C" void ext_006D2250();
extern "C" void ext_006FDEF0();

extern "C" void ext_006FDEF0();
// Linear search over 12 x 32-byte records starting at 0x00B5D910 (key at +0xC).
// Returns the record's dword at +0x8 for the matching key, otherwise 0x00B5D2C0.
extern "C" int mem_00B5D2C0;
extern "C" __declspec(naked) int __cdecl fn_006D98A0(int key) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        mov eax, offset mem_00B5D2C0
        xor ecx, ecx
        mov edx, offset mem_00B5D910 + 0xc
    loop_top:
        cmp dword ptr [edx], esi
        je found
        inc ecx
        add edx, 0x20
        cmp ecx, 0xc
        jl loop_top
        pop esi
        ret
    found:
        shl ecx, 0x5
        add ecx, offset mem_00B5D910
        je done
        mov eax, dword ptr [ecx + 0x8]
    done:
        pop esi
        ret
    }
}
extern "C" void ext_006D8A40();
extern "C" void ext_0077FAC0();

extern "C" void ext_0077FAC0();
extern "C" int mem_00993810;

extern "C" __declspec(naked) bool __fastcall fn_006D2940(void* self, int edx_unused, void* a1) {
    __asm {
        mov edx, dword ptr [esp + 0x4]
        fld qword ptr [ecx]
        fsub qword ptr [edx]
        fabs
        fcomp qword ptr [mem_00993810]
        fnstsw ax
        test ah, 0x41
        je short L_fail_006D2940
        fld qword ptr [ecx + 0x8]
        fsub qword ptr [edx + 0x8]
        fabs
        fcomp qword ptr [mem_00993810]
        fnstsw ax
        test ah, 0x41
        je short L_fail_006D2940
        fld qword ptr [ecx + 0x10]
        fsub qword ptr [edx + 0x10]
        fabs
        fcomp qword ptr [mem_00993810]
        fnstsw ax
        test ah, 0x41
        je short L_fail_006D2940
        xor eax, eax
        xor ecx, ecx
        test eax, eax
        sete cl
        mov al, cl
        ret 0x4
    L_fail_006D2940:
        mov eax, 0x1
        xor ecx, ecx
        test eax, eax
        sete cl
        mov al, cl
        ret 0x4
    }
}
extern "C" void ext_006D2390();
extern "C" void ext_006D23B0();

extern "C" void ext_006D23B0();
extern "C" int mem_00925284;
extern "C" int mem_00B5D780;
extern "C" int mem_00B5D784;
extern "C" int mem_00B5D778;
extern "C" __declspec(naked) void __fastcall fn_006D7500(void* self) {
    __asm {
        mov eax, dword ptr [ecx + 0xfc]
        mov ecx, dword ptr [esp + 0x4]
        mov dword ptr [eax], ecx
        ret 0x4
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
        mov dword ptr [mem_00B5D780], ecx
        mov dword ptr [mem_00B5D784], edx
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
        fstp qword ptr [mem_00B5D778]
        ret
    }
}
extern "C" void ext_00728D90();
extern "C" int mem_00B5D770;

extern "C" int mem_00B5D770;
// state = self->[0x10]; if state is 1 or 2, copy 3 doubles from arg into self->[0x0c]->[0x270],
// set self->[0x16] = 1 and return true; otherwise return false (ret 4).
extern "C" __declspec(naked) bool __fastcall fn_006D9070(void* self, int edx_unused, const double* src) {
    __asm {
        mov eax, dword ptr [ecx + 0x10]
        sub esp, 0x20
        cmp eax, 0x1
        je L_006D9088
        cmp eax, 0x2
        je L_006D9088
        xor al, al
        add esp, 0x20
        ret 0x4
L_006D9088:
        mov eax, dword ptr [esp + 0x24]
        push esi
        fld qword ptr [eax]
        fld qword ptr [eax + 0x8]
        fstp qword ptr [esp + 0xc]
        fld qword ptr [eax + 0x10]
        mov eax, dword ptr [ecx + 0xc]
        mov edx, dword ptr [esp + 0xc]
        mov esi, dword ptr [esp + 0x10]
        add eax, 0x270
        fstp qword ptr [esp + 0x14]
        mov dword ptr [eax + 0x8], edx
        mov edx, dword ptr [esp + 0x14]
        fstp qword ptr [eax]
        mov dword ptr [eax + 0xc], esi
        mov esi, dword ptr [esp + 0x18]
        mov dword ptr [eax + 0x10], edx
        mov dword ptr [eax + 0x14], esi
        mov byte ptr [ecx + 0x16], 0x1
        mov al, 0x1
        pop esi
        add esp, 0x20
        ret 0x4
    }
}

extern "C" void ext_006C9A60();
extern "C" void ext_006D03D0();
extern "C" void ext_006B9D80();
extern "C" int mem_00AA9158;

extern "C" int mem_00AA9158;
// Thiscall with 2 stack args (ret 0x8).
extern "C" __declspec(naked) void __fastcall fn_006D03E0(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov al, byte ptr [esi + 0x1d]
        test al, al
        je done
        mov eax, dword ptr [esp + 0x14]
        mov edi, dword ptr [esp + 0x10]
        lea ebx, [esi + 0x54]
        push eax
        push edi
        mov ecx, ebx
        call ext_006C9A60
        mov eax, dword ptr [esi + 0x18]
        cmp edi, 0x100
        jne inc_path
        add eax, 0x10000
        jmp store_path
inc_path:
        inc eax
store_path:
        mov dword ptr [esi + 0x18], eax
        mov al, byte ptr [esi + 0x1c]
        test al, al
        je done
        mov eax, dword ptr [esi + 0x68]
        xor edi, edi
        test eax, eax
        jle after_loop
loop_top:
        mov edx, dword ptr [esi + 0x90]
        mov ecx, dword ptr [esi + 0x78]
        mov eax, dword ptr [edx + 4*edi]
        push eax
        push ebx
        push esi
        call dword ptr [ecx + 4*edi]
        mov eax, dword ptr [esi + 0x68]
        add esp, 0xc
        inc edi
        cmp edi, eax
        jl loop_top
after_loop:
        mov ecx, esi
        call ext_006D03D0
done:
        pop edi
        pop esi
        pop ebx
        ret 0x8
    }
}
extern "C" void ext_006D5E30();
extern "C" void ext_006D5AD0();
extern "C" void ext_006D6350();

extern "C" void ext_006D5AD0();
extern "C" void ext_006D6350();
extern "C" int mem_00925290;
extern "C" __declspec(naked) void __fastcall fn_006D2280(void* self, int edx_unused, int n) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        test eax, eax
        mov esi, ecx
        je done_early
        mov ecx, dword ptr [esi + 0x8]
        push ebx
        push ebp
        mov ebp, dword ptr [esi]
        push edi
        lea edx, [ecx + ebp]
        lea eax, [edx + eax - 0x1]
        xor edx, edx
        div ecx
        cmp eax, 0x1
        mov edi, eax
        ja have_blocks
        mov edi, 0x1
have_blocks:
        mov eax, dword ptr [esi + 0xc]
        mov ebx, eax
        imul eax, ecx
        imul eax, edi
        imul ebx, ebp
        mov ebp, eax
        mov eax, dword ptr [esi + 0x4]
        cmp edi, eax
        jbe no_realloc
        mov eax, dword ptr [esi + 0x10]
        push ebp
        push eax
        call dword ptr [mem_00925290]
        add esp, 0x8
        mov dword ptr [esi + 0x10], eax
        mov dword ptr [esi + 0x4], edi
no_realloc:
        mov edi, dword ptr [esi + 0x10]
        mov ecx, ebp
        sub ecx, ebx
        xor eax, eax
        mov edx, ecx
        add edi, ebx
        shr ecx, 0x2
        rep stosd
        mov ecx, edx
        and ecx, 0x3
        rep stosb
        mov eax, dword ptr [esp + 0x14]
        mov ecx, dword ptr [esi]
        add ecx, eax
        pop edi
        pop ebp
        mov dword ptr [esi], ecx
        pop ebx
done_early:
        pop esi
        ret 0x4
    }
}
extern "C" int mem_00B5DAB8;
extern "C" int mem_00B5DAC0;
extern "C" int mem_00B5DAC8;

extern "C" int mem_00B5DAC0;
extern "C" int mem_00B5DAC8;
// 64-bit result into *out (out = arg0, in = arg1, ret 8).
// The ledger window (128 bytes) also covers the nop padding, two ILT jmp thunks
// (-> 0x006DBEA0 and 0x006DBED0) and the two small blobs they jump to, so those
// are reproduced here byte-for-byte.
extern "C" void ext_006A7310();
extern "C" int mem_00925284;
extern "C" int mem_00B5DA98;
extern "C" int mem_00B5DA9C;
extern "C" int mem_00B5DA90;
extern "C" __declspec(naked) void __fastcall fn_006DBE60(void* self, int edx_unused, void* out, void* in) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        mov edx, dword ptr [eax + 0x4]
        mov eax, dword ptr [eax]
        push edx
        mov edx, dword ptr [ecx + 0x4]
        push eax
        mov eax, dword ptr [ecx]
        push edx
        push eax
        call ext_006A7310
        mov ecx, eax
        mov eax, dword ptr [esp + 0x4]
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 0x4], edx
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
        __asm _emit 0xE9 __asm _emit 0x0B __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
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
        mov dword ptr [mem_00B5DA98], ecx
        mov dword ptr [mem_00B5DA9C], edx
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
        __asm _emit 0xE9 __asm _emit 0x0B __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
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
        fstp qword ptr [mem_00B5DA90]
        ret
    }
}
extern "C" void ext_006DE3B0();
extern "C" int mem_009251D0;

extern "C" int mem_009251D0;
// Insert-at-index into a block-grown array (ret 8): clamps idx to count, grows storage by one block when full,
// shifts [idx, count) up by one row, copies the src row into slot idx, bumps count, returns idx.
extern "C" int mem_0092528C;
extern "C" __declspec(naked) int __fastcall fn_006D2170(void* self, int edx_unused, int idx, void* src) {
    __asm {
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr [esp + 0x10]
        mov edx, dword ptr [esi]
        cmp edi, edx
        jle idx_ok
        mov edi, edx
idx_ok:
        mov eax, dword ptr [esi + 0x4]
        mov ecx, dword ptr [esi + 0x8]
        mov ebx, eax
        imul ebx, ecx
        cmp edx, ebx
        jl no_grow
        mov edx, dword ptr [esi + 0xc]
        inc eax
        imul edx, eax
        imul edx, ecx
        mov dword ptr [esi + 0x4], eax
        mov eax, dword ptr [esi + 0x10]
        push edx
        push eax
        call dword ptr [mem_00925290]
        add esp, 0x8
        mov dword ptr [esi + 0x10], eax
no_grow:
        mov eax, dword ptr [esi]
        mov ebx, dword ptr [mem_0092528C]
        cmp edi, eax
        jge no_shift
        mov ecx, dword ptr [esi + 0xc]
        sub eax, edi
        imul eax, ecx
        push eax
        mov eax, ecx
        imul eax, edi
        mov edx, dword ptr [esi + 0x10]
        add eax, edx
        push eax
        lea eax, [edi + 0x1]
        imul eax, ecx
        add eax, edx
        push eax
        call ebx
        add esp, 0xc
no_shift:
        mov eax, dword ptr [esi + 0xc]
        mov ecx, dword ptr [esp + 0x14]
        push eax
        imul eax, edi
        push ecx
        mov ecx, dword ptr [esi + 0x10]
        add eax, ecx
        push eax
        call ebx
        mov eax, dword ptr [esi]
        add esp, 0xc
        inc eax
        mov dword ptr [esi], eax
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 0x8
    }
}
extern "C" void ext_006DEEA0();
extern "C" void ext_006D2130();
extern "C" void ext_006FD3A0();

extern "C" void ext_006FD3A0();
extern "C" __declspec(naked) void __fastcall fn_006D9470(void* self) {
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
        _emit 0xb9
        _emit 0x10
        _emit 0xd9
        _emit 0xb5
        _emit 0x00
        _emit 0xe9
        _emit 0x06
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x8b
        _emit 0xc1
        _emit 0x53
        _emit 0x33
        _emit 0xdb
        _emit 0xb9
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x18
        _emit 0xc7
        _emit 0x40
        _emit 0x04
        _emit 0x00
        _emit 0x00
        _emit 0x5e
        _emit 0x40
        _emit 0xc7
        _emit 0x40
        _emit 0x08
        _emit 0x6c
        _emit 0x92
        _emit 0xaa
        _emit 0x00
        _emit 0x89
        _emit 0x48
        _emit 0x0c
        _emit 0xc7
        _emit 0x40
        _emit 0x10
        _emit 0x08
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xba
        _emit 0x03
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xc7
        _emit 0x40
        _emit 0x14
        _emit 0x64
        _emit 0x92
        _emit 0xaa
        _emit 0x00
        _emit 0x89
        _emit 0x50
        _emit 0x18
        _emit 0x88
        _emit 0x48
        _emit 0x1c
        _emit 0x88
        _emit 0x48
        _emit 0x1d
        _emit 0x89
        _emit 0x58
        _emit 0x20
        _emit 0xc7
        _emit 0x40
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x59
        _emit 0x40
        _emit 0xc7
        _emit 0x40
        _emit 0x28
        _emit 0x60
        _emit 0x92
        _emit 0xaa
        _emit 0x00
        _emit 0xc7
        _emit 0x40
        _emit 0x2c
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xc7
        _emit 0x40
        _emit 0x30
        _emit 0x07
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xc7
        _emit 0x40
        _emit 0x34
        _emit 0x58
        _emit 0x92
        _emit 0xaa
        _emit 0x00
        _emit 0x89
        _emit 0x50
        _emit 0x38
        _emit 0x88
        _emit 0x48
        _emit 0x3c
        _emit 0x88
        _emit 0x48
        _emit 0x3d
        _emit 0x89
        _emit 0x58
        _emit 0x40
        _emit 0x56
        _emit 0xc7
        _emit 0x40
        _emit 0x44
        _emit 0x00
        _emit 0x00
        _emit 0x4e
        _emit 0x40
        _emit 0x57
        _emit 0xc7
        _emit 0x40
        _emit 0x48
        _emit 0x54
        _emit 0x92
        _emit 0xaa
        _emit 0x00
        _emit 0xbf
        _emit 0x06
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x50
        _emit 0x4c
        _emit 0x89
        _emit 0x78
        _emit 0x50
        _emit 0xc7
        _emit 0x40
        _emit 0x54
        _emit 0x4c
        _emit 0x92
        _emit 0xaa
        _emit 0x00
        _emit 0x89
        _emit 0x50
        _emit 0x58
        _emit 0x88
        _emit 0x48
        _emit 0x5c
        _emit 0x88
        _emit 0x48
        _emit 0x5d
        _emit 0x89
        _emit 0x58
        _emit 0x60
        _emit 0xc7
        _emit 0x40
        _emit 0x64
        _emit 0x00
        _emit 0x00
        _emit 0x49
        _emit 0x40
        _emit 0xc7
        _emit 0x40
        _emit 0x68
        _emit 0x48
        _emit 0x92
        _emit 0xaa
        _emit 0x00
        _emit 0xbe
        _emit 0x05
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xc7
        _emit 0x40
        _emit 0x6c
        _emit 0x04
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x70
        _emit 0x70
        _emit 0xc7
        _emit 0x40
        _emit 0x74
        _emit 0x40
        _emit 0x92
        _emit 0xaa
        _emit 0x00
        _emit 0x89
        _emit 0x50
        _emit 0x78
        _emit 0x88
        _emit 0x48
        _emit 0x7c
        _emit 0x88
        _emit 0x48
        _emit 0x7d
        _emit 0x89
        _emit 0x98
        _emit 0x80
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xc7
        _emit 0x80
        _emit 0x84
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x48
        _emit 0x40
        _emit 0xc7
        _emit 0x80
        _emit 0x88
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x3c
        _emit 0x92
        _emit 0xaa
        _emit 0x00
        _emit 0x89
        _emit 0xb0
        _emit 0x8c
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x90
        _emit 0x90
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xc7
        _emit 0x80
        _emit 0x94
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x34
        _emit 0x92
        _emit 0xaa
        _emit 0x00
        _emit 0x89
        _emit 0x90
        _emit 0x98
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x88
        _emit 0x88
        _emit 0x9c
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x88
        _emit 0x98
        _emit 0x9d
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x98
        _emit 0xa0
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xc7
        _emit 0x80
        _emit 0xa4
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x3e
        _emit 0x40
        _emit 0xc7
        _emit 0x80
        _emit 0xa8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x30
        _emit 0x92
        _emit 0xaa
        _emit 0x00
        _emit 0x89
        _emit 0xb8
        _emit 0xac
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x90
        _emit 0xb0
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xc7
        _emit 0x80
        _emit 0xb4
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x28
        _emit 0x92
        _emit 0xaa
        _emit 0x00
        _emit 0x89
        _emit 0x90
        _emit 0xb8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x88
        _emit 0x88
        _emit 0xbc
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xbf
        _emit 0x05
        _emit 0x6a
        _emit 0x94
        _emit 0xa2
        _emit 0x88
        _emit 0x88
        _emit 0xbd
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xbe
        _emit 0x53
        _emit 0xf8
        _emit 0x3d
        _emit 0x40
        _emit 0x89
        _emit 0xb8
        _emit 0xc0
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0xb0
        _emit 0xc4
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xc7
        _emit 0x80
        _emit 0xc8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x1c
        _emit 0x92
        _emit 0xaa
        _emit 0x00
        _emit 0xc7
        _emit 0x80
        _emit 0xcc
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x08
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xc7
        _emit 0x80
        _emit 0xd0
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x04
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xc7
        _emit 0x80
        _emit 0xd4
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x10
        _emit 0x92
        _emit 0xaa
        _emit 0x00
        _emit 0x89
        _emit 0x90
        _emit 0xd8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x88
        _emit 0x88
        _emit 0xdc
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x88
        _emit 0x88
        _emit 0xdd
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0xb8
        _emit 0xe0
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0xb0
        _emit 0xe4
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xbe
        _emit 0x09
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xc7
        _emit 0x80
        _emit 0xe8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x04
        _emit 0x92
        _emit 0xaa
        _emit 0x00
        _emit 0x89
        _emit 0xb0
        _emit 0xec
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0xb0
        _emit 0xf0
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xc7
        _emit 0x80
        _emit 0xf4
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xf8
        _emit 0x91
        _emit 0xaa
        _emit 0x00
        _emit 0x89
        _emit 0x90
        _emit 0xf8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x88
        _emit 0x88
        _emit 0xfc
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x88
        _emit 0x88
        _emit 0xfd
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x98
        _emit 0x00
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0xc7
        _emit 0x80
        _emit 0x04
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x39
        _emit 0x40
        _emit 0xbe
        _emit 0x0a
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xc7
        _emit 0x80
        _emit 0x08
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0xf4
        _emit 0x91
        _emit 0xaa
        _emit 0x00
        _emit 0x89
        _emit 0xb0
        _emit 0x0c
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0xc7
        _emit 0x80
        _emit 0x10
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xc7
        _emit 0x80
        _emit 0x14
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0xf0
        _emit 0x91
        _emit 0xaa
        _emit 0x00
        _emit 0x89
        _emit 0x90
        _emit 0x18
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x88
        _emit 0x88
        _emit 0x1c
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x88
        _emit 0x88
        _emit 0x1d
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x98
        _emit 0x20
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0xc7
        _emit 0x80
        _emit 0x24
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x38
        _emit 0x40
        _emit 0xc7
        _emit 0x80
        _emit 0x28
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0xec
        _emit 0x91
        _emit 0xaa
        _emit 0x00
        _emit 0xc7
        _emit 0x80
        _emit 0x2c
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x0b
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x88
        _emit 0x30
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0xc7
        _emit 0x80
        _emit 0x34
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0xe4
        _emit 0x91
        _emit 0xaa
        _emit 0x00
        _emit 0x89
        _emit 0x90
        _emit 0x38
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x88
        _emit 0x88
        _emit 0x3c
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x88
        _emit 0x88
        _emit 0x3d
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x98
        _emit 0x40
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0xbf
        _emit 0xdc
        _emit 0x91
        _emit 0xaa
        _emit 0x00
        _emit 0xc7
        _emit 0x80
        _emit 0x44
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x3e
        _emit 0x40
        _emit 0x89
        _emit 0xb8
        _emit 0x48
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0xc7
        _emit 0x80
        _emit 0x4c
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x07
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0xb0
        _emit 0x50
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0xb8
        _emit 0x54
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x98
        _emit 0x58
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x88
        _emit 0x88
        _emit 0x5c
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x88
        _emit 0x88
        _emit 0x5d
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0xc7
        _emit 0x80
        _emit 0x60
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x60
        _emit 0xe5
        _emit 0xd0
        _emit 0x22
        _emit 0xc7
        _emit 0x80
        _emit 0x64
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0xdb
        _emit 0xf9
        _emit 0x37
        _emit 0x40
        _emit 0xc7
        _emit 0x80
        _emit 0x68
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0xd4
        _emit 0x91
        _emit 0xaa
        _emit 0x00
        _emit 0xc7
        _emit 0x80
        _emit 0x6c
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x0d
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0xb0
        _emit 0x70
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0xc7
        _emit 0x80
        _emit 0x74
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0xc8
        _emit 0x91
        _emit 0xaa
        _emit 0x00
        _emit 0x89
        _emit 0x90
        _emit 0x78
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x88
        _emit 0x88
        _emit 0x7c
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x5f
        _emit 0x88
        _emit 0x98
        _emit 0x7d
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x5e
        _emit 0x5b
        _emit 0xc3
    }
}
extern "C" void ext_006D8B10();
extern "C" void ext_006D8EE0();
extern "C" void ext_0077F9E0();

extern "C" void ext_006D8EE0();
extern "C" void ext_0077F9E0();
extern "C" void ext_00715550();
extern "C" __declspec(naked) void __fastcall fn_006D8980(void* self) {
    __asm {
        push esi
        push edi
        xor edi, edi
        push edi
        call ext_006FDF70
        mov esi, eax
        test esi, esi
        je L_fail
        mov ecx, esi
        call ext_00715550
        test eax, eax
        je L_fail
        mov ecx, esi
        call ext_00715550
        mov eax, dword ptr [eax]
        cmp eax, 0x3
        jl L_fail
        cmp eax, 0x4
        jg L_fail
        mov ecx, esi
        call ext_00715550
        mov eax, dword ptr [eax]
        pop edi
        pop esi
        ret
    L_fail:
        mov eax, edi
        pop edi
        pop esi
        ret
    }
}
extern "C" void ext_006B9D10();
extern "C" void ext_006B9D20();
extern "C" void ext_006B9EC0();

extern "C" void ext_006B9D20();
extern "C" void ext_006B9EC0();
extern "C" void ext_006B9EC0();
extern "C" __declspec(naked) void __fastcall fn_006D5AD0(void* self) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        add ecx, 0x5c
        push eax
        call ext_006B9EC0
        mov al, 0x1
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
        push ecx
        push esi
        mov esi, dword ptr [esp + 0xc]
        add ecx, 0x5c
        mov dword ptr [esp + 0x4], 0x0
        push ecx
        mov ecx, esi
        call ext_006B9D20
        mov eax, esi
        pop esi
        pop ecx
        ret 0x4
    }
}

extern "C" void ext_006C9900();
extern "C" void ext_006DC510();
extern "C" void ext_006DC550();
extern "C" void ext_006BA7C0();
extern "C" void ext_006DEBA0();
extern "C" void ext_006A6F00();
extern "C" void ext_006D98D0();
extern "C" void __stdcall ext_006DAE30(void* p5, void* p4, void* p3, void* p2, void* p1, void* p0, int a1);

extern "C" void __stdcall ext_006DAE30(void* p5, void* p4, void* p3, void* p2, void* p1, void* p0, int a1);
extern "C" __declspec(naked) bool __fastcall fn_006DCB60(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        xor bl, bl
        mov esi, 0x1
        call ext_006DC550
        cmp eax, esi
        jle done
        mov ebp, dword ptr [esp + 0x1c]
    loop_top:
        test bl, bl
        jne done
        mov eax, dword ptr [esp + 0x18]
        mov ecx, dword ptr [esp + 0x14]
        push ebp
        push eax
        push ecx
        push esi
        mov ecx, edi
        call ext_006DC510
        mov ecx, eax
        call ext_006C9900
        mov ecx, edi
        mov bl, al
        inc esi
        call ext_006DC550
        cmp esi, eax
        jl loop_top
    done:
        pop edi
        pop esi
        mov al, bl
        pop ebp
        pop ebx
        ret 0xc
    }
}

extern "C" void ext_0077FB70();

// [0x006D90D0] sub_006D90D0 (80 bytes)
extern "C" __declspec(naked) void __fastcall fn_006D90D0(void* self) {
    __asm {
        push ecx
        mov eax, dword ptr [ecx + 0xc]
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

// [0x006D7AE0] sub_006D7AE0 (80 bytes)
extern "C" void ext_006D7BE0();
extern "C" void ext_0070CBF0();
extern "C" int mem_008B9248;
extern "C" int mem_00993990;

extern "C" __declspec(naked) void* __fastcall fn_006D7AE0(void* self, int edx_unused, int a1) {
    __asm {
        push -1
        push offset mem_008B9248
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        mov eax, dword ptr [esp + 0x14]
        push esi
        mov esi, ecx
        push eax
        mov dword ptr [esp + 0x8], esi
        call ext_0070CBF0
        mov ecx, esi
        mov dword ptr [esp + 0x10], 0
        mov dword ptr [esi], offset mem_00993990
        call ext_006D7BE0
        mov ecx, dword ptr [esp + 0x8]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 4
    }
}

// [0x006D4140] sub_006D4140 (96 bytes)
extern "C" void ext_006A5C62();
extern "C" int mem_008B8FDB;

extern "C" __declspec(naked) void* __fastcall fn_006D4140(void* self) {
    __asm {
        push -1
        push offset mem_008B8FDB
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        push 0x1d0
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp + 4], eax
        test eax, eax
        mov dword ptr [esp + 0x10], 0
        je label_null
        push esi
        mov ecx, eax
        call fn_006D7AE0
        pop esi
        mov ecx, dword ptr [esp + 4]
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    label_null:
        mov ecx, dword ptr [esp + 8]
        xor eax, eax
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x006DDD50] sub_006DDD50 (95 bytes)
extern "C" void ext_006A5C62();
extern "C" void ext_006DDDB0();

extern "C" __declspec(naked) void* __cdecl fn_006DDD50(void* a1) {
    __asm {
        push -1
        push 0x008B8FDB
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push 0xA0
        call ext_006A5C62
        add esp, 4
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x00
        test eax, eax
        mov dword ptr [esp + 0xC], 0
        je label_null
        mov ecx, dword ptr [esp + 0x14]
        push ecx
        mov ecx, eax
        call ext_006DDDB0
        mov ecx, dword ptr [esp + 4]
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    label_null:
        mov ecx, dword ptr [esp + 4]
        xor eax, eax
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x006D41A0] sub_006D41A0 (96 bytes)
extern "C" void ext_006A5C62();
extern "C" void ext_00717CD0();
extern "C" int mem_008B8FDB;

extern "C" __declspec(naked) void* __fastcall fn_006D41A0(void* self) {
    __asm {
        push -1
        push offset mem_008B8FDB
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        push 0x1e0
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp + 4], eax
        test eax, eax
        mov dword ptr [esp + 0x10], 0
        je label_null
        push esi
        mov ecx, eax
        call ext_00717CD0
        pop esi
        mov ecx, dword ptr [esp + 4]
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    label_null:
        mov ecx, dword ptr [esp + 8]
        xor eax, eax
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x006D48D0] sub_006D48D0 (96 bytes)
extern "C" void ext_006A5C62();
extern "C" void ext_006D5C50();
extern "C" int mem_008B8FDB;

extern "C" __declspec(naked) void* __fastcall fn_006D48D0(void* self) {
    __asm {
        push -1
        push offset mem_008B8FDB
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        push 0x280
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp + 4], eax
        test eax, eax
        mov dword ptr [esp + 0x10], 0
        je label_null
        push esi
        mov ecx, eax
        call ext_006D5C50
        pop esi
        mov ecx, dword ptr [esp + 4]
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    label_null:
        mov ecx, dword ptr [esp + 8]
        xor eax, eax
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x006D8D60] sub_006D8D60 (111 bytes)
extern "C" void ext_00705450();
extern "C" void ext_00711220();

extern "C" __declspec(naked) void __fastcall fn_006D8D60(void* self) {
    __asm {
        push -1
        push 0x8b93b4
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        lea ecx, [esi + 0x1f0]
        mov dword ptr [esp + 0x10], 0x2
        call ext_00711220
        lea ecx, [esi + 0x168]
        mov byte ptr [esp + 0x10], 0x1
        call ext_00711220
        lea ecx, [esi + 0xe0]
        mov byte ptr [esp + 0x10], 0x0
        call ext_00711220
        mov ecx, esi
        mov dword ptr [esp + 0x10], 0xffffffff
        call ext_00705450
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

extern "C" void ext_006CD350();
extern "C" void ext_006DF100();

// [0x006DF100] sub_006DF100 (111 bytes)
extern "C" __declspec(naked) void __fastcall fn_006DF100(void* self) {
    __asm {
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 0x18]
        push esi
        mov esi, ecx
        push edi
        mov ecx, dword ptr [esi + 0x38]
        test ecx, ecx
        je L_skip
        mov eax, dword ptr [esp + 0x1c]
        mov edx, dword ptr [esp + 0x18]
        push ebp
        push eax
        push edx
        call ext_006CD350
        mov ebx, dword ptr [esp + 0x14]
        fstp qword ptr [ebx]
        add ebx, 8
        jmp L_loop_init
    L_skip:
        mov ebx, dword ptr [esp + 0x14]
    L_loop_init:
        mov eax, dword ptr [esi]
        mov ecx, esi
        xor edi, edi
        call dword ptr [eax + 0x14]
        test eax, eax
        jle L_done
    L_loop:
        mov ecx, dword ptr [esp + 0x1c]
        mov edx, dword ptr [esp + 0x18]
        mov eax, dword ptr [esi]
        push ebp
        push ecx
        push edx
        push ebx
        push edi
        mov ecx, esi
        call dword ptr [eax + 0x18]
        mov ecx, eax
        call ext_006DF100
        mov edx, dword ptr [esi]
        mov ecx, esi
        mov ebx, eax
        inc edi
        call dword ptr [edx + 0x14]
        cmp edi, eax
        jl L_loop
    L_done:
        pop edi
        pop esi
        mov eax, ebx
        pop ebp
        pop ebx
        ret 0x10
    }
}

extern "C" void ext_006D2200();
extern "C" void ext_006DE130();
extern "C" void ext_006DEEA0();

// [0x006DE570] sub_006DE570 (128 bytes)
extern "C" __declspec(naked) void __fastcall fn_006DE570(void* self) {
    __asm {
        push esi
        push edi
        mov esi, ecx
        call ext_006DEEA0
        mov edi, dword ptr [esp + 0xc]
        test eax, eax
        jne short loc_006DE596
        mov eax, dword ptr [esi]
        push edi
        mov ecx, esi
        call dword ptr [eax + 0x18]
        test eax, eax
        je short loc_006DE596
        mov edx, dword ptr [eax]
        push 0
        mov ecx, eax
        call dword ptr [edx + 0x2c]

loc_006DE596:
        push edi
        lea ecx, [esi + 0x20]
        call ext_006D2200
        pop edi
        pop esi
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

        push ebx
        mov ebx, dword ptr [esp + 8]
        push esi
        mov esi, ecx
        push edi
        push ebx
        mov eax, dword ptr [esi]
        call dword ptr [eax + 0x18]
        mov edi, eax
        test edi, edi
        je short loc_006DE5D8
        mov ecx, esi
        call ext_006DEEA0
        test eax, eax
        jne short loc_006DE5D8
        mov edx, dword ptr [edi]
        push eax
        mov ecx, edi
        call dword ptr [edx + 0x2c]

loc_006DE5D8:
        push ebx
        lea ecx, [esi + 0x20]
        call ext_006D2200
        push 0
        mov ecx, edi
        call ext_006DE130
        pop edi
        pop esi
        pop ebx
        ret 4
    }
}

// [0x006D7D00] sub_006D7D00 (144 bytes)
extern "C" void ext_006D2130();
extern "C" void ext_006D7E60();
extern "C" void ext_0070CBF0();
extern "C" __declspec(naked) void* __fastcall fn_006D7D00(void* self, int edx_unused, int a1) {
    __asm {
        push -1
        push 0x8b9284
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        push ecx
        mov eax, [esp + 0x14]
        push esi
        push edi
        mov esi, ecx
        push eax
        mov [esp + 0xc], esi
        call ext_0070CBF0
        lea edi, [esi + 0x1c4]
        push 0xc
        push 0x100
        mov ecx, edi
        mov dword ptr [esp + 0x1c], 0
        call ext_006D2130
        lea ecx, [edi + 0x10]
        mov [edi + 0x14], ecx
        lea edi, [esi + 0x1dc]
        push 4
        push 0x400
        mov ecx, edi
        mov byte ptr [esp + 0x1c], 1
        call ext_006D2130
        lea edx, [edi + 0x10]
        mov [edi + 0x14], edx
        mov ecx, esi
        mov byte ptr [esp + 0x14], 2
        mov dword ptr [esi], 0x9939b4
        call ext_006D7E60
        mov ecx, [esp + 0xc]
        mov eax, esi
        pop edi
        pop esi
        mov fs:[0], ecx
        add esp, 0x10
        ret 4
    }
}

// [0x006D2B30] sub_006D2B30 (160 bytes)
extern "C" int mem_008C08E8;
extern "C" void ext_006D2940();
extern "C" void ext_006D2AA0();
extern "C" void ext_006D80A0();

extern "C" __declspec(naked) int __fastcall fn_006D2B30(void* self, int edx_unused, int a1, void* a2) {
    __asm {
        push -1
        push offset mem_008C08E8
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x20
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr [esp + 0x3c]
        mov dword ptr [esp + 0x34], 0
        lea esi, [eax + 1]
        mov eax, dword ptr [edi]
        cmp esi, eax
        jge short L_notfound_006D2B30
    L_loop_006D2B30:
        lea ecx, [esp + 0xc]
        push esi
        push ecx
        mov ecx, edi
        call ext_006D2AA0
        lea edx, [esp + 0x40]
        mov ecx, eax
        push edx
        call ext_006D2940
        lea ecx, [esp + 0xc]
        mov bl, al
        call ext_006D80A0
        test bl, bl
        jne short L_found_006D2B30
        mov eax, dword ptr [edi]
        inc esi
        cmp esi, eax
        jl short L_loop_006D2B30
    L_notfound_006D2B30:
        lea ecx, [esp + 0x40]
        call ext_006D80A0
        pop edi
        pop esi
        or eax, -1
        pop ebx
        mov ecx, dword ptr [esp + 0x20]
        mov dword ptr fs:[0], ecx
        add esp, 0x2c
        ret 0x24
    L_found_006D2B30:
        lea ecx, [esp + 0x40]
        call ext_006D80A0
        mov ecx, dword ptr [esp + 0x2c]
        mov eax, esi
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x2c
        ret 0x24
    }
}

// [0x006D3DF0] sub_006D3DF0 (160 bytes)
extern "C" __declspec(naked) void __fastcall fn_006D3DF0(void* self) {
    __asm {
        push ecx
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr [edi]
        call dword ptr [eax + 0x6c]
        mov esi, eax
        test esi, esi
        je SKIP1
        mov eax, dword ptr [edi + 0x19c]
        lea ecx, [edi + 0x19c]
        lea edx, [esp + 0x8]
        mov dword ptr [esp + 0x8], esi
        push edx
        push eax
        call ext_006D2170
SKIP1:
        mov eax, esi
        pop edi
        pop esi
        pop ecx
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
        push -1
        push 0x8b8fdb
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        push 0x138
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp + 4], eax
        test eax, eax
        mov dword ptr [esp + 0x10], 0
        je SKIP2
        push esi
        mov ecx, eax
        call ext_006BBCC0
        pop esi
        mov ecx, dword ptr [esp + 4]
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
SKIP2:
        mov ecx, dword ptr [esp + 8]
        xor eax, eax
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

extern "C" int __cdecl strcmp(const char*, const char*);
extern "C" const char* __fastcall ext_006C9330(void* self);
extern "C" void __fastcall ext_006E7410(void* self, int edx, int a, const char* b);
extern "C" void __fastcall ext_006C9250(void* self);
extern "C" void __cdecl ext_006A5C5C(void* ptr);

// [0x006DC5F0] sub_006DC5F0 (175 bytes)
extern "C" __declspec(naked) void __fastcall fn_006DC5F0(void* self) {
    __asm {
        push    ebx
        push    ebp
        mov     ebp, ecx
        push    esi
        push    edi
        xor     edi, edi
        mov     eax, dword ptr [ebp + 0xb8]
        lea     ebx, [ebp + 0xb8]
        test    eax, eax
        jle     loc_6dc64e
    loc_6dc608:
        mov     eax, dword ptr [ebp + 0xc8]
        mov     esi, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [eax + 4*edi]
        call    ext_006C9330
    loc_6dc61a:
        mov     dl, byte ptr [eax]
        mov     cl, dl
        cmp     dl, byte ptr [esi]
        jne     loc_6dc63e
        test    cl, cl
        je      loc_6dc63a
        mov     dl, byte ptr [eax + 0x1]
        mov     cl, dl
        cmp     dl, byte ptr [esi + 0x1]
        jne     loc_6dc63e
        add     eax, 0x2
        add     esi, 0x2
        test    cl, cl
        jne     loc_6dc61a
    loc_6dc63a:
        xor     eax, eax
        jmp     loc_6dc643
    loc_6dc63e:
        sbb     eax, eax
        sbb     eax, -0x1
    loc_6dc643:
        test    eax, eax
        je      loc_6dc669
        mov     eax, dword ptr [ebx]
        inc     edi
        cmp     edi, eax
        jl      loc_6dc608
    loc_6dc64e:
        push    0x00aa93d4
    loc_6dc653:
        mov     ecx, dword ptr [ebp + 0xec]
        push    0x0
        call    ext_006E7410
        pop     edi
        pop     esi
        pop     ebp
        xor     al, al
        pop     ebx
        ret     0x4
    loc_6dc669:
        test    edi, edi
        jne     loc_6dc674
        push    0x00aa9408
        jmp     loc_6dc653
    loc_6dc674:
        mov     eax, dword ptr [ebx + 0x10]
        push    edi
        mov     ecx, ebx
        mov     esi, dword ptr [eax + 4*edi]
        call    ext_006D2200
        test    esi, esi
        je      loc_6dc696
        mov     ecx, esi
        call    ext_006C9250
        push    esi
        call    ext_006A5C5C
        add     esp, 0x4
    loc_6dc696:
        pop     edi
        pop     esi
        pop     ebp
        mov     al, 0x1
        pop     ebx
        ret     0x4
    }
}

// [0x006DE4B0] sub_006DE4B0 (192 bytes)
extern "C" void ext_006DE3B0();
extern "C" int mem_009251D0;
extern "C" __declspec(naked) int __fastcall fn_006DE4B0(void* self, int edx_unused, void* arg0) {
    __asm {
        push    esi
        push    edi
        mov     esi, ecx
        call    ext_006DEEA0
        mov     edi, dword ptr [esp + 0x0c]
        test    eax, eax
        jne     loc_6de4c9
        mov     eax, dword ptr [edi]
        push    esi
        mov     ecx, edi
        call    dword ptr [eax + 0x2c]
    loc_6de4c9:
        mov     edx, dword ptr [esi + 0x20]
        add     esi, 0x20
        lea     ecx, [esp + 0x0c]
        mov     dword ptr [esp + 0x0c], edi
        push    ecx
        push    edx
        mov     ecx, esi
        call    ext_006D2170
        mov     eax, dword ptr [esi]
        pop     edi
        dec     eax
        pop     esi
        ret     0x4
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        push    ebx
        push    ebp
        push    esi
        mov     esi, ecx
        push    edi
        xor     edi, edi
        mov     eax, dword ptr [esi]
        call    dword ptr [eax + 0x14]
        mov     ebx, dword ptr [esp + 0x14]
        test    eax, eax
        jle     loc_6de534
        mov     ebp, dword ptr [mem_009251D0]
    loc_6de50b:
        mov     ecx, dword ptr [esi + 0x30]
        mov     ecx, dword ptr [ecx + 4 * edi]
        call    ext_006DE3B0
        push    eax
        mov     ecx, ebx
        call    ext_006DE3B0
        push    eax
        call    ebp
        add     esp, 0x8
        test    eax, eax
        jle     loc_6de555
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        inc     edi
        call    dword ptr [edx + 0x14]
        cmp     edi, eax
        jl      loc_6de50b
    loc_6de534:
        mov     edx, dword ptr [esi + 0x20]
        add     esi, 0x20
        lea     ecx, [esp + 0x14]
        mov     dword ptr [esp + 0x14], ebx
        push    ecx
        push    edx
        mov     ecx, esi
        call    ext_006D2170
        mov     eax, dword ptr [esi]
        pop     edi
        pop     esi
        pop     ebp
        dec     eax
        pop     ebx
        ret     0x4
    loc_6de555:
        lea     eax, [esp + 0x14]
        lea     ecx, [esi + 0x20]
        push    eax
        push    edi
        mov     dword ptr [esp + 0x1c], ebx
        call    ext_006D2170
        mov     eax, edi
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x4
    }
}

// [0x006DE060] sub_006DE060 (207 bytes)
extern "C" int mem_008B9566;
extern "C" int mem_00993C30;
extern "C" void ext_006D2160();
extern "C" void ext_006DE3F0();
extern "C" void ext_006DEAB0();
extern "C" void ext_006E5750();

extern "C" __declspec(naked) void __fastcall fn_006DE060(void* self) {
    __asm {
        push -1
        push offset mem_008B9566
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 8
        push esi
        push edi
        mov edi, ecx
        mov dword ptr [esp + 8], edi
        mov dword ptr [edi], offset mem_00993C30
        push 2
        mov dword ptr [esp + 0x1c], 0
        call ext_006E5750
        mov esi, dword ptr [edi + 0x98]
        test esi, esi
        je L_060_skip
        mov dword ptr [esp + 0xc], esi
        lea ecx, [esi + 0x28]
        mov byte ptr [esp + 0x18], 1
        call ext_006D2160
        lea ecx, [esi + 0x10]
        mov byte ptr [esp + 0x18], 0
        call ext_006D2160
        push esi
        call ext_006A5C5C
        add esp, 4
        mov dword ptr [edi + 0x98], 0
    L_060_skip:
        mov ecx, edi
        call ext_006DEAB0
        mov eax, dword ptr [edi + 0x50]
        test eax, eax
        je L_060_tail
        mov esi, dword ptr [eax + 0x20]
        lea ecx, [eax + 0x20]
        xor eax, eax
        test esi, esi
        jle L_060_tail
        mov edx, dword ptr [ecx + 0x10]
    L_060_loop:
        cmp dword ptr [edx], edi
        je L_060_found
        inc eax
        add edx, 4
        cmp eax, esi
        jl L_060_loop
        jmp L_060_tail
    L_060_found:
        test eax, eax
        jl L_060_tail
        push eax
        call ext_006D2200
    L_060_tail:
        push 0
        mov ecx, edi
        call ext_006DE3F0
        lea ecx, [edi + 0x20]
        mov dword ptr [esp + 0x18], 0xffffffff
        call ext_006D2160
        mov ecx, dword ptr [esp + 0x10]
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x14
        ret
    }
}

// [0x006D83C0] sub_006D83C0 (207 bytes)
extern "C" void ext_006A5C62();
extern "C" void ext_006D2130();
extern "C" void ext_006D2250();
extern "C" void ext_006D2300();
extern "C" void ext_006FC930();
extern "C" void ext_006FC9D0();
extern "C" void ext_006FDE80();
extern "C" void ext_006FDF70();
extern "C" __declspec(naked) void __fastcall fn_006D83C0(void* self) {
    __asm {
        push -1
        push 0x8b9326
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push ebx
        push esi
        push edi
        xor edi, edi
        mov esi, ecx
        push edi
        call ext_006FDF70
        mov ebx, eax
        cmp ebx, edi
        jne L_6D83FA
        mov ecx, esi
        call ext_006FDE80
        push eax
        mov ecx, esi
        call ext_006FDF70
        mov ebx, eax
    L_6D83FA:
        mov ecx, ebx
        call ext_006FC930
        mov esi, eax
        cmp esi, edi
        jne L_6D8465
        push 0x38
        call ext_006A5C62
        mov esi, eax
        add esp, 0x4
        mov dword ptr [esp + 0xc], esi
        cmp esi, edi
        mov dword ptr [esp + 0x18], edi
        je L_6D8453
        mov dword ptr [esi], edi
        mov dword ptr [esi + 0x4], edi
        lea edi, [esi + 0x8]
        push 0x10
        push 0x10
        mov ecx, edi
        call ext_006D2130
        lea eax, [edi + 0x10]
        mov dword ptr [edi + 0x14], eax
        lea edi, [esi + 0x20]
        push 0x4
        push 0x10
        mov ecx, edi
        mov byte ptr [esp + 0x20], 0x1
        call ext_006D2130
        lea ecx, [edi + 0x10]
        mov dword ptr [edi + 0x14], ecx
        jmp L_6D8455
    L_6D8453:
        xor esi, esi
    L_6D8455:
        push esi
        mov ecx, ebx
        mov dword ptr [esp + 0x1c], 0xffffffff
        call ext_006FC9D0
    L_6D8465:
        add esi, 0x8
        mov ecx, esi
        call ext_006D2250
        mov edx, dword ptr [esp + 0x20]
        mov ecx, esi
        push edx
        call ext_006D2300
        mov ecx, dword ptr [esp + 0x10]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 0x4
    }
}

// [0x006D4020] sub_006D4020 (288 bytes)
extern "C" void ext_006D7D00();
extern "C" void ext_006D8DD0();
extern "C" void ext_007006E0();
extern "C" int mem_008B8FDB;

extern "C" __declspec(naked) void* __fastcall fn_006D4020(void* self) {
    __asm {
        push -1
        push offset mem_008B8FDB
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        push 0x5c
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp + 4], eax
        test eax, eax
        mov dword ptr [esp + 0x10], 0
        je label_null1
        push esi
        mov ecx, eax
        call ext_007006E0
        pop esi
        mov ecx, dword ptr [esp + 4]
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    label_null1:
        mov ecx, dword ptr [esp + 8]
        xor eax, eax
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
        nop
        nop
        nop
        push -1
        push offset mem_008B8FDB
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        push 0x18
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp + 4], eax
        test eax, eax
        mov dword ptr [esp + 0x10], 0
        je label_null2
        push esi
        mov ecx, eax
        call ext_006D8DD0
        pop esi
        mov ecx, dword ptr [esp + 4]
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    label_null2:
        mov ecx, dword ptr [esp + 8]
        xor eax, eax
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
        nop
        nop
        nop
        push -1
        push offset mem_008B8FDB
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        push 0x1f8
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp + 4], eax
        test eax, eax
        mov dword ptr [esp + 0x10], 0
        je label_null3
        push esi
        mov ecx, eax
        call ext_006D7D00
        pop esi
        mov ecx, dword ptr [esp + 4]
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    label_null3:
        mov ecx, dword ptr [esp + 8]
        xor eax, eax
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x006D57D0] sub_006D57D0 (368 bytes)
extern "C" void ext_006B99C0();
extern "C" void ext_006B9D70();
extern "C" void ext_006B9D80();
extern "C" void ext_006B9E60();
extern "C" void ext_006B9F80();
extern "C" void ext_006BA370();
extern "C" void ext_006BA800();

extern "C" __declspec(naked) void __fastcall fn_006D57D0(void* self) {
    __asm {
        push -1
        push 0x8b9033
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0xe8
        mov eax, dword ptr [esp + 0x100]
        push ebx
        push esi
        push eax
        lea ecx, [esp + 0x10]
        mov dword ptr [esp + 0xc], 0
        call ext_006B9D80
        mov ebx, 1
        push 0
        push 0xaa870c
        lea ecx, [esp + 0x14]
        mov dword ptr [esp + 0x100], ebx
        call ext_006BA370
        cmp eax, -1
        jle SKIP_A
        push 0
        push 0xaa870c
        lea ecx, [esp + 0x14]
        call ext_006BA370
        add eax, 2
        lea ecx, [esp + 0x58]
        push eax
        push ecx
        lea ecx, [esp + 0x14]
        call ext_006BA800
        push eax
        lea ecx, [esp + 0x10]
        mov byte ptr [esp + 0xfc], 2
        call ext_006B9E60
        lea ecx, [esp + 0x58]
        mov byte ptr [esp + 0xf8], bl
        call ext_006B9D70
SKIP_A:
        lea ecx, [esp + 0xc]
        call ext_006B99C0
        test eax, eax
        jne SKIP_B
        push 0xaa8e74
        lea ecx, [esp + 0x10]
        call ext_006B9EC0
SKIP_B:
        mov edx, dword ptr [esp + 0x104]
        test edx, edx
        je SKIP_C
        push edi
        mov edi, edx
        or ecx, -1
        xor eax, eax
        repne scasb
        not ecx
        dec ecx
        pop edi
        je SKIP_C
        push edx
        lea ecx, [esp + 0xa8]
        call ext_006B9D80
        lea edx, [esp + 0xc]
        mov byte ptr [esp + 0xf8], 3
        push edx
        push eax
        lea eax, [esp + 0x60]
        push eax
        call ext_006B9F80
        add esp, 0xc
        push eax
        lea ecx, [esp + 0x10]
        mov byte ptr [esp + 0xfc], 4
        call ext_006B9E60
        lea ecx, [esp + 0x58]
        mov byte ptr [esp + 0xf8], 3
        call ext_006B9D70
        lea ecx, [esp + 0xa4]
        mov byte ptr [esp + 0xf8], bl
        call ext_006B9D70
SKIP_C:
        mov esi, dword ptr [esp + 0x100]
        lea ecx, [esp + 0xc]
        push ecx
        mov ecx, esi
        call ext_006B9D20
        mov dword ptr [esp + 0x8], ebx
        lea ecx, [esp + 0xc]
        mov byte ptr [esp + 0xf8], 0
        call ext_006B9D70
        mov ecx, dword ptr [esp + 0xf0]
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0xf4
        ret
    }
}

// [0x006D3E90] sub_006D3E90 (400 bytes)
extern "C" void ext_006A5C62();
extern "C" void ext_006C1BE0();
extern "C" void ext_007153B0();
extern "C" void ext_0071A880();
extern "C" void ext_0071DD50();
extern "C" int mem_008B8FDB;

extern "C" __declspec(naked) void __fastcall fn_006D3E90(void* self, int edx_unused, int a1) {
    __asm {
        push -1
        push offset mem_008B8FDB
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        push 0x548
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp + 4], eax
        test eax, eax
        mov dword ptr [esp + 0x10], 0
        je label_null
        mov ecx, dword ptr [esp + 0x18]
        push ecx
        push esi
        mov ecx, eax
        call ext_006C1BE0
        pop esi
        mov ecx, dword ptr [esp + 4]
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 4
    label_null:
        mov ecx, dword ptr [esp + 8]
        xor eax, eax
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 4
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        push -1
        push offset mem_008B8FDB
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        push 0x14
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp + 4], eax
        test eax, eax
        mov dword ptr [esp + 0x10], 0
        je label_null2
        push esi
        mov ecx, eax
        call ext_0071DD50
        pop esi
        mov ecx, dword ptr [esp + 4]
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    label_null2:
        mov ecx, dword ptr [esp + 8]
        xor eax, eax
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
        nop
        nop
        nop
        push -1
        push offset mem_008B8FDB
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        push 0x14
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp + 4], eax
        test eax, eax
        mov dword ptr [esp + 0x10], 0
        je label_null3
        push esi
        mov ecx, eax
        call ext_007153B0
        pop esi
        mov ecx, dword ptr [esp + 4]
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    label_null3:
        mov ecx, dword ptr [esp + 8]
        xor eax, eax
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
        nop
        nop
        nop
        push -1
        push offset mem_008B8FDB
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        push 0x118
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp + 4], eax
        test eax, eax
        mov dword ptr [esp + 0x10], 0
        je label_null4
        push esi
        mov ecx, eax
        call ext_0071A880
        pop esi
        mov ecx, dword ptr [esp + 4]
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    label_null4:
        mov ecx, dword ptr [esp + 8]
        xor eax, eax
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x006D4200] sub_006D4200 (1744 bytes)
extern "C" void ext_006A5C62();
extern "C" void ext_006B9D70();
extern "C" void ext_006B9D80();
extern "C" void ext_006D6B70();
extern "C" void ext_006E66D0();
extern "C" void ext_006E67C0();
extern "C" void ext_006EA0C0();
extern "C" void ext_00702010();
extern "C" void ext_00704C40();
extern "C" void ext_0070AF60();
extern "C" void ext_0070E570();
extern "C" void ext_0070FEC0();
extern "C" void ext_00728DE0();
extern "C" void ext_0072AF80();
extern "C" void ext_0072B220();
extern "C" void ext_0072B280();
extern "C" void ext_0072B2F0();
extern "C" void ext_0072B890();
extern "C" void ext_0072C0B0();

extern "C" __declspec(naked) void __fastcall fn_006D4200(void* self) {
    __asm {
        push -0x1
        push 0x8b8fdb
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        mov esi, ecx
        push 0xc
        call ext_006A5C62
        add esp, 0x4
        mov dword ptr [esp + 0x4], eax
        test eax, eax
        mov dword ptr [esp + 0x10], 0x0
        je L_006D424B
        push esi
        mov ecx, eax
        call ext_0072B2F0
        pop esi
        mov ecx, dword ptr [esp + 0x4]
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret
    L_006D424B:
        mov ecx, dword ptr [esp + 0x8]
        xor eax, eax
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret
        nop
        nop
        nop
        push -0x1
        push 0x8b8fdb
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push 0x300
        call ext_006A5C62
        add esp, 0x4
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x00
        test eax, eax
        mov dword ptr [esp + 0xc], 0x0
        je L_006D42A9
        mov ecx, eax
        call ext_0070E570
        mov ecx, dword ptr [esp + 0x4]
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret
    L_006D42A9:
        mov ecx, dword ptr [esp + 0x4]
        xor eax, eax
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret
        nop
        nop
        nop
        nop
        nop
        nop
        push -0x1
        push 0x8b8fdb
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        mov esi, ecx
        push 0x19c
        call ext_006A5C62
        add esp, 0x4
        mov dword ptr [esp + 0x4], eax
        test eax, eax
        mov dword ptr [esp + 0x10], 0x0
        je L_006D4315
        mov ecx, dword ptr [esp + 0x18]
        push ecx
        push esi
        mov ecx, eax
        call ext_0070AF60
        pop esi
        mov ecx, dword ptr [esp + 0x4]
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret 0x4
    L_006D4315:
        mov ecx, dword ptr [esp + 0x8]
        xor eax, eax
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret 0x4
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        push -0x1
        push 0x8b8fdb
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        mov esi, ecx
        push 0x40
        call ext_006A5C62
        add esp, 0x4
        mov dword ptr [esp + 0x4], eax
        test eax, eax
        mov dword ptr [esp + 0x10], 0x0
        je L_006D437B
        push esi
        mov ecx, eax
        call ext_0072B280
        pop esi
        mov ecx, dword ptr [esp + 0x4]
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret
    L_006D437B:
        mov ecx, dword ptr [esp + 0x8]
        xor eax, eax
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret
        nop
        nop
        nop
        push -0x1
        push 0x8b8fdb
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        mov esi, ecx
        push 0x270
        call ext_006A5C62
        add esp, 0x4
        mov dword ptr [esp + 0x4], eax
        test eax, eax
        mov dword ptr [esp + 0x10], 0x0
        je L_006D43E5
        mov ecx, dword ptr [esp + 0x18]
        push ecx
        push esi
        mov ecx, eax
        call ext_00702010
        pop esi
        mov ecx, dword ptr [esp + 0x4]
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret 0x4
    L_006D43E5:
        mov ecx, dword ptr [esp + 0x8]
        xor eax, eax
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret 0x4
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        push -0x1
        push 0x8b8fdb
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        mov esi, ecx
        push 0xf4
        call ext_006A5C62
        add esp, 0x4
        mov dword ptr [esp + 0x4], eax
        test eax, eax
        mov dword ptr [esp + 0x10], 0x0
        je L_006D4455
        mov ecx, dword ptr [esp + 0x18]
        push ecx
        push esi
        mov ecx, eax
        call ext_00704C40
        pop esi
        mov ecx, dword ptr [esp + 0x4]
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret 0x4
    L_006D4455:
        mov ecx, dword ptr [esp + 0x8]
        xor eax, eax
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret 0x4
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        push -0x1
        push 0x8b8fa3
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x4c
        mov eax, dword ptr [esp + 0x5c]
        push esi
        mov esi, ecx
        push eax
        lea ecx, [esp + 0x8]
        call ext_006B9D80
        push 0x168
        mov dword ptr [esp + 0x5c], 0x0
        call ext_006A5C62
        add esp, 0x4
        mov dword ptr [esp + 0x60], eax
        test eax, eax
        mov byte ptr [esp + 0x58], 0x1
        je L_006D44D1
        mov ecx, dword ptr [esp + 0x64]
        lea edx, [esp + 0x4]
        push ecx
        push edx
        push esi
        mov ecx, eax
        call ext_0072B890
        mov esi, eax
        jmp L_006D44D3
    L_006D44D1:
        xor esi, esi
    L_006D44D3:
        lea ecx, [esp + 0x4]
        mov dword ptr [esp + 0x58], 0xffffffff
        call ext_006B9D70
        mov ecx, dword ptr [esp + 0x50]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x58
        ret 0x8
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
        push 0x8b8fbb
        push eax
        mov dword ptr fs:[0x0], esp
        push ebx
        push esi
        push edi
        mov edi, dword ptr [esp + 0x1c]
        xor eax, eax
        test edi, edi
        mov esi, ecx
        je L_006D456B
        mov ebx, dword ptr [esp + 0x24]
        test ebx, ebx
        je L_006D456B
        push 0x10
        call ext_006A5C62
        add esp, 0x4
        mov dword ptr [esp + 0x1c], eax
        test eax, eax
        mov dword ptr [esp + 0x14], 0x0
        je L_006D4569
        mov ecx, dword ptr [esp + 0x20]
        push ebx
        push ecx
        push edi
        push esi
        mov ecx, eax
        call ext_006E66D0
        mov ecx, dword ptr [esp + 0xc]
        mov dword ptr fs:[0x0], ecx
        pop edi
        pop esi
        pop ebx
        add esp, 0xc
        ret 0xc
    L_006D4569:
        xor eax, eax
    L_006D456B:
        mov ecx, dword ptr [esp + 0xc]
        pop edi
        pop esi
        mov dword ptr fs:[0x0], ecx
        pop ebx
        add esp, 0xc
        ret 0xc
        nop
        mov eax, dword ptr fs:[0x0]
        push -0x1
        push 0x8b8fbb
        push eax
        mov dword ptr fs:[0x0], esp
        push esi
        push edi
        mov edi, dword ptr [esp + 0x18]
        xor eax, eax
        mov esi, ecx
        test edi, edi
        je L_006D45DB
        push 0x10
        call ext_006A5C62
        add esp, 0x4
        mov dword ptr [esp + 0x18], eax
        test eax, eax
        mov dword ptr [esp + 0x10], 0x0
        je L_006D45D9
        push edi
        push esi
        mov ecx, eax
        call ext_006E67C0
        mov ecx, dword ptr [esp + 0x8]
        mov dword ptr fs:[0x0], ecx
        pop edi
        pop esi
        add esp, 0xc
        ret 0x4
    L_006D45D9:
        xor eax, eax
    L_006D45DB:
        mov ecx, dword ptr [esp + 0x8]
        pop edi
        mov dword ptr fs:[0x0], ecx
        pop esi
        add esp, 0xc
        ret 0x4
        nop
        nop
        mov eax, dword ptr fs:[0x0]
        push -0x1
        push 0x8b8fbb
        push eax
        mov dword ptr fs:[0x0], esp
        push esi
        push edi
        mov edi, dword ptr [esp + 0x18]
        xor eax, eax
        mov esi, ecx
        test edi, edi
        je L_006D464E
        push 0x150
        call ext_006A5C62
        add esp, 0x4
        mov dword ptr [esp + 0x18], eax
        test eax, eax
        mov dword ptr [esp + 0x10], 0x0
        je L_006D464C
        push edi
        push esi
        mov ecx, eax
        call ext_006EA0C0
        mov ecx, dword ptr [esp + 0x8]
        mov dword ptr fs:[0x0], ecx
        pop edi
        pop esi
        add esp, 0xc
        ret 0x4
    L_006D464C:
        xor eax, eax
    L_006D464E:
        mov ecx, dword ptr [esp + 0x8]
        pop edi
        mov dword ptr fs:[0x0], ecx
        pop esi
        add esp, 0xc
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
        mov eax, dword ptr fs:[0x0]
        push -0x1
        push 0x8b8fbb
        push eax
        mov dword ptr fs:[0x0], esp
        push ebx
        push esi
        push edi
        mov edi, dword ptr [esp + 0x1c]
        xor eax, eax
        test edi, edi
        mov esi, ecx
        je L_006D46D9
        mov ebx, dword ptr [esp + 0x20]
        test ebx, ebx
        je L_006D46D9
        push 0x438
        call ext_006A5C62
        add esp, 0x4
        mov dword ptr [esp + 0x1c], eax
        test eax, eax
        mov dword ptr [esp + 0x14], 0x0
        je L_006D46D7
        push ebx
        push edi
        push esi
        mov ecx, eax
        call ext_0070FEC0
        mov ecx, dword ptr [esp + 0xc]
        mov dword ptr fs:[0x0], ecx
        pop edi
        pop esi
        pop ebx
        add esp, 0xc
        ret 0x8
    L_006D46D7:
        xor eax, eax
    L_006D46D9:
        mov ecx, dword ptr [esp + 0xc]
        pop edi
        pop esi
        mov dword ptr fs:[0x0], ecx
        pop ebx
        add esp, 0xc
        ret 0x8
        nop
        nop
        nop
        push -0x1
        push 0x8b8fdb
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push 0x4
        call ext_006A5C62
        add esp, 0x4
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x00
        test eax, eax
        mov dword ptr [esp + 0xc], 0x0
        je L_006D4736
        mov ecx, eax
        call ext_0072B220
        mov ecx, dword ptr [esp + 0x4]
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret
    L_006D4736:
        mov ecx, dword ptr [esp + 0x4]
        xor eax, eax
        mov dword ptr fs:[0x0], ecx
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
        push -0x1
        push 0x8b8fdb
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push 0x1cc
        call ext_006A5C62
        add esp, 0x4
        _emit 0x89
        _emit 0x44
        _emit 0x24
        _emit 0x00
        test eax, eax
        mov dword ptr [esp + 0xc], 0x0
        je L_006D4799
        mov ecx, eax
        call ext_0072AF80
        mov ecx, dword ptr [esp + 0x4]
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret
    L_006D4799:
        mov ecx, dword ptr [esp + 0x4]
        xor eax, eax
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret
        nop
        nop
        nop
        nop
        nop
        nop
        push -0x1
        push 0x8b8fdb
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        mov esi, ecx
        push 0x4
        call ext_006A5C62
        add esp, 0x4
        mov dword ptr [esp + 0x4], eax
        test eax, eax
        mov dword ptr [esp + 0x10], 0x0
        je L_006D47FB
        push esi
        mov ecx, eax
        call ext_00728DE0
        pop esi
        mov ecx, dword ptr [esp + 0x4]
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret
    L_006D47FB:
        mov ecx, dword ptr [esp + 0x8]
        xor eax, eax
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret
        nop
        nop
        nop
        push -0x1
        push 0x8b8fdb
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        mov esi, ecx
        push 0x8
        call ext_006A5C62
        add esp, 0x4
        mov dword ptr [esp + 0x4], eax
        test eax, eax
        mov dword ptr [esp + 0x10], 0x0
        je L_006D485B
        push esi
        mov ecx, eax
        call ext_0072C0B0
        pop esi
        mov ecx, dword ptr [esp + 0x4]
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret
    L_006D485B:
        mov ecx, dword ptr [esp + 0x8]
        xor eax, eax
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret
        nop
        nop
        nop
        push -0x1
        push 0x8b8fdb
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        mov esi, ecx
        push 0x158
        call ext_006A5C62
        add esp, 0x4
        mov dword ptr [esp + 0x4], eax
        test eax, eax
        mov dword ptr [esp + 0x10], 0x0
        je L_006D48BE
        push esi
        mov ecx, eax
        call ext_006D6B70
        pop esi
        mov ecx, dword ptr [esp + 0x4]
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret
    L_006D48BE:
        mov ecx, dword ptr [esp + 0x8]
        xor eax, eax
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret
    }
}

// [0x006D2370] sub_006D2370 (32 bytes)
extern "C" void* __fastcall fn_006D2370(void* self) {
    unsigned int* p = (unsigned int*)self;
    p[0] = 0;
    p[2] = 0;
    p[4] = 0;
    p[6] = 0;
    p[1] = 0;
    p[3] = 0;
    p[5] = 0;
    p[7] = 0;
    return self;
}

// [0x006D2700] sub_006D2700 (32 bytes)
extern "C" __declspec(naked) double __fastcall fn_006D2700(const double* self, int edx_unused, const double* other) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        fld qword ptr [eax + 0x10]
        fmul qword ptr [ecx + 0x10]
        fld qword ptr [eax + 0x8]
        fmul qword ptr [ecx + 0x8]
        faddp st(1), st
        fld qword ptr [eax]
        fmul qword ptr [ecx]
        faddp st(1), st
        ret 0x4
    }
}

// [0x006D5600] sub_006D5600 (32 bytes)
extern "C" void* __fastcall fn_006D5600(void* self, int edx_unused, int idx) {
    unsigned char* p = (unsigned char*)self;
    if (idx >= 0 && idx < *(int*)(p + 0x1c)) {
        void** arr = *(void***)(p + 0x2c);
        return arr[idx];
    }
    return 0;
}

// [0x006D6AF0] sub_006D6AF0 (32 bytes)
extern "C" __declspec(naked) void __fastcall fn_006D6AF0(void* self, int edx_unused, int off, unsigned char val) {
    __asm {
        mov edx, dword ptr [esp + 0x4]
        mov al, byte ptr [esp + 0x8]
        __asm _emit 0x88
        __asm _emit 0x84
        __asm _emit 0x0a
        __asm _emit 0xb8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ret 0x8
    }
}

// [0x006D7380] sub_006D7380 (32 bytes)
extern "C" __declspec(naked) void __fastcall fn_006D7380(void* self) {
    __asm {
        push esi
        mov esi, dword ptr [ecx + 0xfc]
        mov ecx, dword ptr [esi + 0x4]
        test ecx, ecx
        je skip_006D7380
        mov eax, dword ptr [ecx]
        push 0x1
        call dword ptr [eax]
skip_006D7380:
        mov dword ptr [esi + 0x4], 0x0
        pop esi
        ret
    }
}

// [0x006D74E0] sub_006D74E0 (32 bytes)
extern "C" __declspec(naked) void __fastcall fn_006D74E0(void* self, int edx_unused, int off, unsigned char val) {
    __asm {
        mov edx, dword ptr [esp + 0x4]
        mov al, byte ptr [esp + 0x8]
        __asm _emit 0x88
        __asm _emit 0x84
        __asm _emit 0x0a
        __asm _emit 0x4c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ret 0x8
    }
}

// [0x006D7C80] sub_006D7C80 (32 bytes)
extern "C" void __fastcall fn_006D7C80(void* self, int edx_unused, int a1, int a2) {
    *(int*)((char*)self + 0x1b8) = a1;
    *(int*)((char*)self + 0x1bc) = a2;
}

// [0x006D7CA0] sub_006D7CA0 (32 bytes)
// Stores two byte arguments into this+0x1c0 and this+0x1c1 (ret 8).
extern "C" __declspec(naked) void __fastcall fn_006D7CA0(void* self, int edx_unused, unsigned char a1, unsigned char a2) {
    __asm {
        mov al, byte ptr [esp + 0x4]
        mov dl, byte ptr [esp + 0x8]
        mov byte ptr [ecx + 0x1c0], al
        mov byte ptr [ecx + 0x1c1], dl
        ret 0x8
    }
}

// [0x006D7CC0] sub_006D7CC0 (32 bytes)
extern "C" __declspec(naked) void __fastcall fn_006D7CC0(void* self, int edx_unused, unsigned char a1, unsigned char a2) {
    __asm {
        mov al, byte ptr [esp + 0x4]
        mov dl, byte ptr [esp + 0x8]
        mov byte ptr [ecx + 0x1c2], al
        mov byte ptr [ecx + 0x1c3], dl
        ret 0x8
    }
}

// [0x006D7CE0] sub_006D7CE0 (32 bytes)
extern "C" __declspec(naked) void __fastcall fn_006D7CE0(void* self, int edx_unused, unsigned char a1, unsigned char a2) {
    __asm {
        mov al, byte ptr [esp + 0x4]
        mov dl, byte ptr [esp + 0x8]
        mov byte ptr [ecx + 0x1c4], al
        mov byte ptr [ecx + 0x1c5], dl
        ret 0x8
    }
}

// [0x006DC460] sub_006DC460 (32 bytes)
extern "C" __declspec(naked) int __fastcall fn_006DC460(void* self) {
    __asm {
        mov eax, dword ptr [ecx + 0xb8]
        test eax, eax
        jle short L_zero
        mov eax, dword ptr [ecx + 0xc8]
        mov eax, dword ptr [eax]
        ret
L_zero:
        xor eax, eax
        ret
    }
}

// [0x006DE3B0] sub_006DE3B0 (32 bytes)
extern "C" void ext_00712000();
extern "C" void ext_006E7460();
extern "C" __declspec(naked) void __fastcall fn_006DE3B0(void* self) {
    __asm {
        mov eax, dword ptr [ecx + 0x14]
        mov ecx, dword ptr [eax + 0x9c]
        test ecx, ecx
        je short L_null
        jmp ext_00712000
    L_null:
        mov ecx, eax
        jmp ext_006E7460
    }
}

// [0x006D2110] sub_006D2110 (32 bytes)
extern "C" void ext_006D20C0(...);

extern "C" void __cdecl fn_006D2110(int a, int b, int c) {
    ext_006D20C0(a, 0, b, c);
}

// [0x006D2300] sub_006D2300 (32 bytes)
extern "C" void ext_006D2280();
extern "C" __declspec(naked) void __fastcall fn_006D2300(void* self, int edx_unused, int n) {
    __asm {
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [esp + 0x4]
        cmp eax, edx
        jle store
        sub eax, edx
        push eax
        call ext_006D2280
        ret 0x4
    store:
        mov dword ptr [ecx], eax
        ret 0x4
    }
}

// [0x006D2390] sub_006D2390 (32 bytes)
extern "C" void ext_007873F0();

// [0x006D2390]
extern "C" __declspec(naked) void* __fastcall fn_006D2390(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        mov esi, ecx
        push eax
        call ext_007873F0
        mov eax, esi
        pop esi
        ret 0x4
    }
}

// [0x006D6AD0] sub_006D6AD0 (32 bytes)
extern "C" void ext_006B9EC0();
extern "C" __declspec(naked) void __fastcall fn_006D6AD0(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        add ecx, 0x104
        push eax
        call ext_006B9EC0
        ret 0x4
    }
}

// [0x006D7490] sub_006D7490 (32 bytes)
extern "C" void ext_006B9EC0();
extern "C" __declspec(naked) void __fastcall fn_006D7490(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        add ecx, 0x100
        push eax
        call ext_006B9EC0
        ret 0x4
    }
}

// [0x006DCB40] sub_006DCB40 (32 bytes)
extern "C" void __stdcall ext_006DC6A0(int arg);

extern "C" __declspec(naked) void __fastcall fn_006DCB40(void* self) {
    __asm {
        push esi
        mov esi, ecx
        push 0aa8cb0h
        call ext_006DC6A0
        mov dword ptr [esi+0e8h], 0
        pop esi
        ret
    }
}

// [0x006DE1A0] sub_006DE1A0 (32 bytes)
extern "C" void ext_006DE1C0();
extern "C" __declspec(naked) void __stdcall fn_006DE1A0(void* a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push -1
        push 0
        push 1
        push eax
        call ext_006DE1C0
        ret 4
    }
}

// [0x006DF170] sub_006DF170 (32 bytes)
extern "C" void ext_006DF190();

extern "C" __declspec(naked) void __stdcall fn_006DF170(int a, int b, int c, int d) {
    __asm {
        mov eax, dword ptr [esp + 10h]
        mov edx, dword ptr [esp + 0Ch]
        push 1
        push eax
        mov eax, dword ptr [esp + 10h]
        push edx
        mov edx, dword ptr [esp + 10h]
        push eax
        push edx
        call ext_006DF190
        ret 10h
    }
}

// [0x006D7970] sub_006D7970 (32 bytes)
extern "C" __declspec(naked) void __fastcall fn_006D7970(void* self, int edx_unused, int a1) {
    __asm {
        push esi
        lea esi, [ecx + 0x28]
        mov ecx, esi
        call ext_006D2250
        mov eax, dword ptr [esp + 0x8]
        mov ecx, esi
        push eax
        call ext_006D2300
        pop esi
        ret 0x4
    }
}

// [0x006D7B30] sub_006D7B30 (32 bytes)
extern "C" void ext_006D7B50();

extern "C" __declspec(naked) void* __fastcall fn_006D7B30(void* self, int edx_unused, int flag) {
    __asm {
        push esi
        mov esi, ecx
        call ext_006D7B50
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

// [0x006D7D90] sub_006D7D90 (32 bytes)
extern "C" void ext_006D7DB0();

extern "C" __declspec(naked) void* __fastcall fn_006D7D90(void* self, int edx_unused, int flag) {
    __asm {
        push esi
        mov esi, ecx
        call ext_006D7DB0
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

// [0x006D2130] sub_006D2130 (48 bytes)
extern "C" __declspec(naked) void __fastcall fn_006D2130(void* self, int edx_unused, int a1, int a2) {
    __asm {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr [eax + 0x10], ecx
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 0x4], ecx
        mov ecx, dword ptr [esp + 0x8]
        mov dword ptr [eax + 0xc], ecx
        mov ecx, dword ptr [esp + 0x4]
        cmp ecx, 0x1
        jg skip_clamp_6D2130
        mov ecx, 0x1
    skip_clamp_6D2130:
        mov dword ptr [eax + 0x8], ecx
        ret 0x8
    }
}

// [0x006D2250] sub_006D2250 (48 bytes)
extern "C" int mem_009251D8;
extern "C" __declspec(naked) void __fastcall fn_006D2250(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x10]
        test eax, eax
        je skip_free
        push eax
        call dword ptr [mem_009251D8]
        add esp, 0x4
        mov dword ptr [esi + 0x10], 0x0
skip_free:
        mov dword ptr [esi], 0x0
        mov dword ptr [esi + 0x4], 0x0
        pop esi
        ret
    }
}

// [0x006D24A0] sub_006D24A0 (48 bytes)
extern "C" __declspec(naked) void __fastcall fn_006D24A0(void* self, int edx_unused, double s) {
    __asm {
        fld qword ptr [esp + 0x4]
        mov eax, ecx
        fld st(0)
        fmul qword ptr [eax]
        fstp qword ptr [eax]
        fld st(0)
        fmul qword ptr [eax + 0x8]
        fstp qword ptr [eax + 0x8]
        fld st(0)
        fmul qword ptr [eax + 0x10]
        fstp qword ptr [eax + 0x10]
        fmul qword ptr [eax + 0x18]
        fstp qword ptr [eax + 0x18]
        ret 0x8
    }
}

// [0x006D24D0] sub_006D24D0 (48 bytes)
extern "C" __declspec(naked) void __fastcall fn_006D24D0(void* self, int edx_unused, double d) {
    __asm {
        fld qword ptr [esp + 0x4]
        mov eax, ecx
        fld qword ptr [eax]
        _emit 0xd8
        _emit 0xf1
        fstp qword ptr [eax]
        fld qword ptr [eax + 0x8]
        _emit 0xd8
        _emit 0xf1
        fstp qword ptr [eax + 0x8]
        fld qword ptr [eax + 0x10]
        _emit 0xd8
        _emit 0xf1
        fstp qword ptr [eax + 0x10]
        fld qword ptr [eax + 0x18]
        _emit 0xd8
        _emit 0xf1
        fstp qword ptr [eax + 0x18]
        fstp st(0)
        ret 0x8
    }
}

// [0x006D26D0] sub_006D26D0 (48 bytes)
extern "C" __declspec(naked) void __fastcall fn_006D26D0(void* self) {
    __asm {
        mov eax, ecx
        mov ecx, dword ptr [esp + 0x4]
        fld qword ptr [ecx]
        fadd qword ptr [eax]
        fstp qword ptr [eax]
        fld qword ptr [ecx + 0x8]
        fadd qword ptr [eax + 0x8]
        fstp qword ptr [eax + 0x8]
        fld qword ptr [ecx + 0x10]
        fadd qword ptr [eax + 0x10]
        fstp qword ptr [eax + 0x10]
        fld qword ptr [ecx + 0x18]
        fadd qword ptr [eax + 0x18]
        fstp qword ptr [eax + 0x18]
        ret 0x4
    }
}

// [0x006D74B0] sub_006D74B0 (48 bytes)
extern "C" __declspec(naked) void __fastcall fn_006D74B0(void* self, int edx_unused, unsigned char flag) {
    __asm {
        mov al, byte ptr [esp + 0x4]
        test al, al
        je short L_006D74C7
        mov eax, dword ptr [ecx + 0xfc]
        mov dword ptr [eax], 0x0
        ret 0x4
    L_006D74C7:
        mov ecx, dword ptr [ecx + 0xfc]
        mov dword ptr [ecx], 0x1
        ret 0x4
    }
}

// [0x006D8210] sub_006D8210 (48 bytes)
extern "C" __declspec(naked) int __fastcall fn_006D8210(void* self, int edx_unused, int idx) {
    __asm {
        mov edx, dword ptr [esp + 0x4]
        push esi
        mov esi, dword ptr [ecx + 0x1c4]
        or eax, -1
        cmp edx, esi
        pop esi
        jge done
        mov ecx, dword ptr [ecx + 0x1d4]
        lea eax, [edx + 2*edx]
        mov eax, dword ptr [ecx + 4*eax + 0x4]
done:
        ret 0x4
    }
}

// [0x006D9030] sub_006D9030 (48 bytes)
extern "C" __declspec(naked) void __fastcall fn_006D9030(void* self, int edx_unused, int a1, int a2) {
    __asm {
        mov eax, dword ptr [ecx + 0xc]
        mov edx, dword ptr [esp + 0x4]
        push esi
        mov esi, dword ptr [esp + 0xc]
        mov dword ptr [eax + 0x160], edx
        mov dword ptr [eax + 0x164], esi
        mov al, 0x1
        mov byte ptr [ecx + 0x15], al
        pop esi
        ret 0x8
    }
}

// [0x006DECA0] sub_006DECA0 (48 bytes)
extern "C" __declspec(naked) void* __fastcall fn_006DECA0(void* self, int edx_unused, int key) {
    __asm {
        mov edx, dword ptr [esp + 0x4]
        mov eax, ecx
        mov ecx, dword ptr [eax + 0x58]
        cmp ecx, edx
        je self_ret
    chk:
        jge zero
        mov eax, dword ptr [eax + 0x40]
        test eax, eax
        je zero
        mov ecx, dword ptr [eax + 0x58]
        cmp ecx, edx
        jne chk
        ret 0x4
    zero:
        xor eax, eax
    self_ret:
        ret 0x4
    }
}

// [0x006D2AA0] sub_006D2AA0 (48 bytes)
extern "C" void ext_006D2390();
extern "C" __declspec(naked) void __fastcall fn_006D2AA0(void* self) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0xc]
        mov edx, dword ptr [ecx + 0x10]
        shl eax, 5
        push esi
        mov esi, dword ptr [esp + 0xc]
        add eax, edx
        mov ecx, esi
        push eax
        mov dword ptr [esp + 0x8], 0
        call ext_006D2390
        mov eax, esi
        pop esi
        pop ecx
        ret 8
    }
}

// [0x006D3530] sub_006D3530 (48 bytes)
extern "C" __declspec(naked) int __fastcall fn_006D3530(void* self) {
    __asm {
        push ecx
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr [edi]
        call dword ptr [eax + 4]
        mov esi, eax
        test esi, esi
        je done_006D3530
        mov eax, dword ptr [edi + 4]
        lea ecx, [edi + 4]
        lea edx, [esp + 8]
        mov dword ptr [esp + 8], esi
        push edx
        push eax
        call ext_006D2170
done_006D3530:
        mov eax, esi
        pop edi
        pop esi
        pop ecx
        ret
    }
}

// [0x006D3600] sub_006D3600 (48 bytes)
extern "C" __declspec(naked) int __fastcall fn_006D3600(void* self) {
    __asm {
        push ecx
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr [edi]
        call dword ptr [eax + 0xc]
        mov esi, eax
        test esi, esi
        je done_006D3600
        mov eax, dword ptr [edi + 0x34]
        lea ecx, [edi + 0x34]
        lea edx, [esp + 8]
        mov dword ptr [esp + 8], esi
        push edx
        push eax
        call ext_006D2170
    done_006D3600:
        mov eax, esi
        pop edi
        pop esi
        pop ecx
        ret
    }
}

// [0x006D3630] sub_006D3630 (48 bytes)
extern "C" __declspec(naked) void __fastcall fn_006D3630(void* self) {
    __asm {
        push ecx
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr [edi]
        call dword ptr [eax + 0x10]
        mov esi, eax
        test esi, esi
        je done_006D3630
        mov eax, dword ptr [edi + 0x34]
        lea ecx, [edi + 0x34]
        lea edx, [esp + 8]
        mov dword ptr [esp + 8], esi
        push edx
        push eax
        call ext_006D2170
    done_006D3630:
        mov eax, esi
        pop edi
        pop esi
        pop ecx
        ret
    }
}

// [0x006D3660] sub_006D3660 (48 bytes)
extern "C" __declspec(naked) void __fastcall fn_006D3660(void* self) {
    __asm {
        push ecx
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr [edi]
        call dword ptr [eax + 0x14]
        mov esi, eax
        test esi, esi
        je done_006D3660
        mov eax, dword ptr [edi + 0x34]
        lea ecx, [edi + 0x34]
        lea edx, [esp + 8]
        mov dword ptr [esp + 8], esi
        push edx
        push eax
        call ext_006D2170
    done_006D3660:
        mov eax, esi
        pop edi
        pop esi
        pop ecx
        ret
    }
}

// [0x006D3690] sub_006D3690 (48 bytes)
extern "C" __declspec(naked) void __fastcall fn_006D3690(void* self) {
    __asm {
        push ecx
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr [edi]
        call dword ptr [eax + 0x18]
        mov esi, eax
        test esi, esi
        je done_006D3690
        mov eax, dword ptr [edi + 0x34]
        lea ecx, [edi + 0x34]
        lea edx, [esp + 8]
        mov dword ptr [esp + 8], esi
        push edx
        push eax
        call ext_006D2170
    done_006D3690:
        mov eax, esi
        pop edi
        pop esi
        pop ecx
        ret
    }
}

// [0x006D36C0] sub_006D36C0 (48 bytes)
extern "C" __declspec(naked) void __fastcall fn_006D36C0(void* self) {
    __asm {
        push ecx
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr [edi]
        call dword ptr [eax + 0x1c]
        mov esi, eax
        test esi, esi
        je done_006D36C0
        mov eax, dword ptr [edi + 0x34]
        lea ecx, [edi + 0x34]
        lea edx, [esp + 8]
        mov dword ptr [esp + 8], esi
        push edx
        push eax
        call ext_006D2170
    done_006D36C0:
        mov eax, esi
        pop edi
        pop esi
        pop ecx
        ret
    }
}

// [0x006D36F0] sub_006D36F0 (48 bytes)
extern "C" __declspec(naked) void __fastcall fn_006D36F0(void* self) {
    __asm {
        push ecx
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr [edi]
        call dword ptr [eax + 0x20]
        mov esi, eax
        test esi, esi
        je done_006D36F0
        mov eax, dword ptr [edi + 0x34]
        lea ecx, [edi + 0x34]
        lea edx, [esp + 8]
        mov dword ptr [esp + 8], esi
        push edx
        push eax
        call ext_006D2170
    done_006D36F0:
        mov eax, esi
        pop edi
        pop esi
        pop ecx
        ret
    }
}

// [0x006D3720] sub_006D3720 (48 bytes)
extern "C" __declspec(naked) void __fastcall fn_006D3720(void* self) {
    __asm {
        push ecx
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr [edi]
        call dword ptr [eax + 0x24]
        mov esi, eax
        test esi, esi
        je done_006D3720
        mov eax, dword ptr [edi + 0x34]
        lea ecx, [edi + 0x34]
        lea edx, [esp + 8]
        mov dword ptr [esp + 8], esi
        push edx
        push eax
        call ext_006D2170
    done_006D3720:
        mov eax, esi
        pop edi
        pop esi
        pop ecx
        ret
    }
}

// [0x006D3750] sub_006D3750 (48 bytes)
extern "C" __declspec(naked) void __fastcall fn_006D3750(void* self) {
    __asm {
        push ecx
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr [edi]
        call dword ptr [eax + 0x28]
        mov esi, eax
        test esi, esi
        je done_006D3750
        mov eax, dword ptr [edi + 0x34]
        lea ecx, [edi + 0x34]
        lea edx, [esp + 8]
        mov dword ptr [esp + 8], esi
        push edx
        push eax
        call ext_006D2170
    done_006D3750:
        mov eax, esi
        pop edi
        pop esi
        pop ecx
        ret
    }
}

// [0x006D3780] sub_006D3780 (48 bytes)
extern "C" __declspec(naked) void __fastcall fn_006D3780(void* self) {
    __asm {
        push ecx
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr [edi]
        call dword ptr [eax + 0x2c]
        mov esi, eax
        test esi, esi
        je done_006D3780
        mov eax, dword ptr [edi + 0x34]
        lea ecx, [edi + 0x34]
        lea edx, [esp + 8]
        mov dword ptr [esp + 8], esi
        push edx
        push eax
        call ext_006D2170
    done_006D3780:
        mov eax, esi
        pop edi
        pop esi
        pop ecx
        ret
    }
}

// [0x006D37B0] sub_006D37B0 (48 bytes)
extern "C" __declspec(naked) void __fastcall fn_006D37B0(void* self) {
    __asm {
        push ecx
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr [edi]
        call dword ptr [eax + 0x30]
        mov esi, eax
        test esi, esi
        je done_006D37B0
        mov eax, dword ptr [edi + 0x4c]
        lea ecx, [edi + 0x4c]
        lea edx, [esp + 8]
        mov dword ptr [esp + 8], esi
        push edx
        push eax
        call ext_006D2170
    done_006D37B0:
        mov eax, esi
        pop edi
        pop esi
        pop ecx
        ret
    }
}

// [0x006DBE30] sub_006DBE30 (48 bytes)
extern "C" void ext_006A6F00();

extern "C" __declspec(naked) void __fastcall fn_006DBE30(void* self, int edx_unused, void* out, int a2) {
    __asm {
        mov eax, dword ptr [esp + 8]
        push esi
        mov esi, dword ptr [ecx + 4]
        mov ecx, dword ptr [ecx]
        cdq
        push esi
        push ecx
        push edx
        push eax
        call ext_006A6F00
        mov ecx, eax
        mov eax, dword ptr [esp + 8]
        pop esi
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 4], edx
        ret 8
    }
}

// [0x006D8520] sub_006D8520 (48 bytes)
extern "C" void ext_006FC930();
extern "C" void ext_006FDF70();

// The callees take `this` in ecx and one stack argument, which plain C++03
// cannot express for these call sites, so this is hand-written asm.
extern "C" __declspec(naked) void __fastcall fn_006D8520(void* self) {
    __asm {
        push    esi
        mov     esi, ecx
        push    0
        call    ext_006FDF70
        test    eax, eax
        je      short fail
        push    0
        mov     ecx, esi
        call    ext_006FDF70
        mov     ecx, eax
        call    ext_006FC930
        test    eax, eax
        je      short fail
        mov     eax, dword ptr [eax + 0x18]
        pop     esi
        ret
fail:
        xor     eax, eax
        pop     esi
        ret
    }
}

// [0x006D8550] sub_006D8550 (48 bytes)
// [0x006D8550] sub_006D8550 (48 bytes)
extern "C" void ext_006FC930();
extern "C" void ext_006FDF70();

// The callees take `this` in ecx and one stack argument, which plain C++03
// cannot express for these call sites, so this is hand-written asm.
extern "C" __declspec(naked) void __fastcall fn_006D8550(void* self) {
    __asm {
        push    esi
        mov     esi, ecx
        push    0
        call    ext_006FDF70
        test    eax, eax
        je      short fail
        push    0
        mov     ecx, esi
        call    ext_006FDF70
        mov     ecx, eax
        call    ext_006FC930
        test    eax, eax
        je      short fail
        mov     eax, dword ptr [eax + 0x8]
        pop     esi
        ret
fail:
        xor     eax, eax
        pop     esi
        ret
    }
}

// [0x006D86C0] sub_006D86C0 (48 bytes)
extern "C" void ext_006BC380();
extern "C" void ext_006FDF70();

// Hand-written asm: the first callee takes a stack argument of 0 and the
// second takes `this` in ecx, which plain C++03 cannot express here.
extern "C" __declspec(naked) void __fastcall fn_006D86C0(void* self) {
    __asm {
        push    esi
        push    edi
        xor     edi, edi
        push    edi
        call    ext_006FDF70
        mov     esi, eax
        test    esi, esi
        je      short fail
        mov     ecx, esi
        call    ext_006BC380
        test    eax, eax
        je      short fail
        mov     ecx, esi
        call    ext_006BC380
        mov     eax, dword ptr [eax]
        pop     edi
        pop     esi
        ret
fail:
        mov     eax, edi
        pop     edi
        pop     esi
        ret
    }
}

// [0x006D23B0] sub_006D23B0 (64 bytes)
extern "C" __declspec(naked) void __fastcall fn_006D23B0(void* self, int edx_unused) {
    __asm {
        mov edx, dword ptr [esp + 0x8]
        mov eax, ecx
        mov ecx, dword ptr [esp + 0x4]
        mov dword ptr [eax], ecx
        mov ecx, dword ptr [esp + 0xc]
        mov dword ptr [eax + 0x4], edx
        mov edx, dword ptr [esp + 0x10]
        mov dword ptr [eax + 0x8], ecx
        mov ecx, dword ptr [esp + 0x14]
        mov dword ptr [eax + 0xc], edx
        mov edx, dword ptr [esp + 0x18]
        mov dword ptr [eax + 0x10], ecx
        mov ecx, dword ptr [esp + 0x1c]
        mov dword ptr [eax + 0x14], edx
        mov edx, dword ptr [esp + 0x20]
        mov dword ptr [eax + 0x18], ecx
        mov dword ptr [eax + 0x1c], edx
        ret 0x20
    }
}

// [0x006D97C0] sub_006D97C0 (64 bytes)
extern "C" __declspec(naked) int __cdecl fn_006D97C0(int key) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        mov eax, 0x6
        xor ecx, ecx
        mov edx, 0xb5d92d
    loop_top:
        cmp dword ptr [edx - 0xd], esi
        jne short skip_entry
        cmp byte ptr [edx], 0x0
        jne short found
    skip_entry:
        inc ecx
        add edx, 0x20
        cmp ecx, 0xc
        jl short loop_top
        pop esi
        ret
    found:
        shl ecx, 0x5
        pop esi
        mov eax, dword ptr [ecx + 0xb5d91c]
        ret
    }
}

// [0x006D8240] sub_006D8240 (64 bytes)
extern "C" __declspec(naked) int __fastcall fn_006D8240(void* self, int edx_unused, int idx, int sub) {
    __asm {
        mov edx, dword ptr [esp + 0x4]
        push esi
        mov esi, dword ptr [ecx + 0x1c4]
        or eax, -0x1
        cmp edx, esi
        jge L_done
        mov esi, dword ptr [ecx + 0x1d4]
        lea edx, [edx + 2*edx]
        push edi
        mov edi, dword ptr [esi + 4*edx + 0x4]
        lea esi, [esi + 4*edx]
        mov edx, dword ptr [esp + 0x10]
        cmp edx, edi
        pop edi
        jge L_done
        mov eax, dword ptr [esi]
        add edx, eax
        mov eax, dword ptr [ecx + 0x1ec]
        mov eax, dword ptr [eax + 4*edx]
    L_done:
        pop esi
        ret 0x8
    }
}

// [0x006D8FD0] sub_006D8FD0 (64 bytes)
extern "C" __declspec(naked) bool __fastcall fn_006D8FD0(void* self, int edx_unused, int a1, int a2) {
    __asm {
        mov edx, dword ptr [ecx + 0x10]
        mov eax, 0x1
        cmp edx, eax
        je L_ok_006D8FD0
        xor al, al
        ret 0x8
    L_ok_006D8FD0:
        mov edx, dword ptr [ecx + 0xc]
        push esi
        mov esi, dword ptr [esp + 0x8]
        push edi
        mov edi, dword ptr [esp + 0x10]
        mov dword ptr [edx + 0x1e8], esi
        mov dword ptr [edx + 0x1ec], edi
        pop edi
        mov byte ptr [ecx + 0x14], al
        pop esi
        ret 0x8
    }
}

// [0x006D3B50] sub_006D3B50 (64 bytes)
extern "C" __declspec(naked) void __fastcall fn_006D3B50(void* self) {
    __asm {
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr [esp + 0xc]
        mov eax, dword ptr [edi]
        push ecx
        mov ecx, edi
        call dword ptr [eax + 0x48]
        mov esi, eax
        test esi, esi
        je done_006D3B50
        mov eax, dword ptr [edi + 0xdc]
        lea ecx, [edi + 0xdc]
        lea edx, [esp + 0xc]
        mov dword ptr [esp + 0xc], esi
        push edx
        push eax
        call ext_006D2170
done_006D3B50:
        mov eax, esi
        pop edi
        pop esi
        ret 0x4
    }
}

// [0x006D0450] sub_006D0450 (64 bytes)
extern "C" __declspec(naked) void __fastcall fn_006D0450(void* self, int edx_unused, int a1, int a2) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x8], eax
        lea edx, [esp + 0x8]
        mov eax, dword ptr [esi + 0x68]
        lea ecx, [esi + 0x68]
        push edx
        push eax
        call ext_006D2170
        mov edx, dword ptr [esp + 0xc]
        lea ecx, [esi + 0x80]
        mov dword ptr [esp + 0x8], edx
        lea eax, [esp + 0x8]
        mov edx, dword ptr [ecx]
        push eax
        push edx
        call ext_006D2170
        pop esi
        ret 0x8
    }
}

// [0x006D3D30] sub_006D3D30 (64 bytes)
extern "C" __declspec(naked) void __fastcall fn_006D3D30(void* self) {
    __asm {
        push ecx
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr [edi]
        call dword ptr [eax + 0x5c]
        mov esi, eax
        test esi, esi
        je done_006D3D30
        mov eax, dword ptr [edi + 0x10c]
        lea ecx, [edi + 0x10c]
        lea edx, [esp + 8]
        mov dword ptr [esp + 8], esi
        push edx
        push eax
        call ext_006D2170
    done_006D3D30:
        mov eax, esi
        pop edi
        pop esi
        pop ecx
        ret
    }
}

// [0x006D3CF0] sub_006D3CF0 (64 bytes)
extern "C" __declspec(naked) void __fastcall fn_006D3CF0(void* self) {
    __asm {
        push ecx
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr [edi]
        call dword ptr [eax + 0x58]
        mov esi, eax
        test esi, esi
        je done_006D3CF0
        mov eax, dword ptr [edi + 0xf4]
        lea ecx, [edi + 0xf4]
        lea edx, [esp + 8]
        mov dword ptr [esp + 8], esi
        push edx
        push eax
        call ext_006D2170
    done_006D3CF0:
        mov eax, esi
        pop edi
        pop esi
        pop ecx
        ret
    }
}

// [0x006D3CB0] sub_006D3CB0 (64 bytes)
extern "C" __declspec(naked) void __fastcall fn_006D3CB0(void* self) {
    __asm {
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr [esp + 0xc]
        mov eax, dword ptr [edi]
        push ecx
        mov ecx, edi
        call dword ptr [eax + 0x50]
        mov esi, eax
        test esi, esi
        je done_006D3CB0
        mov eax, dword ptr [edi + 0x124]
        lea ecx, [edi + 0x124]
        lea edx, [esp + 0xc]
        mov dword ptr [esp + 0xc], esi
        push edx
        push eax
        call ext_006D2170
    done_006D3CB0:
        mov eax, esi
        pop edi
        pop esi
        ret 0x4
    }
}

// [0x006D3DB0] sub_006D3DB0 (64 bytes)
extern "C" __declspec(naked) void __fastcall fn_006D3DB0(void* self) {
    __asm {
        push ecx
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr [edi]
        call dword ptr [eax + 0x68]
        mov esi, eax
        test esi, esi
        je done_006D3DB0
        mov eax, dword ptr [edi + 0x184]
        lea ecx, [edi + 0x184]
        lea edx, [esp + 8]
        mov dword ptr [esp + 8], esi
        push edx
        push eax
        call ext_006D2170
    done_006D3DB0:
        mov eax, esi
        pop edi
        pop esi
        pop ecx
        ret
    }
}

// [0x006D3D70] sub_006D3D70 (64 bytes)
extern "C" __declspec(naked) void __fastcall fn_006D3D70(void* self) {
    __asm {
        push ecx
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr [edi]
        call dword ptr [eax + 0x60]
        mov esi, eax
        test esi, esi
        je done_006D3D70
        mov eax, dword ptr [edi + 0x154]
        lea ecx, [edi + 0x154]
        lea edx, [esp + 8]
        mov dword ptr [esp + 8], esi
        push edx
        push eax
        call ext_006D2170
    done_006D3D70:
        mov eax, esi
        pop edi
        pop esi
        pop ecx
        ret
    }
}

// [0x006D7C40] sub_006D7C40 (64 bytes)
extern "C" __declspec(naked) void __fastcall fn_006D7C40(void* self, int edx_unused, int a1, int a2, int a3, int a4) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        mov edx, dword ptr [esp + 0xc]
        mov dword ptr [ecx + 0x1b0], eax
        imul eax, edx
        push esi
        mov esi, dword ptr [esp + 0xc]
        mov dword ptr [ecx + 0x1a8], esi
        mov esi, dword ptr [esp + 0x14]
        push eax
        mov dword ptr [ecx + 0x1b4], edx
        mov dword ptr [ecx + 0x1ac], esi
        call ext_006D7970
        pop esi
        ret 0x10
    }
}

// [0x006D7AA0] sub_006D7AA0 (64 bytes)
extern "C" __declspec(naked) void __fastcall fn_006D7AA0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        push 0x0
        call ext_006FDF70
        test eax, eax
        je fail
        push 0x0
        mov ecx, esi
        call ext_006FDF70
        mov ecx, eax
        call ext_006B99C0
        test eax, eax
        je fail
        push 0x0
        mov ecx, esi
        call ext_006FDF70
        mov ecx, eax
        call ext_006B99C0
        mov eax, dword ptr [eax + 0x18]
        pop esi
        ret
fail:
        xor eax, eax
        pop esi
        ret
    }
}

// [0x006D8680] sub_006D8680 (64 bytes)
extern "C" void ext_006BC380();
extern "C" void ext_006FDF70();
extern "C" __declspec(naked) void __fastcall fn_006D8680(void* self) {
    __asm {
        push esi
        mov esi, ecx
        push 0
        call ext_006FDF70
        test eax, eax
        je short L_fail
        push 0
        mov ecx, esi
        call ext_006FDF70
        mov ecx, eax
        call ext_006BC380
        test eax, eax
        je short L_fail
        mov ecx, dword ptr [eax + 4]
        cmp ecx, 1
        je short L_ok
        cmp ecx, 2
        jne short L_fail
L_ok:
        mov eax, dword ptr [eax + 0x30]
        pop esi
        ret
L_fail:
        xor eax, eax
        pop esi
        ret
    }
}

// [0x006D86F0] sub_006D86F0 (64 bytes)
extern "C" __declspec(naked) void __cdecl fn_006D86F0() {
    __asm {
        push esi
        push edi
        xor edi, edi
        push edi
        call ext_006FDF70
        mov esi, eax
        test esi, esi
        je short L_fail
        mov ecx, esi
        call ext_006FC930
        test eax, eax
        je short L_fail
        mov ecx, esi
        call ext_006FC930
        mov eax, dword ptr [eax]
        test eax, eax
        jle short L_fail
        cmp eax, 0x2
        jg short L_fail
        mov ecx, esi
        call ext_006FC930
        mov eax, dword ptr [eax]
        pop edi
        pop esi
        ret
    L_fail:
        mov eax, edi
        pop edi
        pop esi
        ret
    }
}

// [0x006D8940] sub_006D8940 (64 bytes)
extern "C" void ext_006FDF70();
extern "C" void ext_00715550();
extern "C" __declspec(naked) void __fastcall fn_006D8940(void* self) {
    __asm {
        push esi
        mov esi, ecx
        push 0x0
        call ext_006FDF70
        test eax, eax
        je short L_fail
        push 0x0
        mov ecx, esi
        call ext_006FDF70
        mov ecx, eax
        call ext_00715550
        test eax, eax
        je short L_fail
        mov ecx, dword ptr [eax + 0x4]
        cmp ecx, 0x1
        je short L_ok
        cmp ecx, 0x2
        jne short L_fail
    L_ok:
        mov eax, dword ptr [eax + 0x30]
        pop esi
        ret
    L_fail:
        xor eax, eax
        pop esi
        ret
    }
}

// [0x006DC480] sub_006DC480 (64 bytes)
extern "C" void ext_006DC550();
extern "C" void __fastcall ext_006E7410(void* self, int edx, int a, const char* b);
extern "C" __declspec(naked) void __fastcall fn_006DC480(void* self) {
    __asm {
        push esi
        mov esi, ecx
        push edi
        mov eax, dword ptr [esi + 0xe8]
        test eax, eax
        jl short L_fail
        mov edi, eax
        call ext_006DC550
        cmp edi, eax
        jge short L_fail
        mov eax, dword ptr [esi + 0xc8]
        mov eax, dword ptr [eax + 4*edi]
        pop edi
        pop esi
        ret
L_fail:
        mov ecx, dword ptr [esi + 0xec]
        push 0xaa93ec
        push 0
        call ext_006E7410
        pop edi
        xor eax, eax
        pop esi
        ret
    }
}

// [0x006DC510] sub_006DC510 (64 bytes)
// __thiscall, ret 0x4: index = arg1; if 0 <= index < ext_006DC550() return this->[0xc8][index], else fallback path.
extern "C" __declspec(naked) void __fastcall fn_006DC510(void* self, int edx_unused, int index) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        mov esi, ecx
        test edi, edi
        jl L_fail_006DC510
        call ext_006DC550
        cmp edi, eax
        jge L_fail_006DC510
        mov eax, dword ptr [esi + 0xc8]
        mov eax, dword ptr [eax + 4*edi]
        pop edi
        pop esi
        ret 0x4
    L_fail_006DC510:
        mov ecx, dword ptr [esi + 0xec]
        push 0xaa93ec
        push 0
        call ext_006E7410
        pop edi
        xor eax, eax
        pop esi
        ret 0x4
    }
}

// [0x006DEC60] sub_006DEC60 (64 bytes)
extern "C" void ext_006DE130();
extern "C" void ext_006DECD0();
extern "C" void ext_006E5750();

extern "C" __declspec(naked) void __fastcall fn_006DEC60(void* self, int edx_unused, int a1, unsigned char a2) {
    __asm {
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr [esp + 0xc]
        mov ecx, dword ptr [esi + 0x40]
        cmp ecx, edi
        je done
        test ecx, ecx
        je skip_call
        mov al, byte ptr [esp + 0x10]
        test al, al
        je skip_call
        push 0
        call ext_006DE130
skip_call:
        push 0x10
        mov ecx, esi
        mov dword ptr [esi + 0x40], edi
        call ext_006DECD0
        mov ecx, eax
        call ext_006E5750
done:
        pop edi
        pop esi
        ret 0x8
    }
}

// [0x006D2200] sub_006D2200 (80 bytes)
extern "C" int mem_0092528C;
extern "C" __declspec(naked) void __fastcall fn_006D2200(void* self, int edx_unused, int idx) {
    __asm {
        push ebx
        push esi
        push edi
        mov edi, dword ptr [esp + 0x10]
        mov esi, ecx
        lea ebx, [edi + 0x1]
        mov eax, dword ptr [esi]
        cmp ebx, eax
        jge short L_skip
        mov ecx, dword ptr [esi + 0xc]
        sub eax, edi
        dec eax
        mov edx, dword ptr [esi + 0x10]
        imul eax, ecx
        push eax
        mov eax, ecx
        imul eax, ebx
        imul ecx, edi
        add eax, edx
        add ecx, edx
        push eax
        push ecx
        call dword ptr [mem_0092528C]
        add esp, 0xc
L_skip:
        mov eax, dword ptr [esi]
        pop edi
        dec eax
        mov dword ptr [esi], eax
        pop esi
        pop ebx
        ret 0x4
    }
}

// [0x006D0490] sub_006D0490 (80 bytes)
extern "C" __declspec(naked) void __fastcall fn_006D0490(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov esi, dword ptr [edi + 0x68]
        lea ecx, [edi + 0x68]
        dec esi
        js L_done
        mov eax, dword ptr [edi + 0x90]
        mov edx, dword ptr [esp + 0x18]
        mov ebx, dword ptr [esp + 0x14]
    L_loop:
        cmp edx, dword ptr [eax + 4*esi]
        jne L_next
        mov ebp, dword ptr [edi + 0x78]
        cmp ebx, dword ptr [ebp + 4*esi]
        je L_match
    L_next:
        dec esi
        jns L_loop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x8
    L_match:
        push esi
        call ext_006D2200
        push esi
        lea ecx, [edi + 0x80]
        call ext_006D2200
    L_done:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x8
        __asm _emit 0x90
        __asm _emit 0x90
    }
}

// [0x006D9170] sub_006D9170 (80 bytes)
extern "C" __declspec(naked) void __fastcall fn_006D9170(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        mov byte ptr [ecx + 0x17], 0x1
        cmp eax, 0x1
        mov dword ptr [ecx + 0x10], eax
        je short L_six
        cmp eax, 0x2
        je short L_six
        mov ecx, dword ptr [ecx + 0xc]
        mov eax, 0x1
        push eax
        push 0x10
        add ecx, 0x1f0
        call ext_00711CF0
        ret 0x4
L_six:
        mov ecx, dword ptr [ecx + 0xc]
        xor eax, eax
        push eax
        push 0x10
        add ecx, 0x1f0
        call ext_00711CF0
        ret 0x4
    }
}

// [0x006D98F0] sub_006D98F0 (80 bytes)
extern "C" void ext_006D98D0();
extern "C" int mem_00993BE0;
extern "C" int mem_00B5D910;
extern "C" __declspec(naked) void __fastcall fn_006D98F0(void* self) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        test esi, esi
        jne L_skip
        call ext_006D98D0
        test eax, eax
        je L_skip
        call ext_006D98D0
        mov esi, eax
    L_skip:
        fld qword ptr [mem_00993BE0]
        xor eax, eax
        mov ecx, offset mem_00B5D910 + 0xc
    L_loop:
        cmp dword ptr [ecx], esi
        je L_found
        inc eax
        add ecx, 0x20
        cmp eax, 0xc
        jl L_loop
        pop esi
        ret
    L_found:
        shl eax, 0x5
        add eax, offset mem_00B5D910
        je L_done
        fstp st(0)
        fld qword ptr [eax]
    L_done:
        pop esi
        ret
    }
}

// [0x006D3B00] sub_006D3B00 (80 bytes)
extern "C" __declspec(naked) void __fastcall fn_006D3B00(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        mov edx, dword ptr [esp + 0x8]
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr [esp + 0x14]
        mov eax, dword ptr [edi]
        push ecx
        mov ecx, dword ptr [esp + 0x10]
        push edx
        push ecx
        mov ecx, edi
        call dword ptr [eax + 0x4c]
        mov esi, eax
        test esi, esi
        je done_006D3B00
        mov eax, dword ptr [edi + 0xdc]
        lea ecx, [edi + 0xdc]
        lea edx, [esp + 0x14]
        mov dword ptr [esp + 0x14], esi
        push edx
        push eax
        call ext_006D2170
    done_006D3B00:
        mov eax, esi
        pop edi
        pop esi
        ret 0xc
    }
}

// [0x006DE460] sub_006DE460 (80 bytes)
extern "C" void ext_006B9D70();
extern "C" __declspec(naked) void __fastcall fn_006DE460(void* self) {
    __asm {
        push -1
        push 0x8c1c88
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        lea ecx, [esi + 0x4c]
        mov dword ptr [esp + 0x10], 0
        call ext_006B9D70
        mov ecx, esi
        mov dword ptr [esp + 0x10], -1
        call ext_006B9D70
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x006DC370] sub_006DC370 (80 bytes)
extern "C" __declspec(naked) void __fastcall fn_006DC370(void* self) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        test eax, eax
        mov esi, ecx
        jl short L_fail
        cmp eax, dword ptr [esi + 0xb8]
        jge short L_fail
        mov dword ptr [esi + 0xe8], eax
        mov al, 1
        pop esi
        ret 0x4
    L_fail:
        mov ecx, dword ptr [esi + 0xec]
        push 0xaa87e4
        push 0
        call ext_006E7410
        mov dword ptr [esi + 0xe8], 0
        xor al, al
        pop esi
        ret 0x4
    }
}

// [0x006DEB50] sub_006DEB50 (80 bytes)
extern "C" void ext_006DE130();
extern "C" void ext_006E5750();
extern "C" __declspec(naked) void __fastcall fn_006DEB50(void* self, int edx_unused, void* arg) {
    __asm {
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr [esp + 0xc]
        mov eax, dword ptr [esi + 0x3c]
        cmp eax, edi
        je done
        test eax, eax
        je skip1
        mov edx, dword ptr [eax + 0x1c]
        dec edx
        mov ecx, edx
        mov dword ptr [eax + 0x1c], edx
        test ecx, ecx
        jg skip1
        mov ecx, dword ptr [esi + 0x3c]
        push 0x0
        call ext_006DE130
skip1:
        test edi, edi
        mov dword ptr [esi + 0x3c], edi
        je skip2
        inc dword ptr [edi + 0x1c]
skip2:
        push 0x8
        mov ecx, esi
        call ext_006E5750
done:
        pop edi
        pop esi
        ret 0x4
    }
}

// [0x006D2320] sub_006D2320 (80 bytes)
extern "C" void ext_006D2250();
extern "C" __declspec(naked) void* __fastcall fn_006D2320(void* self) {
    __asm {
        push ebx
        push ebp
        push esi
        push edi
        mov esi, ecx
        call ext_006D2250
        mov ebx, dword ptr [esp + 0x14]
        xor edi, edi
        mov eax, dword ptr [ebx + 0x8]
        mov dword ptr [esi + 0x8], eax
        mov ebp, dword ptr [ebx]
        test ebp, ebp
        jle done
    loop_top:
        mov ecx, dword ptr [ebx + 0x10]
        lea eax, dword ptr [esp + 0x14]
        push eax
        mov edx, dword ptr [ecx + 4*edi]
        mov ecx, dword ptr [esi]
        push ecx
        mov ecx, esi
        mov dword ptr [esp + 0x1c], edx
        call ext_006D2170
        inc edi
        cmp edi, ebp
        jl loop_top
    done:
        mov eax, esi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x4
    }
}

// [0x006DEED0] sub_006DEED0 (80 bytes)
extern "C" __declspec(naked) void __fastcall fn_006DEED0(void* self, int edx_unused, int a1, unsigned char a2) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0x8]
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x38]
        cmp ecx, ebx
        je L_same
        mov al, byte ptr [esp + 0x10]
        test al, al
        je L_skip
        test ecx, ecx
        je L_skip
        push 0
        call ext_006DE130
        mov dword ptr [esi + 0x38], 0
    L_skip:
        push edi
        mov edi, dword ptr [esi + 0x38]
        push 4
        mov ecx, esi
        mov dword ptr [esi + 0x38], ebx
        call ext_006E5750
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 0x8
    L_same:
        pop esi
        xor eax, eax
        pop ebx
        ret 0x8
    }
}

// [0x006D2A40] sub_006D2A40 (80 bytes)
// SEH-guarded thunk: installs an exception frame, calls 0x6D2170(a1, &a2),
// then 0x6D80A0(&a2) with ecx = &a2, restores the previous frame and returns esi.
extern "C" __declspec(naked) void __fastcall fn_006D2A40(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8c08e8
        push eax
        mov dword ptr fs:[0x0], esp
        push esi
        mov edx, dword ptr [esp + 0x14]
        lea eax, [esp + 0x18]
        push eax
        push edx
        mov dword ptr [esp + 0x14], 0
        call ext_006D2170
        lea ecx, [esp + 0x18]
        mov esi, eax
        call ext_006D80A0
        mov ecx, dword ptr [esp + 0x4]
        mov eax, esi
        mov dword ptr fs:[0x0], ecx
        pop esi
        add esp, 0xc
        ret 0x24
    }
}

// [0x006DC4C0] sub_006DC4C0 (80 bytes)
extern "C" const char* __fastcall ext_006C9330(void* self);

extern "C" __declspec(naked) void __fastcall fn_006DC4C0(void* self, int edx_unused, int a1) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        mov esi, ecx
        test edi, edi
        jl short L_fail
        call ext_006DC550
        cmp edi, eax
        jge short L_fail
        mov eax, dword ptr [esi + 0xc8]
        mov ecx, dword ptr [eax + 4*edi]
        call ext_006C9330
        pop edi
        pop esi
        ret 0x4
L_fail:
        mov ecx, dword ptr [esi + 0xec]
        push 0xaa93ec
        push 0x0
        call ext_006E7410
        pop edi
        xor eax, eax
        pop esi
        ret 0x4
    }
}

// [0x006D9120] sub_006D9120 (80 bytes)
extern "C" void ext_0077FB70();

extern "C" __declspec(naked) void* __fastcall fn_006D9120(void* self, int edx_unused, void* obj) {
    __asm {
        push ecx
        push esi
        mov esi, dword ptr [esp + 0xc]
        push 0x3ff00000
        push 0x0
        push 0x3fe99999
        push 0x9999999a
        push 0x3fe99999
        push 0x9999999a
        push 0x3fe99999
        push 0x9999999a
        mov ecx, esi
        mov dword ptr [esp + 0x24], 0x0
        call ext_0077FB70
        mov eax, esi
        pop esi
        pop ecx
        ret 0x4
    }
}

// [0x006DD2B0] sub_006DD2B0 (80 bytes)
extern "C" void ext_006DD240();
extern "C" void ext_006D2200();
extern "C" __declspec(naked) void __fastcall fn_006DD2B0(void* self) {
    __asm {
        push ecx
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr [edi + 0xd0]
        lea esi, [edi + 0xd0]
        test eax, eax
        je done_006DD2B0
    loop_006DD2B0:
        mov eax, dword ptr [edi + 0xe0]
        mov eax, dword ptr [eax]
        test eax, eax
        mov dword ptr [esp + 0x8], eax
        je skip_006DD2B0
        lea ecx, [esp + 0x8]
        push ecx
        mov ecx, edi
        call ext_006DD240
        mov eax, dword ptr [esp + 0x8]
        test eax, eax
        je after_006DD2B0
    skip_006DD2B0:
        push 0
        mov ecx, esi
        call ext_006D2200
    after_006DD2B0:
        cmp dword ptr [esi], 0
        jne loop_006DD2B0
    done_006DD2B0:
        pop edi
        pop esi
        pop ecx
        ret
    }
}

// [0x006D6B10] sub_006D6B10 (96 bytes)
extern "C" __declspec(naked) void __fastcall fn_006D6B10(void* self, int edx_unused, void* a1, void* a2, void* a3) {
    __asm {
        mov eax, dword ptr [ecx + 0x1c4]
        test eax, eax
        jle L_out_range
        cmp eax, 0x5
        jge L_out_range
        mov eax, dword ptr [esp + 0x4]
        mov ecx, dword ptr [esp + 0x8]
        mov edx, dword ptr [esp + 0xc]
        mov dword ptr [eax], 0x5
        mov dword ptr [ecx], 0x0
        mov dword ptr [edx], 0x0
        ret 0xc
    L_out_range:
        mov edx, dword ptr [esp + 0x4]
        mov dword ptr [edx], eax
        mov edx, dword ptr [esp + 0x8]
        mov eax, dword ptr [ecx + 0x1c8]
        mov dword ptr [edx], eax
        mov eax, dword ptr [ecx + 0x1cc]
        mov ecx, dword ptr [esp + 0xc]
        mov dword ptr [ecx], eax
        ret 0xc
    }
}

// [0x006D7BE0] sub_006D7BE0 (96 bytes)
extern "C" __declspec(naked) void __fastcall fn_006D7BE0(void* self) {
    __asm {
        mov edx, 0x4
        xor eax, eax
        mov dword ptr [ecx + 0x1a8], edx
        mov dword ptr [ecx + 0x1ac], edx
        mov dword ptr [ecx + 0x1b0], eax
        mov dword ptr [ecx + 0x1b4], eax
        mov dword ptr [ecx + 0x1b8], eax
        mov dword ptr [ecx + 0x1bc], eax
        mov byte ptr [ecx + 0x1c0], al
        mov byte ptr [ecx + 0x1c1], al
        mov dword ptr [ecx + 0x1c8], edx
        mov byte ptr [ecx + 0x1c2], al
        mov byte ptr [ecx + 0x1c3], al
        mov byte ptr [ecx + 0x1c4], al
        mov byte ptr [ecx + 0x1c5], al
        ret
    }
}

// [0x006DFFF0] sub_006DFFF0 (96 bytes)
// Euclidean norm of the four doubles at +0, +8, +0x10, +0x18 (returned in st0).
extern "C" __declspec(naked) double __cdecl fn_006DFFF0(void* self) {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0x28
        mov eax, dword ptr [ebp + 0x8]
        mov ecx, dword ptr [eax + 0x18]
        mov edx, dword ptr [eax + 0x1c]
        mov dword ptr [ebp - 0x8], ecx
        mov ecx, dword ptr [eax + 0x10]
        mov dword ptr [ebp - 0x4], edx
        mov edx, dword ptr [eax + 0x14]
        mov dword ptr [ebp - 0x10], ecx
        mov ecx, dword ptr [eax + 0x8]
        mov dword ptr [ebp - 0xc], edx
        mov edx, dword ptr [eax + 0xc]
        mov dword ptr [ebp - 0x18], ecx
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 0x14], edx
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [ebp - 0x20], ecx
        mov dword ptr [ebp - 0x1c], edx
        fld qword ptr [ebp - 0x20]
        fmul st(0), st
        fld qword ptr [ebp - 0x18]
        fmul st(0), st
        faddp st(1), st
        fld qword ptr [ebp - 0x10]
        fmul st(0), st
        faddp st(1), st
        fld qword ptr [ebp - 0x8]
        fmul st(0), st
        faddp st(1), st
        fsqrt
        fstp qword ptr [ebp - 0x28]
        fld qword ptr [ebp - 0x28]
        mov esp, ebp
        pop ebp
        ret
    }
}

// [0x006D0370] sub_006D0370 (96 bytes)
extern "C" __declspec(naked) int __fastcall fn_006D0370(void* self, int edx_unused, int a1) {
    __asm {
        push ebx
        mov bl, byte ptr [esp + 0x8]
        push esi
        mov esi, ecx
        cmp byte ptr [esi + 0x1c], bl
        je L_done
        test bl, bl
        je L_store
        mov eax, dword ptr [esi + 0x64]
        test eax, eax
        jle L_store
        mov eax, dword ptr [esi + 0x68]
        push edi
        xor edi, edi
        test eax, eax
        jle L_call
        push ebp
        lea ebp, [esi + 0x54]
    L_loop:
        mov ecx, dword ptr [esi + 0x90]
        mov eax, dword ptr [esi + 0x78]
        mov edx, dword ptr [ecx + 4*edi]
        push edx
        push ebp
        push esi
        call dword ptr [eax + 4*edi]
        mov eax, dword ptr [esi + 0x68]
        add esp, 0xc
        inc edi
        cmp edi, eax
        jl L_loop
        pop ebp
    L_call:
        mov ecx, esi
        call ext_006D03D0
        pop edi
    L_store:
        mov byte ptr [esi + 0x1c], bl
    L_done:
        pop esi
        xor eax, eax
        pop ebx
        ret 0x4
    }
}

// [0x006D2AD0] sub_006D2AD0 (96 bytes)
extern "C" void ext_006D2390();
extern "C" void ext_006D2B30();
extern "C" __declspec(naked) void __fastcall fn_006D2AD0(void* self) {
    __asm {
        push -1
        push 0x8b9338
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        sub esp, 0x20
        lea eax, [esp + 0x38]
        mov ecx, esp
        mov dword ptr [esp + 0x24], esp
        push eax
        mov dword ptr [esp + 0x34], 0
        call ext_006D2390
        push -1
        mov ecx, esi
        call ext_006D2B30
        lea ecx, [esp + 0x18]
        mov esi, eax
        call ext_006D80A0
        mov ecx, dword ptr [esp + 0x8]
        mov eax, esi
        mov dword ptr fs:[0], ecx
        pop esi
        add esp, 0x10
        ret 0x20
    }
}

// [0x006D2BD0] sub_006D2BD0 (96 bytes)
extern "C" void ext_006D2390();
extern "C" void ext_006D2A40();
extern "C" __declspec(naked) void __fastcall fn_006D2BD0(void* self, int edx_unused, int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8) {
    __asm {
        push -1
        push 0x8b9338
        __asm _emit 0x64 __asm _emit 0xA1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
        push eax
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x25 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
        push ecx
        push esi
        mov esi, ecx
        sub esp, 0x20
        lea eax, [esp + 0x38]
        mov ecx, esp
        mov dword ptr [esp + 0x24], esp
        push eax
        mov dword ptr [esp + 0x34], 0x0
        call ext_006D2390
        mov ecx, dword ptr [esi]
        push ecx
        mov ecx, esi
        call ext_006D2A40
        lea ecx, [esp + 0x18]
        mov esi, eax
        call ext_006D80A0
        mov ecx, dword ptr [esp + 0x8]
        mov eax, esi
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0D __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
        pop esi
        add esp, 0x10
        ret 0x20
    }
}

// [0x006D7910] sub_006D7910 (96 bytes)
extern "C" void ext_006D2160();
extern "C" void ext_006FD420();
extern "C" __declspec(naked) void __fastcall fn_006D7910(void* self) {
    __asm {
        push -1
        push 0x008B9228
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        mov dword ptr [esi], 0x0099396C
        lea ecx, [esi + 0x28]
        mov dword ptr [esp + 0x10], 0x0
        call ext_006D2160
        mov ecx, esi
        mov dword ptr [esp + 0x10], -1
        call ext_006FD420
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x006D2CC0] sub_006D2CC0 (96 bytes)
extern "C" void ext_006D2D20();
extern "C" __declspec(naked) void __fastcall fn_006D2CC0(void* self) {
    __asm {
        push -1
        push 0x008b8fdb
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push 0x21c
        call ext_006A5C62
        add esp, 4
        __asm _emit 0x89 __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x00
        test eax, eax
        mov dword ptr [esp + 0xc], 0
        je L_null
        mov ecx, eax
        call ext_006D2D20
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

// [0x006DE970] sub_006DE970 (96 bytes)
extern "C" void ext_006DE3E0();

typedef int (__thiscall *DE970_CountFn)(void*);
typedef void* (__thiscall *DE970_ItemFn)(void*, int);
typedef int (__fastcall *DE970_IdFn)(void*);

extern "C" void ext_006DE970();

// Recursive search: for each child i (vt[6]), return child if ext_006DE3E0(child) == a1,
// else recurse into child; returns first match or 0. ret 4.
extern "C" __declspec(naked) void* __fastcall fn_006DE970(void* self, int edx_unused, int a1) {
    __asm {
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        xor ebx, ebx
        mov eax, dword ptr [esi]
        call dword ptr [eax + 0x14]
        test eax, eax
        jle done_zero
        mov ebp, dword ptr [esp + 0x14]
    loop_top:
        mov edx, dword ptr [esi]
        push ebx
        mov ecx, esi
        call dword ptr [edx + 0x18]
        mov edi, eax
        mov ecx, edi
        call ext_006DE3E0
        cmp eax, ebp
        je found
        push ebp
        mov ecx, edi
        call ext_006DE970
        test eax, eax
        jne ret_eax
        mov eax, dword ptr [esi]
        mov ecx, esi
        inc ebx
        call dword ptr [eax + 0x14]
        cmp ebx, eax
        jl loop_top
    done_zero:
        xor eax, eax
    ret_eax:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x4
    found:
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x4
    }
}

// [0x006DE140] sub_006DE140 (96 bytes)
extern "C" void ext_006CA0E0();
extern "C" void ext_006DEEC0();
extern "C" __declspec(naked) void __fastcall fn_006DE140(void* self) {
    __asm {
        push esi
        mov esi, ecx
        push edi
        mov eax, dword ptr [esi]
        call dword ptr [eax + 0x14]
        test eax, eax
        jne L_169
        mov ecx, esi
        call ext_006DEEC0
        test eax, eax
        jne L_191
        push eax
        call ext_006CA0E0
        push eax
        mov ecx, esi
        call ext_006DEED0
        pop edi
        pop esi
        ret
    L_169:
        mov edx, dword ptr [esi]
        mov ecx, esi
        xor edi, edi
        call dword ptr [edx + 0x14]
        test eax, eax
        jle L_191
    L_176:
        mov eax, dword ptr [esi]
        push edi
        mov ecx, esi
        call dword ptr [eax + 0x18]
        mov ecx, eax
        call fn_006DE140
        mov edx, dword ptr [esi]
        mov ecx, esi
        inc edi
        call dword ptr [edx + 0x14]
        cmp edi, eax
        jl L_176
    L_191:
        pop edi
        pop esi
        ret
    }
}

// [0x006D5A60] sub_006D5A60 (112 bytes)
extern "C" __declspec(naked) void __fastcall fn_006D5A60(void* self) {
    __asm {
        push -1
        push 0x8b9056
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        mov dword ptr [esi], 0x99393c
        lea ecx, [esi + 0xb0]
        mov dword ptr [esp + 0x10], 0x1
        call ext_006B9D70
        lea ecx, [esi + 0x5c]
        mov byte ptr [esp + 0x10], 0x0
        call ext_006B9D70
        lea ecx, [esi + 0x4]
        mov dword ptr [esp + 0x10], 0xffffffff
        call ext_007641C0
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x006D7E60] sub_006D7E60 (112 bytes)
// Resets three sub-objects via ext_006D2250 (ecx = this+0x1c4 / +0x1dc / +0x28),
// calls ext_006FDEF0(this), then zeroes the 6 dwords at +0x1a8..+0x1bc and 4 bytes at +0x1c0..+0x1c3.
extern "C" __declspec(naked) void __fastcall fn_006D7E60(void* self) {
    __asm {
        push esi
        mov esi, ecx
        lea ecx, [esi + 0x1c4]
        call ext_006D2250
        lea ecx, [esi + 0x1dc]
        call ext_006D2250
        lea ecx, [esi + 0x28]
        call ext_006D2250
        mov ecx, esi
        call ext_006FDEF0
        xor eax, eax
        mov dword ptr [esi + 0x1a8], eax
        mov dword ptr [esi + 0x1ac], eax
        mov dword ptr [esi + 0x1b0], eax
        mov dword ptr [esi + 0x1b4], eax
        mov dword ptr [esi + 0x1b8], eax
        mov dword ptr [esi + 0x1bc], eax
        mov byte ptr [esi + 0x1c0], al
        mov byte ptr [esi + 0x1c1], al
        mov byte ptr [esi + 0x1c2], al
        mov byte ptr [esi + 0x1c3], al
        pop esi
        ret
    }
}

// [0x006D8280] sub_006D8280 (112 bytes)
extern "C" __declspec(naked) void __fastcall fn_006D8280(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push esi
        push edi
        mov esi, ecx
        push 0x0
        or edi, -0x1
        call ext_006FDF70
        test eax, eax
        je fail_006D8280
        mov ecx, eax
        call ext_006FC930
        test eax, eax
        je fail_006D8280
        cmp dword ptr [eax], 0x2
        jne fail_006D8280
        cmp dword ptr [eax + 0x4], 0x2
        jne fail_006D8280
        mov ecx, dword ptr [esp + 0xc]
        mov edx, dword ptr [esi + 0x1c4]
        cmp ecx, edx
        jge fail_006D8280
        mov edx, dword ptr [esi + 0x1d4]
        lea ecx, [ecx + 2*ecx]
        mov esi, dword ptr [edx + 4*ecx + 0x4]
        lea ecx, [edx + 4*ecx]
        mov edx, dword ptr [esp + 0x10]
        cmp edx, esi
        jge fail_006D8280
        mov ecx, dword ptr [ecx]
        add ecx, edx
        mov edx, dword ptr [eax + 0x20]
        cmp ecx, edx
        jge fail_006D8280
        mov edx, dword ptr [eax + 0x30]
        pop edi
        pop esi
        mov eax, dword ptr [edx + 4*ecx]
        ret 0x8
    fail_006D8280:
        mov eax, edi
        pop edi
        pop esi
        ret 0x8
    }
}

// [0x006DCFD0] sub_006DCFD0 (112 bytes)
extern "C" void ext_006BB0C0();
extern "C" void ext_006BB150();
extern "C" void ext_006FC9A0();
extern "C" __declspec(naked) void __fastcall fn_006DCFD0(void* self) {
    __asm {
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi]
        call dword ptr [eax + 0xc]
        mov ebx, eax
        test ebx, ebx
        je done
        mov eax, dword ptr [ebx + 0xc0]
        xor ebp, ebp
        test eax, eax
        mov dword ptr [esp + 0xc], eax
        jle done
        push edi
    loop_top:
        mov ecx, dword ptr [ebx + 0xd0]
        mov edi, dword ptr [ecx + ebp*4]
        mov ecx, esi
        push edi
        call ext_006BB150
        test eax, eax
        jne next
        mov edx, dword ptr [esi]
        push edi
        mov ecx, esi
        call dword ptr [edx + 0x38]
        mov edi, eax
        test edi, edi
        je next
        push edi
        mov ecx, esi
        call ext_006BB0C0
        push ebx
        mov ecx, edi
        call ext_006FC9A0
    next:
        mov eax, dword ptr [esp + 0x10]
        inc ebp
        cmp ebp, eax
        jl loop_top
        pop edi
    done:
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret
    }
}

// [0x006D5940] sub_006D5940 (112 bytes)
// SEH-guarded (fs:[0] frame, handler 0x008BCB18). Calls ext_006B9D80 and ext_006BA6C0,
// selects one of two globals as the return value, then calls ext_006B9D70 for cleanup.
extern "C" int mem_008BCB18;
extern "C" int mem_00AA8788;
extern "C" int mem_00AA8E7C;
extern "C" int mem_00AA8794;
extern "C" void ext_006B9D70();
extern "C" void ext_006B9D80();
extern "C" void ext_006BA6C0();
extern "C" __declspec(naked) void __fastcall fn_006D5940(void* self) {
    __asm {
        push -1
        push offset mem_008BCB18
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x4c
        mov eax, dword ptr [esp + 0x5c]
        push esi
        push eax
        lea ecx, [esp + 0x8]
        call ext_006B9D80
        push offset mem_00AA8788
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x5c], 0
        mov esi, offset mem_00AA8E7C
        call ext_006BA6C0
        test eax, eax
        jne skip_alt
        mov esi, offset mem_00AA8794
    skip_alt:
        lea ecx, [esp + 0x4]
        mov dword ptr [esp + 0x58], -1
        call ext_006B9D70
        mov ecx, dword ptr [esp + 0x50]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x58
        ret
    }
}

// [0x006DD240] sub_006DD240 (112 bytes)
extern "C" void ext_006D0490();
extern "C" void __cdecl ext_006A5C5C(void* ptr);
// Searches self+0xd0 (count at +0, pointer array at +0x10) for *slot; if found, notifies
// the element via ext_006D0490 when its +0x8 is set, calls ext_006D2200(container, index),
// frees the pointer via ext_006A5C5C and clears *slot. ret 4.
extern "C" __declspec(naked) void __fastcall fn_006DD240(void* self, int edx_unused, void** slot) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0x8]
        push esi
        mov edx, dword ptr [ebx]
        push edi
        test edx, edx
        je fn006dd240_done
        mov eax, dword ptr [ecx + 0xd0]
        lea edi, [ecx + 0xd0]
        xor esi, esi
        test eax, eax
        jle fn006dd240_done
        mov ecx, dword ptr [edi + 0x10]
    fn006dd240_loop:
        cmp dword ptr [ecx], edx
        je fn006dd240_found
        inc esi
        add ecx, 0x4
        cmp esi, eax
        jl fn006dd240_loop
        pop edi
        pop esi
        pop ebx
        ret 0x4
    fn006dd240_found:
        test esi, esi
        jl fn006dd240_done
        mov ecx, dword ptr [edx + 0x8]
        test ecx, ecx
        je fn006dd240_skip
        push edx
        push 0x6dd7a0
        call ext_006D0490
    fn006dd240_skip:
        push esi
        mov ecx, edi
        call ext_006D2200
        mov eax, dword ptr [ebx]
        push eax
        call ext_006A5C5C
        add esp, 0x4
        mov dword ptr [ebx], 0x0
    fn006dd240_done:
        pop edi
        pop esi
        pop ebx
        ret 0x4
    }
}

// [0x006DD1D0] sub_006DD1D0 (112 bytes)
extern "C" void ext_00783840();
extern "C" void ext_006D0450();
extern "C" __declspec(naked) void __fastcall fn_006DD1D0(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        push ebx
        push esi
        mov esi, dword ptr [esp + 0xc]
        push edi
        test esi, esi
        mov ebx, ecx
        je lbl_exit
        mov edi, dword ptr [esp + 0x18]
        test edi, edi
        je lbl_exit
        push 0x10
        call ext_006A5C62
        add esp, 0x4
        test eax, eax
        je lbl_zero
        mov ecx, dword ptr [esp + 0x14]
        push ebx
        push edi
        push ecx
        push esi
        mov ecx, eax
        call ext_00783840
        mov esi, eax
        jmp lbl_cont
    lbl_zero:
        xor esi, esi
    lbl_cont:
        mov eax, dword ptr [ebx + 0xd0]
        lea ecx, [ebx + 0xd0]
        lea edx, [esp + 0x10]
        mov dword ptr [esp + 0x10], esi
        push edx
        push eax
        call ext_006D2170
        push esi
        push 0x6dd7a0
        mov ecx, edi
        call ext_006D0450
    lbl_exit:
        pop edi
        pop esi
        pop ebx
        ret 0xc
    }
}

// [0x006D89D0] sub_006D89D0 (112 bytes)
// SEH-protected wrapper (ret 0x10): builds a local temp from arg1, calls the
// member accessor on *self, then destroys the temp and returns the accessor result.
extern "C" __declspec(naked) void* __fastcall fn_006D89D0(void* self, int edx_unused, void* a1, void* a2, void* a3, void* a4) {
    __asm {
        push -0x1
        push 0x008b9338
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        mov esi, ecx
        sub esp, 0x10
        lea eax, [esp + 0x28]
        mov ecx, esp
        mov dword ptr [esp + 0x14], esp
        push eax
        mov dword ptr [esp + 0x24], 0x0
        call ext_0077FAC0
        mov ecx, dword ptr [esi]
        push ecx
        mov ecx, esi
        call ext_006D8A40
        lea ecx, [esp + 0x18]
        mov esi, eax
        mov dword ptr [esp + 0x10], 0xffffffff
        call ext_006D80A0
        mov ecx, dword ptr [esp + 0x8]
        mov eax, esi
        mov dword ptr fs:[0x0], ecx
        pop esi
        add esp, 0x10
        ret 0x10
    }
}

// [0x006DE3F0] sub_006DE3F0 (112 bytes)
extern "C" void __cdecl ext_006A5C5C(void* ptr);
extern "C" void ext_006DE3F0();
extern "C" void ext_006DE460();

extern "C" __declspec(naked) void __fastcall fn_006DE3F0(void* self, int edx_unused, void* a1) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        mov esi, ecx
        test edi, edi
        mov eax, dword ptr [esi + 0x14]
        je L_6DE3F0_clear
        cmp eax, edi
        je L_6DE3F0_done
        test eax, eax
        je L_6DE3F0_store
        push 0x0
        call ext_006DE3F0
    L_6DE3F0_store:
        mov dword ptr [esi + 0x14], edi
        mov eax, dword ptr [edi + 0xa0]
        inc eax
        mov dword ptr [edi + 0xa0], eax
        pop edi
        pop esi
        ret 0x4
    L_6DE3F0_clear:
        mov ecx, dword ptr [eax + 0xa0]
        dec ecx
        mov dword ptr [eax + 0xa0], ecx
        mov edi, dword ptr [esi + 0x14]
        mov eax, dword ptr [edi + 0xa0]
        test eax, eax
        jne L_6DE3F0_done
        test edi, edi
        je L_6DE3F0_null
        mov ecx, edi
        call ext_006DE460
        push edi
        call ext_006A5C5C
        add esp, 0x4
    L_6DE3F0_null:
        mov dword ptr [esi + 0x14], 0x0
    L_6DE3F0_done:
        pop edi
        pop esi
        ret 0x4
    }
}

// [0x006D5110] sub_006D5110 (128 bytes)
extern "C" void ext_006D2200();
extern "C" void ext_006E7440();
extern "C" __declspec(naked) bool __fastcall fn_006D5110(void* self, int edx_unused, int a1) {
    __asm {
        push ebx
        mov ebx, ecx
        xor eax, eax
        mov edx, dword ptr [ebx + 0x184]
        lea ecx, [ebx + 0x184]
        push esi
        push edi
        test edx, edx
        jle not_found_b
        mov esi, dword ptr [ecx + 0x10]
        mov edi, dword ptr [esp + 0x10]
    loop_top:
        cmp dword ptr [esi], edi
        je found_at
        inc eax
        add esi, 0x4
        cmp eax, edx
        jl loop_top
    not_found_a:
        push 0
        lea ecx, [ebx + 0x1c4]
        call ext_006E7440
        pop edi
        pop esi
        xor al, al
        pop ebx
        ret 0x4
    found_at:
        cmp eax, -1
        jne have_index
    not_found_b:
        push 0
        lea ecx, [ebx + 0x1c4]
        call ext_006E7440
        pop edi
        pop esi
        xor al, al
        pop ebx
        ret 0x4
    have_index:
        push eax
        call ext_006D2200
        test edi, edi
        je skip_release
        mov eax, dword ptr [edi]
        push 1
        mov ecx, edi
        call dword ptr [eax + 0xc]
    skip_release:
        pop edi
        pop esi
        mov al, 1
        pop ebx
        ret 0x4
    }
}

// [0x006D5090] sub_006D5090 (128 bytes)
extern "C" void ext_006E7440();
extern "C" void __cdecl ext_006A5C5C(void* ptr);
extern "C" __declspec(naked) void __fastcall fn_006D5090(void* self, int edx_unused, int a1) {
    __asm {
        push ebx
        mov ebx, ecx
        xor eax, eax
        mov edx, dword ptr [ebx + 0x154]
        lea ecx, [ebx + 0x154]
        push esi
        push edi
        test edx, edx
        jle not_found_b
        mov esi, dword ptr [ecx + 0x10]
        mov edi, dword ptr [esp + 0x10]
    loop_top:
        cmp dword ptr [esi], edi
        je found_at
        inc eax
        add esi, 0x4
        cmp eax, edx
        jl loop_top
        push 0
        lea ecx, [ebx + 0x1c4]
        call ext_006E7440
        pop edi
        pop esi
        xor al, al
        pop ebx
        ret 0x4
    found_at:
        cmp eax, -1
        jne have_index
    not_found_b:
        push 0
        lea ecx, [ebx + 0x1c4]
        call ext_006E7440
        pop edi
        pop esi
        xor al, al
        pop ebx
        ret 0x4
    have_index:
        push eax
        call ext_006D2200
        test edi, edi
        je done
        mov ecx, edi
        call ext_006D80A0
        push edi
        call ext_006A5C5C
        add esp, 0x4
    done:
        pop edi
        pop esi
        mov al, 1
        pop ebx
        ret 0x4
    }
}

// [0x006D3C30] sub_006D3C30 (128 bytes)
extern "C" void ext_006E99C0();
extern "C" __declspec(naked) int __fastcall fn_006D3C30(void* self) {
    __asm {
        push -1
        push 0x8b8fdb
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        push edi
        mov edi, ecx
        push 0x24
        call ext_006A5C62
        add esp, 0x4
        mov dword ptr [esp + 0x8], eax
        test eax, eax
        mov dword ptr [esp + 0x14], 0x0
        je L_006D3C70
        push edi
        mov ecx, eax
        call ext_006E99C0
        mov esi, eax
        jmp L_006D3C72
    L_006D3C70:
        xor esi, esi
    L_006D3C72:
        test esi, esi
        mov dword ptr [esp + 0x14], 0xffffffff
        je L_006D3C93
        mov edx, dword ptr [edi + 0x34]
        lea ecx, [edi + 0x34]
        lea eax, [esp + 0x8]
        mov dword ptr [esp + 0x8], esi
        push eax
        push edx
        call ext_006D2170
    L_006D3C93:
        mov ecx, dword ptr [esp + 0xc]
        mov eax, esi
        pop edi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret
    }
}

// [0x006D3880] sub_006D3880 (128 bytes)
// SEH-framed: installs an fs:[0] exception record (scope table 0x008B8FDB),
// calls ext_006A5C62(0x40), then conditionally ext_0072B280(eax) and ext_006D2170.
extern "C" void ext_0072B280();
extern "C" __declspec(naked) void __fastcall fn_006D3880(void* self) {
    __asm {
        push -0x1
        push 0x8b8fdb
        __asm _emit 0x64 __asm _emit 0xA1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
        push eax
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x25 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
        push ecx
        push esi
        push edi
        mov edi, ecx
        push 0x40
        call ext_006A5C62
        add esp, 0x4
        mov dword ptr [esp + 0x8], eax
        test eax, eax
        mov dword ptr [esp + 0x14], 0x0
        je L_null_006D3880
        push edi
        mov ecx, eax
        call ext_0072B280
        mov esi, eax
        jmp L_join_006D3880
    L_null_006D3880:
        xor esi, esi
    L_join_006D3880:
        test esi, esi
        mov dword ptr [esp + 0x14], 0xffffffff
        je L_skip_006D3880
        mov edx, dword ptr [edi + 0x7c]
        lea ecx, [edi + 0x7c]
        lea eax, [esp + 0x8]
        mov dword ptr [esp + 0x8], esi
        push eax
        push edx
        call ext_006D2170
    L_skip_006D3880:
        mov ecx, dword ptr [esp + 0xc]
        mov eax, esi
        pop edi
        pop esi
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0D __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
        add esp, 0x10
        ret
    }
}

// [0x006D5F50] sub_006D5F50 (128 bytes)
extern "C" void ext_006D6350();
extern "C" void ext_006D68B0();
extern "C" void ext_006E7440();
extern "C" int mem_00B60288;

extern "C" __declspec(naked) void* __fastcall fn_006D5F50(void* self, int edx_unused, int a1) {
    __asm {
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr [edi + 0xfc]
        mov ecx, dword ptr [eax + 0x4]
        test ecx, ecx
        jne L_nonzero_006D5F50
        mov ecx, edi
        call ext_006D6350
        test al, al
        jne L_nonzero_006D5F50
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        ret 0x4
    L_nonzero_006D5F50:
        mov ecx, dword ptr [edi + 0xfc]
        mov ebx, dword ptr [esp + 0x10]
        test ebx, ebx
        mov ecx, dword ptr [ecx + 0x4]
        sete al
        mov edx, dword ptr [ecx]
        push eax
        call dword ptr [edx + 0x10]
        mov esi, eax
        test esi, esi
        jne L_found_006D5F50
        test ebx, ebx
        jne L_ret_null_006D5F50
        push 0x7
        lea ecx, [edi + 0x4]
        call ext_006E7440
    L_ret_null_006D5F50:
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        ret 0x4
    L_found_006D5F50:
        mov eax, dword ptr [mem_00B60288]
        mov edx, dword ptr [esi]
        push eax
        mov ecx, esi
        call dword ptr [edx + 0x14]
        test al, al
        je L_skip_006D5F50
        push esi
        mov ecx, edi
        call ext_006D68B0
    L_skip_006D5F50:
        mov eax, esi
        pop edi
        pop esi
        pop ebx
        ret 0x4
    }
}

// [0x006D29A0] sub_006D29A0 (144 bytes)
// Normalizes the 3-double vector at self (x@0, y@8, z@0x10) in place; zeroes it when len == mem_0092A278.
extern "C" int mem_0092A278;
extern "C" int mem_0092A270;
extern "C" __declspec(naked) void __fastcall fn_006D29A0(void* self) {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0x20
        mov eax, dword ptr [ecx + 0x10]
        mov edx, dword ptr [ecx + 0x14]
        mov dword ptr [ebp - 0x8], eax
        mov eax, dword ptr [ecx + 0x8]
        mov dword ptr [ebp - 0x4], edx
        mov edx, dword ptr [ecx + 0xc]
        mov dword ptr [ebp - 0x10], eax
        mov eax, dword ptr [ecx]
        mov dword ptr [ebp - 0xc], edx
        mov edx, dword ptr [ecx + 0x4]
        mov dword ptr [ebp - 0x18], eax
        mov dword ptr [ebp - 0x14], edx
        fld qword ptr [ebp - 0x18]
        fmul st(0), st
        fld qword ptr [ebp - 0x10]
        fmul st(0), st
        faddp st(1), st
        fld qword ptr [ebp - 0x8]
        fmul st(0), st
        faddp st(1), st
        fsqrt
        fstp qword ptr [ebp - 0x20]
        fld qword ptr [ebp - 0x20]
        fcom qword ptr [mem_0092A278]
        fnstsw ax
        test ah, 0x40
        je short L_scale_006D29A0
        xor eax, eax
        mov dword ptr [ecx], eax
        mov dword ptr [ecx + 0x8], eax
        mov dword ptr [ecx + 0x10], eax
        mov dword ptr [ecx + 0x4], eax
        fstp st(0)
        mov dword ptr [ecx + 0xc], eax
        mov dword ptr [ecx + 0x14], eax
        mov esp, ebp
        pop ebp
        ret
    L_scale_006D29A0:
        fdivr qword ptr [mem_0092A270]
        fld st(0)
        fmul qword ptr [ecx]
        fstp qword ptr [ecx]
        fld st(0)
        fmul qword ptr [ecx + 0x8]
        fstp qword ptr [ecx + 0x8]
        fmul qword ptr [ecx + 0x10]
        fstp qword ptr [ecx + 0x10]
        mov esp, ebp
        pop ebp
        ret
    }
}

// [0x006D2500] sub_006D2500 (144 bytes)
extern "C" void ext_006D2390();
extern "C" void ext_006D23B0();
extern "C" void ext_006D80A0();

// Builds a 4-double negated vector on the stack from *self (ecx) and calls sub_006D23B0,
// then sub_006D2390(self_arg, &tmp) and sub_006D80A0(&tmp). Returns the stack arg in eax.
extern "C" __declspec(naked) void* __fastcall fn_006D2500(void* self, int edx_unused, void* a1) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -0x8
        push -0x1
        push 0x8bfd88
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x24
        fld qword ptr [ecx + 0x18]
        push esi
        xor esi, esi
        sub esp, 0x8
        mov dword ptr [esp + 0xc], esi
        fchs
        fstp qword ptr [esp]
        fld qword ptr [ecx + 0x10]
        sub esp, 0x8
        fchs
        fstp qword ptr [esp]
        fld qword ptr [ecx + 0x8]
        sub esp, 0x8
        fchs
        fstp qword ptr [esp]
        fld qword ptr [ecx]
        sub esp, 0x8
        lea ecx, [esp + 0x28]
        fchs
        fstp qword ptr [esp]
        call ext_006D23B0
        mov dword ptr [esp + 0x30], esi
        mov esi, dword ptr [ebp + 0x8]
        lea eax, [esp + 0x8]
        mov ecx, esi
        push eax
        call ext_006D2390
        lea ecx, [esp + 0x8]
        call ext_006D80A0
        mov ecx, dword ptr [esp + 0x28]
        mov eax, esi
        mov dword ptr fs:[0x0], ecx
        pop esi
        mov esp, ebp
        pop ebp
        ret 0x4
    }
}

// [0x006D2410] sub_006D2410 (144 bytes)
// Builds a 0x28-byte temp from self (4 doubles) scaled by s, then out->op(temp); returns out.
extern "C" __declspec(naked) void* __fastcall fn_006D2410(void* self, int edx_unused, void* out, double s) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -8
        push -1
        push 0x8bfd88
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x24
        fld qword ptr [ebp + 0xc]
        fld st(0)
        fmul qword ptr [ecx + 0x18]
        push esi
        xor esi, esi
        sub esp, 0x8
        mov dword ptr [esp + 0xc], esi
        fstp qword ptr [esp]
        sub esp, 0x8
        fld st(0)
        fmul qword ptr [ecx + 0x10]
        sub esp, 0x8
        sub esp, 0x8
        fstp qword ptr [esp + 0x10]
        fld st(0)
        fmul qword ptr [ecx + 0x8]
        fstp qword ptr [esp + 0x8]
        fmul qword ptr [ecx]
        lea ecx, [esp + 0x28]
        fstp qword ptr [esp]
        call ext_006D23B0
        mov dword ptr [esp + 0x30], esi
        mov esi, dword ptr [ebp + 0x8]
        lea eax, [esp + 0x8]
        mov ecx, esi
        push eax
        call ext_006D2390
        lea ecx, [esp + 0x8]
        call ext_006D80A0
        mov ecx, dword ptr [esp + 0x28]
        mov eax, esi
        mov dword ptr fs:[0], ecx
        pop esi
        mov esp, ebp
        pop ebp
        ret 0xc
    }
}

// [0x006DC560] sub_006DC560 (144 bytes)
extern "C" void __cdecl ext_006A5C5C(void* ptr);
extern "C" void __fastcall ext_006C9250(void* self);
extern "C" void ext_006D2200();
extern "C" __declspec(naked) void __fastcall fn_006DC560(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        test eax, eax
        jne L_nonzero_006DC560
        mov ecx, dword ptr [ecx + 0xec]
        push 0xaa9408
        push eax
        call ext_006E7410
        xor al, al
        pop esi
        ret 0x4
    L_nonzero_006DC560:
        jl L_fail_006DC560
        mov esi, dword ptr [ecx + 0xb8]
        lea edx, [ecx + 0xb8]
        cmp eax, esi
        jge L_fail_006DC560
        mov esi, dword ptr [ecx + 0xe8]
        cmp esi, eax
        jne L_skip_006DC560
        dec esi
        mov dword ptr [ecx + 0xe8], esi
    L_skip_006DC560:
        mov ecx, dword ptr [edx + 0x10]
        push eax
        mov esi, dword ptr [ecx + 4*eax]
        mov ecx, edx
        call ext_006D2200
        test esi, esi
        je L_done_006DC560
        mov ecx, esi
        call ext_006C9250
        push esi
        call ext_006A5C5C
        add esp, 0x4
    L_done_006DC560:
        mov al, 0x1
        pop esi
        ret 0x4
    L_fail_006DC560:
        mov ecx, dword ptr [ecx + 0xec]
        push 0xaa87e4
        push 0x0
        call ext_006E7410
        xor al, al
        pop esi
        ret 0x4
    }
}

// [0x006D8490] sub_006D8490 (144 bytes)
extern "C" void ext_006D89C0();
extern "C" void ext_006D89D0();
extern "C" __declspec(naked) void __fastcall fn_006D8490(void* self, int edx_unused, void* a1, void* a2, void* a3, void* a4) {
    __asm {
        push -1
        push 0x8b9300
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        push 0x0
        mov dword ptr [esp + 0x14], 0x0
        call ext_006FDF70
        test eax, eax
        je short L_end_006D8490
        push 0x0
        mov ecx, esi
        call ext_006FDF70
        mov ecx, eax
        call ext_006FC930
        mov esi, eax
        test esi, esi
        je short L_end_006D8490
        sub esp, 0x10
        lea eax, [esp + 0x28]
        mov ecx, esp
        mov dword ptr [esp + 0x14], esp
        push eax
        call ext_0077FAC0
        mov ecx, esi
        mov byte ptr [esp + 0x20], 0x0
        call ext_006D89C0
        mov ecx, eax
        call ext_006D89D0
    L_end_006D8490:
        lea ecx, [esp + 0x18]
        mov dword ptr [esp + 0x10], 0xffffffff
        call ext_006D80A0
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 0x10
    }
}

// [0x006DECF0] sub_006DECF0 (144 bytes)
extern "C" void ext_006DECD0();
extern "C" void ext_006DED80();
extern "C" void ext_006DEEB0();
extern "C" void ext_006E5750();
extern "C" __declspec(naked) void __fastcall fn_006DECF0(void* self, int edx_unused, int a1) {
    __asm {
        push ebx
        push esi
        push edi
        mov edi, ecx
        call ext_006DEEB0
        test eax, eax
        je L_ret_006DECF0
        mov ecx, dword ptr [edi + 0x58]
        mov eax, dword ptr [esp + 0x10]
        cmp ecx, eax
        je L_ret_006DECF0
        mov edx, dword ptr [edi + 0x40]
        test edx, edx
        je L_else_006DECF0
        cmp ecx, eax
        mov esi, edi
        jge L_found_006DECF0
    L_loop_006DECF0:
        mov ecx, dword ptr [esi + 0x40]
        test ecx, ecx
        je L_found_006DECF0
        cmp dword ptr [ecx + 0x58], eax
        jge L_found_006DECF0
        mov esi, ecx
        cmp dword ptr [esi + 0x58], eax
        jl L_loop_006DECF0
    L_found_006DECF0:
        mov ebx, dword ptr [esi + 0x40]
        test ebx, ebx
        je L_nb_006DECF0
        cmp dword ptr [ebx + 0x58], eax
        jle L_ret_006DECF0
        push 0x0
        push eax
        mov ecx, edi
        call ext_006DED80
        mov eax, dword ptr [esi + 0x40]
        mov dword ptr [eax + 0x40], ebx
        jmp L_tail_006DECF0
    L_nb_006DECF0:
        push 0x1
        push eax
        mov ecx, esi
        jmp L_call2_006DECF0
    L_else_006DECF0:
        test eax, eax
        je L_ret_006DECF0
        push 0x1
        push eax
        mov ecx, edi
    L_call2_006DECF0:
        call ext_006DED80
    L_tail_006DECF0:
        push 0x10
        mov ecx, edi
        call ext_006DECD0
        mov ecx, eax
        call ext_006E5750
    L_ret_006DECF0:
        pop edi
        pop esi
        pop ebx
        ret 0x4
    }
}

// [0x006D6C20] sub_006D6C20 (144 bytes)
extern "C" void __cdecl ext_006A5C5C(void* ptr);
extern "C" void ext_006B9D70();
extern "C" void ext_006D5A60();
extern "C" void ext_006D6CB0();

extern "C" __declspec(naked) void __fastcall fn_006D6C20(void* self) {
    __asm {
        push -1
        push 0x8b9186
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [esp + 0x8], esi
        mov dword ptr [esi], 0x99395c
        mov dword ptr [esp + 0x14], 0x1
        call ext_006D6CB0
        mov edi, dword ptr [esi + 0xfc]
        test edi, edi
        je short L_skip_6D6C78
        mov ecx, dword ptr [edi + 0x4]
        test ecx, ecx
        je short L_skip_6D6C68
        mov eax, dword ptr [ecx]
        push 0x1
        call dword ptr [eax]
    L_skip_6D6C68:
        push edi
        mov dword ptr [edi + 0x4], 0x0
        call ext_006A5C5C
        add esp, 0x4
    L_skip_6D6C78:
        lea ecx, [esi + 0x100]
        mov byte ptr [esp + 0x14], 0x0
        call ext_006B9D70
        mov ecx, esi
        mov dword ptr [esp + 0x14], 0xffffffff
        call ext_006D5A60
        mov ecx, dword ptr [esp + 0xc]
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x006D9800] sub_006D9800 (160 bytes)
// Scans 12 records (stride 0x20, base 0xB5D924): compares arg string against the
// string pointers at rec-0xC (0xB5D918+i*0x20) and rec+0 (0xB5D924+i*0x20).
// On match returns dword at 0xB5D91C+i*0x20; otherwise returns 6.
extern "C" __declspec(naked) int __cdecl fn_006D9800(const char* key) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0x8]
        push ebp
        push esi
        push edi
        xor ebp, ebp
        mov edi, 0xb5d924
    loop_top:
        mov ecx, dword ptr [edi - 0xc]
        mov esi, ebx
    a_loop:
        mov al, byte ptr [ecx]
        mov dl, al
        cmp al, byte ptr [esi]
        jne a_neq
        test dl, dl
        je a_eq
        mov al, byte ptr [ecx + 0x1]
        mov dl, al
        cmp al, byte ptr [esi + 0x1]
        jne a_neq
        add ecx, 0x2
        add esi, 0x2
        test dl, dl
        jne a_loop
    a_eq:
        xor ecx, ecx
        jmp a_done
    a_neq:
        sbb ecx, ecx
        sbb ecx, -1
    a_done:
        test ecx, ecx
        je found
        mov ecx, dword ptr [edi]
        mov esi, ebx
    b_loop:
        mov al, byte ptr [ecx]
        mov dl, al
        cmp al, byte ptr [esi]
        jne b_neq
        test dl, dl
        je b_eq
        mov al, byte ptr [ecx + 0x1]
        mov dl, al
        cmp al, byte ptr [esi + 0x1]
        jne b_neq
        add ecx, 0x2
        add esi, 0x2
        test dl, dl
        jne b_loop
    b_eq:
        xor ecx, ecx
        jmp b_done
    b_neq:
        sbb ecx, ecx
        sbb ecx, -1
    b_done:
        test ecx, ecx
        je found
        inc ebp
        add edi, 0x20
        cmp ebp, 0xc
        jl loop_top
        pop edi
        pop esi
        pop ebp
        mov eax, 0x6
        pop ebx
        ret
    found:
        shl ebp, 0x5
        pop edi
        pop esi
        mov eax, dword ptr [ebp + 0xb5d91c]
        pop ebp
        pop ebx
        ret
    }
}

// [0x006DC3C0] sub_006DC3C0 (160 bytes)
extern "C" const char* __fastcall ext_006C9330(void* self);
extern "C" __declspec(naked) bool __fastcall fn_006DC3C0(void* self, int edx_unused, const char* a1) {
    __asm {
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        xor ebp, ebp
        mov eax, dword ptr [edi + 0xb8]
        test eax, eax
        jle not_found_006DC3C0
        mov ebx, dword ptr [esp + 0x14]
    outer_006DC3C0:
        mov eax, dword ptr [edi + 0xc8]
        mov esi, ebx
        mov ecx, dword ptr [eax + ebp*4]
        call ext_006C9330
    cmp_top_006DC3C0:
        mov dl, byte ptr [eax]
        mov cl, dl
        cmp dl, byte ptr [esi]
        jne diff_006DC3C0
        test cl, cl
        je equal_006DC3C0
        mov dl, byte ptr [eax + 1]
        mov cl, dl
        cmp dl, byte ptr [esi + 1]
        jne diff_006DC3C0
        add eax, 2
        add esi, 2
        test cl, cl
        jne cmp_top_006DC3C0
    equal_006DC3C0:
        xor eax, eax
        jmp cmp_done_006DC3C0
    diff_006DC3C0:
        sbb eax, eax
        sbb eax, -1
    cmp_done_006DC3C0:
        test eax, eax
        je found_006DC3C0
        mov eax, dword ptr [edi + 0xb8]
        inc ebp
        cmp ebp, eax
        jl outer_006DC3C0
    not_found_006DC3C0:
        mov ecx, dword ptr [edi + 0xec]
        push 0xaa93d4
        push 0
        call ext_006E7410
        mov dword ptr [edi + 0xe8], 0
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        ret 0x4
    found_006DC3C0:
        mov dword ptr [edi + 0xe8], ebp
        pop edi
        pop esi
        pop ebp
        mov al, 0x1
        pop ebx
        ret 0x4
    }
}

// [0x006D2590] sub_006D2590 (160 bytes)
extern "C" void ext_006D2390();
extern "C" void ext_006D23B0();
extern "C" void ext_006D80A0();
// Vector add of two 4 x double records (self + a2 -> temp), SEH-framed; result a1 returned in eax.
extern "C" __declspec(naked) void* __fastcall fn_006D2590(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -0x8
        push -0x1
        push 0x8bfd88
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x24
        mov eax, dword ptr [ebp + 0xc]
        push esi
        sub esp, 0x8
        xor esi, esi
        fld qword ptr [eax + 0x18]
        fadd qword ptr [ecx + 0x18]
        sub esp, 0x8
        mov dword ptr [esp + 0x14], esi
        sub esp, 0x8
        fstp qword ptr [esp + 0x10]
        fld qword ptr [eax + 0x10]
        fadd qword ptr [ecx + 0x10]
        sub esp, 0x8
        fstp qword ptr [esp + 0x10]
        fld qword ptr [eax + 0x8]
        fadd qword ptr [ecx + 0x8]
        fstp qword ptr [esp + 0x8]
        fld qword ptr [eax]
        fadd qword ptr [ecx]
        lea ecx, [esp + 0x28]
        fstp qword ptr [esp]
        call ext_006D23B0
        mov dword ptr [esp + 0x30], esi
        mov esi, dword ptr [ebp + 0x8]
        lea eax, [esp + 0x8]
        mov ecx, esi
        push eax
        call ext_006D2390
        lea ecx, [esp + 0x8]
        call ext_006D80A0
        mov ecx, dword ptr [esp + 0x28]
        mov eax, esi
        mov dword ptr fs:[0x0], ecx
        pop esi
        mov esp, ebp
        pop ebp
        ret 0x8
    }
}

// [0x006D2630] sub_006D2630 (160 bytes)
extern "C" __declspec(naked) void* __fastcall fn_006D2630(void* self, int edx_unused, void* out, void* other) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -0x8
        push -0x1
        push 0x8bfd88
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x24
        mov eax, dword ptr [ebp + 0xc]
        push esi
        fld qword ptr [ecx + 0x18]
        fsub qword ptr [eax + 0x18]
        sub esp, 0x8
        xor esi, esi
        sub esp, 0x8
        mov dword ptr [esp + 0x14], esi
        fstp qword ptr [esp + 0x8]
        fld qword ptr [ecx + 0x10]
        fsub qword ptr [eax + 0x10]
        sub esp, 0x8
        sub esp, 0x8
        fstp qword ptr [esp + 0x10]
        fld qword ptr [ecx + 0x8]
        fsub qword ptr [eax + 0x8]
        fstp qword ptr [esp + 0x8]
        fld qword ptr [ecx]
        fsub qword ptr [eax]
        lea ecx, [esp + 0x28]
        fstp qword ptr [esp]
        call ext_006D23B0
        mov dword ptr [esp + 0x30], esi
        mov esi, dword ptr [ebp + 0x8]
        lea eax, [esp + 0x8]
        mov ecx, esi
        push eax
        call ext_006D2390
        lea ecx, [esp + 0x8]
        call ext_006D80A0
        mov ecx, dword ptr [esp + 0x28]
        mov eax, esi
        mov dword ptr fs:[0x0], ecx
        pop esi
        mov esp, ebp
        pop ebp
        ret 0x8
    }
}

// [0x006D3560] sub_006D3560 (160 bytes)
extern "C" void ext_006B9D70();
extern "C" void ext_006D2170();
extern "C" void ext_006D57D0();
extern "C" void ext_006E7460();
extern "C" __declspec(naked) void __fastcall fn_006D3560(void* self, int edx_unused, int a1) {
    __asm {
        push -1
        push 0x8bcb18
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x4c
        mov eax, dword ptr [esp + 0x5c]
        push esi
        mov esi, ecx
        push edi
        push eax
        lea ecx, [esp + 0xc]
        push 0xaa8704
        push ecx
        call ext_006D57D0
        add esp, 0xc
        mov edi, dword ptr [esi]
        mov ecx, eax
        mov dword ptr [esp + 0x5c], 0x0
        call ext_006E7460
        push eax
        mov ecx, esi
        call dword ptr [edi + 0x8]
        lea ecx, [esp + 0x8]
        mov edi, eax
        mov dword ptr [esp + 0x5c], 0xffffffff
        call ext_006B9D70
        test edi, edi
        je L_skip_006D3560
        mov ecx, dword ptr [esi + 0x1b4]
        test ecx, ecx
        je L_nolist_006D3560
        mov edx, dword ptr [ecx]
        lea eax, [edi + 0x4]
        push eax
        call dword ptr [edx + 0x8]
    L_nolist_006D3560:
        mov eax, dword ptr [esi + 0x1c]
        lea ecx, [esi + 0x1c]
        lea edx, [esp + 0x64]
        mov dword ptr [esp + 0x64], edi
        push edx
        push eax
        call ext_006D2170
    L_skip_006D3560:
        mov ecx, dword ptr [esp + 0x54]
        mov eax, edi
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x58
        ret 0x4
    }
}

// [0x006D3A60] sub_006D3A60 (160 bytes)
extern "C" void ext_006D57D0();
extern "C" void ext_006E7460();
extern "C" __declspec(naked) void __fastcall fn_006D3A60(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push -1
        push 0x8bcb18
        __asm _emit 0x64 __asm _emit 0xA1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
        push eax
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x25 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
        sub esp, 0x4c
        mov eax, dword ptr [esp + 0x5c]
        push esi
        mov esi, ecx
        push edi
        push eax
        lea ecx, [esp + 0xc]
        push 0xaa86c0
        push ecx
        call ext_006D57D0
        add esp, 0xc
        mov edx, dword ptr [esp + 0x68]
        mov edi, dword ptr [esi]
        push edx
        mov ecx, eax
        mov dword ptr [esp + 0x60], 0x0
        call ext_006E7460
        push eax
        mov ecx, esi
        call dword ptr [edi + 0x44]
        lea ecx, [esp + 0x8]
        mov edi, eax
        mov dword ptr [esp + 0x5c], -1
        call ext_006B9D70
        test edi, edi
        je short L_end_006D3A60
        mov edx, dword ptr [esi + 0xc4]
        lea ecx, [esi + 0xc4]
        lea eax, [esp + 0x64]
        mov dword ptr [esp + 0x64], edi
        push eax
        push edx
        call ext_006D2170
    L_end_006D3A60:
        mov ecx, dword ptr [esp + 0x54]
        mov eax, edi
        pop edi
        pop esi
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0D __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
        add esp, 0x58
        ret 0x8
    }
}

// [0x006D37E0] sub_006D37E0 (160 bytes)
extern "C" void ext_006D57D0();
extern "C" void ext_006E7460();
extern "C" __declspec(naked) void __fastcall fn_006D37E0(void* self, int edx_unused, int a1) {
    __asm {
        push -1
        push 0x8bcb18
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x4c
        mov eax, dword ptr [esp + 0x5c]
        push esi
        mov esi, ecx
        push edi
        push eax
        lea ecx, [esp + 0xc]
        push 0xaa86ec
        push ecx
        call ext_006D57D0
        add esp, 0xc
        mov edi, dword ptr [esi]
        mov ecx, eax
        mov dword ptr [esp + 0x5c], 0x0
        call ext_006E7460
        push eax
        mov ecx, esi
        call dword ptr [edi + 0x34]
        lea ecx, [esp + 0x8]
        mov edi, eax
        mov dword ptr [esp + 0x5c], 0xffffffff
        call ext_006B9D70
        test edi, edi
        je L_skip_006D37E0
        mov ecx, dword ptr [esi + 0x1b8]
        test ecx, ecx
        je L_nolist_006D37E0
        mov edx, dword ptr [ecx]
        lea eax, [edi + 0x4]
        push eax
        call dword ptr [edx + 0x8]
    L_nolist_006D37E0:
        mov eax, dword ptr [esi + 0x64]
        lea ecx, [esi + 0x64]
        lea edx, [esp + 0x64]
        mov dword ptr [esp + 0x64], edi
        push edx
        push eax
        call ext_006D2170
    L_skip_006D37E0:
        mov ecx, dword ptr [esp + 0x54]
        mov eax, edi
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x58
        ret 0x4
    }
}

// [0x006DEAB0] sub_006DEAB0 (160 bytes)
extern "C" void ext_006DEEA0();
extern "C" void ext_006D2250();
extern "C" void ext_006DE130();
extern "C" void ext_006DECE0();
extern "C" __declspec(naked) void __fastcall fn_006DEAB0(void* self) {
    __asm {
        push esi
        push edi
        mov esi, ecx
        call ext_006DEEA0
        test eax, eax
        mov eax, dword ptr [esi]
        mov ecx, esi
        jne L_alt
        call dword ptr [eax + 0x14]
        mov edi, eax
        dec edi
        js L_after1
    L_loop1:
        mov edx, dword ptr [esi]
        push edi
        mov ecx, esi
        call dword ptr [edx + 0x10]
        dec edi
        jns L_loop1
        jmp L_after1
    L_alt:
        call dword ptr [eax + 0x14]
        mov edi, eax
        dec edi
        js L_after1
    L_loop2:
        mov edx, dword ptr [esi]
        push edi
        mov ecx, esi
        call dword ptr [edx + 0xc]
        dec edi
        jns L_loop2
    L_after1:
        lea ecx, [esi + 0x20]
        call ext_006D2250
        mov ecx, dword ptr [esi + 0x38]
        xor edi, edi
        cmp ecx, edi
        je L_a
        push edi
        call ext_006DE130
    L_a:
        mov eax, dword ptr [esi + 0x40]
        mov dword ptr [esi + 0x38], edi
        cmp eax, edi
        je L_b
        mov edx, dword ptr [eax + 0x1c]
        dec edx
        mov ecx, edx
        mov dword ptr [eax + 0x1c], edx
        cmp ecx, edi
        jg L_b
        mov ecx, dword ptr [esi + 0x40]
        push edi
        call ext_006DE130
    L_b:
        push esi
        mov ecx, esi
        mov dword ptr [esi + 0x40], edi
        call ext_006DECE0
        mov eax, dword ptr [esi + 0x3c]
        cmp eax, edi
        je L_c
        mov edx, dword ptr [eax + 0x1c]
        dec edx
        mov ecx, edx
        mov dword ptr [eax + 0x1c], edx
        cmp ecx, edi
        jg L_c
        mov ecx, dword ptr [esi + 0x3c]
        push edi
        call ext_006DE130
    L_c:
        mov dword ptr [esi + 0x3c], edi
        pop edi
        pop esi
        ret
    }
}

// [0x006D3B90] sub_006D3B90 (160 bytes)
extern "C" void ext_006B9D70();
extern "C" void ext_006D2170();
extern "C" void ext_006D57D0();
extern "C" void ext_006D5940();
extern "C" void ext_006E7460();
extern "C" __declspec(naked) void __fastcall fn_006D3B90(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push -1
        push 0x8bcb18
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x4c
        push ebx
        push esi
        push edi
        mov edi, dword ptr [esp + 0x6c]
        mov esi, ecx
        push edi
        call ext_006D5940
        mov ecx, dword ptr [esp + 0x6c]
        lea edx, [esp + 0x10]
        push ecx
        push eax
        push edx
        call ext_006D57D0
        add esp, 0x10
        mov ebx, dword ptr [esi]
        push edi
        mov ecx, eax
        mov dword ptr [esp + 0x64], 0
        call ext_006E7460
        push eax
        mov ecx, esi
        call dword ptr [ebx + 0x54]
        lea ecx, [esp + 0xc]
        mov edi, eax
        mov dword ptr [esp + 0x60], -1
        call ext_006B9D70
        test edi, edi
        je L_end_006D3B90
        mov edx, dword ptr [esi + 0x13c]
        lea ecx, [esi + 0x13c]
        lea eax, [esp + 0x6c]
        mov dword ptr [esp + 0x6c], edi
        push eax
        push edx
        call ext_006D2170
    L_end_006D3B90:
        mov ecx, dword ptr [esp + 0x58]
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x58
        ret 0x8
    }
}

// [0x006D02D0] sub_006D02D0 (160 bytes)
extern "C" void ext_006CA6B0();
extern "C" void ext_006C9C30();
extern "C" void ext_006C9CD0();
extern "C" void ext_006CBDB0();
extern "C" void ext_006CC600();
extern "C" void ext_006CC6B0();
extern "C" void ext_006CC6F0();
extern "C" int mem_0092A278;
extern "C" __declspec(naked) int __fastcall fn_006D02D0(void* self, int edx_unused, int a1) {
    __asm {
        sub esp, 0x50
        __asm _emit 0x8d __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x00
        push esi
        push edi
        mov edi, dword ptr [esp + 0x5c]
        mov esi, ecx
        push edi
        push eax
        call ext_006CA6B0
        mov ecx, eax
        call ext_006C9C30
        test al, 0x8
        je fail
        lea ecx, [esp + 0x30]
        push edi
        push ecx
        mov ecx, esi
        call ext_006CA6B0
        mov ecx, eax
        call ext_006C9CD0
        test ah, 0x1
        je fail
        push edi
        mov ecx, esi
        call ext_006CBDB0
        fcomp qword ptr [mem_0092A278]
        fnstsw ax
        test ah, 0x40
        je fail
        push edi
        mov ecx, esi
        call ext_006CC600
        fcomp qword ptr [mem_0092A278]
        fnstsw ax
        test ah, 0x40
        je fail
        push edi
        mov ecx, esi
        call ext_006CC6B0
        test al, al
        jne fail
        push edi
        mov ecx, esi
        call ext_006CC6F0
        test al, al
        jne fail
        pop edi
        mov eax, 1
        pop esi
        add esp, 0x50
        ret 0x4
    fail:
        pop edi
        xor eax, eax
        pop esi
        add esp, 0x50
        ret 0x4
    }
}

// [0x006D2C90] sub_006D2C90 (12 bytes)
extern "C" __declspec(naked) void __cdecl fn_006D2C90() {
    __asm {
        call ext_00728D90
        inc dword ptr [mem_00B5D770]
        ret
    }
}

// [0x006D2CA0] sub_006D2CA0 (12 bytes)
extern "C" void ext_006A6C87();
extern "C" int mem_006D2CB0;

extern "C" __declspec(naked) void fn_006D2CA0() {
    __asm {
        push offset mem_006D2CB0
        call ext_006A6C87
        pop ecx
        ret
    }
}

// [0x006D8AF0] sub_006D8AF0 (21 bytes)
extern "C" int ext_006FC3A0(void*, int);
extern "C" int mem_00B5D8F8;

extern "C" void __cdecl fn_006D8AF0() {
    mem_00B5D8F8 = ext_006FC3A0((void*)0x00B5D900, -1);
}

// [0x006D6CF0] sub_006D6CF0 (24 bytes)
extern "C" void ext_006D5AD0();
extern "C" void ext_006D6CB0();

extern "C" __declspec(naked) void __fastcall fn_006D6CF0(void* self, int edx_unused, void* a1) {
    __asm {
        push esi
        mov esi, ecx
        call ext_006D6CB0
        mov eax, dword ptr [esp + 0x8]
        mov ecx, esi
        push eax
        call ext_006D5AD0
        pop esi
        ret 0x4
    }
}

// [0x006D7E20] sub_006D7E20 (33 bytes)
extern "C" void ext_006B9D80();
extern "C" int mem_00AA9160;
extern "C" __declspec(naked) void* __fastcall fn_006D7E20(void* self, int edx_unused, void* a1) {
    __asm {
        push ecx
        push esi
        mov esi, dword ptr [esp + 0xc]
        push offset mem_00AA9160
        mov ecx, esi
        mov dword ptr [esp + 0x8], 0x0
        call ext_006B9D80
        mov eax, esi
        pop esi
        pop ecx
        ret 0x4
    }
}

// [0x006D7BA0] sub_006D7BA0 (33 bytes)
extern "C" void* __fastcall fn_006D7BA0(void* self, int edx_unused, void* a1) {
    volatile int local = 0;
    ((void (__thiscall*)(void*, void*))ext_006B9D80)(a1, &mem_00AA9158);
    return a1;
}

// [0x006D5F20] sub_006D5F20 (35 bytes)
// thiscall(self) with one stack arg (ret 0x4): calls E30, then D5AD0(arg) and, if it returns true, D6350.
extern "C" __declspec(naked) void __fastcall fn_006D5F20(void* self, int edx_unused, int a1) {
    __asm {
        push esi
        mov esi, ecx
        call ext_006D5E30
        mov eax, dword ptr [esp + 0x8]
        mov ecx, esi
        push eax
        call ext_006D5AD0
        test al, al
        je done
        mov ecx, esi
        call ext_006D6350
    done:
        pop esi
        ret 0x4
    }
}

// [0x006DD9D0] sub_006DD9D0 (36 bytes)
extern "C" int mem_00B5DC38;
extern "C" int mem_00B5DC40;
extern "C" int mem_00B5DC48;
extern "C" void __cdecl fn_006DD9D0() {
    double v = -*(double*)mem_00925284;
    *(double*)&mem_00B5DC38 = v;
    *(double*)&mem_00B5DC40 = -*(double*)mem_00925284;
    *(double*)&mem_00B5DC48 = -*(double*)mem_00925284;
}

// [0x006DBF40] sub_006DBF40 (36 bytes)
// Stores -(*_HUGE) into three consecutive doubles at 0x00B5DAB8, 0x00B5DAC0, 0x00B5DAC8.
extern "C" void __cdecl fn_006DBF40(void) {
    *(double*)&mem_00B5DAB8 = -*(double*)mem_00925284;
    *(double*)&mem_00B5DAC0 = -*(double*)mem_00925284;
    *(double*)&mem_00B5DAC8 = -*(double*)mem_00925284;
}

// [0x006D75C0] sub_006D75C0 (36 bytes)
extern "C" int mem_00B5D7A0;
extern "C" int mem_00B5D7A8;
extern "C" int mem_00B5D7B0;

extern "C" __declspec(naked) void __cdecl fn_006D75C0() {
    __asm {
        mov eax, dword ptr [mem_00925284]
        fld qword ptr [eax]
        fchs
        fstp qword ptr [mem_00B5D7A0]
        fld qword ptr [eax]
        fchs
        fstp qword ptr [mem_00B5D7A8]
        fld qword ptr [eax]
        fchs
        fstp qword ptr [mem_00B5D7B0]
        ret
    }
}

// [0x006D66A0] sub_006D66A0 (39 bytes)
extern "C" __declspec(naked) void __fastcall fn_006D66A0(void* self) {
    __asm {
        push ebx
        push esi
        mov esi, ecx
        push edi
        xor ebx, ebx
        mov edi, dword ptr [esi + 0xfc]
        mov ecx, dword ptr [edi + 0x4]
        cmp ecx, ebx
        je L_skip_006D66A0
        mov eax, dword ptr [ecx]
        push 0x1
        call dword ptr [eax]
    L_skip_006D66A0:
        mov dword ptr [edi + 0x4], ebx
        mov byte ptr [esi + 0x100], bl
        pop edi
        pop esi
        pop ebx
        ret
    }
}

// [0x006D8AB0] sub_006D8AB0 (41 bytes)
extern "C" int mem_00B5D900;
extern "C" int mem_00B5D908;
extern "C" int mem_00B5D904;
extern "C" int mem_00B5D90C;
extern "C" __declspec(naked) void __cdecl fn_006D8AB0(void) {
    __asm {
        mov dword ptr [mem_00B5D900], 0xb5d8f8
        mov dword ptr [mem_00B5D908], 0xaa916c
        mov dword ptr [mem_00B5D904], 0xb5eb50
        mov dword ptr [mem_00B5D90C], 0x0
        ret
    }
}

// [0x006DE660] sub_006DE660 (39 bytes)
extern "C" __declspec(naked) void* __fastcall fn_006DE660(void* self, int edx_unused, int index) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        mov esi, ecx
        test edi, edi
        jl L_null
        mov eax, dword ptr [esi]
        call dword ptr [eax + 0x14]
        cmp edi, eax
        jge L_null
        mov ecx, dword ptr [esi + 0x30]
        mov eax, dword ptr [ecx + 4*edi]
        pop edi
        pop esi
        ret 0x4
    L_null:
        pop edi
        xor eax, eax
        pop esi
        ret 0x4
    }
}

// [0x006D8CA0] sub_006D8CA0 (44 bytes)
extern "C" int mem_00B5D8F8;
extern "C" int mem_00B5EB78;
extern "C" int mem_00B5E400;

// Thiscall-style (ret 4): compares arg against three globals; returns true on first two hits.
extern "C" __declspec(naked) bool __fastcall fn_006D8CA0(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        mov ecx, dword ptr [mem_00B5D8F8]
        cmp eax, ecx
        jne L_006D8CB3
        mov al, 0x1
        ret 0x4
    L_006D8CB3:
        cmp eax, dword ptr [mem_00B5EB78]
        jne L_006D8CC0
        mov al, 0x1
        ret 0x4
    L_006D8CC0:
        cmp eax, dword ptr [mem_00B5E400]
        sete al
        ret 0x4
    }
}

// [0x006DBFE0] sub_006DBFE0 (46 bytes)
extern "C" int mem_00925284;
extern "C" double mem_00B5DAF0;
extern "C" double mem_00B5DAF8;
extern "C" double mem_00B5DB00;
extern "C" double mem_00B5DB08;

extern "C" void __cdecl fn_006DBFE0(void) {
    mem_00B5DAF0 = -*(double*)mem_00925284;
    mem_00B5DAF8 = -*(double*)mem_00925284;
    mem_00B5DB00 = -*(double*)mem_00925284;
    mem_00B5DB08 = -*(double*)mem_00925284;
}

// [0x006D7660] sub_006D7660 (46 bytes)
extern "C" int mem_00B5D7D8;
extern "C" int mem_00B5D7E0;
extern "C" int mem_00B5D7E8;
extern "C" int mem_00B5D7F0;
extern "C" __declspec(naked) void __cdecl fn_006D7660(void) {
    __asm {
        mov eax, dword ptr [mem_00925284]
        fld qword ptr [eax]
        fchs
        fstp qword ptr [mem_00B5D7D8]
        fld qword ptr [eax]
        fchs
        fstp qword ptr [mem_00B5D7E0]
        fld qword ptr [eax]
        fchs
        fstp qword ptr [mem_00B5D7E8]
        fld qword ptr [eax]
        fchs
        fstp qword ptr [mem_00B5D7F0]
        ret
    }
}

// [0x006DDA70] sub_006DDA70 (46 bytes)
extern "C" int mem_00B5DC70;
extern "C" int mem_00B5DC78;
extern "C" int mem_00B5DC80;
extern "C" int mem_00B5DC88;

extern "C" void __cdecl fn_006DDA70(void) {
    double* p = *(double**)&mem_00925284;
    *(double*)&mem_00B5DC70 = -*p;
    *(double*)&mem_00B5DC78 = -*p;
    *(double*)&mem_00B5DC80 = -*p;
    *(double*)&mem_00B5DC88 = -*p;
}

// [0x006DE6E0] sub_006DE6E0 (55 bytes)
extern "C" __declspec(naked) int __fastcall fn_006DE6E0(void* self, int edx_unused, void* target) {
    __asm {
        push ebx
        push esi
        mov esi, ecx
        push edi
        xor edi, edi
        mov eax, dword ptr [esi + 0x20]
        test eax, eax
        jle L_not_found
        mov ebx, dword ptr [esp + 0x10]
    L_loop:
        mov eax, dword ptr [esi]
        push edi
        mov ecx, esi
        call dword ptr [eax + 0x18]
        cmp eax, ebx
        je L_found
        mov eax, dword ptr [esi + 0x20]
        inc edi
        cmp edi, eax
        jl L_loop
    L_not_found:
        pop edi
        pop esi
        or eax, -1
        pop ebx
        ret 0x4
    L_found:
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 0x4
    }
}

// [0x006D7570] sub_006D7570 (57 bytes)
extern "C" int mem_00B5D788;
extern "C" int mem_00B5D78C;
extern "C" int mem_00B5D790;
extern "C" int mem_00B5D794;
extern "C" int mem_00B5D798;
extern "C" int mem_00B5D79C;

extern "C" __declspec(naked) void __fastcall fn_006D7570(void* self) {
    __asm {
        mov eax, dword ptr [mem_00925284]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [mem_00B5D788], ecx
        mov dword ptr [mem_00B5D78C], edx
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [mem_00B5D790], ecx
        mov dword ptr [mem_00B5D794], edx
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [mem_00B5D798], ecx
        mov dword ptr [mem_00B5D79C], edx
        ret
    }
}

// [0x006DD980] sub_006DD980 (57 bytes)
extern "C" int mem_00B5DC20;
extern "C" int mem_00B5DC24;
extern "C" int mem_00B5DC28;
extern "C" int mem_00B5DC2C;
extern "C" int mem_00B5DC30;
extern "C" int mem_00B5DC34;

extern "C" __declspec(naked) void __fastcall fn_006DD980(void* self) {
    __asm {
        mov eax, dword ptr [mem_00925284]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [mem_00B5DC20], ecx
        mov dword ptr [mem_00B5DC24], edx
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [mem_00B5DC28], ecx
        mov dword ptr [mem_00B5DC2C], edx
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [mem_00B5DC30], ecx
        mov dword ptr [mem_00B5DC34], edx
        ret
    }
}

// [0x006DBEF0] sub_006DBEF0 (57 bytes)
extern "C" int mem_00B5DAA0;
extern "C" int mem_00B5DAA4;
extern "C" int mem_00B5DAA8;
extern "C" int mem_00B5DAAC;
extern "C" int mem_00B5DAB0;
extern "C" int mem_00B5DAB4;
extern "C" __declspec(naked) void __fastcall fn_006DBEF0(void* self) {
    __asm {
        mov eax, dword ptr [mem_00925284]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [mem_00B5DAA0], ecx
        mov dword ptr [mem_00B5DAA4], edx
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [mem_00B5DAA8], ecx
        mov dword ptr [mem_00B5DAAC], edx
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [mem_00B5DAB0], ecx
        mov dword ptr [mem_00B5DAB4], edx
        ret
    }
}

// [0x006D6CB0] sub_006D6CB0 (58 bytes)
extern "C" void ext_006B9960();
extern "C" void ext_006D7380();

extern "C" __declspec(naked) void __fastcall fn_006D6CB0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        call ext_006D7380
        mov eax, 0x1010101
        lea ecx, [esi + 0xb0]
        mov dword ptr [esi + 0x14c], eax
        mov dword ptr [esi + 0x150], eax
        mov word ptr [esi + 0x154], ax
        mov byte ptr [esi + 0x156], al
        mov byte ptr [esi + 0x14f], 0x0
        call ext_006B9960
        pop esi
        ret
    }
}

// [0x006DADA0] sub_006DADA0 (57 bytes)
extern "C" void __stdcall ext_006DAE30(void* p5, void* p4, void* p3, void* p2, void* p1, void* p0, int a1);

// Reserves a 0x30-byte local block of six 8-byte slots, calls the 7-arg stdcall
// callee (arg, &slot0..&slot5 pushed so the callee's leftmost arg is &slot5), and
// returns slot0 as a 64-bit value in edx:eax (ret 4).
extern "C" __declspec(naked) __int64 __stdcall fn_006DADA0(int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        sub esp, 0x30
        __asm _emit 0x8D __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x00
        push eax
        lea eax, [esp + 0xc]
        push edx
        push eax
        lea edx, [esp + 0x1c]
        lea eax, [esp + 0x24]
        push edx
        push eax
        lea edx, [esp + 0x34]
        lea eax, [esp + 0x3c]
        push edx
        push eax
        call ext_006DAE30
        __asm _emit 0x8B __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x00
        mov edx, dword ptr [esp + 0x4]
        add esp, 0x30
        ret 0x4
    }
}

// [0x006D8D00] sub_006D8D00 (63 bytes)
extern "C" void __fastcall fn_006D8D00(void* self, int edx_unused, int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8) {
    char* p = (char*)self;
    *(int*)(p + 0x270) = a1;
    *(int*)(p + 0x274) = a2;
    *(int*)(p + 0x278) = a3;
    *(int*)(p + 0x27c) = a4;
    *(int*)(p + 0x280) = a5;
    *(int*)(p + 0x284) = a6;
}

// [0x006DE720] sub_006DE720 (66 bytes)
// Thiscall, one stack arg (ret 0x4). Walks children 0..count-1 via vtable slot 6;
// returns the first child for which ext_006DE3E0(child) == a1, else 0.
extern "C" void ext_006DE3E0();
extern "C" __declspec(naked) void* __fastcall fn_006DE720(void* self, int edx_unused, int a1) {
    __asm {
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        xor edi, edi
        mov eax, dword ptr [esi + 0x20]
        test eax, eax
        jle no_match
        mov ebp, dword ptr [esp + 0x14]
    loop_top:
        mov eax, dword ptr [esi]
        push edi
        mov ecx, esi
        call dword ptr [eax + 0x18]
        mov ebx, eax
        mov ecx, ebx
        call ext_006DE3E0
        cmp eax, ebp
        je found
        mov eax, dword ptr [esi + 0x20]
        inc edi
        cmp edi, eax
        jl loop_top
    no_match:
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 0x4
    found:
        pop edi
        pop esi
        mov eax, ebx
        pop ebp
        pop ebx
        ret 0x4
    }
}

// [0x006DCF80] sub_006DCF80 (68 bytes)
extern "C" __declspec(naked) void __fastcall fn_006DCF80(void* self, int edx_unused, void* arg0) {
    __asm {
        mov eax, dword ptr [ecx]
        push ebx
        push esi
        push edi
        call dword ptr [eax + 0xc]
        mov edi, eax
        xor esi, esi
        mov ebx, dword ptr [edi + 0xc0]
        test ebx, ebx
        jle done
        push ebp
        mov ebp, dword ptr [esp + 0x14]
    loop_top:
        mov ecx, dword ptr [edi + 0xd0]
        lea eax, [esp + 0x14]
        push eax
        mov edx, dword ptr [ecx + 4*esi]
        mov ecx, dword ptr [ebp]
        push ecx
        mov ecx, ebp
        mov dword ptr [esp + 0x1c], edx
        call ext_006D2170
        inc esi
        cmp esi, ebx
        jl loop_top
        pop ebp
    done:
        pop edi
        pop esi
        pop ebx
        ret 0x4
    }
}

// [0x006D2C30] sub_006D2C30 (73 bytes)
extern "C" void ext_006D2A90();
extern "C" void ext_006D2BD0();
extern "C" __declspec(naked) void* __fastcall fn_006D2C30(void* self, int edx_unused, void* other) {
    __asm {
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        call ext_006D2250
        mov ebx, dword ptr [esp + 0x14]
        xor esi, esi
        mov eax, dword ptr [ebx + 0x8]
        mov dword ptr [edi + 0x8], eax
        mov ebp, dword ptr [ebx]
        test ebp, ebp
        jle L_done
    L_loop:
        push esi
        mov ecx, ebx
        call ext_006D2A90
        sub esp, 0x20
        mov ecx, esp
        mov dword ptr [esp + 0x34], esp
        push eax
        call ext_006D2390
        mov ecx, edi
        call ext_006D2BD0
        inc esi
        cmp esi, ebp
        jl L_loop
    L_done:
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x4
    }
}

// [0x006DE770] sub_006DE770 (74 bytes)
// Scans self->[0x30] (array of object pointers, count at self->[0x20]) for arg1.
// Returns 1 if found; if not found and arg2's low byte is set, calls each
// element's vtable slot 7 with (arg1, arg2) and returns 1 on the first true.
// Otherwise returns 0. (ret 8)
extern "C" __declspec(naked) bool __fastcall fn_006DE770(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        xor esi, esi
        mov eax, dword ptr [edi + 0x20]
        test eax, eax
        jle L_none_006DE770
        mov ebp, dword ptr [esp + 0x14]
        mov ebx, dword ptr [esp + 0x18]
    L_loop_006DE770:
        mov eax, dword ptr [edi + 0x30]
        mov ecx, dword ptr [eax + 4*esi]
        cmp ecx, ebp
        je L_found_006DE770
        test bl, bl
        je L_next_006DE770
        mov edx, dword ptr [ecx]
        push ebx
        push ebp
        call dword ptr [edx + 0x1c]
        test al, al
        jne L_found_006DE770
    L_next_006DE770:
        mov eax, dword ptr [edi + 0x20]
        inc esi
        cmp esi, eax
        jl L_loop_006DE770
    L_none_006DE770:
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        ret 0x8
    L_found_006DE770:
        pop edi
        pop esi
        pop ebp
        mov al, 0x1
        pop ebx
        ret 0x8
    }
}

// [0x006D7600] sub_006D7600 (74 bytes)
extern "C" int mem_00B5D7B8;
extern "C" int mem_00B5D7BC;
extern "C" int mem_00B5D7C0;
extern "C" int mem_00B5D7C4;
extern "C" int mem_00B5D7C8;
extern "C" int mem_00B5D7CC;
extern "C" int mem_00B5D7D0;
extern "C" int mem_00B5D7D4;

extern "C" __declspec(naked) void __fastcall fn_006D7600(void* self) {
    __asm {
        mov eax, dword ptr [mem_00925284]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [mem_00B5D7B8], ecx
        mov dword ptr [mem_00B5D7BC], edx
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [mem_00B5D7C0], ecx
        mov dword ptr [mem_00B5D7C4], edx
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [mem_00B5D7C8], ecx
        mov dword ptr [mem_00B5D7CC], edx
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [mem_00B5D7D0], ecx
        mov dword ptr [mem_00B5D7D4], edx
        ret
    }
}

// [0x006DBF80] sub_006DBF80 (74 bytes)
extern "C" int mem_00B5DAD0;
extern "C" int mem_00B5DAD4;
extern "C" int mem_00B5DAD8;
extern "C" int mem_00B5DADC;
extern "C" int mem_00B5DAE0;
extern "C" int mem_00B5DAE4;
extern "C" int mem_00B5DAE8;
extern "C" int mem_00B5DAEC;

extern "C" __declspec(naked) void __fastcall fn_006DBF80(void* self) {
    __asm {
        mov eax, dword ptr [mem_00925284]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [mem_00B5DAD0], ecx
        mov dword ptr [mem_00B5DAD4], edx
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [mem_00B5DAD8], ecx
        mov dword ptr [mem_00B5DADC], edx
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [mem_00B5DAE0], ecx
        mov dword ptr [mem_00B5DAE4], edx
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [mem_00B5DAE8], ecx
        mov dword ptr [mem_00B5DAEC], edx
        ret
    }
}

// [0x006DE690] sub_006DE690 (78 bytes)
// Loops over self->[0x20] items: calls vtable[0x18](self, edi, a1), passes the result to
// sub_006DE3B0 and calls _stricmp via the pointer at 0x9251D0 with that result and a dword;
// returns the first matching index, or -1 if none (ret 4).
extern "C" __declspec(naked) int __fastcall fn_006DE690(void* self, int edx_unused, int a1) {
    __asm {
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        xor edi, edi
        mov eax, dword ptr [esi + 0x20]
        test eax, eax
        jle not_found
        mov ebx, dword ptr [esp + 0x14]
        mov ebp, dword ptr [mem_009251D0]
    loop_top:
        mov eax, dword ptr [esi]
        push ebx
        push edi
        mov ecx, esi
        call dword ptr [eax + 0x18]
        mov ecx, eax
        call ext_006DE3B0
        push eax
        call ebp
        add esp, 0x8
        test eax, eax
        je found
        mov eax, dword ptr [esi + 0x20]
        inc edi
        cmp edi, eax
        jl loop_top
    not_found:
        pop edi
        pop esi
        pop ebp
        or eax, -1
        pop ebx
        ret 0x4
    found:
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x4
    }
}

// [0x006D7B50] sub_006D7B50 (79 bytes)
// SEH-protected constructor-like thunk: installs an EH frame, sets vtable at *self to mem_00993990,
// calls ext_006D7BE0, then ext_0070CD30 with state -1, and unlinks the frame.
extern "C" void ext_006D7BE0();
extern "C" void ext_0070CD30();
extern "C" int mem_00993990;
extern "C" __declspec(naked) void __fastcall fn_006D7B50(void* self) {
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
        mov dword ptr [esi], offset mem_00993990
        mov dword ptr [esp + 0x10], 0
        call ext_006D7BE0
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

// [0x006DDA10] sub_006DDA10 (74 bytes)
extern "C" int mem_00B5DC50;
extern "C" int mem_00B5DC54;
extern "C" int mem_00B5DC58;
extern "C" int mem_00B5DC5C;
extern "C" int mem_00B5DC60;
extern "C" int mem_00B5DC64;
extern "C" int mem_00B5DC68;
extern "C" int mem_00B5DC6C;

extern "C" __declspec(naked) void __fastcall fn_006DDA10(void* self) {
    __asm {
        mov eax, dword ptr [mem_00925284]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [mem_00B5DC50], ecx
        mov dword ptr [mem_00B5DC54], edx
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [mem_00B5DC58], ecx
        mov dword ptr [mem_00B5DC5C], edx
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [mem_00B5DC60], ecx
        mov dword ptr [mem_00B5DC64], edx
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [mem_00B5DC68], ecx
        mov dword ptr [mem_00B5DC6C], edx
        ret
    }
}

// [0x006D8E70] sub_006D8E70 (84 bytes)
extern "C" int mem_008BD4A8;
extern "C" int mem_00993BB8;
extern "C" void ext_0077FA20();

extern "C" __declspec(naked) void __fastcall fn_006D8E70(void* self) {
    __asm {
        push -0x1
        push offset mem_008BD4A8
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        mov dword ptr [esi], offset mem_00993BB8
        mov ecx, dword ptr [esi + 0xc]
        push 0x0
        mov dword ptr [esp + 0x14], 0x0
        mov eax, dword ptr [ecx]
        call dword ptr [eax + 0x4]
        mov ecx, esi
        mov dword ptr [esp + 0x10], 0xffffffff
        call ext_0077FA20
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret
    }
}

// [0x006D8A40] sub_006D8A40 (84 bytes)
extern "C" int mem_008C08E8;
extern "C" __declspec(naked) int __fastcall fn_006D8A40(void* self, int edx_unused, int idx, int s0, int s1, int s2, int s3) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -0x1
        push offset mem_008C08E8
        push eax
        mov dword ptr fs:[0x0], esp
        push esi
        mov edx, dword ptr [esp + 0x14]
        lea eax, [esp + 0x18]
        push eax
        push edx
        mov dword ptr [esp + 0x14], 0x0
        call ext_006D2170
        lea ecx, [esp + 0x18]
        mov esi, eax
        mov dword ptr [esp + 0xc], 0xffffffff
        call ext_006D80A0
        mov ecx, dword ptr [esp + 0x4]
        mov eax, esi
        mov dword ptr fs:[0x0], ecx
        pop esi
        add esp, 0xc
        ret 0x14
    }
}

// [0x006DE5F0] sub_006DE5F0 (95 bytes)
extern "C" __declspec(naked) void __fastcall fn_006DE5F0(void* self, int edx_unused, void* item) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        test edi, edi
        mov esi, ecx
        je L_after_vcall
        call ext_006DEEA0
        test eax, eax
        jne L_after_vcall
        mov eax, dword ptr [edi]
        push 0x0
        mov ecx, edi
        call dword ptr [eax + 0x2c]
    L_after_vcall:
        mov edx, dword ptr [esi + 0x20]
        lea ecx, [esi + 0x20]
        xor eax, eax
        test edx, edx
        jle L_tail_call
        mov esi, dword ptr [ecx + 0x10]
    L_loop:
        cmp dword ptr [esi], edi
        je L_found
        inc eax
        add esi, 0x4
        cmp eax, edx
        jl L_loop
        push 0x0
        mov ecx, edi
        call ext_006DE130
        pop edi
        pop esi
        ret 0x4
    L_found:
        test eax, eax
        jl L_tail_call
        push eax
        call ext_006D2200
    L_tail_call:
        push 0x0
        mov ecx, edi
        call ext_006DE130
        pop edi
        pop esi
        ret 0x4
    }
}

// [0x006D7880] sub_006D7880 (98 bytes)
// SEH-guarded constructor-style init: installs an EH frame, calls ext_006FD3A0(arg),
// calls ext_006D2130 on self+0x28 (0x100 x 0x20), sets self+0x28+0x14 and vtable, restores fs:[0], ret 4.
extern "C" __declspec(naked) void __fastcall fn_006D7880(void* self, int edx_unused, int a1) {
    __asm {
        push -1
        push 0x008b9228
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        mov eax, dword ptr [esp + 0x14]
        push esi
        push edi
        mov esi, ecx
        push eax
        mov dword ptr [esp + 0xc], esi
        call ext_006FD3A0
        lea edi, [esi + 0x28]
        push 0x20
        push 0x100
        mov ecx, edi
        mov dword ptr [esp + 0x1c], 0x0
        call ext_006D2130
        lea ecx, [edi + 0x10]
        mov eax, esi
        mov dword ptr [edi + 0x14], ecx
        mov ecx, dword ptr [esp + 0xc]
        mov dword ptr [esi], 0x0099396c
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 0x4
    }
}

// [0x006D4B30] sub_006D4B30 (109 bytes)
extern "C" void ext_006D2200();
extern "C" void ext_006E7440();
extern "C" __declspec(naked) bool __fastcall fn_006D4B30(void* self, int edx_unused, int a1) {
    __asm {
        push ebx
        mov ebx, ecx
        xor eax, eax
        mov edx, dword ptr [ebx + 0x4c]
        lea ecx, [ebx + 0x4c]
        push esi
        push edi
        test edx, edx
        jle not_found_b
        mov esi, dword ptr [ecx + 0x10]
        mov edi, dword ptr [esp + 0x10]
    loop_top:
        cmp dword ptr [esi], edi
        je found_at
        inc eax
        add esi, 0x4
        cmp eax, edx
        jl loop_top
        push 0x0
        lea ecx, [ebx + 0x1c4]
        call ext_006E7440
        pop edi
        pop esi
        xor al, al
        pop ebx
        ret 0x4
    found_at:
        cmp eax, -0x1
        jne have_index
    not_found_b:
        push 0x0
        lea ecx, [ebx + 0x1c4]
        call ext_006E7440
        pop edi
        pop esi
        xor al, al
        pop ebx
        ret 0x4
    have_index:
        push eax
        call ext_006D2200
        test edi, edi
        je done
        mov eax, dword ptr [edi]
        push 0x1
        mov ecx, edi
        call dword ptr [eax]
    done:
        pop edi
        pop esi
        mov al, 0x1
        pop ebx
        ret 0x4
    }
}

// [0x006D4AC0] sub_006D4AC0 (110 bytes)
extern "C" void ext_006D2200();
extern "C" void ext_006E7440();

extern "C" __declspec(naked) void __fastcall fn_006D4AC0(void* self, int edx_unused, int a1) {
    __asm {
        push ebx
        mov ebx, ecx
        xor eax, eax
        mov edx, dword ptr [ebx + 0x34]
        lea ecx, [ebx + 0x34]
        push esi
        push edi
        test edx, edx
        jle not_found_b
        mov esi, dword ptr [ecx + 0x10]
        mov edi, dword ptr [esp + 0x10]
    loop_top:
        cmp dword ptr [esi], edi
        je found_at
        inc eax
        add esi, 0x4
        cmp eax, edx
        jl loop_top
        push 0
        lea ecx, [ebx + 0x1c4]
        call ext_006E7440
        pop edi
        pop esi
        xor al, al
        pop ebx
        ret 0x4
    found_at:
        cmp eax, -1
        jne have_index
    not_found_b:
        push 0
        lea ecx, [ebx + 0x1c4]
        call ext_006E7440
        pop edi
        pop esi
        xor al, al
        pop ebx
        ret 0x4
    have_index:
        push eax
        call ext_006D2200
        test edi, edi
        je done
        mov eax, dword ptr [edi]
        push 1
        mov ecx, edi
        call dword ptr [eax + 0x4]
    done:
        pop edi
        pop esi
        mov al, 1
        pop ebx
        ret 0x4
    }
}

// [0x006D4C20] sub_006D4C20 (110 bytes)
extern "C" void ext_006D2200();
extern "C" void ext_006E7440();

extern "C" __declspec(naked) void __fastcall fn_006D4C20(void* self, int edx_unused, int a1) {
    __asm {
        push ebx
        mov ebx, ecx
        xor eax, eax
        mov edx, dword ptr [ebx + 0x7c]
        lea ecx, [ebx + 0x7c]
        push esi
        push edi
        test edx, edx
        jle not_found_b
        mov esi, dword ptr [ecx + 0x10]
        mov edi, dword ptr [esp + 0x10]
    loop_top:
        cmp dword ptr [esi], edi
        je found_at
        inc eax
        add esi, 0x4
        cmp eax, edx
        jl loop_top
        push 0
        lea ecx, [ebx + 0x1c4]
        call ext_006E7440
        pop edi
        pop esi
        xor al, al
        pop ebx
        ret 0x4
    found_at:
        cmp eax, -1
        jne have_index
    not_found_b:
        push 0
        lea ecx, [ebx + 0x1c4]
        call ext_006E7440
        pop edi
        pop esi
        xor al, al
        pop ebx
        ret 0x4
    have_index:
        push eax
        call ext_006D2200
        test edi, edi
        je done
        mov eax, dword ptr [edi]
        push 1
        mov ecx, edi
        call dword ptr [eax + 0x4]
    done:
        pop edi
        pop esi
        mov al, 1
        pop ebx
        ret 0x4
    }
}

// [0x006D4D90] sub_006D4D90 (116 bytes)
extern "C" void ext_006D2200();
extern "C" void ext_006E7440();

extern "C" __declspec(naked) bool __fastcall fn_006D4D90(void* self, int edx_unused, int a1) {
    __asm {
        push ebx
        mov ebx, ecx
        xor eax, eax
        mov edx, dword ptr [ebx + 0xc4]
        lea ecx, [ebx + 0xc4]
        push esi
        push edi
        test edx, edx
        jle not_found_b
        mov esi, dword ptr [ecx + 0x10]
        mov edi, dword ptr [esp + 0x10]
    loop_top:
        cmp dword ptr [esi], edi
        je found_at
        inc eax
        add esi, 0x4
        cmp eax, edx
        jl loop_top
        push 0x0
        lea ecx, [ebx + 0x1c4]
        call ext_006E7440
        pop edi
        pop esi
        xor al, al
        pop ebx
        ret 0x4
    found_at:
        cmp eax, -0x1
        jne have_index
    not_found_b:
        push 0x0
        lea ecx, [ebx + 0x1c4]
        call ext_006E7440
        pop edi
        pop esi
        xor al, al
        pop ebx
        ret 0x4
    have_index:
        push eax
        call ext_006D2200
        test edi, edi
        je done_true
        mov eax, dword ptr [edi]
        push 0x1
        mov ecx, edi
        call dword ptr [eax + 0x14]
    done_true:
        pop edi
        pop esi
        mov al, 0x1
        pop ebx
        ret 0x4
    }
}

// [0x006D4E90] sub_006D4E90 (116 bytes)
extern "C" void ext_006E7440();
extern "C" __declspec(naked) void __fastcall fn_006D4E90(void* self, int edx_unused, int a1) {
    __asm {
        push ebx
        mov ebx, ecx
        xor eax, eax
        mov edx, dword ptr [ebx + 0x124]
        lea ecx, [ebx + 0x124]
        push esi
        push edi
        test edx, edx
        jle not_found_b
        mov esi, dword ptr [ecx + 0x10]
        mov edi, dword ptr [esp + 0x10]
    loop_top:
        cmp dword ptr [esi], edi
        je found_at
        inc eax
        add esi, 0x4
        cmp eax, edx
        jl loop_top
        push 0
        lea ecx, [ebx + 0x1c4]
        call ext_006E7440
        pop edi
        pop esi
        xor al, al
        pop ebx
        ret 0x4
    found_at:
        cmp eax, -1
        jne have_index
    not_found_b:
        push 0
        lea ecx, [ebx + 0x1c4]
        call ext_006E7440
        pop edi
        pop esi
        xor al, al
        pop ebx
        ret 0x4
    have_index:
        push eax
        call ext_006D2200
        test edi, edi
        je done
        mov eax, dword ptr [edi]
        push 1
        mov ecx, edi
        call dword ptr [eax + 0x14]
    done:
        pop edi
        pop esi
        mov al, 1
        pop ebx
        ret 0x4
    }
}

// [0x006D5190] sub_006D5190 (116 bytes)
extern "C" void ext_006D2200();
extern "C" void ext_006E7440();

extern "C" __declspec(naked) bool __fastcall fn_006D5190(void* self, int edx_unused, int a1) {
    __asm {
        push ebx
        mov ebx, ecx
        xor eax, eax
        mov edx, dword ptr [ebx + 0x19c]
        lea ecx, [ebx + 0x19c]
        push esi
        push edi
        test edx, edx
        jle nf_b_6D5190
        mov esi, dword ptr [ecx + 0x10]
        mov edi, dword ptr [esp + 0x10]
    loop_top_6D5190:
        cmp dword ptr [esi], edi
        je found_6D5190
        inc eax
        add esi, 0x4
        cmp eax, edx
        jl loop_top_6D5190
        push 0
        lea ecx, [ebx + 0x1c4]
        call ext_006E7440
        pop edi
        pop esi
        xor al, al
        pop ebx
        ret 0x4
    found_6D5190:
        cmp eax, -1
        jne have_index_6D5190
    nf_b_6D5190:
        push 0
        lea ecx, [ebx + 0x1c4]
        call ext_006E7440
        pop edi
        pop esi
        xor al, al
        pop ebx
        ret 0x4
    have_index_6D5190:
        push eax
        call ext_006D2200
        test edi, edi
        je done_6D5190
        mov eax, dword ptr [edi]
        push 1
        mov ecx, edi
        call dword ptr [eax + 0xc]
    done_6D5190:
        pop edi
        pop esi
        mov al, 1
        pop ebx
        ret 0x4
    }
}

// [0x006D4F10] sub_006D4F10 (116 bytes)
extern "C" void ext_006D2200();
extern "C" void ext_006E7440();

extern "C" __declspec(naked) bool __fastcall fn_006D4F10(void* self, int edx_unused, int a1) {
    __asm {
        push ebx
        mov ebx, ecx
        xor eax, eax
        mov edx, dword ptr [ebx + 0x13c]
        lea ecx, [ebx + 0x13c]
        push esi
        push edi
        test edx, edx
        jle not_found_b
        mov esi, dword ptr [ecx + 0x10]
        mov edi, dword ptr [esp + 0x10]
    loop_top:
        cmp dword ptr [esi], edi
        je found_at
        inc eax
        add esi, 0x4
        cmp eax, edx
        jl loop_top
        push 0x0
        lea ecx, [ebx + 0x1c4]
        call ext_006E7440
        pop edi
        pop esi
        xor al, al
        pop ebx
        ret 0x4
    found_at:
        cmp eax, -0x1
        jne have_index
    not_found_b:
        push 0x0
        lea ecx, [ebx + 0x1c4]
        call ext_006E7440
        pop edi
        pop esi
        xor al, al
        pop ebx
        ret 0x4
    have_index:
        push eax
        call ext_006D2200
        test edi, edi
        je done_true
        mov eax, dword ptr [edi]
        push 0x1
        mov ecx, edi
        call dword ptr [eax + 0x14]
    done_true:
        pop edi
        pop esi
        mov al, 0x1
        pop ebx
        ret 0x4
    }
}

// [0x006D4BA0] sub_006D4BA0 (117 bytes)
extern "C" void ext_006D2200();
extern "C" void ext_006E7440();

extern "C" __declspec(naked) bool __fastcall fn_006D4BA0(void* self, int edx_dummy, void* arg0) {
    __asm {
        push ebx
        mov ebx, ecx
        xor eax, eax
        mov edx, dword ptr [ebx + 0x64]
        lea ecx, [ebx + 0x64]
        push esi
        push edi
        test edx, edx
        jle L_fail
        mov edi, dword ptr [ecx + 0x10]
        mov esi, dword ptr [esp + 0x10]
    L_loop:
        cmp dword ptr [edi], esi
        je L_check
        inc eax
        add edi, 0x4
        cmp eax, edx
        jl L_loop
        push 0x0
        lea ecx, [ebx + 0x1c4]
        call ext_006E7440
        pop edi
        pop esi
        xor al, al
        pop ebx
        ret 0x4
    L_check:
        cmp eax, -0x1
        jne L_found
    L_fail:
        push 0x0
        lea ecx, [ebx + 0x1c4]
        call ext_006E7440
        pop edi
        pop esi
        xor al, al
        pop ebx
        ret 0x4
    L_found:
        push eax
        call ext_006D2200
        mov eax, dword ptr [esi]
        mov ecx, esi
        call dword ptr [eax + 0x4]
        test esi, esi
        je L_ret_true
        mov edx, dword ptr [esi]
        push 0x1
        mov ecx, esi
        call dword ptr [edx + 0x14]
    L_ret_true:
        pop edi
        pop esi
        mov al, 0x1
        pop ebx
        ret 0x4
    }
}

// [0x006D4D10] sub_006D4D10 (123 bytes)
extern "C" void ext_006D2200();
extern "C" void ext_006E7440();

// [0x006D4D10] sub_006D4D10 (123 bytes)
extern "C" __declspec(naked) bool __fastcall fn_006D4D10(void* self, int edx_dummy, void* arg0) {
    __asm {
        push ebx
        mov ebx, ecx
        xor eax, eax
        mov edx, dword ptr [ebx + 0xac]
        lea ecx, [ebx + 0xac]
        push esi
        push edi
        test edx, edx
        jle L_fail
        mov edi, dword ptr [ecx + 0x10]
        mov esi, dword ptr [esp + 0x10]
    L_loop:
        cmp dword ptr [edi], esi
        je L_check
        inc eax
        add edi, 0x4
        cmp eax, edx
        jl L_loop
        push 0x0
        lea ecx, [ebx + 0x1c4]
        call ext_006E7440
        pop edi
        pop esi
        xor al, al
        pop ebx
        ret 0x4
    L_check:
        cmp eax, -0x1
        jne L_found
    L_fail:
        push 0x0
        lea ecx, [ebx + 0x1c4]
        call ext_006E7440
        pop edi
        pop esi
        xor al, al
        pop ebx
        ret 0x4
    L_found:
        push eax
        call ext_006D2200
        mov eax, dword ptr [esi]
        mov ecx, esi
        call dword ptr [eax + 0x4]
        test esi, esi
        je L_end
        mov edx, dword ptr [esi]
        push 0x1
        mov ecx, esi
        call dword ptr [edx + 0x14]
    L_end:
        pop edi
        pop esi
        mov al, 0x1
        pop ebx
        ret 0x4
    }
}

// [0x006D4C90] sub_006D4C90 (123 bytes)
extern "C" void ext_006D2200();
extern "C" void ext_006E7440();

extern "C" __declspec(naked) bool __fastcall fn_006D4C90(void* self, int edx_dummy, void* arg0) {
    __asm {
        push ebx
        mov ebx, ecx
        xor eax, eax
        mov edx, dword ptr [ebx + 0x94]
        lea ecx, [ebx + 0x94]
        push esi
        push edi
        test edx, edx
        jle L_fail
        mov edi, dword ptr [ecx + 0x10]
        mov esi, dword ptr [esp + 0x10]
    L_loop:
        cmp dword ptr [edi], esi
        je L_check
        inc eax
        add edi, 0x4
        cmp eax, edx
        jl L_loop
        push 0x0
        lea ecx, [ebx + 0x1c4]
        call ext_006E7440
        pop edi
        pop esi
        xor al, al
        pop ebx
        ret 0x4
    L_check:
        cmp eax, -0x1
        jne L_found
    L_fail:
        push 0x0
        lea ecx, [ebx + 0x1c4]
        call ext_006E7440
        pop edi
        pop esi
        xor al, al
        pop ebx
        ret 0x4
    L_found:
        push eax
        call ext_006D2200
        mov eax, dword ptr [esi]
        mov ecx, esi
        call dword ptr [eax + 0x4]
        test esi, esi
        je L_skip
        mov edx, dword ptr [esi]
        push 0x1
        mov ecx, esi
        call dword ptr [edx + 0x14]
    L_skip:
        pop edi
        pop esi
        mov al, 0x1
        pop ebx
        ret 0x4
    }
}

// [0x006D59C0] sub_006D59C0 (122 bytes)
extern "C" void ext_006B9D10();
extern "C" void ext_006E73B0();
// SEH-framed ctor-like body: sets up an EH frame (state -1 / handler 0x8b9056),
// calls ext_006E73B0 with this+4, stores arg1 into [this+0xa8], then tears down.
extern "C" __declspec(naked) void __fastcall fn_006D59C0(void* self, int edx_unused, int a1) {
    __asm {
        push -1
        push 0x8b9056
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        push 0xb
        push 0xaa8e88
        lea ecx, [esi + 0x4]
        mov dword ptr [esp + 0xc], esi
        call ext_006E73B0
        lea ecx, [esi + 0x5c]
        mov dword ptr [esp + 0x10], 0
        call ext_006B9D10
        mov eax, dword ptr [esp + 0x18]
        lea ecx, [esi + 0xb0]
        mov byte ptr [esp + 0x10], 1
        mov dword ptr [esi + 0xa8], eax
        mov dword ptr [esi + 0xac], 0
        call ext_006B9D10
        mov ecx, dword ptr [esp + 0x8]
        mov dword ptr [esi], 0x99393c
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 0x4
    }
}

// [0x006D4F90] sub_006D4F90 (123 bytes)
extern "C" void ext_006E7440();
extern "C" void ext_0072B250();
extern "C" void __cdecl ext_006A5C5C(void* ptr);

extern "C" __declspec(naked) bool __fastcall fn_006D4F90(void* self, int edx_unused, int a1) {
    __asm {
        push ebx
        mov ebx, ecx
        xor eax, eax
        mov edx, dword ptr [ebx + 0xf4]
        lea ecx, [ebx + 0xf4]
        push esi
        push edi
        test edx, edx
        jle not_found_b
        mov esi, dword ptr [ecx + 0x10]
        mov edi, dword ptr [esp + 0x10]
    loop_top:
        cmp dword ptr [esi], edi
        je found_at
        inc eax
        add esi, 0x4
        cmp eax, edx
        jl loop_top
        push 0
        lea ecx, [ebx + 0x1c4]
        call ext_006E7440
        pop edi
        pop esi
        xor al, al
        pop ebx
        ret 0x4
    found_at:
        cmp eax, -1
        jne have_index
    not_found_b:
        push 0
        lea ecx, [ebx + 0x1c4]
        call ext_006E7440
        pop edi
        pop esi
        xor al, al
        pop ebx
        ret 0x4
    have_index:
        push eax
        call ext_006D2200
        test edi, edi
        je done
        mov ecx, edi
        call ext_0072B250
        push edi
        call ext_006A5C5C
        add esp, 0x4
    done:
        pop edi
        pop esi
        mov al, 0x1
        pop ebx
        ret 0x4
    }
}

// [0x006D5640] sub_006D5640 (125 bytes)
// Scans self->array (count at +0xc4, Ptr array at +0xd4) for an entry whose name (ext_006BADB0)
// strcmp-equals s; returns the matching entry, or calls ext_006E7440 on self+0x1c4 and returns 0.
extern "C" void ext_006BADB0();
extern "C" void ext_006E7440();
extern "C" __declspec(naked) void* __fastcall fn_006D5640(void* self, int edx_unused, const char* s) {
    __asm {
        push ebx
        push ebp
        mov ebp, ecx
        xor ebx, ebx
        push esi
        push edi
        mov eax, dword ptr [ebp + 0xc4]
        test eax, eax
        jle L_notfound
    L_loop:
        mov eax, dword ptr [ebp + 0xd4]
        mov esi, dword ptr [esp + 0x14]
        mov edi, dword ptr [eax + 4*ebx]
        mov ecx, edi
        call ext_006BADB0
    L_cmp:
        mov dl, byte ptr [eax]
        mov cl, dl
        cmp dl, byte ptr [esi]
        jne L_diff
        test cl, cl
        je L_equal
        mov dl, byte ptr [eax + 0x1]
        mov cl, dl
        cmp dl, byte ptr [esi + 0x1]
        jne L_diff
        add eax, 0x2
        add esi, 0x2
        test cl, cl
        jne L_cmp
    L_equal:
        xor eax, eax
        jmp L_cmpdone
    L_diff:
        sbb eax, eax
        sbb eax, -1
    L_cmpdone:
        test eax, eax
        je L_found
        mov eax, dword ptr [ebp + 0xc4]
        inc ebx
        cmp ebx, eax
        jl L_loop
    L_notfound:
        push 0x0
        lea ecx, [ebp + 0x1c4]
        call ext_006E7440
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 0x4
    L_found:
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x4
    }
}

// [0x006D4E10] sub_006D4E10 (123 bytes)
extern "C" void ext_006E7440();
extern "C" void ext_006D2200();
extern "C" void ext_006E67E0();
extern "C" void __cdecl ext_006A5C5C(void* ptr);

extern "C" __declspec(naked) bool __fastcall fn_006D4E10(void* self, int edx_unused, int a1) {
    __asm {
        push ebx
        mov ebx, ecx
        xor eax, eax
        mov edx, dword ptr [ebx + 0xdc]
        lea ecx, [ebx + 0xdc]
        push esi
        push edi
        test edx, edx
        jle not_found_b
        mov esi, dword ptr [ecx + 0x10]
        mov edi, dword ptr [esp + 0x10]
    loop_top:
        cmp dword ptr [esi], edi
        je found_at
        inc eax
        add esi, 0x4
        cmp eax, edx
        jl loop_top
        push 0x0
        lea ecx, [ebx + 0x1c4]
        call ext_006E7440
        pop edi
        pop esi
        xor al, al
        pop ebx
        ret 0x4
    found_at:
        cmp eax, -0x1
        jne have_index
    not_found_b:
        push 0x0
        lea ecx, [ebx + 0x1c4]
        call ext_006E7440
        pop edi
        pop esi
        xor al, al
        pop ebx
        ret 0x4
    have_index:
        push eax
        call ext_006D2200
        test edi, edi
        je done
        mov ecx, edi
        call ext_006E67E0
        push edi
        call ext_006A5C5C
        add esp, 0x4
    done:
        pop edi
        pop esi
        mov al, 0x1
        pop ebx
        ret 0x4
    }
}

// [0x006D5010] sub_006D5010 (123 bytes)
extern "C" void __cdecl ext_006A5C5C(void* ptr);
extern "C" void ext_006D2200();
extern "C" void ext_006E7440();
extern "C" void ext_0072B010();
extern "C" __declspec(naked) bool __fastcall fn_006D5010(void* self, int edx_unused, int a1) {
    __asm {
        push ebx
        mov ebx, ecx
        xor eax, eax
        mov edx, dword ptr [ebx + 0x10c]
        lea ecx, [ebx + 0x10c]
        push esi
        push edi
        test edx, edx
        jle not_found_b
        mov esi, dword ptr [ecx + 0x10]
        mov edi, dword ptr [esp + 0x10]
    loop_top:
        cmp dword ptr [esi], edi
        je found_at
        inc eax
        add esi, 0x4
        cmp eax, edx
        jl loop_top
        push 0x0
        lea ecx, [ebx + 0x1c4]
        call ext_006E7440
        pop edi
        pop esi
        xor al, al
        pop ebx
        ret 0x4
    found_at:
        cmp eax, -0x1
        jne have_index
    not_found_b:
        push 0x0
        lea ecx, [ebx + 0x1c4]
        call ext_006E7440
        pop edi
        pop esi
        xor al, al
        pop ebx
        ret 0x4
    have_index:
        push eax
        call ext_006D2200
        test edi, edi
        je done
        mov ecx, edi
        call ext_0072B010
        push edi
        call ext_006A5C5C
        add esp, 0x4
    done:
        pop edi
        pop esi
        mov al, 0x1
        pop ebx
        ret 0x4
    }
}

// [0x006D8DD0] sub_006D8DD0 (125 bytes)
extern "C" __declspec(naked) void* __fastcall fn_006D8DD0(void* self, int edx_unused, void* arg) {
    __asm {
        push -0x1
        push 0x8bcca3
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        mov eax, dword ptr [esp + 0x14]
        push esi
        mov esi, ecx
        push eax
        mov dword ptr [esp + 0x8], esi
        call ext_0077F9E0
        push 0x290
        mov dword ptr [esp + 0x14], 0x0
        mov dword ptr [esi], 0x993bb8
        call ext_006A5C62
        add esp, 0x4
        mov dword ptr [esp + 0x18], eax
        test eax, eax
        mov byte ptr [esp + 0x10], 0x1
        je L_null
        mov ecx, eax
        call ext_006D8B10
        jmp L_done_alloc
    L_null:
        xor eax, eax
    L_done_alloc:
        mov ecx, esi
        mov byte ptr [esp + 0x10], 0x0
        mov dword ptr [esi + 0xc], eax
        call ext_006D8EE0
        mov ecx, dword ptr [esp + 0x8]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret 0x4
    }
}

// [0x006D6B70] sub_006D6B70 (139 bytes)
extern "C" void ext_006A5C62();
extern "C" void ext_006B9D10();
extern "C" void ext_006D59C0();
extern "C" void ext_006D6CB0();

extern "C" __declspec(naked) void __fastcall fn_006D6B70(void* self) {
    __asm {
        push -1
        push 0x8b9186
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        mov eax, dword ptr [esp + 0x14]
        push esi
        mov esi, ecx
        push eax
        mov dword ptr [esp + 0x8], esi
        call ext_006D59C0
        push 0x8
        mov dword ptr [esp + 0x14], 0x0
        call ext_006A5C62
        add esp, 0x4
        test eax, eax
        je short L_null
        mov dword ptr [eax + 0x4], 0x0
        jmp short L_join
L_null:
        xor eax, eax
L_join:
        lea ecx, [esi + 0x100]
        mov dword ptr [esi + 0xfc], eax
        call ext_006B9D10
        mov ecx, dword ptr [esi + 0xfc]
        mov dword ptr [esi], 0x99395c
        mov byte ptr [esp + 0x10], 0x1
        mov dword ptr [ecx], 0x0
        mov ecx, esi
        call ext_006D6CB0
        mov ecx, dword ptr [esp + 0x8]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 0x4
    }
}

// [0x006DC200] sub_006DC200 (153 bytes)
extern "C" void ext_006BAB80();
extern "C" void ext_006D2130();
extern "C" void ext_008B9406();
extern "C" int mem_00993BE8;
extern "C" __declspec(naked) void __fastcall fn_006DC200(void* self, int edx_unused, int a, int b, int c) {
    __asm {
        push -1
        push offset ext_008B9406
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        mov eax, dword ptr [esp + 0x18]
        push esi
        mov esi, ecx
        push edi
        mov ecx, dword ptr [esp + 0x1c]
        push eax
        push ecx
        mov ecx, esi
        mov dword ptr [esp + 0x10], esi
        call ext_006BAB80
        lea edi, [esi + 0xb8]
        push 4
        push 0x10
        mov ecx, edi
        mov dword ptr [esp + 0x1c], 0
        call ext_006D2130
        lea edx, [edi + 0x10]
        mov dword ptr [edi + 0x14], edx
        lea edi, [esi + 0xd0]
        push 4
        push 0x10
        mov ecx, edi
        mov byte ptr [esp + 0x1c], 1
        call ext_006D2130
        mov ecx, dword ptr [esp + 0x24]
        lea eax, [edi + 0x10]
        mov dword ptr [edi + 0x14], eax
        mov dword ptr [esi + 0xec], ecx
        mov ecx, dword ptr [esp + 0xc]
        mov dword ptr [esi + 0xe8], 0xffffffff
        mov dword ptr [esi], offset mem_00993BE8
        mov eax, esi
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 0xc
    }
}

// [0x006DAB00] sub_006DAB00 (154 bytes)
extern "C" void ext_006A7310();
extern "C" void ext_006DA370();
extern "C" __declspec(naked) void __fastcall fn_006DAB00(void* self, int edx_unused) {
    __asm {
        mov eax, dword ptr [esp + 0x18]
        push esi
        test eax, eax
        mov esi, ecx
        je L71
        push ebx
        push ebp
        push edi
        mov edi, dword ptr [esp + 0x2c]
        push edi
        push 0
        push eax
        push 0
        push 0
        push 0
        call ext_006DA370
        mov eax, dword ptr [esi]
        mov ecx, dword ptr [esi + 4]
        add eax, 0x63
        push 0
        adc ecx, 0
        push 0x64
        push ecx
        push eax
        call ext_006A7310
        mov ecx, dword ptr [esp + 0x1c]
        mov ebp, edx
        mov edx, dword ptr [esp + 0x24]
        mov ebx, eax
        mov eax, dword ptr [esp + 0x20]
        push edi
        push edx
        mov edx, dword ptr [esp + 0x20]
        push eax
        mov eax, dword ptr [esp + 0x20]
        push ecx
        push edx
        push eax
        mov ecx, esi
        call ext_006DA370
        mov ecx, dword ptr [esi]
        pop edi
        add ecx, ebx
        mov dword ptr [esi], ecx
        mov eax, dword ptr [esi + 4]
        adc eax, ebp
        pop ebp
        mov dword ptr [esi + 4], eax
        pop ebx
        pop esi
        ret 0x1c
    L71:
        mov ecx, dword ptr [esp + 0x20]
        mov edx, dword ptr [esp + 0x18]
        mov eax, dword ptr [esp + 0x14]
        push ecx
        mov ecx, dword ptr [esp + 0x14]
        push edx
        mov edx, dword ptr [esp + 0x14]
        push eax
        mov eax, dword ptr [esp + 0x14]
        push ecx
        push edx
        push eax
        mov ecx, esi
        call ext_006DA370
        pop esi
        ret 0x1c
    }
}

// [0x006D93B0] sub_006D93B0 (155 bytes)
extern "C" void ext_006BC380();
extern "C" void ext_0071E680();
extern "C" __declspec(naked) void __fastcall fn_006D93B0(void* self, int edx_unused, void* a1, int a2, int a3, int a4) {
    __asm {
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr [esp + 0x10]
        push 0x0
        mov eax, dword ptr [esi]
        lea ebx, [esi + 0x80]
        push ebx
        push edi
        push esi
        push 0x14
        push 0x0
        call dword ptr [eax + 0x38]
        mov eax, dword ptr [esi + 0x54]
        test eax, eax
        je L_006D9412
        mov ecx, dword ptr [edi]
        sub esp, 0x20
        mov eax, esp
        mov dword ptr [eax], ecx
        mov edx, dword ptr [edi + 0x4]
        mov dword ptr [eax + 0x4], edx
        mov ecx, dword ptr [edi + 0x8]
        mov dword ptr [eax + 0x8], ecx
        mov edx, dword ptr [edi + 0xc]
        mov dword ptr [eax + 0xc], edx
        mov ecx, dword ptr [edi + 0x10]
        mov dword ptr [eax + 0x10], ecx
        mov edx, dword ptr [edi + 0x14]
        mov ecx, esi
        mov dword ptr [eax + 0x14], edx
        call ext_0071E680
        mov ecx, esi
        mov ebx, eax
        call ext_006BC380
        mov ecx, eax
        call dword ptr [ebx + 0x14]
        jmp L_006D9434
    L_006D9412:
        mov eax, dword ptr [edi]
        mov dword ptr [ebx], eax
        mov ecx, dword ptr [edi + 0x4]
        mov dword ptr [ebx + 0x4], ecx
        mov edx, dword ptr [edi + 0x8]
        mov dword ptr [ebx + 0x8], edx
        mov eax, dword ptr [edi + 0xc]
        mov dword ptr [ebx + 0xc], eax
        mov ecx, dword ptr [edi + 0x10]
        mov dword ptr [ebx + 0x10], ecx
        mov edx, dword ptr [edi + 0x14]
        mov dword ptr [ebx + 0x14], edx
    L_006D9434:
        mov eax, dword ptr [esi]
        push 0x0
        push 0x0
        push edi
        push esi
        push 0x15
        push 0x0
        mov ecx, esi
        call dword ptr [eax + 0x38]
        pop edi
        pop esi
        pop ebx
        ret 0x10
    }
}

// [0x006D77D0] sub_006D77D0 (166 bytes)
extern "C" int mem_00925284;
extern "C" int mem_00B5D878;
extern "C" int mem_00B5D880;
extern "C" int mem_00B5D888;
extern "C" int mem_00B5D890;
extern "C" int mem_00B5D898;
extern "C" int mem_00B5D8A0;
extern "C" int mem_00B5D8A8;
extern "C" int mem_00B5D8B0;
extern "C" int mem_00B5D8B8;
extern "C" int mem_00B5D8C0;
extern "C" int mem_00B5D8C8;
extern "C" int mem_00B5D8D0;
extern "C" int mem_00B5D8D8;
extern "C" int mem_00B5D8E0;
extern "C" int mem_00B5D8E8;
extern "C" int mem_00B5D8F0;
extern "C" __declspec(naked) void __cdecl fn_006D77D0() {
    __asm {
        mov eax, dword ptr [mem_00925284]
        fld qword ptr [eax]
        fchs
        fstp qword ptr [mem_00B5D878]
        fld qword ptr [eax]
        fchs
        fstp qword ptr [mem_00B5D880]
        fld qword ptr [eax]
        fchs
        fstp qword ptr [mem_00B5D888]
        fld qword ptr [eax]
        fchs
        fstp qword ptr [mem_00B5D890]
        fld qword ptr [eax]
        fchs
        fstp qword ptr [mem_00B5D898]
        fld qword ptr [eax]
        fchs
        fstp qword ptr [mem_00B5D8A0]
        fld qword ptr [eax]
        fchs
        fstp qword ptr [mem_00B5D8A8]
        fld qword ptr [eax]
        fchs
        fstp qword ptr [mem_00B5D8B0]
        fld qword ptr [eax]
        fchs
        fstp qword ptr [mem_00B5D8B8]
        fld qword ptr [eax]
        fchs
        fstp qword ptr [mem_00B5D8C0]
        fld qword ptr [eax]
        fchs
        fstp qword ptr [mem_00B5D8C8]
        fld qword ptr [eax]
        fchs
        fstp qword ptr [mem_00B5D8D0]
        fld qword ptr [eax]
        fchs
        fstp qword ptr [mem_00B5D8D8]
        fld qword ptr [eax]
        fchs
        fstp qword ptr [mem_00B5D8E0]
        fld qword ptr [eax]
        fchs
        fstp qword ptr [mem_00B5D8E8]
        fld qword ptr [eax]
        fchs
        fstp qword ptr [mem_00B5D8F0]
        ret
    }
}

// [0x006DC150] sub_006DC150 (166 bytes)
// [VA] 0x006DC150
extern "C" double mem_00B5DB90;
extern "C" double mem_00B5DB98;
extern "C" double mem_00B5DBA0;
extern "C" double mem_00B5DBA8;
extern "C" double mem_00B5DBB0;
extern "C" double mem_00B5DBB8;
extern "C" double mem_00B5DBC0;
extern "C" double mem_00B5DBC8;
extern "C" double mem_00B5DBD0;
extern "C" double mem_00B5DBD8;
extern "C" double mem_00B5DBE0;
extern "C" double mem_00B5DBE8;
extern "C" double mem_00B5DBF0;
extern "C" double mem_00B5DBF8;
extern "C" double mem_00B5DC00;
extern "C" double mem_00B5DC08;
extern "C" void __cdecl fn_006DC150() {
    double* h = (double*)mem_00925284;
    mem_00B5DB90 = -*h;
    mem_00B5DB98 = -*h;
    mem_00B5DBA0 = -*h;
    mem_00B5DBA8 = -*h;
    mem_00B5DBB0 = -*h;
    mem_00B5DBB8 = -*h;
    mem_00B5DBC0 = -*h;
    mem_00B5DBC8 = -*h;
    mem_00B5DBD0 = -*h;
    mem_00B5DBD8 = -*h;
    mem_00B5DBE0 = -*h;
    mem_00B5DBE8 = -*h;
    mem_00B5DBF0 = -*h;
    mem_00B5DBF8 = -*h;
    mem_00B5DC00 = -*h;
    mem_00B5DC08 = -*h;
}

// [0x006DDBE0] sub_006DDBE0 (166 bytes)
extern "C" double mem_00B5DD10;
extern "C" double mem_00B5DD18;
extern "C" double mem_00B5DD20;
extern "C" double mem_00B5DD28;
extern "C" double mem_00B5DD30;
extern "C" double mem_00B5DD38;
extern "C" double mem_00B5DD40;
extern "C" double mem_00B5DD48;
extern "C" double mem_00B5DD50;
extern "C" double mem_00B5DD58;
extern "C" double mem_00B5DD60;
extern "C" double mem_00B5DD68;
extern "C" double mem_00B5DD70;
extern "C" double mem_00B5DD78;
extern "C" double mem_00B5DD80;
extern "C" double mem_00B5DD88;
extern "C" void __cdecl fn_006DDBE0() {
    double* h = *(double**)&mem_00925284;
    mem_00B5DD10 = -*h;
    mem_00B5DD18 = -*h;
    mem_00B5DD20 = -*h;
    mem_00B5DD28 = -*h;
    mem_00B5DD30 = -*h;
    mem_00B5DD38 = -*h;
    mem_00B5DD40 = -*h;
    mem_00B5DD48 = -*h;
    mem_00B5DD50 = -*h;
    mem_00B5DD58 = -*h;
    mem_00B5DD60 = -*h;
    mem_00B5DD68 = -*h;
    mem_00B5DD70 = -*h;
    mem_00B5DD78 = -*h;
    mem_00B5DD80 = -*h;
    mem_00B5DD88 = -*h;
}

// [0x006D91D0] sub_006D91D0 (153 bytes)
extern "C" __declspec(naked) void* __fastcall fn_006D91D0(void* self, int edx_unused, void* ret) {
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
        mov eax, dword ptr [esi + 0x10]
        mov dword ptr [esp + 0x5c], 1
        cmp eax, 3
        ja L_done_switch
        jmp dword ptr [eax*4 + 0x6d926c]
    L_case03:
        push 0xaa91ac
        jmp L_assign
    L_case1:
        push 0xaa91a4
        jmp L_assign
    L_case2:
        push 0xaa9198
    L_assign:
        lea ecx, [esp + 0xc]
        call ext_006B9EC0
    L_done_switch:
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

// [0x006D39B0] sub_006D39B0 (176 bytes)
extern "C" void ext_006D57D0();
extern "C" void ext_006E7460();
extern "C" int mem_008BCB18;
extern "C" int mem_00AA86E4;
extern "C" __declspec(naked) void* __fastcall fn_006D39B0(void* self, int edx_unused, void* arg) {
    __asm {
        push -0x1
        push offset mem_008BCB18
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x4c
        mov eax, dword ptr [esp + 0x5c]
        push esi
        mov esi, ecx
        push edi
        push eax
        lea ecx, [esp + 0xc]
        push offset mem_00AA86E4
        push ecx
        call ext_006D57D0
        add esp, 0xc
        mov edi, dword ptr [esi]
        mov ecx, eax
        mov dword ptr [esp + 0x5c], 0x0
        call ext_006E7460
        push eax
        mov ecx, esi
        call dword ptr [edi + 0x40]
        lea ecx, [esp + 0x8]
        mov edi, eax
        mov dword ptr [esp + 0x5c], 0xffffffff
        call ext_006B9D70
        test edi, edi
        je short L_done
        mov ecx, dword ptr [esi + 0x1c0]
        test ecx, ecx
        je short L_no_cb
        mov edx, dword ptr [ecx]
        lea eax, [edi + 0x4]
        push eax
        call dword ptr [edx + 0x8]
    L_no_cb:
        mov eax, dword ptr [esi + 0xac]
        lea ecx, [esi + 0xac]
        lea edx, [esp + 0x64]
        mov dword ptr [esp + 0x64], edi
        push edx
        push eax
        call ext_006D2170
    L_done:
        mov ecx, dword ptr [esp + 0x54]
        mov eax, edi
        pop edi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x58
        ret 0x4
    }
}

// [0x006DC2C0] sub_006DC2C0 (176 bytes)
extern "C" void __cdecl ext_006A5C5C(void* ptr);
extern "C" void ext_006BAC20();
extern "C" void __fastcall ext_006C9250(void* self);
extern "C" void ext_006D2160();
extern "C" void ext_006DD2B0();
extern "C" void ext_008B9434();
extern "C" int mem_00993BE8;
extern "C" __declspec(naked) void __fastcall fn_006DC2C0(void* self) {
    __asm {
        push -1
        push offset ext_008B9434
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov dword ptr [esp + 0xc], edi
        mov dword ptr [edi], offset mem_00993BE8
        mov esi, dword ptr [edi + 0xb8]
        lea ebx, [edi + 0xb8]
        test esi, esi
        mov dword ptr [esp + 0x18], 2
        je L1
        push ebp
    L0:
        mov eax, dword ptr [ebx + 0x10]
        dec esi
        mov ebp, dword ptr [eax + 4*esi]
        test ebp, ebp
        je L2
        mov ecx, ebp
        call ext_006C9250
        push ebp
        call ext_006A5C5C
        add esp, 4
    L2:
        test esi, esi
        jne L0
        pop ebp
    L1:
        mov ecx, ebx
        call ext_006D2250
        or esi, -1
        mov ecx, edi
        mov dword ptr [edi + 0xe8], esi
        call ext_006DD2B0
        lea ecx, [edi + 0xd0]
        mov byte ptr [esp + 0x18], 1
        call ext_006D2160
        mov ecx, ebx
        mov byte ptr [esp + 0x18], 0
        call ext_006D2160
        mov ecx, edi
        mov dword ptr [esp + 0x18], esi
        call ext_006BAC20
        mov ecx, dword ptr [esp + 0x10]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x006D4930] sub_006D4930 (170 bytes)
extern "C" void __cdecl ext_006A5C5C(void* ptr);
extern "C" void ext_006BBE90();
extern "C" void ext_006BC370();
extern "C" void ext_006E7440();

extern "C" __declspec(naked) bool __fastcall fn_006D4930(void* self, int edx_unused, void* item, bool flag) {
    __asm {
        push ecx
        push ebx
        mov ebx, ecx
        mov ecx, dword ptr [ebx + 0x4]
        push ebp
        lea ebp, [ebx + 0x4]
        xor eax, eax
        push esi
        push edi
        test ecx, ecx
        jle L_not_found
        mov edx, dword ptr [ebp + 0x10]
    L_loop:
        mov esi, dword ptr [esp + 0x18]
        mov edi, dword ptr [edx]
        cmp edi, esi
        je L_found
        inc eax
        add edx, 0x4
        cmp eax, ecx
        jl L_loop
    L_not_found:
        or esi, -0x1
    L_check:
        xor edi, edi
        cmp esi, -0x1
        mov byte ptr [esp + 0x13], 0x1
        jne L_remove
        push edi
        lea ecx, [ebx + 0x1c4]
        call ext_006E7440
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        pop ecx
        ret 0x8
    L_found:
        mov esi, eax
        jmp L_check
    L_remove:
        mov al, byte ptr [esp + 0x1c]
        test al, al
        je L_skip_get
        mov ecx, dword ptr [esp + 0x18]
        call ext_006BC370
        mov edi, eax
    L_skip_get:
        push esi
        mov ecx, ebp
        call ext_006D2200
        mov esi, dword ptr [esp + 0x18]
        test esi, esi
        je L_after_delete
        mov ecx, esi
        call ext_006BBE90
        push esi
        call ext_006A5C5C
        add esp, 0x4
    L_after_delete:
        mov al, byte ptr [esp + 0x1c]
        test al, al
        je L_ret_ok
        mov eax, dword ptr [ebx]
        push 0x1
        push edi
        mov ecx, ebx
        call dword ptr [eax + 0x74]
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 0x8
    L_ret_ok:
        mov al, byte ptr [esp + 0x13]
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 0x8
    }
}

// [0x006D61A0] sub_006D61A0 (176 bytes)
extern "C" void ext_008B90EB();
extern "C" void ext_006E7440();
extern "C" void ext_0072D520();
extern "C" void ext_0072D640();
extern "C" void ext_0072DDD0();
extern "C" __declspec(naked) void __fastcall fn_006D61A0(void* self, int edx_unused, int a1) {
    __asm {
        push -1
        push offset ext_008B90EB
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x1d0
        push esi
        mov esi, ecx
        push edi
        push esi
        mov eax, dword ptr [esi + 0xa8]
        lea ecx, [esp + 0xc]
        push eax
        call ext_0072D520
        mov eax, dword ptr [esp + 0x1e8]
        mov dword ptr [esp + 0x1e0], 0
        test eax, eax
        jne L1
        push 4
        jmp L3
    L1:
        push 1
        push eax
        lea ecx, [esp + 0x10]
        call ext_0072DDD0
        mov edi, eax
        test edi, edi
        jne L2
        push 7
    L3:
        lea ecx, [esi + 4]
        call ext_006E7440
        lea ecx, [esp + 8]
        mov dword ptr [esp + 0x1e0], 0xffffffff
        call ext_0072D640
        xor eax, eax
        jmp L4
    L2:
        lea ecx, [esp + 8]
        mov dword ptr [esp + 0x1e0], 0xffffffff
        call ext_0072D640
        mov eax, edi
    L4:
        mov ecx, dword ptr [esp + 0x1d8]
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x1dc
        ret 4
    }
}

// [0x006D3900] sub_006D3900 (176 bytes)
extern "C" void ext_006D57D0();
extern "C" void ext_006E7460();
extern "C" void ext_006B9D70();
extern "C" void ext_006D2170();
extern "C" int mem_008BCB18;
extern "C" int mem_00AA86F8;
extern "C" __declspec(naked) void* __fastcall fn_006D3900(void* self, int edx_unused, void* arg) {
    __asm {
        push -0x1
        push offset mem_008BCB18
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x4c
        mov eax, dword ptr [esp + 0x5c]
        push esi
        mov esi, ecx
        push edi
        push eax
        lea ecx, [esp + 0xc]
        push offset mem_00AA86F8
        push ecx
        call ext_006D57D0
        add esp, 0xc
        mov edi, dword ptr [esi]
        mov ecx, eax
        mov dword ptr [esp + 0x5c], 0x0
        call ext_006E7460
        push eax
        mov ecx, esi
        call dword ptr [edi + 0x3c]
        lea ecx, [esp + 0x8]
        mov edi, eax
        mov dword ptr [esp + 0x5c], 0xffffffff
        call ext_006B9D70
        test edi, edi
        je short L_done
        mov ecx, dword ptr [esi + 0x1bc]
        test ecx, ecx
        je short L_no_cb
        mov edx, dword ptr [ecx]
        lea eax, [edi + 0x4]
        push eax
        call dword ptr [edx + 0x8]
    L_no_cb:
        mov eax, dword ptr [esi + 0x94]
        lea ecx, [esi + 0x94]
        lea edx, [esp + 0x64]
        mov dword ptr [esp + 0x64], edi
        push edx
        push eax
        call ext_006D2170
    L_done:
        mov ecx, dword ptr [esp + 0x54]
        mov eax, edi
        pop edi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x58
        ret 0x4
    }
}

// [0x006DDC90] sub_006DDC90 (192 bytes)
extern "C" void ext_006A5C62();
extern "C" void ext_006DDF00();
extern "C" int mem_00AAC0D0;
extern "C" __declspec(naked) void __fastcall fn_006DDC90(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8b94f6
        push eax
        mov eax, dword ptr [mem_00AAC0D0]
        mov dword ptr fs:[0x0], esp
        push esi
        mov esi, dword ptr [esp + 0x18]
        cmp esi, eax
        push 0xa0
        jne short L_006DDC90_else
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp + 0x18], eax
        test eax, eax
        mov dword ptr [esp + 0xc], 0
        je short L_006DDC90_null
        mov ecx, dword ptr [esp + 0x20]
        mov edx, dword ptr [esp + 0x1c]
        push ecx
        mov ecx, dword ptr [esp + 0x18]
        push edx
        push esi
        push 0
        push ecx
        mov ecx, eax
        call ext_006DDF00
        mov ecx, dword ptr [esp + 0x4]
        mov dword ptr fs:[0x0], ecx
        pop esi
        add esp, 0xc
        ret
L_006DDC90_else:
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp + 0x18], eax
        test eax, eax
        mov dword ptr [esp + 0xc], 1
        je short L_006DDC90_null
        mov edx, dword ptr [esp + 0x20]
        mov ecx, dword ptr [esp + 0x1c]
        push edx
        mov edx, dword ptr [esp + 0x18]
        push ecx
        push esi
        push edx
        push edx
        mov ecx, eax
        call ext_006DDF00
        mov ecx, dword ptr [esp + 0x4]
        mov dword ptr fs:[0x0], ecx
        pop esi
        add esp, 0xc
        ret
L_006DDC90_null:
        mov ecx, dword ptr [esp + 0x4]
        xor eax, eax
        mov dword ptr fs:[0x0], ecx
        pop esi
        add esp, 0xc
        ret
    }
}

// [0x006DEBA0] sub_006DEBA0 (192 bytes)
extern "C" void ext_006CA0E0();
extern "C" void ext_006DDC90();
extern "C" void ext_006DECE0();
extern "C" int mem_00AAC084;
extern "C" __declspec(naked) void __fastcall fn_006DEBA0(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0x8]
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 0x54], ebx
        je L_end
        mov eax, dword ptr [esi]
        push edi
        call dword ptr [eax + 0x14]
        cmp ebx, 0x2
        mov edi, eax
        jne L_chk4
        mov edi, 0x3
        jmp L_cmp
    L_chk4:
        cmp ebx, 0x4
        jne L_cmp
        mov edi, ebx
    L_cmp:
        mov edx, dword ptr [esi]
        mov ecx, esi
        call dword ptr [edx + 0x14]
        cmp edi, eax
        je L_set
        mov eax, dword ptr [esi]
        mov ecx, esi
        call dword ptr [eax + 0x14]
        cmp eax, 0x3
        jne L_34
        cmp ebx, 0x4
        jne L_34
        mov ecx, dword ptr [esi + 0x58]
        mov edx, dword ptr [mem_00AAC084]
        push ecx
        push 0x0
        push edx
        push 0xaa9448
        call ext_006DDC90
        add esp, 0x10
        mov edi, eax
        mov eax, dword ptr [esi]
        mov ecx, esi
        push edi
        call dword ptr [eax + 0x8]
        push 0x0
        call ext_006CA0E0
        push eax
        mov ecx, edi
        call ext_006DEED0
        mov eax, dword ptr [esp + 0x14]
        test eax, eax
        je L_set
        push eax
        mov ecx, edi
        call ext_006DECE0
        mov dword ptr [esi + 0x54], ebx
        pop edi
        pop esi
        pop ebx
        ret 0x8
    L_34:
        mov edx, dword ptr [esi]
        mov ecx, esi
        call dword ptr [edx + 0x14]
        cmp eax, 0x4
        jne L_set
        cmp ebx, 0x2
        jne L_set
        cmp dword ptr [esi + 0x54], 0x4
        jne L_set
        mov eax, dword ptr [esi]
        push 0x3
        mov ecx, esi
        call dword ptr [eax + 0x10]
    L_set:
        mov dword ptr [esi + 0x54], ebx
        pop edi
    L_end:
        pop esi
        pop ebx
        ret 0x8
    }
}

// [0x006D82F0] sub_006D82F0 (208 bytes)
extern "C" void ext_0070E3D0();
// Calls this->0x0070E3D0(a1), then resets container at this+0x1c4 and fills it from a1's 12-byte
// records (a1+0x1d4, count a1+0x1c4); then resets container at this+0x1dc and fills it from a1's
// dwords (a1+0x1ec, count a1+0x1dc). Returns self. ret 4.
extern "C" __declspec(naked) void* __fastcall fn_006D82F0(void* self, int edx_unused, void* a1) {
    __asm {
        sub esp, 0x10
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x20]
        push edi
        mov ebp, ecx
        push esi
        mov dword ptr [esp + 0x14], ebp
        call ext_0070E3D0
        lea edi, [ebp + 0x1c4]
        mov ecx, edi
        call ext_006D2250
        mov eax, dword ptr [esi + 0x1cc]
        mov dword ptr [edi + 0x8], eax
        mov eax, dword ptr [esi + 0x1c4]
        test eax, eax
        jle short L_82F0_after1
        xor ebx, ebx
        mov dword ptr [esp + 0x24], eax
    L_82F0_loop1:
        mov ecx, dword ptr [esi + 0x1d4]
        add ecx, ebx
        mov edx, dword ptr [ecx]
        mov dword ptr [esp + 0x14], edx
        lea edx, [esp + 0x14]
        mov eax, dword ptr [ecx + 0x4]
        push edx
        mov dword ptr [esp + 0x1c], eax
        mov eax, dword ptr [edi]
        mov ecx, dword ptr [ecx + 0x8]
        push eax
        mov dword ptr [esp + 0x24], ecx
        mov ecx, edi
        call ext_006D2170
        mov eax, dword ptr [esp + 0x24]
        add ebx, 0xc
        dec eax
        mov dword ptr [esp + 0x24], eax
        jne short L_82F0_loop1
    L_82F0_after1:
        lea edi, [ebp + 0x1dc]
        mov ecx, edi
        call ext_006D2250
        mov ecx, dword ptr [esi + 0x1e4]
        xor ebx, ebx
        mov dword ptr [edi + 0x8], ecx
        mov ebp, dword ptr [esi + 0x1dc]
        test ebp, ebp
        jle short L_82F0_done
    L_82F0_loop2:
        mov edx, dword ptr [esi + 0x1ec]
        lea ecx, [esp + 0x24]
        push ecx
        mov ecx, edi
        mov eax, dword ptr [edx + 4 * ebx]
        mov edx, dword ptr [edi]
        push edx
        mov dword ptr [esp + 0x2c], eax
        call ext_006D2170
        inc ebx
        cmp ebx, ebp
        jl short L_82F0_loop2
    L_82F0_done:
        mov eax, dword ptr [esp + 0x10]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret 0x4
    }
}

// [0x006D72B0] sub_006D72B0 (199 bytes)
extern "C" void ext_006BA7C0();
extern "C" void ext_006D6FF0();
extern "C" void ext_006D7380();
extern "C" void ext_006E7440();
extern "C" void ext_006E7460();
extern "C" void ext_00755000();
extern "C" void ext_00755010();

extern "C" __declspec(naked) bool __fastcall fn_006D72B0(void* self) {
    __asm {
        push    esi
        mov     esi, ecx
        push    edi
        push    offset mem_00B5D2C0
        lea     edi, [esi + 0x5c]
        mov     ecx, edi
        call    ext_006BA7C0
        test    al, al
        je      short L_006D72D6
        push    0x6
        lea     ecx, [esi + 0x4]
        call    ext_006E7440
        pop     edi
        xor     al, al
        pop     esi
        ret

    L_006D72D6:
        mov     eax, dword ptr [esi + 0xfc]
        mov     ecx, dword ptr [eax + 0x4]
        test    ecx, ecx
        jne     short L_006D72EA
        mov     ecx, esi
        call    ext_006D6FF0

    L_006D72EA:
        mov     ecx, dword ptr [esi + 0xfc]
        push    ebx
        mov     edx, dword ptr [ecx + 0x4]
        mov     ecx, edi
        mov     ebx, dword ptr [edx]
        call    ext_006E7460
        push    eax
        mov     eax, dword ptr [esi + 0xfc]
        mov     ecx, dword ptr [eax + 0x4]
        call    dword ptr [ebx + 0x4]
        test    al, al
        pop     ebx
        jne     short L_006D7372
        mov     ecx, dword ptr [esi + 0xfc]
        mov     ecx, dword ptr [ecx + 0x4]
        call    ext_00755000
        sub     eax, 0x0
        je      short L_006D734D
        sub     eax, 0x2
        je      short L_006D733A
        mov     edx, dword ptr [esi + 0xfc]
        mov     ecx, dword ptr [edx + 0x4]
        call    ext_00755010
        push    eax
        push    0x7
        jmp     short L_006D735E

    L_006D733A:
        mov     eax, dword ptr [esi + 0xfc]
        mov     ecx, dword ptr [eax + 0x4]
        call    ext_00755010
        push    eax
        push    0x4
        jmp     short L_006D735E

    L_006D734D:
        mov     ecx, dword ptr [esi + 0xfc]
        mov     ecx, dword ptr [ecx + 0x4]
        call    ext_00755010
        push    eax
        push    0x0

    L_006D735E:
        lea     ecx, [esi + 0x4]
        call    ext_006E7410
        mov     ecx, esi
        call    ext_006D7380
        pop     edi
        xor     al, al
        pop     esi
        ret

    L_006D7372:
        pop     edi
        mov     al, 0x1
        pop     esi
        ret
    }
}

// [0x006DCEA0] sub_006DCEA0 (215 bytes)
extern "C" void ext_006B9D70();
extern "C" void ext_006C9360();
extern "C" void ext_006DC510();
extern "C" void ext_006DC550();
extern "C" void ext_006DE7C0();
extern "C" void ext_006E6E60();
extern "C" void ext_006E7460();
extern "C" void ext_00710B70();

// [0x006DCEA0] SEH-framed thiscall-like body (ret 4). Hand-written to match original bytes.
extern "C" __declspec(naked) void __fastcall fn_006DCEA0(void* self, int edx_unused, void* arg) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8bcb18
        push eax
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr fs:[0x0], esp
        sub esp, 0x50
        test eax, eax
        push ebx
        mov ebx, ecx
        je L_end
        push ebp
        xor ebp, ebp
        call ext_006DC550
        test eax, eax
        jle L_cleanup
        push esi
        push edi
    L_loop:
        mov ecx, dword ptr [esp + 0x70]
        lea eax, [esp + 0x14]
        push eax
        call ext_006E6E60
        mov ecx, eax
        mov dword ptr [esp + 0x68], 0
        call ext_006E7460
        push eax
        push ebp
        mov ecx, ebx
        call ext_006DC510
        mov ecx, eax
        call ext_006C9360
        mov ecx, eax
        call ext_006DE7C0
        lea ecx, [esp + 0x14]
        mov esi, eax
        mov dword ptr [esp + 0x68], -1
        call ext_006B9D70
        test esi, esi
        je L_skip
        mov edx, dword ptr [esi]
        mov ecx, esi
        call dword ptr [edx + 0x30]
        mov edi, eax
        test edi, edi
        je L_skip
        mov eax, dword ptr [edi]
        push esi
        mov ecx, edi
        mov dword ptr [esp + 0x14], eax
        call dword ptr [eax + 0x24]
        push eax
        mov eax, dword ptr [esp + 0x14]
        mov ecx, edi
        call dword ptr [eax + 0xc]
    L_skip:
        mov ecx, ebx
        inc ebp
        call ext_006DC550
        cmp ebp, eax
        jl L_loop
        pop edi
        pop esi
    L_cleanup:
        mov edx, dword ptr [ebx]
        mov ecx, ebx
        call dword ptr [edx + 0xc]
        mov ecx, dword ptr [esp + 0x68]
        push ecx
        mov ecx, eax
        call ext_00710B70
        pop ebp
    L_end:
        mov ecx, dword ptr [esp + 0x54]
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0x5c
        ret 0x4
    }
}

// [0x006D49E0] sub_006D49E0 (219 bytes)
extern "C" void ext_006C2860();
extern "C" void ext_006C28D0();
extern "C" void ext_006C2F50();
extern "C" void ext_006C3030();
extern "C" void ext_006E7440();
extern "C" __declspec(naked) bool __fastcall fn_006D49E0(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push ebx
        push ebp
        mov ebp, ecx
        xor eax, eax
        push esi
        mov esi, dword ptr [esp + 0x10]
        mov edx, dword ptr [ebp + 0x1c]
        lea ecx, [ebp + 0x1c]
        test edx, edx
        push edi
        jle L_notfound_006D49E0
        mov edi, dword ptr [ecx + 0x10]
    L_loop_006D49E0:
        cmp dword ptr [edi], esi
        je L_found_006D49E0
        inc eax
        add edi, 0x4
        cmp eax, edx
        jl L_loop_006D49E0
    L_notfound_006D49E0:
        or eax, -0x1
    L_found_006D49E0:
        mov bl, 0x1
        cmp eax, -0x1
        mov byte ptr [esp + 0x14], bl
        jne L_nonneg_006D49E0
        push 0x0
        lea ecx, [ebp + 0x1c4]
        call ext_006E7440
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        ret 0x8
    L_nonneg_006D49E0:
        push eax
        call ext_006D2200
        mov al, byte ptr [esp + 0x18]
        test al, al
        je L_end_006D49E0
        xor edi, edi
        mov ecx, esi
        push edi
        call ext_006C2860
        test eax, eax
        jle L_after_006D49E0
    L_loop2_006D49E0:
        mov ebx, dword ptr [ebp]
        push 0x1
        push edi
        mov ecx, esi
        call ext_006C28D0
        push eax
        mov ecx, ebp
        call dword ptr [ebx + 0x74]
        test al, al
        jne L_skipflag_006D49E0
        mov byte ptr [esp + 0x14], al
    L_skipflag_006D49E0:
        push 0x0
        mov ecx, esi
        inc edi
        call ext_006C2860
        cmp edi, eax
        jl L_loop2_006D49E0
        mov bl, byte ptr [esp + 0x14]
    L_after_006D49E0:
        mov ecx, esi
        call ext_006C3030
        test eax, eax
        je L_end_006D49E0
        mov ecx, esi
        call ext_006C3030
        push 0x0
        mov ecx, esi
        mov edi, eax
        call ext_006C2F50
        mov eax, dword ptr [ebp]
        push edi
        mov ecx, ebp
        call dword ptr [eax + 0x78]
        test al, al
        jne L_end_006D49E0
        xor bl, bl
    L_end_006D49E0:
        mov edx, dword ptr [esi]
        mov ecx, esi
        call dword ptr [edx + 0x4]
        test esi, esi
        je L_done_006D49E0
        mov eax, dword ptr [esi]
        push 0x1
        mov ecx, esi
        call dword ptr [eax + 0x14]
    L_done_006D49E0:
        pop edi
        pop esi
        mov al, bl
        pop ebp
        pop ebx
        ret 0x8
    }
}

// [0x006DD6C0] sub_006DD6C0 (212 bytes)
// SEH-framed (__except_handler3) body; naked to reproduce exact frame layout and encodings.
extern "C" __declspec(naked) void __fastcall fn_006DD6C0(void* self) {
    __asm {
        push -1
        push 0x8b94c7
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x50
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [esp + 0x64]
        lea ecx, [esp + 0x4]
        push eax
        mov dword ptr [esp + 0x5c], 0x1
        call ext_006B9D20
        push 0xaa88ec
        lea ecx, [esp + 0x68]
        mov byte ptr [esp + 0x5c], 0x2
        call ext_006BA7C0
        test al, al
        je L_006DD714
        push 0xaa8cac
        jmp L_006DD744
L_006DD714:
        push 0xaa88dc
        lea ecx, [esp + 0x68]
        call ext_006BA7C0
        test al, al
        je L_006DD72D
        push 0xaa8c9c
        jmp L_006DD744
L_006DD72D:
        push 0xaa88d0
        lea ecx, [esp + 0x68]
        call ext_006BA7C0
        test al, al
        je L_006DD74D
        push 0xaa8c98
L_006DD744:
        lea ecx, [esp + 0x8]
        call ext_006B9EC0
L_006DD74D:
        push esi
        mov esi, dword ptr [esp + 0x64]
        lea ecx, [esp + 0x8]
        push ecx
        mov ecx, esi
        call ext_006B9D20
        mov dword ptr [esp + 0x4], 0x1
        lea ecx, [esp + 0x8]
        mov byte ptr [esp + 0x5c], 0x1
        call ext_006B9D70
        lea ecx, [esp + 0x68]
        mov byte ptr [esp + 0x5c], 0x0
        call ext_006B9D70
        mov ecx, dword ptr [esp + 0x54]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x5c
        ret
    }
}

// [0x006D5E30] sub_006D5E30 (228 bytes)
extern "C" void __cdecl ext_006A5C5C(void* ptr);
extern "C" void ext_006B9960();
extern "C" void ext_006BE890();
extern "C" void ext_006D66A0();
extern "C" __declspec(naked) void __fastcall fn_006D5E30(void* self) {
    __asm {
        push ebx
        push ebp
        push esi
        push edi
        mov esi, ecx
        call ext_006D66A0
        mov edi, dword ptr [esi + 0x150]
        lea ebx, [esi + 0x150]
        xor ebp, ebp
        cmp edi, ebp
        je L_5E6E
L_5E4D:
        mov eax, dword ptr [ebx + 0x10]
        dec edi
        mov ebp, dword ptr [eax + 4*edi]
        test ebp, ebp
        je L_5E68
        mov ecx, ebp
        call ext_006BE890
        push ebp
        call ext_006A5C5C
        add esp, 4
L_5E68:
        test edi, edi
        jne L_5E4D
        xor ebp, ebp
L_5E6E:
        mov ecx, ebx
        call ext_006D2250
        lea ecx, [esi + 0x16c]
        call ext_006B9960
        mov eax, dword ptr [esi + 0x168]
        cmp eax, ebp
        je L_5E99
        mov ecx, dword ptr [esi + 0xa8]
        push eax
        mov edx, dword ptr [ecx]
        call dword ptr [edx + 0xa4]
L_5E99:
        mov eax, 0x1010101
        mov dword ptr [esi + 0x168], ebp
        mov dword ptr [esi + 0x1b8], eax
        lea ecx, [esi + 0xb0]
        mov dword ptr [esi + 0x1bc], eax
        mov word ptr [esi + 0x1c0], ax
        mov byte ptr [esi + 0x1c2], al
        mov dword ptr [esi + 0x1c4], ebp
        mov dword ptr [esi + 0x1c8], ebp
        mov dword ptr [esi + 0x1cc], ebp
        call ext_006B9960
        lea ecx, [esi + 0x1d4]
        mov byte ptr [esi + 0x1d0], 0
        call ext_006B9960
        lea ecx, [esi + 0x220]
        call ext_006B9960
        mov dword ptr [esi + 0x270], ebp
        mov dword ptr [esi + 0x278], ebp
        mov dword ptr [esi + 0x274], ebp
        mov dword ptr [esi + 0x27c], ebp
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}

// [0x006DE9D0] sub_006DE9D0 (224 bytes)
// SEH-guarded thiscall (ret 0x8): frame push, virtual dispatch on arg, conditional allocation/cleanup.
extern "C" void ext_006CA140();
extern "C" void ext_006DDF00();
extern "C" void ext_006DEEC0();
extern "C" __declspec(naked) int __fastcall fn_006DE9D0(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8b95b6
        push eax
        mov dword ptr fs:[0x0], esp
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr [esp + 0x18]
        mov eax, dword ptr [esi]
        push edi
        call dword ptr [eax + 0x28]
        cmp eax, -1
        jne short L_9D0_has
        push 0xa0
        call ext_006A5C62
        add esp, 0x4
        mov dword ptr [esp + 0x18], eax
        test eax, eax
        mov dword ptr [esp + 0x10], 0x0
        je short L_9D0_c
        push 0x0
        push 0x0
        push 0x0
        push edi
        push edi
        mov ecx, eax
        call ext_006DDF00
        jmp short L_9D0_d
    L_9D0_c:
        xor eax, eax
    L_9D0_d:
        mov edx, dword ptr [esi]
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0x14], 0xffffffff
        mov edi, eax
        call dword ptr [edx + 0x8]
        jmp short L_9D0_end
    L_9D0_has:
        mov edx, dword ptr [esi]
        push eax
        mov ecx, esi
        call dword ptr [edx + 0x18]
        mov edi, eax
    L_9D0_end:
        mov al, byte ptr [esp + 0x1c]
        test al, al
        je short L_9D0_fin
        mov ecx, edi
        call ext_006DEEC0
        test eax, eax
        jne short L_9D0_fin
        push 0x98
        call ext_006A5C62
        add esp, 0x4
        mov dword ptr [esp + 0x1c], eax
        test eax, eax
        mov dword ptr [esp + 0x10], 0x1
        je short L_9D0_e
        mov ecx, eax
        call ext_006CA140
        jmp short L_9D0_f
    L_9D0_e:
        xor eax, eax
    L_9D0_f:
        push 0x0
        push eax
        mov ecx, edi
        mov dword ptr [esp + 0x18], 0xffffffff
        call ext_006DEED0
    L_9D0_fin:
        mov ecx, dword ptr [esp + 0x8]
        mov eax, edi
        pop edi
        mov dword ptr fs:[0x0], ecx
        pop esi
        add esp, 0xc
        ret 0x8
    }
}

// [0x006D5C50] sub_006D5C50 (227 bytes)
extern "C" void ext_006B9D10();
extern "C" void ext_006D2130();
extern "C" void ext_006D59C0();
extern "C" int mem_008B90CE;
extern "C" int mem_0099394C;
extern "C" __declspec(naked) void __fastcall fn_006D5C50(void* self, int edx_unused, int a1) {
    __asm {
        push -0x1
        push offset mem_008B90CE
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        mov eax, dword ptr [esp + 0x14]
        push esi
        push edi
        mov esi, ecx
        push eax
        mov dword ptr [esp + 0xc], esi
        call ext_006D59C0
        push 0x8
        mov dword ptr [esp + 0x18], 0x0
        call ext_006A5C62
        add esp, 0x4
        test eax, eax
        je L_null
        mov dword ptr [eax + 0x4], 0x0
        jmp L_after_alloc
    L_null:
        xor eax, eax
    L_after_alloc:
        lea ecx, [esi + 0x104]
        mov dword ptr [esi + 0xfc], eax
        call ext_006B9D10
        lea edi, [esi + 0x150]
        push 0x4
        push 0x10
        mov ecx, edi
        mov byte ptr [esp + 0x1c], 0x1
        call ext_006D2130
        lea ecx, [edi + 0x10]
        mov dword ptr [edi + 0x14], ecx
        lea ecx, [esi + 0x16c]
        mov byte ptr [esp + 0x14], 0x2
        call ext_006B9D10
        lea ecx, [esi + 0x1d4]
        mov byte ptr [esp + 0x14], 0x3
        call ext_006B9D10
        lea ecx, [esi + 0x220]
        mov byte ptr [esp + 0x14], 0x4
        call ext_006B9D10
        mov edx, dword ptr [esi + 0xfc]
        mov dword ptr [esi], offset mem_0099394C
        mov ecx, esi
        mov byte ptr [esp + 0x14], 0x5
        mov dword ptr [edx], 0x0
        mov dword ptr [esi + 0x168], 0x0
        call ext_006D5E30
        mov ecx, dword ptr [esp + 0xc]
        mov eax, esi
        pop edi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret 0x4
    }
}

// [0x006D5D60] sub_006D5D60 (208 bytes)
extern "C" void __cdecl ext_006A5C5C(void* ptr);
extern "C" void ext_006D2160();
extern "C" void ext_006D5A60();
extern "C" int mem_008B90CE;
extern "C" int mem_0099394C;

extern "C" __declspec(naked) void __fastcall fn_006D5D60(void* self) {
    __asm {
        push -0x1
        push offset mem_008B90CE
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [esp + 0x8], esi
        mov dword ptr [esi], offset mem_0099394C
        mov dword ptr [esp + 0x14], 0x5
        call ext_006D5E30
        mov edi, dword ptr [esi + 0xfc]
        test edi, edi
        je short L_no_edi
        mov ecx, dword ptr [edi + 0x4]
        test ecx, ecx
        je short L_no_vfunc
        mov eax, dword ptr [ecx]
        push 0x1
        call dword ptr [eax]
    L_no_vfunc:
        push edi
        mov dword ptr [edi + 0x4], 0x0
        call ext_006A5C5C
        add esp, 0x4
    L_no_edi:
        lea ecx, [esi + 0x220]
        mov byte ptr [esp + 0x14], 0x4
        call ext_006B9D70
        lea ecx, [esi + 0x1d4]
        mov byte ptr [esp + 0x14], 0x3
        call ext_006B9D70
        lea ecx, [esi + 0x16c]
        mov byte ptr [esp + 0x14], 0x2
        call ext_006B9D70
        lea ecx, [esi + 0x150]
        mov byte ptr [esp + 0x14], 0x1
        call ext_006D2160
        lea ecx, [esi + 0x104]
        mov byte ptr [esp + 0x14], 0x0
        call ext_006B9D70
        mov ecx, esi
        mov dword ptr [esp + 0x14], 0xffffffff
        call ext_006D5A60
        mov ecx, dword ptr [esp + 0xc]
        pop edi
        pop esi
        mov dword ptr fs:[0x0], ecx
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
    }
}

// [0x006D2720] sub_006D2720 (240 bytes)
// __thiscall-style: self in ecx (two doubles), two stack args (ret 0x8); returns a1 in eax.
extern "C" __declspec(naked) void* __fastcall fn_006D2720(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -0x8
        push -0x1
        push 0x8bfd88
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x44
        fld qword ptr [ecx]
        fld qword ptr [ecx + 0x8]
        mov eax, dword ptr [ebp + 0xc]
        push esi
        fld qword ptr [ecx + 0x10]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 0x4]
        fld qword ptr [eax + 0x10]
        xor esi, esi
        mov dword ptr [esp + 0xc], ecx
        mov ecx, dword ptr [eax + 0x8]
        mov dword ptr [esp + 0x10], edx
        mov edx, dword ptr [eax + 0xc]
        mov dword ptr [esp + 0x4], esi
        fld st(0)
        mov dword ptr [esp + 0x4], ecx
        mov dword ptr [esp + 0x8], edx
        fmul st, st(3)
        fld qword ptr [esp + 0x4]
        fmul st, st(3)
        push 0x3ff00000
        push esi
        fsubp st(1), st
        fstp qword ptr [esp + 0x24]
        fld qword ptr [esp + 0x14]
        fmul st, st(2)
        fxch st(1)
        fmul st, st(4)
        fsubp st(1), st
        fstp qword ptr [esp + 0x1c]
        mov edx, dword ptr [esp + 0x20]
        fstp st(0)
        fld qword ptr [esp + 0xc]
        fmul st, st(2)
        fld qword ptr [esp + 0x14]
        fmul st, st(2)
        fsubp st(1), st
        fstp qword ptr [esp + 0x14]
        mov eax, dword ptr [esp + 0x18]
        mov ecx, dword ptr [esp + 0x14]
        push eax
        mov eax, dword ptr [esp + 0x20]
        push ecx
        mov ecx, dword ptr [esp + 0x30]
        push edx
        mov edx, dword ptr [esp + 0x30]
        push eax
        push ecx
        fstp st(0)
        push edx
        lea ecx, [esp + 0x48]
        fstp st(0)
        call ext_006D23B0
        mov dword ptr [esp + 0x50], esi
        mov esi, dword ptr [ebp + 0x8]
        lea eax, [esp + 0x28]
        mov ecx, esi
        push eax
        call ext_006D2390
        lea ecx, [esp + 0x28]
        call ext_006D80A0
        mov ecx, dword ptr [esp + 0x48]
        mov eax, esi
        mov dword ptr fs:[0x0], ecx
        pop esi
        mov esp, ebp
        pop ebp
        ret 0x8
    }
}

// [0x006D8EE0] sub_006D8EE0 (240 bytes)
extern "C" void ext_006FA8E0();
extern "C" void ext_006D9120();
extern "C" void ext_00711CF0();
extern "C" void ext_0071DEB0();
extern "C" void ext_006D9020();
extern "C" void ext_006D80A0();
extern "C" int mem_008BFD88;

extern "C" __declspec(naked) void __fastcall fn_006D8EE0(void* self) {
    __asm {
        push -1
        push offset mem_008BFD88
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x40
        push ebx
        push esi
        mov esi, ecx
        call ext_006FA8E0
        mov dword ptr [esi + 0x10], eax
        lea eax, [esp + 0x28]
        push eax
        mov ecx, esi
        call ext_006D9120
        fld qword ptr [esp + 0x28]
        fld qword ptr [esp + 0x30]
        mov eax, dword ptr [esi + 0xc]
        xor ebx, ebx
        fstp qword ptr [esp + 0x10]
        fld qword ptr [esp + 0x38]
        mov ecx, dword ptr [esp + 0x10]
        mov edx, dword ptr [esp + 0x14]
        add eax, 0x270
        mov dword ptr [esp + 0x50], ebx
        fstp qword ptr [esp + 0x18]
        mov dword ptr [eax + 0x8], ecx
        mov ecx, dword ptr [esp + 0x18]
        fstp qword ptr [eax]
        mov dword ptr [eax + 0xc], edx
        mov edx, dword ptr [esp + 0x1c]
        mov dword ptr [eax + 0x10], ecx
        mov dword ptr [eax + 0x14], edx
        mov eax, dword ptr [esi + 0x10]
        cmp eax, 1
        je fn_6D8F64_zero
        cmp eax, 2
        je fn_6D8F64_zero
        mov eax, 1
        jmp fn_6D8F66_join
fn_6D8F64_zero:
        xor eax, eax
fn_6D8F66_join:
        mov ecx, dword ptr [esi + 0xc]
        push eax
        push 0x10
        add ecx, 0x1f0
        call ext_00711CF0
        mov ecx, esi
        call ext_0071DEB0
        mov eax, dword ptr [esi + 0xc]
        mov ecx, esi
        fstp qword ptr [eax + 0x160]
        call ext_006D9020
        mov ecx, dword ptr [esi + 0xc]
        mov dword ptr [esp + 0x50], 0xffffffff
        fstp qword ptr [ecx + 0x1e8]
        lea ecx, [esp + 0x28]
        mov byte ptr [esi + 0x14], bl
        mov byte ptr [esi + 0x15], bl
        mov byte ptr [esi + 0x16], bl
        mov byte ptr [esi + 0x17], bl
        call ext_006D80A0
        mov ecx, dword ptr [esp + 0x48]
        pop esi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x4c
        ret
    }
}

// [0x006D5210] sub_006D5210 (238 bytes)
extern "C" void ext_006B9D70();
extern "C" void ext_006BADB0();
extern "C" void ext_006D57D0();
extern "C" void ext_006E7440();
extern "C" void ext_006E7460();

extern "C" __declspec(naked) void __fastcall fn_006D5210(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push -1
        push 0x8bcb18
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        sub esp, 0x4c
        mov eax, dword ptr [esp + 0x5c]
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        push eax
        lea ecx, [esp + 0x14]
        push 0xaa8704
        push ecx
        call ext_006D57D0
        add esp, 0xc
        mov eax, dword ptr [edi + 0x1c]
        xor ebp, ebp
        cmp eax, ebp
        mov dword ptr [esp + 0x64], ebp
        mov dword ptr [esp + 0x6c], ebp
        jle L_after_loop
    L_loop_top:
        mov edx, dword ptr [edi + 0x2c]
        lea ecx, [esp + 0x10]
        mov ebx, dword ptr [edx + 4*ebp]
        call ext_006E7460
        mov ecx, ebx
        mov esi, eax
        call ext_006BADB0
    L_cmp_loop:
        mov dl, byte ptr [eax]
        mov cl, dl
        cmp dl, byte ptr [esi]
        jne L_cmp_diff
        test cl, cl
        je L_cmp_equal
        mov dl, byte ptr [eax + 1]
        mov cl, dl
        cmp dl, byte ptr [esi + 1]
        jne L_cmp_diff
        add eax, 2
        add esi, 2
        test cl, cl
        jne L_cmp_loop
    L_cmp_equal:
        xor eax, eax
        jmp L_cmp_done
    L_cmp_diff:
        sbb eax, eax
        sbb eax, -1
    L_cmp_done:
        test eax, eax
        jne L_next
        mov eax, dword ptr [esp + 0x6c]
        mov ecx, dword ptr [esp + 0x70]
        cmp eax, ecx
        je L_found_bail
        inc eax
        mov dword ptr [esp + 0x6c], eax
    L_next:
        mov eax, dword ptr [edi + 0x1c]
        inc ebp
        cmp ebp, eax
        jl L_loop_top
    L_after_loop:
        push 0
        lea ecx, [edi + 0x1c4]
        call ext_006E7440
        lea ecx, [esp + 0x10]
        mov dword ptr [esp + 0x64], -1
        call ext_006B9D70
        xor eax, eax
    L_epilogue:
        mov ecx, dword ptr [esp + 0x5c]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov fs:[0], ecx
        add esp, 0x58
        ret 0x8
    L_found_bail:
        lea ecx, [esp + 0x10]
        mov dword ptr [esp + 0x64], -1
        call ext_006B9D70
        mov eax, ebx
        jmp L_epilogue
    }
}

// [0x006D73A0] sub_006D73A0 (240 bytes)
extern "C" void ext_006B9950();
extern "C" void ext_006B9E60();
extern "C" void ext_0072CEF0();
// __thiscall, one stack arg (ret 0x4). Calls a virtual on arg, then conditionally a helper on this+0x15c,
// then a series of 0x72CEF0(idx, byte-value) calls on arg with bytes from this+0x14c..0x156.
extern "C" __declspec(naked) void __fastcall fn_006D73A0(void* self, int edx_unused, void* other) {
    __asm {
        push ebx
        push esi
        mov esi, dword ptr [esp + 0xc]
        push edi
        mov edi, ecx
        mov eax, dword ptr [esi]
        mov ecx, esi
        call dword ptr [eax + 0x128]
        lea ebx, [edi + 0x100]
        mov ecx, ebx
        call ext_006B9950
        test al, al
        jne short L_skip_006D73A0
        push ebx
        lea ecx, [esi + 0x15c]
        mov byte ptr [esi + 0x158], 0x1
        call ext_006B9E60
    L_skip_006D73A0:
        mov cl, byte ptr [edi + 0x14c]
        push ecx
        push 0x0
        mov ecx, esi
        call ext_0072CEF0
        mov dl, byte ptr [edi + 0x14d]
        mov ecx, esi
        push edx
        push 0x1
        call ext_0072CEF0
        mov al, byte ptr [edi + 0x14e]
        mov ecx, esi
        push eax
        push 0x2
        call ext_0072CEF0
        mov cl, byte ptr [edi + 0x150]
        push ecx
        push 0x4
        mov ecx, esi
        call ext_0072CEF0
        mov dl, byte ptr [edi + 0x151]
        mov ecx, esi
        push edx
        push 0x5
        call ext_0072CEF0
        mov al, byte ptr [edi + 0x152]
        mov ecx, esi
        push eax
        push 0x6
        call ext_0072CEF0
        mov cl, byte ptr [edi + 0x153]
        push ecx
        push 0x7
        mov ecx, esi
        call ext_0072CEF0
        mov dl, byte ptr [edi + 0x154]
        mov ecx, esi
        push edx
        push 0x8
        call ext_0072CEF0
        mov al, byte ptr [edi + 0x155]
        mov ecx, esi
        push eax
        push 0x9
        call ext_0072CEF0
        mov cl, byte ptr [edi + 0x156]
        push ecx
        push 0xa
        mov ecx, esi
        call ext_0072CEF0
        mov dl, byte ptr [edi + 0x14f]
        mov ecx, esi
        push edx
        push 0xc
        call ext_0072CEF0
        pop edi
        pop esi
        pop ebx
        ret 0x4
    }
}

// [0x006D5300] sub_006D5300 (238 bytes)
extern "C" void ext_006B9D70();
extern "C" void ext_006BADB0();
extern "C" void ext_006D57D0();
extern "C" void ext_006E7440();
extern "C" void ext_006E7460();

// Naked: SEH-guarded frame with a local string object at [esp+0x10]; arg1 is
// reused as a match counter and arg2 is the target index (ret 8).
extern "C" __declspec(naked) void __fastcall fn_006D5300(void* self) {
    __asm {
        push -1
        push 0x8bcb18
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x4c
        mov eax, dword ptr [esp + 0x5c]
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        push eax
        lea ecx, [esp + 0x14]
        push 0xaa86ec
        push ecx
        call ext_006D57D0
        add esp, 0xc
        mov eax, dword ptr [edi + 0x64]
        xor ebp, ebp
        cmp eax, ebp
        mov dword ptr [esp + 0x64], ebp
        mov dword ptr [esp + 0x6c], ebp
        jle short L_53A4
    L_5346:
        mov edx, dword ptr [edi + 0x74]
        lea ecx, [esp + 0x10]
        mov ebx, dword ptr [edx + 4*ebp]
        call ext_006E7460
        mov ecx, ebx
        mov esi, eax
        call ext_006BADB0
    L_535E:
        mov dl, byte ptr [eax]
        mov cl, dl
        cmp dl, byte ptr [esi]
        jne short L_5382
        test cl, cl
        je short L_537E
        mov dl, byte ptr [eax + 0x1]
        mov cl, dl
        cmp dl, byte ptr [esi + 0x1]
        jne short L_5382
        add eax, 0x2
        add esi, 0x2
        test cl, cl
        jne short L_535E
    L_537E:
        xor eax, eax
        jmp short L_5387
    L_5382:
        sbb eax, eax
        sbb eax, -1
    L_5387:
        test eax, eax
        jne short L_539C
        mov eax, dword ptr [esp + 0x6c]
        mov ecx, dword ptr [esp + 0x70]
        cmp eax, ecx
        je short L_53D9
        inc eax
        mov dword ptr [esp + 0x6c], eax
    L_539C:
        mov eax, dword ptr [edi + 0x64]
        inc ebp
        cmp ebp, eax
        jl short L_5346
    L_53A4:
        push 0x0
        lea ecx, [edi + 0x1c4]
        call ext_006E7440
        lea ecx, [esp + 0x10]
        mov dword ptr [esp + 0x64], -1
        call ext_006B9D70
        xor eax, eax
    L_53C4:
        mov ecx, dword ptr [esp + 0x5c]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0x58
        ret 0x8
    L_53D9:
        lea ecx, [esp + 0x10]
        mov dword ptr [esp + 0x64], -1
        call ext_006B9D70
        mov eax, ebx
        jmp short L_53C4
    }
}

// [0x006D53F0] sub_006D53F0 (247 bytes)
extern "C" void ext_006B9D70();
extern "C" void ext_006BADB0();
extern "C" void ext_006D57D0();
extern "C" void ext_006E7440();
extern "C" void ext_006E7460();

extern "C" __declspec(naked) void __fastcall fn_006D53F0(void* self) {
    __asm {
        push -1
        push 0x8bcb18
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x4c
        mov eax, dword ptr [esp + 0x5c]
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        push eax
        lea ecx, [esp + 0x14]
        push 0xaa86f8
        push ecx
        call ext_006D57D0
        add esp, 0xc
        mov eax, dword ptr [edi + 0x94]
        xor ebp, ebp
        cmp eax, ebp
        mov dword ptr [esp + 0x64], ebp
        mov dword ptr [esp + 0x6c], ebp
        jle short L_549D
    L_5439:
        mov edx, dword ptr [edi + 0xa4]
        lea ecx, [esp + 0x10]
        mov ebx, dword ptr [edx + 4*ebp]
        call ext_006E7460
        mov ecx, ebx
        mov esi, eax
        call ext_006BADB0
    L_5454:
        mov dl, byte ptr [eax]
        mov cl, dl
        cmp dl, byte ptr [esi]
        jne short L_5478
        test cl, cl
        je short L_5474
        mov dl, byte ptr [eax + 0x1]
        mov cl, dl
        cmp dl, byte ptr [esi + 0x1]
        jne short L_5478
        add eax, 0x2
        add esi, 0x2
        test cl, cl
        jne short L_5454
    L_5474:
        xor eax, eax
        jmp short L_547D
    L_5478:
        sbb eax, eax
        sbb eax, -1
    L_547D:
        test eax, eax
        jne short L_5492
        mov eax, dword ptr [esp + 0x6c]
        mov ecx, dword ptr [esp + 0x70]
        cmp eax, ecx
        je short L_54D2
        inc eax
        mov dword ptr [esp + 0x6c], eax
    L_5492:
        mov eax, dword ptr [edi + 0x94]
        inc ebp
        cmp ebp, eax
        jl short L_5439
    L_549D:
        push 0x0
        lea ecx, [edi + 0x1c4]
        call ext_006E7440
        lea ecx, [esp + 0x10]
        mov dword ptr [esp + 0x64], -1
        call ext_006B9D70
        xor eax, eax
    L_54BD:
        mov ecx, dword ptr [esp + 0x5c]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0x58
        ret 0x8
    L_54D2:
        lea ecx, [esp + 0x10]
        mov dword ptr [esp + 0x64], -1
        call ext_006B9D70
        mov eax, ebx
        jmp short L_54BD
    }
}

// [0x006D54F0] sub_006D54F0 (247 bytes)
extern "C" void ext_006B9D70();
extern "C" void ext_006BADB0();
extern "C" void ext_006D57D0();
extern "C" void ext_006E7440();
extern "C" void ext_006E7460();

// SEH-guarded frame with a local string object at [esp+0x10]; loops over a
// pointer array at [self+0xbc] (count at [self+0xac]) comparing strings, and
// bumps a counter at [esp+0x6c] (capped by [esp+0x70]). ret 8.
extern "C" __declspec(naked) void __fastcall fn_006D54F0(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push -1
        push 0x8bcb18
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x4c
        mov eax, dword ptr [esp + 0x5c]
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        push eax
        lea ecx, [esp + 0x14]
        push 0xaa86e4
        push ecx
        call ext_006D57D0
        add esp, 0xc
        mov eax, dword ptr [edi + 0xac]
        xor ebp, ebp
        cmp eax, ebp
        mov dword ptr [esp + 0x64], ebp
        mov dword ptr [esp + 0x6c], ebp
        jle short L_after_loop
    L_loop_top:
        mov edx, dword ptr [edi + 0xbc]
        lea ecx, [esp + 0x10]
        mov ebx, dword ptr [edx + 4*ebp]
        call ext_006E7460
        mov ecx, ebx
        mov esi, eax
        call ext_006BADB0
    L_cmp_top:
        mov dl, byte ptr [eax]
        mov cl, dl
        cmp dl, byte ptr [esi]
        jne short L_cmp_diff
        test cl, cl
        je short L_cmp_eq
        mov dl, byte ptr [eax + 0x1]
        mov cl, dl
        cmp dl, byte ptr [esi + 0x1]
        jne short L_cmp_diff
        add eax, 0x2
        add esi, 0x2
        test cl, cl
        jne short L_cmp_top
    L_cmp_eq:
        xor eax, eax
        jmp short L_cmp_done
    L_cmp_diff:
        sbb eax, eax
        sbb eax, -1
    L_cmp_done:
        test eax, eax
        jne short L_next
        mov eax, dword ptr [esp + 0x6c]
        mov ecx, dword ptr [esp + 0x70]
        cmp eax, ecx
        je short L_found
        inc eax
        mov dword ptr [esp + 0x6c], eax
    L_next:
        mov eax, dword ptr [edi + 0xac]
        inc ebp
        cmp ebp, eax
        jl short L_loop_top
    L_after_loop:
        push 0x0
        lea ecx, [edi + 0x1c4]
        call ext_006E7440
        lea ecx, [esp + 0x10]
        mov dword ptr [esp + 0x64], 0xffffffff
        call ext_006B9D70
        xor eax, eax
    L_epilogue:
        mov ecx, dword ptr [esp + 0x5c]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0x58
        ret 0x8
    L_found:
        lea ecx, [esp + 0x10]
        mov dword ptr [esp + 0x64], 0xffffffff
        call ext_006B9D70
        mov eax, ebx
        jmp short L_epilogue
    }
}

// [0x006DC7E0] sub_006DC7E0 (256 bytes)
extern "C" void ext_006C9360();
extern "C" void ext_006DC480();
extern "C" void ext_006E5150();
extern "C" __declspec(naked) void __fastcall fn_006DC7E0(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        sub esp, 0x18
        push ebx
        mov dword ptr [esp + 0x4], 0xffffffff
        mov dword ptr [esp + 0x8], 0x7fffffff
        mov dword ptr [esp + 0xc], 0x1
        mov dword ptr [esp + 0x10], 0x80000000
        xor bl, bl
        call ext_006DC480
        mov ecx, eax
        call ext_006C9360
        test eax, eax
        je L_006DC8D1
        lea ecx, [esp + 0xc]
        lea edx, [esp + 0x4]
        push ecx
        push edx
        mov ecx, eax
        call ext_006E5150
        test al, al
        je L_006DC8D3
        mov ecx, dword ptr [esp + 0x20]
        mov edx, dword ptr [esp + 0x8]
        push esi
        mov esi, dword ptr [esp + 0x8]
        push edi
        mov edi, dword ptr [ecx]
        mov dword ptr [esp + 0xc], edi
        mov edi, dword ptr [ecx + 0x4]
        cmp edi, edx
        mov dword ptr [esp + 0x1c], esi
        mov dword ptr [esp + 0x20], edx
        mov dword ptr [esp + 0x10], edi
        jg L_006DC868
        jl L_006DC862
        mov edx, dword ptr [ecx]
        cmp edx, esi
        jae L_006DC868
    L_006DC862:
        lea edx, [esp + 0xc]
        jmp L_006DC86C
    L_006DC868:
        lea edx, [esp + 0x1c]
    L_006DC86C:
        mov esi, dword ptr [edx]
        mov edx, dword ptr [edx + 0x4]
        mov dword ptr [ecx], esi
        mov dword ptr [ecx + 0x4], edx
        mov ecx, dword ptr [esp + 0x2c]
        mov edx, dword ptr [esp + 0x18]
        mov esi, dword ptr [esp + 0x14]
        mov dword ptr [esp + 0x10], edx
        mov edi, dword ptr [ecx]
        mov dword ptr [esp + 0xc], esi
        mov dword ptr [esp + 0x1c], edi
        mov edi, dword ptr [ecx + 0x4]
        cmp edi, edx
        mov dword ptr [esp + 0x20], edi
        jl L_006DC8BA
        jg L_006DC8A3
        mov edx, dword ptr [ecx]
        cmp edx, esi
        jbe L_006DC8BA
    L_006DC8A3:
        lea edx, [esp + 0x1c]
        pop edi
        mov esi, dword ptr [edx]
        mov edx, dword ptr [edx + 0x4]
        mov dword ptr [ecx], esi
        pop esi
        mov dword ptr [ecx + 0x4], edx
        pop ebx
        add esp, 0x18
        ret 0x8
    L_006DC8BA:
        lea edx, [esp + 0xc]
        pop edi
        mov esi, dword ptr [edx]
        mov edx, dword ptr [edx + 0x4]
        mov dword ptr [ecx], esi
        pop esi
        mov dword ptr [ecx + 0x4], edx
        pop ebx
        add esp, 0x18
        ret 0x8
    L_006DC8D1:
        mov al, bl
    L_006DC8D3:
        pop ebx
        add esp, 0x18
        ret 0x8
        nop
        nop
        nop
        nop
        nop
        nop
    }
}

// [0x006D6250] sub_006D6250 (256 bytes)
extern "C" void ext_006B9960();
extern "C" void ext_006E7440();
extern "C" void ext_0072D520();
extern "C" void ext_0072D640();
extern "C" void ext_0072DEF0();
extern "C" void ext_00755020();

extern "C" __declspec(naked) void __fastcall fn_006D6250(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        push -1
        push 0x008b90eb
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x1d0
        push esi
        mov esi, ecx
        push esi
        lea ecx, [esp + 0x8]
        mov eax, dword ptr [esi + 0xa8]
        push eax
        call ext_0072D520
        mov eax, dword ptr [esp + 0x1e8]
        mov dword ptr [esp + 0x1dc], 0
        test eax, eax
        jne L_nonzero
        push 0xa
        jmp L_common
L_nonzero:
        mov ecx, dword ptr [esp + 0x1ec]
        test ecx, ecx
        jne L_else
        push 0x4
L_common:
        lea ecx, [esi + 0x4]
        call ext_006E7440
        lea ecx, [esp + 0x4]
        mov dword ptr [esp + 0x1dc], 0xffffffff
        call ext_0072D640
        xor al, al
        jmp L_epilogue
L_else:
        push ebx
        push edi
        push ecx
        mov ecx, dword ptr [esp + 0x1f0]
        push eax
        push ecx
        lea ecx, [esp + 0x18]
        mov dword ptr [esi + 0xac], eax
        call ext_0072DEF0
        lea edi, [esi + 0xb0]
        mov bl, al
        mov ecx, edi
        call ext_006B9960
        push edi
        lea ecx, [esp + 0x10]
        call ext_00755020
        test bl, bl
        mov dword ptr [esi + 0xac], 0
        jne L_skip7
        push 0x7
        lea ecx, [esi + 0x4]
        call ext_006E7440
L_skip7:
        lea ecx, [esp + 0xc]
        mov dword ptr [esp + 0x1e4], 0xffffffff
        call ext_0072D640
        mov al, bl
        pop edi
        pop ebx
L_epilogue:
        mov ecx, dword ptr [esp + 0x1d4]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x1dc
        ret 0xc
    }
}

// [0x006D8730] sub_006D8730 (256 bytes)
extern "C" void ext_006A5C62();
extern "C" void ext_006D2130();
extern "C" void ext_006D2250();
extern "C" void ext_006D2300();
extern "C" void ext_006EF800();
extern "C" void ext_006FDE80();
extern "C" void ext_006FDF70();
extern "C" void ext_00715550();
extern "C" void ext_0078D720();

extern "C" __declspec(naked) void __fastcall fn_006D8730(void* self, int edx_unused, int a1) {
    __asm {
        push -1
        push 0x8b9326
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push ebx
        push ebp
        push esi
        xor ebp, ebp
        push edi
        mov esi, ecx
        push ebp
        call ext_006FDF70
        mov ebx, eax
        cmp ebx, ebp
        jne L_876B
        mov ecx, esi
        call ext_006FDE80
        push eax
        mov ecx, esi
        call ext_006FDF70
        mov ebx, eax
L_876B:
        mov ecx, ebx
        call ext_00715550
        mov esi, eax
        cmp esi, ebp
        jne L_87E0
        push 0x48
        call ext_006A5C62
        mov esi, eax
        add esp, 4
        mov dword ptr [esp + 0x10], esi
        cmp esi, ebp
        mov dword ptr [esp + 0x1c], ebp
        je L_87CE
        lea edi, [esi + 0x8]
        push 4
        push 0x10
        mov ecx, edi
        mov dword ptr [esi], ebp
        mov dword ptr [esi + 0x4], ebp
        call ext_006D2130
        lea eax, [edi + 0x10]
        mov dword ptr [edi + 0x14], eax
        push 0x10
        lea ecx, [esi + 0x20]
        mov byte ptr [esp + 0x20], 1
        call ext_0078D720
        mov dword ptr [esi + 0x40], ebp
        mov dword ptr [esi + 0x38], ebp
        mov dword ptr [esi + 0x4], 2
        mov dword ptr [esi + 0x44], 0x3ff00000
        jmp L_87D0
L_87CE:
        xor esi, esi
L_87D0:
        push esi
        mov ecx, ebx
        mov dword ptr [esp + 0x20], 0xffffffff
        call ext_006EF800
L_87E0:
        lea edi, [esi + 0x20]
        mov dword ptr [esi + 0x4], 2
        mov ecx, edi
        call ext_006D2250
        cmp dword ptr [esp + 0x24], 3
        je L_8809
        push 1
        mov ecx, edi
        mov dword ptr [esi], 4
        call ext_006D2300
        jmp L_880F
L_8809:
        mov dword ptr [esi], 3
L_880F:
        mov ecx, dword ptr [esp + 0x14]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 0x4
    }
}

// [0x006D8580] sub_006D8580 (256 bytes)
extern "C" void ext_006BC380();
extern "C" void ext_006D2130();
extern "C" void ext_006D2250();
extern "C" void ext_006D2300();
extern "C" void ext_006FDE80();
extern "C" void ext_0078D720();
extern "C" void ext_006FC9B0();
extern "C" __declspec(naked) void __fastcall fn_006D8580(void* self) {
    __asm {
        push -1
        push 0x8b9326
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        mov ebp, ecx
        push edi
        call ext_006FDF70
        mov ebx, eax
        cmp ebx, edi
        jne L_6D85BB
        mov ecx, ebp
        call ext_006FDE80
        push eax
        mov ecx, ebp
        call ext_006FDF70
        mov ebx, eax
    L_6D85BB:
        mov ecx, ebx
        call ext_006BC380
        mov esi, eax
        cmp esi, edi
        jne L_6D861C
        push 0x38
        call ext_006A5C62
        mov esi, eax
        add esp, 4
        mov dword ptr [esp + 0x10], esi
        cmp esi, edi
        mov dword ptr [esp + 0x1c], edi
        je L_6D860A
        mov dword ptr [esi], edi
        mov dword ptr [esi + 0x4], edi
        lea edi, [esi + 0x8]
        push 0x4
        push 0x10
        mov ecx, edi
        call ext_006D2130
        lea eax, [edi + 0x10]
        mov dword ptr [edi + 0x14], eax
        push 0x10
        lea ecx, [esi + 0x20]
        mov byte ptr [esp + 0x20], 0x1
        call ext_0078D720
        jmp L_6D860C
    L_6D860A:
        xor esi, esi
    L_6D860C:
        push esi
        mov ecx, ebx
        mov dword ptr [esp + 0x20], 0xffffffff
        call ext_006FC9B0
    L_6D861C:
        lea edi, [esi + 0x20]
        mov dword ptr [esi + 0x4], 0x2
        mov ecx, edi
        call ext_006D2250
        mov eax, dword ptr [esp + 0x24]
        dec eax
        je L_6D864B
        sub eax, 0x2
        je L_6D8643
        mov dword ptr [esi], 0x4
        push 0x1
        jmp L_6D865C
    L_6D8643:
        mov dword ptr [esi], 0x3
        jmp L_6D8663
    L_6D864B:
        mov eax, dword ptr [ebp + 0x28]
        test eax, eax
        je L_6D8663
        mov dword ptr [esi], 0x1
        mov ecx, dword ptr [ebp + 0x28]
        push ecx
    L_6D865C:
        mov ecx, edi
        call ext_006D2300
    L_6D8663:
        mov ecx, dword ptr [esp + 0x14]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 0x4
    }
}

// [0x006D6EF0] sub_006D6EF0 (256 bytes)
extern "C" void ext_006B9960();
extern "C" void ext_006E7440();
extern "C" void ext_00755020();
extern "C" void ext_007554F0();
extern "C" void ext_007555B0();
extern "C" void ext_007558D0();

extern "C" __declspec(naked) void __fastcall fn_006D6EF0(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        push -1
        push 0x008b919b
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0xec
        push esi
        mov esi, ecx
        push esi
        lea ecx, [esp + 0x8]
        mov eax, dword ptr [esi + 0xa8]
        push eax
        call ext_007554F0
        mov eax, dword ptr [esp + 0x104]
        mov dword ptr [esp + 0xf8], 0x0
        test eax, eax
        jne short L_nz
        push 0xa
        jmp short L_common
    L_nz:
        mov ecx, dword ptr [esp + 0x108]
        test ecx, ecx
        jne short L_else
        push 0x4
    L_common:
        lea ecx, [esi + 0x4]
        call ext_006E7440
        lea ecx, [esp + 0x4]
        mov dword ptr [esp + 0xf8], 0xffffffff
        call ext_007555B0
        xor al, al
        jmp short L_end
    L_else:
        push ebx
        push edi
        push ecx
        mov ecx, dword ptr [esp + 0x10c]
        push eax
        push ecx
        lea ecx, [esp + 0x18]
        mov dword ptr [esi + 0xac], eax
        call ext_007558D0
        lea edi, [esi + 0xb0]
        mov bl, al
        mov ecx, edi
        call ext_006B9960
        push edi
        lea ecx, [esp + 0x10]
        call ext_00755020
        test bl, bl
        mov dword ptr [esi + 0xac], 0x0
        jne short L_skip
        push 0x5
        lea ecx, [esi + 0x4]
        call ext_006E7440
    L_skip:
        lea ecx, [esp + 0xc]
        mov dword ptr [esp + 0x100], 0xffffffff
        call ext_007555B0
        mov al, bl
        pop edi
        pop ebx
    L_end:
        mov ecx, dword ptr [esp + 0xf0]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0xf8
        ret 0xc
    }
}

// [0x006D7990] sub_006D7990 (256 bytes)
extern "C" void ext_006FDE80();
extern "C" void ext_006FC9A0();
extern "C" void ext_006D2300();
extern "C" __declspec(naked) void __fastcall fn_006D7990(void* self, int edx_unused, int a1) {
    __asm {
        push -1
        push 0x8b9326
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        mov ebp, ecx
        push edi
        call ext_006FDF70
        mov ebx, eax
        cmp ebx, edi
        jne L_6D79D3
        mov ecx, ebp
        call ext_006FDE80
        push eax
        mov ecx, ebp
        call ext_006FDF70
        mov ebx, eax
        cmp ebx, edi
        je L_6D7A78
L_6D79D3:
        mov ecx, ebx
        call ext_006B99C0
        mov esi, eax
        cmp esi, edi
        jne L_6D7A42
        push 0x38
        call ext_006A5C62
        mov esi, eax
        add esp, 4
        mov dword ptr [esp + 0x10], esi
        cmp esi, edi
        mov dword ptr [esp + 0x1c], edi
        je L_6D7A2C
        mov dword ptr [esi], edi
        mov dword ptr [esi + 0x4], edi
        lea edi, [esi + 0x8]
        push 0x20
        push 0x10
        mov ecx, edi
        call ext_006D2130
        lea eax, [edi + 0x10]
        mov dword ptr [edi + 0x14], eax
        lea edi, [esi + 0x20]
        push 0x4
        push 0x10
        mov ecx, edi
        mov byte ptr [esp + 0x24], 0x1
        call ext_006D2130
        lea ecx, [edi + 0x10]
        mov dword ptr [edi + 0x14], ecx
        jmp L_6D7A2E
L_6D7A2C:
        xor esi, esi
L_6D7A2E:
        test esi, esi
        mov dword ptr [esp + 0x1c], 0xffffffff
        je L_6D7A78
        push esi
        mov ecx, ebx
        call ext_006FC9A0
L_6D7A42:
        mov eax, dword ptr [esp + 0x24]
        mov edi, dword ptr [ebp + 0x28]
        test eax, eax
        mov dword ptr [esi], 0x1
        jle L_6D7A5F
        cmp eax, edi
        je L_6D7A5F
        mov edi, eax
        mov dword ptr [esi], 0x2
L_6D7A5F:
        mov dword ptr [esi + 0x4], 0x0
        add esi, 0x8
        mov ecx, esi
        call ext_006D2250
        push edi
        mov ecx, esi
        call ext_006D2300
L_6D7A78:
        mov ecx, dword ptr [esp + 0x14]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 0x4
    }
}

// [0x006DC8E0] sub_006DC8E0 (256 bytes)
extern "C" void ext_006C9360();
extern "C" void ext_006DC460();
extern "C" void ext_006DC480();
extern "C" void ext_006DD300();
extern "C" void ext_006DD6C0();
extern "C" void ext_006DE7C0();
extern "C" void ext_006E6DE0();
extern "C" void ext_006E6E60();
extern "C" void ext_006E7460();

// SEH-guarded (try/__finally style) thiscall with one stack arg (ret 4). Byte-for-byte reproduction
// of the prolog/epilog and call sequence; the 10 trailing nops pad the function to its 256-byte extent.
extern "C" __declspec(naked) void __fastcall fn_006DC8E0(void* self, int edx_unused, int a1) {
    __asm {
        push -1
        push 0x8bcb18
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x50
        push esi
        push edi
        mov edi, dword ptr [esp + 0x68]
        sub esp, 0x4c
        mov esi, ecx
        mov eax, esp
        mov dword ptr [esp + 0x54], esp
        push eax
        mov ecx, edi
        call ext_006E6E60
        lea ecx, [esp + 0x58]
        push ecx
        call ext_006DD6C0
        add esp, 0x50
        test edi, edi
        mov dword ptr [esp + 0x60], 0x0
        je L_end_006DC8E0
        push 0x1
        mov ecx, edi
        call ext_006E6DE0
        test al, al
        je short L_end_006DC8E0
        mov ecx, esi
        call ext_006DC480
        test eax, eax
        je short L_end_006DC8E0
        mov ecx, esi
        call ext_006DC480
        mov ecx, eax
        call ext_006C9360
        test eax, eax
        je short L_end_006DC8E0
        lea ecx, [esp + 0xc]
        call ext_006E7460
        push eax
        mov ecx, esi
        call ext_006DC480
        mov ecx, eax
        call ext_006C9360
        mov ecx, eax
        call ext_006DE7C0
        test eax, eax
        je short L_skip2_006DC8E0
        push edi
        push eax
        call ext_006DD300
        add esp, 0x8
    L_skip2_006DC8E0:
        lea ecx, [esp + 0xc]
        call ext_006E7460
        push eax
        mov ecx, esi
        call ext_006DC460
        mov ecx, eax
        call ext_006C9360
        mov ecx, eax
        call ext_006DE7C0
        test eax, eax
        je short L_end_006DC8E0
        push edi
        push eax
        call ext_006DD300
        add esp, 0x8
    L_end_006DC8E0:
        lea ecx, [esp + 0xc]
        mov dword ptr [esp + 0x60], 0xffffffff
        call ext_006B9D70
        mov ecx, dword ptr [esp + 0x58]
        pop edi
        mov dword ptr fs:[0x0], ecx
        pop esi
        add esp, 0x5c
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
    }
}

// [0x006DDDB0] sub_006DDDB0 (266 bytes)
extern "C" void ext_006D2130();
extern "C" void ext_006DE3F0();
extern "C" void ext_006DEBA0();
extern "C" __declspec(naked) void __fastcall fn_006DDDB0(void* self, int edx_unused, void* in) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -0x8
        push -0x1
        push 0x8b950b
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push ebx
        push esi
        mov esi, ecx
        push edi
        push 0x4
        push 0x10
        lea edi, [esi + 0x20]
        mov dword ptr [esp + 0x14], esi
        mov ecx, edi
        call ext_006D2130
        lea eax, [edi + 0x10]
        mov dword ptr [edi + 0x14], eax
        mov edi, dword ptr [ebp + 0x8]
        xor ebx, ebx
        mov dword ptr [esi + 0x90], ebx
        mov dword ptr [esi + 0x94], ebx
        mov dword ptr [esi], 0x993c30
        mov dword ptr [esi + 0x1c], ebx
        mov dword ptr [esi + 0x14], ebx
        mov ecx, dword ptr [edi + 0x14]
        push ecx
        mov ecx, esi
        mov dword ptr [esp + 0x1c], ebx
        call ext_006DE3F0
        mov dword ptr [esi + 0x50], ebx
        mov dword ptr [esi + 0x98], ebx
        mov dword ptr [esi + 0xc], ebx
        mov dword ptr [esi + 0x8], ebx
        mov dword ptr [esi + 0x38], ebx
        mov dword ptr [esi + 0x48], edi
        mov dword ptr [esi + 0x40], ebx
        mov dword ptr [esi + 0x44], esi
        mov dword ptr [esi + 0x4c], ebx
        mov dword ptr [esi + 0x3c], ebx
        mov dword ptr [esi + 0x18], 0x60
        mov dword ptr [esi + 0x5c], ebx
        mov dword ptr [esi + 0x9c], ebx
        mov dword ptr [esi + 0x54], ebx
        mov edx, dword ptr [edi + 0x54]
        push ebx
        push edx
        mov ecx, esi
        call ext_006DEBA0
        mov dword ptr [esi + 0x58], ebx
        mov eax, dword ptr [edi + 0x60]
        mov dword ptr [esi + 0x60], eax
        mov cl, byte ptr [edi + 0x10]
        mov byte ptr [esi + 0x10], cl
        mov edx, dword ptr [edi + 0x90]
        mov dword ptr [esi + 0x90], edx
        mov eax, dword ptr [edi + 0x94]
        mov dword ptr [esi + 0x94], eax
        mov ecx, dword ptr [edi + 0x64]
        mov dword ptr [esi + 0x64], ecx
        mov edx, dword ptr [edi + 0x68]
        mov dword ptr [esi + 0x68], edx
        lea eax, [esi + 0x70]
        sub edi, esi
        mov ecx, 0x4
    copy_loop:
        mov edx, dword ptr [edi + eax]
        mov dword ptr [eax], edx
        mov edx, dword ptr [edi + eax + 0x4]
        mov dword ptr [eax + 0x4], edx
        add eax, 0x8
        dec ecx
        jne copy_loop
        mov ecx, dword ptr [esp + 0x10]
        mov eax, esi
        pop edi
        pop esi
        mov dword ptr fs:[0x0], ecx
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0x4
    }
}

// [0x006D56C0] sub_006D56C0 (262 bytes)
extern "C" void ext_006B9D70();
extern "C" void ext_006BA7C0();
extern "C" void ext_006BADB0();
extern "C" void ext_006E6E60();
extern "C" void ext_006E7440();
extern "C" int mem_008BCB18;
extern "C" __declspec(naked) void __fastcall fn_006D56C0(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push offset mem_008BCB18
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x4c
        push ebx
        push ebp
        mov ebp, ecx
        push esi
        push edi
        xor edi, edi
        mov eax, dword ptr [ebp + 0xdc]
        test eax, eax
        jle L_end
    L_top:
        mov eax, dword ptr [ebp + 0xec]
        lea ecx, [esp + 0x10]
        push ecx
        mov esi, dword ptr [eax + 4*edi]
        mov ecx, esi
        call ext_006E6E60
        mov edx, dword ptr [esp + 0x6c]
        mov ecx, eax
        push edx
        mov dword ptr [esp + 0x68], 0
        call ext_006BA7C0
        lea ecx, [esp + 0x10]
        mov bl, al
        mov dword ptr [esp + 0x64], 0xffffffff
        call ext_006B9D70
        test bl, bl
        jne L_found
        mov eax, dword ptr [ebp + 0xdc]
        inc edi
        cmp edi, eax
        jl L_top
    L_end:
        xor eax, eax
    L_ret:
        mov ecx, dword ptr [esp + 0x5c]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x58
        ret 4
    L_found:
        mov eax, esi
        jmp L_ret
        push ebx
        push ebp
        mov ebp, ecx
        push esi
        push edi
        xor edi, edi
        mov eax, dword ptr [ebp + 0x124]
        xor ebx, ebx
        test eax, eax
        jle L2_end
    L2_top:
        mov eax, dword ptr [ebp + 0x134]
        mov esi, dword ptr [esp + 0x14]
        mov edi, dword ptr [eax + 4*ebx]
        mov ecx, edi
        call ext_006BADB0
    L2_cmp:
        mov dl, byte ptr [eax]
        mov cl, dl
        cmp dl, byte ptr [esi]
        jne L2_ne
        test cl, cl
        je L2_eq
        mov dl, byte ptr [eax + 1]
        mov cl, dl
        cmp dl, byte ptr [esi + 1]
        jne L2_ne
        add eax, 2
        add esi, 2
        test cl, cl
        jne L2_cmp
    L2_eq:
        xor eax, eax
        jmp L2_t
    L2_ne:
        sbb eax, eax
        sbb eax, -1
    L2_t:
        test eax, eax
        je L2_done
        mov eax, dword ptr [ebp + 0x124]
        inc ebx
        cmp ebx, eax
        jl L2_top
    L2_end:
        push 0
        lea ecx, [ebp + 0x1c4]
        call ext_006E7440
    L2_done:
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
    }
}

// [0x006DBB60] sub_006DBB60 (272 bytes)
extern "C" void ext_006A6F00();
extern "C" void ext_006A7310();

// 64-bit arithmetic chain. Args: x (int64 on stack), c..g (int* out slots); callee-cleans nothing (ret 0).
// Returns int64 in edx:eax. Each step: r = ext_006A7310(acc, K); *slot = lo(r); acc += ext_006A6F00(sext(lo(r)), K2).
extern "C" __declspec(naked) __int64 __cdecl fn_006DBB60(__int64 x, int* c, int* d, int* e, int* f, int* g) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        push edi
        mov edi, dword ptr [esp + 0x10]
        test edi, edi
        jg L_pos_006DBB60
        jl L_neg_006DBB60
        test esi, esi
        jae L_pos_006DBB60
L_neg_006DBB60:
        mov eax, 1
        jmp L_join_006DBB60
L_pos_006DBB60:
        xor eax, eax
L_join_006DBB60:
        cdq
        neg eax
        adc edx, 0
        and eax, 0x82148c3f
        neg edx
        mov ecx, esi
        and edx, 0x975f
        sub ecx, eax
        mov eax, edi
        sbb eax, edx
        push 0x975f
        push 0x82148c40
        push eax
        push ecx
        call ext_006A7310
        mov ecx, dword ptr [esp + 0x14]
        push 0xffff68a0
        push 0x7deb73c0
        mov dword ptr [ecx], eax
        cdq
        push edx
        push eax
        call ext_006A6F00
        add esi, eax
        push 0x285
        adc edi, edx
        push 0xdbc49bf0
        push edi
        push esi
        call ext_006A7310
        mov edx, dword ptr [esp + 0x18]
        push 0xfffffd7a
        push 0x243b6410
        mov dword ptr [edx], eax
        cdq
        push edx
        push eax
        call ext_006A6F00
        add esi, eax
        push 0xa
        adc edi, edx
        push 0xc3a9ad44
        push edi
        push esi
        call ext_006A7310
        mov ecx, dword ptr [esp + 0x1c]
        push -0xb
        push 0x3c5652bc
        mov dword ptr [ecx], eax
        cdq
        push edx
        push eax
        call ext_006A6F00
        add esi, eax
        push 0x0
        adc edi, edx
        push 0x5bdafd3e
        push edi
        push esi
        call ext_006A7310
        mov edx, dword ptr [esp + 0x20]
        push -0x1
        push 0xa42502c2
        mov dword ptr [edx], eax
        cdq
        push edx
        push eax
        call ext_006A6F00
        add esi, eax
        push 0x0
        adc edi, edx
        push 0x2ded7e9f
        push edi
        push esi
        call ext_006A7310
        mov ecx, dword ptr [esp + 0x24]
        push 0x0
        push 0x2ded7e9f
        mov dword ptr [ecx], eax
        cdq
        push edx
        push eax
        call ext_006A6F00
        sub esi, eax
        sbb edi, edx
        mov eax, esi
        mov edx, edi
        pop edi
        pop esi
        ret
    }
}

// [0x006D8830] sub_006D8830 (272 bytes)
extern "C" void ext_006FDF70();
extern "C" void ext_006FDE80();
extern "C" void ext_006FC930();
extern "C" void ext_006FC9D0();
extern "C" void ext_006A5C62();
extern "C" void ext_006D2130();
extern "C" void ext_006D2250();
extern "C" void ext_0078D720();

extern "C" __declspec(naked) void __fastcall fn_006D8830(void* self, int edx_unused, int a1) {
    __asm {
        push -1
        push 0x008b9326
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push ebx
        push ebp
        xor ebp, ebp
        push esi
        mov esi, ecx
        push ebp
        call ext_006FDF70
        mov ebx, eax
        cmp ebx, ebp
        jne L_6D886A
        mov ecx, esi
        call ext_006FDE80
        push eax
        mov ecx, esi
        call ext_006FDF70
        mov ebx, eax
L_6D886A:
        mov ecx, ebx
        call ext_006FC930
        mov esi, eax
        cmp esi, ebp
        jne L_6D88CD
        push 0x38
        call ext_006A5C62
        mov esi, eax
        add esp, 0x4
        mov dword ptr [esp + 0xc], esi
        cmp esi, ebp
        mov dword ptr [esp + 0x18], ebp
        je L_6D88BB
        push edi
        lea edi, [esi + 0x8]
        push 0x10
        push 0x10
        mov ecx, edi
        mov dword ptr [esi], ebp
        mov dword ptr [esi + 0x4], ebp
        call ext_006D2130
        lea eax, [edi + 0x10]
        mov dword ptr [edi + 0x14], eax
        push 0x10
        lea ecx, [esi + 0x20]
        mov byte ptr [esp + 0x20], 0x1
        call ext_0078D720
        pop edi
        jmp L_6D88BD
L_6D88BB:
        xor esi, esi
L_6D88BD:
        push esi
        mov ecx, ebx
        mov dword ptr [esp + 0x1c], 0xffffffff
        call ext_006FC9D0
L_6D88CD:
        lea ecx, [esi + 0x8]
        call ext_006D2250
        lea ecx, [esi + 0x20]
        call ext_006D2250
        mov eax, dword ptr [esp + 0x20]
        dec eax
        je L_6D8919
        dec eax
        je L_6D88F8
        sub eax, 0x2
        je L_6D88F0
        mov dword ptr [esi], ebp
        jmp L_6D891F
L_6D88F0:
        mov dword ptr [esi], 0x4
        jmp L_6D891F
L_6D88F8:
        mov dword ptr [esi], 0x2
        mov dword ptr [esi + 0x4], 0x2
        pop esi
        pop ebp
        pop ebx
        mov ecx, dword ptr [esp + 0x4]
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 0x4
L_6D8919:
        mov dword ptr [esi], 0x1
L_6D891F:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [esi + 0x4], ebp
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 0x4
    }
}

// [0x006DC020] sub_006DC020 (278 bytes)
extern "C" int mem_00925284;
extern "C" int mem_00B5DB10; extern "C" int mem_00B5DB14; extern "C" int mem_00B5DB18; extern "C" int mem_00B5DB1C;
extern "C" int mem_00B5DB20; extern "C" int mem_00B5DB24; extern "C" int mem_00B5DB28; extern "C" int mem_00B5DB2C;
extern "C" int mem_00B5DB30; extern "C" int mem_00B5DB34; extern "C" int mem_00B5DB38; extern "C" int mem_00B5DB3C;
extern "C" int mem_00B5DB40; extern "C" int mem_00B5DB44; extern "C" int mem_00B5DB48; extern "C" int mem_00B5DB4C;
extern "C" int mem_00B5DB50; extern "C" int mem_00B5DB54; extern "C" int mem_00B5DB58; extern "C" int mem_00B5DB5C;
extern "C" int mem_00B5DB60; extern "C" int mem_00B5DB64; extern "C" int mem_00B5DB68; extern "C" int mem_00B5DB6C;
extern "C" int mem_00B5DB70; extern "C" int mem_00B5DB74; extern "C" int mem_00B5DB78; extern "C" int mem_00B5DB7C;
extern "C" int mem_00B5DB80; extern "C" int mem_00B5DB84; extern "C" int mem_00B5DB88; extern "C" int mem_00B5DB8C;

// Copies the 128-byte block pointed to by *mem_00925284 into the global block at 0xB5DB10 (16 qwords).
extern "C" __declspec(naked) void __fastcall fn_006DC020(void* self) {
    __asm {
        mov eax, dword ptr [mem_00925284]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [mem_00B5DB10], ecx
        mov dword ptr [mem_00B5DB14], edx
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [mem_00B5DB18], ecx
        mov dword ptr [mem_00B5DB1C], edx
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [mem_00B5DB20], ecx
        mov dword ptr [mem_00B5DB24], edx
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [mem_00B5DB28], ecx
        mov dword ptr [mem_00B5DB2C], edx
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [mem_00B5DB30], ecx
        mov dword ptr [mem_00B5DB34], edx
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [mem_00B5DB38], ecx
        mov dword ptr [mem_00B5DB3C], edx
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [mem_00B5DB40], ecx
        mov dword ptr [mem_00B5DB44], edx
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [mem_00B5DB48], ecx
        mov dword ptr [mem_00B5DB4C], edx
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [mem_00B5DB50], ecx
        mov dword ptr [mem_00B5DB54], edx
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [mem_00B5DB58], ecx
        mov dword ptr [mem_00B5DB5C], edx
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [mem_00B5DB60], ecx
        mov dword ptr [mem_00B5DB64], edx
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [mem_00B5DB68], ecx
        mov dword ptr [mem_00B5DB6C], edx
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [mem_00B5DB70], ecx
        mov dword ptr [mem_00B5DB74], edx
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [mem_00B5DB78], ecx
        mov dword ptr [mem_00B5DB7C], edx
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [mem_00B5DB80], ecx
        mov dword ptr [mem_00B5DB84], edx
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [mem_00B5DB88], ecx
        mov dword ptr [mem_00B5DB8C], edx
        ret
    }
}

// [0x006DDAB0] sub_006DDAB0 (278 bytes)
extern "C" int mem_00B5DC90;
extern "C" int mem_00B5DC94;
extern "C" int mem_00B5DC98;
extern "C" int mem_00B5DC9C;
extern "C" int mem_00B5DCA0;
extern "C" int mem_00B5DCA4;
extern "C" int mem_00B5DCA8;
extern "C" int mem_00B5DCAC;
extern "C" int mem_00B5DCB0;
extern "C" int mem_00B5DCB4;
extern "C" int mem_00B5DCB8;
extern "C" int mem_00B5DCBC;
extern "C" int mem_00B5DCC0;
extern "C" int mem_00B5DCC4;
extern "C" int mem_00B5DCC8;
extern "C" int mem_00B5DCCC;
extern "C" int mem_00B5DCD0;
extern "C" int mem_00B5DCD4;
extern "C" int mem_00B5DCD8;
extern "C" int mem_00B5DCDC;
extern "C" int mem_00B5DCE0;
extern "C" int mem_00B5DCE4;
extern "C" int mem_00B5DCE8;
extern "C" int mem_00B5DCEC;
extern "C" int mem_00B5DCF0;
extern "C" int mem_00B5DCF4;
extern "C" int mem_00B5DCF8;
extern "C" int mem_00B5DCFC;
extern "C" int mem_00B5DD00;
extern "C" int mem_00B5DD04;
extern "C" int mem_00B5DD08;
extern "C" int mem_00B5DD0C;

extern "C" __declspec(naked) void __fastcall fn_006DDAB0(void* self) {
    __asm {
        mov eax, dword ptr [mem_00925284]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [mem_00B5DC90], ecx
        mov dword ptr [mem_00B5DC94], edx
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [mem_00B5DC98], ecx
        mov dword ptr [mem_00B5DC9C], edx
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [mem_00B5DCA0], ecx
        mov dword ptr [mem_00B5DCA4], edx
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [mem_00B5DCA8], ecx
        mov dword ptr [mem_00B5DCAC], edx
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [mem_00B5DCB0], ecx
        mov dword ptr [mem_00B5DCB4], edx
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [mem_00B5DCB8], ecx
        mov dword ptr [mem_00B5DCBC], edx
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [mem_00B5DCC0], ecx
        mov dword ptr [mem_00B5DCC4], edx
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [mem_00B5DCC8], ecx
        mov dword ptr [mem_00B5DCCC], edx
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [mem_00B5DCD0], ecx
        mov dword ptr [mem_00B5DCD4], edx
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [mem_00B5DCD8], ecx
        mov dword ptr [mem_00B5DCDC], edx
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [mem_00B5DCE0], ecx
        mov dword ptr [mem_00B5DCE4], edx
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [mem_00B5DCE8], ecx
        mov dword ptr [mem_00B5DCEC], edx
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [mem_00B5DCF0], ecx
        mov dword ptr [mem_00B5DCF4], edx
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [mem_00B5DCF8], ecx
        mov dword ptr [mem_00B5DCFC], edx
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [mem_00B5DD00], ecx
        mov dword ptr [mem_00B5DD04], edx
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [mem_00B5DD08], ecx
        mov dword ptr [mem_00B5DD0C], edx
        ret
    }
}

// [0x006D9280] sub_006D9280 (275 bytes)
// SEH-framed thiscall (ret 4). Switch on self->[0x10] (0..3) through a 4-entry table at 0x006D9394
// that selects one of two call sequences; then calls sub_006E72D0 on the stack arg, walks a
// pointer array (count at local+0, data at local+0x10) deleting each element, and tears down.
extern "C" void ext_006E72A0();
extern "C" void ext_006E72D0();
extern "C" void ext_006D2160();
extern "C" void ext_006D2250();
extern "C" void __cdecl ext_006A5C5C(void* ptr);
extern "C" void ext_006B9D70();

extern "C" __declspec(naked) void __fastcall fn_006D9280(void* self, int edx_unused, int a1) {
    __asm {
        push -1
        push 0x8bbd97
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        push ebp
        push esi
        mov esi, ecx
        push edi
        lea ecx, [esp + 0x10]
        mov dword ptr [esp + 0xc], 0x0
        call ext_006E72A0
        mov eax, dword ptr [esi + 0x10]
        mov edi, 0x1
        cmp eax, 0x3
        mov dword ptr [esp + 0x34], edi
        ja L_006D9314
        jmp dword ptr [4*eax + 0x6d9394]
    L_006D92C6:
        mov eax, dword ptr [esp + 0x14]
        mov edx, dword ptr [esp + 0x10]
        push 0x0
        push 0xaa8cc4
        push eax
        lea ecx, [esp + 0x1c]
        call dword ptr [edx + 0x8]
        mov eax, dword ptr [esp + 0x14]
        mov edx, dword ptr [esp + 0x10]
        push 0x0
        push 0xaa91b4
        push eax
        lea ecx, [esp + 0x1c]
        call dword ptr [edx + 0x8]
        push 0x0
        push 0xaa91ac
        jmp L_006D9304
    L_006D92FD:
        push 0x0
        push 0xaa91b4
    L_006D9304:
        mov eax, dword ptr [esp + 0x1c]
        mov edx, dword ptr [esp + 0x18]
        push eax
        lea ecx, [esp + 0x1c]
        call dword ptr [edx + 0x8]
    L_006D9314:
        mov ebp, dword ptr [esp + 0x3c]
        lea eax, [esp + 0x10]
        push eax
        mov ecx, ebp
        call ext_006E72D0
        mov dword ptr [esp + 0xc], edi
        mov dword ptr [esp + 0x10], 0x993ce0
        mov eax, dword ptr [esp + 0x14]
        xor edi, edi
        test eax, eax
        mov dword ptr [esp + 0x34], 0x2
        jle L_006D9366
    L_006D9342:
        mov ecx, dword ptr [esp + 0x24]
        mov esi, dword ptr [ecx + 4*edi]
        test esi, esi
        je L_006D935D
        mov ecx, esi
        call ext_006B9D70
        push esi
        call ext_006A5C5C
        add esp, 0x4
    L_006D935D:
        mov eax, dword ptr [esp + 0x14]
        inc edi
        cmp edi, eax
        jl L_006D9342
    L_006D9366:
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
        mov dword ptr fs:[0x0], ecx
        add esp, 0x2c
        ret 0x4
    }
}

// [0x006D5B10] sub_006D5B10 (288 bytes)
extern "C" void ext_006B9950();
extern "C" void ext_006B9D70();
extern "C" void ext_006B9D80();
extern "C" void ext_006BA1C0();
extern "C" void ext_006BA220();
extern "C" void ext_006E7460();

extern "C" __declspec(naked) void __fastcall fn_006D5B10(void* self, int edx_unused, int a1, int a2, int a3, int a4) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8b9073
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x98
        push esi
        mov esi, ecx
        push edi
        mov eax, dword ptr [esi + 0xac]
        test eax, eax
        je L_6D5B10_exit
        mov edi, dword ptr [esp + 0xb8]
        test edi, edi
        je L_6D5B10_else
        mov eax, dword ptr [esp + 0xb4]
        lea ecx, [esp + 0x8]
        push eax
        call ext_006B9D80
        push edi
        lea ecx, [esp + 0x58]
        mov dword ptr [esp + 0xac], 0
        call ext_006B9D80
        lea ecx, [esp + 0x54]
        mov byte ptr [esp + 0xa8], 1
        call ext_006B9950
        test al, al
        jne L_6D5B10_after
        push 0xaa8fd0
        lea ecx, [esp + 0xc]
        call ext_006BA220
        lea ecx, [esp + 0x54]
        push ecx
        lea ecx, [esp + 0xc]
        call ext_006BA1C0
    L_6D5B10_after:
        mov edx, dword ptr [esp + 0xbc]
        mov esi, dword ptr [esi + 0xac]
        push edx
        lea ecx, [esp + 0xc]
        call ext_006E7460
        push eax
        mov eax, dword ptr [esp + 0xb8]
        push eax
        call dword ptr [esi + 0xe0]
        add esp, 0xc
        lea ecx, [esp + 0x54]
        mov byte ptr [esp + 0xa8], 0
        call ext_006B9D70
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0xa8], -1
        call ext_006B9D70
        jmp L_6D5B10_exit
    L_6D5B10_else:
        mov ecx, dword ptr [esp + 0xbc]
        mov edx, dword ptr [esp + 0xb4]
        push ecx
        mov ecx, dword ptr [esp + 0xb4]
        push edx
        push ecx
        call dword ptr [eax + 0xe0]
        add esp, 0xc
    L_6D5B10_exit:
        mov ecx, dword ptr [esp + 0xa0]
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0xa4
        ret 0x10
    }
}

// [0x006D76A0] sub_006D76A0 (278 bytes)
extern "C" int mem_00B5D7F8;
extern "C" int mem_00B5D7FC;
extern "C" int mem_00B5D800;
extern "C" int mem_00B5D804;
extern "C" int mem_00B5D808;
extern "C" int mem_00B5D80C;
extern "C" int mem_00B5D810;
extern "C" int mem_00B5D814;
extern "C" int mem_00B5D818;
extern "C" int mem_00B5D81C;
extern "C" int mem_00B5D820;
extern "C" int mem_00B5D824;
extern "C" int mem_00B5D828;
extern "C" int mem_00B5D82C;
extern "C" int mem_00B5D830;
extern "C" int mem_00B5D834;
extern "C" int mem_00B5D838;
extern "C" int mem_00B5D83C;
extern "C" int mem_00B5D840;
extern "C" int mem_00B5D844;
extern "C" int mem_00B5D848;
extern "C" int mem_00B5D84C;
extern "C" int mem_00B5D850;
extern "C" int mem_00B5D854;
extern "C" int mem_00B5D858;
extern "C" int mem_00B5D85C;
extern "C" int mem_00B5D860;
extern "C" int mem_00B5D864;
extern "C" int mem_00B5D868;
extern "C" int mem_00B5D86C;
extern "C" int mem_00B5D870;
extern "C" int mem_00B5D874;
extern "C" __declspec(naked) void __fastcall fn_006D76A0(void* self) {
    __asm {
        mov eax, dword ptr [mem_00925284]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [mem_00B5D7F8], ecx
        mov dword ptr [mem_00B5D7FC], edx
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [mem_00B5D800], ecx
        mov dword ptr [mem_00B5D804], edx
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [mem_00B5D808], ecx
        mov dword ptr [mem_00B5D80C], edx
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [mem_00B5D810], ecx
        mov dword ptr [mem_00B5D814], edx
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [mem_00B5D818], ecx
        mov dword ptr [mem_00B5D81C], edx
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [mem_00B5D820], ecx
        mov dword ptr [mem_00B5D824], edx
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [mem_00B5D828], ecx
        mov dword ptr [mem_00B5D82C], edx
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [mem_00B5D830], ecx
        mov dword ptr [mem_00B5D834], edx
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [mem_00B5D838], ecx
        mov dword ptr [mem_00B5D83C], edx
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [mem_00B5D840], ecx
        mov dword ptr [mem_00B5D844], edx
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [mem_00B5D848], ecx
        mov dword ptr [mem_00B5D84C], edx
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [mem_00B5D850], ecx
        mov dword ptr [mem_00B5D854], edx
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [mem_00B5D858], ecx
        mov dword ptr [mem_00B5D85C], edx
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [mem_00B5D860], ecx
        mov dword ptr [mem_00B5D864], edx
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [mem_00B5D868], ecx
        mov dword ptr [mem_00B5D86C], edx
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [mem_00B5D870], ecx
        mov dword ptr [mem_00B5D874], edx
        ret
    }
}

// [0x006DED80] sub_006DED80 (288 bytes)
extern "C" void ext_006CA2D0();
extern "C" void ext_006CD330();
extern "C" void ext_006D89C0();
extern "C" void ext_006DE1C0();
extern "C" void ext_006DEC60();
extern "C" void ext_006DEEB0();
extern "C" void ext_006DEEC0();
extern "C" void ext_006E3EA0();
extern "C" __declspec(naked) void __fastcall fn_006DED80(void* self, int edx_unused, int a1, int a2) {
    __asm {
        sub esp, 0x20
        push esi
        mov esi, ecx
        call ext_006DEEB0
        test eax, eax
        je dED80_fail
        mov eax, dword ptr [esp + 0x2c]
        mov ecx, dword ptr [esp + 0x28]
        push eax
        push ecx
        push 1
        push 0
        push 0
        mov ecx, esi
        call ext_006DE1C0
        push eax
        mov ecx, esi
        call ext_006DEC60
        lea edx, [esp + 4]
        mov ecx, esi
        push edx
        call ext_006E3EA0
        mov ecx, esi
        call ext_006DEEC0
        test eax, eax
        je dED80_skip
        fld qword ptr [esp + 4]
        push ecx
        mov ecx, dword ptr [esi + 0x40]
        fstp dword ptr [esp]
        call ext_006DEEC0
        mov ecx, eax
        call ext_006CD330
        mov ecx, esi
        call ext_006DEEC0
        mov ecx, eax
        call ext_006D89C0
        mov ecx, dword ptr [esi + 0x40]
        push eax
        call ext_006DEEC0
        mov ecx, eax
        call ext_006CA2D0
dED80_skip:
        mov ecx, dword ptr [esi + 0x40]
        push edi
        xor edi, edi
        mov eax, dword ptr [ecx]
        call dword ptr [eax + 0x14]
        test eax, eax
        jle dED80_end
        push ebx
        push ebp
        lea ebp, [esp + 0x10]
dED80_loop:
        mov edx, dword ptr [esi]
        push edi
        mov ecx, esi
        call dword ptr [edx + 0x18]
        mov ecx, eax
        call ext_006DEEC0
        test eax, eax
        je dED80_next
        mov ecx, dword ptr [esi + 0x40]
        fld qword ptr [ebp]
        mov eax, dword ptr [ecx]
        push ecx
        fstp dword ptr [esp]
        push edi
        call dword ptr [eax + 0x18]
        mov ecx, eax
        call ext_006DEEC0
        mov ecx, eax
        call ext_006CD330
        mov edx, dword ptr [esi]
        mov ebx, dword ptr [esi + 0x40]
        push edi
        mov ecx, esi
        call dword ptr [edx + 0x18]
        mov ecx, eax
        call ext_006DEEC0
        mov ecx, eax
        call ext_006D89C0
        push eax
        mov eax, dword ptr [ebx]
        push edi
        mov ecx, ebx
        call dword ptr [eax + 0x18]
        mov ecx, eax
        call ext_006DEEC0
        mov ecx, eax
        call ext_006CA2D0
dED80_next:
        mov ecx, dword ptr [esi + 0x40]
        inc edi
        add ebp, 8
        mov edx, dword ptr [ecx]
        call dword ptr [edx + 0x14]
        cmp edi, eax
        jl dED80_loop
        pop ebp
        pop ebx
dED80_end:
        mov eax, dword ptr [esi + 0x40]
        pop edi
        pop esi
        add esp, 0x20
        ret 0x8
dED80_fail:
        xor eax, eax
        pop esi
        add esp, 0x20
        ret 0x8
    }
}

// [0x006D2810] sub_006D2810 (304 bytes)
extern "C" int mem_0092A278;
extern "C" int mem_0092C510;
extern "C" int mem_0092A270;
// Quaternion-to-3x3-rotation (4-double row stride). Args on stack: [ebp+8] = out, [ebp+0xc] = in (4 doubles).
// s = (N == 0.0) ? 0.0 : 2.0 / N, N = a^2+b^2+c^2+d^2.
extern "C" __declspec(naked) void __fastcall fn_006D2810(void* self) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -0x8
        sub esp, 0x40
        mov ecx, dword ptr [ebp + 0xc]
        fld qword ptr [ecx + 0x18]
        fld qword ptr [ecx + 0x10]
        fld qword ptr [ecx + 0x8]
        fld qword ptr [ecx]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp st(1), st
        fld st(3)
        fmul st, st(4)
        faddp st(1), st
        fld st(4)
        fmul st, st(5)
        faddp st(1), st
        fstp st(4)
        fstp st(0)
        fstp st(0)
        fstp st(0)
        fld st(0)
        fcomp qword ptr [mem_0092A278]
        fnstsw ax
        test ah, 0x40
        jne skip_div
        fdivr qword ptr [mem_0092C510]
skip_div:
        fld st(0)
        fmul qword ptr [ecx]
        mov eax, dword ptr [ebp + 0x8]
        fstp qword ptr [esp + 0x8]
        fld st(0)
        fmul qword ptr [ecx + 0x8]
        _emit 0xdd
        _emit 0x5c
        _emit 0x24
        _emit 0x00
        fmul qword ptr [ecx + 0x10]
        fld qword ptr [esp + 0x8]
        fmul qword ptr [ecx + 0x18]
        fstp qword ptr [esp + 0x28]
        _emit 0xdd
        _emit 0x44
        _emit 0x24
        _emit 0x00
        fmul qword ptr [ecx + 0x18]
        fstp qword ptr [esp + 0x20]
        fld st(0)
        fmul qword ptr [ecx + 0x18]
        fstp qword ptr [esp + 0x10]
        fld qword ptr [esp + 0x8]
        fmul qword ptr [ecx]
        fstp qword ptr [esp + 0x38]
        _emit 0xdd
        _emit 0x44
        _emit 0x24
        _emit 0x00
        fmul qword ptr [ecx]
        fstp qword ptr [esp + 0x8]
        fld st(0)
        fmul qword ptr [ecx]
        fstp qword ptr [esp + 0x18]
        _emit 0xdd
        _emit 0x44
        _emit 0x24
        _emit 0x00
        fmul qword ptr [ecx + 0x8]
        fstp qword ptr [esp + 0x30]
        fld st(0)
        fmul qword ptr [ecx + 0x8]
        _emit 0xdd
        _emit 0x5c
        _emit 0x24
        _emit 0x00
        fmul qword ptr [ecx + 0x10]
        fld qword ptr [mem_0092A270]
        fsub qword ptr [esp + 0x30]
        fsub st, st(1)
        fstp qword ptr [eax]
        fld qword ptr [esp + 0x8]
        fadd qword ptr [esp + 0x10]
        fstp qword ptr [eax + 0x8]
        fld qword ptr [esp + 0x18]
        fsub qword ptr [esp + 0x20]
        fstp qword ptr [eax + 0x10]
        fld qword ptr [esp + 0x8]
        fsub qword ptr [esp + 0x10]
        fstp qword ptr [eax + 0x20]
        fld qword ptr [mem_0092A270]
        fsub qword ptr [esp + 0x38]
        fst qword ptr [esp + 0x10]
        fsub st, st(1)
        fstp qword ptr [eax + 0x28]
        fstp st(0)
        _emit 0xdd
        _emit 0x44
        _emit 0x24
        _emit 0x00
        fadd qword ptr [esp + 0x28]
        fstp qword ptr [eax + 0x30]
        fld qword ptr [esp + 0x18]
        fadd qword ptr [esp + 0x20]
        fstp qword ptr [eax + 0x40]
        _emit 0xdd
        _emit 0x44
        _emit 0x24
        _emit 0x00
        fsub qword ptr [esp + 0x28]
        fstp qword ptr [eax + 0x48]
        fld qword ptr [esp + 0x10]
        fsub qword ptr [esp + 0x30]
        fstp qword ptr [eax + 0x50]
        mov esp, ebp
        pop ebp
        ret
    }
}

// [0x006D80B0] sub_006D80B0 (320 bytes)
extern "C" void ext_006D2130();
extern "C" void ext_006D2300();
extern "C" void ext_006FC9D0();
extern "C" void ext_0078D720();
extern "C" void ext_006FDF70();
extern "C" void ext_006FC930();
extern "C" void ext_006A5C62();
extern "C" void ext_006D2170();

// [0x006D80B0] __thiscall, ret 8: self in ecx, two stack args (only a1 used by the body).
extern "C" __declspec(naked) void __fastcall fn_006D80B0(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push -1
        push 0x8b9326
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
        mov eax, dword ptr [esp + 0x14]
        push ebp
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x1c], eax
        lea ecx, [esp + 0x1c]
        mov eax, dword ptr [esi + 0x1dc]
        lea ebp, [esi + 0x1dc]
        push edi
        push ecx
        push eax
        mov ecx, ebp
        call ext_006D2170
        cmp dword ptr [esp + 0x24], -1
        je L_tail
        push ebx
        xor ebx, ebx
        push ebx
        mov ecx, esi
        call ext_006FDF70
        mov ecx, eax
        call ext_006FC930
        mov edi, eax
        cmp edi, ebx
        jne L_have
        push 0x38
        call ext_006A5C62
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 0x10], edi
        cmp edi, ebx
        mov dword ptr [esp + 0x1c], ebx
        je L_null
        mov dword ptr [edi], ebx
        mov dword ptr [edi + 0x4], ebx
        lea ebx, [edi + 0x8]
        push 0x10
        push 0x10
        mov ecx, ebx
        call ext_006D2130
        lea edx, [ebx + 0x10]
        mov dword ptr [ebx + 0x14], edx
        push 0x10
        lea ecx, [edi + 0x20]
        mov byte ptr [esp + 0x20], 0x1
        call ext_0078D720
        jmp L_after
L_null:
        xor edi, edi
L_after:
        push edi
        push 0x0
        mov ecx, esi
        mov dword ptr [esp + 0x24], 0xffffffff
        call ext_006FDF70
        mov ecx, eax
        call ext_006FC9D0
L_have:
        mov eax, dword ptr [edi]
        pop ebx
        cmp eax, 0x2
        jne L_tail
        cmp dword ptr [edi + 0x4], 0x2
        jne L_tail
        mov eax, dword ptr [ebp]
        lea ecx, [edi + 0x20]
        push eax
        call ext_006D2300
        mov ecx, dword ptr [ebp]
        mov edx, dword ptr [edi + 0x30]
        mov eax, dword ptr [esp + 0x24]
        mov dword ptr [edx + 4*ecx - 0x4], eax
L_tail:
        mov eax, dword ptr [esi + 0x1c4]
        mov edx, dword ptr [esi + 0x1d4]
        lea ecx, [eax + 2*eax]
        lea eax, [edx + 4*ecx - 0xc]
        mov ecx, eax
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ecx + 0x4]
        inc eax
        mov edi, dword ptr [ecx + 0x8]
        mov ecx, dword ptr [esi + 0x1c4]
        mov esi, dword ptr [esi + 0x1d4]
        lea ecx, [ecx + 2*ecx]
        lea ecx, [esi + 4*ecx - 0xc]
        mov dword ptr [ecx], edx
        mov dword ptr [ecx + 0x4], eax
        mov dword ptr [ecx + 0x8], edi
        mov ecx, dword ptr [esp + 0x10]
        pop edi
        pop esi
        pop ebp
        _emit 0x64
        _emit 0x89
        _emit 0x0d
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        add esp, 0x10
        ret 0x8
    }
}

// [0x006DC6A0] sub_006DC6A0 (320 bytes)
extern "C" void ext_006C9170();
extern "C" void ext_006C91E0();
extern "C" void ext_006C9320();
extern "C" const char* __fastcall ext_006C9330(void* self);
extern "C" void ext_006DC460();

// thiscall(self, a1) with ret 4: SEH-framed; scans self->[0xc8][i] strings for a1, else creates a new object.
extern "C" __declspec(naked) void __fastcall fn_006DC6A0(void* self, int edx_unused, int a1) {
    __asm {
        push -1
        push 0x008c17c6
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ebx, dword ptr [esp + 0x24]
        xor ebp, ebp
        lea eax, [edi + 0xb8]
        mov dword ptr [esp + 0x10], eax
        mov eax, dword ptr [eax]
        test eax, eax
        jle L_notfound_6DC6A0
    L_outer_6DC6A0:
        mov eax, dword ptr [edi + 0xc8]
        mov esi, ebx
        mov ecx, dword ptr [eax + 4*ebp]
        call ext_006C9330
    L_cmp_6DC6A0:
        mov dl, byte ptr [eax]
        mov cl, dl
        cmp dl, byte ptr [esi]
        jne L_diff_6DC6A0
        test cl, cl
        je L_equal_6DC6A0
        mov dl, byte ptr [eax + 1]
        mov cl, dl
        cmp dl, byte ptr [esi + 1]
        jne L_diff_6DC6A0
        add eax, 2
        add esi, 2
        test cl, cl
        jne L_cmp_6DC6A0
    L_equal_6DC6A0:
        xor eax, eax
        jmp L_cmpdone_6DC6A0
    L_diff_6DC6A0:
        sbb eax, eax
        sbb eax, -1
    L_cmpdone_6DC6A0:
        test eax, eax
        je L_dup_6DC6A0
        mov eax, dword ptr [esp + 0x10]
        inc ebp
        cmp ebp, dword ptr [eax]
        jl L_outer_6DC6A0
    L_notfound_6DC6A0:
        mov ecx, edi
        call ext_006DC460
        mov esi, eax
        push 0xa8
        test esi, esi
        je L_null_6DC6A0
        call ext_006A5C62
        add esp, 0x4
        mov dword ptr [esp + 0x24], eax
        test eax, eax
        mov dword ptr [esp + 0x1c], 0
        je L_zero_6DC6A0
        push esi
        mov ecx, eax
        call ext_006C91E0
        jmp L_join_6DC6A0
    L_dup_6DC6A0:
        mov ecx, dword ptr [edi + 0xec]
        push 0xaa9428
        push 0
        call ext_006E7410
        xor eax, eax
        jmp L_epi_6DC6A0
    L_zero_6DC6A0:
        xor eax, eax
    L_join_6DC6A0:
        push ebx
        mov ecx, eax
        mov dword ptr [esp + 0x20], 0xffffffff
        mov esi, eax
        call ext_006C9320
        jmp L_store_6DC6A0
    L_null_6DC6A0:
        call ext_006A5C62
        add esp, 0x4
        mov dword ptr [esp + 0x24], eax
        test eax, eax
        mov dword ptr [esp + 0x1c], 0x1
        je L_zero2_6DC6A0
        push ebx
        mov ecx, eax
        call ext_006C9170
        jmp L_call_6DC6A0
    L_zero2_6DC6A0:
        xor eax, eax
    L_call_6DC6A0:
        mov edx, dword ptr [edi]
        push eax
        mov ecx, edi
        mov dword ptr [esp + 0x20], 0xffffffff
        mov esi, eax
        call dword ptr [edx + 0x34]
    L_store_6DC6A0:
        mov ecx, dword ptr [esp + 0x10]
        lea eax, [esp + 0x24]
        push eax
        mov dword ptr [esp + 0x28], esi
        mov edx, dword ptr [ecx]
        push edx
        call ext_006D2170
        mov eax, esi
    L_epi_6DC6A0:
        mov ecx, dword ptr [esp + 0x14]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 0x4
    }
}

// [0x006DDF00] sub_006DDF00 (352 bytes)
// __thiscall with ret 0x14 (five stack args); SEH-framed. Naked to match the frame exactly.
extern "C" __declspec(naked) void __fastcall fn_006DDF00(void* self, int edx_unused, int a1, int a2, int a3, int a4, int a5) {
    __asm {
        push -0x1
        push 0x8b953e
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x8
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        push 0x4
        lea edi, [esi + 0x20]
        push 0x10
        mov ecx, edi
        mov dword ptr [esp + 0x18], esi
        call ext_006D2130
        lea eax, [edi + 0x10]
        mov dword ptr [edi + 0x14], eax
        xor ebx, ebx
        push 0xa4
        mov dword ptr [esi + 0x90], ebx
        mov dword ptr [esi + 0x94], ebx
        mov dword ptr [esp + 0x24], ebx
        mov dword ptr [esi], 0x993c30
        mov dword ptr [esi + 0x1c], ebx
        call ext_006A5C62
        mov edi, eax
        add esp, 0x4
        mov dword ptr [esp + 0x14], edi
        cmp edi, ebx
        mov byte ptr [esp + 0x20], 0x1
        je short L_null
        mov ecx, edi
        call ext_006B9D10
        lea ecx, [edi + 0x4c]
        mov byte ptr [esp + 0x20], 0x2
        call ext_006B9D10
        jmp short L_join
L_null:
        xor edi, edi
L_join:
        mov ecx, dword ptr [esp + 0x28]
        mov ebp, 0x1
        mov dword ptr [esi + 0x14], edi
        mov dword ptr [edi + 0xa0], ebp
        push ecx
        mov ecx, dword ptr [esi + 0x14]
        mov byte ptr [esp + 0x24], bl
        call ext_006B9EC0
        mov edx, dword ptr [esp + 0x2c]
        mov ecx, dword ptr [esi + 0x14]
        push edx
        add ecx, 0x4c
        call ext_006B9EC0
        mov eax, dword ptr [esi + 0x14]
        mov ecx, dword ptr [esp + 0x30]
        push ebx
        mov dword ptr [eax + 0x98], ecx
        mov edx, dword ptr [esi + 0x14]
        mov ecx, dword ptr [esp + 0x38]
        mov dword ptr [edx + 0x9c], ebx
        mov eax, dword ptr [esi + 0x14]
        push ecx
        mov ecx, esi
        mov dword ptr [eax + 0xa0], ebp
        mov dword ptr [esi + 0x50], ebx
        mov dword ptr [esi + 0x98], ebx
        mov dword ptr [esi + 0xc], ebx
        mov dword ptr [esi + 0x8], ebx
        mov dword ptr [esi + 0x38], ebx
        mov dword ptr [esi + 0x48], ebx
        mov dword ptr [esi + 0x40], ebx
        mov dword ptr [esi + 0x44], esi
        mov dword ptr [esi + 0x4c], ebx
        mov dword ptr [esi + 0x3c], ebx
        mov dword ptr [esi + 0x9c], ebx
        mov dword ptr [esi + 0x18], 0x60
        mov dword ptr [esi + 0x5c], ebx
        mov dword ptr [esi + 0x54], ebx
        call ext_006DEBA0
        mov edx, dword ptr [esp + 0x38]
        lea edi, [esi + 0x70]
        mov dword ptr [esi + 0x58], edx
        mov dword ptr [esi + 0x90], 0xffffffff
        mov dword ptr [esi + 0x94], 0x7fffffff
        mov ecx, 0x8
        xor eax, eax
        mov dword ptr [esi + 0x64], ebp
        mov dword ptr [esi + 0x68], ebp
        rep stosd
        mov ecx, dword ptr [esp + 0x18]
        mov dword ptr [esi + 0x60], ebx
        mov byte ptr [esi + 0x10], bl
        mov eax, esi
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0x14
        ret 0x14
    }
}

// [0x006DD560] sub_006DD560 (352 bytes)
extern "C" void ext_00712010();
extern "C" void ext_006BC380();
extern "C" void ext_006DEEC0();
extern "C" void ext_006D0370();
extern "C" void ext_006CD330();
extern "C" void ext_006D03D0();
extern "C" void ext_00711DB0();

extern "C" __declspec(naked) void __cdecl fn_006DD560() {
    __asm {
        sub esp, 0x28
        push ebx
        push esi
        mov esi, dword ptr [esp + 0x38]
        push edi
        mov ecx, esi
        call ext_00712010
        test eax, eax
        mov ecx, esi
        je dd560_f2
        call ext_00712010
        mov ecx, eax
        call ext_006BC380
        mov ebx, eax
        cmp ebx, 0x3
        mov dword ptr [esp + 0x3c], ebx
        je dd560_638
        cmp ebx, 0x4
        je dd560_638
dd560_59b:
        mov eax, dword ptr [esi]
        push 0
        push 0
        lea ecx, [esp + 0x14]
        push 0
        push ecx
        mov ecx, esi
        call dword ptr [eax + 0x88]
        mov ecx, dword ptr [esp + 0x38]
        call ext_006DEEC0
        mov esi, eax
        test esi, esi
        je dd560_6a9
        push 0
        mov ecx, esi
        call ext_006D0370
        fld qword ptr [esp + 0xc]
        push ecx
        mov ecx, esi
        fstp dword ptr [esp]
        call ext_006CD330
        mov ecx, esi
        call ext_006D03D0
        push 1
        mov ecx, esi
        call ext_006D0370
        pop edi
        pop esi
        pop ebx
        add esp, 0x28
        ret
dd560_f2:
        call ext_00711DB0
        cmp eax, 0xd
        je dd560_6b0
        mov ecx, esi
        call ext_00711DB0
        cmp eax, 0xe
        je dd560_6b0
        mov ecx, esi
        call ext_00711DB0
        cmp eax, 0xc
        je dd560_62c
        mov ecx, esi
        call ext_00711DB0
        cmp eax, 0xf
        jne dd560_59b
dd560_62c:
        mov dword ptr [esp + 0x3c], 0x4
        mov ebx, dword ptr [esp + 0x3c]
dd560_638:
        mov edx, dword ptr [esi]
        push 0
        push 0
        lea eax, [esp + 0x1c]
        push 0
        push eax
        mov ecx, esi
        call dword ptr [edx + 0x88]
        xor edi, edi
        test ebx, ebx
        jle dd560_6a9
        push ebp
        mov ebp, dword ptr [esp + 0x3c]
        lea ebx, [esp + 0x18]
dd560_65c:
        mov edx, dword ptr [ebp]
        push edi
        mov ecx, ebp
        call dword ptr [edx + 0x18]
        test eax, eax
        je dd560_69c
        mov ecx, eax
        call ext_006DEEC0
        mov esi, eax
        test esi, esi
        je dd560_69c
        push 0
        mov ecx, esi
        call ext_006D0370
        fld qword ptr [ebx]
        push ecx
        mov ecx, esi
        fstp dword ptr [esp]
        call ext_006CD330
        mov ecx, esi
        call ext_006D03D0
        push 1
        mov ecx, esi
        call ext_006D0370
dd560_69c:
        mov eax, dword ptr [esp + 0x40]
        inc edi
        add ebx, 0x8
        cmp edi, eax
        jl dd560_65c
        pop ebp
dd560_6a9:
        pop edi
        pop esi
        pop ebx
        add esp, 0x28
        ret
dd560_6b0:
        mov dword ptr [esp + 0x3c], 0x3
        jmp dd560_638
    }
}

// [0x006DC9E0] sub_006DC9E0 (352 bytes)
extern "C" void ext_006DC460();
extern "C" void ext_006C9360();
extern "C" void ext_006B9D10();
extern "C" void ext_006D2130();
extern "C" void ext_006D59B0();
extern "C" void ext_00712000();
extern "C" void ext_006B9D80();
extern "C" void ext_006DD6C0();
extern "C" void ext_006B9E60();
extern "C" void ext_006B9D70();
extern "C" void ext_006E7460();
extern "C" void ext_006DE7C0();
extern "C" void ext_006DD560();
extern "C" void ext_006D2160();

extern "C" __declspec(naked) void __fastcall fn_006DC9E0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8b945e
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0xb4
        push ebp
        push esi
        push edi
        mov edi, ecx
        call ext_006DC460
        test eax, eax
        je L_ret
        mov ecx, edi
        call ext_006DC460
        mov ecx, eax
        call ext_006C9360
        test eax, eax
        je L_ret
        lea ecx, [esp + 0x28]
        call ext_006B9D10
        xor esi, esi
        push 0x4
        push 0x10
        lea ecx, [esp + 0x14]
        mov dword ptr [esp + 0xd0], esi
        call ext_006D2130
        lea eax, [esp + 0x1c]
        mov dword ptr [esp + 0x20], eax
        mov edx, dword ptr [edi]
        lea eax, [esp + 0xc]
        push eax
        mov ecx, edi
        mov byte ptr [esp + 0xcc], 0x1
        call dword ptr [edx + 0x10]
        mov eax, dword ptr [esp + 0xc]
        test eax, eax
        mov ebp, eax
        jle L_after
    L_loop:
        push esi
        lea ecx, [esp + 0x10]
        call ext_006D59B0
        mov ecx, dword ptr [eax]
        call ext_00712000
        sub esp, 0x4c
        mov ecx, esp
        mov dword ptr [esp + 0x70], esp
        push eax
        call ext_006B9D80
        lea ecx, [esp + 0xc0]
        push ecx
        call ext_006DD6C0
        add esp, 0x50
        push eax
        lea ecx, [esp + 0x2c]
        mov byte ptr [esp + 0xcc], 0x2
        call ext_006B9E60
        lea ecx, [esp + 0x74]
        mov byte ptr [esp + 0xc8], 0x1
        call ext_006B9D70
        lea ecx, [esp + 0x28]
        call ext_006E7460
        push eax
        mov ecx, edi
        call ext_006DC460
        mov ecx, eax
        call ext_006C9360
        mov ecx, eax
        call ext_006DE7C0
        test eax, eax
        je L_next
        mov edx, dword ptr [esp + 0x1c]
        mov ecx, dword ptr [edx + 4*esi]
        push ecx
        push eax
        call ext_006DD560
        add esp, 0x8
    L_next:
        inc esi
        cmp esi, ebp
        jl L_loop
    L_after:
        lea ecx, [esp + 0xc]
        mov byte ptr [esp + 0xc8], 0x0
        call ext_006D2160
        lea ecx, [esp + 0x28]
        mov dword ptr [esp + 0xc8], 0xffffffff
        call ext_006B9D70
    L_ret:
        mov ecx, dword ptr [esp + 0xc0]
        pop edi
        pop esi
        mov dword ptr fs:[0x0], ecx
        pop ebp
        add esp, 0xc0
        ret
    }
}

// [0x006DD7A0] sub_006DD7A0 (337 bytes)
extern "C" void ext_006C9F70();
extern "C" void ext_00712010();
extern "C" void ext_006B99C0();
extern "C" void ext_006BC380();
extern "C" void ext_00711DB0();
extern "C" void ext_00872828();
extern "C" void ext_006DD240();
extern "C" int mem_006DD8F4;
extern "C" int mem_006DD904;

extern "C" __declspec(naked) void __cdecl fn_006DD7A0(void* a1, int* a2, void* a3) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -0x8
        sub esp, 0x2c
        mov eax, dword ptr [ebp + 0x8]
        push ebx
        push esi
        push edi
        test eax, eax
        je L_006dd8ea
        mov edi, dword ptr [ebp + 0xc]
        test edi, edi
        je L_006dd8ea
        mov eax, dword ptr [ebp + 0x10]
        test eax, eax
        je L_006dd8ea
        mov cl, byte ptr [edi]
        mov dword ptr [esp + 0xc], eax
        test cl, 0x1
        je L_006dd8d2
        mov ecx, dword ptr [eax + 0x8]
        call ext_006C9F70
        mov eax, dword ptr [esp + 0xc]
        fstp qword ptr [esp + 0x10]
        mov ecx, dword ptr [eax]
        call ext_00712010
        mov ecx, dword ptr [esp + 0xc]
        test eax, eax
        mov ecx, dword ptr [ecx]
        je L_006dd848
        call ext_00712010
        mov ecx, eax
        call ext_006B99C0
        cmp eax, 0x20
        ja L_006dd8d2
        mov edx, dword ptr [esp + 0xc]
        mov ecx, dword ptr [edx]
        call ext_00712010
        mov ecx, eax
        call ext_006BC380
        mov ecx, dword ptr [esp + 0xc]
        cmp eax, dword ptr [ecx + 0x4]
        jle L_006dd8d2
        mov ecx, dword ptr [ecx]
        push 0x0
        push 0x0
        lea edx, [esp + 0x20]
        mov eax, dword ptr [ecx]
        push 0x0
        push edx
        call dword ptr [eax + 0x88]
        jmp L_006dd8ae
    L_006dd848:
        call ext_00711DB0
        dec eax
        cmp eax, 0xe
        ja L_006dd8d2
        xor edx, edx
        mov dl, byte ptr [eax + mem_006DD904]
        jmp dword ptr [edx*4 + mem_006DD8F4]
        mov eax, dword ptr [esp + 0xc]
        fld qword ptr [esp + 0x10]
        mov esi, dword ptr [eax]
        mov ebx, dword ptr [esi]
        call ext_00872828
        push eax
        mov ecx, esi
        call dword ptr [ebx + 0x78]
        jmp L_006dd8d2
        mov ecx, dword ptr [esp + 0xc]
        mov eax, dword ptr [esp + 0x14]
        push eax
        mov eax, dword ptr [esp + 0x14]
        mov ecx, dword ptr [ecx]
        push eax
        mov edx, dword ptr [ecx]
        call dword ptr [edx + 0x80]
        jmp L_006dd8d2
        mov ecx, dword ptr [esp + 0xc]
        push 0x0
        push 0x0
        lea eax, [esp + 0x20]
        mov ecx, dword ptr [ecx]
        push 0x0
        push eax
        mov edx, dword ptr [ecx]
        call dword ptr [edx + 0x88]
    L_006dd8ae:
        mov eax, dword ptr [esp + 0xc]
        push 0x0
        fld qword ptr [esp + 0x14]
        mov ecx, dword ptr [eax + 0x4]
        push 0x0
        push 0x0
        fstp qword ptr [esp + ecx*8 + 0x24]
        mov ecx, dword ptr [eax]
        lea eax, [esp + 0x24]
        push eax
        mov edx, dword ptr [ecx]
        call dword ptr [edx + 0x8c]
    L_006dd8d2:
        mov eax, dword ptr [edi]
        test ah, 0x2
        je L_006dd8ea
        mov edx, dword ptr [esp + 0xc]
        lea ecx, [esp + 0xc]
        push ecx
        mov ecx, dword ptr [edx + 0xc]
        call ext_006DD240
    L_006dd8ea:
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}

// [0x006DBC70] sub_006DBC70 (384 bytes)
extern "C" __declspec(naked) __int64 __cdecl fn_006DBC70(__int64 t, int* p1, int* p2, int* p3, int* p4, int* p5) {
    __asm {
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x10]
        push edi
        mov edi, dword ptr [esp + 0x18]
        test edi, edi
        jg L_nonneg
        jl L_neg
        test esi, esi
        jae L_nonneg
    L_neg:
        mov eax, 0x1
        jmp L_after_sign
    L_nonneg:
        xor eax, eax
    L_after_sign:
        cdq
        neg eax
        adc edx, 0x0
        and eax, 0x1a405e7f
        neg edx
        mov ecx, esi
        and edx, 0x972f
        sub ecx, eax
        mov eax, edi
        sbb eax, edx
        push 0x972f
        push 0x1a405e80
        push eax
        push ecx
        call ext_006A7310
        mov ecx, dword ptr [esp + 0x1c]
        push 0xffff68d0
        push 0xe5bfa180
        mov dword ptr [ecx], eax
        cdq
        push edx
        push eax
        call ext_006A6F00
        add esi, eax
        push 0x1932
        adc edi, edx
        push 0x84600fc0
        push edi
        push esi
        call ext_006A7310
        mov ebx, eax
        push 0xffffe6cd
        cdq
        push 0x7b9ff040
        push edx
        push eax
        call ext_006A6F00
        add esi, eax
        push 0x284
        adc edi, edx
        mov edx, esi
        sub edx, 0xe5a38640
        mov eax, edi
        sbb eax, 0x0
        push 0xf6460dc0
        push eax
        push edx
        call ext_006A7310
        push 0x0
        push 0xe5a38640
        push edx
        push eax
        call ext_006A6F00
        add esi, eax
        push 0x285
        adc edi, edx
        push 0xdbe99400
        push edi
        push esi
        call ext_006A7310
        mov ebp, dword ptr [esp + 0x20]
        push 0xfffffd7a
        push 0x24166c00
        mov dword ptr [ebp], eax
        cdq
        push edx
        push eax
        call ext_006A6F00
        add esi, eax
        lea ecx, [ebx + 4*ebx]
        adc edi, edx
        mov edx, dword ptr [ebp]
        shl ecx, 1
        push 0xa
        push 0xc3aa4b00
        add edx, ecx
        push edi
        push esi
        mov dword ptr [ebp], edx
        call ext_006A7310
        mov edx, dword ptr [esp + 0x24]
        mov dword ptr [edx], eax
        push -0xb
        cdq
        push 0x3c55b500
        push edx
        push eax
        call ext_006A6F00
        add esi, eax
        push 0x0
        adc edi, edx
        push 0x72d1c320
        push edi
        push esi
        call ext_006A7310
        mov ecx, dword ptr [esp + 0x28]
        push -0x1
        push 0x8d2e3ce0
        mov dword ptr [ecx], eax
        cdq
        push edx
        push eax
        call ext_006A6F00
        add esi, eax
        push 0x0
        adc edi, edx
        push 0x3968e190
        push edi
        push esi
        call ext_006A7310
        mov edx, dword ptr [esp + 0x2c]
        push 0x0
        push 0x3968e190
        mov dword ptr [edx], eax
        cdq
        push edx
        push eax
        call ext_006A6F00
        sub esi, eax
        sbb edi, edx
        mov eax, esi
        mov edx, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}

// [0x006D8B10] sub_006D8B10 (387 bytes)
extern "C" void ext_006D7E50();
extern "C" void ext_007052F0();
extern "C" void ext_00708B00();
extern "C" void ext_007111D0();
extern "C" void ext_00711CF0();
extern "C" void ext_00711D40();
extern "C" void ext_00711DA0();
extern "C" void ext_00712A60();
extern "C" void ext_008B9382();
extern "C" void ext_006D9450();
extern "C" void ext_006D9460();
extern "C" void ext_006C8C70();
extern "C" void ext_006C8D30();
extern "C" void ext_006C8DF0();
extern "C" void ext_006C88B0();
extern "C" int mem_009934B0;
extern "C" int mem_00993B20;
extern "C" int mem_009939E0;
extern "C" int mem_00AA9190;
extern "C" int mem_00AA9184;
extern "C" int mem_00AA8CEC;

extern "C" __declspec(naked) void __fastcall fn_006D8B10(void* self) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -0x8
        push -0x1
        push offset ext_008B9382
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x8
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov dword ptr [esp + 0x14], edi
        call ext_007052F0
        lea ebp, [edi + 0xe0]
        xor esi, esi
        mov ecx, ebp
        mov dword ptr [esp + 0x20], esi
        call ext_007111D0
        mov dword ptr [ebp + 0x80], esi
        mov dword ptr [ebp + 0x84], esi
        mov dword ptr [ebp], offset mem_009934B0
        lea ebx, [edi + 0x168]
        mov byte ptr [esp + 0x20], 0x1
        mov ecx, ebx
        call ext_007111D0
        mov dword ptr [ebx + 0x80], esi
        mov dword ptr [ebx + 0x84], esi
        mov dword ptr [ebx], offset mem_009934B0
        lea esi, [edi + 0x1f0]
        mov byte ptr [esp + 0x20], 0x2
        mov ecx, esi
        call ext_007111D0
        xor eax, eax
        mov dword ptr [esi + 0x90], eax
        mov dword ptr [esi + 0x88], eax
        mov dword ptr [esi + 0x80], eax
        mov dword ptr [esi + 0x98], eax
        mov dword ptr [esi + 0x94], eax
        mov dword ptr [esi + 0x8c], eax
        mov dword ptr [esi + 0x84], eax
        mov dword ptr [esi + 0x9c], 0x3ff00000
        mov dword ptr [esi], offset mem_00993B20
        push ebp
        mov ecx, edi
        mov byte ptr [esp + 0x24], 0x3
        mov dword ptr [edi], offset mem_009939E0
        call ext_00708B00
        push 0x0
        call ext_006D7E50
        add esp, 0x4
        mov ecx, ebp
        push eax
        call ext_00711DA0
        push offset ext_006D9450
        push offset ext_006D9460
        push edi
        push offset mem_00AA9190
        mov ecx, ebp
        call ext_00711D40
        push ebx
        mov ecx, edi
        call ext_00708B00
        push 0x0
        call ext_006D7E50
        add esp, 0x4
        mov ecx, ebx
        push eax
        call ext_00711DA0
        push offset ext_006C8C70
        push offset ext_006C8D30
        push edi
        push offset mem_00AA9184
        mov ecx, ebx
        call ext_00711D40
        push esi
        mov ecx, edi
        call ext_00708B00
        push 0x0
        call ext_00712A60
        add esp, 0x4
        mov ecx, esi
        push eax
        call ext_00711DA0
        push offset ext_006C8DF0
        push offset ext_006C88B0
        push edi
        push offset mem_00AA8CEC
        mov ecx, esi
        call ext_00711D40
        push 0x1
        push 0x1
        mov ecx, ebx
        call ext_00711CF0
        mov ecx, dword ptr [esp + 0x18]
        mov eax, edi
        pop edi
        mov dword ptr fs:[0x0], ecx
        pop esi
        pop ebp
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}

// [0x006D2FB0] sub_006D2FB0 (448 bytes)
extern "C" void ext_006D3170();
extern "C" void ext_006D2160();
extern "C" void ext_00728DC0();
extern "C" void ext_007641C0();
extern "C" int mem_00B5D770;

extern "C" __declspec(naked) void __fastcall fn_006D2FB0(void* self) {
    __asm {
        push -1
        push 0x8b8f78
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        mov dword ptr [esi], 0x993874
        mov dword ptr [esp + 0x10], 0x12
        call ext_006D3170
        mov ecx, dword ptr [esi + 0x1b4]
        test ecx, ecx
        je L_a
        mov eax, dword ptr [ecx]
        push 1
        call dword ptr [eax]
L_a:
        mov ecx, dword ptr [esi + 0x1b8]
        test ecx, ecx
        je L_b
        mov edx, dword ptr [ecx]
        push 1
        call dword ptr [edx]
L_b:
        mov ecx, dword ptr [esi + 0x1bc]
        test ecx, ecx
        je L_c
        mov eax, dword ptr [ecx]
        push 1
        call dword ptr [eax]
L_c:
        mov ecx, dword ptr [esi + 0x1c0]
        test ecx, ecx
        je L_d
        mov edx, dword ptr [ecx]
        push 1
        call dword ptr [edx]
L_d:
        mov eax, dword ptr [mem_00B5D770]
        dec eax
        mov dword ptr [mem_00B5D770], eax
        jne L_e
        call ext_00728DC0
L_e:
        lea ecx, [esi + 0x1c4]
        mov byte ptr [esp + 0x10], 0x11
        call ext_007641C0
        lea ecx, [esi + 0x19c]
        mov byte ptr [esp + 0x10], 0x10
        call ext_006D2160
        lea ecx, [esi + 0x184]
        mov byte ptr [esp + 0x10], 0xf
        call ext_006D2160
        lea ecx, [esi + 0x16c]
        mov byte ptr [esp + 0x10], 0xe
        call ext_006D2160
        lea ecx, [esi + 0x154]
        mov byte ptr [esp + 0x10], 0xd
        call ext_006D2160
        lea ecx, [esi + 0x13c]
        mov byte ptr [esp + 0x10], 0xc
        call ext_006D2160
        lea ecx, [esi + 0x124]
        mov byte ptr [esp + 0x10], 0xb
        call ext_006D2160
        lea ecx, [esi + 0x10c]
        mov byte ptr [esp + 0x10], 0xa
        call ext_006D2160
        lea ecx, [esi + 0xf4]
        mov byte ptr [esp + 0x10], 0x9
        call ext_006D2160
        lea ecx, [esi + 0xdc]
        mov byte ptr [esp + 0x10], 0x8
        call ext_006D2160
        lea ecx, [esi + 0xc4]
        mov byte ptr [esp + 0x10], 0x7
        call ext_006D2160
        lea ecx, [esi + 0xac]
        mov byte ptr [esp + 0x10], 0x6
        call ext_006D2160
        lea ecx, [esi + 0x94]
        mov byte ptr [esp + 0x10], 0x5
        call ext_006D2160
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
        mov dword ptr [esp + 0x10], -1
        call ext_006D2160
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x006DE7C0] sub_006DE7C0 (432 bytes)
extern "C" void ext_006DE3E0();
extern "C" void ext_006DE7C0();
extern "C" int mem_00925240;
extern "C" int mem_00AAC100;
extern "C" int mem_00AAC104;
extern "C" int mem_00AAC108;
extern "C" int mem_00AA9444;
extern "C" int mem_00AA8CAC;
extern "C" int mem_00AA8C9C;
extern "C" int mem_00AA8C98;

// Path-segment walker (ret 4): splits arg on '/' via strstr, tests each segment with
// vtable calls and _stricmp/inline compares, recursing on the result of a vtable call.
extern "C" __declspec(naked) int __fastcall fn_006DE7C0(void* self, int edx_unused, const char* path) {
    __asm {
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 0xc]
        push esi
        push edi
        mov edi, ecx
    scan_top:
        push offset mem_00AA9444
        push ebp
        call dword ptr [mem_00925240]
        mov esi, eax
        add esp, 0x8
        test esi, esi
        mov dword ptr [esp + 0x14], esi
        je short nul_done
        mov byte ptr [esi], 0x0
    nul_done:
        xor ebx, ebx
    idx_loop:
        mov eax, dword ptr [edi]
        mov ecx, edi
        call dword ptr [eax + 0x14]
        cmp ebx, eax
        jge idx_end
        mov edx, dword ptr [edi]
        push ebp
        push ebx
        mov ecx, edi
        call dword ptr [edx + 0x18]
        mov ecx, eax
        call ext_006DE3B0
        push eax
        call dword ptr [mem_009251D0]
        add esp, 0x8
        test eax, eax
        je match_1

        mov esi, ebp
        mov eax, offset mem_00AA8CAC
    cmp1_loop:
        mov dl, byte ptr [eax]
        mov cl, dl
        cmp dl, byte ptr [esi]
        jne cmp1_ne
        test cl, cl
        je cmp1_eq
        mov dl, byte ptr [eax + 0x1]
        mov cl, dl
        cmp dl, byte ptr [esi + 0x1]
        jne cmp1_ne
        add eax, 0x2
        add esi, 0x2
        test cl, cl
        jne cmp1_loop
    cmp1_eq:
        xor eax, eax
        jmp cmp1_done
    cmp1_ne:
        sbb eax, eax
        sbb eax, -1
    cmp1_done:
        test eax, eax
        jne block_b
        mov eax, dword ptr [edi]
        push ebx
        mov ecx, edi
        call dword ptr [eax + 0x18]
        mov ecx, eax
        call ext_006DE3E0
        cmp eax, dword ptr [mem_00AAC100]
        je match_0

    block_b:
        mov esi, ebp
        mov eax, offset mem_00AA8C9C
    cmp2_loop:
        mov dl, byte ptr [eax]
        mov cl, dl
        cmp dl, byte ptr [esi]
        jne cmp2_ne
        test cl, cl
        je cmp2_eq
        mov dl, byte ptr [eax + 0x1]
        mov cl, dl
        cmp dl, byte ptr [esi + 0x1]
        jne cmp2_ne
        add eax, 0x2
        add esi, 0x2
        test cl, cl
        jne cmp2_loop
    cmp2_eq:
        xor eax, eax
        jmp cmp2_done
    cmp2_ne:
        sbb eax, eax
        sbb eax, -1
    cmp2_done:
        test eax, eax
        jne block_c
        mov eax, dword ptr [edi]
        push ebx
        mov ecx, edi
        call dword ptr [eax + 0x18]
        mov ecx, eax
        call ext_006DE3E0
        cmp eax, dword ptr [mem_00AAC108]
        je match_0

    block_c:
        mov esi, ebp
        mov eax, offset mem_00AA8C98
    cmp3_loop:
        mov dl, byte ptr [eax]
        mov cl, dl
        cmp dl, byte ptr [esi]
        jne cmp3_ne
        test cl, cl
        je cmp3_eq
        mov dl, byte ptr [eax + 0x1]
        mov cl, dl
        cmp dl, byte ptr [esi + 0x1]
        jne cmp3_ne
        add eax, 0x2
        add esi, 0x2
        test cl, cl
        jne cmp3_loop
    cmp3_eq:
        xor eax, eax
        jmp cmp3_done
    cmp3_ne:
        sbb eax, eax
        sbb eax, -1
    cmp3_done:
        test eax, eax
        jne block_d
        mov eax, dword ptr [edi]
        push ebx
        mov ecx, edi
        call dword ptr [eax + 0x18]
        mov ecx, eax
        call ext_006DE3E0
        cmp eax, dword ptr [mem_00AAC104]
        je match_0

    block_d:
        mov edx, dword ptr [edi]
        push ebp
        push ebx
        mov ecx, edi
        call dword ptr [edx + 0x18]
        mov ecx, eax
        call ext_006DE7C0
        test eax, eax
        jne recurse_ok
        mov esi, dword ptr [esp + 0x14]
        inc ebx
        jmp idx_loop

    recurse_ok:
        mov ebp, dword ptr [esp + 0x14]
        test ebp, ebp
        je ret_eax
        mov byte ptr [ebp], 0x2f
        inc ebp
        mov edi, eax
        jmp scan_top

    match_0:
        mov esi, dword ptr [esp + 0x14]
    match_1:
        test esi, esi
        je no_slash
        mov byte ptr [esi], 0x2f
        mov eax, dword ptr [edi]
        push ebx
        mov ecx, edi
        lea ebp, [esi + 0x1]
        call dword ptr [eax + 0x18]
        mov edi, eax
        jmp scan_top

    no_slash:
        mov edx, dword ptr [edi]
        push ebx
        mov ecx, edi
        call dword ptr [edx + 0x18]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x4

    idx_end:
        xor eax, eax
    ret_eax:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x4
    }
}

// [0x006DABA0] sub_006DABA0 (454 bytes)
extern "C" __declspec(naked) void __fastcall fn_006DABA0(void* self, int edx_unused, char a1, int a2) {
    __asm {
        mov al, byte ptr [esp + 0x4]
        sub esp, 0x30
        test al, al
        push esi
        mov esi, ecx
        je dabA_alt
        mov eax, dword ptr [esp + 0x3c]
        test eax, eax
        jne dabA_dec
        call ext_006D98D0
dabA_dec:
        dec eax
        cmp eax, 0xc
        ja dabA_default
        jmp dword ptr [4*eax + 0x6dad68]
dabA_0:
        mov eax, dword ptr [esi + 0x4]
        mov ecx, dword ptr [esi]
        push 0x0
        push 0x6e1dcb30
        push eax
        push ecx
        call ext_006A7310
        pop esi
        add esp, 0x30
        ret 0x8
dabA_1:
        mov edx, dword ptr [esi + 0x4]
        mov eax, dword ptr [esi]
        push 0x0
        push 0x370ee598
        push edx
        push eax
        call ext_006A7310
        pop esi
        add esp, 0x30
        ret 0x8
dabA_2:
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [esi]
        push 0x0
        push 0x1b8772cc
        push ecx
        push edx
        call ext_006A7310
        pop esi
        add esp, 0x30
        ret 0x8
dabA_3:
        mov eax, dword ptr [esi + 0x4]
        mov ecx, dword ptr [esi]
        push 0x0
        push 0x5bc37ea8
        push eax
        push ecx
        call ext_006A7310
        pop esi
        add esp, 0x30
        ret 0x8
dabA_4:
        mov edx, dword ptr [esi + 0x4]
        mov eax, dword ptr [esi]
        push 0x0
        push 0x5bc37ea8
        push edx
        push eax
        call ext_006A7310
        pop esi
        add esp, 0x30
        ret 0x8
dabA_5:
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [esi]
        push 0x0
        push 0x2de1bf54
        push ecx
        push edx
        call ext_006A7310
        pop esi
        add esp, 0x30
        ret 0x8
dabA_6:
        mov eax, dword ptr [esi + 0x4]
        mov ecx, dword ptr [esi]
        push 0x0
        push 0x16f0dfaa
        push eax
        push ecx
        call ext_006A7310
        pop esi
        add esp, 0x30
        ret 0x8
dabA_7:
        mov edx, dword ptr [esi + 0x4]
        mov eax, dword ptr [esi]
        push 0x0
        push 0x02c0beae
        push edx
        push eax
        call ext_006A7310
        pop esi
        add esp, 0x30
        ret 0x8
dabA_8:
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [esi]
        push 0x0
        push 0x72b45e52
        push ecx
        push edx
        call ext_006A7310
        pop esi
        add esp, 0x30
        ret 0x8
dabA_9:
        mov eax, dword ptr [esi + 0x4]
        mov ecx, dword ptr [esi]
        push 0x0
        push 0x395a2f29
        push eax
        push ecx
        call ext_006A7310
        pop esi
        add esp, 0x30
        ret 0x8
dabA_10:
        mov edx, dword ptr [esi + 0x4]
        mov eax, dword ptr [esi]
        push 0x0
        push 0x5bdafd3e
        push edx
        push eax
        call ext_006A7310
        pop esi
        add esp, 0x30
        ret 0x8
dabA_11:
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [esi]
        push 0x0
        push 0x5bdafd3e
        push ecx
        push edx
        call ext_006A7310
        pop esi
        add esp, 0x30
        ret 0x8
dabA_12:
        mov eax, dword ptr [esi + 0x4]
        mov ecx, dword ptr [esi]
        push 0x0
        push 0x72d1c320
        push eax
        push ecx
        call ext_006A7310
        pop esi
        add esp, 0x30
        ret 0x8
dabA_default:
        xor eax, eax
        xor edx, edx
        pop esi
        add esp, 0x30
        ret 0x8
dabA_alt:
        mov edx, dword ptr [esp + 0x3c]
        lea eax, [esp + 0xc]
        push edx
        lea ecx, [esp + 0x18]
        push eax
        lea edx, [esp + 0xc]
        push ecx
        lea eax, [esp + 0x28]
        push edx
        lea ecx, [esp + 0x34]
        push eax
        lea edx, [esp + 0x40]
        push ecx
        push edx
        mov ecx, esi
        call ext_006DAE30
        mov eax, dword ptr [esp + 0x4]
        mov edx, dword ptr [esp + 0x8]
        pop esi
        add esp, 0x30
        ret 0x8
    }
}

// [0x006DEF30] sub_006DEF30 (464 bytes)
extern "C" void ext_006DE7C0();
extern "C" void ext_006DE970();
extern "C" void ext_006DEEC0();
extern "C" int mem_00AAC100;
extern "C" int mem_00AAC104;
extern "C" int mem_00AAC108;
extern "C" int mem_00AA8C98;
extern "C" int mem_00AA8C9C;
extern "C" int mem_00AA8CA0;
extern "C" int mem_00AA8CA4;
extern "C" int mem_00AA8CA8;
extern "C" int mem_00AA8CAC;

// [0x006DEF30] __thiscall, ret 0xc: three out-pointer stack args (a1 at esp+0x10 after pushes).
extern "C" __declspec(naked) void __fastcall fn_006DEF30(void* self, int edx_unused, void* a1, void* a2, void* a3) {
    __asm {
        push ebx
        push esi
        push edi
        mov ebx, ecx
        push offset mem_00AA8CAC
        call ext_006DE7C0
        mov esi, eax
        test esi, esi
        jne L_DEF58
        mov eax, dword ptr [mem_00AAC100]
        mov ecx, ebx
        push eax
        call ext_006DE970
        mov esi, eax
        test esi, esi
        je L_DEF5C
L_DEF58:
        mov al, 1
        jmp L_DEF5E
L_DEF5C:
        xor al, al
L_DEF5E:
        test esi, esi
        je L_DF024
L_DEF66:
        test al, al
        je L_DEFBB
        push offset mem_00AA8CA8
        mov ecx, esi
        call ext_006DE7C0
        mov ecx, eax
        call ext_006DEEC0
        mov edi, dword ptr [esp + 0x10]
        test eax, eax
        mov dword ptr [edi], eax
        je L_DEFBB
        push offset mem_00AA8CA4
        mov ecx, esi
        call ext_006DE7C0
        mov ecx, eax
        call ext_006DEEC0
        test eax, eax
        mov dword ptr [edi + 0x4], eax
        je L_DEFBB
        push offset mem_00AA8CA0
        mov ecx, esi
        call ext_006DE7C0
        mov ecx, eax
        call ext_006DEEC0
        test eax, eax
        mov dword ptr [edi + 0x8], eax
        jne L_DF028
L_DEFBB:
        xor al, al
L_DEFBD:
        test esi, esi
        je L_DF059
        test al, al
        je L_DF087
        push offset mem_00AA8CA8
        mov ecx, esi
        call ext_006DE7C0
        mov ecx, eax
        call ext_006DEEC0
        mov edi, dword ptr [esp + 0x14]
        test eax, eax
        mov dword ptr [edi], eax
        je L_DF087
        push offset mem_00AA8CA4
        mov ecx, esi
        call ext_006DE7C0
        mov ecx, eax
        call ext_006DEEC0
        test eax, eax
        mov dword ptr [edi + 0x4], eax
        je L_DF087
        push offset mem_00AA8CA0
        mov ecx, esi
        call ext_006DE7C0
        mov ecx, eax
        call ext_006DEEC0
        test eax, eax
        mov dword ptr [edi + 0x8], eax
        jne L_DF05D
        jmp L_DF087
L_DF024:
        test al, al
        je L_DEFBB
L_DF028:
        push offset mem_00AA8C9C
        mov ecx, ebx
        call ext_006DE7C0
        mov esi, eax
        test esi, esi
        jne L_DF052
        mov ecx, dword ptr [mem_00AAC108]
        push ecx
        mov ecx, ebx
        call ext_006DE970
        mov esi, eax
        test esi, esi
        je L_DEFBB
L_DF052:
        mov al, 1
        jmp L_DEFBD
L_DF059:
        test al, al
        je L_DF087
L_DF05D:
        push offset mem_00AA8C98
        mov ecx, ebx
        call ext_006DE7C0
        mov esi, eax
        test esi, esi
        jne L_DF083
        mov edx, dword ptr [mem_00AAC104]
        mov ecx, ebx
        push edx
        call ext_006DE970
        mov esi, eax
        test esi, esi
        je L_DF087
L_DF083:
        mov al, 1
        jmp L_DF089
L_DF087:
        xor al, al
L_DF089:
        test esi, esi
        je L_DF0EC
        test al, al
        je L_DF0EA
        push offset mem_00AA8CA8
        mov ecx, esi
        call ext_006DE7C0
        mov ecx, eax
        call ext_006DEEC0
        mov edi, dword ptr [esp + 0x18]
        test eax, eax
        mov dword ptr [edi], eax
        je L_DF0EA
        push offset mem_00AA8CA4
        mov ecx, esi
        call ext_006DE7C0
        mov ecx, eax
        call ext_006DEEC0
        test eax, eax
        mov dword ptr [edi + 0x4], eax
        je L_DF0EA
        push offset mem_00AA8CA0
        mov ecx, esi
        call ext_006DE7C0
        mov ecx, eax
        call ext_006DEEC0
        test eax, eax
        mov dword ptr [edi + 0x8], eax
        je L_DF0EA
        pop edi
        pop esi
        mov al, 1
        pop ebx
        ret 0xc
L_DF0EA:
        xor al, al
L_DF0EC:
        pop edi
        pop esi
        pop ebx
        ret 0xc
    }
}

// [0x006D7ED0] sub_006D7ED0 (464 bytes)
extern "C" void ext_006A5C62();
extern "C" void ext_006BC380();
extern "C" void ext_006D2170();
extern "C" void ext_006D2300();
extern "C" void ext_006EF800();
extern "C" void ext_006FC9B0();
extern "C" void ext_006FDE80();
extern "C" void ext_006FDF70();
extern "C" void ext_00715550();
extern "C" void ext_0078D720();

// ret 0xc, __thiscall-style: self in ecx, dummy edx, 3 stack args (a1 at [entry+4], a2 at [entry+8]).
extern "C" __declspec(naked) void __fastcall fn_006D7ED0(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        push -1
        _emit 0x68
        _emit 0xdc
        _emit 0x92
        _emit 0x8b
        _emit 0x00
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
        sub esp, 0xc
        push ebx
        push ebp
        push esi
        mov edx, dword ptr [esp + 0x30]
        mov esi, ecx
        push edi
        xor ecx, ecx
        xor ebp, ebp
        mov eax, dword ptr [esi + 0x1dc]
        lea ebx, [esi + 0x1c4]
        mov dword ptr [esp + 0x14], ecx
        mov dword ptr [esp + 0x10], eax
        mov eax, dword ptr [ebx]
        lea ecx, [esp + 0x10]
        push ecx
        push eax
        mov ecx, ebx
        mov dword ptr [esp + 0x20], edx
        call ext_006D2170
        push ebp
        mov ecx, esi
        call ext_006FDF70
        mov edi, eax
        cmp edi, ebp
        jne ed7_L1
        mov ecx, esi
        call ext_006FDE80
        push eax
        mov ecx, esi
        call ext_006FDF70
        mov edi, eax
ed7_L1:
        mov ecx, edi
        call ext_006BC380
        mov esi, eax
        cmp esi, ebp
        jne ed7_L2
        cmp dword ptr [ebx], 1
        jne ed7_end
        cmp dword ptr [esp + 0x2c], -1
        je ed7_end
        push 0x38
        call ext_006A5C62
        mov esi, eax
        add esp, 4
        mov dword ptr [esp + 0x34], esi
        cmp esi, ebp
        mov dword ptr [esp + 0x24], ebp
        je ed7_nullobj
        push 0x10
        lea ecx, [esi + 0x8]
        mov dword ptr [esi], ebp
        mov dword ptr [esi + 0x4], ebp
        call ext_0078D720
        push 0x10
        lea ecx, [esi + 0x20]
        mov byte ptr [esp + 0x28], 0x1
        call ext_0078D720
        jmp ed7_L3
ed7_nullobj:
        xor esi, esi
ed7_L3:
        push esi
        mov ecx, edi
        mov dword ptr [esp + 0x28], -1
        call ext_006FC9B0
        cmp esi, ebp
        je ed7_end
ed7_L2:
        cmp dword ptr [esi], 3
        jne ed7_end
        mov eax, dword ptr [esi + 0x4]
        cmp eax, 1
        je ed7_L4
        cmp eax, 2
        jne ed7_end
ed7_L4:
        mov eax, dword ptr [ebx]
        lea ecx, [esi + 0x20]
        push eax
        call ext_006D2300
        mov eax, dword ptr [ebx]
        mov edx, dword ptr [esi + 0x30]
        mov ecx, dword ptr [esp + 0x2c]
        mov dword ptr [edx + 4*eax - 0x4], ecx
ed7_end:
        mov ecx, edi
        call ext_00715550
        mov esi, eax
        cmp esi, ebp
        jne ed7_L5
        cmp dword ptr [ebx], 1
        jne ed7_final
        cmp dword ptr [esp + 0x30], -1
        je ed7_final
        push 0x48
        call ext_006A5C62
        mov esi, eax
        add esp, 4
        mov dword ptr [esp + 0x2c], esi
        cmp esi, ebp
        mov dword ptr [esp + 0x24], 0x2
        je ed7_nullobj2
        push 0x10
        lea ecx, [esi + 0x8]
        mov dword ptr [esi], ebp
        mov dword ptr [esi + 0x4], ebp
        call ext_0078D720
        push 0x10
        lea ecx, [esi + 0x20]
        mov byte ptr [esp + 0x28], 0x3
        call ext_0078D720
        mov dword ptr [esi + 0x40], ebp
        mov dword ptr [esi + 0x38], ebp
        mov dword ptr [esi + 0x4], 0x2
        mov dword ptr [esi + 0x44], 0x3ff00000
        jmp ed7_L6
ed7_nullobj2:
        xor esi, esi
ed7_L6:
        push esi
        mov ecx, edi
        mov dword ptr [esp + 0x28], -1
        call ext_006EF800
        cmp esi, ebp
        je ed7_final
ed7_L5:
        cmp dword ptr [esi], 3
        jne ed7_final
        mov eax, dword ptr [esi + 0x4]
        cmp eax, 1
        je ed7_L7
        cmp eax, 2
        jne ed7_final
ed7_L7:
        mov edx, dword ptr [ebx]
        lea ecx, [esi + 0x20]
        push edx
        call ext_006D2300
        mov eax, dword ptr [ebx]
        mov ecx, dword ptr [esi + 0x30]
        mov edx, dword ptr [esp + 0x30]
        mov dword ptr [ecx + 4*eax - 0x4], edx
ed7_final:
        mov ecx, dword ptr [esp + 0x1c]
        pop edi
        pop esi
        pop ebp
        pop ebx
        _emit 0x64
        _emit 0x89
        _emit 0x0d
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        add esp, 0x18
        ret 0xc
    }
}

// [0x006D5FD0] sub_006D5FD0 (464 bytes)
extern "C" void ext_006B9960();
extern "C" void ext_006BC7B0();
extern "C" void ext_006BC7C0();
extern "C" void ext_006D3D30();
extern "C" void ext_006D5F50();
extern "C" void ext_006D66D0();
extern "C" void ext_006E7440();
extern "C" void ext_0072B0A0();
extern "C" void ext_0072CBF0();
extern "C" void ext_0072CD20();
extern "C" void ext_00755000();
extern "C" void ext_00755020();

extern "C" __declspec(naked) void __fastcall fn_006D5FD0(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        push -1
        push 0x8bfb8b
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x1d4
        push ebx
        push esi
        mov esi, ecx
        push edi
        lea ecx, [esp + 0x10]
        call ext_0072CBF0
        mov eax, dword ptr [esi + 0xfc]
        mov dword ptr [esp + 0x1e8], 0x0
        mov byte ptr [esp + 0xf], 0x0
        mov ecx, dword ptr [eax + 0x4]
        test ecx, ecx
        jne L_603C
        mov ecx, esi
        call ext_006D6350
        test al, al
        jne L_603C
L_6021:
        lea ecx, [esp + 0x10]
        mov dword ptr [esp + 0x1e8], 0xffffffff
        call ext_0072CD20
        xor al, al
        jmp L_6181
L_603C:
        mov edi, dword ptr [esp + 0x1f4]
        test edi, edi
        jne L_609C
        mov ecx, dword ptr [esi + 0xfc]
        mov ebx, 0x1
        mov eax, dword ptr [ecx]
        test eax, eax
        je L_6061
        cmp eax, ebx
        je L_6061
        cmp eax, 0x2
        jne L_6083
L_6061:
        mov al, byte ptr [esi + 0x100]
        test al, al
        je L_6083
        lea edx, [esp + 0x10]
        mov ecx, esi
        push edx
        call ext_006D66D0
        lea eax, [esp + 0x10]
        lea edi, [esp + 0x10]
        test eax, eax
        jne L_609C
L_6083:
        push 0x0
        mov ecx, esi
        call ext_006D5F50
        mov edi, eax
        test edi, edi
        je L_6021
        mov byte ptr [esi + 0x100], bl
        mov byte ptr [esp + 0xf], bl
L_609C:
        mov ecx, dword ptr [esi + 0xfc]
        mov dword ptr [esi + 0xac], edi
        push ebp
        mov ebp, dword ptr [esp + 0x1f4]
        mov ecx, dword ptr [ecx + 0x4]
        push edi
        push ebp
        mov edx, dword ptr [ecx]
        call dword ptr [edx + 0x14]
        mov bl, al
        test bl, bl
        je L_60FD
        mov eax, dword ptr [esi + 0x168]
        test eax, eax
        je L_60FD
        mov ecx, ebp
        call ext_006BC7B0
        test eax, eax
        jne L_60E8
        mov ecx, dword ptr [esi + 0xa8]
        call ext_006D3D30
        push eax
        mov ecx, ebp
        call ext_006BC7C0
L_60E8:
        mov eax, dword ptr [esi + 0x168]
        mov ecx, ebp
        push eax
        call ext_006BC7B0
        mov ecx, eax
        call ext_0072B0A0
L_60FD:
        lea ebp, [esi + 0xb0]
        mov ecx, ebp
        call ext_006B9960
        mov ecx, dword ptr [esi + 0xfc]
        push ebp
        mov ecx, dword ptr [ecx + 0x4]
        call ext_00755020
        test bl, bl
        mov dword ptr [esi + 0xac], 0x0
        pop ebp
        jne L_6156
        mov edx, dword ptr [esi + 0xfc]
        mov ecx, dword ptr [edx + 0x4]
        call ext_00755000
        cmp eax, 0x5
        jne L_614C
        push 0xaa90a4
        push 0x9
        lea ecx, [esi + 0x4]
        call ext_006E7410
        jmp L_6156
L_614C:
        push 0x7
        lea ecx, [esi + 0x4]
        call ext_006E7440
L_6156:
        mov al, byte ptr [esp + 0xf]
        test al, al
        je L_616B
        test edi, edi
        je L_616B
        mov eax, dword ptr [edi]
        push 0x0
        mov ecx, edi
        call dword ptr [eax + 0x4]
L_616B:
        lea ecx, [esp + 0x10]
        mov dword ptr [esp + 0x1e8], 0xffffffff
        call ext_0072CD20
        mov al, bl
L_6181:
        mov ecx, dword ptr [esp + 0x1e0]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x1e0
        ret 0x8
    }
}

// [0x006DD040] sub_006DD040 (400 bytes)
extern "C" void ext_006BC380();
extern "C" const char* __fastcall ext_006C9330(void* self);
extern "C" void ext_006C9360();
extern "C" void ext_006DD1D0();
extern "C" void ext_006DD560();
extern "C" void ext_006DE7C0();
extern "C" void ext_006DE9D0();
extern "C" void ext_006DEEC0();
extern "C" void ext_00711DB0();
extern "C" void ext_00712000();
extern "C" void ext_00712010();
extern "C" int mem_009251D0;
extern "C" int mem_00AA8CB0;
extern "C" int mem_00AA93BC;
extern "C" __declspec(naked) void __fastcall fn_006DD040(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x18]
        push edi
        mov edi, ecx
        push offset mem_00AA8CB0
        mov ecx, esi
        mov dword ptr [esp + 0x14], edi
        call ext_006C9330
        push eax
        call dword ptr [mem_009251D0]
        mov ebp, dword ptr [esp + 0x20]
        add esp, 0x8
        test eax, eax
        sete bl
        mov ecx, ebp
        mov byte ptr [esp + 0x1c], bl
        call ext_00712000
        push eax
        mov ecx, esi
        call ext_006C9360
        mov ecx, eax
        call ext_006DE7C0
        test eax, eax
        jne done
        mov ecx, ebp
        call ext_00712010
        test eax, eax
        mov ecx, ebp
        je L134
        call ext_00712010
        mov ecx, eax
        call ext_006BC380
        cmp eax, 1
        mov dword ptr [esp + 0x18], eax
        jle L17c
    L0ba:
        push 0
        mov ecx, ebp
        call ext_00712000
        push eax
        mov ecx, esi
        call ext_006C9360
        mov ecx, eax
        call ext_006DE9D0
        mov esi, eax
        mov eax, dword ptr [esp + 0x18]
        xor edi, edi
        test eax, eax
        jle L1b0
        mov ebx, offset mem_00AA93BC
    L0e7:
        mov eax, dword ptr [esi]
        push edi
        mov ecx, esi
        call dword ptr [eax + 0x18]
        test eax, eax
        jne L107
        mov ecx, dword ptr [ebx]
        push 1
        push ecx
        mov ecx, esi
        call ext_006DE9D0
        mov edx, dword ptr [esi]
        push edi
        mov ecx, esi
        call dword ptr [edx + 0x18]
    L107:
        mov ecx, eax
        call ext_006DEEC0
        test eax, eax
        je L126
        mov cl, byte ptr [esp + 0x1c]
        test cl, cl
        je L126
        mov ecx, dword ptr [esp + 0x10]
        push eax
        push edi
        push ebp
        call ext_006DD1D0
    L126:
        mov eax, dword ptr [esp + 0x18]
        inc edi
        add ebx, 4
        cmp edi, eax
        jl L0e7
        jmp L1b0
    L134:
        call ext_00711DB0
        cmp eax, 0xd
        je L16f
        mov ecx, ebp
        call ext_00711DB0
        cmp eax, 0xe
        je L16f
        mov ecx, ebp
        call ext_00711DB0
        cmp eax, 0xc
        je L162
        mov ecx, ebp
        call ext_00711DB0
        cmp eax, 0xf
        jne L17c
    L162:
        mov dword ptr [esp + 0x18], 4
        jmp L0ba
    L16f:
        mov dword ptr [esp + 0x18], 3
        jmp L0ba
    L17c:
        push 1
        mov ecx, ebp
        call ext_00712000
        push eax
        mov ecx, esi
        call ext_006C9360
        mov ecx, eax
        call ext_006DE9D0
        mov esi, eax
        mov ecx, esi
        call ext_006DEEC0
        test eax, eax
        je L1b0
        test bl, bl
        je L1b0
        push eax
        push 0
        push ebp
        mov ecx, edi
        call ext_006DD1D0
    L1b0:
        test esi, esi
        je done
        push ebp
        push esi
        call ext_006DD560
        add esp, 8
    done:
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 8
    }
}

// [0x006D66D0] sub_006D66D0 (480 bytes)
extern "C" void __cdecl ext_006A5C5C(void* ptr);
extern "C" void ext_006B9D70();
extern "C" void ext_006B9E60();
extern "C" void ext_006D2250();
extern "C" void ext_006F9BE0();
extern "C" void ext_0072CEF0();

// [0x006D66D0] __thiscall, ret 0x4: self in ecx, one stack argument.
extern "C" __declspec(naked) void __fastcall fn_006D66D0(void* self, int edx_unused, void* a1) {
    __asm {
        push -1
        push 0x8b915e
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 0x1c]
        push esi
        push edi
        mov esi, ecx
        mov eax, dword ptr [ebp + 0xf0]
        lea ebx, [ebp + 0xf0]
        test eax, eax
        je L_6753
L_6700:
        mov ecx, dword ptr [ebx + 0x10]
        dec eax
        mov dword ptr [esp + 0x24], eax
        mov edi, dword ptr [ecx + 4*eax]
        test edi, edi
        mov dword ptr [esp + 0x10], edi
        je L_674F
        lea ecx, [edi + 0x98]
        mov dword ptr [esp + 0x1c], 1
        call ext_006B9D70
        lea ecx, [edi + 0x4c]
        mov byte ptr [esp + 0x1c], 0
        call ext_006B9D70
        mov ecx, edi
        mov dword ptr [esp + 0x1c], 0xffffffff
        call ext_006B9D70
        push edi
        call ext_006A5C5C
        mov eax, dword ptr [esp + 0x28]
        add esp, 4
L_674F:
        test eax, eax
        jne L_6700
L_6753:
        mov ecx, ebx
        call ext_006D2250
        mov eax, dword ptr [esi + 0x150]
        xor edi, edi
        test eax, eax
        mov dword ptr [esp + 0x10], eax
        jle L_67C0
L_676A:
        push 0x118
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp + 0x24], eax
        test eax, eax
        mov dword ptr [esp + 0x1c], 2
        je L_679A
        mov edx, dword ptr [esi + 0x160]
        mov ecx, dword ptr [edx + 4*edi]
        push ecx
        mov ecx, eax
        call ext_006F9BE0
        jmp L_679C
L_679A:
        xor eax, eax
L_679C:
        mov dword ptr [esp + 0x24], eax
        mov eax, dword ptr [ebx]
        lea edx, [esp + 0x24]
        mov ecx, ebx
        push edx
        push eax
        mov dword ptr [esp + 0x24], 0xffffffff
        call ext_006D2170
        mov eax, dword ptr [esp + 0x10]
        inc edi
        cmp edi, eax
        jl L_676A
L_67C0:
        lea ecx, [esi + 0x16c]
        push ecx
        lea ecx, [ebp + 0x108]
        call ext_006B9E60
        lea edx, [esi + 0x104]
        lea ecx, [ebp + 0x15c]
        push edx
        call ext_006B9E60
        mov al, byte ptr [esi + 0x1b8]
        mov ecx, ebp
        push eax
        push 0x0
        call ext_0072CEF0
        mov cl, byte ptr [esi + 0x1b9]
        push ecx
        push 0x1
        mov ecx, ebp
        call ext_0072CEF0
        mov dl, byte ptr [esi + 0x1ba]
        mov ecx, ebp
        push edx
        push 0x2
        call ext_0072CEF0
        mov al, byte ptr [esi + 0x1bb]
        mov ecx, ebp
        push eax
        push 0x4
        call ext_0072CEF0
        mov cl, byte ptr [esi + 0x1bc]
        push ecx
        push 0x5
        mov ecx, ebp
        call ext_0072CEF0
        mov dl, byte ptr [esi + 0x1bd]
        mov ecx, ebp
        push edx
        push 0x6
        call ext_0072CEF0
        mov al, byte ptr [esi + 0x1be]
        mov ecx, ebp
        push eax
        push 0x7
        call ext_0072CEF0
        mov cl, byte ptr [esi + 0x1bf]
        push ecx
        push 0x8
        mov ecx, ebp
        call ext_0072CEF0
        mov dl, byte ptr [esi + 0x1c0]
        mov ecx, ebp
        push edx
        push 0x9
        call ext_0072CEF0
        mov al, byte ptr [esi + 0x1c1]
        mov ecx, ebp
        push eax
        push 0xa
        call ext_0072CEF0
        mov cl, byte ptr [esi + 0x1c2]
        push ecx
        push 0xb
        mov ecx, ebp
        call ext_0072CEF0
        mov ecx, dword ptr [esp + 0x14]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret 0x4
    }
}
