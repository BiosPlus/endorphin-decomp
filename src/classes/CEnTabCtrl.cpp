// Decompiled translation unit: src/classes/CEnTabCtrl.cpp

extern "C" void ext_00404680();
extern "C" void ext_006A5EA2();
extern "C" int mem_00AC9CD8;
extern "C" int mem_00925680;
extern "C" void ext_0041604C();
extern "C" void ext_0041603E();
extern "C" void ext_00416095();
extern "C" void ext_00415E30();
extern "C" void ext_00415FDA();
extern "C" void ext_00415D50();
extern "C" void ext_006A6004();
extern "C" void ext_006A6172();
extern "C" void ext_006A61C6();
extern "C" int mem_00925670;
extern "C" int mem_0092C8C4;
extern "C" int mem_0092C8CC;
extern "C" int mem_0092C8C0;

// [0x004160C0] CEnTabCtrl::vfunc_22 (35 bytes)
extern "C" void __fastcall fn_004160C0(void* self) {
    ((void (__fastcall*)(void*))ext_00404680)(self);
    if (mem_00AC9CD8 != 0) {
        ((void (__thiscall*)(void*, int, int, int))ext_006A5EA2)(self, 0, 0x2000, 0);
    }
}

// [0x00416010] CEnTabCtrl::vfunc_85 (46 bytes)
extern "C" __declspec(naked) void __fastcall fn_00416010(void* self) {
    __asm {
        mov eax, dword ptr [mem_00AC9CD8]
        mov edx, eax
        and edx, 0x2
        and eax, 0x1
        cmp dword ptr [esp + 0x4], 0x0
        __asm _emit 0x74 __asm _emit 0x28 // je 0x41604c
        test edx, edx
        __asm _emit 0x74 __asm _emit 0x16 // je 0x41603e
        mov eax, dword ptr [ecx + 0x58]
        cmp eax, -0x1
        __asm _emit 0x75 __asm _emit 0x65 // jne 0x416095
        mov dword ptr [esp + 0x4], 0xf
        jmp dword ptr [mem_00925680]
    }
}

// [0x00415F00] CEnTabCtrl::vfunc_84 (151 bytes)
extern "C" __declspec(naked) void __fastcall fn_00415F00(void* self, int edx_unused, int a1) {
    __asm {
        push ebx
        mov ebx, dword ptr [mem_00AC9CD8]
        push esi
        mov eax, ebx
        mov edx, ebx
        mov esi, ebx
        and eax, 0x2
        and edx, 0x10
        and esi, 0x1
        cmp dword ptr [esp + 0xc], 0x0
        je L_415F77
        test bl, 0x4
        je ext_00415FDA
        test eax, eax
        je L_415F57
        mov ecx, dword ptr [ecx + 0x54]
        cmp ecx, -1
        jne L_415F3D
        push 0xf
        call dword ptr [mem_00925680]
        jmp L_415F3F
L_415F3D:
        mov eax, ecx
L_415F3F:
        fld dword ptr [mem_0092C8C0]
        push ecx
        fstp dword ptr [esp]
        push eax
        call ext_00415E30
        add esp, 0x8
        pop esi
        pop ebx
        ret 0x4
L_415F57:
        fld dword ptr [mem_0092C8C0]
        push ecx
        fstp dword ptr [esp]
        push 0xf
        call dword ptr [mem_00925680]
        push eax
        call ext_00415E30
        add esp, 0x8
        pop esi
        pop ebx
        ret 0x4
L_415F77:
        test edx, edx
        __asm _emit 0x75 __asm _emit 0x1c // jne 0x415f97
        test esi, esi
        __asm _emit 0x74 __asm _emit 0x18 // je 0x415f97
        mov ecx, dword ptr [ecx + 0x54]
        cmp ecx, -1
        __asm _emit 0x75 __asm _emit 0x2c // jne 0x415fb3
        pop esi
        pop ebx
        mov dword ptr [esp + 0x4], 0xf
        jmp dword ptr [mem_00925680]
    }
}

