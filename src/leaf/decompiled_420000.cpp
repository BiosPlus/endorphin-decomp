// Decompiled translation unit: src/leaf/decompiled_420000.cpp

#include <string>

// [0x004276B0] sub_004276B0 (32 bytes)
extern "C" int mem_00924FE0;

extern "C" __declspec(naked) void __cdecl fn_004276B0(void) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0xc]
        push esi
        mov esi, dword ptr [esp + 0xc]
        push eax
        mov ecx, esi
        mov dword ptr [esp + 8], 0
        call dword ptr [mem_00924FE0]
        mov eax, esi
        pop esi
        pop ecx
        ret
    }
}

// [0x0042FB40] sub_0042FB40 (17 bytes)
extern "C" void ext_00465B40();

extern "C" __declspec(naked) void __fastcall fn_0042FB40(void* self) {
    __asm {
        call ext_00465B40
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 0xd8]
        jmp eax
    }
}

// [0x0042FB60] sub_0042FB60 (17 bytes)
extern "C" __declspec(naked) void __fastcall fn_0042FB60(void* self) {
    __asm {
        call ext_00465B40
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 0xd4]
        jmp eax
    }
}

// [0x0042FB80] sub_0042FB80 (17 bytes)
extern "C" __declspec(naked) void __fastcall fn_0042FB80(void* self) {
    __asm {
        call ext_00465B40
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 0xc8]
        jmp eax
    }
}

// [0x0042FBA0] sub_0042FBA0 (17 bytes)
extern "C" __declspec(naked) void __fastcall fn_0042FBA0(void* self) {
    __asm {
        call ext_00465B40
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 0xc4]
        jmp eax
    }
}

// [0x0042FBC0] sub_0042FBC0 (17 bytes)
extern "C" __declspec(naked) void __fastcall fn_0042FBC0(void* self) {
    __asm {
        call ext_00465B40
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 0xc0]
        jmp eax
    }
}

// [0x0042FBE0] sub_0042FBE0 (17 bytes)
extern "C" __declspec(naked) void __fastcall fn_0042FBE0(void* self) {
    __asm {
        call ext_00465B40
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 0xbc]
        jmp eax
    }
}

// [0x0042FC00] sub_0042FC00 (17 bytes)
extern "C" __declspec(naked) void __fastcall fn_0042FC00(void* self) {
    __asm {
        call ext_00465B40
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 0xb8]
        jmp eax
    }
}

// [0x0042FDB0] sub_0042FDB0 (17 bytes)
extern "C" __declspec(naked) void __fastcall fn_0042FDB0(void* self) {
    __asm {
        call ext_00465B40
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 0x1e0]
        jmp eax
    }
}

// [0x0042FE70] sub_0042FE70 (17 bytes)
extern "C" void ext_00465B40();

extern "C" __declspec(naked) void __fastcall fn_0042FE70(void* self) {
    __asm {
        call ext_00465B40
        mov edx, dword ptr [eax]
        mov edx, dword ptr [edx + 0xf0]
        mov ecx, eax
        jmp edx
    }
}

// [0x0042FE90] sub_0042FE90 (17 bytes)
extern "C" __declspec(naked) void __fastcall fn_0042FE90(void* self) {
    __asm {
        call ext_00465B40
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 0xf4]
        jmp eax
    }
}

// [0x00428A40] sub_00428A40 (18 bytes)
extern "C" void ext_00428050();
extern "C" __declspec(naked) int __fastcall fn_00428A40(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push eax
        add ecx, 0x14
        call ext_00428050
        mov eax, dword ptr [eax]
        ret 0x4
    }
}

// [0x0042FDD0] sub_0042FDD0 (21 bytes)
extern "C" void ext_00465B30();
extern "C" void ext_00468660();

extern "C" __declspec(naked) void __fastcall fn_0042FDD0(void* self) {
    __asm {
        call ext_00465B30
        mov ecx, eax
        call ext_00468660
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 14h]
        jmp eax
    }
}

// [0x0042FAC0] sub_0042FAC0 (27 bytes)
extern "C" __declspec(naked) void __fastcall fn_0042FAC0(void* self) {
    __asm {
        call ext_00465B30
        mov ecx, eax
        call ext_00468660
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 0xdc]
        push 0x4
        call eax
        ret
    }
}

