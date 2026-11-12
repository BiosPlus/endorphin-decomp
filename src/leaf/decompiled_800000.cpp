// Decompiled translation unit: src/leaf/decompiled_800000.cpp

extern "C" void ext_00859730();
extern "C" void ext_0080FB20();

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
