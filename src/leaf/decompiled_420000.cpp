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

// [0x00427760] sub_00427760 (78 bytes)
extern "C" void __fastcall fn_00427760(void* self, int edx_unused, void* node) {
    char* n = (char*)node;
    char* s = (char*)self;
    char* p = *(char**)(n + 0x8);
    *(char**)(n + 0x8) = *(char**)p;
    char* q = *(char**)p;
    if (*(q + 0x59) == 0) {
        *(char**)(q + 0x4) = n;
    }
    *(char**)(p + 0x4) = *(char**)(n + 0x4);
    char* c = *(char**)(s + 0x4);
    if (n == *(char**)(c + 0x4)) {
        *(char**)(c + 0x4) = p;
        *(char**)p = n;
        *(char**)(n + 0x4) = p;
        return;
    }
    char* c2 = *(char**)(n + 0x4);
    if (n == *(char**)c2) {
        *(char**)c2 = p;
    } else {
        *(char**)(c2 + 0x8) = p;
    }
    *(char**)p = n;
    *(char**)(n + 0x4) = p;
}

// [0x00429100] sub_00429100 (78 bytes)
extern "C" void ext_00428A60();
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00429100(void* self) {
    __asm {
        push -1
        push 0x00878EEB
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        lea ecx, [esi + 0x14]
        mov dword ptr [esp + 0x10], 0x0
        call dword ptr [mem_00924FF4]
        lea ecx, [esi + 0x4]
        mov dword ptr [esp + 0x10], -1
        call ext_00428A60
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x004291A0] sub_004291A0 (77 bytes)
extern "C" void ext_00429100();
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_004291A0(void* self) {
    __asm {
        push -1
        push 0x00872C79
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        lea ecx, [esi + 0x1c]
        mov dword ptr [esp + 0x10], 0x0
        call ext_00429100
        mov ecx, esi
        mov dword ptr [esp + 0x10], -1
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00429150] sub_00429150 (79 bytes)
extern "C" int mem_00924FE8;

extern "C" __declspec(naked) void* __fastcall fn_00429150(void* self, int edx_unused, int a1) {
    __asm {
        push -1
        push 0x878eeb
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        xor eax, eax
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        mov dword ptr [esi + 0x8], eax
        mov dword ptr [esi + 0xc], eax
        mov dword ptr [esi + 0x10], eax
        lea ecx, [esi + 0x14]
        mov dword ptr [esp + 0x10], eax
        call dword ptr [mem_00924FE8]
        mov eax, dword ptr [esp + 0x18]
        mov ecx, dword ptr [esp + 0x8]
        mov dword ptr [esi], eax
        mov eax, esi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret 0x4
    }
}

// [0x00427810] sub_00427810 (80 bytes)
struct LB36Entry_00427810 {
    unsigned int key;
    unsigned int rest[8];
};

extern "C" LB36Entry_00427810* __cdecl fn_00427810(LB36Entry_00427810* first, LB36Entry_00427810* last, const unsigned int* value) {
    LB36Entry_00427810* it = first;
    int count = (int)(last - first);
    if (count > 0) {
        unsigned int key = *value;
        do {
            int half = count / 2;
            LB36Entry_00427810* mid = it + half;
            if (mid->key < key) {
                it = mid + 1;
                count = count - half - 1;
            } else {
                count = half;
            }
        } while (count > 0);
    }
    return it;
}

// [0x00427390] sub_00427390 (82 bytes)
extern "C" void __fastcall fn_00427390(char* self, int edx_unused, char* x) {
    char* n = *(char**)x;
    *(char**)x = *(char**)(n + 0x8);
    char* m = *(char**)(n + 0x8);
    if (m[0x59] == 0) {
        *(char**)(m + 0x4) = x;
    }
    *(char**)(n + 0x4) = *(char**)(x + 0x4);
    char* h = *(char**)(self + 0x4);
    if (x == *(char**)(h + 0x4)) {
        *(char**)(h + 0x4) = n;
        *(char**)(n + 0x8) = x;
        *(char**)(x + 0x4) = n;
        return;
    }
    char* q = *(char**)(x + 0x4);
    if (x == *(char**)(q + 0x8)) {
        *(char**)(q + 0x8) = n;
        *(char**)(n + 0x8) = x;
        *(char**)(x + 0x4) = n;
        return;
    }
    *(char**)q = n;
    *(char**)(n + 0x8) = x;
    *(char**)(x + 0x4) = n;
}

// [0x00427480] sub_00427480 (82 bytes)
extern "C" int mem_00924FDC;

extern "C" __declspec(naked) void __cdecl fn_00427480(void) {
    __asm {
        push edi
        mov edi, dword ptr [esp + 0x8]
        cmp edi, dword ptr [esp + 0xc]
        je done
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 0x18]
        push esi
        lea ebx, [ebp + 0x4]
        lea esi, [edi + 0x5]
    loop_top:
        mov eax, dword ptr [ebp]
        lea ecx, [esi - 0x1]
        cmp ecx, ebx
        mov dword ptr [edi], eax
        je skip
        mov dl, byte ptr [ebx]
        mov byte ptr [esi - 0x1], dl
        mov al, byte ptr [ebx + 0x2]
        mov byte ptr [esi + 0x1], al
        mov cl, byte ptr [ebx + 0x1]
        lea edx, [ebx + 0x4]
        mov byte ptr [esi], cl
        push edx
        lea ecx, [esi + 0x3]
        call dword ptr [mem_00924FDC]
    skip:
        add edi, 0x24
        add esi, 0x24
        cmp edi, dword ptr [esp + 0x18]
        jne loop_top
        pop esi
        pop ebp
        pop ebx
    done:
        pop edi
        ret
    }
}

extern "C" void ext_006A643C();
extern "C" int mem_00925688;

// [0x00422C00] sub_00422C00 (82 bytes)
extern "C" __declspec(naked) void __fastcall fn_00422C00(void* self) {
    __asm {
        push ebx
        push esi
        mov esi, ecx
        mov bl, byte ptr [esi + 0x8d]
        call ext_006A643C
        test eax, 0x1000
        je L_end
        mov eax, dword ptr [esp + 0xc]
        xor ecx, ecx
        sub eax, ecx
        je L_zero
        sub eax, 1
        je L_one
        sub eax, 1
    L_zero:
        mov byte ptr [esi + 0x8d], cl
    L_cmp:
        cmp bl, byte ptr [esi + 0x8d]
        je L_end
        mov eax, dword ptr [esi + 0x20]
        push ecx
        push ecx
        push eax
        call dword ptr [mem_00925688]
    L_end:
        pop esi
        xor eax, eax
        pop ebx
        ret 8
    L_one:
        mov byte ptr [esi + 0x8d], 1
        jmp L_cmp
    }
}

// [0x00420070] sub_00420070 (77 bytes)
extern "C" void ext_00401BB0();
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00420070(void* self) {
    __asm {
        push -1
        push 0x00877BF8
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        lea ecx, [esi + 0x28]
        mov dword ptr [esp + 0x10], 0x0
        call dword ptr [mem_00924FF4]
        mov ecx, esi
        mov dword ptr [esp + 0x10], -1
        call ext_00401BB0
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x0042F6F0] sub_0042F6F0 (89 bytes)
extern "C" int mem_00924EA8;
extern "C" int mem_00924ED0;
extern "C" int mem_00924FD8;
extern "C" int mem_0092F880;
extern "C" int mem_0092F878;
extern "C" int mem_0092F870;
extern "C" __declspec(naked) void __fastcall fn_0042F6F0(void* self, int edx_unused, void* out) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp+0xc]
        mov esi, ecx
        mov ecx, edi
        call dword ptr [mem_00924EA8]
        cmp byte ptr [esi], 0
        je skip1
        push offset mem_0092F880
        mov ecx, edi
        call dword ptr [mem_00924ED0]
skip1:
        cmp byte ptr [esi+2], 0
        je skip2
        push offset mem_0092F878
        mov ecx, edi
        call dword ptr [mem_00924ED0]
skip2:
        cmp byte ptr [esi+1], 0
        je skip3
        push offset mem_0092F870
        mov ecx, edi
        call dword ptr [mem_00924ED0]
skip3:
        add esi, 4
        push esi
        mov ecx, edi
        call dword ptr [mem_00924FD8]
        pop edi
        pop esi
        ret 4
    }
}

