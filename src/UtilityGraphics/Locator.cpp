// Decompiled translation unit: src/UtilityGraphics/Locator.cpp

extern "C" void ext_0063E012();
extern "C" void ext_0063E024();
extern "C" int mem_009254B8;
extern "C" int mem_00925414;
extern "C" int mem_009254B4;
extern "C" int mem_009254B0;
extern "C" int mem_00955258;
extern "C" int mem_00955250;
extern "C" int mem_009939D8;
extern "C" int mem_00955248;
extern "C" int mem_00925404;

// [0x00539510] UtilityGraphics::Locator::vfunc_22 (324 bytes)
extern "C" __declspec(naked) void __fastcall fn_00539510(void* self, int edx_unused, int arg1) {
    __asm {
        push    ebp
        mov     ebp, esp
        and     esp, -0x40
        sub     esp, 0x7c
        fld1
        push    esi
        fst     dword ptr [esp + 0x40]
        lea     eax, [esp + 0x40]
        fldz
        push    eax
        fst     dword ptr [esp + 0x48]
        push    0xba6
        fst     dword ptr [esp + 0x50]
        mov     esi, ecx
        fst     dword ptr [esp + 0x54]
        fst     dword ptr [esp + 0x58]
        fst     dword ptr [esp + 0x60]
        fst     dword ptr [esp + 0x64]
        fst     dword ptr [esp + 0x68]
        fst     dword ptr [esp + 0x6c]
        fst     dword ptr [esp + 0x74]
        fst     dword ptr [esp + 0x78]
        fst     dword ptr [esp + 0x7c]
        fstp    dword ptr [esp + 0x80]
        fst     dword ptr [esp + 0x5c]
        fst     dword ptr [esp + 0x70]
        fstp    dword ptr [esp + 0x84]
        call    dword ptr [mem_009254B8]
        call    dword ptr [mem_00925414]
        fld1
        fst     dword ptr [esp + 0x40]
        lea     ecx, [esp + 0x40]
        fldz
        push    ecx
        fst     dword ptr [esp + 0x54]
        fst     dword ptr [esp + 0x64]
        fst     dword ptr [esp + 0x48]
        fst     dword ptr [esp + 0x68]
        fst     dword ptr [esp + 0x4c]
        fstp    dword ptr [esp + 0x5c]
        fst     dword ptr [esp + 0x58]
        fstp    dword ptr [esp + 0x6c]
        call    dword ptr [mem_009254B4]
        fld     dword ptr [esi + 0x18]
        sub     esp, 0xc
        fstp    dword ptr [esp + 0x8]
        fld     dword ptr [esi + 0x18]
        fstp    dword ptr [esp + 0x4]
        fld     dword ptr [esi + 0x18]
        fstp    dword ptr [esp]
        call    dword ptr [mem_009254B0]
        mov     edx, dword ptr [esi + 0x14]
        push    0x186ac
        push    edx
        call    ext_0063E012
        fld     qword ptr [mem_00955258]
        mov     eax, dword ptr [esi + 0x14]
        push    0x1
        push    0x10
        sub     esp, 0x10
        fstp    qword ptr [esp + 0x8]
        fldz
        fstp    qword ptr [esp]
        push    eax
        call    ext_0063E024
        fld     qword ptr [mem_00955250]
        mov     ecx, dword ptr [esi + 0x14]
        push    0x2
        push    0x10
        sub     esp, 0x10
        fstp    qword ptr [esp + 0x8]
        fld     qword ptr [mem_009939D8]
        fstp    qword ptr [esp]
        push    ecx
        call    ext_0063E024
        mov     edx, dword ptr [esi + 0x14]
        push    0x186ab
        push    edx
        call    ext_0063E012
        fld     qword ptr [mem_00955248]
        push    0x1
        push    0x10
        sub     esp, 0x10
        fst     qword ptr [esp + 0x8]
        fstp    qword ptr [esp]
        mov     eax, dword ptr [esi + 0x14]
        push    eax
        call    ext_0063E024
        call    dword ptr [mem_00925404]
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret     0x4
    }
}
