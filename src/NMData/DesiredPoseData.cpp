// Decompiled translation unit: src/NMData/DesiredPoseData.cpp

extern "C" void ext_00427550();
extern "C" void ext_00640110();
extern "C" void ext_00640390();
extern "C" void ext_006404E0();
extern "C" void ext_00667030();
extern "C" void ext_0067F0F0();
extern "C" int mem_00A9EE28;
extern "C" int mem_00A9F838;
extern "C" int mem_00924FF0;
extern "C" int mem_00925134;
extern "C" int mem_00A9EE6C;
extern "C" int mem_00A9EE34;
extern "C" int mem_00A9EEE8;
extern "C" int mem_00A9F644;
extern "C" void ext_004275E0();
extern "C" void ext_00427A60();
extern "C" void ext_0046C0A0();
extern "C" void ext_00623600();
extern "C" void ext_0063EFE0();
extern "C" void ext_0063F530();
extern "C" void ext_006690D0();
extern "C" void ext_00669AD0();
extern "C" void ext_0067F080();
extern "C" int mem_00924FC0;
extern "C" int mem_00924FE8;
extern "C" int mem_00924FDC;
extern "C" int mem_00924FF4;
extern "C" int mem_00A9EE24;
extern "C" int mem_00924FE4;

// [0x00623150] NMData::DesiredPoseData::vfunc_3 (337 bytes)
extern "C" __declspec(naked) void* __fastcall fn_00623150(void* self, int edx_unused, void* arg1) {
    __asm {
        sub     esp, 0x14
        mov     eax, dword ptr [mem_00A9EE28]
        push    ebx
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esp + 0x20]
        push    eax
        call    ext_006404E0
        mov     ecx, dword ptr [mem_00A9F838]
        mov     ebx, eax
        push    ecx
        mov     ecx, ebx
        mov     dword ptr [esp + 0x0c], ebx
        call    ext_00640110
        lea     ecx, [esi + 0x8]
        mov     dword ptr [esp + 0x20], eax
        call    dword ptr [mem_00924FF0]
        push    eax
        lea     ecx, [esp + 0x24]
        call    ext_00427550
        cmp     byte ptr [esi + 0x50], 0
        jne     loc_00623258
        mov     edx, dword ptr [esi + 0x2c]
        push    ebp
        lea     ebp, [esi + 0x28]
        push    edi
        mov     edi, dword ptr [edx]
        mov     esi, ebp
        mov     eax, edx
        mov     dword ptr [esp + 0x18], edi
        mov     dword ptr [esp + 0x14], esi
        mov     dword ptr [esp + 0x20], eax
loc_006231b5:
        test    esi, esi
        je      loc_006231bd
        cmp     esi, ebp
        je      loc_006231c3
loc_006231bd:
        call    dword ptr [mem_00925134]
loc_006231c3:
        cmp     edi, dword ptr [esp + 0x20]
        je      loc_00623295
        mov     ecx, dword ptr [mem_00A9EE6C]
        push    ecx
        mov     ecx, ebx
        call    ext_006404E0
        test    esi, esi
        mov     ebx, eax
        jne     loc_006231e7
        call    dword ptr [mem_00925134]
loc_006231e7:
        cmp     edi, dword ptr [esi + 0x4]
        jne     loc_006231f2
        call    dword ptr [mem_00925134]
loc_006231f2:
        mov     edx, dword ptr [mem_00A9F838]
        push    edx
        mov     ecx, ebx
        call    ext_00640110
        lea     ecx, [edi + 0x0c]
        mov     dword ptr [esp + 0x28], eax
        call    dword ptr [mem_00924FF0]
        push    eax
        lea     ecx, [esp + 0x2c]
        call    ext_00427550
        cmp     edi, dword ptr [esi + 0x4]
        jne     loc_00623222
        call    dword ptr [mem_00925134]
loc_00623222:
        mov     eax, dword ptr [mem_00A9EE34]
        add     edi, 0x28
        push    edi
        push    0
        push    eax
        mov     ecx, ebx
        call    ext_00640390
        push    eax
        call    ext_0067F0F0
        add     esp, 8
        lea     ecx, [esp + 0x14]
        call    ext_00667030
        mov     edi, dword ptr [esp + 0x18]
        mov     esi, dword ptr [esp + 0x14]
        mov     ebx, dword ptr [esp + 0x10]
        jmp     loc_006231b5
loc_00623258:
        mov     ecx, dword ptr [mem_00A9EEE8]
        push    ecx
        mov     ecx, ebx
        call    ext_006404E0
        mov     edx, dword ptr [mem_00A9F644]
        push    edx
        mov     ecx, eax
        call    ext_00640110
        lea     ecx, [esi + 0x34]
        mov     dword ptr [esp + 0x20], eax
        call    dword ptr [mem_00924FF0]
        push    eax
        lea     ecx, [esp + 0x24]
        call    ext_00427550
        pop     esi
        mov     eax, ebx
        pop     ebx
        add     esp, 0x14
        ret     4
loc_00623295:
        pop     edi
        pop     ebp
        pop     esi
        mov     eax, ebx
        pop     ebx
        add     esp, 0x14
        ret     4
    }
}

