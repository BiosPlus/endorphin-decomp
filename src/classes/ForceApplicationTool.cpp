// Decompiled translation unit: src/classes/ForceApplicationTool.cpp

// [0x00544380] ForceApplicationTool::vfunc_26 (18 bytes)
extern "C" void ext_005442D0();

extern "C" void __fastcall fn_00544380(void* self) {
    typedef void (__fastcall *VFunc)(void*);
    ext_005442D0();
    void* vt = *(void**)self;
    VFunc f = *(VFunc*)((char*)vt + 0x74);
    f(self);
}

// [0x00544070] ForceApplicationTool::vfunc_24 (35 bytes)
extern "C" __declspec(naked) void __fastcall fn_00544070(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x74]
        call edx
        cmp dword ptr [esi + 0x88], 0x0
        je done
        mov ecx, dword ptr [esi + 0x88]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x3c]
        pop esi
        jmp edx
    done:
        pop esi
        ret
    }
}

// [0x005441F0] ForceApplicationTool::vfunc_14 (35 bytes)
extern "C" int __fastcall fn_005441F0(void* self) {
    if (*(int*)((char*)self + 0xc0) < 0) {
        void* sub = *(void**)((char*)self + 0xa8);
        typedef unsigned char (__fastcall *VFunc)(void*);
        if (!(*(VFunc*)(*(char**)sub + 0x38))(sub)) {
            return 0;
        }
    }
    return 1;
}

// [0x00544040] ForceApplicationTool::vfunc_23 (37 bytes)
extern "C" __declspec(naked) void __fastcall fn_00544040(void* self) {
    __asm {
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 0x88], 0x0
        je done
        mov ecx, dword ptr [esi + 0x88]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x38]
        push 0x1
        call edx
    done:
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x68]
        mov ecx, esi
        pop esi
        jmp edx
    }
}

// [0x005442A0] ForceApplicationTool::vfunc_29 (41 bytes)
extern "C" void __fastcall ext_005528A0(void* self);
extern "C" int mem_00940690;

extern "C" void __fastcall fn_005442A0(void* self) {
    typedef void (__fastcall *VFunc)(void*);
    char* s = (char*)self;
    ext_005528A0(s + 0xb0);
    void* sub = *(void**)(s + 0xa8);
    void* vt = *(void**)sub;
    VFunc f = *(VFunc*)((char*)vt + 0x74);
    f(sub);
    *(float*)(s + 0xbc) = *(float*)&mem_00940690;
}

// [0x005441C0] ForceApplicationTool::vfunc_28 (44 bytes)
extern "C" void ext_00552860();

extern "C" __declspec(naked) void __fastcall fn_005441C0(void* self) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0x10]
        mov esi, ecx
        push edi
        lea ecx, [esi + 0xb0]
        call ext_00552860
        mov ecx, dword ptr [esi + 0xa8]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [esp + 0xc]
        mov eax, dword ptr [eax + 0x70]
        push edi
        push edx
        call eax
        pop edi
        pop esi
        ret 0x8
    }
}

// [0x005440F0] ForceApplicationTool::vfunc_16 (63 bytes)
extern "C" void ext_00543530();

extern "C" int __fastcall fn_005440F0(void* self, int edx_unused, int a1, int a2) {
    typedef int (__thiscall *SubFn)(void*, int, int);
    typedef void (__thiscall *VFunc1)(void*, int, int);
    typedef void (__thiscall *VFunc2)(void*);
    char* s = (char*)self;
    int r = ((SubFn)ext_00543530)(*(void**)(s + 0xac), a1, a2);
    if (r >= 0) {
        void** vt = *(void***)self;
        VFunc1 f = (VFunc1)vt[0x70 / 4];
        f(self, a1, r);
    }
    void** vt2 = *(void***)(*(void**)(s + 0x88));
    VFunc2 g = (VFunc2)vt2[0x50 / 4];
    g(*(void**)(s + 0x88));
    return 1;
}

// [0x005447A0] ForceApplicationTool::vfunc_17 (62 bytes)
extern "C" void ext_00543550();

