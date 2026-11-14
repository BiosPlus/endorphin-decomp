// Decompiled translation unit: src/leaf/decompiled_6D0000.cpp

#include <math.h>
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

// [0x006DBE10] sub_006DBE10 (32 bytes)
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

// [0x006DEF20] sub_006DEF20 (15 bytes)
extern "C" void __stdcall ext_006DEED0(int a, int b);

extern "C" void __stdcall fn_006DEF20(int a1) {
    ext_006DEED0(a1, 1);
}

// [0x006DAE00] sub_006DAE00 (47 bytes)
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

// [0x006D9790] sub_006D9790 (48 bytes)
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

// [0x006D98A0] sub_006D98A0 (48 bytes)
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

// [0x006D2940] sub_006D2940 (96 bytes)
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

// [0x006D7500] sub_006D7500 (96 bytes)
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

// [0x006D9070] sub_006D9070 (96 bytes)
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

// [0x006D03E0] sub_006D03E0 (112 bytes)
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

// [0x006D2280] sub_006D2280 (127 bytes)
// Grow-by-n with zero fill: used += n; reallocs data to ceil((used+n)/blk) blocks when capacity is exceeded.
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

// [0x006DBE60] sub_006DBE60 (128 bytes)
// Calls ext_006A7310(*self, *in) (64-bit args, callee-cleaned) and stores the
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

// [0x006D2170] sub_006D2170 (144 bytes)
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

// [0x006D9470] sub_006D9470 (799 bytes)
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

// [0x006D8980] sub_006D8980 (63 bytes)
extern "C" void ext_006FDF70();
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

// [0x006D5AD0] sub_006D5AD0 (64 bytes)
extern "C" void ext_006B9D20();
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

// [0x006DCB60] sub_006DCB60 (79 bytes)
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
