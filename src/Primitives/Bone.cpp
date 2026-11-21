// Decompiled translation unit: src/Primitives/Bone.cpp
extern "C" void ext_00401000();
extern "C" void ext_0067B860();
extern "C" void ext_0067BF50();
extern "C" void ext_006A7250();
extern "C" void ext_0053C895();
extern "C" void ext_0053C84D();
extern "C" void ext_0053C720();
extern "C" int mem_0092546C;
extern "C" int mem_00925520;
extern "C" int mem_00955648;
extern "C" int mem_00925490;
extern "C" int mem_0092548C;

extern "C" void ext_0067B860();
extern "C" void ext_0067BF50();
extern "C" void ext_006A7250();
extern "C" void ext_0053C895();
extern "C" void ext_0053C84D();
extern "C" void ext_0053C720();
extern "C" int mem_0092546C;
extern "C" int mem_00925520;
extern "C" int mem_00955648;
extern "C" int mem_00925490;
extern "C" int mem_0092548C;
extern "C" void ext_0053A610();
extern "C" void ext_005B11E0();

// [0x0053E1C0] Primitives::Bone::vfunc_25 (123 bytes)
extern "C" __declspec(naked) void __fastcall fn_0053E1C0(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        mov eax, dword ptr [esp + 0xc]
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        mov esi, ecx
        mov ecx, dword ptr [esp + 0x10]
        push eax
        push ecx
        push edi
        mov ecx, esi
        call ext_0053A610
        mov eax, dword ptr [esi + 0x1c]
        test al, 0x4
        jne skip_a
        xor eax, 0x4
        mov dword ptr [esi + 0x1c], eax
skip_a:
        mov eax, dword ptr [esi + 0x1c]
        test eax, 0x40000
        jne skip_b
        xor eax, 0x40000
        mov dword ptr [esi + 0x1c], eax
skip_b:
        mov eax, dword ptr [esi + 0x1c]
        test al, 0x1
        je skip_c
        xor eax, 0x1
        mov dword ptr [esi + 0x1c], eax
skip_c:
        push 0x0
        mov ecx, edi
        call ext_005B11E0
        fstp dword ptr [esi + 0x3c]
        push 0x1
        mov ecx, edi
        call ext_005B11E0
        fstp dword ptr [esi + 0x40]
        push 0x2
        mov ecx, edi
        call ext_005B11E0
        fstp dword ptr [esi + 0x44]
        push 0x3
        mov ecx, edi
        call ext_005B11E0
        fstp dword ptr [esi + 0x48]
        pop edi
        pop esi
        ret 0xc
    }
}

