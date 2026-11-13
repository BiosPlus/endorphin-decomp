// Decompiled translation unit: src/Commands/DestroyTriggeredEventCommand.cpp

extern "C" void ext_0047D7C0();
extern "C" void ext_00435D00();

// [0x0048E3B0] Commands::DestroyTriggeredEventCommand::vfunc_2 (26 bytes)
extern "C" __declspec(naked) void __fastcall fn_0048E3B0(void* self) {
    __asm {
        cmp dword ptr [ecx + 0x18], 0x0
        je L_0048E3C9
        mov eax, dword ptr [ecx + 0x14]
        mov dword ptr [ecx + 0x14], 0x0
        mov ecx, dword ptr [ecx + 0x18]
        push eax
        call ext_0047D7C0
L_0048E3C9:
        ret
    }
}

// [0x0048E7B0] Commands::DestroyTriggeredEventCommand::vfunc_3 (169 bytes)
extern "C" int mem_00924E4C;
extern "C" int mem_00924E5C;
extern "C" int mem_00924E54;
extern "C" int mem_00924E58;

extern "C" __declspec(naked) void __fastcall fn_0048E7B0(void* self, int edx_unused, void* a1) {
    __asm {
        push -1
        push 0x88533c
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x84
        push esi
        push 1
        mov esi, ecx
        push 2
        lea ecx, [esp + 0x10]
        mov dword ptr [esp + 0xc], 0
        call dword ptr [mem_00924E4C]
        mov eax, dword ptr [esi + 0x10]
        mov eax, dword ptr [eax + 0x15c]
        push eax
        lea ecx, [esp + 0xc]
        push 0x93e68c
        push ecx
        mov dword ptr [esp + 0x9c], 1
        call ext_00435D00
        add esp, 8
        mov ecx, eax
        call dword ptr [mem_00924E5C]
        mov esi, dword ptr [esp + 0x98]
        push esi
        lea ecx, [esp + 0xc]
        call dword ptr [mem_00924E54]
        lea ecx, [esp + 8]
        mov dword ptr [esp + 4], 1
        mov byte ptr [esp + 0x90], 0
        call dword ptr [mem_00924E58]
        mov ecx, dword ptr [esp + 0x88]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x90
        ret 4
    }
}

extern "C" void ext_00479550();

// [0x0048E370] Commands::DestroyTriggeredEventCommand::vfunc_1 (63 bytes)
extern "C" __declspec(naked) void __fastcall fn_0048E370(void* self) {
    __asm {
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 0x18], 0
        je L_ret
        mov ecx, dword ptr [esi + 0x10]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0x15c]
        push edi
        call edx
        mov edi, dword ptr [esi + 0x10]
        mov ecx, dword ptr [esi + 0x14]
        cmp edi, ecx
        je L_skip
        test ecx, ecx
        je L_skip
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        call edx
L_skip:
        mov dword ptr [esi + 0x14], edi
        mov eax, dword ptr [esi + 0x10]
        mov ecx, dword ptr [esi + 0x18]
        push eax
        call ext_00479550
        pop edi
L_ret:
        pop esi
        ret
    }
}