// [0x00416680] CEnTabCtrl::vfunc_82 (126 bytes)
extern "C" __declspec(naked) void __fastcall fn_00416680(void* self, int edx_unused, void* src) {
    __asm {
        sub esp, 0x10
        push esi
        push edi
        mov edi, dword ptr [esp + 0x1c]
        lea eax, [edi + 0x1c]
        mov esi, ecx
        push eax
        lea ecx, [esp + 0xc]
        push ecx
        call dword ptr [mem_00925670]
        mov edx, dword ptr [edi + 0x18]
        push edx
        call ext_006A6004
        mov edi, eax
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x150]
        push 0x0
        mov ecx, esi
        call edx
        mov esi, eax
        push esi
        lea eax, [esp + 0xc]
        push eax
        mov ecx, edi
        call ext_006A6172
        fld dword ptr [mem_0092C8C4]
        push ecx
        fstp dword ptr [esp]
        push esi
        call ext_00415D50
        fld dword ptr [mem_0092C8CC]
        add esp, 0x8
        push eax
        push ecx
        fstp dword ptr [esp]
        push esi
        call ext_00415E30
        add esp, 0x8
        push eax
        lea ecx, [esp + 0x10]
        push ecx
        mov ecx, edi
        call ext_006A61C6
        pop edi
        pop esi
        add esp, 0x10
        ret 0x4
    }
}

// [0x00416520] CEnTabCtrl::vfunc_83 (340 bytes)
extern "C" void ext_00415D50();
extern "C" void ext_00415E30();
extern "C" void ext_006A6004();
extern "C" void ext_006A6172();
extern "C" int mem_00925694;
extern "C" int mem_00AC9CD8;
extern "C" int mem_00925670;
extern "C" int mem_0092C8CC;
extern "C" int mem_0092C8C4;
extern "C" __declspec(naked) void __fastcall fn_00416520(void* self, int edx_unused, void* a1) {
    __asm {
        sub esp, 0x20
        push ebx
        push ebp
        push esi
        push edi
        push 0
        push 0
        mov esi, ecx
        mov eax, [esi+0x20]
        push 0x130b
        push eax
        call dword ptr [mem_00925694]
        mov ebx, [esp+0x34]
        mov ebp, [mem_00AC9CD8]
        xor ecx, ecx
        cmp [ebx+8], eax
        lea edx, [ebx+0x1c]
        sete cl
        push edx
        lea eax, [esp+0x14]
        push eax
        and ebp, 0x10
        mov edi, ecx
        call dword ptr [mem_00925670]
        mov ecx, [ebx+0x18]
        push ecx
        call ext_006A6004
        mov edx, [esi]
        mov ebx, eax
        mov eax, [edx+0x150]
        push edi
        mov ecx, esi
        call eax
        fld dword ptr [mem_0092C8CC]
        push ecx
        mov esi, eax
        fstp dword ptr [esp]
        push esi
        call ext_00415E30
        fld dword ptr [mem_0092C8C4]
        add esp, 4
        fstp dword ptr [esp]
        push esi
        mov [esp+0x3c], eax
        call ext_00415D50
        mov ecx, [esp+0x24]
        mov esi, eax
        mov eax, [esp+0x18]
        sub eax, 2
        add esp, 8
        mov edx, edi
        neg edx
        sbb edx, edx
        and edx, -3
        add edx, 2
        add ecx, edx
        test edi, edi
        mov [esp+0x10], eax
        mov [esp+0x1c], ecx
        jne L1
        test ebp, ebp
        jne L1
        lea edx, [eax-1]
        mov [esp+0x20], edx
        mov edx, [esp+0x14]
        mov [esp+0x24], edx
        mov [esp+0x28], eax
        mov [esp+0x2c], ecx
        push esi
        jmp L2
    L1:
        mov edi, [esp+0x34]
        mov edx, [esp+0x14]
        mov [esp+0x20], eax
        add eax, 1
        mov [esp+0x28], eax
        push edi
        lea eax, [esp+0x24]
        mov [esp+0x30], ecx
        push eax
        mov ecx, ebx
        mov [esp+0x2c], edx
        call ext_006A6172
        mov eax, [esp+0x14]
        mov ecx, [esp+0x10]
        mov edx, [esp+0x18]
        mov [esp+0x24], eax
        add eax, 1
        mov [esp+0x20], ecx
        mov [esp+0x28], edx
        mov [esp+0x2c], eax
        push edi
    L2:
        lea eax, [esp+0x24]
        push eax
        mov ecx, ebx
        call ext_006A6172
        mov eax, [esp+0x18]
        mov edx, [esp+0x14]
        lea ecx, [eax-1]
        mov [esp+0x20], ecx
        push esi
        lea ecx, [esp+0x24]
        mov [esp+0x2c], eax
        mov eax, [esp+0x20]
        push ecx
        mov ecx, ebx
        mov [esp+0x2c], edx
        mov [esp+0x34], eax
        call ext_006A6172
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x20
        ret 4
    }
}

