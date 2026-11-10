// Decompiled translation unit: src/leaf/decompiled_810000.cpp

// [0x00810250] sub_00810250 (32 bytes)
extern "C" __declspec(naked) void __cdecl fn_00810250(void) {
    __asm {
        mov eax, dword ptr [esp + 8]
        test eax, eax
        je clear_bit
        mov eax, dword ptr [esp + 4]
        mov eax, dword ptr [eax + 4]
        or dword ptr [eax + 4], 2
        ret
    clear_bit:
        mov ecx, dword ptr [esp + 4]
        mov eax, dword ptr [ecx + 4]
        and dword ptr [eax + 4], -3
        ret
    }
}

// [0x00810180] sub_00810180 (64 bytes)
extern "C" __declspec(naked) void __cdecl fn_00810180(void) {
    __asm {
        mov eax, dword ptr [esp + 4]
        mov ecx, dword ptr [eax + 4]
        mov eax, dword ptr [ecx + 4]
        shr eax, 6
        and eax, 1
        ret
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x90
        mov eax, dword ptr [esp + 8]
        test eax, eax
        je clear_bit
        mov eax, dword ptr [esp + 4]
        mov eax, dword ptr [eax + 4]
        or dword ptr [eax + 4], 0x40
        ret
    clear_bit:
        mov ecx, dword ptr [esp + 4]
        mov eax, dword ptr [ecx + 4]
        and dword ptr [eax + 4], -0x41
        ret
    }
}
