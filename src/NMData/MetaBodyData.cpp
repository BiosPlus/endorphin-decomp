// Decompiled translation unit: src/NMData/MetaBodyData.cpp

// [0x005B6880] NMData::MetaBodyData::vfunc_6_off_C (74 bytes)
extern "C" void ext_005B11F0();

extern "C" __declspec(naked) void __fastcall fn_005B6880(void* self, int edx_unused, float* out) {
    __asm {
        mov eax, dword ptr [ecx + 0x14c]
        sub esp, 0x10
        test eax, eax
        je short L_end
        lea ecx, [eax + 0x24]
        call ext_005B11F0
        fld dword ptr [eax]
        fstp dword ptr [esp]
        fld dword ptr [eax + 0x4]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [eax + 0x8]
        mov eax, dword ptr [esp + 0x14]
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp]
        fstp dword ptr [eax]
        fld dword ptr [esp + 0x4]
        fstp dword ptr [eax + 0x4]
        fld dword ptr [esp + 0x8]
        fstp dword ptr [eax + 0x8]
        fldz
        fstp dword ptr [eax + 0xc]
    L_end:
        add esp, 0x10
        ret 0x4
    }
}

// [0x005B6E70] NMData::MetaBodyData::vfunc_36 (143 bytes)
extern "C" __declspec(naked) void __fastcall fn_005B6E70(void* self, int edx_unused, float* scale) {
    __asm {
        sub esp, 0x10
        push edi
        mov edi, ecx
        cmp dword ptr [edi + 0x158], 0x0
        je short L_end
        fldz
        mov eax, dword ptr [edi + 0xc]
        mov edx, dword ptr [eax + 0x18]
        fst dword ptr [esp + 0x10]
        push ebx
        fst dword ptr [esp + 0x10]
        push esi
        fst dword ptr [esp + 0x10]
        lea esi, [edi + 0xc]
        fstp dword ptr [esp + 0xc]
        lea ecx, [esp + 0xc]
        push ecx
        mov ecx, esi
        call edx
        mov eax, dword ptr [esp + 0x20]
        fld dword ptr [eax]
        mov ebx, dword ptr [edi + 0x158]
        fmul dword ptr [esp + 0xc]
        lea ecx, [esp + 0xc]
        push ecx
        mov ecx, esi
        fstp dword ptr [esp + 0x10]
        fld dword ptr [eax]
        fmul dword ptr [esp + 0x14]
        fstp dword ptr [esp + 0x14]
        fld dword ptr [eax]
        mov eax, dword ptr [esi]
        fmul dword ptr [esp + 0x18]
        mov edx, dword ptr [eax + 0x14]
        fstp dword ptr [esp + 0x18]
        call edx
        cmp dword ptr [edi + 0x10], 0x0
        je short L_pop
        mov edi, dword ptr [edi + 0x10]
        mov esi, dword ptr [edi]
        lea ecx, [ebx + 0x24]
        call ext_005B11F0
        push eax
        mov eax, dword ptr [esi + 0x34]
        mov ecx, edi
        call eax
    L_pop:
        pop esi
        pop ebx
    L_end:
        pop edi
        add esp, 0x10
        ret 0x4
    }
}

// [0x005B6F00] NMData::MetaBodyData::vfunc_38 (182 bytes)
extern "C" void ext_005B11F0();

