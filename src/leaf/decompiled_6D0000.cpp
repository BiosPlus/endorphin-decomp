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

// [0x006D6D10] sub_006D6D10 (480 bytes)
extern "C" void ext_0072CBF0();
extern "C" void ext_006D73A0();
extern "C" void ext_006BC7B0();
extern "C" void ext_006BC7C0();
extern "C" void ext_006D3D30();
extern "C" void ext_0072B0A0();
extern "C" void ext_006D72B0();
extern "C" void ext_006E7440();
extern "C" void ext_0072CD20();
extern "C" void ext_006B9960();
extern "C" void ext_00755020();
extern "C" void ext_006D7380();

extern "C" __declspec(naked) void __fastcall fn_006D6D10(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        push -1
        push 0x8bfb8b
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x1d0
        push ebx
        push esi
        mov esi, ecx
        push edi
        lea ecx, [esp + 0xc]
        call ext_0072CBF0
        mov edi, dword ptr [esp + 0x1f0]
        mov ebx, dword ptr [esp + 0x1ec]
        test edi, edi
        mov dword ptr [esp + 0x1e4], 0x0
        jne L_6DFA
        mov eax, dword ptr [esi + 0xfc]
        mov eax, dword ptr [eax]
        test eax, eax
        je L_6D81
        cmp eax, 0x1
        je L_6D81
        cmp eax, 0x2
        je L_6D81
        cmp eax, 0x3
        je L_6D81
        cmp eax, 0x4
        je L_6D81
        push 0xa
        jmp L_6E07
L_6D81:
        lea ecx, [esp + 0xc]
        push ecx
        mov ecx, esi
        call ext_006D73A0
        mov ecx, ebx
        call ext_006BC7B0
        test eax, eax
        mov eax, dword ptr [esp + 0x160]
        je L_6DC9
        test eax, eax
        je L_6DA6
        push eax
        jmp L_6DE8
L_6DA6:
        mov ecx, dword ptr [esi + 0xa8]
        call ext_006D3D30
        mov ecx, ebx
        mov dword ptr [esp + 0x160], eax
        call ext_006BC7B0
        mov ecx, dword ptr [esp + 0x160]
        push eax
        jmp L_6DF1
L_6DC9:
        test eax, eax
        je L_6DF6
        mov ecx, dword ptr [esi + 0xa8]
        call ext_006D3D30
        push eax
        mov ecx, ebx
        call ext_006BC7C0
        mov edx, dword ptr [esp + 0x160]
        push edx
L_6DE8:
        mov ecx, ebx
        call ext_006BC7B0
        mov ecx, eax
L_6DF1:
        call ext_0072B0A0
L_6DF6:
        lea edi, [esp + 0xc]
L_6DFA:
        mov ecx, esi
        call ext_006D72B0
        test al, al
        jne L_6E2A
        push 0x4
L_6E07:
        lea ecx, [esi + 0x4]
        call ext_006E7440
        lea ecx, [esp + 0xc]
        mov dword ptr [esp + 0x1e4], 0xffffffff
        call ext_0072CD20
        xor al, al
        jmp L_6ECD
L_6E2A:
        mov ecx, dword ptr [esi + 0xfc]
        mov eax, dword ptr [ecx]
        test eax, eax
        je L_6E4A
        cmp eax, 0x1
        je L_6E4A
        cmp eax, 0x2
        je L_6E4A
        cmp eax, 0x3
        je L_6E4A
        cmp eax, 0x4
        jne L_6E50
L_6E4A:
        mov dword ptr [esi + 0xac], edi
L_6E50:
        mov ecx, dword ptr [ecx + 0x4]
        push edi
        push ebx
        mov eax, dword ptr [ecx]
        call dword ptr [eax + 0x14]
        lea edi, [esi + 0xb0]
        mov bl, al
        mov ecx, edi
        call ext_006B9960
        mov ecx, dword ptr [esi + 0xfc]
        push edi
        mov ecx, dword ptr [ecx + 0x4]
        call ext_00755020
        mov edx, dword ptr [esi + 0xfc]
        mov eax, dword ptr [edx]
        test eax, eax
        je L_6E98
        cmp eax, 0x1
        je L_6E98
        cmp eax, 0x2
        je L_6E98
        cmp eax, 0x3
        je L_6E98
        cmp eax, 0x4
        jne L_6EA2
L_6E98:
        mov dword ptr [esi + 0xac], 0x0
L_6EA2:
        mov ecx, esi
        call ext_006D7380
        test bl, bl
        jne L_6EB7
        push 0x5
        lea ecx, [esi + 0x4]
        call ext_006E7440
L_6EB7:
        lea ecx, [esp + 0xc]
        mov dword ptr [esp + 0x1e4], 0xffffffff
        call ext_0072CD20
        mov al, bl
L_6ECD:
        mov ecx, dword ptr [esp + 0x1dc]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0x1dc
        ret 0x8
    }
}

// [0x006DE1C0] sub_006DE1C0 (496 bytes)
extern "C" void ext_006DDD50();
extern "C" void ext_006DDF00();
extern "C" void ext_006DE1C0();
extern "C" void ext_006DE3B0();
extern "C" void ext_006DE3D0();
extern "C" void ext_006DE3E0();
extern "C" void ext_006DECD0();
extern "C" void ext_006DECE0();
extern "C" void ext_006DEF20();
extern "C" void ext_006E6260();
extern "C" void ext_006E62A0();
extern "C" void ext_006CA140();
extern "C" void ext_006CE720();
extern "C" void ext_006A5C62();

extern "C" __declspec(naked) void __fastcall fn_006DE1C0(void* self, int edx_unused, int a1, int a2, int a3, int a4) {
    __asm {
        push -1
        push 0x8b9591
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        mov al, byte ptr [esp + 0x14]
        push ebx
        push ebp
        push esi
        test al, al
        push edi
        mov esi, ecx
        je short L_1F8
        push esi
        call ext_006DDD50
        mov ebx, dword ptr [esp + 0x34]
        add esp, 4
        mov ebp, eax
        jmp L_2A6
    L_1F8:
        mov ebx, dword ptr [esp + 0x30]
        cmp ebx, -1
        jne short L_208
        mov ebx, dword ptr [esi + 0x58]
        mov dword ptr [esp + 0x30], ebx
    L_208:
        push 0xa0
        call ext_006A5C62
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 0x10], edi
        test edi, edi
        mov dword ptr [esp + 0x1c], 0
        je short L_24F
        mov eax, dword ptr [esi + 0x54]
        push ebx
        push eax
        mov ecx, esi
        call ext_006DE3E0
        push eax
        mov ecx, esi
        call ext_006DE3D0
        push eax
        mov ecx, esi
        call ext_006DE3B0
        push eax
        mov ecx, edi
        call ext_006DDF00
        mov edi, eax
        jmp short L_251
    L_24F:
        xor edi, edi
    L_251:
        mov ecx, dword ptr [esi + 0x9c]
        mov dword ptr [esp + 0x1c], 0xffffffff
        mov dword ptr [edi + 0x9c], ecx
        mov dl, byte ptr [esi + 0x10]
        mov byte ptr [esp + 0x10], dl
        mov eax, dword ptr [esp + 0x10]
        push eax
        mov ecx, edi
        mov ebp, edi
        call ext_006E6260
        mov eax, dword ptr [esi + 0x60]
        mov ecx, edi
        push eax
        call ext_006E62A0
        test byte ptr [esi + 0x18], 0x2
        je short L_293
        mov eax, dword ptr [edi + 0x18]
        or al, 0x2
        mov dword ptr [edi + 0x18], eax
    L_293:
        test ebx, ebx
        je short L_2A6
        mov ecx, esi
        call ext_006DECD0
        push eax
        mov ecx, edi
        call ext_006DECE0
    L_2A6:
        mov al, byte ptr [esp + 0x28]
        test al, al
        je short L_2F7
        mov eax, dword ptr [esi + 0x38]
        test eax, eax
        je short L_2F7
        push 0x98
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp + 0x10], eax
        test eax, eax
        mov dword ptr [esp + 0x1c], 1
        je short L_2DD
        mov ecx, eax
        call ext_006CA140
        mov edi, eax
        jmp short L_2DF
    L_2DD:
        xor edi, edi
    L_2DF:
        mov ecx, dword ptr [esi + 0x38]
        push 1
        push ecx
        mov ecx, edi
        mov dword ptr [esp + 0x24], 0xffffffff
        call ext_006CE720
        push edi
        jmp short L_337
    L_2F7:
        mov al, byte ptr [esp + 0x2c]
        test al, al
        je short L_33E
        mov eax, dword ptr [esi + 0x38]
        test eax, eax
        je short L_33E
        push 0x98
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp + 0x10], eax
        test eax, eax
        mov dword ptr [esp + 0x1c], 2
        je short L_32C
        mov ecx, eax
        call ext_006CA140
        jmp short L_32E
    L_32C:
        xor eax, eax
    L_32E:
        mov dword ptr [esp + 0x1c], 0xffffffff
        push eax
    L_337:
        mov ecx, ebp
        call ext_006DEF20
    L_33E:
        mov edx, dword ptr [esi]
        mov ecx, esi
        xor edi, edi
        call dword ptr [edx + 0x14]
        test eax, eax
        jle short L_38D
        jmp short L_351
    L_34D:
        mov ebx, dword ptr [esp + 0x30]
    L_351:
        mov eax, dword ptr [esp + 0x2c]
        mov ecx, dword ptr [esp + 0x28]
        mov edx, dword ptr [ebp]
        push ebx
        push eax
        mov eax, dword ptr [esp + 0x2c]
        push ecx
        push eax
        mov eax, dword ptr [esi]
        push edi
        mov ecx, esi
        mov dword ptr [esp + 0x24], edx
        call dword ptr [eax + 0x18]
        mov ecx, eax
        call ext_006DE1C0
        mov edx, dword ptr [esp + 0x10]
        push eax
        mov ecx, ebp
        call dword ptr [edx + 0x8]
        mov eax, dword ptr [esi]
        mov ecx, esi
        inc edi
        call dword ptr [eax + 0x14]
        cmp edi, eax
        jl short L_34D
    L_38D:
        mov ecx, dword ptr [esp + 0x14]
        pop edi
        mov eax, ebp
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 0x10
    }
}

// [0x006D68B0] sub_006D68B0 (544 bytes)
extern "C" void __cdecl ext_006A5C5C(void* ptr);
extern "C" void ext_006B9D70();
extern "C" void ext_006B9E60();
extern "C" void ext_006D2250();
extern "C" void ext_006D3D30();
extern "C" void ext_006F9BE0();
extern "C" void ext_0072B0A0();
extern "C" void ext_0072CF10();

extern "C" __declspec(naked) void __fastcall fn_006D68B0(void* self, int edx_unused, void* arg) {
    __asm {
        push -1
        push 0x8b915e
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ebx, dword ptr [edi + 0x150]
        lea ebp, [edi + 0x150]
        test ebx, ebx
        je short loc_6927
loc_68DC:
        mov eax, dword ptr [ebp + 0x10]
        dec ebx
        mov esi, dword ptr [eax + 4*ebx]
        test esi, esi
        mov dword ptr [esp + 0x10], esi
        je short loc_6923
        lea ecx, [esi + 0x98]
        mov dword ptr [esp + 0x1c], 0x1
        call ext_006B9D70
        lea ecx, [esi + 0x4c]
        mov byte ptr [esp + 0x1c], 0x0
        call ext_006B9D70
        mov ecx, esi
        mov dword ptr [esp + 0x1c], 0xffffffff
        call ext_006B9D70
        push esi
        call ext_006A5C5C
        add esp, 0x4
loc_6923:
        test ebx, ebx
        jne short loc_68DC
loc_6927:
        mov ecx, ebp
        call ext_006D2250
        mov esi, dword ptr [esp + 0x24]
        xor ebx, ebx
        mov eax, dword ptr [esi + 0xf0]
        test eax, eax
        mov dword ptr [esp + 0x10], eax
        jle short loc_6999
loc_6942:
        push 0x118
        call ext_006A5C62
        add esp, 0x4
        mov dword ptr [esp + 0x24], eax
        test eax, eax
        mov dword ptr [esp + 0x1c], 0x2
        je short loc_6972
        mov ecx, dword ptr [esi + 0x100]
        mov edx, dword ptr [ecx + 4*ebx]
        mov ecx, eax
        push edx
        call ext_006F9BE0
        jmp short loc_6974
loc_6972:
        xor eax, eax
loc_6974:
        mov ecx, dword ptr [ebp]
        mov dword ptr [esp + 0x24], eax
        lea eax, [esp + 0x24]
        mov dword ptr [esp + 0x1c], 0xffffffff
        push eax
        push ecx
        mov ecx, ebp
        call ext_006D2170
        mov eax, dword ptr [esp + 0x10]
        inc ebx
        cmp ebx, eax
        jl short loc_6942
loc_6999:
        mov eax, dword ptr [edi + 0x168]
        test eax, eax
        je short loc_69B2
        mov ecx, dword ptr [edi + 0xa8]
        push eax
        mov edx, dword ptr [ecx]
        call dword ptr [edx + 0xa4]
loc_69B2:
        mov dword ptr [edi + 0x168], 0x0
        mov eax, dword ptr [esi + 0x154]
        test eax, eax
        je short loc_69E5
        mov ecx, dword ptr [edi + 0xa8]
        call ext_006D3D30
        mov dword ptr [edi + 0x168], eax
        mov ecx, dword ptr [esi + 0x154]
        push ecx
        mov ecx, eax
        call ext_0072B0A0
loc_69E5:
        lea edx, [esi + 0x108]
        lea ecx, [edi + 0x16c]
        push edx
        call ext_006B9E60
        lea eax, [esi + 0x15c]
        lea ecx, [edi + 0x104]
        push eax
        call ext_006B9E60
        push 0x0
        mov ecx, esi
        call ext_0072CF10
        push 0x1
        mov ecx, esi
        mov byte ptr [edi + 0x1b8], al
        call ext_0072CF10
        push 0x2
        mov ecx, esi
        mov byte ptr [edi + 0x1b9], al
        call ext_0072CF10
        push 0x4
        mov ecx, esi
        mov byte ptr [edi + 0x1ba], al
        call ext_0072CF10
        push 0x5
        mov ecx, esi
        mov byte ptr [edi + 0x1bb], al
        call ext_0072CF10
        push 0x6
        mov ecx, esi
        mov byte ptr [edi + 0x1bc], al
        call ext_0072CF10
        push 0x7
        mov ecx, esi
        mov byte ptr [edi + 0x1bd], al
        call ext_0072CF10
        push 0x8
        mov ecx, esi
        mov byte ptr [edi + 0x1be], al
        call ext_0072CF10
        push 0x9
        mov ecx, esi
        mov byte ptr [edi + 0x1bf], al
        call ext_0072CF10
        push 0xa
        mov ecx, esi
        mov byte ptr [edi + 0x1c0], al
        call ext_0072CF10
        push 0xb
        mov ecx, esi
        mov byte ptr [edi + 0x1c1], al
        call ext_0072CF10
        mov ecx, dword ptr [esp + 0x14]
        mov byte ptr [edi + 0x1c2], al
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 0x4
    }
}

// [0x006D2D20] sub_006D2D20 (616 bytes)
extern "C" void ext_006D2130();
extern "C" void ext_006E73B0();
extern "C" void ext_00728D90();
extern "C" int mem_00B5D770;

extern "C" __declspec(naked) void __fastcall fn_006D2D20(void* self) {
    __asm {
        push -1
        push 0x8b8f78
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
        lea edi, [esi + 0x4]
        mov dword ptr [esp + 0x14], esi
        mov ecx, edi
        call ext_006D2130
        lea eax, [edi + 0x10]
        mov dword ptr [edi + 0x14], eax
        lea edi, [esi + 0x1c]
        xor ebx, ebx
        push 0x4
        push 0x10
        mov ecx, edi
        mov dword ptr [esp + 0x20], ebx
        call ext_006D2130
        lea ecx, [edi + 0x10]
        mov dword ptr [edi + 0x14], ecx
        lea edi, [esi + 0x34]
        push 0x4
        push 0x10
        mov ecx, edi
        mov byte ptr [esp + 0x20], 0x1
        call ext_006D2130
        lea edx, [edi + 0x10]
        mov dword ptr [edi + 0x14], edx
        lea edi, [esi + 0x4c]
        push 0x4
        push 0x10
        mov ecx, edi
        mov byte ptr [esp + 0x20], 0x2
        call ext_006D2130
        lea eax, [edi + 0x10]
        mov dword ptr [edi + 0x14], eax
        lea edi, [esi + 0x64]
        push 0x4
        push 0x10
        mov ecx, edi
        mov byte ptr [esp + 0x20], 0x3
        call ext_006D2130
        lea ecx, [edi + 0x10]
        mov dword ptr [edi + 0x14], ecx
        lea edi, [esi + 0x7c]
        push 0x4
        push 0x10
        mov ecx, edi
        mov byte ptr [esp + 0x20], 0x4
        call ext_006D2130
        lea edx, [edi + 0x10]
        mov dword ptr [edi + 0x14], edx
        lea edi, [esi + 0x94]
        push 0x4
        push 0x10
        mov ecx, edi
        mov byte ptr [esp + 0x20], 0x5
        call ext_006D2130
        lea eax, [edi + 0x10]
        mov dword ptr [edi + 0x14], eax
        lea edi, [esi + 0xac]
        push 0x4
        push 0x10
        mov ecx, edi
        mov byte ptr [esp + 0x20], 0x6
        call ext_006D2130
        lea ecx, [edi + 0x10]
        mov dword ptr [edi + 0x14], ecx
        push 0x4
        mov byte ptr [esp + 0x1c], 0x7
        lea edi, [esi + 0xc4]
        push 0x10
        mov ecx, edi
        call ext_006D2130
        lea edx, [edi + 0x10]
        mov dword ptr [edi + 0x14], edx
        lea edi, [esi + 0xdc]
        push 0x4
        push 0x10
        mov ecx, edi
        mov byte ptr [esp + 0x20], 0x8
        call ext_006D2130
        lea eax, [edi + 0x10]
        mov dword ptr [edi + 0x14], eax
        lea edi, [esi + 0xf4]
        push 0x4
        push 0x10
        mov ecx, edi
        mov byte ptr [esp + 0x20], 0x9
        call ext_006D2130
        lea ecx, [edi + 0x10]
        mov dword ptr [edi + 0x14], ecx
        lea edi, [esi + 0x10c]
        push 0x4
        push 0x10
        mov ecx, edi
        mov byte ptr [esp + 0x20], 0xa
        call ext_006D2130
        lea edx, [edi + 0x10]
        mov dword ptr [edi + 0x14], edx
        lea edi, [esi + 0x124]
        push 0x4
        push 0x10
        mov ecx, edi
        mov byte ptr [esp + 0x20], 0xb
        call ext_006D2130
        lea eax, [edi + 0x10]
        mov dword ptr [edi + 0x14], eax
        lea edi, [esi + 0x13c]
        push 0x4
        push 0x10
        mov ecx, edi
        mov byte ptr [esp + 0x20], 0xc
        call ext_006D2130
        lea ecx, [edi + 0x10]
        mov dword ptr [edi + 0x14], ecx
        lea edi, [esi + 0x154]
        push 0x4
        push 0x10
        mov ecx, edi
        mov byte ptr [esp + 0x20], 0xd
        call ext_006D2130
        lea edx, [edi + 0x10]
        mov dword ptr [edi + 0x14], edx
        lea edi, [esi + 0x16c]
        push 0x4
        push 0x10
        mov ecx, edi
        mov byte ptr [esp + 0x20], 0xe
        call ext_006D2130
        lea eax, [edi + 0x10]
        mov dword ptr [edi + 0x14], eax
        lea edi, [esi + 0x184]
        push 0x4
        push 0x10
        mov ecx, edi
        mov byte ptr [esp + 0x20], 0xf
        call ext_006D2130
        lea ecx, [edi + 0x10]
        mov dword ptr [edi + 0x14], ecx
        push 0x4
        mov byte ptr [esp + 0x1c], 0x10
        lea edi, [esi + 0x19c]
        push 0x10
        mov ecx, edi
        call ext_006D2130
        lea edx, [edi + 0x10]
        mov dword ptr [edi + 0x14], edx
        push 0x2
        push 0xaa8e58
        lea ecx, [esi + 0x1c4]
        mov byte ptr [esp + 0x20], 0x11
        mov dword ptr [esi + 0x1b4], ebx
        mov dword ptr [esi + 0x1b8], ebx
        mov dword ptr [esi + 0x1bc], ebx
        mov dword ptr [esi + 0x1c0], ebx
        call ext_006E73B0
        mov dword ptr [esi], 0x993874
        mov eax, dword ptr [mem_00B5D770]
        cmp eax, ebx
        mov byte ptr [esp + 0x18], 0x12
        jne L_skip_728d90
        call ext_00728D90
L_skip_728d90:
        mov eax, dword ptr [mem_00B5D770]
        mov ecx, dword ptr [esp + 0x10]
        inc eax
        pop edi
        mov dword ptr [mem_00B5D770], eax
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret
    }
}

// [0x006DD300] sub_006DD300 (608 bytes)
extern "C" void ext_006CA0E0();
extern "C" void ext_006CD330();
extern "C" void ext_006D0370();
extern "C" void ext_006DDC90();
extern "C" void ext_006DEEC0();
extern "C" void ext_006E6AD0();
extern "C" void ext_006E6C30();
extern "C" void ext_006E7000();
extern "C" int mem_00AA8CA0;
extern "C" int mem_00AA8CA4;
extern "C" int mem_00AA8CA8;
extern "C" __declspec(naked) void __fastcall fn_006DD300(void* self) {
    __asm {
        sub esp, 0x18
        push ebx
        push esi
        mov esi, dword ptr [esp + 0x28]
        push edi
        mov ecx, esi
        call ext_006E7000
        cmp eax, 0x5
        mov ecx, esi
        sete bl
        call ext_006E7000
        cmp eax, 0x3
        sete al
        test bl, bl
        jne L_330
        test al, al
        je L_4F8
    L_330:
        lea eax, [esp + 0x1c]
        lea ecx, [esp + 0x14]
        push eax
        lea edx, [esp + 0x10]
        push ecx
        push edx
        mov ecx, esi
        call ext_006E6C30
        mov esi, dword ptr [esp + 0x28]
        mov ecx, esi
        mov eax, dword ptr [esi]
        call dword ptr [eax + 0x14]
        cmp eax, 0x1
        jge L_386
        push 0
        push 0
        push 0
        push offset mem_00AA8CA8
        call ext_006DDC90
        add esp, 0x10
        mov ebx, eax
        call ext_006CA0E0
        mov edi, eax
        push 0
        push edi
        mov ecx, ebx
        call ext_006DEED0
        mov edx, dword ptr [esi]
        push ebx
        mov ecx, esi
        call dword ptr [edx + 0x8]
        jmp L_3AF
    L_386:
        mov eax, dword ptr [esi]
        push 0
        mov ecx, esi
        call dword ptr [eax + 0x18]
        mov ebx, eax
        mov ecx, ebx
        call ext_006DEEC0
        mov edi, eax
        test edi, edi
        jne L_3AF
        call ext_006CA0E0
        mov edi, eax
        push 0
        push edi
        mov ecx, ebx
        call ext_006DEED0
    L_3AF:
        push 0
        mov ecx, edi
        call ext_006D0370
        fld qword ptr [esp + 0xc]
        push ecx
        mov ecx, edi
        fstp dword ptr [esp]
        call ext_006CD330
        mov ecx, edi
        call ext_006D03D0
        push 1
        mov ecx, edi
        call ext_006D0370
        mov edx, dword ptr [esi]
        mov ecx, esi
        call dword ptr [edx + 0x14]
        cmp eax, 0x2
        jge L_413
        push 0
        push 0
        push 0
        push offset mem_00AA8CA4
        call ext_006DDC90
        add esp, 0x10
        mov ebx, eax
        call ext_006CA0E0
        mov edi, eax
        push 0
        push edi
        mov ecx, ebx
        call ext_006DEED0
        mov eax, dword ptr [esi]
        push ebx
        mov ecx, esi
        call dword ptr [eax + 0x8]
        jmp L_43C
    L_413:
        mov edx, dword ptr [esi]
        push 1
        mov ecx, esi
        call dword ptr [edx + 0x18]
        mov ebx, eax
        mov ecx, ebx
        call ext_006DEEC0
        mov edi, eax
        test edi, edi
        jne L_43C
        call ext_006CA0E0
        mov edi, eax
        push 0
        push edi
        mov ecx, ebx
        call ext_006DEED0
    L_43C:
        push 0
        mov ecx, edi
        call ext_006D0370
        fld qword ptr [esp + 0x14]
        push ecx
        mov ecx, edi
        fstp dword ptr [esp]
        call ext_006CD330
        mov ecx, edi
        call ext_006D03D0
        push 1
        mov ecx, edi
        call ext_006D0370
        mov eax, dword ptr [esi]
        mov ecx, esi
        call dword ptr [eax + 0x14]
        cmp eax, 0x3
        jge L_4A0
        push 0
        push 0
        push 0
        push offset mem_00AA8CA0
        call ext_006DDC90
        add esp, 0x10
        mov ebx, eax
        call ext_006CA0E0
        mov edi, eax
        push 0
        push edi
        mov ecx, ebx
        call ext_006DEED0
        mov edx, dword ptr [esi]
        push ebx
        mov ecx, esi
        call dword ptr [edx + 0x8]
        jmp L_4C9
    L_4A0:
        mov eax, dword ptr [esi]
        push 2
        mov ecx, esi
        call dword ptr [eax + 0x18]
        mov esi, eax
        mov ecx, esi
        call ext_006DEEC0
        mov edi, eax
        test edi, edi
        jne L_4C9
        call ext_006CA0E0
        mov edi, eax
        push 0
        push edi
        mov ecx, esi
        call ext_006DEED0
    L_4C9:
        push 0
        mov ecx, edi
        call ext_006D0370
        fld qword ptr [esp + 0x1c]
        push ecx
        mov ecx, edi
        fstp dword ptr [esp]
        call ext_006CD330
        mov ecx, edi
        call ext_006D03D0
        push 1
        mov ecx, edi
        call ext_006D0370
        pop edi
        pop esi
        pop ebx
        add esp, 0x18
        ret
    L_4F8:
        lea ecx, [esp + 0x1c]
        push ecx
        mov ecx, esi
        call ext_006E6AD0
        mov edi, dword ptr [esp + 0x28]
        mov ecx, edi
        call ext_006DEEC0
        mov esi, eax
        test esi, esi
        jne L_526
        call ext_006CA0E0
        mov esi, eax
        push 0
        push esi
        mov ecx, edi
        call ext_006DEED0
    L_526:
        push 0
        mov ecx, esi
        call ext_006D0370
        fld qword ptr [esp + 0x1c]
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
        add esp, 0x18
        ret
    }
}

// [0x006D6FF0] sub_006D6FF0 (660 bytes)
extern "C" void ext_006D7380();
extern "C" void ext_007554F0();
extern "C" void ext_007558A0();
extern "C" void ext_007641D0();
extern "C" void ext_007663D0();
extern "C" void ext_00772050();
extern "C" void ext_00774A70();

