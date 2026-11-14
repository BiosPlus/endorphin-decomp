// Decompiled translation unit: src/classes/CharacterReloader.cpp

extern "C" int mem_00924FE0;

// [0x005AA020] CharacterReloader::vfunc_10 (37 bytes)
// Returns a std::string by value (hidden return buffer is the first stack arg, ret 0x8).
// The second stack arg is a pointer to an object whose std::string member sits at +0x4;
// that string is copy-constructed into the hidden buffer via the imported basic_string
// copy ctor (with a zero offset argument), then the buffer pointer is returned in eax.
extern "C" __declspec(naked) void __fastcall fn_005AA020(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0xc]
        push esi
        mov esi, dword ptr [esp + 0xc]
        add eax, 0x4
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0x8], 0
        call dword ptr [mem_00924FE0]
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    }
}

// [0x006786D0] CharacterReloader::vfunc_12 (429 bytes)
extern "C" void ext_00640270();
extern "C" void ext_00664C60();
extern "C" void ext_006A6E9E();
extern "C" int mem_00925134;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_006786D0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -0x1
        push 0x8848f2
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x38
        cmp byte ptr [esp + 0x50], 0x0
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x50]
        push edi
        mov edi, ecx
        je L_0067870b
        mov ecx, dword ptr [esp + 0x58]
        mov eax, dword ptr [edi]
        mov edx, dword ptr [eax + 0x3c]
        push ecx
        push esi
        mov ecx, edi
        call edx
        mov ebp, eax
        jmp L_0067870f
    L_0067870b:
        mov ebp, dword ptr [esp + 0x58]
    L_0067870f:
        test ebp, ebp
        je L_00678869
        mov eax, dword ptr [edi]
        mov edx, dword ptr [eax + 0x40]
        push ebx
        push ebp
        push esi
        mov ecx, edi
        call edx
        mov eax, dword ptr [edi]
        mov edx, dword ptr [eax + 0x34]
        push ebp
        push esi
        mov ecx, edi
        call edx
        lea ebx, [esi + 0x24]
        mov esi, dword ptr [ebx + 0x4]
        cmp esi, dword ptr [ebx + 0x8]
        jbe L_0067873f
        call dword ptr [mem_00925134]
    L_0067873f:
        mov eax, dword ptr [ebx + 0x8]
        cmp dword ptr [ebx + 0x4], eax
        mov dword ptr [esp + 0x60], eax
        jbe L_00678751
        call dword ptr [mem_00925134]
    L_00678751:
        test ebx, ebx
        je L_00678760
        mov eax, dword ptr [esp + 0x58]
        add eax, 0x24
        cmp ebx, eax
        je L_00678766
    L_00678760:
        call dword ptr [mem_00925134]
    L_00678766:
        cmp esi, dword ptr [esp + 0x60]
        jae L_00678855
        test ebx, ebx
        jne L_0067877a
        call dword ptr [mem_00925134]
    L_0067877a:
        cmp esi, dword ptr [ebx + 0x8]
        jb L_00678785
        call dword ptr [mem_00925134]
    L_00678785:
        mov ecx, dword ptr [esi]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0xc]
        push 0x1
        call edx
        test al, al
        je L_006787c7
        cmp esi, dword ptr [ebx + 0x8]
        jb L_0067879f
        call dword ptr [mem_00925134]
    L_0067879f:
        mov eax, dword ptr [esi]
        push 0x1
        push 0xa85878
        push 0xa9b14c
        push 0x0
        push eax
        call ext_006A6E9E
        mov edx, dword ptr [edi]
        add esp, 0x14
        push 0x1
        push ebp
        push eax
        mov eax, dword ptr [edx + 0x30]
        mov ecx, edi
        call eax
        jmp L_00678842
    L_006787c7:
        cmp esi, dword ptr [ebx + 0x8]
        jb L_006787d2
        call dword ptr [mem_00925134]
    L_006787d2:
        mov ecx, dword ptr [esi]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0xc]
        push 0x3
        call eax
        test al, al
        je L_00678842
        cmp esi, dword ptr [ebx + 0x8]
        jb L_006787ec
        call dword ptr [mem_00925134]
    L_006787ec:
        mov ecx, dword ptr [esi]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x8]
        lea eax, [esp + 0x10]
        push eax
        call edx
        lea eax, [esp + 0x10]
        push eax
        lea ecx, [esp + 0x30]
        push ecx
        mov dword ptr [esp + 0x58], 0x0
        call ext_00664C60
        add esp, 0x8
        push eax
        mov ecx, ebp
        mov byte ptr [esp + 0x54], 0x1
        call ext_00640270
        lea ecx, [esp + 0x2c]
        mov byte ptr [esp + 0x50], 0x0
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x10]
        mov dword ptr [esp + 0x50], 0xffffffff
        call dword ptr [mem_00924FF4]
    L_00678842:
        cmp esi, dword ptr [ebx + 0x8]
        jb L_0067884d
        call dword ptr [mem_00925134]
    L_0067884d:
        add esi, 0x4
        jmp L_00678751
    L_00678855:
        mov eax, dword ptr [esp + 0x5c]
        mov ecx, dword ptr [esp + 0x58]
        mov edx, dword ptr [edi]
        mov edx, dword ptr [edx + 0x44]
        push eax
        push ecx
        mov ecx, edi
        call edx
        pop ebx
    L_00678869:
        mov ecx, dword ptr [esp + 0x44]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs:[0x0], ecx
        add esp, 0x44
        ret 0xc
    }
}

