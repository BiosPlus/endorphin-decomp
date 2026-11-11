// Decompiled translation unit: src/NMData/State.cpp

extern "C" void ext_006829A0();

// [0x008702F0] NMData::State::vfunc_1_off_18 (12 bytes)
extern "C" __declspec(naked) void fn_008702F0() {
    __asm {
        mov ecx, dword ptr [esp + 0x4]
        call ext_006829A0
        ret 0x8
    }
}

extern "C" void ext_004A14D0();

// [0x004A17B0] NMData::State::vfunc_37_off_8 (16 bytes)
extern "C" void __fastcall fn_004A17B0(void* self) {
    void* p = (char*)self - 8;
    void* obj = *(void**)((char*)self + 0xf4);
    ((void (__thiscall *)(void*, void*))ext_004A14D0)(obj, p);
}

extern "C" void ext_0049ED70();

// [0x0049F240] NMData::State::vfunc_1_off_10 (28 bytes)
extern "C" void* __fastcall fn_0049F240(void* self, int edx_unused, int a1) {
    void* r = ((void* (__thiscall *)(void*, int))ext_0049ED70)((char*)self - 0x10, a1);
    if (r != 0) {
        return (char*)r + 0x10;
    }
    return 0;
}

// [0x0049AC80] NMData::State::vfunc_4_off_10 (34 bytes)
extern "C" void* __fastcall fn_0049AC80(void* self, int edx_unused, unsigned char a1) {
    if (a1 != 0) {
        if (*((char*)self + 0x54) != 0) {
            return 0;
        }
    }
    void* p = *(void**)((char*)self + 0xec);
    if (p != 0) {
        return (char*)p + 0x10;
    }
    return 0;
}

extern "C" int mem_00AA237C;
extern "C" int mem_00924FE4;

// [0x0049FA70] NMData::State::vfunc_6 (35 bytes)
extern "C" __declspec(naked) void* __fastcall fn_0049FA70(void* self, int edx_unused, void* a1) {
    __asm {
        push ecx
        mov eax, dword ptr [mem_00AA237C]
        push esi
        mov esi, dword ptr [esp + 0xc]
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0x8], 0x0
        call dword ptr [mem_00924FE4]
        mov eax, esi
        pop esi
        pop ecx
        ret 0x4
    }
}

// [0x0049FAC0] NMData::State::vfunc_2_off_8 (42 bytes)
extern "C" __declspec(naked) void* __fastcall fn_0049FAC0(void* self, int edx_unused, void* out) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        mov edx, dword ptr [ecx + 0xe0]
        mov dword ptr [eax], edx
        mov edx, dword ptr [ecx + 0xe4]
        mov dword ptr [eax + 0x4], edx
        mov edx, dword ptr [ecx + 0xe8]
        mov ecx, dword ptr [ecx + 0xec]
        mov dword ptr [eax + 0x8], edx
        mov dword ptr [eax + 0xc], ecx
        ret 0x4
    }
}

// [0x0049FAF0] NMData::State::vfunc_18_off_8 (42 bytes)
extern "C" void __fastcall fn_0049FAF0(void* self, int edx_unused, const int* a1) {
    unsigned char* p = (unsigned char*)self;
    *(int*)(p + 0xe0) = a1[0];
    *(int*)(p + 0xe4) = a1[1];
    *(int*)(p + 0xe8) = a1[2];
    *(int*)(p + 0xec) = a1[3];
}

// [0x0049ABE0] NMData::State::vfunc_35_off_8 (56 bytes)
extern "C" void ext_006A6E9E();

extern "C" __declspec(naked) void __fastcall fn_0049ABE0(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        push esi
        push 0x0
        push 0xa30418
        push 0xa303f4
        push 0x0
        push eax
        mov esi, ecx
        call ext_006A6E9E
        add esp, 0x14
        test eax, eax
        je L_end
        mov ecx, dword ptr [esp + 0x8]
        mov edx, dword ptr [eax]
        mov edx, dword ptr [edx + 0x28]
        add esi, -0x8
        push esi
        push ecx
        mov ecx, eax
        call edx
    L_end:
        pop esi
        ret 0x8
    }
}

extern "C" void ext_0046F7D0();
extern "C" void ext_0049D360();
extern "C" void ext_0055DA20();

// [0x0049DF50] NMData::State::vfunc_14_off_10 (77 bytes)
extern "C" __declspec(naked) void* __fastcall fn_0049DF50(void* self, int edx_unused, void* a1, int a2) {
    __asm {
        push ecx
        cmp byte ptr [ecx + 0x54], 0x0
        push esi
        mov dword ptr [esp + 0x4], 0x0
        je short L_store_0049DF50
    L_call_0049DF50:
        mov esi, dword ptr [esp + 0xc]
        push esi
        call ext_0046F7D0
        add esp, 0x4
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    L_store_0049DF50:
        cmp dword ptr [esp + 0x10], 0x1b3
        jne short L_call_0049DF50
        add ecx, 0x10c
        push ecx
        call ext_0049D360
        mov esi, dword ptr [esp + 0x10]
        push eax
        mov ecx, esi
        call ext_0055DA20
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    }
}

// [0x0049AF70] NMData::State::vfunc_10_off_8 (84 bytes)
extern "C" __declspec(naked) bool __fastcall fn_0049AF70(void* self, int edx_unused, const float* a1) {
    __asm {
        mov edx, dword ptr [esp + 0x4]
        fld dword ptr [edx]
        fld dword ptr [ecx + 0xe0]
        fcompp
        fnstsw ax
        test ah, 0x41
        jp SHORT L49AF70_fail
        fld dword ptr [edx]
        fld dword ptr [ecx + 0xe8]
        fcompp
        fnstsw ax
        test ah, 0x1
        jne SHORT L49AF70_fail
        fld dword ptr [edx + 0x4]
        fld dword ptr [ecx + 0xe4]
        fcompp
        fnstsw ax
        test ah, 0x41
        jp SHORT L49AF70_fail
        fld dword ptr [edx + 0x4]
        fld dword ptr [ecx + 0xec]
        fcompp
        fnstsw ax
        test ah, 0x1
        jne SHORT L49AF70_fail
        mov al, 0x1
        ret 0x4
    L49AF70_fail:
        xor al, al
        ret 0x4
    }
}

// [0x0049E860] NMData::State::vfunc_2_off_10 (112 bytes)
extern "C" void ext_0049E2F0();
extern "C" void ext_0041CF00();
extern "C" void ext_00671F30();

extern "C" __declspec(naked) void* __fastcall fn_0049E860(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        push ecx
        cmp dword ptr [ecx + 0x11c], 0x0
        mov edx, dword ptr [esp + 0xc]
        push esi
        mov dword ptr [esp + 0x4], 0x0
        push edx
        je zero_path
        mov ecx, dword ptr [ecx + 0x11c]
        mov eax, dword ptr [ecx]
        mov esi, dword ptr [esp + 0x10]
        mov eax, dword ptr [eax + 0x8]
        push esi
        call eax
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    zero_path:
        add ecx, 0x10c
        call ext_0049E2F0
        test eax, eax
        je fail_path
        lea ecx, [eax + 0x4]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        call edx
        mov esi, dword ptr [esp + 0xc]
        push eax
        mov ecx, esi
        call ext_0041CF00
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    fail_path:
        mov esi, dword ptr [esp + 0xc]
        push esi
        call ext_00671F30
        add esp, 0x4
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    }
}