extern "C" __declspec(naked) void __fastcall fn_006D6FF0(void* self) {
    __asm {
        push -1
        push 0x8b9208
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        call ext_006D7380
        mov eax, dword ptr [esi + 0xfc]
        mov eax, dword ptr [eax]
        cmp eax, 0x7
        ja L_done
        jmp dword ptr [4*eax + 0x6d7284]

    L_c0:
        push 0xec
        call ext_006A5C62
        add esp, 0x4
        mov dword ptr [esp + 0x4], eax
        test eax, eax
        mov dword ptr [esp + 0x10], 0x0
        je L_c0_null
        mov ecx, dword ptr [esi + 0xa8]
        push esi
        push ecx
        mov ecx, eax
        call ext_00774A70
        jmp L_c0_st
    L_c0_null:
        xor eax, eax
    L_c0_st:
        mov edx, dword ptr [esi + 0xfc]
        push 0x1
        mov dword ptr [esp + 0x14], 0xffffffff
        mov dword ptr [edx + 0x4], eax
        mov eax, dword ptr [esi + 0xfc]
        mov ecx, dword ptr [eax + 0x4]
        call ext_007558A0
        jmp L_done

    L_c1:
        push 0xec
        call ext_006A5C62
        add esp, 0x4
        mov dword ptr [esp + 0x4], eax
        test eax, eax
        mov dword ptr [esp + 0x10], 0x1
        je L_c1_null
        mov ecx, dword ptr [esi + 0xa8]
        push esi
        push ecx
        mov ecx, eax
        call ext_00774A70
        jmp L_c1_st
    L_c1_null:
        xor eax, eax
    L_c1_st:
        mov edx, dword ptr [esi + 0xfc]
        push 0x0
        mov dword ptr [esp + 0x14], 0xffffffff
        mov dword ptr [edx + 0x4], eax
        mov eax, dword ptr [esi + 0xfc]
        mov ecx, dword ptr [eax + 0x4]
        call ext_007558A0
        jmp L_done

    L_c2:
        push 0xec
        call ext_006A5C62
        add esp, 0x4
        mov dword ptr [esp + 0x4], eax
        test eax, eax
        mov dword ptr [esp + 0x10], 0x2
        je L_c2_null
        mov ecx, dword ptr [esi + 0xa8]
        push esi
        push ecx
        mov ecx, eax
        call ext_00774A70
        jmp L_c2_st
    L_c2_null:
        xor eax, eax
    L_c2_st:
        mov edx, dword ptr [esi + 0xfc]
        push 0x2
        mov dword ptr [esp + 0x14], 0xffffffff
        mov dword ptr [edx + 0x4], eax
        mov eax, dword ptr [esi + 0xfc]
        mov ecx, dword ptr [eax + 0x4]
        call ext_007558A0
        jmp L_done

    L_c3:
        push 0xec
        call ext_006A5C62
        add esp, 0x4
        mov dword ptr [esp + 0x4], eax
        test eax, eax
        mov dword ptr [esp + 0x10], 0x3
        je L_c3_null
        mov ecx, dword ptr [esi + 0xa8]
        push esi
        push ecx
        mov ecx, eax
        call ext_007554F0
        jmp L_c3_st
    L_c3_null:
        xor eax, eax
    L_c3_st:
        mov edx, dword ptr [esi + 0xfc]
        push 0x1
        mov dword ptr [esp + 0x14], 0xffffffff
        mov dword ptr [edx + 0x4], eax
        mov eax, dword ptr [esi + 0xfc]
        mov ecx, dword ptr [eax + 0x4]
        call ext_007558A0
        jmp L_done

    L_c4:
        push 0xec
        call ext_006A5C62
        add esp, 0x4
        mov dword ptr [esp + 0x4], eax
        test eax, eax
        mov dword ptr [esp + 0x10], 0x4
        je L_c4_null
        mov ecx, dword ptr [esi + 0xa8]
        push esi
        push ecx
        mov ecx, eax
        call ext_007554F0
        jmp L_c4_st
    L_c4_null:
        xor eax, eax
    L_c4_st:
        mov edx, dword ptr [esi + 0xfc]
        push 0x0
        mov dword ptr [esp + 0x14], 0xffffffff
        mov dword ptr [edx + 0x4], eax
        mov eax, dword ptr [esi + 0xfc]
        mov ecx, dword ptr [eax + 0x4]
        call ext_007558A0
        jmp L_done

    L_c5:
        push 0x100
        call ext_006A5C62
        add esp, 0x4
        mov dword ptr [esp + 0x4], eax
        test eax, eax
        mov dword ptr [esp + 0x10], 0x5
        je L_c_null
        mov ecx, dword ptr [esi + 0xa8]
        push ecx
        mov ecx, eax
        call ext_00772050
        jmp L_store

    L_c6:
        push 0x308
        call ext_006A5C62
        add esp, 0x4
        mov dword ptr [esp + 0x4], eax
        test eax, eax
        mov dword ptr [esp + 0x10], 0x6
        je L_c_null
        mov ecx, dword ptr [esi + 0xa8]
        push ecx
        mov ecx, eax
        call ext_007663D0
        jmp L_store

    L_c7:
        push 0x190
        call ext_006A5C62
        add esp, 0x4
        mov dword ptr [esp + 0x4], eax
        test eax, eax
        mov dword ptr [esp + 0x10], 0x7
        je L_c_null
        mov ecx, dword ptr [esi + 0xa8]
        push ecx
        mov ecx, eax
        call ext_007641D0
        jmp L_store
    L_c_null:
        xor eax, eax
    L_store:
        mov edx, dword ptr [esi + 0xfc]
        mov dword ptr [edx + 0x4], eax
    L_done:
        mov eax, dword ptr [esi + 0xfc]
        pop esi
        mov ecx, dword ptr [eax + 0x4]
        test ecx, ecx
        mov ecx, dword ptr [esp + 0x4]
        setne al
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x006DCC00] sub_006DCC00 (659 bytes)
extern "C" int mem_008B948E;
extern "C" int mem_00AA88EC;
extern "C" int mem_00AA8CAC;
extern "C" int mem_00AA88DC;
extern "C" int mem_00AA8C9C;
extern "C" int mem_00AA88D0;
extern "C" int mem_00AA8C98;
extern "C" int mem_00AA93B0;
extern "C" int mem_00AA93BC;
extern "C" void ext_006E6DE0();
extern "C" void ext_006E6E60();
extern "C" void ext_006E7000();
extern "C" void ext_006E7460();
extern "C" void ext_006DE9D0();
extern "C" void ext_006DEEC0();
extern "C" void ext_006DD300();
extern "C" void ext_006DD1D0();
extern "C" void ext_006DE7C0();
extern "C" void ext_006C9360();
extern "C" void ext_00710910();

extern "C" __declspec(naked) void __fastcall fn_006DCC00(void* self, int edx_unused, int a1) {
    __asm {
        push -1
        push offset mem_008B948E
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0xf0
        push ebx
        mov ebx, dword ptr [esp + 0x104]
        push ebp
        push edi
        mov edi, ecx
        test ebx, ebx
        mov dword ptr [esp + 0x10], edi
        je L_end
        mov eax, dword ptr [edi]
        call dword ptr [eax + 0xc]
        push ebx
        mov ecx, eax
        call ext_00710910
        push 1
        mov ecx, ebx
        call ext_006E6DE0
        test al, al
        je L_end
        mov ecx, dword ptr [ebx]
        test ecx, ecx
        je short L_skip_free
        push 1
        push 8
        call ext_00711CF0
    L_skip_free:
        xor ebp, ebp
        mov ecx, edi
        mov dword ptr [esp + 0x14], ebp
        call ext_006DC550
        test eax, eax
        jle L_end
        push esi
    L_loop:
        mov ecx, ebx
        call ext_006E7000
        cmp eax, 5
        mov ecx, ebx
        sete byte ptr [esp + 0x13]
        call ext_006E7000
        mov cl, byte ptr [esp + 0x13]
        cmp eax, 3
        sete al
        test cl, cl
        jne short L_set1
        test al, al
        mov byte ptr [esp + 0x13], 0
        je short L_after_set
    L_set1:
        mov byte ptr [esp + 0x13], 1
    L_after_set:
        lea ecx, [esp + 0x1c]
        push ecx
        mov ecx, ebx
        call ext_006E6E60
        push offset mem_00AA88EC
        lea ecx, [esp + 0x20]
        mov dword ptr [esp + 0x10c], 0
        call ext_006BA7C0
        test al, al
        je short L_try2
        push offset mem_00AA8CAC
    L_common_a:
        push ebp
        mov ecx, edi
        call ext_006DC510
        mov ecx, eax
        call ext_006C9360
        mov ecx, eax
        call ext_006DE7C0
        mov esi, eax
        jmp L_after_branch
    L_try2:
        push offset mem_00AA88DC
        lea ecx, [esp + 0x20]
        call ext_006BA7C0
        test al, al
        je short L_try3
        push offset mem_00AA8C9C
        jmp short L_common_a
    L_try3:
        push offset mem_00AA88D0
        lea ecx, [esp + 0x20]
        call ext_006BA7C0
        test al, al
        je short L_else
        push offset mem_00AA8C98
        jmp short L_common_a
    L_else:
        push ebp
        mov ecx, edi
        call ext_006DC510
        mov ecx, eax
        call ext_006C9360
        lea edx, [esp + 0x68]
        mov ecx, ebx
        push edx
        mov edi, eax
        call ext_006E6E60
        mov ecx, eax
        mov byte ptr [esp + 0x108], 1
        call ext_006E7460
        push eax
        mov ecx, edi
        call ext_006DE7C0
        lea ecx, [esp + 0x68]
        mov esi, eax
        mov byte ptr [esp + 0x108], 0
        call ext_006B9D70
        test esi, esi
        jne L_esi_nonnull
        lea eax, [esp + 0xb4]
        mov ecx, ebx
        push eax
        call ext_006E6E60
        mov cl, byte ptr [esp + 0x13]
        mov byte ptr [esp + 0x108], 2
        test cl, cl
        sete cl
        push ecx
        mov ecx, eax
        call ext_006E7460
        push eax
        mov ecx, edi
        call ext_006DE9D0
        lea ecx, [esp + 0xb4]
        mov esi, eax
        mov byte ptr [esp + 0x108], 0
        call ext_006B9D70
        test ebp, ebp
        jne short L_after_branch
        cmp dword ptr [ebx], 0
        je short L_after_branch
        mov al, byte ptr [esp + 0x13]
        test al, al
        je short L_flag_zero
        xor edi, edi
        mov ebp, offset mem_00AA93B0
    L_inner:
        mov edx, dword ptr [esi]
        push edi
        mov ecx, esi
        call dword ptr [edx + 0x18]
        test eax, eax
        jne short L_inner_call
        mov eax, dword ptr [ebp]
        push 1
        push eax
        mov ecx, esi
        call ext_006DE9D0
        mov edx, dword ptr [esi]
        push edi
        mov ecx, esi
        call dword ptr [edx + 0x18]
    L_inner_call:
        mov ecx, eax
        call ext_006DEEC0
        test eax, eax
        je short L_inner_next
        mov ecx, dword ptr [esp + 0x14]
        push eax
        mov eax, dword ptr [ebx]
        push edi
        push eax
        call ext_006DD1D0
    L_inner_next:
        add ebp, 4
        inc edi
        cmp ebp, offset mem_00AA93BC
        jl short L_inner
        mov ebp, dword ptr [esp + 0x18]
        jmp short L_after_branch
    L_flag_zero:
        mov ecx, esi
        call ext_006DEEC0
        test eax, eax
        je short L_after_branch
        mov ecx, dword ptr [ebx]
        push eax
        push 0
        push ecx
        mov ecx, dword ptr [esp + 0x20]
        call ext_006DD1D0
    L_after_branch:
        mov edi, dword ptr [esp + 0x14]
        test esi, esi
        je short L_post
        jmp short L_call_dd300
    L_esi_nonnull:
        mov edi, dword ptr [esp + 0x14]
    L_call_dd300:
        push ebx
        push esi
        call ext_006DD300
        add esp, 8
    L_post:
        lea ecx, [esp + 0x1c]
        mov dword ptr [esp + 0x108], 0xffffffff
        call ext_006B9D70
        inc ebp
        mov ecx, edi
        mov dword ptr [esp + 0x18], ebp
        call ext_006DC550
        cmp ebp, eax
        jl L_loop
        pop esi
    L_end:
        mov ecx, dword ptr [esp + 0xfc]
        pop edi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0xfc
        ret 4
    }
}

// [0x006D6350] sub_006D6350 (802 bytes)
extern "C" void ext_006D66A0();
extern "C" void ext_006E7440();
extern "C" void ext_006E7460();
extern "C" void ext_0072D520();
extern "C" void ext_0072DB90();
extern "C" void ext_0072DBB0();
extern "C" void ext_0072DBE0();
extern "C" void ext_00743750();
extern "C" void ext_0074B6F0();
extern "C" void ext_0074F850();
extern "C" void ext_00755000();
extern "C" void ext_00755010();

// [0x006D6350] SEH-guarded state dispatcher on this->[0xfc]->[0] (kinds 0..5).
extern "C" __declspec(naked) void __fastcall fn_006D6350(void* self) {
    __asm {
        push -1
        push 0x8b912c
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        push edi
        push 0xb5d2c0
        lea edi, [esi + 0x5c]
        mov ecx, edi
        call ext_006BA7C0
        test al, al
        je L_639A
        push 6
        lea ecx, [esi + 0x4]
        call ext_006E7440
        pop edi
        xor al, al
        pop esi
        mov ecx, dword ptr [esp + 0x4]
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
L_639A:
        mov ecx, esi
        call ext_006D66A0
        mov eax, dword ptr [esi + 0xfc]
        mov eax, dword ptr [eax]
        cmp eax, 0x5
        ja L_6488
        jmp dword ptr [eax * 4 + 0x6d6674]
L_63B9:
        push 0x1d0
        call ext_006A5C62
        add esp, 0x4
        mov dword ptr [esp + 0x8], eax
        test eax, eax
        mov dword ptr [esp + 0x14], 0x0
        je L_6475
        mov ecx, dword ptr [esi + 0xa8]
        push esi
        push ecx
        mov ecx, eax
        call ext_0072D520
        jmp L_6477
L_63EE:
        push 0x93c
        call ext_006A5C62
        add esp, 0x4
        mov dword ptr [esp + 0x8], eax
        test eax, eax
        mov dword ptr [esp + 0x14], 0x1
        je L_6475
        mov ecx, dword ptr [esi + 0xa8]
        push ecx
        mov ecx, eax
        call ext_0074F850
        jmp L_6477
L_641B:
        push 0x1d4
        call ext_006A5C62
        add esp, 0x4
        mov dword ptr [esp + 0x8], eax
        test eax, eax
        mov dword ptr [esp + 0x14], 0x2
        je L_6475
        mov ecx, dword ptr [esi + 0xa8]
        push ecx
        mov ecx, eax
        call ext_0074B6F0
        jmp L_6477
L_6448:
        push 0x320
        call ext_006A5C62
        add esp, 0x4
        mov dword ptr [esp + 0x8], eax
        test eax, eax
        mov dword ptr [esp + 0x14], 0x3
        je L_6475
        mov ecx, dword ptr [esi + 0xa8]
        push ecx
        mov ecx, eax
        call ext_00743750
        jmp L_6477
L_6475:
        xor eax, eax
L_6477:
        mov edx, dword ptr [esi + 0xfc]
        mov dword ptr [esp + 0x14], 0xffffffff
        mov dword ptr [edx + 0x4], eax
L_6488:
        mov eax, dword ptr [esi + 0xfc]
        push ebx
        mov ecx, dword ptr [eax + 0x4]
        mov ebx, dword ptr [ecx]
        mov ecx, edi
        call ext_006E7460
        mov edx, dword ptr [esi + 0xfc]
        push eax
        mov ecx, dword ptr [edx + 0x4]
        call dword ptr [ebx + 0x4]
        test al, al
        pop ebx
        jne L_65B7
        mov eax, dword ptr [esi + 0xfc]
        mov ecx, dword ptr [eax + 0x4]
        call ext_00755000
        cmp eax, 0x3
        ja L_6584
        jmp dword ptr [eax * 4 + 0x6d668c]
L_64CF:
        mov ecx, dword ptr [esi + 0xfc]
        mov ecx, dword ptr [ecx + 0x4]
        call ext_00755010
        push eax
        push 0x0
        jmp L_6595
L_64E5:
        mov ecx, dword ptr [esi + 0xfc]
        mov eax, dword ptr [ecx]
        test eax, eax
        je L_64FB
        cmp eax, 0x1
        je L_64FB
        cmp eax, 0x2
        jne L_6518
L_64FB:
        mov ecx, dword ptr [ecx + 0x4]
        lea edx, [esi + 0x1cc]
        push edx
        lea eax, [esi + 0x1c8]
        lea edx, [esi + 0x1c4]
        push eax
        push edx
        call ext_0072DBB0
L_6518:
        mov eax, dword ptr [esi + 0xfc]
        mov ecx, dword ptr [eax + 0x4]
        call ext_00755010
        push eax
        push 0x1
        jmp L_6595
L_652B:
        mov ecx, dword ptr [esi + 0xfc]
        mov eax, dword ptr [ecx]
        test eax, eax
        je L_6541
        cmp eax, 0x1
        je L_6541
        cmp eax, 0x2
        jne L_655E
L_6541:
        mov ecx, dword ptr [ecx + 0x4]
        lea edx, [esi + 0x1cc]
        push edx
        lea eax, [esi + 0x1c8]
        lea edx, [esi + 0x1c4]
        push eax
        push edx
        call ext_0072DBB0
L_655E:
        mov eax, dword ptr [esi + 0xfc]
        mov ecx, dword ptr [eax + 0x4]
        call ext_00755010
        push eax
        push 0x2
        jmp L_6595
L_6571:
        mov ecx, dword ptr [esi + 0xfc]
        mov ecx, dword ptr [ecx + 0x4]
        call ext_00755010
        push eax
        push 0x3
        jmp L_6595
L_6584:
        mov edx, dword ptr [esi + 0xfc]
        mov ecx, dword ptr [edx + 0x4]
        call ext_00755010
        push eax
        push 0x7
L_6595:
        lea ecx, [esi + 0x4]
        call ext_006E7410
        mov ecx, esi
        call ext_006D66A0
        pop edi
        xor al, al
        pop esi
        mov ecx, dword ptr [esp + 0x4]
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
L_65B7:
        mov ecx, dword ptr [esi + 0xfc]
        mov eax, dword ptr [ecx]
        test eax, eax
        je L_65D1
        cmp eax, 0x1
        je L_65D1
        cmp eax, 0x2
        jne L_665F
L_65D1:
        mov ecx, dword ptr [ecx + 0x4]
        call ext_0072DB90
        sub eax, 0x0
        je L_6600
        dec eax
        je L_65F2
        dec eax
        jne L_660C
        mov eax, dword ptr [esi + 0xfc]
        mov dword ptr [eax], 0x2
        jmp L_660C
L_65F2:
        mov ecx, dword ptr [esi + 0xfc]
        mov dword ptr [ecx], 0x0
        jmp L_660C
L_6600:
        mov edx, dword ptr [esi + 0xfc]
        mov dword ptr [edx], 0x1
L_660C:
        lea eax, [esi + 0x1cc]
        lea ecx, [esi + 0x1c8]
        push eax
        mov eax, dword ptr [esi + 0xfc]
        lea edx, [esi + 0x1c4]
        push ecx
        mov ecx, dword ptr [eax + 0x4]
        push edx
        call ext_0072DBB0
        lea ecx, [esi + 0x278]
        lea edx, [esi + 0x270]
        push ecx
        push edx
        mov edx, dword ptr [esi + 0xfc]
        lea eax, [esi + 0x220]
        lea ecx, [esi + 0x1d4]
        push eax
        push ecx
        mov ecx, dword ptr [edx + 0x4]
        call ext_0072DBE0
        mov byte ptr [esi + 0x1d0], al
L_665F:
        mov ecx, dword ptr [esp + 0xc]
        pop edi
        mov al, 0x1
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x006D9FC0] sub_006D9FC0 (944 bytes)
extern "C" void ext_006D98E0();
extern "C" void ext_006DA370();
extern "C" void ext_006DAB00();
extern "C" void ext_006DBDF0();
extern "C" int mem_009252D0;
extern "C" int mem_00925240;
extern "C" int mem_009252BC;
extern "C" int mem_009251E4;
extern "C" int mem_0092521C;

extern "C" __declspec(naked) void __fastcall fn_006D9FC0(void* self, int edx_unused, const char* s, int a2, int a3) {
    __asm {
        sub esp, 0x3c
        push ebx
        mov ebx, dword ptr [esp + 0x44]
        push ebp
        push esi
        mov dword ptr [esp + 0xc], ecx
        push edi
        mov edi, ebx
        or ecx, -1
        xor eax, eax
        xor esi, esi
        repne scasb
        mov eax, dword ptr [esp + 0x54]
        not ecx
        dec ecx
        cmp eax, esi
        mov edi, ecx
        jne L_6D9FEC
        call ext_006D98D0
L_6D9FEC:
        mov dword ptr [esp + 0x14], eax
        mov eax, dword ptr [esp + 0x58]
        cmp eax, 2
        jne L_6D9FFE
        call ext_006D98E0
L_6D9FFE:
        cmp edi, esi
        jle L_6DA345
        cmp edi, 0x13
        jge L_6DA345
        cmp eax, esi
        jne L_6DA1E4
        push 0x13
        lea eax, [esp + 0x34]
        push ebx
        push eax
        mov dword ptr [esp + 0x2c], esi
        mov dword ptr [esp + 0x24], esi
        mov dword ptr [esp + 0x64], esi
        mov dword ptr [esp + 0x34], esi
        mov dword ptr [esp + 0x5c], esi
        xor ebp, ebp
        mov dword ptr [esp + 0x60], esi
        call dword ptr [mem_009252D0]
        lea ecx, [esp + 0x3c]
        push 0xaa93ac
        push ecx
        call dword ptr [mem_00925240]
        mov ebx, dword ptr [mem_009252BC]
        mov esi, eax
        add esp, 0x14
        test esi, esi
        je L_6DA07E
        push 0xaa93a8
        push esi
        call ebx
        add esp, 0x8
        test eax, eax
        je L_6DA07B
        push eax
        call dword ptr [mem_009251E4]
        add esp, 0x4
        mov dword ptr [esp + 0x50], eax
L_6DA07B:
        mov byte ptr [esi], 0x0
L_6DA07E:
        mov byte ptr [esp + edi + 0x30], 0x2e
        inc edi
        xor ecx, ecx
        test edi, edi
        mov byte ptr [esp + edi + 0x30], 0x0
        jle L_6DA0B5
L_6DA08F:
        mov al, byte ptr [esp + ecx + 0x30]
        cmp al, 0x3a
        je L_6DA0AF
        cmp al, 0x3b
        je L_6DA0AF
        cmp al, 0x2e
        jne L_6DA0B0
        mov eax, dword ptr [esp + 0x54]
        mov byte ptr [esp + ecx + 0x30], 0x3a
        inc eax
        mov dword ptr [esp + 0x54], eax
        jmp L_6DA0B0
L_6DA0AF:
        inc ebp
L_6DA0B0:
        inc ecx
        cmp ecx, edi
        jl L_6DA08F
L_6DA0B5:
        cmp ebp, 0x1
        lea esi, [esp + 0x30]
        jle L_6DA0E1
        lea edx, [esp + 0x30]
        push 0xaa93a4
        push edx
        call ebx
        add esp, 0x8
        test eax, eax
        je L_6DA0E1
        push eax
        call dword ptr [mem_009251E4]
        add esp, 0x4
        mov dword ptr [esp + 0x20], eax
        xor esi, esi
L_6DA0E1:
        test ebp, ebp
        jle L_6DA104
        push 0xaa93a4
        push esi
        call ebx
        add esp, 0x8
        test eax, eax
        je L_6DA104
        push eax
        call dword ptr [mem_009251E4]
        add esp, 0x4
        mov dword ptr [esp + 0x18], eax
        xor esi, esi
L_6DA104:
        mov edi, dword ptr [esp + 0x54]
        test edi, edi
        jle L_6DA136
        cmp byte ptr [esp + 0x30], 0x3a
        jne L_6DA117
        test ebp, ebp
        je L_6DA136
L_6DA117:
        push 0xaa93a4
        push esi
        call ebx
        add esp, 0x8
        test eax, eax
        je L_6DA136
        push eax
        call dword ptr [mem_009251E4]
        add esp, 0x4
        mov dword ptr [esp + 0x58], eax
        xor esi, esi
L_6DA136:
        cmp edi, 0x1
        jle L_6DA15A
        push 0xaa93a4
        push esi
        call ebx
        add esp, 0x8
        test eax, eax
        je L_6DA15A
        push eax
        call dword ptr [mem_009251E4]
        add esp, 0x4
        mov ebp, eax
        xor esi, esi
        jmp L_6DA15E
L_6DA15A:
        mov ebp, dword ptr [esp + 0x28]
L_6DA15E:
        cmp edi, 0x2
        jle L_6DA1B5
        push 0xaa93a4
        push esi
        call ebx
        mov edi, eax
        add esp, 0x8
        test edi, edi
        je L_6DA1B5
        push edi
        call dword ptr [mem_009251E4]
        add esp, 0x4
        mov edx, eax
L_6DA180:
        cmp edx, 0x64
        jge L_6DA18A
        cmp edx, -0x64
        jg L_6DA19D
L_6DA18A:
        mov eax, 0x66666667
        imul edx
        sar edx, 0x2
        mov eax, edx
        shr eax, 0x1f
        add edx, eax
        jmp L_6DA180
L_6DA19D:
        or ecx, -1
        xor eax, eax
        repne scasb
        not ecx
        dec ecx
        cmp ecx, 0x2
        jae L_6DA1B1
        lea edx, [edx + 4*edx]
        shl edx, 1
L_6DA1B1:
        add dword ptr [esp + 0x50], edx
L_6DA1B5:
        mov ecx, dword ptr [esp + 0x14]
        mov edx, dword ptr [esp + 0x50]
        mov eax, dword ptr [esp + 0x58]
        push ecx
        mov ecx, dword ptr [esp + 0x1c]
        push edx
        mov edx, dword ptr [esp + 0x28]
        push 0x0
        push ebp
        push eax
        push ecx
        mov ecx, dword ptr [esp + 0x28]
        push edx
        call ext_006DAB00
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x3c
        ret 0xc
L_6DA1E4:
        mov eax, dword ptr [esp + 0x14]
        lea ecx, [esp + 0x28]
        push eax
        push 0x0
        push 0x1
        push 0x0
        push 0x0
        push 0x0
        mov byte ptr [esp + 0x6c], 0x0
        mov dword ptr [esp + 0x40], esi
        mov dword ptr [esp + 0x44], esi
        call ext_006DA370
        mov edi, dword ptr [mem_00925240]
        push 0xaa93ac
        push ebx
        mov byte ptr [esp + 0x58], 0x0
        call edi
        mov ebp, eax
        add esp, 0x8
        test ebp, ebp
        jne L_6DA23B
        push 0xaa93a0
        push ebx
        call edi
        mov ebp, eax
        add esp, 0x8
        test ebp, ebp
        je L_6DA2A3
        mov byte ptr [esp + 0x50], 0x1
L_6DA23B:
        push 0xaa939c
        push ebp
        call dword ptr [mem_009252BC]
        mov edi, eax
        add esp, 0x8
        test edi, edi
        je L_6DA297
        push edi
        call dword ptr [mem_009251E4]
        mov esi, eax
        mov al, byte ptr [esp + 0x54]
        add esp, 0x4
        test al, al
        je L_6DA297
L_6DA264:
        cmp esi, 0x64
        jge L_6DA26E
        cmp esi, -0x64
        jg L_6DA283
L_6DA26E:
        mov eax, 0x66666667
        imul esi
        sar edx, 0x2
        mov ecx, edx
        shr ecx, 0x1f
        add edx, ecx
        mov esi, edx
        jmp L_6DA264
L_6DA283:
        or ecx, -1
        xor eax, eax
        repne scasb
        not ecx
        dec ecx
        cmp ecx, 0x2
        jae L_6DA297
        lea esi, [esi + 4*esi]
        shl esi, 1
L_6DA297:
        cmp ebp, ebx
        mov byte ptr [ebp], 0x0
        je L_6DA354
L_6DA2A3:
        mov edx, dword ptr [esp + 0x2c]
        mov ebp, dword ptr [esp + 0x28]
        lea eax, [esp + 0x20]
        mov dword ptr [esp + 0x1c], edx
        push eax
        push 0xaa92d4
        push ebx
        call dword ptr [mem_0092521C]
        mov edi, dword ptr [esp + 0x2c]
        add esp, 0xc
        test eax, eax
        je L_6DA2ED
        mov ecx, dword ptr [esp + 0x1c]
        mov edx, dword ptr [esp + 0x24]
        push ecx
        push ebp
        push edx
        push edi
        mov byte ptr [esp + 0x64], 0x1
        call ext_006A6F00
        mov ebp, dword ptr [esp + 0x10]
        mov dword ptr [ebp], eax
        mov dword ptr [ebp + 0x4], edx
        jmp L_6DA2F1
L_6DA2ED:
        mov ebp, dword ptr [esp + 0x10]
L_6DA2F1:
        cmp byte ptr [ebx], 0x2d
        jne L_6DA303
        or edi, dword ptr [esp + 0x24]
        jne L_6DA303
        test esi, esi
        jle L_6DA34F
        sub esi, 0x64
L_6DA303:
        mov al, byte ptr [esp + 0x54]
        test al, al
        je L_6DA345
L_6DA30B:
        mov ecx, dword ptr [esp + 0x14]
        xor eax, eax
        push ecx
        push esi
        push eax
        push eax
        push eax
        push eax
        push eax
        lea ecx, [esp + 0x3c]
        mov dword ptr [esp + 0x3c], eax
        mov dword ptr [esp + 0x40], eax
        call ext_006DAB00
        lea edx, [esp + 0x20]
        lea eax, [esp + 0x18]
        push edx
        push eax
        mov ecx, ebp
        call ext_006DBDF0
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp], ecx
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [ebp + 0x4], edx
L_6DA345:
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x3c
        ret 0xc
L_6DA34F:
        add esi, 0x64
        jmp L_6DA303
L_6DA354:
        mov eax, dword ptr [esp + 0x10]
        mov ebp, eax
        mov dword ptr [eax], 0x0
        mov dword ptr [eax + 0x4], 0x0
        jmp L_6DA30B
    }
}

// [0x006D3170] sub_006D3170 (960 bytes)
extern "C" void __cdecl ext_006A5C5C(void* ptr);
extern "C" void ext_006BBE90();
extern "C" void ext_006E67E0();
extern "C" void ext_0072B010();
extern "C" void ext_0072B250();
extern "C" __declspec(naked) void __fastcall fn_006D3170(void* self) {
    __asm {
        push ebx
        push ebp
        push esi
        mov esi, ecx
        xor ebx, ebx
        push edi
        mov eax, dword ptr [esi + 0x4]
        lea ebp, [esi + 0x4]
        test eax, eax
        jle B1_end
B1_loop:
        mov eax, dword ptr [esi + 0x14]
        mov edi, dword ptr [eax + 4*ebx]
        test edi, edi
        je B1_skip
        mov ecx, edi
        call ext_006BBE90
        push edi
        call ext_006A5C5C
        add esp, 0x4
B1_skip:
        mov eax, dword ptr [ebp]
        inc ebx
        cmp ebx, eax
        jl B1_loop
B1_end:
        mov ecx, ebp
        call ext_006D2250

        mov eax, dword ptr [esi + 0x34]
        lea ebx, [esi + 0x34]
        xor edi, edi
        test eax, eax
        jle B2_end
B2_loop:
        mov ecx, dword ptr [esi + 0x44]
        mov ecx, dword ptr [ecx + 4*edi]
        test ecx, ecx
        je B2_skip
        mov edx, dword ptr [ecx]
        push 0x1
        call dword ptr [edx + 0x4]
B2_skip:
        mov eax, dword ptr [ebx]
        inc edi
        cmp edi, eax
        jl B2_loop
B2_end:
        mov ecx, ebx
        call ext_006D2250

        mov eax, dword ptr [esi + 0x1c]
        lea ebx, [esi + 0x1c]
        xor edi, edi
        test eax, eax
        jle B3_end
B3_loop:
        mov eax, dword ptr [esi + 0x2c]
        mov ecx, dword ptr [eax + 4*edi]
        mov edx, dword ptr [ecx]
        call dword ptr [edx + 0x4]
        mov eax, dword ptr [esi + 0x2c]
        mov ecx, dword ptr [eax + 4*edi]
        test ecx, ecx
        je B3_skip
        mov edx, dword ptr [ecx]
        push 0x1
        call dword ptr [edx + 0x14]
B3_skip:
        mov eax, dword ptr [ebx]
        inc edi
        cmp edi, eax
        jl B3_loop
B3_end:
        mov ecx, ebx
        call ext_006D2250

        mov eax, dword ptr [esi + 0x4c]
        lea ebx, [esi + 0x4c]
        xor edi, edi
        test eax, eax
        jle B4_end
B4_loop:
        mov eax, dword ptr [esi + 0x5c]
        mov ecx, dword ptr [eax + 4*edi]
        test ecx, ecx
        je B4_skip
        mov edx, dword ptr [ecx]
        push 0x1
        call dword ptr [edx]
B4_skip:
        mov eax, dword ptr [ebx]
        inc edi
        cmp edi, eax
        jl B4_loop
B4_end:
        mov ecx, ebx
        call ext_006D2250

        mov eax, dword ptr [esi + 0x64]
        lea ebx, [esi + 0x64]
        xor edi, edi
        test eax, eax
        jle B5_end
B5_loop:
        mov eax, dword ptr [esi + 0x74]
        mov ecx, dword ptr [eax + 4*edi]
        mov edx, dword ptr [ecx]
        call dword ptr [edx + 0x4]
        mov eax, dword ptr [esi + 0x74]
        mov ecx, dword ptr [eax + 4*edi]
        test ecx, ecx
        je B5_skip
        mov edx, dword ptr [ecx]
        push 0x1
        call dword ptr [edx + 0x14]
B5_skip:
        mov eax, dword ptr [ebx]
        inc edi
        cmp edi, eax
        jl B5_loop
B5_end:
        mov ecx, ebx
        call ext_006D2250

        mov eax, dword ptr [esi + 0x7c]
        lea ebx, [esi + 0x7c]
        xor edi, edi
        test eax, eax
        jle B6_end
B6_loop:
        mov eax, dword ptr [esi + 0x8c]
        mov ecx, dword ptr [eax + 4*edi]
        test ecx, ecx
        je B6_skip
        mov edx, dword ptr [ecx]
        push 0x1
        call dword ptr [edx + 0x4]
B6_skip:
        mov eax, dword ptr [ebx]
        inc edi
        cmp edi, eax
        jl B6_loop
B6_end:
        mov ecx, ebx
        call ext_006D2250

        mov eax, dword ptr [esi + 0x94]
        lea ebx, [esi + 0x94]
        xor edi, edi
        test eax, eax
        jle B7_end
B7_loop:
        mov eax, dword ptr [esi + 0xa4]
        mov ecx, dword ptr [eax + 4*edi]
        mov edx, dword ptr [ecx]
        call dword ptr [edx + 0x4]
        mov eax, dword ptr [esi + 0xa4]
        mov ecx, dword ptr [eax + 4*edi]
        test ecx, ecx
        je B7_skip
        mov edx, dword ptr [ecx]
        push 0x1
        call dword ptr [edx + 0x14]
B7_skip:
        mov eax, dword ptr [ebx]
        inc edi
        cmp edi, eax
        jl B7_loop
B7_end:
        mov ecx, ebx
        call ext_006D2250

        mov eax, dword ptr [esi + 0xac]
        lea ebx, [esi + 0xac]
        xor edi, edi
        test eax, eax
        jle B8_end
B8_loop:
        mov eax, dword ptr [esi + 0xbc]
        mov ecx, dword ptr [eax + 4*edi]
        mov edx, dword ptr [ecx]
        call dword ptr [edx + 0x4]
        mov eax, dword ptr [esi + 0xbc]
        mov ecx, dword ptr [eax + 4*edi]
        test ecx, ecx
        je B8_skip
        mov edx, dword ptr [ecx]
        push 0x1
        call dword ptr [edx + 0x14]
B8_skip:
        mov eax, dword ptr [ebx]
        inc edi
        cmp edi, eax
        jl B8_loop
B8_end:
        mov ecx, ebx
        call ext_006D2250

        mov eax, dword ptr [esi + 0xc4]
        lea ebx, [esi + 0xc4]
        xor edi, edi
        test eax, eax
        jle B9_end
B9_loop:
        mov eax, dword ptr [esi + 0xd4]
        mov ecx, dword ptr [eax + 4*edi]
        test ecx, ecx
        je B9_skip
        mov edx, dword ptr [ecx]
        push 0x1
        call dword ptr [edx + 0x14]
B9_skip:
        mov eax, dword ptr [ebx]
        inc edi
        cmp edi, eax
        jl B9_loop
B9_end:
        mov ecx, ebx
        call ext_006D2250

        mov eax, dword ptr [esi + 0xdc]
        lea ebp, [esi + 0xdc]
        xor edi, edi
        test eax, eax
        jle B10_end
B10_loop:
        mov eax, dword ptr [esi + 0xec]
        mov ebx, dword ptr [eax + 4*edi]
        test ebx, ebx
        je B10_skip
        mov ecx, ebx
        call ext_006E67E0
        push ebx
        call ext_006A5C5C
        add esp, 0x4
B10_skip:
        mov eax, dword ptr [ebp]
        inc edi
        cmp edi, eax
        jl B10_loop
B10_end:
        mov ecx, ebp
        call ext_006D2250

        mov eax, dword ptr [esi + 0x124]
        lea ebx, [esi + 0x124]
        xor edi, edi
        test eax, eax
        jle B11_end
B11_loop:
        mov ecx, dword ptr [esi + 0x134]
        mov ecx, dword ptr [ecx + 4*edi]
        test ecx, ecx
        je B11_skip
        mov edx, dword ptr [ecx]
        push 0x1
        call dword ptr [edx + 0x14]
B11_skip:
        mov eax, dword ptr [ebx]
        inc edi
        cmp edi, eax
        jl B11_loop
B11_end:
        mov ecx, ebx
        call ext_006D2250

        mov eax, dword ptr [esi + 0xf4]
        lea ebp, [esi + 0xf4]
        xor edi, edi
        test eax, eax
        jle B12_end
B12_loop:
        mov eax, dword ptr [esi + 0x104]
        mov ebx, dword ptr [eax + 4*edi]
        test ebx, ebx
        je B12_skip
        mov ecx, ebx
        call ext_0072B250
        push ebx
        call ext_006A5C5C
        add esp, 0x4
B12_skip:
        mov eax, dword ptr [ebp]
        inc edi
        cmp edi, eax
        jl B12_loop
B12_end:
        mov ecx, ebp
        call ext_006D2250

        mov eax, dword ptr [esi + 0x10c]
        lea ebp, [esi + 0x10c]
        xor edi, edi
        test eax, eax
        jle B13_end
B13_loop:
        mov ecx, dword ptr [esi + 0x11c]
        mov ebx, dword ptr [ecx + 4*edi]
        test ebx, ebx
        je B13_skip
        mov ecx, ebx
        call ext_0072B010
        push ebx
        call ext_006A5C5C
        add esp, 0x4
B13_skip:
        mov eax, dword ptr [ebp]
        inc edi
        cmp edi, eax
        jl B13_loop
B13_end:
        mov ecx, ebp
        call ext_006D2250

        mov eax, dword ptr [esi + 0x154]
        lea ebp, [esi + 0x154]
        xor edi, edi
        test eax, eax
        jle B14_end
B14_loop:
        mov edx, dword ptr [esi + 0x164]
        mov ebx, dword ptr [edx + 4*edi]
        test ebx, ebx
        je B14_skip
        mov ecx, ebx
        call ext_006D80A0
        push ebx
        call ext_006A5C5C
        add esp, 0x4
B14_skip:
        mov eax, dword ptr [ebp]
        inc edi
        cmp edi, eax
        jl B14_loop
B14_end:
        mov ecx, ebp
        call ext_006D2250

        mov eax, dword ptr [esi + 0x184]
        lea ebx, [esi + 0x184]
        xor edi, edi
        test eax, eax
        jle B15_end
B15_loop:
        mov eax, dword ptr [esi + 0x194]
        mov ecx, dword ptr [eax + 4*edi]
        test ecx, ecx
        je B15_skip
        mov edx, dword ptr [ecx]
        push 0x1
        call dword ptr [edx + 0xc]
B15_skip:
        mov eax, dword ptr [ebx]
        inc edi
        cmp edi, eax
        jl B15_loop
B15_end:
        mov ecx, ebx
        call ext_006D2250

        mov eax, dword ptr [esi + 0x19c]
        lea ebx, [esi + 0x19c]
        xor edi, edi
        test eax, eax
        jle B16_end
B16_loop:
        mov eax, dword ptr [esi + 0x1ac]
        mov ecx, dword ptr [eax + 4*edi]
        test ecx, ecx
        je B16_skip
        mov edx, dword ptr [ecx]
        push 0x1
        call dword ptr [edx + 0xc]
B16_skip:
        mov eax, dword ptr [ebx]
        inc edi
        cmp edi, eax
        jl B16_loop
B16_end:
        mov ecx, ebx
        call ext_006D2250

        mov ecx, dword ptr [esi + 0x1b4]
        test ecx, ecx
        je B17_a
        mov eax, dword ptr [ecx]
        call dword ptr [eax + 0x4]
B17_a:
        mov ecx, dword ptr [esi + 0x1b8]
        test ecx, ecx
        je B17_b
        mov edx, dword ptr [ecx]
        call dword ptr [edx + 0x4]
B17_b:
        mov ecx, dword ptr [esi + 0x1bc]
        test ecx, ecx
        je B17_c
        mov eax, dword ptr [ecx]
        call dword ptr [eax + 0x4]
B17_c:
        mov esi, dword ptr [esi + 0x1c0]
        test esi, esi
        je B17_d
        mov edx, dword ptr [esi]
        mov ecx, esi
        call dword ptr [edx + 0x4]
B17_d:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}

// [0x006D9940] sub_006D9940 (1611 bytes)
extern "C" int mem_00925218;
extern "C" void ext_006D98E0();
extern "C" void ext_006DABA0();
extern "C" void ext_006DADA0();
extern "C" __declspec(naked) void __fastcall fn_006D9940(void* self, int edx_unused, int a1, int a2, int a3, int a4) {
    __asm {
        mov eax, dword ptr [esp + 0x10]
        sub esp, 0x30
        cmp eax, 0x2
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 0x3c]
        push esi
        push edi
        mov edi, ecx
        mov byte ptr [ebp], 0
        jne L6D995F
        call ext_006D98E0
L6D995F:
        mov ecx, dword ptr [edi + 0x4]
        mov edx, dword ptr [edi]
        xor ebx, ebx
        mov byte ptr [esp + 0x50], 0
        cmp ecx, ebx
        jg L6D997A
        jl L6D9975
        cmp edx, ebx
        jae L6D997A
L6D9975:
        mov byte ptr [esp + 0x50], 1
L6D997A:
        cmp eax, ebx
        jne L6D9BDF
        mov eax, dword ptr [esp + 0x4c]
        lea ecx, [esp + 0x30]
        push eax
        lea edx, [esp + 0x3c]
        push ecx
        lea eax, [esp + 0x30]
        push edx
        lea ecx, [esp + 0x2c]
        push eax
        lea edx, [esp + 0x28]
        push ecx
        lea eax, [esp + 0x24]
        push edx
        push eax
        mov ecx, edi
        mov dword ptr [esp + 0x2c], ebx
        mov dword ptr [esp + 0x30], ebx
        mov dword ptr [esp + 0x34], ebx
        mov dword ptr [esp + 0x38], ebx
        mov dword ptr [esp + 0x3c], ebx
        mov dword ptr [esp + 0x40], ebx
        mov dword ptr [esp + 0x44], ebx
        mov dword ptr [esp + 0x48], ebx
        mov dword ptr [esp + 0x54], ebx
        mov dword ptr [esp + 0x58], ebx
        mov dword ptr [esp + 0x4c], ebx
        mov dword ptr [esp + 0x50], ebx
        call ext_006DAE30
        test al, al
        je L6D9BBB
        mov ecx, dword ptr [esp + 0x48]
        lea eax, [ecx - 0x1]
        cmp eax, 0x5
        ja L6D9BB7
        jmp dword ptr [eax * 4 + 0x6D9F8C]
L6D99FB:
        mov edx, dword ptr [esp + 0x10]
        push edx
        push 0AA9394h
        push ebp
        call dword ptr [mem_00925218]
        add esp, 0xc
        jmp L6D9BBB
L6D9A14:
        mov eax, dword ptr [esp + 0x18]
        mov ecx, dword ptr [esp + 0x10]
        push eax
        push ecx
        push 0AA9388h
        push ebp
        call dword ptr [mem_00925218]
        add esp, 0x10
        jmp L6D9BBB
L6D9A32:
        mov edx, dword ptr [esp + 0x20]
        mov eax, dword ptr [esp + 0x18]
        mov ecx, dword ptr [esp + 0x10]
        push edx
        push eax
        push ecx
        push 0AA9378h
        push ebp
        call dword ptr [mem_00925218]
        add esp, 0x14
        jmp L6D9BBB
L6D9A55:
        mov eax, dword ptr [edi]
        mov edi, dword ptr [edi + 0x4]
        cmp edi, 0x7FFFFFFF
        jl L6D9A90
        jg L6D9A69
        cmp eax, -1
        jb L6D9A90
L6D9A69:
        mov edi, 0AA9368h
        or ecx, -1
        xor eax, eax
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        mov esi, edi
        mov edi, ebp
        shr ecx, 0x2
        rep movsd
        mov ecx, eax
        and ecx, 0x3
        rep movsb
        jmp L6D9BBB
L6D9A90:
        cmp edi, 0x80000000
        jg L6D9AC6
        jl L6D9A9F
        cmp eax, 0x1
        ja L6D9AC6
L6D9A9F:
        mov edi, 0AA9358h
        or ecx, -1
        xor eax, eax
        repne scasb
        not ecx
        sub edi, ecx
        mov edx, ecx
        mov esi, edi
        mov edi, ebp
        shr ecx, 0x2
        rep movsd
        mov ecx, edx
        and ecx, 0x3
        rep movsb
        jmp L6D9BBB
L6D9AC6:
        mov eax, dword ptr [esp + 0x30]
        mov ecx, dword ptr [esp + 0x34]
        or eax, ecx
        je L6D9AFA
        mov ecx, dword ptr [esp + 0x28]
        mov edx, dword ptr [esp + 0x20]
        mov eax, dword ptr [esp + 0x18]
        push ecx
        mov ecx, dword ptr [esp + 0x14]
        push edx
        push eax
        push ecx
        push 0AA9340h
        push ebp
        call dword ptr [mem_00925218]
        add esp, 0x18
        jmp L6D9BBB
L6D9AFA:
        mov edx, dword ptr [esp + 0x28]
        mov eax, dword ptr [esp + 0x20]
        mov ecx, dword ptr [esp + 0x18]
        push edx
        mov edx, dword ptr [esp + 0x14]
        push eax
        push ecx
        push edx
        push 0AA932Ch
        push ebp
        call dword ptr [mem_00925218]
        add esp, 0x18
        jmp L6D9BBB
L6D9B22:
        mov eax, dword ptr [edi]
        mov edi, dword ptr [edi + 0x4]
        cmp edi, 0x7FFFFFFF
        jl L6D9B5A
        jg L6D9B36
        cmp eax, -1
        jb L6D9B5A
L6D9B36:
        mov edi, 0AA9318h
        or ecx, -1
        xor eax, eax
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        mov esi, edi
        mov edi, ebp
        shr ecx, 0x2
        rep movsd
        mov ecx, eax
        and ecx, 0x3
        rep movsb
        jmp L6D9BBB
L6D9B5A:
        cmp edi, 0x80000000
        jg L6D9B8D
        jl L6D9B69
        cmp eax, 0x1
        ja L6D9B8D
L6D9B69:
        mov edi, 0AA9304h
        or ecx, -1
        xor eax, eax
        repne scasb
        not ecx
        sub edi, ecx
        mov edx, ecx
        mov esi, edi
        mov edi, ebp
        shr ecx, 0x2
        rep movsd
        mov ecx, edx
        and ecx, 0x3
        rep movsb
        jmp L6D9BBB
L6D9B8D:
        mov eax, dword ptr [esp + 0x30]
        mov ecx, dword ptr [esp + 0x28]
        mov edx, dword ptr [esp + 0x20]
        push eax
        mov eax, dword ptr [esp + 0x1c]
        push ecx
        mov ecx, dword ptr [esp + 0x18]
        push edx
        push eax
        push ecx
        push 0AA92E8h
        push ebp
        call dword ptr [mem_00925218]
        add esp, 0x1c
        jmp L6D9BBB
L6D9BB7:
        mov byte ptr [ebp], 0
L6D9BBB:
        cmp ebp, ebx
        je L6D9F7F
        mov al, byte ptr [esp + 0x50]
        test al, al
        je L6D9F7F
        pop edi
        mov byte ptr [ebp], 0x2D
        mov eax, ebp
        pop esi
        pop ebp
        pop ebx
        add esp, 0x30
        ret 0x10
L6D9BDF:
        mov eax, dword ptr [esp + 0x48]
        dec eax
        cmp eax, 0x5
        ja L6D9F7F
        jmp dword ptr [eax * 4 + 0x6D9FA4]
L6D9BF4:
        cmp ecx, 0x7FFFFFFF
        jl L6D9C31
        jg L6D9C03
        cmp edx, -1
        jb L6D9C31
L6D9C03:
        mov edi, 0AA92E4h
        or ecx, -1
        xor eax, eax
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ebp
        mov edx, ecx
        mov esi, edi
        mov edi, ebp
        shr ecx, 0x2
        rep movsd
        mov ecx, edx
        and ecx, 0x3
        rep movsb
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x30
        ret 0x10
L6D9C31:
        cmp ecx, 0x80000000
        jg L6D9C6E
        jl L6D9C40
        cmp edx, 0x1
        ja L6D9C6E
L6D9C40:
        mov edi, 0AA92E4h
        or ecx, -1
        xor eax, eax
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        mov esi, edi
        mov edi, ebp
        shr ecx, 0x2
        rep movsd
        mov ecx, eax
        mov eax, ebp
        and ecx, 0x3
        rep movsb
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x30
        ret 0x10
L6D9C6E:
        mov ecx, dword ptr [esp + 0x4c]
        push ecx
        push 0x1
        mov ecx, edi
        call ext_006DABA0
        mov cl, byte ptr [esp + 0x50]
        test cl, cl
        je L6D9CD1
        mov edi, edx
        mov ebx, edx
        sar edi, 0x1f
        sar ebx, 0x1f
        mov ecx, edi
        mov esi, ebx
        xor ecx, eax
        xor esi, edx
        sub ecx, edi
        sbb esi, ebx
        test ecx, ecx
        jne L6D9CAD
        cmp esi, 0x80000000
        jne L6D9CAD
        mov eax, 0x1
        jmp L6D9CAF
L6D9CAD:
        xor eax, eax
L6D9CAF:
        cdq
        sub ecx, eax
        sbb esi, edx
        push esi
        push ecx
        push 0AA92DCh
        push ebp
        call dword ptr [mem_00925218]
        add esp, 0x10
        mov eax, ebp
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x30
        ret 0x10
L6D9CD1:
        push edx
        push eax
        push 0AA92D4h
        push ebp
        call dword ptr [mem_00925218]
        add esp, 0x10
        mov eax, ebp
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x30
        ret 0x10
L6D9CEE:
        cmp ecx, 0x7FFFFFFF
        jl L6D9D2B
        jg L6D9CFD
        cmp edx, -1
        jb L6D9D2B
L6D9CFD:
        mov edi, 0AA92CCh
        or ecx, -1
        xor eax, eax
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ebp
        mov edx, ecx
        mov esi, edi
        mov edi, ebp
        shr ecx, 0x2
        rep movsd
        mov ecx, edx
        and ecx, 0x3
        rep movsb
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x30
        ret 0x10
L6D9D2B:
        cmp ecx, 0x80000000
        jg L6D9D68
        jl L6D9D3A
        cmp edx, 0x1
        ja L6D9D68
L6D9D3A:
        mov edi, 0AA92C4h
        or ecx, -1
        xor eax, eax
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        mov esi, edi
        mov edi, ebp
        shr ecx, 0x2
        rep movsd
        mov ecx, eax
        mov eax, ebp
        and ecx, 0x3
        rep movsb
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x30
        ret 0x10
L6D9D68:
        mov ebp, dword ptr [esp + 0x4c]
        mov ecx, edi
        push ebp
        push 0x1
        call ext_006DABA0
        push ebp
        mov ecx, edi
        mov ebx, eax
        mov esi, edx
        call ext_006DADA0
        or eax, edx
        mov al, byte ptr [esp + 0x50]
        je L6D9E08
        test al, al
        je L6D9DE3
        mov eax, esi
        mov edx, esi
        sar eax, 0x1f
        sar edx, 0x1f
        mov ecx, eax
        mov edi, edx
        xor ecx, ebx
        xor edi, esi
        sub ecx, eax
        sbb edi, edx
        test ecx, ecx
        jne L6D9DB7
        cmp edi, 0x80000000
        jne L6D9DB7
        mov eax, 0x1
        jmp L6D9DB9
L6D9DB7:
        xor eax, eax
L6D9DB9:
        cdq
        sub ecx, eax
        sbb edi, edx
        push edi
        push ecx
        mov ecx, dword ptr [esp + 0x4c]
        push 0AA92B8h
        push ecx
        call dword ptr [mem_00925218]
        mov ebp, dword ptr [esp + 0x54]
        add esp, 0x10
        mov eax, ebp
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x30
        ret 0x10
L6D9DE3:
        mov edx, dword ptr [esp + 0x44]
        push esi
        push ebx
        push 0AA92B0h
        push edx
        call dword ptr [mem_00925218]
        mov ebp, dword ptr [esp + 0x54]
        add esp, 0x10
        mov eax, ebp
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x30
        ret 0x10
L6D9E08:
        test al, al
        je L6D9E61
        mov eax, esi
        mov edx, esi
        sar eax, 0x1f
        sar edx, 0x1f
        mov ecx, eax
        mov edi, edx
        xor ecx, ebx
        xor edi, esi
        sub ecx, eax
        sbb edi, edx
        test ecx, ecx
        jne L6D9E35
        cmp edi, 0x80000000
        jne L6D9E35
        mov eax, 0x1
        jmp L6D9E37
L6D9E35:
        xor eax, eax
L6D9E37:
        cdq
        sub ecx, eax
        mov eax, dword ptr [esp + 0x44]
        sbb edi, edx
        push edi
        push ecx
        push 0AA92A8h
        push eax
        call dword ptr [mem_00925218]
        mov ebp, dword ptr [esp + 0x54]
        add esp, 0x10
        mov eax, ebp
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x30
        ret 0x10
L6D9E61:
        mov ecx, dword ptr [esp + 0x44]
        push esi
        push ebx
        push 0AA92D4h
        push ecx
        call dword ptr [mem_00925218]
        mov ebp, dword ptr [esp + 0x54]
        add esp, 0x10
        mov eax, ebp
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x30
        ret 0x10
L6D9E86:
        cmp ecx, 0x7FFFFFFF
        jl L6D9EC3
        jg L6D9E95
        cmp edx, -1
        jb L6D9EC3
L6D9E95:
        mov edi, 0AA929Ch
        or ecx, -1
        xor eax, eax
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ebp
        mov edx, ecx
        mov esi, edi
        mov edi, ebp
        shr ecx, 0x2
        rep movsd
        mov ecx, edx
        and ecx, 0x3
        rep movsb
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x30
        ret 0x10
L6D9EC3:
        cmp ecx, 0x80000000
        jg L6D9F00
        jl L6D9ED2
        cmp edx, 0x1
        ja L6D9F00
L6D9ED2:
        mov edi, 0AA9290h
        or ecx, -1
        xor eax, eax
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        mov esi, edi
        mov edi, ebp
        shr ecx, 0x2
        rep movsd
        mov ecx, eax
        mov eax, ebp
        and ecx, 0x3
        rep movsb
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x30
        ret 0x10
L6D9F00:
        mov ebp, dword ptr [esp + 0x4c]
        mov ecx, edi
        push ebp
        push 0x1
        call ext_006DABA0
        push ebp
        mov ecx, edi
        mov esi, eax
        mov ebx, edx
        call ext_006DADA0
        mov cl, byte ptr [esp + 0x50]
        test cl, cl
        je L6D9F64
        mov edi, ebx
        mov ebp, ebx
        sar edi, 0x1f
        mov ecx, edi
        sar ebp, 0x1f
        xor ecx, esi
        mov esi, ebp
        xor esi, ebx
        sub ecx, edi
        sbb esi, ebp
        test ecx, ecx
        jne L6D9F4B
        cmp esi, 0x80000000
        jne L6D9F4B
        mov edi, 0x1
        jmp L6D9F4D
L6D9F4B:
        xor edi, edi
L6D9F4D:
        push edx
        push eax
        mov eax, edi
        cdq
        sub ecx, eax
        sbb esi, edx
        push esi
        push ecx
        mov ecx, dword ptr [esp + 0x54]
        push 0AA9280h
        push ecx
        jmp L6D9F72
L6D9F64:
        push edx
        mov edx, dword ptr [esp + 0x48]
        push eax
        push ebx
        push esi
        push 0AA9270h
        push edx
L6D9F72:
        call dword ptr [mem_00925218]
        mov ebp, dword ptr [esp + 0x5c]
        add esp, 0x18
L6D9F7F:
        pop edi
        mov eax, ebp
        pop esi
        pop ebp
        pop ebx
        add esp, 0x30
        ret 0x10
    }
}

// [0x006DA370] sub_006DA370 (1884 bytes)
// 64-bit linear combination of six int args (switch on a6), result stored to *self.
extern "C" void ext_006A6F00();
extern "C" void ext_006D98D0();
extern "C" const unsigned int jt_006DA370[13];

extern "C" __declspec(naked) void __fastcall fn_006DA370(void* self, int edx_unused, int a1, int a2, int a3, int a4, int a5, int a6) {
    __asm {
        mov eax, dword ptr [esp + 0x18]
        push ebx
        push ebp
        push esi
        test eax, eax
        push edi
        mov esi, ecx
        jne short L_006DA383
        call ext_006D98D0
L_006DA383:
        dec eax
        cmp eax, 0xc
        ja near ptr L_006DAAC5
        jmp dword ptr [eax*4 + jt_006DA370]
L_006DA394:
        mov eax, dword ptr [esp + 0x14]
        push 0
        cdq
        push 0x3c
        push edx
        push eax
        call ext_006A6F00
        mov ecx, eax
        mov eax, dword ptr [esp + 0x18]
        mov edi, edx
        push 0
        cdq
        add ecx, eax
        push 0x3c
        adc edi, edx
        push edi
        push ecx
        call ext_006A6F00
        mov ecx, eax
        mov eax, dword ptr [esp + 0x1c]
        mov edi, edx
        push 0
        cdq
        add ecx, eax
        push 0x19
        adc edi, edx
        push edi
        push ecx
        call ext_006A6F00
        mov ecx, eax
        mov eax, dword ptr [esp + 0x20]
        mov edi, edx
        push 0
        cdq
        add ecx, eax
        push 2
        adc edi, edx
        push edi
        push ecx
        call ext_006A6F00
        mov ecx, eax
        mov eax, dword ptr [esp + 0x24]
        mov edi, edx
        push 0
        cdq
        add ecx, eax
        push 0x370ee598
        adc edi, edx
        push edi
        push ecx
        call ext_006A6F00
        mov dword ptr [esi], eax
        mov dword ptr [esi + 0x4], edx
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x18
L_006DA413:
        mov eax, dword ptr [esp + 0x14]
        push 0
        cdq
        push 0x3c
        push edx
        push eax
        call ext_006A6F00
        mov ecx, eax
        mov eax, dword ptr [esp + 0x18]
        mov edi, edx
        push 0
        cdq
        add ecx, eax
        push 0x3c
        adc edi, edx
        push edi
        push ecx
        call ext_006A6F00
        mov ecx, eax
        mov eax, dword ptr [esp + 0x1c]
        mov edi, edx
        push 0
        cdq
        add ecx, eax
        push 0x32
        adc edi, edx
        push edi
        push ecx
        call ext_006A6F00
        mov ecx, eax
        mov eax, dword ptr [esp + 0x20]
        mov edi, edx
        push 0
        cdq
        add ecx, eax
        push 0x370ee598
        adc edi, edx
        push edi
        push ecx
        call ext_006A6F00
        mov dword ptr [esi], eax
        mov dword ptr [esi + 0x4], edx
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x18
L_006DA47A:
        mov eax, dword ptr [esp + 0x14]
        push 0
        cdq
        push 0x3c
        push edx
        push eax
        call ext_006A6F00
        mov ecx, eax
        mov eax, dword ptr [esp + 0x18]
        mov edi, edx
        push 0
        cdq
        add ecx, eax
        push 0x3c
        adc edi, edx
        push edi
        push ecx
        call ext_006A6F00
        mov ecx, eax
        mov eax, dword ptr [esp + 0x1c]
        mov edi, edx
        push 0
        cdq
        add ecx, eax
        push 0x64
        adc edi, edx
        push edi
        push ecx
        call ext_006A6F00
        mov ecx, eax
        mov eax, dword ptr [esp + 0x20]
        mov edi, edx
        push 0
        cdq
        add ecx, eax
        push 0x1b8772cc
        adc edi, edx
        push edi
        push ecx
        call ext_006A6F00
        mov dword ptr [esi], eax
        mov dword ptr [esi + 0x4], edx
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x18
L_006DA4E1:
        mov eax, dword ptr [esp + 0x14]
        push 0
        cdq
        push 0x3c
        push edx
        push eax
        call ext_006A6F00
        mov ecx, eax
        mov eax, dword ptr [esp + 0x18]
        mov edi, edx
        push 0
        cdq
        add ecx, eax
        push 0x3c
        adc edi, edx
        push edi
        push ecx
        call ext_006A6F00
        mov ecx, eax
        mov eax, dword ptr [esp + 0x1c]
        mov edi, edx
        push 0
        cdq
        add ecx, eax
        push 0x1e
        adc edi, edx
        push edi
        push ecx
        call ext_006A6F00
        mov ecx, eax
        mov eax, dword ptr [esp + 0x20]
        mov edi, edx
        push 0
        cdq
        add ecx, eax
        push 2
        adc edi, edx
        push edi
        push ecx
        call ext_006A6F00
        mov ecx, eax
        mov eax, dword ptr [esp + 0x24]
        mov edi, edx
        jmp near ptr L_006DA68B
L_006DA546:
        mov ecx, dword ptr [esp + 0x18]
        mov eax, 0x66666667
        imul ecx
        sar edx, 0x2
        mov eax, edx
        shr eax, 0x1f
        add edx, eax
        mov ebp, edx
        lea edx, [ebp + 4*ebp]
        shl edx, 1
        sub ecx, edx
        mov ebx, ecx
        je short L_006DA5D0
        mov ecx, dword ptr [esp + 0x1c]
        mov eax, dword ptr [esp + 0x20]
        xor edx, edx
        push 0
        test ecx, ecx
        sete dl
        shl edx, 1
        lea edi, [ecx - 0x1]
        sub eax, edx
        xor edx, edx
        push 0x706
        test edi, edi
        setl dl
        dec edx
        and edx, edi
        lea edi, [8*ecx]
        sub edi, ecx
        lea ecx, [edx + 2*edi]
        xor edx, edx
        test eax, eax
        setl dl
        dec edx
        and edx, eax
        lea eax, [edx + 2*ecx]
        cdq
        mov edi, eax
        lea eax, [ebx - 0x1]
        mov dword ptr [esp + 0x24], edi
        mov edi, edx
        cdq
        push edx
        push eax
        call ext_006A6F00
        mov ecx, dword ptr [esp + 0x1c]
        add ecx, eax
        adc edi, edx
        add ecx, 0x708
        adc edi, 0
        jmp short L_006DA5ED
L_006DA5D0:
        mov eax, dword ptr [esp + 0x1c]
        push 0
        cdq
        push 0x1e
        push edx
        push eax
        call ext_006A6F00
        mov ecx, eax
        mov eax, dword ptr [esp + 0x20]
        mov edi, edx
        cdq
        add ecx, eax
        adc edi, edx
L_006DA5ED:
        push 0
        push 0x5bc37ea8
        push edi
        push ecx
        call ext_006A6F00
        mov edi, eax
        mov eax, dword ptr [esp + 0x14]
        mov ebx, edx
        push 0
        cdq
        push 0x6
        push edx
        push eax
        call ext_006A6F00
        mov ecx, eax
        mov eax, ebp
        mov ebp, ecx
        mov ecx, edx
        push 0
        cdq
        add ebp, eax
        push 0x8c7c
        adc ecx, edx
        push ecx
        push ebp
        call ext_006A6F00
        mov ecx, eax
        mov eax, dword ptr [esp + 0x24]
        mov ebp, edx
        push 0
        cdq
        add ecx, eax
        push 0x2de1bf54
        adc ebp, edx
        jmp near ptr L_006DAAB5
L_006DA643:
        mov eax, dword ptr [esp + 0x14]
        push 0
        cdq
        push 0x3c
        push edx
        push eax
        call ext_006A6F00
        mov ecx, eax
        mov eax, dword ptr [esp + 0x18]
        mov edi, edx
        push 0
        cdq
        add ecx, eax
        push 0x3c
        adc edi, edx
        push edi
        push ecx
        call ext_006A6F00
        mov ecx, eax
        mov eax, dword ptr [esp + 0x1c]
        mov edi, edx
        push 0
        cdq
        add ecx, eax
        push 0x3c
        adc edi, edx
        push edi
        push ecx
        call ext_006A6F00
        mov ecx, eax
        mov eax, dword ptr [esp + 0x20]
        mov edi, edx
L_006DA68B:
        cdq
        add ecx, eax
        push 0
        adc edi, edx
        push 0x2de1bf54
        push edi
        push ecx
        call ext_006A6F00
        mov dword ptr [esi], eax
        mov dword ptr [esi + 0x4], edx
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x18
L_006DA6AA:
        mov eax, dword ptr [esp + 0x14]
        push 0
        cdq
        push 0x3c
        push edx
        push eax
        call ext_006A6F00
        mov ecx, eax
        mov eax, dword ptr [esp + 0x18]
        mov edi, edx
        push 0
        cdq
        add ecx, eax
        push 0x3c
        adc edi, edx
        push edi
        push ecx
        call ext_006A6F00
        mov ecx, eax
        mov eax, dword ptr [esp + 0x1c]
        mov edi, edx
        push 0
        cdq
        add ecx, eax
        push 0x78
        adc edi, edx
        push edi
        push ecx
        call ext_006A6F00
        mov ecx, eax
        mov eax, dword ptr [esp + 0x20]
        mov edi, edx
        push 0
        cdq
        add ecx, eax
        push 0x16f0dfaa
        adc edi, edx
        push edi
        push ecx
        call ext_006A6F00
        mov dword ptr [esi], eax
        mov dword ptr [esi + 0x4], edx
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x18
L_006DA711:
        mov eax, dword ptr [esp + 0x14]
        push 0
        cdq
        push 0x3c
        push edx
        push eax
        call ext_006A6F00
        mov ecx, eax
        mov eax, dword ptr [esp + 0x18]
        mov edi, edx
        push 0
        cdq
        add ecx, eax
        push 0x3c
        adc edi, edx
        push edi
        push ecx
        call ext_006A6F00
        mov ecx, eax
        mov eax, dword ptr [esp + 0x1c]
        mov edi, edx
        push 0
        cdq
        add ecx, eax
        push 0x3e8
        adc edi, edx
        push edi
        push ecx
        call ext_006A6F00
        mov ecx, eax
        mov eax, dword ptr [esp + 0x20]
        mov edi, edx
        push 0
        cdq
        add ecx, eax
        push 0x2c0beae
        adc edi, edx
        push edi
        push ecx
        call ext_006A6F00
        mov dword ptr [esi], eax
        mov dword ptr [esi + 0x4], edx
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x18
L_006DA77B:
        mov eax, dword ptr [esp + 0x14]
        push 0
        cdq
        push 0x3c
        push edx
        push eax
        call ext_006A6F00
        mov ecx, eax
        mov eax, dword ptr [esp + 0x18]
        mov edi, edx
        push 0
        cdq
        add ecx, eax
        push 0x3c
        adc edi, edx
        push edi
        push ecx
        call ext_006A6F00
        mov ecx, eax
        mov eax, dword ptr [esp + 0x1c]
        mov edi, edx
        push 0
        cdq
        add ecx, eax
        push 0x18
        adc edi, edx
        push edi
        push ecx
        call ext_006A6F00
        mov ecx, eax
        mov eax, dword ptr [esp + 0x20]
        mov edi, edx
        push 0
        cdq
        add ecx, eax
        push 0x72b45e52
        adc edi, edx
        push edi
        push ecx
        call ext_006A6F00
        mov dword ptr [esi], eax
        mov dword ptr [esi + 0x4], edx
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x18
L_006DA7E2:
        mov eax, dword ptr [esp + 0x14]
        push 0
        cdq
        push 0x3c
        push edx
        push eax
        call ext_006A6F00
        mov ecx, eax
        mov eax, dword ptr [esp + 0x18]
        mov edi, edx
        push 0
        cdq
        add ecx, eax
        push 0x3c
        adc edi, edx
        push edi
        push ecx
        call ext_006A6F00
        mov ecx, eax
        mov eax, dword ptr [esp + 0x1c]
        mov edi, edx
        push 0
        cdq
        add ecx, eax
        push 0x30
        adc edi, edx
        push edi
        push ecx
        call ext_006A6F00
        mov ecx, eax
        mov eax, dword ptr [esp + 0x20]
        mov edi, edx
        push 0
        cdq
        add ecx, eax
        push 0x395a2f29
        adc edi, edx
        push edi
        push ecx
        call ext_006A6F00
        mov dword ptr [esi], eax
        mov dword ptr [esi + 0x4], edx
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x18
L_006DA849:
        mov ecx, dword ptr [esp + 0x18]
        mov eax, 0x66666667
        imul ecx
        sar edx, 0x2
        mov eax, edx
        shr eax, 0x1f
        add edx, eax
        mov ebp, edx
        lea edx, [ebp + 4*ebp]
        shl edx, 1
        sub ecx, edx
        mov ebx, ecx
        je short L_006DA8D3
        mov ecx, dword ptr [esp + 0x1c]
        mov eax, dword ptr [esp + 0x20]
        xor edx, edx
        push 0
        test ecx, ecx
        sete dl
        shl edx, 1
        lea edi, [ecx - 0x1]
        sub eax, edx
        xor edx, edx
        push 0x706
        test edi, edi
        setl dl
        dec edx
        and edx, edi
        lea edi, [8*ecx]
        sub edi, ecx
        lea ecx, [edx + 2*edi]
        xor edx, edx
        test eax, eax
        setl dl
        dec edx
        and edx, eax
        lea eax, [edx + 2*ecx]
        cdq
        mov edi, eax
        lea eax, [ebx - 0x1]
        mov dword ptr [esp + 0x24], edi
        mov edi, edx
        cdq
        push edx
        push eax
        call ext_006A6F00
        mov ecx, dword ptr [esp + 0x1c]
        add ecx, eax
        adc edi, edx
        add ecx, 0x708
        adc edi, 0
        jmp short L_006DA8F0
L_006DA8D3:
        mov eax, dword ptr [esp + 0x1c]
        push 0
        cdq
        push 0x1e
        push edx
        push eax
        call ext_006A6F00
        mov ecx, eax
        mov eax, dword ptr [esp + 0x20]
        mov edi, edx
        cdq
        add ecx, eax
        adc edi, edx
L_006DA8F0:
        push 0
        push 0x5bdafd3e
        push edi
        push ecx
        call ext_006A6F00
        mov edi, eax
        mov eax, dword ptr [esp + 0x14]
        mov ebx, edx
        push 0
        cdq
        push 0x6
        push edx
        push eax
        call ext_006A6F00
        mov ecx, eax
        mov eax, ebp
        mov ebp, ecx
        mov ecx, edx
        push 0
        cdq
        add ebp, eax
        push 0x8c7c
        adc ecx, edx
        push ecx
        push ebp
        call ext_006A6F00
        mov ecx, eax
        mov eax, dword ptr [esp + 0x24]
        mov ebp, edx
        push 0
        cdq
        add ecx, eax
        push 0x2ded7e9f
        adc ebp, edx
        jmp near ptr L_006DAAB5
L_006DA946:
        mov eax, dword ptr [esp + 0x14]
        push 0
        cdq
        push 0x3c
        push edx
        push eax
        call ext_006A6F00
        mov ecx, eax
        mov eax, dword ptr [esp + 0x18]
        mov edi, edx
        push 0
        cdq
        add ecx, eax
        push 0x3c
        adc edi, edx
        push edi
        push ecx
        call ext_006A6F00
        mov ecx, eax
        mov eax, dword ptr [esp + 0x1c]
        mov edi, edx
        push 0
        cdq
        add ecx, eax
        push 0x1e
        adc edi, edx
        push edi
        push ecx
        call ext_006A6F00
        mov ecx, eax
        mov eax, dword ptr [esp + 0x20]
        mov edi, edx
        push 0
        cdq
        add ecx, eax
        push 2
        adc edi, edx
        push edi
        push ecx
        call ext_006A6F00
        mov ecx, eax
        mov eax, dword ptr [esp + 0x24]
        mov edi, edx
        push 0
        cdq
        add ecx, eax
        push 0x2ded7e9f
        adc edi, edx
        push edi
        push ecx
        call ext_006A6F00
        mov dword ptr [esi], eax
        mov dword ptr [esi + 0x4], edx
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x18
L_006DA9C5:
        mov ecx, dword ptr [esp + 0x18]
        mov eax, 0x66666667
        imul ecx
        sar edx, 0x2
        mov eax, edx
        shr eax, 0x1f
        add edx, eax
        mov eax, dword ptr [esp + 0x1c]
        mov ebp, edx
        lea edx, [ebp + 4*ebp]
        shl edx, 1
        sub ecx, edx
        mov ebx, ecx
        je short L_006DAA4B
        mov ecx, dword ptr [esp + 0x20]
        xor edx, edx
        test eax, eax
        sete dl
        shl edx, 1
        lea edi, [eax - 0x1]
        sub ecx, edx
        xor edx, edx
        push 0
        test edi, edi
        setl dl
        dec edx
        push 0x59e
        and edx, edi
        lea edi, [eax + 4*eax]
        lea eax, [eax + 2*edi]
        add edx, eax
        xor eax, eax
        test ecx, ecx
        setl al
        dec eax
        and eax, ecx
        lea eax, [eax + 2*edx]
        cdq
        mov edi, eax
        lea eax, [ebx - 0x1]
        mov dword ptr [esp + 0x24], edi
        mov edi, edx
        cdq
        push edx
        push eax
        call ext_006A6F00
        mov ecx, dword ptr [esp + 0x1c]
        add ecx, eax
        adc edi, edx
        add ecx, 0x5a0
        adc edi, 0
        jmp short L_006DAA64
L_006DAA4B:
        cdq
        push 0
        push 0x18
        push edx
        push eax
        call ext_006A6F00
        mov ecx, eax
        mov eax, dword ptr [esp + 0x20]
        mov edi, edx
        cdq
        add ecx, eax
        adc edi, edx
L_006DAA64:
        push 0
        push 0x72d1c320
        push edi
        push ecx
        call ext_006A6F00
        mov edi, eax
        mov eax, dword ptr [esp + 0x14]
        mov ebx, edx
        push 0
        cdq
        push 0x6
        push edx
        push eax
        call ext_006A6F00
        mov ecx, eax
        mov eax, ebp
        mov ebp, ecx
        mov ecx, edx
        push 0
        cdq
        add ebp, eax
        push 0x705c
        adc ecx, edx
        push ecx
        push ebp
        call ext_006A6F00
        mov ecx, eax
        mov eax, dword ptr [esp + 0x24]
        mov ebp, edx
        push 0
        cdq
        add ecx, eax
        push 0x3968e190
        adc ebp, edx
L_006DAAB5:
        push ebp
        push ecx
        call ext_006A6F00
        add eax, edi
        adc edx, ebx
        mov dword ptr [esi], eax
        mov dword ptr [esi + 0x4], edx
L_006DAAC5:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x18
    }
}

// Jump table for the switch above (13 entries, indexed by a6-1).
extern "C" const unsigned int jt_006DA370[13] = {
    0x006DA6AA, 0x006DA47A, 0x006DA643, 0x006DA413, 0x006DA7E2, 0x006DA4E1, 0x006DA546,
    0x006DA849, 0x006DA946, 0x006DA394, 0x006DA77B, 0x006DA711, 0x006DA9C5
};

// [0x006D04E0] sub_006D04E0 (2081 bytes)
extern "C" void ext_006BC600();
extern "C" void ext_006C9C30();
extern "C" void ext_006C9CC0();
extern "C" void ext_006C9CD0();
extern "C" void ext_006C9D20();
extern "C" void ext_006C9DC0();
extern "C" void ext_006C9E60();
extern "C" void ext_006C9E80();
extern "C" void ext_006C9F00();
extern "C" void ext_006C9F70();
extern "C" void ext_006C9FA0();
extern "C" void ext_006C9FD0();
extern "C" void ext_006CA060();
extern "C" void ext_006CA6A0();
extern "C" void ext_006CB190();
extern "C" void ext_006CBF00();
extern "C" void ext_006D2A30();
extern "C" void ext_006D89C0();
extern "C" void ext_006DEEC0();
extern "C" void ext_007275F0();
extern "C" void ext_00727800();
extern "C" void ext_00727C80();
extern "C" void ext_00727FE0();
extern "C" void ext_007281B0();
extern "C" void ext_007283B0();
extern "C" void ext_00728410();
extern "C" void ext_007284D0();
extern "C" int mem_00993838;

// __thiscall-style (ecx = this), ret 0x10: four stack args a1..a4.
extern "C" __declspec(naked) void __fastcall fn_006D04E0(void* self, int edx_unused, void* a1, int a2, int a3, int a4) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -8
        sub esp, 0x2c
        push ebx
        push esi
        mov ebx, ecx
        push edi
        mov dword ptr [esp + 0x10], ebx
        call ext_006C9F70
        mov esi, dword ptr [ebp + 0x8]
        push 0xaa8cb0
        fstp qword ptr [esp + 0x2c]
        mov ecx, esi
        call ext_007275F0
        mov eax, dword ptr [esp + 0x2c]
        mov ecx, dword ptr [esp + 0x28]
        push eax
        push ecx
        mov ecx, esi
        call ext_00727FE0
        mov ecx, esi
        call ext_007283B0
        mov al, byte ptr [ebp + 0xc]
        test al, al
        jne L_6d0cf6
        mov ecx, ebx
        call ext_006CA6A0
        test eax, eax
        je L_6d0c98
        push 0xaa8e50
        mov ecx, esi
        call ext_007275F0
        mov dl, byte ptr [ebp + 0x14]
        mov ecx, esi
        neg dl
        sbb edx, edx
        and edx, -2
        add edx, 0xfa4
        push edx
        call ext_00727C80
        mov ecx, esi
        call ext_007283B0
        mov ecx, ebx
        call ext_006CA6A0
        push 0xaa8e44
        mov ecx, esi
        mov edi, eax
        call ext_007275F0
        push edi
        mov ecx, esi
        call ext_00727C80
        mov ecx, esi
        call ext_007283B0
        push 0xaa8e40
        mov ecx, esi
        call ext_007275F0
        mov ecx, ebx
        mov dword ptr [esp + 0xc], 0
        call ext_006CA6A0
        test eax, eax
        jle L_6d0af1
L_6d05ae:
        mov eax, dword ptr [esp + 0xc]
        mov ecx, ebx
        push eax
        call ext_006CA060
        mov ecx, ebx
        mov edi, eax
        call ext_006CA6A0
        mov ecx, dword ptr [esp + 0xc]
        dec eax
        cmp ecx, eax
        jge L_6d05db
        inc ecx
        push ecx
        mov ecx, ebx
        call ext_006CA060
        mov dword ptr [esp + 0x24], eax
        jmp L_6d05e3
L_6d05db:
        mov dword ptr [esp + 0x24], 0
L_6d05e3:
        mov edx, dword ptr [esp + 0xc]
        lea eax, [edx - 1]
        test eax, eax
        jl L_6d05fc
        push eax
        mov ecx, ebx
        call ext_006CA060
        mov dword ptr [esp + 0x28], eax
        jmp L_6d0604
L_6d05fc:
        mov dword ptr [esp + 0x28], 0
L_6d0604:
        sub esp, 8
        lea eax, [esp + 0x38]
        mov ebx, esp
        mov ecx, edi
        push eax
        call ext_006C9F00
        mov ecx, eax
        call ext_006D2A30
        mov ecx, dword ptr [eax]
        mov dword ptr [ebx], ecx
        mov ecx, esi
        mov edx, dword ptr [eax + 0x4]
        mov dword ptr [ebx + 0x4], edx
        call ext_007281B0
        mov ecx, edi
        call ext_006C9E80
        sub esp, 8
        mov ecx, esi
        fstp qword ptr [esp]
        call ext_00727FE0
        mov ecx, edi
        call ext_006C9C30
        sub eax, 2
        je L_6d065f
        sub eax, 2
        je L_6d065b
        sub eax, 4
        jne L_6d0668
        push 0x55
        jmp L_6d0661
L_6d065b:
        push 0x4c
        jmp L_6d0661
L_6d065f:
        push 0x43
L_6d0661:
        mov ecx, esi
        call ext_00727800
L_6d0668:
        mov bl, byte ptr [ebp + 0x14]
        test bl, bl
        jne L_6d0696
        mov ecx, edi
        call ext_006C9C30
        cmp eax, 2
        jne L_6d0696
        mov ecx, edi
        call ext_006C9CC0
        cmp eax, 0x100
        jne L_6d068d
        push 0x6e
        jmp L_6d068f
L_6d068d:
        push 0x73
L_6d068f:
        mov ecx, esi
        call ext_00727800
L_6d0696:
        mov ecx, edi
        call ext_006C9C30
        cmp eax, 8
        jne L_6d0ad3
        mov ecx, edi
        call ext_006C9CD0
        cmp eax, 0x400
        ja L_6d070f
        je L_6d0725
        cmp eax, 0x100
        je L_6d07d0
        cmp eax, 0x200
        jne L_6d0ad3
        push 0x74
        mov ecx, esi
        call ext_00727800
        push 0
        mov ecx, edi
        call ext_006C9E60
        sub esp, 8
        mov ecx, esi
        fstp qword ptr [esp]
        call ext_00727FE0
        push 1
        mov ecx, edi
        call ext_006C9E60
        sub esp, 8
        mov ecx, esi
        fstp qword ptr [esp]
        call ext_00727FE0
        push 2
        mov ecx, edi
        call ext_006C9E60
        jmp L_6d0ac6
L_6d070f:
        cmp eax, 0x900
        je L_6d07d0
        cmp eax, 0xc00
        jne L_6d0ad3
L_6d0725:
        mov ecx, edi
        call ext_006C9CD0
        cmp eax, 0x400
        jne L_6d0737
        push 0x73
        jmp L_6d0739
L_6d0737:
        push 0x62
L_6d0739:
        mov ecx, esi
        call ext_00727800
        push 0
        mov ecx, edi
        call ext_006C9DC0
        sub esp, 8
        mov ecx, esi
        fstp qword ptr [esp]
        call ext_00727FE0
        push 1
        mov ecx, edi
        call ext_006C9DC0
        sub esp, 8
        mov ecx, esi
        fstp qword ptr [esp]
        call ext_00727FE0
        mov ecx, edi
        mov byte ptr [esp + 0x14], 0x6e
        call ext_006C9D20
        cmp eax, 0x2000000
        ja L_6d07a1
        je L_6d079a
        test eax, eax
        je L_6d0793
        cmp eax, 0x1000000
        jne L_6d07ad
        mov byte ptr [esp + 0x14], 0x72
        jmp L_6d07ad
L_6d0793:
        mov byte ptr [esp + 0x14], 0x6e
        jmp L_6d07ad
L_6d079a:
        mov byte ptr [esp + 0x14], 0x6c
        jmp L_6d07ad
L_6d07a1:
        cmp eax, 0x3000000
        jne L_6d07ad
        mov byte ptr [esp + 0x14], 0x61
L_6d07ad:
        mov eax, dword ptr [esp + 0x14]
        push eax
L_6d07b2:
        mov ecx, esi
        call ext_00727800
        mov ecx, edi
        call ext_006C9D20
        test eax, 0x1000000
        je L_6d09a6
        jmp L_6d0990
L_6d07d0:
        test bl, bl
        je L_6d09bd
        mov ecx, dword ptr [esp + 0x28]
        test ecx, ecx
        je L_6d0821
        push 1
        call ext_006C9DC0
        fcomp dword ptr [mem_00993838]
        fnstsw ax
        test ah, 0x40
        je L_6d080a
        push 0
        mov ecx, edi
        call ext_006C9DC0
        fcomp dword ptr [mem_00993838]
        fnstsw ax
        test ah, 0x40
        jne L_6d0837
L_6d080a:
        mov ecx, edi
        call ext_006C9CD0
        test ah, 0x8
        je L_6d08eb
        push 0x62
        jmp L_6d08ed
L_6d0821:
        push 0
        mov ecx, edi
        call ext_006C9DC0
        fcomp dword ptr [mem_00993838]
        fnstsw ax
        test ah, 0x40
        je L_6d080a
L_6d0837:
        mov ebx, dword ptr [esp + 0x24]
        test ebx, ebx
        je L_6d09e9
        mov ecx, ebx
        call ext_006C9C30
        cmp eax, 8
        jne L_6d09e9
        mov ecx, ebx
        call ext_006C9CD0
        test ah, 0x4
        je L_6d09e9
        push 0x64
        mov ecx, esi
        call ext_00727800
        mov ecx, dword ptr [esp + 0xc]
        inc ecx
        push ecx
        mov ecx, dword ptr [esp + 0x14]
        call ext_006CB190
        sub esp, 8
        mov ecx, esi
        fstp qword ptr [esp]
        call ext_00727FE0
        mov ecx, edi
        mov byte ptr [esp + 0x18], 0x6e
        call ext_006C9D20
        cmp eax, 0x2000000
        ja L_6d08d5
        je L_6d08c6
        test eax, eax
        je L_6d08b7
        cmp eax, 0x1000000
        jne L_6d08e1
        mov byte ptr [esp + 0x18], 0x72
        mov edx, dword ptr [esp + 0x18]
        push edx
        jmp L_6d07b2
L_6d08b7:
        mov byte ptr [esp + 0x18], 0x6e
        mov edx, dword ptr [esp + 0x18]
        push edx
        jmp L_6d07b2
L_6d08c6:
        mov byte ptr [esp + 0x18], 0x6c
        mov edx, dword ptr [esp + 0x18]
        push edx
        jmp L_6d07b2
L_6d08d5:
        cmp eax, 0x3000000
        jne L_6d08e1
        mov byte ptr [esp + 0x18], 0x61
L_6d08e1:
        mov edx, dword ptr [esp + 0x18]
        push edx
        jmp L_6d07b2
L_6d08eb:
        push 0x73
L_6d08ed:
        mov ecx, esi
        call ext_00727800
        mov ebx, dword ptr [esp + 0xc]
        mov ecx, dword ptr [esp + 0x10]
        push ebx
        call ext_006CBF00
        sub esp, 8
        mov ecx, esi
        fstp qword ptr [esp]
        call ext_00727FE0
        mov eax, dword ptr [esp + 0x24]
        test eax, eax
        je L_6d092a
        mov ecx, dword ptr [esp + 0x10]
        inc ebx
        push ebx
        call ext_006CB190
        sub esp, 8
        fstp qword ptr [esp]
        jmp L_6d092e
L_6d092a:
        push 0
        push 0
L_6d092e:
        mov ecx, esi
        call ext_00727FE0
        mov ecx, edi
        mov byte ptr [esp + 0x1c], 0x6e
        call ext_006C9D20
        cmp eax, 0x2000000
        ja L_6d096a
        je L_6d0963
        test eax, eax
        je L_6d095c
        cmp eax, 0x1000000
        jne L_6d0976
        mov byte ptr [esp + 0x1c], 0x72
        jmp L_6d0976
L_6d095c:
        mov byte ptr [esp + 0x1c], 0x6e
        jmp L_6d0976
L_6d0963:
        mov byte ptr [esp + 0x1c], 0x6c
        jmp L_6d0976
L_6d096a:
        cmp eax, 0x3000000
        jne L_6d0976
        mov byte ptr [esp + 0x1c], 0x61
L_6d0976:
        mov eax, dword ptr [esp + 0x1c]
        mov ecx, esi
        push eax
        call ext_00727800
        mov ecx, edi
        call ext_006C9D20
        test eax, 0x1000000
        je L_6d09a6
L_6d0990:
        push 2
        mov ecx, edi
        call ext_006C9DC0
        sub esp, 8
        mov ecx, esi
        fstp qword ptr [esp]
        call ext_00727FE0
L_6d09a6:
        mov ecx, edi
        call ext_006C9D20
        test eax, 0x2000000
        je L_6d0ad3
        jmp L_6d0abd
L_6d09bd:
        push 0
        mov ecx, edi
        call ext_006C9DC0
        fcomp dword ptr [mem_00993838]
        fnstsw ax
        test ah, 0x40
        je L_6d09f7
        push 1
        mov ecx, edi
        call ext_006C9DC0
        fcomp dword ptr [mem_00993838]
        fnstsw ax
        test ah, 0x40
        je L_6d09f7
L_6d09e9:
        push 0x61
        mov ecx, esi
        call ext_00727800
        jmp L_6d0ad3
L_6d09f7:
        mov ecx, edi
        call ext_006C9CD0
        cmp eax, 0x100
        jne L_6d0a09
        push 0x70
        jmp L_6d0a0b
L_6d0a09:
        push 0x71
L_6d0a0b:
        mov ecx, esi
        call ext_00727800
        push 0
        mov ecx, edi
        call ext_006C9DC0
        sub esp, 8
        mov ecx, esi
        fstp qword ptr [esp]
        call ext_00727FE0
        push 1
        mov ecx, edi
        call ext_006C9DC0
        sub esp, 8
        mov ecx, esi
        fstp qword ptr [esp]
        call ext_00727FE0
        mov ecx, edi
        mov byte ptr [esp + 0x20], 0x6e
        call ext_006C9D20
        cmp eax, 0x2000000
        ja L_6d0a73
        je L_6d0a6c
        test eax, eax
        je L_6d0a65
        cmp eax, 0x1000000
        jne L_6d0a7f
        mov byte ptr [esp + 0x20], 0x72
        jmp L_6d0a7f
L_6d0a65:
        mov byte ptr [esp + 0x20], 0x6e
        jmp L_6d0a7f
L_6d0a6c:
        mov byte ptr [esp + 0x20], 0x6c
        jmp L_6d0a7f
L_6d0a73:
        cmp eax, 0x3000000
        jne L_6d0a7f
        mov byte ptr [esp + 0x20], 0x61
L_6d0a7f:
        mov ecx, dword ptr [esp + 0x20]
        push ecx
        mov ecx, esi
        call ext_00727800
        mov ecx, edi
        call ext_006C9D20
        test eax, 0x1000000
        je L_6d0aaf
        push 2
        mov ecx, edi
        call ext_006C9DC0
        sub esp, 8
        mov ecx, esi
        fstp qword ptr [esp]
        call ext_00727FE0
L_6d0aaf:
        mov ecx, edi
        call ext_006C9D20
        test eax, 0x2000000
        je L_6d0ad3
L_6d0abd:
        push 3
        mov ecx, edi
        call ext_006C9DC0
L_6d0ac6:
        sub esp, 8
        mov ecx, esi
        fstp qword ptr [esp]
        call ext_00727FE0
L_6d0ad3:
        mov edi, dword ptr [esp + 0xc]
        mov ecx, dword ptr [esp + 0x10]
        inc edi
        mov dword ptr [esp + 0xc], edi
        call ext_006CA6A0
        mov ebx, dword ptr [esp + 0x10]
        cmp edi, eax
        jl L_6d05ae
L_6d0af1:
        mov ecx, esi
        call ext_007283B0
        mov ecx, ebx
        call ext_006C9FA0
        test eax, eax
        je L_6d0bc8
        mov ecx, ebx
        call ext_006C9FA0
        cmp eax, 1
        jne L_6d0b22
        mov ecx, ebx
        call ext_006C9FD0
        test eax, eax
        je L_6d0bc8
L_6d0b22:
        push 0xaa8e2c
        mov ecx, esi
        call ext_007275F0
        mov ecx, esi
        call ext_00728410
        mov ecx, ebx
        mov byte ptr [esp + 0x20], 0x30
        call ext_006C9FA0
        dec eax
        cmp eax, 3
        ja L_6d0b68
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x04
        __asm _emit 0x0d
        __asm _emit 0x6d
        __asm _emit 0x00
L_6d0b4e:
        mov byte ptr [esp + 0x20], 0x43
        jmp L_6d0b68
L_6d0b55:
        mov byte ptr [esp + 0x20], 0x52
        jmp L_6d0b68
L_6d0b5c:
        mov byte ptr [esp + 0x20], 0x4d
        jmp L_6d0b68
L_6d0b63:
        mov byte ptr [esp + 0x20], 0x4b
L_6d0b68:
        push 0xaa8e24
        mov ecx, esi
        call ext_007275F0
        mov edx, dword ptr [esp + 0x20]
        mov ecx, esi
        push edx
        call ext_00727800
        mov ecx, esi
        call ext_007283B0
        mov ecx, ebx
        or edi, -1
        call ext_006C9FD0
        cmp eax, -1
        je L_6d0b9f
        mov ecx, ebx
        call ext_006C9FD0
        mov edi, eax
L_6d0b9f:
        push 0xaa8e18
        mov ecx, esi
        call ext_007275F0
        push edi
        mov ecx, esi
        call ext_00727C80
        mov ecx, esi
        call ext_007283B0
        mov ecx, esi
        call ext_007284D0
        mov ecx, esi
        call ext_007283B0
L_6d0bc8:
        mov ecx, ebx
        call ext_006DEEC0
        test eax, eax
        je L_6d0c98
        mov ecx, ebx
        call ext_006DEEC0
        cmp eax, 1
        jne L_6d0bf2
        mov ecx, ebx
        call ext_006BC600
        test eax, eax
        je L_6d0c98
L_6d0bf2:
        push 0xaa8e04
        mov ecx, esi
        call ext_007275F0
        mov ecx, esi
        call ext_00728410
        mov ecx, ebx
        mov byte ptr [esp + 0x20], 0x30
        call ext_006DEEC0
        dec eax
        cmp eax, 3
        ja L_6d0c38
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x14
        __asm _emit 0x0d
        __asm _emit 0x6d
        __asm _emit 0x00
L_6d0c1e:
        mov byte ptr [esp + 0x20], 0x43
        jmp L_6d0c38
L_6d0c25:
        mov byte ptr [esp + 0x20], 0x52
        jmp L_6d0c38
L_6d0c2c:
        mov byte ptr [esp + 0x20], 0x4d
        jmp L_6d0c38
L_6d0c33:
        mov byte ptr [esp + 0x20], 0x4b
L_6d0c38:
        push 0xaa8e24
        mov ecx, esi
        call ext_007275F0
        mov eax, dword ptr [esp + 0x20]
        mov ecx, esi
        push eax
        call ext_00727800
        mov ecx, esi
        call ext_007283B0
        mov ecx, ebx
        or edi, -1
        call ext_006BC600
        cmp eax, -1
        je L_6d0c6f
        mov ecx, ebx
        call ext_006BC600
        mov edi, eax
L_6d0c6f:
        push 0xaa8e18
        mov ecx, esi
        call ext_007275F0
        push edi
        mov ecx, esi
        call ext_00727C80
        mov ecx, esi
        call ext_007283B0
        mov ecx, esi
        call ext_007284D0
        mov ecx, esi
        call ext_007283B0
L_6d0c98:
        mov al, byte ptr [ebp + 0x10]
        test al, al
        je L_6d0cf6
        push 0xaa8cec
        mov ecx, esi
        call ext_007275F0
        mov ecx, ebx
        call ext_006D89C0
        fld dword ptr [eax]
        sub esp, 8
        mov ecx, esi
        fstp qword ptr [esp]
        call ext_00727FE0
        mov ecx, ebx
        call ext_006D89C0
        fld dword ptr [eax + 0x4]
        sub esp, 8
        mov ecx, esi
        fstp qword ptr [esp]
        call ext_00727FE0
        mov ecx, ebx
        call ext_006D89C0
        fld dword ptr [eax + 0x8]
        sub esp, 8
        mov ecx, esi
        fstp qword ptr [esp]
        call ext_00727FE0
        mov ecx, esi
        call ext_007283B0
L_6d0cf6:
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0x10
    }
}

