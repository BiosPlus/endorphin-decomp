// Decompiled translation unit: src/classes/BottomPanel.cpp

extern "C" void ext_006A5FE6();
extern "C" void ext_006A5FE0();
extern "C" void ext_006A5FDA();
extern "C" void ext_00465B40();
extern "C" void ext_00465B30();
extern "C" void ext_00468660();
extern "C" void ext_006A5F50();
extern "C" int mem_009242FC;
extern "C" int mem_00924410;
extern "C" int mem_00924300;
extern "C" int mem_0092568C;
extern "C" int mem_009242F4;

// [0x00407750] BottomPanel::vfunc_81 (131 bytes)
extern "C" __declspec(naked) void __fastcall fn_00407750(void* self) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 8]
        push esi
        push edi
        mov edi, dword ptr [esp + 0x14]
        push edi
        push ebx
        mov esi, ecx
        call ext_006A5FE6
        push edi
        push ebx
        mov ecx, esi
        call ext_006A5FE0
        call ext_00465B40
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 0x12c]
        call eax
        movzx ecx, al
        push ecx
        lea ecx, [esi + 0x198]
        call ext_006A5FDA
        call ext_00465B40
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 0x12c]
        call eax
        movzx ecx, al
        push ecx
        lea ecx, [esi + 0x1ec]
        call ext_006A5FDA
        call ext_00465B40
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 0x12c]
        call eax
        movzx ecx, al
        push ecx
        lea ecx, [esi + 0x240]
        call ext_006A5FDA
        pop edi
        pop esi
        pop ebx
        ret 8
    }
}

extern "C" void ext_006A5E00();
extern "C" void ext_006A600A();
extern "C" int mem_00925694;
extern "C" int mem_00925654;
extern "C" int mem_00925650;

// [0x00407990] BottomPanel::vfunc_66 (143 bytes)
extern "C" __declspec(naked) void __fastcall fn_00407990(void* self, int edx_unused, int a1) {
    __asm {
        push ebx
        mov ebx, dword ptr [mem_00925694]
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x10]
        push edi
        push esi
        push 0
        mov edi, ecx
        mov eax, dword ptr [edi + 0xd8]
        push 0x407
        push eax
        call ebx
        mov ecx, dword ptr [edi + 0x148]
        push esi
        push 0
        push 0x407
        push ecx
        call ebx
        cmp dword ptr [esi + 4], 0x102
        jne short L_else
        call dword ptr [mem_00925654]
        push eax
        call ext_006A5E00
        mov ebp, eax
        test ebp, ebp
        je short L_else
        mov edx, dword ptr [ebp + 0x20]
        push edx
        call dword ptr [mem_00925650]
        push eax
        call ext_006A5E00
        cmp eax, edi
        jne short L_else
        mov eax, dword ptr [esi + 0xc]
        mov ecx, dword ptr [esi + 8]
        mov edx, dword ptr [ebp + 0x20]
        push eax
        push ecx
        push 0x102
        push edx
        call ebx
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        ret 4
L_else:
        push esi
        mov ecx, edi
        call ext_006A600A
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
    }
}

// [0x00407890] BottomPanel::vfunc_63 (247 bytes)
extern "C" void ext_006A5F44();

extern "C" void __fastcall fn_00407890(void* self, int edx_unused, int a1) {
    typedef void (__stdcall *DdxFn)(int, int, void*);
    char* p = (char*)self;
    DdxFn ddx = (DdxFn)ext_006A5F44;
    ddx(a1, 0x417, p + 0x198);
    ddx(a1, 0x443, (void*)*(int*)(p + 0x2e8));
    ddx(a1, 0x419, p + 0x294);
    ddx(a1, 0x444, (void*)*(int*)(p + 0x2f4));
    ddx(a1, 0x41c, p + 0x1ec);
    ddx(a1, 0x441, (void*)*(int*)(p + 0x2ec));
    ddx(a1, 0x41d, p + 0x240);
    ddx(a1, 0x442, (void*)*(int*)(p + 0x2f0));
    ddx(a1, 0x49d, p + 0x2f8);
    ddx(a1, 0x4a3, p + 0x34c);
    ddx(a1, 0x4a8, p + 0x3a0);
    ddx(a1, 0x4a5, p + 0x3f4);
    ddx(a1, 0x4a4, p + 0x448);
}

