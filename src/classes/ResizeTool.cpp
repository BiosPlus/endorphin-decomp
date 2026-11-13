// Decompiled translation unit: src/classes/ResizeTool.cpp

extern "C" void ext_005434C0();
extern "C" int mem_00925414;
extern "C" int mem_009253C8;
extern "C" int mem_00925404;

// [0x00545B50] ResizeTool::vfunc_26 (45 bytes)
extern "C" __declspec(naked) void __fastcall fn_00545B50(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x80]
        call edx
        fld1
        mov dword ptr [esi + 0xb0], 0x3
        fst dword ptr [esi + 0xb4]
        fst dword ptr [esi + 0xb8]
        fstp dword ptr [esi + 0xbc]
        pop esi
        ret
    }
}

// [0x00545BA0] ResizeTool::vfunc_17 (51 bytes)
extern "C" int __fastcall fn_00545BA0(void* self, int edx_unused, int a1, int a2) {
    char* s = (char*)self;
    void* sub = *(void**)(s + 0x88);
    void** subvt = *(void***)sub;
    ((void (__thiscall*)(void*))subvt[29])(sub);
    void** vt = *(void***)self;
    ((void (__thiscall*)(void*))vt[29])(self);
    *(float*)(s + 0xb4) = 1.0f;
    *(float*)(s + 0xb8) = 1.0f;
    *(float*)(s + 0xbc) = 1.0f;
    return 0;
}

// [0x00545AC0] ResizeTool::vfunc_31 (142 bytes)
extern "C" __declspec(naked) void __fastcall fn_00545AC0(void* self, int edx_unused, int a1, int a2) {
    __asm {
        sub esp, 0x10
        push esi
        mov esi, ecx
        call ext_005434C0
        test al, al
        jne L_done
        call dword ptr [mem_00925414]
        lea eax, [esi + 0x4]
        push eax
        call dword ptr [mem_009253C8]
        fld dword ptr [esi + 0x34]
        mov eax, dword ptr [esi + 0x84]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esi + 0x38]
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esi + 0x3c]
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esi + 0x40]
        fstp dword ptr [esp + 0x10]
        mov ecx, dword ptr [eax + 0xfc]
        mov edx, ecx
        shl edx, 0x4
        sub edx, ecx
        mov eax, dword ptr [eax + 4*edx + 0x8]
        mov edx, dword ptr [eax]
        mov edx, dword ptr [edx + 0x18]
        lea ecx, [esp + 0x4]
        push ecx
        mov ecx, eax
        call edx
        fstp dword ptr [esi + 0xa4]
        mov edx, dword ptr [esp + 0x1c]
        mov eax, dword ptr [esi + 0x9c]
        mov eax, dword ptr [eax + 0x10]
        lea ecx, [esi + 0x9c]
        push edx
        mov edx, dword ptr [esp + 0x1c]
        push edx
        call eax
        call dword ptr [mem_00925404]
    L_done:
        pop esi
        add esp, 0x10
        ret 0x8
    }
}

extern "C" void ext_00552860();
extern "C" void ext_00694480();
extern "C" int mem_00956A88;
extern "C" int mem_0092A270;
extern "C" int mem_00956A84;
extern "C" int mem_0092A278;

