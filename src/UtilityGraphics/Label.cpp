// Decompiled translation unit: src/UtilityGraphics/Label.cpp

extern "C" void ext_0054C800();
extern "C" int mem_009254A8;
extern "C" int mem_00925414;
extern "C" int mem_00954350;
extern "C" int mem_009254A0;
extern "C" int mem_00925404;

// [0x00539340] UtilityGraphics::Label::vfunc_22 (101 bytes)
extern "C" __declspec(naked) void __fastcall fn_00539340(void* self, int edx_unused, int a1) {
    __asm {
        push esi
        mov esi, ecx
        cmp byte ptr [esi + 0x0c], 0
        je done
        cmp dword ptr [esp + 0x8], 2
        je done
        mov eax, dword ptr [esi + 0x18]
        test eax, eax
        je skip_color
        add eax, 8
        push eax
        call dword ptr [mem_009254A8]
skip_color:
        call dword ptr [mem_00925414]
        cmp dword ptr [esi + 0x1c], 0
        je skip_vf
        mov ecx, dword ptr [esi + 0x1c]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x2c]
        call edx
skip_vf:
        fldz
        sub esp, 8
        fstp dword ptr [esp + 4]
        fld dword ptr [mem_00954350]
        fstp dword ptr [esp]
        call dword ptr [mem_009254A0]
        mov eax, dword ptr [esi + 0x14]
        push eax
        call ext_0054C800
        add esp, 4
        call dword ptr [mem_00925404]
done:
        pop esi
        ret 4
    }
}
