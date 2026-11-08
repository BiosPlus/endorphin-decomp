// Decompiled translation unit: src/Primitives/Animation.cpp

// [0x0053AE20] Primitives::Animation::vfunc_11 (32 bytes)
extern "C" __declspec(naked) void __fastcall fn_0053AE20(void* self, int edx_unused, int a1, int a2) {
    __asm {
        mov eax, dword ptr [ecx + 0x1c]
        push esi
        mov esi, dword ptr [esp + 0x8]
        mov edx, eax
        and edx, esi
        cmp edx, esi
        sete dl
        cmp dl, byte ptr [esp + 0xc]
        je L_done
        xor eax, esi
        mov dword ptr [ecx + 0x1c], eax
    L_done:
        pop esi
        ret 0x8
    }
}
