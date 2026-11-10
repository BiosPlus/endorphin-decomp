// Decompiled translation unit: src/Primitives/Frustum.cpp

extern "C" void ext_0053AD10();
extern "C" void ext_0053A610();

// [0x0053BC20] Primitives::Frustum::vfunc_29 (24 bytes)
extern "C" void __fastcall fn_0053BC20(void* self) {
    ext_0053AD10();
    *(int*)((char*)self + 0x3c) = 0x14;
    *(int*)((char*)self + 0x40) = 1;
}

// [0x0053DB00] Primitives::Frustum::vfunc_25 (62 bytes)
extern "C" __declspec(naked) void __fastcall fn_0053DB00(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        mov eax, dword ptr [esp + 0xc]
        push esi
        push edi
        mov edi, dword ptr [esp + 0x10]
        push eax
        mov esi, ecx
        mov ecx, dword ptr [esp + 0x10]
        push edi
        push ecx
        mov ecx, esi
        call ext_0053A610
        mov eax, dword ptr [esi + 0x1c]
        test al, 0x40
        jne flags_set
        xor eax, 0x40
        mov dword ptr [esi + 0x1c], eax
flags_set:
        mov edx, dword ptr [edi + 0x88]
        mov dword ptr [esi + 0x3c], edx
        mov eax, dword ptr [edi + 0x8c]
        pop edi
        mov dword ptr [esi + 0x40], eax
        pop esi
        ret 0xc
    }
}
