// Decompiled translation unit: src/leaf/decompiled_800000.cpp

extern "C" void ext_00859730();
extern "C" void ext_0080FB20();
extern "C" void ext_0080BA60();
extern "C" void ext_008529D0();
extern "C" void ext_00852AD0();
extern "C" void ext_00853410();
extern "C" void ext_00853840();
extern "C" void ext_00859E50();

// [0x0080FAE0] sub_0080FAE0 (16 bytes)
extern "C" __declspec(naked) void __cdecl fn_0080FAE0(void* p) {
    __asm {
        mov eax, dword ptr [esp + 4]
        test eax, eax
        je done
        push eax
        call ext_00859730
        pop ecx
    done:
        ret
    }
}

// [0x0080FB10] sub_0080FB10 (16 bytes)
extern "C" __declspec(naked) void __cdecl fn_0080FB10(void* p) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push 0
        push eax
        call ext_0080FB20
        add esp, 8
        ret
    }
}

// [0x00803990] sub_00803990 (44 bytes)
extern "C" void fn_00803980();

extern "C" void __cdecl fn_00803990(void* self, int a2, int a3, int a4) {
    int* p = reinterpret_cast<int*>(self);
    p[1] = a3;
    int cb = a4 ? a4 : reinterpret_cast<int>(&fn_00803980);
    p[3] = cb;
    p[0] = a2 - 4;
    p[2] = 0;
}

// [0x0080AC00] sub_0080AC00 (47 bytes)
extern "C" void ext_0080AC30();
extern "C" int mem_00B73C80;
extern "C" int mem_00B73C58;
extern "C" int mem_009242E4;

extern "C" __declspec(naked) void __cdecl fn_0080AC00() {
    __asm {
        call ext_0080AC30
        __asm _emit 0xE9 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 // jmp +6 (to 0x0080AC10)
        __asm _emit 0x90 __asm _emit 0x90 __asm _emit 0x90 __asm _emit 0x90 __asm _emit 0x90 __asm _emit 0x90 // padding
        mov eax, dword ptr [mem_00B73C80]
        test eax, eax
        je L_0080AC2E
        push offset mem_00B73C58
        call dword ptr [mem_009242E4]
        mov dword ptr [mem_00B73C80], 0x0
L_0080AC2E:
        ret
    }
}

// [0x00802D40] sub_00802D40 (66 bytes)
extern "C" __declspec(naked) void __fastcall fn_00802D40(void* self) {
    __asm {
        xor edx, edx
        push esi
    L_00802D40_top:
        mov eax, dword ptr [ecx + 0x4]
        mov esi, eax
        and esi, 0x80000003
        jns L_00802D40_a
        dec esi
        or esi, -0x4
        inc esi
    L_00802D40_a:
        je L_00802D40_cmp
        mov esi, eax
        and esi, 0x80000003
        jns L_00802D40_b
        dec esi
        or esi, -0x4
        inc esi
    L_00802D40_b:
        sub eax, esi
        add eax, 0x4
    L_00802D40_cmp:
        cmp edx, eax
        jge L_00802D40_done
        mov eax, dword ptr [ecx + 0x30]
        fld dword ptr [eax + 4*edx]
        mov esi, dword ptr [ecx + 0x40]
        fstp dword ptr [esi + 4*edx]
        add edx, 0x1
        jmp L_00802D40_top
    L_00802D40_done:
        pop esi
        ret
    }
}

// [0x00803B60] sub_00803B60 (67 bytes)
extern "C" __declspec(naked) float __fastcall fn_00803B60(void* self) {
    __asm {
        push ecx
        fld dword ptr [ecx + 0x4]
        fsub dword ptr [eax + 0x4]
        fstp dword ptr [esp]
        fld dword ptr [esp]
        fabs
        fstp dword ptr [esp]
        fld dword ptr [esp]
        fld dword ptr [ecx]
        fsub dword ptr [eax]
        fstp dword ptr [esp]
        fld dword ptr [esp]
        fabs
        fstp dword ptr [esp]
        fadd dword ptr [esp]
        fld dword ptr [ecx + 0x8]
        fsub dword ptr [eax + 0x8]
        fstp dword ptr [esp]
        fld dword ptr [esp]
        fabs
        fstp dword ptr [esp]
        fadd dword ptr [esp]
        fstp dword ptr [esp]
        fld dword ptr [esp]
        pop ecx
        ret
    }
}

// [0x00803F80] sub_00803F80 (72 bytes)
extern "C" __declspec(naked) void* __cdecl fn_00803F80(void* self) {
    __asm {
        mov eax, dword ptr [esp + 4]
        mov ecx, 1
        test byte ptr [eax + 1bch], cl
        mov dword ptr [eax + 1c0h], 0
        mov dword ptr [eax + 1c4h], ecx
        je done
    loop_top:
        shl dword ptr [eax + 1c4h], 1
        add dword ptr [eax + 1c0h], ecx
        mov edx, dword ptr [eax + 1c4h]
        test dword ptr [eax + 1bch], edx
        jne loop_top
    done:
        mov ecx, dword ptr [eax + 1c0h]
        lea ecx, [ecx + 2*ecx]
        lea eax, [eax + 8*ecx]
        ret
    }
}

// [0x00803F20] sub_00803F20 (91 bytes)
extern "C" void ext_00803DF0();
extern "C" __declspec(naked) void __cdecl fn_00803F20(float* out, int a, int flag, unsigned char* self) {
    __asm {
        mov ecx, dword ptr [esp + 8]
        test ecx, ecx
        jne short tail_path
        cmp dword ptr [esp + 0Ch], 0
        mov ecx, dword ptr [esp + 10h]
        mov eax, dword ptr [ecx + 1C0h]
        je short zero_path
        lea eax, [eax + 2*eax]
        lea eax, [ecx + 8*eax + 0Ch]
        jmp short load_path
    zero_path:
        lea edx, [eax + 2*eax]
        lea eax, [ecx + 8*edx]
    load_path:
        fld dword ptr [eax]
        mov ecx, dword ptr [esp + 4]
        fstp dword ptr [ecx]
        fld dword ptr [eax + 4]
        fstp dword ptr [ecx + 4]
        fld dword ptr [eax + 8]
        mov eax, 1
        fstp dword ptr [ecx + 8]
        ret
    tail_path:
        mov eax, dword ptr [esp + 10h]
        mov dword ptr [esp + 10h], eax
        mov eax, dword ptr [eax + 1C4h]
        or eax, ecx
        mov dword ptr [esp + 8], eax
        jmp ext_00803DF0
    }
}

// [0x008039C0] sub_008039C0 (93 bytes)
extern "C" __declspec(naked) int __cdecl fn_008039C0(void* self, int value) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 8]
        mov eax, dword ptr [ebx + 8]
        cmp eax, dword ptr [ebx + 4]
        jl short L_008039D1
        xor eax, eax
        pop ebx
        ret
    L_008039D1:
        mov ecx, dword ptr [esp + 0Ch]
        push esi
        push edi
        lea edi, [eax + 1]
        mov eax, dword ptr [ebx]
        mov esi, edi
        sar esi, 1
        mov dword ptr [ebx + 8], edi
        mov dword ptr [eax + 4*edi], ecx
        je short L_00803A14
    L_008039E8:
        mov eax, dword ptr [ebx]
        mov edx, dword ptr [eax + 4*esi]
        mov eax, dword ptr [eax + 4*edi]
        mov ecx, dword ptr [ebx + 0Ch]
        push edx
        push eax
        call ecx
        add esp, 8
        test eax, eax
        je short L_00803A14
        mov eax, dword ptr [ebx]
        mov edx, dword ptr [eax + 4*esi]
        mov ecx, dword ptr [eax + 4*edi]
        mov dword ptr [eax + 4*edi], edx
        mov eax, dword ptr [ebx]
        mov dword ptr [eax + 4*esi], ecx
        mov edi, esi
        sar esi, 1
        jne short L_008039E8
    L_00803A14:
        pop edi
        pop esi
        mov eax, 1
        pop ebx
        ret
    }
}

// [0x00802D90] sub_00802D90 (115 bytes)
extern "C" __declspec(naked) void __fastcall fn_00802D90(void* self, int edx_unused, int* a1, int* a2) {
    __asm {
        push esi
        xor esi, esi
        cmp dword ptr [ecx + 0x4], esi
        jle fn_00802D90_end
        mov edx, dword ptr [esp + 0xc]
        push ebx
        mov ebx, dword ptr [esp + 0xc]
        push edi
        sub ebx, edx
    fn_00802D90_loop:
        mov eax, dword ptr [ecx + 0x30]
        fld dword ptr [eax + 4*esi]
        lea edi, [eax + 4*esi]
        mov eax, dword ptr [ecx + 0x3c]
        fld dword ptr [eax + 4*esi]
        fcompp
        fnstsw ax
        test ah, 0x41
        jne fn_00802D90_b2
        mov dword ptr [ebx + edx], 0xffffffff
        jmp fn_00802D90_storeb
    fn_00802D90_b2:
        mov eax, dword ptr [ecx + 0x38]
        fld dword ptr [edi]
        fld dword ptr [eax + 4*esi]
        fcompp
        fnstsw ax
        test ah, 0x5
        jp fn_00802D90_zero
        mov dword ptr [ebx + edx], 0xffffffff
        mov dword ptr [edx], 0xffffffff
        jmp fn_00802D90_next
    fn_00802D90_zero:
        mov dword ptr [ebx + edx], 0
    fn_00802D90_storeb:
        mov dword ptr [edx], 0
    fn_00802D90_next:
        add esi, 1
        add edx, 4
        cmp esi, dword ptr [ecx + 0x4]
        jl fn_00802D90_loop
        pop edi
        pop ebx
    fn_00802D90_end:
        pop esi
        ret 8
    }
}

// [0x00803AE0] sub_00803AE0 (122 bytes)
#include <math.h>
#pragma intrinsic(fabs)
extern "C" int __cdecl fn_00803AE0(const float* v) {
    float m[3];
    m[0] = (float)fabs(v[0]);
    m[1] = (float)fabs(v[1]);
    m[2] = (float)fabs(v[2]);
    if (m[0] > m[1]) {
        return (m[2] < m[0]) ? 0 : 2;
    }
    return (m[2] < m[1]) ? 1 : 2;
}

// [0x00802E10] sub_00802E10 (123 bytes)
extern "C" __declspec(naked) void __fastcall fn_00802E10(void* self, int edx_unused, int* a1, int* a2, int* a3, int* a4, int* a5, int* a6) {
    __asm {
        push ecx
        xor eax, eax
        cmp dword ptr [ecx + 0x4], eax
        jle fn_00802E10_end
        push ebx
        mov ebx, dword ptr [esp + 0x1c]
        sub ebx, dword ptr [esp + 0x20]
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x1c]
        push edi
        mov edi, dword ptr [esp + 0x24]
        mov dword ptr [esp + 0x10], ebx
    fn_00802E10_loop:
        mov edx, dword ptr [esp + 0x2c]
        lea edx, [edx + 4*eax]
        cmp dword ptr [ebx + edx], 0
        jne fn_00802E10_nz
        mov edx, dword ptr [edi]
        mov ebp, dword ptr [esp + 0x1c]
        mov dword ptr [ebp + 4*edx], eax
        add dword ptr [edi], 1
        jmp fn_00802E10_inc
    fn_00802E10_nz:
        mov ebx, dword ptr [esi]
        mov ebp, dword ptr [esp + 0x18]
        mov dword ptr [ebp + 4*ebx], eax
        add dword ptr [esi], 1
        cmp dword ptr [edx], 0
        jne fn_00802E10_t38
        mov edx, dword ptr [ecx + 0x3c]
        jmp fn_00802E10_src
    fn_00802E10_t38:
        mov edx, dword ptr [ecx + 0x38]
    fn_00802E10_src:
        fld dword ptr [edx + 4*eax]
        mov edx, dword ptr [ecx + 0x44]
        mov ebx, dword ptr [esp + 0x10]
        fstp dword ptr [esp + 0x28]
        fld dword ptr [esp + 0x28]
        fstp dword ptr [edx + 4*eax]
    fn_00802E10_inc:
        add eax, 1
        cmp eax, dword ptr [ecx + 0x4]
        jl fn_00802E10_loop
        pop edi
        pop esi
        pop ebp
        pop ebx
    fn_00802E10_end:
        pop ecx
        ret 0x18
    }
}

// [0x008044A0] sub_008044A0 (133 bytes)
extern "C" __declspec(naked) void __cdecl fn_008044A0(void* p) {
    __asm {
        mov eax, dword ptr [esp + 4]
        mov ecx, dword ptr [eax + 444]
        or ecx, dword ptr [eax + 452]
        push ebx
        mov ebx, 1
        xor edx, edx
        cmp ecx, ebx
        jl done
        push esi
        push edi
        lea esi, [eax + 8]
    loop_top:
        _emit 0x85
        _emit 0xcb
        je skip
        mov ecx, dword ptr [eax + 448]
        fld dword ptr [esi - 4]
        lea edi, [ecx + 2*ecx]
        fmul dword ptr [eax + 8*edi + 4]
        lea edi, [eax + 8*edi]
        fld dword ptr [esi - 8]
        lea ecx, [ecx + 4*edx]
        fmul dword ptr [edi]
        faddp st(1), st
        fld dword ptr [edi + 8]
        fmul dword ptr [esi]
        faddp st(1), st
        fstp dword ptr [esp + 16]
        fld dword ptr [esp + 16]
        fstp dword ptr [eax + 4*ecx + 120]
        mov ecx, dword ptr [eax + 448]
        lea edi, [ecx + 4*edx]
        fld dword ptr [eax + 4*edi + 120]
        lea ecx, [edx + 4*ecx]
        fstp dword ptr [eax + 4*ecx + 120]
    skip:
        mov ecx, dword ptr [eax + 444]
        or ecx, dword ptr [eax + 452]
        add ebx, ebx
        add edx, 1
        add esi, 24
        cmp ebx, ecx
        jle loop_top
        pop edi
        pop esi
    done:
        pop ebx
        ret
    }
}

extern "C" void ext_007E46B0();
extern "C" int mem_009324A4;
extern "C" int mem_00955680;

// [0x00803BB0] sub_00803BB0 (137 bytes)
extern "C" __declspec(naked) void __cdecl fn_00803BB0(void) {
    __asm {
        sub esp, 0xc
        fld dword ptr [eax]
        push esi
        fstp dword ptr [esp + 0x4]
        lea esi, [esp + 0x4]
        fld dword ptr [eax + 0x4]
        fstp dword ptr [esp + 0x8]
        fld dword ptr [eax + 0x8]
        fstp dword ptr [esp + 0xc]
        call ext_007E46B0
        fstp st(0)
        fld dword ptr [mem_009324A4]
        fld dword ptr [esp + 0xc]
        fcom st(1)
        fnstsw ax
        fstp st(1)
        test ah, 0x5
        jp neg_path
        fld dword ptr [mem_00955680]
        fcomp st(1)
        fnstsw ax
        test ah, 0x5
        jp neg_path
        fstp st(0)
        mov esi, edi
        fld dword ptr [esp + 0x8]
        fchs
        fstp dword ptr [edi]
        fld dword ptr [esp + 0x4]
        fstp dword ptr [edi + 0x4]
        fldz
        fstp dword ptr [edi + 0x8]
        call ext_007E46B0
        fstp st(0)
        pop esi
        add esp, 0xc
        ret
neg_path:
        fchs
        mov esi, edi
        fstp dword ptr [edi]
        fldz
        fstp dword ptr [edi + 0x4]
        fld dword ptr [esp + 0x4]
        fstp dword ptr [edi + 0x8]
        call ext_007E46B0
        fstp st(0)
        pop esi
        add esp, 0xc
        ret
    }
}

