// Decompiled translation unit: src/ToolGraphics/ForceApplicatorHandleGraphic.cpp

extern "C" void __fastcall ext_005528D0(void* self);

// [0x0054A150] ToolGraphics::ForceApplicatorHandleGraphic::vfunc_1 (16 bytes)
extern "C" void __fastcall fn_0054A150(void* self) {
    ext_005528D0(self);
    char* base = reinterpret_cast<char*>(self);
    *reinterpret_cast<float*>(base + 0x14) = *reinterpret_cast<float*>(base + 0x4);
}

extern "C" void __stdcall ext_0063E02A(void* quad, double base, double top, double height, int slices, int stacks);
extern "C" int mem_00AF6108;
extern "C" int mem_0092546C;
extern "C" int mem_00925520;
extern "C" int mem_00940694;
extern "C" int mem_009254D0;
extern "C" int mem_00956D48;
extern "C" int mem_00925490;
extern "C" int mem_0092548C;
extern "C" int mem_00925488;
extern "C" int mem_009253CC;
extern "C" int mem_00925414;
extern "C" int mem_009253D0;
extern "C" int mem_009254CC;
extern "C" int mem_00955A30;
extern "C" int mem_00993828;
extern "C" int mem_00955D10;
extern "C" int mem_00925404;
extern "C" int mem_0092552C;
extern "C" int mem_00925524;

// [0x0054A160] ToolGraphics::ForceApplicatorHandleGraphic::vfunc_4 (449 bytes)
extern "C" __declspec(naked) void __fastcall fn_0054A160(void* self, int edx_unused, int arg1, int arg2) {
    __asm {
        push    ebp
        mov     ebp, esp
        and     esp, -0x40
        sub     esp, 0x38
        mov     eax, dword ptr [mem_00AF6108]
        fld     dword ptr [eax + 0xc8]
        push    esi
        mov     esi, ecx
        fmul    dword ptr [esi + 0x8]
        push    edi
        fmul    dword ptr [esi + 0x4]
        fstp    dword ptr [esp + 0x34]
        fld     dword ptr [eax + 0xc4]
        fstp    dword ptr [esp + 0x38]
        fld1
        fcomp   dword ptr [esi + 0xc]
        fnstsw  ax
        test    ah, 0x41
        jne     done
        cmp     dword ptr [esi + 0x10], 0xb
        je      done
        push    0x4
        call    dword ptr [mem_0092546C]
        fld     dword ptr [esp + 0x38]
        push    ecx
        fstp    dword ptr [esp]
        call    dword ptr [mem_00925520]
        fld     dword ptr [mem_00940694]
        sub     esp, 0x10
        cmp     dword ptr [esi + 0x10], 0xa
        fstp    dword ptr [esp + 0xc]
        jne     not_0xa
        fldz
        fstp    dword ptr [esp + 0x8]
        fld1
        fst     dword ptr [esp + 0x4]
        jmp     color_call
    not_0xa:
        fld1
        fst     dword ptr [esp + 0x8]
        fldz
        fstp    dword ptr [esp + 0x4]
    color_call:
        fstp    dword ptr [esp]
        call    dword ptr [mem_009254D0]
        fld     dword ptr [esp + 0x34]
        push    0x1
        fmul    qword ptr [mem_00956D48]
        fstp    dword ptr [esp + 0x38]
        fld     dword ptr [esi + 0x14]
        fadd    dword ptr [esp + 0x38]
        fchs
        fstp    dword ptr [esp + 0x3c]
        call    dword ptr [mem_00925490]
        fldz
        mov     edi, dword ptr [mem_0092548C]
        sub     esp, 0xc
        fst     dword ptr [esp + 0x8]
        fst     dword ptr [esp + 0x4]
        fstp    dword ptr [esp]
        call    edi
        fldz
        sub     esp, 0xc
        fst     dword ptr [esp + 0x8]
        fstp    dword ptr [esp + 0x4]
        fld     dword ptr [esp + 0x44]
        fstp    dword ptr [esp]
        call    edi
        call    dword ptr [mem_00925488]
        push    0xa
        call    dword ptr [mem_009253CC]
        call    dword ptr [mem_00925414]
        fldz
        sub     esp, 0xc
        fst     dword ptr [esp + 0x8]
        fstp    dword ptr [esp + 0x4]
        fld     dword ptr [esp + 0x44]
        fstp    dword ptr [esp]
        call    dword ptr [mem_009253D0]
        fldz
        mov     edi, dword ptr [mem_009254CC]
        sub     esp, 0x10
        fst     dword ptr [esp + 0xc]
        fld1
        fstp    dword ptr [esp + 0x8]
        fstp    dword ptr [esp + 0x4]
        fld     dword ptr [mem_00955A30]
        fstp    dword ptr [esp]
        call    edi
        fld     dword ptr [esp + 0x34]
        mov     eax, dword ptr [esi + 0x18]
        fld     qword ptr [mem_00993828]
        push    0x1
        fmul    st, st(1)
        push    0x8
        sub     esp, 0x18
        fst     qword ptr [esp + 0x58]
        fxch    st(1)
        fstp    qword ptr [esp + 0x10]
        fldz
        fstp    qword ptr [esp + 0x8]
        fstp    qword ptr [esp]
        push    eax
        call    ext_0063E02A
        fldz
        sub     esp, 0x10
        fst     dword ptr [esp + 0xc]
        fstp    dword ptr [esp + 0x8]
        fld1
        fstp    dword ptr [esp + 0x4]
        fld     dword ptr [mem_00955D10]
        fstp    dword ptr [esp]
        call    edi
        fld     dword ptr [esp + 0x34]
        mov     ecx, dword ptr [esi + 0x18]
        push    0x1
        push    0x8
        sub     esp, 0x18
        fstp    qword ptr [esp + 0x10]
        fldz
        fstp    qword ptr [esp + 0x8]
        fld     qword ptr [esp + 0x58]
        fstp    qword ptr [esp]
        push    ecx
        call    ext_0063E02A
        call    dword ptr [mem_00925404]
        call    dword ptr [mem_0092552C]
        call    dword ptr [mem_00925524]
    done:
        pop     edi
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret     0x8
    }
}
