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

// [0x004E99B0] SelectionBuffer::vfunc_3 (37 bytes)
extern "C" void ext_004E8640(void* a, void* b);

extern "C" void* __fastcall fn_004E99B0(void* self) {
    char* base = (char*)self;
    char* esi = base + 0xc4;
    if (base[0xd4] != 0) {
        ext_004E8640(base + 4, esi);
        esi[0x10] = 0;
    }
    return esi;
}

// [0x004E9B00] SelectionBuffer::vfunc_9 (37 bytes)
extern "C" void ext_004E8EA0(void* a, void* b);

extern "C" void* __fastcall fn_004E9B00(void* self) {
    char* base = (char*)self;
    char* esi = base + 0x88;
    if (base[0x98] != 0) {
        ext_004E8EA0(base + 4, esi);
        esi[0x10] = 0;
    }
    return esi;
}

// [0x004E9B80] SelectionBuffer::vfunc_11 (37 bytes)
extern "C" void ext_004E9110(void* a, void* b);

extern "C" void* __fastcall fn_004E9B80(void* self) {
    char* base = (char*)self;
    char* esi = base + 0xb0;
    if (base[0xc0] != 0) {
        ext_004E9110(base + 4, esi);
        esi[0x10] = 0;
    }
    return esi;
}

// [0x004E8790] SelectionBuffer::vfunc_4 (50 bytes)
extern "C" void ext_004E8380();

// [0x004E8790]
extern "C" __declspec(naked) void* __fastcall fn_004E8790(void* self) {
    __asm {
        push esi
        mov esi, ecx
        cmp byte ptr [esi + 0xe8], 0
        je done
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0xc]
        call edx
        push eax
        lea eax, [esi + 0xd8]
        push eax
        call ext_004E8380
        add esp, 8
        mov byte ptr [esi + 0xe8], 0
done:
        lea eax, [esi + 0xd8]
        pop esi
        ret
    }
}

extern "C" void ext_0041A920();
extern "C" void ext_006A5C5C();
extern "C" int mem_0087BA98;

// [0x004E8710] SelectionBuffer::vfunc_23 (127 bytes)
extern "C" __declspec(naked) void __fastcall fn_004E8710(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -0x1
        push offset mem_0087BA98
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x10
        push esi
        push edi
        xor edi, edi
        cmp dword ptr [esp + 0x28], edi
        mov esi, ecx
        je L_done
        mov dword ptr [esp + 0xc], edi
        mov dword ptr [esp + 0x10], edi
        mov dword ptr [esp + 0x14], edi
        lea eax, [esp + 0x28]
        push eax
        lea ecx, [esp + 0xc]
        mov dword ptr [esp + 0x24], edi
        call ext_0041A920
        mov eax, dword ptr [esp + 0x30]
        mov ecx, dword ptr [esp + 0x2c]
        mov edx, dword ptr [esi]
        mov edx, dword ptr [edx + 0x60]
        push edi
        push eax
        push ecx
        lea eax, [esp + 0x14]
        push eax
        mov ecx, esi
        call edx
        mov eax, dword ptr [esp + 0xc]
        cmp eax, edi
        je L_done
        push eax
        call ext_006A5C5C
        add esp, 0x4
    L_done:
        mov ecx, dword ptr [esp + 0x18]
        pop edi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x1c
        ret 0xc
    }
}

// [0x004E9910] SelectionBuffer::vfunc_28 (135 bytes)
extern "C" void ext_00660A50();
extern "C" void ext_004E89E0();
extern "C" void ext_004E91E0();

extern "C" __declspec(naked) void __fastcall fn_004E9910(void* self, int edx_unused, int a1, int a2, int a3, int a4) {
    __asm {
        push -1
        push 0x87ba98
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x10
        push esi
        push edi
        xor edi, edi
        mov esi, ecx
        mov dword ptr [esp + 0xc], edi
        mov dword ptr [esp + 0x10], edi
        mov dword ptr [esp + 0x14], edi
        mov ecx, dword ptr [esp + 0x28]
        push edi
        lea eax, [esp + 0xc]
        push eax
        push ecx
        mov dword ptr [esp + 0x2c], edi
        call ext_00660A50
        mov ecx, eax
        call ext_004E89E0
        mov edx, dword ptr [esp + 0x34]
        mov eax, dword ptr [esp + 0x30]
        push edi
        push edx
        push eax
        push eax
        mov eax, dword ptr [esp + 0x3c]
        push eax
        push edi
        lea ecx, [esp + 0x20]
        push ecx
        mov ecx, esi
        call ext_004E91E0
        mov eax, dword ptr [esp + 0xc]
        cmp eax, edi
        pop edi
        pop esi
        je short L_done
        push eax
        call ext_006A5C5C
        add esp, 0x4
    L_done:
        mov ecx, dword ptr [esp + 0x10]
        mov dword ptr fs:[0x0], ecx
        add esp, 0x1c
        ret 0x10
    }
}
