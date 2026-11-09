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
