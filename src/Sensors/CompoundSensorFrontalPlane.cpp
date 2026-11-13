// Decompiled translation unit: src/Sensors/CompoundSensorFrontalPlane.cpp

extern "C" void ext_005B6930();
extern "C" int mem_00925134;

// [0x0062EEC0] Sensors::CompoundSensorFrontalPlane::vfunc_27 (561 bytes)
extern "C" __declspec(naked) void __fastcall fn_0062EEC0(void* self) {
    __asm {
        sub     esp, 0x34
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x2c]
        test    eax, eax
        push    edi
        mov     edi, dword ptr [mem_00925134]
        je      L_0062EEDE
        mov     ecx, dword ptr [esi + 0x30]
        sub     ecx, eax
        sar     ecx, 0x2
        jne     L_0062EEE0
    L_0062EEDE:
        call    edi
    L_0062EEE0:
        mov     edx, dword ptr [esi + 0x2c]
        mov     ecx, dword ptr [edx]
        mov     eax, dword ptr [ecx]
        mov     edx, dword ptr [eax + 0x38]
        call    edx
        fld     dword ptr [eax]
        mov     ecx, dword ptr [esi + 0x2c]
        fstp    dword ptr [esp + 0x24]
        test    ecx, ecx
        fld     dword ptr [eax + 0x4]
        fstp    dword ptr [esp + 0x28]
        fld     dword ptr [eax + 0x8]
        fstp    dword ptr [esp + 0x2c]
        je      L_0062EF14
        mov     eax, dword ptr [esi + 0x30]
        sub     eax, ecx
        sar     eax, 0x2
        cmp     eax, 0x1
        ja      L_0062EF16
    L_0062EF14:
        call    edi
    L_0062EF16:
        mov     eax, dword ptr [esi + 0x2c]
        mov     ecx, dword ptr [eax + 0x4]
        mov     edx, dword ptr [ecx]
        mov     eax, dword ptr [edx + 0x38]
        call    eax
        fld     dword ptr [eax]
        fstp    dword ptr [esp + 0x18]
        fld     dword ptr [eax + 0x4]
        fstp    dword ptr [esp + 0x1c]
        fld     dword ptr [eax + 0x8]
        fstp    dword ptr [esp + 0x20]
        fld     dword ptr [esp + 0x24]
        fst     dword ptr [esi + 0x78]
        fld     dword ptr [esp + 0x28]
        fst     dword ptr [esi + 0x7c]
        fld     dword ptr [esp + 0x2c]
        fst     dword ptr [esi + 0x80]
        fld     dword ptr [esp + 0x18]
        fst     dword ptr [esi + 0x84]
        fld     dword ptr [esp + 0x1c]
        fst     dword ptr [esi + 0x88]
        fld     dword ptr [esp + 0x20]
        fst     dword ptr [esi + 0x8c]
        mov     ecx, dword ptr [esi + 0x38]
        fmul    st(0), st(4)
        fld     st(1)
        fmul    st(0), st(4)
        fsubp   st(1), st(0)
        fstp    dword ptr [esp + 0xc]
        fld     st(2)
        fmul    st(0), st(2)
        fld     dword ptr [esp + 0x20]
        fmul    st(0), st(6)
        fsubp   st(1), st(0)
        fstp    dword ptr [esp + 0x10]
        fmul    st(0), st(4)
        fld     st(3)
        fmulp   st(2), st(0)
        fsubrp  st(1), st(0)
        fstp    dword ptr [esp + 0x14]
        fld     dword ptr [esp + 0x10]
        fld     st(0)
        fmul    st(0), st(2)
        fld     dword ptr [esp + 0x14]
        fld     st(0)
        fmul    st(0), st(5)
        fsubp   st(2), st(0)
        fxch    st(1)
        fstp    dword ptr [esp + 0x18]
        fmul    st(0), st(4)
        fld     dword ptr [esp + 0xc]
        fld     st(0)
        fmulp   st(4), st(0)
        fxch    st(1)
        fsubrp  st(3), st(0)
        fxch    st(2)
        fstp    dword ptr [esp + 0x1c]
        fxch    st(2)
        fmulp   st(1), st(0)
        fxch    st(1)
        fmulp   st(2), st(0)
        fsubrp  st(1), st(0)
        fstp    dword ptr [esp + 0x20]
        call    ext_005B6930
        fld     dword ptr [eax]
        fstp    dword ptr [esp + 0x30]
        fld     dword ptr [eax + 0x4]
        fstp    dword ptr [esp + 0x34]
        fld     dword ptr [eax + 0x8]
        fstp    dword ptr [esp + 0x38]
        fld     dword ptr [esp + 0x18]
        fld     dword ptr [esp + 0x30]
        fld     st(0)
        faddp   st(2), st(0)
        fxch    st(1)
        fstp    dword ptr [esp + 0xc]
        fld     dword ptr [esp + 0x1c]
        fld     dword ptr [esp + 0x34]
        fld     st(0)
        faddp   st(2), st(0)
        fxch    st(1)
        fstp    dword ptr [esp + 0x10]
        fld     dword ptr [esp + 0x20]
        fld     dword ptr [esp + 0x38]
        fld     st(0)
        faddp   st(2), st(0)
        fxch    st(1)
        fstp    dword ptr [esp + 0x14]
        fld     st(2)
        fadd    dword ptr [esp + 0x24]
        fstp    dword ptr [esp + 0x18]
        fld     st(1)
        fadd    dword ptr [esp + 0x28]
        fstp    dword ptr [esp + 0x1c]
        fld     st(0)
        fadd    dword ptr [esp + 0x2c]
        fstp    dword ptr [esp + 0x20]
        fld     dword ptr [esp + 0x14]
        fld     st(0)
        fld     dword ptr [esp + 0x20]
        fld     st(0)
        fsubp   st(2), st(0)
        fld     st(4)
        fmulp   st(2), st(0)
        fld     st(0)
        fsub    st(0), st(4)
        fmul    dword ptr [esp + 0x10]
        faddp   st(2), st(0)
        fld     st(3)
        fsub    st(0), st(3)
        fmul    dword ptr [esp + 0x1c]
        faddp   st(2), st(0)
        fxch    st(1)
        fstp    qword ptr [esi + 0x58]
        fld     dword ptr [esp + 0x18]
        fld     st(0)
        fsub    st(0), st(6)
        fmul    st(0), st(3)
        fld     dword ptr [esp + 0xc]
        fsubrp  st(2), st(0)
        fld     st(4)
        fmulp   st(2), st(0)
        faddp   st(1), st(0)
        fld     st(5)
        fsub    dword ptr [esp + 0xc]
        fmul    st(0), st(2)
        faddp   st(1), st(0)
        fstp    qword ptr [esi + 0x60]
        fld     dword ptr [esp + 0x10]
        fld     dword ptr [esp + 0x1c]
        fld     st(0)
        fsubp   st(2), st(0)
        fld     st(6)
        fmulp   st(2), st(0)
        fsub    st(0), st(5)
        fmul    dword ptr [esp + 0xc]
        faddp   st(1), st(0)
        fld     st(4)
        fsub    dword ptr [esp + 0x10]
        fmul    dword ptr [esp + 0x18]
        faddp   st(1), st(0)
        fstp    qword ptr [esi + 0x68]
        fld     st(0)
        fmul    dword ptr [esp + 0x10]
        fld     dword ptr [esp + 0x1c]
        fmul    st(0), st(3)
        fsubp   st(1), st(0)
        fxch    st(5)
        fchs
        fmulp   st(5), st(0)
        fld     dword ptr [esp + 0x1c]
        fmul    st(0), st(3)
        fld     st(4)
        fmulp   st(2), st(0)
        fsubrp  st(1), st(0)
        fmul    dword ptr [esp + 0xc]
        fsubp   st(4), st(0)
        fmulp   st(2), st(0)
        fmul    dword ptr [esp + 0x10]
        fsubp   st(1), st(0)
        fmul    dword ptr [esp + 0x18]
        fsubp   st(1), st(0)
        pop     edi
        fstp    qword ptr [esi + 0x70]
        pop     esi
        add     esp, 0x34
        ret
    }
}
