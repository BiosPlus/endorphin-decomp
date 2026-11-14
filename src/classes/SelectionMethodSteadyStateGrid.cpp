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
