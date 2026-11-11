// Decompiled translation unit: src/leaf/decompiled_660000.cpp

// [0x0066B060] sub_0066B060 (19 bytes)
extern "C" void ext_0065F440();

struct LeafTailTarget {
    void tail();
};
typedef void (LeafTailTarget::*LeafTailFn)();

extern "C" void __fastcall fn_0066B060(void* self) {
    LeafTailTarget* next = (LeafTailTarget*)(self ? (char*)self + 4 : (char*)0);
    LeafTailFn f;
    *(void**)&f = (void*)ext_0065F440;
    (next->*f)();
}

// [0x00661840] sub_00661840 (32 bytes)
extern "C" __declspec(naked) int __fastcall fn_00661840(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0xc]
        mov eax, ecx
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        push esi
        mov esi, dword ptr [esp + 0xc]
        add eax, 0x4
        push eax
        mov eax, dword ptr [edx + 0x8]
        push esi
        call eax
        mov eax, esi
        pop esi
        ret 0x8
    }
}

// [0x00661860] sub_00661860 (32 bytes)
extern "C" __declspec(naked) int __fastcall fn_00661860(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0xc]
        mov eax, ecx
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        push esi
        mov esi, dword ptr [esp + 0xc]
        add eax, 0x4
        push eax
        mov eax, dword ptr [edx + 0x4]
        push esi
        call eax
        mov eax, esi
        pop esi
        ret 0x8
    }
}

// [0x0066A330] sub_0066A330 (32 bytes)
extern "C" __declspec(naked) void __fastcall fn_0066A330(void* self, int edx_unused, float a1, float a2, float a3, float a4) {
    __asm {
        fld dword ptr [esp + 0x4]
        mov eax, ecx
        fstp dword ptr [eax]
        fld dword ptr [esp + 0x8]
        fstp dword ptr [eax + 0x4]
        fld dword ptr [esp + 0xc]
        fstp dword ptr [eax + 0x8]
        fld dword ptr [esp + 0x10]
        fstp dword ptr [eax + 0xc]
        ret 0x10
    }
}

// [0x0066A760] sub_0066A760 (10 bytes)
extern "C" void ext_006A6118();

extern "C" __declspec(naked) void __fastcall fn_0066A760(void* self) {
    __asm {
        mov eax, dword ptr [ecx]
        push eax
        call ext_006A6118
        pop ecx
        ret
    }
}

// [0x00660D40] sub_00660D40 (13 bytes)
extern "C" void ext_00660A50();

extern "C" void __cdecl fn_00660D40() {
    typedef int* (__cdecl *GetFn)();
    GetFn get = (GetFn)ext_00660A50;
    int* p = get();
    p[2] = 0;
}

// [0x00666200] sub_00666200 (15 bytes)
extern "C" void ext_00665CA0();

extern "C" void __fastcall fn_00666200(void* self, int edx_unused, int a1) {
    *(int*)((char*)self + 0x8) = a1;
    ext_00665CA0();
}

// [0x00662080] sub_00662080 (16 bytes)
extern "C" void ext_00661F70(int value);

extern "C" __declspec(naked) void __fastcall fn_00662080(void* self) {
    __asm {
        mov eax, dword ptr [ecx + 0x4]
        mov edx, dword ptr [eax + 0x130]
        push edx
        call ext_00661F70
        ret
    }
}

// [0x00662090] sub_00662090 (16 bytes)
extern "C" __declspec(naked) void __fastcall fn_00662090(void* self) {
    __asm {
        mov eax, dword ptr [ecx + 0x4]
        mov edx, dword ptr [eax + 0x134]
        push edx
        call ext_00661F70
        ret
    }
}

// [0x006622C0] sub_006622C0 (16 bytes)
extern "C" void __fastcall ext_00662120(void* self);
extern "C" void __fastcall ext_00661E80(void* self);

extern "C" void __fastcall fn_006622C0(void* self) {
    ext_00662120(self);
    ext_00661E80(self);
}

// [0x00665C10] sub_00665C10 (16 bytes)
extern "C" void ext_00451670();
extern "C" __declspec(naked) void __fastcall fn_00665C10(void* self, int edx_unused, void* a1) {
    __asm {
        lea eax, [esp + 0x4]
        push eax
        add ecx, 0x28
        call ext_00451670
        ret 0x4
    }
}

// [0x006667C0] sub_006667C0 (16 bytes)
extern "C" void ext_005A6300();
extern "C" __declspec(naked) void __fastcall fn_006667C0(void* self) {
    __asm {
        lea eax, [esp + 0x4]
        push eax
        add ecx, 0x28
        call ext_005A6300
        ret 0x4
    }
}

// [0x00661A10] sub_00661A10 (19 bytes)
extern "C" void __fastcall ext_0065D0A0(void* self, int edx_unused, float a1);
extern "C" void __fastcall fn_00661A10(void* self, int edx_unused, float a1) {
    ext_0065D0A0(*(void**)((char*)self + 4), edx_unused, a1);
}

