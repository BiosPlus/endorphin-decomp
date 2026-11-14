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

extern "C" void ext_00455F40();
extern "C" void ext_006A6046();
extern "C" void ext_006A67A8();
extern "C" int mem_00925718;
extern "C" int mem_00925690;

// [0x00455F80] ButtonPanel::vfunc_80 (569 bytes)
extern "C" __declspec(naked) void __fastcall fn_00455F80(void* self) {
    __asm {
        mov	edx, dword ptr [esp + 0xc]
        sub	esp, 0x28
        test	dl, 0x18
        push	esi
        push	edi
        mov	esi, ecx
        je loc_00455fb9
        mov	eax, dword ptr [esp + 0x38]
        cmp	eax, -0x1
        jne loc_00455fa3
        mov	dword ptr [esi + 0xe4], 0x1
    loc_00455fa3:
        mov	edi, dword ptr [esp + 0x34]
        push	edx
        push	eax
        push	edi
        call ext_006A6046
        mov	eax, edi
        pop	edi
        pop	esi
        add	esp, 0x28
        ret	0xc
    loc_00455fb9:
        test	dl, 0x4
        je loc_00455fdb
    loc_00455fbe:
        mov	ecx, dword ptr [esi + 0xac]
        mov	eax, dword ptr [esp + 0x34]
        mov	dword ptr [eax], ecx
        mov	edx, dword ptr [esi + 0xb0]
        pop	edi
        mov	dword ptr [eax + 0x4], edx
        pop	esi
        add	esp, 0x28
        ret	0xc
    loc_00455fdb:
        test	dl, 0x40
        jne loc_00455fbe
        cmp	dword ptr [esi + 0xf0], 0x0
        mov	eax, dword ptr [esi + 0x90]
        mov	edi, dword ptr [eax + 0x8c]
        jne loc_00456013
        cmp	edi, 0xa
        je loc_00455fbe
        cmp	edi, 0xb
        je loc_00455fbe
        cmp	edi, 0xd
        je loc_00455fbe
        cmp	edi, 0x10
        je loc_00455fbe
        cmp	edi, 0xe
        je loc_00455fbe
        cmp	edi, 0x11
        je loc_00455fbe
    loc_00456013:
        cmp	dword ptr [esi + 0xec], 0x0
        jne loc_0045603a
        cmp	edi, 0xc
        je loc_00455fbe
        cmp	edi, 0xf
        je loc_00455fbe
        cmp	edi, 0xd
        je loc_00455fbe
        cmp	edi, 0x10
        je loc_00455fbe
        cmp	edi, 0xe
        je loc_00455fbe
        cmp	edi, 0x11
        je loc_00455fbe
    loc_0045603a:
        call ext_00455F40
        test	eax, eax
        je loc_00456155
        cmp	edi, 0xd
        je loc_0045605f
        cmp	edi, 0x10
        je loc_0045605f
        cmp	edi, 0xe
        je loc_0045605f
        cmp	edi, 0x11
        jne loc_00456155
    loc_0045605f:
        push	ebx
        push	ebp
        lea	eax, [esp + 0x10]
        push	eax
        call dword ptr [mem_00925718]
        mov	ecx, esi
        call ext_006A67A8
        mov	edx, dword ptr [eax + 0x20]
        mov	ebx, dword ptr [mem_00925690]
        lea	ecx, [esp + 0x28]
        push	ecx
        push	edx
        call ebx
        mov	ecx, dword ptr [esi + 0x20]
        lea	eax, [esp + 0x18]
        push	eax
        push	ecx
        call ebx
        cmp	edi, 0xd
        je loc_00456099
        cmp	edi, 0x10
        jne loc_004560d0
    loc_00456099:
        mov	eax, dword ptr [esp + 0x20]
        mov	edx, dword ptr [esp + 0x18]
        mov	ecx, dword ptr [esp + 0x10]
        mov	ebx, dword ptr [esp + 0x28]
        mov	ebp, eax
        sub	eax, dword ptr [esi + 0xc4]
        sub	ebp, edx
        sub	eax, edx
        sub	ebp, ecx
        add	ebp, ebx
        add	eax, ebx
        cmp	ecx, eax
        mov	dword ptr [esi + 0xac], ebp
        jge loc_004560c7
        mov	eax, ecx
    loc_004560c7:
        mov	edx, dword ptr [esi + 0x90]
        mov	dword ptr [edx + 0x48], eax
    loc_004560d0:
        cmp	edi, 0xd
        je loc_004560da
        cmp	edi, 0xe
        jne loc_00456116
    loc_004560da:
        mov	eax, dword ptr [esp + 0x24]
        mov	edx, dword ptr [esp + 0x1c]
        mov	ecx, dword ptr [esp + 0x14]
        mov	ebx, dword ptr [esp + 0x2c]
        mov	ebp, eax
        sub	eax, dword ptr [esi + 0xc8]
        sub	ebp, edx
        sub	eax, edx
        sub	ebp, ecx
        add	ebp, ebx
        add	eax, ebx
        cmp	ecx, eax
        mov	dword ptr [esi + 0xb0], ebp
        jge loc_00456108
        mov	eax, ecx
    loc_00456108:
        cmp	edi, 0xe
        mov	ecx, dword ptr [esi + 0x90]
        mov	dword ptr [ecx + 0x4c], eax
        je loc_0045611b
    loc_00456116:
        cmp	edi, 0x11
        jne loc_00456131
    loc_0045611b:
        mov	edx, dword ptr [esp + 0x20]
        sub	edx, dword ptr [esp + 0x18]
        sub	edx, dword ptr [esp + 0x30]
        add	edx, dword ptr [esp + 0x10]
        mov	dword ptr [esi + 0xac], edx
    loc_00456131:
        cmp	edi, 0x10
        pop	ebp
        pop	ebx
        je loc_0045613d
        cmp	edi, 0x11
        jne loc_0045616c
    loc_0045613d:
        mov	eax, dword ptr [esp + 0x1c]
        sub	eax, dword ptr [esp + 0x14]
        sub	eax, dword ptr [esp + 0x2c]
        add	eax, dword ptr [esp + 0xc]
        mov	dword ptr [esi + 0xb0], eax
        jmp loc_0045616c
    loc_00456155:
        test	dl, 0x20
        lea	eax, [esi + 0xb0]
        jne loc_00456166
        lea	eax, [esi + 0xac]
    loc_00456166:
        mov	ecx, dword ptr [esp + 0x38]
        mov	dword ptr [eax], ecx
    loc_0045616c:
        mov	eax, dword ptr [esi + 0xac]
        mov	ecx, dword ptr [esi + 0xc4]
        cmp	eax, ecx
        jg loc_0045617e
        mov	eax, ecx
    loc_0045617e:
        mov	ecx, dword ptr [esi + 0xc8]
        mov	dword ptr [esi + 0xac], eax
        mov	eax, dword ptr [esi + 0xb0]
        cmp	eax, ecx
        jg loc_00456196
        mov	eax, ecx
    loc_00456196:
        mov	edx, dword ptr [esi + 0xac]
        mov	dword ptr [esi + 0xb0], eax
        mov	eax, dword ptr [esp + 0x34]
        mov	dword ptr [eax], edx
        mov	ecx, dword ptr [esi + 0xb0]
        pop	edi
        mov	dword ptr [eax + 0x4], ecx
        pop	esi
        add	esp, 0x28
        ret	0xc
    }
}