// [0x006DF190] sub_006DF190 (3646 bytes)
extern "C" void ext_006A73BA();
extern "C" void ext_006C4220();
extern "C" void ext_006C4440();
extern "C" void ext_006C8200();
extern "C" void ext_006CD350();
extern "C" void ext_006CE020();
extern "C" void ext_006D2810();
extern "C" void ext_006DFFF0();
extern "C" void ext_006E0050();
extern "C" void ext_006E0090();
extern "C" void ext_006E00C0();
extern "C" void ext_006E00F0();
extern "C" void ext_006E01F0();
extern "C" void ext_006E0390();
extern "C" void ext_006E05C0();
extern "C" void ext_006E0810();
extern "C" void ext_006E0900();
extern "C" void ext_006E0920();
extern "C" void ext_006E0940();
extern "C" void ext_006E0990();
extern "C" void ext_006E3A40();
extern "C" int mem_00993C98;
extern "C" int mem_00993C90;
extern "C" int mem_0092A270;
extern "C" int mem_00993C88;
extern "C" int mem_0093F7B0;
extern "C" int mem_00993828;
extern "C" int mem_00993C80;
extern "C" int mem_009937F8;
extern "C" int mem_00993C78;
extern "C" int mem_00993800;
extern "C" int mem_00993C70;
extern "C" int mem_009937F0;
extern "C" int mem_00993C68;
extern "C" int mem_009937E8;
extern "C" int mem_006DFFD0;
extern "C" int mem_00996D70;
extern "C" int mem_00996D74;
extern "C" int mem_00996D78;

