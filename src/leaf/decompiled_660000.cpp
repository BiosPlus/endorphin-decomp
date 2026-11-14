// Decompiled translation unit: src/leaf/decompiled_660000.cpp

#include <new>
#include <string>
#include <vector>
#include <iostream>
extern "C" char* __cdecl _fullpath(char* absPath, const char* relPath, size_t maxLength);
extern "C" unsigned long __stdcall GetFileAttributesA(const char* name);
extern "C" int __stdcall CreateDirectoryA(const char* name, void* sa);

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

// [0x0066E420] sub_0066E420 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B597AC;
extern "C" int mem_00B597A8;

extern "C" __declspec(naked) void* __fastcall fn_0066E420(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8b391e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B597AC], al
        jne L_done
        or dword ptr [mem_00B597AC], eax
        mov ecx, offset mem_00B597A8
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B597A8], 0x989174
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B597A8
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x0066E480] sub_0066E480 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B597B4;
extern "C" int mem_00B597B0;

extern "C" __declspec(naked) void* __fastcall fn_0066E480(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8b393e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B597B4], al
        jne L_done
        or dword ptr [mem_00B597B4], eax
        mov ecx, offset mem_00B597B0
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B597B0], 0x989324
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B597B0
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x0066E4E0] sub_0066E4E0 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B597BC;
extern "C" int mem_00B597B8;

extern "C" __declspec(naked) void* __fastcall fn_0066E4E0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8b395e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B597BC], al
        jne L_done
        or dword ptr [mem_00B597BC], eax
        mov ecx, offset mem_00B597B8
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B597B8], 0x9894d4
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B597B8
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x0066E540] sub_0066E540 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B597C4;
extern "C" int mem_00B597C0;

extern "C" __declspec(naked) void* __fastcall fn_0066E540(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8b397e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B597C4], al
        jne L_done
        or dword ptr [mem_00B597C4], eax
        mov ecx, offset mem_00B597C0
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B597C0], 0x989684
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B597C0
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x0066E5A0] sub_0066E5A0 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B597CC;
extern "C" int mem_00B597C8;

extern "C" __declspec(naked) void* __fastcall fn_0066E5A0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8b399e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B597CC], al
        jne L_done
        or dword ptr [mem_00B597CC], eax
        mov ecx, offset mem_00B597C8
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B597C8], 0x989834
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B597C8
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x0066E600] sub_0066E600 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B597D4;
extern "C" int mem_00B597D0;

extern "C" __declspec(naked) void* __fastcall fn_0066E600(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8b39be
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B597D4], al
        jne L_done
        or dword ptr [mem_00B597D4], eax
        mov ecx, offset mem_00B597D0
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B597D0], 0x9899e4
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B597D0
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x0066E660] sub_0066E660 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B597DC;
extern "C" int mem_00B597D8;

extern "C" __declspec(naked) void* __fastcall fn_0066E660(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8b39de
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B597DC], al
        jne L_done
        or dword ptr [mem_00B597DC], eax
        mov ecx, offset mem_00B597D8
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B597D8], 0x989b94
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B597D8
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x0066E6C0] sub_0066E6C0 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B597E4;
extern "C" int mem_00B597E0;

extern "C" __declspec(naked) void* __fastcall fn_0066E6C0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8b39fe
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B597E4], al
        jne L_done
        or dword ptr [mem_00B597E4], eax
        mov ecx, offset mem_00B597E0
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B597E0], 0x989d44
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B597E0
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x0066E720] sub_0066E720 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B597EC;
extern "C" int mem_00B597E8;

extern "C" __declspec(naked) void* __fastcall fn_0066E720(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8b3a1e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B597EC], al
        jne L_done
        or dword ptr [mem_00B597EC], eax
        mov ecx, offset mem_00B597E8
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B597E8], 0x989ef4
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B597E8
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x0066E780] sub_0066E780 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B597F4;
extern "C" int mem_00B597F0;

extern "C" __declspec(naked) void* __fastcall fn_0066E780(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8b3a3e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B597F4], al
        jne L_done
        or dword ptr [mem_00B597F4], eax
        mov ecx, offset mem_00B597F0
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B597F0], 0x98a0a4
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B597F0
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x0066E7E0] sub_0066E7E0 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B597FC;
extern "C" int mem_00B597F8;

extern "C" __declspec(naked) void* __fastcall fn_0066E7E0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8b3a5e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B597FC], al
        jne L_done
        or dword ptr [mem_00B597FC], eax
        mov ecx, offset mem_00B597F8
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B597F8], 0x98a254
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B597F8
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x0066E840] sub_0066E840 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B59804;
extern "C" int mem_00B59800;

extern "C" __declspec(naked) void* __fastcall fn_0066E840(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8b3a7e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B59804], al
        jne L_done
        or dword ptr [mem_00B59804], eax
        mov ecx, offset mem_00B59800
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B59800], 0x98a404
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B59800
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x0066E8A0] sub_0066E8A0 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B5980C;
extern "C" int mem_00B59808;

extern "C" __declspec(naked) void* __fastcall fn_0066E8A0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8b3a9e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B5980C], al
        jne L_done
        or dword ptr [mem_00B5980C], eax
        mov ecx, offset mem_00B59808
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B59808], 0x98a5b4
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B59808
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x0066E900] sub_0066E900 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B59814;
extern "C" int mem_00B59810;

extern "C" __declspec(naked) void* __fastcall fn_0066E900(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8b3abe
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B59814], al
        jne L_done
        or dword ptr [mem_00B59814], eax
        mov ecx, offset mem_00B59810
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B59810], 0x98a68c
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B59810
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x0066E960] sub_0066E960 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B5981C;
extern "C" int mem_00B59818;

extern "C" __declspec(naked) void* __fastcall fn_0066E960(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8b3ade
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B5981C], al
        jne L_done
        or dword ptr [mem_00B5981C], eax
        mov ecx, offset mem_00B59818
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B59818], 0x98a83c
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B59818
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x0066E9C0] sub_0066E9C0 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B59824;
extern "C" int mem_00B59820;

extern "C" __declspec(naked) void* __fastcall fn_0066E9C0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8b3afe
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B59824], al
        jne L_done
        or dword ptr [mem_00B59824], eax
        mov ecx, offset mem_00B59820
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B59820], 0x98a9ec
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B59820
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x0066EA20] sub_0066EA20 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B5982C;
extern "C" int mem_00B59828;

extern "C" __declspec(naked) void* __fastcall fn_0066EA20(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8b3b1e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B5982C], al
        jne L_done
        or dword ptr [mem_00B5982C], eax
        mov ecx, offset mem_00B59828
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B59828], 0x98ab9c
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B59828
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x0066EA80] sub_0066EA80 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B59834;
extern "C" int mem_00B59830;

extern "C" __declspec(naked) void* __fastcall fn_0066EA80(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8b3b3e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B59834], al
        jne L_done
        or dword ptr [mem_00B59834], eax
        mov ecx, offset mem_00B59830
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B59830], 0x98ad4c
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B59830
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x0066EAE0] sub_0066EAE0 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B5983C;
extern "C" int mem_00B59838;

extern "C" __declspec(naked) void* __fastcall fn_0066EAE0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8b3b5e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B5983C], al
        jne L_done
        or dword ptr [mem_00B5983C], eax
        mov ecx, offset mem_00B59838
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B59838], 0x98aefc
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B59838
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x0066EB40] sub_0066EB40 (87 bytes)
extern "C" void ext_0067A670();
extern "C" int mem_00B59844;
extern "C" int mem_00B59840;

extern "C" __declspec(naked) void* __fastcall fn_0066EB40(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8b3b7e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B59844], al
        jne L_done
        or dword ptr [mem_00B59844], eax
        mov ecx, offset mem_00B59840
        mov dword ptr [esp + 0x8], 0
        call ext_0067A670
        mov dword ptr [mem_00B59840], 0x98b0ac
    L_done:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B59840
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x006659F0] sub_006659F0 (90 bytes)
extern "C" int mem_00925134;
extern "C" __declspec(naked) void __fastcall fn_006659F0(void* self, int edx_unused, int a1, int a2, int a3, int a4) {
    __asm {
        push ebx
        push ebp
        mov ebp, dword ptr [mem_00925134]
        push esi
        mov esi, dword ptr [esp + 0x10]
        push edi
        mov edi, dword ptr [esp + 0x18]
    L_head_006659F0:
        test esi, esi
        je L_inv1_006659F0
        cmp esi, dword ptr [esp + 0x1c]
        je L_ok1_006659F0
    L_inv1_006659F0:
        call ebp
    L_ok1_006659F0:
        cmp edi, dword ptr [esp + 0x20]
        je L_done_006659F0
        test esi, esi
        mov ebx, edi
        jne L_ok2_006659F0
        call ebp
    L_ok2_006659F0:
        cmp edi, dword ptr [esi + 0x4]
        jne L_ok3_006659F0
        call ebp
    L_ok3_006659F0:
        test esi, esi
        mov edi, dword ptr [edi]
        jne L_ok4_006659F0
        call ebp
    L_ok4_006659F0:
        cmp ebx, dword ptr [esi + 0x4]
        jne L_ok5_006659F0
        call ebp
    L_ok5_006659F0:
        mov ecx, dword ptr [ebx + 0x8]
        test ecx, ecx
        je L_head_006659F0
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 0x1
        call edx
        jmp L_head_006659F0
    L_done_006659F0:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x10
    }
}

// [0x00665D70] sub_00665D70 (69 bytes)
extern "C" void ext_006659F0();

extern "C" __declspec(naked) void __fastcall fn_00665D70(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x4]
        mov ecx, dword ptr [eax]
        push eax
        push esi
        push ecx
        push esi
        mov ecx, esi
        call ext_006659F0
        mov ecx, dword ptr [esi + 0x4]
        mov eax, dword ptr [ecx]
        mov dword ptr [ecx], ecx
        mov ecx, dword ptr [esi + 0x4]
        mov dword ptr [ecx + 0x4], ecx
        cmp eax, dword ptr [esi + 0x4]
        mov dword ptr [esi + 0x8], 0x0
        je L_done_00665D70
        push edi
        _emit 0x8d
        _emit 0x49
        _emit 0x00
    L_loop_00665D70:
        mov edi, dword ptr [eax]
        push eax
        call ext_006A5C5C
        add esp, 0x4
        cmp edi, dword ptr [esi + 0x4]
        mov eax, edi
        jne L_loop_00665D70
        pop edi
    L_done_00665D70:
        pop esi
        ret
    }
}

// [0x00665D20] sub_00665D20 (76 bytes)
extern "C" void ext_004369D0();
extern "C" void ext_006659F0();

extern "C" __declspec(naked) void __fastcall fn_00665D20(void* self) {
    __asm {
        push -1
        push 0x008B2DB8
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        mov eax, dword ptr [esi + 0x4]
        mov ecx, dword ptr [eax]
        push eax
        push esi
        push ecx
        push esi
        mov ecx, esi
        mov dword ptr [esp + 0x20], 0
        call ext_006659F0
        mov ecx, esi
        call ext_004369D0
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00663060] sub_00663060 (92 bytes)
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00663060(void* self) {
    __asm {
        push -1
        push 0x0089DBE5
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        lea ecx, [esi + 0x38]
        mov dword ptr [esp + 0x10], 0x1
        call dword ptr [mem_00924FF4]
        lea ecx, [esi + 0x1c]
        mov byte ptr [esp + 0x10], 0x0
        call dword ptr [mem_00924FF4]
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

// [0x00665990] sub_00665990 (96 bytes)
extern "C" void ext_006A5C5C();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_00665990(void* self) {
    __asm {
        sub esp, 0x8
        push ebx
        mov ebx, dword ptr [esp + 0x14]
        test ebx, ebx
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x20]
        push edi
        mov edi, ecx
        mov dword ptr [esp + 0x10], ebx
        jne L_66_1
        call dword ptr [mem_00925134]
    L_66_1:
        cmp esi, dword ptr [ebx + 0x4]
        jne L_66_2
        call dword ptr [mem_00925134]
    L_66_2:
        cmp esi, dword ptr [edi + 0x4]
        mov ebp, dword ptr [esi]
        je L_66_3
        mov eax, dword ptr [esi + 0x4]
        mov ecx, ebp
        mov dword ptr [eax], ecx
        mov edx, dword ptr [esi]
        mov eax, dword ptr [esi + 0x4]
        push esi
        mov dword ptr [edx + 0x4], eax
        call ext_006A5C5C
        add esp, 0x4
        add dword ptr [edi + 0x8], -0x1
    L_66_3:
        mov eax, dword ptr [esp + 0x1c]
        pop edi
        pop esi
        mov dword ptr [eax + 0x4], ebp
        pop ebp
        mov dword ptr [eax], ebx
        pop ebx
        add esp, 0x8
        ret 0xc
    }
}

// [0x00662AB0] sub_00662AB0 (97 bytes)
// Returns a std::string by value (hidden return buffer is the stack arg, ret 0).
// Builds a temp file name: GetTempPathA, then GetTempFileNameA with the prefix
// taken from the global std::string at 0x00B5925C, then constructs the result.
extern "C" int mem_0092424C;
extern "C" int mem_00924FF0;
extern "C" int mem_00924250;
extern "C" int mem_00924FE4;
extern "C" int mem_00B5925C;

extern "C" __declspec(naked) std::string* __cdecl fn_00662AB0() {
    __asm {
        sub esp, 0x20c
        push esi
        lea eax, [esp + 0x8]
        push eax
        push 0x104
        mov dword ptr [esp + 0xc], 0x0
        call dword ptr [mem_0092424C]
        lea ecx, [esp + 0x10c]
        push ecx
        push 0x0
        mov ecx, offset mem_00B5925C
        call dword ptr [mem_00924FF0]
        push eax
        lea edx, [esp + 0x14]
        push edx
        call dword ptr [mem_00924250]
        mov esi, dword ptr [esp + 0x214]
        lea eax, [esp + 0x10c]
        push eax
        mov ecx, esi
        call dword ptr [mem_00924FE4]
        mov eax, esi
        pop esi
        add esp, 0x20c
        ret
    }
}

// [0x00664CD0] sub_00664CD0 (103 bytes)
extern "C" void ext_0065F7F0();
extern "C" void ext_00664B50();

extern "C" __declspec(naked) void* __cdecl fn_00664CD0() {
    __asm {
        sub esp, 0x8
        mov eax, dword ptr [esp + 0x18]
        push ebx
        mov ebx, dword ptr [esp + 0x18]
        push ebp
        mov ebp, dword ptr [esp + 0x18]
        push esi
        push edi
        mov edi, dword ptr [esp + 0x2c]
        mov ecx, ebx
        sub ecx, ebp
        push ecx
        lea ecx, [esp + 0x14]
        mov dword ptr [esp + 0x14], eax
        mov dword ptr [esp + 0x18], edi
        call ext_0065F7F0
        mov edx, dword ptr [esp + 0x10]
        mov esi, dword ptr [esp + 0x1c]
        mov eax, dword ptr [esp + 0x14]
        mov byte ptr [esp + 0x24], 0x0
        mov ecx, dword ptr [esp + 0x24]
        push ecx
        mov dword ptr [esi], edx
        mov edx, dword ptr [esp + 0x28]
        push edx
        mov dword ptr [esi + 0x4], eax
        mov eax, dword ptr [esp + 0x38]
        push eax
        push edi
        push ebx
        push ebp
        call ext_00664B50
        add esp, 0x18
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x8
        ret
    }
}

// [0x00664D40] sub_00664D40 (103 bytes)
extern "C" void ext_00664BA0();

extern "C" __declspec(naked) void* __cdecl fn_00664D40() {
    __asm {
        sub esp, 0x8
        mov eax, dword ptr [esp + 0x18]
        push ebx
        mov ebx, dword ptr [esp + 0x18]
        push ebp
        mov ebp, dword ptr [esp + 0x18]
        push esi
        push edi
        mov edi, dword ptr [esp + 0x2c]
        mov ecx, ebx
        sub ecx, ebp
        push ecx
        lea ecx, [esp + 0x14]
        mov dword ptr [esp + 0x14], eax
        mov dword ptr [esp + 0x18], edi
        call ext_0065F7F0
        mov edx, dword ptr [esp + 0x10]
        mov esi, dword ptr [esp + 0x1c]
        mov eax, dword ptr [esp + 0x14]
        mov byte ptr [esp + 0x24], 0x0
        mov ecx, dword ptr [esp + 0x24]
        push ecx
        mov dword ptr [esi], edx
        mov edx, dword ptr [esp + 0x28]
        push edx
        mov dword ptr [esi + 0x4], eax
        mov eax, dword ptr [esp + 0x38]
        push eax
        push edi
        push ebx
        push ebp
        call ext_00664BA0
        add esp, 0x18
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x8
        ret
    }
}

// [0x00660280] sub_00660280 (104 bytes)
extern "C" int mem_00B5907C;
extern "C" int mem_00B59080;
extern "C" int mem_00B59084;
extern "C" int mem_00925134;

extern "C" __declspec(naked) int __fastcall fn_00660280(void* self) {
    __asm {
        mov edx, dword ptr [mem_00B59080]
        sub esp, 0x8
        test edx, edx
        je empty_00660280
        mov eax, dword ptr [mem_00B59084]
        mov ecx, eax
        sub ecx, edx
        sar ecx, 0x2
        je empty_00660280
        cmp edx, eax
        push ebx
        mov ebx, dword ptr [mem_00925134]
        push esi
        mov esi, eax
        jbe chk_00660280
        call ebx
        mov eax, dword ptr [mem_00B59084]
        mov edx, dword ptr [mem_00B59080]
chk_00660280:
        mov ecx, offset mem_00B5907C
        push edi
        mov edi, ecx
        lea ecx, [esi - 0x4]
        cmp ecx, eax
        mov dword ptr [esp + 0x10], esi
        ja bad1_00660280
        cmp ecx, edx
        jae ok1_00660280
bad1_00660280:
        call ebx
ok1_00660280:
        add esi, -0x4
        cmp esi, dword ptr [edi + 0x8]
        pop edi
        jb ok2_00660280
        call ebx
ok2_00660280:
        mov eax, dword ptr [esi]
        pop esi
        pop ebx
        add esp, 0x8
        ret
empty_00660280:
        xor eax, eax
        add esp, 0x8
        ret
    }
}

// [0x00667EA0] sub_00667EA0 (105 bytes)
extern "C" void ext_004774B0();
extern "C" int mem_00925134;
extern "C" int mem_00924EF4;

extern "C" __declspec(naked) void __fastcall fn_00667EA0(void* self, int edx_unused, void** out, const void* key) {
    __asm {
        sub esp, 0x10
        push ebx
        mov ebx, dword ptr [esp + 0x1c]
        push esi
        push edi
        push ebx
        mov esi, ecx
        call ext_004774B0
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

// [0x00668D10] sub_00668D10 (105 bytes)
extern "C" void ext_00472730();
extern "C" int mem_00925134;
extern "C" int mem_00924EF4;

extern "C" __declspec(naked) void __fastcall fn_00668D10(void* self, int edx_unused, void** out, const void* key) {
    __asm {
        sub esp, 0x10
        push ebx
        mov ebx, dword ptr [esp + 0x1c]
        push esi
        push edi
        push ebx
        mov esi, ecx
        call ext_00472730
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

// [0x0066E050] sub_0066E050 (105 bytes)
extern "C" __declspec(naked) void __fastcall fn_0066E050(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8b37d8
        push eax
        mov dword ptr fs:[0x0], esp
        push ebx
        push esi
        push edi
        mov edi, dword ptr [esp + 0x1c]
        test edi, edi
        mov esi, ecx
        je short L_done_0066E050
        lea ebx, [esi + 0x14]
        mov ecx, ebx
        mov dword ptr [esp + 0x1c], ebx
        call ext_0065C640
        mov ecx, edi
        mov dword ptr [esp + 0x14], 0x0
        call dword ptr [mem_00924FF4]
        mov eax, dword ptr [esi]
        mov dword ptr [edi], eax
        mov ecx, ebx
        mov dword ptr [esi], edi
        mov dword ptr [esp + 0x14], 0xffffffff
        call ext_0065C650
    L_done_0066E050:
        mov ecx, dword ptr [esp + 0xc]
        pop edi
        pop esi
        mov dword ptr fs:[0x0], ecx
        pop ebx
        add esp, 0xc
        ret 0x4
    }
}

// [0x00660870] sub_00660870 (106 bytes)
extern "C" void ext_00672810();
extern "C" int mem_00925134;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00660870(void* self, int edx_unused) {
    __asm {
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x10]
        test esi, esi
        mov ebp, ecx
        je L_invalid
        cmp esi, dword ptr [esp + 0x18]
        je L_cont
    L_invalid:
        call dword ptr [mem_00925134]
    L_cont:
        mov eax, dword ptr [esp + 0x1c]
        mov ecx, dword ptr [esp + 0x14]
        cmp ecx, eax
        je L_store
        push ebx
        push edi
        push ecx
        mov ecx, dword ptr [ebp + 8]
        push ecx
        push eax
        call ext_00672810
        mov edi, dword ptr [ebp + 8]
        mov ebx, eax
        add esp, 0xc
        cmp ebx, edi
        mov esi, ebx
        je L_done
        nop
    L_loop:
        mov ecx, esi
        call dword ptr [mem_00924FF4]
        add esi, 0x20
        cmp esi, edi
        jne L_loop
    L_done:
        mov ecx, dword ptr [esp + 0x1c]
        mov esi, dword ptr [esp + 0x18]
        pop edi
        mov dword ptr [ebp + 8], ebx
        pop ebx
    L_store:
        mov eax, dword ptr [esp + 0xc]
        mov dword ptr [eax], esi
        pop esi
        mov dword ptr [eax + 4], ecx
        pop ebp
        ret 0x14
    }
}

// [0x00667030] sub_00667030 (108 bytes)
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_00667030(void* self) {
    __asm {
        push esi
        mov esi, ecx
        cmp dword ptr [esi], 0
        push edi
        mov edi, dword ptr [mem_00925134]
        jne L_skip_call_00667030
        call edi
    L_skip_call_00667030:
        mov eax, dword ptr [esi + 4]
        cmp byte ptr [eax + 39h], 0
        je L_not_nil_00667030
        call edi
        pop edi
        pop esi
        ret
    L_not_nil_00667030:
        mov ecx, dword ptr [eax + 8]
        cmp byte ptr [ecx + 39h], 0
        jne L_right_nil_00667030
        mov eax, dword ptr [ecx]
        cmp byte ptr [eax + 39h], 0
        jne L_store_left_00667030
    L_leftmost_loop_00667030:
        mov ecx, eax
        mov eax, dword ptr [ecx]
        cmp byte ptr [eax + 39h], 0
        je L_leftmost_loop_00667030
    L_store_left_00667030:
        pop edi
        mov dword ptr [esi + 4], ecx
        pop esi
        ret
    L_right_nil_00667030:
        mov eax, dword ptr [eax + 4]
        cmp byte ptr [eax + 39h], 0
        jne L_done_00667030
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
    L_loop_00667030:
        mov ecx, dword ptr [esi + 4]
        cmp ecx, dword ptr [eax + 8]
        jne L_done_00667030
        mov dword ptr [esi + 4], eax
        mov edx, eax
        mov eax, dword ptr [edx + 4]
        cmp byte ptr [eax + 39h], 0
        je L_loop_00667030
    L_done_00667030:
        pop edi
        mov dword ptr [esi + 4], eax
        pop esi
        ret
    }
}

// [0x006602F0] sub_006602F0 (76 bytes)
extern "C" void ext_004EC3F0();

typedef void* (__thiscall *Fn006602F0_VF0)(void* self);
typedef void* (__thiscall *Fn006602F0_VF1)(void* self, int arg);
typedef int (__thiscall *Fn006602F0_Search)(void* self, void* a1);

extern "C" unsigned char __stdcall fn_006602F0(void* node, void** out) {
    void* cur = node;
    while (cur != 0) {
        void* match = ((Fn006602F0_VF0)(*(void***)cur)[11])(cur);
        if (match != 0) {
            void* r = (void*)((Fn006602F0_Search)ext_004EC3F0)(match, *out);
            if (r != 0) {
                *out = r;
                return 1;
            }
        }
        cur = ((Fn006602F0_VF1)(*(void***)cur)[4])(cur, 0);
    }
    return 0;
}

// [0x006678A0] sub_006678A0 (81 bytes)
extern "C" void ext_00667F10();
extern "C" void ext_00668D80();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_006678A0(void* self) {
    __asm {
        mov edx, dword ptr [esp + 0x4]
        mov eax, dword ptr [esp + 0x8]
        shl edx, 0x4
        push eax
        lea ecx, [edx + ecx + 0x8]
        call ext_00668D80
        test eax, eax
        je L_ret0_006678A0
        mov ecx, dword ptr [esp + 0xc]
        cmp dword ptr [ecx + 0x14], 0x0
        je L_d4_006678A0
        push ecx
        mov ecx, eax
        call ext_00667F10
        test eax, eax
        jne L_ret_006678A0
    L_ret0_006678A0:
        xor eax, eax
    L_ret_006678A0:
        ret 0xc
    L_d4_006678A0:
        cmp dword ptr [eax + 0xc], 0x0
        je L_ret0_006678A0
        mov ecx, dword ptr [eax + 0x8]
        push esi
        mov esi, dword ptr [ecx]
        cmp esi, ecx
        jne L_skip_006678A0
        call dword ptr [mem_00925134]
    L_skip_006678A0:
        lea eax, [esi + 0x28]
        pop esi
        ret 0xc
    }
}

// [0x00665C20] sub_00665C20 (117 bytes)
struct Lst00665C20Val { virtual ~Lst00665C20Val(); };
struct Lst00665C20Node { Lst00665C20Node* _Next; Lst00665C20Node* _Prev; Lst00665C20Val* _Myval; };
struct Lst00665C20Head { int _Pad; Lst00665C20Node* _Myhead; unsigned _Mysize; };
extern "C" void ext_006A5C5C();
extern "C" int mem_00925134;
extern "C" void __fastcall fn_00665C20(void* self, int edx_unused, Lst00665C20Head* a1) {
    typedef void (__cdecl *InvFn)();
    if (a1->_Mysize == 0) return;
    InvFn inv = reinterpret_cast<InvFn>(mem_00925134);
    do {
        Lst00665C20Node* t = a1->_Myhead->_Prev;
        if (t == a1->_Myhead) inv();
        if (t == a1->_Myhead) inv();
        if (t->_Myval) delete t->_Myval;
        t = a1->_Myhead->_Prev;
        if (t == a1->_Myhead) inv();
        if (t == a1->_Myhead) {
            inv();
            if (t == a1->_Myhead) continue;
        }
        t->_Prev->_Next = t->_Next;
        t->_Next->_Prev = t->_Prev;
        reinterpret_cast<void (__cdecl *)(void*)>(ext_006A5C5C)(t);
        a1->_Mysize = a1->_Mysize - 1;
    } while (a1->_Mysize != 0);
}

// [0x00666120] sub_00666120 (65 bytes)
extern "C" void __fastcall fn_00666120(void* self) {
    typedef void (__thiscall *ThisFn)(void* self, Lst00665C20Head* a1);
    typedef void (__thiscall *DelFn)(void* self, int flags);
    char* p = (char*)self;
    ThisFn clear = reinterpret_cast<ThisFn>(fn_00665C20);
    clear(self, (Lst00665C20Head*)(p + 0x10));
    clear(self, (Lst00665C20Head*)(p + 0x1c));
    void* obj = *(void**)self;
    if (obj) {
        void** vtbl = *(void***)obj;
        reinterpret_cast<DelFn>(vtbl[0])(obj, 1);
    }
    *(void**)self = 0;
    *(int*)(p + 0x4) = 0;
    *(int*)(p + 0xc) = 0;
    fn_00665B80(self);
}

// [0x00668150] sub_00668150 (117 bytes)
extern "C" void ext_00667F80();
extern "C" void ext_006A6C87();
extern "C" int mem_00B594A4;
extern "C" int mem_00B594B4;

extern "C" __declspec(naked) void* __fastcall fn_00668150(void* self, int edx_unused, int a1, int a2) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        mov edx, dword ptr [esp + 0x4]
        push -0x1
        push 0x8b307e
        push eax
        mov eax, dword ptr [esp + 0x14]
        shl edx, 0x4
        mov dword ptr fs:[0x0], esp
        push eax
        lea ecx, [edx + ecx + 0x8]
        call ext_00668D80
        test eax, eax
        jne L_ret_fn_00668150
        mov eax, 0x1
        test byte ptr [mem_00B594B4], al
        jne L_guarded_fn_00668150
        or dword ptr [mem_00B594B4], eax
        mov ecx, offset mem_00B594A4
        mov dword ptr [esp + 0x8], 0x0
        call ext_00667F80
        push 0x921650
        call ext_006A6C87
        add esp, 0x4
    L_guarded_fn_00668150:
        mov eax, offset mem_00B594A4
    L_ret_fn_00668150:
        mov ecx, dword ptr [esp]
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret 0x8
    }
}

// [0x00665CA0] sub_00665CA0 (119 bytes)
extern "C" void ext_006A5C5C();
extern "C" void ext_00665B80();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_00665CA0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x8]
        cmp eax, -1
        je tail_call
        push ebx
        push edi
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
loop_top:
        cmp dword ptr [esi + 0x18], eax
        jle loop_done
        mov eax, dword ptr [esi + 0x14]
        mov edi, dword ptr [eax]
        cmp edi, eax
        jne check_head2
        call dword ptr [mem_00925134]
check_head2:
        mov ecx, dword ptr [esi + 0x14]
        mov ebx, dword ptr [edi + 0x8]
        mov edi, dword ptr [ecx]
        cmp edi, ecx
        jne unlink_node
        call dword ptr [mem_00925134]
unlink_node:
        cmp edi, dword ptr [esi + 0x14]
        je skip_unlink
        mov edx, dword ptr [edi + 0x4]
        mov eax, dword ptr [edi]
        mov dword ptr [edx], eax
        mov ecx, dword ptr [edi]
        mov edx, dword ptr [edi + 0x4]
        push edi
        mov dword ptr [ecx + 0x4], edx
        call ext_006A5C5C
        add esp, 0x4
        add dword ptr [esi + 0x18], -1
skip_unlink:
        test ebx, ebx
        je no_delete
        mov eax, dword ptr [ebx]
        mov edx, dword ptr [eax]
        push 0x1
        mov ecx, ebx
        call edx
no_delete:
        mov eax, dword ptr [esi + 0x8]
        cmp eax, -1
        jne loop_top
loop_done:
        pop edi
        pop ebx
tail_call:
        mov ecx, esi
        pop esi
        jmp ext_00665B80
    }
}

// [0x00665DC0] sub_00665DC0 (119 bytes)
// MacroCommand-style ctor: Command base ctor (thiscall, 1 stack arg), vtable 0x987A1C,
// std::string copy-ctor from arg1 at this+0x10, list-like head at this+0x2c, zeroed tail fields.
extern "C" void ext_006657F0();
extern "C" void ext_006658D0();
extern "C" int mem_00924FE0;

extern "C" __declspec(naked) void __fastcall fn_00665DC0(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        push -1
        push 0x008B2DEF
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        mov eax, dword ptr [esp + 0x18]
        push ebx
        push esi
        push edi
        mov esi, ecx
        push eax
        mov dword ptr [esp + 0x10], esi
        call ext_006657F0
        mov ecx, dword ptr [esp + 0x20]
        push ecx
        xor ebx, ebx
        lea ecx, [esi + 0x10]
        mov dword ptr [esp + 0x1c], ebx
        mov dword ptr [esi], 0x00987A1C
        call dword ptr [mem_00924FE0]
        lea edi, [esi + 0x2c]
        mov ecx, edi
        mov byte ptr [esp + 0x18], 0x1
        call ext_006658D0
        mov dword ptr [edi + 0x4], eax
        mov dword ptr [edi + 0x8], ebx
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [esi + 0x3c], ebx
        mov dword ptr [esi + 0x40], ebx
        mov dword ptr [esi + 0x44], ebx
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 0x8
    }
}

// [0x006668B0] sub_006668B0 (120 bytes)
extern "C" int mem_00924FF4;
extern "C" __declspec(naked) void __fastcall fn_006668B0(void* self) {
    __asm {
        push -1
        push 0x8b2f2d
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 4], esi
        lea ecx, [esi + 0x74]
        mov dword ptr [esp + 0x10], 3
        call dword ptr [mem_00924FF4]
        lea ecx, [esi + 0x54]
        mov byte ptr [esp + 0x10], 2
        call dword ptr [mem_00924FF4]
        lea ecx, [esi + 0x38]
        mov byte ptr [esp + 0x10], 1
        call dword ptr [mem_00924FF4]
        lea ecx, [esi + 0x1c]
        mov byte ptr [esp + 0x10], 0
        call dword ptr [mem_00924FF4]
        mov ecx, esi
        mov dword ptr [esp + 0x10], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00664ED0] sub_00664ED0 (120 bytes)
extern "C" void ext_00664CD0();
extern "C" int mem_009250D0;
extern "C" int mem_0092511C;

extern "C" __declspec(naked) void* __cdecl fn_00664ED0(void* self) {
    __asm {
        sub esp, 0x24
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x34]
        push edi
        lea eax, [esp + 0x14]
        push eax
        mov ecx, esi
        mov byte ptr [esp + 0x14], 0x0
        call dword ptr [mem_009250D0]
        mov edi, dword ptr [eax]
        mov ebx, dword ptr [eax + 0x4]
        lea ecx, [esp + 0x1c]
        push ecx
        mov ecx, esi
        call dword ptr [mem_0092511C]
        mov edx, dword ptr [eax]
        mov ebp, dword ptr [eax + 0x4]
        lea eax, [esp + 0x2c]
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0x28], edx
        call dword ptr [mem_009250D0]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [esp + 0x38]
        mov eax, dword ptr [eax + 0x4]
        push edx
        mov edx, dword ptr [esp + 0x14]
        mov dword ptr [esp + 0x28], ecx
        mov ecx, dword ptr [esp + 0x3c]
        push ecx
        push edx
        push ebx
        push edi
        push ebp
        push eax
        lea eax, [esp + 0x40]
        push eax
        call ext_00664CD0
        add esp, 0x20
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x24
        ret
    }
}

// [0x00666930] sub_00666930 (77 bytes)
extern "C" void ext_006668B0();
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00666930(void* self) {
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
        call ext_006668B0
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

// [0x00665010] sub_00665010 (120 bytes)
extern "C" void ext_00664D40();
extern "C" int mem_009250D0;
extern "C" int mem_0092511C;

extern "C" __declspec(naked) void* __cdecl fn_00665010(void* self) {
    __asm {
        sub esp, 0x24
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x34]
        push edi
        lea eax, [esp + 0x14]
        push eax
        mov ecx, esi
        mov byte ptr [esp + 0x14], 0x0
        call dword ptr [mem_009250D0]
        mov edi, dword ptr [eax]
        mov ebx, dword ptr [eax + 0x4]
        lea ecx, [esp + 0x1c]
        push ecx
        mov ecx, esi
        call dword ptr [mem_0092511C]
        mov edx, dword ptr [eax]
        mov ebp, dword ptr [eax + 0x4]
        lea eax, [esp + 0x2c]
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0x28], edx
        call dword ptr [mem_009250D0]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [esp + 0x38]
        mov eax, dword ptr [eax + 0x4]
        push edx
        mov edx, dword ptr [esp + 0x14]
        mov dword ptr [esp + 0x28], ecx
        mov ecx, dword ptr [esp + 0x3c]
        push ecx
        push edx
        push ebx
        push edi
        push ebp
        push eax
        lea eax, [esp + 0x40]
        push eax
        call ext_00664D40
        add esp, 0x20
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x24
        ret
    }
}

// [0x00666A60] sub_00666A60 (121 bytes)
extern "C" void ext_006408C0();
extern "C" int mem_00924FE8;

extern "C" __declspec(naked) void* __fastcall fn_00666A60(void* self, int edx_unused, void* a1) {
    __asm {
        push -1
        push 0x8b2f5a
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x18
        push esi
        push edi
        mov dword ptr [esp + 0x8], 0
        mov edi, dword ptr [esp + 0x30]
        mov esi, ecx
        mov ecx, edi
        mov dword ptr [esp + 0x28], 0
        call dword ptr [mem_00924FE8]
        push 2
        push 0
        push edi
        lea ecx, [esp + 0x18]
        mov dword ptr [esp + 0x34], 0
        mov dword ptr [esp + 0x14], 1
        call ext_006408C0
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x14]
        lea ecx, [esp + 0xc]
        push ecx
        mov ecx, esi
        call edx
        mov ecx, dword ptr [esp + 0x20]
        mov eax, edi
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x24
        ret 0x4
    }
}

// [0x00662120] sub_00662120 (32 bytes)
extern "C" void ext_00466BA0();
extern "C" __declspec(naked) void __fastcall fn_00662120(void* self) {
    __asm {
        mov eax, dword ptr [ecx + 0x4]
        mov edx, dword ptr [eax + 0x64]
        mov edx, dword ptr [edx]
        add eax, 0x60
        push 0x0
        mov dword ptr [ecx + 0x8], eax
        mov dword ptr [ecx + 0xc], edx
        mov byte ptr [ecx], 0x1
        push ecx
        add ecx, 0x38
        call ext_00466BA0
        ret
    }
}

// [0x00661F10] sub_00661F10 (91 bytes)
extern "C" __declspec(naked) bool __fastcall fn_00661F10(void* self) {
    __asm {
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 0x8], 0x0
        push edi
        mov edi, dword ptr [mem_00925134]
        jne L_661F22
        call edi
L_661F22:
        mov eax, dword ptr [esi + 0x8]
        mov ecx, dword ptr [esi + 0xc]
        cmp ecx, dword ptr [eax + 0x4]
        jne L_661F2F
        call edi
L_661F2F:
        mov edx, dword ptr [esi + 0xc]
        cmp dword ptr [edx + 0x8], 0x1
        jle L_661F66
        cmp dword ptr [esi + 0x8], 0x0
        jne L_661F40
        call edi
L_661F40:
        mov eax, dword ptr [esi + 0xc]
        mov eax, dword ptr [eax + 0x4]
        mov ecx, dword ptr [esi + 0x8]
        mov dword ptr [esi + 0xc], eax
        cmp eax, dword ptr [ecx + 0x4]
        jne L_661F53
        call edi
L_661F53:
        push 0x0
        push esi
        lea ecx, [esi + 0x38]
        mov byte ptr [esi], 0x1
        call ext_00466BA0
        pop edi
        mov al, 0x1
        pop esi
        ret
L_661F66:
        pop edi
        xor al, al
        pop esi
        ret
    }
}

