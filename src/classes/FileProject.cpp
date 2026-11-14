// Decompiled translation unit: src/classes/FileProject.cpp

// [0x00666880] FileProject::vfunc_10 (41 bytes)
extern "C" void ext_00663690();
extern "C" void ext_0067CFF0();

extern "C" __declspec(naked) void __fastcall fn_00666880(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        mov esi, ecx
        push 0x0
        lea eax, [esi + 0x48]
        push eax
        push edi
        call ext_00663690
        mov ecx, dword ptr [esp + 0x1c]
        add esp, 0xc
        push ecx
        push edi
        mov ecx, esi
        call ext_0067CFF0
        pop edi
        pop esi
        ret 0x8
    }
}

// [0x00666DE0] FileProject::vfunc_2 (480 bytes)
extern "C" void ext_00404F00();
extern "C" void ext_0053F5F0();
extern "C" void ext_0063EFE0();
extern "C" void ext_0063F530();
extern "C" void ext_0065C770();
extern "C" void ext_006A6DD2();
extern "C" void ext_00870E10();
extern "C" void ext_00870E30();
extern "C" void ext_008726F0();
extern "C" int mem_00A9F8E8;
extern "C" int mem_009849A0;
extern "C" int mem_00924FF0;
extern "C" int mem_00924FE4;

extern "C" __declspec(naked) bool __fastcall fn_00666DE0(void* self, int edx_unused, const char* a1, int a2, int a3) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -0x1
        push 0x8b2fad
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x94
        push ebx
        push esi
        mov esi, dword ptr [esp + 0xb4]
        test esi, esi
        push edi
        mov edi, dword ptr [esp + 0xb0]
        mov ebx, ecx
        jne L_666e24
        mov eax, edi
        lea edx, [eax + 0x1]
    L_666e17:
        mov cl, byte ptr [eax]
        add eax, 0x1
        test cl, cl
        jne L_666e17
        sub eax, edx
        mov esi, eax
    L_666e24:
        lea ecx, [esp + 0x14]
        call ext_00870E10
        push esi
        push edi
        lea ecx, [esp + 0x1c]
        mov dword ptr [esp + 0xb0], 0x0
        call ext_008726F0
        mov ecx, dword ptr [ebx + 0x84]
        mov esi, eax
        cmp esi, ecx
        je L_666e5b
        test ecx, ecx
        je L_666e5b
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 0x1
        call edx
    L_666e5b:
        mov eax, esi
        mov dword ptr [ebx + 0x84], esi
        mov esi, dword ptr [eax + 0x78]
        test esi, esi
        jne L_666e6f
        mov esi, 0xb53b30
    L_666e6f:
        mov eax, dword ptr [mem_00A9F8E8]
        push eax
        mov ecx, esi
        call ext_0063EFE0
        cmp eax, 0xb53a34
        je L_666f21
        cmp eax, 0xb53b30
        je L_666f21
        cmp eax, 0xb53ab0
        je L_666f21
        cmp eax, 0xb53a70
        je L_666f21
        cmp eax, 0xb53af0
        je L_666f21
        lea ecx, [esp + 0x10]
        push ecx
        lea edx, [esp + 0x10]
        push edx
        mov dword ptr [esp + 0x18], eax
        call ext_0053F5F0
        mov eax, dword ptr [esp + 0x14]
        add esp, 0x8
        cmp eax, dword ptr [mem_009849A0]
        jbe L_666f21
        push eax
        lea eax, [esp + 0x88]
        push eax
        call ext_00404F00
        add esp, 0x8
        mov ecx, eax
        mov byte ptr [esp + 0xa8], 0x1
        call dword ptr [mem_00924FF0]
        push eax
        lea ecx, [esp + 0x38]
        call dword ptr [mem_00924FE4]
        lea ecx, [esp + 0x34]
        push ecx
        push 0xa
        push esi
        lea ecx, [esp + 0x5c]
        mov byte ptr [esp + 0xb4], 0x2
        call ext_0065C770
        push 0xa14d3c
        lea edx, [esp + 0x54]
        push edx
        call ext_006A6DD2
    L_666f21:
        mov eax, dword ptr [esp + 0xb4]
        test eax, eax
        je L_666f86
        push 0x1
        push 0x0
        push eax
        mov ecx, esi
        call ext_0063F530
        cmp eax, 0xb53a34
        je L_666f5b
        cmp eax, 0xb53b30
        je L_666f5b
        cmp eax, 0xb53ab0
        je L_666f5b
        cmp eax, 0xb53a70
        je L_666f5b
        cmp eax, 0xb53af0
        jne L_666f60
    L_666f5b:
        mov eax, 0xb53b30
    L_666f60:
        cmp eax, 0xb53a34
        je L_666f90
        cmp eax, 0xb53b30
        je L_666f90
        cmp eax, 0xb53ab0
        je L_666f90
        cmp eax, 0xb53a70
        je L_666f90
        cmp eax, 0xb53af0
        je L_666f90
        push eax
        jmp L_666f87
    L_666f86:
        push esi
    L_666f87:
        mov edx, dword ptr [ebx]
        mov eax, dword ptr [edx + 0x4]
        mov ecx, ebx
        call eax
    L_666f90:
        lea ecx, [esp + 0x14]
        mov dword ptr [esp + 0xa8], -0x1
        call ext_00870E30
        mov ecx, dword ptr [esp + 0xa0]
        pop edi
        pop esi
        mov al, 0x1
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0xa0
        ret 0xc
    }
}