// [0x004207F0] sub_004207F0 (88 bytes)
extern "C" void ext_00401C60();
extern "C" int mem_00924FE0;

extern "C" __declspec(naked) void __fastcall fn_004207F0(void* self, int edx_unused, const void* a1) {
    __asm {
        push -1
        push 0x877bf8
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        push edi
        mov edi, dword ptr [esp + 0x1c]
        mov esi, ecx
        push edi
        mov dword ptr [esp + 0xc], esi
        call ext_00401C60
        add edi, 0x28
        push edi
        lea ecx, [esi + 0x28]
        mov dword ptr [esp + 0x18], 0x0
        mov dword ptr [esi], 0x92e2e0
        call dword ptr [mem_00924FE0]
        mov ecx, dword ptr [esp + 0xc]
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret 0x4
    }
}

// [0x004225E0] sub_004225E0 (89 bytes)
extern "C" void ext_006A5C6E();
extern "C" int mem_0092E8F4;
extern "C" void* __fastcall fn_004225E0(void* self) {
    char* p = (char*)self;
    ((void (__cdecl*)())ext_006A5C6E)();
    *(int*)(p + 0x54) = 0;
    *(int*)(p + 0x58) = 0;
    *(int*)(p + 0x5c) = 0;
    *(int*)(p + 0x60) = 0;
    *(int*)(p + 0x64) = 0;
    *(int*)(p + 0x68) = 0;
    *(unsigned char*)(p + 0x6c) = 0;
    *(int*)(p + 0x70) = 0;
    *(int*)(p + 0x74) = 0;
    *(int*)(p + 0x78) = 0;
    *(int*)(p + 0x7c) = 0;
    *(int*)(p + 0x80) = 0;
    *(int*)(p + 0x84) = 0;
    *(int*)(p + 0x88) = 0;
    *(unsigned char*)(p + 0x8c) = 0;
    *(unsigned char*)(p + 0x8d) = 0;
    *(unsigned char*)(p + 0x8e) = 0;
    *(int*)p = (int)&mem_0092E8F4;
    return self;
}

