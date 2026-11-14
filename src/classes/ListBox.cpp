// Decompiled translation unit: src/classes/ListBox.cpp

extern "C" void ext_0042ECC0();
extern "C" void ext_006A5FF2();
extern "C" void ext_006A6004();
extern "C" void ext_006A617E();
extern "C" int mem_00925658;
extern "C" int mem_0093A0C0;
extern "C" int mem_0093A0B0;
extern "C" int mem_0093A0BC;
extern "C" int mem_009242F0;
extern "C" int mem_0092431C;
extern "C" int mem_00924300;
extern "C" int mem_00924080;
extern "C" int mem_009242F4;
extern "C" int mem_00925620;

// [0x0042ED30] ListBox::vfunc_81 (275 bytes)
extern "C" __declspec(naked) void __fastcall fn_0042ED30(void* self, int edx_unused, void* a1) {
    __asm {
        push -1
        push 0x8b7418
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x10
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr [edi + 0x20]
        push eax
        call dword ptr [mem_00925658]
        push eax
        call ext_006A6004
        mov esi, eax
        mov dword ptr [esp + 0x10], 0x0
        mov dword ptr [esp + 0xc], 0x92a5d4
        mov ebx, dword ptr [esp + 0x2c]
        mov ecx, dword ptr [ebx + 0x8]
        push ecx
        mov ecx, edi
        mov dword ptr [esp + 0x28], 0x0
        call ext_0042ECC0
        test al, al
        push 0x0
        je L1
        mov edx, dword ptr [mem_0093A0C0]
        mov eax, dword ptr [mem_0093A0B0]
        push edx
        push eax
        jmp L2
    L1:
        mov ecx, dword ptr [mem_0093A0BC]
        mov edx, dword ptr [mem_0093A0B0]
        push ecx
        push edx
    L2:
        lea ecx, [esp + 0x18]
        call ext_006A617E
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x30]
        lea ecx, [esp + 0xc]
        push ecx
        mov ecx, esi
        call edx
        push 0x92f674
        lea ecx, [esp + 0x30]
        call dword ptr [mem_009242F0]
        lea eax, [esp + 0x14]
        push eax
        lea ecx, [esp + 0x30]
        call dword ptr [mem_0092431C]
        push eax
        lea ecx, [esp + 0x34]
        call dword ptr [mem_00924300]
        mov ecx, dword ptr [esi + 0x8]
        push eax
        push ecx
        call dword ptr [mem_00924080]
        lea ecx, [esp + 0x2c]
        call dword ptr [mem_009242F4]
        mov edx, dword ptr [esp + 0x18]
        add edx, 0x1
        mov dword ptr [ebx + 0x10], edx
        mov eax, dword ptr [esi + 0x4]
        mov ecx, dword ptr [edi + 0x20]
        push eax
        push ecx
        call dword ptr [mem_00925620]
        lea ecx, [esp + 0xc]
        mov dword ptr [esp + 0x24], 0xffffffff
        mov dword ptr [esp + 0xc], 0x92a23c
        call ext_006A5FF2
        mov ecx, dword ptr [esp + 0x1c]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x1c
        ret 0x4
    }
}

// [0x0042F0B0] ListBox::vfunc_80 (768 bytes)
extern "C" void ext_0042EA90();
extern "C" void ext_0042ECC0();
extern "C" void ext_0042EF30();
extern "C" void ext_006A5C5C();
extern "C" void ext_006A5FF2();
extern "C" void ext_006A6004();
extern "C" void ext_006A6010();
extern "C" void ext_006A60E8();
extern "C" void ext_006A617E();
extern "C" void ext_006A61AE();
extern "C" int mem_00879D23;
extern "C" int mem_00925694;
extern "C" int mem_00928B5D;
extern "C" int mem_009242F0;
extern "C" int mem_00925670;
extern "C" int mem_0093A0C4;
extern "C" int mem_00925680;
extern "C" int mem_00925648;
extern "C" int mem_0093A0CC;
extern "C" int mem_0092A5D4;
extern "C" int mem_0093A0C0;
extern "C" int mem_0093A0B0;
extern "C" int mem_0093A0BC;
extern "C" int mem_00924FF0;
extern "C" int mem_009244D4;
extern "C" int mem_009242F4;
extern "C" int mem_0092431C;
extern "C" int mem_00924300;
extern "C" int mem_00924FF4;
extern "C" int mem_0092A23C;