// [0x00407A20] BottomPanel::vfunc_0_off_A8 (392 bytes)
extern "C" __declspec(naked) void __fastcall fn_00407A20(void* self) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x877289
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 8
        push esi
        mov esi, ecx
        cmp byte ptr [esi + 0xc], 0
        je skip_body
        push ebp
        push edi
        mov byte ptr [esi + 0xc], 0
        call ext_00465B30
        mov ecx, eax
        call ext_00468660
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 0x9c]
        call eax
        lea ecx, [esp + 0xc]
        mov edi, eax
        call dword ptr [mem_009242FC]
        push edi
        mov edi, dword ptr [mem_00924410]
        lea ecx, [esp + 0x10]
        push 0x929f48
        push ecx
        mov dword ptr [esp + 0x28], 0
        call edi
        add esp, 0xc
        lea ecx, [esp + 0xc]
        call dword ptr [mem_00924300]
        push eax
        lea ecx, [esi + 0xf0]
        call ext_006A5F50
        mov edx, dword ptr [esi + 0x110]
        mov ebp, dword ptr [mem_0092568C]
        push edx
        call ebp
        mov dword ptr [esp + 0x10], 0
        call ext_00465B40
        mov edx, dword ptr [eax]
        mov edx, dword ptr [edx + 0x6c]
        lea ecx, [esp + 0x10]
        push ecx
        mov ecx, eax
        call edx
        mov eax, dword ptr [esp + 0x10]
        push eax
        lea ecx, [esp + 0x10]
        push 0x929f48
        push ecx
        call edi
        add esp, 0xc
        lea ecx, [esp + 0xc]
        call dword ptr [mem_00924300]
        push eax
        lea ecx, [esi + 0x144]
        call ext_006A5F50
        mov edx, dword ptr [esi + 0x164]
        push edx
        call ebp
        call ext_00465B40
        mov edx, dword ptr [eax]
        mov edx, dword ptr [edx + 0x74]
        lea ecx, [esp + 0x10]
        push ecx
        mov ecx, eax
        call edx
        mov eax, dword ptr [esp + 0x10]
        push eax
        lea ecx, [esp + 0x10]
        push 0x929f48
        push ecx
        call edi
        add esp, 0xc
        lea ecx, [esp + 0xc]
        call dword ptr [mem_00924300]
        push eax
        lea ecx, [esi + 0x198]
        call ext_006A5F50
        mov edx, dword ptr [esi + 0x1b8]
        push edx
        call ebp
        call ext_00465B30
        mov eax, dword ptr [eax + 0x14]
        fld dword ptr [eax + 0x28c]
        fld1
        fdivrp st(1), st
        sub esp, 8
        fstp qword ptr [esp]
        lea ecx, [esp + 0x14]
        push 0x92a268
        push ecx
        call edi
        add esp, 0x10
        lea ecx, [esp + 0xc]
        call dword ptr [mem_00924300]
        push eax
        lea ecx, [esi + 0x1ec]
        call ext_006A5F50
        mov edx, dword ptr [esi + 0x20c]
        push edx
        call ebp
        lea ecx, [esp + 0xc]
        call dword ptr [mem_009242F4]
        pop edi
        pop ebp
skip_body:
        mov ecx, dword ptr [esp + 0xc]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x14
        ret
    }
}

// [0x004082E0] BottomPanel::vfunc_0_off_B0 (397 bytes)
extern "C" void ext_006A6E98();
extern "C" void ext_006A6E92();
extern "C" void ext_006A6DE0();
extern "C" void ext_006A6004();
extern "C" void ext_006A5E54();
extern "C" void ext_006A5E4E();
extern "C" void ext_006A5F50();
extern "C" int mem_009242FC;
extern "C" int mem_00924410;
extern "C" int mem_00925658;
extern "C" int mem_0092431C;
extern "C" int mem_00924300;
extern "C" int mem_00924080;
extern "C" int mem_00925690;
extern "C" int mem_00925134;
extern "C" int mem_009242F4;

