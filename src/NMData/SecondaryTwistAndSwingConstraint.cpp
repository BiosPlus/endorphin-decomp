// Decompiled translation unit: src/NMData/SecondaryTwistAndSwingConstraint.cpp

// [0x0061F990] NMData::SecondaryTwistAndSwingConstraint::vfunc_15 (102 bytes)
extern "C" void ext_005DF1F0();
extern "C" void ext_0061EFD0();
extern "C" void ext_0061EFF0();
extern "C" void ext_0061F010();

extern "C" __declspec(naked) int __fastcall fn_0061F990(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push ecx
        mov edx, dword ptr [esp + 0xc]
        mov eax, edx
        sub eax, 0x33b
        push esi
        mov esi, dword ptr [esp + 0xc]
        mov dword ptr [esp + 0x4], 0x0
        je L_33b
        sub eax, 0x3
        je L_3
        sub eax, 0x18
        je L_18
        push edx
        push esi
        call ext_005DF1F0
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    L_18:
        push ecx
        push esi
        call ext_0061EFD0
        add esp, 0x8
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    L_3:
        push ecx
        push esi
        call ext_0061F010
        add esp, 0x8
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    L_33b:
        push ecx
        push esi
        call ext_0061EFF0
        add esp, 0x8
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    }
}

// [0x00611830] NMData::SecondaryTwistAndSwingConstraint::vfunc_14 (54 bytes)
extern "C" void ext_0058F6B0();
extern "C" void ext_00661650();

extern "C" __declspec(naked) void* __fastcall fn_00611830(void* self, int edx_unused, void* a1, int a2) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0xc]
        cmp eax, 0x159
        push esi
        mov esi, dword ptr [esp + 0xc]
        mov dword ptr [esp + 0x4], 0x0
        je special
        push eax
        push esi
        call ext_0058F6B0
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    special:
        push ecx
        mov ecx, esi
        call ext_00661650
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    }
}

// [0x00612A20] NMData::SecondaryTwistAndSwingConstraint::vfunc_21 (310 bytes)
extern "C" void ext_00593910();
extern "C" void ext_00612650();
extern "C" void ext_0063F530();
extern "C" void ext_0067EFD0();
extern "C" int mem_00A9F24C;
extern "C" int mem_00B40640;
extern "C" int mem_00A9F34C;

extern "C" __declspec(naked) void __fastcall fn_00612A20(void* self, int edx_unused, void* arg) {
    __asm {
        sub     esp, 0xc
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x18]
        push    edi
        mov     esi, ecx
        call    ext_00612650
        mov     eax, dword ptr [mem_00A9F24C]
        push    0x1
        push    0x0
        push    eax
        mov     ecx, edi
        call    ext_0063F530
        cmp     eax, 0xb53a34
        je      loc_612a65
        cmp     eax, 0xb53b30
        je      loc_612a65
        cmp     eax, 0xb53ab0
        je      loc_612a65
        cmp     eax, 0xb53a70
        je      loc_612a65
        cmp     eax, 0xb53af0
        jne     loc_612a6c
    loc_612a65:
        mov     edi, 0xb53b30
        jmp     loc_612a6e
    loc_612a6c:
        mov     edi, eax
    loc_612a6e:
        cmp     edi, 0xb53a34
        je      loc_612b4e
        cmp     edi, 0xb53b30
        je      loc_612b4e
        cmp     edi, 0xb53ab0
        je      loc_612b4e
        cmp     edi, 0xb53a70
        je      loc_612b4e
        cmp     edi, 0xb53af0
        je      loc_612b4e
        push    ebx
        mov     ebx, dword ptr [esi]
        lea     ecx, [esp + 0xc]
        push    edi
        push    ecx
        call    ext_0067EFD0
        mov     edx, dword ptr [ebx + 0xf4]
        add     esp, 0x8
        push    eax
        mov     ecx, esi
        call    edx
        mov     ecx, dword ptr [mem_00B40640]
        mov     eax, dword ptr [esi + 0x4]
        mov     edx, dword ptr [eax + 0xc]
        lea     ebx, [esi + 0x4]
        push    ecx
        mov     ecx, ebx
        call    edx
        mov     eax, dword ptr [mem_00A9F34C]
        push    0x1
        push    0x0
        push    eax
        mov     ecx, edi
        call    ext_0063F530
        cmp     eax, 0xb53a34
        je      loc_612b0e
        cmp     eax, 0xb53b30
        je      loc_612b0e
        cmp     eax, 0xb53ab0
        je      loc_612b0e
        cmp     eax, 0xb53a70
        je      loc_612b0e
        cmp     eax, 0xb53af0
        jne     loc_612b13
    loc_612b0e:
        mov     eax, 0xb53b30
    loc_612b13:
        cmp     eax, 0xb53a34
        je      loc_612b3e
        cmp     eax, 0xb53b30
        je      loc_612b3e
        cmp     eax, 0xb53ab0
        je      loc_612b3e
        cmp     eax, 0xb53a70
        je      loc_612b3e
        cmp     eax, 0xb53af0
        je      loc_612b3e
        push    edi
        mov     ecx, esi
        call    ext_00593910
    loc_612b3e:
        mov     edx, dword ptr [ebx]
        mov     eax, dword ptr [mem_00B40640]
        mov     edx, dword ptr [edx + 0xc]
        push    eax
        mov     ecx, ebx
        call    edx
        pop     ebx
    loc_612b4e:
        pop     edi
        pop     esi
        add     esp, 0xc
        ret     0x4
    }
}