extern "C" __declspec(naked) void* __fastcall fn_006DF190(void* self, int edx_unused, void* out, __int64 time, void* a3, bool a4) {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0x1f8
        mov eax, dword ptr [ebp + 0x14]
        push ebx
        push esi
        push edi
        xor edi, edi
        mov esi, ecx
        cmp eax, edi
        mov dword ptr [ebp - 0x8], edi
        jne L_006DF1AD
        lea eax, [ebp - 0x8]
    L_006DF1AD:
        mov ecx, dword ptr [esi + 0x3c]
        mov dword ptr [ebp - 0xc], eax
        cmp ecx, edi
        je L_006DF1E5
        mov ebx, dword ptr [ebp + 0x18]
        mov eax, dword ptr [ebp + 0x10]
        lea edx, [ebp - 0x4]
        push ebx
        push edx
        mov edx, dword ptr [ebp + 0xc]
        push eax
        lea eax, [ebp - 0x60]
        push edx
        push eax
        mov dword ptr [ebp - 0x4], edi
        call fn_006DF190
        mov ecx, dword ptr [ebp - 0x5c]
        mov edx, dword ptr [ebp - 0x60]
        push ecx
        push edx
        lea ecx, [ebp + 0xc]
        call fn_006DAE00
        jmp L_006DF1E8
    L_006DF1E5:
        mov ebx, dword ptr [ebp + 0x18]
    L_006DF1E8:
        test bl, bl
        je L_006DF279
        mov ecx, esi
        call ext_006E3A40
        test al, al
        je L_006DF279
        mov ecx, dword ptr [esi + 0x90]
        mov eax, dword ptr [ebp + 0xc]
        mov edx, dword ptr [ebp + 0x10]
        cmp ecx, eax
        jne L_006DF215
        mov ecx, dword ptr [esi + 0x94]
        cmp ecx, edx
        je L_006DF21B
    L_006DF215:
        test byte ptr [esi + 0x18], 0x80
        je L_006DF27F
    L_006DF21B:
        cmp dword ptr [esi + 0x58], edi
        jne L_006DF27F
        cmp dword ptr [esi + 0x38], edi
        je L_006DF238
        mov edi, dword ptr [ebp + 0x8]
        mov edx, dword ptr [esi + 0x70]
        mov dword ptr [edi], edx
        mov eax, dword ptr [esi + 0x74]
        mov dword ptr [edi + 0x4], eax
        add edi, 0x8
        jmp L_006DF23B
    L_006DF238:
        mov edi, dword ptr [ebp + 0x8]
    L_006DF23B:
        cmp dword ptr [esi + 0x54], 0x4
        jne L_006DF248
        mov eax, 0x3
        jmp L_006DF24F
    L_006DF248:
        mov edx, dword ptr [esi]
        mov ecx, esi
        call dword ptr [edx + 0x14]
    L_006DF24F:
        test eax, eax
        jle L_006DF26D
        mov ecx, edi
        add esi, 0x70
        mov edx, eax
    L_006DF25A:
        mov ebx, dword ptr [esi]
        add esi, 0x8
        mov dword ptr [ecx], ebx
        mov ebx, dword ptr [esi - 0x4]
        mov dword ptr [ecx + 0x4], ebx
        add ecx, 0x8
        dec edx
        jne L_006DF25A
    L_006DF26D:
        lea eax, [edi + 8*eax]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0x14
    L_006DF279:
        mov edx, dword ptr [ebp + 0x10]
        mov eax, dword ptr [ebp + 0xc]
    L_006DF27F:
        mov ecx, dword ptr [esi + 0x38]
        mov edi, dword ptr [ebp + 0x8]
        test ecx, ecx
        mov dword ptr [ebp - 0x4], edi
        mov dword ptr [ebp - 0x138], 0x0
        mov dword ptr [ebp - 0x134], 0x0
        mov dword ptr [ebp - 0x130], 0x0
        mov dword ptr [ebp - 0x12c], 0x0
        mov dword ptr [ebp - 0x128], 0x0
        mov dword ptr [ebp - 0x124], 0x0
        mov dword ptr [ebp - 0x120], 0x0
        mov dword ptr [ebp - 0x11c], 0x3ff00000
        je L_006DF2FA
        test bl, bl
        mov ebx, dword ptr [ebp - 0xc]
        push ebx
        push edx
        push eax
        je L_006DF2ED
        call ext_006CE020
        jmp L_006DF2F2
    L_006DF2ED:
        call ext_006CD350
    L_006DF2F2:
        fstp qword ptr [edi]
        add edi, 0x8
        mov dword ptr [ebp + 0x8], edi
    L_006DF2FA:
        mov eax, dword ptr [esi]
        mov ecx, esi
        call dword ptr [eax + 0x14]
        mov ebx, eax
        mov eax, dword ptr [esi + 0x54]
        cmp eax, 0x4
        jne L_006DF361
        mov ecx, dword ptr [esi + 0x58]
        test ecx, ecx
        jne L_006DF361
        lea ecx, [ebp - 0x138]
        xor edi, edi
        test ebx, ebx
        mov dword ptr [ebp - 0x4], ecx
        jle L_006DF3B1
        lea edx, [ebp - 0x138]
        mov dword ptr [ebp + 0x14], edx
    L_006DF32E:
        mov eax, dword ptr [ebp + 0x18]
        mov ecx, dword ptr [ebp - 0xc]
        mov edx, dword ptr [ebp + 0x10]
        push eax
        mov eax, dword ptr [ebp + 0xc]
        push ecx
        mov ecx, dword ptr [ebp + 0x14]
        push edx
        mov edx, dword ptr [esi]
        push eax
        push ecx
        push edi
        mov ecx, esi
        call dword ptr [edx + 0x18]
        mov ecx, eax
        call fn_006DF190
        mov ecx, dword ptr [ebp + 0x14]
        inc edi
        add ecx, 0x8
        cmp edi, ebx
        mov dword ptr [ebp + 0x14], ecx
        jl L_006DF32E
        jmp L_006DF3B1
    L_006DF361:
        cmp eax, 0x2
        je L_006DF399
        xor edi, edi
        test ebx, ebx
        jle L_006DF3B1
    L_006DF36C:
        mov eax, dword ptr [ebp + 0x18]
        mov ecx, dword ptr [ebp - 0xc]
        mov edx, dword ptr [ebp + 0x10]
        push eax
        mov eax, dword ptr [ebp + 0xc]
        push ecx
        mov ecx, dword ptr [ebp + 0x8]
        push edx
        mov edx, dword ptr [esi]
        push eax
        push ecx
        push edi
        mov ecx, esi
        call dword ptr [edx + 0x18]
        mov ecx, eax
        call fn_006DF190
        inc edi
        mov dword ptr [ebp + 0x8], eax
        cmp edi, ebx
        jl L_006DF36C
        jmp L_006DF3B1
    L_006DF399:
        mov eax, dword ptr [ebp + 0x18]
        mov ecx, dword ptr [ebp + 0x14]
        mov edx, dword ptr [ebp + 0x10]
        push eax
        mov eax, dword ptr [ebp + 0xc]
        push ecx
        push edx
        push eax
        push edi
        mov ecx, esi
        call ext_006E0990
    L_006DF3B1:
        mov ecx, dword ptr [esi + 0x40]
        test ecx, ecx
        je L_006DFCB3
        mov edx, dword ptr [ecx]
        call dword ptr [edx + 0x14]
        mov ecx, dword ptr [ebp + 0x10]
        mov edx, dword ptr [ebp + 0xc]
        mov ebx, eax
        mov eax, dword ptr [ebp + 0x18]
        push eax
        push 0x0
        push ecx
        mov ecx, dword ptr [esi + 0x40]
        lea eax, [ebp - 0x80]
        push edx
        push eax
        call fn_006DF190
        mov eax, dword ptr [esi + 0x38]
        test eax, eax
        mov eax, dword ptr [esi + 0x54]
        je L_006DF41B
        test eax, eax
        jl L_006DFCB3
        cmp eax, 0x1
        jle L_006DF40C
        cmp eax, 0x3
        jne L_006DFCB3
        mov edi, dword ptr [ebp - 0x4]
        fld qword ptr [ebp - 0x80]
        fmul qword ptr [edi]
        fstp qword ptr [edi]
        jmp L_006DFCB6
    L_006DF40C:
        mov edi, dword ptr [ebp - 0x4]
        fld qword ptr [ebp - 0x80]
        fadd qword ptr [edi]
        fstp qword ptr [edi]
        jmp L_006DFCB6
    L_006DF41B:
        cmp eax, 0x4
        ja L_006DFCB3
        jmp dword ptr [4*eax + mem_006DFFD0]
    // 006DF42B
        test ebx, ebx
        jle L_006DFCB3
        mov edi, dword ptr [ebp - 0x4]
        lea ecx, [ebp - 0x80]
        sub ecx, edi
        lea eax, [edi + 8*ebx]
    L_006DF43E:
        fld qword ptr [ecx + eax - 0x8]
        fadd qword ptr [eax - 0x8]
        sub eax, 0x8
        dec ebx
        fstp qword ptr [eax]
        jne L_006DF43E
        jmp L_006DFCB6
    // 006DF452
        test ebx, ebx
        jle L_006DFCB3
        mov edi, dword ptr [ebp - 0x4]
        lea ecx, [ebp - 0x80]
        sub ecx, edi
        lea eax, [edi + 8*ebx]
    L_006DF465:
        fld qword ptr [eax + ecx - 0x8]
        fmul qword ptr [eax - 0x8]
        sub eax, 0x8
        dec ebx
        fstp qword ptr [eax]
        jne L_006DF465
        jmp L_006DFCB6
    // 006DF479
        mov ebx, dword ptr [esi + 0x60]
        mov dword ptr [ebp - 0x140], 0x0
        test ebx, ebx
        mov dword ptr [ebp - 0x13c], 0x3ff00000
        mov dword ptr [ebp - 0x168], 0x0
        mov dword ptr [ebp - 0x164], 0x3ff00000
        mov dword ptr [ebp - 0x190], 0x0
        mov dword ptr [ebp - 0x18c], 0x3ff00000
        mov dword ptr [ebp - 0x1b8], 0x0
        mov dword ptr [ebp - 0x1b4], 0x3ff00000
        mov dword ptr [ebp - 0x148], 0x0
        mov dword ptr [ebp - 0x144], 0x0
        mov dword ptr [ebp - 0x150], 0x0
        mov dword ptr [ebp - 0x14c], 0x0
        mov dword ptr [ebp - 0x158], 0x0
        mov dword ptr [ebp - 0x154], 0x0
        mov dword ptr [ebp - 0x160], 0x0
        mov dword ptr [ebp - 0x15c], 0x0
        mov dword ptr [ebp - 0x170], 0x0
        mov dword ptr [ebp - 0x16c], 0x0
        mov dword ptr [ebp - 0x178], 0x0
        mov dword ptr [ebp - 0x174], 0x0
        mov dword ptr [ebp - 0x180], 0x0
        mov dword ptr [ebp - 0x17c], 0x0
        mov dword ptr [ebp - 0x188], 0x0
        mov dword ptr [ebp - 0x184], 0x0
        mov dword ptr [ebp - 0x198], 0x0
        mov dword ptr [ebp - 0x194], 0x0
        mov dword ptr [ebp - 0x1a0], 0x0
        mov dword ptr [ebp - 0x19c], 0x0
        mov dword ptr [ebp - 0x1a8], 0x0
        mov dword ptr [ebp - 0x1a4], 0x0
        mov dword ptr [ebp - 0x1b0], 0x0
        mov dword ptr [ebp - 0x1ac], 0x0
        mov dword ptr [ebp - 0xa0], 0x0
        mov dword ptr [ebp - 0x9c], 0x3ff00000
        mov dword ptr [ebp - 0xc8], 0x0
        mov dword ptr [ebp - 0xc4], 0x3ff00000
        mov dword ptr [ebp - 0xf0], 0x0
        mov dword ptr [ebp - 0xec], 0x3ff00000
        mov dword ptr [ebp - 0x118], 0x0
        mov dword ptr [ebp - 0x114], 0x3ff00000
        mov dword ptr [ebp - 0xa8], 0x0
        mov dword ptr [ebp - 0xa4], 0x0
        mov dword ptr [ebp - 0xb0], 0x0
        mov dword ptr [ebp - 0xac], 0x0
        mov dword ptr [ebp - 0xb8], 0x0
        mov dword ptr [ebp - 0xb4], 0x0
        mov dword ptr [ebp - 0xc0], 0x0
        mov dword ptr [ebp - 0xbc], 0x0
        mov dword ptr [ebp - 0xd0], 0x0
        mov dword ptr [ebp - 0xcc], 0x0
        mov dword ptr [ebp - 0xd8], 0x0
        mov dword ptr [ebp - 0xd4], 0x0
        mov dword ptr [ebp - 0xe0], 0x0
        mov dword ptr [ebp - 0xdc], 0x0
        mov dword ptr [ebp - 0xe8], 0x0
        mov dword ptr [ebp - 0xe4], 0x0
        mov dword ptr [ebp - 0xf8], 0x0
        mov dword ptr [ebp - 0xf4], 0x0
        mov dword ptr [ebp - 0x100], 0x0
        mov dword ptr [ebp - 0xfc], 0x0
        mov dword ptr [ebp - 0x108], 0x0
        mov dword ptr [ebp - 0x104], 0x0
        mov dword ptr [ebp - 0x110], 0x0
        mov dword ptr [ebp - 0x10c], 0x0
        mov dword ptr [ebp - 0x48], 0x0
        mov dword ptr [ebp - 0x44], 0x0
        mov dword ptr [ebp - 0x50], 0x0
        mov dword ptr [ebp - 0x4c], 0x0
        mov dword ptr [ebp - 0x58], 0x0
        mov dword ptr [ebp - 0x54], 0x0
        jne L_006DF755
        lea ecx, [ebp - 0x80]
        lea edx, [ebp - 0x1b8]
        push ecx
        push edx
        call ext_006C4440
        mov edi, dword ptr [ebp - 0x4]
        add esp, 0x8
        lea eax, [ebp - 0x118]
        push edi
        push eax
        call ext_006C4440
        add esp, 0x8
        jmp L_006DF9D0
    L_006DF755:
        cmp ebx, 0xc
        jne L_006DF930
        fld qword ptr [ebp - 0x80]
        fmul qword ptr [mem_00993C98]
        lea eax, [ebp - 0x10]
        mov dword ptr [ebp + 0x14], eax
        fstp qword ptr [ebp - 0x90]
        fld qword ptr [ebp - 0x90]
        fsincos
        mov eax, dword ptr [ebp + 0x14]
        fstp qword ptr [eax]
        fstp qword ptr [ebp - 0x60]
        fld qword ptr [ebp - 0x78]
        fmul qword ptr [mem_00993C98]
        lea ecx, [ebp - 0x18]
        mov dword ptr [ebp + 0x14], ecx
        fstp qword ptr [ebp - 0x98]
        fld qword ptr [ebp - 0x98]
        fsincos
        mov eax, dword ptr [ebp + 0x14]
        fstp qword ptr [eax]
        fstp qword ptr [ebp - 0x90]
        fld qword ptr [ebp - 0x70]
        fmul qword ptr [mem_00993C98]
        lea edx, [ebp - 0x20]
        mov dword ptr [ebp + 0x14], edx
        fstp qword ptr [ebp - 0x88]
        fld qword ptr [ebp - 0x88]
        fsincos
        mov eax, dword ptr [ebp + 0x14]
        fstp qword ptr [eax]
        fstp qword ptr [ebp - 0x98]
        fld qword ptr [ebp - 0x20]
        fmul qword ptr [ebp - 0x18]
        fld qword ptr [ebp - 0x10]
        sub esp, 0x8
        lea eax, [ebp - 0x40]
        fmul st, st(1)
        sub esp, 0x8
        sub esp, 0x8
        fstp qword ptr [esp + 0x10]
        fld qword ptr [ebp - 0x98]
        fmul qword ptr [ebp - 0x10]
        fld qword ptr [ebp - 0x90]
        fmul qword ptr [ebp - 0x60]
        sub esp, 0x8
        fsubp st(1), st
        fstp qword ptr [esp + 0x10]
        fld qword ptr [ebp - 0x98]
        fmul qword ptr [ebp - 0x60]
        fld qword ptr [ebp - 0x90]
        fmul qword ptr [ebp - 0x10]
        faddp st(1), st
        fstp qword ptr [esp + 0x8]
        fld qword ptr [ebp - 0x60]
        fmul st, st(1)
        fstp qword ptr [esp]
        push eax
        fstp st(0)
        call ext_006E0050
        lea ecx, [ebp - 0x40]
        lea edx, [ebp - 0x1b8]
        push ecx
        push edx
        call ext_006D2810
        mov edi, dword ptr [ebp - 0x4]
        lea ecx, [ebp - 0x10]
        add esp, 0x2c
        mov dword ptr [ebp + 0x14], ecx
        fld qword ptr [edi]
        fmul qword ptr [mem_00993C98]
        fstp qword ptr [ebp - 0x88]
        fld qword ptr [ebp - 0x88]
        fsincos
        mov eax, dword ptr [ebp + 0x14]
        fstp qword ptr [eax]
        fstp qword ptr [ebp - 0x60]
        fld qword ptr [edi + 0x8]
        fmul qword ptr [mem_00993C98]
        lea edx, [ebp - 0x20]
        mov dword ptr [ebp + 0x14], edx
        fstp qword ptr [ebp - 0x88]
        fld qword ptr [ebp - 0x88]
        fsincos
        mov eax, dword ptr [ebp + 0x14]
        fstp qword ptr [eax]
        fstp qword ptr [ebp - 0x98]
        fld qword ptr [edi + 0x10]
        fmul qword ptr [mem_00993C98]
        lea eax, [ebp - 0x18]
        mov dword ptr [ebp + 0x14], eax
        fstp qword ptr [ebp - 0x88]
        fld qword ptr [ebp - 0x88]
        fsincos
        mov eax, dword ptr [ebp + 0x14]
        fstp qword ptr [eax]
        fstp qword ptr [ebp - 0x90]
        fld qword ptr [ebp - 0x18]
        fmul qword ptr [ebp - 0x20]
        fld qword ptr [ebp - 0x10]
        sub esp, 0x8
        fmul st, st(1)
        fstp qword ptr [esp]
        fld qword ptr [ebp - 0x90]
        fmul qword ptr [ebp - 0x10]
        fld qword ptr [ebp - 0x98]
        fmul qword ptr [ebp - 0x60]
        sub esp, 0x8
        lea ecx, [ebp - 0x40]
        sub esp, 0x8
        fsubp st(1), st
        sub esp, 0x8
        fstp qword ptr [esp + 0x10]
        fld qword ptr [ebp - 0x90]
        fmul qword ptr [ebp - 0x60]
        fld qword ptr [ebp - 0x98]
        fmul qword ptr [ebp - 0x10]
        faddp st(1), st
        fstp qword ptr [esp + 0x8]
        fld qword ptr [ebp - 0x60]
        fmul st, st(1)
        fstp qword ptr [esp]
        push ecx
        fstp st(0)
        call ext_006E0050
        lea edx, [ebp - 0x40]
        lea eax, [ebp - 0x118]
        push edx
        push eax
        call ext_006D2810
        add esp, 0x2c
        jmp L_006DF9D0
    L_006DF930:
        lea eax, [ebx + 2*ebx]
        push ebx
        shl eax, 0x2
        mov dword ptr [ebp + 0x14], eax
        mov ecx, dword ptr [eax + mem_00996D70]
        mov edx, dword ptr [eax + mem_00996D74]
        mov eax, dword ptr [eax + mem_00996D78]
        fld qword ptr [ebp + 8*ecx - 0x80]
        lea ecx, [ebp - 0x38]
        fstp qword ptr [ebp - 0x38]
        fld qword ptr [ebp + 8*edx - 0x80]
        lea edx, [ebp - 0x1b8]
        push ecx
        fstp qword ptr [ebp - 0x30]
        fld qword ptr [ebp + 8*eax - 0x80]
        push edx
        fstp qword ptr [ebp - 0x28]
        call ext_006E05C0
        add esp, 0xc
        lea ecx, [ebp - 0x38]
        call ext_006E0920
        mov ecx, dword ptr [ebp + 0x14]
        mov edi, dword ptr [ebp - 0x4]
        mov eax, ecx
        push ebx
        mov edx, dword ptr [ecx + mem_00996D70]
        mov ecx, dword ptr [eax + mem_00996D74]
        fld qword ptr [edi + 8*edx]
        mov edx, dword ptr [eax + mem_00996D78]
        fstp qword ptr [ebp - 0x38]
        fld qword ptr [edi + 8*ecx]
        fstp qword ptr [ebp - 0x30]
        fld qword ptr [edi + 8*edx]
        mov edx, dword ptr [ebp - 0x2c]
        fstp qword ptr [ebp - 0x28]
        mov eax, dword ptr [ebp - 0x24]
        mov ecx, dword ptr [ebp - 0x28]
        push eax
        mov eax, dword ptr [ebp - 0x30]
        push ecx
        mov ecx, dword ptr [ebp - 0x34]
        push edx
        mov edx, dword ptr [ebp - 0x38]
        push eax
        push ecx
        lea eax, [ebp - 0x118]
        push edx
        push eax
        call ext_006E0390
        add esp, 0x20
    L_006DF9D0:
        lea ecx, [ebp - 0x1b8]
        lea edx, [ebp - 0x118]
        push ecx
        lea eax, [ebp - 0x1b8]
        push edx
        push eax
        call ext_006C8200
        add esp, 0xc
        test ebx, ebx
        jne L_006DFA09
        lea ecx, [ebp - 0x1b8]
        lea edx, [ebp - 0x58]
        push ecx
        push edx
        call ext_006C4220
        add esp, 0x8
        jmp L_006DFC0B
    L_006DFA09:
        cmp ebx, 0xc
        jne L_006DFBC2
        fld qword ptr [ebp - 0x1b8]
        fcomp qword ptr [mem_00993C90]
        fnstsw ax
        test ah, 0x41
        jne L_006DFB9E
        fld qword ptr [ebp - 0x1b8]
        fadd qword ptr [mem_0092A270]
        sub esp, 0x8
        lea eax, [ebp - 0x40]
        sub esp, 0x8
        fstp qword ptr [esp + 0x8]
        fld qword ptr [ebp - 0x1b0]
        fstp qword ptr [esp]
        fld qword ptr [ebp - 0x1a8]
        fchs
        sub esp, 0x8
        fstp qword ptr [esp]
        push 0x0
        push 0x0
        push eax
        call ext_006E0050
        lea ecx, [ebp - 0x40]
        push ecx
        call ext_006DFFF0
        fdivr qword ptr [mem_0092A270]
        add esp, 0x20
        lea edx, [ebp - 0x40]
        lea eax, [ebp - 0x40]
        fstp qword ptr [esp]
        push edx
        push eax
        call ext_006E00C0
        fld qword ptr [ebp - 0x30]
        fmul qword ptr [ebp - 0x30]
        add esp, 0x10
        fmul qword ptr [ebp - 0x38]
        fmul qword ptr [ebp - 0x38]
        fcom qword ptr [mem_00993C88]
        fnstsw ax
        test ah, 0x41
        jne L_006DFACA
        fld st(0)
        fmul qword ptr [mem_0093F7B0]
        fsubr qword ptr [mem_0092A270]
        fsqrt
        fsubr qword ptr [mem_0092A270]
        fld qword ptr [mem_00993828]
        fdiv st, st(2)
        fmulp st(1), st
        fsqrt
        fstp qword ptr [ebp - 0x18]
        fstp st(0)
        jmp L_006DFADA
    L_006DFACA:
        fstp st(0)
        mov dword ptr [ebp - 0x18], 0x0
        mov dword ptr [ebp - 0x14], 0x3ff00000
    L_006DFADA:
        fld qword ptr [ebp - 0x18]
        fmul qword ptr [ebp - 0x30]
        call ext_006A73BA
        fmul qword ptr [mem_00993C80]
        fstp qword ptr [ebp - 0x48]
        fld qword ptr [ebp - 0x18]
        fmul qword ptr [ebp - 0x38]
        call ext_006A73BA
        fmul qword ptr [mem_00993C80]
        lea ecx, [ebp - 0x1b8]
        lea edx, [ebp - 0x1d8]
        push ecx
        push edx
        fstp qword ptr [ebp - 0x50]
        call ext_006E00F0
        lea eax, [ebp - 0x40]
        lea ecx, [ebp - 0x40]
        push eax
        push ecx
        call ext_006E0090
        lea edx, [ebp - 0x1d8]
        lea eax, [ebp - 0x40]
        push edx
        lea ecx, [ebp - 0x1d8]
        push eax
        push ecx
        call ext_006E0810
        lea edx, [ebp - 0x1d8]
        push edx
        call ext_006DFFF0
        fdivr qword ptr [mem_0092A270]
        add esp, 0x18
        lea eax, [ebp - 0x1d8]
        lea ecx, [ebp - 0x1d8]
        fstp qword ptr [esp]
        push eax
        push ecx
        call ext_006E00C0
        add esp, 0x10
        lea ecx, [ebp - 0x1f8]
        call ext_006E0900
        lea edx, [ebp - 0x1d8]
        lea eax, [ebp - 0x1f8]
        push edx
        push eax
        call ext_006E0940
        fld qword ptr [ebp - 0x1e8]
        fld qword ptr [ebp - 0x1f0]
        fpatan
        add esp, 0x8
        fmul qword ptr [mem_009937F8]
        jmp L_006DFC0E
    L_006DFB9E:
        fld qword ptr [mem_00993C78]
        mov dword ptr [ebp - 0x48], 0x0
        mov dword ptr [ebp - 0x44], 0x40668000
        mov dword ptr [ebp - 0x50], 0x0
        mov dword ptr [ebp - 0x4c], 0x40668000
        jmp L_006DFC0E
    L_006DFBC2:
        lea ecx, [ebp - 0x38]
        call ext_006E0920
        lea ecx, [ebp - 0x1b8]
        push ebx
        lea edx, [ebp - 0x38]
        push ecx
        push edx
        call ext_006E01F0
        fld qword ptr [ebp - 0x38]
        lea eax, [ebx + 2*ebx]
        add esp, 0xc
        shl eax, 0x2
        mov ecx, dword ptr [eax + mem_00996D70]
        mov edx, dword ptr [eax + mem_00996D74]
        mov eax, dword ptr [eax + mem_00996D78]
        fstp qword ptr [ebp + 8*ecx - 0x58]
        fld qword ptr [ebp - 0x30]
        fstp qword ptr [ebp + 8*edx - 0x58]
        fld qword ptr [ebp - 0x28]
        fstp qword ptr [ebp + 8*eax - 0x58]
    L_006DFC0B:
        fld qword ptr [ebp - 0x58]
    L_006DFC0E:
        mov ecx, dword ptr [ebp - 0x50]
        mov eax, dword ptr [ebp - 0x48]
        mov edx, dword ptr [ebp - 0x4c]
        mov dword ptr [edi + 0x8], ecx
        mov ecx, dword ptr [ebp - 0x44]
        mov dword ptr [edi + 0x10], eax
        fstp qword ptr [edi]
        mov dword ptr [edi + 0xc], edx
        mov dword ptr [edi + 0x14], ecx
        jmp L_006DFCB6
    // 006DFC2D
        fld qword ptr [ebp - 0x80]
        fstp qword ptr [ebp - 0x40]
        fld qword ptr [ebp - 0x78]
        fstp qword ptr [ebp - 0x38]
        fld qword ptr [ebp - 0x70]
        mov edi, dword ptr [ebp - 0x4]
        lea edx, [ebp - 0x40]
        fstp qword ptr [ebp - 0x30]
        fld qword ptr [ebp - 0x68]
        fstp qword ptr [ebp - 0x28]
        fld qword ptr [edi]
        fstp qword ptr [ebp - 0x1d8]
        fld qword ptr [edi + 0x8]
        fstp qword ptr [ebp - 0x1d0]
        fld qword ptr [edi + 0x10]
        fstp qword ptr [ebp - 0x1c8]
        fld qword ptr [edi + 0x18]
        lea eax, [ebp - 0x1d8]
        push edx
        lea ecx, [ebp - 0x40]
        push eax
        fstp qword ptr [ebp - 0x1c0]
        push ecx
        call ext_006E0810
        mov edx, dword ptr [ebp - 0x40]
        mov eax, dword ptr [ebp - 0x3c]
        mov ecx, dword ptr [ebp - 0x38]
        mov dword ptr [edi], edx
        mov edx, dword ptr [ebp - 0x34]
        mov dword ptr [edi + 0x4], eax
        mov eax, dword ptr [ebp - 0x30]
        mov dword ptr [edi + 0x8], ecx
        mov ecx, dword ptr [ebp - 0x2c]
        mov dword ptr [edi + 0xc], edx
        mov edx, dword ptr [ebp - 0x28]
        mov dword ptr [edi + 0x10], eax
        mov eax, dword ptr [ebp - 0x24]
        mov dword ptr [edi + 0x18], edx
        add esp, 0xc
        mov dword ptr [edi + 0x14], ecx
        mov dword ptr [edi + 0x1c], eax
        jmp L_006DFCB6
    L_006DFCB3:
        mov edi, dword ptr [ebp - 0x4]
    L_006DFCB6:
        cmp dword ptr [esi + 0x54], 0x4
        jne L_006DFF24
        mov eax, dword ptr [esi + 0x58]
        test eax, eax
        jne L_006DFF24
        mov ecx, dword ptr [edi]
        mov eax, dword ptr [edi + 0x8]
        mov edx, dword ptr [edi + 0x4]
        mov dword ptr [ebp - 0x80], ecx
        mov ecx, dword ptr [edi + 0xc]
        mov dword ptr [ebp - 0x78], eax
        mov eax, dword ptr [edi + 0x14]
        mov dword ptr [ebp - 0x74], ecx
        mov ecx, dword ptr [edi + 0x18]
        mov dword ptr [ebp - 0x7c], edx
        mov edx, dword ptr [edi + 0x10]
        mov dword ptr [ebp - 0x6c], eax
        mov dword ptr [ebp - 0x68], ecx
        lea eax, [ebp - 0x80]
        mov dword ptr [ebp - 0x70], edx
        mov edx, dword ptr [edi + 0x1c]
        lea ecx, [ebp - 0x118]
        push eax
        push ecx
        mov dword ptr [ebp - 0x64], edx
        mov dword ptr [ebp - 0xa0], 0x0
        mov dword ptr [ebp - 0x9c], 0x3ff00000
        mov dword ptr [ebp - 0xc8], 0x0
        mov dword ptr [ebp - 0xc4], 0x3ff00000
        mov dword ptr [ebp - 0xf0], 0x0
        mov dword ptr [ebp - 0xec], 0x3ff00000
        mov dword ptr [ebp - 0x118], 0x0
        mov dword ptr [ebp - 0x114], 0x3ff00000
        mov dword ptr [ebp - 0xa8], 0x0
        mov dword ptr [ebp - 0xa4], 0x0
        mov dword ptr [ebp - 0xb0], 0x0
        mov dword ptr [ebp - 0xac], 0x0
        mov dword ptr [ebp - 0xb8], 0x0
        mov dword ptr [ebp - 0xb4], 0x0
        mov dword ptr [ebp - 0xc0], 0x0
        mov dword ptr [ebp - 0xbc], 0x0
        mov dword ptr [ebp - 0xd0], 0x0
        mov dword ptr [ebp - 0xcc], 0x0
        mov dword ptr [ebp - 0xd8], 0x0
        mov dword ptr [ebp - 0xd4], 0x0
        mov dword ptr [ebp - 0xe0], 0x0
        mov dword ptr [ebp - 0xdc], 0x0
        mov dword ptr [ebp - 0xe8], 0x0
        mov dword ptr [ebp - 0xe4], 0x0
        mov dword ptr [ebp - 0xf8], 0x0
        mov dword ptr [ebp - 0xf4], 0x0
        mov dword ptr [ebp - 0x100], 0x0
        mov dword ptr [ebp - 0xfc], 0x0
        mov dword ptr [ebp - 0x108], 0x0
        mov dword ptr [ebp - 0x104], 0x0
        mov dword ptr [ebp - 0x110], 0x0
        mov dword ptr [ebp - 0x10c], 0x0
        call ext_006D2810
        fld qword ptr [ebp - 0x108]
        fcomp qword ptr [mem_00993800]
        add esp, 0x8
        fnstsw ax
        test ah, 0x1
        jne L_006DFE91
        fld qword ptr [ebp - 0xd0]
        fchs
        fld qword ptr [ebp - 0xd8]
        fchs
        fpatan
        fmul qword ptr [mem_009937F8]
        fstp qword ptr [ebp - 0x58]
        fld qword ptr [mem_00993C70]
    L_006DFE81:
        mov dword ptr [ebp - 0x48], 0x0
        mov dword ptr [ebp - 0x44], 0x0
        jmp L_006DFF02
    L_006DFE91:
        fld qword ptr [ebp - 0x108]
        fcomp qword ptr [mem_009937F0]
        fnstsw ax
        test ah, 0x41
        je L_006DFEC3
        fld qword ptr [ebp - 0xf8]
        fld qword ptr [ebp - 0xf0]
        fpatan
        fmul qword ptr [mem_009937F8]
        fstp qword ptr [ebp - 0x58]
        fld qword ptr [mem_00993C68]
        jmp L_006DFE81
    L_006DFEC3:
        fld qword ptr [ebp - 0xe8]
        fld qword ptr [ebp - 0xc8]
        fpatan
        fmul qword ptr [mem_009937F8]
        fstp qword ptr [ebp - 0x58]
        fld qword ptr [ebp - 0x108]
        call ext_006A73BA
        fmul qword ptr [mem_009937E8]
        fld qword ptr [ebp - 0x110]
        fld qword ptr [ebp - 0x118]
        fpatan
        fmul qword ptr [mem_009937F8]
        fstp qword ptr [ebp - 0x48]
    L_006DFF02:
        mov ebx, dword ptr [ebp + 0x8]
        mov edx, dword ptr [ebp - 0x58]
        mov ecx, dword ptr [ebp - 0x48]
        mov eax, dword ptr [ebp - 0x54]
        fstp qword ptr [ebx + 0x8]
        mov dword ptr [ebx], edx
        mov edx, dword ptr [ebp - 0x44]
        mov dword ptr [ebx + 0x10], ecx
        mov dword ptr [ebx + 0x4], eax
        mov dword ptr [ebx + 0x14], edx
        add ebx, 0x18
        jmp L_006DFF27
    L_006DFF24:
        mov ebx, dword ptr [ebp + 0x8]
    L_006DFF27:
        mov al, byte ptr [ebp + 0x18]
        test al, al
        je L_006DFFC3
        mov eax, dword ptr [esi + 0x58]
        test eax, eax
        jne L_006DFFC3
        mov eax, dword ptr [ebp + 0xc]
        mov ecx, dword ptr [ebp + 0x10]
        mov dword ptr [esi + 0x68], 0x2
        mov dword ptr [esi + 0x90], eax
        mov dword ptr [esi + 0x94], ecx
        mov eax, dword ptr [esi + 0x38]
        test eax, eax
        je L_006DFF68
        mov edx, dword ptr [edi]
        mov dword ptr [esi + 0x70], edx
        mov eax, dword ptr [edi + 0x4]
        mov dword ptr [esi + 0x74], eax
    L_006DFF68:
        cmp dword ptr [esi + 0x54], 0x4
        jne L_006DFFA2
        mov ecx, dword ptr [edi]
        mov dword ptr [esi + 0x70], ecx
        mov edx, dword ptr [edi + 0x4]
        mov dword ptr [esi + 0x74], edx
        mov eax, dword ptr [edi + 0x8]
        mov dword ptr [esi + 0x78], eax
        mov ecx, dword ptr [edi + 0xc]
        mov dword ptr [esi + 0x7c], ecx
        mov edx, dword ptr [edi + 0x10]
        mov dword ptr [esi + 0x80], edx
        mov eax, dword ptr [edi + 0x14]
        mov dword ptr [esi + 0x84], eax
        pop edi
        mov eax, ebx
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0x14
    L_006DFFA2:
        mov edx, dword ptr [esi]
        mov ecx, esi
        call dword ptr [edx + 0x14]
        test eax, eax
        jle L_006DFFC3
        add esi, 0x70
    L_006DFFB0:
        mov ecx, dword ptr [edi]
        add edi, 0x8
        mov dword ptr [esi], ecx
        mov edx, dword ptr [edi - 0x4]
        mov dword ptr [esi + 0x4], edx
        add esi, 0x8
        dec eax
        jne L_006DFFB0
    L_006DFFC3:
        pop edi
        mov eax, ebx
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0x14
    }
}

