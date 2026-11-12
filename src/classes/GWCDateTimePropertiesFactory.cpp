// Decompiled translation unit: src/classes/GWCDateTimePropertiesFactory.cpp

extern "C" void ext_006A5C62();
extern "C" void ext_006B4060();
extern "C" int mem_00991A08;
extern "C" int mem_00991A0C;

// [0x006B1910] GWCDateTimePropertiesFactory::vfunc_1 (155 bytes)
extern "C" __declspec(naked) void* __fastcall fn_006B1910(void* self, int edx_unused, void* a1, int a2, void* a3) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 08B783Bh
        push eax
        mov dword ptr fs:[0x0], esp
        push esi
        mov esi, dword ptr [esp + 0x18]
        cmp esi, dword ptr [mem_00991A08]
        je loc_006B194E
        cmp esi, dword ptr [mem_00991A0C]
        je loc_006B194E
        xor eax, eax
        mov ecx, dword ptr [esp + 0x4]
        mov dword ptr fs:[0x0], ecx
        pop esi
        add esp, 0xc
        ret 0xc

    loc_006B194E:
        push 0x44
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp + 0x18], eax
        test eax, eax
        mov dword ptr [esp + 0xc], 0
        je loc_006B1979
        mov ecx, dword ptr [esp + 0x14]
        push esi
        push ecx
        mov ecx, eax
        call ext_006B4060
        mov esi, eax
        jmp loc_006B197B

    loc_006B1979:
        xor esi, esi

    loc_006B197B:
        mov eax, dword ptr [esp + 0x1c]
        mov edx, dword ptr [esi]
        mov edx, dword ptr [edx + 0x14]
        test eax, eax
        sete cl
        mov dword ptr [esp + 0xc], -1
        push ecx
        push eax
        mov ecx, esi
        call edx
        mov ecx, dword ptr [esp + 0x4]
        mov eax, esi
        mov dword ptr fs:[0x0], ecx
        pop esi
        add esp, 0xc
        ret 0xc
    }
}
