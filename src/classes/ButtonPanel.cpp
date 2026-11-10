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