// [0x0061EAB0] NMData::SecondaryTwistAndSwingConstraint::vfunc_17_off_C (99 bytes)
extern "C" void ext_0061D750();
extern "C" void ext_006A5C62();

extern "C" __declspec(naked) void __fastcall fn_0061EAB0(void* self) {
    __asm {
        push -1
        push 08a7a5bh
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        push ecx
        push esi
        push 164h
        mov esi, ecx
        call ext_006A5C62
        add esp, 4
        mov [esp+4], eax
        test eax, eax
        mov dword ptr [esp+10h], 0
        je fn_0061EAB0_null
        add esi, -0ch
        push esi
        mov ecx, eax
        call ext_0061D750
        pop esi
        mov ecx, [esp+4]
        mov fs:[0], ecx
        add esp, 10h
        ret
    fn_0061EAB0_null:
        mov ecx, [esp+8]
        xor eax, eax
        pop esi
        mov fs:[0], ecx
        add esp, 10h
        ret
    }
}

extern "C" void ext_00593AE0();
extern "C" void ext_00611270();
extern "C" void ext_00640390();
extern "C" void ext_0067F040();
extern "C" int mem_00A9F24C;

struct Local12_006117D0 {
    int a;
    int b;
    int c;
};

// [0x006117D0] NMData::SecondaryTwistAndSwingConstraint::vfunc_22 (85 bytes)
extern "C" void* __fastcall fn_006117D0(void* self, int edx_unused, void* a1) {
    ((void (__thiscall*)(void*, void*))ext_00611270)(self, a1);
    Local12_006117D0 local;
    typedef void (__thiscall* VFunc68)(void*, Local12_006117D0*);
    (*(VFunc68**)self)[0x110 / 4](self, &local);
    void* b = ((void* (__thiscall*)(void*, int, int))ext_00640390)(a1, mem_00A9F24C, 0);
    ((void (__cdecl*)(void*, Local12_006117D0*))ext_0067F040)(b, &local);
    ((void (__thiscall*)(void*, void*))ext_00593AE0)(self, b);
    return a1;
}

// [0x0061D4A0] NMData::SecondaryTwistAndSwingConstraint::vfunc_34 (683 bytes)
extern "C" void ext_00493E40();
extern "C" void ext_00493E70();
extern "C" void ext_00528B90();
extern "C" void ext_005AC360();
extern "C" void ext_005B1870();
extern "C" void ext_005B18E0();
extern "C" void ext_005B5780();
extern "C" void ext_006A6C87();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;
extern "C" int mem_00B40640;
extern "C" int mem_00B49088;
extern "C" int mem_00959050;
extern "C" int mem_0093247C;

