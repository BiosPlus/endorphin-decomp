// Decompiled translation unit: src/classes/VersionControlDialog.cpp

extern "C" void __stdcall ext_006A5F44(int a1, int a2, void* a3);

// [0x00462700] VersionControlDialog::vfunc_63 (46 bytes)
extern "C" void __fastcall fn_00462700(void* self, int edx_unused, int a1) {
    ext_006A5F44(a1, 0x4d0, (char*)self + 0x78);
    ext_006A5F44(a1, 0x4cf, (char*)self + 0xcc);
}

// [0x00462560] VersionControlDialog::vfunc_84 (411 bytes)
extern "C" void ext_00462D10();
extern "C" void ext_004A9720();
extern "C" void ext_006A5FC8();
extern "C" void ext_006A5FDA();
extern "C" void ext_006A6238();
extern "C" int mem_00924FE8;
extern "C" int mem_00925694;
extern "C" int mem_00924FF0;
extern "C" int mem_009242FC;
extern "C" int mem_00924300;
extern "C" int mem_009242F4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) int __fastcall fn_00462560(void* self) {
    __asm {
        push    -1
        push    880b52h
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 20h
        push    esi
        push    edi
        mov     esi, ecx
        call    ext_006A5FC8
        lea     ecx, [esp+0ch]
        call    dword ptr [mem_00924FE8]
        mov     eax, dword ptr [esi+98h]
        mov     edi, dword ptr [mem_00925694]
        push    938d40h
        push    0
        push    143h
        push    eax
        mov     dword ptr [esp+40h], 0
        call    edi
        mov     ecx, dword ptr [esi+74h]
        push    1
        call    ext_00462D10
        test    al, al
        je      L_skip1
        mov     ecx, dword ptr [esi+98h]
        push    938d34h
        push    0
        push    143h
        push    ecx
        call    edi
L_skip1:
        mov     ecx, dword ptr [esi+74h]
        push    2
        call    ext_00462D10
        test    al, al
        je      L_skip2
        mov     edx, dword ptr [esi+98h]
        push    938d28h
        push    0
        push    143h
        push    edx
        call    edi
L_skip2:
        mov     eax, dword ptr [esi+74h]
        mov     ecx, dword ptr [eax+4]
        mov     eax, dword ptr [ecx+4]
        lea     edx, [esp+0ch]
        push    edx
        push    eax
        call    ext_004A9720
        add     esp, 8
        lea     ecx, [esp+0ch]
        call    dword ptr [mem_00924FF0]
        push    eax
        mov     eax, dword ptr [esi+98h]
        push    -1
        push    14ch
        push    eax
        call    edi
        cmp     eax, -1
        jne     L_ne1
        xor     eax, eax
L_ne1:
        mov     ecx, dword ptr [esi+98h]
        push    0
        push    eax
        push    14eh
        push    ecx
        call    edi
        lea     ecx, [esp+8]
        call    dword ptr [mem_009242FC]
        mov     eax, dword ptr [esi+98h]
        lea     edx, [esp+8]
        push    edx
        push    0
        push    0
        push    147h
        push    eax
        mov     byte ptr [esp+44h], 1
        call    edi
        push    eax
        lea     ecx, [esi+78h]
        call    ext_006A6238
        lea     ecx, [esp+8]
        call    dword ptr [mem_00924300]
        lea     ecx, [esp+0ch]
        push    ecx
        push    0
        mov     edi, eax
        call    ext_004A9720
        add     esp, 8
        lea     ecx, [esp+0ch]
        call    dword ptr [mem_00924FF0]
        mov     ecx, edi
L_cmp:
        mov     dl, byte ptr [ecx]
        cmp     dl, byte ptr [eax]
        jne     L_diff
        test    dl, dl
        je      L_eq
        mov     dl, byte ptr [ecx+1]
        cmp     dl, byte ptr [eax+1]
        jne     L_diff
        add     ecx, 2
        add     eax, 2
        test    dl, dl
        jne     L_cmp
L_eq:
        xor     eax, eax
        jmp     L_done
L_diff:
        sbb     eax, eax
        sbb     eax, -1
L_done:
        test    eax, eax
        jne     L_nz
        push    eax
        lea     ecx, [esi+0cch]
        call    ext_006A5FDA
L_nz:
        lea     ecx, [esp+8]
        call    dword ptr [mem_009242F4]
        lea     ecx, [esp+0ch]
        mov     dword ptr [esp+30h], -1
        call    dword ptr [mem_00924FF4]
        mov     ecx, dword ptr [esp+28h]
        pop     edi
        mov     eax, 1
        pop     esi
        mov     dword ptr fs:[0], ecx
        add     esp, 2ch
        ret
    }
}
