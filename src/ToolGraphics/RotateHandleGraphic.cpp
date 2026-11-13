// Decompiled translation unit: src/ToolGraphics/RotateHandleGraphic.cpp

extern "C" void ext_005528D0();
extern "C" void ext_0063E024();
extern "C" void ext_0063E036();
extern "C" int mem_00AF6108;
extern "C" int mem_0092546C;
extern "C" int mem_00925520;
extern "C" int mem_00925414;
extern "C" int mem_009253CC;
extern "C" int mem_009254B8;
extern "C" int mem_009254B4;
extern "C" int mem_00925404;
extern "C" int mem_00925524;
extern "C" int mem_00940694;
extern "C" int mem_009254D0;
extern "C" int mem_009357B0;
extern "C" int mem_0092550C;
extern "C" int mem_00955A30;
extern "C" int mem_009254CC;
extern "C" int mem_00956D50;
extern "C" int mem_0092552C;

// [0x00549910] ToolGraphics::RotateHandleGraphic::vfunc_1 (15 bytes)
extern "C" void __fastcall fn_00549910(void* self) {
    struct Self { char pad[0x14]; float f; };
    ext_005528D0();
    static_cast<Self*>(self)->f = 1.0f;
}

// [0x0054A3D0] ToolGraphics::RotateHandleGraphic::vfunc_4 (1164 bytes)
extern "C" __declspec(naked) void __fastcall fn_0054A3D0(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -0x40
        sub esp, 0xb4
        mov eax, dword ptr [mem_00AF6108]
        fld dword ptr [eax + 0xc8]
        push ebx
        push esi
        mov esi, ecx
        fmul dword ptr [esi + 0x8]
        push edi
        push 4
        fmul dword ptr [esi + 0x4]
        fstp dword ptr [esi + 0x14]
        mov ecx, dword ptr [mem_00AF6108]
        fld dword ptr [ecx + 0xc4]
        fstp dword ptr [esp + 0x40]
        call dword ptr [mem_0092546C]
        fld dword ptr [esp + 0x3c]
        push ecx
        fstp dword ptr [esp]
        call dword ptr [mem_00925520]
        mov edi, dword ptr [ebp + 0x8]
        cmp edi, 0x1c02
        mov ebx, dword ptr [mem_00925414]
        jne L_54A4FC
        push 4
        call dword ptr [mem_009253CC]
        call ebx
        fld1
        fst dword ptr [esp + 0x40]
        lea edx, [esp + 0x40]
        fldz
        push edx
        fst dword ptr [esp + 0x48]
        push 0xba6
        fst dword ptr [esp + 0x50]
        fst dword ptr [esp + 0x54]
        fst dword ptr [esp + 0x58]
        fst dword ptr [esp + 0x60]
        fst dword ptr [esp + 0x64]
        fst dword ptr [esp + 0x68]
        fst dword ptr [esp + 0x6c]
        fst dword ptr [esp + 0x74]
        fst dword ptr [esp + 0x78]
        fst dword ptr [esp + 0x7c]
        fstp dword ptr [esp + 0x80]
        fst dword ptr [esp + 0x5c]
        fst dword ptr [esp + 0x70]
        fstp dword ptr [esp + 0x84]
        call dword ptr [mem_009254B8]
        fld1
        lea eax, [esp + 0x40]
        fst dword ptr [esp + 0x40]
        push eax
        fldz
        fst dword ptr [esp + 0x54]
        fst dword ptr [esp + 0x64]
        fst dword ptr [esp + 0x48]
        fst dword ptr [esp + 0x68]
        fst dword ptr [esp + 0x4c]
        fstp dword ptr [esp + 0x5c]
        fst dword ptr [esp + 0x58]
        fstp dword ptr [esp + 0x6c]
        call dword ptr [mem_009254B4]
        fld dword ptr [esi + 0x14]
        mov ecx, dword ptr [esi + 0x1c]
        push 1
        push 8
        sub esp, 0x10
        fstp qword ptr [esp + 0x8]
        fldz
        fstp qword ptr [esp]
        push ecx
        call ext_0063E024
        call dword ptr [mem_00925404]
        call dword ptr [mem_00925524]
        push 0
        call dword ptr [mem_009253CC]
        jmp L_54A5AA
    L_54A4FC:
        fld dword ptr [mem_00940694]
        sub esp, 0x10
        fstp dword ptr [esp + 0xc]
        fld1
        fst dword ptr [esp + 0x8]
        fst dword ptr [esp + 0x4]
        fstp dword ptr [esp]
        call dword ptr [mem_009254D0]
        cmp dword ptr [esi + 0x10], 4
        jne L_54A565
        cmp byte ptr [ebp + 0xc], 0
        je L_54A565
        fld dword ptr [esi + 0x14]
        mov edx, dword ptr [esi + 0x1c]
        fmul qword ptr [mem_009357B0]
        push 0x10
        push 0x14
        sub esp, 8
        fstp qword ptr [esp]
        push edx
        call ext_0063E036
    L_54A544:
        fld dword ptr [mem_00940694]
        sub esp, 0x10
        cmp dword ptr [esi + 0x10], 0
        fstp dword ptr [esp + 0xc]
        fldz
        jne L_54A596
        fstp dword ptr [esp + 0x8]
        fld1
        fst dword ptr [esp + 0x4]
        jmp L_54A5A1
    L_54A565:
        push 0
        call dword ptr [mem_0092550C]
        fld dword ptr [esi + 0x14]
        fmul qword ptr [mem_009357B0]
        mov eax, dword ptr [esi + 0x1c]
        push 0x10
        push 0x14
        sub esp, 8
        fstp qword ptr [esp]
        push eax
        call ext_0063E036
        push 0x405
        call dword ptr [mem_0092550C]
        jmp L_54A544
    L_54A596:
        fst dword ptr [esp + 0x8]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [esi + 0xc]
    L_54A5A1:
        fstp dword ptr [esp]
        call dword ptr [mem_009254D0]
    L_54A5AA:
        call ebx
        fldz
        sub esp, 0x10
        fst dword ptr [esp + 0xc]
        fld1
        fstp dword ptr [esp + 0x8]
        fstp dword ptr [esp + 0x4]
        fld dword ptr [mem_00955A30]
        fstp dword ptr [esp]
        call dword ptr [mem_009254CC]
        fld dword ptr [esi + 0x14]
        mov ecx, dword ptr [esi + 0x18]
        push 1
        push 0x24
        sub esp, 0x10
        fstp qword ptr [esp + 0x8]
        fld dword ptr [esi + 0x14]
        fstp qword ptr [esp]
        push ecx
        call ext_0063E024
        call dword ptr [mem_00925404]
        cmp edi, 0x1c02
        jne L_54A609
        call dword ptr [mem_00925524]
        push 1
        call dword ptr [mem_009253CC]
        jmp L_54A63E
    L_54A609:
        fld dword ptr [mem_00940694]
        sub esp, 0x10
        cmp dword ptr [esi + 0x10], 1
        fstp dword ptr [esp + 0xc]
        fldz
        jne L_54A62A
        fstp dword ptr [esp + 0x8]
        fld1
        fst dword ptr [esp + 0x4]
        jmp L_54A635
    L_54A62A:
        fst dword ptr [esp + 0x8]
        fld dword ptr [esi + 0xc]
        fstp dword ptr [esp + 0x4]
    L_54A635:
        fstp dword ptr [esp]
        call dword ptr [mem_009254D0]
    L_54A63E:
        call ebx
        fldz
        sub esp, 0x10
        fst dword ptr [esp + 0xc]
        fstp dword ptr [esp + 0x8]
        fld1
        fstp dword ptr [esp + 0x4]
        fld dword ptr [mem_00955A30]
        fstp dword ptr [esp]
        call dword ptr [mem_009254CC]
        fld dword ptr [esi + 0x14]
        mov edx, dword ptr [esi + 0x18]
        push 1
        push 0x24
        sub esp, 0x10
        fstp qword ptr [esp + 0x8]
        fld dword ptr [esi + 0x14]
        fstp qword ptr [esp]
        push edx
        call ext_0063E024
        call dword ptr [mem_00925404]
        cmp edi, 0x1c02
        jne L_54A69D
        call dword ptr [mem_00925524]
        push 2
        call dword ptr [mem_009253CC]
        jmp L_54A6D0
    L_54A69D:
        fld dword ptr [mem_00940694]
        sub esp, 0x10
        cmp dword ptr [esi + 0x10], 2
        fstp dword ptr [esp + 0xc]
        jne L_54A6BA
        fldz
        fstp dword ptr [esp + 0x8]
        fld1
        jmp L_54A6C3
    L_54A6BA:
        fld dword ptr [esi + 0xc]
        fstp dword ptr [esp + 0x8]
        fldz
    L_54A6C3:
        fst dword ptr [esp + 0x4]
        fstp dword ptr [esp]
        call dword ptr [mem_009254D0]
    L_54A6D0:
        fld dword ptr [esi + 0x14]
        mov eax, dword ptr [esi + 0x18]
        push 1
        push 0x24
        sub esp, 0x10
        fstp qword ptr [esp + 0x8]
        fld dword ptr [esi + 0x14]
        fstp qword ptr [esp]
        push eax
        call ext_0063E024
        cmp edi, 0x1c02
        jne L_54A705
        call dword ptr [mem_00925524]
        push 3
        call dword ptr [mem_009253CC]
        jmp L_54A73F
    L_54A705:
        fld dword ptr [mem_00940694]
        sub esp, 0x10
        cmp dword ptr [esi + 0x10], 3
        fstp dword ptr [esp + 0xc]
        jne L_54A726
        fldz
        fstp dword ptr [esp + 0x8]
        fld1
        fst dword ptr [esp + 0x4]
        jmp L_54A736
    L_54A726:
        fld dword ptr [esi + 0xc]
        fstp dword ptr [esp + 0x8]
        fld dword ptr [esi + 0xc]
        fstp dword ptr [esp + 0x4]
        fldz
    L_54A736:
        fstp dword ptr [esp]
        call dword ptr [mem_009254D0]
    L_54A73F:
        call ebx
        fld1
        fst dword ptr [esp + 0x80]
        lea ecx, [esp + 0x80]
        fldz
        push ecx
        fst dword ptr [esp + 0x88]
        push 0xba6
        fst dword ptr [esp + 0x90]
        fst dword ptr [esp + 0x94]
        fst dword ptr [esp + 0x98]
        fst dword ptr [esp + 0xa0]
        fst dword ptr [esp + 0xa4]
        fst dword ptr [esp + 0xa8]
        fst dword ptr [esp + 0xac]
        fst dword ptr [esp + 0xb4]
        fst dword ptr [esp + 0xb8]
        fst dword ptr [esp + 0xbc]
        fstp dword ptr [esp + 0xc0]
        fst dword ptr [esp + 0x9c]
        fst dword ptr [esp + 0xb0]
        fstp dword ptr [esp + 0xc4]
        call dword ptr [mem_009254B8]
        fld1
        lea edx, [esp + 0x80]
        fst dword ptr [esp + 0x80]
        push edx
        fldz
        fst dword ptr [esp + 0x94]
        fst dword ptr [esp + 0xa4]
        fst dword ptr [esp + 0x88]
        fst dword ptr [esp + 0xa8]
        fst dword ptr [esp + 0x8c]
        fstp dword ptr [esp + 0x9c]
        fst dword ptr [esp + 0x98]
        fstp dword ptr [esp + 0xac]
        call dword ptr [mem_009254B4]
        fld dword ptr [esi + 0x14]
        mov eax, dword ptr [esi + 0x18]
        fmul qword ptr [mem_00956D50]
        push 1
        push 0x24
        sub esp, 0x10
        fst qword ptr [esp + 0x8]
        fstp qword ptr [esp]
        push eax
        call ext_0063E024
        call dword ptr [mem_00925404]
        cmp edi, 0x1c02
        jne L_54A84D
        call dword ptr [mem_00925524]
    L_54A84D:
        call dword ptr [mem_0092552C]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 8
    }
}