// [0x004582F0] ButtonPanel::vfunc_81 (35 bytes)
extern "C" void ext_00454DB0();
extern "C" void ext_006A5FE0();
extern "C" __declspec(naked) void __fastcall fn_004582F0(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0x8]
        push esi
        push edi
        mov edi, dword ptr [esp + 0x14]
        push edi
        push ebx
        mov esi, ecx
        call ext_00454DB0
        push edi
        push ebx
        mov ecx, esi
        call ext_006A5FE0
        pop edi
        pop esi
        pop ebx
        ret 0x8
    }
}

// [0x00454C30] ButtonPanel::vfunc_102 (212 bytes)
extern "C" int mem_00925670;
extern "C" void ext_00455F40();
extern "C" void ext_00456370();

extern "C" __declspec(naked) void __fastcall fn_00454C30(void* self, int edx_unused, int a1, int a2) {
    __asm {
        sub esp, 20h
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 2Ch]
        push esi
        mov esi, dword ptr [mem_00925670]
        push edi
        push ebp
        lea eax, [esp + 24h]
        push eax
        mov ebx, ecx
        call esi
        mov edi, dword ptr [esp + 38h]
        push edi
        push ebp
        mov ecx, ebx
        call ext_00456370
        push ebp
        lea ecx, [esp + 14h]
        push ecx
        call esi
        mov ecx, ebx
        call ext_00455F40
        test eax, eax
        jne L_454CDE
        mov edx, dword ptr [ebx]
        mov eax, dword ptr [edx + 1A4h]
        mov ecx, ebx
        call eax
        test eax, eax
        je L_454CA2
        cmp edi, 0E81Bh
        je L_454C8B
        cmp edi, 0E81Eh
        jne L_454CA2
L_454C8B:
        mov eax, dword ptr [esp + 10h]
        add eax, dword ptr [ebx + 108h]
        mov edi, dword ptr [esp + 14h]
        mov dword ptr [esp + 10h], eax
        lea esi, [eax - 0Dh]
        jmp L_454CBA
L_454CA2:
        mov eax, dword ptr [esp + 14h]
        add eax, dword ptr [ebx + 108h]
        mov esi, dword ptr [esp + 18h]
        mov dword ptr [esp + 14h], eax
        add esi, -0Ch
        lea edi, [eax - 0Dh]
L_454CBA:
        mov edx, dword ptr [ebx]
        mov eax, dword ptr [edx + 1A0h]
        mov ecx, ebx
        call eax
        test eax, eax
        je L_454CDE
        sub esi, dword ptr [esp + 20h]
        sub edi, dword ptr [esp + 24h]
        mov dword ptr [ebx + 114h], esi
        mov dword ptr [ebx + 118h], edi
L_454CDE:
        mov ecx, dword ptr [esp + 10h]
        mov edx, dword ptr [esp + 14h]
        mov eax, dword ptr [esp + 18h]
        mov dword ptr [ebp], ecx
        mov ecx, dword ptr [esp + 1Ch]
        pop edi
        mov dword ptr [ebp + 4], edx
        mov dword ptr [ebp + 8], eax
        pop esi
        mov dword ptr [ebp + 0Ch], ecx
        pop ebp
        pop ebx
        add esp, 20h
        ret 8
    }
}