// [0x00665EE0] sub_00665EE0 (124 bytes)
extern "C" void ext_006658D0();
extern "C" int mem_00B59420;

extern "C" __declspec(naked) void* __fastcall fn_00665EE0(void* self) {
    __asm {
        push -1
        push 0x008B2E5E
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push ebx
        push esi
        mov esi, ecx
        xor ebx, ebx
        push edi
        mov dword ptr [esp + 0xc], esi
        mov dword ptr [esi], ebx
        lea edi, [esi + 0x10]
        mov ecx, edi
        mov dword ptr [esp + 0x18], ebx
        mov dword ptr [esi + 0x4], ebx
        mov dword ptr [esi + 0x8], 0x3e8
        mov dword ptr [esi + 0xc], ebx
        call ext_006658D0
        mov dword ptr [edi + 0x4], eax
        mov dword ptr [edi + 0x8], ebx
        lea edi, [esi + 0x1c]
        mov ecx, edi
        mov byte ptr [esp + 0x18], 0x1
        call ext_006658D0
        mov dword ptr [edi + 0x4], eax
        mov dword ptr [edi + 0x8], ebx
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr [esi + 0x2c], ebx
        mov dword ptr [esi + 0x30], ebx
        mov dword ptr [esi + 0x34], ebx
        pop edi
        mov dword ptr [mem_00B59420], esi
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00662B70] sub_00662B70 (125 bytes)
extern "C" int mem_00924FE0;
extern "C" int mem_00924EAC;
extern "C" int mem_0092500C;
extern "C" int mem_00924EC0;

extern "C" __declspec(naked) void* __cdecl fn_00662B70(void* ret, const void* s) {
    __asm {
        push -1
        push 0x8864ea
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        mov eax, dword ptr [esp + 0x18]
        push esi
        mov dword ptr [esp + 0x4], 0x0
        mov esi, dword ptr [esp + 0x18]
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0x14], 0x0
        call dword ptr [mem_00924FE0]
        mov ecx, esi
        mov dword ptr [esp + 0x10], 0x0
        mov dword ptr [esp + 0x4], 0x1
        call dword ptr [mem_00924EAC]
        sub eax, 0x1
        push eax
        mov ecx, esi
        call dword ptr [mem_0092500C]
        cmp byte ptr [eax], 0x5c
        je short tail_done
        push 0x5c
        mov ecx, esi
        call dword ptr [mem_00924EC0]
tail_done:
        mov ecx, dword ptr [esp + 0x8]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00664840] sub_00664840 (125 bytes)
// std::string-returning float formatter: snprintf("%.6f"), strip trailing zeros
// after the '.', then construct the hidden-return std::string from the buffer.
extern "C" int mem_009251E0;
extern "C" int mem_009252DC;
extern "C" int mem_00924FE4;
static const char kFmt_00664840[] = "%.6f";
extern "C" __declspec(naked) void __cdecl fn_00664840(void) {
    __asm {
        sub esp, 0x38
        fld dword ptr [esp + 0x40]
        push esi
        sub esp, 0x8
        fstp qword ptr [esp]
        push offset kFmt_00664840
        lea eax, [esp + 0x14]
        push 0x32
        push eax
        mov dword ptr [esp + 0x18], 0x0
        call dword ptr [mem_009251E0]
        lea ecx, [esp + 0x1c]
        push 0x2e
        push ecx
        call dword ptr [mem_009252DC]
        lea ecx, [esp + 0x24]
        add esp, 0x1c
        lea esi, [ecx + 0x1]
        nop
    len_loop:
        mov dl, byte ptr [ecx]
        add ecx, 0x1
        test dl, dl
        jne len_loop
        sub ecx, esi
        lea ecx, [esp + ecx + 0x7]
        add eax, 0x1
        cmp ecx, eax
        jbe done
    strip_loop:
        cmp byte ptr [ecx], 0x30
        jne done
        mov byte ptr [ecx], 0x0
        sub ecx, 0x1
        cmp ecx, eax
        ja strip_loop
    done:
        mov esi, dword ptr [esp + 0x40]
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

// [0x00661620] sub_00661620 (33 bytes)
extern "C" void* __cdecl ext_00681E50(int arg);

extern "C" void* __fastcall fn_00661620(void* self) {
    int* p = (int*)self;
    p[1] = 0;
    p[0] = (int)ext_00681E50(0);
    p[1] = 0;
    return self;
}

// [0x00661650] sub_00661650 (35 bytes)
extern "C" void* __fastcall fn_00661650(void* self, int edx_unused, int a1) {
    int* p = (int*)self;
    p[1] = 0;
    p[0] = (int)ext_00681E50(1);
    p[1] = a1;
    return self;
}

// [0x00661680] sub_00661680 (38 bytes)
extern "C" void* __fastcall fn_00661680(void* self, int edx_unused, int a1, int a2) {
    int* p = (int*)self;
    p[1] = 0;
    p[0] = (int)ext_00681E50(a1);
    p[1] = a2;
    return self;
}

// [0x0066A220] sub_0066A220 (127 bytes)
extern "C" __declspec(naked) void __fastcall fn_0066A220(void* self) {
    __asm {
        fld1
        fcom dword ptr [ecx]
        fnstsw ax
        fldz
        test ah, 0x5
        jp short s1_p
        fxch st(1)
        fst dword ptr [ecx]
        jmp short s2
    s1_p:
        fcom dword ptr [ecx]
        fnstsw ax
        test ah, 0x41
        jne short s1_j
        fst dword ptr [ecx]
    s1_j:
        fxch st(1)
    s2:
        fcom dword ptr [ecx + 0x4]
        fnstsw ax
        test ah, 0x5
        jp short s2_p
        fst dword ptr [ecx + 0x4]
        jmp short s3
    s2_p:
        fxch st(1)
        fcom dword ptr [ecx + 0x4]
        fnstsw ax
        test ah, 0x41
        jne short s2_j
        fst dword ptr [ecx + 0x4]
    s2_j:
        fxch st(1)
    s3:
        fcom dword ptr [ecx + 0x8]
        fnstsw ax
        test ah, 0x5
        jp short s3_p
        fst dword ptr [ecx + 0x8]
        jmp short s4
    s3_p:
        fxch st(1)
        fcom dword ptr [ecx + 0x8]
        fnstsw ax
        test ah, 0x41
        jne short s3_j
        fst dword ptr [ecx + 0x8]
    s3_j:
        fxch st(1)
    s4:
        fcom dword ptr [ecx + 0xc]
        fnstsw ax
        test ah, 0x5
        jp short s4_p
        fstp st(1)
    s4_st:
        fstp dword ptr [ecx + 0xc]
        ret
    s4_p:
        fstp st(0)
        fcom dword ptr [ecx + 0xc]
        fnstsw ax
        test ah, 0x41
        je short s4_st
        fstp st(0)
        ret
    }
}

// [0x0066A4E0] sub_0066A4E0 (32 bytes)
extern "C" void ext_0066A220();
extern "C" __declspec(naked) void __fastcall fn_0066A4E0(void* self) {
    __asm {
        call ext_0066A220
        fld dword ptr [ecx]
        fld1
        fld st(0)
        fsubrp st(2), st
        fxch st(1)
        fstp dword ptr [ecx]
        fld dword ptr [ecx + 0x4]
        fsubr st, st(1)
        fstp dword ptr [ecx + 0x4]
        fsub dword ptr [ecx + 0x8]
        fstp dword ptr [ecx + 0x8]
        ret
    }
}

// [0x0066A2E0] sub_0066A2E0 (47 bytes)
extern "C" __declspec(naked) void* __fastcall fn_0066A2E0(void* self, int edx_unused, const float* other) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        fld dword ptr [eax]
        fadd dword ptr [ecx]
        fstp dword ptr [ecx]
        fld dword ptr [eax + 0x4]
        fadd dword ptr [ecx + 0x4]
        fstp dword ptr [ecx + 0x4]
        fld dword ptr [eax + 0x8]
        fadd dword ptr [ecx + 0x8]
        fstp dword ptr [ecx + 0x8]
        fld dword ptr [eax + 0xc]
        fadd dword ptr [ecx + 0xc]
        fstp dword ptr [ecx + 0xc]
        call ext_0066A220
        mov eax, ecx
        ret 0x4
    }
}

// [0x0066A2A0] sub_0066A2A0 (60 bytes)
extern "C" void ext_0053B470();
extern "C" void ext_0066A220();

extern "C" __declspec(naked) void __fastcall fn_0066A2A0(void* self, int edx_unused, float v) {
    __asm {
        fld dword ptr [esp+4]
        sub esp, 0x10
        push esi
        push ecx
        lea eax, [esp+8]
        fstp dword ptr [esp]
        push eax
        mov esi, ecx
        call ext_0053B470
        fld dword ptr [eax]
        fstp dword ptr [esi]
        mov ecx, esi
        fld dword ptr [eax+4]
        fstp dword ptr [esi+4]
        fld dword ptr [eax+8]
        fstp dword ptr [esi+8]
        fld dword ptr [eax+0Ch]
        fstp dword ptr [esi+0Ch]
        call ext_0066A220
        pop esi
        add esp, 0x10
        ret 4
    }
}

// [0x0066A500] sub_0066A500 (79 bytes)
extern "C" void ext_0066A2E0();
extern "C" __declspec(naked) void __fastcall fn_0066A500(void* self, int edx_unused, float* out, const float* other) {
    __asm {
        sub esp, 0x10
        fld dword ptr [ecx]
        mov eax, dword ptr [esp + 0x18]
        fstp dword ptr [esp]
        push eax
        fld dword ptr [ecx + 0x4]
        fstp dword ptr [esp + 0x8]
        fld dword ptr [ecx + 0x8]
        fstp dword ptr [esp + 0xc]
        fld dword ptr [ecx + 0xc]
        lea ecx, [esp + 0x4]
        fstp dword ptr [esp + 0x10]
        call ext_0066A2E0
        mov eax, dword ptr [esp + 0x14]
        fld dword ptr [esp]
        fstp dword ptr [eax]
        fld dword ptr [esp + 0x4]
        fstp dword ptr [eax + 0x4]
        fld dword ptr [esp + 0x8]
        fstp dword ptr [eax + 0x8]
        fld dword ptr [esp + 0xc]
        fstp dword ptr [eax + 0xc]
        add esp, 0x10
        ret 0x8
    }
}

// [0x00660C10] sub_00660C10 (127 bytes)
extern "C" void ext_004026E0();
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00660C10(void* self) {
    __asm {
        push -1
        push 0x8b277f
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        cmp dword ptr [esi + 0x4c], 0
        lea eax, [esi + 0x48]
        mov dword ptr [esp + 0x10], 2
        je L_skip1
        mov ecx, dword ptr [eax + 0x4]
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [edx + 0x78]
        call eax
    L_skip1:
        cmp dword ptr [esi + 0x44], 0
        lea eax, [esi + 0x40]
        mov byte ptr [esp + 0x10], 1
        je L_skip2
        mov ecx, dword ptr [eax + 0x4]
        mov edx, dword ptr [ecx]
        push eax
        mov eax, dword ptr [edx + 0x78]
        call eax
    L_skip2:
        lea ecx, [esi + 0x1c]
        mov byte ptr [esp + 0x10], 0
        call ext_004026E0
        mov ecx, esi
        mov dword ptr [esp + 0x10], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00666170] sub_00666170 (129 bytes)
extern "C" void ext_00665DC0();
extern "C" void ext_006A5C62();

extern "C" __declspec(naked) void __fastcall fn_00666170(void* self) {
    __asm {
        push -1
        push 0x8a7a5b
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 0x4], 0
        jne L_depth
        push edi
        push 0x48
        call ext_006A5C62
        add esp, 0x4
        mov dword ptr [esp + 0x8], eax
        test eax, eax
        mov dword ptr [esp + 0x14], 0
        je L_null
        mov ecx, dword ptr [esp + 0x1c]
        push 0
        push ecx
        mov ecx, eax
        call ext_00665DC0
        mov edi, eax
        jmp L_store
    L_null:
        xor edi, edi
    L_store:
        mov ecx, dword ptr [esi]
        cmp edi, ecx
        mov dword ptr [esp + 0x14], 0xffffffff
        je L_assign
        test ecx, ecx
        je L_assign
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 0x1
        call eax
    L_assign:
        mov dword ptr [esi], edi
        pop edi
    L_depth:
        add dword ptr [esi + 0x4], 0x1
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret 0x4
    }
}

// [0x00666360] sub_00666360 (131 bytes)
extern "C" void ext_00666120();
extern "C" void ext_004369D0();
extern "C" void ext_006A5C5C();
extern "C" int mem_00B59420;

extern "C" __declspec(naked) void __fastcall fn_00666360(void* self) {
    __asm {
        push -1
        push 0x008B2E99
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [esp + 0x8], esi
        mov dword ptr [esp + 0x14], 3
        call ext_00666120
        xor edi, edi
        mov dword ptr [mem_00B59420], edi
        mov eax, dword ptr [esi + 0x2c]
        cmp eax, edi
        je L_6663A3
        push eax
        call ext_006A5C5C
        add esp, 4
L_6663A3:
        lea ecx, [esi + 0x1c]
        mov dword ptr [esi + 0x2c], edi
        mov dword ptr [esi + 0x30], edi
        mov dword ptr [esi + 0x34], edi
        call ext_004369D0
        lea ecx, [esi + 0x10]
        call ext_004369D0
        mov ecx, dword ptr [esi]
        cmp ecx, edi
        pop edi
        mov dword ptr [esp + 0x10], 0xffffffff
        pop esi
        je L_6663D4
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        call edx
L_6663D4:
        mov ecx, dword ptr [esp + 0x4]
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00666C00] sub_00666C00 (132 bytes)
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_00666C00(void* self) {
    __asm {
        push esi
        mov esi, ecx
        cmp dword ptr [esi], 0x0
        push edi
        mov edi, dword ptr [mem_00925134]
        jne SKIP_INV1
        call edi
    SKIP_INV1:
        mov eax, dword ptr [esi + 0x4]
        cmp byte ptr [eax + 0x39], 0x0
        je L_LEFT
        mov eax, dword ptr [eax + 0x8]
        mov dword ptr [esi + 0x4], eax
        cmp byte ptr [eax + 0x39], 0x0
        je L_DONE
    L_INV1:
        call edi
        pop edi
        pop esi
        ret
    L_LEFT:
        mov ecx, dword ptr [eax]
        cmp byte ptr [ecx + 0x39], 0x0
        jne L_CLIMB
        mov eax, dword ptr [ecx + 0x8]
        cmp byte ptr [eax + 0x39], 0x0
        jne L_STORE_C
        __asm _emit 0x8d __asm _emit 0x64 __asm _emit 0x24 __asm _emit 0x00
    L_RLOOP:
        mov ecx, eax
        mov eax, dword ptr [ecx + 0x8]
        cmp byte ptr [eax + 0x39], 0x0
        je L_RLOOP
    L_STORE_C:
        pop edi
        mov dword ptr [esi + 0x4], ecx
        pop esi
        ret
    L_CLIMB:
        mov eax, dword ptr [eax + 0x4]
        cmp byte ptr [eax + 0x39], 0x0
        jne L_FIX
        __asm _emit 0x8d __asm _emit 0x9b __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
    L_CLOOP:
        mov ecx, dword ptr [esi + 0x4]
        cmp ecx, dword ptr [eax]
        jne L_FIX
        mov dword ptr [esi + 0x4], eax
        mov edx, eax
        mov eax, dword ptr [edx + 0x4]
        cmp byte ptr [eax + 0x39], 0x0
        je L_CLOOP
    L_FIX:
        mov ecx, dword ptr [esi + 0x4]
        cmp byte ptr [ecx + 0x39], 0x0
        jne L_INV1
        mov dword ptr [esi + 0x4], eax
    L_DONE:
        pop edi
        pop esi
        ret
    }
}

// [0x00664E40] sub_00664E40 (135 bytes)
extern "C" int mem_00925134;
extern "C" int mem_00924E44;

extern "C" __declspec(naked) void* __cdecl fn_00664E40(std::string::iterator* ret, const char* first, const char* last, std::string::iterator out, char value) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0xc]
        cmp ebx, dword ptr [esp + 0x10]
        push esi
        mov esi, dword ptr [esp + 0x18]
        push edi
        mov edi, dword ptr [esp + 0x20]
        je L_END
        push ebp
    L_LOOP:
        mov al, byte ptr [esp + 0x28]
        cmp byte ptr [ebx], al
        je L_SKIP
        cmp esi, -2
        mov ebp, edi
        je L_NOCHK1
        test esi, esi
        jne L_OK1
        call dword ptr [mem_00925134]
    L_OK1:
        mov ecx, esi
        call dword ptr [mem_00924E44]
        add eax, dword ptr [esi + 0x14]
        cmp edi, eax
        jb L_NOCHK1
        call dword ptr [mem_00925134]
    L_NOCHK1:
        add edi, 1
        cmp esi, -2
        je L_NOCHK2
        test esi, esi
        jne L_OK2
        call dword ptr [mem_00925134]
    L_OK2:
        mov ecx, esi
        call dword ptr [mem_00924E44]
        add eax, dword ptr [esi + 0x14]
        cmp ebp, eax
        jb L_NOCHK2
        call dword ptr [mem_00925134]
    L_NOCHK2:
        mov cl, byte ptr [ebx]
        mov byte ptr [ebp], cl
    L_SKIP:
        add ebx, 1
        cmp ebx, dword ptr [esp + 0x1c]
        jne L_LOOP
        pop ebp
    L_END:
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [eax + 4], edi
        pop edi
        mov dword ptr [eax], esi
        pop esi
        pop ebx
        ret
    }
}

// [0x00661E80] sub_00661E80 (138 bytes)
extern "C" void ext_00466BA0();
extern "C" int mem_00925134;
extern "C" __declspec(naked) bool __fastcall fn_00661E80(void* self) {
    __asm {
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 0x8], 0x0
        push edi
        jne L_661E90
        call dword ptr [mem_00925134]
L_661E90:
        mov eax, dword ptr [esi + 0x8]
        mov ecx, dword ptr [esi + 0xc]
        cmp ecx, dword ptr [eax + 0x4]
        jne L_661EA1
        call dword ptr [mem_00925134]
L_661EA1:
        mov edi, dword ptr [esi + 0x4]
        mov eax, dword ptr [edi + 0x64]
        push ebx
        mov ebx, dword ptr [esi + 0xc]
        add edi, 0x60
        push ebp
        mov ebp, dword ptr [eax + 0x4]
        add ebx, 0x8
        cmp ebp, eax
        jne L_661EBF
        call dword ptr [mem_00925134]
L_661EBF:
        cmp ebp, dword ptr [edi + 0x4]
        mov edi, dword ptr [mem_00925134]
        jne L_661ECC
        call edi
L_661ECC:
        add ebp, 0x8
        cmp ebx, ebp
        pop ebp
        pop ebx
        je L_661F05
        cmp dword ptr [esi + 0x8], 0x0
        jne L_661EDD
        call edi
L_661EDD:
        mov edx, dword ptr [esi + 0x8]
        mov eax, dword ptr [esi + 0xc]
        cmp eax, dword ptr [edx + 0x4]
        jne L_661EEA
        call edi
L_661EEA:
        mov ecx, dword ptr [esi + 0xc]
        mov edx, dword ptr [ecx]
        push 0x0
        mov dword ptr [esi + 0xc], edx
        push esi
        lea ecx, [esi + 0x38]
        mov byte ptr [esi], 0x1
        call ext_00466BA0
        pop edi
        mov al, 0x1
        pop esi
        ret
L_661F05:
        pop edi
        xor al, al
        pop esi
        ret
    }
}

// [0x00664DB0] sub_00664DB0 (143 bytes)
extern "C" __declspec(naked) void* __cdecl fn_00664DB0(std::string::iterator* ret, const char* first, const char* last, std::string::iterator out, bool (*pred)(char)) {
    __asm {
        push ebp
        mov ebp, dword ptr [esp + 0xc]
        cmp ebp, dword ptr [esp + 0x10]
        push esi
        mov esi, dword ptr [esp + 0x18]
        push edi
        mov edi, dword ptr [esp + 0x20]
        je L_EPI
        push ebx
    L_LOOP:
        movzx eax, byte ptr [ebp]
        push eax
        call dword ptr [esp + 0x2c]
        add esp, 0x4
        test al, al
        jne L_SKIP
        cmp esi, -0x2
        mov ebx, edi
        je L_NC1
        test esi, esi
        jne L_OK1
        call dword ptr [mem_00925134]
    L_OK1:
        mov ecx, esi
        call dword ptr [mem_00924E44]
        add eax, dword ptr [esi + 0x14]
        cmp edi, eax
        jb L_NC1
        call dword ptr [mem_00925134]
    L_NC1:
        add edi, 0x1
        cmp esi, -0x2
        je L_NC2
        test esi, esi
        jne L_OK2
        call dword ptr [mem_00925134]
    L_OK2:
        mov ecx, esi
        call dword ptr [mem_00924E44]
        add eax, dword ptr [esi + 0x14]
        cmp ebx, eax
        jb L_NC2
        call dword ptr [mem_00925134]
    L_NC2:
        mov cl, byte ptr [ebp]
        mov byte ptr [ebx], cl
    L_SKIP:
        add ebp, 0x1
        cmp ebp, dword ptr [esp + 0x1c]
        jne L_LOOP
        pop ebx
    L_EPI:
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [eax + 0x4], edi
        pop edi
        mov dword ptr [eax], esi
        pop esi
        pop ebp
        ret
    }
}

// [0x0066A180] sub_0066A180 (145 bytes)
extern "C" unsigned int __fastcall fn_0066A180(float* self) {
    unsigned int r = (unsigned char)(int)(self[2] * 255.0);
    r <<= 8;
    r |= (unsigned char)(int)(self[1] * 255.0);
    r <<= 8;
    r |= (unsigned char)(int)(self[0] * 255.0);
    return r;
}

// [0x00664910] sub_00664910 (149 bytes)
extern "C" int mem_00925230;
extern "C" int mem_0092506C;
extern "C" int mem_00924ED0;

extern "C" __declspec(naked) std::string* __cdecl fn_00664910(std::string* out, int value) {
    __asm {
        push -1
        push 0x8b2d3a
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x24
        mov ecx, dword ptr [esp + 0x38]
        push 0x10
        lea eax, [esp + 0x8]
        push eax
        push ecx
        mov dword ptr [esp + 0x38], 0
        mov dword ptr [esp + 0xc], 0
        call dword ptr [mem_00925230]
        lea eax, [esp + 0x10]
        add esp, 0xc
        lea edx, [eax + 0x1]
    scan_loop:
        mov cl, byte ptr [eax]
        add eax, 0x1
        test cl, cl
        jne scan_loop
        push esi
        mov esi, dword ptr [esp + 0x38]
        sub eax, edx
        mov edx, 0x8
        push 0x30
        sub edx, eax
        push edx
        mov ecx, esi
        call dword ptr [mem_0092506C]
        lea eax, [esp + 0x8]
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0x34], 0
        mov dword ptr [esp + 0x8], 0x1
        call dword ptr [mem_00924ED0]
        mov ecx, dword ptr [esp + 0x28]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x30
        ret
    }
}

// [0x00664C30] sub_00664C30 (33 bytes)
extern "C" void ext_00664910();

extern "C" __declspec(naked) void* __fastcall fn_00664C30(void* self) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0Ch]
        push esi
        mov esi, dword ptr [esp + 0Ch]
        push eax
        push esi
        mov dword ptr [esp + 0Ch], 0
        call ext_00664910
        add esp, 8
        mov eax, esi
        pop esi
        pop ecx
        ret
    }
}

extern "C" void ext_00664BF0();
extern "C" void ext_00664DB0();
extern "C" int mem_00925134;
extern "C" int mem_00924E44;

// [0x00665090] sub_00665090 (150 bytes)
extern "C" __declspec(naked) void __fastcall fn_00665090(void* self) {
    __asm {
        mov eax, dword ptr [esp+0Ch]
        push ebx
        mov ebx, dword ptr [esp+18h]
        push ebp
        mov ebp, dword ptr [esp+20h]
        push esi
        mov esi, dword ptr [esp+14h]
        push edi
        push ebp
        push ebx
        push eax
        mov dword ptr [esp+28h], eax
        call ext_00664BF0
        add esp, 0Ch
        cmp esi, -2
        mov edi, eax
        je L_665090_ok1
        test esi, esi
        je L_665090_bad1
        cmp esi, dword ptr [esp+20h]
        je L_665090_ok1
L_665090_bad1:
        call dword ptr [mem_00925134]
L_665090_ok1:
        cmp edi, ebx
        jne L_665090_path2
        mov eax, dword ptr [esp+14h]
        mov dword ptr [eax+4], edi
        pop edi
        mov dword ptr [eax], esi
        pop esi
        pop ebp
        pop ebx
        ret
L_665090_path2:
        cmp esi, -2
        je L_665090_skip
        test esi, esi
        jne L_665090_nz
        call dword ptr [mem_00925134]
L_665090_nz:
        mov ecx, esi
        call dword ptr [mem_00924E44]
        add eax, dword ptr [esi+14h]
        cmp edi, eax
        jb L_665090_skip
        call dword ptr [mem_00925134]
L_665090_skip:
        mov byte ptr [esp+18h], 0
        mov ecx, dword ptr [esp+18h]
        push ecx
        push ebp
        push edi
        push esi
        mov esi, dword ptr [esp+24h]
        lea eax, [edi+1]
        push ebx
        push eax
        push esi
        call ext_00664DB0
        add esp, 1Ch
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}

extern "C" void ext_00665090();
extern "C" void fn_006649B0();
extern "C" int mem_0092511C;
extern "C" int mem_009250D0;
extern "C" int mem_009250A4;

// [0x006651D0] sub_006651D0 (119 bytes)
extern "C" __declspec(naked) void __fastcall fn_006651D0(void* self) {
    __asm {
        sub esp, 28h
        push ebx
        push esi
        mov esi, dword ptr [esp+34h]
        push edi
        lea eax, dword ptr [esp+0Ch]
        push eax
        mov ecx, esi
        call dword ptr [mem_0092511C]
        lea ecx, dword ptr [esp+14h]
        push ecx
        mov ecx, esi
        mov edi, eax
        call dword ptr [mem_0092511C]
        lea edx, dword ptr [esp+1Ch]
        push edx
        mov ecx, esi
        mov ebx, eax
        call dword ptr [mem_009250D0]
        mov ecx, dword ptr [ebx+4]
        mov edx, dword ptr [ebx]
        push offset fn_006649B0
        push ecx
        mov ecx, dword ptr [eax+4]
        push edx
        mov edx, dword ptr [eax]
        push ecx
        push edx
        lea eax, dword ptr [esp+38h]
        push eax
        call ext_00665090
        mov ecx, dword ptr [edi+4]
        mov edx, dword ptr [edi]
        add esp, 18h
        push ecx
        mov ecx, dword ptr [eax+4]
        push edx
        mov edx, dword ptr [eax]
        push ecx
        push edx
        lea eax, dword ptr [esp+3Ch]
        push eax
        mov ecx, esi
        call dword ptr [mem_009250A4]
        pop edi
        pop esi
        pop ebx
        add esp, 28h
        ret
    }
}

// [0x00661B50] sub_00661B50 (153 bytes)
extern "C" int mem_00925134;

extern "C" __declspec(naked) void* __fastcall fn_00661B50(void* self, int edx_unused, int a1) {
    __asm {
        push ebx
        mov ebx, dword ptr [mem_00925134]
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x4]
        mov ecx, dword ptr [eax + 0x64]
        add eax, 0x60
        push edi
        mov edi, dword ptr [ecx]
        mov ecx, dword ptr [esi + 0x8]
        test ecx, ecx
        je L_661B71
        cmp ecx, eax
        je L_661B73
    L_661B71:
        call ebx
    L_661B73:
        cmp dword ptr [esi + 0xc], edi
        jne L_661BA7
        mov esi, dword ptr [esi + 0x4]
        mov ecx, dword ptr [esi + 0x4]
        test ecx, ecx
        mov edi, dword ptr [esp + 0x10]
        je L_661B92
        mov eax, dword ptr [esi + 0x8]
        sub eax, ecx
        sar eax, 0x2
        cmp edi, eax
        jb L_661B94
    L_661B92:
        call ebx
    L_661B94:
        mov edx, dword ptr [esi + 0x4]
        mov ecx, dword ptr [edx + edi*4]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x8]
        call edx
        pop edi
        pop esi
        pop ebx
        ret 0x4
    L_661BA7:
        cmp dword ptr [esi + 0x8], 0x0
        jne L_661BAF
        call ebx
    L_661BAF:
        mov eax, dword ptr [esi + 0x8]
        mov ecx, dword ptr [esi + 0xc]
        cmp ecx, dword ptr [eax + 0x4]
        jne L_661BBC
        call ebx
    L_661BBC:
        mov esi, dword ptr [esi + 0xc]
        mov ecx, dword ptr [esi + 0x10]
        mov edi, dword ptr [esp + 0x10]
        add esi, 0xc
        test ecx, ecx
        je L_661BD9
        mov eax, dword ptr [esi + 0x8]
        sub eax, ecx
        sar eax, 0x6
        cmp edi, eax
        jb L_661BDB
    L_661BD9:
        call ebx
    L_661BDB:
        mov eax, edi
        shl eax, 0x6
        add eax, dword ptr [esi + 0x4]
        pop edi
        pop esi
        pop ebx
        ret 0x4
    }
}

// [0x00661C90] sub_00661C90 (153 bytes)
extern "C" __declspec(naked) void* __fastcall fn_00661C90(void* self, int edx_unused, int a1) {
    __asm {
        push ebx
        mov ebx, dword ptr [mem_00925134]
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x4]
        mov ecx, dword ptr [eax + 0x64]
        add eax, 0x60
        push edi
        mov edi, dword ptr [ecx]
        mov ecx, dword ptr [esi + 0x8]
        test ecx, ecx
        je L_661CB1
        cmp ecx, eax
        je L_661CB3
    L_661CB1:
        call ebx
    L_661CB3:
        cmp dword ptr [esi + 0xc], edi
        jne L_661CE9
        mov esi, dword ptr [esi + 0x4]
        mov ecx, dword ptr [esi + 0x34]
        mov edi, dword ptr [esp + 0x10]
        add esi, 0x30
        test ecx, ecx
        je L_661CD5
        mov eax, dword ptr [esi + 0x8]
        sub eax, ecx
        sar eax, 0x2
        cmp edi, eax
        jb L_661CD7
    L_661CD5:
        call ebx
    L_661CD7:
        mov edx, dword ptr [esi + 0x4]
        mov ecx, dword ptr [edx + edi*4]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        call edx
        pop edi
        pop esi
        pop ebx
        ret 0x4
    L_661CE9:
        cmp dword ptr [esi + 0x8], 0x0
        jne L_661CF1
        call ebx
    L_661CF1:
        mov eax, dword ptr [esi + 0x8]
        mov ecx, dword ptr [esi + 0xc]
        cmp ecx, dword ptr [eax + 0x4]
        jne L_661CFE
        call ebx
    L_661CFE:
        mov esi, dword ptr [esi + 0xc]
        mov ecx, dword ptr [esi + 0x50]
        mov edi, dword ptr [esp + 0x10]
        add esi, 0x4c
        test ecx, ecx
        je L_661D1B
        mov eax, dword ptr [esi + 0x8]
        sub eax, ecx
        sar eax, 0x2
        cmp edi, eax
        jb L_661D1D
    L_661D1B:
        call ebx
    L_661D1D:
        mov edx, dword ptr [esi + 0x4]
        mov eax, dword ptr [edx + edi*4]
        pop edi
        pop esi
        pop ebx
        ret 0x4
    }
}

// [0x00661DE0] sub_00661DE0 (153 bytes)
extern "C" __declspec(naked) void* __fastcall fn_00661DE0(void* self, int edx_unused, int a1) {
    __asm {
        push ebx
        mov ebx, dword ptr [mem_00925134]
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x4]
        mov ecx, dword ptr [eax + 0x64]
        add eax, 0x60
        push edi
        mov edi, dword ptr [ecx]
        mov ecx, dword ptr [esi + 0x8]
        test ecx, ecx
        je L_661DFD
        cmp ecx, eax
        je L_661DFF
    L_661DFD:
        call ebx
    L_661DFF:
        cmp dword ptr [esi + 0xc], edi
        jne L_661E39
        mov esi, dword ptr [esi + 0x4]
        mov ecx, dword ptr [esi + 0x54]
        mov edi, dword ptr [esp + 0x10]
        add esi, 0x50
        test ecx, ecx
        je L_661E25
        mov eax, dword ptr [esi + 0x8]
        sub eax, ecx
        sar eax, 0x2
        cmp edi, eax
        jb L_661E27
    L_661E25:
        call ebx
    L_661E27:
        mov edx, dword ptr [esi + 0x4]
        mov ecx, dword ptr [edx + edi*4]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        call edx
        pop edi
        pop esi
        pop ebx
        ret 0x4
    L_661E39:
        cmp dword ptr [esi + 0x8], 0x0
        jne L_661E41
        call ebx
    L_661E41:
        mov eax, dword ptr [esi + 0x8]
        mov ecx, dword ptr [esi + 0xc]
        cmp ecx, dword ptr [eax + 0x4]
        jne L_661E4E
        call ebx
    L_661E4E:
        mov esi, dword ptr [esi + 0xc]
        mov ecx, dword ptr [esi + 0x60]
        mov edi, dword ptr [esp + 0x10]
        add esi, 0x5c
        test ecx, ecx
        je L_661E6B
        mov eax, dword ptr [esi + 0x8]
        sub eax, ecx
        sar eax, 0x3
        cmp edi, eax
        jb L_661E6D
    L_661E6B:
        call ebx
    L_661E6D:
        mov edx, dword ptr [esi + 0x4]
        lea eax, [edx + edi*8]
        pop edi
        pop esi
        pop ebx
        ret 0x4
    }
}

// [0x00664A80] sub_00664A80 (153 bytes)
extern "C" int mem_00925014;
extern "C" int mem_00924EC4;
extern "C" int mem_00925028;

extern "C" __declspec(naked) unsigned int __cdecl fn_00664A80(std::string* self, const char* from, const char* to, bool once) {
    __asm {
        sub esp, 8
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x18]
        mov eax, esi
        push edi
        lea edx, [eax + 0x1]
        nop
    L_from_len:
        mov cl, byte ptr [eax]
        add eax, 0x1
        test cl, cl
        jne L_from_len
        sub eax, edx
        mov dword ptr [esp + 0xc], eax
        mov eax, dword ptr [esp + 0x20]
        lea edx, [eax + 0x1]
    L_to_len:
        mov cl, byte ptr [eax]
        add eax, 0x1
        test cl, cl
        jne L_to_len
        mov edi, dword ptr [esp + 0x18]
        xor ebp, ebp
        push ebp
        sub eax, edx
        push esi
        mov ecx, edi
        mov dword ptr [esp + 0x18], eax
        call dword ptr [mem_00925014]
        mov esi, eax
        mov eax, dword ptr [mem_00924EC4]
        cmp esi, dword ptr [eax]
        je L_done_noadv
        push ebx
        mov bl, byte ptr [esp + 0x28]
    L_loop:
        mov ecx, dword ptr [esp + 0x24]
        mov edx, dword ptr [esp + 0x10]
        push ecx
        push edx
        push esi
        mov ecx, edi
        call dword ptr [mem_00925028]
        add ebp, 0x1
        test bl, bl
        jne L_pop_ebx
        mov eax, dword ptr [esp + 0x14]
        mov ecx, dword ptr [esp + 0x20]
        add eax, esi
        push eax
        push ecx
        mov ecx, edi
        call dword ptr [mem_00925014]
        mov edx, dword ptr [mem_00924EC4]
        mov esi, eax
        cmp esi, dword ptr [edx]
        jne L_loop
    L_pop_ebx:
        pop ebx
    L_done_noadv:
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        add esp, 0x8
        ret
    }
}

// [0x00668E30] sub_00668E30 (153 bytes)
extern "C" void ext_00668DF0();
extern "C" void ext_006A6D5C();
extern "C" void ext_0065C660();
extern "C" int mem_00B5947C;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00668E30(void* self) {
    __asm {
        push -1
        push 0x8b3106
        __asm _emit 0x64 __asm _emit 0xa1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
        push eax
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x25 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        mov dword ptr [esi], 0x987a4c
        mov dword ptr [mem_00B5947C], 0
        mov ecx, dword ptr [esi + 0x84]
        test ecx, ecx
        mov dword ptr [esp + 0x10], 3
        je loc_668E77
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        call edx
    loc_668E77:
        lea ecx, [esi + 0x64]
        mov byte ptr [esp + 0x10], 2
        call dword ptr [mem_00924FF4]
        lea ecx, [esi + 0x48]
        mov byte ptr [esp + 0x10], 1
        call dword ptr [mem_00924FF4]
        push offset ext_00668DF0
        push 4
        push 0x10
        lea eax, [esi + 0x8]
        push eax
        mov byte ptr [esp + 0x20], 0
        call ext_006A6D5C
        mov ecx, esi
        mov dword ptr [esp + 0x10], -1
        call ext_0065C660
        mov ecx, dword ptr [esp + 0x8]
        pop esi
        __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0D __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
        add esp, 0x10
        ret
    }
}

