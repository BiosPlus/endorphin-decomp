// Decompiled translation unit: src/classes/GWCDateTimePropertyValue.cpp

// [0x006B3D40] GWCDateTimePropertyValue::vfunc_1 (123 bytes)
extern "C" int mem_0092431C;
extern "C" int mem_00924300;
extern "C" int mem_009242F4;

extern "C" __declspec(naked) void __fastcall fn_006B3D40(void* self, int edx_unused, void* a1, int a2, int a3, int a4, int a5, int a6, int a7) {
    __asm {
        push -1
        push 0x87cc19
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0x8]
        add dword ptr [esp + 0x18], 0x2
        push ebx
        push esi
        push edi
        lea edx, [esp + 0xc]
        push edx
        call eax
        mov esi, eax
        mov edi, dword ptr [esp + 0x20]
        mov ebx, dword ptr [edi]
        push 0x8024
        lea ecx, [esp + 0x28]
        push ecx
        mov ecx, esi
        mov dword ptr [esp + 0x20], 0x0
        call dword ptr [mem_0092431C]
        push eax
        mov ecx, esi
        call dword ptr [mem_00924300]
        mov edx, dword ptr [ebx + 0x70]
        push eax
        mov ecx, edi
        call edx
        lea ecx, [esp + 0xc]
        call dword ptr [mem_009242F4]
        mov ecx, dword ptr [esp + 0x10]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret 0x1c
    }
}

// [0x006B4140] GWCDateTimePropertyValue::vfunc_2 (162 bytes)
extern "C" void ext_006B4090();
extern "C" int mem_009253BC;
extern "C" int mem_00924160;
extern "C" int mem_0092415C;
extern "C" int mem_009242F0;

extern "C" __declspec(naked) void* __fastcall fn_006B4140(void* self, int edx_unused, void* out) {
    __asm {
        sub esp, 0x114
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x4]
        cmp eax, 0xc8
        mov dword ptr [esp + 0x4], 0x0
        je L_convert
        cmp eax, 0xd2
        jne L_format
L_convert:
        mov eax, dword ptr [esi + 0x40]
        cmp dword ptr [eax + 0x8], 0x0
        jne L_format
        fld qword ptr [eax]
        lea ecx, [esp + 0x8]
        push ecx
        sub esp, 0x8
        fstp qword ptr [esp]
        call dword ptr [mem_009253BC]
L_format:
        mov ecx, esi
        call ext_006B4090
        test al, al
        push 0x100
        je L_date
        lea edx, [esp + 0x1c]
        push edx
        push 0x0
        lea eax, [esp + 0x14]
        push eax
        push 0x0
        push 0x400
        call dword ptr [mem_00924160]
        jmp L_done
L_date:
        lea ecx, [esp + 0x1c]
        push ecx
        push 0x0
        lea edx, [esp + 0x14]
        push edx
        push 0x1
        push 0x400
        call dword ptr [mem_0092415C]
L_done:
        mov esi, dword ptr [esp + 0x11c]
        lea eax, [esp + 0x18]
        push eax
        mov ecx, esi
        call dword ptr [mem_009242F0]
        mov eax, esi
        pop esi
        add esp, 0x114
        ret 0x4
    }
}

// [0x006B41F0] GWCDateTimePropertyValue::vfunc_4 (190 bytes)
extern "C" int mem_00924080;

