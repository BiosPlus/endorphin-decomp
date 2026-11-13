// Decompiled translation unit: src/classes/GridPropertyPage.cpp

extern "C" void ext_006A5FC8();
extern "C" void ext_0052EE00();
extern "C" void ext_006A608E();
extern "C" void ext_006A61E4();
extern "C" int mem_0092561C;
extern "C" void ext_00404F00();
extern "C" void ext_006A5F4A();
extern "C" void ext_006A5F50();
extern "C" int mem_009242FC;
extern "C" int mem_00924300;
extern "C" int mem_009251E4;
extern "C" int mem_00924FF0;
extern "C" int mem_00924FF4;
extern "C" int mem_009242F4;

// [0x0041BB70] GridPropertyPage::vfunc_84 (54 bytes)
extern "C" int __fastcall fn_0041BB70(void* self) {
    typedef void* (__thiscall *PFN_getter)(void*);
    typedef void* (__cdecl *PFN_plain)();
    typedef unsigned char (__thiscall *PFN_vcall)(void*);
    typedef void (__thiscall *PFN_sink)(void*, int);

    void* wnd = ((PFN_getter)ext_006A5FC8)(self);
    void* obj = ((PFN_plain)ext_0052EE00)();
    unsigned char r = ((PFN_vcall)(*(void***)obj)[0x138 / 4])(obj);
    *(int*)((char*)self + 0x1f0) = (r == 0) ? 1 : 0;
    ((PFN_sink)ext_006A608E)(self, 0);
    (void)wnd;
    return 1;
}

// [0x0041BBB0] GridPropertyPage::vfunc_86 (64 bytes)
extern "C" __declspec(naked) void __fastcall fn_0041BBB0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x20]
        push eax
        call dword ptr [mem_0092561C]
        test eax, eax
        je done_0041BBB0
        push 1
        mov ecx, esi
        call ext_006A608E
        call ext_0052EE00
        cmp dword ptr [esi + 0x1f0], 0x0
        mov edx, dword ptr [eax]
        mov edx, dword ptr [edx + 0xb0]
        sete cl
        push ecx
        mov ecx, eax
        call edx
        mov ecx, esi
        pop esi
        jmp ext_006A61E4
    done_0041BBB0:
        pop esi
        ret
    }
}

// [0x0041BEF0] GridPropertyPage::vfunc_63 (175 bytes)
extern "C" void ext_006A5F44();
extern "C" void ext_006A63AC();

extern "C" void __fastcall fn_0041BEF0(void* self, int edx_unused, int a1) {
    typedef void (__stdcall *DdxFn)(int, int, void*);
    char* p = (char*)self;
    DdxFn ddx = (DdxFn)ext_006A5F44;
    DdxFn ddx2 = (DdxFn)ext_006A63AC;
    ddx(a1, 0x485, p + 0x8c);
    ddx(a1, 0x432, p + 0xe0);
    ddx(a1, 0x433, p + 0x134);
    ddx(a1, 0x486, p + 0x188);
    ddx(a1, 0x437, (void*)*(int*)(p + 0x1dc));
    ddx(a1, 0x438, (void*)*(int*)(p + 0x1e0));
    ddx(a1, 0x43c, (void*)*(int*)(p + 0x1e4));
    ddx(a1, 0x43d, (void*)*(int*)(p + 0x1e8));
    ddx2(a1, 0x42d, p + 0x1f0);
}

// [0x0041C3A0] GridPropertyPage::vfunc_91 (365 bytes)
extern "C" void ext_00404F00();
extern "C" void ext_00664840();
extern "C" void ext_006A5F50();
extern "C" void ext_006A6226();
extern "C" int mem_00924FF0;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_0041C3A0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x877434
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x38
        push esi
        mov esi, ecx
        call ext_006A6226
        cmp dword ptr [esi + 0x1ec], 0x0
        je done_0041C3A0
        mov ecx, dword ptr [esi + 0x1ec]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0xd4]
        push edi
        call edx
        push ecx
        lea eax, [esp + 0xc]
        fstp dword ptr [esp]
        push eax
        call ext_00664840
        add esp, 0x8
        mov ecx, eax
        mov dword ptr [esp + 0x48], 0x0
        call dword ptr [mem_00924FF0]
        push eax
        lea ecx, [esi + 0x8c]
        call ext_006A5F50
        or edi, -1
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x48], edi
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esi + 0x1ec]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0xd0]
        call eax
        push ecx
        lea ecx, [esp + 0xc]
        fstp dword ptr [esp]
        push ecx
        call ext_00664840
        add esp, 0x8
        mov ecx, eax
        mov dword ptr [esp + 0x48], 0x1
        call dword ptr [mem_00924FF0]
        push eax
        lea ecx, [esi + 0xe0]
        call ext_006A5F50
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x48], edi
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esi + 0x1ec]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0xdc]
        call eax
        push eax
        lea ecx, [esp + 0xc]
        push ecx
        call ext_00404F00
        add esp, 0x8
        mov ecx, eax
        mov dword ptr [esp + 0x48], 0x2
        call dword ptr [mem_00924FF0]
        push eax
        lea ecx, [esi + 0x134]
        call ext_006A5F50
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x48], edi
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esi + 0x1ec]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0xd8]
        call eax
        push eax
        lea ecx, [esp + 0x28]
        push ecx
        call ext_00404F00
        add esp, 0x8
        mov ecx, eax
        mov dword ptr [esp + 0x48], 0x3
        call dword ptr [mem_00924FF0]
        push eax
        lea ecx, [esi + 0x188]
        call ext_006A5F50
        lea ecx, [esp + 0x24]
        mov dword ptr [esp + 0x48], edi
        call dword ptr [mem_00924FF4]
        pop edi
    done_0041C3A0:
        mov ecx, dword ptr [esp + 0x3c]
        mov eax, 0x1
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x44
        ret
    }
}