// [0x006667A0] sub_006667A0 (21 bytes)
extern "C" void __stdcall ext_00666670(int arg);

extern "C" void __fastcall fn_006667A0(void* self) {
    int* p = (int*)self;
    if (--p[1] == 0) {
        int v = p[0];
        p[0] = 0;
        ext_00666670(v);
    }
}

// [0x006622D0] sub_006622D0 (24 bytes)
extern "C" void ext_00451670();
extern "C" void __fastcall fn_006622D0(void* self, int edx_unused, int a1) {
    typedef void (__thiscall *Callee)(void*, int*);
    int slot = a1;
    ((Callee)ext_00451670)(static_cast<char*>(self) + 0x24, &slot);
}

// [0x006622F0] sub_006622F0 (24 bytes)
extern "C" __declspec(naked) void __fastcall fn_006622F0(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        lea edx, [esp + 0x4]
        push edx
        add ecx, 0x4c
        mov dword ptr [esp + 0x8], eax
        call ext_00451670
        ret 0x4
    }
}

// [0x00662400] sub_00662400 (24 bytes)
extern "C" void ext_005A6300();
extern "C" __declspec(naked) void __fastcall fn_00662400(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        lea edx, [esp + 0x4]
        push edx
        add ecx, 0x24
        mov dword ptr [esp + 0x8], eax
        call ext_005A6300
        ret 0x4
    }
}

// [0x00662420] sub_00662420 (24 bytes)
extern "C" void ext_005A6300();
extern "C" __declspec(naked) void __fastcall fn_00662420(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        lea edx, [esp + 0x4]
        push edx
        add ecx, 0x4c
        mov dword ptr [esp + 0x8], eax
        call ext_005A6300
        ret 0x4
    }
}

// [0x00666320] sub_00666320 (25 bytes)
extern "C" void __stdcall ext_00666170(int a1);
extern "C" __declspec(naked) void* __fastcall fn_00666320(void* self, int edx_unused, int a1, int a2) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 0x8]
        push eax
        mov dword ptr [esi], ecx
        call ext_00666170
        mov eax, esi
        pop esi
        ret 0x8
    }
}

// [0x006658D0] sub_006658D0 (26 bytes)
extern "C" void ext_006A5C62();

extern "C" void __fastcall fn_006658D0(void* self) {
    typedef void* (__cdecl *AllocFn)(unsigned int);
    void* eax = ((AllocFn)ext_006A5C62)(12);
    if (eax) {
        *(void**)eax = eax;
    }
    void** ecx = (void**)((char*)eax + 4);
    if (ecx) {
        *ecx = eax;
    }
}

// [0x006620E0] sub_006620E0 (28 bytes)
extern "C" void ext_00466BA0();
extern "C" void ext_0065EEB0();
extern "C" __declspec(naked) void __fastcall fn_006620E0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x4]
        push esi
        call ext_0065EEB0
        push 0x0
        push esi
        lea ecx, [esi + 0x10]
        mov byte ptr [esi], 0x1
        call ext_00466BA0
        pop esi
        ret
    }
}

// [0x00662100] sub_00662100 (28 bytes)
extern "C" void ext_0065E010();
extern "C" __declspec(naked) void __fastcall fn_00662100(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x4]
        push esi
        call ext_0065E010
        push 0x0
        push esi
        lea ecx, [esi + 0x10]
        mov byte ptr [esi], 0x1
        call ext_00466BA0
        pop esi
        ret
    }
}

// [0x00662F80] sub_00662F80 (33 bytes)
// MessageBoxA(NULL, arg2->c_str(), arg1->c_str(), MB_ICONINFORMATION); both args are std::string*.
extern "C" int mem_00924FF0;
extern "C" int mem_009255E0;
extern "C" __declspec(naked) void __cdecl fn_00662F80(void* a1, void* a2) {
    __asm {
        mov ecx, dword ptr [esp + 4]
        push 0x40
        call dword ptr [mem_00924FF0]
        mov ecx, dword ptr [esp + 0xc]
        push eax
        call dword ptr [mem_00924FF0]
        push eax
        push 0
        call dword ptr [mem_009255E0]
        ret
    }
}

// [0x006619D0] sub_006619D0 (34 bytes)
extern "C" __declspec(naked) void __fastcall fn_006619D0(void* self, int edx_unused, void* other) {
    __asm {
        mov eax, ecx
        mov ecx, dword ptr [esp + 4]
        cmp ecx, eax
        je done
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [eax + 4], edx
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [eax + 8], edx
        mov ecx, dword ptr [ecx + 0Ch]
        mov dword ptr [eax + 0Ch], ecx
        mov byte ptr [eax], 1
    done:
        ret 4
    }
}

