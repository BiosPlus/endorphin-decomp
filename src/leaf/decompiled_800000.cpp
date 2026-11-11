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
