// Decompiled translation unit: src/Interpolator/Const.cpp

extern "C" int mem_00925134;

// [0x00528540] Interpolator::Const::vfunc_3 (39 bytes)
extern "C" __declspec(naked) void __fastcall fn_00528540(void* self) {
    __asm {
        push ebx
        mov ebx, dword ptr [mem_00925134]
        push esi
        push edi
        mov edi, dword ptr [esp + 0x14]
        test edi, edi
        jne short L_00528553
        call ebx
L_00528553:
        mov esi, dword ptr [esp + 0x18]
        cmp esi, dword ptr [edi + 0x8]
        jb short L_0052855E
        call ebx
L_0052855E:
        fld dword ptr [esi + 0x4]
        pop edi
        pop esi
        pop ebx
        ret 0x10
    }
}

// [0x00528570] Interpolator::Const::vfunc_1 (39 bytes)
extern "C" __declspec(naked) void __fastcall fn_00528570(void* self) {
    __asm {
        push ebx
        mov ebx, dword ptr [mem_00925134]
        push esi
        push edi
        mov edi, dword ptr [esp + 0x14]
        test edi, edi
        jne short L_00528583
        call ebx
L_00528583:
        mov esi, dword ptr [esp + 0x18]
        cmp esi, dword ptr [edi + 0x8]
        jb short L_0052858E
        call ebx
L_0052858E:
        pop edi
        lea eax, [esi + 0x4]
        pop esi
        pop ebx
        ret 0x10
    }
}