// [0x004275E0] sub_004275E0 (90 bytes)
// __cdecl(dst, src): std::string tmp = src->vfunc_2(); *dst = tmp; (stack args at [esp+4], [esp+8]).
// SEH-framed (state -1/0), operator= and ~basic_string via imports; vfunc_2 is a hidden-return std::string getter.
extern "C" int mem_00924FDC;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __cdecl fn_004275E0(void* dst, void* src) {
    __asm {
        push -1
        push 0x8b56f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x1c
        mov ecx, dword ptr [esp + 0x30]
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0x8]
        lea edx, [esp]
        push edx
        call eax
        mov ecx, dword ptr [esp + 0x2c]
        push eax
        mov dword ptr [esp + 0x28], 0x0
        call dword ptr [mem_00924FDC]
        lea ecx, [esp]
        mov dword ptr [esp + 0x24], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x1c]
        mov dword ptr fs:[0x0], ecx
        add esp, 0x28
        ret
    }
}

// [0x00427210] sub_00427210 (91 bytes)
extern "C" int mem_00924FF0;
extern "C" int mem_00ACD9D8[54];

extern "C" __declspec(naked) void* __fastcall fn_00427210(void* self, int edx_unused, void* str) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0Ch]
        xor esi, esi
loop_top:
        mov ecx, edi
        call dword ptr [mem_00924FF0]
        mov ecx, dword ptr mem_00ACD9D8[esi*4]
