// Decompiled translation unit: src/Primitives/TwistLimit.cpp

extern "C" void ext_0053DF00();
extern "C" double mem_00955D28;

// [0x0053DF60] Primitives::TwistLimit::vfunc_25 (46 bytes)
extern "C" void __fastcall fn_0053DF60(void* self, int edx_unused, int a1, void* a2, int a3) {
    ((void (__thiscall*)(void*, int, void*, int))ext_0053DF00)(self, a1, a2, a3);
    unsigned char* s = (unsigned char*)self;
    unsigned char* o = (unsigned char*)a2;
    *(float*)(s + 0x40) = (float)(*(float*)(o + 0xb8) * mem_00955D28);
}

// [0x0052FC70] Primitives::TwistLimit::vfunc_0 (96 bytes)
extern "C" void ext_00537EC0();
extern "C" void ext_0053A810();
extern "C" void ext_006A5C5C();

extern "C" __declspec(naked) void __fastcall fn_0052FC70(void* self) {
    __asm {
        push -1
        push 0x894d48
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0x4], esi
        lea ecx, [esi + 0x44]
        mov dword ptr [esp + 0x10], 0
        call ext_00537EC0
        mov ecx, esi
        mov dword ptr [esp + 0x10], 0xffffffff
        call ext_0053A810
        test byte ptr [esp + 0x18], 0x1
        je L_0052FCBC
        push esi
        call ext_006A5C5C
        add esp, 0x4
    L_0052FCBC:
        mov ecx, dword ptr [esp + 0x8]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret 0x4
    }
}

// [0x0053BF90] Primitives::TwistLimit::vfunc_28 (201 bytes)
extern "C" void ext_00537ED0();
extern "C" void ext_0053B470();
extern "C" void ext_005B11F0();
extern "C" int mem_009324A4;
extern "C" int mem_00955A48;
extern "C" int mem_00955A40;
extern "C" int mem_00925414;
extern "C" int mem_00955A30;
extern "C" int mem_009254CC;
extern "C" int mem_00955A38;
extern "C" int mem_00925404;

extern "C" __declspec(naked) void __fastcall fn_0053BF90(void* self, int edx_unused, int a1) {
    __asm {
        fld dword ptr [mem_009324A4]
        sub esp, 0x14
        push esi
        push ecx
        mov esi, ecx
        fstp dword ptr [esp]
        mov ecx, dword ptr [esi + 0x20]
        lea eax, [esp + 0xc]
        push eax
        call ext_005B11F0
        mov ecx, eax
        call ext_0053B470
        fldz
        fld dword ptr [esp + 0x8]
        fcom st(1)
        fnstsw ax
        test ah, 0x5
        jp L_0053BFC7
        fstp st(0)
        jmp L_0053BFDC
    L_0053BFC7:
        fstp st(1)
        fcomp qword ptr [mem_00955A48]
        fnstsw ax
        test ah, 0x41
        jne L_0053BFE0
        fld dword ptr [mem_00955A40]
    L_0053BFDC:
        fstp dword ptr [esp + 0x8]
    L_0053BFE0:
        call dword ptr [mem_00925414]
        fldz
        sub esp, 0x10
        fst dword ptr [esp + 0xc]
        fld1
        fstp dword ptr [esp + 0x8]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [mem_00955A30]
        fstp dword ptr [esp]
        call dword ptr [mem_009254CC]
        fld dword ptr [esp + 0x8]
        mov ecx, dword ptr [esi + 0x3c]
        fld st(0)
        push ecx
        fadd st, st(1)
        sub esp, 0x10
        lea ecx, [esi + 0x44]
        fstp dword ptr [esp + 0x18]
        fld dword ptr [esp + 0x18]
        fstp dword ptr [esp + 0xc]
        fchs
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esi + 0x40]
        fmul qword ptr [mem_00955A38]
        fstp dword ptr [esp + 0x18]
        fld dword ptr [esp + 0x18]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esi + 0x40]
        fstp dword ptr [esp]
        call ext_00537ED0
        call dword ptr [mem_00925404]
        pop esi
        add esp, 0x14
        ret 0x4
    }
}