// [0x006DAE30] sub_006DAE30 (3318 bytes)
extern "C" void ext_006DBB60();
extern "C" void ext_006DBC70();
extern "C" void ext_00872830();
extern "C" void ext_006DBB60();
extern "C" void ext_006DBC70();
extern "C" void ext_00872830();
extern "C" void ext_00872830();
extern "C" __declspec(naked) bool __fastcall fn_006DAE30(void* self, int edx_unused, void* p0, void* p1, void* p2, void* p3, void* p4, void* p5, int sel) {
    __asm {
        mov eax, dword ptr [esp+1Ch]
        sub esp, 14h
        push ebx
        push ebp
        xor ebp, ebp
        push esi
        cmp eax, ebp
        push edi
        mov esi, ecx
        jne L_6DAE48
        call ext_006D98D0
L_6DAE48:
        dec eax
        cmp eax, 0Ch
        ja L_6DBB1A
        jmp dword ptr [eax*4+6DBB28h]
L_6DAE59:
        mov edi, dword ptr [esi]
        mov esi, dword ptr [esi+4]
        cmp esi, ebp
        jg L_6DAE6F
        jl L_6DAE68
        cmp edi, ebp
        jae L_6DAE6F
L_6DAE68:
        mov eax, 1
        jmp L_6DAE71
L_6DAE6F:
        xor eax, eax
L_6DAE71:
        cdq
        neg eax
        adc edx, ebp
        and eax, 0CA591AFFh
        neg edx
        mov ecx, edi
        and edx, 9738h
        sub ecx, eax
        mov eax, esi
        sbb eax, edx
        push 9738h
        push 0CA591B00h
        push eax
        push ecx
        call ext_006A7310
        mov dword ptr [esp+10h], eax
        push 0FFFF68C7h
        cdq
        push 35A6E500h
        push edx
        push eax
        call ext_006A6F00
        add edi, eax
        push 285h
        adc esi, edx
        push 36928D40h
        push esi
        push edi
        call ext_006A7310
        mov dword ptr [esp+14h], eax
        push 0FFFFFD7Ah
        cdq
        push 0C96D72C0h
        push edx
        push eax
        call ext_006A6F00
        add edi, eax
        push 0Ah
        adc esi, edx
        push 0C0E8D7B0h
        push esi
        push edi
        call ext_006A7310
        mov ebx, eax
        push -0Bh
        cdq
        push 3F172850h
        push edx
        push eax
        call ext_006A6F00
        add edi, eax
        push ebp
        adc esi, edx
        push 6E1DCB30h
        push esi
        push edi
        call ext_006A7310
        mov ebp, eax
        push -1
        cdq
        push 91E234D0h
        push edx
        push eax
        call ext_006A6F00
        add edi, eax
        push 0
        adc esi, edx
        push 370EE598h
        push esi
        push edi
        call ext_006A7310
        mov dword ptr [esp+40h], eax
        push 0
        cdq
        push 370EE598h
        push edx
        push eax
        call ext_006A6F00
        sub edi, eax
        push 0
        sbb esi, edx
        push 64h
        push esi
        push edi
        call ext_006A6F00
        push 0
        push 6E1DCB30h
        push edx
        push eax
        call ext_006A7310
        push 0
        push 64h
        push edx
        push eax
        call ext_00872830
        mov ecx, dword ptr [esp+40h]
        lea ecx, [ecx+ecx*4]
        lea ecx, [ecx+ecx*4]
        lea esi, [eax+ecx*2]
        jmp L_6DB078
L_6DAF81:
        mov edi, dword ptr [esi]
        mov esi, dword ptr [esi+4]
        cmp esi, ebp
        mov dword ptr [esp+40h], ebp
        jg L_6DAF9B
        jl L_6DAF94
        cmp edi, ebp
        jae L_6DAF9B
L_6DAF94:
        mov eax, 1
        jmp L_6DAF9D
L_6DAF9B:
        xor eax, eax
L_6DAF9D:
        cdq
        neg eax
        adc edx, ebp
        and eax, 0CA591AFFh
        neg edx
        mov ecx, edi
        and edx, 9738h
        sub ecx, eax
        mov eax, esi
        sbb eax, edx
        push 9738h
        push 0CA591B00h
        push eax
        push ecx
        call ext_006A7310
        mov dword ptr [esp+10h], eax
        push 0FFFF68C7h
        cdq
        push 35A6E500h
        push edx
        push eax
        call ext_006A6F00
        add edi, eax
        push 285h
        adc esi, edx
        push 36928D40h
        push esi
        push edi
        call ext_006A7310
        mov dword ptr [esp+14h], eax
        push 0FFFFFD7Ah
        cdq
        push 0C96D72C0h
        push edx
        push eax
        call ext_006A6F00
        add edi, eax
        push 0Ah
        adc esi, edx
        push 0C0E8D7B0h
        push esi
        push edi
        call ext_006A7310
        mov ebx, eax
        push -0Bh
        cdq
        push 3F172850h
        push edx
        push eax
        call ext_006A6F00
        add edi, eax
        push ebp
        adc esi, edx
        push 370EE598h
        push esi
        push edi
        call ext_006A7310
        mov ebp, eax
        push 0
        cdq
        push 370EE598h
        push edx
        push eax
        call ext_006A6F00
        sub edi, eax
        push 0
        sbb esi, edx
        push 64h
        push esi
        push edi
        call ext_006A6F00
        push 0
        push 370EE598h
L_6DB064:
        push edx
        push eax
        call ext_006A7310
        push 0
        push 64h
        push edx
        push eax
        call ext_00872830
        mov esi, eax
L_6DB078:
        mov eax, dword ptr [esp+10h]
        mov ecx, dword ptr [esp+28h]
        cdq
        mov dword ptr [ecx], eax
        mov eax, dword ptr [esp+14h]
        mov dword ptr [ecx+4], edx
        mov ecx, dword ptr [esp+2Ch]
        cdq
        mov dword ptr [ecx], eax
        mov eax, ebx
        mov dword ptr [ecx+4], edx
        mov ecx, dword ptr [esp+30h]
        cdq
        mov dword ptr [ecx], eax
        mov eax, ebp
        mov dword ptr [ecx+4], edx
        mov ecx, dword ptr [esp+34h]
        cdq
        mov dword ptr [ecx], eax
        mov eax, dword ptr [esp+40h]
        mov dword ptr [ecx+4], edx
        mov ecx, dword ptr [esp+38h]
        cdq
        mov dword ptr [ecx], eax
        mov eax, esi
        mov dword ptr [ecx+4], edx
        mov ecx, dword ptr [esp+3Ch]
        cdq
        pop edi
        pop esi
        mov dword ptr [ecx], eax
        pop ebp
        mov dword ptr [ecx+4], edx
        mov al, 1
        pop ebx
        add esp, 14h
        ret 1Ch
L_6DB0D2:
        mov edi, dword ptr [esi]
        mov esi, dword ptr [esi+4]
        cmp esi, ebp
        mov dword ptr [esp+40h], ebp
        jg L_6DB0EC
        jl L_6DB0E5
        cmp edi, ebp
        jae L_6DB0EC
L_6DB0E5:
        mov eax, 1
        jmp L_6DB0EE
L_6DB0EC:
        xor eax, eax
L_6DB0EE:
        cdq
        neg eax
        adc edx, ebp
        and eax, 0CA591AFFh
        neg edx
        mov ecx, edi
        and edx, 9738h
        sub ecx, eax
        mov eax, esi
        sbb eax, edx
        push 9738h
        push 0CA591B00h
        push eax
        push ecx
        call ext_006A7310
        mov dword ptr [esp+10h], eax
        push 0FFFF68C7h
        cdq
        push 35A6E500h
        push edx
        push eax
        call ext_006A6F00
        add edi, eax
        push 285h
        adc esi, edx
        push 36928D40h
        push esi
        push edi
        call ext_006A7310
        mov dword ptr [esp+14h], eax
        push 0FFFFFD7Ah
        cdq
        push 0C96D72C0h
        push edx
        push eax
        call ext_006A6F00
        add edi, eax
        push 0Ah
        adc esi, edx
        push 0C0E8D7B0h
        push esi
        push edi
        call ext_006A7310
        mov ebx, eax
        push -0Bh
        cdq
        push 3F172850h
        push edx
        push eax
        call ext_006A6F00
        add edi, eax
        push ebp
        adc esi, edx
        push 1B8772CCh
        push esi
        push edi
        call ext_006A7310
        mov ebp, eax
        push 0
        cdq
        push 1B8772CCh
        push edx
        push eax
        call ext_006A6F00
        sub edi, eax
        push 0
        sbb esi, edx
        push 64h
        push esi
        push edi
        call ext_006A6F00
        push 0
        push 1B8772CCh
        jmp L_6DB064
L_6DB1BA:
        mov edi, dword ptr [esi]
        mov esi, dword ptr [esi+4]
        cmp esi, ebp
        jg L_6DB1D0
        jl L_6DB1C9
        cmp edi, ebp
        jae L_6DB1D0
L_6DB1C9:
        mov eax, 1
        jmp L_6DB1D2
L_6DB1D0:
        xor eax, eax
L_6DB1D2:
        cdq
        neg eax
        adc edx, ebp
        and eax, 0CA591AFFh
        neg edx
        mov ecx, edi
        and edx, 9738h
        sub ecx, eax
        mov eax, esi
        sbb eax, edx
        push 9738h
        push 0CA591B00h
        push eax
        push ecx
        call ext_006A7310
        mov dword ptr [esp+10h], eax
        push 0FFFF68C7h
        cdq
        push 35A6E500h
        push edx
        push eax
        call ext_006A6F00
        add edi, eax
        push 285h
        adc esi, edx
        push 36928D40h
        push esi
        push edi
        call ext_006A7310
        mov dword ptr [esp+14h], eax
        push 0FFFFFD7Ah
        cdq
        push 0C96D72C0h
        push edx
        push eax
        call ext_006A6F00
        add edi, eax
        push 0Ah
        adc esi, edx
        push 0C0E8D7B0h
        push esi
        push edi
        call ext_006A7310
        mov ebx, eax
        push -0Bh
        cdq
        push 3F172850h
        push edx
        push eax
        call ext_006A6F00
        add edi, eax
        push ebp
        adc esi, edx
        push 5BC37EA8h
        push esi
        push edi
        call ext_006A7310
        mov ebp, eax
        push -1
        cdq
        push 0A43C8158h
        push edx
        push eax
        call ext_006A6F00
        add edi, eax
        push 0
        adc esi, edx
        push 2DE1BF54h
        push esi
        push edi
        call ext_006A7310
        mov dword ptr [esp+40h], eax
        push 0
        cdq
        push 2DE1BF54h
        push edx
        push eax
        mov dword ptr [esp+2Ch], eax
        mov dword ptr [esp+30h], edx
        call ext_006A6F00
        sub edi, eax
        sbb esi, edx
        push 0
        push 64h
        push esi
        push edi
        call ext_006A6F00
        push 0
        push 5BC37EA8h
        push edx
        push eax
        call ext_006A7310
        mov ecx, dword ptr [esp+20h]
        mov edx, dword ptr [esp+1Ch]
        push 0
        push 32h
        push ecx
        mov esi, eax
        push edx
        jmp L_6DBA60
L_6DB2E2:
        mov edi, dword ptr [esi]
        mov esi, dword ptr [esi+4]
        cmp esi, ebp
        jg L_6DB2F8
        jl L_6DB2F1
        cmp edi, ebp
        jae L_6DB2F8
L_6DB2F1:
        mov eax, 1
        jmp L_6DB2FA
L_6DB2F8:
        xor eax, eax
L_6DB2FA:
        cdq
        neg eax
        adc edx, ebp
        and eax, 13DFAC1Fh
        neg edx
        mov ecx, edi
        and edx, 9712h
        sub ecx, eax
        mov eax, esi
        sbb eax, edx
        push 9712h
        push 13DFAC20h
        push eax
        push ecx
        call ext_006A7310
        mov dword ptr [esp+10h], eax
        push 0FFFF68EDh
        cdq
        push 0EC2053E0h
        push edx
        push eax
        call ext_006A6F00
        add edi, eax
        push 192Dh
        adc esi, edx
        push 0ADFA9CB0h
        push esi
        push edi
        call ext_006A7310
        mov ebx, eax
        push 0FFFFE6D2h
        cdq
        push 52056350h
        push edx
        push eax
        call ext_006A6F00
        add edi, eax
        push 284h
        adc esi, edx
        mov ecx, edi
        sub ecx, 0B786FD50h
        mov edx, esi
        sbb edx, ebp
        push 7F0B8FF0h
        push edx
        push ecx
        call ext_006A7310
        push ebp
        push 0B786FD50h
        push edx
        push eax
        call ext_006A6F00
        add edi, eax
        push 285h
        adc esi, edx
        push 36928D40h
        push esi
        push edi
        call ext_006A7310
        mov ebp, eax
        push 0FFFFFD7Ah
        cdq
        push 0C96D72C0h
        push edx
        push eax
        call ext_006A6F00
        add edi, eax
        lea eax, [ebx+ebx*4]
        adc esi, edx
        push 0Ah
        push 0C0E8D7B0h
        lea ecx, [ebp+eax*2]
        push esi
        push edi
        mov dword ptr [esp+24h], ecx
        call ext_006A7310
        mov ebx, eax
        push -0Bh
        cdq
        push 3F172850h
        push edx
        push eax
        call ext_006A6F00
        add edi, eax
        push 0
        adc esi, edx
        push 5BC37EA8h
        push esi
        push edi
        call ext_006A7310
        mov ebp, eax
        push -1
        cdq
        push 0A43C8158h
        push edx
        push eax
        call ext_006A6F00
        add edi, eax
        push 0
        adc esi, edx
        push 2DE1BF54h
        push esi
        push edi
        call ext_006A7310
        mov dword ptr [esp+40h], eax
        push 0
        cdq
        push 2DE1BF54h
        push edx
        push eax
        mov dword ptr [esp+2Ch], eax
        mov dword ptr [esp+30h], edx
        call ext_006A6F00
        sub edi, eax
        push 0
        sbb esi, edx
        push 64h
        push esi
        push edi
        call ext_006A6F00
        push 0
        push 5BC37EA8h
        jmp L_6DBA49
L_6DB454:
        mov edi, dword ptr [esi]
        mov esi, dword ptr [esi+4]
        cmp esi, ebp
        mov dword ptr [esp+40h], ebp
        jg L_6DB46E
        jl L_6DB467
        cmp edi, ebp
        jae L_6DB46E
L_6DB467:
        mov eax, 1
        jmp L_6DB470
L_6DB46E:
        xor eax, eax
L_6DB470:
        cdq
        neg eax
        adc edx, ebp
        and eax, 0CA591AFFh
        neg edx
        mov ecx, edi
        and edx, 9738h
        sub ecx, eax
        mov eax, esi
        sbb eax, edx
        push 9738h
        push 0CA591B00h
        push eax
        push ecx
        call ext_006A7310
        mov dword ptr [esp+10h], eax
        push 0FFFF68C7h
        cdq
        push 35A6E500h
        push edx
        push eax
        call ext_006A6F00
        add edi, eax
        push 285h
        adc esi, edx
        push 36928D40h
        push esi
        push edi
        call ext_006A7310
        mov dword ptr [esp+14h], eax
        push 0FFFFFD7Ah
        cdq
        push 0C96D72C0h
        push edx
        push eax
        call ext_006A6F00
        add edi, eax
        push 0Ah
        adc esi, edx
        push 0C0E8D7B0h
        push esi
        push edi
        call ext_006A7310
        mov ebx, eax
        push -0Bh
        cdq
        push 3F172850h
        push edx
        push eax
        call ext_006A6F00
        add edi, eax
        push ebp
        adc esi, edx
        push 2DE1BF54h
        push esi
        push edi
        call ext_006A7310
        mov ebp, eax
        push 0
        cdq
        push 2DE1BF54h
        push edx
        push eax
        call ext_006A6F00
        sub edi, eax
        push 0
        sbb esi, edx
        push 64h
        push esi
        push edi
        call ext_006A6F00
        push 0
        push 2DE1BF54h
        jmp L_6DB064
L_6DB53C:
        mov edi, dword ptr [esi]
        mov esi, dword ptr [esi+4]
        cmp esi, ebp
        mov dword ptr [esp+40h], ebp
        jg L_6DB556
        jl L_6DB54F
        cmp edi, ebp
        jae L_6DB556
L_6DB54F:
        mov eax, 1
        jmp L_6DB558
L_6DB556:
        xor eax, eax
L_6DB558:
        cdq
        neg eax
        adc edx, ebp
        and eax, 0CA591AFFh
        neg edx
        mov ecx, edi
        and edx, 9738h
        sub ecx, eax
        mov eax, esi
        sbb eax, edx
        push 9738h
        push 0CA591B00h
        push eax
        push ecx
        call ext_006A7310
        mov dword ptr [esp+10h], eax
        push 0FFFF68C7h
        cdq
        push 35A6E500h
        push edx
        push eax
        call ext_006A6F00
        add edi, eax
        push 285h
        adc esi, edx
        push 36928D40h
        push esi
        push edi
        call ext_006A7310
        mov dword ptr [esp+14h], eax
        push 0FFFFFD7Ah
        cdq
        push 0C96D72C0h
        push edx
        push eax
        call ext_006A6F00
        add edi, eax
        push 0Ah
        adc esi, edx
        push 0C0E8D7B0h
        push esi
        push edi
        call ext_006A7310
        mov ebx, eax
        push -0Bh
        cdq
        push 3F172850h
        push edx
        push eax
        call ext_006A6F00
        add edi, eax
        push ebp
        adc esi, edx
        push 16F0DFAAh
        push esi
        push edi
        call ext_006A7310
        mov ebp, eax
        push 0
        cdq
        push 16F0DFAAh
        push edx
        push eax
        call ext_006A6F00
        sub edi, eax
        push 0
        sbb esi, edx
        push 64h
        push esi
        push edi
        call ext_006A6F00
        push 0
        push 16F0DFAAh
        jmp L_6DB064
L_6DB624:
        mov edi, dword ptr [esi]
        mov esi, dword ptr [esi+4]
        cmp esi, ebp
        mov dword ptr [esp+40h], ebp
        jg L_6DB63E
        jl L_6DB637
        cmp edi, ebp
        jae L_6DB63E
L_6DB637:
        mov eax, 1
        jmp L_6DB640
L_6DB63E:
        xor eax, eax
L_6DB640:
        cdq
        neg eax
        adc edx, ebp
        and eax, 0CA591AFFh
        neg edx
        mov ecx, edi
        and edx, 9738h
        sub ecx, eax
        mov eax, esi
        sbb eax, edx
        push 9738h
        push 0CA591B00h
        push eax
        push ecx
        call ext_006A7310
        mov dword ptr [esp+10h], eax
        push 0FFFF68C7h
        cdq
        push 35A6E500h
        push edx
        push eax
        call ext_006A6F00
        add edi, eax
        push 285h
        adc esi, edx
        push 36928D40h
        push esi
        push edi
        call ext_006A7310
        mov dword ptr [esp+14h], eax
        push 0FFFFFD7Ah
        cdq
        push 0C96D72C0h
        push edx
        push eax
        call ext_006A6F00
        add edi, eax
        push 0Ah
        adc esi, edx
        push 0C0E8D7B0h
        push esi
        push edi
        call ext_006A7310
        mov ebx, eax
        push -0Bh
        cdq
        push 3F172850h
        push edx
        push eax
        call ext_006A6F00
        add edi, eax
        push ebp
        adc esi, edx
        push 2C0BEAEh
        push esi
        push edi
        call ext_006A7310
        mov ebp, eax
        push 0
        cdq
        push 2C0BEAEh
        push edx
        push eax
        call ext_006A6F00
        sub edi, eax
        push 0
        sbb esi, edx
        push 64h
        push esi
        push edi
        call ext_006A6F00
        push 0
        push 2C0BEAEh
        jmp L_6DB064
L_6DB70C:
        mov edi, dword ptr [esi]
        mov esi, dword ptr [esi+4]
        cmp esi, ebp
        mov dword ptr [esp+40h], ebp
        jg L_6DB726
        jl L_6DB71F
        cmp edi, ebp
        jae L_6DB726
L_6DB71F:
        mov eax, 1
        jmp L_6DB728
L_6DB726:
        xor eax, eax
L_6DB728:
        cdq
        neg eax
        adc edx, ebp
        and eax, 0CA591AFFh
        neg edx
        mov ecx, edi
        and edx, 9738h
        sub ecx, eax
        mov eax, esi
        sbb eax, edx
        push 9738h
        push 0CA591B00h
        push eax
        push ecx
        call ext_006A7310
        mov dword ptr [esp+10h], eax
        push 0FFFF68C7h
        cdq
        push 35A6E500h
        push edx
        push eax
        call ext_006A6F00
        add edi, eax
        push 285h
        adc esi, edx
        push 36928D40h
        push esi
        push edi
        call ext_006A7310
        mov dword ptr [esp+14h], eax
        push 0FFFFFD7Ah
        cdq
        push 0C96D72C0h
        push edx
        push eax
        call ext_006A6F00
        add edi, eax
        push 0Ah
        adc esi, edx
        push 0C0E8D7B0h
        push esi
        push edi
        call ext_006A7310
        mov ebx, eax
        push -0Bh
        cdq
        push 3F172850h
        push edx
        push eax
        call ext_006A6F00
        add edi, eax
        push ebp
        adc esi, edx
        push 72B45E52h
        push esi
        push edi
        call ext_006A7310
        mov ebp, eax
        push 0
        cdq
        push 72B45E52h
        push edx
        push eax
        call ext_006A6F00
        sub edi, eax
        push 0
        sbb esi, edx
        push 64h
        push esi
        push edi
        call ext_006A6F00
        push 0
        push 72B45E52h
        jmp L_6DB064
L_6DB7F4:
        mov edi, dword ptr [esi]
        mov esi, dword ptr [esi+4]
        cmp esi, ebp
        mov dword ptr [esp+40h], ebp
        jg L_6DB80E
        jl L_6DB807
        cmp edi, ebp
        jae L_6DB80E
L_6DB807:
        mov eax, 1
        jmp L_6DB810
L_6DB80E:
        xor eax, eax
L_6DB810:
        cdq
        neg eax
        adc edx, ebp
        and eax, 0CA591AFFh
        neg edx
        mov ecx, edi
        and edx, 9738h
        sub ecx, eax
        mov eax, esi
        sbb eax, edx
        push 9738h
        push 0CA591B00h
        push eax
        push ecx
        call ext_006A7310
        mov dword ptr [esp+10h], eax
        push 0FFFF68C7h
        cdq
        push 35A6E500h
        push edx
        push eax
        call ext_006A6F00
        add edi, eax
        push 285h
        adc esi, edx
        push 36928D40h
        push esi
        push edi
        call ext_006A7310
        mov dword ptr [esp+14h], eax
        push 0FFFFFD7Ah
        cdq
        push 0C96D72C0h
        push edx
        push eax
        call ext_006A6F00
        add edi, eax
        push 0Ah
        adc esi, edx
        push 0C0E8D7B0h
        push esi
        push edi
        call ext_006A7310
        mov ebx, eax
        push -0Bh
        cdq
        push 3F172850h
        push edx
        push eax
        call ext_006A6F00
        add edi, eax
        push ebp
        adc esi, edx
        push 395A2F29h
        push esi
        push edi
        call ext_006A7310
        mov ebp, eax
        push 0
        cdq
        push 395A2F29h
        push edx
        push eax
        call ext_006A6F00
        sub edi, eax
        push 0
        sbb esi, edx
        push 64h
        push esi
        push edi
        call ext_006A6F00
        push 0
        push 395A2F29h
        jmp L_6DB064
L_6DB8DC:
        mov edi, dword ptr [esi]
        mov esi, dword ptr [esi+4]
        cmp esi, ebp
        jg L_6DB8F2
        jl L_6DB8EB
        cmp edi, ebp
        jae L_6DB8F2
L_6DB8EB:
        mov eax, 1
        jmp L_6DB8F4
L_6DB8F2:
        xor eax, eax
L_6DB8F4:
        cdq
        neg eax
        adc edx, ebp
        and eax, 0C1B1B617h
        neg edx
        mov ecx, edi
        and edx, 9738h
        sub ecx, eax
        mov eax, esi
        sbb eax, edx
        push 9738h
        push 0C1B1B618h
        push eax
        push ecx
        call ext_006A7310
        mov dword ptr [esp+10h], eax
        push 0FFFF68C7h
        cdq
        push 3E4E49E8h
        push edx
        push eax
        call ext_006A6F00
        add edi, eax
        push 1934h
        adc esi, edx
        push 20484904h
        push esi
        push edi
        call ext_006A7310
        mov ebx, eax
        push 0FFFFE6CBh
        cdq
        push 0DFB7B6FCh
        push edx
        push eax
        call ext_006A6F00
        add edi, eax
        push 285h
        adc esi, edx
        mov ecx, edi
        sub ecx, 0B7B5FA7Ch
        mov edx, esi
        sbb edx, ebp
        push 240EA174h
        push edx
        push ecx
        call ext_006A7310
        push ebp
        push 0B7B5FA7Ch
        push edx
        push eax
        call ext_006A6F00
        add edi, eax
        push 285h
        adc esi, edx
        push 0DBC49BF0h
        push esi
        push edi
        call ext_006A7310
        mov ebp, eax
        push 0FFFFFD7Ah
        cdq
        push 243B6410h
        push edx
        push eax
        call ext_006A6F00
        add edi, eax
        lea eax, [ebx+ebx*4]
        adc esi, edx
        push 0Ah
        push 0C3A9AD44h
        lea ecx, [ebp+eax*2]
        push esi
        push edi
        mov dword ptr [esp+24h], ecx
        call ext_006A7310
        mov ebx, eax
        push -0Bh
        cdq
        push 3C5652BCh
        push edx
        push eax
        call ext_006A6F00
        add edi, eax
        push 0
        adc esi, edx
        push 5BDAFD3Eh
        push esi
        push edi
        call ext_006A7310
        mov ebp, eax
        push -1
        cdq
        push 0A42502C2h
        push edx
        push eax
        call ext_006A6F00
        add edi, eax
        push 0
        adc esi, edx
        push 2DED7E9Fh
        push esi
        push edi
        call ext_006A7310
        mov dword ptr [esp+40h], eax
        push 0
        cdq
        push 2DED7E9Fh
        push edx
        push eax
        mov dword ptr [esp+2Ch], eax
        mov dword ptr [esp+30h], edx
        call ext_006A6F00
        sub edi, eax
        push 0
        sbb esi, edx
        push 64h
        push esi
        push edi
        call ext_006A6F00
        push 0
        push 5BDAFD3Eh
L_6DBA49:
        push edx
        push eax
        call ext_006A7310
        mov edx, dword ptr [esp+20h]
        mov esi, eax
        mov eax, dword ptr [esp+1Ch]
        push 0
        push 32h
        push edx
        push eax
L_6DBA60:
        call ext_006A6F00
        push 0
        push 64h
        push edx
        push eax
        call ext_00872830
        add esi, eax
        jmp L_6DB078
L_6DBA77:
        lea ecx, [esp+40h]
        lea edx, [esp+18h]
        push ecx
        lea eax, [esp+20h]
        push edx
        lea ecx, [esp+1Ch]
        push eax
        mov eax, dword ptr [esi+4]
        lea edx, [esp+1Ch]
        push ecx
        mov ecx, dword ptr [esi]
        push edx
        push eax
        push ecx
        call ext_006DBB60
        add esp, 1Ch
        push ebp
        push 64h
        push edx
        push eax
        call ext_006A6F00
        push ebp
        push 5BDAFD3Eh
        jmp L_6DBAE9
L_6DBAB1:
        lea edx, [esp+40h]
        lea eax, [esp+18h]
        push edx
        lea ecx, [esp+20h]
        push eax
        lea edx, [esp+1Ch]
        push ecx
        mov ecx, dword ptr [esi+4]
        lea eax, [esp+1Ch]
        push edx
        mov edx, dword ptr [esi]
        push eax
        push ecx
        push edx
        call ext_006DBC70
        add esp, 1Ch
        push ebp
        push 64h
        push edx
        push eax
        call ext_006A6F00
        push ebp
        push 72D1C320h
L_6DBAE9:
        push edx
        push eax
        call ext_006A7310
        mov esi, eax
        mov eax, dword ptr [esp+40h]
        cdq
        push ebp
        push 32h
        push edx
        push eax
        call ext_006A6F00
        push ebp
        push 64h
        push edx
        push eax
        call ext_00872830
        mov ebp, dword ptr [esp+18h]
        mov ebx, dword ptr [esp+1Ch]
        add esi, eax
        jmp L_6DB078
L_6DBB1A:
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 14h
        ret 1Ch
    }
}

