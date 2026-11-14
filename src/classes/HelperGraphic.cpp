// Decompiled translation unit: src/classes/HelperGraphic.cpp

// [0x005F5750] HelperGraphic::vfunc_8_off_C (32 bytes)
extern "C" void __fastcall fn_005F5750(unsigned char* self, int edx_unused, unsigned char a1) {
    unsigned char v;
    if (self[0x201] != 0 && a1 != 0) {
        v = 1;
    } else {
        v = 0;
    }
    self[0x5c] = v;
}

// [0x005F5220] HelperGraphic::vfunc_14 (30 bytes)
extern "C" void ext_0046F7D0();
extern "C" __declspec(naked) void* __fastcall fn_005F5220(void* self, int edx_unused, void* a1, int a2) {
    __asm {
        push ecx
        push esi
        mov esi, dword ptr [esp + 0xc]
        push esi
        mov dword ptr [esp + 0x8], 0x0
        call ext_0046F7D0
        add esp, 0x4
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    }
}

// [0x0058F670] HelperGraphic::vfunc_15_off_4 (58 bytes)
extern "C" void ext_00661A70();
extern "C" __declspec(naked) void __fastcall fn_0058F670(void* self, int edx_unused, void* a1) {
    __asm {
        push esi
        mov esi, ecx
        lea eax, [esi - 0x4]
        test eax, eax
        je short L_null_path
        mov ecx, dword ptr [esp + 0x8]
        lea eax, [esi + 0x14c]
        push eax
        call ext_00661A70
        mov dword ptr [esi + 0xe4], eax
        pop esi
        ret 0x4
L_null_path:
        mov ecx, dword ptr [esp + 0x8]
        xor eax, eax
        push eax
        call ext_00661A70
        mov dword ptr [esi + 0xe4], eax
        pop esi
        ret 0x4
    }
}

// [0x005F57B0] HelperGraphic::vfunc_0_off_158 (34 bytes)
extern "C" void ext_005F5410();
extern "C" __declspec(naked) void __fastcall fn_005F57B0(void* self, int edx_unused, void* a1) {
    __asm {
        add ecx, 0xfffffea8
        call ext_005F5410
        fld dword ptr [eax]
        mov ecx, dword ptr [esp + 0x4]
        fstp dword ptr [ecx]
        fld dword ptr [eax + 0x4]
        fstp dword ptr [ecx + 0x4]
        fld dword ptr [eax + 0x8]
        fstp dword ptr [ecx + 0x8]
        ret 0x4
    }
}

// [0x005F5770] HelperGraphic::vfunc_0_off_15C (56 bytes)
extern "C" void ext_00661B10();
extern "C" void ext_00661D30();
extern "C" void ext_005F53E0();
extern "C" __declspec(naked) void __fastcall fn_005F5770(void* self, int edx_unused, void* a1) {
    __asm {
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 0x44], 0x7fffffff
        je short L_done
        push edi
        mov edi, dword ptr [esp + 0xc]
        mov ecx, edi
        call ext_00661B10
        test al, al
        jne short L_pop_edi
        mov eax, dword ptr [esi + 0x44]
        push eax
        mov ecx, edi
        call ext_00661D30
        push eax
        lea ecx, [esi - 0x15c]
        call ext_005F53E0
L_pop_edi:
        pop edi
L_done:
        pop esi
        ret 0x4
    }
}

// [0x005F5A80] HelperGraphic::vfunc_21 (274 bytes)
extern "C" void ext_004275E0();
extern "C" void ext_0046C0A0();
extern "C" void ext_00532A10();
extern "C" void ext_0058F630();
extern "C" void ext_005F5240();
extern "C" void ext_0063EFE0();
extern "C" void ext_0063F530();
extern "C" int mem_00A9F944;
extern "C" int mem_00924FE8;
extern "C" int mem_00A9F06C;
extern "C" int mem_00924FF4;

