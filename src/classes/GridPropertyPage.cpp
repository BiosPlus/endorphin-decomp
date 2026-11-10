// Decompiled translation unit: src/classes/GridPropertyPage.cpp

extern "C" void ext_006A5FC8();
extern "C" void ext_0052EE00();
extern "C" void ext_006A608E();
extern "C" void ext_006A61E4();
extern "C" int mem_0092561C;

// [0x0041BB70] GridPropertyPage::vfunc_84 (54 bytes)
extern "C" int __fastcall fn_0041BB70(void* self) {
    typedef void* (__thiscall *PFN_getter)(void*);
    typedef void* (__cdecl *PFN_plain)();
    typedef unsigned char (__thiscall *PFN_vcall)(void*);
    typedef void (__thiscall *PFN_sink)(void*, int);

    void* wnd = ((PFN_getter)ext_006A5FC8)(self);
    void* obj = ((PFN_plain)ext_0052EE00)();
    unsigned char r = ((PFN_vcall)(*(void***)obj)[0x138 / 4])(obj);
    *(int*)((char*)self + 0x1f0) = (r == 0) ? 1 : 0;
    ((PFN_sink)ext_006A608E)(self, 0);
    (void)wnd;
    return 1;
}

// [0x0041BBB0] GridPropertyPage::vfunc_86 (64 bytes)
extern "C" __declspec(naked) void __fastcall fn_0041BBB0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x20]
        push eax
        call dword ptr [mem_0092561C]
        test eax, eax
        je done_0041BBB0
        push 1
        mov ecx, esi
        call ext_006A608E
        call ext_0052EE00
        cmp dword ptr [esi + 0x1f0], 0x0
        mov edx, dword ptr [eax]
        mov edx, dword ptr [edx + 0xb0]
        sete cl
        push ecx
        mov ecx, eax
        call edx
        mov ecx, esi
        pop esi
        jmp ext_006A61E4
    done_0041BBB0:
        pop esi
        ret
    }
}
