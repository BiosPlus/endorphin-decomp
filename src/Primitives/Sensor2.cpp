// Decompiled translation unit: src/Primitives/Sensor2.cpp

// [0x0053D990] Primitives::Sensor2::vfunc_25 (80 bytes)
extern "C" void __fastcall fn_0053D990(void* self, int edx_unused, int a1, void* a2, int a3) {
    unsigned int* flags = (unsigned int*)((char*)self + 0x1c);
    if (*flags & 0x2) *flags ^= 0x2;
    if (!(*flags & 0x4)) *flags ^= 0x4;
    if (!(*flags & 0x40000)) *flags ^= 0x40000;
    if (*flags & 0x1) *flags ^= 0x1;
    *(float*)((char*)self + 0x60) = *(float*)((char*)a2 + 0xbc);
    *(int*)((char*)self + 0x8) = a3;
}

// [0x0053D9E0] Primitives::Sensor2::vfunc_28 (89 bytes)
extern "C" __declspec(naked) void __fastcall fn_0053D9E0(void* self, int edx_unused, int a1) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        cmp edi, 0x2
        mov esi, ecx
        je short L_end
        cmp dword ptr [esi + 0x5c], 0x0
        je short L_else
        mov ecx, dword ptr [esi + 0x38]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x2c]
        call edx
        mov eax, dword ptr [esi + 0x40]
        mov edx, dword ptr [eax + 0x58]
        lea ecx, [esi + 0x40]
        push 0x1
        call edx
        mov ecx, dword ptr [esi + 0x5c]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x58]
        push edi
        call edx
    L_end:
        pop edi
        pop esi
        ret 0x4
    L_else:
        mov ecx, dword ptr [esi + 0x3c]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x34]
        call edx
        mov eax, dword ptr [esi + 0x40]
        mov edx, dword ptr [eax + 0x58]
        lea ecx, [esi + 0x40]
        pop edi
        pop esi
        mov dword ptr [esp + 0x4], 0x1
        jmp edx
    }
}

// [0x0053CA10] Primitives::Sensor2::vfunc_29 (44 bytes)
extern "C" void ext_0053AD10();

extern "C" __declspec(naked) void __fastcall fn_0053CA10(void* self) {
    __asm {
        push esi
        mov esi, ecx
        call ext_0053AD10
        mov ecx, dword ptr [esi + 0x5c]
        test ecx, ecx
        je short L_skip
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 0x1
        call edx
    L_skip:
        fld1
        mov dword ptr [esi + 0x5c], 0x0
        fstp dword ptr [esi + 0x60]
        mov dword ptr [esi + 0x3c], 0x0
        pop esi
        ret
    }
}