// [0x006239D0] NMData::DesiredPoseData::vfunc_1 (944 bytes)
extern "C" __declspec(naked) void __fastcall fn_006239D0(void* self, int edx_unused, void* arg1) {
    __asm {
        push    -0x1
        mov     eax, dword ptr fs:[0x0]
        push    0x008AA4D7
        push    eax
        mov     dword ptr fs:[0x0], esp
        sub     esp, 0xb0
        push    ebx
        push    ebp
        mov     ebp, ecx
        cmp     byte ptr [ebp + 0x50], 0x0
        push    esi
        push    edi
        jne     loc_00623A16
        mov     eax, dword ptr [mem_00A9F838]
        mov     ecx, dword ptr [esp + 0xd0]
        push    eax
        call    ext_0063EFE0
        push    eax
        lea     ecx, [ebp + 0x8]
        push    ecx
        call    ext_004275E0
        add     esp, 0x8
loc_00623A16:
        mov     esi, dword ptr [esp + 0xd0]
        mov     edi, dword ptr [esi + 0x28]
        add     esi, 0x24
        cmp     edi, dword ptr [esi + 0x8]
        jbe     loc_00623A2E
        call    dword ptr [mem_00925134]
loc_00623A2E:
        lea     ecx, [esp + 0x10]
        mov     dword ptr [esp + 0x10], esi
        mov     dword ptr [esp + 0x14], esi
        mov     dword ptr [esp + 0x18], edi
        call    ext_00427A60
        mov     edi, dword ptr [esi + 0x8]
        cmp     dword ptr [esi + 0x4], edi
        jbe     loc_00623A51
        call    dword ptr [mem_00925134]
loc_00623A51:
        lea     ecx, [esp + 0x24]
        mov     dword ptr [esp + 0x24], esi
        mov     dword ptr [esp + 0x28], esi
        mov     dword ptr [esp + 0x2c], edi
        call    ext_00427A60
        mov     ebx, 0x1
        jmp     loc_00623A70
        __emit  0x8d
        __emit  0x49
        __emit  0x00
loc_00623A70:
        mov     esi, dword ptr [esp + 0x14]
        test    esi, esi
        je      loc_00623A7E
        cmp     esi, dword ptr [esp + 0x28]
        je      loc_00623A84
loc_00623A7E:
        call    dword ptr [mem_00925134]
loc_00623A84:
        mov     edi, dword ptr [esp + 0x18]
        cmp     edi, dword ptr [esp + 0x2c]
        je      loc_00623D65
        test    esi, esi
        jne     loc_00623A9C
        call    dword ptr [mem_00925134]
loc_00623A9C:
        cmp     edi, dword ptr [esi + 0x8]
        jb      loc_00623AA7
        call    dword ptr [mem_00925134]
loc_00623AA7:
        mov     edi, dword ptr [edi]
        mov     edx, dword ptr [mem_00A9EE6C]
        push    edx
        lea     esi, [edi + 0x4]
        push    esi
        call    dword ptr [mem_00924FC0]
        add     esp, 0x8
        test    al, al
        je      loc_00623C6E
        lea     ecx, [esp + 0x40]
        call    dword ptr [mem_00924FE8]
        mov     eax, dword ptr [mem_00A9F838]
        push    eax
        mov     ecx, edi
        mov     dword ptr [esp + 0xcc], 0x0
        call    ext_0063EFE0
        mov     edx, dword ptr [eax]
        mov     edx, dword ptr [edx + 0x8]
        lea     ecx, [esp + 0x94]
        push    ecx
        mov     ecx, eax
        call    edx
        push    eax
        lea     ecx, [esp + 0x44]
        mov     byte ptr [esp + 0xcc], bl
        call    dword ptr [mem_00924FDC]
        lea     ecx, [esp + 0x94]
        mov     byte ptr [esp + 0xc8], 0x0
        call    dword ptr [mem_00924FF4]
        mov     eax, dword ptr [mem_00A9EE24]
        push    ebx
        push    0x0
        push    eax
        mov     ecx, edi
        call    ext_0063F530
        cmp     eax, 0xb53a34
        je      loc_00623B52
        cmp     eax, 0xb53b30
        je      loc_00623B52
        cmp     eax, 0xb53ab0
        je      loc_00623B52
        cmp     eax, 0xb53a70
        je      loc_00623B52
        cmp     eax, 0xb53af0
        jne     loc_00623B57
loc_00623B52:
        mov     eax, 0xb53b30
loc_00623B57:
        cmp     eax, 0xb53a34
        je      loc_00623C0E
        cmp     eax, 0xb53b30
        je      loc_00623C0E
        cmp     eax, 0xb53ab0
        je      loc_00623C0E
        cmp     eax, 0xb53a70
        je      loc_00623C0E
        cmp     eax, 0xb53af0
        je      loc_00623C0E
        mov     ecx, dword ptr [mem_00A9EE24]
        push    ebx
        push    0x0
        push    ecx
        mov     ecx, edi
        call    ext_0063F530
        cmp     eax, 0xb53a34
        je      loc_00623BC2
        cmp     eax, 0xb53b30
        je      loc_00623BC2
        cmp     eax, 0xb53ab0
        je      loc_00623BC2
        cmp     eax, 0xb53a70
        je      loc_00623BC2
        cmp     eax, 0xb53af0
        jne     loc_00623BC7
loc_00623BC2:
        mov     eax, 0xb53b30
loc_00623BC7:
        lea     edx, [esp + 0x20]
        mov     dword ptr [esp + 0x20], eax
        push    edx
        lea     eax, [esp + 0x20]
        push    eax
        call    ext_0046C0A0
        fld     dword ptr [esp + 0x24]
        fstp    dword ptr [esp + 0x38]
        add     esp, 0x8
        fldz
        lea     ecx, [esp + 0x30]
        push    ecx
        fst     dword ptr [esp + 0x38]
        lea     edx, [esp + 0x44]
        fst     dword ptr [esp + 0x3c]
        push    edx
        fstp    dword ptr [esp + 0x44]
        lea     ecx, [ebp + 0x24]
        call    ext_00623600
        lea     ecx, [esp + 0x40]
        jmp     loc_00623D2E
loc_00623C0E:
        mov     eax, dword ptr [mem_00A9EE34]
        push    ebx
        push    0x0
        push    eax
        mov     ecx, edi
        call    ext_0063F530
        cmp     eax, 0xb53a34
        je      loc_00623C41
        cmp     eax, 0xb53b30
        je      loc_00623C41
        cmp     eax, 0xb53ab0
        je      loc_00623C41
        cmp     eax, 0xb53a70
        je      loc_00623C41
        cmp     eax, 0xb53af0
        jne     loc_00623C46
loc_00623C41:
        mov     eax, 0xb53b30
loc_00623C46:
        push    eax
        lea     ecx, [esp + 0xb4]
        push    ecx
        call    ext_0067F080
        add     esp, 0x8
        push    eax
        lea     edx, [esp + 0x44]
        push    edx
        lea     ecx, [ebp + 0x24]
        call    ext_00623600
        lea     ecx, [esp + 0x40]
        jmp     loc_00623D2E
loc_00623C6E:
        mov     eax, dword ptr [mem_00A9EEE8]
        push    eax
        push    esi
        call    dword ptr [mem_00924FC0]
        add     esp, 0x8
        test    al, al
        je      loc_00623D3F
        mov     ecx, dword ptr [mem_00A9F644]
        push    ecx
        mov     ecx, edi
        lea     esi, [ebp + 0x34]
        call    ext_0063EFE0
        push    eax
        push    esi
        call    ext_004275E0
        mov     edx, dword ptr [mem_00A9F838]
        mov     ecx, dword ptr [esp + 0xd8]
        add     esp, 0x8
        push    edx
        call    ext_0063EFE0
        push    eax
        lea     eax, [ebp + 0x8]
        push    eax
        call    ext_004275E0
        mov     byte ptr [ebp + 0x50], bl
        mov     ecx, dword ptr [mem_00A9EE28]
        add     esp, 0x8
        push    ecx
        lea     ecx, [esp + 0x60]
        call    dword ptr [mem_00924FE4]
        push    esi
        lea     edx, [esp + 0x60]
        push    edx
        lea     eax, [esp + 0x80]
        push    eax
        mov     dword ptr [esp + 0xd4], 0x2
        call    ext_006690D0
        mov     ecx, eax
        call    ext_00669AD0
        lea     ecx, [esp + 0x5c]
        mov     byte ptr [esp + 0xc8], 0x4
        call    dword ptr [mem_00924FF4]
        mov     ecx, dword ptr [mem_00A9EE28]
        mov     esi, dword ptr [ebp]
        push    ecx
        lea     ecx, [esp + 0x7c]
        add     esi, 0x20
        call    dword ptr [mem_00924FF0]
        mov     edx, dword ptr [esi]
        push    eax
        mov     ecx, ebp
        call    edx
        lea     ecx, [esp + 0x78]
loc_00623D2E:
        mov     dword ptr [esp + 0xc8], 0xffffffff
        call    dword ptr [mem_00924FF4]
loc_00623D3F:
        mov     eax, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [esp + 0x18]
        cmp     ecx, dword ptr [eax + 0x8]
        jb      loc_00623D52
        call    dword ptr [mem_00925134]
loc_00623D52:
        add     dword ptr [esp + 0x18], 0x4
        lea     ecx, [esp + 0x10]
        call    ext_00427A60
        jmp     loc_00623A70
loc_00623D65:
        mov     ecx, dword ptr [esp + 0xc0]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        mov     dword ptr fs:[0x0], ecx
        add     esp, 0xbc
        ret     0x4
    }
}
