// Decompiled translation unit: src/NMData/RPROJointData.cpp

// [0x005EC2A0] NMData::RPROJointData::vfunc_63 (34 bytes)
extern "C" void ext_005EB920();

extern "C" __declspec(naked) void __fastcall fn_005EC2A0(void* self, int edx_unused, int a1, int a2) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        cmp eax, dword ptr [ecx + 0x194]
        je done
        cmp eax, 0x5
        jne skip
        mov eax, 0x3
    skip:
        mov dword ptr [esp + 0x4], eax
        jmp ext_005EB920
    done:
        ret 0x8
    }
}

// [0x00584FD0] NMData::RPROJointData::vfunc_59 (35 bytes)
extern "C" int mem_00A9F1E4;
extern "C" int mem_00924FE4;

extern "C" __declspec(naked) void* __fastcall fn_00584FD0(void* self, int edx_unused, void* a1) {
    __asm {
        push ecx
        mov eax, dword ptr [mem_00A9F1E4]
        push esi
        mov esi, dword ptr [esp + 0xc]
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0x8], 0x0
        call dword ptr [mem_00924FE4]
        mov eax, esi
        pop esi
        pop ecx
        ret 0x4
    }
}
