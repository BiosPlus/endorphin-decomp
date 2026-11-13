// Decompiled translation unit: src/classes/EventViewIndicator.cpp

// [0x004168F0] EventViewIndicator::vfunc_63 (85 bytes)
extern "C" void ext_006A5F44();

extern "C" void __fastcall fn_004168F0(void* self, int edx_unused, int a1) {
    typedef void (__stdcall *DdxFn)(int, int, void*);
    char* p = (char*)self;
    DdxFn ddx = (DdxFn)ext_006A5F44;
    ddx(a1, 0x4a1, p + 0x88);
    ddx(a1, 0x435, p + 0xdc);
    ddx(a1, 0x4a2, p + 0x130);
    ddx(a1, 0x4aa, p + 0x188);
}

// [0x00416950] EventViewIndicator::vfunc_91 (367 bytes)
extern "C" void ext_00404F00();
extern "C" void ext_006A5F50();
extern "C" void ext_006A6226();
extern "C" int mem_00925694;
extern "C" int mem_00924FF0;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) int __fastcall fn_00416950(void* self) {
    __asm {
        push    -1
        push    0x8b56f9
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x1c
        push    esi
        push    edi
        mov     esi, ecx
        call    ext_006A6226
        mov     eax, dword ptr [esi + 0x150]
        mov     edi, dword ptr [mem_00925694]
        push    0
        push    0
        push    0x303
        push    eax
        call    edi
        mov     ecx, dword ptr [esi + 0x150]
        push    0x92cae4
        push    0
        push    0x143
        push    ecx
        call    edi
        mov     edx, dword ptr [esi + 0x150]
        push    0x92cadc
        push    0
        push    0x143
        push    edx
        call    edi
        mov     eax, dword ptr [esi + 0x150]
        push    0x92cad4
        push    0
        push    0x143
        push    eax
        call    edi
        mov     ecx, dword ptr [esi + 0x184]
        mov     eax, dword ptr [ecx + 0x180]
        mov     edx, dword ptr [esi + 0x150]
        push    0
        push    eax
        push    0x14e
        push    edx
        call    edi
        mov     eax, dword ptr [esi + 0x1a8]
        push    0x92cacc
        push    0
        push    0x143
        push    eax
        call    edi
        mov     ecx, dword ptr [esi + 0x1a8]
        push    0x92cac0
        push    0
        push    0x143
        push    ecx
        call    edi
        mov     edx, dword ptr [esi + 0x1a8]
        push    0x92cab4
        push    0
        push    0x143
        push    edx
        call    edi
        mov     eax, dword ptr [esi + 0x184]
        mov     eax, dword ptr [eax + 0x188]
        mov     ecx, dword ptr [esi + 0x1a8]
        push    0
        push    eax
        push    0x14e
        push    ecx
        call    edi
        mov     edx, dword ptr [esi + 0x184]
        mov     al, byte ptr [edx + 0x178]
        mov     ecx, dword ptr [esi + 0xa8]
        push    0
        movzx   eax, al
        push    eax
        push    0xf1
        push    ecx
        call    edi
        mov     edx, dword ptr [esi + 0x184]
        mov     eax, dword ptr [edx + 0x17c]
        push    eax
        lea     eax, [esp + 0xc]
        push    eax
        call    ext_00404F00
        add     esp, 8
        mov     dword ptr [esp + 0x2c], 0
        mov     ecx, eax
        call    dword ptr [mem_00924FF0]
        push    eax
        lea     ecx, [esi + 0xdc]
        call    ext_006A5F50
        lea     ecx, [esp + 8]
        mov     dword ptr [esp + 0x2c], 0xffffffff
        call    dword ptr [mem_00924FF4]
        mov     ecx, dword ptr [esp + 0x24]
        pop     edi
        mov     eax, 1
        pop     esi
        mov     dword ptr fs:[0], ecx
        add     esp, 0x28
        ret
    }
}
