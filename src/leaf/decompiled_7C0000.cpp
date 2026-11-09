// Decompiled translation unit: src/leaf/decompiled_7C0000.cpp

extern "C" float mem_0099D148;

// [0x007CC3D0] sub_007CC3D0 (32 bytes)
// Zeroes the float triple at arg2[0..2] (stores 0.0 to [+8], [+4], [0]), then stores
// the global float mem_0099D148 to *arg3; returns 1. arg1 is unused.
extern "C" __declspec(naked) int __cdecl fn_007CC3D0(int a0, float* a1, float* a2) {
    __asm {
        fldz
        mov eax, dword ptr [esp + 0x8]
        fst dword ptr [eax + 0x8]
        fst dword ptr [eax + 0x4]
        fstp dword ptr [eax]
        mov eax, dword ptr [esp + 0xc]
        fld dword ptr [mem_0099D148]
        fstp dword ptr [eax]
        mov eax, 0x1
        ret
    }
}

// [0x007C71C0] sub_007C71C0 (12 bytes)
extern "C" void __cdecl ext_007C7150(int value);

extern "C" __declspec(naked) void __cdecl fn_007C71C0(int a0) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push eax
        call ext_007C7150
        pop ecx
        ret
    }
}
