// Decompiled translation unit: src/classes/EffectorSkeletal.cpp

extern "C" void ext_00630370();
extern "C" void ext_00630DD0();
extern "C" void ext_006944D0();
extern "C" float* __fastcall ext_00630E60(void* self);
extern "C" void ext_006035D0();
extern "C" void ext_006304B0();
extern "C" void ext_006305A0();
extern "C" void ext_00630CB0();

// [0x006310F0] EffectorSkeletal::vfunc_19 (12 bytes)
extern "C" __declspec(naked) void __cdecl fn_006310F0() {
    __asm {
        push 7
        call ext_00630370
        jmp ext_00630DD0
    }
}

// [0x00630C90] EffectorSkeletal::vfunc_31 (17 bytes)
extern "C" __declspec(naked) void __cdecl fn_00630C90() {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        mov ecx, dword ptr [esp + 0x4]
        push eax
        call ext_006944D0
        ret 0x8
    }
}

// [0x006310C0] EffectorSkeletal::vfunc_14 (36 bytes)
extern "C" float* __fastcall fn_006310C0(void* self, int edx_unused, float* out) {
    float* src = ext_00630E60(self);
    out[0] = src[0];
    out[1] = src[1];
    out[2] = src[2];
    out[3] = src[3];
    return out;
}

// [0x006309E0] EffectorSkeletal::vfunc_28 (131 bytes)
extern "C" __declspec(naked) void __fastcall fn_006309E0(void* self) {
    __asm {
        fld dword ptr [esp + 0x4]
        fld st(0)
        fmul dword ptr [ecx + 0xd0]
        fstp dword ptr [ecx + 0xd0]
        fld dword ptr [ecx + 0xec]
        fmul st, st(1)
        fstp dword ptr [ecx + 0xec]
        fld dword ptr [ecx + 0xcc]
        fmul st, st(1)
        fstp dword ptr [ecx + 0xcc]
        fld dword ptr [ecx + 0xdc]
        fmul st, st(1)
        fstp dword ptr [ecx + 0xdc]
        fld dword ptr [ecx + 0xe4]
        fmul st, st(1)
        fstp dword ptr [ecx + 0xe4]
        fld dword ptr [ecx + 0xd4]
        fmul st, st(1)
        fstp dword ptr [ecx + 0xd4]
        fld dword ptr [ecx + 0xe0]
        fmul st, st(1)
        fstp dword ptr [ecx + 0xe0]
        fld dword ptr [ecx + 0xe8]
        fmul st, st(1)
        fstp dword ptr [ecx + 0xe8]
        fmul dword ptr [ecx + 0xd8]
        fstp dword ptr [ecx + 0xd8]
        ret 0x4
    }
}

// [0x00630D00] EffectorSkeletal::vfunc_18 (58 bytes)
extern "C" __declspec(naked) void __fastcall fn_00630D00(void* self) {
    __asm {
        push esi
        mov esi, ecx
        lea eax, [esi + 0x2c]
        push eax
        lea ecx, [esi + 0x90]
        call ext_006035D0
        fld dword ptr [esi + 0xf0]
        push ecx
        mov ecx, esi
        fstp dword ptr [esp]
        call ext_00630CB0
        mov ecx, esi
        call ext_006305A0
        push eax
        mov ecx, esi
        call ext_006304B0
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 0x74]
        pop esi
        jmp eax
    }
}

// [0x00630D40] EffectorSkeletal::vfunc_12 (75 bytes)
// Stack arg a1 (ret 4). p = __RTDynamicCast(a1, 0, EffectorBaseData, EffectorSkeletalData, 1).
// r = sub_006035D0(this + 0x90, p + 0x44); sub_006035D0(this + 0x2c, r);
// sub_00630CB0(this, *(float*)(this + 0xf0)).
extern "C" void ext_006A6E9E();
extern "C" __declspec(naked) void __fastcall fn_00630D40(void* self) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        push 1
        push 0A94E98h
        push 0A93768h
        push 0
        push eax
        mov esi, ecx
        call ext_006A6E9E
        add esp, 0x14
        add eax, 0x44
        push eax
        lea ecx, [esi + 0x90]
        call ext_006035D0
        push eax
        lea ecx, [esi + 0x2c]
        call ext_006035D0
        fld dword ptr [esi + 0xf0]
        push ecx
        mov ecx, esi
        fstp dword ptr [esp]
        call ext_00630CB0
        pop esi
        ret 0x4
    }
}

