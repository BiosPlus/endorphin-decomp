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