extern "C" __declspec(naked) void* __fastcall fn_006B41F0(void* self, int edx_unused, void* a1, void* a2, void* a3, void* a4) {
    __asm {
        push -1
        push 0x8b79c9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0xc
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0x8]
        push ebx
        push esi
        push edi
        lea edx, [esp + 0xc]
        push edx
        call eax
        mov eax, dword ptr [esp + 0x34]
        mov ecx, dword ptr [eax]
        mov esi, dword ptr [esp + 0x28]
        mov edx, dword ptr [eax + 0x4]
        mov edi, dword ptr [esp + 0x2c]
        mov dword ptr [esi], ecx
        mov ecx, dword ptr [eax + 0x8]
        mov dword ptr [esi + 0x4], edx
        mov edx, dword ptr [eax + 0xc]
        mov eax, dword ptr [edi]
        mov dword ptr [esi + 0x8], ecx
        mov ecx, dword ptr [esp + 0x30]
        mov dword ptr [esi + 0xc], edx
        mov edx, dword ptr [eax + 0x30]
        push ecx
        mov ecx, edi
        mov dword ptr [esp + 0x24], 0x0
        call edx
        mov ebx, eax
        lea eax, [esp + 0x10]
        push eax
        lea ecx, [esp + 0x10]
        call dword ptr [mem_0092431C]
        push eax
        lea ecx, [esp + 0x14]
        call dword ptr [mem_00924300]
        mov ecx, dword ptr [edi + 0x8]
        push eax
        push ecx
        call dword ptr [mem_00924080]
        mov edx, dword ptr [edi]
        mov eax, dword ptr [edx + 0x30]
        push ebx
        mov ecx, edi
        call eax
        add dword ptr [esi], 0x2
        mov eax, dword ptr [esi]
        mov ecx, dword ptr [esp + 0x10]
        add eax, ecx
        lea ecx, [esp + 0xc]
        mov dword ptr [esi + 0x8], eax
        call dword ptr [mem_009242F4]
        mov ecx, dword ptr [esp + 0x18]
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0x18
        ret 0x10
    }
}

// [0x006B4310] GWCDateTimePropertyValue::vfunc_5 (210 bytes)
extern "C" void ext_006A5C5C();
extern "C" void ext_006A5C62();
extern "C" void ext_006B42B0();
extern "C" int mem_00925310;

extern "C" __declspec(naked) void __fastcall fn_006B4310(void* self) {
    __asm {
        sub esp, 0x14
        push esi
        mov esi, ecx
        cmp byte ptr [esi + 0x34], 0x1
        jne L_006B4339
        mov eax, dword ptr [esi + 0x4]
        cmp eax, 0xc8
        je L_006B432D
        cmp eax, 0xd2
        jne L_006B4339
    L_006B432D:
        mov eax, dword ptr [esi + 0x40]
        push eax
        call ext_006A5C5C
        add esp, 0x4
    L_006B4339:
        mov al, byte ptr [esp + 0x20]
        mov byte ptr [esi + 0x34], al
        test al, al
        mov eax, dword ptr [esi + 0x4]
        jne L_006B4367
        cmp eax, 0xc8
        je L_006B4359
        cmp eax, 0xd2
        jne L_006B43DB
    L_006B4359:
        mov ecx, dword ptr [esp + 0x1c]
        mov dword ptr [esi + 0x40], ecx
        pop esi
        add esp, 0x14
        ret 0x8
    L_006B4367:
        cmp eax, 0xc8
        je L_006B4375
        cmp eax, 0xd2
        jne L_006B43DB
    L_006B4375:
        push 0xc
        call ext_006A5C62
        add esp, 0x4
        test eax, eax
        je L_006B4390
        fldz
        mov dword ptr [eax + 0x8], 0x0
        fstp qword ptr [eax]
        jmp L_006B4392
    L_006B4390:
        xor eax, eax
    L_006B4392:
        push 0x0
        mov dword ptr [esi + 0x40], eax
        call dword ptr [mem_00925310]
        fldz
        mov dword ptr [esp + 0xc], edx
        fstp qword ptr [esp + 0x10]
        add esp, 0x4
        lea edx, [esp + 0x4]
        push edx
        lea ecx, [esp + 0x10]
        mov dword ptr [esp + 0x8], eax
        mov dword ptr [esp + 0x18], 0x0
        call ext_006B42B0
        mov esi, dword ptr [esi + 0x40]
        mov eax, dword ptr [esp + 0xc]
        mov dword ptr [esi], eax
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [esi + 0x4], ecx
        mov edx, dword ptr [esp + 0x14]
        mov dword ptr [esi + 0x8], edx
    L_006B43DB:
        pop esi
        add esp, 0x14
        ret 0x8
    }
}