extern "C" __declspec(naked) void __fastcall fn_005B6F00(void* self, int edx_unused, float* scale) {
    __asm {
        sub esp, 0x10
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 0x158], 0x0
        je L_end
        fldz
        mov eax, dword ptr [esi + 0xc]
        mov edx, dword ptr [eax + 0x18]
        fst dword ptr [esp + 0x10]
        push ebx
        fst dword ptr [esp + 0x10]
        push edi
        fst dword ptr [esp + 0x10]
        lea edi, [esi + 0xc]
        fstp dword ptr [esp + 0xc]
        lea ecx, [esp + 0xc]
        push ecx
        mov ecx, edi
        call edx
        mov ebx, dword ptr [esi + 0x158]
        mov eax, dword ptr [ebx + 0x2c]
        add ebx, 0x24
        cmp eax, 0x5
        jne L_t4
        mov eax, dword ptr [esp + 0x20]
        fld dword ptr [eax]
        fmul dword ptr [esp + 0x10]
        fstp dword ptr [esp + 0x10]
        jmp L_set
    L_t4:
        cmp eax, 0x4
        jne L_t2
        mov ecx, dword ptr [esp + 0x20]
        fld dword ptr [ecx]
        fmul dword ptr [esp + 0x10]
        fstp dword ptr [esp + 0x10]
        jmp L_set
    L_t2:
        cmp eax, 0x2
        jne L_set
        mov edx, dword ptr [esp + 0x20]
        fld dword ptr [edx]
        fmul dword ptr [esp + 0x14]
        fstp dword ptr [esp + 0x14]
    L_set:
        mov eax, dword ptr [edi]
        mov edx, dword ptr [eax + 0x14]
        lea ecx, [esp + 0xc]
        push ecx
        mov ecx, edi
        call edx
        cmp dword ptr [esi + 0x10], 0x0
        je L_pop
        mov eax, dword ptr [esi + 0x10]
        mov edi, dword ptr [eax]
        mov ecx, ebx
        add edi, 0x34
        call ext_005B11F0
        mov ecx, dword ptr [esi + 0x10]
        mov edx, dword ptr [edi]
        push eax
        call edx
    L_pop:
        pop edi
        pop ebx
    L_end:
        pop esi
        add esp, 0x10
        ret 0x4
    }
}

// [0x005C01A0] NMData::MetaBodyData::vfunc_4_off_C (85 bytes)
extern "C" void ext_005B1AB0();
extern "C" void ext_005BEDD0();
extern "C" void ext_005BFA80();

extern "C" __declspec(naked) void __fastcall fn_005C01A0(void* self, int edx_unused, void* a1) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x14c]
        test eax, eax
        je L_ret
        push ebx
        mov ebx, dword ptr [esp + 0xc]
        push edi
        lea edi, [eax + 0x24]
        push ebx
        mov ecx, edi
        call ext_005B1AB0
        cmp dword ptr [esi + 0x4], 0
        je L_skip
        mov eax, dword ptr [esi + 0x4]
        push ebp
        mov ebp, dword ptr [eax]
        mov ecx, edi
        call ext_005B11F0
        mov ecx, dword ptr [esi + 0x4]
        mov edx, dword ptr [ebp + 0x34]
        push eax
        call edx
        pop ebp
    L_skip:
        push ebx
        add esi, -0xc
        push edi
        mov ecx, esi
        call ext_005BFA80
        push ebx
        mov ecx, esi
        call ext_005BEDD0
        pop edi
        pop ebx
    L_ret:
        pop esi
        ret 0x4
    }
}

// [0x005BFBD0] NMData::MetaBodyData::vfunc_5_off_C (188 bytes)
extern "C" void ext_005B11F0();
extern "C" void ext_005B1B60();
extern "C" void ext_005BFA80();

extern "C" __declspec(naked) void __fastcall fn_005BFBD0(void* self, int edx_unused, const float* arg) {
    __asm {
        sub esp, 0x20
        push edi
        mov edi, ecx
        mov eax, dword ptr [edi + 0x14c]
        test eax, eax
        je L_end
        push ebx
        push esi
        lea esi, [eax + 0x24]
        mov ecx, esi
        call ext_005B11F0
        fld dword ptr [eax]
        mov ebx, dword ptr [esp + 0x30]
        fstp dword ptr [esp + 0xc]
        fld dword ptr [eax + 4]
        push ebx
        fstp dword ptr [esp + 0x14]
        mov ecx, esi
        fld dword ptr [eax + 8]
        fstp dword ptr [esp + 0x18]
        call ext_005B1B60
        fldz
        mov eax, dword ptr [esi + 8]
        cmp eax, 4
        fst dword ptr [esp + 0x28]
        fstp dword ptr [esp + 0x20]
        je L45
        cmp eax, 5
        je L45
        fld dword ptr [ebx]
        fdiv dword ptr [esp + 0xc]
        fstp dword ptr [esp + 0x1c]
        fld dword ptr [ebx + 4]
        fdiv dword ptr [esp + 0x10]
        fstp dword ptr [esp + 0x20]
        fld dword ptr [ebx + 8]
        fdiv dword ptr [esp + 0x14]
        jmp L56
    L45:
        fld dword ptr [ebx]
        fdiv dword ptr [esp + 0xc]
        fstp dword ptr [esp + 0x1c]
        fld dword ptr [ebx + 4]
        fdiv dword ptr [esp + 0x10]
    L56:
        cmp dword ptr [edi + 4], 0
        fstp dword ptr [esp + 0x24]
        je L75
        mov eax, dword ptr [edi + 4]
        mov ebx, dword ptr [eax]
        mov ecx, esi
        call ext_005B11F0
        mov ecx, dword ptr [edi + 4]
        mov edx, dword ptr [ebx + 0x34]
        push eax
        call edx
    L75:
        lea eax, [esp + 0x1c]
        push eax
        push esi
        lea ecx, [edi - 0xc]
        call ext_005BFA80
        pop esi
        pop ebx
    L_end:
        pop edi
        add esp, 0x20
        ret 4
    }
}

