// Decompiled translation unit: src/classes/GWCHotKeyPropertiesFactory.cpp

extern "C" void ext_006A5C62();
extern "C" void ext_006B3C90();
extern "C" int mem_009919E4;

// [0x006B1840] GWCHotKeyPropertiesFactory::vfunc_1 (147 bytes)
extern "C" __declspec(naked) void* __fastcall fn_006B1840(void* self, int edx_unused, void* a1, int a2, void* a3) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 08B783Bh
        push eax
        mov dword ptr fs:[0x0], esp
        push esi
        mov esi, dword ptr [esp + 0x18]
        cmp esi, dword ptr [mem_009919E4]
        jne loc_006B18BF
        push 0x44
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp + 0x18], eax
        test eax, eax
        mov dword ptr [esp + 0xc], 0
        je loc_006B188D
        mov ecx, dword ptr [esp + 0x14]
        push esi
        push ecx
        mov ecx, eax
        call ext_006B3C90
        mov esi, eax
        jmp loc_006B188F

    loc_006B188D:
        xor esi, esi

    loc_006B188F:
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
        mov eax, esi
        mov ecx, dword ptr [esp + 0x4]
        mov dword ptr fs:[0x0], ecx
        pop esi
        add esp, 0xc
        ret 0xc

    loc_006B18BF:
        mov ecx, dword ptr [esp + 0x4]
        xor eax, eax
        mov dword ptr fs:[0x0], ecx
        pop esi
        add esp, 0xc
        ret 0xc
    }
}
