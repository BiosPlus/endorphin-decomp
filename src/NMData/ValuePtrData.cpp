// Decompiled translation unit: src/NMData/ValuePtrData.cpp

// [0x00682C20] NMData::ValuePtrData::vfunc_19 (70 bytes)
extern "C" void ext_006A6E9E();

extern "C" __declspec(naked) int __fastcall fn_00682C20(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [ecx + 0x4c]
        test eax, eax
        je ret_arg
        mov edx, dword ptr [eax]
        push 0x0
        push 0xa2e2d8
        push 0xa2e2f8
        add ecx, 0x48
        push 0x0
        push ecx
        mov ecx, eax
        mov eax, dword ptr [edx + 0x60]
        call eax
        push eax
        call ext_006A6E9E
        add esp, 0x14
        test eax, eax
        je ret_arg
        xor eax, eax
        cmp dword ptr [esp + 0x4], 0x67
        sete al
        add eax, 0x66
        ret 0x4
ret_arg:
        mov eax, dword ptr [esp + 0x4]
        ret 0x4
    }
}

// [0x00682C70] NMData::ValuePtrData::vfunc_14 (110 bytes)
extern "C" void ext_0046F7D0();
extern "C" void ext_00661650();

extern "C" __declspec(naked) int __fastcall fn_00682C70(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0xc]
        cmp eax, 0x67
        push esi
        mov dword ptr [esp + 0x4], 0x0
        je do_cast
        cmp eax, 0x66
        jne fallback
do_cast:
        mov eax, dword ptr [ecx + 0x4c]
        test eax, eax
        je fallback
        mov edx, dword ptr [eax]
        push 0x0
        push 0xa2e2d8
        push 0xa2e2f8
        add ecx, 0x48
        push 0x0
        push ecx
        mov ecx, eax
        mov eax, dword ptr [edx + 0x60]
        call eax
        push eax
        call ext_006A6E9E
        add esp, 0x14
        test eax, eax
        je fallback
        mov esi, dword ptr [esp + 0xc]
        push eax
        mov ecx, esi
        call ext_00661650
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
fallback:
        mov esi, dword ptr [esp + 0xc]
        push esi
        call ext_0046F7D0
        add esp, 0x4
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    }
}

// [0x00685F80] NMData::ValuePtrData::vfunc_15 (172 bytes)
extern "C" void ext_00671F30();
extern "C" void ext_006836F0();
extern "C" void ext_00685BA0();
extern "C" void ext_00685BC0();
extern "C" void ext_00685BE0();
extern "C" void ext_00685C00();

extern "C" __declspec(naked) void* __fastcall fn_00685F80(void* self, int edx_unused, void* a1, int a2) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0x0c]
        cmp eax, 0x2f6
        push esi
        mov dword ptr [esp + 0x4], 0
        jg short L_fe2
        je short L_fcd
        sub eax, 0x280
        je short L_fb8
        sub eax, 0x54
        jne short L_fee
    L_fa3:
        mov esi, dword ptr [esp + 0x0c]
        push ecx
        push esi
        call ext_00685BA0
        add esp, 8
        mov eax, esi
        pop esi
        pop ecx
        ret 8
    L_fb8:
        mov esi, dword ptr [esp + 0x0c]
        push ecx
        push esi
        call ext_00685BE0
        add esp, 8
        mov eax, esi
        pop esi
        pop ecx
        ret 8
    L_fcd:
        mov esi, dword ptr [esp + 0x0c]
        push ecx
        push esi
        call ext_00685C00
        add esp, 8
        mov eax, esi
        pop esi
        pop ecx
        ret 8
    L_fe2:
        sub eax, 0x361
        je short L_17
        sub eax, 0x25
        je short L_02
    L_fee:
        mov esi, dword ptr [esp + 0x0c]
        push esi
        call ext_00671F30
        add esp, 4
        mov eax, esi
        pop esi
        pop ecx
        ret 8
    L_02:
        mov esi, dword ptr [esp + 0x0c]
        push ecx
        push esi
        call ext_006836F0
        add esp, 8
        mov eax, esi
        pop esi
        pop ecx
        ret 8
    L_17:
        mov esi, dword ptr [esp + 0x0c]
        push ecx
        push esi
        call ext_00685BC0
        add esp, 8
        mov eax, esi
        pop esi
        pop ecx
        ret 8
    }
}