// [0x004571B0] ButtonPanel::vfunc_100 (494 bytes)
extern "C" void ext_00455CB0();
extern "C" void ext_00455CD0();
extern "C" void ext_00456510();
extern "C" void ext_006A6004();
extern "C" void ext_006A61A8();
extern "C" void ext_006A67D2();
extern "C" int mem_00925690;
extern "C" int mem_0092564C;
extern "C" int mem_009256B4;
extern "C" int mem_009240C8;
extern "C" int mem_00925620;

extern "C" __declspec(naked) void __fastcall fn_004571B0(void* self) {
    __asm {
        sub esp, 0x50
        push ebx
        push esi
        push edi
        mov edi, ecx
        cmp dword ptr [edi + 0xe8], 0
        jne loc_457397
        call ext_00455CB0
        mov ecx, dword ptr [edi + 0x20]
        mov esi, dword ptr [mem_00925690]
        mov ebx, eax
        lea eax, [esp + 0x1c]
        push eax
        push ecx
        call esi
        mov eax, dword ptr [edi + 0x8c]
        mov ecx, dword ptr [eax + 0x20]
        lea edx, [esp + 0x3c]
        push edx
        push ecx
        call esi
        mov eax, dword ptr [edi + 0x88]
        mov ecx, dword ptr [eax + 0x20]
        lea edx, [esp + 0x4c]
        push edx
        push ecx
        call esi
        mov eax, dword ptr [edi + 0x98]
        mov ecx, dword ptr [esp + 0x1c]
        lea edx, [esp + 0xc]
        push edx
        mov edx, dword ptr [esp + 0x24]
        push eax
        sub esp, 0x10
        mov eax, esp
        mov dword ptr [eax], ecx
        mov ecx, dword ptr [esp + 0x3c]
        mov dword ptr [eax + 0x4], edx
        mov edx, dword ptr [esp + 0x40]
        mov dword ptr [eax + 0x8], ecx
        mov ecx, edi
        mov dword ptr [eax + 0xc], edx
        call ext_00456510
        mov ecx, edi
        call ext_00455CD0
        test eax, eax
        jne loc_4572AE
        test ebx, ebx
        je loc_457269
        mov eax, dword ptr [esp + 0x3c]
        mov edx, dword ptr [esp + 0x44]
        mov ecx, dword ptr [esp + 0x10]
        add eax, 1
        mov dword ptr [esp + 0x2c], eax
        mov eax, dword ptr [esp + 0x18]
        add edx, -1
        mov dword ptr [esp + 0x30], ecx
        mov dword ptr [esp + 0x34], edx
        mov dword ptr [esp + 0x38], eax
        jmp loc_45728F
    loc_457269:
        mov ecx, dword ptr [esp + 0xc]
        mov edx, dword ptr [esp + 0x40]
        mov eax, dword ptr [esp + 0x14]
        mov dword ptr [esp + 0x2c], ecx
        mov ecx, dword ptr [esp + 0x48]
        add edx, 1
        add ecx, -1
        mov dword ptr [esp + 0x30], edx
        mov dword ptr [esp + 0x34], eax
        mov dword ptr [esp + 0x38], ecx
    loc_45728F:
        lea eax, [esp + 0x2c]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [eax + 0x4]
        mov dword ptr [esp + 0xc], edx
        mov edx, dword ptr [eax + 0x8]
        mov eax, dword ptr [eax + 0xc]
        mov dword ptr [esp + 0x10], ecx
        mov dword ptr [esp + 0x14], edx
        mov dword ptr [esp + 0x18], eax
    loc_4572AE:
        mov eax, dword ptr [edi + 0x98]
        cmp eax, 0xa
        je loc_4572C2
        cmp eax, 0xb
        je loc_4572C2
        xor ecx, ecx
        jmp loc_4572C7
    loc_4572C2:
        mov ecx, 1
    loc_4572C7:
        mov esi, dword ptr [edi + 0xd4]
        sub esi, dword ptr [edi + 0xd8]
        test ecx, ecx
        je loc_4572E1
        mov edx, dword ptr [esp + 0xc]
        mov eax, dword ptr [esp + 0x14]
        jmp loc_4572E9
    loc_4572E1:
        mov edx, dword ptr [esp + 0x10]
        mov eax, dword ptr [esp + 0x18]
    loc_4572E9:
        add eax, edx
        cdq
        sub eax, edx
        sar eax, 1
        sub esi, eax
        mov edx, ecx
        neg edx
        sbb edx, edx
        not edx
        and edx, esi
        neg ecx
        sbb ecx, ecx
        push edx
        and ecx, esi
        mov esi, dword ptr [mem_0092564C]
        push ecx
        lea eax, [esp + 0x14]
        push eax
        call esi
        mov ecx, dword ptr [esp + 0x50]
        mov eax, dword ptr [esp + 0x4c]
        neg ecx
        push ecx
        neg eax
        push eax
        lea ecx, [esp + 0x14]
        push ecx
        call esi
        mov eax, dword ptr [edi + 0x88]
        mov edx, dword ptr [eax + 0x20]
        push 0x403
        push 0
        push edx
        call dword ptr [mem_009256B4]
        push eax
        call ext_006A6004
        mov esi, eax
        call ext_006A67D2
        push eax
        mov ecx, esi
        call ext_006A61A8
        mov ecx, dword ptr [esp + 0x18]
        mov edx, dword ptr [esp + 0x14]
        mov ebx, eax
        mov eax, dword ptr [esp + 0x10]
        push 0x5a0049
        sub ecx, eax
        push ecx
        mov ecx, dword ptr [esp + 0x14]
        sub edx, ecx
        push edx
        push eax
        mov eax, dword ptr [esi + 0x4]
        push ecx
        push eax
        call dword ptr [mem_009240C8]
        push ebx
        mov ecx, esi
        call ext_006A61A8
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [edi + 0x88]
        mov eax, dword ptr [edx + 0x20]
        push ecx
        push eax
        call dword ptr [mem_00925620]
    loc_457397:
        pop edi
        pop esi
        pop ebx
        add esp, 0x50
        ret
    }
}

