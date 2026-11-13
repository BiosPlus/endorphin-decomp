// Decompiled translation unit: src/templates/RenameElementCommand.cpp

// [0x004BA4C0] PointainerWithUndo<PointainerSet<NMData::MaterialInteraction>>::RenameElementCommand::vfunc_3 (191 bytes)
extern "C" void ext_00435D00();
extern "C" int mem_00924E4C;
extern "C" int mem_00924E94;
extern "C" int mem_00924E54;
extern "C" int mem_00924E58;

extern "C" __declspec(naked) void* __fastcall fn_004BA4C0(void* self, int edx_unused, void* a1) {
    __asm {
        push -0x1
        push 0x88533c
        mov eax, dword ptr fs:[0x0]
        push eax
        mov dword ptr fs:[0x0], esp
        sub esp, 0x84
        push esi
        push 0x1
        mov esi, ecx
        push 0x2
        lea ecx, [esp + 0x10]
        mov dword ptr [esp + 0xc], 0x0
        call dword ptr [mem_00924E4C]
        lea eax, [esi + 0x34]
        push eax
        push 0x9441a4
        add esi, 0x18
        push esi
        lea ecx, [esp + 0x14]
        push 0x94419c
        push ecx
        mov dword ptr [esp + 0xa4], 0x1
        call ext_00435D00
        mov esi, dword ptr [mem_00924E94]
        add esp, 0x8
        push eax
        call esi
        add esp, 0x8
        push eax
        call ext_00435D00
        add esp, 0x8
        push eax
        call esi
        mov esi, dword ptr [esp + 0xa0]
        add esp, 0x8
        push esi
        lea ecx, [esp + 0xc]
        call dword ptr [mem_00924E54]
        lea ecx, [esp + 0x8]
        mov dword ptr [esp + 0x4], 0x1
        mov byte ptr [esp + 0x90], 0x0
        call dword ptr [mem_00924E58]
        mov ecx, dword ptr [esp + 0x88]
        mov eax, esi
        pop esi
        mov dword ptr fs:[0x0], ecx
        add esp, 0x90
        ret 0x4
    }
}

// [0x004BC900] PointainerWithUndo<PointainerSet<NMData::MaterialInteraction>>::RenameElementCommand::vfunc_1 (55 bytes)
extern "C" void ext_004BBEB0();
extern "C" void ext_004BC4B0();
extern "C" int mem_00924FDC;

extern "C" __declspec(naked) void __fastcall fn_004BC900(void* self) {
    __asm {
        push ecx
        push ebx
        push esi
        mov esi, ecx
        mov ebx, dword ptr [esi + 0x10]
        push edi
        mov edi, dword ptr [esi + 0x14]
        lea eax, [esp + 0xc]
        push eax
        mov ecx, ebx
        mov dword ptr [esp + 0x10], edi
        call ext_004BBEB0
        add esi, 0x34
        push esi
        mov ecx, edi
        call dword ptr [mem_00924FDC]
        push 0
        push edi
        mov ecx, ebx
        call ext_004BC4B0
        pop edi
        pop esi
        pop ebx
        pop ecx
        ret
    }
}
