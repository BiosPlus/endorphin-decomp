// Decompiled translation unit: src/Primitives/Bone.cpp

// [0x0053C4F0] Primitives::Bone::vfunc_13 (34 bytes)
extern "C" void __fastcall fn_0053C4F0(void* self, int edx_unused, const float* src) {
    unsigned char* p = static_cast<unsigned char*>(self);
    p[0x4] = 1;
    float* dst = reinterpret_cast<float*>(p + 0x3C);
    dst[0] = src[0];
    dst[1] = src[1];
    dst[2] = src[2];
    dst[3] = src[3];
}

extern "C" void ext_0053A610();
extern "C" void ext_005B11E0();

// [0x0053E1C0] Primitives::Bone::vfunc_25 (123 bytes)
extern "C" __declspec(naked) void __fastcall fn_0053E1C0(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        mov eax, dword ptr [esp + 0xc]
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        mov esi, ecx
        mov ecx, dword ptr [esp + 0x10]
        push eax
        push ecx
        push edi
        mov ecx, esi
        call ext_0053A610
        mov eax, dword ptr [esi + 0x1c]
        test al, 0x4
        jne skip_a
        xor eax, 0x4
        mov dword ptr [esi + 0x1c], eax
skip_a:
        mov eax, dword ptr [esi + 0x1c]
        test eax, 0x40000
        jne skip_b
        xor eax, 0x40000
        mov dword ptr [esi + 0x1c], eax
skip_b:
        mov eax, dword ptr [esi + 0x1c]
        test al, 0x1
        je skip_c
        xor eax, 0x1
        mov dword ptr [esi + 0x1c], eax
skip_c:
        push 0x0
        mov ecx, edi
        call ext_005B11E0
        fstp dword ptr [esi + 0x3c]
        push 0x1
        mov ecx, edi
        call ext_005B11E0
        fstp dword ptr [esi + 0x40]
        push 0x2
        mov ecx, edi
        call ext_005B11E0
        fstp dword ptr [esi + 0x44]
        push 0x3
        mov ecx, edi
        call ext_005B11E0
        fstp dword ptr [esi + 0x48]
        pop edi
        pop esi
        ret 0xc
    }
}