extern "C" int __fastcall fn_005447A0(void* self, int edx_unused, int a1, int a2) {
    typedef void (__thiscall *SubFn)(void*, int, int);
    typedef void (__thiscall *VFunc)(void*);
    char* s = (char*)self;
    ((SubFn)ext_00543550)(*(void**)(s + 0xac), a1, a2);
    void* sub = *(void**)(s + 0x88);
    void** vt2 = *(void***)sub;
    ((VFunc)vt2[0x54 / 4])(sub);
    ((VFunc)ext_005442D0)(self);
    void** vt = *(void***)self;
    ((VFunc)vt[0x74 / 4])(self);
    return 1;
}

// [0x00544490] ForceApplicationTool::vfunc_31 (172 bytes)
extern "C" void ext_00480430();
extern "C" void ext_005434C0();
extern "C" int mem_00925414;
extern "C" int mem_009253C8;
extern "C" int mem_00925404;

extern "C" __declspec(naked) void __fastcall fn_00544490(void* self) {
    __asm {
        sub esp, 0x10
        push esi
        mov esi, ecx
        call ext_005434C0
        test al, al
        jne done
        push ebx
        push edi
        call dword ptr [mem_00925414]
        lea edi, [esi + 0x4]
        mov ecx, edi
        call ext_00480430
        push edi
        call dword ptr [mem_009253C8]
        fld dword ptr [esi + 0x34]
        mov eax, dword ptr [esi + 0x84]
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esi + 0x38]
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esi + 0x3c]
        fstp dword ptr [esp + 0x14]
        fld dword ptr [esi + 0x40]
        fstp dword ptr [esp + 0x18]
        mov ecx, dword ptr [eax + 0xfc]
        mov edx, ecx
        shl edx, 4
        sub edx, ecx
        mov eax, dword ptr [eax + edx*4 + 0x8]
        mov edx, dword ptr [eax]
        mov edx, dword ptr [edx + 0x18]
        lea ecx, [esp + 0xc]
        push ecx
        mov ecx, eax
        call edx
        fstp dword ptr [esi + 0xb8]
        mov edi, dword ptr [esp + 0x24]
        mov eax, dword ptr [esi + 0xb0]
        mov ebx, dword ptr [esp + 0x20]
        mov edx, dword ptr [eax + 0x10]
        lea ecx, [esi + 0xb0]
        push edi
        push ebx
        call edx
        call dword ptr [mem_00925404]
        mov ecx, dword ptr [esi + 0xa8]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x7c]
        push edi
        push ebx
        call edx
        pop edi
        pop ebx
    done:
        pop esi
        add esp, 0x10
        ret 0x8
    }
}

// [0x005443A0] ForceApplicationTool::vfunc_6_off_98 (225 bytes)
extern "C" void ext_006A6C87();
extern "C" int mem_00AF2940;
extern "C" int mem_00AF2900;
extern "C" int mem_00AF2904;
extern "C" int mem_00AF2908;
extern "C" int mem_00AF290C;
extern "C" int mem_00AF2910;
extern "C" int mem_00AF2918;
extern "C" int mem_00AF291C;
extern "C" int mem_00AF2920;
extern "C" int mem_00AF2924;
extern "C" int mem_00AF292C;
extern "C" int mem_00AF2930;
extern "C" int mem_00AF2934;
extern "C" int mem_00AF2938;
extern "C" int mem_00AF2914;
extern "C" int mem_00AF2928;
extern "C" int mem_00AF293C;

