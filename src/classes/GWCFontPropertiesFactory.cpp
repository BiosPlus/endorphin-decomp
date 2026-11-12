// Decompiled translation unit: src/classes/GWCFontPropertiesFactory.cpp

// [0x006B19D0] GWCFontPropertiesFactory::vfunc_1 (202 bytes)
extern "C" void ext_006A5C62();
extern "C" void ext_006B43F0();
extern "C" int mem_00991A2C;
extern "C" int mem_00991A30;

extern "C" __declspec(naked) void* __fastcall fn_006B19D0(void* self, int edx_unused, void* a1, int a2, void* a3) {
    __asm {
        mov eax, dword ptr fs:[0x0]
        push -1
        push 008B7866h
        push eax
        mov dword ptr fs:[0x0], esp
        push esi
        mov esi, dword ptr [esp + 0x18]
        cmp esi, dword ptr [mem_00991A2C]
        jne loc_006B1A51
        push 0x4c
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp + 0x18], eax
        test eax, eax
        mov dword ptr [esp + 0xc], 0
        je loc_006B1A1F
        mov ecx, dword ptr [esp + 0x14]
        push 0
        push esi
        push ecx
        mov ecx, eax
        call ext_006B43F0
        mov esi, eax
        jmp loc_006B1A21

    loc_006B1A1F:
        xor esi, esi

    loc_006B1A21:
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

    loc_006B1A51:
        cmp esi, dword ptr [mem_00991A30]
        jne loc_006B1A86
        push 0x4c
        call ext_006A5C62
        add esp, 4
        mov dword ptr [esp + 0x18], eax
        test eax, eax
        mov dword ptr [esp + 0xc], 1
        je loc_006B1A1F
        mov ecx, dword ptr [esp + 0x14]
        push 1
        push esi
        push ecx
        mov ecx, eax
        call ext_006B43F0
        mov esi, eax
        jmp loc_006B1A21

    loc_006B1A86:
        mov ecx, dword ptr [esp + 0x4]
        xor eax, eax
        mov dword ptr fs:[0x0], ecx
        pop esi
        add esp, 0xc
        ret 0xc
    }
}