// [0x00666CE0] sub_00666CE0 (154 bytes)
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_00666CE0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        cmp dword ptr [esi], 0x0
        push edi
        mov edi, dword ptr [mem_00925134]
        jne SKIP_INV1
        call edi
    SKIP_INV1:
        mov eax, dword ptr [esi + 0x4]
        cmp byte ptr [eax + 0xc1], 0x0
        je L_LEFT
        mov eax, dword ptr [eax + 0x8]
        mov dword ptr [esi + 0x4], eax
        cmp byte ptr [eax + 0xc1], 0x0
        je L_DONE
    L_INV1:
        call edi
        pop edi
        pop esi
        ret
    L_LEFT:
        mov ecx, dword ptr [eax]
        cmp byte ptr [ecx + 0xc1], 0x0
        jne L_CLIMB
        mov eax, dword ptr [ecx + 0x8]
        cmp byte ptr [eax + 0xc1], 0x0
        jne L_STORE_C
        jmp L_RLOOP
        __asm _emit 0x8d __asm _emit 0x9b __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
    L_RLOOP:
        mov ecx, eax
        mov eax, dword ptr [ecx + 0x8]
        cmp byte ptr [eax + 0xc1], 0x0
        je L_RLOOP
    L_STORE_C:
        pop edi
        mov dword ptr [esi + 0x4], ecx
        pop esi
        ret
    L_CLIMB:
        mov eax, dword ptr [eax + 0x4]
        cmp byte ptr [eax + 0xc1], 0x0
        jne L_FIX
    L_CLOOP:
        mov ecx, dword ptr [esi + 0x4]
        cmp ecx, dword ptr [eax]
        jne L_FIX
        mov dword ptr [esi + 0x4], eax
        mov edx, eax
        mov eax, dword ptr [edx + 0x4]
        cmp byte ptr [eax + 0xc1], 0x0
        je L_CLOOP
    L_FIX:
        mov ecx, dword ptr [esi + 0x4]
        cmp byte ptr [ecx + 0xc1], 0x0
        jne L_INV1
        mov dword ptr [esi + 0x4], eax
    L_DONE:
        pop edi
        pop esi
        ret
    }
}

// [0x00665130] sub_00665130 (154 bytes)
extern "C" void ext_00664E40();
extern "C" int mem_00925134;
extern "C" int mem_00924E44;

extern "C" __declspec(naked) void* __cdecl fn_00665130(void* ret, int edi_arg, const char* first, int guard, const char* last, char c) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0x18]
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x18]
        cmp esi, ebx
        push edi
        mov edi, dword ptr [esp + 0x18]
        mov dword ptr [esp + 0x1c], esi
        je L_skip_scan
        mov al, byte ptr [esp + 0x28]
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
    L_scan:
        cmp byte ptr [esi], al
        je L_skip_scan
        add esi, 1
        cmp esi, ebx
        jne L_scan
    L_skip_scan:
        cmp edi, -2
        mov ebp, dword ptr [mem_00925134]
        je L_check2
        test edi, edi
        je L_call1
        cmp edi, dword ptr [esp + 0x20]
        je L_check2
    L_call1:
        call ebp
    L_check2:
        cmp esi, ebx
        jne L_found
        mov eax, dword ptr [esp + 0x14]
        mov dword ptr [eax], edi
        pop edi
        mov dword ptr [eax + 0x4], esi
        pop esi
        pop ebp
        pop ebx
        ret
    L_found:
        cmp edi, -2
        je L_tail
        test edi, edi
        jne L_myptr
        call ebp
    L_myptr:
        mov ecx, edi
        call dword ptr [mem_00924E44]
        add eax, dword ptr [edi + 0x14]
        cmp esi, eax
        jb L_tail
        call ebp
    L_tail:
        mov edx, dword ptr [esp + 0x28]
        mov byte ptr [esp + 0x18], 0
        mov ecx, dword ptr [esp + 0x18]
        push ecx
        push edx
        push esi
        push edi
        lea eax, [esi + 1]
        mov esi, dword ptr [esp + 0x24]
        push ebx
        push eax
        push esi
        call ext_00664E40
        add esp, 0x1c
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}

// [0x006658F0] sub_006658F0 (154 bytes)
extern "C" void ext_006A6DD2();
extern "C" int mem_00924FE4;
extern "C" int mem_009251C4;
extern "C" int mem_00924FE0;

extern "C" __declspec(naked) void __fastcall fn_006658F0(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        mov edx, dword ptr [esp + 0x4]
        push -0x1
        push 0x88f4c2
        push eax
        mov dword ptr fs:[0x0], esp
        mov eax, dword ptr [ecx + 0x8]
        sub esp, 0x44
        push esi
        mov esi, 0x3fffffff
        sub esi, eax
        cmp esi, edx
        pop esi
        jae ok
        push 0x92fa58
        lea ecx, [esp + 0x4]
        call dword ptr [mem_00924FE4]
        lea ecx, [esp + 0x1c]
        mov dword ptr [esp + 0x4c], 0x0
        call dword ptr [mem_009251C4]
        lea eax, [esp]
        push eax
        lea ecx, [esp + 0x2c]
        mov byte ptr [esp + 0x50], 0x1
        mov dword ptr [esp + 0x20], 0x928ecc
        call dword ptr [mem_00924FE0]
        push 0x9cdf20
        lea ecx, [esp + 0x20]
        push ecx
        mov byte ptr [esp + 0x54], 0x0
        mov dword ptr [esp + 0x24], 0x928ed8
        call ext_006A6DD2
    ok:
        add eax, edx
        mov dword ptr [ecx + 0x8], eax
        mov ecx, dword ptr [esp + 0x44]
        mov dword ptr fs:[0x0], ecx
        add esp, 0x50
        ret 0x4
    }
}

// [0x00665250] sub_00665250 (119 bytes)
extern "C" void ext_00665130();
extern "C" int mem_0092511C;
extern "C" int mem_009250D0;
extern "C" int mem_009250A4;

extern "C" __declspec(naked) void __cdecl fn_00665250(void* self, int c) {
    __asm {
        sub esp, 0x28
        push ebx
        push esi
        mov esi, dword ptr [esp + 0x34]
        push edi
        lea eax, [esp + 0xc]
        push eax
        mov ecx, esi
        call dword ptr [mem_0092511C]
        lea ecx, [esp + 0x14]
        push ecx
        mov ecx, esi
        mov edi, eax
        call dword ptr [mem_0092511C]
        lea edx, [esp + 0x1c]
        push edx
        mov ecx, esi
        mov ebx, eax
        call dword ptr [mem_009250D0]
        mov ecx, dword ptr [esp + 0x3c]
        mov edx, dword ptr [ebx + 0x4]
        push ecx
        mov ecx, dword ptr [ebx]
        push edx
        mov edx, dword ptr [eax + 0x4]
        mov eax, dword ptr [eax]
        push ecx
        push edx
        push eax
        lea ecx, [esp + 0x38]
        push ecx
        call ext_00665130
        mov edx, dword ptr [edi + 0x4]
        mov ecx, dword ptr [edi]
        add esp, 0x18
        push edx
        mov edx, dword ptr [eax + 0x4]
        mov eax, dword ptr [eax]
        push ecx
        push edx
        push eax
        lea ecx, [esp + 0x3c]
        push ecx
        mov ecx, esi
        call dword ptr [mem_009250A4]
        pop edi
        pop esi
        pop ebx
        add esp, 0x28
        ret
    }
}

extern "C" void ext_00435CC0();
extern "C" void ext_006658F0();

// [0x00665BD0] sub_00665BD0 (50 bytes)
extern "C" __declspec(naked) void __fastcall fn_00665BD0(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push ebx
        push esi
        push edi
        mov esi, ecx
        mov edi, dword ptr [esi + 4]
        mov ecx, dword ptr [edi + 4]
        push eax
        push ecx
        push edi
        mov ecx, esi
        call ext_00435CC0
        push 1
        mov ecx, esi
        mov ebx, eax
        call ext_006658F0
        mov dword ptr [edi + 4], ebx
        mov edx, dword ptr [ebx + 4]
        pop edi
        pop esi
        mov dword ptr [edx], ebx
        pop ebx
        ret 4
    }
}

// [0x00665E40] sub_00665E40 (154 bytes)
extern "C" void ext_00665D70();
extern "C" void ext_004369D0();
extern "C" void ext_00665810();
extern "C" void ext_006A5C5C();
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00665E40(void* self) {
    __asm {
        push -0x1
        push 0x8b2e32
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x8
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [esp + 0xc], esi
        mov dword ptr [esi], 0x987a1c
        lea edi, [esi + 0x2c]
        mov ecx, edi
        mov dword ptr [esp + 0x1c], 0x3
        call ext_00665D70
        mov eax, dword ptr [esi + 0x3c]
        xor ebx, ebx
        cmp eax, ebx
        je L_skip_00665E40
        push eax
        call ext_006A5C5C
        add esp, 0x4
    L_skip_00665E40:
        mov dword ptr [esi + 0x3c], ebx
        mov dword ptr [esi + 0x40], ebx
        mov dword ptr [esi + 0x44], ebx
        mov dword ptr [esp + 0x10], edi
        mov eax, dword ptr [edi + 0x4]
        mov ecx, dword ptr [eax]
        push eax
        push edi
        push ecx
        push edi
        mov ecx, edi
        mov byte ptr [esp + 0x2c], 0x4
        call ext_006659F0
        mov ecx, edi
        call ext_004369D0
        lea ecx, [esi + 0x10]
        mov byte ptr [esp + 0x1c], bl
        call dword ptr [mem_00924FF4]
        mov ecx, esi
        call ext_00665810
        mov ecx, dword ptr [esp + 0x14]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0x14
        ret
    }
}

// [0x00661BF0] sub_00661BF0 (156 bytes)
extern "C" int mem_00925134;

extern "C" __declspec(naked) int __fastcall fn_00661BF0(void* self, int edx_unused, int a1) {
    __asm {
        push ebx
        mov ebx, dword ptr [mem_00925134]
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x4]
        mov ecx, dword ptr [eax + 0x64]
        add eax, 0x60
        push edi
        mov edi, dword ptr [ecx]
        mov ecx, dword ptr [esi + 0x8]
        test ecx, ecx
        je L_661C11
        cmp ecx, eax
        je L_661C13
    L_661C11:
        call ebx
    L_661C13:
        cmp dword ptr [esi + 0xc], edi
        jne L_661C4F
        mov esi, dword ptr [esi + 0x4]
        mov ecx, dword ptr [esi + 0x44]
        mov edi, dword ptr [esp + 0x10]
        add esi, 0x40
        test ecx, ecx
        je L_661C35
        mov eax, dword ptr [esi + 0x8]
        sub eax, ecx
        sar eax, 0x2
        cmp edi, eax
        jb L_661C37
    L_661C35:
        call ebx
    L_661C37:
        mov edx, dword ptr [esi + 0x4]
        mov ecx, dword ptr [edx + edi*4]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        call edx
        neg al
        pop edi
        pop esi
        pop ebx
        sbb eax, eax
        neg eax
        ret 0x4
    L_661C4F:
        cmp dword ptr [esi + 0x8], 0x0
        jne L_661C57
        call ebx
    L_661C57:
        mov eax, dword ptr [esi + 0x8]
        mov ecx, dword ptr [esi + 0xc]
        cmp ecx, dword ptr [eax + 0x4]
        jne L_661C64
        call ebx
    L_661C64:
        mov esi, dword ptr [esi + 0xc]
        mov ecx, dword ptr [esi + 0x40]
        mov edi, dword ptr [esp + 0x10]
        add esi, 0x3c
        test ecx, ecx
        je L_661C7E
        mov eax, dword ptr [esi + 0x8]
        sub eax, ecx
        cmp edi, eax
        jb L_661C80
    L_661C7E:
        call ebx
    L_661C80:
        mov edx, dword ptr [esi + 0x4]
        mov al, byte ptr [edi + edx]
        pop edi
        pop esi
        pop ebx
        ret 0x4
    }
}

// [0x006667E0] sub_006667E0 (156 bytes)
extern "C" __declspec(naked) void* __fastcall fn_006667E0(void* self, int edx_unused, const std::string& a1, const std::string& a2, const std::string& a3, const std::string& a4, bool a5, const std::string& a6) {
    __asm {
        push -0x1
        push 0x8b2f2d
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        mov eax, dword ptr [esp + 0x14]
        push esi
        mov esi, ecx
        push eax
        mov dword ptr [esp + 0x8], esi
        call dword ptr [mem_00924FE0]
        mov ecx, dword ptr [esp + 0x1c]
        push ecx
        lea ecx, [esi + 0x1c]
        mov dword ptr [esp + 0x14], 0x0
        call dword ptr [mem_00924FE0]
        mov edx, dword ptr [esp + 0x2c]
        push edx
        lea ecx, [esi + 0x38]
        mov byte ptr [esp + 0x14], 0x1
        call dword ptr [mem_00924FE0]
        mov eax, dword ptr [esp + 0x24]
        push eax
        lea ecx, [esi + 0x54]
        mov byte ptr [esp + 0x14], 0x2
        call dword ptr [mem_00924FE0]
        mov cl, byte ptr [esp + 0x28]
        mov edx, dword ptr [esp + 0x20]
        mov byte ptr [esi + 0x70], cl
        push edx
        lea ecx, [esi + 0x74]
        mov byte ptr [esp + 0x14], 0x3
        call dword ptr [mem_00924FE0]
        mov ecx, dword ptr [esp + 0x8]
        mov dword ptr [esi + 0x94], 0x0
        mov eax, esi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret 0x18
    }
}

// [0x006647A0] sub_006647A0 (157 bytes)
// std::string-returning double formatter: snprintf("%.6f"), strip trailing zeros
// after the '.', then construct the hidden-return std::string from the buffer.
extern "C" int mem_009251E0;
extern "C" int mem_009252DC;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FE8;
static const char kFmt_006647A0[] = "%.6f";
extern "C" __declspec(naked) void __cdecl fn_006647A0(void) {
    __asm {
        sub esp, 0x38
        fld qword ptr [esp + 0x40]
        push esi
        sub esp, 0x8
        fstp qword ptr [esp]
        push offset kFmt_006647A0
        lea eax, [esp + 0x14]
        push 0x32
        push eax
        mov dword ptr [esp + 0x18], 0x0
        call dword ptr [mem_009251E0]
        add esp, 0x14
        test eax, eax
        jge fmt_ok
        mov esi, dword ptr [esp + 0x40]
        mov ecx, esi
        call dword ptr [mem_00924FE8]
        mov eax, esi
        pop esi
        add esp, 0x38
        ret
    fmt_ok:
        lea ecx, [esp + 0x8]
        push 0x2e
        push ecx
        call dword ptr [mem_009252DC]
        lea ecx, [esp + 0x10]
        add esp, 0x8
        lea esi, [ecx + 0x1]
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
    len_loop:
        mov dl, byte ptr [ecx]
        add ecx, 0x1
        test dl, dl
        jne len_loop
        sub ecx, esi
        lea ecx, [esp + ecx + 0x7]
        add eax, 0x1
        cmp ecx, eax
        jbe done
    strip_loop:
        cmp byte ptr [ecx], 0x30
        jne done
        mov byte ptr [ecx], 0x0
        sub ecx, 0x1
        cmp ecx, eax
        ja strip_loop
    done:
        mov esi, dword ptr [esp + 0x40]
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

// [0x00662FB0] sub_00662FB0 (161 bytes)
extern "C" int mem_00924FE0;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void* __fastcall fn_00662FB0(void* self) {
    __asm {
        push -1
        push 0x8b2a70
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        lea eax, [esp + 0x18]
        push eax
        mov dword ptr [esp + 0x14], 0x2
        call dword ptr [mem_00924FE0]
        lea ecx, [esp + 0x34]
        push ecx
        lea ecx, [esi + 0x1c]
        mov byte ptr [esp + 0x14], 0x3
        call dword ptr [mem_00924FE0]
        lea edx, [esp + 0x50]
        push edx
        lea ecx, [esi + 0x38]
        mov byte ptr [esp + 0x14], 0x4
        call dword ptr [mem_00924FE0]
        mov al, byte ptr [esp + 0x6c]
        lea ecx, [esp + 0x18]
        mov byte ptr [esi + 0x54], al
        mov byte ptr [esp + 0x10], 0x1
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x34]
        mov byte ptr [esp + 0x10], 0x0
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x50]
        mov dword ptr [esp + 0x10], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x8]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 0x58
    }
}

// [0x00662440] sub_00662440 (163 bytes)
extern "C" int mem_00925354;
extern "C" int mem_00924FE4;
extern "C" int mem_00924EAC;
extern "C" int mem_00924EC4;
extern "C" int mem_00925120;
extern "C" int mem_00924FE0;
extern "C" int mem_00924FF4;
extern "C" __declspec(naked) void __cdecl fn_00662440(void* a1, void* a2) {
    __asm {
        push -1
        push 0x88afd3
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        mov ecx, dword ptr [esp + 0x34]
        push esi
        push 0xb5ce94
        mov dword ptr [esp + 0x8], 0x0
        call dword ptr [mem_00925354]
        push eax
        lea ecx, [esp + 0xc]
        call dword ptr [mem_00924FE4]
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x2c], 0x1
        call dword ptr [mem_00924EAC]
        cmp eax, 0x6
        mov esi, dword ptr [esp + 0x34]
        jbe short L_copy
        mov eax, dword ptr [mem_00924EC4]
        mov ecx, dword ptr [eax]
        push ecx
        push 0x6
        push esi
        lea ecx, [esp + 0x14]
        call dword ptr [mem_00925120]
        jmp short L_dtor
    L_copy:
        lea edx, [esp + 0x8]
        push edx
        mov ecx, esi
        call dword ptr [mem_00924FE0]
    L_dtor:
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x4], 0x1
        mov byte ptr [esp + 0x2c], 0x0
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x24]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x2c
        ret
    }
}

// [0x0066A770] sub_0066A770 (163 bytes)
extern "C" void ext_006A6118();
extern "C" void ext_006A611E();
extern "C" int mem_0092C510;
extern "C" int mem_0092F678;

extern "C" __declspec(naked) void __fastcall fn_0066A770(void* self, int edx_unused, int a1) {
    __asm {
        sub esp, 0x8
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 0x8], 0x0
        push edi
        jne short skip_init
        mov dword ptr [esi + 0x8], 0x80
skip_init:
        mov ecx, dword ptr [esp + 0x14]
        cmp dword ptr [esi + 0x8], ecx
        ja short done_grow
        fld qword ptr [mem_0092C510]
grow_loop:
        mov eax, dword ptr [esi + 0x8]
        fild dword ptr [esi + 0x8]
        test eax, eax
        jge short grow_pos
        fadd dword ptr [mem_0092F678]
grow_pos:
        fnstcw word ptr [esp + 0x14]
        movzx eax, word ptr [esp + 0x14]
        fmul st, st(1)
        or eax, 0xc00
        mov dword ptr [esp + 0x8], eax
        fldcw word ptr [esp + 0x8]
        fistp qword ptr [esp + 0x8]
        mov edx, dword ptr [esp + 0x8]
        cmp edx, ecx
        mov dword ptr [esi + 0x8], edx
        fldcw word ptr [esp + 0x14]
        jbe short grow_loop
        fstp st(0)
done_grow:
        mov eax, dword ptr [esi + 0x8]
        push eax
        call ext_006A611E
        mov edi, eax
        mov byte ptr [edi], 0x0
        mov ecx, dword ptr [esi + 0x8]
        mov byte ptr [edi + ecx - 0x1], 0x0
        mov ecx, dword ptr [esi]
        add esp, 0x4
        mov edx, edi
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
copy_loop:
        mov al, byte ptr [ecx]
        mov byte ptr [edx], al
        add ecx, 0x1
        add edx, 0x1
        test al, al
        jne short copy_loop
        mov edx, dword ptr [esi]
        push edx
        call ext_006A6118
        add esp, 0x4
        mov dword ptr [esi], edi
        pop edi
        pop esi
        add esp, 0x8
        ret 0x4
    }
}

// [0x0066A9D0] sub_0066A9D0 (49 bytes)
extern "C" void ext_0066A770();

extern "C" __declspec(naked) void __fastcall fn_0066A9D0(void* self, int edx_unused, unsigned char ch) {
    __asm {
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr [esi + 0x4]
        add edi, 0x1
        cmp edi, dword ptr [esi + 0x8]
        jb skip_grow
        push edi
        call ext_0066A770
    skip_grow:
        mov eax, dword ptr [esi]
        mov ecx, dword ptr [esi + 0x4]
        mov dl, byte ptr [esp + 0xc]
        mov byte ptr [eax + ecx], dl
        mov eax, dword ptr [esi]
        mov dword ptr [esi + 0x4], edi
        mov byte ptr [edi + eax], 0
        mov eax, dword ptr [esi]
        pop edi
        pop esi
        ret 4
    }
}

// [0x0066A980] sub_0066A980 (77 bytes)
extern "C" __declspec(naked) char* __fastcall fn_0066A980(void* self, int edx_unused, const char* src) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0x8]
        push esi
        mov eax, ebx
        push edi
        mov esi, ecx
        lea edx, [eax + 0x1]
        mov edi, edi
    L66A980_len:
        mov cl, byte ptr [eax]
        add eax, 0x1
        test cl, cl
        jne L66A980_len
        mov edi, dword ptr [esi + 0x4]
        sub eax, edx
        add edi, eax
        cmp edi, dword ptr [esi + 0x8]
        jb L66A980_skip
        push edi
        mov ecx, esi
        call ext_0066A770
    L66A980_skip:
        mov eax, dword ptr [esi]
        add eax, dword ptr [esi + 0x4]
        mov edx, ebx
    L66A980_copy:
        mov cl, byte ptr [edx]
        mov byte ptr [eax], cl
        add edx, 0x1
        add eax, 0x1
        test cl, cl
        jne L66A980_copy
        mov eax, dword ptr [esi]
        mov dword ptr [esi + 0x4], edi
        pop edi
        pop esi
        pop ebx
        ret 0x4
    }
}

// [0x0066AA40] sub_0066AA40 (37 bytes)
extern "C" void ext_0066A9D0();

extern "C" __declspec(naked) void __fastcall fn_0066AA40(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        mov esi, ecx
        cmp dword ptr [esi + 0x4], edi
        jge L_66AA40_done
        push ebx
        mov ebx, dword ptr [esp + 0x14]
    L_66AA40_loop:
        push ebx
        mov ecx, esi
        call ext_0066A9D0
        cmp dword ptr [esi + 0x4], edi
        jl L_66AA40_loop
        pop ebx
    L_66AA40_done:
        pop edi
        pop esi
        ret 8
    }
}

// [0x0066AA10] sub_0066AA10 (33 bytes)
extern "C" void ext_0066A980();

extern "C" __declspec(naked) void* __fastcall fn_0066AA10(void* self, int edx_unused, int a1) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 8]
        mov eax, dword ptr [esi]
        push ecx
        mov dword ptr [esi + 4], 0
        mov ecx, esi
        mov byte ptr [eax], 0
        call ext_0066A980
        mov eax, esi
        pop esi
        ret 4
    }
}

// [0x0066A820] sub_0066A820 (132 bytes)
extern "C" int mem_009252FC;
extern "C" double mem_0092A270;

extern "C" __declspec(naked) char* __cdecl fn_0066A820(void* self, const char* fmt, ...) {
    __asm {
        sub esp, 0x8
        push esi
        mov esi, dword ptr [esp + 0x10]
        push edi
        mov edi, dword ptr [mem_009252FC]
        nop
vsn_loop:
        mov eax, dword ptr [esi + 0x4]
        mov edx, dword ptr [esp + 0x18]
        lea ecx, [esp + 0x1c]
        push ecx
        mov ecx, dword ptr [esi + 0x8]
        push edx
        mov edx, dword ptr [esi]
        sub ecx, eax
        sub ecx, 0x1
        push ecx
        add edx, eax
        push edx
        call edi
        add esp, 0x10
        cmp eax, -1
        jne short vsn_ok
        mov eax, dword ptr [esi + 0x8]
        fild dword ptr [esi + 0x8]
        test eax, eax
        jge short grow_pos
        fadd dword ptr [mem_0092F678]
grow_pos:
        fnstcw word ptr [esp + 0x14]
        movzx eax, word ptr [esp + 0x14]
        fadd st(0), st
        or eax, 0xc00
        mov dword ptr [esp + 0x8], eax
        fsub qword ptr [mem_0092A270]
        fldcw word ptr [esp + 0x8]
        fistp qword ptr [esp + 0x8]
        mov ecx, dword ptr [esp + 0x8]
        push ecx
        mov ecx, esi
        fldcw word ptr [esp + 0x18]
        call ext_0066A770
        jmp vsn_loop
vsn_ok:
        add dword ptr [esi + 0x4], eax
        mov eax, dword ptr [esi]
        pop edi
        pop esi
        add esp, 0x8
        ret
    }
}

// [0x0066AA70] sub_0066AA70 (53 bytes)
extern "C" void ext_0066A720();
extern "C" void ext_0066AA10();

extern "C" __declspec(naked) void* __fastcall fn_0066AA70(void* self, int edx_unused, const char* s) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        mov eax, edi
        mov esi, ecx
        lea edx, [eax + 0x1]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
strlen_loop:
        mov cl, byte ptr [eax]
        add eax, 0x1
        test cl, cl
        jne strlen_loop
        sub eax, edx
        add eax, 0x1
        push eax
        mov ecx, esi
        call ext_0066A720
        push edi
        mov ecx, esi
        call ext_0066AA10
        pop edi
        mov eax, esi
        pop esi
        ret 0x4
    }
}

// [0x0066A8B0] sub_0066A8B0 (148 bytes)
extern "C" __declspec(naked) char* __cdecl fn_0066A8B0(void* self, const char* fmt, ...) {
    __asm {
        sub esp, 0x8
        push esi
        mov esi, dword ptr [esp + 0x10]
        push edi
        mov edi, dword ptr [mem_009252FC]
        mov dword ptr [esi + 0x4], 0x0
        jmp short vsn_loop
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x90
vsn_loop:
        mov eax, dword ptr [esi + 0x4]
        mov edx, dword ptr [esp + 0x18]
        lea ecx, [esp + 0x1c]
        push ecx
        mov ecx, dword ptr [esi + 0x8]
        push edx
        mov edx, dword ptr [esi]
        sub ecx, eax
        sub ecx, 0x1
        push ecx
        add edx, eax
        push edx
        call edi
        add esp, 0x10
        cmp eax, -1
        jne short vsn_ok
        mov eax, dword ptr [esi + 0x8]
        fild dword ptr [esi + 0x8]
        test eax, eax
        jge short grow_pos
        fadd dword ptr [mem_0092F678]
grow_pos:
        fnstcw word ptr [esp + 0x14]
        movzx eax, word ptr [esp + 0x14]
        fadd st(0), st
        or eax, 0xc00
        mov dword ptr [esp + 0x8], eax
        fsub qword ptr [mem_0092A270]
        fldcw word ptr [esp + 0x8]
        fistp qword ptr [esp + 0x8]
        mov ecx, dword ptr [esp + 0x8]
        push ecx
        mov ecx, esi
        fldcw word ptr [esp + 0x18]
        call ext_0066A770
        jmp short vsn_loop
vsn_ok:
        add dword ptr [esi + 0x4], eax
        mov eax, dword ptr [esi]
        pop edi
        pop esi
        add esp, 0x8
        ret
    }
}

extern "C" int mem_00924FE0;

// [0x006669B0] sub_006669B0 (167 bytes)
extern "C" __declspec(naked) void __fastcall fn_006669B0(void* self) {
    __asm {
        push -1
        push 0x8b2f2d
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
        call dword ptr [mem_00924FE0]
        lea eax, [edi + 0x1c]
        push eax
        lea ecx, [esi + 0x1c]
        mov dword ptr [esp + 0x18], 0x0
        call dword ptr [mem_00924FE0]
        lea ecx, [edi + 0x38]
        push ecx
        lea ecx, [esi + 0x38]
        mov byte ptr [esp + 0x18], 0x1
        call dword ptr [mem_00924FE0]
        lea edx, [edi + 0x54]
        push edx
        lea ecx, [esi + 0x54]
        mov byte ptr [esp + 0x18], 0x2
        call dword ptr [mem_00924FE0]
        mov al, byte ptr [edi + 0x70]
        lea ecx, [edi + 0x74]
        push ecx
        lea ecx, [esi + 0x74]
        mov byte ptr [esp + 0x18], 0x3
        mov byte ptr [esi + 0x70], al
        call dword ptr [mem_00924FE0]
        mov dl, byte ptr [edi + 0x90]
        mov ecx, dword ptr [esp + 0xc]
        mov byte ptr [esi + 0x90], dl
        mov eax, dword ptr [edi + 0x94]
        mov dword ptr [esi + 0x94], eax
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret 0x4
    }
}

// [0x00666BA0] sub_00666BA0 (82 bytes)
extern "C" void ext_006669B0();

extern "C" __declspec(naked) void __fastcall fn_00666BA0(void* self, int edx_unused, const void* a1) {
    __asm {
        push -1
        push 0x872c79
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
        call dword ptr [mem_00924FE0]
        add edi, 0x1c
        push edi
        lea ecx, [esi + 0x1c]
        mov dword ptr [esp + 0x18], 0x0
        call ext_006669B0
        mov ecx, dword ptr [esp + 0xc]
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret 0x4
    }
}

// [0x00661D30] sub_00661D30 (170 bytes)
extern "C" int mem_00925134;

extern "C" __declspec(naked) void* __fastcall fn_00661D30(void* self, int edx_unused, int a1) {
    __asm {
        push ebx
        mov ebx, dword ptr [mem_00925134]
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x4]
        mov ecx, dword ptr [eax + 0x64]
        add eax, 0x60
        push edi
        mov edi, dword ptr [ecx]
        mov ecx, dword ptr [esi + 0x8]
        test ecx, ecx
        je L_661D51
        cmp ecx, eax
        je L_661D53
    L_661D51:
        call ebx
    L_661D53:
        cmp dword ptr [esi + 0xc], edi
        jne L_661D8A
        mov esi, dword ptr [esi + 0x4]
        mov ecx, dword ptr [esi + 0x14]
        mov edi, dword ptr [esp + 0x10]
        add esi, 0x10
        test ecx, ecx
        je L_661D75
        mov eax, dword ptr [esi + 0x8]
        sub eax, ecx
        sar eax, 0x2
        cmp edi, eax
        jb L_661D77
    L_661D75:
        call ebx
    L_661D77:
        mov edx, dword ptr [esi + 0x4]
        mov ecx, dword ptr [edx + edi*4]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x4]
        call edx
        pop edi
        pop esi
        pop ebx
        ret 0x4
    L_661D8A:
        cmp dword ptr [esi + 0x8], 0x0
        jne L_661D92
        call ebx
    L_661D92:
        mov eax, dword ptr [esi + 0x8]
        mov ecx, dword ptr [esi + 0xc]
        cmp ecx, dword ptr [eax + 0x4]
        jne L_661D9F
        call ebx
    L_661D9F:
        mov esi, dword ptr [esi + 0xc]
        mov eax, dword ptr [esi + 0x20]
        mov edi, dword ptr [esp + 0x10]
        add esi, 0x1c
        test eax, eax
        je L_661DC9
        mov ecx, dword ptr [esi + 0x8]
        sub ecx, eax
        mov eax, 0x2aaaaaab
        imul ecx
        sar edx, 1
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        cmp edi, eax
        jb L_661DCB
    L_661DC9:
        call ebx
    L_661DCB:
        mov eax, dword ptr [esi + 0x4]
        lea edx, [edi + 2*edi]
        pop edi
        pop esi
        lea eax, [eax + 4*edx]
        pop ebx
        ret 0x4
    }
}

// [0x006649D0] sub_006649D0 (173 bytes)
extern "C" int mem_0092502C;
extern "C" int mem_00924EC4;
extern "C" int mem_00924EC8;
extern "C" int mem_00925120;
extern "C" int mem_00924FDC;
extern "C" int mem_00924FF4;
extern "C" int mem_00924EA8;

extern "C" __declspec(naked) void __cdecl fn_006649D0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x008b56f9
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x1c
        push esi
        mov esi, dword ptr [esp + 0x30]
        push edi
        push 0
        push 0x009879d0
        mov ecx, esi
        call dword ptr [mem_0092502C]
        mov edi, eax
        mov eax, dword ptr [mem_00924EC4]
        mov ecx, dword ptr [eax]
        push ecx
        push 0x009879d0
        mov ecx, esi
        call dword ptr [mem_00924EC8]
        mov edx, dword ptr [mem_00924EC4]
        cmp edi, dword ptr [edx]
        mov ecx, esi
        je clear_path
        sub eax, edi
        add eax, 1
        push eax
        push edi
        lea eax, [esp + 0x10]
        push eax
        call dword ptr [mem_00925120]
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0x30], 0
        call dword ptr [mem_00924FDC]
        lea ecx, [esp + 8]
        mov dword ptr [esp + 0x2c], -1
        call dword ptr [mem_00924FF4]
        pop edi
        pop esi
        mov ecx, dword ptr [esp + 0x1c]
        mov dword ptr fs:[0], ecx
        add esp, 0x28
        ret
    clear_path:
        call dword ptr [mem_00924EA8]
        mov ecx, dword ptr [esp + 0x24]
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x28
        ret
    }
}

// [0x00664C60] sub_00664C60 (99 bytes)
extern "C" void ext_006649D0();
extern "C" int mem_00924FE0;
extern "C" __declspec(naked) void* __cdecl fn_00664C60(void* ret, const void* src) {
    __asm {
        push -1
        push 0x8864ea
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        push ecx
        mov eax, dword ptr [esp + 0x18]
        push esi
        mov dword ptr [esp + 0x4], 0x0
        mov esi, dword ptr [esp + 0x18]
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0x14], 0x0
        call dword ptr [mem_00924FE0]
        push esi
        mov dword ptr [esp + 0x14], 0x0
        mov dword ptr [esp + 0x8], 0x1
        call ext_006649D0
        mov ecx, dword ptr [esp + 0xc]
        add esp, 0x4
        mov eax, esi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00664F50] sub_00664F50 (188 bytes)
extern "C" void ext_00664CD0();
extern "C" int mem_009250D0;
extern "C" int mem_0092511C;
extern "C" int mem_00925134;
extern "C" int mem_00924E44;

extern "C" __declspec(naked) void __fastcall fn_00664F50(void* self) {
    __asm {
        sub esp, 0x18
        push ebx
        push esi
        mov esi, dword ptr [esp + 0x24]
        push edi
        lea eax, [esp + 0x14]
        push eax
        mov ecx, esi
        call dword ptr [mem_009250D0]
        lea ecx, [esp + 0xc]
        push ecx
        mov ecx, esi
        call dword ptr [mem_009250D0]
        lea edx, [esp + 0x1c]
        push edx
        mov ecx, esi
        call dword ptr [mem_0092511C]
        mov ecx, dword ptr [esp + 0xc]
        cmp ecx, -2
        mov ebx, dword ptr [mem_00925134]
        mov edi, eax
        je L_664FA0
        test ecx, ecx
        je L_664F9A
        cmp ecx, dword ptr [edi]
        je L_664FA0
    L_664F9A:
        call ebx
        mov ecx, dword ptr [esp + 0xc]
    L_664FA0:
        mov eax, dword ptr [esp + 0x10]
        cmp eax, dword ptr [edi + 0x4]
        je L_664FD2
        cmp ecx, -2
        je L_664FCD
        test ecx, ecx
        jne L_664FB8
        call ebx
        mov ecx, dword ptr [esp + 0xc]
    L_664FB8:
        call dword ptr [mem_00924E44]
        mov ecx, dword ptr [esp + 0xc]
        add eax, dword ptr [ecx + 0x14]
        cmp dword ptr [esp + 0x10], eax
        jb L_664FCD
        call ebx
    L_664FCD:
        add dword ptr [esp + 0x10], 0x1
    L_664FD2:
        mov byte ptr [esp + 0x28], 0
        mov edx, dword ptr [esp + 0x28]
        mov eax, dword ptr [esp + 0x28]
        mov ecx, dword ptr [esp + 0x28]
        push edx
        mov edx, dword ptr [esp + 0x18]
        push eax
        mov eax, dword ptr [esp + 0x20]
        push ecx
        mov ecx, dword ptr [esp + 0x1c]
        push eax
        push edx
        push ecx
        push eax
        lea edx, [esp + 0x38]
        push edx
        call ext_00664CD0
        add esp, 0x20
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        add esp, 0x18
        ret
    }
}

// [0x00663910] sub_00663910 (194 bytes)
extern "C" void ext_006A6DD2();

extern "C" void ext_006A6DD2();
extern "C" int mem_00925134;
extern "C" int mem_00925044;
extern "C" int mem_00925048;
extern "C" int mem_0092504C;

extern "C" __declspec(naked) void __fastcall fn_00663910(void* self) {
    __asm {
        push ebp
        mov ebp, esp
        push -0x1
        push 0x8b2b30
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x8
        mov eax, dword ptr [ebp + 0x10]
        test eax, eax
        push ebx
        push esi
        push edi
        mov edi, dword ptr [ebp + 0x8]
        mov ebx, ecx
        mov dword ptr [ebp - 0x10], esp
        mov dword ptr [ebp - 0x14], ebx
        je L_chk1
        cmp eax, edi
        je L_chk2
L_chk1:
        call dword ptr [mem_00925134]
L_chk2:
        mov eax, dword ptr [ebp + 0x14]
        mov esi, dword ptr [ebp + 0xc]
        sub eax, esi
        push eax
        mov ecx, ebx
        call dword ptr [mem_00925044]
        mov dword ptr [ebp - 0x4], 0x0
L_loop:
        test edi, edi
        je L_c1
        cmp edi, dword ptr [ebp + 0x10]
        je L_c2
L_c1:
        call dword ptr [mem_00925134]
L_c2:
        cmp esi, dword ptr [ebp + 0x14]
        je L_exit
        test edi, edi
        jne L_c3
        call dword ptr [mem_00925134]
L_c3:
        cmp esi, dword ptr [edi + 0x8]
        jb L_c4
        call dword ptr [mem_00925134]
L_c4:
        movzx eax, byte ptr [esi]
        push eax
        push 0x1
        mov ecx, ebx
        call dword ptr [mem_00925048]
        cmp esi, dword ptr [edi + 0x8]
        jb L_c5
        call dword ptr [mem_00925134]
L_c5:
        add esi, 0x1
        jmp L_loop
L_handler:
        mov ecx, dword ptr [ebp - 0x14]
        push 0x0
        push 0x1
        call dword ptr [mem_0092504C]
        push 0x0
        push 0x0
        call ext_006A6DD2
L_exit:
        mov ecx, dword ptr [ebp - 0xc]
        pop edi
        pop esi
        mov dword ptr fs:[0x0], ecx
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0x14
    }
}