extern "C" void ext_00427550();
extern "C" void ext_00640110();
extern "C" int mem_00925134;
extern "C" int mem_00924FE0;
extern "C" int mem_00924FF0;
extern "C" int mem_00924FF4;

// [0x00678570] CharacterReloader::vfunc_13 (343 bytes)
extern "C" __declspec(naked) void __fastcall fn_00678570(void* self) {
    __asm {
        push -1
        push 0x8848f2
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x48
        push ebx
        mov ebx, dword ptr [esp + 0x5c]
        push ebp
        add ebx, 0x3c
        push esi
        mov esi, dword ptr [ebx + 0x4]
        cmp esi, dword ptr [ebx + 0x8]
        push edi
        mov edi, ecx
        mov dword ptr [esp + 0x1c], edi
        mov dword ptr [esp + 0x10], ebx
        jbe L_006785AB
        call dword ptr [mem_00925134]
    L_006785AB:
        mov ebp, esi
        mov esi, ebx
        mov eax, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], eax
        mov dword ptr [esp + 0x14], eax
        jbe L_006785C1
        call dword ptr [mem_00925134]
    L_006785C1:
        test ebx, ebx
        je L_006785C9
        cmp ebx, esi
        je L_006785D3
    L_006785C9:
        mov esi, dword ptr [mem_00925134]
        call esi
        jmp L_006785D9
    L_006785D3:
        mov esi, dword ptr [mem_00925134]
    L_006785D9:
        cmp ebp, dword ptr [esp + 0x14]
        jae L_006786B2
        test ebx, ebx
        jne L_006785E9
        call esi
    L_006785E9:
        cmp ebp, dword ptr [ebx + 0x8]
        jb L_006785F0
        call esi
    L_006785F0:
        mov esi, dword ptr [ebp]
        lea eax, [esi + 0x4]
        push eax
        lea ecx, [esp + 0x24]
        call dword ptr [mem_00924FE0]
        mov edx, dword ptr [esp + 0x68]
        lea ecx, [esp + 0x20]
        push ecx
        sub esp, 0x1c
        add edx, 0x4
        mov ecx, esp
        mov dword ptr [esp + 0x38], esp
        push edx
        mov dword ptr [esp + 0x84], 0x0
        call dword ptr [mem_00924FE0]
        mov eax, dword ptr [edi]
        mov edx, dword ptr [eax + 0x38]
        mov ecx, edi
        call edx
        test al, al
        je L_00678689
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x8]
        lea ecx, [esp + 0x3c]
        push ecx
        mov ecx, esi
        call edx
        mov esi, eax
        lea ecx, [esp + 0x20]
        mov byte ptr [esp + 0x60], 0x1
        call dword ptr [mem_00924FF0]
        mov ecx, dword ptr [esp + 0x6c]
        push eax
        call ext_00640110
        mov ecx, esi
        mov edi, eax
        call dword ptr [mem_00924FF0]
        push eax
        lea ecx, [esp + 0x1c]
        mov dword ptr [esp + 0x1c], edi
        call ext_00427550
        lea ecx, [esp + 0x3c]
        mov byte ptr [esp + 0x60], 0x0
        call dword ptr [mem_00924FF4]
        mov edi, dword ptr [esp + 0x1c]
    L_00678689:
        lea ecx, [esp + 0x20]
        mov dword ptr [esp + 0x60], 0xffffffff
        call dword ptr [mem_00924FF4]
        cmp ebp, dword ptr [ebx + 0x8]
        jb L_006786A6
        call dword ptr [mem_00925134]
    L_006786A6:
        mov esi, dword ptr [esp + 0x10]
        add ebp, 0x4
        jmp L_006785C1
    L_006786B2:
        mov ecx, dword ptr [esp + 0x58]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs:[0x0], ecx
        pop ebx
        add esp, 0x54
        ret 0x8
    }
}

