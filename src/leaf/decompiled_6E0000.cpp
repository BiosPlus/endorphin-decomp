// Decompiled translation unit: src/leaf/decompiled_6E0000.cpp

// [0x006E0900] sub_006E0900 (32 bytes)
// Zero-initialise the object's 8 dwords, then store 1.0 (double) at offset 0x18.
extern "C" __declspec(naked) void __fastcall fn_006E0900(void* self) {
    __asm {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr [eax + 0x10], ecx
        mov dword ptr [eax + 0x8], ecx
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 0x18], ecx
        mov dword ptr [eax + 0x14], ecx
        mov dword ptr [eax + 0xc], ecx
        mov dword ptr [eax + 0x4], ecx
        mov dword ptr [eax + 0x1c], 0x3ff00000
        ret
    }
}

extern "C" void ext_006B9EC0();

// [0x006E6350] sub_006E6350 (16 bytes)
extern "C" __declspec(naked) void __fastcall fn_006E6350(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        add ecx, 0x4c
        push eax
        call ext_006B9EC0
        ret 4
    }
}

// [0x006E7430] sub_006E7430 (16 bytes)
extern "C" __declspec(naked) void __fastcall fn_006E7430(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        add ecx, 0x8
        push eax
        call ext_006B9EC0
        ret 4
    }
}