// [0x00663F90] sub_00663F90 (173 bytes)
extern "C" void ext_00663910();
extern "C" int mem_00925084;
extern "C" int mem_0092503C;
extern "C" int mem_00925038;
extern "C" __declspec(naked) void __fastcall fn_00663F90(void* self) {
    __asm {
        push -1
        push 0x8b56f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x1c
        push esi
        push ecx
        mov esi, ecx
        mov ecx, esp
        call dword ptr [mem_00925084]
        lea ecx, [esp + 0x8]
        call dword ptr [mem_0092503C]
        push 0
        push 0
        lea ecx, [esp + 0xc]
        call dword ptr [mem_0092504C]
        mov eax, dword ptr [esp + 0x48]
        mov ecx, dword ptr [esp + 0x4c]
        mov edx, dword ptr [esp + 0x48]
        push eax
        mov eax, dword ptr [esp + 0x48]
        push ecx
        mov ecx, dword ptr [esp + 0x48]
        push edx
        push eax
        push ecx
        lea ecx, [esp + 0x18]
        call ext_00663910
        mov eax, dword ptr [esp + 0x3c]
        mov ecx, dword ptr [esp + 0x38]
        lea edx, [esp + 0x4]
        push edx
        mov edx, dword ptr [esp + 0x38]
        push eax
        mov eax, dword ptr [esp + 0x38]
        push ecx
        push edx
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0x3c], 0x0
        call dword ptr [mem_00925038]
        lea ecx, [esp + 0x4]
        mov dword ptr [esp + 0x28], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x20]
        mov eax, esi
        mov dword ptr fs:[0x0], ecx
        pop esi
        add esp, 0x28
        ret 0x24
    }
}

// [0x00664040] sub_00664040 (87 bytes)
extern "C" void ext_00663F90();
extern "C" int mem_0092511C;
extern "C" int mem_009250D0;
extern "C" __declspec(naked) void __fastcall fn_00664040(void* self) {
    __asm {
        sub esp, 0x10
        push ebx
        push esi
        push edi
        lea eax, [esp + 0xc]
        push eax
        mov esi, ecx
        call dword ptr [mem_0092511C]
        mov edi, dword ptr [eax]
        mov ebx, dword ptr [eax + 0x4]
        lea ecx, [esp + 0x14]
        push ecx
        mov ecx, esi
        call dword ptr [mem_009250D0]
        mov edx, dword ptr [esp + 0x28]
        mov ecx, dword ptr [esp + 0x2c]
        push edx
        mov edx, dword ptr [esp + 0x2c]
        push ecx
        mov ecx, dword ptr [esp + 0x2c]
        push edx
        mov edx, dword ptr [esp + 0x2c]
        push ecx
        mov ecx, dword ptr [eax + 0x4]
        push edx
        mov edx, dword ptr [eax]
        push ebx
        push edi
        push ecx
        push edx
        mov ecx, esi
        call ext_00663F90
        pop edi
        pop esi
        pop ebx
        add esp, 0x10
        ret 0x14
    }
}

// [0x00662C30] sub_00662C30 (201 bytes)
extern "C" int mem_008B2653;
extern "C" int mem_00924FE8;
extern "C" int mem_00924EAC;
extern "C" int mem_00924FFC;
extern "C" int mem_00925120;
extern "C" int mem_00924FDC;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00662C30(void* self) {
    __asm {
        push -1
        push offset mem_008B2653
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x20
        push ebx
        push esi
        xor ebx, ebx
        push edi
        mov dword ptr [esp + 0xc], ebx
        mov edi, dword ptr [esp + 0x3c]
        mov ecx, edi
        mov dword ptr [esp + 0x34], ebx
        call dword ptr [mem_00924FE8]
        mov esi, dword ptr [esp + 0x40]
        cmp dword ptr [esi + 0x14], ebx
        mov dword ptr [esp + 0x34], ebx
        mov dword ptr [esp + 0xc], 1
        je L_662CDC
        mov ecx, esi
        call dword ptr [mem_00924EAC]
        sub eax, 1
        push eax
        mov ecx, esi
        call dword ptr [mem_00924FFC]
        cmp byte ptr [eax], 0x5c
        jne L_662CDC
        mov ecx, esi
        call dword ptr [mem_00924EAC]
        sub eax, 1
        push eax
        push ebx
        lea eax, [esp + 0x18]
        push eax
        mov ecx, esi
        call dword ptr [mem_00925120]
        push eax
        mov ecx, edi
        mov dword ptr [esp + 0x38], 1
        call dword ptr [mem_00924FDC]
        lea ecx, [esp + 0x10]
        mov byte ptr [esp + 0x34], bl
        call dword ptr [mem_00924FF4]
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        mov ecx, dword ptr [esp + 0x20]
        mov dword ptr fs:[0], ecx
        add esp, 0x2c
        ret
    L_662CDC:
        push esi
        mov ecx, edi
        call dword ptr [mem_00924FDC]
        mov ecx, dword ptr [esp + 0x2c]
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x2c
        ret
    }
}

// [0x00667900] sub_00667900 (206 bytes)
extern "C" void ext_004442E0();
extern "C" void ext_00666CB0();
extern "C" void ext_00667030();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_00667900(void* self) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -0x8
        sub esp, 0x18
        push ebx
        lea eax, [ecx + 0xc]
        mov ecx, dword ptr [eax + 0x4]
        push ebp
        push esi
        push edi
        mov edi, dword ptr [ecx]
        mov esi, eax
        mov dword ptr [esp + 0x14], eax
        mov dword ptr [esp + 0x20], esi
        mov dword ptr [esp + 0x24], edi

    L_00667923:
        test esi, esi
        mov ebx, dword ptr [eax + 0x4]
        je L_0066792E
        cmp esi, eax
        je L_00667938

    L_0066792E:
        mov ebp, dword ptr [mem_00925134]
        call ebp
        jmp L_0066793E

    L_00667938:
        mov ebp, dword ptr [mem_00925134]

    L_0066793E:
        cmp edi, ebx
        je L_006679C6
        test esi, esi
        jne L_0066794C
        call ebp

    L_0066794C:
        cmp edi, dword ptr [esi + 0x4]
        jne L_00667953
        call ebp

    L_00667953:
        mov edx, dword ptr [edi + 0x30]
        mov eax, dword ptr [edx]
        add edi, 0x2c
        mov esi, edi
        mov ebp, eax
        mov dword ptr [esp + 0x18], esi
        mov dword ptr [esp + 0x1c], ebp

    L_00667967:
        test esi, esi
        mov ebx, dword ptr [edi + 0x4]
        je L_00667972
        cmp esi, edi
        je L_00667978

    L_00667972:
        call dword ptr [mem_00925134]

    L_00667978:
        cmp ebp, ebx
        je L_006679AC
        test esi, esi
        jne L_00667986
        call dword ptr [mem_00925134]

    L_00667986:
        cmp ebp, dword ptr [esi + 0x4]
        jne L_00667991
        call dword ptr [mem_00925134]

    L_00667991:
        lea ecx, [ebp + 0x28]
        call ext_00666CB0
        lea ecx, [esp + 0x18]
        call ext_004442E0
        mov ebp, dword ptr [esp + 0x1c]
        mov esi, dword ptr [esp + 0x18]
        jmp L_00667967

    L_006679AC:
        lea ecx, [esp + 0x20]
        call ext_00667030
        mov edi, dword ptr [esp + 0x24]
        mov esi, dword ptr [esp + 0x20]
        mov eax, dword ptr [esp + 0x14]
        jmp L_00667923

    L_006679C6:
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}

// [0x00669E80] sub_00669E80 (211 bytes)
extern "C" int mem_00999B40;
extern "C" int mem_009357C0;
extern "C" int mem_00987B20;

extern "C" __declspec(naked) float __stdcall fn_00669E80(float a, float b, float c) {
    __asm {
        fldz
        fld dword ptr [esp + 0xc]
        fcom st(1)
        fnstsw ax
        fstp st(1)
        test ah, 0x5
        fld1
        jp short L_neg_done
        fadd st(1), st
        fxch st(1)
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0xc]
        fxch st(1)
    L_neg_done:
        fld1
        fcomp st(2)
        fnstsw ax
        test ah, 0x5
        jp short L_gt1_done
        fsub st(1), st
        fxch st(1)
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0xc]
        fxch st(1)
    L_gt1_done:
        fld st(1)
        fld qword ptr [mem_00999B40]
        fmul st(1), st
        fxch st(1)
        fcomp st(2)
        fnstsw ax
        test ah, 0x5
        jp short L_case_hi
        fstp st(1)
        fld dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x4]
        fld st(0)
        fsubp st(2), st
        fxch st(1)
        fmulp st(2), st
        fxch st(1)
        fmulp st(2), st
        faddp st(1), st
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0xc]
        ret 0xc
    L_case_hi:
        fld st(2)
        fadd st(0), st
        fcomp st(2)
        fnstsw ax
        test ah, 0x5
        jp short L_case_mid
        fstp st(2)
        fstp st(0)
        fstp st(0)
        fld dword ptr [esp + 0x8]
        ret 0xc
    L_case_mid:
        fld st(2)
        fmul qword ptr [mem_009357C0]
        fcomp st(2)
        fnstsw ax
        fstp st(1)
        test ah, 0x5
        jp short L_ret_a
        fld dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x4]
        fld st(0)
        fsubp st(2), st
        fxch st(1)
        fmulp st(2), st
        fld qword ptr [mem_00987B20]
        fsubrp st(3), st
        fxch st(1)
        fmulp st(2), st
        faddp st(1), st
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0xc]
        ret 0xc
    L_ret_a:
        fstp st(1)
        fstp st(0)
        fld dword ptr [esp + 0x4]
        ret 0xc
    }
}

// [0x00665F60] sub_00665F60 (216 bytes)
extern "C" void ext_00435CC0();
extern "C" void ext_006658A0();
extern "C" void ext_006658F0();
extern "C" void ext_00665990();
extern "C" void ext_00665CA0();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_00665F60(void* self) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8a0d28
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0xc
        push ebp
        mov ebp, ecx
        call ext_006658A0
        test al, al
        je L_exit
        mov eax, dword ptr [ebp + 0x14]
        push ebx
        push esi
        mov esi, dword ptr [eax + 0x4]
        cmp esi, eax
        push edi
        lea edi, [ebp + 0x10]
        jne L_1
        call dword ptr [mem_00925134]
    L_1:
        cmp esi, dword ptr [edi + 0x4]
        jne L_2
        call dword ptr [mem_00925134]
    L_2:
        mov esi, dword ptr [esi + 0x8]
        mov dword ptr [esp + 0x10], esi
        mov eax, dword ptr [edi + 0x4]
        mov ebx, dword ptr [eax + 0x4]
        cmp ebx, eax
        mov dword ptr [esp + 0x24], 0
        jne L_3
        call dword ptr [mem_00925134]
    L_3:
        push ebx
        push edi
        lea eax, [esp + 0x1c]
        push eax
        mov ecx, edi
        call ext_00665990
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 0x8]
        mov ecx, esi
        call eax
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 0x10]
        mov ecx, esi
        call eax
        mov edi, dword ptr [ebp + 0x20]
        mov edx, dword ptr [edi + 0x4]
        mov dword ptr [esp + 0x14], esi
        lea esi, [ebp + 0x1c]
        lea ecx, [esp + 0x14]
        push ecx
        push edx
        push edi
        mov ecx, esi
        mov dword ptr [esp + 0x1c], 0
        call ext_00435CC0
        push 1
        mov ecx, esi
        mov ebx, eax
        call ext_006658F0
        mov dword ptr [edi + 0x4], ebx
        mov eax, dword ptr [ebx + 0x4]
        mov ecx, ebp
        mov dword ptr [eax], ebx
        call ext_00665CA0
        pop edi
        pop esi
        pop ebx
    L_exit:
        mov ecx, dword ptr [esp + 0x10]
        pop ebp
        mov dword ptr fs:[0], ecx
        add esp, 0x18
        ret
    }
}

// [0x00666040] sub_00666040 (216 bytes)
extern "C" void ext_006658B0();

extern "C" __declspec(naked) void __fastcall fn_00666040(void* self) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8a0d28
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0xc
        push ebp
        mov ebp, ecx
        call ext_006658B0
        test al, al
        je L_exit
        mov eax, dword ptr [ebp + 0x20]
        push ebx
        push esi
        mov esi, dword ptr [eax + 0x4]
        cmp esi, eax
        push edi
        lea edi, [ebp + 0x1c]
        jne L_1
        call dword ptr [mem_00925134]
    L_1:
        cmp esi, dword ptr [edi + 0x4]
        jne L_2
        call dword ptr [mem_00925134]
    L_2:
        mov esi, dword ptr [esi + 0x8]
        mov dword ptr [esp + 0x10], esi
        mov eax, dword ptr [edi + 0x4]
        mov ebx, dword ptr [eax + 0x4]
        cmp ebx, eax
        mov dword ptr [esp + 0x24], 0
        jne L_3
        call dword ptr [mem_00925134]
    L_3:
        push ebx
        push edi
        lea eax, [esp + 0x1c]
        push eax
        mov ecx, edi
        call ext_00665990
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 0x4]
        mov ecx, esi
        call eax
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 0x10]
        mov ecx, esi
        call eax
        mov edi, dword ptr [ebp + 0x14]
        mov edx, dword ptr [edi + 0x4]
        mov dword ptr [esp + 0x14], esi
        lea esi, [ebp + 0x10]
        lea ecx, [esp + 0x14]
        push ecx
        push edx
        push edi
        mov ecx, esi
        mov dword ptr [esp + 0x1c], 0
        call ext_00435CC0
        push 1
        mov ecx, esi
        mov ebx, eax
        call ext_006658F0
        mov dword ptr [edi + 0x4], ebx
        mov eax, dword ptr [ebx + 0x4]
        mov ecx, ebp
        mov dword ptr [eax], ebx
        call ext_00665CA0
        pop edi
        pop esi
        pop ebx
    L_exit:
        mov ecx, dword ptr [esp + 0x10]
        pop ebp
        mov dword ptr fs:[0], ecx
        add esp, 0x18
        ret
    }
}

// [0x006679D0] sub_006679D0 (222 bytes)
extern "C" void ext_00666CC0();

extern "C" __declspec(naked) void __fastcall fn_006679D0(void* self) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -0x8
        sub esp, 0x18
        mov eax, dword ptr [ecx + 0x10]
        push ebx
        push ebp
        add ecx, 0xc
        push esi
        push edi
        mov edi, dword ptr [eax]
        mov esi, ecx
        mov dword ptr [esp + 0x14], ecx
        mov dword ptr [esp + 0x20], esi
        mov dword ptr [esp + 0x24], edi

    L_006679F3:
        test esi, esi
        mov ebx, dword ptr [ecx + 0x4]
        je L_006679FE
        cmp esi, ecx
        je L_00667A08

    L_006679FE:
        mov ebp, dword ptr [mem_00925134]
        call ebp
        jmp L_00667A0E

    L_00667A08:
        mov ebp, dword ptr [mem_00925134]

    L_00667A0E:
        cmp edi, ebx
        je L_00667AA4
        test esi, esi
        jne L_00667A1C
        call ebp

    L_00667A1C:
        cmp edi, dword ptr [esi + 0x4]
        jne L_00667A23
        call ebp

    L_00667A23:
        mov ecx, dword ptr [edi + 0x30]
        mov eax, dword ptr [ecx]
        add edi, 0x2c
        mov esi, edi
        mov ebp, eax
        mov dword ptr [esp + 0x18], esi
        mov dword ptr [esp + 0x1c], ebp

    L_00667A37:
        test esi, esi
        mov ebx, dword ptr [edi + 0x4]
        je L_00667A42
        cmp esi, edi
        je L_00667A48

    L_00667A42:
        call dword ptr [mem_00925134]

    L_00667A48:
        cmp ebp, ebx
        je L_00667A80
        test esi, esi
        jne L_00667A56
        call dword ptr [mem_00925134]

    L_00667A56:
        cmp ebp, dword ptr [esi + 0x4]
        jne L_00667A61
        call dword ptr [mem_00925134]

    L_00667A61:
        lea ecx, [ebp + 0x28]
        call ext_00666CC0
        test al, al
        jne L_00667A9A
        lea ecx, [esp + 0x18]
        call ext_004442E0
        mov ebp, dword ptr [esp + 0x1c]
        mov esi, dword ptr [esp + 0x18]
        jmp L_00667A37

    L_00667A80:
        lea ecx, [esp + 0x20]
        call ext_00667030
        mov edi, dword ptr [esp + 0x24]
        mov esi, dword ptr [esp + 0x20]
        mov ecx, dword ptr [esp + 0x14]
        jmp L_006679F3

    L_00667A9A:
        mov al, 1
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov esp, ebp
        pop ebp
        ret

    L_00667AA4:
        pop edi
        xor al, al
        pop esi
        pop ebp
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}

// [0x0066A3F0] sub_0066A3F0 (230 bytes)
// HSL -> RGB: stores (r, g, b) through `self`; args are (hue, saturation, lightness).
extern "C" void __fastcall fn_0066A3F0(float* self, int edx_unused, float h, float s, float l) {
    if (s == 0.0f) {
        self[0] = l;
        self[1] = l;
        self[2] = l;
        return;
    }
    float q;
    if (l < 0.5f) {
        q = (s + 1.0) * l;
    } else {
        q = (s + l) - s * l;
    }
    float p = 2.0f * l - q;
    self[0] = fn_00669E80(p, q, (float)((double)h + 0.33333333333333392545));
    self[1] = fn_00669E80(p, q, h);
    self[2] = fn_00669E80(p, q, (float)((double)h - 0.33333333333333392545));
}

// [0x006632B0] sub_006632B0 (232 bytes)
extern "C" void ext_00403560();
extern "C" void ext_006A6DD2();
extern "C" int mem_00924270;
extern "C" int mem_00924FE4;
extern "C" int mem_00924ED0;
extern "C" int mem_0092426C;
extern "C" int mem_00925058;
extern "C" int mem_0092500C;
extern "C" int mem_00924268;
extern "C" int mem_009241E0;

extern "C" __declspec(naked) void __cdecl fn_006632B0() {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x892ed9
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x48
        push esi
        push edi
        mov edi, dword ptr [esp + 0x60]
        push 0
        push 0x8000000
        push 3
        push 0
        push 1
        push 0x80000000
        push edi
        call dword ptr [mem_00924270]
        mov esi, eax
        cmp esi, -1
        jne loc_00663344
        push 0x95975c
        lea ecx, [esp + 0x10]
        call dword ptr [mem_00924FE4]
        push edi
        lea ecx, [esp + 0x10]
        mov dword ptr [esp + 0x5c], 0
        call dword ptr [mem_00924ED0]
        push 0x9877e8
        lea ecx, [esp + 0x10]
        call dword ptr [mem_00924ED0]
        lea eax, [esp + 0xc]
        push eax
        lea ecx, [esp + 0x2c]
        call ext_00403560
        push 0x9f8908
        lea ecx, [esp + 0x2c]
        push ecx
        mov dword ptr [esp + 0x30], 0x9570dc
        call ext_006A6DD2
    loc_00663344:
        push ebx
        push 0
        push esi
        call dword ptr [mem_0092426C]
        mov ebx, dword ptr [esp + 0x68]
        mov edi, eax
        push edi
        mov ecx, ebx
        call dword ptr [mem_00925058]
        push 0
        lea edx, [esp + 0x10]
        push edx
        push edi
        push 0
        mov ecx, ebx
        mov dword ptr [esp + 0x1c], 0
        call dword ptr [mem_0092500C]
        push eax
        push esi
        call dword ptr [mem_00924268]
        push esi
        call dword ptr [mem_009241E0]
        mov ecx, dword ptr [esp + 0x54]
        pop ebx
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x54
        ret
    }
}

// [0x00660180] sub_00660180 (91 bytes)
extern "C" void ext_0065FE50();
extern "C" int mem_00924FE0;

extern "C" __declspec(naked) void __cdecl fn_00660180() {
    __asm {
        mov ecx, dword ptr [esp + 0x4]
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 0x10]
        sub ebp, ecx
        sar ebp, 0x5
        mov eax, ebp
        cdq
        push esi
        sub eax, edx
        mov esi, eax
        sar esi, 1
        test esi, esi
        push edi
        jle loc_006601D6
        mov edi, esi
        shl edi, 0x5
        add edi, ecx
    loc_006601A5:
        sub esp, 0x20
        mov ebx, esp
        sub edi, 0x20
        mov dword ptr [esp + 0x38], esp
        push edi
        mov ecx, ebx
        sub esi, 1
        call dword ptr [mem_00924FE0]
        mov ecx, dword ptr [esp + 0x34]
        mov eax, dword ptr [edi + 0x1c]
        push ebp
        push esi
        push ecx
        mov dword ptr [ebx + 0x1c], eax
        call ext_0065FE50
        add esp, 0x2c
        test esi, esi
        jg loc_006601A5
    loc_006601D6:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}

// [0x00660710] sub_00660710 (95 bytes)
extern "C" void ext_0065FF50();

extern "C" __declspec(naked) void __cdecl fn_00660710() {
    __asm {
        mov ecx, dword ptr [esp + 0x8]
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 0xc]
        mov eax, ecx
        sub eax, ebp
        sar eax, 0x5
        cmp eax, 0x1
        push esi
        push edi
        jle loc_0066076a
        mov ebx, 0x20
        sub ebx, ebp
        cmp eax, 0x1
        lea esi, [ecx - 0x20]
        jle loc_0066075c
    loc_00660737:
        push 0
        sub esp, 0x20
        mov edi, esp
        mov dword ptr [esp + 0x3c], esp
        push esi
        mov ecx, edi
        call dword ptr [mem_00924FE0]
        mov eax, dword ptr [esi + 0x1c]
        push esi
        push esi
        push ebp
        mov dword ptr [edi + 0x1c], eax
        call ext_0065FF50
        add esp, 0x30
    loc_0066075c:
        sub esi, 0x20
        lea eax, [ebx + esi]
        sar eax, 0x5
        cmp eax, 0x1
        jg loc_00660737
    loc_0066076a:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}

// [0x00661F70] sub_00661F70 (262 bytes)
extern "C" __declspec(naked) void __fastcall fn_00661F70(void* self, int edx_unused, int arg1) {
    __asm {
        push ebp
        mov ebp, [mem_00925134]
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 8], 0
        push edi
        jne L_661F83
        call ebp
L_661F83:
        mov eax, [esi + 8]
        mov ecx, [esi + 0xc]
        cmp ecx, [eax + 4]
        jne L_661F90
        call ebp
L_661F90:
        mov edx, [esi + 0xc]
        mov eax, [esp + 0x10]
        cmp eax, [edx + 8]
        jle L_662006
        mov edi, [esi + 4]
        mov eax, [edi + 0x64]
        add edi, 0x60
        push ebx
        mov ebx, [eax + 4]
        cmp ebx, eax
        jne L_661FB0
        call ebp
        nop
L_661FB0:
        mov eax, [esi + 8]
        test eax, eax
        je L_661FBB
        cmp eax, edi
        je L_661FBD
L_661FBB:
        call ebp
L_661FBD:
        cmp [esi + 0xc], ebx
        je L_662061
        cmp dword ptr [esi + 8], 0
        jne L_661FCE
        call ebp
L_661FCE:
        mov ecx, [esi + 8]
        mov edx, [esi + 0xc]
        cmp edx, [ecx + 4]
        jne L_661FDB
        call ebp
L_661FDB:
        mov eax, [esi + 0xc]
        mov ecx, [esp + 0x14]
        cmp ecx, [eax + 8]
        jle L_662061
        cmp dword ptr [esi + 8], 0
        jne L_661FEF
        call ebp
L_661FEF:
        mov edx, [esi + 8]
        mov eax, [esi + 0xc]
        cmp eax, [edx + 4]
        jne L_661FFC
        call ebp
L_661FFC:
        mov ecx, [esi + 0xc]
        mov edx, [ecx]
        mov [esi + 0xc], edx
        jmp L_661FB0
L_662006:
        mov eax, [esi + 4]
        mov ecx, [eax + 0x64]
        mov edi, [ecx]
        mov ecx, [esi + 8]
        add eax, 0x60
        test ecx, ecx
        je L_66201C
        cmp ecx, eax
        je L_66201E
L_66201C:
        call ebp
L_66201E:
        cmp [esi + 0xc], edi
        je L_662062
        cmp dword ptr [esi + 8], 0
        jne L_66202B
        call ebp
L_66202B:
        mov edx, [esi + 8]
        mov eax, [esi + 0xc]
        cmp eax, [edx + 4]
        jne L_662038
        call ebp
L_662038:
        mov ecx, [esi + 0xc]
        mov edx, [esp + 0x10]
        cmp edx, [ecx + 8]
        jge L_662062
        cmp dword ptr [esi + 8], 0
        jne L_66204C
        call ebp
L_66204C:
        mov eax, [esi + 0xc]
        mov eax, [eax + 4]
        mov ecx, [esi + 8]
        mov [esi + 0xc], eax
        cmp eax, [ecx + 4]
        jne L_662006
        call ebp
        jmp L_662006
L_662061:
        pop ebx
L_662062:
        push 0
        push esi
        lea ecx, [esi + 0x38]
        mov byte ptr [esi], 1
        call ext_00466BA0
        pop edi
        pop esi
        pop ebp
        ret 4
    }
}

// [0x006620A0] sub_006620A0 (56 bytes)
extern "C" int mem_00925134;
extern "C" __declspec(naked) void __fastcall fn_006620A0(void* self) {
    __asm {
        push ebx
        mov ebx, ecx
        push esi
        mov esi, dword ptr [ebx + 0x4]
        cmp dword ptr [esi + 0x68], 0x0
        je done
        mov eax, dword ptr [esi + 0x64]
        push ebp
        mov ebp, dword ptr [mem_00925134]
        push edi
        mov edi, dword ptr [eax + 0x4]
        cmp edi, eax
        jne L1
        call ebp
L1:
        cmp edi, dword ptr [esi + 0x64]
        jne L2
        call ebp
L2:
        mov eax, dword ptr [edi + 0x8]
        push eax
        mov ecx, ebx
        call ext_00661F70
        pop edi
        pop ebp
done:
        pop esi
        pop ebx
        ret
    }
}

// [0x00662210] sub_00662210 (163 bytes)
extern "C" int mem_00925134;
extern "C" void ext_00466BA0();

extern "C" __declspec(naked) unsigned char __fastcall fn_00662210(void* self) {
    __asm {
        push ebx
        mov ebx, dword ptr [mem_00925134]
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x4]
        mov ecx, dword ptr [eax + 0x64]
        add eax, 0x60
        push edi
        mov edi, dword ptr [ecx]
        mov ecx, dword ptr [esi + 0x8]
        test ecx, ecx
        je L_chk1
        cmp ecx, eax
        je L_chk2
L_chk1:
        call ebx
L_chk2:
        cmp dword ptr [esi + 0xc], edi
        je L_false
        cmp dword ptr [esi + 0x8], 0x0
        jne L_b
        call ebx
L_b:
        mov edx, dword ptr [esi + 0x8]
        mov eax, dword ptr [esi + 0xc]
        cmp eax, dword ptr [edx + 0x4]
        jne L_c
        call ebx
L_c:
        mov ecx, dword ptr [esi + 0xc]
        mov edx, dword ptr [esi + 0x4]
        mov eax, dword ptr [ecx + 0x8]
        cmp eax, dword ptr [edx + 0x130]
        jle L_false
        cmp dword ptr [esi + 0x8], 0x0
        jne L_d
        call ebx
L_d:
        mov ecx, dword ptr [esi + 0xc]
        mov eax, dword ptr [ecx + 0x4]
        mov edx, dword ptr [esi + 0x8]
        mov dword ptr [esi + 0xc], eax
        cmp eax, dword ptr [edx + 0x4]
        jne L_e
        call ebx
L_e:
        push 0x0
        push esi
        lea ecx, [esi + 0x38]
        mov byte ptr [esi], 0x1
        call ext_00466BA0
        pop edi
        pop esi
        mov al, 0x1
        pop ebx
        ret
L_false:
        mov eax, dword ptr [esi + 0x4]
        cmp byte ptr [eax + 0x12c], 0x0
        je L_zero
        mov eax, dword ptr [eax + 0x134]
        push eax
        mov ecx, esi
        call ext_00661F70
        pop edi
        pop esi
        mov al, 0x1
        pop ebx
        ret
L_zero:
        pop edi
        pop esi
        xor al, al
        pop ebx
        ret
    }
}

// [0x00662140] sub_00662140 (207 bytes)
extern "C" __declspec(naked) bool __fastcall fn_00662140(void* self) {
    __asm {
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 0x8], 0x0
        push edi
        jne L_a
        call dword ptr [mem_00925134]
L_a:
        mov eax, dword ptr [esi + 0x8]
        mov ecx, dword ptr [esi + 0xc]
        cmp ecx, dword ptr [eax + 0x4]
        jne L_b
        call dword ptr [mem_00925134]
L_b:
        mov edi, dword ptr [esi + 0x4]
        mov eax, dword ptr [edi + 0x64]
        push ebx
        mov ebx, dword ptr [esi + 0xc]
        add edi, 0x60
        push ebp
        mov ebp, dword ptr [eax + 0x4]
        add ebx, 0x8
        cmp ebp, eax
        jne L_c
        call dword ptr [mem_00925134]
L_c:
        cmp ebp, dword ptr [edi + 0x4]
        mov edi, dword ptr [mem_00925134]
        jne L_d
        call edi
L_d:
        add ebp, 0x8
        cmp ebx, ebp
        pop ebp
        pop ebx
        je L_eb
        cmp dword ptr [esi + 0x8], 0x0
        jne L_e
        call edi
L_e:
        mov edx, dword ptr [esi + 0x8]
        mov eax, dword ptr [esi + 0xc]
        cmp eax, dword ptr [edx + 0x4]
        jne L_f
        call edi
L_f:
        mov ecx, dword ptr [esi + 0xc]
        mov edx, dword ptr [esi + 0x4]
        mov eax, dword ptr [ecx + 0x8]
        cmp eax, dword ptr [edx + 0x134]
        jge L_eb
        cmp dword ptr [esi + 0x8], 0x0
        jne L_g
        call edi
L_g:
        mov ecx, dword ptr [esi + 0x8]
        mov edx, dword ptr [esi + 0xc]
        cmp edx, dword ptr [ecx + 0x4]
        jne L_h
        call edi
L_h:
        mov eax, dword ptr [esi + 0xc]
        mov ecx, dword ptr [eax]
        mov dword ptr [esi + 0xc], ecx
        push 0x0
        push esi
        lea ecx, [esi + 0x38]
        mov byte ptr [esi], 0x1
        call ext_00466BA0
        pop edi
        mov al, 0x1
        pop esi
        ret
L_eb:
        mov eax, dword ptr [esi + 0x4]
        cmp byte ptr [eax + 0x12c], 0x0
        je L_zero
        mov edx, dword ptr [eax + 0x130]
        push edx
        mov ecx, esi
        call ext_00661F70
        pop edi
        mov al, 0x1
        pop esi
        ret
L_zero:
        pop edi
        xor al, al
        pop esi
        ret
    }
}

// [0x00662310] sub_00662310 (230 bytes)
extern "C" __declspec(naked) void __fastcall fn_00662310(void* self, int edx_unused, int arg1, int arg2) {
    __asm {
        push -1
        push 0x8b28e6
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0ch
        mov eax, dword ptr [esp + 1ch]
        push ebx
        push esi
        mov esi, ecx
        mov byte ptr [esi], 1
        mov dword ptr [esi + 4], eax
        push edi
        xor edi, edi
        mov dword ptr [esi + 8], edi
        mov dword ptr [esi + 0ch], edi
        mov dword ptr [esp + 14h], esi
        mov dword ptr [esi + 18h], edi
        mov dword ptr [esi + 1ch], edi
        mov dword ptr [esi + 20h], edi
        mov dword ptr [esi + 10h], 0x94436c
        mov dword ptr [esi + 28h], edi
        mov dword ptr [esi + 2ch], edi
        mov dword ptr [esi + 30h], edi
        mov dword ptr [esi + 34h], edi
        mov dword ptr [esp + 20h], 1
        mov dword ptr [esi + 40h], edi
        mov dword ptr [esi + 44h], edi
        mov dword ptr [esi + 48h], edi
        mov dword ptr [esi + 38h], 0x944380
        mov dword ptr [esi + 50h], edi
        mov dword ptr [esi + 54h], edi
        mov dword ptr [esi + 58h], edi
        mov dword ptr [esi + 5ch], edi
        mov ebx, dword ptr [esp + 2ch]
        cmp ebx, edi
        mov eax, dword ptr [esi + 4]
        mov byte ptr [esp + 20h], 3
        je short L_else_00662310
        mov edx, dword ptr [eax + 64h]
        mov edx, dword ptr [edx]
        lea ecx, [eax + 60h]
        mov dword ptr [esi + 8], ecx
        mov dword ptr [esi + 0ch], edx
        cmp dword ptr [eax + 68h], edi
        je short L_end_00662310
        cmp dword ptr [ebx], edi
        push ebp
        mov ebp, dword ptr [mem_00925134]
        jne short L_skip1_00662310
        call ebp
L_skip1_00662310:
        mov eax, dword ptr [ebx]
        mov ecx, dword ptr [ebx + 4]
        cmp ecx, dword ptr [eax + 4]
        jne short L_skip2_00662310
        call ebp
L_skip2_00662310:
        mov edx, dword ptr [ebx + 4]
        mov eax, dword ptr [edx + 8]
        cmp eax, edi
        pop ebp
        je short L_end_00662310
        push eax
        mov ecx, esi
        call ext_00661F70
        jmp short L_end_00662310
L_else_00662310:
        mov ecx, dword ptr [eax + 74h]
        mov dword ptr [esi + 8], ecx
        mov edx, dword ptr [eax + 78h]
        mov dword ptr [esi + 0ch], edx
L_end_00662310:
        mov ecx, dword ptr [esp + 18h]
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 18h
        ret 8
    }
}

// [0x00666210] sub_00666210 (264 bytes)
extern "C" void ext_00435CC0();
extern "C" void ext_006658F0();
extern "C" void ext_00665BD0();
extern "C" void ext_00665CA0();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_00666210(void* self, int edx_unused, int a1) {
    __asm {
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0xc]
        sub eax, 0
        push edi
        je case0
        sub eax, 1
        je case1
        sub eax, 1
        jne fin
        cmp dword ptr [esi + 0x18], 0
        jne nonzero
        lea eax, [esp + 0x14]
        push eax
        lea ecx, [esi + 0x10]
        call ext_00665BD0
        mov ecx, esi
        call ext_00665CA0
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x4
nonzero:
        mov eax, dword ptr [esi + 0x14]
        mov edi, dword ptr [eax + 0x4]
        cmp edi, eax
        mov ebx, dword ptr [mem_00925134]
        jne n1
        call ebx
n1:
        cmp edi, dword ptr [esi + 0x14]
        jne n2
        call ebx
n2:
        mov ecx, dword ptr [edi + 0x8]
        test ecx, ecx
        je n3
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 0x1
        call eax
n3:
        mov eax, dword ptr [esi + 0x14]
        mov edi, dword ptr [eax + 0x4]
        cmp edi, eax
        jne n4
        call ebx
n4:
        cmp edi, dword ptr [esi + 0x14]
        jne n5
        call ebx
n5:
        mov ecx, dword ptr [esp + 0x14]
        mov dword ptr [edi + 0x8], ecx
        mov ecx, esi
        call ext_00665CA0
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x4
case1:
        mov ebx, dword ptr [esi + 0x14]
        mov eax, dword ptr [ebx + 0x4]
        lea edi, [esi + 0x10]
        lea edx, [esp + 0x14]
        push edx
        push eax
        push ebx
        mov ecx, edi
        call ext_00435CC0
        push 0x1
        mov ecx, edi
        mov ebp, eax
        call ext_006658F0
        mov dword ptr [ebx + 0x4], ebp
        mov ecx, dword ptr [ebp + 0x4]
        mov dword ptr [ecx], ebp
        mov ecx, esi
        mov dword ptr [esi + 0xc], 0x2
        call ext_00665CA0
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x4
case0:
        mov ebx, dword ptr [esi + 0x14]
        mov eax, dword ptr [ebx + 0x4]
        lea edi, [esi + 0x10]
        lea edx, [esp + 0x14]
        push edx
        push eax
        push ebx
        mov ecx, edi
        call ext_00435CC0
        push 0x1
        mov ecx, edi
        mov ebp, eax
        call ext_006658F0
        mov dword ptr [ebx + 0x4], ebp
        mov ecx, dword ptr [ebp + 0x4]
        mov dword ptr [ecx], ebp
fin:
        mov ecx, esi
        call ext_00665CA0
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x4
    }
}