// [0x00545CC0] ResizeTool::vfunc_28 (924 bytes)
extern "C" __declspec(naked) void __fastcall fn_00545CC0(void* self) {
    __asm {
        mov     eax, dword ptr [esp + 0x8]
        sub     esp, 0x40
        push    esi
        push    edi
        mov     esi, ecx
        push    eax
        lea     ecx, [esi + 0x9c]
        call    ext_00552860
        fld1
        fst     dword ptr [esi + 0xb4]
        fst     dword ptr [esi + 0xb8]
        fst     dword ptr [esi + 0xbc]
        mov     edi, dword ptr [esi + 0xac]
        fstp    dword ptr [esi + 0xc8]
        test    edi, edi
        mov     dword ptr [esi + 0x98], 0x0
        jl      L_00546054

        mov     eax, dword ptr [esi + 0x84]
        fldz
        mov     ecx, dword ptr [eax + 0xf8]
        mov     edx, ecx
        shl     edx, 0x4
        sub     edx, ecx
        mov     ecx, dword ptr [eax + edx*4 + 0x18]
        sub     ecx, dword ptr [eax + 0x138]
        lea     edx, [eax + edx*4]
        push    ebx
        mov     ebx, dword ptr [esp + 0x50]
        add     ecx, dword ptr [ebx + 0x4]
        mov     ebx, dword ptr [ebx]
        sub     ebx, dword ptr [edx + 0xc]
        fst     dword ptr [esp + 0x28]
        cmp     edi, 0x6
        fst     dword ptr [esp + 0x24]
        fst     dword ptr [esp + 0x20]
        mov     dword ptr [esp + 0xc], ebx
        fstp    dword ptr [esp + 0x1c]
        mov     dword ptr [esp + 0x10], ecx
        pop     ebx
        jne     L_00545dea

        fld     dword ptr [esi + 0x34]
        fstp    dword ptr [esp + 0x28]
        fld     dword ptr [esi + 0x38]
        fstp    dword ptr [esp + 0x2c]
        fld     dword ptr [esi + 0x3c]
        fstp    dword ptr [esp + 0x30]
        fld     dword ptr [esi + 0x40]
        fstp    dword ptr [esp + 0x34]
        mov     ecx, dword ptr [eax + 0xf8]
        mov     edx, ecx
        shl     edx, 0x4
        sub     edx, ecx
        mov     eax, dword ptr [eax + edx*4 + 0x8]
        mov     edx, dword ptr [eax]
        mov     edx, dword ptr [edx + 0x3c]
        lea     ecx, [esp + 0x18]
        push    ecx
        lea     ecx, [esp + 0x2c]
        push    ecx
        lea     ecx, [esp + 0x10]
        push    ecx
        mov     ecx, eax
        call    edx
        fld     dword ptr [esp + 0x1c]
        fld     qword ptr [mem_00956A88]
        fmul    st(1), st(0)
        fmul    dword ptr [esp + 0x18]
        faddp   st(1), st(0)
        fld     dword ptr [esp + 0x20]
        fldz
        fmul    st(1), st(0)
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [esp + 0x24]
        fmulp   st(2), st(0)
        faddp   st(1), st(0)
        fstp    dword ptr [esp + 0x50]
        fld     dword ptr [esp + 0x50]
        fadd    qword ptr [mem_0092A270]
        fstp    dword ptr [esp + 0x50]
        fld     dword ptr [esp + 0x50]
        fabs
        fstp    dword ptr [esp + 0x50]
        fld     dword ptr [esp + 0x50]
        jmp     L_00546044

    L_00545dea:
        cmp     edi, 0x5
        je      L_00545eba
        cmp     edi, 0x3
        je      L_00545eba
        cmp     edi, 0x4
        je      L_00545eba

        mov     ecx, edi
        shl     ecx, 0x4
        fld     dword ptr [ecx + esi + 0x4]
        lea     ecx, [ecx + esi + 0x4]
        fstp    dword ptr [esp + 0x28]
        fld     dword ptr [ecx + 0x4]
        fstp    dword ptr [esp + 0x2c]
        fld     dword ptr [ecx + 0x8]
        fstp    dword ptr [esp + 0x30]
        fld     dword ptr [ecx + 0xc]
        fstp    dword ptr [esp + 0x34]
        fld     dword ptr [esi + 0x34]
        fstp    dword ptr [esp + 0x38]
        fld     dword ptr [esi + 0x38]
        fstp    dword ptr [esp + 0x3c]
        fld     dword ptr [esi + 0x3c]
        fstp    dword ptr [esp + 0x40]
        fld     dword ptr [esi + 0x40]
        fstp    dword ptr [esp + 0x44]
        mov     ecx, dword ptr [eax + 0xf8]
        fld     dword ptr [esi + 0xcc]
        mov     edx, ecx
        push    ecx
        shl     edx, 0x4
        fstp    dword ptr [esp]
        sub     edx, ecx
        mov     eax, dword ptr [eax + edx*4 + 0x8]
        mov     edx, dword ptr [eax]
        mov     edx, dword ptr [edx + 0x38]
        lea     ecx, [esp + 0x1c]
        push    ecx
        lea     ecx, [esp + 0x30]
        push    ecx
        lea     ecx, [esp + 0x44]
        push    ecx
        lea     ecx, [esp + 0x18]
        push    ecx
        mov     ecx, eax
        call    edx
        test    al, al
        je      L_00546054

        lea     eax, [esi + 0x4]
        push    eax
        lea     ecx, [esp + 0x1c]
        call    ext_00694480
        fld     dword ptr [esp + edi*4 + 0x18]
        fabs
        pop     edi
        fstp    dword ptr [esp + 0x4c]
        mov     dword ptr [esi + 0x98], 0x2
        fld     dword ptr [esp + 0x4c]
        fstp    dword ptr [esi + 0xc8]
        pop     esi
        add     esp, 0x40
        ret     0x8

    L_00545eba:
        mov     ecx, edi
        shl     ecx, 0x4
        fld     dword ptr [ecx + esi - 0x2c]
        lea     ecx, [ecx + esi - 0x2c]
        fstp    dword ptr [esp + 0x38]
        fld     dword ptr [ecx + 0x4]
        fstp    dword ptr [esp + 0x3c]
        fld     dword ptr [ecx + 0x8]
        fstp    dword ptr [esp + 0x40]
        fld     dword ptr [ecx + 0xc]
        fstp    dword ptr [esp + 0x44]
        fld     dword ptr [esi + 0x34]
        fstp    dword ptr [esp + 0x28]
        fld     dword ptr [esi + 0x38]
        fstp    dword ptr [esp + 0x2c]
        fld     dword ptr [esi + 0x3c]
        fstp    dword ptr [esp + 0x30]
        fld     dword ptr [esi + 0x40]
        fstp    dword ptr [esp + 0x34]
        mov     ecx, dword ptr [eax + 0xf8]
        fld     dword ptr [esi + 0xcc]
        mov     edx, ecx
        push    ecx
        shl     edx, 0x4
        fstp    dword ptr [esp]
        sub     edx, ecx
        mov     eax, dword ptr [eax + edx*4 + 0x8]
        mov     edx, dword ptr [eax]
        mov     edx, dword ptr [edx + 0x34]
        lea     ecx, [esp + 0x1c]
        push    ecx
        lea     ecx, [esp + 0x40]
        push    ecx
        lea     ecx, [esp + 0x34]
        push    ecx
        lea     ecx, [esp + 0x18]
        push    ecx
        mov     ecx, eax
        call    edx
        test    al, al
        je      L_00545fb3

        lea     eax, [esi + 0x4]
        push    eax
        lea     ecx, [esp + 0x1c]
        call    ext_00694480
        fld     dword ptr [mem_00956A84]
        fst     dword ptr [esp + 0x8]
        mov     dword ptr [esi + 0x98], 0x1
        fst     dword ptr [esp + 0xc]
        fstp    dword ptr [esp + 0x10]
        fldz
        fst     dword ptr [esp + 0x14]
        fstp    dword ptr [esp + edi*4 - 0x4]
        fld     dword ptr [esp + 0xc]
        pop     edi
        fmul    dword ptr [esp + 0x18]
        fld     dword ptr [esp + 0x4]
        fmul    dword ptr [esp + 0x14]
        faddp   st(1), st(0)
        fld     dword ptr [esp + 0xc]
        fmul    dword ptr [esp + 0x1c]
        faddp   st(1), st(0)
        fld     dword ptr [esp + 0x10]
        fmul    qword ptr [mem_0092A278]
        faddp   st(1), st(0)
        fstp    dword ptr [esp + 0x4c]
        fld     dword ptr [esp + 0x4c]
        fabs
        fstp    dword ptr [esp + 0x4c]
        fld     dword ptr [esp + 0x4c]
        fstp    dword ptr [esi + 0xc8]
        pop     esi
        add     esp, 0x40
        ret     0x8

    L_00545fb3:
        fld     dword ptr [esi + 0x34]
        mov     eax, dword ptr [esi + 0x84]
        fstp    dword ptr [esp + 0x38]
        fld     dword ptr [esi + 0x38]
        fstp    dword ptr [esp + 0x3c]
        fld     dword ptr [esi + 0x3c]
        fstp    dword ptr [esp + 0x40]
        fld     dword ptr [esi + 0x40]
        fstp    dword ptr [esp + 0x44]
        mov     ecx, dword ptr [eax + 0xf8]
        mov     edx, ecx
        shl     edx, 0x4
        sub     edx, ecx
        mov     eax, dword ptr [eax + edx*4 + 0x8]
        mov     edx, dword ptr [eax]
        mov     edx, dword ptr [edx + 0x3c]
        lea     ecx, [esp + 0x18]
        push    ecx
        lea     ecx, [esp + 0x3c]
        push    ecx
        lea     ecx, [esp + 0x10]
        push    ecx
        mov     ecx, eax
        call    edx
        fld     dword ptr [esp + 0x1c]
        fld     qword ptr [mem_00956A88]
        fmul    st(1), st(0)
        fmul    dword ptr [esp + 0x18]
        faddp   st(1), st(0)
        fld     dword ptr [esp + 0x20]
        fldz
        fmul    st(1), st(0)
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [esp + 0x24]
        fmulp   st(2), st(0)
        faddp   st(1), st(0)
        fstp    dword ptr [esp + 0x50]
        fld     dword ptr [esp + 0x50]
        fadd    qword ptr [mem_0092A270]
        fstp    dword ptr [esp + 0x50]
        fld     dword ptr [esp + 0x50]
        fabs
        fstp    dword ptr [esp + 0x50]
        fld     dword ptr [esp + 0x50]

    L_00546044:
        fstp    dword ptr [esi + 0xc8]
        mov     dword ptr [esi + 0x98], 0x0

    L_00546054:
        pop     edi
        pop     esi
        add     esp, 0x40
        ret     0x8
    }
}
