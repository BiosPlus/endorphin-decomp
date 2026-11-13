// Decompiled translation unit: src/Sensors/CompoundSensorSagittalPlane.cpp

extern "C" void ext_005B6930();
extern "C" int mem_00925134;

// [0x0062F100] Sensors::CompoundSensorSagittalPlane::vfunc_27 (603 bytes)
extern "C" __declspec(naked) void __fastcall fn_0062F100(void* self) {
    __asm {
        sub     esp, 0x34
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x2c]
        test    eax, eax
        push    edi
        mov     edi, dword ptr [mem_00925134]
        je      L_0062F11E
        mov     ecx, dword ptr [esi + 0x30]
        sub     ecx, eax
        sar     ecx, 0x2
        jne     L_0062F120
    L_0062F11E:
        call    edi
    L_0062F120:
        mov     edx, dword ptr [esi + 0x2c]
        mov     ecx, dword ptr [edx]
        mov     eax, dword ptr [ecx]
        mov     edx, dword ptr [eax + 0x38]
        call    edx
        fld     dword ptr [eax]
        mov     ecx, dword ptr [esi + 0x2c]
        fstp    dword ptr [esp + 0x18]
        test    ecx, ecx
        fld     dword ptr [eax + 0x4]
        fstp    dword ptr [esp + 0x1c]
        fld     dword ptr [eax + 0x8]
        fstp    dword ptr [esp + 0x20]
        je      L_0062F154
        mov     eax, dword ptr [esi + 0x30]
        sub     eax, ecx
        sar     eax, 0x2
        cmp     eax, 0x1
        ja      L_0062F156
    L_0062F154:
        call    edi
    L_0062F156:
        mov     eax, dword ptr [esi + 0x2c]
        mov     ecx, dword ptr [eax + 0x4]
        mov     edx, dword ptr [ecx]
        mov     eax, dword ptr [edx + 0x38]
        call    eax
        fld     dword ptr [eax]
        fstp    dword ptr [esp + 0xc]
        fld     dword ptr [eax + 0x4]
        fstp    dword ptr [esp + 0x10]
        fld     dword ptr [eax + 0x8]
        fstp    dword ptr [esp + 0x14]
        fld     dword ptr [esp + 0x18]
        fst     dword ptr [esi + 0x78]
        fld     dword ptr [esp + 0x1c]
        fst     dword ptr [esi + 0x7c]
        fld     dword ptr [esp + 0x20]
        fst     dword ptr [esi + 0x80]
        fld     dword ptr [esp + 0xc]
        fst     dword ptr [esi + 0x84]
        fld     dword ptr [esp + 0x10]
        fst     dword ptr [esi + 0x88]
        fld     dword ptr [esp + 0x14]
        fst     dword ptr [esi + 0x8c]
        fmul    st, st(4)
        fld     st(1)
        fmul    st, st(4)
        fsubp   st(1), st
        fstp    dword ptr [esp + 0x24]
        fld     st(2)
        fmul    st, st(2)
        fld     dword ptr [esp + 0x14]
        fmul    st, st(6)
        fsubp   st(1), st
        fstp    dword ptr [esp + 0x28]
        fmul    st, st(4)
        fld     st(3)
        fmulp   st(2), st
        fsubrp  st(1), st
        fstp    dword ptr [esp + 0x2c]
        fld     dword ptr [esp + 0x28]
        fld     st(0)
        fmul    st, st(2)
        fld     dword ptr [esp + 0x2c]
        fld     st(0)
        fmul    st, st(5)
        fsubp   st(2), st
        fxch    st(1)
        fstp    dword ptr [esp + 0xc]
        fmul    st, st(4)
        fld     st(2)
        fld     dword ptr [esp + 0x24]
        fld     st(0)
        fmulp   st(2), st
        fxch    st(2)
        fsubrp  st(1), st
        fstp    dword ptr [esp + 0x10]
        fmul    st, st(3)
        fld     st(4)
        fmulp   st(2), st
        fsubrp  st(1), st
        fstp    dword ptr [esp + 0x14]
        fld     dword ptr [esp + 0x14]
        fld     st(0)
        fmul    st, st(3)
        fld     dword ptr [esp + 0x10]
        fld     st(0)
        fmul    st, st(4)
        fsubp   st(2), st
        fxch    st(1)
        fstp    dword ptr [esp + 0x30]
        fld     dword ptr [esp + 0xc]
        fld     st(0)
        fmulp   st(4), st
        fld     st(5)
        fmulp   st(3), st
        fxch    st(3)
        fsubrp  st(2), st
        fxch    st(1)
        fstp    dword ptr [esp + 0x34]
        fmulp   st(3), st
        fmulp   st(1), st
        mov     ecx, dword ptr [esi + 0x38]
        fsubp   st(1), st
        fstp    dword ptr [esp + 0x38]
        call    ext_005B6930
        fld     dword ptr [eax]
        fstp    dword ptr [esp + 0x24]
        fld     dword ptr [eax + 0x4]
        fstp    dword ptr [esp + 0x28]
        fld     dword ptr [eax + 0x8]
        fstp    dword ptr [esp + 0x2c]
        fld     dword ptr [esp + 0x24]
        fld     st(0)
        fadd    dword ptr [esp + 0x18]
        fstp    dword ptr [esp + 0xc]
        fld     dword ptr [esp + 0x28]
        fld     st(0)
        fadd    dword ptr [esp + 0x1c]
        fstp    dword ptr [esp + 0x10]
        fld     dword ptr [esp + 0x2c]
        fld     st(0)
        fadd    dword ptr [esp + 0x20]
        fstp    dword ptr [esp + 0x14]
        fld     dword ptr [esp + 0x30]
        fadd    st, st(3)
        fstp    dword ptr [esp + 0x18]
        fld     dword ptr [esp + 0x34]
        fadd    st, st(2)
        fstp    dword ptr [esp + 0x1c]
        fld     dword ptr [esp + 0x38]
        fadd    st, st(1)
        fstp    dword ptr [esp + 0x20]
        fld     dword ptr [esp + 0x14]
        fld     st(0)
        fld     dword ptr [esp + 0x20]
        fld     st(0)
        fsubp   st(2), st
        fld     st(4)
        fmulp   st(2), st
        fld     st(0)
        fsub    st, st(4)
        fmul    dword ptr [esp + 0x10]
        faddp   st(2), st
        fld     st(3)
        fsub    st, st(3)
        fmul    dword ptr [esp + 0x1c]
        faddp   st(2), st
        fxch    st(1)
        fstp    qword ptr [esi + 0x58]
        fld     dword ptr [esp + 0x18]
        fld     st(0)
        fsub    st, st(6)
        fmul    st, st(3)
        fld     dword ptr [esp + 0xc]
        fsubrp  st(2), st
        fld     st(4)
        fmulp   st(2), st
        faddp   st(1), st
        fld     st(5)
        fsub    dword ptr [esp + 0xc]
        fmul    st, st(2)
        faddp   st(1), st
        fstp    qword ptr [esi + 0x60]
        fld     dword ptr [esp + 0x1c]
        fld     st(0)
        fsub    st, st(5)
        fmul    dword ptr [esp + 0xc]
        fld     dword ptr [esp + 0x10]
        fsubrp  st(2), st
        fld     st(6)
        fmulp   st(2), st
        faddp   st(1), st
        fld     st(4)
        fsub    dword ptr [esp + 0x10]
        fmul    dword ptr [esp + 0x18]
        faddp   st(1), st
        fstp    qword ptr [esi + 0x68]
        fld     st(0)
        fmul    dword ptr [esp + 0x10]
        fld     dword ptr [esp + 0x1c]
        fmul    st, st(3)
        fsubp   st(1), st
        fxch    st(5)
        pop     edi
        fchs
        fmulp   st(5), st
        fld     dword ptr [esp + 0x18]
        fmul    st, st(3)
        fld     st(4)
        fmulp   st(2), st
        fsubrp  st(1), st
        fmul    dword ptr [esp + 0x8]
        fsubp   st(4), st
        fmulp   st(2), st
        fmul    dword ptr [esp + 0xc]
        fsubp   st(1), st
        fmul    dword ptr [esp + 0x14]
        fsubp   st(1), st
        fstp    qword ptr [esi + 0x70]
        pop     esi
        add     esp, 0x34
        ret
    }
}
