// Decompiled translation unit: src/classes/CEditLog.cpp

extern "C" int mem_009242E0;
extern "C" int mem_00924EE4;
extern "C" int mem_00924EE8;
extern "C" int mem_00924EEC;
extern "C" int mem_00925618;
extern "C" int mem_009241BC;

// [0x00415650] CEditLog::vfunc_3 (205 bytes)
extern "C" __declspec(naked) void __fastcall fn_00415650(void* self, int edx_unused, const wchar_t* text, bool flag) {
    __asm {
        push ecx
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x10]
        test esi, esi
        mov ebp, ecx
        je done
        push ebx
        lea eax, [ebp + 0x2c]
        push edi
        push eax
        mov dword ptr [esp + 0x14], eax
        call dword ptr [mem_009242E0]
        cmp byte ptr [esp + 0x1c], 0
        je append_only
        mov eax, esi
        lea edx, [eax + 0x2]
        _emit 0x8d
        _emit 0x49
        _emit 0x00
    wcslen_loop:
        mov cx, word ptr [eax]
        add eax, 0x2
        test cx, cx
        jne wcslen_loop
        sub eax, edx
        sar eax, 1
        mov edi, eax
        mov eax, dword ptr [ebp + 0x5c]
        lea ecx, [eax + 2 * edi]
        lea ebx, [ebp + 0x48]
        push ecx
        mov ecx, ebx
        call dword ptr [mem_00924EE4]
        xor esi, esi
        test edi, edi
        jle loop_end
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
    char_loop:
        mov edx, dword ptr [esp + 0x18]
        cmp word ptr [edx + 2 * esi], 0xa
        jne no_cr
        push 0xd
        mov ecx, ebx
        call dword ptr [mem_00924EE8]
    no_cr:
        mov eax, dword ptr [esp + 0x18]
        movzx ecx, word ptr [eax + 2 * esi]
        push ecx
        mov ecx, ebx
        call dword ptr [mem_00924EE8]
        add esi, 0x1
        cmp esi, edi
        jl char_loop
        jmp loop_end
    append_only:
        push esi
        lea ecx, [ebp + 0x48]
        call dword ptr [mem_00924EEC]
    loop_end:
        cmp byte ptr [ebp + 0x44], 0
        pop edi
        pop ebx
        jne leave_cs
        mov eax, dword ptr [ebp + 0x1c]
        test eax, eax
        je leave_cs
        push 0x0
        push 0x0
        push 0x5f4
        push eax
        call dword ptr [mem_00925618]
        mov byte ptr [ebp + 0x44], 0x1
    leave_cs:
        mov edx, dword ptr [esp + 0x8]
        push edx
        call dword ptr [mem_009241BC]
    done:
        pop esi
        pop ebp
        pop ecx
        ret 0x8
    }
}

extern "C" void __fastcall ext_00415810(void* self);
extern "C" unsigned char __stdcall ext_00415820(int a1);
extern "C" void __stdcall ext_00415C70(int a1);
extern "C" int __fastcall ext_00458F00(void* self, int edx_unused, unsigned int a1, int a2, int a3, int* a4);
extern "C" int (__stdcall *mem_00925664)(int, int, int, int);

// [0x00415CA0] CEditLog::vfunc_1 (173 bytes)
extern "C" __declspec(naked) int __fastcall fn_00415CA0(void* self, int edx_unused, unsigned int msg, int wparam, int lparam, int* result) {
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        cmp     eax, 0x14
        mov     edx, dword ptr [esp + 0x10]
        push    esi
        mov     esi, ecx
        mov     dword ptr [edx], 0x0
        ja      L_above_14
        je      L_14_or_0f
        mov     ecx, eax
        sub     ecx, 0x2
        je      L_02
        sub     ecx, 0xd
        jne     L_default
    L_14_or_0f:
        cmp     byte ptr [esi + 0x28], 0x0
        je      L_default
        mov     eax, 0x1
        pop     esi
        ret     0x10
    L_02:
        mov     ecx, esi
        call    ext_00415810
        mov     eax, 0x1
        pop     esi
        ret     0x10
    L_above_14:
        cmp     eax, 0x113
        je      L_113
        cmp     eax, 0x5f4
        je      L_5f4
    L_default:
        mov     ecx, dword ptr [esp + 0x10]
        push    edx
        mov     edx, dword ptr [esp + 0x10]
        push    ecx
        push    edx
        push    eax
        mov     ecx, esi
        call    ext_00458F00
        pop     esi
        ret     0x10
    L_5f4:
        push    0x0
        call    ext_00415820
        test    al, al
        jne     L_ret_1
        cmp     dword ptr [esi + 0x20], 0x0
        jne     L_ret_1
        mov     ecx, dword ptr [esi + 0x24]
        mov     eax, dword ptr [esi + 0x1c]
        push    0x0
        push    ecx
        push    0x1267
        push    eax
        call    dword ptr [mem_00925664]
        mov     dword ptr [esi + 0x20], eax
        mov     eax, 0x1
        pop     esi
        ret     0x10
    L_113:
        mov     edx, dword ptr [esp + 0xc]
        push    edx
        call    ext_00415C70
    L_ret_1:
        mov     eax, 0x1
        pop     esi
        ret     0x10
    }
}

extern "C" void ext_00458E10();
extern "C" void ext_00459100();
extern "C" int mem_00925694;

// [0x004157D0] CEditLog::vfunc_4 (59 bytes)
extern "C" __declspec(naked) void __fastcall fn_004157D0(void* self) {
    __asm {
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 1Ch]
        push    edi
        mov     edi, dword ptr [esp + 0Ch]
        cmp     edi, eax
        je      short L1
        test    eax, eax
        je      short L1
        call    ext_00458E10
    L1:
        push    1
        push    edi
        mov     ecx, esi
        call    ext_00459100
        test    eax, eax
        je      short L2
        push    0
        push    0
        push    0C5h
        push    edi
        call    dword ptr [mem_00925694]
    L2:
        pop     edi
        pop     esi
        ret     4
    }
}
