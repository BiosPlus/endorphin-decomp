// Decompiled translation unit: src/Primitives/Sphyl.cpp

extern "C" void ext_0053A610();
extern "C" int mem_00924FFC;

// [0x0053DA40] Primitives::Sphyl::vfunc_25 (90 bytes)
extern "C" __declspec(naked) void __fastcall fn_0053DA40(void* self, int edx_unused, int a1, int a2, int a3) {
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
        jne short L_skip
        xor eax, 0x40
        mov dword ptr [esi + 0x1c], eax
L_skip:
        mov edx, dword ptr [edi + 0x88]
        mov dword ptr [esi + 0x3c], edx
        mov eax, dword ptr [edi + 0x8c]
        mov dword ptr [esi + 0x40], eax
        mov ecx, dword ptr [edi + 0x84]
        mov dword ptr [esi + 0x44], ecx
        push 0
        lea ecx, [edi + 0x9c]
        call dword ptr [mem_00924FFC]
        mov dl, byte ptr [eax]
        pop edi
        mov byte ptr [esi + 0x48], dl
        pop esi
        ret 0xc
    }
}