// [0x00456740] ButtonPanel::vfunc_103 (531 bytes)
extern "C" void ext_00456680();
extern "C" void ext_00455C20();
extern "C" void ext_006A5E5A();
extern "C" void ext_006A63BE();
extern "C" void ext_006A60EE();
extern "C" int mem_00925690;
extern "C" int mem_0092564C;
extern "C" __declspec(naked) void __fastcall fn_00456740(void* self) {
    __asm {
        sub esp, 0x34
        push ebp
        push esi
        push edi
        mov ebp, ecx
        lea eax, [esp + 0x1c]
        push eax
        lea ecx, [esp + 0x1c]
        push ecx
        lea edx, [esp + 0x1c]
        push edx
        mov ecx, ebp
        mov dword ptr [esp + 0x1c], ebp
        call ext_00456680
        mov ecx, ebp
        call ext_00455CB0
        mov ecx, dword ptr [ebp + 0x8c]
        mov edx, dword ptr [ecx + 0x20]
        mov edi, eax
        mov dword ptr [esp + 0xc], eax
        lea eax, [esp + 0x30]
        neg edi
        push eax
        sbb edi, edi
        push edx
        mov dword ptr [esp + 0x24], 0
        and edi, -2
        call dword ptr [mem_00925690]
        mov esi, dword ptr [esp + 0x14]
        cmp esi, dword ptr [esp + 0x18]
        mov dword ptr [esp + 0x14], esi
        jg L_end
        push ebx
        jmp L_cond
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        nop
L_cond:
        mov eax, dword ptr [ebp + 0x8c]
        add eax, 0x98
        test esi, esi
        jl L_tail
        cmp esi, dword ptr [eax + 0x8]
        jge L_tail
        mov eax, dword ptr [eax + 0x4]
        mov ebx, dword ptr [eax + 4*esi]
        mov ecx, ebx
        shr ecx, 0x10
        je L_skip
        mov edx, dword ptr [ebx]
        mov eax, dword ptr [edx + 0x15c]
        mov ecx, ebx
        call eax
        test eax, eax
        je L_skip
        mov edx, dword ptr [ebx + 0x20]
        lea ecx, [esp + 0x24]
        push ecx
        push edx
        call dword ptr [mem_00925690]
        mov ecx, dword ptr [esp + 0x38]
        mov eax, dword ptr [esp + 0x34]
        neg ecx
        neg eax
        push ecx
        push eax
        lea eax, [esp + 0x2c]
        push eax
        call dword ptr [mem_0092564C]
        call ext_00455C20
        push eax
        mov ecx, ebx
        call ext_006A63BE
        test eax, eax
        je L_36
        cmp dword ptr [esp + 0x10], 0
        lea eax, [ebx + 0x9c]
        jne L_43d
        lea eax, [ebx + 0xa4]
L_43d:
        mov ecx, dword ptr [eax]
        mov eax, dword ptr [eax + 4]
        mov edx, dword ptr [esp + 0x24]
        mov esi, dword ptr [esp + 0x28]
        add ecx, edx
        add eax, esi
        mov dword ptr [esp + 0x24], edx
        mov dword ptr [esp + 0x28], esi
        mov dword ptr [esp + 0x2c], ecx
        mov dword ptr [esp + 0x30], eax
        jmp L_870
L_36:
        mov eax, dword ptr [esp + 0x30]
        mov ecx, dword ptr [esp + 0x2c]
        mov esi, dword ptr [esp + 0x28]
        mov edx, dword ptr [esp + 0x24]
L_870:
        cmp dword ptr [esp + 0x10], 0
        mov ebp, edx
        jne L_87b
        mov ebp, esi
L_87b:
        cmp ebp, edi
        je L_906
        cmp dword ptr [esp + 0x10], 0
        jne L_8a5
        mov ecx, edi
        sub ecx, esi
        sub ecx, 2
        push ecx
        push 0
        lea edx, [esp + 0x2c]
        push edx
        call dword ptr [mem_0092564C]
        mov ebp, dword ptr [esp + 0x14]
        jmp L_8cb
L_8a5:
        mov ebp, dword ptr [esp + 0x14]
        mov eax, edi
        sub eax, edx
        cmp dword ptr [ebp + 0xf4], 0xe81b
        lea ecx, [esp + 0x24]
        jne L_8c1
        push -2
        jmp L_8c3
L_8c1:
        push 0
L_8c3:
        push eax
        push ecx
        call dword ptr [mem_0092564C]
L_8cb:
        mov eax, dword ptr [esp + 0x28]
        mov edx, dword ptr [esp + 0x30]
        mov ecx, dword ptr [esp + 0x24]
        push 1
        sub edx, eax
        push edx
        mov edx, dword ptr [esp + 0x34]
        sub edx, ecx
        push edx
        push eax
        push ecx
        mov ecx, ebx
        call ext_006A5E5A
        mov eax, dword ptr [esp + 0x30]
        mov ecx, dword ptr [esp + 0x2c]
        mov esi, dword ptr [esp + 0x28]
        mov edx, dword ptr [esp + 0x24]
        mov dword ptr [esp + 0x20], 1
        jmp L_90a
L_906:
        mov ebp, dword ptr [esp + 0x14]
L_90a:
        cmp dword ptr [esp + 0x10], 0
        je L_917
        sub ecx, edx
        mov eax, ecx
        jmp L_919
L_917:
        sub eax, esi
L_919:
        mov esi, dword ptr [esp + 0x18]
        lea edi, [edi + eax - 2]
L_skip:
        add esi, 1
        cmp esi, dword ptr [esp + 0x1c]
        mov dword ptr [esp + 0x18], esi
        jle L_cond
        cmp dword ptr [esp + 0x20], 0
        je L_946
        mov ebp, dword ptr [ebp + 0x88]
        or dword ptr [ebp + 0xd0], 0xc
L_946:
        pop ebx
L_end:
        pop edi
        pop esi
        pop ebp
        add esp, 0x34
        ret
L_tail:
        jmp ext_006A60EE
    }
}
