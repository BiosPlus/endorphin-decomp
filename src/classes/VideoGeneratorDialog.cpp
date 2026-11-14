// Decompiled translation unit: src/classes/VideoGeneratorDialog.cpp

// [0x004636E0] VideoGeneratorDialog::vfunc_2_off_74 (39 bytes)
extern "C" int mem_00925694;

extern "C" __declspec(naked) void __fastcall fn_004636E0(void* self, int edx_unused, unsigned short x, unsigned short y) {
    __asm {
        movzx eax, word ptr [esp + 0x8]
        movzx edx, word ptr [esp + 0x4]
        shl eax, 0x10
        or eax, edx
        push eax
        mov eax, dword ptr [ecx + 0x120]
        push 0x0
        push 0x401
        push eax
        call dword ptr [mem_00925694]
        ret 0x8
    }
}

// [0x00463590] VideoGeneratorDialog::vfunc_63 (295 bytes)
extern "C" void ext_006A5F44();

extern "C" void __fastcall fn_00463590(void* self, int edx_unused, void* a1) {
    typedef void (__stdcall *DdxFn)(void*, int, void*);
    char* p = (char*)self;
    DdxFn ddx = (DdxFn)ext_006A5F44;
    ddx(a1, 0x3f3, p + 0x1c8);
    ddx(a1, 0x488, p + 0x21c);
    ddx(a1, 0x433, p + 0x2c4);
    ddx(a1, 0x3f4, p + 0x78);
    ddx(a1, 0x3f5, p + 0xcc);
    ddx(a1, 0x3f6, p + 0x120);
    ddx(a1, 0x169, p + 0x174);
    ddx(a1, 0x8, p + 0x318);
    ddx(a1, 0x499, p + 0x36c);
    ddx(a1, 0x498, p + 0x3c0);
    ddx(a1, 0x441, p + 0x424);
    ddx(a1, 0x442, p + 0x478);
    ddx(a1, 0x443, p + 0x4cc);
    ddx(a1, 0x444, p + 0x520);
    ddx(a1, 0x47b, p + 0x574);
    ddx(a1, 0x47a, p + 0x5c8);
}

