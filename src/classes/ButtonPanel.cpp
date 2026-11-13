// Decompiled translation unit: src/classes/ButtonPanel.cpp

extern "C" void __stdcall ext_006A5E4E(int a1, int a2, int a3, int a4, int a5, int a6);
extern "C" int mem_009256E0;

// [0x004582D0] ButtonPanel::vfunc_94 (30 bytes)
extern "C" void __fastcall fn_004582D0(void* self, int edx_unused, unsigned char a1) {
    *((unsigned char*)self + 0x128) = a1;
    ext_006A5E4E(0, 0, 0, 0, 0, 0x27);
}

extern "C" int mem_00925694;
extern "C" void ext_006A600A();

// [0x004090F0] ButtonPanel::vfunc_66 (42 bytes)
extern "C" void __fastcall fn_004090F0(void* self, int edx_unused, int a1) {
    typedef int (__stdcall *SendMessageFn)(unsigned int, unsigned int, unsigned int, int);
    typedef void (__thiscall *ThisFn)(void*, int);
    unsigned int hwnd = *(unsigned int*)((unsigned char*)self + 0x15c);
    ((SendMessageFn)mem_00925694)(hwnd, 0x407, 0, a1);
    ((ThisFn)ext_006A600A)(self, a1);
}

// [0x004564E0] ButtonPanel::vfunc_98 (44 bytes)
extern "C" void __fastcall fn_004564E0(void* self) {
    typedef void (__thiscall *VFn)(void*);
    typedef void (__stdcall *RelFn)(void);
    (*(VFn*)(*(unsigned char**)self + 0x190))(self);
    *(int*)((unsigned char*)self + 0xdc) = 0;
    ((RelFn)mem_009256E0)();
    void* p = *(void**)((unsigned char*)self + 0x88);
    *(unsigned int*)((unsigned char*)p + 0xd0) |= 0xc;
}

// [0x00455C30] ButtonPanel::vfunc_93 (77 bytes)
extern "C" __declspec(naked) void __fastcall fn_00455C30(void* self) {
    __asm {
        mov edx, dword ptr [esp + 10h]
        mov eax, dword ptr [esp + 0Ch]
        mov dword ptr [ecx + 0B0h], edx
        mov dword ptr [ecx + 0A8h], edx
        mov dword ptr [ecx + 0A0h], edx
        mov edx, dword ptr [esp + 1Ch]
        push edx
        mov edx, dword ptr [esp + 1Ch]
        push edx
        mov edx, dword ptr [esp + 10h]
        mov dword ptr [ecx + 0ACh], eax
        mov dword ptr [ecx + 0A4h], eax
        mov dword ptr [ecx + 09Ch], eax
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 170h]
        push edx
        mov edx, dword ptr [esp + 10h]
        push edx
        call eax
        ret 1Ch
    }
}

extern "C" void* ext_006A5EDE();
extern "C" int __fastcall ext_006A5EC0(void*);
extern "C" void ext_006A6328();
extern "C" int mem_009256AC;
extern "C" int mem_00936F44;
extern "C" int mem_00936F38;
extern "C" int mem_00936F2C;
extern "C" int mem_00936F20;
extern "C" int mem_00936F14;
extern "C" int mem_00936F08;
extern "C" int mem_00936EFC;

// [0x00456B50] ButtonPanel::vfunc_96 (208 bytes)
extern "C" void __fastcall fn_00456B50(void* self, int edx_unused, int a1) {
    typedef int (__cdecl *WPrintfFn)(void*, const void*, ...);
    typedef void (__thiscall *WriteProfileFn)(void*, const void*, const void*, int);
    int buf[64];
    void* app = ext_006A5EDE();
    void* edi = *(void**)((char*)app + 4);
    int res = ext_006A5EC0(self);
    (*(WPrintfFn*)&mem_009256AC)(buf, &mem_00936F44, a1, res);
    ((WriteProfileFn)ext_006A6328)(edi, buf, &mem_00936F38, *(int*)((char*)self + 0x9c));
    ((WriteProfileFn)ext_006A6328)(edi, buf, &mem_00936F2C, *(int*)((char*)self + 0xa0));
    ((WriteProfileFn)ext_006A6328)(edi, buf, &mem_00936F20, *(int*)((char*)self + 0xa4));
    ((WriteProfileFn)ext_006A6328)(edi, buf, &mem_00936F14, *(int*)((char*)self + 0xa8));
    ((WriteProfileFn)ext_006A6328)(edi, buf, &mem_00936F08, *(int*)((char*)self + 0xac));
    ((WriteProfileFn)ext_006A6328)(edi, buf, &mem_00936EFC, *(int*)((char*)self + 0xb0));
}

