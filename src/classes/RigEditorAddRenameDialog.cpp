// Decompiled translation unit: src/classes/RigEditorAddRenameDialog.cpp

// [0x0044FD90] RigEditorAddRenameDialog::vfunc_63 (151 bytes)
extern "C" void ext_006A5F44();

extern "C" void __fastcall fn_0044FD90(void* self, int edx_unused, int a1) {
    typedef void (__stdcall *DdxFn)(int, int, void*);
    char* p = (char*)self;
    DdxFn ddx = (DdxFn)ext_006A5F44;
    ddx(a1, 0x4f1, p + 0xd4);
    ddx(a1, 0x4f2, p + 0x128);
    ddx(a1, 0x4f3, p + 0x17c);
    ddx(a1, 0x81b5, p + 0x1d0);
    ddx(a1, 0x81b6, p + 0x224);
    ddx(a1, 0x4f0, p + 0x278);
    ddx(a1, 0x1, p + 0x2cc);
    ddx(a1, 0x2, p + 0x340);
}

// [0x0044FE30] RigEditorAddRenameDialog::vfunc_89 (214 bytes)
extern "C" void ext_006A6010();
extern "C" void ext_006A6E9E();
extern "C" int mem_0093A0CC;
extern "C" int mem_0093A0C8;
extern "C" int mem_0093A0C4;

extern "C" __declspec(naked) int __fastcall fn_0044FE30(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        push esi
        mov esi, dword ptr [esp+0xc]
        test esi, esi
        push edi
        mov edi, ecx
        je L_else
        push 0x0
        push 0xa2e4d8
        push 0xa2e034
        push 0x0
        push esi
        call ext_006A6E9E
        add esp, 0x14
        test eax, eax
        jne L_then
        push eax
        push 0xa2e474
        push 0xa2e034
        push eax
        push esi
        call ext_006A6E9E
        add esp, 0x14
        test eax, eax
        jne L_then
        push eax
        push 0xa2e01c
        push 0xa2e034
        push eax
        push esi
        call ext_006A6E9E
        add esp, 0x14
        test eax, eax
        je L_else
    L_then:
        mov esi, dword ptr [esp+0xc]
        push 0x1
        mov ecx, esi
        call ext_006A6010
        mov ecx, dword ptr [mem_0093A0CC]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax+0x38]
        push ecx
        mov ecx, esi
        call edx
        mov ecx, dword ptr [mem_0093A0C8]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax+0x34]
        push ecx
        mov ecx, esi
        call edx
        lea eax, [edi+0x3bc]
        jmp L_join
    L_else:
        mov esi, dword ptr [esp+0xc]
        push 0x1
        mov ecx, esi
        call ext_006A6010
        mov ecx, dword ptr [mem_0093A0CC]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax+0x38]
        push ecx
        mov ecx, esi
        call edx
        mov ecx, dword ptr [mem_0093A0C4]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax+0x34]
        push ecx
        mov ecx, esi
        call edx
        lea eax, [edi+0x3b4]
    L_join:
        test eax, eax
        jne L_nonnull
        pop edi
        pop esi
        ret 0xc
    L_nonnull:
        mov eax, dword ptr [eax+0x4]
        pop edi
        pop esi
        ret 0xc
    }
}

// [0x0044FCA0] RigEditorAddRenameDialog::vfunc_84 (226 bytes)
extern "C" void ext_0044D030();
extern "C" void* ext_00584A10();
extern "C" void ext_006A5E5A();
extern "C" void ext_006A5F50();
extern "C" void ext_006A5FC8();
extern "C" void ext_006A60D0();
extern "C" int mem_00924FF0;
extern "C" int mem_00925694;
extern "C" int mem_00925690;

struct WinRect {
    int left, top, right, bottom;
};

extern "C" int __fastcall fn_0044FCA0(void* self) {
    char* p = (char*)self;
    typedef void (__thiscall *VoidThiscall)(void*);
    typedef void (__thiscall *SetTextThiscall)(void*, const char*);
    typedef const char* (__thiscall *CStrThiscall)(void*);
    typedef void* (__thiscall *Sub584A10)(void*);
    typedef int (__stdcall *SendMsgFn)(void*, unsigned int, unsigned int, int);
    typedef int (__stdcall *GetWindowRectFn)(void*, WinRect*);
    typedef void (__thiscall *MoveWinFn)(void*, int, int, int, int, int);

    ((VoidThiscall)ext_006A5FC8)(self);

    ((SetTextThiscall)ext_006A5F50)(self, (*(CStrThiscall*)&mem_00924FF0)(p + 0x78));

    Sub584A10 sub584a10 = (Sub584A10)ext_00584A10;
    char* eax = (char*)(*(void**)(p + 0x74));
    void* s74 = sub584a10(&eax[4]);
    ((SetTextThiscall)ext_006A5F50)(p + 0x1d0, (*(CStrThiscall*)&mem_00924FF0)(s74));

    ((SetTextThiscall)ext_006A5F50)(p + 0x224, (*(CStrThiscall*)&mem_00924FF0)(p + 0x94));

    void* edi = p + 0x278;
    ((SetTextThiscall)ext_006A5F50)(edi, (*(CStrThiscall*)&mem_00924FF0)(p + 0xb0));

    ((VoidThiscall)ext_006A60D0)(edi);

    SendMsgFn sendMsg = *(SendMsgFn*)&mem_00925694;
    sendMsg(*(void**)((char*)edi + 0x20), 0xb1, 0, -1);
    sendMsg(*(void**)((char*)edi + 0x20), 0xb7, 0, 0);

    WinRect rc;
    (*(GetWindowRectFn*)&mem_00925690)(*(void**)(p + 0x20), &rc);

    ((MoveWinFn)ext_006A5E5A)(self, *(int*)(p + 0xcc), *(int*)(p + 0xd0), rc.right - rc.left, rc.bottom - rc.top, 1);

    ((VoidThiscall)ext_0044D030)(self);
    return 0;
}
