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

// [0x00499440] NMData::Transition::vfunc_21 (277 bytes)
extern "C" void ext_00498B60();
extern "C" void ext_004990C0();
extern "C" void ext_00499370();
extern "C" int mem_00925134;
extern "C" int mem_0094B858;

extern "C" __declspec(naked) bool __fastcall fn_00499440(void* self, int edx_unused, int arg) {
    __asm {
        sub esp, 0x28
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr [edi + 0x88]
        test eax, eax
        jne L_nonzero
        xor ebx, ebx
        jmp L_count_done
    L_nonzero:
        mov ebx, dword ptr [edi + 0x8c]
        sub ebx, eax
        sar ebx, 0x3
    L_count_done:
        mov ebp, dword ptr [esp + 0x3c]
        xor esi, esi
        test ebx, ebx
        jle L_after_loop
    L_loop:
        mov ecx, dword ptr [edi + 0x88]
        test ecx, ecx
        je L_invalid
        mov eax, dword ptr [edi + 0x8c]
        sub eax, ecx
        sar eax, 0x3
        cmp esi, eax
        jb L_index_ok
    L_invalid:
        call dword ptr [mem_00925134]
    L_index_ok:
        mov eax, dword ptr [edi + 0x88]
        mov ecx, dword ptr [eax + 8*esi]
        mov edx, dword ptr [eax + 8*esi + 0x4]
        lea eax, [eax + 8*esi]
        mov dword ptr [esp + 0x10], ecx
        fld dword ptr [esp + 0x10]
        fld st(0)
        mov dword ptr [esp + 0x14], edx
        fld dword ptr [mem_0094B858]
        push ebp
        fld st(0)
        lea eax, [esp + 0x2c]
        _emit 0xde
        _emit 0xea
        push eax
        _emit 0xd9
        _emit 0xc9
        lea ecx, [esp + 0x20]
        fstp dword ptr [esp + 0x20]
        fld dword ptr [esp + 0x1c]
        fld st(0)
        _emit 0xd8
        _emit 0xe2
        fstp dword ptr [esp + 0x24]
        _emit 0xd9
        _emit 0xc1
        _emit 0xde
        _emit 0xc3
        _emit 0xd9
        _emit 0xca
        fstp dword ptr [esp + 0x28]
        _emit 0xde
        _emit 0xc1
        fstp dword ptr [esp + 0x2c]
        call ext_00498B60
        mov ecx, eax
        fld dword ptr [ecx + 0x8]
        fsub dword ptr [ecx]
        fstp dword ptr [esp + 0x3c]
        fld dword ptr [esp + 0x3c]
        _emit 0xd9
        _emit 0xee
        _emit 0xd8
        _emit 0xd1
        fnstsw ax
        _emit 0xdd
        _emit 0xd9
        test ah, 0x1
        je L_skip_first
        fld dword ptr [ecx + 0xc]
        fsub dword ptr [ecx + 0x4]
        fstp dword ptr [esp + 0x3c]
        fcomp dword ptr [esp + 0x3c]
        fnstsw ax
        test ah, 0x1
        je L_next
        pop edi
        pop esi
        pop ebp
        mov al, 0x1
        pop ebx
        add esp, 0x28
        ret 0x4
    L_skip_first:
        _emit 0xdd
        _emit 0xd8
    L_next:
        add esi, 0x1
        cmp esi, ebx
        jl L_loop
    L_after_loop:
        push ebp
        lea ecx, [esp + 0x2c]
        push ecx
        mov ecx, edi
        call ext_00499370
        mov ecx, eax
        call ext_004990C0
        pop edi
        pop esi
        test al, al
        pop ebp
        setne al
        pop ebx
        add esp, 0x28
        ret 0x4
    }
}
