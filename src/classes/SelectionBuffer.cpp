// Decompiled translation unit: src/classes/SelectionBuffer.cpp

extern "C" void ext_004E8570(int a, int b);

// [0x004E87F0] SelectionBuffer::vfunc_12 (24 bytes)
extern "C" __declspec(naked) void __fastcall fn_004E87F0(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0xc]
        call edx
        push eax
        mov eax, dword ptr [esp + 0x8]
        push eax
        call ext_004E8570
        add esp, 0x8
        ret 0x4
    }
}

// [0x004E8810] SelectionBuffer::vfunc_13 (24 bytes)
extern "C" __declspec(naked) void __fastcall fn_004E8810(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x14]
        call edx
        push eax
        mov eax, dword ptr [esp + 0x8]
        push eax
        call ext_004E8570
        add esp, 0x8
        ret 0x4
    }
}

// [0x004E8830] SelectionBuffer::vfunc_14 (24 bytes)
extern "C" __declspec(naked) void __fastcall fn_004E8830(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x18]
        call edx
        push eax
        mov eax, dword ptr [esp + 0x8]
        push eax
        call ext_004E8570
        add esp, 0x8
        ret 0x4
    }
}

// [0x004E8850] SelectionBuffer::vfunc_15 (24 bytes)
extern "C" void ext_004E84A0(int a, int b);

extern "C" __declspec(naked) void __fastcall fn_004E8850(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x1c]
        call edx
        push eax
        mov eax, dword ptr [esp + 0x8]
        push eax
        call ext_004E84A0
        add esp, 0x8
        ret 0x4
    }
}

// [0x004E8870] SelectionBuffer::vfunc_16 (24 bytes)
extern "C" __declspec(naked) void __fastcall fn_004E8870(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x20]
        call edx
        push eax
        mov eax, dword ptr [esp + 0x8]
        push eax
        call ext_004E8570
        add esp, 0x8
        ret 0x4
    }
}