// [0x0053C520] Primitives::Bone::vfunc_28 (509 bytes)
extern "C" __declspec(naked) void __fastcall fn_0053C520(void* self) {
    __asm {
        sub     esp, 0x70
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi]
        mov     edx, dword ptr [eax + 0x54]
        push    0x80000
        call    edx
        test    al, al
        je      ext_0053C895
        push    4
        call    dword ptr [mem_0092546C]
        fld1
        push    ecx
        fstp    dword ptr [esp]
        call    dword ptr [mem_00925520]
        fld     dword ptr [esi + 0x3c]
        fstp    dword ptr [esp + 0x8]
        fld     dword ptr [esi + 0x40]
        fstp    dword ptr [esp + 0xc]
        fld     dword ptr [esi + 0x44]
        fstp    dword ptr [esp + 0x10]
        fld     dword ptr [esp + 0x8]
        fst     dword ptr [esp + 0x20]
        fld     dword ptr [esp + 0xc]
        fst     dword ptr [esp + 0x24]
        fld     dword ptr [esp + 0x10]
        fst     dword ptr [esp + 0x28]
        fld     st(2)
        fmulp   st(3), st
        fld     st(1)
        fmulp   st(2), st
        fxch    st(2)
        faddp   st(1), st
        fld     st(1)
        fmulp   st(2), st
        faddp   st(1), st
        call    ext_006A7250
        fstp    dword ptr [esp + 0x4]
        fld     dword ptr [esp + 0x4]
        fcomp   qword ptr [mem_00955648]
        fnstsw  ax
        test    ah, 0x41
        jne     ext_0053C84D
        lea     ecx, [esp + 0x8]
        call    ext_0067B860
        fldz
        fst     dword ptr [esp + 0x1c]
        lea     eax, [esp + 0x14]
        fst     dword ptr [esp + 0x18]
        push    eax
        lea     ecx, [esp + 0xc]
        fstp    dword ptr [esp + 0x18]
        call    ext_0067BF50
        lea     ecx, [esp + 0x14]
        call    ext_0067B860
        fld     dword ptr [esp + 0x1c]
        fld     st(0)
        lea     ecx, [esp + 0x38]
        fld     dword ptr [esp + 0xc]
        fld     st(0)
        fmulp   st(2), st
        fld     dword ptr [esp + 0x18]
        fld     st(0)
        fld     dword ptr [esp + 0x10]
        fld     st(0)
        fmulp   st(2), st
        fxch    st(4)
        fsubrp  st(1), st
        fstp    dword ptr [esp + 0x2c]
        fld     dword ptr [esp + 0x14]
        fld     st(0)
        fmulp   st(4), st
        fld     dword ptr [esp + 0x8]
        fld     st(0)
        fmulp   st(6), st
        fxch    st(4)
        fsubrp  st(5), st
        fxch    st(4)
        fstp    dword ptr [esp + 0x30]
        fmulp   st(2), st
        fmulp   st(2), st
        fsubrp  st(1), st
        fstp    dword ptr [esp + 0x34]
        fld     dword ptr [esp + 0x2c]
        fstp    dword ptr [esp + 0x38]
        fld     dword ptr [esp + 0x30]
        fstp    dword ptr [esp + 0x3c]
        fld     dword ptr [esp + 0x34]
        fstp    dword ptr [esp + 0x40]
        call    ext_0067B860
        push    0x44ccc0
        push    4
        push    0xc
        lea     ecx, [esp + 0x50]
        push    ecx
        call    ext_00401000
        xor     edx, edx
    L_outer:
        lea     ecx, [edx + 2*edx]
        lea     ecx, [esp + 4*ecx + 0x44]
        xor     eax, eax
    L_inner:
        cmp     edx, 3
        fld     dword ptr [esp + eax + 0x8]
        fmul    dword ptr [esi + 0x48]
        fstp    dword ptr [esp + 0x4]
        fld     dword ptr [esp + 0x4]
        fst     dword ptr [ecx]
        ja      short L_default
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0x9c
        __asm _emit 0xc8
        __asm _emit 0x53
        __asm _emit 0x00
        fld     dword ptr [esp + eax + 0x14]
        fmul    dword ptr [esi + 0x48]
        faddp   st(1), st
        fstp    dword ptr [ecx]
        jmp     short L_next
        fld     dword ptr [esp + eax + 0x38]
        fmul    dword ptr [esi + 0x48]
        faddp   st(1), st
        fstp    dword ptr [ecx]
        jmp     short L_next
        fld     dword ptr [esp + eax + 0x14]
        fmul    dword ptr [esi + 0x48]
        fsubp   st(1), st
        fstp    dword ptr [ecx]
        jmp     short L_next
        fld     dword ptr [esp + eax + 0x38]
        fmul    dword ptr [esi + 0x48]
        fsubp   st(1), st
        fstp    dword ptr [ecx]
        jmp     short L_next
    L_default:
        fstp    st(0)
    L_next:
        add     eax, 4
        add     ecx, 4
        cmp     eax, 8
        jle     short L_inner
        add     edx, 1
        cmp     edx, 3
        jle     short L_outer
        push    ebx
        push    ebp
        push    edi
        push    1
        call    dword ptr [mem_00925490]
        mov     esi, dword ptr [mem_0092548C]
        lea     edi, [esp + 0x54]
        mov     ebx, 4
    L_vloop:
        fldz
        sub     esp, 0xc
        fst     dword ptr [esp + 0x8]
        fst     dword ptr [esp + 0x4]
        fstp    dword ptr [esp]
        call    esi
        fld     dword ptr [edi + 0x4]
        sub     esp, 0xc
        fstp    dword ptr [esp + 0x8]
        fld     dword ptr [edi]
        fstp    dword ptr [esp + 0x4]
        fld     dword ptr [edi - 0x4]
        fstp    dword ptr [esp]
        call    esi
        add     edi, 0xc
        sub     ebx, 1
        jne     short L_vloop
        lea     edi, [esp + 0x54]
        mov     ebx, 4
        __asm _emit 0xeb
        __asm _emit 0x03
    }
}
