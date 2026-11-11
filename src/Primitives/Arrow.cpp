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