// [0x005BFC90] NMData::MetaBodyData::vfunc_14 (335 bytes)
extern "C" void ext_0058F6B0();
extern "C" void ext_00661650();
extern "C" void ext_00673C20();
extern "C" int mem_00925134;
extern "C" __declspec(naked) void __fastcall fn_005BFC90(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -8
        sub esp, 0xc
        mov eax, [ebp+0xc]
        sub eax, 0x39
        push ebx
        push esi
        push edi
        mov [esp+0xc], ecx
        mov dword ptr [esp+0x10], 0
        je L_ce2
        sub eax, 0x53
        je L_d53
        sub eax, 0x2c
        jne L_dc7
        mov eax, [ecx+0x158]
        test eax, eax
        je L_ce2
    L_ccc:
        mov esi, [ebp+8]
        push eax
        mov ecx, esi
        call ext_00661650
        mov eax, esi
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 8
    L_ce2:
        mov eax, [ecx+0x160]
        mov eax, [eax]
        lea edi, [ecx+0x15c]
        mov esi, edi
        mov [esp+0x10], esi
        mov [esp+0x14], eax
        _emit 0x8d
        _emit 0x9b
        _emit 0
        _emit 0
        _emit 0
        _emit 0
    L_d00:
        test esi, esi
        mov ebx, [edi+4]
        je L_d0b
        cmp esi, edi
        je L_d11
    L_d0b:
        call dword ptr [mem_00925134]
    L_d11:
        cmp [esp+0x14], ebx
        je L_d4f
        test esi, esi
        jne L_d21
        call dword ptr [mem_00925134]
    L_d21:
        mov ecx, [esp+0x14]
        cmp ecx, [esi+4]
        jne L_d30
        call dword ptr [mem_00925134]
    L_d30:
        mov edx, [esp+0x14]
        mov eax, [edx+0x28]
        cmp dword ptr [eax+0x15c], 0
        je L_ccc
        lea ecx, [esp+0x10]
        call ext_00673C20
        mov esi, [esp+0x10]
        jmp L_d00
    L_d4f:
        mov ecx, [esp+0xc]
    L_d53:
        mov eax, [ecx+0x16c]
        mov eax, [eax]
        lea edi, [ecx+0x168]
        mov esi, edi
        mov [esp+0x10], esi
        mov [esp+0x14], eax
        jmp L_d70
        _emit 0x8d
        _emit 0x49
        _emit 0
    L_d70:
        test esi, esi
        mov ebx, [edi+4]
        je L_d7b
        cmp esi, edi
        je L_d81
    L_d7b:
        call dword ptr [mem_00925134]
    L_d81:
        cmp [esp+0x14], ebx
        je L_dc3
        test esi, esi
        jne L_d91
        call dword ptr [mem_00925134]
    L_d91:
        mov ecx, [esp+0x14]
        cmp ecx, [esi+4]
        jne L_da0
        call dword ptr [mem_00925134]
    L_da0:
        mov edx, [esp+0x14]
        mov eax, [edx+0x28]
        cmp dword ptr [eax+0x15c], 0
        je L_ccc
        lea ecx, [esp+0x10]
        call ext_00673C20
        mov esi, [esp+0x10]
        jmp L_d70
    L_dc3:
        mov ecx, [esp+0xc]
    L_dc7:
        mov eax, [ebp+0xc]
        mov esi, [ebp+8]
        push eax
        push esi
        call ext_0058F6B0
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 8
    }
}