// [0x00664680] sub_00664680 (277 bytes)
extern "C" int mem_00924EA8; extern "C" int mem_00925030; extern "C" int mem_00924EC4; extern "C" int mem_009250F8; extern "C" int mem_00925120; extern "C" int mem_00924FDC; extern "C" int mem_00924FF4;
extern "C" __declspec(naked) void __cdecl fn_00664680() {
    __asm {
        mov eax, fs:[0]
        mov ecx, [esp+0x10]
        push -1
        push 0x8b2d0b
        push eax
        mov fs:[0], esp
        sub esp, 0x38
        push ebx
        push ebp
        push esi
        push edi
        call [mem_00924EA8]
        mov ebx, [esp+0x5c]
        mov esi, [esp+0x58]
        push 0
        push ebx
        mov ecx, esi
        call [mem_00925030]
        mov ebp, eax
        mov eax, [mem_00924EC4]
        mov ecx, [eax]
        push ecx
        push ebx
        mov ecx, esi
        call [mem_009250F8]
        mov edi, eax
        mov eax, [mem_00924EC4]
        cmp edi, [eax]
        je L1
        push edi
        push ebp
        lea edx, [esp+0x18]
        push edx
        mov ecx, esi
        call [mem_00925120]
        mov ecx, [esp+0x60]
        push eax
        mov dword ptr [esp+0x54], 0
        call [mem_00924FDC]
        or ebp, -1
        lea ecx, [esp+0x10]
        mov [esp+0x50], ebp
        call [mem_00924FF4]
        push edi
        push ebx
        mov ecx, esi
        call [mem_00925030]
        mov ecx, [mem_00924EC4]
        cmp eax, [ecx]
        je L3
        mov ecx, [ecx]
        push ecx
        push eax
        lea edx, [esp+0x18]
        push edx
        mov ecx, esi
        call [mem_00925120]
        mov ecx, [esp+0x64]
        push eax
        mov dword ptr [esp+0x54], 1
        call [mem_00924FDC]
        mov [esp+0x50], ebp
        lea ecx, [esp+0x10]
        jmp L2
    L1:
        mov eax, [eax]
        push eax
        push ebp
        lea ecx, [esp+0x34]
        push ecx
        mov ecx, esi
        call [mem_00925120]
        mov ecx, [esp+0x60]
        push eax
        mov dword ptr [esp+0x54], 2
        call [mem_00924FDC]
        mov dword ptr [esp+0x50], 0xffffffff
        lea ecx, [esp+0x2c]
    L2:
        call [mem_00924FF4]
    L3:
        mov ecx, [esp+0x48]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov fs:[0], ecx
        add esp, 0x44
        ret
    }
}

// [0x006624F0] sub_006624F0 (281 bytes)
extern "C" int mem_00924EAC;
extern "C" int mem_00924EC4;
extern "C" int mem_00925120;
extern "C" int mem_00924FC0;
extern "C" int mem_00924FF4;
extern "C" int mem_00925100;
extern "C" int mem_00925050;
extern "C" __declspec(naked) int __cdecl fn_006624F0(void) {
    __asm {
        push -1
        push 0x8b294d
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x24
        push ebx
        xor ebx, ebx
        push esi
        mov dword ptr [esp + 0xc], ebx
        mov esi, 1
        lea ecx, [esp + 0x40]
        mov dword ptr [esp + 0x34], esi
        call dword ptr [mem_00924EAC]
        cmp eax, 2
        jbe L_short
        mov eax, dword ptr [mem_00924EC4]
        mov ecx, dword ptr [eax]
        push ecx
        lea ecx, [esp + 0x44]
        call dword ptr [mem_00924EAC]
        sub eax, 2
        push eax
        lea edx, [esp + 0x18]
        push edx
        lea ecx, [esp + 0x4c]
        call dword ptr [mem_00925120]
        push 0x9877a0
        mov ebx, esi
        push eax
        mov byte ptr [esp + 0x3c], 2
        mov dword ptr [esp + 0x14], ebx
        call dword ptr [mem_00924FC0]
        add esp, 8
        test al, al
        mov byte ptr [esp + 0xb], bl
        jne L_after1
L_short:
        mov byte ptr [esp + 0xb], 0
L_after1:
        test bl, 1
        mov dword ptr [esp + 0x34], esi
        je L_skip_dtor
        and ebx, -2
        lea ecx, [esp + 0x10]
        mov dword ptr [esp + 0xc], ebx
        call dword ptr [mem_00924FF4]
L_skip_dtor:
        cmp byte ptr [esp + 0xb], 0
        je L_skip_erase
        mov eax, dword ptr [mem_00924EC4]
        mov ecx, dword ptr [eax]
        push ecx
        lea ecx, [esp + 0x44]
        call dword ptr [mem_00924EAC]
        sub eax, 2
        push eax
        lea ecx, [esp + 0x48]
        call dword ptr [mem_00925100]
L_skip_erase:
        mov edx, dword ptr [mem_00924EC4]
        mov eax, dword ptr [edx]
        push eax
        push eax
        push 0x940614
        lea ecx, [esp + 0x4c]
        call dword ptr [mem_00925050]
        add eax, esi
        mov esi, dword ptr [esp + 0x40]
        push eax
        push esi
        lea ecx, [esp + 0x4c]
        call dword ptr [mem_00925120]
        or ebx, 2
        lea ecx, [esp + 0x40]
        mov dword ptr [esp + 0xc], ebx
        mov byte ptr [esp + 0x34], 0
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x2c]
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x30
        ret
    }
}

// [0x00662610] sub_00662610 (51 bytes)
extern "C" void ext_00662440();
extern "C" void ext_006624F0();
extern "C" __declspec(naked) void* __cdecl fn_00662610(void* a1, void* a2) {
    __asm {
        push ecx
        mov ecx, dword ptr [esp + 0xc]
        push esi
        sub esp, 0x1c
        mov eax, esp
        mov dword ptr [esp + 0x20], 0x0
        mov dword ptr [esp + 0x20], esp
        push ecx
        push eax
        call ext_00662440
        mov esi, dword ptr [esp + 0x30]
        add esp, 0x8
        push esi
        call ext_006624F0
        add esp, 0x20
        mov eax, esi
        pop esi
        pop ecx
        ret
    }
}

// [0x0066AD10] sub_0066AD10 (33 bytes)
extern "C" void ext_00662610();

extern "C" __declspec(naked) void* __fastcall fn_0066AD10(void* self) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0Ch]
        push esi
        mov esi, dword ptr [esp + 0Ch]
        push eax
        push esi
        mov dword ptr [esp + 0Ch], 0
        call ext_00662610
        add esp, 8
        mov eax, esi
        pop esi
        pop ecx
        ret
    }
}

// [0x00666D80] sub_00666D80 (95 bytes)
extern "C" void ext_006A6C87();
extern "C" int mem_00B594A0;
extern "C" int mem_00B59484;

extern "C" __declspec(naked) void __fastcall fn_00666D80(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8b2f7e
        push eax
        mov eax, 1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B594A0], al
        jne skip_init
        or dword ptr [mem_00B594A0], eax
        push 0xa9fbb8
        push offset mem_00B59484
        mov dword ptr [esp + 0x10], 0x0
        call ext_00662610
        push 0x921640
        call ext_006A6C87
        add esp, 0xc
    skip_init:
        mov ecx, dword ptr [esp]
        mov eax, offset mem_00B59484
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x0066AC90] sub_0066AC90 (115 bytes)
extern "C" void ext_006624F0();
extern "C" int mem_00924FE0;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __cdecl fn_0066AC90() {
    __asm {
        push -1
        push 008b3343h
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        sub esp, 8
        push esi
        mov dword ptr [esp + 4], 0
        sub esp, 1Ch
        lea eax, [esp + 3Ch]
        mov ecx, esp
        mov dword ptr [esp + 24h], esp
        push eax
        mov dword ptr [esp + 34h], 1
        call dword ptr [mem_00924FE0]
        mov esi, dword ptr [esp + 38h]
        push esi
        call ext_006624F0
        add esp, 20h
        lea ecx, [esp + 20h]
        mov dword ptr [esp + 4], 1
        mov byte ptr [esp + 14h], 0
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0Ch]
        mov eax, esi
        mov fs:[0], ecx
        pop esi
        add esp, 14h
        ret
    }
}

// [0x00664560] sub_00664560 (281 bytes)
extern "C" int mem_00924EA8;
extern "C" int mem_00925030;
extern "C" int mem_00925034;
extern "C" int mem_00924EC4;
extern "C" int mem_00925120;
extern "C" int mem_00924FDC;
extern "C" int mem_00924FF4;
extern "C" __declspec(naked) void __cdecl fn_00664560() {
    __asm {
        mov eax, fs:[0]
        mov ecx, [esp+0x10]
        push -1
        push 0x8b2d0b
        push eax
        mov fs:[0], esp
        sub esp, 0x38
        push ebx
        push ebp
        push esi
        push edi
        call [mem_00924EA8]
        mov ebx, [esp+0x5c]
        mov esi, [esp+0x58]
        push 0
        push ebx
        mov ecx, esi
        call [mem_00925030]
        push 0
        push ebx
        mov ecx, esi
        mov ebp, eax
        call [mem_00925034]
        mov edi, eax
        mov eax, [mem_00924EC4]
        cmp edi, [eax]
        je L1
        push edi
        push ebp
        lea eax, [esp+0x18]
        push eax
        mov ecx, esi
        call [mem_00925120]
        mov ecx, [esp+0x60]
        push eax
        mov dword ptr [esp+0x54], 0
        call [mem_00924FDC]
        or ebp, -1
        lea ecx, [esp+0x10]
        mov [esp+0x50], ebp
        call [mem_00924FF4]
        push edi
        push ebx
        mov ecx, esi
        call [mem_00925030]
        mov ecx, [mem_00924EC4]
        cmp eax, [ecx]
        je L3
        mov ecx, [ecx]
        push ecx
        push edi
        push ebx
        mov ecx, esi
        call [mem_00925030]
        push eax
        lea edx, [esp+0x18]
        push edx
        mov ecx, esi
        call [mem_00925120]
        mov ecx, [esp+0x64]
        push eax
        mov dword ptr [esp+0x54], 1
        call [mem_00924FDC]
        mov [esp+0x50], ebp
        lea ecx, [esp+0x10]
        jmp L2
    L1:
        mov eax, [eax]
        push eax
        push ebp
        lea ecx, [esp+0x34]
        push ecx
        mov ecx, esi
        call [mem_00925120]
        mov ecx, [esp+0x60]
        push eax
        mov dword ptr [esp+0x54], 2
        call [mem_00924FDC]
        mov dword ptr [esp+0x50], 0xffffffff
        lea ecx, [esp+0x2c]
    L2:
        call [mem_00924FF4]
    L3:
        mov ecx, [esp+0x48]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov fs:[0], ecx
        add esp, 0x44
        ret
    }
}

// [0x00662880] sub_00662880 (289 bytes)
extern "C" int mem_00924EC4;
extern "C" int mem_00924EC8;
extern "C" int mem_00925120;
extern "C" int mem_00925134;
extern "C" int mem_00924FC4;
extern "C" int mem_009251E0;
extern "C" int mem_00924ECC;
extern "C" int mem_00924FDC;
extern "C" int mem_00924FF4;
extern "C" __declspec(naked) void __cdecl fn_00662880(void* a1, void* a2) {
    __asm {
        push -1
        push 0x8b29e2
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x5c
        mov eax, dword ptr [mem_00924EC4]
        mov ecx, dword ptr [eax]
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 0x78]
        push esi
        push edi
        push ecx
        push 0x92e3bc
        mov ecx, ebp
        call dword ptr [mem_00924EC8]
        add eax, 1
        push eax
        xor ebx, ebx
        push ebx
        lea edx, [esp + 0x1c]
        push edx
        mov ecx, ebp
        call dword ptr [mem_00925120]
        mov dword ptr [esp + 0x74], ebx
        _emit 0x8d
        _emit 0x49
        _emit 0x00
L_outer:
        mov esi, dword ptr [esp + 0x7c]
        mov eax, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], eax
        mov dword ptr [esp + 0x10], eax
        jbe L_c1
        call dword ptr [mem_00925134]
L_c1:
        mov edi, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], edi
        jbe L_c2
        call dword ptr [mem_00925134]
L_c2:
        mov esi, dword ptr [esi + 0x4]
        mov eax, dword ptr [esp + 0x7c]
        cmp esi, dword ptr [eax + 0x8]
        jbe L_c3
        call dword ptr [mem_00925134]
L_c3:
        cmp esi, edi
        je L_found
        _emit 0x8d
        _emit 0x9b
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
L_loop:
        push ebp
        push esi
        call dword ptr [mem_00924FC4]
        add esp, 0x8
        test al, al
        jne L_found
        add esi, 0x1c
        cmp esi, edi
        jne L_loop
L_found:
        cmp esi, dword ptr [esp + 0x10]
        je L_exit
        add ebx, 0x1
        push ebx
        push 0x92e3b4
        lea ecx, [esp + 0x54]
        push 0x1e
        push ecx
        call dword ptr [mem_009251E0]
        lea edx, [esp + 0x5c]
        push edx
        lea eax, [esp + 0x28]
        push eax
        lea ecx, [esp + 0x48]
        push ecx
        call dword ptr [mem_00924ECC]
        add esp, 0x1c
        push eax
        mov ecx, ebp
        mov byte ptr [esp + 0x78], 0x1
        call dword ptr [mem_00924FDC]
        lea ecx, [esp + 0x30]
        mov byte ptr [esp + 0x74], 0x0
        call dword ptr [mem_00924FF4]
        jmp L_outer
L_exit:
        lea ecx, [esp + 0x14]
        mov dword ptr [esp + 0x74], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x6c]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 0x68
        ret
    }
}

// [0x00662D00] sub_00662D00 (323 bytes)
// std::string fn(const void* arg2, const std::string& s): hidden return slot is the first stack arg (cdecl ret 0).
// If s is absolute (drive "X:" or UNC "\\\\"), result = s; otherwise result = fn_00662B70(arg2) + s.
extern "C" int mem_00924FE8;
extern "C" int mem_00924EAC;
extern "C" int mem_00924FFC;
extern "C" int mem_00925120;
extern "C" int mem_00924FC0;
extern "C" int mem_00924FF4;
extern "C" int mem_00924FDC;
extern "C" int mem_00924FD0;
extern "C" void ext_00662B70();

extern "C" __declspec(naked) void* __cdecl fn_00662D00(void) {
    __asm {
        push -1
        push 0x8b2a36
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x40
        push ebx
        push ebp
        push esi
        xor ebp, ebp
        push edi
        mov dword ptr [esp + 0x14], ebp
        mov edi, dword ptr [esp + 0x60]
        mov ecx, edi
        mov dword ptr [esp + 0x58], ebp
        call dword ptr [mem_00924FE8]
        mov esi, dword ptr [esp + 0x68]
        mov ebx, 0x1
        mov ecx, esi
        mov dword ptr [esp + 0x58], ebp
        mov dword ptr [esp + 0x14], ebx
        call dword ptr [mem_00924EAC]
        cmp eax, 0x2
        jb short sub_substr
        push ebx
        mov ecx, esi
        call dword ptr [mem_00924FFC]
        cmp byte ptr [eax], 0x3a
        je short set_flag
sub_substr:
        push 0x2
        push ebp
        lea eax, [esp + 0x20]
        push eax
        mov ecx, esi
        call dword ptr [mem_00925120]
        push 0x9877ac
        mov ebx, 0x3
        push eax
        mov dword ptr [esp + 0x60], 0x1
        mov dword ptr [esp + 0x1c], ebx
        call dword ptr [mem_00924FC0]
        add esp, 0x8
        test al, al
        mov byte ptr [esp + 0x13], 0x0
        je short after_flag
set_flag:
        mov byte ptr [esp + 0x13], 0x1
after_flag:
        test bl, 0x2
        mov dword ptr [esp + 0x58], ebp
        je short no_dtor
        and ebx, -0x3
        lea ecx, [esp + 0x18]
        mov dword ptr [esp + 0x14], ebx
        call dword ptr [mem_00924FF4]
no_dtor:
        cmp byte ptr [esp + 0x13], 0x0
        je short else_branch
        push esi
        mov ecx, edi
        call dword ptr [mem_00924FDC]
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov ecx, dword ptr [esp + 0x40]
        mov dword ptr fs:[0x0], ecx
        add esp, 0x4c
        ret
else_branch:
        mov ecx, dword ptr [esp + 0x64]
        push ecx
        lea edx, [esp + 0x38]
        push edx
        call ext_00662B70
        push esi
        push eax
        lea eax, [esp + 0x28]
        push eax
        mov dword ptr [esp + 0x6c], 0x2
        call dword ptr [mem_00924FD0]
        add esp, 0x14
        push eax
        mov ecx, edi
        mov byte ptr [esp + 0x5c], 0x3
        call dword ptr [mem_00924FDC]
        lea ecx, [esp + 0x18]
        mov byte ptr [esp + 0x58], 0x2
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x34]
        mov byte ptr [esp + 0x58], 0x0
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x50]
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0x4c
        ret
    }
}

extern "C" void ext_0065F940();
extern "C" void ext_006602F0();
extern "C" void ext_006A6E9E();
extern "C" int mem_00925134;
extern "C" int mem_00A9FB0C;
extern "C" int mem_00924FC0;
extern "C" int mem_00A9FB08;
extern "C" int mem_00A2E2D8;
extern "C" int mem_00A2E2F8;

// [0x00660340] sub_00660340 (410 bytes)
extern "C" __declspec(naked) void __fastcall fn_00660340(void* self) {
    __asm {
        push ebx
        push esi
        push edi
        mov edi, dword ptr [esp + 0x10]
        xor ebx, ebx
        cmp edi, ebx
        mov esi, ecx
        jne L_00660357
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        ret 0x8
    L_00660357:
        mov eax, dword ptr [esi + 0x20]
        cmp eax, ebx
        jne L_00660364
        mov dword ptr [esp + 0x10], ebx
        jmp L_00660380
    L_00660364:
        mov ecx, dword ptr [esi + 0x24]
        sub ecx, eax
        mov eax, 0x92492493
        imul ecx
        add edx, ecx
        sar edx, 0x4
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        mov dword ptr [esp + 0x10], eax
    L_00660380:
        cmp byte ptr [esp + 0x14], bl
        je L_0066038B
        sub dword ptr [esp + 0x10], 0x1
    L_0066038B:
        cmp dword ptr [esp + 0x10], ebx
        push ebp
        mov dword ptr [esi + 0x2c], ebx
        jle L_006604C1
        _emit 0x8d
        _emit 0xa4
        _emit 0x24
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
    L_006603A0:
        mov eax, dword ptr [esi + 0x20]
        test eax, eax
        mov ebx, dword ptr [esi + 0x2c]
        je L_006603C6
        mov ecx, dword ptr [esi + 0x24]
        sub ecx, eax
        mov eax, 0x92492493
        imul ecx
        add edx, ecx
        sar edx, 0x4
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        cmp ebx, eax
        jb L_006603CC
    L_006603C6:
        call dword ptr [mem_00925134]
    L_006603CC:
        mov ecx, dword ptr [esi + 0x20]
        _emit 0x8d
        _emit 0x04
        _emit 0xdd
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        sub eax, ebx
        lea edx, dword ptr [ecx + eax*4]
        lea eax, dword ptr [esp + 0x18]
        push eax
        push edi
        mov ecx, esi
        mov dword ptr [esp + 0x20], edx
        call ext_006602F0
        test al, al
        jne L_00660414
        mov edx, dword ptr [esi + 0x34]
        lea ecx, dword ptr [esp + 0x18]
        push ecx
        push edx
        mov ecx, esi
        call ext_006602F0
        test al, al
        jne L_00660414
        mov ecx, dword ptr [esi + 0x38]
        lea eax, dword ptr [esp + 0x18]
        push eax
        push ecx
        mov ecx, esi
        call ext_006602F0
    L_00660414:
        cmp dword ptr [esi + 0x2c], 0x0
        mov ebp, dword ptr [esp + 0x18]
        jne L_0066046F
        mov edx, dword ptr [edi]
        mov eax, dword ptr [edx + 0x10]
        push 0x1
        mov ecx, edi
        call eax
        test eax, eax
        je L_0066046F
        mov ecx, dword ptr [mem_00A9FB0C]
        push ecx
        push ebp
        call dword ptr [mem_00924FC0]
        add esp, 0x8
        test al, al
        je L_0066046F
        mov edx, dword ptr [edi]
        mov eax, dword ptr [edx + 0x10]
        push 0x1
        mov ecx, edi
        call eax
        test eax, eax
        je L_006604B0
    L_00660451:
        mov edx, dword ptr [edi]
        mov eax, dword ptr [edx + 0x10]
        push 0x1
        mov ecx, edi
        call eax
        mov edi, eax
        mov edx, dword ptr [edi]
        mov eax, dword ptr [edx + 0x10]
        push 0x1
        mov ecx, edi
        call eax
        test eax, eax
        jne L_00660451
        jmp L_006604B0
    L_0066046F:
        push 0x0
        push offset mem_00A2E2D8
        push offset mem_00A2E2F8
        push 0x0
        push edi
        call ext_006A6E9E
        mov ebx, eax
        add esp, 0x14
        test ebx, ebx
        je L_006604A1
        mov ecx, dword ptr [mem_00A9FB08]
        push ecx
        push ebp
        call dword ptr [mem_00924FC0]
        add esp, 0x8
        test al, al
        jne L_006604CA
    L_006604A1:
        push ebp
        push edi
        mov ecx, esi
        call ext_0065F940
        mov edi, eax
        test edi, edi
        je L_006604D1
    L_006604B0:
        mov edx, dword ptr [esp + 0x14]
        add dword ptr [esi + 0x2c], 0x1
        cmp dword ptr [esi + 0x2c], edx
        jl L_006603A0
    L_006604C1:
        pop ebp
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 0x8
    L_006604CA:
        add dword ptr [esi + 0x2c], 0x1
        mov dword ptr [esi + 0x50], ebx
    L_006604D1:
        pop ebp
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        ret 0x8
    }
}

// [0x006606C0] sub_006606C0 (75 bytes)
extern "C" void ext_00660340();
extern "C" __declspec(naked) void __fastcall fn_006606C0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x30]
        xor eax, eax
        test ecx, ecx
        je L_second
        movzx eax, byte ptr [esi + 0x3c]
        push eax
        push ecx
        mov ecx, esi
        call ext_00660340
        test eax, eax
        jne L_done
    L_second:
        mov ecx, dword ptr [esi + 0x34]
        test ecx, ecx
        je L_third
        movzx edx, byte ptr [esi + 0x3c]
        push edx
        push ecx
        mov ecx, esi
        call ext_00660340
        test eax, eax
        jne L_done
    L_third:
        mov ecx, dword ptr [esi + 0x38]
        test ecx, ecx
        je L_done
        movzx eax, byte ptr [esi + 0x3c]
        push eax
        push ecx
        mov ecx, esi
        call ext_00660340
    L_done:
        pop esi
        ret
    }
}

// [0x00662650] sub_00662650 (440 bytes)
extern "C" void ext_00404F00();
extern "C" int mem_00924FCC;
extern "C" int mem_00924ECC;
extern "C" int mem_00924FF4;
extern "C" int mem_00924FF0;
extern "C" int mem_00925218;
extern "C" int mem_00924FDC;
extern "C" int mem_00924EAC;
extern "C" int mem_0092500C;
extern "C" int mem_00924EC0;
extern "C" int mem_00924FE0;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FD0;
extern "C" int mem_00924FD8;

extern "C" __declspec(naked) void __fastcall fn_00662650(void* self) {
    __asm {
        push    -1
        push    0x8b29bc
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x190
        xor     eax, eax
        push    ebx
        mov     dword ptr [esp + 0x19c], eax
        mov     dword ptr [esp + 0x4], eax
        mov     eax, dword ptr [esp + 0x1b4]
        cmp     eax, 0xff
        push    esi
        push    edi
        mov     ebx, 1
        jle     loc_662695
        mov     eax, 0xff
        jmp     loc_66269b
    loc_662695:
        cmp     eax, ebx
        jge     loc_66269b
        mov     eax, ebx
    loc_66269b:
        push    eax
        lea     eax, [esp + 0x4c]
        push    eax
        call    ext_00404F00
        push    eax
        lea     ecx, [esp + 0x8c]
        push    0x9877a8
        push    ecx
        mov     dword ptr [esp + 0x1b8], ebx
        call    dword ptr [mem_00924FCC]
        mov     esi, dword ptr [esp + 0x1c0]
        push    0x9877a4
        push    eax
        push    esi
        mov     byte ptr [esp + 0x1c4], 2
        call    dword ptr [mem_00924ECC]
        add     esp, 0x20
        lea     ecx, [esp + 0x80]
        mov     dword ptr [esp + 0xc], ebx
        mov     byte ptr [esp + 0x1a4], bl
        call    dword ptr [mem_00924FF4]
        lea     ecx, [esp + 0x48]
        mov     byte ptr [esp + 0x1a4], 0
        call    dword ptr [mem_00924FF4]
        mov     edx, dword ptr [esp + 0x1b8]
        push    edx
        mov     ecx, esi
        call    dword ptr [mem_00924FF0]
        push    eax
        lea     eax, [esp + 0xa4]
        push    eax
        call    dword ptr [mem_00925218]
        mov     ecx, dword ptr [esp + 0x1bc]
        add     esp, 0xc
        push    ecx
        mov     ecx, esi
        call    dword ptr [mem_00924FDC]
        mov     ecx, esi
        call    dword ptr [mem_00924EAC]
        sub     eax, ebx
        push    eax
        mov     ecx, esi
        call    dword ptr [mem_0092500C]
        cmp     byte ptr [eax], 0x5c
        je      loc_66275e
        push    0x5c
        mov     ecx, esi
        call    dword ptr [mem_00924EC0]
    loc_66275e:
        mov     edx, dword ptr [esp + 0x1b4]
        push    edx
        lea     ecx, [esp + 0x68]
        call    dword ptr [mem_00924FE0]
        mov     edi, eax
        lea     eax, [esp + 0x9c]
        push    eax
        lea     ecx, [esp + 0x30]
        mov     dword ptr [esp + 0x1a8], 3
        call    dword ptr [mem_00924FE4]
        push    edi
        push    eax
        lea     ecx, [esp + 0x18]
        mov     bl, 4
        push    ecx
        mov     byte ptr [esp + 0x1b0], bl
        call    dword ptr [mem_00924FD0]
        add     esp, 0xc
        push    eax
        mov     ecx, esi
        mov     byte ptr [esp + 0x1a8], 5
        call    dword ptr [mem_00924FD8]
        lea     ecx, [esp + 0x10]
        mov     byte ptr [esp + 0x1a4], bl
        call    dword ptr [mem_00924FF4]
        lea     ecx, [esp + 0x2c]
        mov     byte ptr [esp + 0x1a4], 3
        call    dword ptr [mem_00924FF4]
        lea     ecx, [esp + 0x64]
        mov     byte ptr [esp + 0x1a4], 0
        call    dword ptr [mem_00924FF4]
        mov     ecx, dword ptr [esp + 0x19c]
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        mov     dword ptr fs:[0], ecx
        add     esp, 0x19c
        ret
    }
}

// [0x0066A550] sub_0066A550 (461 bytes)
extern "C" void __cdecl ext_0046C0A0(void* dst, int* src);
extern "C" int __fastcall ext_0063EFE0(void* self, int edx_unused, int a);
extern "C" int __fastcall ext_0063F530(void* self, int edx_unused, int a, int b, int c);
extern "C" int mem_00A9F1DC;
extern "C" int mem_00A9EF54;
extern "C" int mem_00A9ED48;
extern "C" int mem_00A9F14C;

extern "C" __declspec(naked) void __fastcall fn_0066A550(void* self) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        mov eax, dword ptr [esi + 0x28]
        test eax, eax
        push edi
        mov edi, ecx
        je L_empty
        mov ecx, dword ptr [esi + 0x2c]
        sub ecx, eax
        sar ecx, 0x2
        je L_empty

        mov edx, dword ptr [mem_00A9F1DC]
        push 1
        push 0
        push edx
        mov ecx, esi
        call ext_0063F530
        cmp eax, 0xB53A34
        je B0_set
        cmp eax, 0xB53B30
        je B0_set
        cmp eax, 0xB53AB0
        je B0_set
        cmp eax, 0xB53A70
        je B0_set
        cmp eax, 0xB53AF0
        jne B0_skip
    B0_set:
        mov eax, 0xB53B30
    B0_skip:
        mov dword ptr [esp + 0xc], eax
        lea eax, dword ptr [esp + 0xc]
        push eax
        push edi
        call ext_0046C0A0
        mov ecx, dword ptr [mem_00A9EF54]
        add esp, 0x8

        push 1
        push 0
        push ecx
        mov ecx, esi
        call ext_0063F530
        cmp eax, 0xB53A34
        je B1_set
        cmp eax, 0xB53B30
        je B1_set
        cmp eax, 0xB53AB0
        je B1_set
        cmp eax, 0xB53A70
        je B1_set
        cmp eax, 0xB53AF0
        jne B1_skip
    B1_set:
        mov eax, 0xB53B30
    B1_skip:
        lea edx, dword ptr [esp + 0xc]
        mov dword ptr [esp + 0xc], eax
        push edx
        lea eax, dword ptr [edi + 0x4]
        push eax
        call ext_0046C0A0
        mov ecx, dword ptr [mem_00A9ED48]
        add esp, 0x8

        push 1
        push 0
        push ecx
        mov ecx, esi
        call ext_0063F530
        cmp eax, 0xB53A34
        je B2_set
        cmp eax, 0xB53B30
        je B2_set
        cmp eax, 0xB53AB0
        je B2_set
        cmp eax, 0xB53A70
        je B2_set
        cmp eax, 0xB53AF0
        jne B2_skip
    B2_set:
        mov eax, 0xB53B30
    B2_skip:
        lea edx, dword ptr [esp + 0xc]
        mov dword ptr [esp + 0xc], eax
        push edx
        lea eax, dword ptr [edi + 0x8]
        push eax
        call ext_0046C0A0
        mov ecx, dword ptr [mem_00A9F14C]
        add esp, 0x8

        push 1
        push 0
        push ecx
        mov ecx, esi
        call ext_0063F530
        cmp eax, 0xB53A34
        je B3_set
        cmp eax, 0xB53B30
        je B3_set
        cmp eax, 0xB53AB0
        je B3_set
        cmp eax, 0xB53A70
        je B3_set
        cmp eax, 0xB53AF0
        jne L_tail
    B3_set:
        mov eax, 0xB53B30
        jmp L_tail

    L_empty:
        push 0x9366D4
        mov ecx, esi
        call ext_0063EFE0
        mov dword ptr [esp + 0xc], eax
        lea eax, dword ptr [esp + 0xc]
        push eax
        push edi
        call ext_0046C0A0
        add esp, 0x8
        push 0x958CD0
        mov ecx, esi
        call ext_0063EFE0
        lea ecx, dword ptr [esp + 0xc]
        push ecx
        lea edx, dword ptr [edi + 0x4]
        push edx
        mov dword ptr [esp + 0x14], eax
        call ext_0046C0A0
        add esp, 0x8
        push 0x987B40
        mov ecx, esi
        call ext_0063EFE0
        mov dword ptr [esp + 0xc], eax
        lea eax, dword ptr [esp + 0xc]
        push eax
        lea ecx, dword ptr [edi + 0x8]
        push ecx
        call ext_0046C0A0
        add esp, 0x8
        push 0x987B38
        mov ecx, esi
        call ext_0063EFE0

    L_tail:
        lea edx, dword ptr [esp + 0xc]
        push edx
        add edi, 0xc
        push edi
        mov dword ptr [esp + 0x14], eax
        call ext_0046C0A0
        add esp, 0x8
        pop edi
        pop esi
        ret 0x4
    }
}

// [0x00663690] sub_00663690 (203 bytes)
extern "C" void ext_00435D00();
extern "C" int mem_009252F0;
extern "C" int mem_00924E90;
extern "C" int mem_00924FA0;
extern "C" int mem_00924E98;
extern "C" int mem_009252EC;
extern "C" int mem_00924FD4;
extern "C" int mem_00924ED0;

extern "C" __declspec(naked) void __cdecl fn_00663690() {
    __asm {
        sub esp, 0x408
        push esi
        mov esi, dword ptr [esp + 0x410]
        push 0x104
        lea eax, [esp + 0x10c]
        push esi
        push eax
        call dword ptr [mem_009252F0]
        add esp, 0xc
        test eax, eax
        jne L_006636EE
        mov ecx, dword ptr [mem_00924E90]
        mov edx, dword ptr [mem_00924FA0]
        push ecx
        push esi
        push 0x9877F8
        push edx
        call ext_00435D00
        add esp, 0x8
        push eax
        call ext_00435D00
        add esp, 0x8
        mov ecx, eax
        call dword ptr [mem_00924E98]
        pop esi
        add esp, 0x408
        ret
    L_006636EE:
        lea eax, [esp + 0x30c]
        push eax
        lea ecx, [esp + 0xc]
        push ecx
        lea edx, [esp + 0x214]
        push edx
        lea eax, [esp + 0x10]
        push eax
        lea ecx, [esp + 0x118]
        push ecx
        call dword ptr [mem_009252EC]
        mov esi, dword ptr [esp + 0x428]
        add esp, 0x14
        lea edx, [esp + 0x4]
        push edx
        mov ecx, esi
        call dword ptr [mem_00924FD4]
        lea eax, [esp + 0x20c]
        push eax
        mov ecx, esi
        call dword ptr [mem_00924ED0]
        mov ecx, dword ptr [esp + 0x418]
        test ecx, ecx
        je L_00663753
        lea edx, [esp + 0x8]
        push edx
        call dword ptr [mem_00924FD4]
    L_00663753:
        pop esi
        add esp, 0x408
        ret
    }
}

// [0x00663880] sub_00663880 (133 bytes)
extern "C" void ext_00662C30();
extern "C" void ext_00663690();
extern "C" int mem_00924FE8;
extern "C" int mem_00924FF0;
extern "C" int mem_00924FF4;
extern "C" __declspec(naked) void* __fastcall fn_00663880(void* self) {
    __asm {
        push -1
        push 0x88afd3
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x20
        push esi
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x4], 0
        call dword ptr [mem_00924FE8]
        mov ecx, dword ptr [esp + 0x38]
        push 0
        lea eax, [esp + 0xc]
        push eax
        mov dword ptr [esp + 0x34], 1
        call dword ptr [mem_00924FF0]
        push eax
        call ext_00663690
        mov esi, dword ptr [esp + 0x40]
        lea ecx, [esp + 0x14]
        push ecx
        push esi
        call ext_00662C30
        add esp, 0x14
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x4], 1
        mov byte ptr [esp + 0x2c], 0
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x24]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x2c
        ret
    }
}

extern "C" void ext_00435D00();
extern "C" int mem_009252F0;
extern "C" int mem_00924E90;
extern "C" int mem_00924FA0;
extern "C" int mem_00924E94;
extern "C" int mem_00924E98;
extern "C" int mem_009252EC;
extern "C" int mem_00924FD4;
extern "C" int mem_0092500C;
extern "C" int mem_00925100;

// [0x00663580] sub_00663580 (262 bytes)
extern "C" __declspec(naked) void __fastcall fn_00663580(void* self) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        sub esp, 0x408
        push 0x104
        push eax
        lea ecx, [esp + 0x30c]
        push ecx
        call dword ptr [mem_009252F0]
        add esp, 0xc
        test eax, eax
        jne short L_006635E1
        mov edx, dword ptr [mem_00924E90]
        mov eax, dword ptr [esp + 0x418]
        mov ecx, dword ptr [mem_00924FA0]
        push edx
        push eax
        push 0x9877f8
        push ecx
        call ext_00435D00
        add esp, 0x8
        push eax
        call dword ptr [mem_00924E94]
        add esp, 0x8
        mov ecx, eax
        call dword ptr [mem_00924E98]
        add esp, 0x408
        ret
    L_006635E1:
        push esi
        lea edx, [esp + 0x108]
        push edx
        lea eax, [esp + 0xc]
        push eax
        lea ecx, [esp + 0x210]
        push ecx
        lea edx, [esp + 0x10]
        push edx
        lea eax, [esp + 0x318]
        push eax
        call dword ptr [mem_009252EC]
        add esp, 0x14
        lea ecx, [esp + 0x4]
        push ecx
        mov ecx, dword ptr [esp + 0x418]
        call dword ptr [mem_00924FD4]
        mov ecx, dword ptr [esp + 0x418]
        lea edx, [esp + 0x208]
        push edx
        call dword ptr [mem_00924FD4]
        mov ecx, dword ptr [esp + 0x41c]
        lea eax, [esp + 0x8]
        push eax
        call dword ptr [mem_00924FD4]
        mov esi, dword ptr [esp + 0x420]
        lea ecx, [esp + 0x108]
        push ecx
        mov ecx, esi
        call dword ptr [mem_00924FD4]
        cmp dword ptr [esi + 0x14], 0
        je short L_0066367E
        push 0
        mov ecx, esi
        call dword ptr [mem_0092500C]
        cmp byte ptr [eax], 0x2e
        jne short L_0066367E
        push 1
        push 0
        mov ecx, esi
        call dword ptr [mem_00925100]
    L_0066367E:
        pop esi
        add esp, 0x408
        ret
    }
}

// [0x00663B30] sub_00663B30 (195 bytes)
extern "C" void ext_00663580();
extern "C" void ext_008B2BD5();
extern "C" int mem_00924FE8;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00663B30(void* self) {
    __asm {
        push -0x1
        push offset ext_008B2BD5
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x58
        xor eax, eax
        push esi
        lea ecx, [esp + 0x40]
        mov dword ptr [esp + 0x64], eax
        mov dword ptr [esp + 0x4], eax
        call dword ptr [mem_00924FE8]
        lea ecx, [esp + 0x24]
        mov dword ptr [esp + 0x64], 0x1
        call dword ptr [mem_00924FE8]
        mov esi, dword ptr [esp + 0x6c]
        mov ecx, esi
        mov byte ptr [esp + 0x64], 0x2
        call dword ptr [mem_00924FE8]
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x4], 0x1
        call dword ptr [mem_00924FE8]
        lea eax, [esp + 0x8]
        push eax
        mov eax, dword ptr [esp + 0x74]
        push esi
        lea ecx, [esp + 0x2c]
        push ecx
        lea edx, [esp + 0x4c]
        push edx
        push eax
        mov byte ptr [esp + 0x78], 0x3
        call ext_00663580
        add esp, 0x14
        lea ecx, [esp + 0x8]
        mov byte ptr [esp + 0x64], 0x2
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x24]
        mov byte ptr [esp + 0x64], 0x1
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x40]
        mov byte ptr [esp + 0x64], 0x0
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x5c]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x64
        ret
    }
}

