// Decompiled translation unit: src/NMData/FixedPathJointData.cpp

// [0x005E09B0] NMData::FixedPathJointData::vfunc_44 (20 bytes)
// Tail-call thunk: ecx = this->+0x18c; forwards with ecx = &inner+4 to inner->vtbl[0xb0 / 4].
extern "C" __declspec(naked) void __fastcall fn_005E09B0(void* self) {
    __asm {
        mov ecx, dword ptr [ecx + 0x18c]
        mov eax, dword ptr [ecx + 4]
        mov edx, dword ptr [eax + 0xb0]
        add ecx, 4
        jmp edx
    }
}

extern "C" void __fastcall ext_005EBC10(void* self, int edx_unused, float* p);

// [0x005ECCF0] NMData::FixedPathJointData::vfunc_4_off_C (26 bytes)
extern "C" __declspec(naked) void __fastcall fn_005ECCF0(void* self, int edx_unused, float* a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        fld dword ptr [eax]
        lea edx, [esp + 0x4]
        push edx
        fstp dword ptr [esp + 0x8]
        add ecx, -0xc
        call ext_005EBC10
        ret 0x4
    }
}

extern "C" int mem_00924FE4;

// [0x005EFF60] NMData::FixedPathJointData::vfunc_59 (34 bytes)
extern "C" __declspec(naked) void __fastcall fn_005EFF60(void* self, int edx_unused, void* a1) {
    __asm {
        push ecx
        push esi
        mov esi, dword ptr [esp + 0xc]
        push 0x96b92c
        mov ecx, esi
        mov dword ptr [esp + 0x8], 0x0
        call dword ptr [mem_00924FE4]
        mov eax, esi
        pop esi
        pop ecx
        ret 0x4
    }
}

// [0x005E1060] NMData::FixedPathJointData::vfunc_15_off_4 (41 bytes)
extern "C" void ext_0058F670();
extern "C" __declspec(naked) void __fastcall fn_005E1060(void* self, int edx_unused, void* a1) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        push edi
        mov esi, ecx
        call ext_0058F670
        mov esi, dword ptr [esi + 0x178]
        test esi, esi
        je L_done
        mov eax, dword ptr [esi + 0x4]
        mov edx, dword ptr [eax + 0x3c]
        lea ecx, [esi + 0x4]
        push edi
        call edx
L_done:
        pop edi
        pop esi
        ret 0x4
    }
}

// [0x005E0E70] NMData::FixedPathJointData::vfunc_0_off_154 (63 bytes)
extern "C" __declspec(naked) void __fastcall fn_005E0E70(void* self, int edx_unused, int a1) {
    __asm {
        cmp dword ptr [ecx + 0x140], 0x0
        jne L_ret
        push edi
        mov edi, dword ptr [ecx + 0xe0]
        test edi, edi
        je L_pop_edi
        mov eax, dword ptr [ecx - 0x150]
        mov edx, dword ptr [esp + 0x8]
        mov eax, dword ptr [eax + 0x14]
        push esi
        mov esi, dword ptr [edi]
        add ecx, 0xfffffeb0
        push edx
        add esi, 0xac
        call eax
        mov edx, dword ptr [esi]
        push eax
        mov ecx, edi
        call edx
        pop esi
L_pop_edi:
        pop edi
L_ret:
        ret 0x4
    }
}
