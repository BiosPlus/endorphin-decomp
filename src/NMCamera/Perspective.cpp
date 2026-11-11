// Decompiled translation unit: src/NMCamera/Perspective.cpp

// [0x00552270] NMCamera::Perspective::vfunc_4 (59 bytes)
extern "C" void ext_005481A0();
extern "C" void ext_005481C0();
extern "C" void ext_0063E048();

extern "C" __declspec(naked) void __fastcall fn_00552270(void* self) {
    __asm {
        push esi
        mov esi, ecx
        call ext_005481A0
        sub esp, 0x8
        mov ecx, esi
        fstp qword ptr [esp]
        call ext_005481C0
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0x24]
        sub esp, 0x10
        fstp qword ptr [esp + 0x8]
        mov ecx, esi
        fld qword ptr [esi + 0xc0]
        fstp qword ptr [esp]
        call edx
        sub esp, 0x8
        fstp qword ptr [esp]
        call ext_0063E048
        pop esi
        ret
    }
}

// [0x005526A0] NMCamera::Perspective::vfunc_5 (124 bytes)
extern "C" void ext_005B11E0();
extern "C" void ext_005D0670();
extern "C" int mem_009574F0;
extern "C" int mem_00AF7AC0;

extern "C" __declspec(naked) float __fastcall fn_005526A0(void* self, int edx_unused, float* a1) {
    __asm {
        sub esp, 0x8
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0xa0]
        test eax, eax
        je L_005526FD
        push 0x2
        lea ecx, [eax + 0x210]
        call ext_005B11E0
        fstp dword ptr [esp + 0x4]
        mov eax, dword ptr [esp + 0x10]
        fld dword ptr [eax]
        mov ecx, dword ptr [esi + 0xa0]
        fmul dword ptr [esp + 0x4]
        fmul qword ptr [mem_009574F0]
        fstp qword ptr [esp + 0x4]
        call ext_005D0670
        fdivr qword ptr [esp + 0x4]
        pop esi
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0xc]
        fabs
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0xc]
        add esp, 0x8
        ret 0x4
    L_005526FD:
        mov ecx, dword ptr [esp + 0x10]
        fld dword ptr [ecx]
        pop esi
        fadd st(0), st
        fmul qword ptr [mem_00AF7AC0]
        fabs
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0xc]
        add esp, 0x8
        ret 0x4
    }
}