// [0x00663C00] sub_00663C00 (195 bytes)
extern "C" void ext_00663580();
extern "C" void ext_008B4D95();
extern "C" int mem_00924FE8;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00663C00(void* self) {
    __asm {
        push -0x1
        push offset ext_008B4D95
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x58
        xor eax, eax
        push esi
        lea ecx, [esp + 0x40]
        mov dword ptr [esp + 0x64], eax
        mov dword ptr [esp + 0x4], eax
        call dword ptr [mem_00924FE8]
        lea ecx, [esp + 0x24]
        mov dword ptr [esp + 0x64], 0x1
        call dword ptr [mem_00924FE8]
        lea ecx, [esp + 0x8]
        mov byte ptr [esp + 0x64], 0x2
        call dword ptr [mem_00924FE8]
        mov esi, dword ptr [esp + 0x6c]
        mov ecx, esi
        mov byte ptr [esp + 0x64], 0x3
        call dword ptr [mem_00924FE8]
        push esi
        lea eax, [esp + 0xc]
        push eax
        mov eax, dword ptr [esp + 0x78]
        lea ecx, [esp + 0x2c]
        push ecx
        lea edx, [esp + 0x4c]
        push edx
        push eax
        mov dword ptr [esp + 0x18], 0x1
        call ext_00663580
        add esp, 0x14
        lea ecx, [esp + 0x8]
        mov byte ptr [esp + 0x64], 0x2
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x24]
        mov byte ptr [esp + 0x64], 0x1
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x40]
        mov byte ptr [esp + 0x64], 0x0
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x5c]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x64
        ret
    }
}

// [0x00663760] sub_00663760 (282 bytes)
extern "C" void ext_00435D00();
extern "C" void ext_00662E50();
extern "C" void ext_008B2B1C();
extern "C" int mem_00924E90;
extern "C" int mem_00924E94;
extern "C" int mem_00924E98;
extern "C" int mem_00924FA0;
extern "C" int mem_00924FD4;
extern "C" int mem_00924FE0;
extern "C" int mem_00924FE8;
extern "C" int mem_00924FF0;
extern "C" int mem_00924FF4;
extern "C" int mem_009252F0;

extern "C" __declspec(naked) void __fastcall fn_00663760(void* self) {
    __asm {
        push -0x1
        push offset ext_008B2B1C
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x124
        push esi
        mov esi, dword ptr [esp + 0x13c]
        push esi
        mov dword ptr [esp + 0x8], 0x0
        call ext_00662E50
        add esp, 0x4
        test al, al
        jne short L_006637C0
        push esi
        mov esi, dword ptr [esp + 0x13c]
        mov ecx, esi
        call dword ptr [mem_00924FE0]
        mov eax, esi
        pop esi
        mov ecx, dword ptr [esp + 0x124]
        mov dword ptr fs:[0x0], ecx
        add esp, 0x130
        ret

    L_006637C0:
        lea ecx, [esp + 0x8]
        call dword ptr [mem_00924FE8]
        push 0x104
        mov ecx, esi
        mov dword ptr [esp + 0x134], 0x1
        call dword ptr [mem_00924FF0]
        push eax
        lea eax, [esp + 0x2c]
        push eax
        call dword ptr [mem_009252F0]
        add esp, 0xc
        test eax, eax
        jne short L_00663825
        mov ecx, dword ptr [mem_00924E90]
        mov edx, dword ptr [mem_00924FA0]
        push ecx
        push esi
        push 0x9877f8
        push edx
        call ext_00435D00
        add esp, 0x8
        push eax
        call dword ptr [mem_00924E94]
        add esp, 0x8
        mov ecx, eax
        call dword ptr [mem_00924E98]
        jmp short L_00663834

    L_00663825:
        lea eax, [esp + 0x24]
        push eax
        lea ecx, [esp + 0xc]
        call dword ptr [mem_00924FD4]

    L_00663834:
        mov esi, dword ptr [esp + 0x138]
        lea ecx, [esp + 0x8]
        push ecx
        mov ecx, esi
        call dword ptr [mem_00924FE0]
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x4], 0x1
        mov byte ptr [esp + 0x130], 0x0
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x128]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x130
        ret
    }
}

// [0x00663CD0] sub_00663CD0 (219 bytes)
extern "C" int mem_00925040;
extern "C" int mem_00924FDC;
extern "C" int mem_00924FF4;
extern "C" int mem_00924FF0;
extern "C" int mem_00925534;
extern "C" void ext_006629B0();
extern "C" void ext_00663760();
extern "C" void ext_008B2BFB();
extern "C" __declspec(naked) void __fastcall fn_00663CD0(void* self) {
    __asm {
        push -0x1
        push offset ext_008B2BFB
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x58
        push ebx
        lea eax, [esp + 0x6c]
        push eax
        lea ecx, [esp + 0x24]
        xor ebx, ebx
        push ecx
        mov dword ptr [esp + 0x6c], ebx
        call ext_00663760
        push ebx
        push eax
        lea edx, [esp + 0x14]
        push edx
        mov byte ptr [esp + 0x78], 0x1
        call dword ptr [mem_00925040]
        add esp, 0x14
        push eax
        lea ecx, [esp + 0x70]
        mov byte ptr [esp + 0x68], 0x2
        call dword ptr [mem_00924FDC]
        lea ecx, [esp + 0x4]
        mov byte ptr [esp + 0x64], 0x1
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x20]
        mov byte ptr [esp + 0x64], bl
        call dword ptr [mem_00924FF4]
        lea eax, [esp + 0x6c]
        push eax
        call ext_006629B0
        add esp, 0x4
        test al, al
        lea ecx, [esp + 0x6c]
        je short L_00663D8D
        mov dword ptr [esp + 0x3c], ebx
        mov dword ptr [esp + 0x40], 0x3
        call dword ptr [mem_00924FF0]
        lea ecx, [esp + 0x3c]
        push ecx
        mov dword ptr [esp + 0x48], eax
        mov dword ptr [esp + 0x4c], ebx
        mov word ptr [esp + 0x50], 0x14
        mov dword ptr [esp + 0x56], ebx
        mov dword ptr [esp + 0x5a], ebx
        call dword ptr [mem_00925534]
        lea ecx, [esp + 0x6c]

    L_00663D8D:
        mov dword ptr [esp + 0x64], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x5c]
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0x64
        ret
    }
}

// [0x006639E0] sub_006639E0 (321 bytes)
extern "C" void ext_00663580();
extern "C" int mem_00924ECC;
extern "C" int mem_00924FD0;
extern "C" __declspec(naked) void __fastcall fn_006639E0(void* self) {
    __asm {
        push -1
        push 08b2b90h
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 090h
        push esi
        lea ecx, [esp + 05ch]
        mov dword ptr [esp + 4], 0
        call dword ptr [mem_00924FE8]
        lea ecx, [esp + 040h]
        mov dword ptr [esp + 09ch], 1
        call dword ptr [mem_00924FE8]
        lea ecx, [esp + 8]
        mov byte ptr [esp + 09ch], 2
        call dword ptr [mem_00924FE8]
        lea ecx, [esp + 024h]
        mov byte ptr [esp + 09ch], 3
        call dword ptr [mem_00924FE8]
        lea eax, [esp + 024h]
        push eax
        lea ecx, [esp + 0ch]
        push ecx
        mov ecx, dword ptr [esp + 0b0h]
        lea edx, [esp + 048h]
        push edx
        lea eax, [esp + 068h]
        push eax
        push ecx
        mov byte ptr [esp + 0b0h], 4
        call ext_00663580
        push 092ab70h
        lea edx, [esp + 020h]
        push edx
        lea eax, [esp + 094h]
        push eax
        call dword ptr [mem_00924ECC]
        mov esi, dword ptr [esp + 0c4h]
        lea ecx, [esp + 044h]
        push ecx
        push eax
        push esi
        mov byte ptr [esp + 0c8h], 5
        call dword ptr [mem_00924FD0]
        add esp, 02ch
        lea ecx, [esp + 078h]
        mov dword ptr [esp + 4], 1
        mov byte ptr [esp + 09ch], 4
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 024h]
        mov byte ptr [esp + 09ch], 3
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 8]
        mov byte ptr [esp + 09ch], 2
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 040h]
        mov byte ptr [esp + 09ch], 1
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 05ch]
        mov byte ptr [esp + 09ch], 0
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 094h]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 09ch
        ret
    }
}

extern "C" void ext_00602EC0();
extern "C" void ext_0063D8F0();
extern "C" __declspec(naked) void __fastcall fn_006301E0(void* self) {
    __asm {
        push -1
        push 0x8a7d28
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov [esp+4], esi
        call ext_00602EC0
        fldz
        lea ecx, [esi+0x2c]
        mov dword ptr [esi], 0x971794
        fst dword ptr [ecx+8]
        fst dword ptr [ecx+4]
        mov dword ptr [esp+0x10], 0
        fst dword ptr [ecx]
        fst dword ptr [ecx+0x14]
        fst dword ptr [ecx+0x10]
        fst dword ptr [ecx+0xc]
        fst dword ptr [ecx+0x20]
        fst dword ptr [ecx+0x1c]
        fst dword ptr [ecx+0x18]
        fst dword ptr [ecx+0x2c]
        fst dword ptr [ecx+0x28]
        fstp dword ptr [ecx+0x24]
        call ext_0063D8F0
        fldz
        lea ecx, [esi+0x90]
        fst dword ptr [ecx+8]
        fst dword ptr [ecx+4]
        fst dword ptr [ecx]
        fst dword ptr [ecx+0x14]
        fst dword ptr [ecx+0x10]
        fst dword ptr [ecx+0xc]
        fst dword ptr [ecx+0x20]
        fst dword ptr [ecx+0x1c]
        fst dword ptr [ecx+0x18]
        fst dword ptr [ecx+0x2c]
        fst dword ptr [ecx+0x28]
        fstp dword ptr [ecx+0x24]
        call ext_0063D8F0
        fldz
        mov byte ptr [esi+0xf4], 1
        mov byte ptr [esi+0xf5], 0
        mov byte ptr [esi+0xf6], 0
        fst dword ptr [esi+0x104]
        fst dword ptr [esi+0x100]
        mov ecx, [esp+8]
        fst dword ptr [esi+0xfc]
        mov eax, esi
        fst dword ptr [esi+0xf8]
        fst dword ptr [esi+0x110]
        fst dword ptr [esi+0x10c]
        fst dword ptr [esi+0x108]
        fst dword ptr [esi+0x11c]
        fst dword ptr [esi+0x118]
        fst dword ptr [esi+0x114]
        fst dword ptr [esi+0x128]
        fst dword ptr [esi+0x124]
        fst dword ptr [esi+0x120]
        fst dword ptr [esi+0x134]
        fst dword ptr [esi+0x130]
        fst dword ptr [esi+0x12c]
        fst dword ptr [esi+0x140]
        fst dword ptr [esi+0x13c]
        fst dword ptr [esi+0x138]
        fst dword ptr [esi+0x14c]
        fst dword ptr [esi+0x148]
        fst dword ptr [esi+0x144]
        fst dword ptr [esi+0x158]
        fst dword ptr [esi+0x154]
        fst dword ptr [esi+0x150]
        fst dword ptr [esi+0x168]
        fst dword ptr [esi+0x164]
        fst dword ptr [esi+0x160]
        fst dword ptr [esi+0x15c]
        fst dword ptr [esi+0x174]
        fst dword ptr [esi+0x170]
        fst dword ptr [esi+0x16c]
        fst dword ptr [esi+0x178]
        fstp dword ptr [esi+0x17c]
        pop esi
        mov fs:[0], ecx
        add esp, 0x10
        ret
    }
}

// [0x00663DB0] sub_00663DB0 (468 bytes)
extern "C" void ext_0066A760();
extern "C" void ext_0066AA70();
extern "C" void ext_0066ABB0();
extern "C" int mem_00924278;

extern "C" __declspec(naked) void __fastcall fn_00663DB0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0]
        push -1
        push 0x8b2c31
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x138
        push esi
        mov esi, dword ptr [esp + 0x14c]
        push 0x104
        lea eax, [esp + 0x3c]
        push esi
        push eax
        call dword ptr [mem_009252F0]
        add esp, 0xc
        test eax, eax
        jne L663E2E
        mov ecx, dword ptr [mem_00924E90]
        mov edx, dword ptr [mem_00924FA0]
        push ecx
        push esi
        push 0x9877f8
        push edx
        call ext_00435D00
        add esp, 0x8
        push eax
        call ext_00435D00
        add esp, 0x8
        mov ecx, eax
        call dword ptr [mem_00924E98]
        pop esi
        mov ecx, dword ptr [esp + 0x138]
        mov dword ptr fs:[0], ecx
        add esp, 0x144
        ret
L663E2E:
        push ebx
        push edi
        lea eax, [esp + 0x40]
        push eax
        lea ecx, [esp + 0x30]
        call ext_0066AA70
        xor ebx, ebx
        mov dword ptr [esp + 0x14c], ebx
        mov dword ptr [esp + 0x10], ebx
        mov dword ptr [esp + 0x14], ebx
        mov dword ptr [esp + 0x18], ebx
        lea ecx, [esp + 0xc]
        push ecx
        push 0x92b4b0
        lea ecx, [esp + 0x34]
        mov byte ptr [esp + 0x154], 0x1
        call ext_0066ABB0
        mov edi, eax
        cmp edi, 0x2
        jbe L663F3B
        mov edx, dword ptr [esp + 0x30]
        cmp byte ptr [esp + edx + 0x3f], 0x5c
        je L663E87
        sub edi, 0x1
L663E87:
        mov eax, dword ptr [esp + 0x10]
        cmp eax, ebx
        je L663E9A
        mov ecx, dword ptr [esp + 0x14]
        sub ecx, eax
        sar ecx, 0x2
        jne L663EA4
L663E9A:
        call dword ptr [mem_00925134]
        mov eax, dword ptr [esp + 0x10]
L663EA4:
        mov edx, dword ptr [eax]
        push edx
        lea ecx, [esp + 0x20]
        call ext_0066AA70
        mov esi, 0x1
        cmp edi, esi
        mov byte ptr [esp + 0x14c], 0x2
        jbe L663F2A
        push ebp
        mov ebp, dword ptr [mem_0092425C]
        jmp L663ED0
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
L663ED0:
        push 0x92b4b0
        lea ecx, [esp + 0x24]
        call ext_0066A980
        mov ecx, dword ptr [esp + 0x14]
        cmp ecx, ebx
        je L663EF3
        mov eax, dword ptr [esp + 0x18]
        sub eax, ecx
        sar eax, 0x2
        cmp esi, eax
        jb L663EFD
L663EF3:
        call dword ptr [mem_00925134]
        mov ecx, dword ptr [esp + 0x14]
L663EFD:
        mov eax, dword ptr [ecx + 4*esi]
        push eax
        lea ecx, [esp + 0x24]
        call ext_0066A980
        mov ecx, dword ptr [esp + 0x20]
        push ecx
        call ebp
        cmp eax, -1
        jne L663F22
        mov edx, dword ptr [esp + 0x20]
        push ebx
        push edx
        call dword ptr [mem_00924278]
L663F22:
        add esi, 0x1
        cmp esi, edi
        jb L663ED0
        pop ebp
L663F2A:
        lea ecx, [esp + 0x1c]
        mov byte ptr [esp + 0x14c], 0x1
        call ext_0066A760
L663F3B:
        mov eax, dword ptr [esp + 0x10]
        cmp eax, ebx
        je L663F4C
        push eax
        call ext_006A5C5C
        add esp, 0x4
L663F4C:
        lea ecx, [esp + 0x2c]
        mov dword ptr [esp + 0x10], ebx
        mov dword ptr [esp + 0x14], ebx
        mov dword ptr [esp + 0x18], ebx
        mov dword ptr [esp + 0x14c], -1
        call ext_0066A760
        mov ecx, dword ptr [esp + 0x144]
        pop edi
        pop ebx
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x144
        ret
    }
}

// [0x00661740] sub_00661740 (245 bytes)
extern "C" void ext_0041CF50();
extern "C" void ext_006616C0();
extern "C" void ext_00661710();
extern "C" void ext_00675660();
extern "C" void ext_00679030();
extern "C" int mem_00B599BC;
extern "C" __declspec(naked) void* __fastcall fn_00661740(void* self, int edx_unused, void* out, void* in) {
    __asm {
        push -1
        push 0x8b28a9
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0ch
        push ebx
        push ebp
        push esi
        xor ebx, ebx
        mov dword ptr [esp + 0ch], ebx
        mov esi, dword ptr [esp + 28h]
        push edi
        mov edi, dword ptr [esp + 30h]
        mov eax, dword ptr [edi + 4ch]
        mov ebp, ecx
        mov dword ptr [esi], ebx
        mov ecx, dword ptr [mem_00B599BC]
        mov dword ptr [esi + 4], ecx
        cmp eax, 384h
        mov dword ptr [esp + 24h], ebx
        mov dword ptr [esp + 10h], 1
        je L_skip1
        mov eax, dword ptr [edi + 4ch]
        push eax
        lea edx, [esp + 18h]
        push edx
        mov ecx, ebp
        call ext_00661710
        push eax
        mov ecx, esi
        mov dword ptr [esp + 28h], 1
        call ext_0041CF50
        mov ecx, dword ptr [esp + 18h]
        cmp ecx, ebx
        mov byte ptr [esp + 24h], bl
        je L_skip1
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 78h]
        lea edx, [esp + 14h]
        push edx
        call eax
    L_skip1:
        mov eax, dword ptr [esi + 4]
        cmp eax, ebx
        je L_call2
        cmp eax, dword ptr [mem_00B599BC]
        jne L_end
    L_call2:
        mov ecx, ebp
        call ext_006616C0
        cmp eax, ebx
        je L_end
        push ebx
        add edi, 10h
        push edi
        push eax
        lea ecx, [esp + 20h]
        push ecx
        call ext_00675660
        mov ecx, eax
        call ext_00679030
        push eax
        mov ecx, esi
        mov dword ptr [esp + 28h], 2
        call ext_0041CF50
        mov ecx, dword ptr [esp + 18h]
        cmp ecx, ebx
        mov byte ptr [esp + 24h], bl
        je L_end
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 78h]
        lea eax, [esp + 14h]
        push eax
        call edx
    L_end:
        mov ecx, dword ptr [esp + 1ch]
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0], ecx
        add esp, 18h
        ret 8
    }
}

// [0x00669F60] sub_00669F60 (530 bytes)
extern "C" int mem_00993828;
extern "C" int mem_009324A4;
extern "C" int mem_0092C510;
extern "C" int mem_00987B30;
extern "C" int mem_00987B28;
extern "C" int mem_00987B20;
extern "C" __declspec(naked) void __fastcall fn_00669F60(void* self, int edx_unused, float* a1, float* a2, float* a3) {
    __asm {
        sub esp, 16
        fld dword ptr [ecx]
        fstp dword ptr [esp + 4]
        fld dword ptr [ecx + 4]
        fstp dword ptr [esp + 12]
        fld dword ptr [ecx + 8]
        fstp dword ptr [esp + 8]
        fld dword ptr [esp + 4]
        fld dword ptr [esp + 12]
        fcom st(1)
        fnstsw ax
        test ah, 41h
        jne L_669f90
        fxch st(1)
        fst dword ptr [esp + 4]
        jmp L_669f96
    L_669f90:
        fst dword ptr [esp + 4]
        fxch st(1)
    L_669f96:
        fld dword ptr [esp + 4]
        fld dword ptr [esp + 8]
        fcom st(1)
        fnstsw ax
        fstp st(1)
        test ah, 41h
        jne L_669fc4
        fxch st(1)
        fcom st(2)
        fnstsw ax
        test ah, 5
        jp L_669fba
        fst dword ptr [esp + 4]
        jmp L_669fca
    L_669fba:
        fxch st(2)
        fst dword ptr [esp + 4]
        fxch st(2)
        jmp L_669fca
    L_669fc4:
        fst dword ptr [esp + 4]
        fxch st(1)
    L_669fca:
        fcom st(2)
        fnstsw ax
        test ah, 41h
        jne L_669fd8
        fst dword ptr [esp]
        jmp L_669fdf
    L_669fd8:
        fxch st(2)
        fst dword ptr [esp]
        fxch st(2)
    L_669fdf:
        fld dword ptr [esp]
        fcomp st(2)
        fnstsw ax
        test ah, 41h
        jne L_66a001
        fstp st(1)
        fcom st(1)
        fnstsw ax
        test ah, 41h
        jne L_669ffd
        fstp st(1)
        fst dword ptr [esp]
        jmp L_66a006
    L_669ffd:
        fxch st(1)
        jmp L_66a003
    L_66a001:
        fstp st(2)
    L_66a003:
        fstp dword ptr [esp]
    L_66a006:
        fld dword ptr [esp]
        mov eax, dword ptr [esp + 28]
        fld st(0)
        fld dword ptr [esp + 4]
        fld st(0)
        fsubp st(2), st(0)
        fxch st(1)
        fstp dword ptr [esp]
        fld st(1)
        fadd st(0), st(1)
        fld st(0)
        fld qword ptr [mem_00993828]
        fmul st(1), st(0)
        fxch st(1)
        fstp dword ptr [esp + 4]
        fld dword ptr [esp + 4]
        fstp dword ptr [eax]
        fldz
        fld st(0)
        fld dword ptr [esp]
        fucom st(1)
        fnstsw ax
        fstp st(1)
        test ah, 44h
        jp L_66a066
        mov ecx, dword ptr [esp + 20]
        fstp st(5)
        mov edx, dword ptr [esp + 24]
        fstp st(4)
        fstp st(2)
        fstp st(0)
        fstp st(2)
        fstp st(1)
        fst dword ptr [ecx]
        fstp dword ptr [edx]
        add esp, 16
        ret 12
    L_66a066:
        fstp st(1)
        fld dword ptr [mem_009324A4]
        fcomp dword ptr [esp + 4]
        fnstsw ax
        test ah, 41h
        jne L_66a089
        fstp st(3)
        mov eax, dword ptr [esp + 24]
        fld st(2)
        fdivrp st(2), st(0)
        fxch st(1)
        fstp dword ptr [eax]
        jmp L_66a0a3
    L_66a089:
        fstp st(2)
        mov ecx, dword ptr [esp + 24]
        fld st(1)
        fld st(4)
        fsubr qword ptr [mem_0092C510]
        fsubrp st(4), st(0)
        fdivrp st(3), st(0)
        fxch st(2)
        fstp dword ptr [ecx]
        fxch st(1)
    L_66a0a3:
        fmul st(0), st(1)
        mov ecx, dword ptr [esp + 20]
        fld st(2)
        fsub st(0), st(4)
        fld qword ptr [mem_00987B30]
        fmul st(1), st(0)
        fxch st(1)
        fadd st(0), st(2)
        fdiv st(0), st(3)
        fstp dword ptr [esp + 4]
        fld st(3)
        fld dword ptr [esp + 12]
        fld st(0)
        fsubp st(2), st(0)
        fxch st(1)
        fmul st(0), st(2)
        fadd st(0), st(3)
        fdiv st(0), st(4)
        fstp dword ptr [esp + 28]
        fld st(4)
        fsub dword ptr [esp + 8]
        fmulp st(2), st(0)
        fxch st(1)
        faddp st(2), st(0)
        fxch st(1)
        fdivrp st(2), st(0)
        fxch st(1)
        fstp dword ptr [esp + 24]
        fld st(1)
        fucomp st(3)
        fnstsw ax
        fstp st(2)
        test ah, 44h
        jp L_66a106
        fstp st(0)
        fstp st(0)
        fld dword ptr [esp + 24]
        fsub dword ptr [esp + 28]
        jmp L_66a140
    L_66a106:
        fld st(0)
        fucomp st(2)
        fnstsw ax
        fstp st(1)
        test ah, 44h
        jp L_66a125
        fstp st(0)
        fld dword ptr [esp + 4]
        fadd qword ptr [mem_00987B28]
        fsub dword ptr [esp + 24]
        jmp L_66a140
    L_66a125:
        fld dword ptr [esp + 8]
        fucompp
        fnstsw ax
        test ah, 44h
        jp L_66a142
        fld dword ptr [esp + 28]
        fadd qword ptr [mem_00987B20]
        fsub dword ptr [esp + 4]
    L_66a140:
        fstp dword ptr [ecx]
    L_66a142:
        fldz
        fcomp dword ptr [ecx]
        fnstsw ax
        fld1
        test ah, 41h
        jne L_66a155
        fld dword ptr [ecx]
        fadd st(0), st(1)
        fstp dword ptr [ecx]
    L_66a155:
        fld1
        fcomp dword ptr [ecx]
        fnstsw ax
        test ah, 5
        jp L_66a16a
        fsubr dword ptr [ecx]
        fstp dword ptr [ecx]
        add esp, 16
        ret 12
    L_66a16a:
        fstp st(0)
        add esp, 16
        ret 12
    }
}

// [0x00667490] sub_00667490 (887 bytes)
extern "C" void ext_004442C0();
extern "C" void ext_004442E0();
extern "C" void ext_006668B0();
extern "C" void ext_00666AE0();
extern "C" void ext_00666B40();
extern "C" void ext_00666C90();
extern "C" void ext_006A5C5C();
extern "C" void ext_006A6DD2();
extern "C" int mem_00924FE4;
extern "C" int mem_009251C4;
extern "C" int mem_00924FE0;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00667490(void* self, int edx_unused, void* a1, void* a2, void* a3) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -0x1
        push 0x8a0d5b
        push eax
        mov dword ptr fs:[0x0], esp
        mov eax, dword ptr [esp + 0x18]
        sub esp, 0x4c
        cmp byte ptr [eax + 0xc1], 0x0
        push ebp
        mov ebp, ecx
        je L_667511
        push 0x929218
        lea ecx, [esp + 0x10]
        call dword ptr [mem_00924FE4]
        lea ecx, [esp + 0x28]
        mov dword ptr [esp + 0x58], 0x0
        call dword ptr [mem_009251C4]
        lea eax, [esp + 0xc]
        push eax
        lea ecx, [esp + 0x38]
        mov byte ptr [esp + 0x5c], 0x1
        mov dword ptr [esp + 0x2c], 0x928ecc
        call dword ptr [mem_00924FE0]
        push 0x9ce164
        lea ecx, [esp + 0x2c]
        push ecx
        mov byte ptr [esp + 0x60], 0x0
        mov dword ptr [esp + 0x30], 0x928ee4
        call ext_006A6DD2
L_667511:
        push ebx
        push esi
        mov ebx, eax
        push edi
        lea ecx, [esp + 0x70]
        mov dword ptr [esp + 0x10], ebx
        call ext_004442E0
        mov eax, dword ptr [ebx]
        cmp byte ptr [eax + 0xc1], 0x0
        je L_667533
        mov edi, dword ptr [ebx + 0x8]
        jmp L_66754E
L_667533:
        mov edx, dword ptr [ebx + 0x8]
        cmp byte ptr [edx + 0xc1], 0x0
        je L_667543
        mov edi, eax
        jmp L_66754E
L_667543:
        mov ecx, dword ptr [esp + 0x74]
        cmp ecx, ebx
        mov edi, dword ptr [ecx + 0x8]
        jne L_6675C6
L_66754E:
        cmp byte ptr [edi + 0xc1], 0x0
        mov esi, dword ptr [ebx + 0x4]
        jne L_66755D
        mov dword ptr [edi + 0x4], esi
L_66755D:
        mov eax, dword ptr [ebp + 0x4]
        cmp dword ptr [eax + 0x4], ebx
        jne L_66756A
        mov dword ptr [eax + 0x4], edi
        jmp L_667575
L_66756A:
        cmp dword ptr [esi], ebx
        jne L_667572
        mov dword ptr [esi], edi
        jmp L_667575
L_667572:
        mov dword ptr [esi + 0x8], edi
L_667575:
        mov ebx, dword ptr [ebp + 0x4]
        mov eax, dword ptr [ebx]
        cmp eax, dword ptr [esp + 0x10]
        jne L_667598
        cmp byte ptr [edi + 0xc1], 0x0
        je L_66758D
        mov eax, esi
        jmp L_667596
L_66758D:
        push edi
        call ext_004442C0
        add esp, 0x4
L_667596:
        mov dword ptr [ebx], eax
L_667598:
        mov ebx, dword ptr [ebp + 0x4]
        mov ecx, dword ptr [esp + 0x10]
        cmp dword ptr [ebx + 0x8], ecx
        jne L_66762C
        cmp byte ptr [edi + 0xc1], 0x0
        je L_6675B8
        mov eax, esi
        mov dword ptr [ebx + 0x8], eax
        jmp L_66762C
L_6675B8:
        push edi
        call ext_00666C90
        add esp, 0x4
        mov dword ptr [ebx + 0x8], eax
        jmp L_66762C
L_6675C6:
        mov dword ptr [eax + 0x4], ecx
        mov edx, dword ptr [ebx]
        mov dword ptr [ecx], edx
        cmp ecx, dword ptr [ebx + 0x8]
        jne L_6675D6
        mov esi, ecx
        jmp L_6675F3
L_6675D6:
        cmp byte ptr [edi + 0xc1], 0x0
        mov esi, dword ptr [ecx + 0x4]
        jne L_6675E5
        mov dword ptr [edi + 0x4], esi
L_6675E5:
        mov dword ptr [esi], edi
        mov eax, dword ptr [ebx + 0x8]
        mov dword ptr [ecx + 0x8], eax
        mov edx, dword ptr [ebx + 0x8]
        mov dword ptr [edx + 0x4], ecx
L_6675F3:
        mov eax, dword ptr [ebp + 0x4]
        cmp dword ptr [eax + 0x4], ebx
        jne L_667600
        mov dword ptr [eax + 0x4], ecx
        jmp L_66760E
L_667600:
        mov eax, dword ptr [ebx + 0x4]
        cmp dword ptr [eax], ebx
        jne L_66760B
        mov dword ptr [eax], ecx
        jmp L_66760E
L_66760B:
        mov dword ptr [eax + 0x8], ecx
L_66760E:
        mov eax, dword ptr [ebx + 0x4]
        mov dword ptr [ecx + 0x4], eax
        mov dl, byte ptr [ebx + 0xc0]
        mov al, byte ptr [ecx + 0xc0]
        mov byte ptr [ecx + 0xc0], dl
        mov byte ptr [ebx + 0xc0], al
L_66762C:
        mov eax, dword ptr [esp + 0x10]
        mov bl, 0x1
        cmp byte ptr [eax + 0xc0], bl
        jne L_66779C
        mov ecx, dword ptr [ebp + 0x4]
        cmp edi, dword ptr [ecx + 0x4]
        je L_667796
        _emit 0x8d
        _emit 0x9b
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
L_667650:
        cmp byte ptr [edi + 0xc0], bl
        jne L_667796
        mov eax, dword ptr [esi]
        cmp edi, eax
        jne L_6676FB
        mov eax, dword ptr [esi + 0x8]
        cmp byte ptr [eax + 0xc0], 0x0
        jne L_66768A
        mov byte ptr [eax + 0xc0], bl
        push esi
        mov ecx, ebp
        mov byte ptr [esi + 0xc0], 0x0
        call ext_00666AE0
        mov eax, dword ptr [esi + 0x8]
L_66768A:
        cmp byte ptr [eax + 0xc1], 0x0
        jne L_667740
        mov edx, dword ptr [eax]
        cmp byte ptr [edx + 0xc0], bl
        jne L_6676B0
        mov ecx, dword ptr [eax + 0x8]
        cmp byte ptr [ecx + 0xc0], bl
        je L_667739
L_6676B0:
        mov ecx, dword ptr [eax + 0x8]
        cmp byte ptr [ecx + 0xc0], bl
        jne L_6676D3
        mov byte ptr [edx + 0xc0], bl
        push eax
        mov ecx, ebp
        mov byte ptr [eax + 0xc0], 0x0
        call ext_00666B40
        mov eax, dword ptr [esi + 0x8]
L_6676D3:
        mov cl, byte ptr [esi + 0xc0]
        mov byte ptr [eax + 0xc0], cl
        mov byte ptr [esi + 0xc0], bl
        mov edx, dword ptr [eax + 0x8]
        push esi
        mov ecx, ebp
        mov byte ptr [edx + 0xc0], bl
        call ext_00666AE0
        jmp L_667796
L_6676FB:
        cmp byte ptr [eax + 0xc0], 0x0
        jne L_66771B
        mov byte ptr [eax + 0xc0], bl
        push esi
        mov ecx, ebp
        mov byte ptr [esi + 0xc0], 0x0
        call ext_00666B40
        mov eax, dword ptr [esi]
L_66771B:
        cmp byte ptr [eax + 0xc1], 0x0
        jne L_667740
        mov edx, dword ptr [eax + 0x8]
        cmp byte ptr [edx + 0xc0], bl
        jne L_667753
        mov ecx, dword ptr [eax]
        cmp byte ptr [ecx + 0xc0], bl
        jne L_667753
L_667739:
        mov byte ptr [eax + 0xc0], 0x0
L_667740:
        mov edx, dword ptr [ebp + 0x4]
        mov edi, esi
        cmp edi, dword ptr [edx + 0x4]
        mov esi, dword ptr [esi + 0x4]
        jne L_667650
        jmp L_667796
L_667753:
        mov ecx, dword ptr [eax]
        cmp byte ptr [ecx + 0xc0], bl
        jne L_667774
        mov byte ptr [edx + 0xc0], bl
        push eax
        mov ecx, ebp
        mov byte ptr [eax + 0xc0], 0x0
        call ext_00666AE0
        mov eax, dword ptr [esi]
L_667774:
        mov cl, byte ptr [esi + 0xc0]
        mov byte ptr [eax + 0xc0], cl
        mov byte ptr [esi + 0xc0], bl
        mov edx, dword ptr [eax]
        push esi
        mov ecx, ebp
        mov byte ptr [edx + 0xc0], bl
        call ext_00666B40
L_667796:
        mov byte ptr [edi + 0xc0], bl
L_66779C:
        mov esi, dword ptr [esp + 0x10]
        add esi, 0xc
        mov dword ptr [esp + 0x14], esi
        lea ecx, [esi + 0x1c]
        mov dword ptr [esp + 0x64], 0x2
        call ext_006668B0
        mov ecx, esi
        mov dword ptr [esp + 0x64], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov eax, dword ptr [esp + 0x10]
        push eax
        call ext_006A5C5C
        mov eax, dword ptr [ebp + 0x8]
        add esp, 0x4
        test eax, eax
        pop edi
        pop esi
        pop ebx
        jbe L_6677E4
        add eax, -0x1
        mov dword ptr [ebp + 0x8], eax
L_6677E4:
        mov ecx, dword ptr [esp + 0x64]
        mov eax, dword ptr [esp + 0x60]
        mov edx, dword ptr [esp + 0x68]
        mov dword ptr [eax], ecx
        mov ecx, dword ptr [esp + 0x50]
        mov dword ptr [eax + 0x4], edx
        pop ebp
        mov dword ptr fs:[0x0], ecx
        add esp, 0x58
        ret 0xc
    }
}

// [0x00662850] sub_00662850 (35 bytes)
extern "C" void ext_00640110();
extern "C" void __cdecl ext_00640A50(int a1, int a2);
extern "C" void __cdecl fn_00662850(void* a1, int a2, int a3) {
    if (a3) {
        int r = ((int (__thiscall*)(void*, int))ext_00640110)(a1, a2);
        ext_00640A50(r, a3);
    }
}

// [0x00660D10] sub_00660D10 (46 bytes)
extern "C" __declspec(naked) void* __fastcall fn_00660D10(void* self, int edx_unused, int a1) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        test esi, esi
        push edi
        mov edi, ecx
        je L_call
        mov eax, dword ptr [esi + 0x4]
        test eax, eax
        je L_zero
        mov ecx, dword ptr [esi + 0x8]
        sub ecx, eax
        sar ecx, 0x2
        jne L_call
    L_zero:
        xor esi, esi
    L_call:
        call ext_00660A50
        mov dword ptr [eax + 0x8], esi
        mov eax, edi
        pop edi
        pop esi
        ret 0x4
    }
}

// [0x00662810] sub_00662810 (49 bytes)
extern "C" void ext_00640110();
extern "C" void ext_00427550();
extern "C" int mem_00924FF0;
extern "C" __declspec(naked) void __fastcall fn_00662810(void* self) {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x10]
        cmp dword ptr [esi + 0x14], 0
        je done
        mov eax, dword ptr [esp + 0xc]
        mov ecx, dword ptr [esp + 0x8]
        push eax
        call ext_00640110
        mov ecx, esi
        mov dword ptr [esp + 0x10], eax
        call dword ptr [mem_00924FF0]
        push eax
        lea ecx, [esp + 0x14]
        call ext_00427550
done:
        pop esi
        ret
    }
}

// [0x00669A90] sub_00669A90 (50 bytes)
extern "C" void ext_00669140();
extern "C" void ext_00669370();
extern "C" __declspec(naked) void __fastcall fn_00669A90(void* self) {
    __asm {
        push ecx
        mov edx, dword ptr [esp + 0x10]
        push esi
        mov esi, dword ptr [esp + 0xc]
        lea eax, [ecx + 0x48]
        push eax
        mov eax, dword ptr [esp + 0x14]
        push esi
        push edx
        push eax
        push 0x0
        mov dword ptr [esp + 0x18], 0x0
        call ext_00669140
        mov ecx, eax
        call ext_00669370
        mov eax, esi
        pop esi
        pop ecx
        ret 0xc
    }
}

// [0x00669AD0] sub_00669AD0 (50 bytes)
extern "C" void ext_00669140();
extern "C" void ext_00669370();
extern "C" __declspec(naked) void __fastcall fn_00669AD0(void* self) {
    __asm {
        push ecx
        mov edx, dword ptr [esp + 0x10]
        push esi
        mov esi, dword ptr [esp + 0xc]
        lea eax, [ecx + 0x48]
        push eax
        mov eax, dword ptr [esp + 0x14]
        push esi
        push edx
        push eax
        push 0x1
        mov dword ptr [esp + 0x18], 0x0
        call ext_00669140
        mov ecx, eax
        call ext_00669370
        mov eax, esi
        pop esi
        pop ecx
        ret 0xc
    }
}

// [0x00669B10] sub_00669B10 (50 bytes)
extern "C" void ext_00669140();
extern "C" void ext_00669370();
extern "C" __declspec(naked) void __fastcall fn_00669B10(void* self) {
    __asm {
        push ecx
        mov edx, dword ptr [esp + 0x10]
        push esi
        mov esi, dword ptr [esp + 0xc]
        lea eax, [ecx + 0x48]
        push eax
        mov eax, dword ptr [esp + 0x14]
        push esi
        push edx
        push eax
        push 0x2
        mov dword ptr [esp + 0x18], 0x0
        call ext_00669140
        mov ecx, eax
        call ext_00669370
        mov eax, esi
        pop esi
        pop ecx
        ret 0xc
    }
}

