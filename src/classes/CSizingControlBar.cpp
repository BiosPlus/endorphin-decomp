// Decompiled translation unit: src/classes/CSizingControlBar.cpp
// Isolated WIP translation unit for fn_00456370

// [0x00456370] CSizingControlBar::vfunc_102 (275 bytes)
extern "C" void ext_006A63B2();
extern "C" int mem_00925670;

extern "C" __declspec(naked) void __fastcall fn_00456370(void* self, int edx_unused, void* dst, unsigned int mode) {
    __asm {
        sub     esp, 10h
        push    ebx
        mov     ebx, dword ptr [esp+18h]
        push    esi
        push    edi
        push    ebx
        lea     eax, dword ptr [esp+10h]
        push    eax
        mov     esi, ecx
        call    dword ptr [mem_00925670]
        add     dword ptr [esp+10h], 5
        mov     eax, 3
        add     dword ptr [esp+0ch], eax
        sub     dword ptr [esp+14h], eax
        sub     dword ptr [esp+18h], eax
        push    eax
        push    eax
        push    5
        push    eax
        mov     ecx, esi
        call    ext_006A63B2
        mov     edi, dword ptr [esp+24h]
        cmp     edi, 0e81fh
        je      short L_skip
        add     dword ptr [esp+0ch], 2
        sub     dword ptr [esp+14h], 2
        sub     dword ptr [esp+18h], 2
        push    5
        push    5
        push    5
        push    5
        mov     ecx, esi
        call    ext_006A63B2
    L_skip:
        lea     eax, dword ptr [edi-0e81bh]
        cmp     eax, 3
        ja      short L_def
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x84
        __asm _emit 0x64
        __asm _emit 0x45
        __asm _emit 0x00
    L_c0:
        or      dword ptr [esi+94h], 8
        jmp     short L_def
    L_c3:
        or      dword ptr [esi+94h], 4
        jmp     short L_def
    L_c1:
        or      dword ptr [esi+94h], 2
        jmp     short L_def
    L_c2:
        or      dword ptr [esi+94h], 1
    L_def:
        mov     ecx, dword ptr [esi+94h]
        test    cl, 10h
        je      short L_end
        test    cl, 8
        je      short L_a
        mov     edi, dword ptr [esi+0f8h]
        jmp     short L_b
    L_a:
        xor     edi, edi
    L_b:
        test    cl, 2
        je      short L_c
        mov     edx, dword ptr [esi+0f8h]
        jmp     short L_d
    L_c:
        xor     edx, edx
    L_d:
        test    cl, 4
        je      short L_e
        mov     eax, dword ptr [esi+0f8h]
        jmp     short L_f
    L_e:
        xor     eax, eax
    L_f:
        test    cl, 1
        je      short L_g
        mov     esi, dword ptr [esi+0f8h]
        jmp     short L_h
    L_g:
        xor     esi, esi
    L_h:
        add     dword ptr [esp+0ch], esi
        add     dword ptr [esp+10h], eax
        sub     dword ptr [esp+14h], edx
        sub     dword ptr [esp+18h], edi
    L_end:
        mov     ecx, dword ptr [esp+0ch]
        mov     edx, dword ptr [esp+10h]
        mov     eax, dword ptr [esp+14h]
        mov     dword ptr [ebx], ecx
        mov     ecx, dword ptr [esp+18h]
        mov     dword ptr [ebx+4], edx
        pop     edi
        mov     dword ptr [ebx+8], eax
        pop     esi
        mov     dword ptr [ebx+0ch], ecx
        pop     ebx
        add     esp, 10h
        ret     8
    }
}
