// Decompiled translation unit: src/leaf/decompiled_760000.cpp

extern "C" void ext_006C2860();
extern "C" void ext_006C28D0();
extern "C" void ext_00764620();
extern "C" void ext_00764670();
extern "C" void ext_007648B0();

// [0x007646E0] sub_007646E0 (96 bytes)
extern "C" __declspec(naked) char __fastcall fn_007646E0(void* self, int edx_unused, void* arg) {
    __asm {
        push    ebp
        push    edi
        mov     edi, dword ptr [esp + 0xc]
        mov     ebp, ecx
        test    edi, edi
        jne     L_nonnull
        pop     edi
        xor     al, al
        pop     ebp
        ret     4
    L_nonnull:
        push    edi
        mov     ecx, ebp
        call    ext_00764620
        test    al, al
        je      L_after_if
        push    edi
        mov     ecx, ebp
        call    ext_00764670
        push    edi
        mov     ecx, ebp
        call    ext_007648B0
    L_after_if:
        push    ebx
        push    esi
        push    0
        mov     ecx, edi
        call    ext_006C2860
        mov     ebx, eax
        xor     esi, esi
        test    ebx, ebx
        jle     L_done
    L_loop:
        push    esi
        mov     ecx, edi
        call    ext_006C28D0
        push    eax
        mov     ecx, ebp
        call    fn_007646E0
        inc     esi
        cmp     esi, ebx
        jl      L_loop
    L_done:
        pop     esi
        pop     ebx
        pop     edi
        mov     al, 1
        pop     ebp
        ret     4
    }
}