// [0x00802320] sub_00802320 (146 bytes)
extern "C" __declspec(naked) void __cdecl fn_00802320(void) {
    __asm {
        sub esp, 8
        mov ecx, 0x1e
        sub ecx, dword ptr [esp + 0x1c]
        mov eax, 0x7fffffff
        sar eax, cl
        cmp dword ptr [esp + 0x20], 0
        mov dword ptr [esp + 0x1c], 0
        jle L_008023AE
        mov edx, dword ptr [esp + 0x18]
        mov ecx, dword ptr [esp + 0x14]
        push esi
        mov esi, dword ptr [esp + 0x10]
        push edi
        mov edi, dword ptr [esp + 0x18]
        sub esi, edx
        sub edi, edx
        sub ecx, edx
        push ebx
        mov dword ptr [esp + 0xc], esi
        mov dword ptr [esp + 0x10], ecx
        push ebp
    L_loop:
        cmp dword ptr [esi + edx], 0
        jne L_00802370
        mov ebx, dword ptr [edx]
        not ebx
        jmp L_00802390
    L_00802370:
        and eax, dword ptr [edx]
        je L_008023AA
        mov esi, dword ptr [edi + edx]
        mov ecx, dword ptr [ecx + edx]
        mov ebx, ecx
        mov ebp, esi
        not ebx
        not ebp
        and ecx, esi
        mov esi, dword ptr [esp + 0x10]
        and ebx, ebp
        or ebx, ecx
        mov ecx, dword ptr [esp + 0x14]
    L_00802390:
        and eax, ebx
        test eax, eax
        je L_008023AA
        mov ebx, dword ptr [esp + 0x2c]
        add ebx, 1
        add edx, 4
        cmp ebx, dword ptr [esp + 0x30]
        mov dword ptr [esp + 0x2c], ebx
        jl L_loop
    L_008023AA:
        pop ebp
        pop ebx
        pop edi
        pop esi
    L_008023AE:
        add esp, 8
        ret
    }
}

extern "C" void ext_007C6F20();
extern "C" void ext_007C89F0();
extern "C" void ext_007F56E0();

// [0x00803C40] sub_00803C40 (170 bytes)
extern "C" __declspec(naked) void __cdecl fn_00803C40(void* out, void* in) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        push edi
        mov edi, dword ptr [esp + 0x10]
        mov eax, dword ptr [edi]
        fld dword ptr [eax + 0x1c]
        mov ecx, dword ptr [edi + 4]
        fadd dword ptr [ecx + 0x1c]
        fstp dword ptr [esi + 0x2c]
        mov edx, dword ptr [edi + 4]
        push edx
        call ext_007C6F20
        mov ecx, dword ptr [edi]
        movsx eax, ax
        add esp, 4
        push eax
        push ecx
        call ext_007C6F20
        movsx edx, ax
        mov eax, dword ptr [edi]
        mov ecx, dword ptr [eax]
        add esp, 4
        push edx
        push ecx
        call ext_007C89F0
        add esp, 0xc
        cmp dword ptr [eax + 0xc], 0
        jne short L_else
        mov edx, dword ptr [edi]
        add edx, 0x44
        mov dword ptr [esi + 0x34], edx
        mov eax, dword ptr [edi + 4]
        add eax, 0x44
        mov dword ptr [esi + 0x38], eax
        jmp short L_join
    L_else:
        mov ecx, dword ptr [edi]
        add ecx, 0x44
        mov dword ptr [esi + 0x38], ecx
        mov edx, dword ptr [edi + 4]
        add edx, 0x44
        mov dword ptr [esi + 0x34], edx
    L_join:
        mov eax, dword ptr [esi + 0x34]
        mov ecx, dword ptr [eax]
        push ecx
        call ext_007F56E0
        fstp dword ptr [esi + 0x24]
        mov edx, dword ptr [esi + 0x38]
        mov eax, dword ptr [edx]
        push eax
        call ext_007F56E0
        fstp dword ptr [esi + 0x28]
        fld1
        add esp, 8
        fst dword ptr [esi + 0x30]
        pop edi
        fldz
        fst dword ptr [esi]
        fst dword ptr [esi + 8]
        fxch st(1)
        fstp dword ptr [esi + 4]
        fst dword ptr [esi + 0xc]
        fst dword ptr [esi + 0x10]
        fstp dword ptr [esi + 0x14]
        pop esi
        ret
    }
}

// [0x00803A20] sub_00803A20 (177 bytes)
extern "C" __declspec(naked) void* __cdecl fn_00803A20(void* heap) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        mov ecx, dword ptr [esi + 8]
        cmp ecx, 1
        jge short L_00803A31
        xor eax, eax
        pop esi
        ret
    L_00803A31:
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 4]
        mov ecx, dword ptr [eax + 4*ecx]
        push ebx
        mov dword ptr [eax + 4], ecx
        add dword ptr [esi + 8], -1
        mov eax, dword ptr [esi + 8]
        push edi
        mov edi, 2
        cmp eax, edi
        mov dword ptr [esp + 10h], edx
        mov ebx, 1
        jl short L_00803AC9
        push ebp
    L_00803A58:
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 4*edi]
        mov eax, dword ptr [eax + 4*ebx]
        mov ecx, dword ptr [esi + 0Ch]
        push edx
        push eax
        call ecx
        add esp, 8
        test eax, eax
        lea ebp, [edi + 1]
        je short L_00803A8F
        cmp ebp, dword ptr [esi + 8]
        jg short L_00803AC8
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 4*edi + 4]
        mov eax, dword ptr [eax + 4*ebx]
        mov ecx, dword ptr [esi + 0Ch]
        push edx
        push eax
        call ecx
        add esp, 8
        test eax, eax
        jne short L_00803AC8
        jmp short L_00803AAD
    L_00803A8F:
        cmp ebp, dword ptr [esi + 8]
        jg short L_00803AAF
        mov edx, dword ptr [esi]
        mov ecx, dword ptr [edx + 4*edi]
        lea eax, [edx + 4*edi]
        mov edx, dword ptr [eax + 4]
        mov eax, dword ptr [esi + 0Ch]
        push ecx
        push edx
        call eax
        add esp, 8
        test eax, eax
        je short L_00803AAF
    L_00803AAD:
        mov edi, ebp
    L_00803AAF:
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 4*ebx]
        mov ecx, dword ptr [eax + 4*edi]
        mov dword ptr [eax + 4*edi], edx
        mov eax, dword ptr [esi]
        mov dword ptr [eax + 4*ebx], ecx
        mov ebx, edi
        add edi, edi
        cmp edi, dword ptr [esi + 8]
        jle short L_00803A58
    L_00803AC8:
        pop ebp
    L_00803AC9:
        mov eax, dword ptr [esp + 10h]
        pop edi
        pop ebx
        pop esi
        ret
    }
}

// [0x008028B0] sub_008028B0 (237 bytes)
extern "C" void __fastcall fn_008028B0(void* self, int edx_unused, float* a1, const float* a2, const int* a3, const int* a4, int a5, int a6) {
    int i;
    for (i = 0; i < a5; ++i) {
        a1[a3[i]] = a2[i];
    }
    for (i = 0; i < a6; ++i) {
        a1[a4[i]] = 0.0f;
    }
}

// [0x00803CF0] sub_00803CF0 (256 bytes)
extern "C" void ext_00803B60();
extern "C" int mem_0094CE80;
extern "C" __declspec(naked) void __fastcall fn_00803CF0(void* self) {
    __asm {
        mov edx, dword ptr [esp + 4]
        fld dword ptr [mem_0094CE80]
        cmp dword ptr [edx + 0x1c8], 0
        push esi
        jne L_scan
        mov eax, dword ptr [edx + 0x1c4]
        cmp eax, dword ptr [edx + 0x1bc]
        jge L_scan
        mov eax, dword ptr [edx + 0x1c0]
        fstp st(0)
        lea ecx, [eax + 2*eax]
        lea esi, [edx + 8*ecx]
        lea eax, [edx + 0x60]
        mov ecx, esi
        call ext_00803B60
        fcomp dword ptr [mem_0094CE80]
        fnstsw ax
        test ah, 0x5
        jnp L_ret1
        lea eax, [edx + 0x6c]
        mov ecx, esi
        call ext_00803B60
        fld dword ptr [mem_0094CE80]
        fcom st(1)
        fnstsw ax
        fstp st(1)
        test ah, 0x41
        jne L_scan
        fstp st(0)
L_ret1:
        mov eax, 1
        pop esi
        ret
L_scan:
        push edi
        mov edi, dword ptr [edx + 0x1bc]
        mov esi, 1
        cmp edi, esi
        jl L_none
        lea ecx, [edx + 8]
L_loop:
        __asm _emit 0x85
        __asm _emit 0xfe
        je L_next
        mov eax, dword ptr [edx + 0x1c0]
        lea eax, [eax + 2*eax]
        fld dword ptr [edx + 8*eax + 4]
        lea eax, [edx + 8*eax]
        fsub dword ptr [ecx - 4]
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0xc]
        fabs
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0xc]
        fld dword ptr [eax]
        fsub dword ptr [ecx - 8]
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0xc]
        fabs
        fstp dword ptr [esp + 0xc]
        fadd dword ptr [esp + 0xc]
        fld dword ptr [eax + 8]
        fsub dword ptr [ecx]
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0xc]
        fabs
        fstp dword ptr [esp + 0xc]
        fadd dword ptr [esp + 0xc]
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0xc]
        fcomp st(1)
        fnstsw ax
        test ah, 0x5
        jnp L_hit
L_next:
        add esi, esi
        add ecx, 0x18
        cmp esi, edi
        jle L_loop
L_none:
        pop edi
        fstp st(0)
        xor eax, eax
        pop esi
        ret
L_hit:
        pop edi
        fstp st(0)
        mov eax, 1
        pop esi
        ret
    }
}

// [0x00803DF0] sub_00803DF0 (289 bytes)
extern "C" __declspec(naked) int __cdecl fn_00803DF0(float* out, int n, char* obj) {
    __asm {
        sub esp, 0xc
        fldz
        mov ecx, dword ptr [esp + 0x10]
        push ebp
        fst dword ptr [esp + 4]
        mov ebp, dword ptr [esp + 0x20]
        fst dword ptr [esp + 0xc]
        push esi
        fst dword ptr [esp + 0xc]
        mov esi, dword ptr [esp + 0x1c]
        fst dword ptr [ecx]
        push edi
        fst dword ptr [ecx + 4]
        mov edx, 1
        fst dword ptr [ecx + 8]
        xor edi, edi
        cmp esi, edx
        jl L_end2
        push ebx
        mov ebx, ebp
    L_loop:
        test edx, esi
        je L_next
        lea eax, [edi + 4*esi]
        fld dword ptr [ebp + 4*eax + 0xb8]
        fstp dword ptr [esp + 0x20]
        fld dword ptr [esp + 0x20]
        fld st(0)
        fld dword ptr [esp + 0x14]
        fcomp st(1)
        fnstsw ax
        test ah, 0x41
        jne L1
        fxch st(1)
        fst dword ptr [esp + 0x14]
        fxch st(1)
    L1:
        fld dword ptr [esp + 0x18]
        fcomp st(1)
        fnstsw ax
        test ah, 5
        jp L2
        fxch st(1)
        fstp dword ptr [esp + 0x18]
        jmp L3
    L2:
        fstp st(1)
    L3:
        cmp dword ptr [esp + 0x28], 0
        fld dword ptr [esp + 0x10]
        fadd st, st(1)
        lea eax, [ebx + 0xc]
        fstp dword ptr [esp + 0x10]
        jne L4
        mov eax, ebx
    L4:
        fld dword ptr [eax]
        fmul st, st(1)
        fadd dword ptr [ecx]
        fstp dword ptr [ecx]
        fld dword ptr [eax + 4]
        fmul st, st(1)
        fadd dword ptr [ecx + 4]
        fstp dword ptr [ecx + 4]
        fmul dword ptr [eax + 8]
        fadd dword ptr [ecx + 8]
        fstp dword ptr [ecx + 8]
    L_next:
        add edx, edx
        add edi, 1
        add ebx, 0x18
        cmp edx, esi
        jle L_loop
        fld dword ptr [esp + 0x10]
        pop ebx
        fucom st(1)
        fnstsw ax
        fstp st(1)
        test ah, 0x44
        jnp L_end2
        fld1
        fdivrp st(1), st
        fstp dword ptr [esp + 0x1c]
        fld dword ptr [esp + 0x1c]
        fld dword ptr [ecx]
        fmul st, st(1)
        fstp dword ptr [ecx]
        fld dword ptr [ecx + 4]
        fmul st, st(1)
        fstp dword ptr [ecx + 4]
        fmul dword ptr [ecx + 8]
        fstp dword ptr [ecx + 8]
        jmp L_end
    L_end2:
        fstp st(0)
    L_end:
        fld dword ptr [esp + 0x10]
        pop edi
        fld dword ptr [ebp + 0x1b8]
        pop esi
        fld dword ptr [esp + 0xc]
        pop ebp
        fchs
        fmulp st(1), st
        fcompp
        fnstsw ax
        test ah, 1
        je L_zero
        mov eax, 1
        add esp, 0xc
        ret
    L_zero:
        xor eax, eax
        add esp, 0xc
        ret
    }
}

// [0x00802E90] sub_00802E90 (305 bytes)
extern "C" __declspec(naked) int __fastcall fn_00802E90(void* self, int edx_unused, int a1, int a2, int a3, int a4, int a5) {
    __asm {
        sub esp, 0xc
        push ebp
        or eax, -1
        xor ebp, ebp
        cmp dword ptr [ecx + 4], ebp
        mov dword ptr [esp + 8], ecx
        mov dword ptr [esp + 4], eax
        jle fn_00802E90_exit
        mov eax, dword ptr [esp + 0x1c]
        mov ecx, dword ptr [esp + 0x20]
        push ebx
        push esi
        mov esi, dword ptr [esp + 0x20]
        sub eax, esi
        mov dword ptr [esp + 0x20], eax
        mov eax, dword ptr [esp + 0x2c]
        sub ecx, esi
        sub eax, esi
        push edi
        mov dword ptr [esp + 0x18], ecx
        mov dword ptr [esp + 0x28], eax
        nop
    fn_00802E90_loop:
        mov ebx, dword ptr [esp + 0x20]
        mov edx, dword ptr [ecx + esi]
        xor edi, edi
        xor eax, eax
        test ebx, ebx
        je fn_00802E90_test_done
        nop
    fn_00802E90_shift_loop:
        mov ecx, edx
        and ecx, 1
        add edi, ecx
        add eax, 1
        sar edx, 1
        sar ebx, 1
        jne fn_00802E90_shift_loop
    fn_00802E90_test_done:
        cdq
        sub eax, edx
        mov edx, dword ptr [esp + 0x14]
        sar eax, 1
        cmp edi, eax
        jle fn_00802E90_set_zero
        mov dword ptr [esi], 0xffffffff
        mov eax, dword ptr [edx + 0x30]
        fld dword ptr [eax + 4*ebp]
        mov ecx, dword ptr [edx + 0x3c]
        fld dword ptr [ecx + 4*ebp]
        mov eax, dword ptr [edx + 0x38]
        fsubr st, st(1)
        fstp dword ptr [esp + 0x2c]
        fld dword ptr [esp + 0x2c]
        fabs
        fstp dword ptr [esp + 0x2c]
        fld dword ptr [esp + 0x2c]
        fld dword ptr [eax + 4*ebp]
        fsubp st(2), st
        fxch st(1)
        fstp dword ptr [esp + 0x2c]
        fld dword ptr [esp + 0x2c]
        fabs
        fstp dword ptr [esp + 0x2c]
        fld dword ptr [esp + 0x2c]
        fcompp
        fnstsw ax
        test ah, 0x41
        jne fn_00802E90_set_neg1
        mov ecx, dword ptr [esp + 0x24]
        xor eax, eax
        mov dword ptr [ecx + esi], eax
        jmp fn_00802E90_after_set
    fn_00802E90_set_neg1:
        mov ecx, dword ptr [esp + 0x24]
        or eax, -1
        mov dword ptr [ecx + esi], eax
        jmp fn_00802E90_after_set
    fn_00802E90_set_zero:
        mov dword ptr [esi], 0
    fn_00802E90_after_set:
        mov eax, dword ptr [esi]
        mov ecx, dword ptr [esp + 0x18]
        mov edi, dword ptr [esp + 0x10]
        mov ebx, eax
        not ebx
        xor ebx, dword ptr [ecx + esi]
        and edi, ebx
        _emit 0x85
        _emit 0xc7
        mov dword ptr [esp + 0x10], edi
        je fn_00802E90_next_iter
        mov edx, dword ptr [esp + 0x24]
        mov edx, dword ptr [edx + esi]
        mov eax, dword ptr [esp + 0x28]
        mov eax, dword ptr [eax + esi]
        mov edi, eax
        mov ebx, edx
        not edi
        not ebx
        and eax, edx
        mov edx, dword ptr [esp + 0x14]
        and edi, ebx
        or edi, eax
        and dword ptr [esp + 0x10], edi
    fn_00802E90_next_iter:
        add ebp, 1
        add esi, 4
        cmp ebp, dword ptr [edx + 4]
        jl fn_00802E90_loop
        mov eax, dword ptr [esp + 0x10]
        pop edi
        pop esi
        pop ebx
    fn_00802E90_exit:
        pop ebp
        add esp, 0xc
        ret 0x14
    }
}

