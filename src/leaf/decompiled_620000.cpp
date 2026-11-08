// Decompiled translation unit: src/leaf/decompiled_620000.cpp

// [0x00627510] sub_00627510 (27 bytes)
extern "C" void ext_00647F20();

extern "C" __declspec(naked) void __fastcall fn_00627510(void* self) {
    __asm {
        lea eax, [ecx + 0x54]
        mov ecx, dword ptr [ecx + 0x28]
        mov edx, dword ptr [ecx + 0x158]
        mov ecx, dword ptr [edx + 0xac]
        mov dword ptr [esp + 4], eax
        jmp ext_00647F20
    }
}

// [0x006294F0] sub_006294F0 (32 bytes)
extern "C" __declspec(naked) void __fastcall fn_006294F0(void* self) {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0x28]
        mov ecx, dword ptr [eax + 0x20c]
        mov ecx, dword ptr [ecx + 0x234]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x20]
        push 0x0
        call eax
        fstp dword ptr [esi + 0x30]
        pop esi
        ret
    }
}
