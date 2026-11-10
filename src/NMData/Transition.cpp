// Decompiled translation unit: src/NMData/Transition.cpp

extern "C" void ext_004871D0();
extern "C" void ext_0049ED40();
extern "C" void ext_00505F00();
extern "C" void ext_00498A50();

// [0x00496FE0] NMData::Transition::vfunc_1_off_8 (30 bytes)
extern "C" __declspec(naked) void __fastcall fn_00496FE0(void* self) {
    __asm {
        cmp dword ptr [ecx + 0xb0], 0x0
        je L_null
        mov eax, dword ptr [ecx + 0xb0]
        lea ecx, [eax + 0x10]
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0x4]
        jmp eax
    L_null:
        jmp ext_004871D0
    }
}

// [0x00497090] NMData::Transition::vfunc_37 (13 bytes)
extern "C" __declspec(naked) void __fastcall fn_00497090(void* self) {
    __asm {
        push ecx
        mov ecx, dword ptr [ecx + 0xb8]
        call ext_0049ED40
        ret
    }
}

// [0x00499CE0] NMData::Transition::vfunc_30 (19 bytes)
extern "C" __declspec(naked) void __fastcall fn_00499CE0(void* self) {
    __asm {
        add ecx, 0x84
        push ecx
        mov ecx, dword ptr [esp + 0x8]
        call ext_00505F00
        ret 0x4
    }
}

// [0x00498B40] NMData::Transition::vfunc_9 (26 bytes)
extern "C" int __fastcall fn_00498B40(void* self, int edx_unused, int a1) {
    typedef int (__stdcall *FnT)(int);
    int r = ((FnT)ext_00498A50)(a1);
    return (r != -1) ? 2 : 1;
}

// [0x00499AF0] NMData::Transition::vfunc_6_off_10 (35 bytes)
extern "C" int mem_00A9F354;
extern "C" int mem_00924FE4;
extern "C" __declspec(naked) void* __fastcall fn_00499AF0(void* self, int edx_unused, void* a1) {
    __asm {
        push ecx
        mov eax, dword ptr [mem_00A9F354]
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

// [0x00497000] NMData::Transition::vfunc_4_off_8 (38 bytes)
extern "C" __declspec(naked) void* __fastcall fn_00497000(void* self, int edx_unused, void* a1) {
    __asm {
        cmp dword ptr [ecx + 0xb0], 0x0
        je L_null
        mov eax, dword ptr [ecx + 0xb0]
        lea ecx, [eax + 0x10]
        mov eax, dword ptr [ecx]
        mov dword ptr [esp + 0x4], 0x0
        mov edx, dword ptr [eax + 0x10]
        jmp edx
    L_null:
        xor eax, eax
        ret 0x4
    }
}

// [0x004972E0] NMData::Transition::vfunc_35 (53 bytes)
extern "C" void ext_006A6E9E();

extern "C" __declspec(naked) void __fastcall fn_004972E0(void* self) {
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
        mov edx, dword ptr [edx + 0x2c]
        push esi
        push ecx
        mov ecx, eax
        call edx
    L_end:
        pop esi
        ret 0x8
    }
}

// [0x00497680] NMData::Transition::vfunc_12 (66 bytes)
extern "C" int mem_00925134;
extern "C" __declspec(naked) void __fastcall fn_00497680(void* self, int edx_unused, int* out, int idx) {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x88]
        test ecx, ecx
        push edi
        mov edi, dword ptr [esp + 0x10]
        je L_fail
        mov eax, dword ptr [esi + 0x8c]
        sub eax, ecx
        sar eax, 0x3
        cmp edi, eax
        jb L_ok
    L_fail:
        call dword ptr [mem_00925134]
    L_ok:
        mov esi, dword ptr [esi + 0x88]
        mov ecx, dword ptr [esi + edi*8]
        mov edx, dword ptr [esi + edi*8 + 0x4]
        mov eax, dword ptr [esp + 0xc]
        pop edi
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 0x4], edx
        pop esi
        ret 0x8
    }
}

// [0x004991A0] NMData::Transition::vfunc_15_off_8 (59 bytes)
extern "C" void ext_00499130();
extern "C" void ext_00671F30();

extern "C" __declspec(naked) void* __fastcall fn_004991A0(void* self, int edx_unused, void* a1, int a2) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0xc]
        sub eax, 0x2
        push esi
        mov esi, dword ptr [esp + 0xc]
        mov dword ptr [esp + 0x4], 0x0
        je L_eq
        push esi
        call ext_00671F30
        add esp, 0x4
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    L_eq:
        add ecx, 0x60
        push ecx
        push esi
        call ext_00499130
        add esp, 0x8
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    }
}