// [0x00802B90] sub_00802B90 (421 bytes)
extern "C" __declspec(naked) int __fastcall fn_00802B90(void* self) {
    __asm {
        mov eax, dword ptr [ecx + 0x4]
        sub esp, 0x10
        push ebx
        push ebp
        push esi
        xor esi, esi
        cmp eax, 0x4
        push edi
        jl L_tail
        mov eax, dword ptr [ecx + 0x30]
        mov edi, dword ptr [ecx + 0x38]
        lea ebp, [edi + 0xc]
        sub edi, eax
        mov dword ptr [esp + 0x14], edi
        mov edi, 0x4
        sub edi, eax
        mov dword ptr [esp + 0x18], edi
        mov edi, 0x8
        sub edi, eax
        mov dword ptr [esp + 0x1c], edi
        mov edi, 0xfffffffc
        sub edi, eax
        lea edx, [eax + 0x4]
        mov dword ptr [esp + 0x10], edi
        jmp L_entry
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
L_loop:
        mov edi, dword ptr [esp + 0x10]
L_entry:
        fld dword ptr [edx - 0x4]
        fld dword ptr [ebp - 0xc]
        fcomp st(1)
        fnstsw ax
        test ah, 0x5
        jnp L_ce4
        mov ebx, dword ptr [ecx + 0x3c]
        add edi, edx
        fld dword ptr [edi + ebx]
        add edi, ebx
        fcompp
        fnstsw ax
        test ah, 0x41
        je L_ce6
        mov eax, dword ptr [esp + 0x14]
        fld dword ptr [edx]
        fld dword ptr [eax + edx]
        fcomp st(1)
        fnstsw ax
        test ah, 0x5
        jnp L_ce1
        fld dword ptr [edi + 0x4]
        fcompp
        fnstsw ax
        test ah, 0x41
        je L_cf0
        fld dword ptr [edx + 0x4]
        fld dword ptr [ebp - 0x4]
        fcomp st(1)
        fnstsw ax
        test ah, 0x5
        jnp L_cfd
        mov eax, dword ptr [esp + 0x18]
        add eax, edx
        fld dword ptr [eax + ebx]
        fcompp
        fnstsw ax
        test ah, 0x41
        je L_d0c
        fld dword ptr [edx + 0x8]
        fld dword ptr [ebp]
        fcomp st(1)
        fnstsw ax
        test ah, 0x5
        jnp L_d19
        mov eax, dword ptr [esp + 0x1c]
        add eax, edx
        fld dword ptr [eax + ebx]
        fcompp
        fnstsw ax
        test ah, 0x41
        je L_d28
        mov eax, dword ptr [ecx + 0x4]
        add esi, 0x4
        add eax, -3
        add edx, 0x10
        add ebp, 0x10
        cmp esi, eax
        jl L_loop
L_tail:
        mov edi, dword ptr [ecx + 0x4]
        cmp esi, edi
        jge L_ce6
        mov eax, dword ptr [ecx + 0x30]
        mov ebx, dword ptr [ecx + 0x38]
        lea edx, [eax + 4 * esi]
        sub ebx, eax
        nop
L_tloop:
        fld dword ptr [edx]
        fld dword ptr [edx + ebx]
        fcomp st(1)
        fnstsw ax
        test ah, 0x5
        jnp L_ce4
        mov eax, dword ptr [ecx + 0x3c]
        fld dword ptr [eax + 4 * esi]
        fcompp
        fnstsw ax
        test ah, 0x41
        je L_ce6
        add esi, 0x1
        add edx, 0x4
        cmp esi, edi
        jl L_tloop
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret
L_ce1:
        add esi, 0x1
L_ce4:
        fstp st(0)
L_ce6:
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret
L_cf0:
        add esi, 0x1
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret
L_cfd:
        add esi, 0x2
        fstp st(0)
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret
L_d0c:
        add esi, 0x2
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret
L_d19:
        add esi, 0x3
        fstp st(0)
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret
L_d28:
        add esi, 0x3
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret
    }
}

// [0x008029A0] sub_008029A0 (478 bytes)
extern "C" void ext_006A6E8C();
extern "C" __declspec(naked) void __fastcall fn_008029A0(void* self, int edx_unused, float* a1, float* a2, float* a3, float* a4, int* a5, int* a6, int a7, int a8, int a9, int a10, int a11) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0x28]
        push ebx
        mov dword ptr [esp + 0x4], ecx
        mov ecx, dword ptr [esp + 0x30]
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x14]
        sub ecx, eax
        add ecx, ecx
        push edi
        add ecx, ecx
        push ecx
        lea edx, [esi + 4*eax]
        push 0x0
        push edx
        call ext_006A6E8C
        mov ebp, dword ptr [esp + 0x40]
        mov ecx, dword ptr [esp + 0x28]
        add esp, 0xc
        xor ebx, ebx
        cmp ebp, 0x4
        jl L_1A1C
        mov eax, dword ptr [esp + 0x2c]
        lea edi, [ebp - 0x4]
        shr edi, 0x2
        add eax, 0x8
        add edi, 0x1
        lea ebx, [4*edi]
L_29F0:
        mov edx, dword ptr [eax - 0x8]
        fld dword ptr [ecx + 4*edx]
        add eax, 0x10
        sub edi, 0x1
        fstp dword ptr [esi + 4*edx]
        mov edx, dword ptr [eax - 0x14]
        fld dword ptr [ecx + 4*edx]
        fstp dword ptr [esi + 4*edx]
        mov edx, dword ptr [eax - 0x10]
        fld dword ptr [ecx + 4*edx]
        fstp dword ptr [esi + 4*edx]
        mov edx, dword ptr [eax - 0xc]
        fld dword ptr [ecx + 4*edx]
        fstp dword ptr [esi + 4*edx]
        jne L_29F0
L_1A1C:
        cmp ebx, ebp
        jge L_2A34
L_2A20:
        mov eax, dword ptr [esp + 0x2c]
        mov eax, dword ptr [eax + 4*ebx]
        fld dword ptr [ecx + 4*eax]
        add ebx, 0x1
        cmp ebx, ebp
        fstp dword ptr [esi + 4*eax]
        jl L_2A20
L_2A34:
        mov eax, dword ptr [esp + 0x30]
        test eax, eax
        jle L_2AFB
        mov ecx, dword ptr [esp + 0x24]
        mov edi, dword ptr [esp + 0x28]
        sub edi, ecx
        mov dword ptr [esp + 0x38], edi
        mov dword ptr [esp + 0x3c], eax
L_2A52:
        mov edx, dword ptr [edi + ecx]
        imul edx, dword ptr [esp + 0x40]
        mov eax, dword ptr [esp + 0x20]
        xor ebx, ebx
        cmp ebp, 0x4
        lea edx, [eax + 4*edx]
        jl L_2AC8
        mov eax, dword ptr [esp + 0x2c]
        add ebp, -0x4
        shr ebp, 0x2
        add eax, 0x8
        add ebp, 0x1
        lea ebx, [4*ebp]
        __asm _emit 0x90
L_2A80:
        mov edi, dword ptr [eax - 0x8]
        fld dword ptr [edx + 4*edi]
        add eax, 0x10
        sub ebp, 0x1
        fmul dword ptr [ecx]
        fadd dword ptr [esi + 4*edi]
        fstp dword ptr [esi + 4*edi]
        mov edi, dword ptr [eax - 0x14]
        fld dword ptr [edx + 4*edi]
        fmul dword ptr [ecx]
        fadd dword ptr [esi + 4*edi]
        fstp dword ptr [esi + 4*edi]
        mov edi, dword ptr [eax - 0x10]
        fld dword ptr [edx + 4*edi]
        fmul dword ptr [ecx]
        fadd dword ptr [esi + 4*edi]
        fstp dword ptr [esi + 4*edi]
        mov edi, dword ptr [eax - 0xc]
        fld dword ptr [edx + 4*edi]
        fmul dword ptr [ecx]
        fadd dword ptr [esi + 4*edi]
        fstp dword ptr [esi + 4*edi]
        jne L_2A80
        mov edi, dword ptr [esp + 0x38]
        mov ebp, dword ptr [esp + 0x34]
L_2AC8:
        cmp ebx, ebp
        jge L_2AE9
        __asm _emit 0x8d __asm _emit 0x64 __asm _emit 0x24 __asm _emit 0x00
L_2AD0:
        mov eax, dword ptr [esp + 0x2c]
        mov eax, dword ptr [eax + 4*ebx]
        fld dword ptr [edx + 4*eax]
        add ebx, 0x1
        cmp ebx, ebp
        fmul dword ptr [ecx]
        fadd dword ptr [esi + 4*eax]
        fstp dword ptr [esi + 4*eax]
        jl L_2AD0
L_2AE9:
        add ecx, 0x4
        sub dword ptr [esp + 0x3c], 0x1
        jne L_2A52
        mov eax, dword ptr [esp + 0x30]
L_2AFB:
        xor ebp, ebp
        cmp eax, 0x4
        jl L_2B50
        mov ebx, dword ptr [esp + 0x30]
        mov eax, dword ptr [esp + 0x28]
        mov ecx, dword ptr [esp + 0x10]
        mov ecx, dword ptr [ecx + 0x44]
        add ebx, -0x4
        shr ebx, 0x2
        add eax, 0x8
        add ebx, 0x1
        lea ebp, [4*ebx]
L_2B24:
        mov edx, dword ptr [eax - 0x8]
        fld dword ptr [ecx + 4*edx]
        add eax, 0x10
        sub ebx, 0x1
        fstp dword ptr [esi + 4*edx]
        mov edx, dword ptr [eax - 0x14]
        fld dword ptr [ecx + 4*edx]
        fstp dword ptr [esi + 4*edx]
        mov edx, dword ptr [eax - 0x10]
        fld dword ptr [ecx + 4*edx]
        fstp dword ptr [esi + 4*edx]
        mov edx, dword ptr [eax - 0xc]
        fld dword ptr [ecx + 4*edx]
        fstp dword ptr [esi + 4*edx]
        jne L_2B24
L_2B50:
        cmp ebp, dword ptr [esp + 0x30]
        jge L_2B76
        mov edx, dword ptr [esp + 0x10]
        mov ecx, dword ptr [edx + 0x44]
        __asm _emit 0x8d __asm _emit 0x49 __asm _emit 0x00
L_2B60:
        mov eax, dword ptr [esp + 0x28]
        mov eax, dword ptr [eax + 4*ebp]
        fld dword ptr [ecx + 4*eax]
        add ebp, 0x1
        cmp ebp, dword ptr [esp + 0x30]
        fstp dword ptr [esi + 4*eax]
        jl L_2B60
L_2B76:
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 0x2c
    }
}

// [0x008033C0] sub_008033C0 (261 bytes)
extern "C" int mem_0099ECE4;
extern "C" int mem_0099ED0C;
extern "C" void ext_008028B0();
extern "C" void ext_008029A0();
extern "C" __declspec(naked) void __fastcall fn_008033C0(void* self, int edx_unused, int a1, int a2, int a3, int a4, int a5) {
    __asm {
        sub esp, 0x68
        push ebx
        push ebp
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 0x18], 0x2
        push edi
        mov dword ptr [esp + 0x44], offset mem_0099ECE4
        mov dword ptr [esp + 0x10], offset mem_0099ED0C
        lea edi, [esp + 0x10]
        je SHORT L_8033E7
        lea edi, [esp + 0x44]
L_8033E7:
        mov edx, dword ptr [esi]
        mov ebx, dword ptr [esp + 0x88]
        mov ebp, dword ptr [esp + 0x84]
        mov ecx, dword ptr [esi + 0x28]
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0x18]
        push edx
        mov edx, dword ptr [esi + 0x24]
        push ebx
        push ebp
        push edx
        mov edx, dword ptr [esi + 0x48]
        push edx
        call eax
        mov eax, dword ptr [esp + 0x8c]
        mov ecx, dword ptr [esi + 0x1c]
        mov edx, dword ptr [edi]
        mov edx, dword ptr [edx]
        push eax
        push ecx
        push ebx
        mov ecx, edi
        call edx
        mov ecx, dword ptr [esi]
        mov edx, dword ptr [esp + 0x80]
        mov eax, dword ptr [edi]
        push ecx
        mov ecx, dword ptr [esp + 0x80]
        push ebx
        push edx
        mov edx, dword ptr [esi + 0x40]
        push ebp
        push ecx
        mov ecx, dword ptr [esi + 0x44]
        push edx
        mov edx, dword ptr [esi + 0x48]
        push ecx
        mov ecx, dword ptr [esi + 0x4c]
        push edx
        mov edx, dword ptr [eax + 0x8]
        push ecx
        mov ecx, edi
        call edx
        mov eax, dword ptr [edi]
        mov edx, dword ptr [eax + 0xc]
        mov ecx, edi
        call edx
        mov eax, dword ptr [esi + 0x4c]
        mov edx, dword ptr [edi]
        push eax
        push eax
        mov eax, dword ptr [edx + 0x10]
        mov ecx, edi
        call eax
        mov ecx, dword ptr [esi + 0x28]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x20]
        call eax
        mov edi, dword ptr [esp + 0x80]
        mov ecx, dword ptr [esp + 0x7c]
        mov edx, dword ptr [esi + 0x4c]
        mov eax, dword ptr [esi + 0x34]
        push edi
        push ebx
        push ecx
        push ebp
        push edx
        push eax
        mov ecx, esi
        call ext_008028B0
        mov ecx, dword ptr [esi]
        mov edx, dword ptr [esi + 0xc]
        mov eax, dword ptr [esi + 0x4]
        push ecx
        mov ecx, dword ptr [esp + 0x80]
        push edx
        push eax
        push edi
        push ebx
        push ecx
        push ebp
        mov edx, dword ptr [esi + 0x4c]
        mov eax, dword ptr [esi + 0x48]
        mov ecx, dword ptr [esi + 0x40]
        push edx
        mov edx, dword ptr [esi + 0x30]
        push eax
        push ecx
        push edx
        mov ecx, esi
        call ext_008029A0
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x68
        ret 0x14
    }
}

