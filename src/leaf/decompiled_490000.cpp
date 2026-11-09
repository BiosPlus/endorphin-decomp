// Decompiled translation unit: src/leaf/decompiled_490000.cpp

// [0x00493E10] sub_00493E10 (20 bytes)
// Tail-call thunk: stores the byte argument at self+8, forwards self->inner's vfunc[5] with the arg.
extern "C" __declspec(naked) void __fastcall fn_00493E10(void* self) {
    __asm {
        mov eax, dword ptr [esp + 4]
        mov byte ptr [ecx + 8], al
        mov ecx, dword ptr [ecx]
        mov edx, dword ptr [ecx]
        mov dword ptr [esp + 4], eax
        mov eax, dword ptr [edx + 0x14]
        jmp eax
    }
}

// [0x00494830] sub_00494830 (33 bytes)
// Returns 0 if this->f0C is 0; otherwise (this->f10 - this->f0C) / 28 (signed).
extern "C" int __fastcall fn_00494830(const int* self) {
    int a = self[3];
    if (a == 0) {
        return 0;
    }
    return (self[4] - a) / 28;
}

// [0x004940D0] sub_004940D0 (8 bytes)
// Calls sub_00494050 (ecx preserved across the call), then returns the original this in eax.
extern "C" void ext_00494050();

extern "C" __declspec(naked) void __fastcall fn_004940D0(void* self) {
    __asm {
        call ext_00494050
        mov eax, ecx
        ret
    }
}

// [0x004940E0] sub_004940E0 (24 bytes)
extern "C" void ext_00494060();

extern "C" __declspec(naked) void __fastcall fn_004940E0(void* self) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        test dword ptr [ecx], eax
        setne dl
        cmp dl, byte ptr [esp + 0x8]
        je L_done
        push eax
        call ext_00494060
    L_done:
        ret 0x8
    }
}

// [0x00496CE0] sub_00496CE0 (25 bytes)
// __thiscall with ret 4: pushes arg, calls sub_004948C0 (result pushed), then calls sub_00496CC0 with ecx=this.
extern "C" void ext_004948C0();
extern "C" void ext_00496CC0();

extern "C" __declspec(naked) void __fastcall fn_00496CE0(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        push eax
        mov esi, ecx
        call ext_004948C0
        push eax
        mov ecx, esi
        call ext_00496CC0
        pop esi
        ret 0x4
    }
}

// [0x00496CC0] sub_00496CC0 (26 bytes)
// Stores the stack argument at self+4, calls sub_004966F0(self), then sub_00496220(self).
extern "C" void ext_004966F0();
extern "C" void ext_00496220();

extern "C" __declspec(naked) void __fastcall fn_00496CC0(void* self, int edx_unused, int a1) {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        mov esi, ecx
        mov dword ptr [esi + 4], eax
        call ext_004966F0
        mov ecx, esi
        call ext_00496220
        pop esi
        ret 4
    }
}

// [0x00491870] sub_00491870 (27 bytes)
extern "C" void ext_00491730();

extern "C" __declspec(naked) void __fastcall fn_00491870(void* self, int edx_unused, int a1, int a2) {
    __asm {
        mov eax, dword ptr [esp + 8]
        mov edx, dword ptr [esp + 4]
        push eax
        push ecx
        mov ecx, dword ptr [esp + 0x10]
        push ecx
        push edx
        call ext_00491730
        add esp, 0x10
        ret 8
    }
}

// [0x0049F2E0] sub_0049F2E0 (27 bytes)
extern "C" void ext_0049ECB0();
extern "C" __declspec(naked) void __fastcall fn_0049F2E0(void* self, int edx_unused, int a1, int a2) {
    __asm {
        mov eax, dword ptr [esp + 0x8]
        mov edx, dword ptr [esp + 0x4]
        push eax
        push ecx
        mov ecx, dword ptr [esp + 0x10]
        push ecx
        push edx
        call ext_0049ECB0
        add esp, 0x10
        ret 0x8
    }
}

// [0x0049CF20] sub_0049CF20 (29 bytes)
extern "C" void* __cdecl ext_006A5C62(unsigned int size);

extern "C" void __fastcall fn_0049CF20(void* self) {
    void* p = ext_006A5C62(0xd4);
    if (p) {
        *(void**)p = p;
    }
    void* q = (char*)p + 4;
    if (q) {
        *(void**)q = p;
    }
}

// [0x0049CF40] sub_0049CF40 (29 bytes)
extern "C" void* __cdecl ext_006A5C62(unsigned int size);

extern "C" void __fastcall fn_0049CF40(void* self) {
    void* p = ext_006A5C62(0x140);
    if (p) {
        *(void**)p = p;
    }
    void* q = (char*)p + 4;
    if (q) {
        *(void**)q = p;
    }
}

// [0x004936C0] sub_004936C0 (29 bytes)
// Zeroes self->[0], [+8], [+0xC], [+0x10], calls sub_00493370 (ecx = this), then tail-jumps to sub_00492610 with ecx = this.
extern "C" void ext_00493370();
extern "C" void ext_00492610();

extern "C" __declspec(naked) void __fastcall fn_004936C0(void* self) {
    __asm {
        xor eax, eax
        push esi
        mov esi, ecx
        mov dword ptr [esi], eax
        mov dword ptr [esi + 0x8], eax
        mov dword ptr [esi + 0xc], eax
        mov dword ptr [esi + 0x10], eax
        call ext_00493370
        mov ecx, esi
        pop esi
        jmp ext_00492610
    }
}

// [0x0049AD20] sub_0049AD20 (29 bytes)
extern "C" void ext_004A1390();
extern "C" void ext_006A5C5C(void* arg);

extern "C" void __fastcall fn_0049AD20(void* self) {
    ext_004A1390();
    ext_006A5C5C(*(void**)((unsigned char*)self + 4));
    *(void**)((unsigned char*)self + 4) = 0;
}

// [0x0049E910] sub_0049E910 (29 bytes)
extern "C" void ext_0049E8D0();
extern "C" void ext_006A5C5C(void* arg);

extern "C" void __fastcall fn_0049E910(void* self) {
    ext_0049E8D0();
    ext_006A5C5C(*(void**)((unsigned char*)self + 4));
    *(void**)((unsigned char*)self + 4) = 0;
}

// [0x004952F0] sub_004952F0 (35 bytes)
// One-time init: if bit0 of mem_00ADC4E8 is clear, set it and store 0x93EC28 into mem_00ADC4E4.
// Returns the address of mem_00ADC4E4.
extern "C" int mem_00ADC4E8;
extern "C" int mem_00ADC4E4;

extern "C" void* __cdecl fn_004952F0() {
    if (!(mem_00ADC4E8 & 1)) {
        mem_00ADC4E8 |= 1;
        mem_00ADC4E4 = 0x0093EC28;
    }
    return &mem_00ADC4E4;
}

// [0x0049D360] sub_0049D360 (35 bytes)
extern "C" int mem_00ADD820;
extern "C" int mem_00ADD81C;
extern "C" int* __cdecl fn_0049D360() {
    if (!(mem_00ADD820 & 1)) {
        mem_00ADD820 |= 1;
        mem_00ADD81C = 0x93fcc0;
    }
    return &mem_00ADD81C;
}
