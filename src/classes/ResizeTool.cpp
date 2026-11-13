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

// [0x00546060] ResizeTool::vfunc_15 (1213 bytes)
extern "C" void ext_00486850();
extern "C" void ext_00545BE0();
extern "C" void ext_00545C40();
extern "C" void ext_00549A10();
extern "C" int mem_009569F0;
extern "C" int mem_0094CE80;

extern "C" __declspec(naked) void __fastcall fn_00546060(void* self) {
    __asm {
    L_00546060:
        sub	esp, 0x58
    L_00546063:
        push	ebx
    L_00546064:
        mov	ebx, dword ptr [esp + 0x68]
    L_00546068:
        test	bl, 0x1
    L_0054606B:
        push	esi
    L_0054606C:
        push	edi
    L_0054606D:
        mov	esi, ecx
    L_0054606F:
        mov	dword ptr [esp + 0xc], 0x0
    L_00546077:
        je	L_00546512
    L_0054607D:
        mov	edi, dword ptr [esi + 0xac]
    L_00546083:
        test	edi, edi
    L_00546085:
        jl	L_00546512
    L_0054608B:
        fldz
    L_0054608D:
        mov	ecx, dword ptr [esi + 0x84]
    L_00546093:
        fst	dword ptr [esp + 0x50]
    L_00546097:
        fst	dword ptr [esp + 0x4c]
    L_0054609B:
        fst	dword ptr [esp + 0x48]
    L_0054609F:
        fst	dword ptr [esp + 0x44]
    L_005460A3:
        fld	dword ptr [esi + 0xb4]
    L_005460A9:
        fstp	dword ptr [esp + 0x34]
    L_005460AD:
        fld	dword ptr [esi + 0xb8]
    L_005460B3:
        fstp	dword ptr [esp + 0x38]
    L_005460B7:
        fld	dword ptr [esi + 0xbc]
    L_005460BD:
        fstp	dword ptr [esp + 0x3c]
    L_005460C1:
        fstp	dword ptr [esp + 0x40]
    L_005460C5:
        mov	eax, dword ptr [ecx + 0xf8]
    L_005460CB:
        mov	edx, eax
    L_005460CD:
        shl	edx, 0x4
    L_005460D0:
        sub	edx, eax
    L_005460D2:
        mov	eax, dword ptr [ecx + 4*edx + 0x18]
    L_005460D6:
        sub	eax, dword ptr [ecx + 0x138]
    L_005460DC:
        lea	edx, [ecx + 4*edx]
    L_005460DF:
        mov	ecx, dword ptr [esp + 0x6c]
    L_005460E3:
        add	eax, dword ptr [ecx + 0x4]
    L_005460E6:
        mov	ecx, dword ptr [ecx]
    L_005460E8:
        sub	ecx, dword ptr [edx + 0xc]
    L_005460EB:
        cmp	edi, 0x6
    L_005460EE:
        mov	dword ptr [esp + 0xc], ecx
    L_005460F2:
        mov	dword ptr [esp + 0x10], eax
    L_005460F6:
        jne	L_00546188
    L_005460FC:
        fld	dword ptr [esi + 0x34]
    L_005460FF:
        mov	eax, dword ptr [esi + 0x84]
    L_00546105:
        fstp	dword ptr [esp + 0x24]
    L_00546109:
        fld	dword ptr [esi + 0x38]
    L_0054610C:
        fstp	dword ptr [esp + 0x28]
    L_00546110:
        fld	dword ptr [esi + 0x3c]
    L_00546113:
        fstp	dword ptr [esp + 0x2c]
    L_00546117:
        fld	dword ptr [esi + 0x40]
    L_0054611A:
        fstp	dword ptr [esp + 0x30]
    L_0054611E:
        mov	ecx, dword ptr [eax + 0xf8]
    L_00546124:
        mov	edx, ecx
    L_00546126:
        shl	edx, 0x4
    L_00546129:
        sub	edx, ecx
    L_0054612B:
        mov	eax, dword ptr [eax + 4*edx + 0x8]
    L_0054612F:
        mov	edx, dword ptr [eax]
    L_00546131:
        mov	edx, dword ptr [edx + 0x3c]
    L_00546134:
        lea	ecx, [esp + 0x44]
    L_00546138:
        push	ecx
    L_00546139:
        lea	ecx, [esp + 0x28]
    L_0054613D:
        push	ecx
    L_0054613E:
        lea	ecx, [esp + 0x14]
    L_00546142:
        push	ecx
    L_00546143:
        mov	ecx, eax
    L_00546145:
        call	edx
    L_00546147:
        fld	dword ptr [esp + 0x48]
    L_0054614B:
        fld	qword ptr [mem_00956A88]
    L_00546151:
        fmul	st(1), st
    L_00546153:
        fmul	dword ptr [esp + 0x44]
    L_00546157:
        faddp	st(1), st
    L_00546159:
        fld	dword ptr [esp + 0x4c]
    L_0054615D:
        fldz
    L_0054615F:
        fmul	st(1), st
    L_00546161:
        fxch	st(2)
    L_00546163:
        faddp	st(1), st
    L_00546165:
        fld	dword ptr [esp + 0x50]
    L_00546169:
        fmulp	st(2), st
    L_0054616B:
        faddp	st(1), st
    L_0054616D:
        fstp	dword ptr [esp + 0x70]
    L_00546171:
        fld	dword ptr [esp + 0x70]
    L_00546175:
        fadd	qword ptr [mem_0092A270]
    L_0054617B:
        fstp	dword ptr [esp + 0x70]
    L_0054617F:
        fld	dword ptr [esp + 0x70]
    L_00546183:
        jmp	L_005462ED
    L_00546188:
        cmp	edi, 0x5
    L_0054618B:
        je	L_00546260
    L_00546191:
        cmp	edi, 0x3
    L_00546194:
        je	L_00546260
    L_0054619A:
        cmp	edi, 0x4
    L_0054619D:
        je	L_00546260
    L_005461A3:
        mov	eax, edi
    L_005461A5:
        shl	eax, 0x4
    L_005461A8:
        fld	dword ptr [eax + esi + 0x4]
    L_005461AC:
        lea	eax, [eax + esi + 0x4]
    L_005461B0:
        fstp	dword ptr [esp + 0x24]
    L_005461B4:
        fld	dword ptr [eax + 0x4]
    L_005461B7:
        fstp	dword ptr [esp + 0x28]
    L_005461BB:
        fld	dword ptr [eax + 0x8]
    L_005461BE:
        fstp	dword ptr [esp + 0x2c]
    L_005461C2:
        fld	dword ptr [eax + 0xc]
    L_005461C5:
        mov	eax, dword ptr [esi + 0x84]
    L_005461CB:
        fstp	dword ptr [esp + 0x30]
    L_005461CF:
        fld	dword ptr [esi + 0x34]
    L_005461D2:
        fstp	dword ptr [esp + 0x14]
    L_005461D6:
        fld	dword ptr [esi + 0x38]
    L_005461D9:
        fstp	dword ptr [esp + 0x18]
    L_005461DD:
        fld	dword ptr [esi + 0x3c]
    L_005461E0:
        fstp	dword ptr [esp + 0x1c]
    L_005461E4:
        fld	dword ptr [esi + 0x40]
    L_005461E7:
        fstp	dword ptr [esp + 0x20]
    L_005461EB:
        mov	ecx, dword ptr [eax + 0xf8]
    L_005461F1:
        fld	dword ptr [esi + 0xcc]
    L_005461F7:
        mov	edx, ecx
    L_005461F9:
        push	ecx
    L_005461FA:
        shl	edx, 0x4
    L_005461FD:
        fstp	dword ptr [esp]
    L_00546200:
        sub	edx, ecx
    L_00546202:
        mov	eax, dword ptr [eax + 4*edx + 0x8]
    L_00546206:
        mov	edx, dword ptr [eax]
    L_00546208:
        mov	edx, dword ptr [edx + 0x38]
    L_0054620B:
        lea	ecx, [esp + 0x48]
    L_0054620F:
        push	ecx
    L_00546210:
        lea	ecx, [esp + 0x2c]
    L_00546214:
        push	ecx
    L_00546215:
        lea	ecx, [esp + 0x20]
    L_00546219:
        push	ecx
    L_0054621A:
        lea	ecx, [esp + 0x1c]
    L_0054621E:
        push	ecx
    L_0054621F:
        mov	ecx, eax
    L_00546221:
        call	edx
    L_00546223:
        test	al, al
    L_00546225:
        je	L_005463F9
    L_0054622B:
        lea	eax, [esi + 0x4]
    L_0054622E:
        push	eax
    L_0054622F:
        lea	ecx, [esp + 0x48]
    L_00546233:
        call	ext_00694480
    L_00546238:
        fld	dword ptr [esp + 4*edi + 0x44]
    L_0054623C:
        fdiv	dword ptr [esi + 0xc8]
    L_00546242:
        push	ecx
    L_00546243:
        lea	ecx, [esp + 0x38]
    L_00546247:
        fstp	dword ptr [esp + 0x74]
    L_0054624B:
        fld	dword ptr [esp + 0x74]
    L_0054624F:
        fstp	dword ptr [esp]
    L_00546252:
        push	edi
    L_00546253:
        push	ecx
    L_00546254:
        mov	ecx, esi
    L_00546256:
        call	ext_00545C40
    L_0054625B:
        jmp	L_005463F9
    L_00546260:
        mov	eax, dword ptr [esi + 0x98]
    L_00546266:
        test	eax, eax
    L_00546268:
        jne	L_00546312
    L_0054626E:
        fld	dword ptr [esi + 0x34]
    L_00546271:
        mov	eax, dword ptr [esi + 0x84]
    L_00546277:
        fstp	dword ptr [esp + 0x24]
    L_0054627B:
        fld	dword ptr [esi + 0x38]
    L_0054627E:
        fstp	dword ptr [esp + 0x28]
    L_00546282:
        fld	dword ptr [esi + 0x3c]
    L_00546285:
        fstp	dword ptr [esp + 0x2c]
    L_00546289:
        fld	dword ptr [esi + 0x40]
    L_0054628C:
        fstp	dword ptr [esp + 0x30]
    L_00546290:
        mov	ecx, dword ptr [eax + 0xf8]
    L_00546296:
        mov	edx, ecx
    L_00546298:
        shl	edx, 0x4
    L_0054629B:
        sub	edx, ecx
    L_0054629D:
        mov	eax, dword ptr [eax + 4*edx + 0x8]
    L_005462A1:
        mov	edx, dword ptr [eax]
    L_005462A3:
        mov	edx, dword ptr [edx + 0x3c]
    L_005462A6:
        lea	ecx, [esp + 0x44]
    L_005462AA:
        push	ecx
    L_005462AB:
        lea	ecx, [esp + 0x28]
    L_005462AF:
        push	ecx
    L_005462B0:
        lea	ecx, [esp + 0x14]
    L_005462B4:
        push	ecx
    L_005462B5:
        mov	ecx, eax
    L_005462B7:
        call	edx
    L_005462B9:
        fld	dword ptr [mem_00956A84]
    L_005462BF:
        fst	dword ptr [esp + 0x24]
    L_005462C3:
        lea	eax, [esp + 0x24]
    L_005462C7:
        fstp	dword ptr [esp + 0x28]
    L_005462CB:
        push	eax
    L_005462CC:
        fldz
    L_005462CE:
        lea	ecx, [esp + 0x48]
    L_005462D2:
        fst	dword ptr [esp + 0x30]
    L_005462D6:
        fstp	dword ptr [esp + 0x34]
    L_005462DA:
        call	ext_00486850
    L_005462DF:
        fadd	qword ptr [mem_0092A270]
    L_005462E5:
        fstp	dword ptr [esp + 0x70]
    L_005462E9:
        fld	dword ptr [esp + 0x70]
    L_005462ED:
        fdiv	dword ptr [esi + 0xc8]
    L_005462F3:
        fstp	dword ptr [esp + 0x70]
    L_005462F7:
        fld	dword ptr [esp + 0x70]
    L_005462FB:
        fst	dword ptr [esp + 0x34]
    L_005462FF:
        fst	dword ptr [esp + 0x38]
    L_00546303:
        fstp	dword ptr [esp + 0x3c]
    L_00546307:
        fld1
    L_00546309:
        fstp	dword ptr [esp + 0x40]
    L_0054630D:
        jmp	L_005463F9
    L_00546312:
        cmp	eax, 0x1
    L_00546315:
        jne	L_005463F9
    L_0054631B:
        mov	ecx, edi
    L_0054631D:
        shl	ecx, 0x4
    L_00546320:
        fld	dword ptr [ecx + esi - 0x2c]
    L_00546324:
        lea	eax, [ecx + esi - 0x2c]
    L_00546328:
        fstp	dword ptr [esp + 0x24]
    L_0054632C:
        fld	dword ptr [eax + 0x4]
    L_0054632F:
        fstp	dword ptr [esp + 0x28]
    L_00546333:
        fld	dword ptr [eax + 0x8]
    L_00546336:
        fstp	dword ptr [esp + 0x2c]
    L_0054633A:
        fld	dword ptr [eax + 0xc]
    L_0054633D:
        mov	eax, dword ptr [esi + 0x84]
    L_00546343:
        fstp	dword ptr [esp + 0x30]
    L_00546347:
        fld	dword ptr [esi + 0x34]
    L_0054634A:
        fstp	dword ptr [esp + 0x14]
    L_0054634E:
        fld	dword ptr [esi + 0x38]
    L_00546351:
        fstp	dword ptr [esp + 0x18]
    L_00546355:
        fld	dword ptr [esi + 0x3c]
    L_00546358:
        fstp	dword ptr [esp + 0x1c]
    L_0054635C:
        fld	dword ptr [esi + 0x40]
    L_0054635F:
        fstp	dword ptr [esp + 0x20]
    L_00546363:
        mov	ecx, dword ptr [eax + 0xf8]
    L_00546369:
        fld	dword ptr [esi + 0xcc]
    L_0054636F:
        mov	edx, ecx
    L_00546371:
        push	ecx
    L_00546372:
        shl	edx, 0x4
    L_00546375:
        fstp	dword ptr [esp]
    L_00546378:
        sub	edx, ecx
    L_0054637A:
        mov	eax, dword ptr [eax + 4*edx + 0x8]
    L_0054637E:
        mov	edx, dword ptr [eax]
    L_00546380:
        mov	edx, dword ptr [edx + 0x34]
    L_00546383:
        lea	ecx, [esp + 0x48]
    L_00546387:
        push	ecx
    L_00546388:
        lea	ecx, [esp + 0x2c]
    L_0054638C:
        push	ecx
    L_0054638D:
        lea	ecx, [esp + 0x20]
    L_00546391:
        push	ecx
    L_00546392:
        lea	ecx, [esp + 0x1c]
    L_00546396:
        push	ecx
    L_00546397:
        mov	ecx, eax
    L_00546399:
        call	edx
    L_0054639B:
        test	al, al
    L_0054639D:
        je	L_005463F9
    L_0054639F:
        lea	eax, [esi + 0x4]
    L_005463A2:
        push	eax
    L_005463A3:
        lea	ecx, [esp + 0x48]
    L_005463A7:
        call	ext_00694480
    L_005463AC:
        fldz
    L_005463AE:
        fst	dword ptr [esp + 0x50]
    L_005463B2:
        lea	ecx, [esp + 0x24]
    L_005463B6:
        fld	dword ptr [mem_00956A84]
    L_005463BC:
        push	ecx
    L_005463BD:
        fst	dword ptr [esp + 0x28]
    L_005463C1:
        lea	ecx, [esp + 0x48]
    L_005463C5:
        fst	dword ptr [esp + 0x2c]
    L_005463C9:
        fstp	dword ptr [esp + 0x30]
    L_005463CD:
        fst	dword ptr [esp + 0x34]
    L_005463D1:
        fstp	dword ptr [esp + 4*edi + 0x1c]
    L_005463D5:
        call	ext_00486850
    L_005463DA:
        fdiv	dword ptr [esi + 0xc8]
    L_005463E0:
        push	ecx
    L_005463E1:
        lea	edx, [esp + 0x38]
    L_005463E5:
        mov	ecx, esi
    L_005463E7:
        fstp	dword ptr [esp + 0x74]
    L_005463EB:
        fld	dword ptr [esp + 0x74]
    L_005463EF:
        fstp	dword ptr [esp]
    L_005463F2:
        push	edi
    L_005463F3:
        push	edx
    L_005463F4:
        call	ext_00545BE0
    L_005463F9:
        cmp	dword ptr [esi + 0x88], 0x0
    L_00546400:
        je	L_005464F8
    L_00546406:
        fld	dword ptr [esp + 0x34]
    L_0054640A:
        fabs
    L_0054640C:
        fstp	dword ptr [esp + 0x70]
    L_00546410:
        fld	dword ptr [esp + 0x70]
    L_00546414:
        fld	qword ptr [mem_009569F0]
    L_0054641A:
        fcom	st(1)
    L_0054641C:
        fnstsw	ax
    L_0054641E:
        fstp	st(1)
    L_00546420:
        test	ah, 0x41
    L_00546423:
        fld	dword ptr [mem_0094CE80]
    L_00546429:
        jne	L_0054642F
    L_0054642B:
        fst	dword ptr [esp + 0x34]
    L_0054642F:
        fld	dword ptr [esp + 0x38]
    L_00546433:
        fabs
    L_00546435:
        fstp	dword ptr [esp + 0x70]
    L_00546439:
        fld	dword ptr [esp + 0x70]
    L_0054643D:
        fcomp	st(2)
    L_0054643F:
        fnstsw	ax
    L_00546441:
        test	ah, 0x5
    L_00546444:
        jp	L_0054644A
    L_00546446:
        fst	dword ptr [esp + 0x38]
    L_0054644A:
        fld	dword ptr [esp + 0x3c]
    L_0054644E:
        fabs
    L_00546450:
        fstp	dword ptr [esp + 0x70]
    L_00546454:
        fld	dword ptr [esp + 0x70]
    L_00546458:
        fcomp	st(2)
    L_0054645A:
        fnstsw	ax
    L_0054645C:
        fstp	st(1)
    L_0054645E:
        test	ah, 0x5
    L_00546461:
        jp	L_00546469
    L_00546463:
        fstp	dword ptr [esp + 0x3c]
    L_00546467:
        jmp	L_0054646B
    L_00546469:
        fstp	st(0)
    L_0054646B:
        fld	dword ptr [esi + 0xb4]
    L_00546471:
        lea	eax, [esp + 0x34]
    L_00546475:
        fstp	dword ptr [esp + 0x24]
    L_00546479:
        push	eax
    L_0054647A:
        fld	dword ptr [esi + 0xb8]
    L_00546480:
        lea	ecx, [esi + 0x9c]
    L_00546486:
        fstp	dword ptr [esp + 0x2c]
    L_0054648A:
        fld	dword ptr [esi + 0xbc]
    L_00546490:
        fstp	dword ptr [esp + 0x30]
    L_00546494:
        call	ext_00549A10
    L_00546499:
        fld	dword ptr [esi + 0xb4]
    L_0054649F:
        mov	ecx, dword ptr [esi + 0x88]
    L_005464A5:
        fstp	dword ptr [esp + 0x14]
    L_005464A9:
        push	ebx
    L_005464AA:
        fld	dword ptr [esi + 0xb8]
    L_005464B0:
        lea	eax, [esi + 0x34]
    L_005464B3:
        fstp	dword ptr [esp + 0x1c]
    L_005464B7:
        push	eax
    L_005464B8:
        fld	dword ptr [esi + 0xbc]
    L_005464BE:
        lea	eax, [esp + 0x5c]
    L_005464C2:
        fstp	dword ptr [esp + 0x24]
    L_005464C6:
        push	eax
    L_005464C7:
        fld	dword ptr [esp + 0x20]
    L_005464CB:
        fdiv	dword ptr [esp + 0x30]
    L_005464CF:
        fstp	dword ptr [esp + 0x60]
    L_005464D3:
        fld	dword ptr [esp + 0x24]
    L_005464D7:
        fdiv	dword ptr [esp + 0x34]
    L_005464DB:
        fstp	dword ptr [esp + 0x64]
    L_005464DF:
        fld	dword ptr [esp + 0x28]
    L_005464E3:
        fdiv	dword ptr [esp + 0x38]
    L_005464E7:
        fstp	dword ptr [esp + 0x68]
    L_005464EB:
        fld1
    L_005464ED:
        fstp	dword ptr [esp + 0x6c]
    L_005464F1:
        mov	edx, dword ptr [ecx]
    L_005464F3:
        mov	edx, dword ptr [edx + 0x60]
    L_005464F6:
        call	edx
    L_005464F8:
        mov	eax, dword ptr [esi]
    L_005464FA:
        mov	edx, dword ptr [eax + 0x80]
    L_00546500:
        mov	ecx, esi
    L_00546502:
        call	edx
    L_00546504:
        pop	edi
    L_00546505:
        pop	esi
    L_00546506:
        mov	eax, 0x1
    L_0054650B:
        pop	ebx
    L_0054650C:
        add	esp, 0x58
    L_0054650F:
        ret	0xc
    L_00546512:
        pop	edi
    L_00546513:
        pop	esi
    L_00546514:
        xor	eax, eax
    L_00546516:
        pop	ebx
    L_00546517:
        add	esp, 0x58
    L_0054651A:
        ret	0xc
    }
}