extern "C" void ext_00455F10();
extern "C" void ext_006A5CE6();
extern "C" void ext_006A64AE();
extern "C" int mem_0092571C;
extern "C" int mem_009242F0;
extern "C" int mem_00924300;
extern "C" int mem_009242F4;

// [0x00456CE0] ButtonPanel::vfunc_92 (248 bytes)
extern "C" __declspec(naked) void __fastcall fn_00456CE0(void* self, int edx_unused, int a1, int a2, int a3, int a4) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x87eb59
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x10
        push ebx
        push esi
        push edi
        mov edi, dword ptr [esp + 0x38]
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x104]
        mov eax, edi
        and eax, 0x40ffff
        push ecx
        mov ecx, esi
        mov dword ptr [esi + 0x80], eax
        call ext_00455F10
        lea eax, [esi + 0xfc]
        xor ebx, ebx
        cmp eax, ebx
        jne L_00456D2C
        xor eax, eax
        jmp L_00456D2F
    L_00456D2C:
        mov eax, dword ptr [eax + 0x4]
    L_00456D2F:
        push ebx
        push eax
        push 0x7f00
        push ebx
        call dword ptr [mem_0092571C]
        push eax
        push 0x8
        call ext_006A64AE
        push eax
        lea ecx, [esp + 0x3c]
        call dword ptr [mem_009242F0]
        mov edx, dword ptr [esp + 0x34]
        mov eax, dword ptr [esp + 0x30]
        push ebx
        push edx
        mov edx, dword ptr [esp + 0x34]
        push eax
        lea ecx, [esp + 0x18]
        push ecx
        and edi, 0xffbf0000
        or edi, 0x2000000
        push edi
        push edx
        lea ecx, [esp + 0x50]
        mov dword ptr [esp + 0x3c], ebx
        mov dword ptr [esp + 0x24], ebx
        mov dword ptr [esp + 0x28], ebx
        mov dword ptr [esp + 0x2c], ebx
        mov dword ptr [esp + 0x30], ebx
        call dword ptr [mem_00924300]
        push eax
        mov ecx, esi
        call ext_006A5CE6
        test eax, eax
        pop edi
        pop esi
        pop ebx
        lea ecx, [esp + 0x2c]
        jne L_00456DBC
        call dword ptr [mem_009242F4]
        xor eax, eax
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr fs:[0], ecx
        add esp, 0x1c
        ret 0x10
    L_00456DBC:
        call dword ptr [mem_009242F4]
        mov ecx, dword ptr [esp + 0x10]
        mov eax, 0x1
        mov dword ptr fs:[0], ecx
        add esp, 0x1c
        ret 0x10
    }
}

extern "C" void ext_00454E80();
extern "C" void ext_00455CB0();
extern "C" void ext_00455F40();
extern "C" void ext_006A5FF2();
extern "C" void ext_006A5FFE();
extern "C" void ext_006A6100();
extern "C" void ext_006A6106();
extern "C" void ext_006A610C();
extern "C" int mem_00924084;
extern "C" int mem_00925678;

