// Decompiled translation unit: src/Primitives/CameraFrustum.cpp

extern "C" void ext_0053A610();

// [0x0053E170] Primitives::CameraFrustum::vfunc_25 (78 bytes)
extern "C" __declspec(naked) void __fastcall fn_0053E170(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        mov eax, dword ptr [esp + 0xc]
        mov edx, dword ptr [esp + 0x4]
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 0xc]
        push eax
        push ecx
        push edx
        mov ecx, esi
        call ext_0053A610
        mov eax, dword ptr [esi + 0x1c]
        test eax, 0x100
        jne skip1
        xor eax, 0x100
        mov dword ptr [esi + 0x1c], eax
skip1:
        mov eax, dword ptr [esi + 0x1c]
        test eax, 0x40000
        jne skip2
        xor eax, 0x40000
        mov dword ptr [esi + 0x1c], eax
skip2:
        mov eax, dword ptr [esi + 0x1c]
        test al, 0x2
        je skip3
        xor eax, 0x2
        mov dword ptr [esi + 0x1c], eax
skip3:
        pop esi
        ret 0xc
    }
}

// [0x0053C250] Primitives::CameraFrustum::vfunc_28 (621 bytes)
extern "C" void ext_005B11D0();
extern "C" int mem_00A44978;
extern "C" int mem_00955AD8;
extern "C" int mem_00925414;
extern "C" int mem_00925490;
extern "C" int mem_0092548C;
extern "C" int mem_00925488;
extern "C" int mem_00925404;

extern "C" __declspec(naked) void __fastcall fn_0053C250(void* self, int edx_unused, int a1) {
    __asm {
        sub esp, 0x2c
        cmp dword ptr [esp + 0x30], 0x2
        push esi
        mov esi, ecx
        je done
        mov ecx, dword ptr [esi + 0x20]
        push 0x1
        call ext_005B11D0
        fld dword ptr [eax]
        mov ecx, dword ptr [esi + 0x20]
        fstp qword ptr [esp + 0x28]
        push 0x2
        call ext_005B11D0
        fld dword ptr [eax]
        fdivr qword ptr [esp + 0x28]
        mov ecx, dword ptr [esi + 0x20]
        push 0x3
        fstp dword ptr [esp + 0x10]
        call ext_005B11D0
        fld dword ptr [eax]
        mov ecx, dword ptr [esi + 0x20]
        fstp dword ptr [esp + 0x28]
        push 0x4
        call ext_005B11D0
        fld dword ptr [eax]
        fstp dword ptr [esp + 0x24]
        fldz
        fcomp dword ptr [esp + 0xc]
        fnstsw ax
        test ah, 0x1
        jne skipk
        fld qword ptr [mem_00A44978]
        fstp dword ptr [esp + 0xc]
skipk:
        mov ecx, dword ptr [esi + 0x20]
        push 0x1
        call ext_005B11D0
        fld dword ptr [eax]
        fmul qword ptr [mem_00955AD8]
        mov ecx, dword ptr [esi + 0x20]
        push 0x0
        fstp qword ptr [esp + 0x20]
        call ext_005B11D0
        fld dword ptr [eax]
        mov ecx, dword ptr [esi + 0x20]
        fdivr qword ptr [esp + 0x1c]
        push 0x5
        fstp dword ptr [esp + 0x38]
        fld dword ptr [esp + 0x38]
        fld st(0)
        fmul dword ptr [esp + 0x2c]
        fstp dword ptr [esp + 0x38]
        fld dword ptr [esp + 0x38]
        fld dword ptr [esp + 0x10]
        fld st(0)
        fdivp st(2), st
        fxch st(1)
        fstp dword ptr [esp + 0x14]
        fld dword ptr [esp + 0x28]
        fmulp st(2), st
        fxch st(1)
        fstp dword ptr [esp + 0x8]
        fdivr dword ptr [esp + 0x8]
        fstp dword ptr [esp + 0x18]
        call ext_005B11D0
        fld dword ptr [esp + 0x34]
        fmul dword ptr [eax]
        mov ecx, dword ptr [esi + 0x20]
        push 0x5
        fstp dword ptr [esp + 0x38]
        call ext_005B11D0
        fld dword ptr [esp + 0x4]
        fmul dword ptr [eax]
        fstp dword ptr [esp + 0x4]
        call dword ptr [mem_00925414]
        push 0x8
        call dword ptr [mem_00925490]
        fld dword ptr [esp + 0x28]
        fchs
        mov esi, dword ptr [mem_0092548C]
        fstp dword ptr [esp + 0x8]
        sub esp, 0xc
        fld dword ptr [esp + 0x1c]
        fchs
        fstp dword ptr [esp + 0x24]
        fld dword ptr [esp + 0x40]
        fchs
        fstp dword ptr [esp + 0x28]
        fld dword ptr [esp + 0x14]
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x24]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x28]
        fstp dword ptr [esp]
        call esi
        fld dword ptr [esp + 0x24]
        sub esp, 0xc
        fchs
        fstp dword ptr [esp + 0x18]
        fld dword ptr [esp + 0x20]
        fchs
        fstp dword ptr [esp + 0x30]
        fld dword ptr [esp + 0x10]
        fchs
        fstp dword ptr [esp + 0x34]
        fld dword ptr [esp + 0x18]
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x30]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x34]
        fstp dword ptr [esp]
        call esi
        fld dword ptr [esp + 0x8]
        sub esp, 0xc
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x24]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x40]
        fstp dword ptr [esp]
        call esi
        fld dword ptr [esp + 0xc]
        sub esp, 0xc
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x30]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x10]
        fstp dword ptr [esp]
        call esi
        fld dword ptr [esp + 0x8]
        sub esp, 0xc
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x1c]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x40]
        fstp dword ptr [esp]
        call esi
        fld dword ptr [esp + 0xc]
        sub esp, 0xc
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x20]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x10]
        fstp dword ptr [esp]
        call esi
        fld dword ptr [esp + 0x8]
        sub esp, 0xc
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x1c]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x28]
        fstp dword ptr [esp]
        call esi
        fld dword ptr [esp + 0xc]
        sub esp, 0xc
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x20]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x34]
        fstp dword ptr [esp]
        call esi
        fld dword ptr [esp + 0x8]
        sub esp, 0xc
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x24]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x28]
        fstp dword ptr [esp]
        call esi
        fld dword ptr [esp + 0xc]
        sub esp, 0xc
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esp + 0x30]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esp + 0x34]
        fstp dword ptr [esp]
        call esi
        call dword ptr [mem_00925488]
        call dword ptr [mem_00925404]
    done:
        pop esi
        add esp, 0x2c
        ret 0x4
    }
}
