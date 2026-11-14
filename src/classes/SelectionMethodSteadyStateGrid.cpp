// Decompiled translation unit: src/classes/SelectionMethodSteadyStateGrid.cpp
#include <windows.h>

extern "C" void ext_00435D00();
extern "C" void ext_005193A0();
extern "C" void ext_00519820();
extern "C" void ext_00695240();
extern "C" void ext_006955D0();
extern "C" int mem_00924E90;
extern "C" int mem_00924FA0;
extern "C" int mem_00924E5C;
extern "C" int mem_00924E98;
extern "C" int mem_00AEB918;
extern "C" int mem_0093BD38;
extern "C" int mem_0094FF78;
extern "C" void ext_0050E350();
extern "C" void ext_0050FA20();
extern "C" void ext_00514A70();
extern "C" void ext_005184B0();
extern "C" void ext_006A6DE0();
extern "C" void ext_006A7250();
extern "C" void ext_0071F100();
extern "C" int mem_00925134;

// [0x00519AE0] SelectionMethodSteadyStateGrid::vfunc_2 (284 bytes)
extern "C" __declspec(naked) void __fastcall fn_00519AE0(void* self) {
    __asm {
        push    ecx
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     esi, ecx
        call    ext_006955D0
        xor     edi, edi
        cmp     dword ptr [esi + 0x40], edi
        mov     ebp, eax
        jle     L_519B59
        jmp     L_519B00
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        mov     edi, edi
    L_519B00:
        mov     eax, dword ptr [mem_00924E90]
        mov     ecx, dword ptr [mem_00924FA0]
        push    eax
        push    edi
        push    0x952140
        push    ecx
        call    ext_00435D00
        add     esp, 0x8
        mov     ecx, eax
        call    dword ptr [mem_00924E5C]
        mov     ecx, eax
        call    dword ptr [mem_00924E98]
        xor     ebx, ebx
        cmp     dword ptr [esi + 0x48], ebx
        jle     L_519B51
    L_519B32:
        push    edi
        mov     ecx, esi
        call    ext_005193A0
        fstp    st(0)
        cmp     byte ptr [mem_00AEB918], 0
        jne     L_519BF4
        add     ebx, 1
        cmp     ebx, dword ptr [esi + 0x48]
        jl      L_519B32
    L_519B51:
        add     edi, 1
        cmp     edi, dword ptr [esi + 0x40]
        jl      L_519B00
    L_519B59:
        cmp     dword ptr [ebp + 0x9c4], 0
        jne     L_519B69
        mov     ecx, ebp
        call    ext_00695240
    L_519B69:
        mov     ecx, dword ptr [ebp + 0x9c0]
        add     dword ptr [ebp + 0x9c4], -1
        mov     eax, dword ptr [ecx]
        add     ecx, 4
        mov     edx, eax
        shr     edx, 0xb
        xor     eax, edx
        mov     dword ptr [ebp + 0x9c0], ecx
        mov     ecx, eax
        and     ecx, 0xff3a58ad
        shl     ecx, 7
        xor     eax, ecx
        mov     edx, eax
        and     edx, 0xffffdf8c
        shl     edx, 0xf
        xor     eax, edx
        mov     ecx, eax
        shr     ecx, 0x12
        xor     ecx, eax
        test    ecx, ecx
        mov     dword ptr [esp + 0x10], ecx
        fild    dword ptr [esp + 0x10]
        jge     L_519BBB
        fadd    qword ptr [mem_0093BD38]
    L_519BBB:
        fmul    qword ptr [mem_0094FF78]
        fcomp   qword ptr [esi + 0x50]
        fnstsw  ax
        test    ah, 5
        jp      L_519BF4
        mov     edx, dword ptr [mem_00924E90]
        mov     eax, dword ptr [mem_00924FA0]
        push    edx
        push    0x95212c
        push    eax
        call    ext_00435D00
        add     esp, 0x8
        mov     ecx, eax
        call    dword ptr [mem_00924E98]
        mov     ecx, esi
        call    ext_00519820
    L_519BF4:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret     8
    }
}