// [0x0066BA00] sub_0066BA00 (34 bytes)
extern "C" __declspec(naked) void __stdcall fn_0066BA00(void* arg) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        mov eax, dword ptr [esi]
        mov ecx, dword ptr [eax + 4]
        push eax
        mov dword ptr [esi + 4], ecx
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 70h]
        lea eax, [esp + 0Ch]
        push eax
        call edx
        mov eax, dword ptr [eax]
        mov dword ptr [esi], eax
        pop esi
        ret 4
    }
}

// [0x0066BD00] sub_0066BD00 (34 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00988094;

extern "C" __declspec(naked) void* __fastcall fn_0066BD00(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push esi
        mov esi, ecx
        call ext_0067A670
        mov eax, dword ptr [esp + 0x8]
        mov ecx, dword ptr [esp + 0xc]
        mov dword ptr [esi + 0x4], eax
        mov dword ptr [esi], offset mem_00988094
        mov dword ptr [esi + 0x8], ecx
        mov eax, esi
        pop esi
        ret 0x8
    }
}

// [0x006618F0] sub_006618F0 (35 bytes)
extern "C" __declspec(naked) void __fastcall fn_006618F0(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x10]
        push esi
        mov esi, dword ptr [esp + 0x10]
        push esi
        mov esi, dword ptr [esp + 0x10]
        mov eax, ecx
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        add eax, 0x4
        push esi
        push eax
        mov eax, dword ptr [edx + 0x28]
        call eax
        pop esi
        ret 0xc
    }
}

// [0x00661920] sub_00661920 (35 bytes)
extern "C" __declspec(naked) void __fastcall fn_00661920(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x10]
        push esi
        mov esi, dword ptr [esp + 0x10]
        push esi
        mov esi, dword ptr [esp + 0x10]
        mov eax, ecx
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        add eax, 0x4
        push esi
        push eax
        mov eax, dword ptr [edx + 0x2c]
        call eax
        pop esi
        ret 0xc
    }
}

// [0x006629B0] sub_006629B0 (35 bytes)
extern "C" int mem_00924FF0;
extern "C" int mem_009252E8;
extern "C" __declspec(naked) int __fastcall fn_006629B0(void* self) {
    __asm {
        mov ecx, dword ptr [esp + 0x4]
        sub esp, 0x30
        lea eax, [esp]
        push eax
        call dword ptr [mem_00924FF0]
        push eax
        call dword ptr [mem_009252E8]
        neg eax
        sbb eax, eax
        add eax, 0x1
        add esp, 0x38
        ret
    }
}

// [0x00664B20] sub_00664B20 (37 bytes)
// Returns strstr(a1->c_str(), a2->c_str()) != NULL as a bool in al; both args are std::string*.
extern "C" int mem_00924FF0;
extern "C" int mem_00925240;
extern "C" __declspec(naked) int __cdecl fn_00664B20(void* a1, void* a2) {
    __asm {
        mov ecx, dword ptr [esp + 8]
        call dword ptr [mem_00924FF0]
        mov ecx, dword ptr [esp + 4]
        push eax
        call dword ptr [mem_00924FF0]
        push eax
        call dword ptr [mem_00925240]
        add esp, 0x8
        test eax, eax
        setne al
        ret
    }
}

// [0x006601E0] sub_006601E0 (38 bytes)
extern "C" int mem_00B59080;
extern "C" int mem_00B59084;

extern "C" __declspec(naked) void __fastcall fn_006601E0(void* self) {
    __asm {
        push ecx
        mov dword ptr [ecx], 0x00987730
        mov eax, dword ptr [mem_00B59080]
        test eax, eax
        je done_006601E0
        mov ecx, dword ptr [mem_00B59084]
        sub ecx, eax
        sar ecx, 0x2
        je done_006601E0
        sub dword ptr [mem_00B59084], 0x4
done_006601E0:
        pop ecx
        ret
    }
}

// [0x0066A950] sub_0066A950 (38 bytes)
extern "C" char* __fastcall fn_0066A950(void* self, int edx_unused, int a1, int a2, char* a3) {
    if (a3 != 0) {
        *a3 = (*(char**)self)[a2 + 1];
    }
    (*(char**)self)[a2 + 1] = 0;
    return (*(char**)self) + a1;
}

// [0x00662EC0] sub_00662EC0 (40 bytes)
extern "C" int mem_0092425C;
extern "C" int mem_00924258;

extern "C" int __cdecl fn_00662EC0(void* path) {
    typedef unsigned long (__stdcall *GetAttrFn)(void*);
    typedef int (__stdcall *SetAttrFn)(void*, unsigned long);
    unsigned long attr = ((GetAttrFn)mem_0092425C)(path);
    unsigned long newattr = attr | 1;
    ((SetAttrFn)mem_00924258)(path, newattr);
    return newattr != attr;
}

