// Decompiled translation unit: src/classes/ToolsPropertyPage.cpp

// [0x0045B0A0] ToolsPropertyPage::vfunc_63 (175 bytes)
extern "C" void ext_006A5F44();

extern "C" void __fastcall fn_0045B0A0(void* self, int edx_unused, int a1) {
    typedef void (__stdcall *DdxFn)(int, int, void*);
    char* p = (char*)self;
    DdxFn ddx = (DdxFn)ext_006A5F44;
    ddx(a1, 0x42f, p + 0x8c);
    ddx(a1, 0x492, p + 0xe0);
    ddx(a1, 0x430, p + 0x134);
    ddx(a1, 0x438, p + 0x188);
    ddx(a1, 0x431, p + 0x1dc);
    ddx(a1, 0x433, p + 0x230);
    ddx(a1, 0x432, p + 0x284);
    ddx(a1, 0x434, p + 0x2d8);
    ddx(a1, 0x435, p + 0x32c);
}

// [0x0045B150] ToolsPropertyPage::vfunc_91 (695 bytes)
extern "C" void ext_00404F00();
extern "C" void ext_00664840();
extern "C" void ext_006A5F50();
extern "C" void ext_006A6226();
extern "C" int mem_00924FF0;
extern "C" int mem_00924FF4;
extern "C" int mem_00925694;

