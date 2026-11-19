// Decompiled translation unit: src/NMData/MaterialPair.cpp

// [0x004BAAF0] NMData::MaterialPair::vfunc_15 (132 bytes)
extern "C" void ext_00499130();
extern "C" void ext_00671F30();
extern "C" int mem_004BAB74;
extern "C" int mem_004BAB84;

extern "C" __declspec(naked) void __fastcall fn_004BAAF0(void* self) {
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0xc]
        add eax, 0xfffffd4b
        cmp eax, 0xd1
        push esi
        mov dword ptr [esp + 0x4], 0
        ja LDefault
        movzx eax, byte ptr [eax + mem_004BAB84]
        jmp dword ptr [4 * eax + mem_004BAB74]
LCaseC:
        mov esi, dword ptr [esp + 0xc]
        add ecx, 0x4
        push ecx
        push esi
        call ext_00499130
        add esp, 0x8
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
LCaseA:
        mov esi, dword ptr [esp + 0xc]
        add ecx, 0x20
        push ecx
        push esi
        call ext_00499130
        add esp, 0x8
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
LCaseB:
        mov esi, dword ptr [esp + 0xc]
        add ecx, 0x3c
        push ecx
        push esi
        call ext_00499130
        add esp, 0x8
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
LDefault:
        mov esi, dword ptr [esp + 0xc]
        push esi
        call ext_00671F30
        add esp, 0x4
        mov eax, esi
        pop esi
        pop ecx
        ret 0x8
    }
}