// [0x00662EF0] sub_00662EF0 (40 bytes)
extern "C" int __cdecl fn_00662EF0(void* path) {
    typedef unsigned long (__stdcall *GetAttrFn)(void*);
    typedef int (__stdcall *SetAttrFn)(void*, unsigned long);
    unsigned long attr = ((GetAttrFn)mem_0092425C)(path);
    unsigned long newattr = attr & ~1ul;
    ((SetAttrFn)mem_00924258)(path, newattr);
    return newattr != attr;
}

// [0x00662F20] sub_00662F20 (40 bytes)
extern "C" int mem_00924264;
extern "C" int mem_00924260;
extern "C" int mem_009241E0;

extern "C" void __cdecl fn_00662F20() {
    void* ev = ((void* (__stdcall*)(void*, int, int, const char*))mem_00924264)(0, 1, 0, (const char*)0x009877b0);
    if (ev) {
        ((int (__stdcall*)(void*))mem_00924260)(ev);
        ((int (__stdcall*)(void*))mem_009241E0)(ev);
    }
}

// [0x00661710] sub_00661710 (41 bytes)
extern "C" __declspec(naked) int __fastcall fn_00661710(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push ecx
        push esi
        mov esi, dword ptr [esp + 0x10]
        mov eax, ecx
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        push esi
        mov esi, dword ptr [esp + 0x10]
        add eax, 0x4
        push eax
        mov eax, dword ptr [edx]
        push esi
        mov dword ptr [esp + 0x10], 0
        call eax
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    }
}

// [0x0066EDB0] sub_0066EDB0 (41 bytes)
extern "C" void ext_006A5C5C();

extern "C" __declspec(naked) void* __fastcall fn_0066EDB0(void* self, int edx_unused, int a1) {
    __asm {
        push esi
        mov esi, ecx
        test esi, esi
        je short loc_null
        lea ecx, [esi + 0x4]
        jmp short loc_call
loc_null:
        xor ecx, ecx
loc_call:
        call ext_0065F440
        test byte ptr [esp + 0x8], 0x1
        je short loc_ret
        push esi
        call ext_006A5C5C
        add esp, 0x4
loc_ret:
        mov eax, esi
        pop esi
        ret 0x4
    }
}

// [0x00666980] sub_00666980 (42 bytes)
extern "C" int mem_00925134;
extern "C" bool __fastcall fn_00666980(void* self, int edx_unused, void* other) {
    int* s = static_cast<int*>(self);
    int* o = static_cast<int*>(other);
    if (s[0] == 0 || s[0] != o[0]) {
        reinterpret_cast<void (*)()>(mem_00925134)();
    }
    return s[1] == o[1];
}

// [0x0066C030] sub_0066C030 (42 bytes)
extern "C" void __fastcall ext_0065C640(void* self);
extern "C" void __fastcall ext_0065C650(void* self);
extern "C" void __fastcall fn_0066C030(void* self, int edx_unused, void** node) {
    if (node == 0) return;
    char* s = (char*)self;
    ext_0065C640(s + 0x14);
    *(void**)node = *(void**)self;
    *(void**)self = node;
    ext_0065C650(s + 0x14);
}

// [0x006618C0] sub_006618C0 (47 bytes)
extern "C" int __fastcall fn_006618C0(void* self, int edx_unused, int a1, int a2, int a3, int a4, int a5) {
    typedef int (__thiscall *Fn)(void* self, int a1, void* p, int a2, int a3, int a4, int a5);
    void* inner = *(void**)self;
    void** vt = *(void***)inner;
    Fn f = (Fn)vt[9];
    f(inner, a1, (char*)self + 4, a2, a3, a4, a5);
    return a1;
}

// [0x00661AE0] sub_00661AE0 (47 bytes)
extern "C" void __fastcall fn_00661AE0(void* self) {
    typedef void (__thiscall *VFn)(void* self);
    unsigned char* s = (unsigned char*)self;
    void** a = *(void***)(s + 0x10);
    VFn f1 = (VFn)(a[3]);
    f1((char*)self + 0x10);
    void** b = *(void***)(s + 0x38);
    VFn f2 = (VFn)(b[3]);
    f2((char*)self + 0x38);
    unsigned char* p = *(unsigned char**)(s + 0x4);
    void* v = **(void***)(p + 0x64);
    *(unsigned char**)(s + 0x8) = p + 0x60;
    *(void**)(s + 0xc) = v;
    s[0] = 1;
}

// [0x00664BF0] sub_00664BF0 (50 bytes)
extern "C" __declspec(naked) void* __cdecl fn_00664BF0(const unsigned char* first, const unsigned char* last, int (__cdecl* pred)(int)) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        push edi
        mov edi, dword ptr [esp + 0x10]
        cmp esi, edi
        je empty
        push ebx
        mov ebx, dword ptr [esp + 0x18]
    loop_top:
        movzx eax, byte ptr [esi]
        push eax
        call ebx
        add esp, 4
        test al, al
        jne found
        add esi, 1
        cmp esi, edi
        jne loop_top
    found:
        pop ebx
        pop edi
        mov eax, esi
        pop esi
        ret
    empty:
        pop edi
        mov eax, esi
        pop esi
        ret
    }
}

