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