// [0x00667DD0] sub_00667DD0 (52 bytes)
extern "C" void ext_00667C70();
extern "C" void ext_006A5C5C();
extern "C" __declspec(naked) void __fastcall fn_00667DD0(void* self) {
    __asm {
        sub esp, 8
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [eax]
        push eax
        push esi
        push ecx
        push esi
        lea eax, [esp + 0x14]
        push eax
        mov ecx, esi
        call ext_00667C70
        mov ecx, dword ptr [esi + 4]
        push ecx
        call ext_006A5C5C
        add esp, 4
        xor eax, eax
        mov dword ptr [esi + 4], eax
        mov dword ptr [esi + 8], eax
        pop esi
        add esp, 8
        ret
    }
}

// [0x00667FC0] sub_00667FC0 (59 bytes)
extern "C" void ext_00667C70();
extern "C" void ext_006A5C5C();
extern "C" __declspec(naked) void __fastcall fn_00667FC0(void* self) {
    __asm {
        sub esp, 8
        push esi
        lea esi, [ecx + 4]
        mov dword ptr [ecx], 0x987a3c
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [eax]
        push eax
        push esi
        push ecx
        push esi
        lea eax, [esp + 0x14]
        push eax
        mov ecx, esi
        call ext_00667C70
        mov ecx, dword ptr [esi + 4]
        push ecx
        call ext_006A5C5C
        add esp, 4
        xor eax, eax
        mov dword ptr [esi + 4], eax
        mov dword ptr [esi + 8], eax
        pop esi
        add esp, 8
        ret
    }
}

// [0x00668DF0] sub_00668DF0 (59 bytes)
extern "C" void ext_00668A90();
extern "C" void ext_006A5C5C();
extern "C" __declspec(naked) void __fastcall fn_00668DF0(void* self) {
    __asm {
        sub esp, 8
        push esi
        lea esi, [ecx + 4]
        mov dword ptr [ecx], 0x987a44
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [eax]
        push eax
        push esi
        push ecx
        push esi
        lea eax, [esp + 0x14]
        push eax
        mov ecx, esi
        call ext_00668A90
        mov ecx, dword ptr [esi + 4]
        push ecx
        call ext_006A5C5C
        add esp, 4
        xor eax, eax
        mov dword ptr [esi + 4], eax
        mov dword ptr [esi + 8], eax
        pop esi
        add esp, 8
        ret
    }
}

// [0x00668740] sub_00668740 (61 bytes)
extern "C" void ext_00668000();
extern "C" void ext_006A5C5C();

extern "C" __declspec(naked) void __fastcall fn_00668740(void* self) {
    __asm {
        push ebx
        push esi
        push edi
        mov edi, dword ptr [esp + 0x10]
        cmp byte ptr [edi + 0x39], 0
        mov ebx, ecx
        mov esi, edi
        jne done
    loop_start:
        mov eax, dword ptr [esi + 8]
        push eax
        mov ecx, ebx
        call fn_00668740
        mov esi, dword ptr [esi]
        lea ecx, [edi + 0xc]
        call ext_00668000
        push edi
        call ext_006A5C5C
        add esp, 4
        cmp byte ptr [esi + 0x39], 0
        mov edi, esi
        je loop_start
    done:
        pop edi
        pop esi
        pop ebx
        ret 4
    }
}

// [0x00668C90] sub_00668C90 (62 bytes)
extern "C" void ext_00668740();
extern "C" __declspec(naked) void __fastcall fn_00668C90(void* self) {
    __asm {
        push esi
        push edi
        lea esi, [ecx + 0x10]
        mov edi, 0x4
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
loop_00668CA0:
        mov eax, dword ptr [esi]
        mov ecx, dword ptr [eax + 0x4]
        push ecx
        lea ecx, [esi - 0x4]
        call ext_00668740
        mov eax, dword ptr [esi]
        mov dword ptr [eax + 0x4], eax
        mov eax, dword ptr [esi]
        mov dword ptr [esi + 0x4], 0x0
        mov dword ptr [eax], eax
        mov eax, dword ptr [esi]
        add esi, 0x10
        sub edi, 0x1
        mov dword ptr [eax + 0x8], eax
        jne loop_00668CA0
        pop edi
        pop esi
        ret
    }
}

// [0x00669140] sub_00669140 (63 bytes)
extern "C" void ext_0041FF30();
extern "C" void ext_00668F50();
extern "C" void ext_006A6DD2();
extern "C" __declspec(naked) void __fastcall fn_00669140(void* self, int edx_unused, void* a1, void* a2, void* a3) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        sub esp, 0x44
        push esi
        mov esi, dword ptr [esp + 0x54]
        push edi
        mov edi, dword ptr [esp + 0x54]
        push esi
        push edi
        push eax
        call ext_00668F50
        test eax, eax
        jne L_00669177
        push esi
        push edi
        lea ecx, [esp + 0x10]
        call ext_0041FF30
        push 0x9d3748
        lea ecx, [esp + 0xc]
        push ecx
        call ext_006A6DD2
    L_00669177:
        pop edi
        pop esi
        add esp, 0x44
        ret 0xc
    }
}

// [0x00669180] sub_00669180 (136 bytes)
extern "C" __declspec(naked) void __fastcall fn_00669180(void* self) {
    __asm {
        push -0x1
        push 0x88afd3
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        push esi
        mov esi, ecx
        push 0x928b5d
        lea ecx, [esp + 0xc]
        mov dword ptr [esp + 0x8], 0x0
        call dword ptr [mem_00924FE4]
        mov eax, dword ptr [esp + 0x38]
        push eax
        lea ecx, [esp + 0xc]
        push ecx
        push 0x3
        mov ecx, esi
        mov dword ptr [esp + 0x38], 0x1
        call ext_00669140
        mov esi, dword ptr [esp + 0x34]
        add eax, 0x74
        push eax
        mov ecx, esi
        call dword ptr [mem_00924FE0]
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x4], 0x1
        mov byte ptr [esp + 0x2c], 0x0
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x24]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x2c
        ret 0x8
    }
}

// [0x00669210] sub_00669210 (347 bytes)
extern "C" void ext_00669180();
extern "C" int mem_009250D8;
extern "C" int mem_00924EC4;
extern "C" int mem_00924FE0;
extern "C" int mem_00925120;
extern "C" int mem_00924FD8;
extern "C" int mem_00924FF4;
extern "C" __declspec(naked) void __fastcall fn_00669210(void* self) {
    __asm {
        push -0x1
        push 0x8b31ee
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x5c
        push esi
        push edi
        mov edi, dword ptr [esp + 0x78]
        push 0x0
        mov dword ptr [esp + 0xc], ecx
        push 0x25
        mov ecx, edi
        mov dword ptr [esp + 0x14], 0x0
        call dword ptr [mem_009250D8]
        mov esi, eax
        mov eax, dword ptr [mem_00924EC4]
        cmp esi, dword ptr [eax]
        jne L_00669273
        mov esi, dword ptr [esp + 0x74]
        push edi
        mov ecx, esi
        call dword ptr [mem_00924FE0]
        pop edi
        mov eax, esi
        pop esi
        mov ecx, dword ptr [esp + 0x5c]
        mov dword ptr fs:[0x0], ecx
        add esp, 0x68
        ret 0x8
    L_00669273:
        push ebp
        push esi
        push 0x0
        lea ecx, [esp + 0x1c]
        push ecx
        mov ecx, edi
        call dword ptr [mem_00925120]
        add esi, 0x1
        push esi
        push 0x25
        mov ecx, edi
        mov dword ptr [esp + 0x78], 0x1
        call dword ptr [mem_009250D8]
        mov ebp, eax
        mov edx, ebp
        sub edx, esi
        push edx
        push esi
        lea eax, [esp + 0x38]
        push eax
        mov ecx, edi
        call dword ptr [mem_00925120]
        lea ecx, [esp + 0x30]
        push ecx
        mov ecx, dword ptr [esp + 0x10]
        lea edx, [esp + 0x50]
        push edx
        mov byte ptr [esp + 0x78], 0x2
        call ext_00669180
        push eax
        lea ecx, [esp + 0x18]
        mov byte ptr [esp + 0x74], 0x3
        call dword ptr [mem_00924FD8]
        lea ecx, [esp + 0x4c]
        mov byte ptr [esp + 0x70], 0x2
        call dword ptr [mem_00924FF4]
        mov eax, dword ptr [mem_00924EC4]
        mov ecx, dword ptr [eax]
        push ecx
        add ebp, 0x1
        push ebp
        lea edx, [esp + 0x54]
        push edx
        mov ecx, edi
        call dword ptr [mem_00925120]
        push eax
        lea ecx, [esp + 0x18]
        mov byte ptr [esp + 0x74], 0x4
        call dword ptr [mem_00924FD8]
        lea ecx, [esp + 0x4c]
        mov byte ptr [esp + 0x70], 0x2
        call dword ptr [mem_00924FF4]
        mov esi, dword ptr [esp + 0x78]
        lea eax, [esp + 0x14]
        push eax
        mov ecx, esi
        call dword ptr [mem_00924FE0]
        lea ecx, [esp + 0x30]
        mov dword ptr [esp + 0x10], 0x1
        mov byte ptr [esp + 0x70], 0x1
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x14]
        mov byte ptr [esp + 0x70], 0x0
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x68]
        pop ebp
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x68
        ret 0x8
    }
}

// [0x006680F0] sub_006680F0 (89 bytes)
extern "C" void ext_00667E10();
extern "C" int mem_00924FE0;
extern "C" __declspec(naked) void* __fastcall fn_006680F0(void* self, int edx_unused, const void* other) {
    __asm {
        push -1
        push 0x872c79
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        push edi
        mov edi, dword ptr [esp + 0x1c]
        mov esi, ecx
        push edi
        mov dword ptr [esp + 0xc], esi
        call dword ptr [mem_00924FE0]
        add edi, 0x20
        push edi
        lea ecx, [esi + 0x20]
        mov dword ptr [esp + 0x18], 0
        mov dword ptr [esi + 0x1c], 0x987a3c
        call ext_00667E10
        mov ecx, dword ptr [esp + 0xc]
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 4
    }
}

// [0x00668090] sub_00668090 (91 bytes)
extern "C" void ext_00667E10();
extern "C" int mem_00924FE0;
extern "C" __declspec(naked) void* __fastcall fn_00668090(void* self, int edx_unused, const void* a1, const void* a2) {
    __asm {
        push -1
        push 0x872c79
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        push ecx
        mov eax, [esp + 0x14]
        push esi
        mov esi, ecx
        push eax
        mov [esp + 8], esi
        call dword ptr [mem_00924FE0]
        mov ecx, [esp + 0x1c]
        add ecx, 4
        push ecx
        lea ecx, [esi + 0x20]
        mov dword ptr [esp + 0x14], 0
        mov dword ptr [esi + 0x1c], 0x987a3c
        call ext_00667E10
        mov ecx, [esp + 8]
        mov eax, esi
        pop esi
        mov fs:[0], ecx
        add esp, 0x10
        ret 8
    }
}

// [0x00668EF0] sub_00668EF0 (91 bytes)
extern "C" void ext_00668FC0();
extern "C" void ext_006A6C87();
extern "C" int mem_00B59540;
extern "C" __declspec(naked) void __fastcall fn_00668EF0(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -0x1
        push 0x8b311e
        push eax
        mov eax, 0x1
        mov dword ptr fs:[0x0], esp
        test byte ptr [mem_00B59540], al
        jne done_00668EF0
        or dword ptr [mem_00B59540], eax
        push eax
        mov ecx, 0xb594b8
        mov dword ptr [esp + 0xc], 0x0
        call ext_00668FC0
        push 0x9216a0
        call ext_006A6C87
        add esp, 0x4
    done_00668EF0:
        mov ecx, dword ptr [esp]
        mov eax, 0xb594b8
        mov dword ptr fs:[0x0], ecx
        add esp, 0xc
        ret
    }
}

// [0x00668F50] sub_00668F50 (103 bytes)
extern "C" void ext_00668EF0();
extern "C" void ext_006678A0();
extern "C" __declspec(naked) void __fastcall fn_00668F50(void* self) {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0x8]
        push esi
        push edi
        mov edi, dword ptr [esp + 0x14]
        mov eax, ebx
        shl eax, 0x4
        push edi
        lea ecx, [eax + ecx + 0x8]
        call ext_00668D80
        test eax, eax
        mov esi, dword ptr [esp + 0x18]
        je L_fallback
        cmp dword ptr [esi + 0x14], 0x0
        je L_empty_key
        push esi
        mov ecx, eax
        call ext_00667F10
        test eax, eax
        jne L_ret
    L_fallback:
        push esi
        push edi
        push ebx
        call ext_00668EF0
        mov ecx, eax
        call ext_006678A0
    L_ret:
        pop edi
        pop esi
        pop ebx
        ret 0xc
    L_empty_key:
        cmp dword ptr [eax + 0xc], 0x0
        je L_fallback
        mov ecx, dword ptr [eax + 0x8]
        mov esi, dword ptr [ecx]
        cmp esi, ecx
        jne L_done
        call dword ptr [mem_00925134]
    L_done:
        pop edi
        lea eax, [esi + 0x28]
        pop esi
        pop ebx
        ret 0xc
    }
}

// [0x006690D0] sub_006690D0 (106 bytes)
extern "C" void ext_00668FC0();
extern "C" void ext_006A6C87();
extern "C" int mem_00B5947C;
extern "C" int mem_00B595D0;
extern "C" int mem_00B59548;
extern "C" __declspec(naked) void __fastcall fn_006690D0(void* self) {
    __asm {
        mov eax, fs:[0]
        push -1
        push 0x8b319e
        push eax
        mov fs:[0], esp
        mov eax, dword ptr [mem_00B5947C]
        test eax, eax
        jne L_done
        mov eax, 1
        test byte ptr [mem_00B595D0], al
        jne L_set
        or dword ptr [mem_00B595D0], eax
        push 0
        mov ecx, offset mem_00B59548
        mov dword ptr [esp + 0xc], 0
        call ext_00668FC0
        push 0x9216b0
        call ext_006A6C87
        add esp, 4
    L_set:
        mov eax, offset mem_00B59548
        mov dword ptr [mem_00B5947C], eax
    L_done:
        mov ecx, dword ptr [esp]
        mov fs:[0], ecx
        add esp, 0xc
        ret
    }
}

// [0x006609B0] sub_006609B0 (151 bytes)
extern "C" void ext_0041A920();
extern "C" int mem_00987730;
extern "C" int mem_00B5907C;
extern "C" int mem_00B59080;
extern "C" int mem_00B59084;
extern "C" int mem_00925134;
extern "C" __declspec(naked) void* __fastcall fn_006609B0(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        sub esp, 0x8
        push edi
        mov edi, ecx
        mov dword ptr [edi], offset mem_00987730
        mov dword ptr [edi + 0x4], eax
        mov dword ptr [edi + 0x8], 0x0
        mov edx, dword ptr [mem_00B59080]
        test edx, edx
        je L_skip
        mov eax, dword ptr [mem_00B59084]
        mov ecx, eax
        sub ecx, edx
        sar ecx, 0x2
        je L_skip
        cmp edx, eax
        push ebp
        mov ebp, dword ptr [mem_00925134]
        push esi
        mov esi, eax
        jbe L_1
        call ebp
        mov eax, dword ptr [mem_00B59084]
        mov edx, dword ptr [mem_00B59080]
    L_1:
        mov ecx, offset mem_00B5907C
        push ebx
        mov ebx, ecx
        lea ecx, [esi - 0x4]
        cmp ecx, eax
        mov dword ptr [esp + 0x14], esi
        ja L_2
        cmp ecx, edx
        jae L_3
    L_2:
        call ebp
    L_3:
        add esi, -0x4
        cmp esi, dword ptr [ebx + 0x8]
        pop ebx
        jb L_4
        call ebp
    L_4:
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 0x8]
        pop esi
        mov dword ptr [edi + 0x8], eax
        pop ebp
    L_skip:
        lea ecx, [esp + 0x10]
        push ecx
        mov ecx, offset mem_00B5907C
        mov dword ptr [esp + 0x14], edi
        call ext_0041A920
        mov eax, edi
        pop edi
        add esp, 0x8
        ret 0x4
    }
}

// [0x00660A50] sub_00660A50 (236 bytes)
extern "C" void ext_00435D00();
extern "C" void ext_006609B0();
extern "C" void ext_006A6C87();
extern "C" int mem_00B59080;
extern "C" int mem_00B59084;
extern "C" int mem_00924E90;
extern "C" int mem_00924FA0;
extern "C" int mem_00924E98;
extern "C" int mem_00B59024;
extern "C" int mem_00925134;
extern "C" int mem_00B59018;
extern "C" int mem_00B5907C;
extern "C" int mem_00921460;
extern "C" int mem_0098774C;
extern "C" int mem_008B270E;
extern "C" __declspec(naked) void __fastcall fn_00660A50(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push offset mem_008B270E
        push eax
        mov dword ptr fs:[0x0], esp
        mov edx, dword ptr [mem_00B59080]
        sub esp, 8
        test edx, edx
        je L_0A80
        mov eax, dword ptr [mem_00B59084]
        mov ecx, eax
        sub ecx, edx
        sar ecx, 2
        jne L_0AEA
    L_0A80:
        mov edx, dword ptr [mem_00924E90]
        mov eax, dword ptr [mem_00924FA0]
        push edx
        push offset mem_0098774C
        push eax
        call ext_00435D00
        add esp, 8
        mov ecx, eax
        call dword ptr [mem_00924E98]
        mov eax, 1
        test byte ptr [mem_00B59024], al
        jne L_0AD6
        or dword ptr [mem_00B59024], eax
        push 0
        mov ecx, offset mem_00B59018
        mov dword ptr [esp + 0x14], 0
        call ext_006609B0
        push offset mem_00921460
        call ext_006A6C87
        add esp, 4
    L_0AD6:
        mov eax, offset mem_00B59018
        mov ecx, dword ptr [esp + 8]
        mov dword ptr fs:[0x0], ecx
        add esp, 0x14
        ret
    L_0AEA:
        cmp edx, eax
        push ebx
        mov ebx, dword ptr [mem_00925134]
        push esi
        mov esi, eax
        jbe L_0B05
        call ebx
        mov eax, dword ptr [mem_00B59084]
        mov edx, dword ptr [mem_00B59080]
    L_0B05:
        mov ecx, offset mem_00B5907C
        push edi
        mov edi, ecx
        lea ecx, [esi - 4]
        cmp ecx, eax
        mov dword ptr [esp + 0x10], esi
        ja L_0B1C
        cmp ecx, edx
        jae L_0B1E
    L_0B1C:
        call ebx
    L_0B1E:
        add esi, -4
        cmp esi, dword ptr [edi + 8]
        pop edi
        jb L_0B29
        call ebx
    L_0B29:
        mov eax, dword ptr [esi]
        mov ecx, dword ptr [esp + 0x10]
        pop esi
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0x14
        ret
    }
}

// [0x00669370] sub_00669370 (250 bytes)
extern "C" void ext_00662E50();
extern "C" void ext_00662E70();
extern "C" void ext_006690D0();
extern "C" int mem_00924FD0;
extern "C" int mem_00924FF4;
extern "C" int mem_00924FE0;

extern "C" __declspec(naked) void __fastcall fn_00669370(void* self) {
    __asm {
        push -0x1
        push 0x877622
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x3c
        push esi
        lea esi, [ecx + 0x74]
        push esi
        mov dword ptr [esp + 0x8], 0x0
        call ext_00662E50
        add esp, 0x4
        test al, al
        je L_00669449
        mov eax, dword ptr [esp + 0x54]
        cmp dword ptr [eax + 0x14], 0x0
        jne L_00669400
        call ext_006690D0
        add eax, 0x48
        push esi
        push eax
        lea eax, [esp + 0x10]
        push eax
        call dword ptr [mem_00924FD0]
        mov esi, dword ptr [esp + 0x5c]
        push eax
        push esi
        mov dword ptr [esp + 0x5c], 0x0
        call ext_00662E70
        add esp, 0x14
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x48], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov eax, esi
        pop esi
        mov ecx, dword ptr [esp + 0x3c]
        mov dword ptr fs:[0x0], ecx
        add esp, 0x48
        ret 0x8

    L_00669400:
        push esi
        push eax
        lea ecx, [esp + 0x2c]
        push ecx
        call dword ptr [mem_00924FD0]
        mov esi, dword ptr [esp + 0x5c]
        push eax
        push esi
        mov dword ptr [esp + 0x5c], 0x1
        call ext_00662E70
        add esp, 0x14
        lea ecx, [esp + 0x24]
        mov dword ptr [esp + 0x48], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov eax, esi
        pop esi
        mov ecx, dword ptr [esp + 0x3c]
        mov dword ptr fs:[0x0], ecx
        add esp, 0x48
        ret 0x8

    L_00669449:
        push esi
        mov esi, dword ptr [esp + 0x54]
        mov ecx, esi
        call dword ptr [mem_00924FE0]
        mov ecx, dword ptr [esp + 0x40]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x48
        ret 0x8
    }
}

// [0x00669470] sub_00669470 (153 bytes)
extern "C" __declspec(naked) void __fastcall fn_00669470(void* self) {
    __asm {
        push -0x1
        push 0x8848f2
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x38
        push ebx
        push esi
        push edi
        mov esi, ecx
        xor ebx, ebx
        push 0x928b5d
        lea ecx, [esp + 0x10]
        mov dword ptr [esi + 0x94], ebx
        call dword ptr [mem_00924FE4]
        lea eax, [esp + 0xc]
        push eax
        lea ecx, [esp + 0x2c]
        push ecx
        mov ecx, esi
        mov dword ptr [esp + 0x54], ebx
        call ext_00669370
        mov edi, dword ptr [esp + 0x54]
        mov edx, dword ptr [edi]
        push eax
        mov eax, dword ptr [edx + 0x20]
        mov ecx, edi
        mov byte ptr [esp + 0x50], 0x1
        call eax
        lea ecx, [esp + 0x28]
        mov byte ptr [esp + 0x4c], bl
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0xc]
        mov dword ptr [esp + 0x4c], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x44]
        mov dword ptr [esi + 0x94], edi
        mov byte ptr [edi + 0x4], bl
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0x44
        ret 0x4
    }
}

// [0x00669B50] sub_00669B50 (169 bytes)
extern "C" void ext_00668F50();
extern "C" void ext_00669370();
extern "C" int mem_00924FDC;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00669B50(void* self, int edx_unused, void* a1, void* a2, void* a3, void* a4) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -0x1
        push 0x8b56f9
        push eax
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr fs:[0x0], esp
        sub esp, 0x1c
        push esi
        push edi
        mov edi, dword ptr [esp + 0x3c]
        push edi
        push eax
        push 0x1
        mov esi, ecx
        call ext_00668F50
        test eax, eax
        jne L_669B9A
        mov eax, dword ptr [esp + 0x38]
        cmp dword ptr [eax + 0x14], 0x0
        je L_669BE4
        push edi
        push eax
        push 0x1
        mov ecx, esi
        call ext_00668F50
        test eax, eax
        je L_669BE4
    L_669B9A:
        add esi, 0x48
        push esi
        lea ecx, [esp + 0xc]
        push ecx
        mov ecx, eax
        call ext_00669370
        mov ecx, dword ptr [esp + 0x40]
        push eax
        mov dword ptr [esp + 0x30], 0x0
        call dword ptr [mem_00924FDC]
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x2c], -0x1
        call dword ptr [mem_00924FF4]
        pop edi
        mov al, 0x1
        pop esi
        mov ecx, dword ptr [esp + 0x1c]
        mov dword ptr fs:[0x0], ecx
        add esp, 0x28
        ret 0x10
    L_669BE4:
        mov ecx, dword ptr [esp + 0x24]
        pop edi
        xor al, al
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x28
        ret 0x10
    }
}

// [0x00669510] sub_00669510 (172 bytes)
extern "C" void ext_00669370();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF0;
extern "C" int mem_00924FF4;
extern "C" __declspec(naked) void __fastcall fn_00669510(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -0x1
        push 0x8848f2
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x38
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 0x94], 0x0
        je L_669_END
        push edi
        push 0x928b5d
        lea ecx, [esp + 0xc]
        call dword ptr [mem_00924FE4]
        lea eax, [esp + 0x8]
        push eax
        lea ecx, [esp + 0x28]
        push ecx
        mov ecx, esi
        mov dword ptr [esp + 0x50], 0x0
        call ext_00669370
        mov edx, dword ptr [esi + 0x94]
        mov edi, dword ptr [edx]
        push 0x1
        mov ecx, eax
        mov byte ptr [esp + 0x4c], 0x1
        call dword ptr [mem_00924FF0]
        mov ecx, dword ptr [esi + 0x94]
        push eax
        mov eax, dword ptr [edi + 0x24]
        call eax
        lea ecx, [esp + 0x24]
        mov byte ptr [esp + 0x48], 0x0
        call dword ptr [mem_00924FF4]
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x48], -0x1
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esi + 0x94]
        mov byte ptr [ecx + 0x4], 0x0
        pop edi
    L_669_END:
        mov ecx, dword ptr [esp + 0x3c]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x44
        ret
    }
}

// [0x0066A350] sub_0066A350 (160 bytes)
extern "C" void ext_00640110();
extern "C" void ext_00640BC0();
extern "C" int mem_009366D4;
extern "C" int mem_00958CD0;
extern "C" int mem_00987B40;
extern "C" int mem_00987B38;

extern "C" __declspec(naked) void* __fastcall fn_0066A350(void* self, int edx_unused, void* target) {
    __asm {
        push ecx
        push esi
        push edi
        mov edi, dword ptr [esp + 0x10]
        mov esi, ecx
        fld dword ptr [esi]
        push offset mem_009366D4
        mov ecx, edi
        fstp dword ptr [esp + 0xc]
        call ext_00640110
        fld dword ptr [esp + 0x8]
        push ecx
        fstp dword ptr [esp]
        push eax
        call ext_00640BC0
        fld dword ptr [esi + 0x4]
        add esp, 0x8
        fstp dword ptr [esp + 0x10]
        push offset mem_00958CD0
        mov ecx, edi
        call ext_00640110
        fld dword ptr [esp + 0x10]
        push ecx
        fstp dword ptr [esp]
        push eax
        call ext_00640BC0
        fld dword ptr [esi + 0x8]
        add esp, 0x8
        fstp dword ptr [esp + 0x10]
        push offset mem_00987B40
        mov ecx, edi
        call ext_00640110
        fld dword ptr [esp + 0x10]
        push ecx
        fstp dword ptr [esp]
        push eax
        call ext_00640BC0
        fld dword ptr [esi + 0xc]
        add esp, 0x8
        fstp dword ptr [esp + 0x10]
        push offset mem_00987B38
        mov ecx, edi
        call ext_00640110
        fld dword ptr [esp + 0x10]
        push ecx
        fstp dword ptr [esp]
        push eax
        call ext_00640BC0
        add esp, 0x8
        mov eax, edi
        pop edi
        pop esi
        pop ecx
        ret 0x4
    }
}

// [0x00669C00] sub_00669C00 (206 bytes)
extern "C" void ext_004442E0();
extern "C" void ext_00667030();
extern "C" void ext_00669510();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_00669C00(void* self) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -0x8
        sub esp, 0x18
        push ebx
        lea eax, [ecx + 0xc]
        mov ecx, dword ptr [eax + 0x4]
        push ebp
        push esi
        push edi
        mov edi, dword ptr [ecx]
        mov esi, eax
        mov dword ptr [esp + 0x14], eax
        mov dword ptr [esp + 0x20], esi
        mov dword ptr [esp + 0x24], edi

    L_00669C23:
        test esi, esi
        mov ebx, dword ptr [eax + 0x4]
        je L_00669C2E
        cmp esi, eax
        je L_00669C38

    L_00669C2E:
        mov ebp, dword ptr [mem_00925134]
        call ebp
        jmp L_00669C3E

    L_00669C38:
        mov ebp, dword ptr [mem_00925134]

    L_00669C3E:
        cmp edi, ebx
        je L_00669CC6
        test esi, esi
        jne L_00669C4C
        call ebp

    L_00669C4C:
        cmp edi, dword ptr [esi + 0x4]
        jne L_00669C53
        call ebp

    L_00669C53:
        mov edx, dword ptr [edi + 0x30]
        mov eax, dword ptr [edx]
        add edi, 0x2c
        mov esi, edi
        mov ebp, eax
        mov dword ptr [esp + 0x18], esi
        mov dword ptr [esp + 0x1c], ebp

    L_00669C67:
        test esi, esi
        mov ebx, dword ptr [edi + 0x4]
        je L_00669C72
        cmp esi, edi
        je L_00669C78

    L_00669C72:
        call dword ptr [mem_00925134]

    L_00669C78:
        cmp ebp, ebx
        je L_00669CAC
        test esi, esi
        jne L_00669C86
        call dword ptr [mem_00925134]

    L_00669C86:
        cmp ebp, dword ptr [esi + 0x4]
        jne L_00669C91
        call dword ptr [mem_00925134]

    L_00669C91:
        lea ecx, [ebp + 0x28]
        call ext_00669510
        lea ecx, [esp + 0x18]
        call ext_004442E0
        mov ebp, dword ptr [esp + 0x1c]
        mov esi, dword ptr [esp + 0x18]
        jmp L_00669C67

    L_00669CAC:
        lea ecx, [esp + 0x20]
        call ext_00667030
        mov edi, dword ptr [esp + 0x24]
        mov esi, dword ptr [esp + 0x20]
        mov eax, dword ptr [esp + 0x14]
        jmp L_00669C23

    L_00669CC6:
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}

extern "C" void ext_00435CC0();
extern "C" void ext_005A6300();
extern "C" void ext_006658F0();
extern "C" void ext_006A6E9E();
extern "C" void ext_006AD970();
extern "C" int mem_00925134;
extern "C" int mem_00A9FB9C;
extern "C" int mem_00A32C98;

// [0x00666570] sub_00666570 (245 bytes)
extern "C" __declspec(naked) void __fastcall fn_00666570(void* self, int edx_unused, int a1) {
    __asm {
        push ecx
        push ebx
        push ebp
        push esi
        mov ebp, ecx
        push edi
        mov edi, dword ptr [ebp + 0x30]
        mov ecx, dword ptr [edi + 0x4]
        lea esi, [ebp + 0x2c]
        lea eax, [esp + 0x18]
        push eax
        push ecx
        push edi
        mov ecx, esi
        call ext_00435CC0
        push 0x1
        mov ecx, esi
        mov ebx, eax
        call ext_006658F0
        mov esi, dword ptr [esp + 0x18]
        mov dword ptr [edi + 0x4], ebx
        mov edx, dword ptr [ebx + 0x4]
        mov dword ptr [edx], ebx
        mov eax, dword ptr [esi + 0x8]
        test eax, eax
        je short L_006665BD
        mov dword ptr [esp + 0x10], eax
        lea eax, [esp + 0x10]
        push eax
        lea ecx, [ebp + 0x38]
        call ext_005A6300
    L_006665BD:
        mov ecx, dword ptr [esi + 0xc]
        cmp ecx, dword ptr [ebp + 0xc]
        lea eax, [ebp + 0xc]
        mov dword ptr [esp + 0x10], ecx
        mov ecx, eax
        jl short L_006665D2
        lea ecx, [esp + 0x10]
    L_006665D2:
        mov ecx, dword ptr [ecx]
        push 0x0
        push offset mem_00A9FB9C
        push offset mem_00A32C98
        push 0x0
        push esi
        mov dword ptr [eax], ecx
        call ext_006A6E9E
        add esp, 0x14
        test eax, eax
        je short L_0066664E
        mov esi, dword ptr [eax + 0x3c]
        cmp esi, dword ptr [eax + 0x40]
        lea edi, [eax + 0x38]
        jbe short L_00666602
        call dword ptr [mem_00925134]
    L_00666602:
        mov ebx, dword ptr [edi + 0x8]
        cmp dword ptr [edi + 0x4], ebx
        jbe short L_00666610
        call dword ptr [mem_00925134]
    L_00666610:
        test edi, edi
        je short L_00666618
        cmp edi, edi
        je short L_0066661E
    L_00666618:
        call dword ptr [mem_00925134]
    L_0066661E:
        cmp esi, ebx
        je short L_0066664A
        test edi, edi
        mov ebx, dword ptr [mem_00925134]
        jne short L_0066662E
        call ebx
    L_0066662E:
        cmp esi, dword ptr [edi + 0x8]
        jb short L_00666635
        call ebx
    L_00666635:
        push esi
        lea ecx, [ebp + 0x38]
        call ext_005A6300
        cmp esi, dword ptr [edi + 0x8]
        jb short L_00666645
        call ebx
    L_00666645:
        add esi, 0x4
        jmp short L_00666602
    L_0066664A:
        mov esi, dword ptr [esp + 0x18]
    L_0066664E:
        mov ecx, esi
        call ext_006AD970
        cmp eax, 0x2
        jne short L_0066665D
        mov dword ptr [ebp + 0x4], eax
    L_0066665D:
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 0x4
    }
}

// [0x00666670] sub_00666670 (292 bytes)
extern "C" void ext_0053A700();
extern "C" void ext_00665C20();
extern "C" void ext_00666120();
extern "C" void ext_00666210();
extern "C" void ext_00666570();
extern "C" void ext_006AD190();
extern "C" void ext_006AD970();
extern "C" int mem_00925134;
extern "C" __declspec(naked) void __fastcall fn_00666670(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -0x1
        push 0x891da8
        push eax
        mov dword ptr fs:[0x0], esp
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi]
        test ecx, ecx
        push edi
        mov edi, dword ptr [esp + 0x20]
        je L_666670_nonnull
        push edi
        call ext_00666570
        mov esi, dword ptr [esi]
        mov ecx, esi
        call ext_006AD190
        cmp eax, 0x1
        jne L_666670_epilog
        mov ecx, edi
        call ext_006AD970
        push eax
        mov ecx, esi
        call ext_0053A700
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr fs:[0x0], ecx
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xc
        ret 0x4
L_666670_nonnull:
        mov ebp, edi
        mov dword ptr [esp + 0x20], ebp
        cmp dword ptr [esi + 0xc], 0x2
        mov dword ptr [esp + 0x18], 0x0
        jne L_666670_skip_a
        cmp dword ptr [esi + 0x18], 0x0
        je L_666670_skip_a
        mov eax, dword ptr [esi + 0x14]
        mov ebx, dword ptr [eax + 0x4]
        cmp ebx, eax
        jne L_666670_ok1
        call dword ptr [mem_00925134]
L_666670_ok1:
        cmp ebx, dword ptr [esi + 0x14]
        jne L_666670_ok2
        call dword ptr [mem_00925134]
L_666670_ok2:
        mov ebx, dword ptr [ebx + 0x8]
        mov eax, dword ptr [ebx]
        mov edx, dword ptr [eax + 0x8]
        mov ecx, ebx
        call edx
L_666670_skip_a:
        mov eax, dword ptr [edi]
        mov edx, dword ptr [eax + 0x4]
        mov ecx, edi
        call edx
        mov eax, dword ptr [edi]
        mov edx, dword ptr [eax + 0x10]
        mov ecx, edi
        call edx
        mov ecx, edi
        call ext_006AD970
        sub eax, 0x0
        je L_666670_case0
        sub eax, 0x1
        je L_666670_case1
        sub eax, 0x1
        jne L_666670_tail
        mov ecx, esi
        call ext_00666120
L_666670_case1:
        mov eax, dword ptr [edi]
        mov edx, dword ptr [eax]
        push 0x1
        mov ecx, edi
        call edx
        xor ebp, ebp
        jmp L_666670_tail
L_666670_case0:
        lea eax, [esi + 0x1c]
        push eax
        mov ecx, esi
        call ext_00665C20
        xor ebp, ebp
        push edi
        mov ecx, esi
        mov dword ptr [esp + 0x24], ebp
        call ext_00666210
L_666670_tail:
        test ebp, ebp
        mov dword ptr [esp + 0x18], 0xffffffff
        je L_666670_epilog
        mov edx, dword ptr [ebp]
        mov eax, dword ptr [edx]
        push 0x1
        mov ecx, ebp
        call eax
L_666670_epilog:
        mov ecx, dword ptr [esp + 0x10]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs:[0x0], ecx
        pop ebx
        add esp, 0xc
        ret 0x4
    }
}

// [0x00665570] sub_00665570 (122 bytes)
extern "C" void ext_00406510();
extern "C" void ext_006652D0();
extern "C" int mem_00925134;
extern "C" __declspec(naked) void __fastcall fn_00665570(void* self) {
    __asm {
        sub esp, 8
        push ebx
        push ebp
        mov ebp, dword ptr [mem_00925134]
        push esi
        mov esi, dword ptr [esp + 0x20]
        push edi
        mov edi, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], edi
        jbe L1
        call ebp
    L1:
        mov ebx, dword ptr [esi + 0x4]
        cmp ebx, dword ptr [esi + 0x8]
        jbe L2
        call ebp
    L2:
        push edi
        push esi
        push ebx
        push esi
        lea eax, [esp + 0x20]
        push eax
        mov ecx, esi
        call ext_00406510
        mov ecx, dword ptr [esp + 0x20]
        mov edx, dword ptr [esp + 0x1c]
        push esi
        xor eax, eax
        push eax
        push ecx
        push edx
        call ext_006652D0
        mov eax, dword ptr [esi + 0x4]
        add esp, 0x10
        test eax, eax
        jne L3
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret
    L3:
        mov esi, dword ptr [esi + 0x8]
        sub esi, eax
        mov eax, 0x92492493
        imul esi
        add edx, esi
        pop edi
        sar edx, 4
        pop esi
        mov eax, edx
        shr eax, 0x1f
        pop ebp
        add eax, edx
        pop ebx
        add esp, 8
        ret
    }
}