// [0x00661B10] sub_00661B10 (51 bytes)
extern "C" int mem_00925134;

extern "C" __declspec(naked) int __fastcall fn_00661B10(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x4]
        test eax, eax
        jne L_nonnull
        xor al, al
        pop esi
        ret
    L_nonnull:
        mov ecx, dword ptr [eax + 0x64]
        add eax, 0x60
        push edi
        mov edi, dword ptr [ecx]
        mov ecx, dword ptr [esi + 0x8]
        test ecx, ecx
        je L_call
        cmp ecx, eax
        je L_skip
    L_call:
        call dword ptr [mem_00925134]
    L_skip:
        xor eax, eax
        cmp dword ptr [esi + 0xc], edi
        pop edi
        sete al
        pop esi
        ret
    }
}

// [0x00668CD0] sub_00668CD0 (56 bytes)
extern "C" void ext_00555470();

extern "C" void* __fastcall fn_00668CD0(void* self) {
    unsigned int edi = (unsigned int)self;
    unsigned int esi = edi + 4;
    *(unsigned int*)edi = 0x00987A44;
    unsigned int eax = ((unsigned int (__fastcall*)(unsigned int))ext_00555470)(esi);
    *(unsigned int*)(esi + 4) = eax;
    *(unsigned char*)(eax + 0x39) = 1;
    eax = *(unsigned int*)(esi + 4);
    *(unsigned int*)(eax + 4) = eax;
    eax = *(unsigned int*)(esi + 4);
    *(unsigned int*)eax = eax;
    eax = *(unsigned int*)(esi + 4);
    *(unsigned int*)(eax + 8) = eax;
    *(unsigned int*)(esi + 8) = 0;
    return self;
}

// [0x00662BF0] sub_00662BF0 (61 bytes)
extern "C" int mem_00924254;
extern "C" int mem_00924FE4;

extern "C" __declspec(naked) void* __cdecl fn_00662BF0(void) {
    __asm {
        sub esp, 0x108
        push esi
        lea eax, [esp + 0x8]
        push eax
        push 0x104
        mov dword ptr [esp + 0xc], 0
        call dword ptr [mem_00924254]
        mov esi, dword ptr [esp + 0x110]
        lea ecx, [esp + 0x8]
        push ecx
        mov ecx, esi
        call dword ptr [mem_00924FE4]
        mov eax, esi
        pop esi
        add esp, 0x108
        ret
    }
}

// [0x0066A720] sub_0066A720 (63 bytes)
extern "C" void ext_006A611E();

extern "C" __declspec(naked) void __fastcall fn_0066A720(void* self, int edx_unused, int a1) {
    __asm {
        push ebx
        push esi
        push edi
        mov edi, dword ptr [esp + 0x10]
        xor ebx, ebx
        cmp edi, ebx
        mov esi, ecx
        je zero_path
        push edi
        call ext_006A611E
        mov dword ptr [esi], eax
        mov dword ptr [esi + 0x8], edi
        add esp, 0x4
        mov dword ptr [esi + 0x4], ebx
        mov byte ptr [eax], bl
        mov eax, dword ptr [esi + 0x8]
        mov ecx, dword ptr [esi]
        pop edi
        pop esi
        mov byte ptr [eax + ecx - 0x1], bl
        pop ebx
        ret 0x4
zero_path:
        pop edi
        mov dword ptr [esi], ebx
        mov dword ptr [esi + 0x4], ebx
        mov dword ptr [esi + 0x8], ebx
        pop esi
        pop ebx
        ret 0x4
    }
}

// [0x00667140] sub_00667140 (64 bytes)
// __fastcall-style, ret 0: allocates 0xC4 bytes via 0x006A5C62 (cdecl), zeroes the dwords at +0, +4 and +8
// (each store guarded by a null test), sets byte +0xC0 to 1 and byte +0xC1 to 0.
extern "C" __declspec(naked) void __fastcall fn_00667140(void* self) {
    __asm {
        push 0xc4
        call ext_006A5C62
        add esp, 4
        test eax, eax
        je L_skip0
        mov dword ptr [eax], 0
L_skip0:
        lea ecx, [eax + 4]
        test ecx, ecx
        je L_skip1
        mov dword ptr [ecx], 0
L_skip1:
        lea ecx, [eax + 8]
        test ecx, ecx
        je L_skip2
        mov dword ptr [ecx], 0
L_skip2:
        mov byte ptr [eax + 0xc0], 1
        mov byte ptr [eax + 0xc1], 0
        ret
    }
}