// [0x00803FD0] sub_00803FD0 (484 bytes)
extern "C" void ext_006A7250();
extern "C" void ext_00803BB0();
extern "C" double mem_0092A278;
extern "C" double mem_00993830;
extern "C" __declspec(naked) float __cdecl fn_00803FD0(float* out, unsigned char* self) {
    __asm {
        mov ecx, dword ptr [esp+8]
        mov edx, dword ptr [ecx+0x1bc]
        sub esp, 0x18
        push ebx
        push esi
        xor eax, eax
        cmp edx, 0xe
        push edi
        jne L_3FF0
        mov ebx, ecx
        mov eax, 1
        jmp L_3FF4
    L_3FF0:
        mov ebx, dword ptr [esp+0x2c]
    L_3FF4:
        lea esi, [eax+2*eax]
        add eax, 1
        cmp edx, 0xd
        lea edi, [ecx+8*esi]
        jne L_400B
        lea esi, [eax+2*eax]
        lea ebx, [ecx+8*esi]
        add eax, 1
    L_400B:
        lea esi, [eax+2*eax]
        add eax, 1
        cmp edx, 0xb
        lea esi, [ecx+8*esi]
        jne L_4022
        lea ebx, [eax+2*eax]
        lea ebx, [ecx+8*ebx]
        add eax, 1
    L_4022:
        cmp edx, 7
        lea eax, [eax+2*eax]
        lea eax, [ecx+8*eax]
        jne L_4030
        lea ebx, [eax+0x18]
    L_4030:
        fld dword ptr [edi]
        fsub dword ptr [esi]
        fstp dword ptr [esp+0xc]
        fld dword ptr [edi+4]
        fsub dword ptr [esi+4]
        fstp dword ptr [esp+0x10]
        fld dword ptr [edi+8]
        mov edi, dword ptr [esp+0x28]
        fsub dword ptr [esi+8]
        fstp dword ptr [esp+0x14]
        fld dword ptr [eax]
        fsub dword ptr [esi]
        fstp dword ptr [esp+0x18]
        fld dword ptr [eax+4]
        fsub dword ptr [esi+4]
        fstp dword ptr [esp+0x1c]
        fld dword ptr [eax+8]
        fsub dword ptr [esi+8]
        fstp dword ptr [esp+0x20]
        fld dword ptr [esp+0x20]
        fld st(0)
        fld dword ptr [esp+0x10]
        fld st(0)
        fmulp st(2), st
        fld dword ptr [esp+0x1c]
        fld st(0)
        fld dword ptr [esp+0x14]
        fld st(0)
        fmulp st(2), st
        fxch st(4)
        fsubrp st(1), st
        fstp dword ptr [esp+0x2c]
        fld dword ptr [esp+0x2c]
        fst dword ptr [edi]
        fld dword ptr [esp+0x18]
        fld st(0)
        fmulp st(5), st
        fld dword ptr [esp+0xc]
        fld st(0)
        fmulp st(7), st
        fxch st(5)
        fsubrp st(6), st
        fxch st(5)
        fstp dword ptr [esp+0x2c]
        fld dword ptr [esp+0x2c]
        fst dword ptr [edi+4]
        fxch st(2)
        fmulp st(4), st
        fxch st(2)
        fmulp st(4), st
        fxch st(2)
        fsubrp st(3), st
        fxch st(2)
        fstp dword ptr [esp+0x2c]
        fld dword ptr [esp+0x2c]
        fst dword ptr [edi+8]
        fld st(2)
        fmulp st(3), st
        fxch st(2)
        fadd qword ptr [mem_0092A278]
        fstp dword ptr [esp+0x2c]
        fld st(0)
        fmulp st(1), st
        fadd dword ptr [esp+0x2c]
        fstp dword ptr [esp+0x2c]
        fld st(0)
        fmulp st(1), st
        fadd dword ptr [esp+0x2c]
        fstp dword ptr [esp+0x2c]
        fld dword ptr [esp+0x2c]
        call ext_006A7250
        fstp dword ptr [esp+0x2c]
        fld dword ptr [esp+0x2c]
        fstp dword ptr [esp+0x2c]
        fldz
        fld st(0)
        fld dword ptr [esp+0x2c]
        fucom st(1)
        fnstsw ax
        fstp st(1)
        test ah, 0x44
        jp L_4138
        fstp st(0)
        lea eax, [esp+0xc]
        fstp st(0)
        call ext_00803BB0
        fld dword ptr [esp+0x2c]
        pop edi
        pop esi
        pop ebx
        add esp, 0x18
        ret
    L_4138:
        fld dword ptr [ebx]
        fsub dword ptr [esi]
        fstp dword ptr [esp+0xc]
        fld dword ptr [ebx+4]
        fsub dword ptr [esi+4]
        fstp dword ptr [esp+0x10]
        fld dword ptr [ebx+8]
        fsub dword ptr [esi+8]
        fstp dword ptr [esp+0x14]
        fld dword ptr [edi+4]
        fmul dword ptr [esp+0x10]
        fld dword ptr [edi]
        fmul dword ptr [esp+0xc]
        faddp st(1), st
        fld dword ptr [edi+8]
        fmul dword ptr [esp+0x14]
        faddp st(1), st
        fstp dword ptr [esp+0x2c]
        fld dword ptr [esp+0x2c]
        fcomp st(2)
        fnstsw ax
        fstp st(1)
        test ah, 0x41
        fld st(0)
        jne L_4189
        fdivr qword ptr [mem_00993830]
        jmp L_418D
    L_4189:
        fld1
        fdivrp st(1), st
    L_418D:
        fstp dword ptr [esp+0x2c]
        fld dword ptr [edi]
        fld dword ptr [esp+0x2c]
        fld st(0)
        fmulp st(2), st
        fxch st(1)
        fstp dword ptr [edi]
        fld dword ptr [edi+4]
        fmul st, st(1)
        fstp dword ptr [edi+4]
        fmul dword ptr [edi+8]
        fstp dword ptr [edi+8]
        pop edi
        pop esi
        pop ebx
        add esp, 0x18
        ret
    }
}

// [0x008041C0] sub_008041C0 (405 bytes)
extern "C" void ext_00803BB0();
extern "C" void ext_00803FD0();
extern "C" int mem_0094CE80;
extern "C" int mem_00993838;

extern "C" __declspec(naked) void __fastcall fn_008041C0(void* self) {
    __asm {
        fld dword ptr [esp + 0x8]
        sub esp, 0xc
        push ebp
        mov ebp, dword ptr [esp + 0x1c]
        fld dword ptr [ebp + 0x1b8]
        fcompp
        fnstsw ax
        test ah, 0x5
        jnp L_00804350
        mov eax, dword ptr [ebp + 0x1bc]
        test eax, eax
        je L_00804350
        cmp eax, 0x7
        je L_00804205
        cmp eax, 0xb
        je L_00804205
        cmp eax, 0xd
        je L_00804205
        cmp eax, 0xe
        jne L_008042bf
    L_00804205:
        lea eax, [esp + 0x4]
        push ebp
        push eax
        call ext_00803FD0
        fstp dword ptr [esp + 0x20]
        fld dword ptr [mem_0094CE80]
        add esp, 0x8
        fld dword ptr [esp + 0x18]
        fcom st(1)
        fnstsw ax
        fstp st(1)
        test ah, 0x41
        jne L_008042bd
        mov ecx, dword ptr [esp + 0x14]
        fld dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x4]
        fld dword ptr [esp + 0xc]
        fld dword ptr [ecx]
        fmul st, st(2)
        fld dword ptr [ecx + 0x4]
        fmul st, st(4)
        faddp st(1), st
        fld dword ptr [ecx + 0x8]
        fmul st, st(2)
        faddp st(1), st
        fstp dword ptr [esp + 0x18]
        fld dword ptr [esp + 0x18]
        fcomp dword ptr [mem_00993838]
        fnstsw ax
        test ah, 0x5
        jp L_00804294
        fld qword ptr [mem_00993830]
        pop ebp
        fdivrp st(4), st
        fxch st(3)
        fstp dword ptr [esp + 0x14]
        fld dword ptr [esp + 0x14]
        fld st(0)
        fmulp st(2), st
        fxch st(1)
        fstp dword ptr [ecx]
        fld st(0)
        fmulp st(2), st
        fxch st(1)
        fstp dword ptr [ecx + 0x4]
        fmulp st(1), st
        fstp dword ptr [ecx + 0x8]
        add esp, 0xc
        ret
    L_00804294:
        fld1
        pop ebp
        fdivrp st(4), st
        fxch st(3)
        fstp dword ptr [esp + 0x14]
        fld dword ptr [esp + 0x14]
        fld st(0)
        fmulp st(2), st
        fxch st(1)
        fstp dword ptr [ecx]
        fld st(0)
        fmulp st(2), st
        fxch st(1)
        fstp dword ptr [ecx + 0x4]
        fmulp st(1), st
        fstp dword ptr [ecx + 0x8]
        add esp, 0xc
        ret
    L_008042bd:
        fstp st(0)
    L_008042bf:
        fldz
        mov edx, dword ptr [ebp + 0x1bc]
        push ebx
        fstp dword ptr [esp + 0x1c]
        push esi
        mov ecx, 0x1
        xor ebx, ebx
        xor esi, esi
        cmp edx, ecx
        push edi
        jl L_0080433d
        fldz
        lea edi, [ebp + 0x8]
    L_008042e0:
        _emit 0x85
        _emit 0xd1
        je L_0080432f
        fld dword ptr [edi - 0x4]
        fld dword ptr [edi - 0x8]
        fld dword ptr [edi]
        fld st(1)
        fmulp st(2), st
        fxch st(1)
        fadd st, st(3)
        fstp dword ptr [esp + 0x28]
        fld dword ptr [esp + 0x28]
        fld st(2)
        fmulp st(3), st
        faddp st(2), st
        fxch st(1)
        fstp dword ptr [esp + 0x28]
        fld st(0)
        fmulp st(1), st
        fadd dword ptr [esp + 0x28]
        fstp dword ptr [esp + 0x28]
        fld dword ptr [esp + 0x28]
        fld dword ptr [esp + 0x24]
        fcomp st(1)
        fnstsw ax
        test ah, 0x5
        jp L_0080432d
        fstp dword ptr [esp + 0x24]
        mov ebx, esi
        jmp L_0080432f
    L_0080432d:
        fstp st(0)
    L_0080432f:
        add ecx, ecx
        add esi, 0x1
        add edi, 0x18
        cmp ecx, edx
        jle L_008042e0
        fstp st(0)
    L_0080433d:
        mov edi, dword ptr [esp + 0x20]
        lea ecx, [ebx + 2*ebx]
        lea eax, [ebp + 8*ecx]
        call ext_00803BB0
        pop edi
        pop esi
        pop ebx
    L_00804350:
        pop ebp
        add esp, 0xc
        ret
    }
}

extern "C" void ext_007D9680();
extern "C" int mem_0099EEF0;
extern "C" int mem_00984B6C;
extern "C" int mem_00984B8C;
extern "C" int mem_00984C88;
extern "C" int mem_00985608;
extern "C" int mem_0099EEE0;
extern "C" int mem_0099EED0;
extern "C" int mem_0099EEC8;
extern "C" int mem_0099EEC0;

// [0x00802600] sub_00802600 (682 bytes)
extern "C" __declspec(naked) void __fastcall fn_00802600(void* self) {
    __asm {
        sub	esp, 0x1c
        push	ebx
        push	ebp
        push	esi
        mov	esi, ecx
        mov	ecx, dword ptr [esp + 0x2c]
        lea	eax, [ecx + 0x3]
        sar	eax, 0x2
        mov	dword ptr [esi + 0x8], eax
        add	eax, eax
        add	eax, eax
        mov	dword ptr [esi + 0xc], eax
        mov	eax, 0x2aaaaaab
        imul	ecx
        sar	edx, 1
        mov	eax, edx
        shr	eax, 0x1f
        add	eax, edx
        lea	edx, [eax + 2*eax]
        add	edx, edx
        add	edx, edx
        mov	eax, ecx
        sub	eax, edx
        push	edi
        mov	dword ptr [esi + 0x4], ecx
        mov	edx, ecx
        je L_00802644
        sub	edx, eax
        add	edx, 0xc
    L_00802644:
        and	edx, 0x8000000f
        jns L_00802651
        dec	edx
        or	edx, -0x10
        inc	edx
    L_00802651:
        jne L_0080265e
        test	eax, eax
        je L_00802686
        sub	ecx, eax
        add	ecx, 0xc
        jmp L_00802686
    L_0080265e:
        test	eax, eax
        mov	edx, ecx
        je L_00802672
        sub	edx, eax
        add	edx, 0xc
        test	eax, eax
        je L_00802672
        sub	ecx, eax
        add	ecx, 0xc
    L_00802672:
        and	ecx, 0x8000000f
        jns L_0080267f
        dec	ecx
        or	ecx, -0x10
        inc	ecx
    L_0080267f:
        sub	edx, ecx
        add	edx, 0x10
        mov	ecx, edx
    L_00802686:
        mov	ebx, dword ptr [esp + 0x34]
        lea	edx, [4*ecx]
        mov	eax, edx
        and	eax, 0x3f
        mov	dword ptr [esi + 0x14], ecx
        mov	dword ptr [esi], ecx
        mov	dword ptr [esi + 0x1c], ebx
        mov	dword ptr [esp + 0x30], edx
        jne L_008026a8
        mov	edi, edx
        jmp L_008026b1
    L_008026a8:
        lea	edi, [4*ecx + 0x40]
        sub	edi, eax
    L_008026b1:
        add	edi, 0x40
        test	eax, eax
        mov	dword ptr [esp + 0x34], edi
        jne L_008026c0
        mov	edi, edx
        jmp L_008026c9
    L_008026c0:
        lea	edi, [4*ecx + 0x40]
        sub	edi, eax
    L_008026c9:
        add	edi, 0x40
        test	eax, eax
        mov	dword ptr [esp + 0x10], edi
        jne L_008026d8
        mov	edi, edx
        jmp L_008026e1
    L_008026d8:
        lea	edi, [4*ecx + 0x40]
        sub	edi, eax
    L_008026e1:
        add	edi, 0x40
        test	eax, eax
        mov	dword ptr [esp + 0x14], edi
        jne L_008026f0
        mov	edi, edx
        jmp L_008026f9
    L_008026f0:
        lea	edi, [4*ecx + 0x40]
        sub	edi, eax
    L_008026f9:
        add	edi, 0x40
        test	eax, eax
        mov	dword ptr [esp + 0x18], edi
        jne L_00802708
        mov	edi, edx
        jmp L_00802711
    L_00802708:
        lea	edi, [4*ecx + 0x40]
        sub	edi, eax
    L_00802711:
        add	edi, 0x40
        test	eax, eax
        mov	dword ptr [esp + 0x1c], edi
        jne L_00802720
        mov	edi, edx
        jmp L_00802729
    L_00802720:
        lea	edi, [4*ecx + 0x40]
        sub	edi, eax
    L_00802729:
        add	edi, 0x40
        test	eax, eax
        mov	dword ptr [esp + 0x20], edi
        je L_0080273d
        lea	edx, [4*ecx + 0x40]
        sub	edx, eax
    L_0080273d:
        add	edx, 0x40
        mov	dword ptr [esp + 0x24], edx
        mov	edx, ecx
        imul	edx, ecx
        lea	ebp, [4*edx]
        mov	edi, ebp
        and	edi, 0x3f
        je L_00802760
        lea	ebp, [4*edx + 0x40]
        sub	ebp, edi
    L_00802760:
        add	ebp, 0x40
        test	eax, eax
        mov	dword ptr [esp + 0x28], ebp
        jne L_00802771
        mov	ebp, dword ptr [esp + 0x30]
        jmp L_0080277a
    L_00802771:
        lea	ebp, [4*ecx + 0x40]
        sub	ebp, eax
    L_0080277a:
        mov	edi, dword ptr [esp + 0x38]
        mov	eax, dword ptr [esp + 0x34]
        push	edi
        push offset mem_0099EEF0
        push	eax
        push	ebx
        call ext_007D9680
        mov	ecx, dword ptr [esp + 0x20]
        push	edi
        push offset mem_00984B6C
        push	ecx
        push	ebx
        mov	dword ptr [esi + 0x24], eax
        call ext_007D9680
        mov	edx, dword ptr [esp + 0x34]
        push	edi
        push offset mem_00984B8C
        push	edx
        push	ebx
        mov	dword ptr [esi + 0x30], eax
        call ext_007D9680
        push	edi
        mov	dword ptr [esi + 0x34], eax
        mov	eax, dword ptr [esp + 0x4c]
        push offset mem_00984C88
        push	eax
        push	ebx
        call ext_007D9680
        mov	ecx, dword ptr [esp + 0x5c]
        add	esp, 0x40
        push	edi
        push offset mem_00985608
        push	ecx
        push	ebx
        mov	dword ptr [esi + 0x38], eax
        call ext_007D9680
        mov	edx, dword ptr [esp + 0x30]
        push	edi
        push offset mem_0099EEE0
        push	edx
        push	ebx
        mov	dword ptr [esi + 0x3c], eax
        call ext_007D9680
        push	edi
        mov	dword ptr [esi + 0x40], eax
        mov	eax, dword ptr [esp + 0x48]
        push offset mem_0099EED0
        push	eax
        push	ebx
        call ext_007D9680
        mov	ecx, dword ptr [esp + 0x58]
        push	edi
        push offset mem_0099EEC8
        push	ecx
        push	ebx
        mov	dword ptr [esi + 0x44], eax
        call ext_007D9680
        add	esp, 0x40
        push	edi
        push offset mem_0099EEC0
        add	ebp, 0x40
        push	ebp
        push	ebx
        mov	dword ptr [esi + 0x48], eax
        call ext_007D9680
        mov	edx, dword ptr [esi + 0x24]
        mov	ecx, dword ptr [esi + 0x30]
        add	edx, 0x3f
        and	edx, -0x40
        add	ecx, 0x3f
        and	ecx, -0x40
        mov	dword ptr [esi + 0x24], edx
        mov	edx, dword ptr [esi + 0x34]
        mov	dword ptr [esi + 0x30], ecx
        mov	ecx, dword ptr [esi + 0x38]
        add	edx, 0x3f
        and	edx, -0x40
        add	ecx, 0x3f
        add	esp, 0x10
        mov	dword ptr [esi + 0x34], edx
        and	ecx, -0x40
        mov	edx, dword ptr [esi + 0x3c]
        mov	dword ptr [esi + 0x38], ecx
        mov	ecx, dword ptr [esi + 0x40]
        add	edx, 0x3f
        add	ecx, 0x3f
        and	edx, -0x40
        and	ecx, -0x40
        mov	dword ptr [esi + 0x3c], edx
        mov	edx, dword ptr [esi + 0x44]
        mov	dword ptr [esi + 0x40], ecx
        mov	ecx, dword ptr [esi + 0x48]
        add	edx, 0x3f
        add	ecx, 0x3f
        and	edx, -0x40
        and	ecx, -0x40
        add	eax, 0x3f
        pop	edi
        and	eax, -0x40
        mov	dword ptr [esi + 0x44], edx
        mov	dword ptr [esi + 0x48], ecx
        mov	dword ptr [esi + 0x4c], eax
        pop	esi
        pop	ebp
        pop	ebx
        add	esp, 0x1c
        ret	0xc
    }
}