cmp_loop:
        mov dl, byte ptr [ecx]
        cmp dl, byte ptr [eax]
        jne short diff
        test dl, dl
        je short zero_result
        mov dl, byte ptr [ecx + 1]
        cmp dl, byte ptr [eax + 1]
        jne short diff
        add ecx, 2
        add eax, 2
        test dl, dl
        jne short cmp_loop
zero_result:
        xor eax, eax
        jmp short result
diff:
        sbb eax, eax
        sbb eax, -1
result:
        test eax, eax
        je short found
        add esi, 1
        cmp esi, 36h
        jl short loop_top
        pop edi
        xor eax, eax
        pop esi
        ret 4
found:
        mov eax, dword ptr mem_00ACD9D8[esi*4]
        pop edi
        pop esi
        ret 4
    }
}

// [0x00422B60] sub_00422B60 (92 bytes)
extern "C" void ext_006A5EA8();
extern "C" int mem_00925688;
extern "C" int mem_009255E8;

extern "C" __declspec(naked) void __fastcall fn_00422B60(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        sub esp, 0x10
        push esi
        mov esi, ecx
        cmp byte ptr [esi+0x8e], 0
        jne skip
        mov eax, dword ptr [esi+0x20]
        push 0
        push 0
        push eax
        mov byte ptr [esi+0x8e], 1
        call dword ptr [mem_00925688]
        mov ecx, dword ptr [esi+0x20]
        lea edx, [esp+4]
        push edx
        mov dword ptr [esp+8], 0x10
        mov dword ptr [esp+0xc], 2
        mov dword ptr [esp+0x10], ecx
        mov dword ptr [esp+0x14], 0xffffffff
        call dword ptr [mem_009255E8]
skip:
        mov ecx, esi
        call ext_006A5EA8
        pop esi
        add esp, 0x10
        ret 0xc
    }
}

// [0x0042EE50] sub_0042EE50 (60 bytes)
extern "C" int mem_00925134;
extern "C" void ext_00596660();

extern "C" __declspec(naked) void __fastcall fn_0042EE50(void* self) {
    __asm {
        sub esp, 0x8
        push ebx
        push ebp
        mov ebp, dword ptr [mem_00925134]
        push esi
        lea esi, [ecx + 0x54]
        push edi
        mov edi, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], edi
        jbe L_skip1
        call ebp
    L_skip1:
        mov ebx, dword ptr [esi + 0x4]
        cmp ebx, dword ptr [esi + 0x8]
        jbe L_skip2
        call ebp
    L_skip2:
        push edi
        push esi
        push ebx
        push esi
        lea eax, [esp + 0x20]
        push eax
        mov ecx, esi
        call ext_00596660
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x8
        ret
    }
}

// [0x00427640] sub_00427640 (98 bytes)
extern "C" void ext_004275C0();
extern "C" int mem_00924FC0;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00427640(void* self) {
    __asm {
        push -1
        push 0x8b56f9
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x1c
        mov ecx, dword ptr [esp + 0x30]
        lea eax, [esp]
        push eax
        call ext_004275C0
        push 0x92f10c
        push eax
        mov dword ptr [esp + 0x2c], 0
        call dword ptr [mem_00924FC0]
        mov ecx, dword ptr [esp + 0x34]
        mov byte ptr [ecx], al
        add esp, 0x8
        lea ecx, [esp]
        mov dword ptr [esp + 0x24], -1
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x1c]
        mov dword ptr fs:[0], ecx
        add esp, 0x28
        ret
    }
}

// [0x0042ECC0] sub_0042ECC0 (102 bytes)
extern "C" int mem_00925134;