// [0x00667F80] sub_00667F80 (59 bytes)
extern "C" void ext_00667140();

extern "C" void* __fastcall fn_00667F80(void* self) {
    char* edi = (char*)self;
    char* esi = edi + 4;
    *(unsigned int*)edi = 0x987a3c;
    char* eax = (char*)((void* (__fastcall*)(void*))ext_00667140)(esi);
    *(char**)(esi + 4) = eax;
    eax[0xc1] = 1;
    eax = *(char**)(esi + 4);
    *(char**)(eax + 4) = eax;
    eax = *(char**)(esi + 4);
    *(char**)eax = eax;
    eax = *(char**)(esi + 4);
    *(char**)(eax + 8) = eax;
    *(unsigned int*)(esi + 8) = 0;
    return edi;
}

// [0x00660210] sub_00660210 (66 bytes)
extern "C" int mem_00925134;
extern "C" __declspec(naked) int __fastcall fn_00660210(void* self) {
    __asm {
        sub esp, 0x8
        push ebp
        mov ebp, dword ptr [mem_00925134]
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], edi
        jbe skip1
        call ebp
    skip1:
        lea eax, [edi - 0x1c]
        cmp eax, dword ptr [esi + 0x8]
        push ebx
        mov ebx, esi
        mov dword ptr [esp + 0x14], edi
        ja do_call2
        cmp eax, dword ptr [esi + 0x4]
        jae skip2
    do_call2:
        call ebp
    skip2:
        lea esi, [edi - 0x1c]
        cmp esi, dword ptr [ebx + 0x8]
        pop ebx
        jb skip3
        call ebp
    skip3:
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        add esp, 0x8
        ret
    }
}

// [0x00662B20] sub_00662B20 (67 bytes)
// Appends a trailing '\\' to s (in place) if missing, then copy-constructs *out from s.
extern "C" int mem_00924EAC;
extern "C" int mem_0092500C;
extern "C" int mem_00924EC0;
extern "C" int mem_00924FE0;

extern "C" __declspec(naked) void* __cdecl fn_00662B20(void* out, void* s) {
    __asm {
        push ecx
        push esi
        mov esi, dword ptr [esp + 0x10]
        mov ecx, esi
        mov dword ptr [esp + 0x4], 0x0
        call dword ptr [mem_00924EAC]
        sub eax, 0x1
        push eax
        mov ecx, esi
        call dword ptr [mem_0092500C]
        cmp byte ptr [eax], 0x5c
        je short L_has_sep
        push 0x5c
        mov ecx, esi
        call dword ptr [mem_00924EC0]
    L_has_sep:
        push esi
        mov esi, dword ptr [esp + 0x10]
        mov ecx, esi
        call dword ptr [mem_00924FE0]
        mov eax, esi
        pop esi
        pop ecx
        ret
    }
}

// [0x00664B50] sub_00664B50 (67 bytes)
#include <ctype.h>
extern "C" int mem_009252F4;

extern "C" __declspec(naked) char* __cdecl fn_00664B50(const char* src, const char* end, char* dst) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0xc]
        push esi
        mov esi, dword ptr [esp + 0xc]
        cmp esi, ebx
        je L_done_00664B50
        push ebp
        mov ebp, dword ptr [mem_009252F4]
        push edi
        mov edi, dword ptr [esp + 0x1c]
        _emit 0x8d
        _emit 0x9b
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
L_loop_00664B50:
        movsx eax, byte ptr [esi]
        push eax
        call ebp
        mov byte ptr [edi], al
        add esi, 0x1
        add esp, 0x4
        add edi, 0x1
        cmp esi, ebx
        jne L_loop_00664B50
        mov eax, edi
        pop edi
        pop ebp
        pop esi
        pop ebx
        ret
L_done_00664B50:
        mov eax, dword ptr [esp + 0x14]
        pop esi
        pop ebx
        ret
    }
}

// [0x00664BA0] sub_00664BA0 (67 bytes)
extern "C" int mem_009252F8;
extern "C" char* __cdecl fn_00664BA0(const char* first, const char* last, char* dst) {
    if (first != last) {
        int (__cdecl *tolower_fp)(int) = (int (__cdecl *)(int))mem_009252F8;
        do {
            *dst = (char)tolower_fp((int)*first);
            ++first;
            ++dst;
        } while (first != last);
    }
    return dst;
}

// [0x00662E70] sub_00662E70 (70 bytes)
// std::string fn(const std::string& s): hidden return slot at [esp+4], s at [esp+8].
// Canonicalizes s.c_str() into a MAX_PATH buffer via PathCanonicalizeA and constructs the result string.
extern "C" int mem_00924FF0;
extern "C" int mem_00924FE4;
extern "C" int mem_00925550;
extern "C" __declspec(naked) void* __cdecl fn_00662E70(void* ret, void* s) {
    __asm {
        sub esp, 0x108
        mov ecx, dword ptr [esp + 0x110]
        push esi
        mov dword ptr [esp + 0x4], 0x0
        call dword ptr [mem_00924FF0]
        push eax
        lea eax, [esp + 0xc]
        push eax
        call dword ptr [mem_00925550]
        mov esi, dword ptr [esp + 0x110]
        lea ecx, [esp + 0x8]
        push ecx
        mov ecx, esi
        call dword ptr [mem_00924FE4]
        mov eax, esi
        pop esi
        add esp, 0x108
        ret
    }
}