// [0x00804530] sub_00804530 (890 bytes)
extern "C" __declspec(naked) void __cdecl fn_00804530(void* self) {
    __asm {
        sub     esp,0x40
        mov     eax,dword ptr [esp+0x44]
        fld1    
        push    ebx
        mov     ebx,dword ptr [eax+0x1c0]
        push    ebp
        push    esi
        mov     esi,dword ptr [eax+0x1c4]
        lea     ecx,[ebx+esi*4]
        fstp    dword ptr [eax+ecx*4+0xb8]
        mov     ecx,dword ptr [eax+0x1bc]
        mov     ebp,0x1
        push    edi
        xor     edi,edi
        cmp     ecx,ebp
        lea     edx,[eax+0x78]
        mov     dword ptr [esp+0x20],esi
        mov     dword ptr [esp+0x14],edi
        mov     dword ptr [esp+0x2c],ebp
        jl      loc_00804790
        mov     dword ptr [esp+0x34],edx
        mov     dword ptr [esp+0x30],edx
        mov     dword ptr [esp+0x18],edx
        lea     edx,[edx+ebx*4]
        mov     dword ptr [esp+0x40],edx
        mov     dword ptr [esp+0x1c],edx
        mov     edi,edi
loc_00804590:
        _emit 0x85
        _emit 0xcd
        je      loc_00804756
        mov     esi,dword ptr [esp+0x18]
        fld     dword ptr [esi]
        mov     esi,dword ptr [esp+0x1c]
        fsub    dword ptr [esi]
        mov     ecx,ebp
        or      ecx,dword ptr [esp+0x20]
        lea     esi,[edi+ebx*4]
        add     ecx,ecx
        add     ecx,ecx
        lea     edx,[ecx+ebx*1]
        fstp    dword ptr [eax+edx*4+0xb8]
        lea     edx,[eax+edx*4+0xb8]
        add     ecx,edi
        mov     dword ptr [esp+0x48],edx
        lea     edx,[eax+0x78]
        lea     edi,[ebx+ebx*4]
        fld     dword ptr [edx+edi*4]
        lea     esi,[edx+esi*4]
        fsub    dword ptr [esi]
        lea     ecx,[eax+ecx*4+0xb8]
        mov     dword ptr [esp+0x4c],ecx
        mov     dword ptr [esp+0x38],esi
        fstp    dword ptr [ecx]
        mov     ecx,dword ptr [eax+0x1bc]
        mov     edi,0x1
        xor     esi,esi
        cmp     ecx,edi
        jl      loc_00804756
        mov     dword ptr [esp+0x54],edx
        mov     edx,dword ptr [esp+0x30]
        mov     dword ptr [esp+0x10],edx
        mov     edx,ebx
        lea     ebp,[eax+0x78]
        shl     edx,0x4
        add     edx,ebp
        mov     ebp,dword ptr [esp+0x34]
        mov     dword ptr [esp+0x28],ebp
        mov     ebp,dword ptr [esp+0x40]
        mov     dword ptr [esp+0x24],ebp
        mov     ebp,dword ptr [esp+0x2c]
        mov     dword ptr [esp+0x3c],edx
        _emit 0x8d
        _emit 0x9b
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
loc_00804630:
        _emit 0x85
        _emit 0xcf
        je      loc_00804728
        cmp     edi,ebp
        jge     loc_00804756
        mov     edx,edi
        or      edx,ebp
        lea     ebp,[esi+edx*4]
        fld     dword ptr [eax+ebp*4+0xb8]
        mov     ebp,dword ptr [esp+0x54]
        fld     dword ptr [ebp+0x0]
        mov     ebp,dword ptr [esp+0x24]
        fsub    dword ptr [ebp+0x0]
        mov     ebp,dword ptr [esp+0x14]
        mov     ecx,edx
        lea     edx,[ebp+edx*4+0x0]
        fmulp   st(1), st
        or      ecx,dword ptr [esp+0x20]
        fld     dword ptr [eax+edx*4+0xb8]
        mov     edx,dword ptr [esp+0x10]
        fld     dword ptr [edx]
        mov     edx,dword ptr [esp+0x1c]
        fsub    dword ptr [edx]
        add     ecx,ecx
        add     ecx,ecx
        lea     edx,[ecx+ebx*1]
        fmulp   st(1), st
        faddp   st(1), st
        fstp    dword ptr [esp+0x44]
        fld     dword ptr [esp+0x44]
        fstp    dword ptr [eax+edx*4+0xb8]
        mov     edx,edi
        or      edx,dword ptr [esp+0x20]
        add     edx,edx
        add     edx,edx
        lea     ebp,[edx+esi*1]
        fld     dword ptr [eax+ebp*4+0xb8]
        mov     ebp,dword ptr [esp+0x54]
        fld     dword ptr [ebp+0x0]
        mov     ebp,dword ptr [esp+0x28]
        fsub    dword ptr [ebp+0x0]
        mov     ebp,dword ptr [esp+0x38]
        add     edx,ebx
        fmulp   st(1), st
        fld     dword ptr [eax+edx*4+0xb8]
        mov     edx,dword ptr [esp+0x3c]
        fld     dword ptr [edx]
        fsub    dword ptr [ebp+0x0]
        mov     ebp,dword ptr [esp+0x14]
        add     ebp,ecx
        add     ecx,esi
        fmulp   st(1), st
        faddp   st(1), st
        fstp    dword ptr [esp+0x44]
        fld     dword ptr [esp+0x44]
        fstp    dword ptr [eax+ebp*4+0xb8]
        mov     ebp,dword ptr [esp+0x38]
        fld     dword ptr [ebp+0x0]
        mov     ebp,dword ptr [esp+0x48]
        fsub    dword ptr [edx]
        fmul    dword ptr [ebp+0x0]
        mov     ebp,dword ptr [esp+0x18]
        fld     dword ptr [ebp+0x0]
        mov     ebp,dword ptr [esp+0x10]
        fsub    dword ptr [ebp+0x0]
        mov     ebp,dword ptr [esp+0x4c]
        fmul    dword ptr [ebp+0x0]
        mov     ebp,dword ptr [esp+0x2c]
        faddp   st(1), st
        fstp    dword ptr [esp+0x44]
        fld     dword ptr [esp+0x44]
        fstp    dword ptr [eax+ecx*4+0xb8]
loc_00804728:
        mov     ecx,dword ptr [eax+0x1bc]
        add     dword ptr [esp+0x54],0x14
        add     dword ptr [esp+0x24],0x10
        add     dword ptr [esp+0x28],0x10
        add     dword ptr [esp+0x10],0x4
        add     edi,edi
        add     edx,0x4
        add     esi,0x1
        cmp     edi,ecx
        mov     dword ptr [esp+0x3c],edx
        jle     loc_00804630
loc_00804756:
        mov     edi,dword ptr [esp+0x14]
        add     dword ptr [esp+0x18],0x14
        add     dword ptr [esp+0x34],0x4
        mov     ecx,0x10
        add     dword ptr [esp+0x30],ecx
        add     dword ptr [esp+0x1c],ecx
        mov     ecx,dword ptr [eax+0x1bc]
        add     ebp,ebp
        add     edi,0x1
        cmp     ebp,ecx
        mov     dword ptr [esp+0x2c],ebp
        mov     dword ptr [esp+0x14],edi
        jle     loc_00804590
        mov     esi,dword ptr [esp+0x20]
loc_00804790:
        mov     ecx,dword ptr [eax+0x1bc]
        pop     edi
        or      ecx,esi
        cmp     ecx,0xf
        pop     esi
        pop     ebp
        pop     ebx
        jne     loc_008048a6
        cmp     dword ptr [eax+0x1c8],0x0
        jne     loc_008048a6
        fld     dword ptr [eax+0x8c]
        fsub    dword ptr [eax+0x88]
        fmul    dword ptr [eax+0x19c]
        fld     dword ptr [eax+0x9c]
        fsub    dword ptr [eax+0x98]
        fmul    dword ptr [eax+0x1a0]
        faddp   st(1), st
        fld     dword ptr [eax+0xac]
        fsub    dword ptr [eax+0xa8]
        fmul    dword ptr [eax+0x1a4]
        faddp   st(1), st
        fstp    dword ptr [eax+0x1a8]
        fld     dword ptr [eax+0x78]
        fsub    dword ptr [eax+0x7c]
        fmul    dword ptr [eax+0x188]
        fld     dword ptr [eax+0x98]
        fsub    dword ptr [eax+0x9c]
        fmul    dword ptr [eax+0x190]
        faddp   st(1), st
        fld     dword ptr [eax+0xa8]
        fsub    dword ptr [eax+0xac]
        fmul    dword ptr [eax+0x194]
        faddp   st(1), st
        fstp    dword ptr [eax+0x1ac]
        fld     dword ptr [eax+0x88]
        fsub    dword ptr [eax+0x90]
        fmul    dword ptr [eax+0x16c]
        fld     dword ptr [eax+0x78]
        fsub    dword ptr [eax+0x80]
        fmul    dword ptr [eax+0x168]
        faddp   st(1), st
        fld     dword ptr [eax+0xa8]
        fsub    dword ptr [eax+0xb0]
        fmul    dword ptr [eax+0x174]
        faddp   st(1), st
        fstp    dword ptr [eax+0x1b0]
        fld     dword ptr [eax+0x88]
        fsub    dword ptr [eax+0x94]
        fmul    dword ptr [eax+0x12c]
        fld     dword ptr [eax+0x78]
        fsub    dword ptr [eax+0x84]
        fmul    dword ptr [eax+0x128]
        faddp   st(1), st
        fld     dword ptr [eax+0x98]
        fsub    dword ptr [eax+0xa4]
        fmul    dword ptr [eax+0x130]
        faddp   st(1), st
        fstp    dword ptr [eax+0x1b4]
loc_008048a6:
        add     esp,0x40
        ret     

    }
}

// [0x00802FD0] sub_00802FD0 (995 bytes)
extern "C" __declspec(naked) void __fastcall fn_00802FD0(void* self) {
    __asm {
        mov	eax, dword ptr [esp + 0x18]
        push	ebx
        mov	ebx, dword ptr [esp + 0xc]
        push	ebp
        push	esi
        mov	esi, dword ptr [esp + 0x10]
        xor	edx, edx
        xor	ebp, ebp
        cmp	eax, 0x4
        push	edi
        jl loc_00803172
        mov	ebp, dword ptr [esp + 0x20]
        add	eax, -0x4
        shr	eax, 0x2
        add	eax, 0x1
        mov	dword ptr [esp + 0x14], eax
        add	eax, eax
        add	ebp, 0x8
        add	eax, eax
        mov	dword ptr [esp + 0x18], eax
        __asm _emit 0x8D __asm _emit 0xA4 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
loc_00803010:
        mov	edi, dword ptr [ebp - 0x8]
        mov	eax, dword ptr [ecx + 0x30]
        fld	dword ptr [eax + 4*edi]
        mov	eax, dword ptr [ecx + 0x3c]
        fld	dword ptr [eax + 4*edi]
        fcompp
        fnstsw	ax
        test	ah, 0x41
        jne SHORT loc_0080303b
        mov	dword ptr [esi + 4*edi], 0xffffffff
        mov	dword ptr [ebx + 4*edi], 0x0
        mov	edx, 0x1
loc_0080303b:
        mov	eax, dword ptr [ecx + 0x30]
        fld	dword ptr [eax + 4*edi]
        mov	eax, dword ptr [ecx + 0x38]
        fld	dword ptr [eax + 4*edi]
        fcompp
        fnstsw	ax
        test	ah, 0x5
        jp SHORT loc_00803063
        mov	dword ptr [esi + 4*edi], 0xffffffff
        mov	dword ptr [ebx + 4*edi], 0xffffffff
        mov	edx, 0x1
loc_00803063:
        mov	edi, dword ptr [ebp - 0x4]
        mov	eax, dword ptr [ecx + 0x30]
        fld	dword ptr [eax + 4*edi]
        mov	eax, dword ptr [ecx + 0x3c]
        fld	dword ptr [eax + 4*edi]
        fcompp
        fnstsw	ax
        test	ah, 0x41
        jne SHORT loc_0080308e
        mov	dword ptr [esi + 4*edi], 0xffffffff
        mov	dword ptr [ebx + 4*edi], 0x0
        mov	edx, 0x1
loc_0080308e:
        mov	eax, dword ptr [ecx + 0x30]
        fld	dword ptr [eax + 4*edi]
        mov	eax, dword ptr [ecx + 0x38]
        fld	dword ptr [eax + 4*edi]
        fcompp
        fnstsw	ax
        test	ah, 0x5
        jp SHORT loc_008030b6
        mov	dword ptr [esi + 4*edi], 0xffffffff
        mov	dword ptr [ebx + 4*edi], 0xffffffff
        mov	edx, 0x1
loc_008030b6:
        mov	edi, dword ptr [ebp]
        mov	eax, dword ptr [ecx + 0x30]
        fld	dword ptr [eax + 4*edi]
        mov	eax, dword ptr [ecx + 0x3c]
        fld	dword ptr [eax + 4*edi]
        fcompp
        fnstsw	ax
        test	ah, 0x41
        jne SHORT loc_008030e1
        mov	dword ptr [esi + 4*edi], 0xffffffff
        mov	dword ptr [ebx + 4*edi], 0x0
        mov	edx, 0x1
loc_008030e1:
        mov	eax, dword ptr [ecx + 0x30]
        fld	dword ptr [eax + 4*edi]
        mov	eax, dword ptr [ecx + 0x38]
        fld	dword ptr [eax + 4*edi]
        fcompp
        fnstsw	ax
        test	ah, 0x5
        jp SHORT loc_00803109
        mov	dword ptr [esi + 4*edi], 0xffffffff
        mov	dword ptr [ebx + 4*edi], 0xffffffff
        mov	edx, 0x1
loc_00803109:
        mov	edi, dword ptr [ebp + 0x4]
        mov	eax, dword ptr [ecx + 0x30]
        fld	dword ptr [eax + 4*edi]
        mov	eax, dword ptr [ecx + 0x3c]
        fld	dword ptr [eax + 4*edi]
        fcompp
        fnstsw	ax
        test	ah, 0x41
        jne SHORT loc_00803134
        mov	dword ptr [esi + 4*edi], 0xffffffff
        mov	dword ptr [ebx + 4*edi], 0x0
        mov	edx, 0x1
loc_00803134:
        mov	eax, dword ptr [ecx + 0x30]
        fld	dword ptr [eax + 4*edi]
        mov	eax, dword ptr [ecx + 0x38]
        fld	dword ptr [eax + 4*edi]
        fcompp
        fnstsw	ax
        test	ah, 0x5
        jp SHORT loc_0080315c
        mov	dword ptr [esi + 4*edi], 0xffffffff
        mov	dword ptr [ebx + 4*edi], 0xffffffff
        mov	edx, 0x1
loc_0080315c:
        add	ebp, 0x10
        sub	dword ptr [esp + 0x14], 0x1
        jne loc_00803010
        mov	ebp, dword ptr [esp + 0x18]
        mov	eax, dword ptr [esp + 0x28]
loc_00803172:
        cmp	ebp, eax
        jge SHORT loc_008031d6
loc_00803176:
        mov	eax, dword ptr [esp + 0x20]
        mov	edi, dword ptr [eax + 4*ebp]
        mov	eax, dword ptr [ecx + 0x30]
        fld	dword ptr [eax + 4*edi]
        mov	eax, dword ptr [ecx + 0x3c]
        fld	dword ptr [eax + 4*edi]
        fcompp
        fnstsw	ax
        test	ah, 0x41
        jne SHORT loc_008031a5
        mov	dword ptr [esi + 4*edi], 0xffffffff
        mov	dword ptr [ebx + 4*edi], 0x0
        mov	edx, 0x1
loc_008031a5:
        mov	eax, dword ptr [ecx + 0x30]
        fld	dword ptr [eax + 4*edi]
        mov	eax, dword ptr [ecx + 0x38]
        fld	dword ptr [eax + 4*edi]
        fcompp
        fnstsw	ax
        test	ah, 0x5
        jp SHORT loc_008031cd
        mov	dword ptr [esi + 4*edi], 0xffffffff
        mov	dword ptr [ebx + 4*edi], 0xffffffff
        mov	edx, 0x1
loc_008031cd:
        add	ebp, 0x1
        cmp	ebp, dword ptr [esp + 0x28]
        jl SHORT loc_00803176
loc_008031d6:
        mov	eax, dword ptr [esp + 0x24]
        xor	ebp, ebp
        cmp	eax, 0x4
        jl loc_0080334b
        mov	ebp, dword ptr [esp + 0x1c]
        add	eax, -0x4
        shr	eax, 0x2
        add	eax, 0x1
        mov	dword ptr [esp + 0x28], eax
        add	eax, eax
        add	ebp, 0x8
        add	eax, eax
        mov	dword ptr [esp + 0x18], eax
loc_00803201:
        mov	edi, dword ptr [ebp - 0x8]
        cmp	dword ptr [ebx + 4*edi], 0x0
        jne SHORT loc_0080322a
        mov	eax, dword ptr [ecx + 0x34]
        fld	dword ptr [eax + 4*edi]
        fld	dword ptr [ecx + 0x20]
        fchs
        fcompp
        fnstsw	ax
        test	ah, 0x41
        jne SHORT loc_0080322a
        mov	dword ptr [esi + 4*edi], 0x0
        mov	edx, 0x1
loc_0080322a:
        cmp	dword ptr [ebx + 4*edi], -0x1
        jne SHORT loc_0080324e
        mov	eax, dword ptr [ecx + 0x34]
        fld	dword ptr [eax + 4*edi]
        fld	dword ptr [ecx + 0x20]
        fcompp
        fnstsw	ax
        test	ah, 0x5
        jp SHORT loc_0080324e
        mov	dword ptr [esi + 4*edi], 0x0
        mov	edx, 0x1
loc_0080324e:
        mov	edi, dword ptr [ebp - 0x4]
        cmp	dword ptr [ebx + 4*edi], 0x0
        jne SHORT loc_00803277
        mov	eax, dword ptr [ecx + 0x34]
        fld	dword ptr [eax + 4*edi]
        fld	dword ptr [ecx + 0x20]
        fchs
        fcompp
        fnstsw	ax
        test	ah, 0x41
        jne SHORT loc_00803277
        mov	dword ptr [esi + 4*edi], 0x0
        mov	edx, 0x1
loc_00803277:
        cmp	dword ptr [ebx + 4*edi], -0x1
        jne SHORT loc_0080329b
        mov	eax, dword ptr [ecx + 0x34]
        fld	dword ptr [eax + 4*edi]
        fld	dword ptr [ecx + 0x20]
        fcompp
        fnstsw	ax
        test	ah, 0x5
        jp SHORT loc_0080329b
        mov	dword ptr [esi + 4*edi], 0x0
        mov	edx, 0x1
loc_0080329b:
        mov	edi, dword ptr [ebp]
        cmp	dword ptr [ebx + 4*edi], 0x0
        jne SHORT loc_008032c4
        mov	eax, dword ptr [ecx + 0x34]
        fld	dword ptr [eax + 4*edi]
        fld	dword ptr [ecx + 0x20]
        fchs
        fcompp
        fnstsw	ax
        test	ah, 0x41
        jne SHORT loc_008032c4
        mov	dword ptr [esi + 4*edi], 0x0
        mov	edx, 0x1
loc_008032c4:
        cmp	dword ptr [ebx + 4*edi], -0x1
        jne SHORT loc_008032e8
        mov	eax, dword ptr [ecx + 0x34]
        fld	dword ptr [eax + 4*edi]
        fld	dword ptr [ecx + 0x20]
        fcompp
        fnstsw	ax
        test	ah, 0x5
        jp SHORT loc_008032e8
        mov	dword ptr [esi + 4*edi], 0x0
        mov	edx, 0x1
loc_008032e8:
        mov	edi, dword ptr [ebp + 0x4]
        cmp	dword ptr [ebx + 4*edi], 0x0
        jne SHORT loc_00803311
        mov	eax, dword ptr [ecx + 0x34]
        fld	dword ptr [eax + 4*edi]
        fld	dword ptr [ecx + 0x20]
        fchs
        fcompp
        fnstsw	ax
        test	ah, 0x41
        jne SHORT loc_00803311
        mov	dword ptr [esi + 4*edi], 0x0
        mov	edx, 0x1
loc_00803311:
        cmp	dword ptr [ebx + 4*edi], -0x1
        jne SHORT loc_00803335
        mov	eax, dword ptr [ecx + 0x34]
        fld	dword ptr [eax + 4*edi]
        fld	dword ptr [ecx + 0x20]
        fcompp
        fnstsw	ax
        test	ah, 0x5
        jp SHORT loc_00803335
        mov	dword ptr [esi + 4*edi], 0x0
        mov	edx, 0x1
loc_00803335:
        add	ebp, 0x10
        sub	dword ptr [esp + 0x28], 0x1
        jne loc_00803201
        mov	ebp, dword ptr [esp + 0x18]
        mov	eax, dword ptr [esp + 0x24]
loc_0080334b:
        cmp	ebp, eax
        jge SHORT loc_008033aa
        nop
loc_00803350:
        mov	eax, dword ptr [esp + 0x1c]
        mov	edi, dword ptr [eax + 4*ebp]
        cmp	dword ptr [ebx + 4*edi], 0x0
        jne SHORT loc_0080337d
        mov	eax, dword ptr [ecx + 0x34]
        fld	dword ptr [eax + 4*edi]
        fld	dword ptr [ecx + 0x20]
        fchs
        fcompp
        fnstsw	ax
        test	ah, 0x41
        jne SHORT loc_0080337d
        mov	dword ptr [esi + 4*edi], 0x0
        mov	edx, 0x1
loc_0080337d:
        cmp	dword ptr [ebx + 4*edi], -0x1
        jne SHORT loc_008033a1
        mov	eax, dword ptr [ecx + 0x34]
        fld	dword ptr [eax + 4*edi]
        fld	dword ptr [ecx + 0x20]
        fcompp
        fnstsw	ax
        test	ah, 0x5
        jp SHORT loc_008033a1
        mov	dword ptr [esi + 4*edi], 0x0
        mov	edx, 0x1
loc_008033a1:
        add	ebp, 0x1
        cmp	ebp, dword ptr [esp + 0x24]
        jl SHORT loc_00803350
loc_008033aa:
        pop	edi
        pop	esi
        pop	ebp
        mov	eax, edx
        pop	ebx
        ret	0x18
    }
}

