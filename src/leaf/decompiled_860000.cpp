// Decompiled translation unit: src/leaf/decompiled_860000.cpp

// [0x00864F30] sub_00864F30 (32 bytes)
extern "C" int mem_00AB98EC;

extern "C" __declspec(naked) int __cdecl fn_00864F30(void) {
    __asm {
        mov eax, dword ptr [esp + 0x14]
        xor ecx, ecx
        mov word ptr [eax], 0xcf
        mov word ptr [eax + 0x2], cx
        mov word ptr [eax + 0x4], cx
        mov word ptr [eax + 0x6], cx
        xor eax, eax
        mov dword ptr [mem_00AB98EC], ecx
        ret
    }
}

// [0x0086AF30] sub_0086AF30 (32 bytes)
extern "C" __declspec(naked) void __cdecl fn_0086AF30(void) {
    __asm {
        mov edx, dword ptr [esp + 0xc]
        test edx, edx
        je done
        mov ecx, dword ptr [esp + 0x8]
        mov eax, dword ptr [esp + 0x4]
        push esi
    copy_loop:
        mov esi, dword ptr [ecx]
        add ecx, 0x4
        mov dword ptr [eax], esi
        add eax, 0x4
        dec edx
        jne copy_loop
        pop esi
    done:
        ret
    }
}