// [0x006648C0] sub_006648C0 (72 bytes)
extern "C" int mem_009251E0;
extern "C" int mem_00924FE4;
extern "C" __declspec(naked) void* __cdecl fn_006648C0(void* a1, double a2, int a3) {
    __asm {
        sub esp, 0x38
        fld qword ptr [esp + 0x40]
        mov eax, dword ptr [esp + 0x48]
        push esi
        sub esp, 0x8
        fstp qword ptr [esp]
        push eax
        push 0x9879c8
        lea ecx, [esp + 0x18]
        push 0x32
        push ecx
        mov dword ptr [esp + 0x1c], 0x0
        call dword ptr [mem_009251E0]
        mov esi, dword ptr [esp + 0x58]
        add esp, 0x18
        lea edx, [esp + 0x8]
        push edx
        mov ecx, esi
        call dword ptr [mem_00924FE4]
        mov eax, esi
        pop esi
        add esp, 0x38
        ret
    }
}

// [0x006630C0] sub_006630C0 (75 bytes)
extern "C" int mem_00924EAC;
extern "C" int mem_00924FFC;
extern "C" char mem_00A9FB8C;
extern "C" __declspec(naked) void __fastcall fn_006630C0(void* self) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0x8]
        push edi
        mov ecx, ebx
        call dword ptr [mem_00924EAC]
        mov edi, eax
        cmp edi, 0x14
        jae L_long
        pop edi
        xor al, al
        pop ebx
        ret
    L_long:
        push esi
        xor esi, esi
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
    L_loop:
        lea eax, [edi + esi - 0x10]
        push eax
        mov ecx, ebx
        call dword ptr [mem_00924FFC]
        mov cl, byte ptr [eax]
        cmp cl, byte ptr [esi + mem_00A9FB8C]
        jne L_fail
        add esi, 0x1
        cmp esi, 0x10
        jb L_loop
        pop esi
        pop edi
        mov al, 0x1
        pop ebx
        ret
    L_fail:
        pop esi
        pop edi
        xor al, al
        pop ebx
        ret
    }
}

// [0x00665B80] sub_00665B80 (75 bytes)
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_00665B80(void* self) {
    __asm {
        push ebx
        push ebp
        mov ebp, dword ptr [mem_00925134]
        push esi
        lea esi, [ecx + 0x28]
        push edi
        mov edi, dword ptr [esi + 0x4]
        cmp edi, dword ptr [esi + 0x8]
        jbe L_chk1
        call ebp
L_chk1:
        mov ebx, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], ebx
        jbe L_chk2
        call ebp
L_chk2:
        cmp esi, esi
        je L_chk3
        call ebp
L_chk3:
        cmp edi, ebx
        je L_done
        cmp edi, dword ptr [esi + 0x8]
        jb L_call
        call ebp
L_call:
        mov ecx, dword ptr [edi]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        call edx
        cmp edi, dword ptr [esi + 0x8]
        jb L_inc
        call ebp
L_inc:
        add edi, 0x4
        jmp L_chk1
L_done:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}

