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

// [0x004E8890] SelectionBuffer::vfunc_17 (24 bytes)
extern "C" __declspec(naked) void __fastcall fn_004E8890(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x24]
        call edx
        push eax
        mov eax, dword ptr [esp + 0x8]
        push eax
        call ext_004E8570
        add esp, 0x8
        ret 0x4
    }
}

// [0x004E88B0] SelectionBuffer::vfunc_18 (24 bytes)
extern "C" __declspec(naked) void __fastcall fn_004E88B0(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x28]
        call edx
        push eax
        mov eax, dword ptr [esp + 0x8]
        push eax
        call ext_004E8570
        add esp, 0x8
        ret 0x4
    }
}

// [0x004E88D0] SelectionBuffer::vfunc_19 (24 bytes)
extern "C" __declspec(naked) void __fastcall fn_004E88D0(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x2c]
        call edx
        push eax
        mov eax, dword ptr [esp + 0x8]
        push eax
        call ext_004E8570
        add esp, 0x8
        ret 0x4
    }
}

// [0x004E9A70] SelectionBuffer::vfunc_5 (31 bytes)
extern "C" void ext_004E8B60(void* a, void* b);

extern "C" void* __fastcall fn_004E9A70(void* self) {
    char* base = (char*)self;
    char* esi = base + 0x24;
    if (base[0x34] != 0) {
        ext_004E8B60(base + 4, esi);
        esi[0x10] = 0;
    }
    return esi;
}

// [0x004E9A90] SelectionBuffer::vfunc_6 (31 bytes)
extern "C" void ext_004E8C30(void* a, void* b);

extern "C" void* __fastcall fn_004E9A90(void* self) {
    char* base = (char*)self;
    char* esi = base + 0x38;
    if (base[0x48] != 0) {
        ext_004E8C30(base + 4, esi);
        esi[0x10] = 0;
    }
    return esi;
}

// [0x004E9AB0] SelectionBuffer::vfunc_7 (31 bytes)
extern "C" void ext_004E8D00(void* a, void* b);

extern "C" void* __fastcall fn_004E9AB0(void* self) {
    char* base = (char*)self;
    char* esi = base + 0x4c;
    if (base[0x5c] != 0) {
        ext_004E8D00(base + 4, esi);
        esi[0x10] = 0;
    }
    return esi;
}

// [0x004E9B60] SelectionBuffer::vfunc_10 (31 bytes)
extern "C" void ext_004E9040(void* a, void* b);

extern "C" void* __fastcall fn_004E9B60(void* self) {
    char* base = (char*)self;
    char* esi = base + 0x60;
    if (base[0x70] != 0) {
        ext_004E9040(base + 4, esi);
        esi[0x10] = 0;
    }
    return esi;
}

// [0x004E9AD0] SelectionBuffer::vfunc_8 (34 bytes)
extern "C" void ext_004E8DD0(void* a, void* b);

extern "C" void* __fastcall fn_004E9AD0(void* self) {
    char* base = (char*)self;
    char* esi = base + 0x74;
    if (base[0x84] != 0) {
        ext_004E8DD0(base + 4, esi);
        esi[0x10] = 0;
    }
    return esi;
}
