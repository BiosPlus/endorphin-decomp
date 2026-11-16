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

// [0x008101C0] sub_008101C0 (64 bytes)
extern "C" __declspec(naked) void __cdecl fn_008101C0(void) {
    __asm {
        mov eax, dword ptr [esp + 4]
        mov ecx, dword ptr [eax + 4]
        mov eax, dword ptr [ecx + 4]
        shr eax, 4
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
        or dword ptr [eax + 4], 0x10
        ret
    clear_bit:
        mov ecx, dword ptr [esp + 4]
        mov eax, dword ptr [ecx + 4]
        and dword ptr [eax + 4], -0x11
        ret
    }
}

// [0x00810200] sub_00810200 (64 bytes)
extern "C" __declspec(naked) unsigned int __cdecl fn_00810200(void* p) {
    __asm {
        mov eax, dword ptr [esp + 4]
        mov ecx, dword ptr [eax + 4]
        mov eax, dword ptr [ecx + 4]
        shr eax, 3
        and eax, 1
        ret
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        _emit 0x90
        mov eax, dword ptr [esp + 8]
        test eax, eax
        je L1
        mov eax, dword ptr [esp + 4]
        mov eax, dword ptr [eax + 4]
        or dword ptr [eax + 4], 8
        ret
    L1:
        mov ecx, dword ptr [esp + 4]
        mov eax, dword ptr [ecx + 4]
        and dword ptr [eax + 4], -9
        ret
    }
}

// [0x00810270] sub_00810270 (64 bytes)
extern "C" __declspec(naked) int __cdecl fn_00810270(void) {
    __asm {
        mov eax, dword ptr [esp + 4]
        mov ecx, dword ptr [eax + 4]
        mov eax, dword ptr [ecx + 4]
        shr eax, 2
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
        je clear_bit_810270
        mov eax, dword ptr [esp + 4]
        mov eax, dword ptr [eax + 4]
        or dword ptr [eax + 4], 4
        ret
    clear_bit_810270:
        mov ecx, dword ptr [esp + 4]
        mov eax, dword ptr [ecx + 4]
        and dword ptr [eax + 4], -5
        ret
    }
}

// [0x008110F0] sub_008110F0 (32 bytes)
extern "C" __declspec(naked) int __cdecl fn_008110F0(int c) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x61
        __asm _emit 0x7c
        __asm _emit 0x08
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x7a
        __asm _emit 0x7f
        __asm _emit 0x03
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0xe0
        __asm _emit 0xc3
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
    }
}
