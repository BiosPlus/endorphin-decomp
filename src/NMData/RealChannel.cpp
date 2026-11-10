// Decompiled translation unit: src/NMData/RealChannel.cpp

extern "C" int mem_00925134;

// [0x0051BEF0] NMData::RealChannel::vfunc_16 (32 bytes)
extern "C" __declspec(naked) void __fastcall fn_0051BEF0(void* self) {
    __asm {
        push ebx
        push esi
        mov esi, ecx
        mov ebx, dword ptr [esi + 0x30]
        cmp ebx, dword ptr [esi + 0x34]
        push edi
        lea edi, [esi + 0x2c]
        jbe L_ok
        call dword ptr [mem_00925134]
    L_ok:
        mov dword ptr [esi + 0x3c], edi
        pop edi
        mov dword ptr [esi + 0x40], ebx
        pop esi
        pop ebx
        ret
    }
}

// [0x0051AB80] NMData::RealChannel::vfunc_7 (67 bytes)
extern "C" __declspec(naked) float __fastcall fn_0051AB80(void* self) {
    __asm {
        push ecx
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x30]
        test eax, eax
        je L_zero
        mov ecx, dword ptr [esi + 0x34]
        sub ecx, eax
        sar ecx, 0x3
        jne L_main
    L_zero:
        fldz
        pop esi
        pop ecx
        ret
    L_main:
        push ebx
        mov ebx, dword ptr [mem_00925134]
        push edi
        mov edi, dword ptr [esi + 0x34]
        cmp eax, edi
        jbe L_chk1
        call ebx
    L_chk1:
        cmp edi, dword ptr [esi + 0x30]
        ja L_chk2
        call ebx
    L_chk2:
        add edi, -8
        cmp edi, dword ptr [esi + 0x34]
        jb L_chk3
        call ebx
    L_chk3:
        fld dword ptr [edi]
        pop edi
        pop ebx
        pop esi
        pop ecx
        ret
    }
}

// [0x0051AED0] NMData::RealChannel::vfunc_8 (31 bytes)
extern "C" void ext_0051AE20();

extern "C" __declspec(naked) void __fastcall fn_0051AED0(void* self, int edx_unused, void* a1, void* a2) {
    __asm {
        push ecx
        push esi
        mov esi, dword ptr [esp + 0xc]
        push ecx
        push esi
        mov dword ptr [esp + 0xc], 0x0
        call ext_0051AE20
        add esp, 0x8
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    }
}