extern "C" __declspec(naked) int __fastcall fn_0045B150(void* self) {
    __asm {
        push    -1
        push    0x87f6c8
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x38
        push    esi
        push    edi
        mov     esi, ecx
        call    ext_006A6226

        mov     ecx, dword ptr [esi + 0x88]
        mov     eax, dword ptr [ecx]
        mov     edx, dword ptr [eax + 0x110]
        call    edx
        push    ecx
        lea     eax, [esp + 0xc]
        fstp    dword ptr [esp]
        push    eax
        call    ext_00664840
        add     esp, 8
        mov     ecx, eax
        mov     dword ptr [esp + 0x48], 0
        call    dword ptr [mem_00924FF0]
        push    eax
        lea     ecx, [esi + 0x8c]
        call    ext_006A5F50
        or      edi, -1
        lea     ecx, [esp + 8]
        mov     dword ptr [esp + 0x48], edi
        call    dword ptr [mem_00924FF4]

        mov     ecx, dword ptr [esi + 0x88]
        mov     edx, dword ptr [ecx]
        mov     eax, dword ptr [edx + 0x114]
        call    eax
        push    ecx
        lea     ecx, [esp + 0xc]
        fstp    dword ptr [esp]
        push    ecx
        call    ext_00664840
        add     esp, 8
        mov     ecx, eax
        mov     dword ptr [esp + 0x48], 1
        call    dword ptr [mem_00924FF0]
        push    eax
        lea     ecx, [esi + 0xe0]
        call    ext_006A5F50
        lea     ecx, [esp + 8]
        mov     dword ptr [esp + 0x48], edi
        call    dword ptr [mem_00924FF4]

        mov     ecx, dword ptr [esi + 0x88]
        mov     edx, dword ptr [ecx]
        mov     eax, dword ptr [edx + 0x118]
        call    eax
        push    ecx
        lea     ecx, [esp + 0xc]
        fstp    dword ptr [esp]
        push    ecx
        call    ext_00664840
        add     esp, 8
        mov     ecx, eax
        mov     dword ptr [esp + 0x48], 2
        call    dword ptr [mem_00924FF0]
        push    eax
        lea     ecx, [esi + 0x134]
        call    ext_006A5F50
        lea     ecx, [esp + 8]
        mov     dword ptr [esp + 0x48], edi
        call    dword ptr [mem_00924FF4]

        mov     ecx, dword ptr [esi + 0x88]
        mov     edx, dword ptr [ecx]
        mov     eax, dword ptr [edx + 0x11c]
        call    eax
        mov     ecx, dword ptr [esi + 0x1a8]
        movzx   eax, al
        push    0
        push    eax
        push    0xf1
        push    ecx
        call    dword ptr [mem_00925694]

        mov     ecx, dword ptr [esi + 0x88]
        mov     edx, dword ptr [ecx]
        mov     eax, dword ptr [edx + 0x120]
        call    eax
        push    ecx
        lea     ecx, [esp + 0xc]
        fstp    dword ptr [esp]
        push    ecx
        call    ext_00664840
        add     esp, 8
        mov     ecx, eax
        mov     dword ptr [esp + 0x48], 3
        call    dword ptr [mem_00924FF0]
        push    eax
        lea     ecx, [esi + 0x1dc]
        call    ext_006A5F50
        lea     ecx, [esp + 8]
        mov     dword ptr [esp + 0x48], edi
        call    dword ptr [mem_00924FF4]

        mov     ecx, dword ptr [esi + 0x88]
        mov     edx, dword ptr [ecx]
        mov     eax, dword ptr [edx + 0x124]
        call    eax
        push    ecx
        lea     ecx, [esp + 0xc]
        fstp    dword ptr [esp]
        push    ecx
        call    ext_00664840
        add     esp, 8
        mov     ecx, eax
        mov     dword ptr [esp + 0x48], 4
        call    dword ptr [mem_00924FF0]
        push    eax
        lea     ecx, [esi + 0x230]
        call    ext_006A5F50
        lea     ecx, [esp + 8]
        mov     dword ptr [esp + 0x48], edi
        call    dword ptr [mem_00924FF4]

        mov     ecx, dword ptr [esi + 0x88]
        mov     edx, dword ptr [ecx]
        mov     eax, dword ptr [edx + 0x128]
        call    eax
        push    ecx
        lea     ecx, [esp + 0xc]
        fstp    dword ptr [esp]
        push    ecx
        call    ext_00664840
        add     esp, 8
        mov     ecx, eax
        mov     dword ptr [esp + 0x48], 5
        call    dword ptr [mem_00924FF0]
        push    eax
        lea     ecx, [esi + 0x284]
        call    ext_006A5F50
        lea     ecx, [esp + 8]
        mov     dword ptr [esp + 0x48], edi
        call    dword ptr [mem_00924FF4]

        mov     ecx, dword ptr [esi + 0x88]
        mov     edx, dword ptr [ecx]
        mov     eax, dword ptr [edx + 0x12c]
        call    eax
        push    ecx
        lea     ecx, [esp + 0xc]
        fstp    dword ptr [esp]
        push    ecx
        call    ext_00664840
        add     esp, 8
        mov     ecx, eax
        mov     dword ptr [esp + 0x48], 6
        call    dword ptr [mem_00924FF0]
        push    eax
        lea     ecx, [esi + 0x2d8]
        call    ext_006A5F50
        lea     ecx, [esp + 8]
        mov     dword ptr [esp + 0x48], edi
        call    dword ptr [mem_00924FF4]

        mov     ecx, dword ptr [esi + 0x88]
        mov     edx, dword ptr [ecx]
        mov     eax, dword ptr [edx + 0x130]
        call    eax
        push    eax
        lea     ecx, [esp + 0x28]
        push    ecx
        call    ext_00404F00
        add     esp, 8
        mov     ecx, eax
        mov     dword ptr [esp + 0x48], 7
        call    dword ptr [mem_00924FF0]
        push    eax
        lea     ecx, [esi + 0x32c]
        call    ext_006A5F50
        lea     ecx, [esp + 0x24]
        mov     dword ptr [esp + 0x48], edi
        call    dword ptr [mem_00924FF4]

        mov     ecx, dword ptr [esp + 0x40]
        pop     edi
        mov     eax, 1
        pop     esi
        mov     dword ptr fs:[0], ecx
        add     esp, 0x44
        ret
    }
}