// [0x00666AE0] sub_00666AE0 (81 bytes)
extern "C" void __fastcall fn_00666AE0(void* self, int edx_unused, void* node) {
    char* n = (char*)node;
    char* s = (char*)self;
    char* p = *(char**)(n + 0x8);
    *(char**)(n + 0x8) = *(char**)p;
    char* q = *(char**)p;
    if (*(q + 0xc1) == 0) {
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

// [0x00662A50] sub_00662A50 (83 bytes)
// Returns std::string(GetTempPathA result) via the hidden sret pointer (first stack arg, cdecl ret 0).
extern "C" int mem_0092424C;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FE8;

extern "C" __declspec(naked) void* __fastcall fn_00662A50(void* self) {
    __asm {
        sub esp, 0x108
        push esi
        lea eax, [esp + 0x8]
        push eax
        push 0x104
        mov dword ptr [esp + 0xc], 0x0
        call dword ptr [mem_0092424C]
        test eax, eax
        mov esi, dword ptr [esp + 0x110]
        je empty
        lea ecx, [esp + 0x8]
        push ecx
        mov ecx, esi
        call dword ptr [mem_00924FE4]
        mov eax, esi
        pop esi
        add esp, 0x108
        ret
empty:
        mov ecx, esi
        call dword ptr [mem_00924FE8]
        mov eax, esi
        pop esi
        add esp, 0x108
        ret
    }
}

// [0x00666B40] sub_00666B40 (85 bytes)
extern "C" void __fastcall fn_00666B40(char* self, int edx_unused, char* x) {
    char* n = *(char**)x;
    *(char**)x = *(char**)(n + 0x8);
    char* m = *(char**)(n + 0x8);
    if (m[0xc1] == 0) {
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

// [0x006629F0] sub_006629F0 (86 bytes)
// Returns a std::string by value (hidden return buffer is the first stack arg, plain ret).
// Calls PathRelativePathToA into a local buffer; on failure uses the second path arg
// directly. The resulting C string is used to construct the std::string in the hidden buffer.
extern "C" int mem_00925558;
extern "C" int mem_00924FE4;
extern "C" __declspec(naked) void __cdecl fn_006629F0(void* sret, const char* from, const char* to) {
    __asm {
        sub esp, 0x108
        mov eax, dword ptr [esp + 0x110]
        push esi
        mov esi, dword ptr [esp + 0x118]
        push 0x80
        push esi
        push 0x10
        push eax
        lea ecx, [esp + 0x18]
        push ecx
        mov dword ptr [esp + 0x18], 0
        call dword ptr [mem_00925558]
        test eax, eax
        je short L_no_rel
        lea edx, [esp + 0x8]
        push edx
        jmp short L_ctor
    L_no_rel:
        push esi
    L_ctor:
        mov esi, dword ptr [esp + 0x114]
        mov ecx, esi
        call dword ptr [mem_00924FE4]
        mov eax, esi
        pop esi
        add esp, 0x108
        ret
    }
}

// [0x0066E0C0] sub_0066E0C0 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B59764;
extern "C" int mem_00B59760;

extern "C" __declspec(naked) void* __fastcall fn_0066E0C0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8b37fe
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B59764], al
        jne L_done
        or dword ptr [mem_00B59764], eax
        mov ecx, offset mem_00B59760
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B59760], 0x988244
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B59760
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x0066E120] sub_0066E120 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B5976C;
extern "C" int mem_00B59768;

extern "C" __declspec(naked) void* __fastcall fn_0066E120(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8b381e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B5976C], al
        jne L_done
        or dword ptr [mem_00B5976C], eax
        mov ecx, offset mem_00B59768
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B59768], 0x9883f4
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B59768
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x0066E180] sub_0066E180 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B59774;
extern "C" int mem_00B59770;

extern "C" __declspec(naked) void* __fastcall fn_0066E180(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8b383e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B59774], al
        jne L_done
        or dword ptr [mem_00B59774], eax
        mov ecx, offset mem_00B59770
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B59770], 0x9885a4
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B59770
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x0066E1E0] sub_0066E1E0 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B5977C;
extern "C" int mem_00B59778;

extern "C" __declspec(naked) void* __fastcall fn_0066E1E0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8b385e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B5977C], al
        jne L_done
        or dword ptr [mem_00B5977C], eax
        mov ecx, offset mem_00B59778
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B59778], 0x988754
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B59778
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x0066E240] sub_0066E240 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B59784;
extern "C" int mem_00B59780;

extern "C" __declspec(naked) void* __fastcall fn_0066E240(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8b387e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B59784], al
        jne L_done
        or dword ptr [mem_00B59784], eax
        mov ecx, offset mem_00B59780
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B59780], 0x988904
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B59780
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x0066E2A0] sub_0066E2A0 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B5978C;
extern "C" int mem_00B59788;

extern "C" __declspec(naked) void* __fastcall fn_0066E2A0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8b389e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B5978C], al
        jne L_done
        or dword ptr [mem_00B5978C], eax
        mov ecx, offset mem_00B59788
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B59788], 0x988ab4
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B59788
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x0066E300] sub_0066E300 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B59794;
extern "C" int mem_00B59790;

extern "C" __declspec(naked) void* __fastcall fn_0066E300(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8b38be
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B59794], al
        jne L_done
        or dword ptr [mem_00B59794], eax
        mov ecx, offset mem_00B59790
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B59790], 0x988c64
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B59790
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x0066E360] sub_0066E360 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B5979C;
extern "C" int mem_00B59798;

extern "C" __declspec(naked) void* __fastcall fn_0066E360(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8b38de
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B5979C], al
        jne L_done
        or dword ptr [mem_00B5979C], eax
        mov ecx, offset mem_00B59798
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B59798], 0x988e14
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B59798
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x0066E3C0] sub_0066E3C0 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B597A4;
extern "C" int mem_00B597A0;

extern "C" __declspec(naked) void* __fastcall fn_0066E3C0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8b38fe
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B597A4], al
        jne L_done
        or dword ptr [mem_00B597A4], eax
        mov ecx, offset mem_00B597A0
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B597A0], 0x988fc4
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B597A0
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}