// [0x005B8D90] NMData::MetaBodyData::vfunc_3 (267 bytes)
extern "C" void ext_00435D00();
extern "C" int mem_00924E4C;
extern "C" int mem_00924E94;
extern "C" int mem_00B4171C;
extern "C" int mem_00924FF4;
extern "C" int mem_00924E54;
extern "C" int mem_00924E58;
extern "C" __declspec(naked) void __fastcall fn_005B8D90(void* self) {
    __asm {
        push -1
        push 0x889b98
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0xa0
        push esi
        push edi
        push 1
        mov esi, ecx
        push 2
        lea ecx, [esp + 0x30]
        mov dword ptr [esp + 0x10], 0
        call dword ptr [mem_00924E4C]
        mov eax, dword ptr [esi + 0x20c]
        mov eax, dword ptr [eax + 0x18c]
        mov edx, dword ptr [eax + 0x4]
        mov edx, dword ptr [edx + 0xc]
        lea ecx, [eax + 0x4]
        lea eax, [esp + 0xc]
        push eax
        mov dword ptr [esp + 0xb4], 1
        call edx
        mov edi, eax
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x24]
        mov ecx, esi
        mov byte ptr [esp + 0xb0], 2
        call edx
        mov esi, dword ptr [mem_00924E94]
        push eax
        mov eax, dword ptr [mem_00B4171C]
        push 0x92ab70
        push eax
        push 0x92ab70
        lea ecx, [esp + 0x38]
        push edi
        push ecx
        call esi
        add esp, 0x8
        push eax
        call ext_00435D00
        add esp, 0x8
        push eax
        call ext_00435D00
        add esp, 0x8
        push eax
        call ext_00435D00
        add esp, 0x8
        push eax
        call esi
        add esp, 0x8
        lea ecx, [esp + 0xc]
        mov byte ptr [esp + 0xb0], 1
        call dword ptr [mem_00924FF4]
        mov esi, dword ptr [esp + 0xb8]
        push esi
        lea ecx, [esp + 0x2c]
        call dword ptr [mem_00924E54]
        lea ecx, [esp + 0x28]
        mov dword ptr [esp + 0x8], 1
        mov byte ptr [esp + 0xb0], 0
        call dword ptr [mem_00924E58]
        mov ecx, dword ptr [esp + 0xa8]
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0xac
        ret 0x4
    }
}

// [0x005B64A0] NMData::MetaBodyData::vfunc_2 (32 bytes)
extern "C" void ext_0058A370();

extern "C" __declspec(naked) int __fastcall fn_005B64A0(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0xc]
        push esi
        mov esi, dword ptr [esp + 0xc]
        push eax
        push esi
        mov dword ptr [esp + 0xc], 0
        call ext_0058A370
        mov eax, esi
        pop esi
        pop ecx
        ret 8
    }
}

// [0x005C00E0] NMData::MetaBodyData::vfunc_33 (178 bytes)
extern "C" void ext_0050BE20();
extern "C" void ext_005A0910();
extern "C" void ext_005AE480();
extern "C" void ext_0058A1A0();

extern "C" __declspec(naked) void __fastcall fn_005C00E0(void* self) {
    __asm {
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr [edi + 0x158]
        test ecx, ecx
        je loc_005C00F6
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        call edx
loc_005C00F6:
        lea ecx, [edi + 0x174]
        mov dword ptr [edi + 0x158], 0
        call ext_0050BE20
        mov eax, dword ptr [edi + 0x160]
        mov ecx, dword ptr [eax]
        lea esi, [edi + 0x15c]
        push eax
        push esi
        push ecx
        push esi
        mov ecx, esi
        call ext_005A0910
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [eax + 4]
        push ecx
        mov ecx, esi
        call ext_005AE480
        mov eax, dword ptr [esi + 4]
        mov dword ptr [eax + 4], eax
        mov eax, dword ptr [esi + 4]
        mov dword ptr [esi + 8], 0
        mov dword ptr [eax], eax
        mov esi, dword ptr [esi + 4]
        mov dword ptr [esi + 8], esi
        mov eax, dword ptr [edi + 0x16c]
        mov ecx, dword ptr [eax]
        lea esi, [edi + 0x168]
        push eax
        push esi
        push ecx
        push esi
        mov ecx, esi
        call ext_005A0910
        mov edx, dword ptr [esi + 4]
        mov eax, dword ptr [edx + 4]
        push eax
        mov ecx, esi
        call ext_005AE480
        mov eax, dword ptr [esi + 4]
        mov dword ptr [eax + 4], eax
        mov eax, dword ptr [esi + 4]
        mov dword ptr [esi + 8], 0
        mov dword ptr [eax], eax
        mov esi, dword ptr [esi + 4]
        mov ecx, edi
        pop edi
        mov dword ptr [esi + 8], esi
        pop esi
        jmp ext_0058A1A0
    }
}