// [0x0042FAE0] sub_0042FAE0 (27 bytes)
extern "C" void ext_00465B30();
extern "C" void ext_00468660();
extern "C" __declspec(naked) void __fastcall fn_0042FAE0(void* self) {
    __asm {
        call ext_00465B30
        mov ecx, eax
        call ext_00468660
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 0xdc]
        push 2
        call eax
        ret
    }
}

// [0x0042FB00] sub_0042FB00 (27 bytes)
extern "C" void ext_00465B30();
extern "C" void ext_00468660();
extern "C" __declspec(naked) void __fastcall fn_0042FB00(void* self) {
    __asm {
        call ext_00465B30
        mov ecx, eax
        call ext_00468660
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 0xdc]
        push 0x1
        call eax
        ret
    }
}

// [0x0042FB20] sub_0042FB20 (27 bytes)
extern "C" void ext_00465B30();
extern "C" void ext_00468660();
extern "C" __declspec(naked) void __fastcall fn_0042FB20(void* self) {
    __asm {
        call ext_00465B30
        mov ecx, eax
        call ext_00468660
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 0xdc]
        push 0x3
        call eax
        ret
    }
}

// [0x00427B50] sub_00427B50 (36 bytes)
extern "C" int mem_00925134;

extern "C" void* __fastcall fn_00427B50(char* self, int edx_unused, int* out) {
    int* esi = (int*)(self + 0x24);
    int edi = esi[1];
    if ((unsigned int)edi > (unsigned int)esi[2]) {
        ((void (__cdecl*)())mem_00925134)();
    }
    out[0] = (int)esi;
    out[1] = (int)esi;
    out[2] = edi;
    return out;
}

// [0x00421D80] sub_00421D80 (37 bytes)
extern "C" int mem_00924FD4;
extern "C" int mem_00924ED0;

extern "C" void __fastcall fn_00421D80(void* self, int edx_unused, const char* a1) {
    typedef void* (__thiscall *AssignFn)(void*, const char*);
    void* str = (char*)self + 0xc8;
    ((AssignFn)mem_00924FD4)(str, "Command: ");
    ((AssignFn)mem_00924ED0)(str, a1);
}

// [0x00421DB0] sub_00421DB0 (37 bytes)
extern "C" int mem_00924FD4;
extern "C" int mem_00924FD8;

extern "C" void __fastcall fn_00421DB0(void* self, int edx_unused, const char* a1) {
    typedef void* (__thiscall *AssignFn)(void*, const char*);
    typedef void* (__thiscall *AppendFn)(void*, const void*);
    void* str = (char*)self + 0x100;
    ((AssignFn)mem_00924FD4)(str, "");
    ((AppendFn)mem_00924FD8)(str, a1);
}

// [0x00425E30] sub_00425E30 (38 bytes)
extern "C" void* __fastcall fn_00425E30(void* self) {
    void (__cdecl *inv)() = (void (__cdecl*)())mem_00925134;
    char* s = (char*)self;
    if (*(char**)s == 0) {
        inv();
    }
    char* hdr = *(char**)s;
    if (!(*(unsigned*)(s + 4) < *(unsigned*)(hdr + 8))) {
        inv();
    }
    *(unsigned*)(s + 4) += 4;
    return self;
}

// [0x004276D0] sub_004276D0 (46 bytes)
extern "C" int mem_00925134;

extern "C" int __fastcall fn_004276D0(void* self) {
    typedef void (*invalid_fn)(void);
    unsigned int* s = (unsigned int*)self;
    invalid_fn bad = (invalid_fn)mem_00925134;
    if (s[1] == 0) {
        bad();
    }
    unsigned int* c = (unsigned int*)s[1];
    unsigned int pos = s[2];
    if (pos >= c[2]) {
        bad();
    }
    return *(int*)s[2];
}