extern "C" __declspec(naked) bool __fastcall fn_0042ECC0(void* self, int edx_unused, int value) {
    __asm {
        sub esp, 8
        push ebx
        mov ebx, dword ptr [ecx + 0x5c]
        cmp dword ptr [ecx + 0x58], ebx
        push ebp
        mov ebp, dword ptr [mem_00925134]
        push esi
        lea esi, [ecx + 0x54]
        push edi
        jbe SHORT L_chk1
        call ebp
    L_chk1:
        mov edi, dword ptr [esi + 0x4]
        cmp edi, dword ptr [esi + 0x8]
        jbe SHORT L_chk2
        call ebp
    L_chk2:
        cmp edi, ebx
        mov dword ptr [esp + 0x14], edi
        je SHORT L_found
        mov eax, dword ptr [esp + 0x1c]
    L_loop:
        cmp dword ptr [edi], eax
        je SHORT L_found
        add edi, 4
        cmp edi, ebx
        jne SHORT L_loop
    L_found:
        mov ebx, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], ebx
        jbe SHORT L_chk3
        call ebp
        mov ebp, dword ptr [mem_00925134]
    L_chk3:
        test esi, esi
        je SHORT L_inv
        cmp esi, esi
        je SHORT L_ret
    L_inv:
        call ebp
    L_ret:
        xor eax, eax
        cmp edi, ebx
        pop edi
        pop esi
        pop ebp
        setne al
        pop ebx
        add esp, 8
        ret 4
    }
}

// [0x004280C0] sub_004280C0 (105 bytes)
extern "C" void ext_004205B0();
extern "C" int mem_00925134;
extern "C" int mem_00924EF4;

extern "C" __declspec(naked) void __fastcall fn_004280C0(void* self, int edx_unused, void** out, const void* key) {
    __asm {
        sub esp, 0x10
        push ebx
        mov ebx, dword ptr [esp + 0x1c]
        push esi
        push edi
        push ebx
        mov esi, ecx
        call ext_004205B0
        test esi, esi
        mov edi, eax
        mov dword ptr [esp + 0x10], edi
        jne skip_invalid
        call dword ptr [mem_00925134]
    skip_invalid:
        cmp edi, dword ptr [esi + 0x4]
        mov dword ptr [esp + 0xc], esi
        je return_end
        add edi, 0xc
        push edi
        push ebx
        call dword ptr [mem_00924EF4]
        add esp, 0x8
        test al, al
        jne return_end
        lea ecx, [esp + 0xc]
        jmp load_pair
    return_end:
        mov eax, dword ptr [esi + 0x4]
        mov dword ptr [esp + 0x18], eax
        mov dword ptr [esp + 0x14], esi
        lea ecx, [esp + 0x14]
    load_pair:
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [esp + 0x20]
        mov ecx, dword ptr [ecx + 0x4]
        pop edi
        pop esi
        mov dword ptr [eax], edx
        mov dword ptr [eax + 0x4], ecx
        pop ebx
        add esp, 0x10
        ret 0x8
    }
}

// [0x00420680] sub_00420680 (108 bytes)
extern "C" int mem_00925134;
extern "C" __declspec(naked) void __fastcall fn_00420680(void* self) {
    __asm {
        push esi
        mov esi, ecx
        cmp dword ptr [esi], 0
        push edi
        mov edi, dword ptr [mem_00925134]
        jne SKIP_NULL
        call edi
SKIP_NULL:
        mov eax, dword ptr [esi + 4]
        cmp byte ptr [eax + 59h], 0
        je HAS_NODE
        call edi
        pop edi
        pop esi
        ret
HAS_NODE:
        mov ecx, dword ptr [eax + 8]
        cmp byte ptr [ecx + 59h], 0
        jne RIGHT_NIL
        mov eax, dword ptr [ecx]
        cmp byte ptr [eax + 59h], 0
        jne STORE_RIGHT
LEFTMOST:
        mov ecx, eax
        mov eax, dword ptr [ecx]
        cmp byte ptr [eax + 59h], 0
        je LEFTMOST
STORE_RIGHT:
        pop edi
        mov dword ptr [esi + 4], ecx
        pop esi
        ret
RIGHT_NIL:
        mov eax, dword ptr [eax + 4]
        cmp byte ptr [eax + 59h], 0
        jne STORE_PARENT
        _emit 0x8D
        _emit 0xA4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
UP_LOOP:
        mov ecx, dword ptr [esi + 4]
        cmp ecx, dword ptr [eax + 8]
        jne STORE_PARENT
        mov dword ptr [esi + 4], eax
        mov edx, eax
        mov eax, dword ptr [edx + 4]
        cmp byte ptr [eax + 59h], 0
        je UP_LOOP
STORE_PARENT:
        pop edi
        mov dword ptr [esi + 4], eax
        pop esi
        ret
    }
}

