// Decompiled translation unit: src/Primitives/CameraFrustum.cpp

extern "C" void ext_0053A610();

// [0x0053E170] Primitives::CameraFrustum::vfunc_25 (78 bytes)
extern "C" __declspec(naked) void __fastcall fn_0053E170(void* self, int edx_unused, int a1, int a2, int a3) {
    __asm {
        mov eax, dword ptr [esp + 0xc]
        mov edx, dword ptr [esp + 0x4]
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 0xc]
        push eax
        push ecx
        push edx
        mov ecx, esi
        call ext_0053A610
        mov eax, dword ptr [esi + 0x1c]
        test eax, 0x100
        jne skip1
        xor eax, 0x100
        mov dword ptr [esi + 0x1c], eax
skip1:
        mov eax, dword ptr [esi + 0x1c]
        test eax, 0x40000
        jne skip2
        xor eax, 0x40000
        mov dword ptr [esi + 0x1c], eax
skip2:
        mov eax, dword ptr [esi + 0x1c]
        test al, 0x2
        je skip3
        xor eax, 0x2
        mov dword ptr [esi + 0x1c], eax
skip3:
        pop esi
        ret 0xc
    }
}