extern "C" __declspec(naked) void* __fastcall fn_005443A0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        cmp dword ptr [esi - 0x10], 0x0
        je loc_005443C1
        mov ecx, dword ptr [esi - 0x10]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x2c]
        call edx
        test al, al
        je loc_005443C1
        lea eax, [esi - 0x94]
        pop esi
        ret 0x4
    loc_005443C1:
        mov ecx, dword ptr [esi + 0x10]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x38]
        call edx
        test al, al
        je loc_005443D9
        mov eax, dword ptr [esi + 0x10]
        add eax, 0x4
        pop esi
        ret 0x4
    loc_005443D9:
        mov eax, 0x1
        test byte ptr [mem_00AF2940], al
        jne loc_0054445D
        fld1
        or dword ptr [mem_00AF2940], eax
        fst dword ptr [mem_00AF2900]
        push 0x91b000
        fldz
        fst dword ptr [mem_00AF2904]
        fst dword ptr [mem_00AF2908]
        fst dword ptr [mem_00AF290C]
        fst dword ptr [mem_00AF2910]
        fst dword ptr [mem_00AF2918]
        fst dword ptr [mem_00AF291C]
        fst dword ptr [mem_00AF2920]
        fst dword ptr [mem_00AF2924]
        fst dword ptr [mem_00AF292C]
        fst dword ptr [mem_00AF2930]
        fst dword ptr [mem_00AF2934]
        fstp dword ptr [mem_00AF2938]
        fst dword ptr [mem_00AF2914]
        fst dword ptr [mem_00AF2928]
        fstp dword ptr [mem_00AF293C]
        call ext_006A6C87
        add esp, 0x4
    loc_0054445D:
        fld dword ptr [esi - 0x64]
        mov eax, offset mem_00AF2900
        fstp dword ptr [mem_00AF2930]
        fld dword ptr [esi - 0x60]
        fstp dword ptr [mem_00AF2934]
        fld dword ptr [esi - 0x5c]
        pop esi
        fstp dword ptr [mem_00AF2938]
        ret 0x4
    }
}

// [0x00543F00] ForceApplicationTool::vfunc_2 (311 bytes)
extern "C" void ext_0063EFE0();
extern "C" void ext_0046C0A0();
extern "C" void ext_004275E0();
extern "C" int mem_00A9F7C8;
extern "C" int mem_00A9F8E4;
extern "C" int mem_00A9FA6C;
extern "C" int mem_00A9F6E4;
extern "C" int mem_00924FE8;
extern "C" int mem_00924FC0;
extern "C" int mem_00924FF4;
extern "C" int mem_0092C508;
extern "C" int mem_0093F8EC;

extern "C" __declspec(naked) void __fastcall fn_00543F00(void* self) {
    __asm {
        push -1
        push 0x8b56f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        mov eax, dword ptr [mem_00A9F7C8]
        push esi
        push edi
        mov edi, dword ptr [esp + 0x38]
        mov esi, ecx
        push eax
        mov ecx, edi
        call ext_0063EFE0
        lea ecx, [esp + 0x38]
        push ecx
        lea edx, [esi + 0xa0]
        push edx
        mov dword ptr [esp + 0x40], eax
        call ext_0046C0A0
        mov eax, dword ptr [mem_00A9F8E4]
        add esp, 0x8
        push eax
        mov ecx, edi
        call ext_0063EFE0
        lea ecx, [esp + 0x38]
        push ecx
        lea edx, [esi + 0xa4]
        push edx
        mov dword ptr [esp + 0x40], eax
        call ext_0046C0A0
        add esp, 0x8
        lea ecx, [esp + 0xc]
        call dword ptr [mem_00924FE8]
        mov eax, dword ptr [mem_00A9FA6C]
        push eax
        mov ecx, edi
        mov dword ptr [esp + 0x34], 0x0
        call ext_0063EFE0
        push eax
        lea ecx, [esp + 0x10]
        push ecx
        call ext_004275E0
        lea edx, [esp + 0x14]
        push 0x956258
        push edx
        call dword ptr [mem_00924FC0]
        add esp, 0x10
        neg al
        mov ecx, edi
        sbb eax, eax
        neg eax
        mov dword ptr [esi + 0x9c], eax
        mov eax, dword ptr [mem_00A9F6E4]
        push eax
        call ext_0063EFE0
        lea ecx, [esp + 0x38]
        push ecx
        lea edx, [esp + 0xc]
        push edx
        mov dword ptr [esp + 0x40], eax
        call ext_0046C0A0
        fld dword ptr [esp + 0x10]
        fstp dword ptr [esi + 0xc4]
        add esp, 0x8
        fld dword ptr [esi + 0xc4]
        fcomp qword ptr [mem_0092C508]
        fnstsw ax
        test ah, 0x5
        jp L_else
        fld dword ptr [mem_0093F8EC]
    L_store:
        fstp dword ptr [esi + 0xc4]
        jmp L_end
    L_else:
        fld1
        fcom dword ptr [esi + 0xc4]
        fnstsw ax
        test ah, 0x5
        jnp L_store
        fstp st(0)
    L_end:
        lea ecx, [esp + 0xc]
        mov dword ptr [esp + 0x30], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x28]
        pop edi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x2c
        ret 0x4
    }
}