// [0x0042FC30] sub_0042FC30 (48 bytes)
extern "C" __declspec(naked) void __fastcall fn_0042FC30(void* self) {
    __asm {
        push esi
        call ext_00465B40
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 0x9c]
        call eax
        mov esi, eax
        call ext_00465B40
        mov edx, dword ptr [eax]
        mov edx, dword ptr [edx + 0xe0]
        push 0
        lea ecx, [esi + 0x3c]
        push ecx
        push esi
        push 6
        mov ecx, eax
        call edx
        pop esi
        ret
    }
}

// [0x0042FC60] sub_0042FC60 (48 bytes)
extern "C" void ext_00465B40();
extern "C" void __fastcall fn_0042FC60(void* self) {
    typedef void* (__cdecl *GetFn)();
    typedef void* (__thiscall *Fn0)(void*);
    typedef void (__thiscall *Fn1)(void*, int, void*, void*, int);

    void* obj = ((GetFn)ext_00465B40)();
    void** vt = *(void***)obj;
    void* esi = ((Fn0)vt[0x9c / 4])(obj);
    void* obj2 = ((GetFn)ext_00465B40)();
    void** vt2 = *(void***)obj2;
    ((Fn1)vt2[0xe0 / 4])(obj2, 2, esi, (char*)esi + 0x3c, 0);
}

// [0x00422B20] sub_00422B20 (53 bytes)
extern "C" void ext_006A62FE();
extern "C" int mem_00925618;

extern "C" __declspec(naked) int __fastcall fn_00422B20(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        push esi
        mov esi, ecx
        call ext_006A62FE
        test eax, eax
        je short L_no_obj
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 0x7c]
        call eax
        jmp short L_after
    L_no_obj:
        xor eax, eax
    L_after:
        mov ecx, dword ptr [esi + 0x84]
        mov edx, dword ptr [eax + 0x20]
        push 0
        push ecx
        push 0x111
        push edx
        call dword ptr [mem_00925618]
        pop esi
        ret 0xc
    }
}

// [0x0042EC80] sub_0042EC80 (54 bytes)
extern "C" void ext_006A5C5C();
extern "C" void ext_006A64A2();
extern "C" int mem_0092F51C;
extern "C" __declspec(naked) void __fastcall fn_0042EC80(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov dword ptr [esi], offset mem_0092F51C
        mov eax, dword ptr [esi + 0x58]
        test eax, eax
        je skip_release
        push eax
        call ext_006A5C5C
        add esp, 4
    skip_release:
        mov dword ptr [esi + 0x58], 0
        mov dword ptr [esi + 0x5c], 0
        mov dword ptr [esi + 0x60], 0
        mov ecx, esi
        pop esi
        jmp ext_006A64A2
    }
}

// [0x0042FC90] sub_0042FC90 (54 bytes)
extern "C" void ext_00465B40();

extern "C" __declspec(naked) void __fastcall fn_0042FC90(void* self) {
    __asm {
        push ebx
        push esi
        push edi
        call ext_00465B40
        mov edi, eax
        call ext_00465B40
        mov ebx, eax
        mov eax, dword ptr [edi]
        mov esi, dword ptr [ebx]
        mov edx, dword ptr [eax + 0x9c]
        push 0x0
        push 0x0
        mov ecx, edi
        add esi, 0xe0
        call edx
        push eax
        mov eax, dword ptr [esi]
        push 0x5
        mov ecx, ebx
        call eax
        pop edi
        pop esi
        pop ebx
        ret
    }
}

// [0x0042FD30] sub_0042FD30 (54 bytes)
extern "C" void ext_00465B40();

extern "C" __declspec(naked) void __fastcall fn_0042FD30(void* self) {
    __asm {
        push ebx
        push esi
        push edi
        call ext_00465B40
        mov edi, eax
        call ext_00465B40
        mov ebx, eax
        mov eax, dword ptr [edi]
        mov esi, dword ptr [ebx]
        mov edx, dword ptr [eax + 0x9c]
        push 0x0
        push 0x0
        mov ecx, edi
        add esi, 0xe0
        call edx
        push eax
        mov eax, dword ptr [esi]
        push 0x3
        mov ecx, ebx
        call eax
        pop edi
        pop esi
        pop ebx
        ret
    }
}