extern "C" __declspec(naked) void* __fastcall fn_0061D4A0(void* self, int edx_unused, void* a1) {
    __asm {
        push    -1
        push    0x8a9390
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0xf8
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     esi, ecx
        push    0xb
        lea     ecx, [esp + 0xc0]
        call    ext_005B5780
        mov     ecx, dword ptr [esi + 0x160]
        mov     eax, dword ptr [ecx]
        mov     edx, dword ptr [eax + 0x128]
        xor     ebx, ebx
        mov     dword ptr [esp + 0x110], ebx
        call    edx
        mov     ecx, dword ptr [esi + 0x160]
        add     eax, 0x8
        mov     dword ptr [esp + 0x14], eax
        mov     eax, dword ptr [ecx]
        mov     edx, dword ptr [eax + 0x120]
        call    edx
        push    0x11
        lea     ecx, [esp + 0x74]
        lea     ebp, [eax + 0x8]
        call    ext_005B5780
        push    0x9349fc
        lea     ecx, [esp + 0x54]
        mov     byte ptr [esp + 0x114], 0x1
        call    dword ptr [mem_00924FE4]
        lea     eax, [esp + 0x50]
        push    eax
        lea     ecx, [esp + 0xc0]
        mov     byte ptr [esp + 0x114], 0x2
        call    ext_005B18E0
        lea     ecx, [esp + 0x50]
        mov     byte ptr [esp + 0x110], 0x1
        call    dword ptr [mem_00924FF4]
        mov     edx, dword ptr [esi + 0x4]
        mov     edx, dword ptr [edx + 0xc]
        lea     eax, [esi + 0xc]
        push    ebx
        lea     ecx, [esi + 0x4]
        push    eax
        mov     dword ptr [esp + 0x24], eax
        mov     eax, dword ptr [mem_00B40640]
        push    eax
        call    edx
        mov     edi, dword ptr [esp + 0x120]
        push    eax
        lea     eax, [esp + 0xc8]
        push    eax
        mov     ecx, edi
        call    ext_00493E40
        push    eax
        mov     ecx, edi
        mov     byte ptr [esp + 0x114], 0x3
        mov     dword ptr [esp + 0x14], ebx
        call    ext_00493E70
        mov     ebx, eax
        mov     dword ptr [esp + 0x6c], ebx
        lea     ecx, [ebp + 0x28]
        push    ecx
        lea     ecx, [esp + 0x74]
        mov     byte ptr [esp + 0x114], 0x4
        call    ext_005B18E0
        mov     eax, dword ptr [esi + 0x160]
        test    eax, eax
        je      short L_0061D5BE
        add     eax, 0xc
        jmp     short L_0061D5C0
    L_0061D5BE:
        xor     eax, eax
    L_0061D5C0:
        mov     ecx, dword ptr [esi + 0x160]
        mov     edx, dword ptr [ecx]
        push    0x0
        push    eax
        mov     eax, dword ptr [edx + 0x12c]
        call    eax
        push    eax
        lea     ecx, [esp + 0x7c]
        push    ecx
        mov     ecx, edi
        call    ext_00493E40
        push    eax
        mov     ecx, edi
        mov     dword ptr [eax + 0x20], ebp
        mov     dword ptr [esp + 0x14], 0x0
        call    ext_00493E70
        mov     ebp, eax
        mov     dword ptr [esp + 0x18], ebp
        mov     ecx, dword ptr [esi + 0x160]
        mov     edx, dword ptr [ecx]
        mov     eax, dword ptr [edx + 0x104]
        push    ebp
        mov     byte ptr [esp + 0x114], 0x5
        call    eax
        test    byte ptr [mem_00B49088], 0x1
        jne     L_0061D6A1
        fldz
        or      dword ptr [mem_00B49088], 0x1
        fst     dword ptr [esp + 0x20]
        lea     ecx, [esp + 0x20]
        fst     dword ptr [esp + 0x24]
        push    ecx
        fst     dword ptr [esp + 0x2c]
        lea     edx, [esp + 0x44]
        fld1
        push    edx
        fstp    dword ptr [esp + 0x34]
        lea     eax, [esp + 0x38]
        push    eax
        lea     ecx, [esp + 0x5c]
        push    ecx
        fst     dword ptr [esp + 0x50]
        mov     ecx, 0xb49048
        fst     dword ptr [esp + 0x54]
        fld     dword ptr [mem_00959050]
        fst     dword ptr [esp + 0x58]
        fstp    dword ptr [esp + 0x44]
        fst     dword ptr [esp + 0x5c]
        fst     dword ptr [esp + 0x40]
        fst     dword ptr [esp + 0x48]
        fst     dword ptr [esp + 0x4c]
        fld     dword ptr [mem_0093247C]
        fstp    dword ptr [esp + 0x60]
        fst     dword ptr [esp + 0x64]
        fst     dword ptr [esp + 0x68]
        fstp    dword ptr [esp + 0x6c]
        call    ext_005AC360
        push    0x91eb70
        call    ext_006A6C87
        add     esp, 0x4
    L_0061D6A1:
        mov     edx, dword ptr [esp + 0x14]
        add     edx, 0x28
        push    edx
        lea     ecx, [esp + 0x74]
        call    ext_005B18E0
        mov     eax, dword ptr [esi + 0x160]
        xor     esi, esi
        cmp     eax, esi
        je      short L_0061D6C3
        add     eax, 0xc
        jmp     short L_0061D6C5
    L_0061D6C3:
        xor     eax, eax
    L_0061D6C5:
        push    esi
        push    eax
        push    0xb49048
        lea     eax, [esp + 0x7c]
        push    eax
        mov     ecx, edi
        call    ext_00493E40
        mov     ecx, dword ptr [esp + 0x14]
        mov     dword ptr [eax + 0x20], ecx
        mov     edx, dword ptr [ebp]
        push    eax
        mov     eax, dword ptr [edx + 0xc]
        mov     ecx, ebp
        mov     dword ptr [esp + 0x14], esi
        call    eax
        mov     edx, dword ptr [ebx]
        mov     eax, dword ptr [edx + 0xc]
        push    ebp
        mov     ecx, ebx
        mov     dword ptr [esp + 0x1c], esi
        call    eax
        mov     ecx, dword ptr [esp + 0x1c]
        push    ebx
        call    ext_00528B90
        lea     ecx, [esp + 0x70]
        mov     byte ptr [esp + 0x110], 0x0
        call    ext_005B1870
        lea     ecx, [esp + 0xbc]
        mov     dword ptr [esp + 0x110], 0xffffffff
        call    ext_005B1870
        mov     ecx, dword ptr [esp + 0x108]
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, ebx
        pop     ebx
        mov     dword ptr fs:[0], ecx
        add     esp, 0x104
        ret     0x4
    }
}