// [0x008034D0] sub_008034D0 (774 bytes)
extern "C" void ext_006A6E8C();
extern "C" void ext_007FE840();
extern "C" __declspec(naked) void __fastcall fn_008034D0(void* self) {
    __asm {
        sub esp, 6Ch
        push ebx
        push ebp
        push esi
        mov esi, ecx
        cmp dword ptr [esi+18h], 2
        push edi
        mov dword ptr [esp+48h], 0099ece4h
        mov dword ptr [esp+14h], 0099ed0ch
        lea edi, [esp+14h]
        je L_8034F7
        lea edi, [esp+48h]
L_8034F7:
        mov ecx, dword ptr [esp+94h]
        mov edx, dword ptr [esi+1Ch]
        mov eax, dword ptr [edi]
        mov ebx, dword ptr [esp+84h]
        mov eax, dword ptr [eax]
        push ecx
        push edx
        push ebx
        mov ecx, edi
        call eax
        mov ecx, dword ptr [esi+8]
        mov ebp, dword ptr [esp+8Ch]
        mov edx, dword ptr [esp+88h]
        mov eax, dword ptr [esp+80h]
        push ecx
        mov ecx, dword ptr [esi+44h]
        push ebp
        push ebx
        push edx
        mov edx, dword ptr [esp+0A0h]
        push eax
        mov eax, dword ptr [esi+28h]
        push ecx
        mov ecx, dword ptr [esi+4Ch]
        push edx
        push eax
        push ecx
        mov ecx, edi
        call ext_007FE840
        mov edx, dword ptr [edi]
        mov eax, dword ptr [edx+0Ch]
        mov ecx, edi
        call eax
        mov eax, dword ptr [esi+4Ch]
        mov edx, dword ptr [edi]
        push eax
        push eax
        mov eax, dword ptr [edx+10h]
        mov ecx, edi
        call eax
        mov eax, dword ptr [esi+4]
        mov ecx, dword ptr [esi+0Ch]
        mov edx, dword ptr [esi+30h]
        sub ecx, eax
        add ecx, ecx
        add ecx, ecx
        push ecx
        lea eax, [edx+eax*4]
        push 0
        push eax
        call ext_006A6E8C
        add esp, 0Ch
        xor edx, edx
        cmp ebp, 4
        jl L_803603
        mov eax, dword ptr [esp+88h]
        lea edi, [ebp-4]
        shr edi, 2
        add eax, 8
        add edi, 1
        lea edx, [edi*4]
L_8035A1:
        mov ecx, dword ptr [eax-8]
        mov ebx, dword ptr [esi+44h]
        mov ebp, dword ptr [esi+30h]
        add ecx, ecx
        add ecx, ecx
        fld dword ptr [ecx+ebx]
        add eax, 10h
        fstp dword ptr [ecx+ebp]
        mov ecx, dword ptr [eax-14h]
        mov ebx, dword ptr [esi+44h]
        mov ebp, dword ptr [esi+30h]
        add ecx, ecx
        add ecx, ecx
        fld dword ptr [ecx+ebx]
        fstp dword ptr [ecx+ebp]
        mov ecx, dword ptr [eax-10h]
        mov ebx, dword ptr [esi+44h]
        mov ebp, dword ptr [esi+30h]
        add ecx, ecx
        add ecx, ecx
        fld dword ptr [ecx+ebx]
        fstp dword ptr [ecx+ebp]
        mov ecx, dword ptr [eax-0Ch]
        mov ebx, dword ptr [esi+44h]
        mov ebp, dword ptr [esi+30h]
        add ecx, ecx
        add ecx, ecx
        sub edi, 1
        fld dword ptr [ecx+ebx]
        fstp dword ptr [ecx+ebp]
        jne L_8035A1
        mov ebx, dword ptr [esp+84h]
        mov ebp, dword ptr [esp+8Ch]
L_803603:
        cmp edx, ebp
        jge L_803631
        jmp L_803610
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
L_803610:
        mov ecx, dword ptr [esp+88h]
        mov eax, dword ptr [ecx+edx*4]
        mov ecx, dword ptr [esi+44h]
        mov edi, dword ptr [esi+30h]
        add eax, eax
        add eax, eax
        fld dword ptr [eax+ecx]
        add edx, 1
        cmp edx, ebp
        fstp dword ptr [eax+edi]
        jl L_803610
L_803631:
        xor eax, eax
        cmp ebx, 4
        jl L_8036F6
        mov ecx, dword ptr [esp+80h]
        mov edx, 4
        sub edx, ecx
        mov dword ptr [esp+94h], edx
        lea eax, [ecx+8]
        mov edx, 0FFFFFFF8h
        sub edx, ecx
        lea ecx, [ebx-4]
        shr ecx, 2
        add ecx, 1
        lea edi, [ecx*4]
        mov dword ptr [esp+88h], 8
        mov dword ptr [esp+8Ch], edx
        mov dword ptr [esp+10h], edi
        jmp L_80368A
L_803683:
        mov edx, dword ptr [esp+8Ch]
L_80368A:
        mov edi, dword ptr [esi+4Ch]
        mov ebx, dword ptr [eax-8]
        mov ebp, dword ptr [esi+30h]
        add edx, eax
        fld dword ptr [edx+edi]
        fstp dword ptr [ebp+ebx*4]
        mov edi, dword ptr [esi+4Ch]
        fld dword ptr [edx+edi+4]
        mov ebx, dword ptr [eax-4]
        mov ebp, dword ptr [esi+30h]
        fstp dword ptr [ebp+ebx*4]
        mov edx, dword ptr [esi+4Ch]
        mov ebp, dword ptr [esp+88h]
        fld dword ptr [edx+ebp]
        mov edi, dword ptr [eax]
        mov ebx, dword ptr [esi+30h]
        mov edx, dword ptr [esp+94h]
        fstp dword ptr [ebx+edi*4]
        mov edi, dword ptr [esi+4Ch]
        mov ebx, dword ptr [eax+4]
        mov ebp, dword ptr [esi+30h]
        add dword ptr [esp+88h], 10h
        add edx, eax
        fld dword ptr [edx+edi]
        add eax, 10h
        sub ecx, 1
        fstp dword ptr [ebp+ebx*4]
        jne L_803683
        mov eax, dword ptr [esp+10h]
        mov ebx, dword ptr [esp+84h]
L_8036F6:
        cmp eax, ebx
        jge L_80371D
        __asm _emit 0x8D
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
L_803700:
        mov ecx, dword ptr [esi+4Ch]
        mov edx, dword ptr [esp+80h]
        fld dword ptr [ecx+eax*4]
        mov edx, dword ptr [edx+eax*4]
        mov edi, dword ptr [esi+30h]
        add eax, 1
        fstp dword ptr [edi+edx*4]
        cmp eax, ebx
        jl L_803700
L_80371D:
        mov edx, dword ptr [esi+30h]
        mov ecx, dword ptr [esi+28h]
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax+14h]
        push edx
        mov edx, dword ptr [esi+34h]
        push edx
        call eax
        xor eax, eax
        cmp dword ptr [esi+4], eax
        jle L_80375D
        jmp L_803740
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x90
L_803740:
        mov ecx, dword ptr [esi+34h]
        fld dword ptr [ecx+eax*4]
        mov edx, dword ptr [esp+90h]
        fsub dword ptr [edx+eax*4]
        lea ecx, [ecx+eax*4]
        add eax, 1
        fstp dword ptr [ecx]
        cmp eax, dword ptr [esi+4]
        jl L_803740
L_80375D:
        fldz
        xor edx, edx
        cmp ebx, 4
        jl L_8037AF
        mov eax, dword ptr [esp+80h]
        lea ecx, [ebx-4]
        shr ecx, 2
        add eax, 8
        add ecx, 1
        lea edx, [ecx*4]
L_803780:
        mov edi, dword ptr [eax-8]
        mov ebp, dword ptr [esi+34h]
        fst dword ptr [ebp+edi*4]
        mov edi, dword ptr [eax-4]
        mov ebp, dword ptr [esi+34h]
        fst dword ptr [ebp+edi*4]
        mov edi, dword ptr [eax]
        mov ebp, dword ptr [esi+34h]
        fst dword ptr [ebp+edi*4]
        mov edi, dword ptr [eax+4]
        mov ebp, dword ptr [esi+34h]
        add eax, 10h
        fst dword ptr [ebp+edi*4]
        sub ecx, 1
        jne L_803780
L_8037AF:
        cmp edx, ebx
        jge L_8037CA
L_8037B3:
        mov eax, dword ptr [esp+80h]
        mov ecx, dword ptr [eax+edx*4]
        mov eax, dword ptr [esi+34h]
        add edx, 1
        fst dword ptr [eax+ecx*4]
        cmp edx, ebx
        jl L_8037B3
L_8037CA:
        pop edi
        fstp st(0)
        pop esi
        pop ebp
        pop ebx
        add esp, 6Ch
        ret 18h
    }
}


// [0x008037E0] sub_008037E0 (403 bytes)
extern "C" void ext_008033C0();
extern "C" void ext_008034D0();
extern "C" __declspec(naked) void __fastcall fn_008037E0(void* self) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0x18]
        push ebp
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x4]
        cmp ebx, ecx
        push edi
        jne L_8038CD
        mov edx, dword ptr [esi + 0x44]
        mov ecx, dword ptr [esi + 0x28]
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0x14]
        push edx
        mov edx, dword ptr [esi + 0x34]
        push edx
        call eax
        mov ecx, dword ptr [esp + 0x20]
        xor edi, edi
        cmp ebx, 0x4
        jl L_803881
        lea edx, [ebx - 0x4]
        shr edx, 0x2
        add edx, 0x1
        lea eax, [ecx + 0x8]
        lea edi, [4*edx]
L_803825:
        mov ecx, dword ptr [eax - 0x8]
        mov ebx, dword ptr [esi + 0x44]
        mov ebp, dword ptr [esi + 0x30]
        add ecx, ecx
        add ecx, ecx
        fld dword ptr [ecx + ebx]
        add eax, 0x10
        fstp dword ptr [ecx + ebp]
        mov ecx, dword ptr [eax - 0x14]
        mov ebx, dword ptr [esi + 0x44]
        mov ebp, dword ptr [esi + 0x30]
        add ecx, ecx
        add ecx, ecx
        fld dword ptr [ecx + ebx]
        fstp dword ptr [ecx + ebp]
        mov ecx, dword ptr [eax - 0x10]
        mov ebx, dword ptr [esi + 0x44]
        mov ebp, dword ptr [esi + 0x30]
        add ecx, ecx
        add ecx, ecx
        fld dword ptr [ecx + ebx]
        fstp dword ptr [ecx + ebp]
        mov ecx, dword ptr [eax - 0xc]
        mov ebx, dword ptr [esi + 0x44]
        mov ebp, dword ptr [esi + 0x30]
        add ecx, ecx
        add ecx, ecx
        sub edx, 0x1
        fld dword ptr [ecx + ebx]
        fstp dword ptr [ecx + ebp]
        jne L_803825
        mov ecx, dword ptr [esp + 0x20]
        mov ebx, dword ptr [esp + 0x24]