// [0x00455070] ButtonPanel::vfunc_101 (439 bytes)
extern "C" __declspec(naked) void __fastcall fn_00455070(void* self) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -8
        mov eax, dword ptr fs:[0]
        push -1
        push 0x87e7b8
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x28
        push ebx
        push esi
        push edi
        mov edi, ecx
        call ext_00455F40
        test eax, eax
        jne L_00455213
        xor ecx, ecx
        mov dword ptr [esp + 0x14], ecx
        mov dword ptr [esp + 0x10], 0x92b93c
        mov eax, dword ptr [edi + 0x120]
        push eax
        push 1
        push ecx
        mov dword ptr [esp + 0x48], ecx
        call dword ptr [mem_00924084]
        push eax
        lea ecx, [esp + 0x14]
        call ext_006A5FFE
        mov ebx, dword ptr [ebp + 0x8]
        lea eax, [esp + 0x10]
        push eax
        mov ecx, ebx
        call ext_006A610C
        mov ecx, dword ptr [ebp + 0xc]
        mov edx, dword ptr [ebp + 0x10]
        mov dword ptr [esp + 0x20], ecx
        mov ecx, dword ptr [ebp + 0x18]
        mov dword ptr [esp + 0xc], eax
        mov eax, dword ptr [ebp + 0x14]
        mov dword ptr [esp + 0x2c], ecx
        mov ecx, edi
        mov dword ptr [esp + 0x24], edx
        mov dword ptr [esp + 0x28], eax
        call ext_00455CB0
        mov edx, dword ptr [edi]
        mov esi, eax
        mov eax, dword ptr [edx + 0x1a0]
        mov ecx, edi
        call eax
        push -1
        push -1
        lea ecx, [esp + 0x28]
        push ecx
        call dword ptr [mem_00925678]
        test esi, esi
        je short L_0045517A
        mov eax, dword ptr [esp + 0x20]
        sub eax, dword ptr [edi + 0x108]
        mov esi, dword ptr [esp + 0x24]
        add esi, 3
        sub dword ptr [esp + 0x2c], 3
        lea edx, [eax + 4]
        mov dword ptr [esp + 0x20], eax
        mov dword ptr [esp + 0x28], edx
        mov dword ptr [esp + 0x24], esi
        jmp short L_00455154
        _emit 0x8d
        _emit 0x9b
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
    L_00455150:
        mov eax, dword ptr [esp + 0x20]
    L_00455154:
        push esi
        push eax
        lea eax, [esp + 0x20]
        push eax
        mov ecx, ebx
        call ext_006A6106
        mov ecx, dword ptr [esp + 0x28]
        push esi
        push ecx
        mov ecx, ebx
        call ext_006A6100
        add esi, 2
        cmp esi, dword ptr [esp + 0x2c]
        jl short L_00455150
        jmp short L_004551C9
    L_0045517A:
        mov eax, dword ptr [esp + 0x24]
        sub eax, dword ptr [edi + 0x108]
        mov esi, dword ptr [esp + 0x20]
        add esi, 3
        sub dword ptr [esp + 0x28], 3
        lea edx, [eax + 4]
        mov dword ptr [esp + 0x24], eax
        mov dword ptr [esp + 0x2c], edx
        mov dword ptr [esp + 0x20], esi
        jmp short L_004551A5
    L_004551A1:
        mov eax, dword ptr [esp + 0x24]
    L_004551A5:
        push eax
        push esi
        lea eax, [esp + 0x20]
        push eax
        mov ecx, ebx
        call ext_006A6106
        mov ecx, dword ptr [esp + 0x2c]
        push ecx
        push esi
        mov ecx, ebx
        call ext_006A6100
        add esi, 2
        cmp esi, dword ptr [esp + 0x28]
        jl short L_004551A1
    L_004551C9:
        mov edx, dword ptr [edi]
        mov eax, dword ptr [edx + 0x1a0]
        mov ecx, edi
        call eax
        test eax, eax
        je short L_004551E5
        push ebx
        lea ecx, [edi + 0x10c]
        call ext_00454E80
    L_004551E5:
        mov ecx, dword ptr [esp + 0xc]
        push ecx
        mov ecx, ebx
        call ext_006A610C
        lea ecx, [esp + 0x10]
        call ext_006A5FF2
        lea ecx, [esp + 0x10]
        mov dword ptr [esp + 0x3c], 0xffffffff
        mov dword ptr [esp + 0x10], 0x92a23c
        call ext_006A5FF2
    L_00455213:
        mov ecx, dword ptr [esp + 0x34]
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0x14
    }
}

extern "C" void ext_006A6532();

