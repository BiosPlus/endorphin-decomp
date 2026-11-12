// Decompiled translation unit: src/Primitives/Arrow.cpp

// [0x0052F420] Primitives::Arrow::vfunc_13 (37 bytes)
extern "C" void ext_00538CF0();

extern "C" __declspec(naked) void __fastcall fn_0052F420(void* self, int edx_unused, const float* v) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        fld dword ptr [eax + 0x8]
        sub esp, 0xc
        fstp dword ptr [esp + 0x8]
        add ecx, 0x3c
        fld dword ptr [eax + 0x4]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [eax]
        fstp dword ptr [esp]
        call ext_00538CF0
        ret 0x4
    }
}

// [0x0052F450] Primitives::Arrow::vfunc_20 (44 bytes)
extern "C" void __fastcall fn_0052F450(void* self, int edx_unused, float* out) {
    float t0 = *(float*)((char*)self + 0x58);
    float t1 = *(float*)((char*)self + 0x54);
    float t2 = *(float*)((char*)self + 0x5c);
    out[0] = t2;
    out[1] = t1;
    out[2] = t0;
}

// [0x0053C1F0] Primitives::Arrow::vfunc_28 (95 bytes)
extern "C" int mem_00925418;
extern "C" int mem_00925414;
extern "C" int mem_0093F7B8;
extern "C" int mem_00955A30;
extern "C" int mem_009254CC;
extern "C" int mem_00925404;
extern "C" int mem_00925438;

extern "C" __declspec(naked) void __fastcall fn_0053C1F0(void* self) {
    __asm {
        push esi
        push 0803ah
        mov esi, ecx
        call dword ptr [mem_00925418]
        call dword ptr [mem_00925414]
        fldz
        sub esp, 0x10
        fst dword ptr [esp + 0xc]
        fld dword ptr [mem_0093F7B8]
        fstp dword ptr [esp + 0x8]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [mem_00955A30]
        fstp dword ptr [esp]
        call dword ptr [mem_009254CC]
        mov eax, dword ptr [esi + 0x3c]
        mov edx, dword ptr [esp + 0x8]
        mov eax, dword ptr [eax + 0x58]
        lea ecx, [esi + 0x3c]
        push edx
        call eax
        call dword ptr [mem_00925404]
        pop esi
        mov dword ptr [esp + 0x4], 0803ah
        jmp dword ptr [mem_00925438]
    }
}

// [0x0053E0C0] Primitives::Arrow::vfunc_25 (162 bytes)
extern "C" void ext_00538D10();
extern "C" void ext_0053A610();
extern "C" void ext_005B11E0();

extern "C" __declspec(naked) void __fastcall fn_0053E0C0(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        mov eax, dword ptr [esp + 0xc]
        push ebx
        mov ebx, dword ptr [esp + 0xc]
        push esi
        push edi
        mov edi, dword ptr [esp + 0x10]
        push eax
        push ebx
        push edi
        mov esi, ecx
        call ext_0053A610
        mov eax, dword ptr [esi + 0x1c]
        test al, 0x4
        jne skip_a
        xor eax, 0x4
        mov dword ptr [esi + 0x1c], eax
skip_a:
        mov eax, dword ptr [esi + 0x1c]
        test eax, 0x200
        je skip_b
        xor eax, 0x200
        mov dword ptr [esi + 0x1c], eax
skip_b:
        fld dword ptr [ebx + 0xc0]
        mov ebx, dword ptr [ebx + 0x90]
        push ebx
        fstp dword ptr [esp + 0x1c]
        push 0x2
        mov ecx, edi
        call ext_005B11E0
        fmul dword ptr [esp + 0x1c]
        push ecx
        mov ecx, edi
        fstp dword ptr [esp + 0x1c]
        fld dword ptr [esp + 0x1c]
        fstp dword ptr [esp]
        push 0x1
        call ext_005B11E0
        fmul dword ptr [esp + 0x20]
        push ecx
        mov ecx, edi
        fstp dword ptr [esp + 0x20]
        fld dword ptr [esp + 0x20]
        fstp dword ptr [esp]
        push 0x0
        call ext_005B11E0
        fmul dword ptr [esp + 0x24]
        push ecx
        lea ecx, [esi + 0x3c]
        fstp dword ptr [esp + 0x28]
        fld dword ptr [esp + 0x28]
        fstp dword ptr [esp]
        call ext_00538D10
        pop edi
        pop esi
        pop ebx
        ret 0xc
    }
}

// [0x0052FE50] Primitives::Arrow::vfunc_0 (96 bytes)
extern "C" void ext_00538CD0();
extern "C" void ext_0053A810();
extern "C" void ext_006A5C5C();

extern "C" __declspec(naked) void __fastcall fn_0052FE50(void* self) {
    __asm {
        push -1
        push 0x894d68
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        lea ecx, [esi + 0x3c]
        mov dword ptr [esp + 0x10], 0
        call ext_00538CD0
        mov ecx, esi
        mov dword ptr [esp + 0x10], 0xffffffff
        call ext_0053A810
        test byte ptr [esp + 0x18], 0x1
        je L_0052FE9C
        push esi
        call ext_006A5C5C
        add esp, 0x4
    L_0052FE9C:
        mov ecx, dword ptr [esp + 0x8]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 0x4
    }
}
