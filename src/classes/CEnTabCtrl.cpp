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