// [0x006AE700] GWCDateTimePropertyValue::vfunc_3 (1084 bytes)
extern "C" void ext_00412CA0();
extern "C" void ext_0049AA40();
extern "C" void ext_0049AD40();
extern "C" void ext_005A07A0();
extern "C" void ext_00673DD0();
extern "C" void ext_006AD940();
extern "C" void ext_006ADE30();
extern "C" int mem_009244D4;
extern "C" int mem_00924558;
extern "C" int mem_00924FD4;
extern "C" int mem_0092449C;
extern "C" int mem_0092521C;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_006AE700(void* self, int edx_unused, void* arg0) {
    __asm {
        push -0x1
        push 0x8b75bd
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x2c
        push esi
        push edi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x4]
        xor edi, edi
        cmp eax, 0x1
        mov dword ptr [esp + 0x3c], edi
        jne L_006AE73D
        mov ecx, dword ptr [esi + 0x8]
        lea eax, [esp + 0x44]
        push eax
        call dword ptr [mem_009244D4]
        jmp L_006AEB1F
    L_006AE73D:
        cmp eax, 0x2
        jne L_006AE75C
        push edi
        lea ecx, [esp + 0x48]
        call dword ptr [mem_00924558]
        mov ecx, dword ptr [esi + 0x8]
        push eax
        call dword ptr [mem_00924FD4]
        jmp L_006AEB1F
    L_006AE75C:
        cmp eax, 0x3
        push ebx
        jne L_006AE7ED
        mov ecx, esi
        call ext_0049AA40
        test eax, eax
        jle L_006AEB1E
    L_006AE775:
        push edi
        mov ecx, esi
        call ext_006ADE30
        mov edx, dword ptr [eax]
        mov edx, dword ptr [edx + 0x8]
        lea ecx, [esp + 0xc]
        push ecx
        mov ecx, eax
        call edx
        mov ebx, eax
        lea ecx, [esp + 0x48]
        mov byte ptr [esp + 0x40], 0x1
        call dword ptr [mem_00924300]
        push eax
        mov ecx, ebx
        call dword ptr [mem_0092449C]
        test eax, eax
        lea ecx, [esp + 0xc]
        sete bl
        mov byte ptr [esp + 0x40], 0x0
        call dword ptr [mem_009242F4]
        test bl, bl
        mov ecx, esi
        jne L_006AE7D0
        add edi, 0x1
        call ext_0049AA40
        cmp edi, eax
        jl L_006AE775
        jmp L_006AEB1E
    L_006AE7D0:
        push edi
        call ext_006ADE30
        mov ecx, eax
        call ext_006AD940
        mov ecx, dword ptr [esi + 0x8]
        cmp eax, 0x1
        sete al
        mov byte ptr [ecx], al
        jmp L_006AEB1E
    L_006AE7ED:
        cmp eax, 0x4
        push ebp
        jne L_006AE88F
        mov ecx, esi
        call ext_0049AA40
        cmp eax, edi
        jne L_006AE827
        push 0x928b5d
        lea ecx, [esp + 0x50]
        call dword ptr [mem_0092449C]
        test eax, eax
        je L_006AE8C4
        mov edx, dword ptr [esi + 0x8]
        push edx
        push 0x929f48
        jmp L_006AEA27
    L_006AE827:
        jle L_006AEB1D
        _emit 0x8d
        _emit 0x49
        _emit 0x00
    L_006AE830:
        push edi
        mov ecx, esi
        call ext_006ADE30
        mov edx, dword ptr [eax]
        mov edx, dword ptr [edx + 0x8]
        lea ecx, [esp + 0x10]
        push ecx
        mov ecx, eax
        call edx
        mov ebp, eax
        lea ecx, [esp + 0x4c]
        mov byte ptr [esp + 0x44], 0x2
        call dword ptr [mem_00924300]
        push eax
        mov ecx, ebp
        call dword ptr [mem_0092449C]
        test eax, eax
        lea ecx, [esp + 0x10]
        sete bl
        mov byte ptr [esp + 0x44], 0x0
        call dword ptr [mem_009242F4]
        test bl, bl
        mov ecx, esi
        jne L_006AE92F
        add edi, 0x1
        call ext_0049AA40
        cmp edi, eax
        jl L_006AE830
        jmp L_006AEB1D
    L_006AE88F:
        cmp eax, 0x5
        jne L_006AE946
        mov ecx, esi
        call ext_0049AA40
        cmp eax, edi
        jne L_006AE8CE
        push 0x928b5d
        lea ecx, [esp + 0x50]
        call dword ptr [mem_0092449C]
        test eax, eax
        je L_006AE8C4
        mov edx, dword ptr [esi + 0x8]
        push edx
        push 0x9720e8
        jmp L_006AEA27
    L_006AE8C4:
        mov eax, dword ptr [esi + 0x8]
        mov dword ptr [eax], edi
        jmp L_006AEB1D
    L_006AE8CE:
        jle L_006AEB1D
    L_006AE8D4:
        push edi
        mov ecx, esi
        call ext_006ADE30
        mov edx, dword ptr [eax]
        mov edx, dword ptr [edx + 0x8]
        lea ecx, [esp + 0x10]
        push ecx
        mov ecx, eax
        call edx
        mov ebp, eax
        lea ecx, [esp + 0x4c]
        mov byte ptr [esp + 0x44], 0x3
        call dword ptr [mem_00924300]
        push eax
        mov ecx, ebp
        call dword ptr [mem_0092449C]
        test eax, eax
        lea ecx, [esp + 0x10]
        sete bl
        mov byte ptr [esp + 0x44], 0x0
        call dword ptr [mem_009242F4]
        test bl, bl
        mov ecx, esi
        jne L_006AE92F
        add edi, 0x1
        call ext_0049AA40
        cmp edi, eax
        jl L_006AE8D4
        jmp L_006AEB1D
    L_006AE92F:
        push edi
        call ext_006ADE30
        mov ecx, eax
        call ext_006AD940
        mov ecx, dword ptr [esi + 0x8]
        mov dword ptr [ecx], eax
        jmp L_006AEB1D
    L_006AE946:
        cmp eax, 0x6
        jne L_006AE978
        push 0x928b5d
        lea ecx, [esp + 0x50]
        call dword ptr [mem_0092449C]
        test eax, eax
        je L_006AE96C
        mov edx, dword ptr [esi + 0x8]
        push edx
        push 0x93c670
        jmp L_006AEA27
    L_006AE96C:
        fldz
        mov eax, dword ptr [esi + 0x8]
        fstp qword ptr [eax]
        jmp L_006AEB1D
    L_006AE978:
        cmp eax, 0x7
        jne L_006AE9AA
        push 0x928b5d
        lea ecx, [esp + 0x50]
        call dword ptr [mem_0092449C]
        test eax, eax
        je L_006AE99E
        mov ecx, dword ptr [esi + 0x8]
        push ecx
        push 0x9910e0
        jmp L_006AEA27
    L_006AE99E:
        fldz
        mov edx, dword ptr [esi + 0x8]
        fstp dword ptr [edx]
        jmp L_006AEB1D
    L_006AE9AA:
        cmp eax, 0x8
        jne L_006AE9D8
        push 0x928b5d
        lea ecx, [esp + 0x50]
        call dword ptr [mem_0092449C]
        test eax, eax
        je L_006AE9CD
        mov eax, dword ptr [esi + 0x8]
        push eax
        push 0x9910dc
        jmp L_006AEA27
    L_006AE9CD:
        mov ecx, dword ptr [esi + 0x8]
        mov word ptr [ecx], di
        jmp L_006AEB1D
    L_006AE9D8:
        cmp eax, 0x9
        jne L_006AEA06
        push 0x928b5d
        lea ecx, [esp + 0x50]
        call dword ptr [mem_0092449C]
        test eax, eax
        je L_006AE9FB
        mov edx, dword ptr [esi + 0x8]
        push edx
        push 0x9910d8
        jmp L_006AEA27
    L_006AE9FB:
        mov eax, dword ptr [esi + 0x8]
        mov word ptr [eax], di
        jmp L_006AEB1D
    L_006AEA06:
        cmp eax, 0xa
        jne L_006AEA4B
        push 0x928b5d
        lea ecx, [esp + 0x50]
        call dword ptr [mem_0092449C]
        test eax, eax
        je L_006AEA40
        mov ecx, dword ptr [esi + 0x8]
        push ecx
        push 0x9910d4
    L_006AEA27:
        lea ecx, [esp + 0x54]
        call dword ptr [mem_00924300]
        push eax
        call dword ptr [mem_0092521C]
        add esp, 0xc
        jmp L_006AEB1D
    L_006AEA40:
        mov edx, dword ptr [esi + 0x8]
        mov byte ptr [edx], 0x0
        jmp L_006AEB1D
    L_006AEA4B:
        cmp eax, 0xb
        jne L_006AEB1D
        mov ecx, esi
        call ext_0049AA40
        test eax, eax
        jle L_006AEAB6
        nop
    L_006AEA60:
        push edi
        mov ecx, esi
        call ext_006ADE30
        mov edx, dword ptr [eax]
        mov edx, dword ptr [edx + 0x8]
        lea ecx, [esp + 0x10]
        push ecx
        mov ecx, eax
        call edx
        lea ecx, [esp + 0x4c]
        push ecx
        push eax
        call ext_00412CA0
        add esp, 0x8
        lea ecx, [esp + 0x10]
        mov bl, al
        call dword ptr [mem_009242F4]
        test bl, bl
        mov ecx, esi
        jne L_006AEAA4
        add edi, 0x1
        call ext_0049AA40
        cmp edi, eax
        jl L_006AEA60
        jmp L_006AEAB6
    L_006AEAA4:
        push edi
        call ext_006ADE30
        mov ecx, eax
        call ext_006AD940
        mov edx, dword ptr [esi + 0x8]
        mov dword ptr [edx], eax
    L_006AEAB6:
        lea ecx, [esp + 0x4c]
        call dword ptr [mem_00924300]
        push eax
        lea ecx, [esp + 0x24]
        call dword ptr [mem_00924FE4]
        push eax
        lea eax, [esp + 0x1c]
        lea edi, [esi + 0xc]
        push eax
        mov ecx, edi
        mov byte ptr [esp + 0x4c], 0x4
        call ext_005A07A0
        lea ecx, [esp + 0x20]
        mov byte ptr [esp + 0x44], 0x0
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [edi + 0x4]
        lea edx, [esp + 0x10]
        mov dword ptr [esp + 0x14], ecx
        push edx
        lea ecx, [esp + 0x1c]
        mov dword ptr [esp + 0x14], edi
        call ext_0049AD40
        test al, al
        je L_006AEB1D
        lea ecx, [esp + 0x18]
        call ext_00673DD0
        mov ecx, dword ptr [esi + 0x8]
        mov edx, dword ptr [eax + 0x1c]
        mov dword ptr [ecx], edx
    L_006AEB1D:
        pop ebp
    L_006AEB1E:
        pop ebx
    L_006AEB1F:
        lea ecx, [esp + 0x44]
        call dword ptr [mem_009242F4]
        mov ecx, dword ptr [esp + 0x34]
        pop edi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x38
        ret 0x4
    }
}
