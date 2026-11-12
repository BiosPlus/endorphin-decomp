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
