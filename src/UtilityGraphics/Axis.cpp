// Decompiled translation unit: src/UtilityGraphics/Axis.cpp

extern "C" void ext_0054C800();
extern "C" int mem_00925490;
extern "C" int mem_009254A4;
extern "C" int mem_0092548C;
extern "C" int mem_00925488;
extern "C" int mem_00925414;
extern "C" int mem_009253D0;
extern "C" int mem_009254A0;
extern "C" int mem_00A9F420;
extern "C" int mem_00925404;
extern "C" int mem_00A9F428;
extern "C" int mem_00A9F430;

// [0x00538570] UtilityGraphics::Axis::vfunc_22 (521 bytes)
extern "C" __declspec(naked) void __fastcall fn_00538570(void* self, int edx_unused, int a1) {
    __asm {
        push ebx
        push esi
        push edi
        push 1
        mov esi, ecx
        call dword ptr [mem_00925490]
        fldz
        cmp byte ptr [esi + 0x18], 0
        mov ebx, dword ptr [mem_009254A4]
        je SHORT loc_53859F
        sub esp, 0xc
        fst dword ptr [esp + 8]
        fstp dword ptr [esp + 4]
        fld1
        fstp dword ptr [esp]
        call ebx
        fldz
loc_53859F:
        mov edi, dword ptr [mem_0092548C]
        sub esp, 0xc
        fst dword ptr [esp + 8]
        fst dword ptr [esp + 4]
        fstp dword ptr [esp]
        call edi
        fldz
        sub esp, 0xc
        fst dword ptr [esp + 8]
        fstp dword ptr [esp + 4]
        fld dword ptr [esi + 0x14]
        fstp dword ptr [esp]
        call edi
        cmp byte ptr [esi + 0x18], 0
        je SHORT loc_5385E4
        fldz
        sub esp, 0xc
        fst dword ptr [esp + 8]
        fld1
        fstp dword ptr [esp + 4]
        fstp dword ptr [esp]
        call ebx
loc_5385E4:
        fldz
        sub esp, 0xc
        fst dword ptr [esp + 8]
        fst dword ptr [esp + 4]
        fstp dword ptr [esp]
        call edi
        fldz
        sub esp, 0xc
        fst dword ptr [esp + 8]
        fld dword ptr [esi + 0x14]
        fstp dword ptr [esp + 4]
        fstp dword ptr [esp]
        call edi
        cmp byte ptr [esi + 0x18], 0
        je SHORT loc_538625
        fld1
        sub esp, 0xc
        fstp dword ptr [esp + 8]
        fldz
        fst dword ptr [esp + 4]
        fstp dword ptr [esp]
        call ebx
loc_538625:
        fldz
        sub esp, 0xc
        fst dword ptr [esp + 8]
        fst dword ptr [esp + 4]
        fstp dword ptr [esp]
        call edi
        fld dword ptr [esi + 0x14]
        sub esp, 0xc
        fstp dword ptr [esp + 8]
        fldz
        fst dword ptr [esp + 4]
        fstp dword ptr [esp]
        call edi
        call dword ptr [mem_00925488]
        cmp byte ptr [esi + 0x19], 0
        je loc_538773
        call dword ptr [mem_00925414]
        cmp byte ptr [esi + 0x18], 0
        je SHORT loc_53867C
        fldz
        sub esp, 0xc
        fst dword ptr [esp + 8]
        fstp dword ptr [esp + 4]
        fld1
        fstp dword ptr [esp]
        call ebx
loc_53867C:
        fldz
        mov edi, dword ptr [mem_009253D0]
        push ebp
        sub esp, 0xc
        fst dword ptr [esp + 8]
        fstp dword ptr [esp + 4]
        fld dword ptr [esi + 0x14]
        fstp dword ptr [esp]
        call edi
        fldz
        mov ebx, dword ptr [mem_009254A0]
        sub esp, 8
        fst dword ptr [esp + 4]
        fstp dword ptr [esp]
        call ebx
        mov eax, dword ptr [mem_00A9F420]
        push eax
        call ext_0054C800
        mov ebp, dword ptr [mem_00925404]
        add esp, 4
        call ebp
        call dword ptr [mem_00925414]
        cmp byte ptr [esi + 0x18], 0
        je SHORT loc_5386E6
        fldz
        sub esp, 0xc
        fst dword ptr [esp + 8]
        fld1
        fstp dword ptr [esp + 4]
        fstp dword ptr [esp]
        call dword ptr [mem_009254A4]
loc_5386E6:
        fldz
        sub esp, 0xc
        fst dword ptr [esp + 8]
        fld dword ptr [esi + 0x14]
        fstp dword ptr [esp + 4]
        fstp dword ptr [esp]
        call edi
        fldz
        sub esp, 8
        fst dword ptr [esp + 4]
        fstp dword ptr [esp]
        call ebx
        mov ecx, dword ptr [mem_00A9F428]
        push ecx
        call ext_0054C800
        add esp, 4
        call ebp
        call dword ptr [mem_00925414]
        cmp byte ptr [esi + 0x18], 0
        je SHORT loc_53873E
        fld1
        sub esp, 0xc
        fstp dword ptr [esp + 8]
        fldz
        fst dword ptr [esp + 4]
        fstp dword ptr [esp]
        call dword ptr [mem_009254A4]
loc_53873E:
        fld dword ptr [esi + 0x14]
        sub esp, 0xc
        fstp dword ptr [esp + 8]
        fldz
        fst dword ptr [esp + 4]
        fstp dword ptr [esp]
        call edi
        fldz
        sub esp, 8
        fst dword ptr [esp + 4]
        fstp dword ptr [esp]
        call ebx
        mov edx, dword ptr [mem_00A9F430]
        push edx
        call ext_0054C800
        add esp, 4
        call ebp
        pop ebp
loc_538773:
        pop edi
        pop esi
        pop ebx
        ret 4
    }
}