extern "C" __declspec(naked) void __fastcall fn_005F5A80(void* self, int edx_unused, void* a1) {
    __asm {
        push -0x1
        push 0x8b56f9
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x1c
        push esi
        push edi
        mov edi, dword ptr [esp + 0x34]
        push edi
        mov esi, ecx
        call ext_0058F630
        push 0x96cce0
        mov ecx, edi
        call ext_0063EFE0
        push eax
        lea eax, [esi + 0x1a4]
        push eax
        call ext_004275E0
        mov ecx, dword ptr [mem_00A9F944]
        add esp, 0x8
        push ecx
        mov ecx, edi
        call ext_0063EFE0
        lea edx, [esp + 0x34]
        mov dword ptr [esp + 0x34], eax
        push edx
        lea eax, [esi + 0x160]
        push eax
        call ext_0046C0A0
        add esp, 0x8
        lea ecx, [esp + 0x8]
        call dword ptr [mem_00924FE8]
        push 0x96ccd4
        mov ecx, edi
        mov dword ptr [esp + 0x30], 0x0
        call ext_0063EFE0
        push eax
        lea ecx, [esp + 0xc]
        push ecx
        call ext_004275E0
        add esp, 0x8
        lea edx, [esp + 0x8]
        push edx
        mov ecx, esi
        call ext_005F5240
        push 0x1
        mov dword ptr [esi + 0x210], eax
        mov eax, dword ptr [mem_00A9F06C]
        push 0x0
        push eax
        mov ecx, edi
        call ext_0063F530
        cmp eax, 0xb53a34
        je short L_set_default
        cmp eax, 0xb53b30
        je short L_set_default
        cmp eax, 0xb53ab0
        je short L_set_default
        cmp eax, 0xb53a70
        je short L_set_default
        cmp eax, 0xb53af0
        jne short L_after_cmp
L_set_default:
        mov eax, 0xb53b30
L_after_cmp:
        push 0x0
        push eax
        lea ecx, [esi + 0x168]
        call ext_00532A10
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x2c], 0xffffffff
        call dword ptr [mem_00924FF4]
        mov ecx, dword ptr [esp + 0x24]
        pop edi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x28
        ret 0x4
    }
}

// [0x005FB420] HelperGraphic::vfunc_0_off_150 (158 bytes)
extern "C" void ext_00466910();
extern "C" void ext_00466F00();
extern "C" void ext_00661B10();
extern "C" void ext_00661F10();
extern "C" int mem_00B40640;

extern "C" __declspec(naked) void __fastcall fn_005FB420(void* self) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -0x1
        push 0x896578
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x64
        push esi
        mov esi, ecx
        mov ecx, dword ptr [mem_00B40640]
        test ecx, ecx
        je short L_done
        call ext_00661B10
        test al, al
        jne short L_done
        mov eax, dword ptr [mem_00B40640]
        push edi
        push eax
        lea ecx, [esp + 0x10]
        mov dword ptr [esp + 0xc], eax
        call ext_00466F00
        mov ecx, dword ptr [mem_00B40640]
        mov dword ptr [esp + 0x74], 0x0
        call ext_00661F10
        mov eax, dword ptr [esi - 0x14c]
        mov edx, dword ptr [mem_00B40640]
        mov eax, dword ptr [eax + 0x8]
        lea ecx, [esi - 0x14c]
        push edx
        call eax
        mov edi, dword ptr [esp + 0x7c]
        mov esi, eax
        mov ecx, 0x10
        rep movsd
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x74], 0xffffffff
        call ext_00466910
        pop edi
L_done:
        mov ecx, dword ptr [esp + 0x68]
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x70
        ret 0x4
    }
}

