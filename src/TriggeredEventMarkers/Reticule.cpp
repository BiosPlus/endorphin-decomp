// Decompiled translation unit: src/TriggeredEventMarkers/Reticule.cpp

extern "C" void ext_00412690();
extern "C" void ext_0041AEE0();
extern "C" void ext_00493D90();
extern "C" void ext_0066A180();
extern "C" void ext_0066A4E0();

// [0x0045A570] TriggeredEventMarkers::Reticule::vfunc_1 (836 bytes)
extern "C" __declspec(naked) void __fastcall fn_0045A570(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        push    ebp
        mov     ebp, esp
        and     esp, -0x8
        push    -0x1
        push    0x89c478
        mov     eax, fs:[0x0]
        push    eax
        mov     fs:[0x0], esp
        sub     esp, 0x50
        push    ebx
        mov     ebx, ecx
        cmp     byte ptr [ebx + 0x88], 0x0
        mov     eax, dword ptr [ebx + 0x48]
        mov     ecx, dword ptr [eax + 0x184]
        push    esi
        push    edi
        mov     dword ptr [esp + 0x18], ecx
        je      loc_45A5B0
        mov     edx, dword ptr [ebx + 0x74]
        mov     esi, dword ptr [edx]
        jmp     loc_45A5B5
    loc_45A5B0:
        mov     eax, dword ptr [ebx + 0x70]
        mov     esi, dword ptr [eax]
    loc_45A5B5:
        mov     ecx, esi
        call    ext_0066A180
        mov     ecx, dword ptr [ebx + 0x48]
        push    0x0
        mov     edi, eax
        push    0x2
        add     ecx, 0x1b4
        push    edi
        call    ext_0041AEE0
        mov     ecx, dword ptr [ebx + 0x48]
        push    0x0
        push    0x1
        add     ecx, 0x1b4
        push    edi
        mov     dword ptr [esp + 0x1c], eax
        call    ext_0041AEE0
        fld     dword ptr [esi]
        fstp    dword ptr [esp + 0x48]
        mov     dword ptr [esp + 0x20], eax
        fld     dword ptr [esi + 0x4]
        fstp    dword ptr [esp + 0x4c]
        fld     dword ptr [esi + 0x8]
        fstp    dword ptr [esp + 0x50]
        fld     dword ptr [esi + 0xc]
        fstp    dword ptr [esp + 0x54]
        lea     ecx, [esp + 0x48]
        mov     dword ptr [esp + 0x64], 0x0
        call    ext_0066A4E0
        mov     esi, dword ptr [ebx + 0x48]
        push    0x0
        push    0x1
        lea     ecx, [esp + 0x50]
        add     esi, 0x1b4
        call    ext_0066A180
        push    eax
        mov     ecx, esi
        call    ext_0041AEE0
        mov     edx, dword ptr [esp + 0x18]
        mov     dword ptr [esp + 0x38], eax
        mov     eax, dword ptr [ebp + 0x10]
        mov     esi, dword ptr [eax + 0x4]
        mov     ecx, dword ptr [eax + 0xc]
        mov     eax, dword ptr [eax]
        lea     edi, [ecx + esi]
        lea     ecx, [eax + edx]
        mov     ebx, eax
        mov     eax, dword ptr [ebp + 0x8]
        sub     ebx, edx
        mov     dword ptr [eax + 0x8], ecx
        mov     dword ptr [eax + 0xc], edi
        mov     dword ptr [eax], ebx
        mov     dword ptr [eax + 0x4], esi
        lea     eax, [ecx + 0x1]
        mov     ecx, dword ptr [esp + 0x10]
        lea     edx, [esp + 0x30]
        add     ecx, 0x8
        add     edi, -0x3
        push    edx
        mov     dword ptr [esp + 0x1c], eax
        mov     dword ptr [esp + 0x2c], eax
        mov     dword ptr [esp + 0x30], edi
        mov     dword ptr [esp + 0x34], eax
        mov     dword ptr [esp + 0x38], esi
        mov     dword ptr [esp + 0x14], ecx
        call    ext_00412690
        mov     ecx, dword ptr [esp + 0x10]
        lea     eax, [esp + 0x28]
        push    eax
        call    ext_00412690
        lea     ecx, [esp + 0x30]
        push    ecx
        mov     ecx, dword ptr [esp + 0x14]
        mov     dword ptr [esp + 0x2c], ebx
        mov     dword ptr [esp + 0x30], esi
        mov     dword ptr [esp + 0x34], ebx
        mov     dword ptr [esp + 0x38], edi
        call    ext_00412690
        mov     ecx, dword ptr [esp + 0x10]
        lea     edx, [esp + 0x28]
        push    edx
        call    ext_00412690
        mov     eax, dword ptr [ebp + 0x10]
        mov     eax, dword ptr [eax + 0x4]
        add     esi, 0x1
        lea     ecx, [ebx + 0x5]
        mov     dword ptr [esp + 0x2c], esi
        mov     dword ptr [esp + 0x30], ecx
        mov     dword ptr [esp + 0x10], esi
        mov     esi, dword ptr [esp + 0x20]
        mov     dword ptr [esp + 0x40], ecx
        lea     ecx, [esp + 0x28]
        add     eax, 0x1
        add     esi, 0x8
        push    ecx
        mov     ecx, esi
        mov     dword ptr [esp + 0x48], eax
        mov     dword ptr [esp + 0x2c], ebx
        call    ext_00412690
        lea     edx, [esp + 0x40]
        push    edx
        mov     ecx, esi
        call    ext_00412690
        mov     ecx, dword ptr [esp + 0x18]
        mov     eax, dword ptr [ebp + 0x10]
        mov     eax, dword ptr [eax + 0x4]
        lea     edx, [ecx - 0x5]
        mov     dword ptr [esp + 0x28], edx
        add     edx, -0x1
        mov     dword ptr [esp + 0x40], ecx
        mov     ecx, dword ptr [esp + 0x10]
        mov     dword ptr [esp + 0x20], edx
        lea     edx, [esp + 0x40]
        add     eax, 0x1
        mov     dword ptr [esp + 0x44], ecx
        push    edx
        mov     ecx, esi
        mov     dword ptr [esp + 0x28], eax
        call    ext_00412690
        lea     eax, [esp + 0x20]
        push    eax
        mov     ecx, esi
        call    ext_00412690
        lea     ecx, [esp + 0x40]
        lea     eax, [ebx + 0x5]
        push    ecx
        mov     ecx, esi
        mov     dword ptr [esp + 0x24], eax
        mov     dword ptr [esp + 0x14], eax
        mov     dword ptr [esp + 0x18], edi
        mov     dword ptr [esp + 0x44], ebx
        mov     dword ptr [esp + 0x48], edi
        call    ext_00412690
        lea     edx, [esp + 0x10]
        push    edx
        mov     ecx, esi
        call    ext_00412690
        lea     eax, [edi - 0x5]
        lea     ecx, [esp + 0x40]
        mov     dword ptr [esp + 0x14], eax
        mov     eax, dword ptr [esp + 0x20]
        push    ecx
        add     ebx, 0xa
        mov     ecx, esi
        mov     dword ptr [esp + 0x14], ebx
        mov     dword ptr [esp + 0x44], eax
        mov     dword ptr [esp + 0x48], edi
        call    ext_00412690
        lea     edx, [esp + 0x10]
        push    edx
        mov     ecx, esi
        call    ext_00412690
        mov     ebx, dword ptr [esp + 0x18]
        lea     eax, [ebx - 0x6]
        mov     dword ptr [esp + 0x20], eax
        mov     dword ptr [esp + 0x18], eax
        lea     eax, [esp + 0x40]
        mov     dword ptr [esp + 0x1c], edi
        mov     dword ptr [esp + 0x40], ebx
        mov     dword ptr [esp + 0x44], edi
        push    eax
        mov     ecx, esi
        call    ext_00412690
        lea     ecx, [esp + 0x18]
        push    ecx
        mov     ecx, esi
        call    ext_00412690
        mov     edx, dword ptr [esp + 0x20]
        lea     eax, [edi - 0x5]
        mov     dword ptr [esp + 0x1c], eax
        lea     eax, [esp + 0x40]
        add     ebx, -0xb
        push    eax
        mov     ecx, esi
        mov     dword ptr [esp + 0x1c], ebx
        mov     dword ptr [esp + 0x44], edx
        mov     dword ptr [esp + 0x48], edi
        call    ext_00412690
        lea     ecx, [esp + 0x18]
        push    ecx
        mov     ecx, esi
        call    ext_00412690
        mov     edx, dword ptr [esp + 0x28]
        mov     edi, dword ptr [ebp + 0x10]
        mov     eax, dword ptr [edi + 0x4]
        mov     ecx, dword ptr [esp + 0x30]
        mov     ebx, dword ptr [esp + 0x38]
        mov     dword ptr [esp + 0x28], edx
        add     eax, 0x1
        lea     edx, [esp + 0x40]
        mov     dword ptr [esp + 0x40], ecx
        add     ebx, 0x8
        push    edx
        mov     ecx, ebx
        mov     dword ptr [esp + 0x30], eax
        mov     dword ptr [esp + 0x48], eax
        call    ext_00412690
        lea     eax, [esp + 0x28]
        push    eax
        mov     ecx, ebx
        call    ext_00412690
        mov     eax, dword ptr [edi + 0x4]
        mov     edi, dword ptr [edi]
        lea     ecx, [eax + 0x4]
        mov     dword ptr [esp + 0x3c], ecx
        lea     ecx, [esp + 0x40]
        add     eax, 0x2
        push    ecx
        mov     ecx, esi
        mov     dword ptr [esp + 0x3c], edi
        mov     dword ptr [esp + 0x44], edi
        mov     dword ptr [esp + 0x48], eax
        call    ext_00412690
        lea     edx, [esp + 0x38]
        push    edx
        mov     ecx, esi
        call    ext_00412690
        lea     ecx, [esp + 0x48]
        mov     dword ptr [esp + 0x64], 0xffffffff
        call    ext_00493D90
        mov     ecx, dword ptr [esp + 0x5c]
        mov     eax, dword ptr [ebp + 0x8]
        pop     edi
        pop     esi
        mov     fs:[0x0], ecx
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc
    }
}
