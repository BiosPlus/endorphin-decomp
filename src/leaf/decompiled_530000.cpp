// Decompiled translation unit: src/leaf/decompiled_530000.cpp

extern "C" int mem_009253D8;
extern "C" int mem_009253D4;
extern "C" void ext_0054D2A0();

// [0x00532C30] sub_00532C30 (30 bytes)
extern "C" __declspec(naked) void __fastcall fn_00532C30(void* self) {
    __asm {
        push esi
        push 0x1701
        mov esi, ecx
        call dword ptr [mem_009253D8]
        call dword ptr [mem_009253D4]
        mov ecx, dword ptr [esi]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x10]
        pop esi
        jmp edx
    }
}

// [0x00534380] sub_00534380 (32 bytes)
extern "C" __declspec(naked) void __fastcall fn_00534380(void* self) {
    __asm {
        mov edx, dword ptr [ecx + 0x38]
        lea eax, [ecx + 0x9c]
        mov dword ptr [ecx + 0x40c], eax
        mov dword ptr [ecx + 0x410], edx
        add ecx, 0x33c
        jmp ext_0054D2A0
    }
}