// [0x006783A0] CharacterReloader::vfunc_1 (338 bytes)
extern "C" void ext_0063F750();
extern "C" void ext_006405C0();
extern "C" void ext_006408C0();
extern "C" void ext_006410D0();
extern "C" void ext_00663470();
extern "C" void ext_00663DB0();
extern "C" int mem_00924FF0;
extern "C" int mem_00924FF4;
extern "C" int mem_00924FE8;
extern "C" int mem_008B4823;
extern "C" int mem_00B53B30;
extern "C" int mem_00928B5D;
extern "C" __declspec(naked) void __fastcall fn_006783A0(void* self, int edx_unused, int a1) {
    __asm {
        push -1
        push offset mem_008B4823
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0xc8
        push esi
        push edi
        mov edi, dword ptr [esp + 0xe0]
        mov esi, ecx
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x28]
        push edi
        lea ecx, [esp + 0x3c]
        push ecx
        mov ecx, esi
        call edx
        mov ecx, eax
        mov dword ptr [esp + 0xd8], 0
        call dword ptr [mem_00924FF0]
        push eax
        lea ecx, [esp + 0x58]
        call ext_006405C0
        lea ecx, [esp + 0x38]
        mov byte ptr [esp + 0xd8], 2
        call dword ptr [mem_00924FF4]
        mov eax, dword ptr [esp + 0xcc]
        test eax, eax
        mov dword ptr [esi + 0x20], edi
        jne L_6783_417
        mov eax, offset mem_00B53B30
L_6783_417:
        mov dword ptr [esi + 0x24], eax
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x2c]
        mov ecx, esi
        call edx
        mov ecx, dword ptr [esi + 0x24]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x30]
        push 0
        push ecx
        push edi
        mov ecx, esi
        mov byte ptr [esi + 0x28], 1
        call edx
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x48]
        mov ecx, esi
        call edx
        lea ecx, [esp + 0x8]
        call dword ptr [mem_00924FE8]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x4c]
        push 2
        mov ecx, esi
        mov byte ptr [esp + 0xdc], 3
        call edx
        neg al
        lea ecx, [esp + 0x28]
        sbb eax, eax
        and eax, offset mem_00928B5D
        push eax
        lea eax, [esp + 0x10]
        push eax
        call ext_006408C0
        lea ecx, [esp + 0x24]
        push ecx
        lea ecx, [esp + 0x58]
        call ext_006410D0
        cmp dword ptr [esi + 0x18], 0
        je L_6783_4B3
        add esi, 0x4
        mov ecx, esi
        call dword ptr [mem_00924FF0]
        push eax
        call ext_00663DB0
        add esp, 0x4
        lea edx, [esp + 0x8]
        push edx
        mov ecx, esi
        call dword ptr [mem_00924FF0]
        push eax
        call ext_00663470
        add esp, 0x8
L_6783_4B3:
        lea ecx, [esp + 0x8]
        mov byte ptr [esp + 0xd8], 2
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x54]
        mov dword ptr [esp + 0xd8], 0xffffffff
        call ext_0063F750
        mov ecx, dword ptr [esp + 0xd0]
        pop edi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0xd4
        ret 0x4
    }
}