// [0x005440A0] ForceApplicationTool::vfunc_22_off_98 (66 bytes)
extern "C" void ext_0067E020();

extern "C" __declspec(naked) void __fastcall fn_005440A0(void* self, int edx_unused, int a1, int a2, float a3) {
    __asm {
        fld dword ptr [esp + 0xc]
        push ebx
        mov ebx, dword ptr [esp + 0x8]
        push esi
        push edi
        mov edi, dword ptr [esp + 0x14]
        push ecx
        fstp dword ptr [esp]
        mov esi, ecx
        push edi
        push ebx
        lea ecx, [esi - 0x94]
        call ext_0067E020
        cmp dword ptr [esi - 0x10], 0x0
        je done
        mov ecx, dword ptr [esi - 0x10]
        fld dword ptr [esp + 0x18]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x58]
        push ecx
        fstp dword ptr [esp]
        push edi
        push ebx
        call edx
    done:
        pop edi
        pop esi
        pop ebx
        ret 0xc
    }
}

extern "C" void ext_0047FFA0();
extern "C" void ext_00486850();
extern "C" void ext_005434F0();
extern "C" void ext_00543E00();
extern "C" int mem_0093F8F0;
extern "C" int mem_0092C508;

// [0x00544540] ForceApplicationTool::vfunc_15 (594 bytes)
extern "C" __declspec(naked) int __fastcall fn_00544540(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        sub esp, 0x50
        push ebx
        mov ebx, dword ptr [esp + 0x60]
        test bl, 0x1
        push esi
        mov esi, ecx
        je loc_544785
        cmp dword ptr [esi + 0xc0], 0xa
        jne loc_54476F
        fldz
        mov eax, dword ptr [esi + 0x84]
        fst dword ptr [esp + 0x34]
        push edi
        fst dword ptr [esp + 0x34]
        mov edi, dword ptr [esp + 0x60]
        fst dword ptr [esp + 0x30]
        fst dword ptr [esp + 0x2c]
        fst dword ptr [esp + 0x28]
        fst dword ptr [esp + 0x24]
        fst dword ptr [esp + 0x20]
        fstp dword ptr [esp + 0x1c]
        mov ecx, dword ptr [eax + 0xf8]
        fld dword ptr [esi + 0x4]
        mov edx, ecx
        fstp dword ptr [esp + 0x3c]
        fld dword ptr [esi + 0x8]
        shl edx, 0x4
        sub edx, ecx
        fstp dword ptr [esp + 0x40]
        mov ecx, dword ptr [eax + 4*edx + 0x18]
        fld dword ptr [esi + 0xc]
        sub ecx, dword ptr [eax + 0x138]
        fstp dword ptr [esp + 0x44]
        lea edx, [eax + 4*edx]
        fld dword ptr [esi + 0x10]
        add ecx, dword ptr [edi + 0x4]
        fstp dword ptr [esp + 0x48]
        mov edi, dword ptr [edi]
        fld dword ptr [esi + 0x34]
        sub edi, dword ptr [edx + 0xc]
        fstp dword ptr [esp + 0x4c]
        fld dword ptr [esi + 0x38]
        mov dword ptr [esp + 0x10], ecx
        mov dword ptr [esp + 0xc], edi
        fstp dword ptr [esp + 0x50]
        mov ecx, dword ptr [eax + 0xf8]
        fld dword ptr [esi + 0x3c]
        mov edi, dword ptr [esp + 0x64]
        fstp dword ptr [esp + 0x54]
        fld dword ptr [esi + 0x40]
        mov edx, ecx
        shl edx, 0x4
        fstp dword ptr [esp + 0x58]
        sub edx, ecx
        fld dword ptr [mem_0093F8F0]
        mov ecx, dword ptr [eax + 4*edx + 0x18]
        sub ecx, dword ptr [eax + 0x138]
        lea edx, [eax + 4*edx]
        add ecx, dword ptr [edi + 0x4]
        mov edi, dword ptr [edi]
        sub edi, dword ptr [edx + 0xc]
        mov dword ptr [esp + 0x18], ecx
        mov dword ptr [esp + 0x14], edi
        mov ecx, dword ptr [eax + 0xf8]
        mov edx, ecx
        push ecx
        shl edx, 0x4
        fstp dword ptr [esp]
        sub edx, ecx
        mov eax, dword ptr [eax + 4*edx + 0x8]
        mov edx, dword ptr [eax]
        mov edx, dword ptr [edx + 0x38]
        lea ecx, [esp + 0x30]
        push ecx
        lea ecx, [esp + 0x44]
        push ecx
        lea ecx, [esp + 0x58]
        push ecx
        lea ecx, [esp + 0x1c]
        push ecx
        mov ecx, eax
        call edx
        test al, al
        pop edi
        je loc_544785
        fld dword ptr [esi + 0x4]
        mov eax, dword ptr [esi + 0x84]
        fstp dword ptr [esp + 0x48]
        fld dword ptr [esi + 0x8]
        fstp dword ptr [esp + 0x4c]
        fld dword ptr [esi + 0xc]
        fstp dword ptr [esp + 0x50]
        fld dword ptr [esi + 0x10]
        fstp dword ptr [esp + 0x54]
        fld dword ptr [esi + 0x34]
        fstp dword ptr [esp + 0x38]
        fld dword ptr [esi + 0x38]
        fstp dword ptr [esp + 0x3c]
        fld dword ptr [esi + 0x3c]
        fstp dword ptr [esp + 0x40]
        fld dword ptr [esi + 0x40]
        fstp dword ptr [esp + 0x44]
        mov ecx, dword ptr [eax + 0xf8]
        fldz
        mov edx, ecx
        push ecx
        fstp dword ptr [esp]
        shl edx, 0x4
        sub edx, ecx
        mov eax, dword ptr [eax + 4*edx + 0x8]
        mov edx, dword ptr [eax]
        mov edx, dword ptr [edx + 0x38]
        lea ecx, [esp + 0x1c]
        push ecx
        lea ecx, [esp + 0x50]
        push ecx
        lea ecx, [esp + 0x44]
        push ecx
        lea ecx, [esp + 0x20]
        push ecx
        mov ecx, eax
        call edx
        fld dword ptr [esi + 0x4]
        fstp dword ptr [esp + 0x48]
        lea eax, [esp + 0x48]
        fld dword ptr [esi + 0x8]
        push eax
        fstp dword ptr [esp + 0x50]
        lea ecx, [esp + 0x1c]
        fld dword ptr [esi + 0xc]
        push ecx
        fstp dword ptr [esp + 0x58]
        lea edx, [esp + 0x40]
        fld dword ptr [esi + 0x10]
        push edx
        lea ecx, [esp + 0x34]
        fstp dword ptr [esp + 0x60]
        call ext_0047FFA0
        mov ecx, eax
        call ext_00486850
        test bl, 0x4
        push ecx
        lea ecx, [esi + 0xb0]
        je loc_544726
        fmul qword ptr [mem_0092C508]
        fstp dword ptr [esp + 0x64]
        fld dword ptr [esp + 0x64]
    loc_544726:
        fstp dword ptr [esp]
        call ext_00543E00
        cmp dword ptr [esi + 0x88], 0x0
        je loc_544785
        fld dword ptr [esi + 0xa0]
        mov ecx, dword ptr [esi + 0x88]
        fmul dword ptr [esi + 0xc4]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x68]
        push ecx
        fmul dword ptr [esi + 0xc4]
        fstp dword ptr [esp + 0x64]
        fld dword ptr [esp + 0x64]
        fstp dword ptr [esp]
        call edx
        pop esi
        mov eax, 0x1
        pop ebx
        add esp, 0x50
        ret 0xc
    loc_54476F:
        mov eax, dword ptr [esp + 0x60]
        mov ecx, dword ptr [esp + 0x5c]
        push ebx
        push eax
        push ecx
        mov ecx, dword ptr [esi + 0xa8]
        call ext_005434F0
    loc_544785:
        pop esi
        mov eax, 0x1
        pop ebx
        add esp, 0x50
        ret 0xc
    }
}
