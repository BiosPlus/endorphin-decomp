// Decompiled translation unit: src/classes/PoseLoader.cpp

extern "C" void ext_00427550();
extern "C" void ext_004275E0();
extern "C" void ext_0063EFE0();
extern "C" void ext_00640110();
extern "C" int mem_00924FF0;
extern "C" int mem_00952780;
extern "C" void ext_00521B70();
extern "C" void ext_006A6E9E();
extern "C" int mem_00924FDC;

// [0x005213F0] PoseLoader::vfunc_1_off_4 (34 bytes)
extern "C" void __fastcall fn_005213F0(void* self, int edx_unused, void* a1) {
    void* r = ((void* (__fastcall*)(void*, int, void*))ext_0063EFE0)(a1, edx_unused, (void*)0x952780);
    ((void (__cdecl*)(void*, void*))ext_004275E0)((char*)self + 4, r);
}

// [0x00521470] PoseLoader::vfunc_3_off_4 (50 bytes)
extern "C" __declspec(naked) void __fastcall fn_00521470(void* self) {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0xc]
        mov esi, ecx
        push offset mem_00952780
        mov ecx, edi
        call ext_00640110
        lea ecx, [esi + 0x4]
        mov dword ptr [esp + 0xc], eax
        call dword ptr [mem_00924FF0]
        push eax
        lea ecx, [esp + 0x10]
        call ext_00427550
        mov eax, edi
        pop edi
        pop esi
        ret 0x4
    }
}

// [0x00521C00] PoseLoader::vfunc_10 (67 bytes)
extern "C" __declspec(naked) void __fastcall fn_00521C00(void* self) {
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        push edi
        push 0x0
        push 0xa434b0
        push 0xa2e2f8
        push 0x0
        push eax
        mov edi, ecx
        call ext_006A6E9E
        mov esi, eax
        add esp, 0x14
        test esi, esi
        je done
        lea ecx, [esi + 0x8]
        push ecx
        lea ecx, [edi + 0x8]
        call dword ptr [mem_00924FDC]
        add esi, 0x24
        push esi
        lea ecx, [edi + 0x24]
        call ext_00521B70
    done:
        pop edi
        pop esi
        ret 0x4
    }
}