// [0x005AA090] CharacterReloader::vfunc_15 (517 bytes)
extern "C" void ext_00401D00();
extern "C" void ext_00427550();
extern "C" void ext_0045DB50();
extern "C" void ext_0045DFB0();
extern "C" void ext_005A2FB0();
extern "C" void ext_005A9110();
extern "C" void ext_005A9970();
extern "C" void ext_0063EFE0();
extern "C" void ext_00640110();
extern "C" void ext_006404E0();
extern "C" void ext_00662810();
extern "C" void ext_00678500();
extern "C" int mem_00924FC0;
extern "C" int mem_00A9ED98;
extern "C" int mem_00A9EDA0;
extern "C" int mem_00A9F23C;
extern "C" int mem_00A9F838;
extern "C" int mem_00924FC4;
extern "C" int mem_00A9F288;
extern "C" int mem_00A9F6C8;
extern "C" int mem_00924FF0;
extern "C" int mem_00A9F88C;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_005AA090(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -0x1
        push 0x8a21b3
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x698
        push ebx
        mov ebx, dword ptr [mem_00924FC0]
        push esi
        push edi
        mov edi, dword ptr [esp + 0x6b4]
        mov esi, ecx
        mov ecx, dword ptr [mem_00A9ED98]
        lea eax, [edi + 0x4]
        push ecx
        push eax
        call ebx
        add esp, 0x8
        test al, al
        je L_005AA26B
        mov eax, dword ptr [edi + 0x20]
        mov edx, dword ptr [mem_00A9EDA0]
        push edx
        add eax, 0x4
        push eax
        call ebx
        add esp, 0x8
        test al, al
        je L_005AA26B
        mov eax, dword ptr [edi + 0x20]
        mov eax, dword ptr [eax + 0x20]
        mov ecx, dword ptr [mem_00A9F23C]
        push ecx
        add eax, 0x4
        push eax
        call ebx
        add esp, 0x8
        test al, al
        je L_005AA26B
        mov edx, dword ptr [mem_00A9F838]
        push edx
        mov ecx, edi
        call ext_0063EFE0
        mov edx, dword ptr [eax]
        mov edx, dword ptr [edx + 0x8]
        lea ecx, [esp + 0x10]
        push ecx
        mov ecx, eax
        call edx
        lea eax, [esi + 0x48]
        push eax
        lea ecx, [esp + 0x14]
        push ecx
        mov dword ptr [esp + 0x6b4], 0x0
        call dword ptr [mem_00924FC4]
        add esp, 0x8
        test al, al
        je L_005AA256
        mov edx, dword ptr [mem_00A9F288]
        push edx
        mov ecx, edi
        call ext_0045DFB0
        mov ecx, eax
        call ext_0045DB50
        test al, al
        je L_005AA184
        mov eax, dword ptr [mem_00A9F6C8]
        push eax
        mov ecx, edi
        call ext_0063EFE0
        mov ecx, eax
        call ext_0045DB50
        test al, al
        je L_005AA256
    L_005AA184:
        lea ecx, [esp + 0x48]
        call ext_005A9110
        add esi, 0x2c
        mov bl, 0x1
        push esi
        lea ecx, [esp + 0x4c]
        mov byte ptr [esp + 0x6b0], bl
        call ext_00401D00
        mov ecx, dword ptr [mem_00A9ED98]
        push ecx
        mov ecx, dword ptr [esp + 0x6bc]
        call ext_006404E0
        mov esi, eax
        push esi
        lea ecx, [esp + 0x4c]
        call ext_005A2FB0
        mov edx, dword ptr [mem_00A9F838]
        push edx
        mov ecx, esi
        call ext_00640110
        lea ecx, [esp + 0x10]
        mov dword ptr [esp + 0xc], eax
        call dword ptr [mem_00924FF0]
        push eax
        lea ecx, [esp + 0x10]
        call ext_00427550
        mov eax, dword ptr [mem_00A9F88C]
        push eax
        mov ecx, edi
        call ext_0063EFE0
        mov edx, dword ptr [eax]
        mov edx, dword ptr [edx + 0x8]
        lea ecx, [esp + 0x2c]
        push ecx
        mov ecx, eax
        call edx
        push eax
        mov eax, dword ptr [mem_00A9F88C]
        push eax
        push esi
        mov byte ptr [esp + 0x6b8], 0x2
        call ext_00662810
        add esp, 0xc
        lea ecx, [esp + 0x2c]
        mov byte ptr [esp + 0x6ac], bl
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x48]
        mov byte ptr [esp + 0x6ac], 0x0
        call ext_005A9970
        lea ecx, [esp + 0x10]
        mov dword ptr [esp + 0x6ac], 0xffffffff
        call dword ptr [mem_00924FF4]
        xor eax, eax
        jmp L_005AA27B
    L_005AA256:
        lea ecx, [esp + 0x10]
        mov dword ptr [esp + 0x6ac], 0xffffffff
        call dword ptr [mem_00924FF4]
    L_005AA26B:
        mov ecx, dword ptr [esp + 0x6b8]
        push ecx
        push edi
        mov ecx, esi
        call ext_00678500
    L_005AA27B:
        mov ecx, dword ptr [esp + 0x6a4]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0x6a4
        ret 0x8
    }
}
