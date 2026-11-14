// Decompiled translation unit: src/classes/FBXIO.cpp

// [0x0055DE50] FBXIO::vfunc_3 (38 bytes)
extern "C" void ext_00553720();
extern "C" void ext_00640390();
extern "C" int mem_00A9EED4;

extern "C" __declspec(naked) void __fastcall fn_0055DE50(void* self, int edx_unused, void* a1) {
    __asm {
        mov eax, dword ptr [mem_00A9EED4]
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        push 0x0
        mov esi, ecx
        push eax
        mov ecx, edi
        call ext_00640390
        push eax
        mov ecx, esi
        call ext_00553720
        mov eax, edi
        pop edi
        pop esi
        ret 0x4
    }
}

// [0x00562A30] FBXIO::vfunc_13 (70 bytes)
extern "C" void ext_0055E990();
extern "C" void ext_0055F4E0();
extern "C" void ext_005605A0();
extern "C" void ext_005619C0();
extern "C" void ext_006629B0();

extern "C" __declspec(naked) void __fastcall fn_00562A30(void* self, int edx_unused, void* a1) {
    __asm {
        push esi
        mov esi, ecx
        call ext_0055F4E0
        test al, al
        je done
        cmp byte ptr [esi + 0x214], 0
        je skip1
        lea eax, [esi + 0x1f8]
        push eax
        call ext_006629B0
        add esp, 4
        test al, al
        jne skip2
    skip1:
        mov ecx, esi
        call ext_005605A0
    skip2:
        mov ecx, esi
        call ext_005619C0
        mov ecx, dword ptr [esp + 8]
        push ecx
        mov ecx, esi
        call ext_0055E990
    done:
        pop esi
        ret 4
    }
}

// [0x005607E0] FBXIO::vfunc_33 (305 bytes)
extern "C" void ext_0041CD60();
extern "C" void ext_0047B170();
extern "C" int mem_00944238;
extern "C" int mem_0094423C;
extern "C" int mem_009563EC;
extern "C" int mem_0092944C;
extern "C" int mem_0095894C;
extern "C" int mem_00958948;
extern "C" int mem_00958944;
extern "C" int mem_00925134;
extern "C" int mem_00993838;

extern "C" __declspec(naked) int __fastcall fn_005607E0(void* self, int edx_unused, void* a1, float a2) {
    __asm {
        push ecx
        fld dword ptr [mem_00944238]
        push ebx
        push esi
        fstp dword ptr [esp + 0x8]
        mov esi, dword ptr [esp + 0x14]
        push edi
        lea eax, [esp + 0xc]
        mov edi, ecx
        push eax
        mov ecx, esi
        call ext_0047B170
        fld dword ptr [mem_0094423C]
        lea ecx, [esp + 0x18]
        fstp dword ptr [esp + 0x18]
        push ecx
        mov ecx, esi
        call ext_0047B170
        fld dword ptr [mem_009563EC]
        lea edx, [esp + 0x18]
        fstp dword ptr [esp + 0x18]
        push edx
        mov ecx, esi
        call ext_0047B170
        fld dword ptr [mem_0092944C]
        lea eax, [esp + 0x18]
        fstp dword ptr [esp + 0x18]
        push eax
        mov ecx, esi
        call ext_0047B170
        fld dword ptr [mem_0095894C]
        lea ecx, [esp + 0x18]
        fstp dword ptr [esp + 0x18]
        push ecx
        mov ecx, esi
        call ext_0047B170
        fld dword ptr [mem_00958948]
        lea edx, [esp + 0x18]
        fstp dword ptr [esp + 0x18]
        push edx
        mov ecx, esi
        call ext_0047B170
        fld dword ptr [mem_00958944]
        lea eax, [esp + 0x18]
        fstp dword ptr [esp + 0x18]
        push eax
        mov ecx, esi
        call ext_0047B170
        fld dword ptr [edi + 0x174]
        mov ecx, esi
        fstp dword ptr [esp + 0x18]
        xor edi, edi
        call ext_0041CD60
        test eax, eax
        jle L_5608E3
        mov ebx, dword ptr [mem_00925134]
    L_5608A1:
        mov ecx, dword ptr [esi + 0x4]
        test ecx, ecx
        je L_5608B4
        mov eax, dword ptr [esi + 0x8]
        sub eax, ecx
        sar eax, 0x2
        cmp edi, eax
        jb L_5608B6
    L_5608B4:
        call ebx
    L_5608B6:
        mov ecx, dword ptr [esi + 0x4]
        fld dword ptr [ecx + 4*edi]
        fsub dword ptr [esp + 0x18]
        fstp dword ptr [esp + 0xc]
        fld dword ptr [esp + 0xc]
        fcomp dword ptr [mem_00993838]
        fnstsw ax
        test ah, 0x41
        jnp L_5608F6
        mov ecx, esi
        add edi, 0x1
        call ext_0041CD60
        cmp edi, eax
        jl L_5608A1
    L_5608E3:
        mov eax, dword ptr [esi + 0x4]
        test eax, eax
        jne L_5608FF
        xor esi, esi
        pop edi
        lea eax, [esi - 0x1]
        pop esi
        pop ebx
        pop ecx
        ret 0x8
    L_5608F6:
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        pop ecx
        ret 0x8
    L_5608FF:
        mov esi, dword ptr [esi + 0x8]
        sub esi, eax
        sar esi, 0x2
        pop edi
        lea eax, [esi - 0x1]
        pop esi
        pop ebx
        pop ecx
        ret 0x8
    }
}