// [0x005B8D00] NMData::MetaBodyData::vfunc_34 (144 bytes)
extern "C" void ext_00493E40();
extern "C" void ext_00528B90();
extern "C" void ext_005B5AF0();

extern "C" __declspec(naked) void __fastcall fn_005B8D00(void* self, int edx_unused, int a1) {
    __asm {
        push -1
        push 0x88d648
        mov eax, fs:[0]
        push eax
        mov fs:[0], esp
        push ecx
        push ebx
        push esi
        xor eax, eax
        push edi
        mov esi, ecx
        mov dword ptr [esp + 0xc], eax
        mov ebx, dword ptr [esi + 0x158]
        lea ecx, [esi + 0x4]
        push eax
        mov dword ptr [esp + 0x1c], eax
        cmp ebx, eax
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x2c]
        lea edi, [esi + 0xc]
        push edi
        je short L_else
        call edx
        mov ecx, dword ptr [esp + 0x28]
        push eax
        add ebx, 0x24
        push ebx
        call ext_00493E40
        mov esi, dword ptr [esi + 0x158]
        add esi, 0x24
        mov dword ptr [eax + 0x20], esi
        jmp short L_join
    L_else:
        call edx
        push eax
        call ext_005B5AF0
        mov ecx, dword ptr [esp + 0x2c]
        push eax
        call ext_00493E40
    L_join:
        mov ebx, eax
        push ebx
        mov ecx, edi
        mov dword ptr [esp + 0x10], ebx
        call ext_00528B90
        mov ecx, dword ptr [esp + 0x10]
        pop edi
        pop esi
        mov eax, ebx
        pop ebx
        mov fs:[0], ecx
        add esp, 0x10
        ret 0x4
    }
}

// [0x005C16C0] NMData::MetaBodyData::vfunc_0_off_154 (233 bytes)
extern "C" void ext_005C1310();
extern "C" void ext_00647F00();
extern "C" void ext_00647FB0();
extern "C" void ext_0067DAD0();
extern "C" int mem_00B40640;

extern "C" __declspec(naked) void __fastcall fn_005C16C0(void* self) {
    __asm {
        sub esp, 0x28
        push ebx
        mov ebx, ecx
        cmp dword ptr [ebx + 0x4], 0x0
        je L_end
        fldz
        mov eax, dword ptr [ebx - 0x150]
        mov edx, dword ptr [mem_00B40640]
        fst dword ptr [esp + 0x10]
        mov eax, dword ptr [eax + 0x14]
        fst dword ptr [esp + 0xc]
        fst dword ptr [esp + 0x1c]
        push esi
        fst dword ptr [esp + 0x18]
        lea ecx, [ebx - 0x150]
        fst dword ptr [esp + 0x28]
        push edi
        fstp dword ptr [esp + 0x28]
        push edx
        fld1
        fst dword ptr [esp + 0x14]
        fst dword ptr [esp + 0x24]
        fstp dword ptr [esp + 0x34]
        call eax
        lea ecx, [esp + 0x10]
        mov esi, eax
        push ecx
        mov ecx, esi
        call ext_0067DAD0
        mov edx, dword ptr [ebx + 0x4]
        mov ecx, dword ptr [edx + 0xac]
        call ext_00647F00
        mov edi, eax
        mov ecx, 0x10
        rep movsd
        mov ecx, dword ptr [ebx + 0x4]
        mov ecx, dword ptr [ecx + 0xac]
        lea eax, [esp + 0x10]
        push eax
        call ext_00647FB0
        mov edx, dword ptr [ebx + 0xb8]
        mov eax, dword ptr [edx + 0x18c]
        pop edi
        fld dword ptr [eax + 0x604]
        pop esi
        fstp dword ptr [esp + 0x4]
        fldz
        fld dword ptr [esp + 0x4]
        fcom st(1)
        fnstsw ax
        test ah, 0x5
        jp L_b
        fstp st(0)
    L_d:
        fstp dword ptr [esp + 0x4]
        jmp L_c
    L_b:
        fstp st(1)
        fld1
        fcom st(1)
        fnstsw ax
        fstp st(1)
        test ah, 0x5
        jnp L_d
        fstp st(0)
    L_c:
        fld dword ptr [esp + 0x4]
        push ecx
        mov ecx, dword ptr [mem_00B40640]
        fstp dword ptr [esp]
        push ecx
        lea ecx, [ebx - 0x154]
        call ext_005C1310
    L_end:
        pop ebx
        add esp, 0x28
        ret
    }
}