extern "C" __declspec(naked) void __fastcall fn_0042F0B0(void* self, int edx_unused, void* arg) {
    __asm {
        push    -1
        push    offset mem_00879D23
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x48
        push    ebx
        push    esi
        mov     esi, dword ptr [esp + 0x60]
        mov     eax, dword ptr [esi + 0x18]
        push    edi
        mov     ebx, ecx
        push    eax
        mov     dword ptr [esp + 0x20], ebx
        call    ext_006A6004
        mov     ecx, dword ptr [ebx + 0x20]
        push    0
        push    0
        push    0x18b
        push    ecx
        mov     edi, eax
        call    dword ptr [mem_00925694]
        test    eax, eax
        je      L_ret
        push    offset mem_00928B5D
        lea     ecx, [esp + 0x18]
        call    dword ptr [mem_009242F0]
        mov     eax, dword ptr [esi + 8]
        lea     edx, [esp + 0x14]
        push    edx
        push    eax
        mov     ecx, ebx
        mov     dword ptr [esp + 0x64], 0
        call    ext_006A60E8
        lea     ecx, [esi + 0x1c]
        push    ecx
        lea     edx, [esp + 0x48]
        push    edx
        call    dword ptr [mem_00925670]
        push    2
        mov     ecx, edi
        call    ext_006A6010
        test    byte ptr [esi + 0x10], 1
        mov     eax, dword ptr [mem_0093A0C4]
        je      L_no_syscolor1
        push    0xd
        call    dword ptr [mem_00925680]
    L_no_syscolor1:
        push    ebp
        push    eax
        lea     ecx, [esp + 0x34]
        call    ext_006A61AE
        mov     eax, dword ptr [esp + 0x34]
        mov     edx, dword ptr [edi + 4]
        push    eax
        lea     ecx, [esp + 0x4c]
        push    ecx
        push    edx
        call    dword ptr [mem_00925648]
        test    byte ptr [esi + 0x10], 1
        mov     ebp, dword ptr [mem_0093A0CC]
        je      L_no_syscolor2
        push    5
        call    dword ptr [mem_00925680]
        mov     ebp, eax
    L_no_syscolor2:
        mov     dword ptr [esp + 0x2c], 0
        mov     dword ptr [esp + 0x28], offset mem_0092A5D4
        mov     eax, dword ptr [esi + 8]
        push    eax
        mov     ecx, ebx
        mov     byte ptr [esp + 0x64], 2
        call    ext_0042ECC0
        test    al, al
        je      L_else_branch
        mov     ecx, dword ptr [mem_0093A0C0]
        mov     edx, dword ptr [mem_0093A0B0]
        xor     esi, esi
        push    esi
        push    ecx
        push    edx
        lea     ecx, [esp + 0x34]
        call    ext_006A617E
        jmp     L_after_branch
    L_else_branch:
        mov     eax, dword ptr [mem_0093A0BC]
        mov     ecx, dword ptr [mem_0093A0B0]
        push    0
        push    eax
        push    ecx
        lea     ecx, [esp + 0x34]
        call    ext_006A617E
        xor     esi, esi
    L_after_branch:
        mov     edx, dword ptr [edi]
        mov     eax, dword ptr [edx + 0x38]
        push    ebp
        mov     ecx, edi
        call    eax
        mov     edx, dword ptr [edi]
        mov     edx, dword ptr [edx + 0x30]
        lea     eax, [esp + 0x28]
        push    eax
        mov     ecx, edi
        call    edx
        push    1
        mov     ecx, edi
        call    ext_006A6010
        mov     dword ptr [esp + 0x3c], esi
        mov     dword ptr [esp + 0x40], esi
        mov     dword ptr [esp + 0x44], esi
        lea     eax, [esp + 0x14]
        push    eax
        lea     ecx, [esp + 0x3c]
        push    ecx
        lea     edx, [esp + 0x20]
        push    edx
        mov     ecx, ebx
        mov     byte ptr [esp + 0x6c], 3
        mov     dword ptr [esp + 0x20], esi
        call    ext_0042EF30
        xor     ebx, ebx
        mov     dword ptr [esp + 0x10], esi
        mov     dword ptr [esp + 0x1c], 4
    L_loop_start:
        mov     esi, dword ptr [esp + 0x3c]
        test    esi, esi
        mov     ebp, dword ptr [esp + 0x40]
        je      L_loop_end
        mov     ecx, ebp
        sub     ecx, esi
        mov     eax, 0x92492493
        imul    ecx
        add     edx, ecx
        sar     edx, 4
        mov     eax, edx
        shr     eax, 0x1f
        add     eax, edx
        cmp     ebx, eax
        jae     L_loop_end
        mov     eax, dword ptr [esp + 0x10]
        lea     ecx, [eax + esi]
        call    dword ptr [mem_00924FF0]
        push    eax
        lea     ecx, [esp + 0x6c]
        call    dword ptr [mem_009242F0]
        mov     eax, dword ptr [esp + 0x3c]
        test    eax, eax
        mov     byte ptr [esp + 0x60], 4
        je      L_skip_div2
        mov     ecx, dword ptr [esp + 0x40]
        sub     ecx, eax
        mov     eax, 0x92492493
        imul    ecx
        add     edx, ecx
        sar     edx, 4
        mov     eax, edx
        shr     eax, 0x1f
        add     eax, edx
    L_skip_div2:
        add     eax, -1
        cmp     ebx, eax
        jae     L_skip_call_42EA90
        mov     ecx, dword ptr [esp + 0x14]
        push    ecx
        mov     ecx, dword ptr [esp + 0x24]
        lea     edx, [esp + 0x6c]
        push    edx
        push    edi
        lea     eax, [esp + 0x30]
        push    eax
        call    ext_0042EA90
        push    eax
        lea     ecx, [esp + 0x6c]
        mov     byte ptr [esp + 0x64], 5
        call    dword ptr [mem_009244D4]
        lea     ecx, [esp + 0x24]
        mov     byte ptr [esp + 0x60], 4
        call    dword ptr [mem_009242F4]
    L_skip_call_42EA90:
        mov     esi, dword ptr [edi]
        mov     ebp, dword ptr [esp + 0x4c]
        lea     ecx, [esp + 0x68]
        add     esi, 0x64
        call    dword ptr [mem_0092431C]
        push    eax
        lea     ecx, [esp + 0x6c]
        call    dword ptr [mem_00924300]
        mov     edx, dword ptr [esi]
        push    eax
        push    ebp
        mov     ebp, dword ptr [esp + 0x28]
        push    ebp
        mov     ecx, edi
        call    edx
        lea     ecx, [esp + 0x68]
        mov     byte ptr [esp + 0x60], 3
        call    dword ptr [mem_009242F4]
        add     dword ptr [esp + 0x10], 0x1c
        add     ebx, 1
        add     ebp, dword ptr [esp + 0x14]
        mov     dword ptr [esp + 0x1c], ebp
        jmp     L_loop_start
    L_loop_end:
        xor     edi, edi
        cmp     esi, edi
        mov     byte ptr [esp + 0x60], 2
        je      L_after_vec_free
        cmp     esi, ebp
        je      L_vec_free
    L_vec_dtor_loop:
        mov     ecx, esi
        call    dword ptr [mem_00924FF4]
        add     esi, 0x1c
        cmp     esi, ebp
        jne     L_vec_dtor_loop
        mov     esi, dword ptr [esp + 0x3c]
    L_vec_free:
        push    esi
        call    ext_006A5C5C
        add     esp, 4
    L_after_vec_free:
        mov     esi, offset mem_0092A23C
        lea     ecx, [esp + 0x28]
        mov     dword ptr [esp + 0x3c], edi
        mov     dword ptr [esp + 0x40], edi
        mov     dword ptr [esp + 0x44], edi
        mov     byte ptr [esp + 0x60], 1
        mov     dword ptr [esp + 0x28], esi
        call    ext_006A5FF2
        lea     ecx, [esp + 0x30]
        mov     byte ptr [esp + 0x60], 0
        mov     dword ptr [esp + 0x30], esi
        call    ext_006A5FF2
        lea     ecx, [esp + 0x18]
        call    dword ptr [mem_009242F4]
        pop     ebp
    L_ret:
        mov     ecx, dword ptr [esp + 0x54]
        pop     edi
        pop     esi
        pop     ebx
        mov     dword ptr fs:[0], ecx
        add     esp, 0x54
        ret     4
    }
}
