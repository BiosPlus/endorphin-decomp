// Decompiled translation unit: src/Commands/SetSaveEndFrameCommand.cpp

extern "C" void ext_0046FDC0();
extern "C" void ext_00435D00();
extern "C" int mem_00924E4C;
extern "C" int mem_00924E5C;
extern "C" int mem_00924E54;
extern "C" int mem_00924E58;

// [0x0048E0D0] Commands::SetSaveEndFrameCommand::vfunc_1 (13 bytes)
extern "C" __declspec(naked) void __fastcall fn_0048E0D0(void* self) {
    __asm {
        mov eax, dword ptr [ecx + 0x14]
        mov ecx, dword ptr [ecx + 0x10]
        push eax
        call ext_0046FDC0
        ret
    }
}

// [0x0048E0E0] Commands::SetSaveEndFrameCommand::vfunc_2 (13 bytes)
extern "C" __declspec(naked) void __fastcall fn_0048E0E0(void* self) {
    __asm {
        mov eax, dword ptr [ecx + 0x18]
        mov ecx, dword ptr [ecx + 0x10]
        push eax
        call ext_0046FDC0
        ret
    }
}

// [0x0048E6E0] Commands::SetSaveEndFrameCommand::vfunc_3 (163 bytes)
extern "C" __declspec(naked) void __fastcall fn_0048E6E0(void* self, int edx_unused, void* sret) {
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
        mov eax, dword ptr [esi + 0x14]
        push eax
        lea ecx, [esp + 0xc]
        push 0x93e66c
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