L_803881:
        cmp edi, ebx
        jge L_80389F
L_803885:
        mov eax, dword ptr [ecx + 4*edi]
        mov edx, dword ptr [esi + 0x44]
        mov ebp, dword ptr [esi + 0x30]
        add eax, eax
        add eax, eax
        fld dword ptr [eax + edx]
        add edi, 0x1
        cmp edi, ebx
        fstp dword ptr [eax + ebp]
        jl L_803885
L_80389F:
        xor eax, eax
        cmp dword ptr [esi + 0x4], eax
        jle L_80396C
        mov edx, dword ptr [esp + 0x14]
        mov edi, edi
L_8038B0:
        mov ecx, dword ptr [esi + 0x34]
        fld dword ptr [ecx + 4*eax]
        lea ecx, [ecx + 4*eax]
        fsub dword ptr [edx + 4*eax]
        add eax, 0x1
        fstp dword ptr [ecx]
        cmp eax, dword ptr [esi + 0x4]
        jl L_8038B0
L_8038C6:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x18
L_8038CD:
        xor eax, eax
        test ebx, ebx
        jne L_80390B
        test ecx, ecx
        jle L_8038EB
L_8038D7:
        mov edx, dword ptr [esi + 0x40]
        fld dword ptr [edx + 4*eax]
        mov ecx, dword ptr [esi + 0x30]
        fstp dword ptr [ecx + 4*eax]
        add eax, 0x1
        cmp eax, dword ptr [esi + 0x4]
        jl L_8038D7
L_8038EB:
        xor eax, eax
        cmp dword ptr [esi + 0x4], eax
        jle L_80396C
        fldz
L_8038F4:
        mov edx, dword ptr [esi + 0x34]
        fst dword ptr [edx + 4*eax]
        add eax, 0x1
        cmp eax, dword ptr [esi + 0x4]
        jl L_8038F4
        pop edi
        fstp st(0)
        pop esi
        pop ebp
        pop ebx
        ret 0x18
L_80390B:
        mov ecx, dword ptr [esp + 0x20]
        xor edi, edi
        test ebx, ebx
        jle L_803933
        mov edx, dword ptr [esi + 0x24]
        jmp L_803920
        __asm _emit 0x8D __asm _emit 0x9B __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
L_803920:
        mov ebp, dword ptr [ecx + 4*eax]
        cmp dword ptr [edx + 4*ebp], 0x0
        jne L_80392C
        add edi, 0x1
L_80392C:
        add eax, 0x1
        cmp eax, ebx
        jl L_803920
L_803933:
        mov eax, dword ptr [esp + 0x1c]
        mov edx, dword ptr [esp + 0x28]
        add edi, ebx
        cmp edi, eax
        push edx
        jle L_80395D
        mov edx, dword ptr [esp + 0x18]
        push edx
        push ebx
        push ecx
        push eax
        mov eax, dword ptr [esp + 0x2c]
        push eax
        mov ecx, esi
        call ext_008034D0
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x18
L_80395D:
        push ebx
        push ecx
        push eax
        mov eax, dword ptr [esp + 0x28]
        push eax
        mov ecx, esi
        call ext_008033C0
L_80396C:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x18
    }
}

// [0x008023C0] sub_008023C0 (567 bytes)
extern "C" void ext_004D3930();
extern "C" void ext_006A6E8C();
extern "C" void ext_006A6EC0();
extern "C" void ext_006A745E();
extern "C" void ext_007D95F0();
extern "C" void ext_007D9610();
extern "C" void ext_00802320();
extern "C" void ext_00802B80();
extern "C" void ext_00802B90();
extern "C" void ext_00802D40();
extern "C" void ext_00802D90();
extern "C" void ext_00802E10();
extern "C" void ext_00802E90();
extern "C" void ext_00802FD0();
extern "C" void ext_008037E0();
extern "C" int mem_00AA7E40;

extern "C" __declspec(naked) void __fastcall fn_008023C0(void* self) {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0x34
        mov eax, dword ptr [mem_00AA7E40]
        xor eax, ebp
        mov dword ptr [ebp - 0x4], eax
        push ebx
        push esi
        push edi
        mov esi, ecx
        mov edi, dword ptr [esi + 0x4]
        add edi, edi
        add edi, edi
        mov eax, edi
        call ext_006A6EC0
        mov eax, edi
        mov ebx, esp
        call ext_006A6EC0
        mov eax, edi
        mov dword ptr [ebp - 0x30], esp
        call ext_006A6EC0
        mov eax, edi
        mov dword ptr [ebp - 0x10], esp
        call ext_006A6EC0
        mov eax, edi
        mov dword ptr [ebp - 0xc], esp
        call ext_006A6EC0
        mov eax, edi
        mov dword ptr [ebp - 0x20], esp
        call ext_006A6EC0
        fld dword ptr [ebp + 0x20]
        mov eax, dword ptr [ebp + 0x1c]
        fstp dword ptr [esi + 0x20]
        mov ecx, dword ptr [ebp + 0x8]
        mov dword ptr [esi + 0x18], eax
        mov eax, dword ptr [ebp + 0xc]
        mov dword ptr [ebp - 0x18], esp
        push eax
        mov eax, dword ptr [esi + 0x30]
        mov dword ptr [esi + 0x28], ecx
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x10]
        push eax
        call edx
        mov eax, dword ptr [ebp + 0x14]
        push eax
        mov ecx, esi
        call ext_004D3930
        mov ecx, dword ptr [ebp + 0x10]
        push ecx
        mov ecx, esi
        call ext_00802B80
        mov ecx, esi
        call ext_00802B90
        cmp eax, dword ptr [esi + 0x4]
        je loc_008025DF
        mov ecx, esi
        call ext_00802D40
        mov edi, dword ptr [ebp - 0x30]
        push edi
        push ebx
        mov ecx, esi
        call ext_00802D90
        mov edx, dword ptr [esi + 0x4]
        mov eax, dword ptr [esi + 0x24]
        add edx, edx
        add edx, edx
        push edx
        push 0x0
        push eax
        call ext_006A6E8C
        mov ecx, dword ptr [esi + 0x14]
        mov edx, dword ptr [esi + 0x44]
        add ecx, ecx
        add ecx, ecx
        push ecx
        push 0x0
        push edx
        call ext_006A6E8C
        xor eax, eax
        add esp, 0x18
        cmp dword ptr [ebp + 0x18], eax
        mov dword ptr [ebp - 0x8], eax
        mov dword ptr [ebp - 0x14], eax
        mov ecx, 0x1
        je loc_008025E1
        jmp loc_008024B5
    loc_008024B2:
        mov ecx, dword ptr [ebp - 0x24]
    loc_008024B5:
        cmp dword ptr [ebp - 0x14], 0x0
        jne loc_008025E1
        test ecx, ecx
        je loc_008025E1
        mov eax, dword ptr [esi + 0x1c]
        push eax
        call ext_007D95F0
        xor eax, eax
        add esp, 0x4
        cmp dword ptr [esi + 0x4], eax
        mov dword ptr [ebp - 0x2c], eax
        jle loc_0080252B
        mov eax, dword ptr [ebp - 0x10]
        mov ecx, dword ptr [ebp - 0xc]
        mov edx, ebx
        sub edx, eax
        sub edi, eax
        mov dword ptr [ebp - 0x34], edx
        mov dword ptr [ebp - 0x24], edi
        sub ecx, eax
        jmp loc_008024F6
    loc_008024F3:
        mov edx, dword ptr [ebp - 0x34]
    loc_008024F6:
        mov edx, dword ptr [edx + eax]
        mov edi, dword ptr [eax]
        and edx, 0x1
        lea edx, [edx + 2*edi]
        mov dword ptr [eax], edx
        mov edx, dword ptr [ebp - 0x24]
        mov edx, dword ptr [edx + eax]
        mov edi, dword ptr [ecx + eax]
        and edx, 0x1
        lea edx, [edx + 2*edi]
        mov dword ptr [ecx + eax], edx
        mov edx, dword ptr [ebp - 0x2c]
        add edx, 0x1
        add eax, 0x4
        cmp edx, dword ptr [esi + 0x4]
        mov dword ptr [ebp - 0x2c], edx
        jl loc_008024F3
        mov edi, dword ptr [ebp - 0x30]
        xor eax, eax
    loc_0080252B:
        mov edx, dword ptr [ebp - 0x18]
        push edi
        push ebx
        mov dword ptr [ebp - 0x1c], eax
        mov dword ptr [ebp - 0x28], eax
        lea eax, [ebp - 0x28]
        push eax
        mov eax, dword ptr [ebp - 0x20]
        lea ecx, [ebp - 0x1c]
        push ecx
        push edx
        push eax
        mov ecx, esi
        call ext_00802E10
        mov ecx, dword ptr [ebp + 0x24]
        mov edx, dword ptr [ebp - 0x1c]
        mov eax, dword ptr [ebp - 0x20]
        push ecx
        mov ecx, dword ptr [ebp - 0x28]
        push edx
        mov edx, dword ptr [ebp - 0x18]
        push eax
        mov eax, dword ptr [ebp + 0xc]
        push ecx
        push edx
        push eax
        mov ecx, esi
        call ext_008037E0
        mov ecx, dword ptr [ebp - 0x28]
        mov edx, dword ptr [ebp - 0x1c]
        mov eax, dword ptr [ebp - 0x18]
        push ecx
        mov ecx, dword ptr [ebp - 0x20]
        push edx
        push eax
        push ecx
        push edi
        push ebx
        mov ecx, esi
        call ext_00802FD0
        test eax, eax
        mov dword ptr [ebp - 0x24], eax
        je loc_008025BF
        mov edx, dword ptr [esi + 0x4]
        mov eax, dword ptr [ebp - 0x8]
        mov ecx, dword ptr [ebp - 0x10]
        push edx
        mov edx, dword ptr [ebp - 0xc]
        push eax
        push ecx
        push edx
        push edi
        push ebx
        call ext_00802320
        add esp, 0x18
        test eax, eax
        mov dword ptr [ebp - 0x14], eax
        je loc_008025BF
        mov ecx, dword ptr [ebp - 0xc]
        mov edx, dword ptr [ebp - 0x10]
        push ecx
        push edx
        push edi
        push ebx
        push eax
        mov ecx, esi
        call ext_00802E90
        mov dword ptr [ebp - 0x14], eax
    loc_008025BF:
        mov eax, dword ptr [esi + 0x1c]
        push eax
        call ext_007D9610
        mov eax, dword ptr [ebp - 0x8]
        add eax, 0x1
        add esp, 0x4
        cmp eax, dword ptr [ebp + 0x18]
        mov dword ptr [ebp - 0x8], eax
        jne loc_008024B2
        jmp loc_008025E1
    loc_008025DF:
        xor eax, eax
    loc_008025E1:
        lea esp, [ebp - 0x40]
        pop edi
        pop esi
        pop ebx
        mov ecx, dword ptr [ebp - 0x4]
        xor ecx, ebp
        call ext_006A745E
        mov esp, ebp
        pop ebp
        ret 0x20
    }
}

// [0x0080FB20] sub_0080FB20 (64 bytes)
extern "C" void ext_0080FBB0();
extern "C" void ext_0080FB60();

extern "C" __declspec(naked) void __cdecl fn_0080FB20(void* self, unsigned char c) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        push esi
        call ext_0080FBB0
        mov ecx, dword ptr [esi + 0x4]
        add esp, 0x4
        cmp ecx, eax
        jl append
        push 0x0
        push esi
        call ext_0080FB60
        add esp, 0x8
        test eax, eax
        jne append
        pop esi
        ret
    append:
        mov eax, dword ptr [esi]
        mov ecx, dword ptr [esi + 0x4]
        mov dl, byte ptr [esp + 0xc]
        mov byte ptr [eax + ecx], dl
        mov eax, dword ptr [esi + 0x4]
        inc eax
        mov dword ptr [esi + 0x4], eax
        mov eax, 0x1
        pop esi
        ret
    }
}

// [0x00804BC0] sub_00804BC0 (73 bytes)
extern "C" void ext_008048B0(void*, void*);
extern "C" float mem_0099D148;
extern "C" void __cdecl fn_00804BC0(void* a0) {
    char* esi = *(char**)((char*)a0 + 0x10);
    float saved = *(float*)(esi + 0x2c);
    struct { int d[115]; } buf;
    *(float*)(esi + 0x2c) = mem_0099D148;
    *(float*)(esi + 0x18) = 0.0f;
    *(float*)(esi + 0x1c) = 0.0f;
    *(float*)(esi + 0x20) = 0.0f;
    ext_008048B0(esi, &buf);
    *(float*)(esi + 0x2c) = saved;
}

// [0x00804440] sub_00804440 (89 bytes)
extern "C" void* ext_00803F80(void*);
extern "C" void ext_008041C0(void*, float, void*);
extern "C" void ext_00804360(void*, void*, int, int);
extern "C" void __cdecl fn_00804440(void* a0, float a1, int a2, float* a3, int a4) {
    float* esi = (float*)ext_00803F80(a3);
    int idx = ((a4 & 1) + 8) * 3;
    float* dest = &a3[idx];
    dest[0] = esi[0];
    dest[1] = esi[1];
    dest[2] = esi[2];
    ext_008041C0(a0, a1, a3);
    ext_00804360(esi, a0, -1, a2);
}

// [0x008048B0] sub_008048B0 (784 bytes)
extern "C" void ext_007E46B0();
extern "C" void ext_00803CF0();
extern "C" void ext_00803DF0();
extern "C" void ext_00803F20();
extern "C" void ext_00804440();
extern "C" void ext_008044A0();
extern "C" void ext_00804530();
extern "C" int mem_0094CE80;
extern "C" int mem_009324A4;
extern "C" int mem_0093247C;
extern "C" int mem_0099F04C;
extern "C" int mem_0099F048;
extern "C" int mem_009453D8;
extern "C" int mem_0099F040;
extern "C" int mem_009334D8;
extern "C" int mem_00993828;
extern "C" __declspec(naked) void __fastcall fn_008048B0(void* self) {
    __asm {
        sub esp, 0x30
        fld dword ptr [mem_0094CE80]
        push ebx
        fstp dword ptr [esp + 0x8]
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x40]
        fld dword ptr [esi + 0x24]
        xor ebp, ebp
        fadd dword ptr [esi + 0x28]
        push edi
        mov edi, dword ptr [esp + 0x48]
        mov dword ptr [edi + 0x1bc], ebp
        fstp dword ptr [esp + 0x18]
        mov dword ptr [edi + 0x1c8], ebp
        fld dword ptr [mem_009324A4]
        mov eax, dword ptr [esi + 0x34]
        fstp dword ptr [esp + 0x28]
        mov ebx, 1
        fld dword ptr [mem_0093247C]
        mov dword ptr [esp + 0x1c], ebp
        fstp dword ptr [esp + 0x2c]
        fld dword ptr [mem_0099F04C]
        fstp dword ptr [esp + 0x30]
        mov ecx, dword ptr [eax]
        fld dword ptr [mem_0099F048]
        mov edx, dword ptr [ecx + 0xc]
        fstp dword ptr [esp + 0x10]
        fld dword ptr [edx + 0xa0]
        fmul qword ptr [mem_009453D8]
        fstp dword ptr [esp + 0x48]
        fld dword ptr [esp + 0x48]
        fst dword ptr [edi + 0x1b8]
        fcomp qword ptr [mem_0099F040]
        fnstsw ax
        test ah, 0x5
        jp L_b1d
        jmp L_495a
        jmp L_4950
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
L_4950:
        mov esi, dword ptr [esp + 0x44]
        mov ebx, dword ptr [esp + 0x24]
        xor ebp, ebp
L_495a:
        fld dword ptr [esp + 0x10]
        push ebx
        push edi
        push esi
        push ecx
        lea eax, [esp + 0x38]
        fstp dword ptr [esp]
        push eax
        call ext_00804440
        fstp dword ptr [esp + 0x34]
        fld dword ptr [esp + 0x34]
        add esp, 0x14
        fld st(0)
        fsub dword ptr [esp + 0x18]
        fstp dword ptr [esp + 0x48]
        fld dword ptr [esp + 0x48]
        fstp dword ptr [esi + 0x30]
        fld dword ptr [esp + 0x14]
        fcomp st(1)
        fnstsw ax
        test ah, 0x5
        jp L_499e
        fstp dword ptr [esp + 0x14]
        jmp L_49a0
L_499e:
        fstp st(0)
L_49a0:
        add ebx, 1
        cmp ebx, 0x32
        mov dword ptr [esp + 0x24], ebx
        jg L_b2a
        push edi
        call ext_00803CF0
        fld dword ptr [esp + 0x4c]
        fld dword ptr [esi + 0x2c]
        mov ecx, eax
        fcompp
        add esp, 4
        fnstsw ax
        test ah, 0x5
        jnp L_b3e
        fld dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x14]
        fadd dword ptr [edi + 0x1b8]
        fcomp st(1)
        fnstsw ax
        test ah, 0x41
        je L_b3c
        cmp ecx, ebp
        je L_4a21
        fld dword ptr [edi + 0x1b8]
        fmul qword ptr [mem_009334D8]
        fadd dword ptr [esp + 0x18]
        fcompp
        fnstsw ax
        test ah, 0x41
        je L_b3e
        mov eax, dword ptr [esp + 0x1c]
        add eax, 1
        cmp eax, 5
        mov dword ptr [esp + 0x1c], eax
        jg L_b2f
        jmp L_4a23
