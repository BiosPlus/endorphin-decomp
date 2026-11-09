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
