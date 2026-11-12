// Decompiled translation unit: src/classes/Camera.cpp

// [0x005490E0] Camera::vfunc_17 (200 bytes)
extern "C" void ext_0053B470();
extern "C" void ext_00547820();
extern "C" void ext_00540D60();
extern "C" void ext_006936A0();
extern "C" void ext_0047FFA0();

extern "C" __declspec(naked) void __fastcall fn_005490E0(void* self) {
    __asm {
        sub esp, 0x10
        push ebx
        push esi
        mov esi, ecx
        fld dword ptr [esi + 0x74]
        push edi
        fstp dword ptr [esi + 0xd8]
        lea edi, [esi + 0xd8]
        fld dword ptr [esi + 0x78]
        push ecx
        fstp dword ptr [edi + 0x4]
        lea eax, [esp + 0x10]
        fld dword ptr [esi + 0x7c]
        mov ecx, edi
        fstp dword ptr [edi + 0x8]
        fldz
        fstp dword ptr [edi + 0xc]
        fld dword ptr [esi + 0x70]
        fstp dword ptr [esp]
        push eax
        call ext_0053B470
        fld dword ptr [eax]
        fstp dword ptr [edi]
        push ecx
        fld dword ptr [eax + 0x4]
        lea ebx, [esi + 0x90]
        fstp dword ptr [edi + 0x4]
        lea ecx, [esp + 0x10]
        fld dword ptr [eax + 0x8]
        fstp dword ptr [edi + 0x8]
        fld dword ptr [eax + 0xc]
        fstp dword ptr [edi + 0xc]
        fld dword ptr [esi + 0x68]
        fstp dword ptr [esp]
        push ebx
        push ecx
        mov ecx, edi
        call ext_00547820
        mov ecx, eax
        call ext_00540D60
        push eax
        mov ecx, edi
        call ext_006936A0
        fld dword ptr [esi + 0x6c]
        push ecx
        fstp dword ptr [esp]
        push ebx
        mov ecx, edi
        call ext_006936A0
        push edi
        lea edx, [esp + 0x10]
        push edx
        lea ecx, [esi + 0x80]
        call ext_0047FFA0
        fld dword ptr [eax]
        fstp dword ptr [esi + 0xe8]
        pop edi
        fld dword ptr [eax + 0x4]
        fstp dword ptr [esi + 0xec]
        fld dword ptr [eax + 0x8]
        fstp dword ptr [esi + 0xf0]
        fld dword ptr [eax + 0xc]
        fstp dword ptr [esi + 0xf4]
        mov byte ptr [esi + 0x2c], 1
        pop esi
        pop ebx
        add esp, 0x10
        ret
    }
}