L_4a21:
        fstp st(0)
L_4a23:
        push edi
        call ext_008044A0
        push edi
        call ext_00804530
        add esp, 8
        mov dword ptr [esp + 0x48], ebp
        jmp L_4a40
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x90
L_4a40:
        test ebp, ebp
        mov ecx, dword ptr [edi + 0x1bc]
        mov edx, dword ptr [ecx*4 + 0xab2ce0]
        mov ebx, dword ptr [edx + ebp*4]
        jne L_4a72
        fld dword ptr [mem_0094CE80]
        fcomp dword ptr [esp + 0x14]
        fnstsw ax
        test ah, 0x5
        jp L_4a72
        mov eax, dword ptr [edi + 0x1c4]
        or eax, ebx
        cmp eax, 0xf
        je L_4ad0
L_4a72:
        push edi
        push 0
        lea ecx, [esp + 0x3c]
        push ebx
        push ecx
        call ext_00803F20
        add esp, 0x10
        test eax, eax
        je L_4ad0
        lea esi, [esp + 0x34]
        call ext_007E46B0
        fstp dword ptr [esp + 0x20]
        cmp dword ptr [esp + 0x48], 0
        fld dword ptr [esp + 0x20]
        je L_4aac
        fld dword ptr [esp + 0x10]
        fcomp st(1)
        fnstsw ax
        test ah, 1
        jne L_4ace
L_4aac:
        fstp dword ptr [esp + 0x10]
        mov dword ptr [esp + 0x48], ebx
        fld dword ptr [esp + 0x34]
        fstp dword ptr [esp + 0x28]
        fld dword ptr [esp + 0x38]
        fstp dword ptr [esp + 0x2c]
        fld dword ptr [esp + 0x3c]
        fstp dword ptr [esp + 0x30]
        jmp L_4ad0
L_4ace:
        fstp st(0)
L_4ad0:
        add ebp, 1
        test ebx, ebx
        jne L_4a40
        mov eax, dword ptr [edi + 0x1c4]
        or eax, dword ptr [esp + 0x48]
        cmp eax, 0xf
        mov dword ptr [edi + 0x1bc], eax
        je L_4b07
        fld dword ptr [esp + 0x10]
        fld dword ptr [edi + 0x1b8]
        fcompp
        fnstsw ax
        test ah, 0x5
        jnp L_4950
L_4b07:
        fld dword ptr [mem_0094CE80]
        fcomp dword ptr [esp + 0x14]
        fnstsw ax
        test ah, 0x5
        mov eax, 2
        jnp L_b22
L_b1d:
        mov eax, 1
L_b22:
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x30
        ret
L_b2a:
        fld1
        fstp dword ptr [esi + 0x30]
L_b2f:
        pop edi
        pop esi
        pop ebp
        mov eax, 2
        pop ebx
        add esp, 0x30
        ret
L_b3c:
        fstp st(0)
L_b3e:
        fld dword ptr [esp + 0x28]
        fstp dword ptr [esi]
        fld dword ptr [esp + 0x2c]
        fstp dword ptr [esi + 0x4]
        fld dword ptr [esp + 0x30]
        fstp dword ptr [esi + 0x8]
        call ext_007E46B0
        mov edx, dword ptr [edi + 0x1bc]
        fstp st(0)
        push edi
        push 1
        push edx
        lea ebx, [esi + 0xc]
        push ebx
        call ext_00803DF0
        fld dword ptr [esi + 0x30]
        fmul qword ptr [mem_00993828]
        add esp, 0x10
        fadd dword ptr [esi + 0x28]
        fstp dword ptr [esp + 0x44]
        fld dword ptr [esi]
        fld dword ptr [esp + 0x44]
        fld st(0)
        fmulp st(2), st
        fld dword ptr [ebx]
        faddp st(2), st
        fxch st(1)
        fstp dword ptr [ebx]
        fld dword ptr [esi + 0x4]
        fmul st, st(1)
        fadd dword ptr [ebx + 0x4]
        fstp dword ptr [ebx + 0x4]
        fmul dword ptr [esi + 0x8]
        fadd dword ptr [ebx + 0x8]
        fstp dword ptr [ebx + 0x8]
        fldz
        fcomp dword ptr [esp + 0x20]
        fnstsw ax
        test ah, 1
        je L_b1d
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x30
        ret
    }
}

// [0x0080A8A0] sub_0080A8A0 (95 bytes)
extern "C" int mem_00B62020;
extern "C" void ext_0080AC50();
extern "C" void ext_0080B670();
extern "C" void ext_0080B530();
extern "C" void ext_0080B610();

extern "C" __declspec(naked) void __cdecl fn_0080A8A0() {
    __asm {
        mov eax, dword ptr [mem_00B62020]
        push esi
        test eax, eax
        push edi
        jne L_80a8bd
        mov eax, dword ptr [esp + 0xc]
        pop edi
        pop esi
        mov dword ptr [eax], 0
        mov eax, 0x20
        ret
    L_80a8bd:
        call ext_0080AC50
        mov edi, dword ptr [esp + 0xc]
        mov esi, eax
        test edi, edi
        je L_80a8fa
        mov ecx, dword ptr [esi + 4]
        push ecx
        call ext_0080B670
        inc eax
        push eax
        call ext_0080B530
        add esp, 8
        mov dword ptr [edi], eax
        test eax, eax
        jne L_80a8ed
        pop edi
        mov eax, 3
        pop esi
        ret
    L_80a8ed:
        mov edx, dword ptr [esi + 4]
        push edx
        push eax
        call ext_0080B610
        add esp, 8
    L_80a8fa:
        pop edi
        xor eax, eax
        pop esi
        ret
    }
}

// [0x00805D30] sub_00805D30 (128 bytes)
extern "C" void ext_0080F7F0();
extern "C" void ext_0080A750();
extern "C" void ext_0080AF20();
extern "C" void ext_0080A800();

extern "C" __declspec(naked) int __cdecl fn_00805D30(int a1) {
    __asm {
        sub esp, 0x200
        __asm _emit 0x8d __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x00 // lea eax, [esp+0] (disp8 form)
        push esi
        mov esi, dword ptr [esp + 0x208]
        push esi
        push 0xab3a44
        push eax
        call ext_0080F7F0
        lea ecx, [esp + 0x10]
        push ecx
        call ext_0080A750
        mov edx, dword ptr [esp + 0x234]
        mov eax, dword ptr [esp + 0x230]
        mov ecx, dword ptr [esp + 0x22c]
        push edx
        mov edx, dword ptr [esp + 0x22c]
        push eax
        mov eax, dword ptr [esp + 0x22c]
        push ecx
        mov ecx, dword ptr [esp + 0x22c]
        push edx
        mov edx, dword ptr [esp + 0x22c]
        push eax
        push ecx
        push edx
        push esi
        call ext_0080AF20
        mov esi, eax
        push esi
        push 0xab3a74
        call ext_0080A800
        add esp, 0x38
        mov eax, esi
        pop esi
        add esp, 0x200
        ret
    }
}

// [0x00804C10] sub_00804C10 (143 bytes)
extern "C" void ext_00805DB0();
extern "C" void ext_0080A6A0();
extern "C" void ext_0080A800();

extern "C" __declspec(naked) int __fastcall fn_00804C10(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        push esi
        push edi
        push 0xab2d48
        call ext_0080A6A0
        mov edi, dword ptr [esp + 0x10]
        add esp, 0x4
        mov esi, edi
        and esi, 0xffff0000
        cmp esi, 0xffff0000
        je L_special
        cmp esi, 0xfffe0000
        je L_special
        push 0x1c
        push 0xab2da4
        call ext_0080A800
        add esp, 0x8
        mov eax, 0x1c
        pop edi
        pop esi
        ret 0xc
L_special:
        push edi
        push 0xab2d5c
        call ext_0080A800
        add esp, 0x8
        cmp esi, 0xffff0000
        jne L_else
        mov eax, dword ptr [esp + 0x14]
        mov ecx, dword ptr [esp + 0x10]
        push eax
        push ecx
        push edi
        push 0x0
        push 0x0
        call ext_00805DB0
        add esp, 0x14
        mov esi, eax
        jmp L_common
L_else:
        mov esi, 0x1c
L_common:
        push esi
        push 0xab2d84
        call ext_0080A800
        add esp, 0x8
        mov eax, esi
        pop edi
        pop esi
        ret 0xc
    }
}

// [0x0080A800] sub_0080A800 (159 bytes)

extern "C" void ext_0080AC50();
extern "C" void ext_0080A720();
extern "C" void ext_0080B670();
extern "C" void ext_0080F7F0();
extern "C" void ext_0080F8C0();
extern "C" int mem_00B62020;

extern "C" __declspec(naked) void __cdecl fn_0080A800(const char* src, int n) {
    __asm {
        mov eax, dword ptr [mem_00B62020]
        push ebx
        push ebp
        push esi
        test eax, eax
        push edi
        mov ebp, 1
        je L_end
        call ext_0080AC50
        mov esi, eax
        mov eax, dword ptr [esi + 4]
        push eax
        call ext_0080B670
        mov ebx, dword ptr [esp + 0x18]
        mov edi, eax
        push ebx
        call ext_0080B670
        lea ecx, [eax + edi + 0xa]
        mov eax, dword ptr [esi]
        add esp, 8
        cmp ecx, eax
        jb L_fits
    L_loop:
        test ebp, ebp
        je L_trunc
        push esi
        xor ebp, ebp
        call ext_0080A720
        push ebx
        call ext_0080B670
        lea edx, [eax + edi + 0xa]
        mov eax, dword ptr [esi]
        add esp, 8
        cmp edx, eax
        jae L_loop
    L_fits:
        mov eax, dword ptr [esp + 0x18]
        mov ecx, dword ptr [esi + 4]
        push eax
        add ecx, edi
        push ebx
        push ecx
        call ext_0080F7F0
        add esp, 0xc
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    L_trunc:
        mov edx, dword ptr [esp + 0x18]
        mov eax, dword ptr [esi]
        mov ecx, dword ptr [esi + 4]
        push edx
        sub eax, edi
        push ebx
        add ecx, edi
        push eax
        push ecx
        call ext_0080F8C0
        mov edx, dword ptr [esi]
        mov eax, dword ptr [esi + 4]
        add esp, 0x10
        mov byte ptr [edx + eax - 1], 0
    L_end:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}

// [0x0080BCC0] sub_0080BCC0 (208 bytes)
extern "C" __declspec(naked) void __cdecl fn_0080BCC0(void* a, void* b) {
    __asm {
        sub esp, 180h
        push esi
        mov esi, dword ptr [esp + 18ch]
        push edi
        mov edi, dword ptr [esp + 18ch]
        lea eax, [esi + 4]
        push 0
        push eax
        push edi
        call ext_0080BA60
        lea ecx, [esi + 60h]
        lea edx, [esp + 14h]
        push ecx
        push edx
        call ext_00853840
        lea eax, [esp + 1ch]
        lea ecx, [esp + 58h]
        push eax
        push 80h
        push 1
        push ecx
        call ext_008529D0
        mov edx, 0fafafafah
        push 0
        mov dword ptr [esp + 30h], edx
        lea eax, [esp + 54h]
        mov dword ptr [esp + 34h], edx
        push 2
        mov dword ptr [esp + 3ch], edx
        push eax
        mov dword ptr [esp + 44h], edx
        mov dword ptr [esp + 48h], edx
        call ext_00852AD0
        mov edx, dword ptr [edi + 0ch]
        mov eax, dword ptr [edi + 4]
        add esp, 30h
        lea ecx, [esp + 1ch]
        push ecx
        push edx
        push eax
        call ext_00859E50
        mov ecx, dword ptr [edi + 8]
        add esp, 4
        add eax, ecx
        lea ecx, [esp + 4ch]
        push eax
        lea edx, [esp + 38h]
        push ecx
        push edx
        call ext_00853410
        movzx cx, byte ptr [esp + 32h]
        mov edx, dword ptr [esi]
        xor eax, eax
        mov ah, byte ptr [esp + 35h]
        add esp, 14h
        or eax, ecx
        mov word ptr [edx + 8], ax
        mov edx, dword ptr [esi]
        movzx cx, byte ptr [esp + 28h]
        xor eax, eax
        pop edi
        mov ah, byte ptr [esp + 20h]
        pop esi
        or eax, ecx
        mov word ptr [edx + 0ah], ax
        xor eax, eax
        add esp, 180h
        ret
    }
}

// [0x00804360] sub_00804360 (220 bytes)
extern "C" void __cdecl ext_007F5950(void*, float*, float*);
extern "C" __declspec(naked) float __cdecl fn_00804360(float* out, float* vec, int flag, char* obj) {
    __asm {
        sub esp, 18h
        cmp dword ptr [esp + 24h], 0
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 28h]
        fld dword ptr [ebp]
        push esi
        fchs
        push edi
        mov edi, dword ptr [esp + 38h]
        fstp dword ptr [esp + 10h]
        fld dword ptr [ebp + 4]
        fchs
        fstp dword ptr [esp + 14h]
        fld dword ptr [ebp + 8]
        fchs
        fstp dword ptr [esp + 18h]
        jle L_le
        mov ecx, dword ptr [edi + 34h]
        lea eax, [esp + 1Ch]
        push eax
        push ebp
        push ecx
        call ext_007F5950
        mov esi, dword ptr [esp + 38h]
        mov eax, dword ptr [edi + 38h]
        lea ebx, [esi + 0Ch]
        push ebx
        lea edx, [esp + 20h]
        push edx
        push eax
        jmp L_call2
    L_le:
        mov eax, dword ptr [edi + 34h]
        lea ecx, [esp + 1Ch]
        push ecx
        lea edx, [esp + 14h]
        push edx
        push eax
        call ext_007F5950
        mov esi, dword ptr [esp + 38h]
        mov ecx, dword ptr [edi + 38h]
        lea ebx, [esi + 0Ch]
        push ebx
        push ebp
        push ecx
    L_call2:
        call ext_007F5950
        fld dword ptr [esp + 34h]
        fsub dword ptr [ebx]
        add esp, 18h
        fstp dword ptr [esi]
        fld dword ptr [esp + 20h]
        fsub dword ptr [ebx + 4]
        fstp dword ptr [esi + 4]
        fld dword ptr [esp + 24h]
        fsub dword ptr [ebx + 8]
        fstp dword ptr [esi + 8]
        fld dword ptr [edi + 18h]
        fadd dword ptr [esi]
        fstp dword ptr [esi]
        fld dword ptr [edi + 1Ch]
        fadd dword ptr [esi + 4]
        fstp dword ptr [esi + 4]
        fld dword ptr [edi + 20h]
        pop edi
        fadd dword ptr [esi + 8]
        fstp dword ptr [esp + 34h]
        fld dword ptr [esp + 34h]
        fst dword ptr [esi + 8]
        fld dword ptr [ebp + 4]
        fmul dword ptr [esi + 4]
        fld dword ptr [esi]
        pop esi
        fmul dword ptr [ebp]
        faddp st(1), st
        fld dword ptr [ebp + 8]
        pop ebp
        fmulp st(2), st
        pop ebx
        faddp st(1), st
        fstp dword ptr [esp + 28h]
        fld dword ptr [esp + 28h]
        add esp, 18h
        ret
    }
}