// [0x00630A70] EffectorSkeletal::vfunc_22 (168 bytes)
extern "C" void ext_005DFAD0();
extern "C" int mem_00924FE4;
extern "C" int mem_00924FF4;
extern "C" int mem_00979AF8;

extern "C" __declspec(naked) void __fastcall fn_00630A70(void* self, int edx_unused, int a1) {
    __asm {
        push -1
        push 0x8b56f9
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x1c
        push esi
        push edi
        mov edi, ecx
        push offset mem_00979AF8
        lea ecx, [esp + 0xc]
        call dword ptr [mem_00924FE4]
        mov ecx, dword ptr [edi + 0x8]
        lea eax, [esp + 0x8]
        push eax
        push ecx
        mov ecx, dword ptr [edi + 0xc]
        mov dword ptr [esp + 0x34], 0
        call ext_005DFAD0
        lea ecx, [esp + 0x8]
        mov esi, eax
        mov dword ptr [esp + 0x2c], -1
        call dword ptr [mem_00924FF4]
        test esi, esi
        je L_done
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 0x38]
        mov ecx, esi
        call eax
        fmul dword ptr [esp + 0x34]
        mov ecx, esi
        fstp dword ptr [edi + 0xec]
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 0x34]
        call eax
        fmul dword ptr [esp + 0x34]
        mov ecx, esi
        fstp dword ptr [edi + 0xe8]
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 0x30]
        call eax
        fmul dword ptr [esp + 0x34]
        fstp dword ptr [edi + 0xe4]
L_done:
        mov ecx, dword ptr [esp + 0x24]
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x28
        ret 0x4
    }
}

// [0x00630B20] EffectorSkeletal::vfunc_23 (168 bytes)
extern "C" __declspec(naked) void __fastcall fn_00630B20(void* self, int edx_unused, int a1) {
    __asm {
        push -1
        push 0x8b56f9
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x1c
        push esi
        push edi
        mov edi, ecx
        push offset mem_00979AF8
        lea ecx, [esp + 0xc]
        call dword ptr [mem_00924FE4]
        mov ecx, dword ptr [edi + 0x8]
        lea eax, [esp + 0x8]
        push eax
        push ecx
        mov ecx, dword ptr [edi + 0xc]
        mov dword ptr [esp + 0x34], 0
        call ext_005DFAD0
        lea ecx, [esp + 0x8]
        mov esi, eax
        mov dword ptr [esp + 0x2c], -1
        call dword ptr [mem_00924FF4]
        test esi, esi
        je L_done
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 0x1c]
        mov ecx, esi
        call eax
        fmul dword ptr [esp + 0x34]
        mov ecx, esi
        fstp dword ptr [edi + 0xd0]
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 0x28]
        call eax
        fmul dword ptr [esp + 0x34]
        mov ecx, esi
        fstp dword ptr [edi + 0xdc]
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 0x2c]
        call eax
        fmul dword ptr [esp + 0x34]
        fstp dword ptr [edi + 0xe0]
L_done:
        mov ecx, dword ptr [esp + 0x24]
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x28
        ret 0x4
    }
}

// [0x00630BD0] EffectorSkeletal::vfunc_24 (168 bytes)
extern "C" __declspec(naked) void __fastcall fn_00630BD0(void* self, int edx_unused, int a1) {
    __asm {
        push -1
        push 0x8b56f9
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x1c
        push esi
        push edi
        mov edi, ecx
        push offset mem_00979AF8
        lea ecx, [esp + 0xc]
        call dword ptr [mem_00924FE4]
        mov ecx, dword ptr [edi + 0x8]
        lea eax, [esp + 0x8]
        push eax
        push ecx
        mov ecx, dword ptr [edi + 0xc]
        mov dword ptr [esp + 0x34], 0
        call ext_005DFAD0
        lea ecx, [esp + 0x8]
        mov esi, eax
        mov dword ptr [esp + 0x2c], -1
        call dword ptr [mem_00924FF4]
        test esi, esi
        je L_done
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 0x18]
        mov ecx, esi
        call eax
        fmul dword ptr [esp + 0x34]
        mov ecx, esi
        fstp dword ptr [edi + 0xcc]
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 0x24]
        call eax
        fmul dword ptr [esp + 0x34]
        mov ecx, esi
        fstp dword ptr [edi + 0xd8]
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 0x20]
        call eax
        fmul dword ptr [esp + 0x34]
        fstp dword ptr [edi + 0xd4]
L_done:
        mov ecx, dword ptr [esp + 0x24]
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x28
        ret 0x4
    }
}