// [0x004161B0] CEnTabCtrl::vfunc_81 (876 bytes)
extern "C" void ext_00415D50();
extern "C" void ext_004160F0();
extern "C" void ext_006A6004();
extern "C" void ext_006A6010();
extern "C" void ext_006A6172();
extern "C" int mem_00925694;
extern "C" int mem_00AC9CD8;
extern "C" int mem_00925670;
extern "C" int mem_009240FC;
extern "C" int mem_00925680;
extern "C" int mem_0092C8C8;
extern "C" int mem_009242FC;
extern "C" int mem_00924558;
extern "C" int mem_00924554;
extern "C" int mem_00924060;
extern "C" int mem_0092431C;
extern "C" int mem_00924300;
extern "C" int mem_009242F4;

extern "C" __declspec(naked) void __fastcall fn_004161B0(void* self) {
    __asm {
        push    -0x1
        push    0x875c3c
        mov     eax, dword ptr fs:[0x0]
        push    eax
        mov     dword ptr fs:[0x0], esp
        sub     esp, 0x7c
        push    ebx
        mov     ebx, dword ptr [esp + 0x90]
        mov     eax, dword ptr [ebx + 0x18]
        push    ebp
        push    esi
        push    edi
        mov     ebp, ecx
        push    eax
        mov     dword ptr [esp + 0x48], ebp
        call    ext_006A6004
        test    ebp, ebp
        mov     esi, eax
        mov     dword ptr [esp + 0x14], esi
        jne     L_4161f0
        xor     eax, eax
        jmp     L_4161f3
    L_4161f0:
        mov     eax, dword ptr [ebp + 0x20]
    L_4161f3:
        mov     edi, dword ptr [mem_00925694]
        push    0x0
        push    0x0
        push    0x1302
        push    eax
        call    edi
        mov     ecx, dword ptr [ebp + 0x20]
        push    0x0
        push    0x0
        push    0x130b
        push    ecx
        mov     dword ptr [esp + 0x58], eax
        call    edi
        xor     edx, edx
        cmp     dword ptr [ebx + 0x8], eax
        mov     eax, dword ptr [mem_00AC9CD8]
        sete    dl
        and     eax, 0x2
        mov     dword ptr [esp + 0x20], eax
        add     ebx, 0x1c
        push    ebx
        lea     eax, [esp + 0x54]
        push    eax
        mov     edi, edx
        mov     dword ptr [esp + 0x2c], edi
        call    dword ptr [mem_00925670]
        test    edi, edi
        je      L_41624c
        sub     dword ptr [esp + 0x5c], 0x1
        jmp     L_416251
    L_41624c:
        add     dword ptr [esp + 0x5c], 0x2
    L_416251:
        mov     edx, dword ptr [ebp]
        mov     eax, dword ptr [edx + 0x150]
        sub     dword ptr [esp + 0x50], 0x2
        push    edi
        mov     ecx, ebp
        call    eax
        test    byte ptr [mem_00AC9CD8], 0x8
        mov     ebx, eax
        je      L_41645a
        mov     ecx, dword ptr [esi + 0x8]
        push    0xc
        push    ecx
        call    dword ptr [mem_009240FC]
        cmp     eax, 0x10
        jl      L_41645a
        test    edi, edi
        je      L_416296
        push    0xf
        call    dword ptr [mem_00925680]
        jmp     L_4162c0
    L_416296:
        cmp     dword ptr [esp + 0x20], 0x0
        je      L_4162a5
        mov     eax, dword ptr [ebp + 0x54]
        cmp     eax, -0x1
        jne     L_4162ad
    L_4162a5:
        push    0xf
        call    dword ptr [mem_00925680]
    L_4162ad:
        fld     dword ptr [mem_0092C8C8]
        push    ecx
        fstp    dword ptr [esp]
        push    eax
        call    ext_00415D50
        add     esp, 0x8
    L_4162c0:
        movzx   edx, bl
        movzx   ecx, al
        sub     ecx, edx
        mov     dword ptr [esp + 0x2c], edx
        movzx   esi, bh
        movzx   edx, ah
        sub     edx, esi
        shr     ebx, 0x10
        shr     eax, 0x10
        movzx   edi, bl
        mov     dword ptr [esp + 0x28], edx
        mov     dword ptr [esp + 0x30], esi
        mov     esi, dword ptr [esp + 0x5c]
        sub     esi, dword ptr [esp + 0x54]
        movzx   edx, al
        sub     edx, edi
        mov     dword ptr [esp + 0x34], edi
        xor     edi, edi
        test    esi, esi
        jle     L_4163be
        add     edx, edx
        mov     dword ptr [esp + 0x40], edx
        mov     edx, dword ptr [esp + 0x28]
        xor     ebp, ebp
        xor     ebx, ebx
        xor     eax, eax
        add     edx, edx
        add     ecx, ecx
        mov     dword ptr [esp + 0x20], ebp
        mov     dword ptr [esp + 0x1c], ebx
        mov     dword ptr [esp + 0x18], eax
        mov     dword ptr [esp + 0x3c], edx
        mov     dword ptr [esp + 0x38], ecx
    L_416328:
        cdq
        idiv    esi
        mov     ecx, eax
        mov     eax, ebx
        cdq
        idiv    esi
        add     ecx, dword ptr [esp + 0x2c]
        mov     ebx, eax
        mov     eax, ebp
        cdq
        idiv    esi
        mov     edx, dword ptr [esp + 0x54]
        add     ebx, dword ptr [esp + 0x30]
        add     edx, edi
        lea     ebp, [edx + 0x2]
        mov     dword ptr [esp + 0x64], edx
        mov     edx, dword ptr [esp + 0x58]
        mov     dword ptr [esp + 0x68], edx
        mov     dword ptr [esp + 0x28], ebp
        mov     edx, dword ptr [esp + 0x28]
        mov     ebp, dword ptr [esp + 0x50]
        mov     dword ptr [esp + 0x6c], edx
        xor     edx, edx
        mov     dword ptr [esp + 0x60], ebp
        add     eax, dword ptr [esp + 0x34]
        mov     dh, al
        movzx   eax, cl
        lea     ecx, [esp + 0x60]
        mov     dl, bl
        shl     edx, 0x8
        or      edx, eax
        push    edx
        push    ecx
        mov     ecx, dword ptr [esp + 0x1c]
        call    ext_006A6172
        mov     eax, dword ptr [esp + 0x18]
        mov     ebx, dword ptr [esp + 0x1c]
        mov     ebp, dword ptr [esp + 0x20]
        add     eax, dword ptr [esp + 0x38]
        add     ebx, dword ptr [esp + 0x3c]
        add     ebp, dword ptr [esp + 0x40]
        add     edi, 0x2
        cmp     edi, esi
        mov     dword ptr [esp + 0x18], eax
        mov     dword ptr [esp + 0x1c], ebx
        mov     dword ptr [esp + 0x20], ebp
        jl      L_416328
        mov     ebp, dword ptr [esp + 0x44]
    L_4163be:
        mov     esi, dword ptr [esp + 0x14]
        mov     edi, dword ptr [esp + 0x24]
    L_4163c6:
        mov     ecx, dword ptr [esp + 0x54]
        xor     eax, eax
        mov     ebx, 0x3
        add     dword ptr [esp + 0x50], ebx
        test    edi, edi
        setne   al
        push    0x1
        lea     edx, [ecx + eax + 0x3]
        mov     ecx, esi
        mov     dword ptr [esp + 0x58], edx
        call    ext_006A6010
        lea     ecx, [esp + 0x10]
        call    dword ptr [mem_009242FC]
        push    0x64
        lea     ecx, [esp + 0x14]
        mov     dword ptr [esp + 0x98], 0x0
        mov     dword ptr [esp + 0x74], ebx
        call    dword ptr [mem_00924558]
        mov     ecx, dword ptr [esp + 0x9c]
        mov     edx, dword ptr [ecx + 0x8]
        mov     dword ptr [esp + 0x7c], eax
        lea     eax, [esp + 0x70]
        push    eax
        mov     eax, dword ptr [ebp + 0x20]
        push    edx
        push    0x1305
        push    eax
        mov     dword ptr [esp + 0x90], 0x63
        call    dword ptr [mem_00925694]
        push    -0x1
        lea     ecx, [esp + 0x14]
        call    dword ptr [mem_00924554]
        mov     eax, dword ptr [esp + 0x48]
        test    eax, eax
        je      L_416490
        test    esi, esi
        jne     L_41646c
        xor     ecx, ecx
        jmp     L_41646f
    L_41645a:
        push    ebx
        lea     edx, [esp + 0x54]
        push    edx
        mov     ecx, esi
        call    ext_006A6172
        jmp     L_4163c6
    L_41646c:
        mov     ecx, dword ptr [esi + 0x4]
    L_41646f:
        mov     edx, dword ptr [esp + 0x54]
        push    0x1
        push    edx
        mov     edx, dword ptr [esp + 0x58]
        push    edx
        push    ecx
        mov     ecx, dword ptr [esp + 0x94]
        push    ecx
        push    eax
        call    dword ptr [mem_00924060]
        add     dword ptr [esp + 0x50], 0x13
    L_416490:
        mov     eax, dword ptr [esp + 0x58]
        sub     eax, ebx
        mov     dword ptr [esp + 0x58], eax
        sub     eax, dword ptr [esp + 0x50]
        lea     edx, [esp + 0x10]
        push    eax
        push    esi
        push    edx
        lea     eax, [esp + 0x54]
        push    eax
        call    ext_004160F0
        mov     edx, dword ptr [ebp]
        mov     ebx, dword ptr [esi]
        mov     eax, dword ptr [edx + 0x154]
        add     esp, 0x10
        push    edi
        mov     ecx, ebp
        add     ebx, 0x38
        call    eax
        mov     edx, dword ptr [ebx]
        push    eax
        mov     ecx, esi
        call    edx
        mov     edi, dword ptr [esi]
        push    0x801
        lea     eax, [esp + 0x54]
        push    eax
        lea     ecx, [esp + 0x18]
        add     edi, 0x70
        call    dword ptr [mem_0092431C]
        push    eax
        lea     ecx, [esp + 0x1c]
        call    dword ptr [mem_00924300]
        mov     edx, dword ptr [edi]
        push    eax
        mov     ecx, esi
        call    edx
        lea     ecx, [esp + 0x10]
        call    dword ptr [mem_009242F4]
        mov     ecx, dword ptr [esp + 0x8c]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        mov     dword ptr fs:[0x0], ecx
        add     esp, 0x88
        ret     0x4
    }
}