// [0x0042FD70] sub_0042FD70 (54 bytes)
extern "C" __declspec(naked) void __fastcall fn_0042FD70(void* self) {
    __asm {
        push ebx
        push esi
        push edi
        call ext_00465B40
        mov edi, eax
        call ext_00465B40
        mov ebx, eax
        mov eax, dword ptr [edi]
        mov esi, dword ptr [ebx]
        mov edx, dword ptr [eax + 0x9c]
        push 0x0
        push 0x0
        mov ecx, edi
        add esi, 0xe0
        call edx
        push eax
        mov eax, dword ptr [esi]
        push 0x0
        mov ecx, ebx
        call eax
        pop edi
        pop esi
        pop ebx
        ret
    }
}

// [0x00427AE0] sub_00427AE0 (55 bytes)
extern "C" void ext_006A5C62();
extern "C" void* __fastcall fn_00427AE0(void* self) {
    char* p = (char*)((void* (__cdecl*)(unsigned int))ext_006A5C62)(0x5c);
    if (p) {
        *(int*)p = 0;
    }
    char* q = p + 4;
    if (q) {
        *(int*)q = 0;
    }
    char* r = p + 8;
    if (r) {
        *(int*)r = 0;
    }
    p[0x58] = 1;
    p[0x59] = 0;
    return p;
}

// [0x004205B0] sub_004205B0 (70 bytes)
extern "C" int mem_00924EF4;

extern "C" __declspec(naked) void* __fastcall fn_004205B0(void* self, int edx_unused, const void* key) {
    __asm {
        mov eax, dword ptr [ecx + 0x4]
        push esi
        mov esi, dword ptr [eax + 0x4]
        cmp byte ptr [esi + 0x59], 0x0
        push edi
        mov edi, eax
        jne done_early
        push ebx
        mov ebx, dword ptr [esp + 0x10]
        push ebp
        mov ebp, dword ptr [mem_00924EF4]
        _emit 0x8d
        _emit 0x64
        _emit 0x24
        _emit 0x00
    loop_top:
        lea eax, [esi + 0xc]
        push ebx
        push eax
        call ebp
        add esp, 0x8
        test al, al
        je go_left
        mov esi, dword ptr [esi + 0x8]
        jmp loop_check
    go_left:
        mov edi, esi
        mov esi, dword ptr [esi]
    loop_check:
        cmp byte ptr [esi + 0x59], 0x0
        je loop_top
        pop ebp
        mov eax, edi
        pop ebx
    done_early:
        pop edi
        pop esi
        ret 0x4
    }
}

// [0x00428A60] sub_00428A60 (72 bytes)
extern "C" void ext_006A5C5C();
extern "C" int mem_00924FF4;
extern "C" __declspec(naked) void __fastcall fn_00428A60(void* self) {
    __asm {
        push ebx
        mov ebx, ecx
        push esi
        mov esi, dword ptr [ebx + 4]
        test esi, esi
        je done
        push edi
        mov edi, dword ptr [ebx + 8]
        cmp esi, edi
        je skip
    lp:
        lea ecx, [esi + 8]
        call dword ptr [mem_00924FF4]
        add esi, 0x24
        cmp esi, edi
        jne lp
    skip:
        mov eax, dword ptr [ebx + 4]
        push eax
        call ext_006A5C5C
        add esp, 4
        pop edi
    done:
        pop esi
        mov dword ptr [ebx + 4], 0
        mov dword ptr [ebx + 8], 0
        mov dword ptr [ebx + 0xc], 0
        pop ebx
        ret
    }
}

// [0x00422C80] sub_00422C80 (77 bytes)
extern "C" int mem_00924FDC;
extern "C" int mem_00924FF4;
// s: by-value std::string (28 bytes on the stack, callee-cleaned via ret 0x1c); declared raw because naked functions cannot take unwinding types.
extern "C" __declspec(naked) void __fastcall fn_00422C80(void* self, int edx_unused, void* s) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -0x1
        push 0x881709
        push eax
        mov dword ptr fs:[0x0], esp
        lea eax, [esp + 0x10]
        push eax
        add ecx, 0x50
        mov dword ptr [esp + 0xc], 0x0
        call dword ptr [mem_00924FDC]
        lea ecx, [esp + 0x10]
        mov dword ptr [esp + 0x8], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret 0x1c
    }
}
