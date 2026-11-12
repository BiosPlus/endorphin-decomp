// Decompiled translation unit: src/classes/ImageExporter.cpp

// [0x0046F6C0] ImageExporter::vfunc_15_off_4 (247 bytes)
extern "C" void ext_0046F6A0();
extern "C" void ext_0046F660();
extern "C" void ext_0046F620();
extern "C" void ext_0046F680();
extern "C" void ext_0046F600();
extern "C" void ext_0046F5E0();
extern "C" void ext_0046F640();
extern "C" void ext_00671F30();

extern "C" __declspec(naked) void __fastcall fn_0046F6C0(void* self, int edx_unused, int a1, int key) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0xc]
        cmp eax, 0x1af
        push esi
        mov dword ptr [esp + 0x4], 0
        jg l_hi
        je l_1af
        sub eax, 0xa9
        je l_a9
        sub eax, 0x64
        je l_10d
        sub eax, 0x3a
        jne l_default

        mov esi, dword ptr [esp + 0xc]
        add ecx, -0x4
        push ecx
        push esi
        call ext_0046F620
        add esp, 0x8
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8

l_10d:
        mov esi, dword ptr [esp + 0xc]
        add ecx, -0x4
        push ecx
        push esi
        call ext_0046F660
        add esp, 0x8
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8

l_a9:
        mov esi, dword ptr [esp + 0xc]
        add ecx, -0x4
        push ecx
        push esi
        call ext_0046F6A0
        add esp, 0x8
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8

l_1af:
        mov esi, dword ptr [esp + 0xc]
        add ecx, -0x4
        push ecx
        push esi
        call ext_0046F680
        add esp, 0x8
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8

l_hi:
        sub eax, 0x247
        je l_247
        sub eax, 0x21
        je l_268
        sub eax, 0x81
        je l_2e9

l_default:
        mov esi, dword ptr [esp + 0xc]
        push esi
        call ext_00671F30
        add esp, 0x4
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8

l_2e9:
        mov esi, dword ptr [esp + 0xc]
        add ecx, -0x4
        push ecx
        push esi
        call ext_0046F640
        add esp, 0x8
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8

l_268:
        mov esi, dword ptr [esp + 0xc]
        add ecx, -0x4
        push ecx
        push esi
        call ext_0046F5E0
        add esp, 0x8
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8

l_247:
        mov esi, dword ptr [esp + 0xc]
        add ecx, -0x4
        push ecx
        push esi
        call ext_0046F600
        add esp, 0x8
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    }
}