// [0x005F52A0] HelperGraphic::vfunc_22 (172 bytes)
extern "C" void ext_0058F650();
extern "C" void ext_00640110();
extern "C" void ext_00427550();
extern "C" void ext_00640BC0();
extern "C" void ext_00640390();
extern "C" void ext_005329A0();
extern "C" int mem_00924FF0;
extern "C" int mem_00A9F944;
extern "C" int mem_00A9F06C;
extern "C" __declspec(naked) void* __fastcall fn_005F52A0(void* self, int edx_unused, int a1) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        push edi
        mov esi, ecx
        call ext_0058F650
        push 0x96cce0
        mov ecx, edi
        call ext_00640110
        lea ecx, [esi + 0x1a4]
        mov dword ptr [esp + 0xc], eax
        call dword ptr [mem_00924FF0]
        push eax
        lea ecx, [esp + 0x10]
        call ext_00427550
        mov eax, dword ptr [mem_00A9F944]
        push eax
        mov ecx, edi
        call ext_00640110
        fld dword ptr [esi + 0x160]
        push ecx
        fstp dword ptr [esp]
        push eax
        call ext_00640BC0
        add esp, 0x8
        push 0x96ccd4
        mov ecx, edi
        call ext_00640110
        mov ecx, dword ptr [esi + 0x210]
        lea edx, [ecx * 8]
        sub edx, ecx
        lea ecx, [edx * 4 + 0xb46f80]
        mov dword ptr [esp + 0xc], eax
        call dword ptr [mem_00924FF0]
        push eax
        lea ecx, [esp + 0x10]
        call ext_00427550
        mov eax, dword ptr [mem_00A9F06C]
        push 0x0
        push eax
        mov ecx, edi
        call ext_00640390
        push eax
        lea ecx, [esi + 0x168]
        call ext_005329A0
        mov eax, edi
        pop edi
        pop esi
        ret 0x4
    }
}

// [0x005FB240] HelperGraphic::vfunc_10 (137 bytes)
extern "C" void ext_005B6610();
extern "C" void ext_005F5280();
extern "C" void ext_005F5350();
extern "C" void ext_005F53A0();
extern "C" void ext_005F54A0();
extern "C" void ext_005F5BA0();
extern "C" void ext_006A6E9E();
extern "C" int mem_00A36F20;
extern "C" int mem_00A2E2F8;

extern "C" __declspec(naked) void __fastcall fn_005FB240(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        push edi
        push 0x0
        push offset mem_00A36F20
        push offset mem_00A2E2F8
        push 0x0
        push eax
        mov esi, ecx
        call ext_006A6E9E
        mov edi, eax
        add esp, 0x14
        test edi, edi
        je short L_done
        lea ecx, [edi + 0x168]
        push ecx
        lea ecx, [esi + 0x168]
        call ext_005F5350
        fld dword ptr [edi + 0x160]
        push ecx
        mov ecx, esi
        fstp dword ptr [esp]
        call ext_005F53A0
        lea edx, [edi + 0x1a4]
        push edx
        mov ecx, esi
        call ext_005F54A0
        mov ecx, edi
        call ext_005F5280
        push eax
        mov ecx, esi
        call ext_005F5BA0
        mov al, byte ptr [edi + 0x20d]
        push edi
        mov ecx, esi
        mov byte ptr [esi + 0x20d], al
        call ext_005B6610
        mov esi, dword ptr [esi + 0x10]
        test esi, esi
        je short L_done
        mov byte ptr [esi + 0x4], 0x1
L_done:
        pop edi
        pop esi
        ret 0x4
    }
}

// [0x00592860] HelperGraphic::vfunc_17_off_C (153 bytes)
extern "C" void ext_00586D00();
extern "C" void ext_0058F2F0();
extern "C" void ext_006A5C62();

extern "C" __declspec(naked) void* __fastcall fn_00592860(void* self) {
    __asm {
        push -1
        push 0x8a7a5b
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        push edi
        push 0x154
        mov edi, ecx
        call ext_006A5C62
        mov esi, eax
        add esp, 4
        mov dword ptr [esp + 8], esi
        test esi, esi
        mov dword ptr [esp + 0x14], 0
        je L_null
        lea eax, [edi - 0xc]
        push eax
        mov ecx, esi
        call ext_0058F2F0
        mov dword ptr [esi + 0x150], 0x928eac
        mov dword ptr [esi], 0x92912c
        mov dword ptr [esi + 4], 0x9290e4
        mov dword ptr [esi + 8], 0x9290a4
        mov dword ptr [esi + 0xc], 0x929054
        mov dword ptr [esi + 0x150], 0x929040
        jmp L_done
    L_null:
        xor esi, esi
    L_done:
        mov ecx, esi
        mov dword ptr [esp + 0x14], 0xffffffff
        call ext_00586D00
        mov ecx, dword ptr [esp + 0xc]
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}
