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