// [0x00463F90] VideoGeneratorDialog::vfunc_84 (637 bytes)
extern "C" void ext_00404F00();
extern "C" void ext_0041A920();
extern "C" void ext_006A5EDE();
extern "C" void ext_006A5F50();
extern "C" void ext_006A5FC8();
extern "C" void ext_006A640C();
extern "C" void ext_006A6DE0();
extern "C" int mem_0092565C;
extern "C" int mem_00925694;
extern "C" int mem_0092566C;
extern "C" int mem_00939330;
extern "C" int mem_00A9EEE8;
extern "C" int mem_00A9F188;
extern "C" int mem_00924FF0;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) int __fastcall fn_00463F90(void* self) {
    __asm {
        push    -0x1
        push    0x008b56f9
        mov     eax, dword ptr fs:[0x0]
        push    eax
        mov     dword ptr fs:[0x0], esp
        sub     esp, 0x30
        push    ebx
        push    esi
        push    edi
        mov     esi, ecx
        call    ext_006A5FC8
        call    ext_006A5EDE
        mov     eax, dword ptr [eax + 0x8]
        mov     edi, dword ptr [mem_0092565C]
        push    0xfc
        push    eax
        call    edi
        mov     ebx, eax
        call    ext_006A5EDE
        mov     eax, dword ptr [eax + 0x8]
        push    0xfd
        push    eax
        call    edi
        push    ebx
        mov     ebx, dword ptr [mem_00925694]
        push    0x1
        mov     edi, eax
        mov     eax, dword ptr [esi + 0x20]
        push    0x80
        push    eax
        call    ebx
        mov     ecx, dword ptr [esi + 0x20]
        push    edi
        push    0x0
        push    0x80
        push    ecx
        call    ebx
        mov     eax, dword ptr [esi + 0x2e4]
        lea     edx, [esp + 0x10]
        push    edx
        push    eax
        call    dword ptr [mem_0092566C]
        mov     ecx, dword ptr [esp + 0x18]
        sub     ecx, dword ptr [esp + 0x10]
        push    0x0
        mov     dword ptr [esp + 0x10], ecx
        fild    dword ptr [esp + 0x10]
        lea     ebx, [esi + 0x2c4]
        fmul    qword ptr [mem_00939330]
        call    ext_006A6DE0
        mov     edx, dword ptr [mem_00A9EEE8]
        push    eax
        push    0x0
        push    edx
        push    0x0
        mov     ecx, ebx
        call    ext_006A640C
        mov     eax, dword ptr [esp + 0x18]
        sub     eax, dword ptr [esp + 0x10]
        push    0x1
        mov     dword ptr [esp + 0x10], eax
        fild    dword ptr [esp + 0x10]
        fmul    qword ptr [mem_00939330]
        call    ext_006A6DE0
        mov     ecx, dword ptr [mem_00A9F188]
        push    eax
        push    0x0
        push    ecx
        push    0x1
        mov     ecx, ebx
        call    ext_006A640C
        lea     edx, [esp + 0x20]
        push    0x19
        push    edx
        call    ext_00404F00
        add     esp, 0x8
        mov     ecx, eax
        mov     dword ptr [esp + 0x44], 0x0
        lea     edi, [esi + 0x21c]
        call    dword ptr [mem_00924FF0]
        push    eax
        mov     ecx, edi
        call    ext_006A5F50
        lea     ecx, [esp + 0x20]
        mov     dword ptr [esp + 0x44], -0x1
        call    dword ptr [mem_00924FF4]
        mov     dword ptr [esp + 0xc], edi
        lea     eax, [esp + 0xc]
        lea     edi, [esi + 0x414]
        push    eax
        mov     ecx, edi
        call    ext_0041A920
        lea     ecx, [esi + 0x1c8]
        lea     edx, [esp + 0xc]
        mov     dword ptr [esp + 0xc], ecx
        push    edx
        mov     ecx, edi
        call    ext_0041A920
        lea     ecx, [esp + 0xc]
        lea     eax, [esi + 0x78]
        push    ecx
        mov     ecx, edi
        mov     dword ptr [esp + 0x10], eax
        call    ext_0041A920
        lea     eax, [esp + 0xc]
        lea     edx, [esi + 0x36c]
        push    eax
        mov     ecx, edi
        mov     dword ptr [esp + 0x10], edx
        call    ext_0041A920
        lea     ecx, [esi + 0x318]
        lea     edx, [esp + 0xc]
        mov     dword ptr [esp + 0xc], ecx
        push    edx
        mov     ecx, edi
        call    ext_0041A920
        lea     ecx, [esp + 0xc]
        lea     eax, [esi + 0x3c0]
        push    ecx
        mov     ecx, edi
        mov     dword ptr [esp + 0x10], eax
        call    ext_0041A920
        lea     eax, [esp + 0xc]
        lea     edx, [esi + 0xcc]
        push    eax
        mov     ecx, edi
        mov     dword ptr [esp + 0x10], edx
        call    ext_0041A920
        lea     ecx, [esi + 0x120]
        lea     edx, [esp + 0xc]
        mov     dword ptr [esp + 0xc], ecx
        push    edx
        mov     ecx, edi
        call    ext_0041A920
        lea     eax, [esp + 0xc]
        push    eax
        mov     ecx, edi
        mov     dword ptr [esp + 0x10], ebx
        call    ext_0041A920
        lea     ecx, [esi + 0x424]
        lea     edx, [esp + 0xc]
        mov     dword ptr [esp + 0xc], ecx
        push    edx
        mov     ecx, edi
        call    ext_0041A920
        lea     ecx, [esp + 0xc]
        lea     eax, [esi + 0x478]
        push    ecx
        mov     ecx, edi
        mov     dword ptr [esp + 0x10], eax
        call    ext_0041A920
        lea     eax, [esp + 0xc]
        lea     edx, [esi + 0x4cc]
        push    eax
        mov     ecx, edi
        mov     dword ptr [esp + 0x10], edx
        call    ext_0041A920
        lea     ecx, [esi + 0x520]
        lea     edx, [esp + 0xc]
        mov     dword ptr [esp + 0xc], ecx
        push    edx
        mov     ecx, edi
        call    ext_0041A920
        lea     eax, [esi + 0x574]
        lea     ecx, [esp + 0xc]
        mov     dword ptr [esp + 0xc], eax
        push    ecx
        mov     ecx, edi
        call    ext_0041A920
        lea     edx, [esp + 0xc]
        add     esi, 0x5c8
        push    edx
        mov     ecx, edi
        mov     dword ptr [esp + 0x10], esi
        call    ext_0041A920
        mov     ecx, dword ptr [esp + 0x3c]
        pop     edi
        pop     esi
        mov     eax, 0x1
        pop     ebx
        mov     dword ptr fs:[0x0], ecx
        add     esp, 0x3c
        ret
    }
}