// [0x005196C0] SelectionMethodSteadyStateGrid::vfunc_1 (343 bytes)
extern "C" __declspec(naked) void __fastcall fn_005196C0(void* self) {
    __asm {
        sub     esp, 8
        push    ebx
        push    ebp
        push    esi
        mov     esi, ecx
        push    edi
        mov     edi, dword ptr [esi + 0xc]
        mov     ecx, dword ptr [edi + 0x20]
        test    ecx, ecx
        jne     t5196c0_a
        xor     eax, eax
        jmp     t5196c0_b
t5196c0_a:
        mov     eax, dword ptr [edi + 0x24]
        sub     eax, ecx
        sar     eax, 2
t5196c0_b:
        mov     dword ptr [esi + 0x4c], eax
        cdq
        idiv    dword ptr [esi + 0x40]
        mov     dword ptr [esp + 0x10], eax
        fild    dword ptr [esp + 0x10]
        call    ext_006A7250
        call    ext_006A6DE0
        mov     ebp, dword ptr [mem_00925134]
        mov     ecx, eax
        imul    ecx, eax
        mov     dword ptr [esi + 0x44], eax
        mov     dword ptr [esi + 0x48], ecx
        mov     eax, dword ptr [edi + 0x20]
        test    eax, eax
        je      t5196c0_c
        mov     edx, dword ptr [edi + 0x24]
        sub     edx, eax
        sar     edx, 2
        jne     t5196c0_d
t5196c0_c:
        call    ebp
t5196c0_d:
        mov     eax, dword ptr [edi + 0x20]
        mov     ecx, dword ptr [eax]
        push    ecx
        mov     ecx, dword ptr [esi + 0xc]
        call    ext_0050E350
        lea     ecx, [esp + 0x10]
        call    ext_0071F100
        mov     edx, dword ptr [eax + 4]
        mov     eax, dword ptr [eax]
        mov     ecx, dword ptr [esi + 0x40]
        push    edx
        push    eax
        lea     ebx, [esi + 0x30]
        push    ecx
        mov     ecx, ebx
        call    ext_00514A70
        xor     edi, edi
        cmp     dword ptr [esi + 0x40], edi
        jle     t5196c0_e
        nop
t5196c0_f:
        mov     ecx, dword ptr [ebx + 4]
        test    ecx, ecx
        je      t5196c0_g
        mov     eax, dword ptr [ebx + 8]
        sub     eax, ecx
        sar     eax, 3
        cmp     edi, eax
        jb      t5196c0_h
t5196c0_g:
        call    ebp
t5196c0_h:
        mov     edx, dword ptr [esi + 0x44]
        mov     eax, dword ptr [ebx + 4]
        push    edx
        push    edi
        lea     ecx, [eax + edi*8]
        call    ext_005184B0
        add     edi, 1
        cmp     edi, dword ptr [esi + 0x40]
        jl      t5196c0_f
t5196c0_e:
        mov     ecx, esi
        call    ext_0050FA20
        fstp    qword ptr [esi + 0x10]
        mov     ecx, dword ptr [mem_00924E90]
        mov     eax, dword ptr [esi + 0x44]
        mov     edx, dword ptr [esi + 0x48]
        push    ecx
        mov     ecx, dword ptr [mem_00924FA0]
        push    0x93bf0c
        push    eax
        push    0x92ab74
        push    eax
        mov     eax, dword ptr [esi + 0x40]
        push    0x952118
        push    edx
        push    0x952108
        push    eax
        push    0x9520f0
        push    ecx
        call    ext_00435D00
        add     esp, 8
        mov     ecx, eax
        call    dword ptr [mem_00924E5C]
        push    eax
        call    ext_00435D00
        add     esp, 8
        mov     ecx, eax
        call    dword ptr [mem_00924E5C]
        push    eax
        call    ext_00435D00
        add     esp, 8
        mov     ecx, eax
        call    dword ptr [mem_00924E5C]
        push    eax
        call    ext_00435D00
        add     esp, 8
        mov     ecx, eax
        call    dword ptr [mem_00924E5C]
        push    eax
        call    ext_00435D00
        add     esp, 8
        mov     ecx, eax
        call    dword ptr [mem_00924E98]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 8
        ret
    }
}