// [0x006D0D30] sub_006D0D30 (4717 bytes)
extern "C" void ext_006C9C30();
extern "C" void ext_006C9C40();
extern "C" void ext_006C9CD0();
extern "C" void ext_006C9CE0();
extern "C" void ext_006C9D00();
extern "C" void ext_006C9D20();
extern "C" void ext_006C9D30();
extern "C" void ext_006C9DA0();
extern "C" void ext_006C9DC0();
extern "C" void ext_006C9DF0();
extern "C" void ext_006C9E60();
extern "C" void ext_006C9E70();
extern "C" void ext_006C9E80();
extern "C" void ext_006C9F00();
extern "C" void ext_006C9F20();
extern "C" void ext_006C9F80();
extern "C" void ext_006C9FB0();
extern "C" void ext_006C9FE0();
extern "C" void ext_006CA000();
extern "C" void ext_006CA060();
extern "C" void ext_006CA2D0();
extern "C" void ext_006CA2F0();
extern "C" void ext_006CA500();
extern "C" void ext_006CA540();
extern "C" void ext_006CA6A0();
extern "C" void ext_006CA7D0();
extern "C" void ext_006CB190();
extern "C" void ext_006CBBD0();
extern "C" void ext_006CBDB0();
extern "C" void ext_006CBF00();
extern "C" void ext_006CC600();
extern "C" void ext_006CD330();
extern "C" void ext_006D2130();
extern "C" void ext_006D2160();
extern "C" void ext_006D2170();
extern "C" void ext_006DADE0();
extern "C" void ext_006DBE10();
extern "C" void ext_00726770();
extern "C" void ext_00726840();
extern "C" void ext_00726860();
extern "C" void ext_007268D0();
extern "C" void ext_00726940();
extern "C" void ext_00726980();
extern "C" void ext_007269C0();
extern "C" void ext_00726A00();
extern "C" void ext_00726B40();
extern "C" void ext_00726BE0();
extern "C" void ext_00726CB0();
extern "C" void ext_00789BA0();
extern "C" void ext_0079E5B0();