// [0x004274E0] sub_004274E0 (108 bytes)
extern "C" int mem_00924FDC;

extern "C" __declspec(naked) void* __cdecl fn_004274E0(void* first, void* last, void* dlast) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0xc]
        cmp dword ptr [esp + 0x8], ebx
        je EQUAL_RANGE
        push ebp
        mov ebp, dword ptr [esp + 0x14]
        push esi
        push edi
        lea edi, [ebp + 0x5]
        lea esi, [ebx + 0x5]
        jmp LOOP_TOP
        _emit 0x8d
        _emit 0x9b
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
LOOP_TOP:
        mov eax, dword ptr [ebx - 0x24]
        sub esi, 0x24
        sub edi, 0x24
        sub ebx, 0x24
        sub ebp, 0x24
        lea ecx, [esi - 0x1]
        lea edx, [edi - 0x1]
        cmp edx, ecx
        mov dword ptr [ebp], eax
        je SKIP_ASSIGN
        mov al, byte ptr [esi - 0x1]
        mov byte ptr [edi - 0x1], al
        mov cl, byte ptr [esi + 0x1]
        mov byte ptr [edi + 0x1], cl
        mov dl, byte ptr [esi]
        lea eax, [esi + 0x3]
        push eax
        lea ecx, [edi + 0x3]
        mov byte ptr [edi], dl
        call dword ptr [mem_00924FDC]
SKIP_ASSIGN:
        cmp ebx, dword ptr [esp + 0x14]
        jne LOOP_TOP
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret
EQUAL_RANGE:
        mov eax, dword ptr [esp + 0x10]
        pop ebx
        ret
    }
}


// [0x00427860] sub_00427860 (93 bytes)
extern "C" void ext_004274E0();

extern "C" __declspec(naked) int __cdecl fn_00427860(int a1, int a2, int a3, int a4, int a5) {
    __asm {
        sub esp, 8
        mov edx, dword ptr [esp + 0x14]
        push ebx
        mov ebx, dword ptr [esp + 0x10]
        push esi
        mov esi, dword ptr [esp + 0x18]
        push edi
        mov edi, dword ptr [esp + 0x20]
        xor al, al
        mov byte ptr [esp + 0x10], al
        mov ecx, dword ptr [esp + 0x10]
        mov byte ptr [esp + 0xc], al
        mov eax, dword ptr [esp + 0xc]
        push eax
        push ecx
        push edx
        push edi
        push esi
        push ebx
        call ext_004274E0
        sub esi, ebx
        mov eax, 0x38e38e39
        imul esi
        sar edx, 0x3
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        lea eax, [eax + 8*eax]
        add eax, eax
        add eax, eax
        add esp, 0x18
        mov ecx, eax
        mov eax, edi
        pop edi
        pop esi
        sub eax, ecx
        pop ebx
        add esp, 8
        ret
    }
}

// [0x00427B20] sub_00427B20 (43 bytes)
extern "C" void ext_00427860();
extern "C" __declspec(naked) void __fastcall fn_00427B20(void* self) {
    __asm {
        push ecx
        mov ecx, dword ptr [esp + 0x10]
        mov edx, dword ptr [esp + 0x10]
        mov byte ptr [esp], 0x0
        mov eax, dword ptr [esp]
        push eax
        mov eax, dword ptr [esp + 0x14]
        push ecx
        mov ecx, dword ptr [esp + 0x14]
        push edx
        mov edx, dword ptr [esp + 0x14]
        push eax
        push ecx
        push edx
        call ext_00427860
        add esp, 0x1c
        ret
    }
}