extern "C" __declspec(naked) void __fastcall fn_004082E0(void* self, int edx_unused, int a1) {
    __asm {
        push -1
        push 0x873af9
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x1c
        push ebx
        push esi
        mov esi, ecx
        lea ecx, [esp + 0x8]
        call dword ptr [mem_009242FC]
        mov eax, dword ptr [esp + 0x34]
        push eax
        lea ecx, [esp + 0xc]
        push 0x92a288
        push ecx
        mov dword ptr [esp + 0x38], 0
        call dword ptr [mem_00924410]
        fild dword ptr [esp + 0x40]
        add esp, 0xc
        call ext_006A6E98
        fstp dword ptr [esp + 0x34]
        fld dword ptr [esp + 0x34]
        sub esp, 0x8
        fstp qword ptr [esp]
        call ext_006A6E92
        fstp dword ptr [esp + 0x3c]
        add esp, 0x8
        fld dword ptr [esp + 0x34]
        call ext_006A6DE0
        mov ebx, eax
        cmp ebx, dword ptr [esi + 0x3ec]
        je L_843A
        mov edx, dword ptr [esi + 0x268]
        push ebp
        push edi
        push edx
        call dword ptr [mem_00925658]
        push eax
        call ext_006A6004
        mov edi, eax
        lea eax, [esp + 0x14]
        push eax
        lea ecx, [esp + 0x14]
        mov dword ptr [esi + 0x3ec], ebx
        call dword ptr [mem_0092431C]
        push eax
        lea ecx, [esp + 0x18]
        call dword ptr [mem_00924300]
        mov ecx, dword ptr [edi + 0x8]
        push eax
        push ecx
        call dword ptr [mem_00924080]
        mov eax, dword ptr [esi + 0x268]
        lea edx, [esp + 0x1c]
        push edx
        push eax
        call dword ptr [mem_00925690]
        lea ecx, [esp + 0x1c]
        push ecx
        lea ecx, [esi - 0xb0]
        call ext_006A5E54
        mov eax, dword ptr [esp + 0x20]
        mov edx, dword ptr [esp + 0x28]
        mov ebp, dword ptr [esp + 0x14]
        push 0
        sub edx, eax
        push edx
        push ebp
        push eax
        mov eax, dword ptr [esp + 0x2c]
        push eax
        push 0
        lea ecx, [esi + 0x248]
        call ext_006A5E4E
        mov ebx, dword ptr [esi + 0x3f8]
        cmp dword ptr [esi + 0x3f4], ebx
        lea edi, [esi + 0x3f0]
        jbe L_8403
        call dword ptr [mem_00925134]
L_8403:
        lea eax, [ebx - 0x4]
        cmp eax, dword ptr [edi + 0x8]
        mov dword ptr [esp + 0x14], edi
        mov dword ptr [esp + 0x18], ebx
        ja L_8418
        cmp eax, dword ptr [edi + 0x4]
        jae L_841E
L_8418:
        call dword ptr [mem_00925134]
L_841E:
        mov ecx, dword ptr [esp + 0x14]
        lea edi, [ebx - 0x4]
        cmp edi, dword ptr [ecx + 0x8]
        jb L_8430
        call dword ptr [mem_00925134]
L_8430:
        mov edx, dword ptr [esp + 0x1c]
        add ebp, edx
        mov dword ptr [edi], ebp
        pop edi
        pop ebp
L_843A:
        lea ecx, [esp + 0x8]
        call dword ptr [mem_00924300]
        push eax
        lea ecx, [esi + 0x248]
        call ext_006A5F50
        lea ecx, [esp + 0x8]
        call dword ptr [mem_009242F4]
        mov ecx, dword ptr [esp + 0x24]
        pop esi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x28
        ret 0x4
    }
}