// [0x00456960] ButtonPanel::vfunc_95 (488 bytes)
extern "C" __declspec(naked) void __fastcall fn_00456960(void* self, int edx_unused, int a1) {
    __asm {
        sub esp, 0x100
        push ebx
        push esi
        push edi
        mov esi, ecx
        call ext_006A5EDE
        mov edi, dword ptr [eax + 0x4]
        mov ecx, esi
        call ext_006A5EC0
        push eax
        mov eax, dword ptr [esp + 0x114]
        push eax
        lea ecx, [esp + 0x14]
        push 0x936f44
        push ecx
        call dword ptr [mem_009256AC]
        mov edx, dword ptr [esi + 0x9c]
        mov ebx, dword ptr [esi + 0xb4]
        add esp, 0x10
        push edx
        push 0x936f38
        lea eax, [esp + 0x14]
        push eax
        mov ecx, edi
        call ext_006A6532
        cmp ebx, eax
        jle L1
        mov eax, ebx
        jmp L2
    L1:
        mov ecx, dword ptr [esi + 0x9c]
        push ecx
        push 0x936f38
        lea edx, [esp + 0x14]
        push edx
        mov ecx, edi
        call ext_006A6532
    L2:
        mov ebx, dword ptr [esi + 0xb8]
        mov dword ptr [esi + 0x9c], eax
        mov eax, dword ptr [esi + 0xa0]
        push eax
        push 0x936f2c
        lea ecx, [esp + 0x14]
        push ecx
        mov ecx, edi
        call ext_006A6532
        cmp ebx, eax
        jle L3
        mov eax, ebx
        jmp L4
    L3:
        mov edx, dword ptr [esi + 0xa0]
        push edx
        push 0x936f2c
        lea eax, [esp + 0x14]
        push eax
        mov ecx, edi
        call ext_006A6532
    L4:
        mov ecx, dword ptr [esi + 0xa4]
        mov ebx, dword ptr [esi + 0xbc]
        push ecx
        push 0x936f20
        lea edx, [esp + 0x14]
        push edx
        mov ecx, edi
        mov dword ptr [esi + 0xa0], eax
        call ext_006A6532
        cmp ebx, eax
        jle L5
        mov eax, ebx
        jmp L6
    L5:
        mov eax, dword ptr [esi + 0xa4]
        push eax
        push 0x936f20
        lea ecx, [esp + 0x14]
        push ecx
        mov ecx, edi
        call ext_006A6532
    L6:
        mov edx, dword ptr [esi + 0xa8]
        mov ebx, dword ptr [esi + 0xc0]
        push edx
        mov dword ptr [esi + 0xa4], eax
        push 0x936f14
        lea eax, [esp + 0x14]
        push eax
        mov ecx, edi
        call ext_006A6532
        cmp ebx, eax
        jle L7
        mov eax, ebx
        jmp L8
    L7:
        mov ecx, dword ptr [esi + 0xa8]
        push ecx
        push 0x936f14
        lea edx, [esp + 0x14]
        push edx
        mov ecx, edi
        call ext_006A6532
    L8:
        mov ebx, dword ptr [esi + 0xc4]
        mov dword ptr [esi + 0xa8], eax
        mov eax, dword ptr [esi + 0xac]
        push eax
        push 0x936f08
        lea ecx, [esp + 0x14]
        push ecx
        mov ecx, edi
        call ext_006A6532
        cmp ebx, eax
        jle L9
        mov eax, ebx
        jmp L10
    L9:
        mov edx, dword ptr [esi + 0xac]
        push edx
        push 0x936f08
        lea eax, [esp + 0x14]
        push eax
        mov ecx, edi
        call ext_006A6532
    L10:
        mov ecx, dword ptr [esi + 0xb0]
        mov ebx, dword ptr [esi + 0xc8]
        push ecx
        push 0x936efc
        lea edx, [esp + 0x14]
        push edx
        mov ecx, edi
        mov dword ptr [esi + 0xac], eax
        call ext_006A6532
        cmp ebx, eax
        jle L11
        pop edi
        mov dword ptr [esi + 0xb0], ebx
        pop esi
        pop ebx
        add esp, 0x100
        ret 0x4
    L11:
        mov eax, dword ptr [esi + 0xb0]
        push eax
        push 0x936efc
        lea ecx, [esp + 0x14]
        push ecx
        mov ecx, edi
        call ext_006A6532
        pop edi
        mov dword ptr [esi + 0xb0], eax
        pop esi
        pop ebx
        add esp, 0x100
        ret 0x4
    }
}