// [0x0041C190] GridPropertyPage::vfunc_1_off_88 (496 bytes)
extern "C" __declspec(naked) void __fastcall fn_0041C190(void* self, int edx_unused, int id) {
    __asm {
        push    -1
        push    0x8773fd
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x74
        push    ebx
        push    esi
        mov     esi, ecx
        lea     ecx, [esp + 0x8]
        call    dword ptr [mem_009242FC]
        mov     eax, dword ptr [esp + 0x8c]
        xor     ebx, ebx
        add     eax, 0xfffffbc9
        cmp     eax, 6
        mov     dword ptr [esp + 0x84], ebx
        ja      L_done
        jmp     dword ptr [eax * 4 + 0x41c378]

        lea     eax, [esp + 0x8]
        add     esi, 4
        push    eax
        mov     ecx, esi
        call    ext_006A5F4A
        lea     ecx, [esp + 0x8]
        call    dword ptr [mem_00924300]
        push    eax
        call    dword ptr [mem_009251E4]
        sub     eax, 1
        add     esp, 4
        cmp     eax, ebx
        jle     L_done
        push    eax
        lea     ecx, [esp + 0x10]
        push    ecx
        call    ext_00404F00
        add     esp, 8
        mov     ecx, eax
        mov     byte ptr [esp + 0x84], 1
        call    dword ptr [mem_00924FF0]
        push    eax
        mov     ecx, esi
        call    ext_006A5F50
        lea     ecx, [esp + 0xc]
        jmp     L_dtor_str

        lea     edx, [esp + 0x8]
        add     esi, 0x58
        push    edx
        mov     ecx, esi
        call    ext_006A5F4A
        lea     ecx, [esp + 0x8]
        call    dword ptr [mem_00924300]
        push    eax
        call    dword ptr [mem_009251E4]
        sub     eax, 1
        add     esp, 4
        cmp     eax, ebx
        jle     L_done
        push    eax
        lea     eax, [esp + 0x2c]
        push    eax
        call    ext_00404F00
        add     esp, 8
        mov     ecx, eax
        mov     byte ptr [esp + 0x84], 2
        call    dword ptr [mem_00924FF0]
        push    eax
        mov     ecx, esi
        call    ext_006A5F50
        lea     ecx, [esp + 0x28]
        jmp     L_dtor_str

        lea     ecx, [esp + 0x8]
        add     esi, 0xac
        push    ecx
        mov     ecx, esi
        call    ext_006A5F4A
        lea     ecx, [esp + 0x8]
        call    dword ptr [mem_00924300]
        push    eax
        call    dword ptr [mem_009251E4]
        sub     eax, 1
        add     esp, 4
        cmp     eax, ebx
        jle     L_done
        push    eax
        lea     edx, [esp + 0x48]
        push    edx
        call    ext_00404F00
        add     esp, 8
        mov     ecx, eax
        mov     byte ptr [esp + 0x84], 3
        call    dword ptr [mem_00924FF0]
        push    eax
        mov     ecx, esi
        call    ext_006A5F50
        lea     ecx, [esp + 0x44]
        jmp     L_dtor_str

        lea     eax, [esp + 0x8]
        add     esi, 0x100
        push    eax
        mov     ecx, esi
        call    ext_006A5F4A
        lea     ecx, [esp + 0x8]
        call    dword ptr [mem_00924300]
        push    eax
        call    dword ptr [mem_009251E4]
        sub     eax, 1
        add     esp, 4
        cmp     eax, ebx
        jle     L_done
        push    eax
        lea     ecx, [esp + 0x64]
        push    ecx
        call    ext_00404F00
        add     esp, 8
        mov     ecx, eax
        mov     byte ptr [esp + 0x84], 4
        call    dword ptr [mem_00924FF0]
        push    eax
        mov     ecx, esi
        call    ext_006A5F50
        lea     ecx, [esp + 0x60]

    L_dtor_str:
        mov     byte ptr [esp + 0x84], bl
        call    dword ptr [mem_00924FF4]

    L_done:
        lea     ecx, [esp + 0x8]
        call    dword ptr [mem_009242F4]
        mov     ecx, dword ptr [esp + 0x7c]
        pop     esi
        pop     ebx
        mov     dword ptr fs:[0], ecx
        add     esp, 0x80
        ret     4

        mov     edi, edi
        _emit   0xdb
        _emit   0xc1
        _emit   0x41
        _emit   0x00
        _emit   0x38
        _emit   0xc2
        _emit   0x41
        _emit   0x00
    }
}