extern "C" int mem_00993858;
extern "C" int mem_00993870;
extern "C" int mem_00993868;
extern "C" int mem_0092a278;
extern "C" int mem_0092a270;
extern "C" int mem_00993828;

// Stack args a1/a2/a3 (ret 0xc). a1 at [esp+4] on entry, a2 byte flag at [esp+8].
extern "C" __declspec(naked) int __fastcall fn_006D0D30(void* self, int edx_unused, void* a1, int a2, int a3) {
    __asm {
a006D0D30: push -1
a006D0D32: push 008b8e68h
a006D0D37: mov eax, dword ptr fs:[0]
a006D0D3D: push eax
a006D0D3E: mov dword ptr fs:[0], esp
a006D0D45: sub esp, 0a0h
a006D0D4B: push ebp
a006D0D4C: push edi
a006D0D4D: mov ebp, ecx
a006D0D4F: push 4
a006D0D51: push 10h
a006D0D53: lea ecx, [esp+68h]
a006D0D57: mov dword ptr [esp+14h], ebp
a006D0D5B: call ext_006D2130
a006D0D60: lea eax, [esp+70h]
a006D0D64: mov dword ptr [esp+74h], eax
a006D0D68: mov ecx, ebp
a006D0D6A: mov dword ptr [esp+0b0h], 0
a006D0D75: call ext_006CA2F0
a006D0D7A: mov edi, dword ptr [esp+0b8h]
a006D0D81: mov ecx, edi
a006D0D83: call ext_00726BE0
a006D0D88: push ecx
a006D0D89: mov ecx, ebp
a006D0D8B: fstp dword ptr [esp]
a006D0D8E: call ext_006CD330
a006D0D93: mov ecx, edi
a006D0D95: call ext_00726840
a006D0D9A: mov al, byte ptr [esp+0bch]
a006D0DA1: test al, al
a006D0DA3: je short a006D0DC0
a006D0DA5: lea ecx, [esp+60h]
a006D0DA9: mov dword ptr [esp+0b0h], -1
a006D0DB4: call ext_006D2160
a006D0DB9: xor eax, eax
a006D0DBB: jmp a006D1F84
a006D0DC0: push ebx
a006D0DC1: push esi
a006D0DC2: push 0
a006D0DC4: push 00aa8e50h
a006D0DC9: mov ecx, edi
a006D0DCB: call ext_00726B40
a006D0DD0: push 0
a006D0DD2: push 00aa8e44h
a006D0DD7: mov ecx, edi
a006D0DD9: mov dword ptr [esp+20h], eax
a006D0DDD: call ext_00726B40
a006D0DE2: mov esi, eax
a006D0DE4: test esi, esi
a006D0DE6: mov dword ptr [esp+28h], esi
a006D0DEA: je a006D17FF
a006D0DF0: mov ecx, ebp
a006D0DF2: call ext_006CA2F0
a006D0DF7: push esi
a006D0DF8: mov ecx, ebp
a006D0DFA: call ext_006CA500
a006D0DFF: push esi
a006D0E00: mov ecx, ebp
a006D0E02: call ext_006CA540
a006D0E07: push esi
a006D0E08: mov ecx, ebp
a006D0E0A: call ext_006CA500
a006D0E0F: push 00aa8e40h
a006D0E14: mov ecx, edi
a006D0E16: call ext_00726770
a006D0E1B: mov ecx, edi
a006D0E1D: call ext_00726980
a006D0E22: xor ebx, ebx
a006D0E24: mov byte ptr [esp+27h], al
a006D0E28: test esi, esi
a006D0E2A: mov byte ptr [esp+33h], 0
a006D0E2F: mov dword ptr [esp+20h], ebx
a006D0E33: jle a006D16C6
a006D0E39: jmp short a006D0E3F
a006D0E3B: mov ebx, dword ptr [esp+20h]
a006D0E3F: push ebx
a006D0E40: mov ecx, ebp
a006D0E42: mov byte ptr [esp+16h], 0
a006D0E47: call ext_006CA060
a006D0E4C: test ebx, ebx
a006D0E4E: mov esi, eax
a006D0E50: jle short a006D0E63
a006D0E52: mov ecx, dword ptr [esp+20h]
a006D0E56: dec ecx
a006D0E57: push ecx
a006D0E58: mov ecx, ebp
a006D0E5A: call ext_006CA060
a006D0E5F: mov ebx, eax
a006D0E61: jmp short a006D0E65
a006D0E63: xor ebx, ebx
a006D0E65: push 0
a006D0E67: mov ecx, esi
a006D0E69: call ext_006C9DA0
a006D0E6E: push 0
a006D0E70: mov ecx, esi
a006D0E72: call ext_006C9F20
a006D0E77: mov al, byte ptr [edi+15h]
a006D0E7A: test al, al
a006D0E7C: je short a006D0ECD
a006D0E7E: mov ecx, edi
a006D0E80: call ext_00726980
a006D0E85: cmp al, byte ptr [esp+27h]
a006D0E89: je short a006D0EAF
a006D0E8B: mov ecx, edi
a006D0E8D: call ext_00726940
a006D0E92: test eax, eax
a006D0E94: jle short a006D0EAF
a006D0E96: lea edx, [esp+44h]
a006D0E9A: mov ecx, edi
a006D0E9C: push edx
a006D0E9D: call ext_00726CB0
a006D0EA2: mov ecx, edi
a006D0EA4: call ext_00726980
a006D0EA9: cmp al, byte ptr [esp+27h]
a006D0EAD: jne short a006D0E8B
a006D0EAF: mov al, byte ptr [edi+15h]
a006D0EB2: test al, al
a006D0EB4: je short a006D0ECD
a006D0EB6: mov ecx, edi
a006D0EB8: call ext_00726980
a006D0EBD: cmp al, byte ptr [esp+27h]
a006D0EC1: je short a006D0ECD
a006D0EC3: or ecx, -1
a006D0EC6: mov eax, 07fffffffh
a006D0ECB: jmp short a006D0EFD
a006D0ECD: lea eax, [esp+88h]
a006D0ED4: mov ecx, edi
a006D0ED6: push eax
a006D0ED7: call ext_00726CB0
a006D0EDC: mov ecx, dword ptr [eax]
a006D0EDE: mov eax, dword ptr [eax+4]
a006D0EE1: cmp eax, 07fffffffh
a006D0EE6: jg short a006D0EFD
a006D0EE8: jl short a006D0EEF
a006D0EEA: cmp ecx, -1
a006D0EED: ja short a006D0EFD
a006D0EEF: cmp eax, 080000000h
a006D0EF4: jg short a006D0F06
a006D0EF6: jl short a006D0EFD
a006D0EF8: cmp ecx, 1
a006D0EFB: jae short a006D0F06
a006D0EFD: mov ebp, dword ptr [esp+14h]
a006D0F01: mov byte ptr [esp+12h], 1
a006D0F06: push eax
a006D0F07: push ecx
a006D0F08: mov ecx, esi
a006D0F0A: call ext_0079E5B0
a006D0F0F: push 03000000h
a006D0F14: push 0
a006D0F16: mov ecx, esi
a006D0F18: call ext_006C9D30
a006D0F1D: push 3eaaaaabh
a006D0F22: push 2
a006D0F24: mov ecx, esi
a006D0F26: call ext_006C9DF0
a006D0F2B: push 3eaaaaabh
a006D0F30: push 3
a006D0F32: mov ecx, esi
a006D0F34: call ext_006C9DF0
a006D0F39: push 0
a006D0F3B: push 4
a006D0F3D: mov ecx, esi
a006D0F3F: call ext_006C9DF0
a006D0F44: push 0
a006D0F46: push 5
a006D0F48: mov ecx, esi
a006D0F4A: call ext_006C9DF0
a006D0F4F: mov al, byte ptr [edi+15h]
a006D0F52: test al, al
a006D0F54: je short a006D0F7B
a006D0F56: mov ecx, edi
a006D0F58: call ext_00726980
a006D0F5D: cmp al, 44h
a006D0F5F: je short a006D0F7B
a006D0F61: mov ecx, edi
a006D0F63: call ext_00726980
a006D0F68: cmp al, 46h
a006D0F6A: je short a006D0F7B
a006D0F6C: mov dword ptr [esp+2ch], 0
a006D0F74: mov byte ptr [esp+12h], 1
a006D0F79: jmp short a006D0F86
a006D0F7B: mov ecx, edi
a006D0F7D: call ext_00726BE0
a006D0F82: fstp dword ptr [esp+2ch]
a006D0F86: mov ecx, dword ptr [esp+2ch]
a006D0F8A: push ecx
a006D0F8B: mov ecx, esi
a006D0F8D: call ext_00789BA0
a006D0F92: mov al, byte ptr [edi+15h]
a006D0F95: test al, al
a006D0F97: je short a006D0FB0
a006D0F99: mov ecx, edi
a006D0F9B: call ext_00726980
a006D0FA0: cmp al, 43h
a006D0FA2: je short a006D0FB0
a006D0FA4: mov byte ptr [esp+13h], 0
a006D0FA9: mov byte ptr [esp+12h], 1
a006D0FAE: jmp short a006D0FBB
a006D0FB0: mov ecx, edi
a006D0FB2: call ext_007269C0
a006D0FB7: mov byte ptr [esp+13h], al
a006D0FBB: movsx eax, byte ptr [esp+13h]
a006D0FC0: add eax, -41h
a006D0FC3: cmp eax, 19h
a006D0FC6: ja a006D107A
a006D0FCC: xor edx, edx
a006D0FCE: mov dl, byte ptr [eax+006D1FB4h]
a006D0FD4: jmp dword ptr [edx*4+006D1FA0h]
a006D0FDB: push 2
a006D0FDD: mov ecx, esi
a006D0FDF: call ext_006C9C40
a006D0FE4: mov ecx, esi
a006D0FE6: call ext_006C9C30
a006D0FEB: cmp eax, 8
a006D0FEE: jne a006D1589
a006D0FF4: mov al, byte ptr [edi+15h]
a006D0FF7: test al, al
a006D0FF9: je a006D1210
a006D0FFF: mov ecx, edi
a006D1001: call ext_00726980
a006D1006: cmp al, 43h
a006D1008: je a006D1210
a006D100E: mov al, 61h
a006D1010: jmp a006D1217
a006D1015: push 4
a006D1017: jmp short a006D0FDD
a006D1019: push 8
a006D101B: jmp short a006D0FDD
a006D101D: push 8
a006D101F: mov ecx, esi
a006D1021: call ext_006C9C40
a006D1026: cmp byte ptr [esp+13h], 54h
a006D102B: jne a006D1084
a006D102D: push 200h
a006D1032: mov ecx, esi
a006D1034: call ext_006C9D00
a006D1039: mov ecx, edi
a006D103B: call ext_00726BE0
a006D1040: push ecx
a006D1041: mov ecx, esi
a006D1043: fstp dword ptr [esp]
a006D1046: push 0
a006D1048: call ext_006C9E70
a006D104D: mov ecx, edi
a006D104F: call ext_00726BE0
a006D1054: push ecx
a006D1055: mov ecx, esi
a006D1057: fstp dword ptr [esp]
a006D105A: push 1
a006D105C: call ext_006C9E70
a006D1061: mov ecx, edi
a006D1063: call ext_00726BE0
a006D1068: push ecx
a006D1069: mov ecx, esi
a006D106B: fstp dword ptr [esp]
a006D106E: push 2
a006D1070: call ext_006C9E70
a006D1075: jmp a006D113B
a006D107A: mov byte ptr [esp+12h], 1
a006D107F: jmp a006D0FE4
a006D1084: mov ecx, edi
a006D1086: call ext_007269C0
a006D108B: movsx eax, al
a006D108E: add eax, -41h
a006D1091: cmp eax, 21h
a006D1094: ja short a006D10FA
a006D1096: xor ecx, ecx
a006D1098: mov cl, byte ptr [eax+006D1FDCh]
a006D109E: jmp dword ptr [ecx*4+006D1FD0h]
a006D10A5: push 100h
a006D10AA: mov ecx, esi
a006D10AC: call ext_006C9D00
a006D10B1: jmp a006D113B
a006D10B6: push 0c00h
a006D10BB: mov ecx, esi
a006D10BD: call ext_006C9D00
a006D10C2: mov ecx, edi
a006D10C4: call ext_00726BE0
a006D10C9: fstp dword ptr [esp+1ch]
a006D10CD: test ebx, ebx
a006D10CF: je short a006D10ED
a006D10D1: mov ecx, ebx
a006D10D3: call ext_006C9CD0
a006D10D8: cmp eax, 200h
a006D10DD: je short a006D10ED
a006D10DF: mov edx, dword ptr [esp+1ch]
a006D10E3: mov ecx, ebx
a006D10E5: push edx
a006D10E6: push 1
a006D10E8: call ext_006C9DF0
a006D10ED: mov ecx, edi
a006D10EF: call ext_00726BE0
a006D10F4: push ecx
a006D10F5: fstp dword ptr [esp]
a006D10F8: jmp short a006D1132
a006D10FA: push 400h
a006D10FF: mov ecx, esi
a006D1101: call ext_006C9D00
a006D1106: mov ecx, edi
a006D1108: call ext_00726BE0
a006D110D: fstp dword ptr [esp+1ch]
a006D1111: mov ebp, dword ptr [esp+1ch]
a006D1115: test ebx, ebx
a006D1117: je short a006D1131
a006D1119: mov ecx, ebx
a006D111B: call ext_006C9CD0
a006D1120: cmp eax, 200h
a006D1125: je short a006D1131
a006D1127: push ebp
a006D1128: push 1
a006D112A: mov ecx, ebx
a006D112C: call ext_006C9DF0
a006D1131: push ebp
a006D1132: push 0
a006D1134: mov ecx, esi
a006D1136: call ext_006C9DF0
a006D113B: mov al, byte ptr [esp+33h]
a006D113F: test al, al
a006D1141: je a006D1645
a006D1147: lea eax, [esp+90h]
a006D114E: mov ecx, ebx
a006D1150: push eax
a006D1151: call ext_006C9F00
a006D1156: lea ecx, [esp+3ch]
a006D115A: push eax
a006D115B: lea edx, [esp+84h]
a006D1162: push ecx
a006D1163: push edx
a006D1164: mov ecx, esi
a006D1166: call ext_006C9F00
a006D116B: mov ecx, eax
a006D116D: call ext_006DBE10
a006D1172: mov ecx, ebx
a006D1174: call ext_006C9E80
a006D1179: fstp dword ptr [esp+1ch]
a006D117D: push 0
a006D117F: mov ecx, ebx
a006D1181: call ext_006C9DC0
a006D1186: fsub dword ptr [esp+1ch]
a006D118A: lea ecx, [esp+3ch]
a006D118E: fmul dword ptr [mem_00993858]
a006D1194: fstp qword ptr [esp+34h]
a006D1198: call ext_006DADE0
a006D119D: fdivr qword ptr [esp+34h]
a006D11A1: mov ecx, ebx
a006D11A3: fstp dword ptr [esp+1ch]
a006D11A7: mov eax, dword ptr [esp+1ch]
a006D11AB: push eax
a006D11AC: push 0
a006D11AE: call ext_006C9DF0
a006D11B3: cmp byte ptr [esp+13h], 42h
a006D11B8: jne short a006D1200
a006D11BA: mov ecx, esi
a006D11BC: call ext_006C9E80
a006D11C1: fstp dword ptr [esp+1ch]
a006D11C5: push 1
a006D11C7: mov ecx, ebx
a006D11C9: call ext_006C9DC0
a006D11CE: fsub dword ptr [esp+1ch]
a006D11D2: lea ecx, [esp+3ch]
a006D11D6: fmul dword ptr [mem_00993870]
a006D11DC: fstp qword ptr [esp+34h]
a006D11E0: call ext_006DADE0
a006D11E5: fdivr qword ptr [esp+34h]
a006D11E9: fstp dword ptr [esp+1ch]
a006D11ED: mov ecx, dword ptr [esp+1ch]
a006D11F1: push ecx
a006D11F2: push 1
a006D11F4: mov ecx, ebx
a006D11F6: call ext_006C9DF0
a006D11FB: jmp a006D1645
a006D1200: push 0
a006D1202: push 1
a006D1204: mov ecx, ebx
a006D1206: call ext_006C9DF0
a006D120B: jmp a006D1645
a006D1210: mov ecx, edi
a006D1212: call ext_007269C0
a006D1217: movsx ecx, al
a006D121A: add ecx, -41h
a006D121D: cmp ecx, 33h
a006D1220: ja a006D1512
a006D1226: xor edx, edx
a006D1228: mov dl, byte ptr [ecx+006D201Ch]
a006D122E: jmp dword ptr [edx*4+006D2000h]
a006D1235: push 100h
a006D123A: mov ecx, esi
a006D123C: call ext_006C9D00
a006D1241: mov ebp, dword ptr [esp+18h]
a006D1245: cmp ebp, 0fa2h
a006D124B: jl short a006D126D
a006D124D: test ebx, ebx
a006D124F: je short a006D126D
a006D1251: push 02000000h
a006D1256: push 0
a006D1258: mov ecx, ebx
a006D125A: call ext_006C9D30
a006D125F: push 3eaaaaabh
a006D1264: push 3
a006D1266: mov ecx, ebx
a006D1268: call ext_006C9DF0
a006D126D: push 0
a006D126F: push 1
a006D1271: mov ecx, esi
a006D1273: call ext_006C9DF0
a006D1278: cmp ebp, 0fa4h
a006D127E: jge short a006D1297
a006D1280: test ebx, ebx
a006D1282: je short a006D1297
a006D1284: mov ecx, ebx
a006D1286: call ext_006C9C30
a006D128B: cmp eax, 4
a006D128E: jne short a006D1297
a006D1290: push 0c2c80000h
a006D1295: jmp short a006D1299
a006D1297: push 0
a006D1299: push 0
a006D129B: mov ecx, esi
a006D129D: call ext_006C9DF0
a006D12A2: cmp ebp, 0fa4h
a006D12A8: jge short a006D12D1
a006D12AA: test ebx, ebx
a006D12AC: je short a006D12D1
a006D12AE: mov ecx, ebx
a006D12B0: call ext_006C9C30
a006D12B5: cmp eax, 8
a006D12B8: jne short a006D12D1
a006D12BA: mov ecx, ebx
a006D12BC: call ext_006C9CD0
a006D12C1: test ah, 4
a006D12C4: je short a006D12D1
a006D12C6: push 0
a006D12C8: push 1
a006D12CA: mov ecx, ebx
a006D12CC: call ext_006C9DF0
a006D12D1: cmp ebp, 0fa0h
a006D12D7: jne a006D1645
a006D12DD: mov ecx, edi
a006D12DF: call ext_00726BE0
a006D12E4: push ecx
a006D12E5: mov ecx, esi
a006D12E7: fstp dword ptr [esp]
a006D12EA: push 1
a006D12EC: call ext_006C9DF0
a006D12F1: jmp a006D1645
a006D12F6: push 100h
a006D12FB: mov ecx, esi
a006D12FD: call ext_006C9D00
a006D1302: mov ecx, edi
a006D1304: call ext_00726BE0
a006D1309: push ecx
a006D130A: mov ecx, esi
a006D130C: fstp dword ptr [esp]
a006D130F: push 1
a006D1311: call ext_006C9DF0
a006D1316: push 0
a006D1318: push 0
a006D131A: mov ecx, esi
a006D131C: call ext_006C9DF0
a006D1321: cmp dword ptr [esp+18h], 0fa2h
a006D1329: jl a006D1645
a006D132F: test ebx, ebx
a006D1331: je short a006D134F
a006D1333: push 02000000h
a006D1338: push 0
a006D133A: mov ecx, ebx
a006D133C: call ext_006C9D30
a006D1341: push 3eaaaaabh
a006D1346: push 3
a006D1348: mov ecx, ebx
a006D134A: call ext_006C9DF0
a006D134F: mov ecx, edi
a006D1351: xor ebp, ebp
a006D1353: call ext_007269C0
a006D1358: movsx eax, al
a006D135B: add eax, -61h
a006D135E: cmp eax, 11h
a006D1361: ja a006D152F
a006D1367: xor ecx, ecx
a006D1369: mov cl, byte ptr [eax+006D2064h]
a006D136F: jmp dword ptr [ecx*4+006D2050h]
a006D1376: xor ebp, ebp
a006D1378: jmp a006D152F
a006D137D: push 200h
a006D1382: mov ecx, esi
a006D1384: call ext_006C9D00
a006D1389: mov ecx, edi
a006D138B: call ext_00726BE0
a006D1390: push ecx
a006D1391: mov ecx, esi
a006D1393: fstp dword ptr [esp]
a006D1396: push 0
a006D1398: call ext_006C9E70
a006D139D: mov ecx, edi
a006D139F: call ext_00726BE0
a006D13A4: push ecx
a006D13A5: mov ecx, esi
a006D13A7: fstp dword ptr [esp]
a006D13AA: push 1
a006D13AC: call ext_006C9E70
a006D13B1: mov ecx, edi
a006D13B3: call ext_00726BE0
a006D13B8: push ecx
a006D13B9: mov ecx, esi
a006D13BB: fstp dword ptr [esp]
a006D13BE: push 2
a006D13C0: call ext_006C9E70
a006D13C5: jmp a006D1645
a006D13CA: cmp al, 53h
a006D13CC: je short a006D13D9
a006D13CE: cmp al, 73h
a006D13D0: je short a006D13D9
a006D13D2: push 0c00h
a006D13D7: jmp short a006D13DE
a006D13D9: push 400h
a006D13DE: mov ecx, esi
a006D13E0: call ext_006C9D00
a006D13E5: mov ecx, edi
a006D13E7: call ext_00726BE0
a006D13EC: push ecx
a006D13ED: mov ecx, esi
a006D13EF: fstp dword ptr [esp]
a006D13F2: push 0
a006D13F4: call ext_006C9DF0
a006D13F9: mov ecx, edi
a006D13FB: call ext_00726BE0
a006D1400: push ecx
a006D1401: mov ecx, esi
a006D1403: fstp dword ptr [esp]
a006D1406: push 1
a006D1408: call ext_006C9DF0
a006D140D: mov ebp, dword ptr [esp+18h]
a006D1411: cmp ebp, 0fa0h
a006D1417: jge short a006D144D
a006D1419: test ebx, ebx
a006D141B: je short a006D144D
a006D141D: mov ecx, ebx
a006D141F: call ext_006C9C30
a006D1424: cmp eax, 8
a006D1427: jne short a006D144D
a006D1429: mov ecx, ebx
a006D142B: call ext_006C9CD0
a006D1430: cmp eax, 100h
a006D1435: jne short a006D144D
a006D1437: push 0
a006D1439: mov ecx, esi
a006D143B: call ext_006C9DC0
a006D1440: push ecx
a006D1441: mov ecx, ebx
a006D1443: fstp dword ptr [esp]
a006D1446: push 1
a006D1448: call ext_006C9DF0
a006D144D: cmp ebp, 0fa2h
a006D1453: jl a006D1645
a006D1459: jmp a006D134F
a006D145E: push 900h
a006D1463: mov ecx, esi
a006D1465: call ext_006C9D00
a006D146A: mov ecx, edi
a006D146C: call ext_00726BE0
a006D1471: push ecx
a006D1472: mov ecx, esi
a006D1474: fstp dword ptr [esp]
a006D1477: push 0
a006D1479: call ext_006C9DF0
a006D147E: mov ecx, edi
a006D1480: call ext_00726BE0
a006D1485: push ecx
a006D1486: mov ecx, esi
a006D1488: fstp dword ptr [esp]
a006D148B: push 1
a006D148D: jmp a006D134A
a006D1492: push 100h
a006D1497: mov ecx, esi
a006D1499: call ext_006C9D00
a006D149E: mov ecx, edi
a006D14A0: call ext_00726BE0
a006D14A5: push ecx
a006D14A6: mov ecx, esi
a006D14A8: fstp dword ptr [esp]
a006D14AB: push 0
a006D14AD: call ext_006C9DF0
a006D14B2: mov ecx, edi
a006D14B4: call ext_00726BE0
a006D14B9: push ecx
a006D14BA: mov ecx, esi
a006D14BC: fstp dword ptr [esp]
a006D14BF: push 1
a006D14C1: call ext_006C9DF0
a006D14C6: test ebx, ebx
a006D14C8: je a006D134F
a006D14CE: mov ebp, dword ptr [esp+20h]
a006D14D2: mov ecx, dword ptr [esp+14h]
a006D14D6: push ebp
a006D14D7: call ext_006CC600
a006D14DC: fstp dword ptr [esp+1ch]
a006D14E0: mov ecx, dword ptr [esp+14h]
a006D14E4: push ebp
a006D14E5: call ext_006CBDB0
a006D14EA: fadd dword ptr [esp+1ch]
a006D14EE: fabs
a006D14F0: fcomp qword ptr [mem_00993868]
a006D14F6: fnstsw ax
a006D14F8: test ah, 41h
a006D14FB: jne a006D134F
a006D1501: push 900h
a006D1506: mov ecx, esi
a006D1508: call ext_006C9D00
a006D150D: jmp a006D134F
a006D1512: mov byte ptr [esp+12h], 1
a006D1517: jmp a006D1645
a006D151C: mov ebp, 01000000h
a006D1521: jmp short a006D152F
a006D1523: mov ebp, 02000000h
a006D1528: jmp short a006D152F
a006D152A: mov ebp, 03000000h
a006D152F: push 03000000h
a006D1534: push ebp
a006D1535: mov ecx, esi
a006D1537: call ext_006C9D30
a006D153C: mov ecx, esi
a006D153E: call ext_006C9D20
a006D1543: test eax, 01000000h
a006D1548: je short a006D155E
a006D154A: mov ecx, edi
a006D154C: call ext_00726BE0
a006D1551: push ecx
a006D1552: mov ecx, esi
a006D1554: fstp dword ptr [esp]
a006D1557: push 2
a006D1559: call ext_006C9DF0
a006D155E: mov ecx, esi
a006D1560: call ext_006C9D20
a006D1565: test eax, 02000000h
a006D156A: je a006D1645
a006D1570: mov ecx, edi
a006D1572: call ext_00726BE0
a006D1577: push ecx
a006D1578: mov ecx, esi
a006D157A: fstp dword ptr [esp]
a006D157D: push 3
a006D157F: call ext_006C9DF0
a006D1584: jmp a006D1645
a006D1589: mov ecx, esi
a006D158B: call ext_006C9C30
a006D1590: cmp eax, 2
a006D1593: jne short a006D1602
a006D1595: cmp dword ptr [esp+18h], 0fa4h
a006D159D: jl short a006D15BC
a006D159F: mov al, byte ptr [edi+15h]
a006D15A2: test al, al
a006D15A4: je short a006D15B1
a006D15A6: mov ecx, edi
a006D15A8: call ext_00726980
a006D15AD: cmp al, 43h
a006D15AF: jne short a006D15BC
a006D15B1: mov ecx, edi
a006D15B3: call ext_007269C0
a006D15B8: cmp al, 6eh
a006D15BA: je short a006D15C0
a006D15BC: push 0
a006D15BE: jmp short a006D15C5
a006D15C0: push 100h
a006D15C5: mov ecx, esi
a006D15C7: call ext_006C9CE0
a006D15CC: cmp dword ptr [esp+18h], 0fa4h
a006D15D4: jge a006D1645
a006D15D6: test ebx, ebx
a006D15D8: je a006D1680
a006D15DE: mov ecx, ebx
a006D15E0: call ext_006C9C30
a006D15E5: cmp eax, 8
a006D15E8: jne a006D1645
a006D15EA: mov ecx, ebx
a006D15EC: call ext_006C9CD0
a006D15F1: test ah, 1
a006D15F4: je a006D1645
a006D15F6: mov edx, dword ptr [esp+20h]
a006D15FA: push 42c80000h
a006D15FF: push edx
a006D1600: jmp short a006D163E
a006D1602: mov ecx, esi
a006D1604: call ext_006C9C30
a006D1609: cmp eax, 4
a006D160C: jne a006D1645
a006D1610: cmp dword ptr [esp+18h], 0fa4h
a006D1616: jge short a006D1645
a006D1618: test ebx, ebx
a006D161A: je a006D1680
a006D161C: mov ecx, ebx
a006D161E: call ext_006C9C30
a006D1623: cmp eax, 8
a006D1626: jne short a006D1645
a006D1628: mov ecx, ebx
a006D162A: call ext_006C9CD0
a006D162F: test ah, 1
a006D1632: je short a006D1645
a006D1634: mov eax, dword ptr [esp+20h]
a006D1638: push 42c80000h
a006D163D: push eax
a006D163E: mov ecx, ebp
a006D1640: call ext_006CBBD0
a006D1645: test ebx, ebx
a006D1647: je short a006D167C
a006D1649: lea ecx, [esp+58h]
a006D164D: push ecx
a006D164E: mov ecx, esi
a006D1650: call ext_006C9F00
a006D1655: lea edx, [esp+60h]
a006D1659: mov ecx, ebx
a006D165B: push edx
a006D165C: mov esi, eax
a006D165E: call ext_006C9F00
a006D1663: mov ecx, dword ptr [eax+4]
a006D1666: mov edx, dword ptr [esi+4]
a006D1669: cmp ecx, edx
a006D166B: jl short a006D167C
a006D166D: jg short a006D1677
a006D166F: mov edx, dword ptr [eax]
a006D1671: mov eax, dword ptr [esi]
a006D1673: cmp edx, eax
a006D1675: jb short a006D167C
a006D1677: mov byte ptr [esp+12h], 1
a006D167C: mov ebp, dword ptr [esp+14h]
a006D1680: mov cl, byte ptr [esp+13h]
a006D1684: mov al, byte ptr [esp+12h]
a006D1688: cmp cl, 42h
a006D168B: sete byte ptr [esp+33h]
a006D1690: test al, al
a006D1692: je short a006D16AF
a006D1694: mov edx, dword ptr [esp+68h]
a006D1698: mov eax, dword ptr [esp+20h]
a006D169C: lea ecx, [esp+1ch]
a006D16A0: mov dword ptr [esp+1ch], eax
a006D16A4: push ecx
a006D16A5: push edx
a006D16A6: lea ecx, [esp+70h]
a006D16AA: call ext_006D2170
a006D16AF: mov eax, dword ptr [esp+20h]
a006D16B3: mov ecx, dword ptr [esp+28h]
a006D16B7: inc eax
a006D16B8: cmp eax, ecx
a006D16BA: mov dword ptr [esp+20h], eax
a006D16BE: jl a006D0E3B
a006D16C4: mov esi, ecx
a006D16C6: mov ecx, edi
a006D16C8: call ext_00726840
a006D16CD: push esi
a006D16CE: mov ecx, ebp
a006D16D0: call ext_006CA540
a006D16D5: push 00aa8e2ch
a006D16DA: mov ecx, edi
a006D16DC: call ext_00726770
a006D16E1: test al, al
a006D16E3: je a006D176A
a006D16E9: mov ecx, edi
a006D16EB: call ext_00726860
a006D16F0: push 30h
a006D16F2: push 00aa8e24h
a006D16F7: mov ecx, edi
a006D16F9: call ext_00726A00
a006D16FE: movsx eax, al
a006D1701: add eax, -43h
a006D1704: cmp eax, 0fh
a006D1707: ja short a006D1734
a006D1709: xor ecx, ecx
a006D170B: mov cl, byte ptr [eax+006D208Ch]
a006D1711: jmp dword ptr [ecx*4+006D2078h]
a006D1718: mov eax, 1
a006D171D: jmp short a006D1736
a006D171F: mov eax, 2
a006D1724: jmp short a006D1736
a006D1726: mov eax, 3
a006D172B: jmp short a006D1736
a006D172D: mov eax, 4
a006D1732: jmp short a006D1736
a006D1734: xor eax, eax
a006D1736: push eax
a006D1737: mov ecx, ebp
a006D1739: call ext_006C9F80
a006D173E: push 0
a006D1740: push 00aa8e18h
a006D1745: mov ecx, edi
a006D1747: call ext_00726B40
a006D174C: cmp eax, -1
a006D174F: jne short a006D1754
a006D1751: push eax
a006D1752: jmp short a006D1755
a006D1754: push eax
a006D1755: mov ecx, ebp
a006D1757: call ext_006C9FB0
a006D175C: mov ecx, edi
a006D175E: call ext_007268D0
a006D1763: mov ecx, edi
a006D1765: call ext_00726840
a006D176A: push 00aa8e04h
a006D176F: mov ecx, edi
a006D1771: call ext_00726770
a006D1776: test al, al
a006D1778: je a006D17FF
a006D177E: mov ecx, edi
a006D1780: call ext_00726860
a006D1785: push 30h
a006D1787: push 00aa8e24h
a006D178C: mov ecx, edi
a006D178E: call ext_00726A00
a006D1793: movsx eax, al
a006D1796: add eax, -43h
a006D1799: cmp eax, 0fh
a006D179C: ja short a006D17C9
a006D179E: xor edx, edx
a006D17A0: mov dl, byte ptr [eax+006D20B0h]
a006D17A6: jmp dword ptr [edx*4+006D209Ch]
a006D17AD: mov eax, 1
a006D17B2: jmp short a006D17CB
a006D17B4: mov eax, 2
a006D17B9: jmp short a006D17CB
a006D17BB: mov eax, 3
a006D17C0: jmp short a006D17CB
a006D17C2: mov eax, 4
a006D17C7: jmp short a006D17CB
a006D17C9: xor eax, eax
a006D17CB: push eax
a006D17CC: mov ecx, ebp
a006D17CE: call ext_006C9FE0
a006D17D3: push 0
a006D17D5: push 00aa8e18h
a006D17DA: mov ecx, edi
a006D17DC: call ext_00726B40
a006D17E1: cmp eax, -1
a006D17E4: jne short a006D17E9
a006D17E6: push eax
a006D17E7: jmp short a006D17EA
a006D17E9: push eax
a006D17EA: mov ecx, ebp
a006D17EC: call ext_006CA000
a006D17F1: mov ecx, edi
a006D17F3: call ext_007268D0
a006D17F8: mov ecx, edi
a006D17FA: call ext_00726840
a006D17FF: mov al, byte ptr [esp+0c8h]
a006D1806: test al, al
a006D1808: je short a006D184E
a006D180A: push 00aa8cech
a006D180F: mov ecx, edi
a006D1811: call ext_00726770
a006D1816: test al, al
a006D1818: je short a006D184E
a006D181A: mov ecx, edi
a006D181C: call ext_00726BE0
a006D1821: fstp dword ptr [esp+4ch]
a006D1825: mov ecx, edi
a006D1827: call ext_00726BE0
a006D182C: fstp dword ptr [esp+50h]
a006D1830: mov ecx, edi
a006D1832: call ext_00726BE0
a006D1837: fstp dword ptr [esp+54h]
a006D183B: lea eax, [esp+4ch]
a006D183F: mov ecx, ebp
a006D1841: push eax
a006D1842: call ext_006CA2D0
a006D1847: mov ecx, edi
a006D1849: call ext_00726840
a006D184E: mov ecx, dword ptr [esp+68h]
a006D1852: lea esi, [ecx-1]
a006D1855: test esi, esi
a006D1857: jl short a006D186B
a006D1859: mov edx, dword ptr [esp+78h]
a006D185D: mov ecx, ebp
a006D185F: mov eax, dword ptr [edx+esi*4]
a006D1862: push eax
a006D1863: call ext_006CA7D0
a006D1868: dec esi
a006D1869: jns short a006D1859
a006D186B: cmp dword ptr [esp+18h], 0fa0h
a006D1873: jge a006D1F6C
a006D1879: mov ecx, dword ptr [esp+14h]
a006D187D: call ext_006CA6A0
a006D1882: test eax, eax
a006D1884: jle a006D1F6C
a006D188A: mov esi, dword ptr [esp+14h]
a006D188E: mov ecx, esi
a006D1890: call ext_006CA6A0
a006D1895: cmp eax, 1
a006D1898: jl short a006D18C1
a006D189A: mov ecx, esi
a006D189C: call ext_006CA6A0
a006D18A1: dec eax
a006D18A2: mov ecx, esi
a006D18A4: push eax
a006D18A5: call ext_006CA060
a006D18AA: mov esi, eax
a006D18AC: push 8
a006D18AE: mov ecx, esi
a006D18B0: call ext_006C9C40
a006D18B5: push 100h
a006D18BA: mov ecx, esi
a006D18BC: call ext_006C9D00
a006D18C1: mov ebx, dword ptr [esp+14h]
a006D18C5: mov ecx, ebx
a006D18C7: call ext_006CA6A0
a006D18CC: dec eax
a006D18CD: mov ecx, ebx
a006D18CF: push eax
a006D18D0: call ext_006CA060
a006D18D5: mov ecx, ebx
a006D18D7: mov edi, eax
a006D18D9: xor esi, esi
a006D18DB: call ext_006CA6A0
a006D18E0: mov ebx, eax
a006D18E2: dec ebx
a006D18E3: js a006D1B9D
a006D18E9: lea ecx, [ebx+1]
a006D18EC: mov dword ptr [esp+18h], ecx
a006D18F0: mov ebp, esi
a006D18F2: mov esi, edi
a006D18F4: test ebx, ebx
a006D18F6: jle short a006D1960
a006D18F8: mov edx, dword ptr [esp+18h]
a006D18FC: mov ecx, dword ptr [esp+14h]
a006D1900: add edx, -2
a006D1903: push edx
a006D1904: call ext_006CA060
a006D1909: mov edi, eax
a006D190B: test edi, edi
a006D190D: je a006D1B8B
a006D1913: mov ecx, esi
a006D1915: call ext_006C9C30
a006D191A: cmp eax, 8
a006D191D: jne short a006D1967
a006D191F: mov ecx, esi
a006D1921: call ext_006C9CD0
a006D1926: cmp eax, 400h
a006D192B: jne short a006D1967
a006D192D: mov ecx, edi
a006D192F: call ext_006C9C30
a006D1934: cmp eax, 8
a006D1937: jne a006D1B8B
a006D193D: mov ecx, edi
a006D193F: call ext_006C9CD0
a006D1944: cmp eax, 200h
a006D1949: jne a006D1B8B
a006D194F: push 0c00h
a006D1954: mov ecx, esi
a006D1956: call ext_006C9D00
a006D195B: jmp a006D1B8B
a006D1960: xor edi, edi
a006D1962: jmp a006D1B8B
a006D1967: mov ecx, esi
a006D1969: call ext_006C9C30
a006D196E: cmp eax, 4
a006D1971: jne short a006D19CC
a006D1973: mov ecx, edi
a006D1975: call ext_006C9C30
a006D197A: cmp eax, 8
a006D197D: jne a006D1B8B
a006D1983: mov ecx, edi
a006D1985: call ext_006C9CD0
a006D198A: cmp eax, 200h
a006D198F: jne a006D1B8B
a006D1995: mov ecx, dword ptr [esp+14h]
a006D1999: push ebx
a006D199A: call ext_006CBF00
a006D199F: fstp dword ptr [esp+28h]
a006D19A3: push 8
a006D19A5: mov ecx, esi
a006D19A7: call ext_006C9C40
a006D19AC: push 0c00h
a006D19B1: mov ecx, esi
a006D19B3: call ext_006C9D00
a006D19B8: mov ebp, dword ptr [esp+28h]
a006D19BC: mov ecx, esi
a006D19BE: push ebp
a006D19BF: push 0
a006D19C1: call ext_006C9DF0
a006D19C6: push ebp
a006D19C7: jmp a006D1B82
a006D19CC: mov ecx, esi
a006D19CE: call ext_006C9C30
a006D19D3: cmp eax, 8
a006D19D6: jne a006D1B8B
a006D19DC: mov ecx, esi
a006D19DE: call ext_006C9CD0
a006D19E3: cmp eax, 100h
a006D19E8: jne a006D1B8B
a006D19EE: mov ecx, dword ptr [esp+14h]
a006D19F2: call ext_006CA6A0
a006D19F7: dec eax
a006D19F8: cmp ebx, eax
a006D19FA: jge short a006D1A0C
a006D19FC: mov eax, dword ptr [esp+18h]
a006D1A00: mov ecx, dword ptr [esp+14h]
a006D1A04: push eax
a006D1A05: call ext_006CBF00
a006D1A0A: jmp short a006D1A12
a006D1A0C: fld qword ptr [mem_0092a278]
a006D1A12: mov ecx, dword ptr [esp+14h]
a006D1A16: fstp dword ptr [esp+20h]
a006D1A1A: call ext_006CA6A0
a006D1A1F: mov ecx, dword ptr [esp+18h]
a006D1A23: dec eax
a006D1A24: cmp ecx, eax
a006D1A26: jne short a006D1A79
a006D1A28: mov ecx, ebp
a006D1A2A: call ext_006C9E80
a006D1A2F: fstp dword ptr [esp+28h]
a006D1A33: mov ecx, esi
a006D1A35: call ext_006C9E80
a006D1A3A: fsubr dword ptr [esp+28h]
a006D1A3E: lea ecx, [esp+60h]
a006D1A42: push ecx
a006D1A43: mov ecx, esi
a006D1A45: fstp qword ptr [esp+40h]
a006D1A49: call ext_006C9F00
a006D1A4E: push eax
a006D1A4F: lea edx, [esp+5ch]
a006D1A53: lea eax, [esp+84h]
a006D1A5A: push edx
a006D1A5B: push eax
a006D1A5C: mov ecx, ebp
a006D1A5E: call ext_006C9F00
a006D1A63: mov ecx, eax
a006D1A65: call ext_006DBE10
a006D1A6A: mov ecx, eax
a006D1A6C: call ext_006DADE0
a006D1A71: fdivr qword ptr [esp+3ch]
a006D1A75: fstp dword ptr [esp+20h]
a006D1A79: mov ecx, edi
a006D1A7B: call ext_006C9C30
a006D1A80: cmp eax, 8
a006D1A83: jne short a006D1ABF
a006D1A85: mov ecx, edi
a006D1A87: call ext_006C9CD0
a006D1A8C: cmp eax, 400h
a006D1A91: je short a006D1AA1
a006D1A93: mov ecx, edi
a006D1A95: call ext_006C9CD0
a006D1A9A: cmp eax, 0c00h
a006D1A9F: jne short a006D1ABF
a006D1AA1: push 400h
a006D1AA6: mov ecx, esi
a006D1AA8: call ext_006C9D00
a006D1AAD: push 1
a006D1AAF: mov ecx, edi
a006D1AB1: call ext_006C9DC0
a006D1AB6: push ecx
a006D1AB7: fstp dword ptr [esp]
a006D1ABA: jmp a006D1B74
a006D1ABF: mov ecx, edi
a006D1AC1: call ext_006C9C30
a006D1AC6: cmp eax, 8
a006D1AC9: jne a006D1B5A
a006D1ACF: mov ecx, edi
a006D1AD1: call ext_006C9CD0
a006D1AD6: cmp eax, 200h
a006D1ADB: jne a006D1B5A
a006D1ADD: push eax
a006D1ADE: mov ecx, esi
a006D1AE0: call ext_006C9D00
a006D1AE5: push 0
a006D1AE7: mov ecx, edi
a006D1AE9: call ext_006C9E60
a006D1AEE: push ecx
a006D1AEF: mov ecx, esi
a006D1AF1: fstp dword ptr [esp]
a006D1AF4: push 0
a006D1AF6: call ext_006C9E70
a006D1AFB: push 1
a006D1AFD: mov ecx, edi
a006D1AFF: call ext_006C9E60
a006D1B04: push ecx
a006D1B05: mov ecx, esi
a006D1B07: fstp dword ptr [esp]
a006D1B0A: push 1
a006D1B0C: call ext_006C9E70
a006D1B11: push 2
a006D1B13: mov ecx, edi
a006D1B15: call ext_006C9E60
a006D1B1A: push ecx
a006D1B1B: mov ecx, esi
a006D1B1D: fstp dword ptr [esp]
a006D1B20: push 2
a006D1B22: call ext_006C9E70
a006D1B27: test ebp, ebp
a006D1B29: je short a006D1B8B
a006D1B2B: mov ecx, dword ptr [esp+14h]
a006D1B2F: push ebx
a006D1B30: call ext_006CB190
a006D1B35: fstp dword ptr [esp+28h]
a006D1B39: push 400h
a006D1B3E: mov ecx, esi
a006D1B40: call ext_006C9D00
a006D1B45: mov edx, dword ptr [esp+28h]
a006D1B49: mov ecx, esi
a006D1B4B: push edx
a006D1B4C: push 0
a006D1B4E: call ext_006C9DF0
a006D1B53: mov eax, dword ptr [esp+20h]
a006D1B57: push eax
a006D1B58: jmp short a006D1B82
a006D1B5A: mov ecx, edi
a006D1B5C: call ext_006C9C30
a006D1B61: cmp eax, 2
a006D1B64: jne short a006D1B8B
a006D1B66: push 400h
a006D1B6B: mov ecx, esi
a006D1B6D: call ext_006C9D00
a006D1B72: push 0
a006D1B74: push 0
a006D1B76: mov ecx, esi
a006D1B78: call ext_006C9DF0
a006D1B7D: mov ecx, dword ptr [esp+20h]
a006D1B81: push ecx
a006D1B82: push 1
a006D1B84: mov ecx, esi
a006D1B86: call ext_006C9DF0
a006D1B8B: mov ecx, dword ptr [esp+18h]
a006D1B8F: dec ebx
a006D1B90: dec ecx
a006D1B91: test ebx, ebx
a006D1B93: mov dword ptr [esp+18h], ecx
a006D1B97: jge a006D18F0
a006D1B9D: mov ebx, dword ptr [esp+14h]
a006D1BA1: push 0
a006D1BA3: mov ecx, ebx
a006D1BA5: call ext_006CA060
a006D1BAA: mov ecx, ebx
a006D1BAC: mov ebp, eax
a006D1BAE: call ext_006CA6A0
a006D1BB3: test eax, eax
a006D1BB5: jle a006D1C69
a006D1BBB: mov edi, 1
a006D1BC0: mov ecx, ebx
a006D1BC2: mov esi, ebp
a006D1BC4: call ext_006CA6A0
a006D1BC9: cmp edi, eax
a006D1BCB: jge a006D1C98
a006D1BD1: push edi
a006D1BD2: mov ecx, ebx
a006D1BD4: call ext_006CA060
a006D1BD9: mov ebp, eax
a006D1BDB: test ebp, ebp
a006D1BDD: je short a006D1C56
a006D1BDF: mov ecx, esi
a006D1BE1: call ext_006C9C30
a006D1BE6: cmp eax, 8
a006D1BE9: jne short a006D1C56
a006D1BEB: mov ecx, esi
a006D1BED: call ext_006C9CD0
a006D1BF2: cmp eax, 100h
a006D1BF7: jne short a006D1C56
a006D1BF9: mov ecx, ebp
a006D1BFB: call ext_006C9C30
a006D1C00: cmp eax, 8
a006D1C03: jne short a006D1C13
a006D1C05: mov ecx, ebp
a006D1C07: call ext_006C9CD0
a006D1C0C: cmp eax, 100h
a006D1C11: je short a006D1C56
a006D1C13: lea edx, [edi-1]
a006D1C16: mov ecx, ebx
a006D1C18: push edx
a006D1C19: call ext_006CBF00
a006D1C1E: fstp dword ptr [esp+28h]
a006D1C22: push edi
a006D1C23: mov ecx, ebx
a006D1C25: call ext_006CBF00
a006D1C2A: fstp dword ptr [esp+2ch]
a006D1C2E: push 400h
a006D1C33: mov ecx, esi
a006D1C35: call ext_006C9D00
a006D1C3A: mov eax, dword ptr [esp+28h]
a006D1C3E: mov ecx, esi
a006D1C40: push eax
a006D1C41: push 0
a006D1C43: call ext_006C9DF0
a006D1C48: mov ecx, dword ptr [esp+2ch]
a006D1C4C: push ecx
a006D1C4D: push 1
a006D1C4F: mov ecx, esi
a006D1C51: call ext_006C9DF0
a006D1C56: mov ecx, ebx
a006D1C58: inc edi
a006D1C59: call ext_006CA6A0
a006D1C5E: lea edx, [edi-1]
a006D1C61: cmp edx, eax
a006D1C63: jl a006D1BC0
a006D1C69: mov ecx, ebx
a006D1C6B: call ext_006CA6A0
a006D1C70: dec eax
a006D1C71: mov ecx, ebx
a006D1C73: push eax
a006D1C74: call ext_006CA060
a006D1C79: mov ecx, ebx
a006D1C7B: mov edi, eax
a006D1C7D: xor esi, esi
a006D1C7F: call ext_006CA6A0
a006D1C84: dec eax
a006D1C85: mov dword ptr [esp+14h], eax
a006D1C89: js a006D1F6C
a006D1C8F: lea ecx, [eax+2]
a006D1C92: mov dword ptr [esp+20h], ecx
a006D1C96: jmp short a006D1CA4
a006D1C98: xor ebp, ebp
a006D1C9A: jmp short a006D1C56
a006D1C9C: mov eax, dword ptr [esp+14h]
a006D1CA0: mov edi, dword ptr [esp+18h]
a006D1CA4: mov ebp, esi
a006D1CA6: mov esi, edi
a006D1CA8: test eax, eax
a006D1CAA: jle a006D1EA3
a006D1CB0: mov edx, dword ptr [esp+20h]
a006D1CB4: mov ecx, ebx
a006D1CB6: lea edi, [edx-1]
a006D1CB9: lea eax, [edi-2]
a006D1CBC: push eax
a006D1CBD: call ext_006CA060
a006D1CC2: test eax, eax
a006D1CC4: mov dword ptr [esp+18h], eax
a006D1CC8: je a006D1F52
a006D1CCE: mov ecx, esi
a006D1CD0: call ext_006C9C30
a006D1CD5: cmp eax, 8
a006D1CD8: jne a006D1F52
a006D1CDE: mov ecx, esi
a006D1CE0: call ext_006C9CD0
a006D1CE5: cmp eax, 200h
a006D1CEA: jne a006D1F52
a006D1CF0: mov ecx, dword ptr [esp+18h]
a006D1CF4: call ext_006C9C30
a006D1CF9: cmp eax, 8
a006D1CFC: jne a006D1F52
a006D1D02: mov ecx, dword ptr [esp+18h]
a006D1D06: call ext_006C9CD0
a006D1D0B: cmp eax, 400h
a006D1D10: je short a006D1D26
a006D1D12: mov ecx, dword ptr [esp+18h]
a006D1D16: call ext_006C9CD0
a006D1D1B: cmp eax, 0c00h
a006D1D20: jne a006D1F52
a006D1D26: mov ecx, dword ptr [esp+14h]
a006D1D2A: push ecx
a006D1D2B: mov ecx, ebx
a006D1D2D: call ext_006CBF00
a006D1D32: fstp dword ptr [esp+3ch]
a006D1D36: push edi
a006D1D37: mov ecx, ebx
a006D1D39: call ext_006CB190
a006D1D3E: fstp dword ptr [esp+2ch]
a006D1D42: test ebp, ebp
a006D1D44: je a006D1F2A
a006D1D4A: mov ecx, ebp
a006D1D4C: call ext_006C9C30
a006D1D51: cmp eax, 8
a006D1D54: jne short a006D1D68
a006D1D56: mov ecx, ebp
a006D1D58: call ext_006C9CD0
a006D1D5D: cmp eax, 200h
a006D1D62: je a006D1F2A
a006D1D68: mov ecx, ebx
a006D1D6A: xor edi, edi
a006D1D6C: call ext_006CA6A0
a006D1D71: mov ecx, dword ptr [esp+20h]
a006D1D75: cmp ecx, eax
a006D1D77: jge short a006D1D85
a006D1D79: mov edx, ecx
a006D1D7B: mov ecx, ebx
a006D1D7D: push edx
a006D1D7E: call ext_006CA060
a006D1D83: mov edi, eax
a006D1D85: push 0
a006D1D87: mov ecx, esi
a006D1D89: call ext_006C9E60
a006D1D8E: fstp dword ptr [esp+28h]
a006D1D92: push 1
a006D1D94: mov ecx, esi
a006D1D96: call ext_006C9E60
a006D1D9B: fstp dword ptr [esp+2ch]
a006D1D9F: push 2
a006D1DA1: mov ecx, esi
a006D1DA3: call ext_006C9E60
a006D1DA8: fstp dword ptr [esp+1ch]
a006D1DAC: test edi, edi
a006D1DAE: je a006D1EB0
a006D1DB4: mov ecx, edi
a006D1DB6: call ext_006C9E80
a006D1DBB: fstp dword ptr [esp+44h]
a006D1DBF: mov ecx, ebp
a006D1DC1: call ext_006C9E80
a006D1DC6: fsubr dword ptr [esp+44h]
a006D1DCA: fld dword ptr [esp+2ch]
a006D1DCE: fadd qword ptr [mem_0092a270]
a006D1DD4: lea eax, [esp+60h]
a006D1DD8: mov ecx, ebp
a006D1DDA: fmulp st(1), st
a006D1DDC: fld dword ptr [esp+1ch]
a006D1DE0: fsubr qword ptr [mem_0092a270]
a006D1DE6: push eax
a006D1DE7: fmulp st(1), st
a006D1DE9: fstp qword ptr [esp+38h]
a006D1DED: call ext_006C9F00
a006D1DF2: lea ecx, [esp+58h]
a006D1DF6: push eax
a006D1DF7: lea edx, [esp+84h]
a006D1DFE: push ecx
a006D1DFF: push edx
a006D1E00: mov ecx, edi
a006D1E02: call ext_006C9F00
a006D1E07: mov ecx, eax
a006D1E09: call ext_006DBE10
a006D1E0E: mov ecx, eax
a006D1E10: call ext_006DADE0
a006D1E15: fdivr qword ptr [esp+34h]
a006D1E19: mov ecx, ebp
a006D1E1B: fstp dword ptr [esp+34h]
a006D1E1F: call ext_006C9E80
a006D1E24: fstp dword ptr [esp+44h]
a006D1E28: mov ecx, esi
a006D1E2A: call ext_006C9E80
a006D1E2F: fsubr dword ptr [esp+44h]
a006D1E33: fld dword ptr [esp+1ch]
a006D1E37: fadd qword ptr [mem_0092a270]
a006D1E3D: lea eax, [esp+90h]
a006D1E44: mov ecx, esi
a006D1E46: fmulp st(1), st
a006D1E48: fld dword ptr [esp+2ch]
a006D1E4C: fsubr qword ptr [mem_0092a270]
a006D1E52: push eax
a006D1E53: fmulp st(1), st
a006D1E55: fstp qword ptr [esp+48h]
a006D1E59: call ext_006C9F00
a006D1E5E: lea ecx, [esp+88h]
a006D1E65: push eax
a006D1E66: lea edx, [esp+9ch]
a006D1E6D: push ecx
a006D1E6E: push edx
a006D1E6F: mov ecx, ebp
a006D1E71: call ext_006C9F00
a006D1E76: mov ecx, eax
a006D1E78: call ext_006DBE10
a006D1E7D: mov ecx, eax
a006D1E7F: call ext_006DADE0
a006D1E84: fdivr qword ptr [esp+44h]
a006D1E88: fadd dword ptr [esp+34h]
a006D1E8C: fld dword ptr [esp+28h]
a006D1E90: fsubr qword ptr [mem_0092a270]
a006D1E96: fmulp st(1), st
a006D1E98: fmul qword ptr [mem_00993828]
a006D1E9E: jmp a006D1F26
a006D1EA3: mov dword ptr [esp+18h], 0
a006D1EAB: jmp a006D1F52
a006D1EB0: mov ecx, ebp
a006D1EB2: call ext_006C9E80
a006D1EB7: fstp dword ptr [esp+34h]
a006D1EBB: mov ecx, esi
a006D1EBD: call ext_006C9E80
a006D1EC2: fsubr dword ptr [esp+34h]
a006D1EC6: fld dword ptr [esp+1ch]
a006D1ECA: fadd qword ptr [mem_0092a270]
a006D1ED0: lea eax, [esp+0a0h]
a006D1ED7: mov ecx, esi
a006D1ED9: fmulp st(1), st
a006D1EDB: fld dword ptr [esp+2ch]
a006D1EDF: fsubr qword ptr [mem_0092a270]
a006D1EE5: push eax
a006D1EE6: fmulp st(1), st
a006D1EE8: fstp qword ptr [esp+38h]
a006D1EEC: call ext_006C9F00
a006D1EF1: lea ecx, [esp+0a8h]
a006D1EF8: push eax
a006D1EF9: lea edx, [esp+50h]
a006D1EFD: push ecx
a006D1EFE: push edx
a006D1EFF: mov ecx, ebp
a006D1F01: call ext_006C9F00
a006D1F06: mov ecx, eax
a006D1F08: call ext_006DBE10
a006D1F0D: mov ecx, eax
a006D1F0F: call ext_006DADE0
a006D1F14: fdivr qword ptr [esp+34h]
a006D1F18: fld dword ptr [esp+28h]
a006D1F1C: fsubr qword ptr [mem_0092a270]
a006D1F22: fxch st(1)
a006D1F24: fmulp st(1), st
a006D1F26: fstp dword ptr [esp+2ch]
a006D1F2A: push 0c00h
a006D1F2F: mov ecx, esi
a006D1F31: call ext_006C9D00
a006D1F36: mov eax, dword ptr [esp+3ch]
a006D1F3A: mov ecx, esi
a006D1F3C: push eax
a006D1F3D: push 0
a006D1F3F: call ext_006C9DF0
a006D1F44: mov ecx, dword ptr [esp+2ch]
a006D1F48: push ecx
a006D1F49: push 1
a006D1F4B: mov ecx, esi
a006D1F4D: call ext_006C9DF0
a006D1F52: mov eax, dword ptr [esp+14h]
a006D1F56: mov edx, dword ptr [esp+20h]
a006D1F5A: dec eax
a006D1F5B: dec edx
a006D1F5C: test eax, eax
a006D1F5E: mov dword ptr [esp+14h], eax
a006D1F62: mov dword ptr [esp+20h], edx
a006D1F66: jge a006D1C9C
a006D1F6C: lea ecx, [esp+68h]
a006D1F70: mov dword ptr [esp+0b8h], -1
a006D1F7B: call ext_006D2160
a006D1F80: pop esi
a006D1F81: xor eax, eax
a006D1F83: pop ebx
a006D1F84: mov ecx, dword ptr [esp+0a8h]
a006D1F8B: pop edi
a006D1F8C: pop ebp
a006D1F8D: mov dword ptr fs:[0], ecx
a006D1F94: add esp, 0ach
a006D1F9A: ret 0ch
    }
}