// [0x006655F0] sub_006655F0 (122 bytes)
extern "C" void ext_00406510();
extern "C" void ext_00665380();
extern "C" int mem_00925134;
extern "C" __declspec(naked) void __fastcall fn_006655F0(void* self) {
    __asm {
        sub esp, 8
        push ebx
        push ebp
        mov ebp, dword ptr [mem_00925134]
        push esi
        mov esi, dword ptr [esp + 0x20]
        push edi
        mov edi, dword ptr [esi + 0x8]
        cmp dword ptr [esi + 0x4], edi
        jbe L1
        call ebp
    L1:
        mov ebx, dword ptr [esi + 0x4]
        cmp ebx, dword ptr [esi + 0x8]
        jbe L2
        call ebp
    L2:
        push edi
        push esi
        push ebx
        push esi
        lea eax, [esp + 0x20]
        push eax
        mov ecx, esi
        call ext_00406510
        mov ecx, dword ptr [esp + 0x20]
        mov edx, dword ptr [esp + 0x1c]
        push esi
        xor eax, eax
        push eax
        push ecx
        push edx
        call ext_00665380
        mov eax, dword ptr [esi + 0x4]
        add esp, 0x10
        test eax, eax
        jne L3
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret
    L3:
        mov esi, dword ptr [esi + 0x8]
        sub esi, eax
        mov eax, 0x92492493
        imul esi
        add edx, esi
        pop edi
        sar edx, 4
        pop esi
        mov eax, edx
        shr eax, 0x1f
        pop ebp
        add eax, edx
        pop ebx
        add esp, 8
        ret
    }
}

// [0x00660B40] sub_00660B40 (207 bytes)
extern "C" void ext_00665570();
extern "C" int mem_00924FE0;
extern "C" int mem_00B599BC;
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00660B40(void* self) {
    __asm {
        push -0x1
        push 0x8b2753
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x20
        push ebp
        mov ebp, dword ptr [esp + 0x34]
        push esi
        push edi
        mov esi, ecx
        push ebp
        mov dword ptr [esp + 0x10], esi
        call dword ptr [mem_00924FE0]
        xor eax, eax
        lea edi, [esi + 0x1c]
        mov dword ptr [esp + 0x34], eax
        mov dword ptr [edi + 0x4], eax
        mov dword ptr [edi + 0x8], eax
        mov dword ptr [edi + 0xc], eax
        mov ecx, dword ptr [esp + 0x4c]
        mov edx, dword ptr [esp + 0x48]
        mov dword ptr [esi + 0x30], ecx
        mov ecx, dword ptr [esp + 0x44]
        mov dword ptr [esi + 0x34], edx
        mov dl, byte ptr [esp + 0x50]
        mov dword ptr [esi + 0x2c], eax
        mov dword ptr [esi + 0x38], ecx
        mov byte ptr [esi + 0x3c], dl
        mov dword ptr [esi + 0x40], eax
        mov ecx, dword ptr [mem_00B599BC]
        mov dword ptr [esi + 0x44], ecx
        mov dword ptr [esi + 0x48], eax
        mov edx, dword ptr [mem_00B599BC]
        mov dword ptr [esi + 0x4c], edx
        mov dword ptr [esi + 0x50], eax
        mov dword ptr [esi + 0x54], eax
        mov eax, dword ptr [esp + 0x40]
        push 0x92ab70
        lea ecx, [esp + 0x14]
        mov byte ptr [esp + 0x38], 0x3
        mov dword ptr [esi + 0x58], eax
        call dword ptr [mem_00924FE4]
        push edi
        lea ecx, [esp + 0x14]
        push ecx
        push ebp
        mov byte ptr [esp + 0x40], 0x4
        call ext_00665570
        add esp, 0xc
        lea ecx, [esp + 0x10]
        mov byte ptr [esp + 0x34], 0x3
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x2c]
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        mov dword ptr fs:[0x0], ecx
        add esp, 0x2c
        ret 0x18
    }
}

// [0x00665670] sub_00665670 (383 bytes)
extern "C" void ext_006651D0();
extern "C" void ext_006A5C5C();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;
extern "C" int mem_00924EA8;
extern "C" int mem_00925134;
extern "C" int mem_00924FE0;
extern "C" int mem_00924ECC;
extern "C" int mem_00924FD8;
extern "C" __declspec(naked) void __cdecl fn_00665670(void* out) {
    __asm {
        push -1
        push 008b2da3h
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        sub esp, 48h
        push ebx
        push ebp
        xor eax, eax
        push esi
        push edi
        mov dword ptr [esp+14h], eax
        mov dword ptr [esp+18h], eax
        mov dword ptr [esp+1ch], eax
        push 00941f08h
        lea ecx, [esp+24h]
        mov dword ptr [esp+64h], eax
        call dword ptr [mem_00924FE4]
        mov ebx, dword ptr [esp+68h]
        lea eax, [esp+10h]
        push eax
        lea ecx, [esp+24h]
        push ecx
        push ebx
        mov byte ptr [esp+6ch], 1
        call ext_00665570
        add esp, 0ch
        lea ecx, [esp+20h]
        mov byte ptr [esp+60h], 0
        call dword ptr [mem_00924FF4]
        mov ecx, ebx
        call dword ptr [mem_00924EA8]
        mov esi, dword ptr [esp+14h]
        cmp esi, dword ptr [esp+18h]
        jbe L_a
        call dword ptr [mem_00925134]
L_a:
        lea eax, [esp+10h]
        mov ebp, eax
LOOP_TOP:
        mov edi, dword ptr [esp+18h]
        cmp dword ptr [esp+14h], edi
        jbe L_b
        call dword ptr [mem_00925134]
L_b:
        test ebp, ebp
        je L_c
        lea edx, [esp+10h]
        cmp ebp, edx
        je L_d
L_c:
        call dword ptr [mem_00925134]
L_d:
        cmp esi, edi
        je L_end
        test ebp, ebp
        mov edi, dword ptr [mem_00925134]
        jne L_e
        call edi
L_e:
        cmp esi, dword ptr [ebp+8]
        jb L_f
        call edi
L_f:
        push esi
        lea ecx, [esp+24h]
        call dword ptr [mem_00924FE0]
        lea eax, [esp+20h]
        push eax
        mov byte ptr [esp+64h], 2
        call ext_006651D0
        add esp, 4
        cmp dword ptr [esp+34h], 0
        je L_g
        push 00941f08h
        lea ecx, [esp+40h]
        push esi
        push ecx
        call dword ptr [mem_00924ECC]
        add esp, 0ch
        push eax
        mov ecx, ebx
        mov byte ptr [esp+64h], 3
        call dword ptr [mem_00924FD8]
        lea ecx, [esp+3ch]
        mov byte ptr [esp+60h], 2
        call dword ptr [mem_00924FF4]
L_g:
        lea ecx, [esp+20h]
        mov byte ptr [esp+60h], 0
        call dword ptr [mem_00924FF4]
        cmp esi, dword ptr [ebp+8]
        jb L_h
        call edi
L_h:
        add esi, 1ch
        jmp LOOP_TOP
L_end:
        mov esi, dword ptr [esp+14h]
        test esi, esi
        mov dword ptr [esp+60h], 0ffffffffh
        je L_ret
        mov edi, dword ptr [esp+18h]
        cmp esi, edi
        je L_last
        mov edi, edi
L_dtor:
        mov ecx, esi
        call dword ptr [mem_00924FF4]
        add esi, 1ch
        cmp esi, edi
        jne L_dtor
L_last:
        mov edx, dword ptr [esp+14h]
        push edx
        call ext_006A5C5C
        add esp, 4
L_ret:
        mov ecx, dword ptr [esp+58h]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov fs:[0], ecx
        add esp, 54h
        ret
    }
}

// [0x006644E0] sub_006644E0 (127 bytes)
extern "C" void ext_00664200();
extern "C" int mem_00924FE8;
extern "C" int mem_00924EAC;
extern "C" int mem_00924FC4;
extern "C" int mem_00924FF4;
extern "C" int mem_008B56F9;
extern "C" int mem_00B590E8;

extern "C" __declspec(naked) bool __cdecl fn_006644E0(int arg0) {
    __asm {
        push    -1
        push    offset mem_008B56F9
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x1c
        push    ebx
        lea     ecx, [esp + 4]
        call    dword ptr [mem_00924FE8]
        mov     ecx, offset mem_00B590E8
        mov     dword ptr [esp + 0x28], 0
        call    dword ptr [mem_00924EAC]
        mov     ecx, dword ptr [esp + 0x30]
        push    eax
        lea     eax, [esp + 8]
        push    eax
        push    ecx
        call    ext_00664200
        lea     edx, [esp + 0x10]
        push    offset mem_00B590E8
        push    edx
        call    dword ptr [mem_00924FC4]
        add     esp, 0x14
        lea     ecx, [esp + 4]
        mov     bl, al
        mov     dword ptr [esp + 0x28], -1
        call    dword ptr [mem_00924FF4]
        mov     ecx, dword ptr [esp + 0x20]
        mov     al, bl
        pop     ebx
        mov     dword ptr fs:[0], ecx
        add     esp, 0x28
        ret
    }
}

// [0x00668000] sub_00668000 (130 bytes)
extern "C" void ext_00667C70();
extern "C" void ext_006A5C5C();
extern "C" int mem_00924FF4;
extern "C" __declspec(naked) void __fastcall fn_00668000(void* self) {
    __asm {
        push -1
        push 0x8b3059
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        sub esp, 0xc
        push esi
        push edi
        mov edi, ecx
        mov dword ptr [esp + 0x8], edi
        lea esi, [edi + 0x20]
        mov dword ptr [edi + 0x1c], 0x987a3c
        mov eax, dword ptr [esi + 0x4]
        mov ecx, dword ptr [eax]
        push eax
        push esi
        push ecx
        push esi
        lea eax, [esp + 0x1c]
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0x30], 0x0
        call ext_00667C70
        mov eax, dword ptr [esi + 0x4]
        push eax
        call ext_006A5C5C
        add esp, 0x4
        mov ecx, edi
        mov dword ptr [esi + 0x4], 0x0
        mov dword ptr [esi + 0x8], 0x0
        mov dword ptr [esp + 0x1c], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x14]
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x18
        ret
    }
}

// [0x00668470] sub_00668470 (708 bytes)
extern "C" void ext_0046FF90();
extern "C" void ext_004EF730();
extern "C" void ext_00553E80();
extern "C" void ext_0059DE00();
extern "C" void ext_00667030();
extern "C" void ext_00668000();
extern "C" void ext_006A5C5C();
extern "C" void ext_006A6DD2();
extern "C" int mem_00924FE4;
extern "C" int mem_009251C4;
extern "C" int mem_00924FE0;
extern "C" __declspec(naked) void __fastcall fn_00668470(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -0x1
        push 0x88f4c2
        push eax
        mov dword ptr fs:[0x0], esp
        mov eax, dword ptr [esp + 0x18]
        sub esp, 0x48
        cmp byte ptr [eax + 0x39], 0x0
        push ebp
        mov ebp, ecx
        je L_6684ee
        push 0x929218
        lea ecx, [esp + 0xc]
        call dword ptr [mem_00924FE4]
        lea ecx, [esp + 0x24]
        mov dword ptr [esp + 0x54], 0x0
        call dword ptr [mem_009251C4]
        lea eax, [esp + 0x8]
        push eax
        lea ecx, [esp + 0x34]
        mov byte ptr [esp + 0x58], 0x1
        mov dword ptr [esp + 0x28], 0x928ecc
        call dword ptr [mem_00924FE0]
        push 0x9ce164
        lea ecx, [esp + 0x28]
        push ecx
        mov byte ptr [esp + 0x5c], 0x0
        mov dword ptr [esp + 0x2c], 0x928ee4
        call ext_006A6DD2
    L_6684ee:
        push ebx
        push esi
        mov ebx, eax
        push edi
        lea ecx, [esp + 0x6c]
        mov dword ptr [esp + 0x10], ebx
        call ext_00667030
        mov eax, dword ptr [ebx]
        cmp byte ptr [eax + 0x39], 0x0
        je L_66850d
        mov edi, dword ptr [ebx + 0x8]
        jmp L_668525
    L_66850d:
        mov edx, dword ptr [ebx + 0x8]
        cmp byte ptr [edx + 0x39], 0x0
        je L_66851a
        mov edi, eax
        jmp L_668525
    L_66851a:
        mov ecx, dword ptr [esp + 0x70]
        cmp ecx, ebx
        mov edi, dword ptr [ecx + 0x8]
        jne L_668590
    L_668525:
        cmp byte ptr [edi + 0x39], 0x0
        mov esi, dword ptr [ebx + 0x4]
        jne L_668531
        mov dword ptr [edi + 0x4], esi
    L_668531:
        mov eax, dword ptr [ebp + 0x4]
        cmp dword ptr [eax + 0x4], ebx
        jne L_66853e
        mov dword ptr [eax + 0x4], edi
        jmp L_668549
    L_66853e:
        cmp dword ptr [esi], ebx
        jne L_668546
        mov dword ptr [esi], edi
        jmp L_668549
    L_668546:
        mov dword ptr [esi + 0x8], edi
    L_668549:
        mov ebx, dword ptr [ebp + 0x4]
        mov eax, dword ptr [ebx]
        cmp eax, dword ptr [esp + 0x10]
        jne L_668569
        cmp byte ptr [edi + 0x39], 0x0
        je L_66855e
        mov eax, esi
        jmp L_668567
    L_66855e:
        push edi
        call ext_0059DE00
        add esp, 0x4
    L_668567:
        mov dword ptr [ebx], eax
    L_668569:
        mov ebx, dword ptr [ebp + 0x4]
        mov ecx, dword ptr [esp + 0x10]
        cmp dword ptr [ebx + 0x8], ecx
        jne L_6685e7
        cmp byte ptr [edi + 0x39], 0x0
        je L_668582
        mov eax, esi
        mov dword ptr [ebx + 0x8], eax
        jmp L_6685e7
    L_668582:
        push edi
        call ext_00553E80
        add esp, 0x4
        mov dword ptr [ebx + 0x8], eax
        jmp L_6685e7
    L_668590:
        mov dword ptr [eax + 0x4], ecx
        mov edx, dword ptr [ebx]
        mov dword ptr [ecx], edx
        cmp ecx, dword ptr [ebx + 0x8]
        jne L_6685a0
        mov esi, ecx
        jmp L_6685ba
    L_6685a0:
        cmp byte ptr [edi + 0x39], 0x0
        mov esi, dword ptr [ecx + 0x4]
        jne L_6685ac
        mov dword ptr [edi + 0x4], esi
    L_6685ac:
        mov dword ptr [esi], edi
        mov eax, dword ptr [ebx + 0x8]
        mov dword ptr [ecx + 0x8], eax
        mov edx, dword ptr [ebx + 0x8]
        mov dword ptr [edx + 0x4], ecx
    L_6685ba:
        mov eax, dword ptr [ebp + 0x4]
        cmp dword ptr [eax + 0x4], ebx
        jne L_6685c7
        mov dword ptr [eax + 0x4], ecx
        jmp L_6685d5
    L_6685c7:
        mov eax, dword ptr [ebx + 0x4]
        cmp dword ptr [eax], ebx
        jne L_6685d2
        mov dword ptr [eax], ecx
        jmp L_6685d5
    L_6685d2:
        mov dword ptr [eax + 0x8], ecx
    L_6685d5:
        mov eax, dword ptr [ebx + 0x4]
        mov dword ptr [ecx + 0x4], eax
        mov dl, byte ptr [ebx + 0x38]
        mov al, byte ptr [ecx + 0x38]
        mov byte ptr [ecx + 0x38], dl
        mov byte ptr [ebx + 0x38], al
    L_6685e7:
        mov eax, dword ptr [esp + 0x10]
        mov bl, 0x1
        cmp byte ptr [eax + 0x38], bl
        jne L_6686e8
        mov ecx, dword ptr [ebp + 0x4]
        cmp edi, dword ptr [ecx + 0x4]
        je L_6686e5
    L_668602:
        cmp byte ptr [edi + 0x38], bl
        jne L_6686e5
        mov eax, dword ptr [esi]
        cmp edi, eax
        jne L_668674
        mov eax, dword ptr [esi + 0x8]
        cmp byte ptr [eax + 0x38], 0x0
        jne L_66862c
        mov byte ptr [eax + 0x38], bl
        push esi
        mov ecx, ebp
        mov byte ptr [esi + 0x38], 0x0
        call ext_0046FF90
        mov eax, dword ptr [esi + 0x8]
    L_66862c:
        cmp byte ptr [eax + 0x39], 0x0
        jne L_6686a4
        mov edx, dword ptr [eax]
        cmp byte ptr [edx + 0x38], bl
        jne L_668641
        mov ecx, dword ptr [eax + 0x8]
        cmp byte ptr [ecx + 0x38], bl
        je L_6686a0
    L_668641:
        mov ecx, dword ptr [eax + 0x8]
        cmp byte ptr [ecx + 0x38], bl
        jne L_66865b
        mov byte ptr [edx + 0x38], bl
        push eax
        mov ecx, ebp
        mov byte ptr [eax + 0x38], 0x0
        call ext_004EF730
        mov eax, dword ptr [esi + 0x8]
    L_66865b:
        mov cl, byte ptr [esi + 0x38]
        mov byte ptr [eax + 0x38], cl
        mov byte ptr [esi + 0x38], bl
        mov edx, dword ptr [eax + 0x8]
        push esi
        mov ecx, ebp
        mov byte ptr [edx + 0x38], bl
        call ext_0046FF90
        jmp L_6686e5
    L_668674:
        cmp byte ptr [eax + 0x38], 0x0
        jne L_66868b
        mov byte ptr [eax + 0x38], bl
        push esi
        mov ecx, ebp
        mov byte ptr [esi + 0x38], 0x0
        call ext_004EF730
        mov eax, dword ptr [esi]
    L_66868b:
        cmp byte ptr [eax + 0x39], 0x0
        jne L_6686a4
        mov edx, dword ptr [eax + 0x8]
        cmp byte ptr [edx + 0x38], bl
        jne L_6686b7
        mov ecx, dword ptr [eax]
        cmp byte ptr [ecx + 0x38], bl
        jne L_6686b7
    L_6686a0:
        mov byte ptr [eax + 0x38], 0x0
    L_6686a4:
        mov edx, dword ptr [ebp + 0x4]
        mov edi, esi
        cmp edi, dword ptr [edx + 0x4]
        mov esi, dword ptr [esi + 0x4]
        jne L_668602
        jmp L_6686e5
    L_6686b7:
        mov ecx, dword ptr [eax]
        cmp byte ptr [ecx + 0x38], bl
        jne L_6686cf
        mov byte ptr [edx + 0x38], bl
        push eax
        mov ecx, ebp
        mov byte ptr [eax + 0x38], 0x0
        call ext_0046FF90
        mov eax, dword ptr [esi]
    L_6686cf:
        mov cl, byte ptr [esi + 0x38]
        mov byte ptr [eax + 0x38], cl
        mov byte ptr [esi + 0x38], bl
        mov edx, dword ptr [eax]
        push esi
        mov ecx, ebp
        mov byte ptr [edx + 0x38], bl
        call ext_004EF730
    L_6686e5:
        mov byte ptr [edi + 0x38], bl
    L_6686e8:
        mov ecx, dword ptr [esp + 0x10]
        add ecx, 0xc
        call ext_00668000
        mov eax, dword ptr [esp + 0x10]
        push eax
        call ext_006A5C5C
        mov eax, dword ptr [ebp + 0x8]
        add esp, 0x4
        test eax, eax
        pop edi
        pop esi
        pop ebx
        jbe L_668711
        add eax, -0x1
        mov dword ptr [ebp + 0x8], eax
    L_668711:
        mov ecx, dword ptr [esp + 0x60]
        mov eax, dword ptr [esp + 0x5c]
        mov edx, dword ptr [esp + 0x64]
        mov dword ptr [eax], ecx
        mov ecx, dword ptr [esp + 0x4c]
        mov dword ptr [eax + 0x4], edx
        pop ebp
        mov dword ptr fs:[0x0], ecx
        add esp, 0x54
        ret 0xc
    }
}

// [0x00668A90] sub_00668A90 (203 bytes)
extern "C" void ext_00667030();
extern "C" void ext_00668470();
extern "C" void ext_00668740();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_00668A90(void* self, int edx_unused, void* out, void* a2, void* a3, void* a4, void* a5) {
    __asm {
        sub esp, 8
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr [esp + 0x20]
        test edi, edi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x4]
        mov ebp, dword ptr [eax]
        je L_668AA4
        cmp edi, esi
        je L_668AB0
    L_668AA4:
        call dword ptr [mem_00925134]
    L_668AB0:
        mov ebx, dword ptr [esp + 0x24]
        cmp ebx, ebp
        jne L_668B11
        mov eax, dword ptr [esp + 0x28]
        test eax, eax
        mov ebp, dword ptr [esi + 0x4]
        je L_668AC7
        cmp eax, esi
        je L_668ACD
    L_668AC7:
        call dword ptr [mem_00925134]
    L_668ACD:
        cmp dword ptr [esp + 0x2c], ebp
        jne L_668B11
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [ecx + 0x4]
        push edx
        mov ecx, esi
        call ext_00668740
        mov eax, dword ptr [esi + 0x4]
        mov dword ptr [eax + 0x4], eax
        mov eax, dword ptr [esi + 0x4]
        mov dword ptr [esi + 0x8], 0
        mov dword ptr [eax], eax
        mov eax, dword ptr [esi + 0x4]
        mov dword ptr [eax + 0x8], eax
        mov eax, dword ptr [esi + 0x4]
        mov ecx, dword ptr [eax]
        mov eax, dword ptr [esp + 0x1c]
        pop edi
        mov dword ptr [eax], esi
        pop esi
        pop ebp
        mov dword ptr [eax + 0x4], ecx
        pop ebx
        add esp, 8
        ret 0x14
    L_668B11:
        test edi, edi
        je L_668B1B
        cmp edi, dword ptr [esp + 0x28]
        je L_668B21
    L_668B1B:
        call dword ptr [mem_00925134]
    L_668B21:
        cmp ebx, dword ptr [esp + 0x2c]
        je L_668B48
        lea ecx, [esp + 0x20]
        call ext_00667030
        push ebx
        push edi
        lea edx, [esp + 0x18]
        push edx
        mov ecx, esi
        call ext_00668470
        mov ebx, dword ptr [esp + 0x24]
        mov edi, dword ptr [esp + 0x20]
        jmp L_668B11
    L_668B48:
        mov eax, dword ptr [esp + 0x1c]
        mov dword ptr [eax], edi
        pop edi
        pop esi
        pop ebp
        mov dword ptr [eax + 0x4], ebx
        pop ebx
        add esp, 8
        ret 0x14
    }
}

// [0x00667D40] sub_00667D40 (134 bytes)
extern "C" void ext_00667BB0();

extern "C" __declspec(naked) void __fastcall fn_00667D40(void* self) {
    __asm {
        push    ebx
        mov     ebx, dword ptr [esp + 0x8]
        mov     eax, dword ptr [ebx + 0x4]
        push    esi
        push    edi
        mov     esi, ecx
        mov     edi, dword ptr [esi + 0x4]
        add     eax, 0x4
        mov     eax, dword ptr [eax]
        push    edi
        push    eax
        call    ext_00667BB0
        mov     dword ptr [edi + 0x4], eax
        mov     ecx, dword ptr [ebx + 0x8]
        mov     edx, dword ptr [esi + 0x4]
        mov     dword ptr [esi + 0x8], ecx
        mov     eax, dword ptr [edx + 0x4]
        cmp     byte ptr [eax + 0xc1], 0x0
        jne     loc_667DB8
        mov     ecx, dword ptr [eax]
        cmp     byte ptr [ecx + 0xc1], 0x0
        jne     loc_667D8D
        mov     edi, edi
    loc_667D80:
        mov     eax, ecx
        mov     ecx, dword ptr [eax]
        cmp     byte ptr [ecx + 0xc1], 0x0
        je      loc_667D80
    loc_667D8D:
        mov     dword ptr [edx], eax
        mov     esi, dword ptr [esi + 0x4]
        mov     ecx, dword ptr [esi + 0x4]
        mov     eax, dword ptr [ecx + 0x8]
        cmp     byte ptr [eax + 0xc1], 0x0
        jne     loc_667DAF
    loc_667DA1:
        mov     ecx, eax
        mov     eax, dword ptr [ecx + 0x8]
        cmp     byte ptr [eax + 0xc1], 0x0
        je      loc_667DA1
    loc_667DAF:
        pop     edi
        mov     dword ptr [esi + 0x8], ecx
        pop     esi
        pop     ebx
        ret     0x4
    loc_667DB8:
        mov     dword ptr [edx], edx
        mov     esi, dword ptr [esi + 0x4]
        pop     edi
        mov     dword ptr [esi + 0x8], esi
        pop     esi
        pop     ebx
        ret     0x4
    }
}

// [0x00667810] sub_00667810 (141 bytes)
extern "C" void ext_006668B0();
extern "C" void ext_00667810();
extern "C" void ext_006A5C5C();
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_00667810(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x8b2fe9
        push eax
        mov dword ptr fs:[0x0], esp
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr [esp + 0x20]
        cmp byte ptr [edi + 0xc1], 0
        mov ebx, ecx
        mov esi, edi
        jne done_
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
    loop_:
        mov eax, dword ptr [esi + 0x8]
        push eax
        mov ecx, ebx
        call ext_00667810
        mov esi, dword ptr [esi]
        lea ebp, [edi + 0xc]
        mov dword ptr [esp + 0x20], ebp
        lea ecx, [ebp + 0x1c]
        mov dword ptr [esp + 0x18], 0
        call ext_006668B0
        mov ecx, ebp
        mov dword ptr [esp + 0x18], -1
        call dword ptr [mem_00924FF4]
        push edi
        call ext_006A5C5C
        add esp, 4
        cmp byte ptr [esi + 0xc1], 0
        mov edi, esi
        je loop_
    done_:
        mov ecx, dword ptr [esp + 0x10]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs:[0x0], ecx
        pop ebx
        add esp, 0xc
        ret 4
    }
}

// [0x00667C70] sub_00667C70 (203 bytes)
extern "C" void ext_004442E0();
extern "C" void ext_00667490();
extern "C" void ext_00667810();
extern "C" int mem_00925134;

extern "C" __declspec(naked) void __fastcall fn_00667C70(void* self, int edx_unused, void* out, void* a2, void* a3, void* a4, void* a5) {
    __asm {
        sub esp, 8
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr [esp + 0x20]
        test edi, edi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x4]
        mov ebp, dword ptr [eax]
        je L_667C8A
        cmp edi, esi
        je L_667C90
    L_667C8A:
        call dword ptr [mem_00925134]
    L_667C90:
        mov ebx, dword ptr [esp + 0x24]
        cmp ebx, ebp
        jne L_667CF1
        mov eax, dword ptr [esp + 0x28]
        test eax, eax
        mov ebp, dword ptr [esi + 0x4]
        je L_667CA7
        cmp eax, esi
        je L_667CAD
    L_667CA7:
        call dword ptr [mem_00925134]
    L_667CAD:
        cmp dword ptr [esp + 0x2c], ebp
        jne L_667CF1
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [ecx + 0x4]
        push edx
        mov ecx, esi
        call ext_00667810
        mov eax, dword ptr [esi + 0x4]
        mov dword ptr [eax + 0x4], eax
        mov eax, dword ptr [esi + 0x4]
        mov dword ptr [esi + 0x8], 0
        mov dword ptr [eax], eax
        mov eax, dword ptr [esi + 0x4]
        mov dword ptr [eax + 0x8], eax
        mov eax, dword ptr [esi + 0x4]
        mov ecx, dword ptr [eax]
        mov eax, dword ptr [esp + 0x1c]
        pop edi
        mov dword ptr [eax], esi
        pop esi
        pop ebp
        mov dword ptr [eax + 0x4], ecx
        pop ebx
        add esp, 8
        ret 0x14
    L_667CF1:
        test edi, edi
        je L_667CFB
        cmp edi, dword ptr [esp + 0x28]
        je L_667D01
    L_667CFB:
        call dword ptr [mem_00925134]
    L_667D01:
        cmp ebx, dword ptr [esp + 0x2c]
        je L_667D28
        lea ecx, [esp + 0x20]
        call ext_004442E0
        push ebx
        push edi
        lea edx, [esp + 0x18]
        push edx
        mov ecx, esi
        call ext_00667490
        mov ebx, dword ptr [esp + 0x24]
        mov edi, dword ptr [esp + 0x20]
        jmp L_667CF1
    L_667D28:
        mov eax, dword ptr [esp + 0x1c]
        mov dword ptr [eax], edi
        pop edi
        pop esi
        pop ebp
        mov dword ptr [eax + 0x4], ebx
        pop ebx
        add esp, 8
        ret 0x14
    }
}

// [0x006604E0] sub_006604E0 (475 bytes)
extern "C" void ext_00401CC0();
extern "C" void ext_0041CF50();
extern "C" void ext_0065F610();
extern "C" void ext_00660210();
extern "C" void ext_00660340();
extern "C" void ext_00671F30();
extern "C" void ext_00675670();
extern "C" void ext_00677A60();
extern "C" void ext_006798D0();
extern "C" int mem_00B599BC;

extern "C" __declspec(naked) char __fastcall fn_006604E0(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, fs:[0x0]
        push -0x1
        push 0x8b26e8
        push eax
        mov eax, dword ptr [esp + 0x10]
        mov fs:[0x0], esp
        sub esp, 0x10
        push ebx
        push esi
        push edi
        push 0x1
        push eax
        mov esi, ecx
        call ext_00660340
        lea edi, [esi + 0x1c]
        mov ebx, eax
        mov eax, dword ptr [edi + 0x4]
        test eax, eax
        je L_66066B
        mov ecx, dword ptr [edi + 0x8]
        sub ecx, eax
        mov eax, 0x92492493
        imul ecx
        add edx, ecx
        sar edx, 0x4
        mov ecx, edx
        shr ecx, 0x1f
        add ecx, edx
        je L_66066B
        mov eax, dword ptr [edi + 0x4]
        test eax, eax
        je L_660556
        mov ecx, dword ptr [edi + 0x8]
        sub ecx, eax
        mov eax, 0x92492493
        imul ecx
        add edx, ecx
        sar edx, 0x4
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
    L_660556:
        cmp dword ptr [esi + 0x2c], eax
        jge L_66066B
        test ebx, ebx
        push ebp
        je L_6605A7
        mov ebp, dword ptr [ebx]
        mov ecx, edi
        call ext_00660210
        push eax
        mov eax, dword ptr [ebp + 0x8]
        lea edx, [esp + 0x14]
        push edx
        mov ecx, ebx
        call eax
        push eax
        lea ecx, [esi + 0x40]
        mov dword ptr [esp + 0x2c], 0x0
        call ext_0041CF50
        mov ecx, dword ptr [esp + 0x14]
        test ecx, ecx
        mov dword ptr [esp + 0x28], 0xffffffff
        je L_6605A7
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x78]
        lea eax, [esp + 0x10]
        push eax
        call edx
    L_6605A7:
        mov eax, dword ptr [esi + 0x44]
        test eax, eax
        lea ebp, [esi + 0x40]
        je L_6605B9
        cmp eax, dword ptr [mem_00B599BC]
        jne L_660619
    L_6605B9:
        test ebx, ebx
        jne L_660603
        cmp dword ptr [esi + 0x50], ebx
        je L_660619
        call ext_00675670
        test eax, eax
        je L_660619
        mov ecx, dword ptr [esi + 0x2c]
        mov edx, dword ptr [esi + 0x50]
        push ecx
        push edi
        push edx
        lea ecx, [esp + 0x1c]
        push ecx
        mov ecx, eax
        call ext_00677A60
        push eax
        mov ecx, ebp
        mov dword ptr [esp + 0x2c], 0x1
        call ext_0041CF50
        lea ecx, [esp + 0x10]
        mov dword ptr [esp + 0x28], 0xffffffff
        call ext_00401CC0
        jmp L_660619
    L_660603:
        call ext_006798D0
        push eax
        mov ecx, edi
        call ext_00660210
        push eax
        push ebx
        mov ecx, esi
        call ext_0065F610
    L_660619:
        mov ebp, dword ptr [ebp + 0x4]
        test ebp, ebp
        je L_660648
        cmp ebp, dword ptr [mem_00B599BC]
        je L_660648
        pop ebp
        xor eax, eax
        xor edx, edx
        test al, al
        pop edi
        sete dl
        pop esi
        mov al, dl
        pop ebx
        mov ecx, dword ptr [esp + 0x10]
        mov fs:[0x0], ecx
        add esp, 0x1c
        ret 0x4
    L_660648:
        pop ebp
        mov eax, 0x1
        xor edx, edx
        test al, al
        pop edi
        sete dl
        pop esi
        mov al, dl
        pop ebx
        mov ecx, dword ptr [esp + 0x10]
        mov fs:[0x0], ecx
        add esp, 0x1c
        ret 0x4
    L_66066B:
        lea eax, [esp + 0x14]
        push eax
        call ext_00671F30
        add esp, 0x4
        push eax
        lea ecx, [esi + 0x40]
        mov dword ptr [esp + 0x28], 0x2
        call ext_0041CF50
        mov ecx, dword ptr [esp + 0x18]
        test ecx, ecx
        mov dword ptr [esp + 0x24], 0xffffffff
        je L_6606A5
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x78]
        lea eax, [esp + 0x14]
        push eax
        call edx
    L_6606A5:
        mov ecx, dword ptr [esp + 0x1c]
        pop edi
        pop esi
        xor al, al
        pop ebx
        mov fs:[0x0], ecx
        add esp, 0x1c
        ret 0x4
    }
}

// [0x00660770] sub_00660770 (245 bytes)
extern "C" void ext_004AC060();
extern "C" void ext_006604E0();
extern "C" void ext_00672060();

extern "C" __declspec(naked) void __fastcall fn_00660770(void* self) {
    __asm {
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], 0x0
        mov eax, dword ptr [esi + 0x30]
        test eax, eax
        je L_66078d
        push eax
        call ext_006604E0
        test al, al
        jne L_6607bd
    L_66078d:
        mov eax, dword ptr [esi + 0x34]
        test eax, eax
        je L_6607ae
        push eax
        mov ecx, esi
        call ext_006604E0
        test al, al
        je L_6607ae
        cmp dword ptr [esi + 0x54], 0x0
        jne L_6607bd
        mov eax, dword ptr [esi + 0x34]
        mov dword ptr [esi + 0x54], eax
        jmp L_6607bd
    L_6607ae:
        mov eax, dword ptr [esi + 0x38]
        test eax, eax
        je L_6607bd
        push eax
        mov ecx, esi
        call ext_006604E0
    L_6607bd:
        push edi
        mov edi, dword ptr [esi + 0x54]
        test edi, edi
        je L_66081d
        mov eax, dword ptr [esi + 0x58]
        test eax, eax
        je L_66081d
        mov ecx, dword ptr [eax + 0x4]
        test ecx, ecx
        je L_66081d
        mov edx, dword ptr [eax + 0x8]
        sub edx, ecx
        sar edx, 0x2
        je L_66081d
        _emit 0x8d
        _emit 0x49
        _emit 0x00
    L_6607e0:
        mov eax, dword ptr [edi]
        mov edx, dword ptr [eax + 0x14]
        mov ecx, edi
        call edx
        test al, al
        jne L_660800
        mov eax, dword ptr [edi]
        mov edx, dword ptr [eax + 0x10]
        push 0x0
        mov ecx, edi
        call edx
        mov edi, eax
        test edi, edi
        jne L_6607e0
        jmp L_66081d
    L_660800:
        mov ecx, dword ptr [esi + 0x58]
        lea eax, [esp + 0x8]
        push eax
        mov dword ptr [esp + 0xc], edi
        call ext_004AC060
        test al, al
        jne L_66081d
        lea ecx, [esi + 0x40]
        call ext_00672060
    L_66081d:
        add esi, 0x40
        cmp dword ptr [esi + 0x4], 0x0
        pop edi
        lea eax, [esp + 0x4]
        je L_66084a
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 0x70]
        push esi
        push eax
        call edx
        mov ecx, dword ptr [eax]
        mov eax, dword ptr [esp + 0xc]
        mov edx, dword ptr [esi + 0x4]
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 0x4], edx
        pop esi
        pop ecx
        ret 0x4
    L_66084a:
        mov edx, dword ptr [esi + 0x4]
        mov dword ptr [esp + 0x4], 0x0
        mov ecx, dword ptr [eax]
        mov eax, dword ptr [esp + 0xc]
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 0x4], edx
        pop esi
        pop ecx
        ret 0x4
    }
}

// [0x006652D0] sub_006652D0 (167 bytes)
extern "C" void ext_0040ECB0();
extern "C" int mem_00925030;
extern "C" int mem_00925034;
extern "C" int mem_00925120;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void fn_006652D0() {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 0x008b56f9
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x1c
        push ebx
        mov ebx, dword ptr [esp + 0x30]
        push ebp
        mov ebp, dword ptr [esp + 0x38]
        push esi
        push edi
        push 0x0
        push ebp
        mov ecx, ebx
        call dword ptr [mem_00925030]
        mov esi, eax
        push esi
        push ebp
        mov ecx, ebx
        call dword ptr [mem_00925034]
        mov edi, eax
        cmp esi, edi
        jae short L_done
    L_loop:
        mov eax, edi
        sub eax, esi
        push eax
        push esi
        lea ecx, [esp + 0x18]
        push ecx
        mov ecx, ebx
        call dword ptr [mem_00925120]
        mov ecx, dword ptr [esp + 0x48]
        push eax
        mov dword ptr [esp + 0x38], 0x0
        call ext_0040ECB0
        lea ecx, [esp + 0x10]
        mov dword ptr [esp + 0x34], -1
        call dword ptr [mem_00924FF4]
        push edi
        push ebp
        mov ecx, ebx
        call dword ptr [mem_00925030]
        mov esi, eax
        push esi
        push ebp
        mov ecx, ebx
        call dword ptr [mem_00925034]
        mov edi, eax
        cmp esi, edi
        jb short L_loop
    L_done:
        mov ecx, dword ptr [esp + 0x2c]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs:[0x0], ecx
        add esp, 0x28
        ret
    }
}