// [0x00666FC0] FileProject::vfunc_4 (107 bytes)
extern "C" void ext_00665670();
extern "C" void ext_00666A60();
extern "C" int mem_00924FDC;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00666FC0(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push -0x1
        push 0x8b56f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x1c
        mov ecx, dword ptr [ecx + 0x84]
        push esi
        lea eax, [esp + 0x4]
        push eax
        call ext_00666A60
        mov esi, dword ptr [esp + 0x30]
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0x2c], 0x0
        call dword ptr [mem_00924FDC]
        lea ecx, [esp + 0x4]
        mov dword ptr [esp + 0x28], 0xffffffff
        call dword ptr [mem_00924FF4]
        push esi
        call ext_00665670
        mov ecx, dword ptr [esp + 0x24]
        add esp, 0x4
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x28
        ret 0x8
    }
}

// [0x00669CD0] FileProject::vfunc_1 (368 bytes)
extern "C" void ext_004275E0();
extern "C" void ext_00427A60();
extern "C" void ext_00668C90();
extern "C" void ext_006695C0();
extern "C" int mem_00A9F5BC;
extern "C" int mem_00A9F050;
extern "C" int mem_00925134;
extern "C" int mem_00A9F1D4;
extern "C" int mem_00924FC0;
extern "C" int mem_00A9EFB4;
extern "C" int mem_00A9EEB8;

extern "C" __declspec(naked) void __fastcall fn_00669CD0(void* self, int edx_unused, void* a1) {
    __asm {
        sub esp, 0x18
        push ebx
        push ebp
        push esi
        push edi
        mov ebp, ecx
        call ext_00668C90
        mov eax, dword ptr [mem_00A9F5BC]
        mov esi, dword ptr [esp + 0x2c]
        push eax
        mov ecx, esi
        call ext_0063EFE0
        push eax
        lea ecx, [ebp + 0x64]
        push ecx
        call ext_004275E0
        mov edx, dword ptr [mem_00A9F050]
        add esp, 0x8
        push 0x1
        push 0x0
        push edx
        mov ecx, esi
        call ext_0063F530
        cmp eax, 0xb53a34
        je loc_669D31
        cmp eax, 0xb53b30
        je loc_669D31
        cmp eax, 0xb53ab0
        je loc_669D31
        cmp eax, 0xb53a70
        je loc_669D31
        cmp eax, 0xb53af0
        jne loc_669D36
    loc_669D31:
        mov eax, 0xb53b30
    loc_669D36:
        push eax
        push 0x3
        mov ecx, ebp
        call ext_006695C0
        mov edi, dword ptr [esi + 0x28]
        add esi, 0x24
        cmp edi, dword ptr [esi + 0x8]
        jbe loc_669D51
        call dword ptr [mem_00925134]
    loc_669D51:
        lea ecx, [esp + 0x10]
        mov dword ptr [esp + 0x10], esi
        mov dword ptr [esp + 0x14], esi
        mov dword ptr [esp + 0x18], edi
        call ext_00427A60
        mov edi, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], edi
        jbe loc_669D74
        call dword ptr [mem_00925134]
    loc_669D74:
        mov dword ptr [esp + 0x1c], esi
        mov dword ptr [esp + 0x20], esi
        mov dword ptr [esp + 0x24], edi
        lea ecx, [esp + 0x1c]
    loc_669D84:
        call ext_00427A60
        mov esi, dword ptr [esp + 0x14]
        test esi, esi
        je loc_669D97
        cmp esi, dword ptr [esp + 0x20]
        je loc_669D9D
    loc_669D97:
        call dword ptr [mem_00925134]
    loc_669D9D:
        mov ebx, dword ptr [esp + 0x18]
        cmp ebx, dword ptr [esp + 0x24]
        jae loc_669E36
        test esi, esi
        jne loc_669DB5
        call dword ptr [mem_00925134]
    loc_669DB5:
        cmp ebx, dword ptr [esi + 0x8]
        jb loc_669DC0
        call dword ptr [mem_00925134]
    loc_669DC0:
        mov esi, dword ptr [ebx]
        mov eax, dword ptr [mem_00A9F1D4]
        push eax
        lea edi, [esi + 0x4]
        push edi
        call dword ptr [mem_00924FC0]
        add esp, 0x8
        test al, al
        je loc_669DDE
        push esi
        push 0x0
        jmp loc_669E10
    loc_669DDE:
        mov ecx, dword ptr [mem_00A9EFB4]
        push ecx
        push edi
        call dword ptr [mem_00924FC0]
        add esp, 0x8
        test al, al
        je loc_669DF8
        push esi
        push 0x1
        jmp loc_669E10
    loc_669DF8:
        mov edx, dword ptr [mem_00A9EEB8]
        push edx
        push edi
        call dword ptr [mem_00924FC0]
        add esp, 0x8
        test al, al
        je loc_669E17
        push esi
        push 0x2
    loc_669E10:
        mov ecx, ebp
        call ext_006695C0
    loc_669E17:
        mov eax, dword ptr [esp + 0x14]
        cmp ebx, dword ptr [eax + 0x8]
        jb loc_669E26
        call dword ptr [mem_00925134]
    loc_669E26:
        add ebx, 0x4
        mov dword ptr [esp + 0x18], ebx
        lea ecx, [esp + 0x10]
        jmp loc_669D84
    loc_669E36:
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x18
        ret 0x4
    }
}
