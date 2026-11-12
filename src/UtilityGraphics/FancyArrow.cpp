// Decompiled translation unit: src/UtilityGraphics/FancyArrow.cpp

extern "C" void ext_0063E024();
extern "C" void ext_0063E02A();
extern "C" int mem_00955108;
extern "C" int mem_00925414;
extern "C" int mem_009253D0;
extern "C" int mem_00955100;
extern "C" int mem_00925404;

// [0x00538D40] UtilityGraphics::FancyArrow::vfunc_22 (255 bytes)
extern "C" __declspec(naked) void __fastcall fn_00538D40(void* self, int edx_unused, int a1) {
    __asm {
        push ebp
        mov ebp, esp
        and esp, -0x40
        sub esp, 0x38
        push esi
        push edi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x24]
        fld dword ptr [esi + 0x20]
        fmul qword ptr [mem_00955108]
        mov ecx, dword ptr [esi + 0x14]
        push 1
        push eax
        sub esp, 0x18
        fstp qword ptr [esp + 0x10]
        fld dword ptr [esi + 0x18]
        fstp qword ptr [esp + 0x8]
        fldz
        fstp qword ptr [esp]
        push ecx
        call ext_0063E02A
        call dword ptr [mem_00925414]
        fld dword ptr [esi + 0x20]
        fmul qword ptr [mem_00955108]
        mov edi, dword ptr [mem_009253D0]
        sub esp, 0xc
        fstp dword ptr [esp + 0x48]
        fld dword ptr [esp + 0x48]
        fstp dword ptr [esp + 0x8]
        fldz
        fst dword ptr [esp + 0x4]
        fstp dword ptr [esp]
        call edi
        fld dword ptr [esi + 0x18]
        mov edx, dword ptr [esi + 0x24]
        mov eax, dword ptr [esi + 0x14]
        push 1
        push edx
        sub esp, 0x10
        fstp qword ptr [esp + 0x8]
        fldz
        fstp qword ptr [esp]
        push eax
        call ext_0063E024
        fld dword ptr [esi + 0x20]
        fmul qword ptr [mem_00955100]
        mov ecx, dword ptr [esi + 0x24]
        mov edx, dword ptr [esi + 0x14]
        push 1
        push ecx
        sub esp, 0x18
        fstp qword ptr [esp + 0x10]
        fld dword ptr [esi + 0x1c]
        fstp qword ptr [esp + 0x8]
        fldz
        fstp qword ptr [esp]
        push edx
        call ext_0063E02A
        fld dword ptr [esi + 0x20]
        fmul qword ptr [mem_00955100]
        sub esp, 0xc
        fstp dword ptr [esp + 0x48]
        fld dword ptr [esp + 0x48]
        fstp dword ptr [esp + 0x8]
        fldz
        fst dword ptr [esp + 0x4]
        fstp dword ptr [esp]
        call edi
        fld dword ptr [esi + 0x1c]
        mov eax, dword ptr [esi + 0x24]
        mov ecx, dword ptr [esi + 0x14]
        push 1
        push eax
        sub esp, 0x10
        fstp qword ptr [esp + 0x8]
        fldz
        fstp qword ptr [esp]
        push ecx
        call ext_0063E024
        call dword ptr [mem_00925404]
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ret 4
    }
}
