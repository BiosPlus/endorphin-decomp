// Decompiled translation unit: src/classes/InitialVariableValues.cpp

extern "C" int mem_00925134;
extern "C" int mem_00924FE0;

// [0x005272C0] InitialVariableValues::vfunc_25 (76 bytes)
extern "C" __declspec(naked) void* __fastcall fn_005272C0(void* self) {
    __asm {
        push ecx
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0x40]
        test ecx, ecx
        push edi
        mov edi, dword ptr [esp + 0x18]
        mov dword ptr [esp + 0x8], 0x0
        je short invalid_index
        mov eax, dword ptr [esi + 0x44]
        sub eax, ecx
        sar eax, 0x2
        cmp edi, eax
        jb short index_ok
    invalid_index:
        call dword ptr [mem_00925134]
    index_ok:
        mov eax, dword ptr [esi + 0x40]
        mov ecx, dword ptr [eax + 4*edi]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0x24]
        call eax
        mov esi, dword ptr [esp + 0x10]
        push eax
        mov ecx, esi
        call dword ptr [mem_00924FE0]
        pop edi
        mov eax, esi
        pop esi
        pop ecx
        ret 0xc
    }
}

// [0x00507450] InitialVariableValues::vfunc_15 (57 bytes)
extern "C" void ext_00505A10();
extern "C" void ext_00671F30();

extern "C" __declspec(naked) int __fastcall fn_00507450(void* self, int edx_unused, int a1, int a2) {
    __asm {
        push ecx
        cmp dword ptr [esp + 0xc], 0x361
        push esi
        mov esi, dword ptr [esp + 0xc]
        mov dword ptr [esp + 0x4], 0x0
        jne short not_magic
        push ecx
        push esi
        call ext_00505A10
        add esp, 0x8
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    not_magic:
        push esi
        call ext_00671F30
        add esp, 0x4
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    }
}

extern "C" void ext_0046F7D0();
extern "C" void ext_005049B0();
extern "C" void ext_00527660();
extern "C" void ext_0055DA20();
extern "C" void ext_00661650();
extern "C" int mem_00A9F3B4;
extern "C" int mem_00924FC0;
extern "C" int mem_00AED318;
extern "C" int mem_00AED314;
extern "C" int mem_00A9EDB4;

// [0x00527740] InitialVariableValues::vfunc_13 (201 bytes)
extern "C" __declspec(naked) void* __fastcall fn_00527740(void* self, int edx_unused, void* ret_val, void* name) {
    __asm {
        push ecx
        mov eax, dword ptr [mem_00A9F3B4]
        push ebx
        mov ebx, dword ptr [mem_00924FC0]
        push esi
        push edi
        mov edi, dword ptr [esp + 0x18]
        push eax
        push edi
        mov esi, ecx
        mov dword ptr [esp + 0x14], 0x0
        call ebx
        add esp, 0x8
        test al, al
        je short loc_005277A4
        mov eax, 0x1
        test byte ptr [mem_00AED318], al
        jne short loc_00527785
        or dword ptr [mem_00AED318], eax
        call ext_00527660
        mov dword ptr [mem_00AED314], eax
    loc_00527785:
        mov ecx, dword ptr [mem_00AED314]
        add esi, 0x3c
        push esi
        mov esi, dword ptr [esp + 0x18]
        push ecx
        mov ecx, esi
        call ext_0055DA20
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        pop ecx
        ret 0x8

    loc_005277A4:
        mov edx, dword ptr [mem_00A9EDB4]
        push edx
        push edi
        call ebx
        add esp, 0x8
        test al, al
        je short loc_005277F3
        mov eax, dword ptr [esi + 0x24]
        test eax, eax
        lea ecx, [esi + 0x20]
        je short loc_005277F3
        mov edx, dword ptr [ecx + 0x8]
        sub edx, eax
        mov eax, 0x4ec4ec4f
        imul edx
        sar edx, 0x5
        mov eax, edx
        shr eax, 0x1f
        add eax, edx
        je short loc_005277F3
        push 0x0
        call ext_005049B0
        mov esi, dword ptr [esp + 0x14]
        push eax
        mov ecx, esi
        call ext_00661650
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        pop ecx
        ret 0x8

    loc_005277F3:
        mov esi, dword ptr [esp + 0x14]
        push esi
        call ext_0046F7D0
        add esp, 0x4
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        pop ecx
        ret 0x8
    }
}
